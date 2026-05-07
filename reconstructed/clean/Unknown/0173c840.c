// Function: FUN_0173c840
// Address: 0173c840
// Size: 2366 bytes
// Class: Unknown

void* FUN_0173c840(float param_1,float param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  void *pvVar9;
  int64_t lVar10;
  void*puVar11;
  int64_t lVar12;
  void* pVar13;
  int64_t *in_RCX;
  int unaff_ESI;
  void*this_ptr;
  int iVar14;
  void*puVar15;
  float fVar16;
  
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  plVar6[10] = 0;
  plVar6[7] = 0;
  plVar6[8] = 0;
  *(void*)(plVar6 + 9) = 0;
  *plVar6 = (int64_t)&g_025fee18;
  *(void*)((int64_t)plVar6 + 0x6c) = 0;
  plVar6[0xb] = 0;
  plVar6[0xc] = 0;
  *(void*)(plVar6 + 0xd) = 0;
  FUN_00d500e0();
  plVar7 = (int64_t *)FUN_00e8fc40();
  FUN_01a016a0();
  (**(code **)(*plVar7 + 0x18))();
  plVar8 = (int64_t *)FUN_00e8fc40();
  FUN_0013e060();
  (**(code **)(*plVar8 + 0x18))();
  pvVar9 = _pthread_getspecific((void*)in_RCX);
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    in_RCX = plVar7;
  }
  FUN_01770880();
  pvVar9 = _pthread_getspecific((void*)in_RCX);
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    in_RCX = plVar8;
  }
  FUN_01736d20();
  pvVar9 = _pthread_getspecific((void*)in_RCX);
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    in_RCX = plVar8;
  }
  FUN_01736c00();
  pvVar9 = _pthread_getspecific((void*)in_RCX);
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    in_RCX = plVar7;
  }
  FUN_0176fd70();
  pcVar4 = g_025ffd78;
  if (-1 < unaff_ESI) {
    iVar14 = 0;
    do {
      puVar11 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar11 = &g_025ffd60;
      puVar11[7] = 0;
      puVar11[8] = 0;
      (*pcVar4)();
      fVar16 = (float)iVar14 * (param_2 / (float)unaff_ESI);
      FUN_00e7d780(fVar16 / g_023908e0);
      pvVar9 = _pthread_getspecific((void*)in_RCX);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01779ed0(fVar16);
      pvVar9 = _pthread_getspecific((void*)in_RCX);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01779f40();
      pvVar9 = _pthread_getspecific((void*)in_RCX);
      if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        in_RCX = plVar7;
      }
      FUN_0176fde0();
      FUN_00d50b20();
      iVar14 = iVar14 + 1;
    } while (unaff_ESI + 1 != iVar14);
  }
  pvVar9 = _pthread_getspecific((void*)in_RCX);
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    in_RCX = plVar8;
  }
  FUN_01735c40();
  pvVar9 = _pthread_getspecific((void*)in_RCX);
  lVar10 = g_027e3c20;
  if ((pvVar9 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar10 = g_027e3c20, lVar12 != 0)) {
    in_RCX = plVar8;
  }
  g_027e3c20 = lVar10;
  if (lVar10 != 0) {
    FUN_00d50b00();
  }
  FUN_01735120();
  if (lVar10 != 0) {
    FUN_00d50b20();
  }
  pcVar4 = g_025fe688;
  if (unaff_ESI < 1) {
    bVar3 = false;
    puVar11 = (void*)0x0;
  }
  else {
    bVar3 = false;
    puVar15 = (void*)0x0;
    do {
      puVar11 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar11 = &g_025fe670;
      puVar11[7] = 0;
      puVar11[8] = 0;
      puVar11[9] = 0;
      (*pcVar4)();
      if (puVar11 == puVar15) {
        puVar11 = puVar15;
        if (bVar3) {
          FUN_00d50b20();
          bVar5 = bVar3;
        }
        else {
          bVar5 = true;
        }
      }
      else {
        bVar5 = true;
        if ((bVar3) && (puVar15 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      bVar3 = bVar5;
      pvVar9 = _pthread_getspecific((void*)in_RCX);
      lVar10 = g_027cd560;
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
        lVar10 = g_027cd560;
      }
      g_027cd560 = lVar10;
      if (lVar10 != 0) {
        FUN_00d50b00();
      }
      FUN_017395b0();
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
      pvVar9 = _pthread_getspecific((void*)in_RCX);
      if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        in_RCX = plVar8;
      }
      FUN_01735cb0();
      unaff_ESI = unaff_ESI + -1;
      puVar15 = puVar11;
    } while (unaff_ESI != 0);
  }
  pvVar9 = _pthread_getspecific((void*)in_RCX);
  if ((pvVar9 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
    plVar2 = (int64_t *)plVar6[0xc];
    plVar1 = plVar6;
  }
  else {
    plVar1 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
    plVar2 = (int64_t *)plVar1[0xc];
    in_RCX = plVar6;
  }
  if (plVar2 != plVar7) {
    FUN_00d64850();
    plVar2 = (int64_t *)plVar1[0xc];
    if (plVar2 != plVar7) {
      if (plVar7 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      plVar1[0xc] = (int64_t)plVar7;
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  pvVar9 = _pthread_getspecific((void*)in_RCX);
  if ((pvVar9 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
    plVar2 = (int64_t *)plVar6[0xb];
    plVar1 = plVar6;
  }
  else {
    plVar1 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
    plVar2 = (int64_t *)plVar1[0xb];
    in_RCX = plVar6;
  }
  if (plVar2 != plVar8) {
    FUN_00d64850();
    plVar2 = (int64_t *)plVar1[0xb];
    if (plVar2 != plVar8) {
      if (plVar8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      plVar1[0xb] = (int64_t)plVar8;
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  FUN_00e7d780(param_1 / g_023908e0);
  pvVar9 = _pthread_getspecific((void*)in_RCX);
  if ((pvVar9 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
    lVar10 = plVar6[0xc];
  }
  else {
    lVar10 = *(int64_t *)(plVar6[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4] + 0x60);
    in_RCX = plVar6;
  }
  if (lVar10 != 0) {
    FUN_00d50b00();
  }
  pvVar9 = _pthread_getspecific((void*)in_RCX);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01770300();
  if (lVar10 != 0) {
    FUN_00d50b20();
  }
  pvVar9 = _pthread_getspecific((void*)in_RCX);
  if ((pvVar9 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
    lVar10 = plVar6[0xc];
  }
  else {
    lVar10 = *(int64_t *)(plVar6[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4] + 0x60);
    in_RCX = plVar6;
  }
  pVar13 = (void*)in_RCX;
  if (lVar10 != 0) {
    FUN_00d50b00();
  }
  pvVar9 = _pthread_getspecific(pVar13);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01770230(param_1);
  if (lVar10 != 0) {
    FUN_00d50b20();
  }
  *this_ptr = plVar6;
  *(void*)(this_ptr + 1) = 1;
  if ((bVar3) && (puVar11 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

