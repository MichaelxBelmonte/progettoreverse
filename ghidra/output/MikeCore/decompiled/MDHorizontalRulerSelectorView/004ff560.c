// Function: FUN_004ff560
// Address: 004ff560
// Size: 1562 bytes
// Class: MDHorizontalRulerSelectorView
// String references:
//   "MDHorizontalRulerSelectorView"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ff560(void)

{
  longlong *plVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  longlong *unaff_RDI;
  longlong **pplVar5;
  float fVar6;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar7 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 in_XMM1 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 local_78 [16];
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  longlong *local_38;
  char local_30;
  
  FUN_01f27fe0();
  bVar2 = (**(code **)(*local_38 + 0x450))();
  *(byte *)((longlong)unaff_RDI + 0x19c) = bVar2 ^ 1;
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x49] != 0) {
    unaff_RDI[0x49] = 0;
    FUN_00d50b20();
  }
  if ((int)unaff_RDI[0x35] != 0) {
    return;
  }
  FUN_0197c740();
  pplVar5 = &local_38;
  FUN_01d98320();
  plVar1 = local_38;
  FUN_00275460();
  if (plVar1 == (longlong *)0x0) {
LAB_004ff61b:
    pplVar5 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_004ff61b;
  }
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  auVar9 = in_XMM1;
  if (plVar1 != (longlong *)0x0) {
    FUN_01e3f820();
    auVar9 = in_XMM1;
    (**(code **)(*(longlong *)unaff_RDI[0x2b] + 0x4d8))();
    auVar7 = auVar9;
    FUN_01e3f820();
    if ((longlong *)unaff_RDI[0x2a] != (longlong *)0x0) {
      (**(code **)(*(longlong *)unaff_RDI[0x2a] + 0x4d8))();
    }
    auVar8 = blendps(auVar9,in_XMM1,0xd);
    (**(code **)(*(longlong *)unaff_RDI[0x2b] + 0x4d0))();
    local_78._0_8_ = (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x4d8))();
    local_78._8_8_ = extraout_XMM0_Qb;
    auVar9 = auVar8;
    FUN_01d97ec0();
    (**(code **)(*local_38 + 0x4d8))();
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_58 = auVar7._0_4_;
    fStack_54 = auVar7._4_4_;
    fStack_50 = auVar7._8_4_;
    fStack_4c = auVar7._12_4_;
    local_58 = local_58 - in_XMM1._0_4_;
    fStack_54 = fStack_54 - in_XMM1._4_4_;
    fStack_50 = fStack_50 - in_XMM1._8_4_;
    fStack_4c = fStack_4c - in_XMM1._12_4_;
    local_88 = auVar9._0_4_;
    fStack_84 = auVar9._4_4_;
    fStack_80 = auVar9._8_4_;
    fStack_7c = auVar9._12_4_;
    auVar9._0_4_ = local_58 - local_88;
    auVar9._4_4_ = fStack_54 - fStack_84;
    auVar9._8_4_ = fStack_50 - fStack_80;
    auVar9._12_4_ = fStack_4c - fStack_7c;
    auVar9 = blendps(auVar9,auVar8,2);
    auVar7 = blendps(local_78,in_XMM1,0xd);
    (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x4d0))(auVar7._0_8_);
    if (unaff_RDI[0x2e] != 0) {
      FUN_01e3f820();
      auVar9 = blendps(auVar9,in_XMM1,0xd);
      (**(code **)(*(longlong *)unaff_RDI[0x2e] + 0x4e8))();
    }
    if ((longlong *)unaff_RDI[0x2a] != (longlong *)0x0) {
      local_78._0_8_ = (**(code **)(*(longlong *)unaff_RDI[0x2a] + 0x4d8))();
      local_78._8_8_ = extraout_XMM0_Qb_00;
      auVar7 = auVar9;
      FUN_01d97ec0();
      (**(code **)(*local_38 + 0x4d8))();
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_88 = auVar7._0_4_;
      fStack_84 = auVar7._4_4_;
      fStack_80 = auVar7._8_4_;
      fStack_7c = auVar7._12_4_;
      auVar7._0_4_ = local_58 - local_88;
      auVar7._4_4_ = fStack_54 - fStack_84;
      auVar7._8_4_ = fStack_50 - fStack_80;
      auVar7._12_4_ = fStack_4c - fStack_7c;
      auVar9 = blendps(auVar7,auVar9,2);
      auVar7 = blendps(in_XMM1,local_78,2);
      (**(code **)(*(longlong *)unaff_RDI[0x2a] + 0x4d0))(auVar7._0_8_);
    }
    FUN_00d50b20();
  }
  if (unaff_RDI[0x42] != 0) {
    FUN_01e40eb0();
    plVar1 = local_38;
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_004ffdb0();
      FUN_01e40eb0();
      plVar1 = local_38;
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 == unaff_RDI) {
        if ((longlong *)unaff_RDI[0x2b] != (longlong *)0x0) {
          (**(code **)(*(longlong *)unaff_RDI[0x2b] + 0x4d8))();
          fVar6 = (float)FUN_01b2b5d0();
          fVar13 = auVar9._4_4_;
          auVar8._4_4_ = fVar13;
          auVar8._0_4_ = fVar13;
          auVar8._8_4_ = auVar9._12_4_;
          auVar8._12_4_ = auVar9._12_4_;
          auVar10._4_12_ = auVar8._4_12_;
          auVar10._0_4_ = fVar13 - fVar6;
          auVar9 = insertps(auVar9,auVar10,0x10);
          (**(code **)(*(longlong *)unaff_RDI[0x2b] + 0x4d0))();
          FUN_01cf5a00();
        }
        (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x4d8))();
        fVar6 = (float)FUN_01b2b5d0();
        fVar13 = auVar9._4_4_;
        auVar11._4_4_ = fVar13;
        auVar11._0_4_ = fVar13;
        auVar11._8_4_ = auVar9._12_4_;
        auVar11._12_4_ = auVar9._12_4_;
        auVar12._4_12_ = auVar11._4_12_;
        auVar12._0_4_ = fVar13 - fVar6;
        insertps(auVar9,auVar12,0x10);
        (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x4d0))();
        FUN_01cf5a00();
      }
    }
  }
  FUN_01d97e80();
  plVar1 = local_38;
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_01d97e80();
    FUN_01d92440();
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01d97ec0();
  plVar1 = local_38;
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_01d97ec0();
    FUN_01d92440();
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(unaff_RDI[0x3e] + 0x18))();
  FUN_01d97870();
  plVar1 = local_38;
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_01d97870();
    FUN_01cf5a00();
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  pplVar5 = &local_38;
  FUN_01d9ad00();
  plVar1 = local_38;
  if ((DAT_026d8110 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_0270a8a8 = FUN_0006d940();
    _DAT_0270a890 = "MDHorizontalRulerSelectorView";
    _DAT_0270a898 = 0x150;
    _DAT_0270a8a0 = FUN_000748e0;
    _DAT_0270a8b0 = 0;
    uRam000000000270a8b8 = 0;
    _DAT_0270a8c0 = 0;
    _DAT_0270a938 = 0;
    uRam000000000270a940 = 0;
    _DAT_0270a948 = 0;
    DAT_0270a94a = 1;
    _DAT_0270a8c8 = 0;
    uRam000000000270a8d0 = 0;
    _DAT_0270a8d8 = 0;
    uRam000000000270a8e0 = 0;
    _DAT_0270a8e8 = 0;
    uRam000000000270a8f0 = 0;
    _DAT_0270a8f8 = 0;
    uRam000000000270a900 = 0;
    _DAT_0270a908 = 0;
    uRam000000000270a910 = 0;
    _DAT_0270a918 = 0;
    uRam000000000270a920 = 0;
    _DAT_0270a928 = 0;
    uRam000000000270a930 = 0;
    DAT_0270a953 = 0;
    _DAT_0270a94b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_004ffa5a;
  }
  pplVar5 = (longlong **)&DAT_02802688;
LAB_004ffa5a:
  plVar1 = *pplVar5;
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_01d9ad00();
    (**(code **)(*local_38 + 0x918))();
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}


