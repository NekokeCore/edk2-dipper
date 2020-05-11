# 1 "/home/core/edk2-dipper/XiaomiMI8Pkg/Library/XiaomiMI8Lib/XiaomiMI8Helper.S"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/aarch64-linux-gnu/include/stdc-predef.h" 1 3
# 32 "<command-line>" 2
# 1 "/home/core/edk2-dipper/workspace/Build/XiaomiMI8Pkg/DEBUG_GCC5/AARCH64/XiaomiMI8Pkg/Library/XiaomiMI8Lib/XiaomiMI8Lib/DEBUG/AutoGen.h" 1
# 16 "/home/core/edk2-dipper/workspace/Build/XiaomiMI8Pkg/DEBUG_GCC5/AARCH64/XiaomiMI8Pkg/Library/XiaomiMI8Lib/XiaomiMI8Lib/DEBUG/AutoGen.h"
# 1 "/home/core/edk2/MdePkg/Include/Base.h" 1
# 22 "/home/core/edk2/MdePkg/Include/Base.h"
# 1 "/home/core/edk2/MdePkg/Include/AArch64/ProcessorBind.h" 1
# 94 "/home/core/edk2/MdePkg/Include/AArch64/ProcessorBind.h"
  typedef unsigned long long UINT64;
  typedef long long INT64;
  typedef unsigned int UINT32;
  typedef int INT32;
  typedef unsigned short UINT16;
  typedef unsigned short CHAR16;
  typedef short INT16;
  typedef unsigned char BOOLEAN;
  typedef unsigned char UINT8;
  typedef char CHAR8;
  typedef signed char INT8;







typedef UINT64 UINTN;





typedef INT64 INTN;
# 23 "/home/core/edk2/MdePkg/Include/Base.h" 2
# 222 "/home/core/edk2/MdePkg/Include/Base.h"
typedef struct {
  UINT32 Data1;
  UINT16 Data2;
  UINT16 Data3;
  UINT8 Data4[8];
} GUID;




typedef struct {
  UINT8 Addr[4];
} IPv4_ADDRESS;




typedef struct {
  UINT8 Addr[16];
} IPv6_ADDRESS;




typedef UINT64 PHYSICAL_ADDRESS;




typedef struct _LIST_ENTRY LIST_ENTRY;




struct _LIST_ENTRY {
  LIST_ENTRY *ForwardLink;
  LIST_ENTRY *BackLink;
};
# 657 "/home/core/edk2/MdePkg/Include/Base.h"
typedef __builtin_va_list VA_LIST;
# 742 "/home/core/edk2/MdePkg/Include/Base.h"
typedef UINTN *BASE_LIST;
# 813 "/home/core/edk2/MdePkg/Include/Base.h"
_Static_assert (sizeof (BOOLEAN) == 1, "sizeof (BOOLEAN) does not meet UEFI Specification Data Type requirements");
_Static_assert (sizeof (INT8) == 1, "sizeof (INT8) does not meet UEFI Specification Data Type requirements");
_Static_assert (sizeof (UINT8) == 1, "sizeof (UINT8) does not meet UEFI Specification Data Type requirements");
_Static_assert (sizeof (INT16) == 2, "sizeof (INT16) does not meet UEFI Specification Data Type requirements");
_Static_assert (sizeof (UINT16) == 2, "sizeof (UINT16) does not meet UEFI Specification Data Type requirements");
_Static_assert (sizeof (INT32) == 4, "sizeof (INT32) does not meet UEFI Specification Data Type requirements");
_Static_assert (sizeof (UINT32) == 4, "sizeof (UINT32) does not meet UEFI Specification Data Type requirements");
_Static_assert (sizeof (INT64) == 8, "sizeof (INT64) does not meet UEFI Specification Data Type requirements");
_Static_assert (sizeof (UINT64) == 8, "sizeof (UINT64) does not meet UEFI Specification Data Type requirements");
_Static_assert (sizeof (CHAR8) == 1, "sizeof (CHAR8) does not meet UEFI Specification Data Type requirements");
_Static_assert (sizeof (CHAR16) == 2, "sizeof (CHAR16) does not meet UEFI Specification Data Type requirements");
# 832 "/home/core/edk2/MdePkg/Include/Base.h"
typedef enum {
  __VerifyUint8EnumValue = 0xff
} __VERIFY_UINT8_ENUM_SIZE;

