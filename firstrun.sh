#!/bin/bash
# based on the instructions from edk2-platform
# do this first:
# https://github.com/tianocore/tianocore.github.io/wiki/Using-EDK-II-with-Native-GCC#Install_required_software_from_apt
set -e
figlet Edk2-Dipper
echo [BuildTools] Now Building Edk2 Environment
. build_common.sh
make -C ../edk2/BaseTools
echo [BuildTools] Done.
