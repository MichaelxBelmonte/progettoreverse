// Function: FUN_01be78a0
// Address: 01be78a0
// Size: 884 bytes
// Class: MUSpectrumShaper
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


void FUN_01be78a0(void)

{
  int64_t lVar1;
  void*puVar2;
  int64_t lVar3;
  int64_t *arg1;
  int64_t *this_ptr;
  uint8_t auVar4 [16];
  int64_t local_38;
  char local_30;
  
  if (arg1[0x35] != 0) goto LAB_01be7bdb;
  (**(code **)(*arg1 + 0x968))();
  lVar1 = arg1[0x35];
  lVar3 = lVar1;
  if (lVar1 != local_38) {
    lVar3 = local_38;
    if (local_30 == '\0') {
      if (local_38 == 0) {
        lVar3 = 0;
        goto LAB_01be78ef;
      }
      FUN_00d50b00();
      lVar1 = arg1[0x35];
      arg1[0x35] = local_38;
    }
    else {
      local_30 = '\0';
LAB_01be78ef:
      arg1[0x35] = lVar3;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar3 = local_38;
    }
  }
  if ((local_30 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  FUN_01dcea50();
  FUN_01ed4f00(0);
  FUN_01dca0e0();
  FUN_01dd3cf0();
  FUN_01de0990();
  FUN_01de09a0();
  auVar4 = blendps(ZEXT416(*(uint *)((int64_t)arg1 + 0x204)),g_0241e1f0,0xe);
  (**(code **)(*(int64_t *)arg1[0x35] + 0x4d0))(0,auVar4._0_8_);
  FUN_01dce4c0(g_0241e220);
  FUN_01dd07d0();
  FUN_01dcc8a0();
  FUN_01de5a60();
  (**(code **)(*(int64_t *)arg1[0x35] + 0x548))();
  FUN_01dce590();
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_02692468;
  puVar2[2] = &g_026927f8;
  puVar2[0xc] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *(void*)((int64_t)puVar2 + 0x24) = 0;
  *(void*)((int64_t)puVar2 + 0x2c) = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  *(void*)(puVar2 + 0xb) = 0;
  (*g_02692480)();
  FUN_01db9690(*(void*)((int64_t)arg1 + 0x204));
  FUN_01db99b0();
  puVar2 = (void*)FUN_00e8fc40();
  FUN_0006daf0();
  *(void*)(puVar2 + 0x27) = 0;
  puVar2[0x2e] = 0;
  *(void*)(puVar2 + 0x2f) = 0;
  puVar2[0x30] = 0;
  *(void*)(puVar2 + 0x31) = 0;
  puVar2[0x28] = 0;
  puVar2[0x29] = 0;
  *(void*)(puVar2 + 0x2a) = 0;
  puVar2[0x2b] = 0;
  puVar2[0x2c] = 0;
  *(void*)((int64_t)puVar2 + 0x165) = 0;
  *(void*)((int64_t)puVar2 + 0x18c) = 0;
  *(void*)((int64_t)puVar2 + 0x194) = 0;
  *(void*)((int64_t)puVar2 + 0x199) = 0;
  puVar2[0x35] = 0;
  puVar2[0x36] = 0;
  puVar2[0x37] = 0;
  puVar2[0x38] = 0;
  *puVar2 = &g_026611e8;
  puVar2[2] = &g_02661cb0;
  puVar2[0x39] = 0;
  *(void*)(puVar2 + 0x3a) = 0;
  (*g_02661200)();
  FUN_01db9640();
  if (puVar2 != (void*)0x0) {
    FUN_00d50b20();
  }
  FUN_01dcbe90();
  FUN_00d50b20();
LAB_01be7bdb:
  *(void*)(this_ptr + 1) = 0;
  lVar1 = arg1[0x35];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar1;
  *(void*)(this_ptr + 1) = 1;
  return;
}

