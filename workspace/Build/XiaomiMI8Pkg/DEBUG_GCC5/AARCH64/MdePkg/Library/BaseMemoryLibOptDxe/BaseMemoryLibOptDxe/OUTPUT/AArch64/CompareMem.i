# 1 "/home/core/edk2/MdePkg/Library/BaseMemoryLibOptDxe/AArch64/CompareMem.S"
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
# 1 "/home/core/edk2/MdePkg/Library/BaseMemoryLibOptDxe/AArch64/CompareMem.S"
# 54 "/home/core/edk2/MdePkg/Library/BaseMemoryLibOptDxe/AArch64/CompareMem.S"
    .p2align 6
.globl InternalMemCompareMem
InternalMemCompareMem:
    eor x8, x0, x1
    tst x8, #7
    b.ne .Lmisaligned8
    ands x8, x0, #7
    b.ne .Lmutual_align
    add x12, x2, #7
    lsr x12, x12, #3


.Lloop_aligned:
    ldr x3, [x0], #8
    ldr x4, [x1], #8
.Lstart_realigned:
    subs x12, x12, #1
    eor x6, x3, x4
    csinv x7, x6, xzr, ne
    cbz x7, .Lloop_aligned



    cbnz x12, .Lnot_limit


    ands x2, x2, #7
    b.eq .Lnot_limit

    lsl x2, x2, #3
    mov x13, #~0
    lsl x13, x13, x2
    bic x3, x3, x13
    bic x4, x4, x13

    orr x6, x6, x13

.Lnot_limit:
    rev x6, x6
    rev x3, x3
    rev x4, x4





    clz x11, x6
    lsl x3, x3, x11
    lsl x4, x4, x11



    lsr x3, x3, #56
    sub x0, x3, x4, lsr #56
    ret

.Lmutual_align:



    bic x0, x0, #7
    bic x1, x1, #7
    add x2, x2, x8
    lsl x8, x8, #3
    ldr x3, [x0], #8
    neg x8, x8
    ldr x4, [x1], #8
    mov x9, #~0


    lsr x9, x9, x8
    add x12, x2, #7
    orr x3, x3, x9
    orr x4, x4, x9
    lsr x12, x12, #3
    b .Lstart_realigned

    .p2align 6
.Lmisaligned8:
    sub x2, x2, #1
1:

    ldrb w3, [x0], #1
    ldrb w4, [x1], #1
    subs x2, x2, #1
    ccmp w3, w4, #0, cs
    b.eq 1b
    sub x0, x3, x4
    ret
