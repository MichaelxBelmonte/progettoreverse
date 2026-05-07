// Function: FUN_00b1bad0
// Address: 00b1bad0
// Size: 712 bytes
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


void FUN_00b1bad0(void)

{
  uint64_t uVar1;
  uint32_t uVar2;
  int64_t *plVar3;
  char cVar4;
  int64_t lVar5;
  int64_t this_ptr;
  uint64_t extraout_XMM0_Qa;
  double dVar6;
  float fVar7;
  float fVar8;
  
  if (g_028a0de0 == 0) {
    FUN_00e830b0();
    g_028a0de4 = 1;
    g_028a0e00 = (double)FUN_00e7d6f0();
    if ((*(int64_t **)(this_ptr + 0x30) != (int64_t *)0x0) &&
       (cVar4 = (**(code **)(**(int64_t **)(this_ptr + 0x30) + 0x598))(), cVar4 != '\0')) {
      plVar3 = *(int64_t **)(this_ptr + 0x30);
      uVar2 = *(void*)(this_ptr + 0x10);
      uVar1 = *(void*)(this_ptr + 0x18);
      FUN_00d50b00();
      (**(code **)(*plVar3 + 0x540))(uVar1,uVar2);
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
    }
    if (*(int64_t **)(this_ptr + 0x38) == (int64_t *)0x0) {
      if (0 < *(int *)(this_ptr + 0xa4)) {
        lVar5 = 0;
        do {
          ___bzero();
          lVar5 = lVar5 + 1;
        } while (lVar5 < *(int *)(this_ptr + 0xa4));
      }
    }
    else {
      cVar4 = (**(code **)(**(int64_t **)(this_ptr + 0x38) + 0x4f8))();
      if (cVar4 != '\0') {
        plVar3 = *(int64_t **)(this_ptr + 0x38);
        uVar1 = *(void*)(this_ptr + 0x18);
        uVar2 = *(void*)(this_ptr + 0xc);
        FUN_00d50b00();
        (**(code **)(*plVar3 + 0x500))(uVar1,uVar2,&stack0xffffffffffffffa8);
        if (this_ptr != 0) {
          FUN_00d50b20();
        }
      }
      cVar4 = (**(code **)(**(int64_t **)(this_ptr + 0x38) + 0x4f0))();
      if (cVar4 == '\0') {
        (**(code **)(**(int64_t **)(this_ptr + 0x38) + 0x538))
                  (extraout_XMM0_Qa,*(void*)(this_ptr + 0xc));
      }
      else {
        (**(code **)(**(int64_t **)(this_ptr + 0x38) + 0x400))
                  (*(void*)(this_ptr + 0xc),*(void*)(this_ptr + 0x98));
      }
    }
    dVar6 = (double)FUN_00e7d6f0();
    fVar8 = (float)*(int *)(this_ptr + 0xc) / (float)*(double *)(this_ptr + 0x18);
    fVar7 = (float)((dVar6 - g_028a0e00) / (double)fVar8);
    if ((0.0 < g_028a0df8) && (g_028a0e08 + g_02422df0 < dVar6)) {
      g_028a0df8 = g_028a0df8 + fVar8 / g_023d5650;
    }
    if (g_028a0df8 < fVar7) {
      g_028a0e08 = g_028a0e00;
      g_028a0df8 = fVar7;
    }
    fVar7 = g_02390124;
    if ((g_02390124 < g_028a0df8) || (fVar7 = 0.0, g_028a0df8 < 0.0)) {
      g_028a0df8 = fVar7;
    }
    g_028a0dfc = FUN_00e830c0();
    if ((g_028a0dc8 == '\0') && (g_02394234 <= g_028a0df8)) {
      *(int *)(this_ptr + 0xb4) = *(int *)(this_ptr + 0xb4) + 1;
    }
    g_028a0de4 = 0;
  }
  else if (0 < *(int *)(this_ptr + 0xa4)) {
    lVar5 = 0;
    do {
      ___bzero();
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(this_ptr + 0xa4));
  }
  return;
}

