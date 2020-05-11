/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_462CAA21_7614_4503_836E_8AB6F4662331
#define _AUTOGENH_462CAA21_7614_4503_836E_8AB6F4662331

#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x462CAA21, 0x7614, 0x4503, {0x83, 0x6E, 0x8A, 0xB6, 0xF4, 0x66, 0x23, 0x31}}

// Guids
extern EFI_GUID gEfiIfrTianoGuid;
extern EFI_GUID gEfiIfrFrontPageGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
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
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gEfiFileInfoGuid;
extern EFI_GUID gEfiDxeServicesTableGuid;
extern EFI_GUID gEdkiiPerformanceMeasurementProtocolGuid;
extern EFI_GUID gEdkiiIfrBitVarstoreGuid;
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;
extern EFI_GUID gEfiMemoryTypeInformationGuid;
extern EFI_GUID gEdkiiStatusCodeDataTypeVariableGuid;
extern EFI_GUID gEfiDiskInfoAhciInterfaceGuid;
extern EFI_GUID gEfiDiskInfoIdeInterfaceGuid;
extern EFI_GUID gEfiDiskInfoScsiInterfaceGuid;
extern EFI_GUID gEfiDiskInfoSdMmcInterfaceGuid;
extern EFI_GUID gEfiFileSystemVolumeLabelInfoIdGuid;
extern EFI_GUID gEfiHiiPlatformSetupFormsetGuid;
extern EFI_GUID gEfiIfrBootMaintenanceGuid;

// Protocols
extern EFI_GUID gEfiSmbiosProtocolGuid;
extern EFI_GUID gEfiHiiConfigAccessProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiDebugPortProtocolGuid;
extern EFI_GUID gEfiDriverBindingProtocolGuid;
extern EFI_GUID gEfiSimpleTextOutProtocolGuid;
extern EFI_GUID gEfiGraphicsOutputProtocolGuid;
extern EFI_GUID gEfiHiiFontProtocolGuid;
extern EFI_GUID gEfiSimpleFileSystemProtocolGuid;
extern EFI_GUID gEfiUgaDrawProtocolGuid;
extern EFI_GUID gEfiComponentNameProtocolGuid;
extern EFI_GUID gEfiComponentName2ProtocolGuid;
extern EFI_GUID gEfiDriverConfigurationProtocolGuid;
extern EFI_GUID gEfiDriverConfiguration2ProtocolGuid;
extern EFI_GUID gEfiDriverDiagnosticsProtocolGuid;
extern EFI_GUID gEfiDriverDiagnostics2ProtocolGuid;
extern EFI_GUID gEfiHiiStringProtocolGuid;
extern EFI_GUID gEfiHiiImageProtocolGuid;
extern EFI_GUID gEfiHiiDatabaseProtocolGuid;
extern EFI_GUID gEfiHiiConfigRoutingProtocolGuid;
extern EFI_GUID gEfiUnicodeCollation2ProtocolGuid;
extern EFI_GUID gEfiFirmwareVolume2ProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiLoadFileProtocolGuid;
extern EFI_GUID gEfiLoadFile2ProtocolGuid;
extern EFI_GUID gEfiFormBrowser2ProtocolGuid;
extern EFI_GUID gEfiStatusCodeRuntimeProtocolGuid;
extern EFI_GUID gEfiPciRootBridgeIoProtocolGuid;
extern EFI_GUID gEfiPciIoProtocolGuid;
extern EFI_GUID gEfiSimpleNetworkProtocolGuid;
extern EFI_GUID gEfiSimpleTextInProtocolGuid;
extern EFI_GUID gEfiBlockIoProtocolGuid;
extern EFI_GUID gEfiBootLogoProtocolGuid;
extern EFI_GUID gEfiSimpleTextInputExProtocolGuid;
extern EFI_GUID gEdkiiVariableLockProtocolGuid;
extern EFI_GUID gEfiUsbIoProtocolGuid;
extern EFI_GUID gEfiNvmExpressPassThruProtocolGuid;
extern EFI_GUID gEfiDiskInfoProtocolGuid;
extern EFI_GUID gEfiDriverHealthProtocolGuid;
extern EFI_GUID gEfiRamDiskProtocolGuid;
extern EFI_GUID gEfiDeferredImageLoadProtocolGuid;
extern EFI_GUID gEdkiiPlatformBootManagerProtocolGuid;
extern EFI_GUID gEfiDevicePathToTextProtocolGuid;
extern EFI_GUID gEdkiiFormBrowserEx2ProtocolGuid;
extern EFI_GUID gEfiSerialIoProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdUefiVariableDefaultPlatformLangCodes  147U
#define _PCD_VALUE_PcdUefiVariableDefaultPlatformLangCodes  _gPcd_FixedAtBuild_PcdUefiVariableDefaultPlatformLangCodes
extern const UINT8 _gPcd_FixedAtBuild_PcdUefiVariableDefaultPlatformLangCodes[18];
#define _PCD_GET_MODE_PTR_PcdUefiVariableDefaultPlatformLangCodes  _gPcd_FixedAtBuild_PcdUefiVariableDefaultPlatformLangCodes
#define _PCD_SIZE_PcdUefiVariableDefaultPlatformLangCodes 18
#define _PCD_GET_MODE_SIZE_PcdUefiVariableDefaultPlatformLangCodes  _PCD_SIZE_PcdUefiVariableDefaultPlatformLangCodes 
//#define _PCD_SET_MODE_PTR_PcdUefiVariableDefaultPlatformLangCodes  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdConOutRow  51U
#define _PCD_PATCHABLE_VALUE_PcdConOutRow  ((UINT32)25U)
extern volatile   UINT32  _gPcd_BinaryPatch_PcdConOutRow;
#define _PCD_GET_MODE_32_PcdConOutRow  _gPcd_BinaryPatch_PcdConOutRow
#define _PCD_PATCHABLE_PcdConOutRow_SIZE 4
#define _PCD_GET_MODE_SIZE_PcdConOutRow  _gPcd_BinaryPatch_Size_PcdConOutRow 
extern UINTN _gPcd_BinaryPatch_Size_PcdConOutRow; 
#define _PCD_SET_MODE_32_PcdConOutRow(Value)  (_gPcd_BinaryPatch_PcdConOutRow = (Value))
#define _PCD_SET_MODE_32_S_PcdConOutRow(Value)  ((_gPcd_BinaryPatch_PcdConOutRow = (Value)), RETURN_SUCCESS) 

