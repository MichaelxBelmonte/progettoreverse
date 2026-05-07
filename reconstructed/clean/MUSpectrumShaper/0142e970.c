// Function: FUN_0142e970
// Address: 0142e970
// Size: 618 bytes
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


void FUN_0142e970(double param_1,uint64_t param_2)

{
  void *pvVar1;
  void* pVar2;
  int64_t *in_RCX;
  int64_t *arg1;
  double dVar3;
  int64_t local_90;
  uint8_t local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  double local_60;
  int64_t local_40;
  char local_38;
  
  pVar2 = (void*)in_RCX;
  local_90 = *arg1;
  local_88 = 0;
  local_60 = param_1;
  FUN_0142e5e0(pVar2,&local_90);
  if (local_40 == 0) {
    FUN_0142ed20();
    local_80 = *arg1;
    local_78 = '\0';
    FUN_0123f630();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    FUN_00d21140();
    local_70 = *arg1;
    local_68 = '\0';
    FUN_012c3160(local_60,param_2);
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (*in_RCX != 0) {
      pvVar1 = _pthread_getspecific(pVar2);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_60 = (double)FUN_013201a0();
      pvVar1 = _pthread_getspecific(pVar2);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar3 = (double)FUN_01320130();
      FUN_012c5ff0(local_60 - dVar3);
      *(void*)(local_40 + 0x108) = 1;
    }
    FUN_00d50b20();
  }
  return;
}

