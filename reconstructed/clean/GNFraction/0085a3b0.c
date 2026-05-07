// Function: FUN_0085a3b0
// Address: 0085a3b0
// Size: 569 bytes
// Class: GNFraction
// String references:
//   "GNFraction"
//   "_offset"
//   "_linesPerSecond"
//   "_secondsPerGrid"
//   "double"
// === GNFraction properties ===
//   GNFraction      _linesPerSecond
//   double          _secondsPerGrid
//   double          _offset
//   GNFraction      _startQuarter
//   double          _quarterDeviation
//   bool            _isAccent
//   GNFraction      _subdivison
//   double          _timeAnchor
//   GNInt           _pulseSegmentSize
//   GNInt           _timeSegmentSize
//   bool            _isDefaultDivisionTriplets
//   GNFraction      _defaultPulseMultiple
//   double          _defaultSubPulseDuration
//   GNInt           _beatsPerBar
//   GNFraction      _pulseAnchor
//   GNFraction      _pulsesPerQuarter
//   GNFraction      _beatsPerQuarter
//   GNFraction      _quarterAtPulseAnchor
//   GNInt           _beatAtPulseAnchor
//   GNInt           _barAtPulseAnchor
//   bool            _isRecording
//   float           _clickLevel
//   bool            _isClicking
//   bool            _isMutingAllTracks
//   bool            _isIgnoringSourceTimeForElementTimeFunction
//   double          _releaseDuration
//   double          _preplayDuration
//   GNFraction      _clickResolution
//   float           _clickFrequency
//   GNFraction      _duration
//   ... +8 more


void FUN_0085a3b0(void)

{
  int iVar1;
  int64_t lVar2;
  void*this_ptr;
  
  FUN_008233b0();
  *this_ptr = &g_02639cd8;
  *(void*)((int64_t)this_ptr + 0x24) = 0x100000000;
  lVar2 = FUN_000be800();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[6] = 0;
  lVar2 = FUN_000be800();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[7] = 0;
  lVar2 = FUN_000be800();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_0085a660();
  return;
}

