// Reconstructed implementation of GNQueue
// From MikeCore binary — reverse-engineered pseudocode

#include "GNQueue.h"

// ============================================================
// @00023d10 — 1281 bytes
// str: ""GNQueue""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00023d10(void)

{
  int iVar1;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_0258a9e8;
  unaff_RDI[2] = *(undefined8 *)(unaff_RSI + 0x10);
  *(undefined4 *)(unaff_RDI + 3) = 0;
  if (DAT_026cd5f8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026cd548 = FUN_00d4fe50();
      _DAT_026cd530 = "GNQueue";
      _DAT_026cd538 = 0x30;
      _DAT_026cd540 = FUN_00023cd0;
      _DAT_026cd550 = 0;
      uRam00000000026cd558 = 0;
      _DAT_026cd560 = 0;
      _DAT_026cd5d8 = 0;
      uRam00000000026cd5e0 = 0;
      _DAT_026cd5e8 = 0;
      DAT_026cd5ea = 7;
      _DAT_026cd568 = 0;
      uRam00000000026cd570 = 0;
      _DAT_026cd578 = 0;
      uRam00000000026cd580 = 0;
      _DAT_026cd588 = 0;
      uRam00000000026cd590 = 0;
      _DAT_026cd598 = 0;
      uRam00000000026cd5a0 = 0;
      _DAT_026cd5a8 = 0;
      uRam00000000026cd5b0 = 0;
      _DAT_026cd5b8 = 0;
      uRam00000000026cd5c0 = 0;
      _DAT_026cd5c8 = 0;
      uRam00000000026cd5d0 = 0;
      DAT_026cd5f3 = 0;
      _DAT_026cd5eb = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026cd5eb == '\0') {
    FUN_00024240();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x1c) = 0;
  if (DAT_026cd5f8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026cd548 = FUN_00d4fe50();
      _DAT_026cd530 = "GNQueue";
      _DAT_026cd538 = 0x30;
      _DAT_026cd540 = FUN_00023cd0;
      _DAT_026cd550 = 0;
      uRam00000000026cd558 = 0;
      _DAT_026cd560 = 0;
      _DAT_026cd5d8 = 0;
      uRam00000000026cd5e0 = 0;
      _DAT_026cd5e8 = 0;
      DAT_026cd5ea = 7;
      _DAT_026cd568 = 0;
      uRam00000000026cd570 = 0;
      _DAT_026cd578 = 0;
      uRam00000000026cd580 = 0;
      _DAT_026cd588 = 0;
      uRam00000000026cd590 = 0;
      _DAT_026cd598 = 0;
      uRam00000000026cd5a0 = 0;
      _DAT_026cd5a8 = 0;
      uRam00000000026cd5b0 = 0;
      _DAT_026cd5b8 = 0;
      uRam00000000026cd5c0 = 0;
      _DAT_026cd5c8 = 0;
      uRam00000000026cd5d0 = 0;
      DAT_026cd5f3 = 0;
      _DAT_026cd5eb = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026cd5eb == '\0') {
    FUN_000243d0();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 4) = 0;
  if (DAT_026cd5f8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026cd548 = FUN_00d4fe50();
      _DAT_026cd530 = "GNQueue";
      _DAT_026cd538 = 0x30;
      _DAT_026cd540 = FUN_00023cd0;
      _DAT_026cd550 = 0;
      uRam00000000026cd558 = 0;
      _DAT_026cd560 = 0;
      _DAT_026cd5d8 = 0;
      uRam00000000026cd5e0 = 0;
      _DAT_026cd5e8 = 0;
      DAT_026cd5ea = 7;
      _DAT_026cd568 = 0;
      uRam00000000026cd570 = 0;
      _DAT_026cd578 = 0;
      uRam00000000026cd580 = 0;
      _DAT_026cd588 = 0;
      uRam00000000026cd590 = 0;
      _DAT_026cd598 = 0;
      uRam00000000026cd5a0 = 0;
      _DAT_026cd5a8 = 0;
      uRam00000000026cd5b0 = 0;
      _DAT_026cd5b8 = 0;
      uRam00000000026cd5c0 = 0;
      _DAT_026cd5c8 = 0;
      uRam00000000026cd5d0 = 0;
      DAT_026cd5f3 = 0;
      _DAT_026cd5eb = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026cd5eb == '\0') {
    FUN_00024560();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x24) = 0;
  if (DAT_026cd5f8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026cd548 = FUN_00d4fe50();
      _DAT_026cd530 = "GNQueue";
      _DAT_026cd538 = 0x30;
      _DAT_026cd540 = FUN_00023cd0;
      _DAT_026cd550 = 0;
      uRam00000000026cd558 = 0;
      _DAT_026cd560 = 0;
      _DAT_026cd5d8 = 0;
      uRam00000000026cd5e0 = 0;
      _DAT_026cd5e8 = 0;
      DAT_026cd5ea = 7;
      _DAT_026cd568 = 0;
      uRam00000000026cd570 = 0;
      _DAT_026cd578 = 0;
      uRam00000000026cd580 = 0;
      _DAT_026cd588 = 0;
      uRam00000000026cd590 = 0;
      _DAT_026cd598 = 0;
      uRam00000000026cd5a0 = 0;
      _DAT_026cd5a8 = 0;
      uRam00000000026cd5b0 = 0;
      _DAT_026cd5b8 = 0;
      uRam00000000026cd5c0 = 0;
      _DAT_026cd5c8 = 0;
      uRam00000000026cd5d0 = 0;
      DAT_026cd5f3 = 0;
      _DAT_026cd5eb = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026cd5eb == '\0') {
    FUN_000246f0();
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 5) = 0;
  if (DAT_026cd5f8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026cd548 = FUN_00d4fe50();
      _DAT_026cd530 = "GNQueue";
      _DAT_026cd538 = 0x30;
      _DAT_026cd540 = FUN_00023cd0;
      _DAT_026cd550 = 0;
      uRam00000000026cd558 = 0;
      _DAT_026cd560 = 0;
      _DAT_026cd5d8 = 0;
      uRam00000000026cd5e0 = 0;
      _DAT_026cd5e8 = 0;
      DAT_026cd5ea = 7;
      _DAT_026cd568 = 0;
      uRam00000000026cd570 = 0;
      _DAT_026cd578 = 0;
      uRam00000000026cd580 = 0;
      _DAT_026cd588 = 0;
      uRam00000000026cd590 = 0;
      _DAT_026cd598 = 0;
      uRam00000000026cd5a0 = 0;
      _DAT_026cd5a8 = 0;
      uRam00000000026cd5b0 = 0;
      _DAT_026cd5b8 = 0;
      uRam00000000026cd5c0 = 0;
      _DAT_026cd5c8 = 0;
      uRam00000000026cd5d0 = 0;
      DAT_026cd5f3 = 0;
      _DAT_026cd5eb = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026cd5eb == '\0') {
    FUN_00024880();
    FUN_00e87980();
  }
  return;
}



