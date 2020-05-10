#!/bin/bash
# based on the instructions from edk2-platform
echo cleanning BuidFiles
rm -rf workspace/*
rm -rf uefi.img
rm -rf boot.img
echo Done.
set -e
. build_common.sh
# not actually GCC5; it's GCC7 on Ubuntu 18.04.
GCC5_AARCH64_PREFIX=aarch64-linux-gnu- build -s -n 0 -a AARCH64 -t GCC5 -p XiaomiMI8Pkg/XiaomiMI8Pkg.dsc
gzip -c < workspace/Build/XiaomiMI8Pkg/DEBUG_GCC5/FV/XIAOMIMI8PKG_UEFI.fd >uefi_img
cat dipper.dtb >>uefi_img
# build common
gzip -c < workspace/Build/XiaomiMI8Pkg/DEBUG_GCC5/FV/XIAOMIMI8PKG_UEFI.fd >uefi.img
cat dipper.dtb >>uefi.img
# build Abooting Img
abootimg --create boot.img -k uefi_img -r ramdisk -f bootimg.cfg
rm -rf ./uefi_img
