// Function: FUN_013e71c0
// Address: 013e71c0
// Size: 2291 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x013e7647) */
/* WARNING: Removing unreachable block (ram,0x013e7650) */
/* WARNING: Removing unreachable block (ram,0x013e767e) */
/* WARNING: Removing unreachable block (ram,0x013e768a) */
/* WARNING: Removing unreachable block (ram,0x013e7241) */
/* WARNING: Removing unreachable block (ram,0x013e724a) */
/* WARNING: Removing unreachable block (ram,0x013e7745) */
/* WARNING: Removing unreachable block (ram,0x013e774e) */
/* WARNING: Removing unreachable block (ram,0x013e748c) */
/* WARNING: Removing unreachable block (ram,0x013e7495) */

void FUN_013e71c0(longlong *param_1,longlong param_2)

{
  double dVar1;
  longlong *plVar2;
  double dVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  uint uVar8;
  void *pvVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  pthread_key_t pVar14;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  longlong *local_68;
  char local_60;
  longlong *local_40;
  longlong *local_38;
  
  pvVar9 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01270420();
  pVar14 = (pthread_key_t)param_1;
  if (local_60 == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_013e724f;
    }
  }
  else if (local_68 != (longlong *)0x0) {
LAB_013e724f:
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c71a0();
    local_38 = local_68;
    if (local_68 == (longlong *)0x0) {
      local_38 = (longlong *)0x0;
      bVar4 = false;
    }
    else if (local_60 == '\0') {
      FUN_00d50b00();
      bVar4 = true;
    }
    else {
      bVar4 = true;
    }
    pVar14 = (pthread_key_t)local_68;
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
  pvVar9 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar5 = FUN_01263cf0();
  if (cVar5 != '\0') {
    return;
  }
  pvVar9 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar5 = FUN_01263ef0();
  if (cVar5 != '\0') {
    return;
  }
  pvVar9 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar5 = FUN_0126f100();
  if (cVar5 != '\0') {
    return;
  }
  lVar11 = *unaff_RSI;
  pvVar9 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar9 != (void *)0x0) {
    lVar11 = *unaff_RSI;
    lVar10 = FUN_00e8b990();
    if (lVar10 != 0) {
      lVar11 = *(longlong *)(lVar11 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8);
    }
  }
  pVar14 = (pthread_key_t)param_1;
  plVar2 = *(longlong **)(lVar11 + 200);
  if (plVar2 == (longlong *)0x0) {
LAB_013e77a0:
    pVar14 = (pthread_key_t)param_1;
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
      lVar11 = *unaff_RSI;
      pvVar9 = _pthread_getspecific(pVar14);
      if (pvVar9 != (void *)0x0) {
        lVar11 = *unaff_RSI;
        lVar10 = FUN_00e8b990();
        if (lVar10 != 0) {
          lVar11 = *(longlong *)(lVar11 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8);
        }
      }
      uVar8 = (uint)(*(float *)(lVar11 + 0xf8) / DAT_023908e0);
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
    local_40 = (longlong *)0x0;
  }
  else {
    FUN_00d50b00();
    pvVar9 = _pthread_getspecific(pVar14);
    plVar13 = plVar2;
    if ((pvVar9 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
      plVar13 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar11 + 0x154) & 1) + 4];
    }
    lVar11 = plVar13[0xd];
    param_1 = plVar2;
    if (lVar11 == 0) goto LAB_013e77a0;
    plVar13 = plVar2;
    FUN_00d50b00();
    pvVar9 = _pthread_getspecific((pthread_key_t)plVar13);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01507e40();
    if (local_68 == (longlong *)0x0) {
      pvVar9 = _pthread_getspecific((pthread_key_t)plVar13);
      if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        lVar11 = *(longlong *)(lVar11 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8);
      }
      uVar8 = *(uint *)(lVar11 + 0x50);
      bVar4 = false;
      goto LAB_013e78ff;
    }
    if (local_60 == '\0') {
      FUN_00d50b00();
    }
    local_40 = local_68;
    pvVar9 = _pthread_getspecific((pthread_key_t)plVar13);
    if ((pvVar9 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
      plVar13 = local_68;
      local_68 = (longlong *)local_68[(ulonglong)(*(uint *)(lVar11 + 0x154) & 1) + 4];
    }
    pVar14 = (pthread_key_t)plVar13;
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
  plVar13 = (longlong *)unaff_RDI[0x20];
  if (plVar13 == (longlong *)0x0) {
    fVar17 = fVar17 * DAT_023d5000;
  }
  else {
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      plVar13 = (longlong *)unaff_RDI[0x20];
      lVar11 = FUN_00e8b990();
      if (lVar11 != 0) {
        plVar13 = (longlong *)plVar13[(ulonglong)(*(uint *)(lVar11 + 0x154) & 1) + 4];
      }
    }
    fVar17 = (float)(**(code **)(*plVar13 + 0x390))(fVar17);
  }
  local_38 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *local_38 = (longlong)&DAT_02539a88;
  local_38[2] = 0;
  (*DAT_02539aa0)();
  fVar18 = DAT_023d5000;
  if (fVar17 <= DAT_023d5000) {
    fVar18 = fVar17;
  }
  fVar17 = DAT_02390d04;
  if (DAT_02390d04 <= fVar18) {
    fVar17 = fVar18;
  }
  pVar14 = uVar8 & 0xff;
  FUN_00b519f0(uVar8 & 0xff,0,(int)(fVar17 + DAT_0239011c) & 0xff);
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar4) {
    FUN_00d50b20();
  }
  if (local_40 == (longlong *)0x0) {
    bVar4 = true;
  }
  else {
    bVar4 = true;
    FUN_00d50b20();
  }
