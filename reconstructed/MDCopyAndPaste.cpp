// Reconstructed implementation of MDCopyAndPaste
// From MikeCore binary — reverse-engineered pseudocode

#include "MDCopyAndPaste.h"

// ============================================================
// @00561840 — 607 bytes
// str: ""MDCopyAndPaste""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x005619ab) */
/* WARNING: Removing unreachable block (ram,0x0056199d) */
/* WARNING: Removing unreachable block (ram,0x005619b9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00561840(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  
  if ((DAT_02712450 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_026e13e0 = FUN_00d4fe50();
    _DAT_026e13c8 = "MDCopyAndPaste";
    _DAT_026e13d0 = 0x50;
    _DAT_026e13d8 = FUN_00115230;
    _DAT_026e13e8 = 0;
    uRam00000000026e13f0 = 0;
    _DAT_026e13f8 = 0;
    _DAT_026e1470 = 0;
    uRam00000000026e1478 = 0;
    _DAT_026e1480 = 0;
    DAT_026e1482 = 3;
    _DAT_026e1400 = 0;
    uRam00000000026e1408 = 0;
    _DAT_026e1410 = 0;
    uRam00000000026e1418 = 0;
    _DAT_026e1420 = 0;
    uRam00000000026e1428 = 0;
    _DAT_026e1430 = 0;
    uRam00000000026e1438 = 0;
    _DAT_026e1440 = 0;
    uRam00000000026e1448 = 0;
    _DAT_026e1450 = 0;
    uRam00000000026e1458 = 0;
    _DAT_026e1460 = 0;
    uRam00000000026e1468 = 0;
    DAT_026e148b = 0;
    _DAT_026e1483 = 0;
    ___cxa_guard_release();
  }
  if (DAT_026e1483 == '\0') {
    FUN_000064f0();
    FUN_00e87760();
    FUN_00d4ff40();
    FUN_00d50c00();
    FUN_005893c0();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_98 != 0) {
      FUN_00d50b20();
    }
    if (local_a0 != 0) {
      FUN_00d50b20();
    }
    if (local_a8 != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
    FUN_00d4ffa0();
  }
  return;
}




// ============================================================
// @00561de0 — 570 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00561fdb) */
/* WARNING: Removing unreachable block (ram,0x00561fbf) */
/* WARNING: Removing unreachable block (ram,0x00561ff7) */

void FUN_00561de0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 local_270;
  undefined8 local_258;
  undefined8 local_248;
  
  lVar1 = FUN_0033e1e0();
  if (*(char *)(lVar1 + 0xbb) == '\0') {
    FUN_0058d210();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_0058dbc0();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_248 != 0) {
      FUN_00d50b20();
    }
    if (local_258 != 0) {
      FUN_00d50b20();
    }
    if (local_270 != 0) {
      FUN_00d50b20();
    }
    FUN_000993f0();
    FUN_000993f0();
  }
  return;
}



