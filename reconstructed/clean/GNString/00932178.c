// Function: FUN_00932178
// Address: 00932178
// Size: 1579 bytes
// Class: GNString
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "The AuthChain from the caller is empty"
//   "verifyAuth requires an encrypted channel setup with openLicenseDaemonEncryptedChannel or openQuickL...
//   "void pace::AuthorizationVerifier::verifyAuthIlok1(petpub::AuthChain &, const petpub::VerifyAuthOpti...
//   "Can't verify an authChain that is marked as not authorized."
//   "iLok1 VerifyAuth: Not authorized"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00932178(uint64_t param_1,int64_t param_2,int64_t param_3,int64_t *param_4)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint64_t uVar4;
  void*puVar5;
  string *psVar6;
  string *psVar7;
  int64_t arg1;
  int64_t this_ptr;
  uint32_t uVar8;
  int64_t local_res8;
  int64_t *local_res10;
  int64_t *plVar9;
  void*local_158;
  uint64_t local_150;
  uint64_t local_148;
  uint64_t local_140;
  void*local_138;
  uint32_t local_130;
  uint64_t local_128;
  uint32_t local_120;
  uint16_t local_11c;
  uint8_t local_11a;
  uint16_t local_118;
  uint64_t local_110;
  int64_t *local_108;
  uint64_t local_100;
  int64_t *local_f8;
  uint64_t local_f0;
  uint64_t local_e8;
  int64_t *local_e0;
  int64_t local_c8;
  int64_t local_c0;
  int64_t local_98;
  int64_t lStack_90;
  uint64_t local_88;
  void*local_70;
  int64_t local_68;
  int64_t lStack_60;
  uint64_t local_58;
  byte local_41;
  string local_40 [8];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  local_68 = CONCAT44(local_68._4_4_,0xfffffffe);
  local_98 = 0x7ffffffffffffffe;
  local_c8 = param_3;
  local_c0 = param_2;
  FUN_00953fa0();
  local_70 = local_158;
  if (*(int64_t *)(arg1 + 0x10) == *(int64_t *)(arg1 + 8)) {
    FUN_00925fd0();
    uVar4 = FUN_00926010();
    uVar8 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthIlok1(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *)"
                         ,0x378b);
    FUN_009bd14b(uVar8,uVar4);
  }
  if (*(char *)(arg1 + 0x20) == '\0') {
    FUN_00925fd0();
    uVar4 = FUN_00926010();
    uVar8 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthIlok1(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *)"
                         ,0x3792);
    FUN_009bd14b(uVar8,uVar4);
  }
  psVar6 = (string *)(segment_command_00000020.segname + 8);
  local_158 = &g_02517678;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  psVar7 = (string *)&g_0251cd00;
  local_138 = &g_0251cd00;
  local_128 = 0;
  local_11c = 1;
  local_11a = 1;
  local_130 = 1;
  local_120 = 0;
  local_118 = 0;
  FUN_008911e2();
  std::string::operator=(psVar6,psVar7);
  local_130 = 1;
  local_128 = *(void*)(arg1 + 0x60);
  local_118 = CONCAT11(1,(uint8_t)local_118);
  FUN_009b4e10();
  if (*(int64_t *)(this_ptr + 0x70) == 0) {
    FUN_00925fd0();
    uVar4 = FUN_00926010();
    uVar8 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthIlok1(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *)"
                         ,0x37a5);
    FUN_009bd14b(uVar8,uVar4);
  }
  local_110 = *(void*)(this_ptr + 8);
  local_108 = *(int64_t **)(this_ptr + 0x10);
  if (local_108 != (int64_t *)0x0) {
    LOCK();
    local_108[1] = local_108[1] + 1;
    UNLOCK();
  }
  uVar8 = *(void*)(this_ptr + 0x68);
  local_100 = *(void*)(this_ptr + 0x70);
  local_f8 = *(int64_t **)(this_ptr + 0x78);
  if (local_f8 != (int64_t *)0x0) {
    LOCK();
    local_f8[1] = local_f8[1] + 1;
    UNLOCK();
  }
  FUN_00945108(uVar8,&local_158,&local_100);
  if (local_f8 != (int64_t *)0x0) {
    LOCK();
    plVar1 = local_f8 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*local_f8 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_108 != (int64_t *)0x0) {
    LOCK();
    plVar1 = local_108 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*local_108 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  *(void*)(arg1 + 0x20) = 1;
  *(void*)(arg1 + 0x24) = 100;
  if ((param_4 == (int64_t *)0x0) || ((uint64_t)(param_4[1] - *param_4) < 8)) {
    FUN_009e9d9c();
  }
  else {
    local_f0 = *(void*)*param_4;
  }
  uVar4 = FUN_00996ab8(1,&local_f0,&local_41,local_40);
  if (local_c8 != 0) {
    FUN_0093f218(local_c8,param_1,4);
  }
  psVar7 = (string *)(uint64_t)local_41;
  psVar6 = local_40;
  FUN_00939c54(psVar7,psVar6,&local_70,1);
  if (*(char *)(arg1 + 0x20) == '\0') {
    FUN_00925fd0();
    uVar4 = FUN_00926010();
    uVar8 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthIlok1(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *)"
                         ,0x385b);
    FUN_009bd14b(uVar8,uVar4);
  }
  else {
    if (*(char *)(local_c0 + 0xb) != '\0') {
      FUN_00943e2a();
    }
    if (param_4 != (int64_t *)0x0) {
      puVar5 = (void*)*param_4;
      psVar7 = (string *)(param_4[1] - (int64_t)puVar5);
      if ((string *)((int64_t)&MACH_HEADER.cputype + 3) < psVar7) {
        if (psVar7 != (string *)&MACH_HEADER.cpusubtype) {
          psVar7 = (string *)(puVar5 + 1);
          param_4[1] = (int64_t)psVar7;
        }
      }
      else {
        FUN_00958ec0();
        puVar5 = (void*)*param_4;
      }
      *puVar5 = uVar4;
    }
    plVar1 = local_e0;
    if (((local_res8 != 0) && (local_res10 != (int64_t *)0x0)) && (local_res10[1] != *local_res10))
    {
      local_98 = 0;
      lStack_90 = 0;
      local_88 = 0;
      local_58 = 0;
      local_68 = 0;
      lStack_60 = 0;
      if (local_e0 != (int64_t *)0x0) {
        LOCK();
        local_e0[1] = local_e0[1] + 1;
        UNLOCK();
      }
      plVar9 = local_e0;
      FUN_009451f8(local_res8);
      if (plVar1 != (int64_t *)0x0) {
        LOCK();
        plVar2 = plVar1 + 1;
        lVar3 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar3 == 0) {
          (**(code **)(*plVar1 + 0x10))();
          std::__shared_weak_count::__release_weak();
        }
      }
      psVar6 = (string *)(uint64_t)*(uint *)(local_res8 + 0xc);
      psVar7 = (string *)&local_98;
      FUN_0092b386(psVar7,psVar6,&local_68,local_res10[1] - *local_res10,local_e8,plVar9);
      ___bzero();
      ___bzero();
      if (local_68 != 0) {
        lStack_60 = local_68;
        operator_delete(psVar7);
      }
      if (local_98 != 0) {
        lStack_90 = local_98;
        operator_delete(psVar7);
      }
    }
    FUN_009f35cc();
    std::string::operator=(psVar7,psVar6);
  }
  if (local_e0 != (int64_t *)0x0) {
    LOCK();
    plVar1 = local_e0 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*local_e0 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_0094d0ec();
  FUN_00891d28();
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                      ___stack_chk_fail();
}

