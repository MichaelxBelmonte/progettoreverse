// Function: FUN_009458d0
// Address: 009458d0
// Size: 2359 bytes
// Class: GNString
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "Protocols object is missing a commander"
//   "The AuthChain's internalReference does not have enough data for an ILok2Ref"
//   "The authChain provided to getContentDecryptionKey is empty"
//   "Missing a Protocols object"
//   "void pace::AuthorizationVerifier::getContentKeyFromIlok2(pace::SharedIlok2Protocols_T, const petpub...
//   "This iLok2 cannot produce the decryption key to decrypt the content.  ValidLocations = %d"
//   "Bad data size detected in the DecryptionAssistData for iLok2"
//   "The key cannot be used in the key exchange algorithmId %d, because the key's used is restriced to a...


void FUN_009458d0(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  longlong *unaff_RSI;
  void *pvVar11;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar13;
  undefined *local_3f0;
  undefined5 local_3e8;
  undefined4 uStack_3e3;
  undefined4 uStack_3df;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined1 local_3b0;
  undefined8 local_3ac;
  undefined6 local_3a4;
  undefined2 uStack_39e;
  undefined6 uStack_39c;
  longlong local_390;
  longlong local_388;
  longlong local_380;
  undefined4 local_370;
  undefined1 local_36c;
  undefined1 local_36b;
  undefined2 local_36a;
  undefined4 local_368;
  int local_364;
  undefined8 local_360;
  void *local_358;
  undefined3 local_350;
  undefined1 uStack_34d;
  undefined3 uStack_34c;
  undefined1 local_349;
  code *local_348;
  code *pcStack_340;
  undefined1 *local_338;
  undefined4 local_32c;
  undefined4 *local_328;
  undefined4 *puStack_320;
  undefined8 local_318;
  longlong local_308;
  longlong lStack_300;
  undefined8 local_2f8;
  longlong *local_2f0;
  longlong local_2e8;
  longlong lStack_2e0;
  undefined8 local_2d8;
  uint local_2c4;
  longlong *local_2c0;
  longlong *local_2b8;
  uint local_2ac;
  undefined4 local_2a8;
  int local_2a4;
  int local_2a0;
  undefined1 local_29c [36];
  longlong local_278;
  code *local_270;
  code *local_268;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  local_2f8 = 0;
  local_308 = 0;
  lStack_300 = 0;
  local_2d8 = 0;
  local_2e8 = 0;
  lStack_2e0 = 0;
  local_318 = 0;
  local_328 = (undefined4 *)0x0;
  puStack_320 = (undefined4 *)0x0;
  local_390 = param_2;
  local_2c0 = param_4;
  local_2b8 = param_3;
  if (*(longlong *)(param_2 + 0x10) == *(longlong *)(param_2 + 8)) {
    FUN_00925fd0();
    uVar7 = FUN_00926010();
    uVar12 = FUN_00928ab0("void pace::AuthorizationVerifier::getContentKeyFromIlok2(pace::SharedIlok2Protocols_T, const petpub::AuthChain &, const pet::fusion::DecryptionAssistData &, std::vector<uint8_t> &, std::vector<uint8_t> &)"
                          ,0x3239);
    FUN_009bd14b(uVar12,uVar7);
  }
  if (*unaff_RSI == 0) {
    FUN_00925fd0();
    uVar7 = FUN_00926010();
    uVar12 = FUN_00928ab0("void pace::AuthorizationVerifier::getContentKeyFromIlok2(pace::SharedIlok2Protocols_T, const petpub::AuthChain &, const pet::fusion::DecryptionAssistData &, std::vector<uint8_t> &, std::vector<uint8_t> &)"
                          ,0x323e);
    FUN_009bd14b(uVar12,uVar7);
  }
  local_3f0 = &DAT_0251d5b0;
  local_3e8 = 0;
  uStack_3e3 = 0;
  uStack_3df = 0;
  local_3d8 = 0;
  local_3d0 = 0;
  local_3c8 = 0;
  local_3c0 = 0;
  local_3b8 = 0;
  local_3b0 = 0;
  local_3ac = 0;
  local_3a4 = 0;
  uStack_39e = 0;
  uStack_39c = 0;
  FUN_0092e2c6(0,&local_3f0,1);
  if (uStack_3e3._3_1_ == '\0') {
    FUN_00925fd0();
    uVar7 = FUN_00926010();
    local_278 = param_1 + 0x10;
    local_270 = FUN_00950d67;
    local_268 = FUN_00950d6d;
    FUN_00983230();
    uVar12 = FUN_00928ab0("void pace::AuthorizationVerifier::getContentKeyFromIlok2(pace::SharedIlok2Protocols_T, const petpub::AuthChain &, const pet::fusion::DecryptionAssistData &, std::vector<uint8_t> &, std::vector<uint8_t> &)"
                          ,0x3248);
    FUN_009bd14b(uVar12,uVar7);
  }
  iVar1 = *(int *)(param_1 + 0xe8);
  lVar8 = FUN_008e4ece();
  if (iVar1 == *(int *)(lVar8 + 0x2c)) {
    uVar12 = *(undefined4 *)(param_1 + 0x30);
    uVar13 = FUN_009a6d58(extraout_XMM0_Da,*(undefined8 *)(param_1 + 0x40));
    FUN_009a6d58(uVar13,*(undefined8 *)(param_1 + 0x58));
    if (&local_2e8 != (longlong *)(param_1 + 0x68)) {
      FUN_008df080(&local_2e8,*(undefined8 *)(param_1 + 0x70));
    }
    if (&local_328 != (undefined4 **)(param_1 + 0x80)) {
      FUN_008df080(&local_328,*(undefined8 *)(param_1 + 0x88));
    }
    local_2a4 = 3;
    puVar9 = (undefined4 *)(param_1 + 0x34);
    local_2ac = 0x10;
    local_2a8 = uVar12;
  }
  else {
    uVar12 = *(undefined4 *)(param_1 + 0xe8);
    uVar13 = FUN_009a6d58(extraout_XMM0_Da,*(undefined8 *)(param_1 + 0xf8));
    FUN_009a6d58(uVar13,*(undefined8 *)(param_1 + 0x110));
    if (&local_2e8 != (longlong *)(param_1 + 0x120)) {
      FUN_008df080(&local_2e8,*(undefined8 *)(param_1 + 0x128));
    }
    if (&local_328 != (undefined4 **)(param_1 + 0x138)) {
      FUN_008df080(&local_328,*(undefined8 *)(param_1 + 0x140));
    }
    local_2a4 = *(int *)(param_1 + 0x150);
    puVar9 = (undefined4 *)(param_1 + 0xec);
    local_2ac = 0x20;
    local_2a8 = uVar12;
  }
  local_32c = *puVar9;
  uVar4 = FUN_00972764();
  uVar5 = FUN_00972737();
  local_2c4 = FUN_00972764();
  uVar6 = FUN_00972737();
  lVar3 = lStack_2e0;
  lVar8 = local_2e8;
  if ((((local_2c4 != 0) && (uVar4 != 0)) && ((longlong)puStack_320 - (longlong)local_328 == 7)) &&
     ((ulonglong)uVar4 <= (ulonglong)(local_2c0[1] - *local_2c0))) {
    if ((0xf < uVar5) && ((ulonglong)(local_2c0[1] - *local_2c0) % (ulonglong)uVar6 == 0)) {
      if (((ulonglong)uVar5 <= (ulonglong)(local_2b8[1] - *local_2b8)) &&
         ((ulonglong)(local_2b8[1] - *local_2b8) % (ulonglong)uVar6 == 0)) {
        uVar4 = FUN_00972737();
        if (((ulonglong)uVar4 <= (ulonglong)(lVar3 - lVar8)) &&
           (((int)lStack_2e0 - (int)local_2e8 & 0xfU) == 0)) goto LAB_00945d38;
      }
    }
  }
  FUN_00925fd0();
  uVar7 = FUN_00926010();
  uVar12 = FUN_00928ab0("void pace::AuthorizationVerifier::getContentKeyFromIlok2(pace::SharedIlok2Protocols_T, const petpub::AuthChain &, const pet::fusion::DecryptionAssistData &, std::vector<uint8_t> &, std::vector<uint8_t> &)"
                        ,0x3279);
  FUN_009bd14b(uVar12,uVar7);
LAB_00945d38:
  FUN_0098ce6c(0,1,local_2b8);
  (**(code **)(local_278 + 0x30))();
  lVar8 = local_390;
  plVar2 = *(longlong **)(*unaff_RSI + 8);
  local_2f0 = *(longlong **)(*unaff_RSI + 0x10);
  if (local_2f0 != (longlong *)0x0) {
    LOCK();
    local_2f0[1] = local_2f0[1] + 1;
    UNLOCK();
  }
  if (plVar2 == (longlong *)0x0) {
    FUN_00925fd0();
    uVar7 = FUN_00926010();
    uVar12 = FUN_00928ab0("void pace::AuthorizationVerifier::getContentKeyFromIlok2(pace::SharedIlok2Protocols_T, const petpub::AuthChain &, const pet::fusion::DecryptionAssistData &, std::vector<uint8_t> &, std::vector<uint8_t> &)"
                          ,0x328f);
    FUN_009bd14b(uVar12,uVar7);
  }
  if ((ulonglong)
      (*(longlong *)(*(longlong *)(lVar8 + 8) + 0x20) -
      *(longlong *)(*(longlong *)(lVar8 + 8) + 0x18)) < 4) {
    FUN_00925fd0();
    uVar7 = FUN_00926010();
    uVar12 = FUN_00928ab0("void pace::AuthorizationVerifier::getContentKeyFromIlok2(pace::SharedIlok2Protocols_T, const petpub::AuthChain &, const pet::fusion::DecryptionAssistData &, std::vector<uint8_t> &, std::vector<uint8_t> &)"
                          ,0x3298);
    FUN_009bd14b(uVar12,uVar7);
  }
  local_370 = FUN_0097413b();
  local_36b = 0;
  local_36a = 0;
  local_368 = local_32c;
  local_364 = local_2a4;
  iVar1 = *(int *)(param_1 + 0xe8);
  lVar8 = FUN_008e4ece();
  if ((iVar1 == *(int *)(lVar8 + 0x2c)) ||
     ((ulonglong)(*(longlong *)(param_1 + 0x160) - *(longlong *)(param_1 + 0x158)) < 0x10)) {
    local_36c = 0x88;
    local_360 = 0;
    local_358 = (void *)0x0;
  }
  else {
    local_348 = (code *)0x0;
    pcStack_340 = (code *)0x0;
    local_338 = (undefined1 *)0x0;
    local_36c = 0x84;
    if (&local_348 != (code **)(param_1 + 0x158)) {
      FUN_008df080();
    }
    (**(code **)(local_278 + 0x30))();
    local_360 = *(undefined8 *)local_348;
    local_358 = *(void **)(local_348 + 8);
    if (local_348 != (code *)0x0) {
      pcStack_340 = local_348;
      operator_delete(local_358);
    }
  }
  local_350 = (undefined3)*local_328;
  uStack_34d = (undefined1)*(undefined4 *)((longlong)local_328 + 3);
  uStack_34c = (undefined3)((uint)*(undefined4 *)((longlong)local_328 + 3) >> 8);
  FUN_009543d0();
  FUN_009e9d9c();
  local_349 = 0;
  uVar12 = (**(code **)(*plVar2 + 0x128))(&local_2a0,&local_388,0);
  if (local_2a0 != local_2a4) {
    FUN_00925fd0();
    uVar7 = FUN_00926010();
    local_348 = (code *)&local_2a4;
    pcStack_340 = FUN_009595d8;
    local_338 = &LAB_009977a0;
    FUN_00983230();
    local_348 = (code *)&local_2a0;
    pcStack_340 = FUN_009595d8;
    local_338 = &LAB_009977a0;
    FUN_00983230();
    uVar12 = FUN_00928ab0("void pace::AuthorizationVerifier::getContentKeyFromIlok2(pace::SharedIlok2Protocols_T, const petpub::AuthChain &, const pet::fusion::DecryptionAssistData &, std::vector<uint8_t> &, std::vector<uint8_t> &)"
                          ,0x32c0);
    uVar12 = FUN_009bd14b(uVar12,uVar7);
  }
  FUN_009ad770(uVar12,local_29c + local_2ac);
  FUN_0098cf0a(0,1,&local_2e8);
  uVar12 = FUN_0098d41a();
  FUN_009742a7(uVar12,local_2ac);
  uVar10 = (ulonglong)local_2c4;
  while( true ) {
    if (uVar10 <= (ulonglong)(lStack_300 - local_308)) break;
    FUN_00946ea8();
  }
  if (uVar10 < (ulonglong)(lStack_300 - local_308)) {
    lStack_300 = local_308 + uVar10;
  }
  FUN_0098cf0a(0,1,&local_308);
  FUN_0098d41a();
  FUN_0098d41a();
  pvVar11 = (void *)(param_1 + 0x18);
  FUN_0092b19c(pvVar11,local_2c0);
  if (local_388 != 0) {
    local_380 = local_388;
    operator_delete(pvVar11);
  }
  if (local_2f0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_2f0 + 1;
    lVar8 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*local_2f0 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_0098ce7c();
  FUN_009170d0();
  if (local_328 != (undefined4 *)0x0) {
    puStack_320 = local_328;
    operator_delete(pvVar11);
  }
  if (local_2e8 != 0) {
    lStack_2e0 = local_2e8;
    operator_delete(pvVar11);
  }
  if (local_308 != 0) {
    lStack_300 = local_308;
    operator_delete(pvVar11);
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


