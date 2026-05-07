// Function: FUN_019801c0
// Address: 019801c0
// Size: 875 bytes
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


void FUN_019801c0(void* param_1)

{
  int64_t lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  int64_t *arg1;
  void*this_ptr;
  int64_t *plVar6;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  
  bVar2 = false;
  if ((char)arg1[0x31] == '\0') {
LAB_019804e2:
    *this_ptr = 0;
    goto LAB_01980516;
  }
  if (arg1[0x2f] == 0) {
LAB_019804f1:
    plVar6 = (int64_t *)0x0;
  }
  else {
    FUN_01989f80();
    lVar1 = arg1[0x2f];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*local_48 + 0xaf8))();
    if (local_58 == (int64_t *)0x0) {
      plVar6 = (int64_t *)0x0;
    }
    else {
      plVar6 = local_58;
      if (local_50 == '\0') {
        bVar2 = false;
      }
      else {
        bVar2 = true;
        local_50 = '\0';
      }
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 == (int64_t *)0x0) goto LAB_019804f1;
    (**(code **)(*arg1 + 0x928))();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e930();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152ebe0();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_01507f00();
    (**(code **)(*plVar6 + 0x928))();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e930();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152ebe0();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar4 = FUN_01507f00();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if (iVar3 != iVar4) {
      if (bVar2) {
        FUN_00d50b20();
      }
      goto LAB_019804e2;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  if ((!bVar2) && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  *this_ptr = plVar6;
LAB_01980516:
  *(void*)(this_ptr + 1) = 1;
  return;
}

