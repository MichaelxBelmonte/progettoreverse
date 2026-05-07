// Reconstructed implementation of GNSoundFileCache
// From MikeCore binary — reverse-engineered pseudocode

#include "GNSoundFileCache.h"

// ============================================================
// @00b8e6a0 — 568 bytes
// str: ""GNSoundFileCache""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b8e6a0(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_0254a198;
  FUN_00b8e920();
  FUN_00b8ec40();
  *(undefined4 *)(unaff_RDI + 4) = 0;
  if (DAT_027643a8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027642f8 = FUN_00d4fe50();
      _DAT_027642e0 = "GNSoundFileCache";
      _DAT_027642e8 = 0x28;
      _DAT_027642f0 = FUN_00b8e650;
      _DAT_02764300 = 0;
      uRam0000000002764308 = 0;
      _DAT_02764310 = 0;
      _DAT_02764388 = 0;
      uRam0000000002764390 = 0;
      _DAT_02764398 = 0;
      DAT_0276439a = 3;
      _DAT_02764318 = 0;
      uRam0000000002764320 = 0;
      _DAT_02764328 = 0;
      uRam0000000002764330 = 0;
      _DAT_02764338 = 0;
      uRam0000000002764340 = 0;
      _DAT_02764348 = 0;
      uRam0000000002764350 = 0;
      _DAT_02764358 = 0;
      uRam0000000002764360 = 0;
      _DAT_02764368 = 0;
      uRam0000000002764370 = 0;
      _DAT_02764378 = 0;
      uRam0000000002764380 = 0;
      DAT_027643a3 = 0;
      _DAT_0276439b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0276439b == '\0') {
    FUN_00b8ef00();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x24) = 0;
  if (DAT_027643a8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027642f8 = FUN_00d4fe50();
      _DAT_027642e0 = "GNSoundFileCache";
      _DAT_027642e8 = 0x28;
      _DAT_027642f0 = FUN_00b8e650;
      _DAT_02764300 = 0;
      uRam0000000002764308 = 0;
      _DAT_02764310 = 0;
      _DAT_02764388 = 0;
      uRam0000000002764390 = 0;
      _DAT_02764398 = 0;
      DAT_0276439a = 3;
      _DAT_02764318 = 0;
      uRam0000000002764320 = 0;
      _DAT_02764328 = 0;
      uRam0000000002764330 = 0;
      _DAT_02764338 = 0;
      uRam0000000002764340 = 0;
      _DAT_02764348 = 0;
      uRam0000000002764350 = 0;
      _DAT_02764358 = 0;
      uRam0000000002764360 = 0;
      _DAT_02764368 = 0;
      uRam0000000002764370 = 0;
      _DAT_02764378 = 0;
      uRam0000000002764380 = 0;
      DAT_027643a3 = 0;
      _DAT_0276439b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0276439b == '\0') {
    FUN_00b8f090();
    FUN_00e87980();
  }
  return;
}



