// Function: FUN_002ccab0
// Address: 002ccab0
// Size: 1796 bytes
// Class: GNScrollView
// String references:
//   "%d sec"
//   "%.1f kHz"
//   "%@, %@, %@"


void FUN_002ccab0(undefined8 param_1,double *param_2)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  undefined8 uVar5;
  pthread_key_t pVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  double *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar10;
  pthread_key_t pVar11;
  bool bVar12;
  bool bVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_90;
  undefined4 local_88;
  pthread_key_t local_84;
  double *local_80;
  longlong *local_78;
  uint local_70;
  double local_68;
  undefined8 local_60;
  int local_58;
  undefined4 uStack_54;
  char local_50;
  longlong local_48;
  char local_40;
  double local_38;
  
  dVar14 = *unaff_RSI;
  if ((dVar14 == 0.0) || (*(int *)((longlong)dVar14 + 0xc) == 0)) {
    if ((*param_2 == 0.0) || (*(int *)((longlong)*param_2 + 0xc) == 0)) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      return;
    }
    if (dVar14 != 0.0) goto LAB_002ccaee;
    uVar15 = 0;
    local_38 = 0.0;
    pVar11 = 0;
    bVar13 = false;
    iVar1 = 0;
    dVar14 = *param_2;
    if (dVar14 == 0.0) {
      uVar5 = 0;
      goto LAB_002ccef1;
    }
  }
  else {
LAB_002ccaee:
    local_70 = local_70 & 0xffffff00;
    local_78 = (longlong *)0x0;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_60._4_4_ = 0;
    pVar11 = 0;
    bVar13 = false;
    iVar1 = 0;
    local_38 = 0.0;
    local_80 = param_2;
    local_68 = dVar14;
    while( true ) {
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar9 = -local_60._4_4_;
        }
        else {
          iVar9 = (int)local_60 - local_60._4_4_;
          local_60 = CONCAT44(local_60._4_4_,iVar9);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar9 = 0;
        }
        local_60 = CONCAT44(iVar9,(int)local_60);
      }
      lVar2 = (longlong)(int)local_60;
      iVar9 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar9);
      if (*(int *)((longlong)local_68 + 0xc) <= iVar9) break;
      local_78 = *(longlong **)(*(longlong *)((longlong)local_68 + 0x10) + 8 + lVar2 * 8);
      if (iVar1 == 0) {
        iVar1 = FUN_00b86c20();
        bVar13 = true;
      }
      else {
        iVar9 = FUN_00b86c20();
        if (iVar1 != iVar9) {
          bVar13 = false;
        }
      }
      lVar2 = FUN_00b7a710();
      dVar14 = (double)FUN_00b7a6d0();
      pVar6 = pVar11;
      if (pVar11 != (int)((double)lVar2 / dVar14)) {
        pVar6 = 0xffffffff;
      }
      bVar12 = pVar11 == 0;
      pVar11 = pVar6;
      if (bVar12) {
        pVar11 = (int)((double)lVar2 / dVar14);
      }
      if ((local_38 != DAT_02390448) || (NAN(local_38) || NAN(DAT_02390448))) {
        dVar14 = (double)FUN_00b7a6d0();
        if ((local_38 != dVar14) || (NAN(local_38) || NAN(dVar14))) {
          local_38 = DAT_023b19a0;
        }
      }
      else {
        local_38 = (double)FUN_00b7a6d0();
      }
    }
    uVar15 = FUN_002d7370();
    dVar14 = *local_80;
    uVar5 = 0;
    if (dVar14 == 0.0) goto LAB_002ccef1;
  }
  local_70 = local_70 & 0xffffff00;
  local_78 = (longlong *)0x0;
  local_60 = 0xffffffff;
  local_58 = 0;
  local_60._4_4_ = 0;
  local_68 = dVar14;
  while( true ) {
    if (local_60._4_4_ != 0) {
      if (local_60._4_4_ < 1) {
        iVar9 = -local_60._4_4_;
      }
      else {
        iVar9 = (int)local_60 - local_60._4_4_;
        local_60 = CONCAT44(local_60._4_4_,iVar9);
        FUN_00d23690();
        local_58 = local_58 + local_60._4_4_;
        iVar9 = 0;
      }
      local_60 = CONCAT44(iVar9,(int)local_60);
    }
    lVar2 = (longlong)(int)local_60;
    iVar9 = (int)local_60 + 1;
    local_60 = CONCAT44(local_60._4_4_,iVar9);
    if (*(int *)((longlong)local_68 + 0xc) <= iVar9) break;
    lVar4 = *(longlong *)((longlong)local_68 + 0x10);
    plVar7 = *(longlong **)(lVar4 + 8 + lVar2 * 8);
    local_78 = plVar7;
    if (iVar1 == 0) {
      pvVar3 = _pthread_getspecific((pthread_key_t)lVar4);
      plVar10 = local_78;
      pVar6 = (pthread_key_t)lVar4;
      if ((pvVar3 != (void *)0x0) && (lVar2 = FUN_00e8b990(), plVar7 = plVar10, lVar2 != 0)) {
        plVar7 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
      }
      iVar1 = (**(code **)(*plVar7 + 0x380))();
      bVar13 = true;
    }
    else {
      pvVar3 = _pthread_getspecific((pthread_key_t)lVar4);
      plVar10 = local_78;
      pVar6 = (pthread_key_t)lVar4;
      if ((pvVar3 != (void *)0x0) && (lVar2 = FUN_00e8b990(), plVar7 = plVar10, lVar2 != 0)) {
        plVar7 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
      }
      iVar9 = (**(code **)(*plVar7 + 0x380))();
      if (iVar1 != iVar9) {
        bVar13 = false;
      }
    }
    plVar7 = local_78;
    pvVar3 = _pthread_getspecific(pVar6);
    plVar10 = local_78;
    if ((pvVar3 != (void *)0x0) && (lVar2 = FUN_00e8b990(), plVar7 = plVar10, lVar2 != 0)) {
      plVar7 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
    }
    lVar2 = (**(code **)(*plVar7 + 0x378))();
    plVar7 = local_78;
    pvVar3 = _pthread_getspecific(pVar6);
    plVar10 = local_78;
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), plVar7 = plVar10, lVar4 != 0)) {
      plVar7 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
    dVar14 = (double)(**(code **)(*plVar7 + 0x370))();
    plVar7 = local_78;
    pVar6 = 0xffffffff;
    if (pVar11 == (int)((double)lVar2 / dVar14)) {
      pVar6 = pVar11;
    }
    bVar12 = pVar11 == 0;
    pVar11 = pVar6;
    if (bVar12) {
      pVar11 = (int)((double)lVar2 / dVar14);
    }
    if ((local_38 != DAT_02390448) || (NAN(local_38) || NAN(DAT_02390448))) {
      pvVar3 = _pthread_getspecific(pVar6);
      plVar10 = local_78;
      if ((pvVar3 != (void *)0x0) && (lVar2 = FUN_00e8b990(), plVar7 = plVar10, lVar2 != 0)) {
        plVar7 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
      }
      dVar14 = (double)(**(code **)(*plVar7 + 0x370))();
      if ((local_38 != dVar14) || (NAN(local_38) || NAN(dVar14))) {
        local_38 = DAT_023b19a0;
      }
    }
    else {
      pvVar3 = _pthread_getspecific(pVar6);
      plVar10 = local_78;
      if ((pvVar3 != (void *)0x0) && (lVar2 = FUN_00e8b990(), plVar7 = plVar10, lVar2 != 0)) {
        plVar7 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
      }
      local_38 = (double)(**(code **)(*plVar7 + 0x370))();
    }
  }
  uVar5 = FUN_002d7290();
  uVar15 = extraout_XMM0_Qa;
