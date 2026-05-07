// Function: FUN_0126d090
// Address: 0126d090
// Size: 2534 bytes
// Class: MUSampledFunction

void FUN_0126d090(int64_t param_1)

{
  int64_t *plVar1;
  bool bVar2;
  bool bVar3;
  int64_t *plVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  void* pVar9;
  int64_t *plVar10;
  int64_t this_ptr;
  float fVar11;
  double dVar12;
  double dVar13;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  double local_78;
  double local_70;
  int64_t local_60;
  char local_58;
  float local_48;
  float local_44;
  int64_t local_38;
  
  local_78 = *(double *)(this_ptr + 0xf0);
  local_44 = (float)_exp2f(*(float *)(this_ptr + 0x13c) * g_023941f4);
  plVar4 = (int64_t *)FUN_000bea40();
  (**(code **)(*plVar4 + 0x18))();
  pvVar5 = _pthread_getspecific((void*)param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb6d0();
  pVar9 = (void*)param_1;
  if (*(int64_t *)(this_ptr + 0xa8) == 0) {
LAB_0126d22e:
    bVar3 = false;
LAB_0126d234:
    local_70 = 0.0;
    local_38 = 0;
    local_48 = local_44;
  }
  else {
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar12 = (double)FUN_012dfea0();
    pVar9 = (void*)param_1;
    if (dVar12 <= 0.0) goto LAB_0126d22e;
    if (*(int64_t *)(this_ptr + 0xa8) == 0) {
      local_58 = '\0';
      local_60 = 0;
LAB_0126d6a7:
      local_38 = 0;
      bVar3 = false;
      if (local_58 != '\0') {
        local_38 = 0;
        bVar3 = false;
        if (local_60 != 0) {
          FUN_00d50b20();
        }
      }
LAB_0126d6c7:
      pVar9 = (void*)param_1;
      if (local_38 != 0) goto LAB_0126d6d2;
      goto LAB_0126d234;
    }
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff70();
    local_38 = local_60;
    param_1 = local_60;
    if (local_60 == 0) goto LAB_0126d6a7;
    if (local_58 == '\0') {
      FUN_00d50b00();
      bVar3 = true;
      goto LAB_0126d6c7;
    }
    bVar3 = true;
LAB_0126d6d2:
    local_70 = 0.0;
    pvVar5 = _pthread_getspecific((void*)param_1);
    lVar8 = local_38;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      lVar8 = *(int64_t *)(local_38 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      param_1 = local_38;
    }
    local_48 = (float)_exp2f(*(float *)(lVar8 + 0x13c) * g_023941f4);
    fVar11 = (float)_exp2f(g_023941f4 * *(float *)(this_ptr + 0x13c));
    pVar9 = (void*)param_1;
    if ((local_48 != fVar11) || (NAN(local_48) || NAN(fVar11))) {
      pvVar5 = _pthread_getspecific(pVar9);
      lVar8 = local_38;
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        lVar8 = *(int64_t *)(local_38 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
        param_1 = local_38;
      }
      pVar9 = (void*)param_1;
      dVar12 = *(double *)(this_ptr + 0xf0);
      if (*(double *)(lVar8 + 0xf0) <= *(double *)(this_ptr + 0xf0)) {
        dVar12 = *(double *)(lVar8 + 0xf0);
      }
      pvVar5 = _pthread_getspecific(pVar9);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar13 = (double)FUN_012dfea0();
      dVar12 = dVar12 * dVar13 * g_023942d0;
      local_70 = dVar12 + 0.0;
      fVar11 = (float)_exp2f(*(float *)(this_ptr + 0x13c) * g_023941f4);
      local_48 = (float)((dVar12 / (dVar12 + dVar12)) * (double)(local_48 - fVar11) + (double)fVar11
                        );
    }
  }
  if (*(int64_t *)(this_ptr + 0xa0) == 0) {
LAB_0126d31d:
    bVar2 = false;
  }
  else {
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar12 = (double)FUN_012dfea0();
    if (dVar12 <= 0.0) goto LAB_0126d31d;
    if (*(int64_t *)(this_ptr + 0xa0) != 0) {
      pvVar5 = _pthread_getspecific(pVar9);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dff00();
      if (local_60 == 0) goto LAB_0126d7af;
      lVar8 = local_60;
      if (local_58 == '\0') {
        FUN_00d50b00();
        bVar2 = true;
        goto LAB_0126d7cc;
      }
      bVar2 = true;
LAB_0126d7d5:
      pvVar5 = _pthread_getspecific(pVar9);
      lVar6 = lVar8;
      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        lVar6 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
      }
      local_44 = (float)_exp2f(*(float *)(lVar6 + 0x13c) * g_023941f4);
      fVar11 = (float)_exp2f(g_023941f4 * *(float *)(this_ptr + 0x13c));
      if ((local_44 != fVar11) || (NAN(local_44) || NAN(fVar11))) {
        pvVar5 = _pthread_getspecific(pVar9);
        lVar6 = lVar8;
        if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          lVar6 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
        }
        dVar12 = *(double *)(this_ptr + 0xf0);
        if (*(double *)(lVar6 + 0xf0) <= *(double *)(this_ptr + 0xf0)) {
          dVar12 = *(double *)(lVar6 + 0xf0);
        }
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar13 = (double)FUN_012dfea0();
        dVar12 = dVar12 * dVar13 * g_023942d0;
        local_78 = local_78 - dVar12;
        fVar11 = (float)_exp2f(*(float *)(this_ptr + 0x13c) * g_023941f4);
        local_44 = (float)((dVar12 / (dVar12 + dVar12)) * (double)(local_44 - fVar11) +
                          (double)fVar11);
      }
      goto LAB_0126d326;
    }
    local_58 = '\0';
    local_60 = 0;
LAB_0126d7af:
    lVar8 = 0;
    bVar2 = false;
    if (local_58 != '\0') {
      bVar2 = false;
      lVar8 = 0;
      if (local_60 != 0) {
        FUN_00d50b20();
      }
    }
LAB_0126d7cc:
    if (lVar8 != 0) goto LAB_0126d7d5;
  }
  lVar8 = 0;
