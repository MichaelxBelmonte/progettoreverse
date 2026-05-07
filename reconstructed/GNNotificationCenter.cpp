// Reconstructed implementation of GNNotificationCenter
// From MikeCore binary — reverse-engineered pseudocode

#include "GNNotificationCenter.h"

// ============================================================
// @00052160 — 656 bytes
// str: ""GNNotificationCenter""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00052160(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_02574bb0;
  FUN_000524b0();
  FUN_000527e0();
  FUN_00052b10();
  unaff_RDI[5] = 0;
  if (DAT_0277d8f0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026d3f68 = FUN_00d4fe50();
      _DAT_026d3f50 = "GNNotificationCenter";
      _DAT_026d3f58 = 0x50;
      _DAT_026d3f60 = FUN_00052010;
      _DAT_026d3f70 = 0;
      uRam00000000026d3f78 = 0;
      _DAT_026d3f80 = 0;
      _DAT_026d3ff8 = 0;
      uRam00000000026d4000 = 0;
      _DAT_026d4008 = 0;
      DAT_026d400a = 1;
      _DAT_026d3f88 = 0;
      uRam00000000026d3f90 = 0;
      _DAT_026d3f98 = 0;
      uRam00000000026d3fa0 = 0;
      _DAT_026d3fa8 = 0;
      uRam00000000026d3fb0 = 0;
      _DAT_026d3fb8 = 0;
      uRam00000000026d3fc0 = 0;
      _DAT_026d3fc8 = 0;
      uRam00000000026d3fd0 = 0;
      _DAT_026d3fd8 = 0;
      uRam00000000026d3fe0 = 0;
      _DAT_026d3fe8 = 0;
      uRam00000000026d3ff0 = 0;
      DAT_026d4013 = 0;
      _DAT_026d400b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d400b == '\0') {
    FUN_00052dd0();
    FUN_00e87980();
  }
  FUN_00052f60();
  FUN_00053220();
  *(undefined4 *)(unaff_RDI + 8) = 0;
  if (DAT_0277d8f0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026d3f68 = FUN_00d4fe50();
      _DAT_026d3f50 = "GNNotificationCenter";
      _DAT_026d3f58 = 0x50;
      _DAT_026d3f60 = FUN_00052010;
      _DAT_026d3f70 = 0;
      uRam00000000026d3f78 = 0;
      _DAT_026d3f80 = 0;
      _DAT_026d3ff8 = 0;
      uRam00000000026d4000 = 0;
      _DAT_026d4008 = 0;
      DAT_026d400a = 1;
      _DAT_026d3f88 = 0;
      uRam00000000026d3f90 = 0;
      _DAT_026d3f98 = 0;
      uRam00000000026d3fa0 = 0;
      _DAT_026d3fa8 = 0;
      uRam00000000026d3fb0 = 0;
      _DAT_026d3fb8 = 0;
      uRam00000000026d3fc0 = 0;
      _DAT_026d3fc8 = 0;
      uRam00000000026d3fd0 = 0;
      _DAT_026d3fd8 = 0;
      uRam00000000026d3fe0 = 0;
      _DAT_026d3fe8 = 0;
      uRam00000000026d3ff0 = 0;
      DAT_026d4013 = 0;
      _DAT_026d400b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d400b == '\0') {
    FUN_00053550();
    FUN_00e87980();
  }
  FUN_000536e0();
  return;
}



