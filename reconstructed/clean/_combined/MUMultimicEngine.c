// ===================================================================
// MUMultimicEngine — Complete reconstructed pseudocode
// 1 functions
// ===================================================================

// Registered properties (30):
//                   _tracksCount
//                   _origSampleRate
//                   _sampleRateReduction
//                   _origSampleCount
//                   _fourierSize
//                   _binCount
//                   _overlapCompensationFactor
//                   _timeSliceSampleCount
//                   _freqPerBin
//                   _trackTitles
//                   _crosstalkFactors
//                   _trackReductions
//                   _trackNormalizingFactors
//                   _trackContributionsToSum
//                   _origMagnitudesAtTimeSlicesOfTracks
//                   _processedMagnitudesAtTimeSlicesOfTracks
//                   _phasesAtTimeSlicesOfTracks
//                   _decomposedMagnitudesAtTimeSlicesOfTracks
//                   _magnitudeRanksAtTimeSlicesOfTracks
//                   _useFactorsAtTimeSlicesOfTracks
//   float*          _timeSignal
//                   _spectrum
//                   _hannWindowSqrt
//                   _swapBuffer
//                   _aMatrix0
//                   _aMatrix
//                   _bVector
//   GNInt*          _indxVector
//                   _testValue2
//                   _doTest


// ============================================================
// 01174240
// ============================================================
// Function: FUN_01174240
// Address: 01174240
// Size: 5659 bytes
// Class: MUMultimicEngine
// String references:
//   "MUMultimicEngine"
// === MUMultimicEngine properties ===
//                   _tracksCount
//                   _origSampleRate
//                   _sampleRateReduction
//                   _origSampleCount
//                   _fourierSize
//                   _binCount
//                   _overlapCompensationFactor
//                   _timeSliceSampleCount
//                   _freqPerBin
//                   _trackTitles
//                   _crosstalkFactors
//                   _trackReductions
//                   _trackNormalizingFactors
//                   _trackContributionsToSum
//                   _origMagnitudesAtTimeSlicesOfTracks
//                   _processedMagnitudesAtTimeSlicesOfTracks
//                   _phasesAtTimeSlicesOfTracks
//                   _decomposedMagnitudesAtTimeSlicesOfTracks
//                   _magnitudeRanksAtTimeSlicesOfTracks
//                   _useFactorsAtTimeSlicesOfTracks
//   float*          _timeSignal
//                   _spectrum
//                   _hannWindowSqrt
//                   _swapBuffer
//                   _aMatrix0
//                   _aMatrix
//                   _bVector
//   GNInt*          _indxVector
//                   _testValue2
//                   _doTest


void FUN_01174240(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_0260aad8;
  FUN_01175a80();
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_027a7083 == '\0') {
    FUN_01175d00();
    FUN_00e87980();
  }
  this_ptr[4] = 0;
  // [STATIC_INIT: property registration]
  if (g_027a7083 == '\0') {
    FUN_01175e70();
    FUN_00e87980();
  }
  this_ptr[5] = 0;
  // [STATIC_INIT: property registration]
  if (g_027a7083 == '\0') {
    FUN_01175fe0();
    FUN_00e87980();
  }
  this_ptr[6] = 0;
  // [STATIC_INIT: property registration]
  if (g_027a7083 == '\0') {
    FUN_01176150();
    FUN_00e87980();
  }
  this_ptr[7] = 0;
  // [STATIC_INIT: property registration]
  if (g_027a7083 == '\0') {
    FUN_011762c0();
    FUN_00e87980();
  }
  this_ptr[8] = 0;
  // [STATIC_INIT: property registration]
  if (g_027a7083 == '\0') {
    FUN_01176430();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 9) = 0;
  // [STATIC_INIT: property registration]
  if (g_027a7083 == '\0') {
    FUN_011765a0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x4c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027a7083 == '\0') {
    FUN_01176710();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 10) = 0;
  // [STATIC_INIT: property registration]
  if (g_027a7083 == '\0') {
    FUN_01176880();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x54) = 0;
  // [STATIC_INIT: property registration]
  if (g_027a7083 == '\0') {
    FUN_011769f0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xb) = 0;
  // [STATIC_INIT: property registration]
  if (g_027a7083 == '\0') {
    FUN_01176b60();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x5c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027a7083 == '\0') {
    FUN_01176cd0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_027a7083 == '\0') {
    FUN_01176e40();
    FUN_00e87980();
  }
  FUN_01176fb0();
  FUN_01177230();
  FUN_011774b0();
  FUN_01177730();
  FUN_011779b0();
  FUN_01177c30();
  FUN_01177eb0();
  FUN_01178130();
  FUN_011783b0();
  FUN_01178630();
  FUN_011788b0();
  FUN_01178b30();
  FUN_01178db0();
  this_ptr[0x1a] = 0;
  // [STATIC_INIT: property registration]
  if (g_027a7083 == '\0') {
    FUN_011790a0();
    FUN_00e87980();
  }
  this_ptr[0x1b] = 0;
  // [STATIC_INIT: property registration]
  if (g_027a7083 == '\0') {
    FUN_01179210();
    FUN_00e87980();
  }
  this_ptr[0x1c] = 0;
  // [STATIC_INIT: property registration]
  if (g_027a7083 == '\0') {
    FUN_01179380();
    FUN_00e87980();
  }
  this_ptr[0x1d] = 0;
  // [STATIC_INIT: property registration]
  if (g_027a7083 == '\0') {
    FUN_011794f0();
    FUN_00e87980();
  }
  this_ptr[0x1e] = 0;
  // [STATIC_INIT: property registration]
  if (g_027a7083 == '\0') {
    FUN_01179660();
    FUN_00e87980();
  }
  this_ptr[0x1f] = 0;
  // [STATIC_INIT: property registration]
  if (g_027a7083 == '\0') {
    FUN_011797d0();
    FUN_00e87980();
  }
  this_ptr[0x20] = 0;
  // [STATIC_INIT: property registration]
  if (g_027a7083 == '\0') {
    FUN_01179940();
    FUN_00e87980();
  }
  this_ptr[0x21] = 0;
  // [STATIC_INIT: property registration]
  if (g_027a7083 == '\0') {
    FUN_01179ab0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x22) = 0;
  // [STATIC_INIT: property registration]
  if (g_027a7083 == '\0') {
    FUN_01179c20();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x114) = 0;
  // [STATIC_INIT: property registration]
  if (g_027a7083 == '\0') {
    FUN_01179d90();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x23) = 0;
  // [STATIC_INIT: property registration]
  if (g_027a7083 == '\0') {
    FUN_01179f00();
    FUN_00e87980();
  }
  return;
}

