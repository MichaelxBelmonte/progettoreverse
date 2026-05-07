// Function: FUN_01256f10
// Address: 01256f10
// Size: 904 bytes
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


void FUN_01256f10(void)

{
  int64_t lVar1;
  code *pcVar2;
  void*puVar3;
  void*puVar4;
  int64_t lVar5;
  int64_t this_ptr;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_38;
  char local_30;
  
  FUN_00b31790();
  FUN_00d21370();
  FUN_005170f0();
  lVar1 = *(int64_t *)(this_ptr + 0x98);
  lVar5 = lVar1;
  if (lVar1 != local_38) {
    lVar5 = local_38;
    if (local_30 == '\0') {
      if (local_38 == 0) {
        lVar5 = 0;
        goto LAB_01256f60;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x98);
      *(int64_t *)(this_ptr + 0x98) = local_38;
    }
    else {
      local_30 = '\0';
LAB_01256f60:
      *(int64_t *)(this_ptr + 0x98) = lVar5;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar5 = local_38;
    }
  }
  if ((local_30 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  FUN_005170f0();
  lVar1 = *(int64_t *)(this_ptr + 0xa0);
  lVar5 = lVar1;
  if (lVar1 == local_38) goto LAB_0125702e;
  lVar5 = local_38;
  if (local_30 == '\0') {
    if (local_38 == 0) {
      lVar5 = 0;
      goto LAB_01256fe3;
    }
    FUN_00d50b00();
    lVar1 = *(int64_t *)(this_ptr + 0xa0);
    *(int64_t *)(this_ptr + 0xa0) = local_38;
  }
  else {
    local_30 = '\0';
LAB_01256fe3:
    *(int64_t *)(this_ptr + 0xa0) = lVar5;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar5 = local_38;
  }
LAB_0125702e:
  if ((local_30 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0xa8) = 0;
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *(void*)((int64_t)puVar3 + 0x7c) = 0;
  *(void*)((int64_t)puVar3 + 0x84) = 0;
  *(void*)((int64_t)puVar3 + 0x6c) = 0;
  *(void*)((int64_t)puVar3 + 0x74) = 0;
  *(void*)((int64_t)puVar3 + 0x5c) = 0;
  *(void*)((int64_t)puVar3 + 100) = 0;
  *(void*)((int64_t)puVar3 + 0x4c) = 0;
  *(void*)((int64_t)puVar3 + 0x54) = 0;
  *(void*)((int64_t)puVar3 + 0x3c) = 0;
  *(void*)((int64_t)puVar3 + 0x44) = 0;
  *(void*)((int64_t)puVar3 + 0x2c) = 0;
  *(void*)((int64_t)puVar3 + 0x34) = 0;
  *(void*)((int64_t)puVar3 + 0x1c) = 0;
  *(void*)((int64_t)puVar3 + 0x24) = 0;
  *(void*)((int64_t)puVar3 + 0xc) = 0;
  *(void*)((int64_t)puVar3 + 0x14) = 0;
  *(void*)((int64_t)puVar3 + 0x8c) = 0;
  *puVar3 = &g_0252ff98;
  puVar3[0x15] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  *(void*)(puVar3 + 0x14) = 0;
  puVar3[0x17] = 0;
  puVar3[0x18] = 0;
  puVar3[0x19] = 0;
  pcVar2 = g_0252ffb0;
  (*g_0252ffb0)();
  puVar4 = *(void**)(this_ptr + 200);
  if (puVar4 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 200) = puVar3;
    if (puVar4 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *(void*)((int64_t)puVar3 + 0x7c) = 0;
  *(void*)((int64_t)puVar3 + 0x84) = 0;
  *(void*)((int64_t)puVar3 + 0x6c) = 0;
  *(void*)((int64_t)puVar3 + 0x74) = 0;
  *(void*)((int64_t)puVar3 + 0x5c) = 0;
  *(void*)((int64_t)puVar3 + 100) = 0;
  *(void*)((int64_t)puVar3 + 0x4c) = 0;
  *(void*)((int64_t)puVar3 + 0x54) = 0;
  *(void*)((int64_t)puVar3 + 0x3c) = 0;
  *(void*)((int64_t)puVar3 + 0x44) = 0;
  *(void*)((int64_t)puVar3 + 0x2c) = 0;
  *(void*)((int64_t)puVar3 + 0x34) = 0;
  *(void*)((int64_t)puVar3 + 0x1c) = 0;
  *(void*)((int64_t)puVar3 + 0x24) = 0;
  *(void*)((int64_t)puVar3 + 0xc) = 0;
  *(void*)((int64_t)puVar3 + 0x14) = 0;
  *(void*)((int64_t)puVar3 + 0x8c) = 0;
  *puVar3 = &g_0252ff98;
  puVar3[0x15] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  *(void*)(puVar3 + 0x14) = 0;
  puVar3[0x17] = 0;
  puVar3[0x18] = 0;
  puVar3[0x19] = 0;
  (*pcVar2)();
  puVar4 = *(void**)(this_ptr + 0xd0);
  if (puVar4 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0xd0) = puVar3;
    if (puVar4 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02581c90;
  (*g_02581ca8)();
  lVar1 = *(int64_t *)(this_ptr + 0x108);
  *(void**)(this_ptr + 0x108) = puVar4;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_68 = g_027e2660;
  if (g_027e2660 != 0) {
    FUN_00d50b00();
  }
  local_60 = '\x01';
  local_58 = 0;
  local_50 = '\0';
  FUN_00d41430(&local_58,&local_68);
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  return;
}