#define _PCD_TOKEN_PcdConOutColumn  49U
#define _PCD_PATCHABLE_VALUE_PcdConOutColumn  ((UINT32)80U)
extern volatile   UINT32  _gPcd_BinaryPatch_PcdConOutColumn;
#define _PCD_GET_MODE_32_PcdConOutColumn  _gPcd_BinaryPatch_PcdConOutColumn
#define _PCD_PATCHABLE_PcdConOutColumn_SIZE 4
#define _PCD_GET_MODE_SIZE_PcdConOutColumn  _gPcd_BinaryPatch_Size_PcdConOutColumn 
extern UINTN _gPcd_BinaryPatch_Size_PcdConOutColumn; 
#define _PCD_SET_MODE_32_PcdConOutColumn(Value)  (_gPcd_BinaryPatch_PcdConOutColumn = (Value))
#define _PCD_SET_MODE_32_S_PcdConOutColumn(Value)  ((_gPcd_BinaryPatch_PcdConOutColumn = (Value)), RETURN_SUCCESS) 

#define _PCD_TOKEN_PcdVideoHorizontalResolution  113U
#define _PCD_PATCHABLE_VALUE_PcdVideoHorizontalResolution  ((UINT32)800U)
extern volatile   UINT32  _gPcd_BinaryPatch_PcdVideoHorizontalResolution;
#define _PCD_GET_MODE_32_PcdVideoHorizontalResolution  _gPcd_BinaryPatch_PcdVideoHorizontalResolution
#define _PCD_PATCHABLE_PcdVideoHorizontalResolution_SIZE 4
#define _PCD_GET_MODE_SIZE_PcdVideoHorizontalResolution  _gPcd_BinaryPatch_Size_PcdVideoHorizontalResolution 
extern UINTN _gPcd_BinaryPatch_Size_PcdVideoHorizontalResolution; 
#define _PCD_SET_MODE_32_PcdVideoHorizontalResolution(Value)  (_gPcd_BinaryPatch_PcdVideoHorizontalResolution = (Value))
#define _PCD_SET_MODE_32_S_PcdVideoHorizontalResolution(Value)  ((_gPcd_BinaryPatch_PcdVideoHorizontalResolution = (Value)), RETURN_SUCCESS) 

