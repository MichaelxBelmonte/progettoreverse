// Function: FUN_01883ac0
// Address: 01883ac0
// Size: 1493 bytes
// Class: GNList
// String references:
//   "GNList"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01883ac0(void)

{
  int64_t lVar1;
  void*puVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  int64_t *plVar8;
  void*puVar9;
  int64_t lVar10;
  void*puVar11;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_70;
  char local_68 [8];
  void*local_60;
  int local_58;
  int iStack_54;
  int local_50;
  int64_t local_48;
  char local_40;
  char local_31;
  
  plVar8 = (int64_t *)*arg1;
  if (plVar8 == (int64_t *)0x0) {
    do {
      FUN_00d23340();
      local_48 = CONCAT71(local_48._1_7_,local_68[0]);
      plVar8 = (int64_t *)local_68;
      if (local_68[0] == '\0') {
        plVar8 = &local_48;
      }
      *(void*)plVar8 = 0;
      if ((local_68[0] != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((char)local_48 == '\0') {
        if (local_70 == 0) {
          return;
        }
        FUN_00d50b00();
      }
      else if (local_70 == 0) {
        return;
      }
      FUN_01883960();
      FUN_00d50b20();
    } while( true );
  }
  if ((g_027048b0 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    g_026cd478 = FUN_00d4fe50();
    g_026cd460 = "GNList";
    g_026cd468 = 0x20;
    g_026cd470 = FUN_00018210;
    g_026cd480 = 0;
    ram_00000000026cd488 = 0;
    g_026cd490 = 0;
    g_026cd508 = 0;
    ram_00000000026cd510 = 0;
    g_026cd518 = 0;
    g_026cd51a = 6;
    g_026cd498 = 0;
    ram_00000000026cd4a0 = 0;
    g_026cd4a8 = 0;
    ram_00000000026cd4b0 = 0;
    g_026cd4b8 = 0;
    ram_00000000026cd4c0 = 0;
    g_026cd4c8 = 0;
    ram_00000000026cd4d0 = 0;
    g_026cd4d8 = 0;
    ram_00000000026cd4e0 = 0;
    g_026cd4e8 = 0;
    ram_00000000026cd4f0 = 0;
    g_026cd4f8 = 0;
    ram_00000000026cd500 = 0;
    g_026cd523 = 0;
    g_026cd51b = 0;
    ___cxa_guard_release();
  }
  (**(code **)(*plVar8 + 0x360))();
  cVar6 = FUN_00e85ea0();
  if (cVar6 == '\0') {
LAB_01883b23:
    arg1 = &g_02802688;
  }
  else {
    FUN_011b7780();
    cVar6 = FUN_00e8da30();
    if (cVar6 == '\0') goto LAB_01883b23;
  }
  lVar10 = *arg1;
  local_31 = (char)arg1[1];
  if ((local_31 == '\0') || (lVar10 == 0)) {
    if (lVar10 == 0) {
      return;
    }
  }
  else {
    FUN_00d50b00();
  }
  puVar9 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &g_02572358;
  pcVar5 = g_02572370;
  (*g_02572370)();
  local_68[0] = 0;
  local_58 = -1;
  iStack_54 = 0;
  local_50 = 0;
  local_60 = (void*)lVar10;
  while( true ) {
    if (iStack_54 != 0) {
      if (iStack_54 < 1) {
        iStack_54 = -iStack_54;
      }
      else {
        local_58 = local_58 - iStack_54;
        FUN_00d23690();
        local_50 = local_50 + iStack_54;
        iStack_54 = 0;
      }
    }
    lVar10 = (int64_t)local_58;
    local_58 = local_58 + 1;
    if (*(int *)((int64_t)local_60 + 0xc) <= local_58) break;
    lVar10 = *(int64_t *)(*(int64_t *)((int64_t)local_60 + 0x10) + 8 + lVar10 * 8);
    lVar1 = *(int64_t *)(this_ptr + 0x50);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_40 = '\0';
    local_48 = lVar10;
    cVar6 = FUN_00d23d70();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (cVar6 == '\0') {
      local_40 = '\0';
      local_48 = lVar10;
      FUN_00d21140();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_01894e00();
  puVar11 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar11 = &g_02572358;
  (*pcVar5)();
  puVar2 = *(void**)(this_ptr + 0x50);
  if (puVar2 != (void*)0x0) {
    FUN_00d50b00();
    local_68[0] = 0;
    local_58 = -1;
    iStack_54 = 0;
    local_50 = 0;
    local_60 = puVar2;
    while( true ) {
      if (iStack_54 != 0) {
        if (iStack_54 < 1) {
          iStack_54 = -iStack_54;
        }
        else {
          local_58 = local_58 - iStack_54;
          FUN_00d23690();
          local_50 = local_50 + iStack_54;
          iStack_54 = 0;
        }
      }
      lVar10 = (int64_t)local_58;
      local_58 = local_58 + 1;
      if (*(int *)((int64_t)local_60 + 0xc) <= local_58) break;
      lVar10 = *(int64_t *)(local_60[2] + 8 + lVar10 * 8);
      local_40 = '\0';
      local_48 = lVar10;
      cVar6 = FUN_00d23d70();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (cVar6 == '\0') {
        local_40 = '\0';
        local_48 = lVar10;
        FUN_00d21140();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_01894e00();
    FUN_00d50b20();
    if (puVar11 == (void*)0x0) {
      bVar3 = true;
      bVar4 = true;
      goto joined_r0x01883f49;
    }
  }
  local_68[0] = 0;
  local_58 = -1;
  iStack_54 = 0;
  local_50 = 0;
  local_60 = puVar11;
  while (local_58 = local_58 + 1, local_58 < *(int *)((int64_t)local_60 + 0xc)) {
    FUN_01883960();
    if (iStack_54 != 0) {
      if (iStack_54 < 1) {
        iStack_54 = -iStack_54;
      }
      else {
        local_58 = local_58 - iStack_54;
        FUN_00d23690();
        local_50 = local_50 + iStack_54;
        iStack_54 = 0;
      }
    }
  }
  FUN_01894e00();
  bVar3 = false;
  bVar4 = false;
joined_r0x01883f49:
  if (puVar9 != (void*)0x0) {
    local_68[0] = 0;
    iStack_54 = 0;
    local_50 = 0;
    local_60 = puVar9;
    for (iVar7 = 0; local_58 = iVar7, iVar7 < *(int *)((int64_t)puVar9 + 0xc); iVar7 = iVar7 + 1) {
      FUN_018836f0();
    }
    FUN_01894e00();
    bVar3 = bVar4;
  }
  if (!bVar3) {
    FUN_00d50b20();
  }
  if (puVar9 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_31 != '\0') {
    FUN_00d50b20();
  }
  return;
}

