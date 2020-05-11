/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_5e2e44af_53c1_44c2_a801_9c149f3d6ba0
#define _AUTOGENH_5e2e44af_53c1_44c2_a801_9c149f3d6ba0

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gArmPlatformTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdCoreCount  8U
extern const UINT32 _gPcd_FixedAtBuild_PcdCoreCount;
#define _PCD_GET_MODE_32_PcdCoreCount  _gPcd_FixedAtBuild_PcdCoreCount
//#define _PCD_SET_MODE_32_PcdCoreCount  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdCoreCount 1
#define _PCD_SIZE_PcdCoreCount 4
#define _PCD_GET_MODE_SIZE_PcdCoreCount _PCD_SIZE_PcdCoreCount


#ifdef __cplusplus
}
#endif

#endif
