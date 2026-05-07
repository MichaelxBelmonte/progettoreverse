// Function: FUN_00bfcee0
// Address: 00bfcee0
// Size: 4757 bytes
// Class: GNOverloudParametricEQView
// String references:
//   "%I"
//   "%Ik"


/* WARNING: Removing unreachable block (ram,0x00bfdd8d) */
/* WARNING: Removing unreachable block (ram,0x00bfdd99) */
/* WARNING: Removing unreachable block (ram,0x00bfdb27) */
/* WARNING: Removing unreachable block (ram,0x00bfdb33) */
/* WARNING: Removing unreachable block (ram,0x00bfcf6c) */
/* WARNING: Removing unreachable block (ram,0x00bfcf78) */
/* WARNING: Removing unreachable block (ram,0x00bfe14d) */
/* WARNING: Removing unreachable block (ram,0x00bfe159) */
/* WARNING: Removing unreachable block (ram,0x00bfdc35) */
/* WARNING: Removing unreachable block (ram,0x00bfdc41) */
/* WARNING: Removing unreachable block (ram,0x00bfde64) */
/* WARNING: Removing unreachable block (ram,0x00bfde70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bfcee0(void)

{
  int iVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  undefined1 auVar6 [16];
  code *pcVar7;
  longlong *plVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  uint uVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float extraout_XMM0_Db;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float extraout_XMM0_Db_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float extraout_XMM0_Db_01;
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float extraout_XMM0_Db_02;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  undefined1 in_XMM1 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  longlong *local_1b8;
  char local_1b0;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined1 local_98 [8];
  float fStack_90;
  float fStack_8c;
  float local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  longlong *local_50;
  undefined4 local_48;
  int local_44;
  longlong *local_40;
  char local_38;
  undefined8 extraout_XMM0_Qb_04;
  
  (**(code **)(*unaff_RDI + 0x640))();
  plVar15 = local_40;
  FUN_01e3f820();
  (**(code **)(*plVar15 + 0x3f0))(8,0x11,0,1);
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar22 = FUN_00bfce40();
  auVar24 = in_XMM1;
  iVar9 = FUN_00e7d780();
  puVar10 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar10 = &DAT_025683c0;
  pcVar7 = DAT_025683d8;
  (*DAT_025683d8)();
  FUN_00c92170();
  uVar23 = FUN_00c92160();
  iVar1 = *(int *)(puVar10 + 3);
  uVar23 = FUN_00c8e340(uVar23,1);
  *(undefined4 *)(puVar10[2] + (longlong)iVar1) = 0x41a00000;
  iVar1 = *(int *)(puVar10 + 3);
  uVar23 = FUN_00c8e340(uVar23,1);
  *(undefined4 *)(puVar10[2] + (longlong)iVar1) = 0x42700000;
  iVar1 = *(int *)(puVar10 + 3);
  uVar23 = FUN_00c8e340(uVar23,1);
  *(undefined4 *)(puVar10[2] + (longlong)iVar1) = 0x42c80000;
  iVar1 = *(int *)(puVar10 + 3);
  uVar23 = FUN_00c8e340(uVar23,1);
  *(undefined4 *)(puVar10[2] + (longlong)iVar1) = 0x43480000;
  iVar1 = *(int *)(puVar10 + 3);
  uVar23 = FUN_00c8e340(uVar23,1);
  *(undefined4 *)(puVar10[2] + (longlong)iVar1) = 0x43fa0000;
  iVar1 = *(int *)(puVar10 + 3);
  uVar23 = FUN_00c8e340(uVar23,1);
  *(undefined4 *)(puVar10[2] + (longlong)iVar1) = 0x447a0000;
  iVar1 = *(int *)(puVar10 + 3);
  uVar23 = FUN_00c8e340(uVar23,1);
  *(undefined4 *)(puVar10[2] + (longlong)iVar1) = 0x44fa0000;
  iVar1 = *(int *)(puVar10 + 3);
  uVar23 = FUN_00c8e340(uVar23,1);
  *(undefined4 *)(puVar10[2] + (longlong)iVar1) = 0x459c4000;
  iVar1 = *(int *)(puVar10 + 3);
  uVar23 = FUN_00c8e340(uVar23,1);
  *(undefined4 *)(puVar10[2] + (longlong)iVar1) = 0x461c4000;
  iVar1 = *(int *)(puVar10 + 3);
  FUN_00c8e340(uVar23,1);
  *(undefined4 *)(puVar10[2] + (longlong)iVar1) = 0x469c4000;
  puVar11 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar11 = &DAT_025683c0;
  (*pcVar7)();
  FUN_00c92170();
  uVar23 = FUN_00c92160();
  iVar1 = *(int *)(puVar11 + 3);
  uVar23 = FUN_00c8e340(uVar23,1);
  *(undefined4 *)(puVar11[2] + (longlong)iVar1) = 0xc1f00000;
  iVar1 = *(int *)(puVar11 + 3);
  uVar23 = FUN_00c8e340(uVar23,1);
  *(undefined4 *)(puVar11[2] + (longlong)iVar1) = 0xc1900000;
  iVar1 = *(int *)(puVar11 + 3);
  uVar23 = FUN_00c8e340(uVar23,1);
  *(undefined4 *)(puVar11[2] + (longlong)iVar1) = 0xc1400000;
  iVar1 = *(int *)(puVar11 + 3);
  uVar23 = FUN_00c8e340(uVar23,1);
  *(undefined4 *)(puVar11[2] + (longlong)iVar1) = 0xc0c00000;
  iVar1 = *(int *)(puVar11 + 3);
  uVar23 = FUN_00c8e340(uVar23,1);
  *(undefined4 *)(puVar11[2] + (longlong)iVar1) = 0;
  iVar1 = *(int *)(puVar11 + 3);
  uVar23 = FUN_00c8e340(uVar23,1);
  *(undefined4 *)(puVar11[2] + (longlong)iVar1) = 0x40c00000;
  iVar1 = *(int *)(puVar11 + 3);
  uVar23 = FUN_00c8e340(uVar23,1);
  *(undefined4 *)(puVar11[2] + (longlong)iVar1) = 0x41400000;
  iVar1 = *(int *)(puVar11 + 3);
  uVar23 = FUN_00c8e340(uVar23,1);
  *(undefined4 *)(puVar11[2] + (longlong)iVar1) = 0x41900000;
  iVar1 = *(int *)(puVar11 + 3);
  FUN_00c8e340(uVar23,1);
  *(undefined4 *)(puVar11[2] + (longlong)iVar1) = 0x41f00000;
  FUN_01d48b40();
  (**(code **)(*unaff_RDI + 0x640))();
  (**(code **)(*local_50 + 0x3a8))();
  plVar15 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d488d0();
  if (plVar15 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d489d0();
  local_138 = (float)uVar22;
  fStack_134 = (float)((ulonglong)uVar22 >> 0x20);
  fStack_130 = (float)extraout_XMM0_Qb;
  fStack_12c = (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
  local_108 = in_XMM1._0_4_;
  fStack_104 = in_XMM1._4_4_;
  fStack_100 = in_XMM1._8_4_;
  fStack_fc = in_XMM1._12_4_;
  fStack_114 = fStack_134 + fStack_104;
  local_118 = local_138 + local_108;
  fStack_110 = fStack_130 + fStack_100;
  fStack_10c = fStack_12c + fStack_fc;
  if (3 < *(int *)(puVar10 + 3)) {
    local_98._4_4_ = fStack_134;
    local_98._0_4_ = fStack_134;
    fStack_90 = fStack_12c;
    fStack_8c = fStack_12c;
    lVar14 = 0;
    auVar49 = auVar24;
    do {
      FUN_00bfce40();
      auVar24 = auVar49;
      uVar22 = _logf();
      local_78 = auVar49._0_4_;
      fVar19 = (((float)uVar22 / DAT_0241c6f0 + _DAT_023d9584) * local_78) / _DAT_023d9588;
      if (lVar14 != 0) {
        iVar1 = *(int *)(puVar10 + 3);
        iVar13 = iVar1 + 3;
        if (-1 < iVar1) {
          iVar13 = iVar1;
        }
        if (lVar14 < (iVar13 >> 2) + -1) {
          auVar36._0_4_ = (uint)fVar19 & _DAT_023945e0;
          auVar36._4_4_ = (uint)((ulonglong)uVar22 >> 0x20) & _UNK_023945e4;
          auVar36._8_4_ = (uint)extraout_XMM0_Qb_00 & _UNK_023945e8;
          auVar36._12_4_ = (uint)((ulonglong)extraout_XMM0_Qb_00 >> 0x20) & _UNK_023945ec;
          auVar37._4_12_ = SUB1612(auVar36 | _DAT_023945f0,4);
          auVar37._0_4_ = SUB164(auVar36 | _DAT_023945f0,0) + fVar19;
          auVar49._0_12_ = ZEXT812(0);
          auVar49._12_4_ = 0;
          roundss(auVar49,auVar37,0xb);
          auVar24 = _local_98;
          (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
        }
      }
      lVar14 = lVar14 + 1;
      iVar1 = *(int *)(puVar10 + 3);
      iVar13 = iVar1 + 3;
      if (-1 < iVar1) {
        iVar13 = iVar1;
      }
      auVar49 = auVar24;
    } while (lVar14 < iVar13 >> 2);
  }
  auVar32._4_12_ = local_118._4_12_;
  fVar19 = local_138 + local_108 + DAT_02390d00;
  if (3 < *(int *)(puVar11 + 3)) {
    lVar14 = 0;
    do {
      fVar21 = *(float *)(puVar11[2] + lVar14 * 4);
      FUN_00bfce40();
      fVar20 = auVar24._4_4_ * DAT_0239011c;
      fVar21 = fVar21 / DAT_023b36a8;
      fVar35 = *(float *)(puVar11[2] + lVar14 * 4);
      if ((fVar35 != DAT_0239424c) || (NAN(fVar35) || NAN(DAT_0239424c))) {
        (**(code **)(*unaff_RDI + 0x640))();
        (**(code **)(*local_50 + 0x3a8))();
        plVar15 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01d488d0();
        if (plVar15 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        (**(code **)(*unaff_RDI + 0x640))();
        (**(code **)(*local_50 + 0x390))();
        plVar15 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01d488d0();
        if (plVar15 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (lVar14 != 0) {
        iVar1 = *(int *)(puVar11 + 3);
        iVar13 = iVar1 + 3;
        if (-1 < iVar1) {
          iVar13 = iVar1;
        }
        if (lVar14 < (iVar13 >> 2) + -1) {
          fVar21 = fVar21 * fVar20 + extraout_XMM0_Db + fVar20;
          auVar24 = ZEXT416((uint)fVar21 & _DAT_023945e0) | _DAT_023945f0;
          auVar25._4_12_ = auVar24._4_12_;
          auVar25._0_4_ = auVar24._0_4_ + fVar21;
          auVar38._0_12_ = ZEXT812(0);
          auVar38._12_4_ = 0;
          auVar24 = roundss(auVar38,auVar25,0xb);
          (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
        }
      }
      lVar14 = lVar14 + 1;
      iVar1 = *(int *)(puVar11 + 3);
      iVar13 = iVar1 + 3;
      if (-1 < iVar1) {
        iVar13 = iVar1;
      }
    } while (lVar14 < iVar13 >> 2);
  }
  (**(code **)(*unaff_RDI + 0x640))();
  (**(code **)(*local_50 + 0x390))();
  plVar15 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d488d0();
  if (plVar15 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d489d0();
  (**(code **)(*unaff_RDI + 0x640))();
  (**(code **)(*local_1b8 + 0x370))();
  FUN_01d44d80();
  plVar15 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d48a10();
  if (plVar15 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_1b0 != '\0') && (local_1b8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (3 < *(int *)(puVar10 + 3)) {
    lVar14 = 0;
    do {
      fVar21 = *(float *)(puVar10[2] + lVar14 * 4);
      if (DAT_02393944 <= fVar21) {
        local_44 = (int)fVar21 / 1000;
        local_48 = 1;
        local_50 = &DAT_024cc6f0;
        FUN_00d8cb40(&DAT_024cc6f0,&local_50);
        plVar15 = local_40;
        if (local_40 == (longlong *)0x0) goto LAB_00bfda60;
        bVar5 = true;
        if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_44 = (int)fVar21;
        local_48 = 1;
        local_50 = &DAT_024cc6f0;
        FUN_00d8cb40(&DAT_024cc6f0,&local_50);
        plVar15 = local_40;
        if (local_40 == (longlong *)0x0) {
LAB_00bfda60:
          bVar5 = false;
          plVar15 = local_40;
        }
        else {
          bVar5 = true;
          if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
             (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      FUN_00bfce40();
      auVar39._4_4_ = auVar24._4_4_;
      auVar39._0_4_ = auVar39._4_4_;
      auVar39._12_4_ = auVar24._12_4_;
      auVar39._8_4_ = auVar39._12_4_;
      auVar40._4_12_ = auVar39._4_12_;
      auVar40._0_4_ =
           auVar39._4_4_ * DAT_0239011c * DAT_0241e984 +
           extraout_XMM0_Db_00 + auVar39._4_4_ * DAT_0239011c + DAT_023b36b0 + DAT_02390d34;
      FUN_00bfce40();
      uVar22 = _logf();
      local_78 = auVar40._0_4_;
      fVar21 = (((float)uVar22 / DAT_0241c6f0 + _DAT_023d9584) * local_78) / _DAT_023d9588;
      FUN_01d48ad0();
      uVar23 = FUN_01d43d10();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      uStack_74 = (uint)((ulonglong)uVar22 >> 0x20);
      uStack_70 = (uint)extraout_XMM0_Qb_01;
      uStack_6c = (uint)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
      auVar26._0_4_ = (uint)fVar21 & _DAT_023945e0;
      auVar26._4_4_ = uStack_74 & _UNK_023945e4;
      auVar26._8_4_ = uStack_70 & _UNK_023945e8;
      auVar26._12_4_ = uStack_6c & _UNK_023945ec;
      auVar27._4_12_ = SUB1612(auVar26 | _DAT_023945f0,4);
      auVar27._0_4_ = SUB164(auVar26 | _DAT_023945f0,0) + fVar21;
      auVar24 = roundss(auVar27,auVar27,0xb);
      auVar4._8_8_ = extraout_XMM0_Qb_02;
      auVar4._0_8_ = uVar23;
      auVar41 = roundss(auVar4,auVar4,10);
      iVar1 = *(int *)(puVar10 + 3);
      iVar13 = iVar1 + 3;
      if (-1 < iVar1) {
        iVar13 = iVar1;
      }
      fVar21 = auVar24._0_4_;
      auVar28._4_12_ = auVar24._4_12_;
      fVar35 = auVar41._0_4_;
      if (lVar14 < (iVar13 >> 2) + -1) {
        if (lVar14 == 0) {
          auVar30._0_4_ = fVar21 + DAT_02390d34;
          auVar30._4_12_ = auVar28._4_12_;
          uVar22 = auVar30._0_8_;
        }
        else {
          auVar45._0_4_ = (uint)(fVar35 * DAT_0239011c) & _DAT_023945e0;
          auVar45._4_4_ = auVar41._4_4_ & _UNK_023945e4;
          auVar45._8_4_ = auVar41._8_4_ & _UNK_023945e8;
          auVar45._12_4_ = auVar41._12_4_ & _UNK_023945ec;
          auVar46._4_12_ = SUB1612(auVar45 | _DAT_023945f0,4);
          auVar46._0_4_ = SUB164(auVar45 | _DAT_023945f0,0) + fVar35 * DAT_0239011c;
          auVar42._0_12_ = ZEXT812(0);
          auVar42._12_4_ = 0;
          auVar41 = roundss(auVar42,auVar46,0xb);
          auVar28._0_4_ = fVar21 - auVar41._0_4_;
          uVar22 = auVar28._0_8_;
        }
      }
      else {
        auVar47._0_4_ = (uint)fVar35 & _DAT_023945e0;
        auVar47._4_4_ = auVar41._4_4_ & _UNK_023945e4;
        auVar47._8_4_ = auVar41._8_4_ & _UNK_023945e8;
        auVar47._12_4_ = auVar41._12_4_ & _UNK_023945ec;
        auVar48._4_12_ = SUB1612(auVar47 | _DAT_023945f0,4);
        auVar48._0_4_ = SUB164(auVar47 | _DAT_023945f0,0) + fVar35;
        auVar24 = roundss(ZEXT816(0),auVar48,0xb);
        auVar41._4_12_ = auVar24._4_12_;
        auVar41._0_4_ = auVar24._0_4_ + DAT_02390d34;
        auVar29._0_4_ = fVar21 - auVar41._0_4_;
        auVar29._4_12_ = auVar28._4_12_;
        uVar22 = auVar29._0_8_;
      }
      auVar2._4_8_ = auVar41._8_8_;
      auVar2._0_4_ = auVar39._4_4_;
      auVar24._0_8_ = auVar2._0_8_ << 0x20;
      auVar24._8_4_ = auVar39._12_4_;
      auVar24._12_4_ = auVar39._12_4_;
      (**(code **)(*(longlong *)*unaff_RSI + 0x3f0))(uVar22);
      if ((bVar5) && (plVar15 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar14 = lVar14 + 1;
      iVar1 = *(int *)(puVar10 + 3);
      iVar13 = iVar1 + 3;
      if (-1 < iVar1) {
        iVar13 = iVar1;
      }
    } while (lVar14 < iVar13 >> 2);
  }
  if (3 < *(int *)(puVar11 + 3)) {
    lVar14 = 0;
    do {
      fVar21 = *(float *)(puVar11[2] + lVar14 * 4);
      FUN_00bfce40();
      auVar43._4_4_ = auVar24._4_4_;
      auVar43._0_4_ = auVar43._4_4_;
      auVar43._12_4_ = auVar24._12_4_;
      auVar43._8_4_ = auVar43._12_4_;
      auVar24._4_12_ = auVar43._4_12_;
      auVar24._0_4_ = auVar43._4_4_ * DAT_0239011c;
      fVar21 = fVar21 / DAT_023b36a8;
      fVar35 = *(float *)(puVar11[2] + lVar14 * 4);
      if ((fVar35 != DAT_023b8b2c) || (NAN(fVar35) || NAN(DAT_023b8b2c))) {
        local_44 = (int)(float)((uint)fVar35 & _DAT_02390140);
        local_48 = 1;
        local_50 = &DAT_024cc6f0;
        FUN_00d8cb40(&DAT_024cc6f0,&local_50);
        plVar15 = local_40;
        if ((local_38 == '\0') &&
           (((local_40 != (longlong *)0x0 && (FUN_00d50b00(), local_38 != '\0')) &&
            (local_40 != (longlong *)0x0)))) {
          FUN_00d50b20();
        }
        FUN_01d48ad0();
        uVar22 = FUN_01d43d10();
        uStack_1a0 = (undefined4)extraout_XMM0_Qb_03;
        uStack_19c = (undefined4)((ulonglong)extraout_XMM0_Qb_03 >> 0x20);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        fVar21 = fVar21 * auVar24._0_4_ + extraout_XMM0_Db_01 + auVar24._0_4_;
        auVar24 = ZEXT416((uint)fVar21 & _DAT_023945e0) | _DAT_023945f0;
        auVar31._4_12_ = auVar24._4_12_;
        auVar31._0_4_ = auVar24._0_4_ + fVar21;
        auVar44._0_12_ = ZEXT812(0);
        auVar44._12_4_ = 0;
        auVar24 = roundss(auVar44,auVar31,0xb);
        auVar3._8_4_ = uStack_1a0;
        auVar3._0_8_ = uVar22;
        auVar3._12_4_ = uStack_19c;
        auVar49 = roundss(ZEXT816(0),auVar3,10);
        auVar32._0_4_ = fVar19 - (auVar49._0_4_ + DAT_02390d34);
        auVar6._12_4_ = 0;
        auVar6._0_12_ = auVar24._4_12_;
        auVar24 = auVar6 << 0x20;
        (**(code **)(*(longlong *)*unaff_RSI + 0x3f0))(auVar32._0_8_);
        if (plVar15 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      lVar14 = lVar14 + 1;
      iVar1 = *(int *)(puVar11 + 3);
      iVar13 = iVar1 + 3;
      if (-1 < iVar1) {
        iVar13 = iVar1;
      }
    } while (lVar14 < iVar13 >> 2);
  }
  if (unaff_RDI[0x27] != 0) {
    FUN_01d48370();
    (**(code **)(*(longlong *)*unaff_RSI + 0x390))();
    uVar17 = iVar9 - (iVar9 >> 0x1f) & 0xfffffffe;
    (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x620))(2,uVar17);
    plVar15 = local_40;
    if (((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
       ((FUN_00d50b00(), local_38 != '\0' && (local_40 != (longlong *)0x0)))) {
      FUN_00d50b20();
    }
    puVar12 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar12 = &DAT_02680400;
    *(undefined4 *)((longlong)puVar12 + 0xc) = 0;
    puVar12[6] = 0;
    puVar12[7] = 0;
    *(undefined8 *)((longlong)puVar12 + 0x39) = 0;
    *(undefined8 *)((longlong)puVar12 + 0x41) = 0;
    (*DAT_02680418)();
    if (1 < iVar9) {
      uVar18 = 1;
      if (1 < (int)uVar17) {
        uVar18 = (ulonglong)uVar17;
      }
      uVar16 = 0;
      do {
        lVar14 = plVar15[2];
        if (DAT_02390124 < *(float *)(lVar14 + uVar16 * 8)) {
          fVar19 = *(float *)(lVar14 + 4 + uVar16 * 8);
          FUN_00bfce40();
          auVar24 = in_XMM1;
          FUN_00bfce40();
          auVar33._0_8_ = _logf();
          auVar33._8_8_ = extraout_XMM0_Qb_04;
          auVar34._4_12_ = auVar33._4_12_;
          local_118 = in_XMM1._0_4_;
          auVar34._0_4_ =
               (((float)auVar33._0_8_ / DAT_0241c6f0 + _DAT_023d9584) * local_118) / _DAT_023d9588;
          fStack_134 = auVar24._4_4_;
          in_XMM1 = ZEXT416((uint)((fVar19 / DAT_023b36a8) * fStack_134 * DAT_0239011c +
                                  extraout_XMM0_Db_02 + fStack_134 * DAT_0239011c));
          FUN_01d38ba0(auVar34._0_8_);
        }
        uVar16 = uVar16 + 1;
      } while (uVar18 != uVar16);
    }
    (**(code **)(*unaff_RDI + 0x640))();
    (**(code **)(*local_50 + 0x390))();
    plVar8 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d48b40();
    (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
    FUN_01d48390();
    if (puVar12 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (plVar15 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (puVar11 == (undefined8 *)0x0) goto LAB_00bfe191;
  }
  FUN_00d50b20();
LAB_00bfe191:
  if (puVar10 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


