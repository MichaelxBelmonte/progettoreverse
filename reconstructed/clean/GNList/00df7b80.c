// Function: FUN_00df7b80
// Address: 00df7b80
// Size: 2045 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00df7b80(void)

{
  code *pcVar1;
  int64_t *plVar2;
  void*puVar3;
  int64_t *plVar4;
  void*puVar5;
  int64_t *plVar6;
  int64_t lVar7;
  void*arg1;
  int64_t *this_ptr;
  bool bVar8;
  uint32_t uVar9;
  int64_t local_140;
  char local_138;
  int64_t *local_130;
  char local_128;
  void*local_120;
  char local_118;
  void*local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  void*local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_70;
  int local_58;
  int64_t *local_40;
  char local_38;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  pcVar1 = g_02572370;
  (*g_02572370)();
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  (**(code **)(*(int64_t *)*arg1 + 0x380))();
  plVar6 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00ca0e70();
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  (*pcVar1)();
  FUN_00e128b0();
  lVar7 = local_d0;
  if (local_c8 == '\0') {
    if (local_d0 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_c8 = '\0';
  }
  (**(code **)(*plVar4 + 0x98))();
  plVar6 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00d243f0();
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar6 = (int64_t)&g_02585b30;
  plVar6[2] = 0;
  plVar6[3] = 0;
  uVar9 = (*g_02585b48)();
  local_70 = 0;
  local_58 = -1;
  while( true ) {
    plVar2 = g_02784930;
    lVar7 = (int64_t)local_58;
    local_58 = local_58 + 1;
    if (*(int *)((int64_t)puVar5 + 0xc) <= local_58) break;
    local_70 = *(int64_t *)(puVar5[2] + 8 + lVar7 * 8);
    if (g_02784930 != (int64_t *)0x0) {
      uVar9 = FUN_00d50b00();
    }
    local_40 = plVar2;
    local_38 = '\0';
    FUN_00ca0840(uVar9,&local_40);
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    lVar7 = this_ptr[7];
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    local_138 = '\x01';
    local_128 = '\0';
    local_140 = lVar7;
    local_130 = plVar4;
    uVar9 = (**(code **)(*plVar6 + 0x388))(&local_130,&local_140);
    plVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (uVar9 = FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        uVar9 = FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_128 != '\0') && (local_130 != (int64_t *)0x0)) {
      uVar9 = FUN_00d50b20();
    }
    if ((local_138 != '\0') && (local_140 != 0)) {
      uVar9 = FUN_00d50b20();
    }
    if (plVar2 != (int64_t *)0x0) {
      local_38 = '\0';
      local_40 = plVar2;
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar9 = FUN_00d50b20();
    }
  }
  FUN_00083b20();
  uVar9 = (**(code **)(*this_ptr + 0x398))();
  if (local_70 == 0) {
    local_108 = '\0';
    lVar7 = this_ptr[8];
    local_110 = puVar3;
    if (lVar7 != 0) {
      uVar9 = FUN_00d50b00();
    }
    local_f8 = '\x01';
    local_100 = lVar7;
    FUN_00d95130(uVar9,&local_100);
    bVar8 = false;
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    if ((local_108 != '\0') && (local_110 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar9 = (**(code **)(*this_ptr + 0x398))();
    local_118 = '\0';
    local_120 = puVar3;
    (**(code **)(*local_40 + 0x388))(uVar9,&local_120);
    bVar8 = local_70 != 0;
    if (bVar8) {
      FUN_00d50b00();
    }
    if ((local_118 != '\0') && (local_120 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_025795a8;
  (*g_025795c0)();
  (**(code **)(*(int64_t *)*arg1 + 0x370))();
  if (local_70 != 0) {
    FUN_00d50b00();
  }
  FUN_00d8dbf0();
  if (local_70 != 0) {
    FUN_00d50b20();
  }
  FUN_00e12970();
  FUN_00e12990();
  FUN_00e12970();
  FUN_00e7b4e0();
  local_f0 = local_70;
  local_e8 = '\0';
  FUN_00d8e100(local_70,&local_f0);
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  local_d8 = '\0';
  local_e0 = puVar5;
  (**(code **)(*(int64_t *)*arg1 + 0x368))();
  if ((local_d8 != '\0') && (local_e0 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if ((bVar8) && (local_70 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  FUN_00d50b20();
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (puVar3 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

