// Function: FUN_0191a7d0
// Address: 0191a7d0
// Size: 1037 bytes
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


void FUN_0191a7d0(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t local_e0;
  char local_d8;
  int64_t local_c0;
  char local_b8;
  int64_t local_58;
  char local_50;
  int local_44;
  int64_t *local_40;
  char local_38;
  
  FUN_0177f010();
  if ((local_b8 == '\0') && (local_c0 != 0)) {
    FUN_00d50b00();
  }
  FUN_0177eb20();
  if ((local_b8 == '\0') && (local_c0 != 0)) {
    FUN_00d50b00();
  }
  FUN_01d6f8d0();
  if (local_c0 != 0) {
    if (*(int *)(local_c0 + 0xc) < 1) {
      local_44 = -1;
    }
    else {
      local_44 = -1;
      iVar4 = 0;
      do {
        FUN_017800f0();
        plVar2 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01d6f990();
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01d70010();
        plVar2 = local_40;
        if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
            (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01d66da0();
        FUN_0177efe0();
        plVar1 = g_027092b8;
        if (local_d8 == '\0') {
          if (local_e0 != 0) {
            FUN_00d50b00();
            plVar1 = g_027092b8;
          }
        }
        else {
          local_d8 = '\0';
        }
        g_027092b8 = plVar1;
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_38 = '\0';
        local_40 = plVar1;
        FUN_00ca0840(param_1,&local_40);
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (local_e0 != 0) {
          FUN_00d50b20();
        }
        if ((local_d8 != '\0') && (local_e0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        FUN_0177efe0();
        plVar1 = local_40;
        FUN_0177efe0();
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        cVar3 = (**(code **)(*plVar1 + 0x50))();
        if (local_58 != 0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') {
          local_44 = FUN_01d6fde0();
          local_44 = local_44 + -1;
        }
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(local_c0 + 0xc));
    }
    FUN_01781450();
    if (local_44 != -1) {
      FUN_01d6ed40();
    }
    FUN_00d50b20();
  }
  if (local_c0 != 0) {
    FUN_00d50b20();
  }
  return;
}

