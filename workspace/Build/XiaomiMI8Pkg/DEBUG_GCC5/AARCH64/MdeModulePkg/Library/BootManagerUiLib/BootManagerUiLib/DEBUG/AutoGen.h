/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_CCB2DCE1_4FC8_41CB_88C5_D349E134C9FC
#define _AUTOGENH_CCB2DCE1_4FC8_41CB_88C5_D349E134C9FC

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gEfiIfrTianoGuid;
extern EFI_GUID gEfiIfrFrontPageGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiHiiConfigAccessProtocolGuid;
extern EFI_GUID gEfiDevicePathToTextProtocolGuid;
extern EFI_GUID gEdkiiFormBrowserEx2ProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdConOutRow  51U
extern volatile  UINT32  _gPcd_BinaryPatch_PcdConOutRow;
#define _PCD_GET_MODE_32_PcdConOutRow  _gPcd_BinaryPatch_PcdConOutRow
#define _PCD_SET_MODE_32_PcdConOutRow(Value)  (_gPcd_BinaryPatch_PcdConOutRow = (Value))
#define _PCD_SET_MODE_32_S_PcdConOutRow(Value)  ((_gPcd_BinaryPatch_PcdConOutRow = (Value)), RETURN_SUCCESS)
#define _PCD_PATCHABLE_PcdConOutRow_SIZE 4
#define _PCD_GET_MODE_SIZE_PcdConOutRow _gPcd_BinaryPatch_Size_PcdConOutRow
extern UINTN _gPcd_BinaryPatch_Size_PcdConOutRow; 
#define _PCD_TOKEN_PcdConOutColumn  49U
extern volatile  UINT32  _gPcd_BinaryPatch_PcdConOutColumn;
#define _PCD_GET_MODE_32_PcdConOutColumn  _gPcd_BinaryPatch_PcdConOutColumn
#define _PCD_SET_MODE_32_PcdConOutColumn(Value)  (_gPcd_BinaryPatch_PcdConOutColumn = (Value))
#define _PCD_SET_MODE_32_S_PcdConOutColumn(Value)  ((_gPcd_BinaryPatch_PcdConOutColumn = (Value)), RETURN_SUCCESS)
#define _PCD_PATCHABLE_PcdConOutColumn_SIZE 4
#define _PCD_GET_MODE_SIZE_PcdConOutColumn _gPcd_BinaryPatch_Size_PcdConOutColumn
extern UINTN _gPcd_BinaryPatch_Size_PcdConOutColumn; 
#define _PCD_TOKEN_PcdVideoHorizontalResolution  113U
extern volatile  UINT32  _gPcd_BinaryPatch_PcdVideoHorizontalResolution;
#define _PCD_GET_MODE_32_PcdVideoHorizontalResolution  _gPcd_BinaryPatch_PcdVideoHorizontalResolution
#define _PCD_SET_MODE_32_PcdVideoHorizontalResolution(Value)  (_gPcd_BinaryPatch_PcdVideoHorizontalResolution = (Value))
#define _PCD_SET_MODE_32_S_PcdVideoHorizontalResolution(Value)  ((_gPcd_BinaryPatch_PcdVideoHorizontalResolution = (Value)), RETURN_SUCCESS)
#define _PCD_PATCHABLE_PcdVideoHorizontalResolution_SIZE 4
#define _PCD_GET_MODE_SIZE_PcdVideoHorizontalResolution _gPcd_BinaryPatch_Size_PcdVideoHorizontalResolution
extern UINTN _gPcd_BinaryPatch_Size_PcdVideoHorizontalResolution; 
#define _PCD_TOKEN_PcdVideoVerticalResolution  114U
extern volatile  UINT32  _gPcd_BinaryPatch_PcdVideoVerticalResolution;
#define _PCD_GET_MODE_32_PcdVideoVerticalResolution  _gPcd_BinaryPatch_PcdVideoVerticalResolution
#define _PCD_SET_MODE_32_PcdVideoVerticalResolution(Value)  (_gPcd_BinaryPatch_PcdVideoVerticalResolution = (Value))
#define _PCD_SET_MODE_32_S_PcdVideoVerticalResolution(Value)  ((_gPcd_BinaryPatch_PcdVideoVerticalResolution = (Value)), RETURN_SUCCESS)
#define _PCD_PATCHABLE_PcdVideoVerticalResolution_SIZE 4
#define _PCD_GET_MODE_SIZE_PcdVideoVerticalResolution _gPcd_BinaryPatch_Size_PcdVideoVerticalResolution
extern UINTN _gPcd_BinaryPatch_Size_PcdVideoVerticalResolution; 
#define _PCD_TOKEN_PcdSetupConOutColumn  99U
extern volatile  UINT32  _gPcd_BinaryPatch_PcdSetupConOutColumn;
#define _PCD_GET_MODE_32_PcdSetupConOutColumn  _gPcd_BinaryPatch_PcdSetupConOutColumn
#define _PCD_SET_MODE_32_PcdSetupConOutColumn(Value)  (_gPcd_BinaryPatch_PcdSetupConOutColumn = (Value))
#define _PCD_SET_MODE_32_S_PcdSetupConOutColumn(Value)  ((_gPcd_BinaryPatch_PcdSetupConOutColumn = (Value)), RETURN_SUCCESS)
#define _PCD_PATCHABLE_PcdSetupConOutColumn_SIZE 4
#define _PCD_GET_MODE_SIZE_PcdSetupConOutColumn _gPcd_BinaryPatch_Size_PcdSetupConOutColumn
extern UINTN _gPcd_BinaryPatch_Size_PcdSetupConOutColumn; 
#define _PCD_TOKEN_PcdSetupConOutRow  100U
extern volatile  UINT32  _gPcd_BinaryPatch_PcdSetupConOutRow;
#define _PCD_GET_MODE_32_PcdSetupConOutRow  _gPcd_BinaryPatch_PcdSetupConOutRow
#define _PCD_SET_MODE_32_PcdSetupConOutRow(Value)  (_gPcd_BinaryPatch_PcdSetupConOutRow = (Value))
#define _PCD_SET_MODE_32_S_PcdSetupConOutRow(Value)  ((_gPcd_BinaryPatch_PcdSetupConOutRow = (Value)), RETURN_SUCCESS)
#define _PCD_PATCHABLE_PcdSetupConOutRow_SIZE 4
#define _PCD_GET_MODE_SIZE_PcdSetupConOutRow _gPcd_BinaryPatch_Size_PcdSetupConOutRow
extern UINTN _gPcd_BinaryPatch_Size_PcdSetupConOutRow; 
#define _PCD_TOKEN_PcdSetupVideoHorizontalResolution  101U
extern volatile  UINT32  _gPcd_BinaryPatch_PcdSetupVideoHorizontalResolution;
#define _PCD_GET_MODE_32_PcdSetupVideoHorizontalResolution  _gPcd_BinaryPatch_PcdSetupVideoHorizontalResolution
#define _PCD_SET_MODE_32_PcdSetupVideoHorizontalResolution(Value)  (_gPcd_BinaryPatch_PcdSetupVideoHorizontalResolution = (Value))
#define _PCD_SET_MODE_32_S_PcdSetupVideoHorizontalResolution(Value)  ((_gPcd_BinaryPatch_PcdSetupVideoHorizontalResolution = (Value)), RETURN_SUCCESS)
#define _PCD_PATCHABLE_PcdSetupVideoHorizontalResolution_SIZE 4
#define _PCD_GET_MODE_SIZE_PcdSetupVideoHorizontalResolution _gPcd_BinaryPatch_Size_PcdSetupVideoHorizontalResolution
extern UINTN _gPcd_BinaryPatch_Size_PcdSetupVideoHorizontalResolution; 
#define _PCD_TOKEN_PcdSetupVideoVerticalResolution  102U
extern volatile  UINT32  _gPcd_BinaryPatch_PcdSetupVideoVerticalResolution;
#define _PCD_GET_MODE_32_PcdSetupVideoVerticalResolution  _gPcd_BinaryPatch_PcdSetupVideoVerticalResolution
#define _PCD_SET_MODE_32_PcdSetupVideoVerticalResolution(Value)  (_gPcd_BinaryPatch_PcdSetupVideoVerticalResolution = (Value))
#define _PCD_SET_MODE_32_S_PcdSetupVideoVerticalResolution(Value)  ((_gPcd_BinaryPatch_PcdSetupVideoVerticalResolution = (Value)), RETURN_SUCCESS)
#define _PCD_PATCHABLE_PcdSetupVideoVerticalResolution_SIZE 4
#define _PCD_GET_MODE_SIZE_PcdSetupVideoVerticalResolution _gPcd_BinaryPatch_Size_PcdSetupVideoVerticalResolution
extern UINTN _gPcd_BinaryPatch_Size_PcdSetupVideoVerticalResolution; 

EFI_STATUS
EFIAPI
BootManagerUiLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
BootManagerUiLibDestructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );
#include "BootManagerUiLibStrDefs.h"


#ifdef __cplusplus
}
#endif

#endif