typedef enum {
  __VerifyUint16EnumValue = 0xffff
} __VERIFY_UINT16_ENUM_SIZE;

typedef enum {
  __VerifyUint32EnumValue = 0xffffffff
} __VERIFY_UINT32_ENUM_SIZE;

_Static_assert (sizeof (__VERIFY_UINT8_ENUM_SIZE) == 4, "Size of enum does not meet UEFI Specification Data Type requirements");
_Static_assert (sizeof (__VERIFY_UINT16_ENUM_SIZE) == 4, "Size of enum does not meet UEFI Specification Data Type requirements");
_Static_assert (sizeof (__VERIFY_UINT32_ENUM_SIZE) == 4, "Size of enum does not meet UEFI Specification Data Type requirements");
# 960 "/home/core/edk2/MdePkg/Include/Base.h"
typedef UINTN RETURN_STATUS;
# 1276 "/home/core/edk2/MdePkg/Include/Base.h"
  void * __builtin_return_address (unsigned int level);
# 17 "/home/core/edk2-dipper/workspace/Build/XiaomiMI8Pkg/DEBUG_GCC5/AARCH64/XiaomiMI8Pkg/Library/XiaomiMI8Lib/XiaomiMI8Lib/DEBUG/AutoGen.h" 2
# 1 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h" 1
# 1076 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
UINTN

LibPcdSetSku (
  UINTN SkuId
  );
# 1093 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
UINT8

LibPcdGet8 (
  UINTN TokenNumber
  );
# 1110 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
UINT16

LibPcdGet16 (
  UINTN TokenNumber
  );
# 1127 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
UINT32

LibPcdGet32 (
  UINTN TokenNumber
  );
# 1144 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
UINT64

LibPcdGet64 (
  UINTN TokenNumber
  );
# 1161 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
void *

LibPcdGetPtr (
  UINTN TokenNumber
  );
# 1178 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
BOOLEAN

LibPcdGetBool (
  UINTN TokenNumber
  );
# 1193 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
UINTN

LibPcdGetSize (
  UINTN TokenNumber
  );
# 1214 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
UINT8

LibPcdGetEx8 (
  const GUID *Guid,
  UINTN TokenNumber
  );
# 1236 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
UINT16

LibPcdGetEx16 (
  const GUID *Guid,
  UINTN TokenNumber
  );
# 1255 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
UINT32

LibPcdGetEx32 (
  const GUID *Guid,
  UINTN TokenNumber
  );
# 1277 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
UINT64

LibPcdGetEx64 (
  const GUID *Guid,
  UINTN TokenNumber
  );
# 1299 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
void *

LibPcdGetExPtr (
  const GUID *Guid,
  UINTN TokenNumber
  );
# 1321 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
BOOLEAN

LibPcdGetExBool (
  const GUID *Guid,
  UINTN TokenNumber
  );
# 1343 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
UINTN

LibPcdGetExSize (
  const GUID *Guid,
  UINTN TokenNumber
  );
# 1364 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
UINT8

LibPcdSet8 (
  UINTN TokenNumber,
  UINT8 Value
  );
# 1384 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
UINT16

LibPcdSet16 (
  UINTN TokenNumber,
  UINT16 Value
  );
# 1404 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
UINT32

LibPcdSet32 (
  UINTN TokenNumber,
  UINT32 Value
  );
# 1424 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
UINT64

LibPcdSet64 (
  UINTN TokenNumber,
  UINT64 Value
  );
# 1454 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
void *

LibPcdSetPtr (
  UINTN TokenNumber,
  UINTN *SizeOfBuffer,
  const void *Buffer
  );
# 1475 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
BOOLEAN

LibPcdSetBool (
  UINTN TokenNumber,
  BOOLEAN Value
  );
# 1499 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
UINT8

LibPcdSetEx8 (
  const GUID *Guid,
  UINTN TokenNumber,
  UINT8 Value
  );
# 1524 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
UINT16

