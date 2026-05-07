// Function: FUN_01bdbfa0
// Address: 01bdbfa0
// Size: 1927 bytes
// Class: MUSpectrumShaper
// String references:
//   "GNHeartbeatHandler"
//   "GNPropertyObserver"
//   "MUSpectrumShaperSpectrumView"
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


void FUN_01bdbfa0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_000a32b0();
  this_ptr[0x27] = &g_025768d0;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  this_ptr[0x28] = &g_024c8618;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_02643490;
  this_ptr[2] = &g_02643e00;
  this_ptr[0x27] = &g_02643e40;
  this_ptr[0x28] = &g_02643e90;
  FUN_01bdc890();
  FUN_01bdcb80();
  FUN_01bdce70();
  FUN_01bdd160();
  FUN_01bdd450();
  FUN_01bdd6d0();
  FUN_01bdd950();
  FUN_01bddbd0();
  FUN_01bdde50();
  FUN_01bde0d0();
  *(void*)(this_ptr + 0x33) = 0;
  // [STATIC_INIT: property registration]
  if (g_027e66c3 == '\0') {
    FUN_01bde350();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x19c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027e66c3 == '\0') {
    FUN_01bde580();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x34) = 0;
  // [STATIC_INIT: property registration]
  if (g_027e66c3 == '\0') {
    FUN_01bde6f0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1a4) = 0;
  *(void*)((int64_t)this_ptr + 0x1ac) = 0;
  // [STATIC_INIT: property registration]
  if (g_027e66c3 == '\0') {
    FUN_01bde860();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1b4) = 0;
  // [STATIC_INIT: property registration]
  if (g_027e66c3 == '\0') {
    FUN_01bde9d0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1bc) = 0;
  // [STATIC_INIT: property registration]
  if (g_027e66c3 == '\0') {
    FUN_01bdeb40();
    FUN_00e87980();
  }
  return;
}

