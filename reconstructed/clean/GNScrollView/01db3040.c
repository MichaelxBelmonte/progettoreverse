// Function: FUN_01db3040
// Address: 01db3040
// Size: 1814 bytes
// Class: GNScrollView
// String references:
//   "GNScrollView"
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


uint64_t FUN_01db3040(float param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t **pplVar5;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar6;
  int64_t lVar7;
  bool bVar8;
  bool bVar9;
  uint32_t uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint64_t local_a0;
  float local_58 [2];
  int64_t *local_50;
  int64_t *local_48;
  int64_t local_40;
  char local_38;
  
  fVar11 = (float)((uint64_t)param_2 >> 0x20);
  fVar15 = (float)param_2;
  plVar1 = *(int64_t **)(*arg1 + 0x20);
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  uVar10 = (**(code **)(*plVar1 + 0x4d8))();
  local_58[0] = fVar15;
  local_58[1] = fVar11;
  FUN_00d50b20();
  cVar3 = *(char *)(this_ptr + 0x138);
  bVar8 = cVar3 == '\0';
  if (!bVar8) {
    fVar11 = fVar15;
  }
  local_58[bVar8] = param_1 + fVar11;
  if (bVar8) {
    lVar7 = *arg1;
    fVar15 = (float)((uint64_t)*(void*)(lVar7 + 0x18) >> 0x20);
    fVar12 = local_58[1];
    fVar14 = fVar15;
    if (local_58[1] <= fVar15) goto LAB_01db310d;
LAB_01db311b:
    local_58[bVar8] = fVar15;
    iVar4 = *(int *)(lVar7 + 0x38);
  }
  else {
    lVar7 = *arg1;
    fVar15 = (float)*(void*)(lVar7 + 0x18);
    fVar14 = (float)((uint64_t)*(void*)(lVar7 + 0x18) >> 0x20);
    fVar12 = local_58[0];
    if (fVar15 < local_58[0]) goto LAB_01db311b;
LAB_01db310d:
    fVar14 = (float)((uint64_t)*(void*)(lVar7 + 0x10) >> 0x20);
    fVar15 = fVar14;
    if (cVar3 != '\0') {
      fVar15 = (float)*(void*)(lVar7 + 0x10);
    }
    if (fVar12 < fVar15) goto LAB_01db311b;
    iVar4 = *(int *)(lVar7 + 0x38);
  }
  if (iVar4 == 0) goto LAB_01db3614;
  local_50 = (int64_t *)0x0;
  local_48 = (int64_t *)0x0;
  plVar1 = *(int64_t **)(lVar7 + 0x20);
  bVar8 = plVar1 != (int64_t *)0x0;
  if (bVar8) {
    FUN_00d50b00();
    local_50 = plVar1;
  }
  plVar2 = local_50;
  if ((g_026f0e00 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_026f8e78 = FUN_0006d940();
    g_026f8e60 = "GNScrollView";
    g_026f8e68 = 0x1c0;
    g_026f8e70 = FUN_00074e80;
    g_026f8e80 = 0;
    ram_00000000026f8e88 = 0;
    g_026f8e90 = 0;
    ram_00000000026f8e98 = 0;
    g_026f8ea0 = 0;
    ram_00000000026f8ea8 = 0;
    g_026f8eb0 = 0;
    ram_00000000026f8eb8 = 0;
    g_026f8ec0 = 0;
    ram_00000000026f8ec8 = 0;
    g_026f8ed0 = 0;
    ram_00000000026f8ed8 = 0;
    g_026f8ee0 = 0;
    ram_00000000026f8ee8 = 0;
    g_026f8ef0 = 0;
    ram_00000000026f8ef8 = 0;
    g_026f8f00 = 0;
    ram_00000000026f8f08 = 0;
    g_026f8f10 = 0;
    ram_00000000026f8f18 = 0;
    g_026f8f20 = 0;
    ___cxa_guard_release();
  }
  if (plVar2 == (int64_t *)0x0) {
LAB_01db31ba:
    if (g_02802688 != 0) goto LAB_01db31c7;
LAB_01db3242:
    lVar7 = 0;
    bVar9 = true;
    while( true ) {
      plVar2 = local_50;
      (**(code **)(*local_50 + 0x4a0))();
      iVar4 = *(int *)(local_40 + 0xc);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      plVar6 = local_48;
      bVar8 = bVar9;
      if (iVar4 <= lVar7) break;
      (**(code **)(*plVar2 + 0x4a0))();
      plVar6 = local_48;
      plVar2 = *(int64_t **)(*(int64_t *)(local_40 + 0x10) + lVar7 * 8);
      if (local_48 == plVar2) {
        if ((!bVar9) && (plVar2 != (int64_t *)0x0)) {
          bVar8 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_48 = plVar2;
        bVar8 = true;
        if ((bVar9) && (plVar6 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((g_026f0e00 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        g_026f8e78 = FUN_0006d940();
        g_026f8e60 = "GNScrollView";
        g_026f8e68 = 0x1c0;
        g_026f8e70 = FUN_00074e80;
        g_026f8e80 = 0;
        ram_00000000026f8e88 = 0;
        g_026f8e90 = 0;
        ram_00000000026f8e98 = 0;
        g_026f8ea0 = 0;
        ram_00000000026f8ea8 = 0;
        g_026f8eb0 = 0;
        ram_00000000026f8eb8 = 0;
        g_026f8ec0 = 0;
        ram_00000000026f8ec8 = 0;
        g_026f8ed0 = 0;
        ram_00000000026f8ed8 = 0;
        g_026f8ee0 = 0;
        ram_00000000026f8ee8 = 0;
        g_026f8ef0 = 0;
        ram_00000000026f8ef8 = 0;
        g_026f8f00 = 0;
        ram_00000000026f8f08 = 0;
        g_026f8f10 = 0;
        ram_00000000026f8f18 = 0;
        g_026f8f20 = 0;
        ___cxa_guard_release();
      }
      pplVar5 = (int64_t **)&g_02802688;
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x360))();
        cVar3 = FUN_00e85ea0();
        pplVar5 = &local_48;
        if (cVar3 == '\0') {
          pplVar5 = (int64_t **)&g_02802688;
        }
      }
      plVar6 = local_48;
      if (*pplVar5 != (int64_t *)0x0) break;
      if (local_48 != (int64_t *)0x0) {
        local_48 = (int64_t *)0x0;
        if (bVar8) {
          FUN_00d50b20();
        }
        bVar8 = false;
      }
      lVar7 = lVar7 + 1;
      bVar9 = bVar8;
    }
joined_r0x01db3544:
    if (plVar6 != (int64_t *)0x0) {
LAB_01db3214:
      if (bVar8) goto LAB_01db3449;
      bVar8 = false;
      cVar3 = *(char *)(this_ptr + 0x138);
      goto joined_r0x01db345e;
    }
joined_r0x01db35f1:
    plVar6 = (int64_t *)0x0;
joined_r0x01db35d0:
    bVar9 = true;
    bVar8 = true;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01db31ba;
    if (local_50 == (int64_t *)0x0) goto LAB_01db3242;
LAB_01db31c7:
    plVar2 = local_48;
    plVar6 = local_50;
    if (local_48 != local_50) {
      if (plVar1 != (int64_t *)0x0 && local_50 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_48 = plVar6;
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
        goto joined_r0x01db3544;
      }
      if (plVar6 == (int64_t *)0x0) goto joined_r0x01db35f1;
      goto LAB_01db3214;
    }
    if (local_50 == (int64_t *)0x0) goto joined_r0x01db35f1;
LAB_01db3449:
    bVar8 = true;
    FUN_00d50b00();
    cVar3 = *(char *)(this_ptr + 0x138);
joined_r0x01db345e:
    fVar12 = local_58[0];
    if (cVar3 == '\0') {
      fVar12 = local_58[1];
    }
    plVar2 = *(int64_t **)(*arg1 + 0x20);
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar2 + 0x4d8))();
    if (*(char *)(this_ptr + 0x138) == '\0') {
      fVar15 = fVar14;
    }
    FUN_00d50b20();
    FUN_01d97870();
    local_a0 = FUN_01cf5cf0();
    fVar14 = (float)((uint64_t)local_a0 >> 0x20);
    fVar13 = (float)local_a0;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (*(int *)(*arg1 + 0x38) == 2) {
      bVar9 = *(char *)(this_ptr + 0x138) == '\0';
      if (!bVar9) {
        fVar14 = fVar13;
      }
      *(float *)((int64_t)&local_a0 + (uint64_t)bVar9 * 4) = fVar14 - (fVar12 - fVar15);
      FUN_01d97870();
      FUN_01cf5c80((int)local_a0);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    if (!bVar8) goto joined_r0x01db35d0;
    FUN_00d50b20();
    bVar9 = false;
    bVar8 = false;
  }
  if ((plVar1 != (int64_t *)0x0) && (bVar8 = bVar9, local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar8 && plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_01db3614:
  cVar3 = FUN_01e4ce30();
  plVar1 = *(int64_t **)(*arg1 + 0x20);
  if (cVar3 == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    fVar15 = local_58[0];
    (**(code **)(*plVar1 + 0x4d0))(uVar10);
    FUN_00d50b20();
  }
  else {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    fVar15 = local_58[0];
    FUN_01e3b180(uVar10);
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  fVar14 = local_58[1];
  if (*(char *)(this_ptr + 0x138) != '\0') {
    fVar14 = fVar15;
  }
  return CONCAT44(local_58[1],fVar14 - fVar11);
}

