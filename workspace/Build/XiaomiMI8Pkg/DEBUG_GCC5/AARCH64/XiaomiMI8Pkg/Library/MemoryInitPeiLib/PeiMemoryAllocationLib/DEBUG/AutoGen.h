/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_4bbc9c10_a100_43fb_8311_332ba497d1b4
#define _AUTOGENH_4bbc9c10_a100_43fb_8311_332ba497d1b4

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gEfiMemoryTypeInformationGuid;
extern GUID gArmTokenSpaceGuid;
extern GUID gEmbeddedTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdSystemMemoryBase  28U
extern const UINT64 _gPcd_FixedAtBuild_PcdSystemMemoryBase;
#define _PCD_GET_MODE_64_PcdSystemMemoryBase  _gPcd_FixedAtBuild_PcdSystemMemoryBase
//#define _PCD_SET_MODE_64_PcdSystemMemoryBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdSystemMemoryBase 0x80000000
#define _PCD_SIZE_PcdSystemMemoryBase 8
#define _PCD_GET_MODE_SIZE_PcdSystemMemoryBase _PCD_SIZE_PcdSystemMemoryBase
#define _PCD_TOKEN_PcdSystemMemorySize  29U
extern const UINT64 _gPcd_FixedAtBuild_PcdSystemMemorySize;
#define _PCD_GET_MODE_64_PcdSystemMemorySize  _gPcd_FixedAtBuild_PcdSystemMemorySize
//#define _PCD_SET_MODE_64_PcdSystemMemorySize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdSystemMemorySize 0x140000000
#define _PCD_SIZE_PcdSystemMemorySize 8
#define _PCD_GET_MODE_SIZE_PcdSystemMemorySize _PCD_SIZE_PcdSystemMemorySize
#define _PCD_TOKEN_PcdPrePiProduceMemoryTypeInformationHob  182U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdPrePiProduceMemoryTypeInformationHob;
#define _PCD_GET_MODE_BOOL_PcdPrePiProduceMemoryTypeInformationHob  _gPcd_FixedAtBuild_PcdPrePiProduceMemoryTypeInformationHob
//#define _PCD_SET_MODE_BOOL_PcdPrePiProduceMemoryTypeInformationHob  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD


#ifdef __cplusplus
}
#endif

#endif
