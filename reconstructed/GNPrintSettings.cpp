// Reconstructed implementation of GNPrintSettings
// From MikeCore binary — reverse-engineered pseudocode

#include "GNPrintSettings.h"

// ============================================================
// @01e8ac80 — 714 bytes
// str: ""GNPrintSettings""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e8ac80(void)

{
  int iVar1;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_026a4238;
  unaff_RDI[2] = *(undefined8 *)(unaff_RSI + 0x10);
  *(undefined4 *)(unaff_RDI + 3) = 0;
  if (DAT_027f9a88 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027f99d8 = FUN_00d4fe50();
      _DAT_027f99c0 = "GNPrintSettings";
      _DAT_027f99c8 = 0x38;
      _DAT_027f99d0 = FUN_01e8ac30;
      _DAT_027f99e0 = 0;
      uRam00000000027f99e8 = 0;
      _DAT_027f99f0 = 0;
      uRam00000000027f99f8 = 0;
      _DAT_027f9a00 = 0;
      uRam00000000027f9a08 = 0;
      _DAT_027f9a10 = 0;
      uRam00000000027f9a18 = 0;
      _DAT_027f9a20 = 0;
      uRam00000000027f9a28 = 0;
      _DAT_027f9a30 = 0;
      uRam00000000027f9a38 = 0;
      _DAT_027f9a40 = 0;
      uRam00000000027f9a48 = 0;
      _DAT_027f9a50 = 0;
      uRam00000000027f9a58 = 0;
      _DAT_027f9a60 = 0;
      uRam00000000027f9a68 = 0;
      _DAT_027f9a70 = 0;
      _uRam00000000027f9a78 = 0;
      _DAT_027f9a80 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027f9a7b == '\0') {
    FUN_01e8af80();
    FUN_00e87980();
  }
  *(undefined8 *)((longlong)unaff_RDI + 0x1c) = 0;
  if (DAT_027f9a88 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027f99d8 = FUN_00d4fe50();
      _DAT_027f99c0 = "GNPrintSettings";
      _DAT_027f99c8 = 0x38;
      _DAT_027f99d0 = FUN_01e8ac30;
      _DAT_027f99e0 = 0;
      uRam00000000027f99e8 = 0;
      _DAT_027f99f0 = 0;
      uRam00000000027f99f8 = 0;
      _DAT_027f9a00 = 0;
      uRam00000000027f9a08 = 0;
      _DAT_027f9a10 = 0;
      uRam00000000027f9a18 = 0;
      _DAT_027f9a20 = 0;
      uRam00000000027f9a28 = 0;
      _DAT_027f9a30 = 0;
      uRam00000000027f9a38 = 0;
      _DAT_027f9a40 = 0;
      uRam00000000027f9a48 = 0;
      _DAT_027f9a50 = 0;
      uRam00000000027f9a58 = 0;
      _DAT_027f9a60 = 0;
      uRam00000000027f9a68 = 0;
      _DAT_027f9a70 = 0;
      _uRam00000000027f9a78 = 0;
      _DAT_027f9a80 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027f9a7b == '\0') {
    FUN_01e8b1b0();
    FUN_00e87980();
  }
  *(undefined8 *)((longlong)unaff_RDI + 0x24) = 0;
  if (DAT_027f9a88 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027f99d8 = FUN_00d4fe50();
      _DAT_027f99c0 = "GNPrintSettings";
      _DAT_027f99c8 = 0x38;
      _DAT_027f99d0 = FUN_01e8ac30;
      _DAT_027f99e0 = 0;
      uRam00000000027f99e8 = 0;
      _DAT_027f99f0 = 0;
      uRam00000000027f99f8 = 0;
      _DAT_027f9a00 = 0;
      uRam00000000027f9a08 = 0;
      _DAT_027f9a10 = 0;
      uRam00000000027f9a18 = 0;
      _DAT_027f9a20 = 0;
      uRam00000000027f9a28 = 0;
      _DAT_027f9a30 = 0;
      uRam00000000027f9a38 = 0;
      _DAT_027f9a40 = 0;
      uRam00000000027f9a48 = 0;
      _DAT_027f9a50 = 0;
      uRam00000000027f9a58 = 0;
      _DAT_027f9a60 = 0;
      uRam00000000027f9a68 = 0;
      _DAT_027f9a70 = 0;
      _uRam00000000027f9a78 = 0;
      _DAT_027f9a80 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027f9a7b == '\0') {
    FUN_01e8b320();
    FUN_00e87980();
  }
  FUN_01e8b490();
  return;
}




// ============================================================
// @01e8af80 — 522 bytes
// str: ""GNPrintSettings""
// str: ""GNPrintOrientation""
// str: ""_orientation""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_01e8af80(void)

{
  int iVar1;
  
  if (DAT_027f9b08 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027f9af8 = 0x100000000;
      DAT_027f9b00 = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_027f9b40 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027f9b10 = "GNPrintOrientation";
      _DAT_027f9b18 = 2;
      DAT_027f9b1c = DAT_027f9b00;
      _DAT_027f9b20 = &DAT_027f9af8;
      _DAT_027f9b28 = &DAT_027f9ae0;
      _DAT_027f9b30 = 0;
      uRam00000000027f9b38 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_027f9ad0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027f9a88 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027f99d8 = FUN_00d4fe50();
          _DAT_027f99c0 = "GNPrintSettings";
          _DAT_027f99c8 = 0x38;
          _DAT_027f99d0 = FUN_01e8ac30;
          _DAT_027f99e0 = 0;
          uRam00000000027f99e8 = 0;
          _DAT_027f99f0 = 0;
          uRam00000000027f99f8 = 0;
          _DAT_027f9a00 = 0;
          uRam00000000027f9a08 = 0;
          _DAT_027f9a10 = 0;
          uRam00000000027f9a18 = 0;
          _DAT_027f9a20 = 0;
          uRam00000000027f9a28 = 0;
          _DAT_027f9a30 = 0;
          uRam00000000027f9a38 = 0;
          _DAT_027f9a40 = 0;
          uRam00000000027f9a48 = 0;
          _DAT_027f9a50 = 0;
          uRam00000000027f9a58 = 0;
          _DAT_027f9a60 = 0;
          uRam00000000027f9a68 = 0;
          _DAT_027f9a70 = 0;
          uRam00000000027f9a78 = 0;
          _DAT_027f9a80 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_027f9a90 = "_orientation";
      _DAT_027f9a98 = &DAT_027f99c0;
      _DAT_027f9aa0 = 0;
      _DAT_027f9aa8 = 0x6500;
      _DAT_027f9ab0 = "GNPrintOrientation";
      _DAT_027f9ab8 = &DAT_027f9b10;
      _DAT_027f9ac0 = 0;
      uRam00000000027f9ac8 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_027f9a90;
}



