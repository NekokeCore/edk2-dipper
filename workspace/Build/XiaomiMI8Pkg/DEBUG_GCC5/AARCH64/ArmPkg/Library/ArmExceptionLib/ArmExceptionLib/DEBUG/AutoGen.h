/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_A9796991_4E88_47F0_87C5_D96A1D270539
#define _AUTOGENH_A9796991_4E88_47F0_87C5_D96A1D270539

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gArmTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdDebuggerExceptionSupport  20U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdDebuggerExceptionSupport;
#define _PCD_GET_MODE_BOOL_PcdDebuggerExceptionSupport  _gPcd_FixedAtBuild_PcdDebuggerExceptionSupport
//#define _PCD_SET_MODE_BOOL_PcdDebuggerExceptionSupport  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_TOKEN_PcdCpuVectorBaseAddress  19U
extern const UINT64 _gPcd_FixedAtBuild_PcdCpuVectorBaseAddress;
#define _PCD_GET_MODE_64_PcdCpuVectorBaseAddress  _gPcd_FixedAtBuild_PcdCpuVectorBaseAddress
//#define _PCD_SET_MODE_64_PcdCpuVectorBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdCpuVectorBaseAddress 0xffff0000
#define _PCD_SIZE_PcdCpuVectorBaseAddress 8
#define _PCD_GET_MODE_SIZE_PcdCpuVectorBaseAddress _PCD_SIZE_PcdCpuVectorBaseAddress


#ifdef __cplusplus
}
#endif

#endif
