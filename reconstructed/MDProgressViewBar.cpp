// Reconstructed implementation of MDProgressViewBar
// From MikeCore binary — reverse-engineered pseudocode

#include "MDProgressViewBar.h"

// ============================================================
// @00170e40 — 602 bytes
// str: ""MDProgressViewBar""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00170fb5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00170e40(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_200;
  
  if ((DAT_026e42d0 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_026e4220 = FUN_001737c0();
    _DAT_026e4208 = "MDProgressViewBar";
    _DAT_026e4210 = 0x1d8;
    _DAT_026e4218 = FUN_001736f0;
    _DAT_026e4228 = 0;
    uRam00000000026e4230 = 0;
    _DAT_026e4238 = 0;
    _DAT_026e42b0 = 0;
    uRam00000000026e42b8 = 0;
    _DAT_026e42c0 = 0;
    DAT_026e42c2 = 1;
    _DAT_026e4240 = 0;
    uRam00000000026e4248 = 0;
    _DAT_026e4250 = 0;
    uRam00000000026e4258 = 0;
    _DAT_026e4260 = 0;
    uRam00000000026e4268 = 0;
    _DAT_026e4270 = 0;
    uRam00000000026e4278 = 0;
    _DAT_026e4280 = 0;
    uRam00000000026e4288 = 0;
    _DAT_026e4290 = 0;
    uRam00000000026e4298 = 0;
    _DAT_026e42a0 = 0;
    uRam00000000026e42a8 = 0;
    DAT_026e42cb = 0;
    _DAT_026e42c3 = 0;
    ___cxa_guard_release();
  }
  if (DAT_026e42c3 == '\0') {
    FUN_00173550();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_00173a30();
    FUN_00174850();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_200 != 0) {
      FUN_00d50b20();
    }
    FUN_000993f0();
    FUN_000993f0();
  }
  return;
}



