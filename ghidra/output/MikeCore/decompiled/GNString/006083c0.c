// Function: FUN_006083c0
// Address: 006083c0
// Size: 2883 bytes
// Class: GNString


void FUN_006083c0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  char *pcVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong *unaff_RDI;
  undefined8 uVar11;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined1 auVar12 [16];
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined8 extraout_XMM0_Qb_07;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar17;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 local_b8 [8];
  float fStack_b0;
  float fStack_ac;
  undefined1 local_a8 [8];
  undefined8 uStack_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined1 local_88 [8];
  float fStack_80;
  float fStack_7c;
  longlong local_70;
  longlong local_68;
  char local_60 [8];
  longlong local_58;
  int local_50;
  int iStack_4c;
  int local_48;
  char local_40 [8];
  char local_38 [8];
  undefined8 extraout_XMM0_Qb_08;
  
  fVar17 = (float)((ulonglong)param_2 >> 0x20);
  fVar14 = (float)param_2;
  (**(code **)(*unaff_RDI + 0x4d8))();
  local_88._4_4_ = fVar17;
  local_88._0_4_ = fVar14;
  fStack_80 = in_XMM1_Dc;
  fStack_7c = in_XMM1_Dd;
  if ((fVar17 == 0.0) && (!NAN(fVar17))) {
    return;
  }
  if ((fVar14 == 0.0) && (!NAN(fVar14))) {
    return;
  }
  (**(code **)(*unaff_RDI + 0x620))();
  if (unaff_RDI[0x34] != 0) {
    unaff_RDI[0x34] = 0;
    FUN_00d50b20();
  }
  if (unaff_RDI[0x35] != 0) {
    unaff_RDI[0x35] = 0;
    FUN_00d50b20();
  }
  if (unaff_RDI[0x36] != 0) {
    unaff_RDI[0x36] = 0;
    FUN_00d50b20();
  }
  if (*(int *)(unaff_RDI[0x31] + 0xc) == 0) {
    return;
  }
  lVar7 = unaff_RDI[0x32];
  if (*(int *)(lVar7 + 0xc) == 0) {
    lVar7 = unaff_RDI[0x33];
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    FUN_0060b1f0();
    local_70 = local_68;
    if (local_68 == 0) {
      local_70 = 0;
      bVar5 = false;
    }
    else if (local_60[0] == '\0') {
      FUN_00d50b00();
      bVar5 = true;
      if ((local_60[0] != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60[0] = '\0';
      bVar5 = true;
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    FUN_0060b100();
    local_70 = local_68;
    if (local_68 == 0) {
      local_70 = 0;
      bVar5 = false;
    }
    else if (local_60[0] == '\0') {
      FUN_00d50b00();
      bVar5 = true;
      if ((local_60[0] != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60[0] = '\0';
      bVar5 = true;
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    FUN_00d216c0();
  }
  switch((int)unaff_RDI[0x3e]) {
  case 0:
    uVar11 = (**(code **)(*unaff_RDI + 0x938))();
    local_98 = (float)uVar11;
    fStack_94 = (float)((ulonglong)uVar11 >> 0x20);
    fStack_90 = (float)extraout_XMM0_Qb;
    fStack_8c = (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
    (**(code **)(*unaff_RDI + 0x938))();
    auVar15 = _local_88;
    local_a8 = (undefined1  [8])(**(code **)(*unaff_RDI + 0x938))();
    uStack_a0 = extraout_XMM0_Qb_00;
    (**(code **)(*unaff_RDI + 0x938))();
    _local_b8 = _local_88;
    break;
  case 1:
    uVar11 = (**(code **)(*unaff_RDI + 0x938))();
    local_98 = (float)uVar11;
    fStack_94 = (float)((ulonglong)uVar11 >> 0x20);
    fStack_90 = (float)extraout_XMM0_Qb_01;
    fStack_8c = (float)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
    (**(code **)(*unaff_RDI + 0x938))();
    auVar15 = _local_88;
    local_a8 = (undefined1  [8])(**(code **)(*unaff_RDI + 0x938))();
    uStack_a0 = extraout_XMM0_Qb_02;
    (**(code **)(*unaff_RDI + 0x938))();
    _local_b8 = _local_88;
    goto LAB_00608753;
  case 2:
    uVar11 = (**(code **)(*unaff_RDI + 0x938))();
    local_98 = (float)uVar11;
    fStack_94 = (float)((ulonglong)uVar11 >> 0x20);
    fStack_90 = (float)extraout_XMM0_Qb_03;
    fStack_8c = (float)((ulonglong)extraout_XMM0_Qb_03 >> 0x20);
    (**(code **)(*unaff_RDI + 0x938))();
    auVar15 = _local_88;
    local_a8 = (undefined1  [8])(**(code **)(*unaff_RDI + 0x938))();
    uStack_a0 = extraout_XMM0_Qb_04;
    (**(code **)(*unaff_RDI + 0x938))();
    _local_b8 = _local_88;
    break;
  case 3:
    uVar11 = (**(code **)(*unaff_RDI + 0x938))();
    local_98 = (float)uVar11;
    fStack_94 = (float)((ulonglong)uVar11 >> 0x20);
    fStack_90 = (float)extraout_XMM0_Qb_05;
    fStack_8c = (float)((ulonglong)extraout_XMM0_Qb_05 >> 0x20);
    (**(code **)(*unaff_RDI + 0x938))();
    auVar15 = _local_88;
    local_a8 = (undefined1  [8])(**(code **)(*unaff_RDI + 0x938))();
    uStack_a0 = extraout_XMM0_Qb_06;
    (**(code **)(*unaff_RDI + 0x938))();
    _local_b8 = _local_88;
LAB_00608753:
    auVar21._0_4_ = fVar14 - (local_98 + (float)local_b8._0_4_);
    auVar21._4_4_ = fVar17 - (fStack_94 + (float)local_b8._4_4_);
    auVar21._8_4_ = in_XMM1_Dc - (fStack_90 + fStack_b0);
    auVar21._12_4_ = in_XMM1_Dd - (fStack_8c + fStack_ac);
    auVar19._0_4_ = fVar14 - ((float)local_a8._0_4_ + auVar15._0_4_);
    auVar19._4_4_ = fVar17 - ((float)local_a8._4_4_ + auVar15._4_4_);
    auVar19._8_4_ = in_XMM1_Dc - ((float)uStack_a0 + auVar15._8_4_);
    auVar19._12_4_ = in_XMM1_Dd - (uStack_a0._4_4_ + auVar15._12_4_);
    blendps(auVar19,auVar21,0xd);
    bVar4 = true;
    _local_a8 = ZEXT816(0);
    local_b8._0_4_ = auVar19._4_4_;
    goto LAB_0060879a;
  default:
    goto switchD_006085de_default;
  }
  auVar18._0_4_ = fVar14 - (local_98 + (float)local_b8._0_4_);
  auVar18._4_4_ = fVar17 - (fStack_94 + (float)local_b8._4_4_);
  auVar18._8_4_ = in_XMM1_Dc - (fStack_90 + fStack_b0);
  auVar18._12_4_ = in_XMM1_Dd - (fStack_8c + fStack_ac);
  auVar12._0_4_ = fVar14 - ((float)local_a8._0_4_ + auVar15._0_4_);
  auVar12._4_4_ = fVar17 - ((float)local_a8._4_4_ + auVar15._4_4_);
  auVar12._8_4_ = in_XMM1_Dc - ((float)uStack_a0 + auVar15._8_4_);
  auVar12._12_4_ = in_XMM1_Dd - (uStack_a0._4_4_ + auVar15._12_4_);
  blendps(auVar12,auVar18,0xd);
  _local_a8 = auVar18;
switchD_006085de_default:
  local_b8._0_4_ = 0.0;
  bVar4 = false;
LAB_0060879a:
  (**(code **)(*unaff_RDI + 0xa08))();
  lVar7 = unaff_RDI[0x31];
  if (lVar7 != 0) {
    local_60[0] = '\0';
    local_50 = -1;
    iStack_4c = 0;
    local_48 = 0;
    local_58 = lVar7;
    if (bVar4) {
      local_98 = 0.0;
      while( true ) {
        lVar7 = (longlong)local_50;
        local_50 = local_50 + 1;
        if (*(int *)(local_58 + 0xc) <= local_50) break;
        lVar7 = *(longlong *)(*(longlong *)(local_58 + 0x10) + 8 + lVar7 * 8);
        uVar11 = FUN_003a4d30();
        auVar15 = blendps(ZEXT816(0),ZEXT416((uint)local_98),1);
        auVar20._8_4_ = (int)extraout_XMM0_Qb_07;
        auVar20._0_8_ = uVar11;
        auVar20._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_07 >> 0x20);
        auVar21 = insertps(auVar20,local_b8._0_4_,0x10);
        auVar16._0_8_ = auVar15._0_8_;
        auVar16._8_8_ = auVar21._0_8_;
        *(undefined1 (*) [16])(lVar7 + 0x28) = auVar16;
        local_98 = local_98 + (float)uVar11;
        if (iStack_4c != 0) {
          if (iStack_4c < 0) {
            iStack_4c = -iStack_4c;
          }
          else {
            local_50 = local_50 - iStack_4c;
            FUN_00d23690(iStack_4c,iStack_4c);
            local_48 = local_48 + iStack_4c;
            iStack_4c = 0;
          }
        }
      }
    }
    else {
      local_98 = 0.0;
      while( true ) {
        lVar7 = (longlong)local_50;
        local_50 = local_50 + 1;
        if (*(int *)(local_58 + 0xc) <= local_50) break;
        lVar7 = *(longlong *)(*(longlong *)(local_58 + 0x10) + 8 + lVar7 * 8);
        auVar13._0_8_ = FUN_003a4d30();
        auVar13._8_8_ = extraout_XMM0_Qb_08;
        auVar15 = insertps(_local_a8,auVar13,0x10);
        auVar15._4_8_ = auVar15._0_8_;
        auVar15._0_4_ = local_98;
        auVar15._12_4_ = 0;
        *(undefined1 (*) [16])(lVar7 + 0x28) = auVar15 << 0x20;
        local_98 = local_98 + (float)auVar13._0_8_;
        if (iStack_4c != 0) {
          if (iStack_4c < 0) {
            iStack_4c = -iStack_4c;
          }
          else {
            local_50 = local_50 - iStack_4c;
            FUN_00d23690();
            local_48 = local_48 + iStack_4c;
            iStack_4c = 0;
          }
        }
      }
    }
    FUN_006106b0();
  }
  do {
    cVar6 = FUN_0060a7c0();
  } while (cVar6 != '\0');
  local_68 = local_70;
  local_60[0] = '\0';
  FUN_00d243f0();
  if ((local_60[0] != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (bVar4) {
    FUN_00d23310();
    pcVar8 = local_38;
    if (local_60[0] != '\0') {
      pcVar8 = local_60;
    }
    local_38[0] = local_60[0];
    *pcVar8 = '\0';
    if ((local_60[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    fVar14 = *(float *)(local_70 + 0x28);
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
    if (((fVar14 == 0.0) && (!NAN(fVar14))) || (lVar7 = unaff_RDI[0x32], lVar7 == 0))
    goto LAB_00608c8b;
    local_68 = 0;
    uVar1 = *(uint *)(lVar7 + 0xc);
    local_58 = lVar7;
    if ((int)uVar1 < 1) {
LAB_00608b2c:
      local_68 = 0;
      uVar10 = 0;
    }
    else {
      lVar7 = *(longlong *)(lVar7 + 0x10);
      uVar9 = uVar1 & 3;
      if (uVar1 - 1 < 3) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        do {
          lVar2 = *(longlong *)(lVar7 + uVar10 * 8);
          *(float *)(lVar2 + 0x28) = *(float *)(lVar2 + 0x28) - fVar14;
          lVar2 = *(longlong *)(lVar7 + 8 + uVar10 * 8);
          *(float *)(lVar2 + 0x28) = *(float *)(lVar2 + 0x28) - fVar14;
          lVar2 = *(longlong *)(lVar7 + 0x10 + uVar10 * 8);
          *(float *)(lVar2 + 0x28) = *(float *)(lVar2 + 0x28) - fVar14;
          local_68 = *(longlong *)(lVar7 + 0x18 + uVar10 * 8);
          *(float *)(local_68 + 0x28) = *(float *)(local_68 + 0x28) - fVar14;
          uVar10 = uVar10 + 4;
        } while ((uVar1 & 0xfffffffc) != (uint)uVar10);
      }
      if (uVar9 != 0) {
        uVar10 = uVar10 & 0xffffffff;
        do {
          local_68 = *(longlong *)(lVar7 + uVar10 * 8);
          *(float *)(local_68 + 0x28) = *(float *)(local_68 + 0x28) - fVar14;
          uVar10 = uVar10 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
  }
  else {
    FUN_00d23310();
    pcVar8 = local_38;
    if (local_60[0] != '\0') {
      pcVar8 = local_60;
    }
    local_38[0] = local_60[0];
    *pcVar8 = '\0';
    if ((local_60[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    fVar14 = *(float *)(local_70 + 0x2c);
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
    if (((fVar14 == 0.0) && (!NAN(fVar14))) || (lVar7 = unaff_RDI[0x32], lVar7 == 0))
    goto LAB_00608c8b;
    local_68 = 0;
    uVar1 = *(uint *)(lVar7 + 0xc);
    local_58 = lVar7;
    if ((int)uVar1 < 1) goto LAB_00608b2c;
    lVar7 = *(longlong *)(lVar7 + 0x10);
    uVar9 = uVar1 & 3;
    if (uVar1 - 1 < 3) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      do {
        lVar2 = *(longlong *)(lVar7 + uVar10 * 8);
        *(float *)(lVar2 + 0x2c) = *(float *)(lVar2 + 0x2c) - fVar14;
        lVar2 = *(longlong *)(lVar7 + 8 + uVar10 * 8);
        *(float *)(lVar2 + 0x2c) = *(float *)(lVar2 + 0x2c) - fVar14;
        lVar2 = *(longlong *)(lVar7 + 0x10 + uVar10 * 8);
        *(float *)(lVar2 + 0x2c) = *(float *)(lVar2 + 0x2c) - fVar14;
        local_68 = *(longlong *)(lVar7 + 0x18 + uVar10 * 8);
        *(float *)(local_68 + 0x2c) = *(float *)(local_68 + 0x2c) - fVar14;
        uVar10 = uVar10 + 4;
      } while ((uVar1 & 0xfffffffc) != (uint)uVar10);
    }
    if (uVar9 != 0) {
      uVar10 = uVar10 & 0xffffffff;
      do {
        local_68 = *(longlong *)(lVar7 + uVar10 * 8);
        *(float *)(local_68 + 0x2c) = *(float *)(local_68 + 0x2c) - fVar14;
        uVar10 = uVar10 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  local_48 = 0;
  iStack_4c = 0;
  local_60[0] = '\0';
  local_50 = (int)uVar10;
  FUN_006106b0();
LAB_00608c8b:
  plVar3 = (longlong *)unaff_RDI[0x3b];
  if (plVar3 != (longlong *)0x0) {
    FUN_00d23310();
    local_38[0] = local_60[0];
    pcVar8 = local_38;
    if (local_60[0] != '\0') {
      pcVar8 = local_60;
    }
    *pcVar8 = '\0';
    if ((local_60[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d23310();
    pcVar8 = local_60;
    if (local_60[0] == '\0') {
      pcVar8 = local_40;
    }
    local_40[0] = local_60[0];
    *pcVar8 = '\0';
    if ((local_60[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar3 + 0x998))();
    if ((local_40[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  plVar3 = (longlong *)unaff_RDI[0x3a];
  if (plVar3 != (longlong *)0x0) {
    FUN_00d23340();
    local_38[0] = local_60[0];
    pcVar8 = local_38;
    if (local_60[0] != '\0') {
      pcVar8 = local_60;
    }
    *pcVar8 = '\0';
    if ((local_60[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d23340();
    pcVar8 = local_60;
    if (local_60[0] == '\0') {
      pcVar8 = local_40;
    }
    local_40[0] = local_60[0];
    *pcVar8 = '\0';
    if ((local_60[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar3 + 0x998))();
    if ((local_40[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  if (unaff_RDI[0x39] != 0) {
    if (*(int *)(unaff_RDI[0x32] + 0xc) == *(int *)(unaff_RDI[0x31] + 0xc)) {
      FUN_01e40eb0();
      if ((local_60[0] != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (local_68 != 0) {
        (**(code **)(*(longlong *)unaff_RDI[0x39] + 0x478))();
      }
    }
    else {
      FUN_01e40eb0();
      if ((local_60[0] != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (local_68 == 0) {
        lVar7 = unaff_RDI[0x39];
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*unaff_RDI + 0x450))();
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  if ((bVar5) && (local_70 != 0)) {
    FUN_00d50b20();
  }
  return;
}


