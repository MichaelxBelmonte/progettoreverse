// Function: FUN_019169f0
// Address: 019169f0
// Size: 1081 bytes
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


int64_t * FUN_019169f0(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  char *pcVar5;
  int iVar6;
  int64_t arg1;
  int64_t *this_ptr;
  int iVar7;
  int64_t lVar8;
  float fVar9;
  uint32_t uVar10;
  char local_98;
  undefined7 uStack_97;
  char local_90 [8];
  int64_t local_88;
  int64_t local_78;
  char local_70;
  float local_64;
  int64_t local_60;
  char local_58 [8];
  int64_t local_50;
  uint64_t local_48;
  int local_40;
  char local_38 [8];
  
  fVar9 = (float)(**(code **)(**(int64_t **)(arg1 + 0x10) + 0x18))();
  if (*(int64_t *)(arg1 + 0x18) == 0) {
    plVar2 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar2 + 0x18))();
    lVar3 = *(int64_t *)(arg1 + 0x18);
    *(int64_t **)(arg1 + 0x18) = plVar2;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c9fe20();
  lVar3 = local_60;
  pcVar5 = &local_98;
  if (local_58[0] != '\0') {
    pcVar5 = local_58;
  }
  local_98 = local_58[0];
  *pcVar5 = '\0';
  if ((local_58[0] != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  if (local_98 == '\0') {
    if (lVar3 == 0) goto LAB_01916b5d;
    FUN_00d50b00();
  }
  else if (lVar3 == 0) goto LAB_01916b5d;
  local_58[0] = '\0';
  local_60 = 0;
  local_50 = lVar3;
  local_48 = 0xffffffff;
  local_40 = 0;
  while( true ) {
    lVar3 = (int64_t)(int)local_48;
    iVar7 = (int)local_48 + 1;
    local_48 = CONCAT44(local_48._4_4_,iVar7);
    if (*(int *)(local_50 + 0xc) <= iVar7) break;
    local_60 = *(int64_t *)(*(int64_t *)(local_50 + 0x10) + 8 + lVar3 * 8);
    iVar7 = FUN_00d45870();
    if (iVar7 == param_2) {
      FUN_00ca1380();
      pcVar5 = local_38;
      if (local_90[0] != '\0') {
        pcVar5 = local_90;
      }
      lVar3 = CONCAT71(uStack_97,local_98);
      local_38[0] = local_90[0];
      *pcVar5 = '\0';
      if ((local_90[0] != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = *(int64_t *)
               (*(int64_t *)(lVar3 + 0x10) + ((int64_t)local_40 + (int64_t)(int)local_48) * 8);
      *(void*)(this_ptr + 1) = 0;
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      *this_ptr = lVar3;
      *(void*)(this_ptr + 1) = 1;
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
      FUN_00136b80();
      FUN_00d50b20();
      return this_ptr;
    }
    if (local_48._4_4_ != 0) {
      if (local_48._4_4_ < 1) {
        iVar7 = -local_48._4_4_;
      }
      else {
        local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
        FUN_00d23690();
        local_40 = local_40 + local_48._4_4_;
        iVar7 = 0;
      }
      local_48 = CONCAT44(iVar7,(int)local_48);
    }
  }
  FUN_00136b80();
  FUN_00d50b20();
LAB_01916b5d:
  FUN_01d386e0();
  lVar3 = local_60;
  if ((((local_58[0] == '\0') && (local_60 != 0)) && (FUN_00d50b00(), local_58[0] != '\0')) &&
     (local_60 != 0)) {
    FUN_00d50b20();
  }
  iVar7 = param_2 * 500;
  local_88 = lVar3;
  if (iVar7 + -4 < iVar7 + 0x1f8) {
    iVar6 = -4;
    do {
      if (-1 < iVar7 + iVar6) {
        local_64 = (float)(iVar7 + iVar6);
        if (fVar9 <= local_64) break;
        uVar10 = (**(code **)(**(int64_t **)(arg1 + 0x10) + 0x20))();
        FUN_01d38ba0(local_64,uVar10);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0x1f8);
  }
  local_64 = (float)param_2;
  FUN_01d38ea0();
  iVar7 = *(int *)(local_60 + 0x18);
  if (local_58[0] != '\0') {
    FUN_00d50b20();
  }
  lVar4 = (int64_t)(iVar7 / 0x1c);
  lVar8 = lVar4 + 1;
  lVar4 = lVar4 * 0x1c + -0x14;
  while (lVar8 = lVar8 + -1, lVar8 != 0) {
    FUN_01d38ea0();
    lVar1 = *(int64_t *)(local_60 + 0x10);
    if (local_58[0] != '\0') {
      FUN_00d50b20();
    }
    lVar3 = local_88;
    FUN_01d38ba0(*(void*)(lVar1 + -4 + lVar4),*(uint *)(lVar1 + lVar4) ^ g_023945e0);
    lVar4 = lVar4 + -0x1c;
  }
  FUN_01d38b10();
  uVar10 = FUN_00d46530();
  local_78 = local_60;
  local_70 = 0;
  if (local_58[0] == '\0') {
    if (local_60 != 0) {
      uVar10 = FUN_00d50b00();
    }
  }
  else {
    local_58[0] = '\0';
  }
  local_70 = '\x01';
  FUN_01916fa0(uVar10,&local_78);
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  *this_ptr = lVar3;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

