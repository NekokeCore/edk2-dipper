/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_7C04A583_9E3E_4f1c_AD65_E05268D0B4D1
#define _AUTOGENH_7C04A583_9E3E_4f1c_AD65_E05268D0B4D1

#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x7C04A583, 0x9E3E, 0x4f1c, {0xAD, 0x65, 0xE0, 0x52, 0x68, 0xD0, 0xB4, 0xD1}}

// Guids
extern EFI_GUID gShellVariableGuid;
extern EFI_GUID gShellAliasGuid;
extern EFI_GUID gEfiShellPkgTokenSpaceGuid;
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
extern EFI_GUID gEdkiiIfrBitVarstoreGuid;
extern EFI_GUID gEfiFileInfoGuid;
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;
extern EFI_GUID gEfiDxeServicesTableGuid;
extern EFI_GUID gEdkiiPerformanceMeasurementProtocolGuid;
extern EFI_GUID gEfiShellEnvironment2ExtGuid;
extern EFI_GUID gEfiStandardErrorDeviceGuid;
extern EFI_GUID gEfiConsoleInDeviceGuid;
extern EFI_GUID gEfiConsoleOutDeviceGuid;
extern EFI_GUID gEfiFileSystemInfoGuid;
extern EFI_GUID gEfiPartTypeSystemPartGuid;
extern EFI_GUID gEfiPartTypeLegacyMbrGuid;
extern EFI_GUID gHandleParsingHiiGuid;
extern EFI_GUID gEfiAdapterInfoMediaStateGuid;
extern EFI_GUID gEfiAdapterInfoNetworkBootGuid;
extern EFI_GUID gEfiAdapterInfoSanMacAddressGuid;
extern EFI_GUID gEfiAdapterInfoUndiIpv6SupportGuid;
extern EFI_GUID gEfiMemoryTypeInformationGuid;
extern EFI_GUID gEdkiiStatusCodeDataTypeVariableGuid;
extern EFI_GUID gEfiDiskInfoAhciInterfaceGuid;
extern EFI_GUID gEfiDiskInfoIdeInterfaceGuid;
extern EFI_GUID gEfiDiskInfoScsiInterfaceGuid;
extern EFI_GUID gEfiDiskInfoSdMmcInterfaceGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gShellBcfgHiiGuid;
extern EFI_GUID gEfiSmbiosTableGuid;
extern EFI_GUID gEfiSmbios3TableGuid;
extern EFI_GUID gShellLevel2HiiGuid;
extern EFI_GUID gShellLevel1HiiGuid;
extern EFI_GUID gShellLevel3HiiGuid;
extern EFI_GUID gShellDriver1HiiGuid;
extern EFI_GUID gEfiMpsTableGuid;
extern EFI_GUID gShellDebug1HiiGuid;
extern EFI_GUID gShellInstall1HiiGuid;
extern EFI_GUID gShellNetwork1HiiGuid;
extern EFI_GUID gShellAcpiViewHiiGuid;
extern EFI_GUID gEfiAcpiTableGuid;

