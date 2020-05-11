/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_f6bec3fe_88fb_11e3_ae84_e73b77561c35
#define _AUTOGENH_f6bec3fe_88fb_11e3_ae84_e73b77561c35

#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xf6bec3fe, 0x88fb, 0x11e3, {0xae, 0x84, 0xe7, 0x3b, 0x77, 0x56, 0x1c, 0x35}}

// Guids
extern EFI_GUID gEmbeddedTokenSpaceGuid;
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
extern EFI_GUID gEfiHobListGuid;

// Protocols
extern EFI_GUID gEfiDriverBindingProtocolGuid;
extern EFI_GUID gUsbDeviceProtocolGuid;
extern EFI_GUID gAndroidFastbootTransportProtocolGuid;
extern EFI_GUID gEfiSimpleTextOutProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiDebugPortProtocolGuid;
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
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdAndroidFastbootUsbVendorId  170U
#define _PCD_SIZE_PcdAndroidFastbootUsbVendorId 4
#define _PCD_GET_MODE_SIZE_PcdAndroidFastbootUsbVendorId  _PCD_SIZE_PcdAndroidFastbootUsbVendorId 
#define _PCD_VALUE_PcdAndroidFastbootUsbVendorId  0x18d1U
extern const  UINT32  _gPcd_FixedAtBuild_PcdAndroidFastbootUsbVendorId;
#define _PCD_GET_MODE_32_PcdAndroidFastbootUsbVendorId  _gPcd_FixedAtBuild_PcdAndroidFastbootUsbVendorId
//#define _PCD_SET_MODE_32_PcdAndroidFastbootUsbVendorId  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdAndroidFastbootUsbProductId  169U
#define _PCD_SIZE_PcdAndroidFastbootUsbProductId 4
#define _PCD_GET_MODE_SIZE_PcdAndroidFastbootUsbProductId  _PCD_SIZE_PcdAndroidFastbootUsbProductId 
#define _PCD_VALUE_PcdAndroidFastbootUsbProductId  0xd00dU
extern const  UINT32  _gPcd_FixedAtBuild_PcdAndroidFastbootUsbProductId;
#define _PCD_GET_MODE_32_PcdAndroidFastbootUsbProductId  _gPcd_FixedAtBuild_PcdAndroidFastbootUsbProductId
//#define _PCD_SET_MODE_32_PcdAndroidFastbootUsbProductId  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
FastbootTransportUsbEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
