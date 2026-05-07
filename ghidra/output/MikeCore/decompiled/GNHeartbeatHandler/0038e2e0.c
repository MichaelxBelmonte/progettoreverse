// Function: FUN_0038e2e0
// Address: 0038e2e0
// Size: 2741 bytes
// Class: GNHeartbeatHandler


/* WARNING: Removing unreachable block (ram,0x0038e392) */
/* WARNING: Removing unreachable block (ram,0x0038e39e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0038e2e0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 uVar6;
  char cVar7;
  float *pfVar8;
  float *pfVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  float fVar12;
  undefined8 uVar13;
  double dVar14;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 extraout_XMM0_Qb_04;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 extraout_XMM0_Qb_05;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  undefined1 auVar24 [8];
  undefined8 in_XMM1_Qb;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  longlong *local_158;
  char local_150;
  float local_148;
  float fStack_144;
  longlong local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong *local_f8;
  char local_f0;
  undefined1 local_e8 [8];
  undefined8 uStack_e0;
  undefined1 local_d8 [12];
  float fStack_cc;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  undefined1 local_88 [8];
  undefined8 uStack_80;
  longlong *local_78;
  char local_70;
  undefined1 local_68 [8];
  undefined8 uStack_60;
  longlong *local_58;
  float local_4c;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0x640))();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      local_48 = (longlong *)0x0;
    }
    else {
      local_48 = local_40;
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_48 = local_40;
  }
  local_68 = (undefined1  [8])FUN_01e3f820();
  uStack_60 = extraout_XMM0_Qb;
  uStack_80 = in_XMM1_Qb;
  local_88 = (undefined1  [8])param_2;
  uVar6 = (**(code **)(*unaff_RDI + 0x9a0))();
  auVar24 = local_88;
  (**(code **)(*local_48 + 0x3f0))(8,0x11,0,uVar6);
  uVar13 = (**(code **)(*unaff_RDI + 0xaf8))();
  auVar25 = ZEXT416((uint)DAT_02391094);
  local_4c = DAT_02391094;
  FUN_01cfc9f0();
  local_58 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x3e] == 0) {
    FUN_00209700();
    (**(code **)(*local_48 + 0x360))();
    cVar7 = FUN_00e85ea0();
    plVar10 = local_48;
    if (cVar7 == '\0') {
      plVar10 = DAT_02802688;
    }
    if (plVar10 != (longlong *)0x0) {
      local_128 = *unaff_RSI;
      local_120 = '\0';
      FUN_01e3f820();
      (**(code **)(*local_48 + 0x6a0))(0,&local_128,auVar25._0_4_);
      plVar10 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_120 != '\0') && (local_128 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d48370();
      local_118 = plVar10;
      local_110 = '\0';
      (**(code **)(*(longlong *)*unaff_RSI + 0x398))();
      if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      auVar16._0_4_ = (float)local_68._0_4_ + (float)local_88._0_4_;
      auVar16._4_4_ = (float)local_68._4_4_ + (float)local_88._4_4_;
      auVar16._8_4_ = (float)uStack_60 + (float)uStack_80;
      auVar16._12_4_ = uStack_60._4_4_ + uStack_80._4_4_;
      auVar25._8_8_ = extraout_XMM0_Qb_00;
      auVar25._0_8_ = uVar13;
      blendps(auVar16,auVar25,0xd);
      (**(code **)(*(longlong *)*unaff_RSI + 0x390))();
      local_108 = local_58;
      local_100 = '\0';
      FUN_01d488d0();
      if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      auVar25 = _local_88;
      (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))();
      FUN_01d48390();
      if (plVar10 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
  }
  dVar14 = (double)FUN_00e7d6f0();
  uVar1 = *(uint *)(unaff_RDI[0x3c] + 0x18);
  if ((int)uVar1 < 0x10) {
    *(undefined4 *)(unaff_RDI + 0x3d) = 0;
    if (unaff_RDI[0x3e] != 0) goto LAB_0038e5cb;
  }
  else {
    pfVar9 = *(float **)(unaff_RDI[0x3c] + 0x10);
    if (*(double *)(pfVar9 + 2) < dVar14) {
      lVar11 = 0;
      do {
        pfVar8 = pfVar9;
        pfVar9 = pfVar8;
        if ((ulonglong)(uVar1 >> 4) - 1 == lVar11) goto LAB_0038e480;
        lVar11 = lVar11 + 1;
        pfVar9 = pfVar8 + 4;
      } while (*(double *)(pfVar8 + 6) < dVar14);
      if ((int)lVar11 != 0) {
        pfVar9 = pfVar8;
      }
    }
LAB_0038e480:
    fVar12 = *pfVar9;
    auVar25 = ZEXT416((uint)fVar12);
    *(float *)(unaff_RDI + 0x3d) = fVar12;
    if (unaff_RDI[0x3e] == 0) {
      if (0.0 < fVar12) {
        _local_68 = auVar25;
        local_88 = (undefined1  [8])(**(code **)(*unaff_RDI + 0xb20))();
        uStack_80 = extraout_XMM0_Qb_01;
        _local_e8 = auVar25;
        fVar12 = (float)(**(code **)(*unaff_RDI + 0xb20))();
        local_f8 = local_58;
        local_f0 = '\0';
        _local_d8 = auVar25;
        FUN_01d488d0();
        if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        fVar23 = (float)local_e8._0_4_ * DAT_0239011c + (float)local_88._0_4_;
        auVar15._4_12_ = local_d8._4_12_;
        fVar12 = local_d8._0_4_ * DAT_0239011c + fVar12;
        if (fVar23 <= fVar12) {
          fVar12 = fVar23;
        }
        auVar15._0_4_ = fVar12;
        auVar16 = insertps(auVar15,ZEXT416((uint)(DAT_02390124 + (float)local_88._4_4_ +
                                                 DAT_02390d34)),0x10);
        auVar2._4_4_ = (float)local_88._4_4_ + (float)local_e8._4_4_;
        auVar2._0_4_ = (((float)local_88._4_4_ + (float)local_e8._4_4_ + DAT_02390d00) -
                       (float)local_88._4_4_) + DAT_02390d00 + DAT_023b1614;
        auVar2._8_4_ = uStack_80._4_4_ + uStack_e0._4_4_;
        auVar2._12_4_ = uStack_80._4_4_ + uStack_e0._4_4_;
        auVar25 = insertps(_local_68,auVar2,0x10);
        (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))(auVar16._0_8_);
      }
    }
    else {
LAB_0038e5cb:
      FUN_00d50b00();
      FUN_00d50b20();
    }
  }
  local_68 = (undefined1  [8])FUN_01e3f820();
  uStack_60 = extraout_XMM0_Qb_02;
  _local_88 = auVar25;
  local_e8 = (undefined1  [8])FUN_01e3f820();
  uStack_e0 = extraout_XMM0_Qb_03;
  _local_d8 = auVar25;
  cVar7 = (**(code **)(*unaff_RDI + 0x9a0))();
  fStack_144 = (float)((ulonglong)auVar24 >> 0x20);
  fVar12 = (((float)local_68._4_4_ + (float)local_88._4_4_ + DAT_02390d00) - fStack_144) *
           DAT_0239011c;
  auVar17._0_4_ = _DAT_023945e0 & (uint)fVar12;
  auVar17._4_4_ = _UNK_023945e4 & (uint)((float)local_68._4_4_ + (float)local_88._4_4_);
  auVar17._8_4_ = _UNK_023945e8 & (uint)(uStack_60._4_4_ + uStack_80._4_4_);
  auVar17._12_4_ = _UNK_023945ec & (uint)(uStack_60._4_4_ + uStack_80._4_4_);
  auVar18._4_12_ = SUB1612(auVar17 | _DAT_023945f0,4);
  auVar18._0_4_ = SUB164(auVar17 | _DAT_023945f0,0) + fVar12;
  fVar12 = (((float)local_e8._4_4_ + (float)local_d8._4_4_ + DAT_02390d00) - fStack_144) *
           DAT_0239011c;
  auVar26._0_4_ = _DAT_023945e0 & (uint)fVar12;
  auVar26._4_4_ = _UNK_023945e4 & (uint)((float)local_e8._4_4_ + (float)local_d8._4_4_);
  auVar26._8_4_ = _UNK_023945e8 & (uint)(uStack_e0._4_4_ + fStack_cc);
  auVar26._12_4_ = _UNK_023945ec & (uint)(uStack_e0._4_4_ + fStack_cc);
  auVar27._4_12_ = SUB1612(auVar26 | _DAT_023945f0,4);
  auVar27._0_4_ = SUB164(auVar26 | _DAT_023945f0,0) + fVar12;
  if (cVar7 != '\0') {
    local_4c = DAT_0239011c;
  }
  auVar25 = roundss(auVar18,auVar18,0xb);
  local_88._0_4_ = auVar25._0_4_;
  _local_68 = roundss(ZEXT816(0),auVar27,0xb);
  if (unaff_RDI[0x3e] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    local_c8 = unaff_RDI[0x3e];
    if (local_c8 == 0) {
LAB_0038e8e5:
      local_c0 = '\x01';
      bVar3 = true;
    }
    else {
      FUN_00d50b00();
      local_c0 = '\x01';
      if (unaff_RDI[0x3e] == 0) goto LAB_0038e8e5;
      FUN_00d50b00();
      bVar3 = false;
    }
    FUN_01d526f0();
    auVar25 = insertps(ZEXT416((uint)(DAT_02390124 + (float)local_88._0_4_)),local_68._0_4_,0x10);
    FUN_00d05510(auVar25._0_8_);
    uVar13 = FUN_00d051c0();
    auVar27 = ZEXT416((uint)local_4c);
    FUN_01d49110(uVar13,3);
    if (!bVar3) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
  }
  local_148 = SUB84(auVar24,0);
  if (unaff_RDI[0x40] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    local_e8 = (undefined1  [8])FUN_01e3f820();
    uStack_e0 = extraout_XMM0_Qb_04;
    local_b8 = unaff_RDI[0x40];
    _local_d8 = auVar27;
    if (local_b8 == 0) {
LAB_0038e9db:
      local_b0 = '\x01';
      bVar3 = true;
    }
    else {
      FUN_00d50b00();
      local_b0 = '\x01';
      if (unaff_RDI[0x40] == 0) goto LAB_0038e9db;
      FUN_00d50b00();
      bVar3 = false;
    }
    FUN_01d526f0();
    fVar12 = (((float)local_e8._0_4_ + (float)local_d8._0_4_ + DAT_02390d00) - local_148) *
             DAT_0239011c;
    auVar19._0_4_ = _DAT_023945e0 & (uint)fVar12;
    auVar19._4_4_ = _UNK_023945e4 & local_e8._4_4_;
    auVar19._8_4_ = _UNK_023945e8 & (uint)uStack_e0;
    auVar19._12_4_ = _UNK_023945ec & (uint)uStack_e0._4_4_;
    auVar20._4_12_ = SUB1612(auVar19 | _DAT_023945f0,4);
    auVar20._0_4_ = SUB164(auVar19 | _DAT_023945f0,0) + fVar12;
    auVar25 = roundss(auVar20,auVar20,0xb);
    auVar25 = insertps(auVar25,local_68._0_4_,0x10);
    FUN_00d05510(auVar25._0_8_);
    uVar13 = FUN_00d051c0();
    auVar27 = ZEXT416((uint)local_4c);
    FUN_01d49110(uVar13,3);
    if (!bVar3) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
  }
  if (unaff_RDI[0x42] == 0) goto LAB_0038eba4;
  FUN_00d50b00();
  FUN_00d50b20();
  local_e8 = (undefined1  [8])FUN_01e3f820();
  uStack_e0 = extraout_XMM0_Qb_05;
  local_a8 = unaff_RDI[0x42];
  _local_d8 = auVar27;
  if (local_a8 == 0) {
LAB_0038eb02:
    local_a0 = '\x01';
    bVar3 = true;
  }
  else {
    FUN_00d50b00();
    local_a0 = '\x01';
    if (unaff_RDI[0x42] == 0) goto LAB_0038eb02;
    FUN_00d50b00();
    bVar3 = false;
  }
  FUN_01d526f0();
  fVar12 = (((float)local_e8._0_4_ + (float)local_d8._0_4_ + DAT_02390d00) - local_148) -
           (float)local_88._0_4_;
  auVar21._0_4_ = _DAT_023945e0 & (uint)fVar12;
  auVar21._4_4_ = _UNK_023945e4 & local_e8._4_4_;
  auVar21._8_4_ = _UNK_023945e8 & (uint)uStack_e0;
  auVar21._12_4_ = _UNK_023945ec & (uint)uStack_e0._4_4_;
  auVar22._4_12_ = SUB1612(auVar21 | _DAT_023945f0,4);
  auVar22._0_4_ = SUB164(auVar21 | _DAT_023945f0,0) + fVar12;
  auVar25 = roundss(auVar22,auVar22,0xb);
  auVar25 = insertps(auVar25,local_68._0_4_,0x10);
  FUN_00d05510(auVar25._0_8_);
  uVar13 = FUN_00d051c0();
  FUN_01d49110(uVar13,3);
  if (!bVar3) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
LAB_0038eba4:
  (**(code **)(*unaff_RDI + 0x640))();
  (**(code **)(*local_158 + 0x390))();
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
  if ((local_150 != '\0') && (local_158 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  cVar7 = (**(code **)(*unaff_RDI + 0x9a0))();
  if (cVar7 == '\0') {
    FUN_01d489d0();
  }
  FUN_01d48b40();
  plVar10 = (longlong *)*unaff_RSI;
  FUN_01d39800();
  local_98 = local_40;
  plVar5 = local_48;
  plVar4 = local_58;
  local_90 = 0;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_90 = '\x01';
  (**(code **)(*plVar10 + 0x3a8))();
  if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


