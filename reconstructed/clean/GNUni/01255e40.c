// Function: FUN_01255e40
// Address: 01255e40
// Size: 2404 bytes
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


void FUN_01255e40(void)

{
  int64_t *plVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar10;
  int64_t *plVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  void*local_10b0;
  int local_1068;
  int local_1040;
  int local_103c;
  uint8_t local_1038 [2048];
  int64_t local_838;
  char local_830;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  iVar4 = *(int *)(this_ptr + 0xb8) - *(int *)(this_ptr + 0xb0);
  dVar12 = (double)FUN_00e7d6f0();
  if (*(char *)(this_ptr + 0xa8) != '\0') {
    bVar2 = false;
    lVar10 = 0;
LAB_01255eb3:
    FUN_00524510();
    lVar6 = local_838;
    if (local_838 == lVar10) {
      lVar6 = lVar10;
      bVar3 = bVar2;
      if ((bVar2) || (local_838 == 0)) goto joined_r0x01255f79;
      if (local_830 == '\0') {
        FUN_00d50b00();
        goto LAB_01255f90;
      }
      bVar2 = true;
    }
    else if (local_830 == '\0') {
      if (local_838 != 0) {
        FUN_00d50b00();
      }
      bVar3 = true;
      if ((bVar2) && (lVar10 != 0)) {
        FUN_00d50b20();
        lVar10 = lVar6;
LAB_01255f90:
        lVar6 = lVar10;
        bVar3 = true;
      }
joined_r0x01255f79:
      lVar10 = lVar6;
      bVar2 = bVar3;
      if ((local_830 != '\0') && (local_838 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if ((bVar2) && (lVar10 != 0)) {
        FUN_00d50b20();
      }
      lVar10 = lVar6;
      bVar2 = true;
    }
    if (lVar10 != 0) {
      FUN_00b33760();
      lVar6 = local_838;
      if (local_830 == '\0') {
        if (local_838 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_830 = '\0';
      }
      FUN_00b33710();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_830 != '\0') && (local_838 != 0)) {
        FUN_00d50b20();
      }
      local_830 = '\0';
      local_838 = lVar10;
      FUN_00d21140();
      if ((local_830 != '\0') && (local_838 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01255eb3;
    }
    lVar10 = 0;
LAB_012560d0:
    FUN_00524510();
    lVar6 = local_838;
    if (local_838 == lVar10) {
      lVar6 = lVar10;
      bVar3 = bVar2;
      if ((bVar2) || (local_838 == 0)) goto joined_r0x01256199;
      if (local_830 == '\0') {
        FUN_00d50b00();
        goto LAB_012561b0;
      }
      bVar2 = true;
    }
    else if (local_830 == '\0') {
      if (local_838 != 0) {
        FUN_00d50b00();
      }
      bVar3 = true;
      if ((bVar2) && (lVar10 != 0)) {
        FUN_00d50b20();
        lVar10 = lVar6;
LAB_012561b0:
        lVar6 = lVar10;
        bVar3 = true;
      }
joined_r0x01256199:
      lVar10 = lVar6;
      bVar2 = bVar3;
      if ((local_830 != '\0') && (local_838 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if ((bVar2) && (lVar10 != 0)) {
        FUN_00d50b20();
      }
      lVar10 = lVar6;
      bVar2 = true;
    }
    if (lVar10 != 0) {
      local_830 = '\0';
      local_838 = lVar10;
      FUN_00d23f50();
      if ((local_830 != '\0') && (local_838 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_012560d0;
    }
  }
  *(void*)(this_ptr + 0xa8) = 0;
  if (arg1 == (int64_t *)0x0) {
    plVar11 = &local_838;
    local_10b0 = local_1038;
    FUN_011eded0(local_10b0,&local_1040,&local_103c,iVar4);
    uVar5 = FUN_00b33120();
    if (0 < (int)uVar5) {
      uVar9 = (uint64_t)uVar5 - 1;
      if (2 < uVar9) {
        uVar7 = 0;
        do {
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          uVar7 = uVar7 + 4;
        } while ((uVar5 & 0xfffffffc) != uVar7);
      }
      if ((uint64_t)(uVar5 & 3) != 0) {
        uVar7 = 0;
        do {
          ___bzero();
          uVar7 = uVar7 + 1;
        } while ((uVar5 & 3) != uVar7);
      }
      if ((local_103c != 0) && (___bzero(), uVar5 != 1)) {
        uVar7 = (uint64_t)((uint)uVar9 & 3);
        if (2 < (uint64_t)uVar5 - 2) {
          uVar8 = 0;
          do {
            ___bzero();
            ___bzero();
            ___bzero();
            ___bzero();
            uVar8 = uVar8 + 4;
          } while ((uVar9 & 0xfffffffffffffffc) != uVar8);
        }
        if (uVar7 != 0) {
          uVar9 = 0;
          do {
            ___bzero();
            uVar9 = uVar9 + 1;
          } while (uVar7 != uVar9);
        }
      }
    }
  }
  else {
    local_103c = 0;
    local_10b0 = (void*)0x0;
    plVar11 = arg1;
    local_1040 = iVar4;
  }
  lVar10 = *(int64_t *)(this_ptr + 0x90);
  if (lVar10 != 0) {
    local_1068 = -1;
    while( true ) {
      lVar6 = (int64_t)local_1068;
      local_1068 = local_1068 + 1;
      if (*(int *)(lVar10 + 0xc) <= local_1068) break;
      plVar1 = *(int64_t **)(*(int64_t *)(lVar10 + 0x10) + 8 + lVar6 * 8);
      lVar6 = *(int64_t *)(this_ptr + 0xd8);
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      FUN_012ddb40();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      FUN_012dd9d0();
      FUN_012ddc20();
      (**(code **)(*plVar1 + 0x400))(local_1040,plVar11);
    }
    FUN_00540a20();
  }
  if ((local_103c != 0) && (lVar10 = *(int64_t *)(this_ptr + 0x90), lVar10 != 0)) {
    for (lVar6 = 0; (int)lVar6 < *(int *)(lVar10 + 0xc); lVar6 = lVar6 + 1) {
      plVar11 = *(int64_t **)(*(int64_t *)(lVar10 + 0x10) + lVar6 * 8);
      FUN_012dd9d0();
      FUN_012ddc20();
      (**(code **)(*plVar11 + 0x400))(local_103c,local_10b0);
    }
    FUN_00540a20();
  }
  if (arg1 == (int64_t *)0x0) {
    FUN_011ee2d0();
    *(void*)(this_ptr + 0xb0) = *(void*)(this_ptr + 0xb8);
    dVar13 = (double)FUN_00e7d6f0();
    fVar15 = (float)iVar4 / (float)*(double *)(this_ptr + 0x18);
    fVar14 = (float)((dVar13 - dVar12) / (double)fVar15);
    if ((0.0 < g_028ac364) && (g_028ac368 + g_02422df0 < dVar13)) {
      g_028ac364 = g_028ac364 + fVar15 / g_023d5650;
    }
    if (g_028ac364 < fVar14) {
      g_028ac364 = fVar14;
      g_028ac368 = dVar12;
    }
    fVar14 = g_02390124;
    if ((g_028ac364 <= g_02390124) && (fVar14 = 0.0, 0.0 <= g_028ac364)) goto LAB_0125660c;
  }
  else {
    *(void*)(this_ptr + 0xb0) = *(void*)(this_ptr + 0xb8);
    fVar14 = 0.0;
  }
  g_028ac364 = fVar14;
LAB_0125660c:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return;
}

