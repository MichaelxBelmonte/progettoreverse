// Function: FUN_0030cb40
// Address: 0030cb40
// Size: 1461 bytes
// Class: GNHeartbeatHandler
// String references:
//   "GNHeartbeatHandler"
//   "MUMultiTrackTrackElementView"
//   "MUEnvelopePathDataSource"
// === GNHeartbeatHandler properties ===
//   bool            _isPlaybackButtonPressed
//   double          _lastShouldObserverOurselfTime
//   bool            _didRequestPlayBack
//   bool            _isBordered
//   bool            _isDefaultButton
//   GNPoint         _imageOffset
//   double          _flashingTime
//   bool            _showsStereo
//   bool            _timerRegistered
//   GNCoord         _left
//   GNCoord         _right
//   GNCoord         _length
//   double          _leftTime
//   double          _rightTime
//   double          _delay
//   bool            _showRatios
//   bool            _showAllRatios
//   bool            _showRatioModeButton
//   float           _minFloatValue
//   float           _maxFloatValue
//   float           _slideRuleAnchorOffset
//   float           _lastAnchorOffsetChangeRatio
//   float           _slideRuleAnchorOffsetMinRatio
//   float           _slideRuleAnchorOffsetMaxRatio
//   float           _movingResolutionRatio
//   float           _movingFineResolutionRatio
//                   _currentLabel1
//                   _currentLabel2
//                   _maxLabel1
//                   _maxLabel2
//   ... +1 more


void FUN_0030cb40(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_000a32b0();
  this_ptr[0x27] = &g_024e21a8;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  this_ptr[0x28] = &g_024c8618;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_026586b8;
  this_ptr[2] = &g_02658ff8;
  this_ptr[0x27] = &g_02659038;
  this_ptr[0x28] = &g_02659070;
  FUN_0030d1d0();
  FUN_0030d500();
  *(void*)(this_ptr + 0x2b) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270111b == '\0') {
    FUN_0030d830();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x15c) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270111b == '\0') {
    FUN_0030d9c0();
    FUN_00e87980();
  }
  FUN_0030db50();
  this_ptr[0x2d] = 0;
  // [STATIC_INIT: property registration]
  if (g_0270111b == '\0') {
    FUN_0030de80();
    FUN_00e87980();
  }
  FUN_0030e010();
  FUN_0030e2d0();
  this_ptr[0x30] = 0;
  // [STATIC_INIT: property registration]
  if (g_0270111b == '\0') {
    FUN_0030e590();
    FUN_00e87980();
  }
  return;
}

