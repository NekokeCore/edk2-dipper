/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_D250E364_51C6_49ed_AEBF_6D83F5130F74
#define _AUTOGENH_D250E364_51C6_49ed_AEBF_6D83F5130F74

#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gShellInstall1HiiGuid;
extern EFI_GUID gEfiShellPkgTokenSpaceGuid;

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
ShellInstall1CommandsLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
ShellInstall1CommandsLibDestructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );


#ifdef __cplusplus
}
#endif

#endif
