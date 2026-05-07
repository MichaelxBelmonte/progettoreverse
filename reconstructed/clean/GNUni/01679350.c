// Function: FUN_01679350
// Address: 01679350
// Size: 2339 bytes
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


void FUN_01679350(void* param_1)

{
  int64_t *plVar1;
  void*puVar2;
  char cVar3;
  int64_t *plVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t *plVar7;
  void*puVar8;
  int64_t this_ptr;
  int64_t local_1b8;
  char local_1b0;
  int64_t local_1a8;
  char local_1a0;
  int64_t local_198;
  char local_190;
  int64_t local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  FUN_00d50100();
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_01538a90();
  (**(code **)(*plVar4 + 0x18))();
  plVar1 = *(int64_t **)(this_ptr + 0x20);
  if (plVar1 == plVar4) {
    FUN_00d50b20();
  }
  else {
    *(int64_t **)(this_ptr + 0x20) = plVar4;
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_016ae630();
  FUN_00c811e0();
  plVar1 = local_38;
  if (local_30 == '\0') {
    if (((local_38 != (int64_t *)0x0) && (FUN_00d50b00(), local_30 != '\0')) &&
       (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_30 = '\0';
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(param_1);
  plVar4 = plVar1;
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    plVar4 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar4 + 0x18))();
  pvVar5 = _pthread_getspecific(param_1);
  plVar4 = plVar1;
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    plVar4 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  FUN_00d50b00();
  (**(code **)(*plVar4 + 0x368))();
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01537a40();
  plVar7 = (int64_t *)FUN_00e8fc40();
  FUN_00039550();
  (**(code **)(*plVar7 + 0x18))();
  plVar4 = *(int64_t **)(this_ptr + 0x38);
  if (plVar4 == plVar7) {
    FUN_00d50b20();
  }
  else {
    *(int64_t **)(this_ptr + 0x38) = plVar7;
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar4 = *(int64_t **)(this_ptr + 0x38);
  lVar6 = *(int64_t *)(this_ptr + 0x20);
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar4 + 0x3a0))();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  FUN_00cb1f10();
  FUN_00db3760();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_1b8 = g_027e3b30;
  if (g_027e3b30 != 0) {
    FUN_00d50b00();
  }
  local_1b0 = '\x01';
  FUN_00cb1f10();
  local_58 = local_48;
  local_50 = 0;
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_50 = '\x01';
  FUN_00d41430(&local_58,&local_1b8);
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1b0 != '\0') && (local_1b8 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &g_025f7058;
  (*g_025f7070)();
  puVar2 = *(void**)(this_ptr + 0x40);
  if (puVar2 == puVar8) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x40) = puVar8;
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  cVar3 = FUN_016ae5f0();
  if (cVar3 != '\0') {
    FUN_00d403d0();
    FUN_00d50b00();
    local_1a8 = g_0277d8e0;
    if (g_0277d8e0 != 0) {
      FUN_00d50b00();
    }
    local_1a0 = '\x01';
    local_198 = 0;
    local_190 = '\0';
    FUN_00d41430(&local_198,&local_1a8);
    if ((local_190 != '\0') && (local_198 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1a0 != '\0') && (local_1a8 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    FUN_00d50b00();
    local_188 = g_0270b7b0;
    if (g_0270b7b0 != 0) {
      FUN_00d50b00();
    }
    local_180 = '\x01';
    local_178 = 0;
    local_170 = '\0';
    FUN_00d41430(&local_178,&local_188);
    if ((local_170 != '\0') && (local_178 != 0)) {
      FUN_00d50b20();
    }
    if ((local_180 != '\0') && (local_188 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    FUN_00d50b00();
    local_168 = g_0270b7c0;
    if (g_0270b7c0 != 0) {
      FUN_00d50b00();
    }
    local_160 = '\x01';
    local_158 = 0;
    local_150 = '\0';
    FUN_00d41430(&local_158,&local_168);
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
    if ((local_160 != '\0') && (local_168 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    FUN_00d50b00();
    local_148 = g_0270b7d0;
    if (g_0270b7d0 != 0) {
      FUN_00d50b00();
    }
    local_140 = '\x01';
    local_138 = 0;
    local_130 = '\0';
    FUN_00d41430(&local_138,&local_148);
    if ((local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    FUN_00d50b00();
    local_128 = g_02763340;
    if (g_02763340 != 0) {
      FUN_00d50b00();
    }
    local_120 = '\x01';
    local_118 = 0;
    local_110 = '\0';
    FUN_00d41430(&local_118,&local_128);
    if ((local_110 != '\0') && (local_118 != 0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    FUN_00d50b00();
    local_108 = g_02763350;
    if (g_02763350 != 0) {
      FUN_00d50b00();
    }
    local_100 = '\x01';
    local_f8 = 0;
    local_f0 = '\0';
    FUN_00d41430(&local_f8,&local_108);
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

