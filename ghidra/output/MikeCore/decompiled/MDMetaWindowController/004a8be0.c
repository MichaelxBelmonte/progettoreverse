// Function: FUN_004a8be0
// Address: 004a8be0
// Size: 1216 bytes
// Class: MDMetaWindowController


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a8be0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong *plVar4;
  longlong *plVar5;
  byte bVar6;
  byte bVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *unaff_RDI;
  undefined8 uVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float in_XMM1_Dc;
  float fVar20;
  float fVar21;
  float in_XMM1_Dd;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  byte local_78;
  undefined1 local_68 [8];
  undefined8 uStack_60;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  lVar9 = DAT_026d85b0;
  fVar17 = (float)((ulonglong)param_2 >> 0x20);
  fVar14 = (float)param_2;
  if (DAT_026d85b0 != 0) {
    FUN_00d50b00();
  }
  FUN_00e7d6f0();
  uVar10 = FUN_0071a120();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    uVar10 = FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
  }
  local_50 = lVar9;
  local_48 = '\0';
  FUN_000175c0(uVar10,&local_50);
  plVar4 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (longlong *)0x0) {
    local_38 = '\0';
    local_40 = plVar4;
    local_78 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  lVar9 = DAT_026f6fd0;
  if (DAT_026f6fd0 != 0) {
    FUN_00d50b00();
  }
  dVar11 = (double)FUN_00e7d6f0();
  uVar8 = (ulonglong)(dVar11 * DAT_023907c0);
  dVar11 = dVar11 * DAT_023907c0 - _DAT_023907c8;
  uVar10 = FUN_0071a120();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    uVar10 = FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
  }
  bVar6 = (byte)(((longlong)dVar11 & (longlong)uVar8 >> 0x3f | uVar8) / 3);
  local_50 = lVar9;
  local_48 = '\0';
  FUN_000175c0(uVar10,&local_50);
  plVar5 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    local_38 = '\0';
    local_40 = plVar5;
    bVar6 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  bVar7 = plVar4 != (longlong *)0x0 & local_78;
  if ((plVar5 != (longlong *)0x0 & bVar6) == 0) {
    FUN_01e53c20();
    uVar10 = (**(code **)(*local_40 + 0x4d8))();
    fVar15 = fVar14;
    fVar18 = fVar17;
    fVar20 = in_XMM1_Dc;
    fVar22 = in_XMM1_Dd;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_68 = (undefined1  [8])(**(code **)(*(longlong *)unaff_RDI[0xf] + 0x4d8))();
    uStack_60 = extraout_XMM0_Qb_01;
    auVar25 = _local_68;
    uVar12 = (**(code **)(*(longlong *)unaff_RDI[0x10] + 0x4d8))();
    fStack_a0 = (float)extraout_XMM0_Qb_02;
    fStack_9c = (float)((ulonglong)extraout_XMM0_Qb_02 >> 0x20);
    fVar16 = fVar15;
    fVar19 = fVar18;
    fVar21 = fVar20;
    fVar23 = fVar22;
    uVar13 = (**(code **)(*(longlong *)unaff_RDI[0xe] + 0x4d8))();
    local_98 = (float)uVar13;
    fStack_94 = (float)((ulonglong)uVar13 >> 0x20);
    fStack_90 = (float)extraout_XMM0_Qb_03;
    fStack_8c = (float)((ulonglong)extraout_XMM0_Qb_03 >> 0x20);
    uStack_60._4_4_ = (float)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
    if (bVar7 == 0) {
      (**(code **)(*(longlong *)unaff_RDI[0x10] + 0x478))();
      unaff_RDI[0x10] = 0;
      auVar25._4_4_ = fVar19 + fStack_94 + fStack_94;
      auVar25._0_4_ = fVar16 + local_98 + local_98;
      auVar25._8_4_ = fVar21 + fStack_90 + fStack_90;
      auVar25._12_4_ = fVar23 + fStack_8c + fStack_8c;
    }
    else {
      auVar2._8_4_ = fStack_a0;
      auVar2._0_8_ = uVar12;
      auVar2._12_4_ = fStack_9c;
      auVar25 = blendps(auVar2,auVar25,0xd);
      (**(code **)(*(longlong *)unaff_RDI[0x10] + 0x4d0))(auVar25._0_8_,fVar15);
      local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
      uStack_60._0_4_ = (float)extraout_XMM0_Qb_01;
      auVar25._0_4_ = (float)local_68._0_4_ + fVar15 + local_98;
      auVar25._4_4_ = (float)local_68._4_4_ + fVar18 + fStack_94;
      auVar25._8_4_ = (float)uStack_60 + fVar20 + fStack_90;
      auVar25._12_4_ = uStack_60._4_4_ + fVar22 + fStack_8c;
    }
    auVar1._4_4_ = fVar17;
    auVar1._0_4_ = fVar14;
    auVar1._8_4_ = in_XMM1_Dc;
    auVar1._12_4_ = in_XMM1_Dd;
    auVar25 = blendps(auVar25,auVar1,2);
    (**(code **)(*(longlong *)unaff_RDI[0xf] + 0x478))();
    unaff_RDI[0xf] = 0;
    lVar9 = *(longlong *)unaff_RDI[2];
    local_68._0_4_ = auVar25._0_4_;
  }
  else {
    if (bVar7 != 0) goto LAB_004a9082;
    FUN_01e53c20();
    uVar10 = (**(code **)(*local_40 + 0x4d8))();
    fVar15 = fVar14;
    fVar18 = fVar17;
    fVar20 = in_XMM1_Dc;
    fVar22 = in_XMM1_Dd;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar12 = (**(code **)(*(longlong *)unaff_RDI[0xf] + 0x4d8))();
    local_b8 = (float)uVar12;
    fStack_b4 = (float)((ulonglong)uVar12 >> 0x20);
    fStack_b0 = (float)extraout_XMM0_Qb;
    fStack_ac = (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
    fVar16 = fVar15;
    fVar19 = fVar18;
    fVar21 = fVar20;
    fVar23 = fVar22;
    uVar12 = (**(code **)(*(longlong *)unaff_RDI[0x10] + 0x4d8))();
    local_a8 = (float)uVar12;
    fStack_a4 = (float)((ulonglong)uVar12 >> 0x20);
    fStack_a0 = (float)extraout_XMM0_Qb_00;
    fStack_9c = (float)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
    (**(code **)(*(longlong *)unaff_RDI[0x10] + 0x478))();
    unaff_RDI[0x10] = 0;
    auVar3._4_4_ = fVar17;
    auVar3._0_4_ = fVar14;
    auVar3._8_4_ = in_XMM1_Dc;
    auVar3._12_4_ = in_XMM1_Dd;
    auVar24._0_4_ = fVar15 + local_b8 + ((fVar14 - local_a8) - fVar16);
    auVar24._4_4_ = fVar18 + fStack_b4 + ((fVar17 - fStack_a4) - fVar19);
    auVar24._8_4_ = fVar20 + fStack_b0 + ((in_XMM1_Dc - fStack_a0) - fVar21);
    auVar24._12_4_ = fVar22 + fStack_ac + ((in_XMM1_Dd - fStack_9c) - fVar23);
    auVar25 = blendps(auVar24,auVar3,2);
    local_68._0_4_ = auVar25._0_4_;
    lVar9 = *(longlong *)unaff_RDI[2];
  }
  (**(code **)(lVar9 + 0x4d0))(uVar10,local_68._0_4_);
LAB_004a9082:
  (**(code **)(*unaff_RDI + 0x5c0))();
  return;
}


