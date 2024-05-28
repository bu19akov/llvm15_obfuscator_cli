import subprocess
import os
import cmd
from colorama import Fore, Style, init

init(autoreset=True)

class ObfuscatorCLI(cmd.Cmd):
    intro = f'{Fore.CYAN}Welcome to the interactive Obfuscator CLI. Type help or ? to list available commands.'
    prompt = f'{Fore.YELLOW}(obfuscator) '

    def __init__(self):
        super().__init__()
        self.llvm_15_path = self.get_llvm_15_path()
        self.obfuscation_map = {
            'strobfs': ('String Obfuscation', ['libStringObfuscation.so'], 'strobfs'),
            'substitution': ('Substitution', ['libSubstitution.so'], 'substitution'),
            'op': ('Opaque Predicate Obfuscation', ['libSubstitution.so', 'libReachableIntegers.so', 'libBogusFlowOpaquePredicates.so'], 'op'),
            'mergef': ('Merge Functions', ['libMergeFuncs.so'], 'mergef'),
            'jmp': ('Jump Into Loop Obfuscation', ['libSubstitution.so', 'libReachableIntegers.so', 'libBogusFlowOpaquePredicates.so', 'libBogusFlowJumpIntoLoop.so'], 'jmp'),
            'cff': ('Control Flow Flattening', ['libControlFlowFlattening.so'], 'cff'),
            'cobfs': ('Constant Obfuscation', ['libSubstitution.so', 'libReachableIntegers.so', 'libConstantObfuscation.so'], 'cobfs'),
            'callobfs': ('Call Obfuscation', ['libCallObfuscation.so'], 'callobfs'),
            'branchf': ('Branch Function Obfuscation', ['libSubstitution.so', 'libReachableIntegers.so', 'libBogusFlowOpaquePredicates.so', 'libBranchFunction.so'], 'branchf'),
            'floop': ('Bogus Flow Obfuscation', ['libSubstitution.so', 'libReachableIntegers.so', 'libBogusFlowOpaquePredicates.so', 'libBogusFlowIntroduceLoop.so'], 'floop'),
            'bext': ('Block Extract', ['libBlockExtractor.so'], 'bext'),
        }
    
    def get_llvm_15_path(self):
        llvm_15_path = os.getenv('LLVM_15_PATH', '/usr/local/opt/llvm@15')
        if not os.path.isdir(llvm_15_path):
            print(f"{Fore.RED}LLVM path '{llvm_15_path}' does not exist. Please set the LLVM_PATH environment variable correctly.")
            exit(1)
        return llvm_15_path

    def run_subprocess(self, command, cwd=None, shell=True):
        """Utility function to run subprocess commands"""
        try:
            result = subprocess.run(command, cwd=cwd, shell=shell, check=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True)
            return True
        except subprocess.CalledProcessError as e:
            print(f"{Fore.RED}Failed to execute: {command}\nError: {e.stderr.strip()}")
            return False

    def do_install(self, arg):
        """Install necessary tools for obfuscation including additional obfuscator"""
        print(f"{Fore.MAGENTA}Starting installation...")
        repos = [
            ("https://github.com/Despire/llvm-obfuscator.git", "llvm-obfuscator")
        ]

        for repo_url, clone_dir in repos:
            if not os.path.exists(clone_dir):
                if not self.run_subprocess(f"git clone {repo_url}"):
                    print(f"{Fore.RED}Failed to clone repository {repo_url}. Please check your internet connection or permissions.")
                    return

        # Handling llvm-obfuscator installation
        llvm_obfuscator_dir = "llvm-obfuscator"
        cmake_file_path = os.path.join(llvm_obfuscator_dir, "CMakeLists.txt")

        # Assuming CMakeLists.txt already exists in the cloned directory
        if os.path.exists(cmake_file_path):
            with open(cmake_file_path, 'r') as file:
                content = file.read()

            content = content.replace('/opt/homebrew/opt/llvm@15', self.llvm_15_path)
            with open(cmake_file_path, 'w') as file:
                file.write(content)
                print(f"{Fore.BLUE}CMakeLists.txt for llvm-obfuscator updated.")

        build_dir = os.path.join(llvm_obfuscator_dir, "build")
        os.makedirs(build_dir, exist_ok=True)
        if self.run_subprocess("cmake ..", cwd=build_dir) and \
        self.run_subprocess("make", cwd=build_dir):
            print(f"{Fore.GREEN}llvm-obfuscator installation completed successfully.")
        else:
            print(f"{Fore.RED}llvm-obfuscator installation failed. Please check the error messages above.")

    def obfuscate_sequence(self, args):
        """Apply a sequence of obfuscations based on user input"""
        
        if not os.path.exists("/usr/src/app/llvm-obfuscator/"):
            print(f"{Fore.RED}The tool needs to be installed first. Please run the 'install' command.")
            return
        
        args = args.split()
        if len(args) < 2:
            print(f"{Fore.YELLOW}Please specify the sequence of obfuscations followed by the input file. Usage: <obfuscation_types> <input_file.c>")
            return

        input_file = "../c_codes/" + args[-1]
        if not os.path.exists(input_file):
            print(f"{Fore.RED}The file '{input_file}' does not exist.")
            return

        obfuscations = args[:-1]
        for obf in obfuscations:
            if obf not in self.obfuscation_map:
                print(f"{Fore.RED}Invalid obfuscation type '{obf}'.")
                return

        output_dir = "../c_codes/output/"
        os.makedirs(output_dir, exist_ok=True)

        filename_no_ext = os.path.splitext(os.path.join(output_dir, args[-1]))[0]
        ll_file = f"{filename_no_ext}.ll"
        current_ll_file = ll_file
        s_file = ""
        output_file = ""

        print(f"{Fore.MAGENTA}Performing obfuscations on {args[-1]}...")

        # Step 1: Generate initial .ll file
        clang_command = f"clang -O1 -fPIC -S -emit-llvm -o {ll_file} {input_file}"
        if not self.run_subprocess(clang_command):
            print(f"{Fore.RED}Failed to generate LLVM IR from {input_file}.")
            return

        # Step 2: Apply each obfuscation in sequence
        for obf in obfuscations:
            obf_name, lib_names, pass_name = self.obfuscation_map[obf]
            new_ll_file = f"{current_ll_file.rsplit('.', 1)[0]}_{pass_name}.ll"
            opt_command = f"{self.llvm_15_path}/bin/opt "
            for lib_name in lib_names:
                opt_command += f"-load-pass-plugin /usr/src/app/llvm-obfuscator/build/lib/{lib_name} "
            opt_command += f"-passes={pass_name} -S {current_ll_file} -o {new_ll_file}"

            if not self.run_subprocess(opt_command):
                print(f"{Fore.RED}Obfuscation '{obf_name}' failed.")
                return

            if current_ll_file != ll_file:
                os.remove(current_ll_file)  # Remove the previous .ll file
            current_ll_file = new_ll_file

        # Step 3: Generate final .s and executable files
        s_file = f"{current_ll_file.rsplit('.', 1)[0]}.s"
        output_file = f"{current_ll_file.rsplit('.', 1)[0]}"

        llc_command = f"llc -filetype=asm -relocation-model=pic {current_ll_file} -o {s_file}"
        if not self.run_subprocess(llc_command):
            print(f"{Fore.RED}Failed to generate assembly from {current_ll_file}.")
            return

        clang_output_command = f"clang -fPIE -pie {s_file} -o {output_file}"
        if not self.run_subprocess(clang_output_command):
            print(f"{Fore.RED}Failed to generate executable from {s_file}.")
            return

        display_path = output_file.split("../c_codes/")[-1]
        print(f"{Fore.GREEN}Obfuscation sequence completed. Output file: {display_path}")

    def do_obfuscate(self, arg):
        """Obfuscate a file using a sequence of obfuscations. Usage: obfuscate <obfuscation_types> <input_file.c>"""
        self.obfuscate_sequence(arg)

    def do_help(self, arg):
        """List available commands and their descriptions"""
        commands = {
            'install': 'Install the necessary tools and dependencies for the obfuscators.',
            'obfuscate': 'Obfuscate a file using a sequence of obfuscations. Usage: obfuscate <obfuscation_types> <input_file.c>',
            'quit': 'Exit the obfuscator CLI.'
        }
        for command, desc in commands.items():
            print(f"{Fore.BLUE}{command}: {desc}")
        print(f"{Fore.GREEN}Available obfuscation types and their descriptions:")
        for key, value in self.obfuscation_map.items():
            print(f"{Fore.GREEN}    {key}: {value[0]}")

    def do_quit(self, arg):
        """Exit the obfuscator CLI."""
        print(f"{Fore.CYAN}Thank you for using the Obfuscator CLI.")
        return True

if __name__ == '__main__':
    ObfuscatorCLI().cmdloop()
