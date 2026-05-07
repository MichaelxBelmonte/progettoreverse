// Function: FUN_011c2320
// Address: 011c2320
// Size: 728 bytes
// Class: MUTempoDetectionRange
// String references:
//   "MUTempoDetectionRange"
// === MUTempoDetectionRange properties ===
//                   _subdivision
//                   _tempoRegion
//                   _tempoCourse
//                   _rightAdjacentRegion
//                   _leftAdjacentRegion
//                   _firstValidBeat
//                   _lastValidBeat
//                   _beatSequence
//                   _rightContinuationIsConsistent
//                   _leftContinuationIsConsistent
//                   _bestSequencesRatio
//                   _quality
//                   _testDisplayString
//                   _targetTime
//                   _windowOverlapForTrueFreqs
//                   _timeSliceTimeDistance
//                   _monoPitchMatrixTimeSliceSampleCount
//                   _monoPitchMatrixTimeSliceTimeDistance
//                   _tonalityWeightTableSize
//                   _useTonalityWeightTable
//                   _expectedPhaseOffsets
//                   _binFrequencies
//                   _centIndexDistancePerBinAtCentIndex
//                   _tonalityWeightTable
//                   _regionTracks
//                   _sequenceTrack


void FUN_011c2320(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025c4f28;
  this_ptr[2] = 0;
  // [STATIC_INIT: property registration]
  if (g_027b63a3 == '\0') {
    FUN_011c2640();
    FUN_00e87980();
  }
  this_ptr[3] = 0;
  // [STATIC_INIT: property registration]
  if (g_027b63a3 == '\0') {
    FUN_011c27b0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 4) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b63a3 == '\0') {
    FUN_011c2920();
    FUN_00e87980();
  }
  FUN_011c2a90();
  FUN_011c2d80();
  return;
}

