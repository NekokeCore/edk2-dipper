/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_92FD2DE3_B9CB_4B35_8141_42AD34D73C9F
#define _AUTOGENH_92FD2DE3_B9CB_4B35_8141_42AD34D73C9F

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gEfiFileInfoGuid;
extern EFI_GUID gEfiFileSystemInfoGuid;
extern EFI_GUID gEfiFileSystemVolumeLabelInfoIdGuid;
extern EFI_GUID gEfiEndOfDxeEventGroupGuid;
extern EFI_GUID gEfiTtyTermGuid;
extern EFI_GUID gUefiShellFileGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiGraphicsOutputProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiSimpleFileSystemProtocolGuid;
extern EFI_GUID gEsrtManagementProtocolGuid;
extern EFI_GUID gEfiUsb2HcProtocolGuid;
extern EFI_GUID gEFIDroidKeypadDeviceProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdUartDefaultBaudRate  136U
extern const UINT64 _gPcd_FixedAtBuild_PcdUartDefaultBaudRate;
#define _PCD_GET_MODE_64_PcdUartDefaultBaudRate  _gPcd_FixedAtBuild_PcdUartDefaultBaudRate
//#define _PCD_SET_MODE_64_PcdUartDefaultBaudRate  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdUartDefaultBaudRate 115200
#define _PCD_SIZE_PcdUartDefaultBaudRate 8
#define _PCD_GET_MODE_SIZE_PcdUartDefaultBaudRate _PCD_SIZE_PcdUartDefaultBaudRate
#define _PCD_TOKEN_PcdUartDefaultDataBits  137U
extern const UINT8 _gPcd_FixedAtBuild_PcdUartDefaultDataBits;
#define _PCD_GET_MODE_8_PcdUartDefaultDataBits  _gPcd_FixedAtBuild_PcdUartDefaultDataBits
//#define _PCD_SET_MODE_8_PcdUartDefaultDataBits  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdUartDefaultDataBits 8
#define _PCD_SIZE_PcdUartDefaultDataBits 1
#define _PCD_GET_MODE_SIZE_PcdUartDefaultDataBits _PCD_SIZE_PcdUartDefaultDataBits
#define _PCD_TOKEN_PcdUartDefaultParity  138U
extern const UINT8 _gPcd_FixedAtBuild_PcdUartDefaultParity;
#define _PCD_GET_MODE_8_PcdUartDefaultParity  _gPcd_FixedAtBuild_PcdUartDefaultParity
//#define _PCD_SET_MODE_8_PcdUartDefaultParity  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdUartDefaultParity 1
#define _PCD_SIZE_PcdUartDefaultParity 1
#define _PCD_GET_MODE_SIZE_PcdUartDefaultParity _PCD_SIZE_PcdUartDefaultParity
#define _PCD_TOKEN_PcdUartDefaultStopBits  140U
extern const UINT8 _gPcd_FixedAtBuild_PcdUartDefaultStopBits;
#define _PCD_GET_MODE_8_PcdUartDefaultStopBits  _gPcd_FixedAtBuild_PcdUartDefaultStopBits
//#define _PCD_SET_MODE_8_PcdUartDefaultStopBits  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdUartDefaultStopBits 1
#define _PCD_SIZE_PcdUartDefaultStopBits 1
#define _PCD_GET_MODE_SIZE_PcdUartDefaultStopBits _PCD_SIZE_PcdUartDefaultStopBits
#define _PCD_TOKEN_PcdDefaultTerminalType  122U
extern const UINT8 _gPcd_FixedAtBuild_PcdDefaultTerminalType;
#define _PCD_GET_MODE_8_PcdDefaultTerminalType  _gPcd_FixedAtBuild_PcdDefaultTerminalType
//#define _PCD_SET_MODE_8_PcdDefaultTerminalType  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdDefaultTerminalType 4
#define _PCD_SIZE_PcdDefaultTerminalType 1
#define _PCD_GET_MODE_SIZE_PcdDefaultTerminalType _PCD_SIZE_PcdDefaultTerminalType
#define _PCD_TOKEN_PcdUgaConsumeSupport  148U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdUgaConsumeSupport;
#define _PCD_GET_MODE_BOOL_PcdUgaConsumeSupport  _gPcd_FixedAtBuild_PcdUgaConsumeSupport
//#define _PCD_SET_MODE_BOOL_PcdUgaConsumeSupport  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_TOKEN_PcdPlatformBootTimeOut  2U
#define _PCD_GET_MODE_16_PcdPlatformBootTimeOut  LibPcdGet16(_PCD_TOKEN_PcdPlatformBootTimeOut)
#define _PCD_GET_MODE_SIZE_PcdPlatformBootTimeOut  LibPcdGetSize(_PCD_TOKEN_PcdPlatformBootTimeOut)
#define _PCD_SET_MODE_16_PcdPlatformBootTimeOut(Value)  LibPcdSet16(_PCD_TOKEN_PcdPlatformBootTimeOut, (Value))
#define _PCD_SET_MODE_16_S_PcdPlatformBootTimeOut(Value)  LibPcdSet16S(_PCD_TOKEN_PcdPlatformBootTimeOut, (Value))


#ifdef __cplusplus
}
#endif

#endif
