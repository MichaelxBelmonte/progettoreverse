// Function: FUN_00b18e60
// Address: 00b18e60
// Size: 744 bytes
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


void FUN_00b18e60(void)

{
  int64_t *this_ptr;
  uint64_t uVar1;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  FUN_00d6f370();
  uVar1 = (**(code **)(*this_ptr + 0x5e0))();
  local_48 = local_58;
  local_40 = 0;
  local_a8 = g_02703ad8;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      uVar1 = FUN_00d50b00();
      local_a8 = g_02703ad8;
    }
  }
  else {
    local_50 = '\0';
  }
  local_40 = '\x01';
  g_02703ad8 = local_a8;
  if (local_a8 != 0) {
    local_40 = '\x01';
    uVar1 = FUN_00d50b00();
  }
  local_a0 = '\x01';
  FUN_00d6f570(uVar1,&local_a8);
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d6f370();
  uVar1 = FUN_00b335d0();
  local_98 = g_0275e048;
  if (g_0275e048 != 0) {
    FUN_00d50b00();
  }
  local_90 = '\x01';
  FUN_00d70c50(uVar1);
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d6f370();
  uVar1 = (**(code **)(*this_ptr + 0x3a8))();
  local_88 = g_0275e050;
  if (g_0275e050 != 0) {
    uVar1 = FUN_00d50b00();
  }
  local_80 = '\x01';
  FUN_00d707b0(uVar1,&local_88);
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (g_028a0da4 != '\0') {
    FUN_00d6f370();
    uVar1 = (**(code **)(*this_ptr + 0x690))();
    local_78 = g_0275e058;
    if (g_0275e058 != 0) {
      uVar1 = FUN_00d50b00();
    }
    local_70 = '\x01';
    FUN_00d707b0(uVar1,&local_78);
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d6f370();
    uVar1 = (**(code **)(*this_ptr + 0x698))();
    local_68 = g_0275e060;
    if (g_0275e060 != 0) {
      uVar1 = FUN_00d50b00();
    }
    local_60 = '\x01';
    FUN_00d707b0(uVar1,&local_68);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}

