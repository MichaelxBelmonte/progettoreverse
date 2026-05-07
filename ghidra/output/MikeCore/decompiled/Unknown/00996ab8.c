// Function: FUN_00996ab8
// Address: 00996ab8
// Size: 736 bytes
// Class: Unknown
// String references:
//   "The evaluated iLok1 auth is expired.  The counter is at zero."
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Ilok1Protocols...
//   "pace::Ilok1CommandData_T pace::Ilok1Protocols::doChallengeWithTermsEvaluation(const uint32_t, const...
//   "The evaluated iLok1 auth is expired.  The time limit has been passed."


undefined8 FUN_00996ab8(char param_1,undefined8 *param_2,undefined1 *param_3,ulonglong *param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined4 unaff_ESI;
  uint uVar7;
  undefined **local_res8;
  undefined *local_c8;
  undefined *local_c0;
  byte local_b8;
  undefined2 uStack_b7;
  undefined1 uStack_b5;
  byte local_a8;
  undefined4 local_a0;
  undefined4 uStack_90;
  short sStack_8c;
  undefined1 uStack_8a;
  byte local_80;
  undefined8 *local_78;
  undefined8 local_70;
  byte local_60;
  ulonglong *local_58;
  ulonglong local_40;
  undefined4 local_34;
  
  local_58 = param_4;
  local_34 = unaff_ESI;
  FUN_009ada98();
  FUN_009ad8d0();
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  local_40 = FUN_0099482a();
  local_a0 = 0xfffffffe;
  FUN_00953fa0();
  local_c8 = local_c0;
  if (local_res8 == (undefined **)0x0) {
    local_res8 = &local_c8;
  }
  puVar5 = (undefined *)FUN_0094c1c0();
  *local_res8 = puVar5;
  if (local_58 != (ulonglong *)0x0) {
    *local_58 = local_40;
  }
  if ((local_40 & 0x300000000000000) != 0) {
    FUN_0099471c(0,local_34);
    uStack_90 = CONCAT13(uStack_b5,CONCAT21(uStack_b7,local_b8));
    sStack_8c = (short)((uint)_uStack_b5 >> 8);
    uStack_8a = (undefined1)((uint)_uStack_b5 >> 0x18);
    local_80 = local_a8;
    FUN_009adb6c();
    local_c0 = &DAT_02521ac8;
    local_b8 = local_80;
    local_60 = local_80;
    FUN_009ad902();
    if ((local_60 & 0x38) == 0x38) {
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = 1;
      }
      uVar2 = FUN_009977cd();
      local_78 = param_2;
      if ((uVar2 == 0) && (param_1 != '\0')) {
        local_70 = FUN_00925fd0();
        FUN_00926010();
        FUN_00928ab0("pace::Ilok1CommandData_T pace::Ilok1Protocols::doChallengeWithTermsEvaluation(const uint32_t, const pace::Ilok1CommandData_T &, bool, bool *, pace::Ilok1CommandData_T *, boost::posix_time::ptime *)"
                     ,0x2b2);
        FUN_009c720b();
        uVar7 = 0;
      }
      else {
        uVar7 = uVar2;
        if ((uVar2 != 0) && ((local_40 & 0x100000000000000) != 0)) {
          if (sStack_8c == 0x102) {
            uVar7 = uVar2 - 1;
          }
          else if (local_58 != (ulonglong *)0x0) {
            FUN_009977d8();
          }
        }
      }
      if ((local_40 & 0x200000000000000) == 0) {
        bVar1 = false;
      }
      else {
        if (param_3 != (undefined1 *)0x0) {
          *param_3 = 1;
        }
        uVar3 = FUN_009977cd();
        uVar4 = FUN_009f3942();
        uVar3 = uVar3 & 0xffffff00;
        bVar1 = uVar3 < uVar4 || uVar3 - uVar4 == 0;
        uVar7 = uVar3 - uVar4;
        if (uVar3 < uVar4) {
          uVar7 = 0;
        }
      }
      if (uVar7 <= uVar2 && uVar2 - uVar7 != 0) {
        FUN_00996de0(local_58,uVar2 - uVar7,&local_40);
      }
      param_2 = local_78;
      if ((bVar1) && (param_1 != '\0')) {
        FUN_00925fd0();
        FUN_00926010();
        FUN_00928ab0("pace::Ilok1CommandData_T pace::Ilok1Protocols::doChallengeWithTermsEvaluation(const uint32_t, const pace::Ilok1CommandData_T &, bool, bool *, pace::Ilok1CommandData_T *, boost::posix_time::ptime *)"
                     ,0x2f4);
        FUN_009c720b();
      }
      if (bVar1) {
        uVar6 = *param_2;
        goto LAB_00996d6e;
      }
    }
  }
  uVar6 = FUN_00994b9a(0,param_2);
LAB_00996d6e:
  FUN_009ad902();
  FUN_009adb6c();
  return uVar6;
}


