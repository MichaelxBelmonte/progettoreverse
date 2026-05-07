// Function: FUN_0167ab90
// Address: 0167ab90
// Size: 1316 bytes
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


void FUN_0167ab90(void* param_1)

{
  uint64_t *puVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t this_ptr;
  void* pVar6;
  int64_t local_88;
  char local_80;
  int local_70;
  int64_t local_58;
  char local_50;
  int local_40;
  
  lVar5 = local_58;
  if (*(int64_t *)(*(int64_t *)(this_ptr + 0x30) + 0x40) == 0) {
    return;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01537d40();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_0167ac34;
    }
  }
  else if (local_58 != 0) {
LAB_0167ac34:
    local_50 = '\0';
    local_58 = 0;
    local_40 = -1;
    while( true ) {
      lVar4 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar5 + 0xc) <= local_40) break;
      local_58 = *(int64_t *)(*(int64_t *)(lVar5 + 0x10) + 8 + lVar4 * 8);
      pvVar3 = _pthread_getspecific((void*)*(int64_t *)(lVar5 + 0x10));
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0166d380();
    }
    FUN_0049cb70();
    param_1 = (void*)lVar5;
    FUN_00d50b20();
  }
  lVar5 = local_58;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01537fd0();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_0167ad70;
    }
  }
  else if (local_58 != 0) {
LAB_0167ad70:
    local_50 = '\0';
    local_58 = 0;
    local_40 = -1;
    while( true ) {
      lVar4 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar5 + 0xc) <= local_40) break;
      local_58 = *(int64_t *)(*(int64_t *)(lVar5 + 0x10) + 8 + lVar4 * 8);
      pvVar3 = _pthread_getspecific((void*)*(int64_t *)(lVar5 + 0x10));
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016519e0();
    }
    FUN_0049cc10();
    param_1 = (void*)lVar5;
    FUN_00d50b20();
  }
  puVar1 = *(uint64_t **)(*(int64_t *)(this_ptr + 0x30) + 0x40);
  if (((puVar1 != (uint64_t *)0x0) && (0x20 < *puVar1)) && (puVar1[4] != 0)) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01537fd0();
    if (local_50 == '\0') {
      if (local_58 == 0) goto LAB_0167b08b;
      FUN_00d50b00();
    }
    else if (local_58 == 0) goto LAB_0167b08b;
    if (0 < *(int *)(local_58 + 0xc)) {
      pVar6 = 0;
      do {
        lVar5 = local_88;
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0164fea0();
        if (local_80 == '\0') {
          if (local_88 != 0) {
            FUN_00d50b00();
            goto LAB_0167afc0;
          }
        }
        else if (local_88 != 0) {
LAB_0167afc0:
          local_80 = '\0';
          local_88 = 0;
          local_70 = -1;
          while( true ) {
            lVar4 = (int64_t)local_70;
            local_70 = local_70 + 1;
            if (*(int *)(lVar5 + 0xc) <= local_70) break;
            lVar2 = *(int64_t *)(lVar5 + 0x10);
            local_88 = *(int64_t *)(lVar2 + 8 + lVar4 * 8);
            pvVar3 = _pthread_getspecific((void*)lVar2);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01658720();
          }
          FUN_00277f20();
          FUN_00d50b20();
        }
        pVar6 = pVar6 + 1;
      } while ((int)pVar6 < *(int *)(local_58 + 0xc));
    }
    FUN_0049cc10();
    FUN_00d50b20();
  }
LAB_0167b08b:
  if (*(char *)(this_ptr + 0x74) != '\0') {
    *(void*)(this_ptr + 0x74) = 0;
    puVar1 = *(uint64_t **)(*(int64_t *)(this_ptr + 0x30) + 0x40);
    if (((puVar1 != (uint64_t *)0x0) && (0x28 < *puVar1)) && (puVar1[5] != 0x0)) {
      (*puVar1[5])();
    }
  }
  return;
}

