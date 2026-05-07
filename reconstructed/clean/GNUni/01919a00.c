// Function: FUN_01919a00
// Address: 01919a00
// Size: 1018 bytes
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


uint64_t FUN_01919a00(uint64_t param_1,byte param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint uVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t *this_ptr;
  bool bVar7;
  uint32_t uVar8;
  int64_t local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t local_70;
  uint32_t local_68;
  uint64_t local_64;
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  FUN_01a58dc0();
  (**(code **)(*local_38 + 0xe30))();
  if (local_80 == (int64_t *)0x0) {
    bVar7 = true;
  }
  else {
    FUN_01a58dc0();
    (**(code **)(*local_58 + 0xe30))();
    bVar7 = *(int *)(local_48 + 0xc) == 0;
    if (local_40 != '\0') {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar7) {
    uVar6 = 0;
    goto LAB_01919de8;
  }
  FUN_01a58dc0();
  (**(code **)(*local_38 + 0xe30))();
  local_90 = local_80;
  local_88 = 0;
  if (local_78 == '\0') {
    if (local_80 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  local_88 = '\x01';
  uVar3 = (**(code **)(*this_ptr + 0x488))();
  uVar6 = (uint64_t)uVar3;
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((byte)uVar3 & param_2) == 0) goto LAB_01919de8;
  uVar8 = FUN_01caec40();
  local_a0 = g_027e1e88;
  if (g_027e1e88 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_98 = '\x01';
  FUN_000175c0(uVar8,&local_a0);
  plVar1 = local_80;
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    FUN_01a58dc0();
    (**(code **)(*local_58 + 0xe30))();
    lVar2 = local_48;
    if (local_40 == '\0') {
      if (local_48 == 0) goto LAB_01919da3;
      FUN_00d50b00();
LAB_01919d40:
      local_78 = '\0';
      local_80 = (int64_t *)0x0;
      local_70 = lVar2;
      local_64 = 0;
      for (lVar4 = 0; local_68 = (uint32_t)lVar4, lVar4 < *(int *)(lVar2 + 0xc); lVar4 = lVar4 + 1
          ) {
        local_80 = *(int64_t **)(*(int64_t *)(lVar2 + 0x10) + lVar4 * 8);
        local_30 = '\0';
        local_38 = local_80;
        FUN_019188d0(g_02390d00);
      }
      FUN_001159b0();
      bVar7 = false;
    }
    else {
      local_40 = '\0';
      if (local_48 != 0) goto LAB_01919d40;
LAB_01919da3:
      bVar7 = true;
    }
    uVar5 = 0;
    (**(code **)(*this_ptr + 0x458))();
    if (!bVar7) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01a58dc0();
    (**(code **)(*local_58 + 0xe30))();
    lVar2 = local_48;
    if (local_40 == '\0') {
      if (local_48 == 0) goto LAB_01919ce3;
      FUN_00d50b00();
LAB_01919c7c:
      local_78 = '\0';
      local_80 = (int64_t *)0x0;
      local_70 = lVar2;
      local_64 = 0;
      for (lVar4 = 0; local_68 = (uint32_t)lVar4, lVar4 < *(int *)(lVar2 + 0xc); lVar4 = lVar4 + 1
          ) {
        local_80 = *(int64_t **)(*(int64_t *)(lVar2 + 0x10) + lVar4 * 8);
        local_30 = '\0';
        local_38 = local_80;
        FUN_019188d0(g_0241b638);
      }
      FUN_001159b0();
      uVar5 = 0;
      bVar7 = false;
    }
    else {
      local_40 = '\0';
      if (local_48 != 0) goto LAB_01919c7c;
LAB_01919ce3:
      uVar5 = CONCAT71((int7)((uint64_t)plVar1 >> 8),1);
      bVar7 = true;
    }
    (**(code **)(*this_ptr + 0x458))();
    if (!bVar7) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  uVar6 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
LAB_01919de8:
  return uVar6 & 0xffffffff;
}

