// Function: FUN_01cf41d0
// Address: 01cf41d0
// Size: 1104 bytes
// Class: GNClipView


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01cf41d0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  char cVar8;
  float *pfVar9;
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar14;
  undefined8 uVar13;
  float extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  float extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined8 in_XMM1_Qb;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined1 local_88 [8];
  float fStack_80;
  float fStack_7c;
  longlong *local_68;
  char local_60;
  longlong local_40;
  char local_38;
  longlong *local_30;
  char local_28;
  
  local_88 = (undefined1  [8])FUN_01e3f820();
  fVar14 = (float)((ulonglong)local_88 >> 0x20);
  fVar11 = SUB84(local_88,0);
  fStack_80 = extraout_XMM0_Dc;
  fStack_7c = extraout_XMM0_Dd;
  local_98 = (float)param_2;
  fStack_94 = (float)((ulonglong)param_2 >> 0x20);
  fStack_90 = (float)in_XMM1_Qb;
  fStack_8c = (float)((ulonglong)in_XMM1_Qb >> 0x20);
  switch(unaff_ESI) {
  case 0:
    pfVar9 = (float *)((longlong)unaff_RDI + 0x164);
    break;
  case 1:
    pfVar9 = (float *)((longlong)unaff_RDI + 0x16c);
    break;
  case 2:
    pfVar9 = (float *)(unaff_RDI + 0x2d);
    break;
  case 3:
    pfVar9 = (float *)(unaff_RDI + 0x2e);
    break;
  default:
    return local_88;
  }
  if ((*pfVar9 == 0.0) && (!NAN(*pfVar9))) {
    return local_88;
  }
  (**(code **)(*unaff_RDI + 0x640))();
  uVar13 = (**(code **)(*local_30 + 0x580))();
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x640))();
  fVar12 = (float)(**(code **)(*local_30 + 0x578))();
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  switch(unaff_ESI) {
  case 0:
    (**(code **)(*unaff_RDI + 0x7b8))();
    cVar8 = FUN_01d95200();
    if (cVar8 == '\0') {
      bVar10 = false;
    }
    else {
      (**(code **)(*unaff_RDI + 0x7b8))();
      FUN_01d97870();
      bVar10 = local_68 == unaff_RDI;
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    auVar5._4_4_ = fStack_94;
    auVar5._0_4_ = fStack_94 + DAT_02390d34;
    auVar5._8_4_ = fStack_8c;
    auVar5._12_4_ = fStack_8c;
    auVar15 = insertps(_DAT_023b1630,auVar5,0x10);
    local_88._4_4_ = fVar14 + _UNK_023b5de4;
    local_88._0_4_ = fVar11 + _DAT_023b5de0;
    if (bVar10) {
      auVar6._4_4_ = fStack_94;
      auVar6._0_4_ = fStack_94 + DAT_02390d34 + fVar12;
      auVar6._8_4_ = fStack_8c;
      auVar6._12_4_ = fStack_8c;
      insertps(auVar15,auVar6,0x10);
    }
    break;
  case 1:
    (**(code **)(*unaff_RDI + 0x7b8))();
    cVar8 = FUN_01d951e0();
    if (cVar8 == '\0') {
      bVar10 = false;
    }
    else {
      (**(code **)(*unaff_RDI + 0x7b8))();
      FUN_01d97870();
      bVar10 = local_68 == unaff_RDI;
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    auVar7._8_4_ = fStack_90;
    auVar7._0_8_ = param_2;
    auVar7._12_4_ = fStack_8c;
    auVar15 = blendps(auVar7,_DAT_023b1620,0xe);
    auVar4._4_4_ = fVar14;
    auVar4._0_4_ = fVar14 + DAT_02390d00;
    auVar4._8_4_ = extraout_XMM0_Dd;
    auVar4._12_4_ = extraout_XMM0_Dd;
    auVar16 = insertps(_local_88,auVar4,0x10);
    local_88 = auVar16._0_8_;
    goto joined_r0x01cf4551;
  case 2:
    (**(code **)(*unaff_RDI + 0x7b8))();
    cVar8 = FUN_01d95200();
    if (cVar8 == '\0') {
      bVar10 = false;
    }
    else {
      (**(code **)(*unaff_RDI + 0x7b8))();
      FUN_01d97870();
      bVar10 = local_68 == unaff_RDI;
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_88._4_4_ = fVar14 + fStack_94 + _UNK_023b5574;
    local_88._0_4_ = fVar11 + local_98 + _DAT_023b5570;
    auVar2._4_4_ = fStack_94;
    auVar2._0_4_ = fStack_94 + DAT_02390d34;
    auVar2._8_4_ = fStack_8c;
    auVar2._12_4_ = fStack_8c;
    auVar15 = insertps(_DAT_023b1630,auVar2,0x10);
    if (bVar10) {
      auVar3._4_4_ = fStack_94;
      auVar3._0_4_ = fStack_94 + DAT_02390d34 + fVar12;
      auVar3._8_4_ = fStack_8c;
      auVar3._12_4_ = fStack_8c;
      insertps(auVar15,auVar3,0x10);
    }
    break;
  case 3:
    (**(code **)(*unaff_RDI + 0x7b8))();
    cVar8 = FUN_01d951e0();
    if (cVar8 == '\0') {
      bVar10 = false;
    }
    else {
      (**(code **)(*unaff_RDI + 0x7b8))();
      FUN_01d97870();
      bVar10 = local_68 == unaff_RDI;
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    auVar16._8_4_ = fStack_90;
    auVar16._0_8_ = param_2;
    auVar16._12_4_ = fStack_8c;
    auVar15._4_4_ = fVar14 + fStack_94;
    auVar15._0_4_ = fVar11 + local_98;
    auVar15._8_4_ = extraout_XMM0_Dc + fStack_90;
    auVar15._12_4_ = extraout_XMM0_Dd + fStack_8c;
    auVar15 = blendps(_local_88,auVar15,2);
    local_88 = auVar15._0_8_;
    auVar15 = blendps(auVar16,_DAT_023b1620,0xe);
joined_r0x01cf4551:
    if (bVar10) {
      auVar1._4_4_ = (int)((ulonglong)uVar13 >> 0x20);
      auVar1._0_4_ = (float)uVar13 + local_98;
      auVar1._8_4_ = extraout_XMM0_Dc_00;
      auVar1._12_4_ = extraout_XMM0_Dd_00;
      blendps(auVar15,auVar1,1);
    }
  }
  return local_88;
}


