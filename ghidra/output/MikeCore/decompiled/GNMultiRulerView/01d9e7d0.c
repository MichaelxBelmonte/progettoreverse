// Function: FUN_01d9e7d0
// Address: 01d9e7d0
// Size: 4954 bytes
// Class: GNMultiRulerView


/* WARNING: Removing unreachable block (ram,0x01d9f8a2) */
/* WARNING: Removing unreachable block (ram,0x01d9f8ae) */
/* WARNING: Removing unreachable block (ram,0x01d9f5b8) */
/* WARNING: Removing unreachable block (ram,0x01d9f5c4) */
/* WARNING: Removing unreachable block (ram,0x01d9f3af) */
/* WARNING: Removing unreachable block (ram,0x01d9f3bb) */
/* WARNING: Removing unreachable block (ram,0x01d9fa75) */
/* WARNING: Removing unreachable block (ram,0x01d9fa81) */
/* WARNING: Type propagation algorithm not settling */

void FUN_01d9e7d0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *unaff_RDI;
  longlong *plVar13;
  bool bVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar22;
  undefined4 in_XMM1_Dc;
  undefined4 uVar23;
  undefined4 in_XMM1_Dd;
  undefined1 auVar21 [16];
  longlong local_78;
  char local_70;
  longlong *local_48;
  char local_40;
  
  fVar22 = (float)((ulonglong)param_2 >> 0x20);
  fVar20 = (float)param_2;
  (**(code **)(*unaff_RDI + 0x640))();
  fVar15 = (float)(**(code **)(*local_48 + 0x598))();
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x928))();
  if ((DAT_028b8980 == (longlong *)0x0) || (DAT_028b8989 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b8980 == (longlong *)0x0) {
      plVar10 = (longlong *)FUN_00e8fc40();
      FUN_00152930();
      (**(code **)(*plVar10 + 0x18))();
      if (DAT_028b8980 == plVar10) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
        bVar14 = DAT_028b8980 != (longlong *)0x0;
        DAT_028b8980 = plVar10;
        if (bVar14) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b8988 == '\0') {
        DAT_028b8988 = '\x01';
        FUN_00e8cb90();
      }
      if (!bVar6) {
        FUN_00d50b20();
      }
      FUN_01cfbee0();
      if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_01d4eaa0();
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52700();
      FUN_01d52740();
      FUN_01d48b40();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      FUN_01cfbee0();
      if (local_70 == '\0') {
        if (local_78 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      FUN_01d488d0();
      if (local_78 != 0) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      (**(code **)(*local_48 + 0x550))();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      (**(code **)(*local_48 + 0x4d8))();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      (**(code **)(*local_48 + 0x4e8))();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      (**(code **)(*local_48 + 0x4e8))();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      (**(code **)(*local_48 + 0x4e8))();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      (**(code **)(*local_48 + 0x4e8))();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      fVar22 = 0.0;
      in_XMM1_Dc = 0;
      in_XMM1_Dd = 0;
      fVar20 = DAT_023b160c;
      (**(code **)(*local_48 + 0x4e8))();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      (**(code **)(*local_48 + 0x558))();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      (**(code **)(*local_48 + 0x518))();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      (**(code **)(*local_48 + 0x560))();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52770();
      DAT_028b8989 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b8989 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028b8990 == (longlong *)0x0) || (DAT_028b8999 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b8990 == (longlong *)0x0) {
      plVar10 = (longlong *)FUN_00e8fc40();
      FUN_00152930();
      (**(code **)(*plVar10 + 0x18))();
      if (DAT_028b8990 == plVar10) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
        bVar14 = DAT_028b8990 != (longlong *)0x0;
        DAT_028b8990 = plVar10;
        if (bVar14) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b8998 == '\0') {
        DAT_028b8998 = '\x01';
        FUN_00e8cb90();
      }
      if (!bVar6) {
        FUN_00d50b20();
      }
      FUN_01cfbee0();
      if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_01d4eaa0();
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52700();
      FUN_01d52740();
      FUN_01d48b40();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      FUN_01cfbee0();
      if (local_70 == '\0') {
        if (local_78 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      FUN_01d488d0();
      if (local_78 != 0) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      (**(code **)(*local_48 + 0x550))();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      (**(code **)(*local_48 + 0x4d8))();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      (**(code **)(*local_48 + 0x4e8))();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      (**(code **)(*local_48 + 0x4e8))();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      (**(code **)(*local_48 + 0x4e8))();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      (**(code **)(*local_48 + 0x4e8))();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      fVar22 = 0.0;
      in_XMM1_Dc = 0;
      in_XMM1_Dd = 0;
      fVar20 = DAT_023b36b0;
      (**(code **)(*local_48 + 0x4e8))();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      (**(code **)(*local_48 + 0x558))();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      (**(code **)(*local_48 + 0x518))();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      (**(code **)(*local_48 + 0x560))();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52770();
      DAT_028b8999 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b8999 = '\x01';
      FUN_00e8cb70();
    }
  }
  plVar10 = (longlong *)unaff_RDI[0x28];
  plVar13 = local_48;
  if (plVar10 == (longlong *)0x0) {
    bVar6 = false;
    plVar11 = (longlong *)0x0;
    bVar14 = false;
    plVar13 = (longlong *)0x0;
  }
  else {
    fVar19 = fVar20;
    fVar20 = fVar22;
    uVar23 = in_XMM1_Dc;
    in_XMM1_Dc = in_XMM1_Dd;
    (**(code **)(*plVar10 + 0x4d8))();
    plVar11 = (longlong *)FUN_00e8fc40();
    FUN_0006daf0();
    (**(code **)(*plVar11 + 0x18))();
    auVar21._4_4_ = fVar20;
    auVar21._0_4_ = fVar20;
    auVar21._8_4_ = in_XMM1_Dc;
    auVar21._12_4_ = in_XMM1_Dc;
    auVar16._4_12_ = auVar21._4_12_;
    auVar16._0_4_ = (fVar20 + fVar20) - fVar15;
    auVar5._4_4_ = fVar20;
    auVar5._0_4_ = fVar19;
    auVar5._8_4_ = uVar23;
    auVar5._12_4_ = in_XMM1_Dc;
    auVar21 = blendps(auVar5,auVar16,1);
    (**(code **)(*plVar11 + 0x4d0))(1,auVar21._0_8_);
    FUN_01d9e650();
    lVar1 = DAT_026de630;
    if (local_48 == (longlong *)0x0) {
      bVar6 = true;
      bVar8 = false;
      bVar7 = false;
      bVar9 = false;
      bVar14 = false;
      plVar13 = (longlong *)0x0;
    }
    else if (local_40 == '\0') {
      FUN_00d50b00();
      bVar8 = true;
      bVar7 = true;
      bVar6 = false;
      bVar9 = true;
      bVar14 = true;
      lVar1 = DAT_026de630;
    }
    else {
      bVar6 = false;
      bVar8 = true;
      bVar7 = true;
      bVar9 = true;
      bVar14 = true;
    }
    DAT_026de630 = lVar1;
    if (lVar1 != 0) {
      FUN_00d50b00();
      bVar7 = bVar8;
      bVar14 = bVar9;
    }
    (**(code **)(*plVar13 + 0xa10))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    plVar12 = DAT_028b8980;
    if (DAT_028b8980 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    FUN_01cef3b0();
    if (plVar12 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar13 + 0x4d0))();
    lVar1 = unaff_RDI[0x27];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar13 + 0xa20))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar11 + 0x450))();
    FUN_01d9e650();
    lVar1 = DAT_027f1680;
    if (local_48 == plVar13) {
      if (bVar6) {
        bVar14 = true;
        if (local_40 == '\0') {
          FUN_00d50b00();
          lVar1 = DAT_027f1680;
        }
      }
      else if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
        lVar1 = DAT_027f1680;
      }
    }
    else if (local_40 == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      if (bVar7) {
        FUN_00d50b20();
        bVar14 = true;
        lVar1 = DAT_027f1680;
        plVar13 = local_48;
      }
      else {
        lVar1 = DAT_027f1680;
        plVar13 = local_48;
        bVar14 = true;
      }
    }
    else {
      plVar13 = local_48;
      bVar14 = true;
      if (bVar7) {
        FUN_00d50b20();
        lVar1 = DAT_027f1680;
        bVar14 = true;
      }
    }
    DAT_027f1680 = lVar1;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar13 + 0xa10))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    plVar12 = DAT_028b8990;
    if (DAT_028b8990 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    FUN_01cef3b0();
    if (plVar12 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    lVar1 = unaff_RDI[0x27];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar13 + 0xa20))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    auVar2._4_4_ = fVar20;
    auVar2._0_4_ = fVar20 - fVar15;
    auVar2._8_4_ = in_XMM1_Dc;
    auVar2._12_4_ = in_XMM1_Dc;
    auVar21 = blendps(ZEXT816(0),auVar2,1);
    fVar22 = fVar20;
    in_XMM1_Dd = in_XMM1_Dc;
    (**(code **)(*plVar13 + 0x4d0))(auVar21._0_8_);
    (**(code **)(*plVar11 + 0x450))();
    FUN_01d9ad20();
    bVar6 = true;
  }
  if ((longlong *)unaff_RDI[0x29] == (longlong *)0x0) goto LAB_01d9faa6;
  (**(code **)(*(longlong *)unaff_RDI[0x29] + 0x4d8))();
  plVar12 = (longlong *)FUN_00e8fc40();
  FUN_0006daf0();
  (**(code **)(*plVar12 + 0x18))();
  if (plVar12 == plVar11) {
    plVar12 = plVar11;
    if (plVar10 == (longlong *)0x0) {
      bVar6 = true;
    }
    else {
      FUN_00d50b20();
    }
  }
  else {
    bVar6 = true;
    if (plVar10 != (longlong *)0x0 && plVar11 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  auVar3._4_4_ = fVar22;
  auVar3._0_4_ = fVar20;
  auVar3._8_4_ = in_XMM1_Dc;
  auVar3._12_4_ = in_XMM1_Dd;
  auVar17._4_12_ = auVar3._4_12_;
  auVar17._0_4_ = ((fVar20 + fVar20) - fVar15) + DAT_02390d00;
  insertps(auVar3,auVar17,0x10);
  (**(code **)(*plVar12 + 0x4d0))();
  FUN_01d9e650();
  if (local_48 == plVar13) {
    lVar1 = DAT_026de648;
    if ((bVar14) || (local_48 == (longlong *)0x0)) {
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
        lVar1 = DAT_026de648;
      }
    }
    else {
      bVar14 = true;
      if (local_40 == '\0') {
        FUN_00d50b00();
        lVar1 = DAT_026de648;
      }
    }
  }
  else if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    if ((!bVar14) || (plVar13 == (longlong *)0x0)) goto LAB_01d9f72f;
    FUN_00d50b20();
    plVar13 = local_48;
    lVar1 = DAT_026de648;
    bVar14 = true;
  }
  else if ((bVar14) && (plVar13 != (longlong *)0x0)) {
    FUN_00d50b20();
    plVar13 = local_48;
    lVar1 = DAT_026de648;
    bVar14 = true;
  }
  else {
LAB_01d9f72f:
    plVar13 = local_48;
    lVar1 = DAT_026de648;
    bVar14 = true;
  }
  DAT_026de648 = lVar1;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar13 + 0xa10))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  plVar10 = DAT_028b8980;
  if (DAT_028b8980 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  FUN_01cef3b0();
  if (plVar10 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar13 + 0x4d0))();
  lVar1 = unaff_RDI[0x27];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar13 + 0xa20))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar12 + 0x450))();
  FUN_01d9e650();
  if (local_48 == plVar13) {
    if (bVar14) {
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (local_40 == '\0') {
      FUN_00d50b00();
    }
  }
  else if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    plVar13 = local_48;
    if (bVar14) {
      FUN_00d50b20();
    }
  }
  else {
    plVar13 = local_48;
    if (bVar14) {
      FUN_00d50b20();
    }
  }
  lVar1 = DAT_027f1690;
  if (DAT_027f1690 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar13 + 0xa10))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  plVar10 = DAT_028b8990;
  if (DAT_028b8990 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  FUN_01cef3b0();
  if (plVar10 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  lVar1 = unaff_RDI[0x27];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar13 + 0xa20))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  auVar4._4_4_ = fVar22;
  auVar4._0_4_ = fVar20;
  auVar4._8_4_ = in_XMM1_Dc;
  auVar4._12_4_ = in_XMM1_Dd;
  auVar18._4_12_ = auVar4._4_12_;
  auVar18._0_4_ = fVar20 - fVar15;
  auVar21 = insertps(auVar18,auVar18,0x1d);
  (**(code **)(*plVar13 + 0x4d0))(auVar21._0_8_);
  (**(code **)(*plVar12 + 0x450))();
  bVar14 = true;
  FUN_01d9ab80();
  plVar11 = plVar12;
LAB_01d9faa6:
  if ((bVar6) && (plVar11 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar14) && (plVar13 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


