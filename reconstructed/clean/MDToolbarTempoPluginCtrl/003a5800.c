// Function: FUN_003a5800
// Address: 003a5800
// Size: 3044 bytes
// Class: MDToolbarTempoPluginCtrl

void FUN_003a5800(void)

{
  int64_t lVar1;
  int64_t lVar2;
  byte bVar3;
  uint64_t uVar4;
  void*puVar5;
  int64_t *plVar6;
  void*puVar7;
  int64_t lVar8;
  int64_t this_ptr;
  double dVar9;
  uint64_t uVar10;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  code *local_70;
  void*local_68;
  int64_t local_60;
  char local_58;
  void*local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0xa0) == 0) {
    return;
  }
  FUN_01d77960();
  lVar1 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = g_026d8938;
  if (lVar1 == 0) {
    return;
  }
  if (g_026d8938 != 0) {
    FUN_00d50b00();
  }
  dVar9 = (double)FUN_00e7d6f0();
  uVar4 = (uint64_t)(dVar9 * g_023907c0);
  dVar9 = dVar9 * g_023907c0 - g_023907c8;
  uVar10 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != 0)) && (uVar10 = FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    uVar10 = FUN_00d50b20();
  }
  bVar3 = (byte)(((int64_t)dVar9 & (int64_t)uVar4 >> 0x3f | uVar4) / 3);
  local_80 = lVar2;
  local_78 = '\0';
  FUN_000175c0(uVar10,&local_80);
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    local_38 = '\0';
    local_40 = lVar1;
    bVar3 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_027050b8;
  if ((lVar1 != 0 & bVar3) != 0) {
    if (*(int64_t *)(this_ptr + 0xb0) == 0) {
      return;
    }
    if (*(int64_t *)(this_ptr + 0xb8) != 0) {
      FUN_01d77960();
      local_98 = 0;
      local_a0 = *(int64_t *)(this_ptr + 0xb8);
      if (local_a0 != 0) {
        FUN_00d50b00();
      }
      local_98 = '\x01';
      FUN_01d5dde0();
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    uVar10 = FUN_01d77960();
    local_c0 = 0;
    local_c8 = *(int64_t *)(this_ptr + 0xb0);
    if (local_c8 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_c0 = '\x01';
    FUN_01d5d7f0(uVar10,1);
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (*(int64_t *)(this_ptr + 0xb0) != 0) {
      *(void*)(this_ptr + 0xb0) = 0;
      FUN_00d50b20();
    }
    if (*(int64_t *)(this_ptr + 0xb8) == 0) {
      return;
    }
    *(void*)(this_ptr + 0xb8) = 0;
    FUN_00d50b20();
    return;
  }
  if (*(int64_t *)(this_ptr + 0xb0) != 0) {
    return;
  }
  if (g_027050b8 != 0) {
    FUN_00d50b00();
  }
  local_a8 = lVar2;
  uVar10 = FUN_01d77960();
  local_128 = lVar2;
  local_120 = '\0';
  FUN_01d5e6e0(uVar10,&local_128);
  lVar1 = *(int64_t *)(this_ptr + 0xb0);
  lVar8 = lVar1;
  if (lVar1 == local_40) goto LAB_003a5bc3;
  if (local_38 == '\0') {
    if (local_40 == 0) {
      lVar8 = 0;
      goto LAB_003a5b75;
    }
    FUN_00d50b00();
    lVar1 = *(int64_t *)(this_ptr + 0xb0);
    *(int64_t *)(this_ptr + 0xb0) = local_40;
    lVar8 = local_40;
  }
  else {
    local_38 = '\0';
    lVar8 = local_40;
LAB_003a5b75:
    *(int64_t *)(this_ptr + 0xb0) = lVar8;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar8 = local_40;
  }
LAB_003a5bc3:
  if ((local_38 != '\0') && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0xb0) != 0) {
    FUN_01d77960();
    local_118 = lVar2;
    local_110 = '\0';
    FUN_01d5e640();
    if ((local_110 != '\0') && (local_118 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  local_68 = &g_026846d0;
  *puVar5 = &g_026846d0;
  puVar5[2] = &g_02684a60;
  *(void*)(puVar5 + 3) = 0;
  *(void*)((int64_t)puVar5 + 0x1c) = 0;
  *(void*)((int64_t)puVar5 + 0x24) = 0;
  *(void*)((int64_t)puVar5 + 0x2c) = 0;
  *(void*)((int64_t)puVar5 + 0x34) = 0;
  *(void*)((int64_t)puVar5 + 0x3a) = 0;
  *(void*)((int64_t)puVar5 + 0x42) = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  *(void*)(puVar5 + 0xe) = 0;
  local_70 = g_026846e8;
  (*g_026846e8)();
  puVar7 = *(void**)(this_ptr + 0xb8);
  if (puVar7 == puVar5) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0xb8) = puVar5;
    if (puVar7 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  lVar1 = g_027296a0;
  if (g_027296a0 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_027050c0;
  local_108 = lVar1;
  local_100 = '\x01';
  if (g_027050c0 != 0) {
    FUN_00d50b00();
  }
  local_f8 = lVar2;
  local_f0 = '\x01';
  local_e8 = 0;
  local_e0 = '\0';
  FUN_00d31230(&local_e8,&local_f8);
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
  FUN_01d64eb0();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_001d7da0();
  (**(code **)(*plVar6 + 0x18))();
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = local_68;
  puVar7[2] = &g_02684a60;
  *(void*)(puVar7 + 3) = 0;
  *(void*)((int64_t)puVar7 + 0x1c) = 0;
  *(void*)((int64_t)puVar7 + 0x24) = 0;
  *(void*)((int64_t)puVar7 + 0x2c) = 0;
  *(void*)((int64_t)puVar7 + 0x34) = 0;
  *(void*)((int64_t)puVar7 + 0x3a) = 0;
  *(void*)((int64_t)puVar7 + 0x42) = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0;
  *(void*)(puVar7 + 0xe) = 0;
  (*local_70)();
  local_60 = g_027050c8;
  if (g_027050c8 != 0) {
    FUN_00d50b00();
  }
  local_58 = '\x01';
  FUN_01d65120();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d65490();
  local_48 = '\0';
  local_50 = puVar7;
  FUN_01d5d8d0();
  if ((local_48 != '\0') && (local_50 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = local_68;
  puVar7[2] = &g_02684a60;
  *(void*)(puVar7 + 3) = 0;
  *(void*)((int64_t)puVar7 + 0x1c) = 0;
  *(void*)((int64_t)puVar7 + 0x24) = 0;
  *(void*)((int64_t)puVar7 + 0x2c) = 0;
  *(void*)((int64_t)puVar7 + 0x34) = 0;
  *(void*)((int64_t)puVar7 + 0x3a) = 0;
  *(void*)((int64_t)puVar7 + 0x42) = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0;
  *(void*)(puVar7 + 0xe) = 0;
  (*local_70)();
  lVar1 = g_027050c8;
  if (g_027050c8 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar1;
  local_58 = '\x01';
  FUN_01d65120();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d65490();
  local_48 = '\0';
  local_50 = puVar7;
  FUN_01d5d8d0();
  if ((local_48 != '\0') && (local_50 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = local_68;
  puVar7[2] = &g_02684a60;
  *(void*)(puVar7 + 3) = 0;
  *(void*)((int64_t)puVar7 + 0x1c) = 0;
  *(void*)((int64_t)puVar7 + 0x24) = 0;
  *(void*)((int64_t)puVar7 + 0x2c) = 0;
  *(void*)((int64_t)puVar7 + 0x34) = 0;
  *(void*)((int64_t)puVar7 + 0x3a) = 0;
  *(void*)((int64_t)puVar7 + 0x42) = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0;
  *(void*)(puVar7 + 0xe) = 0;
  (*local_70)();
  lVar1 = g_027050c8;
  if (g_027050c8 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar1;
  local_58 = '\x01';
  FUN_01d65120();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d65490();
  local_48 = '\0';
  local_50 = puVar7;
  FUN_01d5d8d0();
  if ((local_48 != '\0') && (local_50 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = local_68;
  puVar7[2] = &g_02684a60;
  *(void*)(puVar7 + 3) = 0;
  *(void*)((int64_t)puVar7 + 0x1c) = 0;
  *(void*)((int64_t)puVar7 + 0x24) = 0;
  *(void*)((int64_t)puVar7 + 0x2c) = 0;
  *(void*)((int64_t)puVar7 + 0x34) = 0;
  *(void*)((int64_t)puVar7 + 0x3a) = 0;
  *(void*)((int64_t)puVar7 + 0x42) = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0;
  *(void*)(puVar7 + 0xe) = 0;
  (*local_70)();
  lVar1 = g_027050c8;
  if (g_027050c8 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar1;
  local_58 = '\x01';
  FUN_01d65120();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d65490();
  local_48 = '\0';
  local_50 = puVar7;
  FUN_01d5d8d0();
  if ((local_48 != '\0') && (local_50 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = local_68;
  puVar7[2] = &g_02684a60;
  *(void*)(puVar7 + 3) = 0;
  *(void*)((int64_t)puVar7 + 0x1c) = 0;
  *(void*)((int64_t)puVar7 + 0x24) = 0;
  *(void*)((int64_t)puVar7 + 0x2c) = 0;
  *(void*)((int64_t)puVar7 + 0x34) = 0;
  *(void*)((int64_t)puVar7 + 0x3a) = 0;
  *(void*)((int64_t)puVar7 + 0x42) = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0;
  *(void*)(puVar7 + 0xe) = 0;
  (*local_70)();
  lVar1 = g_027050c8;
  if (g_027050c8 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar1;
  local_58 = '\x01';
  FUN_01d65120();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d65490();
  local_48 = '\0';
  local_50 = puVar7;
  FUN_01d5d8d0();
  if ((local_48 != '\0') && (local_50 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = local_68;
  puVar7[2] = &g_02684a60;
  *(void*)(puVar7 + 3) = 0;
  *(void*)((int64_t)puVar7 + 0x1c) = 0;
  *(void*)((int64_t)puVar7 + 0x24) = 0;
  *(void*)((int64_t)puVar7 + 0x2c) = 0;
  *(void*)((int64_t)puVar7 + 0x34) = 0;
  *(void*)((int64_t)puVar7 + 0x3a) = 0;
  *(void*)((int64_t)puVar7 + 0x42) = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0;
  *(void*)(puVar7 + 0xe) = 0;
  (*local_70)();
  lVar1 = g_027050c8;
  if (g_027050c8 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar1;
  local_58 = '\x01';
  FUN_01d65120();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d65490();
  local_48 = '\0';
  local_50 = puVar7;
  FUN_01d5d8d0();
  if ((local_48 != '\0') && (local_50 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  local_d0 = '\0';
  local_d8 = plVar6;
  FUN_01d654e0();
  if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar10 = FUN_01d77960();
  local_b0 = 0;
  local_b8 = *(int64_t *)(this_ptr + 0xb8);
  if (local_b8 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_b0 = '\x01';
  FUN_01d5d7f0(uVar10,1);
  lVar1 = local_a8;
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}

