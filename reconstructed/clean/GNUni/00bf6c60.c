// Function: FUN_00bf6c60
// Address: 00bf6c60
// Size: 3140 bytes
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


void FUN_00bf6c60(void)

{
  int64_t lVar1;
  int64_t lVar2;
  code *pcVar3;
  void*puVar4;
  int64_t *this_ptr;
  bool bVar5;
  uint32_t uVar6;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if ((g_028a59b8 == (void*)0x0) || (g_028a59c1 == '\0')) {
    FUN_00e8cb50();
    if (g_028a59b8 == (void*)0x0) {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_02576110;
      *(void*)((int64_t)puVar4 + 0xc) = 0;
      *(void*)((int64_t)puVar4 + 0x14) = 0;
      *(void*)((int64_t)puVar4 + 0x1a) = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
      pcVar3 = g_02576128;
      (*g_02576128)();
      bVar5 = g_028a59b8 == (void*)0x0;
      g_028a59b8 = puVar4;
      if (((bVar5) || (FUN_00d50b20(), lVar2 = g_0276bc70, g_028a59b8 != (void*)0x0)) &&
         (lVar2 = g_0276bc70, g_028a59c0 == '\0')) {
        g_028a59c0 = '\x01';
        FUN_00e8cb90();
        lVar2 = g_0276bc70;
      }
      g_0276bc70 = lVar2;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_00d48b20();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      FUN_00d48ac0();
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *(void*)((int64_t)puVar4 + 0xc) = 0;
      *(void*)((int64_t)puVar4 + 0x14) = 0;
      *(void*)((int64_t)puVar4 + 0x1a) = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
      *puVar4 = &g_02576dc8;
      (*g_02576de0)();
      bVar5 = g_028a59c8 == (void*)0x0;
      g_028a59c8 = puVar4;
      if (((bVar5) || (FUN_00d50b20(), g_028a59c8 != (void*)0x0)) && (g_028a59d0 == '\0')
         ) {
        g_028a59d0 = '\x01';
        FUN_00e8cb90();
      }
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_02576110;
      *(void*)((int64_t)puVar4 + 0xc) = 0;
      *(void*)((int64_t)puVar4 + 0x14) = 0;
      *(void*)((int64_t)puVar4 + 0x1a) = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
      (*pcVar3)();
      bVar5 = g_028a59d8 == (void*)0x0;
      g_028a59d8 = puVar4;
      if (((bVar5) || (FUN_00d50b20(), lVar2 = g_026d7d98, g_028a59d8 != (void*)0x0)) &&
         (lVar2 = g_026d7d98, g_028a59e0 == '\0')) {
        g_028a59e0 = '\x01';
        FUN_00e8cb90();
        lVar2 = g_026d7d98;
      }
      g_026d7d98 = lVar2;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_00d48b20();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      FUN_00d48ac0();
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_02576110;
      *(void*)((int64_t)puVar4 + 0xc) = 0;
      *(void*)((int64_t)puVar4 + 0x14) = 0;
      *(void*)((int64_t)puVar4 + 0x1a) = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
      (*pcVar3)();
      bVar5 = g_028a59e8 == (void*)0x0;
      g_028a59e8 = puVar4;
      if (((bVar5) || (FUN_00d50b20(), lVar2 = g_026d7d98, g_028a59e8 != (void*)0x0)) &&
         (lVar2 = g_026d7d98, g_028a59f0 == '\0')) {
        g_028a59f0 = '\x01';
        FUN_00e8cb90();
        lVar2 = g_026d7d98;
      }
      g_026d7d98 = lVar2;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_00d48b20();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      FUN_00d48ac0();
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_02576110;
      *(void*)((int64_t)puVar4 + 0xc) = 0;
      *(void*)((int64_t)puVar4 + 0x14) = 0;
      *(void*)((int64_t)puVar4 + 0x1a) = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
      (*pcVar3)();
      bVar5 = g_028a59f8 == (void*)0x0;
      g_028a59f8 = puVar4;
      if (((bVar5) || (FUN_00d50b20(), lVar2 = g_026d7d98, g_028a59f8 != (void*)0x0)) &&
         (lVar2 = g_026d7d98, g_028a5a00 == '\0')) {
        g_028a5a00 = '\x01';
        FUN_00e8cb90();
        lVar2 = g_026d7d98;
      }
      g_026d7d98 = lVar2;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_00d48b20();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      FUN_00d48ac0();
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_02576110;
      *(void*)((int64_t)puVar4 + 0xc) = 0;
      *(void*)((int64_t)puVar4 + 0x14) = 0;
      *(void*)((int64_t)puVar4 + 0x1a) = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
      (*pcVar3)();
      bVar5 = g_028a5a08 == (void*)0x0;
      g_028a5a08 = puVar4;
      if (((bVar5) || (FUN_00d50b20(), lVar2 = g_026d7d98, g_028a5a08 != (void*)0x0)) &&
         (lVar2 = g_026d7d98, g_028a5a10 == '\0')) {
        g_028a5a10 = '\x01';
        FUN_00e8cb90();
        lVar2 = g_026d7d98;
      }
      g_026d7d98 = lVar2;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_00d48b20();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      FUN_00d48ac0();
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_02576110;
      *(void*)((int64_t)puVar4 + 0xc) = 0;
      *(void*)((int64_t)puVar4 + 0x14) = 0;
      *(void*)((int64_t)puVar4 + 0x1a) = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
      (*pcVar3)();
      bVar5 = g_028a5a18 == (void*)0x0;
      g_028a5a18 = puVar4;
      if (((bVar5) || (FUN_00d50b20(), lVar2 = g_0276bc80, g_028a5a18 != (void*)0x0)) &&
         (lVar2 = g_0276bc80, g_028a5a20 == '\0')) {
        g_028a5a20 = '\x01';
        FUN_00e8cb90();
        lVar2 = g_0276bc80;
      }
      g_0276bc80 = lVar2;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_00d48b20();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      FUN_00d48ac0();
      lVar2 = g_02773100;
      if (g_02773100 != 0) {
        FUN_00d50b00();
      }
      uVar6 = FUN_00d46dc0(g_0240e30c);
      local_50 = local_40;
      local_48 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          uVar6 = FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_48 = '\x01';
      FUN_00d4bf20(uVar6,&local_50);
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_02576110;
      *(void*)((int64_t)puVar4 + 0xc) = 0;
      *(void*)((int64_t)puVar4 + 0x14) = 0;
      *(void*)((int64_t)puVar4 + 0x1a) = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
      (*pcVar3)();
      bVar5 = g_028a5a28 == (void*)0x0;
      g_028a5a28 = puVar4;
      if (((bVar5) || (FUN_00d50b20(), lVar2 = g_0276bc90, g_028a5a28 != (void*)0x0)) &&
         (lVar2 = g_0276bc90, g_028a5a30 == '\0')) {
        g_028a5a30 = '\x01';
        FUN_00e8cb90();
        lVar2 = g_0276bc90;
      }
      g_0276bc90 = lVar2;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_00d48b20();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      FUN_00d48ac0();
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_02576110;
      *(void*)((int64_t)puVar4 + 0xc) = 0;
      *(void*)((int64_t)puVar4 + 0x14) = 0;
      *(void*)((int64_t)puVar4 + 0x1a) = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
      (*pcVar3)();
      bVar5 = g_028a5a38 == (void*)0x0;
      g_028a5a38 = puVar4;
      if (((bVar5) || (FUN_00d50b20(), lVar2 = g_0276bc90, g_028a5a38 != (void*)0x0)) &&
         (lVar2 = g_0276bc90, g_028a5a40 == '\0')) {
        g_028a5a40 = '\x01';
        FUN_00e8cb90();
        lVar2 = g_0276bc90;
      }
      g_0276bc90 = lVar2;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_00d48b20();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      FUN_00d48ac0();
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_02576110;
      *(void*)((int64_t)puVar4 + 0xc) = 0;
      *(void*)((int64_t)puVar4 + 0x14) = 0;
      *(void*)((int64_t)puVar4 + 0x1a) = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
      (*pcVar3)();
      bVar5 = g_028a5a48 == (void*)0x0;
      g_028a5a48 = puVar4;
      if (((bVar5) || (FUN_00d50b20(), lVar2 = g_0276bc98, g_028a5a48 != (void*)0x0)) &&
         (lVar2 = g_0276bc98, g_028a5a50 == '\0')) {
        g_028a5a50 = '\x01';
        FUN_00e8cb90();
        lVar2 = g_0276bc98;
      }
      g_0276bc98 = lVar2;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_00d48b20();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      FUN_00d48ac0();
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *(void*)((int64_t)puVar4 + 0xc) = 0;
      *(void*)((int64_t)puVar4 + 0x14) = 0;
      *(void*)((int64_t)puVar4 + 0x1a) = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
      puVar4[10] = 0;
      *puVar4 = &g_0255a1d0;
      FUN_00d500e0();
      bVar5 = g_028a5a58 == (void*)0x0;
      g_028a5a58 = puVar4;
      if (((bVar5) || (FUN_00d50b20(), lVar2 = g_0276bca0, g_028a5a58 != (void*)0x0)) &&
         (lVar2 = g_0276bca0, g_028a5a60 == '\0')) {
        g_028a5a60 = '\x01';
        FUN_00e8cb90();
        lVar2 = g_0276bca0;
      }
      g_0276bca0 = lVar2;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_00d48b20();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      FUN_00d48ac0();
      if ((*(float *)(g_028a5a58 + 10) != g_02393944) ||
         (NAN(*(float *)(g_028a5a58 + 10)) || NAN(g_02393944))) {
        *(void*)(g_028a5a58 + 10) = 0x447a0000;
      }
      g_028a59c1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a59c1 = '\x01';
      FUN_00e8cb70();
    }
  }
  FUN_00b31790();
  *(void*)(this_ptr + 0x17) = 0xffffffff;
  *(void*)(this_ptr + 0x15) = 0;
  (**(code **)(*this_ptr + 0x640))();
  (**(code **)(*this_ptr + 0x5c8))();
  (**(code **)(*this_ptr + 0x448))();
  FUN_00c8e690();
  lVar2 = local_40;
  if (((local_38 == '\0') && (local_40 != 0)) &&
     ((FUN_00d50b00(), local_38 != '\0' && (local_40 != 0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  lVar1 = this_ptr[0x14];
  if (lVar1 == lVar2) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x14] = lVar2;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  lVar2 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  lVar1 = this_ptr[0x13];
  if (lVar1 == lVar2) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x13] = lVar2;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

