/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_FC9990DF_C5FF_44cf_8799_CBB45B577F87
#define _AUTOGENH_FC9990DF_C5FF_44cf_8799_CBB45B577F87

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gEfiMdePkgTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdSpinLockTimeout  135U
extern const UINT32 _gPcd_FixedAtBuild_PcdSpinLockTimeout;
#define _PCD_GET_MODE_32_PcdSpinLockTimeout  _gPcd_FixedAtBuild_PcdSpinLockTimeout
//#define _PCD_SET_MODE_32_PcdSpinLockTimeout  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdSpinLockTimeout 10000000
#define _PCD_SIZE_PcdSpinLockTimeout 4
#define _PCD_GET_MODE_SIZE_PcdSpinLockTimeout _PCD_SIZE_PcdSpinLockTimeout


#ifdef __cplusplus
}
#endif

#endif
