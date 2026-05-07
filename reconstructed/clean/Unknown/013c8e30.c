// Function: FUN_013c8e30
// Address: 013c8e30
// Size: 1230 bytes
// Class: Unknown

void* FUN_013c8e30(int param_1,void*param_2)

{
  int64_t lVar1;
  bool bVar2;
  uint uVar3;
  code *pcVar4;
  char cVar5;
  void*puVar6;
  void*puVar7;
  int64_t lVar8;
  void *pvVar9;
  void* pVar10;
  void*puVar11;
  void*puVar12;
  int64_t *plVar13;
  int64_t arg1;
  void*this_ptr;
  uint uVar14;
  uint64_t uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double local_68;
  int local_48;
  
  dVar16 = g_023934c8;
  if (param_1 == 0) {
    dVar16 = g_0238fee8;
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar11 = &g_02572358;
  *puVar6 = &g_02572358;
  (*g_02572370)();
  pcVar4 = g_025c9ed8;
  puVar12 = (void*)*param_2;
  if (puVar12 != (void*)0x0) {
    local_48 = -1;
    while (local_48 = local_48 + 1, local_48 < *(int *)(puVar12 + 0xc)) {
      pVar10 = (void*)*(void*)(puVar12 + 0x10);
      puVar7 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &g_025c9ec0;
      puVar7[7] = 0;
      puVar7[8] = 0;
      (*pcVar4)();
      pvVar9 = _pthread_getspecific(pVar10);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar17 = (double)FUN_011f2ec0();
      pvVar9 = _pthread_getspecific(pVar10);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_68 = (double)FUN_011f2ed0();
      plVar13 = *(int64_t **)(arg1 + 0x38);
      pvVar9 = _pthread_getspecific(pVar10);
      if (pvVar9 != (void *)0x0) {
        plVar13 = *(int64_t **)(arg1 + 0x38);
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          plVar13 = (int64_t *)plVar13[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
      }
      dVar18 = (double)(**(code **)(*plVar13 + 0x398))();
      local_68 = local_68 + dVar16;
      if (dVar18 < local_68) {
        plVar13 = *(int64_t **)(arg1 + 0x38);
        pvVar9 = _pthread_getspecific(pVar10);
        if (pvVar9 != (void *)0x0) {
          plVar13 = *(int64_t **)(arg1 + 0x38);
          lVar8 = FUN_00e8b990();
          if (lVar8 != 0) {
            plVar13 = (int64_t *)plVar13[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
          }
        }
        local_68 = (double)(**(code **)(*plVar13 + 0x398))();
      }
      pvVar9 = _pthread_getspecific(pVar10);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar18 = 0.0;
      if (0.0 <= dVar17 - dVar16) {
        dVar18 = dVar17 - dVar16;
      }
      FUN_011f2ef0();
      pvVar9 = _pthread_getspecific(pVar10);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011f2f60(local_68 - dVar18);
      FUN_00d21140();
      FUN_00d50b20();
    }
    FUN_014813e0();
    puVar11 = puVar12;
  }
  uVar3 = *(uint *)((int64_t)puVar6 + 0xc);
  while (1 < (int)uVar3) {
    uVar14 = uVar3 - 1;
    lVar8 = *(int64_t *)(puVar6[2] + (uint64_t)uVar14 * 8);
    if (lVar8 != 0) {
      FUN_00d50b00();
    }
    uVar15 = (uint64_t)(uVar3 - 2);
    do {
      lVar1 = *(int64_t *)(puVar6[2] + uVar15 * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar9 = _pthread_getspecific((void*)puVar11);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar5 = FUN_011f2fc0();
      if (cVar5 != '\0') {
        pvVar9 = _pthread_getspecific((void*)puVar11);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011f3100();
        FUN_00d23f50();
        uVar14 = *(uint *)((int64_t)puVar6 + 0xc);
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    } while ((cVar5 == '\0') && (bVar2 = 0 < (int64_t)uVar15, uVar15 = uVar15 - 1, bVar2));
    uVar3 = uVar14;
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
  }
  *this_ptr = puVar6;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

