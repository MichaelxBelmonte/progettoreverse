// Function: FUN_0092d24e
// Address: 0092d24e
// Size: 521 bytes
// Class: Unknown
// String references:
//   "findPreferences"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "void pace::AuthorizationVerifier::findPreferences(const std::vector<pet::fusion::PreferenceSearch> ...

void FUN_0092d24e(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t *arg1;
  int64_t this_ptr;
  uint32_t uVar5;
  void*local_c0;
  int64_t local_b8 [3];
  uint8_t local_a0;
  int64_t local_98;
  uint8_t local_90;
  int64_t local_88;
  int64_t lStack_80;
  uint64_t local_78;
  void*local_70;
  int64_t local_68 [3];
  uint32_t local_50;
  uint16_t local_4c;
  int64_t local_48;
  int64_t lStack_40;
  uint64_t local_38;
  
  lVar1 = *param_2;
  for (lVar4 = param_2[1]; lVar4 != lVar1; lVar4 = lVar4 + -0x108) {
    (***(void**)(lVar4 + -0x108))();
  }
  param_2[1] = lVar1;
  if (arg1[1] != *arg1) {
    local_c0 = &g_0251a0c0;
    local_b8[0] = 0;
    local_b8[1] = 0;
    local_b8[2] = 0;
    local_a0 = 0;
    local_70 = &g_0251a118;
    local_68[0] = 0;
    local_68[1] = 0;
    local_68[2] = 0;
    local_50 = 4;
    local_4c = 0x100;
    if (local_b8 != arg1) {
      FUN_0094eb44();
    }
    local_98 = this_ptr + 0x18;
    local_90 = 0;
    FUN_009b4e10();
    if (*(int64_t *)(this_ptr + 0x70) == 0) {
      plVar3 = *(int64_t **)(this_ptr + 8);
      if (plVar3 == (int64_t *)0x0) {
        FUN_00925fd0();
        uVar2 = FUN_00926010();
        uVar5 = FUN_00928ab0("void pace::AuthorizationVerifier::findPreferences(const std::vector<pet::fusion::PreferenceSearch> &, std::vector<pet::fusion::PreferenceInfo> &)"
                             ,0x960);
        FUN_009bd14b(uVar5,uVar2);
        plVar3 = *(int64_t **)(this_ptr + 8);
      }
      (**(code **)(*plVar3 + 200))(4,&local_c0);
    }
    else {
      local_88 = 0;
      lStack_80 = 0;
      local_78 = 0;
      local_38 = 0;
      local_48 = 0;
      lStack_40 = 0;
      FUN_0092d4b9(0,1);
      plVar3 = &local_48;
      uVar5 = FUN_00928f8a(plVar3,&local_88);
      FUN_0094ed56(uVar5,&local_70);
      if (local_48 != 0) {
        lStack_40 = local_48;
        operator_delete(plVar3);
      }
      if (local_88 != 0) {
        lStack_80 = local_88;
        operator_delete(plVar3);
      }
    }
    if (local_68 != param_2) {
      FUN_008cc3e4();
    }
    FUN_0094d0ec();
    FUN_008bf450();
    FUN_008bedf4();
  }
  return;
}

