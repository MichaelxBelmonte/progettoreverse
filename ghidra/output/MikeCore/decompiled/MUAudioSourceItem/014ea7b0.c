// Function: FUN_014ea7b0
// Address: 014ea7b0
// Size: 4578 bytes
// Class: MUAudioSourceItem


/* WARNING: Removing unreachable block (ram,0x014eb1a9) */
/* WARNING: Removing unreachable block (ram,0x014eb1b5) */
/* WARNING: Removing unreachable block (ram,0x014eb789) */
/* WARNING: Removing unreachable block (ram,0x014eb796) */
/* WARNING: Removing unreachable block (ram,0x014eb35f) */
/* WARNING: Removing unreachable block (ram,0x014eb36b) */
/* WARNING: Removing unreachable block (ram,0x014ead21) */
/* WARNING: Removing unreachable block (ram,0x014ead2a) */
/* WARNING: Removing unreachable block (ram,0x014ea999) */
/* WARNING: Removing unreachable block (ram,0x014ea9a2) */
/* WARNING: Removing unreachable block (ram,0x014ea800) */
/* WARNING: Removing unreachable block (ram,0x014ea809) */
/* WARNING: Removing unreachable block (ram,0x014ea910) */
/* WARNING: Removing unreachable block (ram,0x014ea919) */
/* WARNING: Removing unreachable block (ram,0x014eabe5) */
/* WARNING: Removing unreachable block (ram,0x014eabee) */
/* WARNING: Removing unreachable block (ram,0x014eb459) */
/* WARNING: Removing unreachable block (ram,0x014eb469) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_014ea7b0(float param_1)

{
  float *pfVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  double dVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  bool bVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  void *pvVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  longlong lVar20;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  pthread_key_t in_ECX;
  pthread_key_t pVar25;
  longlong *plVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong lVar29;
  undefined1 unaff_SIL;
  ulonglong uVar30;
  longlong *unaff_RDI;
  longlong *plVar31;
  longlong lVar32;
  int iVar33;
  int iVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  double dVar38;
  double dVar40;
  longlong local_168;
  char local_160;
  undefined8 *local_58;
  longlong *local_50;
  longlong *local_48;
  char local_40;
  ulonglong uVar21;
  double dVar39;
  
  (**(code **)(*unaff_RDI + 0x378))();
  if ((local_40 == '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  pvVar17 = _pthread_getspecific(in_ECX);
  if (pvVar17 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar14 = FUN_01326de0();
  if (iVar14 == 3) {
    bVar6 = false;
    local_50 = (longlong *)0x0;
    goto LAB_014eb84e;
  }
  puVar18 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar25 = 0x25f0d98;
  *puVar18 = &DAT_025f0d98;
  puVar18[2] = 0;
  puVar18[3] = 0;
  puVar18[4] = 0;
  puVar18[5] = 0;
  puVar18[6] = 0;
  puVar18[7] = 0;
  (*DAT_025f0db0)();
  pvVar17 = _pthread_getspecific(pVar25);
  if (pvVar17 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d790();
  if ((local_40 == '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  lVar8 = local_48[6];
  pvVar17 = _pthread_getspecific(pVar25);
  if (pvVar17 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01320d00();
  local_50 = local_48;
  plVar26 = local_48;
  if (local_48 == (longlong *)0x0) {
    local_50 = (longlong *)0x0;
    bVar6 = false;
  }
  else {
    bVar6 = true;
    if (local_40 == '\0') {
      FUN_00d50b00();
    }
  }
  pvVar17 = _pthread_getspecific((pthread_key_t)plVar26);
  if (pvVar17 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar38 = (double)FUN_01327990();
  pvVar17 = _pthread_getspecific((pthread_key_t)plVar26);
  if (pvVar17 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar39 = (double)FUN_0132dc40();
  uVar35 = SUB84(dVar39,0);
  FUN_014bc090();
  pvVar17 = _pthread_getspecific((pthread_key_t)plVar26);
  if (pvVar17 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb920();
  iVar34 = (int)local_48[3];
  iVar33 = iVar34 + 3;
  if (-1 < iVar34) {
    iVar33 = iVar34;
  }
  if (local_40 != '\0') {
    FUN_00d50b20();
  }
  if ((local_160 != '\0') && (local_168 != 0)) {
    FUN_00d50b20();
  }
  plVar19 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *(undefined1 *)(plVar19 + 7) = 0;
  *(undefined4 *)((longlong)plVar19 + 0x3c) = 0;
  *(undefined2 *)(plVar19 + 8) = 0;
  *plVar19 = (longlong)&DAT_025dc9e8;
  plVar19[9] = 0;
  plVar19[10] = 0;
  pcVar11 = DAT_025dca00;
  (*DAT_025dca00)();
  pvVar17 = _pthread_getspecific((pthread_key_t)plVar26);
  if ((pvVar17 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
    plVar26 = plVar19;
  }
  FUN_013eb950(uVar35);
  pvVar17 = _pthread_getspecific((pthread_key_t)plVar26);
  if ((pvVar17 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
    plVar26 = plVar19;
  }
  uVar15 = iVar33 >> 2;
  uVar21 = (ulonglong)uVar15;
  FUN_00c8e690();
  if ((local_40 == '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  FUN_013eb890();
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  puVar22 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *(undefined1 *)(puVar22 + 7) = 0;
  *(undefined4 *)((longlong)puVar22 + 0x3c) = 0;
  *(undefined2 *)(puVar22 + 8) = 0;
  *puVar22 = &DAT_025dc9e8;
  puVar22[9] = 0;
  puVar22[10] = 0;
  (*pcVar11)();
  pvVar17 = _pthread_getspecific((pthread_key_t)plVar26);
  if (pvVar17 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb950(uVar35);
  pvVar17 = _pthread_getspecific((pthread_key_t)plVar26);
  if (pvVar17 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00c8e690();
  if ((local_40 == '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  FUN_013eb890();
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  pvVar17 = _pthread_getspecific((pthread_key_t)plVar26);
  if ((pvVar17 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
    plVar26 = plVar19;
  }
  FUN_013eb920();
  uVar2 = local_48[2];
  if (local_40 != '\0') {
    FUN_00d50b20();
  }
  pvVar17 = _pthread_getspecific((pthread_key_t)plVar26);
  if (pvVar17 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb920();
  uVar3 = local_48[2];
  if (local_40 != '\0') {
    FUN_00d50b20();
  }
  pvVar17 = _pthread_getspecific((pthread_key_t)plVar26);
  if (pvVar17 != (void *)0x0) {
    FUN_00e8b990();
  }
  (**(code **)(*unaff_RDI + 0x380))();
  FUN_0132dca0();
  FUN_014bb3e0();
  dVar5 = (double)FUN_014bb4b0();
  pvVar17 = _pthread_getspecific((pthread_key_t)plVar26);
  plVar31 = local_50;
  if ((pvVar17 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
    plVar26 = local_50;
    plVar31 = (longlong *)local_50[(ulonglong)(*(uint *)(lVar20 + 0x154) & 1) + 4];
  }
  dVar40 = (double)(**(code **)(*plVar31 + 0x398))();
  pVar25 = (pthread_key_t)plVar26;
  if (dVar40 < dVar5 + DAT_023934c8) {
    pvVar17 = _pthread_getspecific(pVar25);
    plVar31 = local_50;
    if ((pvVar17 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
      plVar26 = local_50;
      plVar31 = (longlong *)local_50[(ulonglong)(*(uint *)(lVar20 + 0x154) & 1) + 4];
    }
    pVar25 = (pthread_key_t)plVar26;
    (**(code **)(*plVar31 + 0x398))();
  }
  fVar36 = (float)_exp2f(param_1 * DAT_023941f4);
  fVar36 = fVar36 * DAT_023941f8;
  FUN_014e9f00();
  pvVar17 = _pthread_getspecific(pVar25);
  if (pvVar17 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar13 = FUN_0132dd90();
  uVar10 = _UNK_02411e18;
  uVar9 = _DAT_02411e10;
  if (cVar13 == '\0') {
    pvVar17 = _pthread_getspecific(pVar25);
    plVar26 = local_50;
    if ((pvVar17 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
      plVar26 = (longlong *)local_50[(ulonglong)(*(uint *)(lVar20 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar26 + 0x378))();
    FUN_014b5bc0(SUB84(dVar38,0),uVar35,DAT_023908d8,DAT_023942a8,unaff_SIL);
    lVar20 = FUN_00e83010();
    lVar32 = FUN_00e83010();
    if (3 < iVar34) {
      fVar36 = DAT_02390124 / (float)(int)lVar8;
      lVar29 = unaff_RDI[0x21];
      lVar4 = *(longlong *)(lVar29 + 0x10);
      uVar27 = 0;
      do {
        iVar16 = (int)((double)(longlong)((double)(int)uVar27 * (dVar38 / dVar39)) * (double)fVar36
                      + DAT_023942d0);
        iVar34 = *(int *)(lVar29 + 0xc);
        iVar33 = iVar34 + -1;
        if (iVar16 < iVar34) {
          iVar33 = iVar16;
        }
        fVar37 = (float)_logf(((float)dVar38 / *(float *)(uVar2 + uVar27 * 4)) * DAT_02394204);
        *(float *)(lVar20 + uVar27 * 4) = fVar37 * DAT_02394208;
        *(uint *)(lVar32 + uVar27 * 4) =
             *(byte *)(*(longlong *)(lVar4 + (longlong)iVar33 * 8) + 0x2c) ^ 1;
        uVar27 = uVar27 + 1;
      } while (uVar21 != uVar27);
    }
    FUN_014abf60(uVar35,DAT_023942a8,0,uVar21);
    FUN_00e83070();
    FUN_00e83070();
  }
  else if (3 < iVar34) {
    fVar36 = (float)dVar38 / fVar36;
    if ((uVar15 < 8) || ((uVar2 < uVar3 + uVar21 * 4 && (uVar3 < uVar2 + uVar21 * 4)))) {
      uVar27 = 0;
    }
    else {
      uVar27 = (ulonglong)(uVar15 & 0xfffffff8);
      uVar28 = (uVar27 - 8 >> 3) + 1;
      uVar30 = (ulonglong)((uint)uVar28 & 3);
      if (uVar27 - 8 < 0x18) {
        lVar32 = 0;
      }
      else {
        lVar20 = -(uVar28 & 0xfffffffffffffffc);
        lVar32 = 0;
        do {
          pfVar1 = (float *)(uVar2 + lVar32 * 4);
          *pfVar1 = fVar36;
          pfVar1[1] = fVar36;
          pfVar1[2] = fVar36;
          pfVar1[3] = fVar36;
          pfVar1 = (float *)(uVar2 + 0x10 + lVar32 * 4);
          *pfVar1 = fVar36;
          pfVar1[1] = fVar36;
          pfVar1[2] = fVar36;
          pfVar1[3] = fVar36;
          puVar23 = (undefined8 *)(uVar3 + lVar32 * 4);
          *puVar23 = uVar9;
          puVar23[1] = uVar10;
          puVar23 = (undefined8 *)(uVar3 + 0x10 + lVar32 * 4);
          *puVar23 = uVar9;
          puVar23[1] = uVar10;
          pfVar1 = (float *)(uVar2 + 0x20 + lVar32 * 4);
          *pfVar1 = fVar36;
          pfVar1[1] = fVar36;
          pfVar1[2] = fVar36;
          pfVar1[3] = fVar36;
          pfVar1 = (float *)(uVar2 + 0x30 + lVar32 * 4);
          *pfVar1 = fVar36;
          pfVar1[1] = fVar36;
          pfVar1[2] = fVar36;
          pfVar1[3] = fVar36;
          puVar23 = (undefined8 *)(uVar3 + 0x20 + lVar32 * 4);
          *puVar23 = uVar9;
          puVar23[1] = uVar10;
          puVar23 = (undefined8 *)(uVar3 + 0x30 + lVar32 * 4);
          *puVar23 = uVar9;
          puVar23[1] = uVar10;
          pfVar1 = (float *)(uVar2 + 0x40 + lVar32 * 4);
          *pfVar1 = fVar36;
          pfVar1[1] = fVar36;
          pfVar1[2] = fVar36;
          pfVar1[3] = fVar36;
          pfVar1 = (float *)(uVar2 + 0x50 + lVar32 * 4);
          *pfVar1 = fVar36;
          pfVar1[1] = fVar36;
          pfVar1[2] = fVar36;
          pfVar1[3] = fVar36;
          puVar23 = (undefined8 *)(uVar3 + 0x40 + lVar32 * 4);
          *puVar23 = uVar9;
          puVar23[1] = uVar10;
          puVar23 = (undefined8 *)(uVar3 + 0x50 + lVar32 * 4);
          *puVar23 = uVar9;
          puVar23[1] = uVar10;
          pfVar1 = (float *)(uVar2 + 0x60 + lVar32 * 4);
          *pfVar1 = fVar36;
          pfVar1[1] = fVar36;
          pfVar1[2] = fVar36;
          pfVar1[3] = fVar36;
          pfVar1 = (float *)(uVar2 + 0x70 + lVar32 * 4);
          *pfVar1 = fVar36;
          pfVar1[1] = fVar36;
          pfVar1[2] = fVar36;
          pfVar1[3] = fVar36;
          puVar23 = (undefined8 *)(uVar3 + 0x60 + lVar32 * 4);
          *puVar23 = uVar9;
          puVar23[1] = uVar10;
          puVar23 = (undefined8 *)(uVar3 + 0x70 + lVar32 * 4);
          *puVar23 = uVar9;
          puVar23[1] = uVar10;
          lVar32 = lVar32 + 0x20;
          lVar20 = lVar20 + 4;
        } while (lVar20 != 0);
      }
      uVar10 = _UNK_02411e18;
      uVar9 = _DAT_02411e10;
      if (uVar30 != 0) {
        lVar20 = uVar3 + lVar32 * 4;
        lVar32 = uVar2 + lVar32 * 4;
        lVar29 = 0;
        do {
          pfVar1 = (float *)(lVar32 + lVar29);
          *pfVar1 = fVar36;
          pfVar1[1] = fVar36;
          pfVar1[2] = fVar36;
          pfVar1[3] = fVar36;
          pfVar1 = (float *)(lVar32 + 0x10 + lVar29);
          *pfVar1 = fVar36;
          pfVar1[1] = fVar36;
          pfVar1[2] = fVar36;
          pfVar1[3] = fVar36;
          puVar23 = (undefined8 *)(lVar20 + lVar29);
          *puVar23 = uVar9;
          puVar23[1] = uVar10;
          puVar23 = (undefined8 *)(lVar20 + 0x10 + lVar29);
          *puVar23 = uVar9;
          puVar23[1] = uVar10;
          lVar29 = lVar29 + 0x20;
        } while (uVar30 << 5 != lVar29);
      }
      if (uVar27 == uVar21) goto LAB_014eb384;
    }
    uVar28 = ~uVar27;
    uVar30 = uVar21 & 3;
    if ((uVar15 & 3) != 0) {
      do {
        *(float *)(uVar2 + uVar27 * 4) = fVar36;
        *(undefined4 *)(uVar3 + uVar27 * 4) = 0x3f000000;
        uVar27 = uVar27 + 1;
        uVar30 = uVar30 - 1;
      } while (uVar30 != 0);
    }
    if (2 < uVar28 + uVar21) {
      do {
        *(float *)(uVar2 + uVar27 * 4) = fVar36;
        *(undefined4 *)(uVar3 + uVar27 * 4) = 0x3f000000;
        *(float *)(uVar2 + 4 + uVar27 * 4) = fVar36;
        *(undefined4 *)(uVar3 + 4 + uVar27 * 4) = 0x3f000000;
        *(float *)(uVar2 + 8 + uVar27 * 4) = fVar36;
        *(undefined4 *)(uVar3 + 8 + uVar27 * 4) = 0x3f000000;
        *(float *)(uVar2 + 0xc + uVar27 * 4) = fVar36;
        *(undefined4 *)(uVar3 + 0xc + uVar27 * 4) = 0x3f000000;
        uVar27 = uVar27 + 4;
      } while (uVar21 != uVar27);
    }
  }
LAB_014eb384:
  FUN_015c1480((float)(dVar39 / DAT_0240f0f0) * DAT_023908d8,uVar21);
  plVar26 = unaff_RDI + 0x11;
  if (cVar13 == '\0') {
    if ((longlong *)unaff_RDI[0x11] != plVar19) {
      FUN_00d64850();
      plVar31 = (longlong *)*plVar26;
      if (plVar31 != plVar19) {
        if (plVar19 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        *plVar26 = (longlong)plVar19;
        if (plVar31 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d64910();
    }
    if ((undefined8 *)unaff_RDI[9] != puVar22) {
      FUN_00d64850();
      puVar23 = (undefined8 *)unaff_RDI[9];
      if (puVar23 != puVar22) {
        if (puVar22 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
        unaff_RDI[9] = (longlong)puVar22;
        if (puVar23 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d64910();
    }
    puVar23 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar23 = &DAT_02572358;
    (*DAT_02572370)();
    pcVar11 = DAT_025e74b8;
    iVar34 = 0;
    if (*(int *)(unaff_RDI[0x21] + 0xc) < 1) {
      local_58 = (undefined8 *)0x0;
      bVar7 = false;
    }
    else {
      lVar20 = 0;
      bVar7 = false;
      local_58 = (undefined8 *)0x0;
      do {
        iVar33 = (int)((double)iVar34 * (dVar39 / dVar38) + DAT_023942d0);
        if ((int)uVar15 <= iVar33) {
          iVar33 = uVar15 - 1;
        }
        puVar24 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar24 = &DAT_025e74a0;
        *(undefined8 *)((longlong)puVar24 + 0xc) = 0;
        *(undefined8 *)((longlong)puVar24 + 0x14) = 0;
        *(undefined8 *)((longlong)puVar24 + 0x1c) = 0;
        *(undefined8 *)((longlong)puVar24 + 0x24) = 0;
        *(undefined1 *)((longlong)puVar24 + 0x2c) = 0;
        puVar24[6] = 0;
        puVar24[7] = 0;
        puVar24[8] = 0;
        puVar24[9] = 0;
        puVar24[10] = 0;
        puVar24[0xb] = 0;
        *(undefined4 *)(puVar24 + 0xc) = 0;
        (*pcVar11)();
        if (puVar24 == local_58) {
          puVar24 = local_58;
          if (bVar7) {
            FUN_00d50b20();
            bVar12 = bVar7;
          }
          else {
            bVar12 = true;
          }
        }
        else {
          bVar12 = true;
          if ((bVar7) && (local_58 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
        bVar7 = bVar12;
        local_58 = puVar24;
        lVar32 = *(longlong *)(*(longlong *)(unaff_RDI[0x21] + 0x10) + lVar20 * 8);
        if (lVar32 != 0) {
          FUN_00d50b00();
        }
        FUN_014ee580();
        if (lVar32 != 0) {
          FUN_00d50b20();
        }
        lVar32 = (longlong)iVar33;
        *(uint *)(local_58 + 2) = *(uint *)(uVar3 + lVar32 * 4) & _DAT_02390140;
        fVar36 = (float)_logf(((float)dVar38 / *(float *)(uVar2 + lVar32 * 4)) * DAT_02394204);
        fVar36 = fVar36 * DAT_02394208;
        *(float *)((longlong)local_58 + 0x14) = fVar36;
        *(float *)(local_58 + 3) = fVar36;
        *(uint *)((longlong)local_58 + 0x1c) = *(uint *)(uVar3 + lVar32 * 4) & _DAT_02390140;
        FUN_00d21140();
        lVar20 = lVar20 + 1;
        iVar34 = iVar34 + (int)lVar8;
      } while (lVar20 < *(int *)(unaff_RDI[0x21] + 0xc));
    }
    FUN_014c2990();
    FUN_014bd640(SUB84(dVar38,0));
    if (puVar23 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if ((bVar7) && (local_58 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if ((longlong *)unaff_RDI[0x11] != plVar19) {
      FUN_00d64850();
      plVar31 = (longlong *)*plVar26;
      if (plVar31 != plVar19) {
        if (plVar19 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        *plVar26 = (longlong)plVar19;
        if (plVar31 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d64910();
    }
    FUN_014d9720(0,0);
  }
  if (puVar22 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (plVar19 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (puVar18 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
LAB_014eb84e:
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar6) && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return iVar14 != 3;
}


