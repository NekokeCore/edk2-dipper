# 1 "/home/core/edk2/ArmPkg/Drivers/ArmGic/GicV3/AArch64/ArmGicV3.S"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/aarch64-linux-gnu/include/stdc-predef.h" 1 3
# 32 "<command-line>" 2
# 1 "/home/core/edk2-dipper/workspace/Build/XiaomiMI8Pkg/DEBUG_GCC5/AARCH64/ArmPkg/Drivers/ArmGic/ArmGicLib/DEBUG/AutoGen.h" 1
# 16 "/home/core/edk2-dipper/workspace/Build/XiaomiMI8Pkg/DEBUG_GCC5/AARCH64/ArmPkg/Drivers/ArmGic/ArmGicLib/DEBUG/AutoGen.h"
# 1 "/home/core/edk2/MdePkg/Include/PiPei.h" 1
# 17 "/home/core/edk2/MdePkg/Include/PiPei.h"
# 1 "/home/core/edk2/MdePkg/Include/Uefi/UefiBaseType.h" 1
# 15 "/home/core/edk2/MdePkg/Include/Uefi/UefiBaseType.h"
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
# 16 "/home/core/edk2/MdePkg/Include/Uefi/UefiBaseType.h" 2
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
# 18 "/home/core/edk2/MdePkg/Include/PiPei.h" 2
# 1 "/home/core/edk2/MdePkg/Include/Pi/PiPeiCis.h" 1
# 15 "/home/core/edk2/MdePkg/Include/Pi/PiPeiCis.h"
# 1 "/home/core/edk2/MdePkg/Include/Uefi/UefiMultiPhase.h" 1
# 34 "/home/core/edk2/MdePkg/Include/Uefi/UefiMultiPhase.h"
# 1 "/home/core/edk2/MdePkg/Include/Guid/WinCertificate.h" 1
# 24 "/home/core/edk2/MdePkg/Include/Guid/WinCertificate.h"
typedef struct {




  UINT32 dwLength;




  UINT16 wRevision;





  UINT16 wCertificateType;






} WIN_CERTIFICATE;
# 58 "/home/core/edk2/MdePkg/Include/Guid/WinCertificate.h"
typedef struct {
  EFI_GUID HashType;
  UINT8 PublicKey[256];
  UINT8 Signature[256];
} EFI_CERT_BLOCK_RSA_2048_SHA256;





typedef struct {




  WIN_CERTIFICATE Hdr;




  EFI_GUID CertType;






  UINT8 CertData[1];
} WIN_CERTIFICATE_UEFI_GUID;
# 97 "/home/core/edk2/MdePkg/Include/Guid/WinCertificate.h"
typedef struct {




  WIN_CERTIFICATE Hdr;




  EFI_GUID HashAlgorithm;
# 118 "/home/core/edk2/MdePkg/Include/Guid/WinCertificate.h"
} WIN_CERTIFICATE_EFI_PKCS1_15;

extern EFI_GUID gEfiCertTypeRsa2048Sha256Guid;
# 35 "/home/core/edk2/MdePkg/Include/Uefi/UefiMultiPhase.h" 2



typedef enum {



  EfiReservedMemoryType,




  EfiLoaderCode,




  EfiLoaderData,



  EfiBootServicesCode,




  EfiBootServicesData,



  EfiRuntimeServicesCode,




  EfiRuntimeServicesData,



  EfiConventionalMemory,



  EfiUnusableMemory,



  EfiACPIReclaimMemory,



  EfiACPIMemoryNVS,




  EfiMemoryMappedIO,




  EfiMemoryMappedIOPortSpace,



  EfiPalCode,




  EfiPersistentMemory,
  EfiMaxMemoryType
} EFI_MEMORY_TYPE;




typedef enum {






  EfiResetCold,





  EfiResetWarm,





  EfiResetShutdown,







  EfiResetPlatformSpecific
} EFI_RESET_TYPE;




typedef struct {





  UINT64 Signature;






  UINT32 Revision;



  UINT32 HeaderSize;




  UINT32 CRC32;



  UINT32 Reserved;
} EFI_TABLE_HEADER;
# 189 "/home/core/edk2/MdePkg/Include/Uefi/UefiMultiPhase.h"
typedef struct {






  UINT64 MonotonicCount;
# 205 "/home/core/edk2/MdePkg/Include/Uefi/UefiMultiPhase.h"
  WIN_CERTIFICATE_UEFI_GUID AuthInfo;
} EFI_VARIABLE_AUTHENTICATION;
# 216 "/home/core/edk2/MdePkg/Include/Uefi/UefiMultiPhase.h"
typedef struct {




  EFI_TIME TimeStamp;



  WIN_CERTIFICATE_UEFI_GUID AuthInfo;
 } EFI_VARIABLE_AUTHENTICATION_2;
# 16 "/home/core/edk2/MdePkg/Include/Pi/PiPeiCis.h" 2
# 1 "/home/core/edk2/MdePkg/Include/Pi/PiMultiPhase.h" 1
# 15 "/home/core/edk2/MdePkg/Include/Pi/PiMultiPhase.h"
# 1 "/home/core/edk2/MdePkg/Include/Pi/PiFirmwareVolume.h" 1
# 18 "/home/core/edk2/MdePkg/Include/Pi/PiFirmwareVolume.h"
typedef UINT32 EFI_FV_FILE_ATTRIBUTES;
# 30 "/home/core/edk2/MdePkg/Include/Pi/PiFirmwareVolume.h"
typedef UINT32 EFI_FVB_ATTRIBUTES_2;
# 85 "/home/core/edk2/MdePkg/Include/Pi/PiFirmwareVolume.h"
typedef struct {



  UINT32 NumBlocks;



  UINT32 Length;
} EFI_FV_BLOCK_MAP_ENTRY;




typedef struct {




  UINT8 ZeroVector[16];



  EFI_GUID FileSystemGuid;



  UINT64 FvLength;



  UINT32 Signature;



  EFI_FVB_ATTRIBUTES_2 Attributes;



  UINT16 HeaderLength;



  UINT16 Checksum;




  UINT16 ExtHeaderOffset;



  UINT8 Reserved[1];




  UINT8 Revision;




  EFI_FV_BLOCK_MAP_ENTRY BlockMap[1];
} EFI_FIRMWARE_VOLUME_HEADER;
# 160 "/home/core/edk2/MdePkg/Include/Pi/PiFirmwareVolume.h"
typedef struct {



  EFI_GUID FvName;



  UINT32 ExtHeaderSize;
} EFI_FIRMWARE_VOLUME_EXT_HEADER;




typedef struct {



  UINT16 ExtEntrySize;



  UINT16 ExtEntryType;
} EFI_FIRMWARE_VOLUME_EXT_ENTRY;





typedef struct {



  EFI_FIRMWARE_VOLUME_EXT_ENTRY Hdr;




  UINT32 TypeMask;





} EFI_FIRMWARE_VOLUME_EXT_ENTRY_OEM_TYPE;







typedef struct {



  EFI_FIRMWARE_VOLUME_EXT_ENTRY Hdr;



  EFI_GUID FormatType;





} EFI_FIRMWARE_VOLUME_EXT_ENTRY_GUID_TYPE;







typedef struct {



  EFI_FIRMWARE_VOLUME_EXT_ENTRY Hdr;





  UINT32 UsedSize;
} EFI_FIRMWARE_VOLUME_EXT_ENTRY_USED_SIZE_TYPE;
# 16 "/home/core/edk2/MdePkg/Include/Pi/PiMultiPhase.h" 2
# 1 "/home/core/edk2/MdePkg/Include/Pi/PiFirmwareFile.h" 1
# 20 "/home/core/edk2/MdePkg/Include/Pi/PiFirmwareFile.h"
typedef union {
  struct {





    UINT8 Header;
# 37 "/home/core/edk2/MdePkg/Include/Pi/PiFirmwareFile.h"
    UINT8 File;
  } Checksum;



  UINT16 Checksum16;
} EFI_FFS_INTEGRITY_CHECK;







typedef UINT8 EFI_FV_FILETYPE;
typedef UINT8 EFI_FFS_FILE_ATTRIBUTES;
typedef UINT8 EFI_FFS_FILE_STATE;
# 108 "/home/core/edk2/MdePkg/Include/Pi/PiFirmwareFile.h"
typedef struct {



  EFI_GUID Name;



  EFI_FFS_INTEGRITY_CHECK IntegrityCheck;



  EFI_FV_FILETYPE Type;



  EFI_FFS_FILE_ATTRIBUTES Attributes;



  UINT8 Size[3];



  EFI_FFS_FILE_STATE State;
} EFI_FFS_FILE_HEADER;

typedef struct {





  EFI_GUID Name;




  EFI_FFS_INTEGRITY_CHECK IntegrityCheck;




  EFI_FV_FILETYPE Type;




  EFI_FFS_FILE_ATTRIBUTES Attributes;
# 165 "/home/core/edk2/MdePkg/Include/Pi/PiFirmwareFile.h"
  UINT8 Size[3];




  EFI_FFS_FILE_STATE State;





  UINT64 ExtendedSize;
} EFI_FFS_FILE_HEADER2;
# 195 "/home/core/edk2/MdePkg/Include/Pi/PiFirmwareFile.h"
typedef UINT8 EFI_SECTION_TYPE;
# 232 "/home/core/edk2/MdePkg/Include/Pi/PiFirmwareFile.h"
typedef struct {




  UINT8 Size[3];
  EFI_SECTION_TYPE Type;



} EFI_COMMON_SECTION_HEADER;

typedef struct {




  UINT8 Size[3];

  EFI_SECTION_TYPE Type;





  UINT32 ExtendedSize;
} EFI_COMMON_SECTION_HEADER2;





typedef EFI_COMMON_SECTION_HEADER EFI_COMPATIBILITY16_SECTION;
typedef EFI_COMMON_SECTION_HEADER2 EFI_COMPATIBILITY16_SECTION2;
# 276 "/home/core/edk2/MdePkg/Include/Pi/PiFirmwareFile.h"
typedef struct {



  EFI_COMMON_SECTION_HEADER CommonHeader;



  UINT32 UncompressedLength;



  UINT8 CompressionType;
} EFI_COMPRESSION_SECTION;

typedef struct {



  EFI_COMMON_SECTION_HEADER2 CommonHeader;



  UINT32 UncompressedLength;



  UINT8 CompressionType;
} EFI_COMPRESSION_SECTION2;
# 315 "/home/core/edk2/MdePkg/Include/Pi/PiFirmwareFile.h"
typedef EFI_COMMON_SECTION_HEADER EFI_DISPOSABLE_SECTION;
typedef EFI_COMMON_SECTION_HEADER2 EFI_DISPOSABLE_SECTION2;




typedef EFI_COMMON_SECTION_HEADER EFI_DXE_DEPEX_SECTION;
typedef EFI_COMMON_SECTION_HEADER2 EFI_DXE_DEPEX_SECTION2;




typedef EFI_COMMON_SECTION_HEADER EFI_FIRMWARE_VOLUME_IMAGE_SECTION;
typedef EFI_COMMON_SECTION_HEADER2 EFI_FIRMWARE_VOLUME_IMAGE_SECTION2;




typedef struct {



  EFI_COMMON_SECTION_HEADER CommonHeader;



  EFI_GUID SubTypeGuid;
} EFI_FREEFORM_SUBTYPE_GUID_SECTION;

typedef struct {



  EFI_COMMON_SECTION_HEADER2 CommonHeader;



  EFI_GUID SubTypeGuid;
} EFI_FREEFORM_SUBTYPE_GUID_SECTION2;
# 363 "/home/core/edk2/MdePkg/Include/Pi/PiFirmwareFile.h"
typedef struct {



  EFI_COMMON_SECTION_HEADER CommonHeader;



  EFI_GUID SectionDefinitionGuid;



  UINT16 DataOffset;



  UINT16 Attributes;
} EFI_GUID_DEFINED_SECTION;

typedef struct {



  EFI_COMMON_SECTION_HEADER2 CommonHeader;



  EFI_GUID SectionDefinitionGuid;



  UINT16 DataOffset;



  UINT16 Attributes;
} EFI_GUID_DEFINED_SECTION2;




typedef EFI_COMMON_SECTION_HEADER EFI_PE32_SECTION;
typedef EFI_COMMON_SECTION_HEADER2 EFI_PE32_SECTION2;




