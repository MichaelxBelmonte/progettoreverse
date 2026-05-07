// Function: FUN_01ab3840
// Address: 01ab3840
// Size: 3075 bytes
// Class: MUSpectrumShaper
// String references:
//   "handleCopy"
//   "handleShowObjectBrowserForSelection"
//   "handleSelectAll"
//   "handleDelete"
//   "handlePaste"
//   "handleCut"
//   "handleToggleZoomToWholeSpectrum"
//   "setSpectrum"
//   "getSpectrum"
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


void FUN_01ab3840(void)

{
  int iVar1;
  void*puVar2;
  
  // [STATIC_INIT: property registration]
      g_028b31d8 = "handleShowObjectBrowserForSelection";
      g_028b31e0 = &g_027e6608;
      g_028b31e8 = 0;
      g_028b31f0 = &g_027e3080;
      g_028b31f8 = FUN_01ac9f70;
      g_028b3200 = 0x921;
      g_028b3208 = 0;
      ram_00000000028b3210 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b3220 = "handleSelectAll";
      g_028b3228 = &g_027e6608;
      g_028b3230 = 0;
      g_028b3238 = &g_027e3080;
      g_028b3240 = FUN_01ac9f70;
      g_028b3248 = 0x929;
      g_028b3250 = 0;
      ram_00000000028b3258 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b3268 = "handleToggleZoomToWholeSpectrum";
      g_028b3270 = &g_027e6608;
      g_028b3278 = 0;
      g_028b3280 = &g_027e3080;
      g_028b3288 = FUN_01ac9f70;
      g_028b3290 = 0x931;
      g_028b3298 = 0;
      ram_00000000028b32a0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b32b0 = "handleDelete";
      g_028b32b8 = &g_027e6608;
      g_028b32c0 = 0;
      g_028b32c8 = &g_027e3080;
      g_028b32d0 = FUN_01ac9f70;
      g_028b32d8 = 0x939;
      g_028b32e0 = 0;
      ram_00000000028b32e8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b32f8 = "handleCut";
      g_028b3300 = &g_027e6608;
      g_028b3308 = 0;
      g_028b3310 = &g_027e3080;
      g_028b3318 = FUN_01ac9f70;
      g_028b3320 = 0x941;
      g_028b3328 = 0;
      ram_00000000028b3330 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b3340 = "handleCopy";
      g_028b3348 = &g_027e6608;
      g_028b3350 = 0;
      g_028b3358 = &g_027e3080;
      g_028b3360 = FUN_01ac9f70;
      g_028b3368 = 0x949;
      g_028b3370 = 0;
      ram_00000000028b3378 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b3388 = "handlePaste";
      g_028b3390 = &g_027e6608;
      g_028b3398 = 0;
      g_028b33a0 = &g_027e3080;
      g_028b33a8 = FUN_01ac9f70;
      g_028b33b0 = 0x951;
      g_028b33b8 = 0;
      ram_00000000028b33c0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b33d0 = "setSpectrum";
      g_028b33d8 = &g_027e6608;
      g_028b33e0 = 0;
      g_028b33e8 = &g_027e3084;
      g_028b33f0 = FUN_01aca000;
      g_028b33f8 = FUN_01ac7020;
      g_028b3400 = 0;
      ram_00000000028b3408 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b3418 = "getSpectrum";
      g_028b3420 = &g_027e6608;
      g_028b3428 = 0;
      g_028b3430 = &g_027e3087;
      g_028b3438 = FUN_01aca080;
      g_028b3440 = FUN_01ac6fe0;
      g_028b3448 = 0;
      puVar2 = (void*)FUN_011b2c10();
      g_028b3450 = *puVar2;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}

