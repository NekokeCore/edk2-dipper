# 1 "/home/core/edk2/ArmPkg/Library/ArmLib/AArch64/ArmLibSupport.S"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/aarch64-linux-gnu/include/stdc-predef.h" 1 3
# 32 "<command-line>" 2
# 1 "/home/core/edk2-dipper/workspace/Build/XiaomiMI8Pkg/DEBUG_GCC5/AARCH64/ArmPkg/Library/ArmLib/ArmBaseLib/DEBUG/AutoGen.h" 1
# 16 "/home/core/edk2-dipper/workspace/Build/XiaomiMI8Pkg/DEBUG_GCC5/AARCH64/ArmPkg/Library/ArmLib/ArmBaseLib/DEBUG/AutoGen.h"
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
# 17 "/home/core/edk2-dipper/workspace/Build/XiaomiMI8Pkg/DEBUG_GCC5/AARCH64/ArmPkg/Library/ArmLib/ArmBaseLib/DEBUG/AutoGen.h" 2

extern GUID gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;



extern UINT64 _gPcd_SkuId_Array[];
# 32 "<command-line>" 2
# 1 "/home/core/edk2/ArmPkg/Library/ArmLib/AArch64/ArmLibSupport.S"
#------------------------------------------------------------------------------

# Copyright (c) 2008 - 2009, Apple Inc. All rights reserved.<BR>
# Copyright (c) 2011 - 2016, ARM Limited. All rights reserved.
# Copyright (c) 2016, Linaro Limited. All rights reserved.

# SPDX-License-Identifier: BSD-2-Clause-Patent

#------------------------------------------------------------------------------

# 1 "/home/core/edk2/ArmPkg/Include/AsmMacroIoLibV8.h" 1
# 12 "/home/core/edk2/ArmPkg/Library/ArmLib/AArch64/ArmLibSupport.S" 2

.set DAIF_RD_FIQ_BIT, (1 << 6)
.set DAIF_RD_IRQ_BIT, (1 << 7)

.set SCTLR_ELx_M_BIT_POS, (0)

.global ArmReadMidr ; .section ".text.ArmReadMidr", "ax" ; .type ArmReadMidr, %function ; ArmReadMidr:
  mrs x0, midr_el1
  ret

.global ArmCacheInfo ; .section ".text.ArmCacheInfo", "ax" ; .type ArmCacheInfo, %function ; ArmCacheInfo:
  mrs x0, ctr_el0
  ret

.global ArmGetInterruptState ; .section ".text.ArmGetInterruptState", "ax" ; .type ArmGetInterruptState, %function ; ArmGetInterruptState:
  mrs x0, daif
  tst w0, #DAIF_RD_IRQ_BIT
  cset w0, eq
  ret

.global ArmGetFiqState ; .section ".text.ArmGetFiqState", "ax" ; .type ArmGetFiqState, %function ; ArmGetFiqState:
  mrs x0, daif
  tst w0, #DAIF_RD_FIQ_BIT
  cset w0, eq
  ret

.global ArmWriteCpacr ; .section ".text.ArmWriteCpacr", "ax" ; .type ArmWriteCpacr, %function ; ArmWriteCpacr:
  msr cpacr_el1, x0
  ret

.global ArmWriteAuxCr ; .section ".text.ArmWriteAuxCr", "ax" ; .type ArmWriteAuxCr, %function ; ArmWriteAuxCr:
  mrs x1, CurrentEL ; cmp x1, #0x8 ; b.gt . ; b.eq 2f ; cbnz x1, 1f ; b . ;
1:msr actlr_el1, x0
  ret
2:msr actlr_el2, x0
  ret

.global ArmReadAuxCr ; .section ".text.ArmReadAuxCr", "ax" ; .type ArmReadAuxCr, %function ; ArmReadAuxCr:
  mrs x1, CurrentEL ; cmp x1, #0x8 ; b.gt . ; b.eq 2f ; cbnz x1, 1f ; b . ;
1:mrs x0, actlr_el1
  ret
2:mrs x0, actlr_el2
  ret

.global ArmSetTTBR0 ; .section ".text.ArmSetTTBR0", "ax" ; .type ArmSetTTBR0, %function ; ArmSetTTBR0:
  mrs x1, CurrentEL ; cmp x1, #0x8 ; b.gt 3f ; b.eq 2f ; cbnz x1, 1f ; b . ;
1:msr ttbr0_el1, x0
  b 4f
2:msr ttbr0_el2, x0
  b 4f
3:msr ttbr0_el3, x0
4:isb
  ret

.global ArmGetTTBR0BaseAddress ; .section ".text.ArmGetTTBR0BaseAddress", "ax" ; .type ArmGetTTBR0BaseAddress, %function ; ArmGetTTBR0BaseAddress:
  mrs x1, CurrentEL ; cmp x1, #0x8 ; b.gt . ; b.eq 2f ; cbnz x1, 1f ; b . ;
1:mrs x0, ttbr0_el1
  b 3f
2:mrs x0, ttbr0_el2
3:and x0, x0, 0xFFFFFFFFFFFF
  isb
  ret

.global ArmGetTCR ; .section ".text.ArmGetTCR", "ax" ; .type ArmGetTCR, %function ; ArmGetTCR:
  mrs x1, CurrentEL ; cmp x1, #0x8 ; b.gt 3f ; b.eq 2f ; cbnz x1, 1f ; b . ;
1:mrs x0, tcr_el1
  b 4f
2:mrs x0, tcr_el2
  b 4f
3:mrs x0, tcr_el3
4:isb
  ret