#define _PCD_TOKEN_PcdVideoVerticalResolution  114U
#define _PCD_PATCHABLE_VALUE_PcdVideoVerticalResolution  ((UINT32)600U)
extern volatile   UINT32  _gPcd_BinaryPatch_PcdVideoVerticalResolution;
#define _PCD_GET_MODE_32_PcdVideoVerticalResolution  _gPcd_BinaryPatch_PcdVideoVerticalResolution
#define _PCD_PATCHABLE_PcdVideoVerticalResolution_SIZE 4
#define _PCD_GET_MODE_SIZE_PcdVideoVerticalResolution  _gPcd_BinaryPatch_Size_PcdVideoVerticalResolution 
extern UINTN _gPcd_BinaryPatch_Size_PcdVideoVerticalResolution; 
#define _PCD_SET_MODE_32_PcdVideoVerticalResolution(Value)  (_gPcd_BinaryPatch_PcdVideoVerticalResolution = (Value))
#define _PCD_SET_MODE_32_S_PcdVideoVerticalResolution(Value)  ((_gPcd_BinaryPatch_PcdVideoVerticalResolution = (Value)), RETURN_SUCCESS) 

#define _PCD_TOKEN_PcdSetupConOutColumn  99U
#define _PCD_PATCHABLE_VALUE_PcdSetupConOutColumn  ((UINT32)80U)
extern volatile   UINT32  _gPcd_BinaryPatch_PcdSetupConOutColumn;
#define _PCD_GET_MODE_32_PcdSetupConOutColumn  _gPcd_BinaryPatch_PcdSetupConOutColumn
#define _PCD_PATCHABLE_PcdSetupConOutColumn_SIZE 4
#define _PCD_GET_MODE_SIZE_PcdSetupConOutColumn  _gPcd_BinaryPatch_Size_PcdSetupConOutColumn 
extern UINTN _gPcd_BinaryPatch_Size_PcdSetupConOutColumn; 
#define _PCD_SET_MODE_32_PcdSetupConOutColumn(Value)  (_gPcd_BinaryPatch_PcdSetupConOutColumn = (Value))
#define _PCD_SET_MODE_32_S_PcdSetupConOutColumn(Value)  ((_gPcd_BinaryPatch_PcdSetupConOutColumn = (Value)), RETURN_SUCCESS) 

#define _PCD_TOKEN_PcdSetupConOutRow  100U
#define _PCD_PATCHABLE_VALUE_PcdSetupConOutRow  ((UINT32)25U)
extern volatile   UINT32  _gPcd_BinaryPatch_PcdSetupConOutRow;
#define _PCD_GET_MODE_32_PcdSetupConOutRow  _gPcd_BinaryPatch_PcdSetupConOutRow
#define _PCD_PATCHABLE_PcdSetupConOutRow_SIZE 4
#define _PCD_GET_MODE_SIZE_PcdSetupConOutRow  _gPcd_BinaryPatch_Size_PcdSetupConOutRow 
extern UINTN _gPcd_BinaryPatch_Size_PcdSetupConOutRow; 
#define _PCD_SET_MODE_32_PcdSetupConOutRow(Value)  (_gPcd_BinaryPatch_PcdSetupConOutRow = (Value))
#define _PCD_SET_MODE_32_S_PcdSetupConOutRow(Value)  ((_gPcd_BinaryPatch_PcdSetupConOutRow = (Value)), RETURN_SUCCESS) 

