// Function: FUN_01320f50
// Address: 01320f50
// Size: 932 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01320f50(void)

{
  int iVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t *plVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  int64_t lVar11;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t **pplVar12;
  int64_t *plVar13;
  uint32_t uVar14;
  float fVar15;
  float fVar16;
  int64_t local_b0;
  char local_a8;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  uint32_t local_48;
  uint64_t local_44;
  float local_34;
  
  FUN_00d3ecc0();
  plVar2 = local_60;
  lVar3 = g_02729590;
  if (g_02729590 != 0) {
    FUN_00d50b00();
  }
  cVar10 = (**(code **)(*plVar2 + 0x50))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar10 == '\0') {
    local_80 = *arg1;
    local_78 = '\0';
    FUN_00d530a0();
    if (local_78 == '\0') {
      return;
    }
    if (local_80 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  pplVar12 = &local_60;
  FUN_00d3ecf0();
  plVar2 = local_60;
  FUN_002771e0();
  if (plVar2 == (int64_t *)0x0) {
LAB_0132101c:
    pplVar12 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar10 = FUN_00e85ea0();
    if (cVar10 == '\0') goto LAB_0132101c;
  }
  plVar2 = *pplVar12;
  if (*(char *)(pplVar12 + 1) == '\0') {
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar12 + 1) = 0;
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d3ed20();
  plVar13 = local_60;
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar13 == (int64_t *)0x0) goto LAB_013212e0;
  uVar14 = FUN_00d3ed20();
  local_90 = g_027295d8;
  if (g_027295d8 != 0) {
    uVar14 = FUN_00d50b00();
  }
  local_88 = '\x01';
  pplVar12 = &local_60;
  FUN_000175c0(uVar14,&local_90);
  plVar13 = local_60;
  FUN_00053ac0();
  if (plVar13 == (int64_t *)0x0) {
LAB_01321131:
    pplVar12 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar13 + 0x360))();
    cVar10 = FUN_00e85ea0();
    if (cVar10 == '\0') goto LAB_01321131;
  }
  plVar13 = *pplVar12;
  if (plVar13 == (int64_t *)0x0) {
    bVar9 = true;
    bVar8 = true;
    plVar13 = (int64_t *)0x0;
  }
  else {
    if (*(char *)(pplVar12 + 1) == '\0') {
      FUN_00d50b00();
    }
    else {
      *(void*)(pplVar12 + 1) = 0;
    }
    bVar9 = false;
    bVar8 = false;
  }
  if ((local_58 != '\0') && (bVar8 = bVar9, local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((plVar2 != (int64_t *)0x0) && (plVar13 != (int64_t *)0x0)) {
    fVar15 = (float)FUN_00d459e0();
    local_34 = 0.0;
    fVar16 = 0.0;
    if ((0.0 <= fVar15) && (fVar16 = fVar15, g_02390124 < fVar15)) {
      fVar16 = g_02390124;
    }
    lVar3 = *(int64_t *)(this_ptr + 0x18);
    if (lVar3 != 0) {
      local_58 = '\0';
      local_60 = (int64_t *)0x0;
      local_44 = 0;
      iVar1 = *(int *)(lVar3 + 0xc);
      if (iVar1 < 1) {
        lVar11 = 0;
        local_34 = 0.0;
      }
      else {
        lVar4 = *(int64_t *)(lVar3 + 0x10);
        lVar5 = *(int64_t *)(*(int64_t *)(this_ptr + 0x28) + 0x10);
        lVar6 = *(int64_t *)(*(int64_t *)(this_ptr + 0x20) + 0x10);
        local_34 = 0.0;
        lVar11 = 0;
        do {
          local_60 = *(int64_t **)(lVar4 + lVar11 * 8);
          if (local_60 == plVar2) {
            *(float *)(lVar6 + lVar11 * 4) = fVar16;
          }
          local_34 = local_34 + *(float *)(lVar6 + lVar11 * 4) * *(float *)(lVar5 + lVar11 * 4);
          lVar11 = lVar11 + 1;
        } while ((int)lVar11 < iVar1);
      }
      local_48 = (uint32_t)lVar11;
      local_50 = lVar3;
      FUN_00115190();
    }
    plVar7 = *(int64_t **)(this_ptr + 0x10);
    FUN_00d50b00();
    fVar16 = g_02390124;
    if (local_34 <= g_02390124) {
      fVar16 = local_34;
    }
    (**(code **)(*plVar7 + 0x18))(fVar16);
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
  }
  if (!bVar8 && plVar13 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_013212e0:
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

