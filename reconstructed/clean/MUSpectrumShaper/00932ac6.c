// Function: FUN_00932ac6
// Address: 00932ac6
// Size: 5763 bytes
// Class: MUSpectrumShaper
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "Protocols object is missing a commander"
//   "The AuthChain's internalReference does not have enough data for an ILok2Ref"
//   "The AuthChain from the caller is empty"
//   "verifyAuth requires an encrypted channel setup with openLicenseDaemonEncryptedChannel or openQuickL...
//   "The iLok2's signature of the commands and results was wrong"
//   "Can't verify an authChain that is marked as not authorized."
//   "iLok1 VerifyAuth: Not authorized"
//   "void pace::AuthorizationVerifier::verifyAuthIlok2(petpub::AuthChain &, const petpub::VerifyAuthOpti...
//   "The expected auth (a:0x%08X, p:0x%08X, i:0x%08X) does not match the iLok2 auth found (a:0x%08X, p:0...
//   "The iLok2 auth (a:0x%08X, p:0x%08X, i:0x%08X) from challenge does not match the iLok2 auth (a:0x%08...
//   "The authChain is too long, exceeding %d auths"
//   "Not Authorized & MasterTime for location %s//%X is ahead of the computer time."
// === MUSpectrumShaper properties ===
//   GNInt           _assembledElementRendererCount
//   MUSpectrumShaperSpectrumType _spectrumType
//   bool            _processSpectrumShaper
//   bool            _canUseSpectrumShaper
//   bool            _processEqualizer
//   bool            _processLowerSpectrum
//   bool            _processUpperSpectrum
//   bool            _isBypassed
//   GNInt           _overallSpectrumFundamentalPitchIndex
//   float           _overallSpectrumFreqPerBin
//   float           _referenceMagnitudeSum
//   float           _maximumMagnitudeSum
//   float           _synthAmps
//   float           _synthPhases
//   float           _emphasizePow
//   float           _allGain
//   float           _ampDifferencePow
//   float           _clipLimit
//   bool            _didRequestCacheValidation
//   bool            _appliedEqualizerFactorsAreValid
//   bool            _appliedEqualizerFormantFactorsAreValid
//   bool            _processSpectrumShaperIsValid
//   float           _startValue
//   float           _riseDuration
//   float           _riseEndValue
//   float           _decayStartTime
//   float           _decayEndTime
//   float           _decayFactor
//   float           _endValue
//   bool            _needsProcessEnvelope
//   ... +35 more


void FUN_00932ac6(uint64_t param_1,int64_t param_2,int **param_3,int64_t *param_4)

