/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_50cb6037_1102_47af_b2dd_9944b6eb1abe
#define _AUTOGENH_50cb6037_1102_47af_b2dd_9944b6eb1abe

#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gShellLevel1HiiGuid;
extern EFI_GUID gEfiShellPkgTokenSpaceGuid;

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

EFI_STATUS
EFIAPI
ShellLevel1CommandsLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
ShellLevel1CommandsLibDestructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );
#include "UefiShellLevel1CommandsLibStrDefs.h"


#ifdef __cplusplus
}
#endif

#endif
