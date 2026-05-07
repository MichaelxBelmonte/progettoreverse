// Function: FUN_0038c010
// Address: 0038c010
// Size: 510 bytes
// Class: GNHeartbeatHandler
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


void FUN_0038c010(void)

{
  int64_t lVar1;
  uint32_t uVar2;
  uint64_t local_268;
  uint64_t local_250;
  
  lVar1 = FUN_0038a820();
  if (*(char *)(lVar1 + 0xbb) == '\0') {
    FUN_0017e420();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_0038c320();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    FUN_01c32440();
    if (local_250 != 0) {
      FUN_00d50b20();
    }
    if (local_268 != 0) {
      FUN_00d50b20();
    }
    FUN_000993f0();
    FUN_000993f0();
  }
  return;
}

