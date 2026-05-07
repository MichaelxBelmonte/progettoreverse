// Function: FUN_009411fc
// Address: 009411fc
// Size: 988 bytes
// Class: GNUni
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "convertSecretDataFromIlok2ToPublic was passed a storage record with the wrong bRecordtype (0x%02X)"
//   "static petpub::SecretDataRecord pace::AuthorizationVerifier::convertSecretDataFromIlok2ToPublic(con...


void FUN_009411fc(byte *param_1,byte *param_2)

{
  ushort uVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  char *unaff_RSI;
  byte bVar5;
  undefined8 *unaff_RDI;
  int iVar6;
  
  *unaff_RDI = &DAT_0251c200;
  lVar4 = 0;
  *(undefined4 *)(unaff_RDI + 1) = 0;
  unaff_RDI[2] = 0;
  unaff_RDI[3] = 0;
  unaff_RDI[4] = 0;
  unaff_RDI[5] = 0;
  unaff_RDI[6] = 0;
  unaff_RDI[7] = 0;
  unaff_RDI[8] = 0;
  unaff_RDI[9] = 0;
  unaff_RDI[10] = 0;
  unaff_RDI[0xb] = 0;
  unaff_RDI[0xc] = 0;
  unaff_RDI[0xd] = 0;
  unaff_RDI[0xe] = 0;
  unaff_RDI[0xf] = 0;
  *(undefined4 *)(unaff_RDI + 0x10) = 0;
  lVar3 = 0;
  if (*unaff_RSI != -0x78) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00983230();
    FUN_00928ab0("static petpub::SecretDataRecord pace::AuthorizationVerifier::convertSecretDataFromIlok2ToPublic(const EEPROM_StorageRecordStruct &, bool &, bool &, int32_t)"
                 ,&DAT_00002cf7);
    FUN_009bd14b();
    lVar4 = unaff_RDI[2];
    lVar3 = unaff_RDI[3];
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x74) = 1;
  *(undefined4 *)(unaff_RDI + 1) = *(undefined4 *)(unaff_RSI + 4);
  if ((ulonglong)(lVar3 - lVar4) < 4) {
    FUN_0088d550();
  }
  else if (lVar3 - lVar4 != 4) {
    unaff_RDI[3] = lVar4 + 4;
  }
  FUN_009740dc();
  lVar4 = FUN_008e4ece();
  *(undefined4 *)((longlong)unaff_RDI + 100) = *(undefined4 *)(lVar4 + 0x30);
  uVar1 = *(ushort *)(unaff_RSI + 2);
  *(uint *)(unaff_RDI + 0xd) = uVar1 & 0x1f;
  switch(uVar1 >> 10 & 3) {
  case 0:
    *(undefined4 *)(unaff_RDI + 0xc) = 0;
    switch(unaff_RSI[1]) {
    case '\0':
      *(undefined4 *)((longlong)unaff_RDI + 100) = 0;
      iVar6 = 0;
      switch(uVar1 >> 6 & 3) {
      case 1:
        goto switchD_009413fa_caseD_1;
      case 2:
        goto switchD_009413fa_caseD_2;
      case 3:
        goto switchD_009413fa_caseD_3;
      }
      break;
    case '\x01':
      *(undefined4 *)((longlong)unaff_RDI + 100) = 1;
      iVar6 = 0;
      switch(uVar1 >> 6 & 3) {
      case 1:
        goto switchD_009413fa_caseD_1;
      case 2:
        goto switchD_009413fa_caseD_2;
      case 3:
        goto switchD_009413fa_caseD_3;
      }
      break;
    case '\x02':
      *(undefined4 *)((longlong)unaff_RDI + 100) = 2;
      iVar6 = 0;
      switch(uVar1 >> 6 & 3) {
      case 1:
        goto switchD_009413fa_caseD_1;
      case 2:
        goto switchD_009413fa_caseD_2;
      case 3:
        goto switchD_009413fa_caseD_3;
      }
      break;
    case '\x03':
      *(undefined4 *)((longlong)unaff_RDI + 100) = 3;
      iVar6 = 0;
      switch(uVar1 >> 6 & 3) {
      case 1:
        goto switchD_009413fa_caseD_1;
      case 2:
        goto switchD_009413fa_caseD_2;
      case 3:
        goto switchD_009413fa_caseD_3;
      }
      break;
    default:
      iVar6 = 0;
LAB_009414bd:
      switch(uVar1 >> 6 & 3) {
      case 1:
        goto switchD_009413fa_caseD_1;
      case 2:
        goto switchD_009413fa_caseD_2;
      case 3:
        goto switchD_009413fa_caseD_3;
      }
    }
    break;
  case 1:
    *(undefined4 *)(unaff_RDI + 0xc) = 1;
    switch(unaff_RSI[1]) {
    case '\0':
      *(undefined4 *)((longlong)unaff_RDI + 100) = 0;
      iVar6 = 1;
      switch(uVar1 >> 6 & 3) {
      case 1:
        goto switchD_009413fa_caseD_1;
      case 2:
        goto switchD_009413fa_caseD_2;
      case 3:
        goto switchD_009413fa_caseD_3;
      }
      break;
    case '\x01':
      *(undefined4 *)((longlong)unaff_RDI + 100) = 1;
      iVar6 = 1;
      switch(uVar1 >> 6 & 3) {
      case 1:
        goto switchD_009413fa_caseD_1;
      case 2:
        goto switchD_009413fa_caseD_2;
      case 3:
        goto switchD_009413fa_caseD_3;
      }
      break;
    case '\x02':
      *(undefined4 *)((longlong)unaff_RDI + 100) = 2;
      iVar6 = 1;
      switch(uVar1 >> 6 & 3) {
      case 1:
        goto switchD_009413fa_caseD_1;
      case 2:
        goto switchD_009413fa_caseD_2;
      case 3:
        goto switchD_009413fa_caseD_3;
      }
      break;
    case '\x03':
      *(undefined4 *)((longlong)unaff_RDI + 100) = 3;
      iVar6 = 1;
      switch(uVar1 >> 6 & 3) {
      case 1:
        goto switchD_009413fa_caseD_1;
      case 2:
        goto switchD_009413fa_caseD_2;
      case 3:
        goto switchD_009413fa_caseD_3;
      }
      break;
    default:
      iVar6 = 1;
      goto LAB_009414bd;
    }
    break;
  case 2:
    *(undefined4 *)(unaff_RDI + 0xc) = 2;
    iVar6 = 2;
    switch(uVar1 >> 6 & 3) {
    case 1:
switchD_009413fa_caseD_1:
      *(undefined4 *)(unaff_RDI + 0xb) = 1;
      goto LAB_00941579;
    case 2:
switchD_009413fa_caseD_2:
      *(undefined4 *)(unaff_RDI + 0xb) = 2;
      goto LAB_00941579;
    case 3:
switchD_009413fa_caseD_3:
      *(undefined4 *)(unaff_RDI + 0xb) = 3;
      goto LAB_00941579;
    }
    break;
  case 3:
    *(undefined4 *)(unaff_RDI + 0xc) = 3;
    iVar6 = 3;
    switch(uVar1 >> 6 & 3) {
    case 1:
      goto switchD_009413fa_caseD_1;
    case 2:
      goto switchD_009413fa_caseD_2;
    case 3:
      goto switchD_009413fa_caseD_3;
    }
  }
  if (iVar6 == 2) {
    *(undefined4 *)(unaff_RDI + 0xb) = 0;
  }
  else {
    *(undefined4 *)(unaff_RDI + 0xb) = 5;
  }
LAB_00941579:
  *(undefined4 *)((longlong)unaff_RDI + 0x5c) = 0x10;
  bVar5 = (byte)(uVar1 >> 8);
  *(byte *)(unaff_RDI + 0xe) = (iVar6 == 3 || iVar6 == 2) | bVar5 >> 4 & 1;
  *(byte *)((longlong)unaff_RDI + 0x71) = bVar5 & 1;
  bVar2 = bVar5 >> 5 & 1;
  *(byte *)((longlong)unaff_RDI + 0x72) = bVar2;
  bVar5 = bVar5 >> 6 & 1;
  *(byte *)((longlong)unaff_RDI + 0x73) = bVar5;
  *param_2 = *param_2 | bVar2;
  *param_1 = *param_1 | bVar5;
  return;
}


