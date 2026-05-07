// Function: FUN_00bf5290
// Address: 00bf5290
// Size: 515 bytes
// Class: GNHeartbeatHandler
// String references:
//   "GNHeartbeatHandler"
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


void FUN_00bf5290(void)

{
  int iVar1;
  int64_t lVar2;
  void*puVar3;
  
  lVar2 = FUN_00c42440();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0017fbd0();
    FUN_00e87760();
    FUN_00d4ff40();
    if (1 < g_02802630) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*g_02572370)();
    }
    FUN_00d50c00();
    FUN_001bcb00();
    // [STATIC_INIT: property registration]
    FUN_00e87c40();
    FUN_00d50c00();
    FUN_00e87770();
    FUN_00e87920();
    FUN_001bb300();
    FUN_001bb300();
  }
  return;
}

