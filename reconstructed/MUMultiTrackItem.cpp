// Reconstructed implementation of MUMultiTrackItem
// From MikeCore binary — reverse-engineered pseudocode

#include "MUMultiTrackItem.h"

// ============================================================
// @01be8850 — 4835 bytes
// ============================================================

void FUN_01be8850(void)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *unaff_RDI;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined1 in_XMM1 [16];
  undefined1 auVar11 [16];
  longlong local_2e0;
  char local_2d8;
  longlong local_2d0;
  char local_2c8;
  longlong local_2c0;
  char local_2b8;
  longlong local_2b0;
  char local_2a8;
  longlong local_2a0;
  char local_298;
  longlong local_290;
  char local_288;
  longlong *local_280;
  char local_278;
  longlong local_270;
  char local_268;
  longlong local_260;
  char local_258;
  longlong local_250;
  char local_248;
  longlong local_240;
  char local_238;
  longlong *local_230;
  char local_228;
  longlong local_220;
  char local_218;
  longlong local_210;
  char local_208;
  longlong *local_200;
  char local_1f8;
  longlong local_1f0;
  char local_1e8;
  longlong local_1e0;
  char local_1d8;
  longlong local_1d0;
  char local_1c8;
  longlong local_1c0;
  char local_1b8;
  longlong local_1b0;
  char local_1a8;
  longlong local_1a0;
  char local_198;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_100;
  char local_f8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_00d403d0();
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_027e7bf0;
  if (DAT_027e7bf0 != 0) {
    FUN_00d50b00();
  }
  local_2e0 = lVar2;
  local_2d8 = '\x01';
  local_2d0 = 0;
  local_2c8 = '\0';
  FUN_00d41430(&local_2d0,&local_2e0);
  if ((local_2c8 != '\0') && (local_2d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2d8 != '\0') && (local_2e0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_026f6d40;
  if (DAT_026f6d40 != 0) {
    FUN_00d50b00();
  }
  local_2c0 = lVar2;
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
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_027e7c00;
  if (DAT_027e7c00 != 0) {
    FUN_00d50b00();
  }
  local_2a0 = lVar2;
  local_298 = '\x01';
  local_290 = 0;
  local_288 = '\0';
  FUN_00d41430(&local_290,&local_2a0);
  if ((local_288 != '\0') && (local_290 != 0)) {
    FUN_00d50b20();
  }
  if ((local_298 != '\0') && (local_2a0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x9a0))();
  plVar6 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_78 = plVar6;
  (**(code **)(*plVar6 + 0x4d8))();
  auVar11 = blendps(in_XMM1,ZEXT416(*(uint *)((longlong)unaff_RDI + 0x204)),1);
  (**(code **)(*plVar6 + 0x4d0))();
  FUN_01beab60();
  plVar6 = local_40;
  local_280 = local_78;
  local_278 = '\0';
  FUN_01d980f0();
  if ((local_278 != '\0') && (local_280 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_001de9e0();
  *plVar6 = (longlong)&DAT_0265e5e8;
  plVar6[9] = (longlong)&DAT_0265eb98;
  plVar6[10] = (longlong)&DAT_0265ec00;
  plVar6[0xb] = (longlong)&DAT_0265ec58;
  FUN_00d500e0();
  local_270 = DAT_027edfd0;
  if (DAT_027edfd0 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_027e7c10;
  local_268 = '\x01';
  if (DAT_027e7c10 != 0) {
    FUN_00d50b00();
  }
  local_260 = lVar2;
  local_258 = '\x01';
  local_158 = 0;
  lVar2 = unaff_RDI[0x2a];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_158 = '\x01';
  local_160 = lVar2;
  (**(code **)(*plVar6 + 0x468))(&local_160,&local_260);
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  if ((local_258 != '\0') && (local_260 != 0)) {
    FUN_00d50b20();
  }
  if ((local_268 != '\0') && (local_270 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02800140;
  if (DAT_02800140 != 0) {
    FUN_00d50b00();
  }
  local_250 = lVar2;
  local_248 = '\x01';
  local_240 = 0;
  local_238 = '\0';
  local_148 = 0;
  lVar2 = unaff_RDI[0x2b];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_148 = '\x01';
  local_150 = lVar2;
  (**(code **)(*plVar6 + 0x468))(&local_150,&local_240);
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  if ((local_238 != '\0') && (local_240 != 0)) {
    FUN_00d50b20();
  }
  if ((local_248 != '\0') && (local_250 != 0)) {
    FUN_00d50b20();
  }
  local_230 = local_78;
  local_228 = '\0';
  FUN_01ccad10();
  if ((local_228 != '\0') && (local_230 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar6 + 0x478))();
  plVar9 = (longlong *)unaff_RDI[0x39];
  if (plVar9 != plVar6) {
    FUN_00d50b00();
    unaff_RDI[0x39] = (longlong)plVar6;
    if (plVar9 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar6 = (longlong *)FUN_001f28d0();
  uVar10 = (**(code **)(*plVar6 + 0x18))();
  local_70 = plVar6;
  FUN_01dcc290(uVar10,0);
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
  FUN_01ccad10();
  if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027e7c20;
  if (DAT_027e7c20 != 0) {
    FUN_00d50b00();
  }
  lVar5 = DAT_027e7c28;
  local_220 = lVar2;
  local_218 = '\x01';
  if (DAT_027e7c28 != 0) {
    FUN_00d50b00();
  }
  local_210 = lVar5;
  local_208 = '\x01';
  local_138 = 0;
  lVar2 = unaff_RDI[0x2a];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  plVar6 = local_70;
  local_138 = '\x01';
  local_140 = lVar2;
  (**(code **)(*local_70 + 0x468))(&local_140,&local_210);
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  if ((local_208 != '\0') && (local_210 != 0)) {
    FUN_00d50b20();
  }
  if ((local_218 != '\0') && (local_220 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar6 + 0x478))();
  plVar6 = (longlong *)unaff_RDI[0x3a];
  if (plVar6 != local_70) {
    FUN_00d50b00();
    unaff_RDI[0x3a] = (longlong)local_70;
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*unaff_RDI + 0x948))();
  plVar6 = (longlong *)unaff_RDI[0x36];
  plVar9 = plVar6;
  if (plVar6 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) {
        plVar9 = (longlong *)0x0;
        goto LAB_01be9023;
      }
      FUN_00d50b00();
      plVar6 = (longlong *)unaff_RDI[0x36];
      unaff_RDI[0x36] = (longlong)local_40;
      plVar9 = local_40;
    }
    else {
      local_38 = '\0';
      plVar9 = local_40;
LAB_01be9023:
      unaff_RDI[0x36] = (longlong)plVar9;
    }
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar9 = local_40;
    }
  }
  if ((local_38 != '\0') && (plVar9 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  *(longlong **)(unaff_RDI[0x36] + 0x150) = unaff_RDI;
  FUN_01beab60();
  plVar6 = local_50;
  FUN_01d97870();
  local_128 = 0;
  local_130 = unaff_RDI[0x36];
  if (local_130 != 0) {
    FUN_00d50b00();
  }
  local_128 = '\x01';
  FUN_01cf5bb0();
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)unaff_RDI[0x36] + 0x918))();
  uVar7 = (**(code **)(*unaff_RDI + 0x970))();
  local_a0 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_01be926f;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_01be9182:
    (**(code **)(*unaff_RDI + 0x640))();
    local_68 = (**(code **)(*local_40 + 0x580))();
    uStack_60 = extraout_XMM0_Dc;
    uStack_5c = extraout_XMM0_Dd;
    (**(code **)(*unaff_RDI + 0x640))();
    uVar7 = (**(code **)(*local_50 + 0x578))();
    auVar4._8_4_ = uStack_60;
    auVar4._0_8_ = local_68;
    auVar4._12_4_ = uStack_5c;
    auVar11._8_4_ = extraout_XMM0_Dc_00;
    auVar11._0_8_ = uVar7;
    auVar11._12_4_ = extraout_XMM0_Dd_00;
    auVar11 = insertps(auVar4,auVar11,0x10);
    (**(code **)(*local_a0 + 0x4d0))(0);
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01beab60();
    plVar6 = local_40;
    local_200 = local_a0;
    local_1f8 = '\0';
    FUN_01d9ab80();
    uVar7 = local_68;
    if ((local_1f8 != '\0') && (local_200 != (longlong *)0x0)) {
      FUN_00d50b20();
      uVar7 = local_68;
    }
    local_68._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
    if ((local_38 != '\0') && (plVar6 != (longlong *)0x0)) {
      local_68 = uVar7;
      FUN_00d50b20();
    }
    local_68._0_4_ = 0;
  }
  else {
    if (local_40 != (longlong *)0x0) goto LAB_01be9182;
LAB_01be926f:
    local_68._0_4_ = (undefined4)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
  }
  FUN_01beab60();
  plVar6 = local_40;
  FUN_01d94ee0();
  if ((local_38 != '\0') && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_0050ed30();
  *puVar8 = &DAT_0262a5e0;
  puVar8[2] = &DAT_0262b168;
  puVar8[0x3c] = &DAT_0262b1a8;
  puVar8[0x3f] = &DAT_0262b1d8;
  puVar8[0x40] = &DAT_0262b228;
  puVar8[0x48] = 0;
  puVar8[0x46] = 0;
  *(undefined1 *)(puVar8 + 0x47) = 0;
  (*DAT_0262a5f8)();
  puVar3 = (undefined8 *)unaff_RDI[0x3c];
  if (puVar3 == puVar8) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x3c] = (longlong)puVar8;
    if (puVar3 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar6 = (longlong *)unaff_RDI[0x3c];
  FUN_01beab60();
  plVar9 = local_50;
  FUN_01d97e80();
  (**(code **)(*local_40 + 0x4d8))();
  (**(code **)(*plVar6 + 0x4d0))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (plVar9 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = unaff_RDI[0x34];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_1e8 = '\x01';
  local_1f0 = lVar2;
  FUN_01a12210();
  if ((local_1e8 != '\0') && (local_1f0 != 0)) {
    FUN_00d50b20();
  }
  FUN_01beab60();
  plVar6 = local_40;
  local_118 = 0;
  local_120 = unaff_RDI[0x3c];
  if (local_120 != 0) {
    FUN_00d50b00();
  }
  local_118 = '\x01';
  FUN_01d97920();
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_1e0 = DAT_027e7c30;
  if (DAT_027e7c30 != 0) {
    FUN_00d50b00();
  }
  local_1d8 = '\x01';
  local_f8 = 0;
  lVar2 = unaff_RDI[0x3c];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_f8 = '\x01';
  local_100 = lVar2;
  FUN_00d41430(&local_100,&local_1e0);
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1d8 != '\0') && (local_1e0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_1d0 = DAT_027e7c38;
  if (DAT_027e7c38 != 0) {
    FUN_00d50b00();
  }
  local_1c8 = '\x01';
  local_d8 = 0;
  lVar2 = unaff_RDI[0x3c];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_d8 = '\x01';
  local_e0 = lVar2;
  FUN_00d41430(&local_e0,&local_1d0);
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1c8 != '\0') && (local_1d0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar6 = (longlong *)FUN_001c07a0();
  (**(code **)(*plVar6 + 0x18))();
  local_1c0 = DAT_02800140;
  if (DAT_02800140 != 0) {
    FUN_00d50b00();
  }
  local_1b8 = '\x01';
  local_1b0 = 0;
  local_1a8 = '\0';
  local_c8 = 0;
  lVar2 = unaff_RDI[0x2b];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_c8 = '\x01';
  local_d0 = lVar2;
  (**(code **)(*plVar6 + 0x468))(&local_d0,&local_1b0);
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1a8 != '\0') && (local_1b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1b8 != '\0') && (local_1c0 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02800140;
  if (DAT_02800140 != 0) {
    FUN_00d50b00();
  }
  local_1a0 = lVar2;
  local_198 = '\x01';
  FUN_01f09940();
  if ((local_198 != '\0') && (local_1a0 != 0)) {
    FUN_00d50b20();
  }
  local_b8 = 0;
  lVar2 = unaff_RDI[0x36];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_b8 = '\x01';
  local_c0 = lVar2;
  FUN_01ccad10();
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar6 + 0x478))();
  plVar9 = (longlong *)unaff_RDI[0x3b];
  if (plVar9 != plVar6) {
    FUN_00d50b00();
    unaff_RDI[0x3b] = (longlong)plVar6;
    if (plVar9 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_01be7d10();
  plVar9 = local_40;
  plVar6 = (longlong *)unaff_RDI[0x37];
  if (plVar6 == local_40) {
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
      plVar6 = (longlong *)unaff_RDI[0x37];
    }
    unaff_RDI[0x37] = (longlong)plVar9;
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (unaff_RDI[0x37] == 0) goto LAB_01be9aa8;
  (**(code **)(*unaff_RDI + 0x960))();
  plVar6 = (longlong *)unaff_RDI[0x38];
  plVar9 = plVar6;
  if (plVar6 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) {
        plVar9 = (longlong *)0x0;
        goto LAB_01be989b;
      }
      FUN_00d50b00();
      plVar6 = (longlong *)unaff_RDI[0x38];
      unaff_RDI[0x38] = (longlong)local_40;
      plVar9 = local_40;
    }
    else {
      local_38 = '\0';
      plVar9 = local_40;
LAB_01be989b:
      unaff_RDI[0x38] = (longlong)plVar9;
    }
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar9 = local_40;
    }
  }
  if ((local_38 != '\0') && (plVar9 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e53c20();
  uVar10 = (**(code **)(*local_40 + 0x4d8))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e3f820();
  uVar1 = *(uint *)((longlong)unaff_RDI + 0x204);
  FUN_01e53c20();
  auVar11 = blendps(auVar11,ZEXT416(uVar1),1);
  (**(code **)(*local_40 + 0x4d0))(uVar10,auVar11._0_8_);
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01beab60();
  local_a8 = 0;
  local_b0 = unaff_RDI[0x37];
  if (local_b0 != 0) {
    FUN_00d50b00();
  }
  local_a8 = '\x01';
  FUN_01e53c20();
  local_88 = local_50;
  local_80 = 0;
  if (local_48 == '\0') {
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_80 = '\x01';
  FUN_01d98360(&local_88,0);
  if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)unaff_RDI[0x38] + 0x4e8))();
  (**(code **)(*unaff_RDI + 0xa10))();
  (**(code **)(*unaff_RDI + 0xa18))();
LAB_01be9aa8:
  FUN_01dcb680();
  FUN_01d243a0();
  if ((int)unaff_RDI[0x3d] == 0) {
    FUN_01bead50();
  }
  FUN_01beaed0();
  FUN_00d50b20();
  plVar6 = local_78;
  if ((char)local_68 == '\0') {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  FUN_00d50b20();
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @002e5a30 — 4599 bytes
// str: ""MUMultiTrackItem""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x002e6356) */
/* WARNING: Removing unreachable block (ram,0x002e670e) */
/* WARNING: Removing unreachable block (ram,0x002e671a) */
/* WARNING: Removing unreachable block (ram,0x002e5ced) */
/* WARNING: Removing unreachable block (ram,0x002e5cf9) */
/* WARNING: Removing unreachable block (ram,0x002e5c85) */
/* WARNING: Removing unreachable block (ram,0x002e5c91) */
/* WARNING: Removing unreachable block (ram,0x002e688a) */
/* WARNING: Removing unreachable block (ram,0x002e6896) */
/* WARNING: Removing unreachable block (ram,0x002e6954) */
/* WARNING: Removing unreachable block (ram,0x002e6960) */
/* WARNING: Removing unreachable block (ram,0x002e69f7) */
/* WARNING: Removing unreachable block (ram,0x002e6a03) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_002e5a30(int param_1,longlong *param_2,char param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  undefined8 *puVar12;
  longlong lVar13;
  code *pcVar14;
  void *pvVar15;
  longlong lVar16;
  code *pcVar17;
  code **ppcVar18;
  code *pcVar19;
  int iVar20;
  char *pcVar21;
  longlong *plVar22;
  code *pcVar23;
  undefined7 uVar24;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_e0;
  char local_d8;
  code *local_b8;
  code *local_b0;
  code *local_98;
  code *local_80;
  char local_78 [8];
  code *local_70;
  undefined8 local_68;
  int local_60;
  char local_58 [8];
  code *local_50;
  char local_48;
  code *local_40;
  int local_38;
  
  local_38 = param_1;
  puVar12 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pcVar17 = (code *)&DAT_02572358;
  *puVar12 = &DAT_02572358;
  local_40 = DAT_02572370;
  (*DAT_02572370)();
  (**(code **)(*unaff_RDI + 0x9a0))();
  pcVar5 = local_80;
  if ((((local_78[0] == '\0') && (local_80 != (code *)0x0)) && (FUN_00d50b00(), local_78[0] != '\0')
      ) && (local_80 != (code *)0x0)) {
    FUN_00d50b20();
  }
  if ((code *)*unaff_RSI != (code *)0x0) {
    local_78[0] = '\0';
    local_80 = (code *)0x0;
    local_70 = (code *)*unaff_RSI;
    local_68 = 0xffffffff;
    local_60 = 0;
    iVar11 = -1;
    while( true ) {
      lVar13 = (longlong)(int)local_68;
      iVar20 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar20);
      if (*(int *)(local_70 + 0xc) <= iVar20) break;
      pcVar17 = *(code **)(*(longlong *)(local_70 + 0x10) + 8 + lVar13 * 8);
      local_80 = pcVar17;
      if ((DAT_026fe4e0 == '\0') && (iVar20 = ___cxa_guard_acquire(), iVar20 != 0)) {
        _DAT_026d7a88 = FUN_00d4fe50();
        _DAT_026d7a70 = "MUMultiTrackItem";
        _DAT_026d7a78 = 0x60;
        _DAT_026d7a80 = FUN_0006eae0;
        _DAT_026d7a90 = 0;
        uRam00000000026d7a98 = 0;
        _DAT_026d7aa0 = 0;
        _DAT_026d7b18 = 0;
        uRam00000000026d7b20 = 0;
        _DAT_026d7b28 = 0;
        DAT_026d7b2a = 1;
        _DAT_026d7aa8 = 0;
        uRam00000000026d7ab0 = 0;
        _DAT_026d7ab8 = 0;
        uRam00000000026d7ac0 = 0;
        _DAT_026d7ac8 = 0;
        uRam00000000026d7ad0 = 0;
        _DAT_026d7ad8 = 0;
        uRam00000000026d7ae0 = 0;
        _DAT_026d7ae8 = 0;
        uRam00000000026d7af0 = 0;
        _DAT_026d7af8 = 0;
        uRam00000000026d7b00 = 0;
        _DAT_026d7b08 = 0;
        uRam00000000026d7b10 = 0;
        DAT_026d7b33 = 0;
        _DAT_026d7b2b = 0;
        ___cxa_guard_release();
      }
      ppcVar18 = (code **)&DAT_02802688;
      if (pcVar17 != (code *)0x0) {
        (**(code **)(*(longlong *)pcVar17 + 0x360))();
        cVar10 = FUN_00e85ea0();
        ppcVar18 = &local_80;
        if (cVar10 == '\0') {
          ppcVar18 = (code **)&DAT_02802688;
        }
      }
      if (*(char *)(ppcVar18 + 1) == '\0') {
        if (*ppcVar18 != (code *)0x0) {
          FUN_00d50b00();
          goto LAB_002e5be1;
        }
LAB_002e5e1c:
        FUN_00083b20();
        goto LAB_002e5ee1;
      }
      *(undefined1 *)(ppcVar18 + 1) = 0;
      if (*ppcVar18 == (code *)0x0) goto LAB_002e5e1c;
LAB_002e5be1:
      FUN_002e58e0();
      pcVar17 = local_50;
      if (local_48 == '\0') {
        if (local_50 != (code *)0x0) {
          FUN_00d50b00();
          if ((local_48 != '\0') && (local_50 != (code *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_002e5c50;
        }
LAB_002e5cb0:
        bVar1 = true;
      }
      else {
        if (local_50 == (code *)0x0) goto LAB_002e5cb0;
LAB_002e5c50:
        if (iVar11 < 0) {
          iVar11 = FUN_01ed4e60();
LAB_002e5cfe:
          local_48 = '\0';
          local_50 = pcVar17;
          FUN_00d21140();
          if ((local_48 != '\0') && (local_50 != (code *)0x0)) {
            FUN_00d50b20();
          }
          bVar1 = false;
        }
        else {
          iVar20 = FUN_01ed4e60();
          bVar1 = true;
          if (iVar11 == iVar20) goto LAB_002e5cfe;
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (bVar1) goto LAB_002e5e1c;
      if (local_68._4_4_ != 0) {
        if (local_68._4_4_ < 1) {
          iVar20 = -local_68._4_4_;
        }
        else {
          local_68 = CONCAT44(local_68._4_4_,(int)local_68 - local_68._4_4_);
          FUN_00d23690();
          local_60 = local_60 + local_68._4_4_;
          iVar20 = 0;
        }
        local_68 = CONCAT44(iVar20,(int)local_68);
      }
    }
    pcVar17 = local_70;
    FUN_00083b20();
  }
  if (*(int *)((longlong)puVar12 + 0xc) == 0) {
LAB_002e5ee1:
    pcVar17 = (code *)0x0;
    goto LAB_002e6b7c;
  }
  pcVar14 = (code *)FUN_00e8fc40();
  FUN_00d4ff40();
  *(undefined **)pcVar14 = &DAT_02572358;
  (*local_40)();
  FUN_00d23310();
  pcVar6 = local_80;
  pcVar19 = (code *)CONCAT71((int7)((ulonglong)pcVar17 >> 8),local_78[0]);
  pcVar21 = local_58;
  if (local_78[0] != '\0') {
    pcVar21 = local_78;
  }
  local_58[0] = local_78[0];
  *pcVar21 = '\0';
  if ((local_78[0] != '\0') && (local_80 != (code *)0x0)) {
    FUN_00d50b20();
  }
  pvVar15 = _pthread_getspecific((pthread_key_t)pcVar19);
  if (pvVar15 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6a50();
  pvVar15 = _pthread_getspecific((pthread_key_t)pcVar19);
  if (pvVar15 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  pcVar17 = local_50;
  if (local_48 == '\0') {
    if (((local_50 != (code *)0x0) && (FUN_00d50b00(), local_48 != '\0')) &&
       (local_50 != (code *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_48 = '\0';
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (pcVar6 != (code *)0x0)) {
    FUN_00d50b20();
  }
  if (pcVar17 != (code *)0x0) {
    local_78[0] = '\0';
    local_80 = (code *)0x0;
    local_70 = pcVar17;
    local_68 = 0xffffffff;
    local_60 = 0;
    local_68._4_4_ = 0;
    while( true ) {
      if (local_68._4_4_ != 0) {
        if (local_68._4_4_ < 1) {
          iVar11 = -local_68._4_4_;
        }
        else {
          iVar11 = (int)local_68 - local_68._4_4_;
          local_68 = CONCAT44(local_68._4_4_,iVar11);
          FUN_00d23690();
          local_60 = local_60 + local_68._4_4_;
          iVar11 = 0;
        }
        local_68 = CONCAT44(iVar11,(int)local_68);
      }
      lVar13 = (longlong)(int)local_68;
      iVar11 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar11);
      if (*(int *)(local_70 + 0xc) <= iVar11) break;
      local_80 = *(code **)(*(longlong *)(local_70 + 0x10) + 8 + lVar13 * 8);
      local_48 = '\0';
      local_50 = local_80;
      cVar10 = FUN_00d23d70();
      if ((local_48 != '\0') && (local_50 != (code *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar10 != '\0') {
        local_50 = local_80;
        local_48 = '\0';
        FUN_00d21140();
        if ((local_48 != '\0') && (local_50 != (code *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    pcVar19 = local_70;
    FUN_000be170();
    FUN_00d50b20();
  }
  FUN_00757c60();
  pcVar6 = local_80;
  if ((((local_78[0] == '\0') && (local_80 != (code *)0x0)) && (FUN_00d50b00(), local_78[0] != '\0')
      ) && (local_80 != (code *)0x0)) {
    FUN_00d50b20();
  }
  pvVar15 = _pthread_getspecific((pthread_key_t)pcVar19);
  if (pvVar15 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pcVar7 = local_80;
  if (local_78[0] == '\0') {
    if (local_80 != (code *)0x0) {
      FUN_00d50b00();
      if ((local_78[0] != '\0') && (local_80 != (code *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_002e6111;
    }
    plVar22 = (longlong *)*param_2;
    if (plVar22 == (longlong *)0x0) goto LAB_002e629a;
LAB_002e611d:
    if ((DAT_026fe4e0 == '\0') && (iVar11 = ___cxa_guard_acquire(), iVar11 != 0)) {
      _DAT_026d7a88 = FUN_00d4fe50();
      _DAT_026d7a70 = "MUMultiTrackItem";
      _DAT_026d7a78 = 0x60;
      _DAT_026d7a80 = FUN_0006eae0;
      _DAT_026d7a90 = 0;
      uRam00000000026d7a98 = 0;
      _DAT_026d7aa0 = 0;
      _DAT_026d7b18 = 0;
      uRam00000000026d7b20 = 0;
      _DAT_026d7b28 = 0;
      DAT_026d7b2a = 1;
      _DAT_026d7aa8 = 0;
      uRam00000000026d7ab0 = 0;
      _DAT_026d7ab8 = 0;
      uRam00000000026d7ac0 = 0;
      _DAT_026d7ac8 = 0;
      uRam00000000026d7ad0 = 0;
      _DAT_026d7ad8 = 0;
      uRam00000000026d7ae0 = 0;
      _DAT_026d7ae8 = 0;
      uRam00000000026d7af0 = 0;
      _DAT_026d7af8 = 0;
      uRam00000000026d7b00 = 0;
      _DAT_026d7b08 = 0;
      uRam00000000026d7b10 = 0;
      DAT_026d7b33 = 0;
      _DAT_026d7b2b = 0;
      ___cxa_guard_release();
    }
    (**(code **)(*plVar22 + 0x360))();
    cVar10 = FUN_00e85ea0();
    if (cVar10 == '\0') {
      param_2 = &DAT_02802688;
    }
    lVar13 = *param_2;
    lVar16 = param_2[1];
    if (((char)lVar16 == '\0') || (lVar13 == 0)) {
      if (lVar13 != 0) goto LAB_002e620a;
      bVar1 = false;
    }
    else {
      FUN_00d50b00();
LAB_002e620a:
      FUN_002e58e0();
      local_40 = local_80;
      pcVar19 = local_80;
      if (local_80 == (code *)0x0) {
        local_40 = (code *)0x0;
        bVar1 = false;
      }
      else {
        bVar1 = true;
        if (((local_78[0] == '\0') && (FUN_00d50b00(), local_78[0] != '\0')) &&
           (local_80 != (code *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((char)lVar16 != '\0') {
        FUN_00d50b20();
      }
      if (local_40 != (code *)0x0) goto LAB_002e62a9;
    }
    local_40 = (code *)0x0;
    pcVar17 = (code *)0x0;
  }
  else {
LAB_002e6111:
    plVar22 = (longlong *)*param_2;
    if (plVar22 != (longlong *)0x0) goto LAB_002e611d;
    lVar13 = 0;
    if (pcVar7 == (code *)0x0) {
LAB_002e629a:
      lVar13 = 0;
      bVar1 = false;
      local_40 = (code *)0x0;
    }
    else {
      FUN_00d50b00();
      bVar1 = true;
      local_40 = pcVar7;
    }
LAB_002e62a9:
    pvVar15 = _pthread_getspecific((pthread_key_t)pcVar19);
    if (pvVar15 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cade0();
    pcVar8 = local_80;
    if ((local_78[0] != '\0') && (local_80 != (code *)0x0)) {
      FUN_00d50b20();
    }
    if ((pcVar7 != local_40) && (pcVar14 != (code *)0x0)) {
      local_78[0] = '\0';
      local_80 = (code *)0x0;
      local_68 = 0xffffffff;
      local_60 = 0;
      local_70 = pcVar14;
      while( true ) {
        lVar16 = (longlong)(int)local_68;
        iVar11 = (int)local_68 + 1;
        local_68 = CONCAT44(local_68._4_4_,iVar11);
        if (*(int *)(local_70 + 0xc) <= iVar11) break;
        local_80 = *(code **)(*(longlong *)(local_70 + 0x10) + 8 + lVar16 * 8);
        pvVar15 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_70 + 0x10));
        if (pvVar15 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6160();
        iVar11 = *(int *)(local_50 + 0xc);
        if ((local_48 != '\0') && (local_50 != (code *)0x0)) {
          FUN_00d50b20();
        }
        if ((iVar11 != 0) || (local_80 == local_40)) {
          FUN_000be170();
          pcVar17 = (code *)0x0;
          goto joined_r0x002e649a;
        }
        lVar13 = 0;
        if (local_68._4_4_ != 0) {
          if (local_68._4_4_ < 1) {
            iVar11 = -local_68._4_4_;
          }
          else {
            local_68 = CONCAT44(local_68._4_4_,(int)local_68 - local_68._4_4_);
            FUN_00d23690();
            local_60 = local_60 + local_68._4_4_;
            iVar11 = 0;
          }
          local_68 = CONCAT44(iVar11,(int)local_68);
        }
      }
      pcVar19 = local_70;
      FUN_000be170();
    }
    pcVar17 = (code *)CONCAT71((int7)((ulonglong)lVar13 >> 8),1);
    if (param_3 == '\0') {
      if (pcVar8 == (code *)0x0) {
        local_b8 = (code *)0x0;
        bVar3 = false;
      }
      else {
        pvVar15 = _pthread_getspecific((pthread_key_t)pcVar19);
        if (pvVar15 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e7fb0();
        local_b8 = local_80;
        pcVar19 = local_80;
        if (local_80 == (code *)0x0) {
          bVar3 = false;
          local_b8 = (code *)0x0;
        }
        else {
          bVar3 = true;
          if (((local_78[0] == '\0') && (FUN_00d50b00(), local_78[0] != '\0')) &&
             (local_80 != (code *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      if (pcVar14 != (code *)0x0) {
        local_78[0] = '\0';
        local_80 = (code *)0x0;
        local_60 = 0;
        local_68 = 0;
        if (*(int *)(pcVar14 + 0xc) < 1) {
          local_b0 = (code *)0x0;
          bVar4 = false;
          local_70 = pcVar14;
        }
        else {
          lVar13 = 0;
          bVar4 = false;
          local_b0 = (code *)0x0;
          local_70 = pcVar14;
          do {
            pcVar17 = *(code **)(*(longlong *)(pcVar14 + 0x10) + lVar13 * 8);
            local_80 = pcVar17;
            if (pcVar8 == (code *)0x0) {
              local_98 = (code *)0x0;
              bVar2 = false;
            }
            else {
              pvVar15 = _pthread_getspecific((pthread_key_t)pcVar19);
              if (pvVar15 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012e7fb0();
              local_98 = local_50;
              pcVar19 = local_50;
              if (local_50 == (code *)0x0) {
                bVar2 = false;
                local_98 = (code *)0x0;
              }
              else {
                bVar2 = true;
                if (((local_48 == '\0') && (FUN_00d50b00(), local_48 != '\0')) &&
                   (local_50 != (code *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            pvVar15 = _pthread_getspecific((pthread_key_t)pcVar19);
            if (pvVar15 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e6a50();
            pvVar15 = _pthread_getspecific((pthread_key_t)pcVar19);
            if (pvVar15 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e68b0();
            iVar11 = local_38;
            if ((local_48 != '\0') && (local_50 != (code *)0x0)) {
              FUN_00d50b20();
            }
            if (local_b0 != (code *)0x0) {
              pvVar15 = _pthread_getspecific((pthread_key_t)pcVar19);
              if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
                pcVar19 = local_40;
              }
              FUN_012e6160();
              local_50 = local_b0;
              local_48 = '\0';
              iVar11 = FUN_00d237a0();
              if ((local_48 != '\0') && (local_50 != (code *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_d8 != '\0') && (local_e0 != 0)) {
                FUN_00d50b20();
              }
              iVar11 = iVar11 + 1;
            }
            pvVar15 = _pthread_getspecific((pthread_key_t)pcVar19);
            if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
              pcVar19 = local_40;
            }
            FUN_012e6160();
            if (*(int *)(local_50 + 0xc) < iVar11) {
              iVar11 = *(int *)(local_50 + 0xc);
            }
            if ((local_48 != '\0') && (local_50 != (code *)0x0)) {
              FUN_00d50b20();
            }
            pvVar15 = _pthread_getspecific((pthread_key_t)pcVar19);
            if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
              pcVar19 = local_40;
            }
            FUN_012e66e0();
            if (pcVar8 != (code *)0x0) {
              pvVar15 = _pthread_getspecific((pthread_key_t)pcVar19);
              if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
                pcVar19 = local_98;
              }
              FUN_0150fe10();
              pvVar15 = _pthread_getspecific((pthread_key_t)pcVar19);
              if (pvVar15 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0150f380();
              if ((local_48 != '\0') && (local_50 != (code *)0x0)) {
                FUN_00d50b20();
              }
              pvVar15 = _pthread_getspecific((pthread_key_t)pcVar19);
              if (pvVar15 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0150f1c0();
            }
            if (pcVar17 == local_b0) {
              pcVar23 = local_b0;
              bVar9 = bVar4;
              if ((!bVar4) && (pcVar17 != (code *)0x0)) {
                FUN_00d50b00();
                bVar9 = true;
              }
            }
            else {
              if (pcVar17 != (code *)0x0) {
                FUN_00d50b00();
              }
              bVar9 = true;
              pcVar23 = pcVar17;
              if ((bVar4) && (local_b0 != (code *)0x0)) {
                FUN_00d50b20();
              }
            }
            bVar4 = bVar9;
            FUN_01d243a0();
            local_38 = iVar11;
            if ((bVar2) && (local_98 != (code *)0x0)) {
              FUN_00d50b20();
            }
            lVar13 = lVar13 + 1;
            local_68 = CONCAT44(local_68._4_4_,(int)lVar13);
            local_b0 = pcVar23;
          } while ((int)lVar13 < *(int *)(pcVar14 + 0xc));
        }
        FUN_000be170();
        pcVar17 = pcVar14;
        if ((bVar4) && (local_b0 != (code *)0x0)) {
          FUN_00d50b20();
        }
      }
      uVar24 = (undefined7)((ulonglong)pcVar17 >> 8);
      if (bVar3) {
        pcVar17 = (code *)CONCAT71(uVar24,1);
        if (local_b8 != (code *)0x0) {
          FUN_00d50b20();
        }
      }
      else {
        pcVar17 = (code *)CONCAT71(uVar24,1);
      }
    }
  }
joined_r0x002e649a:
  if (pcVar7 != (code *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar1) && (local_40 != (code *)0x0)) {
    FUN_00d50b20();
  }
  if (pcVar6 != (code *)0x0) {
    FUN_00d50b20();
  }
  if (pcVar14 != (code *)0x0) {
    FUN_00d50b20();
  }
LAB_002e6b7c:
  if (pcVar5 != (code *)0x0) {
    FUN_00d50b20();
  }
  if (puVar12 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return (ulonglong)pcVar17 & 0xffffffff;
}




// ============================================================
// @004f6020 — 2305 bytes
// str: ""MUMultiTrackItem""
// str: ""MDTransferPluginTrackHeaderViewController""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_004f6020(undefined8 param_1,byte param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong **pplVar8;
  int iVar9;
  ulonglong uVar10;
  longlong unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  longlong local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined4 local_ac;
  longlong *local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  FUN_004f5840();
  if (local_70 == '\0') {
    if (local_78 == (longlong *)0x0) {
      return 0;
    }
    local_c0 = local_78;
    FUN_00d50b00();
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_c0 = local_78;
    if (local_78 == (longlong *)0x0) {
      return 0;
    }
  }
  if (*(longlong *)(unaff_RDI + 0xd0) == 0) {
LAB_004f61d8:
    uVar10 = 0;
    goto LAB_004f68e8;
  }
  uVar6 = FUN_004f5d60();
  uVar10 = (ulonglong)uVar6;
  if ((param_2 & (byte)uVar6) != 1) goto LAB_004f68e8;
  FUN_01c00e50();
  FUN_01bbfb40();
  plVar1 = local_40;
  FUN_000829c0();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    FUN_00e85ea0();
  }
  FUN_002efed0();
  plVar1 = local_78;
  if (local_70 == '\0') {
    if (((local_78 != (longlong *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
       (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70 = '\0';
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) goto LAB_004f61d8;
  FUN_01c00e50();
  FUN_01bbfb40();
  FUN_01beea30();
  local_50 = local_78;
  if (local_70 == '\0') {
    if (((local_78 != (longlong *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
       (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70 = '\0';
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  FUN_01c00e50();
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_78 = plVar2;
  local_70 = '\0';
  cVar3 = FUN_00d23d70();
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    FUN_01c00e50();
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
    FUN_003bc740();
    plVar2 = local_78;
    if (local_50 == local_78) {
LAB_004f6356:
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_70 == '\0') {
        if (local_78 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if (local_50 == (longlong *)0x0) {
          local_50 = plVar2;
        }
        else {
          local_50 = plVar2;
          FUN_00d50b20();
        }
        goto LAB_004f6356;
      }
      if (local_50 != (longlong *)0x0) {
        local_50 = local_78;
        FUN_00d50b20();
      }
      local_70 = '\0';
      local_50 = plVar2;
    }
    if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_e0 = local_50;
  local_d8 = '\0';
  FUN_01c00e50();
  FUN_01bbfb40();
  FUN_01beead0();
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
  uVar4 = FUN_0071fb80();
  uVar5 = FUN_0071fab0();
  local_c8 = '\0';
  local_d0 = 0;
  FUN_004b0830(&local_98,&local_e0,uVar4,uVar5);
  plVar2 = local_78;
  if (local_70 == '\0') {
    if (((local_78 != (longlong *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
       (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70 = '\0';
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_ac = (**(code **)(**(longlong **)(unaff_RDI + 0xd0) + 0x920))();
  uVar10 = 0;
  if (plVar2 != (longlong *)0x0) {
    local_48 = plVar1;
    local_70 = '\0';
    local_78 = (longlong *)0x0;
    local_b8 = plVar2;
    local_68 = plVar2;
    local_60 = 0xffffffff;
    local_58 = 0;
    uVar10 = 0;
    uVar11 = extraout_XMM0_Da;
    while( true ) {
      iVar9 = (int)uVar10;
      if (iVar9 != 0) {
        if (iVar9 < 1) {
          uVar10 = (ulonglong)(uint)-iVar9;
        }
        else {
          local_60 = CONCAT44(local_60._4_4_,(int)local_60 - iVar9);
          FUN_00d23690(uVar11,uVar10);
          local_58 = local_58 + iVar9;
          uVar10 = 0;
        }
        local_60 = CONCAT44((int)uVar10,(int)local_60);
      }
      lVar7 = (longlong)(int)local_60;
      iVar9 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar9);
      if (*(int *)((longlong)local_68 + 0xc) <= iVar9) break;
      plVar1 = *(longlong **)(local_68[2] + 8 + lVar7 * 8);
      local_78 = plVar1;
      if ((DAT_026fe4e0 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
        _DAT_026d7a88 = FUN_00d4fe50();
        _DAT_026d7a70 = "MUMultiTrackItem";
        _DAT_026d7a78 = 0x60;
        _DAT_026d7a80 = FUN_0006eae0;
        _DAT_026d7a90 = 0;
        uRam00000000026d7a98 = 0;
        _DAT_026d7aa0 = 0;
        _DAT_026d7b18 = 0;
        uRam00000000026d7b20 = 0;
        _DAT_026d7b28 = 0;
        DAT_026d7b2a = 1;
        _DAT_026d7aa8 = 0;
        uRam00000000026d7ab0 = 0;
        _DAT_026d7ab8 = 0;
        uRam00000000026d7ac0 = 0;
        _DAT_026d7ac8 = 0;
        uRam00000000026d7ad0 = 0;
        _DAT_026d7ad8 = 0;
        uRam00000000026d7ae0 = 0;
        _DAT_026d7ae8 = 0;
        uRam00000000026d7af0 = 0;
        _DAT_026d7af8 = 0;
        uRam00000000026d7b00 = 0;
        _DAT_026d7b08 = 0;
        uRam00000000026d7b10 = 0;
        DAT_026d7b33 = 0;
        _DAT_026d7b2b = 0;
        ___cxa_guard_release();
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        FUN_00e85ea0();
      }
      uVar11 = FUN_01bc1260();
      plVar1 = local_40;
      if ((DAT_02700410 == '\0') &&
         (iVar9 = ___cxa_guard_acquire(), uVar11 = extraout_XMM0_Da_01, iVar9 != 0)) {
        _DAT_02700360 = FUN_00138900();
        _DAT_02700348 = "MDTransferPluginTrackHeaderViewController";
        _DAT_02700350 = 0xd8;
        _DAT_02700358 = FUN_00306f50;
        _DAT_02700368 = 0;
        uRam0000000002700370 = 0;
        _DAT_02700378 = 0;
        _DAT_027003f0 = 0;
        uRam00000000027003f8 = 0;
        _DAT_02700400 = 0;
        DAT_02700402 = 1;
        _DAT_02700380 = 0;
        uRam0000000002700388 = 0;
        _DAT_02700390 = 0;
        uRam0000000002700398 = 0;
        _DAT_027003a0 = 0;
        uRam00000000027003a8 = 0;
        _DAT_027003b0 = 0;
        uRam00000000027003b8 = 0;
        _DAT_027003c0 = 0;
        uRam00000000027003c8 = 0;
        _DAT_027003d0 = 0;
        uRam00000000027003d8 = 0;
        _DAT_027003e0 = 0;
        uRam00000000027003e8 = 0;
        DAT_0270040b = 0;
        _DAT_02700403 = 0;
        uVar11 = ___cxa_guard_release();
      }
      pplVar8 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar3 = FUN_00e85ea0();
        pplVar8 = &local_40;
        uVar11 = extraout_XMM0_Da_00;
        if (cVar3 == '\0') {
          pplVar8 = (longlong **)&DAT_02802688;
        }
      }
      plVar1 = *pplVar8;
      if (*(char *)(pplVar8 + 1) == '\0') {
        if (plVar1 != (longlong *)0x0) {
          uVar11 = FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar8 + 1) = 0;
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        uVar11 = FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_004f5840();
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_004f66e0;
          }
        }
        else if (local_40 != (longlong *)0x0) {
LAB_004f66e0:
          if (plVar1[0x1a] != 0) {
            FUN_005366c0();
            FUN_004f5aa0();
            FUN_01cee390();
          }
          FUN_00d50b20();
        }
        uVar11 = FUN_00d50b20();
      }
      uVar10 = local_60 >> 0x20;
    }
    FUN_00083b20();
    FUN_00d50b20();
  }
  if (local_50 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  uVar10 = CONCAT71((int7)(uVar10 >> 8),1);
  FUN_00d50b20();
LAB_004f68e8:
  FUN_00d50b20();
  return uVar10;
}




// ============================================================
// @002e8930 — 1825 bytes
// ============================================================

void FUN_002e8930(void)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar4;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
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
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  lVar4 = *unaff_RSI;
  if (unaff_RDI[0x4b] == lVar4) {
    return;
  }
  unaff_RDI[0x4b] = lVar4;
  if (lVar4 == 0) {
    lVar4 = 0;
    if (unaff_RDI[0x47] != 0) {
      FUN_00d50130();
      lVar4 = unaff_RDI[0x47];
    }
    if (lVar4 != 0) {
      unaff_RDI[0x47] = 0;
      FUN_00d50b20();
    }
    if (unaff_RDI[0x58] == 0) {
      return;
    }
    unaff_RDI[0x58] = 0;
    FUN_00d50b20();
    return;
  }
  FUN_00d50b00();
  local_158 = DAT_026fe468;
  if (DAT_026fe468 != 0) {
    FUN_00d50b00();
  }
  lVar4 = DAT_026fe470;
  local_150 = '\x01';
  if (DAT_026fe470 != 0) {
    FUN_00d50b00();
  }
  local_148 = lVar4;
  local_140 = '\x01';
  local_138 = unaff_RDI[0x4b];
  local_130 = '\0';
  FUN_000bf690(&local_148,&local_158,&local_138);
  plVar1 = (longlong *)unaff_RDI[0x47];
  plVar3 = plVar1;
  if (plVar1 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == (longlong *)0x0) {
        plVar3 = (longlong *)0x0;
        goto LAB_002e8a1e;
      }
      FUN_00d50b00();
      plVar1 = (longlong *)unaff_RDI[0x47];
      unaff_RDI[0x47] = (longlong)local_38;
      plVar3 = local_38;
    }
    else {
      local_30 = '\0';
      plVar3 = local_38;
LAB_002e8a1e:
      unaff_RDI[0x47] = (longlong)plVar3;
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar3 = local_38;
    }
  }
  if ((local_30 != '\0') && (plVar3 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  if ((local_140 != '\0') && (local_148 != 0)) {
    FUN_00d50b20();
  }
  if ((local_150 != '\0') && (local_158 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_128 = DAT_026fe478;
  if (DAT_026fe478 != 0) {
    FUN_00d50b00();
  }
  local_120 = '\x01';
  (**(code **)(*(longlong *)unaff_RDI[0x4b] + 0x498))();
  local_78 = local_b8;
  local_70 = 0;
  if (local_b0 == '\0') {
    if (local_b8 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_b0 = '\0';
  }
  local_70 = '\x01';
  FUN_0006e1c0();
  FUN_00e86210();
  local_118 = DAT_026fe480;
  if (DAT_026fe480 != 0) {
    FUN_00d50b00();
  }
  local_110 = '\x01';
  FUN_00c841b0();
  local_68 = local_a8;
  local_60 = 0;
  if (local_a0 == '\0') {
    if (local_a8 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_a0 = '\0';
  }
  local_60 = '\x01';
  local_100 = '\0';
  local_108 = 0;
  FUN_000bfbc0(&local_78,&local_128,0xa0,&local_68);
  plVar1 = (longlong *)unaff_RDI[0x58];
  plVar3 = plVar1;
  if (plVar1 == local_38) goto LAB_002e8cf1;
  if (local_30 == '\0') {
    if (local_38 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
      goto LAB_002e8ca6;
    }
    FUN_00d50b00();
    plVar1 = (longlong *)unaff_RDI[0x58];
    unaff_RDI[0x58] = (longlong)local_38;
    plVar3 = local_38;
  }
  else {
    local_30 = '\0';
    plVar3 = local_38;
LAB_002e8ca6:
    unaff_RDI[0x58] = (longlong)plVar3;
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
    plVar3 = local_38;
  }
LAB_002e8cf1:
  if ((local_30 != '\0') && (plVar3 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_0006e1c0();
  FUN_00e86210();
  local_f8 = DAT_026d83d8;
  if (DAT_026d83d8 != 0) {
    FUN_00d50b00();
  }
  local_f0 = '\x01';
  FUN_00c841b0();
  local_58 = local_38;
  local_50 = 0;
  if (local_30 == '\0') {
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  local_50 = '\x01';
  local_e0 = '\0';
  local_e8 = 0;
  FUN_000bfd00();
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  FUN_000823a0();
  FUN_00e86210();
  local_d8 = DAT_026f6f60;
  if (DAT_026f6f60 != 0) {
    FUN_00d50b00();
  }
  local_d0 = '\x01';
  FUN_00c841b0();
  local_48 = local_38;
  local_40 = 0;
  if (local_30 == '\0') {
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  local_40 = '\x01';
  local_c0 = '\0';
  local_c8 = 0;
  FUN_000bfd00();
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_38 + 0x450))();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    cVar2 = FUN_00bd2290();
    if ((cVar2 == '\0') && (cVar2 = FUN_00751ba0(), cVar2 != '\0')) {
      FUN_016ae5f0();
    }
    (**(code **)(*unaff_RDI + 0x9e8))();
  }
  else {
    (**(code **)(*unaff_RDI + 0x9e8))();
  }
  return;
}




// ============================================================
// @002e7520 — 1427 bytes
// ============================================================

void FUN_002e7520(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *unaff_RDI;
  bool bVar9;
  longlong local_f8;
  char local_f0;
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
  longlong local_78;
  char local_70;
  longlong *local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01f27fe0();
  cVar6 = (**(code **)(*local_40 + 0x450))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar6 == '\0') {
    plVar7 = (longlong *)FUN_00e8fc40();
    FUN_001d7da0();
    (**(code **)(*plVar7 + 0x18))();
    lVar2 = DAT_027296a0;
    if (DAT_027296a0 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_026fe440;
    if (DAT_026fe440 != 0) {
      FUN_00d50b00();
    }
    local_f8 = lVar3;
    local_f0 = '\x01';
    local_e8 = 0;
    local_e0 = '\0';
    FUN_00d31230(&local_e8,&local_f8);
    local_60 = local_40;
    local_58 = 0;
    local_d8 = DAT_026fe448;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        local_d8 = DAT_026fe448;
      }
    }
    else {
      local_38 = '\0';
    }
    local_58 = '\x01';
    DAT_026fe448 = local_d8;
    if (local_d8 != 0) {
      local_58 = '\x01';
      FUN_00d50b00();
    }
    local_d0 = '\x01';
    FUN_01d5d9b0();
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    *unaff_RDI = plVar7;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return;
  }
  FUN_0027c9f0();
  plVar7 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_026fe450;
  if (DAT_026fe450 != 0) {
    FUN_00d50b00();
  }
  local_c8 = lVar2;
  local_c0 = '\x01';
  FUN_01d5e6e0();
  plVar4 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if (plVar4 == (longlong *)0x0) goto LAB_002e7a7f;
  FUN_01d64cb0();
  plVar8 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_68 = plVar8;
  FUN_01d5dc80();
  local_b8 = DAT_027296a0;
  if (DAT_027296a0 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_026fe440;
  local_b0 = '\x01';
  if (DAT_026fe440 != 0) {
    FUN_00d50b00();
  }
  local_a8 = lVar2;
  local_a0 = '\x01';
  local_98 = 0;
  local_90 = '\0';
  FUN_00d31230(&local_98,&local_a8);
  local_50 = local_40;
  local_48 = 0;
  local_88 = DAT_026fe448;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      local_88 = DAT_026fe448;
    }
  }
  else {
    local_38 = '\0';
  }
  local_48 = '\x01';
  DAT_026fe448 = local_88;
  if (local_88 != 0) {
    local_48 = '\x01';
    FUN_00d50b00();
  }
  local_80 = '\x01';
  FUN_01d5d9b0();
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_026fe458;
  if (DAT_026fe458 != 0) {
    FUN_00d50b00();
  }
  local_78 = lVar2;
  local_70 = '\x01';
  FUN_01d5e6e0();
  plVar5 = local_40;
  plVar8 = plVar4;
  plVar1 = plVar4;
  if (plVar4 == local_40) {
joined_r0x002e7a04:
    bVar9 = plVar8 == (longlong *)0x0;
    if ((local_38 != '\0') && (plVar1 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
      plVar8 = plVar5;
      plVar1 = local_40;
      goto joined_r0x002e7a04;
    }
    FUN_00d50b20();
    local_38 = '\0';
    bVar9 = local_40 == (longlong *)0x0;
    plVar8 = local_40;
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = local_68;
  if (!bVar9) {
    FUN_01d66e50();
  }
  *unaff_RDI = plVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_002e7a7f:
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar4 == (longlong *)0x0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  return;
}




// ============================================================
// @004f7da0 — 1253 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x004f7e9d) */
/* WARNING: Removing unreachable block (ram,0x004f7ea6) */

void FUN_004f7da0(pthread_key_t param_1)

{
  char cVar1;
  undefined8 *puVar2;
  void *pvVar3;
  longlong lVar4;
  undefined8 *unaff_RDI;
  undefined8 *puVar5;
  undefined4 uVar6;
  float fVar7;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_024ff098;
  puVar2[7] = 0;
  *(undefined2 *)(puVar2 + 8) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x44) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x4c) = 0;
  *(undefined1 *)((longlong)puVar2 + 0x54) = 0;
  FUN_00d500e0();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar6 = FUN_012f4ba0();
  lVar4 = DAT_02708bf0;
  if (DAT_02708bf0 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_40 = lVar4;
  local_38 = '\0';
  FUN_00ca0840(uVar6,&local_40);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  puVar5 = puVar2;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    puVar5 = (undefined8 *)puVar2[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar1 = FUN_012f49e0();
  if (*(char *)(puVar5 + 8) != cVar1) {
    if ((*(char *)(puVar5 + 8) == '\0') && (*(char *)((longlong)puVar5 + 0x41) != '\0')) {
      FUN_00d64850();
      *(undefined1 *)((longlong)puVar5 + 0x41) = 0;
      FUN_00d64910();
      FUN_004f7ad0();
    }
    FUN_00d64850();
    *(char *)(puVar5 + 8) = cVar1;
    FUN_00d64910();
    FUN_004f7ad0();
  }
  pvVar3 = _pthread_getspecific(param_1);
  puVar5 = puVar2;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    puVar5 = (undefined8 *)puVar2[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar1 = FUN_012f49f0();
  if (*(char *)((longlong)puVar5 + 0x41) != cVar1) {
    if ((*(char *)((longlong)puVar5 + 0x41) == '\0') && (*(char *)(puVar5 + 8) != '\0')) {
      FUN_00d64850();
      *(undefined1 *)(puVar5 + 8) = 0;
      FUN_00d64910();
      FUN_004f7ad0();
    }
    FUN_00d64850();
    *(char *)((longlong)puVar5 + 0x41) = cVar1;
    FUN_00d64910();
    FUN_004f7ad0();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7d10();
  lVar4 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7d10();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011f2610();
    lVar4 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      pvVar3 = _pthread_getspecific(param_1);
      puVar5 = puVar2;
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        puVar5 = (undefined8 *)puVar2[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
      }
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar7 = (float)FUN_012a46e0();
      if ((*(float *)((longlong)puVar5 + 0x44) != fVar7) ||
         (NAN(*(float *)((longlong)puVar5 + 0x44)) || NAN(fVar7))) {
        FUN_00d64850();
        *(float *)((longlong)puVar5 + 0x44) = fVar7;
        FUN_00d64910();
        FUN_004f7ad0();
      }
      FUN_00d50b20();
    }
  }
  *unaff_RDI = puVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @004f73e0 — 1251 bytes
// str: ""isSolo""
// str: ""setIsSolo""
// str: ""isMuted""
// str: ""setIsMuted""
// str: ""setTrackHeaderHeight""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f73e0(void)

{
  int iVar1;
  
  if (DAT_028098e8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028098b0 = FUN_004fb760();
      _DAT_028098a8 = "isSolo";
      _DAT_028098b8 = 0;
      _DAT_028098c0 = &DAT_02709a40;
      _DAT_028098c8 = FUN_004fb960;
      _DAT_028098d0 = FUN_004f78f0;
      _DAT_028098d8 = 0;
      uRam00000000028098e0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02809930 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028098f8 = FUN_004fb760();
      _DAT_028098f0 = "setIsSolo";
      _DAT_02809900 = 0;
      _DAT_02809908 = &DAT_02709a42;
      _DAT_02809910 = FUN_004fb990;
      _DAT_02809918 = FUN_004f7900;
      _DAT_02809920 = 0;
      uRam0000000002809928 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02809978 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02809940 = FUN_004fb760();
      _DAT_02809938 = "isMuted";
      _DAT_02809948 = 0;
      _DAT_02809950 = &DAT_02709a40;
      _DAT_02809958 = FUN_004fb960;
      _DAT_02809960 = FUN_004f7980;
      _DAT_02809968 = 0;
      uRam0000000002809970 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028099c0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02809988 = FUN_004fb760();
      _DAT_02809980 = "setIsMuted";
      _DAT_02809990 = 0;
      _DAT_02809998 = &DAT_02709a42;
      _DAT_028099a0 = FUN_004fb990;
      _DAT_028099a8 = FUN_004f7990;
      _DAT_028099b0 = 0;
      uRam00000000028099b8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02809a08 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028099d0 = FUN_004fb760();
      _DAT_028099c8 = "setTrackHeaderHeight";
      _DAT_028099d8 = 0;
      _DAT_028099e0 = &DAT_02709a45;
      _DAT_028099e8 = FUN_004fb9b0;
      _DAT_028099f0 = FUN_004f7a00;
      _DAT_028099f8 = 0;
      uRam0000000002809a00 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02809a50 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02809a18 = FUN_004fb760();
      _DAT_02809a10 = "setVolume";
      _DAT_02809a20 = 0;
      _DAT_02809a28 = &DAT_02709a48;
      _DAT_02809a30 = FUN_004fb9d0;
      _DAT_02809a38 = FUN_004f7a20;
      _DAT_02809a40 = 0;
      uRam0000000002809a48 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02809a98 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02809a60 = FUN_004fb760();
      _DAT_02809a58 = "getVolume";
      _DAT_02809a68 = 0;
      _DAT_02809a70 = &DAT_02709a4b;
      _DAT_02809a78 = FUN_004fba00;
      _DAT_02809a80 = FUN_004f7a80;
      _DAT_02809a88 = 0;
      uRam0000000002809a90 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02809ae0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02809aa8 = FUN_004fb760();
      _DAT_02809aa0 = "_setVolume";
      _DAT_02809ab0 = 0;
      _DAT_02809ab8 = &DAT_02709a4d;
      _DAT_02809ac0 = FUN_004fba30;
      _DAT_02809ac8 = FUN_004fac10;
      _DAT_02809ad0 = 0;
      uRam0000000002809ad8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @01be82b0 — 1080 bytes
// str: ""MUMultiTrackItem""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01be82b0(void)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *unaff_RDI;
  
  FUN_01e3b710();
  *(undefined4 *)((longlong)unaff_RDI + 0x204) = 0x43480000;
  *(undefined1 *)((longlong)unaff_RDI + 0x20c) = 1;
  (**(code **)(*unaff_RDI + 0x4d0))(0,_DAT_0241e200);
  (**(code **)(*unaff_RDI + 0x570))();
  (**(code **)(*unaff_RDI + 0x558))();
  plVar3 = (longlong *)FUN_00e8fc40();
  func_0x00081f40();
  (**(code **)(*plVar3 + 0x18))();
  plVar1 = (longlong *)unaff_RDI[0x2a];
  if (plVar1 == plVar3) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x2a] = (longlong)plVar3;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((DAT_026fe4e0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    _DAT_026d7a88 = FUN_00d4fe50();
    _DAT_026d7a70 = "MUMultiTrackItem";
    _DAT_026d7a78 = 0x60;
    _DAT_026d7a80 = FUN_0006eae0;
    _DAT_026d7a90 = 0;
    uRam00000000026d7a98 = 0;
    _DAT_026d7aa0 = 0;
    _DAT_026d7b18 = 0;
    uRam00000000026d7b20 = 0;
    _DAT_026d7b28 = 0;
    DAT_026d7b2a = 1;
    _DAT_026d7aa8 = 0;
    uRam00000000026d7ab0 = 0;
    _DAT_026d7ab8 = 0;
    uRam00000000026d7ac0 = 0;
    _DAT_026d7ac8 = 0;
    uRam00000000026d7ad0 = 0;
    _DAT_026d7ad8 = 0;
    uRam00000000026d7ae0 = 0;
    _DAT_026d7ae8 = 0;
    uRam00000000026d7af0 = 0;
    _DAT_026d7af8 = 0;
    uRam00000000026d7b00 = 0;
    _DAT_026d7b08 = 0;
    uRam00000000026d7b10 = 0;
    DAT_026d7b33 = 0;
    _DAT_026d7b2b = 0;
    ___cxa_guard_release();
  }
  lVar4 = FUN_00e86210();
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_01d25f20();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  FUN_01d2d3a0();
  FUN_01d2d390();
  plVar1 = unaff_RDI + 0x27;
  (**(code **)(unaff_RDI[0x27] + 0x10))();
  FUN_00d50b00();
  FUN_01d25fa0();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b20();
  }
  plVar5 = (longlong *)FUN_00e8fc40();
  func_0x00081f40();
  (**(code **)(*plVar5 + 0x18))();
  plVar3 = (longlong *)unaff_RDI[0x2b];
  if (plVar3 == plVar5) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x2b] = (longlong)plVar5;
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((DAT_026fe4e0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    _DAT_026d7a88 = FUN_00d4fe50();
    _DAT_026d7a70 = "MUMultiTrackItem";
    _DAT_026d7a78 = 0x60;
    _DAT_026d7a80 = FUN_0006eae0;
    _DAT_026d7a90 = 0;
    uRam00000000026d7a98 = 0;
    _DAT_026d7aa0 = 0;
    _DAT_026d7b18 = 0;
    uRam00000000026d7b20 = 0;
    _DAT_026d7b28 = 0;
    DAT_026d7b2a = 1;
    _DAT_026d7aa8 = 0;
    uRam00000000026d7ab0 = 0;
    _DAT_026d7ab8 = 0;
    uRam00000000026d7ac0 = 0;
    _DAT_026d7ac8 = 0;
    uRam00000000026d7ad0 = 0;
    _DAT_026d7ad8 = 0;
    uRam00000000026d7ae0 = 0;
    _DAT_026d7ae8 = 0;
    uRam00000000026d7af0 = 0;
    _DAT_026d7af8 = 0;
    uRam00000000026d7b00 = 0;
    _DAT_026d7b08 = 0;
    uRam00000000026d7b10 = 0;
    DAT_026d7b33 = 0;
    _DAT_026d7b2b = 0;
    ___cxa_guard_release();
  }
  lVar4 = FUN_00e86210();
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_01d25f20();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  FUN_01d2d3a0();
  FUN_01d2d390();
  (**(code **)(unaff_RDI[0x27] + 0x10))();
  FUN_00d50b00();
  FUN_01d25fa0();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b20();
  }
  *(undefined4 *)(unaff_RDI + 0x3d) = 1;
  return;
}




// ============================================================
// @00309440 — 1050 bytes
// str: ""MUMultiTrackItem""
// str: ""GNPropertyObserver""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00309440(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  unaff_RDI[2] = &DAT_025768d0;
  if (DAT_026ea710 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f7680 = "GNPropertyObserver";
      DAT_026f7690 = 0;
      _DAT_026f7688 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_02657e20;
  unaff_RDI[2] = &DAT_02658230;
  FUN_00309930();
  FUN_00309c60();
  FUN_00309f90();
  FUN_0030a2c0();
  FUN_0030a5e0();
  FUN_0030a910();
  FUN_0030ac40();
  *(undefined1 *)(unaff_RDI + 10) = 0;
  if (DAT_026fe4e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026d7a88 = FUN_00d4fe50();
      _DAT_026d7a70 = "MUMultiTrackItem";
      _DAT_026d7a78 = 0x60;
      _DAT_026d7a80 = FUN_0006eae0;
      _DAT_026d7a90 = 0;
      uRam00000000026d7a98 = 0;
      _DAT_026d7aa0 = 0;
      _DAT_026d7b18 = 0;
      uRam00000000026d7b20 = 0;
      _DAT_026d7b28 = 0;
      DAT_026d7b2a = 1;
      _DAT_026d7aa8 = 0;
      uRam00000000026d7ab0 = 0;
      _DAT_026d7ab8 = 0;
      uRam00000000026d7ac0 = 0;
      _DAT_026d7ac8 = 0;
      uRam00000000026d7ad0 = 0;
      _DAT_026d7ad8 = 0;
      uRam00000000026d7ae0 = 0;
      _DAT_026d7ae8 = 0;
      uRam00000000026d7af0 = 0;
      _DAT_026d7af8 = 0;
      uRam00000000026d7b00 = 0;
      _DAT_026d7b08 = 0;
      uRam00000000026d7b10 = 0;
      DAT_026d7b33 = 0;
      _DAT_026d7b2b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d7b2b == '\0') {
    FUN_0030af70();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x54) = 0;
  if (DAT_026fe4e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026d7a88 = FUN_00d4fe50();
      _DAT_026d7a70 = "MUMultiTrackItem";
      _DAT_026d7a78 = 0x60;
      _DAT_026d7a80 = FUN_0006eae0;
      _DAT_026d7a90 = 0;
      uRam00000000026d7a98 = 0;
      _DAT_026d7aa0 = 0;
      _DAT_026d7b18 = 0;
      uRam00000000026d7b20 = 0;
      _DAT_026d7b28 = 0;
      DAT_026d7b2a = 1;
      _DAT_026d7aa8 = 0;
      uRam00000000026d7ab0 = 0;
      _DAT_026d7ab8 = 0;
      uRam00000000026d7ac0 = 0;
      _DAT_026d7ac8 = 0;
      uRam00000000026d7ad0 = 0;
      _DAT_026d7ad8 = 0;
      uRam00000000026d7ae0 = 0;
      _DAT_026d7ae8 = 0;
      uRam00000000026d7af0 = 0;
      _DAT_026d7af8 = 0;
      uRam00000000026d7b00 = 0;
      _DAT_026d7b08 = 0;
      uRam00000000026d7b10 = 0;
      DAT_026d7b33 = 0;
      _DAT_026d7b2b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d7b2b == '\0') {
    FUN_0030b100();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0xb) = 0;
  if (DAT_026fe4e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026d7a88 = FUN_00d4fe50();
      _DAT_026d7a70 = "MUMultiTrackItem";
      _DAT_026d7a78 = 0x60;
      _DAT_026d7a80 = FUN_0006eae0;
      _DAT_026d7a90 = 0;
      uRam00000000026d7a98 = 0;
      _DAT_026d7aa0 = 0;
      _DAT_026d7b18 = 0;
      uRam00000000026d7b20 = 0;
      _DAT_026d7b28 = 0;
      DAT_026d7b2a = 1;
      _DAT_026d7aa8 = 0;
      uRam00000000026d7ab0 = 0;
      _DAT_026d7ab8 = 0;
      uRam00000000026d7ac0 = 0;
      _DAT_026d7ac8 = 0;
      uRam00000000026d7ad0 = 0;
      _DAT_026d7ad8 = 0;
      uRam00000000026d7ae0 = 0;
      _DAT_026d7ae8 = 0;
      uRam00000000026d7af0 = 0;
      _DAT_026d7af8 = 0;
      uRam00000000026d7b00 = 0;
      _DAT_026d7b08 = 0;
      uRam00000000026d7b10 = 0;
      DAT_026d7b33 = 0;
      _DAT_026d7b2b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d7b2b == '\0') {
    FUN_0030b290();
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @002e82b0 — 675 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x002e839f) */
/* WARNING: Removing unreachable block (ram,0x002e83a8) */
/* WARNING: Removing unreachable block (ram,0x002e84f6) */
/* WARNING: Removing unreachable block (ram,0x002e84ff) */
/* WARNING: Removing unreachable block (ram,0x002e82f1) */
/* WARNING: Removing unreachable block (ram,0x002e82fa) */
/* WARNING: Removing unreachable block (ram,0x002e835a) */
/* WARNING: Removing unreachable block (ram,0x002e8363) */

void FUN_002e82b0(void)

{
  bool bVar1;
  longlong *unaff_RDI;
  longlong lVar2;
  byte bVar3;
  bool bVar4;
  longlong *local_58;
  char local_50;
  longlong local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0x980))();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  (**(code **)(*unaff_RDI + 0x9a0))();
  (**(code **)(*local_58 + 0x7b0))();
  lVar2 = local_40;
  if (local_40 == 0) {
    bVar3 = 1;
    bVar1 = false;
    lVar2 = 0;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    bVar3 = 0;
    bVar1 = true;
  }
  else {
    local_38 = '\0';
    bVar1 = true;
    bVar3 = 0;
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01cf3e00();
  FUN_01cf3f20();
  FUN_01be8270();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_01be8270();
    FUN_01bcb030();
    if (local_40 == lVar2) {
      if ((bool)(bVar3 & local_40 != 0)) {
        if (local_38 != '\0') goto LAB_002e8444;
        bVar1 = true;
        FUN_00d50b00();
      }
LAB_002e84a0:
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        bVar4 = (bool)(bVar1 & lVar2 != 0);
        bVar1 = true;
        lVar2 = local_40;
        if (bVar4) {
          FUN_00d50b20();
        }
        goto LAB_002e84a0;
      }
      bVar4 = lVar2 != 0;
      lVar2 = local_40;
      if ((bool)(bVar1 & bVar4)) {
        FUN_00d50b20();
      }
LAB_002e8444:
      bVar1 = true;
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar2 == 0) goto LAB_002e8524;
    FUN_01cf3e00();
    FUN_01cf3f20();
  }
  if ((bVar1) && (lVar2 != 0)) {
    FUN_00d50b20();
  }
LAB_002e8524:
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return;
}



