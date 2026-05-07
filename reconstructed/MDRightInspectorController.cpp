// Reconstructed implementation of MDRightInspectorController
// From MikeCore binary — reverse-engineered pseudocode

#include "MDRightInspectorController.h"

// ============================================================
// @000ee1a0 — 519 bytes
// str: ""MDRightInspectorController""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x000ee2b6) */
/* WARNING: Removing unreachable block (ram,0x000ee2a8) */
/* WARNING: Removing unreachable block (ram,0x000ee2c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ee1a0(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  
  if ((DAT_026df2a8 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_026df1f8 = FUN_00015ff0();
    _DAT_026df1e0 = "MDRightInspectorController";
    _DAT_026df1e8 = 0x88;
    _DAT_026df1f0 = FUN_000f0460;
    _DAT_026df200 = 0;
    uRam00000000026df208 = 0;
    _DAT_026df210 = 0;
    _DAT_026df288 = 0;
    uRam00000000026df290 = 0;
    _DAT_026df298 = 0;
    DAT_026df29a = 1;
    _DAT_026df218 = 0;
    uRam00000000026df220 = 0;
    _DAT_026df228 = 0;
    uRam00000000026df230 = 0;
    _DAT_026df238 = 0;
    uRam00000000026df240 = 0;
    _DAT_026df248 = 0;
    uRam00000000026df250 = 0;
    _DAT_026df258 = 0;
    uRam00000000026df260 = 0;
    _DAT_026df268 = 0;
    uRam00000000026df270 = 0;
    _DAT_026df278 = 0;
    uRam00000000026df280 = 0;
    DAT_026df2a3 = 0;
    _DAT_026df29b = 0;
    ___cxa_guard_release();
  }
  if (DAT_026df29b == '\0') {
    FUN_0005a900();
    FUN_00e87760();
    FUN_000161a0();
    FUN_00d50c00();
    FUN_000f04b0();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_0017a660();
    FUN_00e87920(uVar2,0);
    if (local_a8 != 0) {
      FUN_00d50b20();
    }
    if (local_b0 != 0) {
      FUN_00d50b20();
    }
    if (local_b8 != 0) {
      FUN_00d50b20();
    }
    FUN_00015ea0();
    FUN_00015ea0();
  }
  return;
}



