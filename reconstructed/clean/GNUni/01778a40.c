// Function: FUN_01778a40
// Address: 01778a40
// Size: 1068 bytes
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


void* FUN_01778a40(uint64_t param_1)

{
  float fVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  int64_t lVar7;
  void*puVar8;
  int64_t *plVar9;
  uint64_t uVar10;
  char *pcVar11;
  int64_t *arg1;
  int64_t *plVar12;
  void*this_ptr;
  uint64_t uVar13;
  int iVar14;
  int64_t local_a0;
  char local_98;
  int64_t local_88;
  char local_80;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  pvVar6 = _pthread_getspecific((void*)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  pvVar6 = _pthread_getspecific((void*)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar2 = (double)FUN_013faed0();
  iVar3 = FUN_00e7d780((float)dVar2);
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific((void*)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  FUN_00d23340();
  uVar10 = CONCAT71((int7)((uint64_t)param_1 >> 8),local_40[0]);
  pcVar11 = local_38;
  if (local_40[0] != '\0') {
    pcVar11 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar11 = '\0';
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific((void*)uVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar2 = (double)FUN_013faed0();
  iVar4 = FUN_00e7d780((float)dVar2);
  if ((local_38[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  iVar4 = iVar4 - iVar3;
  FUN_00c8e690();
  if ((((local_40[0] == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40[0] != '\0')) &&
     (local_48 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  uVar5 = iVar4 / 10 + 1;
  if (-10 < iVar4) {
    uVar13 = 0;
    iVar14 = iVar3;
    do {
      plVar9 = (int64_t *)*arg1;
      pvVar6 = _pthread_getspecific((void*)uVar10);
      if (pvVar6 != (void *)0x0) {
        plVar9 = (int64_t *)*arg1;
        lVar7 = FUN_00e8b990();
        if (lVar7 != 0) {
          plVar9 = (int64_t *)plVar9[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
        }
      }
      dVar2 = (double)(**(code **)(*plVar9 + 0x380))(SUB84((double)iVar14,0));
      *(float *)(*(int64_t *)(local_48 + 0x10) + uVar13 * 4) = (float)dVar2;
      uVar13 = uVar13 + 1;
      iVar14 = iVar14 + 10;
    } while (uVar5 != uVar13);
  }
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &g_025f0d98;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = 0;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  (*g_025f0db0)();
  uVar10 = 3;
  FUN_015c1480(g_023908e0,uVar5);
  plVar9 = (int64_t *)FUN_000bea40();
  (**(code **)(*plVar9 + 0x18))();
  if (iVar4 < -9) {
    *this_ptr = plVar9;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    uVar13 = 0;
    do {
      fVar1 = *(float *)(*(int64_t *)(local_48 + 0x10) + uVar13 * 4);
      pvVar6 = _pthread_getspecific((void*)uVar10);
      plVar12 = plVar9;
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        plVar12 = (int64_t *)plVar9[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar12 + 0x418))(SUB84((double)iVar3,0),(double)fVar1);
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      uVar13 = uVar13 + 1;
      iVar3 = iVar3 + 10;
    } while (uVar5 != uVar13);
    *this_ptr = plVar9;
    *(void*)(this_ptr + 1) = 1;
    if (puVar8 == (void*)0x0) goto LAB_01778e5c;
  }
  FUN_00d50b20();
LAB_01778e5c:
  FUN_00d50b20();
  return this_ptr;
}

