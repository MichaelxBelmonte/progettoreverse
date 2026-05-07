// Function: FUN_017939b0
// Address: 017939b0
// Size: 1542 bytes
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


void FUN_017939b0(uint64_t param_1,uint param_2)

{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int64_t lVar8;
  int unaff_ESI;
  int64_t *this_ptr;
  int *piVar9;
  void*puVar10;
  uint32_t uVar11;
  int64_t local_108;
  char local_100;
  uint64_t local_f8;
  uint64_t uStack_f0;
  uint64_t local_e8;
  uint64_t uStack_e0;
  uint64_t local_d8;
  uint64_t uStack_d0;
  uint64_t local_c8;
  uint64_t uStack_c0;
  uint64_t local_b8;
  uint64_t uStack_b0;
  uint64_t local_a8;
  uint64_t uStack_a0;
  uint64_t local_98;
  uint64_t uStack_90;
  uint64_t local_88;
  uint64_t uStack_80;
  uint64_t local_78;
  uint64_t uStack_70;
  uint64_t local_68;
  uint64_t uStack_60;
  uint64_t local_58;
  uint64_t uStack_50;
  uint64_t local_48;
  uint64_t uStack_40;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  local_48 = g_02412570;
  uStack_40 = _UNK_02412578;
  local_58 = g_02412560;
  uStack_50 = _UNK_02412568;
  local_68 = g_02412550;
  uStack_60 = _UNK_02412558;
  local_78 = g_024125a0;
  uStack_70 = _UNK_024125a8;
  local_88 = g_02412590;
  uStack_80 = _UNK_02412598;
  local_98 = g_02412580;
  uStack_90 = _UNK_02412588;
  local_a8 = g_024125d0;
  uStack_a0 = _UNK_024125d8;
  local_b8 = g_024125c0;
  uStack_b0 = _UNK_024125c8;
  local_c8 = g_024125b0;
  uStack_c0 = _UNK_024125b8;
  local_f8 = 1;
  uStack_f0 = 1;
  local_e8 = 1;
  uStack_e0 = 1;
  local_d8 = 1;
  uStack_d0 = 1;
  if ((int)param_2 < 7) {
    puVar10 = &local_68;
    if (param_2 == 0) {
      lVar8 = 0;
    }
    else {
      if (param_2 == 1) {
        lVar8 = 0;
      }
      else {
        uVar5 = param_2 & 0xfffffffe;
        lVar8 = 0;
        do {
          piVar9 = (int *)((int64_t)&local_68 + (int64_t)(int)lVar8 * 4 + 4);
          lVar8 = (int64_t)(int)lVar8 << 0x20;
          do {
            lVar8 = lVar8 + 0x100000000;
            iVar2 = *piVar9;
            piVar9 = piVar9 + 1;
          } while (iVar2 == 0);
          lVar8 = lVar8 >> 0x20;
          do {
            lVar3 = lVar8 * 4;
            lVar8 = lVar8 + 1;
          } while (*(int *)((int64_t)&local_68 + lVar3 + 4) == 0);
          uVar5 = uVar5 - 2;
        } while (uVar5 != 0);
      }
      if ((param_2 & 1) != 0) {
        lVar3 = (int64_t)(int)lVar8;
        do {
          lVar8 = lVar3 + 1;
          lVar1 = lVar3 * 4;
          lVar3 = lVar8;
        } while (*(int *)((int64_t)&local_68 + lVar1 + 4) == 0);
      }
    }
    goto switchD_01793ada_caseD_d;
  }
  lVar8 = 0;
  puVar10 = &local_f8;
  lVar3 = 0;
  switch(param_2) {
  case 7:
    goto switchD_01793ada_caseD_7;
  case 8:
    puVar10 = &local_98;
    break;
  case 9:
    lVar3 = 7;
    goto switchD_01793ada_caseD_7;
  case 10:
    lVar8 = 0xb;
    puVar10 = &local_98;
    break;
  case 0xb:
  case 0xc:
  case 0xf:
    lVar8 = 7;
    puVar10 = &local_68;
    break;
  case 0xe:
    lVar3 = 0xb;
switchD_01793ada_caseD_7:
    lVar8 = lVar3;
    puVar10 = &local_c8;
  }
switchD_01793ada_caseD_d:
  iVar2 = unaff_ESI * 7;
  iVar2 = iVar2 + (((uint)(iVar2 / 6 + (iVar2 >> 0x1f)) >> 1) - (iVar2 >> 0x1f)) * -0xc;
  cVar4 = ((byte)(iVar2 >> 0x1f) & 0xc) + (char)iVar2 + '\x06';
  uVar5 = cVar4 * 0x2b;
  FUN_01716350((int)(char)(cVar4 + ((char)((uVar5 & 0xffff) >> 0xf) + (char)(uVar5 >> 9)) * -0xc +
                          -6));
  if ((local_100 == '\0') && (local_108 != 0)) {
    FUN_00d50b00();
  }
  iVar7 = (int)lVar8;
  iVar2 = ((uint)(iVar7 / 6 + (iVar7 >> 0x1f)) >> 1) - (iVar7 >> 0x1f);
  if (*(int *)((int64_t)puVar10 + (int64_t)(iVar7 + iVar2 * -0xc) * 4) != 0) {
    FUN_01715d40(iVar2 * 0xc,0);
  }
  iVar2 = iVar7 + 1;
  iVar6 = ((uint)(iVar2 / 6 + (iVar2 >> 0x1f)) >> 1) - (iVar2 >> 0x1f);
  if (*(int *)((int64_t)puVar10 + (int64_t)(iVar2 + iVar6 * -0xc) * 4) != 0) {
    FUN_01715d40(iVar6 * 0xc,0);
  }
  iVar2 = iVar7 + 2;
  iVar6 = ((uint)(iVar2 / 6 + (iVar2 >> 0x1f)) >> 1) - (iVar2 >> 0x1f);
  if (*(int *)((int64_t)puVar10 + (int64_t)(iVar2 + iVar6 * -0xc) * 4) != 0) {
    FUN_01715d40(iVar6 * 0xc,0);
  }
  iVar2 = iVar7 + 3;
  iVar6 = ((uint)(iVar2 / 6 + (iVar2 >> 0x1f)) >> 1) - (iVar2 >> 0x1f);
  if (*(int *)((int64_t)puVar10 + (int64_t)(iVar2 + iVar6 * -0xc) * 4) != 0) {
    FUN_01715d40(iVar6 * 0xc,0);
  }
  iVar2 = iVar7 + 4;
  iVar6 = ((uint)(iVar2 / 6 + (iVar2 >> 0x1f)) >> 1) - (iVar2 >> 0x1f);
  if (*(int *)((int64_t)puVar10 + (int64_t)(iVar2 + iVar6 * -0xc) * 4) != 0) {
    FUN_01715d40(iVar6 * 0xc,0);
  }
  iVar2 = iVar7 + 5;
  iVar6 = ((uint)(iVar2 / 6 + (iVar2 >> 0x1f)) >> 1) - (iVar2 >> 0x1f);
  if (*(int *)((int64_t)puVar10 + (int64_t)(iVar2 + iVar6 * -0xc) * 4) != 0) {
    FUN_01715d40(iVar6 * 0xc,0);
  }
  iVar2 = iVar7 + 6;
  iVar6 = ((uint)(iVar2 / 6 + (iVar2 >> 0x1f)) >> 1) - (iVar2 >> 0x1f);
  if (*(int *)((int64_t)puVar10 + (int64_t)(iVar2 + iVar6 * -0xc) * 4) != 0) {
    FUN_01715d40(iVar6 * 0xc,0);
  }
  iVar2 = iVar7 + 7;
  iVar6 = ((uint)(iVar2 / 6 + (iVar2 >> 0x1f)) >> 1) - (iVar2 >> 0x1f);
  if (*(int *)((int64_t)puVar10 + (int64_t)(iVar2 + iVar6 * -0xc) * 4) != 0) {
    FUN_01715d40(iVar6 * 0xc,0);
  }
  iVar2 = iVar7 + 8;
  iVar6 = ((uint)(iVar2 / 6 + (iVar2 >> 0x1f)) >> 1) - (iVar2 >> 0x1f);
  if (*(int *)((int64_t)puVar10 + (int64_t)(iVar2 + iVar6 * -0xc) * 4) != 0) {
    FUN_01715d40(iVar6 * 0xc,0);
  }
  iVar2 = iVar7 + 9;
  iVar6 = ((uint)(iVar2 / 6 + (iVar2 >> 0x1f)) >> 1) - (iVar2 >> 0x1f);
  if (*(int *)((int64_t)puVar10 + (int64_t)(iVar2 + iVar6 * -0xc) * 4) != 0) {
    FUN_01715d40(iVar6 * 0xc,0);
  }
  iVar2 = iVar7 + 10;
  iVar6 = ((uint)(iVar2 / 6 + (iVar2 >> 0x1f)) >> 1) - (iVar2 >> 0x1f);
  if (*(int *)((int64_t)puVar10 + (int64_t)(iVar2 + iVar6 * -0xc) * 4) != 0) {
    FUN_01715d40(iVar6 * 0xc,0);
  }
  iVar7 = iVar7 + 0xb;
  iVar2 = ((uint)(iVar7 / 6 + (iVar7 >> 0x1f)) >> 1) - (iVar7 >> 0x1f);
  if (*(int *)((int64_t)puVar10 + (int64_t)(iVar7 + iVar2 * -0xc) * 4) != 0) {
    FUN_01715d40(iVar2 * 0xc,0);
  }
  uVar11 = FUN_01716e60();
  if (param_2 == 0xf) {
    uVar11 = FUN_01715d40(uVar11,0xffffffff);
    FUN_01715d40(uVar11,4);
  }
  else if (param_2 == 0xc) {
    uVar11 = FUN_01715d40(uVar11,0xffffffff);
    FUN_01715d40(uVar11,10);
  }
  else if (param_2 == 0xb) {
    uVar11 = FUN_01715d40(uVar11,0xffffffff);
    FUN_01715d40(uVar11,0xc);
  }
  *this_ptr = local_108;
  *(void*)(this_ptr + 1) = 1;
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return;
}

