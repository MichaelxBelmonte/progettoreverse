// ===== MUPercussivePitchSystem — Annotated small functions =====
// 38 readable functions

// ==================================================
// @014fdd70 (2679 bytes) — math_loop

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
  longlong arg1;
  undefined8 *this;
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
  lVar1 = *(longlong *)(arg1 + 0x60);
  if (lVar1 == 0) {
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
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
    fVar17 = (float)_logf(*(float *)(arg1 + 0x5c) / DAT_02411fd0);
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
    if (arg1 != 0) {
      FUN_00d50b20();
    }
    *this = puVar5;
    *(undefined1 *)(this + 1) = 1;
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
  return this;
}




// ==================================================
// @001552e0 (2627 bytes) — calculation

{
  longlong lVar1;
  undefined4 uVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong lVar7;
  longlong arg1;
  longlong *this;
  bool bVar8;
  bool bVar9;
  longlong local_f8;
  char local_f0;
  longlong local_70;
  char local_68;
  longlong local_50;
  
  FUN_00154c40();
  lVar5 = *(longlong *)(arg1 + 0x88);
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6a50();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  lVar1 = *(longlong *)(arg1 + 0x88);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  uVar2 = FUN_00d237a0();
  *(undefined4 *)(arg1 + 0xb0) = uVar2;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  lVar5 = *(longlong *)(arg1 + 0x88);
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8920();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012caf10();
  if (lVar1 == 0) {
    if (*(longlong *)(arg1 + 0xa0) == 0) goto LAB_0015558b;
    *(undefined8 *)(arg1 + 0xa0) = 0;
LAB_00155554:
    FUN_00d50b20();
  }
  else {
    FUN_00d50b00();
    lVar4 = *(longlong *)(arg1 + 0xa0);
    if (lVar4 != lVar1) {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *(longlong *)(arg1 + 0xa0) = lVar1;
      if (lVar4 != 0) goto LAB_00155554;
    }
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
LAB_0015558b:
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  lVar5 = *(longlong *)(arg1 + 0x90);
  if ((lVar5 == 0) || (FUN_00d50b00(), *(longlong *)(arg1 + 0x90) == 0)) {
    bVar8 = true;
  }
  else {
    FUN_00d50b00();
    bVar8 = false;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150fe30();
  if (!bVar8) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (lVar5 == lVar1) {
    bVar8 = false;
    bVar9 = false;
    local_50 = 0;
  }
  else {
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      FUN_00e8b990();
      FUN_00cb1f10();
      if (lVar1 != 0) {
        FUN_00e8b990();
        FUN_00cb1f10();
        FUN_00db3260();
      }
    }
    lVar4 = *(longlong *)(arg1 + 0x90);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150fe30();
    bVar8 = lVar1 != 0;
    lVar7 = lVar1;
    if (bVar8) {
      FUN_00d50b00();
    }
    pVar6 = (pthread_key_t)lVar7;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = *(longlong *)(arg1 + 0x90);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150fe10();
    bVar9 = lVar1 != 0;
    lVar7 = lVar1;
    if (bVar9) {
      FUN_00d50b00();
    }
    param_1 = (pthread_key_t)lVar7;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = *(longlong *)(arg1 + 0x90);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150ce10();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = *(longlong *)(arg1 + 0x90);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015127c0();
    local_50 = lVar1;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_002dc990();
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00155070();
  if (*(longlong *)(arg1 + 0xa0) != 0) {
    *(longlong *)(arg1 + 0xa0) = 0;
    FUN_00d50b20();
  }
  if (lVar5 != lVar1) {
    lVar5 = *(longlong *)(arg1 + 0x90);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150ce10();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    lVar5 = *(longlong *)(arg1 + 0x90);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150ceb0();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    lVar5 = *(longlong *)(arg1 + 0x90);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150c7f0();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    lVar5 = *(longlong *)(arg1 + 0x90);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150d0b0();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      FUN_00e8b990();
      FUN_00cb1f10();
      if (lVar1 != 0) {
        FUN_00e8b990();
        FUN_00cb1f10();
        FUN_00db3270();
      }
    }
  }
  *this = lVar1;
  *(undefined1 *)(this + 1) = 1;
  if ((bVar8) && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar9) && (local_50 != 0)) {
    FUN_00d50b20();
  }
  return this;
}




