// Function: FUN_01bd4470
// Address: 01bd4470
// Size: 678 bytes
// Class: MUSpectrumShaper
// String references:
//   "MUSpectrumShaperSlider"
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


void FUN_01bd4470(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_260;
  int64_t local_248;
  int64_t local_240;
  
  if ((g_027e5dd8 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_027e5d28 = FUN_001b37d0();
    g_027e5d10 = "MUSpectrumShaperSlider";
    g_027e5d18 = 0x200;
    g_027e5d20 = FUN_01bdaad0;
    g_027e5d30 = 0;
    ram_00000000027e5d38 = 0;
    g_027e5d40 = 0;
    ram_00000000027e5d48 = 0;
    g_027e5d50 = 0;
    ram_00000000027e5d58 = 0;
    g_027e5d60 = 0;
    ram_00000000027e5d68 = 0;
    g_027e5d70 = 0;
    ram_00000000027e5d78 = 0;
    g_027e5d80 = 0;
    ram_00000000027e5d88 = 0;
    g_027e5d90 = 0;
    ram_00000000027e5d98 = 0;
    g_027e5da0 = 0;
    ram_00000000027e5da8 = 0;
    g_027e5db0 = 0;
    ram_00000000027e5db8 = 0;
    g_027e5dc0 = 0;
    _ram_00000000027e5dc8 = 0;
    g_027e5dd0 = 0;
    ___cxa_guard_release();
  }
  if (g_027e5dcb == '\0') {
    FUN_001e95f0();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_01be0b20();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_240 != 0) {
      FUN_00d50b20();
    }
    if (local_248 != 0) {
      FUN_00d50b20();
    }
    if (local_260 != 0) {
      FUN_00d50b20();
    }
    FUN_000993f0();
    FUN_000993f0();
  }
  return;
}

