// Reconstructed implementation of MDToolbarTempoPluginCtrl
// From MikeCore binary — reverse-engineered pseudocode

#include "MDToolbarTempoPluginCtrl.h"

// ============================================================
// @003a5800 — 3044 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003a5800(void)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong unaff_RDI;
  double dVar9;
  undefined8 uVar10;
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
  longlong *local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  code *local_70;
  undefined *local_68;
  longlong local_60;
  char local_58;
  undefined8 *local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0xa0) == 0) {
    return;
  }
  FUN_01d77960();
  lVar1 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_026d8938;
  if (lVar1 == 0) {
    return;
  }
  if (DAT_026d8938 != 0) {
    FUN_00d50b00();
  }
  dVar9 = (double)FUN_00e7d6f0();
  uVar4 = (ulonglong)(dVar9 * DAT_023907c0);
  dVar9 = dVar9 * DAT_023907c0 - _DAT_023907c8;
  uVar10 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != 0)) && (uVar10 = FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    uVar10 = FUN_00d50b20();
  }
  bVar3 = (byte)(((longlong)dVar9 & (longlong)uVar4 >> 0x3f | uVar4) / 3);
  local_80 = lVar2;
  local_78 = '\0';
  FUN_000175c0(uVar10,&local_80);
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    local_38 = '\0';
    local_40 = lVar1;
    bVar3 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027050b8;
  if ((lVar1 != 0 & bVar3) != 0) {
    if (*(longlong *)(unaff_RDI + 0xb0) == 0) {
      return;
    }
    if (*(longlong *)(unaff_RDI + 0xb8) != 0) {
      FUN_01d77960();
      local_98 = 0;
      local_a0 = *(longlong *)(unaff_RDI + 0xb8);
      if (local_a0 != 0) {
        FUN_00d50b00();
      }
      local_98 = '\x01';
      FUN_01d5dde0();
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    uVar10 = FUN_01d77960();
    local_c0 = 0;
    local_c8 = *(longlong *)(unaff_RDI + 0xb0);
    if (local_c8 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_c0 = '\x01';
    FUN_01d5d7f0(uVar10,1);
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (*(longlong *)(unaff_RDI + 0xb0) != 0) {
      *(undefined8 *)(unaff_RDI + 0xb0) = 0;
      FUN_00d50b20();
    }
    if (*(longlong *)(unaff_RDI + 0xb8) == 0) {
      return;
    }
    *(undefined8 *)(unaff_RDI + 0xb8) = 0;
    FUN_00d50b20();
    return;
  }
  if (*(longlong *)(unaff_RDI + 0xb0) != 0) {
    return;
  }
  if (DAT_027050b8 != 0) {
    FUN_00d50b00();
  }
  local_a8 = lVar2;
  uVar10 = FUN_01d77960();
  local_128 = lVar2;
  local_120 = '\0';
  FUN_01d5e6e0(uVar10,&local_128);
  lVar1 = *(longlong *)(unaff_RDI + 0xb0);
  lVar8 = lVar1;
  if (lVar1 == local_40) goto LAB_003a5bc3;
  if (local_38 == '\0') {
    if (local_40 == 0) {
      lVar8 = 0;
      goto LAB_003a5b75;
    }
    FUN_00d50b00();
    lVar1 = *(longlong *)(unaff_RDI + 0xb0);
    *(longlong *)(unaff_RDI + 0xb0) = local_40;
    lVar8 = local_40;
  }
  else {
    local_38 = '\0';
    lVar8 = local_40;
LAB_003a5b75:
    *(longlong *)(unaff_RDI + 0xb0) = lVar8;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar8 = local_40;
  }
LAB_003a5bc3:
  if ((local_38 != '\0') && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0xb0) != 0) {
    FUN_01d77960();
    local_118 = lVar2;
    local_110 = '\0';
    FUN_01d5e640();
    if ((local_110 != '\0') && (local_118 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  local_68 = &DAT_026846d0;
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
  local_70 = DAT_026846e8;
  (*DAT_026846e8)();
  puVar7 = *(undefined8 **)(unaff_RDI + 0xb8);
  if (puVar7 == puVar5) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0xb8) = puVar5;
    if (puVar7 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  lVar1 = DAT_027296a0;
  if (DAT_027296a0 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_027050c0;
  local_108 = lVar1;
  local_100 = '\x01';
  if (DAT_027050c0 != 0) {
    FUN_00d50b00();
  }
  local_f8 = lVar2;
  local_f0 = '\x01';
  local_e8 = 0;
  local_e0 = '\0';
  FUN_00d31230(&local_e8,&local_f8);
  local_90 = local_40;
  local_88 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_88 = '\x01';
  FUN_01d64eb0();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_001d7da0();
  (**(code **)(*plVar6 + 0x18))();
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = local_68;
  puVar7[2] = &DAT_02684a60;
  *(undefined1 *)(puVar7 + 3) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x24) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x2c) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x34) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x3a) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x42) = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0;
  *(undefined2 *)(puVar7 + 0xe) = 0;
  (*local_70)();
  local_60 = DAT_027050c8;
  if (DAT_027050c8 != 0) {
    FUN_00d50b00();
  }
  local_58 = '\x01';
  FUN_01d65120();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d65490();
  local_48 = '\0';
  local_50 = puVar7;
  FUN_01d5d8d0();
  if ((local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = local_68;
  puVar7[2] = &DAT_02684a60;
  *(undefined1 *)(puVar7 + 3) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x24) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x2c) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x34) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x3a) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x42) = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0;
  *(undefined2 *)(puVar7 + 0xe) = 0;
  (*local_70)();
  lVar1 = DAT_027050c8;
  if (DAT_027050c8 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar1;
  local_58 = '\x01';
  FUN_01d65120();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d65490();
  local_48 = '\0';
  local_50 = puVar7;
  FUN_01d5d8d0();
  if ((local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = local_68;
  puVar7[2] = &DAT_02684a60;
  *(undefined1 *)(puVar7 + 3) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x24) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x2c) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x34) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x3a) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x42) = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0;
  *(undefined2 *)(puVar7 + 0xe) = 0;
  (*local_70)();
  lVar1 = DAT_027050c8;
  if (DAT_027050c8 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar1;
  local_58 = '\x01';
  FUN_01d65120();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d65490();
  local_48 = '\0';
  local_50 = puVar7;
  FUN_01d5d8d0();
  if ((local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = local_68;
  puVar7[2] = &DAT_02684a60;
  *(undefined1 *)(puVar7 + 3) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x24) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x2c) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x34) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x3a) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x42) = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0;
  *(undefined2 *)(puVar7 + 0xe) = 0;
  (*local_70)();
  lVar1 = DAT_027050c8;
  if (DAT_027050c8 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar1;
  local_58 = '\x01';
  FUN_01d65120();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d65490();
  local_48 = '\0';
  local_50 = puVar7;
  FUN_01d5d8d0();
  if ((local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = local_68;
  puVar7[2] = &DAT_02684a60;
  *(undefined1 *)(puVar7 + 3) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x24) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x2c) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x34) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x3a) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x42) = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0;
  *(undefined2 *)(puVar7 + 0xe) = 0;
  (*local_70)();
  lVar1 = DAT_027050c8;
  if (DAT_027050c8 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar1;
  local_58 = '\x01';
  FUN_01d65120();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d65490();
  local_48 = '\0';
  local_50 = puVar7;
  FUN_01d5d8d0();
  if ((local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = local_68;
  puVar7[2] = &DAT_02684a60;
  *(undefined1 *)(puVar7 + 3) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x24) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x2c) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x34) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x3a) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x42) = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0;
  *(undefined2 *)(puVar7 + 0xe) = 0;
  (*local_70)();
  lVar1 = DAT_027050c8;
  if (DAT_027050c8 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar1;
  local_58 = '\x01';
  FUN_01d65120();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d65490();
  local_48 = '\0';
  local_50 = puVar7;
  FUN_01d5d8d0();
  if ((local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  local_d0 = '\0';
  local_d8 = plVar6;
  FUN_01d654e0();
  if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar10 = FUN_01d77960();
  local_b0 = 0;
  local_b8 = *(longlong *)(unaff_RDI + 0xb8);
  if (local_b8 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_b0 = '\x01';
  FUN_01d5d7f0(uVar10,1);
  lVar1 = local_a8;
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @003a5120 — 1712 bytes
// str: ""handleTempoChanged""
// str: ""onUpdatePlaybackController""
// str: ""onFeatureSetChanged""
// str: ""handleSynchronizeTempo""
// str: ""handleSpecifyModificationTempo""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003a5120(void)

{
  int iVar1;
  
  if (DAT_02807fa8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027051e8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02705138 = FUN_00015ff0();
          _DAT_02705120 = "MDToolbarTempoPluginCtrl";
          _DAT_02705128 = 0xf8;
          _DAT_02705130 = FUN_003ae040;
          _DAT_02705140 = 0;
          uRam0000000002705148 = 0;
          _DAT_02705150 = 0;
          uRam0000000002705158 = 0;
          _DAT_02705160 = 0;
          uRam0000000002705168 = 0;
          _DAT_02705170 = 0;
          uRam0000000002705178 = 0;
          _DAT_02705180 = 0;
          uRam0000000002705188 = 0;
          _DAT_02705190 = 0;
          uRam0000000002705198 = 0;
          _DAT_027051a0 = 0;
          uRam00000000027051a8 = 0;
          _DAT_027051b0 = 0;
          uRam00000000027051b8 = 0;
          _DAT_027051c0 = 0;
          uRam00000000027051c8 = 0;
          _DAT_027051d0 = 0;
          uRam00000000027051d8 = 0;
          _DAT_027051e0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02807f68 = "handleSynchronizeTempo";
      _DAT_02807f70 = &DAT_02705120;
      _DAT_02807f78 = 0;
      _DAT_02807f80 = &DAT_027056b0;
      _DAT_02807f88 = FUN_003b1200;
      _DAT_02807f90 = FUN_003a88e0;
      _DAT_02807f98 = 0;
      uRam0000000002807fa0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02807ff0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027051e8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02705138 = FUN_00015ff0();
          _DAT_02705120 = "MDToolbarTempoPluginCtrl";
          _DAT_02705128 = 0xf8;
          _DAT_02705130 = FUN_003ae040;
          _DAT_02705140 = 0;
          uRam0000000002705148 = 0;
          _DAT_02705150 = 0;
          uRam0000000002705158 = 0;
          _DAT_02705160 = 0;
          uRam0000000002705168 = 0;
          _DAT_02705170 = 0;
          uRam0000000002705178 = 0;
          _DAT_02705180 = 0;
          uRam0000000002705188 = 0;
          _DAT_02705190 = 0;
          uRam0000000002705198 = 0;
          _DAT_027051a0 = 0;
          uRam00000000027051a8 = 0;
          _DAT_027051b0 = 0;
          uRam00000000027051b8 = 0;
          _DAT_027051c0 = 0;
          uRam00000000027051c8 = 0;
          _DAT_027051d0 = 0;
          uRam00000000027051d8 = 0;
          _DAT_027051e0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02807fb0 = "onFeatureSetChanged";
      _DAT_02807fb8 = &DAT_02705120;
      _DAT_02807fc0 = 0;
      _DAT_02807fc8 = &DAT_027056b4;
      _DAT_02807fd0 = FUN_003b1290;
      _DAT_02807fd8 = FUN_003a5800;
      _DAT_02807fe0 = 0;
      uRam0000000002807fe8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02808038 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027051e8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02705138 = FUN_00015ff0();
          _DAT_02705120 = "MDToolbarTempoPluginCtrl";
          _DAT_02705128 = 0xf8;
          _DAT_02705130 = FUN_003ae040;
          _DAT_02705140 = 0;
          uRam0000000002705148 = 0;
          _DAT_02705150 = 0;
          uRam0000000002705158 = 0;
          _DAT_02705160 = 0;
          uRam0000000002705168 = 0;
          _DAT_02705170 = 0;
          uRam0000000002705178 = 0;
          _DAT_02705180 = 0;
          uRam0000000002705188 = 0;
          _DAT_02705190 = 0;
          uRam0000000002705198 = 0;
          _DAT_027051a0 = 0;
          uRam00000000027051a8 = 0;
          _DAT_027051b0 = 0;
          uRam00000000027051b8 = 0;
          _DAT_027051c0 = 0;
          uRam00000000027051c8 = 0;
          _DAT_027051d0 = 0;
          uRam00000000027051d8 = 0;
          _DAT_027051e0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02807ff8 = "onUpdatePlaybackController";
      _DAT_02808000 = &DAT_02705120;
      _DAT_02808008 = 0;
      _DAT_02808010 = &DAT_027056b4;
      _DAT_02808018 = FUN_003b1290;
      _DAT_02808020 = FUN_003a7330;
      _DAT_02808028 = 0;
      uRam0000000002808030 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02808080 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027051e8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02705138 = FUN_00015ff0();
          _DAT_02705120 = "MDToolbarTempoPluginCtrl";
          _DAT_02705128 = 0xf8;
          _DAT_02705130 = FUN_003ae040;
          _DAT_02705140 = 0;
          uRam0000000002705148 = 0;
          _DAT_02705150 = 0;
          uRam0000000002705158 = 0;
          _DAT_02705160 = 0;
          uRam0000000002705168 = 0;
          _DAT_02705170 = 0;
          uRam0000000002705178 = 0;
          _DAT_02705180 = 0;
          uRam0000000002705188 = 0;
          _DAT_02705190 = 0;
          uRam0000000002705198 = 0;
          _DAT_027051a0 = 0;
          uRam00000000027051a8 = 0;
          _DAT_027051b0 = 0;
          uRam00000000027051b8 = 0;
          _DAT_027051c0 = 0;
          uRam00000000027051c8 = 0;
          _DAT_027051d0 = 0;
          uRam00000000027051d8 = 0;
          _DAT_027051e0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02808040 = "handleTempoChanged";
      _DAT_02808048 = &DAT_02705120;
      _DAT_02808050 = 0;
      _DAT_02808058 = &DAT_027056b0;
      _DAT_02808060 = FUN_003b1200;
      _DAT_02808068 = FUN_003a7cf0;
      _DAT_02808070 = 0;
      uRam0000000002808078 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028080c8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027051e8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02705138 = FUN_00015ff0();
          _DAT_02705120 = "MDToolbarTempoPluginCtrl";
          _DAT_02705128 = 0xf8;
          _DAT_02705130 = FUN_003ae040;
          _DAT_02705140 = 0;
          uRam0000000002705148 = 0;
          _DAT_02705150 = 0;
          uRam0000000002705158 = 0;
          _DAT_02705160 = 0;
          uRam0000000002705168 = 0;
          _DAT_02705170 = 0;
          uRam0000000002705178 = 0;
          _DAT_02705180 = 0;
          uRam0000000002705188 = 0;
          _DAT_02705190 = 0;
          uRam0000000002705198 = 0;
          _DAT_027051a0 = 0;
          uRam00000000027051a8 = 0;
          _DAT_027051b0 = 0;
          uRam00000000027051b8 = 0;
          _DAT_027051c0 = 0;
          uRam00000000027051c8 = 0;
          _DAT_027051d0 = 0;
          uRam00000000027051d8 = 0;
          _DAT_027051e0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02808088 = "handleSpecifyModificationTempo";
      _DAT_02808090 = &DAT_02705120;
      _DAT_02808098 = 0;
      _DAT_028080a0 = &DAT_027056b0;
      _DAT_028080a8 = FUN_003b1200;
      _DAT_028080b0 = FUN_003ad1d0;
      _DAT_028080b8 = 0;
      uRam00000000028080c0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @0046ba30 — 1507 bytes
// str: ""MDToolbarTempoPluginCtrl""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046ba30(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_0005aa20();
  *unaff_RDI = &DAT_024f0320;
  FUN_0046c1b0();
  FUN_0046c4a0();
  FUN_0046c790();
  FUN_0046ca80();
  FUN_0046cd70();
  FUN_0046d050();
  FUN_0046d340();
  FUN_0046d630();
  FUN_0046d920();
  FUN_0046dc10();
  FUN_0046df00();
  *(undefined4 *)(unaff_RDI + 0x19) = 0;
  if (DAT_027051e8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02705138 = FUN_00015ff0();
      _DAT_02705120 = "MDToolbarTempoPluginCtrl";
      _DAT_02705128 = 0xf8;
      _DAT_02705130 = FUN_003ae040;
      _DAT_02705140 = 0;
      uRam0000000002705148 = 0;
      _DAT_02705150 = 0;
      uRam0000000002705158 = 0;
      _DAT_02705160 = 0;
      uRam0000000002705168 = 0;
      _DAT_02705170 = 0;
      uRam0000000002705178 = 0;
      _DAT_02705180 = 0;
      uRam0000000002705188 = 0;
      _DAT_02705190 = 0;
      uRam0000000002705198 = 0;
      _DAT_027051a0 = 0;
      uRam00000000027051a8 = 0;
      _DAT_027051b0 = 0;
      uRam00000000027051b8 = 0;
      _DAT_027051c0 = 0;
      uRam00000000027051c8 = 0;
      _DAT_027051d0 = 0;
      _uRam00000000027051d8 = 0;
      _DAT_027051e0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027051db == '\0') {
    FUN_0046e180();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xcc) = 0;
  if (DAT_027051e8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02705138 = FUN_00015ff0();
      _DAT_02705120 = "MDToolbarTempoPluginCtrl";
      _DAT_02705128 = 0xf8;
      _DAT_02705130 = FUN_003ae040;
      _DAT_02705140 = 0;
      uRam0000000002705148 = 0;
      _DAT_02705150 = 0;
      uRam0000000002705158 = 0;
      _DAT_02705160 = 0;
      uRam0000000002705168 = 0;
      _DAT_02705170 = 0;
      uRam0000000002705178 = 0;
      _DAT_02705180 = 0;
      uRam0000000002705188 = 0;
      _DAT_02705190 = 0;
      uRam0000000002705198 = 0;
      _DAT_027051a0 = 0;
      uRam00000000027051a8 = 0;
      _DAT_027051b0 = 0;
      uRam00000000027051b8 = 0;
      _DAT_027051c0 = 0;
      uRam00000000027051c8 = 0;
      _DAT_027051d0 = 0;
      _uRam00000000027051d8 = 0;
      _DAT_027051e0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027051db == '\0') {
    FUN_0046e2f0();
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0x1a) = 0;
  if (DAT_027051e8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02705138 = FUN_00015ff0();
      _DAT_02705120 = "MDToolbarTempoPluginCtrl";
      _DAT_02705128 = 0xf8;
      _DAT_02705130 = FUN_003ae040;
      _DAT_02705140 = 0;
      uRam0000000002705148 = 0;
      _DAT_02705150 = 0;
      uRam0000000002705158 = 0;
      _DAT_02705160 = 0;
      uRam0000000002705168 = 0;
      _DAT_02705170 = 0;
      uRam0000000002705178 = 0;
      _DAT_02705180 = 0;
      uRam0000000002705188 = 0;
      _DAT_02705190 = 0;
      uRam0000000002705198 = 0;
      _DAT_027051a0 = 0;
      uRam00000000027051a8 = 0;
      _DAT_027051b0 = 0;
      uRam00000000027051b8 = 0;
      _DAT_027051c0 = 0;
      uRam00000000027051c8 = 0;
      _DAT_027051d0 = 0;
      _uRam00000000027051d8 = 0;
      _DAT_027051e0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027051db == '\0') {
    FUN_0046e460();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xd1) = 0;
  if (DAT_027051e8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02705138 = FUN_00015ff0();
      _DAT_02705120 = "MDToolbarTempoPluginCtrl";
      _DAT_02705128 = 0xf8;
      _DAT_02705130 = FUN_003ae040;
      _DAT_02705140 = 0;
      uRam0000000002705148 = 0;
      _DAT_02705150 = 0;
      uRam0000000002705158 = 0;
      _DAT_02705160 = 0;
      uRam0000000002705168 = 0;
      _DAT_02705170 = 0;
      uRam0000000002705178 = 0;
      _DAT_02705180 = 0;
      uRam0000000002705188 = 0;
      _DAT_02705190 = 0;
      uRam0000000002705198 = 0;
      _DAT_027051a0 = 0;
      uRam00000000027051a8 = 0;
      _DAT_027051b0 = 0;
      uRam00000000027051b8 = 0;
      _DAT_027051c0 = 0;
      uRam00000000027051c8 = 0;
      _DAT_027051d0 = 0;
      _uRam00000000027051d8 = 0;
      _DAT_027051e0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027051db == '\0') {
    FUN_0046e5d0();
    FUN_00e87980();
  }
  unaff_RDI[0x1b] = 0;
  if (DAT_027051e8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02705138 = FUN_00015ff0();
      _DAT_02705120 = "MDToolbarTempoPluginCtrl";
      _DAT_02705128 = 0xf8;
      _DAT_02705130 = FUN_003ae040;
      _DAT_02705140 = 0;
      uRam0000000002705148 = 0;
      _DAT_02705150 = 0;
      uRam0000000002705158 = 0;
      _DAT_02705160 = 0;
      uRam0000000002705168 = 0;
      _DAT_02705170 = 0;
      uRam0000000002705178 = 0;
      _DAT_02705180 = 0;
      uRam0000000002705188 = 0;
      _DAT_02705190 = 0;
      uRam0000000002705198 = 0;
      _DAT_027051a0 = 0;
      uRam00000000027051a8 = 0;
      _DAT_027051b0 = 0;
      uRam00000000027051b8 = 0;
      _DAT_027051c0 = 0;
      uRam00000000027051c8 = 0;
      _DAT_027051d0 = 0;
      _uRam00000000027051d8 = 0;
      _DAT_027051e0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027051db == '\0') {
    FUN_0046e740();
    FUN_00e87980();
  }
  FUN_0046e8b0();
  FUN_0046eb30();
  FUN_0046edb0();
  return;
}




// ============================================================
// @003a6980 — 1506 bytes
// ============================================================

void FUN_003a6980(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong unaff_RDI;
  undefined4 uVar5;
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
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_30;
  char local_28;
  
  FUN_00d50100();
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02576110;
  *(undefined8 *)((longlong)puVar3 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x1a) = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  (*DAT_02576128)();
  puVar1 = *(undefined8 **)(unaff_RDI + 0xc0);
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0xc0) = puVar3;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d48ac0();
  FUN_00d50b00();
  local_110 = DAT_026df590;
  if (DAT_026df590 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_026d88c8;
  local_108 = '\x01';
  if (DAT_026d88c8 != 0) {
    FUN_00d50b00();
  }
  local_100 = lVar2;
  local_f8 = '\x01';
  local_f0 = 0;
  local_e8 = '\0';
  uVar5 = FUN_000bf690(&local_100,&local_110,&local_f0);
  lVar2 = *(longlong *)(unaff_RDI + 0x80);
  lVar4 = lVar2;
  if (lVar2 != local_30) {
    lVar4 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar4 = 0;
        goto LAB_003a6abb;
      }
      uVar5 = FUN_00d50b00();
      lVar2 = *(longlong *)(unaff_RDI + 0x80);
      *(longlong *)(unaff_RDI + 0x80) = local_30;
    }
    else {
      local_28 = '\0';
LAB_003a6abb:
      *(longlong *)(unaff_RDI + 0x80) = lVar4;
    }
    if (lVar2 != 0) {
      uVar5 = FUN_00d50b20();
      lVar4 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar4 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    uVar5 = FUN_00d50b20();
  }
  lVar2 = DAT_026f6d00;
  if (DAT_026f6d00 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_e0 = lVar2;
  local_d8 = '\x01';
  local_d0 = 0;
  local_c8 = '\0';
  uVar5 = FUN_000bf780(uVar5,&local_d0);
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  lVar2 = DAT_026d88d0;
  if (DAT_026d88d0 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_c0 = lVar2;
  local_b8 = '\x01';
  local_b0 = 0;
  local_a8 = '\0';
  FUN_000bf780(uVar5,&local_b0);
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_a0 = DAT_026d88e0;
  if (DAT_026d88e0 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_026f6cf0;
  local_98 = '\x01';
  if (DAT_026f6cf0 != 0) {
    FUN_00d50b00();
  }
  local_90 = lVar2;
  local_88 = '\x01';
  local_80 = 0;
  local_78 = '\0';
  FUN_000bf690(&local_90,&local_a0,&local_80);
  lVar2 = *(longlong *)(unaff_RDI + 0x88);
  lVar4 = lVar2;
  if (lVar2 != local_30) {
    lVar4 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar4 = 0;
        goto LAB_003a6d1c;
      }
      FUN_00d50b00();
      lVar2 = *(longlong *)(unaff_RDI + 0x88);
      *(longlong *)(unaff_RDI + 0x88) = local_30;
    }
    else {
      local_28 = '\0';
LAB_003a6d1c:
      *(longlong *)(unaff_RDI + 0x88) = lVar4;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar4 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 0xd0) = 0;
  lVar2 = DAT_027050d0;
  if (DAT_027050d0 != 0) {
    FUN_00d50b00();
  }
  local_70 = lVar2;
  local_68 = '\x01';
  FUN_01d51a40();
  lVar2 = *(longlong *)(unaff_RDI + 0xe0);
  lVar4 = lVar2;
  if (lVar2 != local_30) {
    lVar4 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar4 = 0;
        goto LAB_003a6e1b;
      }
      FUN_00d50b00();
      lVar2 = *(longlong *)(unaff_RDI + 0xe0);
      *(longlong *)(unaff_RDI + 0xe0) = local_30;
    }
    else {
      local_28 = '\0';
LAB_003a6e1b:
      *(longlong *)(unaff_RDI + 0xe0) = lVar4;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar4 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027050d8;
  if (DAT_027050d8 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar2;
  local_58 = '\x01';
  FUN_01d51a40();
  lVar2 = *(longlong *)(unaff_RDI + 0xe8);
  lVar4 = lVar2;
  if (lVar2 == local_30) goto LAB_003a6f14;
  lVar4 = local_30;
  if (local_28 == '\0') {
    if (local_30 == 0) {
      lVar4 = 0;
      goto LAB_003a6ecd;
    }
    FUN_00d50b00();
    lVar2 = *(longlong *)(unaff_RDI + 0xe8);
    *(longlong *)(unaff_RDI + 0xe8) = local_30;
  }
  else {
    local_28 = '\0';
LAB_003a6ecd:
    *(longlong *)(unaff_RDI + 0xe8) = lVar4;
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
    lVar4 = local_30;
  }
LAB_003a6f14:
  if ((local_28 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  return;
}



