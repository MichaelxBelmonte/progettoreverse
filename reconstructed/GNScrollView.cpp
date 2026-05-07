// Reconstructed implementation of GNScrollView
// From MikeCore binary — reverse-engineered pseudocode

#include "GNScrollView.h"

// ============================================================
// @002b59d0 — 5585 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x002b5dab) */
/* WARNING: Removing unreachable block (ram,0x002b5db7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002b59d0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar11 [16];
  float fVar12;
  undefined4 uVar13;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar14 [16];
  float local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  longlong local_330;
  char local_328;
  longlong local_320;
  char local_318;
  longlong *local_310;
  char local_308;
  longlong *local_300;
  char local_2f8;
  longlong local_2f0;
  char local_2e8;
  longlong *local_2e0;
  char local_2d8;
  longlong *local_2d0;
  char local_2c8;
  longlong local_2c0;
  char local_2b8;
  longlong local_2b0;
  char local_2a8;
  longlong *local_2a0;
  char local_298;
  longlong local_290;
  char local_288;
  longlong local_280;
  char local_278;
  longlong *local_270;
  char local_268;
  longlong local_260;
  char local_258;
  longlong local_250;
  char local_248;
  longlong *local_240;
  char local_238;
  longlong local_230;
  char local_228;
  longlong local_220;
  char local_218;
  longlong *local_210;
  char local_208;
  longlong local_200;
  char local_1f8;
  longlong local_1f0;
  char local_1e8;
  longlong *local_1e0;
  char local_1d8;
  longlong local_1d0;
  char local_1c8;
  longlong local_1c0;
  char local_1b8;
  longlong *local_1b0;
  char local_1a8;
  longlong *local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong *local_170;
  char local_168;
  longlong *local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong *local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  uVar13 = (undefined4)((ulonglong)param_2 >> 0x20);
  fVar12 = (float)param_2;
  (**(code **)(*unaff_RSI + 0x20))();
  plVar6 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_002b6f81;
    }
  }
  else if (local_40 != (longlong *)0x0) goto LAB_002b6f81;
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_0006daf0();
  *plVar6 = (longlong)&DAT_024dbaf0;
  plVar6[2] = (longlong)&DAT_024dc430;
  plVar6[0x27] = 0;
  plVar6[0x28] = 0;
  *(undefined1 *)(plVar6 + 0x29) = 0;
  FUN_00d500e0();
  plVar6[0x27] = (longlong)unaff_RSI;
  plVar7 = (longlong *)(**(code **)(*unaff_RSI + 0x10))();
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_60 = plVar7;
  (**(code **)(*plVar6 + 0x640))();
  uVar9 = (**(code **)(*local_40 + 0x580))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  cVar5 = (**(code **)(*unaff_RSI + 0x48))();
  local_378 = (float)uVar9;
  if (cVar5 == '\0') {
    (**(code **)(*plVar7 + 0x4d8))();
    auVar11._4_4_ = uVar13;
    auVar11._0_4_ = fVar12 + DAT_023b1698;
    auVar11._8_4_ = in_XMM1_Dc;
    auVar11._12_4_ = in_XMM1_Dd;
    auVar11 = blendps(ZEXT816(0),auVar11,1);
    (**(code **)(*plVar6 + 0x4d0))(auVar11._0_8_,_DAT_023b16b0);
  }
  else {
    (**(code **)(*plVar7 + 0x4d8))();
    auVar14 = insertps(_DAT_023b16c0,ZEXT416((uint)(DAT_02390d00 + local_378 + DAT_023b169c)),0x10);
    auVar1._4_4_ = uVar13;
    auVar1._0_4_ = fVar12 + DAT_023b1698;
    auVar1._8_4_ = in_XMM1_Dc;
    auVar1._12_4_ = in_XMM1_Dd;
    auVar11 = blendps(ZEXT816(0),auVar1,1);
    (**(code **)(*plVar6 + 0x4d0))(auVar11._0_8_,auVar14._0_4_);
  }
  (**(code **)(*plVar6 + 0x570))();
  (**(code **)(*plVar6 + 0x558))();
  plVar7 = (longlong *)FUN_00e8fc40();
  FUN_0006daf0();
  *(undefined4 *)(plVar7 + 0x27) = 0;
  plVar7[0x2e] = 0;
  *(undefined4 *)(plVar7 + 0x2f) = 0;
  plVar7[0x30] = 0;
  *(undefined1 *)(plVar7 + 0x31) = 0;
  plVar7[0x28] = 0;
  plVar7[0x29] = 0;
  *(undefined4 *)(plVar7 + 0x2a) = 0;
  plVar7[0x2b] = 0;
  plVar7[0x2c] = 0;
  *(undefined8 *)((longlong)plVar7 + 0x165) = 0;
  *(undefined8 *)((longlong)plVar7 + 0x18c) = 0;
  *(undefined8 *)((longlong)plVar7 + 0x194) = 0;
  *(undefined8 *)((longlong)plVar7 + 0x199) = 0;
  plVar7[0x35] = 0;
  plVar7[0x36] = 0;
  plVar7[0x37] = 0;
  plVar7[0x38] = 0;
  *(undefined4 *)((longlong)plVar7 + 500) = 0;
  *(undefined1 *)(plVar7 + 0x3f) = 0;
  plVar7[0x43] = 0;
  plVar7[0x3c] = 0;
  plVar7[0x3d] = 0;
  plVar7[0x3a] = 0;
  plVar7[0x3b] = 0;
  *(undefined1 *)(plVar7 + 0x3e) = 0;
  *(undefined8 *)((longlong)plVar7 + 0x1fc) = 0;
  *(undefined8 *)((longlong)plVar7 + 0x204) = 0;
  *(undefined8 *)((longlong)plVar7 + 0x20c) = 0;
  *plVar7 = (longlong)&DAT_02687f80;
  plVar7[2] = (longlong)&DAT_02688a68;
  plVar7[0x39] = (longlong)&DAT_02688aa8;
  plVar7[0x44] = 0;
  *(undefined1 *)(plVar7 + 0x45) = 0;
  plVar7[0x46] = 0;
  *(undefined1 *)(plVar7 + 0x47) = 0;
  plVar7[0x48] = 0;
  *(undefined1 *)(plVar7 + 0x49) = 0;
  *(undefined4 *)((longlong)plVar7 + 0x24c) = 0;
  *(undefined1 *)(plVar7 + 0x4a) = 0;
  (*DAT_02687f98)();
  FUN_01cef4c0();
  FUN_01cef490();
  (**(code **)(*plVar7 + 0x558))();
  (**(code **)(*plVar7 + 0x4d0))();
  lVar3 = DAT_026deab0;
  if (DAT_026deab0 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar7 + 0xa10))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar7 + 0xa20))();
  FUN_01d7ac40();
  FUN_01cef4e0();
  lVar3 = DAT_026f6f70;
  if (DAT_026f6f70 != 0) {
    FUN_00d50b00();
  }
  lVar4 = DAT_026fc528;
  if (DAT_026fc528 != 0) {
    FUN_00d50b00();
  }
  local_330 = lVar4;
  local_328 = '\x01';
  local_320 = 0;
  local_318 = '\0';
  FUN_00d31230(&local_320,&local_330);
  local_c0 = local_40;
  local_b8 = 0;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_b8 = '\x01';
  (**(code **)(*plVar7 + 0x6a8))();
  if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_318 != '\0') && (local_320 != 0)) {
    FUN_00d50b20();
  }
  if ((local_328 != '\0') && (local_330 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  FUN_0027c9f0();
  local_58 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar8 = (longlong *)FUN_00e8fc40();
  FUN_002b8a90();
  (**(code **)(*plVar8 + 0x18))();
  local_308 = '\x01';
  local_310 = plVar8;
  FUN_01d779a0();
  if ((local_308 != '\0') && (local_310 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_2f0 = DAT_026fc520;
  local_2f8 = '\0';
  local_300 = plVar6;
  if (DAT_026fc520 != 0) {
    FUN_00d50b00();
  }
  local_2e8 = '\x01';
  local_2d8 = '\0';
  local_2e0 = plVar7;
  FUN_00d41430(&local_2e0,&local_2f0);
  if ((local_2d8 != '\0') && (local_2e0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_2e8 != '\0') && (local_2f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2f8 != '\0') && (local_300 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_2c0 = DAT_027f0f20;
  local_2c8 = '\0';
  local_2d0 = plVar6;
  if (DAT_027f0f20 != 0) {
    FUN_00d50b00();
  }
  local_2b8 = '\x01';
  local_2b0 = 0;
  local_2a8 = '\0';
  FUN_00d41430(&local_2b0,&local_2c0);
  if ((local_2a8 != '\0') && (local_2b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2b8 != '\0') && (local_2c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2c8 != '\0') && (local_2d0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_290 = DAT_027ebc60;
  local_298 = '\0';
  local_2a0 = plVar6;
  if (DAT_027ebc60 != 0) {
    FUN_00d50b00();
  }
  local_288 = '\x01';
  local_280 = 0;
  local_278 = '\0';
  FUN_00d41430(&local_280,&local_290);
  if ((local_278 != '\0') && (local_280 != 0)) {
    FUN_00d50b20();
  }
  if ((local_288 != '\0') && (local_290 != 0)) {
    FUN_00d50b20();
  }
  if ((local_298 != '\0') && (local_2a0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_260 = DAT_026f6e90;
  local_268 = '\0';
  local_270 = plVar6;
  if (DAT_026f6e90 != 0) {
    FUN_00d50b00();
  }
  local_258 = '\x01';
  local_250 = 0;
  local_248 = '\0';
  FUN_00d41430(&local_250,&local_260);
  if ((local_248 != '\0') && (local_250 != 0)) {
    FUN_00d50b20();
  }
  if ((local_258 != '\0') && (local_260 != 0)) {
    FUN_00d50b20();
  }
  if ((local_268 != '\0') && (local_270 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_230 = DAT_026fce70;
  local_238 = '\0';
  local_240 = plVar6;
  if (DAT_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_228 = '\x01';
  local_220 = 0;
  local_218 = '\0';
  FUN_00d41430(&local_220,&local_230);
  if ((local_218 != '\0') && (local_220 != 0)) {
    FUN_00d50b20();
  }
  if ((local_228 != '\0') && (local_230 != 0)) {
    FUN_00d50b20();
  }
  if ((local_238 != '\0') && (local_240 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_200 = DAT_026d7d88;
  local_208 = '\0';
  local_210 = plVar6;
  if (DAT_026d7d88 != 0) {
    FUN_00d50b00();
  }
  local_1f8 = '\x01';
  local_1f0 = 0;
  local_1e8 = '\0';
  FUN_00d41430(&local_1f0,&local_200);
  if ((local_1e8 != '\0') && (local_1f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1f8 != '\0') && (local_200 != 0)) {
    FUN_00d50b20();
  }
  if ((local_208 != '\0') && (local_210 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_1d0 = DAT_026f6d10;
  local_1d8 = '\0';
  local_1e0 = plVar6;
  if (DAT_026f6d10 != 0) {
    FUN_00d50b00();
  }
  local_1c8 = '\x01';
  local_1c0 = 0;
  local_1b8 = '\0';
  FUN_00d41430(&local_1c0,&local_1d0);
  plVar8 = local_60;
  if ((local_1b8 != '\0') && (local_1c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1c8 != '\0') && (local_1d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1d8 != '\0') && (local_1e0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_1a8 = '\0';
  local_1b0 = plVar7;
  (**(code **)(*plVar6 + 0x450))();
  if ((local_1a8 != '\0') && (local_1b0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  cVar5 = (**(code **)(*unaff_RSI + 0x48))();
  if (cVar5 == '\0') {
    local_50 = 0;
    local_48 = (longlong *)0x0;
  }
  else {
    plVar7 = (longlong *)FUN_00e8fc40();
    FUN_0006daf0();
    *(undefined4 *)(plVar7 + 0x27) = 0;
    plVar7[0x2e] = 0;
    *(undefined4 *)(plVar7 + 0x2f) = 0;
    plVar7[0x30] = 0;
    *(undefined1 *)(plVar7 + 0x31) = 0;
    plVar7[0x28] = 0;
    plVar7[0x29] = 0;
    *(undefined4 *)(plVar7 + 0x2a) = 0;
    plVar7[0x2b] = 0;
    plVar7[0x2c] = 0;
    *(undefined8 *)((longlong)plVar7 + 0x165) = 0;
    *(undefined8 *)((longlong)plVar7 + 0x18c) = 0;
    *(undefined8 *)((longlong)plVar7 + 0x194) = 0;
    *(undefined8 *)((longlong)plVar7 + 0x199) = 0;
    plVar7[0x35] = 0;
    plVar7[0x36] = 0;
    plVar7[0x37] = 0;
    plVar7[0x38] = 0;
    *plVar7 = (longlong)&DAT_02677e10;
    plVar7[2] = (longlong)&DAT_026788e8;
    plVar7[0x39] = (longlong)&DAT_02678928;
    *(undefined4 *)((longlong)plVar7 + 500) = 0;
    *(undefined1 *)(plVar7 + 0x3f) = 0;
    plVar7[0x43] = 0;
    plVar7[0x3c] = 0;
    plVar7[0x3d] = 0;
    plVar7[0x3a] = 0;
    plVar7[0x3b] = 0;
    *(undefined1 *)(plVar7 + 0x3e) = 0;
    *(undefined8 *)((longlong)plVar7 + 0x1fc) = 0;
    *(undefined8 *)((longlong)plVar7 + 0x204) = 0;
    *(undefined8 *)((longlong)plVar7 + 0x20c) = 0;
    (*DAT_02677e28)();
    FUN_01cef4c0();
    (**(code **)(*plVar7 + 0x558))();
    auVar11 = blendps(ZEXT416((uint)(DAT_023b16a0 - local_378)),_DAT_023b16e0,0xe);
    (**(code **)(*plVar7 + 0x4d0))(auVar11._0_8_,local_378);
    local_1a0 = plVar8;
    local_198 = '\0';
    (**(code **)(*plVar7 + 0xa20))();
    if ((local_198 != '\0') && (local_1a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar3 = DAT_026fb888;
    if (DAT_026fb888 != 0) {
      FUN_00d50b00();
    }
    local_190 = lVar3;
    local_188 = '\x01';
    (**(code **)(*plVar7 + 0xa10))();
    if ((local_188 != '\0') && (local_190 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d0fe80();
    uVar10 = (**(code **)(*plVar7 + 0xa18))();
    local_b0 = local_d0;
    local_a8 = 0;
    if (local_c8 == '\0') {
      if (local_d0 != 0) {
        uVar10 = FUN_00d50b00();
      }
    }
    else {
      local_c8 = '\0';
    }
    local_a8 = '\x01';
    FUN_01d5e6e0(uVar10,&local_b0);
    local_48 = local_40;
    if (local_40 == (longlong *)0x0) {
      local_48 = (longlong *)0x0;
      local_50 = 0;
    }
    else if (local_38 == '\0') {
      uVar10 = FUN_00d50b00();
      local_50 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      local_50 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 != (longlong *)0x0) {
      FUN_01d65230();
      local_a0 = local_40;
      local_98 = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_98 = '\x01';
      (**(code **)(*plVar7 + 0x6a8))();
      if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    lVar3 = DAT_026fc530;
    if (DAT_026fc530 != 0) {
      FUN_00d50b00();
    }
    local_180 = lVar3;
    local_178 = '\x01';
    FUN_01d51a40();
    local_90 = local_40;
    local_88 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_88 = '\x01';
    FUN_01cef3b0();
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_178 != '\0') && (local_180 != 0)) {
      FUN_00d50b20();
    }
    local_168 = '\0';
    local_170 = plVar7;
    (**(code **)(*plVar6 + 0x450))();
    if ((local_168 != '\0') && (local_170 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  plVar7 = (longlong *)FUN_00e8fc40();
  FUN_0006daf0();
  *(undefined4 *)(plVar7 + 0x27) = 0;
  plVar7[0x2e] = 0;
  *(undefined4 *)(plVar7 + 0x2f) = 0;
  plVar7[0x30] = 0;
  *(undefined1 *)(plVar7 + 0x31) = 0;
  plVar7[0x28] = 0;
  plVar7[0x29] = 0;
  *(undefined4 *)(plVar7 + 0x2a) = 0;
  plVar7[0x2b] = 0;
  plVar7[0x2c] = 0;
  *(undefined8 *)((longlong)plVar7 + 0x165) = 0;
  *(undefined8 *)((longlong)plVar7 + 0x18c) = 0;
  *(undefined8 *)((longlong)plVar7 + 0x194) = 0;
  *(undefined8 *)((longlong)plVar7 + 0x199) = 0;
  plVar7[0x35] = 0;
  plVar7[0x36] = 0;
  plVar7[0x37] = 0;
  plVar7[0x38] = 0;
  *plVar7 = (longlong)&DAT_02677e10;
  plVar7[2] = (longlong)&DAT_026788e8;
  plVar7[0x39] = (longlong)&DAT_02678928;
  *(undefined4 *)((longlong)plVar7 + 500) = 0;
  *(undefined1 *)(plVar7 + 0x3f) = 0;
  plVar7[0x43] = 0;
  plVar7[0x3c] = 0;
  plVar7[0x3d] = 0;
  plVar7[0x3a] = 0;
  plVar7[0x3b] = 0;
  *(undefined1 *)(plVar7 + 0x3e) = 0;
  *(undefined8 *)((longlong)plVar7 + 0x1fc) = 0;
  *(undefined8 *)((longlong)plVar7 + 0x204) = 0;
  *(undefined8 *)((longlong)plVar7 + 0x20c) = 0;
  (*DAT_02677e28)();
  FUN_01cef4c0();
  FUN_01f27fe0();
  cVar5 = (**(code **)(*local_40 + 0x450))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar8 = local_60;
  uStack_374 = (undefined4)((ulonglong)uVar9 >> 0x20);
  uStack_370 = (undefined4)extraout_XMM0_Qb;
  uStack_36c = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
  if (cVar5 == '\0') {
    auVar14._4_4_ = uStack_374;
    auVar14._0_4_ = local_378 + DAT_023b169c + DAT_023b1608;
    auVar14._8_4_ = uStack_370;
    auVar14._12_4_ = uStack_36c;
    auVar11 = insertps(ZEXT416((uint)(DAT_023b16a0 - local_378)),auVar14,0x10);
    (**(code **)(*plVar7 + 0x4d0))(auVar11._0_8_,local_378);
  }
  else {
    auVar2._4_4_ = uStack_374;
    auVar2._0_4_ = local_378 + DAT_023b169c + DAT_023b1608;
    auVar2._8_4_ = uStack_370;
    auVar2._12_4_ = uStack_36c;
    auVar11 = insertps(_DAT_023b16c0,auVar2,0x10);
    (**(code **)(*plVar7 + 0x4d0))(auVar11._0_8_,local_378);
  }
  local_160 = plVar8;
  local_158 = '\0';
  (**(code **)(*plVar7 + 0xa20))();
  if ((local_158 != '\0') && (local_160 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar3 = DAT_026fc538;
  if (DAT_026fc538 != 0) {
    FUN_00d50b00();
  }
  local_150 = lVar3;
  local_148 = '\x01';
  (**(code **)(*plVar7 + 0xa10))();
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = DAT_026f6f90;
  if (DAT_026f6f90 != 0) {
    FUN_00d50b00();
  }
  local_140 = lVar3;
  local_138 = '\x01';
  FUN_01d51a40();
  local_80 = local_40;
  local_78 = 0;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_78 = '\x01';
  FUN_01cef3b0();
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d0fe80();
  local_130 = DAT_026f6f70;
  if (DAT_026f6f70 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_026fe490;
  local_128 = '\x01';
  if (DAT_026fe490 != 0) {
    FUN_00d50b00();
  }
  local_120 = lVar3;
  local_118 = '\x01';
  local_110 = 0;
  local_108 = '\0';
  FUN_00d31230(&local_110,&local_120);
  local_70 = local_40;
  local_68 = 0;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  plVar8 = local_60;
  local_68 = '\x01';
  (**(code **)(*plVar7 + 0x6a8))();
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d9a650();
  local_f8 = '\0';
  local_100 = plVar7;
  FUN_01d9ad20();
  if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d9a660();
  plVar6[0x28] = (longlong)plVar7;
  local_e8 = '\0';
  local_f0 = plVar6;
  (**(code **)(*plVar8 + 0x450))();
  if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_d8 = '\0';
  local_e0 = plVar6;
  (**(code **)(*unaff_RSI + 0x28))();
  if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RSI + 0x38))();
  FUN_00d50b00();
  FUN_00d50b20();
  if (((char)local_50 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_58 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  FUN_00d50b20();
  FUN_00d50b20();
LAB_002b6f81:
  *unaff_RDI = plVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @01dd11e0 — 5267 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01dd1f66) */
/* WARNING: Removing unreachable block (ram,0x01dd1f72) */
/* WARNING: Removing unreachable block (ram,0x01dd15a8) */
/* WARNING: Removing unreachable block (ram,0x01dd15b4) */
/* WARNING: Removing unreachable block (ram,0x01dd1a4e) */
/* WARNING: Removing unreachable block (ram,0x01dd1a57) */
/* WARNING: Removing unreachable block (ram,0x01dd1bc1) */
/* WARNING: Removing unreachable block (ram,0x01dd1d46) */
/* WARNING: Removing unreachable block (ram,0x01dd1d57) */
/* WARNING: Removing unreachable block (ram,0x01dd1d64) */
/* WARNING: Removing unreachable block (ram,0x01dd20e5) */
/* WARNING: Removing unreachable block (ram,0x01dd20ee) */
/* WARNING: Removing unreachable block (ram,0x01dd1c27) */
/* WARNING: Removing unreachable block (ram,0x01dd1c30) */
/* WARNING: Removing unreachable block (ram,0x01dd1249) */
/* WARNING: Removing unreachable block (ram,0x01dd1252) */
/* WARNING: Removing unreachable block (ram,0x01dd1d9b) */
/* WARNING: Removing unreachable block (ram,0x01dd1e12) */
/* WARNING: Removing unreachable block (ram,0x01dd1e1b) */
/* WARNING: Removing unreachable block (ram,0x01dd1f1f) */
/* WARNING: Removing unreachable block (ram,0x01dd1f28) */
/* WARNING: Removing unreachable block (ram,0x01dd1e71) */
/* WARNING: Removing unreachable block (ram,0x01dd1e79) */
/* WARNING: Removing unreachable block (ram,0x01dd1ee3) */
/* WARNING: Removing unreachable block (ram,0x01dd1e82) */
/* WARNING: Removing unreachable block (ram,0x01dd1fae) */
/* WARNING: Removing unreachable block (ram,0x01dd201d) */
/* WARNING: Removing unreachable block (ram,0x01dd2083) */
/* WARNING: Removing unreachable block (ram,0x01dd208c) */
/* WARNING: Removing unreachable block (ram,0x01dd2127) */
/* WARNING: Removing unreachable block (ram,0x01dd2191) */
/* WARNING: Removing unreachable block (ram,0x01dd219a) */
/* WARNING: Removing unreachable block (ram,0x01dd2216) */
/* WARNING: Removing unreachable block (ram,0x01dd2222) */

void FUN_01dd11e0(undefined8 param_1,undefined8 param_2)

