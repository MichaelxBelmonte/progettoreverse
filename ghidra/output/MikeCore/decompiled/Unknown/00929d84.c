// Function: FUN_00929d84
// Address: 00929d84
// Size: 2434 bytes
// Class: Unknown
// String references:
//   "getContentDecryptionKey"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "void pace::AuthorizationVerifier::decryptContentWithDecryptionAssistData(const petpub::AuthChain &,...
//   "The decryptionAssistData.keyVerificationData size (%d) is too small."
//   "The _return.outRandomTransportKey size (%d) is too small."


void FUN_00929d84(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  code **ppcVar3;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 uVar9;
  undefined8 *local_res8;
  undefined *local_888;
  undefined *local_880;
  undefined8 local_878;
  undefined8 local_870;
  undefined8 local_868;
  undefined2 local_860;
  undefined8 local_85c;
  undefined8 local_854;
  undefined8 local_84c;
  undefined8 local_844;
  undefined8 local_83c;
  undefined8 local_834;
  undefined8 local_82c;
  undefined4 local_824;
  undefined8 local_820;
  undefined8 local_818;
  undefined8 local_810;
  undefined8 local_808;
  undefined1 local_800;
  undefined4 local_7fc;
  undefined *local_7f8;
  undefined8 local_7f0;
  undefined8 local_7e8;
  undefined8 local_7e0;
  undefined8 local_7d8;
  undefined8 local_7d0;
  undefined8 local_7c8;
  undefined4 local_7c0;
  undefined8 local_7b8;
  undefined8 local_7b0;
  undefined8 local_7a8;
  undefined8 local_7a0;
  undefined8 local_798;
  undefined8 local_790;
  undefined8 local_788;
  undefined8 local_780;
  undefined8 local_778;
  undefined8 local_770;
  undefined8 local_768;
  undefined8 local_760;
  undefined8 local_758;
  undefined4 local_750;
  undefined8 local_748;
  undefined8 local_740;
  undefined8 local_738;
  undefined8 local_730;
  undefined8 local_728;
  undefined8 local_720;
  undefined8 local_718;
  undefined8 local_710;
  undefined8 local_708;
  undefined8 local_700;
  undefined8 local_6f8;
  undefined1 local_6f0;
  undefined4 local_6e8;
  undefined1 local_6e4;
  undefined8 local_6e0;
  undefined8 local_6d8;
  undefined8 local_6d0;
  undefined8 local_6c8;
  undefined *local_6c0;
  undefined8 local_6b8;
  undefined8 local_6b0;
  undefined8 local_6a8;
  undefined8 local_6a0;
  undefined8 local_698;
  undefined8 local_690;
  undefined8 local_688;
  undefined8 local_680;
  undefined8 local_678;
  undefined8 local_670;
  undefined8 local_668;
  undefined8 local_660;
  undefined8 local_658;
  undefined2 local_650;
  undefined1 local_64e;
  undefined4 local_64d;
  undefined2 local_649;
  undefined1 local_647;
  undefined8 local_640;
  undefined8 local_638;
  undefined8 local_630;
  undefined8 local_628;
  undefined8 local_620;
  undefined7 uStack_618;
  undefined1 local_611;
  undefined7 uStack_610;
  undefined8 local_609;
  undefined4 local_601;
  longlong local_5f8;
  longlong local_5f0;
  undefined8 local_5e8;
  undefined *local_5e0;
  undefined8 local_5d8;
  undefined4 local_5d0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined5 uStack_390;
  undefined3 local_38b;
  undefined5 uStack_388;
  undefined *local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  longlong local_348;
  longlong local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined1 local_310;
  longlong local_308;
  longlong local_300;
  undefined8 local_2f0;
  undefined8 local_2e8;
  longlong local_2e0;
  longlong local_2d8;
  longlong lStack_2d0;
  undefined8 local_2c8;
  longlong local_2b8;
  undefined1 local_2b0;
  code *local_2a8;
  code *pcStack_2a0;
  code *local_298;
  longlong local_288;
  longlong local_278;
  longlong lStack_270;
  undefined8 local_268;
  longlong local_38;
  longlong lVar8;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  local_888 = &DAT_0251a3b0;
  local_880 = &DAT_0251c5a8;
  bVar5 = false;
  local_878 = 0;
  local_870 = 0;
  local_868 = 0;
  local_860 = 0;
  local_85c = 0;
  local_854 = 0;
  local_84c = 0;
  local_844 = 0;
  local_83c = 0;
  local_834 = 0;
  local_82c = 0;
  local_824 = 0;
  local_820 = 0xffffffffffffffff;
  local_7fc = 0;
  local_818 = 0;
  local_810 = 0;
  local_808 = 0;
  local_800 = 0;
  local_7f8 = &DAT_0251c338;
  local_7c0 = 0;
  local_7c8 = 0;
  local_7d0 = 0;
  local_7d8 = 0;
  local_7e0 = 0;
  local_7e8 = 0;
  local_7f0 = 0;
  local_750 = 0;
  local_758 = 0;
  local_760 = 0;
  local_768 = 0;
  local_770 = 0;
  local_778 = 0;
  local_780 = 0;
  local_788 = 0;
  local_790 = 0;
  local_798 = 0;
  local_7a0 = 0;
  local_7a8 = 0;
  local_7b0 = 0;
  local_7b8 = 0;
  local_6f8 = 0;
  local_700 = 0;
  local_708 = 0;
  local_710 = 0;
  local_718 = 0;
  local_720 = 0;
  local_728 = 0;
  local_730 = 0;
  local_738 = 0;
  local_740 = 0;
  local_748 = 0;
  local_6f0 = 1;
  local_6e4 = 0;
  local_6c8 = 0;
  local_6d0 = 0;
  local_6d8 = 0;
  local_6e0 = 0;
  local_6c0 = &DAT_0251c3a0;
  local_688 = 0;
  local_690 = 0;
  local_698 = 0;
  local_6a0 = 0;
  local_6a8 = 0;
  local_6b0 = 0;
  local_6b8 = 0;
  local_680 = 0x100000001;
  local_658 = 0;
  local_660 = 0;
  local_668 = 0;
  local_670 = 0;
  local_678 = 0;
  local_650 = 1;
  local_64e = 0;
  local_64d = 0x1010101;
  local_649 = 0;
  local_647 = 0;
  uStack_610 = 0;
  uStack_618 = 0;
  local_611 = 0;
  local_620 = 0;
  local_628 = 0;
  local_630 = 0;
  local_638 = 0;
  local_640 = 0;
  local_609 = 0x100010000010001;
  local_601 = 0;
  local_6e8 = 0;
  local_5e8 = 0;
  local_5f0 = 0;
  local_5f8 = 0;
  local_5e0 = &DAT_0251d338;
  local_5d8 = 0;
  local_5d0 = 0;
  local_2f0 = param_1;
  local_2e8 = param_3;
  local_2e0 = param_4;
  local_288 = param_2;
  ___bzero();
  ___bzero();
  ___bzero();
  uStack_388 = 0;
  uStack_390 = 0;
  local_38b = 0;
  local_398 = 0;
  local_3a0 = 0;
  local_3a8 = 0;
  local_380 = &DAT_0251a418;
  local_378 = 0;
  local_370 = 0;
  local_368 = 0;
  local_360 = 0;
  local_358 = 0;
  local_350 = 0;
  local_348 = 0;
  local_340 = 0;
  local_338 = 0;
  local_330 = 0;
  local_328 = 0;
  local_320 = 0;
  local_318 = 4;
  local_310 = 1;
  lVar8 = *(longlong *)(unaff_RSI + 0x58);
  local_2c8 = 0;
  uVar9 = 0;
  local_2d8 = 0;
  lStack_2d0 = 0;
  while( true ) {
    lVar6 = local_288;
    uVar7 = lVar8 - 2;
    if (uVar7 < 0x3f) {
      if ((0x4000000040000044U >> (uVar7 & 0x3f) & 1) != 0) {
        FUN_0094e400();
        lVar6 = local_288;
        puVar2 = &local_360;
        FUN_0092aa9a(puVar2,local_288,&local_378,&local_308);
        if (local_308 != 0) {
          local_300 = local_308;
          operator_delete(puVar2);
        }
        goto LAB_0092a626;
      }
      if (uVar7 == 0) {
        FUN_0092a7ce(&local_360,local_288,&local_378);
        goto LAB_0092a626;
      }
    }
    lVar8 = *(longlong *)(unaff_RSI + 0x1a0);
    if (bVar5 || lVar8 == 0) break;
    bVar5 = true;
    if (&local_2d8 != (longlong *)(unaff_RSI + 0x1a8)) {
      uVar9 = FUN_008df080(uVar9,*(undefined8 *)(unaff_RSI + 0x1b0));
    }
  }
  FUN_008f91be();
  lVar6 = local_288;
  lVar8 = local_2e0;
  if ((ulonglong)(local_5f0 - local_5f8) < 0x10) {
    FUN_0088d550();
  }
  else if (local_5f0 - local_5f8 != 0x10) {
    local_5f0 = local_5f8 + 0x10;
  }
  FUN_009e9d9c();
  uVar9 = FUN_009128e4();
  if (lVar8 != 0) {
    FUN_00953d64(uVar9,*(undefined8 *)(lVar8 + 8));
  }
  if (local_res8 == (undefined8 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *local_res8;
  }
  uStack_390 = (undefined5)uVar1;
  local_38b = (undefined3)((ulonglong)uVar1 >> 0x28);
  local_2b8 = unaff_RDI + 0x18;
  local_2b0 = 0;
  FUN_009b4e10();
  if (*(longlong *)(unaff_RDI + 0x70) == 0) {
    plVar4 = *(longlong **)(unaff_RDI + 8);
    if (plVar4 == (longlong *)0x0) {
      FUN_00925fd0();
      uVar1 = FUN_00926010();
      uVar9 = FUN_00928ab0("void pace::AuthorizationVerifier::decryptContentWithDecryptionAssistData(const petpub::AuthChain &, const pet::fusion::DecryptionAssistData &, size_t, void *, std::vector<uint8_t> *, const int64_t *)"
                           ,0x3c0);
      FUN_009bd14b(uVar9,uVar1);
      plVar4 = *(longlong **)(unaff_RDI + 8);
    }
    (**(code **)(*plVar4 + 0x108))(4,&local_888);
  }
  else {
    local_278 = 0;
    lStack_270 = 0;
    local_268 = 0;
    local_298 = (code *)0x0;
    local_2a8 = (code *)0x0;
    pcStack_2a0 = (code *)0x0;
    FUN_0092ae34(0,1);
    ppcVar3 = &local_2a8;
    uVar9 = FUN_00928f8a(ppcVar3,&local_278);
    FUN_0094e479(uVar9,&local_380);
    if (local_2a8 != (code *)0x0) {
      pcStack_2a0 = local_2a8;
      operator_delete(ppcVar3);
    }
    if (local_278 != 0) {
      lStack_270 = local_278;
      operator_delete(ppcVar3);
    }
  }
  uVar9 = FUN_0094d0ec();
  if (lVar8 != 0) {
    FUN_0092b0a2(uVar9,local_328);
  }
  FUN_0098ce6c(0,1,&local_5f8);
  (**(code **)(local_278 + 0x30))();
  (**(code **)(local_278 + 0x30))();
  uVar9 = (**(code **)(local_278 + 0x30))();
  if ((ulonglong)(*(longlong *)(lVar6 + 0x20) - *(longlong *)(lVar6 + 0x18)) < 0x10) {
    FUN_00925fd0();
    uVar1 = FUN_00926010();
    local_2b8 = *(longlong *)(lVar6 + 0x20) - *(longlong *)(lVar6 + 0x18);
    pcStack_2a0 = FUN_00ac1940;
    local_298 = FUN_009baee0;
    local_2a8 = (code *)&local_2b8;
    FUN_00983230();
    uVar9 = FUN_00928ab0("void pace::AuthorizationVerifier::decryptContentWithDecryptionAssistData(const petpub::AuthChain &, const pet::fusion::DecryptionAssistData &, size_t, void *, std::vector<uint8_t> *, const int64_t *)"
                         ,0x3e6);
    uVar9 = FUN_009bd14b(uVar9,uVar1);
  }
  if ((ulonglong)(local_340 - local_348) < 0x10) {
    FUN_00925fd0();
    uVar1 = FUN_00926010();
    local_2b8 = local_340 - local_348;
    pcStack_2a0 = FUN_00ac1940;
    local_298 = FUN_009baee0;
    local_2a8 = (code *)&local_2b8;
    FUN_00983230();
    uVar9 = FUN_00928ab0("void pace::AuthorizationVerifier::decryptContentWithDecryptionAssistData(const petpub::AuthChain &, const pet::fusion::DecryptionAssistData &, size_t, void *, std::vector<uint8_t> *, const int64_t *)"
                         ,0x3ec);
    uVar9 = FUN_009bd14b(uVar9,uVar1);
  }
  uVar9 = FUN_009742a7(uVar9,0x10);
  FUN_009742a7(uVar9,0x10);
  FUN_0098cf0a(0,1,&local_348);
  (**(code **)(local_278 + 0x30))();
  (**(code **)(local_278 + 0x30))();
  FUN_0092b19c(lVar6 + 0x18,&local_378);
  FUN_0098ce7c();
LAB_0092a626:
  puVar2 = &local_360;
  FUN_0092b386(puVar2,*(undefined4 *)(lVar6 + 0xc),&local_378,local_2f0);
  ___bzero();
  ___bzero();
  if (local_2d8 != 0) {
    lStack_2d0 = local_2d8;
    operator_delete(puVar2);
  }
  FUN_008c3d16();
  FUN_008c33cc();
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


