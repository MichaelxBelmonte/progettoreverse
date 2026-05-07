// Reconstructed implementation of MDHorizontalRulerSelectorView
// From MikeCore binary — reverse-engineered pseudocode

#include "MDHorizontalRulerSelectorView.h"

// ============================================================
// @00500000 — 2044 bytes
// ============================================================

undefined8 * FUN_00500000(void)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *unaff_RDI;
  int iVar3;
  longlong lVar4;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  longlong local_40;
  char local_38;
  
  FUN_0027c9f0();
  lVar4 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_60 = lVar4;
  plVar2 = (longlong *)FUN_00e8fc40();
  FUN_001d7da0();
  (**(code **)(*plVar2 + 0x18))();
  iVar3 = 0;
  local_48 = plVar2;
  do {
    lVar4 = DAT_02709e08;
    if (DAT_02709e08 != 0) {
      FUN_00d50b00();
    }
    local_f0 = lVar4;
    local_e8 = '\x01';
    FUN_01d5eb20(iVar3,&local_f0);
    lVar4 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_01d65230();
      local_d0 = local_40;
      local_c8 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_c8 = '\x01';
      FUN_01d65460();
      local_c0 = local_58;
      local_b8 = 0;
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_b8 = '\x01';
      FUN_01d5d9b0();
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d5e230();
      FUN_01d654a0();
      FUN_01d65490();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 3);
  FUN_01d5dc80();
  lVar4 = 0;
  do {
    lVar1 = DAT_02709e10;
    if (DAT_02709e10 != 0) {
      FUN_00d50b00();
    }
    local_e0 = lVar1;
    local_d8 = '\x01';
    FUN_01d5eb20(*(undefined4 *)((longlong)&DAT_023b4a50 + lVar4),&local_e0);
    lVar1 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_01d65230();
      local_b0 = local_40;
      local_a8 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_a8 = '\x01';
      FUN_01d65460();
      local_a0 = local_58;
      local_98 = 0;
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_98 = '\x01';
      FUN_01d5d9b0();
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d5e230();
      FUN_01d654a0();
      FUN_01d65490();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0x14);
  FUN_01d5dc80();
  lVar4 = local_60;
  local_90 = DAT_02709e18;
  if (DAT_02709e18 != 0) {
    FUN_00d50b00();
  }
  local_88 = '\x01';
  FUN_01d5eb20(0,&local_90);
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_01d65230();
    local_80 = local_40;
    local_78 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_78 = '\x01';
    FUN_01d65460();
    local_70 = local_58;
    local_68 = 0;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_68 = '\x01';
    FUN_01d5d9b0();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d5e230();
    FUN_01d654a0();
    FUN_01d65490();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  lVar1 = DAT_02709e18;
  if (DAT_02709e18 != 0) {
    FUN_00d50b00();
  }
  local_90 = lVar1;
  local_88 = '\x01';
  FUN_01d5eb20(1,&local_90);
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_01d65230();
    local_80 = local_40;
    local_78 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_78 = '\x01';
    FUN_01d65460();
    local_70 = local_58;
    local_68 = 0;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_68 = '\x01';
    FUN_01d5d9b0();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d5e230();
    FUN_01d654a0();
    FUN_01d65490();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  *unaff_RDI = local_48;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @004ff560 — 1562 bytes
// str: ""MDHorizontalRulerSelectorView""
// ============================================================

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




