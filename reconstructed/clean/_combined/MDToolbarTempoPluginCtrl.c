// ===================================================================
// MDToolbarTempoPluginCtrl — Complete reconstructed pseudocode
// 4 functions
// ===================================================================


// ============================================================
// 003a5800
// ============================================================
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



// ============================================================
// 003a6980
// ============================================================
// Function: FUN_003a6980
// Address: 003a6980
// Size: 1506 bytes
// Class: MDToolbarTempoPluginCtrl

void FUN_003a6980(void)

{
  void*puVar1;
  int64_t lVar2;
  void*puVar3;
  int64_t lVar4;
  int64_t this_ptr;
  uint32_t uVar5;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_30;
  char local_28;
  
  FUN_00d50100();
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02576110;
  *(void*)((int64_t)puVar3 + 0xc) = 0;
  *(void*)((int64_t)puVar3 + 0x14) = 0;
  *(void*)((int64_t)puVar3 + 0x1a) = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  (*g_02576128)();
  puVar1 = *(void**)(this_ptr + 0xc0);
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0xc0) = puVar3;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d48ac0();
  FUN_00d50b00();
  local_110 = g_026df590;
  if (g_026df590 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_026d88c8;
  local_108 = '\x01';
  if (g_026d88c8 != 0) {
    FUN_00d50b00();
  }
  local_100 = lVar2;
  local_f8 = '\x01';
  local_f0 = 0;
  local_e8 = '\0';
  uVar5 = FUN_000bf690(&local_100,&local_110,&local_f0);
  lVar2 = *(int64_t *)(this_ptr + 0x80);
  lVar4 = lVar2;
  if (lVar2 != local_30) {
    lVar4 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar4 = 0;
        goto LAB_003a6abb;
      }
      uVar5 = FUN_00d50b00();
      lVar2 = *(int64_t *)(this_ptr + 0x80);
      *(int64_t *)(this_ptr + 0x80) = local_30;
    }
    else {
      local_28 = '\0';
LAB_003a6abb:
      *(int64_t *)(this_ptr + 0x80) = lVar4;
    }
    if (lVar2 != 0) {
      uVar5 = FUN_00d50b20();
      lVar4 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar4 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if (this_ptr != 0) {
    uVar5 = FUN_00d50b20();
  }
  lVar2 = g_026f6d00;
  if (g_026f6d00 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_e0 = lVar2;
  local_d8 = '\x01';
  local_d0 = 0;
  local_c8 = '\0';
  uVar5 = FUN_000bf780(uVar5,&local_d0);
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  lVar2 = g_026d88d0;
  if (g_026d88d0 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_c0 = lVar2;
  local_b8 = '\x01';
  local_b0 = 0;
  local_a8 = '\0';
  FUN_000bf780(uVar5,&local_b0);
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_a0 = g_026d88e0;
  if (g_026d88e0 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_026f6cf0;
  local_98 = '\x01';
  if (g_026f6cf0 != 0) {
    FUN_00d50b00();
  }
  local_90 = lVar2;
  local_88 = '\x01';
  local_80 = 0;
  local_78 = '\0';
  FUN_000bf690(&local_90,&local_a0,&local_80);
  lVar2 = *(int64_t *)(this_ptr + 0x88);
  lVar4 = lVar2;
  if (lVar2 != local_30) {
    lVar4 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar4 = 0;
        goto LAB_003a6d1c;
      }
      FUN_00d50b00();
      lVar2 = *(int64_t *)(this_ptr + 0x88);
      *(int64_t *)(this_ptr + 0x88) = local_30;
    }
    else {
      local_28 = '\0';
LAB_003a6d1c:
      *(int64_t *)(this_ptr + 0x88) = lVar4;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar4 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0xd0) = 0;
  lVar2 = g_027050d0;
  if (g_027050d0 != 0) {
    FUN_00d50b00();
  }
  local_70 = lVar2;
  local_68 = '\x01';
  FUN_01d51a40();
  lVar2 = *(int64_t *)(this_ptr + 0xe0);
  lVar4 = lVar2;
  if (lVar2 != local_30) {
    lVar4 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar4 = 0;
        goto LAB_003a6e1b;
      }
      FUN_00d50b00();
      lVar2 = *(int64_t *)(this_ptr + 0xe0);
      *(int64_t *)(this_ptr + 0xe0) = local_30;
    }
    else {
      local_28 = '\0';
LAB_003a6e1b:
      *(int64_t *)(this_ptr + 0xe0) = lVar4;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar4 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = g_027050d8;
  if (g_027050d8 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar2;
  local_58 = '\x01';
  FUN_01d51a40();
  lVar2 = *(int64_t *)(this_ptr + 0xe8);
  lVar4 = lVar2;
  if (lVar2 == local_30) goto LAB_003a6f14;
  lVar4 = local_30;
  if (local_28 == '\0') {
    if (local_30 == 0) {
      lVar4 = 0;
      goto LAB_003a6ecd;
    }
    FUN_00d50b00();
    lVar2 = *(int64_t *)(this_ptr + 0xe8);
    *(int64_t *)(this_ptr + 0xe8) = local_30;
  }
  else {
    local_28 = '\0';
LAB_003a6ecd:
    *(int64_t *)(this_ptr + 0xe8) = lVar4;
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
    lVar4 = local_30;
  }
LAB_003a6f14:
  if ((local_28 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 003a5120
// ============================================================
// Function: FUN_003a5120
// Address: 003a5120
// Size: 1712 bytes
// Class: MDToolbarTempoPluginCtrl
// String references:
//   "handleTempoChanged"
//   "onUpdatePlaybackController"
//   "onFeatureSetChanged"
//   "handleSynchronizeTempo"
//   "handleSpecifyModificationTempo"
//   "MDToolbarTempoPluginCtrl"

void FUN_003a5120(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_02807f68 = "handleSynchronizeTempo";
      g_02807f70 = &g_02705120;
      g_02807f78 = 0;
      g_02807f80 = &g_027056b0;
      g_02807f88 = FUN_003b1200;
      g_02807f90 = FUN_003a88e0;
      g_02807f98 = 0;
      ram_0000000002807fa0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02807fb0 = "onFeatureSetChanged";
      g_02807fb8 = &g_02705120;
      g_02807fc0 = 0;
      g_02807fc8 = &g_027056b4;
      g_02807fd0 = FUN_003b1290;
      g_02807fd8 = FUN_003a5800;
      g_02807fe0 = 0;
      ram_0000000002807fe8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02807ff8 = "onUpdatePlaybackController";
      g_02808000 = &g_02705120;
      g_02808008 = 0;
      g_02808010 = &g_027056b4;
      g_02808018 = FUN_003b1290;
      g_02808020 = FUN_003a7330;
      g_02808028 = 0;
      ram_0000000002808030 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02808040 = "handleTempoChanged";
      g_02808048 = &g_02705120;
      g_02808050 = 0;
      g_02808058 = &g_027056b0;
      g_02808060 = FUN_003b1200;
      g_02808068 = FUN_003a7cf0;
      g_02808070 = 0;
      ram_0000000002808078 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02808088 = "handleSpecifyModificationTempo";
      g_02808090 = &g_02705120;
      g_02808098 = 0;
      g_028080a0 = &g_027056b0;
      g_028080a8 = FUN_003b1200;
      g_028080b0 = FUN_003ad1d0;
      g_028080b8 = 0;
      ram_00000000028080c0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



// ============================================================
// 0046ba30
// ============================================================
// Function: FUN_0046ba30
// Address: 0046ba30
// Size: 1507 bytes
// Class: MDToolbarTempoPluginCtrl
// String references:
//   "MDToolbarTempoPluginCtrl"

void FUN_0046ba30(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_0005aa20();
  *this_ptr = &g_024f0320;
  FUN_0046c1b0();
  FUN_0046c4a0();
  FUN_0046c790();
  FUN_0046ca80();
  FUN_0046cd70();
  FUN_0046d050();
  FUN_0046d340();
  FUN_0046d630();
  FUN_0046d920();
  FUN_0046dc10();
  FUN_0046df00();
  *(void*)(this_ptr + 0x19) = 0;
  // [STATIC_INIT: property registration]
  if (g_027051db == '\0') {
    FUN_0046e180();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xcc) = 0;
  // [STATIC_INIT: property registration]
  if (g_027051db == '\0') {
    FUN_0046e2f0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x1a) = 0;
  // [STATIC_INIT: property registration]
  if (g_027051db == '\0') {
    FUN_0046e460();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xd1) = 0;
  // [STATIC_INIT: property registration]
  if (g_027051db == '\0') {
    FUN_0046e5d0();
    FUN_00e87980();
  }
  this_ptr[0x1b] = 0;
  // [STATIC_INIT: property registration]
  if (g_027051db == '\0') {
    FUN_0046e740();
    FUN_00e87980();
  }
  FUN_0046e8b0();
  FUN_0046eb30();
  FUN_0046edb0();
  return;
}

