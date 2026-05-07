// Reconstructed implementation of GNPlugInHostDocument
// From MikeCore binary — reverse-engineered pseudocode

#include "GNPlugInHostDocument.h"

// ============================================================
// @00bdad20 — 605 bytes
// str: ""GNPlugInHostDocument""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bdad20(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_0254bd30;
  FUN_00bdb000();
  FUN_00bdb2c0();
  *(undefined1 *)(unaff_RDI + 4) = 0;
  if (DAT_027665a0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027664f0 = FUN_00d4fe50();
      _DAT_027664d8 = "GNPlugInHostDocument";
      _DAT_027664e0 = 0x38;
      _DAT_027664e8 = FUN_00bdaaf0;
      _DAT_027664f8 = 0;
      uRam0000000002766500 = 0;
      _DAT_02766508 = 0;
      _DAT_02766580 = 0;
      uRam0000000002766588 = 0;
      _DAT_02766590 = 0;
      DAT_02766592 = 1;
      _DAT_02766510 = 0;
      uRam0000000002766518 = 0;
      _DAT_02766520 = 0;
      uRam0000000002766528 = 0;
      _DAT_02766530 = 0;
      uRam0000000002766538 = 0;
      _DAT_02766540 = 0;
      uRam0000000002766548 = 0;
      _DAT_02766550 = 0;
      uRam0000000002766558 = 0;
      _DAT_02766560 = 0;
      uRam0000000002766568 = 0;
      _DAT_02766570 = 0;
      uRam0000000002766578 = 0;
      DAT_0276659b = 0;
      _DAT_02766593 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02766593 == '\0') {
    FUN_00bdb580();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x21) = 0;
  if (DAT_027665a0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027664f0 = FUN_00d4fe50();
      _DAT_027664d8 = "GNPlugInHostDocument";
      _DAT_027664e0 = 0x38;
      _DAT_027664e8 = FUN_00bdaaf0;
      _DAT_027664f8 = 0;
      uRam0000000002766500 = 0;
      _DAT_02766508 = 0;
      _DAT_02766580 = 0;
      uRam0000000002766588 = 0;
      _DAT_02766590 = 0;
      DAT_02766592 = 1;
      _DAT_02766510 = 0;
      uRam0000000002766518 = 0;
      _DAT_02766520 = 0;
      uRam0000000002766528 = 0;
      _DAT_02766530 = 0;
      uRam0000000002766538 = 0;
      _DAT_02766540 = 0;
      uRam0000000002766548 = 0;
      _DAT_02766550 = 0;
      uRam0000000002766558 = 0;
      _DAT_02766560 = 0;
      uRam0000000002766568 = 0;
      _DAT_02766570 = 0;
      uRam0000000002766578 = 0;
      DAT_0276659b = 0;
      _DAT_02766593 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02766593 == '\0') {
    FUN_00bdb710();
    FUN_00e87980();
  }
  FUN_00bdb8a0();
  FUN_00bdbbd0();
  return;
}



