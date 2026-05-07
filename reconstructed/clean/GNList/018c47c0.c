// Function: FUN_018c47c0
// Address: 018c47c0
// Size: 1232 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_018c47c0(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  void *pvVar3;
  int64_t lVar4;
  void* pVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t local_f0;
  char local_e8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar7 = *(int64_t *)(arg1 + 0xd8);
  if (lVar7 != 0) goto LAB_018c4c57;
  plVar2 = (int64_t *)FUN_00e8fc40();
  FUN_00024e60();
  *plVar2 = (int64_t)&g_025769c8;
  (*g_025769e0)();
  lVar7 = g_027dcf70;
  if (g_027dcf70 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_0277cbb0;
  if (g_0277cbb0 != 0) {
    FUN_00d50b00();
  }
  local_d0 = lVar1;
  local_c8 = '\x01';
  FUN_00d46300();
  local_80 = local_50;
  local_78 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_78 = '\x01';
  FUN_00d14780(&local_80,&local_d0);
  local_90 = local_40;
  local_88 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_88 = '\x01';
  (**(code **)(*plVar2 + 1000))();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  lVar7 = g_027dcf80;
  if (g_027dcf80 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_0277cbb0;
  local_c0 = lVar7;
  local_b8 = '\x01';
  if (g_0277cbb0 != 0) {
    FUN_00d50b00();
  }
  local_b0 = lVar1;
  local_a8 = '\x01';
  FUN_00d46300();
  local_60 = local_50;
  local_58 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_58 = '\x01';
  plVar6 = &local_60;
  FUN_00d14780(plVar6,&local_b0);
  local_70 = local_40;
  pVar5 = (void*)plVar6;
  local_68 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_68 = '\x01';
  (**(code **)(*plVar2 + 1000))();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018c2810();
  local_98 = '\0';
  local_a0 = plVar2;
  FUN_018c5050();
  lVar7 = g_027d3980;
  if (g_027d3980 != 0) {
    FUN_00d50b00();
  }
  FUN_018c50f0(lVar7,FUN_00e8b320);
  lVar1 = *(int64_t *)(arg1 + 0xd8);
  lVar4 = lVar1;
  if (lVar1 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar4 = 0;
        goto LAB_018c4b98;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(arg1 + 0xd8);
      *(int64_t *)(arg1 + 0xd8) = local_40;
      lVar4 = local_40;
    }
    else {
      local_38 = '\0';
      lVar4 = local_40;
LAB_018c4b98:
      *(int64_t *)(arg1 + 0xd8) = lVar4;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar4 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  lVar7 = *(int64_t *)(arg1 + 0xd8);
LAB_018c4c57:
  *(void*)(this_ptr + 1) = 0;
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar7;
  *(void*)(this_ptr + 1) = 1;
  return;
}

