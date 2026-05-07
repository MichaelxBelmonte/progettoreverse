// Function: FUN_01917050
// Address: 01917050
// Size: 681 bytes
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


void FUN_01917050(void)

{
  void*puVar1;
  bool bVar2;
  void*puVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *this_ptr;
  int64_t local_68;
  char local_60;
  int64_t local_28;
  char local_20;
  
  FUN_00d50100();
  if ((g_028b0a10 == 0) || (g_028b0a19 == '\0')) {
    FUN_00e8cb50();
    lVar5 = g_027e06b8;
    if (g_028b0a10 == 0) {
      if (g_027e06b8 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      FUN_01d20ca0(g_023b1900);
      lVar4 = g_028b0a10;
      if (g_028b0a10 != local_28) {
        if (local_20 == '\0') {
          if (local_28 == 0) {
            lVar4 = 0;
          }
          else {
            FUN_00d50b00();
            lVar4 = local_28;
          }
        }
        else {
          local_20 = '\0';
          lVar4 = local_28;
        }
        bVar2 = g_028b0a10 != 0;
        g_028b0a10 = lVar4;
        if (bVar2) {
          FUN_00d50b20();
          lVar4 = local_28;
        }
      }
      if ((lVar4 != 0) && (g_028b0a18 == '\0')) {
        g_028b0a18 = '\x01';
        FUN_00e8cb90();
        lVar4 = local_28;
      }
      if ((local_20 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      if (local_68 != 0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      g_028b0a19 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b0a19 = '\x01';
      FUN_00e8cb70();
    }
    if (g_028b0a10 == 0) {
      lVar5 = 0;
      goto LAB_0191720d;
    }
  }
  lVar5 = g_028b0a10;
  FUN_00d50b00();
LAB_0191720d:
  (**(code **)(*this_ptr + 0x390))();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00274ea0();
  *puVar3 = &g_02633dd0;
  puVar3[2] = &g_02634290;
  puVar3[7] = 0;
  (*g_02633de8)();
  puVar1 = (void*)this_ptr[7];
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    this_ptr[7] = (int64_t)puVar3;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_01917470();
  if ((local_20 == '\0') && (local_28 != 0)) {
    FUN_00d50b00();
  }
  FUN_01a5dfe0();
  if (local_28 != 0) {
    FUN_00d50b20();
  }
  return;
}

