/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_1E27D461_78F3_4F7D_B1C2_F72384F13A6E
#define _AUTOGENH_1E27D461_78F3_4F7D_B1C2_F72384F13A6E

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gXiaomiMI8PkgTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdBootShimInfo1  184U
extern const UINT64 _gPcd_FixedAtBuild_PcdBootShimInfo1;
#define _PCD_GET_MODE_64_PcdBootShimInfo1  _gPcd_FixedAtBuild_PcdBootShimInfo1
//#define _PCD_SET_MODE_64_PcdBootShimInfo1  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdBootShimInfo1 0xb0000000
#define _PCD_SIZE_PcdBootShimInfo1 8
#define _PCD_GET_MODE_SIZE_PcdBootShimInfo1 _PCD_SIZE_PcdBootShimInfo1


#ifdef __cplusplus
}
#endif

#endif
