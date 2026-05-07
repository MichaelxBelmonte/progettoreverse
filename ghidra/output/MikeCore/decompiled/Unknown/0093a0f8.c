// Function: FUN_0093a0f8
// Address: 0093a0f8
// Size: 931 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "convertTimeLimitFromIlok1ToPublic was passed bad userdata at address (0x%16X)"
//   "static petpub::TimeLimitRecord pace::AuthorizationVerifier::convertTimeLimitFromIlok1ToPublic(const...
//   "convertTimeLimitFromIlok1ToPublic was passed userdata with the wrong SpecialFeatureBits (0x%02X)"


void FUN_0093a0f8(int param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  undefined1 *local_80;
  longlong local_78;
  undefined1 *local_68;
  code *local_60;
  code *local_58;
  int local_4c;
  undefined1 *local_48;
  undefined4 local_40;
  
  local_48 = (undefined1 *)CONCAT44(local_48._4_4_,0xfffffffe);
  local_80 = (undefined1 *)0x7ffffffffffffffe;
  local_4c = param_1;
  FUN_00953fa0(0x7ffffffffffffffe,&local_80);
  local_78 = CONCAT44(local_78._4_4_,0xfffffffe);
  local_80 = (undefined1 *)0x7ffffffffffffffe;
  FUN_00953fa0();
  local_48 = local_68;
  *unaff_RDI = &DAT_0251c0d8;
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
  unaff_RDI[0x10] = 0;
  unaff_RDI[0x11] = 0;
  if (unaff_RSI == 0) {
    FUN_00925fd0();
    FUN_00926010();
    local_68 = &stack0xffffffffffffffc8;
    local_60 = FUN_00950325;
    local_58 = FUN_0095032b;
    FUN_00983230();
    FUN_00928ab0("static petpub::TimeLimitRecord pace::AuthorizationVerifier::convertTimeLimitFromIlok1ToPublic(const uint8_t *, const boost::posix_time::ptime &, uint32_t, int32_t)"
                 ,&DAT_00002dcd);
    FUN_009bd14b();
  }
  iVar2 = local_4c;
  if ((*(byte *)(unaff_RSI + 7) & 2) == 0) {
    FUN_00925fd0();
    FUN_00926010();
    local_68 = (undefined1 *)(unaff_RSI + 7);
    local_60 = FUN_0094fb68;
    local_58 = FUN_0094fb6e;
    FUN_00983230();
    FUN_00928ab0("static petpub::TimeLimitRecord pace::AuthorizationVerifier::convertTimeLimitFromIlok1ToPublic(const uint8_t *, const boost::posix_time::ptime &, uint32_t, int32_t)"
                 ,&DAT_00002dd3);
    FUN_009bd14b();
  }
  if (iVar2 != -1) {
    uVar3 = unaff_RDI[3] - unaff_RDI[2];
    if (uVar3 < 4) {
      FUN_0088d550();
    }
    else if (uVar3 != 4) {
      unaff_RDI[3] = unaff_RDI[2] + 4;
    }
    FUN_009740dc();
  }
  *(undefined4 *)(unaff_RDI + 1) = 0x80000000;
  uVar1 = FUN_0097413b();
  FUN_0097e7bc(1,1);
  local_78 = CONCAT44(local_78._4_4_,local_40);
  FUN_00953fa0();
  local_80 = local_68;
  local_68 = (undefined1 *)
             ((((ulonglong)(uVar1 & 0xffffff00) / 0x3c) * 0x3c +
              (ulonglong)((uVar1 & 0xffffff00) % 0x3c)) * 1000000);
  local_48 = (undefined1 *)FUN_0094cb3a();
  FUN_009f35cc();
  uVar1 = FUN_0097413b();
  uVar3 = (ulonglong)uVar1 + 300;
  local_78 = uVar3 * 1000000;
  FUN_009f6c90();
  FUN_009f35cc();
  FUN_0094ca28();
  local_68 = (undefined1 *)0x0;
  iVar2 = FUN_0098c910();
  if (iVar2 == -1) {
    unaff_RDI[0xb] = 0;
  }
  else {
    FUN_009f3a8b();
    if (local_68 <= uVar3) {
      if ((longlong)local_68 < 0) {
        local_68 = (undefined1 *)0x7fffffffffffffff;
      }
      unaff_RDI[0xb] = local_68;
      *(bool *)((longlong)unaff_RDI + 0x83) = local_68 != (undefined1 *)0x0;
      goto LAB_0093a480;
    }
    unaff_RDI[0xb] = uVar3;
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x83) = 0;
LAB_0093a480:
  *(undefined1 *)((longlong)unaff_RDI + 0x82) = 0;
  return;
}


