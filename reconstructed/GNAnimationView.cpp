// Reconstructed implementation of GNAnimationView
// From MikeCore binary — reverse-engineered pseudocode

#include "GNAnimationView.h"

// ============================================================
// @0017b500 — 578 bytes
// str: ""GNAnimationView""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0017b660) */
/* WARNING: Removing unreachable block (ram,0x0017b652) */
/* WARNING: Removing unreachable block (ram,0x0017b66e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0017b500(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong *local_218;
  longlong local_210;
  longlong local_200;
  
  if ((DAT_026e49f8 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_026e4948 = FUN_0006d940();
    _DAT_026e4930 = "GNAnimationView";
    _DAT_026e4938 = 0x198;
    _DAT_026e4940 = FUN_0018ce70;
    _DAT_026e4950 = 0;
    uRam00000000026e4958 = 0;
    _DAT_026e4960 = 0;
    uRam00000000026e4968 = 0;
    _DAT_026e4970 = 0;
    uRam00000000026e4978 = 0;
    _DAT_026e4980 = 0;
    uRam00000000026e4988 = 0;
    _DAT_026e4990 = 0;
    uRam00000000026e4998 = 0;
    _DAT_026e49a0 = 0;
    uRam00000000026e49a8 = 0;
    _DAT_026e49b0 = 0;
    uRam00000000026e49b8 = 0;
    _DAT_026e49c0 = 0;
    uRam00000000026e49c8 = 0;
    _DAT_026e49d0 = 0;
    uRam00000000026e49d8 = 0;
    _DAT_026e49e0 = 0;
    _uRam00000000026e49e8 = 0;
    _DAT_026e49f0 = 0;
    ___cxa_guard_release();
  }
  if (DAT_026e49eb == '\0') {
    FUN_000a31d0();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_0018cef0();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_200 != 0) {
      FUN_00d50b20();
    }
    if (local_210 != 0) {
      FUN_00d50b20();
    }
    if (local_218 != (longlong *)0x0) {
      (**(code **)(*local_218 + 0x10))();
      FUN_00d50b20();
    }
    FUN_0006d770();
    FUN_0006d770();
  }
  return;
}