// ==================================================
// @005039a0 (2394 bytes) — calculation

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong **pplVar7;
  undefined4 unaff_ESI;
  longlong *this;
  undefined8 uVar8;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar9 [16];
  longlong *local_60;
  char local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  local_50 = (longlong *)CONCAT44(local_50._4_4_,unaff_ESI);
  FUN_0197b900();
  (**(code **)(*local_60 + 0xa28))();
  plVar5 = local_40;
  local_48 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      local_48 = (longlong *)0x0;
      plVar5 = (longlong *)0x0;
    }
    else {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((DAT_027c0160 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_0270ab28 = FUN_0015ea50();
    _DAT_0270ab10 = "MUScalePitchSystem";
    _DAT_0270ab18 = 0x78;
    _DAT_0270ab20 = FUN_0015ecf0;
    _DAT_0270ab30 = 0;
    uRam000000000270ab38 = 0;
    _DAT_0270ab40 = 0;
    uRam000000000270ab48 = 0;
    _DAT_0270ab50 = 0;
    uRam000000000270ab58 = 0;
    _DAT_0270ab60 = 0;
    uRam000000000270ab68 = 0;
    _DAT_0270ab70 = 0;
    uRam000000000270ab78 = 0;
    _DAT_0270ab80 = 0;
    uRam000000000270ab88 = 0;
    _DAT_0270ab90 = 0;
    uRam000000000270ab98 = 0;
    _DAT_0270aba0 = 0;
    uRam000000000270aba8 = 0;
    _DAT_0270abb0 = 0;
    uRam000000000270abb8 = 0;
    _DAT_0270abc0 = 0;
    uRam000000000270abc8 = 0;
    _DAT_0270abd0 = 0;
    ___cxa_guard_release();
  }
  if (plVar5 == (longlong *)0x0) {
LAB_00503a43:
    if (DAT_02802688 != 0) goto LAB_00503a54;
LAB_00503b0a:
    plVar5 = local_48;
    if ((DAT_027c0150 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      _DAT_0270acc8 = FUN_0015ea50();
      _DAT_0270acb0 = "MUPercussivePitchSystem";
      _DAT_0270acb8 = 0x58;
      _DAT_0270acc0 = FUN_0015eca0;
      _DAT_0270acd0 = 0;
      uRam000000000270acd8 = 0;
      _DAT_0270ace0 = 0;
      uRam000000000270ace8 = 0;
      _DAT_0270acf0 = 0;
      uRam000000000270acf8 = 0;
      _DAT_0270ad00 = 0;
      uRam000000000270ad08 = 0;
      _DAT_0270ad10 = 0;
      uRam000000000270ad18 = 0;
      _DAT_0270ad20 = 0;
      uRam000000000270ad28 = 0;
      _DAT_0270ad30 = 0;
      uRam000000000270ad38 = 0;
      _DAT_0270ad40 = 0;
      uRam000000000270ad48 = 0;
      _DAT_0270ad50 = 0;
      uRam000000000270ad58 = 0;
      _DAT_0270ad60 = 0;
      uRam000000000270ad68 = 0;
      _DAT_0270ad70 = 0;
      ___cxa_guard_release();
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_00503b50;
      if (local_48 != (longlong *)0x0) goto LAB_00503ea8;
      goto LAB_00503f0c;
    }
LAB_00503b50:
    if (DAT_02802688 == 0) goto LAB_00503f0c;
LAB_00503ea8:
    pplVar7 = &local_40;
    FUN_01d98320();
    plVar5 = local_40;
    FUN_0050ef30();
    if (plVar5 == (longlong *)0x0) {
LAB_00503ee4:
      pplVar7 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar5 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_00503ee4;
    }
    plVar5 = *pplVar7;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar5 != (longlong *)0x0) goto LAB_00503f0c;
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_0006daf0();
    plVar5[0x28] = 0;
    *(undefined4 *)(plVar5 + 0x29) = 0;
    plVar5[0x2a] = 0;
    plVar5[0x2b] = 0;
    *(undefined4 *)(plVar5 + 0x2c) = 0;
    *plVar5 = (longlong)&DAT_02656f08;
    plVar5[2] = (longlong)&DAT_02657878;
    plVar5[0x27] = (longlong)&DAT_026578b8;
    (*DAT_02656f20)();
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_00503a43;
    if (local_48 == (longlong *)0x0) goto LAB_00503b0a;
LAB_00503a54:
    pplVar7 = &local_40;
    FUN_01d98320();
    plVar5 = local_40;
    FUN_00275460();
    if (plVar5 == (longlong *)0x0) {
LAB_00503a90:
      pplVar7 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar5 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_00503a90;
    }
    plVar5 = *pplVar7;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((plVar5 != (longlong *)0x0 & (param_2 ^ 1)) != 0) {
LAB_00503f0c:
      bVar2 = true;
      bVar1 = true;
      plVar5 = (longlong *)0x0;
      goto joined_r0x00504168;
    }
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_0006daf0();
    plVar5[0x28] = 0;
    *(undefined4 *)(plVar5 + 0x29) = 0;
    plVar5[0x2a] = 0;
    plVar5[0x2b] = 0;
    *(undefined4 *)(plVar5 + 0x2c) = 0;
    *plVar5 = (longlong)&DAT_026449b8;
    plVar5[2] = (longlong)&DAT_02645458;
    plVar5[0x27] = (longlong)&DAT_02645498;
    plVar5[0x2d] = (longlong)&DAT_026454e8;
    plVar5[0x2e] = (longlong)&DAT_02645518;
    plVar5[0x2f] = (longlong)&DAT_02645550;
    *(undefined4 *)((longlong)plVar5 + 0x1dc) = 0;
    *(undefined2 *)(plVar5 + 0x3c) = 0;
    plVar5[99] = 0;
    plVar5[0x30] = 0;
    *(undefined1 *)(plVar5 + 0x31) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x18c) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x194) = 0;
    *(undefined1 *)((longlong)plVar5 + 0x19c) = 0;
    plVar5[0x34] = 0;
    plVar5[0x35] = 0;
    *(undefined8 *)((longlong)plVar5 + 0x1a9) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x1b1) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x1cb) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x1d3) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x1bc) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x1c4) = 0;
    *(undefined8 *)((longlong)plVar5 + 500) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x1fc) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x1e4) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x1ec) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x203) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x279) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x281) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x26c) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x274) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x25c) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x264) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x24c) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x254) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x23c) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x244) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x22c) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x234) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x21c) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x224) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x20c) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x214) = 0;
    plVar5[0x54] = 0;
    plVar5[0x55] = 0;
    plVar5[0x52] = 0;
    plVar5[0x53] = 0;
    *(undefined1 *)(plVar5 + 0x56) = 0;
    plVar5[0x57] = 0;
    plVar5[0x58] = 0;
    *(undefined8 *)((longlong)plVar5 + 0x2c1) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x2c9) = 0;
    plVar5[0x5f] = 0;
    plVar5[0x60] = 0;
    plVar5[0x5d] = 0;
    plVar5[0x5e] = 0;
    plVar5[0x5b] = 0;
    plVar5[0x5c] = 0;
    *(undefined8 *)((longlong)plVar5 + 0x305) = 0;
    *(undefined4 *)((longlong)plVar5 + 0x313) = 0;
    *(undefined4 *)(plVar5 + 0x62) = 0;
    (*DAT_026449d0)();
    FUN_01b150d0();
    FUN_01b15090();
    FUN_01b28220();
    FUN_01b182c0();
    plVar6 = DAT_02709e30;
    if (DAT_02709e30 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_50 = plVar6;
    FUN_00e7d6f0();
    uVar8 = FUN_0071a120();
    if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
        (uVar8 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    local_60 = local_50;
    local_58 = '\0';
    FUN_000175c0(uVar8,&local_60);
    plVar6 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 != (longlong *)0x0) {
      local_38 = '\0';
      local_40 = plVar6;
      FUN_00c70bc0();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    FUN_01b28af0();
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (this[0x3f] != 0) {
      FUN_00249410();
      FUN_01b15090();
      FUN_00248dc0();
      FUN_01b150d0();
    }
  }
  FUN_01d98320();
  plVar6 = local_40;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 != (longlong *)0x0) {
    FUN_01d98320();
    FUN_00d50130();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_0006daf0();
  (**(code **)(*plVar6 + 0x18))();
  FUN_00504610();
  FUN_00d50b20();
  if ((this[0x45] != 0) && (FUN_00d50130(), this[0x45] != 0)) {
    this[0x45] = 0;
    FUN_00d50b20();
  }
  uVar8 = (**(code **)(*plVar5 + 0x938))();
  auVar9._8_8_ = extraout_XMM0_Qb;
  auVar9._0_8_ = uVar8;
  auVar9 = blendps(auVar9,_DAT_023b4a30,0xe);
  (**(code **)(*plVar5 + 0x4d0))(0,auVar9._0_8_);
  FUN_01d980f0();
  (**(code **)(*this + 0x9f8))();
  (**(code **)(*this + 0x928))();
  FUN_00504770();
  bVar2 = false;
  bVar1 = false;
joined_r0x00504168:
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
    bVar1 = bVar2;
  }
  if (!bVar1 && plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @015189a0 (2392 bytes) — calculation

{
  byte bVar1;
  byte bVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  pthread_key_t in_ECX;
  pthread_key_t pVar7;
  undefined4 in_EDX;
  char unaff_SIL;
  undefined1 *local_res8;
  longlong local_118;
  undefined1 local_110;
  undefined1 local_100;
  longlong local_f8;
  undefined1 local_f0;
  longlong local_e8;
  undefined1 local_e0;
  longlong local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined4 local_b8;
  pthread_key_t local_b4;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  undefined4 local_8c;
  undefined8 local_88;
  longlong local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  char local_38;
  
  local_c8 = param_2;
  local_c0 = param_4;
  local_b8 = in_EDX;
  local_b4 = in_ECX;
  local_88 = param_1;
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0165a070();
  local_68 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(in_ECX);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    in_ECX = (pthread_key_t)local_68;
  }
  FUN_012e8920();
  local_58 = local_40;
  if (((local_38 == '\0') && (local_40 != 0)) &&
     ((FUN_00d50b00(), local_38 != '\0' && (local_40 != 0)))) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(in_ECX);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    in_ECX = (pthread_key_t)local_58;
  }
  FUN_012caf10();
  local_80 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(in_ECX);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    in_ECX = (pthread_key_t)local_58;
  }
  FUN_012cade0();
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015058d0();
  local_50 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01657380();
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01650620();
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016670b0();
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0124df10();
  local_60 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 == 0) goto LAB_01519296;
  pvVar3 = _pthread_getspecific(in_ECX);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    in_ECX = (pthread_key_t)local_60;
  }
  FUN_0132d610();
  local_48 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(in_ECX);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    in_ECX = (pthread_key_t)local_60;
  }
  FUN_0132d900();
  lVar4 = local_40;
  local_8c = param_3;
  if (((local_38 == '\0') && (local_40 != 0)) &&
     ((FUN_00d50b00(), local_38 != '\0' && (local_40 != 0)))) {
    FUN_00d50b20();
  }
  if (unaff_SIL == '\0') {
    local_88 = FUN_00e7bdb0();
    uVar6 = FUN_00e7bdb0();
  }
  else {
    pvVar3 = _pthread_getspecific(in_ECX);
    if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      in_ECX = (pthread_key_t)local_48;
    }
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016553c0(local_88);
    pVar7 = 0;
    local_88 = FUN_016cb5f0(0,0);
    pvVar3 = _pthread_getspecific(pVar7);
    if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      pVar7 = (pthread_key_t)local_48;
    }
    pvVar3 = _pthread_getspecific(pVar7);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016553c0(local_c8);
    in_ECX = 0;
    uVar6 = FUN_016cb5f0(0,0);
  }
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_118 = local_50;
  local_110 = 0;
  pVar7 = 1;
  FUN_01519670(1,&local_118);
  if (lVar4 == local_40) {
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
LAB_0151906e:
  }
  else if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
      lVar4 = local_40;
      goto LAB_0151906e;
    }
    lVar4 = local_40;
  }
  else {
    if (lVar4 != 0) {
      FUN_00d50b20();
      lVar4 = local_40;
      goto LAB_0151906e;
    }
    lVar4 = local_40;
  }
  if ((char)local_b8 != '\0') {
    pvVar3 = _pthread_getspecific(pVar7);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_38 = '\0';
    bVar1 = FUN_01514480(0,(undefined1)local_8c);
    local_70 = '\0';
    local_b0 = local_48;
    local_a8 = '\0';
    local_a0 = local_80;
    local_98 = '\0';
    pVar7 = (pthread_key_t)&local_a0;
    bVar2 = FUN_01515040(0,&local_b0,local_88,uVar6);
    if (((bVar2 | bVar1) == 1) && (local_c0 != (undefined1 *)0x0)) {
      *local_c0 = 1;
    }
  }
  if ((char)local_b4 != '\0') {
    pvVar3 = _pthread_getspecific(pVar7);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_100 = 0;
    local_f8 = local_48;
    local_f0 = 0;
    local_e8 = local_80;
    local_e0 = 0;
    local_d8 = local_68;
    local_d0 = 0;
    bVar1 = FUN_01516720(0,&local_f8,local_88,uVar6);
    if ((bVar1 & local_res8 != (undefined1 *)0x0) == 1) {
      *local_res8 = 1;
    }
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01519296:
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  lVar4 = local_58;
  if (local_80 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @0150ddd0 (2375 bytes) — math_loop

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  code *pcVar8;
  longlong *plVar9;
  char cVar10;
  void *pvVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  pthread_key_t pVar16;
  longlong lVar17;
  longlong *arg1;
  longlong this;
  longlong lVar18;
  longlong *local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  longlong *local_50;
  
  plVar9 = local_78;
  pVar16 = (pthread_key_t)param_1;
  if (*(longlong *)(this + 0x78) == 0) {
    do {
      lVar15 = *(longlong *)(this + 0x50);
      if (lVar15 == 0) goto LAB_0150dea5;
      pvVar11 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar11 != (void *)0x0) {
        lVar15 = *(longlong *)(this + 0x50);
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar15 = *(longlong *)(lVar15 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      pVar16 = (pthread_key_t)param_1;
      this = lVar15;
    } while (*(longlong *)(lVar15 + 0x78) == 0);
    lVar15 = *(longlong *)(lVar15 + 0x78);
  }
  else {
    lVar15 = *(longlong *)(this + 0x78);
  }
  if (lVar15 == 0) {
LAB_0150dea5:
    FUN_0176fff0();
    bVar1 = true;
  }
  else {
    FUN_00d50b00();
    pvVar11 = _pthread_getspecific(pVar16);
    if (pvVar11 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01822e80();
    bVar1 = false;
  }
  if (local_70 == '\0') {
    if (local_78 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  pcVar8 = DAT_025ecda8;
  lVar15 = *arg1;
  if (*(int *)(lVar15 + 0xc) < 1) {
    bVar4 = false;
    local_68 = (longlong *)0x0;
    bVar6 = false;
    local_50 = (longlong *)0x0;
    bVar3 = false;
    local_80 = (longlong *)0x0;
    bVar2 = false;
    lVar12 = 0;
  }
  else {
    lVar18 = 0;
    lVar12 = 0;
    bVar2 = false;
    local_80 = (longlong *)0x0;
    bVar3 = false;
    local_50 = (longlong *)0x0;
    bVar6 = false;
    local_68 = (longlong *)0x0;
    lVar17 = 0;
    bVar4 = false;
    do {
      pVar16 = (pthread_key_t)lVar17;
      lVar15 = *(longlong *)(*(longlong *)(lVar15 + 0x10) + lVar18 * 8);
      if (lVar12 == lVar15) {
        if ((!bVar2) && (lVar12 != 0)) {
          bVar2 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar15 != 0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (lVar12 != 0)) {
          FUN_00d50b20();
          bVar2 = true;
          lVar12 = lVar15;
        }
        else {
          bVar2 = true;
          lVar12 = lVar15;
        }
      }
      pvVar11 = _pthread_getspecific(pVar16);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      if (local_78 == local_80) {
        if ((!bVar3) && (local_78 != (longlong *)0x0)) {
          bVar3 = true;
          if (local_70 != '\0') goto LAB_0150e15e;
          FUN_00d50b00();
LAB_0150e117:
          bVar3 = true;
        }
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else if (local_70 == '\0') {
        if (local_78 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if (bVar3) {
          if (local_80 != (longlong *)0x0) {
            FUN_00d50b20();
            local_80 = local_78;
            goto LAB_0150e117;
          }
          local_80 = local_78;
          bVar3 = true;
        }
        else {
          local_80 = local_78;
          bVar3 = true;
        }
      }
      else if ((bVar3) && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
        local_80 = local_78;
        bVar3 = true;
      }
      else {
        local_80 = local_78;
        bVar3 = true;
      }
LAB_0150e15e:
      pvVar11 = _pthread_getspecific(pVar16);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar10 = FUN_0125a2d0();
      if (cVar10 != '\0') {
        pvVar11 = _pthread_getspecific(pVar16);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        if (local_78 == local_68) {
          plVar13 = local_68;
          bVar5 = bVar4;
          if ((!bVar4) && (local_78 != (longlong *)0x0)) {
            if (local_70 != '\0') {
              bVar5 = true;
              goto LAB_0150e294;
            }
            FUN_00d50b00();
            bVar5 = true;
          }
LAB_0150e280:
          if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          plVar13 = local_78;
          if (local_70 == '\0') {
            if (local_78 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            bVar5 = true;
            if ((bVar4) && (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_0150e280;
          }
          if ((bVar4) && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          bVar5 = true;
        }
LAB_0150e294:
        if (plVar13 == (longlong *)0x0) {
          plVar13 = (longlong *)FUN_00e8fc40();
          FUN_00d4ff40();
          *plVar13 = (longlong)&DAT_025ecd90;
          *(undefined4 *)((longlong)plVar13 + 0x54) = 0;
          *(undefined1 *)(plVar13 + 0xb) = 0;
          plVar13[7] = 0;
          plVar13[8] = 0;
          *(undefined8 *)((longlong)plVar13 + 0x42) = 0;
          *(undefined8 *)((longlong)plVar13 + 0x4a) = 0;
          *(undefined8 *)((longlong)plVar13 + 0x5c) = 0;
          *(undefined8 *)((longlong)plVar13 + 100) = 0;
          *(undefined4 *)((longlong)plVar13 + 0x6c) = 0;
          (*pcVar8)();
          pvVar11 = _pthread_getspecific(pVar16);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0128c470();
          bVar5 = true;
        }
        pvVar11 = _pthread_getspecific(pVar16);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152ebe0();
        if (local_78 == local_50) {
          plVar14 = local_50;
          bVar7 = bVar6;
          if ((!bVar6) && (local_78 != (longlong *)0x0)) {
            if (local_70 != '\0') {
              bVar7 = true;
              goto LAB_0150e454;
            }
            FUN_00d50b00();
            bVar7 = true;
          }
LAB_0150e440:
          if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          plVar14 = local_78;
          if (local_70 == '\0') {
            if (local_78 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            bVar7 = true;
            if ((bVar6) && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_0150e440;
          }
          if ((bVar6) && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          bVar7 = true;
        }
LAB_0150e454:
        if (plVar14 == (longlong *)0x0) {
          plVar14 = (longlong *)FUN_0117a3f0();
          (**(code **)(*plVar14 + 0x18))();
          pvVar11 = _pthread_getspecific(pVar16);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01508860();
          FUN_0150d3a0();
          pvVar11 = _pthread_getspecific(pVar16);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar11 = _pthread_getspecific(pVar16);
          if ((pvVar11 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pVar16 = (pthread_key_t)plVar9;
          }
          pvVar11 = _pthread_getspecific(pVar16);
          if ((pvVar11 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pVar16 = (pthread_key_t)lVar12;
          }
          FUN_0125dfa0();
          FUN_01773f20();
          FUN_01508220();
          pvVar11 = _pthread_getspecific(pVar16);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152dc80();
          bVar7 = true;
          FUN_0150d720();
        }
        local_70 = '\0';
        cVar10 = FUN_00d23d70();
        local_78 = plVar14;
        local_68 = plVar13;
        local_50 = plVar14;
        bVar4 = bVar5;
        bVar6 = bVar7;
        if (cVar10 == '\0') {
          FUN_0150d3a0();
          FUN_0150d720();
        }
      }
      lVar18 = lVar18 + 1;
      lVar15 = *arg1;
      lVar17 = (longlong)*(int *)(lVar15 + 0xc);
    } while (lVar18 < lVar17);
  }
  if (plVar9 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar1) {
    FUN_00d50b20();
  }
  if ((bVar4) && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar6) && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (lVar12 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @00505840 (2219 bytes) — calculation

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong *arg1;
  longlong *this;
  undefined4 uVar8;
  double dVar9;
  undefined8 uVar10;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  if (arg1[0x40] == 0) {
    (**(code **)(*arg1 + 0x640))();
    uVar8 = (**(code **)(*local_40 + 0x580))();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    puVar7 = (undefined8 *)FUN_00e8fc40();
    FUN_0006daf0();
    *(undefined4 *)(puVar7 + 0x27) = 0;
    puVar7[0x2e] = 0;
    *(undefined4 *)(puVar7 + 0x2f) = 0;
    puVar7[0x30] = 0;
    *(undefined1 *)(puVar7 + 0x31) = 0;
    puVar7[0x28] = 0;
    puVar7[0x29] = 0;
    *(undefined4 *)(puVar7 + 0x2a) = 0;
    puVar7[0x2b] = 0;
    puVar7[0x2c] = 0;
    *(undefined8 *)((longlong)puVar7 + 0x165) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x18c) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x194) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x199) = 0;
    puVar7[0x35] = 0;
    puVar7[0x36] = 0;
    puVar7[0x37] = 0;
    puVar7[0x38] = 0;
    *puVar7 = &DAT_02677e10;
    puVar7[2] = &DAT_026788e8;
    puVar7[0x39] = &DAT_02678928;
    *(undefined4 *)((longlong)puVar7 + 500) = 0;
    *(undefined1 *)(puVar7 + 0x3f) = 0;
    puVar7[0x43] = 0;
    puVar7[0x3c] = 0;
    puVar7[0x3d] = 0;
    puVar7[0x3a] = 0;
    puVar7[0x3b] = 0;
    *(undefined1 *)(puVar7 + 0x3e) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x1fc) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x204) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x20c) = 0;
    (*DAT_02677e28)();
    puVar1 = (undefined8 *)arg1[0x40];
    if (puVar1 == puVar7) {
      FUN_00d50b20();
    }
    else {
      arg1[0x40] = (longlong)puVar7;
      if (puVar1 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*(longlong *)arg1[0x40] + 0x4d0))(0,uVar8);
    lVar3 = DAT_02709e50;
    plVar2 = (longlong *)arg1[0x40];
    if (DAT_02709e50 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar2 + 0xa10))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = DAT_026e1800;
    if (DAT_026e1800 != 0) {
      FUN_00d50b00();
    }
    dVar9 = (double)FUN_00e7d6f0();
    uVar6 = (ulonglong)(dVar9 * DAT_023907c0);
    dVar9 = dVar9 * DAT_023907c0 - _DAT_023907c8;
    uVar10 = FUN_0071a120();
    if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
        (uVar10 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
    bVar5 = (byte)(((longlong)dVar9 & (longlong)uVar6 >> 0x3f | uVar6) / 3);
    local_50 = lVar3;
    local_48 = '\0';
    FUN_000175c0(uVar10,&local_50);
    plVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (longlong *)0x0) {
      local_38 = '\0';
      local_40 = plVar2;
      bVar5 = FUN_00c70bc0();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = DAT_02709e60;
    if ((plVar2 != (longlong *)0x0 & bVar5) != 0) {
      if (DAT_02709e60 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      local_70 = local_40;
      local_68 = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_68 = '\x01';
      FUN_01cef3b0();
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_01cef450();
    FUN_01cef4c0();
    FUN_01d0fe80();
    lVar3 = DAT_026f6f70;
    plVar2 = (longlong *)arg1[0x40];
    if (DAT_026f6f70 != 0) {
      FUN_00d50b00();
    }
    lVar4 = DAT_026deab8;
    if (DAT_026deab8 != 0) {
      FUN_00d50b00();
    }
    local_c0 = lVar4;
    local_b8 = '\x01';
    local_b0 = 0;
    local_a8 = '\0';
    FUN_00d31230(&local_b0,&local_c0);
    local_60 = local_40;
    local_58 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_58 = '\x01';
    (**(code **)(*plVar2 + 0x6a8))();
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  lVar3 = DAT_026f6fd0;
  if (DAT_026f6fd0 != 0) {
    FUN_00d50b00();
  }
  dVar9 = (double)FUN_00e7d6f0();
  uVar6 = (ulonglong)(dVar9 * DAT_023907c0);
  dVar9 = dVar9 * DAT_023907c0 - _DAT_023907c8;
  uVar10 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
      (uVar10 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
    uVar10 = FUN_00d50b20();
  }
  bVar5 = (byte)(((longlong)dVar9 & (longlong)uVar6 >> 0x3f | uVar6) / 3);
  local_50 = lVar3;
  local_48 = '\0';
  FUN_000175c0(uVar10,&local_50);
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    local_38 = '\0';
    local_40 = plVar2;
    bVar5 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((plVar2 != (longlong *)0x0 & bVar5) == 0) {
    FUN_01cef410();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != (longlong *)0x0) {
      local_88 = '\0';
      local_90 = 0;
      FUN_01cef3b0();
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_01cef410();
    plVar2 = local_40;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar3 = DAT_02709e60;
    if (plVar2 == (longlong *)0x0) {
      if (DAT_02709e60 != 0) {
        FUN_00d50b00();
      }
      local_a0 = lVar3;
      local_98 = '\x01';
      FUN_01d51a40();
      local_80 = local_40;
      local_78 = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_78 = '\x01';
      FUN_01cef3b0();
      if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  *(undefined1 *)(this + 1) = 0;
  lVar3 = arg1[0x40];
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  *this = lVar3;
  *(undefined1 *)(this + 1) = 1;
  return;
}




// ==================================================
// @01514480 (2211 bytes) — math_loop

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  pthread_key_t pVar11;
  longlong lVar12;
  longlong *arg1;
  longlong this;
  ulonglong uVar13;
  longlong local_48;
  longlong local_40;
  char local_38;
  
  cVar3 = (char)param_1;
  lVar9 = *arg1;
  pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar7 != (void *)0x0) {
    lVar9 = *arg1;
    lVar8 = FUN_00e8b990();
    if (lVar8 != 0) {
      lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
  }
  if (*(longlong *)(lVar9 + 0x78) == 0) {
    do {
      lVar8 = *(longlong *)(lVar9 + 0x50);
      if (lVar8 == 0) {
        return 0;
      }
      pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar7 != (void *)0x0) {
        lVar8 = *(longlong *)(lVar9 + 0x50);
        lVar9 = FUN_00e8b990();
        if (lVar9 != 0) {
          lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
        }
      }
      lVar9 = lVar8;
    } while (*(longlong *)(lVar8 + 0x78) == 0);
    lVar9 = *(longlong *)(lVar8 + 0x78);
  }
  else {
    lVar9 = *(longlong *)(lVar9 + 0x78);
  }
  if (lVar9 == 0) {
    return 0;
  }
  FUN_00d50b00();
  plVar1 = (longlong *)(this + 0x78);
  lVar8 = this;
  if (*(longlong *)(this + 0x78) == 0) {
    do {
      lVar10 = *(longlong *)(lVar8 + 0x50);
      if (lVar10 == 0) goto LAB_01514701;
      pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar7 != (void *)0x0) {
        lVar10 = *(longlong *)(lVar8 + 0x50);
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar10 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      lVar8 = lVar10;
    } while (*(longlong *)(lVar10 + 0x78) == 0);
    lVar8 = *(longlong *)(lVar10 + 0x78);
  }
  else {
    lVar8 = *plVar1;
  }
  if (lVar8 == 0) {
LAB_01514701:
    bVar4 = false;
    local_48 = 0;
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
    pVar11 = (pthread_key_t)param_1;
    if (*plVar1 == 0) {
      lVar8 = 0;
      lVar10 = this;
      do {
        pVar11 = (pthread_key_t)param_1;
        lVar12 = *(longlong *)(lVar10 + 0x50);
        if (lVar12 == 0) {
          bVar2 = true;
          goto LAB_01514556;
        }
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          lVar12 = *(longlong *)(lVar10 + 0x50);
          lVar10 = FUN_00e8b990();
          if (lVar10 != 0) {
            lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8);
          }
        }
        pVar11 = (pthread_key_t)param_1;
        lVar10 = lVar12;
      } while (*(longlong *)(lVar12 + 0x78) == 0);
      lVar8 = *(longlong *)(lVar12 + 0x78);
    }
    else {
      lVar8 = *plVar1;
    }
    if (lVar8 != 0) {
      FUN_00d50b00();
    }
    bVar2 = false;
LAB_01514556:
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01822e80();
    local_48 = local_40;
    param_1 = local_40;
    if (local_40 == 0) {
      bVar4 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar4 = true;
    }
    else {
      local_38 = '\0';
      bVar4 = true;
    }
    if (!bVar2 && lVar8 != 0) {
      FUN_00d50b20();
    }
  }
  pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    param_1 = lVar9;
  }
  FUN_01822e80();
  pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar5 = FUN_00d51e10();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((char)uVar5 == '\0') {
    pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      param_1 = lVar9;
    }
    FUN_00d51d20();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_0150d0b0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      if (*plVar1 == 0) {
        lVar9 = 0;
        lVar8 = this;
        do {
          lVar10 = *(longlong *)(lVar8 + 0x50);
          if (lVar10 == 0) {
            bVar2 = true;
            goto LAB_015148de;
          }
          pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar7 != (void *)0x0) {
            lVar10 = *(longlong *)(lVar8 + 0x50);
            lVar8 = FUN_00e8b990();
            if (lVar8 != 0) {
              lVar10 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            }
          }
          lVar8 = lVar10;
        } while (*(longlong *)(lVar10 + 0x78) == 0);
        lVar9 = *(longlong *)(lVar10 + 0x78);
      }
      else {
        lVar9 = *plVar1;
      }
      if (lVar9 != 0) {
        FUN_00d50b00();
      }
      bVar2 = false;
LAB_015148de:
      pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01822e80();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      if (!bVar2 && lVar9 != 0) {
        FUN_00d50b20();
      }
      if (*(longlong *)(this + 0x80) == 0) {
        lVar9 = 0;
        lVar8 = this;
        do {
          lVar10 = *(longlong *)(lVar8 + 0x50);
          if (lVar10 == 0) {
            bVar2 = true;
            goto LAB_01514aab;
          }
          pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar7 != (void *)0x0) {
            lVar10 = *(longlong *)(lVar8 + 0x50);
            lVar8 = FUN_00e8b990();
            if (lVar8 != 0) {
              lVar10 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            }
          }
          lVar8 = lVar10;
        } while (*(longlong *)(lVar10 + 0x80) == 0);
        lVar9 = *(longlong *)(lVar10 + 0x80);
      }
      else {
        lVar9 = *(longlong *)(this + 0x80);
      }
      if (lVar9 != 0) {
        FUN_00d50b00();
      }
      bVar2 = false;
LAB_01514aab:
      pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0124ae90();
      if (!bVar2 && lVar9 != 0) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        FUN_00d50b20();
      }
    }
  }
  uVar13 = (ulonglong)uVar5 ^ 1;
  if (param_2 != '\0') {
    if (*plVar1 == 0) {
      lVar9 = 0;
      lVar8 = this;
      do {
        lVar10 = *(longlong *)(lVar8 + 0x50);
        if (lVar10 == 0) {
          bVar2 = true;
          goto LAB_01514b87;
        }
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar7 != (void *)0x0) {
          lVar10 = *(longlong *)(lVar8 + 0x50);
          lVar8 = FUN_00e8b990();
          if (lVar8 != 0) {
            lVar10 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
        }
        lVar8 = lVar10;
      } while (*(longlong *)(lVar10 + 0x78) == 0);
      lVar9 = *(longlong *)(lVar10 + 0x78);
    }
    else {
      lVar9 = *plVar1;
    }
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    bVar2 = false;
LAB_01514b87:
    pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar6 = FUN_018232b0();
    if (!bVar2 && lVar9 != 0) {
      FUN_00d50b20();
    }
    pVar11 = (pthread_key_t)param_1;
    if (iVar6 != 2) {
      if (*plVar1 == 0) {
        lVar9 = 0;
        do {
          pVar11 = (pthread_key_t)param_1;
          lVar8 = *(longlong *)(this + 0x50);
          if (lVar8 == 0) {
            bVar2 = true;
            goto LAB_01514bf9;
          }
          pvVar7 = _pthread_getspecific(pVar11);
          if (pvVar7 != (void *)0x0) {
            lVar8 = *(longlong *)(this + 0x50);
            lVar10 = FUN_00e8b990();
            if (lVar10 != 0) {
              lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8);
            }
          }
          this = lVar8;
          pVar11 = (pthread_key_t)param_1;
        } while (*(longlong *)(this + 0x78) == 0);
        lVar9 = *(longlong *)(this + 0x78);
      }
      else {
        lVar9 = *plVar1;
      }
      if (lVar9 != 0) {
        FUN_00d50b00();
      }
      bVar2 = false;
LAB_01514bf9:
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_018232c0();
      uVar13 = CONCAT71((uint7)(uint3)(uVar5 >> 8),1);
      if (!bVar2 && lVar9 != 0) {
        FUN_00d50b20();
      }
    }
  }
  if ((bVar4) && (local_48 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return uVar13;
}




// ==================================================
// @001563c0 (2192 bytes) — math_loop

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  pthread_key_t pVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong this;
  longlong *plVar7;
  char cVar8;
  bool bVar9;
  longlong local_f8;
  char local_f0;
  char local_b4;
  longlong *local_a0;
  char local_98;
  int local_74;
  longlong *local_70;
  char local_68;
  int local_58;
  longlong *local_48;
  char local_40;
  
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6000();
  if ((local_68 == '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6000();
  if (local_70 == (longlong *)0x0) {
    bVar9 = false;
  }
  else {
    pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6000();
    iVar1 = FUN_00d8c7a0();
    bVar9 = 10 < iVar1;
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_b4 = '\0';
  if (bVar9) {
    pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6000();
    FUN_00d97ce0();
    if (local_68 == '\0') {
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar3 = DAT_026e3cb8;
    if (DAT_026e3cb8 != 0) {
      FUN_00d50b00();
    }
    local_b4 = (**(code **)(*local_70 + 0x50))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  local_74 = 0;
  plVar7 = local_70;
  do {
    plVar6 = local_70;
    pVar4 = (pthread_key_t)param_1;
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    if ((local_68 == '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_70 == (longlong *)0x0) break;
    local_68 = '\0';
    local_70 = (longlong *)0x0;
    local_58 = -1;
    do {
      lVar3 = (longlong)local_58;
      local_58 = local_58 + 1;
      if (*(int *)((longlong)plVar6 + 0xc) <= local_58) {
        bVar9 = false;
        goto LAB_00156b52;
      }
      plVar5 = (longlong *)plVar6[2];
      local_70 = (longlong *)plVar5[lVar3 + 1];
      pvVar2 = _pthread_getspecific((pthread_key_t)plVar5);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6000();
      cVar8 = local_a0 == plVar7;
      if ((!(bool)cVar8) && (plVar7 != (longlong *)0x0)) {
        pvVar2 = _pthread_getspecific((pthread_key_t)plVar5);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6000();
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        cVar8 = (**(code **)(*plVar7 + 0x50))();
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    } while (cVar8 == '\0');
    local_74 = local_74 + 1;
    if (local_b4 == '\0') {
      pvVar2 = _pthread_getspecific((pthread_key_t)plVar5);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6000();
      local_98 = '\x02';
      if (local_f8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8cb40();
      if (local_48 == plVar7) {
LAB_00156af2:
        plVar6 = plVar7;
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar6 = local_48;
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if (plVar7 != (longlong *)0x0) {
            FUN_00d50b20();
            plVar7 = local_48;
            goto LAB_00156af2;
          }
        }
        else {
          if (plVar7 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          local_40 = '\0';
        }
      }
      local_a0 = &DAT_024c5048;
      if (local_f8 != 0) {
        FUN_00d50b20();
      }
      plVar7 = plVar6;
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\x01';
      plVar5 = &DAT_024cc6f0;
      local_48 = &DAT_024cc6f0;
      FUN_00d8cb40();
      if (local_a0 == plVar7) {
LAB_00156aaa:
        if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else if (local_98 == '\0') {
        if (local_a0 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar9 = plVar7 != (longlong *)0x0;
        plVar7 = local_a0;
        if (bVar9) {
          FUN_00d50b20();
          goto LAB_00156aaa;
        }
      }
      else {
        bVar9 = plVar7 != (longlong *)0x0;
        plVar7 = local_a0;
        if (bVar9) {
          FUN_00d50b20();
        }
      }
    }
    bVar9 = true;
    plVar6 = plVar5;
LAB_00156b52:
    FUN_000be170();
    FUN_00d50b20();
    pVar4 = (pthread_key_t)plVar6;
    param_1 = plVar6;
  } while (bVar9);
  if (0 < local_74) {
    lVar3 = *(longlong *)(this + 0x88);
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5f80();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01513590 (2000 bytes) — math_loop

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  byte bVar11;
  pthread_key_t pVar12;
  ulonglong uVar13;
  undefined7 uVar14;
  longlong *arg1;
  longlong this;
  longlong *plVar15;
  longlong local_78;
  ulonglong local_50;
  undefined4 local_48;
  ulonglong local_40;
  char local_38;
  
  lVar8 = *arg1;
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar6 != (void *)0x0) {
    lVar8 = *arg1;
    lVar7 = FUN_00e8b990();
    if (lVar7 != 0) {
      lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
  }
  if (*(longlong *)(lVar8 + 0x80) == 0) {
    do {
      lVar7 = *(longlong *)(lVar8 + 0x50);
      if (lVar7 == 0) goto LAB_01513689;
      pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar6 != (void *)0x0) {
        lVar7 = *(longlong *)(lVar8 + 0x50);
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      lVar8 = lVar7;
    } while (*(longlong *)(lVar7 + 0x80) == 0);
    uVar13 = *(ulonglong *)(lVar7 + 0x80);
  }
  else {
    uVar13 = *(ulonglong *)(lVar8 + 0x80);
  }
  if (uVar13 == 0) {
LAB_01513689:
    uVar13 = 0;
    goto LAB_01513cec;
  }
  FUN_00d50b00();
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  plVar1 = (longlong *)(this + 0x80);
  lVar8 = this;
  if (*(longlong *)(this + 0x80) == 0) {
    do {
      lVar7 = *(longlong *)(lVar8 + 0x50);
      if (lVar7 == 0) {
        local_78 = 0;
        goto LAB_015136c3;
      }
      pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar6 != (void *)0x0) {
        lVar7 = *(longlong *)(lVar8 + 0x50);
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      lVar8 = lVar7;
    } while (*(longlong *)(lVar7 + 0x80) == 0);
    local_78 = *(longlong *)(lVar7 + 0x80);
  }
  else {
    local_78 = *plVar1;
  }
  if (local_78 != 0) {
    FUN_00d50b00();
  }
LAB_015136c3:
  cVar5 = FUN_00d51e10();
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  if (cVar5 == '\0') {
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      param_1 = uVar13;
    }
    FUN_00d51d20();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_0150ceb0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (param_2 == '\0') {
      uVar13 = CONCAT71((int7)(local_40 >> 8),1);
    }
    else {
      lVar8 = *arg1;
      pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar6 != (void *)0x0) {
        lVar8 = *arg1;
        lVar7 = FUN_00e8b990();
        if (lVar7 != 0) {
          lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
        }
      }
      if (*(longlong *)(lVar8 + 0x78) == 0) {
        do {
          lVar7 = *(longlong *)(lVar8 + 0x50);
          if (lVar7 == 0) goto LAB_0151394e;
          pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar6 != (void *)0x0) {
            lVar7 = *(longlong *)(lVar8 + 0x50);
            lVar8 = FUN_00e8b990();
            if (lVar8 != 0) {
              lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            }
          }
          lVar8 = lVar7;
        } while (*(longlong *)(lVar7 + 0x78) == 0);
        if (*(longlong *)(lVar7 + 0x78) == 0) goto LAB_0151394e;
LAB_015138f5:
        FUN_00d50b00();
        FUN_00d50b20();
        lVar8 = *arg1;
        pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar6 != (void *)0x0) {
          lVar8 = *arg1;
          lVar7 = FUN_00e8b990();
          if (lVar7 != 0) {
            lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
          }
        }
        pVar12 = (pthread_key_t)param_1;
        if (*(longlong *)(lVar8 + 0x78) == 0) {
          lVar7 = 0;
          do {
            pVar12 = (pthread_key_t)param_1;
            lVar10 = *(longlong *)(lVar8 + 0x50);
            if (lVar10 == 0) {
              bVar2 = true;
              goto LAB_015139d1;
            }
            pvVar6 = _pthread_getspecific(pVar12);
            if (pvVar6 != (void *)0x0) {
              lVar10 = *(longlong *)(lVar8 + 0x50);
              lVar8 = FUN_00e8b990();
              if (lVar8 != 0) {
                lVar10 = *(longlong *)
                          (lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
              }
            }
            pVar12 = (pthread_key_t)param_1;
            lVar8 = lVar10;
          } while (*(longlong *)(lVar10 + 0x78) == 0);
          lVar7 = *(longlong *)(lVar10 + 0x78);
        }
        else {
          lVar7 = *(longlong *)(lVar8 + 0x78);
        }
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        bVar2 = false;
LAB_015139d1:
        pvVar6 = _pthread_getspecific(pVar12);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01822e80();
        local_50 = local_40;
        param_1 = local_40;
        if (local_40 == 0) {
          bVar4 = false;
        }
        else if (local_38 == '\0') {
          FUN_00d50b00();
          bVar4 = true;
        }
        else {
          local_38 = '\0';
          bVar4 = true;
        }
        if (!bVar2 && lVar7 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        if (*(longlong *)(lVar8 + 0x78) != 0) goto LAB_015138f5;
LAB_0151394e:
        bVar4 = false;
        local_50 = 0;
      }
      plVar15 = (longlong *)(this + 0x78);
      lVar8 = this;
      if (*(longlong *)(this + 0x78) == 0) {
        do {
          lVar7 = *(longlong *)(lVar8 + 0x50);
          if (lVar7 == 0) goto LAB_01513b52;
          pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar6 != (void *)0x0) {
            lVar7 = *(longlong *)(lVar8 + 0x50);
            lVar8 = FUN_00e8b990();
            if (lVar8 != 0) {
              lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            }
          }
          lVar8 = lVar7;
        } while (*(longlong *)(lVar7 + 0x78) == 0);
        lVar8 = *(longlong *)(lVar7 + 0x78);
        if (lVar8 != 0) goto LAB_01513a8a;
LAB_01513b52:
        local_40 = 0;
        uVar9 = 0;
        bVar2 = false;
      }
      else {
        lVar8 = *plVar15;
        if (lVar8 == 0) goto LAB_01513b52;
LAB_01513a8a:
        FUN_00d50b00();
        uVar9 = FUN_00d50b20();
        pVar12 = (pthread_key_t)param_1;
        if (*plVar15 == 0) {
          lVar7 = 0;
          lVar8 = this;
          do {
            pVar12 = (pthread_key_t)param_1;
            lVar10 = *(longlong *)(lVar8 + 0x50);
            if (lVar10 == 0) {
              local_48 = (undefined4)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
              goto LAB_01513b7e;
            }
            pvVar6 = _pthread_getspecific(pVar12);
            if (pvVar6 != (void *)0x0) {
              lVar10 = *(longlong *)(lVar8 + 0x50);
              lVar8 = FUN_00e8b990();
              if (lVar8 != 0) {
                lVar10 = *(longlong *)
                          (lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
              }
            }
            lVar8 = lVar10;
            uVar9 = 0;
            pVar12 = (pthread_key_t)param_1;
          } while (*(longlong *)(lVar8 + 0x78) == 0);
          plVar15 = (longlong *)(lVar8 + 0x78);
        }
        lVar7 = *plVar15;
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        local_48 = 0;
LAB_01513b7e:
        pvVar6 = _pthread_getspecific(pVar12);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01822e80();
        if (local_40 == 0) {
          uVar9 = 0;
          bVar2 = false;
        }
        else {
          uVar14 = (undefined7)((ulonglong)lVar8 >> 8);
          if (local_38 == '\0') {
            FUN_00d50b00();
            uVar9 = CONCAT71(uVar14,1);
            bVar2 = true;
          }
          else {
            uVar9 = CONCAT71(uVar14,1);
            bVar2 = true;
          }
        }
        bVar11 = (byte)local_48 | lVar7 == 0;
        param_1 = (ulonglong)CONCAT31((int3)((uint)local_48 >> 8),bVar11);
        if (bVar11 == 0) {
          FUN_00d50b20();
        }
      }
      pVar12 = (pthread_key_t)param_1;
      if (*plVar1 == 0) {
        lVar8 = 0;
        do {
          pVar12 = (pthread_key_t)param_1;
          lVar7 = *(longlong *)(this + 0x50);
          if (lVar7 == 0) {
            bVar3 = true;
            goto LAB_01513c20;
          }
          pvVar6 = _pthread_getspecific(pVar12);
          if (pvVar6 != (void *)0x0) {
            lVar7 = *(longlong *)(this + 0x50);
            lVar10 = FUN_00e8b990();
            if (lVar10 != 0) {
              lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8);
            }
          }
          this = lVar7;
          pVar12 = (pthread_key_t)param_1;
        } while (*(longlong *)(this + 0x80) == 0);
        lVar8 = *(longlong *)(this + 0x80);
      }
      else {
        lVar8 = *plVar1;
      }
      if (lVar8 != 0) {
        FUN_00d50b00();
      }
      bVar3 = false;
LAB_01513c20:
      pvVar6 = _pthread_getspecific(pVar12);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0124ae90();
      if (!bVar3 && lVar8 != 0) {
        FUN_00d50b20();
      }
      uVar13 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
      if ((bVar2) && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((bVar4) && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    uVar13 = 0;
  }
  FUN_00d50b20();
LAB_01513cec:
  return uVar13 & 0xffffffff;
}




// ==================================================
// @00504b00 (1891 bytes) — calculation

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *this;
  longlong **pplVar9;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar11 [16];
  longlong *local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  pplVar9 = &local_40;
  FUN_01d98320();
  plVar1 = local_40;
  FUN_00275460();
  if (plVar1 == (longlong *)0x0) {
LAB_00504b52:
    pplVar9 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_00504b52;
  }
  plVar1 = *pplVar9;
  if (*(char *)(pplVar9 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar9 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    if (this[0x42] != 0) {
      FUN_01e40eb0();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_40 != (longlong *)0x0) {
        local_78 = 0;
        lVar2 = this[0x42];
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        local_78 = '\x01';
        local_80 = lVar2;
        (**(code **)(*this + 0x470))();
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    puVar7 = (undefined8 *)FUN_00e8fc40();
    FUN_0006daf0();
    *(undefined4 *)(puVar7 + 0x27) = 0;
    puVar7[0x2e] = 0;
    *(undefined4 *)(puVar7 + 0x2f) = 0;
    puVar7[0x30] = 0;
    *(undefined1 *)(puVar7 + 0x31) = 0;
    puVar7[0x28] = 0;
    puVar7[0x29] = 0;
    *(undefined4 *)(puVar7 + 0x2a) = 0;
    puVar7[0x2b] = 0;
    puVar7[0x2c] = 0;
    *(undefined8 *)((longlong)puVar7 + 0x165) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x18c) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x194) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x199) = 0;
    puVar7[0x35] = 0;
    puVar7[0x36] = 0;
    puVar7[0x37] = 0;
    puVar7[0x38] = 0;
    *puVar7 = &DAT_02645fa8;
    puVar7[2] = &DAT_02646a70;
    puVar7[0x39] = 0;
    puVar7[0x3a] = 0;
    *(undefined4 *)((longlong)puVar7 + 0x1d7) = 0;
    puVar7[0x3f] = 0;
    puVar7[0x40] = 0;
    *(undefined8 *)((longlong)puVar7 + 0x1ec) = 0;
    *(undefined8 *)((longlong)puVar7 + 500) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x1dc) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x1e4) = 0;
    (*DAT_02645fc0)();
    puVar3 = (undefined8 *)this[0x42];
    if (puVar3 == puVar7) {
      FUN_00d50b20();
    }
    else {
      this[0x42] = (longlong)puVar7;
      if (puVar3 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    plVar4 = (longlong *)this[0x42];
    uVar5 = FUN_01b2b5d0();
    auVar11._8_4_ = extraout_XMM0_Dc;
    auVar11._0_8_ = uVar5;
    auVar11._12_4_ = extraout_XMM0_Dd;
    auVar11 = insertps(_DAT_023b4a40,auVar11,0x10);
    (**(code **)(*plVar4 + 0x4d0))(0,auVar11._0_8_);
    (**(code **)(*(longlong *)this[0x42] + 0x558))();
    local_68 = 0;
    local_70 = this[0x42];
    if (local_70 != 0) {
      FUN_00d50b00();
    }
    local_68 = '\x01';
    FUN_01b0ac50();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_02709e38;
    plVar4 = (longlong *)this[0x42];
    if (DAT_02709e38 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar4 + 0xa10))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)this[0x42] + 0xa20))();
    FUN_01b2ff20(DAT_023b4a10);
    FUN_01b2ff30(DAT_023b4a14);
    FUN_01b2fe80();
    if (this[0x45] != 0) {
      FUN_00d50130();
    }
    plVar8 = (longlong *)FUN_00e8fc40();
    FUN_000161a0();
    (**(code **)(*plVar8 + 0x18))();
    plVar4 = (longlong *)this[0x45];
    if (plVar4 == plVar8) {
      FUN_00d50b20();
    }
    else {
      this[0x45] = (longlong)plVar8;
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    plVar8 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    uVar10 = (**(code **)(*plVar8 + 0x18))();
    plVar4 = DAT_02709e40;
    if (DAT_02709e40 != (longlong *)0x0) {
      uVar10 = FUN_00d50b00();
    }
    local_40 = plVar4;
    local_38 = '\0';
    uVar10 = FUN_00ca0840(uVar10,&local_40);
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
    if (plVar4 != (longlong *)0x0) {
      uVar10 = FUN_00d50b20();
    }
    lVar2 = DAT_027e3c80;
    plVar4 = (longlong *)this[0x45];
    if (DAT_027e3c80 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_98 = '\0';
    local_a0 = plVar8;
    (**(code **)(*plVar4 + 0x508))(uVar10,&local_a0);
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*this + 0x990))();
    local_60 = local_40;
    local_58 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_58 = '\x01';
    FUN_01b214b0();
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01ad48c0();
    FUN_004fe810();
    FUN_01e53c20();
    plVar4 = local_40;
    (**(code **)(*plVar1 + 0x640))();
    local_50 = local_90;
    local_48 = 0;
    if (local_88 == '\0') {
      if (local_90 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_88 = '\0';
    }
    local_48 = '\x01';
    (**(code **)(*plVar4 + 0x638))();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e53c20();
    plVar1 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00504610();
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    FUN_00d50b20();
  }
  pplVar9 = &local_40;
  FUN_01d98320();
  plVar1 = local_40;
  FUN_0050ef30();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 != '\0') goto LAB_005051cd;
  }
  pplVar9 = (longlong **)&DAT_02802688;
LAB_005051cd:
  plVar1 = *pplVar9;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*this + 0x990))();
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) {
        return;
      }
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (local_40 == (longlong *)0x0) {
      return;
    }
    FUN_00504610();
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01518160 (1812 bytes) — math_loop

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  longlong *plVar5;
  void *pvVar6;
  uint in_ECX;
  pthread_key_t pVar7;
  undefined8 *in_RDX;
  char *pcVar8;
  longlong *arg1;
  longlong *this;
  uint uVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 extraout_XMM0_Qa;
  double dVar17;
  undefined1 *local_res8;
  undefined1 *local_res10;
  undefined8 local_128;
  undefined1 local_120;
  longlong *local_118;
  undefined1 local_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  longlong *local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  double local_c8;
  longlong *in_stack_ffffffffffffff60;
  char local_98 [8];
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  longlong *local_78;
  
  pVar7 = in_ECX;
  if (this != (longlong *)0x0) {
    FUN_00d50b00();
  }
  plVar5 = this;
  if (1 < *(int *)(*arg1 + 0xc)) {
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_0013dd30();
    (**(code **)(*plVar5 + 0x18))();
    if (plVar5 == this) {
      FUN_00d50b20();
      plVar5 = this;
    }
    else if (this != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((char)in_ECX != '\0') {
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      if (this != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_98[0] = '\0';
      uVar11 = FUN_01512be0();
      FUN_01513590(uVar11,0);
      in_stack_ffffffffffffff60 = this;
      if (this != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    if (param_3 != '\0') {
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      if (this != (longlong *)0x0) {
        FUN_00d50b00();
      }
      FUN_01512890();
      if (this != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d23340();
  cVar2 = local_98[0];
  pcVar8 = &stack0xffffffffffffff90;
  if (local_98[0] != '\0') {
    pcVar8 = local_98;
  }
  *pcVar8 = '\0';
  if ((local_98[0] != '\0') && (in_stack_ffffffffffffff60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar2 == '\0') && (in_stack_ffffffffffffff60 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  local_78 = in_stack_ffffffffffffff60;
  FUN_00d23740();
  uVar9 = in_ECX & 0xff;
  uVar11 = 0;
  FUN_01517980(param_1,param_2,uVar9,param_3);
  pvVar6 = _pthread_getspecific((pthread_key_t)uVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar12 = FUN_01655040();
  pvVar6 = _pthread_getspecific((pthread_key_t)uVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar13 = FUN_01655100();
  uVar12 = FUN_00e7b500(uVar12);
  lVar1 = *arg1;
  local_d8 = uVar12;
  local_d0 = uVar13;
  if (lVar1 != 0) {
    local_98[0] = '\0';
    local_80 = 0;
    local_88 = 0;
    local_90 = lVar1;
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar10 = 0;
      do {
        uVar12 = *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + lVar10 * 8);
        pvVar6 = _pthread_getspecific((pthread_key_t)uVar11);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar14 = (double)FUN_01655040();
        pvVar6 = _pthread_getspecific((pthread_key_t)uVar11);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar15 = (double)FUN_016551c0();
        dVar17 = param_1;
        if (param_1 <= dVar14) {
          dVar17 = dVar14;
        }
        dVar14 = param_2;
        if (dVar15 <= param_2) {
          dVar14 = dVar15;
        }
        if (dVar17 < dVar14) {
          dVar15 = dVar14 - dVar17;
          FUN_00e7b500(dVar17);
          dVar16 = (double)FUN_00e7b600();
          if (NAN(dVar16)) {
            local_110 = 0;
            local_100 = 0;
            local_f8 = *in_RDX;
            local_f0 = 0;
            uVar11 = 1;
            local_118 = plVar5;
            local_108 = uVar12;
            FUN_01517980(dVar17,dVar14,uVar9,param_3);
          }
          else {
            if (dVar17 < dVar16) {
              uVar11 = 1;
              local_c8 = dVar15;
              FUN_01517980(dVar17,dVar16,uVar9,param_3);
              dVar15 = local_c8;
            }
            if (dVar16 + dVar15 < dVar14) {
              local_128 = *in_RDX;
              local_120 = 0;
              uVar11 = 1;
              FUN_01517980(dVar16 + dVar15,&local_128,uVar9,param_3);
            }
          }
        }
        lVar10 = lVar10 + 1;
        local_88 = CONCAT44(local_88._4_4_,(int)lVar10);
      } while ((int)lVar10 < *(int *)(lVar1 + 0xc));
    }
    uVar12 = FUN_00277f20();
    in_stack_ffffffffffffff60 = local_78;
  }
  if (plVar5 != this) {
    if ((char)in_ECX != '\0') {
      local_98[0] = '\0';
      bVar3 = FUN_01512be0(uVar12,0);
      bVar4 = FUN_01513590(extraout_XMM0_Qa,0);
      if (((bVar3 | bVar4) == 1) && (local_res8 != (undefined1 *)0x0)) {
        *local_res8 = 1;
      }
    }
    in_stack_ffffffffffffff60 = local_78;
    if (param_3 != '\0') {
      local_e0 = 0;
      local_e8 = plVar5;
      bVar3 = FUN_01512890();
      if ((bVar3 & local_res10 != (undefined1 *)0x0) == 1) {
        *local_res10 = 1;
      }
    }
  }
  if (in_stack_ffffffffffffff60 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01512be0 (1756 bytes) — math_loop

{
  bool bVar1;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  pthread_key_t pVar9;
  bool bVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong *arg1;
  longlong this;
  longlong *plVar14;
  longlong local_78;
  undefined4 local_50;
  longlong local_48;
  char local_40;
  
  lVar11 = *arg1;
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar3 != (void *)0x0) {
    lVar11 = *arg1;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      lVar11 = *(longlong *)(lVar11 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
  }
  if (*(longlong *)(lVar11 + 0x78) == 0) {
    do {
      lVar4 = *(longlong *)(lVar11 + 0x50);
      if (lVar4 == 0) goto LAB_01512cc6;
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        lVar4 = *(longlong *)(lVar11 + 0x50);
        lVar11 = FUN_00e8b990();
        if (lVar11 != 0) {
          lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar11 + 0x154) & 1) * 8);
        }
      }
      lVar11 = lVar4;
    } while (*(longlong *)(lVar4 + 0x78) == 0);
    lVar11 = *(longlong *)(lVar4 + 0x78);
  }
  else {
    lVar11 = *(longlong *)(lVar11 + 0x78);
  }
  if (lVar11 == 0) {
LAB_01512cc6:
    uVar12 = 0;
    goto LAB_015130fa;
  }
  FUN_00d50b00();
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  plVar14 = (longlong *)(this + 0x78);
  lVar11 = this;
  if (*(longlong *)(this + 0x78) == 0) {
    do {
      lVar4 = *(longlong *)(lVar11 + 0x50);
      if (lVar4 == 0) {
        local_78 = 0;
        goto LAB_01512cfd;
      }
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        lVar4 = *(longlong *)(lVar11 + 0x50);
        lVar11 = FUN_00e8b990();
        if (lVar11 != 0) {
          lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar11 + 0x154) & 1) * 8);
        }
      }
      lVar11 = lVar4;
    } while (*(longlong *)(lVar4 + 0x78) == 0);
    local_78 = *(longlong *)(lVar4 + 0x78);
  }
  else {
    local_78 = *plVar14;
  }
  if (local_78 != 0) {
    FUN_00d50b00();
  }
LAB_01512cfd:
  cVar2 = FUN_00d51e10();
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    if (param_2 == '\0') {
LAB_01512ed4:
      lVar11 = 0;
      bVar1 = false;
    }
    else {
      lVar11 = this;
      if (*plVar14 == 0) {
        do {
          lVar4 = *(longlong *)(lVar11 + 0x50);
          if (lVar4 == 0) {
            lVar11 = 0;
            bVar1 = false;
            goto LAB_01512edc;
          }
          pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar3 != (void *)0x0) {
            lVar4 = *(longlong *)(lVar11 + 0x50);
            lVar11 = FUN_00e8b990();
            if (lVar11 != 0) {
              lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar11 + 0x154) & 1) * 8);
            }
          }
          lVar11 = lVar4;
        } while (*(longlong *)(lVar4 + 0x78) == 0);
        lVar11 = *(longlong *)(lVar4 + 0x78);
      }
      else {
        lVar11 = *plVar14;
      }
      if (lVar11 == 0) goto LAB_01512ed4;
      FUN_00d50b00();
      uVar5 = FUN_00d50b20();
      pVar9 = (pthread_key_t)param_1;
      plVar13 = plVar14;
      if (*plVar14 == 0) {
        lVar11 = 0;
        lVar4 = this;
        do {
          pVar9 = (pthread_key_t)param_1;
          lVar6 = *(longlong *)(lVar4 + 0x50);
          if (lVar6 == 0) {
            local_50 = (undefined4)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
            goto LAB_0151324b;
          }
          pvVar3 = _pthread_getspecific(pVar9);
          if (pvVar3 != (void *)0x0) {
            lVar6 = *(longlong *)(lVar4 + 0x50);
            lVar4 = FUN_00e8b990();
            if (lVar4 != 0) {
              lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
            }
          }
          uVar5 = 0;
          pVar9 = (pthread_key_t)param_1;
          lVar4 = lVar6;
        } while (*(longlong *)(lVar6 + 0x78) == 0);
        plVar13 = (longlong *)(lVar6 + 0x78);
      }
      lVar11 = *plVar13;
      if (lVar11 != 0) {
        FUN_00d50b00();
      }
      local_50 = 0;
LAB_0151324b:
      pvVar3 = _pthread_getspecific(pVar9);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01822e80();
      if (local_48 == 0) {
        bVar1 = false;
      }
      else if (local_40 == '\0') {
        FUN_00d50b00();
        bVar1 = true;
      }
      else {
        local_40 = '\0';
        bVar1 = true;
      }
      bVar8 = (byte)local_50 | lVar11 == 0;
      param_1 = (ulonglong)CONCAT31((int3)((uint)local_50 >> 8),bVar8);
      lVar11 = local_48;
      if (bVar8 == 0) {
        FUN_00d50b20();
      }
    }
LAB_01512edc:
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_0150d0b0();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    lVar4 = local_48;
    if (param_2 != '\0') {
      if (*plVar14 == 0) {
        lVar4 = 0;
        lVar6 = this;
        do {
          lVar7 = *(longlong *)(lVar6 + 0x50);
          if (lVar7 == 0) {
            bVar10 = true;
            goto LAB_01512faa;
          }
          pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar3 != (void *)0x0) {
            lVar7 = *(longlong *)(lVar6 + 0x50);
            lVar6 = FUN_00e8b990();
            if (lVar6 != 0) {
              lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
            }
          }
          lVar6 = lVar7;
        } while (*(longlong *)(lVar6 + 0x78) == 0);
        lVar4 = *(longlong *)(lVar6 + 0x78);
      }
      else {
        lVar4 = *plVar14;
      }
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      bVar10 = false;
LAB_01512faa:
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01822e80();
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      if (!bVar10 && lVar4 != 0) {
        FUN_00d50b20();
      }
      pVar9 = (pthread_key_t)param_1;
      if (*(longlong *)(this + 0x80) == 0) {
        lVar6 = 0;
        do {
          pVar9 = (pthread_key_t)param_1;
          lVar4 = *(longlong *)(this + 0x50);
          if (lVar4 == 0) {
            bVar10 = true;
            goto LAB_01513032;
          }
          pvVar3 = _pthread_getspecific(pVar9);
          if (pvVar3 != (void *)0x0) {
            lVar4 = *(longlong *)(this + 0x50);
            lVar7 = FUN_00e8b990();
            if (lVar7 != 0) {
              lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
            }
          }
          this = lVar4;
          pVar9 = (pthread_key_t)param_1;
        } while (*(longlong *)(this + 0x80) == 0);
      }
      lVar6 = *(longlong *)(this + 0x80);
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      bVar10 = false;
LAB_01513032:
      pvVar3 = _pthread_getspecific(pVar9);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0124ae90();
      lVar4 = 0;
      if (!bVar10 && lVar6 != 0) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
    }
    uVar12 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
    if ((bVar1) && (lVar11 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar12 = 0;
  }
  FUN_00d50b20();
LAB_015130fa:
  return uVar12 & 0xffffffff;
}




// ==================================================
// @01323a40 (1738 bytes) — calculation

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *arg1;
  longlong *this;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  
  FUN_00d61ea0();
  lVar2 = DAT_027e3c40;
  plVar1 = (longlong *)*arg1;
  if (DAT_027e3c40 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar1 + 0x590))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027e3c40;
  if (cVar3 != '\0') {
    plVar1 = (longlong *)*arg1;
    if (DAT_027e3c40 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x578))();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (local_50 != 0) {
      if (this != (longlong *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d8cb40();
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      if (this != (longlong *)0x0) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*arg1 + 0x5e0))();
      local_50 = local_60;
      local_48 = '\0';
      FUN_00ca0840();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (local_60 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  lVar2 = DAT_027bf3c8;
  plVar1 = (longlong *)*arg1;
  if (DAT_027bf3c8 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar1 + 0x590))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027bf3c8;
  if (cVar3 != '\0') {
    plVar1 = (longlong *)*arg1;
    if (DAT_027bf3c8 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x578))();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (local_50 != 0) {
      if (this != (longlong *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d8cb40();
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      if (this != (longlong *)0x0) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*arg1 + 0x5e0))();
      local_50 = local_60;
      local_48 = '\0';
      FUN_00ca0840();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (local_60 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  lVar2 = DAT_027bf3d0;
  plVar1 = (longlong *)*arg1;
  if (DAT_027bf3d0 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar1 + 0x590))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027bf3d0;
  if (cVar3 != '\0') {
    plVar1 = (longlong *)*arg1;
    if (DAT_027bf3d0 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x578))();
    if ((local_48 == '\0') && (local_50 != 0)) {
      FUN_00d50b00();
    }
    FUN_002771e0();
    lVar5 = FUN_00e85ef0();
    if (lVar5 == 0) {
      lVar5 = FUN_00e858c0();
      if (lVar5 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined8 *)(lVar5 + 0x28);
      }
    }
    else {
      uVar6 = *(undefined8 *)(lVar5 + 0x30);
    }
    (**(code **)(*this + 0x200))(0,uVar6,0);
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  lVar2 = DAT_027bf3d8;
  plVar1 = (longlong *)*arg1;
  if (DAT_027bf3d8 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar1 + 0x590))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027bf3d8;
  if (cVar3 != '\0') {
    plVar1 = (longlong *)*arg1;
    if (DAT_027bf3d8 != 0) {
      FUN_00d50b00();
    }
    uVar4 = (**(code **)(*plVar1 + 0x510))();
    *(undefined1 *)((longlong)this + 0x1aa) = uVar4;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @00506830 (1651 bytes) — calculation

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *arg1;
  longlong *this;
  undefined4 uVar4;
  float fVar5;
  undefined4 extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  float fVar7;
  float extraout_XMM0_Db_02;
  float extraout_XMM0_Db_03;
  undefined8 uVar6;
  float extraout_XMM0_Db_04;
  float extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  float fVar8;
  float fVar9;
  float fVar10;
  float in_XMM1_Dc;
  float fVar11;
  float fVar12;
  longlong *local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  undefined8 local_68;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  fVar7 = (float)((ulonglong)param_2 >> 0x20);
  fVar8 = (float)param_2;
  FUN_01d96f70();
  uVar4 = (**(code **)(*this + 0x640))();
  plVar2 = local_50;
  local_98 = DAT_026e41f0;
  if (DAT_026e41f0 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_90 = '\x01';
  (**(code **)(*plVar2 + 0x3b0))(uVar4,&local_98);
  local_78 = local_40;
  local_70 = 0;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_70 = '\x01';
  FUN_01d488d0();
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40(DAT_02390124);
  lVar1 = this[0x49];
  if (lVar1 == 0) {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02680400;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    *(undefined8 *)((longlong)puVar3 + 0x39) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x41) = 0;
    (*DAT_02680418)();
    lVar1 = this[0x49];
    this[0x49] = (longlong)puVar3;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_01d9aea0();
    plVar2 = local_40;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 == (longlong *)0x0) {
      FUN_01d97e80();
      local_68 = (**(code **)(*local_40 + 0x4d8))();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01d9aea0();
      local_68 = (**(code **)(*local_40 + 0x4d8))();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01d97e80();
    (**(code **)(*local_40 + 0x4d8))();
    FUN_01d39400((float)local_68,extraout_XMM0_Db);
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d97ec0();
    uVar6 = (**(code **)(*local_40 + 0x4d8))();
    local_68 = uVar6;
    FUN_01d97e80();
    (**(code **)(*local_50 + 0x4d8))();
    fVar7 = extraout_XMM0_Db_00;
    in_XMM1_Dc = extraout_XMM0_Dd;
    FUN_01d38ba0((float)local_68,extraout_XMM0_Db_00);
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d97ec0();
    uVar6 = (**(code **)(*local_40 + 0x4d8))();
    local_68 = uVar6;
    (**(code **)(*this + 0xa08))();
    (**(code **)(*local_50 + 0x4d8))();
    fVar7 = extraout_XMM0_Db_01 + fVar7;
    in_XMM1_Dc = extraout_XMM0_Dd_00 + in_XMM1_Dc;
    FUN_01d38ba0((float)local_68,fVar7 + DAT_02390d00);
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this + 0xa08))();
    uVar6 = (**(code **)(*local_40 + 0x4d8))();
    local_68 = uVar6;
    (**(code **)(*this + 0xa08))();
    (**(code **)(*local_50 + 0x4d8))();
    fVar7 = extraout_XMM0_Db_02 + fVar7;
    in_XMM1_Dc = extraout_XMM0_Dd_01 + in_XMM1_Dc;
    FUN_01d38ba0((float)local_68,fVar7 + DAT_02390d00);
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this + 0xa08))();
    uVar6 = (**(code **)(*local_40 + 0x4d8))();
    local_68 = uVar6;
    (**(code **)(*this + 0xa08))();
    (**(code **)(*local_50 + 0x4d8))();
    fVar7 = extraout_XMM0_Db_03 + fVar7;
    in_XMM1_Dc = extraout_XMM0_Dd_02 + in_XMM1_Dc;
    fVar8 = fVar7 + DAT_02390d00 + DAT_023b2664;
    FUN_01d38ba0((float)local_68);
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar1 = this[0x49];
    plVar2 = (longlong *)*arg1;
  }
  else {
    plVar2 = (longlong *)*arg1;
  }
  if (lVar1 != 0) {
    local_80 = 0;
    FUN_00d50b00();
  }
  local_80 = '\x01';
  local_88 = lVar1;
  (**(code **)(*plVar2 + 0x3a8))();
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  plVar2 = (longlong *)*arg1;
  (**(code **)(*this + 0x950))();
  uVar6 = (**(code **)(*local_40 + 0x4d8))();
  fVar9 = fVar8;
  local_68 = uVar6;
  (**(code **)(*this + 0x950))();
  (**(code **)(*local_50 + 0x4d8))();
  fVar10 = fVar7;
  fVar11 = fVar9;
  fVar12 = in_XMM1_Dc;
  (**(code **)(*this + 0x950))();
  fVar5 = (float)(**(code **)(*local_c8 + 0x4d8))();
  uVar4 = extraout_XMM0_Dc;
  (**(code **)(*this + 0x950))();
  (**(code **)(*local_b8 + 0x4d8))();
  (**(code **)(*plVar2 + 0x3e0))
            ((float)local_68 + fVar8 + DAT_02390d00,extraout_XMM0_Db_04 + fVar7 + DAT_02390d00,
             fVar5 + fVar9 + DAT_02390d00,extraout_XMM0_Db_05 + fVar10 + DAT_02390d00 + DAT_023b2664
             ,fVar11,fVar12,fVar5,uVar4,fVar9,in_XMM1_Dc);
  if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01519670 (1590 bytes) — math_loop

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  void *pvVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong arg1;
  longlong *this;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined1 local_78 [8];
  undefined1 local_70;
  longlong local_40;
  char local_38;
  
  if (*param_2 == arg1) {
    *(undefined1 *)(this + 1) = 0;
    if (arg1 != 0) {
      FUN_00d50b00();
    }
    *this = arg1;
  }
  else {
    if (*(longlong *)(arg1 + 0x78) == 0) {
      lVar7 = 0;
      lVar5 = arg1;
      do {
        lVar9 = *(longlong *)(lVar5 + 0x50);
        if (lVar9 == 0) {
          bVar2 = true;
          goto LAB_015196c0;
        }
        pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar4 != (void *)0x0) {
          lVar9 = *(longlong *)(lVar5 + 0x50);
          lVar5 = FUN_00e8b990();
          if (lVar5 != 0) {
            lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
          }
        }
        lVar5 = lVar9;
      } while (*(longlong *)(lVar9 + 0x78) == 0);
      lVar7 = *(longlong *)(lVar9 + 0x78);
    }
    else {
      lVar7 = *(longlong *)(arg1 + 0x78);
    }
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    bVar2 = false;
LAB_015196c0:
    pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01822e80();
    pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar11 = (float)FUN_01773e80();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (!bVar2 && lVar7 != 0) {
      FUN_00d50b20();
    }
    lVar7 = *param_2;
    if (lVar7 == 0) {
      fVar12 = (float)FUN_01773e50();
    }
    else {
      pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar4 != (void *)0x0) {
        lVar7 = *param_2;
        lVar5 = FUN_00e8b990();
        if (lVar5 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
        }
      }
      if (*(longlong *)(lVar7 + 0x78) == 0) {
        lVar5 = 0;
        do {
          lVar9 = *(longlong *)(lVar7 + 0x50);
          if (lVar9 == 0) {
            bVar2 = true;
            goto LAB_015197ce;
          }
          pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar4 != (void *)0x0) {
            lVar9 = *(longlong *)(lVar7 + 0x50);
            lVar7 = FUN_00e8b990();
            if (lVar7 != 0) {
              lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
            }
          }
          lVar7 = lVar9;
        } while (*(longlong *)(lVar9 + 0x78) == 0);
        lVar5 = *(longlong *)(lVar9 + 0x78);
      }
      else {
        lVar5 = *(longlong *)(lVar7 + 0x78);
      }
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      bVar2 = false;
LAB_015197ce:
      pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01822e80();
      pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar12 = (float)FUN_01773e80();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (!bVar2 && lVar5 != 0) {
        FUN_00d50b20();
      }
    }
    if (DAT_0239425c <= (float)((uint)(fVar12 - fVar11) & _DAT_02390140)) {
      plVar6 = (longlong *)FUN_00e8fc40();
      FUN_0013dd30();
      (**(code **)(*plVar6 + 0x18))();
      pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar4 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        param_1 = plVar6;
      }
      if (arg1 != 0) {
        FUN_00d50b00();
      }
      local_38 = 0;
      uVar13 = FUN_01512be0();
      local_70 = 0;
      FUN_01513590(uVar13,0);
      local_38 = 0;
      FUN_01512890();
      if (arg1 != 0) {
        FUN_00d50b20();
      }
      local_38 = '\0';
      local_40 = 0;
      pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
      plVar1 = plVar6;
      if ((pvVar4 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        param_1 = plVar6;
        plVar1 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      while( true ) {
        plVar10 = plVar1;
        if ((*(char *)((longlong)plVar10 + 0xa1) == '\0') &&
           (pvVar4 = _pthread_getspecific((pthread_key_t)param_1), pvVar4 == (void *)0x0)) {
          FUN_015104e0();
        }
        lVar7 = plVar10[0x12];
        if (lVar7 != 0) break;
        plVar1 = (longlong *)plVar10[10];
        if (plVar1 == (longlong *)0x0) {
          lVar7 = 0;
LAB_01519b79:
          while( true ) {
            pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar8 = FUN_00e7bdb0();
            param_1 = (longlong *)FUN_00e7bdb0();
            cVar3 = FUN_01252960(param_1,uVar8,&local_40,local_78);
            if (cVar3 == '\0') break;
            if (local_40 != 0) {
              pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01767a10(fVar12);
            }
          }
          *this = (longlong)plVar6;
          *(undefined1 *)(this + 1) = 1;
          if (lVar7 != 0) {
            FUN_00d50b20();
          }
          if (local_38 == '\0') {
            return this;
          }
          if (local_40 == 0) {
            return this;
          }
          FUN_00d50b20();
          return this;
        }
        pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar4 != (void *)0x0) {
          plVar1 = (longlong *)plVar10[10];
          lVar7 = FUN_00e8b990();
          if (lVar7 != 0) {
            plVar1 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          }
        }
      }
      FUN_00d50b00();
      goto LAB_01519b79;
    }
    *(undefined1 *)(this + 1) = 0;
    if (arg1 != 0) {
      FUN_00d50b00();
    }
    *this = arg1;
  }
  *(undefined1 *)(this + 1) = 1;
  return this;
}




