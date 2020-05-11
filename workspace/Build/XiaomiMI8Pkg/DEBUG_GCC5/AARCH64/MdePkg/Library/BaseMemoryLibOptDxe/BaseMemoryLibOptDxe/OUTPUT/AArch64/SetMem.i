# 1 "/home/core/edk2/MdePkg/Library/BaseMemoryLibOptDxe/AArch64/SetMem.S"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/aarch64-linux-gnu/include/stdc-predef.h" 1 3
# 32 "<command-line>" 2
# 1 "/home/core/edk2-dipper/workspace/Build/XiaomiMI8Pkg/DEBUG_GCC5/AARCH64/MdePkg/Library/BaseMemoryLibOptDxe/BaseMemoryLibOptDxe/DEBUG/AutoGen.h" 1
# 16 "/home/core/edk2-dipper/workspace/Build/XiaomiMI8Pkg/DEBUG_GCC5/AARCH64/MdePkg/Library/BaseMemoryLibOptDxe/BaseMemoryLibOptDxe/DEBUG/AutoGen.h"
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
# 17 "/home/core/edk2-dipper/workspace/Build/XiaomiMI8Pkg/DEBUG_GCC5/AARCH64/MdePkg/Library/BaseMemoryLibOptDxe/BaseMemoryLibOptDxe/DEBUG/AutoGen.h" 2

extern GUID gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;



extern UINT64 _gPcd_SkuId_Array[];
# 32 "<command-line>" 2
# 1 "/home/core/edk2/MdePkg/Library/BaseMemoryLibOptDxe/AArch64/SetMem.S"
# 78 "/home/core/edk2/MdePkg/Library/BaseMemoryLibOptDxe/AArch64/SetMem.S"
.globl InternalMemSetMem16
InternalMemSetMem16:
    dup v0.8H, w2
    lsl x1, x1, #1
    b 0f

.globl InternalMemSetMem32
InternalMemSetMem32:
    dup v0.4S, w2
    lsl x1, x1, #2
    b 0f

.globl InternalMemSetMem64
InternalMemSetMem64:
    dup v0.2D, x2
    lsl x1, x1, #3
    b 0f

.globl InternalMemZeroMem
InternalMemZeroMem:
    movi v0.16B, #0
    b 0f

.globl InternalMemSetMem
InternalMemSetMem:
    dup v0.16B, w2
0: add x4, x0, x1
    mov x2, v0.D[0]

    cmp x1, 96
    b.hi .Lset_long
    cmp x1, 16
    b.hs .Lset_medium


    tbz x1, 3, 1f
    str x2, [x0]
    str x2, [x4, -8]
    ret
    nop
1: tbz x1, 2, 2f
    str w2, [x0]
    str w2, [x4, -4]
    ret
2: cbz x1, 3f
    strb w2, [x0]
    tbz x1, 1, 3f
    strh w2, [x4, -2]
3: ret


.Lset_medium:
    str q0, [x0]
    tbnz x1, 6, .Lset96
    str q0, [x4, -16]
    tbz x1, 5, 1f
    str q0, [x0, 16]
    str q0, [x4, -32]
1: ret

    .p2align 4


.Lset96:
    str q0, [x0, 16]
    stp q0, q0, [x0, 32]
    stp q0, q0, [x4, -32]
    ret

    .p2align 3
    nop
.Lset_long:
    bic x3, x0, 15
    str q0, [x0]
    cmp x1, 256
    ccmp x2, 0, 0, cs
    b.eq .Ltry_zva
.Lno_zva:
    sub x1, x4, x3
    add x3, x3, 16
    sub x1, x1, 64 + 16
1: stp q0, q0, [x3], 64
    stp q0, q0, [x3, -32]
.Ltail64:
    subs x1, x1, 64
    b.hi 1b
2: stp q0, q0, [x4, -64]
    stp q0, q0, [x4, -32]
    ret

    .p2align 3
.Ltry_zva:
    mrs x5, dczid_el0
    tbnz w5, 4, .Lno_zva
    and w5, w5, 15
    cmp w5, 4
    b.ne .Lzva_128



.Lzva_64:
    str q0, [x3, 16]
    stp q0, q0, [x3, 32]
    bic x3, x3, 63
    stp q0, q0, [x3, 64]
    stp q0, q0, [x3, 96]
    sub x1, x4, x3
    sub x1, x1, 128+64+64
    add x3, x3, 128
    nop
1: dc zva, x3
    add x3, x3, 64
    subs x1, x1, 64
    b.hi 1b
    stp q0, q0, [x3, 0]
    stp q0, q0, [x3, 32]
    stp q0, q0, [x4, -64]
    stp q0, q0, [x4, -32]
    ret

    .p2align 3
.Lzva_128:
    cmp w5, 5
    b.ne .Lzva_other

    str q0, [x3, 16]
    stp q0, q0, [x3, 32]
    stp q0, q0, [x3, 64]
    stp q0, q0, [x3, 96]
    bic x3, x3, 127
    sub x1, x4, x3
    sub x1, x1, 128+128
    add x3, x3, 128
1: dc zva, x3
    add x3, x3, 128
    subs x1, x1, 128
    b.hi 1b
    stp q0, q0, [x4, -128]
    stp q0, q0, [x4, -96]
    stp q0, q0, [x4, -64]
    stp q0, q0, [x4, -32]
    ret

.Lzva_other:
    mov w6, 4
    lsl w7, w6, w5
    add x5, x7, 64
    cmp x1, x5
    blo .Lno_zva

    sub x6, x7, 1
    add x5, x3, x7
    add x3, x3, 16
    subs x1, x5, x3
    bic x5, x5, x6
    beq 2f
1: stp q0, q0, [x3], 64
    stp q0, q0, [x3, -32]
    subs x1, x1, 64
    b.hi 1b
2: mov x3, x5
    sub x1, x4, x5
    subs x1, x1, x7
    b.lo 4f
3: dc zva, x3
    add x3, x3, x7
    subs x1, x1, x7
    b.hs 3b
4: add x1, x1, x7
    b .Ltail64
