// Function: FUN_01965590
// Address: 01965590
// Size: 1030 bytes
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


void FUN_01965590(void* param_1)

{
  int64_t lVar1;
  uint8_t auVar2 [16];
  char cVar3;
  void *pvVar4;
  int64_t arg1;
  int64_t this_ptr;
  float fVar5;
  float fVar6;
  float fVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint8_t auVar10 [16];
  int64_t *local_80;
  char local_78;
  uint32_t local_58;
  uint64_t uStack_50;
  int64_t *local_38;
  char local_30;
  
  *(void*)(this_ptr + 0x1a8) = 0;
  uVar9 = *(void*)(arg1 + 8);
  *(void*)(this_ptr + 0x1b0) = uVar9;
  fVar6 = (float)((uint64_t)uVar9 >> 0x20);
  fVar5 = fVar6 * g_02390d2c;
  *(float *)(this_ptr + 0x1ac) = 0.0 - (fVar6 + fVar6);
  *(float *)(this_ptr + 0x1b4) = fVar5;
  if (*(int64_t *)(this_ptr + 0x178) != 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar6 = (float)FUN_01265b60();
    if (g_02390124 < fVar6) {
      fVar6 = *(float *)(this_ptr + 0x1b4);
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01265b60();
      fVar5 = (float)FUN_00aea6b0();
      fVar6 = fVar6 * fVar5;
      fVar6 = fVar6 + fVar6;
      *(float *)(this_ptr + 0x1ac) =
           (fVar6 - *(float *)(this_ptr + 0x1b4)) * g_02390118 + *(float *)(this_ptr + 0x1ac);
      *(float *)(this_ptr + 0x1b4) = fVar6;
    }
  }
  FUN_01989f80();
  lVar1 = *(int64_t *)(this_ptr + 0x178);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  fVar6 = (float)(**(code **)((int64_t)&dylib_command_000011b8.cmd + *local_38))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (!NAN(fVar6)) {
    fVar5 = *(float *)(this_ptr + 0x1bc);
    fVar7 = (float)FUN_01964590();
    fVar5 = (fVar7 - fVar6) * fVar5;
    if ((fVar5 != 0.0) || (NAN(fVar5))) {
      uStack_50 = *(void*)(this_ptr + 0x1b0);
      local_58 = (uint32_t)*(void*)(this_ptr + 0x1a8);
      uVar9 = *(void*)(this_ptr + 0x1b0);
      uVar8 = FUN_00d052e0(*(void*)(this_ptr + 0x1a8),uVar9,local_58,uStack_50);
      *(void*)(this_ptr + 0x1a8) = uVar8;
      *(void*)(this_ptr + 0x1b0) = uVar9;
    }
  }
  FUN_01989f80();
  cVar3 = (**(code **)("/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText" +
                      *local_38 + 0x40))();
  if (cVar3 == '\0') {
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    cVar3 = FUN_01965aa0();
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      uVar9 = *(void*)(this_ptr + 0x1b0);
      uVar8 = FUN_00d052e0(*(void*)(this_ptr + 0x1a8),uVar9,local_58,uStack_50);
      *(void*)(this_ptr + 0x1a8) = uVar8;
      *(void*)(this_ptr + 0x1b0) = uVar9;
    }
  }
  if ((*(char *)(this_ptr + 0x1c5) != '\0') && (cVar3 = FUN_01966100(), cVar3 != '\0')) {
    uVar9 = *(void*)(this_ptr + 0x1b0);
    uVar8 = FUN_00d052e0(*(void*)(this_ptr + 0x1a8),uVar9,local_58,uStack_50);
    *(void*)(this_ptr + 0x1a8) = uVar8;
    *(void*)(this_ptr + 0x1b0) = uVar9;
  }
  fVar7 = *(float *)(this_ptr + 0x1bc) * g_023908e0 * g_023908d8;
  fVar5 = 0.0;
  fVar6 = *(float *)(arg1 + 8);
  uStack_50 = CONCAT44(fVar7,fVar6);
  FUN_01989f80();
  if (local_38 == (int64_t *)0x0) {
    cVar3 = '\0';
  }
  else {
    FUN_01989f80();
    cVar3 = (**(code **)((int64_t)&dylib_command_000013a0.dylib.name.offset + *local_80))();
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    fVar5 = g_0241b200 + 0.0;
    uStack_50 = CONCAT44(fVar7 + _UNK_0241b20c,fVar6 + _UNK_0241b208);
  }
  auVar10._8_8_ = 0;
  auVar10._0_8_ = *(uint64_t *)(this_ptr + 0x1b0);
  uVar9 = FUN_00d052e0(*(void*)(this_ptr + 0x1a8),*(uint64_t *)(this_ptr + 0x1b0),fVar5,
                       uStack_50);
  auVar2._8_4_ = auVar10._0_4_;
  auVar2._0_8_ = uVar9;
  auVar2._12_4_ = auVar10._4_4_;
  *(uint8_t (*) [16])(this_ptr + 0x1a8) = auVar2;
  uVar9 = FUN_00d05530();
  *(void*)(this_ptr + 0x1a8) = uVar9;
  *(int64_t *)(this_ptr + 0x1b0) = auVar10._0_8_;
  return;
}

