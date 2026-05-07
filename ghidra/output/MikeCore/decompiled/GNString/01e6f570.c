// Function: FUN_01e6f570
// Address: 01e6f570
// Size: 1052 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01e6f86f) */
/* WARNING: Removing unreachable block (ram,0x01e6f87c) */
/* WARNING: Removing unreachable block (ram,0x01e6f62e) */
/* WARNING: Removing unreachable block (ram,0x01e6f637) */
/* WARNING: Removing unreachable block (ram,0x01e6f727) */
/* WARNING: Removing unreachable block (ram,0x01e6f730) */

void FUN_01e6f570(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong *plVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float in_XMM1_Dc;
  float fVar19;
  float fVar20;
  float in_XMM1_Dd;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  longlong local_a8;
  char local_a0;
  longlong *local_50;
  longlong *local_48;
  char local_40;
  
  fVar16 = (float)((ulonglong)param_2 >> 0x20);
  fVar13 = (float)param_2;
  lVar9 = *unaff_RSI;
  lVar1 = unaff_RDI[0x28];
  if (lVar1 != lVar9) {
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    unaff_RDI[0x28] = lVar9;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01e42030();
  if (local_48 == (longlong *)0x0) {
    bVar3 = true;
    plVar6 = (longlong *)0x0;
  }
  else {
    plVar6 = local_48;
    if (local_40 == '\0') {
      FUN_00d50b00();
      bVar3 = false;
    }
    else {
      bVar3 = false;
    }
  }
  FUN_01d8c6e0();
  lVar9 = FUN_01e59910();
  unaff_RDI[0x29] = lVar9;
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar6 + 0x4a0))();
  if (local_a0 == '\0') {
    if (local_a8 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_a0 = '\0';
  }
  FUN_01dcb110();
  local_50 = local_48;
  if (local_48 == (longlong *)0x0) {
    bVar4 = true;
    local_50 = (longlong *)0x0;
  }
  else if (local_40 == '\0') {
    FUN_00d50b00();
    bVar4 = false;
  }
  else {
    bVar4 = false;
  }
  if (local_a8 != 0) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  uVar7 = *(uint *)((longlong)local_50 + 0xc);
  if ((int)uVar7 < 1) {
    bVar5 = false;
    plVar8 = (longlong *)0x0;
  }
  else {
    lVar9 = (ulonglong)uVar7 + 1;
    plVar8 = (longlong *)0x0;
    bVar5 = false;
    do {
      uVar7 = uVar7 - 1;
      plVar2 = *(longlong **)(local_50[2] + (ulonglong)uVar7 * 8);
      if (plVar8 == plVar2) {
        if ((!bVar5) && (plVar8 != (longlong *)0x0)) {
          bVar5 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar5) && (plVar8 != (longlong *)0x0)) {
          FUN_00d50b20();
          bVar5 = true;
          plVar8 = plVar2;
        }
        else {
          bVar5 = true;
          plVar8 = plVar2;
        }
      }
      if ((longlong *)*unaff_RSI != plVar8) {
        FUN_00d21140();
        (**(code **)(*plVar8 + 0x478))();
      }
      lVar9 = lVar9 + -1;
    } while (1 < lVar9);
  }
  uVar10 = FUN_01e3f820();
  fVar14 = fVar13;
  fVar17 = fVar16;
  fVar19 = in_XMM1_Dc;
  fVar21 = in_XMM1_Dd;
  (**(code **)(*(longlong *)*unaff_RSI + 0x4d8))();
  fVar15 = fVar14;
  fVar18 = fVar17;
  fVar20 = fVar19;
  fVar22 = fVar21;
  (**(code **)(*(longlong *)*unaff_RSI + 0x4d8))();
  auVar12._8_8_ = extraout_XMM0_Qb;
  auVar12._0_8_ = uVar10;
  auVar11._0_4_ = fVar14 + (float)uVar10;
  auVar11._4_4_ = fVar17 + (float)((ulonglong)uVar10 >> 0x20);
  auVar11._8_4_ = fVar19 + (float)extraout_XMM0_Qb;
  auVar11._12_4_ = fVar21 + (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
  auVar12 = blendps(auVar11,auVar12,0xd);
  auVar24._4_4_ = fVar16;
  auVar24._0_4_ = fVar13;
  auVar24._8_4_ = in_XMM1_Dc;
  auVar24._12_4_ = in_XMM1_Dd;
  auVar23._0_4_ = fVar13 - fVar15;
  auVar23._4_4_ = fVar16 - fVar18;
  auVar23._8_4_ = in_XMM1_Dc - fVar20;
  auVar23._12_4_ = in_XMM1_Dd - fVar22;
  auVar24 = blendps(auVar23,auVar24,0xd);
  (**(code **)(*unaff_RDI + 0x4d0))(auVar12._0_8_,auVar24._0_4_);
  FUN_00d50b00();
  (**(code **)(*plVar6 + 0x450))();
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar5) && (plVar8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar3) {
    FUN_00d50b20();
  }
  if (!bVar4) {
    FUN_00d50b20();
  }
  return;
}


