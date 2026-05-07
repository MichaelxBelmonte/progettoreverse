// Reconstructed implementation of MUPasteboardHandler
// From MikeCore binary — reverse-engineered pseudocode

#include "MUPasteboardHandler.h"

// ============================================================
// @00808f90 — 572 bytes
// str: ""MUPasteboardHandler""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x008090f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00808f90(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_80;
  longlong local_78;
  undefined8 *puStack_40;
  
  if ((DAT_02731020 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_02730f70 = FUN_00d4fe50();
    _DAT_02730f58 = "MUPasteboardHandler";
    _DAT_02730f60 = 0x40;
    _DAT_02730f68 = FUN_00820870;
    _DAT_02730f78 = 0;
    uRam0000000002730f80 = 0;
    _DAT_02730f88 = 0;
    uRam0000000002730f90 = 0;
    _DAT_02730f98 = 0;
    uRam0000000002730fa0 = 0;
    _DAT_02730fa8 = 0;
    uRam0000000002730fb0 = 0;
    _DAT_02730fb8 = 0;
    uRam0000000002730fc0 = 0;
    _DAT_02730fc8 = 0;
    uRam0000000002730fd0 = 0;
    _DAT_02730fd8 = 0;
    uRam0000000002730fe0 = 0;
    _DAT_02730fe8 = 0;
    uRam0000000002730ff0 = 0;
    _DAT_02730ff8 = 0;
    uRam0000000002731000 = 0;
    _DAT_02731008 = 0;
    _uRam0000000002731010 = 0;
    _DAT_02731018 = 0;
    ___cxa_guard_release();
  }
  if (DAT_02731013 == '\0') {
    FUN_000064f0();
    FUN_00e87760();
    FUN_00d4ff40();
    puStack_40 = (undefined8 *)0x0;
    if (1 < DAT_02802630) {
      puStack_40 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puStack_40 = &DAT_02572358;
      (*DAT_02572370)();
    }
    FUN_00d50c00();
    FUN_00820940();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    FUN_01c928c0();
    if (local_78 != 0) {
      FUN_00d50b20();
    }
    if (local_80 != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
    if (puStack_40 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
  }
  return;
}



