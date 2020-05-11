/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_90330D51_A99B_4cc8_A2EB_AE22542A3F45
#define _AUTOGENH_90330D51_A99B_4cc8_A2EB_AE22542A3F45

#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiSmbiosTableGuid;
extern EFI_GUID gEfiSmbios3TableGuid;
extern EFI_GUID gEfiMpsTableGuid;
extern EFI_GUID gEfiAcpi10TableGuid;
extern EFI_GUID gEfiAcpi20TableGuid;
extern EFI_GUID gShellDebug1HiiGuid;
extern EFI_GUID gEfiShellPkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiPciRootBridgeIoProtocolGuid;
extern EFI_GUID gEfiBlockIoProtocolGuid;
extern EFI_GUID gEfiSimplePointerProtocolGuid;
extern EFI_GUID gEfiCpuIo2ProtocolGuid;

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
UefiShellDebug1CommandsLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
UefiShellDebug1CommandsLibDestructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );
#include "UefiShellDebug1CommandsLibStrDefs.h"


#ifdef __cplusplus
}
#endif

#endif
