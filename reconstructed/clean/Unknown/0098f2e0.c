// Function: FUN_0098f2e0
// Address: 0098f2e0
// Size: 863 bytes
// Class: Unknown

void FUN_0098f2e0(string *param_1)

{
  int64_t lVar1;
  uint64_t uVar2;
  string *psVar3;
  int iVar4;
  string *psVar5;
  string *psVar6;
  string *psVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar8;
  byte local_208;
  string *local_1c8;
  string *psStack_1c0;
  string *local_1b8;
  string *local_1b0;
  string *local_1a8;
  string *local_1a0;
  string *local_198;
  int64_t local_58;
  int64_t local_50;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  local_1c8 = (string *)0x0;
  psStack_1c0 = (string *)0x0;
  local_1b8 = (string *)0x0;
  lVar1 = arg1[1];
  psVar7 = local_1c8;
  for (lVar8 = *arg1; lVar8 != lVar1; lVar8 = lVar8 + 0x18) {
    if (psStack_1c0 == local_1b8) {
      psVar6 = (string *)(((int64_t)local_1b8 - (int64_t)psVar7 >> 3) * -0x5555555555555555);
      if ((string *)0xaaaaaaaaaaaaaaa < psVar6 + 1) {
                            std::__vector_base_common<true>::__throw_length_error();
      }
      psVar5 = (string *)&local_1b8;
      FUN_008d3ea0();
      std::string::string(psVar5,psVar6);
      param_1 = local_198;
      psVar6 = local_1a0;
      psVar3 = local_1b8;
      local_1a0 = psVar7;
      local_1c8 = local_1a8;
      for (psVar5 = psStack_1c0; psVar5 != psVar7; psVar5 = psVar5 + -0x18) {
        *(void*)(local_1c8 + -8) = *(void*)(psVar5 + -8);
        uVar2 = *(void*)(psVar5 + -0x18);
        *(void*)(local_1c8 + -0x10) = *(void*)(psVar5 + -0x10);
        *(void*)(local_1c8 + -0x18) = uVar2;
        *(void*)(psVar5 + -0x18) = 0;
        *(void*)(psVar5 + -0x10) = 0;
        *(void*)(psVar5 + -8) = 0;
        local_1c8 = local_1c8 + -0x18;
        local_1a0 = psStack_1c0;
      }
      local_1b8 = local_198;
      local_198 = psVar3;
      local_1b0 = psVar7;
      local_1a8 = psVar7;
      FUN_0088cd00();
    }
    else {
      std::string::string(param_1,local_1b8);
      local_1c8 = psVar7;
      psVar6 = psStack_1c0;
    }
    psStack_1c0 = psVar6 + 0x18;
    psVar7 = local_1c8;
  }
  psVar6 = (string *)&local_1b0;
  FUN_00990540();
  for (; psVar7 != psStack_1c0; psVar7 = psVar7 + 0x18) {
    FUN_0098e9d8();
    std::string::string(param_1,psVar6);
    FUN_0098f062();
    if ((local_208 & 1) != 0) {
      operator_delete(param_1);
    }
    iVar4 = FUN_00973595();
    if (iVar4 != 0) {
      FUN_00958ec0();
    }
    psVar6 = (string *)0x0;
    param_1 = (string *)0x0;
    (**(code **)(local_1b0 + 0x48))();
    (**(code **)(*this_ptr + 0x28))();
    local_1b0 = (string *)&g_025212c8;
    if (local_58 != 0) {
      local_50 = local_58;
      operator_delete(param_1);
    }
  }
  FUN_0088cae0();
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return;
}

