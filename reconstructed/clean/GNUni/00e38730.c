// Function: FUN_00e38730
// Address: 00e38730
// Size: 695 bytes
// Class: GNUni
// String references:
//   "\t"
//   "nil;\n"
//   "{\n"
//   ";\n"
//   " = "
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


void* FUN_00e38730(void)

{
  bool bVar1;
  int iVar2;
  void*puVar3;
  int64_t *plVar4;
  int iVar5;
  int iVar6;
  int64_t *plVar7;
  void*this_ptr;
  int64_t local_40;
  char local_38;
  
  iVar2 = FUN_00c8d630();
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_025795a8;
  (*g_025795c0)();
  if (0 < g_028a8bc8) {
    iVar5 = 0;
    do {
      FUN_00d8db40();
      iVar5 = iVar5 + 1;
    } while (iVar5 < g_028a8bc8);
  }
  FUN_00d8db40();
  g_028a8bc8 = g_028a8bc8 + 1;
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      plVar4 = (int64_t *)FUN_00c8df10();
      if ((plVar4 != (int64_t *)0x0) && (plVar7 = (int64_t *)*plVar4, plVar7 != (int64_t *)0x0))
      {
        if (g_028a8bc8 < 1) {
LAB_00e38856:
          (**(code **)(*plVar7 + 400))();
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_00d8dbf0();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d8db40();
        }
        else {
          iVar6 = 0;
          do {
            FUN_00d8db40();
            iVar6 = iVar6 + 1;
          } while (iVar6 < g_028a8bc8);
          plVar7 = (int64_t *)*plVar4;
          if (plVar7 != (int64_t *)0x0) goto LAB_00e38856;
        }
        if ((int64_t *)plVar4[1] == (int64_t *)0x0) {
          FUN_00d8db40();
        }
        else {
          (**(code **)(*(int64_t *)plVar4[1] + 400))();
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_00d8dbf0();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d8db40();
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != iVar2);
  }
  iVar2 = g_028a8bc8 + -1;
  bVar1 = 1 < g_028a8bc8;
  g_028a8bc8 = iVar2;
  if (bVar1) {
    iVar2 = 0;
    do {
      FUN_00d8db40();
      iVar2 = iVar2 + 1;
    } while (iVar2 < g_028a8bc8);
  }
  FUN_00d8db40();
  FUN_00d8c7d0();
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

