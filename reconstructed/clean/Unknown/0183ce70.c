// Function: FUN_0183ce70
// Address: 0183ce70
// Size: 2446 bytes
// Class: Unknown

void FUN_0183ce70(double param_1,double param_2,float param_3,float param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  float fVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  void*puVar14;
  void*puVar15;
  void* pVar16;
  int64_t in_RCX;
  int64_t lVar17;
  int64_t lVar18;
  int64_t in_RDX;
  int64_t lVar19;
  int64_t *plVar20;
  int64_t arg1;
  int64_t lVar21;
  uint64_t uVar22;
  int64_t in_R8;
  int64_t in_R9;
  int64_t lVar23;
  float fVar24;
  double dVar25;
  uint64_t uVar26;
  double dVar27;
  int64_t *local_res8;
  void*local_res10;
  int64_t *local_res18;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_80;
  char local_78;
  int64_t local_38;
  
  lVar10 = in_RCX;
  pvVar9 = _pthread_getspecific((void*)in_RCX);
  pVar16 = (void*)lVar10;
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013df480();
  pvVar9 = _pthread_getspecific(pVar16);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar25 = (double)FUN_01327990();
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  pvVar9 = _pthread_getspecific(pVar16);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar10 = FUN_013de790();
  lVar11 = FUN_00e7dae0((double)lVar10 * param_1);
  pvVar9 = _pthread_getspecific(pVar16);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar12 = FUN_013de650();
  lVar1 = lVar12 + lVar10;
  lVar13 = *local_res18;
  lVar2 = lVar13 + lVar12;
  lVar18 = in_R8 + in_RCX;
  lVar3 = lVar12 + arg1;
  lVar21 = lVar1 - in_RDX;
  lVar17 = lVar2 + arg1;
  if (in_RCX == -1) {
    local_38 = -1;
    lVar19 = -1;
    lVar18 = -1;
  }
  else {
    fVar24 = g_02390d34;
    if (param_3 <= g_02390d34) {
      fVar24 = param_3;
    }
    fVar4 = 0.0;
    if (0.0 <= fVar24) {
      fVar4 = fVar24;
    }
    local_38 = (lVar11 - in_RDX) - arg1;
    lVar23 = in_RCX - lVar3;
    lVar19 = lVar21 - lVar18;
    lVar13 = lVar23;
    if (param_1 < g_0238fee8) {
      dVar27 = (double)local_38;
      lVar13 = FUN_00e7dae0(((double)lVar23 / (double)(lVar21 - lVar3)) * dVar27);
      lVar19 = FUN_00e7dae0(((double)lVar19 / (double)(lVar21 - lVar3)) * dVar27);
    }
    local_38 = local_38 - lVar19;
    if (g_02390124 <= fVar4) {
      iVar6 = FUN_00e7d780((float)(local_38 - lVar13) * (g_02390d34 - fVar4));
      lVar13 = (int64_t)iVar6;
    }
    else {
      iVar6 = FUN_00e7d780(fVar4 * (float)lVar13);
      lVar13 = local_38 - iVar6;
    }
    iVar6 = FUN_00e7d850((double)in_R9 / param_2);
    fVar24 = 0.0;
    if (0.0 <= (float)lVar13 / (float)iVar6) {
      fVar24 = (float)lVar13 / (float)iVar6;
    }
    iVar7 = FUN_00e7d780();
    iVar8 = FUN_00e7d780(fVar24);
    if (iVar7 == 0) {
      iVar7 = 1;
    }
    if ((iVar8 < iVar7) &&
       (lVar19 = FUN_00e7da10((float)lVar23 * g_02394288), lVar19 <= local_38 - iVar7 * iVar6)) {
      iVar8 = iVar7;
    }
    if (iVar8 < 1) {
      *local_res10 = 0;
    }
    else {
      lVar13 = (int64_t)(iVar8 * iVar6);
    }
    lVar23 = 1;
    if (0 < lVar13) {
      lVar23 = lVar13;
    }
    local_38 = local_38 + lVar17;
    lVar19 = local_38 - lVar23;
    FUN_00e7dae0((double)in_R8 * g_0240cfc8);
    FUN_00e7dae0((double)param_4 * (double)lVar23 * g_0240cfc8);
    lVar13 = *local_res18;
  }
  lVar13 = (lVar11 - lVar10) + lVar13;
  *local_res18 = lVar13;
  puVar14 = (void*)FUN_00e8fc40();
  pVar16 = (void*)lVar13;
  FUN_00d4ff40();
  *puVar14 = &g_025683c0;
  pcVar5 = g_025683d8;
  (*g_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  puVar15 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar15 = &g_025683c0;
  (*pcVar5)();
  FUN_00c92170();
  FUN_00c92160();
  plVar20 = (int64_t *)*local_res8;
  pvVar9 = _pthread_getspecific(pVar16);
  if (pvVar9 != (void *)0x0) {
    plVar20 = (int64_t *)*local_res8;
    lVar10 = FUN_00e8b990();
    if (lVar10 != 0) {
      plVar20 = (int64_t *)plVar20[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
    }
  }
  uVar26 = (**(code **)(*plVar20 + 0x410))((double)lVar2 / dVar25,(double)lVar12 / dVar25);
  if ((local_128 != '\0') && (local_130 != 0)) {
    uVar26 = FUN_00d50b20();
  }
  iVar6 = *(int *)(puVar14 + 3);
  FUN_00c8e340(uVar26,1);
  *(int64_t *)(puVar14[2] + (int64_t)iVar6) = lVar12;
  iVar6 = *(int *)(puVar15 + 3);
  uVar26 = FUN_00c8e340(lVar12,1);
  *(int64_t *)(puVar15[2] + (int64_t)iVar6) = lVar2;
  lVar10 = lVar2;
  if (arg1 != 0) {
    plVar20 = (int64_t *)*local_res8;
    pvVar9 = _pthread_getspecific((void*)lVar2);
    if (pvVar9 != (void *)0x0) {
      plVar20 = (int64_t *)*local_res8;
      lVar10 = FUN_00e8b990();
      if (lVar10 != 0) {
        plVar20 = (int64_t *)plVar20[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
      }
    }
    uVar26 = (**(code **)(*plVar20 + 0x410))((double)lVar17 / dVar25,(double)lVar3 / dVar25);
    if ((local_118 != '\0') && (local_120 != 0)) {
      uVar26 = FUN_00d50b20();
    }
    iVar6 = *(int *)(puVar14 + 3);
    FUN_00c8e340(uVar26,1);
    *(int64_t *)(puVar14[2] + (int64_t)iVar6) = lVar3;
    iVar6 = *(int *)(puVar15 + 3);
    uVar26 = FUN_00c8e340(lVar3,1);
    *(int64_t *)(puVar15[2] + (int64_t)iVar6) = lVar17;
    lVar10 = lVar17;
  }
  pVar16 = (void*)lVar10;
  if (lVar19 != -1) {
    plVar20 = (int64_t *)*local_res8;
    pvVar9 = _pthread_getspecific(pVar16);
    if (pvVar9 != (void *)0x0) {
      plVar20 = (int64_t *)*local_res8;
      lVar10 = FUN_00e8b990();
      if (lVar10 != 0) {
        plVar20 = (int64_t *)plVar20[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
      }
    }
    (**(code **)(*plVar20 + 0x410))((double)lVar19 / dVar25,(double)in_RCX / dVar25);
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
    plVar20 = (int64_t *)*local_res8;
    pvVar9 = _pthread_getspecific(pVar16);
    if (pvVar9 != (void *)0x0) {
      plVar20 = (int64_t *)*local_res8;
      lVar10 = FUN_00e8b990();
      if (lVar10 != 0) {
        plVar20 = (int64_t *)plVar20[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
      }
    }
    uVar26 = (**(code **)(*plVar20 + 0x410))((double)local_38 / dVar25,(double)lVar18 / dVar25);
    if ((local_f8 != '\0') && (local_100 != 0)) {
      uVar26 = FUN_00d50b20();
    }
    iVar6 = *(int *)(puVar14 + 3);
    FUN_00c8e340(uVar26,1);
    *(int64_t *)(puVar14[2] + (int64_t)iVar6) = in_RCX;
    iVar6 = *(int *)(puVar14 + 3);
    FUN_00c8e340(in_RCX,1);
    *(int64_t *)(puVar14[2] + (int64_t)iVar6) = lVar18;
    iVar6 = *(int *)(puVar15 + 3);
    uVar26 = FUN_00c8e340(lVar18,1);
    pVar16 = (void*)lVar18;
    *(int64_t *)(puVar15[2] + (int64_t)iVar6) = lVar19;
    iVar6 = *(int *)(puVar15 + 3);
    uVar26 = FUN_00c8e340(uVar26,1);
    *(int64_t *)(puVar15[2] + (int64_t)iVar6) = local_38;
  }
  if (in_RDX != 0) {
    plVar20 = (int64_t *)*local_res8;
    pvVar9 = _pthread_getspecific(pVar16);
    if (pvVar9 != (void *)0x0) {
      plVar20 = (int64_t *)*local_res8;
      lVar10 = FUN_00e8b990();
      if (lVar10 != 0) {
        plVar20 = (int64_t *)plVar20[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
      }
    }
    in_RDX = (lVar2 + lVar11) - in_RDX;
    uVar26 = (**(code **)(*plVar20 + 0x410))((double)in_RDX / dVar25,(double)lVar21 / dVar25);
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      uVar26 = FUN_00d50b20();
    }
    iVar6 = *(int *)(puVar14 + 3);
    FUN_00c8e340(uVar26,1);
    *(int64_t *)(puVar14[2] + (int64_t)iVar6) = lVar21;
    iVar6 = *(int *)(puVar15 + 3);
    uVar26 = FUN_00c8e340(lVar21,1);
    *(int64_t *)(puVar15[2] + (int64_t)iVar6) = in_RDX;
  }
  iVar6 = *(int *)(puVar14 + 3);
  FUN_00c8e340(uVar26,1);
  *(int64_t *)(puVar14[2] + (int64_t)iVar6) = lVar1;
  iVar6 = *(int *)(puVar15 + 3);
  FUN_00c8e340(lVar1,1);
  lVar10 = puVar15[2];
  *(int64_t *)(lVar10 + iVar6) = lVar2 + lVar11;
  if (0xf < (int)*(uint *)(puVar14 + 3)) {
    uVar22 = 1;
    lVar11 = *(int64_t *)puVar14[2];
    do {
      lVar1 = ((int64_t *)puVar14[2])[uVar22];
      if ((lVar1 < lVar11) ||
         (*(int64_t *)(lVar10 + uVar22 * 8) < *(int64_t *)(lVar10 + -8 + uVar22 * 8))) {
        if (puVar15 == (void*)0x0) goto LAB_0183d7df;
        break;
      }
      uVar22 = uVar22 + 1;
      lVar11 = lVar1;
    } while (*(uint *)(puVar14 + 3) >> 3 != uVar22);
  }
  FUN_00d50b20();
LAB_0183d7df:
  if (puVar14 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

