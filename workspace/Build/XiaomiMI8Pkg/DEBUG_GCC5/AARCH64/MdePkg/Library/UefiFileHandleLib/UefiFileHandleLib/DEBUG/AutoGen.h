/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_9495D344_9D8A_41f3_8D17_E2FD238C4E71
#define _AUTOGENH_9495D344_9D8A_41f3_8D17_E2FD238C4E71

#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gEfiFileInfoGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiSimpleFileSystemProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdUefiFileHandleLibPrintBufferSize  141U
extern const UINT16 _gPcd_FixedAtBuild_PcdUefiFileHandleLibPrintBufferSize;
#define _PCD_GET_MODE_16_PcdUefiFileHandleLibPrintBufferSize  _gPcd_FixedAtBuild_PcdUefiFileHandleLibPrintBufferSize
//#define _PCD_SET_MODE_16_PcdUefiFileHandleLibPrintBufferSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdUefiFileHandleLibPrintBufferSize 1536
#define _PCD_SIZE_PcdUefiFileHandleLibPrintBufferSize 2
#define _PCD_GET_MODE_SIZE_PcdUefiFileHandleLibPrintBufferSize _PCD_SIZE_PcdUefiFileHandleLibPrintBufferSize


#ifdef __cplusplus
}
#endif

#endif