LibPcdSetEx16 (
  const GUID *Guid,
  UINTN TokenNumber,
  UINT16 Value
  );
# 1549 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
UINT32

LibPcdSetEx32 (
  const GUID *Guid,
  UINTN TokenNumber,
  UINT32 Value
  );
# 1574 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
UINT64

LibPcdSetEx64 (
  const GUID *Guid,
  UINTN TokenNumber,
  UINT64 Value
  );
# 1605 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
void *

LibPcdSetExPtr (
  const GUID *Guid,
  UINTN TokenNumber,
  UINTN *SizeOfBuffer,
  void *Buffer
  );
# 1631 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
BOOLEAN

LibPcdSetExBool (
  const GUID *Guid,
  UINTN TokenNumber,
  BOOLEAN Value
  );
# 1652 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSet8S (
  UINTN TokenNumber,
  UINT8 Value
  );
# 1671 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSet16S (
  UINTN TokenNumber,
  UINT16 Value
  );
# 1690 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSet32S (
  UINTN TokenNumber,
  UINT32 Value
  );
# 1709 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSet64S (
  UINTN TokenNumber,
  UINT64 Value
  );
# 1738 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSetPtrS (
  UINTN TokenNumber,
  UINTN *SizeOfBuffer,
  const void *Buffer
  );
# 1758 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSetBoolS (
  UINTN TokenNumber,
  BOOLEAN Value
  );
# 1781 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSetEx8S (
  const GUID *Guid,
  UINTN TokenNumber,
  UINT8 Value
  );
# 1805 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSetEx16S (
  const GUID *Guid,
  UINTN TokenNumber,
  UINT16 Value
  );
# 1829 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSetEx32S (
  const GUID *Guid,
  UINTN TokenNumber,
  UINT32 Value
  );
# 1853 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSetEx64S (
  const GUID *Guid,
  UINTN TokenNumber,
  UINT64 Value
  );
# 1883 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSetExPtrS (
  const GUID *Guid,
  UINTN TokenNumber,
  UINTN *SizeOfBuffer,
  void *Buffer
  );
# 1908 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSetExBoolS (
  const GUID *Guid,
  UINTN TokenNumber,
  BOOLEAN Value
  );
# 1932 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
typedef
void
( *PCD_CALLBACK)(
  const GUID *CallBackGuid,
  UINTN CallBackToken,
  void *TokenData,
  UINTN TokenDataSize
  );
# 1958 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
void

LibPcdCallbackOnSet (
  const GUID *Guid,
  UINTN TokenNumber,
  PCD_CALLBACK NotificationFunction
  );
# 1980 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
void

LibPcdCancelCallback (
  const GUID *Guid,
  UINTN TokenNumber,
  PCD_CALLBACK NotificationFunction
  );
# 2008 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
UINTN

LibPcdGetNextToken (
  const GUID *Guid,
  UINTN TokenNumber
  );
# 2030 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
GUID *

LibPcdGetNextTokenSpace (
  const GUID *TokenSpaceGuid
  );
# 2060 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
void *

LibPatchPcdSetPtr (
  void *PatchVariable,
  UINTN MaximumDatumSize,
  UINTN *SizeOfBuffer,
  const void *Buffer
  );
# 2092 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPatchPcdSetPtrS (
  void *PatchVariable,
  UINTN MaximumDatumSize,
  UINTN *SizeOfBuffer,
  const void *Buffer
  );
# 2126 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
void *

LibPatchPcdSetPtrAndSize (
  void *PatchVariable,
  UINTN *SizeOfPatchVariable,
  UINTN MaximumDatumSize,
  UINTN *SizeOfBuffer,
  const void *Buffer
  );
# 2161 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPatchPcdSetPtrAndSizeS (
  void *PatchVariable,
  UINTN *SizeOfPatchVariable,
  UINTN MaximumDatumSize,
  UINTN *SizeOfBuffer,
  const void *Buffer
  );

typedef enum {
  PCD_TYPE_8,
  PCD_TYPE_16,
  PCD_TYPE_32,
  PCD_TYPE_64,
  PCD_TYPE_BOOL,
  PCD_TYPE_PTR
} PCD_TYPE;

