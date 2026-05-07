// Function: FUN_01147a40
// Address: 01147a40
// Size: 720 bytes
// Class: MUElementRealtimeInfo
// String references:
//   "MUElementRealtimeInfo"
// === MUElementRealtimeInfo properties ===
//                   _amplitudeFadeInEndSourceTime
//                   _amplitudeFadeOutStartSourceTime
//                   _amplitudeFadeInShapePow
//                   _amplitudeFadeOutShapePow
//                   _sibilantBalance
//                   _formantOffset
//                   _attackDuration
//                   _sourceTimeForElementTimeFunctionAttackSlope
//                   _attackSlopeFactor
//                   _warpTimeForElementTimeFunction
//                   _sourceTimeForWarpTimeFunction
//                   _amplitudeFunctionCache
//                   _fadeInTime
//                   _fadeOutTime
//                   _sourceTimeForElementTimeFunctionExceedsDuration
//                   _amplitudeFactorFunctionCache
//                   _formantRatioFunctionCache
//                   _displayPitchFunctionCache
//                   _playbackPitchRatioFunctionCache
//                   _vibratoCache
//                   _initialTimeStretchingOffset
//                   _didFixDetection
//                   _didFixTime
//                   _didFixPitch
//                   _didAddAndMute
//                   _didShiftTime
//                   _engines
//                   _isPolyphonicDetectionDisabled
//                   _usedDuration
//                   _usedSampleCount
//   ... +50 more


void FUN_01147a40(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025bd940;
  FUN_01147d60();
  this_ptr[3] = 0;
  // [STATIC_INIT: property registration]
  if (g_0279db2b == '\0') {
    FUN_01148050();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 4) = 0;
  // [STATIC_INIT: property registration]
  if (g_0279db2b == '\0') {
    FUN_011481c0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x21) = 0;
  // [STATIC_INIT: property registration]
  if (g_0279db2b == '\0') {
    FUN_01148330();
    FUN_00e87980();
  }
  FUN_011484a0();
  return;
}

