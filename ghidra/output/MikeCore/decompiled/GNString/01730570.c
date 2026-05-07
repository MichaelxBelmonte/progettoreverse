// Function: FUN_01730570
// Address: 01730570
// Size: 2334 bytes
// Class: GNString


void FUN_01730570(void)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  pthread_key_t pVar10;
  ulonglong uVar11;
  undefined *puVar12;
  longlong *plVar13;
  longlong unaff_RDI;
  longlong lVar14;
  bool bVar15;
  double dVar16;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar17 [16];
  ulonglong local_110;
  ulonglong local_108;
  undefined8 local_100;
  code *local_f8;
  undefined4 local_ec;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  longlong *local_88;
  char local_80;
  ulonglong local_78;
  char local_70;
  ulonglong local_68;
  char local_60;
  int local_58;
  undefined4 uStack_54;
  char cStack_50;
  undefined7 uStack_4f;
  undefined8 local_48;
  double dStack_40;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar12 = &DAT_025683c0;
  *puVar4 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  puVar9 = *(undefined8 **)(unaff_RDI + 0x10);
  if (puVar9 == puVar4) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x10) = puVar4;
    if (puVar9 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d227d0();
  pvVar5 = _pthread_getspecific((pthread_key_t)puVar12);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510d50();
  local_90 = CONCAT44(uStack_54,local_58);
  if ((((cStack_50 == '\0') && (local_90 != 0)) && (FUN_00d50b00(), cStack_50 != '\0')) &&
     (CONCAT44(uStack_54,local_58) != 0)) {
    FUN_00d50b20();
  }
  local_80 = '\0';
  local_88 = (longlong *)0x0;
  local_ec = 0xffffffff;
  local_f8 = DAT_025795c0;
  do {
    pvVar5 = _pthread_getspecific((pthread_key_t)puVar12);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar6 = FUN_00e7bdb0();
    uVar7 = FUN_00e7bdb0();
    cVar2 = FUN_01252960(uVar7,uVar6,&local_88,&local_110);
    if (cVar2 == '\0') {
      if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_90 != 0) {
        FUN_00d50b20();
      }
      if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pvVar5 = _pthread_getspecific((pthread_key_t)uVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_100 = FUN_01743720();
    local_58 = (int)local_100;
    iVar3 = local_58 * 7;
    uVar11 = (ulonglong)
             ((int)(iVar3 + (((uint)(iVar3 / 6 + (iVar3 >> 0x1f)) >> 1) - (iVar3 >> 0x1f)) * -0xc)
              >> 0x1f & 0xc);
    lVar14 = 0;
    do {
      plVar13 = local_88;
      pvVar5 = _pthread_getspecific((pthread_key_t)uVar11);
      plVar1 = local_88;
      if ((pvVar5 != (void *)0x0) && (lVar8 = FUN_00e8b990(), plVar13 = plVar1, lVar8 != 0)) {
        plVar13 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
      }
      iVar3 = (**(code **)(*plVar13 + 0x378))();
      if (iVar3 == -1000000) {
LAB_017307d0:
        *(undefined1 *)((longlong)&uStack_54 + lVar14) = 0;
      }
      else {
        pvVar5 = _pthread_getspecific((pthread_key_t)uVar11);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01740240();
        if (local_68 == 0) goto LAB_017307d0;
        if (((local_60 == '\0') && (FUN_00d50b00(), local_60 != '\0')) && (local_68 != 0)) {
          FUN_00d50b20();
        }
        pvVar5 = _pthread_getspecific((pthread_key_t)uVar11);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar2 = FUN_01739840();
        *(char *)((longlong)&uStack_54 + lVar14) = -cVar2;
        FUN_00d50b20();
      }
      pVar10 = (pthread_key_t)uVar11;
      lVar14 = lVar14 + 1;
    } while (lVar14 != 0xc);
    pvVar5 = _pthread_getspecific(pVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b6f0();
    pvVar5 = _pthread_getspecific(pVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01736d70();
    if (local_68 == 0) {
      bVar15 = false;
    }
    else {
      pvVar5 = _pthread_getspecific(pVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b6f0();
      pvVar5 = _pthread_getspecific(pVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01736d70();
      iVar3 = FUN_00d8c7a0();
      bVar15 = iVar3 != 0;
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (bVar15) {
      puVar9 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar9 = &DAT_025795a8;
      (*local_f8)();
      uVar6 = FUN_0177f010();
      FUN_01780260(uVar6,local_100);
      uVar11 = local_68;
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      FUN_00d8dbf0();
      if (uVar11 != 0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      FUN_016ab300();
      pvVar5 = _pthread_getspecific(pVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b6f0();
      pvVar5 = _pthread_getspecific(pVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar6 = FUN_01736d70();
      local_c0 = local_b0;
      local_b8 = 0;
      if (local_a8 == '\0') {
        if (local_b0 != 0) {
          uVar6 = FUN_00d50b00();
        }
      }
      else {
        local_a8 = '\0';
      }
      local_b8 = '\x01';
      FUN_016ac280(uVar6,&local_c0);
      uVar11 = local_68;
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      uVar6 = FUN_00d8dbf0();
      if (uVar11 != 0) {
        uVar6 = FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        uVar6 = FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        uVar6 = FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        uVar6 = FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        uVar6 = FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        uVar6 = FUN_00d50b20();
      }
      FUN_00d8cf90(uVar6,6);
      uVar11 = local_68;
      if ((((local_60 == '\0') && (local_68 != 0)) && (FUN_00d50b00(), local_60 != '\0')) &&
         (local_68 != 0)) {
        FUN_00d50b20();
      }
      local_60 = '\0';
      local_68 = uVar11;
      FUN_00d21140();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      local_48 = *(undefined8 *)(uVar11 + 0x10);
      FUN_00d50b20();
      FUN_00d50b20();
    }
    else {
      local_68 = 0;
      local_60 = '\0';
      FUN_00d21140();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      local_48 = 0;
    }
    local_68 = local_110;
    local_78 = local_108;
    puVar12 = (undefined *)(local_110 >> 0x20);
    if (puVar12 == (undefined *)0x0) {
      dVar16 = 0.0;
      if (local_108 >> 0x20 != 0) {
        auVar17._0_8_ = FUN_00e7c860();
        auVar17._8_8_ = extraout_XMM0_Qb;
        auVar17 = roundsd(auVar17,auVar17,0xb);
        dVar16 = auVar17._0_8_ + DAT_023b19a0;
      }
    }
    else {
      dVar16 = (double)FUN_00e7c860();
    }
    lVar14 = *(longlong *)(unaff_RDI + 0x10);
    lVar8 = (longlong)*(int *)(lVar14 + 0x18);
    dStack_40 = dVar16;
    FUN_00c8e340(dVar16,1);
    lVar14 = *(longlong *)(lVar14 + 0x10);
    puVar9 = (undefined8 *)(lVar14 + 0x10 + lVar8);
    *puVar9 = local_48;
    puVar9[1] = dStack_40;
    puVar9 = (undefined8 *)(lVar14 + lVar8);
    *puVar9 = CONCAT44(uStack_54,local_58);
    puVar9[1] = CONCAT71(uStack_4f,cStack_50);
  } while( true );
}


