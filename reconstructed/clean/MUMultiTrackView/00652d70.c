// Function: FUN_00652d70
// Address: 00652d70
// Size: 2650 bytes
// Class: MUMultiTrackView
// === MUMultiTrackView properties ===
//   MUFollowCursorState _followCursorState
//   MUMultiTrackDisplayMode _displayMode


void FUN_00652d70(void)

{
  code *pcVar1;
  int64_t lVar2;
  int64_t *plVar3;
  void*puVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  void*puVar8;
  uint64_t uVar9;
  int64_t *this_ptr;
  uint64_t uVar10;
  bool bVar11;
  uint64_t uVar12;
  double dVar13;
  void*local_c0;
  char local_b8;
  void*local_b0;
  char local_a8;
  void*local_a0;
  char local_98;
  void*local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  void*local_70;
  uint64_t local_68;
  void*local_60;
  int64_t *local_58;
  uint64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x5d8))();
  plVar3 = local_40;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00637870();
    plVar3 = local_40;
    if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0')
        ) && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_58 = plVar3;
    puVar8 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &g_02572358;
    pcVar1 = g_02572370;
    (*g_02572370)();
    local_60 = puVar8;
    puVar8 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &g_02572358;
    (*pcVar1)();
    uVar10 = g_026f6fd0;
    local_70 = puVar8;
    if (g_026f6fd0 != 0) {
      FUN_00d50b00();
    }
    local_68 = uVar10;
    FUN_00e7d6f0();
    uVar12 = FUN_0071a120();
    if (((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
       ((uVar12 = FUN_00d50b00(), local_38 != '\0' && (local_40 != (int64_t *)0x0)))) {
      uVar12 = FUN_00d50b20();
    }
    local_50 = uVar10;
    local_48 = '\0';
    FUN_000175c0(uVar12,&local_50);
    plVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      local_38 = '\0';
      local_40 = plVar3;
      uVar7 = FUN_00c70bc0();
      uVar10 = (uint64_t)uVar7;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if (((plVar3 != (int64_t *)0x0 & (byte)uVar10) == 0) && (cVar5 = FUN_00645730(), cVar5 != '\0')
       ) {
      FUN_00645a20();
    }
    uVar10 = g_026e1800;
    if (g_026e1800 != 0) {
      FUN_00d50b00();
    }
    dVar13 = (double)FUN_00e7d6f0();
    uVar9 = (uint64_t)(dVar13 * g_023907c0);
    dVar13 = dVar13 * g_023907c0 - g_023907c8;
    uVar12 = FUN_0071a120();
    if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
        (uVar12 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
    bVar6 = (byte)(((int64_t)dVar13 & (int64_t)uVar9 >> 0x3f | uVar9) / 3);
    local_50 = uVar10;
    local_48 = '\0';
    FUN_000175c0(uVar12,&local_50);
    plVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      local_38 = '\0';
      local_40 = plVar3;
      bVar6 = FUN_00c70bc0();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (uVar10 != 0) {
      FUN_00d50b20();
    }
    if ((plVar3 != (int64_t *)0x0 & bVar6) == 0) {
      cVar5 = FUN_006e2020();
      if (cVar5 != '\0') {
        FUN_006470d0();
        cVar5 = FUN_0063f180();
        if (cVar5 == '\0') {
          FUN_00642f60();
        }
      }
      plVar3 = g_027259d0;
      if (g_027259d0 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_40 = plVar3;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    uVar10 = g_02708e90;
    if (g_02708e90 != 0) {
      FUN_00d50b00();
    }
    dVar13 = (double)FUN_00e7d6f0();
    uVar9 = (uint64_t)(dVar13 * g_023907c0);
    dVar13 = dVar13 * g_023907c0 - g_023907c8;
    uVar12 = FUN_0071a120();
    if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
        (uVar12 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
    bVar6 = (byte)(((int64_t)dVar13 & (int64_t)uVar9 >> 0x3f | uVar9) / 3);
    local_50 = uVar10;
    local_48 = '\0';
    FUN_000175c0(uVar12,&local_50);
    plVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      local_38 = '\0';
      local_40 = plVar3;
      bVar6 = FUN_00c70bc0();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (uVar10 != 0) {
      FUN_00d50b20();
    }
    if ((plVar3 != (int64_t *)0x0 & bVar6) != 0) {
      FUN_01f27fe0();
      cVar5 = (**(code **)(*local_40 + 0x450))();
      if (cVar5 == '\0') {
        bVar11 = *(int64_t *)(this_ptr[0x10] + 0x308) != 0;
      }
      else {
        bVar11 = false;
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar11) {
        FUN_006447a0();
      }
      lVar2 = g_026fba80;
      if (g_026fba80 != 0) {
        FUN_00d50b00();
      }
      local_40 = (int64_t *)lVar2;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_026fba80;
      if (g_026fba80 != 0) {
        FUN_00d50b00();
      }
      local_40 = (int64_t *)lVar2;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      plVar3 = g_027259d0;
      if (g_027259d0 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_40 = plVar3;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    plVar3 = g_026fce40;
    if (this_ptr[0x10] != 0) {
      if (*(int64_t *)(this_ptr[0x10] + 0x308) != 0) {
        if (g_026fce40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_40 = plVar3;
        local_38 = '\0';
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar3 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        plVar3 = g_026fce40;
        if (g_026fce40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_40 = plVar3;
        local_38 = '\0';
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar3 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      plVar3 = g_027259d0;
      if (g_027259d0 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_40 = plVar3;
      local_38 = '\0';
      FUN_00d235a0();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    uVar10 = g_026d85b0;
    if (g_026d85b0 != 0) {
      FUN_00d50b00();
    }
    dVar13 = (double)FUN_00e7d6f0();
    uVar9 = (uint64_t)(dVar13 * g_023907c0);
    dVar13 = dVar13 * g_023907c0 - g_023907c8;
    uVar12 = FUN_0071a120();
    if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
        (uVar12 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
    bVar6 = (byte)(((int64_t)dVar13 & (int64_t)uVar9 >> 0x3f | uVar9) / 3);
    local_50 = uVar10;
    local_48 = '\0';
    FUN_000175c0(uVar12,&local_50);
    plVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      local_38 = '\0';
      local_40 = plVar3;
      bVar6 = FUN_00c70bc0();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (uVar10 != 0) {
      FUN_00d50b20();
    }
    if ((plVar3 != (int64_t *)0x0 & bVar6) == 0) {
      FUN_00644460();
    }
    FUN_00643150();
    uVar12 = FUN_00652bd0();
    plVar3 = local_58;
    puVar4 = local_60;
    puVar8 = local_70;
    if (this_ptr[0x18] != 0) {
      local_c0 = local_60;
      local_b8 = '\0';
      uVar12 = FUN_0009ea90(uVar12,&local_c0);
      if ((local_b8 != '\0') && (local_c0 != (void*)0x0)) {
        uVar12 = FUN_00d50b20();
      }
      local_b0 = puVar8;
      local_a8 = '\0';
      uVar12 = FUN_0009ea90(uVar12,&local_b0);
      if ((local_a8 != '\0') && (local_b0 != (void*)0x0)) {
        uVar12 = FUN_00d50b20();
      }
    }
    if (this_ptr[0x19] != 0) {
      local_a0 = puVar4;
      local_98 = '\0';
      uVar12 = FUN_0009ea90(uVar12,&local_a0);
      if ((local_98 != '\0') && (local_a0 != (void*)0x0)) {
        uVar12 = FUN_00d50b20();
      }
      local_90 = puVar8;
      local_88 = '\0';
      FUN_0009ea90(uVar12,&local_90);
      if ((local_88 != '\0') && (local_90 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    local_78 = '\0';
    local_80 = 0;
    (**(code **)(*this_ptr + 0x668))();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    FUN_00d50b20();
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}

