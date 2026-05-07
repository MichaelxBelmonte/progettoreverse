// Function: FUN_00e063c0
// Address: 00e063c0
// Size: 2394 bytes
// Class: GNDistinction
// String references:
//   "Duration: %f ms"
//   "\tVendor: %s"
//   "\tBrand: %s"
//   "\tSignature: Stepping: %I, Model: %I: Family: %I"

void FUN_00e063c0(void)

{
  int64_t lVar1;
  uint *puVar2;
  void*puVar3;
  uint uVar4;
  void*puVar5;
  int64_t lVar6;
  int iVar7;
  void*puVar8;
  int64_t lVar9;
  uint uVar10;
  char cVar11;
  byte bVar12;
  int64_t *arg1;
  byte bVar13;
  int64_t lVar14;
  uint64_t uVar15;
  byte bVar16;
  int64_t *plVar17;
  void*puVar18;
  int64_t *plVar19;
  double dVar20;
  uint64_t uVar21;
  double local_1b8;
  void*local_190;
  char local_188;
  void*local_170;
  uint local_168;
  uint32_t local_164;
  int64_t *local_160;
  void*local_158;
  char local_150;
  void*local_148;
  uint local_140;
  byte local_13c;
  byte local_13b;
  byte local_13a;
  int64_t local_138;
  uint local_130;
  uint8_t local_12c;
  int64_t alStack_128 [4];
  uint8_t auStack_108 [208];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  FUN_00d8ede0();
  lVar6 = local_138;
  if (((char)local_130 == '\0') && (local_138 != 0)) {
    FUN_00d50b00();
    if (((char)local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = *arg1;
  if (lVar1 == 0) {
    puVar8 = (void*)0x0;
  }
  else {
    puVar8 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &g_02572358;
    (*g_02572370)();
    lVar9 = g_027850d0;
    if (g_027850d0 != 0) {
      FUN_00d50b00();
    }
    local_138 = lVar9;
    local_130 = local_130 & 0xffffff00;
    FUN_00d21140();
    if (((char)local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
    local_1b8 = (double)FUN_00e7d6f0();
  }
  lVar9 = cpuid_basic_info(0);
  local_138 = *(int64_t *)(lVar9 + 4);
  local_130 = *(void*)(lVar9 + 0xc);
  local_12c = 0;
  if (*arg1 != 0) {
    local_168 = 1;
    local_170 = &g_026ba3d0;
    local_160 = &local_138;
    FUN_00d8cb40(local_130,&local_170);
    puVar3 = local_148;
    if ((char)local_140 == '\0') {
      if (local_148 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_140 = local_140 & 0xffffff00;
    }
    local_158 = puVar3;
    local_150 = '\0';
    FUN_00d21140();
    if ((local_150 != '\0') && (local_158 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar3 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_140 != '\0') && (local_148 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  iVar7 = FUN_00e7dde0();
  lVar9 = (int64_t)iVar7;
  plVar19 = (int64_t *)((int64_t)&local_138 + lVar9);
  puVar2 = (uint *)cpuid(0x80000000);
  if (((-1 < (int)*puVar2) || (*puVar2 < 0x80000004)) || (0xf4U - iVar7 < 2)) {
    *(void*)plVar19 = 0;
    goto LAB_00e0662c;
  }
  lVar14 = (int64_t)(int)(0xf4U - iVar7);
  uVar15 = lVar14 - 1;
  puVar3 = (void*)cpuid_brand_part1_info(0x80000002);
  local_170 = (void*)*puVar3;
  local_164 = *(void*)(puVar3 + 1);
  local_168 = *(uint *)((int64_t)puVar3 + 0xc);
  plVar17 = plVar19;
  if (uVar15 < 0x11) {
LAB_00e067c8:
    uVar21 = FUN_00e7dbc0(local_168,uVar15);
    puVar18 = (void*)((int64_t)plVar17 + uVar15);
  }
  else {
    FUN_00e7dbc0(local_168,0x10);
    uVar15 = lVar14 - 0x11;
    plVar17 = (int64_t *)((int64_t)alStack_128 + lVar9);
    puVar3 = (void*)cpuid_brand_part2_info(0x80000003);
    local_170 = (void*)*puVar3;
    local_164 = *(void*)(puVar3 + 1);
    local_168 = *(uint *)((int64_t)puVar3 + 0xc);
    if (uVar15 < 0x11) goto LAB_00e067c8;
    FUN_00e7dbc0(local_168,0x10);
    uVar15 = lVar14 - 0x21;
    plVar17 = (int64_t *)((int64_t)alStack_128 + lVar9 + 0x10);
    puVar3 = (void*)cpuid_brand_part3_info(0x80000004);
    local_170 = (void*)*puVar3;
    local_164 = *(void*)(puVar3 + 1);
    local_168 = *(uint *)((int64_t)puVar3 + 0xc);
    if (uVar15 < 0x11) goto LAB_00e067c8;
    uVar21 = FUN_00e7dbc0(local_168,0x10);
    puVar18 = auStack_108 + lVar9;
  }
  *puVar18 = 0;
  if (*arg1 != 0) {
    local_168 = 1;
    local_170 = &g_026ba3d0;
    local_160 = plVar19;
    FUN_00d8cb40(uVar21,&local_170);
    puVar3 = local_148;
    if ((char)local_140 == '\0') {
      if (local_148 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_140 = local_140 & 0xffffff00;
    }
    local_158 = puVar3;
    local_150 = '\0';
    FUN_00d21140();
    if ((local_150 != '\0') && (local_158 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar3 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_140 != '\0') && (local_148 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  iVar7 = FUN_00e7dde0();
  plVar19 = (int64_t *)((int64_t)plVar19 + (int64_t)iVar7);
LAB_00e0662c:
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = *puVar2;
  bVar13 = (byte)uVar4 & 0xf;
  bVar12 = 0;
  if ((~uVar4 & 0xf00) == 0) {
    bVar12 = (byte)(uVar4 >> 0x10) & 0xf;
  }
  bVar12 = bVar12 + ((byte)(uVar4 >> 4) & 0xf);
  uVar10 = uVar4 >> 8 & 0xf;
  bVar16 = (char)(uVar4 >> 0x14) + 0xf;
  if (uVar10 != 0xf) {
    bVar16 = (byte)uVar10;
  }
  lVar9 = 0;
  if (*arg1 != 0) {
    local_140 = 3;
    local_148 = (void*)&g_02585ac0;
    local_13c = bVar13;
    local_13b = bVar12;
    local_13a = bVar16;
    FUN_00d8cb40(uVar10,&local_148);
    puVar3 = local_158;
    if (local_150 == '\0') {
      if (local_158 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_150 = '\0';
    }
    local_170 = puVar3;
    local_168 = local_168 & 0xffffff00;
    FUN_00d21140();
    if (((char)local_168 != '\0') && (local_170 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar3 != (void*)0x0) {
      FUN_00d50b20();
    }
    if ((local_150 != '\0') && (local_158 != (void*)0x0)) {
      FUN_00d50b20();
    }
    lVar9 = *arg1;
  }
  cVar11 = bVar13 + 0x30;
  if (9 < bVar13) {
    cVar11 = bVar13 + 0x37;
  }
  *(void*)plVar19 = 0x30;
  *(char *)((int64_t)plVar19 + 1) = cVar11;
  bVar13 = (bVar12 & 0xf) + 0x37;
  if ((bVar12 & 0xf) < 10) {
    bVar13 = bVar12 | 0x30;
  }
  *(byte *)((int64_t)plVar19 + 2) = bVar12 >> 4 | 0x30;
  *(byte *)((int64_t)plVar19 + 3) = bVar13;
  bVar12 = bVar16 >> 4 | 0x30;
  if (0x9f < bVar16) {
    bVar12 = (bVar16 >> 4) + 0x37;
  }
  *(byte *)((int64_t)plVar19 + 4) = bVar12;
  bVar16 = bVar16 & 0xf;
  cVar11 = bVar16 + 0x30;
  if (9 < bVar16) {
    cVar11 = bVar16 + 0x37;
  }
  *(char *)((int64_t)plVar19 + 5) = cVar11;
  *(void*)((int64_t)plVar19 + 6) = 0;
  FUN_00e07210(0x31,0x30,&local_138,lVar9 != 0);
  puVar3 = local_170;
  if (((char)local_168 == '\0') && (local_170 != (void*)0x0)) {
    FUN_00d50b00();
  }
  local_168 = local_168 & 0xffffff00;
  local_170 = puVar3;
  FUN_00d21140();
  if (((char)local_168 != '\0') && (local_170 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (*arg1 != 0) {
    dVar20 = (double)FUN_00e7d6f0();
    local_160 = (int64_t *)((dVar20 - local_1b8) * g_023907c0);
    local_168 = 1;
    local_170 = (void*)&g_024de5e0;
    FUN_00d8cb40(local_160,&local_170);
    puVar5 = local_148;
    if ((char)local_140 == '\0') {
      if (local_148 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_140 = local_140 & 0xffffff00;
    }
    local_158 = puVar5;
    local_150 = '\0';
    FUN_00d21140();
    if ((local_150 != '\0') && (local_158 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar5 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_140 != '\0') && (local_148 != (void*)0x0)) {
      FUN_00d50b20();
    }
    uVar21 = FUN_00d92220();
    local_190 = local_148;
    local_188 = 0;
    if ((char)local_140 == '\0') {
      if (local_148 != (void*)0x0) {
        uVar21 = FUN_00d50b00();
      }
    }
    else {
      local_140 = local_140 & 0xffffff00;
    }
    local_188 = '\x01';
    FUN_00d95130(uVar21,&local_190);
    puVar5 = local_158;
    if (local_150 == '\0') {
      if (local_158 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_150 = '\0';
    }
    local_170 = puVar5;
    local_168 = local_168 & 0xffffff00;
    FUN_00d21140();
    if (((char)local_168 != '\0') && (local_170 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar5 != (void*)0x0) {
      FUN_00d50b20();
    }
    if ((local_150 != '\0') && (local_158 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_188 != '\0') && (local_190 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_140 != '\0') && (local_148 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  if (puVar3 != (void*)0x0) {
    FUN_00d50b20();
  }
  if ((lVar1 != 0) && (puVar8 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return;
}

