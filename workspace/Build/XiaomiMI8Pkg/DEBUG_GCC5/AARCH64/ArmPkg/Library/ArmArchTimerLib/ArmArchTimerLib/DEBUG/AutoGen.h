/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_82da1b44_d2d6_4a7d_bbf0_a0cb67964034
#define _AUTOGENH_82da1b44_d2d6_4a7d_bbf0_a0cb67964034

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
#define _PCD_TOKEN_PcdArmArchTimerFreqInHz  11U
extern const UINT32 _gPcd_FixedAtBuild_PcdArmArchTimerFreqInHz;
#define _PCD_GET_MODE_32_PcdArmArchTimerFreqInHz  _gPcd_FixedAtBuild_PcdArmArchTimerFreqInHz
//#define _PCD_SET_MODE_32_PcdArmArchTimerFreqInHz  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdArmArchTimerFreqInHz 0
#define _PCD_SIZE_PcdArmArchTimerFreqInHz 4
#define _PCD_GET_MODE_SIZE_PcdArmArchTimerFreqInHz _PCD_SIZE_PcdArmArchTimerFreqInHz

RETURN_STATUS
EFIAPI
TimerConstructor (
  VOID
  );


#ifdef __cplusplus
}
#endif

#endif