typedef EFI_COMMON_SECTION_HEADER EFI_PEI_DEPEX_SECTION;
typedef EFI_COMMON_SECTION_HEADER2 EFI_PEI_DEPEX_SECTION2;
# 422 "/home/core/edk2/MdePkg/Include/Pi/PiFirmwareFile.h"
typedef EFI_COMMON_SECTION_HEADER EFI_PIC_SECTION;
typedef EFI_COMMON_SECTION_HEADER2 EFI_PIC_SECTION2;




typedef EFI_COMMON_SECTION_HEADER EFI_TE_SECTION;
typedef EFI_COMMON_SECTION_HEADER2 EFI_TE_SECTION2;




typedef EFI_COMMON_SECTION_HEADER EFI_RAW_SECTION;
typedef EFI_COMMON_SECTION_HEADER2 EFI_RAW_SECTION2;
# 445 "/home/core/edk2/MdePkg/Include/Pi/PiFirmwareFile.h"
typedef EFI_COMMON_SECTION_HEADER EFI_SMM_DEPEX_SECTION;
typedef EFI_COMMON_SECTION_HEADER2 EFI_SMM_DEPEX_SECTION2;





typedef struct {
  EFI_COMMON_SECTION_HEADER CommonHeader;




  CHAR16 FileNameString[1];
} EFI_USER_INTERFACE_SECTION;

typedef struct {
  EFI_COMMON_SECTION_HEADER2 CommonHeader;
  CHAR16 FileNameString[1];
} EFI_USER_INTERFACE_SECTION2;





typedef struct {
  EFI_COMMON_SECTION_HEADER CommonHeader;
  UINT16 BuildNumber;




  CHAR16 VersionString[1];
} EFI_VERSION_SECTION;

typedef struct {
  EFI_COMMON_SECTION_HEADER2 CommonHeader;




  UINT16 BuildNumber;
  CHAR16 VersionString[1];
} EFI_VERSION_SECTION2;
# 17 "/home/core/edk2/MdePkg/Include/Pi/PiMultiPhase.h" 2
# 1 "/home/core/edk2/MdePkg/Include/Pi/PiBootMode.h" 1
# 18 "/home/core/edk2/MdePkg/Include/Pi/PiBootMode.h"
typedef UINT32 EFI_BOOT_MODE;
# 18 "/home/core/edk2/MdePkg/Include/Pi/PiMultiPhase.h" 2
# 1 "/home/core/edk2/MdePkg/Include/Pi/PiHob.h" 1
# 36 "/home/core/edk2/MdePkg/Include/Pi/PiHob.h"
typedef struct {



  UINT16 HobType;



  UINT16 HobLength;



  UINT32 Reserved;
} EFI_HOB_GENERIC_HEADER;
# 61 "/home/core/edk2/MdePkg/Include/Pi/PiHob.h"
typedef struct {



  EFI_HOB_GENERIC_HEADER Header;





  UINT32 Version;



  EFI_BOOT_MODE BootMode;




  EFI_PHYSICAL_ADDRESS EfiMemoryTop;



  EFI_PHYSICAL_ADDRESS EfiMemoryBottom;




  EFI_PHYSICAL_ADDRESS EfiFreeMemoryTop;



  EFI_PHYSICAL_ADDRESS EfiFreeMemoryBottom;



  EFI_PHYSICAL_ADDRESS EfiEndOfHobList;
} EFI_HOB_HANDOFF_INFO_TABLE;






typedef struct {







  EFI_GUID Name;






  EFI_PHYSICAL_ADDRESS MemoryBaseAddress;




  UINT64 MemoryLength;






  EFI_MEMORY_TYPE MemoryType;




  UINT8 Reserved[4];
} EFI_HOB_MEMORY_ALLOCATION_HEADER;






typedef struct {



  EFI_HOB_GENERIC_HEADER Header;




  EFI_HOB_MEMORY_ALLOCATION_HEADER AllocDescriptor;




} EFI_HOB_MEMORY_ALLOCATION;







typedef struct {



  EFI_HOB_GENERIC_HEADER Header;




  EFI_HOB_MEMORY_ALLOCATION_HEADER AllocDescriptor;
} EFI_HOB_MEMORY_ALLOCATION_STACK;







typedef struct {



  EFI_HOB_GENERIC_HEADER Header;




  EFI_HOB_MEMORY_ALLOCATION_HEADER AllocDescriptor;
} EFI_HOB_MEMORY_ALLOCATION_BSP_STORE;




typedef struct {



  EFI_HOB_GENERIC_HEADER Header;




  EFI_HOB_MEMORY_ALLOCATION_HEADER MemoryAllocationHeader;




  EFI_GUID ModuleName;




  EFI_PHYSICAL_ADDRESS EntryPoint;
} EFI_HOB_MEMORY_ALLOCATION_MODULE;




typedef UINT32 EFI_RESOURCE_TYPE;
# 242 "/home/core/edk2/MdePkg/Include/Pi/PiHob.h"
typedef UINT32 EFI_RESOURCE_ATTRIBUTE_TYPE;
# 306 "/home/core/edk2/MdePkg/Include/Pi/PiHob.h"
typedef struct {



  EFI_HOB_GENERIC_HEADER Header;




  EFI_GUID Owner;



  EFI_RESOURCE_TYPE ResourceType;



  EFI_RESOURCE_ATTRIBUTE_TYPE ResourceAttribute;



  EFI_PHYSICAL_ADDRESS PhysicalStart;



  UINT64 ResourceLength;
} EFI_HOB_RESOURCE_DESCRIPTOR;





typedef struct {



  EFI_HOB_GENERIC_HEADER Header;



  EFI_GUID Name;



} EFI_HOB_GUID_TYPE;




typedef struct {



  EFI_HOB_GENERIC_HEADER Header;



  EFI_PHYSICAL_ADDRESS BaseAddress;



  UINT64 Length;
} EFI_HOB_FIRMWARE_VOLUME;





typedef struct {



  EFI_HOB_GENERIC_HEADER Header;



  EFI_PHYSICAL_ADDRESS BaseAddress;



  UINT64 Length;



  EFI_GUID FvName;



  EFI_GUID FileName;
} EFI_HOB_FIRMWARE_VOLUME2;





typedef struct {



  EFI_HOB_GENERIC_HEADER Header;



  EFI_PHYSICAL_ADDRESS BaseAddress;



  UINT64 Length;



  UINT32 AuthenticationStatus;




  BOOLEAN ExtractedFv;




  EFI_GUID FvName;




  EFI_GUID FileName;
} EFI_HOB_FIRMWARE_VOLUME3;




typedef struct {



  EFI_HOB_GENERIC_HEADER Header;



  UINT8 SizeOfMemorySpace;



  UINT8 SizeOfIoSpace;



  UINT8 Reserved[6];
} EFI_HOB_CPU;





typedef struct {



  EFI_HOB_GENERIC_HEADER Header;
} EFI_HOB_MEMORY_POOL;
# 475 "/home/core/edk2/MdePkg/Include/Pi/PiHob.h"
typedef struct {



  EFI_HOB_GENERIC_HEADER Header;






  EFI_PHYSICAL_ADDRESS BaseAddress;
  UINT64 Length;
} EFI_HOB_UEFI_CAPSULE;




typedef union {
  EFI_HOB_GENERIC_HEADER *Header;
  EFI_HOB_HANDOFF_INFO_TABLE *HandoffInformationTable;
  EFI_HOB_MEMORY_ALLOCATION *MemoryAllocation;
  EFI_HOB_MEMORY_ALLOCATION_BSP_STORE *MemoryAllocationBspStore;
  EFI_HOB_MEMORY_ALLOCATION_STACK *MemoryAllocationStack;
  EFI_HOB_MEMORY_ALLOCATION_MODULE *MemoryAllocationModule;
  EFI_HOB_RESOURCE_DESCRIPTOR *ResourceDescriptor;
  EFI_HOB_GUID_TYPE *Guid;
  EFI_HOB_FIRMWARE_VOLUME *FirmwareVolume;
  EFI_HOB_FIRMWARE_VOLUME2 *FirmwareVolume2;
  EFI_HOB_FIRMWARE_VOLUME3 *FirmwareVolume3;
  EFI_HOB_CPU *Cpu;
  EFI_HOB_MEMORY_POOL *Pool;
  EFI_HOB_UEFI_CAPSULE *Capsule;
  UINT8 *Raw;
} EFI_PEI_HOB_POINTERS;
# 19 "/home/core/edk2/MdePkg/Include/Pi/PiMultiPhase.h" 2
# 1 "/home/core/edk2/MdePkg/Include/Pi/PiDependency.h" 1
# 20 "/home/core/edk2/MdePkg/Include/Pi/PiMultiPhase.h" 2
# 1 "/home/core/edk2/MdePkg/Include/Pi/PiStatusCode.h" 1
# 19 "/home/core/edk2/MdePkg/Include/Pi/PiStatusCode.h"
# 1 "/home/core/edk2/MdePkg/Include/Protocol/DebugSupport.h" 1
# 19 "/home/core/edk2/MdePkg/Include/Protocol/DebugSupport.h"
# 1 "/home/core/edk2/MdePkg/Include/IndustryStandard/PeImage.h" 1
# 55 "/home/core/edk2/MdePkg/Include/IndustryStandard/PeImage.h"
typedef struct {
  UINT16 e_magic;
  UINT16 e_cblp;
  UINT16 e_cp;
  UINT16 e_crlc;
  UINT16 e_cparhdr;
  UINT16 e_minalloc;
  UINT16 e_maxalloc;
  UINT16 e_ss;
  UINT16 e_sp;
  UINT16 e_csum;
  UINT16 e_ip;
  UINT16 e_cs;
  UINT16 e_lfarlc;
  UINT16 e_ovno;
  UINT16 e_res[4];
  UINT16 e_oemid;
  UINT16 e_oeminfo;
  UINT16 e_res2[10];
  UINT32 e_lfanew;
} EFI_IMAGE_DOS_HEADER;




typedef struct {
  UINT16 Machine;
  UINT16 NumberOfSections;
  UINT32 TimeDateStamp;
  UINT32 PointerToSymbolTable;
  UINT32 NumberOfSymbols;
  UINT16 SizeOfOptionalHeader;
  UINT16 Characteristics;
} EFI_IMAGE_FILE_HEADER;
# 112 "/home/core/edk2/MdePkg/Include/IndustryStandard/PeImage.h"
typedef struct {
  UINT32 VirtualAddress;
  UINT32 Size;
} EFI_IMAGE_DATA_DIRECTORY;
# 145 "/home/core/edk2/MdePkg/Include/IndustryStandard/PeImage.h"
typedef struct {



  UINT16 Magic;
  UINT8 MajorLinkerVersion;
  UINT8 MinorLinkerVersion;
  UINT32 SizeOfCode;
  UINT32 SizeOfInitializedData;
  UINT32 SizeOfUninitializedData;
  UINT32 AddressOfEntryPoint;
  UINT32 BaseOfCode;
  UINT32 BaseOfData;



  UINT32 ImageBase;
  UINT32 SectionAlignment;
  UINT32 FileAlignment;
  UINT16 MajorOperatingSystemVersion;
  UINT16 MinorOperatingSystemVersion;
  UINT16 MajorImageVersion;
  UINT16 MinorImageVersion;
  UINT16 MajorSubsystemVersion;
  UINT16 MinorSubsystemVersion;
  UINT32 Win32VersionValue;
  UINT32 SizeOfImage;
  UINT32 SizeOfHeaders;
  UINT32 CheckSum;
  UINT16 Subsystem;
  UINT16 DllCharacteristics;
  UINT32 SizeOfStackReserve;
  UINT32 SizeOfStackCommit;
  UINT32 SizeOfHeapReserve;
  UINT32 SizeOfHeapCommit;
  UINT32 LoaderFlags;
  UINT32 NumberOfRvaAndSizes;
  EFI_IMAGE_DATA_DIRECTORY DataDirectory[16];
} EFI_IMAGE_OPTIONAL_HEADER32;
# 196 "/home/core/edk2/MdePkg/Include/IndustryStandard/PeImage.h"
typedef struct {



  UINT16 Magic;
  UINT8 MajorLinkerVersion;
  UINT8 MinorLinkerVersion;
  UINT32 SizeOfCode;
  UINT32 SizeOfInitializedData;
  UINT32 SizeOfUninitializedData;
  UINT32 AddressOfEntryPoint;
  UINT32 BaseOfCode;



  UINT64 ImageBase;
  UINT32 SectionAlignment;
  UINT32 FileAlignment;
  UINT16 MajorOperatingSystemVersion;
  UINT16 MinorOperatingSystemVersion;
  UINT16 MajorImageVersion;
  UINT16 MinorImageVersion;
  UINT16 MajorSubsystemVersion;
  UINT16 MinorSubsystemVersion;
  UINT32 Win32VersionValue;
  UINT32 SizeOfImage;
  UINT32 SizeOfHeaders;
  UINT32 CheckSum;
  UINT16 Subsystem;
  UINT16 DllCharacteristics;
  UINT64 SizeOfStackReserve;
  UINT64 SizeOfStackCommit;
  UINT64 SizeOfHeapReserve;
  UINT64 SizeOfHeapCommit;
  UINT32 LoaderFlags;
  UINT32 NumberOfRvaAndSizes;
  EFI_IMAGE_DATA_DIRECTORY DataDirectory[16];
} EFI_IMAGE_OPTIONAL_HEADER64;






