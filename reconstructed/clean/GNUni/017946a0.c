// Function: FUN_017946a0
// Address: 017946a0
// Size: 592 bytes
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


void FUN_017946a0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  bool bVar3;
  bool bVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int64_t this_ptr;
  bool bVar7;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  plVar5 = *(int64_t **)(this_ptr + 0x60);
  if (plVar5 != (int64_t *)0x0) goto LAB_017948d5;
  if (g_028adeb8 == (int64_t *)0x0) {
    plVar5 = (int64_t *)FUN_00e8fc40();
    FUN_00039550();
    (**(code **)(*plVar5 + 0x18))();
    if (g_028adeb8 == plVar5) {
      bVar4 = false;
      bVar3 = false;
    }
    else {
      bVar4 = true;
      bVar3 = true;
      bVar7 = g_028adeb8 != (int64_t *)0x0;
      g_028adeb8 = plVar5;
      if (bVar7) {
        FUN_00d50b20();
      }
    }
    if (g_028adec0 == '\0') {
      g_028adec0 = '\x01';
      FUN_00e8cb90();
      bVar3 = bVar4;
    }
    if (!bVar3) {
      FUN_00d50b20();
    }
  }
  plVar5 = g_028adeb8;
  local_38 = 0;
  lVar1 = *(int64_t *)(this_ptr + 0x10);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_38 = '\x01';
  local_40 = lVar1;
  (**(code **)(*plVar5 + 0x3a0))();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_027cf090;
  if (g_027cf090 != 0) {
    FUN_00d50b00();
  }
  local_70 = 0;
  local_68 = '\0';
  local_60 = 0;
  local_58 = '\0';
  FUN_01e4fcf0(&local_60,&local_70);
  lVar2 = *(int64_t *)(this_ptr + 0x60);
  lVar6 = lVar2;
  if (lVar2 != local_30) {
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar6 = 0;
        goto LAB_017947e1;
      }
      FUN_00d50b00();
      lVar2 = *(int64_t *)(this_ptr + 0x60);
      *(int64_t *)(this_ptr + 0x60) = local_30;
      lVar6 = local_30;
    }
    else {
      local_28 = '\0';
      lVar6 = local_30;
LAB_017947e1:
      *(int64_t *)(this_ptr + 0x60) = lVar6;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar6 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_01e56bb0();
  local_48 = 0;
  local_50 = *(int64_t *)(this_ptr + 0x10);
  if (local_50 != 0) {
    FUN_00d50b00();
  }
  local_48 = '\x01';
  FUN_01d2a770();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  plVar5 = *(int64_t **)(this_ptr + 0x60);
LAB_017948d5:
  (**(code **)(*plVar5 + 0x460))();
  return;
}

