FROM ubuntu:20.04

ENV DEBIAN_FRONTEND=noninteractive

WORKDIR /usr/src/app

RUN apt-get update && apt-get install -y \
    software-properties-common \
    wget \
    git \
    build-essential \
    python3 \
    python3-pip

RUN wget -O - https://apt.kitware.com/keys/kitware-archive-latest.asc 2>/dev/null | gpg --dearmor - | tee /usr/share/keyrings/kitware-archive-keyring.gpg >/dev/null && \
    echo 'deb [signed-by=/usr/share/keyrings/kitware-archive-keyring.gpg] https://apt.kitware.com/ubuntu/ focal main' | tee /etc/apt/sources.list.d/kitware.list >/dev/null && \
    apt-get update

RUN apt-get install -y cmake

RUN wget https://apt.llvm.org/llvm.sh && chmod +x llvm.sh && ./llvm.sh 15

ENV LLVM_15_PATH /usr/lib/llvm-15
ENV PATH $LLVM_15_PATH/bin:$PATH

# Copy the current directory contents into the container at /usr/src/app
COPY . .

RUN pip3 install --no-cache-dir -r requirements.txt

EXPOSE 80

CMD ["python3", "ObfuscatorCLI.py"]