typedef struct {
  UINT32 Signature;
  EFI_IMAGE_FILE_HEADER FileHeader;
  EFI_IMAGE_OPTIONAL_HEADER32 OptionalHeader;
} EFI_IMAGE_NT_HEADERS32;







typedef struct {
  UINT32 Signature;
  EFI_IMAGE_FILE_HEADER FileHeader;
  EFI_IMAGE_OPTIONAL_HEADER64 OptionalHeader;
} EFI_IMAGE_NT_HEADERS64;
# 278 "/home/core/edk2/MdePkg/Include/IndustryStandard/PeImage.h"
typedef struct {
  UINT8 Name[8];
  union {
    UINT32 PhysicalAddress;
    UINT32 VirtualSize;
  } Misc;
  UINT32 VirtualAddress;
  UINT32 SizeOfRawData;
  UINT32 PointerToRawData;
  UINT32 PointerToRelocations;
  UINT32 PointerToLinenumbers;
  UINT16 NumberOfRelocations;
  UINT16 NumberOfLinenumbers;
  UINT32 Characteristics;
} EFI_IMAGE_SECTION_HEADER;
# 428 "/home/core/edk2/MdePkg/Include/IndustryStandard/PeImage.h"
typedef struct {
  UINT32 VirtualAddress;
  UINT32 SymbolTableIndex;
  UINT16 Type;
} EFI_IMAGE_RELOCATION;
# 476 "/home/core/edk2/MdePkg/Include/IndustryStandard/PeImage.h"
typedef struct {
  UINT32 VirtualAddress;
  UINT32 SizeOfBlock;
} EFI_IMAGE_BASE_RELOCATION;
# 511 "/home/core/edk2/MdePkg/Include/IndustryStandard/PeImage.h"
typedef struct {
  union {
    UINT32 SymbolTableIndex;
    UINT32 VirtualAddress;
  } Type;
  UINT16 Linenumber;
} EFI_IMAGE_LINENUMBER;
# 537 "/home/core/edk2/MdePkg/Include/IndustryStandard/PeImage.h"
typedef struct {
  UINT8 Name[16];
  UINT8 Date[12];
  UINT8 UserID[6];
  UINT8 GroupID[6];
  UINT8 Mode[8];
  UINT8 Size[10];
  UINT8 EndHeader[2];
} EFI_IMAGE_ARCHIVE_MEMBER_HEADER;
# 560 "/home/core/edk2/MdePkg/Include/IndustryStandard/PeImage.h"
typedef struct {
  UINT32 Characteristics;
  UINT32 TimeDateStamp;
  UINT16 MajorVersion;
  UINT16 MinorVersion;
  UINT32 Name;
  UINT32 Base;
  UINT32 NumberOfFunctions;
  UINT32 NumberOfNames;
  UINT32 AddressOfFunctions;
  UINT32 AddressOfNames;
  UINT32 AddressOfNameOrdinals;
} EFI_IMAGE_EXPORT_DIRECTORY;




typedef struct {
  UINT16 Hint;
  UINT8 Name[1];
} EFI_IMAGE_IMPORT_BY_NAME;




typedef struct {
  union {
    UINT32 Function;
    UINT32 Ordinal;
    EFI_IMAGE_IMPORT_BY_NAME *AddressOfData;
  } u1;
} EFI_IMAGE_THUNK_DATA;
# 600 "/home/core/edk2/MdePkg/Include/IndustryStandard/PeImage.h"
typedef struct {
  UINT32 Characteristics;
  UINT32 TimeDateStamp;
  UINT32 ForwarderChain;
  UINT32 Name;
  EFI_IMAGE_THUNK_DATA *FirstThunk;
} EFI_IMAGE_IMPORT_DESCRIPTOR;





typedef struct {
  UINT32 Characteristics;
  UINT32 TimeDateStamp;
  UINT16 MajorVersion;
  UINT16 MinorVersion;
  UINT32 Type;
  UINT32 SizeOfData;
  UINT32 RVA;
  UINT32 FileOffset;
} EFI_IMAGE_DEBUG_DIRECTORY_ENTRY;







typedef struct {
  UINT32 Signature;
  UINT32 Unknown;
  UINT32 Unknown2;
  UINT32 Unknown3;



} EFI_IMAGE_DEBUG_CODEVIEW_NB10_ENTRY;





typedef struct {
  UINT32 Signature;
  UINT32 Unknown;
  UINT32 Unknown2;
  UINT32 Unknown3;
  UINT32 Unknown4;
  UINT32 Unknown5;



} EFI_IMAGE_DEBUG_CODEVIEW_RSDS_ENTRY;






typedef struct {
  UINT32 Signature;
  GUID MachOUuid;



} EFI_IMAGE_DEBUG_CODEVIEW_MTOC_ENTRY;




typedef struct {
  UINT32 Characteristics;
  UINT32 TimeDateStamp;
  UINT16 MajorVersion;
  UINT16 MinorVersion;
  UINT16 NumberOfNamedEntries;
  UINT16 NumberOfIdEntries;



} EFI_IMAGE_RESOURCE_DIRECTORY;




typedef struct {
  union {
    struct {
      UINT32 NameOffset:31;
      UINT32 NameIsString:1;
    } s;
    UINT32 Id;
  } u1;
  union {
    UINT32 OffsetToData;
    struct {
      UINT32 OffsetToDirectory:31;
      UINT32 DataIsDirectory:1;
    } s;
  } u2;
} EFI_IMAGE_RESOURCE_DIRECTORY_ENTRY;




typedef struct {
  UINT16 Length;
  CHAR16 String[1];
} EFI_IMAGE_RESOURCE_DIRECTORY_STRING;




typedef struct {
  UINT32 OffsetToData;
  UINT32 Size;
  UINT32 CodePage;
  UINT32 Reserved;
} EFI_IMAGE_RESOURCE_DATA_ENTRY;




typedef struct {
  UINT16 Signature;
  UINT16 Machine;
  UINT8 NumberOfSections;
  UINT8 Subsystem;
  UINT16 StrippedSize;
  UINT32 AddressOfEntryPoint;
  UINT32 BaseOfCode;
  UINT64 ImageBase;
  EFI_IMAGE_DATA_DIRECTORY DataDirectory[2];
} EFI_TE_IMAGE_HEADER;
# 749 "/home/core/edk2/MdePkg/Include/IndustryStandard/PeImage.h"
typedef union {
  EFI_IMAGE_NT_HEADERS32 Pe32;
  EFI_IMAGE_NT_HEADERS64 Pe32Plus;
  EFI_TE_IMAGE_HEADER Te;
} EFI_IMAGE_OPTIONAL_HEADER_UNION;

typedef union {
  EFI_IMAGE_NT_HEADERS32 *Pe32;
  EFI_IMAGE_NT_HEADERS64 *Pe32Plus;
  EFI_TE_IMAGE_HEADER *Te;
  EFI_IMAGE_OPTIONAL_HEADER_UNION *Union;
} EFI_IMAGE_OPTIONAL_HEADER_PTR_UNION;
# 20 "/home/core/edk2/MdePkg/Include/Protocol/DebugSupport.h" 2

typedef struct _EFI_DEBUG_SUPPORT_PROTOCOL EFI_DEBUG_SUPPORT_PROTOCOL;
# 35 "/home/core/edk2/MdePkg/Include/Protocol/DebugSupport.h"
typedef INTN EFI_EXCEPTION_TYPE;
# 62 "/home/core/edk2/MdePkg/Include/Protocol/DebugSupport.h"
typedef struct {
  UINT16 Fcw;
  UINT16 Fsw;
  UINT16 Ftw;
  UINT16 Opcode;
  UINT32 Eip;
  UINT16 Cs;
  UINT16 Reserved1;
  UINT32 DataOffset;
  UINT16 Ds;
  UINT8 Reserved2[10];
  UINT8 St0Mm0[10], Reserved3[6];
  UINT8 St1Mm1[10], Reserved4[6];
  UINT8 St2Mm2[10], Reserved5[6];
  UINT8 St3Mm3[10], Reserved6[6];
  UINT8 St4Mm4[10], Reserved7[6];
  UINT8 St5Mm5[10], Reserved8[6];
  UINT8 St6Mm6[10], Reserved9[6];
  UINT8 St7Mm7[10], Reserved10[6];
  UINT8 Xmm0[16];
  UINT8 Xmm1[16];
  UINT8 Xmm2[16];
  UINT8 Xmm3[16];
  UINT8 Xmm4[16];
  UINT8 Xmm5[16];
  UINT8 Xmm6[16];
  UINT8 Xmm7[16];
  UINT8 Reserved11[14 * 16];
} EFI_FX_SAVE_STATE_IA32;




typedef struct {
  UINT32 ExceptionData;
  EFI_FX_SAVE_STATE_IA32 FxSaveState;
  UINT32 Dr0;
  UINT32 Dr1;
  UINT32 Dr2;
  UINT32 Dr3;
  UINT32 Dr6;
  UINT32 Dr7;
  UINT32 Cr0;
  UINT32 Cr1;
  UINT32 Cr2;
  UINT32 Cr3;
  UINT32 Cr4;
  UINT32 Eflags;
  UINT32 Ldtr;
  UINT32 Tr;
  UINT32 Gdtr[2];
  UINT32 Idtr[2];
  UINT32 Eip;
  UINT32 Gs;
  UINT32 Fs;
  UINT32 Es;
  UINT32 Ds;
  UINT32 Cs;
  UINT32 Ss;
  UINT32 Edi;
  UINT32 Esi;
  UINT32 Ebp;
  UINT32 Esp;
  UINT32 Ebx;
  UINT32 Edx;
  UINT32 Ecx;
  UINT32 Eax;
} EFI_SYSTEM_CONTEXT_IA32;
# 156 "/home/core/edk2/MdePkg/Include/Protocol/DebugSupport.h"
typedef struct {
  UINT16 Fcw;
  UINT16 Fsw;
  UINT16 Ftw;
  UINT16 Opcode;
  UINT64 Rip;
  UINT64 DataOffset;
  UINT8 Reserved1[8];
  UINT8 St0Mm0[10], Reserved2[6];
  UINT8 St1Mm1[10], Reserved3[6];
  UINT8 St2Mm2[10], Reserved4[6];
  UINT8 St3Mm3[10], Reserved5[6];
  UINT8 St4Mm4[10], Reserved6[6];
  UINT8 St5Mm5[10], Reserved7[6];
  UINT8 St6Mm6[10], Reserved8[6];
  UINT8 St7Mm7[10], Reserved9[6];
  UINT8 Xmm0[16];
  UINT8 Xmm1[16];
  UINT8 Xmm2[16];
  UINT8 Xmm3[16];
  UINT8 Xmm4[16];
  UINT8 Xmm5[16];
  UINT8 Xmm6[16];
  UINT8 Xmm7[16];



  UINT8 Reserved11[14 * 16];
} EFI_FX_SAVE_STATE_X64;




