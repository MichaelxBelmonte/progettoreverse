// Reconstructed implementation of GNUpdateCheckController
// From MikeCore binary — reverse-engineered pseudocode

#include "GNUpdateCheckController.h"

// ============================================================
// @01d01400 — 3618 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01d02067) */
/* WARNING: Removing unreachable block (ram,0x01d01e7b) */
/* WARNING: Removing unreachable block (ram,0x01d01c8f) */
/* WARNING: Removing unreachable block (ram,0x01d01a9b) */
/* WARNING: Removing unreachable block (ram,0x01d018af) */
/* WARNING: Removing unreachable block (ram,0x01d016b7) */
/* WARNING: Removing unreachable block (ram,0x01d015d9) */
/* WARNING: Removing unreachable block (ram,0x01d015e2) */
/* WARNING: Removing unreachable block (ram,0x01d017d1) */
/* WARNING: Removing unreachable block (ram,0x01d017da) */
/* WARNING: Removing unreachable block (ram,0x01d019bd) */
/* WARNING: Removing unreachable block (ram,0x01d019c6) */
/* WARNING: Removing unreachable block (ram,0x01d01ba9) */
/* WARNING: Removing unreachable block (ram,0x01d01bb2) */
/* WARNING: Removing unreachable block (ram,0x01d01d9d) */
/* WARNING: Removing unreachable block (ram,0x01d01da6) */
/* WARNING: Removing unreachable block (ram,0x01d01f89) */
/* WARNING: Removing unreachable block (ram,0x01d01f92) */
/* WARNING: Removing unreachable block (ram,0x01d02175) */
/* WARNING: Removing unreachable block (ram,0x01d0217e) */

