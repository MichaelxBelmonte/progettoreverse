// Function: FUN_01aefa80
// Address: 01aefa80
// Size: 4237 bytes
// Class: MUScalePitchSystem


/* WARNING: Removing unreachable block (ram,0x01af0a8e) */
/* WARNING: Removing unreachable block (ram,0x01af0a9a) */
/* WARNING: Removing unreachable block (ram,0x01af06a0) */
/* WARNING: Removing unreachable block (ram,0x01af06a9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aefa80(pthread_key_t param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  bool bVar3;
  pthread_key_t pVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *unaff_RDI;
  bool bVar13;
  float fVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined4 uVar19;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 extraout_XMM0_Qb_07;
  undefined1 in_XMM1 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 local_98 [16];
  undefined1 local_68 [16];
  longlong *local_58;
  char local_50;
  longlong *local_48;
  undefined8 extraout_XMM0_Qb;
  
  FUN_01ad3cb0();
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_58 == (longlong *)0x0) {
    return;
  }
  FUN_01e42030();
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_58 == (longlong *)0x0) {
    return;
  }
  FUN_01ad3320();
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d3abf0();
  FUN_01e466c0();
  iVar6 = FUN_01d3a5a0();
  if ((iVar6 != 5) && (iVar6 = FUN_01d3a5a0(), iVar6 != 4)) {
    return;
  }
  if (*(int *)((longlong)unaff_RDI + 0x284) == 0) {
    auVar22._8_8_ = 0;
    auVar22._0_8_ = DAT_023dccec;
  }
  else {
    auVar16._0_8_ = FUN_01e3f820();
    auVar16._8_8_ = extraout_XMM0_Qb;
    iVar6 = *(int *)((longlong)unaff_RDI + 0x284);
    if (iVar6 == 3) {
      auVar22 = in_XMM1;
      FUN_01e3f820();
      auVar20 = blendps(auVar22,_DAT_0241c700,0xd);
      iVar6 = *(int *)((longlong)unaff_RDI + 0x284);
      pVar4 = param_1;
      if (iVar6 == 1) goto LAB_01aefbd7;
LAB_01aefbd3:
      param_1 = pVar4;
      if (iVar6 == 0) goto LAB_01aefbd7;
      auVar22 = auVar20;
      FUN_01e3f820();
      if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
        FUN_01e3f820();
      }
      auVar43 = blendps(auVar22,_DAT_0241c710,0xd);
    }
    else {
      param_1 = 0x23dccec;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = DAT_023dccf4;
      pVar4 = 0x23dccec;
      if (iVar6 != 1) goto LAB_01aefbd3;
LAB_01aefbd7:
      auVar43._8_8_ = 0;
      auVar43._0_8_ = DAT_023dccf4;
    }
    auVar21._0_4_ = auVar20._0_4_ + (float)auVar16._0_8_ + auVar43._0_4_;
    auVar21._4_4_ = auVar20._4_4_ + (float)((ulonglong)auVar16._0_8_ >> 0x20) + auVar43._4_4_;
    auVar21._8_4_ = auVar20._8_4_ + (float)extraout_XMM0_Qb + auVar43._8_4_;
    auVar21._12_4_ = auVar20._12_4_ + (float)((ulonglong)extraout_XMM0_Qb >> 0x20) + auVar43._12_4_;
    auVar22 = blendps(auVar21,auVar16,2);
    blendps(in_XMM1,_DAT_0241c720,0xd);
  }
  cVar5 = FUN_00d05410();
  if ((cVar5 == '\0') || (*(char *)((longlong)unaff_RDI + 0x315) == '\0')) {
    bVar3 = false;
    plVar11 = (longlong *)0x0;
LAB_01aefcb1:
    iVar6 = *(int *)((longlong)unaff_RDI + 0x284);
    if (iVar6 == 1) goto LAB_01aefcc1;
LAB_01aefcbd:
    if (iVar6 == 0) goto LAB_01aefcc1;
    local_68._0_8_ = FUN_01e3f820();
    local_68._8_8_ = extraout_XMM0_Qb_00;
    if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
      auVar16 = auVar22;
      FUN_01e3f820();
      auVar23 = blendps(auVar16,_DAT_0241c700,0xd);
    }
    else {
      auVar23._8_8_ = 0;
      auVar23._0_8_ = DAT_023dccf4;
    }
    auVar24._0_4_ = auVar23._0_4_ + (float)local_68._0_8_;
    auVar24._4_4_ = auVar23._4_4_ + (float)((ulonglong)local_68._0_8_ >> 0x20);
    auVar24._8_4_ = auVar23._8_4_ + (float)extraout_XMM0_Qb_00;
    auVar24._12_4_ = auVar23._12_4_ + (float)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
    auVar25 = blendps(auVar24,local_68,2);
    blendps(auVar22,_DAT_0241c710,0xd);
  }
  else {
    FUN_01b270c0();
    plVar11 = local_58;
    if (local_58 != (longlong *)0x0) {
      bVar3 = true;
      if (local_50 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_01aefcb1;
    }
    bVar3 = false;
    iVar6 = *(int *)((longlong)unaff_RDI + 0x284);
    if (iVar6 != 1) goto LAB_01aefcbd;
LAB_01aefcc1:
    auVar25._8_8_ = 0;
    auVar25._0_8_ = DAT_023dccec;
  }
  cVar5 = FUN_00d05410();
  plVar12 = plVar11;
  bVar13 = bVar3;
  if (((cVar5 != '\0') && (local_58 != (longlong *)0x0)) &&
     (*(char *)((longlong)unaff_RDI + 0x315) != '\0')) {
    FUN_01b273a0();
    if (plVar11 == local_58) {
      if ((bVar3) || (plVar11 == (longlong *)0x0)) {
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        bVar13 = true;
        if (local_50 == '\0') {
          FUN_00d50b00();
        }
      }
    }
    else {
      plVar12 = local_58;
      if (local_50 == '\0') {
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar13 = true;
        if ((bVar3) && (plVar11 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        bVar13 = true;
        if ((bVar3) && (plVar11 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  if ((*(int *)((longlong)unaff_RDI + 0x284) == 1) || (*(int *)((longlong)unaff_RDI + 0x284) == 0))
  {
    auVar28._8_8_ = 0;
    auVar28._0_8_ = DAT_023dccec;
    fVar14 = (float)DAT_023dccf4;
  }
  else {
    local_68._0_8_ = FUN_01e3f820();
    local_68._8_8_ = extraout_XMM0_Qb_01;
    if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
      auVar22 = auVar25;
      FUN_01e3f820();
      auVar26 = blendps(auVar22,_DAT_0241c700,0xd);
    }
    else {
      auVar26._8_8_ = 0;
      auVar26._0_8_ = DAT_023dccf4;
    }
    auVar27._0_4_ = auVar26._0_4_ + (float)local_68._0_8_;
    auVar27._4_4_ = auVar26._4_4_ + (float)((ulonglong)local_68._0_8_ >> 0x20);
    auVar27._8_4_ = auVar26._8_4_ + (float)extraout_XMM0_Qb_01;
    auVar27._12_4_ = auVar26._12_4_ + (float)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
    auVar28 = blendps(auVar27,local_68,2);
    auVar22 = blendps(auVar25,_DAT_0241c710,0xd);
    fVar14 = auVar22._0_4_;
  }
  auVar29._4_12_ = auVar28._4_12_;
  auVar29._0_4_ = auVar28._0_4_ + fVar14 * DAT_0239011c;
  if ((fVar14 == 0.0) && (!NAN(fVar14))) {
    auVar29 = auVar28;
  }
  cVar5 = FUN_00d05410();
  plVar11 = plVar12;
  bVar3 = bVar13;
  if (((cVar5 != '\0') && (local_58 != (longlong *)0x0)) &&
     (*(char *)((longlong)unaff_RDI + 0x316) != '\0')) {
    FUN_01b273a0();
    if (plVar12 == local_58) {
      if ((bVar13) || (plVar12 == (longlong *)0x0)) {
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        bVar3 = true;
        if (local_50 == '\0') {
          FUN_00d50b00();
        }
      }
    }
    else {
      plVar11 = local_58;
      if (local_50 == '\0') {
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar3 = true;
        if ((bVar13) && (plVar12 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        bVar3 = true;
        if ((bVar13) && (plVar12 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  FUN_01ad3cb0();
  pvVar8 = _pthread_getspecific(param_1);
  plVar12 = local_58;
  if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
    plVar12 = (longlong *)local_58[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
  }
  (**(code **)(*unaff_RDI + 0x920))();
  (**(code **)(*plVar12 + 0x3a8))();
  FUN_01b05190();
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((*(int *)((longlong)unaff_RDI + 0x284) != 1) && (*(int *)((longlong)unaff_RDI + 0x284) != 0))
  {
    uVar15 = FUN_01e3f820();
    if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
      auVar22 = auVar29;
      FUN_01e3f820();
      auVar30 = blendps(auVar22,_DAT_0241c700,0xd);
    }
    else {
      auVar30._8_8_ = 0;
      auVar30._0_8_ = DAT_023dccf4;
    }
    auVar2._8_8_ = extraout_XMM0_Qb_02;
    auVar2._0_8_ = uVar15;
    auVar31._0_4_ = auVar30._0_4_ + (float)uVar15;
    auVar31._4_4_ = auVar30._4_4_ + (float)((ulonglong)uVar15 >> 0x20);
    auVar31._8_4_ = auVar30._8_4_ + (float)extraout_XMM0_Qb_02;
    auVar31._12_4_ = auVar30._12_4_ + (float)((ulonglong)extraout_XMM0_Qb_02 >> 0x20);
    blendps(auVar31,auVar2,2);
    blendps(auVar29,_DAT_0241c710,0xd);
  }
  uVar15 = FUN_00d05360();
  auVar40._8_4_ = (int)extraout_XMM0_Qb_03;
  auVar40._0_8_ = uVar15;
  uVar19 = (undefined4)((ulonglong)extraout_XMM0_Qb_03 >> 0x20);
  auVar40._12_4_ = uVar19;
  auVar32._8_4_ = (int)extraout_XMM0_Qb_03;
  auVar32._0_8_ = uVar15;
  auVar32._12_4_ = uVar19;
  cVar5 = FUN_00d05410();
  local_48 = plVar11;
  bVar13 = bVar3;
  if (((cVar5 != '\0') && (local_58 != (longlong *)0x0)) &&
     (*(char *)((longlong)unaff_RDI + 0x315) != '\0')) {
    FUN_01b27680();
    if (plVar11 == local_58) {
      if ((bVar3) || (plVar11 == (longlong *)0x0)) {
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        bVar13 = true;
        if (local_50 == '\0') {
          FUN_00d50b00();
        }
      }
    }
    else {
      local_48 = local_58;
      if (local_50 == '\0') {
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar13 = true;
        if ((bVar3) && (plVar11 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        bVar13 = true;
        if ((bVar3) && (plVar11 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  FUN_01ad3cb0();
  pvVar8 = _pthread_getspecific(param_1);
  plVar11 = local_58;
  if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
    plVar11 = (longlong *)local_58[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
  }
  (**(code **)(*unaff_RDI + 0x920))();
  (**(code **)(*plVar11 + 0x3a8))();
  FUN_01b05190();
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((*(int *)((longlong)unaff_RDI + 0x284) != 1) && (*(int *)((longlong)unaff_RDI + 0x284) != 0))
  {
    uVar15 = FUN_01e3f820();
    if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
      auVar22 = auVar32;
      FUN_01e3f820();
      auVar33 = blendps(auVar22,_DAT_0241c700,0xd);
    }
    else {
      auVar33._8_8_ = 0;
      auVar33._0_8_ = DAT_023dccf4;
    }
    auVar1._8_8_ = extraout_XMM0_Qb_04;
    auVar1._0_8_ = uVar15;
    auVar34._0_4_ = auVar33._0_4_ + (float)uVar15;
    auVar34._4_4_ = auVar33._4_4_ + (float)((ulonglong)uVar15 >> 0x20);
    auVar34._8_4_ = auVar33._8_4_ + (float)extraout_XMM0_Qb_04;
    auVar34._12_4_ = auVar33._12_4_ + (float)((ulonglong)extraout_XMM0_Qb_04 >> 0x20);
    blendps(auVar34,auVar1,2);
    blendps(auVar32,_DAT_0241c710,0xd);
  }
  uVar15 = FUN_00d05360();
  auVar35._8_4_ = (int)extraout_XMM0_Qb_05;
  auVar35._0_8_ = uVar15;
  auVar35._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_05 >> 0x20);
  cVar5 = FUN_00d05410();
  if (((cVar5 != '\0') && (local_58 != (longlong *)0x0)) &&
     (*(char *)((longlong)unaff_RDI + 0x316) != '\0')) {
    if (local_48 != (longlong *)0x0) {
      if (bVar13) {
        bVar13 = false;
        local_48 = (longlong *)0x0;
        FUN_00d50b20();
        goto LAB_01af03db;
      }
      bVar13 = false;
    }
    local_48 = (longlong *)0x0;
  }
LAB_01af03db:
  if ((*(int *)((longlong)unaff_RDI + 0x284) == 1) || (*(int *)((longlong)unaff_RDI + 0x284) == 0))
  {
    auVar38._8_8_ = 0;
    auVar38._0_8_ = DAT_023dccec;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = DAT_023dccf4;
  }
  else {
    local_98._0_8_ = FUN_01e3f820();
    local_98._8_8_ = extraout_XMM0_Qb_06;
    if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
      auVar22 = auVar35;
      FUN_01e3f820();
      auVar36 = blendps(auVar22,_DAT_0241c700,0xd);
    }
    else {
      auVar36._8_8_ = 0;
      auVar36._0_8_ = DAT_023dccf4;
    }
    auVar37._0_4_ = auVar36._0_4_ + (float)local_98._0_8_;
    auVar37._4_4_ = auVar36._4_4_ + (float)((ulonglong)local_98._0_8_ >> 0x20);
    auVar37._8_4_ = auVar36._8_4_ + (float)extraout_XMM0_Qb_06;
    auVar37._12_4_ = auVar36._12_4_ + (float)((ulonglong)extraout_XMM0_Qb_06 >> 0x20);
    auVar38 = blendps(auVar37,local_98,2);
    auVar17 = blendps(auVar35,_DAT_0241c710,0xd);
  }
  fVar14 = auVar17._0_4_;
  auVar18._4_12_ = auVar17._4_12_;
  auVar18._0_4_ = fVar14 * DAT_0239011c;
  if ((fVar14 == 0.0) && (!NAN(fVar14))) {
    auVar18 = auVar17;
  }
  auVar39._4_12_ = auVar38._4_12_;
  auVar39._0_4_ = auVar38._0_4_ + DAT_023942a8;
  if ((auVar18._0_4_ == 0.0) && (!NAN(auVar18._0_4_))) {
    auVar39 = auVar38;
  }
  cVar5 = FUN_00d05410();
  plVar11 = local_48;
  bVar3 = bVar13;
  if (((((cVar5 == '\0') || (uVar10 = FUN_01d3b590(), (uVar10 & 4) == 0)) ||
       (local_58 == (longlong *)0x0)) ||
      ((*(char *)((longlong)unaff_RDI + 0x315) == '\0' ||
       (*(char *)((longlong)unaff_RDI + 0x316) == '\0')))) ||
     (cVar5 = FUN_00d05410(), auVar39 = auVar40, cVar5 != '\0')) {
    iVar6 = *(int *)((longlong)unaff_RDI + 0x284);
    auVar40 = auVar39;
  }
  else {
    FUN_01b27c40();
    if (local_48 == local_58) {
      if ((bVar13) || (local_48 == (longlong *)0x0)) {
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        bVar3 = true;
        if (local_50 == '\0') {
          FUN_00d50b00();
        }
      }
    }
    else {
      plVar11 = local_58;
      if (local_50 == '\0') {
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar3 = true;
        if ((bVar13) && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        bVar3 = true;
        if ((bVar13) && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    iVar6 = *(int *)((longlong)unaff_RDI + 0x284);
  }
  if ((iVar6 != 1) && (iVar6 != 0)) {
    local_98._0_8_ = FUN_01e3f820();
    local_98._8_8_ = extraout_XMM0_Qb_07;
    if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
      auVar22 = auVar40;
      FUN_01e3f820();
      auVar41 = blendps(auVar22,_DAT_0241c700,0xd);
    }
    else {
      auVar41._8_8_ = 0;
      auVar41._0_8_ = DAT_023dccf4;
    }
    auVar42._0_4_ = auVar41._0_4_ + (float)local_98._0_8_;
    auVar42._4_4_ = auVar41._4_4_ + (float)((ulonglong)local_98._0_8_ >> 0x20);
    auVar42._8_4_ = auVar41._8_4_ + (float)extraout_XMM0_Qb_07;
    auVar42._12_4_ = auVar41._12_4_ + (float)((ulonglong)extraout_XMM0_Qb_07 >> 0x20);
    blendps(auVar42,local_98,2);
    blendps(auVar40,_DAT_0241c710,0xd);
  }
  cVar5 = FUN_00d05410();
  plVar12 = plVar11;
  bVar13 = bVar3;
  if ((((cVar5 != '\0') && (uVar10 = FUN_01d3b590(), (uVar10 & 4) != 0)) &&
      (local_58 != (longlong *)0x0)) &&
     (((*(char *)((longlong)unaff_RDI + 0x315) != '\0' &&
       (*(char *)((longlong)unaff_RDI + 0x316) != '\0')) && (cVar5 = FUN_00d05410(), cVar5 != '\0'))
     )) {
    FUN_01b27960();
    if (plVar11 == local_58) {
      if ((bVar3) || (plVar11 == (longlong *)0x0)) {
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        bVar13 = true;
        if (local_50 == '\0') {
          FUN_00d50b00();
        }
      }
    }
    else if (local_50 == '\0') {
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      bVar13 = true;
      plVar12 = local_58;
      if ((bVar3) && (plVar11 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      bVar13 = true;
      plVar12 = local_58;
      if ((bVar3) && (plVar11 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_01a1d6e0();
  if (local_50 == '\0') {
    if (local_58 == (longlong *)0x0) goto LAB_01af0a35;
    FUN_00d50b00();
  }
  else if (local_58 == (longlong *)0x0) goto LAB_01af0a35;
  FUN_01e3f820();
  cVar5 = FUN_00d05410();
  plVar11 = plVar12;
  bVar3 = bVar13;
  if (((cVar5 != '\0') && (uVar7 = FUN_01d3b590(), (~uVar7 & 6) == 0)) &&
     ((longlong *)local_58[0x83] != (longlong *)0x0)) {
    (**(code **)(*(longlong *)local_58[0x83] + 0x388))();
    if (plVar12 == local_58) {
      if ((!bVar13) && (plVar12 != (longlong *)0x0)) {
        bVar3 = true;
        if (local_50 != '\0') goto LAB_01af0921;
        FUN_00d50b00();
        bVar3 = true;
      }
    }
    else {
      plVar11 = local_58;
      if (local_50 != '\0') {
        bVar3 = true;
        if ((bVar13) && (plVar12 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01af0921;
      }
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      bVar3 = true;
      if ((bVar13) && (plVar12 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_01af0921:
  FUN_01e3f820();
  cVar5 = FUN_00d05410();
  plVar12 = plVar11;
  bVar13 = bVar3;
  if (((cVar5 != '\0') && (uVar7 = FUN_01d3b590(), (~uVar7 & 10) == 0)) &&
     ((longlong *)local_58[0x82] != (longlong *)0x0)) {
    (**(code **)(*(longlong *)local_58[0x82] + 0x388))();
    if (plVar11 == local_58) {
      if ((!bVar3) && (plVar11 != (longlong *)0x0)) {
        bVar13 = true;
        if (local_50 != '\0') goto LAB_01af0a2d;
        FUN_00d50b00();
        bVar13 = true;
      }
    }
    else {
      if (local_50 != '\0') {
        bVar13 = true;
        plVar12 = local_58;
        if ((bVar3) && (plVar11 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01af0a2d;
      }
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      bVar13 = true;
      plVar12 = local_58;
      if ((bVar3) && (plVar11 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_01af0a2d:
  FUN_00d50b20();
LAB_01af0a35:
  FUN_01e4ace0();
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar12 != local_58) {
    FUN_01e4ac90();
  }
  if ((bVar13) && (plVar12 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


