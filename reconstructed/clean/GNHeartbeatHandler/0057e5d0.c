// Function: FUN_0057e5d0
// Address: 0057e5d0
// Size: 777 bytes
// Class: GNHeartbeatHandler
// String references:
//   "GNHeartbeatHandler"
//   "MDProgressViewController"
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


void FUN_0057e5d0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_0005aa20();
  this_ptr[0xe] = &g_024c8618;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_024d2f10;
  this_ptr[0xe] = &g_024d3518;
  *(void*)(this_ptr + 0xf) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e410b == '\0') {
    FUN_0057e970();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x79) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e410b == '\0') {
    FUN_0057eb00();
    FUN_00e87980();
  }
  FUN_0057ec90();
  FUN_0057efc0();
  FUN_0057f2f0();
  FUN_0057f620();
  FUN_0057f950();
  return;
}