LAB_002ccef1:
  plVar7 = DAT_02726ce0;
  if (bVar13) {
    uVar5 = FUN_00ae6870();
    plVar7 = local_78;
    uVar15 = extraout_XMM0_Qa_01;
    if (local_78 == (longlong *)0x0) {
      plVar7 = (longlong *)0x0;
      local_80 = (double *)0x0;
    }
    else {
      local_80 = (double *)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      if ((char)local_70 == '\0') {
        uVar15 = FUN_00d50b00();
        if (((char)local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          uVar15 = FUN_00d50b20();
        }
      }
    }
  }
  else {
    if (DAT_02726ce0 != (longlong *)0x0) {
      uVar5 = FUN_00d50b00();
      uVar15 = extraout_XMM0_Qa_00;
    }
    local_80 = (double *)CONCAT71((int7)((ulonglong)uVar5 >> 8),plVar7 != (longlong *)0x0);
  }
  plVar10 = DAT_02726ce0;
  if ((int)pVar11 < 1) {
    if (DAT_02726ce0 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    bVar13 = plVar10 != (longlong *)0x0;
    plVar8 = DAT_02726ce0;
  }
  else {
    local_88 = 1;
    local_90 = &DAT_024cc6f0;
    local_84 = pVar11;
    FUN_00d8cb40(uVar15,&local_90);
    plVar10 = local_78;
    plVar8 = DAT_02726ce0;
    if (local_78 == (longlong *)0x0) {
      plVar10 = (longlong *)0x0;
      bVar13 = false;
    }
    else {
      bVar13 = true;
      if ((char)local_70 == '\0') {
        FUN_00d50b00();
        plVar8 = DAT_02726ce0;
        if (((char)local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
          plVar8 = DAT_02726ce0;
        }
      }
    }
  }
  DAT_02726ce0 = plVar8;
  if (local_38 <= 0.0) {
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    bVar12 = plVar8 != (longlong *)0x0;
  }
  else {
    local_68 = local_38 / DAT_023907c0;
    local_70 = 1;
    local_78 = (longlong *)&DAT_024de5e0;
    FUN_00d8cb40(0,&local_78);
    plVar8 = local_90;
    if (local_90 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
      bVar12 = false;
    }
    else {
      bVar12 = true;
      if ((char)local_88 == '\0') {
        FUN_00d50b00();
        if (((char)local_88 != '\0') && (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  local_a8 = plVar8;
  local_a0 = plVar10;
  local_90 = plVar7;
  uVar15 = FUN_002bd7b0(&local_a0,&local_a8,3);
  FUN_00d8cb40(uVar15,&local_78);
  local_78 = (longlong *)&DAT_025df260;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  local_78 = (longlong *)&DAT_0253d630;
  if ((local_50 != '\0') && (CONCAT44(uStack_54,local_58) != 0)) {
    FUN_00d50b20();
  }
  local_78 = &DAT_024c5048;
  if (((char)local_60 != '\0') && (local_68 != 0.0)) {
    FUN_00d50b20();
  }
  if ((bVar12) && (plVar8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar13) && (plVar10 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_80 != '\0') && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


