// Reconstructed implementation of GNTask
// From MikeCore binary — reverse-engineered pseudocode

#include "GNTask.h"

// ============================================================
// @0005f200 — 658 bytes
// str: ""GNTask""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005f200(void)

{
  int iVar1;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_025818d0;
  unaff_RDI[2] = *(undefined8 *)(unaff_RSI + 0x10);
  *(undefined1 *)(unaff_RDI + 3) = 0;
  if (DAT_026d64a8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026d63f8 = FUN_00d4fe50();
      _DAT_026d63e0 = "GNTask";
      _DAT_026d63e8 = 0x50;
      _DAT_026d63f0 = FUN_0005f1b0;
      _DAT_026d6400 = 0;
      uRam00000000026d6408 = 0;
      _DAT_026d6410 = 0;
      _DAT_026d6488 = 0;
      uRam00000000026d6490 = 0;
      _DAT_026d6498 = 0;
      DAT_026d649a = 1;
      _DAT_026d6418 = 0;
      uRam00000000026d6420 = 0;
      _DAT_026d6428 = 0;
      uRam00000000026d6430 = 0;
      _DAT_026d6438 = 0;
      uRam00000000026d6440 = 0;
      _DAT_026d6448 = 0;
      uRam00000000026d6450 = 0;
      _DAT_026d6458 = 0;
      uRam00000000026d6460 = 0;
      _DAT_026d6468 = 0;
      uRam00000000026d6470 = 0;
      _DAT_026d6478 = 0;
      uRam00000000026d6480 = 0;
      DAT_026d64a3 = 0;
      _DAT_026d649b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d649b == '\0') {
    FUN_0005f550();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x1c) = 0;
  if (DAT_026d64a8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026d63f8 = FUN_00d4fe50();
      _DAT_026d63e0 = "GNTask";
      _DAT_026d63e8 = 0x50;
      _DAT_026d63f0 = FUN_0005f1b0;
      _DAT_026d6400 = 0;
      uRam00000000026d6408 = 0;
      _DAT_026d6410 = 0;
      _DAT_026d6488 = 0;
      uRam00000000026d6490 = 0;
      _DAT_026d6498 = 0;
      DAT_026d649a = 1;
      _DAT_026d6418 = 0;
      uRam00000000026d6420 = 0;
      _DAT_026d6428 = 0;
      uRam00000000026d6430 = 0;
      _DAT_026d6438 = 0;
      uRam00000000026d6440 = 0;
      _DAT_026d6448 = 0;
      uRam00000000026d6450 = 0;
      _DAT_026d6458 = 0;
      uRam00000000026d6460 = 0;
      _DAT_026d6468 = 0;
      uRam00000000026d6470 = 0;
      _DAT_026d6478 = 0;
      uRam00000000026d6480 = 0;
      DAT_026d64a3 = 0;
      _DAT_026d649b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d649b == '\0') {
    FUN_0005f6e0();
    FUN_00e87980();
  }
  FUN_0005f870();
  FUN_0005fb30();
  FUN_0005fdf0();
  FUN_000600b0();
  FUN_000603e0();
  FUN_00060710();
  return;
}



