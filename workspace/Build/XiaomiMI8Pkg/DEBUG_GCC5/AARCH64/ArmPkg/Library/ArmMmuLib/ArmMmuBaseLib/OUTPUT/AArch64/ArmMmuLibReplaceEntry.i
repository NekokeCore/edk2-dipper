# 1 "/home/core/edk2/ArmPkg/Library/ArmMmuLib/AArch64/ArmMmuLibReplaceEntry.S"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/aarch64-linux-gnu/include/stdc-predef.h" 1 3
# 32 "<command-line>" 2
# 1 "/home/core/edk2-dipper/workspace/Build/XiaomiMI8Pkg/DEBUG_GCC5/AARCH64/ArmPkg/Library/ArmMmuLib/ArmMmuBaseLib/DEBUG/AutoGen.h" 1
# 16 "/home/core/edk2-dipper/workspace/Build/XiaomiMI8Pkg/DEBUG_GCC5/AARCH64/ArmPkg/Library/ArmMmuLib/ArmMmuBaseLib/DEBUG/AutoGen.h"
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
# 17 "/home/core/edk2-dipper/workspace/Build/XiaomiMI8Pkg/DEBUG_GCC5/AARCH64/ArmPkg/Library/ArmMmuLib/ArmMmuBaseLib/DEBUG/AutoGen.h" 2

extern GUID gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;



extern UINT64 _gPcd_SkuId_Array[];

RETURN_STATUS

ArmMmuBaseLibConstructor (
  void
  );
# 32 "<command-line>" 2
# 1 "/home/core/edk2/ArmPkg/Library/ArmMmuLib/AArch64/ArmMmuLibReplaceEntry.S"
#------------------------------------------------------------------------------

# Copyright (c) 2016, Linaro Limited. All rights reserved.

# SPDX-License-Identifier: BSD-2-Clause-Patent

#------------------------------------------------------------------------------

# 1 "/home/core/edk2/ArmPkg/Include/AsmMacroIoLibV8.h" 1
# 10 "/home/core/edk2/ArmPkg/Library/ArmMmuLib/AArch64/ArmMmuLibReplaceEntry.S" 2

  .set CTRL_M_BIT, (1 << 0)

  .macro __replace_entry, el


  mrs x8, sctlr_el\el
  bic x9, x8, #CTRL_M_BIT
  msr sctlr_el\el, x9
  isb


  str x1, [x0]



  dmb sy
  dc ivac, x0


  lsr x2, x2, #12
  .if \el == 1
  tlbi vaae1, x2
  .else
  tlbi vae\el, x2
  .endif
  dsb nsh


  msr sctlr_el\el, x8
  isb
  .endm







.global ArmReplaceLiveTranslationEntry ; .section ".text.ArmReplaceLiveTranslationEntry", "ax" ; .type ArmReplaceLiveTranslationEntry, %function ; ArmReplaceLiveTranslationEntry:


  mrs x4, daif
  msr daifset, #0xf
  isb



  dc civac, x0
  dsb nsh

  mrs x3, CurrentEL ; cmp x3, #0x8 ; b.gt 3f ; b.eq 2f ; cbnz x3, 1f ; b . ;
1:__replace_entry 1
  b 4f
2:__replace_entry 2
  b 4f
3:__replace_entry 3

4:msr daif, x4
  ret

.globl ArmReplaceLiveTranslationEntrySize

ArmReplaceLiveTranslationEntrySize:
  .long . - ArmReplaceLiveTranslationEntry
