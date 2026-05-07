// Function: FUN_017b31f0
// Address: 017b31f0
// Size: 1036 bytes
// Class: GNList
// String references:
//   "%@/%@"
//   "scale not found: %@"
//   "parse error on loading scale: %@"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_017b31f0(void)

{
  int64_t lVar1;
  char cVar2;
  int64_t lVar3;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t unaff_R13;
  uint64_t uVar4;
  void*puVar5;
  int64_t local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  void*local_88;
  char local_80;
  void*local_78;
  uint local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  uint local_34;
  
  cVar2 = (**(code **)(*(int64_t *)*arg1 + 0x398))();
  lVar1 = g_027d2ae0;
  if (cVar2 == '\0') {
    if (g_027d2ae0 != 0) {
      FUN_00d50b00();
    }
    local_b8 = lVar1;
    local_b0 = '\x01';
    (**(code **)(*(int64_t *)*arg1 + 0x368))();
    local_68 = local_48;
    local_70 = 1;
    local_78 = &g_024c5048;
    local_60 = 0;
    if (local_48 != 0) {
      FUN_00d50b00();
    }
    local_60 = '\x01';
    FUN_00cc7b40();
    local_78 = &g_024c5048;
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
  }
  local_a8 = *arg1;
  local_a0 = '\0';
  FUN_00ca94c0();
  puVar5 = local_78;
  if (local_78 == (void*)0x0) {
    uVar4 = CONCAT71((int7)((uint64_t)unaff_R13 >> 8),1);
    puVar5 = (void*)0x0;
  }
  else {
    if ((char)local_70 == '\0') {
      FUN_00d50b00();
      uVar4 = 0;
      if (((char)local_70 == '\0') || (local_78 == (void*)0x0)) goto LAB_017b333e;
      FUN_00d50b20();
    }
    else {
      local_70 = local_70 & 0xffffff00;
    }
    uVar4 = 0;
  }
LAB_017b333e:
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_027d2ae8;
  if ((char)uVar4 != '\0') {
    local_34 = (uint)uVar4;
    if (g_027d2ae8 != 0) {
      FUN_00d50b00();
    }
    local_98 = lVar1;
    local_90 = '\x01';
    (**(code **)(*(int64_t *)*arg1 + 0x368))();
    lVar1 = local_48;
    local_70 = 1;
    local_78 = &g_024c5048;
    local_60 = 0;
    if (local_48 != 0) {
      FUN_00d50b00();
    }
    local_68 = lVar1;
    local_60 = '\x01';
    FUN_00cc7b40();
    local_78 = &g_024c5048;
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    uVar4 = (uint64_t)local_34;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  local_80 = '\0';
  local_88 = puVar5;
  FUN_017b3920();
  if ((local_80 != '\0') && (local_88 != (void*)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x3f0))();
  (**(code **)(*local_d8 + 0x388))();
  (**(code **)(*(int64_t *)*arg1 + 0x388))();
  local_f0 = local_c8;
  FUN_00083ea0(2,&local_f0);
  FUN_00d8cb40();
  lVar1 = *(int64_t *)(this_ptr + 0x60);
  lVar3 = lVar1;
  if (lVar1 == local_48) goto LAB_017b3534;
  if (local_40 == '\0') {
    if (local_48 == 0) {
      lVar3 = 0;
      goto LAB_017b34f2;
    }
    FUN_00d50b00();
    lVar1 = *(int64_t *)(this_ptr + 0x60);
    *(int64_t *)(this_ptr + 0x60) = local_48;
    lVar3 = local_48;
  }
  else {
    local_40 = '\0';
    lVar3 = local_48;
LAB_017b34f2:
    *(int64_t *)(this_ptr + 0x60) = lVar3;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar3 = local_48;
  }
LAB_017b3534:
  if ((local_40 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  local_78 = (void*)&g_0253d630;
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  local_78 = &g_024c5048;
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)uVar4 == '\0' && puVar5 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

