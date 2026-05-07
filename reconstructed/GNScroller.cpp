// Reconstructed implementation of GNScroller
// From MikeCore binary — reverse-engineered pseudocode

#include "GNScroller.h"

// ============================================================
// @00187e40 — 598 bytes
// str: ""GNScroller""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00187fcf) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00187e40(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_240;
  
  if ((DAT_02735b70 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_026e9008 = FUN_001b37d0();
    _DAT_026e8ff0 = "GNScroller";
    _DAT_026e8ff8 = 0x1f8;
    _DAT_026e9000 = FUN_001b36e0;
    _DAT_026e9010 = 0;
    uRam00000000026e9018 = 0;
    _DAT_026e9020 = 0;
    uRam00000000026e9028 = 0;
    _DAT_026e9030 = 0;
    uRam00000000026e9038 = 0;
    _DAT_026e9040 = 0;
    uRam00000000026e9048 = 0;
    _DAT_026e9050 = 0;
    uRam00000000026e9058 = 0;
    _DAT_026e9060 = 0;
    uRam00000000026e9068 = 0;
    _DAT_026e9070 = 0;
    uRam00000000026e9078 = 0;
    _DAT_026e9080 = 0;
    uRam00000000026e9088 = 0;
    _DAT_026e9090 = 0;
    uRam00000000026e9098 = 0;
    _DAT_026e90a0 = 0;
    _uRam00000000026e90a8 = 0;
    _DAT_026e90b0 = 0;
    ___cxa_guard_release();
  }
  if (DAT_026e90ab == '\0') {
    FUN_001e95f0();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_001b3bf0();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_01d91730();
    FUN_00e87920(uVar2,0);
    if (local_240 != 0) {
      FUN_00d50b20();
    }
    FUN_000993f0();
    FUN_000993f0();
  }
  return;
}



