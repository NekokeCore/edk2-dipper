/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.c
  Abstract:       Auto-generated AutoGen.c for building module or library.
**/
#include <PiDxe.h>
#include <Library/DebugLib.h>
#include <Library/DxeCoreEntryPoint.h>

GLOBAL_REMOVE_IF_UNREFERENCED GUID gEfiCallerIdGuid = {0xD6A2CB7F, 0x6A18, 0x4e2f, {0xB4, 0x3B, 0x99, 0x20, 0xA7, 0x33, 0x70, 0x0A}};

GLOBAL_REMOVE_IF_UNREFERENCED CHAR8 *gEfiCallerBaseName = "DxeCore";

// Guids
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiEventMemoryMapChangeGuid = { 0x78BEE926, 0x692F, 0x48FD, { 0x9E, 0xDB, 0x01, 0x42, 0x2E, 0xF0, 0xD7, 0xAB }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiEventVirtualAddressChangeGuid = { 0x13FA7698, 0xC831, 0x49C7, { 0x87, 0xEA, 0x8F, 0x43, 0xFC, 0xC2, 0x51, 0x96 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiEventExitBootServicesGuid = { 0x27ABF055, 0xB1B8, 0x4C26, { 0x80, 0x48, 0x74, 0x8F, 0x37, 0xBA, 0xA2, 0xDF }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHobMemoryAllocModuleGuid = { 0xF8E21975, 0x0899, 0x4F58, { 0xA4, 0xBE, 0x55, 0x25, 0xA9, 0xC6, 0xD7, 0x7A }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiFirmwareFileSystem2Guid = { 0x8c8ce578, 0x8a3d, 0x4f1c, { 0x99, 0x35, 0x89, 0x61, 0x85, 0xc3, 0x2d, 0xd3 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiFirmwareFileSystem3Guid = { 0x5473c07a, 0x3dcb, 0x4dca, { 0xbd, 0x6f, 0x1e, 0x96, 0x89, 0xe7, 0x34, 0x9a }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gAprioriGuid = { 0xFC510EE7, 0xFFDC, 0x11D4, { 0xBD, 0x41, 0x00, 0x80, 0xC7, 0x3C, 0x88, 0x81 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDebugImageInfoTableGuid = { 0x49152E77, 0x1ADA, 0x4764, { 0xB7, 0xA2, 0x7A, 0xFE, 0xFE, 0xD9, 0x5E, 0x8B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHobListGuid = { 0x7739F24C, 0x93D7, 0x11D4, { 0x9A, 0x3A, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDxeServicesTableGuid = { 0x05AD34BA, 0x6F02, 0x4214, { 0x95, 0x2E, 0x4D, 0xA0, 0x39, 0x8E, 0x2B, 0xB9 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMemoryTypeInformationGuid = { 0x4C19049F, 0x4137, 0x4DD3, { 0x9C, 0x10, 0x8B, 0x97, 0xA8, 0x3F, 0xFD, 0xFA }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiEventDxeDispatchGuid = { 0x7081E22F, 0xCAC6, 0x4053, { 0x94, 0x68, 0x67, 0x57, 0x82, 0xCF, 0x88, 0xE5 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gLoadFixedAddressConfigurationTableGuid = { 0x2CA88B53,0xD296,0x4080, { 0xA4,0xA5,0xCA,0xD9,0xBA,0xE2,0x4B,0x9 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gIdleLoopEventGuid = { 0x3c8d294c, 0x5fc3, 0x4451, { 0xbb, 0x31, 0xc4, 0xc0, 0x32, 0x29, 0x5e, 0x6c } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEventExitBootServicesFailedGuid = { 0x4f6c5507, 0x232f, 0x4787, { 0xb9, 0x5e, 0x72, 0xf8, 0x62, 0x49, 0xc, 0xb1 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiVectorHandoffTableGuid = { 0x996ec11c, 0x5397, 0x4e73, { 0xb5, 0x8f, 0x82, 0x7e, 0x52, 0x90, 0x6d, 0xef }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEdkiiMemoryProfileGuid = { 0x821c9a09, 0x541a, 0x40f6, { 0x9f, 0x43, 0xa, 0xd1, 0x93, 0xa1, 0x2c, 0xfe }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMemoryAttributesTableGuid = { 0xdcfa911d, 0x26eb, 0x469f, {0xa2, 0x20, 0x38, 0xb7, 0xdc, 0x46, 0x12, 0x20}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiEndOfDxeEventGroupGuid = { 0x2ce967a, 0xdd7e, 0x4ffc, { 0x9e, 0xe7, 0x81, 0xc, 0xf0, 0x47, 0x8, 0x80 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHobMemoryAllocStackGuid = { 0x4ED4BF27, 0x4092, 0x42E9, { 0x80, 0x7D, 0x52, 0x7B, 0x1D, 0x00, 0xC9, 0xBD }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMdeModulePkgTokenSpaceGuid = { 0xA1AFF049, 0xFDEB, 0x442a, { 0xB3, 0x20, 0x13, 0xAB, 0x4C, 0xB7, 0x2B, 0xBC }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMdePkgTokenSpaceGuid = { 0x914AEBE7, 0x4635, 0x459b, { 0xAA, 0x1C, 0x11, 0xE2, 0x19, 0xB0, 0x3A, 0x10 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gXiaomiMI8PkgTokenSpaceGuid = { 0x99a14446, 0xaad7, 0xe460, {0xb4, 0xe5, 0x1f, 0x79, 0xaa, 0xa4, 0x93, 0xfd } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiVTUTF8Guid = { 0xAD15A0D6, 0x8BEC, 0x4ACF, { 0xA0, 0x73, 0xD0, 0x1D, 0xE7, 0x7E, 0x2D, 0x88 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiVT100Guid = { 0xDFA66065, 0xB419, 0x11D3, { 0x9A, 0x2D, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiVT100PlusGuid = { 0x7BAEC70B, 0x57E0, 0x4C76, { 0x8E, 0x87, 0x2F, 0x9E, 0x28, 0x08, 0x83, 0x43 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPcAnsiGuid = { 0xE0C14753, 0xF9BE, 0x11D2, { 0x9A, 0x0C, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiUartDevicePathGuid = { 0x37499a9d, 0x542f, 0x4c89, { 0xa0, 0x26, 0x35, 0xda, 0x14, 0x20, 0x94, 0xe4 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiSasDevicePathGuid = { 0xd487ddb4, 0x008b, 0x11d9, { 0xaf, 0xdc, 0x00, 0x10, 0x83, 0xff, 0xca, 0x4d }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiVirtualDiskGuid = { 0x77AB535A, 0x45FC, 0x624B, {0x55, 0x60, 0xF7, 0xB2, 0x81, 0xD1, 0xF9, 0x6E }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiVirtualCdGuid = { 0x3D5ABD30, 0x4175, 0x87CE, {0x6D, 0x64, 0xD2, 0xAD, 0xE5, 0x23, 0xC4, 0xBB }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPersistentVirtualDiskGuid = { 0x5CEA02C9, 0x4D07, 0x69D3, {0x26, 0x9F ,0x44, 0x96, 0xFB, 0xE0, 0x96, 0xF9 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPersistentVirtualCdGuid = { 0x08018188, 0x42CD, 0xBB48, {0x10, 0x0F, 0x53, 0x87, 0xD5, 0x3D, 0xED, 0x3D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiEventReadyToBootGuid = { 0x7CE88FB3, 0x4BD7, 0x4679, { 0x87, 0xA8, 0xA8, 0xD8, 0xDE, 0xE5, 0x0D, 0x2B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiEventLegacyBootGuid = { 0x2A571201, 0x4966, 0x47F6, { 0x8B, 0x86, 0xF3, 0x1E, 0x41, 0xF3, 0x2F, 0x10 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiGlobalVariableGuid = { 0x8BE4DF61, 0x93CA, 0x11D2, { 0xAA, 0x0D, 0x00, 0xE0, 0x98, 0x03, 0x2B, 0x8C }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiAcpi20TableGuid = { 0x8868E871, 0xE4F1, 0x11D3, { 0xBC, 0x22, 0x00, 0x80, 0xC7, 0x3C, 0x88, 0x81 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiAcpi10TableGuid = { 0xEB9D2D30, 0x2D88, 0x11D3, { 0x9A, 0x16, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gArmTokenSpaceGuid = { 0xBB11ECFE, 0x820F, 0x4968, { 0xBB, 0xA6, 0xF7, 0x6A, 0xFE, 0x30, 0x25, 0x96 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiFileInfoGuid = { 0x09576E92, 0x6D3F, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiStatusCodeSpecificDataGuid = { 0x335984BD, 0xE805, 0x409A, { 0xB8, 0xF8, 0xD2, 0x7E, 0xCE, 0x5F, 0xF7, 0xA6 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiStatusCodeDataTypeDebugGuid = { 0x9A4E9246, 0xD553, 0x11D5, { 0x87, 0xE2, 0x00, 0x06, 0x29, 0x45, 0xC3, 0xB9 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPerformanceProtocolGuid = { 0x76B6BDFA, 0x2ACD, 0x4462, { 0x9E, 0x3F, 0xCB, 0x58, 0xC9, 0x69, 0xD9, 0x37 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gZeroGuid = { 0x0, 0x0, 0x0, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiFirmwarePerformanceGuid = { 0xc095791a, 0x3001, 0x47b2, { 0x80, 0xc9, 0xea, 0xc7, 0x31, 0x9f, 0x2f, 0xa4 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEdkiiFpdtExtendedFirmwarePerformanceGuid = { 0x3b387bfd, 0x7abc, 0x4cf2, { 0xa0, 0xca, 0xb6, 0xa1, 0x6c, 0x1b, 0x1b, 0x25 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEdkiiPiSmmCommunicationRegionTableGuid = { 0x4e28ca50, 0xd582, 0x44ac, {0xa1, 0x1f, 0xe3, 0xd5, 0x65, 0x26, 0xdb, 0x34}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEdkiiPerformanceMeasurementProtocolGuid = { 0xc85d06be, 0x5f75, 0x48ce, { 0xa8, 0x0f, 0x12, 0x36, 0xba, 0x3b, 0x87, 0xb1 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiCrc32GuidedSectionExtractionGuid = { 0xFC1BCDB0, 0x7D31, 0x49aa, {0x93, 0x6A, 0xA4, 0x60, 0x0D, 0x9D, 0xD0, 0x83 } };

// Protocols
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDecompressProtocolGuid = { 0xD8117CFE, 0x94A6, 0x11D4, { 0x9A, 0x3A, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiSimpleFileSystemProtocolGuid = { 0x964E5B22, 0x6459, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiLoadFileProtocolGuid = { 0x56EC3091, 0x954C, 0x11D2, { 0x8E, 0x3F, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiLoadFile2ProtocolGuid = { 0x4006c0c1, 0xfcb3, 0x403e, {0x99, 0x6d, 0x4a, 0x6c, 0x87, 0x24, 0xe0, 0x6d }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiBusSpecificDriverOverrideProtocolGuid = { 0x3BC1B285, 0x8A15, 0x4A82, { 0xAA, 0xBF, 0x4D, 0x7D, 0x13, 0xFB, 0x32, 0x65 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDriverFamilyOverrideProtocolGuid = { 0xb1ee129e, 0xda36, 0x4181, { 0x91, 0xf8, 0x4, 0xa4, 0x92, 0x37, 0x66, 0xa7 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPlatformDriverOverrideProtocolGuid = { 0x6b30c738, 0xa391, 0x11d4, {0x9a, 0x3b, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDriverBindingProtocolGuid = { 0x18A031AB, 0xB443, 0x4D1A, { 0xA5, 0xC0, 0x0C, 0x09, 0x26, 0x1E, 0x9F, 0x71 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiFirmwareVolumeBlockProtocolGuid = { 0x8f644fa9, 0xe850, 0x4db1, {0x9c, 0xe2, 0xb, 0x44, 0x69, 0x8e, 0x8d, 0xa4 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiFirmwareVolume2ProtocolGuid = { 0x220e73b6, 0x6bdb, 0x4413, { 0x84, 0x5, 0xb9, 0x74, 0xb1, 0x8, 0x61, 0x9a } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDevicePathProtocolGuid = { 0x09576E91, 0x6D3F, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiLoadedImageProtocolGuid = { 0x5B1B31A1, 0x9562, 0x11D2, { 0x8E, 0x3F, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiLoadedImageDevicePathProtocolGuid = { 0xbc62157e, 0x3e33, 0x4fec, {0x99, 0x20, 0x2d, 0x3b, 0x36, 0xd7, 0x50, 0xdf }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHiiPackageListProtocolGuid = { 0x6a1ee763, 0xd47a, 0x43b4, {0xaa, 0xbe, 0xef, 0x1d, 0xe2, 0xab, 0x56, 0xfc}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiSmmBase2ProtocolGuid = { 0xf4ccbfb7, 0xf6e0, 0x47fd, { 0x9d, 0xd4, 0x10, 0xa8, 0xf1, 0x50, 0xc1, 0x91 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEdkiiPeCoffImageEmulatorProtocolGuid = { 0x96f46153, 0x97a7, 0x4793, { 0xac, 0xc1, 0xfa, 0x19, 0xbf, 0x78, 0xea, 0x97 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiBdsArchProtocolGuid = { 0x665E3FF6, 0x46CC, 0x11D4, { 0x9A, 0x38, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiCpuArchProtocolGuid = { 0x26BACCB1, 0x6F42, 0x11D4, { 0xBC, 0xE7, 0x00, 0x80, 0xC7, 0x3C, 0x88, 0x81 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMetronomeArchProtocolGuid = { 0x26BACCB2, 0x6F42, 0x11D4, { 0xBC, 0xE7, 0x00, 0x80, 0xC7, 0x3C, 0x88, 0x81 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMonotonicCounterArchProtocolGuid = { 0x1DA97072, 0xBDDC, 0x4B30, { 0x99, 0xF1, 0x72, 0xA0, 0xB5, 0x6F, 0xFF, 0x2A }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiRealTimeClockArchProtocolGuid = { 0x27CFAC87, 0x46CC, 0x11D4, { 0x9A, 0x38, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiResetArchProtocolGuid = { 0x27CFAC88, 0x46CC, 0x11D4, { 0x9A, 0x38, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiRuntimeArchProtocolGuid = { 0xb7dfb4e1, 0x052f, 0x449f, { 0x87, 0xbe, 0x98, 0x18, 0xfc, 0x91, 0xb7, 0x33 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiSecurityArchProtocolGuid = { 0xA46423E3, 0x4617, 0x49F1, { 0xB9, 0xFF, 0xD1, 0xBF, 0xA9, 0x11, 0x58, 0x39 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiSecurity2ArchProtocolGuid = { 0x94ab2f58, 0x1438, 0x4ef1, {0x91, 0x52, 0x18, 0x94, 0x1a, 0x3a, 0x0e, 0x68 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiTimerArchProtocolGuid = { 0x26BACCB3, 0x6F42, 0x11D4, { 0xBC, 0xE7, 0x00, 0x80, 0xC7, 0x3C, 0x88, 0x81 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiVariableWriteArchProtocolGuid = { 0x6441F818, 0x6362, 0x4E44, { 0xB5, 0x70, 0x7D, 0xBA, 0x31, 0xDD, 0x24, 0x53 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiVariableArchProtocolGuid = { 0x1E5668E2, 0x8481, 0x11D4, { 0xBC, 0xF1, 0x00, 0x80, 0xC7, 0x3C, 0x88, 0x81 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiCapsuleArchProtocolGuid = { 0x5053697E, 0x2CBC, 0x4819, { 0x90, 0xD9, 0x05, 0x80, 0xDE, 0xEE, 0x57, 0x54 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiWatchdogTimerArchProtocolGuid = { 0x665E3FF5, 0x46CC, 0x11D4, { 0x9A, 0x38, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDebugPortProtocolGuid = { 0xEBA4E8D2, 0x3858, 0x41EC, { 0xA2, 0x81, 0x26, 0x47, 0xBA, 0x96, 0x60, 0xD0 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiSimpleTextOutProtocolGuid = { 0x387477C2, 0x69C7, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiGraphicsOutputProtocolGuid = { 0x9042A9DE, 0x23DC, 0x4A38, { 0x96, 0xFB, 0x7A, 0xDE, 0xD0, 0x80, 0x51, 0x6A }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHiiFontProtocolGuid = {0xe9ca4775, 0x8657, 0x47fc, {0x97, 0xe7, 0x7e, 0xd6, 0x5a, 0x08, 0x43, 0x24}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiUgaDrawProtocolGuid = { 0x982C298B, 0xF4FA, 0x41CB, { 0xB8, 0x38, 0x77, 0xAA, 0x68, 0x8F, 0xB8, 0x39 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiComponentNameProtocolGuid = { 0x107A772C, 0xD5E1, 0x11D4, { 0x9A, 0x46, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiComponentName2ProtocolGuid = { 0x6A7A5CFF, 0xE8D9, 0x4F70, { 0xBA, 0xDA, 0x75, 0xAB, 0x30, 0x25, 0xCE, 0x14 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDriverConfigurationProtocolGuid = { 0x107A772B, 0xD5E1, 0x11D4, { 0x9A, 0x46, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDriverConfiguration2ProtocolGuid = { 0xBFD7DC1D, 0x24F1, 0x40D9, { 0x82, 0xE7, 0x2E, 0x09, 0xBB, 0x6B, 0x4E, 0xBE }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDriverDiagnosticsProtocolGuid = { 0x0784924F, 0xE296, 0x11D4, { 0x9A, 0x49, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDriverDiagnostics2ProtocolGuid = { 0x4D330321, 0x025F, 0x4AAC, { 0x90, 0xD8, 0x5E, 0xD9, 0x00, 0x17, 0x3B, 0x63 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiStatusCodeRuntimeProtocolGuid = { 0xD2B2B828, 0x0826, 0x48A7, { 0xB3, 0xDF, 0x98, 0x3C, 0x00, 0x60, 0x24, 0xF0 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiSmmCommunicationProtocolGuid = { 0xc68ed8e2, 0x9dc6, 0x4cbd, { 0x9d, 0x94, 0xdb, 0x65, 0xac, 0xc5, 0xc3, 0x32 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiSecurityPolicyProtocolGuid = { 0x78E4D245, 0xCD4D, 0x4A05, { 0xA2, 0xBA, 0x47, 0x43, 0xE8, 0x6C, 0xFC, 0xAB }};

// PPIs
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiVectorHandoffInfoPpiGuid = { 0x3cd652b4, 0x6d33, 0x4dce, { 0x89, 0xdb, 0x83, 0xdf, 0x97, 0x66, 0xfc, 0xca }};

// Definition of SkuId Array
GLOBAL_REMOVE_IF_UNREFERENCED UINT64 _gPcd_SkuId_Array[] = {0x0};

// Definition of PCDs used in this module
volatile  UINT32 _gPcd_BinaryPatch_PcdLoadFixAddressBootTimeCodePageNumber = _PCD_PATCHABLE_VALUE_PcdLoadFixAddressBootTimeCodePageNumber;
GLOBAL_REMOVE_IF_UNREFERENCED UINTN _gPcd_BinaryPatch_Size_PcdLoadFixAddressBootTimeCodePageNumber = 4;
volatile  UINT32 _gPcd_BinaryPatch_PcdLoadFixAddressRuntimeCodePageNumber = _PCD_PATCHABLE_VALUE_PcdLoadFixAddressRuntimeCodePageNumber;
GLOBAL_REMOVE_IF_UNREFERENCED UINTN _gPcd_BinaryPatch_Size_PcdLoadFixAddressRuntimeCodePageNumber = 4;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT64 _gPcd_FixedAtBuild_PcdLoadModuleAtFixAddressEnable = _PCD_VALUE_PcdLoadModuleAtFixAddressEnable;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT64 _gPcd_FixedAtBuild_PcdMaxEfiSystemTablePointerAddress = _PCD_VALUE_PcdMaxEfiSystemTablePointerAddress;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT64 _gPcd_FixedAtBuild_PcdMemoryProfileMemoryType = _PCD_VALUE_PcdMemoryProfileMemoryType;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdMemoryProfilePropertyMask = _PCD_VALUE_PcdMemoryProfilePropertyMask;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdMemoryProfileDriverPath[1] = {0x0};
GLOBAL_REMOVE_IF_UNREFERENCED const UINTN _gPcd_FixedAtBuild_Size_PcdMemoryProfileDriverPath = 1;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdImageProtectionPolicy = _PCD_VALUE_PcdImageProtectionPolicy;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT64 _gPcd_FixedAtBuild_PcdDxeNxMemoryProtectionPolicy = _PCD_VALUE_PcdDxeNxMemoryProtectionPolicy;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdNullPointerDetectionPropertyMask = _PCD_VALUE_PcdNullPointerDetectionPropertyMask;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT64 _gPcd_FixedAtBuild_PcdHeapGuardPageType = _PCD_VALUE_PcdHeapGuardPageType;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT64 _gPcd_FixedAtBuild_PcdHeapGuardPoolType = _PCD_VALUE_PcdHeapGuardPoolType;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdHeapGuardPropertyMask = _PCD_VALUE_PcdHeapGuardPropertyMask;
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdCpuStackGuard = _PCD_VALUE_PcdCpuStackGuard;

// Definition of PCDs used in libraries

#define _PCD_TOKEN_PcdVerifyNodeInList  149U
#define _PCD_SIZE_PcdVerifyNodeInList 1
#define _PCD_GET_MODE_SIZE_PcdVerifyNodeInList  _PCD_SIZE_PcdVerifyNodeInList 
#define _PCD_VALUE_PcdVerifyNodeInList  ((BOOLEAN)0U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdVerifyNodeInList = _PCD_VALUE_PcdVerifyNodeInList;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdVerifyNodeInList;
#define _PCD_GET_MODE_BOOL_PcdVerifyNodeInList  _gPcd_FixedAtBuild_PcdVerifyNodeInList
//#define _PCD_SET_MODE_BOOL_PcdVerifyNodeInList  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumLinkedListLength  130U
#define _PCD_SIZE_PcdMaximumLinkedListLength 4
#define _PCD_GET_MODE_SIZE_PcdMaximumLinkedListLength  _PCD_SIZE_PcdMaximumLinkedListLength 
#define _PCD_VALUE_PcdMaximumLinkedListLength  1000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumLinkedListLength = _PCD_VALUE_PcdMaximumLinkedListLength;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumLinkedListLength;
#define _PCD_GET_MODE_32_PcdMaximumLinkedListLength  _gPcd_FixedAtBuild_PcdMaximumLinkedListLength
//#define _PCD_SET_MODE_32_PcdMaximumLinkedListLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumAsciiStringLength  127U
#define _PCD_SIZE_PcdMaximumAsciiStringLength 4
#define _PCD_GET_MODE_SIZE_PcdMaximumAsciiStringLength  _PCD_SIZE_PcdMaximumAsciiStringLength 
#define _PCD_VALUE_PcdMaximumAsciiStringLength  1000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength = _PCD_VALUE_PcdMaximumAsciiStringLength;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength;
#define _PCD_GET_MODE_32_PcdMaximumAsciiStringLength  _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength
//#define _PCD_SET_MODE_32_PcdMaximumAsciiStringLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumUnicodeStringLength  131U
#define _PCD_SIZE_PcdMaximumUnicodeStringLength 4
#define _PCD_GET_MODE_SIZE_PcdMaximumUnicodeStringLength  _PCD_SIZE_PcdMaximumUnicodeStringLength 
#define _PCD_VALUE_PcdMaximumUnicodeStringLength  1000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength = _PCD_VALUE_PcdMaximumUnicodeStringLength;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength;
#define _PCD_GET_MODE_32_PcdMaximumUnicodeStringLength  _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength
//#define _PCD_SET_MODE_32_PcdMaximumUnicodeStringLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdControlFlowEnforcementPropertyMask  118U
#define _PCD_SIZE_PcdControlFlowEnforcementPropertyMask 4
#define _PCD_GET_MODE_SIZE_PcdControlFlowEnforcementPropertyMask  _PCD_SIZE_PcdControlFlowEnforcementPropertyMask 
#define _PCD_VALUE_PcdControlFlowEnforcementPropertyMask  0x0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdControlFlowEnforcementPropertyMask = _PCD_VALUE_PcdControlFlowEnforcementPropertyMask;
extern const  UINT32  _gPcd_FixedAtBuild_PcdControlFlowEnforcementPropertyMask;
#define _PCD_GET_MODE_32_PcdControlFlowEnforcementPropertyMask  _gPcd_FixedAtBuild_PcdControlFlowEnforcementPropertyMask
//#define _PCD_SET_MODE_32_PcdControlFlowEnforcementPropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSpeculationBarrierType  134U
#define _PCD_SIZE_PcdSpeculationBarrierType 1
#define _PCD_GET_MODE_SIZE_PcdSpeculationBarrierType  _PCD_SIZE_PcdSpeculationBarrierType 
#define _PCD_VALUE_PcdSpeculationBarrierType  0x01U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdSpeculationBarrierType = _PCD_VALUE_PcdSpeculationBarrierType;
extern const  UINT8  _gPcd_FixedAtBuild_PcdSpeculationBarrierType;
#define _PCD_GET_MODE_8_PcdSpeculationBarrierType  _gPcd_FixedAtBuild_PcdSpeculationBarrierType
//#define _PCD_SET_MODE_8_PcdSpeculationBarrierType  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDebugPrintErrorLevel  120U
#define _PCD_SIZE_PcdDebugPrintErrorLevel 4
#define _PCD_GET_MODE_SIZE_PcdDebugPrintErrorLevel  _PCD_SIZE_PcdDebugPrintErrorLevel 
#define _PCD_VALUE_PcdDebugPrintErrorLevel  0x80000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel = _PCD_VALUE_PcdDebugPrintErrorLevel;
extern const  UINT32  _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel;
#define _PCD_GET_MODE_32_PcdDebugPrintErrorLevel  _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel
//#define _PCD_SET_MODE_32_PcdDebugPrintErrorLevel  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMipiFrameBufferAddress  185U
#define _PCD_SIZE_PcdMipiFrameBufferAddress 4
#define _PCD_GET_MODE_SIZE_PcdMipiFrameBufferAddress  _PCD_SIZE_PcdMipiFrameBufferAddress 
#define _PCD_VALUE_PcdMipiFrameBufferAddress  0x9d400000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMipiFrameBufferAddress = _PCD_VALUE_PcdMipiFrameBufferAddress;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMipiFrameBufferAddress;
#define _PCD_GET_MODE_32_PcdMipiFrameBufferAddress  _gPcd_FixedAtBuild_PcdMipiFrameBufferAddress
//#define _PCD_SET_MODE_32_PcdMipiFrameBufferAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMipiFrameBufferWidth  190U
#define _PCD_SIZE_PcdMipiFrameBufferWidth 4
#define _PCD_GET_MODE_SIZE_PcdMipiFrameBufferWidth  _PCD_SIZE_PcdMipiFrameBufferWidth 
#define _PCD_VALUE_PcdMipiFrameBufferWidth  1080U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMipiFrameBufferWidth = _PCD_VALUE_PcdMipiFrameBufferWidth;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMipiFrameBufferWidth;
#define _PCD_GET_MODE_32_PcdMipiFrameBufferWidth  _gPcd_FixedAtBuild_PcdMipiFrameBufferWidth
//#define _PCD_SET_MODE_32_PcdMipiFrameBufferWidth  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMipiFrameBufferHeight  186U
#define _PCD_SIZE_PcdMipiFrameBufferHeight 4
#define _PCD_GET_MODE_SIZE_PcdMipiFrameBufferHeight  _PCD_SIZE_PcdMipiFrameBufferHeight 
#define _PCD_VALUE_PcdMipiFrameBufferHeight  2248U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMipiFrameBufferHeight = _PCD_VALUE_PcdMipiFrameBufferHeight;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMipiFrameBufferHeight;
#define _PCD_GET_MODE_32_PcdMipiFrameBufferHeight  _gPcd_FixedAtBuild_PcdMipiFrameBufferHeight
//#define _PCD_SET_MODE_32_PcdMipiFrameBufferHeight  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMipiFrameBufferPixelBpp  187U
#define _PCD_SIZE_PcdMipiFrameBufferPixelBpp 4
#define _PCD_GET_MODE_SIZE_PcdMipiFrameBufferPixelBpp  _PCD_SIZE_PcdMipiFrameBufferPixelBpp 
#define _PCD_VALUE_PcdMipiFrameBufferPixelBpp  32U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMipiFrameBufferPixelBpp = _PCD_VALUE_PcdMipiFrameBufferPixelBpp;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMipiFrameBufferPixelBpp;
#define _PCD_GET_MODE_32_PcdMipiFrameBufferPixelBpp  _gPcd_FixedAtBuild_PcdMipiFrameBufferPixelBpp
//#define _PCD_SET_MODE_32_PcdMipiFrameBufferPixelBpp  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMipiFrameBufferVisibleWidth  189U
#define _PCD_SIZE_PcdMipiFrameBufferVisibleWidth 4
#define _PCD_GET_MODE_SIZE_PcdMipiFrameBufferVisibleWidth  _PCD_SIZE_PcdMipiFrameBufferVisibleWidth 
#define _PCD_VALUE_PcdMipiFrameBufferVisibleWidth  1080U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMipiFrameBufferVisibleWidth = _PCD_VALUE_PcdMipiFrameBufferVisibleWidth;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMipiFrameBufferVisibleWidth;
#define _PCD_GET_MODE_32_PcdMipiFrameBufferVisibleWidth  _gPcd_FixedAtBuild_PcdMipiFrameBufferVisibleWidth
//#define _PCD_SET_MODE_32_PcdMipiFrameBufferVisibleWidth  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMipiFrameBufferVisibleHeight  188U
#define _PCD_SIZE_PcdMipiFrameBufferVisibleHeight 4
#define _PCD_GET_MODE_SIZE_PcdMipiFrameBufferVisibleHeight  _PCD_SIZE_PcdMipiFrameBufferVisibleHeight 
#define _PCD_VALUE_PcdMipiFrameBufferVisibleHeight  2248U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMipiFrameBufferVisibleHeight = _PCD_VALUE_PcdMipiFrameBufferVisibleHeight;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMipiFrameBufferVisibleHeight;
#define _PCD_GET_MODE_32_PcdMipiFrameBufferVisibleHeight  _gPcd_FixedAtBuild_PcdMipiFrameBufferVisibleHeight
//#define _PCD_SET_MODE_32_PcdMipiFrameBufferVisibleHeight  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDebugClearMemoryValue  119U
#define _PCD_SIZE_PcdDebugClearMemoryValue 1
#define _PCD_GET_MODE_SIZE_PcdDebugClearMemoryValue  _PCD_SIZE_PcdDebugClearMemoryValue 
#define _PCD_VALUE_PcdDebugClearMemoryValue  0xAFU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdDebugClearMemoryValue = _PCD_VALUE_PcdDebugClearMemoryValue;
extern const  UINT8  _gPcd_FixedAtBuild_PcdDebugClearMemoryValue;
#define _PCD_GET_MODE_8_PcdDebugClearMemoryValue  _gPcd_FixedAtBuild_PcdDebugClearMemoryValue
//#define _PCD_SET_MODE_8_PcdDebugClearMemoryValue  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDebugPropertyMask  121U
#define _PCD_SIZE_PcdDebugPropertyMask 1
#define _PCD_GET_MODE_SIZE_PcdDebugPropertyMask  _PCD_SIZE_PcdDebugPropertyMask 
#define _PCD_VALUE_PcdDebugPropertyMask  0x0fU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdDebugPropertyMask = _PCD_VALUE_PcdDebugPropertyMask;
extern const  UINT8  _gPcd_FixedAtBuild_PcdDebugPropertyMask;
#define _PCD_GET_MODE_8_PcdDebugPropertyMask  _gPcd_FixedAtBuild_PcdDebugPropertyMask
//#define _PCD_SET_MODE_8_PcdDebugPropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFixedDebugPrintErrorLevel  125U
#define _PCD_SIZE_PcdFixedDebugPrintErrorLevel 4
#define _PCD_GET_MODE_SIZE_PcdFixedDebugPrintErrorLevel  _PCD_SIZE_PcdFixedDebugPrintErrorLevel 
#define _PCD_VALUE_PcdFixedDebugPrintErrorLevel  0xFFFFFFFFU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel = _PCD_VALUE_PcdFixedDebugPrintErrorLevel;
extern const  UINT32  _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel;
#define _PCD_GET_MODE_32_PcdFixedDebugPrintErrorLevel  _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel
//#define _PCD_SET_MODE_32_PcdFixedDebugPrintErrorLevel  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumDevicePathNodeCount  128U
#define _PCD_SIZE_PcdMaximumDevicePathNodeCount 4
#define _PCD_GET_MODE_SIZE_PcdMaximumDevicePathNodeCount  _PCD_SIZE_PcdMaximumDevicePathNodeCount 
#define _PCD_VALUE_PcdMaximumDevicePathNodeCount  0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumDevicePathNodeCount = _PCD_VALUE_PcdMaximumDevicePathNodeCount;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumDevicePathNodeCount;
#define _PCD_GET_MODE_32_PcdMaximumDevicePathNodeCount  _gPcd_FixedAtBuild_PcdMaximumDevicePathNodeCount
//#define _PCD_SET_MODE_32_PcdMaximumDevicePathNodeCount  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDriverDiagnosticsDisable  124U
#define _PCD_SIZE_PcdDriverDiagnosticsDisable 1
#define _PCD_GET_MODE_SIZE_PcdDriverDiagnosticsDisable  _PCD_SIZE_PcdDriverDiagnosticsDisable 
#define _PCD_VALUE_PcdDriverDiagnosticsDisable  ((BOOLEAN)1U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdDriverDiagnosticsDisable = _PCD_VALUE_PcdDriverDiagnosticsDisable;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdDriverDiagnosticsDisable;
#define _PCD_GET_MODE_BOOL_PcdDriverDiagnosticsDisable  _gPcd_FixedAtBuild_PcdDriverDiagnosticsDisable
//#define _PCD_SET_MODE_BOOL_PcdDriverDiagnosticsDisable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdComponentNameDisable  117U
#define _PCD_SIZE_PcdComponentNameDisable 1
#define _PCD_GET_MODE_SIZE_PcdComponentNameDisable  _PCD_SIZE_PcdComponentNameDisable 
#define _PCD_VALUE_PcdComponentNameDisable  ((BOOLEAN)1U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdComponentNameDisable = _PCD_VALUE_PcdComponentNameDisable;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdComponentNameDisable;
#define _PCD_GET_MODE_BOOL_PcdComponentNameDisable  _gPcd_FixedAtBuild_PcdComponentNameDisable
//#define _PCD_SET_MODE_BOOL_PcdComponentNameDisable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDriverDiagnostics2Disable  123U
#define _PCD_SIZE_PcdDriverDiagnostics2Disable 1
#define _PCD_GET_MODE_SIZE_PcdDriverDiagnostics2Disable  _PCD_SIZE_PcdDriverDiagnostics2Disable 
#define _PCD_VALUE_PcdDriverDiagnostics2Disable  ((BOOLEAN)1U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdDriverDiagnostics2Disable = _PCD_VALUE_PcdDriverDiagnostics2Disable;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdDriverDiagnostics2Disable;
#define _PCD_GET_MODE_BOOL_PcdDriverDiagnostics2Disable  _gPcd_FixedAtBuild_PcdDriverDiagnostics2Disable
//#define _PCD_SET_MODE_BOOL_PcdDriverDiagnostics2Disable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdComponentName2Disable  116U
#define _PCD_SIZE_PcdComponentName2Disable 1
#define _PCD_GET_MODE_SIZE_PcdComponentName2Disable  _PCD_SIZE_PcdComponentName2Disable 
#define _PCD_VALUE_PcdComponentName2Disable  ((BOOLEAN)1U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdComponentName2Disable = _PCD_VALUE_PcdComponentName2Disable;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdComponentName2Disable;
#define _PCD_GET_MODE_BOOL_PcdComponentName2Disable  _gPcd_FixedAtBuild_PcdComponentName2Disable
//#define _PCD_SET_MODE_BOOL_PcdComponentName2Disable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUgaConsumeSupport  148U
#define _PCD_SIZE_PcdUgaConsumeSupport 1
#define _PCD_GET_MODE_SIZE_PcdUgaConsumeSupport  _PCD_SIZE_PcdUgaConsumeSupport 
#define _PCD_VALUE_PcdUgaConsumeSupport  ((BOOLEAN)1U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdUgaConsumeSupport = _PCD_VALUE_PcdUgaConsumeSupport;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdUgaConsumeSupport;
#define _PCD_GET_MODE_BOOL_PcdUgaConsumeSupport  _gPcd_FixedAtBuild_PcdUgaConsumeSupport
//#define _PCD_SET_MODE_BOOL_PcdUgaConsumeSupport  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUefiLibMaxPrintBufferSize  142U
#define _PCD_SIZE_PcdUefiLibMaxPrintBufferSize 4
#define _PCD_GET_MODE_SIZE_PcdUefiLibMaxPrintBufferSize  _PCD_SIZE_PcdUefiLibMaxPrintBufferSize 
#define _PCD_VALUE_PcdUefiLibMaxPrintBufferSize  320U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdUefiLibMaxPrintBufferSize = _PCD_VALUE_PcdUefiLibMaxPrintBufferSize;
extern const  UINT32  _gPcd_FixedAtBuild_PcdUefiLibMaxPrintBufferSize;
#define _PCD_GET_MODE_32_PcdUefiLibMaxPrintBufferSize  _gPcd_FixedAtBuild_PcdUefiLibMaxPrintBufferSize
//#define _PCD_SET_MODE_32_PcdUefiLibMaxPrintBufferSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdArmArchTimerFreqInHz  11U
#define _PCD_SIZE_PcdArmArchTimerFreqInHz 4
#define _PCD_GET_MODE_SIZE_PcdArmArchTimerFreqInHz  _PCD_SIZE_PcdArmArchTimerFreqInHz 
#define _PCD_VALUE_PcdArmArchTimerFreqInHz  0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdArmArchTimerFreqInHz = _PCD_VALUE_PcdArmArchTimerFreqInHz;
extern const  UINT32  _gPcd_FixedAtBuild_PcdArmArchTimerFreqInHz;
#define _PCD_GET_MODE_32_PcdArmArchTimerFreqInHz  _gPcd_FixedAtBuild_PcdArmArchTimerFreqInHz
//#define _PCD_SET_MODE_32_PcdArmArchTimerFreqInHz  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdReportStatusCodePropertyMask  133U
#define _PCD_SIZE_PcdReportStatusCodePropertyMask 1
#define _PCD_GET_MODE_SIZE_PcdReportStatusCodePropertyMask  _PCD_SIZE_PcdReportStatusCodePropertyMask 
#define _PCD_VALUE_PcdReportStatusCodePropertyMask  0x00U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdReportStatusCodePropertyMask = _PCD_VALUE_PcdReportStatusCodePropertyMask;
extern const  UINT8  _gPcd_FixedAtBuild_PcdReportStatusCodePropertyMask;
#define _PCD_GET_MODE_8_PcdReportStatusCodePropertyMask  _gPcd_FixedAtBuild_PcdReportStatusCodePropertyMask
//#define _PCD_SET_MODE_8_PcdReportStatusCodePropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPerformanceLibraryPropertyMask  132U
#define _PCD_SIZE_PcdPerformanceLibraryPropertyMask 1
#define _PCD_GET_MODE_SIZE_PcdPerformanceLibraryPropertyMask  _PCD_SIZE_PcdPerformanceLibraryPropertyMask 
#define _PCD_VALUE_PcdPerformanceLibraryPropertyMask  1U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdPerformanceLibraryPropertyMask = _PCD_VALUE_PcdPerformanceLibraryPropertyMask;
extern const  UINT8  _gPcd_FixedAtBuild_PcdPerformanceLibraryPropertyMask;
#define _PCD_GET_MODE_8_PcdPerformanceLibraryPropertyMask  _gPcd_FixedAtBuild_PcdPerformanceLibraryPropertyMask
//#define _PCD_SET_MODE_8_PcdPerformanceLibraryPropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdEdkiiFpdtStringRecordEnableOnly  59U
#define _PCD_SIZE_PcdEdkiiFpdtStringRecordEnableOnly 1
#define _PCD_GET_MODE_SIZE_PcdEdkiiFpdtStringRecordEnableOnly  _PCD_SIZE_PcdEdkiiFpdtStringRecordEnableOnly 
#define _PCD_VALUE_PcdEdkiiFpdtStringRecordEnableOnly  0U
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdEdkiiFpdtStringRecordEnableOnly = _PCD_VALUE_PcdEdkiiFpdtStringRecordEnableOnly;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdEdkiiFpdtStringRecordEnableOnly;
#define _PCD_GET_MODE_BOOL_PcdEdkiiFpdtStringRecordEnableOnly  _gPcd_FixedAtBuild_PcdEdkiiFpdtStringRecordEnableOnly
//#define _PCD_SET_MODE_BOOL_PcdEdkiiFpdtStringRecordEnableOnly  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdExtFpdtBootRecordPadSize  63U
#define _PCD_SIZE_PcdExtFpdtBootRecordPadSize 4
#define _PCD_GET_MODE_SIZE_PcdExtFpdtBootRecordPadSize  _PCD_SIZE_PcdExtFpdtBootRecordPadSize 
#define _PCD_VALUE_PcdExtFpdtBootRecordPadSize  0x20000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdExtFpdtBootRecordPadSize = _PCD_VALUE_PcdExtFpdtBootRecordPadSize;
extern const  UINT32  _gPcd_FixedAtBuild_PcdExtFpdtBootRecordPadSize;
#define _PCD_GET_MODE_32_PcdExtFpdtBootRecordPadSize  _gPcd_FixedAtBuild_PcdExtFpdtBootRecordPadSize
//#define _PCD_SET_MODE_32_PcdExtFpdtBootRecordPadSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDebuggerExceptionSupport  20U
#define _PCD_SIZE_PcdDebuggerExceptionSupport 1
#define _PCD_GET_MODE_SIZE_PcdDebuggerExceptionSupport  _PCD_SIZE_PcdDebuggerExceptionSupport 
#define _PCD_VALUE_PcdDebuggerExceptionSupport  ((BOOLEAN)0U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdDebuggerExceptionSupport = _PCD_VALUE_PcdDebuggerExceptionSupport;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdDebuggerExceptionSupport;
#define _PCD_GET_MODE_BOOL_PcdDebuggerExceptionSupport  _gPcd_FixedAtBuild_PcdDebuggerExceptionSupport
//#define _PCD_SET_MODE_BOOL_PcdDebuggerExceptionSupport  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuVectorBaseAddress  19U
#define _PCD_SIZE_PcdCpuVectorBaseAddress 8
#define _PCD_GET_MODE_SIZE_PcdCpuVectorBaseAddress  _PCD_SIZE_PcdCpuVectorBaseAddress 
#define _PCD_VALUE_PcdCpuVectorBaseAddress  0xffff0000ULL
GLOBAL_REMOVE_IF_UNREFERENCED const UINT64 _gPcd_FixedAtBuild_PcdCpuVectorBaseAddress = _PCD_VALUE_PcdCpuVectorBaseAddress;
extern const  UINT64  _gPcd_FixedAtBuild_PcdCpuVectorBaseAddress;
#define _PCD_GET_MODE_64_PcdCpuVectorBaseAddress  _gPcd_FixedAtBuild_PcdCpuVectorBaseAddress
//#define _PCD_SET_MODE_64_PcdCpuVectorBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD


RETURN_STATUS
EFIAPI
BaseDebugLibSerialPortConstructor (
  VOID
  );

EFI_STATUS
EFIAPI
UefiRuntimeServicesTableLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
UefiBootServicesTableLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
UefiLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

RETURN_STATUS
EFIAPI
TimerConstructor (
  VOID
  );

EFI_STATUS
EFIAPI
DxeExtractGuidedSectionLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
DxeCorePerformanceLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
DxeCrc32GuidedSectionExtractLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );


VOID
EFIAPI
ProcessLibraryConstructorList (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  )
{
  EFI_STATUS  Status;

  Status = BaseDebugLibSerialPortConstructor ();
  ASSERT_RETURN_ERROR (Status);

  Status = UefiRuntimeServicesTableLibConstructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = UefiBootServicesTableLibConstructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = UefiLibConstructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = TimerConstructor ();
  ASSERT_RETURN_ERROR (Status);

  Status = DxeExtractGuidedSectionLibConstructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = DxeCorePerformanceLibConstructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = DxeCrc32GuidedSectionExtractLibConstructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

}



VOID
EFIAPI
ProcessLibraryDestructorList (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  )
{

}


VOID
EFIAPI
ProcessModuleEntryPointList (
  IN VOID  *HobStart
  )

{
  DxeMain (HobStart);
}


GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gDriverUnloadImageCount = 0U;

EFI_STATUS
EFIAPI
ProcessModuleUnloadList (
  IN EFI_HANDLE        ImageHandle
  )
{
  return EFI_SUCCESS;
}
