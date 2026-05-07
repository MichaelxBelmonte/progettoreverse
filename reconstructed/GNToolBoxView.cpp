// Reconstructed implementation of GNToolBoxView
// From MikeCore binary — reverse-engineered pseudocode

#include "GNToolBoxView.h"

// ============================================================
// @001a2a30 — 521 bytes
// str: ""GNToolBoxView""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a2a30(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_000a32b0();
  *unaff_RDI = &DAT_0269fe88;
  unaff_RDI[2] = &DAT_026a07b0;
  FUN_001a2c80();
  *(undefined1 *)(unaff_RDI + 0x28) = 0;
  if (DAT_026e6fb8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e6f08 = FUN_0006d940();
      _DAT_026e6ef0 = "GNToolBoxView";
      _DAT_026e6ef8 = 0x148;
      _DAT_026e6f00 = FUN_001a29d0;
      _DAT_026e6f10 = 0;
      uRam00000000026e6f18 = 0;
      _DAT_026e6f20 = 0;
      uRam00000000026e6f28 = 0;
      _DAT_026e6f30 = 0;
      uRam00000000026e6f38 = 0;
      _DAT_026e6f40 = 0;
      uRam00000000026e6f48 = 0;
      _DAT_026e6f50 = 0;
      uRam00000000026e6f58 = 0;
      _DAT_026e6f60 = 0;
      uRam00000000026e6f68 = 0;
      _DAT_026e6f70 = 0;
      uRam00000000026e6f78 = 0;
      _DAT_026e6f80 = 0;
      uRam00000000026e6f88 = 0;
      _DAT_026e6f90 = 0;
      uRam00000000026e6f98 = 0;
      _DAT_026e6fa0 = 0;
      _uRam00000000026e6fa8 = 0;
      _DAT_026e6fb0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e6fab == '\0') {
    FUN_001a2f70();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x141) = 0;
  if (DAT_026e6fb8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e6f08 = FUN_0006d940();
      _DAT_026e6ef0 = "GNToolBoxView";
      _DAT_026e6ef8 = 0x148;
      _DAT_026e6f00 = FUN_001a29d0;
      _DAT_026e6f10 = 0;
      uRam00000000026e6f18 = 0;
      _DAT_026e6f20 = 0;
      uRam00000000026e6f28 = 0;
      _DAT_026e6f30 = 0;
      uRam00000000026e6f38 = 0;
      _DAT_026e6f40 = 0;
      uRam00000000026e6f48 = 0;
      _DAT_026e6f50 = 0;
      uRam00000000026e6f58 = 0;
      _DAT_026e6f60 = 0;
      uRam00000000026e6f68 = 0;
      _DAT_026e6f70 = 0;
      uRam00000000026e6f78 = 0;
      _DAT_026e6f80 = 0;
      uRam00000000026e6f88 = 0;
      _DAT_026e6f90 = 0;
      uRam00000000026e6f98 = 0;
      _DAT_026e6fa0 = 0;
      _uRam00000000026e6fa8 = 0;
      _DAT_026e6fb0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e6fab == '\0') {
    FUN_001a30e0();
    FUN_00e87980();
  }
  return;
}



