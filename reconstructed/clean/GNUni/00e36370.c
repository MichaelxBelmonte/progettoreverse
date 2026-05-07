// Function: FUN_00e36370
// Address: 00e36370
// Size: 766 bytes
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


void FUN_00e36370(void)

{
  int64_t lVar1;
  char cVar2;
  int64_t lVar3;
  int64_t this_ptr;
  int64_t local_58;
  char local_50;
  int local_40;
  
  FUN_00e313d0();
  (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x368))();
  lVar1 = *(int64_t *)(this_ptr + 0x48);
  if (lVar1 != 0) {
    local_50 = '\0';
    local_58 = 0;
    local_40 = -1;
    while( true ) {
      lVar3 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_40) break;
      local_58 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar3 * 8);
      FUN_00e34b50();
    }
    FUN_00097c40();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x40);
  if (lVar1 != 0) {
    local_50 = '\0';
    local_58 = 0;
    local_40 = -1;
    while( true ) {
      lVar3 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_40) break;
      local_58 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar3 * 8);
      FUN_00e34b50();
    }
    FUN_00097c40();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x378))();
  FUN_00e367a0();
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  do {
    FUN_00d216c0();
    (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x368))();
    lVar1 = *(int64_t *)(this_ptr + 0x20);
    if (lVar1 != 0) {
      local_40 = -1;
      while (local_40 = local_40 + 1, local_40 < *(int *)(lVar1 + 0xc)) {
        FUN_00d21140();
        FUN_00dee620();
      }
      FUN_00e37e10();
    }
    (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x378))();
    cVar2 = FUN_00da6900(g_02390108);
  } while (cVar2 == '\0');
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50550();
  return;
}

