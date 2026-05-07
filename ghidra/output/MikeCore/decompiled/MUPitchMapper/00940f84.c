// Function: FUN_00940f84
// Address: 00940f84
// Size: 591 bytes
// Class: MUPitchMapper
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "convertDevDataFromIlok2ToPublic was passed a storage record with the wrong bRecordtype (0x%02X)"
//   "static petpub::DeveloperDataRecord pace::AuthorizationVerifier::convertDevDataFromIlok2ToPublic(con...


void FUN_00940f84(byte *param_1,byte *param_2)

{
  ushort uVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  ushort uVar6;
  char *unaff_RSI;
  longlong lVar7;
  undefined8 *unaff_RDI;
  
  *unaff_RDI = &DAT_0251c198;
  *(undefined4 *)(unaff_RDI + 1) = 0;
  lVar7 = 0;
  unaff_RDI[2] = 0;
  unaff_RDI[3] = 0;
  unaff_RDI[4] = 0;
  unaff_RDI[5] = 0;
  unaff_RDI[6] = 0;
  unaff_RDI[7] = 0;
  unaff_RDI[8] = 0;
  unaff_RDI[9] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x4d) = 0;
  lVar3 = 0;
  if (*unaff_RSI != -0x7c) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00983230();
    FUN_00928ab0("static petpub::DeveloperDataRecord pace::AuthorizationVerifier::convertDevDataFromIlok2ToPublic(const EEPROM_StorageRecordStruct &, bool &, bool &, int32_t)"
                 ,&DAT_00002c71);
    FUN_009bd14b();
    lVar7 = unaff_RDI[2];
    lVar3 = unaff_RDI[3];
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x4b) = 1;
  *(undefined4 *)(unaff_RDI + 1) = *(undefined4 *)(unaff_RSI + 4);
  if ((ulonglong)(lVar3 - lVar7) < 4) {
    FUN_0088d550();
  }
  else if (lVar3 - lVar7 != 4) {
    unaff_RDI[3] = lVar7 + 4;
  }
  FUN_009740dc();
  uVar4 = unaff_RDI[6] - unaff_RDI[5];
  if (uVar4 < 0x10) {
    FUN_0088d550();
  }
  else if (uVar4 != 0x10) {
    unaff_RDI[6] = unaff_RDI[5] + 0x10;
  }
  FUN_009740dc();
  FUN_009740dc();
  FUN_009740dc();
  FUN_009740dc();
  uVar1 = *(ushort *)(unaff_RSI + 2);
  uVar6 = uVar1 & 3;
  if ((((uVar1 >> 2 & 3) == uVar6) && ((uVar1 >> 4 & 3) == uVar6)) && ((uVar1 >> 6 & 3) == uVar6)) {
    switch(uVar6) {
    case 0:
      *(undefined4 *)(unaff_RDI + 8) = 4;
      break;
    case 1:
      *(undefined4 *)(unaff_RDI + 8) = 1;
      break;
    case 2:
      *(undefined4 *)(unaff_RDI + 8) = 2;
      break;
    case 3:
      *(undefined4 *)(unaff_RDI + 8) = 3;
    }
  }
  else {
    *(undefined4 *)(unaff_RDI + 8) = 5;
    *(undefined1 *)((longlong)unaff_RDI + 0x4b) = 0;
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x44) = 0x10;
  bVar2 = (byte)(uVar1 >> 8);
  *(byte *)(unaff_RDI + 9) = bVar2 & 1;
  bVar5 = bVar2 >> 5 & 1;
  *(byte *)((longlong)unaff_RDI + 0x49) = bVar5;
  bVar2 = bVar2 >> 6 & 1;
  *(byte *)((longlong)unaff_RDI + 0x4a) = bVar2;
  if (*(char *)((longlong)unaff_RDI + 0x4b) != '\0') {
    *param_2 = *param_2 | bVar5;
    *param_1 = *param_1 | bVar2;
  }
  return;
}


