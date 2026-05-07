// Function: FUN_002a6a10
// Address: 002a6a10
// Size: 2285 bytes
// Class: MDMetaWindowController


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002a6a10(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong *plVar6;
  float fVar7;
  float fVar8;
  undefined1 uVar9;
  char cVar10;
  byte bVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong **pplVar15;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar21 [16];
  undefined8 extraout_XMM0_Qb_03;
  undefined8 in_XMM1_Qb;
  undefined8 uVar27;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float local_168 [3];
  uint uStack_15c;
  undefined1 local_158 [16];
  float local_148 [4];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128 [8];
  undefined8 uStack_120;
  longlong *local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong *local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong *local_b8;
  undefined8 uStack_b0;
  longlong *local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0x640))();
  (**(code **)(*local_50 + 0x490))(1,0x11,0);
  local_a8 = local_40;
  local_a0 = 0;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_a0 = '\x01';
  FUN_01d488d0();
  if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x640))();
  (**(code **)(*local_118 + 0x370))();
  FUN_01d44d80();
  local_98 = local_40;
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
  FUN_01d48a10();
  if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar17 = (**(code **)(*unaff_RDI + 0xb00))();
  local_68 = (float)uVar17;
  fStack_64 = (float)((ulonglong)uVar17 >> 0x20);
  fStack_60 = (float)extraout_XMM0_Qb;
  fStack_5c = (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
  local_78 = (float)param_2;
  fStack_74 = (float)((ulonglong)param_2 >> 0x20);
  fStack_70 = (float)in_XMM1_Qb;
  fStack_6c = (float)((ulonglong)in_XMM1_Qb >> 0x20);
  (**(code **)(*unaff_RDI + 0x640))();
  plVar1 = local_40;
  local_108 = *unaff_RSI;
  local_100 = '\0';
  uVar9 = (**(code **)(*unaff_RDI + 0x9a0))();
  uVar17 = CONCAT44(fStack_74,local_78);
  uVar27 = CONCAT44(fStack_6c,fStack_70);
  (**(code **)(*plVar1 + 0x3f0))(8,0x11,0,uVar9);
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)unaff_RDI[0x3e] == '\0') goto LAB_002a6f5f;
  uVar18 = (**(code **)(*unaff_RDI + 0xb00))();
  local_68 = (float)uVar18;
  fStack_64 = (float)((ulonglong)uVar18 >> 0x20);
  fStack_60 = (float)extraout_XMM0_Qb_00;
  fStack_5c = (float)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
  local_78 = (float)uVar17;
  fStack_74 = (float)((ulonglong)uVar17 >> 0x20);
  fStack_70 = (float)uVar27;
  fStack_6c = (float)((ulonglong)uVar27 >> 0x20);
  local_128 = (undefined1  [8])(**(code **)(*unaff_RDI + 0xaf8))();
  uStack_120 = extraout_XMM0_Qb_01;
  local_138 = uVar17;
  uStack_130 = uVar27;
  FUN_01cfc9f0();
  plVar1 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_b8 = plVar1;
  pplVar15 = &local_40;
  (**(code **)(*unaff_RDI + 0x640))();
  plVar1 = local_40;
  FUN_00209700();
  if (plVar1 == (longlong *)0x0) {
LAB_002a6d55:
    pplVar15 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar10 = FUN_00e85ea0();
    if (cVar10 == '\0') goto LAB_002a6d55;
  }
  plVar6 = local_b8;
  plVar1 = *pplVar15;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*unaff_RDI + 0x640))();
    local_f8 = *unaff_RSI;
    local_f0 = '\0';
    (**(code **)(*local_50 + 0x6a0))(0,&local_f8,local_78);
    plVar1 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d48370();
    local_e8 = plVar1;
    local_e0 = '\0';
    (**(code **)(*(longlong *)*unaff_RSI + 0x398))();
    if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    cVar10 = (**(code **)(*unaff_RDI + 0xae8))();
    if (cVar10 == '\0') {
      auVar5._4_4_ = fStack_64;
      auVar5._0_4_ = local_68;
      auVar5._8_4_ = fStack_60;
      auVar5._12_4_ = fStack_5c;
      auVar20._4_12_ = auVar5._4_12_;
      auVar20._0_4_ = local_68 + DAT_02390124;
      auVar24._4_4_ = fStack_74;
      auVar24._0_4_ = local_78;
      auVar24._8_4_ = fStack_70;
      auVar24._12_4_ = fStack_6c;
      auVar19._4_4_ = local_128._4_4_;
      auVar19._0_4_ = ((float)local_128._0_4_ + DAT_02390124) - local_68;
      auVar19._8_4_ = (float)uStack_120;
      auVar19._12_4_ = uStack_120._4_4_;
      auVar19 = blendps(auVar24,auVar19,1);
      (**(code **)(*(longlong *)*unaff_RSI + 0x390))(auVar20._0_8_,auVar19._0_8_);
    }
    else {
      fVar28 = (float)local_128._4_4_ + local_138._4_4_ + DAT_02390d00 + DAT_02390d00;
      auVar4._4_4_ = fStack_64;
      auVar4._0_4_ = local_68;
      auVar4._8_4_ = fStack_60;
      auVar4._12_4_ = fStack_5c;
      auVar22._0_4_ = local_78 + local_68;
      auVar22._4_4_ = fStack_74 + fStack_64;
      auVar22._8_4_ = fStack_70 + fStack_60;
      auVar22._12_4_ = fStack_6c + fStack_5c;
      auVar29._4_4_ = auVar22._4_4_;
      auVar29._0_4_ = auVar22._4_4_;
      auVar29._8_4_ = auVar22._12_4_;
      auVar29._12_4_ = auVar22._12_4_;
      auVar23._4_12_ = auVar22._4_12_;
      auVar23._0_4_ = auVar22._0_4_ + DAT_02390d00;
      auVar30._4_12_ = auVar29._4_12_;
      auVar30._0_4_ = (auVar22._4_4_ + DAT_02390d00) - fVar28;
      auVar24 = insertps(auVar23,auVar30,0x10);
      auVar2._4_4_ = (float)local_128._4_4_ + local_138._4_4_;
      auVar2._0_4_ = fVar28;
      auVar2._8_4_ = uStack_120._4_4_ + uStack_130._4_4_;
      auVar2._12_4_ = uStack_120._4_4_ + uStack_130._4_4_;
      auVar19 = insertps(auVar4,auVar2,0x10);
      (**(code **)(*(longlong *)*unaff_RSI + 0x390))(auVar19._0_8_,auVar24._0_8_);
    }
    local_d8 = plVar6;
    local_d0 = '\0';
    FUN_01d488d0();
    if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))();
    FUN_01d48390();
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_002a6f5f:
  if (*(char *)((longlong)unaff_RDI + 0x1f1) != '\0') {
    fVar28 = (float)FUN_01d48a00();
    local_138 = CONCAT44(local_138._4_4_,fVar28);
    FUN_01d489d0(DAT_023b1610 * fVar28);
    local_68 = (float)FUN_00aea5e0();
    local_78 = (float)(**(code **)(*unaff_RDI + 0xac0))();
    fVar16 = (float)(**(code **)(*unaff_RDI + 0xad0))();
    auVar19 = ZEXT416((uint)local_68);
    fVar28 = DAT_02390124;
    if ((local_68 < fVar16) && (fVar28 = 0.0, local_78 < local_68)) {
      local_78 = fVar16;
      local_68 = (float)FUN_00aea6b0();
      fVar28 = (float)FUN_00aea6b0();
      fVar28 = local_68 / fVar28;
      auVar19 = ZEXT416((uint)fVar28);
    }
    local_68 = fVar28;
    cVar10 = (**(code **)(*unaff_RDI + 0xaf0))();
    if (cVar10 != '\0') {
      local_68 = DAT_02390124 - local_68;
    }
    local_78 = (float)*(undefined8 *)((longlong)unaff_RDI + 0x1dc);
    fStack_74 = (float)((ulonglong)*(undefined8 *)((longlong)unaff_RDI + 0x1dc) >> 0x20);
    fStack_70 = 0.0;
    fStack_6c = 0.0;
    local_b8 = (longlong *)(**(code **)(*unaff_RDI + 0xb00))();
    _local_128 = auVar19;
    uStack_b0 = extraout_XMM0_Qb_02;
    bVar11 = (**(code **)(*unaff_RDI + 0xae8))();
    local_158._8_8_ = uStack_b0;
    local_158._0_8_ = local_b8;
    local_148[0] = (float)local_128._0_4_ + SUB84(local_b8,0);
    local_148[1] = (float)local_128._4_4_ + (float)((ulonglong)local_b8 >> 0x20);
    local_148[2] = (float)uStack_120 + (float)uStack_b0;
    local_148[3] = uStack_120._4_4_ + (float)((ulonglong)uStack_b0 >> 0x20);
    uVar13 = (ulonglong)bVar11;
    local_168[0] = local_78;
    local_168[1] = fStack_74;
    local_168[2] = fStack_70;
    uStack_15c = (uint)fStack_6c;
    fVar28 = ((((local_148[uVar13] + DAT_02390d00) - *(float *)(local_158 + uVar13 * 4)) -
              local_168[uVar13]) + DAT_02390124) * local_68;
    uVar12 = (uint)bVar11;
    auVar21._0_4_ = -(uint)(uVar12 == _DAT_0238fcc0);
    auVar21._4_4_ = -(uint)(uVar12 == _UNK_0238fcc4);
    auVar21._8_4_ = -(uint)(uVar12 == _UNK_0238fcc8);
    auVar21._12_4_ = -(uint)(uVar12 == _UNK_0238fccc);
    auVar3._4_4_ = fVar28;
    auVar3._0_4_ = fVar28;
    auVar3._8_4_ = fVar28;
    auVar3._12_4_ = fVar28;
    blendvps(local_158,auVar3,auVar21);
    fVar28 = local_78;
    fVar16 = fStack_74;
    fVar7 = fStack_70;
    fVar8 = fStack_6c;
    uVar17 = FUN_00d05530();
    fStack_5c = fVar8;
    fStack_60 = fVar7;
    fStack_64 = fVar16;
    local_68 = fVar28;
    local_78 = (float)uVar17;
    fStack_74 = (float)((ulonglong)uVar17 >> 0x20);
    fStack_70 = (float)extraout_XMM0_Qb_03;
    fStack_6c = (float)((ulonglong)extraout_XMM0_Qb_03 >> 0x20);
    FUN_01d48b40();
    uVar17 = (**(code **)(*unaff_RDI + 0x640))();
    plVar1 = local_50;
    local_c8 = DAT_026e41f0;
    if (DAT_026e41f0 != 0) {
      uVar17 = FUN_00d50b00();
    }
    local_c0 = '\x01';
    (**(code **)(*plVar1 + 0x3b0))(uVar17,&local_c8);
    local_88 = local_40;
    local_80 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_80 = '\x01';
    FUN_01d488d0();
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    cVar10 = (**(code **)(*unaff_RDI + 0xae8))();
    if (cVar10 == '\0') {
      fVar28 = DAT_0239011c * local_68 + local_78;
      auVar19 = ZEXT416(_DAT_023945e0 & (uint)fVar28) | _DAT_023945f0;
      auVar26._4_12_ = auVar19._4_12_;
      auVar26._0_4_ = auVar19._0_4_ + fVar28;
      roundss(ZEXT816(0),auVar26,0xb);
      lVar14 = *(longlong *)*unaff_RSI;
    }
    else {
      fVar28 = fStack_64 * DAT_0239011c + fStack_74;
      auVar31._0_4_ = _DAT_023945e0 & (uint)fVar28;
      auVar31._4_4_ = _UNK_023945e4 & (uint)fStack_64;
      auVar31._8_4_ = _UNK_023945e8 & (uint)fStack_5c;
      auVar31._12_4_ = _UNK_023945ec & (uint)fStack_5c;
      auVar32._4_12_ = SUB1612(auVar31 | _DAT_023945f0,4);
      auVar32._0_4_ = SUB164(auVar31 | _DAT_023945f0,0) + fVar28;
      auVar25._0_12_ = ZEXT812(0);
      auVar25._12_4_ = 0;
      roundss(auVar25,auVar32,0xb);
      lVar14 = *(longlong *)*unaff_RSI;
    }
    (**(code **)(lVar14 + 0x3e0))();
    FUN_01d489d0();
  }
  return;
}


