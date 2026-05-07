// Reconstructed implementation of GNStringAnalyzer
// From MikeCore binary — reverse-engineered pseudocode

#include "GNStringAnalyzer.h"

// ============================================================
// @00053f90 — 553 bytes
// str: ""GNStringAnalyzer""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00053f90(void)

{
  int iVar1;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_025880b0;
  FUN_00054200();
  *(undefined4 *)(unaff_RDI + 3) = 0;
  if (DAT_0277a760 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026d45b8 = FUN_00d4fe50();
      _DAT_026d45a0 = "GNStringAnalyzer";
      _DAT_026d45a8 = 0x28;
      _DAT_026d45b0 = FUN_00053f50;
      _DAT_026d45c0 = 0;
      uRam00000000026d45c8 = 0;
      _DAT_026d45d0 = 0;
      _DAT_026d4648 = 0;
      uRam00000000026d4650 = 0;
      _DAT_026d4658 = 0;
      DAT_026d465a = 1;
      _DAT_026d45d8 = 0;
      uRam00000000026d45e0 = 0;
      _DAT_026d45e8 = 0;
      uRam00000000026d45f0 = 0;
      _DAT_026d45f8 = 0;
      uRam00000000026d4600 = 0;
      _DAT_026d4608 = 0;
      uRam00000000026d4610 = 0;
      _DAT_026d4618 = 0;
      uRam00000000026d4620 = 0;
      _DAT_026d4628 = 0;
      uRam00000000026d4630 = 0;
      _DAT_026d4638 = 0;
      uRam00000000026d4640 = 0;
      DAT_026d4663 = 0;
      _DAT_026d465b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d465b == '\0') {
    FUN_000544c0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x1c) = 0;
  if (DAT_0277a760 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026d45b8 = FUN_00d4fe50();
      _DAT_026d45a0 = "GNStringAnalyzer";
      _DAT_026d45a8 = 0x28;
      _DAT_026d45b0 = FUN_00053f50;
      _DAT_026d45c0 = 0;
      uRam00000000026d45c8 = 0;
      _DAT_026d45d0 = 0;
      _DAT_026d4648 = 0;
      uRam00000000026d4650 = 0;
      _DAT_026d4658 = 0;
      DAT_026d465a = 1;
      _DAT_026d45d8 = 0;
      uRam00000000026d45e0 = 0;
      _DAT_026d45e8 = 0;
      uRam00000000026d45f0 = 0;
      _DAT_026d45f8 = 0;
      uRam00000000026d4600 = 0;
      _DAT_026d4608 = 0;
      uRam00000000026d4610 = 0;
      _DAT_026d4618 = 0;
      uRam00000000026d4620 = 0;
      _DAT_026d4628 = 0;
      uRam00000000026d4630 = 0;
      _DAT_026d4638 = 0;
      uRam00000000026d4640 = 0;
      DAT_026d4663 = 0;
      _DAT_026d465b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d465b == '\0') {
    FUN_00054650();
    FUN_00e87980();
  }
  *(undefined2 *)(unaff_RDI + 4) = *(undefined2 *)(unaff_RSI + 0x20);
  return;
}