// ==================================================
// @01517980 (1528 bytes) — calculation

{
  undefined8 uVar1;
  byte bVar2;
  byte bVar3;
  void *pvVar4;
  longlong lVar5;
  undefined8 uVar6;
  pthread_key_t in_ECX;
  pthread_key_t pVar7;
  undefined8 *in_RDX;
  undefined1 local_res8;
  undefined1 *local_res10;
  undefined1 *local_res18;
  undefined1 local_118 [8];
  undefined1 local_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined1 local_f0;
  undefined1 local_e0;
  undefined1 local_d8 [8];
  undefined1 local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined4 local_8c;
  longlong local_88;
  char local_80;
  undefined8 local_68;
  longlong local_50;
  char local_48;
  
  pVar7 = in_ECX;
  local_a8 = param_1;
  local_a0 = param_2;
  local_98 = in_RDX;
  pvVar4 = _pthread_getspecific(in_ECX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0165a070();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8920();
  local_8c = param_4;
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012caf10();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cade0();
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015058d0();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  local_68._0_1_ = (char)in_ECX;
  if ((char)local_68 == '\0') {
    local_68 = FUN_00e7bdb0();
    uVar6 = FUN_00e7bdb0();
  }
  else {
    pvVar4 = _pthread_getspecific(pVar7);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      pVar7 = (pthread_key_t)local_50;
    }
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01656080(local_a8);
    pVar7 = 0;
    local_68 = FUN_016cb5f0(0,0);
    pvVar4 = _pthread_getspecific(pVar7);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      pVar7 = (pthread_key_t)local_50;
    }
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01656080(local_a0);
    pVar7 = 0;
    uVar6 = FUN_016cb5f0(0,0);
  }
  if (param_3 != '\0') {
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar1 = *local_98;
    bVar2 = FUN_01514480(0,local_res8);
    local_80 = '\0';
    local_110 = 0;
    local_100 = 0;
    local_f0 = 0;
    pVar7 = (pthread_key_t)&local_108;
    local_108 = uVar1;
    bVar3 = FUN_01515040(0,local_118,local_68,uVar6);
    if (((bVar3 | bVar2) == 1) && (local_res10 != (undefined1 *)0x0)) {
      *local_res10 = 1;
    }
  }
  if ((char)local_8c != '\0') {
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_e0 = 0;
    local_d0 = 0;
    local_c8 = *local_98;
    local_c0 = 0;
    local_b0 = 0;
    bVar2 = FUN_01516720(0,local_d8,local_68,uVar6);
    if ((bVar2 & local_res18 != (undefined1 *)0x0) == 1) {
      *local_res18 = 1;
    }
  }
  if (local_50 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01512000 (1446 bytes) — math_loop

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  pthread_key_t pVar9;
  char *pcVar10;
  longlong *arg1;
  longlong this;
  int iVar11;
  char cVar12;
  ulonglong uVar13;
  undefined7 uVar14;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88 [8];
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  longlong local_68;
  char local_60;
  undefined8 local_58;
  longlong local_50;
  char local_48;
  char local_38 [8];
  
  lVar6 = *arg1;
  if (lVar6 != 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      lVar6 = *arg1;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    if (*(longlong *)(lVar6 + 0x88) == 0) {
      lVar5 = 0;
      do {
        lVar7 = *(longlong *)(lVar6 + 0x50);
        if (lVar7 == 0) {
          bVar1 = true;
          goto LAB_01512080;
        }
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          lVar7 = *(longlong *)(lVar6 + 0x50);
          lVar6 = FUN_00e8b990();
          if (lVar6 != 0) {
            lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
          }
        }
        lVar6 = lVar7;
      } while (*(longlong *)(lVar7 + 0x88) == 0);
      lVar5 = *(longlong *)(lVar7 + 0x88);
    }
    else {
      lVar5 = *(longlong *)(lVar6 + 0x88);
    }
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    bVar1 = false;
LAB_01512080:
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar2 = FUN_018847d0();
    if (!bVar1 && lVar5 != 0) {
      FUN_00d50b20();
    }
    if (*(longlong *)(this + 0x88) == 0) {
      lVar6 = 0;
      do {
        lVar5 = *(longlong *)(this + 0x50);
        if (lVar5 == 0) {
          uVar14 = (undefined7)((ulonglong)this >> 8);
          bVar1 = true;
          goto LAB_015120f3;
        }
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          lVar5 = *(longlong *)(this + 0x50);
          lVar7 = FUN_00e8b990();
          if (lVar7 != 0) {
            lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
          }
        }
        this = lVar5;
      } while (*(longlong *)(lVar5 + 0x88) == 0);
      lVar6 = *(longlong *)(lVar5 + 0x88);
    }
    else {
      lVar6 = *(longlong *)(this + 0x88);
    }
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    bVar1 = false;
    uVar14 = 0;
