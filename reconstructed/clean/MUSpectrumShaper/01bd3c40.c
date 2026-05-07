// Function: FUN_01bd3c40
// Address: 01bd3c40
// Size: 569 bytes
// Class: MUSpectrumShaper
// String references:
//   "MUSpectrumShaperEnvelopeView"
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


void FUN_01bd3c40(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_218;
  int64_t local_1d0;
  
  if ((g_027e6cb8 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_027e6c08 = FUN_0006d940();
    g_027e6bf0 = "MUSpectrumShaperEnvelopeView";
    g_027e6bf8 = 0x198;
    g_027e6c00 = FUN_01bdee00;
    g_027e6c10 = 0;
    ram_00000000027e6c18 = 0;
    g_027e6c20 = 0;
    ram_00000000027e6c28 = 0;
    g_027e6c30 = 0;
    ram_00000000027e6c38 = 0;
    g_027e6c40 = 0;
    ram_00000000027e6c48 = 0;
    g_027e6c50 = 0;
    ram_00000000027e6c58 = 0;
    g_027e6c60 = 0;
    ram_00000000027e6c68 = 0;
    g_027e6c70 = 0;
    ram_00000000027e6c78 = 0;
    g_027e6c80 = 0;
    ram_00000000027e6c88 = 0;
    g_027e6c90 = 0;
    ram_00000000027e6c98 = 0;
    g_027e6ca0 = 0;
    _ram_00000000027e6ca8 = 0;
    g_027e6cb0 = 0;
    ___cxa_guard_release();
  }
  if (g_027e6cab == '\0') {
    FUN_000a31d0();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_01bdee90();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_01b836f0();
    FUN_00e87920(uVar2,0);
    if (local_1d0 != 0) {
      FUN_00d50b20();
    }
    if (local_218 != 0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
    FUN_0006d770();
  }
  return;
}

