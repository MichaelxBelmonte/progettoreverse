// Function: FUN_00571120
// Address: 00571120
// Size: 997 bytes
// Class: GNHeartbeatHandler
// String references:
//   "GNHeartbeatHandler"
//   "MDWelcomePanelController"
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


void FUN_00571120(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_0005aa20();
  this_ptr[0xe] = &g_024c8618;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_0250b9a8;
  this_ptr[0xe] = &g_0250bfa8;
  FUN_00571580();
  FUN_005718b0();
  FUN_00571be0();
  this_ptr[0x12] = 0;
  // [STATIC_INIT: property registration]
  if (g_0270e8f3 == '\0') {
    FUN_00571f10();
    FUN_00e87980();
  }
  this_ptr[0x13] = 0;
  // [STATIC_INIT: property registration]
  if (g_0270e8f3 == '\0') {
    FUN_005720a0();
    FUN_00e87980();
  }
  this_ptr[0x14] = 0;
  // [STATIC_INIT: property registration]
  if (g_0270e8f3 == '\0') {
    FUN_00572230();
    FUN_00e87980();
  }
  return;
}

