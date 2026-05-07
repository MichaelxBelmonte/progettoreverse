// Reconstructed implementation of MDWorkspaceView
// From MikeCore binary — reverse-engineered pseudocode

#include "MDWorkspaceView.h"

// ============================================================
// @003b4560 — 4112 bytes
// str: ""MDWorkspaceView""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x003b45e8) */
/* WARNING: Removing unreachable block (ram,0x003b45f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003b4560(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong **pplVar6;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 in_XMM0_Dc;
  undefined4 extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  float extraout_XMM0_Dc_03;
  undefined4 in_XMM0_Dd;
  undefined4 extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  float extraout_XMM0_Dd_03;
  float fVar12;
  float fVar13;
  undefined4 in_XMM1_Dc;
  float fVar14;
  float fVar15;
  undefined4 in_XMM1_Dd;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar20;
  undefined1 auVar19 [16];
  longlong local_1c8;
  char local_1c0;
  longlong *local_1b8;
  char local_1b0;
  longlong local_1a8;
  char local_1a0;
  longlong *local_198;
  char local_190;
  longlong *local_188;
  char local_180;
  longlong local_178;
  char local_170;
  longlong local_168;
  char local_160;
  longlong local_158;
  char local_150;
  undefined8 local_148;
  float fStack_140;
  float fStack_13c;
  undefined8 local_138;
  float fStack_130;
  float fStack_12c;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  undefined1 local_f8 [8];
  float fStack_f0;
  float fStack_ec;
  longlong *local_e8;
  char local_e0;
  undefined1 local_d8 [8];
  float fStack_d0;
  float fStack_cc;
  longlong *local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  longlong *local_40;
  char local_38;
  
  fStack_d0 = (float)in_XMM1_Dc;
  local_d8 = (undefined1  [8])param_2;
  fStack_cc = (float)in_XMM1_Dd;
  fStack_f0 = (float)in_XMM0_Dc;
  local_f8 = (undefined1  [8])param_1;
  fStack_ec = (float)in_XMM0_Dd;
  FUN_01d48370();
  plVar7 = (longlong *)*unaff_RSI;
  (**(code **)(*unaff_RDI + 0x500))();
  (**(code **)(*plVar7 + 0x390))();
  fVar18 = (float)local_d8._0_4_;
  fVar20 = (float)local_d8._4_4_;
  fVar14 = fStack_d0;
  fVar16 = fStack_cc;
  FUN_01e44a80(local_f8._0_4_);
  FUN_01d48390();
  cVar2 = (**(code **)(*unaff_RDI + 0x988))();
  if (cVar2 == '\0') goto LAB_003b4ab9;
  uVar9 = (**(code **)(*unaff_RDI + 0x640))();
  plVar7 = local_40;
  local_1c8 = DAT_026e41f0;
  if (DAT_026e41f0 != 0) {
    uVar9 = FUN_00d50b00();
  }
  local_1c0 = '\x01';
  (**(code **)(*plVar7 + 0x3b0))(uVar9,&local_1c8);
  plVar7 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
       (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_1c0 != '\0') && (local_1c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_1b8 = plVar7;
  local_1b0 = '\0';
  local_138 = plVar7;
  FUN_01d488d0();
  if ((local_1b0 != '\0') && (local_1b8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar8 = (longlong *)*unaff_RSI;
  FUN_003b3d20();
  local_e8 = local_68;
  local_e0 = 0;
  if ((local_60 == '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  local_e0 = '\x01';
  (**(code **)(*plVar8 + 0x3a8))();
  if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x640))();
  plVar8 = local_40;
  local_1a8 = DAT_026fe4b8;
  if (DAT_026fe4b8 != 0) {
    FUN_00d50b00();
  }
  local_1a0 = '\x01';
  (**(code **)(*plVar8 + 0x3b0))();
  plVar8 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
       (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_1a0 != '\0') && (local_1a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_148 = plVar8;
  (**(code **)(*unaff_RDI + 0x4a0))();
  plVar5 = local_68;
  if (local_60 == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_003b4897;
    }
  }
  else if (local_68 != (longlong *)0x0) {
LAB_003b4897:
    plVar8 = local_148;
    local_60 = '\0';
    local_68 = (longlong *)0x0;
    local_88 = plVar5;
    local_58 = plVar5;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_50._4_4_ = 0;
    while( true ) {
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 1) {
          iVar3 = -local_50._4_4_;
        }
        else {
          iVar3 = (int)local_50 - local_50._4_4_;
          local_50 = CONCAT44(local_50._4_4_,iVar3);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar3 = 0;
          plVar7 = local_138;
        }
        local_50 = CONCAT44(iVar3,(int)local_50);
      }
      lVar4 = (longlong)(int)local_50;
      iVar3 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar3);
      if (*(int *)((longlong)local_58 + 0xc) <= iVar3) break;
      plVar7 = *(longlong **)(local_58[2] + 8 + lVar4 * 8);
      local_68 = plVar7;
      FUN_003b6560();
      pplVar6 = (longlong **)&DAT_02802688;
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar6 = &local_68;
        if (cVar2 == '\0') {
          pplVar6 = (longlong **)&DAT_02802688;
        }
      }
      plVar7 = local_138;
      if (*pplVar6 != (longlong *)0x0) {
        local_f8 = (undefined1  [8])(**(code **)(*local_68 + 0x4d8))();
        fStack_f0 = (float)extraout_XMM0_Dc;
        fStack_ec = (float)extraout_XMM0_Dd;
        local_d8._4_4_ = fVar20;
        local_d8._0_4_ = fVar18;
        fStack_d0 = fVar14;
        fStack_cc = fVar16;
        local_198 = plVar8;
        local_190 = '\0';
        FUN_01d488d0();
        if ((local_190 != '\0') && (local_198 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))(local_f8._0_4_,local_d8._0_4_);
        local_188 = plVar7;
        local_180 = '\0';
        FUN_01d488d0();
        if ((local_180 != '\0') && (local_188 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_d8._0_4_ = (float)local_d8._0_4_ + (float)local_f8._0_4_;
        local_d8._4_4_ = (float)local_d8._4_4_ + (float)local_f8._4_4_;
        fStack_d0 = fStack_d0 + fStack_f0;
        fStack_cc = fStack_cc + fStack_ec;
        (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
        fVar18 = (float)local_d8._4_4_ + DAT_02390d00;
        fVar20 = (float)local_d8._4_4_;
        fVar14 = fStack_cc;
        fVar16 = fStack_cc;
        (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))(local_f8._0_4_);
      }
    }
    FUN_000a9680();
    FUN_00d50b20();
    plVar8 = local_148;
  }
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_003b4ab9:
  uVar9 = (**(code **)(*unaff_RDI + 0x4a0))();
  plVar7 = local_68;
  if (local_60 == '\0') {
    if (local_68 == (longlong *)0x0) {
      return;
    }
    uVar9 = FUN_00d50b00();
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      uVar9 = FUN_00d50b20();
    }
  }
  else if (local_68 == (longlong *)0x0) {
    return;
  }
  local_60 = 0;
  local_68 = (longlong *)0x0;
  local_88 = plVar7;
  local_58 = plVar7;
  local_50._0_4_ = -1;
  local_50._4_4_ = 0;
  local_48 = 0;
LAB_003b4b4b:
  do {
    iVar3 = local_50._4_4_;
    if (local_50._4_4_ != 0) {
      if (local_50._4_4_ < 1) {
        local_50._4_4_ = -local_50._4_4_;
      }
      else {
        local_50._0_4_ = (int)local_50 - local_50._4_4_;
        uVar9 = FUN_00d23690(uVar9,local_50._4_4_);
        local_48 = local_48 + iVar3;
        local_50._4_4_ = 0;
      }
    }
    lVar4 = (longlong)(int)local_50;
    local_50._0_4_ = (int)local_50 + 1;
    if (*(int *)((longlong)local_58 + 0xc) <= (int)local_50) {
      FUN_000a9680();
      FUN_00d50b20();
      return;
    }
    plVar7 = *(longlong **)(local_58[2] + 8 + lVar4 * 8);
    local_68 = plVar7;
    if ((DAT_026fddd0 == '\0') &&
       (iVar3 = ___cxa_guard_acquire(), uVar9 = extraout_XMM0_Da_00, iVar3 != 0)) {
      _DAT_026d9988 = FUN_0006d940();
      _DAT_026d9970 = "MDWorkspaceView";
      _DAT_026d9978 = 0x188;
      _DAT_026d9980 = FUN_000a3150;
      _DAT_026d9990 = 0;
      uRam00000000026d9998 = 0;
      _DAT_026d99a0 = 0;
      _DAT_026d9a18 = 0;
      uRam00000000026d9a20 = 0;
      _DAT_026d9a28 = 0;
      DAT_026d9a2a = 1;
      _DAT_026d99a8 = 0;
      uRam00000000026d99b0 = 0;
      _DAT_026d99b8 = 0;
      uRam00000000026d99c0 = 0;
      _DAT_026d99c8 = 0;
      uRam00000000026d99d0 = 0;
      _DAT_026d99d8 = 0;
      uRam00000000026d99e0 = 0;
      _DAT_026d99e8 = 0;
      uRam00000000026d99f0 = 0;
      _DAT_026d99f8 = 0;
      uRam00000000026d9a00 = 0;
      _DAT_026d9a08 = 0;
      uRam00000000026d9a10 = 0;
      DAT_026d9a33 = 0;
      _DAT_026d9a2b = 0;
      uVar9 = ___cxa_guard_release();
    }
    pplVar6 = (longlong **)&DAT_02802688;
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x360))();
      cVar2 = FUN_00e85ea0();
      pplVar6 = &local_68;
      uVar9 = extraout_XMM0_Da;
      if (cVar2 == '\0') {
        pplVar6 = (longlong **)&DAT_02802688;
      }
    }
    plVar7 = *pplVar6;
    if (*(char *)(pplVar6 + 1) == '\0') goto LAB_003b4bf0;
    *(undefined1 *)(pplVar6 + 1) = 0;
  } while (plVar7 == (longlong *)0x0);
  goto LAB_003b4c01;
LAB_003b4bf0:
  if (plVar7 == (longlong *)0x0) goto LAB_003b4b4b;
  FUN_00d50b00();
LAB_003b4c01:
  cVar2 = (**(code **)(*plVar7 + 0x9a8))();
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*plVar7 + 0x9a0))();
    if (cVar2 == '\0') goto LAB_003b4b40;
    uVar9 = (**(code **)(*unaff_RDI + 0x640))();
    lVar4 = DAT_026fe4b8;
    if (DAT_026fe4b8 != 0) {
      uVar9 = FUN_00d50b00();
    }
    local_168 = lVar4;
    local_160 = '\x01';
    (**(code **)(*local_78 + 0x3b0))(uVar9,&local_168);
    local_a8 = local_40;
    local_a0 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_a0 = '\x01';
    FUN_01d488d0();
    if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_160 != '\0') && (local_168 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d48b40(DAT_02394298);
    plVar8 = (longlong *)*unaff_RSI;
    (**(code **)(*plVar7 + 0x4d8))();
    FUN_00d05530();
    (**(code **)(*plVar8 + 0x3b8))();
    uVar9 = (**(code **)(*unaff_RDI + 0x640))();
    lVar4 = DAT_026e41f0;
    if (DAT_026e41f0 != 0) {
      uVar9 = FUN_00d50b00();
    }
    local_158 = lVar4;
    local_150 = '\x01';
    (**(code **)(*local_78 + 0x3b0))(uVar9,&local_158);
    local_98 = local_40;
    local_90 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_90 = '\x01';
    FUN_01d488d0();
    if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d48b40(DAT_02390124);
    lVar4 = plVar7[0x30];
    if (lVar4 == 0) {
      (**(code **)(*plVar7 + 0x4d8))();
      FUN_01d39800();
      plVar8 = (longlong *)plVar7[0x30];
      plVar5 = plVar8;
      if (plVar8 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (longlong *)0x0) {
            plVar5 = (longlong *)0x0;
            goto LAB_003b50eb;
          }
          FUN_00d50b00();
          plVar8 = (longlong *)plVar7[0x30];
          plVar7[0x30] = (longlong)local_40;
          plVar5 = local_40;
        }
        else {
          local_38 = '\0';
          plVar5 = local_40;
LAB_003b50eb:
          plVar7[0x30] = (longlong)plVar5;
        }
        if (plVar8 != (longlong *)0x0) {
          FUN_00d50b20();
          plVar5 = local_40;
        }
      }
      if ((local_38 != '\0') && (plVar5 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar4 = plVar7[0x30];
      plVar7 = (longlong *)*unaff_RSI;
    }
    else {
      plVar7 = (longlong *)*unaff_RSI;
    }
    if (lVar4 != 0) {
      local_100 = 0;
      FUN_00d50b00();
    }
    local_100 = '\x01';
    local_108 = lVar4;
    (**(code **)(*plVar7 + 0x3a8))();
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    goto LAB_003b4b40;
  }
  uVar10 = (**(code **)(*plVar7 + 0x938))();
  fVar13 = (float)((ulonglong)uVar10 >> 0x20);
  fStack_130 = fVar14;
  fStack_12c = fVar16;
  local_138._0_4_ = fVar18;
  local_138._4_4_ = fVar20;
  local_f8 = (undefined1  [8])FUN_01e3f820();
  fStack_f0 = (float)extraout_XMM0_Dc_01;
  fStack_ec = (float)extraout_XMM0_Dd_01;
  local_d8._4_4_ = fVar20;
  local_d8._0_4_ = fVar18;
  fStack_d0 = fVar14;
  fStack_cc = fVar16;
  local_148 = (longlong *)(**(code **)(*plVar7 + 0x4d8))();
  fStack_140 = extraout_XMM0_Dc_02;
  fStack_13c = extraout_XMM0_Dd_02;
  uVar11 = (**(code **)(*plVar7 + 0x4d8))();
  fVar18 = (float)local_f8._0_4_ + (float)uVar10;
  fVar20 = (float)local_f8._4_4_ + fVar13;
  fVar12 = (float)local_d8._0_4_ - ((float)local_138 + (float)uVar10);
  fVar13 = (float)local_d8._4_4_ - (local_138._4_4_ + fVar13);
  fVar15 = fStack_d0 - (fStack_130 + extraout_XMM0_Dc_00);
  fVar17 = fStack_cc - (fStack_12c + extraout_XMM0_Dd_00);
  auVar19._0_4_ = fVar18 + (float)uVar11;
  auVar19._4_4_ = fVar20 + (float)((ulonglong)uVar11 >> 0x20);
  auVar19._8_4_ = fStack_f0 + extraout_XMM0_Dc_00 + extraout_XMM0_Dc_03;
  auVar19._12_4_ = fStack_ec + extraout_XMM0_Dd_00 + extraout_XMM0_Dd_03;
  auVar1._4_4_ = local_148._4_4_ + fVar20;
  auVar1._0_4_ = (float)local_148 + fVar18;
  auVar1._8_4_ = fStack_140 + fStack_f0 + extraout_XMM0_Dc_00;
  auVar1._12_4_ = fStack_13c + fStack_ec + extraout_XMM0_Dd_00;
  _local_f8 = blendps(auVar19,auVar1,0xd);
  local_d8._4_4_ = fVar13;
  local_d8._0_4_ = fVar12;
  fStack_d0 = fVar15;
  fStack_cc = fVar17;
  local_138 = (longlong *)FUN_00d05530(local_f8._0_4_);
  fVar18 = fVar12;
  fVar20 = fVar13;
  fVar14 = fVar15;
  fVar16 = fVar17;
  FUN_01d48b40(DAT_02394298);
  (**(code **)(*unaff_RDI + 0x640))();
  (**(code **)(*local_78 + 0x4c0))();
  local_c8 = local_40;
  local_c0 = 0;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_c0 = '\x01';
  FUN_01d488d0();
  if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar4 = plVar7[0x2e];
  if (lVar4 == 0) {
    FUN_01d39800((float)local_138);
    plVar8 = (longlong *)plVar7[0x2e];
    plVar5 = plVar8;
    if (plVar8 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == (longlong *)0x0) {
          plVar5 = (longlong *)0x0;
          goto LAB_003b4e95;
        }
        FUN_00d50b00();
        plVar8 = (longlong *)plVar7[0x2e];
        plVar7[0x2e] = (longlong)local_40;
        plVar5 = local_40;
      }
      else {
        local_38 = '\0';
        plVar5 = local_40;
LAB_003b4e95:
        plVar7[0x2e] = (longlong)plVar5;
      }
      if (plVar8 != (longlong *)0x0) {
        FUN_00d50b20();
        plVar5 = local_40;
      }
    }
    if ((local_38 != '\0') && (plVar5 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar4 = plVar7[0x2e];
    plVar8 = (longlong *)*unaff_RSI;
    fVar18 = fVar12;
    fVar20 = fVar13;
    fVar14 = fVar15;
    fVar16 = fVar17;
  }
  else {
    plVar8 = (longlong *)*unaff_RSI;
  }
  if (lVar4 != 0) {
    local_120 = 0;
    FUN_00d50b00();
  }
  local_120 = '\x01';
  local_128 = lVar4;
  (**(code **)(*plVar8 + 0x3a8))();
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40(DAT_02390124);
  uVar9 = (**(code **)(*unaff_RDI + 0x640))();
  lVar4 = DAT_026e41f0;
  if (DAT_026e41f0 != 0) {
    uVar9 = FUN_00d50b00();
  }
  local_178 = lVar4;
  local_170 = '\x01';
  (**(code **)(*local_78 + 0x3b0))(uVar9,&local_178);
  local_b8 = local_40;
  local_b0 = 0;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_b0 = '\x01';
  FUN_01d488d0();
  if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_170 != '\0') && (local_178 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar4 = plVar7[0x2f];
  if (lVar4 == 0) {
    fVar18 = (float)local_d8._0_4_;
    fVar20 = (float)local_d8._4_4_;
    fVar14 = fStack_d0;
    fVar16 = fStack_cc;
    FUN_01d39800(local_f8._0_4_);
    plVar8 = (longlong *)plVar7[0x2f];
    plVar5 = plVar8;
    if (plVar8 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == (longlong *)0x0) {
          plVar5 = (longlong *)0x0;
          goto LAB_003b531a;
        }
        FUN_00d50b00();
        plVar8 = (longlong *)plVar7[0x2f];
        plVar7[0x2f] = (longlong)local_40;
        plVar5 = local_40;
      }
      else {
        local_38 = '\0';
        plVar5 = local_40;
LAB_003b531a:
        plVar7[0x2f] = (longlong)plVar5;
      }
      if (plVar8 != (longlong *)0x0) {
        FUN_00d50b20();
        plVar5 = local_40;
      }
    }
    if ((local_38 != '\0') && (plVar5 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar4 = plVar7[0x2f];
    plVar7 = (longlong *)*unaff_RSI;
  }
  else {
    plVar7 = (longlong *)*unaff_RSI;
  }
  if (lVar4 != 0) {
    local_110 = 0;
    FUN_00d50b00();
  }
  local_110 = '\x01';
  local_118 = lVar4;
  (**(code **)(*plVar7 + 0x3a8))();
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
LAB_003b4b40:
  uVar9 = FUN_00d50b20();
  goto LAB_003b4b4b;
}




// ============================================================
// @008877d0 — 3588 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008877d0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  code *pcVar4;
  longlong *plVar5;
  char cVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong **pplVar12;
  int iVar13;
  longlong *unaff_RDI;
  longlong *plVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  float extraout_XMM0_Db_02;
  float fVar25;
  float extraout_XMM0_Db_03;
  float extraout_XMM0_Db_04;
  float extraout_XMM0_Db_05;
  float extraout_XMM0_Db_06;
  float extraout_XMM0_Db_08;
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar21 [16];
  float extraout_XMM0_Db_07;
  undefined8 uVar20;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 extraout_XMM0_Qb_04;
  float fVar26;
  uint uVar27;
  float fVar29;
  undefined8 in_XMM1_Qb;
  undefined8 uVar30;
  undefined1 auVar28 [16];
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined1 local_d8 [8];
  undefined8 uStack_d0;
  float fStack_c4;
  undefined1 local_b8 [16];
  undefined1 local_98 [8];
  undefined8 uStack_90;
  float local_84;
  longlong *local_80;
  char local_78;
  undefined8 *local_70;
  longlong *local_68;
  char local_60 [8];
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  longlong *local_40;
  longlong *local_38;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  
  (**(code **)(*(longlong *)unaff_RDI[2] + 0x4a0))();
  iVar13 = *(int *)((longlong)local_68 + 0xc);
  if (local_60[0] != '\0') {
    FUN_00d50b20();
  }
  if (iVar13 != 3) {
    FUN_00886470();
    return;
  }
  (**(code **)(*(longlong *)unaff_RDI[2] + 0x4a0))();
  plVar1 = *(longlong **)local_68[2];
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)unaff_RDI[2] + 0x4a0))();
  local_38 = *(longlong **)(local_68[2] + 0x10);
  if (local_38 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar20 = param_2;
  uVar30 = in_XMM1_Qb;
  cVar6 = (**(code **)(*unaff_RDI + 0x3a8))();
  uVar17 = (**(code **)(*(longlong *)unaff_RDI[2] + 0xa08))();
  uVar18 = (**(code **)(*(longlong *)unaff_RDI[2] + 0x938))();
  (**(code **)(*(longlong *)unaff_RDI[2] + 0x4a0))();
  plVar14 = local_68;
  if ((((local_60[0] == '\0') && (local_68 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_60[0] != '\0')) && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &DAT_02572358;
  pcVar4 = DAT_02572370;
  (*DAT_02572370)();
  fStack_134 = (float)((ulonglong)uVar18 >> 0x20);
  local_40 = plVar14;
  local_128 = (float)uVar17;
  local_70 = puVar8;
  if (plVar14 == (longlong *)0x0) {
    bVar3 = false;
    local_84 = 0.0;
    if ((DAT_0239424c == 0.0) && (!NAN(DAT_0239424c))) goto LAB_00887bbe;
  }
  else {
    fVar26 = DAT_02390d00 + fStack_134;
    local_60[0] = '\0';
    local_68 = (longlong *)0x0;
    local_58 = plVar14;
    local_50 = 0xffffffff;
    local_48 = 0;
    bVar3 = false;
    local_84 = 0.0;
    local_50._4_4_ = 0;
    while( true ) {
      auVar28 = ZEXT416((uint)fVar26);
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 1) {
          iVar13 = -local_50._4_4_;
        }
        else {
          iVar13 = (int)local_50 - local_50._4_4_;
          local_50 = CONCAT44(local_50._4_4_,iVar13);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar13 = 0;
        }
        local_50 = CONCAT44(iVar13,(int)local_50);
      }
      lVar9 = (longlong)(int)local_50;
      iVar13 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar13);
      if (*(int *)((longlong)local_58 + 0xc) <= iVar13) break;
      local_68 = *(longlong **)(local_58[2] + 8 + lVar9 * 8);
      uVar19 = (**(code **)(*local_68 + 0x4d8))();
      (**(code **)(*local_68 + 0x528))();
      (**(code **)(*local_68 + 0x530))();
      local_98._4_4_ = auVar28._4_4_;
      local_d8._4_4_ = (undefined4)((ulonglong)uVar19 >> 0x20);
      if (((extraout_XMM0_Db != extraout_XMM0_Db_00) ||
          (cVar7 = (**(code **)(*local_68 + 0x978))(), cVar7 != '\0')) &&
         ((**(code **)(*local_68 + 0x528))(), (float)local_98._4_4_ < extraout_XMM0_Db_01)) {
        local_80 = local_68;
        local_78 = '\0';
        FUN_00d21140();
        if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*local_68 + 0x528))();
        local_84 = local_84 + (extraout_XMM0_Db_02 - (float)local_98._4_4_);
      }
      if ((float)uVar19 < 0.0) {
        bVar3 = true;
      }
      if ((float)local_d8._4_4_ <= fVar26) {
        bVar3 = true;
      }
      fVar26 = fVar26 + (float)local_98._4_4_ + local_128;
    }
    FUN_00318710();
    if ((local_84 == DAT_0239424c) && (!NAN(local_84) && !NAN(DAT_0239424c))) {
LAB_00887bbe:
      if ((!bVar3) && (plVar14 = local_40, cVar6 == '\x01')) goto LAB_008885d6;
    }
  }
  local_118 = (float)param_2;
  fStack_114 = (float)((ulonglong)param_2 >> 0x20);
  fStack_110 = (float)in_XMM1_Qb;
  fStack_10c = (float)((ulonglong)in_XMM1_Qb >> 0x20);
  local_138 = (float)uVar18;
  fStack_130 = (float)extraout_XMM0_Qb_00;
  fStack_12c = (float)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
  local_158 = (float)uVar20;
  fStack_154 = (float)((ulonglong)uVar20 >> 0x20);
  fStack_150 = (float)uVar30;
  fStack_14c = (float)((ulonglong)uVar30 >> 0x20);
  fVar15 = (local_118 - local_138) - local_158;
  fVar25 = (fStack_114 - fStack_134) - fStack_154;
  uStack_124 = (uint)((ulonglong)uVar17 >> 0x20);
  uStack_120 = (uint)extraout_XMM0_Qb;
  uStack_11c = (uint)((ulonglong)extraout_XMM0_Qb >> 0x20);
  uVar27 = _DAT_023945e0 ^ (uint)local_128;
  fVar29 = (float)(_UNK_023945e4 ^ uStack_124);
  uStack_120 = _UNK_023945e8 ^ uStack_120;
  uStack_11c = _UNK_023945ec ^ uStack_11c;
  fVar26 = fVar29;
LAB_00887c10:
  FUN_006c6060();
  cVar6 = (**(code **)(*(longlong *)unaff_RDI[2] + 0x9f8))();
  local_d8._4_4_ = fVar25;
  local_d8._0_4_ = fVar15;
  uStack_d0._4_4_ = (fStack_10c - fStack_12c) - fStack_14c;
  uStack_d0._0_4_ = (fStack_110 - fStack_130) - fStack_150;
  if (cVar6 == '\0') {
    fVar16 = *(float *)(unaff_RDI + 4);
    if (fVar15 <= *(float *)(unaff_RDI + 4)) {
      fVar16 = fVar15;
    }
    _local_d8 = ZEXT416((uint)fVar16);
  }
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &DAT_02572358;
  (*pcVar4)();
  puVar10 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar10 = &DAT_02572358;
  (*pcVar4)();
  puVar11 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar11 = &DAT_02572358;
  (*pcVar4)();
  local_98._4_4_ = fVar29;
  local_98._0_4_ = uVar27;
  uStack_90._4_4_ = uStack_11c;
  uStack_90._0_4_ = uStack_120;
  if (local_40 != (longlong *)0x0) {
    local_60[0] = '\0';
    local_68 = (longlong *)0x0;
    local_58 = local_40;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_50._4_4_ = 0;
    while( true ) {
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 1) {
          iVar13 = -local_50._4_4_;
        }
        else {
          iVar13 = (int)local_50 - local_50._4_4_;
          local_50 = CONCAT44(local_50._4_4_,iVar13);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar13 = 0;
        }
        local_50 = CONCAT44(iVar13,(int)local_50);
      }
      lVar9 = (longlong)(int)local_50;
      iVar13 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar13);
      if (*(int *)((longlong)local_58 + 0xc) <= iVar13) break;
      local_68 = *(longlong **)(local_58[2] + 8 + lVar9 * 8);
      (**(code **)(*local_68 + 0x4d8))();
      cVar6 = (**(code **)(*local_68 + 0x978))();
      if (cVar6 != '\0') {
        local_80 = local_68;
        local_78 = '\0';
        FUN_00d21140();
        if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*local_68 + 0x528))();
      (**(code **)(*local_68 + 0x530))();
      if (extraout_XMM0_Db_03 != extraout_XMM0_Db_04) {
        (**(code **)(*local_68 + 0x528))();
        if (extraout_XMM0_Db_05 < fVar26) {
          local_80 = local_68;
          local_78 = '\0';
          FUN_00d21140();
          if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        (**(code **)(*local_68 + 0x530))();
        if (fVar26 < extraout_XMM0_Db_06) {
          local_80 = local_68;
          local_78 = '\0';
          FUN_00d21140();
          if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      local_98._0_4_ = (float)local_98._0_4_ + fVar26 + local_128;
    }
    FUN_00318710();
  }
  FUN_006c6060();
  auVar28._0_4_ = local_98._0_4_ & _DAT_023945e0;
  auVar28._4_4_ = local_98._4_4_ & _UNK_023945e4;
  auVar28._8_4_ = (uint)uStack_90 & _UNK_023945e8;
  auVar28._12_4_ = uStack_90._4_4_ & _UNK_023945ec;
  auVar21._4_12_ = SUB1612(auVar28 | _DAT_023945f0,4);
  auVar21._0_4_ = SUB164(auVar28 | _DAT_023945f0,0) + (float)local_98._0_4_;
  auVar28 = roundss(ZEXT816(0),auVar21,0xb);
  local_98._0_4_ = auVar28._0_4_;
  fVar26 = fVar25 - (float)local_98._0_4_;
  if (fVar26 <= 0.0) {
    if (fVar26 < 0.0) {
      FUN_01e436c0();
      (**(code **)(*plVar1 + 0x528))();
      fStack_c4 = auVar28._4_4_;
      if (extraout_XMM0_Db_07 < fStack_c4 + fVar26) {
        local_68 = local_38;
        local_60[0] = '\0';
        FUN_00d23f50();
        if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_68 = local_38;
        local_60[0] = '\0';
        FUN_00d23f50();
        if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_68 = local_38;
        local_60[0] = '\0';
        FUN_00d23f50();
        if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  else {
    local_68 = local_38;
    local_60[0] = '\0';
    FUN_00d23f50();
    if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_68 = local_38;
    local_60[0] = '\0';
    FUN_00d23f50();
    if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_84 != DAT_0239424c) || (fVar16 = fVar26, NAN(local_84) || NAN(DAT_0239424c))) {
    fVar16 = (float)FUN_00885a30();
    fVar16 = fVar26 - (local_84 - fVar16);
  }
  if (fVar16 <= 0.0) {
    if (fVar16 < 0.0) {
      fVar16 = (float)FUN_00885f50();
      if ((fVar16 != DAT_0239424c) || (NAN(fVar16) || NAN(DAT_0239424c))) {
        fVar16 = (float)FUN_00885520();
      }
    }
  }
  else {
    fVar16 = (float)FUN_00885a30();
    if ((fVar16 != DAT_0239424c) || (NAN(fVar16) || NAN(DAT_0239424c))) {
      fVar16 = (float)FUN_00885520();
    }
  }
  local_98._0_4_ = (float)local_98._0_4_ + (fVar26 - fVar16);
  local_98._4_4_ = 0;
  uStack_90._0_4_ = 0;
  uStack_90._4_4_ = 0;
  uVar20 = FUN_0065f040();
  local_b8._8_8_ = extraout_XMM0_Qb_01;
  local_b8._0_8_ = uVar20;
  (**(code **)(*(longlong *)unaff_RDI[2] + 0x4a0))();
  plVar14 = local_68;
  if (local_60[0] == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00888240;
    }
  }
  else if (local_68 != (longlong *)0x0) {
LAB_00888240:
    local_b8._0_4_ = (float)uVar20 + fStack_134;
    local_60[0] = '\0';
    local_68 = (longlong *)0x0;
    local_58 = plVar14;
    local_50 = 0xffffffff;
    local_48 = 0;
    while( true ) {
      lVar9 = (longlong)(int)local_50;
      iVar13 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar13);
      if (*(int *)((longlong)local_58 + 0xc) <= iVar13) break;
      local_68 = *(longlong **)(local_58[2] + 8 + lVar9 * 8);
      FUN_01e3f820();
      FUN_006c6060();
      cVar6 = (**(code **)(*local_68 + 0x980))();
      if ((cVar6 == '\0') && (cVar6 = (**(code **)(*local_68 + 0x950))(), cVar6 == '\0')) {
        if ((float)local_98._0_4_ < (float)local_d8._0_4_) {
          auVar24._0_8_ = (**(code **)(*local_68 + 0x528))();
          auVar24._8_8_ = extraout_XMM0_Qb_03;
          if ((float)local_d8._0_4_ < (float)auVar24._0_8_) {
            _local_98 = blendps(_local_98,_local_d8,1);
          }
          else {
            _local_98 = blendps(_local_98,auVar24,0xd);
          }
        }
      }
      else {
        _local_98 = blendps(_local_98,_local_d8,1);
      }
      auVar22._0_8_ = FUN_0065f040();
      auVar22._8_8_ = extraout_XMM0_Qb_02;
      auVar23._4_12_ = auVar22._4_12_;
      auVar23._0_4_ = (float)auVar22._0_8_ + local_138;
      auVar28 = insertps(auVar23,local_b8._0_4_,0x10);
      (**(code **)(*local_68 + 0x4d0))(auVar28._0_8_);
      FUN_006c6060();
      local_98._0_4_ = (float)local_b8._0_4_ + (float)local_98._4_4_ + local_128;
      local_b8._0_4_ = local_98._0_4_;
      local_98._4_4_ = local_b8._4_4_;
      uStack_90._0_4_ = local_b8._8_4_;
      uStack_90._4_4_ = local_b8._12_4_;
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 1) {
          iVar13 = -local_50._4_4_;
        }
        else {
          local_50 = CONCAT44(local_50._4_4_,(int)local_50 - local_50._4_4_);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar13 = 0;
        }
        local_50 = CONCAT44(iVar13,(int)local_50);
      }
    }
    FUN_000a9680();
    FUN_00d50b20();
  }
  FUN_006c6060();
  local_108 = (float)param_1;
  fStack_104 = (float)((ulonglong)param_1 >> 0x20);
  fStack_100 = (float)in_XMM0_Qb;
  fStack_fc = (float)((ulonglong)in_XMM0_Qb >> 0x20);
  fVar26 = fStack_104;
  cVar6 = (**(code **)(*(longlong *)unaff_RDI[2] + 0xa18))();
  if (cVar6 != '\0') {
    if (puVar11 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (puVar10 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (puVar8 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    goto LAB_00887c10;
  }
  auVar28 = ZEXT416((uint)fVar16);
  if ((fVar16 != 0.0) || (NAN(fVar16))) {
    FUN_00d23340();
    plVar5 = local_68;
    pplVar12 = (longlong **)local_60;
    if (local_60[0] == '\0') {
      pplVar12 = &local_80;
    }
    local_80 = (longlong *)CONCAT71(local_80._1_7_,local_60[0]);
    *(undefined1 *)pplVar12 = 0;
    if ((local_60[0] != '\0') && (plVar5 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar14 = local_40;
    if ((char)local_80 == '\0') {
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b00();
        goto LAB_00888517;
      }
    }
    else if (plVar5 != (longlong *)0x0) {
LAB_00888517:
      (**(code **)(*plVar5 + 0x4d8))();
      (**(code **)(*plVar5 + 0x4d8))();
      fStack_154 = (fStack_104 + fStack_114) - fStack_154;
      if (fStack_154 < extraout_XMM0_Db_08 + auVar28._4_4_) {
        uVar20 = (**(code **)(*plVar5 + 0x4d8))();
        auVar2._4_4_ = fStack_154 - (float)((ulonglong)uVar20 >> 0x20);
        auVar2._0_4_ = ((local_108 + local_118) - local_158) - (float)uVar20;
        auVar2._8_4_ = ((fStack_100 + fStack_110) - fStack_150) - (float)extraout_XMM0_Qb_04;
        auVar2._12_4_ =
             ((fStack_fc + fStack_10c) - fStack_14c) -
             (float)((ulonglong)extraout_XMM0_Qb_04 >> 0x20);
        auVar28 = blendps(auVar28,auVar2,2);
        (**(code **)(*plVar5 + 0x4d0))(uVar20,auVar28._0_8_);
      }
      FUN_00d50b20();
    }
    if (puVar11 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (puVar10 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (puVar8 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    if (puVar11 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    plVar14 = local_40;
    if (puVar10 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (puVar8 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_006c5b60();
LAB_008885d6:
  if (local_70 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  plVar5 = local_38;
  if (plVar14 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @000a5ee0 — 2930 bytes
// str: ""MDWorkspaceView""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a5ee0(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_000a32b0();
  *unaff_RDI = &DAT_024f1490;
  unaff_RDI[2] = &DAT_024f1e80;
  *(undefined4 *)(unaff_RDI + 0x27) = 0;
  if (DAT_026fddd0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026d9988 = FUN_0006d940();
      _DAT_026d9970 = "MDWorkspaceView";
      _DAT_026d9978 = 0x188;
      _DAT_026d9980 = FUN_000a3150;
      _DAT_026d9990 = 0;
      uRam00000000026d9998 = 0;
      _DAT_026d99a0 = 0;
      _DAT_026d9a18 = 0;
      uRam00000000026d9a20 = 0;
      _DAT_026d9a28 = 0;
      DAT_026d9a2a = 1;
      _DAT_026d99a8 = 0;
      uRam00000000026d99b0 = 0;
      _DAT_026d99b8 = 0;
      uRam00000000026d99c0 = 0;
      _DAT_026d99c8 = 0;
      uRam00000000026d99d0 = 0;
      _DAT_026d99d8 = 0;
      uRam00000000026d99e0 = 0;
      _DAT_026d99e8 = 0;
      uRam00000000026d99f0 = 0;
      _DAT_026d99f8 = 0;
      uRam00000000026d9a00 = 0;
      _DAT_026d9a08 = 0;
      uRam00000000026d9a10 = 0;
      DAT_026d9a33 = 0;
      _DAT_026d9a2b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d9a2b == '\0') {
    FUN_000a6b00();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x13c) = 0;
  if (DAT_026fddd0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026d9988 = FUN_0006d940();
      _DAT_026d9970 = "MDWorkspaceView";
      _DAT_026d9978 = 0x188;
      _DAT_026d9980 = FUN_000a3150;
      _DAT_026d9990 = 0;
      uRam00000000026d9998 = 0;
      _DAT_026d99a0 = 0;
      _DAT_026d9a18 = 0;
      uRam00000000026d9a20 = 0;
      _DAT_026d9a28 = 0;
      DAT_026d9a2a = 1;
      _DAT_026d99a8 = 0;
      uRam00000000026d99b0 = 0;
      _DAT_026d99b8 = 0;
      uRam00000000026d99c0 = 0;
      _DAT_026d99c8 = 0;
      uRam00000000026d99d0 = 0;
      _DAT_026d99d8 = 0;
      uRam00000000026d99e0 = 0;
      _DAT_026d99e8 = 0;
      uRam00000000026d99f0 = 0;
      _DAT_026d99f8 = 0;
      uRam00000000026d9a00 = 0;
      _DAT_026d9a08 = 0;
      uRam00000000026d9a10 = 0;
      DAT_026d9a33 = 0;
      _DAT_026d9a2b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d9a2b == '\0') {
    FUN_000a6fc0();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x13d) = 0;
  if (DAT_026fddd0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026d9988 = FUN_0006d940();
      _DAT_026d9970 = "MDWorkspaceView";
      _DAT_026d9978 = 0x188;
      _DAT_026d9980 = FUN_000a3150;
      _DAT_026d9990 = 0;
      uRam00000000026d9998 = 0;
      _DAT_026d99a0 = 0;
      _DAT_026d9a18 = 0;
      uRam00000000026d9a20 = 0;
      _DAT_026d9a28 = 0;
      DAT_026d9a2a = 1;
      _DAT_026d99a8 = 0;
      uRam00000000026d99b0 = 0;
      _DAT_026d99b8 = 0;
      uRam00000000026d99c0 = 0;
      _DAT_026d99c8 = 0;
      uRam00000000026d99d0 = 0;
      _DAT_026d99d8 = 0;
      uRam00000000026d99e0 = 0;
      _DAT_026d99e8 = 0;
      uRam00000000026d99f0 = 0;
      _DAT_026d99f8 = 0;
      uRam00000000026d9a00 = 0;
      _DAT_026d9a08 = 0;
      uRam00000000026d9a10 = 0;
      DAT_026d9a33 = 0;
      _DAT_026d9a2b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d9a2b == '\0') {
    FUN_000a7150();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x13e) = 0;
  if (DAT_026fddd0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026d9988 = FUN_0006d940();
      _DAT_026d9970 = "MDWorkspaceView";
      _DAT_026d9978 = 0x188;
      _DAT_026d9980 = FUN_000a3150;
      _DAT_026d9990 = 0;
      uRam00000000026d9998 = 0;
      _DAT_026d99a0 = 0;
      _DAT_026d9a18 = 0;
      uRam00000000026d9a20 = 0;
      _DAT_026d9a28 = 0;
      DAT_026d9a2a = 1;
      _DAT_026d99a8 = 0;
      uRam00000000026d99b0 = 0;
      _DAT_026d99b8 = 0;
      uRam00000000026d99c0 = 0;
      _DAT_026d99c8 = 0;
      uRam00000000026d99d0 = 0;
      _DAT_026d99d8 = 0;
      uRam00000000026d99e0 = 0;
      _DAT_026d99e8 = 0;
      uRam00000000026d99f0 = 0;
      _DAT_026d99f8 = 0;
      uRam00000000026d9a00 = 0;
      _DAT_026d9a08 = 0;
      uRam00000000026d9a10 = 0;
      DAT_026d9a33 = 0;
      _DAT_026d9a2b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d9a2b == '\0') {
    FUN_000a72e0();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x28) = 0;
  if (DAT_026fddd0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026d9988 = FUN_0006d940();
      _DAT_026d9970 = "MDWorkspaceView";
      _DAT_026d9978 = 0x188;
      _DAT_026d9980 = FUN_000a3150;
      _DAT_026d9990 = 0;
      uRam00000000026d9998 = 0;
      _DAT_026d99a0 = 0;
      _DAT_026d9a18 = 0;
      uRam00000000026d9a20 = 0;
      _DAT_026d9a28 = 0;
      DAT_026d9a2a = 1;
      _DAT_026d99a8 = 0;
      uRam00000000026d99b0 = 0;
      _DAT_026d99b8 = 0;
      uRam00000000026d99c0 = 0;
      _DAT_026d99c8 = 0;
      uRam00000000026d99d0 = 0;
      _DAT_026d99d8 = 0;
      uRam00000000026d99e0 = 0;
      _DAT_026d99e8 = 0;
      uRam00000000026d99f0 = 0;
      _DAT_026d99f8 = 0;
      uRam00000000026d9a00 = 0;
      _DAT_026d9a08 = 0;
      uRam00000000026d9a10 = 0;
      DAT_026d9a33 = 0;
      _DAT_026d9a2b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d9a2b == '\0') {
    FUN_000a7470();
    FUN_00e87980();
  }
  *(undefined8 *)((longlong)unaff_RDI + 0x144) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x14c) = 0;
  if (DAT_026fddd0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026d9988 = FUN_0006d940();
      _DAT_026d9970 = "MDWorkspaceView";
      _DAT_026d9978 = 0x188;
      _DAT_026d9980 = FUN_000a3150;
      _DAT_026d9990 = 0;
      uRam00000000026d9998 = 0;
      _DAT_026d99a0 = 0;
      _DAT_026d9a18 = 0;
      uRam00000000026d9a20 = 0;
      _DAT_026d9a28 = 0;
      DAT_026d9a2a = 1;
      _DAT_026d99a8 = 0;
      uRam00000000026d99b0 = 0;
      _DAT_026d99b8 = 0;
      uRam00000000026d99c0 = 0;
      _DAT_026d99c8 = 0;
      uRam00000000026d99d0 = 0;
      _DAT_026d99d8 = 0;
      uRam00000000026d99e0 = 0;
      _DAT_026d99e8 = 0;
      uRam00000000026d99f0 = 0;
      _DAT_026d99f8 = 0;
      uRam00000000026d9a00 = 0;
      _DAT_026d9a08 = 0;
      uRam00000000026d9a10 = 0;
      DAT_026d9a33 = 0;
      _DAT_026d9a2b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d9a2b == '\0') {
    FUN_000a7600();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x154) = 0;
  if (DAT_026fddd0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026d9988 = FUN_0006d940();
      _DAT_026d9970 = "MDWorkspaceView";
      _DAT_026d9978 = 0x188;
      _DAT_026d9980 = FUN_000a3150;
      _DAT_026d9990 = 0;
      uRam00000000026d9998 = 0;
      _DAT_026d99a0 = 0;
      _DAT_026d9a18 = 0;
      uRam00000000026d9a20 = 0;
      _DAT_026d9a28 = 0;
      DAT_026d9a2a = 1;
      _DAT_026d99a8 = 0;
      uRam00000000026d99b0 = 0;
      _DAT_026d99b8 = 0;
      uRam00000000026d99c0 = 0;
      _DAT_026d99c8 = 0;
      uRam00000000026d99d0 = 0;
      _DAT_026d99d8 = 0;
      uRam00000000026d99e0 = 0;
      _DAT_026d99e8 = 0;
      uRam00000000026d99f0 = 0;
      _DAT_026d99f8 = 0;
      uRam00000000026d9a00 = 0;
      _DAT_026d9a08 = 0;
      uRam00000000026d9a10 = 0;
      DAT_026d9a33 = 0;
      _DAT_026d9a2b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d9a2b == '\0') {
    FUN_000a7790();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x155) = 0;
  if (DAT_026fddd0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026d9988 = FUN_0006d940();
      _DAT_026d9970 = "MDWorkspaceView";
      _DAT_026d9978 = 0x188;
      _DAT_026d9980 = FUN_000a3150;
      _DAT_026d9990 = 0;
      uRam00000000026d9998 = 0;
      _DAT_026d99a0 = 0;
      _DAT_026d9a18 = 0;
      uRam00000000026d9a20 = 0;
      _DAT_026d9a28 = 0;
      DAT_026d9a2a = 1;
      _DAT_026d99a8 = 0;
      uRam00000000026d99b0 = 0;
      _DAT_026d99b8 = 0;
      uRam00000000026d99c0 = 0;
      _DAT_026d99c8 = 0;
      uRam00000000026d99d0 = 0;
      _DAT_026d99d8 = 0;
      uRam00000000026d99e0 = 0;
      _DAT_026d99e8 = 0;
      uRam00000000026d99f0 = 0;
      _DAT_026d99f8 = 0;
      uRam00000000026d9a00 = 0;
      _DAT_026d9a08 = 0;
      uRam00000000026d9a10 = 0;
      DAT_026d9a33 = 0;
      _DAT_026d9a2b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d9a2b == '\0') {
    FUN_000a7920();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x156) = 0;
  if (DAT_026fddd0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026d9988 = FUN_0006d940();
      _DAT_026d9970 = "MDWorkspaceView";
      _DAT_026d9978 = 0x188;
      _DAT_026d9980 = FUN_000a3150;
      _DAT_026d9990 = 0;
      uRam00000000026d9998 = 0;
      _DAT_026d99a0 = 0;
      _DAT_026d9a18 = 0;
      uRam00000000026d9a20 = 0;
      _DAT_026d9a28 = 0;
      DAT_026d9a2a = 1;
      _DAT_026d99a8 = 0;
      uRam00000000026d99b0 = 0;
      _DAT_026d99b8 = 0;
      uRam00000000026d99c0 = 0;
      _DAT_026d99c8 = 0;
      uRam00000000026d99d0 = 0;
      _DAT_026d99d8 = 0;
      uRam00000000026d99e0 = 0;
      _DAT_026d99e8 = 0;
      uRam00000000026d99f0 = 0;
      _DAT_026d99f8 = 0;
      uRam00000000026d9a00 = 0;
      _DAT_026d9a08 = 0;
      uRam00000000026d9a10 = 0;
      DAT_026d9a33 = 0;
      _DAT_026d9a2b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d9a2b == '\0') {
    FUN_000a7ab0();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x157) = 0;
  if (DAT_026fddd0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026d9988 = FUN_0006d940();
      _DAT_026d9970 = "MDWorkspaceView";
      _DAT_026d9978 = 0x188;
      _DAT_026d9980 = FUN_000a3150;
      _DAT_026d9990 = 0;
      uRam00000000026d9998 = 0;
      _DAT_026d99a0 = 0;
      _DAT_026d9a18 = 0;
      uRam00000000026d9a20 = 0;
      _DAT_026d9a28 = 0;
      DAT_026d9a2a = 1;
      _DAT_026d99a8 = 0;
      uRam00000000026d99b0 = 0;
      _DAT_026d99b8 = 0;
      uRam00000000026d99c0 = 0;
      _DAT_026d99c8 = 0;
      uRam00000000026d99d0 = 0;
      _DAT_026d99d8 = 0;
      uRam00000000026d99e0 = 0;
      _DAT_026d99e8 = 0;
      uRam00000000026d99f0 = 0;
      _DAT_026d99f8 = 0;
      uRam00000000026d9a00 = 0;
      _DAT_026d9a08 = 0;
      uRam00000000026d9a10 = 0;
      DAT_026d9a33 = 0;
      _DAT_026d9a2b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d9a2b == '\0') {
    FUN_000a7c40();
    FUN_00e87980();
  }
  unaff_RDI[0x2b] = 0;
  if (DAT_026fddd0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026d9988 = FUN_0006d940();
      _DAT_026d9970 = "MDWorkspaceView";
      _DAT_026d9978 = 0x188;
      _DAT_026d9980 = FUN_000a3150;
      _DAT_026d9990 = 0;
      uRam00000000026d9998 = 0;
      _DAT_026d99a0 = 0;
      _DAT_026d9a18 = 0;
      uRam00000000026d9a20 = 0;
      _DAT_026d9a28 = 0;
      DAT_026d9a2a = 1;
      _DAT_026d99a8 = 0;
      uRam00000000026d99b0 = 0;
      _DAT_026d99b8 = 0;
      uRam00000000026d99c0 = 0;
      _DAT_026d99c8 = 0;
      uRam00000000026d99d0 = 0;
      _DAT_026d99d8 = 0;
      uRam00000000026d99e0 = 0;
      _DAT_026d99e8 = 0;
      uRam00000000026d99f0 = 0;
      _DAT_026d99f8 = 0;
      uRam00000000026d9a00 = 0;
      _DAT_026d9a08 = 0;
      uRam00000000026d9a10 = 0;
      DAT_026d9a33 = 0;
      _DAT_026d9a2b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d9a2b == '\0') {
    FUN_000a7dd0();
    FUN_00e87980();
  }
  FUN_000a7f60();
  FUN_000a8220();
  FUN_000a84e0();
  FUN_000a87a0();
  FUN_000a8a60();
  return;
}




// ============================================================
// @006c3b00 — 2328 bytes
// str: ""MDWorkspaceView""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006c3b00(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong **pplVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int unaff_ESI;
  longlong unaff_RDI;
  longlong lVar7;
  longlong *plVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  longlong *local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  undefined8 *local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  undefined8 *local_88;
  char local_80;
  longlong *local_78;
  int local_6c;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong *local_40;
  char local_38;
  
  lVar7 = (longlong)unaff_ESI;
  plVar6 = *(longlong **)(*(longlong *)(*(longlong *)(unaff_RDI + 0x38) + 0x10) + lVar7 * 8);
  local_38 = '\0';
  local_40 = plVar6;
  if ((DAT_026fddd0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    _DAT_026d9988 = FUN_0006d940();
    _DAT_026d9970 = "MDWorkspaceView";
    _DAT_026d9978 = 0x188;
    _DAT_026d9980 = FUN_000a3150;
    _DAT_026d9990 = 0;
    uRam00000000026d9998 = 0;
    _DAT_026d99a0 = 0;
    _DAT_026d9a18 = 0;
    uRam00000000026d9a20 = 0;
    _DAT_026d9a28 = 0;
    DAT_026d9a2a = 1;
    _DAT_026d99a8 = 0;
    uRam00000000026d99b0 = 0;
    _DAT_026d99b8 = 0;
    uRam00000000026d99c0 = 0;
    _DAT_026d99c8 = 0;
    uRam00000000026d99d0 = 0;
    _DAT_026d99d8 = 0;
    uRam00000000026d99e0 = 0;
    _DAT_026d99e8 = 0;
    uRam00000000026d99f0 = 0;
    _DAT_026d99f8 = 0;
    uRam00000000026d9a00 = 0;
    _DAT_026d9a08 = 0;
    uRam00000000026d9a10 = 0;
    DAT_026d9a33 = 0;
    _DAT_026d9a2b = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (longlong *)0x0) {
LAB_006c3b63:
    pplVar4 = &DAT_02802688;
    plVar6 = DAT_02802688;
    if (DAT_02802690 != '\0') goto LAB_006c3b73;
LAB_006c3b94:
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_006c3b63;
    pplVar4 = &local_40;
    plVar6 = local_40;
    if (local_38 == '\0') goto LAB_006c3b94;
LAB_006c3b73:
    *(undefined1 *)(pplVar4 + 1) = 0;
  }
  local_78 = plVar6;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 == (longlong *)0x0) goto LAB_006c40d8;
  local_6c = unaff_ESI;
  FUN_003b6560();
  (**(code **)(*plVar6 + 0x360))();
  cVar1 = FUN_00e85ea0();
  plVar8 = plVar6;
  if (cVar1 == '\0') {
    plVar8 = DAT_02802688;
  }
  if (plVar8 == (longlong *)0x0) {
    local_d0 = '\0';
    local_d8 = plVar6;
    cVar1 = (**(code **)(**(longlong **)(unaff_RDI + 400) + 0x378))();
    iVar2 = local_6c;
    if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar1 == '\0') goto LAB_006c40d8;
    plVar6 = *(longlong **)(*(longlong *)(*(longlong *)(unaff_RDI + 0x38) + 0x10) + 8 + lVar7 * 8);
    local_38 = '\0';
    local_40 = plVar6;
    if ((DAT_026fddd0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      _DAT_026d9988 = FUN_0006d940();
      _DAT_026d9970 = "MDWorkspaceView";
      _DAT_026d9978 = 0x188;
      _DAT_026d9980 = FUN_000a3150;
      _DAT_026d9990 = 0;
      uRam00000000026d9998 = 0;
      _DAT_026d99a0 = 0;
      _DAT_026d9a18 = 0;
      uRam00000000026d9a20 = 0;
      _DAT_026d9a28 = 0;
      DAT_026d9a2a = 1;
      _DAT_026d99a8 = 0;
      uRam00000000026d99b0 = 0;
      _DAT_026d99b8 = 0;
      uRam00000000026d99c0 = 0;
      _DAT_026d99c8 = 0;
      uRam00000000026d99d0 = 0;
      _DAT_026d99d8 = 0;
      uRam00000000026d99e0 = 0;
      _DAT_026d99e8 = 0;
      uRam00000000026d99f0 = 0;
      _DAT_026d99f8 = 0;
      uRam00000000026d9a00 = 0;
      _DAT_026d9a08 = 0;
      uRam00000000026d9a10 = 0;
      DAT_026d9a33 = 0;
      _DAT_026d9a2b = 0;
      ___cxa_guard_release();
      iVar2 = local_6c;
    }
    if (plVar6 == (longlong *)0x0) {
      pplVar4 = &DAT_02802688;
      plVar6 = DAT_02802688;
      cVar1 = DAT_02802690;
joined_r0x006c3e82:
      if (cVar1 != '\0') goto LAB_006c3e84;
LAB_006c3e97:
      if (plVar6 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      (**(code **)(*plVar6 + 0x360))();
      cVar1 = FUN_00e85ea0();
      if (cVar1 != '\0') {
        pplVar4 = &local_40;
        plVar6 = local_40;
        cVar1 = local_38;
        goto joined_r0x006c3e82;
      }
      pplVar4 = &DAT_02802688;
      plVar6 = DAT_02802688;
      if (DAT_02802690 == '\0') goto LAB_006c3e97;
LAB_006c3e84:
      *(undefined1 *)(pplVar4 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_c0 = '\0';
    local_c8 = plVar6;
    cVar1 = (**(code **)(**(longlong **)(unaff_RDI + 400) + 0x378))();
    if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar1 != '\0') {
      puVar5 = (undefined8 *)FUN_00e8fc40();
      FUN_0006daf0();
      *(undefined4 *)((longlong)puVar5 + 0x13b) = 0;
      *(undefined4 *)(puVar5 + 0x27) = 0;
      puVar5[0x28] = 0;
      puVar5[0x29] = 0;
      puVar5[0x2a] = 0;
      puVar5[0x2b] = 0;
      puVar5[0x2c] = 0;
      puVar5[0x2d] = 0;
      puVar5[0x2e] = 0;
      puVar5[0x2f] = 0;
      puVar5[0x30] = 0;
      *puVar5 = &DAT_02501bf8;
      puVar5[2] = &DAT_025025f0;
      *(undefined1 *)(puVar5 + 0x31) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x1a4) = 0;
      puVar5[0x32] = 0;
      puVar5[0x33] = 0;
      *(undefined1 *)(puVar5 + 0x34) = 0;
      (*DAT_02501c10)();
      if (*(longlong **)(unaff_RDI + 0x1a0) != (longlong *)0x0) {
        local_b0 = '\0';
        local_b8 = puVar5;
        (**(code **)(**(longlong **)(unaff_RDI + 0x1a0) + 0x20))();
        if ((local_b0 != '\0') && (local_b8 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      (**(code **)(**(longlong **)(unaff_RDI + 400) + 0x3a0))();
      uVar9 = FUN_00542140();
      local_a8 = local_78;
      local_a0 = '\0';
      local_90 = '\0';
      local_98 = plVar6;
      uVar9 = FUN_00542190(uVar9,&local_98);
      if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
        uVar9 = FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
        uVar9 = FUN_00d50b20();
      }
      FUN_006c4780(uVar9,iVar2 + 1);
      local_80 = '\0';
      local_88 = puVar5;
      (**(code **)(**(longlong **)(unaff_RDI + 400) + 0x398))();
      if ((local_80 != '\0') && (local_88 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    goto LAB_006c40d8;
  }
  plVar6 = *(longlong **)(*(longlong *)(*(longlong *)(unaff_RDI + 0x38) + 0x10) + -8 + lVar7 * 8);
  local_38 = '\0';
  uVar9 = extraout_XMM0_Da;
  local_40 = plVar6;
  if ((DAT_026fddd0 == '\0') &&
     (iVar2 = ___cxa_guard_acquire(), uVar9 = extraout_XMM0_Da_02, iVar2 != 0)) {
    _DAT_026d9988 = FUN_0006d940();
    _DAT_026d9970 = "MDWorkspaceView";
    _DAT_026d9978 = 0x188;
    _DAT_026d9980 = FUN_000a3150;
    _DAT_026d9990 = 0;
    uRam00000000026d9998 = 0;
    _DAT_026d99a0 = 0;
    _DAT_026d9a18 = 0;
    uRam00000000026d9a20 = 0;
    _DAT_026d9a28 = 0;
    DAT_026d9a2a = 1;
    _DAT_026d99a8 = 0;
    uRam00000000026d99b0 = 0;
    _DAT_026d99b8 = 0;
    uRam00000000026d99c0 = 0;
    _DAT_026d99c8 = 0;
    uRam00000000026d99d0 = 0;
    _DAT_026d99d8 = 0;
    uRam00000000026d99e0 = 0;
    _DAT_026d99e8 = 0;
    uRam00000000026d99f0 = 0;
    _DAT_026d99f8 = 0;
    uRam00000000026d9a00 = 0;
    _DAT_026d9a08 = 0;
    uRam00000000026d9a10 = 0;
    DAT_026d9a33 = 0;
    _DAT_026d9a2b = 0;
    uVar9 = ___cxa_guard_release();
  }
  if (plVar6 == (longlong *)0x0) {
LAB_006c3c55:
    pplVar4 = &DAT_02802688;
    local_68 = DAT_02802688;
    if (DAT_02802690 != '\0') goto LAB_006c3c67;
LAB_006c3d50:
    local_60 = 0;
    if (local_68 != (longlong *)0x0) {
      uVar9 = FUN_00d50b00();
    }
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar1 = FUN_00e85ea0();
    uVar9 = extraout_XMM0_Da_00;
    if (cVar1 == '\0') goto LAB_006c3c55;
    pplVar4 = &local_40;
    local_68 = local_40;
    if (local_38 == '\0') goto LAB_006c3d50;
LAB_006c3c67:
    *(undefined1 *)(pplVar4 + 1) = 0;
  }
  local_60 = '\x01';
  plVar6 = *(longlong **)(*(longlong *)(*(longlong *)(unaff_RDI + 0x38) + 0x10) + 8 + lVar7 * 8);
  local_e0 = '\0';
  local_e8 = plVar6;
  if ((DAT_026fddd0 == '\0') &&
     (iVar2 = ___cxa_guard_acquire(), uVar9 = extraout_XMM0_Da_03, iVar2 != 0)) {
    _DAT_026d9988 = FUN_0006d940();
    _DAT_026d9970 = "MDWorkspaceView";
    _DAT_026d9978 = 0x188;
    _DAT_026d9980 = FUN_000a3150;
    _DAT_026d9990 = 0;
    uRam00000000026d9998 = 0;
    _DAT_026d99a0 = 0;
    _DAT_026d9a18 = 0;
    uRam00000000026d9a20 = 0;
    _DAT_026d9a28 = 0;
    DAT_026d9a2a = 1;
    _DAT_026d99a8 = 0;
    uRam00000000026d99b0 = 0;
    _DAT_026d99b8 = 0;
    uRam00000000026d99c0 = 0;
    _DAT_026d99c8 = 0;
    uRam00000000026d99d0 = 0;
    _DAT_026d99d8 = 0;
    uRam00000000026d99e0 = 0;
    _DAT_026d99e8 = 0;
    uRam00000000026d99f0 = 0;
    _DAT_026d99f8 = 0;
    uRam00000000026d9a00 = 0;
    _DAT_026d9a08 = 0;
    uRam00000000026d9a10 = 0;
    DAT_026d9a33 = 0;
    _DAT_026d9a2b = 0;
    uVar9 = ___cxa_guard_release();
  }
  if (plVar6 == (longlong *)0x0) {
LAB_006c3db2:
    pplVar4 = &DAT_02802688;
    plVar6 = DAT_02802688;
    local_58 = DAT_02802688;
    if (DAT_02802690 != '\0') goto LAB_006c3dc6;
LAB_006c3de8:
    local_50 = 0;
    if (plVar6 != (longlong *)0x0) {
      uVar9 = FUN_00d50b00();
    }
    local_50 = '\x01';
    local_58 = plVar6;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar1 = FUN_00e85ea0();
    uVar9 = extraout_XMM0_Da_01;
    if (cVar1 == '\0') goto LAB_006c3db2;
    pplVar4 = &local_e8;
    plVar6 = local_e8;
    local_58 = local_e8;
    if (local_e0 == '\0') goto LAB_006c3de8;
LAB_006c3dc6:
    local_50 = '\x01';
    *(undefined1 *)(pplVar4 + 1) = 0;
  }
  FUN_00542190(uVar9,&local_58);
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_006c40d8:
  if (local_78 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @002eff80 — 2184 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x002f081f) */
