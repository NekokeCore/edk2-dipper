/*
 * Intel ACPI Component Architecture
 * AML/ASL+ Disassembler version 20200430 (32-bit version)
 * Copyright (c) 2000 - 2020 Intel Corporation
 * 
 * Disassembly of acpi/MCFG.aml, Mon May 11 18:23:42 2020
 *
 * ACPI Data Table [MCFG]
 *
 * Format: [HexOffset DecimalOffset ByteLength]  FieldName : FieldValue
 */

[000h 0000   4]                    Signature : "MCFG"    [Memory Mapped Configuration table]
[004h 0004   4]                 Table Length : 0000002C
[008h 0008   1]                     Revision : 01
[009h 0009   1]                     Checksum : C5
[00Ah 0010   6]                       Oem ID : "HUAWEI"
[010h 0016   8]                 Oem Table ID : "QCOMEDK2"
[018h 0024   4]                 Oem Revision : 00000850
[01Ch 0028   4]              Asl Compiler ID : "INTL"
[020h 0032   4]        Asl Compiler Revision : 20200326

[024h 0036   8]                     Reserved : 0000000000000000

Raw Table Data: Length 44 (0x2C)

    0000: 4D 43 46 47 2C 00 00 00 01 C5 48 55 41 57 45 49  // MCFG,.....HUAWEI
    0010: 51 43 4F 4D 45 44 4B 32 50 08 00 00 49 4E 54 4C  // QCOMEDK2P...INTL
    0020: 26 03 20 20 00 00 00 00 00 00 00 00              // &.  ........
