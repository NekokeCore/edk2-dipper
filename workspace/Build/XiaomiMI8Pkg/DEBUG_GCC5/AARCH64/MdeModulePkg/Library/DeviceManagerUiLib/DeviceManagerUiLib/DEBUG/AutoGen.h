/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_75EBDC2E_5323_4F31_A41D_FD1A7A9FC65E
#define _AUTOGENH_75EBDC2E_5323_4F31_A41D_FD1A7A9FC65E

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gEfiHiiPlatformSetupFormsetGuid;
extern EFI_GUID gEfiIfrTianoGuid;
extern EFI_GUID gEfiIfrFrontPageGuid;

// Protocols
extern EFI_GUID gEfiHiiConfigAccessProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

EFI_STATUS
EFIAPI
DeviceManagerUiLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
DeviceManagerUiLibDestructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );
#include "DeviceManagerUiLibStrDefs.h"


#ifdef __cplusplus
}
#endif

#endif
