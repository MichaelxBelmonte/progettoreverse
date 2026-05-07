// Function: FUN_000fabd0
// Address: 000fabd0
// Size: 1175 bytes
// Class: GNHeartbeatHandler
// String references:
//   "bool"
//   "GNHeartbeatHandler"
//   "_isBordered"
//   "_isDefaultButton"
//   "_imageOffset"
//   "GNPoint"
//   "_flashingTime"
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


void FUN_000fabd0(void)

{
  int iVar1;
  int64_t lVar2;
  void*this_ptr;
  
  FUN_000f62d0();
  this_ptr[0x39] = &g_024c8618;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_02677e10;
  this_ptr[2] = &g_026788e8;
  this_ptr[0x39] = &g_02678928;
  FUN_000fb150();
  FUN_000fb230();
  FUN_000fb310();
  FUN_000fb3f0();
  *(void*)(this_ptr + 0x3e) = 0;
  lVar2 = FUN_000f5df0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 500) = 0;
  lVar2 = FUN_000f5df0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000fb4d0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x3f) = 0;
  lVar2 = FUN_000f5df0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1fc) = 0;
  lVar2 = FUN_000f5df0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000fb650();
    FUN_00e87980();
  }
  FUN_000fb7e0();
  this_ptr[0x41] = 0;
  lVar2 = FUN_000f5df0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x42) = 0;
  lVar2 = FUN_000f5df0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000fb8c0();
    FUN_00e87980();
  }
  this_ptr[0x43] = 0;
  lVar2 = FUN_000f5df0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

