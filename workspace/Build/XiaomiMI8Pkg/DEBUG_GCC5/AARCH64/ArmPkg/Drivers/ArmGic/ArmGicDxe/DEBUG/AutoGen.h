/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_DE371F7C_DEC4_4D21_ADF1_593ABCC15882
#define _AUTOGENH_DE371F7C_DEC4_4D21_ADF1_593ABCC15882

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xDE371F7C, 0xDEC4, 0x4D21, {0xAD, 0xF1, 0x59, 0x3A, 0xBC, 0xC1, 0x58, 0x82}}

// Guids
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

// Protocols
extern EFI_GUID gHardwareInterruptProtocolGuid;
extern EFI_GUID gHardwareInterrupt2ProtocolGuid;
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

#define _PCD_TOKEN_PcdGicDistributorBase  25U
#define _PCD_SIZE_PcdGicDistributorBase 8
#define _PCD_GET_MODE_SIZE_PcdGicDistributorBase  _PCD_SIZE_PcdGicDistributorBase 
#define _PCD_VALUE_PcdGicDistributorBase  0x17a00000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdGicDistributorBase;
#define _PCD_GET_MODE_64_PcdGicDistributorBase  _gPcd_FixedAtBuild_PcdGicDistributorBase
//#define _PCD_SET_MODE_64_PcdGicDistributorBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdGicRedistributorsBase  27U
#define _PCD_SIZE_PcdGicRedistributorsBase 8
#define _PCD_GET_MODE_SIZE_PcdGicRedistributorsBase  _PCD_SIZE_PcdGicRedistributorsBase 
#define _PCD_VALUE_PcdGicRedistributorsBase  0x17a60000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdGicRedistributorsBase;
#define _PCD_GET_MODE_64_PcdGicRedistributorsBase  _gPcd_FixedAtBuild_PcdGicRedistributorsBase
//#define _PCD_SET_MODE_64_PcdGicRedistributorsBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdGicInterruptInterfaceBase  26U
#define _PCD_SIZE_PcdGicInterruptInterfaceBase 8
#define _PCD_GET_MODE_SIZE_PcdGicInterruptInterfaceBase  _PCD_SIZE_PcdGicInterruptInterfaceBase 
#define _PCD_VALUE_PcdGicInterruptInterfaceBase  0ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdGicInterruptInterfaceBase;
#define _PCD_GET_MODE_64_PcdGicInterruptInterfaceBase  _gPcd_FixedAtBuild_PcdGicInterruptInterfaceBase
//#define _PCD_SET_MODE_64_PcdGicInterruptInterfaceBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdArmGicV3WithV2Legacy  16U
#define _PCD_SIZE_PcdArmGicV3WithV2Legacy 1
#define _PCD_GET_MODE_SIZE_PcdArmGicV3WithV2Legacy  _PCD_SIZE_PcdArmGicV3WithV2Legacy 
#define _PCD_VALUE_PcdArmGicV3WithV2Legacy  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdArmGicV3WithV2Legacy;
#define _PCD_GET_MODE_BOOL_PcdArmGicV3WithV2Legacy  _gPcd_FixedAtBuild_PcdArmGicV3WithV2Legacy
//#define _PCD_SET_MODE_BOOL_PcdArmGicV3WithV2Legacy  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
InterruptDxeInitialize (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
