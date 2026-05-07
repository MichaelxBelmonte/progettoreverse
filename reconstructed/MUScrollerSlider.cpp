// Reconstructed implementation of MUScrollerSlider
// From MikeCore binary — reverse-engineered pseudocode

#include "MUScrollerSlider.h"

// ============================================================
// @00814030 — 607 bytes
// str: ""MUScrollerSlider""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x008141aa) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00814030(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_218;
  
  if ((DAT_0273c468 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_0273c3b8 = FUN_001b37d0();
    _DAT_0273c3a0 = "MUScrollerSlider";
    _DAT_0273c3a8 = 0x1e0;
    _DAT_0273c3b0 = FUN_0085a0c0;
    _DAT_0273c3c0 = 0;
    uRam000000000273c3c8 = 0;
    _DAT_0273c3d0 = 0;
    _DAT_0273c448 = 0;
    uRam000000000273c450 = 0;
    _DAT_0273c458 = 0;
    DAT_0273c45a = 1;
    _DAT_0273c3d8 = 0;
    uRam000000000273c3e0 = 0;
    _DAT_0273c3e8 = 0;
    uRam000000000273c3f0 = 0;
    _DAT_0273c3f8 = 0;
    uRam000000000273c400 = 0;
    _DAT_0273c408 = 0;
    uRam000000000273c410 = 0;
    _DAT_0273c418 = 0;
    uRam000000000273c420 = 0;
    _DAT_0273c428 = 0;
    uRam000000000273c430 = 0;
    _DAT_0273c438 = 0;
    uRam000000000273c440 = 0;
    DAT_0273c463 = 0;
    _DAT_0273c45b = 0;
    ___cxa_guard_release();
  }
  if (DAT_0273c45b == '\0') {
    FUN_001e95f0();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_001b40a0();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_218 != 0) {
      FUN_00d50b20();
    }
    FUN_000993f0();
    FUN_000993f0();
  }
  return;
}



