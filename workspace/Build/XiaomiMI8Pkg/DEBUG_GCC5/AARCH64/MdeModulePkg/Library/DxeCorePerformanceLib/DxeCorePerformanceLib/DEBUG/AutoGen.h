/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_D0F78BBF_0A30_4c63_8A48_0F618A4AFACD
#define _AUTOGENH_D0F78BBF_0A30_4c63_8A48_0F618A4AFACD

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gPerformanceProtocolGuid;
extern EFI_GUID gZeroGuid;
extern EFI_GUID gEfiFirmwarePerformanceGuid;
extern EFI_GUID gEdkiiFpdtExtendedFirmwarePerformanceGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEdkiiPiSmmCommunicationRegionTableGuid;
extern EFI_GUID gEdkiiPerformanceMeasurementProtocolGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiSmmCommunicationProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdPerformanceLibraryPropertyMask  132U
extern const UINT8 _gPcd_FixedAtBuild_PcdPerformanceLibraryPropertyMask;
#define _PCD_GET_MODE_8_PcdPerformanceLibraryPropertyMask  _gPcd_FixedAtBuild_PcdPerformanceLibraryPropertyMask
//#define _PCD_SET_MODE_8_PcdPerformanceLibraryPropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdPerformanceLibraryPropertyMask 1
#define _PCD_SIZE_PcdPerformanceLibraryPropertyMask 1
#define _PCD_GET_MODE_SIZE_PcdPerformanceLibraryPropertyMask _PCD_SIZE_PcdPerformanceLibraryPropertyMask
#define _PCD_TOKEN_PcdEdkiiFpdtStringRecordEnableOnly  59U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdEdkiiFpdtStringRecordEnableOnly;
#define _PCD_GET_MODE_BOOL_PcdEdkiiFpdtStringRecordEnableOnly  _gPcd_FixedAtBuild_PcdEdkiiFpdtStringRecordEnableOnly
//#define _PCD_SET_MODE_BOOL_PcdEdkiiFpdtStringRecordEnableOnly  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdEdkiiFpdtStringRecordEnableOnly 0
#define _PCD_SIZE_PcdEdkiiFpdtStringRecordEnableOnly 1
#define _PCD_GET_MODE_SIZE_PcdEdkiiFpdtStringRecordEnableOnly _PCD_SIZE_PcdEdkiiFpdtStringRecordEnableOnly
#define _PCD_TOKEN_PcdExtFpdtBootRecordPadSize  63U
extern const UINT32 _gPcd_FixedAtBuild_PcdExtFpdtBootRecordPadSize;
#define _PCD_GET_MODE_32_PcdExtFpdtBootRecordPadSize  _gPcd_FixedAtBuild_PcdExtFpdtBootRecordPadSize
//#define _PCD_SET_MODE_32_PcdExtFpdtBootRecordPadSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdExtFpdtBootRecordPadSize 0x20000
#define _PCD_SIZE_PcdExtFpdtBootRecordPadSize 4
#define _PCD_GET_MODE_SIZE_PcdExtFpdtBootRecordPadSize _PCD_SIZE_PcdExtFpdtBootRecordPadSize

EFI_STATUS
EFIAPI
DxeCorePerformanceLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );


#ifdef __cplusplus
}
#endif

#endif
