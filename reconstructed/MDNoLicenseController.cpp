// Reconstructed implementation of MDNoLicenseController
// From MikeCore binary — reverse-engineered pseudocode

#include "MDNoLicenseController.h"

// ============================================================
// @00102850 — 1071 bytes
// ============================================================

void FUN_00102850(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_RDI;
  undefined8 uVar4;
  double dVar5;
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
  longlong *local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  FUN_01e534b0();
  FUN_01f27fe0();
  FUN_0027edc0();
  FUN_00e00960();
  lVar2 = local_38;
  if (local_30 == '\0') {
    if (((local_38 != 0) && (FUN_00d50b00(), local_30 != '\0')) && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_30 = '\0';
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (*(longlong **)(unaff_RDI + 0x70) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x640))();
    uVar4 = (**(code **)(*local_78 + 0x370))();
    FUN_01d44a40(uVar4,1);
    local_68 = local_38;
    local_60 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_60 = '\x01';
    FUN_01e12b60();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    dVar5 = (double)FUN_00c93980();
    lVar1 = DAT_026e1098;
    if (dVar5 < 0.0) {
      if (DAT_026e1098 != 0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_026e10a0;
      if (DAT_026e10a0 != 0) {
        FUN_00d50b00();
      }
      local_d8 = lVar3;
      local_d0 = '\x01';
      local_c8 = 0;
      local_c0 = '\0';
      FUN_00d31230(&local_c8,&local_d8);
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
      FUN_01e125e0();
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
  }
  if (*(longlong *)(unaff_RDI + 0x78) == 0) {
    if (lVar2 == 0) {
      return;
    }
  }
  else {
    dVar5 = (double)FUN_00c93980();
    lVar2 = DAT_026e1098;
    if (dVar5 < 0.0) {
      if (DAT_026e1098 != 0) {
        FUN_00d50b00();
      }
      lVar1 = DAT_026e10a8;
      local_b8 = lVar2;
      local_b0 = '\x01';
      if (DAT_026e10a8 != 0) {
        FUN_00d50b00();
      }
      local_a8 = lVar1;
      local_a0 = '\x01';
      local_98 = 0;
      local_90 = '\0';
      FUN_00d31230(&local_98,&local_a8);
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
      FUN_01e125e0();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
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
    }
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @00102320 — 679 bytes
// str: ""handleOpenInPlaybackMode""
// str: ""handleActivateOnline""
// str: ""MDNoLicenseController""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00102320(void)

{
  int iVar1;
  
  if (DAT_02803ff0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e10d0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0270e4a8 = FUN_00015ff0();
          _DAT_0270e490 = "MDNoLicenseController";
          _DAT_0270e498 = 0x80;
          _DAT_0270e4a0 = FUN_00104b10;
          _DAT_0270e4b0 = 0;
          uRam000000000270e4b8 = 0;
          _DAT_0270e4c0 = 0;
          uRam000000000270e4c8 = 0;
          _DAT_0270e4d0 = 0;
          uRam000000000270e4d8 = 0;
          _DAT_0270e4e0 = 0;
          uRam000000000270e4e8 = 0;
          _DAT_0270e4f0 = 0;
          uRam000000000270e4f8 = 0;
          _DAT_0270e500 = 0;
          uRam000000000270e508 = 0;
          _DAT_0270e510 = 0;
          uRam000000000270e518 = 0;
          _DAT_0270e520 = 0;
          uRam000000000270e528 = 0;
          _DAT_0270e530 = 0;
          uRam000000000270e538 = 0;
          _DAT_0270e540 = 0;
          uRam000000000270e548 = 0;
          _DAT_0270e550 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02803fb0 = "handleOpenInPlaybackMode";
      _DAT_02803fb8 = &DAT_0270e490;
      _DAT_02803fc0 = 0;
      _DAT_02803fc8 = &DAT_026e10d8;
      _DAT_02803fd0 = FUN_00104b50;
      _DAT_02803fd8 = 0x5c1;
      _DAT_02803fe0 = 0;
      uRam0000000002803fe8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02804038 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e10d0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0270e4a8 = FUN_00015ff0();
          _DAT_0270e490 = "MDNoLicenseController";
          _DAT_0270e498 = 0x80;
          _DAT_0270e4a0 = FUN_00104b10;
          _DAT_0270e4b0 = 0;
          uRam000000000270e4b8 = 0;
          _DAT_0270e4c0 = 0;
          uRam000000000270e4c8 = 0;
          _DAT_0270e4d0 = 0;
          uRam000000000270e4d8 = 0;
          _DAT_0270e4e0 = 0;
          uRam000000000270e4e8 = 0;
          _DAT_0270e4f0 = 0;
          uRam000000000270e4f8 = 0;
          _DAT_0270e500 = 0;
          uRam000000000270e508 = 0;
          _DAT_0270e510 = 0;
          uRam000000000270e518 = 0;
          _DAT_0270e520 = 0;
          uRam000000000270e528 = 0;
          _DAT_0270e530 = 0;
          uRam000000000270e538 = 0;
          _DAT_0270e540 = 0;
          uRam000000000270e548 = 0;
          _DAT_0270e550 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02803ff8 = "handleActivateOnline";
      _DAT_02804000 = &DAT_0270e490;
      _DAT_02804008 = 0;
      _DAT_02804010 = &DAT_026e10d8;
      _DAT_02804018 = FUN_00104b50;
      _DAT_02804020 = 0x5c9;
      _DAT_02804028 = 0;
      uRam0000000002804030 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



