#!/bin/bash
set -e
echo [BuildTools] Now Start CIBuid
sudo apt update
sudo apt install -y build-essential uuid-dev iasl git nasm gcc-aarch64-linux-gnu bc figlet
figlet Edk2-Dipper-CI
curdir="$PWD"
cd ..
git clone https://github.com/tianocore/edk2.git --recursive
git clone https://github.com/tianocore/edk2-platforms.git
cd "$curdir"
./firstrun.sh
./build.sh