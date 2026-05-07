// Function: FUN_0197e990
// Address: 0197e990
// Size: 793 bytes
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


void FUN_0197e990(void* param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  void *pvVar4;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x180) != *arg1) {
    if (*(int64_t *)(this_ptr + 0x180) != 0) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      (**(code **)(*(int64_t *)(this_ptr + 0x168) + 0x10))();
      FUN_00d50b00();
      FUN_001156b0();
      FUN_00e86210();
      lVar1 = g_027e0cc0;
      if (g_027e0cc0 != 0) {
        FUN_00d50b00();
      }
      FUN_00c841b0();
      lVar2 = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00e8b9a0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((int64_t *)(this_ptr + 0x168) != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)(this_ptr + 0x168) + 0x10))();
        FUN_00d50b20();
      }
    }
    lVar1 = *arg1;
    lVar2 = *(int64_t *)(this_ptr + 0x180);
    lVar3 = lVar2;
    if (lVar2 != lVar1) {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *(int64_t *)(this_ptr + 0x180) = lVar1;
      lVar3 = lVar1;
      if (lVar2 != 0) {
        FUN_00d50b20();
        lVar3 = *(int64_t *)(this_ptr + 0x180);
      }
    }
    if (lVar3 != 0) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      (**(code **)(*(int64_t *)(this_ptr + 0x168) + 0x10))();
      FUN_00d50b00();
      FUN_001156b0();
      FUN_00e86210();
      lVar1 = g_027e0cc0;
      if (g_027e0cc0 != 0) {
        FUN_00d50b00();
      }
      FUN_00c841b0();
      local_50 = local_40;
      local_48 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_48 = '\x01';
      FUN_00e8b850(0x20,&local_50);
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((int64_t *)(this_ptr + 0x168) != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)(this_ptr + 0x168) + 0x10))();
        FUN_00d50b20();
      }
    }
  }
  return;
}

