// Reconstructed implementation of GNMenuItem
// From MikeCore binary — reverse-engineered pseudocode

#include "GNMenuItem.h"

// ============================================================
// @01d636b0 — 2057 bytes
// str: ""GNMenuItem""
// str: ""_editTitle""
// str: ""_editActionName""
// str: ""_editIsEnabled""
// str: ""_editIsChecked""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d636b0(void)

{
  int iVar1;
  
  if (DAT_028b8298 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026ee9a0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026ee8f0 = FUN_00d4fe50();
          _DAT_026ee8d8 = "GNMenuItem";
          _DAT_026ee8e0 = 0x80;
          _DAT_026ee8e8 = FUN_001d9af0;
          _DAT_026ee8f8 = 0;
          uRam00000000026ee900 = 0;
          _DAT_026ee908 = 0;
          uRam00000000026ee910 = 0;
          _DAT_026ee918 = 0;
          uRam00000000026ee920 = 0;
          _DAT_026ee928 = 0;
          uRam00000000026ee930 = 0;
          _DAT_026ee938 = 0;
          uRam00000000026ee940 = 0;
          _DAT_026ee948 = 0;
          uRam00000000026ee950 = 0;
          _DAT_026ee958 = 0;
          uRam00000000026ee960 = 0;
          _DAT_026ee968 = 0;
          uRam00000000026ee970 = 0;
          _DAT_026ee978 = 0;
          uRam00000000026ee980 = 0;
          _DAT_026ee988 = 0;
          uRam00000000026ee990 = 0;
          _DAT_026ee998 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b8258 = "_editTitle";
      _DAT_028b8260 = &DAT_026ee8d8;
      _DAT_028b8268 = 0;
      _DAT_028b8270 = &DAT_027f0990;
      _DAT_028b8278 = FUN_01d674c0;
      _DAT_028b8280 = FUN_01d63ef0;
      _DAT_028b8288 = 0;
      uRam00000000028b8290 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b82e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026ee9a0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026ee8f0 = FUN_00d4fe50();
          _DAT_026ee8d8 = "GNMenuItem";
          _DAT_026ee8e0 = 0x80;
          _DAT_026ee8e8 = FUN_001d9af0;
          _DAT_026ee8f8 = 0;
          uRam00000000026ee900 = 0;
          _DAT_026ee908 = 0;
          uRam00000000026ee910 = 0;
          _DAT_026ee918 = 0;
          uRam00000000026ee920 = 0;
          _DAT_026ee928 = 0;
          uRam00000000026ee930 = 0;
          _DAT_026ee938 = 0;
          uRam00000000026ee940 = 0;
          _DAT_026ee948 = 0;
          uRam00000000026ee950 = 0;
          _DAT_026ee958 = 0;
          uRam00000000026ee960 = 0;
          _DAT_026ee968 = 0;
          uRam00000000026ee970 = 0;
          _DAT_026ee978 = 0;
          uRam00000000026ee980 = 0;
          _DAT_026ee988 = 0;
          uRam00000000026ee990 = 0;
          _DAT_026ee998 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b82a0 = "_editActionName";
      _DAT_028b82a8 = &DAT_026ee8d8;
      _DAT_028b82b0 = 0;
      _DAT_028b82b8 = &DAT_027f0990;
      _DAT_028b82c0 = FUN_01d674c0;
      _DAT_028b82c8 = FUN_01d63f40;
      _DAT_028b82d0 = 0;
      uRam00000000028b82d8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b8328 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026ee9a0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026ee8f0 = FUN_00d4fe50();
          _DAT_026ee8d8 = "GNMenuItem";
          _DAT_026ee8e0 = 0x80;
          _DAT_026ee8e8 = FUN_001d9af0;
          _DAT_026ee8f8 = 0;
          uRam00000000026ee900 = 0;
          _DAT_026ee908 = 0;
          uRam00000000026ee910 = 0;
          _DAT_026ee918 = 0;
          uRam00000000026ee920 = 0;
          _DAT_026ee928 = 0;
          uRam00000000026ee930 = 0;
          _DAT_026ee938 = 0;
          uRam00000000026ee940 = 0;
          _DAT_026ee948 = 0;
          uRam00000000026ee950 = 0;
          _DAT_026ee958 = 0;
          uRam00000000026ee960 = 0;
          _DAT_026ee968 = 0;
          uRam00000000026ee970 = 0;
          _DAT_026ee978 = 0;
          uRam00000000026ee980 = 0;
          _DAT_026ee988 = 0;
          uRam00000000026ee990 = 0;
          _DAT_026ee998 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b82e8 = "_editIsEnabled";
      _DAT_028b82f0 = &DAT_026ee8d8;
      _DAT_028b82f8 = 0;
      _DAT_028b8300 = &DAT_027f0993;
      _DAT_028b8308 = FUN_01d67540;
      _DAT_028b8310 = FUN_01d63fb0;
      _DAT_028b8318 = 0;
      uRam00000000028b8320 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b8370 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026ee9a0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026ee8f0 = FUN_00d4fe50();
          _DAT_026ee8d8 = "GNMenuItem";
          _DAT_026ee8e0 = 0x80;
          _DAT_026ee8e8 = FUN_001d9af0;
          _DAT_026ee8f8 = 0;
          uRam00000000026ee900 = 0;
          _DAT_026ee908 = 0;
          uRam00000000026ee910 = 0;
          _DAT_026ee918 = 0;
          uRam00000000026ee920 = 0;
          _DAT_026ee928 = 0;
          uRam00000000026ee930 = 0;
          _DAT_026ee938 = 0;
          uRam00000000026ee940 = 0;
          _DAT_026ee948 = 0;
          uRam00000000026ee950 = 0;
          _DAT_026ee958 = 0;
          uRam00000000026ee960 = 0;
          _DAT_026ee968 = 0;
          uRam00000000026ee970 = 0;
          _DAT_026ee978 = 0;
          uRam00000000026ee980 = 0;
          _DAT_026ee988 = 0;
          uRam00000000026ee990 = 0;
          _DAT_026ee998 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b8330 = "_editIsChecked";
      _DAT_028b8338 = &DAT_026ee8d8;
      _DAT_028b8340 = 0;
      _DAT_028b8348 = &DAT_027f0993;
      _DAT_028b8350 = FUN_01d67540;
      _DAT_028b8358 = FUN_01d63ff0;
      _DAT_028b8360 = 0;
      uRam00000000028b8368 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b83b8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026ee9a0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026ee8f0 = FUN_00d4fe50();
          _DAT_026ee8d8 = "GNMenuItem";
          _DAT_026ee8e0 = 0x80;
          _DAT_026ee8e8 = FUN_001d9af0;
          _DAT_026ee8f8 = 0;
          uRam00000000026ee900 = 0;
          _DAT_026ee908 = 0;
          uRam00000000026ee910 = 0;
          _DAT_026ee918 = 0;
          uRam00000000026ee920 = 0;
          _DAT_026ee928 = 0;
          uRam00000000026ee930 = 0;
          _DAT_026ee938 = 0;
          uRam00000000026ee940 = 0;
          _DAT_026ee948 = 0;
          uRam00000000026ee950 = 0;
          _DAT_026ee958 = 0;
          uRam00000000026ee960 = 0;
          _DAT_026ee968 = 0;
          uRam00000000026ee970 = 0;
          _DAT_026ee978 = 0;
          uRam00000000026ee980 = 0;
          _DAT_026ee988 = 0;
          uRam00000000026ee990 = 0;
          _DAT_026ee998 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b8378 = "_editIsSeparatorItem";
      _DAT_028b8380 = &DAT_026ee8d8;
      _DAT_028b8388 = 0;
      _DAT_028b8390 = &DAT_027f0993;
      _DAT_028b8398 = FUN_01d67540;
      _DAT_028b83a0 = FUN_01d64030;
      _DAT_028b83a8 = 0;
      uRam00000000028b83b0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b8400 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026ee9a0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026ee8f0 = FUN_00d4fe50();
          _DAT_026ee8d8 = "GNMenuItem";
          _DAT_026ee8e0 = 0x80;
          _DAT_026ee8e8 = FUN_001d9af0;
          _DAT_026ee8f8 = 0;
          uRam00000000026ee900 = 0;
          _DAT_026ee908 = 0;
          uRam00000000026ee910 = 0;
          _DAT_026ee918 = 0;
          uRam00000000026ee920 = 0;
          _DAT_026ee928 = 0;
          uRam00000000026ee930 = 0;
          _DAT_026ee938 = 0;
          uRam00000000026ee940 = 0;
          _DAT_026ee948 = 0;
          uRam00000000026ee950 = 0;
          _DAT_026ee958 = 0;
          uRam00000000026ee960 = 0;
          _DAT_026ee968 = 0;
          uRam00000000026ee970 = 0;
          _DAT_026ee978 = 0;
          uRam00000000026ee980 = 0;
          _DAT_026ee988 = 0;
          uRam00000000026ee990 = 0;
          _DAT_026ee998 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b83c0 = "getIsSeparatorItem";
      _DAT_028b83c8 = &DAT_026ee8d8;
      _DAT_028b83d0 = 0;
      _DAT_028b83d8 = &DAT_027f0996;
      _DAT_028b83e0 = FUN_01d67560;
      _DAT_028b83e8 = FUN_01d640b0;
      _DAT_028b83f0 = 0;
      uRam00000000028b83f8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @01d69be0 — 2026 bytes
// ============================================================

void FUN_01d69be0(void)

{
  bool bVar1;
  bool bVar2;
  longlong *plVar3;
  longlong *unaff_RDI;
  bool bVar4;
  longlong local_158;
  undefined8 *local_150 [2];
  longlong local_140;
  char local_138;
  longlong local_128;
  char local_120;
  undefined4 local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
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
  undefined4 local_6c;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  FUN_01cb4330();
  if ((DAT_028b8450 == (longlong *)0x0) || (DAT_028b8459 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b8450 == (longlong *)0x0) {
      plVar3 = (longlong *)FUN_00e8fc40();
      FUN_001b9f00();
      (**(code **)(*plVar3 + 0x18))();
      if (DAT_028b8450 == plVar3) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar4 = DAT_028b8450 != (longlong *)0x0;
        DAT_028b8450 = plVar3;
        if (bVar4) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b8458 == '\0') {
        DAT_028b8458 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0x3a8))();
      local_100 = local_68;
      local_f8 = 0;
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      local_f8 = '\x01';
      (**(code **)(*unaff_RDI + 0x398))();
      local_f0 = local_58;
      local_e8 = 0;
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_e8 = '\x01';
      FUN_01cfd290(DAT_02394214,&local_f0);
      local_6c = 0;
      (**(code **)(*unaff_RDI + 0x3a8))();
      local_d0 = local_48;
      local_c8 = 0;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_c8 = '\x01';
      (**(code **)(*unaff_RDI + 0x3a0))();
      local_c0 = local_38;
      local_b8 = 0;
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      local_b8 = '\x01';
      FUN_01cfd290(DAT_02394214,&local_c0);
      local_158 = local_e0;
      FUN_0049c630(&local_158,&local_6c,4);
      local_150[0] = (undefined8 *)&DAT_02647118;
      local_118 = 0x3f800000;
      FUN_01f7ba60(0,local_150);
      local_150[0] = (undefined8 *)&DAT_024f9300;
      if ((local_120 != '\0') && (local_128 != 0)) {
        FUN_00d50b20();
      }
      local_150[0] = &DAT_024c5048;
      if ((local_138 != '\0') && (local_140 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      DAT_028b8459 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b8459 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028b8460 == (longlong *)0x0) || (DAT_028b8469 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b8460 == (longlong *)0x0) {
      plVar3 = (longlong *)FUN_00e8fc40();
      FUN_001b9f00();
      (**(code **)(*plVar3 + 0x18))();
      if (DAT_028b8460 == plVar3) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar4 = DAT_028b8460 != (longlong *)0x0;
        DAT_028b8460 = plVar3;
        if (bVar4) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b8468 == '\0') {
        DAT_028b8468 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0x3a8))();
      local_b0 = local_68;
      local_a8 = 0;
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      local_a8 = '\x01';
      (**(code **)(*unaff_RDI + 0x3a0))();
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
      FUN_01cfd290(DAT_02391094,&local_a0);
      local_6c = 0x3f800000;
      (**(code **)(*unaff_RDI + 0x3a8))();
      local_90 = local_48;
      local_88 = 0;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_88 = '\x01';
      (**(code **)(*unaff_RDI + 0x398))();
      local_80 = local_38;
      local_78 = 0;
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      local_78 = '\x01';
      FUN_01cfd290(DAT_02391094,&local_80);
      local_158 = local_e0;
      FUN_0049c630(&local_158,&local_6c,4);
      local_150[0] = (undefined8 *)&DAT_02647118;
      local_118 = 0;
      FUN_01f7ba60(0,local_150);
      local_150[0] = (undefined8 *)&DAT_024f9300;
      if ((local_120 != '\0') && (local_128 != 0)) {
        FUN_00d50b20();
      }
      local_150[0] = &DAT_024c5048;
      if ((local_138 != '\0') && (local_140 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      DAT_028b8469 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b8469 = '\x01';
      FUN_00e8cb70();
    }
  }
  return;
}




// ============================================================
// @01d6c750 — 1936 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d6c750(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  int iVar6;
  float fVar7;
  undefined8 uVar8;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float fVar10;
  undefined8 extraout_XMM0_Qb;
  float fVar11;
  undefined1 auVar9 [16];
  float fVar12;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  float local_98;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  if ((DAT_028b84c0 == (longlong *)0x0) || (DAT_028b84c9 == '\0')) {
    FUN_00e8cb50();
    lVar3 = DAT_027f0a88;
    if (DAT_028b84c0 == (longlong *)0x0) {
      if (DAT_027f0a88 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      plVar5 = DAT_028b84c0;
      if (DAT_028b84c0 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (longlong *)0x0) {
            plVar5 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar5 = local_40;
          }
        }
        else {
          local_38 = '\0';
          plVar5 = local_40;
        }
        bVar2 = DAT_028b84c0 != (longlong *)0x0;
        DAT_028b84c0 = plVar5;
        if (bVar2) {
          FUN_00d50b20();
          plVar5 = local_40;
        }
      }
      if ((plVar5 != (longlong *)0x0) && (DAT_028b84c8 == '\0')) {
        DAT_028b84c8 = '\x01';
        FUN_00e8cb90();
        plVar5 = local_40;
      }
      if ((local_38 != '\0') && (plVar5 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_028b84c9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b84c9 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028b84d0 == (longlong *)0x0) || (DAT_028b84d9 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b84d0 == (longlong *)0x0) {
      FUN_01d4ead0();
      plVar5 = DAT_028b84d0;
      if (DAT_028b84d0 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (longlong *)0x0) {
            plVar5 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar5 = local_40;
          }
        }
        else {
          local_38 = '\0';
          plVar5 = local_40;
        }
        bVar2 = DAT_028b84d0 != (longlong *)0x0;
        DAT_028b84d0 = plVar5;
        if (bVar2) {
          FUN_00d50b20();
          plVar5 = local_40;
        }
      }
      if ((plVar5 != (longlong *)0x0) && (DAT_028b84d8 == '\0')) {
        DAT_028b84d8 = '\x01';
        FUN_00e8cb90();
        plVar5 = local_40;
      }
      if ((local_38 != '\0') && (plVar5 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (DAT_028b84d0 != (longlong *)0x0) {
        FUN_01d52700();
        local_98 = 0.0;
        iVar6 = 1;
        do {
          FUN_01d52740();
          (**(code **)(*unaff_RDI + 0x3a0))();
          if (local_b0 == '\0') {
            if (local_b8 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_b0 = '\0';
          }
          (**(code **)(*unaff_RDI + 0x3a8))();
          local_48 = 0;
          if (local_a0 == '\0') {
            if (local_a8 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_a0 = '\0';
          }
          local_48 = '\x01';
          local_50 = local_a8;
          FUN_01cfd290(local_98 / _DAT_024229fc,&local_50);
          if (local_c0 == '\0') {
            if (local_c8 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_c0 = '\0';
          }
          FUN_01d488d0();
          if (local_c8 != 0) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          if (local_b8 != 0) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_01d52740();
          (**(code **)(*local_40 + 0x3e0))();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_01d52740();
          (**(code **)(*local_40 + 0x3e0))();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_98 = (float)iVar6;
          iVar6 = iVar6 + 1;
        } while (iVar6 != 0x102);
        FUN_01d52770();
      }
      DAT_028b84d9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b84d9 = '\x01';
      FUN_00e8cb70();
    }
  }
  if (((DAT_028b84c0 != (longlong *)0x0) && (uVar8 = FUN_01d526f0(), 0.0 < (float)uVar8)) &&
     (0.0 < (float)((ulonglong)uVar8 >> 0x20))) {
    fVar10 = in_XMM1_Dc + 0.0;
    fVar11 = in_XMM1_Dd + 0.0;
    fVar13 = (float)((ulonglong)param_2 >> 0x20) + 0.0 + DAT_02390d00;
    if (0.0 < fVar13) {
      fVar14 = (float)param_2 + 0.0 + DAT_02390d00;
      if (fVar14 <= 0.0) {
        fVar10 = 0.0;
        do {
          FUN_01d526f0();
          fVar10 = fVar10 + extraout_XMM0_Db_00;
        } while (fVar10 < fVar13);
      }
      else {
        uVar17 = 0;
        uVar18 = 0;
        uVar15 = extraout_XMM0_Qb;
        do {
          fVar12 = 0.0;
          do {
            auVar9 = insertps(ZEXT416((uint)fVar12),(int)uVar17,0x10);
            cVar4 = FUN_00d054a0(auVar9._0_8_,(int)uVar8,param_3,param_4,fVar14,fVar10,uVar8,uVar15,
                                 fVar13,fVar11,uVar17,uVar18);
            plVar5 = DAT_028b84c0;
            if (cVar4 != '\0') {
              plVar1 = (longlong *)*unaff_RSI;
              if (DAT_028b84c0 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              (**(code **)(*plVar1 + 0x400))();
              if (plVar5 != (longlong *)0x0) {
                FUN_00d50b20();
              }
            }
            fVar7 = (float)FUN_01d526f0();
            fVar16 = (float)uVar17;
            fVar12 = fVar12 + fVar7;
          } while (fVar12 < fVar14);
          FUN_01d526f0();
          uVar17 = (ulonglong)(uint)(fVar16 + extraout_XMM0_Db);
        } while (fVar16 + extraout_XMM0_Db < fVar13);
      }
    }
  }
  plVar5 = DAT_028b84d0;
  if (DAT_028b84d0 != (longlong *)0x0) {
    if (DAT_028b84c0 == (longlong *)0x0) {
      FUN_00d50b00();
      FUN_01d49070();
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
      FUN_01d49240();
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}




// ============================================================
// @01d6b7d0 — 1691 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01d6b8cd) */
/* WARNING: Removing unreachable block (ram,0x01d6b8d9) */
/* WARNING: Removing unreachable block (ram,0x01d6b93b) */
/* WARNING: Removing unreachable block (ram,0x01d6b94b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d6b7d0(undefined8 param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  int in_EDX;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  int iVar4;
  undefined8 in_XMM0_Qb;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar9;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  undefined1 local_58 [8];
  float fStack_50;
  float fStack_4c;
  longlong local_40;
  char local_38;
  
  fStack_50 = (float)in_XMM1_Dc;
  local_58 = (undefined1  [8])param_2;
  fStack_4c = (float)in_XMM1_Dd;
  local_d8 = (float)param_1;
  fStack_d4 = (float)((ulonglong)param_1 >> 0x20);
  fStack_cc = (float)((ulonglong)in_XMM0_Qb >> 0x20);
  if (in_EDX == 0x10) {
    _local_58 = blendps(_local_58,_DAT_023b5520,0xd);
  }
  else if (in_EDX == 0xf) {
    (**(code **)(*unaff_RDI + 0x3a0))();
    lVar3 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    fVar9 = (float)(int)(float)local_58._4_4_ * DAT_0239011c + DAT_023b1608;
    fStack_d0 = (float)in_XMM0_Qb;
    local_d8 = (float)local_58._4_4_ * DAT_0239011c + local_d8;
    local_58._4_4_ = (float)local_58._4_4_ * DAT_0239011c + fStack_d4;
    fStack_50 = fStack_4c + fStack_cc;
    auVar5._4_4_ = local_58._4_4_;
    auVar5._0_4_ = local_d8;
    auVar5._8_4_ = fStack_4c + fStack_d0;
    auVar5._12_4_ = fStack_50;
    auVar6._4_12_ = auVar5._4_12_;
    auVar6._0_4_ = local_d8 + DAT_02390d00;
    local_58._0_4_ = local_58._4_4_;
    fStack_4c = fStack_50;
    fVar8 = (float)local_58._4_4_ + DAT_02390124;
    auVar7._4_4_ = local_58._4_4_;
    auVar7._0_4_ = fVar8;
    auVar7._8_4_ = fStack_50;
    auVar7._12_4_ = fStack_50;
    auVar7 = insertps(auVar6,auVar7,0x10);
    (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))(auVar7._0_8_,fVar9);
    local_d8 = DAT_02390124 + local_d8;
    local_58._0_4_ = (float)local_58._0_4_ + DAT_02390d00;
    auVar2._4_4_ = local_58._4_4_;
    auVar2._0_4_ = local_58._0_4_;
    auVar2._8_4_ = fStack_50;
    auVar2._12_4_ = fStack_4c;
    auVar7 = insertps(ZEXT416((uint)local_d8),auVar2,0x10);
    (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))(auVar7._0_8_,fVar9);
    auVar7 = insertps(auVar6,local_58._0_4_,0x10);
    (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))(auVar7._0_8_,fVar9);
    (**(code **)(*unaff_RDI + 0x390))();
    lVar3 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    auVar7 = insertps(ZEXT416((uint)local_d8),fVar8,0x10);
    (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))(auVar7._0_8_,fVar9);
    iVar4 = (int)fVar9;
    if ((int)fVar9 < 1) {
      return;
    }
    do {
      (**(code **)(*unaff_RDI + 0x398))();
      if (local_110 == '\0') {
        if (local_118 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_110 = '\0';
      }
      (**(code **)(*unaff_RDI + 0x3a0))();
      local_70 = 0;
      if (local_f0 == '\0') {
        if (local_f8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_f0 = '\0';
      }
      local_70 = '\x01';
      local_78 = local_f8;
      (**(code **)(*unaff_RDI + 0x3a8))();
      local_60 = 0;
      if (local_e0 == '\0') {
        if (local_e8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_e0 = '\0';
      }
      local_60 = '\x01';
      local_68 = local_e8;
      FUN_01cfd290();
      local_80 = 0;
      if (local_100 == '\0') {
        if (local_108 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_100 = '\0';
      }
      local_80 = '\x01';
      local_88 = local_108;
      local_58._0_4_ = (float)iVar4;
      FUN_01cfd290((float)iVar4 / fVar9,&local_88);
      lVar3 = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      if (local_118 != 0) {
        FUN_00d50b20();
      }
      if ((local_110 != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))();
      bVar1 = 1 < iVar4;
      iVar4 = iVar4 + -1;
    } while (bVar1);
    return;
  }
  FUN_01cbadc0();
  if ((in_EDX == 1) && (param_3 == 1)) {
    FUN_00d05530();
    (**(code **)(*unaff_RDI + 0x688))();
  }
  return;
}




// ============================================================
// @001d9b50 — 1635 bytes
// str: ""GNMenuItem""
// str: ""GNLocalizationTarget""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001d9b50(void)

{
  int iVar1;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  unaff_RDI[2] = &DAT_0258bc60;
  if (DAT_026df950 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026d6330 = "GNLocalizationTarget";
      DAT_026d6340 = 0;
      _DAT_026d6338 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_026846d0;
  unaff_RDI[2] = &DAT_02684a60;
  *(undefined1 *)(unaff_RDI + 3) = 0;
  if (DAT_026ee9a0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026ee8f0 = FUN_00d4fe50();
      _DAT_026ee8d8 = "GNMenuItem";
      _DAT_026ee8e0 = 0x80;
      _DAT_026ee8e8 = FUN_001d9af0;
      _DAT_026ee8f8 = 0;
      uRam00000000026ee900 = 0;
      _DAT_026ee908 = 0;
      uRam00000000026ee910 = 0;
      _DAT_026ee918 = 0;
      uRam00000000026ee920 = 0;
      _DAT_026ee928 = 0;
      uRam00000000026ee930 = 0;
      _DAT_026ee938 = 0;
      uRam00000000026ee940 = 0;
      _DAT_026ee948 = 0;
      uRam00000000026ee950 = 0;
      _DAT_026ee958 = 0;
      uRam00000000026ee960 = 0;
      _DAT_026ee968 = 0;
      uRam00000000026ee970 = 0;
      _DAT_026ee978 = 0;
      uRam00000000026ee980 = 0;
      _DAT_026ee988 = 0;
      _uRam00000000026ee990 = 0;
      _DAT_026ee998 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026ee993 == '\0') {
    FUN_001da300();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x1c) = 0;
  if (DAT_026ee9a0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026ee8f0 = FUN_00d4fe50();
      _DAT_026ee8d8 = "GNMenuItem";
      _DAT_026ee8e0 = 0x80;
      _DAT_026ee8e8 = FUN_001d9af0;
      _DAT_026ee8f8 = 0;
      uRam00000000026ee900 = 0;
      _DAT_026ee908 = 0;
      uRam00000000026ee910 = 0;
      _DAT_026ee918 = 0;
      uRam00000000026ee920 = 0;
      _DAT_026ee928 = 0;
      uRam00000000026ee930 = 0;
      _DAT_026ee938 = 0;
      uRam00000000026ee940 = 0;
      _DAT_026ee948 = 0;
      uRam00000000026ee950 = 0;
      _DAT_026ee958 = 0;
      uRam00000000026ee960 = 0;
      _DAT_026ee968 = 0;
      uRam00000000026ee970 = 0;
      _DAT_026ee978 = 0;
      uRam00000000026ee980 = 0;
      _DAT_026ee988 = 0;
      _uRam00000000026ee990 = 0;
      _DAT_026ee998 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026ee993 == '\0') {
    FUN_001da470();
    FUN_00e87980();
  }
  FUN_001da5e0();
  FUN_001da860();
  FUN_001daae0();
  FUN_001dadd0();
  FUN_001db0b0();
  *(undefined1 *)(unaff_RDI + 9) = 0;
  if (DAT_026ee9a0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026ee8f0 = FUN_00d4fe50();
      _DAT_026ee8d8 = "GNMenuItem";
      _DAT_026ee8e0 = 0x80;
      _DAT_026ee8e8 = FUN_001d9af0;
      _DAT_026ee8f8 = 0;
      uRam00000000026ee900 = 0;
      _DAT_026ee908 = 0;
      uRam00000000026ee910 = 0;
      _DAT_026ee918 = 0;
      uRam00000000026ee920 = 0;
      _DAT_026ee928 = 0;
      uRam00000000026ee930 = 0;
      _DAT_026ee938 = 0;
      uRam00000000026ee940 = 0;
      _DAT_026ee948 = 0;
      uRam00000000026ee950 = 0;
      _DAT_026ee958 = 0;
      uRam00000000026ee960 = 0;
      _DAT_026ee968 = 0;
      uRam00000000026ee970 = 0;
      _DAT_026ee978 = 0;
      uRam00000000026ee980 = 0;
      _DAT_026ee988 = 0;
      _uRam00000000026ee990 = 0;
      _DAT_026ee998 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026ee993 == '\0') {
    FUN_001db330();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x49) = 0;
  if (DAT_026ee9a0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026ee8f0 = FUN_00d4fe50();
      _DAT_026ee8d8 = "GNMenuItem";
      _DAT_026ee8e0 = 0x80;
      _DAT_026ee8e8 = FUN_001d9af0;
      _DAT_026ee8f8 = 0;
      uRam00000000026ee900 = 0;
      _DAT_026ee908 = 0;
      uRam00000000026ee910 = 0;
      _DAT_026ee918 = 0;
      uRam00000000026ee920 = 0;
      _DAT_026ee928 = 0;
      uRam00000000026ee930 = 0;
      _DAT_026ee938 = 0;
      uRam00000000026ee940 = 0;
      _DAT_026ee948 = 0;
      uRam00000000026ee950 = 0;
      _DAT_026ee958 = 0;
      uRam00000000026ee960 = 0;
      _DAT_026ee968 = 0;
      uRam00000000026ee970 = 0;
      _DAT_026ee978 = 0;
      uRam00000000026ee980 = 0;
      _DAT_026ee988 = 0;
      _uRam00000000026ee990 = 0;
      _DAT_026ee998 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026ee993 == '\0') {
    FUN_001db4a0();
    FUN_00e87980();
  }
  FUN_001db610();
  FUN_001db900();
  FUN_001dbbf0();
  FUN_001dbe70();
  *(undefined1 *)(unaff_RDI + 0xe) = 0;
  if (DAT_026ee9a0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026ee8f0 = FUN_00d4fe50();
      _DAT_026ee8d8 = "GNMenuItem";
      _DAT_026ee8e0 = 0x80;
      _DAT_026ee8e8 = FUN_001d9af0;
      _DAT_026ee8f8 = 0;
      uRam00000000026ee900 = 0;
      _DAT_026ee908 = 0;
      uRam00000000026ee910 = 0;
      _DAT_026ee918 = 0;
      uRam00000000026ee920 = 0;
      _DAT_026ee928 = 0;
      uRam00000000026ee930 = 0;
      _DAT_026ee938 = 0;
      uRam00000000026ee940 = 0;
      _DAT_026ee948 = 0;
      uRam00000000026ee950 = 0;
      _DAT_026ee958 = 0;
      uRam00000000026ee960 = 0;
      _DAT_026ee968 = 0;
      uRam00000000026ee970 = 0;
      _DAT_026ee978 = 0;
      uRam00000000026ee980 = 0;
      _DAT_026ee988 = 0;
      _uRam00000000026ee990 = 0;
      _DAT_026ee998 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026ee993 == '\0') {
    FUN_001dc0f0();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x71) = 0;
  if (DAT_026ee9a0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026ee8f0 = FUN_00d4fe50();
      _DAT_026ee8d8 = "GNMenuItem";
      _DAT_026ee8e0 = 0x80;
      _DAT_026ee8e8 = FUN_001d9af0;
      _DAT_026ee8f8 = 0;
      uRam00000000026ee900 = 0;
      _DAT_026ee908 = 0;
      uRam00000000026ee910 = 0;
      _DAT_026ee918 = 0;
      uRam00000000026ee920 = 0;
      _DAT_026ee928 = 0;
      uRam00000000026ee930 = 0;
      _DAT_026ee938 = 0;
      uRam00000000026ee940 = 0;
      _DAT_026ee948 = 0;
      uRam00000000026ee950 = 0;
      _DAT_026ee958 = 0;
      uRam00000000026ee960 = 0;
      _DAT_026ee968 = 0;
      uRam00000000026ee970 = 0;
      _DAT_026ee978 = 0;
      uRam00000000026ee980 = 0;
      _DAT_026ee988 = 0;
      _uRam00000000026ee990 = 0;
      _DAT_026ee998 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026ee993 == '\0') {
    FUN_001dc260();
    FUN_00e87980();
  }
  unaff_RDI[0xf] = *(undefined8 *)(unaff_RSI + 0x78);
  return;
}




// ============================================================
// @01d68660 — 1421 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01d6873a) */
/* WARNING: Removing unreachable block (ram,0x01d68746) */
/* WARNING: Removing unreachable block (ram,0x01d6895b) */
/* WARNING: Removing unreachable block (ram,0x01d68967) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d68660(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar10;
  undefined8 uVar11;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar12 [16];
  float extraout_XMM0_Db;
  float extraout_XMM0_Dd;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar18;
  undefined8 in_XMM1_Qb;
  undefined1 auVar17 [16];
  float fVar19;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  longlong local_b8;
  char local_b0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  uVar8 = FUN_01e07410();
  (**(code **)(*unaff_RDI + 0x640))();
  plVar3 = local_40;
  uVar1 = *(undefined4 *)((longlong)unaff_RDI + 0x18c);
  FUN_01e3f820();
  uVar6 = (**(code **)(*unaff_RDI + 0x9a0))();
  FUN_01e420b0();
  (**(code **)(*plVar3 + 0x3f0))((uVar8 & 0xff) << 3,uVar1,0,uVar6);
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e3f820();
  local_98 = (float)param_2;
  fStack_94 = (float)((ulonglong)param_2 >> 0x20);
  fStack_90 = (float)in_XMM1_Qb;
  fStack_8c = (float)((ulonglong)in_XMM1_Qb >> 0x20);
  uVar11 = param_2;
  FUN_01e08670();
  cVar7 = (**(code **)(*unaff_RDI + 0xb30))();
  local_128 = (float)uVar11;
  fStack_124 = (float)((ulonglong)uVar11 >> 0x20);
  fStack_120 = (float)in_XMM1_Qb;
  fStack_11c = (float)((ulonglong)in_XMM1_Qb >> 0x20);
  fVar18 = fStack_90;
  fVar19 = fStack_8c;
  if (cVar7 != '\0') {
    local_98 = local_98 - local_128;
    fStack_94 = fStack_94 - fStack_124;
    fVar18 = fStack_90 - fStack_120;
    fVar19 = fStack_8c - fStack_11c;
  }
  (**(code **)(*unaff_RDI + 0x640))();
  plVar3 = local_40;
  uVar1 = *(undefined4 *)((longlong)unaff_RDI + 0x18c);
  (**(code **)(*unaff_RDI + 0x960))();
  local_80 = local_50;
  local_78 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_78 = '\x01';
  (**(code **)(*unaff_RDI + 0x9e0))();
  local_68 = 0;
  if (local_b0 == '\0') {
    if (local_b8 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_b0 = '\0';
  }
  local_68 = '\x01';
  local_70 = local_b8;
  uVar2 = *(undefined4 *)((longlong)unaff_RDI + 0x174);
  (**(code **)(*unaff_RDI + 0x9a0))();
  FUN_01e420b0();
  auVar15._4_4_ = fStack_94;
  auVar15._0_4_ = local_98;
  auVar15._8_4_ = fVar18;
  auVar15._12_4_ = fVar19;
  auVar5._8_4_ = fStack_90;
  auVar5._0_8_ = param_2;
  auVar5._12_4_ = fStack_8c;
  auVar17 = blendps(auVar15,auVar5,2);
  (**(code **)(*plVar3 + 0x400))(&local_80,uVar1,&local_70,uVar2);
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  cVar7 = (**(code **)(*unaff_RDI + 0xb30))();
  if (cVar7 != '\0') {
    FUN_01e08690();
    uVar11 = FUN_01d526f0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar3 = (longlong *)*unaff_RSI;
    FUN_01e08690();
    local_60 = local_40;
    local_58 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_58 = '\x01';
    auVar17._8_8_ = extraout_XMM0_Qb;
    auVar17._0_8_ = uVar11;
    auVar12._0_4_ = (local_128 - (float)uVar11) * _DAT_023945d0;
    auVar12._4_4_ = (fStack_124 - (float)((ulonglong)uVar11 >> 0x20)) * _UNK_023945d4;
    auVar12._8_4_ = (fStack_120 - (float)extraout_XMM0_Qb) * _UNK_023945d8;
    auVar12._12_4_ = (fStack_11c - (float)((ulonglong)extraout_XMM0_Qb >> 0x20)) * _UNK_023945dc;
    roundps(auVar12,auVar12,10);
    (**(code **)(*plVar3 + 0x408))();
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*unaff_RDI + 0x970))();
  if (local_40 == (longlong *)0x0) {
    bVar10 = unaff_RDI[0x45] != 0;
  }
  else {
    (**(code **)(*unaff_RDI + 0x970))();
    iVar9 = FUN_00d8c7a0();
    if (iVar9 == 0) {
      bVar10 = unaff_RDI[0x45] != 0;
    }
    else {
      bVar10 = false;
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar10) {
    FUN_01d526f0();
    FUN_01e3f820();
    fVar18 = auVar17._4_4_ - extraout_XMM0_Db;
    fVar19 = auVar17._12_4_ - extraout_XMM0_Dd;
    auVar13._4_4_ = fVar18;
    auVar13._0_4_ = fVar18;
    auVar13._8_4_ = fVar19;
    auVar13._12_4_ = fVar19;
    auVar14._4_12_ = auVar13._4_12_;
    auVar14._0_4_ = fVar18 * DAT_0239011c;
    auVar15 = roundss(auVar14,auVar14,10);
    auVar16._4_12_ = auVar15._4_12_;
    auVar16._0_4_ = auVar15._0_4_ + DAT_02390d34;
    insertps(_DAT_024215a0,auVar16,0x10);
    plVar3 = (longlong *)*unaff_RSI;
    lVar4 = unaff_RDI[0x45];
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar3 + 0x408))();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @01d6ef90 — 1318 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01d6f175) */
/* WARNING: Removing unreachable block (ram,0x01d6f181) */
/* WARNING: Removing unreachable block (ram,0x01d6f4a0) */
/* WARNING: Removing unreachable block (ram,0x01d6f4b0) */
/* WARNING: Removing unreachable block (ram,0x01d6f3cb) */
/* WARNING: Removing unreachable block (ram,0x01d6f3f0) */
/* WARNING: Removing unreachable block (ram,0x01d6f3cd) */
/* WARNING: Removing unreachable block (ram,0x01d6f3f2) */

void FUN_01d6ef90(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *unaff_RDI;
  uint uVar6;
  longlong **pplVar7;
  longlong local_d8;
  char local_d0;
  longlong local_a0;
  char local_98;
  int local_88;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  lVar2 = unaff_RDI[0x45];
  if (-1 < (int)lVar2) {
    iVar4 = FUN_01d6fde0();
    if ((int)lVar2 < iVar4) {
      FUN_01d70140();
      plVar1 = local_58;
      if (local_50 == '\0') {
        if (local_58 == (longlong *)0x0) goto LAB_01d6f239;
        FUN_00d50b00();
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else if (local_58 == (longlong *)0x0) goto LAB_01d6f239;
      lVar2 = unaff_RDI[0x2b];
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*plVar1 + 0x50))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        (**(code **)(*unaff_RDI + 0x958))();
      }
      FUN_00d50b20();
    }
    goto LAB_01d6f239;
  }
  *(undefined4 *)(unaff_RDI + 0x45) = 0xffffffff;
  pplVar7 = &local_58;
  FUN_00e99c70();
  plVar1 = local_58;
  FUN_01d749e0();
  if (plVar1 == (longlong *)0x0) {
LAB_01d6f033:
    pplVar7 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01d6f033;
  }
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar7 + 1) = 0;
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    FUN_00d8ede0();
    plVar1 = local_58;
    if (local_50 == '\0') {
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    (**(code **)(*unaff_RDI + 0x958))();
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00e99fa0();
    plVar1 = local_58;
    if (local_50 == '\0') {
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    (**(code **)(*unaff_RDI + 0x958))();
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
LAB_01d6f239:
  FUN_01d5e2b0();
  plVar1 = local_58;
  if (local_50 == '\0') {
    if (local_58 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == (longlong *)0x0) {
    return;
  }
  local_50 = 0;
  local_58 = (longlong *)0x0;
  local_48 = plVar1;
  local_38 = 0;
  local_40 = 0;
  if (0 < *(int *)((longlong)plVar1 + 0xc)) {
    uVar6 = 0;
    do {
      lVar2 = local_a0;
      local_58 = *(longlong **)(plVar1[2] + (ulonglong)uVar6 * 8);
      cVar3 = FUN_01d64c70();
      if (cVar3 == '\0') {
        FUN_01d66ab0();
      }
      else {
        FUN_01d66ab0();
        FUN_01d64cb0();
        FUN_01d5e2b0();
        if (local_98 == '\0') {
          if (local_a0 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_98 = '\0';
        }
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
        if (local_a0 != 0) {
          local_98 = '\0';
          local_a0 = 0;
          local_88 = -1;
          while( true ) {
            lVar5 = (longlong)local_88;
            local_88 = local_88 + 1;
            if (*(int *)(lVar2 + 0xc) <= local_88) break;
            local_a0 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 8 + lVar5 * 8);
            FUN_01d66ab0();
            cVar3 = FUN_01d65e30();
            if (cVar3 != '\0') {
              FUN_01d66ab0();
            }
          }
          FUN_002a0a30();
          FUN_00d50b20();
        }
      }
      uVar6 = uVar6 + 1;
      local_40 = CONCAT44(local_40._4_4_,uVar6);
    } while ((int)uVar6 < *(int *)((longlong)plVar1 + 0xc));
  }
  FUN_002a0a30();
  FUN_00d50b20();
  return;
}




// ============================================================
// @01d6d5e0 — 1106 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01d6d99f) */
/* WARNING: Removing unreachable block (ram,0x01d6d9ab) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d6d5e0(float param_1,float param_2)

{
  bool bVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 unaff_R12;
  undefined8 uVar5;
  uint uVar6;
  char cVar7;
  undefined8 unaff_R15;
  undefined8 uVar8;
  float fVar9;
  longlong *local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  if ((DAT_028b84e0 == (longlong *)0x0) || (DAT_028b84e9 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b84e0 == (longlong *)0x0) {
      FUN_01cfbee0(DAT_0239011c,_DAT_023b294c,DAT_02390124);
      local_58 = local_40;
      if (local_40 == (longlong *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = CONCAT71((int7)((ulonglong)unaff_R15 >> 8),1);
        if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_01cfbee0(DAT_02390124,DAT_02390124,DAT_02390124);
      local_48 = local_40;
      if (local_40 == (longlong *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = CONCAT71((int7)((ulonglong)unaff_R12 >> 8),1);
        if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_01d4ead0(_DAT_02420950);
      plVar2 = DAT_028b84e0;
      if (DAT_028b84e0 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (longlong *)0x0) {
            plVar2 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar2 = local_40;
          }
        }
        else {
          local_38 = '\0';
          plVar2 = local_40;
        }
        bVar1 = DAT_028b84e0 != (longlong *)0x0;
        DAT_028b84e0 = plVar2;
        if (bVar1) {
          FUN_00d50b20();
          plVar2 = local_40;
        }
      }
      if ((plVar2 != (longlong *)0x0) && (DAT_028b84e8 == '\0')) {
        DAT_028b84e8 = '\x01';
        FUN_00e8cb90();
        plVar2 = local_40;
      }
      if ((local_38 != '\0') && (plVar2 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (DAT_028b84e0 != (longlong *)0x0) {
        local_60 = uVar5;
        local_50 = uVar8;
        FUN_01d52700();
        fVar9 = _DAT_023945d0 * param_2;
        uVar6 = 0x16;
        iVar4 = 0x2a;
        do {
          FUN_01d52740();
          uVar6 = uVar6 - 1;
          local_a0 = local_58;
          local_98 = '\0';
          FUN_01cfd290((float)(int)uVar6 / _DAT_02411474,&local_a0);
          local_70 = local_90;
          local_68 = 0;
          if (local_88 == '\0') {
            if (local_90 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_88 = '\0';
          }
          local_68 = '\x01';
          FUN_01d488d0();
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_01d52740();
          (**(code **)(*local_40 + 0x3c0))(fVar9 + param_1,(float)iVar4);
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          uVar8 = local_50;
          uVar5 = local_60;
          iVar4 = iVar4 + -2;
        } while (1 < uVar6);
        FUN_01d52770();
      }
      cVar3 = (char)uVar5;
      cVar7 = (char)uVar8;
      DAT_028b84e9 = '\x01';
      FUN_00e8cb70();
      goto LAB_01d6d649;
    }
    DAT_028b84e9 = '\x01';
    FUN_00e8cb70();
  }
  local_48 = (longlong *)0x0;
  cVar3 = '\0';
  cVar7 = '\0';
  local_58 = (longlong *)0x0;
LAB_01d6d649:
  plVar2 = DAT_028b84e0;
  local_78 = 0;
  if (DAT_028b84e0 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_80 = plVar2;
  local_78 = '\x01';
  FUN_01d49240(param_1,param_2,DAT_02390124);
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar7 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar3 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01d657b0 — 1045 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01d65853) */
/* WARNING: Removing unreachable block (ram,0x01d6585c) */
/* WARNING: Removing unreachable block (ram,0x01d65b03) */
/* WARNING: Removing unreachable block (ram,0x01d65b0f) */

void FUN_01d657b0(void)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_b8;
  char local_b0;
  longlong in_stack_ffffffffffffffb8;
  char local_40;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x30);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  *(undefined1 *)(unaff_RDI + 0x70) = 1;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_024a9998)();
  if (*(longlong *)(*unaff_RSI + 0x48) != 0) {
    FUN_01d5e2b0();
    FUN_00d50b00();
    local_40 = '\0';
    iVar5 = FUN_00d237a0();
    FUN_00d50b20();
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    bVar3 = FUN_01d5b410();
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 0x48) != 0) {
        (*(code *)PTR__objc_msgSend_024a9998)();
      }
      _objc_alloc();
      uVar6 = (*(code *)PTR__objc_msgSend_024a9998)();
      *(undefined8 *)(lVar1 + 0x48) = uVar6;
    }
    cVar4 = FUN_01d65330();
    in_stack_ffffffffffffffb8 = unaff_RDI;
    if (cVar4 == '\0') {
      _objc_alloc();
      uVar6 = (*(code *)PTR__objc_msgSend_024a9998)();
      FUN_00d50b00();
      (*(code *)PTR__objc_msgSend_024a9998)();
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
      lVar2 = *(longlong *)(unaff_RDI + 0x20);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_01f1fc80();
      (*(code *)PTR__objc_msgSend_024a9998)();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = *(longlong *)(unaff_RDI + 0x28);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      lVar7 = FUN_00e1cfc0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        (*(code *)PTR__objc_msgSend_024a9998)();
      }
      (*(code *)PTR__objc_msgSend_024a9998)();
      (*(code *)PTR__objc_msgSend_024a9998)();
      (*(code *)PTR__objc_msgSend_024a9998)((longlong)(int)(iVar5 + (uint)bVar3),uVar6);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x48) != 0)) {
        (*(code *)PTR__objc_msgSend_024a9998)();
        (*(code *)PTR__objc_msgSend_024a9998)();
        (*(code *)PTR__objc_msgSend_024a9998)();
      }
      FUN_00d50b00();
      FUN_01f25af0();
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
      (*(code *)PTR__objc_release_024a99a0)();
    }
    else {
      (*(code *)PTR__objc_msgSend_024a9998)();
      (*(code *)PTR__objc_msgSend_024a9998)();
    }
  }
  (*(code *)PTR__objc_release_024a99a0)();
  if (lVar1 != 0) {
    if (((*(longlong *)(lVar1 + 0x48) != 0) && (*(longlong *)(*unaff_RSI + 0x48) != 0)) &&
       (iVar5 = FUN_01d5b230(), 0 < iVar5)) {
      iVar8 = 0;
      do {
        FUN_01d5b240();
        FUN_01d657b0();
        if ((local_40 != '\0') && (in_stack_ffffffffffffffb8 != 0)) {
          FUN_00d50b20();
        }
        iVar8 = iVar8 + 1;
      } while (iVar5 != iVar8);
    }
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01d70620 — 1027 bytes
// ============================================================

void FUN_01d70620(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar7;
  longlong *plVar8;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  int local_64;
  longlong *local_58;
  char local_50;
  
  if (*(longlong *)(unaff_RSI + 0x220) == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    bVar1 = false;
    plVar8 = (longlong *)0x0;
    bVar3 = false;
    plVar6 = (longlong *)0x0;
    for (local_64 = 0; iVar5 = FUN_01d5b230(), local_64 < iVar5; local_64 = local_64 + 1) {
      FUN_01d5b240();
      if (local_58 == plVar6) {
        plVar7 = plVar6;
        bVar2 = bVar1;
        if ((!bVar1) && (local_58 != (longlong *)0x0)) {
          bVar2 = true;
          if (local_50 != '\0') goto LAB_01d70764;
          FUN_00d50b00();
          bVar2 = true;
        }
LAB_01d70750:
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar7 = local_58;
        if (local_50 == '\0') {
          if (local_58 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          bVar2 = true;
          if ((bVar1) && (plVar6 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01d70750;
        }
        bVar2 = true;
        if ((bVar1) && (plVar6 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_01d70764:
      FUN_01d64cb0();
      if (local_58 == plVar8) {
        plVar6 = plVar8;
        bVar1 = bVar3;
        if ((bVar3) || (local_58 == (longlong *)0x0)) goto LAB_01d707ec;
        if (local_50 == '\0') {
          bVar3 = true;
          FUN_00d50b00();
        }
        else {
          bVar3 = true;
        }
      }
      else if (local_50 == '\0') {
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar1 = true;
        plVar6 = local_58;
        if ((bVar3) && (plVar8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_01d707ec:
        plVar8 = plVar6;
        bVar3 = bVar1;
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if ((bVar3) && (plVar8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar8 = local_58;
        bVar3 = true;
      }
      plVar6 = plVar7;
      bVar1 = bVar2;
      if (plVar8 == (longlong *)0x0) {
        FUN_01d65230();
        local_80 = *param_2;
        local_78 = '\0';
        cVar4 = (**(code **)(*local_58 + 0x50))();
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar4 != '\0') {
          *(undefined1 *)(unaff_RDI + 1) = 0;
          if (bVar2) {
            *unaff_RDI = plVar7;
            *(undefined1 *)(unaff_RDI + 1) = 1;
            return;
          }
          if (plVar7 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          *unaff_RDI = plVar7;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          return;
        }
        plVar8 = (longlong *)0x0;
      }
      else {
        local_90 = *param_2;
        local_88 = '\0';
        FUN_01d5dfa0(param_1,&local_90);
        if (local_58 == plVar7) {
          if ((!bVar2) && (local_58 != (longlong *)0x0)) {
            if (local_50 != '\0') goto LAB_01d708f4;
            FUN_00d50b00();
            bVar1 = true;
          }
LAB_01d7095f:
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          plVar6 = local_58;
          if (local_50 == '\0') {
            if (local_58 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            bVar1 = true;
            if ((bVar2) && (plVar7 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01d7095f;
          }
          if ((bVar2) && (plVar7 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_01d708f4:
          local_50 = '\0';
          bVar1 = true;
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if (plVar6 != (longlong *)0x0) {
          *(undefined1 *)(unaff_RDI + 1) = 0;
          if (!bVar1) {
            FUN_00d50b00();
          }
          *unaff_RDI = plVar6;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          bVar1 = false;
          if (!bVar3) goto LAB_01d709fd;
          goto LAB_01d709f0;
        }
        plVar6 = (longlong *)0x0;
      }
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    if (bVar3) {
LAB_01d709f0:
      if (plVar8 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
LAB_01d709fd:
    if ((bVar1) && (plVar6 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @01d67820 — 893 bytes
// str: ""%s.%s""
// ============================================================

void FUN_01d67820(void)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *unaff_RDI;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong *local_78;
  uint local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  FUN_00d6f370();
  local_b8 = DAT_027f09d8;
  if (DAT_027f09d8 != 0) {
    FUN_00d50b00();
  }
  local_b0 = '\x01';
  local_a8 = 0;
  local_a0 = '\0';
  FUN_00d710b0(&local_a8,&local_b8);
  plVar1 = local_78;
  if ((char)local_70 == '\0') {
    if (local_78 != (longlong *)0x0) {
      FUN_00d50b00();
      if (((char)local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_70 = local_70 & 0xffffff00;
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    uVar5 = FUN_00003050();
    local_60 = FUN_00003060();
    local_70 = 2;
    local_78 = &DAT_02685078;
    local_68 = uVar5;
    FUN_00d8cb40(&DAT_02685078,&local_78);
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
    cVar3 = (**(code **)(*plVar1 + 0x50))();
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      goto LAB_01d67b82;
    }
  }
  iVar4 = FUN_000030b0();
  if (iVar4 == 2) {
LAB_01d67a5c:
    FUN_00d6f370();
    plVar2 = local_38;
    uVar5 = FUN_00003050();
    local_60 = FUN_00003060();
    local_70 = 2;
    local_78 = &DAT_02685078;
    local_68 = uVar5;
    FUN_00d8cb40(&DAT_02685078,&local_78);
    local_48 = local_88;
    local_40 = 0;
    local_98 = DAT_027f09d8;
    if (local_80 == '\0') {
      if (local_88 != 0) {
        FUN_00d50b00();
        local_98 = DAT_027f09d8;
      }
    }
    else {
      local_80 = '\0';
    }
    local_40 = '\x01';
    DAT_027f09d8 = local_98;
    if (local_98 != 0) {
      local_40 = '\x01';
      FUN_00d50b00();
    }
    local_90 = '\x01';
    (**(code **)(*plVar2 + 0x80))();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    FUN_01f27fe0();
    cVar3 = (**(code **)(*local_78 + 0x550))();
    if (((char)local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') goto LAB_01d67a5c;
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_000161a0();
    *puVar6 = &DAT_02684aa0;
    puVar6[0xe] = 0;
    FUN_00d500e0();
    *unaff_RDI = puVar6;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  if (plVar1 == (longlong *)0x0) {
    return;
  }
LAB_01d67b82:
  FUN_00d50b20();
  return;
}




// ============================================================
// @01d701d0 — 829 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01d7032a) */

longlong * FUN_01d701d0(undefined8 param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  longlong unaff_RSI;
  longlong lVar6;
  longlong *unaff_RDI;
  longlong lVar7;
  int iVar8;
  longlong local_58;
  char local_50;
  int local_44;
  longlong local_40;
  
  if ((*(longlong *)(unaff_RSI + 0x220) == 0) || (param_2 < 0)) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    bVar1 = false;
    lVar7 = 0;
    bVar2 = false;
    local_40 = 0;
    iVar8 = 0;
    local_44 = param_2;
    while ((iVar5 = FUN_01d5b230(), iVar8 < iVar5 && (-1 < local_44))) {
      FUN_01d5b240();
      if (local_58 == local_40) {
        if ((bVar1) || (local_58 == 0)) {
joined_r0x01d70310:
          lVar6 = local_40;
          bVar3 = bVar1;
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          lVar6 = local_40;
          bVar3 = true;
          if (local_50 == '\0') {
            FUN_00d50b00();
            goto LAB_01d702f8;
          }
        }
      }
      else {
        lVar6 = local_58;
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
          bVar3 = true;
          if ((bVar1) && (local_40 != 0)) {
            FUN_00d50b20();
            local_40 = local_58;
LAB_01d702f8:
            bVar1 = true;
            goto joined_r0x01d70310;
          }
        }
        else {
          bVar3 = true;
          if ((bVar1) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      bVar1 = bVar3;
      FUN_01d64cb0();
      local_40 = lVar6;
      if (local_58 == lVar7) {
        if ((bVar2) || (local_58 == 0)) {
joined_r0x01d7041d:
          lVar4 = lVar7;
          bVar3 = bVar2;
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          goto joined_r0x01d7044a;
        }
        if (local_50 == '\0') {
          FUN_00d50b00();
          goto LAB_01d70430;
        }
        bVar2 = true;
        bVar3 = true;
        if (lVar7 == 0) goto LAB_01d70450;
LAB_01d70394:
        iVar5 = FUN_01d5b230();
        if (local_44 < iVar5) {
          FUN_01d5b240();
          if (!bVar2) goto LAB_01d704d9;
          goto LAB_01d704cc;
        }
        iVar5 = FUN_01d5b230();
        local_44 = local_44 - iVar5;
      }
      else {
        lVar4 = local_58;
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
          bVar3 = true;
          if ((bVar2) && (lVar7 != 0)) {
            FUN_00d50b20();
            lVar7 = local_58;
LAB_01d70430:
            bVar2 = true;
            goto joined_r0x01d7041d;
          }
        }
        else {
          if ((bVar2) && (lVar7 != 0)) {
            FUN_00d50b20();
          }
          bVar3 = true;
        }
joined_r0x01d7044a:
        bVar2 = bVar3;
        lVar7 = lVar4;
        bVar3 = bVar2;
        if (lVar7 != 0) goto LAB_01d70394;
LAB_01d70450:
        bVar2 = bVar3;
        if (local_44 == 0) {
          *(undefined1 *)(unaff_RDI + 1) = 0;
          if (bVar1) {
            *unaff_RDI = lVar6;
            *(undefined1 *)(unaff_RDI + 1) = 1;
            return unaff_RDI;
          }
          if (lVar6 != 0) {
            FUN_00d50b00();
          }
          *unaff_RDI = lVar6;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          return unaff_RDI;
        }
        local_44 = local_44 + -1;
        lVar7 = 0;
      }
      iVar8 = iVar8 + 1;
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    if (bVar2) {
LAB_01d704cc:
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
    }
LAB_01d704d9:
    if ((bVar1) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  return unaff_RDI;
}




// ============================================================
// @01d642c0 — 741 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01d642eb) */
/* WARNING: Removing unreachable block (ram,0x01d642f4) */

void FUN_01d642c0(void)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong local_28;
  char local_20;
  
  FUN_00d50cd0();
  uVar2 = (**(code **)(*(longlong *)*unaff_RSI + 0x418))();
  *(undefined1 *)(unaff_RDI + 0x18) = uVar2;
  uVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x428))();
  *(undefined4 *)(unaff_RDI + 0x1c) = uVar3;
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar1 = *(longlong *)(unaff_RDI + 0x20);
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        *(undefined8 *)(unaff_RDI + 0x20) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(longlong *)(unaff_RDI + 0x20);
        *(longlong *)(unaff_RDI + 0x20) = local_28;
      }
    }
    else {
      local_20 = '\0';
      *(longlong *)(unaff_RDI + 0x20) = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar1 = *(longlong *)(unaff_RDI + 0x28);
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        *(undefined8 *)(unaff_RDI + 0x28) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(longlong *)(unaff_RDI + 0x28);
        *(longlong *)(unaff_RDI + 0x28) = local_28;
      }
    }
    else {
      local_20 = '\0';
      *(longlong *)(unaff_RDI + 0x28) = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar1 = *(longlong *)(unaff_RDI + 0x30);
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        *(undefined8 *)(unaff_RDI + 0x30) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(longlong *)(unaff_RDI + 0x30);
        *(longlong *)(unaff_RDI + 0x30) = local_28;
      }
    }
    else {
      local_20 = '\0';
      *(longlong *)(unaff_RDI + 0x30) = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  *(longlong *)(unaff_RDI + 0x38) = local_28;
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar1 = *(longlong *)(unaff_RDI + 0x40);
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        *(undefined8 *)(unaff_RDI + 0x40) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(longlong *)(unaff_RDI + 0x40);
        *(longlong *)(unaff_RDI + 0x40) = local_28;
      }
    }
    else {
      local_20 = '\0';
      *(longlong *)(unaff_RDI + 0x40) = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  uVar2 = (**(code **)(*(longlong *)*unaff_RSI + 0x418))();
  *(undefined1 *)(unaff_RDI + 0x48) = uVar2;
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar1 = *(longlong *)(unaff_RDI + 0x50);
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        *(undefined8 *)(unaff_RDI + 0x50) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(longlong *)(unaff_RDI + 0x50);
        *(longlong *)(unaff_RDI + 0x50) = local_28;
      }
    }
    else {
      local_20 = '\0';
      *(longlong *)(unaff_RDI + 0x50) = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01d6e6c0 — 719 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01d6e920) */
/* WARNING: Removing unreachable block (ram,0x01d6e929) */
/* WARNING: Removing unreachable block (ram,0x01d6e801) */

int FUN_01d6e6c0(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int local_5c;
  longlong local_58;
  char local_50;
  longlong local_38;
  
  if (*(longlong *)(unaff_RDI + 0x220) == 0) {
    local_5c = -1;
  }
  else {
    bVar1 = false;
    local_38 = 0;
    bVar2 = false;
    local_5c = 0;
    lVar6 = 0;
    for (iVar5 = 0; iVar4 = FUN_01d5b230(), lVar7 = lVar6, iVar5 < iVar4; iVar5 = iVar5 + 1) {
      FUN_01d5b240();
      if (local_58 == lVar6) {
        if ((bVar1) || (local_58 == 0)) {
joined_r0x01d6e7e9:
          lVar7 = lVar6;
          bVar3 = bVar1;
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar3 = true;
          if (local_50 == '\0') {
            FUN_00d50b00();
            goto LAB_01d6e7d5;
          }
        }
      }
      else {
        lVar7 = local_58;
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
          bVar3 = true;
          if ((bVar1) && (lVar6 != 0)) {
            FUN_00d50b20();
            lVar6 = local_58;
LAB_01d6e7d5:
            bVar1 = true;
            goto joined_r0x01d6e7e9;
          }
        }
        else {
          bVar3 = true;
          if ((bVar1) && (lVar6 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      bVar1 = bVar3;
      if (*unaff_RSI == lVar7) goto joined_r0x01d6e95d;
      FUN_01d64cb0();
      if (local_58 == local_38) {
        lVar8 = local_38;
        bVar3 = bVar2;
        if ((!bVar2) && (local_58 != 0)) {
          if (local_50 != '\0') goto LAB_01d6e885;
          FUN_00d50b00();
          bVar3 = true;
        }
LAB_01d6e8e0:
        bVar2 = bVar3;
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        lVar8 = local_58;
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
          bVar3 = true;
          if ((bVar2) && (local_38 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_01d6e8e0;
        }
        if ((bVar2) && (local_38 != 0)) {
          FUN_00d50b20();
        }
LAB_01d6e885:
        bVar2 = true;
      }
      if (lVar8 == 0) {
        iVar4 = 1;
        lVar8 = 0;
      }
      else {
        iVar4 = FUN_01d5e2e0();
        if (-1 < iVar4) {
          local_5c = local_5c + iVar4;
          local_38 = lVar8;
          if (bVar2) goto LAB_01d6e97d;
          goto LAB_01d6e98d;
        }
        iVar4 = FUN_01d5b230();
      }
      local_5c = local_5c + iVar4;
      lVar6 = lVar7;
      local_38 = lVar8;
    }
    local_5c = -1;
joined_r0x01d6e95d:
    if (bVar2) {
LAB_01d6e97d:
      if (local_38 != 0) {
        FUN_00d50b20();
      }
    }
LAB_01d6e98d:
    if ((bVar1) && (lVar7 != 0)) {
      FUN_00d50b20();
    }
  }
  return local_5c;
}




// ============================================================
// @01d6fa10 — 649 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01d6fc46) */
/* WARNING: Removing unreachable block (ram,0x01d6fc1a) */
/* WARNING: Removing unreachable block (ram,0x01d6fb9d) */
/* WARNING: Removing unreachable block (ram,0x01d6fba9) */
/* WARNING: Removing unreachable block (ram,0x01d6fc11) */
/* WARNING: Removing unreachable block (ram,0x01d6fc3d) */
/* WARNING: Removing unreachable block (ram,0x01d6fc6c) */
/* WARNING: Removing unreachable block (ram,0x01d6fc75) */

void FUN_01d6fa10(undefined8 param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined4 uVar6;
  longlong local_50;
  char local_48;
  longlong *local_40;
  
  if (*unaff_RSI != 0) goto LAB_01d6fae6;
  FUN_00d8ede0();
  lVar1 = *unaff_RSI;
  if (lVar1 == local_50) {
    if (((char)unaff_RSI[1] != '\0') || (local_50 == 0)) goto LAB_01d6fad2;
    if (local_48 == '\0') {
      FUN_00d50b00();
      goto LAB_01d6facb;
    }
  }
  else {
    lVar2 = unaff_RSI[1];
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      *unaff_RSI = local_50;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_01d6facb:
      local_40 = unaff_RSI + 1;
      *(undefined1 *)local_40 = 1;
LAB_01d6fad2:
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01d6fae6;
    }
    *unaff_RSI = local_50;
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
  }
  local_40 = unaff_RSI + 1;
  *(undefined1 *)local_40 = 1;
LAB_01d6fae6:
  if (*(longlong *)(unaff_RDI + 0x220) != 0) {
    iVar4 = 0;
    if (-1 < param_2) {
      iVar4 = param_2;
    }
    iVar3 = FUN_01d6fde0();
    if (iVar3 < iVar4) {
      iVar4 = FUN_01d6fde0();
    }
    puVar5 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &DAT_026846d0;
    puVar5[2] = &DAT_02684a60;
    *(undefined1 *)(puVar5 + 3) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x1c) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x24) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x2c) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x34) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x3a) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x42) = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    *(undefined2 *)(puVar5 + 0xe) = 0;
    (*DAT_026846e8)();
    FUN_01d64eb0();
    lVar1 = DAT_027f0ad8;
    if (DAT_027f0ad8 != 0) {
      FUN_00d50b00();
    }
    FUN_01d65120();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_01d65190();
    uVar6 = FUN_01d651e0();
    FUN_01d5d7f0(uVar6,iVar4);
    FUN_01d6ef90();
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01d694d0 — 593 bytes
// ============================================================

void FUN_01d694d0(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong local_38;
  char local_30;
  
  iVar4 = FUN_01d3a5a0();
  if (iVar4 == 1) {
    cVar3 = (**(code **)(*unaff_RDI + 0xb30))();
    if ((cVar3 != '\0') && (iVar4 = FUN_01d3b620(), iVar4 == 1)) {
      FUN_01d3abf0();
      uVar5 = FUN_01e466c0();
      cVar3 = (**(code **)(*unaff_RDI + 0xb30))();
      if (cVar3 != '\0') {
        uVar6 = FUN_01e08670();
        cVar3 = FUN_00d05410(uVar5,uVar6,param_2);
        if (cVar3 != '\0') {
          (**(code **)(*unaff_RDI + 0xb38))();
        }
      }
    }
    FUN_01e42250();
    *(undefined4 *)(unaff_RDI + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x01d6958e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_RDI + 0x620))();
    return;
  }
  iVar4 = FUN_01d3a5a0();
  if (iVar4 == 2) {
    FUN_01d3d730();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    (**(code **)(*unaff_RDI + 0x958))();
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    iVar4 = FUN_01d3a5a0();
    if (iVar4 != 4) {
      return;
    }
    lVar1 = unaff_RDI[0x48];
    iVar4 = FUN_01d3b590();
    if (iVar4 <= (int)lVar1) goto LAB_01d696a1;
    FUN_01d3d730();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    (**(code **)(*unaff_RDI + 0x958))();
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = *unaff_RSI;
  lVar2 = unaff_RDI[0x49];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    unaff_RDI[0x49] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
LAB_01d696a1:
  uVar5 = FUN_01d3b590();
  *(undefined4 *)(unaff_RDI + 0x48) = uVar5;
  FUN_01d11e80();
  return;
}




// ============================================================
// @01d661f0 — 584 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01d6634e) */
/* WARNING: Removing unreachable block (ram,0x01d66357) */
/* WARNING: Removing unreachable block (ram,0x01d663b9) */
/* WARNING: Removing unreachable block (ram,0x01d663c2) */

void FUN_01d661f0(void)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  undefined8 *puVar4;
  longlong unaff_RDI;
  undefined4 uVar5;
  longlong *local_68;
  char local_60;
  
  if (unaff_RDI != 0) {
    FUN_00d50b00();
  }
  if (*(longlong *)(unaff_RDI + 0x20) == 0) {
    bVar3 = true;
    bVar2 = false;
    local_68 = (longlong *)0x0;
    puVar4 = (undefined8 *)0x0;
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &DAT_026717b8;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    *(undefined8 *)((longlong)puVar4 + 0x2c) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x34) = 0;
    (*DAT_026717d0)();
    lVar1 = *(longlong *)(unaff_RDI + 0x20);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01caeb20();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = *(longlong *)(unaff_RDI + 0x58);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01caeb80();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b00();
    FUN_01caeb70();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    FUN_01f27fe0();
    (**(code **)(*local_68 + 0x4c0))();
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar5 = FUN_01d65ec0();
    if (local_68 == (longlong *)0x0) {
      bVar2 = false;
      local_68 = (longlong *)0x0;
      lVar1 = *(longlong *)(unaff_RDI + 0x58);
    }
    else {
      if (local_60 == '\0') {
        uVar5 = FUN_00d50b00();
      }
      (**(code **)(*local_68 + 0x3b8))(uVar5,1);
      bVar2 = true;
      lVar1 = *(longlong *)(unaff_RDI + 0x58);
    }
    if (lVar1 != 0) {
      *(undefined8 *)(unaff_RDI + 0x58) = 0;
      FUN_00d50b20();
    }
    bVar3 = false;
  }
  FUN_00d50b20();
  if ((bVar2) && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar3 && puVar4 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01d6c2d0 — 558 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01d6c327) */
/* WARNING: Removing unreachable block (ram,0x01d6c330) */

void FUN_01d6c2d0(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int in_EDX;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong local_38;
  char local_30;
  
  fVar4 = (float)((ulonglong)param_2 >> 0x20);
  fVar3 = (float)param_2;
  FUN_01cc0ca0(param_1,in_EDX);
  if (in_EDX == 0x10) {
    (**(code **)(*unaff_RDI + 0x560))(param_1,fVar3,param_3,param_4);
    uVar1 = FUN_00d05530();
    (**(code **)(*unaff_RDI + 0x3a0))();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_01d488d0();
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    fVar2 = (float)((ulonglong)uVar1 >> 0x20) + DAT_02390d00;
    fVar4 = fVar4 * DAT_0239011c;
    fVar3 = fVar3 + (float)uVar1 + DAT_02390d00;
    (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
    (**(code **)(*unaff_RDI + 0x398))();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_01d488d0();
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    fVar4 = fVar4 + fVar2 + DAT_02390124;
    (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))((float)uVar1,fVar4,fVar3,fVar4);
  }
  return;
}




// ============================================================
// @01d66f10 — 530 bytes
// ============================================================

void FUN_01d66f10(void)

{
  longlong lVar1;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  if (*(char *)(unaff_RDI + 0x49) != '\0') {
    if (*(longlong *)(unaff_RDI + 0x30) == 0) {
      if (*(longlong *)(unaff_RDI + 0x20) != 0) {
        FUN_00d50b00();
        FUN_00d50b20();
        local_30 = 0;
        (**(code **)(*(longlong *)(unaff_RDI + 0x10) + 0x10))();
        FUN_00d50b00();
        local_30 = '\x01';
        local_78 = *(longlong *)(unaff_RDI + 0x20);
        local_38 = (longlong *)(unaff_RDI + 0x10);
        if (local_78 != 0) {
          FUN_00d50b00();
        }
        local_70 = '\x01';
        lVar1 = *(longlong *)(unaff_RDI + 0x28);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_60 = '\x01';
        local_68 = lVar1;
        FUN_00e3fb50(&local_68,&local_78);
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
          (**(code **)(*local_38 + 0x10))();
          FUN_00d50b20();
        }
      }
    }
    else {
      local_40 = 0;
      (**(code **)(*(longlong *)(unaff_RDI + 0x10) + 0x10))();
      FUN_00d50b00();
      local_98 = DAT_027f0988;
      local_40 = '\x01';
      local_48 = (longlong *)(unaff_RDI + 0x10);
      if (DAT_027f0988 != 0) {
        FUN_00d50b00();
      }
      local_90 = '\x01';
      lVar1 = *(longlong *)(unaff_RDI + 0x28);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_80 = '\x01';
      local_88 = lVar1;
      FUN_00e3fb50(&local_88,&local_98);
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        (**(code **)(*local_48 + 0x10))();
        FUN_00d50b20();
      }
    }
  }
  if (*(longlong **)(unaff_RDI + 0x30) != (longlong *)0x0) {
    local_58 = *unaff_RSI;
    local_50 = '\0';
    (**(code **)(**(longlong **)(unaff_RDI + 0x30) + 0x370))();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @01d646c0 — 523 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01d646fb) */
/* WARNING: Removing unreachable block (ram,0x01d64707) */
/* WARNING: Removing unreachable block (ram,0x01d6481e) */
/* WARNING: Removing unreachable block (ram,0x01d64827) */

void FUN_01d646c0(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  
  FUN_00d50de0();
  (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
  (**(code **)(*(longlong *)*unaff_RSI + 0x3b8))();
  plVar1 = (longlong *)*unaff_RSI;
  lVar2 = *(longlong *)(unaff_RDI + 0x20);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x400))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  plVar1 = (longlong *)*unaff_RSI;
  lVar2 = *(longlong *)(unaff_RDI + 0x28);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x400))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  plVar1 = (longlong *)*unaff_RSI;
  lVar2 = *(longlong *)(unaff_RDI + 0x30);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x400))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x408))();
  plVar1 = (longlong *)*unaff_RSI;
  lVar2 = *(longlong *)(unaff_RDI + 0x40);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x400))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
  plVar1 = (longlong *)*unaff_RSI;
  lVar2 = *(longlong *)(unaff_RDI + 0x50);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x400))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01d65ec0 — 516 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01d660ad) */
/* WARNING: Removing unreachable block (ram,0x01d660b6) */
/* WARNING: Removing unreachable block (ram,0x01d6601f) */
/* WARNING: Removing unreachable block (ram,0x01d6602c) */

void FUN_01d65ec0(undefined8 param_1)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RSI + 0x20) == 0) {
LAB_01d66058:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar4 = *(longlong *)(unaff_RSI + 0x50);
    if (lVar4 == 0) {
      plVar2 = *(longlong **)(unaff_RSI + 0x58);
      if (plVar2 != (longlong *)0x0) {
        lVar4 = *(longlong *)(unaff_RSI + 0x20);
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        FUN_01caeba0();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        cVar3 = (**(code **)(*plVar2 + 0x3b8))(param_1,0);
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') {
          *(undefined1 *)(unaff_RDI + 1) = 0;
          lVar4 = *(longlong *)(unaff_RSI + 0x58);
          if (lVar4 != 0) goto LAB_01d65f02;
          goto LAB_01d65f0a;
        }
      }
      lVar4 = local_40;
      if ((*(longlong *)(unaff_RSI + 0x38) == 0) || (FUN_01d62b90(), local_40 == 0)) {
        FUN_01f27fe0();
        iVar1 = *(int *)(local_40 + 0xe0);
        if (local_38 != '\0') {
          FUN_00d50b20();
        }
        if (iVar1 != 0) goto LAB_01d66058;
        FUN_01f27fe0();
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
            *unaff_RDI = local_40;
            *(undefined1 *)(unaff_RDI + 1) = 1;
            return;
          }
          lVar4 = 0;
        }
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
LAB_01d65f02:
      FUN_00d50b00();
    }
LAB_01d65f0a:
    *unaff_RDI = lVar4;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  return;
}



