// Function: FUN_0093a51a
// Address: 0093a51a
// Size: 546 bytes
// Class: GNUni
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "convertCountLimitFromIlok1ToPublic was passed a bad userdata at address (0x%16X)"
//   "static petpub::CountLimitRecord pace::AuthorizationVerifier::convertCountLimitFromIlok1ToPublic(con...
//   "convertCountLimitFromIlok1ToPublic was passed userdata with the wrong SpecialFeatureBits (0x%02X)"


void FUN_0093a51a(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  bool bVar4;
  
  *unaff_RDI = &DAT_0251c140;
  *(undefined4 *)(unaff_RDI + 1) = 0;
  unaff_RDI[2] = 0;
  unaff_RDI[3] = 0;
  unaff_RDI[4] = 0;
  *(undefined2 *)(unaff_RDI + 5) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x2c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x32) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x3c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x44) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x4c) = 0;
  *(undefined4 *)((longlong)unaff_RDI + 0x53) = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0x57) = 1;
  *(undefined1 *)((longlong)unaff_RDI + 0x59) = 0;
  if (unaff_RSI == 0) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00983230();
    FUN_00928ab0("static petpub::CountLimitRecord pace::AuthorizationVerifier::convertCountLimitFromIlok1ToPublic(const uint8_t *, bool, uint32_t, int32_t)"
                 ,&DAT_00002b4b);
    FUN_009bd14b();
  }
  if ((*(byte *)(unaff_RSI + 7) & 1) == 0) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00983230();
    FUN_00928ab0("static petpub::CountLimitRecord pace::AuthorizationVerifier::convertCountLimitFromIlok1ToPublic(const uint8_t *, bool, uint32_t, int32_t)"
                 ,&DAT_00002b52);
    FUN_009bd14b();
  }
  *(undefined4 *)(unaff_RDI + 1) = 0x80000000;
  if (param_1 != -1) {
    uVar3 = unaff_RDI[3] - unaff_RDI[2];
    if (uVar3 < 4) {
      FUN_0088d550();
    }
    else if (uVar3 != 4) {
      unaff_RDI[3] = unaff_RDI[2] + 4;
    }
    FUN_009740dc();
  }
  *(undefined2 *)(unaff_RDI + 5) = 1;
  iVar1 = FUN_0097413b();
  *(int *)((longlong)unaff_RDI + 0x2c) = iVar1;
  if ((*(byte *)(unaff_RSI + 7) & 4) == 0) {
    *(undefined4 *)(unaff_RDI + 6) = 0xffffffff;
    *(undefined1 *)(unaff_RDI + 9) = 1;
    bVar4 = false;
  }
  else {
    uVar2 = FUN_0097413b();
    *(uint *)(unaff_RDI + 6) = uVar2 >> 8;
    iVar1 = *(int *)((longlong)unaff_RDI + 0x2c);
    bVar4 = *(char *)(unaff_RDI + 9) == '\0';
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x34) = 2;
  *(undefined2 *)(unaff_RDI + 7) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x3c) = 0;
  *(undefined4 *)((longlong)unaff_RDI + 0x44) = 0;
  *(undefined1 *)((longlong)unaff_RDI + 0x49) = 0;
  *(byte *)((longlong)unaff_RDI + 0x4a) = (iVar1 != 0 | param_2) & bVar4;
  return;
}


