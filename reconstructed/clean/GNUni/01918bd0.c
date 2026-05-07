// Function: FUN_01918bd0
// Address: 01918bd0
// Size: 511 bytes
// Class: GNUni
// === GNUni properties ===
//   bool            _preferedFrameSizeLocked
//   GNCoord         _verticalScrollerWidth
//   GNCoord         _horizontalScrollerHeight
//   bool            _canGoUp
//   bool            _canRepeat
//   bool            _canGoDown
//   GNInt           _beatDivision
//   GNInt           _beatCount
//   GNInt           _timeSliceCount
//   GNFraction      _allStartBeat
//   float           _pitchOffset
//   bool            _isBlues
//   GNInt           _bluesRoot
//   bool            _considersBlues
//   bool            _reservesPitchRange
//   bool            _limitsHighestPitchIndex
//   bool            _limitsLowestPitchIndex
//   bool            _isQuarterAssignmentIrrelevant
//   bool            _isPitchAssignmentIrrelevant
//   bool            _calcsAlternateChords
//   bool            _isOutputSlot
//   bool            _isDefaultSlot
//   GNInt           _stereoItemCount
//   MDInspectorModeFlags _mode
//   double          _xDistanceResolutionForLinearApproximation
//   double          _yDistanceResolutionForLinearApproximation
//   bool            _didRequestCacheValidation
//   bool            _canChooseDirectory
//   bool            _canChooseFile
//   bool            _allowsMultipleSelection
//   ... +276 more


uint64_t FUN_01918bd0(uint64_t param_1,byte param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  uint64_t uVar2;
  int64_t *this_ptr;
  bool bVar3;
  int64_t local_80;
  char local_78;
  int64_t *local_60;
  char local_58;
  int64_t *local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  FUN_01a58dc0();
  (**(code **)(*local_40 + 0xe30))();
  if (local_30 == 0) {
    bVar3 = true;
  }
  else {
    FUN_01a58dc0();
    (**(code **)(*local_60 + 0xe30))();
    bVar3 = *(int *)(local_80 + 0xc) == 0;
    if (local_78 != '\0') {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar3) {
    uVar2 = 0;
  }
  else {
    FUN_01a58dc0();
    (**(code **)(*local_40 + 0xe30))();
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    uVar1 = (**(code **)(*this_ptr + 0x488))();
    uVar2 = (uint64_t)uVar1;
    if (local_30 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((byte)uVar1 & param_2) != 0) {
      FUN_01a58dc0();
      (**(code **)(*local_40 + 0xe30))();
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_28 = '\0';
      }
      FUN_01918af0(param_1,1,param_3,param_4,1);
      if (local_30 != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar2 = CONCAT71((int7)((uint64_t)local_30 >> 8),1);
    }
  }
  return uVar2 & 0xffffffff;
}

