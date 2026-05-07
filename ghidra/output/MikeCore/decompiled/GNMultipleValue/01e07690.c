// Function: FUN_01e07690
// Address: 01e07690
// Size: 2637 bytes
// Class: GNMultipleValue


/* WARNING: Removing unreachable block (ram,0x01e077af) */
/* WARNING: Removing unreachable block (ram,0x01e077bb) */
/* WARNING: Removing unreachable block (ram,0x01e076fb) */
/* WARNING: Removing unreachable block (ram,0x01e07704) */
/* WARNING: Removing unreachable block (ram,0x01e078e2) */
/* WARNING: Removing unreachable block (ram,0x01e078eb) */
/* WARNING: Removing unreachable block (ram,0x01e07cbe) */
/* WARNING: Removing unreachable block (ram,0x01e07cc7) */
/* WARNING: Removing unreachable block (ram,0x01e07d20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e07690(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  byte bVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  byte bVar11;
  bool bVar12;
  bool bVar13;
  float extraout_XMM0_Db;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  float extraout_XMM0_Dd;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  longlong local_170;
  char local_168;
  longlong *local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong *local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  undefined8 local_88;
  float fStack_80;
  float fStack_7c;
  longlong *local_58;
  longlong *local_40;
  char local_38;
  
  fVar19 = (float)((ulonglong)param_2 >> 0x20);
  fVar18 = (float)param_2;
  cVar6 = (**(code **)(*unaff_RDI + 0xac8))();
  if (cVar6 != '\0') {
    (**(code **)(*unaff_RDI + 0x878))();
  }
  (**(code **)(*unaff_RDI + 0x640))();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if ((char)unaff_RDI[0x41] != '\0') {
    uVar1 = *(undefined4 *)((longlong)unaff_RDI + 0x18c);
    FUN_01e3f820();
    local_88 = CONCAT44(fVar19,fVar18);
    cVar6 = *(char *)((longlong)unaff_RDI + 0x1e3);
    fStack_80 = in_XMM1_Dc;
    fStack_7c = in_XMM1_Dd;
    uVar7 = (**(code **)(*unaff_RDI + 0x9a0))();
    uVar10 = 8;
    if (cVar6 == '\0') {
      uVar10 = 0x12;
    }
    fVar18 = (float)local_88;
    fVar19 = local_88._4_4_;
    (**(code **)(*local_40 + 0x3f0))(uVar10,uVar1,0,uVar7);
    in_XMM1_Dc = fStack_80;
    in_XMM1_Dd = fStack_7c;
  }
  local_d8 = FUN_01e3f820();
  local_88 = CONCAT44(fVar19,fVar18);
  uStack_d0 = extraout_XMM0_Qb;
  fStack_80 = in_XMM1_Dc;
  fStack_7c = in_XMM1_Dd;
  uVar10 = FUN_01e3f820();
  cVar6 = (**(code **)(*unaff_RDI + 0xb30))();
  if (cVar6 != '\0') {
    local_88 = CONCAT44(local_88._4_4_,(float)local_88 - fVar19);
  }
  cVar6 = (**(code **)(*unaff_RDI + 0xac8))();
  if (cVar6 != '\0') {
    bVar12 = false;
    local_58 = (longlong *)0x0;
    cVar6 = (char)unaff_RDI[0x34];
    goto joined_r0x01e07db4;
  }
  lVar2 = unaff_RDI[0x42];
  if (lVar2 != 0) {
    local_b0 = 0;
    FUN_00d50b00();
    local_b0 = '\x01';
    local_b8 = lVar2;
    FUN_01cc48f0();
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*unaff_RDI + 0x960))();
  if (local_40 == (longlong *)0x0) {
    bVar5 = 1;
    bVar11 = 0;
    bVar12 = false;
    local_58 = (longlong *)0x0;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    local_58 = local_40;
    if (*(char *)((longlong)unaff_RDI + 0x222) != '\0') {
      plVar9 = (longlong *)FUN_00e8fc40();
      FUN_00d4ff40();
      *plVar9 = (longlong)&DAT_025795a8;
      (*DAT_025795c0)();
      iVar8 = FUN_00d8c7a0();
      if (0 < iVar8) {
        iVar8 = iVar8 + 1;
        do {
          lVar2 = DAT_02726ce0;
          if (DAT_02726ce0 != 0) {
            FUN_00d50b00();
          }
          FUN_00d8dbf0();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          iVar8 = iVar8 + -1;
        } while (1 < iVar8);
      }
      if (plVar9 != local_40) {
        if (plVar9 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
        local_58 = plVar9;
      }
      if (plVar9 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    bVar11 = 1;
    bVar5 = 0;
    bVar12 = true;
  }
  (**(code **)(*local_40 + 0x548))();
  local_138 = local_58;
  local_130 = '\0';
  local_128 = *unaff_RSI;
  local_120 = '\0';
  (**(code **)(*unaff_RDI + 0xa00))(&local_128,&local_138);
  if (local_40 == local_58) {
    if ((bool)(bVar5 & local_58 != (longlong *)0x0)) {
      if (local_38 != '\0') goto LAB_01e07ab0;
      bVar12 = true;
      FUN_00d50b00();
    }
LAB_01e07b12:
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      if ((bool)(bVar11 & local_58 != (longlong *)0x0)) {
        local_58 = local_40;
        FUN_00d50b20();
        bVar12 = true;
      }
      else {
        local_58 = local_40;
        bVar12 = true;
      }
      goto LAB_01e07b12;
    }
    bVar12 = local_58 != (longlong *)0x0;
    local_58 = local_40;
    if ((bool)(bVar11 & bVar12)) {
      FUN_00d50b20();
    }
LAB_01e07ab0:
    local_38 = '\0';
    bVar12 = true;
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x9e0))();
  if (local_40 == (longlong *)0x0) {
    if ((local_88._4_4_ == _DAT_02421584) && (!NAN(local_88._4_4_) && !NAN(_DAT_02421584))) {
      (**(code **)(*(longlong *)*unaff_RSI + 0x370))();
    }
  }
  else if (local_38 != '\0') {
    FUN_00d50b20();
  }
  local_118 = *unaff_RSI;
  local_110 = '\0';
  local_100 = '\0';
  local_108 = local_58;
  (**(code **)(*unaff_RDI + 0x9e0))();
  local_90 = 0;
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  local_38 = '\0';
  local_90 = '\x01';
  local_98 = local_40;
  uVar1 = *(undefined4 *)((longlong)unaff_RDI + 0x174);
  (**(code **)(*unaff_RDI + 0x9a0))();
  (**(code **)(*local_40 + 0x400))(&local_108,(float)local_88,&local_98,uVar1);
  if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x9e0))();
  if (local_40 == (longlong *)0x0) {
    if ((local_88._4_4_ == _DAT_02421584) && (!NAN(local_88._4_4_) && !NAN(_DAT_02421584))) {
      (**(code **)(*(longlong *)*unaff_RSI + 0x370))();
    }
  }
  if (unaff_RDI[0x42] == 0) {
    cVar6 = (char)unaff_RDI[0x34];
  }
  else {
    local_f0 = '\0';
    local_f8 = 0;
    FUN_01cc48f0();
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    cVar6 = (char)unaff_RDI[0x34];
  }
joined_r0x01e07db4:
  if (cVar6 != '\0') {
    local_e8 = *unaff_RSI;
    local_e0 = '\0';
    (**(code **)(*local_40 + 0x518))();
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*unaff_RDI + 0x970))();
  if (local_40 == (longlong *)0x0) {
    bVar13 = unaff_RDI[0x45] != 0;
  }
  else {
    (**(code **)(*unaff_RDI + 0x970))();
    iVar8 = FUN_00d8c7a0();
    if (iVar8 == 0) {
      bVar13 = unaff_RDI[0x45] != 0;
    }
    else {
      bVar13 = false;
    }
    if ((local_168 != '\0') && (local_170 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar13) {
    local_d8 = DAT_023dccec;
    uStack_d0 = 0;
    FUN_01d526f0();
    plVar9 = (longlong *)*unaff_RSI;
    local_a0 = 0;
    local_a8 = unaff_RDI[0x45];
    if (local_a8 != 0) {
      FUN_00d50b00();
    }
    auVar15._4_4_ = local_88._4_4_ - extraout_XMM0_Db;
    auVar15._12_4_ = fStack_7c - extraout_XMM0_Dd;
    auVar15._0_4_ = auVar15._4_4_;
    auVar15._8_4_ = auVar15._12_4_;
    auVar14._4_12_ = auVar15._4_12_;
    auVar14._0_4_ = auVar15._4_4_ * DAT_0239011c;
    auVar15 = roundss(auVar14,auVar14,10);
    auVar16._4_12_ = auVar15._4_12_;
    auVar16._0_4_ = auVar15._0_4_ + DAT_02390d34;
    insertps(_DAT_024215a0,auVar16,0x10);
    local_a0 = '\x01';
    (**(code **)(*plVar9 + 0x408))();
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
  }
  cVar6 = (**(code **)(*unaff_RDI + 0xb30))();
  if (cVar6 != '\0') {
    local_88 = DAT_023dccec;
    fStack_80 = 0.0;
    fStack_7c = 0.0;
    FUN_01e08690();
    local_d8 = FUN_01d526f0();
    uStack_d0 = extraout_XMM0_Qb_01;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar9 = (longlong *)*unaff_RSI;
    FUN_01e08690();
    local_c0 = 0;
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    local_c8 = local_40;
    auVar20._0_4_ = fVar18 - fVar19;
    auVar20._4_4_ = fVar19 - fVar19;
    auVar20._8_4_ = in_XMM1_Dc - in_XMM1_Dd;
    auVar20._12_4_ = in_XMM1_Dd - in_XMM1_Dd;
    auVar4._4_4_ = fVar19;
    auVar4._0_4_ = fVar19;
    auVar4._8_4_ = in_XMM1_Dd;
    auVar4._12_4_ = in_XMM1_Dd;
    auVar17._4_12_ = auVar4._4_12_;
    auVar17._0_4_ = fVar19 - (float)local_d8;
    auVar21._0_4_ = fVar18 - (float)local_d8;
    auVar21._4_4_ = fVar19 - local_d8._4_4_;
    auVar21._8_4_ = in_XMM1_Dc - (float)uStack_d0;
    auVar21._12_4_ = in_XMM1_Dd - uStack_d0._4_4_;
    auVar15 = blendps(auVar21,auVar17,1);
    auVar22._0_4_ = auVar15._0_4_ * _DAT_023945d0;
    auVar22._4_4_ = auVar15._4_4_ * _UNK_023945d4;
    auVar22._8_4_ = auVar15._8_4_ * _UNK_023945d8;
    auVar22._12_4_ = auVar15._12_4_ * _UNK_023945dc;
    roundps(auVar17,auVar22,10);
    auVar3._8_8_ = extraout_XMM0_Qb_00;
    auVar3._0_8_ = uVar10;
    blendps(auVar20,auVar3,2);
    local_c0 = '\x01';
    (**(code **)(*plVar9 + 0x408))();
    if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar12) && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


