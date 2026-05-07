// Function: FUN_012649d0
// Address: 012649d0
// Size: 3774 bytes
// Class: MUSampledFunction

void* FUN_012649d0(int64_t *param_1,int param_2)

{
  uint32_t uVar1;
  double dVar2;
  void*puVar3;
  float fVar4;
  bool bVar5;
  code *pcVar6;
  bool bVar7;
  int64_t *plVar8;
  void *pvVar9;
  int64_t lVar10;
  void*puVar11;
  void* pVar12;
  int64_t *plVar13;
  int64_t lVar14;
  int64_t *plVar15;
  int64_t *plVar16;
  int64_t arg1;
  void*this_ptr;
  void*puVar17;
  float fVar18;
  char local_9c;
  int local_80;
  int64_t local_60;
  char local_58;
  char local_50;
  
  plVar13 = param_1;
  plVar8 = (int64_t *)FUN_00e8fc40();
  FUN_0006e3a0();
  (**(code **)(*plVar8 + 0x18))();
  if (param_2 == 0) {
    pvVar9 = _pthread_getspecific((void*)plVar13);
    plVar15 = plVar8;
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      plVar13 = plVar8;
      plVar15 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
    }
    dVar2 = *(double *)(arg1 + 0xe8);
    if (((double)plVar15[0x1d] != dVar2) || (NAN((double)plVar15[0x1d]) || NAN(dVar2))) {
      FUN_00d64850();
      plVar15[0x1d] = (int64_t)dVar2;
      FUN_00d64910();
    }
  }
  pvVar9 = _pthread_getspecific((void*)plVar13);
  plVar15 = plVar8;
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar13 = plVar8;
    plVar15 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
  }
  dVar2 = *(double *)(arg1 + 0xf0);
  if (((double)plVar15[0x1e] != dVar2) || (NAN((double)plVar15[0x1e]) || NAN(dVar2))) {
    FUN_00d64850();
    plVar15[0x1e] = (int64_t)dVar2;
    FUN_00d64910();
  }
  pvVar9 = _pthread_getspecific((void*)plVar13);
  plVar15 = plVar8;
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar13 = plVar8;
    plVar15 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
  }
  fVar18 = *(float *)(arg1 + 0x110);
  if ((*(float *)(plVar15 + 0x22) != fVar18) || (NAN(*(float *)(plVar15 + 0x22)) || NAN(fVar18))) {
    FUN_00d64850();
    *(float *)(plVar15 + 0x22) = fVar18;
    FUN_00d64910();
  }
  pvVar9 = _pthread_getspecific((void*)plVar13);
  plVar15 = plVar8;
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar13 = plVar8;
    plVar15 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
  }
  fVar18 = *(float *)(arg1 + 0x98);
  if ((*(float *)(plVar15 + 0x13) != fVar18) || (NAN(*(float *)(plVar15 + 0x13)) || NAN(fVar18))) {
    FUN_00d64850();
    *(float *)(plVar15 + 0x13) = fVar18;
    FUN_00d64910();
  }
  pvVar9 = _pthread_getspecific((void*)plVar13);
  plVar15 = plVar8;
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar13 = plVar8;
    plVar15 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
  }
  fVar18 = *(float *)(arg1 + 0x9c);
  if ((*(float *)((int64_t)plVar15 + 0x9c) != fVar18) ||
     (NAN(*(float *)((int64_t)plVar15 + 0x9c)) || NAN(fVar18))) {
    FUN_00d64850();
    *(float *)((int64_t)plVar15 + 0x9c) = fVar18;
    FUN_00d64910();
  }
  pvVar9 = _pthread_getspecific((void*)plVar13);
  plVar15 = plVar8;
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar13 = plVar8;
    plVar15 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
  }
  uVar1 = *(void*)(arg1 + 0x13c);
  FUN_00d64850();
  *(void*)((int64_t)plVar15 + 0x13c) = uVar1;
  FUN_00d64910();
  pvVar9 = _pthread_getspecific((void*)plVar13);
  plVar15 = plVar8;
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar13 = plVar8;
    plVar15 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
  }
  dVar2 = *(double *)(arg1 + 0xb8);
  if (((double)plVar15[0x17] != dVar2) || (NAN((double)plVar15[0x17]) || NAN(dVar2))) {
    FUN_00d64850();
    plVar15[0x17] = (int64_t)dVar2;
    FUN_00d64910();
  }
  pvVar9 = _pthread_getspecific((void*)plVar13);
  plVar15 = plVar8;
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar13 = plVar8;
    plVar15 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
  }
  dVar2 = *(double *)(arg1 + 0xc0);
  if (((double)plVar15[0x18] != dVar2) || (NAN((double)plVar15[0x18]) || NAN(dVar2))) {
    FUN_00d64850();
    plVar15[0x18] = (int64_t)dVar2;
    FUN_00d64910();
  }
  plVar15 = *(int64_t **)(arg1 + 0xe0);
  if (plVar15 == (int64_t *)0x0) {
    puVar17 = (void*)0x0;
    bVar5 = false;
    lVar10 = *(int64_t *)(arg1 + 0xd0);
    plVar15 = plVar13;
  }
  else {
    FUN_00d50b00();
    pcVar6 = g_025c86d8;
    local_80 = -1;
    bVar5 = false;
    puVar17 = (void*)0x0;
    while( true ) {
      lVar10 = (int64_t)local_80;
      local_80 = local_80 + 1;
      if (*(int *)((int64_t)plVar15 + 0xc) <= local_80) break;
      lVar14 = plVar15[2];
      lVar10 = *(int64_t *)(lVar14 + 8 + lVar10 * 8);
      puVar11 = (void*)FUN_00e8fc40();
      pVar12 = (void*)lVar14;
      FUN_00d4ff40();
      *puVar11 = &g_025c86c0;
      puVar11[7] = 0;
      puVar11[8] = 0;
      puVar11[9] = 0;
      puVar11[10] = 0;
      puVar11[0xb] = 0;
      puVar11[0xc] = 0;
      (*pcVar6)();
      if (puVar11 == puVar17) {
        puVar11 = puVar17;
        if (bVar5) {
          FUN_00d50b20();
          bVar7 = bVar5;
        }
        else {
          bVar7 = true;
        }
      }
      else {
        bVar7 = true;
        if ((bVar5) && (puVar17 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      bVar5 = bVar7;
      pvVar9 = _pthread_getspecific(pVar12);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar9 = _pthread_getspecific(pVar12);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef460();
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      FUN_011ef3f0();
      if (local_60 != 0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      local_50 = (char)param_1;
      if (local_50 != '\0') {
        pvVar9 = _pthread_getspecific(pVar12);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011ef460();
        pvVar9 = _pthread_getspecific(pVar12);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dd9a0();
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
      puVar17 = puVar11;
      if (lVar10 == *(int64_t *)(arg1 + 0xd8)) {
        pvVar9 = _pthread_getspecific((void*)arg1);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01265bc0();
      }
      else {
        pvVar9 = _pthread_getspecific((void*)arg1);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01265db0();
      }
    }
    FUN_0015edf0();
    FUN_00d50b20();
    lVar10 = *(int64_t *)(arg1 + 0xd0);
  }
  if (lVar10 != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    pvVar9 = _pthread_getspecific((void*)plVar15);
    if ((pvVar9 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
      lVar10 = *(int64_t *)(arg1 + 0xd0);
    }
    else {
      lVar10 = *(int64_t *)(arg1 + 0xd0);
      plVar15 = plVar8;
    }
    if (lVar10 != 0) {
      FUN_00d50b00();
    }
    FUN_01265f70();
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
  }
  pvVar9 = _pthread_getspecific((void*)plVar15);
  plVar13 = plVar8;
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar15 = plVar8;
    plVar13 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
  }
  fVar18 = *(float *)(arg1 + 0xf8);
  if ((*(float *)(plVar13 + 0x1f) != fVar18) || (NAN(*(float *)(plVar13 + 0x1f)) || NAN(fVar18))) {
    FUN_00d64850();
    *(float *)(plVar13 + 0x1f) = fVar18;
    FUN_00d64910();
  }
  pvVar9 = _pthread_getspecific((void*)plVar15);
  plVar13 = plVar8;
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar15 = plVar8;
    plVar13 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
  }
  fVar18 = g_02390124;
  if (*(float *)(arg1 + 0x138) <= g_02390124) {
    fVar18 = *(float *)(arg1 + 0x138);
  }
  fVar4 = g_02390d00;
  if (g_02390d00 <= fVar18) {
    fVar4 = fVar18;
  }
  if ((*(float *)(plVar13 + 0x27) != fVar4) || (NAN(*(float *)(plVar13 + 0x27)) || NAN(fVar4))) {
    FUN_00d64850();
    *(float *)(plVar13 + 0x27) = fVar4;
    FUN_00d64910();
  }
  pvVar9 = _pthread_getspecific((void*)plVar15);
  plVar13 = plVar8;
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar15 = plVar8;
    plVar13 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
  }
  dVar2 = *(double *)(arg1 + 0x118);
  if (((double)plVar13[0x23] != dVar2) || (NAN((double)plVar13[0x23]) || NAN(dVar2))) {
    FUN_00d64850();
    plVar13[0x23] = (int64_t)dVar2;
    FUN_00d64910();
  }
  pvVar9 = _pthread_getspecific((void*)plVar15);
  plVar13 = plVar8;
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar15 = plVar8;
    plVar13 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
  }
  dVar2 = *(double *)(arg1 + 0x120);
  if (((double)plVar13[0x24] != dVar2) || (NAN((double)plVar13[0x24]) || NAN(dVar2))) {
    FUN_00d64850();
    plVar13[0x24] = (int64_t)dVar2;
    FUN_00d64910();
  }
  pvVar9 = _pthread_getspecific((void*)plVar15);
  plVar13 = plVar8;
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar15 = plVar8;
    plVar13 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
  }
  dVar2 = *(double *)(arg1 + 0x128);
  if (((double)plVar13[0x25] != dVar2) || (NAN((double)plVar13[0x25]) || NAN(dVar2))) {
    FUN_00d64850();
    plVar13[0x25] = (int64_t)dVar2;
    FUN_00d64910();
  }
  pvVar9 = _pthread_getspecific((void*)plVar15);
  plVar13 = plVar8;
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar15 = plVar8;
    plVar13 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
  }
  dVar2 = *(double *)(arg1 + 0x130);
  if (((double)plVar13[0x26] != dVar2) || (NAN((double)plVar13[0x26]) || NAN(dVar2))) {
    FUN_00d64850();
    plVar13[0x26] = (int64_t)dVar2;
    FUN_00d64910();
  }
  local_9c = (char)param_2;
  if (local_9c != '\0') {
    puVar11 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar11 = &g_025bd940;
    puVar11[5] = 0;
    puVar11[2] = 0;
    puVar11[3] = 0;
    *(void*)(puVar11 + 4) = 0;
    FUN_00d500e0();
    pvVar9 = _pthread_getspecific((void*)plVar15);
    if ((pvVar9 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
      puVar3 = (void*)plVar8[0x21];
      plVar13 = plVar8;
    }
    else {
      plVar13 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
      puVar3 = (void*)plVar13[0x21];
      plVar15 = plVar8;
    }
    if (puVar3 != puVar11) {
      FUN_00d50b00();
      plVar13[0x21] = (int64_t)puVar11;
      if (puVar3 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    pvVar9 = _pthread_getspecific((void*)plVar15);
    plVar13 = plVar8;
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      plVar15 = plVar8;
      plVar13 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar13 + 0x1a0))();
    pvVar9 = _pthread_getspecific((void*)plVar15);
    plVar13 = plVar8;
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      plVar15 = plVar8;
      plVar13 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
    }
    plVar16 = (int64_t *)plVar13[0x34];
    pvVar9 = _pthread_getspecific((void*)plVar15);
    if (pvVar9 != (void *)0x0) {
      plVar16 = (int64_t *)plVar13[0x34];
      lVar10 = FUN_00e8b990();
      if (lVar10 != 0) {
        plVar16 = (int64_t *)plVar16[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
      }
    }
    (**(code **)(*plVar16 + 0x1a0))();
    FUN_00d50b20();
  }
  *this_ptr = plVar8;
  *(void*)(this_ptr + 1) = 1;
  if ((bVar5) && (puVar17 != (void*)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

