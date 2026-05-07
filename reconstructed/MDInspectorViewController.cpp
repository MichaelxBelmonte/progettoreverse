// Reconstructed implementation of MDInspectorViewController
// From MikeCore binary — reverse-engineered pseudocode

#include "MDInspectorViewController.h"

// ============================================================
// @005ce3a0 — 739 bytes
// str: ""MDInspectorViewController""
// str: ""MDWorkspaceLayoutViewDelegate""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ce3a0(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_0005aa20();
  unaff_RDI[0xe] = &DAT_02508560;
  if (DAT_0271b9f8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0271b9e0 = "MDWorkspaceLayoutViewDelegate";
      DAT_0271b9f0 = 0;
      _DAT_0271b9e8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_024c79d8;
  unaff_RDI[0xe] = &DAT_024c7fc0;
  FUN_005ce7e0();
  FUN_005ceb00();
  FUN_005cee30();
  FUN_005cf160();
  FUN_005cf490();
  FUN_005cf7c0();
  FUN_005cfaf0();
  *(undefined1 *)(unaff_RDI + 0x16) = 0;
  if (DAT_026d8f38 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026d8e88 = FUN_00015ff0();
      _DAT_026d8e70 = "MDInspectorViewController";
      _DAT_026d8e78 = 0xe8;
      _DAT_026d8e80 = FUN_000a0910;
      _DAT_026d8e90 = 0;
      uRam00000000026d8e98 = 0;
      _DAT_026d8ea0 = 0;
      _DAT_026d8f18 = 0;
      uRam00000000026d8f20 = 0;
      _DAT_026d8f28 = 0;
      DAT_026d8f2a = 1;
      _DAT_026d8ea8 = 0;
      uRam00000000026d8eb0 = 0;
      _DAT_026d8eb8 = 0;
      uRam00000000026d8ec0 = 0;
      _DAT_026d8ec8 = 0;
      uRam00000000026d8ed0 = 0;
      _DAT_026d8ed8 = 0;
      uRam00000000026d8ee0 = 0;
      _DAT_026d8ee8 = 0;
      uRam00000000026d8ef0 = 0;
      _DAT_026d8ef8 = 0;
      uRam00000000026d8f00 = 0;
      _DAT_026d8f08 = 0;
      uRam00000000026d8f10 = 0;
      DAT_026d8f33 = 0;
      _DAT_026d8f2b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d8f2b == '\0') {
    FUN_005cfe10();
    FUN_00e87980();
  }
  FUN_005cffa0();
  FUN_005d0260();
  FUN_005d0520();
  FUN_005d07e0();
  FUN_005d0aa0();
  FUN_005d0d60();
  return;
}



