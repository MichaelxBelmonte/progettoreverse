// Reconstructed implementation of MUMultiTrackTracksView
// From MikeCore binary — reverse-engineered pseudocode

#include "MUMultiTrackTracksView.h"

// ============================================================
// @0030e7f0 — 622 bytes
// str: ""MUMultiTrackTracksView""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0030e95d) */
/* WARNING: Removing unreachable block (ram,0x0030e96b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0030e7f0(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  undefined8 *local_40;
  
  if ((DAT_02701300 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_027e80c8 = FUN_0006d940();
    _DAT_027e80b0 = "MUMultiTrackTracksView";
    _DAT_027e80b8 = 0x158;
    _DAT_027e80c0 = FUN_002e0580;
    _DAT_027e80d0 = 0;
    uRam00000000027e80d8 = 0;
    _DAT_027e80e0 = 0;
    _DAT_027e8158 = 0;
    uRam00000000027e8160 = 0;
    _DAT_027e8168 = 0;
    DAT_027e816a = 1;
    _DAT_027e80e8 = 0;
    uRam00000000027e80f0 = 0;
    _DAT_027e80f8 = 0;
    uRam00000000027e8100 = 0;
    _DAT_027e8108 = 0;
    uRam00000000027e8110 = 0;
    _DAT_027e8118 = 0;
    uRam00000000027e8120 = 0;
    _DAT_027e8128 = 0;
    uRam00000000027e8130 = 0;
    _DAT_027e8138 = 0;
    uRam00000000027e8140 = 0;
    _DAT_027e8148 = 0;
    uRam00000000027e8150 = 0;
    DAT_027e8173 = 0;
    _DAT_027e816b = 0;
    ___cxa_guard_release();
  }
  if (DAT_027e816b == '\0') {
    FUN_000a31d0();
    FUN_00e87760();
    FUN_0006daf0();
    local_40 = (undefined8 *)0x0;
    if (1 < DAT_02802630) {
      local_40 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_40 = &DAT_02572358;
      (*DAT_02572370)();
    }
    FUN_00d50c00();
    FUN_0030eba0();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_01bcae00();
    FUN_00e87920(uVar2,0);
    FUN_01bcadf0();
    if (local_188 != 0) {
      FUN_00d50b20();
    }
    if (local_190 != 0) {
      FUN_00d50b20();
    }
    if (local_198 != 0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
    if (local_40 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
  }
  return;
}



