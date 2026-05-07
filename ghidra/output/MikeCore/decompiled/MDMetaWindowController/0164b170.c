// Function: FUN_0164b170
// Address: 0164b170
// Size: 2183 bytes
// Class: MDMetaWindowController


/* WARNING: Removing unreachable block (ram,0x0164b855) */
/* WARNING: Removing unreachable block (ram,0x0164b85e) */
/* WARNING: Removing unreachable block (ram,0x0164b729) */
/* WARNING: Removing unreachable block (ram,0x0164b732) */
/* WARNING: Removing unreachable block (ram,0x0164b3c0) */
/* WARNING: Removing unreachable block (ram,0x0164b3c9) */
/* WARNING: Removing unreachable block (ram,0x0164b254) */
/* WARNING: Removing unreachable block (ram,0x0164b25d) */
/* WARNING: Removing unreachable block (ram,0x0164b42e) */
/* WARNING: Removing unreachable block (ram,0x0164b437) */
/* WARNING: Removing unreachable block (ram,0x0164b8e4) */
/* WARNING: Removing unreachable block (ram,0x0164b8f0) */

void FUN_0164b170(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  code *pcVar5;
  longlong *plVar6;
  int iVar7;
  undefined4 uVar8;
  void *pvVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  pthread_key_t pVar14;
  ulonglong uVar15;
  code *pcVar16;
  longlong unaff_RDI;
  longlong *plVar17;
  longlong lVar18;
  ulonglong uVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  undefined8 local_70;
  longlong *local_68;
  longlong *local_40;
  char local_38;
  
  plVar6 = local_40;
  *(byte *)(unaff_RDI + 0xf5) = DAT_028ad7e8;
  pvVar9 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01646020();
  iVar7 = *(int *)((longlong)local_40 + 0xc);
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  if (iVar7 != 0) {
    pvVar9 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01646020();
    local_68 = local_40;
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    if (0 < *(int *)((longlong)local_68 + 0xc)) {
      lVar18 = 0;
      do {
        lVar2 = *(longlong *)(local_68[2] + lVar18 * 8);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        pvVar9 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0132dbf0(DAT_0240f0f0);
        pvVar9 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0132d800();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar18 = lVar18 + 1;
      } while (lVar18 < *(int *)((longlong)local_68 + 0xc));
    }
    plVar3 = *(longlong **)local_68[2];
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    pvVar9 = _pthread_getspecific((pthread_key_t)param_1);
    if ((pvVar9 != (void *)0x0) && (lVar18 = FUN_00e8b990(), lVar18 != 0)) {
      param_1 = plVar3;
    }
    FUN_01320d00();
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    pvVar9 = _pthread_getspecific((pthread_key_t)param_1);
    if ((pvVar9 != (void *)0x0) && (lVar18 = FUN_00e8b990(), lVar18 != 0)) {
      param_1 = plVar3;
    }
    FUN_0132d790();
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    pvVar9 = _pthread_getspecific((pthread_key_t)param_1);
    plVar12 = local_40;
    if ((pvVar9 != (void *)0x0) && (lVar18 = FUN_00e8b990(), lVar18 != 0)) {
      param_1 = local_40;
      plVar12 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar18 + 0x154) & 1) + 4];
    }
    pVar14 = (pthread_key_t)param_1;
    dVar21 = (double)(**(code **)(*plVar12 + 0x398))();
    *(double *)(unaff_RDI + 0xf8) = dVar21;
    pvVar9 = _pthread_getspecific(pVar14);
    plVar12 = local_40;
    if ((pvVar9 != (void *)0x0) && (lVar18 = FUN_00e8b990(), lVar18 != 0)) {
      plVar12 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar18 + 0x154) & 1) + 4];
    }
    dVar22 = (double)(**(code **)(*plVar12 + 0x370))();
    uVar19 = (ulonglong)(dVar21 * dVar22);
    uVar1 = *(uint *)(local_40 + 6);
    uVar15 = (ulonglong)(int)uVar1;
    if ((uVar19 | uVar15) >> 0x20 == 0) {
      iVar7 = (int)((uVar19 & 0xffffffff) / (ulonglong)uVar1);
      uVar19 = (uVar19 & 0xffffffff) % (ulonglong)uVar1;
    }
    else {
      iVar7 = (int)((longlong)uVar19 / (longlong)uVar15);
      uVar19 = (longlong)uVar19 % (longlong)uVar15;
    }
    *(int *)(unaff_RDI + 0x100) = iVar7 + 1;
    lVar18 = local_40[4];
    dVar21 = (double)local_40[3];
    if (*(longlong *)(unaff_RDI + 0x78) == 0) {
      puVar13 = (undefined8 *)FUN_00e8fc40(uVar15,uVar19);
      FUN_00d4ff40();
      *puVar13 = &DAT_02572358;
      (*DAT_02572370)();
      puVar4 = *(undefined8 **)(unaff_RDI + 0x78);
      if (puVar4 == puVar13) {
        FUN_00d50b20();
      }
      else {
        *(undefined8 **)(unaff_RDI + 0x78) = puVar13;
        if (puVar4 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00d216c0();
    plVar12 = local_68;
    uVar10 = FUN_00e83010();
    *(undefined8 *)(unaff_RDI + 0xa8) = uVar10;
    uVar10 = FUN_00e83010();
    *(undefined8 *)(unaff_RDI + 0xb0) = uVar10;
    uVar10 = FUN_00e83010();
    *(undefined8 *)(unaff_RDI + 0xb8) = uVar10;
    uVar10 = FUN_00e83010();
    dVar21 = (double)(int)lVar18 * dVar21 + DAT_023942d0;
    *(undefined8 *)(unaff_RDI + 0xc0) = uVar10;
    ___bzero();
    ___bzero();
    ___bzero();
    ___bzero();
    *(undefined1 *)(unaff_RDI + 0xf4) = 0;
    local_70 = FUN_00e83010();
    *(undefined4 *)(unaff_RDI + 200) = 0;
    pcVar5 = DAT_02572370;
    iVar7 = *(int *)((longlong)plVar12 + 0xc);
    if (iVar7 < 1) {
      fVar20 = 0.0;
    }
    else {
      lVar18 = 0;
      pcVar16 = DAT_02572370;
      do {
        pVar14 = (pthread_key_t)pcVar16;
        lVar2 = *(longlong *)(local_68[2] + lVar18 * 8);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        pvVar9 = _pthread_getspecific(pVar14);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01320d00();
        if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        ___bzero();
        pvVar9 = _pthread_getspecific(pVar14);
        plVar12 = local_40;
        if ((pvVar9 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          plVar12 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar11 + 0x154) & 1) + 4];
        }
        pvVar9 = _pthread_getspecific(pVar14);
        plVar17 = local_40;
        if ((pvVar9 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          plVar17 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar11 + 0x154) & 1) + 4];
        }
        uVar8 = (**(code **)(*plVar17 + 0x3a0))();
        (**(code **)(*plVar12 + 0x388))(0,DAT_0238fee8,uVar8,(longlong)-((int)dVar21 / 2));
        plVar12 = (longlong *)FUN_00e8fc40();
        FUN_00d4ff40();
        *plVar12 = (longlong)&DAT_02572358;
        (*pcVar5)();
        local_38 = '\0';
        FUN_00d21140();
        local_88 = '\0';
        local_80 = plVar6;
        local_78 = '\0';
        local_90 = plVar12;
        FUN_014b0a00(*(undefined4 *)(unaff_RDI + 0x100),&local_90,&local_80);
        if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01647910(0,DAT_02390124,DAT_02390124,DAT_02390124);
        *(float *)(unaff_RDI + 200) =
             *(float *)(*(longlong *)(unaff_RDI + 0xc0) + lVar18 * 4) + *(float *)(unaff_RDI + 200);
        FUN_00d50b20();
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar18 = lVar18 + 1;
        iVar7 = *(int *)((longlong)local_68 + 0xc);
        pcVar16 = (code *)(longlong)iVar7;
        local_40 = plVar12;
      } while (lVar18 < (longlong)pcVar16);
      fVar20 = *(float *)(unaff_RDI + 200);
    }
    *(float *)(unaff_RDI + 200) = fVar20 / (float)iVar7;
    FUN_00e83070();
    DAT_028ad7e8 = DAT_028ad7e8 ^ 1;
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}


