// Function: FUN_00930dbe
// Address: 00930dbe
// Size: 2671 bytes
// Class: GNString
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "Encryption Algorithm %d not supported"
//   "licenseD_CallTime (%s) is not a valid date"
//   "The actual key size %d is not the expected size %d"
//   "void pace::AuthorizationVerifier::openQuicklyLicenseDaemonEncryptedChannel(uint32_t, uint32_t, uint...
//   "The openQuicklyEncryptedChannel client_CallTime to licenseD_CallTime (%d second) was too long "
//   "The openQuicklyEncryptedChannel licenseD_CallTime to command finish (%d second) was too long"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00930dbe(uint32_t param_1,uint32_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  int iVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t lVar10;
  ulong uVar11;
  uint64_t uVar12;
  uint32_t unaff_ESI;
  int64_t this_ptr;
  uint32_t uVar13;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint8_t local_bf8 [112];
  int64_t *local_b88;
  int64_t *local_b80;
  uint64_t local_b78;
  uint64_t uStack_b70;
  uint64_t local_b68;
  uint64_t uStack_b60;
  uint64_t local_b58;
  uint64_t uStack_b50;
  uint64_t local_b48;
  uint64_t local_b40;
  int64_t local_b38;
  uint64_t *local_b30;
  code *local_b28;
  code *local_b20;
  uint64_t *local_ac0;
  code *local_ab8;
  code *local_ab0;
  void*local_aa8;
  uint32_t local_aa0;
  uint64_t local_a98;
  uint64_t local_a90;
  uint64_t local_a88;
  uint64_t local_a80;
  uint64_t local_a78;
  uint64_t local_a70;
  uint64_t local_a68;
  uint64_t local_a60;
  int64_t local_a58;
  uint64_t local_a50;
  uint8_t local_a48;
  uint64_t local_a40;
  int64_t local_a38;
  int64_t lStack_a30;
  uint64_t local_a28;
  uint64_t local_a18;
  uint64_t uStack_a10;
  uint64_t local_a08;
  uint64_t local_a00;
  uint64_t local_9f8;
  uint64_t local_9f0;
  uint64_t local_9e8;
  uint64_t local_9e0;
  uint64_t local_9d8;
  uint64_t local_9d0;
  int64_t local_9c8;
  uint32_t local_9c0;
  uint32_t uStack_9bc;
  uint32_t local_9b8;
  uint32_t uStack_9b4;
  undefined3 uStack_9b0;
  uint64_t local_9a8;
  int64_t *local_9a0;
  int64_t local_998;
  int64_t lStack_990;
  uint64_t local_988;
  int64_t local_978;
  int64_t lStack_970;
  uint64_t local_968;
  int64_t local_960;
  uint64_t local_958;
  uint64_t *local_950;
  int64_t local_948;
  int64_t lStack_940;
  uint64_t local_938;
  uint64_t *local_930;
  int64_t *local_928;
  uint32_t local_91c;
  uint local_904;
  uint64_t *local_900;
  code *local_8f8;
  code *local_8f0;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  local_950 = (uint64_t *)(this_ptr + 0x18);
  local_8f8 = ((uint64_t)local_8f8 & 0xffffffffffffff00);
  local_91c = param_1;
  local_900 = local_950;
  FUN_009b4e10();
  if (*(int64_t *)(this_ptr + 8) != 0) {
    FUN_009283b4();
    FUN_009298da(2,0,1);
    uVar13 = (uint32_t)local_a18;
    uVar3 = local_a18._4_4_;
    uVar4 = (uint32_t)uStack_a10;
    uVar5 = uStack_a10._4_4_;
    local_a18 = (void*)0x0;
    uStack_a10 = (int64_t *)0x0;
    plVar8 = *(int64_t **)(this_ptr + 0x10);
    *(void*)(this_ptr + 8) = uVar13;
    *(void*)(this_ptr + 0xc) = uVar3;
    *(void*)(this_ptr + 0x10) = uVar4;
    *(void*)(this_ptr + 0x14) = uVar5;
    if (plVar8 != (int64_t *)0x0) {
      LOCK();
      plVar9 = plVar8 + 1;
      lVar10 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plVar8 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    if (uStack_a10 != (int64_t *)0x0) {
      LOCK();
      plVar8 = uStack_a10 + 1;
      lVar10 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*uStack_a10 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  FUN_0094d0ec();
  FUN_00928be8();
  uVar11 = 0x30;
  local_a18 = &g_0251a6d0;
  uStack_a10 = (int64_t *)0x0;
  local_a08 = 0;
  local_a00 = 0;
  local_9f8 = 0;
  local_9f0 = 0;
  local_9e8 = 0;
  local_9e0 = 0;
  local_9d8 = 0;
  local_9d0 = 0;
  local_9c8 = 0;
  uStack_9b4 = 0;
  uStack_9b0 = 0;
  local_aa8 = &g_0251a738;
  local_aa0 = 0;
  local_a98 = 0;
  local_a90 = 0;
  local_a88 = 0;
  local_a80 = 0;
  local_a78 = 0;
  local_a70 = 0;
  local_a68 = 0;
  local_a60 = 0;
  local_a58 = 0;
  local_a50 = 0x100000004;
  local_a48 = 1;
  _local_9c0 = CONCAT44(unaff_ESI,local_91c);
  local_9b8 = param_2;
  local_9e0 = FUN_009e95e1();
  local_904 = FUN_00972764();
  if (local_904 == 0) {
    FUN_00925fd0();
    uVar7 = FUN_00926010();
    local_900 = (uint64_t *)&local_9c0;
    local_8f8 = FUN_009cac80;
    local_8f0 = FUN_009cefa0;
    FUN_00983230();
    uVar11 = 0x1fc1614;
    uVar13 = FUN_00928ab0("void pace::AuthorizationVerifier::openQuicklyLicenseDaemonEncryptedChannel(uint32_t, uint32_t, uint32_t)"
                          ,0x1002);
    FUN_009bd14b(uVar13,uVar7);
  }
  uVar13 = FUN_009adf0a();
  uVar13 = FUN_009afd2a(uVar13,local_bf8);
  FUN_009b1162(uVar13,&uStack_a10);
  local_a40 = FUN_0094c1c0();
  FUN_009f35cc();
  local_948 = 0;
  lStack_940 = 0;
  local_938 = 0;
  local_b30 = (uint64_t *)CONCAT71(local_b30._1_7_,0xa5);
  FUN_009542b4();
  plVar8 = operator_new(uVar11);
  uVar11 = 0;
  FUN_0098ce6c(0,1,&local_948);
  plVar9 = operator_new(uVar11);
  local_928 = plVar9 + 1;
  plVar9[2] = 0;
  plVar9[1] = 0;
  *plVar9 = (int64_t)&g_0251fb00;
  plVar9[3] = (int64_t)plVar8;
  local_a28 = 0;
  local_a38 = 0;
  lStack_a30 = 0;
  local_988 = 0;
  local_998 = 0;
  lStack_990 = 0;
  FUN_009319e4(plVar8,1);
  local_b30 = local_950;
  local_b28 = ((uint64_t)local_b28 & 0xffffffffffffff00);
  FUN_009b4e10();
  local_9a8 = *(void*)(this_ptr + 8);
  local_9a0 = *(int64_t **)(this_ptr + 0x10);
  if (local_9a0 != (int64_t *)0x0) {
    LOCK();
    local_9a0[1] = local_9a0[1] + 1;
    UNLOCK();
  }
  LOCK();
  plVar9[1] = plVar9[1] + 1;
  UNLOCK();
  local_b88 = plVar8;
  local_b80 = plVar9;
  FUN_00930118(&local_9a8,&local_998,0);
  LOCK();
  lVar10 = *local_928;
  *local_928 = *local_928 + -1;
  UNLOCK();
  if (lVar10 == 0) {
    (**(code **)(*plVar9 + 0x10))();
    std::__shared_weak_count::__release_weak();
  }
  if (local_9a0 != (int64_t *)0x0) {
    LOCK();
    plVar2 = local_9a0 + 1;
    lVar10 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*local_9a0 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  uVar13 = FUN_0094d0ec();
  FUN_0094f642(uVar13,&local_aa8);
  local_b30 = local_950;
  local_b28 = ((uint64_t)local_b28 & 0xffffffffffffff00);
  FUN_009b4e10();
  *(void*)(this_ptr + 0x68) = local_aa0;
  FUN_0094d0ec();
  local_960 = FUN_009f3f64();
  lVar10 = FUN_009585b8();
  uVar13 = extraout_XMM0_Da;
  if (local_960 == lVar10) {
    FUN_00925fd0();
    uVar7 = FUN_00926010();
    local_b28 = FUN_009b6370;
    local_b20 = FUN_0094ef70;
    local_b30 = &local_a68;
    FUN_00983230();
    uVar13 = FUN_00928ab0("void pace::AuthorizationVerifier::openQuicklyLicenseDaemonEncryptedChannel(uint32_t, uint32_t, uint32_t)"
                          ,"/AppKit.framework/Versions/C/AppKit");
    uVar13 = FUN_009bd14b(uVar13,uVar7);
  }
  FUN_0094ca28(uVar13,&local_a40);
  FUN_009f3a8b();
  local_b30 = (uint64_t *)0x0;
  iVar6 = FUN_0098c910();
  if ((iVar6 != -1) && (300 < local_958)) {
    FUN_00925fd0();
    uVar7 = FUN_00926010();
    local_b28 = FUN_009ada80;
    local_b20 = FUN_0094f614;
    local_b30 = &local_958;
    FUN_00983230();
    uVar13 = FUN_00928ab0("void pace::AuthorizationVerifier::openQuicklyLicenseDaemonEncryptedChannel(uint32_t, uint32_t, uint32_t)"
                          ,"mework/Versions/C/AppKit");
    FUN_009bd14b(uVar13,uVar7);
  }
  local_b40 = FUN_0094c1c0();
  FUN_0094ca28(extraout_XMM0_Da_00,&local_960);
  local_930 = local_b30;
  FUN_009f3a8b();
  local_b30 = (uint64_t *)0x0;
  iVar6 = FUN_0098c910();
  if ((iVar6 != -1) && (300 < local_958)) {
    FUN_00925fd0();
    uVar7 = FUN_00926010();
    local_b28 = FUN_009ada80;
    local_b20 = FUN_0094f614;
    local_b30 = &local_958;
    FUN_00983230();
    uVar13 = FUN_00928ab0("void pace::AuthorizationVerifier::openQuicklyLicenseDaemonEncryptedChannel(uint32_t, uint32_t, uint32_t)"
                          ,"ns/C/AppKit");
    FUN_009bd14b(uVar13,uVar7);
  }
  local_978 = 0;
  lStack_970 = 0;
  local_968 = 0;
  uVar12 = local_a60;
  lVar10 = local_a58;
  if ((local_a68 & 1) == 0) {
    uVar12 = local_a68 >> 1 & 0x7f;
    lVar10 = (int64_t)&local_a68 + 1;
  }
  FUN_009308e8(0,uVar12 + lVar10);
  uVar12 = local_9d0;
  lVar10 = local_9c8;
  if ((local_9d8 & 1) == 0) {
    uVar12 = local_9d8 >> 1 & 0x7f;
    lVar10 = (int64_t)&local_9d8 + 1;
  }
  uVar13 = FUN_009309ea(uVar12 + lVar10);
  FUN_009b113c(uVar13,&local_b30);
  FUN_009ae0ec(&local_b30,&local_b78,&local_978,&local_948);
  if (lStack_940 - local_948 != (uint64_t)local_904) {
    FUN_00925fd0();
    uVar7 = FUN_00926010();
    local_b38 = lStack_940 - local_948;
    local_ac0 = (uint64_t *)&local_b38;
    local_ab8 = FUN_00ac1940;
    local_ab0 = FUN_009baee0;
    FUN_00983230();
    local_ac0 = (uint64_t *)&local_904;
    local_ab8 = FUN_009595d8;
    local_ab0 = &LAB_009977a0;
    FUN_00983230();
    uVar13 = FUN_00928ab0("void pace::AuthorizationVerifier::openQuicklyLicenseDaemonEncryptedChannel(uint32_t, uint32_t, uint32_t)"
                          ,"works/ApplicationServices.framework/Versions/A/ApplicationServices");
    FUN_009bd14b(uVar13,uVar7);
  }
  local_b58 = 0;
  uStack_b50 = 0;
  local_b68 = 0;
  uStack_b60 = 0;
  local_b78 = 0;
  uStack_b70 = 0;
  local_b48 = 0;
  (**(code **)(*plVar8 + 0x10))(0,1,&local_948);
  ___bzero();
  local_ac0 = local_950;
  local_ab8 = ((uint64_t)local_ab8 & 0xffffffffffffff00);
  FUN_009b4e10();
  LOCK();
  plVar9[1] = plVar9[1] + 1;
  UNLOCK();
  *(int64_t **)(this_ptr + 0x70) = plVar8;
  plVar2 = *(int64_t **)(this_ptr + 0x78);
  *(int64_t **)(this_ptr + 0x78) = plVar9;
  if (plVar2 != (int64_t *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plVar2 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_0094d0ec();
  if (local_978 != 0) {
    lStack_970 = local_978;
    operator_delete(plVar8);
  }
  if (local_998 != 0) {
    lStack_990 = local_998;
    operator_delete(plVar8);
  }
  if (local_a38 != 0) {
    lStack_a30 = local_a38;
    operator_delete(plVar8);
  }
  LOCK();
  lVar10 = *local_928;
  *local_928 = *local_928 + -1;
  UNLOCK();
  plVar8 = local_928;
  if (lVar10 == 0) {
    (**(code **)(*plVar9 + 0x10))();
    std::__shared_weak_count::__release_weak();
  }
  if (local_948 != 0) {
    lStack_940 = local_948;
    operator_delete(plVar8);
  }
  FUN_009adf1c();
  FUN_008c90ec();
  FUN_008c85fc();
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return;
}

