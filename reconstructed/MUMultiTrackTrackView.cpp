// Reconstructed implementation of MUMultiTrackTrackView
// From MikeCore binary — reverse-engineered pseudocode

#include "MUMultiTrackTrackView.h"

// ============================================================
// @0030bdf0 — 510 bytes
// str: ""MUMultiTrackTrackView""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0030bf09) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0030bdf0(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_28;
  
  if ((DAT_02700f70 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_027e8258 = FUN_0006d940();
    _DAT_027e8240 = "MUMultiTrackTrackView";
    _DAT_027e8248 = 0x140;
    _DAT_027e8250 = FUN_0030c2d0;
    _DAT_027e8260 = 0;
    uRam00000000027e8268 = 0;
    _DAT_027e8270 = 0;
    _DAT_027e82e8 = 0;
    uRam00000000027e82f0 = 0;
    _DAT_027e82f8 = 0;
    DAT_027e82fa = 1;
    _DAT_027e8278 = 0;
    uRam00000000027e8280 = 0;
    _DAT_027e8288 = 0;
    uRam00000000027e8290 = 0;
    _DAT_027e8298 = 0;
    uRam00000000027e82a0 = 0;
    _DAT_027e82a8 = 0;
    uRam00000000027e82b0 = 0;
    _DAT_027e82b8 = 0;
    uRam00000000027e82c0 = 0;
    _DAT_027e82c8 = 0;
    uRam00000000027e82d0 = 0;
    _DAT_027e82d8 = 0;
    uRam00000000027e82e0 = 0;
    DAT_027e8303 = 0;
    _DAT_027e82fb = 0;
    ___cxa_guard_release();
  }
  if (DAT_027e82fb == '\0') {
    FUN_000a31d0();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_000a32b0();
    FUN_0030c320();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_28 != 0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
    FUN_0006d770();
  }
  return;
}



