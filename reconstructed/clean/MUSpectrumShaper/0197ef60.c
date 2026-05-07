// Function: FUN_0197ef60
// Address: 0197ef60
// Size: 703 bytes
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


void FUN_0197ef60(void* param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  void *pvVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  if (this_ptr[0x2e] != *arg1) {
    if (this_ptr[0x2e] != 0) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_40 = 0;
      (**(code **)(this_ptr[0x2d] + 0x10))();
      FUN_00d50b00();
      local_40 = '\x01';
      local_48 = this_ptr + 0x2d;
      FUN_00e8b9a0();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        (**(code **)(*local_48 + 0x10))();
        FUN_00d50b20();
      }
    }
    lVar1 = *arg1;
    lVar2 = this_ptr[0x2e];
    lVar3 = lVar2;
    if (lVar2 != lVar1) {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      this_ptr[0x2e] = lVar1;
      lVar3 = lVar1;
      if (lVar2 != 0) {
        FUN_00d50b20();
        lVar3 = this_ptr[0x2e];
      }
    }
    if (lVar3 != 0) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_30 = 0;
      (**(code **)(this_ptr[0x2d] + 0x10))();
      FUN_00d50b00();
      local_30 = '\x01';
      local_68 = 0;
      local_60 = '\0';
      local_38 = this_ptr + 0x2d;
      FUN_00e8b850(0x20,&local_68);
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        (**(code **)(*local_38 + 0x10))();
        FUN_00d50b20();
      }
    }
    FUN_0197f3b0();
    lVar1 = this_ptr[0x2e];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_0197f680();
    lVar2 = local_58;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_0197e990();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x620))();
    *(void*)((int64_t)this_ptr + 0x194) = 1;
  }
  return;
}

