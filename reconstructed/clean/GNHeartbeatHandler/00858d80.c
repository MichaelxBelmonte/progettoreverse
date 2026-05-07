// Function: FUN_00858d80
// Address: 00858d80
// Size: 1164 bytes
// Class: GNHeartbeatHandler
// String references:
//   "GNHeartbeatHandler"
//   "MUScaleStretchTuningView"
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


void FUN_00858d80(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_000a32b0();
  this_ptr[0x27] = &g_024c8618;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_02648ae8;
  this_ptr[2] = &g_02649418;
  this_ptr[0x27] = &g_02649458;
  FUN_008592a0();
  FUN_00859590();
  *(void*)(this_ptr + 0x2a) = 0;
  // [STATIC_INIT: property registration]
  if (g_0273c193 == '\0') {
    FUN_00859880();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x154) = 0;
  // [STATIC_INIT: property registration]
  if (g_0273c193 == '\0') {
    FUN_008599f0();
    FUN_00e87980();
  }
  FUN_00859b60();
  *(void*)(this_ptr + 0x2d) = 0;
  // [STATIC_INIT: property registration]
  if (g_0273c193 == '\0') {
    FUN_00859de0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x16c) = 0;
  // [STATIC_INIT: property registration]
  if (g_0273c193 == '\0') {
    FUN_00859f50();
    FUN_00e87980();
  }
  return;
}

