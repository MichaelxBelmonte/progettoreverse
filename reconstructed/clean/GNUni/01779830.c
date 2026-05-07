// Function: FUN_01779830
// Address: 01779830
// Size: 509 bytes
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


void FUN_01779830(void* param_1)

{
  void*puVar1;
  void *pvVar2;
  int64_t lVar3;
  void*this_ptr;
  void*puVar4;
  float fVar5;
  
  puVar1 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar1[7] = 0;
  puVar1[8] = 0;
  *puVar1 = &g_025ff9e0;
  puVar1[0xc] = 0;
  *(void*)(puVar1 + 0xd) = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(void*)((int64_t)puVar1 + 0x56) = 0;
  FUN_00d500e0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01779ec0();
  FUN_01779ed0();
  pvVar2 = _pthread_getspecific(param_1);
  puVar4 = puVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    puVar4 = (void*)puVar1[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar5 = (float)FUN_01779ec0();
  if ((*(float *)(puVar4 + 0xd) != fVar5) || (NAN(*(float *)(puVar4 + 0xd)) || NAN(fVar5))) {
    FUN_00d64850();
    *(float *)(puVar4 + 0xd) = fVar5;
    FUN_00d64910();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01779f30();
  FUN_01779f40();
  *this_ptr = puVar1;
  *(void*)(this_ptr + 1) = 1;
  return;
}

