#!/bin/bash
# based on the instructions from edk2-platform
#if throw error then exit
set -e

figlet Edk2-Dipper 

echo [BuildTools] Cleanning BuidFiles

echo [BuildTools] Now Cleanning Workspace
rm -rf workspace/*
echo [BuildTools] Clean Done.

echo [BuildTools] Now Cleanning AcpiTables
rm -rf XiaomiMI8Pkg/AcpiTables/SDM850/DSDT.aml
echo [BuildTools] Clean Done.

echo [BuildTools] Now Cleanning Image
rm -rf uefi.img
rm -rf boot.img
echo [BuildTools] Clean Done.

echo [BuildTools] Building ACPI Tables

echo [BuildTools] Now Building DSDT Table
iasl -f XiaomiMI8Pkg/AcpiTables/Source/DSDT.dsl
echo [BuildTools] Done.
echo [BuildTools] Now Moveing DSDT Table to Target Folder
mv XiaomiMI8Pkg/AcpiTables/Source/DSDT.aml XiaomiMI8Pkg/AcpiTables/SDM850/DSDT.aml
echo [BuildTools] Done.

#Will be enabled in the future

#echo [BuildTools] Now Building CSRT Table
#iasl -f XiaomiMI8Pkg/AcpiTables/Source/CSRT.dsl
#echo [BuildTools] Done.
#echo [BuildTools] Now Moveing CSRT Table to Target Folder
#mv XiaomiMI8Pkg/AcpiTables/Source/CSRT.aml XiaomiMI8Pkg/AcpiTables/SDM850/CSRT.aml
#echo [BuildTools] Done.

#echo [BuildTools] Now Building DBG2 Table
#iasl -f XiaomiMI8Pkg/AcpiTables/Source/DBG2.dsl
#echo [BuildTools] Done.
#echo [BuildTools] Now Copying DBG2 Table to Target Folder
#mv XiaomiMI8Pkg/AcpiTables/Source/DBG2.aml XiaomiMI8Pkg/AcpiTables/SDM850/DBG2.aml
#echo [BuildTools] Done.

#echo [BuildTools] Now Building FACS Table
#iasl -f XiaomiMI8Pkg/AcpiTables/Source/FACS.dsl
#echo [BuildTools] Done.
#echo [BuildTools] Now Copying FACS Table to Target Folder
#mv XiaomiMI8Pkg/AcpiTables/Source/FACS.aml XiaomiMI8Pkg/AcpiTables/SDM850/FACS.aml
#echo [BuildTools] Done.

#echo [BuildTools] Now Building FADT Table
#iasl -f XiaomiMI8Pkg/AcpiTables/Source/FADT.dsl
#echo [BuildTools] Done.
#echo [BuildTools] Now Copying FADT Table to Target Folder
#mv XiaomiMI8Pkg/AcpiTables/Source/FADT.aml XiaomiMI8Pkg/AcpiTables/SDM850/FADT.aml
#echo [BuildTools] Done.

#echo [BuildTools] Now Building GTDT Table
#iasl -f XiaomiMI8Pkg/AcpiTables/Source/GTDT.dsl
#echo [BuildTools] Done.
#echo [BuildTools] Now Copying GTDT Table to Target Folder
#mv XiaomiMI8Pkg/AcpiTables/Source/GTDT.aml XiaomiMI8Pkg/AcpiTables/SDM850/GTDT.aml
#echo [BuildTools] Done.

#echo [BuildTools] Now Building MADT Table
#iasl -f XiaomiMI8Pkg/AcpiTables/Source/MADT.dsl
#echo [BuildTools] Done.
#echo [BuildTools] Now Copying MADT Table to Target Folder
#mv XiaomiMI8Pkg/AcpiTables/Source/MADT.aml XiaomiMI8Pkg/AcpiTables/SDM850/MADT.aml
#echo [BuildTools] Done.

#echo [BuildTools] Now Building MCFG Table
#iasl -f XiaomiMI8Pkg/AcpiTables/Source/MCFG.dsl
#echo [BuildTools] Done.
#echo [BuildTools] Now Copying MCFG Table to Target Folder
#mv XiaomiMI8Pkg/AcpiTables/Source/MCFG.aml XiaomiMI8Pkg/AcpiTables/SDM850/MCFG.aml
#echo [BuildTools] Done.

#echo [BuildTools] Now Building PPTT Table
#iasl -f XiaomiMI8Pkg/AcpiTables/Source/PPTT.dsl
#echo [BuildTools] Done.
#echo [BuildTools] Now Copying PPTT Table to Target Folder
#mv XiaomiMI8Pkg/AcpiTables/Source/PPTT.aml XiaomiMI8Pkg/AcpiTables/SDM850/PPTT.aml
#echo [BuildTools] Done.

echo [BuildTools] Build ACPI Tables Done.

echo [BuildTools] Building UEFI Firmware

echo [BuildTools] Now Building Edk2 Environment
. build_common.sh
echo [BuildTools] Done.

echo [BuildTools] Now Building UEFI_FV
# not actually GCC5; it's GCC7 on Ubuntu 18.04.
GCC5_AARCH64_PREFIX=aarch64-linux-gnu- build -s -n 0 -a AARCH64 -t GCC5 -p XiaomiMI8Pkg/XiaomiMI8Pkg.dsc
echo [BuildTools] Done.

echo [BuildTools] Now Making boot.img
gzip -c < workspace/Build/XiaomiMI8Pkg/DEBUG_GCC5/FV/XIAOMIMI8PKG_UEFI.fd >uefi_img
cat dipper.dtb >>uefi_img
# build Abooting Img
abootimg --create boot.img -k uefi_img -r ramdisk -f bootimg.cfg
rm -rf ./uefi_img
echo [BuildTools] Done.

echo [BuildTools] Now Making uefi.img
# build common
gzip -c < workspace/Build/XiaomiMI8Pkg/DEBUG_GCC5/FV/XIAOMIMI8PKG_UEFI.fd >uefi.img
cat dipper.dtb >>uefi.img
echo [BuildTools] Done.

echo [BuildTools] Compile Finished, Enjoy It Now.