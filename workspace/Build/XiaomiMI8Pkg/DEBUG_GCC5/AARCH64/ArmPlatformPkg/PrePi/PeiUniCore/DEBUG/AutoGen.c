/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.c
  Abstract:       Auto-generated AutoGen.c for building module or library.
**/
#include <PiPei.h>
#include <Library/DebugLib.h>

GLOBAL_REMOVE_IF_UNREFERENCED GUID gEfiCallerIdGuid = {0xd959e387, 0x7b91, 0x452c, {0x90, 0xe0, 0xa1, 0xdb, 0xac, 0x90, 0xdd, 0xb8}};

GLOBAL_REMOVE_IF_UNREFERENCED CHAR8 *gEfiCallerBaseName = "ArmPlatformPrePiUniCore";

// Guids
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gArmMpCoreInfoGuid = { 0xa4ee0728, 0xe5d7, 0x4ac5,  {0xb2, 0x1e, 0x65, 0x8e, 0xd8, 0x57, 0xe8, 0x34} };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiFirmwarePerformanceGuid = { 0xc095791a, 0x3001, 0x47b2, { 0x80, 0xc9, 0xea, 0xc7, 0x31, 0x9f, 0x2f, 0xa4 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gArmTokenSpaceGuid = { 0xBB11ECFE, 0x820F, 0x4968, { 0xBB, 0xA6, 0xF7, 0x6A, 0xFE, 0x30, 0x25, 0x96 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gArmPlatformTokenSpaceGuid = { 0x9c0aaed4, 0x74c5, 0x4043, { 0xb4, 0x17, 0xa3, 0x22, 0x38, 0x14, 0xce, 0x76 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEmbeddedTokenSpaceGuid = { 0xe0d8ca17, 0x4276, 0x4386, { 0xbb, 0x79, 0x48, 0xcb, 0x81, 0x3d, 0x3c, 0x4f }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMdeModulePkgTokenSpaceGuid = { 0xA1AFF049, 0xFDEB, 0x442a, { 0xB3, 0x20, 0x13, 0xAB, 0x4C, 0xB7, 0x2B, 0xBC }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMdePkgTokenSpaceGuid = { 0x914AEBE7, 0x4635, 0x459b, { 0xAA, 0x1C, 0x11, 0xE2, 0x19, 0xB0, 0x3A, 0x10 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHobMemoryAllocModuleGuid = { 0xF8E21975, 0x0899, 0x4F58, { 0xA4, 0xBE, 0x55, 0x25, 0xA9, 0xC6, 0xD7, 0x7A }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHobMemoryAllocStackGuid = { 0x4ED4BF27, 0x4092, 0x42E9, { 0x80, 0x7D, 0x52, 0x7B, 0x1D, 0x00, 0xC9, 0xBD }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gXiaomiMI8PkgTokenSpaceGuid = { 0x99a14446, 0xaad7, 0xe460, {0xb4, 0xe5, 0x1f, 0x79, 0xaa, 0xa4, 0x93, 0xfd } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMemoryTypeInformationGuid = { 0x4C19049F, 0x4137, 0x4DD3, { 0x9C, 0x10, 0x8B, 0x97, 0xA8, 0x3F, 0xFD, 0xFA }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gLzmaCustomDecompressGuid = { 0xEE4E5898, 0x3914, 0x4259, { 0x9D, 0x6E, 0xDC, 0x7B, 0xD7, 0x94, 0x03, 0xCF }};

// Protocols
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPeCoffLoaderProtocolGuid = { 0xB323179B, 0x97FB, 0x477E, { 0xB0, 0xFE, 0xD8, 0x85, 0x91, 0xFA, 0x11, 0xAB } };

// PPIs
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gArmMpCoreInfoPpiGuid = { 0x6847cc74, 0xe9ec, 0x4f8f, {0xa2, 0x9d, 0xab, 0x44, 0xe7, 0x54, 0xa8, 0xfc} };

// Definition of SkuId Array
GLOBAL_REMOVE_IF_UNREFERENCED UINT64 _gPcd_SkuId_Array[] = {0x0};

// Definition of PCDs used in this module
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdVFPEnabled = _PCD_VALUE_PcdVFPEnabled;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT64 _gPcd_FixedAtBuild_PcdFdBaseAddress = _PCD_VALUE_PcdFdBaseAddress;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFdSize = _PCD_VALUE_PcdFdSize;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT64 _gPcd_FixedAtBuild_PcdFvBaseAddress = _PCD_VALUE_PcdFvBaseAddress;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFvSize = _PCD_VALUE_PcdFvSize;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdCPUCorePrimaryStackSize = _PCD_VALUE_PcdCPUCorePrimaryStackSize;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdCPUCoreSecondaryStackSize = _PCD_VALUE_PcdCPUCoreSecondaryStackSize;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdSystemMemoryUefiRegionSize = _PCD_VALUE_PcdSystemMemoryUefiRegionSize;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdCoreCount = _PCD_VALUE_PcdCoreCount;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdPrePiCpuIoSize = _PCD_VALUE_PcdPrePiCpuIoSize;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiACPIReclaimMemory = _PCD_VALUE_PcdMemoryTypeEfiACPIReclaimMemory;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiACPIMemoryNVS = _PCD_VALUE_PcdMemoryTypeEfiACPIMemoryNVS;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiReservedMemoryType = _PCD_VALUE_PcdMemoryTypeEfiReservedMemoryType;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiRuntimeServicesData = _PCD_VALUE_PcdMemoryTypeEfiRuntimeServicesData;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiRuntimeServicesCode = _PCD_VALUE_PcdMemoryTypeEfiRuntimeServicesCode;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiBootServicesCode = _PCD_VALUE_PcdMemoryTypeEfiBootServicesCode;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiBootServicesData = _PCD_VALUE_PcdMemoryTypeEfiBootServicesData;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiLoaderCode = _PCD_VALUE_PcdMemoryTypeEfiLoaderCode;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiLoaderData = _PCD_VALUE_PcdMemoryTypeEfiLoaderData;
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdPrePiProduceMemoryTypeInformationHob = _PCD_VALUE_PcdPrePiProduceMemoryTypeInformationHob;
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdSendSgiToBringUpSecondaryCores = _PCD_VALUE_PcdSendSgiToBringUpSecondaryCores;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT16 _gPcd_FixedAtBuild_PcdFirmwareVersionString[6] = {65, 108, 112, 104, 97, 0 };
GLOBAL_REMOVE_IF_UNREFERENCED const UINTN _gPcd_FixedAtBuild_Size_PcdFirmwareVersionString = 12;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT64 _gPcd_FixedAtBuild_PcdSystemMemoryBase = _PCD_VALUE_PcdSystemMemoryBase;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT64 _gPcd_FixedAtBuild_PcdSystemMemorySize = _PCD_VALUE_PcdSystemMemorySize;

// Definition of PCDs used in libraries

#define _PCD_TOKEN_PcdVerifyNodeInList  149U
#define _PCD_SIZE_PcdVerifyNodeInList 1
#define _PCD_GET_MODE_SIZE_PcdVerifyNodeInList  _PCD_SIZE_PcdVerifyNodeInList 
#define _PCD_VALUE_PcdVerifyNodeInList  ((BOOLEAN)0U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdVerifyNodeInList = _PCD_VALUE_PcdVerifyNodeInList;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdVerifyNodeInList;
#define _PCD_GET_MODE_BOOL_PcdVerifyNodeInList  _gPcd_FixedAtBuild_PcdVerifyNodeInList
//#define _PCD_SET_MODE_BOOL_PcdVerifyNodeInList  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumLinkedListLength  130U
#define _PCD_SIZE_PcdMaximumLinkedListLength 4
#define _PCD_GET_MODE_SIZE_PcdMaximumLinkedListLength  _PCD_SIZE_PcdMaximumLinkedListLength 
#define _PCD_VALUE_PcdMaximumLinkedListLength  1000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumLinkedListLength = _PCD_VALUE_PcdMaximumLinkedListLength;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumLinkedListLength;
#define _PCD_GET_MODE_32_PcdMaximumLinkedListLength  _gPcd_FixedAtBuild_PcdMaximumLinkedListLength
//#define _PCD_SET_MODE_32_PcdMaximumLinkedListLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumAsciiStringLength  127U
#define _PCD_SIZE_PcdMaximumAsciiStringLength 4
#define _PCD_GET_MODE_SIZE_PcdMaximumAsciiStringLength  _PCD_SIZE_PcdMaximumAsciiStringLength 
#define _PCD_VALUE_PcdMaximumAsciiStringLength  1000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength = _PCD_VALUE_PcdMaximumAsciiStringLength;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength;
#define _PCD_GET_MODE_32_PcdMaximumAsciiStringLength  _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength
//#define _PCD_SET_MODE_32_PcdMaximumAsciiStringLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumUnicodeStringLength  131U
#define _PCD_SIZE_PcdMaximumUnicodeStringLength 4
#define _PCD_GET_MODE_SIZE_PcdMaximumUnicodeStringLength  _PCD_SIZE_PcdMaximumUnicodeStringLength 
#define _PCD_VALUE_PcdMaximumUnicodeStringLength  1000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength = _PCD_VALUE_PcdMaximumUnicodeStringLength;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength;
#define _PCD_GET_MODE_32_PcdMaximumUnicodeStringLength  _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength
//#define _PCD_SET_MODE_32_PcdMaximumUnicodeStringLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdControlFlowEnforcementPropertyMask  118U
#define _PCD_SIZE_PcdControlFlowEnforcementPropertyMask 4
#define _PCD_GET_MODE_SIZE_PcdControlFlowEnforcementPropertyMask  _PCD_SIZE_PcdControlFlowEnforcementPropertyMask 
#define _PCD_VALUE_PcdControlFlowEnforcementPropertyMask  0x0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdControlFlowEnforcementPropertyMask = _PCD_VALUE_PcdControlFlowEnforcementPropertyMask;
extern const  UINT32  _gPcd_FixedAtBuild_PcdControlFlowEnforcementPropertyMask;
#define _PCD_GET_MODE_32_PcdControlFlowEnforcementPropertyMask  _gPcd_FixedAtBuild_PcdControlFlowEnforcementPropertyMask
//#define _PCD_SET_MODE_32_PcdControlFlowEnforcementPropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSpeculationBarrierType  134U
#define _PCD_SIZE_PcdSpeculationBarrierType 1
#define _PCD_GET_MODE_SIZE_PcdSpeculationBarrierType  _PCD_SIZE_PcdSpeculationBarrierType 
#define _PCD_VALUE_PcdSpeculationBarrierType  0x01U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdSpeculationBarrierType = _PCD_VALUE_PcdSpeculationBarrierType;
extern const  UINT8  _gPcd_FixedAtBuild_PcdSpeculationBarrierType;
#define _PCD_GET_MODE_8_PcdSpeculationBarrierType  _gPcd_FixedAtBuild_PcdSpeculationBarrierType
//#define _PCD_SET_MODE_8_PcdSpeculationBarrierType  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDebugPrintErrorLevel  120U
#define _PCD_SIZE_PcdDebugPrintErrorLevel 4
#define _PCD_GET_MODE_SIZE_PcdDebugPrintErrorLevel  _PCD_SIZE_PcdDebugPrintErrorLevel 
#define _PCD_VALUE_PcdDebugPrintErrorLevel  0x80000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel = _PCD_VALUE_PcdDebugPrintErrorLevel;
extern const  UINT32  _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel;
#define _PCD_GET_MODE_32_PcdDebugPrintErrorLevel  _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel
//#define _PCD_SET_MODE_32_PcdDebugPrintErrorLevel  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMipiFrameBufferAddress  185U
#define _PCD_SIZE_PcdMipiFrameBufferAddress 4
#define _PCD_GET_MODE_SIZE_PcdMipiFrameBufferAddress  _PCD_SIZE_PcdMipiFrameBufferAddress 
#define _PCD_VALUE_PcdMipiFrameBufferAddress  0x9d400000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMipiFrameBufferAddress = _PCD_VALUE_PcdMipiFrameBufferAddress;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMipiFrameBufferAddress;
#define _PCD_GET_MODE_32_PcdMipiFrameBufferAddress  _gPcd_FixedAtBuild_PcdMipiFrameBufferAddress
//#define _PCD_SET_MODE_32_PcdMipiFrameBufferAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMipiFrameBufferWidth  190U
#define _PCD_SIZE_PcdMipiFrameBufferWidth 4
#define _PCD_GET_MODE_SIZE_PcdMipiFrameBufferWidth  _PCD_SIZE_PcdMipiFrameBufferWidth 
#define _PCD_VALUE_PcdMipiFrameBufferWidth  1080U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMipiFrameBufferWidth = _PCD_VALUE_PcdMipiFrameBufferWidth;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMipiFrameBufferWidth;
#define _PCD_GET_MODE_32_PcdMipiFrameBufferWidth  _gPcd_FixedAtBuild_PcdMipiFrameBufferWidth
//#define _PCD_SET_MODE_32_PcdMipiFrameBufferWidth  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMipiFrameBufferHeight  186U
#define _PCD_SIZE_PcdMipiFrameBufferHeight 4
#define _PCD_GET_MODE_SIZE_PcdMipiFrameBufferHeight  _PCD_SIZE_PcdMipiFrameBufferHeight 
#define _PCD_VALUE_PcdMipiFrameBufferHeight  2248U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMipiFrameBufferHeight = _PCD_VALUE_PcdMipiFrameBufferHeight;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMipiFrameBufferHeight;
#define _PCD_GET_MODE_32_PcdMipiFrameBufferHeight  _gPcd_FixedAtBuild_PcdMipiFrameBufferHeight
//#define _PCD_SET_MODE_32_PcdMipiFrameBufferHeight  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMipiFrameBufferPixelBpp  187U
#define _PCD_SIZE_PcdMipiFrameBufferPixelBpp 4
#define _PCD_GET_MODE_SIZE_PcdMipiFrameBufferPixelBpp  _PCD_SIZE_PcdMipiFrameBufferPixelBpp 
#define _PCD_VALUE_PcdMipiFrameBufferPixelBpp  32U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMipiFrameBufferPixelBpp = _PCD_VALUE_PcdMipiFrameBufferPixelBpp;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMipiFrameBufferPixelBpp;
#define _PCD_GET_MODE_32_PcdMipiFrameBufferPixelBpp  _gPcd_FixedAtBuild_PcdMipiFrameBufferPixelBpp
//#define _PCD_SET_MODE_32_PcdMipiFrameBufferPixelBpp  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMipiFrameBufferVisibleWidth  189U
#define _PCD_SIZE_PcdMipiFrameBufferVisibleWidth 4
#define _PCD_GET_MODE_SIZE_PcdMipiFrameBufferVisibleWidth  _PCD_SIZE_PcdMipiFrameBufferVisibleWidth 
#define _PCD_VALUE_PcdMipiFrameBufferVisibleWidth  1080U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMipiFrameBufferVisibleWidth = _PCD_VALUE_PcdMipiFrameBufferVisibleWidth;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMipiFrameBufferVisibleWidth;
#define _PCD_GET_MODE_32_PcdMipiFrameBufferVisibleWidth  _gPcd_FixedAtBuild_PcdMipiFrameBufferVisibleWidth
//#define _PCD_SET_MODE_32_PcdMipiFrameBufferVisibleWidth  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMipiFrameBufferVisibleHeight  188U
#define _PCD_SIZE_PcdMipiFrameBufferVisibleHeight 4
#define _PCD_GET_MODE_SIZE_PcdMipiFrameBufferVisibleHeight  _PCD_SIZE_PcdMipiFrameBufferVisibleHeight 
#define _PCD_VALUE_PcdMipiFrameBufferVisibleHeight  2248U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMipiFrameBufferVisibleHeight = _PCD_VALUE_PcdMipiFrameBufferVisibleHeight;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMipiFrameBufferVisibleHeight;
#define _PCD_GET_MODE_32_PcdMipiFrameBufferVisibleHeight  _gPcd_FixedAtBuild_PcdMipiFrameBufferVisibleHeight
//#define _PCD_SET_MODE_32_PcdMipiFrameBufferVisibleHeight  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDebugClearMemoryValue  119U
#define _PCD_SIZE_PcdDebugClearMemoryValue 1
#define _PCD_GET_MODE_SIZE_PcdDebugClearMemoryValue  _PCD_SIZE_PcdDebugClearMemoryValue 
#define _PCD_VALUE_PcdDebugClearMemoryValue  0xAFU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdDebugClearMemoryValue = _PCD_VALUE_PcdDebugClearMemoryValue;
extern const  UINT8  _gPcd_FixedAtBuild_PcdDebugClearMemoryValue;
#define _PCD_GET_MODE_8_PcdDebugClearMemoryValue  _gPcd_FixedAtBuild_PcdDebugClearMemoryValue
//#define _PCD_SET_MODE_8_PcdDebugClearMemoryValue  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDebugPropertyMask  121U
#define _PCD_SIZE_PcdDebugPropertyMask 1
#define _PCD_GET_MODE_SIZE_PcdDebugPropertyMask  _PCD_SIZE_PcdDebugPropertyMask 
#define _PCD_VALUE_PcdDebugPropertyMask  0x0fU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdDebugPropertyMask = _PCD_VALUE_PcdDebugPropertyMask;
extern const  UINT8  _gPcd_FixedAtBuild_PcdDebugPropertyMask;
#define _PCD_GET_MODE_8_PcdDebugPropertyMask  _gPcd_FixedAtBuild_PcdDebugPropertyMask
//#define _PCD_SET_MODE_8_PcdDebugPropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFixedDebugPrintErrorLevel  125U
#define _PCD_SIZE_PcdFixedDebugPrintErrorLevel 4
#define _PCD_GET_MODE_SIZE_PcdFixedDebugPrintErrorLevel  _PCD_SIZE_PcdFixedDebugPrintErrorLevel 
#define _PCD_VALUE_PcdFixedDebugPrintErrorLevel  0xFFFFFFFFU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel = _PCD_VALUE_PcdFixedDebugPrintErrorLevel;
extern const  UINT32  _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel;
#define _PCD_GET_MODE_32_PcdFixedDebugPrintErrorLevel  _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel
//#define _PCD_SET_MODE_32_PcdFixedDebugPrintErrorLevel  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPerformanceLibraryPropertyMask  132U
#define _PCD_SIZE_PcdPerformanceLibraryPropertyMask 1
#define _PCD_GET_MODE_SIZE_PcdPerformanceLibraryPropertyMask  _PCD_SIZE_PcdPerformanceLibraryPropertyMask 
#define _PCD_VALUE_PcdPerformanceLibraryPropertyMask  1U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdPerformanceLibraryPropertyMask = _PCD_VALUE_PcdPerformanceLibraryPropertyMask;
extern const  UINT8  _gPcd_FixedAtBuild_PcdPerformanceLibraryPropertyMask;
#define _PCD_GET_MODE_8_PcdPerformanceLibraryPropertyMask  _gPcd_FixedAtBuild_PcdPerformanceLibraryPropertyMask
//#define _PCD_SET_MODE_8_PcdPerformanceLibraryPropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumGuidedExtractHandler  129U
#define _PCD_SIZE_PcdMaximumGuidedExtractHandler 4
#define _PCD_GET_MODE_SIZE_PcdMaximumGuidedExtractHandler  _PCD_SIZE_PcdMaximumGuidedExtractHandler 
#define _PCD_VALUE_PcdMaximumGuidedExtractHandler  0x10U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumGuidedExtractHandler = _PCD_VALUE_PcdMaximumGuidedExtractHandler;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumGuidedExtractHandler;
#define _PCD_GET_MODE_32_PcdMaximumGuidedExtractHandler  _gPcd_FixedAtBuild_PcdMaximumGuidedExtractHandler
//#define _PCD_SET_MODE_32_PcdMaximumGuidedExtractHandler  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdArmArchTimerFreqInHz  11U
#define _PCD_SIZE_PcdArmArchTimerFreqInHz 4
#define _PCD_GET_MODE_SIZE_PcdArmArchTimerFreqInHz  _PCD_SIZE_PcdArmArchTimerFreqInHz 
#define _PCD_VALUE_PcdArmArchTimerFreqInHz  0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdArmArchTimerFreqInHz = _PCD_VALUE_PcdArmArchTimerFreqInHz;
extern const  UINT32  _gPcd_FixedAtBuild_PcdArmArchTimerFreqInHz;
#define _PCD_GET_MODE_32_PcdArmArchTimerFreqInHz  _gPcd_FixedAtBuild_PcdArmArchTimerFreqInHz
//#define _PCD_SET_MODE_32_PcdArmArchTimerFreqInHz  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdArmPrimaryCore  17U
#define _PCD_SIZE_PcdArmPrimaryCore 4
#define _PCD_GET_MODE_SIZE_PcdArmPrimaryCore  _PCD_SIZE_PcdArmPrimaryCore 
#define _PCD_VALUE_PcdArmPrimaryCore  0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdArmPrimaryCore = _PCD_VALUE_PcdArmPrimaryCore;
extern const  UINT32  _gPcd_FixedAtBuild_PcdArmPrimaryCore;
#define _PCD_GET_MODE_32_PcdArmPrimaryCore  _gPcd_FixedAtBuild_PcdArmPrimaryCore
//#define _PCD_SET_MODE_32_PcdArmPrimaryCore  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdArmPrimaryCoreMask  18U
#define _PCD_SIZE_PcdArmPrimaryCoreMask 4
#define _PCD_GET_MODE_SIZE_PcdArmPrimaryCoreMask  _PCD_SIZE_PcdArmPrimaryCoreMask 
#define _PCD_VALUE_PcdArmPrimaryCoreMask  0xF03U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdArmPrimaryCoreMask = _PCD_VALUE_PcdArmPrimaryCoreMask;
extern const  UINT32  _gPcd_FixedAtBuild_PcdArmPrimaryCoreMask;
#define _PCD_GET_MODE_32_PcdArmPrimaryCoreMask  _gPcd_FixedAtBuild_PcdArmPrimaryCoreMask
//#define _PCD_SET_MODE_32_PcdArmPrimaryCoreMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD


RETURN_STATUS
EFIAPI
BaseDebugLibSerialPortConstructor (
  VOID
  );

RETURN_STATUS
EFIAPI
ExtractGuidedSectionLibConstructor (
  VOID
  );

RETURN_STATUS
EFIAPI
TimerConstructor (
  VOID
  );

RETURN_STATUS
EFIAPI
ArmMmuBaseLibConstructor (
  VOID
  );

RETURN_STATUS
EFIAPI
LzmaDecompressLibConstructor (
  VOID
  );


VOID
EFIAPI
ProcessLibraryConstructorList (
  VOID
  )
{
  RETURN_STATUS  Status;

  Status = BaseDebugLibSerialPortConstructor ();
  ASSERT_RETURN_ERROR (Status);

  Status = ExtractGuidedSectionLibConstructor ();
  ASSERT_RETURN_ERROR (Status);

  Status = TimerConstructor ();
  ASSERT_RETURN_ERROR (Status);

  Status = ArmMmuBaseLibConstructor ();
  ASSERT_RETURN_ERROR (Status);

  Status = LzmaDecompressLibConstructor ();
  ASSERT_RETURN_ERROR (Status);

}



VOID
EFIAPI
ProcessLibraryDestructorList (
  VOID
  )
{

}
