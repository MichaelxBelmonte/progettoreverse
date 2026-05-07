// Function: FUN_01956f50
// Address: 01956f50
// Size: 3576 bytes
// Class: MUDetectionEditorView
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


void FUN_01956f50(void* param_1)

{
  void*puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  void *pvVar6;
  int64_t lVar7;
  void*puVar8;
  int64_t *plVar9;
  void*arg1;
  int64_t this_ptr;
  int64_t *plVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float extraout_XMM0_Db;
  int64_t *local_70;
  char local_68;
  float local_44;
  int64_t *local_40;
  char local_38;
  
  plVar9 = *(int64_t **)(this_ptr + 0x170);
  if (plVar9 == (int64_t *)0x0) {
    return;
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    plVar9 = *(int64_t **)(this_ptr + 0x170);
    lVar7 = FUN_00e8b990();
    if (lVar7 != 0) {
      plVar9 = (int64_t *)plVar9[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar9 + 0x378))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 == (int64_t *)0x0) {
    return;
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar11 = (float)FUN_014bc1c0();
  plVar9 = *(int64_t **)(this_ptr + 0x170);
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    plVar9 = *(int64_t **)(this_ptr + 0x170);
    lVar7 = FUN_00e8b990();
    if (lVar7 != 0) {
      plVar9 = (int64_t *)plVar9[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar9 + 0x378))();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar12 = (float)FUN_01326e70();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  fVar11 = fVar11 * (g_02390124 / fVar12);
  fVar12 = 0.0;
  if ((0.0 <= fVar11) && (fVar12 = fVar11, g_02390124 < fVar11)) {
    fVar12 = g_02390124;
  }
  cVar5 = FUN_0198a780();
  if (cVar5 == '\0') {
    fVar11 = 0.0;
    FUN_01cfcdc0(g_0239011c,g_0239011c,g_0239011c,fVar12 * 0.0 + g_02390124);
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    fVar12 = g_0239011c - *(float *)(this_ptr + 0x14c) * g_0239011c;
    fVar11 = 0.0;
    FUN_01cfcdc0(fVar12,fVar12,fVar12,g_02390124);
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  cVar5 = FUN_01958500();
  if (cVar5 != '\0') {
    fVar11 = 0.0;
    FUN_01cfcdc0(g_0239011c,0,0,g_02390124);
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01e3f820();
  FUN_01989f80();
  fVar12 = (float)(**(code **)(&UNK_00001418 + *local_40))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40(g_02390124);
  if ((fVar12 == g_02390124) && (!NAN(fVar12) && !NAN(g_02390124))) {
    FUN_01956250();
    lVar7 = *(int64_t *)(this_ptr + 0x170);
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    cVar5 = (**(code **)(&UNK_00001760 + *local_40))();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    if (cVar5 == '\0') {
      FUN_01956250();
      cVar5 = (**(code **)(&UNK_00001818 + *local_40))();
      if (local_38 != '\0') {
        FUN_00d50b20();
      }
      if (cVar5 == '\0') {
        return;
      }
    }
    else {
      FUN_01cfcdc0(g_02390124,g_0239011c,g_0239011c,g_02390124);
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      plVar9 = (int64_t *)*arg1;
      FUN_01e3f820();
      (**(code **)(*plVar9 + 0x3b0))();
      FUN_01cfcdc0(g_0239011c,0,0,g_02390124);
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    plVar9 = (int64_t *)*arg1;
    FUN_01e3f820();
    (**(code **)(*plVar9 + 0x3b8))();
    return;
  }
  if (*(int64_t *)(this_ptr + 0x178) == 0) {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014bc240();
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) goto LAB_01957a65;
      FUN_00d50b00();
    }
    else if (local_40 == (int64_t *)0x0) goto LAB_01957a65;
    puVar8 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    plVar9 = (int64_t *)&g_02680400;
    *puVar8 = &g_02680400;
    *(void*)((int64_t)puVar8 + 0xc) = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    *(void*)((int64_t)puVar8 + 0x39) = 0;
    *(void*)((int64_t)puVar8 + 0x41) = 0;
    (*g_02680418)();
    puVar1 = *(void**)(this_ptr + 0x178);
    if (puVar1 == puVar8) {
      FUN_00d50b20();
    }
    else {
      *(void**)(this_ptr + 0x178) = puVar8;
      if (puVar1 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_01d38cd0(g_02421228);
    fVar12 = fVar11 * g_0239011c + extraout_XMM0_Db;
    fVar11 = fVar12;
    FUN_01d39400(0);
    FUN_01989f80();
    dVar2 = (double)(**(code **)(*local_40 + 0x930))(*(void*)(this_ptr + 0x10c));
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    fVar13 = g_023b1608 + fVar12;
    for (local_44 = g_02390124; fVar14 = (float)FUN_01e3f820(),
        local_44 < fVar14 + fVar11 + g_02390d00; local_44 = local_44 + g_02390124) {
      pvVar6 = _pthread_getspecific((void*)plVar9);
      plVar10 = local_40;
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        plVar9 = local_40;
        plVar10 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      FUN_01989f80();
      dVar3 = (double)(**(code **)(*local_40 + 0x930))
                                (*(float *)(this_ptr + 0x10c) + local_44 + g_02390d00);
      FUN_01989f80();
      dVar4 = (double)(**(code **)(*local_70 + 0x930))(*(float *)(this_ptr + 0x10c) + local_44);
      dVar3 = (double)(**(code **)(*plVar10 + 0x3a8))(SUB84(dVar3 - dVar2,0),SUB84(dVar4 - dVar2,0))
      ;
      fVar11 = (float)FUN_019569d0((float)dVar3);
      fVar11 = fVar12 - fVar11 * fVar13;
      FUN_01d38ba0(local_44);
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    local_44 = local_44 + g_02390d00;
    if (0.0 < local_44) {
      do {
        pvVar6 = _pthread_getspecific((void*)plVar9);
        plVar10 = local_40;
        if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          plVar10 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
        }
        FUN_01989f80();
        dVar3 = (double)(**(code **)(*local_40 + 0x930))
                                  (*(float *)(this_ptr + 0x10c) + local_44 + g_02390d00);
        FUN_01989f80();
        dVar4 = (double)(**(code **)(*local_70 + 0x930))(*(float *)(this_ptr + 0x10c) + local_44);
        dVar3 = (double)(**(code **)(*plVar10 + 0x3a8))
                                  (SUB84(dVar3 - dVar2,0),SUB84(dVar4 - dVar2,0));
        fVar11 = (float)FUN_019569d0((float)dVar3);
        FUN_01d38ba0(local_44,fVar11 * fVar13 + fVar12);
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_44 = local_44 + g_02390d00;
      } while (g_0239424c < local_44);
    }
    FUN_01d38b10();
    FUN_00d50b20();
  }
LAB_01957a65:
  FUN_01956250();
  lVar7 = *(int64_t *)(this_ptr + 0x170);
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(&UNK_00001760 + *local_40))();
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  if (cVar5 == '\0') {
    FUN_01956250();
    cVar5 = (**(code **)(&UNK_00001818 + *local_40))();
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    if (cVar5 != '\0') {
      plVar9 = (int64_t *)*arg1;
      lVar7 = *(int64_t *)(this_ptr + 0x178);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar9 + 0x3a8))();
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_01cfcdc0(g_02390124,g_0239011c,g_0239011c,g_02390124);
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar9 = (int64_t *)*arg1;
    lVar7 = *(int64_t *)(this_ptr + 0x178);
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar9 + 0x3a0))();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    FUN_01cfcdc0(g_0239011c,0,0,g_02390124);
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar9 = (int64_t *)*arg1;
    lVar7 = *(int64_t *)(this_ptr + 0x178);
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar9 + 0x3a8))();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