LAB_0126d326:
  if ((local_70 != 0.0) || (NAN(local_70))) {
    pvVar5 = _pthread_getspecific(pVar9);
    plVar10 = plVar4;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar10 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar10 + 0x410))(0,(double)local_48);
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar9);
    plVar10 = plVar4;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar10 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    fVar11 = (float)_exp2f(*(float *)(this_ptr + 0x13c) * g_023941f4);
    (**(code **)(*plVar10 + 0x410))(local_70,(double)fVar11);
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    pvVar5 = _pthread_getspecific(pVar9);
    plVar10 = plVar4;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar10 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    fVar11 = (float)_exp2f(*(float *)(this_ptr + 0x13c) * g_023941f4);
    (**(code **)(*plVar10 + 0x410))(0,(double)fVar11);
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar5 = _pthread_getspecific(pVar9);
  plVar10 = plVar4;
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    plVar10 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  fVar11 = (float)_exp2f(*(float *)(this_ptr + 0x13c) * g_023941f4);
  (**(code **)(*plVar10 + 0x410))(local_78,(double)fVar11);
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != *(double *)(this_ptr + 0xf0)) ||
     (NAN(local_78) || NAN(*(double *)(this_ptr + 0xf0)))) {
    pvVar5 = _pthread_getspecific(pVar9);
    plVar10 = plVar4;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar10 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar10 + 0x410))(*(void*)(this_ptr + 0xf0),(double)local_44);
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb720();
  plVar10 = (int64_t *)(this_ptr + 400);
  FUN_00d64850();
  plVar1 = (int64_t *)*plVar10;
  if (plVar1 != plVar4) {
    FUN_00d50b00();
    *plVar10 = (int64_t)plVar4;
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d64910();
  lVar6 = FUN_00e8b990();
  if (lVar6 != 0) {
    FUN_00e8b990();
    lVar6 = *plVar10;
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    FUN_00cb00c0();
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
  }
  if ((bVar2) && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

