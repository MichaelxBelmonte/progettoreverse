// Reconstructed implementation of MDToolbarLeftPluginConfigCtrl
// From MikeCore binary — reverse-engineered pseudocode

#include "MDToolbarLeftPluginConfigCtrl.h"

// ============================================================
// @004631e0 — 3401 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004631e0(void)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong unaff_RDI;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  double dVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  longlong *local_110;
  char local_108;
  longlong *local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
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
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_004b3c80();
  FUN_004b4d40();
  lVar3 = DAT_027062b0;
  if (DAT_027062b0 != 0) {
    FUN_00d50b00();
  }
  FUN_003b6200();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_004b4d40();
  plVar2 = local_40;
  FUN_01f27fe0();
  cVar4 = (**(code **)(*local_50 + 0x450))();
  uVar10 = DAT_02394298;
  if (cVar4 == '\0') {
    uVar10 = DAT_02390124;
  }
  FUN_01f27fe0();
  cVar4 = (**(code **)(*local_110 + 0x450))();
  uVar11 = DAT_02394298;
  if (cVar4 == '\0') {
    uVar11 = DAT_02390124;
  }
  FUN_01f27fe0();
  cVar4 = (**(code **)(*local_100 + 0x450))();
  uVar12 = DAT_02394298;
  if (cVar4 == '\0') {
    uVar12 = DAT_02390124;
  }
  FUN_01f27fe0();
  cVar4 = (**(code **)(*local_f0 + 0x450))();
  uVar13 = DAT_02394298;
  if (cVar4 == '\0') {
    uVar13 = DAT_02390124;
  }
  auVar17 = insertps(ZEXT416(uVar12),ZEXT416(uVar13),0x10);
  auVar16 = insertps(ZEXT416(uVar10),uVar11,0x10);
  (**(code **)(*plVar2 + 0x940))(auVar16._0_8_,auVar17._0_8_);
  if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar2 = DAT_02708e90;
  if (DAT_02708e90 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  dVar14 = (double)FUN_00e7d6f0();
  uVar7 = (ulonglong)(dVar14 * DAT_023907c0);
  dVar14 = dVar14 * DAT_023907c0 - _DAT_023907c8;
  uVar15 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
      (uVar15 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
    uVar15 = FUN_00d50b20();
  }
  bVar5 = (byte)(((longlong)dVar14 & (longlong)uVar7 >> 0x3f | uVar7) / 3);
  local_50 = plVar2;
  local_48 = '\0';
  FUN_000175c0(uVar15,&local_50);
  plVar9 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar9 != (longlong *)0x0) {
    local_38 = '\0';
    local_40 = plVar9;
    bVar5 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((plVar9 != (longlong *)0x0 & bVar5) == 0) {
    puVar8 = (undefined8 *)FUN_00e8fc40();
    FUN_000161a0();
    *puVar8 = &DAT_024f9e40;
    puVar8[0xe] = 0;
    puVar8[0xf] = 0;
    puVar8[0x10] = 0;
    puVar8[0x11] = 0;
    (*DAT_024f9e58)();
    puVar1 = *(undefined8 **)(unaff_RDI + 0xe0);
    if (puVar1 == puVar8) {
      FUN_00d50b20();
    }
    else {
      *(undefined8 **)(unaff_RDI + 0xe0) = puVar8;
      if (puVar1 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_000161a0();
  *puVar8 = &DAT_024f0320;
  puVar8[0xe] = 0;
  puVar8[0xf] = 0;
  puVar8[0x10] = 0;
  puVar8[0x11] = 0;
  puVar8[0x12] = 0;
  puVar8[0x13] = 0;
  puVar8[0x14] = 0;
  puVar8[0x15] = 0;
  puVar8[0x16] = 0;
  puVar8[0x17] = 0;
  puVar8[0x18] = 0;
  puVar8[0x19] = 0;
  *(undefined2 *)(puVar8 + 0x1a) = 0;
  puVar8[0x1b] = 0;
  puVar8[0x1c] = 0;
  puVar8[0x1d] = 0;
  puVar8[0x1e] = 0;
  (*DAT_024f0338)();
  puVar1 = *(undefined8 **)(unaff_RDI + 0x98);
  if (puVar1 == puVar8) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x98) = puVar8;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_000161a0();
  *puVar8 = &DAT_024df420;
  puVar8[0xe] = 0;
  puVar8[0xf] = 0;
  puVar8[0x10] = 0;
  puVar8[0x11] = 0;
  puVar8[0x12] = 0;
  puVar8[0x13] = 0;
  puVar8[0x14] = 0;
  puVar8[0x15] = 0;
  *(undefined2 *)(puVar8 + 0x16) = 0;
  *(undefined8 *)((longlong)puVar8 + 0xb4) = 0;
  *(undefined8 *)((longlong)puVar8 + 0xbc) = 0;
  (*DAT_024df438)();
  puVar1 = *(undefined8 **)(unaff_RDI + 0xa0);
  if (puVar1 == puVar8) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0xa0) = puVar8;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_000161a0();
  *puVar8 = &DAT_024dd430;
  puVar8[0xe] = 0;
  puVar8[0xf] = 0;
  (*DAT_024dd448)();
  puVar1 = *(undefined8 **)(unaff_RDI + 0x90);
  if (puVar1 == puVar8) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x90) = puVar8;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_000161a0();
  *puVar8 = &DAT_024cd8a0;
  *(undefined1 *)(puVar8 + 0xe) = 0;
  puVar8[0xf] = 0;
  puVar8[0x10] = 0;
  puVar8[0x11] = 0;
  puVar8[0x12] = 0;
  puVar8[0x13] = 0;
  (*DAT_024cd8b8)();
  puVar1 = *(undefined8 **)(unaff_RDI + 0xd8);
  if (puVar1 == puVar8) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0xd8) = puVar8;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_000161a0();
  *puVar8 = &DAT_024cde70;
  puVar8[0xe] = 0;
  puVar8[0xf] = 0;
  puVar8[0x10] = 0;
  (*DAT_024cde88)();
  puVar1 = *(undefined8 **)(unaff_RDI + 0xa8);
  if (puVar1 == puVar8) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0xa8) = puVar8;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  if (*(longlong *)(unaff_RDI + 0xb0) == 0) {
    puVar8 = (undefined8 *)FUN_00e8fc40();
    FUN_000161a0();
    *puVar8 = &DAT_024f08f0;
    puVar8[0xe] = 0;
    puVar8[0xf] = 0;
    (*DAT_024f0908)();
    puVar1 = *(undefined8 **)(unaff_RDI + 0xb0);
    if (puVar1 == puVar8) {
      FUN_00d50b20();
    }
    else {
      *(undefined8 **)(unaff_RDI + 0xb0) = puVar8;
      if (puVar1 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_000161a0();
  *puVar8 = &DAT_02515cb0;
  puVar8[0xe] = 0;
  puVar8[0xf] = 0;
  puVar8[0x10] = 0;
  (*DAT_02515cc8)();
  puVar1 = *(undefined8 **)(unaff_RDI + 0xc0);
  if (puVar1 == puVar8) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0xc0) = puVar8;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_000161a0();
  *puVar8 = &DAT_024f6e28;
  *(undefined1 *)(puVar8 + 0xe) = 0;
  puVar8[0xf] = 0;
  puVar8[0x10] = 0;
  puVar8[0x11] = 0;
  puVar8[0x12] = 0;
  puVar8[0x13] = 0;
  (*DAT_024f6e40)();
  puVar1 = *(undefined8 **)(unaff_RDI + 200);
  if (puVar1 == puVar8) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 200) = puVar8;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_000161a0();
  *(undefined1 *)(puVar8 + 0xe) = 0;
  puVar8[0xf] = 0;
  puVar8[0x10] = 0;
  puVar8[0x11] = 0;
  puVar8[0x12] = 0;
  puVar8[0x13] = 0;
  *puVar8 = &DAT_024f7408;
  puVar8[0x14] = 0;
  puVar8[0x15] = 0;
  (*DAT_024f7420)();
  puVar1 = *(undefined8 **)(unaff_RDI + 0xd0);
  if (puVar1 == puVar8) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0xd0) = puVar8;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_000161a0();
  *puVar8 = &DAT_024d1190;
  puVar8[0xe] = 0;
  puVar8[0xf] = 0;
  puVar8[0x10] = 0;
  puVar8[0x11] = 0;
  puVar8[0x12] = 0;
  puVar8[0x13] = 0;
  puVar8[0x14] = 0;
  puVar8[0x15] = 0;
  puVar8[0x16] = 0;
  puVar8[0x17] = 0;
  puVar8[0x18] = 0;
  puVar8[0x19] = 0;
  puVar8[0x1a] = 0;
  puVar8[0x1b] = 0;
  puVar8[0x1c] = 0;
  uVar15 = _UNK_02393728;
  puVar8[0x1d] = _DAT_02393720;
  puVar8[0x1e] = uVar15;
  puVar8[0x1f] = 0;
  (*DAT_024d11a8)();
  puVar1 = *(undefined8 **)(unaff_RDI + 0x128);
  if (puVar1 == puVar8) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x128) = puVar8;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar9 = (longlong *)FUN_00e8fc40();
  FUN_000f58f0();
  (**(code **)(*plVar9 + 0x18))();
  plVar2 = *(longlong **)(unaff_RDI + 0xe8);
  if (plVar2 == plVar9) {
    FUN_00d50b20();
  }
  else {
    *(longlong **)(unaff_RDI + 0xe8) = plVar9;
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_000161a0();
  *puVar8 = &DAT_02506d48;
  puVar8[0x19] = 0;
  puVar8[0xe] = 0;
  puVar8[0xf] = 0;
  puVar8[0x10] = 0;
  puVar8[0x11] = 0;
  puVar8[0x12] = 0;
  puVar8[0x13] = 0;
  puVar8[0x14] = 0;
  puVar8[0x15] = 0;
  puVar8[0x16] = 0;
  puVar8[0x17] = 0;
  *(undefined1 *)(puVar8 + 0x18) = 0;
  (*DAT_02506d60)();
  puVar1 = *(undefined8 **)(unaff_RDI + 0xf8);
  if (puVar1 == puVar8) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0xf8) = puVar8;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_000161a0();
  *puVar8 = &DAT_0250b3d8;
  (*DAT_0250b3f0)();
  puVar1 = *(undefined8 **)(unaff_RDI + 0xb8);
  if (puVar1 == puVar8) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0xb8) = puVar8;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  iVar6 = FUN_000030b0();
  if (iVar6 != 2) {
    puVar8 = (undefined8 *)FUN_00e8fc40();
    FUN_000161a0();
    *puVar8 = &DAT_024c53f8;
    (*DAT_024c5410)();
    puVar1 = *(undefined8 **)(unaff_RDI + 0x100);
    if (puVar1 == puVar8) {
      FUN_00d50b20();
    }
    else {
      *(undefined8 **)(unaff_RDI + 0x100) = puVar8;
      if (puVar1 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d50b00();
  local_d0 = DAT_02709de0;
  if (DAT_02709de0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_026f6cf0;
  local_c8 = '\x01';
  if (DAT_026f6cf0 != 0) {
    FUN_00d50b00();
  }
  local_c0 = lVar3;
  local_b8 = '\x01';
  local_b0 = 0;
  local_a8 = '\0';
  FUN_000bf690(&local_c0,&local_d0,&local_b0);
  plVar2 = *(longlong **)(unaff_RDI + 0xf0);
  plVar9 = plVar2;
  if (plVar2 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) {
        plVar9 = (longlong *)0x0;
        goto LAB_00463c86;
      }
      FUN_00d50b00();
      plVar2 = *(longlong **)(unaff_RDI + 0xf0);
      *(longlong **)(unaff_RDI + 0xf0) = local_40;
      plVar9 = local_40;
    }
    else {
      local_38 = '\0';
      plVar9 = local_40;
LAB_00463c86:
      *(longlong **)(unaff_RDI + 0xf0) = plVar9;
    }
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar9 = local_40;
    }
  }
  if ((local_38 != '\0') && (plVar9 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_a0 = DAT_027062b8;
  if (DAT_027062b8 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_026f6d00;
  local_98 = '\x01';
  if (DAT_026f6d00 != 0) {
    FUN_00d50b00();
  }
  local_90 = lVar3;
  local_88 = '\x01';
  local_80 = 0;
  local_78 = '\0';
  FUN_000bf690(&local_90,&local_a0,&local_80);
  plVar2 = *(longlong **)(unaff_RDI + 0x108);
  plVar9 = plVar2;
  if (plVar2 == local_40) goto LAB_00463e2f;
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
      goto LAB_00463de1;
    }
    FUN_00d50b00();
    plVar2 = *(longlong **)(unaff_RDI + 0x108);
    *(longlong **)(unaff_RDI + 0x108) = local_40;
    plVar9 = local_40;
  }
  else {
    local_38 = '\0';
    plVar9 = local_40;
LAB_00463de1:
    *(longlong **)(unaff_RDI + 0x108) = plVar9;
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
    plVar9 = local_40;
  }
LAB_00463e2f:
  if ((local_38 != '\0') && (plVar9 != (longlong *)0x0)) {
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
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_000161a0();
  *puVar8 = &DAT_0250a0d8;
  puVar8[0xe] = 0;
  puVar8[0xf] = 0;
  puVar8[0x10] = 0;
  (*DAT_0250a0f0)();
  puVar1 = *(undefined8 **)(unaff_RDI + 0x120);
  if (puVar1 == puVar8) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x120) = puVar8;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @004624b0 — 502 bytes
// str: ""MDToolbarLeftPluginConfigCtrl""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x004625df) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004624b0(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_20;
  
  if ((DAT_02706eb0 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_02706e00 = FUN_00015ff0();
    _DAT_02706de8 = "MDToolbarLeftPluginConfigCtrl";
    _DAT_02706df0 = 0x90;
    _DAT_02706df8 = FUN_0046f030;
    _DAT_02706e08 = 0;
    uRam0000000002706e10 = 0;
    _DAT_02706e18 = 0;
    uRam0000000002706e20 = 0;
    _DAT_02706e28 = 0;
    uRam0000000002706e30 = 0;
    _DAT_02706e38 = 0;
    uRam0000000002706e40 = 0;
    _DAT_02706e48 = 0;
    uRam0000000002706e50 = 0;
    _DAT_02706e58 = 0;
    uRam0000000002706e60 = 0;
    _DAT_02706e68 = 0;
    uRam0000000002706e70 = 0;
    _DAT_02706e78 = 0;
    uRam0000000002706e80 = 0;
    _DAT_02706e88 = 0;
    uRam0000000002706e90 = 0;
    _DAT_02706e98 = 0;
    _uRam0000000002706ea0 = 0;
    _DAT_02706ea8 = 0;
    ___cxa_guard_release();
  }
  if (DAT_02706ea3 == '\0') {
    FUN_0005a900();
    FUN_00e87760();
    FUN_000161a0();
    FUN_00d50c00();
    FUN_0005aa20();
    FUN_0046f080();
    FUN_0046f360();
    FUN_0046f640();
    FUN_0046f920();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_004a82e0();
    FUN_00e87920(uVar2,0);
    if (local_20 != 0) {
      FUN_00d50b20();
    }
    FUN_00015ea0();
    FUN_00015ea0();
  }
  return;
}



