/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_CBF3931C_A2DF_40e5_B77E_CCA9555E9755
#define _AUTOGENH_CBF3931C_A2DF_40e5_B77E_CCA9555E9755

#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gEfiFileSystemInfoGuid;
extern EFI_GUID gEfiFileInfoGuid;
extern EFI_GUID gShellLevel2HiiGuid;
extern EFI_GUID gEfiShellPkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiUnicodeCollation2ProtocolGuid;
extern EFI_GUID gEfiShellProtocolGuid;
extern EFI_GUID gEfiShellParametersProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiSimpleFileSystemProtocolGuid;

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
#define _PCD_TOKEN_PcdShellFileOperationSize  151U
extern const UINT32 _gPcd_FixedAtBuild_PcdShellFileOperationSize;
#define _PCD_GET_MODE_32_PcdShellFileOperationSize  _gPcd_FixedAtBuild_PcdShellFileOperationSize
//#define _PCD_SET_MODE_32_PcdShellFileOperationSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdShellFileOperationSize 0x1000
#define _PCD_SIZE_PcdShellFileOperationSize 4
#define _PCD_GET_MODE_SIZE_PcdShellFileOperationSize _PCD_SIZE_PcdShellFileOperationSize

EFI_STATUS
EFIAPI
ShellLevel2CommandsLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
ShellLevel2CommandsLibDestructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );
#include "UefiShellLevel2CommandsLibStrDefs.h"


#ifdef __cplusplus
}
#endif

#endif
