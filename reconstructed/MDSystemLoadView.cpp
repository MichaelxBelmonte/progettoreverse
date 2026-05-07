// Reconstructed implementation of MDSystemLoadView
// From MikeCore binary — reverse-engineered pseudocode

#include "MDSystemLoadView.h"

// ============================================================
// @000f1700 — 2591 bytes
// ============================================================

void FUN_000f1700(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RDI;
  longlong local_1e8;
  char local_1e0;
  longlong local_1d8;
  char local_1d0;
  longlong local_1c8;
  char local_1c0;
  longlong local_1b8;
  char local_1b0;
  longlong local_1a8;
  char local_1a0;
  longlong local_198;
  char local_190;
  longlong local_188;
  char local_180;
  longlong local_178;
  char local_170;
  longlong local_168;
  char local_160;
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
  longlong local_28;
  char local_20;
  
  FUN_00d50100();
  if (unaff_RDI != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_026df590;
  if (DAT_026df590 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_026d88c8;
  local_1e8 = lVar1;
  local_1e0 = '\x01';
  if (DAT_026d88c8 != 0) {
    FUN_00d50b00();
  }
  local_1d8 = lVar2;
  local_1d0 = '\x01';
  local_1c8 = 0;
  local_1c0 = '\0';
  FUN_000bf690(&local_1d8,&local_1e8,&local_1c8);
  lVar1 = *(longlong *)(unaff_RDI + 0x80);
  lVar2 = lVar1;
  if (lVar1 != local_28) {
    lVar2 = local_28;
    if (local_20 == '\0') {
      if (local_28 == 0) {
        lVar2 = 0;
        goto LAB_000f17cd;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(unaff_RDI + 0x80);
      *(longlong *)(unaff_RDI + 0x80) = local_28;
    }
    else {
      local_20 = '\0';
LAB_000f17cd:
      *(longlong *)(unaff_RDI + 0x80) = lVar2;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = local_28;
    }
  }
  if ((local_20 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1c0 != '\0') && (local_1c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1d0 != '\0') && (local_1d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1e0 != '\0') && (local_1e8 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_1b8 = DAT_026df5a0;
  if (DAT_026df5a0 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_026f6d00;
  local_1b0 = '\x01';
  if (DAT_026f6d00 != 0) {
    FUN_00d50b00();
  }
  local_1a8 = lVar1;
  local_1a0 = '\x01';
  local_198 = 0;
  local_190 = '\0';
  FUN_000bf690(&local_1a8,&local_1b8,&local_198);
  lVar1 = *(longlong *)(unaff_RDI + 0x88);
  lVar2 = lVar1;
  if (lVar1 != local_28) {
    lVar2 = local_28;
    if (local_20 == '\0') {
      if (local_28 == 0) {
        lVar2 = 0;
        goto LAB_000f1936;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(unaff_RDI + 0x88);
      *(longlong *)(unaff_RDI + 0x88) = local_28;
    }
    else {
      local_20 = '\0';
LAB_000f1936:
      *(longlong *)(unaff_RDI + 0x88) = lVar2;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = local_28;
    }
  }
  if ((local_20 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_190 != '\0') && (local_198 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1a0 != '\0') && (local_1a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1b0 != '\0') && (local_1b8 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_188 = DAT_026df5b0;
  if (DAT_026df5b0 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_027294e0;
  local_180 = '\x01';
  if (DAT_027294e0 != 0) {
    FUN_00d50b00();
  }
  local_178 = lVar1;
  local_170 = '\x01';
  local_168 = 0;
  local_160 = '\0';
  FUN_000bf690(&local_178,&local_188,&local_168);
  lVar1 = *(longlong *)(unaff_RDI + 0x90);
  lVar2 = lVar1;
  if (lVar1 != local_28) {
    lVar2 = local_28;
    if (local_20 == '\0') {
      if (local_28 == 0) {
        lVar2 = 0;
        goto LAB_000f1a99;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(unaff_RDI + 0x90);
      *(longlong *)(unaff_RDI + 0x90) = local_28;
    }
    else {
      local_20 = '\0';
LAB_000f1a99:
      *(longlong *)(unaff_RDI + 0x90) = lVar2;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = local_28;
    }
  }
  if ((local_20 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_160 != '\0') && (local_168 != 0)) {
    FUN_00d50b20();
  }
  if ((local_170 != '\0') && (local_178 != 0)) {
    FUN_00d50b20();
  }
  if ((local_180 != '\0') && (local_188 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_158 = DAT_026df5c0;
  if (DAT_026df5c0 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_027295a0;
  local_150 = '\x01';
  if (DAT_027295a0 != 0) {
    FUN_00d50b00();
  }
  local_148 = lVar1;
  local_140 = '\x01';
  local_138 = 0;
  local_130 = '\0';
  FUN_000bf690(&local_148,&local_158,&local_138);
  lVar1 = *(longlong *)(unaff_RDI + 0x98);
  lVar2 = lVar1;
  if (lVar1 != local_28) {
    lVar2 = local_28;
    if (local_20 == '\0') {
      if (local_28 == 0) {
        lVar2 = 0;
        goto LAB_000f1bfc;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(unaff_RDI + 0x98);
      *(longlong *)(unaff_RDI + 0x98) = local_28;
    }
    else {
      local_20 = '\0';
LAB_000f1bfc:
      *(longlong *)(unaff_RDI + 0x98) = lVar2;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = local_28;
    }
  }
  if ((local_20 != '\0') && (lVar2 != 0)) {
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
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_128 = DAT_026df5d0;
  if (DAT_026df5d0 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_027ebc70;
  local_120 = '\x01';
  if (DAT_027ebc70 != 0) {
    FUN_00d50b00();
  }
  local_118 = lVar1;
  local_110 = '\x01';
  local_108 = 0;
  local_100 = '\0';
  FUN_000bf690(&local_118,&local_128,&local_108);
  lVar1 = *(longlong *)(unaff_RDI + 0xa0);
  lVar2 = lVar1;
  if (lVar1 != local_28) {
    lVar2 = local_28;
    if (local_20 == '\0') {
      if (local_28 == 0) {
        lVar2 = 0;
        goto LAB_000f1d5f;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(unaff_RDI + 0xa0);
      *(longlong *)(unaff_RDI + 0xa0) = local_28;
    }
    else {
      local_20 = '\0';
LAB_000f1d5f:
      *(longlong *)(unaff_RDI + 0xa0) = lVar2;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = local_28;
    }
  }
  if ((local_20 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_f8 = DAT_026df5e0;
  if (DAT_026df5e0 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_026f6d20;
  local_f0 = '\x01';
  if (DAT_026f6d20 != 0) {
    FUN_00d50b00();
  }
  local_e8 = lVar1;
  local_e0 = '\x01';
  local_d8 = 0;
  local_d0 = '\0';
  FUN_000bf690(&local_e8,&local_f8,&local_d8);
  lVar1 = *(longlong *)(unaff_RDI + 0xa8);
  lVar2 = lVar1;
  if (lVar1 != local_28) {
    lVar2 = local_28;
    if (local_20 == '\0') {
      if (local_28 == 0) {
        lVar2 = 0;
        goto LAB_000f1ec2;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(unaff_RDI + 0xa8);
      *(longlong *)(unaff_RDI + 0xa8) = local_28;
    }
    else {
      local_20 = '\0';
LAB_000f1ec2:
      *(longlong *)(unaff_RDI + 0xa8) = lVar2;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = local_28;
    }
  }
  if ((local_20 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_c8 = DAT_026df5f0;
  if (DAT_026df5f0 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_02729460;
  local_c0 = '\x01';
  if (DAT_02729460 != 0) {
    FUN_00d50b00();
  }
  local_b8 = lVar1;
  local_b0 = '\x01';
  local_a8 = 0;
  local_a0 = '\0';
  FUN_000bf690(&local_b8,&local_c8,&local_a8);
  lVar1 = *(longlong *)(unaff_RDI + 0xb0);
  lVar2 = lVar1;
  if (lVar1 == local_28) goto LAB_000f2070;
  lVar2 = local_28;
  if (local_20 == '\0') {
    if (local_28 == 0) {
      lVar2 = 0;
      goto LAB_000f2025;
    }
    FUN_00d50b00();
    lVar1 = *(longlong *)(unaff_RDI + 0xb0);
    *(longlong *)(unaff_RDI + 0xb0) = local_28;
  }
  else {
    local_20 = '\0';
LAB_000f2025:
    *(longlong *)(unaff_RDI + 0xb0) = lVar2;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar2 = local_28;
  }
LAB_000f2070:
  if ((local_20 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @000fbb00 — 947 bytes
// str: ""MDSystemLoadView""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000fbb00(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_000fabd0();
  *unaff_RDI = &DAT_024f2238;
  unaff_RDI[2] = &DAT_024f2d10;
  unaff_RDI[0x39] = &DAT_024f2d50;
  *(undefined4 *)(unaff_RDI + 0x44) = 0;
  if (DAT_026df7a8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026df6f8 = FUN_000f5df0();
      _DAT_026df6e0 = "MDSystemLoadView";
      _DAT_026df6e8 = 0x230;
      _DAT_026df6f0 = FUN_000f5cc0;
      _DAT_026df700 = 0;
      uRam00000000026df708 = 0;
      _DAT_026df710 = 0;
      uRam00000000026df718 = 0;
      _DAT_026df720 = 0;
      uRam00000000026df728 = 0;
      _DAT_026df730 = 0;
      uRam00000000026df738 = 0;
      _DAT_026df740 = 0;
      uRam00000000026df748 = 0;
      _DAT_026df750 = 0;
      uRam00000000026df758 = 0;
      _DAT_026df760 = 0;
      uRam00000000026df768 = 0;
      _DAT_026df770 = 0;
      uRam00000000026df778 = 0;
      _DAT_026df780 = 0;
      uRam00000000026df788 = 0;
      _DAT_026df790 = 0;
      _uRam00000000026df798 = 0;
      _DAT_026df7a0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026df79b == '\0') {
    FUN_000fbee0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x224) = 0;
  if (DAT_026df7a8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026df6f8 = FUN_000f5df0();
      _DAT_026df6e0 = "MDSystemLoadView";
      _DAT_026df6e8 = 0x230;
      _DAT_026df6f0 = FUN_000f5cc0;
      _DAT_026df700 = 0;
      uRam00000000026df708 = 0;
      _DAT_026df710 = 0;
      uRam00000000026df718 = 0;
      _DAT_026df720 = 0;
      uRam00000000026df728 = 0;
      _DAT_026df730 = 0;
      uRam00000000026df738 = 0;
      _DAT_026df740 = 0;
      uRam00000000026df748 = 0;
      _DAT_026df750 = 0;
      uRam00000000026df758 = 0;
      _DAT_026df760 = 0;
      uRam00000000026df768 = 0;
      _DAT_026df770 = 0;
      uRam00000000026df778 = 0;
      _DAT_026df780 = 0;
      uRam00000000026df788 = 0;
      _DAT_026df790 = 0;
      _uRam00000000026df798 = 0;
      _DAT_026df7a0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026df79b == '\0') {
    FUN_000fc050();
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0x45) = 0;
  if (DAT_026df7a8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026df6f8 = FUN_000f5df0();
      _DAT_026df6e0 = "MDSystemLoadView";
      _DAT_026df6e8 = 0x230;
      _DAT_026df6f0 = FUN_000f5cc0;
      _DAT_026df700 = 0;
      uRam00000000026df708 = 0;
      _DAT_026df710 = 0;
      uRam00000000026df718 = 0;
      _DAT_026df720 = 0;
      uRam00000000026df728 = 0;
      _DAT_026df730 = 0;
      uRam00000000026df738 = 0;
      _DAT_026df740 = 0;
      uRam00000000026df748 = 0;
      _DAT_026df750 = 0;
      uRam00000000026df758 = 0;
      _DAT_026df760 = 0;
      uRam00000000026df768 = 0;
      _DAT_026df770 = 0;
      uRam00000000026df778 = 0;
      _DAT_026df780 = 0;
      uRam00000000026df788 = 0;
      _DAT_026df790 = 0;
      _uRam00000000026df798 = 0;
      _DAT_026df7a0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026df79b == '\0') {
    FUN_000fc1c0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x22c) = 0;
  if (DAT_026df7a8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026df6f8 = FUN_000f5df0();
      _DAT_026df6e0 = "MDSystemLoadView";
      _DAT_026df6e8 = 0x230;
      _DAT_026df6f0 = FUN_000f5cc0;
      _DAT_026df700 = 0;
      uRam00000000026df708 = 0;
      _DAT_026df710 = 0;
      uRam00000000026df718 = 0;
      _DAT_026df720 = 0;
      uRam00000000026df728 = 0;
      _DAT_026df730 = 0;
      uRam00000000026df738 = 0;
      _DAT_026df740 = 0;
      uRam00000000026df748 = 0;
      _DAT_026df750 = 0;
      uRam00000000026df758 = 0;
      _DAT_026df760 = 0;
      uRam00000000026df768 = 0;
      _DAT_026df770 = 0;
      uRam00000000026df778 = 0;
      _DAT_026df780 = 0;
      uRam00000000026df788 = 0;
      _DAT_026df790 = 0;
      _uRam00000000026df798 = 0;
      _DAT_026df7a0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026df79b == '\0') {
    FUN_000fc330();
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @000f12a0 — 568 bytes
// str: ""MDSystemLoadView""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f12a0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_026df7a8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026df6f8 = FUN_000f5df0();
      _DAT_026df6e0 = "MDSystemLoadView";
      _DAT_026df6e8 = 0x230;
      _DAT_026df6f0 = FUN_000f5cc0;
      _DAT_026df700 = 0;
      uRam00000000026df708 = 0;
      _DAT_026df710 = 0;
      uRam00000000026df718 = 0;
      _DAT_026df720 = 0;
      uRam00000000026df728 = 0;
      _DAT_026df730 = 0;
      uRam00000000026df738 = 0;
      _DAT_026df740 = 0;
      uRam00000000026df748 = 0;
      _DAT_026df750 = 0;
      uRam00000000026df758 = 0;
      _DAT_026df760 = 0;
      uRam00000000026df768 = 0;
      _DAT_026df770 = 0;
      uRam00000000026df778 = 0;
      _DAT_026df780 = 0;
      uRam00000000026df788 = 0;
      _DAT_026df790 = 0;
      _uRam00000000026df798 = 0;
      _DAT_026df7a0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026df79b != '\0') {
    return;
  }
  FUN_000f5b20();
  FUN_00e87760();
  FUN_0006daf0();
  FUN_00d50c00();
  FUN_000fbb00();
  FUN_00d50c00();
  uVar2 = FUN_00e87770();
  FUN_00e87920(uVar2,0);
  FUN_000fba40();
  FUN_000fba40();
  return;
}



