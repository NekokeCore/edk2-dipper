/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_449D0F00_2148_4a43_9836_F10B3980ECF5
#define _AUTOGENH_449D0F00_2148_4a43_9836_F10B3980ECF5

#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gEfiFileInfoGuid;
extern EFI_GUID gEfiShellEnvironment2ExtGuid;
extern EFI_GUID gEfiShellPkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiUnicodeCollation2ProtocolGuid;
extern EFI_GUID gEfiShellProtocolGuid;
extern EFI_GUID gEfiShellParametersProtocolGuid;
extern EFI_GUID gEfiShellEnvironment2Guid;
extern EFI_GUID gEfiShellInterfaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdShellLibAutoInitialize  155U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdShellLibAutoInitialize;
#define _PCD_GET_MODE_BOOL_PcdShellLibAutoInitialize  _gPcd_FixedAtBuild_PcdShellLibAutoInitialize
//#define _PCD_SET_MODE_BOOL_PcdShellLibAutoInitialize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdShellLibAutoInitialize 1
#define _PCD_SIZE_PcdShellLibAutoInitialize 1
#define _PCD_GET_MODE_SIZE_PcdShellLibAutoInitialize _PCD_SIZE_PcdShellLibAutoInitialize
#define _PCD_TOKEN_PcdShellPrintBufferSize  159U
extern const UINT16 _gPcd_FixedAtBuild_PcdShellPrintBufferSize;
#define _PCD_GET_MODE_16_PcdShellPrintBufferSize  _gPcd_FixedAtBuild_PcdShellPrintBufferSize
//#define _PCD_SET_MODE_16_PcdShellPrintBufferSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdShellPrintBufferSize 16000
#define _PCD_SIZE_PcdShellPrintBufferSize 2
#define _PCD_GET_MODE_SIZE_PcdShellPrintBufferSize _PCD_SIZE_PcdShellPrintBufferSize

EFI_STATUS
EFIAPI
ShellLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
ShellLibDestructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );


#ifdef __cplusplus
}
#endif

#endif