typedef struct {




  PCD_TYPE PcdType;




  UINTN PcdSize;






  CHAR8 *PcdName;
} PCD_INFO;
# 2213 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
void

LibPcdGetInfo (
  UINTN TokenNumber,
  PCD_INFO *PcdInfo
  );
# 2233 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
void

LibPcdGetInfoEx (
  const GUID *Guid,
  UINTN TokenNumber,
  PCD_INFO *PcdInfo
  );
# 2248 "/home/core/edk2/MdePkg/Include/Library/PcdLib.h"
UINTN

LibPcdGetSku (
  void
  );
# 18 "/home/core/edk2-dipper/workspace/Build/XiaomiMI8Pkg/DEBUG_GCC5/AARCH64/XiaomiMI8Pkg/Library/XiaomiMI8Lib/XiaomiMI8Lib/DEBUG/AutoGen.h" 2

extern GUID gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;



extern GUID gArmTokenSpaceGuid;


extern UINT64 _gPcd_SkuId_Array[];



extern const UINT32 _gPcd_FixedAtBuild_PcdArmPrimaryCore;






extern const UINT32 _gPcd_FixedAtBuild_PcdArmPrimaryCoreMask;






extern const UINT64 _gPcd_FixedAtBuild_PcdSystemMemoryBase;






extern const UINT64 _gPcd_FixedAtBuild_PcdSystemMemorySize;






extern const UINT64 _gPcd_FixedAtBuild_PcdFdBaseAddress;






extern const UINT32 _gPcd_FixedAtBuild_PcdFdSize;
# 32 "<command-line>" 2
# 1 "/home/core/edk2-dipper/XiaomiMI8Pkg/Library/XiaomiMI8Lib/XiaomiMI8Helper.S"

# Copyright (c) 2018, Linaro Limited. All rights reserved.

# This program and the accompanying materials
# are licensed and made available under the terms and conditions of the BSD License
# which accompanies this distribution. The full text of the license may be found at
# http:

# THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
# WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.



# 1 "/home/core/edk2/ArmPkg/Include/AsmMacroIoLibV8.h" 1
# 15 "/home/core/edk2-dipper/XiaomiMI8Pkg/Library/XiaomiMI8Lib/XiaomiMI8Helper.S" 2
# 1 "/home/core/edk2/ArmPkg/Include/Library/ArmLib.h" 1
# 13 "/home/core/edk2/ArmPkg/Include/Library/ArmLib.h"
# 1 "/home/core/edk2/MdePkg/Include/Uefi/UefiBaseType.h" 1
# 24 "/home/core/edk2/MdePkg/Include/Uefi/UefiBaseType.h"
typedef GUID EFI_GUID;



typedef RETURN_STATUS EFI_STATUS;



typedef void *EFI_HANDLE;



typedef void *EFI_EVENT;



typedef UINTN EFI_TPL;



typedef UINT64 EFI_LBA;




typedef UINT64 EFI_PHYSICAL_ADDRESS;




typedef UINT64 EFI_VIRTUAL_ADDRESS;
# 67 "/home/core/edk2/MdePkg/Include/Uefi/UefiBaseType.h"
typedef struct {
  UINT16 Year;
  UINT8 Month;
  UINT8 Day;
  UINT8 Hour;
  UINT8 Minute;
  UINT8 Second;
  UINT8 Pad1;
  UINT32 Nanosecond;
  INT16 TimeZone;
  UINT8 Daylight;
  UINT8 Pad2;
} EFI_TIME;





typedef IPv4_ADDRESS EFI_IPv4_ADDRESS;




typedef IPv6_ADDRESS EFI_IPv6_ADDRESS;




typedef struct {
  UINT8 Addr[32];
} EFI_MAC_ADDRESS;





typedef union {
  UINT32 Addr[4];
  EFI_IPv4_ADDRESS v4;
  EFI_IPv6_ADDRESS v6;
} EFI_IP_ADDRESS;
# 14 "/home/core/edk2/ArmPkg/Include/Library/ArmLib.h" 2




