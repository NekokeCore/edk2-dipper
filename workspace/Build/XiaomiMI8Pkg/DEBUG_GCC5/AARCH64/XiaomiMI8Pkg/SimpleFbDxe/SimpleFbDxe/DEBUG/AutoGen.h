/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_dcfd1e6d_788d_4ffc_8e1b_ca2f75651a92
#define _AUTOGENH_dcfd1e6d_788d_4ffc_8e1b_ca2f75651a92

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xdcfd1e6d, 0x788d, 0x4ffc, {0x8e, 0x1b, 0xca, 0x2f, 0x75, 0x65, 0x1a, 0x92}}

// Guids
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gXiaomiMI8PkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
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
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;

// Protocols
extern EFI_GUID gEfiGraphicsOutputProtocolGuid;
extern EFI_GUID gEfiCpuArchProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiDebugPortProtocolGuid;
extern EFI_GUID gEfiDriverBindingProtocolGuid;
extern EFI_GUID gEfiSimpleTextOutProtocolGuid;
extern EFI_GUID gEfiHiiFontProtocolGuid;
extern EFI_GUID gEfiSimpleFileSystemProtocolGuid;
extern EFI_GUID gEfiUgaDrawProtocolGuid;
extern EFI_GUID gEfiComponentNameProtocolGuid;
extern EFI_GUID gEfiComponentName2ProtocolGuid;
extern EFI_GUID gEfiDriverConfigurationProtocolGuid;
extern EFI_GUID gEfiDriverConfiguration2ProtocolGuid;
extern EFI_GUID gEfiDriverDiagnosticsProtocolGuid;
extern EFI_GUID gEfiDriverDiagnostics2ProtocolGuid;
extern EFI_GUID gEfiStatusCodeRuntimeProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdMipiFrameBufferAddress  185U
#define _PCD_SIZE_PcdMipiFrameBufferAddress 4
#define _PCD_GET_MODE_SIZE_PcdMipiFrameBufferAddress  _PCD_SIZE_PcdMipiFrameBufferAddress 
#define _PCD_VALUE_PcdMipiFrameBufferAddress  0x9d400000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMipiFrameBufferAddress;
#define _PCD_GET_MODE_32_PcdMipiFrameBufferAddress  _gPcd_FixedAtBuild_PcdMipiFrameBufferAddress
//#define _PCD_SET_MODE_32_PcdMipiFrameBufferAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMipiFrameBufferWidth  190U
#define _PCD_SIZE_PcdMipiFrameBufferWidth 4
#define _PCD_GET_MODE_SIZE_PcdMipiFrameBufferWidth  _PCD_SIZE_PcdMipiFrameBufferWidth 
#define _PCD_VALUE_PcdMipiFrameBufferWidth  1080U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMipiFrameBufferWidth;
#define _PCD_GET_MODE_32_PcdMipiFrameBufferWidth  _gPcd_FixedAtBuild_PcdMipiFrameBufferWidth
//#define _PCD_SET_MODE_32_PcdMipiFrameBufferWidth  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMipiFrameBufferHeight  186U
#define _PCD_SIZE_PcdMipiFrameBufferHeight 4
#define _PCD_GET_MODE_SIZE_PcdMipiFrameBufferHeight  _PCD_SIZE_PcdMipiFrameBufferHeight 
#define _PCD_VALUE_PcdMipiFrameBufferHeight  2248U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMipiFrameBufferHeight;
#define _PCD_GET_MODE_32_PcdMipiFrameBufferHeight  _gPcd_FixedAtBuild_PcdMipiFrameBufferHeight
//#define _PCD_SET_MODE_32_PcdMipiFrameBufferHeight  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

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

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
SimpleFbDxeInitialize (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
