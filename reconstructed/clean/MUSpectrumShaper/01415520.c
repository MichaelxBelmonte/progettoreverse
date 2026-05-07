// Function: FUN_01415520
// Address: 01415520
// Size: 564 bytes
// Class: MUSpectrumShaper
// String references:
//   "MUSpectrumShaperDisplayInfoBuffer"
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


void FUN_01415520(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025dfa10;
  FUN_014157a0();
  FUN_01415ac0();
  *(void*)(this_ptr + 4) = 0;
  // [STATIC_INIT: property registration]
  if (g_027c0c5b == '\0') {
    FUN_01415d80();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x24) = 0;
  // [STATIC_INIT: property registration]
  if (g_027c0c5b == '\0') {
    FUN_01415f10();
    FUN_00e87980();
  }
  return;
}

