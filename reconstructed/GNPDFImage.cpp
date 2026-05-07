// Reconstructed implementation of GNPDFImage
// From MikeCore binary — reverse-engineered pseudocode

#include "GNPDFImage.h"

// ============================================================
// @01e87ec0 — 515 bytes
// str: ""GNPDFImage""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e87ec0(void)

{
  int iVar1;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_026b6d08;
  *(undefined4 *)((longlong)unaff_RDI + 0xc) = 0;
  if (DAT_027f8b50 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027ff030 = FUN_00d4fe50();
      _DAT_027ff018 = "GNPDFImage";
      _DAT_027ff020 = 0x30;
      _DAT_027ff028 = FUN_01f15d80;
      _DAT_027ff038 = 0;
      uRam00000000027ff040 = 0;
      _DAT_027ff048 = 0;
      uRam00000000027ff050 = 0;
      _DAT_027ff058 = 0;
      uRam00000000027ff060 = 0;
      _DAT_027ff068 = 0;
      uRam00000000027ff070 = 0;
      _DAT_027ff078 = 0;
      uRam00000000027ff080 = 0;
      _DAT_027ff088 = 0;
      uRam00000000027ff090 = 0;
      _DAT_027ff098 = 0;
      uRam00000000027ff0a0 = 0;
      _DAT_027ff0a8 = 0;
      uRam00000000027ff0b0 = 0;
      _DAT_027ff0b8 = 0;
      uRam00000000027ff0c0 = 0;
      _DAT_027ff0c8 = 0;
      _uRam00000000027ff0d0 = 0;
      _DAT_027ff0d8 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027ff0d3 == '\0') {
    FUN_01e88110();
    FUN_00e87980();
  }
  unaff_RDI[2] = 0;
  if (DAT_027f8b50 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027ff030 = FUN_00d4fe50();
      _DAT_027ff018 = "GNPDFImage";
      _DAT_027ff020 = 0x30;
      _DAT_027ff028 = FUN_01f15d80;
      _DAT_027ff038 = 0;
      uRam00000000027ff040 = 0;
      _DAT_027ff048 = 0;
      uRam00000000027ff050 = 0;
      _DAT_027ff058 = 0;
      uRam00000000027ff060 = 0;
      _DAT_027ff068 = 0;
      uRam00000000027ff070 = 0;
      _DAT_027ff078 = 0;
      uRam00000000027ff080 = 0;
      _DAT_027ff088 = 0;
      uRam00000000027ff090 = 0;
      _DAT_027ff098 = 0;
      uRam00000000027ff0a0 = 0;
      _DAT_027ff0a8 = 0;
      uRam00000000027ff0b0 = 0;
      _DAT_027ff0b8 = 0;
      uRam00000000027ff0c0 = 0;
      _DAT_027ff0c8 = 0;
      _uRam00000000027ff0d0 = 0;
      _DAT_027ff0d8 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027ff0d3 == '\0') {
    FUN_01e88280();
    FUN_00e87980();
  }
  FUN_01e883f0();
  FUN_01e88670();
  unaff_RDI[5] = *(undefined8 *)(unaff_RSI + 0x28);
  return;
}



