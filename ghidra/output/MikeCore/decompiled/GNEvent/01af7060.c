// Function: FUN_01af7060
// Address: 01af7060
// Size: 2466 bytes
// Class: GNEvent


/* WARNING: Removing unreachable block (ram,0x01af768f) */
/* WARNING: Removing unreachable block (ram,0x01af73c7) */
/* WARNING: Removing unreachable block (ram,0x01af73d3) */
/* WARNING: Removing unreachable block (ram,0x01af769b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01af7060(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar12;
  float fVar13;
  undefined8 extraout_XMM0_Qb;
  float fVar14;
  undefined1 auVar10 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar11 [16];
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined8 extraout_XMM0_Qb_07;
  undefined1 auVar15 [8];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  float fStack_f0;
  float fStack_ec;
  undefined1 local_e8 [16];
  longlong local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  undefined1 local_98 [8];
  undefined8 uStack_90;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  undefined1 local_68 [8];
  undefined8 uStack_60;
  undefined1 local_58 [8];
  undefined8 uStack_50;
  undefined1 local_48 [8];
  undefined8 uStack_40;
  longlong *local_38;
  char local_30;
  undefined8 extraout_XMM0_Qb_00;
  
  fVar7 = *(float *)((longlong)unaff_RDI + 0x1fc);
  auVar18 = ZEXT816(0);
  if ((fVar7 != 0.0) || (NAN(fVar7))) {
    *(float *)(unaff_RDI + 0x3f) = fVar7;
    *(undefined4 *)((longlong)unaff_RDI + 0x1fc) = 0;
    local_48 = (undefined1  [8])FUN_01adabe0();
    _local_58 = auVar18;
    FUN_01adad50();
    auVar18 = _local_58;
    uVar8 = FUN_00d052e0();
    if (*(int *)((longlong)unaff_RDI + 0x284) != 0) {
      _local_58 = auVar18;
      local_48 = (undefined1  [8])uVar8;
      uVar8 = FUN_01e3f820();
      fVar7 = (float)uVar8;
      fVar12 = (float)((ulonglong)uVar8 >> 0x20);
      fVar13 = (float)extraout_XMM0_Qb;
      fVar14 = (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
      iVar3 = *(int *)((longlong)unaff_RDI + 0x284);
      if (iVar3 == 3) {
        uStack_90._0_4_ = fVar13;
        local_98 = (undefined1  [8])uVar8;
        uStack_90._4_4_ = fVar14;
        _local_68 = auVar18;
        FUN_01e3f820();
        auVar17 = blendps(auVar18,_DAT_0241c700,0xd);
        iVar3 = *(int *)((longlong)unaff_RDI + 0x284);
        auVar18 = _local_68;
        fVar7 = (float)local_98._0_4_;
        fVar12 = (float)local_98._4_4_;
        fVar13 = (float)uStack_90;
        fVar14 = uStack_90._4_4_;
      }
      else {
        auVar17._8_8_ = 0;
        auVar17._0_8_ = DAT_023dccf4;
      }
      if ((iVar3 == 1) || (iVar3 == 0)) {
        auVar27._8_8_ = 0;
        auVar27._0_8_ = DAT_023dccf4;
        fVar23 = fVar7;
        fVar24 = fVar12;
        fVar25 = fVar13;
        fVar26 = fVar14;
      }
      else {
        local_98._4_4_ = fVar12;
        local_98._0_4_ = fVar7;
        uStack_90._0_4_ = fVar13;
        uStack_90._4_4_ = fVar14;
        auVar27 = _local_58;
        _local_68 = auVar18;
        FUN_01e3f820();
        if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
          FUN_01e3f820();
        }
        auVar27 = blendps(auVar27,_DAT_0241c710,0xd);
        auVar18 = _local_68;
        fVar23 = (float)local_98._0_4_;
        fVar24 = (float)local_98._4_4_;
        fVar25 = (float)uStack_90;
        fVar26 = uStack_90._4_4_;
      }
      auVar19._0_4_ = auVar17._0_4_ + fVar7 + auVar27._0_4_;
      auVar19._4_4_ = auVar17._4_4_ + fVar12 + auVar27._4_4_;
      auVar19._8_4_ = auVar17._8_4_ + fVar13 + auVar27._8_4_;
      auVar19._12_4_ = auVar17._12_4_ + fVar14 + auVar27._12_4_;
      auVar1._4_4_ = fVar24;
      auVar1._0_4_ = fVar23;
      auVar1._8_4_ = fVar25;
      auVar1._12_4_ = fVar26;
      blendps(auVar19,auVar1,2);
      blendps(auVar18,_DAT_0241c720,0xd);
    }
    FUN_00d052e0();
                    /* WARNING: Could not recover jumptable at 0x01af72e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_RDI + 0x618))();
    return;
  }
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_00152930();
  (**(code **)(*plVar4 + 0x18))();
  plVar6 = (longlong *)unaff_RDI[0x3d];
  if (plVar6 == plVar4) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x3d] = (longlong)plVar4;
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (*(int *)((longlong)unaff_RDI + 0x284) == 0) {
    uStack_50 = 0;
    local_58 = (undefined1  [8])DAT_023dccec;
    uStack_40 = 0;
    local_48 = (undefined1  [8])DAT_023dccf4;
  }
  else {
    auVar10._0_8_ = FUN_01e3f820();
    auVar10._8_8_ = extraout_XMM0_Qb_00;
    iVar3 = *(int *)((longlong)unaff_RDI + 0x284);
    _local_48 = auVar18;
    if (iVar3 == 3) {
      _local_68 = auVar10;
      FUN_01e3f820();
      auVar18 = blendps(auVar18,_DAT_0241c700,0xd);
      iVar3 = *(int *)((longlong)unaff_RDI + 0x284);
      local_58._0_4_ = auVar18._0_4_ + local_68._0_4_;
      local_58._4_4_ = auVar18._4_4_ + local_68._4_4_;
      uStack_50._0_4_ = auVar18._8_4_ + local_68._8_4_;
      uStack_50._4_4_ = auVar18._12_4_ + local_68._12_4_;
      auVar10 = _local_68;
      auVar18 = _local_48;
      if (iVar3 == 1) goto LAB_01af72fb;
LAB_01af72f7:
      _local_48 = auVar18;
      if (iVar3 == 0) goto LAB_01af72fb;
      _local_68 = auVar10;
      FUN_01e3f820();
      if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
        _local_98 = auVar18;
        FUN_01e3f820();
        auVar18 = _local_98;
      }
      auVar18 = blendps(auVar18,_DAT_0241c710,0xd);
      auVar10 = _local_68;
    }
    else {
      local_58._0_4_ = (float)DAT_023dccf4 + (float)auVar10._0_8_;
      local_58._4_4_ = (float)(DAT_023dccf4 >> 0x20) + (float)((ulonglong)auVar10._0_8_ >> 0x20);
      uStack_50._0_4_ = (float)extraout_XMM0_Qb_00 + 0.0;
      uStack_50._4_4_ = (float)((ulonglong)extraout_XMM0_Qb_00 >> 0x20) + 0.0;
      if (iVar3 != 1) goto LAB_01af72f7;
LAB_01af72fb:
      auVar18._8_8_ = 0;
      auVar18._0_8_ = DAT_023dccf4;
    }
    auVar20._0_4_ = (float)local_58._0_4_ + auVar18._0_4_;
    auVar20._4_4_ = (float)local_58._4_4_ + auVar18._4_4_;
    auVar20._8_4_ = (float)uStack_50 + auVar18._8_4_;
    auVar20._12_4_ = uStack_50._4_4_ + auVar18._12_4_;
    _local_58 = blendps(auVar20,auVar10,2);
    _local_48 = blendps(_local_48,_DAT_0241c720,0xd);
  }
  FUN_01adad50();
  auVar15 = local_48;
  uVar8 = uStack_40;
  local_48 = (undefined1  [8])FUN_00d052e0();
  uStack_40 = extraout_XMM0_Qb_01;
  uStack_50 = uVar8;
  local_58 = auVar15;
  FUN_01d4eaa0();
  FUN_01d52700();
  FUN_01e42030();
  plVar6 = local_38;
  if ((((local_30 == '\0') && (local_38 != (longlong *)0x0)) && (FUN_00d50b00(), local_30 != '\0'))
     && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_48 = (undefined1  [8])FUN_01e49120();
  uStack_40 = extraout_XMM0_Qb_02;
  FUN_01d52740();
  (**(code **)(*local_38 + 0x368))();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52740();
  local_88 = local_38;
  local_80 = 0;
  if (local_30 == '\0') {
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  local_80 = '\x01';
  auVar15 = local_58;
  uVar8 = uStack_50;
  (**(code **)(*plVar6 + 0x610))();
  if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52770();
  if (unaff_RSI != (undefined1 *)0x0) {
    *unaff_RSI = 1;
  }
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_00152930();
  (**(code **)(*plVar5 + 0x18))();
  plVar4 = (longlong *)unaff_RDI[0x3e];
  if (plVar4 == plVar5) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x3e] = (longlong)plVar5;
    if (plVar4 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (*(int *)((longlong)unaff_RDI + 0x284) == 0) {
    uStack_40 = 0;
    local_48 = (undefined1  [8])DAT_023dccec;
    uStack_50 = 0;
    local_58 = (undefined1  [8])DAT_023dccf4;
  }
  else {
    local_68 = (undefined1  [8])FUN_01e3f820();
    uStack_60 = extraout_XMM0_Qb_03;
    uStack_50 = uVar8;
    local_58 = auVar15;
    iVar3 = *(int *)((longlong)unaff_RDI + 0x284);
    if (iVar3 == 3) {
      FUN_01e3f820();
      uStack_40 = uVar8;
      local_48 = auVar15;
      _local_48 = blendps(_local_48,_DAT_0241c700,0xd);
      iVar3 = *(int *)((longlong)unaff_RDI + 0x284);
      if (iVar3 == 1) goto LAB_01af75cf;
LAB_01af75cb:
      if (iVar3 == 0) goto LAB_01af75cf;
      FUN_01e3f820();
      uStack_90 = uVar8;
      local_98 = auVar15;
      if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
        FUN_01e3f820();
      }
      auVar21 = blendps(_local_98,_DAT_0241c710,0xd);
    }
    else {
      uStack_40 = 0;
      local_48 = (undefined1  [8])DAT_023dccf4;
      if (iVar3 != 1) goto LAB_01af75cb;
LAB_01af75cf:
      auVar21._8_8_ = 0;
      auVar21._0_8_ = DAT_023dccf4;
    }
    auVar11._0_4_ = (float)local_48._0_4_ + local_68._0_4_ + auVar21._0_4_;
    auVar11._4_4_ = (float)local_48._4_4_ + local_68._4_4_ + auVar21._4_4_;
    auVar11._8_4_ = (float)uStack_40 + local_68._8_4_ + auVar21._8_4_;
    auVar11._12_4_ = uStack_40._4_4_ + local_68._12_4_ + auVar21._12_4_;
    _local_48 = blendps(auVar11,_local_68,2);
    _local_58 = blendps(_local_58,_DAT_0241c720,0xd);
  }
  FUN_01adad50();
  local_48 = (undefined1  [8])FUN_00d052e0();
  uStack_40 = extraout_XMM0_Qb_04;
  FUN_01d4eaa0();
  FUN_01d52700();
  FUN_01e42030();
  if (plVar6 == local_38) {
LAB_01af76ed:
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    plVar6 = local_38;
    if (local_30 == '\0') {
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
      goto LAB_01af76ed;
    }
    FUN_00d50b20();
  }
  local_48 = (undefined1  [8])FUN_01e49120();
  uStack_40 = extraout_XMM0_Qb_05;
  FUN_01d52740();
  (**(code **)(*local_38 + 0x368))();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52740();
  local_78 = local_38;
  local_70 = 0;
  if (local_30 == '\0') {
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  local_70 = '\x01';
  auVar15 = local_58;
  uVar8 = uStack_50;
  (**(code **)(*plVar6 + 0x610))();
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52770();
  if (unaff_RSI != (undefined1 *)0x0) {
    *unaff_RSI = 0;
  }
  *(undefined4 *)(unaff_RDI + 0x3f) = 0x3f800000;
  FUN_01f27fe0();
  local_a0 = 0;
  (**(code **)(unaff_RDI[0x2d] + 0x10))();
  uVar9 = FUN_00d50b00();
  local_a0 = '\x01';
  local_b8 = 0;
  local_b0 = '\0';
  local_a8 = unaff_RDI + 0x2d;
  FUN_01f47190(uVar9,&local_b8);
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
    (**(code **)(*local_a8 + 0x10))();
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_48 = (undefined1  [8])FUN_01adabe0();
  local_58 = auVar15;
  uStack_50 = uVar8;
  FUN_01adad50();
  local_48 = (undefined1  [8])FUN_00d052e0();
  uStack_40 = extraout_XMM0_Qb_06;
  if (*(int *)((longlong)unaff_RDI + 0x284) == 0) goto LAB_01af79d0;
  local_e8._0_8_ = local_58;
  local_e8._8_8_ = uStack_50;
  uVar8 = FUN_01e3f820();
  fStack_f0 = (float)extraout_XMM0_Qb_07;
  fStack_ec = (float)((ulonglong)extraout_XMM0_Qb_07 >> 0x20);
  uStack_90 = local_e8._8_8_;
  local_98 = (undefined1  [8])local_e8._0_8_;
  iVar3 = *(int *)((longlong)unaff_RDI + 0x284);
  if (iVar3 == 3) {
    FUN_01e3f820();
    uStack_60 = local_e8._8_8_;
    local_68 = (undefined1  [8])local_e8._0_8_;
    _local_68 = blendps(_local_68,_DAT_0241c700,0xd);
    iVar3 = *(int *)((longlong)unaff_RDI + 0x284);
    if (iVar3 == 1) goto LAB_01af7967;
LAB_01af7963:
    if (iVar3 == 0) goto LAB_01af7967;
    FUN_01e3f820();
    if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
      FUN_01e3f820();
    }
    auVar16 = blendps(local_e8,_DAT_0241c710,0xd);
  }
  else {
    uStack_60 = 0;
    local_68 = (undefined1  [8])DAT_023dccf4;
    if (iVar3 != 1) goto LAB_01af7963;
LAB_01af7967:
    auVar16._8_8_ = 0;
    auVar16._0_8_ = DAT_023dccf4;
  }
  auVar2._8_4_ = fStack_f0;
  auVar2._0_8_ = uVar8;
  auVar2._12_4_ = fStack_ec;
  auVar22._0_4_ = (float)local_68._0_4_ + (float)uVar8 + auVar16._0_4_;
  auVar22._4_4_ = (float)local_68._4_4_ + (float)((ulonglong)uVar8 >> 0x20) + auVar16._4_4_;
  auVar22._8_4_ = (float)uStack_60 + fStack_f0 + auVar16._8_4_;
  auVar22._12_4_ = uStack_60._4_4_ + fStack_ec + auVar16._12_4_;
  blendps(auVar22,auVar2,2);
  blendps(_local_98,_DAT_0241c720,0xd);
LAB_01af79d0:
  FUN_00d052e0();
  (**(code **)(*unaff_RDI + 0x618))();
  FUN_00d50b20();
  return;
}


