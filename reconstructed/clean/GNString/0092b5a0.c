// Function: FUN_0092b5a0
// Address: 0092b5a0
// Size: 1498 bytes
// Class: GNString
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "iLok1 is not supported"
//   "void pace::AuthorizationVerifier::dlcKeyExchange(const petpub::AuthChain &, const pet::fusion::DlcK...
//   "Protocols object is missing a commander"
//   "The AuthChain's internalReference does not have enough data for an ILok2Ref"
//   "Unknown location is not supported"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_0092b5a0(char *param_1,int64_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  string *psVar4;
  string *this;
  char *pcVar5;
  int64_t arg1;
  int64_t this_ptr;
  int64_t lVar6;
  bool bVar7;
  uint32_t uVar8;
  void*local_118;
  uint64_t local_110;
  uint64_t local_108;
  uint64_t local_100;
  void*local_f8;
  int local_f0;
  uint64_t local_e8;
  uint32_t local_e0;
  uint16_t local_dc;
  uint8_t local_da;
  uint16_t local_d8;
  uint8_t local_d0 [8];
  int64_t local_c8;
  uint8_t local_c0;
  char *local_b8;
  char *local_b0;
  char *local_a8;
  char *pcStack_a0;
  uint64_t local_98;
  uint64_t local_90;
  int64_t *local_88;
  uint64_t local_80;
  int64_t *local_78;
  int64_t local_70;
  int64_t *local_68;
  uint local_60;
  uint32_t local_5c;
  int64_t local_58;
  int64_t *local_50;
  
  lVar6 = *(int64_t *)(arg1 + 0x58);
  local_118 = &g_02517678;
  bVar7 = false;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = &g_0251cd00;
  local_e8 = 0;
  local_dc = 1;
  local_da = 1;
  local_f0 = 1;
  local_e0 = 0;
  local_d8 = 0;
  local_98 = 0;
  local_a8 = (char *)0x0;
  pcStack_a0 = (char *)0x0;
  local_b8 = param_1 + 0x10;
  psVar4 = *(string **)(param_1 + 0x28);
  *(void*)(param_1 + 0x18) = *(void*)(param_1 + 0x10);
  local_b0 = param_1 + 0x28;
  *(string **)(param_1 + 0x30) = psVar4;
LAB_0092b65e:
  if (lVar6 < 0x10) {
    switch(lVar6) {
    case 1:
switchD_0092b67b_caseD_1:
      FUN_0092bea0(param_1,param_2);
      goto LAB_0092bb2e;
    case 2:
      FUN_00925fd0();
      psVar4 = (string *)FUN_00926010();
      FUN_00928ab0("void pace::AuthorizationVerifier::dlcKeyExchange(const petpub::AuthChain &, const pet::fusion::DlcKeyExchangeInput &, pet::fusion::DlcKeyExchangeOutput &)"
                   ,0x514);
      FUN_009bd14b();
      break;
    default:
switchD_0092b67b_caseD_3:
      lVar6 = *(int64_t *)(arg1 + 0x1a0);
      if (!bVar7 && lVar6 != 0) goto code_r0x0092b6c5;
      FUN_00925fd0();
      uVar3 = FUN_00926010();
      param_1 = 
      "void pace::AuthorizationVerifier::dlcKeyExchange(const petpub::AuthChain &, const pet::fusion::DlcKeyExchangeInput &, pet::fusion::DlcKeyExchangeOutput &)"
      ;
      uVar8 = FUN_00928ab0("void pace::AuthorizationVerifier::dlcKeyExchange(const petpub::AuthChain &, const pet::fusion::DlcKeyExchangeInput &, pet::fusion::DlcKeyExchangeOutput &)"
                           ,0x5c6);
      FUN_009bd14b(uVar8,uVar3);
LAB_0092bb2e:
      if (local_a8 != (char *)0x0) {
        pcStack_a0 = local_a8;
        operator_delete(param_1);
      }
      FUN_00891d28();
      return;
    case 4:
    case 8:
      break;
    }
  }
  else {
    if (lVar6 < 0x40) {
      if (lVar6 == 0x10) goto switchD_0092b67b_caseD_1;
      if (lVar6 != 0x20) goto switchD_0092b67b_caseD_3;
      goto switchD_0092b67b_caseD_4;
    }
    if (lVar6 != 0x40) {
      if (lVar6 != 0x80) goto switchD_0092b67b_caseD_3;
      FUN_0092c48c(param_1,param_2);
      goto LAB_0092bb2e;
    }
  }
