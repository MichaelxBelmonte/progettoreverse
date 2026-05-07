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
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_009451f8(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  void*puVar8;
  int64_t *plVar9;
  uint64_t uVar10;
  void*puVar11;
  int64_t *arg1;
  void *pvVar12;
  uint32_t uVar13;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  void*local_350;
  uint16_t local_348;
  char cStack_346;
  uint16_t uStack_345;
  undefined3 uStack_343;
  undefined5 uStack_340;
  uint64_t local_338;
  uint64_t local_330;
  uint64_t local_328;
  uint64_t local_320;
  uint64_t local_318;
  uint8_t local_310;
  uint64_t local_30c;
  undefined6 local_304;
  uint16_t uStack_2fe;
  undefined6 uStack_2fc;
  uint32_t local_2f0;
  undefined3 uStack_2ec;
  uint64_t local_2e8;
  void*local_2e0;
  uint64_t local_2d8;
  int64_t local_2d0;
  int64_t local_2a8;
  int64_t lStack_2a0;
  uint64_t local_298;
  uint32_t local_28c;
  int64_t local_288;
  code *local_280;
  code *local_278;
  uint64_t local_48;
  uint64_t local_40;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  local_2a8 = 0;
  lStack_2a0 = 0;
  local_298 = 0;
  local_2d0 = param_2;
  uVar2 = FUN_00972764();
  uVar3 = FUN_00972737();
  if (*(int64_t *)(local_2d0 + 0x10) == *(int64_t *)(local_2d0 + 8)) {
    FUN_00925fd0();
    uVar6 = FUN_00926010();
    uVar13 = FUN_00928ab0("void pace::AuthorizationVerifier::getContentKeyFromIlok1(pace::SharedIlok1Protocols_T, const petpub::AuthChain &, const pet::fusion::DecryptionAssistData &, std::vector<uint8_t> &, std::vector<uint8_t> &)"
                          ,0x3189);
    FUN_009bd14b(uVar13,uVar6);
  }
  if (*arg1 == 0) {
    FUN_00925fd0();
    uVar6 = FUN_00926010();
    uVar13 = FUN_00928ab0("void pace::AuthorizationVerifier::getContentKeyFromIlok1(pace::SharedIlok1Protocols_T, const petpub::AuthChain &, const pet::fusion::DecryptionAssistData &, std::vector<uint8_t> &, std::vector<uint8_t> &)"
                          ,0x318e);
    FUN_009bd14b(uVar13,uVar6);
  }
  local_350 = &g_0251d5b0;
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
  local_2d8 = (uint64_t)uVar3;
  if (iVar1 != *(int *)(lVar7 + 0x2c)) {
    local_28c = *(void*)(param_1 + 0x98);
    uVar3 = FUN_00972764();
    uVar4 = FUN_00972737();
    if ((((uVar2 == 0) || (uVar3 == 0)) ||
        (uVar10 = *(int64_t *)(param_1 + 0xc0) - *(int64_t *)(param_1 + 0xb8), uVar10 < uVar2)) ||
       (((uVar10 % (uint64_t)uVar4 != 0 ||
         (uVar10 = *(int64_t *)(param_1 + 0xd8) - *(int64_t *)(param_1 + 0xd0), uVar10 < local_2d8
         )) || ((uVar10 % (uint64_t)uVar4 != 0 ||
                (plVar9 = *(int64_t **)(param_1 + 0xa0),
                (uint64_t)(*(int64_t *)(param_1 + 0xa8) - (int64_t)plVar9) < 8)))))) {
      FUN_00925fd0();
      uVar6 = FUN_00926010();
      uVar13 = FUN_00928ab0("void pace::AuthorizationVerifier::getContentKeyFromIlok1(pace::SharedIlok1Protocols_T, const petpub::AuthChain &, const pet::fusion::DecryptionAssistData &, std::vector<uint8_t> &, std::vector<uint8_t> &)"
                            ,0x31ee);
      FUN_009bd14b(uVar13,uVar6);
      plVar9 = *(int64_t **)(param_1 + 0xa0);
    }
    local_288 = *plVar9;
    local_48 = FUN_00996aa8();
    uVar13 = FUN_009ad770(extraout_XMM0_Da_00,&local_40);
    uVar10 = (uint64_t)uVar3;
    while ((uint64_t)(lStack_2a0 - local_2a8) < uVar10) {
      uVar13 = FUN_00a14dd0(&local_40,&local_48);
    }
    uVar13 = FUN_009a6d58(uVar13,*(void*)(param_1 + 0xc0));
    FUN_009a6d58(uVar13,*(void*)(param_1 + 0xd8));
    goto LAB_00945750;
  }
  local_28c = *(void*)(param_1 + 0x30);
  uVar4 = FUN_00972764();
  uVar5 = FUN_00972737();
  if (((uVar4 == 0) || (uVar2 == 0)) ||
     ((*(int64_t *)(param_1 + 0x88) - *(int64_t *)(param_1 + 0x80) != 7 ||
      (uVar10 = *(int64_t *)(param_1 + 0x40) - *(int64_t *)(param_1 + 0x38), uVar10 < uVar2)))) {
LAB_00945484:
    FUN_00925fd0();
    uVar6 = FUN_00926010();
    uVar13 = FUN_00928ab0("void pace::AuthorizationVerifier::getContentKeyFromIlok1(pace::SharedIlok1Protocols_T, const petpub::AuthChain &, const pet::fusion::DecryptionAssistData &, std::vector<uint8_t> &, std::vector<uint8_t> &)"
                          ,0x31af);
    FUN_009bd14b(uVar13,uVar6);
    puVar8 = *(void**)(param_1 + 0x68);
  }
  else {
    if ((((uVar3 < 0x10) || (uVar10 % (uint64_t)uVar5 != 0)) ||
        (uVar10 = *(int64_t *)(param_1 + 0x58) - *(int64_t *)(param_1 + 0x50), uVar10 < local_2d8)
        ) || (uVar10 % (uint64_t)uVar5 != 0)) goto LAB_00945484;
    puVar8 = *(void**)(param_1 + 0x68);
    uVar10 = *(int64_t *)(param_1 + 0x70) - (int64_t)puVar8;
    if ((uVar10 < 0x10) || ((uVar10 & 0xf) != 0)) goto LAB_00945484;
  }
  local_48 = *puVar8;
  local_40 = puVar8[1];
  uVar13 = FUN_0098ce6c(0,1,param_1 + 0x50);
  FUN_0098d718(uVar13,&local_48);
  local_2f0 = **(void**)(param_1 + 0x80);
  puVar11 = &local_2f0;
  uStack_2ec = (undefined3)
               ((uint)*(void*)((int64_t)*(void**)(param_1 + 0x80) + 3) >> 8);
  local_2e8 = FUN_00996ff4(&local_48);
  local_2e0 = puVar11;
  uVar13 = FUN_009ad770(extraout_XMM0_Da,&local_2d8);
  uVar10 = (uint64_t)uVar4;
  while ((uint64_t)(lStack_2a0 - local_2a8) < uVar10) {
    uVar13 = FUN_00a14dd0(&local_2d8,&local_2e8);
  }
  uVar13 = FUN_009a6d58(uVar13,*(void*)(param_1 + 0x40));
  FUN_009a6d58(uVar13,*(void*)(param_1 + 0x58));
  FUN_0098ce7c();
LAB_00945750:
  if ((uint64_t)(lStack_2a0 - local_2a8) < uVar10) {
    FUN_00958ec0();
  }
  else if (uVar10 < (uint64_t)(lStack_2a0 - local_2a8)) {
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
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return;
}