.global ArmSetTCR ; .section ".text.ArmSetTCR", "ax" ; .type ArmSetTCR, %function ; ArmSetTCR:
  mrs x1, CurrentEL ; cmp x1, #0x8 ; b.gt 3f ; b.eq 2f ; cbnz x1, 1f ; b . ;
1:msr tcr_el1, x0
  b 4f
2:msr tcr_el2, x0
  b 4f
3:msr tcr_el3, x0
4:isb
  ret

.global ArmGetMAIR ; .section ".text.ArmGetMAIR", "ax" ; .type ArmGetMAIR, %function ; ArmGetMAIR:
  mrs x1, CurrentEL ; cmp x1, #0x8 ; b.gt 3f ; b.eq 2f ; cbnz x1, 1f ; b . ;
1:mrs x0, mair_el1
  b 4f
2:mrs x0, mair_el2
  b 4f
3:mrs x0, mair_el3
4:isb
  ret

.global ArmSetMAIR ; .section ".text.ArmSetMAIR", "ax" ; .type ArmSetMAIR, %function ; ArmSetMAIR:
  mrs x1, CurrentEL ; cmp x1, #0x8 ; b.gt 3f ; b.eq 2f ; cbnz x1, 1f ; b . ;
1:msr mair_el1, x0
  b 4f
2:msr mair_el2, x0
  b 4f
3:msr mair_el3, x0
4:isb
  ret
# 122 "/home/core/edk2/ArmPkg/Library/ArmLib/AArch64/ArmLibSupport.S"
.global ArmUpdateTranslationTableEntry ; .section ".text.ArmUpdateTranslationTableEntry", "ax" ; .type ArmUpdateTranslationTableEntry, %function ; ArmUpdateTranslationTableEntry:
   dsb nshst
   lsr x1, x1, #12
   mrs x2, CurrentEL ; cmp x2, #0x8 ; b.gt 3f ; b.eq 2f ; cbnz x2, 1f ; b . ;
1: tlbi vaae1, x1
   mrs x2, sctlr_el1
   b 4f
2: tlbi vae2, x1
   mrs x2, sctlr_el2
   b 4f
3: tlbi vae3, x1
   mrs x2, sctlr_el3
4: tbnz x2, SCTLR_ELx_M_BIT_POS, 5f
   dc ivac, x0
5: dsb nsh
   isb
   ret

.global ArmInvalidateTlb ; .section ".text.ArmInvalidateTlb", "ax" ; .type ArmInvalidateTlb, %function ; ArmInvalidateTlb:
   mrs x0, CurrentEL ; cmp x0, #0x8 ; b.gt 3f ; b.eq 2f ; cbnz x0, 1f ; b . ;
1: tlbi vmalle1
   b 4f
2: tlbi alle2
   b 4f
3: tlbi alle3
4: dsb sy
   isb
   ret

.global ArmWriteCptr ; .section ".text.ArmWriteCptr", "ax" ; .type ArmWriteCptr, %function ; ArmWriteCptr:
  msr cptr_el3, x0
  ret

.global ArmWriteScr ; .section ".text.ArmWriteScr", "ax" ; .type ArmWriteScr, %function ; ArmWriteScr:
  msr scr_el3, x0
  isb
  ret

.global ArmWriteMVBar ; .section ".text.ArmWriteMVBar", "ax" ; .type ArmWriteMVBar, %function ; ArmWriteMVBar:
  msr vbar_el3, x0
  ret

.global ArmCallWFE ; .section ".text.ArmCallWFE", "ax" ; .type ArmCallWFE, %function ; ArmCallWFE:
  wfe
  ret

.global ArmCallSEV ; .section ".text.ArmCallSEV", "ax" ; .type ArmCallSEV, %function ; ArmCallSEV:
  sev
  ret

.global ArmReadCpuActlr ; .section ".text.ArmReadCpuActlr", "ax" ; .type ArmReadCpuActlr, %function ; ArmReadCpuActlr:
  mrs x0, S3_1_c15_c2_0
  ret

.global ArmWriteCpuActlr ; .section ".text.ArmWriteCpuActlr", "ax" ; .type ArmWriteCpuActlr, %function ; ArmWriteCpuActlr:
  msr S3_1_c15_c2_0, x0
  dsb sy
  isb
  ret

.global ArmReadSctlr ; .section ".text.ArmReadSctlr", "ax" ; .type ArmReadSctlr, %function ; ArmReadSctlr:
  mrs x1, CurrentEL ; cmp x1, #0x8 ; b.gt 3f ; b.eq 2f ; cbnz x1, 1f ; b . ;
1:mrs x0, sctlr_el1
  ret
2:mrs x0, sctlr_el2
  ret
3:mrs x0, sctlr_el3
4:ret

.global ArmWriteSctlr ; .section ".text.ArmWriteSctlr", "ax" ; .type ArmWriteSctlr, %function ; ArmWriteSctlr:
  mrs x1, CurrentEL ; cmp x1, #0x8 ; b.gt 3f ; b.eq 2f ; cbnz x1, 1f ; b . ;
1:msr sctlr_el1, x0
  ret
2:msr sctlr_el2, x0
  ret
3:msr sctlr_el3, x0
4:ret

.global ArmGetPhysicalAddressBits ; .section ".text.ArmGetPhysicalAddressBits", "ax" ; .type ArmGetPhysicalAddressBits, %function ; ArmGetPhysicalAddressBits:
  mrs x0, id_aa64mmfr0_el1
  adr x1, .LPARanges
  and x0, x0, #0xf
  ldrb w0, [x1, x0]
  ret







.LPARanges:
  .byte 32, 36, 40, 42, 44, 48, 52, 0
  .byte 0, 0, 0, 0, 0, 0, 0, 0