switchD_0092b67b_caseD_4:
  local_60 = *(uint *)(*(int64_t *)(arg1 + 8) + 0xc);
  this = (string *)(uint64_t)local_60;
  local_5c = *(void*)(*(int64_t *)(arg1 + 8) + 8);
  FUN_008911e2();
  std::string::operator=(this,psVar4);
  local_f0 = 2;
  if (pcStack_a0 != local_a8) {
    local_f0 = (int)*local_a8;
  }
  local_e8 = *(void*)(arg1 + 0x60);
  local_d8 = CONCAT11(1,(uint8_t)local_d8);
  local_c8 = this_ptr + 0x18;
  local_c0 = 0;
  FUN_009b4e10();
  local_90 = *(void*)(this_ptr + 8);
  local_88 = *(int64_t **)(this_ptr + 0x10);
  if (local_88 != (int64_t *)0x0) {
    LOCK();
    local_88[1] = local_88[1] + 1;
    UNLOCK();
  }
  uVar8 = *(void*)(this_ptr + 0x68);
  local_80 = *(void*)(this_ptr + 0x70);
  local_78 = *(int64_t **)(this_ptr + 0x78);
  if (local_78 != (int64_t *)0x0) {
    LOCK();
    local_78[1] = local_78[1] + 1;
    UNLOCK();
  }
  FUN_0092bdb0(uVar8,&local_118,&local_80);
  if (local_78 != (int64_t *)0x0) {
    LOCK();
    plVar1 = local_78 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*local_78 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_88 != (int64_t *)0x0) {
    LOCK();
    plVar1 = local_88 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*local_88 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  local_70 = local_58;
  local_68 = local_50;
  if (local_50 != (int64_t *)0x0) {
    LOCK();
    local_50[1] = local_50[1] + 1;
    UNLOCK();
  }
  FUN_009acf04(0,0,0);
  if (local_68 != (int64_t *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*local_68 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar1 = *(int64_t **)(local_58 + 8);
  plVar2 = *(int64_t **)(local_58 + 0x10);
  if (plVar2 != (int64_t *)0x0) {
    LOCK();
    plVar2[1] = plVar2[1] + 1;
    UNLOCK();
  }
  if (plVar1 == (int64_t *)0x0) {
    FUN_00925fd0();
    uVar3 = FUN_00926010();
    uVar8 = FUN_00928ab0("void pace::AuthorizationVerifier::dlcKeyExchange(const petpub::AuthChain &, const pet::fusion::DlcKeyExchangeInput &, pet::fusion::DlcKeyExchangeOutput &)"
                         ,0x553);
    FUN_009bd14b(uVar8,uVar3);
  }
  if ((uint64_t)
      (*(int64_t *)(*(int64_t *)(arg1 + 8) + 0x20) -
      *(int64_t *)(*(int64_t *)(arg1 + 8) + 0x18)) < 4) {
    FUN_00925fd0();
    uVar3 = FUN_00926010();
    uVar8 = FUN_00928ab0("void pace::AuthorizationVerifier::dlcKeyExchange(const petpub::AuthChain &, const pet::fusion::DlcKeyExchangeInput &, pet::fusion::DlcKeyExchangeOutput &)"
                         ,0x55c);
    FUN_009bd14b(uVar8,uVar3);
  }
  uVar8 = FUN_0097413b();
  pcVar5 = (char *)(param_2 + 0x30);
  (**(code **)(*plVar1 + 0x198))
            (pcVar5,param_2 + 0x18,local_d0,local_b8,uVar8,
             (uint)(*(char *)(param_2 + 8) == '\0') << 0x1f,0,0,*(void*)(param_2 + 0x10));
  FUN_0090f27e();
  param_1[0x85] = '\x01';
  FUN_0090ee1c();
  param_1 = pcVar5;
  if (plVar2 != (int64_t *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plVar2 + 0x10))();
      std::__shared_weak_count::__release_weak();
      param_1 = pcVar5;
    }
  }
  FUN_009ad0f2();
  if (local_50 != (int64_t *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*local_50 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_0094d0ec();
  goto LAB_0092bb2e;
code_r0x0092b6c5:
  bVar7 = true;
  if (&local_a8 != (char **)(arg1 + 0x1a8)) {
    psVar4 = *(string **)(arg1 + 0x1b0);
    FUN_008df080();
  }
  goto LAB_0092b65e;
}

