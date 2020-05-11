/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_D6A2CB7F_6A18_4e2f_B43B_9920A733700A
#define _AUTOGENH_D6A2CB7F_6A18_4e2f_B43B_9920A733700A

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xD6A2CB7F, 0x6A18, 0x4e2f, {0xB4, 0x3B, 0x99, 0x20, 0xA7, 0x33, 0x70, 0x0A}}

// Guids
extern EFI_GUID gEfiEventMemoryMapChangeGuid;
extern EFI_GUID gEfiEventVirtualAddressChangeGuid;
extern EFI_GUID gEfiEventExitBootServicesGuid;
extern EFI_GUID gEfiHobMemoryAllocModuleGuid;
extern EFI_GUID gEfiFirmwareFileSystem2Guid;
extern EFI_GUID gEfiFirmwareFileSystem3Guid;
extern EFI_GUID gAprioriGuid;
extern EFI_GUID gEfiDebugImageInfoTableGuid;
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gEfiDxeServicesTableGuid;
extern EFI_GUID gEfiMemoryTypeInformationGuid;
extern EFI_GUID gEfiEventDxeDispatchGuid;
extern EFI_GUID gLoadFixedAddressConfigurationTableGuid;
extern EFI_GUID gIdleLoopEventGuid;
extern EFI_GUID gEventExitBootServicesFailedGuid;
extern EFI_GUID gEfiVectorHandoffTableGuid;
extern EFI_GUID gEdkiiMemoryProfileGuid;
extern EFI_GUID gEfiMemoryAttributesTableGuid;
extern EFI_GUID gEfiEndOfDxeEventGroupGuid;
extern EFI_GUID gEfiHobMemoryAllocStackGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gXiaomiMI8PkgTokenSpaceGuid;
extern EFI_GUID gEfiVTUTF8Guid;
extern EFI_GUID gEfiVT100Guid;
extern EFI_GUID gEfiVT100PlusGuid;
extern EFI_GUID gEfiPcAnsiGuid;
extern EFI_GUID gEfiUartDevicePathGuid;
extern EFI_GUID gEfiSasDevicePathGuid;
extern EFI_GUID gEfiVirtualDiskGuid;
extern EFI_GUID gEfiVirtualCdGuid;
extern EFI_GUID gEfiPersistentVirtualDiskGuid;
extern EFI_GUID gEfiPersistentVirtualCdGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiAcpi20TableGuid;
extern EFI_GUID gEfiAcpi10TableGuid;
extern EFI_GUID gArmTokenSpaceGuid;
extern EFI_GUID gEfiFileInfoGuid;
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;
extern EFI_GUID gPerformanceProtocolGuid;
extern EFI_GUID gZeroGuid;
extern EFI_GUID gEfiFirmwarePerformanceGuid;
extern EFI_GUID gEdkiiFpdtExtendedFirmwarePerformanceGuid;
extern EFI_GUID gEdkiiPiSmmCommunicationRegionTableGuid;
extern EFI_GUID gEdkiiPerformanceMeasurementProtocolGuid;
extern EFI_GUID gEfiCrc32GuidedSectionExtractionGuid;