# 1 "/home/core/edk2/ArmPkg/Include/Chipset/AArch64.h" 1
# 13 "/home/core/edk2/ArmPkg/Include/Chipset/AArch64.h"
# 1 "/home/core/edk2/ArmPkg/Include/Chipset/AArch64Mmu.h" 1
# 14 "/home/core/edk2/ArmPkg/Include/Chipset/AArch64.h" 2
# 129 "/home/core/edk2/ArmPkg/Include/Chipset/AArch64.h"
void

ArmEnableSWPInstruction (
  void
  );

UINTN

ArmReadCbar (
  void
  );

UINTN

ArmReadTpidrurw (
  void
  );

void

ArmWriteTpidrurw (
  UINTN Value
  );

UINTN

ArmGetTCR (
  void
  );

void

ArmSetTCR (
  UINTN Value
  );

UINTN

ArmGetMAIR (
  void
  );

void

ArmSetMAIR (
  UINTN Value
  );

void

ArmDisableAlignmentCheck (
  void
  );

void

ArmEnableAlignmentCheck (
  void
  );

void

ArmDisableStackAlignmentCheck (
  void
  );

void

ArmEnableStackAlignmentCheck (
  void
  );

void

ArmDisableAllExceptions (
  void
  );

void
ArmWriteHcr (
  UINTN Hcr
  );

UINTN
ArmReadHcr (
  void
  );

UINTN
ArmReadCurrentEL (
  void
  );

UINTN
ArmWriteCptr (
  UINT64 Cptr
  );

UINT32
ArmReadCntHctl (
  void
  );

void
ArmWriteCntHctl (
  UINT32 CntHctl
  );
# 19 "/home/core/edk2/ArmPkg/Include/Library/ArmLib.h" 2
# 33 "/home/core/edk2/ArmPkg/Include/Library/ArmLib.h"
typedef enum {
  ARM_MEMORY_REGION_ATTRIBUTE_UNCACHED_UNBUFFERED = 0,
  ARM_MEMORY_REGION_ATTRIBUTE_NONSECURE_UNCACHED_UNBUFFERED,
  ARM_MEMORY_REGION_ATTRIBUTE_WRITE_BACK,
  ARM_MEMORY_REGION_ATTRIBUTE_NONSECURE_WRITE_BACK,





  ARM_MEMORY_REGION_ATTRIBUTE_WRITE_BACK_NONSHAREABLE,
  ARM_MEMORY_REGION_ATTRIBUTE_NONSECURE_WRITE_BACK_NONSHAREABLE,

  ARM_MEMORY_REGION_ATTRIBUTE_WRITE_THROUGH,
  ARM_MEMORY_REGION_ATTRIBUTE_NONSECURE_WRITE_THROUGH,
  ARM_MEMORY_REGION_ATTRIBUTE_DEVICE,
  ARM_MEMORY_REGION_ATTRIBUTE_NONSECURE_DEVICE
} ARM_MEMORY_REGION_ATTRIBUTES;



typedef struct {
  EFI_PHYSICAL_ADDRESS PhysicalBase;
  EFI_VIRTUAL_ADDRESS VirtualBase;
  UINT64 Length;
  ARM_MEMORY_REGION_ATTRIBUTES Attributes;
} ARM_MEMORY_REGION_DESCRIPTOR;

typedef void (*CACHE_OPERATION)(void);
typedef void (*LINE_OPERATION)(UINTN);




typedef enum {
  ARM_PROCESSOR_MODE_USER = 0x10,
  ARM_PROCESSOR_MODE_FIQ = 0x11,
  ARM_PROCESSOR_MODE_IRQ = 0x12,
  ARM_PROCESSOR_MODE_SUPERVISOR = 0x13,
  ARM_PROCESSOR_MODE_ABORT = 0x17,
  ARM_PROCESSOR_MODE_HYP = 0x1A,
  ARM_PROCESSOR_MODE_UNDEFINED = 0x1B,
  ARM_PROCESSOR_MODE_SYSTEM = 0x1F,
  ARM_PROCESSOR_MODE_MASK = 0x1F
} ARM_PROCESSOR_MODE;
# 111 "/home/core/edk2/ArmPkg/Include/Library/ArmLib.h"
UINTN