{
  int64_t *plVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint8_t uVar5;
  int iVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t *plVar10;
  string *this;
  uint64_t uVar11;
  char *pcVar12;
  string *psVar13;
  code *pcVar14;
  int64_t arg1;
  int64_t this_ptr;
  uint32_t uVar15;
  uint32_t extraout_XMM0_Da;
  int64_t *local_res8;
  int64_t *local_res10;
  void*local_res18;
  int64_t *local_3c0;
  int64_t *local_3b0;
  uint8_t local_398 [32];
  int64_t local_378;
  int64_t *local_370;
  int64_t local_368;
  int64_t *local_360;
  int64_t local_358;
  int64_t *local_350;
  int64_t *local_348;
  uint64_t local_340;
  void*local_338;
  int **local_330;
  void*local_328;
  uint64_t local_320;
  uint64_t local_318;
  uint64_t local_310;
  void*local_308;
  int local_300;
  uint64_t local_2f8;
  uint32_t local_2f0;
  uint16_t local_2ec;
  uint8_t local_2ea;
  uint16_t local_2e8;
  uint64_t local_2e0;
  int64_t *local_2d8;
  uint64_t local_2d0;
  int64_t *local_2c8;
  int64_t local_2c0;
  int64_t *local_2b8;
  uint64_t local_2b0 [6];
  void*local_280;
  void*local_278;
  uint64_t local_270;
  uint64_t local_268;
  uint64_t local_260;
  uint64_t local_258;
  uint64_t local_250;
  uint64_t local_248;
  uint64_t local_240;
  void*local_238;
  uint64_t local_230;
  uint64_t local_228;
  uint64_t local_220;
  uint64_t local_218;
  undefined7 local_210;
  uint8_t uStack_209;
  uint16_t uStack_208;
  uint8_t uStack_206;
  uint32_t local_205;
  uint8_t local_201;
  uint8_t uStack_200;
  uint8_t uStack_1ff;
  uint16_t uStack_1fe;
  uint16_t local_1fc;
  char local_1f8;
  uint64_t local_1f0;
  uint8_t local_1e8 [8];
  uint8_t local_1e0 [24];
  int64_t local_1c8;
  int **local_1c0;
  int64_t *local_1b8;
  int *local_1b0;
  int64_t *local_1a8;
  int *local_1a0;
  int64_t local_198;
  int64_t lStack_190;
  uint64_t local_188;
  int64_t local_178;
  int64_t lStack_170;
  uint64_t local_168;
  void*local_160;
  char local_158 [32];
  uint8_t local_138 [2];
  ushort local_136;
  int local_134;
  int local_130;
  int local_12c [2];
  int local_124;
  uint32_t local_11c;
  int64_t local_118;
  int64_t lStack_110;
  uint64_t local_108;
  int *local_100;
  uint64_t local_f8;
  code *local_f0;
  uint64_t local_e8;
  uint64_t local_e0;
  uint64_t local_d8;
  int64_t local_d0;
  int64_t local_c8;
  uint64_t local_c0;
  uint64_t local_b8;
  uint64_t local_b0;
  uint8_t local_a8;
  uint32_t uStack_a7;
  uint16_t uStack_a3;
  uint8_t uStack_a1;
  uint32_t local_8c;
  uint32_t local_88;
  int local_84;
  int local_80;
  int local_7c;
  void*local_78;
  int64_t *local_70;
  int local_64;
  int64_t local_60;
  int64_t *local_58;
  
  local_328._0_4_ = 0xfffffffe;
  local_100 = (int *)0x7ffffffffffffffe;
  local_340 = param_1;
  local_1c0 = param_3;
  local_1b8 = param_4;
  uVar15 = FUN_00953fa0(param_1,&local_100);
  local_78 = local_280;
  local_328 = (void*)CONCAT44(local_328._4_4_,0xfffffffe);
  local_100 = (int *)0x7ffffffffffffffe;
  FUN_00953fa0(uVar15,&local_100);
  local_160 = local_280;
  local_188 = 0;
  local_198 = 0;
  lStack_190 = 0;
  local_168 = 0;
  local_178 = 0;
  lStack_170 = 0;
  local_108 = 0;
  local_118 = 0;
  lStack_110 = 0;
  if (*(int64_t *)(arg1 + 0x10) == *(int64_t *)(arg1 + 8)) {
    FUN_00925fd0();
    uVar7 = FUN_00926010();
    uVar15 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthIlok2(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                          ,0x388b);
    FUN_009bd14b(uVar15,uVar7);
  }
  if (*(char *)(arg1 + 0x20) == '\0') {
    FUN_00925fd0();
    uVar7 = FUN_00926010();
    uVar15 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthIlok2(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                          ,0x3892);
    FUN_009bd14b(uVar15,uVar7);
  }
  this = (string *)(segment_command_00000020.segname + 8);
  local_328 = &g_02517678;
  local_320 = 0;
  local_318 = 0;
  local_310 = 0;
  psVar13 = (string *)&g_0251cd00;
  local_308 = &g_0251cd00;
  local_2f8 = 0;
  local_2ec = 1;
  local_2ea = 1;
  local_300 = 1;
  local_2f0 = 0;
  local_2e8 = 0;
  FUN_008911e2();
  std::string::operator=(this,psVar13);
  local_300 = 2;
  if ((char *)local_res18[1] != (char *)*local_res18) {
    local_300 = (int)*(char *)*local_res18;
  }
  local_2f8 = *(void*)(arg1 + 0x60);
  local_2e8 = CONCAT11(1,(uint8_t)local_2e8);
  FUN_009b4e10();
  if (*(int64_t *)(this_ptr + 0x70) == 0) {
    FUN_00925fd0();
    uVar7 = FUN_00926010();
    uVar15 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthIlok2(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                          ,0x38b9);
    FUN_009bd14b(uVar15,uVar7);
  }
  if (*(char *)(param_2 + 0xf) != '\0') {
    local_100 = (int *)&g_0251d750;
    local_f8 = CONCAT44(0x1e,(uint32_t)local_f8);
    local_f0 = 0x0;
    local_e8 = 0;
    local_e0 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    uStack_a7 = 0x10101;
    uStack_a3 = 0x100;
    uStack_a1 = 1;
    local_280 = &g_0251d7b8;
    local_278 = (void*)((uint64_t)local_278 & 0xffffffffffff0000);
    local_270 = 0;
    local_268 = 0;
    local_260 = 0;
    local_258 = 0;
    local_250 = 0;
    local_248 = 0;
    local_240 = local_240 & 0xffffffffffffff00;
    local_238 = &g_0251d288;
    local_230 = 0;
    local_228 = 0;
    local_220 = 0;
    local_218 = 0;
    local_210 = 0;
    uStack_209 = 0;
    uStack_208 = 0;
    uStack_206 = 0;
    uStack_200 = 1;
    uStack_1ff = 1;
    uStack_1fe = 0;
    local_1fc = 1;
    local_f8 = CONCAT71(local_f8._1_7_,*(void*)(param_2 + 8));
    local_398[0] = 0;
    FUN_009a8930();
    local_398[0] = 0;
    uVar11 = local_c8 - local_d0;
    if (uVar11 < 0x60) {
      FUN_009a8930(uVar11,local_398);
    }
    else if (uVar11 != 0x60) {
      local_c8 = local_d0 + 0x60;
    }
    FUN_0092b5a0(&local_280,&local_100);
    if ((char)local_278 != '\0') {
      FUN_00925fd0();
      uVar7 = FUN_00926010();
      uVar15 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthIlok2(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                            ,0x38d3);
      FUN_009bd14b(uVar15,uVar7);
    }
    FUN_0091b816();
    FUN_0091aba4();
  }
  local_280 = &g_02519820;
  local_278 = &g_0251c3a0;
  local_270 = 0;
  local_268 = 0;
  local_260 = 0;
  local_258 = 0;
  local_250 = 0;
  local_248 = 0;
  local_240 = 0;
  local_238 = (void*)0x100000001;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  local_218 = 0;
  local_210 = 0;
  uStack_209 = 0;
  uStack_208 = 1;
  uStack_206 = 0;
  local_205 = 0x1010101;
  local_201 = 0;
  uStack_200 = 0;
  uStack_1ff = 0;
  local_1f8 = '\0';
  local_2e0 = *(void*)(this_ptr + 8);
  local_2d8 = *(int64_t **)(this_ptr + 0x10);
  if (local_2d8 != (int64_t *)0x0) {
    LOCK();
    local_2d8[1] = local_2d8[1] + 1;
    UNLOCK();
  }
  uVar15 = *(void*)(this_ptr + 0x68);
  local_2d0 = *(void*)(this_ptr + 0x70);
  local_2c8 = *(int64_t **)(this_ptr + 0x78);
  if (local_2c8 != (int64_t *)0x0) {
    LOCK();
    local_2c8[1] = local_2c8[1] + 1;
    UNLOCK();
  }
  FUN_0092bdb0(uVar15,&local_328,&local_2d0,arg1);
  if (local_2c8 != (int64_t *)0x0) {
    LOCK();
    plVar1 = local_2c8 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*local_2c8 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_2d8 != (int64_t *)0x0) {
    LOCK();
    plVar1 = local_2d8 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*local_2d8 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  local_2c0 = local_60;
  local_2b8 = local_58;
  if (local_58 != (int64_t *)0x0) {
    LOCK();
    local_58[1] = local_58[1] + 1;
    UNLOCK();
  }
  FUN_009acf04(0,0,0);
  if (local_2b8 != (int64_t *)0x0) {
    LOCK();
    plVar1 = local_2b8 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*local_2b8 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_1f8 != '\0') {
    FUN_008f1a3c();
  }
  lVar8 = *(int64_t *)(local_60 + 8);
  local_1a8 = *(int64_t **)(local_60 + 0x10);
  if (local_1a8 != (int64_t *)0x0) {
    LOCK();
    local_1a8[1] = local_1a8[1] + 1;
    UNLOCK();
  }
  if (lVar8 == 0) {
    FUN_00925fd0();
    uVar7 = FUN_00926010();
    uVar15 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthIlok2(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                          ,0x390e);
    FUN_009bd14b(uVar15,uVar7);
  }
  if (*(uint *)(param_2 + 0x10) < 5) {
    *(uint *)(lVar8 + 0x400) = *(uint *)(param_2 + 0x10);
  }
  FUN_009ab8f4();
  if (local_100 != (int *)0x0) {
    pcVar14 = 0x0;
    lVar8 = ___dynamic_cast(0,&PTR_vtable_02520638);
    if (lVar8 == 0) goto LAB_0093322f;
    if (local_f8 != 0x0) {
      LOCK();
      *(int64_t *)(local_f8 + 8) = *(int64_t *)(local_f8 + 8) + 1;
      UNLOCK();
      pcVar14 = local_f8;
      goto LAB_0093322f;
    }
  }
  pcVar14 = 0x0;
LAB_0093322f:
  cVar4 = FUN_00979172();
  if (pcVar14 != 0x0) {
    LOCK();
    pcVar2 = pcVar14 + 8;
    lVar8 = *(int64_t *)pcVar2;
    *(int64_t *)pcVar2 = *(int64_t *)pcVar2 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*(int64_t *)pcVar14 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_f8 != 0x0) {
    LOCK();
    pcVar14 = local_f8 + 8;
    lVar8 = *(int64_t *)pcVar14;
    *(int64_t *)pcVar14 = *(int64_t *)pcVar14 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*(int64_t *)local_f8 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  local_1c8 = 1;
  if (cVar4 == '\0') {
    FUN_009abef4(0xfffffffe,0);
    if (local_3c0 != (int64_t *)0x0) {
      LOCK();
      plVar1 = local_3c0 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*local_3c0 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    local_1c8 = 0;
  }
  local_70 = (int64_t *)(arg1 + 8);
  local_1a0 = (int *)(arg1 + 0x60);
  local_8c = *(void*)(this_ptr + 0x1a0);
  local_88 = *(void*)(this_ptr + 0x1a4);
  local_338 = &local_f8;
  local_330 = local_1c0;
  if (local_1c0 == (int **)0x0) {
    local_330 = &local_100;
  }
  local_1b0 = &local_130;
  do {
    plVar1 = local_70;
    *(void*)(arg1 + 0x20) = 0x101;
    *(void*)(arg1 + 0x24) = 100;
    FUN_009e9d7c();
    FUN_009ac878(local_1e8,local_8c,local_1e0);
    local_78 = (void*)FUN_009a3b9c();
    local_160 = (void*)FUN_009a3b9c();
    if ((uint64_t)(*(int64_t *)(*plVar1 + 0x20) - *(int64_t *)(*plVar1 + 0x18)) < 4) {
      FUN_00925fd0();
      uVar7 = FUN_00926010();
      uVar15 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthIlok2(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                            ,0x3976);
      FUN_009bd14b(uVar15,uVar7);
    }
    local_64 = FUN_0097413b();
    if ((local_1b8 == (int64_t *)0x0) || ((uint64_t)(local_1b8[1] - *local_1b8) < 8)) {
      FUN_009e9d9c();
    }
    else {
      local_1f0 = *(void*)*local_1b8;
    }
    FUN_009ac9e8(&local_80,&local_84,&local_7c,&local_1f0);
    lVar8 = *plVar1;
    if (((local_84 != *(int *)(lVar8 + 8)) || (local_80 != *(int *)(lVar8 + 0xc))) ||
       (local_7c != *(int *)(lVar8 + 0x10))) {
      FUN_00925fd0();
      uVar7 = FUN_00926010();
      local_100 = &local_84;
      local_f8 = FUN_009595d8;
      local_f0 = &LAB_009977a0;
      FUN_00983230();
      local_100 = &local_80;
      local_f8 = FUN_009595d8;
      local_f0 = &LAB_009977a0;
      FUN_00983230();
      local_100 = &local_7c;
      local_f8 = FUN_009595d8;
      local_f0 = &LAB_009977a0;
      FUN_00983230();
      local_100 = (int *)(*plVar1 + 8);
      local_f8 = FUN_009cac80;
      local_f0 = FUN_009cefa0;
      FUN_00983230();
      local_100 = (int *)(*plVar1 + 0xc);
      local_f8 = FUN_009cac80;
      local_f0 = FUN_009cefa0;
      FUN_00983230();
      local_100 = (int *)(*plVar1 + 0x10);
      local_f8 = FUN_009cac80;
      local_f0 = FUN_009cefa0;
      FUN_00983230();
      local_100 = &local_64;
      local_f8 = FUN_009595d8;
      local_f0 = &LAB_009977a0;
      FUN_00983230();
      uVar15 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthIlok2(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                            ,&g_00003a16);
      FUN_009bd14b(uVar15,uVar7);
    }
    if (((local_1c0 == (int **)0x0) && (*(char *)(param_2 + 0xe) == '\0')) &&
       (*(char *)(param_2 + 10) == '\0')) {
      FUN_009ac398(&local_118,local_138,0,&local_78);
    }
    else {
      FUN_009abfe2(&local_118,local_138,0,&local_78);
      local_100 = (int *)&g_0251c268;
      local_338[0xb] = 0;
      local_338[10] = 0;
      local_338[9] = 0;
      local_338[8] = 0;
      local_338[7] = 0;
      local_338[6] = 0;
      local_338[5] = 0;
      local_338[4] = 0;
      local_338[3] = 0;
      local_338[2] = 0;
      local_338[1] = 0;
      *local_338 = 0;
      *(void*)(local_338 + 0xc) = 0;
      FUN_0093f7b2(local_340,&local_78,local_330,0);
      FUN_008ecfcc();
    }
    if (((local_84 != local_130) || (local_80 != local_134)) || (local_7c != local_12c[0])) {
      FUN_00925fd0();
      uVar7 = FUN_00926010();
      local_100 = &local_84;
      local_f8 = FUN_009595d8;
      local_f0 = &LAB_009977a0;
      FUN_00983230();
      local_100 = &local_80;
      local_f8 = FUN_009595d8;
      local_f0 = &LAB_009977a0;
      FUN_00983230();
      local_100 = &local_7c;
      local_f8 = FUN_009595d8;
      local_f0 = &LAB_009977a0;
      FUN_00983230();
      local_100 = local_1b0;
      local_f8 = FUN_009595d8;
      local_f0 = &LAB_009977a0;
      FUN_00983230();
      local_100 = &local_134;
      local_f8 = FUN_009595d8;
      local_f0 = &LAB_009977a0;
      FUN_00983230();
      local_100 = local_12c;
      local_f8 = FUN_009595d8;
      local_f0 = &LAB_009977a0;
      FUN_00983230();
      uVar15 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthIlok2(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                            ,&g_00003a6d);
      FUN_009bd14b(uVar15,uVar7);
    }
    plVar1 = local_58;
    if ((*(char *)(param_2 + 9) == '\0') || ((local_136 & 0x4000) == 0)) {
      uVar5 = 0;
    }
    else {
      local_378 = local_60;
      local_370 = local_58;
      if (local_58 != (int64_t *)0x0) {
        LOCK();
        local_58[1] = local_58[1] + 1;
        UNLOCK();
      }
      uVar5 = FUN_00943dc0(local_64,&local_378);
      if (plVar1 != (int64_t *)0x0) {
        LOCK();
        plVar10 = plVar1 + 1;
        lVar8 = *plVar10;
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (lVar8 == 0) {
          (**(code **)(*plVar1 + 0x10))();
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    local_158[0] = '\0';
    FUN_0092e102();
    uVar11 = *(uint64_t *)(arg1 + 0x58) & *(uint64_t *)(this_ptr + 0xb8);
    pcVar12 = (char *)0x0;
    FUN_0093a766(0,&local_118,0,local_158,uVar5,1,*(void*)(param_2 + 0xe),uVar11 != 0,
                 *(void*)(param_2 + 0x18),4);
    if ((*(char *)(param_2 + 9) != '\0') || (*(char *)(param_2 + 0xc) != '\0')) {
      lVar8 = 0;
      while (local_124 != -1) {
        lVar9 = FUN_008e4ece();
        if ((uint64_t)(int64_t)*(int *)(lVar9 + 0x28) <= lVar8 + 2U) {
          FUN_00925fd0();
          uVar7 = FUN_00926010();
          lVar9 = FUN_008e4ece();
          local_100 = (int *)(lVar9 + 0x28);
          local_f8 = FUN_009cac80;
          local_f0 = FUN_009cefa0;
          FUN_00983230();
          uVar15 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthIlok2(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                                ,&g_00003abc);
          FUN_009bd14b(uVar15,uVar7);
        }
        FUN_009ac398(&local_118,local_138,0,&local_78);
        if (*(char *)(param_2 + 10) != '\0') {
          FUN_009ac810(0x80000002,0x81,&local_100);
          if (local_e8._4_4_ != -1) {
            FUN_00940d18();
          }
        }
        plVar1 = local_58;
        if ((*(char *)(param_2 + 9) == '\0') || ((local_136 >> 0xe & 1) == 0)) {
          uVar5 = 0;
        }
        else if (((short)local_136 < 0) ||
                ((uVar5 = 0, (local_136 & 0x420) == 0x420 && (local_158[0] == '\0')))) {
          local_368 = local_60;
          local_360 = local_58;
          if (local_58 != (int64_t *)0x0) {
            LOCK();
            local_58[1] = local_58[1] + 1;
            UNLOCK();
          }
          uVar5 = FUN_00943dc0(local_11c,&local_368);
          if (plVar1 != (int64_t *)0x0) {
            LOCK();
            plVar10 = plVar1 + 1;
            lVar9 = *plVar10;
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (lVar9 == 0) {
              (**(code **)(*plVar1 + 0x10))();
              std::__shared_weak_count::__release_weak();
            }
          }
        }
        lVar8 = lVar8 + 1;
        pcVar12 = (char *)0x0;
        FUN_0093a766(0,&local_118,lVar8,local_158,uVar5,1,0,uVar11 != 0,
                     *(void*)(param_2 + 0x18),4);
      }
    }
    plVar1 = local_58;
    if (local_158[0] == '\0') {
      *(void*)(arg1 + 0x20) = 0;
      *(void*)(arg1 + 0x24) = 0;
LAB_00933d59:
      bVar3 = false;
    }
    else {
      if (((*(char *)(arg1 + 0x20) == '\0') ||
          (*(void*)(arg1 + 0x21) = 0,
          local_res10 == (int64_t *)0x0 || local_res8 == (int64_t *)0x0)) ||
         (pcVar12 = (char *)local_res10, local_res10[1] == *local_res10)) goto LAB_00933d59;
      local_358 = local_60;
      local_350 = local_58;
      if (local_58 != (int64_t *)0x0) {
        LOCK();
        local_58[1] = local_58[1] + 1;
        UNLOCK();
      }
      pcVar12 = (char *)local_res8;
      FUN_009458d0(local_res8,arg1,&local_198,&local_178);
      bVar3 = true;
      if (plVar1 != (int64_t *)0x0) {
        LOCK();
        plVar10 = plVar1 + 1;
        lVar8 = *plVar10;
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (lVar8 == 0) {
          (**(code **)(*plVar1 + 0x10))();
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    uVar15 = FUN_008f8528();
    cVar4 = FUN_009ac942(uVar15,0);
    plVar1 = local_1b8;
    if (cVar4 != '\0') {
      if (*(char *)(arg1 + 0x20) == '\0') {
        local_2b0[0] = 300000000;
        uVar15 = FUN_0094ca28(extraout_XMM0_Da,&local_78);
        FUN_00947768(uVar15,local_2b0);
        local_100 = (int *)0x0;
        iVar6 = FUN_0098c910();
        if (iVar6 == -1) {
          FUN_00925fd0();
          uVar7 = FUN_00926010();
          local_100 = local_1a0;
          local_f8 = FUN_00959530;
          local_f0 = FUN_00959536;
          FUN_00983230();
          uVar15 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthIlok2(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                                ,0x3bb0);
          FUN_009bd14b(uVar15,uVar7);
        }
        FUN_00925fd0();
        uVar7 = FUN_00926010();
        pcVar12 = 
        "void pace::AuthorizationVerifier::verifyAuthIlok2(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
        ;
        uVar15 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthIlok2(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                              ,0x3bb8);
        FUN_009bd14b(uVar15,uVar7);
      }
      else {
        if (*(char *)(param_2 + 0xb) != '\0') {
          FUN_00943e2a();
        }
        if (plVar1 != (int64_t *)0x0) {
          plVar10 = (int64_t *)*plVar1;
          if ((uint64_t)(plVar1[1] - (int64_t)plVar10) < 8) {
            FUN_00958ec0();
            plVar10 = (int64_t *)*plVar1;
          }
          else if (plVar1[1] - (int64_t)plVar10 != 8) {
            plVar1[1] = (int64_t)(plVar10 + 1);
          }
          *plVar10 = (int64_t)local_348;
          pcVar12 = (char *)local_348;
        }
        if (bVar3) {
          pcVar12 = (char *)&local_198;
          FUN_0092b386(pcVar12,*(void*)((int64_t)local_res8 + 0xc),&local_178,
                       local_res10[1] - *local_res10);
          ___bzero();
          ___bzero();
        }
        FUN_009f35cc();
        FUN_009f35cc();
      }
      if (local_1a8 != (int64_t *)0x0) {
        LOCK();
        plVar1 = local_1a8 + 1;
        lVar8 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar8 == 0) {
          (**(code **)(*local_1a8 + 0x10))();
          std::__shared_weak_count::__release_weak();
        }
      }
      FUN_009ad0f2();
      if (local_58 != (int64_t *)0x0) {
        LOCK();
        plVar1 = local_58 + 1;
        lVar8 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar8 == 0) {
          (**(code **)(*local_58 + 0x10))();
          std::__shared_weak_count::__release_weak();
        }
      }
      FUN_008b5bc2();
      FUN_0094d0ec();
      FUN_00891d28();
      if (local_118 != 0) {
        lStack_110 = local_118;
        operator_delete(pcVar12);
      }
      if (local_178 != 0) {
        lStack_170 = local_178;
        operator_delete(pcVar12);
      }
      if (local_198 != 0) {
        lStack_190 = local_198;
        operator_delete(pcVar12);
      }
      return;
    }
    lVar8 = local_1c8 + -1;
    if (local_1c8 == 0) {
      FUN_00925fd0();
      uVar7 = FUN_00926010();
      uVar15 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthIlok2(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                            ,0x3bc8);
      FUN_009bd14b(uVar15,uVar7);
    }
    local_1c8 = lVar8;
    FUN_009abef4(0xfffffffe,0);
    if (local_3b0 != (int64_t *)0x0) {
      LOCK();
      plVar1 = local_3b0 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*local_3b0 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
  } while( true );
}

