// Reconstructed implementation of MUMultiTrackDropTargets
// From MikeCore binary — reverse-engineered pseudocode

#include "MUMultiTrackDropTargets.h"

// ============================================================
// @01bf5140 — 579 bytes
// str: ""MUMultiTrackDropTargets""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01bf5140(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_02662c78;
  FUN_01bf53e0();
  FUN_01bf56a0();
  *(undefined1 *)(unaff_RDI + 4) = 0;
  if (DAT_027e8550 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027e84a0 = FUN_00d4fe50();
      _DAT_027e8488 = "MUMultiTrackDropTargets";
      _DAT_027e8490 = 0x30;
      _DAT_027e8498 = FUN_01bf50f0;
      _DAT_027e84a8 = 0;
      uRam00000000027e84b0 = 0;
      _DAT_027e84b8 = 0;
      _DAT_027e8530 = 0;
      uRam00000000027e8538 = 0;
      _DAT_027e8540 = 0;
      DAT_027e8542 = 1;
      _DAT_027e84c0 = 0;
      uRam00000000027e84c8 = 0;
      _DAT_027e84d0 = 0;
      uRam00000000027e84d8 = 0;
      _DAT_027e84e0 = 0;
      uRam00000000027e84e8 = 0;
      _DAT_027e84f0 = 0;
      uRam00000000027e84f8 = 0;
      _DAT_027e8500 = 0;
      uRam00000000027e8508 = 0;
      _DAT_027e8510 = 0;
      uRam00000000027e8518 = 0;
      _DAT_027e8520 = 0;
      uRam00000000027e8528 = 0;
      DAT_027e854b = 0;
      _DAT_027e8543 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e8543 == '\0') {
    FUN_01bf5960();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x21) = 0;
  if (DAT_027e8550 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027e84a0 = FUN_00d4fe50();
      _DAT_027e8488 = "MUMultiTrackDropTargets";
      _DAT_027e8490 = 0x30;
      _DAT_027e8498 = FUN_01bf50f0;
      _DAT_027e84a8 = 0;
      uRam00000000027e84b0 = 0;
      _DAT_027e84b8 = 0;
      _DAT_027e8530 = 0;
      uRam00000000027e8538 = 0;
      _DAT_027e8540 = 0;
      DAT_027e8542 = 1;
      _DAT_027e84c0 = 0;
      uRam00000000027e84c8 = 0;
      _DAT_027e84d0 = 0;
      uRam00000000027e84d8 = 0;
      _DAT_027e84e0 = 0;
      uRam00000000027e84e8 = 0;
      _DAT_027e84f0 = 0;
      uRam00000000027e84f8 = 0;
      _DAT_027e8500 = 0;
      uRam00000000027e8508 = 0;
      _DAT_027e8510 = 0;
      uRam00000000027e8518 = 0;
      _DAT_027e8520 = 0;
      uRam00000000027e8528 = 0;
      DAT_027e854b = 0;
      _DAT_027e8543 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e8543 == '\0') {
    FUN_01bf5af0();
    FUN_00e87980();
  }
  FUN_01bf5c80();
  return;
}