typedef struct {
  UINT64 ExceptionData;
  EFI_FX_SAVE_STATE_X64 FxSaveState;
  UINT64 Dr0;
  UINT64 Dr1;
  UINT64 Dr2;
  UINT64 Dr3;
  UINT64 Dr6;
  UINT64 Dr7;
  UINT64 Cr0;
  UINT64 Cr1;
  UINT64 Cr2;
  UINT64 Cr3;
  UINT64 Cr4;
  UINT64 Cr8;
  UINT64 Rflags;
  UINT64 Ldtr;
  UINT64 Tr;
  UINT64 Gdtr[2];
  UINT64 Idtr[2];
  UINT64 Rip;
  UINT64 Gs;
  UINT64 Fs;
  UINT64 Es;
  UINT64 Ds;
  UINT64 Cs;
  UINT64 Ss;
  UINT64 Rdi;
  UINT64 Rsi;
  UINT64 Rbp;
  UINT64 Rsp;
  UINT64 Rbx;
  UINT64 Rdx;
  UINT64 Rcx;
  UINT64 Rax;
  UINT64 R8;
  UINT64 R9;
  UINT64 R10;
  UINT64 R11;
  UINT64 R12;
  UINT64 R13;
  UINT64 R14;
  UINT64 R15;
} EFI_SYSTEM_CONTEXT_X64;
# 282 "/home/core/edk2/MdePkg/Include/Protocol/DebugSupport.h"
typedef struct {




  UINT64 Reserved;
  UINT64 R1;
  UINT64 R2;
  UINT64 R3;
  UINT64 R4;
  UINT64 R5;
  UINT64 R6;
  UINT64 R7;
  UINT64 R8;
  UINT64 R9;
  UINT64 R10;
  UINT64 R11;
  UINT64 R12;
  UINT64 R13;
  UINT64 R14;
  UINT64 R15;
  UINT64 R16;
  UINT64 R17;
  UINT64 R18;
  UINT64 R19;
  UINT64 R20;
  UINT64 R21;
  UINT64 R22;
  UINT64 R23;
  UINT64 R24;
  UINT64 R25;
  UINT64 R26;
  UINT64 R27;
  UINT64 R28;
  UINT64 R29;
  UINT64 R30;
  UINT64 R31;

  UINT64 F2[2];
  UINT64 F3[2];
  UINT64 F4[2];
  UINT64 F5[2];
  UINT64 F6[2];
  UINT64 F7[2];
  UINT64 F8[2];
  UINT64 F9[2];
  UINT64 F10[2];
  UINT64 F11[2];
  UINT64 F12[2];
  UINT64 F13[2];
  UINT64 F14[2];
  UINT64 F15[2];
  UINT64 F16[2];
  UINT64 F17[2];
  UINT64 F18[2];
  UINT64 F19[2];
  UINT64 F20[2];
  UINT64 F21[2];
  UINT64 F22[2];
  UINT64 F23[2];
  UINT64 F24[2];
  UINT64 F25[2];
  UINT64 F26[2];
  UINT64 F27[2];
  UINT64 F28[2];
  UINT64 F29[2];
  UINT64 F30[2];
  UINT64 F31[2];

  UINT64 Pr;

  UINT64 B0;
  UINT64 B1;
  UINT64 B2;
  UINT64 B3;
  UINT64 B4;
  UINT64 B5;
  UINT64 B6;
  UINT64 B7;




  UINT64 ArRsc;
  UINT64 ArBsp;
  UINT64 ArBspstore;
  UINT64 ArRnat;

  UINT64 ArFcr;

  UINT64 ArEflag;
  UINT64 ArCsd;
  UINT64 ArSsd;
  UINT64 ArCflg;
  UINT64 ArFsr;
  UINT64 ArFir;
  UINT64 ArFdr;

  UINT64 ArCcv;

  UINT64 ArUnat;

  UINT64 ArFpsr;

  UINT64 ArPfs;
  UINT64 ArLc;
  UINT64 ArEc;




  UINT64 CrDcr;
  UINT64 CrItm;
  UINT64 CrIva;
  UINT64 CrPta;
  UINT64 CrIpsr;
  UINT64 CrIsr;
  UINT64 CrIip;
  UINT64 CrIfa;
  UINT64 CrItir;
  UINT64 CrIipa;
  UINT64 CrIfs;
  UINT64 CrIim;
  UINT64 CrIha;




  UINT64 Dbr0;
  UINT64 Dbr1;
  UINT64 Dbr2;
  UINT64 Dbr3;
  UINT64 Dbr4;
  UINT64 Dbr5;
  UINT64 Dbr6;
  UINT64 Dbr7;

  UINT64 Ibr0;
  UINT64 Ibr1;
  UINT64 Ibr2;
  UINT64 Ibr3;
  UINT64 Ibr4;
  UINT64 Ibr5;
  UINT64 Ibr6;
  UINT64 Ibr7;




  UINT64 IntNat;

} EFI_SYSTEM_CONTEXT_IPF;
# 457 "/home/core/edk2/MdePkg/Include/Protocol/DebugSupport.h"
typedef struct {
  UINT64 R0;
  UINT64 R1;
  UINT64 R2;
  UINT64 R3;
  UINT64 R4;
  UINT64 R5;
  UINT64 R6;
  UINT64 R7;
  UINT64 Flags;
  UINT64 ControlFlags;
  UINT64 Ip;
} EFI_SYSTEM_CONTEXT_EBC;
# 493 "/home/core/edk2/MdePkg/Include/Protocol/DebugSupport.h"
typedef struct {
  UINT32 R0;
  UINT32 R1;
  UINT32 R2;
  UINT32 R3;
  UINT32 R4;
  UINT32 R5;
  UINT32 R6;
  UINT32 R7;
  UINT32 R8;
  UINT32 R9;
  UINT32 R10;
  UINT32 R11;
  UINT32 R12;
  UINT32 SP;
  UINT32 LR;
  UINT32 PC;
  UINT32 CPSR;
  UINT32 DFSR;
  UINT32 DFAR;
  UINT32 IFSR;
  UINT32 IFAR;
} EFI_SYSTEM_CONTEXT_ARM;
# 531 "/home/core/edk2/MdePkg/Include/Protocol/DebugSupport.h"
typedef struct {

  UINT64 X0;
  UINT64 X1;
  UINT64 X2;
  UINT64 X3;
  UINT64 X4;
  UINT64 X5;
  UINT64 X6;
  UINT64 X7;
  UINT64 X8;
  UINT64 X9;
  UINT64 X10;
  UINT64 X11;
  UINT64 X12;
  UINT64 X13;
  UINT64 X14;
  UINT64 X15;
  UINT64 X16;
  UINT64 X17;
  UINT64 X18;
  UINT64 X19;
  UINT64 X20;
  UINT64 X21;
  UINT64 X22;
  UINT64 X23;
  UINT64 X24;
  UINT64 X25;
  UINT64 X26;
  UINT64 X27;
  UINT64 X28;
  UINT64 FP;
  UINT64 LR;
  UINT64 SP;


  UINT64 V0[2];
  UINT64 V1[2];
  UINT64 V2[2];
  UINT64 V3[2];
  UINT64 V4[2];
  UINT64 V5[2];
  UINT64 V6[2];
  UINT64 V7[2];
  UINT64 V8[2];
  UINT64 V9[2];
  UINT64 V10[2];
  UINT64 V11[2];
  UINT64 V12[2];
  UINT64 V13[2];
  UINT64 V14[2];
  UINT64 V15[2];
  UINT64 V16[2];
  UINT64 V17[2];
  UINT64 V18[2];
  UINT64 V19[2];
  UINT64 V20[2];
  UINT64 V21[2];
  UINT64 V22[2];
  UINT64 V23[2];
  UINT64 V24[2];
  UINT64 V25[2];
  UINT64 V26[2];
  UINT64 V27[2];
  UINT64 V28[2];
  UINT64 V29[2];
  UINT64 V30[2];
  UINT64 V31[2];

  UINT64 ELR;
  UINT64 SPSR;
  UINT64 FPSR;
  UINT64 ESR;
  UINT64 FAR;
} EFI_SYSTEM_CONTEXT_AARCH64;
# 626 "/home/core/edk2/MdePkg/Include/Protocol/DebugSupport.h"
typedef struct {
  UINT64 X0;
  UINT64 X1;
  UINT64 X2;
  UINT64 X3;
  UINT64 X4;
  UINT64 X5;
  UINT64 X6;
  UINT64 X7;
  UINT64 X8;
  UINT64 X9;
  UINT64 X10;
  UINT64 X11;
  UINT64 X12;
  UINT64 X13;
  UINT64 X14;
  UINT64 X15;
  UINT64 X16;
  UINT64 X17;
  UINT64 X18;
  UINT64 X19;
  UINT64 X20;
  UINT64 X21;
  UINT64 X22;
  UINT64 X23;
  UINT64 X24;
  UINT64 X25;
  UINT64 X26;
  UINT64 X27;
  UINT64 X28;
  UINT64 X29;
  UINT64 X30;
  UINT64 X31;
} EFI_SYSTEM_CONTEXT_RISCV64;




typedef union {
  EFI_SYSTEM_CONTEXT_EBC *SystemContextEbc;
  EFI_SYSTEM_CONTEXT_IA32 *SystemContextIa32;
  EFI_SYSTEM_CONTEXT_X64 *SystemContextX64;
  EFI_SYSTEM_CONTEXT_IPF *SystemContextIpf;
  EFI_SYSTEM_CONTEXT_ARM *SystemContextArm;
  EFI_SYSTEM_CONTEXT_AARCH64 *SystemContextAArch64;
  EFI_SYSTEM_CONTEXT_RISCV64 *SystemContextRiscV64;
} EFI_SYSTEM_CONTEXT;
# 685 "/home/core/edk2/MdePkg/Include/Protocol/DebugSupport.h"
typedef
void
( *EFI_EXCEPTION_CALLBACK)(
  EFI_EXCEPTION_TYPE ExceptionType,
  EFI_SYSTEM_CONTEXT SystemContext
  );







typedef
void
( *EFI_PERIODIC_CALLBACK)(
  EFI_SYSTEM_CONTEXT SystemContext
  );




typedef enum {
  IsaIa32 = 0x014c,
  IsaX64 = 0x8664,
  IsaIpf = 0x0200,
  IsaEbc = 0x0EBC,
  IsaArm = 0x01c2,
  IsaAArch64 = 0xAA64
} EFI_INSTRUCTION_SET_ARCHITECTURE;
# 732 "/home/core/edk2/MdePkg/Include/Protocol/DebugSupport.h"
typedef
EFI_STATUS
( *EFI_GET_MAXIMUM_PROCESSOR_INDEX)(
  EFI_DEBUG_SUPPORT_PROTOCOL *This,
  UINTN *MaxProcessorIndex
  );
# 754 "/home/core/edk2/MdePkg/Include/Protocol/DebugSupport.h"
typedef
EFI_STATUS
( *EFI_REGISTER_PERIODIC_CALLBACK)(
  EFI_DEBUG_SUPPORT_PROTOCOL *This,
  UINTN ProcessorIndex,
  EFI_PERIODIC_CALLBACK PeriodicCallback
  );
# 778 "/home/core/edk2/MdePkg/Include/Protocol/DebugSupport.h"
typedef
EFI_STATUS
( *EFI_REGISTER_EXCEPTION_CALLBACK)(
  EFI_DEBUG_SUPPORT_PROTOCOL *This,
  UINTN ProcessorIndex,
  EFI_EXCEPTION_CALLBACK ExceptionCallback,
  EFI_EXCEPTION_TYPE ExceptionType
  );
# 800 "/home/core/edk2/MdePkg/Include/Protocol/DebugSupport.h"
typedef
EFI_STATUS
( *EFI_INVALIDATE_INSTRUCTION_CACHE)(
  EFI_DEBUG_SUPPORT_PROTOCOL *This,
  UINTN ProcessorIndex,
  void *Start,
  UINT64 Length
  );






struct _EFI_DEBUG_SUPPORT_PROTOCOL {



  EFI_INSTRUCTION_SET_ARCHITECTURE Isa;
  EFI_GET_MAXIMUM_PROCESSOR_INDEX GetMaximumProcessorIndex;
  EFI_REGISTER_PERIODIC_CALLBACK RegisterPeriodicCallback;
  EFI_REGISTER_EXCEPTION_CALLBACK RegisterExceptionCallback;
  EFI_INVALIDATE_INSTRUCTION_CACHE InvalidateInstructionCache;
};

extern EFI_GUID gEfiDebugSupportProtocolGuid;
# 20 "/home/core/edk2/MdePkg/Include/Pi/PiStatusCode.h" 2