void FUN_01d01400(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *unaff_RDI;
  longlong local_340;
  char local_338;
  longlong local_330;
  char local_328;
  longlong local_320;
  char local_318;
  longlong local_310;
  char local_308;
  longlong local_300;
  char local_2f8;
  longlong local_2f0;
  char local_2e8;
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
  longlong local_220;
  char local_218;
  longlong local_210;
  char local_208;
  longlong local_200;
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
  char local_138;
  longlong local_130;
  char local_128;
  longlong *local_120;
  char local_118;
  longlong local_30;
  char local_28;
  
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_001d7da0();
  (**(code **)(*plVar3 + 0x18))();
  lVar2 = DAT_027f3318;
  if (DAT_027f3318 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_027ef480;
  if (DAT_027ef480 != 0) {
    FUN_00d50b00();
  }
  local_340 = lVar1;
  local_338 = '\x01';
  local_330 = 0;
  local_328 = '\0';
  FUN_00d31230(&local_330,&local_340);
  lVar1 = DAT_027e7ca0;
  if ((local_28 == '\0') && (local_30 != 0)) {
    FUN_00d50b00();
    lVar1 = DAT_027e7ca0;
  }
  DAT_027e7ca0 = lVar1;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_318 = '\x01';
  local_310 = 0;
  local_308 = '\0';
  local_320 = lVar1;
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  FUN_01d5da60(&local_310,&local_320,&stack0xfffffffffffffef0);
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_308 != '\0') && (local_310 != 0)) {
    FUN_00d50b20();
  }
  if ((local_318 != '\0') && (local_320 != 0)) {
    FUN_00d50b20();
  }
  if (local_30 != 0) {
    FUN_00d50b20();
  }
  if ((local_328 != '\0') && (local_330 != 0)) {
    FUN_00d50b20();
  }
  if ((local_338 != '\0') && (local_340 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027f3318;
  if (DAT_027f3318 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_027ef488;
  local_300 = lVar2;
  local_2f8 = '\x01';
  if (DAT_027ef488 != 0) {
    FUN_00d50b00();
  }
  local_2f0 = lVar1;
  local_2e8 = '\x01';
  local_2e0 = 0;
  local_2d8 = '\0';
  FUN_00d31230(&local_2e0,&local_2f0);
  if (local_30 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_027f2a20;
  if (DAT_027f2a20 != 0) {
    FUN_00d50b00();
  }
  local_2c8 = '\x01';
  local_2c0 = 0;
  local_2b8 = '\0';
  local_2d0 = lVar2;
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  FUN_01d5da60(&local_2c0,&local_2d0,&stack0xffffffffffffff00);
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_2b8 != '\0') && (local_2c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2c8 != '\0') && (local_2d0 != 0)) {
    FUN_00d50b20();
  }
  if (local_30 != 0) {
    FUN_00d50b20();
  }
  if ((local_2d8 != '\0') && (local_2e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2e8 != '\0') && (local_2f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2f8 != '\0') && (local_300 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027f3318;
  if (DAT_027f3318 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_027ef490;
  local_2b0 = lVar2;
  local_2a8 = '\x01';
  if (DAT_027ef490 != 0) {
    FUN_00d50b00();
  }
  local_2a0 = lVar1;
  local_298 = '\x01';
  local_290 = 0;
  local_288 = '\0';
  FUN_00d31230(&local_290,&local_2a0);
  if (local_30 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_026de8c8;
  if (DAT_026de8c8 != 0) {
    FUN_00d50b00();
  }
  local_278 = '\x01';
  local_270 = 0;
  local_268 = '\0';
  local_280 = lVar2;
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  FUN_01d5da60(&local_270,&local_280,&stack0xffffffffffffff10);
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_268 != '\0') && (local_270 != 0)) {
    FUN_00d50b20();
  }
  if ((local_278 != '\0') && (local_280 != 0)) {
    FUN_00d50b20();
  }
  if (local_30 != 0) {
    FUN_00d50b20();
  }
  if ((local_288 != '\0') && (local_290 != 0)) {
    FUN_00d50b20();
  }
  if ((local_298 != '\0') && (local_2a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2a8 != '\0') && (local_2b0 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027f3318;
  if (DAT_027f3318 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_0276c290;
  local_260 = lVar2;
  local_258 = '\x01';
  if (DAT_0276c290 != 0) {
    FUN_00d50b00();
  }
  local_250 = lVar1;
  local_248 = '\x01';
  local_240 = 0;
  local_238 = '\0';
  FUN_00d31230(&local_240,&local_250);
  if (local_30 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_027ef498;
  if (DAT_027ef498 != 0) {
    FUN_00d50b00();
  }
  local_228 = '\x01';
  local_220 = 0;
  local_218 = '\0';
  local_230 = lVar2;
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  FUN_01d5da60(&local_220,&local_230,&stack0xffffffffffffff20);
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_218 != '\0') && (local_220 != 0)) {
    FUN_00d50b20();
  }
  if ((local_228 != '\0') && (local_230 != 0)) {
    FUN_00d50b20();
  }
  if (local_30 != 0) {
    FUN_00d50b20();
  }
  if ((local_238 != '\0') && (local_240 != 0)) {
    FUN_00d50b20();
  }
  if ((local_248 != '\0') && (local_250 != 0)) {
    FUN_00d50b20();
  }
  if ((local_258 != '\0') && (local_260 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d5dc80();
  local_210 = DAT_027f3318;
  if (DAT_027f3318 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_027ef4a0;
  local_208 = '\x01';
  if (DAT_027ef4a0 != 0) {
    FUN_00d50b00();
  }
  local_200 = lVar2;
  local_1f8 = '\x01';
  local_1f0 = 0;
  local_1e8 = '\0';
  FUN_00d31230(&local_1f0,&local_200);
  if (local_30 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_027ef4a8;
  if (DAT_027ef4a8 != 0) {
    FUN_00d50b00();
  }
  local_1d8 = '\x01';
  local_1d0 = 0;
  local_1c8 = '\0';
  local_1e0 = lVar2;
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  FUN_01d5da60(&local_1d0,&local_1e0,&stack0xffffffffffffff30);
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_1c8 != '\0') && (local_1d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1d8 != '\0') && (local_1e0 != 0)) {
    FUN_00d50b20();
  }
  if (local_30 != 0) {
    FUN_00d50b20();
  }
  if ((local_1e8 != '\0') && (local_1f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1f8 != '\0') && (local_200 != 0)) {
    FUN_00d50b20();
  }
  if ((local_208 != '\0') && (local_210 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027f3318;
  if (DAT_027f3318 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_027ef4b0;
  local_1c0 = lVar2;
  local_1b8 = '\x01';
  if (DAT_027ef4b0 != 0) {
    FUN_00d50b00();
  }
  local_1b0 = lVar1;
  local_1a8 = '\x01';
  local_1a0 = 0;
  local_198 = '\0';
  FUN_00d31230(&local_1a0,&local_1b0);
  if (local_30 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_027ef4b8;
  if (DAT_027ef4b8 != 0) {
    FUN_00d50b00();
  }
  local_188 = '\x01';
  local_180 = 0;
  local_178 = '\0';
  local_190 = lVar2;
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  FUN_01d5da60(&local_180,&local_190,&stack0xffffffffffffff40);
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_178 != '\0') && (local_180 != 0)) {
    FUN_00d50b20();
  }
  if ((local_188 != '\0') && (local_190 != 0)) {
    FUN_00d50b20();
  }
  if (local_30 != 0) {
    FUN_00d50b20();
  }
  if ((local_198 != '\0') && (local_1a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1a8 != '\0') && (local_1b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1b8 != '\0') && (local_1c0 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027f3318;
  if (DAT_027f3318 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_027ef4c0;
  local_170 = lVar2;
  local_168 = '\x01';
  if (DAT_027ef4c0 != 0) {
    FUN_00d50b00();
  }
  local_160 = lVar1;
  local_158 = '\x01';
  local_150 = 0;
  local_148 = '\0';
  FUN_00d31230(&local_150,&local_160);
  if (local_30 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_027ef4c8;
  if (DAT_027ef4c8 != 0) {
    FUN_00d50b00();
  }
  local_138 = '\x01';
  local_130 = 0;
  local_128 = '\0';
  local_140 = lVar2;
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  FUN_01d5da60(&local_130,&local_140,&stack0xffffffffffffff50);
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  if (local_30 != 0) {
    FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  local_118 = '\0';
  local_120 = plVar3;
  (**(code **)(*unaff_RDI + 0x6e8))();
  if ((local_118 != '\0') && (local_120 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @01d01000 — 941 bytes
// str: ""handleCopy""
// str: ""handlePaste""
// str: ""handleCut""
// str: ""handleMakeSolid""
// str: ""handleMakeGradient""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d01000(void)

{
  int iVar1;
  
  if (DAT_028b7a38 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b7a00 = FUN_01e7eb20();
      _DAT_028b79f8 = "handleCut";
      _DAT_028b7a08 = 0;
      _DAT_028b7a10 = &DAT_027ef4e8;
      _DAT_028b7a18 = FUN_01d077d0;
      _DAT_028b7a20 = FUN_01d06210;
      _DAT_028b7a28 = 0;
      uRam00000000028b7a30 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b7a80 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b7a48 = FUN_01e7eb20();
      _DAT_028b7a40 = "handleCopy";
      _DAT_028b7a50 = 0;
      _DAT_028b7a58 = &DAT_027ef4e8;
      _DAT_028b7a60 = FUN_01d077d0;
      _DAT_028b7a68 = FUN_01d063f0;
      _DAT_028b7a70 = 0;
      uRam00000000028b7a78 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b7ac8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b7a90 = FUN_01e7eb20();
      _DAT_028b7a88 = "handlePaste";
      _DAT_028b7a98 = 0;
      _DAT_028b7aa0 = &DAT_027ef4e8;
      _DAT_028b7aa8 = FUN_01d077d0;
      _DAT_028b7ab0 = FUN_01d065b0;
      _DAT_028b7ab8 = 0;
      uRam00000000028b7ac0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b7b10 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b7ad8 = FUN_01e7eb20();
      _DAT_028b7ad0 = "handleMakeSolid";
      _DAT_028b7ae0 = 0;
      _DAT_028b7ae8 = &DAT_027ef4e8;
      _DAT_028b7af0 = FUN_01d077d0;
      _DAT_028b7af8 = FUN_01d06850;
      _DAT_028b7b00 = 0;
      uRam00000000028b7b08 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b7b58 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b7b20 = FUN_01e7eb20();
      _DAT_028b7b18 = "handleMakeGradient";
      _DAT_028b7b28 = 0;
      _DAT_028b7b30 = &DAT_027ef4e8;
      _DAT_028b7b38 = FUN_01d077d0;
      _DAT_028b7b40 = FUN_01d069b0;
      _DAT_028b7b48 = 0;
      uRam00000000028b7b50 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b7ba0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b7b68 = FUN_01e7eb20();
      _DAT_028b7b60 = "handleMakeGlossyGradient";
      _DAT_028b7b70 = 0;
      _DAT_028b7b78 = &DAT_027ef4e8;
      _DAT_028b7b80 = FUN_01d077d0;
      _DAT_028b7b88 = FUN_01d06f70;
      _DAT_028b7b90 = 0;
      uRam00000000028b7b98 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @01d00230 — 770 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01d002a4) */
/* WARNING: Removing unreachable block (ram,0x01d002b0) */

void FUN_01d00230(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong unaff_RDI;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  FUN_00d12ed0();
  lVar4 = local_38;
  if ((((local_30 == '\0') && (local_38 != 0)) && (FUN_00d50b00(), local_30 != '\0')) &&
     (local_38 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x968))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x80) + 0x918))();
  FUN_00d6f370();
  lVar2 = DAT_027258d0;
  if (DAT_027258d0 != 0) {
    FUN_00d50b00();
  }
  iVar5 = FUN_00d708a0(param_1,1);
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (iVar5 == 0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0x80) + 0x918))();
  }
  FUN_00d6f370();
  lVar2 = DAT_02725a90;
  if (DAT_02725a90 != 0) {
    FUN_00d50b00();
  }
  iVar5 = FUN_00d708a0(param_1,1);
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = DAT_027ef278;
  lVar2 = DAT_027ef270;
  plVar1 = *(longlong **)(unaff_RDI + 0x78);
  if (iVar5 == 0) {
    if (DAT_027ef278 != 0) {
      FUN_00d50b00();
    }
    local_68 = lVar3;
    local_60 = '\x01';
    FUN_01e57260(param_1,&local_68);
    local_48 = local_38;
    local_40 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_40 = '\x01';
    (**(code **)(*plVar1 + 0x968))();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (DAT_027ef270 != 0) {
      FUN_00d50b00();
    }
    local_78 = lVar2;
    local_70 = '\x01';
    FUN_01e57260(param_1,&local_78);
    local_58 = local_38;
    local_50 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_50 = '\x01';
    (**(code **)(*plVar1 + 0x968))();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01cffdc0 — 679 bytes
// str: ""GNUpdateCheckController""
// str: ""handleCheckNow""
// str: ""handleTypeChanged""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cffdc0(void)

{
  int iVar1;
  
  if (DAT_028b79a8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0270eb80 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0270ead0 = FUN_00015ff0();
          _DAT_0270eab8 = "GNUpdateCheckController";
          _DAT_0270eac0 = 0x88;
          _DAT_0270eac8 = FUN_005723c0;
          _DAT_0270ead8 = 0;
          uRam000000000270eae0 = 0;
          _DAT_0270eae8 = 0;
          uRam000000000270eaf0 = 0;
          _DAT_0270eaf8 = 0;
          uRam000000000270eb00 = 0;
          _DAT_0270eb08 = 0;
          uRam000000000270eb10 = 0;
          _DAT_0270eb18 = 0;
          uRam000000000270eb20 = 0;
          _DAT_0270eb28 = 0;
          uRam000000000270eb30 = 0;
          _DAT_0270eb38 = 0;
          uRam000000000270eb40 = 0;
          _DAT_0270eb48 = 0;
          uRam000000000270eb50 = 0;
          _DAT_0270eb58 = 0;
          uRam000000000270eb60 = 0;
          _DAT_0270eb68 = 0;
          uRam000000000270eb70 = 0;
          _DAT_0270eb78 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b7968 = "handleCheckNow";
      _DAT_028b7970 = &DAT_0270eab8;
      _DAT_028b7978 = 0;
      _DAT_028b7980 = &DAT_027ef280;
      _DAT_028b7988 = FUN_01d00d90;
      _DAT_028b7990 = 0x5c1;
      _DAT_028b7998 = 0;
      uRam00000000028b79a0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b79f0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0270eb80 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0270ead0 = FUN_00015ff0();
          _DAT_0270eab8 = "GNUpdateCheckController";
          _DAT_0270eac0 = 0x88;
          _DAT_0270eac8 = FUN_005723c0;
          _DAT_0270ead8 = 0;
          uRam000000000270eae0 = 0;
          _DAT_0270eae8 = 0;
          uRam000000000270eaf0 = 0;
          _DAT_0270eaf8 = 0;
          uRam000000000270eb00 = 0;
          _DAT_0270eb08 = 0;
          uRam000000000270eb10 = 0;
          _DAT_0270eb18 = 0;
          uRam000000000270eb20 = 0;
          _DAT_0270eb28 = 0;
          uRam000000000270eb30 = 0;
          _DAT_0270eb38 = 0;
          uRam000000000270eb40 = 0;
          _DAT_0270eb48 = 0;
          uRam000000000270eb50 = 0;
          _DAT_0270eb58 = 0;
          uRam000000000270eb60 = 0;
          _DAT_0270eb68 = 0;
          uRam000000000270eb70 = 0;
          _DAT_0270eb78 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b79b0 = "handleTypeChanged";
      _DAT_028b79b8 = &DAT_0270eab8;
      _DAT_028b79c0 = 0;
      _DAT_028b79c8 = &DAT_027ef280;
      _DAT_028b79d0 = FUN_01d00d90;
      _DAT_028b79d8 = 0x5c9;
      _DAT_028b79e0 = 0;
      uRam00000000028b79e8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



