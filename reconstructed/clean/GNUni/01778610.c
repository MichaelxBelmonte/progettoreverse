// Function: FUN_01778610
// Address: 01778610
// Size: 787 bytes
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


void FUN_01778610(void* param_1)

{
  double dVar1;
  void *pvVar2;
  int64_t lVar3;
  void* pVar4;
  char *pcVar5;
  int64_t *plVar6;
  int64_t this_ptr;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38 [8];
  char local_30 [8];
  
  *(void*)(this_ptr + 0x60) = 0;
  if (*(int64_t *)(this_ptr + 0x40) != 0) {
    FUN_00d50b00();
    FUN_01778a40();
    if ((local_38[0] == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    FUN_00d50b20();
    FUN_01778fe0();
    lVar3 = *(int64_t *)(this_ptr + 0x48);
    if (lVar3 == local_40) {
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if ((local_38[0] == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
        lVar3 = *(int64_t *)(this_ptr + 0x48);
      }
      *(int64_t *)(this_ptr + 0x48) = local_40;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    plVar6 = *(int64_t **)(this_ptr + 0x48);
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      plVar6 = *(int64_t **)(this_ptr + 0x48);
      lVar3 = FUN_00e8b990();
      if (lVar3 != 0) {
        plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
      }
    }
    (**(code **)(*plVar6 + 0x378))();
    lVar3 = *(int64_t *)(this_ptr + 0x50);
    if (lVar3 != local_40) {
      if (local_38[0] == '\0') {
        if (local_40 == 0) {
          *(void*)(this_ptr + 0x50) = 0;
        }
        else {
          FUN_00d50b00();
          lVar3 = *(int64_t *)(this_ptr + 0x50);
          *(int64_t *)(this_ptr + 0x50) = local_40;
        }
      }
      else {
        local_38[0] = '\0';
        *(int64_t *)(this_ptr + 0x50) = local_40;
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (*(int64_t *)(this_ptr + 0x50) == 0) {
      *(void*)(this_ptr + 0x58) = 0x4628c00044960000;
    }
    else {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013f2b00();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar1 = (double)FUN_013faed0();
      *(float *)(this_ptr + 0x58) = (float)dVar1;
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013f2b00();
      FUN_00d23340();
      pVar4 = CONCAT31((int3)(param_1 >> 8),local_38[0]);
      pcVar5 = local_30;
      if (local_38[0] != '\0') {
        pcVar5 = local_38;
      }
      local_30[0] = local_38[0];
      *pcVar5 = '\0';
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar1 = (double)FUN_013faed0();
      *(float *)(this_ptr + 0x5c) = (float)dVar1;
      if ((local_30[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

