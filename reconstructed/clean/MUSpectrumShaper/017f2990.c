// Function: FUN_017f2990
// Address: 017f2990
// Size: 1010 bytes
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


void FUN_017f2990(void* param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  void *pvVar12;
  bool bVar13;
  int64_t this_ptr;
  
  if (*(char *)(this_ptr + 0x79) == '\0') {
    bVar13 = false;
  }
  else {
    bVar13 = false;
    bVar3 = 0;
    bVar4 = 0;
    if (*(char *)(this_ptr + 0x7d) != '\0') goto LAB_017f2ce2;
    pvVar12 = _pthread_getspecific(param_1);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    bVar2 = FUN_015b7bc0();
    pvVar12 = _pthread_getspecific(param_1);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    bVar3 = FUN_015b7bc0();
    pvVar12 = _pthread_getspecific(param_1);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    bVar4 = FUN_015b7bc0();
    pvVar12 = _pthread_getspecific(param_1);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    bVar5 = FUN_015b7bd0();
    pvVar12 = _pthread_getspecific(param_1);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    bVar6 = FUN_015b7bd0();
    pvVar12 = _pthread_getspecific(param_1);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    bVar7 = FUN_015b7bd0();
    pvVar12 = _pthread_getspecific(param_1);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    bVar8 = FUN_015b7bd0();
    cVar1 = *(char *)(this_ptr + 0x7a);
    pvVar12 = _pthread_getspecific(param_1);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    bVar9 = FUN_0188f200();
    pvVar12 = _pthread_getspecific(param_1);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    bVar10 = FUN_0188f200();
    pvVar12 = _pthread_getspecific(param_1);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    bVar11 = FUN_0188f200();
    bVar13 = true;
    if (((bVar11 | bVar10 | bVar9 | cVar1 != '\0' | bVar8 | bVar7 | bVar6 | bVar5 | bVar3 | bVar4 |
         bVar2) & 1) != 0) goto LAB_017f2ce2;
    if ((*(float *)(this_ptr + 0xc0) == 0.0) && (!NAN(*(float *)(this_ptr + 0xc0)))) {
      bVar13 = *(float *)(this_ptr + 200) != g_02390124 ||
               (*(float *)(this_ptr + 0xbc) != 0.0 || *(float *)(this_ptr + 0xb8) != 0.0);
    }
  }
  bVar3 = 0;
  bVar4 = 0;
LAB_017f2ce2:
  if ((bool)*(char *)(this_ptr + 0x78) == bVar13) {
    bVar2 = *(byte *)(this_ptr + 0x7b);
  }
  else {
    FUN_00d64850();
    *(bool *)(this_ptr + 0x78) = bVar13;
    FUN_00d64910();
    bVar2 = *(byte *)(this_ptr + 0x7b);
  }
  if (bVar2 == bVar3) {
    bVar3 = *(byte *)(this_ptr + 0x7c);
  }
  else {
    FUN_00d64850();
    *(byte *)(this_ptr + 0x7b) = bVar3;
    FUN_00d64910();
    bVar3 = *(byte *)(this_ptr + 0x7c);
  }
  if (bVar3 != bVar4) {
    FUN_00d64850();
    *(byte *)(this_ptr + 0x7c) = bVar4;
    FUN_00d64910();
    return;
  }
  return;
}

