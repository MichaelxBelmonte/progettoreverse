// Function: FUN_009451f8
// Address: 009451f8
// Size: 1643 bytes
// Class: GNString
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "The authChain provided to getContentDecryptionKey is empty"
//   "void pace::AuthorizationVerifier::getContentKeyFromIlok1(pace::SharedIlok1Protocols_T, const petpub...
//   "Missing a Protocols object"
//   "This iLok1 cannot produce the decryption key to decrypt the content.  ValidLocations = %d"
//   "Bad data size detected in the DecryptionAssistData for iLok1 KEY EXCHANGE data"
//   "Bad data size detected in the DecryptionAssistData for iLok1 QUICK CHALLENGE RESPONSE data"


void FUN_009451f8(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  longlong *unaff_RSI;
  void *pvVar12;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined *local_350;
  undefined2 local_348;
  char cStack_346;
  undefined2 uStack_345;
  undefined3 uStack_343;
  undefined5 uStack_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined1 local_310;
  undefined8 local_30c;
  undefined6 local_304;
  undefined2 uStack_2fe;
  undefined6 uStack_2fc;
  undefined4 local_2f0;
  undefined3 uStack_2ec;
  undefined8 local_2e8;
  undefined4 *local_2e0;
  ulonglong local_2d8;
  longlong local_2d0;
  longlong local_2a8;
  longlong lStack_2a0;
  undefined8 local_298;
  undefined4 local_28c;
  longlong local_288;
  code *local_280;
  code *local_278;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  local_2a8 = 0;
  lStack_2a0 = 0;
  local_298 = 0;
  local_2d0 = param_2;
  uVar2 = FUN_00972764();
  uVar3 = FUN_00972737();
  if (*(longlong *)(local_2d0 + 0x10) == *(longlong *)(local_2d0 + 8)) {
    FUN_00925fd0();
    uVar6 = FUN_00926010();
    uVar13 = FUN_00928ab0("void pace::AuthorizationVerifier::getContentKeyFromIlok1(pace::SharedIlok1Protocols_T, const petpub::AuthChain &, const pet::fusion::DecryptionAssistData &, std::vector<uint8_t> &, std::vector<uint8_t> &)"
                          ,0x3189);
    FUN_009bd14b(uVar13,uVar6);
  }
  if (*unaff_RSI == 0) {
    FUN_00925fd0();
    uVar6 = FUN_00926010();
    uVar13 = FUN_00928ab0("void pace::AuthorizationVerifier::getContentKeyFromIlok1(pace::SharedIlok1Protocols_T, const petpub::AuthChain &, const pet::fusion::DecryptionAssistData &, std::vector<uint8_t> &, std::vector<uint8_t> &)"
                          ,0x318e);
    FUN_009bd14b(uVar13,uVar6);
  }
  local_350 = &DAT_0251d5b0;
  local_348 = 0;
  cStack_346 = '\0';
  uStack_345 = 0;
  uStack_343 = 0;
  uStack_340 = 0;
  local_338 = 0;
  local_330 = 0;
  local_328 = 0;
  local_320 = 0;
  local_318 = 0;
  local_310 = 0;
  local_30c = 0;
  local_304 = 0;
  uStack_2fe = 0;
  uStack_2fc = 0;
  FUN_0092e2c6(0,&local_350,1);
  if (cStack_346 == '\0') {
    FUN_00925fd0();
    FUN_00926010();
    local_288 = param_1 + 0x10;
    local_280 = FUN_00950d67;
    local_278 = FUN_00950d6d;
    FUN_00983230();
    FUN_00928ab0("void pace::AuthorizationVerifier::getContentKeyFromIlok1(pace::SharedIlok1Protocols_T, const petpub::AuthChain &, const pet::fusion::DecryptionAssistData &, std::vector<uint8_t> &, std::vector<uint8_t> &)"
                 ,0x3198);
    FUN_009bd14b();
  }
  iVar1 = *(int *)(param_1 + 0x98);
  lVar7 = FUN_008e4ece();
  local_2d8 = (ulonglong)uVar3;
  if (iVar1 != *(int *)(lVar7 + 0x2c)) {
    local_28c = *(undefined4 *)(param_1 + 0x98);
    uVar3 = FUN_00972764();
    uVar4 = FUN_00972737();
    if ((((uVar2 == 0) || (uVar3 == 0)) ||
        (uVar10 = *(longlong *)(param_1 + 0xc0) - *(longlong *)(param_1 + 0xb8), uVar10 < uVar2)) ||
       (((uVar10 % (ulonglong)uVar4 != 0 ||
         (uVar10 = *(longlong *)(param_1 + 0xd8) - *(longlong *)(param_1 + 0xd0), uVar10 < local_2d8
         )) || ((uVar10 % (ulonglong)uVar4 != 0 ||
                (plVar9 = *(longlong **)(param_1 + 0xa0),
                (ulonglong)(*(longlong *)(param_1 + 0xa8) - (longlong)plVar9) < 8)))))) {
      FUN_00925fd0();
      uVar6 = FUN_00926010();
      uVar13 = FUN_00928ab0("void pace::AuthorizationVerifier::getContentKeyFromIlok1(pace::SharedIlok1Protocols_T, const petpub::AuthChain &, const pet::fusion::DecryptionAssistData &, std::vector<uint8_t> &, std::vector<uint8_t> &)"
                            ,0x31ee);
      FUN_009bd14b(uVar13,uVar6);
      plVar9 = *(longlong **)(param_1 + 0xa0);
    }
    local_288 = *plVar9;
    local_48 = FUN_00996aa8();
    uVar13 = FUN_009ad770(extraout_XMM0_Da_00,&local_40);
    uVar10 = (ulonglong)uVar3;
    while ((ulonglong)(lStack_2a0 - local_2a8) < uVar10) {
      uVar13 = FUN_00a14dd0(&local_40,&local_48);
    }
    uVar13 = FUN_009a6d58(uVar13,*(undefined8 *)(param_1 + 0xc0));
    FUN_009a6d58(uVar13,*(undefined8 *)(param_1 + 0xd8));
    goto LAB_00945750;
  }
  local_28c = *(undefined4 *)(param_1 + 0x30);
  uVar4 = FUN_00972764();
  uVar5 = FUN_00972737();
  if (((uVar4 == 0) || (uVar2 == 0)) ||
     ((*(longlong *)(param_1 + 0x88) - *(longlong *)(param_1 + 0x80) != 7 ||
      (uVar10 = *(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38), uVar10 < uVar2)))) {
LAB_00945484:
    FUN_00925fd0();
    uVar6 = FUN_00926010();
    uVar13 = FUN_00928ab0("void pace::AuthorizationVerifier::getContentKeyFromIlok1(pace::SharedIlok1Protocols_T, const petpub::AuthChain &, const pet::fusion::DecryptionAssistData &, std::vector<uint8_t> &, std::vector<uint8_t> &)"
                          ,0x31af);
    FUN_009bd14b(uVar13,uVar6);
    puVar8 = *(undefined8 **)(param_1 + 0x68);
  }
  else {
    if ((((uVar3 < 0x10) || (uVar10 % (ulonglong)uVar5 != 0)) ||
        (uVar10 = *(longlong *)(param_1 + 0x58) - *(longlong *)(param_1 + 0x50), uVar10 < local_2d8)
        ) || (uVar10 % (ulonglong)uVar5 != 0)) goto LAB_00945484;
    puVar8 = *(undefined8 **)(param_1 + 0x68);
    uVar10 = *(longlong *)(param_1 + 0x70) - (longlong)puVar8;
    if ((uVar10 < 0x10) || ((uVar10 & 0xf) != 0)) goto LAB_00945484;
  }
  local_48 = *puVar8;
  local_40 = puVar8[1];
  uVar13 = FUN_0098ce6c(0,1,param_1 + 0x50);
  FUN_0098d718(uVar13,&local_48);
  local_2f0 = **(undefined4 **)(param_1 + 0x80);
  puVar11 = &local_2f0;
  uStack_2ec = (undefined3)
               ((uint)*(undefined4 *)((longlong)*(undefined4 **)(param_1 + 0x80) + 3) >> 8);
  local_2e8 = FUN_00996ff4(&local_48);
  local_2e0 = puVar11;
  uVar13 = FUN_009ad770(extraout_XMM0_Da,&local_2d8);
  uVar10 = (ulonglong)uVar4;
  while ((ulonglong)(lStack_2a0 - local_2a8) < uVar10) {
    uVar13 = FUN_00a14dd0(&local_2d8,&local_2e8);
  }
  uVar13 = FUN_009a6d58(uVar13,*(undefined8 *)(param_1 + 0x40));
  FUN_009a6d58(uVar13,*(undefined8 *)(param_1 + 0x58));
  FUN_0098ce7c();
LAB_00945750:
  if ((ulonglong)(lStack_2a0 - local_2a8) < uVar10) {
    FUN_00958ec0();
  }
  else if (uVar10 < (ulonglong)(lStack_2a0 - local_2a8)) {
    lStack_2a0 = local_2a8 + uVar10;
  }
  FUN_0098ce6c(0,1,&local_2a8);
  FUN_0098d41a();
  FUN_0098d41a();
  pvVar12 = (void *)(param_1 + 0x18);
  FUN_0092b19c(pvVar12,param_4);
  FUN_0098ce7c();
  FUN_009170d0();
  if (local_2a8 != 0) {
    lStack_2a0 = local_2a8;
    operator_delete(pvVar12);
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


