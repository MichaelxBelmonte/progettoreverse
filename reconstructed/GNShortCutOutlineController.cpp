// Reconstructed implementation of GNShortCutOutlineController
// From MikeCore binary — reverse-engineered pseudocode

#include "GNShortCutOutlineController.h"

// ============================================================
// @01f83dc0 — 4440 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f83dc0(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong unaff_RDI;
  undefined4 uVar8;
  longlong local_280;
  char local_278;
  longlong local_270;
  char local_268;
  longlong local_260;
  char local_258;
  longlong local_250;
  char local_248;
  longlong local_240;
  char local_238;
  longlong local_230;
  char local_228;
  longlong *local_220;
  char local_218;
  longlong local_210;
  char local_208;
  undefined8 *local_200;
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
  longlong local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong local_140;
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
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  longlong local_40;
  char local_38;
  
  FUN_01e534b0();
  (**(code **)(**(longlong **)(unaff_RDI + 0x80) + 0x7b8))();
  lVar7 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_48 = lVar7;
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00193110();
  *puVar4 = &DAT_026c2050;
  puVar4[2] = &DAT_026c2ad0;
  *(undefined4 *)(puVar4 + 0x5c) = 0;
  (*DAT_026c2068)();
  puVar6 = *(undefined8 **)(unaff_RDI + 0x80);
  if (puVar6 == puVar4) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x80) = puVar4;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x80) + 0x4e8))(_DAT_02423bb0);
  plVar5 = *(longlong **)(unaff_RDI + 0x80);
  FUN_00d50b00();
  (**(code **)(*plVar5 + 0x7f8))();
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)(unaff_RDI + 0x70) + 0x10))();
  FUN_00d50b00();
  FUN_01ed2d20();
  if ((longlong *)(unaff_RDI + 0x70) != (longlong *)0x0) {
    (**(code **)(*(longlong *)(unaff_RDI + 0x70) + 0x10))();
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)(unaff_RDI + 0x78) + 0x10))();
  FUN_00d50b00();
  FUN_01de09b0();
  if ((longlong *)(unaff_RDI + 0x78) != (longlong *)0x0) {
    (**(code **)(*(longlong *)(unaff_RDI + 0x78) + 0x10))();
    FUN_00d50b20();
  }
  FUN_01dce540();
  FUN_01dce520();
  lVar7 = *(longlong *)(unaff_RDI + 0x80);
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  FUN_01d978b0();
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_0006daf0();
  *(undefined4 *)(plVar5 + 0x27) = 0;
  plVar5[0x2e] = 0;
  *(undefined4 *)(plVar5 + 0x2f) = 0;
  plVar5[0x30] = 0;
  *(undefined1 *)(plVar5 + 0x31) = 0;
  plVar5[0x28] = 0;
  plVar5[0x29] = 0;
  *(undefined4 *)(plVar5 + 0x2a) = 0;
  plVar5[0x2b] = 0;
  plVar5[0x2c] = 0;
  *(undefined8 *)((longlong)plVar5 + 0x165) = 0;
  *(undefined8 *)((longlong)plVar5 + 0x18c) = 0;
  *(undefined8 *)((longlong)plVar5 + 0x194) = 0;
  *(undefined8 *)((longlong)plVar5 + 0x199) = 0;
  plVar5[0x35] = 0;
  plVar5[0x36] = 0;
  plVar5[0x37] = 0;
  plVar5[0x38] = 0;
  *plVar5 = (longlong)&DAT_02683800;
  plVar5[2] = (longlong)&DAT_026842c8;
  plVar5[0x39] = 0;
  plVar5[0x3a] = 0;
  (*DAT_02683818)();
  (**(code **)(*plVar5 + 0x9f0))();
  (**(code **)(*plVar5 + 0x9c8))();
  lVar7 = DAT_027f1fc8;
  if (DAT_027f1fc8 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_02801000;
  if (DAT_02801000 != 0) {
    FUN_00d50b00();
  }
  local_280 = lVar1;
  local_278 = '\x01';
  local_270 = 0;
  local_268 = '\0';
  FUN_00d31230(&local_270,&local_280);
  local_a8 = local_40;
  local_a0 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_a0 = '\x01';
  FUN_01dcbfc0(DAT_023b5d84);
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_268 != '\0') && (local_270 != 0)) {
    FUN_00d50b20();
  }
  if ((local_278 != '\0') && (local_280 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  lVar7 = DAT_027f1fc8;
  if (DAT_027f1fc8 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_02801008;
  local_260 = lVar7;
  local_258 = '\x01';
  if (DAT_02801008 != 0) {
    FUN_00d50b00();
  }
  local_250 = lVar1;
  local_248 = '\x01';
  local_240 = 0;
  local_238 = '\0';
  FUN_00d31230(&local_240,&local_250);
  local_98 = local_40;
  local_90 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_90 = '\x01';
  uVar8 = FUN_01dcbfc0(DAT_023b8c38);
  if ((local_90 != '\0') && (local_98 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  if ((local_238 != '\0') && (local_240 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  if ((local_248 != '\0') && (local_250 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  if ((local_258 != '\0') && (local_260 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  FUN_01dcc290(uVar8,0);
  local_230 = DAT_027feca0;
  if (DAT_027feca0 != 0) {
    FUN_00d50b00();
  }
  local_228 = '\x01';
  uVar8 = FUN_01db97f0();
  if ((local_228 != '\0') && (local_230 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  FUN_01dcc290(uVar8,0);
  local_218 = '\0';
  local_220 = plVar5;
  FUN_01db9640();
  if ((local_218 != '\0') && (local_220 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_0006daf0();
  *(undefined4 *)(puVar6 + 0x27) = 0;
  puVar6[0x2e] = 0;
  *(undefined4 *)(puVar6 + 0x2f) = 0;
  puVar6[0x30] = 0;
  *(undefined1 *)(puVar6 + 0x31) = 0;
  puVar6[0x28] = 0;
  puVar6[0x29] = 0;
  *(undefined4 *)(puVar6 + 0x2a) = 0;
  puVar6[0x2b] = 0;
  puVar6[0x2c] = 0;
  *(undefined8 *)((longlong)puVar6 + 0x165) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x18c) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x194) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x199) = 0;
  puVar6[0x35] = 0;
  puVar6[0x36] = 0;
  puVar6[0x37] = 0;
  puVar6[0x38] = 0;
  puVar6[0x45] = 0;
  *(undefined2 *)(puVar6 + 0x46) = 0;
  puVar6[0x47] = 0;
  puVar6[0x3a] = 0;
  puVar6[0x3b] = 0;
  *(undefined4 *)(puVar6 + 0x3c) = 0;
  puVar6[0x3f] = 0;
  puVar6[0x40] = 0;
  puVar6[0x3d] = 0;
  puVar6[0x3e] = 0;
  *(undefined8 *)((longlong)puVar6 + 0x205) = 0;
  puVar6[0x42] = 0;
  puVar6[0x43] = 0;
  *(undefined8 *)((longlong)puVar6 + 0x21d) = 0;
  *puVar6 = &DAT_026850b0;
  puVar6[2] = &DAT_02685c08;
  puVar6[0x39] = &DAT_02685c48;
  *(undefined4 *)(puVar6 + 0x48) = 0;
  puVar6[0x49] = 0;
  *(undefined1 *)(puVar6 + 0x4a) = 0;
  (*DAT_026850c8)();
  uVar8 = FUN_01e073f0();
  FUN_01dcc290(uVar8,1);
  local_210 = DAT_02704000;
  if (DAT_02704000 != 0) {
    FUN_00d50b00();
  }
  local_208 = '\x01';
  uVar8 = FUN_01db97f0();
  if ((local_208 != '\0') && (local_210 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  FUN_01dcc290(uVar8,1);
  local_1f8 = '\0';
  local_200 = puVar6;
  uVar8 = FUN_01db9640();
  if ((local_1f8 != '\0') && (local_200 != (undefined8 *)0x0)) {
    uVar8 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  FUN_01dcc290(uVar8,1);
  uVar8 = FUN_01db9690(DAT_02423bc0);
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  FUN_01dcc290(uVar8,1);
  FUN_01db96a0(DAT_02423bc0);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x80) + 0x920))();
  FUN_01dcb680();
  lVar7 = DAT_02801010;
  if (*(longlong *)(unaff_RDI + 0x88) != 0) {
    if (DAT_02801010 != 0) {
      FUN_00d50b00();
    }
    local_1f0 = lVar7;
    local_1e8 = '\x01';
    FUN_01d51a40();
    local_88 = local_40;
    local_80 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_80 = '\x01';
    FUN_01e0cfd0();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1e8 != '\0') && (local_1f0 != 0)) {
      FUN_00d50b20();
    }
    lVar7 = DAT_02801018;
    plVar5 = *(longlong **)(unaff_RDI + 0x88);
    if (DAT_02801018 != 0) {
      FUN_00d50b00();
    }
    local_1e0 = lVar7;
    local_1d8 = '\x01';
    (**(code **)(*plVar5 + 0xa10))();
    if ((local_1d8 != '\0') && (local_1e0 != 0)) {
      FUN_00d50b20();
    }
    plVar5 = *(longlong **)(unaff_RDI + 0x88);
    FUN_00d50b00();
    (**(code **)(*plVar5 + 0xa20))();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    FUN_01e07420();
    *(undefined1 *)(*(longlong *)(unaff_RDI + 0x88) + 0x230) = 1;
  }
  lVar7 = DAT_02801010;
  if (*(longlong *)(unaff_RDI + 0x90) != 0) {
    if (DAT_02801010 != 0) {
      FUN_00d50b00();
    }
    local_1d0 = lVar7;
    local_1c8 = '\x01';
    FUN_01d51a40();
    local_78 = local_40;
    local_70 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_70 = '\x01';
    FUN_01e0cfd0();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1c8 != '\0') && (local_1d0 != 0)) {
      FUN_00d50b20();
    }
    lVar7 = DAT_02801018;
    plVar5 = *(longlong **)(unaff_RDI + 0x90);
    if (DAT_02801018 != 0) {
      FUN_00d50b00();
    }
    local_1c0 = lVar7;
    local_1b8 = '\x01';
    (**(code **)(*plVar5 + 0xa10))();
    if ((local_1b8 != '\0') && (local_1c0 != 0)) {
      FUN_00d50b20();
    }
    plVar5 = *(longlong **)(unaff_RDI + 0x90);
    FUN_00d50b00();
    (**(code **)(*plVar5 + 0xa20))();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    FUN_01e07420();
    *(undefined1 *)(*(longlong *)(unaff_RDI + 0x90) + 0x230) = 1;
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_1b0 = DAT_02801020;
  if (DAT_02801020 != 0) {
    FUN_00d50b00();
  }
  local_1a8 = '\x01';
  local_1a0 = 0;
  local_198 = '\0';
  FUN_00d41430(&local_1a0,&local_1b0);
  lVar7 = local_48;
  if ((local_198 != '\0') && (local_1a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1a8 != '\0') && (local_1b0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x98) != 0) {
    FUN_00d403d0();
    FUN_00d50b00();
    local_190 = DAT_027f0e10;
    if (DAT_027f0e10 != 0) {
      FUN_00d50b00();
    }
    local_188 = '\x01';
    local_b0 = 0;
    lVar7 = *(longlong *)(unaff_RDI + 0x98);
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    local_b0 = '\x01';
    local_b8 = lVar7;
    FUN_00d41430(&local_b8,&local_190);
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_188 != '\0') && (local_190 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    uVar8 = FUN_00d6f370();
    local_180 = DAT_02800fd0;
    if (DAT_02800fd0 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_178 = '\x01';
    cVar3 = FUN_00d70f90(uVar8,0);
    if ((local_178 != '\0') && (local_180 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') {
      FUN_01d77960();
      local_170 = DAT_02801030;
      if (DAT_02801030 != 0) {
        FUN_00d50b00();
      }
      local_168 = '\x01';
      FUN_01d5e640();
      if ((local_168 != '\0') && (local_170 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    uVar8 = FUN_01d77960();
    local_160 = DAT_02800fe0;
    if (DAT_02800fe0 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_158 = '\x01';
    FUN_01d5e6e0(uVar8,&local_160);
    lVar7 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_158 != '\0') && (local_160 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    local_140 = lVar7;
    FUN_01d66da0();
    uVar8 = FUN_00d46300();
    local_58 = local_150;
    local_50 = 0;
    lVar1 = DAT_02801038;
    if (local_148 == '\0') {
      if (local_150 != 0) {
        uVar8 = FUN_00d50b00();
        lVar1 = DAT_02801038;
      }
    }
    else {
      local_148 = '\0';
    }
    local_50 = '\x01';
    DAT_02801038 = lVar1;
    if (lVar1 != 0) {
      local_50 = '\x01';
      uVar8 = FUN_00d50b00();
    }
    local_38 = '\0';
    local_40 = lVar1;
    FUN_00ca0840(uVar8,&local_40);
    lVar7 = local_48;
    lVar2 = local_140;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_148 != '\0') && (local_150 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  FUN_00d50b20();
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01f822e0 — 2057 bytes
// str: ""GNShortCutOutlineController""
// str: ""handleExport""
// str: ""handleReset""
// str: ""handleCut""
// str: ""handleImport""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f822e0(void)

{
  int iVar1;
  
  if (DAT_028bb0e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d5790 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_028010b8 = FUN_00015ff0();
          _DAT_028010a0 = "GNShortCutOutlineController";
          _DAT_028010a8 = 0xa0;
          _DAT_028010b0 = FUN_0005a9c0;
          _DAT_028010c0 = 0;
          uRam00000000028010c8 = 0;
          _DAT_028010d0 = 0;
          uRam00000000028010d8 = 0;
          _DAT_028010e0 = 0;
          uRam00000000028010e8 = 0;
          _DAT_028010f0 = 0;
          uRam00000000028010f8 = 0;
          _DAT_02801100 = 0;
          uRam0000000002801108 = 0;
          _DAT_02801110 = 0;
          uRam0000000002801118 = 0;
          _DAT_02801120 = 0;
          uRam0000000002801128 = 0;
          _DAT_02801130 = 0;
          uRam0000000002801138 = 0;
          _DAT_02801140 = 0;
          uRam0000000002801148 = 0;
          _DAT_02801150 = 0;
          uRam0000000002801158 = 0;
          _DAT_02801160 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028bb0a0 = "handleImport";
      _DAT_028bb0a8 = &DAT_028010a0;
      _DAT_028bb0b0 = 0;
      _DAT_028bb0b8 = &DAT_02801318;
      _DAT_028bb0c0 = FUN_01f913b0;
      _DAT_028bb0c8 = FUN_01f85db0;
      _DAT_028bb0d0 = 0;
      uRam00000000028bb0d8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028bb128 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d5790 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_028010b8 = FUN_00015ff0();
          _DAT_028010a0 = "GNShortCutOutlineController";
          _DAT_028010a8 = 0xa0;
          _DAT_028010b0 = FUN_0005a9c0;
          _DAT_028010c0 = 0;
          uRam00000000028010c8 = 0;
          _DAT_028010d0 = 0;
          uRam00000000028010d8 = 0;
          _DAT_028010e0 = 0;
          uRam00000000028010e8 = 0;
          _DAT_028010f0 = 0;
          uRam00000000028010f8 = 0;
          _DAT_02801100 = 0;
          uRam0000000002801108 = 0;
          _DAT_02801110 = 0;
          uRam0000000002801118 = 0;
          _DAT_02801120 = 0;
          uRam0000000002801128 = 0;
          _DAT_02801130 = 0;
          uRam0000000002801138 = 0;
          _DAT_02801140 = 0;
          uRam0000000002801148 = 0;
          _DAT_02801150 = 0;
          uRam0000000002801158 = 0;
          _DAT_02801160 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028bb0e8 = "handleExport";
      _DAT_028bb0f0 = &DAT_028010a0;
      _DAT_028bb0f8 = 0;
      _DAT_028bb100 = &DAT_02801318;
      _DAT_028bb108 = FUN_01f913b0;
      _DAT_028bb110 = FUN_01f872e0;
      _DAT_028bb118 = 0;
      uRam00000000028bb120 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028bb170 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d5790 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_028010b8 = FUN_00015ff0();
          _DAT_028010a0 = "GNShortCutOutlineController";
          _DAT_028010a8 = 0xa0;
          _DAT_028010b0 = FUN_0005a9c0;
          _DAT_028010c0 = 0;
          uRam00000000028010c8 = 0;
          _DAT_028010d0 = 0;
          uRam00000000028010d8 = 0;
          _DAT_028010e0 = 0;
          uRam00000000028010e8 = 0;
          _DAT_028010f0 = 0;
          uRam00000000028010f8 = 0;
          _DAT_02801100 = 0;
          uRam0000000002801108 = 0;
          _DAT_02801110 = 0;
          uRam0000000002801118 = 0;
          _DAT_02801120 = 0;
          uRam0000000002801128 = 0;
          _DAT_02801130 = 0;
          uRam0000000002801138 = 0;
          _DAT_02801140 = 0;
          uRam0000000002801148 = 0;
          _DAT_02801150 = 0;
          uRam0000000002801158 = 0;
          _DAT_02801160 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028bb130 = "handleExportText";
      _DAT_028bb138 = &DAT_028010a0;
      _DAT_028bb140 = 0;
      _DAT_028bb148 = &DAT_02801318;
      _DAT_028bb150 = FUN_01f913b0;
      _DAT_028bb158 = FUN_01f88e80;
      _DAT_028bb160 = 0;
      uRam00000000028bb168 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028bb1b8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d5790 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_028010b8 = FUN_00015ff0();
          _DAT_028010a0 = "GNShortCutOutlineController";
          _DAT_028010a8 = 0xa0;
          _DAT_028010b0 = FUN_0005a9c0;
          _DAT_028010c0 = 0;
          uRam00000000028010c8 = 0;
          _DAT_028010d0 = 0;
          uRam00000000028010d8 = 0;
          _DAT_028010e0 = 0;
          uRam00000000028010e8 = 0;
          _DAT_028010f0 = 0;
          uRam00000000028010f8 = 0;
          _DAT_02801100 = 0;
          uRam0000000002801108 = 0;
          _DAT_02801110 = 0;
          uRam0000000002801118 = 0;
          _DAT_02801120 = 0;
          uRam0000000002801128 = 0;
          _DAT_02801130 = 0;
          uRam0000000002801138 = 0;
          _DAT_02801140 = 0;
          uRam0000000002801148 = 0;
          _DAT_02801150 = 0;
          uRam0000000002801158 = 0;
          _DAT_02801160 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028bb178 = "handleReset";
      _DAT_028bb180 = &DAT_028010a0;
      _DAT_028bb188 = 0;
      _DAT_028bb190 = &DAT_02801318;
      _DAT_028bb198 = FUN_01f913b0;
      _DAT_028bb1a0 = FUN_01f89e00;
      _DAT_028bb1a8 = 0;
      uRam00000000028bb1b0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028bb200 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d5790 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_028010b8 = FUN_00015ff0();
          _DAT_028010a0 = "GNShortCutOutlineController";
          _DAT_028010a8 = 0xa0;
          _DAT_028010b0 = FUN_0005a9c0;
          _DAT_028010c0 = 0;
          uRam00000000028010c8 = 0;
          _DAT_028010d0 = 0;
          uRam00000000028010d8 = 0;
          _DAT_028010e0 = 0;
          uRam00000000028010e8 = 0;
          _DAT_028010f0 = 0;
          uRam00000000028010f8 = 0;
          _DAT_02801100 = 0;
          uRam0000000002801108 = 0;
          _DAT_02801110 = 0;
          uRam0000000002801118 = 0;
          _DAT_02801120 = 0;
          uRam0000000002801128 = 0;
          _DAT_02801130 = 0;
          uRam0000000002801138 = 0;
          _DAT_02801140 = 0;
          uRam0000000002801148 = 0;
          _DAT_02801150 = 0;
          uRam0000000002801158 = 0;
          _DAT_02801160 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028bb1c0 = "handleCut";
      _DAT_028bb1c8 = &DAT_028010a0;
      _DAT_028bb1d0 = 0;
      _DAT_028bb1d8 = &DAT_02801318;
      _DAT_028bb1e0 = FUN_01f913b0;
      _DAT_028bb1e8 = FUN_01f8b400;
      _DAT_028bb1f0 = 0;
      uRam00000000028bb1f8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028bb248 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d5790 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_028010b8 = FUN_00015ff0();
          _DAT_028010a0 = "GNShortCutOutlineController";
          _DAT_028010a8 = 0xa0;
          _DAT_028010b0 = FUN_0005a9c0;
          _DAT_028010c0 = 0;
          uRam00000000028010c8 = 0;
          _DAT_028010d0 = 0;
          uRam00000000028010d8 = 0;
          _DAT_028010e0 = 0;
          uRam00000000028010e8 = 0;
          _DAT_028010f0 = 0;
          uRam00000000028010f8 = 0;
          _DAT_02801100 = 0;
          uRam0000000002801108 = 0;
          _DAT_02801110 = 0;
          uRam0000000002801118 = 0;
          _DAT_02801120 = 0;
          uRam0000000002801128 = 0;
          _DAT_02801130 = 0;
          uRam0000000002801138 = 0;
          _DAT_02801140 = 0;
          uRam0000000002801148 = 0;
          _DAT_02801150 = 0;
          uRam0000000002801158 = 0;
          _DAT_02801160 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028bb208 = "handleSearch";
      _DAT_028bb210 = &DAT_028010a0;
      _DAT_028bb218 = 0;
      _DAT_028bb220 = &DAT_02801318;
      _DAT_028bb228 = FUN_01f913b0;
      _DAT_028bb230 = FUN_01f90590;
      _DAT_028bb238 = 0;
      uRam00000000028bb240 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @01f82cb0 — 1977 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01f830df) */
/* WARNING: Removing unreachable block (ram,0x01f830eb) */
/* WARNING: Removing unreachable block (ram,0x01f82fce) */
/* WARNING: Removing unreachable block (ram,0x01f82fc2) */
/* WARNING: Removing unreachable block (ram,0x01f8302a) */
/* WARNING: Removing unreachable block (ram,0x01f83036) */
/* WARNING: Removing unreachable block (ram,0x01f832b1) */
/* WARNING: Removing unreachable block (ram,0x01f832bd) */

void FUN_01f82cb0(longlong *param_1,int *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 *unaff_RSI;
  longlong lVar7;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  undefined8 *local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  int local_68;
  int iStack_64;
  int iStack_60;
  longlong *local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  cVar5 = (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
  if (cVar5 == '\0') {
    return;
  }
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  local_88 = puVar6;
  (*DAT_02572370)();
  (**(code **)(*(longlong *)*unaff_RSI + 1000))();
  plVar3 = local_80;
  if (local_78 == '\0') {
    if (local_80 == (longlong *)0x0) goto LAB_01f82f33;
    FUN_00d50b00();
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_80 == (longlong *)0x0) goto LAB_01f82f33;
  local_78 = '\0';
  local_80 = (longlong *)0x0;
  local_58 = plVar3;
  local_70 = plVar3;
  local_68 = -1;
  iStack_64 = 0;
  iStack_60 = 0;
  while( true ) {
    if (iStack_64 != 0) {
      if (iStack_64 < 1) {
        iStack_64 = -iStack_64;
      }
      else {
        local_68 = local_68 - iStack_64;
        FUN_00d23690();
        iStack_60 = iStack_60 + iStack_64;
        iStack_64 = 0;
      }
    }
    lVar7 = (longlong)local_68;
    local_68 = local_68 + 1;
    if (*(int *)((longlong)local_70 + 0xc) <= local_68) break;
    local_80 = *(longlong **)(local_70[2] + 8 + lVar7 * 8);
    cVar5 = (**(code **)(*local_80 + 0x398))();
    if (cVar5 != '\0') {
      (**(code **)(*local_80 + 0x370))();
      plVar3 = local_40;
      lVar7 = DAT_028bb250;
      if (DAT_028bb250 != 0) {
        FUN_00d50b00();
      }
      cVar5 = (**(code **)(*plVar3 + 0x50))();
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar5 != '\0') {
        (**(code **)(*local_80 + 0x388))();
        plVar3 = local_50;
        if (local_48 == '\0') {
          if (local_50 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_40 = plVar3;
        local_38 = '\0';
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar3 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  FUN_00115910();
  FUN_00d50b20();
LAB_01f82f33:
  puVar6 = local_88;
  FUN_00d242c0();
  lVar7 = DAT_026fce10;
  if ((*(int *)((longlong)puVar6 + 0xc) != 0) && (0 < *param_2)) {
    if (DAT_026fce10 != 0) {
      FUN_00d50b00();
    }
    FUN_01d64ce0();
    plVar3 = local_80;
    if (local_78 == '\0') {
      if (((local_80 != (longlong *)0x0) && (FUN_00d50b00(), local_78 != '\0')) &&
         (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_78 = '\0';
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    FUN_01d66c80();
    FUN_01d5d7f0();
    *param_2 = *param_2 + 1;
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  local_78 = 0;
  local_80 = (longlong *)0x0;
  local_70 = local_88;
  iStack_64 = 0;
  iStack_60 = 0;
  for (lVar7 = 0; local_68 = (int)lVar7, local_68 < *(int *)((longlong)local_88 + 0xc);
      lVar7 = lVar7 + 1) {
    local_80 = *(longlong **)(local_88[2] + lVar7 * 8);
    (**(code **)(*(longlong *)*unaff_RSI + 0x400))();
    local_58 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    (**(code **)(*local_58 + 0x390))();
    local_98 = local_50;
    local_90 = 0;
    if (local_48 == '\0') {
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_90 = '\x01';
    FUN_01da7910();
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
    if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_02800fe0;
    if (DAT_02800fe0 != 0) {
      FUN_00d50b00();
    }
    local_e8 = lVar1;
    local_e0 = '\x01';
    local_d8 = 0;
    local_d0 = '\0';
    local_c8 = *param_1;
    local_c0 = '\0';
    FUN_01d64d40(&local_d8,&local_e8,&local_c8);
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
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d66da0();
    plVar2 = DAT_02800fe8;
    local_b8 = local_58;
    local_b0 = '\0';
    if (DAT_02800fe8 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_40 = plVar2;
    local_38 = '\0';
    FUN_00ca0840();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_a8 = plVar4;
    local_a0 = '\0';
    FUN_01d5d7f0();
    if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    *param_2 = *param_2 + 1;
    if (plVar4 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00018280();
  FUN_00d50b20();
  return;
}




// ============================================================
// @01f91d90 — 1141 bytes
// str: ""GNShortCutOutlineController""
// str: ""GNActionRegistration""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01f9207b) */
/* WARNING: Removing unreachable block (ram,0x01f91fa0) */
/* WARNING: Removing unreachable block (ram,0x01f91fad) */
/* WARNING: Removing unreachable block (ram,0x01f91eb7) */
/* WARNING: Removing unreachable block (ram,0x01f91ec0) */
/* WARNING: Removing unreachable block (ram,0x01f91ef1) */
/* WARNING: Removing unreachable block (ram,0x01f91efa) */
/* WARNING: Removing unreachable block (ram,0x01f92084) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f91d90(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong **pplVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Da;
  longlong *local_40;
  char local_38;
  
  pplVar7 = &local_40;
  (**(code **)(*unaff_RDI + 0x370))();
  plVar1 = local_40;
  if ((DAT_026d5790 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    _DAT_028010b8 = FUN_00015ff0();
    _DAT_028010a0 = "GNShortCutOutlineController";
    _DAT_028010a8 = 0xa0;
    _DAT_028010b0 = FUN_0005a9c0;
    _DAT_028010c0 = 0;
    uRam00000000028010c8 = 0;
    _DAT_028010d0 = 0;
    uRam00000000028010d8 = 0;
    _DAT_028010e0 = 0;
    uRam00000000028010e8 = 0;
    _DAT_028010f0 = 0;
    uRam00000000028010f8 = 0;
    _DAT_02801100 = 0;
    uRam0000000002801108 = 0;
    _DAT_02801110 = 0;
    uRam0000000002801118 = 0;
    _DAT_02801120 = 0;
    uRam0000000002801128 = 0;
    _DAT_02801130 = 0;
    uRam0000000002801138 = 0;
    _DAT_02801140 = 0;
    uRam0000000002801148 = 0;
    _DAT_02801150 = 0;
    uRam0000000002801158 = 0;
    _DAT_02801160 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01f91df0:
    pplVar7 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_01f91df0;
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
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  iVar6 = FUN_01d3a5a0();
  if ((iVar6 != 2) || (plVar1 == (longlong *)0x0)) {
    FUN_01ed9a40();
    if ((*unaff_RSI == 0) ||
       ((iVar6 = FUN_01d3a5a0(), iVar6 != 1 || (iVar6 = FUN_01d3b630(), iVar6 != 1))))
    goto LAB_01f92095;
    FUN_01d3abf0();
    uVar8 = FUN_01e466c0();
    FUN_01dd4960();
    plVar3 = local_40;
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) goto LAB_01f91fec;
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_01f91fd8:
      if ((*(uint *)(plVar3 + 3) & 0xfffffffc) == 4) {
        iVar6 = *(int *)plVar3[2];
      }
      else {
        iVar6 = -1;
      }
      bVar2 = false;
      bVar4 = false;
      if ((int)unaff_RDI[0x5c] != iVar6) goto LAB_01f91ffd;
LAB_01f92025:
      if (iVar6 != -1) {
        FUN_01dcf710();
        uVar9 = FUN_01e0d030();
        cVar5 = FUN_00d05410(uVar8,uVar9,param_2);
        if ((cVar5 != '\0') && (plVar1 != (longlong *)0x0)) {
          FUN_01f89e00(extraout_XMM0_Da,1);
        }
      }
    }
    else {
      if (local_40 != (longlong *)0x0) goto LAB_01f91fd8;
LAB_01f91fec:
      iVar6 = -1;
      bVar2 = true;
      bVar4 = true;
      if ((int)unaff_RDI[0x5c] == -1) goto LAB_01f92025;
LAB_01f91ffd:
      bVar2 = bVar4;
      *(int *)(unaff_RDI + 0x5c) = iVar6;
      (**(code **)(*unaff_RDI + 0x620))();
    }
    if (!bVar2) {
      FUN_00d50b20();
    }
    goto LAB_01f92095;
  }
  pplVar7 = &local_40;
  FUN_01eda0f0();
  plVar3 = local_40;
  if ((DAT_026e7b78 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    _DAT_026e7ac8 = FUN_00d4fe50();
    _DAT_026e7ab0 = "GNActionRegistration";
    _DAT_026e7ab8 = 0x38;
    _DAT_026e7ac0 = FUN_001a8af0;
    _DAT_026e7ad0 = 0;
    uRam00000000026e7ad8 = 0;
    _DAT_026e7ae0 = 0;
    uRam00000000026e7ae8 = 0;
    _DAT_026e7af0 = 0;
    uRam00000000026e7af8 = 0;
    _DAT_026e7b00 = 0;
    uRam00000000026e7b08 = 0;
    _DAT_026e7b10 = 0;
    uRam00000000026e7b18 = 0;
    _DAT_026e7b20 = 0;
    uRam00000000026e7b28 = 0;
    _DAT_026e7b30 = 0;
    uRam00000000026e7b38 = 0;
    _DAT_026e7b40 = 0;
    uRam00000000026e7b48 = 0;
    _DAT_026e7b50 = 0;
    uRam00000000026e7b58 = 0;
    _DAT_026e7b60 = 0;
    uRam00000000026e7b68 = 0;
    _DAT_026e7b70 = 0;
    ___cxa_guard_release();
  }
  if (plVar3 == (longlong *)0x0) {
LAB_01f91e86:
    pplVar7 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar3 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_01f91e86;
  }
  if (*pplVar7 == (longlong *)0x0) {
    cVar5 = '\0';
  }
  else {
    cVar5 = FUN_01f8be80();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    FUN_01f8b430();
  }
LAB_01f92095:
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}