typedef UINT32 EFI_STATUS_CODE_TYPE;
# 67 "/home/core/edk2/MdePkg/Include/Pi/PiStatusCode.h"
typedef UINT32 EFI_STATUS_CODE_VALUE;
# 84 "/home/core/edk2/MdePkg/Include/Pi/PiStatusCode.h"
typedef struct {



  UINT16 HeaderSize;



  UINT16 Size;



  EFI_GUID Type;
} EFI_STATUS_CODE_DATA;
# 21 "/home/core/edk2/MdePkg/Include/Pi/PiMultiPhase.h" 2
# 1 "/home/core/edk2/MdePkg/Include/Pi/PiS3BootScript.h" 1
# 37 "/home/core/edk2/MdePkg/Include/Pi/PiS3BootScript.h"
typedef enum {
  EfiBootScriptWidthUint8,
  EfiBootScriptWidthUint16,
  EfiBootScriptWidthUint32,
  EfiBootScriptWidthUint64,
  EfiBootScriptWidthFifoUint8,
  EfiBootScriptWidthFifoUint16,
  EfiBootScriptWidthFifoUint32,
  EfiBootScriptWidthFifoUint64,
  EfiBootScriptWidthFillUint8,
  EfiBootScriptWidthFillUint16,
  EfiBootScriptWidthFillUint32,
  EfiBootScriptWidthFillUint64,
  EfiBootScriptWidthMaximum
} EFI_BOOT_SCRIPT_WIDTH;
# 22 "/home/core/edk2/MdePkg/Include/Pi/PiMultiPhase.h" 2
# 109 "/home/core/edk2/MdePkg/Include/Pi/PiMultiPhase.h"
typedef struct {





  EFI_PHYSICAL_ADDRESS PhysicalStart;




  EFI_PHYSICAL_ADDRESS CpuStart;



  UINT64 PhysicalSize;






  UINT64 RegionState;
} EFI_MMRAM_DESCRIPTOR;

typedef EFI_MMRAM_DESCRIPTOR EFI_SMRAM_DESCRIPTOR;

typedef enum {
  EFI_PCD_TYPE_8,
  EFI_PCD_TYPE_16,
  EFI_PCD_TYPE_32,
  EFI_PCD_TYPE_64,
  EFI_PCD_TYPE_BOOL,
  EFI_PCD_TYPE_PTR
} EFI_PCD_TYPE;

typedef struct {




  EFI_PCD_TYPE PcdType;




  UINTN PcdSize;






  CHAR8 *PcdName;
} EFI_PCD_INFO;
# 173 "/home/core/edk2/MdePkg/Include/Pi/PiMultiPhase.h"
typedef
void
( *EFI_AP_PROCEDURE)(
  void *Buffer
  );
# 189 "/home/core/edk2/MdePkg/Include/Pi/PiMultiPhase.h"
typedef
EFI_STATUS
( *EFI_AP_PROCEDURE2)(
  void *ProcedureArgument
);
# 17 "/home/core/edk2/MdePkg/Include/Pi/PiPeiCis.h" 2




typedef void *EFI_PEI_FV_HANDLE;




typedef void *EFI_PEI_FILE_HANDLE;




typedef struct _EFI_PEI_SERVICES EFI_PEI_SERVICES;




typedef struct _EFI_PEI_NOTIFY_DESCRIPTOR EFI_PEI_NOTIFY_DESCRIPTOR;


# 1 "/home/core/edk2/MdePkg/Include/Ppi/CpuIo.h" 1
# 19 "/home/core/edk2/MdePkg/Include/Ppi/CpuIo.h"
typedef struct _EFI_PEI_CPU_IO_PPI EFI_PEI_CPU_IO_PPI;




typedef enum {
  EfiPeiCpuIoWidthUint8,
  EfiPeiCpuIoWidthUint16,
  EfiPeiCpuIoWidthUint32,
  EfiPeiCpuIoWidthUint64,
  EfiPeiCpuIoWidthFifoUint8,
  EfiPeiCpuIoWidthFifoUint16,
  EfiPeiCpuIoWidthFifoUint32,
  EfiPeiCpuIoWidthFifoUint64,
  EfiPeiCpuIoWidthFillUint8,
  EfiPeiCpuIoWidthFillUint16,
  EfiPeiCpuIoWidthFillUint32,
  EfiPeiCpuIoWidthFillUint64,
  EfiPeiCpuIoWidthMaximum
} EFI_PEI_CPU_IO_PPI_WIDTH;
# 55 "/home/core/edk2/MdePkg/Include/Ppi/CpuIo.h"
typedef
EFI_STATUS
( *EFI_PEI_CPU_IO_PPI_IO_MEM)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_PEI_CPU_IO_PPI *This,
  EFI_PEI_CPU_IO_PPI_WIDTH Width,
  UINT64 Address,
  UINTN Count,
  void *Buffer
  );




typedef struct {



  EFI_PEI_CPU_IO_PPI_IO_MEM Read;



  EFI_PEI_CPU_IO_PPI_IO_MEM Write;
} EFI_PEI_CPU_IO_PPI_ACCESS;
# 91 "/home/core/edk2/MdePkg/Include/Ppi/CpuIo.h"
typedef
UINT8
( *EFI_PEI_CPU_IO_PPI_IO_READ8)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_PEI_CPU_IO_PPI *This,
  UINT64 Address
  );
# 110 "/home/core/edk2/MdePkg/Include/Ppi/CpuIo.h"
typedef
UINT16
( *EFI_PEI_CPU_IO_PPI_IO_READ16)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_PEI_CPU_IO_PPI *This,
  UINT64 Address
  );
# 129 "/home/core/edk2/MdePkg/Include/Ppi/CpuIo.h"
typedef
UINT32
( *EFI_PEI_CPU_IO_PPI_IO_READ32)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_PEI_CPU_IO_PPI *This,
  UINT64 Address
  );
# 148 "/home/core/edk2/MdePkg/Include/Ppi/CpuIo.h"
typedef
UINT64
( *EFI_PEI_CPU_IO_PPI_IO_READ64)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_PEI_CPU_IO_PPI *This,
  UINT64 Address
  );
# 166 "/home/core/edk2/MdePkg/Include/Ppi/CpuIo.h"
typedef
void
( *EFI_PEI_CPU_IO_PPI_IO_WRITE8)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_PEI_CPU_IO_PPI *This,
  UINT64 Address,
  UINT8 Data
  );
# 185 "/home/core/edk2/MdePkg/Include/Ppi/CpuIo.h"
typedef
void
( *EFI_PEI_CPU_IO_PPI_IO_WRITE16)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_PEI_CPU_IO_PPI *This,
  UINT64 Address,
  UINT16 Data
  );
# 204 "/home/core/edk2/MdePkg/Include/Ppi/CpuIo.h"
typedef
void
( *EFI_PEI_CPU_IO_PPI_IO_WRITE32)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_PEI_CPU_IO_PPI *This,
  UINT64 Address,
  UINT32 Data
  );
# 223 "/home/core/edk2/MdePkg/Include/Ppi/CpuIo.h"
typedef
void
( *EFI_PEI_CPU_IO_PPI_IO_WRITE64)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_PEI_CPU_IO_PPI *This,
  UINT64 Address,
  UINT64 Data
  );
# 243 "/home/core/edk2/MdePkg/Include/Ppi/CpuIo.h"
typedef
UINT8
( *EFI_PEI_CPU_IO_PPI_MEM_READ8)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_PEI_CPU_IO_PPI *This,
  UINT64 Address
  );
# 262 "/home/core/edk2/MdePkg/Include/Ppi/CpuIo.h"
typedef
UINT16
( *EFI_PEI_CPU_IO_PPI_MEM_READ16)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_PEI_CPU_IO_PPI *This,
  UINT64 Address
  );
# 281 "/home/core/edk2/MdePkg/Include/Ppi/CpuIo.h"
typedef
UINT32
( *EFI_PEI_CPU_IO_PPI_MEM_READ32)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_PEI_CPU_IO_PPI *This,
  UINT64 Address
  );
# 300 "/home/core/edk2/MdePkg/Include/Ppi/CpuIo.h"
typedef
UINT64
( *EFI_PEI_CPU_IO_PPI_MEM_READ64)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_PEI_CPU_IO_PPI *This,
  UINT64 Address
  );
# 318 "/home/core/edk2/MdePkg/Include/Ppi/CpuIo.h"
typedef
void
( *EFI_PEI_CPU_IO_PPI_MEM_WRITE8)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_PEI_CPU_IO_PPI *This,
  UINT64 Address,
  UINT8 Data
  );
# 337 "/home/core/edk2/MdePkg/Include/Ppi/CpuIo.h"
typedef
void
( *EFI_PEI_CPU_IO_PPI_MEM_WRITE16)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_PEI_CPU_IO_PPI *This,
  UINT64 Address,
  UINT16 Data
  );
# 356 "/home/core/edk2/MdePkg/Include/Ppi/CpuIo.h"
typedef
void
( *EFI_PEI_CPU_IO_PPI_MEM_WRITE32)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_PEI_CPU_IO_PPI *This,
  UINT64 Address,
  UINT32 Data
  );
# 375 "/home/core/edk2/MdePkg/Include/Ppi/CpuIo.h"
typedef
void
( *EFI_PEI_CPU_IO_PPI_MEM_WRITE64)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_PEI_CPU_IO_PPI *This,
  UINT64 Address,
  UINT64 Data
  );






struct _EFI_PEI_CPU_IO_PPI {



  EFI_PEI_CPU_IO_PPI_ACCESS Mem;



  EFI_PEI_CPU_IO_PPI_ACCESS Io;

  EFI_PEI_CPU_IO_PPI_IO_READ8 IoRead8;
  EFI_PEI_CPU_IO_PPI_IO_READ16 IoRead16;
  EFI_PEI_CPU_IO_PPI_IO_READ32 IoRead32;
  EFI_PEI_CPU_IO_PPI_IO_READ64 IoRead64;

  EFI_PEI_CPU_IO_PPI_IO_WRITE8 IoWrite8;
  EFI_PEI_CPU_IO_PPI_IO_WRITE16 IoWrite16;
  EFI_PEI_CPU_IO_PPI_IO_WRITE32 IoWrite32;
  EFI_PEI_CPU_IO_PPI_IO_WRITE64 IoWrite64;

  EFI_PEI_CPU_IO_PPI_MEM_READ8 MemRead8;
  EFI_PEI_CPU_IO_PPI_MEM_READ16 MemRead16;
  EFI_PEI_CPU_IO_PPI_MEM_READ32 MemRead32;
  EFI_PEI_CPU_IO_PPI_MEM_READ64 MemRead64;

  EFI_PEI_CPU_IO_PPI_MEM_WRITE8 MemWrite8;
  EFI_PEI_CPU_IO_PPI_MEM_WRITE16 MemWrite16;
  EFI_PEI_CPU_IO_PPI_MEM_WRITE32 MemWrite32;
  EFI_PEI_CPU_IO_PPI_MEM_WRITE64 MemWrite64;
};

extern EFI_GUID gEfiPeiCpuIoPpiInstalledGuid;
# 40 "/home/core/edk2/MdePkg/Include/Pi/PiPeiCis.h" 2
# 1 "/home/core/edk2/MdePkg/Include/Ppi/PciCfg2.h" 1
# 18 "/home/core/edk2/MdePkg/Include/Ppi/PciCfg2.h"
# 1 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h" 1
# 99 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
typedef struct {

  UINT64 X19;
  UINT64 X20;
  UINT64 X21;
  UINT64 X22;
  UINT64 X23;
  UINT64 X24;
  UINT64 X25;
  UINT64 X26;
  UINT64 X27;
  UINT64 X28;
  UINT64 FP;
  UINT64 LR;
  UINT64 IP0;


  UINT64 D8;
  UINT64 D9;
  UINT64 D10;
  UINT64 D11;
  UINT64 D12;
  UINT64 D13;
  UINT64 D14;
  UINT64 D15;
} BASE_LIBRARY_JUMP_BUFFER;
# 176 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINTN

StrnLenS (
  const CHAR16 *String,
  UINTN MaxSize
  );
# 204 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINTN

StrnSizeS (
  const CHAR16 *String,
  UINTN MaxSize
  );
# 238 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
RETURN_STATUS

StrCpyS (
  CHAR16 *Destination,
  UINTN DestMax,
  const CHAR16 *Source
  );
# 276 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
RETURN_STATUS

StrnCpyS (
  CHAR16 *Destination,
  UINTN DestMax,
  const CHAR16 *Source,
  UINTN Length
  );
# 315 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
RETURN_STATUS

StrCatS (
  CHAR16 *Destination,
  UINTN DestMax,
  const CHAR16 *Source
  );
# 356 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
RETURN_STATUS

StrnCatS (
  CHAR16 *Destination,
  UINTN DestMax,
  const CHAR16 *Source,
  UINTN Length
  );
# 413 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
RETURN_STATUS

StrDecimalToUintnS (
  const CHAR16 *String,
  CHAR16 **EndPointer,
  UINTN *Data
  );
