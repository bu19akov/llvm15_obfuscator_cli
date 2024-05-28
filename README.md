# LLVM15 Obfuscator CLI

LLVM15 Obfuscator CLI is an interactive command-line tool for applying various obfuscation techniques to C source code. It uses the LLVM framework and plugins from the [llvm-obfuscator](https://github.com/Despire/llvm-obfuscator) project.

## Features

- String Obfuscation (`strobfs`)
- Substitution (`substitution`)
- Opaque Predicate Obfuscation (`op`)
- Merge Functions (`mergef`)
- Jump Into Loop Obfuscation (`jmp`)
- Control Flow Flattening (`cff`)
- Constant Obfuscation (`cobfs`)
- Call Obfuscation (`callobfs`)
- Branch Function Obfuscation (`branchf`)
- Bogus Flow Obfuscation (`floop`)
- Block Extract (`bext`)

## Installation

### Build the Docker Image

To build the Docker image for the Obfuscator CLI, run the following commands:

```sh
git clone https://github.com/bu19akov/llvm15_obfuscator_cli.git
cd llvm15_obfuscator_cli
docker build -t obfuscator-cli .
```

### Run the Docker Container

To run the Docker container and use the Obfuscator CLI, use one of the following commands:

#### If the [tool](https://github.com/Despire/llvm-obfuscator) is not installed locally:

```sh
docker run -it --rm -v {absolute_path_of_local_folder_with_c_files}:/usr/src/c_codes obfuscator-cli
```

#### If the [tool](https://github.com/Despire/llvm-obfuscator) is installed locally:

```sh
docker run -it --rm -v {path_to_llvm-obfuscator}:/usr/src/app/llvm-obfuscator -v {absolute_path_of_local_folder_with_c_files}:/usr/src/c_codes obfuscator-cli
```

Replace `{absolute_path_of_local_folder_with_c_files}` with the path to the directory containing your C source files. Replace `{path_to_llvm-obfuscator}` with the path to your local llvm-obfuscator directory.

## Usage

### Interactive Mode

When you start the Obfuscator CLI, you'll see a prompt where you can enter commands. Type `help` or `?` to list available commands.

### Available Commands

- `install`: Install the necessary [tool](https://github.com/Despire/llvm-obfuscator) and dependencies for the obfuscator.
- `obfuscate <obfuscation_types> <input_file.c>`: Obfuscate a file using a sequence of obfuscations.
- `quit`: Exit the obfuscator CLI.


### Example Usage

#### Install the Obfuscator

To install the necessary tool and dependencies, run the following command in the CLI:

```sh
(obfuscator) install
```

#### Obfuscate a File

To obfuscate a file using a sequence of obfuscations, use the `obfuscate` command. For example, to apply string obfuscation, substitution, and opaque predicate obfuscation to `hello.c`:

```sh
(obfuscator) obfuscate strobfs substitution op hello.c
```

The tool will perform the specified obfuscations in sequence and generate the final obfuscated output file.

#### Exit the CLI

To exit the CLI, use the `quit` command:

```sh
(obfuscator) quit
```

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Acknowledgements

This tool leverages the llvm-obfuscator from [llvm-obfuscator](https://github.com/Despire/llvm-obfuscator).
