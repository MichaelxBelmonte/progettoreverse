// Function: FUN_01b61220
// Address: 01b61220
// Size: 696 bytes
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


uint64_t FUN_01b61220(void* param_1,uint64_t param_2)

{
  void *pvVar1;
  uint64_t uVar2;
  int64_t lVar3;
  bool bVar4;
  uint64_t local_68;
  char local_60;
  int64_t local_40;
  char local_38;
  
  uVar2 = local_68;
  FUN_01b5e510();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
      goto joined_r0x01b6126a;
    }
LAB_01b614de:
    uVar2 = 0;
  }
  else {
joined_r0x01b6126a:
    if ((local_68 == 0) || ((char)(param_2 & 0xffffffff) == '\0')) {
LAB_01b614cd:
      bVar4 = local_68 == 0;
      local_68 = param_2 & 0xffffffff;
      if (bVar4) goto LAB_01b614de;
    }
    else {
      FUN_01b5e390();
      if ((local_60 == '\0') || (local_68 == 0)) {
        if (local_68 == 0) {
          pvVar1 = _pthread_getspecific(param_1);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_015be4c0();
          goto LAB_01b614cd;
        }
      }
      else {
        FUN_00d50b20();
      }
      FUN_01b5e390();
      FUN_01bd2e70();
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_68 != 0) {
        local_60 = '\0';
        local_68 = 0;
        if (0 < *(int *)(uVar2 + 0xc)) {
          lVar3 = 0;
          do {
            local_68 = *(uint64_t *)(*(int64_t *)(uVar2 + 0x10) + lVar3 * 8);
            pvVar1 = _pthread_getspecific(param_1);
            if (pvVar1 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar1 = _pthread_getspecific(param_1);
            if (pvVar1 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_015b7ba0();
            FUN_017eca70();
            pvVar1 = _pthread_getspecific(param_1);
            if (pvVar1 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_015be4c0();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            lVar3 = lVar3 + 1;
          } while ((int)lVar3 < *(int *)(uVar2 + 0xc));
        }
        FUN_01be3b70();
        FUN_00d50b20();
      }
      FUN_01b5e1b0();
      FUN_01bd5d40();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    uVar2 = CONCAT71((int7)(local_68 >> 8),1);
    FUN_00d50b20();
  }
  return uVar2 & 0xffffffff;
}

