// Function: FUN_00b160d0
// Address: 00b160d0
// Size: 611 bytes
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


void FUN_00b160d0(void)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  void*this_ptr;
  int64_t *plVar6;
  bool bVar7;
  uint32_t uVar8;
  int64_t local_40;
  char local_38;
  int64_t *local_30;
  char local_28;
  
  if (g_028a0d90 == (int64_t *)0x0) {
    FUN_00b16410();
    plVar5 = local_30;
    if (g_028a0d90 != local_30) {
      plVar6 = g_028a0d90;
      if (local_28 == '\0') {
        if (local_30 != (int64_t *)0x0) {
          FUN_00d50b00();
          plVar6 = g_028a0d90;
        }
      }
      else {
        local_28 = '\0';
      }
      g_028a0d90 = plVar5;
      if (plVar6 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    if ((plVar5 != (int64_t *)0x0) && (g_028a0d98 == '\0')) {
      g_028a0d98 = '\x01';
      FUN_00e8cb90();
    }
    if ((local_28 != '\0') && (plVar5 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (g_028a0d90 == (int64_t *)0x0) {
      plVar5 = (int64_t *)FUN_00e8fc40();
      FUN_00d4ff40();
      *(void*)((int64_t)plVar5 + 0x7c) = 0;
      *(void*)((int64_t)plVar5 + 0x84) = 0;
      *(void*)((int64_t)plVar5 + 0x6c) = 0;
      *(void*)((int64_t)plVar5 + 0x74) = 0;
      *(void*)((int64_t)plVar5 + 0x5c) = 0;
      *(void*)((int64_t)plVar5 + 100) = 0;
      *(void*)((int64_t)plVar5 + 0x4c) = 0;
      *(void*)((int64_t)plVar5 + 0x54) = 0;
      *(void*)((int64_t)plVar5 + 0x3c) = 0;
      *(void*)((int64_t)plVar5 + 0x44) = 0;
      *(void*)((int64_t)plVar5 + 0x2c) = 0;
      *(void*)((int64_t)plVar5 + 0x34) = 0;
      *(void*)((int64_t)plVar5 + 0x1c) = 0;
      *(void*)((int64_t)plVar5 + 0x24) = 0;
      *(void*)((int64_t)plVar5 + 0xc) = 0;
      *(void*)((int64_t)plVar5 + 0x14) = 0;
      *(void*)((int64_t)plVar5 + 0x8c) = 0;
      plVar5[0x14] = 0;
      plVar5[0x15] = 0;
      *(void*)(plVar5 + 0x16) = 0;
      *(void*)((int64_t)plVar5 + 0xb4) = 0;
      *(void*)((int64_t)plVar5 + 0xbc) = 0;
      *(void*)((int64_t)plVar5 + 0xc4) = 0;
      *plVar5 = (int64_t)&g_02530ed8;
      *(void*)((int64_t)plVar5 + 0xcc) = 0;
      plVar5[0x1a] = 0;
      plVar5[0x1b] = 0;
      uVar8 = (*g_02530ef0)();
      if (g_028a0d90 == plVar5) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar7 = g_028a0d90 != (int64_t *)0x0;
        g_028a0d90 = plVar5;
        if (bVar7) {
          uVar8 = FUN_00d50b20();
        }
      }
      if (g_028a0d98 == '\0') {
        g_028a0d98 = '\x01';
        uVar8 = FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        uVar8 = FUN_00d50b20();
      }
      lVar3 = g_02703b18;
      if (g_02703b18 != 0) {
        uVar8 = FUN_00d50b00();
      }
      lVar4 = g_0275e008;
      if (g_0275e008 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_40 = lVar4;
      local_38 = '\x01';
      FUN_01f6ca30(uVar8,&local_40);
      (**(code **)(*local_30 + 0x5e0))();
      if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      *(void*)(this_ptr + 1) = 0;
      plVar5 = g_028a0d90;
      if (g_028a0d90 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      goto LAB_00b1618b;
    }
  }
  plVar5 = g_028a0d90;
  *(void*)(this_ptr + 1) = 0;
  FUN_00d50b00();
LAB_00b1618b:
  *this_ptr = plVar5;
  *(void*)(this_ptr + 1) = 1;
  return;
}

