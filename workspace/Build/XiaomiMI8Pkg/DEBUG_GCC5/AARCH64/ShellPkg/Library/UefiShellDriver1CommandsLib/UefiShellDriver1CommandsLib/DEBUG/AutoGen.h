/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_313D3674_3ED4_48fd_BF97_7DB35D4190D1
#define _AUTOGENH_313D3674_3ED4_48fd_BF97_7DB35D4190D1

#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiConsoleInDeviceGuid;
extern EFI_GUID gEfiConsoleOutDeviceGuid;
extern EFI_GUID gShellDriver1HiiGuid;
extern EFI_GUID gEfiShellPkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiDriverHealthProtocolGuid;
extern EFI_GUID gEfiDriverFamilyOverrideProtocolGuid;
extern EFI_GUID gEfiHiiConfigAccessProtocolGuid;
extern EFI_GUID gEfiHiiDatabaseProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdShellProfileMask  160U
extern const UINT8 _gPcd_FixedAtBuild_PcdShellProfileMask;
#define _PCD_GET_MODE_8_PcdShellProfileMask  _gPcd_FixedAtBuild_PcdShellProfileMask
//#define _PCD_SET_MODE_8_PcdShellProfileMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdShellProfileMask 0xFF
#define _PCD_SIZE_PcdShellProfileMask 1
#define _PCD_GET_MODE_SIZE_PcdShellProfileMask _PCD_SIZE_PcdShellProfileMask

EFI_STATUS
EFIAPI
UefiShellDriver1CommandsLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
UefiShellDriver1CommandsLibDestructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );
#include "UefiShellDriver1CommandsLibStrDefs.h"


#ifdef __cplusplus
}
#endif

#endif
