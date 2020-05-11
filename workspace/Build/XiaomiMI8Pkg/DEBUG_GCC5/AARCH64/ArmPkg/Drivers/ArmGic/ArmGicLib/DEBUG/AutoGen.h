/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_03d05ee4_cdeb_458c_9dfc_993f09bdf405
#define _AUTOGENH_03d05ee4_cdeb_458c_9dfc_993f09bdf405

#ifdef __cplusplus
extern "C" {
#endif

#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gArmTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdArmGicV3WithV2Legacy  16U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdArmGicV3WithV2Legacy;
#define _PCD_GET_MODE_BOOL_PcdArmGicV3WithV2Legacy  _gPcd_FixedAtBuild_PcdArmGicV3WithV2Legacy
//#define _PCD_SET_MODE_BOOL_PcdArmGicV3WithV2Legacy  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD


#ifdef __cplusplus
}
#endif

#endif
