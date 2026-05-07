// Function: FUN_0164b170
// Address: 0164b170
// Size: 2183 bytes
// Class: MDMetaWindowController

void FUN_0164b170(int64_t *param_1)

{
  uint uVar1;
  int64_t lVar2;
  int64_t *plVar3;
  void*puVar4;
  code *pcVar5;
  int64_t *plVar6;
  int iVar7;
  uint32_t uVar8;
  void *pvVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int64_t *plVar12;
  void*puVar13;
  void* pVar14;
  uint64_t uVar15;
  code *pcVar16;
  int64_t this_ptr;
  int64_t *plVar17;
  int64_t lVar18;
  uint64_t uVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  uint64_t local_70;
  int64_t *local_68;
  int64_t *local_40;
  char local_38;
  
  plVar6 = local_40;
  *(byte *)(this_ptr + 0xf5) = g_028ad7e8;
  pvVar9 = _pthread_getspecific((void*)param_1);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01646020();
  iVar7 = *(int *)((int64_t)local_40 + 0xc);
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  if (iVar7 != 0) {
    pvVar9 = _pthread_getspecific((void*)param_1);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01646020();
    local_68 = local_40;
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    if (0 < *(int *)((int64_t)local_68 + 0xc)) {
      lVar18 = 0;
      do {
        lVar2 = *(int64_t *)(local_68[2] + lVar18 * 8);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        pvVar9 = _pthread_getspecific((void*)param_1);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0132dbf0(g_0240f0f0);
        pvVar9 = _pthread_getspecific((void*)param_1);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0132d800();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar18 = lVar18 + 1;
      } while (lVar18 < *(int *)((int64_t)local_68 + 0xc));
    }
    plVar3 = *(int64_t **)local_68[2];
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    pvVar9 = _pthread_getspecific((void*)param_1);
    if ((pvVar9 != (void *)0x0) && (lVar18 = FUN_00e8b990(), lVar18 != 0)) {
      param_1 = plVar3;
    }
    FUN_01320d00();
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    pvVar9 = _pthread_getspecific((void*)param_1);
    if ((pvVar9 != (void *)0x0) && (lVar18 = FUN_00e8b990(), lVar18 != 0)) {
      param_1 = plVar3;
    }
    FUN_0132d790();
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    pvVar9 = _pthread_getspecific((void*)param_1);
    plVar12 = local_40;
    if ((pvVar9 != (void *)0x0) && (lVar18 = FUN_00e8b990(), lVar18 != 0)) {
      param_1 = local_40;
      plVar12 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar18 + 0x154) & 1) + 4];
    }
    pVar14 = (void*)param_1;
    dVar21 = (double)(**(code **)(*plVar12 + 0x398))();
    *(double *)(this_ptr + 0xf8) = dVar21;
    pvVar9 = _pthread_getspecific(pVar14);
    plVar12 = local_40;
    if ((pvVar9 != (void *)0x0) && (lVar18 = FUN_00e8b990(), lVar18 != 0)) {
      plVar12 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar18 + 0x154) & 1) + 4];
    }
    dVar22 = (double)(**(code **)(*plVar12 + 0x370))();
    uVar19 = (uint64_t)(dVar21 * dVar22);
    uVar1 = *(uint *)(local_40 + 6);
    uVar15 = (uint64_t)(int)uVar1;
    if ((uVar19 | uVar15) >> 0x20 == 0) {
      iVar7 = (int)((uVar19 & 0xffffffff) / (uint64_t)uVar1);
      uVar19 = (uVar19 & 0xffffffff) % (uint64_t)uVar1;
    }
    else {
      iVar7 = (int)((int64_t)uVar19 / (int64_t)uVar15);
      uVar19 = (int64_t)uVar19 % (int64_t)uVar15;
    }
    *(int *)(this_ptr + 0x100) = iVar7 + 1;
    lVar18 = local_40[4];
    dVar21 = (double)local_40[3];
    if (*(int64_t *)(this_ptr + 0x78) == 0) {
      puVar13 = (void*)FUN_00e8fc40(uVar15,uVar19);
      FUN_00d4ff40();
      *puVar13 = &g_02572358;
      (*g_02572370)();
      puVar4 = *(void**)(this_ptr + 0x78);
      if (puVar4 == puVar13) {
        FUN_00d50b20();
      }
      else {
        *(void**)(this_ptr + 0x78) = puVar13;
        if (puVar4 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00d216c0();
    plVar12 = local_68;
    uVar10 = FUN_00e83010();
    *(void*)(this_ptr + 0xa8) = uVar10;
    uVar10 = FUN_00e83010();
    *(void*)(this_ptr + 0xb0) = uVar10;
    uVar10 = FUN_00e83010();
    *(void*)(this_ptr + 0xb8) = uVar10;
    uVar10 = FUN_00e83010();
    dVar21 = (double)(int)lVar18 * dVar21 + g_023942d0;
    *(void*)(this_ptr + 0xc0) = uVar10;
    ___bzero();
    ___bzero();
    ___bzero();
    ___bzero();
    *(void*)(this_ptr + 0xf4) = 0;
    local_70 = FUN_00e83010();
    *(void*)(this_ptr + 200) = 0;
    pcVar5 = g_02572370;
    iVar7 = *(int *)((int64_t)plVar12 + 0xc);
    if (iVar7 < 1) {
      fVar20 = 0.0;
    }
    else {
      lVar18 = 0;
      pcVar16 = g_02572370;
      do {
        pVar14 = (void*)pcVar16;
        lVar2 = *(int64_t *)(local_68[2] + lVar18 * 8);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        pvVar9 = _pthread_getspecific(pVar14);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01320d00();
        if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        ___bzero();
        pvVar9 = _pthread_getspecific(pVar14);
        plVar12 = local_40;
        if ((pvVar9 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          plVar12 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
        }
        pvVar9 = _pthread_getspecific(pVar14);
        plVar17 = local_40;
        if ((pvVar9 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          plVar17 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
        }
        uVar8 = (**(code **)(*plVar17 + 0x3a0))();
        (**(code **)(*plVar12 + 0x388))(0,g_0238fee8,uVar8,(int64_t)-((int)dVar21 / 2));
        plVar12 = (int64_t *)FUN_00e8fc40();
        FUN_00d4ff40();
        *plVar12 = (int64_t)&g_02572358;
        (*pcVar5)();
        local_38 = '\0';
        FUN_00d21140();
        local_88 = '\0';
        local_80 = plVar6;
        local_78 = '\0';
        local_90 = plVar12;
        FUN_014b0a00(*(void*)(this_ptr + 0x100),&local_90,&local_80);
        if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01647910(0,g_02390124,g_02390124,g_02390124);
        *(float *)(this_ptr + 200) =
             *(float *)(*(int64_t *)(this_ptr + 0xc0) + lVar18 * 4) + *(float *)(this_ptr + 200);
        FUN_00d50b20();
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar18 = lVar18 + 1;
        iVar7 = *(int *)((int64_t)local_68 + 0xc);
        pcVar16 = (int64_t)iVar7;
        local_40 = plVar12;
      } while (lVar18 < (int64_t)pcVar16);
      fVar20 = *(float *)(this_ptr + 200);
    }
    *(float *)(this_ptr + 200) = fVar20 / (float)iVar7;
    FUN_00e83070();
    g_028ad7e8 = g_028ad7e8 ^ 1;
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}