// Protocols
extern EFI_GUID gEfiDecompressProtocolGuid;
extern EFI_GUID gEfiSimpleFileSystemProtocolGuid;
extern EFI_GUID gEfiLoadFileProtocolGuid;
extern EFI_GUID gEfiLoadFile2ProtocolGuid;
extern EFI_GUID gEfiBusSpecificDriverOverrideProtocolGuid;
extern EFI_GUID gEfiDriverFamilyOverrideProtocolGuid;
extern EFI_GUID gEfiPlatformDriverOverrideProtocolGuid;
extern EFI_GUID gEfiDriverBindingProtocolGuid;
extern EFI_GUID gEfiFirmwareVolumeBlockProtocolGuid;
extern EFI_GUID gEfiFirmwareVolume2ProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiLoadedImageDevicePathProtocolGuid;
extern EFI_GUID gEfiHiiPackageListProtocolGuid;
extern EFI_GUID gEfiSmmBase2ProtocolGuid;
extern EFI_GUID gEdkiiPeCoffImageEmulatorProtocolGuid;
extern EFI_GUID gEfiBdsArchProtocolGuid;
extern EFI_GUID gEfiCpuArchProtocolGuid;
extern EFI_GUID gEfiMetronomeArchProtocolGuid;
extern EFI_GUID gEfiMonotonicCounterArchProtocolGuid;
extern EFI_GUID gEfiRealTimeClockArchProtocolGuid;
extern EFI_GUID gEfiResetArchProtocolGuid;
extern EFI_GUID gEfiRuntimeArchProtocolGuid;
extern EFI_GUID gEfiSecurityArchProtocolGuid;
extern EFI_GUID gEfiSecurity2ArchProtocolGuid;
extern EFI_GUID gEfiTimerArchProtocolGuid;
extern EFI_GUID gEfiVariableWriteArchProtocolGuid;
extern EFI_GUID gEfiVariableArchProtocolGuid;
extern EFI_GUID gEfiCapsuleArchProtocolGuid;
extern EFI_GUID gEfiWatchdogTimerArchProtocolGuid;
extern EFI_GUID gEfiDebugPortProtocolGuid;
extern EFI_GUID gEfiSimpleTextOutProtocolGuid;
extern EFI_GUID gEfiGraphicsOutputProtocolGuid;
extern EFI_GUID gEfiHiiFontProtocolGuid;
extern EFI_GUID gEfiUgaDrawProtocolGuid;
extern EFI_GUID gEfiComponentNameProtocolGuid;
extern EFI_GUID gEfiComponentName2ProtocolGuid;
extern EFI_GUID gEfiDriverConfigurationProtocolGuid;
extern EFI_GUID gEfiDriverConfiguration2ProtocolGuid;
extern EFI_GUID gEfiDriverDiagnosticsProtocolGuid;
extern EFI_GUID gEfiDriverDiagnostics2ProtocolGuid;
extern EFI_GUID gEfiStatusCodeRuntimeProtocolGuid;
extern EFI_GUID gEfiSmmCommunicationProtocolGuid;
extern EFI_GUID gEfiSecurityPolicyProtocolGuid;

// PPIs
extern EFI_GUID gEfiVectorHandoffInfoPpiGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdLoadFixAddressBootTimeCodePageNumber  78U
#define _PCD_PATCHABLE_VALUE_PcdLoadFixAddressBootTimeCodePageNumber  ((UINT32)0U)
extern volatile   UINT32  _gPcd_BinaryPatch_PcdLoadFixAddressBootTimeCodePageNumber;
#define _PCD_GET_MODE_32_PcdLoadFixAddressBootTimeCodePageNumber  _gPcd_BinaryPatch_PcdLoadFixAddressBootTimeCodePageNumber
#define _PCD_PATCHABLE_PcdLoadFixAddressBootTimeCodePageNumber_SIZE 4
#define _PCD_GET_MODE_SIZE_PcdLoadFixAddressBootTimeCodePageNumber  _gPcd_BinaryPatch_Size_PcdLoadFixAddressBootTimeCodePageNumber 
extern UINTN _gPcd_BinaryPatch_Size_PcdLoadFixAddressBootTimeCodePageNumber; 
#define _PCD_SET_MODE_32_PcdLoadFixAddressBootTimeCodePageNumber(Value)  (_gPcd_BinaryPatch_PcdLoadFixAddressBootTimeCodePageNumber = (Value))
#define _PCD_SET_MODE_32_S_PcdLoadFixAddressBootTimeCodePageNumber(Value)  ((_gPcd_BinaryPatch_PcdLoadFixAddressBootTimeCodePageNumber = (Value)), RETURN_SUCCESS) 

#define _PCD_TOKEN_PcdLoadFixAddressRuntimeCodePageNumber  79U
#define _PCD_PATCHABLE_VALUE_PcdLoadFixAddressRuntimeCodePageNumber  ((UINT32)0U)
extern volatile   UINT32  _gPcd_BinaryPatch_PcdLoadFixAddressRuntimeCodePageNumber;
#define _PCD_GET_MODE_32_PcdLoadFixAddressRuntimeCodePageNumber  _gPcd_BinaryPatch_PcdLoadFixAddressRuntimeCodePageNumber
#define _PCD_PATCHABLE_PcdLoadFixAddressRuntimeCodePageNumber_SIZE 4
#define _PCD_GET_MODE_SIZE_PcdLoadFixAddressRuntimeCodePageNumber  _gPcd_BinaryPatch_Size_PcdLoadFixAddressRuntimeCodePageNumber 
extern UINTN _gPcd_BinaryPatch_Size_PcdLoadFixAddressRuntimeCodePageNumber; 
#define _PCD_SET_MODE_32_PcdLoadFixAddressRuntimeCodePageNumber(Value)  (_gPcd_BinaryPatch_PcdLoadFixAddressRuntimeCodePageNumber = (Value))
#define _PCD_SET_MODE_32_S_PcdLoadFixAddressRuntimeCodePageNumber(Value)  ((_gPcd_BinaryPatch_PcdLoadFixAddressRuntimeCodePageNumber = (Value)), RETURN_SUCCESS) 

