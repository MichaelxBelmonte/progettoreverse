// Function: FUN_01778fe0
// Address: 01778fe0
// Size: 536 bytes
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


void* FUN_01778fe0(void* param_1)

{
  uint uVar1;
  int64_t lVar2;
  int64_t *plVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t *plVar6;
  void*this_ptr;
  uint64_t uVar7;
  uint64_t uVar8;
  double dVar9;
  double dVar10;
  int64_t local_78;
  char local_70;
  int64_t local_48;
  char local_40;
  
  plVar3 = (int64_t *)FUN_000bea40();
  (**(code **)(*plVar3 + 0x18))();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  uVar1 = *(uint *)(local_48 + 0xc);
  if (0 < (int)uVar1) {
    uVar7 = 0;
    do {
      lVar2 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + uVar7 * 8);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar8 = FUN_013faed0();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar9 = (double)FUN_013faed0();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar10 = (double)FUN_013faf20();
      pvVar4 = _pthread_getspecific(param_1);
      plVar6 = plVar3;
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        plVar6 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar6 + 0x418))(uVar8,dVar9 + dVar10);
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      uVar7 = uVar7 + 1;
    } while (uVar1 != uVar7);
  }
  *this_ptr = plVar3;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  return this_ptr;
}