// Protocols
extern EFI_GUID gEfiShellProtocolGuid;
extern EFI_GUID gEfiShellParametersProtocolGuid;
extern EFI_GUID gEfiSimpleTextInputExProtocolGuid;
extern EFI_GUID gEfiSimpleTextInProtocolGuid;
extern EFI_GUID gEfiSimpleTextOutProtocolGuid;
extern EFI_GUID gEfiSimpleFileSystemProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiComponentName2ProtocolGuid;
extern EFI_GUID gEfiUnicodeCollation2ProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiHiiPackageListProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiDebugPortProtocolGuid;
extern EFI_GUID gEfiDriverBindingProtocolGuid;
extern EFI_GUID gEfiGraphicsOutputProtocolGuid;
extern EFI_GUID gEfiHiiFontProtocolGuid;
extern EFI_GUID gEfiUgaDrawProtocolGuid;
extern EFI_GUID gEfiComponentNameProtocolGuid;
extern EFI_GUID gEfiDriverConfigurationProtocolGuid;
extern EFI_GUID gEfiDriverConfiguration2ProtocolGuid;
extern EFI_GUID gEfiDriverDiagnosticsProtocolGuid;
extern EFI_GUID gEfiDriverDiagnostics2ProtocolGuid;
extern EFI_GUID gEfiHiiStringProtocolGuid;
extern EFI_GUID gEfiHiiImageProtocolGuid;
extern EFI_GUID gEfiHiiDatabaseProtocolGuid;
extern EFI_GUID gEfiHiiConfigRoutingProtocolGuid;
extern EFI_GUID gEfiFormBrowser2ProtocolGuid;
extern EFI_GUID gEfiStatusCodeRuntimeProtocolGuid;
extern EFI_GUID gEfiFirmwareVolume2ProtocolGuid;
extern EFI_GUID gEfiLoadFileProtocolGuid;
extern EFI_GUID gEfiLoadFile2ProtocolGuid;
extern EFI_GUID gEfiShellEnvironment2Guid;
extern EFI_GUID gEfiShellInterfaceGuid;
extern EFI_GUID gEfiDevicePathToTextProtocolGuid;
extern EFI_GUID gEfiBusSpecificDriverOverrideProtocolGuid;
extern EFI_GUID gEfiDevicePathUtilitiesProtocolGuid;
extern EFI_GUID gEfiDevicePathFromTextProtocolGuid;
extern EFI_GUID gEfiPlatformDriverOverrideProtocolGuid;
extern EFI_GUID gEfiPlatformToDriverConfigurationProtocolGuid;
extern EFI_GUID gEfiDriverSupportedEfiVersionProtocolGuid;
extern EFI_GUID gEfiLoadedImageDevicePathProtocolGuid;
extern EFI_GUID gEfiSimplePointerProtocolGuid;
extern EFI_GUID gEfiAbsolutePointerProtocolGuid;
extern EFI_GUID gEfiSerialIoProtocolGuid;
extern EFI_GUID gEfiEdidDiscoveredProtocolGuid;
extern EFI_GUID gEfiEdidActiveProtocolGuid;
extern EFI_GUID gEfiEdidOverrideProtocolGuid;
extern EFI_GUID gEfiTapeIoProtocolGuid;
extern EFI_GUID gEfiDiskIoProtocolGuid;
extern EFI_GUID gEfiBlockIoProtocolGuid;
extern EFI_GUID gEfiUnicodeCollationProtocolGuid;
extern EFI_GUID gEfiPciRootBridgeIoProtocolGuid;
extern EFI_GUID gEfiPciIoProtocolGuid;
extern EFI_GUID gEfiScsiPassThruProtocolGuid;
extern EFI_GUID gEfiScsiIoProtocolGuid;
extern EFI_GUID gEfiExtScsiPassThruProtocolGuid;
extern EFI_GUID gEfiIScsiInitiatorNameProtocolGuid;
extern EFI_GUID gEfiUsbIoProtocolGuid;
extern EFI_GUID gEfiUsbHcProtocolGuid;
extern EFI_GUID gEfiUsb2HcProtocolGuid;
extern EFI_GUID gEfiDebugSupportProtocolGuid;
extern EFI_GUID gEfiDecompressProtocolGuid;
extern EFI_GUID gEfiAcpiTableProtocolGuid;
extern EFI_GUID gEfiEbcProtocolGuid;
extern EFI_GUID gEfiSimpleNetworkProtocolGuid;
extern EFI_GUID gEfiNetworkInterfaceIdentifierProtocolGuid;
extern EFI_GUID gEfiNetworkInterfaceIdentifierProtocolGuid_31;
extern EFI_GUID gEfiPxeBaseCodeProtocolGuid;
extern EFI_GUID gEfiPxeBaseCodeCallbackProtocolGuid;
extern EFI_GUID gEfiBisProtocolGuid;
extern EFI_GUID gEfiManagedNetworkServiceBindingProtocolGuid;
extern EFI_GUID gEfiManagedNetworkProtocolGuid;
extern EFI_GUID gEfiArpServiceBindingProtocolGuid;
extern EFI_GUID gEfiArpProtocolGuid;
extern EFI_GUID gEfiDhcp4ServiceBindingProtocolGuid;
extern EFI_GUID gEfiDhcp4ProtocolGuid;
extern EFI_GUID gEfiTcp4ServiceBindingProtocolGuid;
extern EFI_GUID gEfiTcp4ProtocolGuid;
extern EFI_GUID gEfiIp4ServiceBindingProtocolGuid;
extern EFI_GUID gEfiIp4ProtocolGuid;
extern EFI_GUID gEfiIp4ConfigProtocolGuid;
extern EFI_GUID gEfiIp4Config2ProtocolGuid;
extern EFI_GUID gEfiUdp4ServiceBindingProtocolGuid;
extern EFI_GUID gEfiUdp4ProtocolGuid;
extern EFI_GUID gEfiMtftp4ServiceBindingProtocolGuid;
extern EFI_GUID gEfiMtftp4ProtocolGuid;
extern EFI_GUID gEfiAuthenticationInfoProtocolGuid;
extern EFI_GUID gEfiHashServiceBindingProtocolGuid;
extern EFI_GUID gEfiHashProtocolGuid;
extern EFI_GUID gEfiHiiConfigAccessProtocolGuid;
extern EFI_GUID gEfiDeviceIoProtocolGuid;
extern EFI_GUID gEfiUgaIoProtocolGuid;
extern EFI_GUID gEfiIp6ServiceBindingProtocolGuid;
extern EFI_GUID gEfiIp6ProtocolGuid;
extern EFI_GUID gEfiIp6ConfigProtocolGuid;
extern EFI_GUID gEfiMtftp6ServiceBindingProtocolGuid;
extern EFI_GUID gEfiMtftp6ProtocolGuid;
extern EFI_GUID gEfiDhcp6ServiceBindingProtocolGuid;
extern EFI_GUID gEfiDhcp6ProtocolGuid;
extern EFI_GUID gEfiUdp6ServiceBindingProtocolGuid;
extern EFI_GUID gEfiUdp6ProtocolGuid;
extern EFI_GUID gEfiTcp6ServiceBindingProtocolGuid;
extern EFI_GUID gEfiTcp6ProtocolGuid;
extern EFI_GUID gEfiVlanConfigProtocolGuid;
extern EFI_GUID gEfiEapProtocolGuid;
extern EFI_GUID gEfiEapManagementProtocolGuid;
extern EFI_GUID gEfiFtp4ServiceBindingProtocolGuid;
extern EFI_GUID gEfiFtp4ProtocolGuid;
extern EFI_GUID gEfiIpSecConfigProtocolGuid;
extern EFI_GUID gEfiDriverHealthProtocolGuid;
extern EFI_GUID gEfiDeferredImageLoadProtocolGuid;
extern EFI_GUID gEfiUserCredentialProtocolGuid;
extern EFI_GUID gEfiUserManagerProtocolGuid;
extern EFI_GUID gEfiAtaPassThruProtocolGuid;
extern EFI_GUID gEfiFirmwareManagementProtocolGuid;
extern EFI_GUID gEfiIpSecProtocolGuid;
extern EFI_GUID gEfiIpSec2ProtocolGuid;
extern EFI_GUID gEfiKmsProtocolGuid;
extern EFI_GUID gEfiBlockIo2ProtocolGuid;
extern EFI_GUID gEfiStorageSecurityCommandProtocolGuid;
extern EFI_GUID gEfiUserCredential2ProtocolGuid;
extern EFI_GUID gEfiTcgProtocolGuid;
extern EFI_GUID gEfiDriverFamilyOverrideProtocolGuid;
extern EFI_GUID gEfiIdeControllerInitProtocolGuid;
extern EFI_GUID gEfiDiskIo2ProtocolGuid;
extern EFI_GUID gEfiAdapterInformationProtocolGuid;
extern EFI_GUID gEfiShellDynamicCommandProtocolGuid;
extern EFI_GUID gEfiDiskInfoProtocolGuid;
extern EFI_GUID gEfiBdsArchProtocolGuid;
extern EFI_GUID gEfiCpuArchProtocolGuid;
extern EFI_GUID gEfiMetronomeArchProtocolGuid;
extern EFI_GUID gEfiMonotonicCounterArchProtocolGuid;
extern EFI_GUID gEfiRealTimeClockArchProtocolGuid;
extern EFI_GUID gEfiResetArchProtocolGuid;
extern EFI_GUID gEfiRuntimeArchProtocolGuid;
extern EFI_GUID gEfiSecurityArchProtocolGuid;
extern EFI_GUID gEfiTimerArchProtocolGuid;
extern EFI_GUID gEfiVariableWriteArchProtocolGuid;
extern EFI_GUID gEfiVariableArchProtocolGuid;
extern EFI_GUID gEfiSecurityPolicyProtocolGuid;
extern EFI_GUID gEfiWatchdogTimerArchProtocolGuid;
extern EFI_GUID gEfiSmbusHcProtocolGuid;
extern EFI_GUID gEfiFirmwareVolumeBlockProtocolGuid;
extern EFI_GUID gEfiCapsuleArchProtocolGuid;
extern EFI_GUID gEfiMpServiceProtocolGuid;
extern EFI_GUID gEfiPciHostBridgeResourceAllocationProtocolGuid;
extern EFI_GUID gEfiPciPlatformProtocolGuid;
extern EFI_GUID gEfiPciOverrideProtocolGuid;
extern EFI_GUID gEfiPciEnumerationCompleteProtocolGuid;
extern EFI_GUID gEfiIncompatiblePciDeviceSupportProtocolGuid;
extern EFI_GUID gEfiPciHotPlugInitProtocolGuid;
extern EFI_GUID gEfiPciHotPlugRequestProtocolGuid;
extern EFI_GUID gEfiSmbiosProtocolGuid;
extern EFI_GUID gEfiS3SaveStateProtocolGuid;
extern EFI_GUID gEfiS3SmmSaveStateProtocolGuid;
extern EFI_GUID gEfiRscHandlerProtocolGuid;
extern EFI_GUID gEfiSmmRscHandlerProtocolGuid;
extern EFI_GUID gEfiAcpiSdtProtocolGuid;
extern EFI_GUID gEfiSioProtocolGuid;
extern EFI_GUID gEfiSmmCpuIo2ProtocolGuid;
extern EFI_GUID gEfiSmmBase2ProtocolGuid;
extern EFI_GUID gEfiSmmAccess2ProtocolGuid;
extern EFI_GUID gEfiSmmControl2ProtocolGuid;
extern EFI_GUID gEfiSmmConfigurationProtocolGuid;
extern EFI_GUID gEfiSmmReadyToLockProtocolGuid;
extern EFI_GUID gEfiDxeSmmReadyToLockProtocolGuid;
extern EFI_GUID gEfiSmmCommunicationProtocolGuid;
extern EFI_GUID gEfiSmmStatusCodeProtocolGuid;
extern EFI_GUID gEfiSmmCpuProtocolGuid;
extern EFI_GUID gEfiSmmPciRootBridgeIoProtocolGuid;
extern EFI_GUID gEfiSmmSwDispatch2ProtocolGuid;
extern EFI_GUID gEfiSmmSxDispatch2ProtocolGuid;
extern EFI_GUID gEfiSmmPeriodicTimerDispatch2ProtocolGuid;
extern EFI_GUID gEfiSmmUsbDispatch2ProtocolGuid;
extern EFI_GUID gEfiSmmGpiDispatch2ProtocolGuid;
extern EFI_GUID gEfiSmmStandbyButtonDispatch2ProtocolGuid;
extern EFI_GUID gEfiSmmPowerButtonDispatch2ProtocolGuid;
extern EFI_GUID gEfiSmmIoTrapDispatch2ProtocolGuid;
extern EFI_GUID gEfiFirmwareVolumeBlock2ProtocolGuid;
extern EFI_GUID gEfiCpuIo2ProtocolGuid;
extern EFI_GUID gEfiLegacyRegion2ProtocolGuid;
extern EFI_GUID gEfiSecurity2ArchProtocolGuid;
extern EFI_GUID gEfiSmmEndOfDxeProtocolGuid;
extern EFI_GUID gEfiIsaHcProtocolGuid;
extern EFI_GUID gEfiIsaHcServiceBindingProtocolGuid;
extern EFI_GUID gEfiSioControlProtocolGuid;
extern EFI_GUID gEfiI2cMasterProtocolGuid;
extern EFI_GUID gEfiI2cIoProtocolGuid;
extern EFI_GUID gEfiI2cEnumerateProtocolGuid;
extern EFI_GUID gEfiI2cHostProtocolGuid;
extern EFI_GUID gEfiI2cBusConfigurationManagementProtocolGuid;
extern EFI_GUID gEfiTcg2ProtocolGuid;
extern EFI_GUID gEfiTimestampProtocolGuid;
extern EFI_GUID gEfiRngProtocolGuid;
extern EFI_GUID gEfiNvmExpressPassThruProtocolGuid;
extern EFI_GUID gEfiHash2ServiceBindingProtocolGuid;
extern EFI_GUID gEfiHash2ProtocolGuid;
extern EFI_GUID gEfiBlockIoCryptoProtocolGuid;
extern EFI_GUID gEfiSmartCardReaderProtocolGuid;
extern EFI_GUID gEfiSmartCardEdgeProtocolGuid;
extern EFI_GUID gEfiUsbFunctionIoProtocolGuid;
extern EFI_GUID gEfiBluetoothHcProtocolGuid;
extern EFI_GUID gEfiBluetoothIoServiceBindingProtocolGuid;
extern EFI_GUID gEfiBluetoothIoProtocolGuid;
extern EFI_GUID gEfiBluetoothConfigProtocolGuid;
extern EFI_GUID gEfiRegularExpressionProtocolGuid;
extern EFI_GUID gEfiBootManagerPolicyProtocolGuid;
extern EFI_GUID gEfiConfigKeywordHandlerProtocolGuid;
extern EFI_GUID gEfiWiFiProtocolGuid;
extern EFI_GUID gEfiEapManagement2ProtocolGuid;
extern EFI_GUID gEfiEapConfigurationProtocolGuid;
extern EFI_GUID gEfiPkcs7VerifyProtocolGuid;
extern EFI_GUID gEfiDns4ServiceBindingProtocolGuid;
extern EFI_GUID gEfiDns4ProtocolGuid;
extern EFI_GUID gEfiDns6ServiceBindingProtocolGuid;
extern EFI_GUID gEfiDns6ProtocolGuid;
extern EFI_GUID gEfiHttpServiceBindingProtocolGuid;
extern EFI_GUID gEfiHttpProtocolGuid;
extern EFI_GUID gEfiHttpUtilitiesProtocolGuid;
extern EFI_GUID gEfiRestProtocolGuid;
extern EFI_GUID gEfiMmEndOfDxeProtocolGuid;
extern EFI_GUID gEfiMmIoTrapDispatchProtocolGuid;
extern EFI_GUID gEfiMmPowerButtonDispatchProtocolGuid;
extern EFI_GUID gEfiMmStandbyButtonDispatchProtocolGuid;
extern EFI_GUID gEfiMmGpiDispatchProtocolGuid;
extern EFI_GUID gEfiMmUsbDispatchProtocolGuid;
extern EFI_GUID gEfiMmPeriodicTimerDispatchProtocolGuid;
extern EFI_GUID gEfiMmSxDispatchProtocolGuid;
extern EFI_GUID gEfiMmSwDispatchProtocolGuid;
extern EFI_GUID gEfiMmPciRootBridgeIoProtocolGuid;
extern EFI_GUID gEfiMmCpuProtocolGuid;
extern EFI_GUID gEfiMmStatusCodeProtocolGuid;
extern EFI_GUID gEfiDxeMmReadyToLockProtocolGuid;
extern EFI_GUID gEfiMmConfigurationProtocolGuid;
extern EFI_GUID gEfiMmReadyToLockProtocolGuid;
extern EFI_GUID gEfiMmControlProtocolGuid;
extern EFI_GUID gEfiMmAccessProtocolGuid;
extern EFI_GUID gEfiMmBaseProtocolGuid;
extern EFI_GUID gEfiMmCpuIoProtocolGuid;
extern EFI_GUID gEfiMmRscHandlerProtocolGuid;
extern EFI_GUID gEfiMmCommunicationProtocolGuid;
extern EFI_GUID gEfiTlsServiceBindingProtocolGuid;
extern EFI_GUID gEfiTlsProtocolGuid;
extern EFI_GUID gEfiTlsConfigurationProtocolGuid;
extern EFI_GUID gEfiSupplicantServiceBindingProtocolGuid;
extern EFI_GUID gEfiSupplicantProtocolGuid;
extern EFI_GUID gEfiWiFi2ProtocolGuid;
extern EFI_GUID gEfiRamDiskProtocolGuid;
extern EFI_GUID gEfiHiiImageDecoderProtocolGuid;
extern EFI_GUID gEfiHiiImageExProtocolGuid;
extern EFI_GUID gEfiSdMmcPassThruProtocolGuid;
extern EFI_GUID gEfiEraseBlockProtocolGuid;
extern EFI_GUID gEfiBluetoothAttributeProtocolGuid;
extern EFI_GUID gEfiBluetoothAttributeServiceBindingProtocolGuid;
extern EFI_GUID gEfiBluetoothLeConfigProtocolGuid;
extern EFI_GUID gEfiUfsDeviceConfigProtocolGuid;
extern EFI_GUID gEfiHttpBootCallbackProtocolGuid;
extern EFI_GUID gEfiResetNotificationProtocolGuid;
extern EFI_GUID gEfiPartitionInfoProtocolGuid;
extern EFI_GUID gEfiHiiPopupProtocolGuid;
extern EFI_GUID gEfiBootLogoProtocolGuid;
extern EFI_GUID gEdkiiVariableLockProtocolGuid;
extern EFI_GUID gEdkiiPlatformBootManagerProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdShellSupportLevel  165U
#define _PCD_SIZE_PcdShellSupportLevel 1
#define _PCD_GET_MODE_SIZE_PcdShellSupportLevel  _PCD_SIZE_PcdShellSupportLevel 
#define _PCD_VALUE_PcdShellSupportLevel  3U
extern const  UINT8  _gPcd_FixedAtBuild_PcdShellSupportLevel;
#define _PCD_GET_MODE_8_PcdShellSupportLevel  _gPcd_FixedAtBuild_PcdShellSupportLevel
//#define _PCD_SET_MODE_8_PcdShellSupportLevel  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdShellSupportOldProtocols  166U
#define _PCD_SIZE_PcdShellSupportOldProtocols 1
#define _PCD_GET_MODE_SIZE_PcdShellSupportOldProtocols  _PCD_SIZE_PcdShellSupportOldProtocols 
#define _PCD_VALUE_PcdShellSupportOldProtocols  0U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdShellSupportOldProtocols;
#define _PCD_GET_MODE_BOOL_PcdShellSupportOldProtocols  _gPcd_FixedAtBuild_PcdShellSupportOldProtocols
//#define _PCD_SET_MODE_BOOL_PcdShellSupportOldProtocols  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdShellRequireHiiPlatform  161U
#define _PCD_SIZE_PcdShellRequireHiiPlatform 1
#define _PCD_GET_MODE_SIZE_PcdShellRequireHiiPlatform  _PCD_SIZE_PcdShellRequireHiiPlatform 
#define _PCD_VALUE_PcdShellRequireHiiPlatform  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdShellRequireHiiPlatform;
#define _PCD_GET_MODE_BOOL_PcdShellRequireHiiPlatform  _gPcd_FixedAtBuild_PcdShellRequireHiiPlatform
//#define _PCD_SET_MODE_BOOL_PcdShellRequireHiiPlatform  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdShellSupportFrameworkHii  164U
#define _PCD_SIZE_PcdShellSupportFrameworkHii 1
#define _PCD_GET_MODE_SIZE_PcdShellSupportFrameworkHii  _PCD_SIZE_PcdShellSupportFrameworkHii 
#define _PCD_VALUE_PcdShellSupportFrameworkHii  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdShellSupportFrameworkHii;
#define _PCD_GET_MODE_BOOL_PcdShellSupportFrameworkHii  _gPcd_FixedAtBuild_PcdShellSupportFrameworkHii
//#define _PCD_SET_MODE_BOOL_PcdShellSupportFrameworkHii  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdShellPageBreakDefault  158U
#define _PCD_SIZE_PcdShellPageBreakDefault 1
#define _PCD_GET_MODE_SIZE_PcdShellPageBreakDefault  _PCD_SIZE_PcdShellPageBreakDefault 
#define _PCD_VALUE_PcdShellPageBreakDefault  0U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdShellPageBreakDefault;
#define _PCD_GET_MODE_BOOL_PcdShellPageBreakDefault  _gPcd_FixedAtBuild_PcdShellPageBreakDefault
//#define _PCD_SET_MODE_BOOL_PcdShellPageBreakDefault  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdShellInsertModeDefault  154U
#define _PCD_SIZE_PcdShellInsertModeDefault 1
#define _PCD_GET_MODE_SIZE_PcdShellInsertModeDefault  _PCD_SIZE_PcdShellInsertModeDefault 
#define _PCD_VALUE_PcdShellInsertModeDefault  1U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdShellInsertModeDefault;
#define _PCD_GET_MODE_BOOL_PcdShellInsertModeDefault  _gPcd_FixedAtBuild_PcdShellInsertModeDefault
//#define _PCD_SET_MODE_BOOL_PcdShellInsertModeDefault  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdShellScreenLogCount  162U
#define _PCD_SIZE_PcdShellScreenLogCount 1
#define _PCD_GET_MODE_SIZE_PcdShellScreenLogCount  _PCD_SIZE_PcdShellScreenLogCount 
#define _PCD_VALUE_PcdShellScreenLogCount  3U
extern const  UINT8  _gPcd_FixedAtBuild_PcdShellScreenLogCount;
#define _PCD_GET_MODE_8_PcdShellScreenLogCount  _gPcd_FixedAtBuild_PcdShellScreenLogCount
//#define _PCD_SET_MODE_8_PcdShellScreenLogCount  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdShellPrintBufferSize  159U
#define _PCD_SIZE_PcdShellPrintBufferSize 2
#define _PCD_GET_MODE_SIZE_PcdShellPrintBufferSize  _PCD_SIZE_PcdShellPrintBufferSize 
#define _PCD_VALUE_PcdShellPrintBufferSize  16000U
extern const  UINT16  _gPcd_FixedAtBuild_PcdShellPrintBufferSize;
#define _PCD_GET_MODE_16_PcdShellPrintBufferSize  _gPcd_FixedAtBuild_PcdShellPrintBufferSize
//#define _PCD_SET_MODE_16_PcdShellPrintBufferSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdShellForceConsole  152U
#define _PCD_SIZE_PcdShellForceConsole 1
#define _PCD_GET_MODE_SIZE_PcdShellForceConsole  _PCD_SIZE_PcdShellForceConsole 
#define _PCD_VALUE_PcdShellForceConsole  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdShellForceConsole;
#define _PCD_GET_MODE_BOOL_PcdShellForceConsole  _gPcd_FixedAtBuild_PcdShellForceConsole
//#define _PCD_SET_MODE_BOOL_PcdShellForceConsole  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdShellSupplier  163U
#define _PCD_VALUE_PcdShellSupplier  _gPcd_FixedAtBuild_PcdShellSupplier
extern const UINT16 _gPcd_FixedAtBuild_PcdShellSupplier[7];
#define _PCD_GET_MODE_PTR_PcdShellSupplier  _gPcd_FixedAtBuild_PcdShellSupplier
#define _PCD_SIZE_PcdShellSupplier 14
#define _PCD_GET_MODE_SIZE_PcdShellSupplier  _PCD_SIZE_PcdShellSupplier 
//#define _PCD_SET_MODE_PTR_PcdShellSupplier  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdShellMaxHistoryCommandCount  157U
#define _PCD_SIZE_PcdShellMaxHistoryCommandCount 2
#define _PCD_GET_MODE_SIZE_PcdShellMaxHistoryCommandCount  _PCD_SIZE_PcdShellMaxHistoryCommandCount 
#define _PCD_VALUE_PcdShellMaxHistoryCommandCount  0x0020U
extern const  UINT16  _gPcd_FixedAtBuild_PcdShellMaxHistoryCommandCount;
#define _PCD_GET_MODE_16_PcdShellMaxHistoryCommandCount  _gPcd_FixedAtBuild_PcdShellMaxHistoryCommandCount
//#define _PCD_SET_MODE_16_PcdShellMaxHistoryCommandCount  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
UefiMain (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );



#include "ShellStrDefs.h"


#ifdef __cplusplus
}
#endif

#endif