#define _PCD_TOKEN_PcdLoadModuleAtFixAddressEnable  80U
#define _PCD_SIZE_PcdLoadModuleAtFixAddressEnable 8
#define _PCD_GET_MODE_SIZE_PcdLoadModuleAtFixAddressEnable  _PCD_SIZE_PcdLoadModuleAtFixAddressEnable 
#define _PCD_VALUE_PcdLoadModuleAtFixAddressEnable  0ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdLoadModuleAtFixAddressEnable;
#define _PCD_GET_MODE_64_PcdLoadModuleAtFixAddressEnable  _gPcd_FixedAtBuild_PcdLoadModuleAtFixAddressEnable
//#define _PCD_SET_MODE_64_PcdLoadModuleAtFixAddressEnable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaxEfiSystemTablePointerAddress  82U
#define _PCD_SIZE_PcdMaxEfiSystemTablePointerAddress 8
#define _PCD_GET_MODE_SIZE_PcdMaxEfiSystemTablePointerAddress  _PCD_SIZE_PcdMaxEfiSystemTablePointerAddress 
#define _PCD_VALUE_PcdMaxEfiSystemTablePointerAddress  0x0ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdMaxEfiSystemTablePointerAddress;
#define _PCD_GET_MODE_64_PcdMaxEfiSystemTablePointerAddress  _gPcd_FixedAtBuild_PcdMaxEfiSystemTablePointerAddress
//#define _PCD_SET_MODE_64_PcdMaxEfiSystemTablePointerAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMemoryProfileMemoryType  91U
#define _PCD_SIZE_PcdMemoryProfileMemoryType 8
#define _PCD_GET_MODE_SIZE_PcdMemoryProfileMemoryType  _PCD_SIZE_PcdMemoryProfileMemoryType 
#define _PCD_VALUE_PcdMemoryProfileMemoryType  0x0ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdMemoryProfileMemoryType;
#define _PCD_GET_MODE_64_PcdMemoryProfileMemoryType  _gPcd_FixedAtBuild_PcdMemoryProfileMemoryType
//#define _PCD_SET_MODE_64_PcdMemoryProfileMemoryType  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMemoryProfilePropertyMask  92U
#define _PCD_SIZE_PcdMemoryProfilePropertyMask 1
#define _PCD_GET_MODE_SIZE_PcdMemoryProfilePropertyMask  _PCD_SIZE_PcdMemoryProfilePropertyMask 
#define _PCD_VALUE_PcdMemoryProfilePropertyMask  0x0U
extern const  UINT8  _gPcd_FixedAtBuild_PcdMemoryProfilePropertyMask;
#define _PCD_GET_MODE_8_PcdMemoryProfilePropertyMask  _gPcd_FixedAtBuild_PcdMemoryProfilePropertyMask
//#define _PCD_SET_MODE_8_PcdMemoryProfilePropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMemoryProfileDriverPath  90U
#define _PCD_VALUE_PcdMemoryProfileDriverPath  (VOID *)_gPcd_FixedAtBuild_PcdMemoryProfileDriverPath
extern const UINT8 _gPcd_FixedAtBuild_PcdMemoryProfileDriverPath[1];
#define _PCD_GET_MODE_PTR_PcdMemoryProfileDriverPath  (VOID *)_gPcd_FixedAtBuild_PcdMemoryProfileDriverPath
#define _PCD_SIZE_PcdMemoryProfileDriverPath 1
#define _PCD_GET_MODE_SIZE_PcdMemoryProfileDriverPath  _PCD_SIZE_PcdMemoryProfileDriverPath 
//#define _PCD_SET_MODE_PTR_PcdMemoryProfileDriverPath  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdImageProtectionPolicy  76U
#define _PCD_SIZE_PcdImageProtectionPolicy 4
#define _PCD_GET_MODE_SIZE_PcdImageProtectionPolicy  _PCD_SIZE_PcdImageProtectionPolicy 
#define _PCD_VALUE_PcdImageProtectionPolicy  0x00000002U
extern const  UINT32  _gPcd_FixedAtBuild_PcdImageProtectionPolicy;
#define _PCD_GET_MODE_32_PcdImageProtectionPolicy  _gPcd_FixedAtBuild_PcdImageProtectionPolicy
//#define _PCD_SET_MODE_32_PcdImageProtectionPolicy  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDxeNxMemoryProtectionPolicy  58U
#define _PCD_SIZE_PcdDxeNxMemoryProtectionPolicy 8
#define _PCD_GET_MODE_SIZE_PcdDxeNxMemoryProtectionPolicy  _PCD_SIZE_PcdDxeNxMemoryProtectionPolicy 
#define _PCD_VALUE_PcdDxeNxMemoryProtectionPolicy  0x0000000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdDxeNxMemoryProtectionPolicy;
#define _PCD_GET_MODE_64_PcdDxeNxMemoryProtectionPolicy  _gPcd_FixedAtBuild_PcdDxeNxMemoryProtectionPolicy
//#define _PCD_SET_MODE_64_PcdDxeNxMemoryProtectionPolicy  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdNullPointerDetectionPropertyMask  93U
#define _PCD_SIZE_PcdNullPointerDetectionPropertyMask 1
#define _PCD_GET_MODE_SIZE_PcdNullPointerDetectionPropertyMask  _PCD_SIZE_PcdNullPointerDetectionPropertyMask 
#define _PCD_VALUE_PcdNullPointerDetectionPropertyMask  0x0U
extern const  UINT8  _gPcd_FixedAtBuild_PcdNullPointerDetectionPropertyMask;
#define _PCD_GET_MODE_8_PcdNullPointerDetectionPropertyMask  _gPcd_FixedAtBuild_PcdNullPointerDetectionPropertyMask
//#define _PCD_SET_MODE_8_PcdNullPointerDetectionPropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdHeapGuardPageType  71U
#define _PCD_SIZE_PcdHeapGuardPageType 8
#define _PCD_GET_MODE_SIZE_PcdHeapGuardPageType  _PCD_SIZE_PcdHeapGuardPageType 
#define _PCD_VALUE_PcdHeapGuardPageType  0x0ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdHeapGuardPageType;
#define _PCD_GET_MODE_64_PcdHeapGuardPageType  _gPcd_FixedAtBuild_PcdHeapGuardPageType
//#define _PCD_SET_MODE_64_PcdHeapGuardPageType  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdHeapGuardPoolType  72U
#define _PCD_SIZE_PcdHeapGuardPoolType 8
#define _PCD_GET_MODE_SIZE_PcdHeapGuardPoolType  _PCD_SIZE_PcdHeapGuardPoolType 
#define _PCD_VALUE_PcdHeapGuardPoolType  0x0ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdHeapGuardPoolType;
#define _PCD_GET_MODE_64_PcdHeapGuardPoolType  _gPcd_FixedAtBuild_PcdHeapGuardPoolType
//#define _PCD_SET_MODE_64_PcdHeapGuardPoolType  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdHeapGuardPropertyMask  73U
#define _PCD_SIZE_PcdHeapGuardPropertyMask 1
#define _PCD_GET_MODE_SIZE_PcdHeapGuardPropertyMask  _PCD_SIZE_PcdHeapGuardPropertyMask 
#define _PCD_VALUE_PcdHeapGuardPropertyMask  0x0U
extern const  UINT8  _gPcd_FixedAtBuild_PcdHeapGuardPropertyMask;
#define _PCD_GET_MODE_8_PcdHeapGuardPropertyMask  _gPcd_FixedAtBuild_PcdHeapGuardPropertyMask
//#define _PCD_SET_MODE_8_PcdHeapGuardPropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuStackGuard  53U
#define _PCD_SIZE_PcdCpuStackGuard 1
#define _PCD_GET_MODE_SIZE_PcdCpuStackGuard  _PCD_SIZE_PcdCpuStackGuard 
#define _PCD_VALUE_PcdCpuStackGuard  0U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuStackGuard;
#define _PCD_GET_MODE_BOOL_PcdCpuStackGuard  _gPcd_FixedAtBuild_PcdCpuStackGuard
//#define _PCD_SET_MODE_BOOL_PcdCpuStackGuard  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


VOID
EFIAPI
DxeMain (
  IN VOID  *HobStart
  );





#ifdef __cplusplus
}
#endif

#endif
