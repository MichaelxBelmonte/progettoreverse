// Function: FUN_00701620
// Address: 00701620
// Size: 881 bytes
// Class: MDAudioTrackItem


void FUN_00701620(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  char cVar7;
  int unaff_ESI;
  longlong unaff_RDI;
  longlong **pplVar8;
  undefined8 uVar9;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined1 auVar10 [16];
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined8 extraout_XMM0_Qb_07;
  undefined1 auVar11 [16];
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 in_XMM1_Dc;
  float fVar16;
  undefined4 in_XMM1_Dd;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  longlong *local_78;
  char local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [8];
  undefined8 uStack_30;
  
  uVar15 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar13 = (undefined4)param_2;
  lVar1 = *(longlong *)(unaff_RDI + 0x10);
  if (unaff_ESI == 0) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01bf0f50();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    plVar2 = *(longlong **)(unaff_RDI + 0x10);
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_48 = (**(code **)(*plVar2 + 0x4d8))();
    local_58 = (float)uVar13;
    fStack_54 = (float)uVar15;
    fStack_50 = (float)in_XMM1_Dc;
    fStack_4c = (float)in_XMM1_Dd;
    FUN_00d50b20();
    plVar2 = *(longlong **)(unaff_RDI + 0x10);
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_38 = (undefined1  [8])(**(code **)(*plVar2 + 0x528))();
    uStack_30 = extraout_XMM0_Qb;
    FUN_00d50b20();
    auVar19._4_4_ = fStack_54;
    auVar19._0_4_ = local_58;
    auVar19._8_4_ = fStack_50;
    auVar19._12_4_ = fStack_4c;
    _local_38 = blendps(_local_38,auVar19,2);
    plVar2 = *(longlong **)(unaff_RDI + 0x10);
  }
  else {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01bf0f50();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    plVar2 = *(longlong **)(unaff_RDI + 0x10);
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_48 = (**(code **)(*plVar2 + 0x4d8))();
    local_38._4_4_ = uVar15;
    local_38._0_4_ = uVar13;
    uStack_30._0_4_ = (float)in_XMM1_Dc;
    uStack_30._4_4_ = (float)in_XMM1_Dd;
    FUN_00d50b20();
    plVar2 = *(longlong **)(unaff_RDI + 0x10);
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  fVar12 = (float)local_38._0_4_;
  fVar14 = (float)local_38._4_4_;
  fVar16 = (float)uStack_30;
  fVar17 = uStack_30._4_4_;
  (**(code **)(*plVar2 + 0x4d0))();
  FUN_00d50b20();
  pplVar8 = &local_78;
  FUN_01e40eb0();
  plVar2 = local_78;
  FUN_000b6330();
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x360))();
    cVar7 = FUN_00e85ea0();
    if (cVar7 != '\0') goto LAB_00701702;
  }
  pplVar8 = (longlong **)&DAT_02802688;