// ============================================================
// @00500e20 — 1249 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00500e20(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_38;
  char local_30;
  
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_0006daf0();
  *(undefined4 *)(plVar4 + 0x27) = 0;
  plVar4[0x2e] = 0;
  *(undefined4 *)(plVar4 + 0x2f) = 0;
  plVar4[0x30] = 0;
  *(undefined1 *)(plVar4 + 0x31) = 0;
  plVar4[0x28] = 0;
  plVar4[0x29] = 0;
  *(undefined4 *)(plVar4 + 0x2a) = 0;
  plVar4[0x2b] = 0;
  plVar4[0x2c] = 0;
  *(undefined8 *)((longlong)plVar4 + 0x165) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x18c) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x194) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x199) = 0;
  plVar4[0x35] = 0;
  plVar4[0x36] = 0;
  plVar4[0x37] = 0;
  plVar4[0x38] = 0;
  *(undefined4 *)((longlong)plVar4 + 500) = 0;
  *(undefined1 *)(plVar4 + 0x3f) = 0;
  plVar4[0x43] = 0;
  plVar4[0x3c] = 0;
  plVar4[0x3d] = 0;
  plVar4[0x3a] = 0;
  plVar4[0x3b] = 0;
  *(undefined1 *)(plVar4 + 0x3e) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x1fc) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x204) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x20c) = 0;
  *plVar4 = (longlong)&DAT_02687f80;
  plVar4[2] = (longlong)&DAT_02688a68;
  plVar4[0x39] = (longlong)&DAT_02688aa8;
  plVar4[0x44] = 0;
  *(undefined1 *)(plVar4 + 0x45) = 0;
  plVar4[0x46] = 0;
  *(undefined1 *)(plVar4 + 0x47) = 0;
  plVar4[0x48] = 0;
  *(undefined1 *)(plVar4 + 0x49) = 0;
  *(undefined4 *)((longlong)plVar4 + 0x24c) = 0;
  *(undefined1 *)(plVar4 + 0x4a) = 0;
  (*DAT_02687f98)();
  FUN_01cef4c0();
  (**(code **)(*unaff_RSI + 0xa20))();
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  FUN_01d778e0();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d7ac40();
  FUN_01cef4e0(DAT_023b1d84);
  lVar2 = DAT_02709e20;
  if (DAT_02709e20 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar4 + 0xa10))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_01cef490();
  lVar2 = DAT_02709df8;
  if (DAT_02709df8 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_02709e00;
  if (DAT_02709e00 != 0) {
    FUN_00d50b00();
  }
  local_a8 = lVar3;
  local_a0 = '\x01';
  local_98 = 0;
  local_90 = '\0';
  FUN_00d31230(&local_98,&local_a8);
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  (**(code **)(*plVar4 + 0x6a8))();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02709e28;
  if (DAT_02709e28 != 0) {
    FUN_00d50b00();
  }
  local_88 = lVar2;
  local_80 = '\x01';
  FUN_01d51a40();
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  FUN_01cef3b0();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  FUN_01cef4e0(_DAT_023b4a20);
  FUN_00d50b00();
  (**(code **)(*plVar4 + 0xa20))();
  if (unaff_RSI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  plVar1 = (longlong *)unaff_RSI[0x4a];
  if (plVar1 != plVar4) {
    FUN_00d50b00();
    unaff_RSI[0x4a] = (longlong)plVar4;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  *unaff_RDI = plVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @00501710 — 557 bytes
// ============================================================

void FUN_00501710(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *unaff_RDI;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  FUN_0197a540();
  (**(code **)(*unaff_RDI + 0x9f8))();
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_0006daf0();
  *puVar4 = &DAT_024c4260;
  puVar4[2] = &DAT_024c4b98;
  puVar4[0x27] = 0;
  puVar4[0x28] = 0;
  puVar4[0x29] = 0;
  (*DAT_024c4278)();
  FUN_01d9ac40();
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_0006daf0();
  *puVar4 = &DAT_024dc470;
  puVar4[2] = &DAT_024dcdc0;
  puVar4[0x27] = 0;
  puVar4[0x28] = 0;
  puVar4[0x29] = 0;
  puVar4[0x2a] = 0;
  (*DAT_024dc488)();
  FUN_01d9ade0();
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_026f6f70;
  plVar1 = (longlong *)unaff_RDI[0x3a];
  if (plVar1 != (longlong *)0x0) {
    if (DAT_026f6f70 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_02709df0;
    if (DAT_02709df0 != 0) {
      FUN_00d50b00();
    }
    local_60 = lVar3;
    local_58 = '\x01';
    local_50 = 0;
    local_48 = '\0';
    FUN_00d31230(&local_50,&local_60);
    local_30 = local_40;
    local_28 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_28 = '\x01';
    (**(code **)(*plVar1 + 0x6a8))();
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*unaff_RDI + 0x928))();
  return;
}




// ============================================================
// @004fc6d0 — 551 bytes
// str: ""MDHorizontalRulerSelectorView""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x004fc804) */
/* WARNING: Removing unreachable block (ram,0x004fc7f6) */
/* WARNING: Removing unreachable block (ram,0x004fc812) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fc6d0(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  
  if ((DAT_026d8110 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
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
  if (DAT_0270a94b == '\0') {
    FUN_000a31d0();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_0050e1c0();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_00072960();
    FUN_00e87920(uVar2,0);
    if (local_178 != 0) {
      FUN_00d50b20();
    }
    if (local_180 != 0) {
      FUN_00d50b20();
    }
    if (local_188 != 0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
    FUN_0006d770();
  }
  return;
}



