// Reconstructed implementation of MUPitchDriftTool
// From MikeCore binary — reverse-engineered pseudocode

#include "MUPitchDriftTool.h"

// ============================================================
// @0080fc00 — 518 bytes
// str: ""MUPitchDriftTool""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0080fc00(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  
  if (DAT_027368d8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02736828 = FUN_0083a960();
      _DAT_02736810 = "MUPitchDriftTool";
      _DAT_02736818 = 0x38;
      _DAT_02736820 = FUN_0083a920;
      _DAT_02736830 = 0;
      uRam0000000002736838 = 0;
      _DAT_02736840 = 0;
      _DAT_027368b8 = 0;
      uRam00000000027368c0 = 0;
      _DAT_027368c8 = 0;
      DAT_027368ca = 1;
      _DAT_02736848 = 0;
      uRam0000000002736850 = 0;
      _DAT_02736858 = 0;
      uRam0000000002736860 = 0;
      _DAT_02736868 = 0;
      uRam0000000002736870 = 0;
      _DAT_02736878 = 0;
      uRam0000000002736880 = 0;
      _DAT_02736888 = 0;
      uRam0000000002736890 = 0;
      _DAT_02736898 = 0;
      uRam00000000027368a0 = 0;
      _DAT_027368a8 = 0;
      uRam00000000027368b0 = 0;
      DAT_027368d3 = 0;
      _DAT_027368cb = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027368cb == '\0') {
    FUN_0080ff30();
    FUN_00e87760();
    FUN_00274ea0();
    FUN_00d50c00();
    FUN_00818510();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_30 != 0) {
      FUN_00d50b20();
    }
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if (local_70 != 0) {
      FUN_00d50b20();
    }
    if (local_78 != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
  }
  return;
}



