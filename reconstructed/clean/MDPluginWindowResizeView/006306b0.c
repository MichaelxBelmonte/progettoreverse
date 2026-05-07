// Function: FUN_006306b0
// Address: 006306b0
// Size: 1539 bytes
// Class: MDPluginWindowResizeView

void FUN_006306b0(void)

{
  code *pcVar1;
  int64_t lVar2;
  int64_t lVar3;
  byte bVar4;
  uint uVar5;
  void*puVar6;
  uint64_t uVar7;
  int64_t this_ptr;
  uint64_t uVar8;
  uint64_t uVar9;
  double dVar10;
  void*local_a0;
  char local_98;
  void*local_90;
  char local_88;
  void*local_80;
  char local_78;
  void*local_70;
  char local_68;
  uint64_t local_60;
  uint64_t local_58;
  char local_50;
  void*local_48;
  int64_t local_40;
  char local_38;
  
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  pcVar1 = g_02572370;
  local_48 = puVar6;
  (*g_02572370)();
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  (*pcVar1)();
  uVar8 = g_026e1800;
  if (g_026e1800 != 0) {
    FUN_00d50b00();
  }
  local_60 = uVar8;
  FUN_00e7d6f0();
  uVar9 = FUN_0071a120();
  if ((local_38 == '\0') && (local_40 != 0)) {
    uVar9 = FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != 0)) {
      uVar9 = FUN_00d50b20();
    }
  }
  local_58 = uVar8;
  local_50 = '\0';
  FUN_000175c0(uVar9,&local_58);
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    local_38 = '\0';
    local_40 = lVar3;
    uVar5 = FUN_00c70bc0();
    uVar8 = (uint64_t)uVar5;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_027259d0;
  if (((lVar3 != 0 & (byte)uVar8) == 0) || (*(int64_t *)(this_ptr + 0x80) != 0)) {
    if (g_027259d0 != 0) {
      FUN_00d50b00();
    }
    local_40 = lVar2;
    local_38 = '\0';
    FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  uVar8 = g_02708e90;
  if (g_02708e90 != 0) {
    FUN_00d50b00();
  }
  dVar10 = (double)FUN_00e7d6f0();
  uVar7 = (uint64_t)(dVar10 * g_023907c0);
  dVar10 = dVar10 * g_023907c0 - g_023907c8;
  uVar9 = FUN_0071a120();
  if ((local_38 == '\0') && (local_40 != 0)) {
    uVar9 = FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != 0)) {
      uVar9 = FUN_00d50b20();
    }
  }
  bVar4 = (byte)(((int64_t)dVar10 & (int64_t)uVar7 >> 0x3f | uVar7) / 3);
  local_58 = uVar8;
  local_50 = '\0';
  FUN_000175c0(uVar9,&local_58);
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    local_38 = '\0';
    local_40 = lVar3;
    bVar4 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  uVar9 = FUN_00d50b20();
  if (uVar8 != 0) {
    uVar9 = FUN_00d50b20();
  }
  lVar2 = g_026fba80;
  if ((lVar3 != 0 & bVar4) != 0) {
    if (g_026fba80 != 0) {
      FUN_00d50b00();
    }
    local_40 = lVar2;
    local_38 = '\0';
    FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar3 = g_026fba80;
    if (g_026fba80 != 0) {
      FUN_00d50b00();
    }
    local_40 = lVar3;
    local_38 = '\0';
    FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = g_027259d0;
    if (g_027259d0 != 0) {
      FUN_00d50b00();
    }
    local_40 = lVar3;
    local_38 = '\0';
    uVar9 = FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != 0)) {
      uVar9 = FUN_00d50b20();
    }
    if (lVar3 != 0) {
      uVar9 = FUN_00d50b20();
    }
  }
  lVar3 = g_026fce40;
  if ((*(int64_t *)(this_ptr + 0x80) != 0) &&
     (*(int64_t *)(*(int64_t *)(this_ptr + 0x80) + 0x308) != 0)) {
    if (g_026fce40 != 0) {
      FUN_00d50b00();
    }
    local_40 = lVar3;
    local_38 = '\0';
    FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = g_026fce40;
    if (g_026fce40 != 0) {
      FUN_00d50b00();
    }
    local_40 = lVar3;
    local_38 = '\0';
    uVar9 = FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != 0)) {
      uVar9 = FUN_00d50b20();
    }
    if (lVar3 != 0) {
      uVar9 = FUN_00d50b20();
    }
  }
  if (*(int64_t *)(this_ptr + 0xc0) != 0) {
    local_a0 = local_48;
    local_98 = '\0';
    uVar9 = FUN_0009ea90(uVar9,&local_a0);
    if ((local_98 != '\0') && (local_a0 != (void*)0x0)) {
      uVar9 = FUN_00d50b20();
    }
    local_88 = '\0';
    local_90 = puVar6;
    uVar9 = FUN_0009ea90(uVar9,&local_90);
    if ((local_88 != '\0') && (local_90 != (void*)0x0)) {
      uVar9 = FUN_00d50b20();
    }
  }
  if (*(int64_t *)(this_ptr + 200) != 0) {
    local_80 = local_48;
    local_78 = '\0';
    uVar9 = FUN_0009ea90(uVar9,&local_80);
    if ((local_78 != '\0') && (local_80 != (void*)0x0)) {
      uVar9 = FUN_00d50b20();
    }
    local_68 = '\0';
    local_70 = puVar6;
    FUN_0009ea90(uVar9,&local_70);
    if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  FUN_00d50b20();
  return;
}

