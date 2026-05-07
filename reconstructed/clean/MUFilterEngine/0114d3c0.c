// Function: FUN_0114d3c0
// Address: 0114d3c0
// Size: 1774 bytes
// Class: MUFilterEngine
// String references:
//   "MUFilterEngine"
// === MUFilterEngine properties ===
//                   _sampleFramesToNextUpdate
//                   _lastSampleFramesToNextUpdate
//                   _isFirstComponentInQueue
//                   _allowPeriodBasedPhaseReset
//                   _isSibilant
//                   _previousElementStartInPerformanceTime
//                   _sourceComponentFadeOutSamplePositionInSource
//                   _outputReadBufferOfChannel
//                   _outputReadBufferSize
//                   _processingBufferSize
//                   _processedChannelCount
//                   _sampleRateReductionForOutputReadBuffer
//                   _sampleRateReductionForFourierProcessing
//                   _sampleRateReductionsRatio
//   fcomplex **     _currentPhasesOfChannel
//                   _currentPhaseIncrementsOfChannel
//                   _currentSpectrumOfChannel
//                   _accumulatedPhasesOfChannel
//                   _previousPhasesOfChannel
//                   _currentAmpsOfChannel
//                   _previousAmpsOfChannel
//   char *          _binPhaseProcessingCount
//                   _fourierTransformer
//                   _magnitudeValues
//                   _spectrumMagnitudeFactors
//                   _calcAuxBuffer0
//                   _calcAuxBuffer1
//   fcomplex *      _prevPhaseIncrements
//                   _processingBuffersOfChannel
//                   _complexSpectrumOfChannel
//   ... +22 more


void FUN_0114d3c0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025f0d98;
  this_ptr[2] = 0;
  // [STATIC_INIT: property registration]
  if (g_0279eda3 == '\0') {
    FUN_0114dae0();
    FUN_00e87980();
  }
  this_ptr[3] = 0;
  // [STATIC_INIT: property registration]
  if (g_0279eda3 == '\0') {
    FUN_0114dc50();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 4) = 0;
  // [STATIC_INIT: property registration]
  if (g_0279eda3 == '\0') {
    FUN_0114ddc0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x24) = 0;
  // [STATIC_INIT: property registration]
  if (g_0279eda3 == '\0') {
    FUN_0114df30();
    FUN_00e87980();
  }
  this_ptr[5] = 0;
  // [STATIC_INIT: property registration]
  if (g_0279eda3 == '\0') {
    FUN_0114e0a0();
    FUN_00e87980();
  }
  this_ptr[6] = 0;
  // [STATIC_INIT: property registration]
  if (g_0279eda3 == '\0') {
    FUN_0114e210();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 7) = 0;
  // [STATIC_INIT: property registration]
  if (g_0279eda3 == '\0') {
    FUN_0114e380();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x3c) = 0;
  // [STATIC_INIT: property registration]
  if (g_0279eda3 == '\0') {
    FUN_0114e4f0();
    FUN_00e87980();
  }
  return;
}