#define _PCD_TOKEN_PcdSetupVideoHorizontalResolution  101U
#define _PCD_PATCHABLE_VALUE_PcdSetupVideoHorizontalResolution  ((UINT32)800U)
extern volatile   UINT32  _gPcd_BinaryPatch_PcdSetupVideoHorizontalResolution;
#define _PCD_GET_MODE_32_PcdSetupVideoHorizontalResolution  _gPcd_BinaryPatch_PcdSetupVideoHorizontalResolution
#define _PCD_PATCHABLE_PcdSetupVideoHorizontalResolution_SIZE 4
#define _PCD_GET_MODE_SIZE_PcdSetupVideoHorizontalResolution  _gPcd_BinaryPatch_Size_PcdSetupVideoHorizontalResolution 
extern UINTN _gPcd_BinaryPatch_Size_PcdSetupVideoHorizontalResolution; 
#define _PCD_SET_MODE_32_PcdSetupVideoHorizontalResolution(Value)  (_gPcd_BinaryPatch_PcdSetupVideoHorizontalResolution = (Value))
#define _PCD_SET_MODE_32_S_PcdSetupVideoHorizontalResolution(Value)  ((_gPcd_BinaryPatch_PcdSetupVideoHorizontalResolution = (Value)), RETURN_SUCCESS) 

#define _PCD_TOKEN_PcdSetupVideoVerticalResolution  102U
#define _PCD_PATCHABLE_VALUE_PcdSetupVideoVerticalResolution  ((UINT32)600U)
extern volatile   UINT32  _gPcd_BinaryPatch_PcdSetupVideoVerticalResolution;
#define _PCD_GET_MODE_32_PcdSetupVideoVerticalResolution  _gPcd_BinaryPatch_PcdSetupVideoVerticalResolution
#define _PCD_PATCHABLE_PcdSetupVideoVerticalResolution_SIZE 4
#define _PCD_GET_MODE_SIZE_PcdSetupVideoVerticalResolution  _gPcd_BinaryPatch_Size_PcdSetupVideoVerticalResolution 
extern UINTN _gPcd_BinaryPatch_Size_PcdSetupVideoVerticalResolution; 
#define _PCD_SET_MODE_32_PcdSetupVideoVerticalResolution(Value)  (_gPcd_BinaryPatch_PcdSetupVideoVerticalResolution = (Value))
#define _PCD_SET_MODE_32_S_PcdSetupVideoVerticalResolution(Value)  ((_gPcd_BinaryPatch_PcdSetupVideoVerticalResolution = (Value)), RETURN_SUCCESS) 

#define _PCD_TOKEN_PcdFirmwareVersionString  66U
#define _PCD_VALUE_PcdFirmwareVersionString  _gPcd_FixedAtBuild_PcdFirmwareVersionString
extern const UINT16 _gPcd_FixedAtBuild_PcdFirmwareVersionString[6];
#define _PCD_GET_MODE_PTR_PcdFirmwareVersionString  _gPcd_FixedAtBuild_PcdFirmwareVersionString
#define _PCD_SIZE_PcdFirmwareVersionString 12
#define _PCD_GET_MODE_SIZE_PcdFirmwareVersionString  _PCD_SIZE_PcdFirmwareVersionString 
//#define _PCD_SET_MODE_PTR_PcdFirmwareVersionString  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdTestKeyUsed  1U
#define _PCD_GET_MODE_BOOL_PcdTestKeyUsed  LibPcdGetBool(_PCD_TOKEN_PcdTestKeyUsed)
#define _PCD_GET_MODE_SIZE_PcdTestKeyUsed  LibPcdGetSize(_PCD_TOKEN_PcdTestKeyUsed)
#define _PCD_SET_MODE_BOOL_PcdTestKeyUsed(Value)  LibPcdSetBool(_PCD_TOKEN_PcdTestKeyUsed, (Value))
#define _PCD_SET_MODE_BOOL_S_PcdTestKeyUsed(Value)  LibPcdSetBoolS(_PCD_TOKEN_PcdTestKeyUsed, (Value))

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
InitializeUserInterface (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );



#include "UiAppStrDefs.h"


#ifdef __cplusplus
}
#endif

#endif
