// Function: FUN_01cef520
// Address: 01cef520
// Size: 3152 bytes
// Class: GNMultipleValue


/* WARNING: Removing unreachable block (ram,0x01cef750) */
/* WARNING: Removing unreachable block (ram,0x01cef760) */
/* WARNING: Removing unreachable block (ram,0x01cef638) */
/* WARNING: Removing unreachable block (ram,0x01cef86a) */
/* WARNING: Removing unreachable block (ram,0x01cef876) */

void FUN_01cef520(undefined8 param_1,undefined1 param_2 [8])

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar12;
  bool bVar13;
  float fVar14;
  undefined8 uVar15;
  double dVar16;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uVar17;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 in_XMM1_Qb;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 local_1f8 [16];
  float local_1c8;
  float fStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  longlong *local_1b8;
  char local_1b0;
  longlong *local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
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
  longlong *local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  undefined1 local_b8 [8];
  undefined8 uStack_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  undefined4 local_54;
  uint local_50;
  undefined4 local_4c;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  cVar7 = FUN_01e420b0();
  if (cVar7 == '\0') {
    uVar9 = 0;
  }
  else {
    uVar9 = (**(code **)(*unaff_RDI + 0x878))();
  }
  uVar1 = *(undefined4 *)((longlong)unaff_RDI + 0x18c);
  (**(code **)(*unaff_RDI + 0x640))();
  local_48 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  iVar10 = (**(code **)(*unaff_RDI + 0x920))();
  (**(code **)(*unaff_RDI + 0xa18))();
  if (local_40 == (longlong *)0x0) {
    bVar13 = false;
  }
  else {
    (**(code **)(*unaff_RDI + 0xa18))();
    lVar11 = DAT_027f3d60;
    if (DAT_027f3d60 != 0) {
      FUN_00d50b00();
    }
    cVar7 = (**(code **)(*local_1b8 + 0x50))();
    if (cVar7 == '\0') {
      bVar13 = false;
    }
    else {
      bVar13 = *(int *)((longlong)unaff_RDI + 500) == 0;
    }
    if (lVar11 != 0) {
      FUN_00d50b20();
    }
    if ((local_1b0 != '\0') && (local_1b8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar13) {
    uVar1 = 0x2c;
  }
  local_50 = uVar9 & 0xff;
  if ((char)unaff_RDI[0x3e] != '\0') {
    if (iVar10 == 0) {
      param_2 = (undefined1  [8])0x0;
      in_XMM1_Qb = 0;
      if (((double)unaff_RDI[0x43] != 0.0) || (NAN((double)unaff_RDI[0x43]))) {
        dVar16 = (double)FUN_00e7d6f0();
        auVar20._0_8_ = dVar16 - (double)unaff_RDI[0x43];
        auVar20._8_8_ = extraout_XMM0_Qb;
        auVar18._4_12_ = auVar20._4_12_;
        auVar18._0_4_ = (float)auVar20._0_8_ * DAT_0239011c;
        auVar20 = roundss(ZEXT816(0),auVar18,9);
        fVar14 = (auVar18._0_4_ - auVar20._0_4_) * DAT_02410f88;
        auVar19._0_4_ = fVar14 + fVar14;
        auVar19._4_12_ = auVar18._4_12_;
        fVar14 = (float)_cosf(auVar19._0_8_);
        auVar20 = ZEXT416((uint)((DAT_02390124 - fVar14) * DAT_0239011c));
        FUN_01cc5880();
        FUN_01e3f820();
        uVar2 = *(undefined4 *)((longlong)unaff_RDI + 0x1fc);
        _local_b8 = auVar20;
        uVar8 = (**(code **)(*unaff_RDI + 0x9a0))();
        (**(code **)(*unaff_RDI + 0xa70))();
        param_2 = local_b8;
        in_XMM1_Qb = uStack_b0;
        (**(code **)(*local_48 + 0x3f0))(uVar2,uVar1,0,uVar8);
        FUN_01cc5880();
        goto LAB_01cef887;
      }
    }
    uVar15 = FUN_01e3f820();
    uStack_b0 = in_XMM1_Qb;
    local_b8 = param_2;
    uVar8 = (**(code **)(*unaff_RDI + 0x9a0))();
    (**(code **)(*unaff_RDI + 0xa70))();
    param_2 = local_b8;
    in_XMM1_Qb = uStack_b0;
    (**(code **)(*local_48 + 0x3f0))(uVar15,uVar1,iVar10,uVar8);
  }
LAB_01cef887:
  lVar11 = unaff_RDI[0x40];
  if (lVar11 != 0) {
    local_a0 = 0;
    FUN_00d50b00();
    local_a0 = '\x01';
    local_a8 = lVar11;
    FUN_01cc48f0();
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
  }
  local_54 = uVar1;
  if (unaff_RDI[0x3a] == 0) {
    (**(code **)(*unaff_RDI + 0x960))();
    plVar12 = local_40;
    if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0')
        ) && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_168 = plVar12;
    local_160 = '\0';
    local_158 = *unaff_RSI;
    local_150 = '\0';
    FUN_01e3f820();
    (**(code **)(*local_48 + 0x548))();
    (**(code **)(*unaff_RDI + 0xa00))(param_2,&local_168);
    plVar6 = local_40;
    if (plVar12 == local_40) {
LAB_01cefa75:
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar13 = plVar12 != (longlong *)0x0;
        plVar12 = plVar6;
        if (bVar13) {
          FUN_00d50b20();
        }
        goto LAB_01cefa75;
      }
      if (plVar12 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      local_38 = '\0';
      plVar12 = plVar6;
    }
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
    if ((local_160 != '\0') && (local_168 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_148 = *unaff_RSI;
    local_140 = '\0';
    uVar15 = FUN_01e3f820();
    local_130 = '\0';
    local_138 = plVar12;
    (**(code **)(*unaff_RDI + 0x9e0))();
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
    uVar1 = *(undefined4 *)((longlong)unaff_RDI + 0x174);
    (**(code **)(*unaff_RDI + 0x9a0))();
    (**(code **)(*unaff_RDI + 0xa70))();
    (**(code **)(*local_48 + 0x400))(uVar15,param_2,&local_78,uVar1);
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
    if (plVar12 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    goto LAB_01cf010f;
  }
  uVar15 = (**(code **)(*unaff_RDI + 0x9a0))();
  if (((char)uVar15 == '\0') && (lVar11 = unaff_RDI[0x3c], lVar11 != 0)) {
    FUN_00d50b00();
LAB_01cefc22:
    local_4c = 0;
  }
  else {
    if (((int)unaff_RDI[0x29] != 0) &&
       ((lVar11 = unaff_RDI[0x3b], lVar11 != 0 && (*(int *)((longlong)unaff_RDI + 500) == 1)))) {
      FUN_00d50b00();
      goto LAB_01cefc22;
    }
    if ((((char)unaff_RDI[0x31] != '\0') && (lVar11 = unaff_RDI[0x3b], lVar11 != 0)) &&
       (*(int *)((longlong)unaff_RDI + 500) != 1)) {
      FUN_00d50b00();
      goto LAB_01cefc22;
    }
    lVar11 = unaff_RDI[0x3a];
    if (lVar11 != 0) {
      FUN_00d50b00();
      goto LAB_01cefc22;
    }
    local_4c = (undefined4)CONCAT71((int7)((ulonglong)uVar15 >> 8),1);
    lVar11 = 0;
  }
  uVar17 = FUN_01e3f820();
  local_1c8 = (float)uVar17;
  fStack_1c4 = (float)((ulonglong)uVar17 >> 0x20);
  uStack_1c0 = (undefined4)extraout_XMM0_Qb_00;
  uStack_1bc = (undefined4)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
  local_1f8._8_8_ = in_XMM1_Qb;
  local_1f8._0_8_ = param_2;
  uStack_b0 = 0;
  local_b8 = (undefined1  [8])DAT_023dccf4;
  uVar15 = param_2;
  FUN_01d530c0();
  (**(code **)(*unaff_RDI + 0x640))();
  fVar14 = (float)(**(code **)(*local_40 + 0x630))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((int)unaff_RDI[0x42] == 0) {
    FUN_00d05560();
  }
  else if ((int)unaff_RDI[0x42] == 1) {
    auVar22._4_4_ = fStack_1c4;
    auVar22._0_4_ = fStack_1c4;
    auVar22._8_4_ = uStack_1bc;
    auVar22._12_4_ = uStack_1bc;
    auVar23._4_12_ = auVar22._4_12_;
    auVar23._0_4_ = fStack_1c4 + DAT_02390d00;
    auVar20 = insertps(ZEXT416((uint)(DAT_02390d34 + fVar14 + local_1c8)),auVar23,0x10);
    FUN_00d05560(auVar20._0_8_,unaff_RDI[0x41]);
    auVar3._8_8_ = in_XMM1_Qb;
    auVar3._0_8_ = uVar15;
    fVar14 = fVar14 + (float)uVar15 + DAT_02394298;
    blendps(auVar3,local_1f8,2);
    auVar4._8_4_ = uStack_1c0;
    auVar4._0_8_ = uVar17;
    auVar4._12_4_ = uStack_1bc;
    auVar21._4_12_ = auVar4._4_12_;
    auVar21._0_4_ = local_1c8 + fVar14;
    blendps(auVar4,auVar21,1);
    register0x00001244 = local_1f8._4_12_;
    local_b8._0_4_ = SUB84(param_2,0) - fVar14;
  }
  else {
    FUN_00d05560();
  }
  local_128 = *unaff_RSI;
  local_120 = '\0';
  lVar5 = unaff_RDI[0x3e];
  local_110 = '\0';
  uVar1 = *(undefined4 *)((longlong)unaff_RDI + 0x174);
  local_118 = lVar11;
  (**(code **)(*unaff_RDI + 0x9a0))();
  (**(code **)(*unaff_RDI + 0xa70))();
  (**(code **)(*local_48 + 0x408))((char)lVar5,local_54,&local_118,uVar1);
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if ((0.0 < (float)local_b8._0_4_) && (0.0 < (float)local_b8._4_4_)) {
    (**(code **)(*unaff_RDI + 0x960))();
    plVar12 = local_40;
    if ((local_38 == '\0') &&
       (((local_40 != (longlong *)0x0 && (FUN_00d50b00(), local_38 != '\0')) &&
        (local_40 != (longlong *)0x0)))) {
      FUN_00d50b20();
    }
    local_108 = plVar12;
    local_100 = '\0';
    local_f8 = *unaff_RSI;
    local_f0 = '\0';
    (**(code **)(*local_48 + 0x548))();
    (**(code **)(*unaff_RDI + 0xa00))(&local_f8,&local_108);
    plVar6 = local_40;
    if (plVar12 == local_40) {
LAB_01ceff74:
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar13 = plVar12 != (longlong *)0x0;
        plVar12 = plVar6;
        if (bVar13) {
          FUN_00d50b20();
        }
        goto LAB_01ceff74;
      }
      if (plVar12 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      local_38 = '\0';
      plVar12 = plVar6;
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_e8 = *unaff_RSI;
    local_e0 = '\0';
    local_d0 = '\0';
    local_d8 = plVar12;
    (**(code **)(*unaff_RDI + 0x9e0))();
    local_68 = local_40;
    local_60 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_60 = '\x01';
    uVar1 = *(undefined4 *)((longlong)unaff_RDI + 0x174);
    (**(code **)(*unaff_RDI + 0x9a0))();
    (**(code **)(*unaff_RDI + 0xa70))();
    (**(code **)(*local_48 + 0x400))(&local_d8,local_54,&local_68,uVar1);
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if (plVar12 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((char)local_4c == '\0' && lVar11 != 0) {
    FUN_00d50b20();
  }
LAB_01cf010f:
  if (unaff_RDI[0x40] != 0) {
    local_c0 = '\0';
    local_c8 = 0;
    FUN_01cc48f0();
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}


