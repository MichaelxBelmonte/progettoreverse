// Function: FUN_0173d440
// Address: 0173d440
// Size: 2986 bytes
// Class: Unknown

void* FUN_0173d440(float param_1,float param_2)

{
  code *pcVar1;
  code *pcVar2;
  bool bVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  void *pvVar7;
  int64_t lVar8;
  code *pcVar9;
  void*puVar10;
  int64_t lVar11;
  void* in_ECX;
  void* pVar12;
  code *pcVar13;
  uint in_EDX;
  uint unaff_ESI;
  void*this_ptr;
  uint uVar14;
  int iVar15;
  void*puVar16;
  bool bVar17;
  float fVar18;
  
  pcVar4 = FUN_00e8fc40();
  FUN_00d4ff40();
  *(int64_t *)(pcVar4 + 0x50) = 0;
  *(int64_t *)(pcVar4 + 0x38) = 0;
  *(int64_t *)(pcVar4 + 0x40) = 0;
  *(void*)(pcVar4 + 0x48) = 0;
  *(void**)pcVar4 = &g_025fee18;
  *(void*)(pcVar4 + 0x6c) = 0;
  *(int64_t *)(pcVar4 + 0x58) = 0;
  *(int64_t *)(pcVar4 + 0x60) = 0;
  *(void*)(pcVar4 + 0x68) = 0;
  FUN_00d500e0();
  pcVar5 = FUN_00e8fc40();
  FUN_01a016a0();
  (**(code **)(*(int64_t *)pcVar5 + 0x18))();
  pcVar6 = FUN_00e8fc40();
  FUN_0013e060();
  (**(code **)(*(int64_t *)pcVar6 + 0x18))();
  pvVar7 = _pthread_getspecific(in_ECX);
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    in_ECX = (void*)pcVar5;
  }
  FUN_01770880();
  pvVar7 = _pthread_getspecific(in_ECX);
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    in_ECX = (void*)pcVar6;
  }
  FUN_01736d20();
  pvVar7 = _pthread_getspecific(in_ECX);
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    in_ECX = (void*)pcVar6;
  }
  FUN_01736c00();
  pvVar7 = _pthread_getspecific(in_ECX);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0176fd70();
  pcVar9 = FUN_00e8fc40();
  FUN_00d4ff40();
  pcVar13 = &g_025ffd60;
  *(void**)pcVar9 = &g_025ffd60;
  *(int64_t *)(pcVar9 + 0x38) = 0;
  *(int64_t *)(pcVar9 + 0x40) = 0;
  pcVar1 = g_025ffd78;
  (*g_025ffd78)();
  pvVar7 = _pthread_getspecific((void*)pcVar13);
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    pcVar13 = pcVar9;
  }
  FUN_01779ed0(0);
  pvVar7 = _pthread_getspecific((void*)pcVar13);
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    pcVar13 = pcVar9;
  }
  FUN_01779f40();
  pvVar7 = _pthread_getspecific((void*)pcVar13);
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    pcVar13 = pcVar5;
  }
  FUN_0176fde0();
  if (0 < (int)unaff_ESI) {
    uVar14 = 1;
    do {
      pVar12 = (void*)pcVar13;
      puVar10 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar10 = &g_025ffd60;
      puVar10[7] = 0;
      puVar10[8] = 0;
      (*pcVar1)();
      FUN_00e7d780(((float)(int)uVar14 * param_2) / g_023908e0);
      pvVar7 = _pthread_getspecific(pVar12);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01779ed0((float)(int)uVar14 * param_2);
      pvVar7 = _pthread_getspecific(pVar12);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01779f40();
      pvVar7 = _pthread_getspecific(pVar12);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0176fde0();
      FUN_00d50b20();
      pcVar13 = (uint64_t)(uVar14 + 1);
      bVar17 = uVar14 != unaff_ESI;
      uVar14 = uVar14 + 1;
    } while (bVar17);
  }
  if (0 < (int)in_EDX) {
    uVar14 = 1;
    do {
      pVar12 = (void*)pcVar13;
      puVar10 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar10 = &g_025ffd60;
      puVar10[7] = 0;
      puVar10[8] = 0;
      (*pcVar1)();
      fVar18 = (float)((uint)(float)(int)uVar14 ^ g_023945e0) * param_2;
      FUN_00e7d780(fVar18 / g_023908e0);
      pvVar7 = _pthread_getspecific(pVar12);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01779ed0(fVar18);
      pvVar7 = _pthread_getspecific(pVar12);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01779f40();
      pvVar7 = _pthread_getspecific(pVar12);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01770f30();
      FUN_00d50b20();
      pcVar13 = (uint64_t)(uVar14 + 1);
      bVar17 = uVar14 != in_EDX;
      uVar14 = uVar14 + 1;
    } while (bVar17);
  }
  pvVar7 = _pthread_getspecific((void*)pcVar13);
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    pcVar13 = pcVar6;
  }
  FUN_01735c40();
  pvVar7 = _pthread_getspecific((void*)pcVar13);
  lVar8 = g_027e3c20;
  if ((pvVar7 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar8 = g_027e3c20, lVar11 != 0)) {
    pcVar13 = pcVar6;
  }
  g_027e3c20 = lVar8;
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  FUN_01735120();
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  pcVar1 = g_025fe688;
  if ((int)(in_EDX + unaff_ESI) < 0) {
    bVar17 = false;
    puVar10 = (void*)0x0;
  }
  else {
    iVar15 = in_EDX + unaff_ESI + 1;
    bVar17 = false;
    pcVar13 = g_025fe688;
    puVar16 = (void*)0x0;
    do {
      puVar10 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar10 = &g_025fe670;
      puVar10[7] = 0;
      puVar10[8] = 0;
      puVar10[9] = 0;
      (*pcVar1)();
      if (puVar10 == puVar16) {
        puVar10 = puVar16;
        if (bVar17) {
          FUN_00d50b20();
          bVar3 = bVar17;
        }
        else {
          bVar3 = true;
        }
      }
      else {
        bVar3 = true;
        if ((bVar17) && (puVar16 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      bVar17 = bVar3;
      pvVar7 = _pthread_getspecific((void*)pcVar13);
      lVar8 = g_027cd560;
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
        lVar8 = g_027cd560;
      }
      g_027cd560 = lVar8;
      if (lVar8 != 0) {
        FUN_00d50b00();
      }
      FUN_017395b0();
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
      pvVar7 = _pthread_getspecific((void*)pcVar13);
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        pcVar13 = pcVar6;
      }
      FUN_01735cb0();
      iVar15 = iVar15 + -1;
      puVar16 = puVar10;
    } while (iVar15 != 0);
  }
  pvVar7 = _pthread_getspecific((void*)pcVar13);
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    pcVar13 = pcVar5;
  }
  FUN_01770eb0();
  pvVar7 = _pthread_getspecific((void*)pcVar13);
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    pcVar13 = pcVar6;
  }
  FUN_01736de0();
  pvVar7 = _pthread_getspecific((void*)pcVar13);
  if ((pvVar7 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
    pcVar2 = *(code **)(pcVar4 + 0x60);
    pcVar1 = pcVar4;
  }
  else {
    pcVar1 = *(code **)(pcVar4 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8 + 0x20);
    pcVar2 = *(code **)(pcVar1 + 0x60);
    pcVar13 = pcVar4;
  }
  if (pcVar2 != pcVar5) {
    FUN_00d64850();
    pcVar2 = *(code **)(pcVar1 + 0x60);
    if (pcVar2 != pcVar5) {
      if (pcVar5 != 0x0) {
        FUN_00d50b00();
      }
      *(code **)(pcVar1 + 0x60) = pcVar5;
      if (pcVar2 != 0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  pvVar7 = _pthread_getspecific((void*)pcVar13);
  if ((pvVar7 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
    pcVar2 = *(code **)(pcVar4 + 0x58);
    pcVar1 = pcVar4;
  }
  else {
    pcVar1 = *(code **)(pcVar4 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8 + 0x20);
    pcVar2 = *(code **)(pcVar1 + 0x58);
    pcVar13 = pcVar4;
  }
  pVar12 = (void*)pcVar13;
  if (pcVar2 != pcVar6) {
    FUN_00d64850();
    pcVar13 = *(code **)(pcVar1 + 0x58);
    if (pcVar13 != pcVar6) {
      if (pcVar6 != 0x0) {
        FUN_00d50b00();
      }
      *(code **)(pcVar1 + 0x58) = pcVar6;
      if (pcVar13 != 0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  FUN_00e7d780(param_1 / g_023908e0);
  pvVar7 = _pthread_getspecific(pVar12);
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    pVar12 = (void*)pcVar5;
  }
  FUN_01770300();
  pvVar7 = _pthread_getspecific(pVar12);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01770230(param_1);
  *this_ptr = pcVar4;
  *(void*)(this_ptr + 1) = 1;
  if (pcVar9 != 0x0) {
    FUN_00d50b20();
  }
  if ((bVar17) && (puVar10 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (pcVar6 != 0x0) {
    FUN_00d50b20();
  }
  if (pcVar5 != 0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

