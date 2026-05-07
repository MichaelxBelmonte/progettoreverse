// Reconstructed implementation of MUEventBasedQuarterAssignmentAnalyzer
// From MikeCore binary — reverse-engineered pseudocode

#include "MUEventBasedQuarterAssignmentAnalyzer.h"

// ============================================================
// @010d7590 — 512 bytes
// str: ""MUEventBasedQuarterAssignmentAnalyzer""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010d7590(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_c0;
  longlong local_b8;
  longlong local_30;
  longlong local_28;
  
  if (DAT_0279e0c0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0279e010 = FUN_01149ab0();
      _DAT_0279dff8 = "MUEventBasedQuarterAssignmentAnalyzer";
      _DAT_0279e000 = 0x90;
      _DAT_0279e008 = FUN_01149a80;
      _DAT_0279e018 = 0;
      uRam000000000279e020 = 0;
      _DAT_0279e028 = 0;
      _DAT_0279e0a0 = 0;
      uRam000000000279e0a8 = 0;
      _DAT_0279e0b0 = 0;
      DAT_0279e0b2 = 1;
      _DAT_0279e030 = 0;
      uRam000000000279e038 = 0;
      _DAT_0279e040 = 0;
      uRam000000000279e048 = 0;
      _DAT_0279e050 = 0;
      uRam000000000279e058 = 0;
      _DAT_0279e060 = 0;
      uRam000000000279e068 = 0;
      _DAT_0279e070 = 0;
      uRam000000000279e078 = 0;
      _DAT_0279e080 = 0;
      uRam000000000279e088 = 0;
      _DAT_0279e090 = 0;
      uRam000000000279e098 = 0;
      DAT_0279e0bb = 0;
      _DAT_0279e0b3 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0279e0b3 == '\0') {
    FUN_011499b0();
    FUN_00e87760();
    FUN_0114a3f0();
    FUN_00d50c00();
    FUN_0114a530();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    FUN_01231f60();
    if (local_28 != 0) {
      FUN_00d50b20();
    }
    if (local_30 != 0) {
      FUN_00d50b20();
    }
    FUN_01149ee0();
    if (local_b8 != 0) {
      FUN_00d50b20();
    }
    if (local_c0 != 0) {
      FUN_00d50b20();
    }
    FUN_01149ee0();
  }
  return;
}



