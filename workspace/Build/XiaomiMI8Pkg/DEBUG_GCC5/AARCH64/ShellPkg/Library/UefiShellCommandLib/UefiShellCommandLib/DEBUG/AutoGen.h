/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_5C12F31F_EBAC_466e_A400_FCA8C9EA3A05
#define _AUTOGENH_5C12F31F_EBAC_466e_A400_FCA8C9EA3A05

#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gEfiSasDevicePathGuid;
extern EFI_GUID gEfiShellPkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiUnicodeCollation2ProtocolGuid;
extern EFI_GUID gEfiShellProtocolGuid;
extern EFI_GUID gEfiShellParametersProtocolGuid;
extern EFI_GUID gEfiShellDynamicCommandProtocolGuid;
extern EFI_GUID gEfiUsbIoProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdShellSupportLevel  165U
extern const UINT8 _gPcd_FixedAtBuild_PcdShellSupportLevel;
#define _PCD_GET_MODE_8_PcdShellSupportLevel  _gPcd_FixedAtBuild_PcdShellSupportLevel
//#define _PCD_SET_MODE_8_PcdShellSupportLevel  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdShellSupportLevel 3
#define _PCD_SIZE_PcdShellSupportLevel 1
#define _PCD_GET_MODE_SIZE_PcdShellSupportLevel _PCD_SIZE_PcdShellSupportLevel
#define _PCD_TOKEN_PcdShellMapNameLength  156U
extern const UINT8 _gPcd_FixedAtBuild_PcdShellMapNameLength;
#define _PCD_GET_MODE_8_PcdShellMapNameLength  _gPcd_FixedAtBuild_PcdShellMapNameLength
//#define _PCD_SET_MODE_8_PcdShellMapNameLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdShellMapNameLength 50
#define _PCD_SIZE_PcdShellMapNameLength 1
#define _PCD_GET_MODE_SIZE_PcdShellMapNameLength _PCD_SIZE_PcdShellMapNameLength
#define _PCD_TOKEN_PcdUsbExtendedDecode  168U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdUsbExtendedDecode;
#define _PCD_GET_MODE_BOOL_PcdUsbExtendedDecode  _gPcd_FixedAtBuild_PcdUsbExtendedDecode
//#define _PCD_SET_MODE_BOOL_PcdUsbExtendedDecode  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdUsbExtendedDecode 1
#define _PCD_SIZE_PcdUsbExtendedDecode 1
#define _PCD_GET_MODE_SIZE_PcdUsbExtendedDecode _PCD_SIZE_PcdUsbExtendedDecode
#define _PCD_TOKEN_PcdShellDecodeIScsiMapNames  150U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdShellDecodeIScsiMapNames;
#define _PCD_GET_MODE_BOOL_PcdShellDecodeIScsiMapNames  _gPcd_FixedAtBuild_PcdShellDecodeIScsiMapNames
//#define _PCD_SET_MODE_BOOL_PcdShellDecodeIScsiMapNames  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdShellDecodeIScsiMapNames 0
#define _PCD_SIZE_PcdShellDecodeIScsiMapNames 1
#define _PCD_GET_MODE_SIZE_PcdShellDecodeIScsiMapNames _PCD_SIZE_PcdShellDecodeIScsiMapNames
#define _PCD_TOKEN_PcdShellVendorExtendedDecode  167U
extern const UINT32 _gPcd_FixedAtBuild_PcdShellVendorExtendedDecode;
#define _PCD_GET_MODE_32_PcdShellVendorExtendedDecode  _gPcd_FixedAtBuild_PcdShellVendorExtendedDecode
//#define _PCD_SET_MODE_32_PcdShellVendorExtendedDecode  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdShellVendorExtendedDecode 0
#define _PCD_SIZE_PcdShellVendorExtendedDecode 4
#define _PCD_GET_MODE_SIZE_PcdShellVendorExtendedDecode _PCD_SIZE_PcdShellVendorExtendedDecode

EFI_STATUS
EFIAPI
ShellCommandLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
ShellCommandLibDestructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );


#ifdef __cplusplus
}
#endif

#endif
