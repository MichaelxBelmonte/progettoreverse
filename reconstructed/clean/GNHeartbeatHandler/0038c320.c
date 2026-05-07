// Function: FUN_0038c320
// Address: 0038c320
// Size: 747 bytes
// Class: GNHeartbeatHandler
// String references:
//   "bool"
//   "GNHeartbeatHandler"
//   "_isPlaybackButtonPressed"
//   "_lastShouldObserverOurselfTime"
//   "_didRequestPlayBack"
//   "double"
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


void FUN_0038c320(void)

{
  int iVar1;
  int64_t lVar2;
  void*this_ptr;
  
  FUN_001b2fa0();
  this_ptr[0x3b] = &g_024c8618;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_026696e8;
  this_ptr[2] = &g_0266a2b0;
  this_ptr[0x3b] = &g_0266a2f0;
  FUN_0038c6b0();
  *(void*)(this_ptr + 0x3d) = 0;
  lVar2 = FUN_0038a820();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x3e] = 0;
  lVar2 = FUN_0038a820();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x3f) = 0;
  lVar2 = FUN_0038a820();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

