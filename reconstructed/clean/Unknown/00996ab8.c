// Function: FUN_00996ab8
// Address: 00996ab8
// Size: 736 bytes
// Class: Unknown
// String references:
//   "The evaluated iLok1 auth is expired.  The counter is at zero."
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Ilok1Protocols...
//   "pace::Ilok1CommandData_T pace::Ilok1Protocols::doChallengeWithTermsEvaluation(const uint32_t, const...
//   "The evaluated iLok1 auth is expired.  The time limit has been passed."

uint64_t FUN_00996ab8(char param_1,void*param_2,void*param_3,uint64_t *param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  void*puVar5;
  uint64_t uVar6;
  uint32_t unaff_ESI;
  uint uVar7;
  void**local_res8;
  void*local_c8;
  void*local_c0;
  byte local_b8;
  uint16_t uStack_b7;
  uint8_t uStack_b5;
  byte local_a8;
  uint32_t local_a0;
  uint32_t uStack_90;
  short sStack_8c;
  uint8_t uStack_8a;
  byte local_80;
  void*local_78;
  uint64_t local_70;
  byte local_60;
  uint64_t *local_58;
  uint64_t local_40;
  uint32_t local_34;
  
  local_58 = param_4;
  local_34 = unaff_ESI;
  FUN_009ada98();
  FUN_009ad8d0();
  if (param_3 != (void*)0x0) {
    *param_3 = 0;
  }
  local_40 = FUN_0099482a();
  local_a0 = 0xfffffffe;
  FUN_00953fa0();
  local_c8 = local_c0;
  if (local_res8 == (void**)0x0) {
    local_res8 = &local_c8;
  }
  puVar5 = (void*)FUN_0094c1c0();
  *local_res8 = puVar5;
  if (local_58 != (uint64_t *)0x0) {
    *local_58 = local_40;
  }
  if ((local_40 & 0x300000000000000) != 0) {
    FUN_0099471c(0,local_34);
    uStack_90 = CONCAT13(uStack_b5,CONCAT21(uStack_b7,local_b8));
    sStack_8c = (short)((uint)_uStack_b5 >> 8);
    uStack_8a = (uint8_t)((uint)_uStack_b5 >> 0x18);
    local_80 = local_a8;
    FUN_009adb6c();
    local_c0 = &g_02521ac8;
    local_b8 = local_80;
    local_60 = local_80;
    FUN_009ad902();
    if ((local_60 & 0x38) == 0x38) {
      if (param_3 != (void*)0x0) {
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
          else if (local_58 != (uint64_t *)0x0) {
            FUN_009977d8();
          }
        }
      }
      if ((local_40 & 0x200000000000000) == 0) {
        bVar1 = false;
      }
      else {
        if (param_3 != (void*)0x0) {
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

