// Reconstructed implementation of GNUnarchiverImporter
// From MikeCore binary — reverse-engineered pseudocode

#include "GNUnarchiverImporter.h"

// ============================================================
// @0116b7a0 — 708 bytes
// str: ""GNUnarchiverImporter""
// str: ""MUM32Importer""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0116b7a0(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  unaff_RDI[2] = &DAT_0257a7f8;
  if (DAT_026d6f70 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0277bca0 = "GNUnarchiverImporter";
      DAT_0277bcb0 = 0;
      _DAT_0277bca8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_025f02c0;
  unaff_RDI[2] = &DAT_025f0658;
  FUN_0116bb00();
  *(undefined1 *)(unaff_RDI + 4) = 0;
  if (DAT_027a54c0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027a5410 = FUN_00d4fe50();
      _DAT_027a53f8 = "MUM32Importer";
      _DAT_027a5400 = 0x48;
      _DAT_027a5408 = FUN_0116b740;
      _DAT_027a5418 = 0;
      uRam00000000027a5420 = 0;
      _DAT_027a5428 = 0;
      uRam00000000027a5430 = 0;
      _DAT_027a5438 = 0;
      uRam00000000027a5440 = 0;
      _DAT_027a5448 = 0;
      uRam00000000027a5450 = 0;
      _DAT_027a5458 = 0;
      uRam00000000027a5460 = 0;
      _DAT_027a5468 = 0;
      uRam00000000027a5470 = 0;
      _DAT_027a5478 = 0;
      uRam00000000027a5480 = 0;
      _DAT_027a5488 = 0;
      uRam00000000027a5490 = 0;
      _DAT_027a5498 = 0;
      uRam00000000027a54a0 = 0;
      _DAT_027a54a8 = 0;
      _uRam00000000027a54b0 = 0;
      _DAT_027a54b8 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027a54b3 == '\0') {
    FUN_0116bd80();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x21) = 0;
  if (DAT_027a54c0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027a5410 = FUN_00d4fe50();
      _DAT_027a53f8 = "MUM32Importer";
      _DAT_027a5400 = 0x48;
      _DAT_027a5408 = FUN_0116b740;
      _DAT_027a5418 = 0;
      uRam00000000027a5420 = 0;
      _DAT_027a5428 = 0;
      uRam00000000027a5430 = 0;
      _DAT_027a5438 = 0;
      uRam00000000027a5440 = 0;
      _DAT_027a5448 = 0;
      uRam00000000027a5450 = 0;
      _DAT_027a5458 = 0;
      uRam00000000027a5460 = 0;
      _DAT_027a5468 = 0;
      uRam00000000027a5470 = 0;
      _DAT_027a5478 = 0;
      uRam00000000027a5480 = 0;
      _DAT_027a5488 = 0;
      uRam00000000027a5490 = 0;
      _DAT_027a5498 = 0;
      uRam00000000027a54a0 = 0;
      _DAT_027a54a8 = 0;
      _uRam00000000027a54b0 = 0;
      _DAT_027a54b8 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027a54b3 == '\0') {
    FUN_0116bef0();
    FUN_00e87980();
  }
  FUN_0116c060();
  FUN_0116c2e0();
  FUN_0116c560();
  FUN_0116c7e0();
  return;
}



