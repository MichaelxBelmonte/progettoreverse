// Function: FUN_00b19680
// Address: 00b19680
// Size: 759 bytes
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


void FUN_00b19680(void)

{
  bool bVar1;
  int64_t lVar2;
  int64_t *this_ptr;
  int64_t local_c8;
  int64_t local_c0;
  int64_t local_b8;
  int64_t local_b0;
  int64_t local_a8;
  int64_t local_a0;
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
  int64_t local_28;
  char local_20;
  
  lVar2 = g_028a0de8;
  if ((g_028a0de8 == 0) || (g_028a0df1 == '\0')) {
    FUN_00e8cb50();
    if (g_028a0de8 == 0) {
      FUN_00d470c0(g_023d5628);
      FUN_00d470c0(g_02410f78);
      FUN_00d470c0(g_023d5630);
      FUN_00d470c0(g_023d5638);
      FUN_00d470c0(g_023b8470);
      FUN_00d470c0(g_023d5640);
      FUN_00d470c0(g_023d5648);
      local_c8 = local_88;
      local_c0 = local_78;
      local_b8 = local_68;
      local_b0 = local_58;
      local_a8 = local_48;
      local_a0 = local_38;
      FUN_00b1c4b0(&local_c0,&local_c8,&local_b8,&local_b0);
      FUN_00295b80();
      lVar2 = g_028a0de8;
      if (g_028a0de8 != local_28) {
        if (local_20 == '\0') {
          if (local_28 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_28;
          }
        }
        else {
          local_20 = '\0';
          lVar2 = local_28;
        }
        bVar1 = g_028a0de8 != 0;
        g_028a0de8 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_28;
        }
      }
      if ((lVar2 != 0) && (g_028a0df0 == '\0')) {
        g_028a0df0 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_28;
      }
      if ((local_20 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      FUN_00b1c2d0();
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      g_028a0df1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a0df1 = '\x01';
      FUN_00e8cb70();
    }
    lVar2 = g_028a0de8;
    *(void*)(this_ptr + 1) = 0;
    if (lVar2 == 0) {
      lVar2 = 0;
      goto LAB_00b19955;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_00b19955:
  *this_ptr = lVar2;
  *(void*)(this_ptr + 1) = 1;
  return;
}

