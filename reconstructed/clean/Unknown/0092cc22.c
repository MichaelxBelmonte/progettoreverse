// Function: FUN_0092cc22
// Address: 0092cc22
// Size: 840 bytes
// Class: Unknown
// String references:
//   "findAuthChains"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "void pace::AuthorizationVerifier::findAuths(const std::vector<petpub::AuthSearch> &, const petpub::...

void FUN_0092cc22(int64_t *param_1,uint64_t param_2,int64_t *param_3)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  void*arg1;
  int64_t this_ptr;
  int64_t lVar4;
  uint32_t uVar5;
  void*local_1a0;
  uint64_t local_198;
  uint64_t local_190;
  uint64_t local_188;
  void*local_180;
  uint8_t local_178;
  uint32_t local_177;
  uint8_t local_173;
  uint32_t local_170;
  uint8_t local_16c;
  uint64_t local_168;
  uint64_t local_160;
  uint64_t local_158;
  uint64_t local_150;
  uint64_t local_148;
  uint64_t local_140;
  uint64_t local_138;
  uint64_t local_130;
  uint16_t local_128;
  uint8_t local_126;
  uint64_t local_120;
  uint64_t local_118;
  uint64_t local_110;
  uint64_t local_108;
  uint64_t local_100;
  uint64_t local_f8;
  undefined5 local_f0;
  undefined3 uStack_eb;
  undefined5 uStack_e8;
  int64_t local_e0;
  uint8_t local_d8;
  uint64_t local_d0;
  int64_t local_c8;
  int64_t lStack_c0;
  uint64_t local_b8;
  void*local_a8;
  int64_t local_a0 [6];
  uint8_t local_70;
  uint32_t local_6c;
  uint64_t local_68;
  uint8_t local_60;
  int64_t local_58;
  int64_t lStack_50;
  uint64_t local_48;
  
  lVar1 = *param_1;
  local_d0 = param_2;
  for (lVar4 = param_1[1]; lVar4 != lVar1; lVar4 = lVar4 + -0x288) {
    (***(void**)(lVar4 + -0x288))();
  }
  param_1[1] = lVar1;
  if (param_3 != (int64_t *)0x0) {
    lVar1 = *param_3;
    for (lVar4 = param_3[1]; lVar4 != lVar1; lVar4 = lVar4 + -0x760) {
      (***(void**)(lVar4 + -0x760))();
    }
    param_3[1] = lVar1;
  }
  local_1a0 = &g_0251a000;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_180 = &g_0251c7b8;
  local_178 = 1;
  local_16c = 0;
  local_177 = 0;
  local_173 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0x101010101010101;
  local_128 = 0;
  local_126 = 1;
  local_170 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  uStack_eb = 0;
  uStack_e8 = 0;
  local_a8 = &g_0251a068;
  local_6c = 0;
  local_a0[0] = 0;
  local_a0[1] = 0;
  local_a0[2] = 0;
  local_a0[3] = 0;
  local_a0[4] = 0;
  local_a0[5] = 0;
  local_70 = 0;
  local_68 = 0x1000000000004;
  local_60 = 1;
  if (&local_198 != arg1) {
    FUN_0094e6c0(0x30,arg1[1]);
  }
  FUN_008ff698();
  local_120 = FUN_009e95e1();
  local_e0 = this_ptr + 0x18;
  local_d8 = 0;
  FUN_009b4e10();
  if (*(int64_t *)(this_ptr + 0x70) == 0) {
    plVar3 = *(int64_t **)(this_ptr + 8);
    if (plVar3 == (int64_t *)0x0) {
      FUN_00925fd0();
      uVar2 = FUN_00926010();
      uVar5 = FUN_00928ab0("void pace::AuthorizationVerifier::findAuths(const std::vector<petpub::AuthSearch> &, const petpub::FindAuthOptions &, std::vector<petpub::AuthChain> &, std::vector<petpub::AuthSituation> *)"
                           ,0x8c4);
      FUN_009bd14b(uVar5,uVar2);
      plVar3 = *(int64_t **)(this_ptr + 8);
    }
    (**(code **)(*plVar3 + 0xb0))(4,&local_1a0);
  }
  else {
    local_c8 = 0;
    lStack_c0 = 0;
    local_b8 = 0;
    local_48 = 0;
    local_58 = 0;
    lStack_50 = 0;
    FUN_0092cfd5(0,1);
    plVar3 = &local_58;
    uVar5 = FUN_00928f8a(plVar3,&local_c8);
    FUN_0094e87e(uVar5,&local_a8);
    if (local_58 != 0) {
      lStack_50 = local_58;
      operator_delete(plVar3);
    }
    if (local_c8 != 0) {
      lStack_c0 = local_c8;
      operator_delete(plVar3);
    }
  }
  if (local_a0 != param_1) {
    FUN_0090e248();
  }
  if ((param_3 != (int64_t *)0x0) && (local_a0 + 3 != param_3)) {
    FUN_008cdc64();
  }
  FUN_0094d0ec();
  FUN_008be2ce();
  FUN_008bd4bc();
  return;
}

