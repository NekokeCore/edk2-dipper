/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_348C4D62_BFBD_4882_9ECE_C80BB1C4783B
#define _AUTOGENH_348C4D62_BFBD_4882_9ECE_C80BB1C4783B

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x348C4D62, 0xBFBD, 0x4882, {0x9E, 0xCE, 0xC8, 0x0B, 0xB1, 0xC4, 0x78, 0x3B}}

// Guids
extern EFI_GUID gEfiHiiKeyBoardLayoutGuid;
extern EFI_GUID gEfiHiiImageDecoderNameJpegGuid;
extern EFI_GUID gEfiHiiImageDecoderNamePngGuid;
extern EFI_GUID gEdkiiIfrBitVarstoreGuid;
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
extern EFI_GUID gEfiHobListGuid;

// Protocols
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiHiiStringProtocolGuid;
extern EFI_GUID gEfiHiiImageProtocolGuid;
extern EFI_GUID gEfiHiiImageExProtocolGuid;
extern EFI_GUID gEfiHiiImageDecoderProtocolGuid;
extern EFI_GUID gEfiHiiConfigRoutingProtocolGuid;
extern EFI_GUID gEfiHiiDatabaseProtocolGuid;
extern EFI_GUID gEfiHiiFontProtocolGuid;
extern EFI_GUID gEfiHiiConfigAccessProtocolGuid;
extern EFI_GUID gEfiConfigKeywordHandlerProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiDebugPortProtocolGuid;
extern EFI_GUID gEfiDriverBindingProtocolGuid;
extern EFI_GUID gEfiSimpleTextOutProtocolGuid;
extern EFI_GUID gEfiGraphicsOutputProtocolGuid;
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

// Definition of PCD Token Space GUIDs used in this module

extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdSupportHiiImageProtocol  106U
#define _PCD_SIZE_PcdSupportHiiImageProtocol 1
#define _PCD_GET_MODE_SIZE_PcdSupportHiiImageProtocol  _PCD_SIZE_PcdSupportHiiImageProtocol 
#define _PCD_VALUE_PcdSupportHiiImageProtocol  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdSupportHiiImageProtocol;
#define _PCD_GET_MODE_BOOL_PcdSupportHiiImageProtocol  _gPcd_FixedAtBuild_PcdSupportHiiImageProtocol
//#define _PCD_SET_MODE_BOOL_PcdSupportHiiImageProtocol  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdHiiOsRuntimeSupport  74U
#define _PCD_SIZE_PcdHiiOsRuntimeSupport 1
#define _PCD_GET_MODE_SIZE_PcdHiiOsRuntimeSupport  _PCD_SIZE_PcdHiiOsRuntimeSupport 
#define _PCD_VALUE_PcdHiiOsRuntimeSupport  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdHiiOsRuntimeSupport;
#define _PCD_GET_MODE_BOOL_PcdHiiOsRuntimeSupport  _gPcd_FixedAtBuild_PcdHiiOsRuntimeSupport
//#define _PCD_SET_MODE_BOOL_PcdHiiOsRuntimeSupport  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUefiVariableDefaultPlatformLang  146U
#define _PCD_VALUE_PcdUefiVariableDefaultPlatformLang  _gPcd_FixedAtBuild_PcdUefiVariableDefaultPlatformLang
extern const UINT8 _gPcd_FixedAtBuild_PcdUefiVariableDefaultPlatformLang[6];
#define _PCD_GET_MODE_PTR_PcdUefiVariableDefaultPlatformLang  _gPcd_FixedAtBuild_PcdUefiVariableDefaultPlatformLang
#define _PCD_SIZE_PcdUefiVariableDefaultPlatformLang 6
#define _PCD_GET_MODE_SIZE_PcdUefiVariableDefaultPlatformLang  _PCD_SIZE_PcdUefiVariableDefaultPlatformLang 
//#define _PCD_SET_MODE_PTR_PcdUefiVariableDefaultPlatformLang  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_gEfiMdeModulePkgTokenSpaceGuid_PcdNvStoreDefaultValueBuffer  196613U
#define _PCD_TOKEN_PcdNvStoreDefaultValueBuffer  _PCD_TOKEN_gEfiMdeModulePkgTokenSpaceGuid_PcdNvStoreDefaultValueBuffer
#define _PCD_GET_MODE_PTR_PcdNvStoreDefaultValueBuffer  LibPcdGetExPtr(&gEfiMdeModulePkgTokenSpaceGuid, _PCD_TOKEN_PcdNvStoreDefaultValueBuffer)
#define _PCD_GET_MODE_SIZE_PcdNvStoreDefaultValueBuffer LibPcdGetExSize(&gEfiMdeModulePkgTokenSpaceGuid, _PCD_TOKEN_PcdNvStoreDefaultValueBuffer)
#define _PCD_SET_MODE_PTR_PcdNvStoreDefaultValueBuffer(SizeOfBuffer, Buffer)  LibPcdSetExPtr(&gEfiMdeModulePkgTokenSpaceGuid, _PCD_TOKEN_PcdNvStoreDefaultValueBuffer, (SizeOfBuffer), (Buffer))
#define _PCD_SET_MODE_PTR_S_PcdNvStoreDefaultValueBuffer(SizeOfBuffer, Buffer)  LibPcdSetExPtrS(&gEfiMdeModulePkgTokenSpaceGuid, _PCD_TOKEN_PcdNvStoreDefaultValueBuffer, (SizeOfBuffer), (Buffer))

#define COMPAREGUID(Guid1, Guid2) (BOOLEAN)(*(CONST UINT64*)Guid1 == *(CONST UINT64*)Guid2 && *((CONST UINT64*)Guid1 + 1) == *((CONST UINT64*)Guid2 + 1))

#define __PCD_PcdNvStoreDefaultValueBuffer_ADDR_CMP(GuidPtr)  (\
  (GuidPtr == &gEfiMdeModulePkgTokenSpaceGuid) ? _PCD_TOKEN_gEfiMdeModulePkgTokenSpaceGuid_PcdNvStoreDefaultValueBuffer:0 \
  )

#define __PCD_PcdNvStoreDefaultValueBuffer_VAL_CMP(GuidPtr)  (\
  (GuidPtr == NULL) ? 0:\
  COMPAREGUID (GuidPtr, &gEfiMdeModulePkgTokenSpaceGuid) ? _PCD_TOKEN_gEfiMdeModulePkgTokenSpaceGuid_PcdNvStoreDefaultValueBuffer:0 \
  )
#define _PCD_TOKEN_EX_PcdNvStoreDefaultValueBuffer(GuidPtr)   __PCD_PcdNvStoreDefaultValueBuffer_ADDR_CMP(GuidPtr) ? __PCD_PcdNvStoreDefaultValueBuffer_ADDR_CMP(GuidPtr) : __PCD_PcdNvStoreDefaultValueBuffer_VAL_CMP(GuidPtr)  

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
InitializeHiiDatabase (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
