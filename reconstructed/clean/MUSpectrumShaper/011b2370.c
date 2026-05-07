// Function: FUN_011b2370
// Address: 011b2370
// Size: 547 bytes
// Class: MUSpectrumShaper
// String references:
//   "MUSpectrumShaperDisplayInfo"
//   "MUSpectrumShaperSpectrumType"
//   "_spectrumType"
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


void* FUN_011b2370(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_027b2590 = "_spectrumType";
      g_027b2598 = &g_027b24c0;
      g_027b25a0 = 0;
      g_027b25a8 = 0x6500;
      g_027b25b0 = "MUSpectrumShaperSpectrumType";
      g_027b25b8 = &g_027b2630;
      g_027b25c0 = 0;
      ram_00000000027b25c8 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_027b2590;
}