ArmDataCacheLineLength (
  void
  );

UINTN

ArmInstructionCacheLineLength (
  void
  );

UINTN

ArmCacheWritebackGranule (
  void
  );

UINTN

ArmIsArchTimerImplemented (
  void
  );

UINTN

ArmReadIdPfr0 (
  void
  );

UINTN

ArmReadIdPfr1 (
  void
  );

UINTN

ArmCacheInfo (
  void
  );

BOOLEAN

ArmIsMpCore (
  void
  );

void

ArmInvalidateDataCache (
  void
  );


void

ArmCleanInvalidateDataCache (
  void
  );

void

ArmCleanDataCache (
  void
  );

void

ArmInvalidateInstructionCache (
  void
  );

void

ArmInvalidateDataCacheEntryByMVA (
  UINTN Address
  );

void

ArmCleanDataCacheEntryToPoUByMVA (
  UINTN Address
  );

void

ArmInvalidateInstructionCacheEntryToPoUByMVA (
  UINTN Address
  );

void

ArmCleanDataCacheEntryByMVA (
 UINTN Address
);

void

ArmCleanInvalidateDataCacheEntryByMVA (
  UINTN Address
  );

void

ArmEnableDataCache (
  void
  );

void

ArmDisableDataCache (
  void
  );

void

ArmEnableInstructionCache (
  void
  );

void

ArmDisableInstructionCache (
  void
  );

void

ArmEnableMmu (
  void
  );

void

ArmDisableMmu (
  void
  );

void

ArmEnableCachesAndMmu (
  void
  );

void

ArmDisableCachesAndMmu (
  void
  );

void

ArmEnableInterrupts (
  void
  );

UINTN

ArmDisableInterrupts (
  void
  );

BOOLEAN

ArmGetInterruptState (
  void
  );

void

ArmEnableAsynchronousAbort (
  void
  );

UINTN

ArmDisableAsynchronousAbort (
  void
  );

void

ArmEnableIrq (
  void
  );

UINTN

ArmDisableIrq (
  void
  );

void

ArmEnableFiq (
  void
  );

UINTN

ArmDisableFiq (
  void
  );

BOOLEAN

ArmGetFiqState (
  void
  );




void

ArmInvalidateTlb (
  void
  );

void

ArmUpdateTranslationTableEntry (
  void *TranslationTableEntry,
  void *Mva
  );

void

ArmSetDomainAccessControl (
  UINT32 Domain
  );

void

ArmSetTTBR0 (
  void *TranslationTableBase
  );

void

ArmSetTTBCR (
  UINT32 Bits
  );

void *

ArmGetTTBR0BaseAddress (
  void
  );

BOOLEAN

ArmMmuEnabled (
  void
  );

void

ArmEnableBranchPrediction (
  void
  );

void

ArmDisableBranchPrediction (
  void
  );

void

ArmSetLowVectors (
  void
  );

void

ArmSetHighVectors (
  void
  );

void

ArmDataMemoryBarrier (
  void
  );

void

ArmDataSynchronizationBarrier (
  void
  );

void

ArmInstructionSynchronizationBarrier (
  void
  );

void

ArmWriteVBar (
  UINTN VectorBase
  );

UINTN

ArmReadVBar (
  void
  );

void

ArmWriteAuxCr (
  UINT32 Bit
  );

UINT32

ArmReadAuxCr (
  void
  );

void

ArmSetAuxCrBit (
  UINT32 Bits
  );

void

ArmUnsetAuxCrBit (
  UINT32 Bits
  );

void

ArmCallSEV (
  void
  );

void

ArmCallWFE (
  void
  );

void

ArmCallWFI (

  void
  );

UINTN

ArmReadMpidr (
  void
  );

UINTN

ArmReadMidr (
  void
  );

UINT32

ArmReadCpacr (
  void
  );

void

ArmWriteCpacr (
  UINT32 Access
  );

void

ArmEnableVFP (
  void
  );







UINT32

ArmReadScr (
  void
  );







void

ArmWriteScr (
  UINT32 Value
  );

UINT32

ArmReadMVBar (
  void
  );

void

