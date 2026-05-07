// Function: FUN_012649d0
// Address: 012649d0
// Size: 3774 bytes
// Class: MUSampledFunction


/* WARNING: Removing unreachable block (ram,0x01265229) */
/* WARNING: Removing unreachable block (ram,0x01265235) */
/* WARNING: Removing unreachable block (ram,0x01264f98) */
/* WARNING: Removing unreachable block (ram,0x01264fc0) */
/* WARNING: Removing unreachable block (ram,0x01264f9a) */
/* WARNING: Removing unreachable block (ram,0x01264fc2) */

undefined8 * FUN_012649d0(longlong *param_1,int param_2)

{
  undefined4 uVar1;
  double dVar2;
  undefined8 *puVar3;
  float fVar4;
  bool bVar5;
  code *pcVar6;
  bool bVar7;
  longlong *plVar8;
  void *pvVar9;
  longlong lVar10;
  undefined8 *puVar11;
  pthread_key_t pVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 *puVar17;
  float fVar18;
  char local_9c;
  int local_80;
  longlong local_60;
  char local_58;
  char local_50;
  
  plVar13 = param_1;
  plVar8 = (longlong *)FUN_00e8fc40();
  FUN_0006e3a0();
  (**(code **)(*plVar8 + 0x18))();
  if (param_2 == 0) {
    pvVar9 = _pthread_getspecific((pthread_key_t)plVar13);
    plVar15 = plVar8;
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      plVar13 = plVar8;
      plVar15 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
    }
    dVar2 = *(double *)(unaff_RSI + 0xe8);
    if (((double)plVar15[0x1d] != dVar2) || (NAN((double)plVar15[0x1d]) || NAN(dVar2))) {
      FUN_00d64850();
      plVar15[0x1d] = (longlong)dVar2;
      FUN_00d64910();
    }
  }
  pvVar9 = _pthread_getspecific((pthread_key_t)plVar13);
  plVar15 = plVar8;
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar13 = plVar8;
    plVar15 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
  }
  dVar2 = *(double *)(unaff_RSI + 0xf0);
  if (((double)plVar15[0x1e] != dVar2) || (NAN((double)plVar15[0x1e]) || NAN(dVar2))) {
    FUN_00d64850();
    plVar15[0x1e] = (longlong)dVar2;
    FUN_00d64910();
  }
  pvVar9 = _pthread_getspecific((pthread_key_t)plVar13);
  plVar15 = plVar8;
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar13 = plVar8;
    plVar15 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
  }
  fVar18 = *(float *)(unaff_RSI + 0x110);
  if ((*(float *)(plVar15 + 0x22) != fVar18) || (NAN(*(float *)(plVar15 + 0x22)) || NAN(fVar18))) {
    FUN_00d64850();
    *(float *)(plVar15 + 0x22) = fVar18;
    FUN_00d64910();
  }
  pvVar9 = _pthread_getspecific((pthread_key_t)plVar13);
  plVar15 = plVar8;
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar13 = plVar8;
    plVar15 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
  }
  fVar18 = *(float *)(unaff_RSI + 0x98);
  if ((*(float *)(plVar15 + 0x13) != fVar18) || (NAN(*(float *)(plVar15 + 0x13)) || NAN(fVar18))) {
    FUN_00d64850();
    *(float *)(plVar15 + 0x13) = fVar18;
    FUN_00d64910();
  }
  pvVar9 = _pthread_getspecific((pthread_key_t)plVar13);
  plVar15 = plVar8;
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar13 = plVar8;
    plVar15 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
  }
  fVar18 = *(float *)(unaff_RSI + 0x9c);
  if ((*(float *)((longlong)plVar15 + 0x9c) != fVar18) ||
     (NAN(*(float *)((longlong)plVar15 + 0x9c)) || NAN(fVar18))) {
    FUN_00d64850();
    *(float *)((longlong)plVar15 + 0x9c) = fVar18;
    FUN_00d64910();
  }
  pvVar9 = _pthread_getspecific((pthread_key_t)plVar13);
  plVar15 = plVar8;
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar13 = plVar8;
    plVar15 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
  }
  uVar1 = *(undefined4 *)(unaff_RSI + 0x13c);
  FUN_00d64850();
  *(undefined4 *)((longlong)plVar15 + 0x13c) = uVar1;
  FUN_00d64910();
  pvVar9 = _pthread_getspecific((pthread_key_t)plVar13);
  plVar15 = plVar8;
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar13 = plVar8;
    plVar15 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
  }
  dVar2 = *(double *)(unaff_RSI + 0xb8);
  if (((double)plVar15[0x17] != dVar2) || (NAN((double)plVar15[0x17]) || NAN(dVar2))) {
    FUN_00d64850();
    plVar15[0x17] = (longlong)dVar2;
    FUN_00d64910();
  }
  pvVar9 = _pthread_getspecific((pthread_key_t)plVar13);
  plVar15 = plVar8;
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar13 = plVar8;
    plVar15 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
  }
  dVar2 = *(double *)(unaff_RSI + 0xc0);
  if (((double)plVar15[0x18] != dVar2) || (NAN((double)plVar15[0x18]) || NAN(dVar2))) {
    FUN_00d64850();
    plVar15[0x18] = (longlong)dVar2;
    FUN_00d64910();
  }
  plVar15 = *(longlong **)(unaff_RSI + 0xe0);
  if (plVar15 == (longlong *)0x0) {
    puVar17 = (undefined8 *)0x0;
    bVar5 = false;
    lVar10 = *(longlong *)(unaff_RSI + 0xd0);
    plVar15 = plVar13;
  }
  else {
    FUN_00d50b00();
    pcVar6 = DAT_025c86d8;
    local_80 = -1;
    bVar5 = false;
    puVar17 = (undefined8 *)0x0;
    while( true ) {
      lVar10 = (longlong)local_80;
      local_80 = local_80 + 1;
      if (*(int *)((longlong)plVar15 + 0xc) <= local_80) break;
      lVar14 = plVar15[2];
      lVar10 = *(longlong *)(lVar14 + 8 + lVar10 * 8);
      puVar11 = (undefined8 *)FUN_00e8fc40();
      pVar12 = (pthread_key_t)lVar14;
      FUN_00d4ff40();
      *puVar11 = &DAT_025c86c0;
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
        if ((bVar5) && (puVar17 != (undefined8 *)0x0)) {
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
      if (lVar10 == *(longlong *)(unaff_RSI + 0xd8)) {
        pvVar9 = _pthread_getspecific((pthread_key_t)unaff_RSI);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01265bc0();
      }
      else {
        pvVar9 = _pthread_getspecific((pthread_key_t)unaff_RSI);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01265db0();
      }
    }
    FUN_0015edf0();
    FUN_00d50b20();
    lVar10 = *(longlong *)(unaff_RSI + 0xd0);
  }
  if (lVar10 != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    pvVar9 = _pthread_getspecific((pthread_key_t)plVar15);
    if ((pvVar9 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
      lVar10 = *(longlong *)(unaff_RSI + 0xd0);
    }
    else {
      lVar10 = *(longlong *)(unaff_RSI + 0xd0);
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
  pvVar9 = _pthread_getspecific((pthread_key_t)plVar15);
  plVar13 = plVar8;
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar15 = plVar8;
    plVar13 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
  }
  fVar18 = *(float *)(unaff_RSI + 0xf8);
  if ((*(float *)(plVar13 + 0x1f) != fVar18) || (NAN(*(float *)(plVar13 + 0x1f)) || NAN(fVar18))) {
    FUN_00d64850();
    *(float *)(plVar13 + 0x1f) = fVar18;
    FUN_00d64910();
  }
  pvVar9 = _pthread_getspecific((pthread_key_t)plVar15);
  plVar13 = plVar8;
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar15 = plVar8;
    plVar13 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
  }
  fVar18 = DAT_02390124;
  if (*(float *)(unaff_RSI + 0x138) <= DAT_02390124) {
    fVar18 = *(float *)(unaff_RSI + 0x138);
  }
  fVar4 = DAT_02390d00;
  if (DAT_02390d00 <= fVar18) {
    fVar4 = fVar18;
  }
  if ((*(float *)(plVar13 + 0x27) != fVar4) || (NAN(*(float *)(plVar13 + 0x27)) || NAN(fVar4))) {
    FUN_00d64850();
    *(float *)(plVar13 + 0x27) = fVar4;
    FUN_00d64910();
  }
  pvVar9 = _pthread_getspecific((pthread_key_t)plVar15);
  plVar13 = plVar8;
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar15 = plVar8;
    plVar13 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
  }
  dVar2 = *(double *)(unaff_RSI + 0x118);
  if (((double)plVar13[0x23] != dVar2) || (NAN((double)plVar13[0x23]) || NAN(dVar2))) {
    FUN_00d64850();
    plVar13[0x23] = (longlong)dVar2;
    FUN_00d64910();
  }
  pvVar9 = _pthread_getspecific((pthread_key_t)plVar15);
  plVar13 = plVar8;
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar15 = plVar8;
    plVar13 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
  }
  dVar2 = *(double *)(unaff_RSI + 0x120);
  if (((double)plVar13[0x24] != dVar2) || (NAN((double)plVar13[0x24]) || NAN(dVar2))) {
    FUN_00d64850();
    plVar13[0x24] = (longlong)dVar2;
    FUN_00d64910();
  }
  pvVar9 = _pthread_getspecific((pthread_key_t)plVar15);
  plVar13 = plVar8;
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar15 = plVar8;
    plVar13 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
  }
  dVar2 = *(double *)(unaff_RSI + 0x128);
  if (((double)plVar13[0x25] != dVar2) || (NAN((double)plVar13[0x25]) || NAN(dVar2))) {
    FUN_00d64850();
    plVar13[0x25] = (longlong)dVar2;
    FUN_00d64910();
  }
  pvVar9 = _pthread_getspecific((pthread_key_t)plVar15);
  plVar13 = plVar8;
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar15 = plVar8;
    plVar13 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
  }
  dVar2 = *(double *)(unaff_RSI + 0x130);
  if (((double)plVar13[0x26] != dVar2) || (NAN((double)plVar13[0x26]) || NAN(dVar2))) {
    FUN_00d64850();
    plVar13[0x26] = (longlong)dVar2;
    FUN_00d64910();
  }
  local_9c = (char)param_2;
  if (local_9c != '\0') {
    puVar11 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar11 = &DAT_025bd940;
    puVar11[5] = 0;
    puVar11[2] = 0;
    puVar11[3] = 0;
    *(undefined2 *)(puVar11 + 4) = 0;
    FUN_00d500e0();
    pvVar9 = _pthread_getspecific((pthread_key_t)plVar15);
    if ((pvVar9 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
      puVar3 = (undefined8 *)plVar8[0x21];
      plVar13 = plVar8;
    }
    else {
      plVar13 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
      puVar3 = (undefined8 *)plVar13[0x21];
      plVar15 = plVar8;
    }
    if (puVar3 != puVar11) {
      FUN_00d50b00();
      plVar13[0x21] = (longlong)puVar11;
      if (puVar3 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    pvVar9 = _pthread_getspecific((pthread_key_t)plVar15);
    plVar13 = plVar8;
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      plVar15 = plVar8;
      plVar13 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar13 + 0x1a0))();
    pvVar9 = _pthread_getspecific((pthread_key_t)plVar15);
    plVar13 = plVar8;
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      plVar15 = plVar8;
      plVar13 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
    }
    plVar16 = (longlong *)plVar13[0x34];
    pvVar9 = _pthread_getspecific((pthread_key_t)plVar15);
    if (pvVar9 != (void *)0x0) {
      plVar16 = (longlong *)plVar13[0x34];
      lVar10 = FUN_00e8b990();
      if (lVar10 != 0) {
        plVar16 = (longlong *)plVar16[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
      }
    }
    (**(code **)(*plVar16 + 0x1a0))();
    FUN_00d50b20();
  }
  *unaff_RDI = plVar8;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((bVar5) && (puVar17 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


