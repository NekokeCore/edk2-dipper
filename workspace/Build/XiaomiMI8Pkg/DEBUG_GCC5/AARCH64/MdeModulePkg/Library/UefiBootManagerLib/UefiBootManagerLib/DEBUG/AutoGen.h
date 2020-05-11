/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_8D4752BC_595E_49a2_B4AF_F3F57B601DE9
#define _AUTOGENH_8D4752BC_595E_49a2_B4AF_F3F57B601DE9

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gEfiMemoryTypeInformationGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEdkiiStatusCodeDataTypeVariableGuid;
extern EFI_GUID gEfiDiskInfoAhciInterfaceGuid;
extern EFI_GUID gEfiDiskInfoIdeInterfaceGuid;
extern EFI_GUID gEfiDiskInfoScsiInterfaceGuid;
extern EFI_GUID gEfiDiskInfoSdMmcInterfaceGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiPciRootBridgeIoProtocolGuid;
extern EFI_GUID gEfiSimpleFileSystemProtocolGuid;
extern EFI_GUID gEfiLoadFileProtocolGuid;
extern EFI_GUID gEfiSimpleTextOutProtocolGuid;
extern EFI_GUID gEfiPciIoProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiSimpleNetworkProtocolGuid;
extern EFI_GUID gEfiSimpleTextInProtocolGuid;
extern EFI_GUID gEfiBlockIoProtocolGuid;
extern EFI_GUID gEfiFirmwareVolume2ProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiBootLogoProtocolGuid;
extern EFI_GUID gEfiSimpleTextInputExProtocolGuid;
extern EFI_GUID gEdkiiVariableLockProtocolGuid;
extern EFI_GUID gEfiGraphicsOutputProtocolGuid;
extern EFI_GUID gEfiUsbIoProtocolGuid;
extern EFI_GUID gEfiNvmExpressPassThruProtocolGuid;
extern EFI_GUID gEfiDiskInfoProtocolGuid;
extern EFI_GUID gEfiDriverHealthProtocolGuid;
extern EFI_GUID gEfiFormBrowser2ProtocolGuid;
extern EFI_GUID gEfiRamDiskProtocolGuid;
extern EFI_GUID gEfiDeferredImageLoadProtocolGuid;
extern EFI_GUID gEdkiiPlatformBootManagerProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdResetOnMemoryTypeInformationChange  98U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdResetOnMemoryTypeInformationChange;
#define _PCD_GET_MODE_BOOL_PcdResetOnMemoryTypeInformationChange  _gPcd_FixedAtBuild_PcdResetOnMemoryTypeInformationChange
//#define _PCD_SET_MODE_BOOL_PcdResetOnMemoryTypeInformationChange  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdResetOnMemoryTypeInformationChange 0
#define _PCD_SIZE_PcdResetOnMemoryTypeInformationChange 1
#define _PCD_GET_MODE_SIZE_PcdResetOnMemoryTypeInformationChange _PCD_SIZE_PcdResetOnMemoryTypeInformationChange
#define _PCD_TOKEN_PcdProgressCodeOsLoaderLoad  95U
extern const UINT32 _gPcd_FixedAtBuild_PcdProgressCodeOsLoaderLoad;
#define _PCD_GET_MODE_32_PcdProgressCodeOsLoaderLoad  _gPcd_FixedAtBuild_PcdProgressCodeOsLoaderLoad
//#define _PCD_SET_MODE_32_PcdProgressCodeOsLoaderLoad  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdProgressCodeOsLoaderLoad 0x03058000
#define _PCD_SIZE_PcdProgressCodeOsLoaderLoad 4
#define _PCD_GET_MODE_SIZE_PcdProgressCodeOsLoaderLoad _PCD_SIZE_PcdProgressCodeOsLoaderLoad
#define _PCD_TOKEN_PcdProgressCodeOsLoaderStart  96U
extern const UINT32 _gPcd_FixedAtBuild_PcdProgressCodeOsLoaderStart;
#define _PCD_GET_MODE_32_PcdProgressCodeOsLoaderStart  _gPcd_FixedAtBuild_PcdProgressCodeOsLoaderStart
//#define _PCD_SET_MODE_32_PcdProgressCodeOsLoaderStart  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdProgressCodeOsLoaderStart 0x03058001
#define _PCD_SIZE_PcdProgressCodeOsLoaderStart 4
#define _PCD_GET_MODE_SIZE_PcdProgressCodeOsLoaderStart _PCD_SIZE_PcdProgressCodeOsLoaderStart
#define _PCD_TOKEN_PcdErrorCodeSetVariable  62U
extern const UINT32 _gPcd_FixedAtBuild_PcdErrorCodeSetVariable;
#define _PCD_GET_MODE_32_PcdErrorCodeSetVariable  _gPcd_FixedAtBuild_PcdErrorCodeSetVariable
//#define _PCD_SET_MODE_32_PcdErrorCodeSetVariable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdErrorCodeSetVariable 0x03058002
#define _PCD_SIZE_PcdErrorCodeSetVariable 4
#define _PCD_GET_MODE_SIZE_PcdErrorCodeSetVariable _PCD_SIZE_PcdErrorCodeSetVariable
#define _PCD_TOKEN_PcdBootManagerMenuFile  38U
extern const UINT8 _gPcd_FixedAtBuild_PcdBootManagerMenuFile[];
#define _PCD_GET_MODE_PTR_PcdBootManagerMenuFile  (VOID *)_gPcd_FixedAtBuild_PcdBootManagerMenuFile
//#define _PCD_SET_MODE_PTR_PcdBootManagerMenuFile  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdBootManagerMenuFile (VOID *)_gPcd_FixedAtBuild_PcdBootManagerMenuFile
#define _PCD_SIZE_PcdBootManagerMenuFile 16
#define _PCD_GET_MODE_SIZE_PcdBootManagerMenuFile _PCD_SIZE_PcdBootManagerMenuFile
#define _PCD_TOKEN_PcdDriverHealthConfigureForm  57U
extern const UINT8 _gPcd_FixedAtBuild_PcdDriverHealthConfigureForm[];
#define _PCD_GET_MODE_PTR_PcdDriverHealthConfigureForm  (VOID *)_gPcd_FixedAtBuild_PcdDriverHealthConfigureForm
//#define _PCD_SET_MODE_PTR_PcdDriverHealthConfigureForm  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdDriverHealthConfigureForm (VOID *)_gPcd_FixedAtBuild_PcdDriverHealthConfigureForm
#define _PCD_SIZE_PcdDriverHealthConfigureForm 16
#define _PCD_GET_MODE_SIZE_PcdDriverHealthConfigureForm _PCD_SIZE_PcdDriverHealthConfigureForm
#define _PCD_TOKEN_PcdMaxRepairCount  84U
extern const UINT32 _gPcd_FixedAtBuild_PcdMaxRepairCount;
#define _PCD_GET_MODE_32_PcdMaxRepairCount  _gPcd_FixedAtBuild_PcdMaxRepairCount
//#define _PCD_SET_MODE_32_PcdMaxRepairCount  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdMaxRepairCount 0x00
#define _PCD_SIZE_PcdMaxRepairCount 4
#define _PCD_GET_MODE_SIZE_PcdMaxRepairCount _PCD_SIZE_PcdMaxRepairCount


#ifdef __cplusplus
}
#endif

#endif
