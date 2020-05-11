extern unsigned char BootMaintenanceManagerUiLibStrings[];
typedef struct {
  UINT16 BootTimeOut;
  UINT32 BootNext;
  UINT8 COM1BaudRate;
  UINT8 COM1DataRate;
  UINT8 COM1StopBits;
  UINT8 COM1Parity;
  UINT8 COM1TerminalType;
  UINT8 COM2BaudRate;
  UINT8 COM2DataRate;
  UINT8 COM2StopBits;
  UINT8 COM2Parity;
  UINT8 COM2TerminalType;
  UINT16 DriverAddHandleDesc[100];
  UINT16 DriverAddHandleOptionalData[100];
  UINT8 DriverAddActive;
  UINT8 DriverAddForceReconnect;
  UINT8 ConsoleInputCOM1;
  UINT8 ConsoleInputCOM2;
  UINT8 ConsoleOutputCOM1;
  UINT8 ConsoleOutputCOM2;
  UINT8 ConsoleErrorCOM1;
  UINT8 ConsoleErrorCOM2;
  UINT8 ConsoleCheck[100];
  UINT8 ConsoleInCheck[100];
  UINT8 ConsoleOutCheck[100];
  UINT8 ConsoleErrCheck[100];
  UINT32 BootOptionOrder[100];
  UINT32 DriverOptionOrder[100];
  BOOLEAN BootOptionDel[100];
  BOOLEAN DriverOptionDel[100];
  BOOLEAN BootOptionDelMark[100];
  BOOLEAN DriverOptionDelMark[100];
  UINT8 COMBaudRate[100];
  UINT8 COMDataRate[100];
  UINT8 COMStopBits[100];
  UINT8 COMParity[100];
  UINT8 COMTerminalType[100];
  UINT8 COMFlowControl[100];
  UINT8 DisableMap[32];
  UINT16 ConsoleOutMode;
  UINT16 BootDescriptionData[100];
  UINT16 BootOptionalData[127];
  UINT16 DriverDescriptionData[100];
  UINT16 DriverOptionalData[127];
  BOOLEAN BootOptionChanged;
  BOOLEAN DriverOptionChanged;
  UINT8 Active;
  UINT8 ForceReconnect;
} BMM_FAKE_NV_DATA;
formset
  guid = { 0x642237c7, 0x35d4, 0x472d, {0x83, 0x65, 0x12, 0xe0, 0xcc, 0xf2, 0x7a, 0x22} },
  title = STRING_TOKEN(0x0005),
  help = STRING_TOKEN(0x0007),
  classguid = { 0xe58809f8, 0xfbc1, 0x48e2, { 0x88, 0x3a, 0xa3, 0x0f, 0xdc, 0x4b, 0x44, 0x1e } },
  varstore BMM_FAKE_NV_DATA,
    varid = 0x1000,
    name = BmmData,
    guid = { 0x642237c7, 0x35d4, 0x472d, {0x83, 0x65, 0x12, 0xe0, 0xcc, 0xf2, 0x7a, 0x22} };
  form formid = 0x1001,
       title = STRING_TOKEN(0x0005);
       suppressif TRUE;
          text
              help = STRING_TOKEN(0x0003),
              text = STRING_TOKEN(0x0003),
              flags = INTERACTIVE,
              key = 0x1117;
       endif;
    label 0xfffc;
    label 0xfffd;
  endform;
  form formid = 0x1014,
       title = STRING_TOKEN(0x0006);
       goto 0x1001,
            prompt = STRING_TOKEN(0x005D),
            help = STRING_TOKEN(0x005D);
       goto 0x1014,
            prompt = STRING_TOKEN(0x000B),
            help = STRING_TOKEN(0x000C),
            flags = INTERACTIVE,
            key = 0x1002;
       goto 0x1003,
            prompt = STRING_TOKEN(0x000D),
            help = STRING_TOKEN(0x000E),
            flags = INTERACTIVE,
            key = 0x1003;
       goto 0x1004,
            prompt = STRING_TOKEN(0x000F),
            help = STRING_TOKEN(0x000E),
            flags = INTERACTIVE,
            key = 0x1004;
  endform;
  form formid = 0x1015,
       title = STRING_TOKEN(0x0009);
       goto 0x1001,
            prompt = STRING_TOKEN(0x005D),
            help = STRING_TOKEN(0x005D);
       goto 0x1005,
            prompt = STRING_TOKEN(0x0010),
            help = STRING_TOKEN(0x0011),
            flags = INTERACTIVE,
            key = 0x1005;
       goto 0x1006,
            prompt = STRING_TOKEN(0x0012),
            help = STRING_TOKEN(0x0014),
            flags = INTERACTIVE,
            key = 0x1006;
       goto 0x1007,
            prompt = STRING_TOKEN(0x0013),
            help = STRING_TOKEN(0x0014),
            flags = INTERACTIVE,
            key = 0x1007;
  endform;
   form formid = 0x1002,
       title = STRING_TOKEN(0x0023);
       label 0x1002;
       label 0xffff;
       subtitle text = STRING_TOKEN(0x0002);
       string varid = BmmData.BootDescriptionData,
                 questionid = 0x110F,
                 prompt = STRING_TOKEN(0x0029),
                 help = STRING_TOKEN(0x0002),
                 flags = INTERACTIVE,
                 minsize = 6,
                 maxsize = 75,
       endstring;
       string varid = BmmData.BootOptionalData,
                 questionid = 0x1110,
                 prompt = STRING_TOKEN(0x0060),
                 help = STRING_TOKEN(0x0002),
                 flags = INTERACTIVE,
                 minsize = 0,
                 maxsize = 120,
       endstring;
       subtitle text = STRING_TOKEN(0x0002);
       text
         help = STRING_TOKEN(0x002B),
         text = STRING_TOKEN(0x002B),
         flags = INTERACTIVE,
         key = 0x1113;
       text
         help = STRING_TOKEN(0x002C),
         text = STRING_TOKEN(0x002C),
         flags = INTERACTIVE,
         key = 0x1114;
  endform;
  form formid = 0x1003,
       title = STRING_TOKEN(0x000D);
       label 0x1003;
       label 0xffff;
  endform;
  form formid = 0x1004,
       title = STRING_TOKEN(0x000F);
       label 0x1004;
       label 0xffff;
  endform;
  form formid = 0x1005,
       title = STRING_TOKEN(0x0010);
       goto 0x1001,
            prompt = STRING_TOKEN(0x005D),
            help = STRING_TOKEN(0x005D);
       goto 0x1015,
            prompt = STRING_TOKEN(0x0021),
            help = STRING_TOKEN(0x0021),
            flags = INTERACTIVE,
            key = 0x100E;
  endform;
  form formid = 0x100E,
       title = STRING_TOKEN(0x0024);
       label 0x100E;
       label 0xffff;
       subtitle text = STRING_TOKEN(0x0002);
       string varid = BmmData.DriverDescriptionData,
                 questionid = 0x1111,
                 prompt = STRING_TOKEN(0x0029),
                 help = STRING_TOKEN(0x0002),
                 flags = INTERACTIVE,
                 minsize = 6,
                 maxsize = 75,
       endstring;
       string varid = BmmData.DriverOptionalData,
                 questionid = 0x1112,
                 prompt = STRING_TOKEN(0x0060),
                 help = STRING_TOKEN(0x0002),
                 flags = INTERACTIVE,
                 minsize = 0,
                 maxsize = 120,
       endstring;
       checkbox varid = BmmData.ForceReconnect,
               prompt = STRING_TOKEN(0x002A),
               help = STRING_TOKEN(0x002A),
               flags = CHECKBOX_DEFAULT,
               key = 0,
       endcheckbox;
       subtitle text = STRING_TOKEN(0x0002);
       text
         help = STRING_TOKEN(0x002B),
         text = STRING_TOKEN(0x002B),
         flags = INTERACTIVE,
         key = 0x1115;
       text
         help = STRING_TOKEN(0x002C),
         text = STRING_TOKEN(0x002C),
         flags = INTERACTIVE,
         key = 0x1116;
  endform;
  form formid = 0x1006,
       title = STRING_TOKEN(0x0012);
       label 0x1006;
       label 0xffff;
  endform;
  form formid = 0x1007,
       title = STRING_TOKEN(0x0013);
       label 0x1007;
       label 0xffff;
  endform;
  form formid = 0x1008,
       title = STRING_TOKEN(0x0015);
       goto 0x1001,
       prompt = STRING_TOKEN(0x005D),
       help = STRING_TOKEN(0x005D);
       goto 0x1009,
       prompt = STRING_TOKEN(0x0017),
       help = STRING_TOKEN(0x0018),
       flags = INTERACTIVE,
       key = 0x1009;
       goto 0x100A,
       prompt = STRING_TOKEN(0x0019),
       help = STRING_TOKEN(0x001A),
       flags = INTERACTIVE,
       key = 0x100A;
       goto 0x100B,
       prompt = STRING_TOKEN(0x001B),
       help = STRING_TOKEN(0x001C),
       flags = INTERACTIVE,
       key = 0x100B;
       goto 0x1021,
       prompt = STRING_TOKEN(0x001D),
       help = STRING_TOKEN(0x001E),
       flags = INTERACTIVE,
       key = 0x1021;
       goto 0x1017,
       prompt = STRING_TOKEN(0x001F),
       help = STRING_TOKEN(0x0020),
       flags = INTERACTIVE,
       key = 0x1017;
  endform;
  form formid = 0x1021,
       title = STRING_TOKEN(0x001D);
       label 0x1021;
       label 0xffff;
  endform;
  form formid = 0x1017,
       title = STRING_TOKEN(0x001F);
       label 0x1017;
       label 0xffff;
  endform;
  form formid = 0x1018,
       title = STRING_TOKEN(0x002E);
       label 0x1018;
       label 0xffff;
  endform;
  form formid = 0x100C,
       title = STRING_TOKEN(0x000B);
       label 0x100C;
       label 0xffff;
  endform;
  form formid = 0x100D,
       title = STRING_TOKEN(0x000B);
       label 0x100D;
       label 0xffff;
  endform;
  form formid = 0x100F,
       title = STRING_TOKEN(0x0022);
       label 0x100F;
       label 0xffff;
  endform;
  form formid = 0x1010,
       title = STRING_TOKEN(0x0024);
       label 0x1010;
       label 0xffff;
  endform;
  form formid = 0x1009,
       title = STRING_TOKEN(0x0017);
       label 0x1009;
       label 0xffff;
  endform;
  form formid = 0x100A,
       title = STRING_TOKEN(0x0019);
       label 0x100A;
       label 0xffff;
  endform;
  form formid = 0x100B,
       title = STRING_TOKEN(0x001B);
       label 0x100B;
       label 0xffff;
  endform;
endformset;
