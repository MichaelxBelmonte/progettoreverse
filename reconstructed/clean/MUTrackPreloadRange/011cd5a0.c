// Function: FUN_011cd5a0
// Address: 011cd5a0
// Size: 574 bytes
// Class: MUTrackPreloadRange
// String references:
//   "MUTrackPreloadRange"
// === MUTrackPreloadRange properties ===
//                   _cacheWarmUpLastCursorTime
//                   _cacheLastCursorTimeRanges
//                   _cacheWarmUpLastLeftCycleQuarter
//                   _cachedLastLeftCycleRanges
//                   _cachedARARegionStartRanges
//                   _hostPlaybackRenderer
//                   _hostPlaybackTimeProgressor
//                   _expectedNextAraHostSampleIndex
//                   _ringBuffer


void FUN_011cd5a0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_026161f0;
  FUN_011cd840();
  FUN_011cdb70();
  this_ptr[4] = 0;
  this_ptr[5] = 0;
  // [STATIC_INIT: property registration]
  if (g_027b85ab == '\0') {
    FUN_011cdea0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 6) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b85ab == '\0') {
    FUN_011ce030();
    FUN_00e87980();
  }
  return;
}