# 469 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
RETURN_STATUS

StrDecimalToUint64S (
  const CHAR16 *String,
  CHAR16 **EndPointer,
  UINT64 *Data
  );
# 530 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
RETURN_STATUS

StrHexToUintnS (
  const CHAR16 *String,
  CHAR16 **EndPointer,
  UINTN *Data
  );
# 591 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
RETURN_STATUS

StrHexToUint64S (
  const CHAR16 *String,
  CHAR16 **EndPointer,
  UINT64 *Data
  );
# 613 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINTN

AsciiStrnLenS (
  const CHAR8 *String,
  UINTN MaxSize
  );
# 639 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINTN

AsciiStrnSizeS (
  const CHAR8 *String,
  UINTN MaxSize
  );
# 671 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
RETURN_STATUS

AsciiStrCpyS (
  CHAR8 *Destination,
  UINTN DestMax,
  const CHAR8 *Source
  );
# 707 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
RETURN_STATUS

AsciiStrnCpyS (
  CHAR8 *Destination,
  UINTN DestMax,
  const CHAR8 *Source,
  UINTN Length
  );
# 744 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
RETURN_STATUS

AsciiStrCatS (
  CHAR8 *Destination,
  UINTN DestMax,
  const CHAR8 *Source
  );
# 783 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
RETURN_STATUS

AsciiStrnCatS (
  CHAR8 *Destination,
  UINTN DestMax,
  const CHAR8 *Source,
  UINTN Length
  );
# 839 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
RETURN_STATUS

AsciiStrDecimalToUintnS (
  const CHAR8 *String,
  CHAR8 **EndPointer,
  UINTN *Data
  );
# 894 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
RETURN_STATUS

AsciiStrDecimalToUint64S (
  const CHAR8 *String,
  CHAR8 **EndPointer,
  UINT64 *Data
  );
# 953 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
RETURN_STATUS

AsciiStrHexToUintnS (
  const CHAR8 *String,
  CHAR8 **EndPointer,
  UINTN *Data
  );
# 1012 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
RETURN_STATUS

AsciiStrHexToUint64S (
  const CHAR8 *String,
  CHAR8 **EndPointer,
  UINT64 *Data
  );
# 1048 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
CHAR16 *

StrCpy (
  CHAR16 *Destination,
  const CHAR16 *Source
  );
# 1088 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
CHAR16 *

StrnCpy (
  CHAR16 *Destination,
  const CHAR16 *Source,
  UINTN Length
  );
# 1114 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINTN

StrLen (
  const CHAR16 *String
  );
# 1139 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINTN

StrSize (
  const CHAR16 *String
  );
# 1174 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
INTN

StrCmp (
  const CHAR16 *FirstString,
  const CHAR16 *SecondString
  );
# 1214 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
INTN

StrnCmp (
  const CHAR16 *FirstString,
  const CHAR16 *SecondString,
  UINTN Length
  );
# 1259 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
CHAR16 *

StrCat (
  CHAR16 *Destination,
  const CHAR16 *Source
  );
# 1307 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
CHAR16 *

StrnCat (
  CHAR16 *Destination,
  const CHAR16 *Source,
  UINTN Length
  );
# 1341 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
CHAR16 *

StrStr (
  const CHAR16 *String,
  const CHAR16 *SearchString
  );
# 1382 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINTN

StrDecimalToUintn (
  const CHAR16 *String
  );
# 1422 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT64

StrDecimalToUint64 (
  const CHAR16 *String
  );
# 1464 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINTN

StrHexToUintn (
  const CHAR16 *String
  );
# 1506 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT64

StrHexToUint64 (
  const CHAR16 *String
  );
# 1570 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
RETURN_STATUS

StrToIpv6Address (
  const CHAR16 *String,
  CHAR16 **EndPointer,
  IPv6_ADDRESS *Address,
  UINT8 *PrefixLength
  );
# 1628 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
RETURN_STATUS

StrToIpv4Address (
  const CHAR16 *String,
  CHAR16 **EndPointer,
  IPv4_ADDRESS *Address,
  UINT8 *PrefixLength
  );
# 1683 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
RETURN_STATUS

StrToGuid (
  const CHAR16 *String,
  GUID *Guid
  );
# 1734 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
RETURN_STATUS

StrHexToBytes (
  const CHAR16 *String,
  UINTN Length,
  UINT8 *Buffer,
  UINTN MaxBufferSize
  );
# 1780 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
CHAR8 *

UnicodeStrToAsciiStr (
  const CHAR16 *Source,
  CHAR8 *Destination
  );
# 1830 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
RETURN_STATUS

UnicodeStrToAsciiStrS (
  const CHAR16 *Source,
  CHAR8 *Destination,
  UINTN DestMax
  );
# 1882 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
RETURN_STATUS

UnicodeStrnToAsciiStrS (
  const CHAR16 *Source,
  UINTN Length,
  CHAR8 *Destination,
  UINTN DestMax,
  UINTN *DestinationLength
  );
# 1917 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
CHAR8 *

AsciiStrCpy (
  CHAR8 *Destination,
  const CHAR8 *Source
  );
# 1954 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
CHAR8 *

AsciiStrnCpy (
  CHAR8 *Destination,
  const CHAR8 *Source,
  UINTN Length
  );
# 1980 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINTN

AsciiStrLen (
  const CHAR8 *String
  );
# 2004 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINTN

AsciiStrSize (
  const CHAR8 *String
  );
# 2037 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
INTN

AsciiStrCmp (
  const CHAR8 *FirstString,
  const CHAR8 *SecondString
  );
# 2074 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
INTN

AsciiStriCmp (
  const CHAR8 *FirstString,
  const CHAR8 *SecondString
  );
# 2112 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
INTN

AsciiStrnCmp (
  const CHAR8 *FirstString,
  const CHAR8 *SecondString,
  UINTN Length
  );
# 2152 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
CHAR8 *

AsciiStrCat (
  CHAR8 *Destination,
  const CHAR8 *Source
  );
# 2198 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
CHAR8 *

AsciiStrnCat (
  CHAR8 *Destination,
  const CHAR8 *Source,
  UINTN Length
  );
# 2231 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
CHAR8 *

AsciiStrStr (
  const CHAR8 *String,
  const CHAR8 *SearchString
  );
# 2269 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINTN

AsciiStrDecimalToUintn (
  const CHAR8 *String
  );
# 2306 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT64

AsciiStrDecimalToUint64 (
  const CHAR8 *String
  );
# 2347 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINTN

AsciiStrHexToUintn (
  const CHAR8 *String
  );
# 2388 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT64

AsciiStrHexToUint64 (
  const CHAR8 *String
  );
# 2446 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
RETURN_STATUS

AsciiStrToIpv6Address (
  const CHAR8 *String,
  CHAR8 **EndPointer,
  IPv6_ADDRESS *Address,
  UINT8 *PrefixLength
  );
# 2498 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
RETURN_STATUS

AsciiStrToIpv4Address (
  const CHAR8 *String,
  CHAR8 **EndPointer,
  IPv4_ADDRESS *Address,
  UINT8 *PrefixLength
  );
# 2550 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
RETURN_STATUS

AsciiStrToGuid (
  const CHAR8 *String,
  GUID *Guid
  );
# 2599 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
RETURN_STATUS

AsciiStrHexToBytes (
  const CHAR8 *String,
  UINTN Length,
  UINT8 *Buffer,
  UINTN MaxBufferSize
  );
# 2639 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
CHAR16 *

AsciiStrToUnicodeStr (
  const CHAR8 *Source,
  CHAR16 *Destination
  );
# 2685 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
RETURN_STATUS

AsciiStrToUnicodeStrS (
  const CHAR8 *Source,
  CHAR16 *Destination,
  UINTN DestMax
  );
# 2736 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
RETURN_STATUS

AsciiStrnToUnicodeStrS (
  const CHAR8 *Source,
  UINTN Length,
  CHAR16 *Destination,
  UINTN DestMax,
  UINTN *DestinationLength
  );
# 2761 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
CHAR16

CharToUpper (
  CHAR16 Char
  );
# 2780 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
CHAR8

AsciiCharToUpper (
  CHAR8 Chr
  );
# 2805 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
RETURN_STATUS

Base64Encode (
  const UINT8 *Source,
  UINTN SourceLength,
  CHAR8 *Destination ,
  UINTN *DestinationSize
  );
# 2896 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
RETURN_STATUS

Base64Decode (
  const CHAR8 *Source ,
  UINTN SourceSize,
  UINT8 *Destination ,
  UINTN *DestinationSize
  );
# 2918 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT8

DecimalToBcd8 (
  UINT8 Value
  );
# 2939 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT8

BcdToDecimal8 (
  UINT8 Value
  );
# 2957 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
BOOLEAN

PathRemoveLastItem(
  CHAR16 *Path
  );
# 2976 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
CHAR16*

PathCleanUpDirectories(
  CHAR16 *Path
  );
# 3048 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
BOOLEAN

IsNodeInList (
  const LIST_ENTRY *FirstEntry,
  const LIST_ENTRY *SecondEntry
  );
# 3072 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
LIST_ENTRY *

InitializeListHead (
  LIST_ENTRY *ListHead
  );
# 3101 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
LIST_ENTRY *

InsertHeadList (
  LIST_ENTRY *ListHead,
  LIST_ENTRY *Entry
  );
# 3131 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
LIST_ENTRY *

InsertTailList (
  LIST_ENTRY *ListHead,
  LIST_ENTRY *Entry
  );
# 3159 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
LIST_ENTRY *

GetFirstNode (
  const LIST_ENTRY *List
  );
# 3187 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
LIST_ENTRY *

GetNextNode (
  const LIST_ENTRY *List,
  const LIST_ENTRY *Node
  );
# 3216 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
LIST_ENTRY *

GetPreviousNode (
  const LIST_ENTRY *List,
  const LIST_ENTRY *Node
  );
# 3243 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
BOOLEAN

IsListEmpty (
  const LIST_ENTRY *ListHead
  );
# 3276 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
BOOLEAN

IsNull (
  const LIST_ENTRY *List,
  const LIST_ENTRY *Node
  );
# 3307 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
BOOLEAN

IsNodeAtEnd (
  const LIST_ENTRY *List,
  const LIST_ENTRY *Node
  );
# 3341 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
LIST_ENTRY *

SwapListEntries (
  LIST_ENTRY *FirstEntry,
  LIST_ENTRY *SecondEntry
  );
# 3370 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
LIST_ENTRY *

RemoveEntryList (
  const LIST_ENTRY *Entry
  );
# 3395 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT64

LShiftU64 (
  UINT64 Operand,
  UINTN Count
  );
# 3418 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT64

RShiftU64 (
  UINT64 Operand,
  UINTN Count
  );
# 3441 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT64

ARShiftU64 (
  UINT64 Operand,
  UINTN Count
  );
# 3465 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT32

LRotU32 (
  UINT32 Operand,
  UINTN Count
  );
# 3489 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT32

RRotU32 (
  UINT32 Operand,
  UINTN Count
  );
# 3513 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT64

LRotU64 (
  UINT64 Operand,
  UINTN Count
  );
# 3537 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT64

RRotU64 (
  UINT64 Operand,
  UINTN Count
  );
# 3558 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
INTN

LowBitSet32 (
  UINT32 Operand
  );
# 3579 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
INTN

LowBitSet64 (
  UINT64 Operand
  );
# 3600 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
INTN

HighBitSet32 (
  UINT32 Operand
  );
# 3621 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
INTN

HighBitSet64 (
  UINT64 Operand
  );
# 3641 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT32

GetPowerOfTwo32 (
  UINT32 Operand
  );
# 3661 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT64

GetPowerOfTwo64 (
  UINT64 Operand
  );
# 3680 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT16

SwapBytes16 (
  UINT16 Value
  );
# 3699 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT32

SwapBytes32 (
  UINT32 Value
  );
# 3718 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT64

SwapBytes64 (
  UINT64 Value
  );
# 3739 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT64

MultU64x32 (
  UINT64 Multiplicand,
  UINT32 Multiplier
  );
# 3761 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT64

MultU64x64 (
  UINT64 Multiplicand,
  UINT64 Multiplier
  );
# 3783 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
INT64

MultS64x64 (
  INT64 Multiplicand,
  INT64 Multiplier
  );
# 3807 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT64

DivU64x32 (
  UINT64 Dividend,
  UINT32 Divisor
  );
# 3831 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT32

ModU64x32 (
  UINT64 Dividend,
  UINT32 Divisor
  );
