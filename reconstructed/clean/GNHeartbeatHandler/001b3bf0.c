// Function: FUN_001b3bf0
// Address: 001b3bf0
// Size: 1098 bytes
// Class: GNHeartbeatHandler
// String references:
//   "GNHeartbeatHandler"
//   "GNScroller"
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


void FUN_001b3bf0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_001b40a0();
  this_ptr[0x3c] = &g_024c8618;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_0268ca58;
  this_ptr[2] = &g_0268d598;
  this_ptr[0x3c] = &g_0268d5d8;
  FUN_001b44b0();
  *(void*)(this_ptr + 0x3e) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e90ab == '\0') {
    FUN_001b4790();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 500) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e90ab == '\0') {
    FUN_001b4900();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1f5) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e90ab == '\0') {
    FUN_001b4a70();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1f6) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e90ab == '\0') {
    FUN_001b4be0();
    FUN_00e87980();
  }
  return;
}