LAB_00701702:
  plVar2 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar8 + 1) = 0;
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    local_48 = (**(code **)(*plVar2 + 0x4d8))();
    uVar9 = (**(code **)(*plVar2 + 0x938))();
    local_58 = (float)uVar9;
    fStack_54 = (float)((ulonglong)uVar9 >> 0x20);
    fStack_50 = (float)extraout_XMM0_Qb_00;
    fStack_4c = (float)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
    (**(code **)(*plVar2 + 0x938))();
    local_68._0_4_ = fVar12;
    local_68._4_4_ = fVar14;
    uStack_60._0_4_ = fVar16;
    uStack_60._4_4_ = fVar17;
    uVar9 = (**(code **)(*plVar2 + 0x938))();
    (**(code **)(*plVar2 + 0x938))();
    local_88 = (float)uVar9;
    fStack_84 = (float)((ulonglong)uVar9 >> 0x20);
    fStack_80 = (float)extraout_XMM0_Qb_01;
    fStack_7c = (float)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
    auVar18._0_4_ = local_88 + fVar12 + (float)local_38._0_4_;
    auVar18._4_4_ = fStack_84 + fVar14 + (float)local_38._4_4_;
    auVar18._8_4_ = fStack_80 + fVar16 + (float)uStack_30;
    auVar18._12_4_ = fStack_7c + fVar17 + uStack_30._4_4_;
    auVar4._4_4_ = fStack_54 + local_68._4_4_ + (float)local_38._4_4_;
    auVar4._0_4_ = local_58 + (float)local_68 + (float)local_38._0_4_;
    auVar4._8_4_ = fStack_50 + (float)uStack_60 + (float)uStack_30;
    auVar4._12_4_ = fStack_4c + uStack_60._4_4_ + uStack_30._4_4_;
    auVar19 = blendps(auVar18,auVar4,0xd);
    fVar12 = auVar19._0_4_;
    fVar14 = auVar19._4_4_;
    fVar16 = auVar19._8_4_;
    fVar17 = auVar19._12_4_;
    (**(code **)(*plVar2 + 0x4d0))();
    plVar3 = *(longlong **)(unaff_RDI + 0x10);
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_38 = (undefined1  [8])(**(code **)(*plVar3 + 0x528))();
    uStack_30 = extraout_XMM0_Qb_02;
    FUN_00d50b20();
    local_48 = (**(code **)(*plVar2 + 0x938))();
    uStack_40 = extraout_XMM0_Qb_03;
    (**(code **)(*plVar2 + 0x938))();
    local_58 = fVar12;
    fStack_54 = fVar14;
    fStack_50 = fVar16;
    fStack_4c = fVar17;
    local_68 = (**(code **)(*plVar2 + 0x938))();
    uStack_60 = extraout_XMM0_Qb_04;
    (**(code **)(*plVar2 + 0x938))();
    auVar10._0_4_ = (float)local_68 + fVar12 + (float)local_38._0_4_;
    auVar10._4_4_ = local_68._4_4_ + fVar14 + (float)local_38._4_4_;
    auVar10._8_4_ = (float)uStack_60 + fVar16 + (float)uStack_30;
    auVar10._12_4_ = uStack_60._4_4_ + fVar17 + uStack_30._4_4_;
    auVar5._4_4_ = local_48._4_4_ + fStack_54 + (float)local_38._4_4_;
    auVar5._0_4_ = (float)local_48 + local_58 + (float)local_38._0_4_;
    auVar5._8_4_ = (float)uStack_40 + fStack_50 + (float)uStack_30;
    auVar5._12_4_ = uStack_40._4_4_ + fStack_4c + uStack_30._4_4_;
    auVar19 = blendps(auVar10,auVar5,0xd);
    FUN_01e4cf40(auVar19._0_8_);
    plVar3 = *(longlong **)(unaff_RDI + 0x10);
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_38 = (undefined1  [8])(**(code **)(*plVar3 + 0x530))();
    uStack_30 = extraout_XMM0_Qb_05;
    FUN_00d50b20();
    local_48 = (**(code **)(*plVar2 + 0x938))();
    uStack_40 = extraout_XMM0_Qb_06;
    (**(code **)(*plVar2 + 0x938))();
    local_58 = fVar12;
    fStack_54 = fVar14;
    fStack_50 = fVar16;
    fStack_4c = fVar17;
    local_68 = (**(code **)(*plVar2 + 0x938))();
    uStack_60 = extraout_XMM0_Qb_07;
    (**(code **)(*plVar2 + 0x938))();
    auVar11._0_4_ = (float)local_68 + fVar12 + (float)local_38._0_4_;
    auVar11._4_4_ = local_68._4_4_ + fVar14 + (float)local_38._4_4_;
    auVar11._8_4_ = (float)uStack_60 + fVar16 + (float)uStack_30;
    auVar11._12_4_ = uStack_60._4_4_ + fVar17 + uStack_30._4_4_;
    auVar6._4_4_ = local_48._4_4_ + fStack_54 + (float)local_38._4_4_;
    auVar6._0_4_ = (float)local_48 + local_58 + (float)local_38._0_4_;
    auVar6._8_4_ = (float)uStack_40 + fStack_50 + (float)uStack_30;
    auVar6._12_4_ = uStack_40._4_4_ + fStack_4c + uStack_30._4_4_;
    auVar19 = blendps(auVar11,auVar6,0xd);
    (**(code **)(*plVar2 + 0x9b8))(auVar19._0_8_);
    FUN_00d50b20();
  }
  return;
}