# 3858 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT64

DivU64x32Remainder (
  UINT64 Dividend,
  UINT32 Divisor,
  UINT32 *Remainder
  );
# 3886 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT64

DivU64x64Remainder (
  UINT64 Dividend,
  UINT64 Divisor,
  UINT64 *Remainder
  );
# 3918 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
INT64

DivS64x64Remainder (
  INT64 Dividend,
  INT64 Divisor,
  INT64 *Remainder
  );
# 3940 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT16

ReadUnaligned16 (
  const UINT16 *Buffer
  );
# 3962 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT16

WriteUnaligned16 (
  UINT16 *Buffer,
  UINT16 Value
  );
# 3983 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT32

ReadUnaligned24 (
  const UINT32 *Buffer
  );
# 4005 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT32

WriteUnaligned24 (
  UINT32 *Buffer,
  UINT32 Value
  );
# 4026 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT32

ReadUnaligned32 (
  const UINT32 *Buffer
  );
# 4048 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT32

WriteUnaligned32 (
  UINT32 *Buffer,
  UINT32 Value
  );
# 4069 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT64

ReadUnaligned64 (
  const UINT64 *Buffer
  );
# 4091 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT64

WriteUnaligned64 (
  UINT64 *Buffer,
  UINT64 Value
  );
# 4122 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT8

BitFieldRead8 (
  UINT8 Operand,
  UINTN StartBit,
  UINTN EndBit
  );
# 4154 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT8

BitFieldWrite8 (
  UINT8 Operand,
  UINTN StartBit,
  UINTN EndBit,
  UINT8 Value
  );
# 4188 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT8

BitFieldOr8 (
  UINT8 Operand,
  UINTN StartBit,
  UINTN EndBit,
  UINT8 OrData
  );
# 4222 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT8

BitFieldAnd8 (
  UINT8 Operand,
  UINTN StartBit,
  UINTN EndBit,
  UINT8 AndData
  );
# 4259 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT8

BitFieldAndThenOr8 (
  UINT8 Operand,
  UINTN StartBit,
  UINTN EndBit,
  UINT8 AndData,
  UINT8 OrData
  );
# 4289 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT16

BitFieldRead16 (
  UINT16 Operand,
  UINTN StartBit,
  UINTN EndBit
  );
# 4321 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT16

BitFieldWrite16 (
  UINT16 Operand,
  UINTN StartBit,
  UINTN EndBit,
  UINT16 Value
  );
# 4355 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT16

BitFieldOr16 (
  UINT16 Operand,
  UINTN StartBit,
  UINTN EndBit,
  UINT16 OrData
  );
# 4389 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT16

BitFieldAnd16 (
  UINT16 Operand,
  UINTN StartBit,
  UINTN EndBit,
  UINT16 AndData
  );
# 4426 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT16

BitFieldAndThenOr16 (
  UINT16 Operand,
  UINTN StartBit,
  UINTN EndBit,
  UINT16 AndData,
  UINT16 OrData
  );
# 4456 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT32

BitFieldRead32 (
  UINT32 Operand,
  UINTN StartBit,
  UINTN EndBit
  );
# 4488 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT32

BitFieldWrite32 (
  UINT32 Operand,
  UINTN StartBit,
  UINTN EndBit,
  UINT32 Value
  );
# 4522 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT32

BitFieldOr32 (
  UINT32 Operand,
  UINTN StartBit,
  UINTN EndBit,
  UINT32 OrData
  );
# 4556 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT32

BitFieldAnd32 (
  UINT32 Operand,
  UINTN StartBit,
  UINTN EndBit,
  UINT32 AndData
  );
# 4593 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT32

BitFieldAndThenOr32 (
  UINT32 Operand,
  UINTN StartBit,
  UINTN EndBit,
  UINT32 AndData,
  UINT32 OrData
  );
# 4623 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT64

BitFieldRead64 (
  UINT64 Operand,
  UINTN StartBit,
  UINTN EndBit
  );
# 4655 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT64

BitFieldWrite64 (
  UINT64 Operand,
  UINTN StartBit,
  UINTN EndBit,
  UINT64 Value
  );
# 4689 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT64

BitFieldOr64 (
  UINT64 Operand,
  UINTN StartBit,
  UINTN EndBit,
  UINT64 OrData
  );
# 4723 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT64

BitFieldAnd64 (
  UINT64 Operand,
  UINTN StartBit,
  UINTN EndBit,
  UINT64 AndData
  );
# 4760 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT64

BitFieldAndThenOr64 (
  UINT64 Operand,
  UINTN StartBit,
  UINTN EndBit,
  UINT64 AndData,
  UINT64 OrData
  );
# 4790 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT8

BitFieldCountOnes32 (
  UINT32 Operand,
  UINTN StartBit,
  UINTN EndBit
  );
# 4818 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT8

BitFieldCountOnes64 (
  UINT64 Operand,
  UINTN StartBit,
  UINTN EndBit
  );
# 4848 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT8

CalculateSum8 (
  const UINT8 *Buffer,
  UINTN Length
  );
# 4874 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT8

CalculateCheckSum8 (
  const UINT8 *Buffer,
  UINTN Length
  );
# 4901 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT16

CalculateSum16 (
  const UINT16 *Buffer,
  UINTN Length
  );
# 4929 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT16

CalculateCheckSum16 (
  const UINT16 *Buffer,
  UINTN Length
  );
# 4956 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT32

CalculateSum32 (
  const UINT32 *Buffer,
  UINTN Length
  );
# 4984 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT32

CalculateCheckSum32 (
  const UINT32 *Buffer,
  UINTN Length
  );
# 5011 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT64

CalculateSum64 (
  const UINT64 *Buffer,
  UINTN Length
  );
# 5039 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT64

CalculateCheckSum64 (
  const UINT64 *Buffer,
  UINTN Length
  );
# 5059 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
UINT32

CalculateCrc32(
  void *Buffer,
  UINTN Length
  );
# 5077 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
typedef
void
( *SWITCH_STACK_ENTRY_POINT)(
  void *Context1,
  void *Context2
  );
# 5092 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
void

MemoryFence (
  void
  );
# 5120 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
__attribute__((returns_twice))
UINTN

SetJump (
  BASE_LIBRARY_JUMP_BUFFER *JumpBuffer
  );
# 5144 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
void

LongJump (
  BASE_LIBRARY_JUMP_BUFFER *JumpBuffer,
  UINTN Value
  );






void

EnableInterrupts (
  void
  );






void

DisableInterrupts (
  void
  );
# 5182 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
BOOLEAN

SaveAndDisableInterrupts (
  void
  );







void

EnableDisableInterrupts (
  void
  );
# 5211 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
BOOLEAN

GetInterruptState (
  void
  );
# 5232 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
BOOLEAN

SetInterruptState (
  BOOLEAN InterruptState
  );
# 5246 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
void

CpuPause (
  void
  );
# 5282 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
void

SwitchStack (
  SWITCH_STACK_ENTRY_POINT EntryPoint,
  void *Context1,
  void *Context2,
  void *NewStack,
  ...
  );
# 5300 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
void

CpuBreakpoint (
  void
  );
# 5316 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
void

CpuDeadLoop (
  void
  );
# 5330 "/home/core/edk2/MdePkg/Include/Library/BaseLib.h"
void

SpeculationBarrier (
  void
  );
# 19 "/home/core/edk2/MdePkg/Include/Ppi/PciCfg2.h" 2




typedef struct _EFI_PEI_PCI_CFG2_PPI EFI_PEI_PCI_CFG2_PPI;
# 35 "/home/core/edk2/MdePkg/Include/Ppi/PciCfg2.h"
typedef enum {



  EfiPeiPciCfgWidthUint8 = 0,



  EfiPeiPciCfgWidthUint16 = 1,



  EfiPeiPciCfgWidthUint32 = 2,



  EfiPeiPciCfgWidthUint64 = 3,
  EfiPeiPciCfgWidthMaximum
} EFI_PEI_PCI_CFG_PPI_WIDTH;




typedef struct {




  UINT8 Register;




  UINT8 Function;



  UINT8 Device;



  UINT8 Bus;





  UINT32 ExtendedRegister;
} EFI_PEI_PCI_CFG_PPI_PCI_ADDRESS;
# 109 "/home/core/edk2/MdePkg/Include/Ppi/PciCfg2.h"
typedef
EFI_STATUS
( *EFI_PEI_PCI_CFG2_PPI_IO)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_PEI_PCI_CFG2_PPI *This,
  EFI_PEI_PCI_CFG_PPI_WIDTH Width,
  UINT64 Address,
  void *Buffer
);
# 150 "/home/core/edk2/MdePkg/Include/Ppi/PciCfg2.h"
typedef
EFI_STATUS
( *EFI_PEI_PCI_CFG2_PPI_RW)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_PEI_PCI_CFG2_PPI *This,
  EFI_PEI_PCI_CFG_PPI_WIDTH Width,
  UINT64 Address,
  void *SetBits,
  void *ClearBits
);





struct _EFI_PEI_PCI_CFG2_PPI {
  EFI_PEI_PCI_CFG2_PPI_IO Read;
  EFI_PEI_PCI_CFG2_PPI_IO Write;
  EFI_PEI_PCI_CFG2_PPI_RW Modify;



  UINT16 Segment;
};


extern EFI_GUID gEfiPciCfg2PpiGuid;
# 41 "/home/core/edk2/MdePkg/Include/Pi/PiPeiCis.h" 2
# 54 "/home/core/edk2/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEIM_ENTRY_POINT2)(
  EFI_PEI_FILE_HANDLE FileHandle,
  const EFI_PEI_SERVICES **PeiServices
  );
# 71 "/home/core/edk2/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEIM_NOTIFY_ENTRY_POINT)(
  EFI_PEI_SERVICES **PeiServices,
  EFI_PEI_NOTIFY_DESCRIPTOR *NotifyDescriptor,
  void *Ppi
  );
# 92 "/home/core/edk2/MdePkg/Include/Pi/PiPeiCis.h"
typedef struct {




  UINTN Flags;



  EFI_GUID *Guid;



  void *Ppi;
} EFI_PEI_PPI_DESCRIPTOR;





struct _EFI_PEI_NOTIFY_DESCRIPTOR {



  UINTN Flags;



  EFI_GUID *Guid;



  EFI_PEIM_NOTIFY_ENTRY_POINT Notify;
};





typedef union {



  EFI_PEI_NOTIFY_DESCRIPTOR Notify;



  EFI_PEI_PPI_DESCRIPTOR Ppi;
} EFI_PEI_DESCRIPTOR;
# 159 "/home/core/edk2/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEI_INSTALL_PPI)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_PEI_PPI_DESCRIPTOR *PpiList
  );
# 184 "/home/core/edk2/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEI_REINSTALL_PPI)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_PEI_PPI_DESCRIPTOR *OldPpi,
  const EFI_PEI_PPI_DESCRIPTOR *NewPpi
  );
# 205 "/home/core/edk2/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEI_LOCATE_PPI)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_GUID *Guid,
  UINTN Instance,
  EFI_PEI_PPI_DESCRIPTOR **PpiDescriptor ,
  void **Ppi
  );
# 230 "/home/core/edk2/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEI_NOTIFY_PPI)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_PEI_NOTIFY_DESCRIPTOR *NotifyList
  );
# 246 "/home/core/edk2/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEI_GET_BOOT_MODE)(
  const EFI_PEI_SERVICES **PeiServices,
  EFI_BOOT_MODE *BootMode
  );
# 262 "/home/core/edk2/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEI_SET_BOOT_MODE)(
  const EFI_PEI_SERVICES **PeiServices,
  EFI_BOOT_MODE BootMode
  );
# 279 "/home/core/edk2/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEI_GET_HOB_LIST)(
  const EFI_PEI_SERVICES **PeiServices,
  void **HobList
  );
# 298 "/home/core/edk2/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEI_CREATE_HOB)(
  const EFI_PEI_SERVICES **PeiServices,
  UINT16 Type,
  UINT16 Length,
  void **Hob
  );
# 326 "/home/core/edk2/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEI_FFS_FIND_NEXT_VOLUME2)(
  const EFI_PEI_SERVICES **PeiServices,
  UINTN Instance,
  EFI_PEI_FV_HANDLE *VolumeHandle
  );
# 355 "/home/core/edk2/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEI_FFS_FIND_NEXT_FILE2)(
  const EFI_PEI_SERVICES **PeiServices,
  EFI_FV_FILETYPE SearchType,
  const EFI_PEI_FV_HANDLE FvHandle,
  EFI_PEI_FILE_HANDLE *FileHandle
  );
