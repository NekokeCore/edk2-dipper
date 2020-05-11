/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_19BE1E4B_1A9A_44c1_8F12_32DD0470516A
#define _AUTOGENH_19BE1E4B_1A9A_44c1_8F12_32DD0470516A

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gEfiFmpCapsuleGuid;
extern EFI_GUID gWindowsUxCapsuleGuid;
extern EFI_GUID gEfiSystemResourceTableGuid;
extern EFI_GUID gEfiCapsuleReportGuid;
extern EFI_GUID gEfiCapsuleVendorGuid;
extern EFI_GUID gEfiEndOfDxeEventGroupGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventVirtualAddressChangeGuid;
extern EFI_GUID gEdkiiCapsuleOnDiskNameGuid;

// Protocols
extern EFI_GUID gEsrtManagementProtocolGuid;
extern EFI_GUID gEfiFirmwareManagementProtocolGuid;
extern EFI_GUID gEdkiiVariableLockProtocolGuid;
extern EFI_GUID gEdkiiFirmwareManagementProgressProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

EFI_STATUS
EFIAPI
DxeCapsuleLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );
EFI_STATUS
EFIAPI
DxeRuntimeCapsuleLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
DxeCapsuleLibDestructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );
EFI_STATUS
EFIAPI
DxeRuntimeCapsuleLibDestructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );


#ifdef __cplusplus
}
#endif

#endif
