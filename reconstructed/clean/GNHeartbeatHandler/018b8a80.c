// Function: FUN_018b8a80
// Address: 018b8a80
// Size: 551 bytes
// Class: GNHeartbeatHandler
// String references:
//   "GNHeartbeatHandler"
//   "MUDebugBitmap"
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


void FUN_018b8a80(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_000a32b0();
  this_ptr[0x27] = &g_024c8618;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_02608b78;
  this_ptr[2] = &g_026094a8;
  this_ptr[0x27] = &g_026094e8;
  FUN_018b8d40();
  FUN_018b9000();
  FUN_018b92c0();
  FUN_018b9580();
  this_ptr[0x2c] = 0;
  // [STATIC_INIT: property registration]
  if (g_027dc583 == '\0') {
    FUN_018b9840();
    FUN_00e87980();
  }
  return;
}