# 383 "/home/core/edk2/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEI_FFS_FIND_SECTION_DATA2)(
  const EFI_PEI_SERVICES **PeiServices,
  EFI_SECTION_TYPE SectionType,
  EFI_PEI_FILE_HANDLE FileHandle,
  void **SectionData
  );
# 413 "/home/core/edk2/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEI_FFS_FIND_SECTION_DATA3)(
  const EFI_PEI_SERVICES **PeiServices,
  EFI_SECTION_TYPE SectionType,
  UINTN SectionInstance,
  EFI_PEI_FILE_HANDLE FileHandle,
  void **SectionData,
  UINT32 *AuthenticationStatus
  );
# 436 "/home/core/edk2/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEI_INSTALL_PEI_MEMORY)(
  const EFI_PEI_SERVICES **PeiServices,
  EFI_PHYSICAL_ADDRESS MemoryBegin,
  UINT64 MemoryLength
  );
# 466 "/home/core/edk2/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEI_ALLOCATE_PAGES)(
  const EFI_PEI_SERVICES **PeiServices,
  EFI_MEMORY_TYPE MemoryType,
  UINTN Pages,
  EFI_PHYSICAL_ADDRESS *Memory
  );
# 488 "/home/core/edk2/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEI_FREE_PAGES) (
  const EFI_PEI_SERVICES **PeiServices,
  EFI_PHYSICAL_ADDRESS Memory,
  UINTN Pages
  );
# 508 "/home/core/edk2/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEI_ALLOCATE_POOL)(
  const EFI_PEI_SERVICES **PeiServices,
  UINTN Size,
  void **Buffer
  );
# 524 "/home/core/edk2/MdePkg/Include/Pi/PiPeiCis.h"
typedef
void
( *EFI_PEI_COPY_MEM)(
  void *Destination,
  void *Source,
  UINTN Length
  );
# 540 "/home/core/edk2/MdePkg/Include/Pi/PiPeiCis.h"
typedef
void
( *EFI_PEI_SET_MEM)(
  void *Buffer,
  UINTN Size,
  UINT8 Value
  );
# 577 "/home/core/edk2/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEI_REPORT_STATUS_CODE)(
  const EFI_PEI_SERVICES **PeiServices,
  EFI_STATUS_CODE_TYPE Type,
  EFI_STATUS_CODE_VALUE Value,
  UINT32 Instance,
  const EFI_GUID *CallerId ,
  const EFI_STATUS_CODE_DATA *Data
  );
# 601 "/home/core/edk2/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEI_RESET_SYSTEM)(
  const EFI_PEI_SERVICES **PeiServices
  );
# 620 "/home/core/edk2/MdePkg/Include/Pi/PiPeiCis.h"
typedef
void
( *EFI_PEI_RESET2_SYSTEM) (
  EFI_RESET_TYPE ResetType,
  EFI_STATUS ResetStatus,
  UINTN DataSize,
  void *ResetData
  );
# 649 "/home/core/edk2/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEI_FFS_FIND_BY_NAME)(
  const EFI_GUID *FileName,
  EFI_PEI_FV_HANDLE VolumeHandle,
  EFI_PEI_FILE_HANDLE *FileHandle
  );




typedef struct {



  EFI_GUID FileName;



  EFI_FV_FILETYPE FileType;



  EFI_FV_FILE_ATTRIBUTES FileAttributes;





  void *Buffer;



  UINT32 BufferSize;
} EFI_FV_FILE_INFO;




typedef struct {



  EFI_GUID FileName;



  EFI_FV_FILETYPE FileType;



  EFI_FV_FILE_ATTRIBUTES FileAttributes;





  void *Buffer;



  UINT32 BufferSize;



  UINT32 AuthenticationStatus;
} EFI_FV_FILE_INFO2;
# 735 "/home/core/edk2/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEI_FFS_GET_FILE_INFO)(
  EFI_PEI_FILE_HANDLE FileHandle,
  EFI_FV_FILE_INFO *FileInfo
  );
# 759 "/home/core/edk2/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEI_FFS_GET_FILE_INFO2)(
  EFI_PEI_FILE_HANDLE FileHandle,
  EFI_FV_FILE_INFO2 *FileInfo
  );




typedef struct {



  EFI_FVB_ATTRIBUTES_2 FvAttributes;



  EFI_GUID FvFormat;



  EFI_GUID FvName;





  void *FvStart;



  UINT64 FvSize;
} EFI_FV_INFO;
# 811 "/home/core/edk2/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEI_FFS_GET_VOLUME_INFO)(
  EFI_PEI_FV_HANDLE VolumeHandle,
  EFI_FV_INFO *VolumeInfo
  );
# 842 "/home/core/edk2/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEI_REGISTER_FOR_SHADOW)(
  EFI_PEI_FILE_HANDLE FileHandle
  );
# 880 "/home/core/edk2/MdePkg/Include/Pi/PiPeiCis.h"
struct _EFI_PEI_SERVICES {



  EFI_TABLE_HEADER Hdr;




  EFI_PEI_INSTALL_PPI InstallPpi;
  EFI_PEI_REINSTALL_PPI ReInstallPpi;
  EFI_PEI_LOCATE_PPI LocatePpi;
  EFI_PEI_NOTIFY_PPI NotifyPpi;




  EFI_PEI_GET_BOOT_MODE GetBootMode;
  EFI_PEI_SET_BOOT_MODE SetBootMode;




  EFI_PEI_GET_HOB_LIST GetHobList;
  EFI_PEI_CREATE_HOB CreateHob;




  EFI_PEI_FFS_FIND_NEXT_VOLUME2 FfsFindNextVolume;
  EFI_PEI_FFS_FIND_NEXT_FILE2 FfsFindNextFile;
  EFI_PEI_FFS_FIND_SECTION_DATA2 FfsFindSectionData;




  EFI_PEI_INSTALL_PEI_MEMORY InstallPeiMemory;
  EFI_PEI_ALLOCATE_PAGES AllocatePages;
  EFI_PEI_ALLOCATE_POOL AllocatePool;
  EFI_PEI_COPY_MEM CopyMem;
  EFI_PEI_SET_MEM SetMem;




  EFI_PEI_REPORT_STATUS_CODE ReportStatusCode;




  EFI_PEI_RESET_SYSTEM ResetSystem;





  EFI_PEI_CPU_IO_PPI *CpuIo;
  EFI_PEI_PCI_CFG2_PPI *PciCfg;




  EFI_PEI_FFS_FIND_BY_NAME FfsFindFileByName;
  EFI_PEI_FFS_GET_FILE_INFO FfsGetFileInfo;
  EFI_PEI_FFS_GET_VOLUME_INFO FfsGetVolumeInfo;
  EFI_PEI_REGISTER_FOR_SHADOW RegisterForShadow;
  EFI_PEI_FFS_FIND_SECTION_DATA3 FindSectionData3;
  EFI_PEI_FFS_GET_FILE_INFO2 FfsGetFileInfo2;
  EFI_PEI_RESET2_SYSTEM ResetSystem2;
  EFI_PEI_FREE_PAGES FreePages;
};







typedef struct _EFI_SEC_PEI_HAND_OFF {



  UINT16 DataSize;






  void *BootFirmwareVolumeBase;




  UINTN BootFirmwareVolumeSize;




  void *TemporaryRamBase;




  UINTN TemporaryRamSize;
# 995 "/home/core/edk2/MdePkg/Include/Pi/PiPeiCis.h"
  void *PeiTemporaryRamBase;





  UINTN PeiTemporaryRamSize;







  void *StackBase;




  UINTN StackSize;
} EFI_SEC_PEI_HAND_OFF;
# 1054 "/home/core/edk2/MdePkg/Include/Pi/PiPeiCis.h"
typedef
void
( *EFI_PEI_CORE_ENTRY_POINT)(
  const EFI_SEC_PEI_HAND_OFF *SecCoreData,
  const EFI_PEI_PPI_DESCRIPTOR *PpiList
);
# 19 "/home/core/edk2/MdePkg/Include/PiPei.h" 2
# 17 "/home/core/edk2-dipper/workspace/Build/XiaomiMI8Pkg/DEBUG_GCC5/AARCH64/ArmPkg/Drivers/ArmGic/ArmGicLib/DEBUG/AutoGen.h" 2
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
# 18 "/home/core/edk2-dipper/workspace/Build/XiaomiMI8Pkg/DEBUG_GCC5/AARCH64/ArmPkg/Drivers/ArmGic/ArmGicLib/DEBUG/AutoGen.h" 2

extern GUID gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;



extern EFI_GUID gArmTokenSpaceGuid;


extern UINT64 _gPcd_SkuId_Array[];



extern const BOOLEAN _gPcd_FixedAtBuild_PcdArmGicV3WithV2Legacy;
# 32 "<command-line>" 2
# 1 "/home/core/edk2/ArmPkg/Drivers/ArmGic/GicV3/AArch64/ArmGicV3.S"

# Copyright (c) 2014, ARM Limited. All rights reserved.

# SPDX-License-Identifier: BSD-2-Clause-Patent



# 1 "/home/core/edk2/ArmPkg/Include/AsmMacroIoLibV8.h" 1
# 9 "/home/core/edk2/ArmPkg/Drivers/ArmGic/GicV3/AArch64/ArmGicV3.S" 2
# 34 "/home/core/edk2/ArmPkg/Drivers/ArmGic/GicV3/AArch64/ArmGicV3.S"
.global ArmGicV3GetControlSystemRegisterEnable ; .section ".text.ArmGicV3GetControlSystemRegisterEnable", "ax" ; .type ArmGicV3GetControlSystemRegisterEnable, %function ; ArmGicV3GetControlSystemRegisterEnable:
        mrs x1, CurrentEL ; cmp x1, #0x8 ; b.gt 3f ; b.eq 2f ; cbnz x1, 1f ; b . ;
1: mrs x0, S3_0_C12_C12_5
        b 4f
2: mrs x0, S3_4_C12_C9_5
        b 4f
3: mrs x0, S3_6_C12_C12_5
4: ret






.global ArmGicV3SetControlSystemRegisterEnable ; .section ".text.ArmGicV3SetControlSystemRegisterEnable", "ax" ; .type ArmGicV3SetControlSystemRegisterEnable, %function ; ArmGicV3SetControlSystemRegisterEnable:
        mrs x1, CurrentEL ; cmp x1, #0x8 ; b.gt 3f ; b.eq 2f ; cbnz x1, 1f ; b . ;
1: msr S3_0_C12_C12_5, x0
        b 4f
2: msr S3_4_C12_C9_5, x0
        b 4f
3: msr S3_6_C12_C12_5, x0
4: isb
        ret





.global ArmGicV3EnableInterruptInterface ; .section ".text.ArmGicV3EnableInterruptInterface", "ax" ; .type ArmGicV3EnableInterruptInterface, %function ; ArmGicV3EnableInterruptInterface:
        mov x0, #1
        msr S3_0_C12_C12_7, x0
        ret





.global ArmGicV3DisableInterruptInterface ; .section ".text.ArmGicV3DisableInterruptInterface", "ax" ; .type ArmGicV3DisableInterruptInterface, %function ; ArmGicV3DisableInterruptInterface:
        mov x0, #0
        msr S3_0_C12_C12_7, x0
        ret





.global ArmGicV3EndOfInterrupt ; .section ".text.ArmGicV3EndOfInterrupt", "ax" ; .type ArmGicV3EndOfInterrupt, %function ; ArmGicV3EndOfInterrupt:
        msr S3_0_C12_C12_1, x0
        ret





.global ArmGicV3AcknowledgeInterrupt ; .section ".text.ArmGicV3AcknowledgeInterrupt", "ax" ; .type ArmGicV3AcknowledgeInterrupt, %function ; ArmGicV3AcknowledgeInterrupt:
        mrs x0, S3_0_C12_C12_0
        ret





.global ArmGicV3SetPriorityMask ; .section ".text.ArmGicV3SetPriorityMask", "ax" ; .type ArmGicV3SetPriorityMask, %function ; ArmGicV3SetPriorityMask:
        msr S3_0_C4_C6_0, x0
        ret





.global ArmGicV3SetBinaryPointer ; .section ".text.ArmGicV3SetBinaryPointer", "ax" ; .type ArmGicV3SetBinaryPointer, %function ; ArmGicV3SetBinaryPointer:
        msr S3_0_C12_C12_3, x0
        ret