/* WARNING: Removing unreachable block (ram,0x002f082b) */

void FUN_002eff80(void)

{
  code *pcVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  void *pvVar5;
  char *pcVar6;
  undefined8 uVar7;
  char *pcVar8;
  longlong *plVar9;
  pthread_key_t pVar10;
  longlong **pplVar11;
  int iVar12;
  bool bVar13;
  char local_c8;
  undefined7 uStack_c7;
  char local_c0;
  undefined8 local_b8;
  char *local_b0;
  char local_a8;
  char *local_a0;
  undefined8 local_98;
  int local_90;
  longlong *local_88;
  char local_80 [8];
  longlong *local_78;
  undefined8 local_70;
  int local_68;
  char *local_60;
  char *local_58;
  longlong *local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_01beea30();
  pcVar6 = local_b0;
  if (local_a8 == '\0') {
    if (local_b0 != (char *)0x0) {
      FUN_00d50b00();
      if ((local_a8 != '\0') && (local_b0 != (char *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_002efff2;
    }
LAB_002f07b4:
    local_b8 = 0;
  }
  else {
    if (local_b0 == (char *)0x0) goto LAB_002f07b4;
LAB_002efff2:
    pcVar1 = DAT_02572370;
    local_a8 = '\0';
    local_b0 = (char *)0x0;
    local_60 = pcVar6;
    local_a0 = pcVar6;
    local_98 = 0xffffffff;
    local_90 = 0;
    local_98._4_4_ = 0;
    local_b8 = 0;
    local_58 = (char *)0x0;
    while( true ) {
      if (local_98._4_4_ != 0) {
        if (local_98._4_4_ < 1) {
          iVar12 = -local_98._4_4_;
        }
        else {
          iVar12 = (int)local_98 - local_98._4_4_;
          local_98 = CONCAT44(local_98._4_4_,iVar12);
          FUN_00d23690();
          local_90 = local_90 + local_98._4_4_;
          iVar12 = 0;
        }
        local_98 = CONCAT44(iVar12,(int)local_98);
      }
      lVar4 = (longlong)(int)local_98;
      iVar12 = (int)local_98 + 1;
      local_98 = CONCAT44(local_98._4_4_,iVar12);
      if (*(int *)(local_a0 + 0xc) <= iVar12) break;
      local_b0 = *(char **)(*(longlong *)(local_a0 + 0x10) + 8 + lVar4 * 8);
      FUN_01bc0990();
      plVar9 = local_88;
      if (local_80[0] == '\0') {
        if (local_88 != (longlong *)0x0) {
          FUN_00d50b00();
          if ((local_80[0] != '\0') && (local_88 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_002f0138;
        }
      }
      else if (local_88 != (longlong *)0x0) {
LAB_002f0138:
        local_80[0] = '\0';
        local_88 = (longlong *)0x0;
        local_50 = plVar9;
        local_78 = plVar9;
        local_70 = 0xffffffff;
        local_68 = 0;
        local_70._4_4_ = 0;
        while( true ) {
          if (local_70._4_4_ != 0) {
            if (local_70._4_4_ < 1) {
              iVar12 = -local_70._4_4_;
            }
            else {
              iVar12 = (int)local_70 - local_70._4_4_;
              local_70 = CONCAT44(local_70._4_4_,iVar12);
              FUN_00d23690();
              local_68 = local_68 + local_70._4_4_;
              iVar12 = 0;
            }
            local_70 = CONCAT44(iVar12,(int)local_70);
          }
          lVar4 = (longlong)(int)local_70;
          iVar12 = (int)local_70 + 1;
          local_70 = CONCAT44(local_70._4_4_,iVar12);
          if (*(int *)((longlong)local_78 + 0xc) <= iVar12) break;
          local_88 = *(longlong **)(local_78[2] + 8 + lVar4 * 8);
          FUN_01bc60e0();
          plVar9 = local_48;
          FUN_000823a0();
          pplVar11 = (longlong **)&DAT_02802688;
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x360))();
            cVar3 = FUN_00e85ea0();
            pplVar11 = &local_48;
            if (cVar3 == '\0') {
              pplVar11 = (longlong **)&DAT_02802688;
            }
          }
          plVar9 = *pplVar11;
          local_c8 = *(char *)(pplVar11 + 1);
          pplVar11 = pplVar11 + 1;
          if (local_c8 == '\0') {
            pplVar11 = (longlong **)&local_c8;
          }
          *(undefined1 *)pplVar11 = 0;
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar9 != (longlong *)0x0) {
            pvVar5 = _pthread_getspecific((pthread_key_t)pplVar11);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e5ae0();
            plVar9 = local_48;
            if (local_40[0] == '\0') {
              if (local_48 != (longlong *)0x0) {
                FUN_00d50b00();
                if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_002f02c0;
              }
            }
            else if (local_48 != (longlong *)0x0) {
LAB_002f02c0:
              if (*(int *)((longlong)plVar9 + 0xc) != 0) {
                if (local_58 == (char *)0x0) {
                  pcVar6 = (char *)FUN_00e8fc40();
                  FUN_00d4ff40();
                  *(undefined **)pcVar6 = &DAT_02572358;
                  uVar7 = (*pcVar1)();
                  local_b8 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
                  local_58 = pcVar6;
                }
                FUN_00d23310();
                plVar9 = local_48;
                local_38[0] = local_40[0];
                pcVar6 = local_40;
                if (local_40[0] == '\0') {
                  pcVar6 = local_38;
                }
                *pcVar6 = '\0';
                if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (local_38[0] == '\0') {
                  if (local_48 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_38[0] = '\0';
                }
                local_40[0] = '\0';
                FUN_00d21140();
                if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar9 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
              }
              FUN_00d50b20();
            }
            if (local_c8 != '\0') {
              FUN_00d50b20();
            }
          }
        }
        FUN_000840d0();
        FUN_00d50b20();
      }
    }
    pcVar6 = local_a0;
    FUN_002e0650();
    FUN_00d50b20();
    if (local_58 != (char *)0x0) {
      local_a8 = '\0';
      local_b0 = (char *)0x0;
      local_a0 = local_58;
      local_90 = 0;
      local_98 = 0;
      if (*(int *)(local_58 + 0xc) < 1) {
        local_50 = (longlong *)0x0;
        local_60 = (char *)0x0;
      }
      else {
        lVar4 = 0;
        local_60 = (char *)0x0;
        local_50 = (longlong *)0x0;
        do {
          local_b0 = *(char **)(*(longlong *)(local_58 + 0x10) + lVar4 * 8);
          pvVar5 = _pthread_getspecific((pthread_key_t)pcVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01264240();
          if (local_88 == (longlong *)0x0) {
            bVar13 = false;
          }
          else {
            pvVar5 = _pthread_getspecific((pthread_key_t)pcVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e7c0();
            bVar13 = local_48 != (longlong *)0x0;
            if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((local_80[0] != '\0') && (local_88 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          pVar10 = (pthread_key_t)pcVar6;
          if (bVar13) {
            pvVar5 = _pthread_getspecific(pVar10);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01264240();
            pvVar5 = _pthread_getspecific(pVar10);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01327a50();
            FUN_00d23310();
            plVar9 = local_88;
            local_38[0] = local_80[0];
            pcVar6 = local_38;
            pcVar8 = local_80;
            if (local_80[0] == '\0') {
              pcVar8 = pcVar6;
            }
            *pcVar8 = '\0';
            if ((local_80[0] != '\0') && (local_88 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            pvVar5 = _pthread_getspecific((pthread_key_t)pcVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e7c0();
            plVar2 = local_88;
            if ((local_80[0] != '\0') && (local_88 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38[0] != '\0') && (plVar9 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_c0 != '\0') && (CONCAT71(uStack_c7,local_c8) != 0)) {
              FUN_00d50b20();
            }
            if (plVar9 == plVar2) {
              if (local_50 == (longlong *)0x0) {
                plVar9 = (longlong *)FUN_00e8fc40();
                FUN_00d4ff40();
                *plVar9 = (longlong)&DAT_02572358;
                uVar7 = (*pcVar1)();
                local_60 = (char *)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
                local_50 = plVar9;
              }
              pvVar5 = _pthread_getspecific((pthread_key_t)pcVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125a280();
              FUN_00d470c0();
              plVar9 = local_48;
              if (local_40[0] == '\0') {
                if (local_48 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_40[0] = '\0';
              }
              local_88 = plVar9;
              local_80[0] = '\0';
              FUN_00d235a0();
              if ((local_80[0] != '\0') && (local_88 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar9 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          lVar4 = lVar4 + 1;
          local_98 = CONCAT44(local_98._4_4_,(int)lVar4);
        } while ((int)lVar4 < *(int *)(local_58 + 0xc));
      }
      FUN_001159b0();
      bVar13 = false;
      cVar3 = (char)local_60;
      plVar9 = local_50;
      goto LAB_002f07f5;
    }
  }
  bVar13 = true;
  local_58 = (char *)0x0;
  cVar3 = '\0';
  plVar9 = (longlong *)0x0;
LAB_002f07f5:
  FUN_01bf20d0();
  if ((cVar3 != '\0') && (plVar9 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)local_b8 != '\0' && !bVar13) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00654180 — 2064 bytes
// str: ""MDWorkspaceView""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00654180(void)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  char *pcVar10;
  longlong *unaff_RDI;
  longlong *plVar11;
  longlong **pplVar12;
  bool bVar13;
  double dVar14;
  undefined8 uVar15;
  longlong *local_a0;
  undefined1 local_98;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_01f27fe0();
  FUN_002a0530();
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar8 = unaff_RDI + 0x29;
  if (((longlong *)unaff_RDI[0x29] != (longlong *)0x0) &&
     ((**(code **)(*(longlong *)unaff_RDI[0x29] + 0x9b0))(), *plVar8 != 0)) {
    *plVar8 = 0;
    FUN_00d50b20();
  }
  local_60 = plVar8;
  FUN_01e561b0();
  if (local_70 == 0) {
    bVar5 = 0;
  }
  else {
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_88 + 0x450))();
    plVar8 = DAT_026e1800;
    if (cVar4 == '\0') {
      bVar5 = 0;
    }
    else {
      if (DAT_026e1800 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      dVar14 = (double)FUN_00e7d6f0();
      uVar7 = (ulonglong)(dVar14 * DAT_023907c0);
      dVar14 = dVar14 * DAT_023907c0 - _DAT_023907c8;
      uVar15 = FUN_0071a120();
      if ((((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) &&
          (uVar15 = FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (longlong *)0x0)) {
        uVar15 = FUN_00d50b20();
      }
      bVar5 = (byte)(((longlong)dVar14 & (longlong)uVar7 >> 0x3f | uVar7) / 3);
      local_58 = plVar8;
      local_50 = '\0';
      FUN_000175c0(uVar15,&local_58);
      plVar9 = local_48;
      if (local_40[0] == '\0') {
        if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar9 != (longlong *)0x0) {
        local_40[0] = '\0';
        local_48 = plVar9;
        bVar5 = FUN_00c70bc0();
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
      bVar5 = plVar9 != (longlong *)0x0 & bVar5;
      if (plVar8 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (bVar5 == 0) goto LAB_00654911;
  FUN_01e561b0();
  FUN_01d8b220();
  plVar8 = local_48;
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 == (longlong *)0x0) goto LAB_00654911;
  FUN_01e561b0();
  pplVar12 = &local_58;
  FUN_01d8b220();
  plVar8 = local_58;
  FUN_0006d940();
  if (plVar8 == (longlong *)0x0) {
LAB_00654443:
    pplVar12 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_00654443;
  }
  plVar8 = *pplVar12;
  if (*(char *)(pplVar12 + 1) == '\0') {
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar12 + 1) = 0;
  }
  local_38[0] = '\0';
  local_88 = plVar8;
  local_78 = plVar8;
  do {
    plVar8 = local_88;
    FUN_01e40eb0();
    plVar9 = local_48;
    if (local_48 == plVar8) {
      if (((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) && (local_40[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_006544fa;
      }
    }
    else {
      local_88 = local_48;
      if (local_40[0] == '\0') {
        pcVar10 = local_38;
        if (plVar8 != (longlong *)0x0 && local_38[0] != '\0') {
          FUN_00d50b20();
          pcVar10 = local_38;
        }
      }
      else {
        if (plVar8 != (longlong *)0x0 && local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
        plVar8 = plVar9;
LAB_006544fa:
        local_38[0] = '\x01';
        pcVar10 = local_40;
        plVar9 = plVar8;
      }
      *pcVar10 = '\0';
      plVar8 = plVar9;
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((DAT_026fddd0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
      _DAT_026d9988 = FUN_0006d940();
      _DAT_026d9970 = "MDWorkspaceView";
      _DAT_026d9978 = 0x188;
      _DAT_026d9980 = FUN_000a3150;
      _DAT_026d9990 = 0;
      uRam00000000026d9998 = 0;
      _DAT_026d99a0 = 0;
      _DAT_026d9a18 = 0;
      uRam00000000026d9a20 = 0;
      _DAT_026d9a28 = 0;
      DAT_026d9a2a = 1;
      _DAT_026d99a8 = 0;
      uRam00000000026d99b0 = 0;
      _DAT_026d99b8 = 0;
      uRam00000000026d99c0 = 0;
      _DAT_026d99c8 = 0;
      uRam00000000026d99d0 = 0;
      _DAT_026d99d8 = 0;
      uRam00000000026d99e0 = 0;
      _DAT_026d99e8 = 0;
      uRam00000000026d99f0 = 0;
      _DAT_026d99f8 = 0;
      uRam00000000026d9a00 = 0;
      _DAT_026d9a08 = 0;
      uRam00000000026d9a10 = 0;
      DAT_026d9a33 = 0;
      _DAT_026d9a2b = 0;
      ___cxa_guard_release();
    }
    pplVar12 = (longlong **)&DAT_02802688;
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x360))();
      cVar4 = FUN_00e85ea0();
      pplVar12 = &local_88;
      if (cVar4 == '\0') {
        pplVar12 = (longlong **)&DAT_02802688;
      }
    }
    plVar9 = local_78;
    plVar8 = local_88;
    if (*pplVar12 != (longlong *)0x0) {
      bVar2 = false;
      bVar13 = true;
      bVar3 = true;
      if (local_38[0] != '\0') goto LAB_006546d8;
      if (local_88 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      bVar2 = false;
      plVar11 = (longlong *)*local_60;
      if (plVar11 == plVar8) goto LAB_006546ef;
      goto LAB_006546a4;
    }
  } while (local_88 != (longlong *)0x0);
  bVar2 = true;
  plVar8 = (longlong *)0x0;
  bVar3 = false;
LAB_006546d8:
  bVar13 = bVar3;
  plVar11 = (longlong *)*local_60;
  if (plVar11 == plVar8) {
LAB_006546ef:
    if (!bVar2 && plVar8 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
LAB_006546a4:
    if (!bVar13 && plVar8 != (longlong *)0x0) {
      FUN_00d50b00();
      plVar11 = (longlong *)*local_60;
    }
    *local_60 = (longlong)plVar8;
    if (plVar11 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (plVar9 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  plVar9 = local_60;
  plVar8 = (longlong *)*local_60;
  FUN_000b6330();
  if (plVar8 == (longlong *)0x0) {
LAB_00654768:
    plVar9 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_00654768;
  }
  lVar1 = *plVar9;
  if (lVar1 != 0) {
    FUN_00d50b00();
    uVar15 = FUN_000b51b0();
    plVar8 = local_58;
    if (local_50 == '\0') {
      if (local_58 != (longlong *)0x0) {
        uVar15 = FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_98 = 1;
    local_a0 = plVar8;
    FUN_00654070(uVar15,&local_a0);
    plVar9 = local_48;
    if ((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar8 = local_60;
    if (plVar9 != (longlong *)0x0) {
      FUN_01e40eb0();
      plVar8 = (longlong *)*plVar8;
      if (plVar8 != local_48) {
        if (local_40[0] == '\0') {
          if (local_48 == (longlong *)0x0) {
            plVar9 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar8 = (longlong *)*local_60;
            plVar9 = local_48;
          }
        }
        else {
          local_40[0] = '\0';
          plVar9 = local_48;
        }
        *local_60 = (longlong)plVar9;
        if (plVar8 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00212c70();
      FUN_00d50b20();
    }
  }
  if ((longlong *)*local_60 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*local_60 + 0x990))();
    uVar15 = (**(code **)(*(longlong *)*local_60 + 0x9b0))();
    if (unaff_RDI[0x18] != 0) {
      uVar15 = FUN_0009b2d0(uVar15,0);
    }
    if (unaff_RDI[0x19] != 0) {
      FUN_0009b2d0(uVar15,0);
    }
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
LAB_00654911:
  FUN_01e561b0();
  if (local_48 == (longlong *)0x0) {
    bVar13 = false;
  }
  else {
    FUN_01e561b0();
    FUN_01d8b220();
    bVar13 = local_58 != (longlong *)0x0;
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar13) {
    (**(code **)(*unaff_RDI + 0x400))();
  }
  return;
}




// ============================================================
// @002ef240 — 1501 bytes
// str: ""MDWorkspaceView""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x002ef382) */
/* WARNING: Removing unreachable block (ram,0x002ef2e5) */
/* WARNING: Removing unreachable block (ram,0x002ef2f1) */
/* WARNING: Removing unreachable block (ram,0x002ef3f4) */
/* WARNING: Removing unreachable block (ram,0x002ef3fd) */
/* WARNING: Removing unreachable block (ram,0x002ef5ef) */
/* WARNING: Removing unreachable block (ram,0x002ef5f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002ef240(void)

{
  longlong *plVar1;
  bool bVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong *unaff_RDI;
  longlong **pplVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong local_b0;
  char local_a8;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  int local_40;
  int iStack_3c;
  int local_38;
  
  FUN_002eb090();
  plVar3 = local_58;
  if ((local_50 == '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_002eacb0();
  plVar4 = local_58;
  if ((local_50 == '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  uVar13 = (**(code **)(*unaff_RDI + 0x530))();
  FUN_01beb250();
  FUN_002eacb0();
  plVar5 = local_58;
  if ((local_50 == '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_002eb090();
  plVar6 = local_58;
  if ((local_50 == '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  bVar2 = true;
  if (*(int *)((longlong)plVar4 + 0xc) == *(int *)((longlong)plVar5 + 0xc)) {
    local_50 = '\0';
    local_58 = (longlong *)0x0;
    local_48 = plVar4;
    local_40 = -1;
    iStack_3c = 0;
    local_38 = 0;
    while( true ) {
      lVar11 = (longlong)local_40;
      local_40 = local_40 + 1;
      bVar2 = local_40 < *(int *)((longlong)local_48 + 0xc);
      if (*(int *)((longlong)local_48 + 0xc) <= local_40) break;
      local_58 = *(longlong **)(local_48[2] + 8 + lVar11 * 8);
      cVar8 = FUN_00d23d70();
      if (cVar8 == '\0') break;
      if (iStack_3c != 0) {
        if (iStack_3c < 1) {
          iStack_3c = -iStack_3c;
        }
        else {
          local_40 = local_40 - iStack_3c;
          FUN_00d23690();
          local_38 = local_38 + iStack_3c;
          iStack_3c = 0;
        }
      }
    }
    FUN_000be170();
  }
  FUN_00d403d0();
  lVar11 = DAT_026fe4b0;
  if (DAT_026fe4b0 != 0) {
    FUN_00d50b00();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_b0 = 0;
  local_a8 = '\0';
  FUN_00d40470(&local_b0,&stack0xffffffffffffff60,1,3);
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar14 = (**(code **)(*unaff_RDI + 0x530))();
  if ((((float)uVar13 == (float)uVar14) && (!NAN((float)uVar13) && !NAN((float)uVar14))) &&
     ((float)((ulonglong)uVar13 >> 0x20) == (float)((ulonglong)uVar14 >> 0x20))) goto LAB_002ef71e;
  if ((!bVar2) && (*(int *)((longlong)plVar3 + 0xc) == *(int *)((longlong)plVar6 + 0xc))) {
    local_50 = '\0';
    local_58 = (longlong *)0x0;
    local_48 = plVar3;
    iStack_3c = 0;
    local_38 = 0;
    local_40 = -1;
    bVar2 = false;
    do {
      if (iStack_3c != 0) {
        if (iStack_3c < 1) {
          iStack_3c = -iStack_3c;
        }
        else {
          local_40 = local_40 - iStack_3c;
          FUN_00d23690();
          local_38 = local_38 + iStack_3c;
          iStack_3c = 0;
        }
      }
      local_40 = local_40 + 1;
      if (*(int *)((longlong)local_48 + 0xc) <= local_40) break;
      local_58 = *(longlong **)(local_48[2] + (longlong)local_40 * 8);
      iVar9 = FUN_00d237a0();
      iVar10 = (uint)(iVar9 == -1) << 2;
      bVar7 = iVar9 != -1;
      if (iVar9 == local_38 + local_40) {
        iVar10 = 5;
        bVar7 = bVar2;
      }
      bVar2 = bVar7;
    } while ((iVar10 == 0) || (iVar10 == 5));
    FUN_000be170();
    if (bVar2) goto LAB_002ef71e;
  }
  pplVar12 = &local_58;
  FUN_01e40eb0();
  plVar1 = local_58;
  if ((DAT_026fddd0 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
    _DAT_026d9988 = FUN_0006d940();
    _DAT_026d9970 = "MDWorkspaceView";
    _DAT_026d9978 = 0x188;
    _DAT_026d9980 = FUN_000a3150;
    _DAT_026d9990 = 0;
    uRam00000000026d9998 = 0;
    _DAT_026d99a0 = 0;
    _DAT_026d9a18 = 0;
    uRam00000000026d9a20 = 0;
    _DAT_026d9a28 = 0;
    DAT_026d9a2a = 1;
    _DAT_026d99a8 = 0;
    uRam00000000026d99b0 = 0;
    _DAT_026d99b8 = 0;
    uRam00000000026d99c0 = 0;
    _DAT_026d99c8 = 0;
    uRam00000000026d99d0 = 0;
    _DAT_026d99d8 = 0;
    uRam00000000026d99e0 = 0;
    _DAT_026d99e8 = 0;
    uRam00000000026d99f0 = 0;
    _DAT_026d99f8 = 0;
    uRam00000000026d9a00 = 0;
    _DAT_026d9a08 = 0;
    uRam00000000026d9a10 = 0;
    DAT_026d9a33 = 0;
    _DAT_026d9a2b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_002ef692:
    pplVar12 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar8 = FUN_00e85ea0();
    if (cVar8 == '\0') goto LAB_002ef692;
  }
  plVar1 = *pplVar12;
  if (*(char *)(pplVar12 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar12 + 1) = 0;
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x9c0))();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
LAB_002ef71e:
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @005e4870 — 934 bytes
// str: ""bool""
// str: ""_size""
// str: ""MDWorkspaceView""
// str: ""_isVertical""
// str: ""GNCoord""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005e4870(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_000a5ee0();
  *unaff_RDI = &DAT_02501bf8;
  unaff_RDI[2] = &DAT_025025f0;
  *(undefined1 *)(unaff_RDI + 0x31) = 0;
  lVar2 = FUN_003b6560();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0271eb50 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0271eb18 = FUN_003b6560();
        _DAT_0271eb10 = "_isVertical";
        _DAT_0271eb20 = 0;
        _DAT_0271eb28 = 0x6200;
        _DAT_0271eb30 = "bool";
        _DAT_0271eb38 = 0;
        uRam000000000271eb40 = 0;
        _DAT_0271eb48 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x32] = 0;
  lVar2 = FUN_003b6560();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e4cd0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDWorkspaceView");
  }
  unaff_RDI[0x33] = 0;
  lVar2 = FUN_003b6560();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e4dc0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDWorkspaceView");
  }
  *(undefined1 *)(unaff_RDI + 0x34) = 0;
  lVar2 = FUN_003b6560();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0271ec28 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0271ebf0 = FUN_003b6560();
        _DAT_0271ebe8 = "_allowsChainedResize";
        _DAT_0271ebf8 = 0;
        _DAT_0271ec00 = 0x6200;
        _DAT_0271ec08 = "bool";
        _DAT_0271ec10 = 0;
        uRam000000000271ec18 = 0;
        _DAT_0271ec20 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x1a4) = 0;
  lVar2 = FUN_003b6560();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0271ec70 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0271ec38 = FUN_003b6560();
        _DAT_0271ec30 = "_size";
        _DAT_0271ec40 = 0;
        _DAT_0271ec48 = 0x6600;
        _DAT_0271ec50 = "GNCoord";
        _DAT_0271ec58 = 0;
        uRam000000000271ec60 = 0;
        _DAT_0271ec68 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x35) = 0;
  lVar2 = FUN_003b6560();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0271ecb8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0271ec80 = FUN_003b6560();
        _DAT_0271ec78 = "_paddingLineSize";
        _DAT_0271ec88 = 0;
        _DAT_0271ec90 = 0x6600;
        _DAT_0271ec98 = "GNCoord";
        _DAT_0271eca0 = 0;
        uRam000000000271eca8 = 0;
        _DAT_0271ecb0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @004b3c80 — 927 bytes
// str: ""MDWorkspaceView""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b3c80(void)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong unaff_RDI;
  longlong *plVar8;
  longlong local_30;
  char local_28;
  
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_0006daf0();
  *puVar6 = &DAT_024f1490;
  puVar6[2] = &DAT_024f1e80;
  *(undefined4 *)(puVar6 + 0x27) = 0;
  *(undefined4 *)((longlong)puVar6 + 0x13b) = 0;
  puVar6[0x28] = 0;
  puVar6[0x29] = 0;
  puVar6[0x2a] = 0;
  puVar6[0x2b] = 0;
  puVar6[0x2c] = 0;
  puVar6[0x2d] = 0;
  puVar6[0x2e] = 0;
  puVar6[0x2f] = 0;
  puVar6[0x30] = 0;
  (*DAT_024f14a8)();
  plVar8 = (longlong *)(unaff_RDI + 0x10);
  puVar1 = *(undefined8 **)(unaff_RDI + 0x10);
  if (puVar1 == puVar6) {
    FUN_00d50b20();
  }
  else {
    *plVar8 = (longlong)puVar6;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  if (*(longlong *)(unaff_RDI + 0x18) != 0) {
    *(undefined8 *)(unaff_RDI + 0x18) = 0;
    FUN_00d50b20();
  }
  FUN_01e4cf40(_DAT_023b47c0);
  (**(code **)(*(longlong *)*plVar8 + 0x4d0))(0,_DAT_023b47d0);
  plVar2 = (longlong *)*plVar8;
  if ((DAT_026fddd0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_026d9988 = FUN_0006d940();
    _DAT_026d9970 = "MDWorkspaceView";
    _DAT_026d9978 = 0x188;
    _DAT_026d9980 = FUN_000a3150;
    _DAT_026d9990 = 0;
    uRam00000000026d9998 = 0;
    _DAT_026d99a0 = 0;
    _DAT_026d9a18 = 0;
    uRam00000000026d9a20 = 0;
    _DAT_026d9a28 = 0;
    DAT_026d9a2a = 1;
    _DAT_026d99a8 = 0;
    uRam00000000026d99b0 = 0;
    _DAT_026d99b8 = 0;
    uRam00000000026d99c0 = 0;
    _DAT_026d99c8 = 0;
    uRam00000000026d99d0 = 0;
    _DAT_026d99d8 = 0;
    uRam00000000026d99e0 = 0;
    _DAT_026d99e8 = 0;
    uRam00000000026d99f0 = 0;
    _DAT_026d99f8 = 0;
    uRam00000000026d9a00 = 0;
    _DAT_026d9a08 = 0;
    uRam00000000026d9a10 = 0;
    DAT_026d9a33 = 0;
    _DAT_026d9a2b = 0;
    ___cxa_guard_release();
  }
  if (plVar2 == (longlong *)0x0) {
LAB_004b3d96:
    plVar8 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_004b3d96;
  }
  (**(code **)(*(longlong *)*plVar8 + 0x990))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x558))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x948))();
  FUN_0033c9c0();
  lVar3 = *(longlong *)(unaff_RDI + 0x70);
  lVar7 = lVar3;
  if (lVar3 != local_30) {
    lVar7 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar7 = 0;
        goto LAB_004b3df4;
      }
      FUN_00d50b00();
      lVar3 = *(longlong *)(unaff_RDI + 0x70);
      *(longlong *)(unaff_RDI + 0x70) = local_30;
    }
    else {
      local_28 = '\0';
LAB_004b3df4:
      *(longlong *)(unaff_RDI + 0x70) = lVar7;
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
      lVar7 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  FUN_0033c9c0();
  lVar3 = *(longlong *)(unaff_RDI + 0x78);
  lVar7 = lVar3;
  if (lVar3 != local_30) {
    lVar7 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar7 = 0;
        goto LAB_004b3e6b;
      }
      FUN_00d50b00();
      lVar3 = *(longlong *)(unaff_RDI + 0x78);
      *(longlong *)(unaff_RDI + 0x78) = local_30;
    }
    else {
      local_28 = '\0';
LAB_004b3e6b:
      *(longlong *)(unaff_RDI + 0x78) = lVar7;
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
      lVar7 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  FUN_0033c9c0();
  lVar3 = *(longlong *)(unaff_RDI + 0x80);
  lVar7 = lVar3;
  if (lVar3 == local_30) goto LAB_004b3f2c;
  lVar7 = local_30;
  if (local_28 == '\0') {
    if (local_30 == 0) {
      lVar7 = 0;
      goto LAB_004b3ee5;
    }
    FUN_00d50b00();
    lVar3 = *(longlong *)(unaff_RDI + 0x80);
    *(longlong *)(unaff_RDI + 0x80) = local_30;
  }
  else {
    local_28 = '\0';
LAB_004b3ee5:
    *(longlong *)(unaff_RDI + 0x80) = lVar7;
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
    lVar7 = local_30;
  }
LAB_004b3f2c:
  if ((local_28 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @002f0c60 — 849 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x002f0ca0) */
/* WARNING: Removing unreachable block (ram,0x002f0cac) */

void FUN_002f0c60(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar4;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  FUN_01bf1540();
  uVar4 = (**(code **)(*unaff_RDI + 0x640))();
  plVar1 = local_60;
  local_a0 = DAT_026fe4b8;
  if (DAT_026fe4b8 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_98 = '\x01';
  (**(code **)(*plVar1 + 0x3b0))(uVar4,&local_a0);
  local_70 = local_40;
  local_68 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_68 = '\x01';
  FUN_01d488d0();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40(DAT_02394298);
  plVar1 = (longlong *)*unaff_RSI;
  FUN_01e3f820();
  FUN_00d05530();
  (**(code **)(*plVar1 + 0x3b8))();
  uVar4 = (**(code **)(*unaff_RDI + 0x640))();
  plVar1 = local_60;
  local_90 = DAT_026e41f0;
  if (DAT_026e41f0 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_88 = '\x01';
  (**(code **)(*plVar1 + 0x3b0))(uVar4,&local_90);
  local_50 = local_40;
  local_48 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_48 = '\x01';
  FUN_01d488d0();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40(DAT_02390124);
  lVar3 = unaff_RDI[0x5a];
  if (lVar3 != 0) goto LAB_002f0f5c;
  FUN_01e3f820();
  FUN_01d39800();
  lVar3 = unaff_RDI[0x5a];
  lVar2 = lVar3;
  if (lVar3 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar2 = 0;
        goto LAB_002f0efa;
      }
      FUN_00d50b00();
      lVar3 = unaff_RDI[0x5a];
      unaff_RDI[0x5a] = local_40;
      lVar2 = local_40;
    }
    else {
      local_38 = '\0';
      lVar2 = local_40;
LAB_002f0efa:
      unaff_RDI[0x5a] = lVar2;
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
      lVar2 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = unaff_RDI[0x5a];
LAB_002f0f5c:
  plVar1 = (longlong *)*unaff_RSI;
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  local_78 = '\x01';
  local_80 = lVar3;
  (**(code **)(*plVar1 + 0x3a8))();
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @000a6b00 — 704 bytes
// str: ""MDWorkspaceView""
// str: ""GNBorderStyle""
// str: ""_borderStyle""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_000a6b00(void)

{
  byte bVar1;
  int iVar2;
  
  if (DAT_026daa20 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      _DAT_026da9c0 = _DAT_0238fcc0;
      _DAT_026da9c8 = _UNK_0238fcc8;
      DAT_026da9d0 = _DAT_0238ff10;
      DAT_026da9d4 = _UNK_0238ff14;
      DAT_026da9d8 = _UNK_0238ff18;
      DAT_026da9dc = _UNK_0238ff1c;
      bVar1 = FUN_000a6df0(_DAT_0238ff10,8);
      DAT_026daa18 = (DAT_026da9c4 == 1 && DAT_026da9c8 == 2) &
                     (DAT_026da9cc == 3 && (DAT_026da9d0 == 4 && DAT_026da9d4 == 5)) &
                     (DAT_026da9d8 == 6 && DAT_026da9dc == 7) & bVar1 & DAT_026da9e0 == 8;
      ___cxa_guard_release();
    }
  }
  if (DAT_026daa58 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      _DAT_026daa28 = "GNBorderStyle";
      _DAT_026daa30 = 0x16;
      DAT_026daa34 = DAT_026daa18;
      _DAT_026daa38 = &DAT_026da9c0;
      _DAT_026daa40 = &DAT_026da900;
      _DAT_026daa48 = 0;
      uRam00000000026daa50 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_026da8f0 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      if (DAT_026fddd0 == '\0') {
        iVar2 = ___cxa_guard_acquire();
        if (iVar2 != 0) {
          _DAT_026d9988 = FUN_0006d940();
          _DAT_026d9970 = "MDWorkspaceView";
          _DAT_026d9978 = 0x188;
          _DAT_026d9980 = FUN_000a3150;
          _DAT_026d9990 = 0;
          uRam00000000026d9998 = 0;
          _DAT_026d99a0 = 0;
          _DAT_026d9a18 = 0;
          uRam00000000026d9a20 = 0;
          _DAT_026d9a28 = 0;
          DAT_026d9a2a = 1;
          _DAT_026d99a8 = 0;
          uRam00000000026d99b0 = 0;
          _DAT_026d99b8 = 0;
          uRam00000000026d99c0 = 0;
          _DAT_026d99c8 = 0;
          uRam00000000026d99d0 = 0;
          _DAT_026d99d8 = 0;
          uRam00000000026d99e0 = 0;
          _DAT_026d99e8 = 0;
          uRam00000000026d99f0 = 0;
          _DAT_026d99f8 = 0;
          uRam00000000026d9a00 = 0;
          _DAT_026d9a08 = 0;
          uRam00000000026d9a10 = 0;
          DAT_026d9a33 = 0;
          _DAT_026d9a2b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_026da8b0 = "_borderStyle";
      _DAT_026da8b8 = &DAT_026d9970;
      _DAT_026da8c0 = 0;
      _DAT_026da8c8 = 0x6500;
      _DAT_026da8d0 = "GNBorderStyle";
      _DAT_026da8d8 = &DAT_026daa28;
      _DAT_026da8e0 = 0;
      uRam00000000026da8e8 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_026da8b0;
}




// ============================================================
// @002efb20 — 694 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x002efd66) */
/* WARNING: Removing unreachable block (ram,0x002efd6f) */
/* WARNING: Removing unreachable block (ram,0x002efd1b) */
/* WARNING: Removing unreachable block (ram,0x002efd24) */
/* WARNING: Removing unreachable block (ram,0x002efdc6) */
/* WARNING: Removing unreachable block (ram,0x002efdcf) */
/* WARNING: Removing unreachable block (ram,0x002efbb9) */
/* WARNING: Removing unreachable block (ram,0x002efbe0) */
/* WARNING: Removing unreachable block (ram,0x002efbbb) */
/* WARNING: Removing unreachable block (ram,0x002efbe2) */

void FUN_002efb20(void)

{
  longlong *plVar1;
  longlong lVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  longlong *local_70;
  char local_68;
  double local_60;
  longlong *local_58;
  char local_50;
  int local_40;
  
  plVar1 = local_58;
  FUN_002eb090();
  if (local_50 == '\0') {
    if (local_58 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_58 == (longlong *)0x0) {
    return;
  }
  local_58 = (longlong *)0x0;
  local_40 = -1;
  local_60 = 0.0;
  dVar6 = local_60;
  while( true ) {
    local_60 = dVar6;
    lVar2 = (longlong)local_40;
    local_40 = local_40 + 1;
    if (*(int *)((longlong)plVar1 + 0xc) <= local_40) break;
    lVar5 = *(longlong *)((longlong)plVar1 + 0x10);
    local_58 = *(longlong **)(lVar5 + 8 + lVar2 * 8);
    pvVar3 = _pthread_getspecific((pthread_key_t)lVar5);
    pVar4 = (pthread_key_t)lVar5;
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6a50();
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    dVar6 = local_60;
    if (local_70 != (longlong *)0x0) {
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar6 = (double)FUN_012ebd30();
      if (dVar6 <= local_60) {
        dVar6 = local_60;
      }
    }
  }
  FUN_000be170();
  FUN_00d50b20();
  if ((local_60 != 0.0) || (NAN(local_60))) {
    FUN_01be80e0();
    dVar6 = (double)(**(code **)(*local_58 + 0x368))();
    FUN_01be80e0();
    dVar7 = (double)(**(code **)(*local_70 + 0x378))();
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (dVar6 + dVar7 < local_60) {
      FUN_01be80e0();
      dVar6 = (double)(**(code **)(*local_58 + 0x368))();
      local_60 = local_60 / DAT_02394de0;
      FUN_01be80e0();
      (**(code **)(*local_58 + 0x380))((double)((int)local_60 * 0x1e + 0x1e) - dVar6);
    }
  }
  return;
}




// ============================================================
// @008874c0 — 626 bytes
// str: ""MDWorkspaceView""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x008875ac) */
/* WARNING: Removing unreachable block (ram,0x008875b5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_008874c0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 unaff_RBX;
  undefined7 uVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar7;
  float extraout_XMM0_Db;
  float fVar8;
  float fVar9;
  longlong local_70;
  char local_68;
  
  fVar8 = (float)((ulonglong)param_2 >> 0x20);
  (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x4d8))();
  uVar6 = (undefined7)((ulonglong)unaff_RBX >> 8);
  cVar3 = '\x01';
  fVar9 = 0.0;
  if (fVar8 < DAT_023b8c38) goto LAB_00887658;
  plVar5 = (longlong *)*unaff_RSI;
  if ((DAT_026fddd0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_026d9988 = FUN_0006d940();
    _DAT_026d9970 = "MDWorkspaceView";
    _DAT_026d9978 = 0x188;
    _DAT_026d9980 = FUN_000a3150;
    _DAT_026d9990 = 0;
    uRam00000000026d9998 = 0;
    _DAT_026d99a0 = 0;
    _DAT_026d9a18 = 0;
    uRam00000000026d9a20 = 0;
    _DAT_026d9a28 = 0;
    DAT_026d9a2a = 1;
    _DAT_026d99a8 = 0;
    uRam00000000026d99b0 = 0;
    _DAT_026d99b8 = 0;
    uRam00000000026d99c0 = 0;
    _DAT_026d99c8 = 0;
    uRam00000000026d99d0 = 0;
    _DAT_026d99d8 = 0;
    uRam00000000026d99e0 = 0;
    _DAT_026d99e8 = 0;
    uRam00000000026d99f0 = 0;
    _DAT_026d99f8 = 0;
    uRam00000000026d9a00 = 0;
    _DAT_026d9a08 = 0;
    uRam00000000026d9a10 = 0;
    DAT_026d9a33 = 0;
    _DAT_026d9a2b = 0;
    ___cxa_guard_release();
  }
  if (plVar5 == (longlong *)0x0) {
LAB_00887533:
    plVar5 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar5 = unaff_RSI;
    if (cVar3 == '\0') goto LAB_00887533;
  }
  lVar1 = *plVar5;
  lVar2 = plVar5[1];
  if (((char)lVar2 != '\0') && (lVar1 != 0)) {
    FUN_00d50b00();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x938))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x938))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x4a0))();
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
      goto LAB_008875ba;
    }
  }
  else if (local_70 != 0) {
LAB_008875ba:
    for (lVar7 = 0; (int)lVar7 < *(int *)(local_70 + 0xc); lVar7 = lVar7 + 1) {
      (**(code **)(**(longlong **)(*(longlong *)(local_70 + 0x10) + lVar7 * 8) + 0x528))();
    }
    FUN_000a9680();
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x528))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x4d8))();
  cVar3 = -(extraout_XMM0_Db <= fVar9);
  uVar6 = 0;
  if (((char)lVar2 != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
LAB_00887658:
  return CONCAT71(uVar6,cVar3) & 0xffffff01;
}




// ============================================================
// @006c48c0 — 623 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x006c4a1d) */
/* WARNING: Removing unreachable block (ram,0x006c4a26) */
/* WARNING: Removing unreachable block (ram,0x006c4a99) */
/* WARNING: Removing unreachable block (ram,0x006c4aa2) */

void FUN_006c48c0(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong **pplVar6;
  longlong unaff_RDI;
  longlong lVar7;
  longlong *local_b0;
  undefined1 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong *local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x38);
  if (lVar1 != 0) {
    local_a8 = 0;
    local_b0 = (longlong *)0x0;
    local_90 = 0;
    local_98 = 0;
    local_a0 = lVar1;
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar7 = 0;
      do {
        plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + lVar7 * 8);
        local_b0 = plVar2;
        FUN_003b6560();
        pplVar6 = (longlong **)&DAT_02802688;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x360))();
          cVar5 = FUN_00e85ea0();
          pplVar6 = &local_b0;
          if (cVar5 == '\0') {
            pplVar6 = (longlong **)&DAT_02802688;
          }
        }
        plVar2 = *pplVar6;
        if (*(char *)(pplVar6 + 1) == '\0') {
          if (plVar2 != (longlong *)0x0) {
            FUN_00d50b00();
            goto LAB_006c49c4;
          }
        }
        else {
          *(undefined1 *)(pplVar6 + 1) = 0;
          if (plVar2 != (longlong *)0x0) {
LAB_006c49c4:
            local_58 = plVar2;
            FUN_00543980();
            lVar3 = local_78;
            if (local_70 == '\0') {
              if (local_78 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_70 = '\0';
            }
            cVar5 = FUN_00d23d70();
            if (cVar5 == '\0') {
              cVar5 = '\0';
            }
            else {
              FUN_005439c0();
              lVar4 = local_68;
              if (local_60 == '\0') {
                if (local_68 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_60 = '\0';
              }
              cVar5 = FUN_00d23d70();
              if (lVar4 != 0) {
                FUN_00d50b20();
              }
              if ((local_60 != '\0') && (local_68 != 0)) {
                FUN_00d50b20();
              }
            }
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
            if ((local_70 != '\0') && (local_78 != 0)) {
              FUN_00d50b20();
            }
            if (cVar5 == '\0') {
              local_88 = local_58;
              local_80 = '\0';
              FUN_01e49bc0();
              if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
              break;
            }
            FUN_00d50b20();
          }
        }
        lVar7 = lVar7 + 1;
        local_98 = CONCAT44(local_98._4_4_,(int)lVar7);
      } while ((int)lVar7 < *(int *)(lVar1 + 0xc));
    }
    FUN_000a9680();
  }
  return;
}




// ============================================================
// @00655020 — 562 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00655132) */
/* WARNING: Removing unreachable block (ram,0x0065513b) */

ulonglong FUN_00655020(undefined8 param_1,byte param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *unaff_RDI;
  longlong local_80;
  char local_78;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0x5e0))();
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00655080;
    }
  }
  else if (local_40 != (longlong *)0x0) {
LAB_00655080:
    (**(code **)(*plVar1 + 0x468))();
    plVar2 = local_40;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 == (longlong *)0x0) {
LAB_00655165:
      uVar5 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x478))();
      uVar5 = (ulonglong)uVar3;
      if ((param_2 & (byte)uVar3) == 1) {
        (**(code **)(*unaff_RDI + 0x5d8))();
        plVar2 = local_40;
        if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
            (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01f27fe0();
        iVar4 = (**(code **)(*local_40 + 0x5c0))();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar4 != 0) {
          if (plVar2 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          goto LAB_00655165;
        }
        FUN_00612250();
        (**(code **)(*plVar1 + 0x468))();
        local_48 = 0;
        if (local_58 == '\0') {
          if (local_60 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        local_48 = '\x01';
        local_50 = local_60;
        (**(code **)(*local_40 + 0x610))(1,&local_50);
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if (local_38 != '\0') {
          FUN_00d50b20();
        }
        uVar5 = CONCAT71((int7)((ulonglong)local_60 >> 8),1);
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00d50b20();
    goto LAB_00655173;
  }
  uVar5 = 0;
LAB_00655173:
  return uVar5 & 0xffffffff;
}



