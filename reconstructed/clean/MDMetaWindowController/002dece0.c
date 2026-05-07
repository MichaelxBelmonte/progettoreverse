// Function: FUN_002dece0
// Address: 002dece0
// Size: 2803 bytes
// Class: MDMetaWindowController

void FUN_002dece0(uint64_t param_1)

{
  code *pcVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  void*puVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t lVar9;
  bool bVar10;
  char unaff_SIL;
  int64_t *this_ptr;
  bool bVar11;
  float fVar12;
  uint32_t uVar13;
  uint32_t uVar14;
  float fVar15;
  float fVar16;
  int64_t local_138;
  char local_130;
  int64_t *local_b0;
  char local_a8;
  int local_98;
  int64_t *local_80;
  char local_78;
  int64_t *local_68;
  int64_t *local_60;
  char local_58;
  int local_48;
  
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  pcVar1 = g_02572370;
  (*g_02572370)();
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar6 = (int64_t)&g_02572358;
  (*pcVar1)();
  plVar7 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar7 = (int64_t)&g_02572358;
  (*pcVar1)();
  plVar8 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar8 = (int64_t)&g_02572358;
  (*pcVar1)();
  FUN_01bcc520();
  FUN_01beead0();
  if ((local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_60 != (int64_t *)0x0) {
    local_48 = -1;
LAB_002dee4b:
    while (plVar2 = local_b0, local_48 = local_48 + 1, local_48 < *(int *)((int64_t)local_60 + 0xc)
          ) {
      FUN_01bc09c0();
      if (local_a8 == '\0') goto LAB_002deec0;
      if (local_b0 != (int64_t *)0x0) goto LAB_002deef0;
    }
    FUN_002e0650();
    FUN_00d50b20();
  }
  FUN_00d214d0();
  FUN_01bcc520();
  FUN_01beea30();
  if (local_a8 == '\0') {
    if (local_b0 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_a8 = '\0';
  }
  FUN_002dff80();
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  if (local_b0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x7b8))();
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  if (g_02390124 < (float)((uint64_t)param_1 >> 0x20)) {
    bVar10 = false;
    local_68 = (int64_t *)0x0;
    local_60 = plVar7;
    while( true ) {
      (**(code **)(*this_ptr + 0x658))();
      if (local_60 == local_68) {
        if ((!bVar10) && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b00();
          bVar10 = true;
        }
      }
      else {
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar10) && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
          local_68 = local_60;
          bVar10 = true;
        }
        else {
          local_68 = local_60;
          bVar10 = true;
        }
      }
      if ((local_68 == (int64_t *)0x0) || (iVar4 = FUN_01d3a5a0(), iVar4 == 6)) break;
      iVar4 = FUN_01d3a5a0();
      if (iVar4 == 5) {
        FUN_01d3abf0();
        fVar12 = (float)FUN_01e466c0();
        fVar12 = fVar12 - (float)param_1;
        uVar13 = FUN_00d05150();
        if (puVar5 != (void*)0x0) {
          local_60 = (int64_t *)0x0;
          local_48 = -1;
          fVar15 = fVar12;
LAB_002df3bb:
          while( true ) {
            lVar9 = (int64_t)local_48;
            local_48 = local_48 + 1;
            if (*(int *)((int64_t)puVar5 + 0xc) <= local_48) break;
            local_60 = *(int64_t **)(puVar5[2] + 8 + lVar9 * 8);
            FUN_01bc5e00();
            if (local_a8 == '\0') goto LAB_002df430;
            if (local_b0 != (int64_t *)0x0) goto LAB_002df460;
          }
          FUN_000840d0();
        }
        if (unaff_SIL != '\0') {
          FUN_00d23480();
          local_60 = plVar7;
        }
        if ((*(int *)((int64_t)plVar8 + 0xc) != *(int *)((int64_t)plVar6 + 0xc)) ||
           (cVar3 = FUN_00d23fd0(), local_60 = plVar8, cVar3 == '\0')) {
          FUN_01bcc520();
          (**(code **)(*local_60 + 0x9d8))();
        }
        FUN_00d50b00();
        uVar13 = FUN_01e437f0(uVar13);
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        (**(code **)(*plVar7 + 0x948))(uVar13,fVar12);
        FUN_00d243f0();
        FUN_00d216c0();
        local_60 = plVar6;
      }
    }
    (**(code **)(*plVar7 + 0x948))((int)g_023dccec,(int)g_023dccf4);
  }
  else {
    local_68 = (int64_t *)0x0;
    bVar10 = false;
    bVar11 = false;
    if (plVar7 == (int64_t *)0x0) goto LAB_002df77e;
  }
  FUN_00d50b20();
  bVar11 = bVar10;
LAB_002df77e:
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (puVar5 != (void*)0x0) {
    FUN_00d50b20();
  }
  if ((bVar11) && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
LAB_002deec0:
  if (local_b0 != (int64_t *)0x0) {
    FUN_00d50b00();
LAB_002deef0:
    local_a8 = '\0';
    local_b0 = (int64_t *)0x0;
    local_98 = -1;
    while( true ) {
      lVar9 = (int64_t)local_98;
      local_98 = local_98 + 1;
      if (*(int *)((int64_t)plVar2 + 0xc) <= local_98) break;
      local_b0 = *(int64_t **)(plVar2[2] + 8 + lVar9 * 8);
      FUN_00d21140();
      FUN_01bc0990();
      cVar3 = FUN_00d23d70();
      if ((local_130 != '\0') && (local_138 != 0)) {
        FUN_00d50b20();
      }
      if (cVar3 != '\0') {
        FUN_00d21140();
      }
      local_78 = '\0';
      local_80 = local_b0;
    }
    FUN_000840d0();
    FUN_00d50b20();
  }
  goto LAB_002dee4b;
LAB_002df430:
  if (local_b0 != (int64_t *)0x0) {
    FUN_00d50b00();
LAB_002df460:
    FUN_01e40eb0();
    if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    fVar16 = fVar15;
    if (local_b0 != (int64_t *)0x0) {
      FUN_01e3f820();
      uVar14 = FUN_01e437f0();
      fVar16 = fVar12;
      cVar3 = FUN_00d054a0(uVar13,fVar12,uVar14,fVar15);
      if (cVar3 != '\0') {
        local_a8 = '\0';
        FUN_00d21140();
        local_b0 = local_60;
      }
    }
    FUN_00d50b20();
    fVar15 = fVar16;
  }
  goto LAB_002df3bb;
}

