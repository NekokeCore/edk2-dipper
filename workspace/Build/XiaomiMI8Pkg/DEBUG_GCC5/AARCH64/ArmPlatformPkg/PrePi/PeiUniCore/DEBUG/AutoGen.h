/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_d959e387_7b91_452c_90e0_a1dbac90ddb8
#define _AUTOGENH_d959e387_7b91_452c_90e0_a1dbac90ddb8

#ifdef __cplusplus
extern "C" {
#endif

#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xd959e387, 0x7b91, 0x452c, {0x90, 0xe0, 0xa1, 0xdb, 0xac, 0x90, 0xdd, 0xb8}}

// Guids
extern EFI_GUID gArmMpCoreInfoGuid;
extern EFI_GUID gEfiFirmwarePerformanceGuid;
extern EFI_GUID gArmTokenSpaceGuid;
extern EFI_GUID gArmPlatformTokenSpaceGuid;
extern EFI_GUID gEmbeddedTokenSpaceGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiHobMemoryAllocModuleGuid;
extern EFI_GUID gEfiHobMemoryAllocStackGuid;
extern EFI_GUID gXiaomiMI8PkgTokenSpaceGuid;
extern EFI_GUID gEfiMemoryTypeInformationGuid;
extern EFI_GUID gLzmaCustomDecompressGuid;

// Protocols
extern EFI_GUID gPeCoffLoaderProtocolGuid;

// PPIs
extern EFI_GUID gArmMpCoreInfoPpiGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdVFPEnabled  30U
#define _PCD_SIZE_PcdVFPEnabled 4
#define _PCD_GET_MODE_SIZE_PcdVFPEnabled  _PCD_SIZE_PcdVFPEnabled 
#define _PCD_VALUE_PcdVFPEnabled  1U
extern const  UINT32  _gPcd_FixedAtBuild_PcdVFPEnabled;
#define _PCD_GET_MODE_32_PcdVFPEnabled  _gPcd_FixedAtBuild_PcdVFPEnabled
//#define _PCD_SET_MODE_32_PcdVFPEnabled  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFdBaseAddress  21U
#define _PCD_SIZE_PcdFdBaseAddress 8
#define _PCD_GET_MODE_SIZE_PcdFdBaseAddress  _PCD_SIZE_PcdFdBaseAddress 
#define _PCD_VALUE_PcdFdBaseAddress  0xd0000000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdFdBaseAddress;
#define _PCD_GET_MODE_64_PcdFdBaseAddress  _gPcd_FixedAtBuild_PcdFdBaseAddress
//#define _PCD_SET_MODE_64_PcdFdBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFdSize  22U
#define _PCD_SIZE_PcdFdSize 4
#define _PCD_GET_MODE_SIZE_PcdFdSize  _PCD_SIZE_PcdFdSize 
#define _PCD_VALUE_PcdFdSize  0x00200000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFdSize;
#define _PCD_GET_MODE_32_PcdFdSize  _gPcd_FixedAtBuild_PcdFdSize
//#define _PCD_SET_MODE_32_PcdFdSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFvBaseAddress  23U
#define _PCD_SIZE_PcdFvBaseAddress 8
#define _PCD_GET_MODE_SIZE_PcdFvBaseAddress  _PCD_SIZE_PcdFvBaseAddress 
#define _PCD_VALUE_PcdFvBaseAddress  0xD0008000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdFvBaseAddress;
#define _PCD_GET_MODE_64_PcdFvBaseAddress  _gPcd_FixedAtBuild_PcdFvBaseAddress
//#define _PCD_SET_MODE_64_PcdFvBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFvSize  24U
#define _PCD_SIZE_PcdFvSize 4
#define _PCD_GET_MODE_SIZE_PcdFvSize  _PCD_SIZE_PcdFvSize 
#define _PCD_VALUE_PcdFvSize  0x001F8000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFvSize;
#define _PCD_GET_MODE_32_PcdFvSize  _gPcd_FixedAtBuild_PcdFvSize
//#define _PCD_SET_MODE_32_PcdFvSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCPUCorePrimaryStackSize  6U
#define _PCD_SIZE_PcdCPUCorePrimaryStackSize 4
#define _PCD_GET_MODE_SIZE_PcdCPUCorePrimaryStackSize  _PCD_SIZE_PcdCPUCorePrimaryStackSize 
#define _PCD_VALUE_PcdCPUCorePrimaryStackSize  0x10000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdCPUCorePrimaryStackSize;
#define _PCD_GET_MODE_32_PcdCPUCorePrimaryStackSize  _gPcd_FixedAtBuild_PcdCPUCorePrimaryStackSize
//#define _PCD_SET_MODE_32_PcdCPUCorePrimaryStackSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCPUCoreSecondaryStackSize  7U
#define _PCD_SIZE_PcdCPUCoreSecondaryStackSize 4
#define _PCD_GET_MODE_SIZE_PcdCPUCoreSecondaryStackSize  _PCD_SIZE_PcdCPUCoreSecondaryStackSize 
#define _PCD_VALUE_PcdCPUCoreSecondaryStackSize  0x1000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdCPUCoreSecondaryStackSize;
#define _PCD_GET_MODE_32_PcdCPUCoreSecondaryStackSize  _gPcd_FixedAtBuild_PcdCPUCoreSecondaryStackSize
//#define _PCD_SET_MODE_32_PcdCPUCoreSecondaryStackSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSystemMemoryUefiRegionSize  10U
#define _PCD_SIZE_PcdSystemMemoryUefiRegionSize 4
#define _PCD_GET_MODE_SIZE_PcdSystemMemoryUefiRegionSize  _PCD_SIZE_PcdSystemMemoryUefiRegionSize 
#define _PCD_VALUE_PcdSystemMemoryUefiRegionSize  0x08000000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdSystemMemoryUefiRegionSize;
#define _PCD_GET_MODE_32_PcdSystemMemoryUefiRegionSize  _gPcd_FixedAtBuild_PcdSystemMemoryUefiRegionSize
//#define _PCD_SET_MODE_32_PcdSystemMemoryUefiRegionSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCoreCount  8U
#define _PCD_SIZE_PcdCoreCount 4
#define _PCD_GET_MODE_SIZE_PcdCoreCount  _PCD_SIZE_PcdCoreCount 
#define _PCD_VALUE_PcdCoreCount  1U
extern const  UINT32  _gPcd_FixedAtBuild_PcdCoreCount;
#define _PCD_GET_MODE_32_PcdCoreCount  _gPcd_FixedAtBuild_PcdCoreCount
//#define _PCD_SET_MODE_32_PcdCoreCount  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPrePiCpuIoSize  181U
#define _PCD_SIZE_PcdPrePiCpuIoSize 1
#define _PCD_GET_MODE_SIZE_PcdPrePiCpuIoSize  _PCD_SIZE_PcdPrePiCpuIoSize 
#define _PCD_VALUE_PcdPrePiCpuIoSize  44U
extern const  UINT8  _gPcd_FixedAtBuild_PcdPrePiCpuIoSize;
#define _PCD_GET_MODE_8_PcdPrePiCpuIoSize  _gPcd_FixedAtBuild_PcdPrePiCpuIoSize
//#define _PCD_SET_MODE_8_PcdPrePiCpuIoSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMemoryTypeEfiACPIReclaimMemory  172U
#define _PCD_SIZE_PcdMemoryTypeEfiACPIReclaimMemory 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiACPIReclaimMemory  _PCD_SIZE_PcdMemoryTypeEfiACPIReclaimMemory 
#define _PCD_VALUE_PcdMemoryTypeEfiACPIReclaimMemory  0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMemoryTypeEfiACPIReclaimMemory;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiACPIReclaimMemory  _gPcd_FixedAtBuild_PcdMemoryTypeEfiACPIReclaimMemory
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiACPIReclaimMemory  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMemoryTypeEfiACPIMemoryNVS  171U
#define _PCD_SIZE_PcdMemoryTypeEfiACPIMemoryNVS 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiACPIMemoryNVS  _PCD_SIZE_PcdMemoryTypeEfiACPIMemoryNVS 
#define _PCD_VALUE_PcdMemoryTypeEfiACPIMemoryNVS  0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMemoryTypeEfiACPIMemoryNVS;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiACPIMemoryNVS  _gPcd_FixedAtBuild_PcdMemoryTypeEfiACPIMemoryNVS
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiACPIMemoryNVS  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMemoryTypeEfiReservedMemoryType  177U
#define _PCD_SIZE_PcdMemoryTypeEfiReservedMemoryType 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiReservedMemoryType  _PCD_SIZE_PcdMemoryTypeEfiReservedMemoryType 
#define _PCD_VALUE_PcdMemoryTypeEfiReservedMemoryType  0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMemoryTypeEfiReservedMemoryType;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiReservedMemoryType  _gPcd_FixedAtBuild_PcdMemoryTypeEfiReservedMemoryType
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiReservedMemoryType  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMemoryTypeEfiRuntimeServicesData  179U
#define _PCD_SIZE_PcdMemoryTypeEfiRuntimeServicesData 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiRuntimeServicesData  _PCD_SIZE_PcdMemoryTypeEfiRuntimeServicesData 
#define _PCD_VALUE_PcdMemoryTypeEfiRuntimeServicesData  50U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMemoryTypeEfiRuntimeServicesData;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiRuntimeServicesData  _gPcd_FixedAtBuild_PcdMemoryTypeEfiRuntimeServicesData
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiRuntimeServicesData  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMemoryTypeEfiRuntimeServicesCode  178U
#define _PCD_SIZE_PcdMemoryTypeEfiRuntimeServicesCode 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiRuntimeServicesCode  _PCD_SIZE_PcdMemoryTypeEfiRuntimeServicesCode 
#define _PCD_VALUE_PcdMemoryTypeEfiRuntimeServicesCode  20U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMemoryTypeEfiRuntimeServicesCode;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiRuntimeServicesCode  _gPcd_FixedAtBuild_PcdMemoryTypeEfiRuntimeServicesCode
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiRuntimeServicesCode  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMemoryTypeEfiBootServicesCode  173U
#define _PCD_SIZE_PcdMemoryTypeEfiBootServicesCode 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiBootServicesCode  _PCD_SIZE_PcdMemoryTypeEfiBootServicesCode 
#define _PCD_VALUE_PcdMemoryTypeEfiBootServicesCode  400U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMemoryTypeEfiBootServicesCode;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiBootServicesCode  _gPcd_FixedAtBuild_PcdMemoryTypeEfiBootServicesCode
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiBootServicesCode  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMemoryTypeEfiBootServicesData  174U
#define _PCD_SIZE_PcdMemoryTypeEfiBootServicesData 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiBootServicesData  _PCD_SIZE_PcdMemoryTypeEfiBootServicesData 
#define _PCD_VALUE_PcdMemoryTypeEfiBootServicesData  20000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMemoryTypeEfiBootServicesData;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiBootServicesData  _gPcd_FixedAtBuild_PcdMemoryTypeEfiBootServicesData
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiBootServicesData  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMemoryTypeEfiLoaderCode  175U
#define _PCD_SIZE_PcdMemoryTypeEfiLoaderCode 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiLoaderCode  _PCD_SIZE_PcdMemoryTypeEfiLoaderCode 
#define _PCD_VALUE_PcdMemoryTypeEfiLoaderCode  20U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMemoryTypeEfiLoaderCode;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiLoaderCode  _gPcd_FixedAtBuild_PcdMemoryTypeEfiLoaderCode
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiLoaderCode  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMemoryTypeEfiLoaderData  176U
#define _PCD_SIZE_PcdMemoryTypeEfiLoaderData 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiLoaderData  _PCD_SIZE_PcdMemoryTypeEfiLoaderData 
#define _PCD_VALUE_PcdMemoryTypeEfiLoaderData  0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMemoryTypeEfiLoaderData;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiLoaderData  _gPcd_FixedAtBuild_PcdMemoryTypeEfiLoaderData
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiLoaderData  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPrePiProduceMemoryTypeInformationHob  182U
#define _PCD_SIZE_PcdPrePiProduceMemoryTypeInformationHob 1
#define _PCD_GET_MODE_SIZE_PcdPrePiProduceMemoryTypeInformationHob  _PCD_SIZE_PcdPrePiProduceMemoryTypeInformationHob 
#define _PCD_VALUE_PcdPrePiProduceMemoryTypeInformationHob  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdPrePiProduceMemoryTypeInformationHob;
#define _PCD_GET_MODE_BOOL_PcdPrePiProduceMemoryTypeInformationHob  _gPcd_FixedAtBuild_PcdPrePiProduceMemoryTypeInformationHob
//#define _PCD_SET_MODE_BOOL_PcdPrePiProduceMemoryTypeInformationHob  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSendSgiToBringUpSecondaryCores  9U
#define _PCD_SIZE_PcdSendSgiToBringUpSecondaryCores 1
#define _PCD_GET_MODE_SIZE_PcdSendSgiToBringUpSecondaryCores  _PCD_SIZE_PcdSendSgiToBringUpSecondaryCores 
#define _PCD_VALUE_PcdSendSgiToBringUpSecondaryCores  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdSendSgiToBringUpSecondaryCores;
#define _PCD_GET_MODE_BOOL_PcdSendSgiToBringUpSecondaryCores  _gPcd_FixedAtBuild_PcdSendSgiToBringUpSecondaryCores
//#define _PCD_SET_MODE_BOOL_PcdSendSgiToBringUpSecondaryCores  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFirmwareVersionString  66U
#define _PCD_VALUE_PcdFirmwareVersionString  _gPcd_FixedAtBuild_PcdFirmwareVersionString
extern const UINT16 _gPcd_FixedAtBuild_PcdFirmwareVersionString[6];
#define _PCD_GET_MODE_PTR_PcdFirmwareVersionString  _gPcd_FixedAtBuild_PcdFirmwareVersionString
#define _PCD_SIZE_PcdFirmwareVersionString 12
#define _PCD_GET_MODE_SIZE_PcdFirmwareVersionString  _PCD_SIZE_PcdFirmwareVersionString 
//#define _PCD_SET_MODE_PTR_PcdFirmwareVersionString  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSystemMemoryBase  28U
#define _PCD_SIZE_PcdSystemMemoryBase 8
#define _PCD_GET_MODE_SIZE_PcdSystemMemoryBase  _PCD_SIZE_PcdSystemMemoryBase 
#define _PCD_VALUE_PcdSystemMemoryBase  0x80000000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdSystemMemoryBase;
#define _PCD_GET_MODE_64_PcdSystemMemoryBase  _gPcd_FixedAtBuild_PcdSystemMemoryBase
//#define _PCD_SET_MODE_64_PcdSystemMemoryBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSystemMemorySize  29U
#define _PCD_SIZE_PcdSystemMemorySize 8
#define _PCD_GET_MODE_SIZE_PcdSystemMemorySize  _PCD_SIZE_PcdSystemMemorySize 
#define _PCD_VALUE_PcdSystemMemorySize  0x140000000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdSystemMemorySize;
#define _PCD_GET_MODE_64_PcdSystemMemorySize  _gPcd_FixedAtBuild_PcdSystemMemorySize
//#define _PCD_SET_MODE_64_PcdSystemMemorySize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


#ifdef __cplusplus
}
#endif

#endif
