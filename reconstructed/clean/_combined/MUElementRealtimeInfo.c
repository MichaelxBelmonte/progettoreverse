// ===================================================================
// MUElementRealtimeInfo — Complete reconstructed pseudocode
// 2 functions
// ===================================================================

// Registered properties (80):
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
//                   _engineDuration
//                   _engineTimeIncrement
//                   _maxPropertyPointNumber
//                   _reducePropertyPointsToHalf
//                   _spectrogramMagnitudeSums
//                   _analyzerCanSwitchToPolyphonicDetection
//                   _analyzerDidSwitchToPolyphonicDetection
//                   _expectedEngineCount
//                   _prevProgressTime
//                   _skipAudioSeparation
//                   _skipTempoDetection
//                   _givenTimeline
//                   _firesNotifications
//                   _allTempoPeriodColumns
//                   _allTempoRegions
//                   _usedBeats
//                   _rhythmPeakDataSize
//                   _rhythmPeakDataValuesPerSecond
//                   _tempoPointsPerSecond
//                   _tempoDetectionStartTime
//                   _testParameterValues1
//                   _testParameterValues2
//                   _testParameterValues3
//                   _testParameterValues4
//                   _testVerticalArrayValues
//                   _testValuesList1
//                   _testValuesList2
//                   _testValuesList3
//                   _testValuesList4
//                   _aTestFlag1
//                   _aTestFlag2
//                   _aTestFlag3
//                   _aTestFlag4
//                   _aTestValue1
//                   _aTestValue2
//                   _aTestValue3
//                   _aTestValue4
//                   _aTestMode
//                   _engineSampleOffset
//                   _engineIndex
//                   _originalSignal
//                   _originalSignalBufferWithMargin
//                   _nonSilentSampleCount
//                   _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum
//                   _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum
//                   _noteSeparations
//                   _percussiveSeparations
//                   _isPercussive
//                   _isPolyphonic
//                   _pitchJumpsSum


// ============================================================
// 01146e30
// ============================================================
// Function: FUN_01146e30
// Address: 01146e30
// Size: 727 bytes
// Class: MUElementRealtimeInfo
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


void FUN_01146e30(void)

{
  void*this_ptr;
  
  *this_ptr = &g_025e5748;
  this_ptr[2] = &g_025e5b00;
  this_ptr[3] = &g_025e5b38;
  if (this_ptr[0x57] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x56] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x55] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x54] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x53] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x52] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x51] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x50] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x4f] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x4e] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x4d] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x4c] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x42] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x41] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x40] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x3f] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x3e] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x3d] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x3c] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x3a] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x32] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x31] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x30] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x2f] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x2e] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x2d] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x2c] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x2b] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x26] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x25] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x24] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x23] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x1b] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x1a] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0xe] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0xd] != 0) {
    FUN_00d50b20();
  }
  *this_ptr = &g_02589ed0;
  this_ptr[2] = &g_0258a288;
  this_ptr[3] = &g_0258a2c0;
  if (this_ptr[9] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[8] != 0) {
    FUN_00d50b20();
  }
  FUN_00d4ffa0();
  return;
}



// ============================================================
// 01147a40
// ============================================================
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

