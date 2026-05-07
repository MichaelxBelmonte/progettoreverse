// Reconstructed implementation of GNSoundFileNFFWriter
// From MikeCore binary — reverse-engineered pseudocode

#include "GNSoundFileNFFWriter.h"

// ============================================================
// @007bf5f0 — 516 bytes
// str: ""GNSoundFileNFFWriter""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007bf5f0(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_007b7610();
  *unaff_RDI = &DAT_0254c848;
  *(undefined4 *)(unaff_RDI + 9) = 0;
  if (DAT_0272d868 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0272d7b8 = FUN_007b6e40();
      _DAT_0272d7a0 = "GNSoundFileNFFWriter";
      _DAT_0272d7a8 = 0x50;
      _DAT_0272d7b0 = FUN_007bf5a0;
      _DAT_0272d7c0 = 0;
      uRam000000000272d7c8 = 0;
      _DAT_0272d7d0 = 0;
      _DAT_0272d848 = 0;
      uRam000000000272d850 = 0;
      _DAT_0272d858 = 0;
      DAT_0272d85a = 1;
      _DAT_0272d7d8 = 0;
      uRam000000000272d7e0 = 0;
      _DAT_0272d7e8 = 0;
      uRam000000000272d7f0 = 0;
      _DAT_0272d7f8 = 0;
      uRam000000000272d800 = 0;
      _DAT_0272d808 = 0;
      uRam000000000272d810 = 0;
      _DAT_0272d818 = 0;
      uRam000000000272d820 = 0;
      _DAT_0272d828 = 0;
      uRam000000000272d830 = 0;
      _DAT_0272d838 = 0;
      uRam000000000272d840 = 0;
      DAT_0272d863 = 0;
      _DAT_0272d85b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0272d85b == '\0') {
    FUN_007bf870();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x4c) = 0;
  if (DAT_0272d868 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0272d7b8 = FUN_007b6e40();
      _DAT_0272d7a0 = "GNSoundFileNFFWriter";
      _DAT_0272d7a8 = 0x50;
      _DAT_0272d7b0 = FUN_007bf5a0;
      _DAT_0272d7c0 = 0;
      uRam000000000272d7c8 = 0;
      _DAT_0272d7d0 = 0;
      _DAT_0272d848 = 0;
      uRam000000000272d850 = 0;
      _DAT_0272d858 = 0;
      DAT_0272d85a = 1;
      _DAT_0272d7d8 = 0;
      uRam000000000272d7e0 = 0;
      _DAT_0272d7e8 = 0;
      uRam000000000272d7f0 = 0;
      _DAT_0272d7f8 = 0;
      uRam000000000272d800 = 0;
      _DAT_0272d808 = 0;
      uRam000000000272d810 = 0;
      _DAT_0272d818 = 0;
      uRam000000000272d820 = 0;
      _DAT_0272d828 = 0;
      uRam000000000272d830 = 0;
      _DAT_0272d838 = 0;
      uRam000000000272d840 = 0;
      DAT_0272d863 = 0;
      _DAT_0272d85b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0272d85b == '\0') {
    FUN_007bfa00();
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @007a6fd0 — 513 bytes
// str: ""GNSoundFileNFFWriter""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x007a70df) */
/* WARNING: Removing unreachable block (ram,0x007a70f1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007a6fd0(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_a8;
  longlong local_a0;
  
  if ((DAT_0272d868 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_0272d7b8 = FUN_007b6e40();
    _DAT_0272d7a0 = "GNSoundFileNFFWriter";
    _DAT_0272d7a8 = 0x50;
    _DAT_0272d7b0 = FUN_007bf5a0;
    _DAT_0272d7c0 = 0;
    uRam000000000272d7c8 = 0;
    _DAT_0272d7d0 = 0;
    _DAT_0272d848 = 0;
    uRam000000000272d850 = 0;
    _DAT_0272d858 = 0;
    DAT_0272d85a = 1;
    _DAT_0272d7d8 = 0;
    uRam000000000272d7e0 = 0;
    _DAT_0272d7e8 = 0;
    uRam000000000272d7f0 = 0;
    _DAT_0272d7f8 = 0;
    uRam000000000272d800 = 0;
    _DAT_0272d808 = 0;
    uRam000000000272d810 = 0;
    _DAT_0272d818 = 0;
    uRam000000000272d820 = 0;
    _DAT_0272d828 = 0;
    uRam000000000272d830 = 0;
    _DAT_0272d838 = 0;
    uRam000000000272d840 = 0;
    DAT_0272d863 = 0;
    _DAT_0272d85b = 0;
    ___cxa_guard_release();
  }
  if (DAT_0272d85b == '\0') {
    FUN_007b6bf0();
    FUN_00e87760();
    FUN_00d4ff40();
    FUN_00d50c00();
    FUN_007bf5f0();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
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