LAB_015120f3:
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar3 = FUN_018847d0();
    if (!bVar1 && lVar6 != 0) {
      FUN_00d50b20();
    }
    if (uVar2 != 0) {
      uVar13 = CONCAT71(uVar14,1);
      if (uVar3 == 0) goto LAB_01512155;
      if ((uVar3 & 0xfffffffe) == 2) goto LAB_01512152;
      if ((uVar2 & 0xfffffffe) == 2) goto LAB_01512155;
      FUN_0150d890();
      if ((local_88[0] != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if (local_90 == 0) goto LAB_01512155;
      FUN_0150d890();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01505930();
      FUN_00d23310();
      pVar9 = CONCAT31((int3)(param_1 >> 8),local_88[0]);
      pcVar10 = local_38;
      if (local_88[0] != '\0') {
        pcVar10 = local_88;
      }
      local_38[0] = local_88[0];
      *pcVar10 = '\0';
      if ((local_88[0] != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(pVar9);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      pvVar4 = _pthread_getspecific(pVar9);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e7210();
      lVar6 = local_50;
      if (local_48 == '\0') {
        if (((local_50 != 0) && (FUN_00d50b00(), local_48 != '\0')) && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_48 = '\0';
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if (lVar6 == 0) {
        cVar12 = '\0';
        lVar5 = 0;
LAB_01512585:
        bVar1 = true;
      }
      else {
        local_88[0] = '\0';
        local_80 = lVar6;
        local_70 = 0;
        local_78 = 0;
        if (*(int *)(lVar6 + 0xc) < 1) {
          bVar1 = false;
          cVar12 = '\0';
          lVar5 = 0;
        }
        else {
          iVar11 = 0;
          lVar5 = 0;
          local_58 = 0;
          do {
            pvVar4 = _pthread_getspecific(pVar9);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01264240();
            lVar7 = local_50;
            if (local_48 == '\0') {
              if (local_50 != 0) {
                FUN_00d50b00();
                if ((local_48 != '\0') && (local_50 != 0)) {
                  FUN_00d50b20();
                }
                goto LAB_015124e7;
              }
            }
            else if (local_50 != 0) {
LAB_015124e7:
              if (lVar5 == 0) {
                uVar8 = FUN_00d50b00();
                local_58 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
                lVar5 = lVar7;
              }
              FUN_00d50b20();
              if (lVar7 != lVar5) {
                bVar1 = true;
                cVar12 = (char)local_58;
                goto LAB_01512571;
              }
            }
            iVar11 = iVar11 + 1;
            local_78 = CONCAT44(local_78._4_4_,iVar11);
          } while (iVar11 < *(int *)(lVar6 + 0xc));
          bVar1 = false;
          cVar12 = (char)local_58;
        }
LAB_01512571:
        FUN_001159b0();
        if (!bVar1) goto LAB_01512585;
        bVar1 = false;
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((cVar12 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      if (bVar1) goto LAB_01512155;
    }
  }
LAB_01512152:
  uVar13 = 0;
LAB_01512155:
  return uVar13 & 0xffffffff;
}




// ==================================================
// @0151a240 (1242 bytes) — math_loop

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  void *pvVar7;
  undefined8 arg1;
  longlong this;
  longlong *plVar8;
  bool bVar9;
  undefined1 local_d0 [16];
  undefined8 local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  
  if (*(longlong *)(this + 0x68) != 0) {
    local_40 = '\0';
    local_48 = 0;
    local_80 = 0xffffffff;
    plVar5 = (longlong *)FUN_010eca10();
    (**(code **)(*plVar5 + 0x18))();
    local_a8 = plVar5;
    if (*(longlong *)(this + 0x88) == 0) {
      local_38 = 0;
      lVar6 = this;
      do {
        lVar2 = *(longlong *)(lVar6 + 0x50);
        lVar1 = local_38;
        if (lVar2 == 0) goto LAB_0151a340;
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar7 != (void *)0x0) {
          lVar2 = *(longlong *)(lVar6 + 0x50);
          lVar6 = FUN_00e8b990();
          if (lVar6 != 0) {
            lVar2 = *(longlong *)(lVar2 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
          }
        }
        lVar6 = lVar2;
      } while (*(longlong *)(lVar6 + 0x88) == 0);
      lVar1 = *(longlong *)(lVar6 + 0x88);
    }
    else {
      lVar1 = *(longlong *)(this + 0x88);
    }
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
LAB_0151a340:
    while( true ) {
      local_38 = lVar1;
      pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      param_1 = param_2;
      cVar3 = FUN_01252960(param_2,arg1,&local_48,&local_b8);
      if (cVar3 == '\0') break;
      lVar1 = local_38;
      if (local_48 != 0) {
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01531ce0();
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01531d40();
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d50b00();
        FUN_01531da0();
        if (this != 0) {
          FUN_00d50b20();
        }
        if (local_38 != 0) {
          local_50 = '\0';
          local_58 = (longlong *)0x0;
          local_7c = 0xffffffff;
          cVar3 = '\0';
          plVar5 = (longlong *)0x0;
LAB_0151a4e4:
          do {
            plVar8 = plVar5;
LAB_0151a500:
            do {
              pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              param_1 = local_b0;
              cVar4 = FUN_01252960(local_b0,local_b8,&local_58,local_d0);
              if (cVar4 == '\0') {
                if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_0151a666;
              }
            } while (local_58 == (longlong *)0x0);
            if ((plVar8 != (longlong *)0x0) && (local_58 != plVar8)) {
              local_a0 = local_58;
              local_98 = '\0';
              cVar4 = (**(code **)(*plVar8 + 0x50))();
              if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar4 == '\0') goto LAB_0151a500;
            }
            cVar4 = local_50;
            plVar5 = local_58;
            if (local_58 != plVar8) {
              if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                FUN_00d50b00();
              }
              bVar9 = cVar3 != '\0';
              cVar3 = cVar4;
              if ((bVar9) && (plVar8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_0151a4e4;
            }
            if ((local_50 == '\0') || (cVar3 != '\0' || plVar8 == (longlong *)0x0))
            goto LAB_0151a500;
            FUN_00d50b00();
            cVar3 = '\x01';
            plVar5 = plVar8;
          } while( true );
        }
        plVar8 = (longlong *)0x0;
        cVar3 = '\0';
LAB_0151a666:
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_88 = '\0';
        local_90 = plVar8;
        FUN_01531df0();
        if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        lVar1 = local_38;
        if ((cVar3 != '\0') && (plVar8 != (longlong *)0x0)) {
          FUN_00d50b20();
          lVar1 = local_38;
        }
      }
    }
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if (local_a8 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @0150f7e0 (1229 bytes) — math_loop

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  longlong lVar6;
  longlong *this;
  longlong *plVar7;
  int iVar8;
  longlong local_80;
  char local_78;
  longlong *local_68;
  char local_60;
  longlong local_58;
  char local_50;
  int local_40;
  
  lVar3 = local_58;
  if (*(char *)((longlong)this + 0xa2) != '\0') {
    *(undefined1 *)((longlong)this + 0xa2) = 0;
    (**(code **)(*this + 0x380))();
  }
  FUN_0151a950();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_0150f849;
    }
  }
  else if (local_58 != 0) {
LAB_0150f849:
    local_50 = '\0';
    local_58 = 0;
    local_40 = -1;
    while( true ) {
      lVar2 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar3 + 0xc) <= local_40) break;
      lVar6 = *(longlong *)(lVar3 + 0x10);
      local_58 = *(longlong *)(lVar6 + 8 + lVar2 * 8);
      pvVar4 = _pthread_getspecific((pthread_key_t)lVar6);
      pVar5 = (pthread_key_t)lVar6;
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012eb770();
      if (local_68 == (longlong *)0x0) {
        cVar1 = '\0';
      }
      else {
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012eb770();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar1 = FUN_012f9ac0();
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar1 == '\0') {
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar1 = FUN_012f9ac0();
        if (cVar1 != '\0') {
          pvVar4 = _pthread_getspecific(pVar5);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012ed0d0();
        }
      }
      else {
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012ed0d0();
      }
    }
    FUN_000be170();
    FUN_00d50b20();
    param_1 = lVar3;
  }
  FUN_0151a240();
  FUN_0151a950();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_0150fc58;
    FUN_00d50b00();
  }
  else if (local_58 == 0) goto LAB_0150fc58;
  if (0 < *(int *)(local_58 + 0xc)) {
    iVar8 = 0;
    do {
      pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012f51f0();
      if (local_60 == '\0') {
        if (local_68 != (longlong *)0x0) {
          FUN_00d50b00();
          goto LAB_0150fbf0;
        }
      }
      else if (local_68 != (longlong *)0x0) {
LAB_0150fbf0:
        pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
        plVar7 = local_68;
        if ((pvVar4 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
          plVar7 = (longlong *)local_68[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar7 + 0x370))();
        FUN_00d50b20();
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(local_58 + 0xc));
  }
  FUN_000be170();
  FUN_00d50b20();
LAB_0150fc58:
  lVar3 = this[9];
  if (lVar3 != 0) {
    for (iVar8 = 0; iVar8 < *(int *)(lVar3 + 0xc); iVar8 = iVar8 + 1) {
      pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150f7e0();
    }
    FUN_0131c770();
  }
  return;
}




// ==================================================
// @015104e0 (1151 bytes) — math_loop

{
  char cVar1;
  longlong *plVar2;
  void *pvVar3;
  undefined8 uVar4;
  code *pcVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  longlong this;
  longlong *plVar8;
  undefined8 local_b0;
  code *local_a8;
  undefined *local_a0;
  code *local_98;
  longlong local_90;
  char local_88;
  undefined4 local_7c;
  longlong local_78;
  char local_70;
  longlong *local_40;
  char local_38;
  
  if ((*(longlong *)(this + 0x80) != 0) && (*(longlong *)(this + 0x78) != 0)) {
    if (*(longlong *)(this + 0x90) == 0) {
      FUN_00d64850();
      plVar2 = (longlong *)FUN_0151fdc0();
      (**(code **)(*plVar2 + 0x18))();
      lVar6 = *(longlong *)(this + 0x90);
      *(longlong **)(this + 0x90) = plVar2;
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      FUN_00d64910();
    }
    local_70 = '\0';
    local_78 = 0;
    local_7c = 0xffffffff;
    local_98 = DAT_025fee30;
    local_a0 = &DAT_025fee18;
    pcVar5 = DAT_025fee30;
    while( true ) {
      pvVar3 = _pthread_getspecific((pthread_key_t)pcVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar4 = FUN_00e7bdb0();
      pcVar5 = (code *)FUN_00e7bdb0();
      cVar1 = FUN_01252960(pcVar5,uVar4,&local_78,&local_b0);
      pVar7 = (pthread_key_t)pcVar5;
      if (cVar1 == '\0') break;
      if (local_78 != 0) {
        plVar2 = (longlong *)FUN_00e8fc40();
        FUN_00d4ff40();
        plVar2[10] = 0;
        plVar2[7] = 0;
        plVar2[8] = 0;
        *(undefined4 *)(plVar2 + 9) = 0;
        *plVar2 = (longlong)local_a0;
        *(undefined8 *)((longlong)plVar2 + 0x6c) = 0;
        plVar2[0xb] = 0;
        plVar2[0xc] = 0;
        *(undefined2 *)(plVar2 + 0xd) = 0;
        (*local_98)();
        pvVar3 = _pthread_getspecific(pVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b670();
        pvVar3 = _pthread_getspecific(pVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_90 = local_78;
        local_88 = '\0';
        FUN_0173b680();
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(pVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar3 = _pthread_getspecific(pVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01822e80();
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_0173b720();
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(pVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d50b00();
        FUN_015220b0();
        if (this != 0) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(pVar7);
        plVar8 = plVar2;
        if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          plVar8 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar8 + 0x1a0))();
        pvVar3 = _pthread_getspecific(pVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_38 = '\0';
        pcVar5 = local_a8;
        FUN_012502a0(local_a8,local_b0,0);
        FUN_00d50b20();
        local_40 = plVar2;
      }
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(this + 0xa1) = 1;
  return;
}




// ==================================================
// @001570d0 (1117 bytes) — math_loop

{
  bool bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  longlong lVar8;
  longlong lVar9;
  int unaff_ESI;
  longlong *this;
  longlong local_a8;
  char local_a0;
  longlong local_90;
  char local_88;
  int local_68;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  
  lVar9 = *this;
  if (*(int *)(lVar9 + 0xc) != 0) {
    if (unaff_ESI == -1) {
      return *(int *)(lVar9 + 0xc) + -1;
    }
    local_68 = -1;
    local_38 = 0;
    iVar3 = -1;
    bVar1 = false;
    while( true ) {
      lVar4 = (longlong)local_68;
      local_68 = local_68 + 1;
      if (*(int *)(lVar9 + 0xc) <= local_68) break;
      lVar8 = *(longlong *)(lVar9 + 0x10);
      lVar4 = *(longlong *)(lVar8 + 8 + lVar4 * 8);
      FUN_00517fa0();
      pVar7 = (pthread_key_t)lVar8;
      FUN_00b68420();
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == 0) {
        FUN_0051b590();
        pvVar6 = _pthread_getspecific(pVar7);
        lVar8 = 0;
        if ((pvVar6 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          lVar8 = *(longlong *)((ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8 + 0x20);
        }
        iVar2 = *(int *)(lVar8 + 0xb0);
      }
      else {
        iVar2 = FUN_00d45870();
        FUN_00d50b20();
      }
      if ((iVar3 < iVar2) && (iVar2 < unaff_ESI)) {
        FUN_0051b4f0();
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6a50();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if (local_48 != 0) {
          iVar3 = iVar2;
          if (lVar4 == local_38) {
            if ((!bVar1) && (lVar4 != 0)) {
              bVar1 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (lVar4 != 0) {
              FUN_00d50b00();
            }
            if ((bVar1) && (local_38 != 0)) {
              FUN_00d50b20();
              local_38 = lVar4;
              bVar1 = true;
            }
            else {
              local_38 = lVar4;
              bVar1 = true;
            }
          }
        }
      }
    }
    FUN_0015ee90();
    pVar7 = (pthread_key_t)lVar9;
    if (local_38 != 0) {
      FUN_0051b4f0();
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6a50();
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6160();
      FUN_0051b4f0();
      if (local_88 == '\0') {
        if (local_90 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_88 = '\0';
      }
      iVar3 = FUN_00d237a0();
      if (local_90 != 0) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if (!bVar1) {
        return iVar3 + 1;
      }
      FUN_00d50b20();
      return iVar3 + 1;
    }
  }
  return 0;
}




// ==================================================
// @0150bf50 (1109 bytes) — calculation

{
  longlong *plVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong *arg1;
  longlong this;
  longlong local_70;
  char local_68;
  longlong local_40;
  char local_38;
  
  if (*arg1 != 0) {
    if (*(longlong *)(this + 0x80) == 0) {
      plVar1 = (longlong *)FUN_00e8fc40();
      FUN_0124b580();
      (**(code **)(*plVar1 + 0x18))();
      FUN_0150ceb0();
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b6f0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    uVar3 = FUN_00e7bdb0();
    uVar4 = FUN_00e7bdb0();
    FUN_012502a0(uVar4,uVar3,1);
    pVar6 = (pthread_key_t)uVar4;
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(pVar6);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar1 = (longlong *)*arg1;
    pvVar2 = _pthread_getspecific(pVar6);
    if (pvVar2 != (void *)0x0) {
      plVar1 = (longlong *)*arg1;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        plVar1 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
    }
    (**(code **)(*plVar1 + 0x3f0))();
    FUN_0124ae40();
    if (*(longlong *)(this + 0x78) == 0) {
      plVar1 = (longlong *)FUN_00e8fc40();
      FUN_0151f500();
      (**(code **)(*plVar1 + 0x18))();
      FUN_0150d0b0();
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(pVar6);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar2 = _pthread_getspecific(pVar6);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b790();
    pvVar2 = _pthread_getspecific(pVar6);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    FUN_01822eb0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(pVar6);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar1 = (longlong *)*arg1;
    pvVar2 = _pthread_getspecific(pVar6);
    if (pvVar2 != (void *)0x0) {
      plVar1 = (longlong *)*arg1;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        plVar1 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
    }
    (**(code **)(*plVar1 + 0x3f0))();
    FUN_018232c0();
  }
  return;
}




// ==================================================
// @0151a950 (1105 bytes) — math_loop

{
  int iVar1;
  undefined8 *puVar2;
  void *pvVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined *puVar6;
  longlong lVar7;
  longlong arg1;
  undefined8 *this;
  int iVar8;
  longlong local_90;
  char local_88;
  longlong in_stack_ffffffffffffff98;
  char local_60;
  longlong local_40;
  char local_38;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar6 = &DAT_02572358;
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  lVar7 = *(longlong *)(arg1 + 0x50);
  if (lVar7 == 0) {
    if (*(longlong *)(arg1 + 0x58) != 0) {
      pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01505930();
      if (local_60 == '\0') {
        if (in_stack_ffffffffffffff98 == 0) goto LAB_0151ad9b;
        FUN_00d50b00();
      }
      else if (in_stack_ffffffffffffff98 == 0) goto LAB_0151ad9b;
      if (0 < *(int *)(in_stack_ffffffffffffff98 + 0xc)) {
        iVar1 = 0;
        do {
          pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012cb110();
          if (local_88 == '\0') {
            if (local_90 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_88 = '\0';
          }
          FUN_00d21140();
          if (local_90 != 0) {
            FUN_00d50b20();
          }
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)(in_stack_ffffffffffffff98 + 0xc));
      }
      FUN_01507540();
      FUN_00d50b20();
    }
  }
  else {
    pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
    if (pvVar3 != (void *)0x0) {
      lVar7 = *(longlong *)(arg1 + 0x50);
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
    }
    lVar7 = *(longlong *)(lVar7 + 0x48);
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50b00();
    iVar1 = FUN_00d23d20();
    FUN_00d50b20();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0151a950();
    if (arg1 != 0) {
      FUN_00d50b00();
      puVar5 = (undefined *)(longlong)iVar1;
      for (iVar8 = 0; iVar8 < *(int *)(arg1 + 0xc); iVar8 = iVar8 + 1) {
        pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6160();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        if (iVar1 < *(int *)(local_40 + 0xc)) {
          local_40 = *(longlong *)(*(longlong *)(local_40 + 0x10) + (longlong)puVar5 * 8);
          puVar6 = puVar5;
          if (local_40 != 0) {
            FUN_00d50b00();
          }
          local_38 = '\0';
          FUN_00d21140();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
      FUN_000be170();
      FUN_00d50b20();
    }
  }
LAB_0151ad9b:
  *this = puVar2;
  *(undefined1 *)(this + 1) = 1;
  return this;
}




// ==================================================
// @013234b0 (1078 bytes) — math_loop

{
  char cVar1;
  void *pvVar2;
  longlong lVar3;
  longlong *this;
  
  cVar1 = (**(code **)(*this + 0x368))();
  if ((cVar1 != '\0') && (0 < *(int *)(this[8] + 0xc))) {
    lVar3 = 0;
    do {
      pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013df660();
      lVar3 = lVar3 + 1;
      param_1 = (longlong)*(int *)(this[8] + 0xc);
    } while (lVar3 < param_1);
  }
  cVar1 = (**(code **)(*this + 0x368))();
  if ((cVar1 != '\0') && (0 < *(int *)(this[0x19] + 0xc))) {
    lVar3 = 0;
    do {
      pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bbd70();
      lVar3 = lVar3 + 1;
      param_1 = (longlong)*(int *)(this[0x19] + 0xc);
    } while (lVar3 < param_1);
  }
  cVar1 = (**(code **)(*this + 0x368))();
  if ((cVar1 != '\0') && (0 < *(int *)(this[0x1a] + 0xc))) {
    lVar3 = 0;
    do {
      pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bbd70();
      lVar3 = lVar3 + 1;
      param_1 = (longlong)*(int *)(this[0x1a] + 0xc);
    } while (lVar3 < param_1);
  }
  cVar1 = (**(code **)(*this + 0x368))();
  if ((cVar1 != '\0') && (0 < *(int *)(this[0x1d] + 0xc))) {
    lVar3 = 0;
    do {
      pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bbd70();
      lVar3 = lVar3 + 1;
      param_1 = (longlong)*(int *)(this[0x1d] + 0xc);
    } while (lVar3 < param_1);
  }
  cVar1 = (**(code **)(*this + 0x368))();
  if ((cVar1 != '\0') && (0 < *(int *)(this[0x20] + 0xc))) {
    lVar3 = 0;
    do {
      pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bbd70();
      lVar3 = lVar3 + 1;
      param_1 = (longlong)*(int *)(this[0x20] + 0xc);
    } while (lVar3 < param_1);
  }
  cVar1 = (**(code **)(*this + 0x368))();
  if ((cVar1 != '\0') && (0 < *(int *)(this[0x1c] + 0xc))) {
    lVar3 = 0;
    do {
      pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bbd70();
      lVar3 = lVar3 + 1;
      param_1 = (longlong)*(int *)(this[0x1c] + 0xc);
    } while (lVar3 < param_1);
  }
  *(undefined4 *)(this + 0x30) = 0xffffffff;
  if (this[0x32] != 0) {
    FUN_00e83070();
    this[0x32] = 0;
  }
  FUN_00e8b7e0();
  return;
}




// ==================================================
// @01519e20 (954 bytes) — math_loop

{
  longlong lVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined1 in_CL;
  ulonglong in_RDX;
  char *pcVar4;
  uint unaff_ESI;
  longlong *this;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong local_a0;
  char local_98 [8];
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  double local_78;
  double local_70;
  double local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  uint local_48;
  uint local_44;
  double local_40;
  char local_38 [8];
  
  local_78 = param_2;
  local_70 = param_1;
  local_58 = param_4;
  local_50 = param_3;
  FUN_00d23340();
  pcVar4 = local_38;
  if (local_98[0] != '\0') {
    pcVar4 = local_98;
  }
  local_38[0] = local_98[0];
  *pcVar4 = '\0';
  if ((local_98[0] != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] == '\0') && (local_a0 != 0)) {
    FUN_00d50b00();
  }
  local_60 = local_a0;
  FUN_00d23740();
  local_48 = unaff_ESI & 0xff;
  in_RDX = in_RDX & 0xff;
  local_44 = (uint)in_RDX;
  FUN_015189a0(local_70,local_78,in_CL,local_50);
  pvVar3 = _pthread_getspecific((pthread_key_t)in_RDX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_40 = (double)FUN_01653910();
  pvVar3 = _pthread_getspecific((pthread_key_t)in_RDX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01653920();
  FUN_00e7b500(local_40);
  lVar1 = *this;
  if (lVar1 != 0) {
    local_98[0] = '\0';
    local_80 = 0;
    local_88 = 0;
    local_90 = lVar1;
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar5 = 0;
      do {
        uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + lVar5 * 8);
        pvVar3 = _pthread_getspecific((pthread_key_t)in_RDX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_40 = (double)FUN_01653910();
        pvVar3 = _pthread_getspecific((pthread_key_t)in_RDX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar6 = (double)FUN_01655350();
        dVar7 = local_70;
        if (local_70 <= local_40) {
          dVar7 = local_40;
        }
        dVar8 = local_78;
        if (dVar6 <= local_78) {
          dVar8 = dVar6;
        }
        if (dVar7 < dVar8) {
          dVar6 = dVar8 - dVar7;
          local_68 = dVar8;
          local_40 = dVar7;
          FUN_00e7b500(dVar7);
          dVar7 = (double)FUN_00e7b600();
          if (NAN(dVar7)) {
            in_RDX = (ulonglong)local_44;
            FUN_015189a0(local_40,local_68,in_CL,local_50);
          }
          else {
            if (local_40 < dVar7) {
              in_RDX = (ulonglong)local_44;
              local_40 = dVar7;
              FUN_015189a0(in_RDX,dVar7,in_CL,local_50,uVar2,0);
              dVar7 = local_40;
            }
            if (dVar7 + dVar6 < local_68) {
              in_RDX = (ulonglong)local_44;
              FUN_015189a0(dVar7 + dVar6,local_48,in_CL,local_50);
            }
          }
        }
        lVar5 = lVar5 + 1;
        local_88 = CONCAT44(local_88._4_4_,(int)lVar5);
      } while ((int)lVar5 < *(int *)(lVar1 + 0xc));
    }
    FUN_00277f20();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @0151b0b0 (900 bytes) — math_loop

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  longlong this;
  longlong *plVar5;
  int iVar6;
  longlong *local_68;
  char local_60;
  longlong local_58;
  char local_50;
  int local_40;
  
  lVar3 = local_58;
  FUN_0151a950();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_0151b0f5;
    }
  }
  else if (local_58 != 0) {
LAB_0151b0f5:
    local_50 = '\0';
    local_58 = 0;
    local_40 = -1;
    while( true ) {
      lVar2 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar3 + 0xc) <= local_40) break;
      local_58 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + 8 + lVar2 * 8);
      pvVar4 = _pthread_getspecific((pthread_key_t)*(longlong *)(lVar3 + 0x10));
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5b20();
    }
    FUN_000be170();
    FUN_00d50b20();
    param_1 = lVar3;
  }
  lVar3 = FUN_00e8b990();
  if (lVar3 != 0) {
    FUN_00e8b990();
    FUN_00cb1f10();
    if (local_58 == 0) {
      bVar1 = 1;
    }
    else {
      FUN_00e8b990();
      FUN_00cb1f10();
      bVar1 = FUN_00db6490();
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      bVar1 = bVar1 ^ 1;
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (bVar1 == 0) goto LAB_0151b3d5;
  }
  FUN_0151a950();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_0151b3d5;
    FUN_00d50b00();
  }
  else if (local_58 == 0) goto LAB_0151b3d5;
  if (0 < *(int *)(local_58 + 0xc)) {
    iVar6 = 0;
    do {
      pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012f51f0();
      if (local_60 == '\0') {
        if (local_68 != (longlong *)0x0) {
          FUN_00d50b00();
          goto LAB_0151b370;
        }
      }
      else if (local_68 != (longlong *)0x0) {
LAB_0151b370:
        pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
        plVar5 = local_68;
        if ((pvVar4 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
          plVar5 = (longlong *)local_68[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar5 + 0x370))();
        FUN_00d50b20();
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(local_58 + 0xc));
  }
  FUN_000be170();
  FUN_00d50b20();
LAB_0151b3d5:
  lVar3 = *(longlong *)(this + 0x48);
  if (lVar3 != 0) {
    for (iVar6 = 0; iVar6 < *(int *)(lVar3 + 0xc); iVar6 = iVar6 + 1) {
      pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0151b0b0();
    }
    FUN_0131c770();
  }
  return;
}




// ==================================================
// @01514120 (852 bytes) — calculation

{
  void *pvVar1;
  ulonglong uVar2;
  pthread_key_t in_ECX;
  ulonglong arg1;
  int unaff_EDI;
  undefined8 uVar3;
  double dVar4;
  
  if (arg1 >> 0x20 == 0) {
    return arg1;
  }
  if (*param_3 == 0) {
    pvVar1 = _pthread_getspecific(in_ECX);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar4 = (double)FUN_016c98e0();
    dVar4 = dVar4 + param_1;
    if (unaff_EDI == 2) {
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e7bcc0();
      uVar2 = FUN_016cb9d0(dVar4,4);
      return uVar2;
    }
    if (unaff_EDI == 1) {
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar2 = FUN_016cb5f0(dVar4,0);
      return uVar2;
    }
    if (unaff_EDI == 0) {
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar2 = FUN_016cb690(dVar4,0);
      return uVar2;
    }
  }
  else {
    pvVar1 = _pthread_getspecific(in_ECX);
    if (param_4 == '\0') {
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e7c860();
      uVar3 = FUN_012f91f0();
    }
    else {
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e7c860();
      uVar3 = FUN_012f9260();
    }
    if (unaff_EDI == 2) {
      FUN_012f92d0();
      uVar2 = FUN_00e7cd00(uVar3);
      return uVar2;
    }
    if (unaff_EDI == 1) {
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar2 = FUN_016cb070(uVar3,0);
      return uVar2;
    }
    if (unaff_EDI == 0) {
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar2 = FUN_016cb1a0(uVar3,0);
      return uVar2;
    }
  }
  uVar2 = FUN_00e7bdb0();
  return uVar2;
}




// ==================================================
// @00154c40 (760 bytes) — math_loop

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  longlong this;
  pthread_key_t pVar5;
  longlong local_98;
  char local_90;
  longlong local_70;
  char local_68;
  longlong local_58;
  char local_50;
  int local_40;
  
  FUN_00155070();
  if (*(longlong *)(this + 0x88) != 0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    if (local_90 == '\0') {
      if (local_98 == 0) {
        return;
      }
      FUN_00d50b00();
    }
    else if (local_98 == 0) {
      return;
    }
    if (0 < *(int *)(local_98 + 0xc)) {
      pVar5 = 0;
      do {
        lVar2 = local_58;
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01265b80();
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
            goto LAB_00154df4;
          }
        }
        else if (local_58 != 0) {
LAB_00154df4:
          local_50 = '\0';
          local_58 = 0;
          local_40 = -1;
          while( true ) {
            lVar4 = (longlong)local_40;
            local_40 = local_40 + 1;
            if (*(int *)(lVar2 + 0xc) <= local_40) break;
            lVar1 = *(longlong *)(lVar2 + 0x10);
            local_58 = *(longlong *)(lVar1 + 8 + lVar4 * 8);
            pvVar3 = _pthread_getspecific((pthread_key_t)lVar1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef640();
            if (local_68 == '\0') {
              if (local_70 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            FUN_00155200();
            if (local_70 != 0) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
          }
          FUN_0015edf0();
          FUN_00d50b20();
        }
        pVar5 = pVar5 + 1;
      } while ((int)pVar5 < *(int *)(local_98 + 0xc));
    }
    FUN_001159b0();
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @00151f70 (715 bytes) — calculation

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  void *pvVar4;
  pthread_key_t in_ECX;
  longlong *this;
  bool bVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar16;
  float fVar17;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined4 uVar18;
  undefined1 auVar15 [16];
  float fVar19;
  undefined4 uVar20;
  longlong local_48;
  char local_40;
  longlong local_30;
  char local_28;
  
  fVar16 = (float)((ulonglong)param_2 >> 0x20);
  fVar12 = (float)param_2;
  fVar13 = fVar12;
  (**(code **)(*this + 0x4d8))();
  (**(code **)(*this + 0x958))();
  bVar5 = true;
  if (local_30 == 0) {
    (**(code **)(*this + 0x938))();
    bVar5 = local_48 != 0;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if (bVar5) {
    (**(code **)(*this + 0x948))();
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d790();
    if ((local_28 == '\0') && (local_30 != 0)) {
      FUN_00d50b00();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    dVar1 = *(double *)(local_30 + 0x38);
    fVar14 = *(float *)((longlong)this + 0x15c) * (float)dVar1;
    fVar17 = 0.0;
    uVar18 = 0;
    FUN_01e3f820();
    if (param_1 <= DAT_02390124) {
      if (param_1 < DAT_02390124) {
        fVar14 = fVar14 / _DAT_023942ac;
      }
    }
    else {
      fVar14 = fVar14 * _DAT_023942ac;
    }
    fVar6 = fVar17 / DAT_023941e0;
    fVar19 = fVar17;
    uVar20 = uVar18;
    if (fVar12 <= DAT_02390124) {
      fVar7 = fVar6;
      if (fVar12 < DAT_02390124) {
        if (DAT_02390d34 <= fVar6) {
          fVar7 = fVar6 + DAT_02390d00;
        }
        else {
          fVar7 = DAT_0239011c;
          fVar19 = 0.0;
          uVar20 = 0;
        }
      }
    }
    else {
      fVar7 = DAT_02390124;
      fVar19 = 0.0;
      uVar20 = 0;
      if (DAT_02390124 <= fVar6) {
        fVar7 = fVar6 + DAT_02390124;
        fVar19 = fVar17;
        uVar20 = uVar18;
      }
    }
    *(float *)((longlong)this + 0x15c) = fVar14 / (float)dVar1;
    FUN_00d50b20();
    auVar3._4_4_ = fVar19;
    auVar3._0_4_ = fVar7;
    auVar3._8_4_ = uVar20;
    auVar3._12_4_ = uVar20;
    auVar10._4_12_ = auVar3._4_12_;
    auVar10._0_4_ = fVar7 * DAT_023941e0;
    auVar2._4_4_ = fVar16;
    auVar2._0_4_ = fVar13;
    auVar2._8_4_ = in_XMM1_Dc;
    auVar2._12_4_ = in_XMM1_Dd;
    auVar15 = insertps(auVar2,auVar10,0x10);
    param_1 = *(float *)((longlong)this + 0x15c);
  }
  else {
    param_1 = param_1 * *(float *)((longlong)this + 0x15c);
    *(float *)((longlong)this + 0x15c) = param_1;
    auVar15._4_4_ = fVar16;
    auVar15._0_4_ = fVar13;
    auVar15._8_4_ = in_XMM1_Dc;
    auVar15._12_4_ = in_XMM1_Dd;
    auVar8._4_4_ = fVar16;
    auVar8._0_4_ = fVar16;
    auVar8._8_4_ = in_XMM1_Dd;
    auVar8._12_4_ = in_XMM1_Dd;
    auVar9._4_12_ = auVar8._4_12_;
    auVar9._0_4_ = fVar16 * fVar12;
    auVar15 = insertps(auVar15,auVar9,0x10);
  }
  auVar11._0_4_ = (float)(double)this[0x2d] * param_1 + DAT_02390110;
  auVar11._4_4_ = (int)((ulonglong)this[0x2d] >> 0x20);
  auVar11._8_8_ = 0;
  auVar15 = blendps(auVar11,auVar15,0xe);
  (**(code **)(*this + 0x4e8))(auVar15._0_8_);
  (**(code **)(*this + 0x988))();
  if (this[0x2a] != 0) {
    this[0x2a] = 0;
    FUN_00d50b20();
  }
  (**(code **)(*this + 0x620))();
  return;
}




// ==================================================
// @01512890 (666 bytes) — math_loop

{
  uint uVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *arg1;
  longlong this;
  longlong local_50;
  longlong local_40;
  char local_38;
  
  lVar4 = *arg1;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    lVar4 = *arg1;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  if (*(longlong *)(lVar4 + 0x88) == 0) {
    do {
      lVar3 = *(longlong *)(lVar4 + 0x50);
      if (lVar3 == 0) {
        return 0;
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        lVar3 = *(longlong *)(lVar4 + 0x50);
        lVar4 = FUN_00e8b990();
        if (lVar4 != 0) {
          lVar3 = *(longlong *)(lVar3 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
      }
      lVar4 = lVar3;
    } while (*(longlong *)(lVar3 + 0x88) == 0);
    lVar4 = *(longlong *)(lVar3 + 0x88);
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 0x88);
  }
  if (lVar4 == 0) {
    return 0;
  }
  FUN_00d50b00();
  pvVar2 = _pthread_getspecific(param_1);
  if ((pvVar2 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
    lVar4 = *(longlong *)(this + 0x88);
  }
  else {
    lVar4 = *(longlong *)(this + 0x88);
  }
  if (lVar4 == 0) {
    do {
      lVar4 = *(longlong *)(this + 0x50);
      if (lVar4 == 0) {
        local_50 = 0;
        goto LAB_01512a5a;
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        lVar4 = *(longlong *)(this + 0x50);
        lVar3 = FUN_00e8b990();
        if (lVar3 != 0) {
          lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
        }
      }
      this = lVar4;
    } while (*(longlong *)(lVar4 + 0x88) == 0);
    local_50 = *(longlong *)(lVar4 + 0x88);
  }
  else {
    local_50 = *(longlong *)(this + 0x88);
  }
  if (local_50 != 0) {
    FUN_00d50b00();
  }
LAB_01512a5a:
  uVar1 = FUN_00d51e10();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((char)uVar1 == '\0') {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_0150c7f0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return uVar1 ^ 1;
}




// ==================================================
// @00507310 (654 bytes) — calculation

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong this;
  double dVar5;
  undefined8 uVar6;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar1 = DAT_026f6fd0;
  if (*(longlong *)(this + 0x200) != 0) {
    if (DAT_026f6fd0 != 0) {
      FUN_00d50b00();
    }
    dVar5 = (double)FUN_00e7d6f0();
    uVar4 = (ulonglong)(dVar5 * DAT_023907c0);
    dVar5 = dVar5 * DAT_023907c0 - _DAT_023907c8;
    uVar6 = FUN_0071a120();
    if ((((local_38 == '\0') && (local_40 != 0)) && (uVar6 = FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != 0)) {
      uVar6 = FUN_00d50b20();
    }
    bVar3 = (byte)(((longlong)dVar5 & (longlong)uVar4 >> 0x3f | uVar4) / 3);
    local_80 = lVar1;
    local_78 = '\0';
    FUN_000175c0(uVar6,&local_80);
    lVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      local_38 = '\0';
      local_40 = lVar2;
      bVar3 = FUN_00c70bc0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((lVar2 != 0 & bVar3) == 0) {
      local_58 = '\0';
      local_60 = 0;
      FUN_01cef3b0();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01cef410();
      lVar1 = local_40;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = DAT_02709e60;
      if (lVar1 == 0) {
        if (DAT_02709e60 != 0) {
          FUN_00d50b00();
        }
        local_70 = lVar2;
        local_68 = '\x01';
        FUN_01d51a40();
        local_50 = local_40;
        local_48 = 0;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_48 = '\x01';
        FUN_01cef3b0();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  return;
}




// ==================================================
// @0150ec20 (649 bytes) — math_loop

{
  longlong lVar1;
  void *pvVar2;
  longlong *arg1;
  int iVar3;
  longlong local_40;
  char local_38;
  
  lVar1 = *arg1;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar3 = 0;
      do {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
            goto LAB_0150ed30;
          }
        }
        else if (local_40 != 0) {
LAB_0150ed30:
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152ebe0();
          if ((local_38 == '\0') && (local_40 != 0)) {
            FUN_00d50b00();
          }
          FUN_0150da40();
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01508a20();
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0128c470();
          FUN_0150d560();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(lVar1 + 0xc));
    }
    FUN_001159b0();
  }
  return;
}




// ==================================================
// @013231f0 (647 bytes) — calculation

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  void *pvVar7;
  longlong lVar8;
  pthread_key_t pVar9;
  longlong this;
  longlong local_30;
  char local_28;
  
  FUN_00e8b7a0();
  uVar4 = _UNK_0240d41c;
  uVar3 = _UNK_0240d418;
  uVar2 = _UNK_0240d414;
  *(undefined4 *)(this + 0x78) = _DAT_0240d410;
  *(undefined4 *)(this + 0x7c) = uVar2;
  *(undefined4 *)(this + 0x80) = uVar3;
  *(undefined4 *)(this + 0x84) = uVar4;
  *(undefined4 *)(this + 0x94) = 4;
  *(undefined1 *)(this + 0x1a9) = 0;
  *(undefined2 *)(this + 0x171) = 0x100;
  *(undefined1 *)(this + 0x130) = 1;
  *(undefined4 *)(this + 0x180) = 0xffffffff;
  *(undefined8 *)(this + 0x70) = 0x4628c00044960000;
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar9 = (pthread_key_t)&DAT_025f0698;
  *puVar5 = &DAT_025f0698;
  *(undefined4 *)(puVar5 + 7) = 0;
  *(undefined1 *)((longlong)puVar5 + 0x3c) = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  *(undefined4 *)(puVar5 + 10) = 0;
  (*DAT_025f06b0)();
  lVar1 = *(longlong *)(this + 0x138);
  *(undefined8 **)(this + 0x138) = puVar5;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  *(undefined4 *)(this + 0x21c) = 0;
  *(undefined8 *)(this + 0x8c) = 0x3ccccccd3f000000;
  FUN_016c0a70();
  lVar1 = *(longlong *)(this + 0x58);
  lVar8 = lVar1;
  if (lVar1 == local_30) goto LAB_01323327;
  lVar8 = local_30;
  if (local_28 == '\0') {
    if (local_30 == 0) {
      lVar8 = 0;
      goto LAB_013232e5;
    }
    FUN_00d50b00();
    lVar1 = *(longlong *)(this + 0x58);
    *(longlong *)(this + 0x58) = local_30;
  }
  else {
    local_28 = '\0';
LAB_013232e5:
    *(longlong *)(this + 0x58) = lVar8;
  }
  pVar9 = (pthread_key_t)lVar1;
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar8 = local_30;
  }
LAB_01323327:
  if ((local_28 != '\0') && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_0013dd30();
  (**(code **)(*plVar6 + 0x18))();
  lVar1 = *(longlong *)(this + 0x68);
  *(longlong **)(this + 0x68) = plVar6;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_0013dd30();
  (**(code **)(*plVar6 + 0x18))();
  lVar1 = *(longlong *)(this + 0x60);
  *(longlong **)(this + 0x60) = plVar6;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  pvVar7 = _pthread_getspecific(pVar9);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150cac0();
  pvVar7 = _pthread_getspecific(pVar9);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150cb90();
  *(undefined1 *)(this + 0x1aa) = 0;
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_025eec60;
  puVar5[7] = 0;
  puVar5[8] = 0;
  *(undefined4 *)(puVar5 + 9) = 0;
  (*DAT_025eec78)();
  lVar1 = *(longlong *)(this + 0x150);
  *(undefined8 **)(this + 0x150) = puVar5;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @00153100 (602 bytes) — calculation

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 *arg1;
  longlong this;
  longlong local_78;
  char local_70;
  undefined8 *local_68;
  char local_60;
  undefined8 *local_58;
  uint local_50;
  undefined8 *local_38;
  char local_30;
  
  FUN_00d61ea0();
  lVar2 = DAT_027e3c40;
  plVar1 = (longlong *)*arg1;
  if (DAT_027e3c40 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar1 + 0x590))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027e3c40;
  if (cVar4 != '\0') {
    plVar1 = (longlong *)*arg1;
    if (DAT_027e3c40 != 0) {
      FUN_00d50b00();
    }
    local_78 = lVar2;
    local_70 = '\x01';
    (**(code **)(*plVar1 + 0x578))(param_1,&local_78);
    puVar3 = local_58;
    if ((char)local_50 == '\0') {
      if (local_58 != (undefined8 *)0x0) {
        FUN_00d50b00();
        if (((char)local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_50 = local_50 & 0xffffff00;
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (puVar3 != (undefined8 *)0x0) {
      local_50 = 1;
      local_58 = &DAT_024c5048;
      if (this != 0) {
        FUN_00d50b00();
      }
      FUN_00d8cb40(param_1,&local_58);
      if (local_30 == '\0') {
        if (local_38 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      local_58 = &DAT_024c5048;
      if (this != 0) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*arg1 + 0x5e0))();
      local_68 = puVar3;
      local_60 = '\0';
      local_58 = local_38;
      local_50 = local_50 & 0xffffff00;
      FUN_00ca0840(param_1,&local_58);
      if (((char)local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (local_38 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @00504770 (580 bytes) — calculation

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong **pplVar5;
  longlong **pplVar6;
  int unaff_ESI;
  longlong this;
  undefined4 extraout_XMM0_Da;
  longlong *local_48;
  char local_40;
  char local_38 [8];
  
  *(int *)(this + 0x220) = unaff_ESI;
  pplVar6 = &local_48;
  FUN_01d98320();
  plVar1 = local_48;
  FUN_00275460();
  if (plVar1 == (longlong *)0x0) {
LAB_005047c9:
    pplVar6 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_005047c9;
  }
  plVar1 = *pplVar6;
  local_38[0] = *(char *)(pplVar6 + 1);
  pplVar5 = (longlong **)local_38;
  if (local_38[0] != '\0') {
    pplVar5 = pplVar6 + 1;
  }
  *(undefined1 *)pplVar5 = 0;
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  iVar3 = FUN_01b18580();
  if ((iVar3 == 0) || (-1 < unaff_ESI)) {
    if (unaff_ESI == 0) {
      FUN_01d9aea0();
      plVar1 = local_48;
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_01d9aea0();
        plVar1 = local_48;
        if ((((local_40 == '\0') && (local_48 != (longlong *)0x0)) &&
            (FUN_00d50b00(), local_40 != '\0')) && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01d9ade0();
        FUN_00d50130();
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      goto LAB_005048ee;
    }
  }
  else {
    FUN_00502230(extraout_XMM0_Da,0);
  }
  FUN_01d9aea0();
  plVar1 = local_48;
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_0006daf0();
    *puVar4 = &DAT_024dc470;
    puVar4[2] = &DAT_024dcdc0;
    puVar4[0x27] = 0;
    puVar4[0x28] = 0;
    puVar4[0x29] = 0;
    puVar4[0x2a] = 0;
    (*DAT_024dc488)();
    FUN_01d9ade0();
    if (puVar4 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_01d9aea0();
  FUN_002ba3c0();
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_005048ee:
  if (local_38[0] != '\0') {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @0150f500 (566 bytes) — math_loop

{
  longlong lVar1;
  void *pvVar2;
  longlong *this;
  longlong *plVar3;
  int iVar4;
  longlong *local_68;
  char local_60;
  longlong local_58;
  char local_50;
  
  if (*(char *)((longlong)this + 0xa1) != '\0') {
    *(undefined1 *)((longlong)this + 0xa1) = 0;
    (**(code **)(*this + 0x380))();
  }
  FUN_0151a950();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_0150f6b5;
    FUN_00d50b00();
  }
  else if (local_58 == 0) goto LAB_0150f6b5;
  if (0 < *(int *)(local_58 + 0xc)) {
    iVar4 = 0;
    do {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012f51f0();
      if (local_60 == '\0') {
        if (local_68 != (longlong *)0x0) {
          FUN_00d50b00();
          goto LAB_0150f640;
        }
      }
      else if (local_68 != (longlong *)0x0) {
LAB_0150f640:
        pvVar2 = _pthread_getspecific(param_1);
        plVar3 = local_68;
        if ((pvVar2 != (void *)0x0) && (lVar1 = FUN_00e8b990(), lVar1 != 0)) {
          plVar3 = (longlong *)local_68[(ulonglong)(*(uint *)(lVar1 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar3 + 0x370))();
        FUN_00d50b20();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(local_58 + 0xc));
  }
  FUN_000be170();
  FUN_00d50b20();
LAB_0150f6b5:
  lVar1 = this[9];
  if (lVar1 != 0) {
    for (iVar4 = 0; iVar4 < *(int *)(lVar1 + 0xc); iVar4 = iVar4 + 1) {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150f500();
    }
    FUN_0131c770();
  }
  return;
}




// ==================================================
// @01510b20 (529 bytes) — math_loop

{
  void *pvVar1;
  longlong lVar2;
  undefined8 uVar3;
  char *pcVar4;
  longlong arg1;
  longlong *this;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  uVar3 = param_1;
  do {
    lVar2 = arg1;
    if ((*(longlong *)(lVar2 + 0x80) != 0) && (*(longlong *)(lVar2 + 0x78) != 0)) {
      if ((*(char *)(lVar2 + 0xa1) == '\0') &&
         (pvVar1 = _pthread_getspecific((pthread_key_t)uVar3), pvVar1 == (void *)0x0)) {
        FUN_015104e0();
      }
      if (*(longlong *)(lVar2 + 0x90) != 0) {
        if (param_2 >> 0x20 == 0) {
          pvVar1 = _pthread_getspecific((pthread_key_t)uVar3);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01252670(param_1,0,param_3,param_4);
          pcVar4 = local_38;
          if (local_40[0] != '\0') {
            pcVar4 = local_40;
          }
          local_38[0] = local_40[0];
          *pcVar4 = '\0';
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          pvVar1 = _pthread_getspecific((pthread_key_t)uVar3);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012521f0(param_2,0,param_1,param_3);
          pcVar4 = local_38;
          if (local_40[0] != '\0') {
            pcVar4 = local_40;
          }
          local_38[0] = local_40[0];
          *pcVar4 = '\0';
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        *(undefined1 *)(this + 1) = 0;
        if ((local_38[0] == '\0') && (local_48 != 0)) {
          FUN_00d50b00();
        }
        *this = local_48;
        *(undefined1 *)(this + 1) = 1;
        return;
      }
    }
    arg1 = *(longlong *)(lVar2 + 0x50);
    if (arg1 == 0) {
      *(undefined1 *)(this + 1) = 0;
      *this = 0;
      return;
    }
    pvVar1 = _pthread_getspecific((pthread_key_t)uVar3);
    if (pvVar1 != (void *)0x0) {
      arg1 = *(longlong *)(lVar2 + 0x50);
      lVar2 = FUN_00e8b990();
      if (lVar2 != 0) {
        arg1 = *(longlong *)(arg1 + 0x20 + (ulonglong)(*(uint *)(lVar2 + 0x154) & 1) * 8);
      }
    }
  } while( true );
}




// ==================================================
// @0150c530 (504 bytes) — math_loop

{
  longlong lVar1;
  void *pvVar2;
  longlong arg1;
  longlong *this;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  longlong local_90;
  char local_88;
  longlong local_78;
  char local_70;
  
  lVar3 = *(longlong *)(arg1 + 0x40);
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  if (*(int *)(*(longlong *)(arg1 + 0x48) + 0xc) == 0) goto LAB_0150c6fb;
  FUN_0150d2b0();
  if (lVar3 == local_78) {
LAB_0150c5c4:
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
    bVar5 = lVar3 != 0;
    lVar3 = local_78;
    if (bVar5) {
      FUN_00d50b20();
      goto LAB_0150c5c4;
    }
  }
  else {
    bVar5 = lVar3 != 0;
    lVar3 = local_78;
    if (bVar5) {
      FUN_00d50b20();
    }
  }
  lVar1 = *(longlong *)(arg1 + 0x48);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar4 = 0;
      do {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0150c530();
        if (local_88 == '\0') {
          if (local_90 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_88 = '\0';
        }
        FUN_00d214d0();
        if (local_90 != 0) {
          FUN_00d50b20();
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_0131c770();
  }
LAB_0150c6fb:
  *this = lVar3;
  *(undefined1 *)(this + 1) = 1;
  return this;
}



