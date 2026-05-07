// Reconstructed implementation of GNToolTipController
// From MikeCore binary — reverse-engineered pseudocode

#include "GNToolTipController.h"

// ============================================================
// @0018c900 — 514 bytes
// str: ""GNToolTipController""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0018ca2b) */
/* WARNING: Removing unreachable block (ram,0x0018ca39) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0018c900(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_b0;
  longlong local_a8;
  
  if ((DAT_026f5da0 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_027fd818 = FUN_00d4fe50();
    _DAT_027fd800 = "GNToolTipController";
    _DAT_027fd808 = 0x80;
    _DAT_027fd810 = FUN_00210510;
    _DAT_027fd820 = 0;
    uRam00000000027fd828 = 0;
    _DAT_027fd830 = 0;
    uRam00000000027fd838 = 0;
    _DAT_027fd840 = 0;
    uRam00000000027fd848 = 0;
    _DAT_027fd850 = 0;
    uRam00000000027fd858 = 0;
    _DAT_027fd860 = 0;
    uRam00000000027fd868 = 0;
    _DAT_027fd870 = 0;
    uRam00000000027fd878 = 0;
    _DAT_027fd880 = 0;
    uRam00000000027fd888 = 0;
    _DAT_027fd890 = 0;
    uRam00000000027fd898 = 0;
    _DAT_027fd8a0 = 0;
    uRam00000000027fd8a8 = 0;
    _DAT_027fd8b0 = 0;
    _uRam00000000027fd8b8 = 0;
    _DAT_027fd8c0 = 0;
    ___cxa_guard_release();
  }
  if (DAT_027fd8bb == '\0') {
    FUN_000064f0();
    FUN_00e87760();
    FUN_00d4ff40();
    FUN_00d50c00();
    FUN_00210580();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_a8 != 0) {
      FUN_00d50b20();
    }
    if (local_b0 != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
    FUN_00d4ffa0();
  }
  return;
}



