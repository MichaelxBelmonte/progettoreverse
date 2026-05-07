// Function: FUN_014fdd70
// Address: 014fdd70
// Size: 2679 bytes
// Class: MUPercussivePitchSystem


/* WARNING: Removing unreachable block (ram,0x014fe087) */
/* WARNING: Removing unreachable block (ram,0x014fe093) */
/* WARNING: Removing unreachable block (ram,0x014fe497) */
/* WARNING: Removing unreachable block (ram,0x014fe4a3) */
/* WARNING: Removing unreachable block (ram,0x014fe570) */
/* WARNING: Removing unreachable block (ram,0x014fe57c) */
/* WARNING: Removing unreachable block (ram,0x014fe23d) */
/* WARNING: Removing unreachable block (ram,0x014fe246) */
/* WARNING: Removing unreachable block (ram,0x014fe4e0) */
/* WARNING: Removing unreachable block (ram,0x014fe5dc) */
/* WARNING: Removing unreachable block (ram,0x014fe5e8) */
/* WARNING: Removing unreachable block (ram,0x014fe4b7) */

undefined8 * FUN_014fdd70(void)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  void *pvVar9;
  longlong lVar10;
  pthread_key_t pVar11;
  longlong lVar12;
  longlong lVar13;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  ulonglong uVar14;
  int iVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  longlong local_78;
  char local_70;
  int local_60;
  
  lVar13 = local_78;
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar5[10] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  *(undefined4 *)(puVar5 + 9) = 0;
  *puVar5 = &DAT_025fee18;
  *(undefined8 *)((longlong)puVar5 + 0x6c) = 0;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  *(undefined2 *)(puVar5 + 0xd) = 0;
  (*DAT_025fee30)();
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_01a016a0();
  (**(code **)(*plVar6 + 0x18))();
  plVar7 = (longlong *)FUN_00e8fc40();
  FUN_0013e060();
  (**(code **)(*plVar7 + 0x18))();
  pcVar3 = DAT_025ffd78;
  lVar1 = *(longlong *)(unaff_RSI + 0x60);
  if (lVar1 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    uVar14 = 0;
    iVar15 = 0;
    do {
      pVar11 = 0xaaaaaaab;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar14;
      puVar8 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar8 = &DAT_025ffd60;
      puVar8[7] = 0;
      puVar8[8] = 0;
      (*pcVar3)();
      pvVar9 = _pthread_getspecific(pVar11);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar17 = (float)(int)uVar14 * DAT_023908e0;
      pvVar9 = _pthread_getspecific(pVar11);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152c0c0();
      pVar11 = iVar15 + (SUB164(auVar2 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffff8) * -0xc;
      pvVar9 = _pthread_getspecific(pVar11);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar18 = (float)FUN_014f9e30();
      FUN_01779ed0(fVar17 + fVar18);
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      pvVar9 = _pthread_getspecific(pVar11);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01779f40();
      pvVar9 = _pthread_getspecific(pVar11);
      if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        pVar11 = (pthread_key_t)plVar6;
      }
      FUN_0176fde0();
      FUN_00d50b20();
      uVar14 = uVar14 + 1;
      iVar15 = iVar15 + 8;
    } while ((int)uVar14 != 0xd);
    pvVar9 = _pthread_getspecific(pVar11);
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      pVar11 = (pthread_key_t)plVar7;
    }
    pvVar9 = _pthread_getspecific(pVar11);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152b9f0();
    if (local_70 == '\0') {
      if (local_78 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = '\0';
    }
    FUN_01735c40();
    if (local_78 != 0) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    pvVar9 = _pthread_getspecific(pVar11);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152c0c0();
    if (local_70 == '\0') {
      if (local_78 != 0) {
        FUN_00d50b00();
        goto LAB_014fe24b;
      }
LAB_014fe512:
      bVar16 = true;
    }
    else {
      if (local_78 == 0) goto LAB_014fe512;
LAB_014fe24b:
      pcVar3 = DAT_025fe688;
      local_70 = '\0';
      local_78 = 0;
      local_60 = -1;
      while( true ) {
        lVar10 = (longlong)local_60;
        local_60 = local_60 + 1;
        if (*(int *)(lVar13 + 0xc) <= local_60) break;
        lVar12 = *(longlong *)(lVar13 + 0x10);
        local_78 = *(longlong *)(lVar12 + 8 + lVar10 * 8);
        puVar8 = (undefined8 *)FUN_00e8fc40();
        pVar11 = (pthread_key_t)lVar12;
        FUN_00d4ff40();
        *puVar8 = &DAT_025fe670;
        puVar8[7] = 0;
        puVar8[8] = 0;
        puVar8[9] = 0;
        (*pcVar3)();
        pvVar9 = _pthread_getspecific(pVar11);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar4 = FUN_014f9e20();
        pVar11 = 0x2802558;
        if (cVar4 == '\0') {
          pvVar9 = _pthread_getspecific(0x2802558);
          lVar10 = DAT_027cd580;
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
            lVar10 = DAT_027cd580;
          }
          DAT_027cd580 = lVar10;
          if (lVar10 != 0) {
            FUN_00d50b00();
          }
          FUN_017395b0();
          if (lVar10 != 0) {
            FUN_00d50b20();
          }
        }
        else {
          pvVar9 = _pthread_getspecific(0x2802558);
          lVar10 = DAT_027cd560;
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
            lVar10 = DAT_027cd560;
          }
          DAT_027cd560 = lVar10;
          if (lVar10 != 0) {
            FUN_00d50b00();
          }
          FUN_017395b0();
          if (lVar10 != 0) {
            FUN_00d50b20();
          }
        }
        pvVar9 = _pthread_getspecific(pVar11);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01735cb0();
        FUN_00d50b20();
      }
      FUN_014ff010();
      pVar11 = (pthread_key_t)lVar13;
      bVar16 = false;
    }
    pvVar9 = _pthread_getspecific(pVar11);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b720();
    pvVar9 = _pthread_getspecific(pVar11);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b680();
    pvVar9 = _pthread_getspecific(pVar11);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b6f0();
    pvVar9 = _pthread_getspecific(pVar11);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01736c60();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    pvVar9 = _pthread_getspecific(pVar11);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b790();
    pvVar9 = _pthread_getspecific(pVar11);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar17 = (float)_logf(*(float *)(unaff_RSI + 0x5c) / DAT_02411fd0);
    FUN_01770230(fVar17 * DAT_02394208);
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    pvVar9 = _pthread_getspecific(pVar11);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d50b00();
    FUN_01769110();
    if (unaff_RSI != 0) {
      FUN_00d50b20();
    }
    *unaff_RDI = puVar5;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if (!bVar16) {
      FUN_00d50b20();
    }
    if (plVar7 == (longlong *)0x0) {
      bVar16 = true;
      goto joined_r0x014fe7ed;
    }
  }
  bVar16 = lVar1 != 0;
  FUN_00d50b20();
joined_r0x014fe7ed:
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (!(bool)(bVar16 | puVar5 == (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


