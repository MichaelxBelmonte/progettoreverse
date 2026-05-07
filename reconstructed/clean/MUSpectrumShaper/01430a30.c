// Function: FUN_01430a30
// Address: 01430a30
// Size: 1034 bytes
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


void FUN_01430a30(void)

{
  int64_t lVar1;
  code *pcVar2;
  int iVar3;
  void*puVar4;
  void*puVar5;
  void*puVar6;
  int64_t this_ptr;
  int iVar7;
  int64_t local_68;
  char local_60;
  
  iVar3 = FUN_014308d0();
  iVar7 = iVar3 - *(int *)(this_ptr + 0x100);
  if (iVar7 != 0 && *(int *)(this_ptr + 0x100) <= iVar3) {
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &g_02572358;
    pcVar2 = g_02572370;
    (*g_02572370)();
    iVar3 = iVar7;
    if (0 < iVar7) {
      do {
        FUN_01430160();
        if (local_60 == '\0') {
          if (local_68 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        FUN_00d21140();
        if (local_68 != 0) {
          FUN_00d50b20();
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    lVar1 = **(int64_t **)(*(int64_t *)(this_ptr + 0x108) + 0x10);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    puVar5 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &g_02572358;
    (*pcVar2)();
    iVar3 = iVar7;
    if (0 < iVar7) {
      do {
        FUN_0142ff00();
        if (local_60 == '\0') {
          if (local_68 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        FUN_00d21140();
        if (local_68 != 0) {
          FUN_00d50b20();
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    lVar1 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x108) + 0x10) + 8);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    puVar6 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &g_02572358;
    (*pcVar2)();
    if (0 < iVar7) {
      do {
        FUN_014300a0();
        if (local_60 == '\0') {
          if (local_68 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        FUN_00d21140();
        if (local_68 != 0) {
          FUN_00d50b20();
        }
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    lVar1 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x108) + 0x10) + 0x10);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (puVar6 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (puVar5 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (puVar4 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}