LAB_013e74a6:
  lVar11 = *unaff_RSI;
  pvVar9 = _pthread_getspecific(pVar14);
  if (pvVar9 != (void *)0x0) {
    lVar11 = *unaff_RSI;
    lVar10 = FUN_00e8b990();
    if (lVar10 != 0) {
      lVar11 = *(longlong *)(lVar11 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8);
    }
  }
  dVar1 = *(double *)(lVar11 + 0xb8);
  dVar3 = (double)FUN_00b335d0();
  param_2 = (longlong)(dVar1 * dVar3) + param_2;
  lVar11 = unaff_RDI[0x1d];
  uVar8 = *(uint *)(lVar11 + 0xc);
  uVar15 = (ulonglong)uVar8;
  if (0 < (int)uVar8) {
    while( true ) {
      uVar8 = uVar8 - 1;
      cVar5 = *(char *)(*(longlong *)(*(longlong *)(lVar11 + 0x10) + (ulonglong)uVar8 * 8) + 0x20);
      cVar6 = FUN_00b518d0();
      if (cVar5 == cVar6) {
        lVar11 = *(longlong *)(*(longlong *)(unaff_RDI[0x1d] + 0x10) + (ulonglong)uVar8 * 8);
        uVar16 = extraout_XMM0_Da;
        if (lVar11 != 0) {
          uVar16 = FUN_00d50b00();
        }
        FUN_013e7d10(uVar16,param_2);
        if (lVar11 != 0) {
          FUN_00d50b20();
        }
      }
      if ((longlong)uVar15 < 2) break;
      uVar15 = uVar15 - 1;
      lVar11 = unaff_RDI[0x1d];
    }
  }
  puVar12 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar12 = &DAT_025dab78;
  puVar12[2] = 0;
  puVar12[3] = 0;
  *(undefined1 *)(puVar12 + 4) = 0;
  FUN_00d500e0();
  lVar11 = *unaff_RSI;
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
  *(undefined1 *)(puVar12 + 4) = uVar7;
  puVar12[3] = param_2;
  uVar16 = FUN_00d21140();
  (**(code **)(*unaff_RDI + 0x6d0))(uVar16,puVar12[3]);
  FUN_00d50b20();
  if ((bVar4) && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


