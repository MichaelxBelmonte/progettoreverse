// Function: FUN_009a31dc
// Address: 009a31dc
// Size: 2495 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Ilok2Commander...
//   "Error converting the upper two digits of the Year from ptime (%d) to ILokTime."
//   "static ILok2_TimeStruct pace::ILok2Commander::GetILokTime_FromPtime(const boost::posix_time::ptime ...
//   "Error converting the lower two digits of the Year from ptime (%d) to ILokTime."
//   "Error converting the Month from ptime (%d) to ILokTime."
//   "Error converting the Day from ptime (%d) to ILokTime."
//   "Error converting the Hours from ptime (%d) to ILokTime."
//   "Error converting the Minutes from ptime (%d) to ILokTime."
//   "Error converting the Seconds from ptime (%d) to ILokTime."
//   "A zero for the ILokTime Date is not valid, since a zero date has special meaning for some iLok2 com...


ulonglong FUN_009a31dc(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint local_44;
  
  FUN_009a86b0();
  FUN_009a81f8();
  FUN_009a81f8();
  FUN_0097e070();
  FUN_00997550();
  bVar1 = FUN_00974109();
  local_44 = (uint)bVar1;
  if (bVar1 == 0xff) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_009a81f8();
    FUN_009a81f8();
    FUN_0097e070();
    FUN_00997550();
    FUN_00983230();
    FUN_00928ab0("static ILok2_TimeStruct pace::ILok2Commander::GetILokTime_FromPtime(const boost::posix_time::ptime &)"
                 ,0xeb1);
    FUN_009c720b();
  }
  FUN_009a81f8();
  FUN_009a81f8();
  FUN_0097e070();
  FUN_00997550();
  bVar1 = FUN_00974109(0x578,0);
  if (bVar1 == 0xff) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_009a81f8();
    FUN_009a81f8();
    FUN_0097e070();
    FUN_00997550();
    FUN_00983230();
    FUN_00928ab0("static ILok2_TimeStruct pace::ILok2Commander::GetILokTime_FromPtime(const boost::posix_time::ptime &)"
                 ,0xebd);
    FUN_009c720b();
  }
  FUN_009a81f8();
  FUN_009a81f8();
  FUN_0097e070();
  FUN_00997550();
  bVar2 = FUN_00974109();
  if (bVar2 == 0xff) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_009a81f8();
    FUN_009a81f8();
    FUN_0097e070();
    FUN_00997550();
    FUN_00983230();
    FUN_00928ab0("static ILok2_TimeStruct pace::ILok2Commander::GetILokTime_FromPtime(const boost::posix_time::ptime &)"
                 ,0xecb);
    FUN_009c720b();
  }
  FUN_009a81f8();
  FUN_009a81f8();
  FUN_0097e070();
  FUN_00997550();
  bVar3 = FUN_00974109();
  if (bVar3 == 0xff) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_009a81f8();
    FUN_009a81f8();
    FUN_0097e070();
    FUN_00997550();
    FUN_00983230();
    FUN_00928ab0("static ILok2_TimeStruct pace::ILok2Commander::GetILokTime_FromPtime(const boost::posix_time::ptime &)"
                 ,0xed9);
    FUN_009c720b();
  }
  bVar4 = FUN_00974109(0x98b5bf2c03e529c5,0);
  if (bVar4 == 0xff) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00983230();
    FUN_00928ab0("static ILok2_TimeStruct pace::ILok2Commander::GetILokTime_FromPtime(const boost::posix_time::ptime &)"
                 ,0xee9);
    FUN_009c720b();
  }
  bVar5 = FUN_00974109(0x8888888888888889,0);
  if (bVar5 == 0xff) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00983230();
    FUN_00928ab0("static ILok2_TimeStruct pace::ILok2Commander::GetILokTime_FromPtime(const boost::posix_time::ptime &)"
                 ,0xef5);
    FUN_009c720b();
  }
  uVar6 = (uint)bVar1 << 0x10 | local_44 << 0x18 | (uint)bVar2 << 8 | (uint)bVar3;
  bVar1 = FUN_00974109(0x8888888888888889,0);
  if (bVar1 == 0xff) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00983230();
    FUN_00928ab0("static ILok2_TimeStruct pace::ILok2Commander::GetILokTime_FromPtime(const boost::posix_time::ptime &)"
                 ,0xf01);
    FUN_009c720b();
  }
  if (uVar6 == 0) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00928ab0("static ILok2_TimeStruct pace::ILok2Commander::GetILokTime_FromPtime(const boost::posix_time::ptime &)"
                 ,0xf17);
    FUN_009c720b();
  }
  return (ulonglong)bVar4 << 0x38 | (ulonglong)uVar6 | (ulonglong)bVar5 << 0x30 |
         (ulonglong)bVar1 << 0x28;
}