{
  float *pfVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  longlong lVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar16;
  longlong *plVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar25;
  undefined8 uVar24;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 in_XMM1_Dc;
  undefined4 uVar29;
  undefined4 in_XMM1_Dd;
  undefined4 uVar30;
  float local_268;
  longlong *local_208;
  char local_200;
  longlong local_1f8;
  char local_1f0;
  longlong local_1e8;
  char local_1e0;
  longlong local_1d8;
  char local_1d0;
  longlong local_1c8;
  char local_1c0;
  undefined8 local_1b8;
  float local_1a8;
  float fStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  longlong local_190;
  char local_188;
  longlong *local_180;
  char local_178;
  longlong *local_170;
  char local_168;
  longlong *local_160;
  char local_158;
  longlong *local_150;
  char local_148;
  longlong *local_140;
  char local_138;
  longlong *local_130;
  char local_128;
  longlong *local_120;
  char local_118;
  longlong *local_110;
  char local_108;
  longlong *local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong *local_c0;
  ulonglong local_b8;
  float local_98;
  longlong *local_88;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  char local_40;
  
  fVar27 = (float)((ulonglong)param_2 >> 0x20);
  fVar26 = (float)param_2;
  fVar25 = (float)((ulonglong)param_1 >> 0x20);
  uVar21 = (undefined4)param_1;
  fVar23 = fVar26;
  fVar28 = fVar27;
  uVar29 = in_XMM1_Dc;
  uVar30 = in_XMM1_Dd;
  (**(code **)(*unaff_RDI + 0x640))();
  local_c0 = local_48;
  if ((local_40 == '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  plVar3 = (longlong *)*unaff_RSI;
  lVar8 = unaff_RSI[1];
  if (((char)lVar8 != '\0') && (plVar3 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if ((int)unaff_RDI[0x30] == 0) {
    bVar16 = false;
    local_88 = (longlong *)0x0;
    bVar5 = false;
    local_58 = (longlong *)0x0;
    bVar6 = false;
    local_50 = (longlong *)0x0;
  }
  else {
    FUN_01d48370();
    cVar9 = (**(code **)(*plVar3 + 1000))();
    local_268 = fVar23;
    if (cVar9 == '\0') {
      uVar22 = FUN_01e436c0();
      local_268 = fVar26;
      fVar28 = fVar27;
      uVar29 = in_XMM1_Dc;
      uVar30 = in_XMM1_Dd;
      FUN_00d05360(uVar21,fVar26,uVar22,fVar23);
      (**(code **)(*plVar3 + 0x390))();
    }
    (**(code **)(*unaff_RDI + 0x970))();
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*unaff_RDI + 0x970))();
      local_178 = 0;
      if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_178 = '\x01';
      local_180 = local_48;
      FUN_01d488d0();
      if ((local_178 != '\0') && (local_180 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_268 = fVar26;
      fVar28 = fVar27;
      (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))(uVar21);
      uVar29 = in_XMM1_Dc;
      uVar30 = in_XMM1_Dd;
    }
    if (DAT_028b8e44 == '\x01') {
      (**(code **)(*unaff_RDI + 0x970))();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_48 != (longlong *)0x0) {
        local_b8 = FUN_01e3f820();
        local_1a8 = local_268;
        fStack_1a4 = fVar28;
        uStack_1a0 = uVar29;
        uStack_19c = uVar30;
        uVar22 = FUN_01e436c0();
        local_1b8._0_4_ = local_268;
        local_1b8._4_4_ = fVar28;
        (**(code **)(*unaff_RDI + 0x970))();
        local_168 = 0;
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_168 = '\x01';
        local_170 = local_48;
        local_268 = local_1a8;
        fVar28 = fStack_1a4;
        uVar29 = uStack_1a0;
        uVar30 = uStack_19c;
        (**(code **)(*local_c0 + 0x640))((undefined4)local_b8,&local_170,uVar22,(float)local_1b8);
        if ((local_168 != '\0') && (local_170 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_01cfbc00();
    local_158 = 0;
    if (local_40 == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_158 = '\x01';
    local_160 = local_48;
    FUN_01d488d0();
    if ((local_158 != '\0') && (local_160 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (*(char *)((longlong)unaff_RDI + 0x279) == '\0') {
      fVar28 = 0.0;
      uVar29 = 0;
      uVar30 = 0;
      local_268 = *(float *)(unaff_RDI + 0x2d) + *(float *)((longlong)unaff_RDI + 0x174);
      fVar23 = fVar25 / local_268;
      uVar18 = (uint)fVar23;
      uVar12 = (uint)((fVar25 + fVar27 + DAT_02390d00) / local_268);
      uVar10 = *(uint *)(unaff_RDI + 0x30);
    }
    else {
      uVar10 = *(uint *)(unaff_RDI + 0x30);
      uVar14 = (ulonglong)uVar10;
      if ((int)uVar10 < 1) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          pfVar1 = (float *)(*(longlong *)(unaff_RDI[0x52] + 0x10) + uVar19 * 4);
          if (fVar25 < *pfVar1 || fVar25 == *pfVar1) goto LAB_01dd16d7;
          uVar19 = uVar19 + 1;
        } while (uVar14 != uVar19);
        uVar19 = (ulonglong)uVar10;
      }
LAB_01dd16d7:
      uVar18 = (int)uVar19 - 1;
      fVar23 = fVar25 + fVar27 + DAT_02390d00;
      uVar12 = 0;
      if ((int)uVar10 < 0) {
        uVar12 = uVar10;
      }
      do {
        if ((int)uVar14 < 1) goto LAB_01dd1723;
        local_268 = *(float *)(*(longlong *)(unaff_RDI[0x52] + 0x10) + -4 + uVar14 * 4);
        fVar28 = 0.0;
        uVar29 = 0;
        uVar30 = 0;
        uVar14 = uVar14 - 1;
      } while (fVar23 < local_268);
      uVar12 = (int)uVar14 + 1;
    }
LAB_01dd1723:
    uVar24 = CONCAT44(local_1b8._4_4_,fVar23);
    bVar16 = false;
    uVar14 = (ulonglong)uVar18;
    if ((int)uVar18 < 0) {
      uVar14 = 0;
    }
    uVar18 = uVar10 - 1;
    if ((int)uVar12 < (int)uVar10) {
      uVar18 = uVar12;
    }
    lVar11 = unaff_RDI[0x2c];
    if (*(int *)(lVar11 + 0xc) < 1) {
      local_88 = (longlong *)0x0;
      bVar5 = false;
      local_58 = (longlong *)0x0;
      bVar6 = false;
      local_50 = (longlong *)0x0;
    }
    else {
      uVar19 = 0;
      local_50 = (longlong *)0x0;
      bVar6 = false;
      local_58 = (longlong *)0x0;
      bVar5 = false;
      local_88 = (longlong *)0x0;
      bVar16 = false;
      do {
        local_1b8._4_4_ = (float)((ulonglong)uVar24 >> 0x20);
        plVar17 = *(longlong **)(*(longlong *)(lVar11 + 0x10) + uVar19 * 8);
        local_b8 = uVar19;
        if (plVar17 != (longlong *)0x0) {
          uVar22 = FUN_00d50b00();
          uVar24 = CONCAT44(local_1b8._4_4_,uVar22);
        }
        uVar19 = local_b8;
        local_1b8._4_4_ = (float)((ulonglong)uVar24 >> 0x20);
        uVar7 = CONCAT44(local_1b8._4_4_,(float)local_1b8);
        if (local_58 == plVar17) {
          if ((bVar5) || (local_58 == (longlong *)0x0)) {
            if (local_58 == (longlong *)0x0) {
              local_58 = (longlong *)0x0;
            }
            else {
              uVar22 = FUN_00d50b20();
              uVar24 = CONCAT44(local_1b8._4_4_,uVar22);
            }
            uVar7 = CONCAT44((int)((ulonglong)uVar24 >> 0x20),(float)local_1b8);
          }
          else {
            bVar5 = true;
          }
        }
        else {
          if ((bVar5) && (local_58 != (longlong *)0x0)) {
            uVar22 = FUN_00d50b20();
            uVar24 = CONCAT44(local_1b8._4_4_,uVar22);
          }
          local_1b8._4_4_ = (float)((ulonglong)uVar24 >> 0x20);
          uVar7 = CONCAT44(local_1b8._4_4_,(float)local_1b8);
          uVar19 = local_b8;
          local_58 = plVar17;
          bVar5 = true;
        }
        uVar20 = uVar14;
        if ((int)uVar14 <= (int)uVar18) {
          do {
            local_1b8._4_4_ = (float)((ulonglong)uVar24 >> 0x20);
            local_1b8 = (**(code **)(*unaff_RDI + 0x950))((int)uVar24,uVar19 & 0xffffffff);
            local_1a8 = local_268;
            fStack_1a4 = fVar28;
            uStack_1a0 = uVar29;
            uStack_19c = uVar30;
            if (uVar19 == 0) {
              if (uVar20 == *(uint *)(unaff_RDI + 0x36)) {
LAB_01dd1abc:
                if ((unaff_RDI[0x40] == 0) && ((int)unaff_RDI[0x29] == -1)) {
                  cVar9 = (**(code **)(*plVar3 + 1000))();
                  if (cVar9 == '\0') {
                    FUN_01dce800();
                    local_148 = 0;
                    if (local_40 == '\0') {
                      if (local_48 != (longlong *)0x0) {
                        FUN_00d50b00();
                      }
                    }
                    else {
                      local_40 = '\0';
                    }
                    local_148 = '\x01';
                    local_150 = local_48;
                    FUN_01d488d0();
                    if ((local_148 != '\0') && (local_150 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    local_98 = (float)FUN_01dcf710();
                    if (DAT_028b8e44 != '\0') {
                      local_98 = local_98 + DAT_02390124;
                      local_268 = local_268 + DAT_023b1608;
                    }
                    (**(code **)(*unaff_RDI + 0x878))();
                    (**(code **)(*unaff_RDI + 0x640))();
                    (**(code **)(*local_130 + 0x670))(local_98);
                    local_138 = 0;
                    if (local_40 == '\0') {
                      if (local_48 != (longlong *)0x0) {
                        FUN_00d50b00();
                      }
                    }
                    else {
                      local_40 = '\0';
                    }
                    local_138 = '\x01';
                    local_140 = local_48;
                    (**(code **)(*plVar3 + 0x3a0))();
                    if ((local_138 != '\0') && (local_140 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_128 != '\0') && (local_130 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                }
              }
              else {
                lVar11 = unaff_RDI[0x34];
                if (lVar11 != 0) {
                  iVar2 = *(int *)(lVar11 + 0x18);
                  iVar13 = iVar2 + 3;
                  if (-1 < iVar2) {
                    iVar13 = iVar2;
                  }
                  if (3 < iVar2) {
                    lVar15 = 0;
                    do {
                      if (uVar20 == *(uint *)(*(longlong *)(lVar11 + 0x10) + lVar15 * 4))
                      goto LAB_01dd1abc;
                      lVar15 = lVar15 + 1;
                    } while (iVar13 >> 2 != (int)lVar15);
                  }
                }
              }
            }
            FUN_01d48370();
            (**(code **)(*plVar3 + 0x368))((float)local_1b8);
            lVar11 = unaff_RDI[0x4d];
            if (lVar11 != 0) {
              FUN_00d50b00();
            }
            cVar9 = FUN_00d24090();
            uVar19 = local_b8;
            if (cVar9 == '\0') {
              if (lVar11 != 0) {
                FUN_00d50b20();
              }
            }
            else if (unaff_RDI[0x40] == 0) {
              cVar9 = (**(code **)(*plVar3 + 1000))();
              if (lVar11 != 0) {
                FUN_00d50b20();
              }
              uVar19 = local_b8;
              if (cVar9 == '\0') {
                FUN_01dce800();
                local_118 = 0;
                if (local_58 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
                local_118 = '\x01';
                local_120 = local_58;
                FUN_01d488d0();
                uVar19 = local_b8;
                if ((local_118 != '\0') && (local_120 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                local_268 = local_1a8;
                fVar28 = fStack_1a4;
                uVar29 = uStack_1a0;
                uVar30 = uStack_19c;
                (**(code **)(*plVar3 + 0x3b0))(0);
              }
            }
            else if (lVar11 != 0) {
              FUN_00d50b20();
            }
            if ((char)unaff_RDI[0x4f] == '\0') {
              (**(code **)(*unaff_RDI + 0xa08))(uVar19 & 0xffffffff,uVar20 & 0xffffffff);
              if (local_50 == local_58) {
                if ((!bVar6) && (local_50 != (longlong *)0x0)) {
                  FUN_00d50b00();
                  uVar19 = local_b8;
                  plVar17 = local_50;
                  goto LAB_01dd1e0c;
                }
              }
              else {
                if (local_58 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
                plVar17 = local_58;
                if ((bVar6) && (local_50 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
LAB_01dd1e0c:
                bVar6 = true;
                local_50 = plVar17;
              }
              if ((((unaff_RDI[0x28] == 0) || (uVar20 != *(uint *)(unaff_RDI + 0x27))) ||
                  (uVar19 != *(uint *)((longlong)unaff_RDI + 0x13c))) ||
                 (*(char *)((longlong)unaff_RDI + 0x22c) != '\0')) {
                FUN_01db9a00();
                if (local_58 == local_88) {
                  plVar17 = local_88;
                  bVar4 = bVar16;
                  if ((!bVar16) && (local_58 != (longlong *)0x0)) {
                    FUN_00d50b00();
                    goto LAB_01dd1edb;
                  }
                }
                else {
                  if (local_58 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                  bVar4 = true;
                  plVar17 = local_58;
                  if ((bVar16) && (local_88 != (longlong *)0x0)) {
                    FUN_00d50b20();
                    local_88 = local_58;
LAB_01dd1edb:
                    plVar17 = local_88;
                    bVar4 = true;
                  }
                }
                local_88 = plVar17;
                (**(code **)(*local_88 + 0x978))();
                if (uVar20 == *(uint *)(unaff_RDI + 0x36)) {
LAB_01dd1f83:
                  if (unaff_RDI[0x40] != 0) goto LAB_01dd2000;
                  FUN_01dce940();
                  local_108 = 0;
                  if (local_58 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                  local_108 = '\x01';
                  local_110 = local_58;
                  FUN_01d488d0();
                  uVar19 = local_b8;
                  if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  lVar11 = unaff_RDI[0x34];
                  if (lVar11 != 0) {
                    iVar2 = *(int *)(lVar11 + 0x18);
                    iVar13 = iVar2 + 3;
                    if (-1 < iVar2) {
                      iVar13 = iVar2;
                    }
                    if (3 < iVar2) {
                      lVar15 = 0;
                      do {
                        if (uVar20 == *(uint *)(*(longlong *)(lVar11 + 0x10) + lVar15 * 4))
                        goto LAB_01dd1f83;
                        lVar15 = lVar15 + 1;
                      } while (iVar13 >> 2 != (int)lVar15);
                    }
                  }
LAB_01dd2000:
                  FUN_01dce9c0();
                  local_f8 = 0;
                  if (local_58 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                  local_f8 = '\x01';
                  local_100 = local_58;
                  FUN_01d488d0();
                  uVar19 = local_b8;
                  if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                (**(code **)(*unaff_RDI + 0x948))(uVar19 & 0xffffffff,uVar20 & 0xffffffff);
                local_e8 = 0;
                if (local_58 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
                local_e8 = '\x01';
                local_f0 = local_58;
                (**(code **)(*local_88 + 0x9d8))();
                uVar19 = local_b8;
                if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                local_200 = '\0';
                local_268 = local_1a8;
                fVar28 = fStack_1a4;
                uVar29 = uStack_1a0;
                uVar30 = uStack_19c;
                local_208 = local_88;
                (**(code **)(*unaff_RDI + 0x998))(0,&local_208,uVar20 & 0xffffffff);
                if ((local_200 != '\0') && (local_208 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                local_1f0 = '\0';
                local_1f8 = 0;
                (**(code **)(*local_88 + 0x978))();
                bVar16 = bVar4;
                if ((local_1f0 != '\0') && (local_1f8 != 0)) {
                  FUN_00d50b20();
                }
              }
              else if ((local_88 == (longlong *)0x0) || (bVar4 = !bVar16, bVar16 = false, bVar4)) {
                local_88 = (longlong *)0x0;
              }
              else {
                local_88 = (longlong *)0x0;
                FUN_00d50b20();
              }
            }
            else {
              local_1e8 = *unaff_RSI;
              local_1e0 = '\0';
              lVar11 = *(longlong *)
                        (*(longlong *)
                          (*(longlong *)(*(longlong *)(unaff_RDI[0x51] + 0x10) + uVar19 * 8) + 0x10)
                        + uVar20 * 8);
              local_188 = 0;
              if (lVar11 != 0) {
                FUN_00d50b00();
              }
              uVar19 = local_b8;
              local_188 = '\x01';
              local_268 = local_1a8;
              fVar28 = fStack_1a4;
              uVar29 = uStack_1a0;
              uVar30 = uStack_19c;
              local_190 = lVar11;
              (**(code **)(*unaff_RDI + 0x9b0))(0,&local_190,uVar20 & 0xffffffff);
              if ((local_188 != '\0') && (local_190 != 0)) {
                FUN_00d50b20();
              }
              if ((local_1e0 != '\0') && (local_1e8 != 0)) {
                FUN_00d50b20();
              }
            }
            local_40 = '\0';
            FUN_01d48390();
            uVar22 = FUN_01d48b40(DAT_02390124);
            uVar7 = local_1b8;
            if ((*(char *)((longlong)unaff_RDI + 0x16c) != '\0') &&
               (uVar19 == *(int *)(unaff_RDI[0x2c] + 0xc) - 1)) {
              local_1d8 = *unaff_RSI;
              local_1d0 = '\0';
              uVar22 = (**(code **)(*unaff_RDI + 0x988))
                                 (local_1b8._4_4_ + fStack_1a4,uVar20 & 0xffffffff);
              uVar7 = local_1b8;
              if ((local_1d0 != '\0') && (local_1d8 != 0)) {
                uVar22 = FUN_00d50b20();
                uVar7 = local_1b8;
              }
            }
            local_1b8._4_4_ = (float)((ulonglong)uVar7 >> 0x20);
            local_1b8._0_4_ = (float)uVar7;
            uVar24 = CONCAT44(local_1b8._4_4_,uVar22);
            uVar20 = uVar20 + 1;
            local_48 = local_58;
          } while (uVar20 != uVar18 + 1);
        }
        local_1b8 = uVar7;
        uVar24 = FUN_01dd0120();
        local_1b8._0_4_ = (float)uVar24;
        local_1a8 = local_268;
        fStack_1a4 = fVar28;
        uStack_1a0 = uVar29;
        uStack_19c = uVar30;
        if (*(char *)((longlong)unaff_RDI + 0x16d) != '\0') {
          local_1b8 = uVar24;
          (**(code **)(*unaff_RDI + 0x640))();
          (**(code **)(*local_130 + 0x4b0))();
          local_d8 = 0;
          fVar23 = fVar28;
          if (local_40 == '\0') {
            if (local_48 != (longlong *)0x0) {
              FUN_00d50b00();
              fVar23 = fVar28;
            }
          }
          else {
            local_40 = '\0';
          }
          local_d8 = '\x01';
          local_e0 = local_48;
          FUN_01d488d0();
          uVar19 = local_b8;
          if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_128 != '\0') && (local_130 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_01d48b40(DAT_02390124);
          FUN_01e3f820();
          local_268 = 0.0;
          fVar28 = 0.0;
          uVar29 = 0;
          uVar30 = 0;
          uVar22 = (**(code **)(*plVar3 + 0x3e0))
                             (local_1a8 + (float)local_1b8,0,local_1a8 + (float)local_1b8,fVar23);
          uVar24 = CONCAT44(local_1b8._4_4_,uVar22);
        }
        local_1b8._4_4_ = (float)((ulonglong)uVar24 >> 0x20);
        uVar19 = uVar19 + 1;
        lVar11 = unaff_RDI[0x2c];
      } while ((longlong)uVar19 < (longlong)*(int *)(lVar11 + 0xc));
    }
    if (*(char *)((longlong)unaff_RDI + 0x221) != '\0') {
      local_1c8 = *unaff_RSI;
      local_1c0 = '\0';
      (**(code **)(*unaff_RDI + 0x9a8))(uVar21,fVar26);
      if ((local_1c0 != '\0') && (local_1c8 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_01d48390();
    if (unaff_RDI[0x28] != 0) {
      FUN_01dce940();
      local_c8 = 0;
      if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_c8 = '\x01';
      local_d0 = local_48;
      FUN_01d488d0();
      if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  if (((char)lVar8 != '\0') && (plVar3 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar16) && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar5) && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar6) && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_c0 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @002cf230 — 4507 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x002cfa2f) */
/* WARNING: Removing unreachable block (ram,0x002cfa3b) */

undefined8 FUN_002cf230(undefined8 param_1,char param_2)

{
  bool bVar1;
  bool bVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  longlong lVar8;
  char *pcVar9;
  longlong lVar10;
  undefined8 uVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  pthread_key_t pVar15;
  char *pcVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong *plVar19;
  int iVar20;
  longlong *plVar21;
  longlong unaff_RDI;
  undefined8 uVar22;
  longlong *local_1e0;
  char local_1d8;
  longlong *local_1d0;
  char local_1c8;
  longlong *local_1c0;
  char local_1b8;
  longlong local_1b0;
  char local_1a8;
  longlong local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
  int local_15c;
  longlong *local_158;
  char local_150;
  longlong *local_148;
  char local_140;
  longlong *local_138;
  longlong *local_130;
  longlong local_128;
  char local_120;
  longlong *local_118;
  longlong local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  longlong *local_f0;
  longlong local_e0;
  char local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  uint local_a8 [2];
  longlong *local_a0;
  uint local_98;
  int iStack_94;
  int iStack_90;
  undefined4 local_5c;
  longlong *local_58;
  char local_50;
  undefined7 uStack_4f;
  char local_48 [8];
  longlong *local_40;
  char local_38 [8];
  
  plVar19 = *(longlong **)(unaff_RDI + 0xe0);
  uVar18 = 0;
  if (plVar19 == (longlong *)0x0) {
    uVar22 = 0;
  }
  else {
    FUN_00d50b00();
    local_a8[0] = local_a8[0] & 0xffffff00;
    local_b0 = (longlong *)0x0;
    iStack_94 = 0;
    iStack_90 = 0;
    uVar17 = *(uint *)((longlong)plVar19 + 0xc);
    if ((int)uVar17 < 1) {
      uVar22 = 0;
    }
    else {
      lVar8 = plVar19[2];
      uVar14 = uVar17 & 3;
      if (uVar17 - 1 < 3) {
        uVar18 = 0;
        uVar22 = 0;
      }
      else {
        uVar18 = 0;
        uVar22 = 0;
        do {
          if (*(int *)(*(longlong *)(lVar8 + uVar18 * 8) + 0x24) == 2) {
            uVar22 = 1;
          }
          if (*(int *)(*(longlong *)(lVar8 + 8 + uVar18 * 8) + 0x24) == 2) {
            uVar22 = 1;
          }
          local_b0 = *(longlong **)(lVar8 + 0x18 + uVar18 * 8);
          if (*(int *)(*(longlong *)(lVar8 + 0x10 + uVar18 * 8) + 0x24) == 2) {
            uVar22 = 1;
          }
          if (*(int *)((longlong)local_b0 + 0x24) == 2) {
            uVar22 = 1;
          }
          uVar18 = uVar18 + 4;
        } while ((uVar17 & 0xfffffffc) != (uint)uVar18);
      }
      if (uVar14 != 0) {
        uVar18 = uVar18 & 0xffffffff;
        do {
          local_b0 = *(longlong **)(lVar8 + uVar18 * 8);
          if (*(int *)((longlong)local_b0 + 0x24) == 2) {
            uVar22 = 1;
          }
          uVar18 = uVar18 + 1;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
    }
    local_98 = (uint)uVar18;
    local_a0 = plVar19;
    FUN_002d7300();
    FUN_00d50b20();
  }
  if (param_2 != '\0') {
    FUN_002cd490();
    local_130 = local_b0;
    if (((char)local_a8[0] == '\0') && (local_b0 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    FUN_002d0ef0();
    local_40 = local_b0;
    if (((char)local_a8[0] == '\0') && (local_b0 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    iVar6 = *(int *)((longlong)local_40 + 0xc);
    iVar4 = iVar6;
    iVar20 = local_15c;
    while (local_15c = iVar4, iVar6 != 0) {
      local_c8 = (longlong *)((longlong)local_40 + 0xc);
      uVar18 = (ulonglong)local_f0 >> 8;
      local_f0 = (longlong *)CONCAT71((int7)uVar18,iVar6 != 1);
      FUN_00d23310();
      plVar19 = local_b0;
      local_e0 = CONCAT71(local_e0._1_7_,(char)local_a8[0]);
      puVar13 = (uint *)&local_e0;
      puVar12 = local_a8;
      if ((char)local_a8[0] == '\0') {
        puVar12 = puVar13;
      }
      *(undefined1 *)puVar12 = 0;
      if (((char)local_a8[0] != '\0') && (plVar19 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pVar15 = (pthread_key_t)puVar13;
      plVar19 = (longlong *)plVar19[2];
      if (plVar19 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      pvVar7 = _pthread_getspecific(pVar15);
      plVar21 = plVar19;
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        plVar21 = (longlong *)plVar19[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar21 + 0x478))();
      (**(code **)(*local_c0 + 0x3f0))();
      local_f8 = CONCAT71(uStack_4f,local_50);
      if (local_48[0] == '\0') {
        if (((local_f8 != 0) && (FUN_00d50b00(), local_48[0] != '\0')) &&
           (CONCAT71(uStack_4f,local_50) != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_48[0] = '\0';
      }
      if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar19 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((char)local_e0 != '\0') {
        FUN_00d50b20();
      }
      lVar10 = DAT_026fced8;
      lVar8 = DAT_026fced0;
      if (iVar6 == 1) {
        if (DAT_026fced0 != 0) {
          FUN_00d50b00();
        }
        FUN_01e57260();
        lVar10 = local_e0;
        local_100 = 0;
        if (local_d8 == '\0') {
          if (local_e0 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_d8 = '\0';
        }
        local_100 = '\x01';
        local_108 = lVar10;
        FUN_00d23310();
        local_38[0] = local_48[0];
        pcVar16 = local_38;
        pcVar9 = local_48;
        if (local_48[0] == '\0') {
          pcVar9 = pcVar16;
        }
        lVar10 = CONCAT71(uStack_4f,local_50);
        *pcVar9 = '\0';
        if ((local_48[0] != '\0') && (lVar10 != 0)) {
          FUN_00d50b20();
        }
        pVar15 = (pthread_key_t)pcVar16;
        plVar21 = *(longlong **)(lVar10 + 0x10);
        if (plVar21 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        pvVar7 = _pthread_getspecific(pVar15);
        plVar19 = plVar21;
        if ((pvVar7 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          plVar19 = (longlong *)plVar21[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar19 + 0x478))();
        (**(code **)(*local_148 + 0x468))();
        plVar19 = local_158;
        local_a8[0] = 1;
        local_b0 = &DAT_024c5048;
        local_98 = local_98 & 0xffffff00;
        if (local_158 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        local_a0 = plVar19;
        local_98 = CONCAT31(local_98._1_3_,1);
        FUN_00d93690();
        plVar19 = local_40;
        local_d0 = local_c0;
        if (local_c0 == (longlong *)0x0) {
          local_5c = 0;
        }
        else if (local_b8 == '\0') {
          uVar11 = FUN_00d50b00();
          local_5c = (undefined4)CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
          if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_b8 = '\0';
          local_5c = (undefined4)CONCAT71((int7)((ulonglong)local_c0 >> 8),1);
        }
        local_b0 = &DAT_024c5048;
        if (((char)local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_150 != '\0') && (local_158 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_140 != '\0') && (local_148 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar21 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        if ((local_100 != '\0') && (local_108 != 0)) {
          FUN_00d50b20();
        }
        if ((local_d8 != '\0') && (local_e0 != 0)) {
          FUN_00d50b20();
        }
        if (lVar8 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        if (DAT_026fced8 != 0) {
          FUN_00d50b00();
        }
        FUN_01e57260();
        plVar19 = local_40;
        local_d0 = local_b0;
        if (local_b0 == (longlong *)0x0) {
          local_5c = 0;
        }
        else if ((char)local_a8[0] == '\0') {
          uVar11 = FUN_00d50b00();
          local_5c = (undefined4)CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
          if (((char)local_a8[0] != '\0') && (local_b0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_a8[0] = local_a8[0] & 0xffffff00;
          local_5c = (undefined4)CONCAT71((int7)((ulonglong)local_b0 >> 8),1);
        }
        if (lVar10 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00b7ace0();
      plVar21 = local_b0;
      if (((char)local_a8[0] == '\0') && (local_b0 != (longlong *)0x0)) {
        FUN_00d50b00();
        if (((char)local_a8[0] != '\0') && (local_b0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      local_1e0 = plVar21;
      local_1d8 = '\0';
      local_1d0 = local_d0;
      local_1c8 = '\0';
      FUN_01f4f940((ulonglong)local_f0 & 0xff,&local_1e0,0,&local_1d0);
      local_f0 = local_b0;
      if ((char)local_a8[0] == '\0') {
        if (local_b0 != (longlong *)0x0) {
          FUN_00d50b00();
          if (((char)local_a8[0] != '\0') && (local_b0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_a8[0] = local_a8[0] & 0xffffff00;
      }
      if ((local_1c8 != '\0') && (local_1d0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_1d8 != '\0') && (local_1e0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_f0 == (longlong *)0x0) || (*(int *)((longlong)local_f0 + 0xc) == 0)) {
        uVar17 = 1;
        if (local_15c != (int)*local_c8) {
          (**(code **)(**(longlong **)(unaff_RDI + 0xf0) + 0x578))();
        }
      }
      else {
        FUN_00d23310();
        plVar3 = local_b0;
        local_50 = (char)local_a8[0];
        puVar13 = local_a8;
        if ((char)local_a8[0] == '\0') {
          puVar13 = (uint *)&local_50;
        }
        *(undefined1 *)puVar13 = 0;
        if (((char)local_a8[0] != '\0') && (local_b0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_50 == '\0') && (plVar3 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        cVar5 = (**(code **)(*plVar3 + 0x398))();
        if (cVar5 == '\0') {
          local_a8[0] = local_a8[0] & 0xffffff00;
          local_b0 = (longlong *)0x0;
          local_98 = 0xffffffff;
          iStack_94 = 0;
          iStack_90 = 0;
          local_a0 = plVar19;
          iVar6 = 0;
          while( true ) {
            iVar20 = 0;
            if (iVar6 != 0) {
              if (iVar6 < 1) {
                iVar20 = -iVar6;
                iStack_94 = iVar20;
              }
              else {
                local_98 = local_98 - iVar6;
                FUN_00d23690(iVar6,iVar6);
                iStack_90 = iStack_90 + iStack_94;
                iVar20 = 0;
                iStack_94 = iVar20;
              }
            }
            lVar8 = (longlong)(int)local_98;
            local_98 = local_98 + 1;
            if (*(int *)((longlong)local_a0 + 0xc) <= (int)local_98) break;
            local_b0 = *(longlong **)(local_a0[2] + 8 + lVar8 * 8);
            iVar6 = iVar20;
            if (*(int *)((longlong)local_b0 + 0x24) == 2) {
              FUN_002c3060();
              iVar6 = iStack_94;
            }
          }
          FUN_002d7300();
LAB_002d00a5:
          FUN_002d0ef0();
          plVar19 = local_b0;
          if (local_b0 == local_40) {
            if (((char)local_a8[0] != '\0') && (local_b0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else if ((char)local_a8[0] == '\0') {
            if (local_b0 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            if (local_40 == (longlong *)0x0) goto LAB_002d014f;
            FUN_00d50b20();
            local_40 = plVar19;
          }
          else if (local_40 == (longlong *)0x0) {
LAB_002d014f:
            local_40 = plVar19;
          }
          else {
            FUN_00d50b20();
            local_40 = plVar19;
          }
          uVar17 = 0;
        }
        else {
          local_58 = plVar21;
          FUN_00d23310();
          plVar19 = local_b0;
          local_e0 = CONCAT71(local_e0._1_7_,(char)local_a8[0]);
          puVar13 = (uint *)&local_e0;
          puVar12 = local_a8;
          if ((char)local_a8[0] == '\0') {
            puVar12 = puVar13;
          }
          *(undefined1 *)puVar12 = 0;
          if (((char)local_a8[0] != '\0') && (plVar19 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          pVar15 = (pthread_key_t)puVar13;
          plVar19 = (longlong *)plVar19[2];
          if (plVar19 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          pvVar7 = _pthread_getspecific(pVar15);
          plVar21 = plVar19;
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            plVar21 = (longlong *)plVar19[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar21 + 0x478))();
          (**(code **)(*local_c0 + 0x388))();
          local_c8 = (longlong *)CONCAT71(uStack_4f,local_50);
          if (local_48[0] == '\0') {
            if (((local_c8 != (longlong *)0x0) && (FUN_00d50b00(), local_48[0] != '\0')) &&
               (CONCAT71(uStack_4f,local_50) != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_48[0] = '\0';
          }
          if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar19 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((char)local_e0 != '\0') {
            FUN_00d50b20();
          }
          (**(code **)(*plVar3 + 0x388))();
          plVar21 = local_b0;
          plVar19 = local_c8;
          if (((char)local_a8[0] == '\0') && (local_b0 != (longlong *)0x0)) {
            FUN_00d50b00();
            if (((char)local_a8[0] != '\0') && (local_b0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          local_118 = plVar21;
          local_1c0 = plVar21;
          local_1b8 = '\0';
          cVar5 = (**(code **)(*plVar19 + 0x50))();
          if ((local_1b8 != '\0') && (local_1c0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          lVar8 = DAT_026f6fb0;
          if (cVar5 == '\0') {
            if (DAT_026f6fb0 != 0) {
              FUN_00d50b00();
            }
            lVar10 = DAT_026fcee8;
            local_1b0 = lVar8;
            local_1a8 = '\x01';
            if (DAT_026fcee8 != 0) {
              FUN_00d50b00();
            }
            local_1a0 = lVar10;
            local_198 = '\x01';
            FUN_01f6ca30();
            plVar19 = local_b0;
            if ((char)local_a8[0] == '\0') {
              if (local_b0 != (longlong *)0x0) {
                FUN_00d50b00();
                if (((char)local_a8[0] != '\0') && (local_b0 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            else {
              local_a8[0] = local_a8[0] & 0xffffff00;
            }
            if ((local_198 != '\0') && (local_1a0 != 0)) {
              FUN_00d50b20();
            }
            local_138 = plVar19;
            if ((local_1a8 != '\0') && (local_1b0 != 0)) {
              FUN_00d50b20();
            }
            lVar8 = DAT_026fcef0;
            if (DAT_026fcef0 != 0) {
              FUN_00d50b00();
            }
            plVar19 = DAT_026fcef8;
            local_110 = lVar8;
            if (DAT_026fcef8 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            local_c0 = local_c8;
            local_e0 = local_110;
            local_158 = local_118;
            local_148 = plVar19;
            FUN_002d73e0(&local_158,&local_e0,&local_148,4);
            FUN_000b4da0();
            lVar8 = CONCAT71(uStack_4f,local_50);
            if (local_48[0] == '\0') {
              if (((lVar8 != 0) && (FUN_00d50b00(), local_48[0] != '\0')) &&
                 (CONCAT71(uStack_4f,local_50) != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_48[0] = '\0';
            }
            FUN_002d10d0();
            if (plVar19 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if (local_110 != 0) {
              FUN_00d50b20();
            }
            local_188 = '\0';
            local_190 = lVar8;
            iVar6 = (**(code **)(*local_138 + 0x5d8))();
            if ((local_188 != '\0') && (local_190 != 0)) {
              FUN_00d50b20();
            }
            if (lVar8 != 0) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            if (iVar6 == 0) goto LAB_002cfffc;
            uVar17 = 4;
            bVar2 = false;
            bVar1 = false;
          }
          else {
LAB_002cfffc:
            FUN_00d23310();
            plVar19 = local_b0;
            local_50 = (char)local_a8[0];
            puVar13 = local_a8;
            if ((char)local_a8[0] == '\0') {
              puVar13 = (uint *)&local_50;
            }
            *(undefined1 *)puVar13 = 0;
            if (((char)local_a8[0] != '\0') && (local_b0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_002c3060();
            if ((local_50 != '\0') && (plVar19 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            uVar17 = 0;
            bVar2 = true;
            bVar1 = true;
          }
          if (local_118 != (longlong *)0x0) {
            FUN_00d50b20();
            bVar1 = bVar2;
          }
          FUN_00d50b20();
          plVar21 = local_58;
          if (bVar1) goto LAB_002d00a5;
        }
        if (plVar3 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      if (local_f0 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (plVar21 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (((char)local_5c != '\0') && (local_d0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_f8 != 0) {
        FUN_00d50b20();
      }
      if ((uVar17 & 3) != 0) {
        if (local_40 == (longlong *)0x0) goto LAB_002d03bb;
        goto LAB_002d03b2;
      }
      iVar4 = local_15c;
      iVar20 = local_15c;
      iVar6 = *(int *)((longlong)local_40 + 0xc);
    }
    local_15c = iVar20;
    (**(code **)(**(longlong **)(unaff_RDI + 0xf0) + 0x498))();
    FUN_00cb1f10();
    FUN_00db3760();
    if (((char)local_a8[0] != '\0') && (local_b0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48[0] != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0xf0) + 0x578))();
    FUN_00d403d0();
    local_180 = DAT_026fce60;
    if (DAT_026fce60 != 0) {
      FUN_00d50b00();
    }
    local_178 = '\x01';
    local_120 = 0;
    FUN_00d50b00();
    local_120 = '\x01';
    local_170 = 0;
    local_168 = '\0';
    local_128 = unaff_RDI;
    FUN_00d40470(&local_170,&local_128,1,3);
    if ((local_168 != '\0') && (local_170 != 0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    if ((local_178 != '\0') && (local_180 != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_a8[0] != '\0') && (local_b0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar17 = 0;
LAB_002d03b2:
    FUN_00d50b20();
LAB_002d03bb:
    if (local_130 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (uVar17 != 0) {
      uVar22 = 0;
    }
  }
  return uVar22;
}




// ============================================================
// @01cfd750 — 2969 bytes
// str: ""color format mismatch""
// str: ""color format mismatch %@""
// str: ""color range mismatch %@""
// ============================================================

undefined8 * FUN_01cfd750(undefined4 param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 *puVar9;
  bool bVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  float extraout_XMM0_Da_08;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  longlong local_b0;
  char local_a8;
  undefined8 *local_a0;
  char local_98;
  undefined8 *local_90;
  char local_88;
  undefined8 *local_80;
  char local_78;
  undefined8 *local_70;
  char local_68;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined8 *local_50;
  uint local_48;
  longlong local_40;
  char local_38;
  
  lVar3 = DAT_027ef220;
  local_60 = 0xff;
  local_5c = 0xff;
  local_58 = 0xff;
  local_54 = 0xff;
  if (*unaff_RSI == 0) {
    if (DAT_027ef220 != 0) {
      param_1 = FUN_00d50b00();
    }
    FUN_00cc7b40(param_1,DAT_025908a0);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  iVar5 = FUN_00d8c7a0();
  if ((iVar5 == 7) || (iVar5 = FUN_00d8c7a0(), iVar5 == 9)) {
    lVar3 = DAT_027cd570;
    if (DAT_027cd570 != 0) {
      FUN_00d50b00();
    }
    cVar4 = FUN_00d90870();
    uVar11 = extraout_XMM0_Da;
    if (lVar3 != 0) {
      uVar11 = FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      FUN_00d8f140(uVar11,1);
      puVar8 = local_50;
      puVar9 = (undefined8 *)*unaff_RSI;
      if (puVar9 == local_50) {
        if (((char)unaff_RSI[1] != '\0') || (local_50 == (undefined8 *)0x0)) goto LAB_01cfd91c;
        if ((char)local_48 == '\0') {
          FUN_00d50b00();
          goto LAB_01cfd917;
        }
      }
      else {
        lVar3 = unaff_RSI[1];
        if ((char)local_48 == '\0') {
          if (local_50 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
          *unaff_RSI = (longlong)puVar8;
          if (((char)lVar3 != '\0') && (puVar9 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
LAB_01cfd917:
          *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_01cfd91c:
          if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01cfd930;
        }
        *unaff_RSI = (longlong)local_50;
        if (((char)lVar3 != '\0') && (puVar9 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      *(undefined1 *)(unaff_RSI + 1) = 1;
    }
  }
LAB_01cfd930:
  iVar5 = FUN_00d8c7a0();
  if ((iVar5 != 6) && (iVar5 = FUN_00d8c7a0(), lVar3 = DAT_0276cc80, iVar5 != 8)) {
    if (DAT_0276cc80 != 0) {
      FUN_00d50b00();
    }
    local_b0 = lVar3;
    local_a8 = '\x01';
    uVar11 = FUN_00d91000(1,&local_b0);
    puVar9 = local_50;
    if (local_50 == (undefined8 *)0x0) {
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        uVar11 = FUN_00d50b20();
      }
      puVar9 = (undefined8 *)0x0;
      bVar2 = false;
      lVar3 = DAT_027ef220;
    }
    else {
      if ((char)local_48 == '\0') {
        uVar11 = FUN_00d50b00();
      }
      else {
        local_48 = local_48 & 0xffffff00;
      }
      iVar5 = *(int *)((longlong)puVar9 + 0xc);
      if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
        uVar11 = FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        uVar11 = FUN_00d50b20();
      }
      if (2 < iVar5) {
        fVar12 = (float)FUN_00d8d7b0();
        local_60 = (uint)(fVar12 * DAT_02394220);
        fVar12 = (float)FUN_00d8d7b0();
        local_5c = (int)(fVar12 * DAT_02394220);
        fVar12 = (float)FUN_00d8d7b0();
        fVar12 = fVar12 * DAT_02394220;
        local_58 = (int)fVar12;
        bVar2 = true;
        if (*(int *)((longlong)puVar9 + 0xc) == 4) {
          fVar12 = (float)FUN_00d8d7b0();
          fVar12 = fVar12 * DAT_02394220;
          local_54 = (int)fVar12;
        }
        goto LAB_01cfe119;
      }
      bVar2 = true;
      lVar3 = DAT_027ef220;
    }
    DAT_027ef220 = lVar3;
    if (lVar3 != 0) {
      uVar11 = FUN_00d50b00();
    }
    lVar1 = *unaff_RSI;
    local_48 = 1;
    local_50 = &DAT_024c5048;
    local_38 = 0;
    if (lVar1 != 0) {
      uVar11 = FUN_00d50b00();
    }
    local_38 = '\x01';
    local_40 = lVar1;
    fVar12 = (float)FUN_00cc7b40(uVar11,&local_50);
    local_50 = &DAT_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      fVar12 = (float)FUN_00d50b20();
    }
    if (lVar3 != 0) {
      fVar12 = (float)FUN_00d50b20();
    }
    goto LAB_01cfe119;
  }
  FUN_00da5ad0();
  cVar4 = *(char *)(local_50 + 3);
  if ((char)local_48 != '\0') {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    plVar6 = (longlong *)FUN_00e8fc40();
    FUN_00d4ff40();
    *plVar6 = (longlong)&DAT_0257ef30;
    plVar6[5] = 0;
    plVar6[2] = 0;
    plVar6[3] = 0;
    *(undefined4 *)(plVar6 + 4) = 0;
    (*DAT_0257ef48)();
    bVar2 = false;
  }
  else {
    if ((DAT_028b7938 == (longlong *)0x0) || (DAT_028b7941 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028b7938 == (longlong *)0x0) {
        plVar6 = (longlong *)FUN_00e8fc40();
        FUN_00d4ff40();
        *plVar6 = (longlong)&DAT_0257ef30;
        plVar6[5] = 0;
        plVar6[2] = 0;
        plVar6[3] = 0;
        *(undefined4 *)(plVar6 + 4) = 0;
        (*DAT_0257ef48)();
        if (DAT_028b7938 == plVar6) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
          bVar10 = DAT_028b7938 != (longlong *)0x0;
          DAT_028b7938 = plVar6;
          if (bVar10) {
            FUN_00d50b20();
          }
        }
        if (DAT_028b7940 == '\0') {
          DAT_028b7940 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar2) {
          FUN_00d50b20();
        }
        DAT_028b7941 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028b7941 = '\x01';
        FUN_00e8cb70();
      }
      if (DAT_028b7938 == (longlong *)0x0) {
        bVar2 = true;
        plVar6 = (longlong *)0x0;
        goto LAB_01cfdcdc;
      }
    }
    plVar6 = DAT_028b7938;
    FUN_00d50b00();
    bVar2 = false;
  }
LAB_01cfdcdc:
  uVar7 = FUN_00e7b4e0();
  FUN_00d8e3d0(extraout_XMM0_Da_00,uVar7);
  local_a0 = local_50;
  local_98 = 0;
  if ((char)local_48 == '\0') {
    if (local_50 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  local_98 = '\x01';
  uVar11 = (**(code **)(*plVar6 + 0x368))();
  if ((local_98 != '\0') && (local_a0 != (undefined8 *)0x0)) {
    uVar11 = FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
    uVar11 = FUN_00d50b20();
  }
  cVar4 = (**(code **)(*plVar6 + 0x430))(uVar11,2);
  lVar3 = DAT_027ef220;
  if (cVar4 == '\0') {
    uVar11 = extraout_XMM0_Da_01;
    if (DAT_027ef220 != 0) {
      uVar11 = FUN_00d50b00();
    }
    FUN_00cc7b40(uVar11,DAT_025908a0);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  uVar7 = FUN_00e7b4e0();
  FUN_00d8e3d0(extraout_XMM0_Da_02,uVar7);
  local_90 = local_50;
  local_88 = 0;
  if ((char)local_48 == '\0') {
    if (local_50 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  local_88 = '\x01';
  uVar11 = (**(code **)(*plVar6 + 0x368))();
  if ((local_88 != '\0') && (local_90 != (undefined8 *)0x0)) {
    uVar11 = FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
    uVar11 = FUN_00d50b20();
  }
  cVar4 = (**(code **)(*plVar6 + 0x430))(uVar11,2);
  lVar3 = DAT_027ef220;
  if (cVar4 == '\0') {
    uVar11 = extraout_XMM0_Da_03;
    if (DAT_027ef220 != 0) {
      uVar11 = FUN_00d50b00();
    }
    FUN_00cc7b40(uVar11,DAT_025908a0);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  uVar7 = FUN_00e7b4e0();
  FUN_00d8e3d0(extraout_XMM0_Da_04,uVar7);
  local_80 = local_50;
  local_78 = 0;
  if ((char)local_48 == '\0') {
    if (local_50 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  local_78 = '\x01';
  uVar11 = (**(code **)(*plVar6 + 0x368))();
  if ((local_78 != '\0') && (local_80 != (undefined8 *)0x0)) {
    uVar11 = FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
    uVar11 = FUN_00d50b20();
  }
  cVar4 = (**(code **)(*plVar6 + 0x430))(uVar11,2);
  lVar3 = DAT_027ef220;
  if (cVar4 == '\0') {
    uVar11 = extraout_XMM0_Da_05;
    if (DAT_027ef220 != 0) {
      uVar11 = FUN_00d50b00();
    }
    FUN_00cc7b40(uVar11,DAT_025908a0);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  iVar5 = FUN_00d8c7a0();
  fVar12 = extraout_XMM0_Da_06;
  if (iVar5 == 8) {
    uVar7 = FUN_00e7b4e0();
    FUN_00d8e3d0(extraout_XMM0_Da_07,uVar7);
    local_70 = local_50;
    local_68 = 0;
    if ((char)local_48 == '\0') {
      if (local_50 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = local_48 & 0xffffff00;
    }
    local_68 = '\x01';
    uVar11 = (**(code **)(*plVar6 + 0x368))();
    if ((local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
      uVar11 = FUN_00d50b20();
    }
    if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
      uVar11 = FUN_00d50b20();
    }
    cVar4 = (**(code **)(*plVar6 + 0x430))(uVar11,2);
    lVar3 = DAT_027ef220;
    fVar12 = extraout_XMM0_Da_08;
    if (cVar4 == '\0') {
      if (DAT_027ef220 != 0) {
        fVar12 = (float)FUN_00d50b00();
      }
      fVar12 = (float)FUN_00cc7b40(fVar12,DAT_025908a0);
      if (lVar3 != 0) {
        fVar12 = (float)FUN_00d50b20();
      }
    }
  }
  if (!bVar2) {
    fVar12 = (float)FUN_00d50b20();
  }
  bVar2 = false;
  puVar9 = (undefined8 *)0x0;
LAB_01cfe119:
  lVar3 = DAT_027ef220;
  if (((((0xff < local_60) || (local_5c < 0)) || (0xff < local_5c)) ||
      ((local_58 < 0 || (0xff < local_58)))) || ((local_54 < 0 || (0xff < local_54)))) {
    if (DAT_027ef220 != 0) {
      fVar12 = (float)FUN_00d50b00();
    }
    lVar1 = *unaff_RSI;
    local_48 = 1;
    local_50 = &DAT_024c5048;
    if (lVar1 != 0) {
      fVar12 = (float)FUN_00d50b00();
    }
    local_38 = '\x01';
    local_40 = lVar1;
    FUN_00cc7b40(fVar12,&local_50);
    local_50 = &DAT_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  fVar12 = (float)(int)local_60;
  fVar13 = (float)local_5c;
  fVar14 = (float)local_58;
  fVar15 = (float)local_54;
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &DAT_026792c0;
  puVar8[5] = 0;
  *(undefined8 *)((longlong)puVar8 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar8 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar8 + 0x19) = 0;
  FUN_00d500e0();
  FUN_01cfce50(fVar12 / DAT_02394220,fVar13 / DAT_02394220,fVar14 / DAT_02394220,
               fVar15 / DAT_02394220);
  *unaff_RDI = puVar8;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((bVar2) && (puVar9 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @0197a540 — 2938 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0197a69b) */
/* WARNING: Removing unreachable block (ram,0x0197a6a7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0197a540(void)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  undefined8 unaff_RBX;
  longlong *unaff_RDI;
  undefined8 unaff_R12;
  undefined4 uVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar13 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fStack_1a4;
  longlong *local_180;
  char local_178;
  longlong *local_170;
  char local_168;
  longlong *local_160;
  char local_158;
  longlong *local_150;
  char local_148;
  longlong *local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong *local_110;
  char local_108;
  longlong *local_100;
  char local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined1 local_e8 [16];
  longlong *local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  undefined4 local_ac;
  longlong *local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  undefined8 extraout_XMM0_Qb_02;
  
  if (*(char *)((longlong)unaff_RDI + 0x1c1) != '\0') {
    FUN_01d9af20();
  }
  FUN_01d9af20();
  (**(code **)(*unaff_RDI + 0x990))();
  local_a8 = local_78;
  if ((((local_70 == '\0') && (local_78 != (longlong *)0x0)) && (FUN_00d50b00(), local_70 != '\0'))
     && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x980))();
  local_90 = local_78;
  if (local_78 == (longlong *)0x0) {
    local_170 = local_a8;
    local_168 = '\0';
    FUN_01d98a70();
    local_90 = (longlong *)0x0;
    uVar12 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    local_a0 = 0;
    if ((local_168 != '\0') && (local_170 != (longlong *)0x0)) {
      FUN_00d50b20();
      local_a0 = 0;
      local_90 = (longlong *)0x0;
    }
  }
  else {
    if (((local_70 == '\0') && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != (longlong *)0x0))
    {
      FUN_00d50b20();
    }
    plVar7 = local_90;
    (**(code **)(*local_90 + 0x4d8))();
    blendps(in_XMM1,_DAT_023b4a40,0xd);
    (**(code **)(*plVar7 + 0x4d0))();
    local_180 = local_a8;
    local_178 = '\0';
    FUN_01d98360(&local_180);
    if ((local_178 != '\0') && (local_180 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar12 = 0;
    local_a0 = CONCAT71((int7)((ulonglong)unaff_R12 >> 8),1);
  }
  (**(code **)(*unaff_RDI + 0x988))();
  local_80 = local_78;
  local_f0 = (undefined4)uVar12;
  if (local_78 == (longlong *)0x0) {
    local_94 = 1;
    local_88 = 0;
    local_80 = (longlong *)0x0;
  }
  else {
    plVar7 = local_78;
    if (((local_70 == '\0') && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != (longlong *)0x0))
    {
      FUN_00d50b20();
    }
    local_88 = CONCAT71((int7)((ulonglong)plVar7 >> 8),1);
    local_50 = 0;
    local_38 = (longlong *)0x0;
    local_48 = 0;
    local_40 = (longlong *)0x0;
    uVar11 = (**(code **)(*local_80 + 0x938))();
    auVar14._8_4_ = (int)extraout_XMM0_Qb;
    auVar14._0_8_ = uVar11;
    auVar14._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
    local_50 = 0;
    auVar14 = blendps(auVar14,_DAT_023b4a30,0xe);
    local_38 = (longlong *)0x0;
    local_48 = 0;
    local_40 = (longlong *)0x0;
    (**(code **)(*local_80 + 0x4d0))(0,auVar14._0_8_);
    local_160 = local_80;
    local_158 = '\0';
    uVar11 = FUN_01d980f0();
    if ((local_158 == '\0') || (local_160 == (longlong *)0x0)) {
      local_94 = 0;
      local_88 = CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
    }
    else {
      uVar11 = FUN_00d50b20();
      local_88 = CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
      local_94 = 0;
    }
  }
  local_50 = 0;
  local_38 = (longlong *)0x0;
  local_48 = 0;
  local_40 = (longlong *)0x0;
  FUN_01d95060();
  local_50 = 0;
  local_38 = (longlong *)0x0;
  local_48 = 0;
  local_40 = (longlong *)0x0;
  FUN_01d9a650();
  local_50 = 0;
  local_38 = (longlong *)0x0;
  local_48 = 0;
  local_40 = (longlong *)0x0;
  FUN_01d95060();
  local_50 = 0;
  local_38 = (longlong *)0x0;
  local_48 = 0;
  local_40 = (longlong *)0x0;
  FUN_01d94ee0();
  (**(code **)(*unaff_RDI + 0x998))();
  local_40 = local_78;
  if (local_78 == (longlong *)0x0) {
    uVar9 = 1;
    local_48 = 0;
    local_40 = (longlong *)0x0;
  }
  else {
    if (((local_70 == '\0') && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != (longlong *)0x0))
    {
      FUN_00d50b20();
    }
    FUN_01d97ec0();
    (**(code **)(*local_78 + 0x4d8))();
    (**(code **)(*local_40 + 0x4d0))();
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_150 = local_40;
    local_148 = '\0';
    uVar11 = FUN_01d97bd0();
    uVar9 = 0;
    local_48 = CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
    if ((local_148 != '\0') && (local_150 != (longlong *)0x0)) {
      FUN_00d50b20();
      uVar9 = 0;
    }
  }
  (**(code **)(*unaff_RDI + 0x9a0))();
  local_38 = local_78;
  if (local_78 == (longlong *)0x0) {
    local_ac = 1;
    uVar12 = 0;
    local_38 = (longlong *)0x0;
  }
  else {
    if (((local_70 == '\0') && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != (longlong *)0x0))
    {
      FUN_00d50b20();
    }
    FUN_01d97e80();
    (**(code **)(*local_78 + 0x4d8))();
    (**(code **)(*local_38 + 0x4d0))();
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_140 = local_38;
    local_138 = '\0';
    FUN_01d97920();
    local_ac = 0;
    uVar12 = CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
    if ((local_138 != '\0') && (local_140 != (longlong *)0x0)) {
      FUN_00d50b20();
      local_ac = 0;
    }
  }
  local_ec = uVar9;
  local_50 = uVar12;
  (**(code **)(*unaff_RDI + 0x640))();
  plVar7 = local_78;
  if (((local_70 == '\0') && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_e8._0_8_ = (**(code **)(*plVar7 + 0x580))();
  local_e8._8_8_ = extraout_XMM0_Qb_00;
  (**(code **)(*plVar7 + 0x578))();
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_0006daf0();
  *(undefined4 *)(puVar4 + 0x27) = 0;
  puVar4[0x2e] = 0;
  *(undefined4 *)(puVar4 + 0x2f) = 0;
  puVar4[0x30] = 0;
  *(undefined1 *)(puVar4 + 0x31) = 0;
  puVar4[0x28] = 0;
  puVar4[0x29] = 0;
  *(undefined4 *)(puVar4 + 0x2a) = 0;
  puVar4[0x2b] = 0;
  puVar4[0x2c] = 0;
  *(undefined8 *)((longlong)puVar4 + 0x165) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x18c) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x194) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x199) = 0;
  puVar4[0x35] = 0;
  puVar4[0x36] = 0;
  puVar4[0x37] = 0;
  puVar4[0x38] = 0;
  puVar4[0x39] = 0;
  puVar4[0x3a] = 0;
  *(undefined1 *)(puVar4 + 0x3b) = 0;
  *puVar4 = &DAT_02623d28;
  puVar4[2] = &DAT_02624858;
  FUN_00d500e0();
  puVar1 = (undefined8 *)unaff_RDI[0x3a];
  if (puVar1 == puVar4) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x3a] = (longlong)puVar4;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  blendps(_DAT_0241b3e0,local_e8,1);
  (**(code **)(*(longlong *)unaff_RDI[0x3a] + 0x4d0))();
  (**(code **)(*(longlong *)unaff_RDI[0x3a] + 0xab8))();
  (**(code **)(*(longlong *)unaff_RDI[0x3a] + 0xac8))();
  plVar5 = (longlong *)unaff_RDI[0x3a];
  FUN_0197b900();
  local_130 = 0;
  local_128 = '\0';
  (**(code **)("/System/Library/Frameworks/CoreServices.framework/Versions/A/CoreServices" +
              *local_78 + 0x18))();
  (**(code **)(*plVar5 + 0x928))();
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  if (local_70 != '\0') {
    FUN_00d50b20();
  }
  plVar5 = (longlong *)unaff_RDI[0x3a];
  FUN_00d46dc0();
  local_c0 = local_78;
  local_b8 = 0;
  if (local_70 == '\0') {
    if (local_78 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  local_b8 = '\x01';
  (**(code **)(*plVar5 + 0x988))();
  if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar5 = (longlong *)unaff_RDI[0x3a];
  FUN_0197b900();
  local_d0 = local_78;
  local_c8 = 0;
  if ((local_70 == '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  local_c8 = '\x01';
  (**(code **)(*plVar5 + 0xa20))();
  if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar6 = DAT_027e0b78;
  plVar5 = (longlong *)unaff_RDI[0x3a];
  if (DAT_027e0b78 != 0) {
    FUN_00d50b00();
  }
  local_120 = lVar6;
  local_118 = '\x01';
  (**(code **)(*plVar5 + 0xa10))();
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_0006daf0();
  (**(code **)(*plVar5 + 0x18))();
  auVar15 = blendps(local_e8,ZEXT816(0),2);
  (**(code **)(*plVar5 + 0x4d0))();
  local_108 = '\0';
  local_110 = plVar5;
  (**(code **)(*unaff_RDI + 0x970))();
  if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_e8._0_8_ = (**(code **)(*plVar7 + 0x598))();
  local_e8._8_8_ = extraout_XMM0_Qb_01;
  (**(code **)(*plVar5 + 0x4a0))();
  plVar3 = local_78;
  if (local_70 == '\0') {
    if (local_78 == (longlong *)0x0) goto LAB_0197afdd;
    FUN_00d50b00();
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_78 == (longlong *)0x0) goto LAB_0197afdd;
  local_70 = '\0';
  local_78 = (longlong *)0x0;
  local_68 = plVar3;
  local_60 = 0xffffffff;
  local_58 = 0;
  while( true ) {
    lVar6 = (longlong)(int)local_60;
    iVar8 = (int)local_60 + 1;
    local_60 = CONCAT44(local_60._4_4_,iVar8);
    if (*(int *)((longlong)local_68 + 0xc) <= iVar8) break;
    local_78 = *(longlong **)(local_68[2] + 8 + lVar6 * 8);
    fVar10 = (float)(**(code **)(*plVar7 + 0x598))();
    auVar13._0_8_ = (**(code **)(*local_78 + 0x4d8))();
    auVar13._8_8_ = extraout_XMM0_Qb_02;
    local_e8._0_4_ = (float)local_e8._0_4_ - fVar10;
    auVar2._4_4_ = local_e8._4_4_;
    auVar2._0_4_ = local_e8._0_4_;
    auVar2._8_4_ = local_e8._8_4_;
    auVar2._12_4_ = local_e8._12_4_;
    auVar14 = insertps(auVar13,auVar2,0x10);
    (**(code **)(*local_78 + 0x4d0))(auVar14._0_8_);
    fStack_1a4 = auVar15._4_4_;
    auVar15._4_12_ = local_e8._4_12_;
    auVar15._0_4_ = local_e8._0_4_ + fStack_1a4;
    local_e8 = auVar15;
    if (local_60._4_4_ != 0) {
      if (local_60 < 0) {
        iVar8 = -local_60._4_4_;
      }
      else {
        local_60 = CONCAT44(local_60._4_4_,(int)local_60 - local_60._4_4_);
        FUN_00d23690();
        local_58 = local_58 + local_60._4_4_;
        iVar8 = 0;
      }
      local_60 = CONCAT44(iVar8,(int)local_60);
    }
  }
  FUN_000a9680();
  FUN_00d50b20();
LAB_0197afdd:
  uVar12 = (**(code **)(*plVar5 + 0x4d8))();
  auVar14 = insertps(auVar15,local_e8._0_4_,0x10);
  (**(code **)(*plVar5 + 0x4d0))(uVar12,auVar14._0_8_);
  local_f8 = '\0';
  local_100 = plVar5;
  FUN_01d9ab80();
  if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d9a660();
  (**(code **)(*unaff_RDI + 0x928))();
  FUN_00d50b20();
  if (local_a8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_ac == '\0') {
    FUN_00d50b20();
  }
  if ((char)local_ec == '\0') {
    FUN_00d50b20();
  }
  if ((char)local_94 == '\0') {
    FUN_00d50b20();
  }
  if ((char)local_f0 == '\0') {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @01d942e0 — 2739 bytes
// str: ""GNScrollView""
// str: ""_editHasVerticalScroller""
// str: ""_editHasHorizontalScroller""
// str: ""_editBorderStyle""
// str: ""_editKeepsSpaceForWindowResizeButton""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d942e0(void)

{
  int iVar1;
  
  if (DAT_028b8778 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026f0e00 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f8e78 = FUN_0006d940();
          _DAT_026f8e60 = "GNScrollView";
          _DAT_026f8e68 = 0x1c0;
          _DAT_026f8e70 = FUN_00074e80;
          _DAT_026f8e80 = 0;
          uRam00000000026f8e88 = 0;
          _DAT_026f8e90 = 0;
          uRam00000000026f8e98 = 0;
          _DAT_026f8ea0 = 0;
          uRam00000000026f8ea8 = 0;
          _DAT_026f8eb0 = 0;
          uRam00000000026f8eb8 = 0;
          _DAT_026f8ec0 = 0;
          uRam00000000026f8ec8 = 0;
          _DAT_026f8ed0 = 0;
          uRam00000000026f8ed8 = 0;
          _DAT_026f8ee0 = 0;
          uRam00000000026f8ee8 = 0;
          _DAT_026f8ef0 = 0;
          uRam00000000026f8ef8 = 0;
          _DAT_026f8f00 = 0;
          uRam00000000026f8f08 = 0;
          _DAT_026f8f10 = 0;
          uRam00000000026f8f18 = 0;
          _DAT_026f8f20 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b8738 = "_editHasVerticalScroller";
      _DAT_028b8740 = &DAT_026f8e60;
      _DAT_028b8748 = 0;
      _DAT_028b8750 = &DAT_027f1768;
      _DAT_028b8758 = FUN_01da1550;
      _DAT_028b8760 = FUN_01d94dc0;
      _DAT_028b8768 = 0;
      uRam00000000028b8770 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b87c0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026f0e00 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f8e78 = FUN_0006d940();
          _DAT_026f8e60 = "GNScrollView";
          _DAT_026f8e68 = 0x1c0;
          _DAT_026f8e70 = FUN_00074e80;
          _DAT_026f8e80 = 0;
          uRam00000000026f8e88 = 0;
          _DAT_026f8e90 = 0;
          uRam00000000026f8e98 = 0;
          _DAT_026f8ea0 = 0;
          uRam00000000026f8ea8 = 0;
          _DAT_026f8eb0 = 0;
          uRam00000000026f8eb8 = 0;
          _DAT_026f8ec0 = 0;
          uRam00000000026f8ec8 = 0;
          _DAT_026f8ed0 = 0;
          uRam00000000026f8ed8 = 0;
          _DAT_026f8ee0 = 0;
          uRam00000000026f8ee8 = 0;
          _DAT_026f8ef0 = 0;
          uRam00000000026f8ef8 = 0;
          _DAT_026f8f00 = 0;
          uRam00000000026f8f08 = 0;
          _DAT_026f8f10 = 0;
          uRam00000000026f8f18 = 0;
          _DAT_026f8f20 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b8780 = "_editHasHorizontalScroller";
      _DAT_028b8788 = &DAT_026f8e60;
      _DAT_028b8790 = 0;
      _DAT_028b8798 = &DAT_027f1768;
      _DAT_028b87a0 = FUN_01da1550;
      _DAT_028b87a8 = FUN_01d94e00;
      _DAT_028b87b0 = 0;
      uRam00000000028b87b8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b8808 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026f0e00 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f8e78 = FUN_0006d940();
          _DAT_026f8e60 = "GNScrollView";
          _DAT_026f8e68 = 0x1c0;
          _DAT_026f8e70 = FUN_00074e80;
          _DAT_026f8e80 = 0;
          uRam00000000026f8e88 = 0;
          _DAT_026f8e90 = 0;
          uRam00000000026f8e98 = 0;
          _DAT_026f8ea0 = 0;
          uRam00000000026f8ea8 = 0;
          _DAT_026f8eb0 = 0;
          uRam00000000026f8eb8 = 0;
          _DAT_026f8ec0 = 0;
          uRam00000000026f8ec8 = 0;
          _DAT_026f8ed0 = 0;
          uRam00000000026f8ed8 = 0;
          _DAT_026f8ee0 = 0;
          uRam00000000026f8ee8 = 0;
          _DAT_026f8ef0 = 0;
          uRam00000000026f8ef8 = 0;
          _DAT_026f8f00 = 0;
          uRam00000000026f8f08 = 0;
          _DAT_026f8f10 = 0;
          uRam00000000026f8f18 = 0;
          _DAT_026f8f20 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b87c8 = "_editBorderStyle";
      _DAT_028b87d0 = &DAT_026f8e60;
      _DAT_028b87d8 = 0;
      _DAT_028b87e0 = &DAT_027f176b;
      _DAT_028b87e8 = FUN_01da1570;
      _DAT_028b87f0 = FUN_01d94e40;
      _DAT_028b87f8 = 0;
      uRam00000000028b8800 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b8850 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026f0e00 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f8e78 = FUN_0006d940();
          _DAT_026f8e60 = "GNScrollView";
          _DAT_026f8e68 = 0x1c0;
          _DAT_026f8e70 = FUN_00074e80;
          _DAT_026f8e80 = 0;
          uRam00000000026f8e88 = 0;
          _DAT_026f8e90 = 0;
          uRam00000000026f8e98 = 0;
          _DAT_026f8ea0 = 0;
          uRam00000000026f8ea8 = 0;
          _DAT_026f8eb0 = 0;
          uRam00000000026f8eb8 = 0;
          _DAT_026f8ec0 = 0;
          uRam00000000026f8ec8 = 0;
          _DAT_026f8ed0 = 0;
          uRam00000000026f8ed8 = 0;
          _DAT_026f8ee0 = 0;
          uRam00000000026f8ee8 = 0;
          _DAT_026f8ef0 = 0;
          uRam00000000026f8ef8 = 0;
          _DAT_026f8f00 = 0;
          uRam00000000026f8f08 = 0;
          _DAT_026f8f10 = 0;
          uRam00000000026f8f18 = 0;
          _DAT_026f8f20 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b8810 = "_editKeepsSpaceForWindowResizeButton";
      _DAT_028b8818 = &DAT_026f8e60;
      _DAT_028b8820 = 0;
      _DAT_028b8828 = &DAT_027f1768;
      _DAT_028b8830 = FUN_01da1550;
      _DAT_028b8838 = FUN_01d94e90;
      _DAT_028b8840 = 0;
      uRam00000000028b8848 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b8898 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026f0e00 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f8e78 = FUN_0006d940();
          _DAT_026f8e60 = "GNScrollView";
          _DAT_026f8e68 = 0x1c0;
          _DAT_026f8e70 = FUN_00074e80;
          _DAT_026f8e80 = 0;
          uRam00000000026f8e88 = 0;
          _DAT_026f8e90 = 0;
          uRam00000000026f8e98 = 0;
          _DAT_026f8ea0 = 0;
          uRam00000000026f8ea8 = 0;
          _DAT_026f8eb0 = 0;
          uRam00000000026f8eb8 = 0;
          _DAT_026f8ec0 = 0;
          uRam00000000026f8ec8 = 0;
          _DAT_026f8ed0 = 0;
          uRam00000000026f8ed8 = 0;
          _DAT_026f8ee0 = 0;
          uRam00000000026f8ee8 = 0;
          _DAT_026f8ef0 = 0;
          uRam00000000026f8ef8 = 0;
          _DAT_026f8f00 = 0;
          uRam00000000026f8f08 = 0;
          _DAT_026f8f10 = 0;
          uRam00000000026f8f18 = 0;
          _DAT_026f8f20 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b8858 = "setHasHorizontalScroller";
      _DAT_028b8860 = &DAT_026f8e60;
      _DAT_028b8868 = 0;
      _DAT_028b8870 = &DAT_027f1768;
      _DAT_028b8878 = FUN_01da1550;
      _DAT_028b8880 = FUN_01d94ee0;
      _DAT_028b8888 = 0;
      uRam00000000028b8890 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b88e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026f0e00 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f8e78 = FUN_0006d940();
          _DAT_026f8e60 = "GNScrollView";
          _DAT_026f8e68 = 0x1c0;
          _DAT_026f8e70 = FUN_00074e80;
          _DAT_026f8e80 = 0;
          uRam00000000026f8e88 = 0;
          _DAT_026f8e90 = 0;
          uRam00000000026f8e98 = 0;
          _DAT_026f8ea0 = 0;
          uRam00000000026f8ea8 = 0;
          _DAT_026f8eb0 = 0;
          uRam00000000026f8eb8 = 0;
          _DAT_026f8ec0 = 0;
          uRam00000000026f8ec8 = 0;
          _DAT_026f8ed0 = 0;
          uRam00000000026f8ed8 = 0;
          _DAT_026f8ee0 = 0;
          uRam00000000026f8ee8 = 0;
          _DAT_026f8ef0 = 0;
          uRam00000000026f8ef8 = 0;
          _DAT_026f8f00 = 0;
          uRam00000000026f8f08 = 0;
          _DAT_026f8f10 = 0;
          uRam00000000026f8f18 = 0;
          _DAT_026f8f20 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b88a0 = "setHasVerticalScroller";
      _DAT_028b88a8 = &DAT_026f8e60;
      _DAT_028b88b0 = 0;
      _DAT_028b88b8 = &DAT_027f1768;
      _DAT_028b88c0 = FUN_01da1550;
      _DAT_028b88c8 = FUN_01d95060;
      _DAT_028b88d0 = 0;
      uRam00000000028b88d8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b8928 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026f0e00 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f8e78 = FUN_0006d940();
          _DAT_026f8e60 = "GNScrollView";
          _DAT_026f8e68 = 0x1c0;
          _DAT_026f8e70 = FUN_00074e80;
          _DAT_026f8e80 = 0;
          uRam00000000026f8e88 = 0;
          _DAT_026f8e90 = 0;
          uRam00000000026f8e98 = 0;
          _DAT_026f8ea0 = 0;
          uRam00000000026f8ea8 = 0;
          _DAT_026f8eb0 = 0;
          uRam00000000026f8eb8 = 0;
          _DAT_026f8ec0 = 0;
          uRam00000000026f8ec8 = 0;
          _DAT_026f8ed0 = 0;
          uRam00000000026f8ed8 = 0;
          _DAT_026f8ee0 = 0;
          uRam00000000026f8ee8 = 0;
          _DAT_026f8ef0 = 0;
          uRam00000000026f8ef8 = 0;
          _DAT_026f8f00 = 0;
          uRam00000000026f8f08 = 0;
          _DAT_026f8f10 = 0;
          uRam00000000026f8f18 = 0;
          _DAT_026f8f20 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b88e8 = "hasVerticalScroller";
      _DAT_028b88f0 = &DAT_026f8e60;
      _DAT_028b88f8 = 0;
      _DAT_028b8900 = &DAT_027f176e;
      _DAT_028b8908 = FUN_01da1590;
      _DAT_028b8910 = FUN_01d951e0;
      _DAT_028b8918 = 0;
      uRam00000000028b8920 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b8970 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026f0e00 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f8e78 = FUN_0006d940();
          _DAT_026f8e60 = "GNScrollView";
          _DAT_026f8e68 = 0x1c0;
          _DAT_026f8e70 = FUN_00074e80;
          _DAT_026f8e80 = 0;
          uRam00000000026f8e88 = 0;
          _DAT_026f8e90 = 0;
          uRam00000000026f8e98 = 0;
          _DAT_026f8ea0 = 0;
          uRam00000000026f8ea8 = 0;
          _DAT_026f8eb0 = 0;
          uRam00000000026f8eb8 = 0;
          _DAT_026f8ec0 = 0;
          uRam00000000026f8ec8 = 0;
          _DAT_026f8ed0 = 0;
          uRam00000000026f8ed8 = 0;
          _DAT_026f8ee0 = 0;
          uRam00000000026f8ee8 = 0;
          _DAT_026f8ef0 = 0;
          uRam00000000026f8ef8 = 0;
          _DAT_026f8f00 = 0;
          uRam00000000026f8f08 = 0;
          _DAT_026f8f10 = 0;
          uRam00000000026f8f18 = 0;
          _DAT_026f8f20 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b8930 = "hasHorizontalScroller";
      _DAT_028b8938 = &DAT_026f8e60;
      _DAT_028b8940 = 0;
      _DAT_028b8948 = &DAT_027f176e;
      _DAT_028b8950 = FUN_01da1590;
      _DAT_028b8958 = FUN_01d95200;
      _DAT_028b8960 = 0;
      uRam00000000028b8968 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @01db4190 — 2036 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01db4956) */
/* WARNING: Removing unreachable block (ram,0x01db495f) */
/* WARNING: Removing unreachable block (ram,0x01db45ea) */
/* WARNING: Removing unreachable block (ram,0x01db45f3) */
/* WARNING: Removing unreachable block (ram,0x01db454b) */
/* WARNING: Removing unreachable block (ram,0x01db4553) */
/* WARNING: Removing unreachable block (ram,0x01db4558) */
/* WARNING: Removing unreachable block (ram,0x01db4582) */
/* WARNING: Removing unreachable block (ram,0x01db4360) */
/* WARNING: Removing unreachable block (ram,0x01db4369) */
/* WARNING: Removing unreachable block (ram,0x01db4494) */
/* WARNING: Removing unreachable block (ram,0x01db449d) */
/* WARNING: Removing unreachable block (ram,0x01db47e8) */
/* WARNING: Removing unreachable block (ram,0x01db47f1) */
/* WARNING: Removing unreachable block (ram,0x01db48fa) */
/* WARNING: Removing unreachable block (ram,0x01db4903) */
/* WARNING: Removing unreachable block (ram,0x01db4984) */
/* WARNING: Removing unreachable block (ram,0x01db498d) */
/* WARNING: Removing unreachable block (ram,0x01db4812) */
/* WARNING: Removing unreachable block (ram,0x01db481b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01db4190(void)

{
  dword dVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar9;
  bool bVar10;
  float fVar11;
  undefined8 uVar12;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  longlong local_128;
  char local_120;
  float local_f8;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_58;
  longlong local_50;
  longlong local_40;
  char local_38;
  
  iVar6 = FUN_01d3a5a0();
  if ((iVar6 == 1) && (iVar6 = FUN_01d3b630(), iVar6 == 1)) {
    FUN_01d3abf0();
    local_68 = FUN_01e466c0();
    fVar11 = (float)local_68;
    if ((char)unaff_RDI[0x27] == '\0') {
      fVar11 = (float)((ulonglong)local_68 >> 0x20);
    }
    uStack_60 = extraout_XMM0_Dc;
    uStack_5c = extraout_XMM0_Dd;
    FUN_01db2340();
    if (local_40 == 0) {
      local_50 = 0;
      dVar1 = MACH_HEADER.filetype;
    }
    else {
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      dVar1 = *(dword *)(local_40 + 0xc);
      local_50 = local_40;
    }
    if ((int)dVar1 < 2) goto LAB_01db4229;
    lVar9 = 0;
    lVar8 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(local_50 + 0x10) + lVar9 * 8);
      if (lVar8 != lVar2) {
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        bVar10 = lVar8 != 0;
        lVar8 = lVar2;
        if (bVar10) {
          FUN_00d50b20();
        }
      }
      local_f8 = (float)*(undefined8 *)(lVar8 + 0x28);
      fVar14 = (float)((ulonglong)*(undefined8 *)(lVar8 + 0x28) >> 0x20);
      uVar16 = 0;
      uVar17 = 0;
      cVar5 = FUN_00d05410((float)local_68,local_f8,*(undefined8 *)(lVar8 + 0x30));
      if (cVar5 != '\0') {
        puVar7 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar7 = &DAT_02572358;
        (*DAT_02572370)();
        local_58 = puVar7;
        FUN_00d21140();
        plVar3 = *(longlong **)(lVar8 + 0x20);
        if (plVar3 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar3 + 0x4d8))();
        bVar10 = (char)unaff_RDI[0x27] == '\0';
        local_68._0_4_ = local_f8;
        uStack_60 = uVar16;
        if (bVar10) {
          local_68._0_4_ = fVar14;
          uStack_60 = uVar17;
        }
        fVar13 = (float)*(undefined8 *)(lVar8 + 0x10);
        if (bVar10) {
          fVar13 = (float)((ulonglong)*(undefined8 *)(lVar8 + 0x10) >> 0x20);
        }
        local_68._4_4_ = fVar14;
        uStack_5c = uVar17;
        FUN_00d50b20();
        lVar2 = *(longlong *)(*(longlong *)(local_50 + 0x10) + 8 + lVar9 * 8);
        if (lVar8 == lVar2) {
          plVar3 = *(longlong **)(lVar8 + 0x20);
        }
        else {
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
          plVar3 = *(longlong **)(lVar2 + 0x20);
          lVar8 = lVar2;
        }
        if (plVar3 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar3 + 0x4d8))();
        bVar10 = (char)unaff_RDI[0x27] == '\0';
        if (bVar10) {
          local_f8 = fVar14;
        }
        fVar14 = (float)*(undefined8 *)(lVar8 + 0x10);
        if (bVar10) {
          fVar14 = (float)((ulonglong)*(undefined8 *)(lVar8 + 0x10) >> 0x20);
        }
        FUN_00d50b20();
        lVar9 = *(longlong *)(*(longlong *)(local_50 + 0x10) + 8 + lVar9 * 8);
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar9 != 0) {
          FUN_00d50b20();
        }
        fVar13 = (fVar11 - (float)local_68) + fVar13;
        fVar14 = (local_f8 + fVar11) - fVar14;
        bVar10 = true;
        goto LAB_01db451e;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < (longlong)*(int *)(local_50 + 0xc) + -1);
  }
  else {
    local_50 = 0;
LAB_01db4229:
    lVar8 = 0;
  }
  local_98 = *unaff_RSI;
  local_90 = '\0';
  FUN_01e459c0();
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
LAB_01db4267:
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  return;
LAB_01db451e:
  local_68._0_4_ = fVar11;
  (**(code **)(*unaff_RDI + 0x658))();
  lVar2 = *unaff_RSI;
  if (lVar2 == lVar9) {
    if (((char)unaff_RSI[1] == '\0') && (lVar9 != 0)) {
      FUN_00d50b00();
      goto LAB_01db45cc;
    }
    lVar2 = *unaff_RSI;
  }
  else {
    lVar4 = unaff_RSI[1];
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    *unaff_RSI = lVar9;
    if (((char)lVar4 != '\0') && (lVar2 != 0)) {
      FUN_00d50b20();
    }
LAB_01db45cc:
    *(undefined1 *)(unaff_RSI + 1) = 1;
    lVar2 = *unaff_RSI;
  }
  if ((lVar2 == 0) || (iVar6 = FUN_01d3a5a0(), iVar6 == 6)) goto LAB_01db4820;
  FUN_01d3abf0();
  uVar12 = FUN_01e466c0();
  fVar11 = (float)uVar12;
  if ((char)unaff_RDI[0x27] == '\0') {
    fVar11 = (float)((ulonglong)uVar12 >> 0x20);
  }
  fVar15 = fVar14;
  if (fVar11 <= fVar14) {
    fVar15 = fVar11;
  }
  fVar11 = fVar13;
  if (fVar13 <= fVar15) {
    fVar11 = fVar15;
  }
  local_68._0_4_ = fVar11 - (float)local_68;
  if (((float)local_68 != DAT_0239424c) || (NAN((float)local_68) || NAN(DAT_0239424c))) {
    lVar2 = *(longlong *)local_58[2];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_68 = FUN_01db3040((float)local_68);
    uStack_60 = extraout_XMM0_Dc_00;
    uStack_5c = extraout_XMM0_Dd_00;
    uVar12 = local_68;
    if (lVar2 != 0) {
      FUN_00d50b20();
      uVar12 = local_68;
    }
    local_68._4_4_ = (float)((ulonglong)uVar12 >> 0x20);
    local_68._0_4_ = (float)uVar12;
    if (((float)local_68 != DAT_0239424c) || (NAN((float)local_68) || NAN(DAT_0239424c))) {
      lVar2 = *(longlong *)(local_58[2] + 8);
      local_68 = uVar12;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_01db3040((uint)(float)local_68 ^ _DAT_023945e0);
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      FUN_01db28c0();
      (**(code **)(*unaff_RDI + 0x620))();
      FUN_00d403d0();
      lVar2 = DAT_027f22b8;
      if (DAT_027f22b8 != 0) {
        FUN_00d50b00();
      }
      local_80 = 0;
      FUN_00d50b00();
      local_80 = '\x01';
      local_c8 = 0;
      local_c0 = '\0';
      local_88 = unaff_RDI;
      FUN_00d40470(&local_c8,&local_88,1,3);
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      uVar12 = local_68;
      if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
        uVar12 = local_68;
      }
      local_68._4_4_ = (float)((ulonglong)uVar12 >> 0x20);
      if (lVar2 != 0) {
        local_68 = uVar12;
        FUN_00d50b20();
      }
      bVar10 = false;
    }
  }
  goto LAB_01db451e;
LAB_01db4820:
  if (!bVar10) {
    FUN_00d403d0();
    local_b8 = DAT_027f22c0;
    if (DAT_027f22c0 != 0) {
      FUN_00d50b00();
    }
    local_b0 = '\x01';
    local_70 = 0;
    FUN_00d50b00();
    local_70 = '\x01';
    local_a8 = 0;
    local_a0 = '\0';
    local_78 = unaff_RDI;
    FUN_00d40470(&local_a8,&local_78,1,3);
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    FUN_01e42030();
    if (lVar9 == 0) {
      bVar10 = false;
    }
    else {
      FUN_01e4c160();
      bVar10 = local_128 != 0;
      if ((local_120 != '\0') && (local_128 != 0)) {
        FUN_00d50b20();
      }
    }
    if (bVar10) {
      FUN_01e42030();
      FUN_01d86b20();
    }
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  goto LAB_01db4267;
}




// ============================================================
// @01dceb30 — 2004 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01dcefa6) */
/* WARNING: Removing unreachable block (ram,0x01dcf02c) */
/* WARNING: Removing unreachable block (ram,0x01dcf038) */

void FUN_01dceb30(undefined8 param_1,undefined8 param_2,size_t param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  void *pvVar4;
  longlong **pplVar5;
  int unaff_ESI;
  longlong *unaff_RDI;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  bool bVar9;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  undefined8 local_78;
  int local_70;
  longlong *local_60;
  char local_58 [8];
  longlong local_50;
  undefined8 local_48;
  int local_40;
  int local_34;
  
  local_34 = unaff_ESI;
  if ((int)unaff_RDI[0x30] != unaff_ESI) {
    FUN_01e40eb0();
    if (local_60 == (longlong *)0x0) {
      bVar9 = false;
    }
    else {
      FUN_01e42030();
      bVar9 = local_90 != (longlong *)0x0;
      if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar9) {
      FUN_01e42030();
      (**(code **)(*local_60 + 0x620))();
      if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  if (((char)unaff_RDI[0x4f] == '\0') || ((int)unaff_RDI[0x30] != local_34)) {
    bVar9 = (int)unaff_RDI[0x30] != local_34 || (char)unaff_RDI[0x4f] != '\0';
  }
  else {
    bVar9 = true;
    if (*(int *)(unaff_RDI[0x51] + 0xc) == *(int *)(unaff_RDI[0x2c] + 0xc)) {
      if (*(int *)(unaff_RDI[0x51] + 0xc) == 0) {
        bVar9 = false;
      }
      else {
        FUN_00d23310();
        pplVar5 = &local_90;
        if (local_58[0] != '\0') {
          pplVar5 = (longlong **)local_58;
        }
        local_90 = (longlong *)CONCAT71(local_90._1_7_,local_58[0]);
        *(char *)pplVar5 = '\0';
        if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        bVar9 = *(int *)((longlong)local_60 + 0xc) != (int)unaff_RDI[0x30];
        if (((char)local_90 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  *(int *)(unaff_RDI + 0x30) = local_34;
  FUN_00d216c0();
  if (0 < *(int *)(unaff_RDI[0x2c] + 0xc)) {
    if (local_34 < 1) {
      iVar7 = 0;
      do {
        FUN_00d7a7b0();
        if ((((local_58[0] == '\0') && (local_60 != (longlong *)0x0)) &&
            (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_58[0] = '\0';
        FUN_00d21140();
        if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_60 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(unaff_RDI[0x2c] + 0xc));
    }
    else {
      iVar7 = 0;
      do {
        FUN_00d7a7b0();
        iVar6 = local_34;
        if (((local_58[0] == '\0') && (local_60 != (longlong *)0x0)) &&
           ((FUN_00d50b00(), iVar6 = local_34, local_58[0] != '\0' && (local_60 != (longlong *)0x0))
           )) {
          FUN_00d50b20();
          iVar6 = local_34;
        }
        do {
          lVar3 = DAT_028b8a78;
          if (DAT_028b8a78 != 0) {
            FUN_00d50b00();
          }
          FUN_00d21140();
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        local_58[0] = '\0';
        FUN_00d21140();
        if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_60 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(unaff_RDI[0x2c] + 0xc));
    }
  }
  if ((bVar9) && ((char)unaff_RDI[0x4f] != '\0')) {
    if (unaff_RDI[0x51] != 0) {
      local_58[0] = '\0';
      local_60 = (longlong *)0x0;
      local_48 = 0xffffffff;
      local_40 = 0;
      local_50 = unaff_RDI[0x51];
      iVar7 = 0;
      while( true ) {
        iVar6 = 0;
        if (iVar7 != 0) {
          if (iVar7 < 1) {
            iVar6 = -iVar7;
          }
          else {
            local_48 = CONCAT44(local_48._4_4_,(int)local_48 - iVar7);
            FUN_00d23690();
            local_40 = local_40 + local_48._4_4_;
            iVar6 = 0;
          }
          local_48 = CONCAT44(iVar6,(int)local_48);
        }
        lVar3 = (longlong)(int)local_48;
        iVar7 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,iVar7);
        if (*(int *)(local_50 + 0xc) <= iVar7) break;
        local_60 = *(longlong **)(*(longlong *)(local_50 + 0x10) + 8 + lVar3 * 8);
        iVar7 = iVar6;
        if (local_60 != (longlong *)0x0) {
          local_88 = '\0';
          local_90 = (longlong *)0x0;
          local_78 = 0xffffffff;
          local_70 = 0;
          local_80 = local_60;
          while( true ) {
            lVar3 = (longlong)(int)local_78;
            iVar7 = (int)local_78 + 1;
            local_78 = CONCAT44(local_78._4_4_,iVar7);
            if (*(int *)((longlong)local_80 + 0xc) <= iVar7) break;
            local_90 = *(longlong **)(local_80[2] + 8 + lVar3 * 8);
            if (local_90 != DAT_028b8a88) {
              (**(code **)(*local_90 + 0x978))();
              (**(code **)(*local_90 + 0x478))();
            }
            FUN_00d50130();
            if (local_78._4_4_ != 0) {
              if (local_78._4_4_ < 1) {
                iVar7 = -local_78._4_4_;
              }
              else {
                local_78 = CONCAT44(local_78._4_4_,(int)local_78 - local_78._4_4_);
                FUN_00d23690();
                local_70 = local_70 + local_78._4_4_;
                iVar7 = 0;
              }
              local_78 = CONCAT44(iVar7,(int)local_78);
            }
          }
          FUN_01de69a0();
          iVar7 = local_48._4_4_;
        }
      }
      FUN_01de6930();
    }
    FUN_00d216c0();
    if (0 < *(int *)(unaff_RDI[0x2c] + 0xc)) {
      if (local_34 < 1) {
        iVar7 = 0;
        do {
          FUN_01dcf670();
          if ((((local_58[0] == '\0') && (local_60 != (longlong *)0x0)) &&
              (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_58[0] = '\0';
          FUN_00d21140();
          if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (local_60 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(unaff_RDI[0x2c] + 0xc));
      }
      else {
        iVar7 = 0;
        do {
          FUN_01dcf670();
          iVar6 = local_34;
          if (((local_58[0] == '\0') && (local_60 != (longlong *)0x0)) &&
             ((FUN_00d50b00(), iVar6 = local_34, local_58[0] != '\0' &&
              (local_60 != (longlong *)0x0)))) {
            FUN_00d50b20();
            iVar6 = local_34;
          }
          do {
            plVar1 = DAT_028b8a88;
            if (DAT_028b8a88 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            local_58[0] = '\0';
            FUN_00d21140();
            if ((local_58[0] != '\0') && (plVar1 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar1 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          local_58[0] = '\0';
          FUN_00d21140();
          if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (local_60 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(unaff_RDI[0x2c] + 0xc));
      }
    }
  }
  (**(code **)(*unaff_RDI + 0xa20))();
  if (local_34 <= (int)unaff_RDI[0x36]) {
    *(undefined4 *)(unaff_RDI + 0x36) = 0xffffffff;
  }
  (**(code **)(*unaff_RDI + 0x928))();
  lVar3 = unaff_RDI[0x34];
  if (lVar3 != 0) {
    iVar7 = *(int *)(lVar3 + 0x18);
    iVar6 = iVar7 + 3;
    if (-1 < iVar7) {
      iVar6 = iVar7;
    }
    if (3 < iVar7) {
      uVar2 = iVar6 >> 2;
      uVar8 = (ulonglong)uVar2;
      bVar9 = false;
      while( true ) {
        uVar2 = uVar2 - 1;
        pvVar4 = (void *)(ulonglong)uVar2;
        if (local_34 <= *(int *)(*(longlong *)(lVar3 + 0x10) + (longlong)pvVar4 * 4)) {
          FUN_00e7b4e0();
          FUN_00c921e0();
          bVar9 = true;
        }
        if ((longlong)uVar8 < 2) break;
        uVar8 = uVar8 - 1;
        lVar3 = unaff_RDI[0x34];
      }
      if (bVar9) {
        lVar3 = unaff_RDI[0x34];
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        FUN_00c8e340();
        _memcpy(pvVar4,(void *)(longlong)*(int *)(lVar3 + 0x18),param_3);
        FUN_00d50b20();
        (**(code **)(*unaff_RDI + 0x400))();
      }
    }
  }
  (**(code **)(*unaff_RDI + 0x930))();
  (**(code **)(*unaff_RDI + 0x620))();
  return;
}




// ============================================================
// @002b4e40 — 1994 bytes
// str: ""GNScrollView""
// str: ""MDScrollViewAddsView""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x002b522b) */
/* WARNING: Removing unreachable block (ram,0x002b51e6) */
/* WARNING: Removing unreachable block (ram,0x002b5463) */
/* WARNING: Removing unreachable block (ram,0x002b546f) */
/* WARNING: Removing unreachable block (ram,0x002b51f2) */
/* WARNING: Removing unreachable block (ram,0x002b5237) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002b4e40(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  char *pcVar10;
  longlong **pplVar11;
  longlong *unaff_RDI;
  bool bVar12;
  float fVar13;
  float extraout_XMM0_Db;
  float extraout_XMM0_Dd;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 uVar18;
  undefined1 auVar17 [16];
  undefined8 in_XMM1_Qb;
  undefined1 auVar19 [16];
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined1 local_78 [8];
  undefined8 uStack_70;
  longlong local_68;
  char local_60;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  
  cVar7 = (**(code **)(*unaff_RDI + 0x40))();
  if (cVar7 != '\0') {
    plVar9 = (longlong *)(**(code **)(*unaff_RDI + 0x10))();
    bVar12 = plVar9 != (longlong *)0x0;
    if (bVar12) {
      FUN_00d50b00();
    }
    FUN_01d99a50();
    FUN_00d23310();
    plVar1 = local_48;
    local_38[0] = local_40[0];
    pcVar10 = local_40;
    if (local_40[0] == '\0') {
      pcVar10 = local_38;
    }
    *pcVar10 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] == '\0') && (plVar1 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (plVar1 == (longlong *)0x0) goto LAB_002b5491;
    (**(code **)(*plVar1 + 0x7b0))();
    plVar5 = local_48;
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar5 != (longlong *)0x0) {
      FUN_01d97ec0();
      plVar5 = local_48;
      if ((((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) &&
          (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0x58))();
      plVar6 = local_48;
      if (((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) &&
         ((FUN_00d50b00(), local_40[0] != '\0' && (local_48 != (longlong *)0x0)))) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar6 + 0x4d8))();
      local_78 = (undefined1  [8])param_2;
      uStack_70 = in_XMM1_Qb;
      (**(code **)(*plVar1 + 0x7b0))();
      (**(code **)(*local_48 + 0x4d8))();
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_c8 = (float)param_2;
      fStack_c4 = (float)((ulonglong)param_2 >> 0x20);
      fStack_bc = (float)((ulonglong)in_XMM1_Qb >> 0x20);
      if (plVar5 == (longlong *)0x0) {
        fStack_c0 = (float)in_XMM1_Qb;
        auVar17._0_4_ = SUB84(local_78,0) - local_c8;
        auVar17._4_4_ = (float)((ulonglong)local_78 >> 0x20) - fStack_c4;
        auVar17._8_4_ = (float)uStack_70 - fStack_c0;
        auVar17._12_4_ = (float)((ulonglong)uStack_70 >> 0x20) - fStack_bc;
        auVar19 = blendps(_local_78,auVar17,0xd);
      }
      else {
        (**(code **)(*plVar9 + 0x640))();
        fVar13 = (float)(**(code **)(*local_48 + 0x580))();
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        auVar19._4_12_ = local_78._4_12_;
        auVar19._0_4_ = SUB84(local_78,0) - (local_c8 - fVar13);
      }
      (**(code **)(*plVar1 + 0x7b0))();
      (**(code **)(*local_48 + 0x4d0))();
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar5 != (longlong *)0x0) {
        FUN_01d9ad00();
        plVar1 = local_48;
        auVar14._4_4_ = extraout_XMM0_Db + fStack_c4;
        auVar14._12_4_ = extraout_XMM0_Dd + fStack_bc;
        auVar14._0_4_ = auVar14._4_4_;
        auVar14._8_4_ = auVar14._12_4_;
        register0x00001204 = auVar14._4_12_;
        local_78._0_4_ = auVar14._4_4_ + DAT_02390d00;
        if (local_40[0] == '\0') {
          if (local_48 == (longlong *)0x0) goto LAB_002b535a;
          FUN_00d50b00();
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_002b530a:
          auVar15._0_8_ = (**(code **)(*plVar1 + 0x4d8))();
          auVar15._8_8_ = extraout_XMM0_Qb;
          fVar13 = (float)((ulonglong)auVar15._0_8_ >> 0x20);
          if ((fVar13 != (float)local_78._0_4_) || (NAN(fVar13) || NAN((float)local_78._0_4_))) {
            auVar17 = insertps(auVar15,_local_78,0x10);
            (**(code **)(*plVar1 + 0x4d0))(auVar17._0_8_);
          }
          local_78._4_4_ = auVar14._4_4_;
          local_78._0_4_ = (float)local_78._0_4_ + auVar19._4_4_;
          uStack_70._0_4_ = auVar14._12_4_;
          uStack_70._4_4_ = auVar14._12_4_;
          bVar4 = false;
        }
        else {
          if (local_48 != (longlong *)0x0) goto LAB_002b530a;
LAB_002b535a:
          bVar4 = true;
        }
        auVar16._0_8_ = (**(code **)(*plVar5 + 0x4d8))();
        auVar16._8_8_ = extraout_XMM0_Qb_00;
        fVar13 = (float)((ulonglong)auVar16._0_8_ >> 0x20);
        uVar18 = (undefined4)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
        if ((fVar13 != (float)local_78._0_4_) || (NAN(fVar13) || NAN((float)local_78._0_4_))) {
          auVar2._4_4_ = fVar13;
          auVar2._0_4_ = fVar13 + ((float)local_78._0_4_ - fVar13);
          auVar2._8_4_ = uVar18;
          auVar2._12_4_ = uVar18;
          auVar17 = insertps(auVar16,auVar2,0x10);
          auVar3._4_4_ = auVar19._4_4_;
          auVar3._0_4_ = auVar19._4_4_ - ((float)local_78._0_4_ - fVar13);
          auVar3._8_4_ = auVar19._12_4_;
          auVar3._12_4_ = auVar19._12_4_;
          auVar19 = insertps(auVar19,auVar3,0x10);
          (**(code **)(*plVar5 + 0x4d0))(auVar17._0_8_,auVar19._0_8_);
        }
        if (!bVar4) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*plVar9 + 0x4a0))();
      FUN_00d23340();
      pcVar10 = local_40;
      if (local_40[0] == '\0') {
        pcVar10 = local_38;
      }
      local_38[0] = local_40[0];
      *pcVar10 = '\0';
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != plVar6) {
        (**(code **)(*plVar6 + 0x478))();
        (**(code **)(*plVar9 + 0x450))();
      }
      FUN_00d50b20();
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
    goto LAB_002b5491;
  }
  pplVar11 = &local_48;
  (**(code **)(*unaff_RDI + 0x20))();
  plVar1 = local_48;
  if ((DAT_026fc540 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
    _DAT_02710b58 = FUN_0006d940();
    _DAT_02710b40 = "MDScrollViewAddsView";
    _DAT_02710b48 = 0x150;
    _DAT_02710b50 = FUN_002b8980;
    _DAT_02710b60 = 0;
    uRam0000000002710b68 = 0;
    _DAT_02710b70 = 0;
    uRam0000000002710b78 = 0;
    _DAT_02710b80 = 0;
    uRam0000000002710b88 = 0;
    _DAT_02710b90 = 0;
    uRam0000000002710b98 = 0;
    _DAT_02710ba0 = 0;
    uRam0000000002710ba8 = 0;
    _DAT_02710bb0 = 0;
    uRam0000000002710bb8 = 0;
    _DAT_02710bc0 = 0;
    uRam0000000002710bc8 = 0;
    _DAT_02710bd0 = 0;
    uRam0000000002710bd8 = 0;
    _DAT_02710be0 = 0;
    uRam0000000002710be8 = 0;
    _DAT_02710bf0 = 0;
    uRam0000000002710bf8 = 0;
    _DAT_02710c00 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_002b4ec6:
    pplVar11 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar7 = FUN_00e85ea0();
    if (cVar7 == '\0') goto LAB_002b4ec6;
  }
  plVar1 = *pplVar11;
  if (*(char *)(pplVar11 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar11 + 1) = 0;
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  plVar9 = (longlong *)(**(code **)(*unaff_RDI + 0x10))();
  if ((DAT_026f0e00 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
    _DAT_026f8e78 = FUN_0006d940();
    _DAT_026f8e60 = "GNScrollView";
    _DAT_026f8e68 = 0x1c0;
    _DAT_026f8e70 = FUN_00074e80;
    _DAT_026f8e80 = 0;
    uRam00000000026f8e88 = 0;
    _DAT_026f8e90 = 0;
    uRam00000000026f8e98 = 0;
    _DAT_026f8ea0 = 0;
    uRam00000000026f8ea8 = 0;
    _DAT_026f8eb0 = 0;
    uRam00000000026f8eb8 = 0;
    _DAT_026f8ec0 = 0;
    uRam00000000026f8ec8 = 0;
    _DAT_026f8ed0 = 0;
    uRam00000000026f8ed8 = 0;
    _DAT_026f8ee0 = 0;
    uRam00000000026f8ee8 = 0;
    _DAT_026f8ef0 = 0;
    uRam00000000026f8ef8 = 0;
    _DAT_026f8f00 = 0;
    uRam00000000026f8f08 = 0;
    _DAT_026f8f10 = 0;
    uRam00000000026f8f18 = 0;
    _DAT_026f8f20 = 0;
    ___cxa_guard_release();
  }
  if (plVar9 == (longlong *)0x0) {
LAB_002b515f:
    bVar12 = false;
    plVar9 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    cVar7 = FUN_00e85ea0();
    if (cVar7 == '\0') goto LAB_002b515f;
    bVar12 = true;
    FUN_00d50b00();
  }
  FUN_01d9a650();
  FUN_01e40eb0();
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x478))();
  }
  plVar1[0x27] = 0;
  if (plVar1[0x28] != 0) {
    FUN_01d9ad20();
  }
  FUN_00d50130();
  (**(code **)(*unaff_RDI + 0x28))();
  FUN_01d9a660();
  FUN_00d50b20();
LAB_002b5491:
  if ((bVar12) && (plVar9 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01db3040 — 1814 bytes
// str: ""GNScrollView""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01db3040(float param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong **pplVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  bool bVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_a0;
  float local_58 [2];
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  char local_38;
  
  fVar11 = (float)((ulonglong)param_2 >> 0x20);
  fVar15 = (float)param_2;
  plVar1 = *(longlong **)(*unaff_RSI + 0x20);
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  uVar10 = (**(code **)(*plVar1 + 0x4d8))();
  local_58[0] = fVar15;
  local_58[1] = fVar11;
  FUN_00d50b20();
  cVar3 = *(char *)(unaff_RDI + 0x138);
  bVar8 = cVar3 == '\0';
  if (!bVar8) {
    fVar11 = fVar15;
  }
  local_58[bVar8] = param_1 + fVar11;
  if (bVar8) {
    lVar7 = *unaff_RSI;
    fVar15 = (float)((ulonglong)*(undefined8 *)(lVar7 + 0x18) >> 0x20);
    fVar12 = local_58[1];
    fVar14 = fVar15;
    if (local_58[1] <= fVar15) goto LAB_01db310d;
LAB_01db311b:
    local_58[bVar8] = fVar15;
    iVar4 = *(int *)(lVar7 + 0x38);
  }
  else {
    lVar7 = *unaff_RSI;
    fVar15 = (float)*(undefined8 *)(lVar7 + 0x18);
    fVar14 = (float)((ulonglong)*(undefined8 *)(lVar7 + 0x18) >> 0x20);
    fVar12 = local_58[0];
    if (fVar15 < local_58[0]) goto LAB_01db311b;
LAB_01db310d:
    fVar14 = (float)((ulonglong)*(undefined8 *)(lVar7 + 0x10) >> 0x20);
    fVar15 = fVar14;
    if (cVar3 != '\0') {
      fVar15 = (float)*(undefined8 *)(lVar7 + 0x10);
    }
    if (fVar12 < fVar15) goto LAB_01db311b;
    iVar4 = *(int *)(lVar7 + 0x38);
  }
  if (iVar4 == 0) goto LAB_01db3614;
  local_50 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  plVar1 = *(longlong **)(lVar7 + 0x20);
  bVar8 = plVar1 != (longlong *)0x0;
  if (bVar8) {
    FUN_00d50b00();
    local_50 = plVar1;
  }
  plVar2 = local_50;
  if ((DAT_026f0e00 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_026f8e78 = FUN_0006d940();
    _DAT_026f8e60 = "GNScrollView";
    _DAT_026f8e68 = 0x1c0;
    _DAT_026f8e70 = FUN_00074e80;
    _DAT_026f8e80 = 0;
    uRam00000000026f8e88 = 0;
    _DAT_026f8e90 = 0;
    uRam00000000026f8e98 = 0;
    _DAT_026f8ea0 = 0;
    uRam00000000026f8ea8 = 0;
    _DAT_026f8eb0 = 0;
    uRam00000000026f8eb8 = 0;
    _DAT_026f8ec0 = 0;
    uRam00000000026f8ec8 = 0;
    _DAT_026f8ed0 = 0;
    uRam00000000026f8ed8 = 0;
    _DAT_026f8ee0 = 0;
    uRam00000000026f8ee8 = 0;
    _DAT_026f8ef0 = 0;
    uRam00000000026f8ef8 = 0;
    _DAT_026f8f00 = 0;
    uRam00000000026f8f08 = 0;
    _DAT_026f8f10 = 0;
    uRam00000000026f8f18 = 0;
    _DAT_026f8f20 = 0;
    ___cxa_guard_release();
  }
  if (plVar2 == (longlong *)0x0) {
LAB_01db31ba:
    if (DAT_02802688 != 0) goto LAB_01db31c7;
LAB_01db3242:
    lVar7 = 0;
    bVar9 = true;
    while( true ) {
      plVar2 = local_50;
      (**(code **)(*local_50 + 0x4a0))();
      iVar4 = *(int *)(local_40 + 0xc);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      plVar6 = local_48;
      bVar8 = bVar9;
      if (iVar4 <= lVar7) break;
      (**(code **)(*plVar2 + 0x4a0))();
      plVar6 = local_48;
      plVar2 = *(longlong **)(*(longlong *)(local_40 + 0x10) + lVar7 * 8);
      if (local_48 == plVar2) {
        if ((!bVar9) && (plVar2 != (longlong *)0x0)) {
          bVar8 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        local_48 = plVar2;
        bVar8 = true;
        if ((bVar9) && (plVar6 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((DAT_026f0e00 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        _DAT_026f8e78 = FUN_0006d940();
        _DAT_026f8e60 = "GNScrollView";
        _DAT_026f8e68 = 0x1c0;
        _DAT_026f8e70 = FUN_00074e80;
        _DAT_026f8e80 = 0;
        uRam00000000026f8e88 = 0;
        _DAT_026f8e90 = 0;
        uRam00000000026f8e98 = 0;
        _DAT_026f8ea0 = 0;
        uRam00000000026f8ea8 = 0;
        _DAT_026f8eb0 = 0;
        uRam00000000026f8eb8 = 0;
        _DAT_026f8ec0 = 0;
        uRam00000000026f8ec8 = 0;
        _DAT_026f8ed0 = 0;
        uRam00000000026f8ed8 = 0;
        _DAT_026f8ee0 = 0;
        uRam00000000026f8ee8 = 0;
        _DAT_026f8ef0 = 0;
        uRam00000000026f8ef8 = 0;
        _DAT_026f8f00 = 0;
        uRam00000000026f8f08 = 0;
        _DAT_026f8f10 = 0;
        uRam00000000026f8f18 = 0;
        _DAT_026f8f20 = 0;
        ___cxa_guard_release();
      }
      pplVar5 = (longlong **)&DAT_02802688;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x360))();
        cVar3 = FUN_00e85ea0();
        pplVar5 = &local_48;
        if (cVar3 == '\0') {
          pplVar5 = (longlong **)&DAT_02802688;
        }
      }
      plVar6 = local_48;
      if (*pplVar5 != (longlong *)0x0) break;
      if (local_48 != (longlong *)0x0) {
        local_48 = (longlong *)0x0;
        if (bVar8) {
          FUN_00d50b20();
        }
        bVar8 = false;
      }
      lVar7 = lVar7 + 1;
      bVar9 = bVar8;
    }
joined_r0x01db3544:
    if (plVar6 != (longlong *)0x0) {
LAB_01db3214:
      if (bVar8) goto LAB_01db3449;
      bVar8 = false;
      cVar3 = *(char *)(unaff_RDI + 0x138);
      goto joined_r0x01db345e;
    }
joined_r0x01db35f1:
    plVar6 = (longlong *)0x0;
joined_r0x01db35d0:
    bVar9 = true;
    bVar8 = true;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01db31ba;
    if (local_50 == (longlong *)0x0) goto LAB_01db3242;
LAB_01db31c7:
    plVar2 = local_48;
    plVar6 = local_50;
    if (local_48 != local_50) {
      if (plVar1 != (longlong *)0x0 && local_50 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_48 = plVar6;
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b20();
        goto joined_r0x01db3544;
      }
      if (plVar6 == (longlong *)0x0) goto joined_r0x01db35f1;
      goto LAB_01db3214;
    }
    if (local_50 == (longlong *)0x0) goto joined_r0x01db35f1;
LAB_01db3449:
    bVar8 = true;
    FUN_00d50b00();
    cVar3 = *(char *)(unaff_RDI + 0x138);
joined_r0x01db345e:
    fVar12 = local_58[0];
    if (cVar3 == '\0') {
      fVar12 = local_58[1];
    }
    plVar2 = *(longlong **)(*unaff_RSI + 0x20);
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar2 + 0x4d8))();
    if (*(char *)(unaff_RDI + 0x138) == '\0') {
      fVar15 = fVar14;
    }
    FUN_00d50b20();
    FUN_01d97870();
    local_a0 = FUN_01cf5cf0();
    fVar14 = (float)((ulonglong)local_a0 >> 0x20);
    fVar13 = (float)local_a0;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (*(int *)(*unaff_RSI + 0x38) == 2) {
      bVar9 = *(char *)(unaff_RDI + 0x138) == '\0';
      if (!bVar9) {
        fVar14 = fVar13;
      }
      *(float *)((longlong)&local_a0 + (ulonglong)bVar9 * 4) = fVar14 - (fVar12 - fVar15);
      FUN_01d97870();
      FUN_01cf5c80((int)local_a0);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    if (!bVar8) goto joined_r0x01db35d0;
    FUN_00d50b20();
    bVar9 = false;
    bVar8 = false;
  }
  if ((plVar1 != (longlong *)0x0) && (bVar8 = bVar9, local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar8 && plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_01db3614:
  cVar3 = FUN_01e4ce30();
  plVar1 = *(longlong **)(*unaff_RSI + 0x20);
  if (cVar3 == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    fVar15 = local_58[0];
    (**(code **)(*plVar1 + 0x4d0))(uVar10);
    FUN_00d50b20();
  }
  else {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    fVar15 = local_58[0];
    FUN_01e3b180(uVar10);
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  fVar14 = local_58[1];
  if (*(char *)(unaff_RDI + 0x138) != '\0') {
    fVar14 = fVar15;
  }
  return CONCAT44(local_58[1],fVar14 - fVar11);
}




// ============================================================
// @002ccab0 — 1796 bytes
// str: ""%d sec""
// str: ""%.1f kHz""
// str: ""%@, %@, %@""
// ============================================================

void FUN_002ccab0(undefined8 param_1,double *param_2)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  undefined8 uVar5;
  pthread_key_t pVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  double *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar10;
  pthread_key_t pVar11;
  bool bVar12;
  bool bVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_90;
  undefined4 local_88;
  pthread_key_t local_84;
  double *local_80;
  longlong *local_78;
  uint local_70;
  double local_68;
  undefined8 local_60;
  int local_58;
  undefined4 uStack_54;
  char local_50;
  longlong local_48;
  char local_40;
  double local_38;
  
  dVar14 = *unaff_RSI;
  if ((dVar14 == 0.0) || (*(int *)((longlong)dVar14 + 0xc) == 0)) {
    if ((*param_2 == 0.0) || (*(int *)((longlong)*param_2 + 0xc) == 0)) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      return;
    }
    if (dVar14 != 0.0) goto LAB_002ccaee;
    uVar15 = 0;
    local_38 = 0.0;
    pVar11 = 0;
    bVar13 = false;
    iVar1 = 0;
    dVar14 = *param_2;
    if (dVar14 == 0.0) {
      uVar5 = 0;
      goto LAB_002ccef1;
    }
  }
  else {
LAB_002ccaee:
    local_70 = local_70 & 0xffffff00;
    local_78 = (longlong *)0x0;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_60._4_4_ = 0;
    pVar11 = 0;
    bVar13 = false;
    iVar1 = 0;
    local_38 = 0.0;
    local_80 = param_2;
    local_68 = dVar14;
    while( true ) {
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar9 = -local_60._4_4_;
        }
        else {
          iVar9 = (int)local_60 - local_60._4_4_;
          local_60 = CONCAT44(local_60._4_4_,iVar9);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar9 = 0;
        }
        local_60 = CONCAT44(iVar9,(int)local_60);
      }
      lVar2 = (longlong)(int)local_60;
      iVar9 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar9);
      if (*(int *)((longlong)local_68 + 0xc) <= iVar9) break;
      local_78 = *(longlong **)(*(longlong *)((longlong)local_68 + 0x10) + 8 + lVar2 * 8);
      if (iVar1 == 0) {
        iVar1 = FUN_00b86c20();
        bVar13 = true;
      }
      else {
        iVar9 = FUN_00b86c20();
        if (iVar1 != iVar9) {
          bVar13 = false;
        }
      }
      lVar2 = FUN_00b7a710();
      dVar14 = (double)FUN_00b7a6d0();
      pVar6 = pVar11;
      if (pVar11 != (int)((double)lVar2 / dVar14)) {
        pVar6 = 0xffffffff;
      }
      bVar12 = pVar11 == 0;
      pVar11 = pVar6;
      if (bVar12) {
        pVar11 = (int)((double)lVar2 / dVar14);
      }
      if ((local_38 != DAT_02390448) || (NAN(local_38) || NAN(DAT_02390448))) {
        dVar14 = (double)FUN_00b7a6d0();
        if ((local_38 != dVar14) || (NAN(local_38) || NAN(dVar14))) {
          local_38 = DAT_023b19a0;
        }
      }
      else {
        local_38 = (double)FUN_00b7a6d0();
      }
    }
    uVar15 = FUN_002d7370();
    dVar14 = *local_80;
    uVar5 = 0;
    if (dVar14 == 0.0) goto LAB_002ccef1;
  }
  local_70 = local_70 & 0xffffff00;
  local_78 = (longlong *)0x0;
  local_60 = 0xffffffff;
  local_58 = 0;
  local_60._4_4_ = 0;
  local_68 = dVar14;
  while( true ) {
    if (local_60._4_4_ != 0) {
      if (local_60._4_4_ < 1) {
        iVar9 = -local_60._4_4_;
      }
      else {
        iVar9 = (int)local_60 - local_60._4_4_;
        local_60 = CONCAT44(local_60._4_4_,iVar9);
        FUN_00d23690();
        local_58 = local_58 + local_60._4_4_;
        iVar9 = 0;
      }
      local_60 = CONCAT44(iVar9,(int)local_60);
    }
    lVar2 = (longlong)(int)local_60;
    iVar9 = (int)local_60 + 1;
    local_60 = CONCAT44(local_60._4_4_,iVar9);
    if (*(int *)((longlong)local_68 + 0xc) <= iVar9) break;
    lVar4 = *(longlong *)((longlong)local_68 + 0x10);
    plVar7 = *(longlong **)(lVar4 + 8 + lVar2 * 8);
    local_78 = plVar7;
    if (iVar1 == 0) {
      pvVar3 = _pthread_getspecific((pthread_key_t)lVar4);
      plVar10 = local_78;
      pVar6 = (pthread_key_t)lVar4;
      if ((pvVar3 != (void *)0x0) && (lVar2 = FUN_00e8b990(), plVar7 = plVar10, lVar2 != 0)) {
        plVar7 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
      }
      iVar1 = (**(code **)(*plVar7 + 0x380))();
      bVar13 = true;
    }
    else {
      pvVar3 = _pthread_getspecific((pthread_key_t)lVar4);
      plVar10 = local_78;
      pVar6 = (pthread_key_t)lVar4;
      if ((pvVar3 != (void *)0x0) && (lVar2 = FUN_00e8b990(), plVar7 = plVar10, lVar2 != 0)) {
        plVar7 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
      }
      iVar9 = (**(code **)(*plVar7 + 0x380))();
      if (iVar1 != iVar9) {
        bVar13 = false;
      }
    }
    plVar7 = local_78;
    pvVar3 = _pthread_getspecific(pVar6);
    plVar10 = local_78;
    if ((pvVar3 != (void *)0x0) && (lVar2 = FUN_00e8b990(), plVar7 = plVar10, lVar2 != 0)) {
      plVar7 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
    }
    lVar2 = (**(code **)(*plVar7 + 0x378))();
    plVar7 = local_78;
    pvVar3 = _pthread_getspecific(pVar6);
    plVar10 = local_78;
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), plVar7 = plVar10, lVar4 != 0)) {
      plVar7 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
    dVar14 = (double)(**(code **)(*plVar7 + 0x370))();
    plVar7 = local_78;
    pVar6 = 0xffffffff;
    if (pVar11 == (int)((double)lVar2 / dVar14)) {
      pVar6 = pVar11;
    }
    bVar12 = pVar11 == 0;
    pVar11 = pVar6;
    if (bVar12) {
      pVar11 = (int)((double)lVar2 / dVar14);
    }
    if ((local_38 != DAT_02390448) || (NAN(local_38) || NAN(DAT_02390448))) {
      pvVar3 = _pthread_getspecific(pVar6);
      plVar10 = local_78;
      if ((pvVar3 != (void *)0x0) && (lVar2 = FUN_00e8b990(), plVar7 = plVar10, lVar2 != 0)) {
        plVar7 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
      }
      dVar14 = (double)(**(code **)(*plVar7 + 0x370))();
      if ((local_38 != dVar14) || (NAN(local_38) || NAN(dVar14))) {
        local_38 = DAT_023b19a0;
      }
    }
    else {
      pvVar3 = _pthread_getspecific(pVar6);
      plVar10 = local_78;
      if ((pvVar3 != (void *)0x0) && (lVar2 = FUN_00e8b990(), plVar7 = plVar10, lVar2 != 0)) {
        plVar7 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
      }
      local_38 = (double)(**(code **)(*plVar7 + 0x370))();
    }
  }
  uVar5 = FUN_002d7290();
  uVar15 = extraout_XMM0_Qa;
LAB_002ccef1:
  plVar7 = DAT_02726ce0;
  if (bVar13) {
    uVar5 = FUN_00ae6870();
    plVar7 = local_78;
    uVar15 = extraout_XMM0_Qa_01;
    if (local_78 == (longlong *)0x0) {
      plVar7 = (longlong *)0x0;
      local_80 = (double *)0x0;
    }
    else {
      local_80 = (double *)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      if ((char)local_70 == '\0') {
        uVar15 = FUN_00d50b00();
        if (((char)local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          uVar15 = FUN_00d50b20();
        }
      }
    }
  }
  else {
    if (DAT_02726ce0 != (longlong *)0x0) {
      uVar5 = FUN_00d50b00();
      uVar15 = extraout_XMM0_Qa_00;
    }
    local_80 = (double *)CONCAT71((int7)((ulonglong)uVar5 >> 8),plVar7 != (longlong *)0x0);
  }
  plVar10 = DAT_02726ce0;
  if ((int)pVar11 < 1) {
    if (DAT_02726ce0 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    bVar13 = plVar10 != (longlong *)0x0;
    plVar8 = DAT_02726ce0;
  }
  else {
    local_88 = 1;
    local_90 = &DAT_024cc6f0;
    local_84 = pVar11;
    FUN_00d8cb40(uVar15,&local_90);
    plVar10 = local_78;
    plVar8 = DAT_02726ce0;
    if (local_78 == (longlong *)0x0) {
      plVar10 = (longlong *)0x0;
      bVar13 = false;
    }
    else {
      bVar13 = true;
      if ((char)local_70 == '\0') {
        FUN_00d50b00();
        plVar8 = DAT_02726ce0;
        if (((char)local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
          plVar8 = DAT_02726ce0;
        }
      }
    }
  }
  DAT_02726ce0 = plVar8;
  if (local_38 <= 0.0) {
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    bVar12 = plVar8 != (longlong *)0x0;
  }
  else {
    local_68 = local_38 / DAT_023907c0;
    local_70 = 1;
    local_78 = (longlong *)&DAT_024de5e0;
    FUN_00d8cb40(0,&local_78);
    plVar8 = local_90;
    if (local_90 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
      bVar12 = false;
    }
    else {
      bVar12 = true;
      if ((char)local_88 == '\0') {
        FUN_00d50b00();
        if (((char)local_88 != '\0') && (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  local_a8 = plVar8;
  local_a0 = plVar10;
  local_90 = plVar7;
  uVar15 = FUN_002bd7b0(&local_a0,&local_a8,3);
  FUN_00d8cb40(uVar15,&local_78);
  local_78 = (longlong *)&DAT_025df260;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  local_78 = (longlong *)&DAT_0253d630;
  if ((local_50 != '\0') && (CONCAT44(uStack_54,local_58) != 0)) {
    FUN_00d50b20();
  }
  local_78 = &DAT_024c5048;
  if (((char)local_60 != '\0') && (local_68 != 0.0)) {
    FUN_00d50b20();
  }
  if ((bVar12) && (plVar8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar13) && (plVar10 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_80 != '\0') && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @002ce760 — 1748 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x002ceab2) */
/* WARNING: Removing unreachable block (ram,0x002ceaa6) */
/* WARNING: Removing unreachable block (ram,0x002cee1a) */

ulonglong FUN_002ce760(undefined8 param_1,char param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  longlong unaff_RDI;
  bool bVar10;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  undefined8 *local_b0;
  char local_a8;
  longlong local_a0;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58 [8];
  longlong local_50;
  int local_48;
  int iStack_44;
  int iStack_40;
  longlong local_38;
  
  lVar7 = *(longlong *)(unaff_RDI + 0xe0);
  iVar8 = 0;
  if (lVar7 == 0) {
    bVar4 = false;
  }
  else {
    FUN_00d50b00();
    local_58[0] = '\0';
    local_60 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    uVar1 = *(uint *)(lVar7 + 0xc);
    if ((int)uVar1 < 1) {
      bVar4 = false;
    }
    else {
      lVar2 = *(longlong *)(lVar7 + 0x10);
      if (uVar1 == 1) {
        uVar9 = 0;
        bVar4 = false;
      }
      else {
        uVar9 = 0;
        bVar4 = false;
        bVar10 = false;
        do {
          while (lVar3 = *(longlong *)(lVar2 + uVar9 * 8), *(int *)(lVar3 + 0x20) != 0) {
            local_60 = *(longlong *)(lVar2 + 8 + uVar9 * 8);
            if (*(int *)(local_60 + 0x20) == 0) goto LAB_002ce830;
LAB_002ce80b:
            uVar9 = uVar9 + 2;
            if ((uVar1 & 0xfffffffe) == (uint)uVar9) goto LAB_002ce844;
          }
          bVar4 = bVar10;
          if (*(int *)(lVar3 + 0x24) != 2) {
            bVar4 = true;
          }
          local_60 = *(longlong *)(lVar2 + 8 + uVar9 * 8);
          bVar10 = bVar4;
          if (*(int *)(local_60 + 0x20) != 0) goto LAB_002ce80b;
LAB_002ce830:
          if (*(int *)(local_60 + 0x24) != 2) {
            bVar4 = true;
          }
          uVar9 = uVar9 + 2;
          bVar10 = bVar4;
        } while ((uVar1 & 0xfffffffe) != (uint)uVar9);
      }
LAB_002ce844:
      iVar8 = (int)uVar9;
      if ((uVar1 & 1) != 0) {
        local_60 = *(longlong *)(lVar2 + (uVar9 & 0xffffffff) * 8);
        bVar10 = bVar4;
        if ((*(int *)(local_60 + 0x20) == 0) && (bVar10 = true, *(int *)(local_60 + 0x24) == 2)) {
          bVar10 = bVar4;
        }
        bVar4 = bVar10;
        iVar8 = iVar8 + 1;
      }
    }
    local_50 = lVar7;
    local_48 = iVar8;
    FUN_002d7300();
    FUN_00d50b20();
  }
  FUN_002cd490();
  lVar2 = local_60;
  local_a0 = local_60;
  if (local_58[0] == '\0') {
    if (local_60 == 0) {
      bVar10 = true;
    }
    else {
      FUN_00d50b00();
      bVar10 = lVar2 == 0;
      if (param_2 != '\0') goto LAB_002ce8d8;
    }
joined_r0x002ce9e3:
    if ((!bVar4) || (bVar10)) {
      uVar9 = 0;
      if (bVar10) goto LAB_002cee39;
    }
    else {
      FUN_002cc5d0();
      uVar9 = CONCAT71((int7)((ulonglong)lVar7 >> 8),local_60 != 0);
      if ((local_58[0] != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    bVar10 = local_60 == 0;
    if (param_2 == '\0') goto joined_r0x002ce9e3;
LAB_002ce8d8:
    bVar10 = true;
    if (lVar2 == 0) goto joined_r0x002ce9e3;
    FUN_0075c8d0();
    lVar7 = local_60;
    if (local_58[0] != '\0') {
      if (local_60 == 0) goto LAB_002ce95d;
LAB_002ce923:
      FUN_01d3a560();
      iVar8 = FUN_01d3b590();
      if ((local_58[0] != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      local_38 = lVar7;
      if (iVar8 == 8) {
        bVar10 = false;
        goto LAB_002ce960;
      }
LAB_002cebc2:
      puVar6 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &DAT_02572358;
      (*DAT_02572370)();
      lVar7 = *(longlong *)(unaff_RDI + 0xe0);
      if (lVar7 != 0) {
        FUN_00d50b00();
        local_58[0] = '\0';
        local_60 = 0;
        local_48 = -1;
        iStack_44 = 0;
        iStack_40 = 0;
        local_50 = lVar7;
        while( true ) {
          if (iStack_44 != 0) {
            if (iStack_44 < 1) {
              iStack_44 = -iStack_44;
            }
            else {
              local_48 = local_48 - iStack_44;
              FUN_00d23690();
              iStack_40 = iStack_40 + iStack_44;
              iStack_44 = 0;
            }
          }
          lVar7 = (longlong)local_48;
          local_48 = local_48 + 1;
          if (*(int *)(local_50 + 0xc) <= local_48) break;
          local_60 = *(longlong *)(*(longlong *)(local_50 + 0x10) + 8 + lVar7 * 8);
          if (*(longlong *)(local_60 + 0x10) != 0) {
            FUN_00d50b00();
            iVar8 = *(int *)(local_60 + 0x20);
            FUN_00d50b20();
            if (iVar8 == 0) {
              lVar7 = *(longlong *)(local_60 + 0x10);
              if (lVar7 != 0) {
                FUN_00d50b00();
              }
              local_68 = '\0';
              local_70 = lVar7;
              FUN_00d21140();
              if ((local_68 != '\0') && (local_70 != 0)) {
                FUN_00d50b20();
              }
              if (lVar7 != 0) {
                FUN_00d50b20();
              }
            }
          }
        }
        FUN_002d7300();
        FUN_00d50b20();
      }
      lVar7 = *(longlong *)(unaff_RDI + 0xf0);
      local_a8 = '\0';
      local_b0 = puVar6;
      FUN_002cc5d0();
      local_80 = local_60;
      local_78 = 0;
      if (local_58[0] == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58[0] = '\0';
      }
      lVar2 = local_38;
      local_78 = '\x01';
      FUN_00761a80();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58[0] != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar6 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (lVar2 == 0) {
        bVar10 = false;
      }
      else {
        FUN_00d50b20();
        bVar10 = false;
      }
      goto joined_r0x002ce9e3;
    }
    if (local_60 != 0) {
      FUN_00d50b00();
      if ((local_58[0] != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_002ce923;
    }
LAB_002ce95d:
    bVar10 = true;
LAB_002ce960:
    lVar2 = DAT_026fcec8;
    local_d0 = 0;
    local_c8 = '\0';
    if (DAT_026fcec8 != 0) {
      FUN_00d50b00();
    }
    local_c0 = lVar2;
    local_b8 = '\x01';
    FUN_01e57260();
    local_90 = local_70;
    local_88 = 0;
    if (local_68 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    local_88 = '\x01';
    FUN_01f4f940(1,&local_d0,0,&local_90);
    lVar2 = local_60;
    if (local_58[0] == '\0') {
      if (((local_60 != 0) && (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58[0] = '\0';
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if (*(int *)(lVar2 + 0xc) == 1) {
      FUN_00d23310();
      lVar2 = local_60;
      plVar5 = (longlong *)local_58;
      if (local_58[0] == '\0') {
        plVar5 = &local_70;
      }
      local_70 = CONCAT71(local_70._1_7_,local_58[0]);
      *(char *)plVar5 = '\0';
      if ((local_58[0] != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (lVar7 == lVar2) {
        if ((char)local_70 == '\0') {
          local_38 = lVar7;
        }
        else {
          local_38 = lVar7;
          if (lVar2 != 0) {
            FUN_00d50b20();
            local_38 = lVar7;
          }
        }
      }
      else if ((char)local_70 == '\0') {
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        local_38 = lVar2;
        if (!bVar10) {
          FUN_00d50b20();
          local_38 = lVar2;
        }
      }
      else {
        local_38 = lVar2;
        if (!bVar10) {
          FUN_00d50b20();
          local_38 = lVar2;
        }
      }
      FUN_00d50b20();
      goto LAB_002cebc2;
    }
    FUN_00d50b20();
    if (!bVar10) {
      FUN_00d50b20();
    }
    uVar9 = 0;
  }
  FUN_00d50b20();
LAB_002cee39:
  return uVar9 & 0xffffffff;
}




// ============================================================
// @001e9800 — 1513 bytes
// str: ""GNScrollView""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e9800(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_000a32b0();
  *unaff_RDI = &DAT_0268e548;
  unaff_RDI[2] = &DAT_0268eea0;
  FUN_001e9f60();
  FUN_001ea250();
  FUN_001ea540();
  FUN_001ea830();
  FUN_001eab20();
  FUN_001eae10();
  FUN_001eb100();
  FUN_001eb3f0();
  FUN_001eb6e0();
  FUN_001eb9c0();
  FUN_001ebca0();
  FUN_001ebf80();
  *(undefined4 *)(unaff_RDI + 0x33) = 0;
  if (DAT_026f0e00 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f8e78 = FUN_0006d940();
      _DAT_026f8e60 = "GNScrollView";
      _DAT_026f8e68 = 0x1c0;
      _DAT_026f8e70 = FUN_00074e80;
      _DAT_026f8e80 = 0;
      uRam00000000026f8e88 = 0;
      _DAT_026f8e90 = 0;
      uRam00000000026f8e98 = 0;
      _DAT_026f8ea0 = 0;
      uRam00000000026f8ea8 = 0;
      _DAT_026f8eb0 = 0;
      uRam00000000026f8eb8 = 0;
      _DAT_026f8ec0 = 0;
      uRam00000000026f8ec8 = 0;
      _DAT_026f8ed0 = 0;
      uRam00000000026f8ed8 = 0;
      _DAT_026f8ee0 = 0;
      uRam00000000026f8ee8 = 0;
      _DAT_026f8ef0 = 0;
      uRam00000000026f8ef8 = 0;
      _DAT_026f8f00 = 0;
      uRam00000000026f8f08 = 0;
      _DAT_026f8f10 = 0;
      _uRam00000000026f8f18 = 0;
      _DAT_026f8f20 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026f8f1b == '\0') {
    FUN_001ec260();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x19c) = 0;
  if (DAT_026f0e00 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f8e78 = FUN_0006d940();
      _DAT_026f8e60 = "GNScrollView";
      _DAT_026f8e68 = 0x1c0;
      _DAT_026f8e70 = FUN_00074e80;
      _DAT_026f8e80 = 0;
      uRam00000000026f8e88 = 0;
      _DAT_026f8e90 = 0;
      uRam00000000026f8e98 = 0;
      _DAT_026f8ea0 = 0;
      uRam00000000026f8ea8 = 0;
      _DAT_026f8eb0 = 0;
      uRam00000000026f8eb8 = 0;
      _DAT_026f8ec0 = 0;
      uRam00000000026f8ec8 = 0;
      _DAT_026f8ed0 = 0;
      uRam00000000026f8ed8 = 0;
      _DAT_026f8ee0 = 0;
      uRam00000000026f8ee8 = 0;
      _DAT_026f8ef0 = 0;
      uRam00000000026f8ef8 = 0;
      _DAT_026f8f00 = 0;
      uRam00000000026f8f08 = 0;
      _DAT_026f8f10 = 0;
      _uRam00000000026f8f18 = 0;
      _DAT_026f8f20 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026f8f1b == '\0') {
    FUN_001ec4b0();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x19d) = 0;
  if (DAT_026f0e00 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f8e78 = FUN_0006d940();
      _DAT_026f8e60 = "GNScrollView";
      _DAT_026f8e68 = 0x1c0;
      _DAT_026f8e70 = FUN_00074e80;
      _DAT_026f8e80 = 0;
      uRam00000000026f8e88 = 0;
      _DAT_026f8e90 = 0;
      uRam00000000026f8e98 = 0;
      _DAT_026f8ea0 = 0;
      uRam00000000026f8ea8 = 0;
      _DAT_026f8eb0 = 0;
      uRam00000000026f8eb8 = 0;
      _DAT_026f8ec0 = 0;
      uRam00000000026f8ec8 = 0;
      _DAT_026f8ed0 = 0;
      uRam00000000026f8ed8 = 0;
      _DAT_026f8ee0 = 0;
      uRam00000000026f8ee8 = 0;
      _DAT_026f8ef0 = 0;
      uRam00000000026f8ef8 = 0;
      _DAT_026f8f00 = 0;
      uRam00000000026f8f08 = 0;
      _DAT_026f8f10 = 0;
      _uRam00000000026f8f18 = 0;
      _DAT_026f8f20 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026f8f1b == '\0') {
    FUN_001ec620();
    FUN_00e87980();
  }
  FUN_001ec790();
  *(undefined4 *)(unaff_RDI + 0x35) = 0;
  if (DAT_026f0e00 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f8e78 = FUN_0006d940();
      _DAT_026f8e60 = "GNScrollView";
      _DAT_026f8e68 = 0x1c0;
      _DAT_026f8e70 = FUN_00074e80;
      _DAT_026f8e80 = 0;
      uRam00000000026f8e88 = 0;
      _DAT_026f8e90 = 0;
      uRam00000000026f8e98 = 0;
      _DAT_026f8ea0 = 0;
      uRam00000000026f8ea8 = 0;
      _DAT_026f8eb0 = 0;
      uRam00000000026f8eb8 = 0;
      _DAT_026f8ec0 = 0;
      uRam00000000026f8ec8 = 0;
      _DAT_026f8ed0 = 0;
      uRam00000000026f8ed8 = 0;
      _DAT_026f8ee0 = 0;
      uRam00000000026f8ee8 = 0;
      _DAT_026f8ef0 = 0;
      uRam00000000026f8ef8 = 0;
      _DAT_026f8f00 = 0;
      uRam00000000026f8f08 = 0;
      _DAT_026f8f10 = 0;
      _uRam00000000026f8f18 = 0;
      _DAT_026f8f20 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026f8f1b == '\0') {
    FUN_001eca10();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x1ac) = 0;
  if (DAT_026f0e00 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f8e78 = FUN_0006d940();
      _DAT_026f8e60 = "GNScrollView";
      _DAT_026f8e68 = 0x1c0;
      _DAT_026f8e70 = FUN_00074e80;
      _DAT_026f8e80 = 0;
      uRam00000000026f8e88 = 0;
      _DAT_026f8e90 = 0;
      uRam00000000026f8e98 = 0;
      _DAT_026f8ea0 = 0;
      uRam00000000026f8ea8 = 0;
      _DAT_026f8eb0 = 0;
      uRam00000000026f8eb8 = 0;
      _DAT_026f8ec0 = 0;
      uRam00000000026f8ec8 = 0;
      _DAT_026f8ed0 = 0;
      uRam00000000026f8ed8 = 0;
      _DAT_026f8ee0 = 0;
      uRam00000000026f8ee8 = 0;
      _DAT_026f8ef0 = 0;
      uRam00000000026f8ef8 = 0;
      _DAT_026f8f00 = 0;
      uRam00000000026f8f08 = 0;
      _DAT_026f8f10 = 0;
      _uRam00000000026f8f18 = 0;
      _DAT_026f8f20 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026f8f1b == '\0') {
    FUN_001ecb80();
    FUN_00e87980();
  }
  FUN_001ecdc0();
  FUN_001ed0b0();
  return;
}




// ============================================================
// @01d924f0 — 1475 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01d92595) */
/* WARNING: Removing unreachable block (ram,0x01d925a5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d924f0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  undefined1 *puVar9;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  undefined8 local_78;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  fVar15 = (float)((ulonglong)param_2 >> 0x20);
  fVar14 = (float)param_2;
  iVar8 = FUN_01d3a5a0();
  if ((iVar8 == 7) &&
     (((cVar6 = (**(code **)(*unaff_RDI + 0xae8))(), cVar6 != '\0' &&
       (iVar8 = FUN_01d3b650(), iVar8 == 0)) ||
      ((cVar6 = (**(code **)(*unaff_RDI + 0xae0))(), cVar6 != '\0' &&
       (iVar8 = FUN_01d3b650(), iVar8 == 1)))))) {
    if ((longlong *)unaff_RDI[0x3d] == (longlong *)0x0) {
      return;
    }
    (**(code **)(*(longlong *)unaff_RDI[0x3d] + 0x3c0))();
    return;
  }
  iVar8 = FUN_01d3a5a0();
  if ((iVar8 != 1) || (iVar8 = FUN_01d3b630(), iVar8 != 1)) {
    local_88 = *unaff_RSI;
    local_80 = '\0';
    FUN_01daee00();
    if (local_80 == '\0') {
      return;
    }
    if (local_88 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  cVar6 = FUN_01d91c50();
  if (cVar6 == '\0') {
    return;
  }
  FUN_01d3abf0();
  local_78 = FUN_01e466c0();
  (**(code **)(*unaff_RDI + 0x640))();
  cVar6 = (**(code **)(*local_40 + 0x588))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar6 == '\0') {
LAB_01d92702:
    (**(code **)(*unaff_RDI + 0x640))();
    cVar6 = (**(code **)(*local_40 + 0x588))();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar11 = CONCAT44(fVar15,fVar14);
    if (cVar6 == '\0') goto LAB_01d92764;
    uVar11 = FUN_01d91f30();
    cVar6 = FUN_00d05410((undefined4)local_78,(int)uVar11,CONCAT44(fVar15,fVar14));
    if (cVar6 == '\0') goto LAB_01d92764;
    puVar9 = (undefined1 *)((longlong)unaff_RDI + 0x1f5);
  }
  else {
    (**(code **)(*unaff_RDI + 0x640))();
    cVar6 = (**(code **)(*local_40 + 0x588))();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar11 = DAT_023dccf4;
    uVar12 = DAT_023dccec;
    if (cVar6 != '\0') {
      uVar11 = FUN_01e3f820();
      fVar16 = (float)((ulonglong)uVar11 >> 0x20);
      auVar20._8_4_ = extraout_XMM0_Dc;
      auVar20._0_8_ = uVar11;
      auVar20._12_4_ = extraout_XMM0_Dd;
      if (fVar14 <= fVar15) {
        auVar3._4_4_ = fVar16;
        auVar3._0_4_ = fVar16 + (fVar15 - fVar14);
        auVar3._8_4_ = extraout_XMM0_Dd;
        auVar3._12_4_ = extraout_XMM0_Dd;
        auVar20 = insertps(auVar20,auVar3,0x10);
        uVar11 = CONCAT44(fVar14,fVar14);
        uVar12 = auVar20._0_8_;
      }
      else {
        auVar17._4_12_ = auVar20._4_12_;
        auVar17._0_4_ = (float)uVar11 + (fVar14 - fVar15);
        uVar11 = CONCAT44(fVar15,fVar15);
        uVar12 = auVar17._0_8_;
      }
    }
    fVar14 = (float)uVar12;
    fVar15 = (float)((ulonglong)uVar12 >> 0x20);
    cVar6 = FUN_00d05410((undefined4)local_78,fVar14,uVar11);
    uVar11 = CONCAT44(fVar15,fVar14);
    if (cVar6 == '\0') goto LAB_01d92702;
    puVar9 = (undefined1 *)((longlong)unaff_RDI + 500);
  }
  *puVar9 = 1;
LAB_01d92764:
  if ((*(char *)((longlong)unaff_RDI + 500) == '\0') &&
     (*(char *)((longlong)unaff_RDI + 0x1f5) == '\0')) {
    local_98 = *unaff_RSI;
    local_90 = '\0';
    FUN_01daee00();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    _DAT_028b86e8 = FUN_00e7d6f0();
    FUN_01f27fe0();
    local_58 = unaff_RDI + 0x3c;
    local_48 = 0;
    (**(code **)(unaff_RDI[0x3c] + 0x10))();
    uVar10 = FUN_00d50b00();
    local_50 = local_58;
    local_48 = '\x01';
    local_a8 = 0;
    local_a0 = '\0';
    FUN_01f47190(uVar10,&local_a8);
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      (**(code **)(*local_50 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d92330();
    do {
      do {
        FUN_01d3abf0();
        uVar12 = FUN_01e466c0();
        if (*(char *)((longlong)unaff_RDI + 500) == '\0') {
          if (*(char *)((longlong)unaff_RDI + 0x1f5) != '\0') {
            local_78 = uVar12;
            uVar13 = FUN_01d91f30();
            uVar12 = uVar11;
            uVar11 = uVar13;
            goto LAB_01d9291f;
          }
          DAT_028b86e0 = 1;
        }
        else {
          local_78 = uVar12;
          (**(code **)(*unaff_RDI + 0x640))();
          cVar6 = (**(code **)(*local_40 + 0x588))();
          uVar13 = uVar11;
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          uVar12 = DAT_023dccf4;
          uVar11 = DAT_023dccec;
          if (cVar6 != '\0') {
            uVar11 = FUN_01e3f820();
            fVar16 = (float)((ulonglong)uVar13 >> 0x20);
            fVar15 = (float)uVar13;
            fVar14 = (float)((ulonglong)uVar11 >> 0x20);
            auVar18._8_4_ = extraout_XMM0_Dc_00;
            auVar18._0_8_ = uVar11;
            auVar18._12_4_ = extraout_XMM0_Dd_00;
            if (fVar15 <= fVar16) {
              auVar2._4_4_ = fVar14;
              auVar2._0_4_ = fVar14 + (fVar16 - fVar15);
              auVar2._8_4_ = extraout_XMM0_Dd_00;
              auVar2._12_4_ = extraout_XMM0_Dd_00;
              auVar20 = insertps(auVar18,auVar2,0x10);
              uVar12 = CONCAT44(fVar15,fVar15);
              uVar11 = auVar20._0_8_;
            }
            else {
              auVar19._4_12_ = auVar18._4_12_;
              auVar19._0_4_ = (float)uVar11 + (fVar15 - fVar16);
              uVar12 = CONCAT44(fVar16,fVar16);
              uVar11 = auVar19._0_8_;
            }
          }
LAB_01d9291f:
          bVar7 = FUN_00d05410((undefined4)local_78,(int)uVar11,uVar12);
          DAT_028b86e0 = bVar7 ^ 1;
        }
        (**(code **)(*unaff_RDI + 0x658))();
        plVar5 = local_40;
        plVar1 = (longlong *)*unaff_RSI;
        if (plVar1 == local_40) {
          if (((char)unaff_RSI[1] != '\0') || (local_40 == (longlong *)0x0)) goto LAB_01d929c9;
          if (local_38 == '\0') {
            FUN_00d50b00();
            goto LAB_01d929c4;
          }
LAB_01d92982:
          *(undefined1 *)(unaff_RSI + 1) = 1;
        }
        else {
          lVar4 = unaff_RSI[1];
          if (local_38 != '\0') {
            *unaff_RSI = (longlong)local_40;
            if (((char)lVar4 != '\0') && (plVar1 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01d92982;
          }
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          *unaff_RSI = (longlong)plVar5;
          if (((char)lVar4 != '\0') && (plVar1 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_01d929c4:
          *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_01d929c9:
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (*unaff_RSI == 0) goto LAB_01d92a06;
        iVar8 = FUN_01d3a5a0();
      } while (iVar8 != 6);
      iVar8 = FUN_01d3b630();
    } while (iVar8 != 1);
LAB_01d92a06:
    FUN_01f27fe0();
    local_60 = 0;
    (**(code **)(*local_58 + 0x10))();
    FUN_00d50b00();
    local_68 = local_58;
    local_60 = '\x01';
    FUN_01f474f0();
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      (**(code **)(*local_68 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    *(undefined2 *)((longlong)unaff_RDI + 500) = 0;
  }
  return;
}




// ============================================================
// @002d1180 — 1454 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x002d12fc) */
/* WARNING: Removing unreachable block (ram,0x002d1308) */

ulonglong FUN_002d1180(undefined8 param_1,char param_2)

{
  longlong *plVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  void *pvVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  longlong unaff_RDI;
  longlong lVar11;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68 [8];
  longlong local_60;
  undefined8 local_58;
  int local_50;
  char local_48;
  undefined7 uStack_47;
  char local_40;
  longlong local_38;
  
  if (*(longlong *)(unaff_RDI + 0xf0) == 0) {
    uVar9 = 0;
    goto LAB_002d172b;
  }
  uVar3 = FUN_00788ea0();
  local_100 = DAT_026fcf00;
  uVar9 = (ulonglong)uVar3;
  if (((char)uVar3 == '\0') || (param_2 == '\0')) goto LAB_002d172b;
  local_110 = 0;
  local_108 = '\0';
  if (DAT_026fcf00 != 0) {
    FUN_00d50b00();
  }
  local_f8 = '\x01';
  FUN_01e57260();
  local_88 = 0;
  lVar7 = CONCAT71(uStack_47,local_48);
  if (local_40 == '\0') {
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_88 = '\x01';
  local_90 = lVar7;
  FUN_01f4f940(1,&local_110,0,&local_90);
  lVar11 = local_70;
  if (local_68[0] == '\0') {
    if (((local_70 != 0) && (FUN_00d50b00(), local_68[0] != '\0')) && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68[0] = '\0';
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if (*(int *)(lVar11 + 0xc) == 1) {
    FUN_00d23310();
    lVar7 = local_70;
    pcVar5 = local_68;
    if (local_68[0] == '\0') {
      pcVar5 = &local_48;
    }
    local_48 = local_68[0];
    *pcVar5 = '\0';
    if ((local_68[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 == '\0') && (lVar7 != 0)) {
      FUN_00d50b00();
    }
    FUN_00788ba0();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    FUN_002d0ef0();
    lVar7 = local_70;
    if (local_68[0] == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
        goto LAB_002d1413;
      }
LAB_002d161a:
      bVar2 = true;
    }
    else {
      if (local_70 == 0) goto LAB_002d161a;
LAB_002d1413:
      local_38 = lVar11;
      local_68[0] = '\0';
      local_70 = 0;
      local_60 = lVar7;
      local_58 = 0xffffffff;
      local_50 = 0;
      iVar10 = 0;
      while( true ) {
        iVar4 = 0;
        if (iVar10 != 0) {
          if (iVar10 < 1) {
            iVar4 = -iVar10;
          }
          else {
            local_58 = CONCAT44(local_58._4_4_,(int)local_58 - iVar10);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar4 = 0;
          }
          local_58 = CONCAT44(iVar4,(int)local_58);
        }
        lVar7 = (longlong)(int)local_58;
        iVar10 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar10);
        if (*(int *)(local_60 + 0xc) <= iVar10) break;
        lVar7 = *(longlong *)(*(longlong *)(local_60 + 0x10) + 8 + lVar7 * 8);
        local_70 = lVar7;
        iVar10 = iVar4;
        if (*(int *)(lVar7 + 0x24) == 2) {
          plVar1 = *(longlong **)(lVar7 + 0x10);
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          pvVar6 = _pthread_getspecific((pthread_key_t)lVar7);
          plVar8 = plVar1;
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            plVar8 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          }
          FUN_0075c8d0();
          local_78 = 0;
          lVar7 = CONCAT71(uStack_47,local_48);
          if (local_40 == '\0') {
            if (lVar7 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_78 = '\x01';
          local_e8 = '\0';
          local_f0 = (longlong *)0x0;
          local_e0 = (longlong *)0x0;
          local_d8 = '\0';
          local_80 = lVar7;
          (**(code **)(*plVar8 + 0x488))(&local_e0,&local_f0,1,0);
          if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
            (**(code **)(*local_e0 + 0x10))();
            FUN_00d50b20();
          }
          if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
            (**(code **)(*local_f0 + 0x10))();
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          FUN_002c2560();
          iVar10 = local_58._4_4_;
        }
      }
      FUN_002d7300();
      bVar2 = false;
      lVar11 = local_38;
    }
    FUN_00d403d0();
    lVar7 = DAT_026fce60;
    if (DAT_026fce60 != 0) {
      FUN_00d50b00();
    }
    local_d0 = lVar7;
    local_c8 = '\x01';
    if (unaff_RDI != 0) {
      FUN_00d50b00();
    }
    local_c0 = 0;
    local_b8 = '\0';
    FUN_00d40470(&local_c0,&stack0xffffffffffffff50,1,3);
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (!bVar2) {
      FUN_00d50b20();
    }
    if (lVar11 == 0) {
      uVar9 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
      goto LAB_002d172b;
    }
  }
  uVar9 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
  FUN_00d50b20();
LAB_002d172b:
  return uVar9 & 0xffffffff;
}




// ============================================================
// @01cfe8d0 — 1433 bytes
// ============================================================

void FUN_01cfe8d0(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  longlong *plVar6;
  char *pcVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar8;
  bool bVar9;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  longlong local_40;
  char local_38 [8];
  
  if (*unaff_RSI == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    if ((DAT_028b7948 == (longlong *)0x0) || (DAT_028b7951 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028b7948 == (longlong *)0x0) {
        plVar6 = (longlong *)FUN_00e8fc40();
        FUN_00022d50();
        (**(code **)(*plVar6 + 0x18))();
        if (DAT_028b7948 == plVar6) {
          bVar5 = false;
          bVar4 = false;
        }
        else {
          bVar5 = true;
          bVar4 = true;
          bVar9 = DAT_028b7948 != (longlong *)0x0;
          DAT_028b7948 = plVar6;
          if (bVar9) {
            FUN_00d50b20();
          }
        }
        if (DAT_028b7950 == '\0') {
          DAT_028b7950 = '\x01';
          FUN_00e8cb90();
          bVar4 = bVar5;
        }
        if (!bVar4) {
          FUN_00d50b20();
        }
        FUN_01f27fe0();
        local_e8 = DAT_027ef228;
        plVar6 = (longlong *)CONCAT71(uStack_4f,local_50);
        if (DAT_027ef228 != 0) {
          FUN_00d50b00();
        }
        local_e0 = '\x01';
        FUN_00cac150();
        local_68 = local_98;
        local_60 = 0;
        if (local_90 == '\0') {
          if (local_98 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_90 = '\0';
        }
        local_60 = '\x01';
        (**(code **)(*plVar6 + 0x5f0))(&local_68,&local_e8);
        lVar8 = local_40;
        if (local_38[0] == '\0') {
          if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38[0] = '\0';
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
          FUN_00d50b20();
        }
        if (lVar8 != 0) {
          local_d8 = lVar8;
          local_d0 = '\0';
          FUN_00ca94c0();
          lVar8 = local_40;
          if (local_38[0] == '\0') {
            if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38[0] = '\0';
          }
          local_58 = lVar8;
          if ((local_d0 != '\0') && (local_d8 != 0)) {
            FUN_00d50b20();
          }
          lVar8 = 0;
          while( true ) {
            FUN_00c9fe20();
            lVar2 = local_40;
            local_50 = local_38[0];
            pcVar7 = local_38;
            if (local_38[0] == '\0') {
              pcVar7 = &local_50;
            }
            *pcVar7 = '\0';
            if ((local_38[0] != '\0') && (lVar2 != 0)) {
              FUN_00d50b20();
            }
            iVar1 = *(int *)(lVar2 + 0xc);
            if (local_50 != '\0') {
              FUN_00d50b20();
            }
            if (iVar1 <= lVar8) break;
            FUN_00c9fe20();
            lVar2 = local_40;
            local_50 = local_38[0];
            pcVar7 = local_38;
            if (local_38[0] == '\0') {
              pcVar7 = &local_50;
            }
            *pcVar7 = '\0';
            if ((local_38[0] != '\0') && (lVar2 != 0)) {
              FUN_00d50b20();
            }
            lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + lVar8 * 8);
            if (lVar2 != 0) {
              FUN_00d50b00();
            }
            if (local_50 != '\0') {
              FUN_00d50b20();
            }
            local_c0 = '\0';
            local_c8 = lVar2;
            FUN_000175c0();
            lVar3 = CONCAT71(uStack_4f,local_50);
            if (local_48 == '\0') {
              if (lVar3 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_48 = '\0';
            }
            local_80 = '\x01';
            local_88 = lVar3;
            FUN_01cfd750();
            lVar3 = local_40;
            if ((local_38[0] == '\0') && (local_40 != 0)) {
              FUN_00d50b00();
            }
            if ((local_80 != '\0') && (local_88 != 0)) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
              FUN_00d50b20();
            }
            if ((local_c0 != '\0') && (local_c8 != 0)) {
              FUN_00d50b20();
            }
            FUN_01cff270();
            local_b8 = lVar3;
            local_b0 = '\0';
            local_38[0] = '\0';
            local_40 = lVar2;
            FUN_00ca0840();
            if ((local_38[0] != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if ((local_b0 != '\0') && (local_b8 != 0)) {
              FUN_00d50b20();
            }
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
            lVar8 = lVar8 + 1;
          }
          if (local_58 != 0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        DAT_028b7951 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028b7951 = '\x01';
        FUN_00e8cb70();
      }
    }
    local_a8 = *unaff_RSI;
    local_a0 = '\0';
    FUN_000175c0();
    lVar8 = local_40;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_38[0] == '\0') {
      if (local_40 == 0) {
        *unaff_RDI = 0;
        *(undefined1 *)(unaff_RDI + 1) = 1;
      }
      else {
        FUN_00d50b00();
        *unaff_RDI = lVar8;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      *unaff_RDI = local_40;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      local_38[0] = '\0';
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @01dcd6e0 — 1404 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01dcdb79) */
/* WARNING: Removing unreachable block (ram,0x01dcdb85) */
/* WARNING: Removing unreachable block (ram,0x01dcd90e) */
/* WARNING: Removing unreachable block (ram,0x01dcd91a) */
/* WARNING: Removing unreachable block (ram,0x01dcda4d) */
/* WARNING: Removing unreachable block (ram,0x01dcda59) */
/* WARNING: Removing unreachable block (ram,0x01dcdbb1) */
/* WARNING: Removing unreachable block (ram,0x01dcdbba) */

undefined8 * FUN_01dcd6e0(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  longlong *local_68;
  char local_60;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02572358;
  (*DAT_02572370)();
  lVar8 = *(longlong *)(unaff_RSI + 0x160);
  if (*(int *)(lVar8 + 0xc) < 1) {
    bVar3 = false;
    local_48 = (longlong *)0x0;
    bVar4 = false;
    local_40 = (longlong *)0x0;
    bVar1 = false;
    lVar13 = 0;
    bVar2 = false;
    plVar10 = (longlong *)0x0;
  }
  else {
    lVar11 = 0;
    plVar10 = (longlong *)0x0;
    bVar2 = false;
    bVar1 = false;
    local_40 = (longlong *)0x0;
    bVar4 = false;
    local_48 = (longlong *)0x0;
    bVar3 = false;
    lVar12 = 0;
    do {
      lVar13 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + lVar11 * 8);
      if (lVar13 != 0) {
        FUN_00d50b00();
      }
      if (lVar12 == lVar13) {
        lVar13 = lVar12;
        if ((bVar1) || (lVar12 == 0)) {
          bVar14 = bVar1;
          if (lVar12 == 0) {
            lVar13 = 0;
          }
          else {
            FUN_00d50b20();
          }
        }
        else {
          bVar14 = true;
        }
      }
      else {
        bVar14 = true;
        if ((bVar1) && (lVar12 != 0)) {
          FUN_00d50b20();
        }
      }
      bVar1 = bVar14;
      cVar5 = FUN_01db9b00();
      if ((cVar5 != '\0') && (cVar5 = FUN_01db9d40(), cVar5 != '\0')) {
        FUN_01dcdf40();
        local_38 = local_68;
        if (local_68 == plVar10) {
          local_38 = plVar10;
          bVar14 = bVar2;
          if ((!bVar2) && (local_68 != (longlong *)0x0)) {
            if (local_60 != '\0') goto LAB_01dcd8a5;
            FUN_00d50b00();
            bVar14 = true;
          }
        }
        else if (local_60 == '\0') {
          if (local_68 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          bVar14 = true;
          if ((bVar2) && (plVar10 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((bVar2) && (plVar10 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_01dcd8a5:
          local_60 = '\0';
          bVar14 = true;
        }
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        bVar2 = bVar14;
        if (local_38 == (longlong *)0x0) {
          plVar10 = (longlong *)0x0;
        }
        else {
          iVar6 = FUN_01db9f80();
          iVar9 = 2;
          if (iVar6 != 0) {
            iVar9 = iVar6;
          }
          iVar6 = 3;
          if (iVar9 != 1) {
            iVar6 = iVar9;
          }
          FUN_00d7af80(iVar9,iVar6);
          if (local_68 == local_40) {
            if ((!bVar3) && (local_68 != (longlong *)0x0)) {
              plVar10 = local_40;
              if (local_60 == '\0') {
                FUN_00d50b00();
LAB_01dcda21:
                bVar14 = local_60 != '\0';
                goto joined_r0x01dcda25;
              }
              goto LAB_01dcd9b1;
            }
            if (local_60 != '\0') {
LAB_01dcda2b:
              if (local_68 != (longlong *)0x0) {
                FUN_00d50b20();
              }
            }
          }
          else if (local_60 == '\0') {
            if (local_68 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            if (bVar3) {
              if (local_40 != (longlong *)0x0) {
                FUN_00d50b20();
                local_40 = local_68;
                goto LAB_01dcda21;
              }
              bVar14 = false;
              local_40 = local_68;
joined_r0x01dcda25:
              bVar3 = true;
              if (bVar14) goto LAB_01dcda2b;
            }
            else {
              local_40 = local_68;
              bVar3 = true;
            }
          }
          else {
            plVar10 = local_68;
            if ((bVar3) && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_01dcd9b1:
            local_60 = '\0';
            local_40 = plVar10;
            bVar3 = true;
          }
          cVar5 = FUN_01db9f90();
          if (cVar5 != '\0') {
            FUN_01db9fb0();
            if (local_68 == local_48) {
              if ((!bVar4) && (local_68 != (longlong *)0x0)) {
                plVar10 = local_48;
                if (local_60 != '\0') goto LAB_01dcdaba;
                bVar4 = true;
                FUN_00d50b00();
              }
            }
            else {
              plVar10 = local_68;
              if (local_60 == '\0') {
                if (local_68 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
                if ((bVar4) && (local_48 != (longlong *)0x0)) {
                  FUN_00d50b20();
                  local_48 = local_68;
                  bVar4 = true;
                  goto LAB_01dcdb37;
                }
              }
              else {
                if ((bVar4) && (local_48 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
LAB_01dcdaba:
                local_60 = '\0';
              }
              local_48 = plVar10;
              bVar4 = true;
            }
LAB_01dcdb37:
            if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (local_48 == (longlong *)0x0) {
              local_48 = (longlong *)0x0;
            }
            else {
              (**(code **)(*local_40 + 0x388))();
            }
          }
          local_68 = local_40;
          local_60 = '\0';
          FUN_00d21140();
          plVar10 = local_38;
        }
      }
      lVar11 = lVar11 + 1;
      lVar8 = *(longlong *)(unaff_RSI + 0x160);
      lVar12 = lVar13;
    } while (lVar11 < *(int *)(lVar8 + 0xc));
  }
  *unaff_RDI = puVar7;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((bVar4) && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar1) && (lVar13 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (plVar10 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @01e01e50 — 1293 bytes
// str: ""GNScrollView""
// str: ""GNModuleView""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01e01ee9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e01e50(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  bool bVar6;
  longlong *local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  plVar1 = *(longlong **)(unaff_RSI + 0x140);
  if (plVar1 == (longlong *)0x0) {
    local_48 = (longlong *)0x0;
LAB_01e01eb4:
    FUN_01e4b8e0();
LAB_01e02054:
    if (local_48 != (longlong *)0x0) goto LAB_01e02059;
  }
  else {
    FUN_00d50b00();
    local_48 = (longlong *)0x0;
    (**(code **)(*plVar1 + 0x380))();
    if (local_40 == (longlong *)0x0) {
      if (local_38 != '\0') {
        local_48 = (longlong *)0x0;
      }
LAB_01e01eee:
      if (local_48 != (longlong *)0x0) goto LAB_01e01ef7;
LAB_01e02157:
      (**(code **)(*plVar1 + 0x390))();
      if (local_40 == local_48) {
LAB_01e021ba:
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar3 = (longlong *)0x0;
        plVar2 = local_48;
      }
      else {
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          bVar6 = local_48 != (longlong *)0x0;
          local_48 = local_40;
          if (bVar6) {
            FUN_00d50b20();
          }
          goto LAB_01e021ba;
        }
        plVar3 = local_40;
        plVar2 = local_40;
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b20();
          plVar3 = local_40;
        }
      }
      local_48 = plVar3;
      if (plVar2 != (longlong *)0x0) {
        *unaff_RDI = local_40;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        goto LAB_01e021df;
      }
      goto LAB_01e01eb4;
    }
    if (local_38 == '\0') {
      FUN_00d50b00();
      local_48 = local_40;
      goto LAB_01e01eee;
    }
    local_48 = local_40;
LAB_01e01ef7:
    FUN_01e42030();
    FUN_01d8b200();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_48 == local_40) {
      FUN_01e4b8e0();
      goto LAB_01e02054;
    }
    if ((DAT_026e5340 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      _DAT_027e7718 = FUN_0006d940();
      _DAT_027e7700 = "GNModuleView";
      _DAT_027e7708 = 0x178;
      _DAT_027e7710 = FUN_00191170;
      _DAT_027e7720 = 0;
      uRam00000000027e7728 = 0;
      _DAT_027e7730 = 0;
      uRam00000000027e7738 = 0;
      _DAT_027e7740 = 0;
      uRam00000000027e7748 = 0;
      _DAT_027e7750 = 0;
      uRam00000000027e7758 = 0;
      _DAT_027e7760 = 0;
      uRam00000000027e7768 = 0;
      _DAT_027e7770 = 0;
      uRam00000000027e7778 = 0;
      _DAT_027e7780 = 0;
      uRam00000000027e7788 = 0;
      _DAT_027e7790 = 0;
      uRam00000000027e7798 = 0;
      _DAT_027e77a0 = 0;
      uRam00000000027e77a8 = 0;
      _DAT_027e77b0 = 0;
      uRam00000000027e77b8 = 0;
      _DAT_027e77c0 = 0;
      ___cxa_guard_release();
    }
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_01e01f7f;
      if (local_48 != (longlong *)0x0) goto LAB_01e01f90;
LAB_01e02081:
      if ((DAT_026f0e00 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
        _DAT_026f8e78 = FUN_0006d940();
        _DAT_026f8e60 = "GNScrollView";
        _DAT_026f8e68 = 0x1c0;
        _DAT_026f8e70 = FUN_00074e80;
        _DAT_026f8e80 = 0;
        uRam00000000026f8e88 = 0;
        _DAT_026f8e90 = 0;
        uRam00000000026f8e98 = 0;
        _DAT_026f8ea0 = 0;
        uRam00000000026f8ea8 = 0;
        _DAT_026f8eb0 = 0;
        uRam00000000026f8eb8 = 0;
        _DAT_026f8ec0 = 0;
        uRam00000000026f8ec8 = 0;
        _DAT_026f8ed0 = 0;
        uRam00000000026f8ed8 = 0;
        _DAT_026f8ee0 = 0;
        uRam00000000026f8ee8 = 0;
        _DAT_026f8ef0 = 0;
        uRam00000000026f8ef8 = 0;
        _DAT_026f8f00 = 0;
        uRam00000000026f8f08 = 0;
        _DAT_026f8f10 = 0;
        uRam00000000026f8f18 = 0;
        _DAT_026f8f20 = 0;
        ___cxa_guard_release();
      }
      plVar2 = DAT_02802688;
      if (local_48 != (longlong *)0x0) {
        (**(code **)(*local_48 + 0x360))();
        cVar4 = FUN_00e85ea0();
        plVar2 = DAT_02802688;
        if (cVar4 != '\0') {
          plVar2 = local_48;
        }
      }
      if (plVar2 != (longlong *)0x0) {
        FUN_01d97850();
        FUN_01e42030();
        FUN_01d8b200();
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_40 == local_68) {
          FUN_01e4b8e0();
          goto LAB_01e02054;
        }
      }
      goto LAB_01e02157;
    }
LAB_01e01f7f:
    if (DAT_02802688 == (longlong *)0x0) goto LAB_01e02081;
LAB_01e01f90:
    (**(code **)(*local_48 + 0x980))();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 == (longlong *)0x0) {
      FUN_01e4b8e0();
    }
    else {
      (**(code **)(*local_48 + 0x980))();
      FUN_01e42030();
      FUN_01d8b200();
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_40 != local_68) goto LAB_01e02081;
      FUN_01e4b8e0();
    }
LAB_01e02059:
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    return;
  }
LAB_01e021df:
  FUN_00d50b20();
  return;
}




// ============================================================
// @01d934f0 — 1221 bytes
// ============================================================

void FUN_01d934f0(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong unaff_RDI;
  undefined8 uVar6;
  longlong *local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong *local_c0;
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
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar5 + 0x18))();
  FUN_00c939b0();
  iVar4 = FUN_00003070();
  FUN_00c948d0((double)(iVar4 * 0x15180));
  lVar3 = local_50;
  if (local_48 == '\0') {
    if (((local_50 != 0) && (FUN_00d50b00(), local_48 != '\0')) && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_48 = '\0';
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  uVar6 = FUN_00003040();
  uVar6 = FUN_00d91a70(uVar6,1);
  local_a0 = local_40;
  local_98 = 0;
  lVar2 = DAT_026e13a0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      uVar6 = FUN_00d50b00();
      lVar2 = DAT_026e13a0;
    }
  }
  else {
    local_38 = '\0';
  }
  local_98 = '\x01';
  DAT_026e13a0 = lVar2;
  if (lVar2 != 0) {
    local_98 = '\x01';
    uVar6 = FUN_00d50b00();
  }
  local_48 = '\0';
  local_50 = lVar2;
  FUN_00ca0840(uVar6,&local_50);
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d30620();
  uVar6 = FUN_00d30ec0();
  local_80 = local_b0;
  local_78 = 0;
  if (local_a8 == '\0') {
    if (local_b0 != 0) {
      uVar6 = FUN_00d50b00();
    }
  }
  else {
    local_a8 = '\0';
  }
  local_78 = '\x01';
  local_d8 = '\0';
  local_e0 = 0;
  uVar6 = FUN_00ddfeb0(uVar6,&local_e0);
  local_d0 = lVar3;
  local_c8 = '\0';
  uVar6 = (**(code **)(*local_100 + 0x388))(uVar6,&local_d0);
  local_90 = local_40;
  local_88 = 0;
  lVar2 = DAT_02784aa8;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      uVar6 = FUN_00d50b00();
      lVar2 = DAT_02784aa8;
    }
  }
  else {
    local_38 = '\0';
  }
  local_88 = '\x01';
  DAT_02784aa8 = lVar2;
  if (lVar2 != 0) {
    local_88 = '\x01';
    uVar6 = FUN_00d50b00();
  }
  local_48 = '\0';
  local_50 = lVar2;
  FUN_00ca0840(uVar6,&local_50);
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = *(longlong **)(unaff_RDI + 0x70);
  uVar6 = (**(code **)(*plVar1 + 0x960))();
  local_60 = local_40;
  local_58 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      uVar6 = FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_58 = '\x01';
  local_b8 = '\0';
  local_c0 = plVar5;
  FUN_00e0e2a0(uVar6,&local_c0);
  local_70 = local_50;
  local_68 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_68 = '\x01';
  (**(code **)(*plVar1 + 0x958))();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_01e534b0();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @002cdbd0 — 1108 bytes
// str: ""\r\n%@""
// str: ""%@""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x002ce005) */
/* WARNING: Removing unreachable block (ram,0x002ce011) */
/* WARNING: Removing unreachable block (ram,0x002cdf30) */
/* WARNING: Removing unreachable block (ram,0x002cdf04) */

ulonglong FUN_002cdbd0(undefined8 param_1,char param_2)

{
  int iVar1;
  ulonglong uVar2;
  pthread_key_t pVar3;
  undefined8 *puVar4;
  void *pvVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong unaff_RDI;
  undefined8 unaff_R12;
  ulonglong uVar8;
  longlong local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  ulonglong local_58;
  char local_50;
  pthread_key_t local_40;
  
  uVar2 = local_58;
  if (*(longlong **)(unaff_RDI + 0xf8) == (longlong *)0x0) {
    uVar8 = 0;
    goto LAB_002ce03a;
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0xf8) + 0x3f8))();
  iVar1 = *(int *)(local_58 + 0xc);
  uVar8 = CONCAT71((int7)((ulonglong)unaff_R12 >> 8),0 < iVar1);
  if (local_50 != '\0') {
    FUN_00d50b20();
  }
  if ((param_2 == '\0') || (iVar1 < 1)) goto LAB_002ce03a;
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_025795a8;
  (*DAT_025795c0)();
  FUN_002cd3f0();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_002cdc93;
    }
  }
  else if (local_58 != 0) {
LAB_002cdc93:
    local_50 = '\0';
    local_58 = 0;
    local_40 = 0xffffffff;
    while( true ) {
      pVar3 = local_40 + 1;
      if (*(int *)(uVar2 + 0xc) <= (int)pVar3) break;
      uVar8 = *(ulonglong *)(*(longlong *)(uVar2 + 0x10) + 8 + (longlong)(int)local_40 * 8);
      local_58 = uVar8;
      if (pVar3 == 0) {
        if (*(longlong *)(uVar8 + 0x18) == 0) {
          plVar7 = *(longlong **)(uVar8 + 0x10);
          pvVar5 = _pthread_getspecific(local_40);
          if (pvVar5 != (void *)0x0) {
            plVar7 = *(longlong **)(uVar8 + 0x10);
            lVar6 = FUN_00e8b990();
            if (lVar6 != 0) {
              plVar7 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
            }
          }
          (**(code **)(*plVar7 + 0x478))();
        }
        else {
          FUN_00b88600();
        }
        (**(code **)(*local_68 + 0x470))();
        if (local_78 != 0) {
          FUN_00d50b00();
        }
        FUN_00d94d80();
        if (local_78 != 0) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        local_40 = pVar3;
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (*(longlong *)(uVar8 + 0x18) == 0) {
          plVar7 = *(longlong **)(uVar8 + 0x10);
          pvVar5 = _pthread_getspecific(local_40);
          if (pvVar5 != (void *)0x0) {
            plVar7 = *(longlong **)(uVar8 + 0x10);
            lVar6 = FUN_00e8b990();
            if (lVar6 != 0) {
              plVar7 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
            }
          }
          (**(code **)(*plVar7 + 0x478))();
        }
        else {
          FUN_00b88600();
        }
        (**(code **)(*local_68 + 0x470))();
        if (local_78 != 0) {
          FUN_00d50b00();
        }
        FUN_00d94d80();
        if (local_78 != 0) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        local_40 = pVar3;
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_002d7300();
    FUN_00d50b20();
  }
  FUN_00d8c7d0();
  FUN_01ca6970();
  FUN_01ca5d90();
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_01ca6970();
  lVar6 = DAT_026fceb8;
  if (DAT_026fceb8 != 0) {
    FUN_00d50b00();
  }
  FUN_01ca93d0();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
LAB_002ce03a:
  return uVar8 & 0xffffffff;
}




// ============================================================
// @01db5400 — 1084 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01db56c7) */
/* WARNING: Removing unreachable block (ram,0x01db56d4) */
/* WARNING: Removing unreachable block (ram,0x01db54b1) */
/* WARNING: Removing unreachable block (ram,0x01db54ba) */
/* WARNING: Removing unreachable block (ram,0x01db54d5) */
/* WARNING: Removing unreachable block (ram,0x01db54e1) */
/* WARNING: Removing unreachable block (ram,0x01db57a1) */
/* WARNING: Removing unreachable block (ram,0x01db57aa) */
/* WARNING: Removing unreachable block (ram,0x01db57d6) */
/* WARNING: Removing unreachable block (ram,0x01db57df) */

undefined8 * FUN_01db5400(void)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong local_88;
  char local_80;
  
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar6 + 0x18))();
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02572358;
  (*DAT_02572370)();
  lVar8 = DAT_027f22c8;
  if (DAT_027f22c8 != 0) {
    FUN_00d50b00();
  }
  FUN_00ca0840();
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  pcVar5 = DAT_02575d98;
  lVar8 = unaff_RSI[0x28];
  if (*(int *)(lVar8 + 0xc) < 1) {
    bVar2 = false;
    lVar11 = 0;
    bVar3 = false;
    puVar12 = (undefined8 *)0x0;
  }
  else {
    lVar10 = 0;
    puVar12 = (undefined8 *)0x0;
    bVar3 = false;
    lVar11 = 0;
    bVar2 = false;
    do {
      lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + lVar10 * 8);
      if (lVar11 == lVar8) {
        if ((!bVar2) && (lVar11 != 0)) {
          bVar2 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (lVar11 != 0)) {
          FUN_00d50b20();
          bVar2 = true;
          lVar11 = lVar8;
        }
        else {
          bVar2 = true;
          lVar11 = lVar8;
        }
      }
      puVar9 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar9 = &DAT_02575d80;
      (*pcVar5)();
      if (puVar9 == puVar12) {
        if (bVar3) {
          FUN_00d50b20();
LAB_01db562e:
          cVar1 = *(char *)(lVar11 + 0xd);
        }
        else {
          cVar1 = *(char *)(lVar11 + 0xd);
          bVar3 = true;
        }
      }
      else {
        bVar4 = true;
        if (bVar3) {
          if (puVar12 != (undefined8 *)0x0) {
            FUN_00d50b20();
            puVar12 = puVar9;
            bVar3 = bVar4;
            goto LAB_01db562e;
          }
          cVar1 = *(char *)(lVar11 + 0xd);
          puVar12 = puVar9;
          bVar3 = bVar4;
        }
        else {
          cVar1 = *(char *)(lVar11 + 0xd);
          puVar12 = puVar9;
          bVar3 = bVar4;
        }
      }
      if (cVar1 == '\0') {
        (**(code **)(**(longlong **)(lVar11 + 0x20) + 0x4d8))();
      }
      FUN_00d46080();
      FUN_00d21140();
      lVar10 = lVar10 + 1;
      lVar8 = unaff_RSI[0x28];
    } while (lVar10 < *(int *)(lVar8 + 0xc));
  }
  lVar8 = DAT_027f22d0;
  if (DAT_027f22d0 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*unaff_RSI + 0x88))();
  lVar10 = DAT_027f22d0;
  if ((local_80 == '\0') && (local_88 != 0)) {
    FUN_00d50b00();
    lVar10 = DAT_027f22d0;
  }
  DAT_027f22d0 = lVar10;
  if (lVar10 != 0) {
    FUN_00d50b00();
  }
  FUN_00ca0840();
  if (lVar10 != 0) {
    FUN_00d50b20();
  }
  if (local_88 != 0) {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  *unaff_RDI = plVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar2) && (lVar11 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (puVar12 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @01dcf7e0 — 994 bytes
// ============================================================

longlong * FUN_01dcf7e0(int param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  bool bVar6;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_70;
  char local_68;
  longlong local_50;
  char local_48;
  
  lVar5 = *(longlong *)
           (*(longlong *)
             (*(longlong *)
               (*(longlong *)(*(longlong *)(unaff_RSI + 0x178) + 0x10) + (longlong)param_1 * 8) +
             0x10) + (longlong)param_2 * 8);
  if (lVar5 == 0) {
    bVar3 = false;
    bVar6 = false;
    if (DAT_028b8a78 == 0) goto LAB_01dcf887;
  }
  else {
    FUN_00d50b00();
    bVar3 = true;
    bVar6 = true;
    if (DAT_028b8a78 == lVar5) {
LAB_01dcf887:
      bVar3 = bVar6;
      plVar1 = *(longlong **)(unaff_RSI + 0x1f8);
      if (plVar1 == (longlong *)0x0) {
        pcVar2 = *(code **)(unaff_RSI + 0x188);
        if (pcVar2 != (code *)0x0) {
          FUN_00d50b00();
          local_68 = 0;
          local_70 = *(longlong *)(unaff_RSI + 400);
          if (local_70 != 0) {
            FUN_00d50b00();
          }
          local_68 = '\x01';
          (*pcVar2)(param_1,param_2,&local_70);
          if (local_50 == lVar5) {
LAB_01dcfab7:
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_48 == '\0') {
              if (local_50 != 0) {
                FUN_00d50b00();
              }
              bVar3 = true;
              bVar6 = lVar5 != 0;
              lVar5 = local_50;
              if (bVar6) {
                FUN_00d50b20();
              }
              goto LAB_01dcfab7;
            }
            if (lVar5 != 0) {
              FUN_00d50b20();
            }
            bVar3 = true;
            lVar5 = local_50;
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          if (unaff_RSI != 0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        FUN_00d50b00();
        local_b0 = *(longlong *)
                    (*(longlong *)(*(longlong *)(unaff_RSI + 0x160) + 0x10) + (longlong)param_1 * 8)
        ;
        if (local_b0 != 0) {
          FUN_00d50b00();
        }
        local_a8 = '\x01';
        (**(code **)(*plVar1 + 0x20))(param_2,&stack0xffffffffffffff70,&local_b0);
        if (local_50 == lVar5) {
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
        else if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
          bVar3 = true;
          bVar6 = lVar5 != 0;
          lVar5 = local_50;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        else {
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
          bVar3 = true;
          lVar5 = local_50;
        }
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        if (unaff_RSI != 0) {
          FUN_00d50b20();
        }
      }
      lVar4 = DAT_028b8a78;
      if (lVar5 == 0) {
        if (DAT_028b8a78 != 0) {
          FUN_00d50b00();
          lVar5 = lVar4;
LAB_01dcfb9a:
          *(undefined1 *)(unaff_RDI + 1) = 0;
          goto LAB_01dcfba3;
        }
        lVar5 = 0;
      }
      else if (DAT_028b8a78 == lVar5) {
        if (!bVar3) {
          FUN_00d50b00();
          goto LAB_01dcfb9a;
        }
        bVar3 = true;
      }
      else {
        local_98 = '\0';
        local_a0 = lVar5;
        FUN_00d233f0();
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((!bVar3) && (lVar5 != 0)) {
    FUN_00d50b00();
  }
LAB_01dcfba3:
  *unaff_RDI = lVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}




// ============================================================
// @01db3c20 — 968 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01db3dee) */
/* WARNING: Removing unreachable block (ram,0x01db3e17) */
/* WARNING: Removing unreachable block (ram,0x01db3e1c) */
/* WARNING: Removing unreachable block (ram,0x01db3e24) */
/* WARNING: Removing unreachable block (ram,0x01db3e29) */
/* WARNING: Removing unreachable block (ram,0x01db3df2) */
/* WARNING: Removing unreachable block (ram,0x01db3e36) */
/* WARNING: Removing unreachable block (ram,0x01db3df7) */
/* WARNING: Removing unreachable block (ram,0x01db3d5e) */
/* WARNING: Removing unreachable block (ram,0x01db3d82) */
/* WARNING: Removing unreachable block (ram,0x01db3d87) */
/* WARNING: Removing unreachable block (ram,0x01db3d8f) */
/* WARNING: Removing unreachable block (ram,0x01db3d62) */
/* WARNING: Removing unreachable block (ram,0x01db3e94) */
/* WARNING: Removing unreachable block (ram,0x01db3ec3) */
/* WARNING: Removing unreachable block (ram,0x01db3ec8) */
/* WARNING: Removing unreachable block (ram,0x01db3ed0) */
/* WARNING: Removing unreachable block (ram,0x01db3e98) */

void FUN_01db3c20(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong unaff_RDI;
  longlong lVar3;
  float fVar4;
  longlong local_80;
  char local_78;
  float local_6c;
  float local_58;
  float local_44;
  longlong local_40;
  char local_38;
  
  fVar4 = (float)((ulonglong)param_2 >> 0x20);
  local_58 = (float)param_2;
  FUN_01db3950();
  FUN_01db2340();
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_01db3fd4;
    FUN_00d50b00();
    iVar1 = *(int *)(local_40 + 0xc);
  }
  else {
    if (local_40 == 0) goto LAB_01db3fd4;
    iVar1 = *(int *)(local_40 + 0xc);
  }
  if (iVar1 == 0) goto LAB_01db3fd4;
  FUN_01e3f820();
  if (*(char *)(unaff_RDI + 0x138) == '\0') {
    local_58 = fVar4;
  }
  local_6c = (float)FUN_01db1e30();
  FUN_01db2340();
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_01db3d24;
    FUN_00d50b00();
LAB_01db3cf1:
    local_44 = 0.0;
    if (*(int *)(local_40 + 0xc) != 0) {
      local_44 = (float)(*(int *)(local_40 + 0xc) + -1) * DAT_023b36b0;
    }
    FUN_00d50b20();
  }
  else {
    if (local_40 != 0) goto LAB_01db3cf1;
LAB_01db3d24:
    local_44 = 0.0;
  }
  local_58 = (local_58 - local_6c) - local_44;
  if ((local_58 != 0.0) || (NAN(local_58))) {
    FUN_01db1f60();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      local_58 = (float)FUN_01db2dc0(local_58);
    }
    if ((local_58 != 0.0) || (NAN(local_58))) {
      FUN_01db24f0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 == 0) {
        lVar3 = 0;
      }
      else {
        do {
          local_58 = (float)FUN_01db2dc0(local_58);
          if ((((local_58 != DAT_0239424c) || (NAN(local_58) || NAN(DAT_0239424c))) &&
              (FUN_01db24f0(), local_38 != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        } while (((local_58 != DAT_0239424c) || (NAN(local_58) || NAN(DAT_0239424c))) &&
                (local_40 != 0));
      }
    }
  }
  FUN_01db2b50();
  FUN_01db28c0();
  FUN_00d403d0();
  lVar2 = DAT_027f22b8;
  if (DAT_027f22b8 != 0) {
    FUN_00d50b00();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b00();
  }
  local_80 = 0;
  local_78 = '\0';
  FUN_00d40470(&local_80,&stack0xffffffffffffff98,1,3);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
LAB_01db3fd4:
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01dd0960 — 894 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01dd0a97) */
/* WARNING: Removing unreachable block (ram,0x01dd0aa3) */
/* WARNING: Removing unreachable block (ram,0x01dd0a7b) */
/* WARNING: Removing unreachable block (ram,0x01dd0a87) */
/* WARNING: Removing unreachable block (ram,0x01dd0b01) */
/* WARNING: Removing unreachable block (ram,0x01dd0b20) */
/* WARNING: Removing unreachable block (ram,0x01dd0b25) */
/* WARNING: Removing unreachable block (ram,0x01dd0b30) */
/* WARNING: Removing unreachable block (ram,0x01dd0b37) */
/* WARNING: Removing unreachable block (ram,0x01dd0b07) */
/* WARNING: Removing unreachable block (ram,0x01dd0b0e) */
/* WARNING: Removing unreachable block (ram,0x01dd0b85) */
/* WARNING: Removing unreachable block (ram,0x01dd0b91) */
/* WARNING: Removing unreachable block (ram,0x01dd0a19) */
/* WARNING: Removing unreachable block (ram,0x01dd0a22) */

void FUN_01dd0960(undefined4 param_1,undefined4 param_2,int param_3)

{
  longlong *plVar1;
  int in_ECX;
  longlong *in_RDX;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_48;
  char local_40;
  
  if (((unaff_RDI[0x40] != 0) && ((int)unaff_RDI[0x41] == param_3)) &&
     (*(int *)((longlong)unaff_RDI + 0x20c) == in_ECX)) {
    return;
  }
  if (((unaff_RDI[0x28] != 0) && ((int)unaff_RDI[0x27] == param_3)) &&
     (*(int *)((longlong)unaff_RDI + 0x13c) == in_ECX)) {
    return;
  }
  (**(code **)(*unaff_RDI + 0x938))(in_ECX,param_3);
  if (local_40 == '\0') {
    if (local_48 == 0) goto LAB_01dd0aae;
    FUN_00d50b00();
  }
  else if (local_48 == 0) goto LAB_01dd0aae;
  (**(code **)(*unaff_RDI + 0x9a0))(param_1,param_2);
LAB_01dd0aae:
  (**(code **)(*(longlong *)*in_RDX + 0x4d0))(param_1,param_2);
  FUN_01d48370();
  (**(code **)(*unaff_RDI + 0x940))(in_ECX,param_3);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_01d488d0();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x390))(param_1,param_2);
  plVar1 = (longlong *)unaff_RDI[0x3e];
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
    local_90 = *(longlong *)(*(longlong *)(unaff_RDI[0x2c] + 0x10) + (longlong)in_ECX * 8);
    if (local_90 != 0) {
      FUN_00d50b00();
    }
    local_88 = '\x01';
    local_80 = *in_RDX;
    local_78 = '\0';
    (**(code **)(*plVar1 + 0x30))(&local_90,param_3,&local_80);
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  local_70 = *unaff_RSI;
  local_68 = '\0';
  (**(code **)(*(longlong *)*in_RDX + 0x610))(0,param_2);
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d48390();
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @002cc690 — 847 bytes
// str: ""GNScrollView""
// str: ""GNClipView""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002cc690(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  int iVar6;
  int iVar7;
  longlong **pplVar8;
  longlong unaff_RDI;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *local_40;
  char local_38;
  
  fVar14 = (float)((ulonglong)param_2 >> 0x20);
  uVar9 = (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x528))();
  pplVar8 = &local_40;
  FUN_01e40eb0();
  plVar1 = local_40;
  if (DAT_026fde20 == '\0') {
    iVar7 = ___cxa_guard_acquire();
    if (iVar7 != 0) {
      _DAT_026e9778 = FUN_0006d940();
      _DAT_026e9760 = "GNClipView";
      _DAT_026e9768 = 0x178;
      _DAT_026e9770 = FUN_001b6420;
      _DAT_026e9780 = 0;
      uRam00000000026e9788 = 0;
      _DAT_026e9790 = 0;
      uRam00000000026e9798 = 0;
      _DAT_026e97a0 = 0;
      uRam00000000026e97a8 = 0;
      _DAT_026e97b0 = 0;
      uRam00000000026e97b8 = 0;
      _DAT_026e97c0 = 0;
      uRam00000000026e97c8 = 0;
      _DAT_026e97d0 = 0;
      uRam00000000026e97d8 = 0;
      _DAT_026e97e0 = 0;
      uRam00000000026e97e8 = 0;
      _DAT_026e97f0 = 0;
      uRam00000000026e97f8 = 0;
      _DAT_026e9800 = 0;
      uRam00000000026e9808 = 0;
      _DAT_026e9810 = 0;
      uRam00000000026e9818 = 0;
      _DAT_026e9820 = 0;
      ___cxa_guard_release();
    }
  }
  if (plVar1 == (longlong *)0x0) {
LAB_002cc701:
    pplVar8 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_002cc701;
  }
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar8 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pplVar8 = &local_40;
  FUN_01e40eb0();
  plVar2 = local_40;
  if (DAT_026f0e00 == '\0') {
    iVar7 = ___cxa_guard_acquire();
    if (iVar7 != 0) {
      _DAT_026f8e78 = FUN_0006d940();
      _DAT_026f8e60 = "GNScrollView";
      _DAT_026f8e68 = 0x1c0;
      _DAT_026f8e70 = FUN_00074e80;
      _DAT_026f8e80 = 0;
      uRam00000000026f8e88 = 0;
      _DAT_026f8e90 = 0;
      uRam00000000026f8e98 = 0;
      _DAT_026f8ea0 = 0;
      uRam00000000026f8ea8 = 0;
      _DAT_026f8eb0 = 0;
      uRam00000000026f8eb8 = 0;
      _DAT_026f8ec0 = 0;
      uRam00000000026f8ec8 = 0;
      _DAT_026f8ed0 = 0;
      uRam00000000026f8ed8 = 0;
      _DAT_026f8ee0 = 0;
      uRam00000000026f8ee8 = 0;
      _DAT_026f8ef0 = 0;
      uRam00000000026f8ef8 = 0;
      _DAT_026f8f00 = 0;
      uRam00000000026f8f08 = 0;
      _DAT_026f8f10 = 0;
      uRam00000000026f8f18 = 0;
      _DAT_026f8f20 = 0;
      ___cxa_guard_release();
    }
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 != '\0') goto LAB_002cc785;
  }
  pplVar8 = (longlong **)&DAT_02802688;
LAB_002cc785:
  plVar2 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar8 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x4d8))();
  fVar11 = fVar14;
  (**(code **)(*plVar2 + 0x4d8))();
  fVar12 = fVar11;
  (**(code **)(*plVar2 + 0x4d8))();
  fVar13 = fVar12;
  (**(code **)(*plVar1 + 0x4d8))();
  iVar6 = FUN_01dcea80();
  uVar10 = FUN_01dce510();
  iVar7 = 1;
  if (iVar6 != 0) {
    iVar7 = iVar6;
  }
  FUN_00d50b20();
  FUN_00d50b20();
  local_58 = (float)uVar10;
  uStack_54 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uStack_50 = (undefined4)extraout_XMM0_Qb_00;
  uStack_4c = (undefined4)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
  fVar14 = local_58 * (float)iVar7 + (fVar12 - fVar13) + (fVar14 - fVar11);
  auVar4._8_8_ = extraout_XMM0_Qb;
  auVar4._0_8_ = uVar9;
  if ((float)((ulonglong)uVar9 >> 0x20) < fVar14) {
    auVar3._4_4_ = uStack_54;
    auVar3._0_4_ = fVar14;
    auVar3._8_4_ = uStack_50;
    auVar3._12_4_ = uStack_4c;
    insertps(auVar4,auVar3,0x10);
  }
  return;
}




// ============================================================
// @01cfd290 — 805 bytes
// ============================================================

undefined8 * FUN_01cfd290(float param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar9;
  longlong local_a8;
  undefined1 local_a0;
  longlong local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  undefined8 *local_70;
  char local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  
  plVar6 = (longlong *)*unaff_RSI;
  FUN_001b9d20();
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_01cfd2e8;
  }
  unaff_RSI = &DAT_02802688;
LAB_01cfd2e8:
  lVar1 = *unaff_RSI;
  lVar3 = unaff_RSI[1];
  if (((char)lVar3 == '\0') || (lVar1 == 0)) {
    if (lVar1 == 0) {
      puVar7 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &DAT_026792c0;
      puVar7[5] = 0;
      *(undefined8 *)((longlong)puVar7 + 0xc) = 0;
      *(undefined8 *)((longlong)puVar7 + 0x14) = 0;
      *(undefined8 *)((longlong)puVar7 + 0x19) = 0;
      FUN_00d500e0();
      local_a8 = *param_2;
      local_a0 = 0;
      FUN_01cfb0d0(param_1,&local_a8);
      *unaff_RDI = puVar7;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      return unaff_RDI;
    }
  }
  else {
    FUN_00d50b00();
  }
  local_98 = lVar1;
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_001b9f00();
  (**(code **)(*plVar6 + 0x18))();
  local_88 = '\0';
  local_90 = lVar1;
  FUN_01f7bcc0();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  for (iVar8 = 0; iVar5 = FUN_01f7c6f0(), iVar8 < iVar5; iVar8 = iVar8 + 1) {
    FUN_01f7c770(extraout_XMM0_Da,iVar8);
    lVar1 = local_80;
    if ((((local_78 == '\0') && (local_80 != 0)) && (FUN_00d50b00(), local_78 != '\0')) &&
       (local_80 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = *param_2;
    local_44 = *(float *)(lVar1 + 0x10);
    local_48 = *(float *)(lVar1 + 0x14);
    local_60 = *(float *)(lVar2 + 0x10);
    local_5c = *(float *)(lVar2 + 0x14);
    local_4c = *(float *)(lVar1 + 0x18);
    local_58 = *(float *)(lVar2 + 0x18);
    local_50 = *(float *)(lVar1 + 0x1c);
    local_54 = *(float *)(lVar2 + 0x1c);
    puVar7 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar7 = &DAT_026792c0;
    puVar7[5] = 0;
    *(undefined8 *)((longlong)puVar7 + 0xc) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x14) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x19) = 0;
    FUN_00d500e0();
    uVar9 = FUN_01cfce50((local_60 - local_44) * param_1 + local_44,
                         (local_5c - local_48) * param_1 + local_48,
                         (local_58 - local_4c) * param_1 + local_4c,
                         (local_54 - local_50) * param_1 + local_50);
    local_68 = '\x01';
    local_70 = puVar7;
    FUN_01f7c700(uVar9,iVar8);
    if ((local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  *unaff_RDI = plVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((char)lVar3 != '\0') {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @002cd6f0 — 792 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x002cd8c7) */
/* WARNING: Removing unreachable block (ram,0x002cd8d0) */
/* WARNING: Removing unreachable block (ram,0x002cd986) */
/* WARNING: Removing unreachable block (ram,0x002cd98f) */
/* WARNING: Removing unreachable block (ram,0x002cd9ea) */
/* WARNING: Removing unreachable block (ram,0x002cd9f3) */

ulonglong FUN_002cd6f0(undefined8 param_1,char param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *pvVar3;
  longlong lVar4;
  undefined *puVar5;
  longlong unaff_RDI;
  undefined8 unaff_R12;
  ulonglong uVar6;
  longlong *plVar7;
  longlong local_88;
  char local_80;
  longlong local_40;
  char local_38;
  
  if (*(longlong **)(unaff_RDI + 0xf8) == (longlong *)0x0) {
    uVar6 = 0;
    goto LAB_002cda08;
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0xf8) + 0x3f8))();
  iVar1 = *(int *)(local_88 + 0xc);
  uVar6 = CONCAT71((int7)((ulonglong)unaff_R12 >> 8),iVar1 != 0);
  if (local_80 != '\0') {
    FUN_00d50b20();
  }
  if ((param_2 == '\0') || (iVar1 == 0)) goto LAB_002cda08;
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar5 = &DAT_02572358;
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_002cd3f0();
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
      goto LAB_002cd7af;
    }
  }
  else if (local_88 != 0) {
LAB_002cd7af:
    if (0 < *(int *)(local_88 + 0xc)) {
      uVar6 = 0;
      do {
        lVar4 = *(longlong *)(*(longlong *)(local_88 + 0x10) + uVar6 * 8);
        if (*(longlong *)(lVar4 + 0x10) == 0) {
          if (*(longlong *)(lVar4 + 0x18) == 0) {
            pvVar3 = _pthread_getspecific((pthread_key_t)puVar5);
            plVar7 = (longlong *)0x0;
            if (pvVar3 != (void *)0x0) {
              plVar7 = *(longlong **)(lVar4 + 0x10);
              lVar4 = FUN_00e8b990();
              if (lVar4 != 0) {
                plVar7 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
              }
            }
            (**(code **)(*plVar7 + 0x478))();
          }
          else {
            FUN_00b88600();
          }
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_00d21140();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          FUN_00d50b00();
          FUN_00d50b20();
          lVar4 = *(longlong *)(lVar4 + 0x10);
          if (lVar4 != 0) {
            FUN_00d50b00();
          }
          pvVar3 = _pthread_getspecific((pthread_key_t)puVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0123abe0();
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_00d21140();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < *(int *)(local_88 + 0xc));
    }
    FUN_002d7300();
    FUN_00d50b20();
  }
  FUN_00ceb350();
  uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
LAB_002cda08:
  return uVar6 & 0xffffffff;
}




// ============================================================
// @01cfb480 — 760 bytes
// ============================================================

void FUN_01cfb480(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar6;
  bool bVar7;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01cff350();
  plVar6 = local_40;
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01cb4790();
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01cfb4f9;
    }
  }
  else if (local_40 != (longlong *)0x0) {
LAB_01cfb4f9:
    local_70 = *unaff_RSI;
    local_68 = '\0';
    (**(code **)(*plVar3 + 0x3b0))(param_1,&local_70);
    plVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      FUN_01cff270();
      if ((plVar6 != plVar3) &&
         (FUN_00d50b00(), bVar7 = plVar6 != (longlong *)0x0, plVar6 = plVar3, bVar7)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_01cff350();
  plVar3 = local_40;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027cd570;
  if (plVar3 == plVar6) {
    if (DAT_027cd570 != 0) {
      FUN_00d50b00();
    }
    local_50 = lVar1;
    local_48 = '\x01';
    cVar4 = FUN_00d90870();
    if (cVar4 == '\0') {
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      iVar5 = FUN_00d8c7a0();
      if (iVar5 == 7) {
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        iVar5 = FUN_00d8c7a0();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (iVar5 != 9) goto LAB_01cfb742;
      }
      local_60 = *unaff_RSI;
      local_58 = '\0';
      FUN_01cfd750();
      if (local_40 == plVar6) {
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar7 = plVar6 != (longlong *)0x0;
        plVar6 = local_40;
        if (bVar7) {
          FUN_00d50b20();
        }
      }
      else {
        bVar7 = plVar6 != (longlong *)0x0;
        plVar6 = local_40;
        if (bVar7) {
          FUN_00d50b20();
        }
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (plVar6 != (longlong *)0x0) {
        lVar1 = *unaff_RSI;
        lVar2 = plVar6[5];
        if (lVar2 != lVar1) {
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          plVar6[5] = lVar1;
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
        }
        goto LAB_01cfb5d7;
      }
      plVar6 = (longlong *)0x0;
    }
LAB_01cfb742:
    FUN_01cfe8d0();
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
LAB_01cfb5d7:
    *unaff_RDI = plVar6;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  return;
}




// ============================================================
// @002ce2a0 — 756 bytes
// ============================================================

ulonglong FUN_002ce2a0(undefined8 param_1,char param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  void *pvVar3;
  longlong *plVar4;
  int iVar5;
  longlong unaff_RDI;
  undefined8 unaff_R13;
  longlong *plVar6;
  longlong local_98;
  char local_90;
  undefined8 *local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  undefined8 local_40;
  int local_38;
  
  if (*(longlong **)(unaff_RDI + 0xf8) == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    goto LAB_002ce5a6;
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0xf8) + 0x3f8))();
  iVar5 = *(int *)(local_58 + 0xc);
  plVar6 = (longlong *)CONCAT71((int7)((ulonglong)unaff_R13 >> 8),0 < iVar5);
  if (local_50 != '\0') {
    FUN_00d50b20();
  }
  if ((param_2 == '\0') || (iVar5 < 1)) goto LAB_002ce5a6;
  puVar1 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar1 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_002cd3f0();
  lVar2 = local_58;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_002ce360;
    }
  }
  else if (local_58 != 0) {
LAB_002ce360:
    local_50 = '\0';
    local_58 = 0;
    local_48 = lVar2;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    plVar6 = &local_98;
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar5 = -local_40._4_4_;
        }
        else {
          iVar5 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar5);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar5 = 0;
        }
        local_40 = CONCAT44(iVar5,(int)local_40);
      }
      lVar2 = (longlong)(int)local_40;
      iVar5 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar5);
      if (*(int *)(local_48 + 0xc) <= iVar5) break;
      lVar2 = *(longlong *)(*(longlong *)(local_48 + 0x10) + 8 + lVar2 * 8);
      local_58 = lVar2;
      if (*(longlong *)(lVar2 + 0x18) == 0) {
        plVar4 = *(longlong **)(lVar2 + 0x10);
        pvVar3 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_48 + 0x10));
        if (pvVar3 != (void *)0x0) {
          plVar4 = *(longlong **)(lVar2 + 0x10);
          lVar2 = FUN_00e8b990();
          if (lVar2 != 0) {
            plVar4 = (longlong *)plVar4[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
          }
        }
        (**(code **)(*plVar4 + 0x478))();
      }
      else {
        FUN_00b88600();
      }
      lVar2 = local_68;
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      local_98 = lVar2;
      local_90 = '\0';
      FUN_00d21140();
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_002d7300();
    FUN_00d50b20();
  }
  FUN_01ca6970();
  FUN_01ca5d90();
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_01ca6970();
  local_78 = DAT_026fcec0;
  local_80 = '\0';
  local_88 = puVar1;
  if (DAT_026fcec0 != 0) {
    FUN_00d50b00();
  }
  local_70 = '\x01';
  FUN_01cac7f0();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = (longlong *)CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
LAB_002ce5a6:
  return (ulonglong)plVar6 & 0xffffffff;
}




// ============================================================
// @01dccc70 — 743 bytes
// str: ""GNScrollView""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_01dccc70(void)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong **pplVar5;
  undefined8 *unaff_RDI;
  longlong *plVar6;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  char local_31;
  
  FUN_01e40eb0();
  plVar6 = local_48;
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
      local_58 = plVar6;
      local_50 = '\x01';
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01dccc9f;
    }
    local_58 = (longlong *)0x0;
    local_50 = '\x01';
    plVar6 = (longlong *)0x0;
  }
  else {
    local_58 = local_48;
    local_50 = '\x01';
LAB_01dccc9f:
    if (plVar6 != (longlong *)0x0) {
      FUN_01e40eb0();
      plVar2 = local_48;
      plVar1 = plVar6;
      if (plVar6 != local_48) {
        plVar6 = plVar2;
        if (local_40 != '\0') {
          local_58 = local_48;
          FUN_00d50b20();
          local_50 = '\x01';
          goto LAB_01dccd54;
        }
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        local_58 = plVar2;
        FUN_00d50b20();
        local_50 = '\x01';
        plVar1 = local_48;
      }
      if ((local_40 != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
LAB_01dccd54:
  if ((DAT_026f0e00 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_026f8e78 = FUN_0006d940();
    _DAT_026f8e60 = "GNScrollView";
    _DAT_026f8e68 = 0x1c0;
    _DAT_026f8e70 = FUN_00074e80;
    _DAT_026f8e80 = 0;
    uRam00000000026f8e88 = 0;
    _DAT_026f8e90 = 0;
    uRam00000000026f8e98 = 0;
    _DAT_026f8ea0 = 0;
    uRam00000000026f8ea8 = 0;
    _DAT_026f8eb0 = 0;
    uRam00000000026f8eb8 = 0;
    _DAT_026f8ec0 = 0;
    uRam00000000026f8ec8 = 0;
    _DAT_026f8ed0 = 0;
    uRam00000000026f8ed8 = 0;
    _DAT_026f8ee0 = 0;
    uRam00000000026f8ee8 = 0;
    _DAT_026f8ef0 = 0;
    uRam00000000026f8ef8 = 0;
    _DAT_026f8f00 = 0;
    uRam00000000026f8f08 = 0;
    _DAT_026f8f10 = 0;
    uRam00000000026f8f18 = 0;
    _DAT_026f8f20 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (longlong *)0x0) {
LAB_01dccd86:
    pplVar5 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01dccd86;
    pplVar5 = &local_58;
  }
  local_31 = *(char *)(pplVar5 + 1);
  if ((local_31 == '\0') || (*pplVar5 == (longlong *)0x0)) {
    if (*pplVar5 == (longlong *)0x0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      goto joined_r0x01dccea9;
    }
  }
  else {
    FUN_00d50b00();
  }
  pplVar5 = &local_48;
  FUN_01d982e0();
  plVar6 = local_48;
  FUN_001f33a0();
  if (plVar6 == (longlong *)0x0) {
    pplVar5 = &DAT_02802688;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    plVar6 = DAT_02802688;
    if (DAT_02802690 != '\0') goto LAB_01dcce0c;
LAB_01dcce3c:
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    *unaff_RDI = plVar6;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') {
      pplVar5 = &DAT_02802688;
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    plVar6 = *pplVar5;
    if (*(char *)(pplVar5 + 1) == '\0') goto LAB_01dcce3c;
LAB_01dcce0c:
    *unaff_RDI = plVar6;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_31 != '\0') {
    FUN_00d50b20();
  }
joined_r0x01dccea9:
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @01dcc4e0 — 706 bytes
// str: ""GNScrollView""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01dcc6be) */
/* WARNING: Removing unreachable block (ram,0x01dcc559) */
/* WARNING: Removing unreachable block (ram,0x01dcc5a3) */
/* WARNING: Removing unreachable block (ram,0x01dcc5a8) */
/* WARNING: Removing unreachable block (ram,0x01dcc5b0) */
/* WARNING: Removing unreachable block (ram,0x01dcc55f) */
/* WARNING: Removing unreachable block (ram,0x01dcc6c7) */
/* WARNING: Removing unreachable block (ram,0x01dcc587) */
/* WARNING: Removing unreachable block (ram,0x01dcc590) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dcc4e0(void)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  char unaff_SIL;
  longlong *local_38;
  char local_30;
  longlong *local_28;
  
  FUN_01dccc70();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != (longlong *)0x0) == (bool)unaff_SIL) {
    return;
  }
  FUN_01e40eb0();
  if (local_30 == '\0') {
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_01dcc53f;
    }
    local_28 = (longlong *)0x0;
  }
  else {
LAB_01dcc53f:
    local_28 = local_38;
    if (local_38 != (longlong *)0x0) {
      FUN_01e40eb0();
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01dcc5d6;
    }
  }
  local_38 = (longlong *)0x0;
LAB_01dcc5d6:
  if ((DAT_026f0e00 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_026f8e78 = FUN_0006d940();
    _DAT_026f8e60 = "GNScrollView";
    _DAT_026f8e68 = 0x1c0;
    _DAT_026f8e70 = FUN_00074e80;
    _DAT_026f8e80 = 0;
    uRam00000000026f8e88 = 0;
    _DAT_026f8e90 = 0;
    uRam00000000026f8e98 = 0;
    _DAT_026f8ea0 = 0;
    uRam00000000026f8ea8 = 0;
    _DAT_026f8eb0 = 0;
    uRam00000000026f8eb8 = 0;
    _DAT_026f8ec0 = 0;
    uRam00000000026f8ec8 = 0;
    _DAT_026f8ed0 = 0;
    uRam00000000026f8ed8 = 0;
    _DAT_026f8ee0 = 0;
    uRam00000000026f8ee8 = 0;
    _DAT_026f8ef0 = 0;
    uRam00000000026f8ef8 = 0;
    _DAT_026f8f00 = 0;
    uRam00000000026f8f08 = 0;
    _DAT_026f8f10 = 0;
    uRam00000000026f8f18 = 0;
    _DAT_026f8f20 = 0;
    ___cxa_guard_release();
  }
  plVar1 = DAT_02802688;
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar1 = DAT_02802688;
    if (cVar2 != '\0') {
      plVar1 = local_28;
    }
  }
  if (plVar1 != (longlong *)0x0) {
    if (unaff_SIL == '\0') {
      FUN_01d97f00();
    }
    else {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_0006daf0();
      *(undefined4 *)(puVar4 + 0x27) = 0;
      *puVar4 = &DAT_02697bb0;
      puVar4[2] = &DAT_026984e8;
      puVar4[0x28] = 0;
      *(undefined1 *)(puVar4 + 0x29) = 0;
      (*DAT_02697bc8)();
      FUN_01d97f00();
      if (puVar4 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  if (local_28 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01dce080 — 676 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01dce298) */
/* WARNING: Removing unreachable block (ram,0x01dce2a1) */
/* WARNING: Removing unreachable block (ram,0x01dce0fd) */
/* WARNING: Removing unreachable block (ram,0x01dce106) */
/* WARNING: Removing unreachable block (ram,0x01dce18b) */
/* WARNING: Removing unreachable block (ram,0x01dce194) */
/* WARNING: Removing unreachable block (ram,0x01dce217) */
/* WARNING: Removing unreachable block (ram,0x01dce220) */
/* WARNING: Removing unreachable block (ram,0x01dce2ca) */
/* WARNING: Removing unreachable block (ram,0x01dce2d3) */

void FUN_01dce080(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  int unaff_ESI;
  longlong *unaff_RDI;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong local_78;
  char local_70;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  
  lVar2 = (longlong)unaff_ESI;
  lVar1 = *(longlong *)(*(longlong *)(unaff_RDI[0x2c] + 0x10) + lVar2 * 8);
  if (lVar1 == 0) {
    local_58 = 0;
  }
  else {
    FUN_00d50b00();
    local_58 = lVar1;
  }
  FUN_00d23620();
  local_40 = local_58;
  FUN_00d23370(param_1,param_2);
  if (*(int *)(unaff_RDI[0x2f] + 0xc) == 0) {
    bVar3 = false;
    local_50 = 0;
  }
  else {
    local_50 = *(longlong *)(*(longlong *)(unaff_RDI[0x2f] + 0x10) + lVar2 * 8);
    bVar3 = local_50 == 0;
    if (bVar3) {
      local_50 = 0;
    }
    else {
      FUN_00d50b00();
    }
    bVar3 = !bVar3;
    FUN_00d23620();
    local_40 = local_50;
    FUN_00d23370(param_1,param_2);
  }
  if (((char)unaff_RDI[0x4f] == '\0') || (*(int *)(unaff_RDI[0x51] + 0xc) == 0)) {
    bVar4 = false;
    local_48 = 0;
  }
  else {
    local_48 = *(longlong *)(*(longlong *)(unaff_RDI[0x51] + 0x10) + lVar2 * 8);
    bVar4 = local_48 == 0;
    if (bVar4) {
      local_48 = 0;
    }
    else {
      FUN_00d50b00();
    }
    bVar4 = !bVar4;
    FUN_00d23620();
    local_40 = local_48;
    FUN_00d23370(param_1,param_2);
  }
  (**(code **)(*unaff_RDI + 0xa20))(param_1,0);
  (**(code **)(*unaff_RDI + 0x620))();
  FUN_01e42030();
  if (local_40 == 0) {
    bVar5 = false;
  }
  else {
    FUN_01e4c160();
    bVar5 = local_78 != 0;
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  if (bVar5) {
    FUN_01e42030();
    FUN_01d86b20();
  }
  if ((bVar4) && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((lVar1 != 0) && (local_58 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01cf9ae0 — 664 bytes
// str: ""GNScrollView""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cf9ae0(undefined8 param_1)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong *unaff_RDI;
  float fVar7;
  undefined8 in_XMM0_Qb;
  undefined1 auVar9 [16];
  undefined8 uVar8;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 local_48 [8];
  undefined8 uStack_40;
  longlong *local_38;
  char local_30;
  
  uStack_40 = in_XMM0_Qb;
  local_48 = (undefined1  [8])param_1;
  plVar1 = (longlong *)unaff_RDI[6];
  if ((DAT_026f0e00 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    _DAT_026f8e78 = FUN_0006d940();
    _DAT_026f8e60 = "GNScrollView";
    _DAT_026f8e68 = 0x1c0;
    _DAT_026f8e70 = FUN_00074e80;
    _DAT_026f8e80 = 0;
    uRam00000000026f8e88 = 0;
    _DAT_026f8e90 = 0;
    uRam00000000026f8e98 = 0;
    _DAT_026f8ea0 = 0;
    uRam00000000026f8ea8 = 0;
    _DAT_026f8eb0 = 0;
    uRam00000000026f8eb8 = 0;
    _DAT_026f8ec0 = 0;
    uRam00000000026f8ec8 = 0;
    _DAT_026f8ed0 = 0;
    uRam00000000026f8ed8 = 0;
    _DAT_026f8ee0 = 0;
    uRam00000000026f8ee8 = 0;
    _DAT_026f8ef0 = 0;
    uRam00000000026f8ef8 = 0;
    _DAT_026f8f00 = 0;
    uRam00000000026f8f08 = 0;
    _DAT_026f8f10 = 0;
    uRam00000000026f8f18 = 0;
    _DAT_026f8f20 = 0;
    ___cxa_guard_release();
  }
  lVar4 = DAT_02802688;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    lVar4 = DAT_02802688;
    if (cVar5 != '\0') {
      lVar4 = unaff_RDI[6];
    }
  }
  if (lVar4 == 0) {
    cVar5 = '\0';
    bVar3 = false;
  }
  else {
    FUN_00d50b00();
    cVar5 = FUN_01d951e0();
    if (cVar5 == '\0') {
      bVar3 = false;
    }
    else {
      (**(code **)(*unaff_RDI + 0x640))();
      fVar7 = (float)(**(code **)(*local_38 + 0x580))();
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      auVar9._4_12_ = local_48._4_12_;
      auVar9._0_4_ = (float)param_1 - fVar7;
      _local_48 = blendps(auVar9,_DAT_0241fd60,0xe);
      bVar3 = true;
    }
    cVar5 = FUN_01d95200();
    if (cVar5 != '\0') {
      blendps(_local_48,ZEXT416(DAT_02391078),1);
    }
    FUN_00d50b20();
  }
  if ((longlong *)unaff_RDI[0x27] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x5c0))();
    local_48 = (undefined1  [8])(**(code **)(*(longlong *)unaff_RDI[0x27] + 0x5c8))();
    uStack_40 = extraout_XMM0_Qb;
    if (bVar3) {
      if (cVar5 == '\0') {
        (**(code **)(*unaff_RDI + 0x640))();
        uVar8 = (**(code **)(*local_38 + 0x580))();
        if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        auVar2._8_8_ = extraout_XMM0_Qb_00;
        auVar2._0_8_ = uVar8;
        auVar12._4_12_ = auVar2._4_12_;
        auVar12._0_4_ = (float)uVar8 + 0.0;
        insertps(_local_48,auVar12,0x10);
      }
    }
    else if (cVar5 != '\0') {
      (**(code **)(*unaff_RDI + 0x640))();
      fVar7 = (float)(**(code **)(*local_38 + 0x578))();
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
      uStack_40._4_4_ = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
      auVar10._4_4_ = local_48._4_4_;
      auVar10._0_4_ = local_48._4_4_;
      auVar10._8_4_ = uStack_40._4_4_;
      auVar10._12_4_ = uStack_40._4_4_;
      auVar11._4_12_ = auVar10._4_12_;
      auVar11._0_4_ = (float)local_48._4_4_ + fVar7;
      insertps(auVar11,auVar11,0x1d);
    }
  }
  return;
}




// ============================================================
// @01cfc0e0 — 572 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cfc0e0(void)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_RDI;
  bool bVar5;
  undefined8 *local_38;
  char local_30;
  
  puVar4 = DAT_028b7918;
  if ((DAT_028b7918 == (undefined8 *)0x0) || (DAT_028b7921 == '\0')) {
    FUN_00e8cb50();
    lVar3 = DAT_027ef210;
    if (DAT_028b7918 == (undefined8 *)0x0) {
      if (DAT_027ef210 != 0) {
        FUN_00d50b00();
      }
      FUN_01cfb480();
      if (DAT_028b7918 != local_38) {
        puVar4 = DAT_028b7918;
        if (local_30 == '\0') {
          if (local_38 != (undefined8 *)0x0) {
            FUN_00d50b00();
            puVar4 = DAT_028b7918;
          }
        }
        else {
          local_30 = '\0';
        }
        DAT_028b7918 = local_38;
        if (puVar4 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != (undefined8 *)0x0) && (DAT_028b7920 == '\0')) {
        DAT_028b7920 = '\x01';
        FUN_00e8cb90();
      }
      if ((local_30 != '\0') && (local_38 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (DAT_028b7918 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &DAT_026792c0;
        puVar4[5] = 0;
        *(undefined8 *)((longlong)puVar4 + 0xc) = 0;
        *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
        *(undefined8 *)((longlong)puVar4 + 0x19) = 0;
        FUN_00d500e0();
        if ((*(float *)(puVar4 + 2) != _DAT_0241febc) ||
           (NAN(*(float *)(puVar4 + 2)) || NAN(_DAT_0241febc))) {
          *(undefined4 *)(puVar4 + 2) = 0x3f2aaa3b;
          *(undefined1 *)((longlong)puVar4 + 0xe) = 0xaa;
        }
        if ((*(float *)((longlong)puVar4 + 0x14) != _DAT_0241febc) ||
           (NAN(*(float *)((longlong)puVar4 + 0x14)) || NAN(_DAT_0241febc))) {
          *(undefined4 *)((longlong)puVar4 + 0x14) = 0x3f2aaa3b;
          *(undefined1 *)((longlong)puVar4 + 0xd) = 0xaa;
        }
        if ((*(float *)(puVar4 + 3) != _DAT_0241febc) ||
           (NAN(*(float *)(puVar4 + 3)) || NAN(_DAT_0241febc))) {
          *(undefined4 *)(puVar4 + 3) = 0x3f2aaa3b;
          *(undefined1 *)((longlong)puVar4 + 0xc) = 0xaa;
        }
        if (DAT_028b7918 == puVar4) {
          bVar2 = false;
          bVar1 = false;
        }
        else {
          bVar2 = true;
          bVar1 = true;
          bVar5 = DAT_028b7918 != (undefined8 *)0x0;
          DAT_028b7918 = puVar4;
          if (bVar5) {
            FUN_00d50b20();
          }
        }
        if (DAT_028b7920 == '\0') {
          DAT_028b7920 = '\x01';
          FUN_00e8cb90();
          bVar1 = bVar2;
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
      }
      DAT_028b7921 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b7921 = '\x01';
      FUN_00e8cb70();
    }
    puVar4 = DAT_028b7918;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_01cfc2fe;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_01cfc2fe:
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @01cfc3c0 — 572 bytes
// ============================================================

void FUN_01cfc3c0(void)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_RDI;
  bool bVar5;
  undefined8 *local_38;
  char local_30;
  
  puVar4 = DAT_028b7928;
  if ((DAT_028b7928 == (undefined8 *)0x0) || (DAT_028b7931 == '\0')) {
    FUN_00e8cb50();
    lVar3 = DAT_027ef218;
    if (DAT_028b7928 == (undefined8 *)0x0) {
      if (DAT_027ef218 != 0) {
        FUN_00d50b00();
      }
      FUN_01cfb480();
      if (DAT_028b7928 != local_38) {
        puVar4 = DAT_028b7928;
        if (local_30 == '\0') {
          if (local_38 != (undefined8 *)0x0) {
            FUN_00d50b00();
            puVar4 = DAT_028b7928;
          }
        }
        else {
          local_30 = '\0';
        }
        DAT_028b7928 = local_38;
        if (puVar4 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != (undefined8 *)0x0) && (DAT_028b7930 == '\0')) {
        DAT_028b7930 = '\x01';
        FUN_00e8cb90();
      }
      if ((local_30 != '\0') && (local_38 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (DAT_028b7928 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &DAT_026792c0;
        puVar4[5] = 0;
        *(undefined8 *)((longlong)puVar4 + 0xc) = 0;
        *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
        *(undefined8 *)((longlong)puVar4 + 0x19) = 0;
        FUN_00d500e0();
        if ((*(float *)(puVar4 + 2) != DAT_0241b3d0) ||
           (NAN(*(float *)(puVar4 + 2)) || NAN(DAT_0241b3d0))) {
          *(undefined4 *)(puVar4 + 2) = 0x3eaaaa9f;
          *(undefined1 *)((longlong)puVar4 + 0xe) = 0x55;
        }
        if ((*(float *)((longlong)puVar4 + 0x14) != DAT_0241b3d0) ||
           (NAN(*(float *)((longlong)puVar4 + 0x14)) || NAN(DAT_0241b3d0))) {
          *(undefined4 *)((longlong)puVar4 + 0x14) = 0x3eaaaa9f;
          *(undefined1 *)((longlong)puVar4 + 0xd) = 0x55;
        }
        if ((*(float *)(puVar4 + 3) != DAT_0241b3d0) ||
           (NAN(*(float *)(puVar4 + 3)) || NAN(DAT_0241b3d0))) {
          *(undefined4 *)(puVar4 + 3) = 0x3eaaaa9f;
          *(undefined1 *)((longlong)puVar4 + 0xc) = 0x55;
        }
        if (DAT_028b7928 == puVar4) {
          bVar2 = false;
          bVar1 = false;
        }
        else {
          bVar2 = true;
          bVar1 = true;
          bVar5 = DAT_028b7928 != (undefined8 *)0x0;
          DAT_028b7928 = puVar4;
          if (bVar5) {
            FUN_00d50b20();
          }
        }
        if (DAT_028b7930 == '\0') {
          DAT_028b7930 = '\x01';
          FUN_00e8cb90();
          bVar1 = bVar2;
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
      }
      DAT_028b7931 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b7931 = '\x01';
      FUN_00e8cb70();
    }
    puVar4 = DAT_028b7928;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_01cfc5de;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_01cfc5de:
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @01cfb920 — 570 bytes
// ============================================================

void FUN_01cfb920(void)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_RDI;
  bool bVar5;
  undefined8 *local_38;
  char local_30;
  
  puVar4 = DAT_028b78f8;
  if ((DAT_028b78f8 == (undefined8 *)0x0) || (DAT_028b7901 == '\0')) {
    FUN_00e8cb50();
    lVar3 = DAT_027ef200;
    if (DAT_028b78f8 == (undefined8 *)0x0) {
      if (DAT_027ef200 != 0) {
        FUN_00d50b00();
      }
      FUN_01cfb480();
      if (DAT_028b78f8 != local_38) {
        puVar4 = DAT_028b78f8;
        if (local_30 == '\0') {
          if (local_38 != (undefined8 *)0x0) {
            FUN_00d50b00();
            puVar4 = DAT_028b78f8;
          }
        }
        else {
          local_30 = '\0';
        }
        DAT_028b78f8 = local_38;
        if (puVar4 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != (undefined8 *)0x0) && (DAT_028b7900 == '\0')) {
        DAT_028b7900 = '\x01';
        FUN_00e8cb90();
      }
      if ((local_30 != '\0') && (local_38 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (DAT_028b78f8 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &DAT_026792c0;
        puVar4[5] = 0;
        *(undefined8 *)((longlong)puVar4 + 0xc) = 0;
        *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
        *(undefined8 *)((longlong)puVar4 + 0x19) = 0;
        FUN_00d500e0();
        if (DAT_028b78f8 == puVar4) {
          bVar2 = false;
          bVar1 = false;
        }
        else {
          bVar2 = true;
          bVar1 = true;
          bVar5 = DAT_028b78f8 != (undefined8 *)0x0;
          DAT_028b78f8 = puVar4;
          if (bVar5) {
            FUN_00d50b20();
          }
        }
        if (DAT_028b7900 == '\0') {
          DAT_028b7900 = '\x01';
          FUN_00e8cb90();
          bVar1 = bVar2;
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        puVar4 = DAT_028b78f8;
        if ((*(float *)(DAT_028b78f8 + 2) != DAT_02390124) ||
           (NAN(*(float *)(DAT_028b78f8 + 2)) || NAN(DAT_02390124))) {
          *(undefined4 *)(DAT_028b78f8 + 2) = 0x3f800000;
          *(undefined1 *)((longlong)puVar4 + 0xe) = 0xff;
        }
        if ((*(float *)((longlong)puVar4 + 0x14) != DAT_02390124) ||
           (NAN(*(float *)((longlong)puVar4 + 0x14)) || NAN(DAT_02390124))) {
          *(undefined4 *)((longlong)puVar4 + 0x14) = 0x3f800000;
          *(undefined1 *)((longlong)puVar4 + 0xd) = 0xff;
        }
        if ((*(float *)(puVar4 + 3) != DAT_02390124) ||
           (NAN(*(float *)(puVar4 + 3)) || NAN(DAT_02390124))) {
          *(undefined4 *)(puVar4 + 3) = 0x3f800000;
          *(undefined1 *)((longlong)puVar4 + 0xc) = 0xff;
        }
      }
      DAT_028b7901 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b7901 = '\x01';
      FUN_00e8cb70();
    }
    puVar4 = DAT_028b78f8;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_01cfbb3c;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_01cfbb3c:
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @01cfbc00 — 566 bytes
// ============================================================

void FUN_01cfbc00(void)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_RDI;
  bool bVar5;
  undefined8 *local_38;
  char local_30;
  
  puVar4 = DAT_028b7908;
  if ((DAT_028b7908 == (undefined8 *)0x0) || (DAT_028b7911 == '\0')) {
    FUN_00e8cb50();
    lVar3 = DAT_027ef208;
    if (DAT_028b7908 == (undefined8 *)0x0) {
      if (DAT_027ef208 != 0) {
        FUN_00d50b00();
      }
      FUN_01cfb480();
      if (DAT_028b7908 != local_38) {
        puVar4 = DAT_028b7908;
        if (local_30 == '\0') {
          if (local_38 != (undefined8 *)0x0) {
            FUN_00d50b00();
            puVar4 = DAT_028b7908;
          }
        }
        else {
          local_30 = '\0';
        }
        DAT_028b7908 = local_38;
        if (puVar4 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != (undefined8 *)0x0) && (DAT_028b7910 == '\0')) {
        DAT_028b7910 = '\x01';
        FUN_00e8cb90();
      }
      if ((local_30 != '\0') && (local_38 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (DAT_028b7908 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &DAT_026792c0;
        puVar4[5] = 0;
        *(undefined8 *)((longlong)puVar4 + 0xc) = 0;
        *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
        *(undefined8 *)((longlong)puVar4 + 0x19) = 0;
        FUN_00d500e0();
        if ((*(float *)(puVar4 + 2) != 0.0) || (NAN(*(float *)(puVar4 + 2)))) {
          *(undefined4 *)(puVar4 + 2) = 0;
          *(undefined1 *)((longlong)puVar4 + 0xe) = 0;
        }
        if ((*(float *)((longlong)puVar4 + 0x14) != 0.0) ||
           (NAN(*(float *)((longlong)puVar4 + 0x14)))) {
          *(undefined4 *)((longlong)puVar4 + 0x14) = 0;
          *(undefined1 *)((longlong)puVar4 + 0xd) = 0;
        }
        if ((*(float *)(puVar4 + 3) != 0.0) || (NAN(*(float *)(puVar4 + 3)))) {
          *(undefined4 *)(puVar4 + 3) = 0;
          *(undefined1 *)((longlong)puVar4 + 0xc) = 0;
        }
        if (DAT_028b7908 == puVar4) {
          bVar2 = false;
          bVar1 = false;
        }
        else {
          bVar2 = true;
          bVar1 = true;
          bVar5 = DAT_028b7908 != (undefined8 *)0x0;
          DAT_028b7908 = puVar4;
          if (bVar5) {
            FUN_00d50b20();
          }
        }
        if (DAT_028b7910 == '\0') {
          DAT_028b7910 = '\x01';
          FUN_00e8cb90();
          bVar1 = bVar2;
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
      }
      DAT_028b7911 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b7911 = '\x01';
      FUN_00e8cb70();
    }
    puVar4 = DAT_028b7908;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_01cfbe18;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_01cfbe18:
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @01cfb0d0 — 563 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cfb0d0(float param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  lVar1 = *unaff_RSI;
  lVar2 = *param_2;
  fVar3 = (*(float *)(lVar2 + 0x10) - *(float *)(lVar1 + 0x10)) * param_1 + *(float *)(lVar1 + 0x10)
  ;
  if ((*(float *)(unaff_RDI + 0x10) != fVar3) || (NAN(*(float *)(unaff_RDI + 0x10)) || NAN(fVar3)))
  {
    if (0.0 <= fVar3) {
      if (fVar3 <= DAT_02390124) {
        *(float *)(unaff_RDI + 0x10) = fVar3;
        fVar3 = fVar3 * DAT_02394220;
      }
      else {
        *(undefined4 *)(unaff_RDI + 0x10) = 0x3f800000;
        fVar3 = DAT_02394220;
      }
    }
    else {
      *(undefined4 *)(unaff_RDI + 0x10) = 0;
      fVar3 = 0.0;
    }
    auVar4 = ZEXT416(_DAT_023945e0 & (uint)fVar3) | _DAT_023945f0;
    auVar4._0_4_ = auVar4._0_4_ + fVar3;
    auVar4 = roundss(auVar4,auVar4,0xb);
    *(uint *)(unaff_RDI + 0xc) =
         (int)(longlong)auVar4._0_4_ << 0x10 | *(uint *)(unaff_RDI + 0xc) & 0xff00ffff;
  }
  fVar3 = (*(float *)(lVar2 + 0x14) - *(float *)(lVar1 + 0x14)) * param_1 + *(float *)(lVar1 + 0x14)
  ;
  if ((*(float *)(unaff_RDI + 0x14) != fVar3) || (NAN(*(float *)(unaff_RDI + 0x14)) || NAN(fVar3)))
  {
    if (0.0 <= fVar3) {
      if (fVar3 <= DAT_02390124) {
        *(float *)(unaff_RDI + 0x14) = fVar3;
        fVar3 = fVar3 * DAT_02394220;
      }
      else {
        *(undefined4 *)(unaff_RDI + 0x14) = 0x3f800000;
        fVar3 = DAT_02394220;
      }
    }
    else {
      *(undefined4 *)(unaff_RDI + 0x14) = 0;
      fVar3 = 0.0;
    }
    auVar4 = ZEXT416(_DAT_023945e0 & (uint)fVar3) | _DAT_023945f0;
    auVar5._4_12_ = auVar4._4_12_;
    auVar5._0_4_ = auVar4._0_4_ + fVar3;
    auVar4 = roundss(auVar5,auVar5,0xb);
    *(uint *)(unaff_RDI + 0xc) =
         (int)(longlong)auVar4._0_4_ << 8 | *(uint *)(unaff_RDI + 0xc) & 0xffff00ff;
  }
  fVar3 = (*(float *)(lVar2 + 0x18) - *(float *)(lVar1 + 0x18)) * param_1 + *(float *)(lVar1 + 0x18)
  ;
  if ((*(float *)(unaff_RDI + 0x18) != fVar3) || (NAN(*(float *)(unaff_RDI + 0x18)) || NAN(fVar3)))
  {
    if (0.0 <= fVar3) {
      if (fVar3 <= DAT_02390124) {
        *(float *)(unaff_RDI + 0x18) = fVar3;
        fVar3 = fVar3 * DAT_02394220;
      }
      else {
        *(undefined4 *)(unaff_RDI + 0x18) = 0x3f800000;
        fVar3 = DAT_02394220;
      }
    }
    else {
      *(undefined4 *)(unaff_RDI + 0x18) = 0;
      fVar3 = 0.0;
    }
    auVar4 = ZEXT416(_DAT_023945e0 & (uint)fVar3) | _DAT_023945f0;
    auVar6._4_12_ = auVar4._4_12_;
    auVar6._0_4_ = auVar4._0_4_ + fVar3;
    auVar4 = roundss(auVar6,auVar6,0xb);
    *(uint *)(unaff_RDI + 0xc) =
         (uint)(longlong)auVar4._0_4_ | *(uint *)(unaff_RDI + 0xc) & 0xffffff00;
  }
  fVar3 = (*(float *)(lVar2 + 0x1c) - *(float *)(lVar1 + 0x1c)) * param_1 + *(float *)(lVar1 + 0x1c)
  ;
  if ((*(float *)(unaff_RDI + 0x1c) != fVar3) || (NAN(*(float *)(unaff_RDI + 0x1c)) || NAN(fVar3)))
  {
    if (0.0 <= fVar3) {
      if (fVar3 <= DAT_02390124) {
        *(float *)(unaff_RDI + 0x1c) = fVar3;
        fVar3 = fVar3 * DAT_02394220;
      }
      else {
        *(undefined4 *)(unaff_RDI + 0x1c) = 0x3f800000;
        fVar3 = DAT_02394220;
      }
    }
    else {
      *(undefined4 *)(unaff_RDI + 0x1c) = 0;
      fVar3 = 0.0;
    }
    auVar4 = ZEXT416(_DAT_023945e0 & (uint)fVar3) | _DAT_023945f0;
    auVar7._4_12_ = auVar4._4_12_;
    auVar7._0_4_ = auVar4._0_4_ + fVar3;
    auVar4 = roundss(ZEXT816(0),auVar7,0xb);
    *(char *)(unaff_RDI + 0xf) = (char)(longlong)auVar4._0_4_;
  }
  return;
}




// ============================================================
// @001ec260 — 544 bytes
// str: ""GNScrollView""
// str: ""GNBorderStyle""
// str: ""_borderStyle""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_001ec260(void)

{
  int iVar1;
  undefined4 extraout_XMM0_Da;
  
  if (DAT_026daa20 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      DAT_026daa18 = FUN_000f9810(extraout_XMM0_Da,0);
      ___cxa_guard_release();
    }
  }
  if (DAT_026daa58 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
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
  if (DAT_027e59e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026f0e00 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f8e78 = FUN_0006d940();
          _DAT_026f8e60 = "GNScrollView";
          _DAT_026f8e68 = 0x1c0;
          _DAT_026f8e70 = FUN_00074e80;
          _DAT_026f8e80 = 0;
          uRam00000000026f8e88 = 0;
          _DAT_026f8e90 = 0;
          uRam00000000026f8e98 = 0;
          _DAT_026f8ea0 = 0;
          uRam00000000026f8ea8 = 0;
          _DAT_026f8eb0 = 0;
          uRam00000000026f8eb8 = 0;
          _DAT_026f8ec0 = 0;
          uRam00000000026f8ec8 = 0;
          _DAT_026f8ed0 = 0;
          uRam00000000026f8ed8 = 0;
          _DAT_026f8ee0 = 0;
          uRam00000000026f8ee8 = 0;
          _DAT_026f8ef0 = 0;
          uRam00000000026f8ef8 = 0;
          _DAT_026f8f00 = 0;
          uRam00000000026f8f08 = 0;
          _DAT_026f8f10 = 0;
          uRam00000000026f8f18 = 0;
          _DAT_026f8f20 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_027e59a0 = "_borderStyle";
      _DAT_027e59a8 = &DAT_026f8e60;
      _DAT_027e59b0 = 0;
      _DAT_027e59b8 = 0x6500;
      _DAT_027e59c0 = "GNBorderStyle";
      _DAT_027e59c8 = &DAT_026daa28;
      _DAT_027e59d0 = 0;
      uRam00000000027e59d8 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_027e59a0;
}




// ============================================================
// @01db5150 — 533 bytes
// ============================================================

void FUN_01db5150(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *unaff_RDI;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong local_68;
  char local_60;
  undefined8 local_40;
  float local_38;
  float local_34;
  
  fVar7 = (float)((ulonglong)param_2 >> 0x20);
  fVar6 = (float)param_2;
  FUN_01db2340();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  FUN_01db2340();
  if (local_60 == '\0') {
    if (local_68 == 0) goto LAB_01db51e8;
    FUN_00d50b00();
  }
  else if (local_68 == 0) {
LAB_01db51e8:
    local_34 = 0.0;
    goto joined_r0x01db51e1;
  }
  local_34 = 0.0;
  if (*(int *)(local_68 + 0xc) != 0) {
    local_34 = (float)(*(int *)(local_68 + 0xc) + -1) * DAT_023b36b0;
  }
  FUN_00d50b20();
joined_r0x01db51e1:
  if (local_68 != 0) {
    if (*(int *)(local_68 + 0xc) != 0) {
      if (*(int *)(local_68 + 0xc) < 1) {
        fVar8 = 0.0;
      }
      else {
        local_38 = 0.0;
        lVar4 = 0;
        do {
          lVar2 = *(longlong *)(*(longlong *)(local_68 + 0x10) + lVar4 * 8);
          plVar3 = *(longlong **)(lVar2 + 0x20);
          if (plVar3 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          (**(code **)(*plVar3 + 0x4e8))(*(undefined8 *)(lVar2 + 0x10));
          FUN_00d50b20();
          plVar3 = *(longlong **)(lVar2 + 0x20);
          if (plVar3 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          (**(code **)(*plVar3 + 0x4d8))();
          FUN_00d50b20();
          fVar8 = fVar6;
          fVar5 = fVar7;
          if ((char)unaff_RDI[0x27] != '\0') {
            fVar8 = fVar7;
            fVar5 = fVar6;
          }
          fVar7 = 0.0;
          fVar6 = local_34 + fVar5;
          if (fVar8 <= local_38) {
            fVar8 = local_38;
          }
          lVar4 = lVar4 + 1;
          local_38 = fVar8;
          local_34 = fVar6;
        } while ((int)lVar4 < *(int *)(local_68 + 0xc));
      }
      FUN_01db88f0();
      (**(code **)(*unaff_RDI + 0x4d8))();
      local_40 = CONCAT44(fVar7,fVar6);
      bVar1 = *(byte *)(unaff_RDI + 0x27);
      *(float *)((longlong)&local_40 + (ulonglong)((ulonglong)bVar1 == 0) * 4) = local_34;
      *(float *)((ulonglong)&local_40 | (ulonglong)bVar1 << 2) = fVar8;
      (**(code **)(*unaff_RDI + 0x4e8))(local_40);
    }
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @001ecb80 — 532 bytes
// str: ""GNScrollView""
// str: ""GNRulerHeaderLocation""
// str: ""_rulerHeaderLocation""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_001ecb80(void)

{
  int iVar1;
  
  if (DAT_026f1170 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f1160 = 0x100000000;
      _DAT_026f1168 = 2;
      DAT_026f116c = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_026f11a8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f1178 = "GNRulerHeaderLocation";
      _DAT_026f1180 = 3;
      DAT_026f1184 = DAT_026f116c;
      _DAT_026f1188 = &DAT_026f1160;
      _DAT_026f1190 = &DAT_026f1140;
      _DAT_026f1198 = 0;
      uRam00000000026f11a0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_026f1130 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026f0e00 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f8e78 = FUN_0006d940();
          _DAT_026f8e60 = "GNScrollView";
          _DAT_026f8e68 = 0x1c0;
          _DAT_026f8e70 = FUN_00074e80;
          _DAT_026f8e80 = 0;
          uRam00000000026f8e88 = 0;
          _DAT_026f8e90 = 0;
          uRam00000000026f8e98 = 0;
          _DAT_026f8ea0 = 0;
          uRam00000000026f8ea8 = 0;
          _DAT_026f8eb0 = 0;
          uRam00000000026f8eb8 = 0;
          _DAT_026f8ec0 = 0;
          uRam00000000026f8ec8 = 0;
          _DAT_026f8ed0 = 0;
          uRam00000000026f8ed8 = 0;
          _DAT_026f8ee0 = 0;
          uRam00000000026f8ee8 = 0;
          _DAT_026f8ef0 = 0;
          uRam00000000026f8ef8 = 0;
          _DAT_026f8f00 = 0;
          uRam00000000026f8f08 = 0;
          _DAT_026f8f10 = 0;
          uRam00000000026f8f18 = 0;
          _DAT_026f8f20 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_026f10f0 = "_rulerHeaderLocation";
      _DAT_026f10f8 = &DAT_026f8e60;
      _DAT_026f1100 = 0;
      _DAT_026f1108 = 0x6500;
      _DAT_026f1110 = "GNRulerHeaderLocation";
      _DAT_026f1118 = &DAT_026f1178;
      _DAT_026f1120 = 0;
      uRam00000000026f1128 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_026f10f0;
}




// ============================================================
// @01cf9e30 — 518 bytes
// str: ""GNScrollView""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cf9e30(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong unaff_RDI;
  undefined8 uVar6;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float local_48;
  float fStack_44;
  undefined1 local_28 [8];
  undefined8 uStack_20;
  
  fVar10 = (float)((ulonglong)param_2 >> 0x20);
  fVar8 = (float)param_2;
  if ((*(longlong *)(unaff_RDI + 0x138) == 0) || (cVar4 = FUN_01e3f2b0(), cVar4 == '\0')) {
    return;
  }
  uVar6 = (**(code **)(**(longlong **)(unaff_RDI + 0x138) + 0x4d8))();
  fVar9 = fVar8;
  fVar11 = fVar10;
  local_28 = (undefined1  [8])(**(code **)(**(longlong **)(unaff_RDI + 0x138) + 0x5c8))();
  uStack_20 = extraout_XMM0_Qb;
  plVar1 = *(longlong **)(unaff_RDI + 0x30);
  if ((DAT_026f0e00 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_026f8e78 = FUN_0006d940();
    _DAT_026f8e60 = "GNScrollView";
    _DAT_026f8e68 = 0x1c0;
    _DAT_026f8e70 = FUN_00074e80;
    _DAT_026f8e80 = 0;
    uRam00000000026f8e88 = 0;
    _DAT_026f8e90 = 0;
    uRam00000000026f8e98 = 0;
    _DAT_026f8ea0 = 0;
    uRam00000000026f8ea8 = 0;
    _DAT_026f8eb0 = 0;
    uRam00000000026f8eb8 = 0;
    _DAT_026f8ec0 = 0;
    uRam00000000026f8ec8 = 0;
    _DAT_026f8ed0 = 0;
    uRam00000000026f8ed8 = 0;
    _DAT_026f8ee0 = 0;
    uRam00000000026f8ee8 = 0;
    _DAT_026f8ef0 = 0;
    uRam00000000026f8ef8 = 0;
    _DAT_026f8f00 = 0;
    uRam00000000026f8f08 = 0;
    _DAT_026f8f10 = 0;
    uRam00000000026f8f18 = 0;
    _DAT_026f8f20 = 0;
    ___cxa_guard_release();
  }
  lVar3 = DAT_02802688;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    lVar3 = DAT_02802688;
    if (cVar4 != '\0') {
      lVar3 = *(longlong *)(unaff_RDI + 0x30);
    }
  }
  if (lVar3 != 0) {
    FUN_00d50b00();
    cVar4 = FUN_01d951e0();
    if (cVar4 == '\0') {
      FUN_01e3f820();
      auVar7._4_4_ = fVar11;
      auVar7._0_4_ = fVar9;
      auVar7._8_4_ = in_XMM1_Dc;
      auVar7._12_4_ = in_XMM1_Dd;
      _local_28 = blendps(_local_28,auVar7,2);
    }
    cVar4 = FUN_01d95200();
    if (cVar4 == '\0') {
      FUN_01e3f820();
      auVar2._4_4_ = fVar11;
      auVar2._0_4_ = fVar9;
      auVar2._8_4_ = in_XMM1_Dc;
      auVar2._12_4_ = in_XMM1_Dd;
      auVar7 = blendps(_local_28,auVar2,0xd);
      local_28 = auVar7._0_8_;
    }
    FUN_00d50b20();
  }
  local_48 = (float)uVar6;
  fStack_44 = (float)((ulonglong)uVar6 >> 0x20);
  if ((!NAN(local_48)) && (!NAN(fStack_44))) {
    if (((float)local_28._0_4_ == fVar8) &&
       ((!NAN((float)local_28._0_4_) && !NAN(fVar8) && (fVar10 == (float)local_28._4_4_)))) {
      return;
    }
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x138) + 0x5d8))();
  FUN_01cf5a00();
  return;
}



