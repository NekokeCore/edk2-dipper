/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_B8D9777E_D72A_451F_9BDB_BAFB52A68415
#define _AUTOGENH_B8D9777E_D72A_451F_9BDB_BAFB52A68415

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xB8D9777E, 0xD72A, 0x451F, {0x9B, 0xDB, 0xBA, 0xFB, 0x52, 0xA6, 0x84, 0x15}}

// Guids
extern EFI_GUID gEfiDebugImageInfoTableGuid;
extern EFI_GUID gArmMpCoreInfoGuid;
extern EFI_GUID gIdleLoopEventGuid;
extern EFI_GUID gEfiVectorHandoffTableGuid;
extern EFI_GUID gArmTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gXiaomiMI8PkgTokenSpaceGuid;
extern EFI_GUID gEfiVTUTF8Guid;
extern EFI_GUID gEfiVT100Guid;
extern EFI_GUID gEfiVT100PlusGuid;
extern EFI_GUID gEfiPcAnsiGuid;
extern EFI_GUID gEfiUartDevicePathGuid;
extern EFI_GUID gEfiSasDevicePathGuid;
extern EFI_GUID gEfiVirtualDiskGuid;
extern EFI_GUID gEfiVirtualCdGuid;
extern EFI_GUID gEfiPersistentVirtualDiskGuid;
extern EFI_GUID gEfiPersistentVirtualCdGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiAcpi20TableGuid;
extern EFI_GUID gEfiAcpi10TableGuid;
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gEfiDxeServicesTableGuid;

// Protocols
extern EFI_GUID gEfiCpuArchProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiDebugPortProtocolGuid;
extern EFI_GUID gEfiDriverBindingProtocolGuid;
extern EFI_GUID gEfiSimpleTextOutProtocolGuid;
extern EFI_GUID gEfiGraphicsOutputProtocolGuid;
extern EFI_GUID gEfiHiiFontProtocolGuid;
extern EFI_GUID gEfiSimpleFileSystemProtocolGuid;
extern EFI_GUID gEfiUgaDrawProtocolGuid;
extern EFI_GUID gEfiComponentNameProtocolGuid;
extern EFI_GUID gEfiComponentName2ProtocolGuid;
extern EFI_GUID gEfiDriverConfigurationProtocolGuid;
extern EFI_GUID gEfiDriverConfiguration2ProtocolGuid;
extern EFI_GUID gEfiDriverDiagnosticsProtocolGuid;
extern EFI_GUID gEfiDriverDiagnostics2ProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdDebuggerExceptionSupport  20U
#define _PCD_SIZE_PcdDebuggerExceptionSupport 1
#define _PCD_GET_MODE_SIZE_PcdDebuggerExceptionSupport  _PCD_SIZE_PcdDebuggerExceptionSupport 
#define _PCD_VALUE_PcdDebuggerExceptionSupport  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdDebuggerExceptionSupport;
#define _PCD_GET_MODE_BOOL_PcdDebuggerExceptionSupport  _gPcd_FixedAtBuild_PcdDebuggerExceptionSupport
//#define _PCD_SET_MODE_BOOL_PcdDebuggerExceptionSupport  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdVFPEnabled  30U
#define _PCD_SIZE_PcdVFPEnabled 4
#define _PCD_GET_MODE_SIZE_PcdVFPEnabled  _PCD_SIZE_PcdVFPEnabled 
#define _PCD_VALUE_PcdVFPEnabled  1U
extern const  UINT32  _gPcd_FixedAtBuild_PcdVFPEnabled;
#define _PCD_GET_MODE_32_PcdVFPEnabled  _gPcd_FixedAtBuild_PcdVFPEnabled
//#define _PCD_SET_MODE_32_PcdVFPEnabled  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
CpuDxeInitialize (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
