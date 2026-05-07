// Reconstructed implementation of MDToolbarPluginTransferCtrl
// From MikeCore binary — reverse-engineered pseudocode

#include "MDToolbarPluginTransferCtrl.h"

// ============================================================
// @002d8a30 — 1627 bytes
// ============================================================

void FUN_002d8a30(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RDI;
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
  *(undefined4 *)(unaff_RDI + 0xc0) = 0xffffffff;
  FUN_00d50b00();
  local_160 = DAT_026df590;
  if (DAT_026df590 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_026d88c8;
  local_158 = '\x01';
  if (DAT_026d88c8 != 0) {
    FUN_00d50b00();
  }
  local_150 = lVar1;
  local_148 = '\x01';
  local_140 = 0;
  local_138 = '\0';
  FUN_000bf690(&local_150,&local_160,&local_140);
  lVar1 = *(longlong *)(unaff_RDI + 0x80);
  lVar2 = lVar1;
  if (lVar1 != local_30) {
    lVar2 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar2 = 0;
        goto LAB_002d8afe;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(unaff_RDI + 0x80);
      *(longlong *)(unaff_RDI + 0x80) = local_30;
    }
    else {
      local_28 = '\0';
LAB_002d8afe:
      *(longlong *)(unaff_RDI + 0x80) = lVar2;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_026f6d00;
  if (DAT_026f6d00 != 0) {
    FUN_00d50b00();
  }
  local_130 = lVar1;
  local_128 = '\x01';
  local_120 = 0;
  local_118 = '\0';
  FUN_000bf780();
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_026d88d0;
  if (DAT_026d88d0 != 0) {
    FUN_00d50b00();
  }
  local_110 = lVar1;
  local_108 = '\x01';
  local_100 = 0;
  local_f8 = '\0';
  FUN_000bf780();
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_026fc738;
  if (DAT_026fc738 != 0) {
    FUN_00d50b00();
  }
  local_f0 = lVar1;
  local_e8 = '\x01';
  local_e0 = 0;
  local_d8 = '\0';
  FUN_000bf780();
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_026fdeb8;
  if (DAT_026fdeb8 != 0) {
    FUN_00d50b00();
  }
  local_d0 = lVar1;
  local_c8 = '\x01';
  local_c0 = 0;
  local_b8 = '\0';
  FUN_000bf780();
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_b0 = DAT_026d88e0;
  if (DAT_026d88e0 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_026f6cf0;
  local_a8 = '\x01';
  if (DAT_026f6cf0 != 0) {
    FUN_00d50b00();
  }
  local_a0 = lVar1;
  local_98 = '\x01';
  local_90 = 0;
  local_88 = '\0';
  FUN_000bf690(&local_a0,&local_b0,&local_90);
  lVar1 = *(longlong *)(unaff_RDI + 0xb8);
  lVar2 = lVar1;
  if (lVar1 != local_30) {
    lVar2 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar2 = 0;
        goto LAB_002d8e78;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(unaff_RDI + 0xb8);
      *(longlong *)(unaff_RDI + 0xb8) = local_30;
    }
    else {
      local_28 = '\0';
LAB_002d8e78:
      *(longlong *)(unaff_RDI + 0xb8) = lVar2;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_80 = DAT_026f6d88;
  if (DAT_026f6d88 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_026f6d90;
  local_78 = '\x01';
  if (DAT_026f6d90 != 0) {
    FUN_00d50b00();
  }
  local_70 = lVar1;
  local_68 = '\x01';
  local_60 = 0;
  local_58 = '\0';
  FUN_000bf690(&local_70,&local_80,&local_60);
  lVar1 = *(longlong *)(unaff_RDI + 0x88);
  lVar2 = lVar1;
  if (lVar1 == local_30) goto LAB_002d9008;
  lVar2 = local_30;
  if (local_28 == '\0') {
    if (local_30 == 0) {
      lVar2 = 0;
      goto LAB_002d8fbd;
    }
    FUN_00d50b00();
    lVar1 = *(longlong *)(unaff_RDI + 0x88);
    *(longlong *)(unaff_RDI + 0x88) = local_30;
  }
  else {
    local_28 = '\0';
LAB_002d8fbd:
    *(longlong *)(unaff_RDI + 0x88) = lVar2;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar2 = local_30;
  }
LAB_002d9008:
  if ((local_28 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @002d84b0 — 1367 bytes
// str: ""onUpdatePlaybackController""
// str: ""onFeatureSetChanged""
// str: ""onCompareModeChanged""
// str: ""handleToggleAraCompare""
// str: ""MDToolbarPluginTransferCtrl""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002d84b0(void)

{
  int iVar1;
  
  if (DAT_02806750 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026fdfa8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fdef8 = FUN_00015ff0();
          _DAT_026fdee0 = "MDToolbarPluginTransferCtrl";
          _DAT_026fdee8 = 200;
          _DAT_026fdef0 = FUN_002dbd40;
          _DAT_026fdf00 = 0;
          uRam00000000026fdf08 = 0;
          _DAT_026fdf10 = 0;
          uRam00000000026fdf18 = 0;
          _DAT_026fdf20 = 0;
          uRam00000000026fdf28 = 0;
          _DAT_026fdf30 = 0;
          uRam00000000026fdf38 = 0;
          _DAT_026fdf40 = 0;
          uRam00000000026fdf48 = 0;
          _DAT_026fdf50 = 0;
          uRam00000000026fdf58 = 0;
          _DAT_026fdf60 = 0;
          uRam00000000026fdf68 = 0;
          _DAT_026fdf70 = 0;
          uRam00000000026fdf78 = 0;
          _DAT_026fdf80 = 0;
          uRam00000000026fdf88 = 0;
          _DAT_026fdf90 = 0;
          uRam00000000026fdf98 = 0;
          _DAT_026fdfa0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02806710 = "handleToggleAraCompare";
      _DAT_02806718 = &DAT_026fdee0;
      _DAT_02806720 = 0;
      _DAT_02806728 = &DAT_026fdfb0;
      _DAT_02806730 = FUN_002dbda0;
      _DAT_02806738 = FUN_002da720;
      _DAT_02806740 = 0;
      uRam0000000002806748 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02806798 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026fdfa8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fdef8 = FUN_00015ff0();
          _DAT_026fdee0 = "MDToolbarPluginTransferCtrl";
          _DAT_026fdee8 = 200;
          _DAT_026fdef0 = FUN_002dbd40;
          _DAT_026fdf00 = 0;
          uRam00000000026fdf08 = 0;
          _DAT_026fdf10 = 0;
          uRam00000000026fdf18 = 0;
          _DAT_026fdf20 = 0;
          uRam00000000026fdf28 = 0;
          _DAT_026fdf30 = 0;
          uRam00000000026fdf38 = 0;
          _DAT_026fdf40 = 0;
          uRam00000000026fdf48 = 0;
          _DAT_026fdf50 = 0;
          uRam00000000026fdf58 = 0;
          _DAT_026fdf60 = 0;
          uRam00000000026fdf68 = 0;
          _DAT_026fdf70 = 0;
          uRam00000000026fdf78 = 0;
          _DAT_026fdf80 = 0;
          uRam00000000026fdf88 = 0;
          _DAT_026fdf90 = 0;
          uRam00000000026fdf98 = 0;
          _DAT_026fdfa0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02806758 = "onUpdatePlaybackController";
      _DAT_02806760 = &DAT_026fdee0;
      _DAT_02806768 = 0;
      _DAT_02806770 = &DAT_026fdfb4;
      _DAT_02806778 = FUN_002dbe30;
      _DAT_02806780 = FUN_002d9540;
      _DAT_02806788 = 0;
      uRam0000000002806790 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028067e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026fdfa8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fdef8 = FUN_00015ff0();
          _DAT_026fdee0 = "MDToolbarPluginTransferCtrl";
          _DAT_026fdee8 = 200;
          _DAT_026fdef0 = FUN_002dbd40;
          _DAT_026fdf00 = 0;
          uRam00000000026fdf08 = 0;
          _DAT_026fdf10 = 0;
          uRam00000000026fdf18 = 0;
          _DAT_026fdf20 = 0;
          uRam00000000026fdf28 = 0;
          _DAT_026fdf30 = 0;
          uRam00000000026fdf38 = 0;
          _DAT_026fdf40 = 0;
          uRam00000000026fdf48 = 0;
          _DAT_026fdf50 = 0;
          uRam00000000026fdf58 = 0;
          _DAT_026fdf60 = 0;
          uRam00000000026fdf68 = 0;
          _DAT_026fdf70 = 0;
          uRam00000000026fdf78 = 0;
          _DAT_026fdf80 = 0;
          uRam00000000026fdf88 = 0;
          _DAT_026fdf90 = 0;
          uRam00000000026fdf98 = 0;
          _DAT_026fdfa0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028067a0 = "onFeatureSetChanged";
      _DAT_028067a8 = &DAT_026fdee0;
      _DAT_028067b0 = 0;
      _DAT_028067b8 = &DAT_026fdfb4;
      _DAT_028067c0 = FUN_002dbe30;
      _DAT_028067c8 = FUN_002dbb00;
      _DAT_028067d0 = 0;
      uRam00000000028067d8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02806828 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026fdfa8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fdef8 = FUN_00015ff0();
          _DAT_026fdee0 = "MDToolbarPluginTransferCtrl";
          _DAT_026fdee8 = 200;
          _DAT_026fdef0 = FUN_002dbd40;
          _DAT_026fdf00 = 0;
          uRam00000000026fdf08 = 0;
          _DAT_026fdf10 = 0;
          uRam00000000026fdf18 = 0;
          _DAT_026fdf20 = 0;
          uRam00000000026fdf28 = 0;
          _DAT_026fdf30 = 0;
          uRam00000000026fdf38 = 0;
          _DAT_026fdf40 = 0;
          uRam00000000026fdf48 = 0;
          _DAT_026fdf50 = 0;
          uRam00000000026fdf58 = 0;
          _DAT_026fdf60 = 0;
          uRam00000000026fdf68 = 0;
          _DAT_026fdf70 = 0;
          uRam00000000026fdf78 = 0;
          _DAT_026fdf80 = 0;
          uRam00000000026fdf88 = 0;
          _DAT_026fdf90 = 0;
          uRam00000000026fdf98 = 0;
          _DAT_026fdfa0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028067e8 = "onCompareModeChanged";
      _DAT_028067f0 = &DAT_026fdee0;
      _DAT_028067f8 = 0;
      _DAT_02806800 = &DAT_026fdfb4;
      _DAT_02806808 = FUN_002dbe30;
      _DAT_02806810 = FUN_002dbb20;
      _DAT_02806818 = 0;
      uRam0000000002806820 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @00469210 — 1169 bytes
// str: ""MDToolbarPluginTransferCtrl""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00469210(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_0005aa20();
  *unaff_RDI = &DAT_024df420;
  FUN_004697e0();
  FUN_00469ad0();
  FUN_00469dc0();
  FUN_0046a0b0();
  FUN_0046a3a0();
  FUN_0046a690();
  FUN_0046a980();
  FUN_0046ac70();
  *(undefined1 *)(unaff_RDI + 0x16) = 0;
  if (DAT_026fdfa8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fdef8 = FUN_00015ff0();
      _DAT_026fdee0 = "MDToolbarPluginTransferCtrl";
      _DAT_026fdee8 = 200;
      _DAT_026fdef0 = FUN_002dbd40;
      _DAT_026fdf00 = 0;
      uRam00000000026fdf08 = 0;
      _DAT_026fdf10 = 0;
      uRam00000000026fdf18 = 0;
      _DAT_026fdf20 = 0;
      uRam00000000026fdf28 = 0;
      _DAT_026fdf30 = 0;
      uRam00000000026fdf38 = 0;
      _DAT_026fdf40 = 0;
      uRam00000000026fdf48 = 0;
      _DAT_026fdf50 = 0;
      uRam00000000026fdf58 = 0;
      _DAT_026fdf60 = 0;
      uRam00000000026fdf68 = 0;
      _DAT_026fdf70 = 0;
      uRam00000000026fdf78 = 0;
      _DAT_026fdf80 = 0;
      uRam00000000026fdf88 = 0;
      _DAT_026fdf90 = 0;
      _uRam00000000026fdf98 = 0;
      _DAT_026fdfa0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fdf9b == '\0') {
    FUN_0046af60();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xb1) = 0;
  if (DAT_026fdfa8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fdef8 = FUN_00015ff0();
      _DAT_026fdee0 = "MDToolbarPluginTransferCtrl";
      _DAT_026fdee8 = 200;
      _DAT_026fdef0 = FUN_002dbd40;
      _DAT_026fdf00 = 0;
      uRam00000000026fdf08 = 0;
      _DAT_026fdf10 = 0;
      uRam00000000026fdf18 = 0;
      _DAT_026fdf20 = 0;
      uRam00000000026fdf28 = 0;
      _DAT_026fdf30 = 0;
      uRam00000000026fdf38 = 0;
      _DAT_026fdf40 = 0;
      uRam00000000026fdf48 = 0;
      _DAT_026fdf50 = 0;
      uRam00000000026fdf58 = 0;
      _DAT_026fdf60 = 0;
      uRam00000000026fdf68 = 0;
      _DAT_026fdf70 = 0;
      uRam00000000026fdf78 = 0;
      _DAT_026fdf80 = 0;
      uRam00000000026fdf88 = 0;
      _DAT_026fdf90 = 0;
      _uRam00000000026fdf98 = 0;
      _DAT_026fdfa0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fdf9b == '\0') {
    FUN_0046b0d0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xb4) = 0;
  if (DAT_026fdfa8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fdef8 = FUN_00015ff0();
      _DAT_026fdee0 = "MDToolbarPluginTransferCtrl";
      _DAT_026fdee8 = 200;
      _DAT_026fdef0 = FUN_002dbd40;
      _DAT_026fdf00 = 0;
      uRam00000000026fdf08 = 0;
      _DAT_026fdf10 = 0;
      uRam00000000026fdf18 = 0;
      _DAT_026fdf20 = 0;
      uRam00000000026fdf28 = 0;
      _DAT_026fdf30 = 0;
      uRam00000000026fdf38 = 0;
      _DAT_026fdf40 = 0;
      uRam00000000026fdf48 = 0;
      _DAT_026fdf50 = 0;
      uRam00000000026fdf58 = 0;
      _DAT_026fdf60 = 0;
      uRam00000000026fdf68 = 0;
      _DAT_026fdf70 = 0;
      uRam00000000026fdf78 = 0;
      _DAT_026fdf80 = 0;
      uRam00000000026fdf88 = 0;
      _DAT_026fdf90 = 0;
      _uRam00000000026fdf98 = 0;
      _DAT_026fdfa0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fdf9b == '\0') {
    FUN_0046b240();
    FUN_00e87980();
  }
  FUN_0046b3b0();
  *(undefined4 *)(unaff_RDI + 0x18) = 0;
  if (DAT_026fdfa8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fdef8 = FUN_00015ff0();
      _DAT_026fdee0 = "MDToolbarPluginTransferCtrl";
      _DAT_026fdee8 = 200;
      _DAT_026fdef0 = FUN_002dbd40;
      _DAT_026fdf00 = 0;
      uRam00000000026fdf08 = 0;
      _DAT_026fdf10 = 0;
      uRam00000000026fdf18 = 0;
      _DAT_026fdf20 = 0;
      uRam00000000026fdf28 = 0;
      _DAT_026fdf30 = 0;
      uRam00000000026fdf38 = 0;
      _DAT_026fdf40 = 0;
      uRam00000000026fdf48 = 0;
      _DAT_026fdf50 = 0;
      uRam00000000026fdf58 = 0;
      _DAT_026fdf60 = 0;
      uRam00000000026fdf68 = 0;
      _DAT_026fdf70 = 0;
      uRam00000000026fdf78 = 0;
      _DAT_026fdf80 = 0;
      uRam00000000026fdf88 = 0;
      _DAT_026fdf90 = 0;
      _uRam00000000026fdf98 = 0;
      _DAT_026fdfa0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fdf9b == '\0') {
    FUN_0046b6a0();
    FUN_00e87980();
  }
  return;
}