ArmWriteMVBar (
  UINT32 VectorMonitorBase
  );

UINT32

ArmReadSctlr (
  void
  );

void

ArmWriteSctlr (
  UINT32 Value
  );

UINTN

ArmReadHVBar (
  void
  );

void

ArmWriteHVBar (
  UINTN HypModeVectorBase
  );






UINTN

ArmReadCpuActlr (
  void
  );

void

ArmWriteCpuActlr (
  UINTN Val
  );

void

ArmSetCpuActlrBit (
  UINTN Bits
  );

void

ArmUnsetCpuActlrBit (
  UINTN Bits
  );
# 592 "/home/core/edk2/ArmPkg/Include/Library/ArmLib.h"
UINTN

ArmReadCntFrq (
  void
  );

void

ArmWriteCntFrq (
  UINTN FreqInHz
  );

UINT64

ArmReadCntPct (
  void
  );

UINTN

ArmReadCntkCtl (
  void
  );

void

ArmWriteCntkCtl (
  UINTN Val
  );

UINTN

ArmReadCntpTval (
  void
  );

void

ArmWriteCntpTval (
  UINTN Val
  );

UINTN

ArmReadCntpCtl (
  void
  );

void

ArmWriteCntpCtl (
  UINTN Val
  );

UINTN

ArmReadCntvTval (
  void
  );

void

ArmWriteCntvTval (
  UINTN Val
  );

UINTN

ArmReadCntvCtl (
  void
  );

void

ArmWriteCntvCtl (
  UINTN Val
  );

UINT64

ArmReadCntvCt (
  void
  );

UINT64

ArmReadCntpCval (
  void
  );

void

ArmWriteCntpCval (
  UINT64 Val
  );

UINT64

ArmReadCntvCval (
  void
  );

void

ArmWriteCntvCval (
  UINT64 Val
  );

UINT64

ArmReadCntvOff (
  void
  );

void

ArmWriteCntvOff (
  UINT64 Val
  );

UINTN

ArmGetPhysicalAddressBits (
  void
  );
# 16 "/home/core/edk2-dipper/XiaomiMI8Pkg/Library/XiaomiMI8Lib/XiaomiMI8Helper.S" 2

.text
.align 3

.global ArmPlatformPeiBootAction ; .section ".text.ArmPlatformPeiBootAction", "ax" ; .type ArmPlatformPeiBootAction, %function ; ArmPlatformPeiBootAction:
startlabel:

  adr x4, .
  ldr x5, =ArmPlatformPeiBootAction
  cmp x4, x5
  bne docopy
  ret
docopy:

  ldr x6, =0xd0000000
  sub x5, x5, x6
  sub x4, x4, x5


  sub x30, x30, x4
  add x30, x30, x6
  ldr x5, =0x00200000

loop:
  ldp x2, x3, [x4], #16
  stp x2, x3, [x6], #16
  subs x5, x5, #16
  b.ne loop
  ret
.ltorg





.global ArmPlatformIsPrimaryCore ; .section ".text.ArmPlatformIsPrimaryCore", "ax" ; .type ArmPlatformIsPrimaryCore, %function ; ArmPlatformIsPrimaryCore:
  movz w1, (0xF03) >> 16, lsl #16 ; movk w1, (0xF03) & 0xffff
  and x0, x0, x1
  movz w1, (0) >> 16, lsl #16 ; movk w1, (0) & 0xffff
  cmp w0, w1
  cset x0, eq
  ret





.global ArmPlatformGetPrimaryCoreMpId ; .section ".text.ArmPlatformGetPrimaryCoreMpId", "ax" ; .type ArmPlatformGetPrimaryCoreMpId, %function ; ArmPlatformGetPrimaryCoreMpId:
  movz w0, (0) >> 16, lsl #16 ; movk w0, (0) & 0xffff
  ret






.global ArmPlatformGetCorePosition ; .section ".text.ArmPlatformGetCorePosition", "ax" ; .type ArmPlatformGetCorePosition, %function ; ArmPlatformGetCorePosition:
  and x1, x0, #0xFF
  and x0, x0, #(0xFF << 8)
  add x0, x1, x0, LSR #6
  ret
