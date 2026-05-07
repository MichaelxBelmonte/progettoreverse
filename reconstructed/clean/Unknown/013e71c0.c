// Function: FUN_013e71c0
// Address: 013e71c0
// Size: 2291 bytes
// Class: Unknown

void FUN_013e71c0(int64_t *param_1,int64_t param_2)

{
  double dVar1;
  int64_t *plVar2;
  double dVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  uint8_t uVar7;
  uint uVar8;
  void *pvVar9;
  int64_t lVar10;
  int64_t lVar11;
  void*puVar12;
  int64_t *plVar13;
  void* pVar14;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t uVar15;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar16;
  float fVar17;
  float fVar18;
  int64_t *local_68;
  char local_60;
  int64_t *local_40;
  int64_t *local_38;
  
  pvVar9 = _pthread_getspecific((void*)param_1);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01270420();
  pVar14 = (void*)param_1;
  if (local_60 == '\0') {
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_013e724f;
    }
  }
  else if (local_68 != (int64_t *)0x0) {
LAB_013e724f:
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c71a0();
    local_38 = local_68;
    if (local_68 == (int64_t *)0x0) {
      local_38 = (int64_t *)0x0;
      bVar4 = false;
    }
    else if (local_60 == '\0') {
      FUN_00d50b00();
      bVar4 = true;
    }
    else {
      bVar4 = true;
    }
    pVar14 = (void*)local_68;
    FUN_00d50b20();
    goto LAB_013e74a6;
  }
  pvVar9 = _pthread_getspecific(pVar14);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar5 = FUN_0125a2d0();
  if (cVar5 == '\0') {
    return;
  }
  pvVar9 = _pthread_getspecific((void*)param_1);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar5 = FUN_01263cf0();
  if (cVar5 != '\0') {
    return;
  }
  pvVar9 = _pthread_getspecific((void*)param_1);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar5 = FUN_01263ef0();
  if (cVar5 != '\0') {
    return;
  }
  pvVar9 = _pthread_getspecific((void*)param_1);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar5 = FUN_0126f100();
  if (cVar5 != '\0') {
    return;
  }
  lVar11 = *arg1;
  pvVar9 = _pthread_getspecific((void*)param_1);
  if (pvVar9 != (void *)0x0) {
    lVar11 = *arg1;
    lVar10 = FUN_00e8b990();
    if (lVar10 != 0) {
      lVar11 = *(int64_t *)(lVar11 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8);
    }
  }
  pVar14 = (void*)param_1;
  plVar2 = *(int64_t **)(lVar11 + 200);
  if (plVar2 == (int64_t *)0x0) {
LAB_013e77a0:
    pVar14 = (void*)param_1;
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar5 = FUN_0125a2d0();
    if (cVar5 == '\0') {
      uVar8 = 0;
      bVar4 = true;
    }
    else {
      lVar11 = *arg1;
      pvVar9 = _pthread_getspecific(pVar14);
      if (pvVar9 != (void *)0x0) {
        lVar11 = *arg1;
        lVar10 = FUN_00e8b990();
        if (lVar10 != 0) {
          lVar11 = *(int64_t *)(lVar11 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8);
        }
      }
      uVar8 = (uint)(*(float *)(lVar11 + 0xf8) / g_023908e0);
      bVar4 = true;
LAB_013e78ff:
      if ((int)uVar8 < 1) {
        uVar8 = 0;
      }
      else if (0x7e < (int)uVar8) {
        uVar8 = 0x7f;
      }
    }
    pVar14 = 0;
    local_40 = (int64_t *)0x0;
  }
  else {
    FUN_00d50b00();
    pvVar9 = _pthread_getspecific(pVar14);
    plVar13 = plVar2;
    if ((pvVar9 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
      plVar13 = (int64_t *)plVar2[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
    }
    lVar11 = plVar13[0xd];
    param_1 = plVar2;
    if (lVar11 == 0) goto LAB_013e77a0;
    plVar13 = plVar2;
    FUN_00d50b00();
    pvVar9 = _pthread_getspecific((void*)plVar13);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01507e40();
    if (local_68 == (int64_t *)0x0) {
      pvVar9 = _pthread_getspecific((void*)plVar13);
      if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        lVar11 = *(int64_t *)(lVar11 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8);
      }
      uVar8 = *(uint *)(lVar11 + 0x50);
      bVar4 = false;
      goto LAB_013e78ff;
    }
    if (local_60 == '\0') {
      FUN_00d50b00();
    }
    local_40 = local_68;
    pvVar9 = _pthread_getspecific((void*)plVar13);
    if ((pvVar9 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
      plVar13 = local_68;
      local_68 = (int64_t *)local_68[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
    }
    pVar14 = (void*)plVar13;
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar8 = (**(code **)(*local_68 + 0x418))();
    bVar4 = false;
  }
  pvVar9 = _pthread_getspecific(pVar14);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar17 = (float)FUN_0126cd70();
  plVar13 = (int64_t *)this_ptr[0x20];
  if (plVar13 == (int64_t *)0x0) {
    fVar17 = fVar17 * g_023d5000;
  }
  else {
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      plVar13 = (int64_t *)this_ptr[0x20];
      lVar11 = FUN_00e8b990();
      if (lVar11 != 0) {
        plVar13 = (int64_t *)plVar13[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
      }
    }
    fVar17 = (float)(**(code **)(*plVar13 + 0x390))(fVar17);
  }
  local_38 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *local_38 = (int64_t)&g_02539a88;
  local_38[2] = 0;
  (*g_02539aa0)();
  fVar18 = g_023d5000;
  if (fVar17 <= g_023d5000) {
    fVar18 = fVar17;
  }
  fVar17 = g_02390d04;
  if (g_02390d04 <= fVar18) {
    fVar17 = fVar18;
  }
  pVar14 = uVar8 & 0xff;
  FUN_00b519f0(uVar8 & 0xff,0,(int)(fVar17 + g_0239011c) & 0xff);
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar4) {
    FUN_00d50b20();
  }
  if (local_40 == (int64_t *)0x0) {
    bVar4 = true;
  }
  else {
    bVar4 = true;
    FUN_00d50b20();
  }
LAB_013e74a6:
  lVar11 = *arg1;
  pvVar9 = _pthread_getspecific(pVar14);
  if (pvVar9 != (void *)0x0) {
    lVar11 = *arg1;
    lVar10 = FUN_00e8b990();
    if (lVar10 != 0) {
      lVar11 = *(int64_t *)(lVar11 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8);
    }
  }
  dVar1 = *(double *)(lVar11 + 0xb8);
  dVar3 = (double)FUN_00b335d0();
  param_2 = (int64_t)(dVar1 * dVar3) + param_2;
  lVar11 = this_ptr[0x1d];
  uVar8 = *(uint *)(lVar11 + 0xc);
  uVar15 = (uint64_t)uVar8;
  if (0 < (int)uVar8) {
    while( true ) {
      uVar8 = uVar8 - 1;
      cVar5 = *(char *)(*(int64_t *)(*(int64_t *)(lVar11 + 0x10) + (uint64_t)uVar8 * 8) + 0x20);
      cVar6 = FUN_00b518d0();
      if (cVar5 == cVar6) {
        lVar11 = *(int64_t *)(*(int64_t *)(this_ptr[0x1d] + 0x10) + (uint64_t)uVar8 * 8);
        uVar16 = extraout_XMM0_Da;
        if (lVar11 != 0) {
          uVar16 = FUN_00d50b00();
        }
        FUN_013e7d10(uVar16,param_2);
        if (lVar11 != 0) {
          FUN_00d50b20();
        }
      }
      if ((int64_t)uVar15 < 2) break;
      uVar15 = uVar15 - 1;
      lVar11 = this_ptr[0x1d];
    }
  }
  puVar12 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar12 = &g_025dab78;
  puVar12[2] = 0;
  puVar12[3] = 0;
  *(void*)(puVar12 + 4) = 0;
  FUN_00d500e0();
  lVar11 = *arg1;
  lVar10 = puVar12[2];
  if (lVar10 != lVar11) {
    if (lVar11 != 0) {
      FUN_00d50b00();
    }
    puVar12[2] = lVar11;
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
  }
  uVar7 = FUN_00b518d0();
  *(void*)(puVar12 + 4) = uVar7;
  puVar12[3] = param_2;
  uVar16 = FUN_00d21140();
  (**(code **)(*this_ptr + 0x6d0))(uVar16,puVar12[3]);
  FUN_00d50b20();
  if ((bVar4) && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

