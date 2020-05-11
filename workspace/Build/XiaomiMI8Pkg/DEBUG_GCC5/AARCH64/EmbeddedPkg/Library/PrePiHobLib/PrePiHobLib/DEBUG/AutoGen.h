/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_1F3A3278_82EB_4C0D_86F1_5BCDA5846CB2
#define _AUTOGENH_1F3A3278_82EB_4C0D_86F1_5BCDA5846CB2

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gEfiHobMemoryAllocModuleGuid;
extern GUID gEfiHobMemoryAllocStackGuid;
extern GUID gEmbeddedTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdMemoryTypeEfiACPIReclaimMemory  172U
extern const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiACPIReclaimMemory;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiACPIReclaimMemory  _gPcd_FixedAtBuild_PcdMemoryTypeEfiACPIReclaimMemory
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiACPIReclaimMemory  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdMemoryTypeEfiACPIReclaimMemory 0
#define _PCD_SIZE_PcdMemoryTypeEfiACPIReclaimMemory 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiACPIReclaimMemory _PCD_SIZE_PcdMemoryTypeEfiACPIReclaimMemory
#define _PCD_TOKEN_PcdMemoryTypeEfiACPIMemoryNVS  171U
extern const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiACPIMemoryNVS;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiACPIMemoryNVS  _gPcd_FixedAtBuild_PcdMemoryTypeEfiACPIMemoryNVS
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiACPIMemoryNVS  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdMemoryTypeEfiACPIMemoryNVS 0
#define _PCD_SIZE_PcdMemoryTypeEfiACPIMemoryNVS 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiACPIMemoryNVS _PCD_SIZE_PcdMemoryTypeEfiACPIMemoryNVS
#define _PCD_TOKEN_PcdMemoryTypeEfiReservedMemoryType  177U
extern const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiReservedMemoryType;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiReservedMemoryType  _gPcd_FixedAtBuild_PcdMemoryTypeEfiReservedMemoryType
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiReservedMemoryType  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdMemoryTypeEfiReservedMemoryType 0
#define _PCD_SIZE_PcdMemoryTypeEfiReservedMemoryType 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiReservedMemoryType _PCD_SIZE_PcdMemoryTypeEfiReservedMemoryType
#define _PCD_TOKEN_PcdMemoryTypeEfiRuntimeServicesData  179U
extern const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiRuntimeServicesData;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiRuntimeServicesData  _gPcd_FixedAtBuild_PcdMemoryTypeEfiRuntimeServicesData
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiRuntimeServicesData  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdMemoryTypeEfiRuntimeServicesData 50
#define _PCD_SIZE_PcdMemoryTypeEfiRuntimeServicesData 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiRuntimeServicesData _PCD_SIZE_PcdMemoryTypeEfiRuntimeServicesData
#define _PCD_TOKEN_PcdMemoryTypeEfiRuntimeServicesCode  178U
extern const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiRuntimeServicesCode;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiRuntimeServicesCode  _gPcd_FixedAtBuild_PcdMemoryTypeEfiRuntimeServicesCode
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiRuntimeServicesCode  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdMemoryTypeEfiRuntimeServicesCode 20
#define _PCD_SIZE_PcdMemoryTypeEfiRuntimeServicesCode 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiRuntimeServicesCode _PCD_SIZE_PcdMemoryTypeEfiRuntimeServicesCode
#define _PCD_TOKEN_PcdMemoryTypeEfiBootServicesCode  173U
extern const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiBootServicesCode;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiBootServicesCode  _gPcd_FixedAtBuild_PcdMemoryTypeEfiBootServicesCode
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiBootServicesCode  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdMemoryTypeEfiBootServicesCode 400
#define _PCD_SIZE_PcdMemoryTypeEfiBootServicesCode 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiBootServicesCode _PCD_SIZE_PcdMemoryTypeEfiBootServicesCode
#define _PCD_TOKEN_PcdMemoryTypeEfiBootServicesData  174U
extern const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiBootServicesData;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiBootServicesData  _gPcd_FixedAtBuild_PcdMemoryTypeEfiBootServicesData
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiBootServicesData  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdMemoryTypeEfiBootServicesData 20000
#define _PCD_SIZE_PcdMemoryTypeEfiBootServicesData 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiBootServicesData _PCD_SIZE_PcdMemoryTypeEfiBootServicesData
#define _PCD_TOKEN_PcdMemoryTypeEfiLoaderCode  175U
extern const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiLoaderCode;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiLoaderCode  _gPcd_FixedAtBuild_PcdMemoryTypeEfiLoaderCode
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiLoaderCode  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdMemoryTypeEfiLoaderCode 20
#define _PCD_SIZE_PcdMemoryTypeEfiLoaderCode 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiLoaderCode _PCD_SIZE_PcdMemoryTypeEfiLoaderCode
#define _PCD_TOKEN_PcdMemoryTypeEfiLoaderData  176U
extern const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiLoaderData;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiLoaderData  _gPcd_FixedAtBuild_PcdMemoryTypeEfiLoaderData
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiLoaderData  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdMemoryTypeEfiLoaderData 0
#define _PCD_SIZE_PcdMemoryTypeEfiLoaderData 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiLoaderData _PCD_SIZE_PcdMemoryTypeEfiLoaderData
#define _PCD_TOKEN_PcdPrePiProduceMemoryTypeInformationHob  182U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdPrePiProduceMemoryTypeInformationHob;
#define _PCD_GET_MODE_BOOL_PcdPrePiProduceMemoryTypeInformationHob  _gPcd_FixedAtBuild_PcdPrePiProduceMemoryTypeInformationHob
//#define _PCD_SET_MODE_BOOL_PcdPrePiProduceMemoryTypeInformationHob  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD


#ifdef __cplusplus
}
#endif

#endif
