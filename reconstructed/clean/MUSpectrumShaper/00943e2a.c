// Function: FUN_00943e2a
// Address: 00943e2a
// Size: 959 bytes
// Class: MUSpectrumShaper
// String references:
//   "cacheProductLocationData"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "void pace::AuthorizationVerifier::cacheProductLocationData(const petpub::AuthChain &)"
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


void FUN_00943e2a(void)

{
  uint64_t uVar1;
  int64_t *plVar2;
  int64_t this_ptr;
  uint32_t uVar3;
  void*local_310;
  void*local_308;
  uint64_t local_300;
  uint64_t local_2f8;
  uint64_t local_2f0;
  uint16_t local_2e8;
  uint64_t local_2e4;
  uint64_t local_2dc;
  uint64_t local_2d4;
  uint64_t local_2cc;
  uint64_t local_2c4;
  uint64_t local_2bc;
  uint64_t local_2b4;
  uint32_t local_2ac;
  uint64_t local_2a8;
  uint64_t local_2a0;
  uint64_t local_298;
  uint64_t local_290;
  uint8_t local_288;
  uint32_t local_284;
  void*local_280;
  uint64_t local_278;
  uint64_t local_270;
  uint64_t local_268;
  uint64_t local_260;
  uint64_t local_258;
  uint64_t local_250;
  uint32_t local_248;
  uint64_t local_240;
  uint64_t local_238;
  uint64_t local_230;
  uint64_t local_228;
  uint64_t local_220;
  uint64_t local_218;
  uint64_t local_210;
  uint64_t local_208;
  uint64_t local_200;
  uint64_t local_1f8;
  uint64_t local_1f0;
  uint64_t local_1e8;
  uint64_t local_1e0;
  uint32_t local_1d8;
  uint64_t local_1d0;
  uint64_t local_1c8;
  uint64_t local_1c0;
  uint64_t local_1b8;
  uint64_t local_1b0;
  uint64_t local_1a8;
  uint64_t local_1a0;
  uint64_t local_198;
  uint64_t local_190;
  uint64_t local_188;
  uint64_t local_180;
  uint8_t local_178;
  uint32_t local_170;
  uint8_t local_16c;
  uint64_t local_168;
  uint64_t local_160;
  uint64_t local_158;
  uint64_t local_150;
  void*local_148;
  uint64_t local_140;
  uint64_t local_138;
  uint64_t local_130;
  uint64_t local_128;
  uint64_t local_120;
  uint64_t local_118;
  uint64_t local_110;
  uint64_t local_108;
  uint64_t local_100;
  uint64_t local_f8;
  uint64_t local_f0;
  uint64_t local_e8;
  uint64_t local_e0;
  uint16_t local_d8;
  uint8_t local_d6;
  uint32_t local_d5;
  uint16_t local_d1;
  uint8_t local_cf;
  uint64_t local_c8;
  uint64_t local_c0;
  uint64_t local_b8;
  uint64_t local_b0;
  uint64_t local_a8;
  undefined7 uStack_a0;
  uint8_t local_99;
  undefined7 uStack_98;
  uint64_t local_91;
  uint32_t local_89;
  uint8_t local_80;
  int64_t local_78;
  int64_t lStack_70;
  uint64_t local_68;
  int64_t local_58;
  int64_t lStack_50;
  uint64_t local_48;
  void*local_38;
  uint32_t local_30;
  uint8_t local_2c;
  
  local_310 = &g_025198d0;
  local_308 = &g_0251c5a8;
  local_300 = 0;
  local_2f8 = 0;
  local_2f0 = 0;
  local_2e8 = 0;
  local_2ac = 0;
  local_2e4 = 0;
  local_2dc = 0;
  local_2d4 = 0;
  local_2cc = 0;
  local_2c4 = 0;
  local_2bc = 0;
  local_2b4 = 0;
  local_2a8 = 0xffffffffffffffff;
  local_284 = 0;
  local_2a0 = 0;
  local_298 = 0;
  local_290 = 0;
  local_288 = 0;
  local_280 = &g_0251c338;
  local_248 = 0;
  local_250 = 0;
  local_258 = 0;
  local_260 = 0;
  local_268 = 0;
  local_270 = 0;
  local_278 = 0;
  local_1d8 = 0;
  local_1e0 = 0;
  local_1e8 = 0;
  local_1f0 = 0;
  local_1f8 = 0;
  local_200 = 0;
  local_208 = 0;
  local_210 = 0;
  local_218 = 0;
  local_220 = 0;
  local_228 = 0;
  local_230 = 0;
  local_238 = 0;
  local_240 = 0;
  local_180 = 0;
  local_188 = 0;
  local_190 = 0;
  local_198 = 0;
  local_1a0 = 0;
  local_1a8 = 0;
  local_1b0 = 0;
  local_1b8 = 0;
  local_1c0 = 0;
  local_1c8 = 0;
  local_1d0 = 0;
  local_178 = 1;
  local_16c = 0;
  local_150 = 0;
  local_158 = 0;
  local_160 = 0;
  local_168 = 0;
  local_148 = &g_0251c3a0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = 0;
  local_140 = 0;
  local_108 = 0x100000001;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_d8 = 1;
  local_d6 = 0;
  local_d5 = 0x1010101;
  local_d1 = 0;
  local_cf = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  local_99 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_91 = 0x100010000010001;
  local_89 = 0;
  local_170 = 0;
  local_80 = 0;
  local_38 = &g_02519928;
  local_30 = 4;
  local_2c = 1;
  FUN_008f91be();
  if (*(int64_t *)(this_ptr + 0x70) == 0) {
    plVar2 = *(int64_t **)(this_ptr + 8);
    if (plVar2 == (int64_t *)0x0) {
      FUN_00925fd0();
      uVar1 = FUN_00926010();
      uVar3 = FUN_00928ab0("void pace::AuthorizationVerifier::cacheProductLocationData(const petpub::AuthChain &)"
                           ,&g_00002b2e);
      FUN_009bd14b(uVar3,uVar1);
      plVar2 = *(int64_t **)(this_ptr + 8);
    }
    (**(code **)(*plVar2 + 0x50))(4,&local_310);
  }
  else {
    local_78 = 0;
    lStack_70 = 0;
    local_68 = 0;
    local_48 = 0;
    local_58 = 0;
    lStack_50 = 0;
    FUN_00944238(0,1);
    plVar2 = &local_58;
    uVar3 = FUN_00928f8a(plVar2,&local_78);
    FUN_0095010b(uVar3,&local_38);
    if (local_58 != 0) {
      lStack_50 = local_58;
      operator_delete(plVar2);
    }
    if (local_78 != 0) {
      lStack_70 = local_78;
      operator_delete(plVar2);
    }
  }
  FUN_008b67e4();
  FUN_008b64fc();
  return;
}

