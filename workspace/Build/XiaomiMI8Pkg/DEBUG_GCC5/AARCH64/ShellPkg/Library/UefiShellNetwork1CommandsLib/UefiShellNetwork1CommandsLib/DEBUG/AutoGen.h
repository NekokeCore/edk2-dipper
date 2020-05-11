/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_9A929F7E_3861_45ce_87AB_7371219AE255
#define _AUTOGENH_9A929F7E_3861_45ce_87AB_7371219AE255

#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gShellNetwork1HiiGuid;
extern EFI_GUID gEfiShellPkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiCpuArchProtocolGuid;
extern EFI_GUID gEfiTimerArchProtocolGuid;
extern EFI_GUID gEfiIp6ProtocolGuid;
extern EFI_GUID gEfiIp6ServiceBindingProtocolGuid;
extern EFI_GUID gEfiIp6ConfigProtocolGuid;
extern EFI_GUID gEfiIp4ProtocolGuid;
extern EFI_GUID gEfiIp4ServiceBindingProtocolGuid;
extern EFI_GUID gEfiIp4Config2ProtocolGuid;

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
ShellNetwork1CommandsLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
ShellNetwork1CommandsLibDestructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );
#include "UefiShellNetwork1CommandsLibStrDefs.h"


#ifdef __cplusplus
}
#endif

#endif
