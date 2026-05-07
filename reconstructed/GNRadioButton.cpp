// Reconstructed implementation of GNRadioButton
// From MikeCore binary — reverse-engineered pseudocode

#include "GNRadioButton.h"

// ============================================================
// @01e77210 — 616 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01e77447) */
/* WARNING: Removing unreachable block (ram,0x01e77439) */
/* WARNING: Removing unreachable block (ram,0x01e77455) */

void FUN_01e77210(void)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 local_2c0;
  undefined8 local_2b0;
  undefined8 local_2a0;
  
  lVar1 = FUN_01dbfa10();
  if (*(char *)(lVar1 + 0xbb) == '\0') {
    FUN_001871b0();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_001e7990();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_2a0 != 0) {
      FUN_00d50b20();
    }
    if (local_2b0 != 0) {
      FUN_00d50b20();
    }
    if (local_2c0 != 0) {
      FUN_00d50b20();
    }
    FUN_000fba40();
    FUN_000fba40();
  }
  return;
}




// ============================================================
// @01e769d0 — 580 bytes
// str: ""GNRadioButton""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e769d0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_027f9e08 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027f9d58 = FUN_000f5df0();
      _DAT_027f9d40 = "GNRadioButton";
      _DAT_027f9d48 = 0x220;
      _DAT_027f9d50 = FUN_01e8ba80;
      _DAT_027f9d60 = 0;
      uRam00000000027f9d68 = 0;
      _DAT_027f9d70 = 0;
      uRam00000000027f9d78 = 0;
      _DAT_027f9d80 = 0;
      uRam00000000027f9d88 = 0;
      _DAT_027f9d90 = 0;
      uRam00000000027f9d98 = 0;
      _DAT_027f9da0 = 0;
      uRam00000000027f9da8 = 0;
      _DAT_027f9db0 = 0;
      uRam00000000027f9db8 = 0;
      _DAT_027f9dc0 = 0;
      uRam00000000027f9dc8 = 0;
      _DAT_027f9dd0 = 0;
      uRam00000000027f9dd8 = 0;
      _DAT_027f9de0 = 0;
      uRam00000000027f9de8 = 0;
      _DAT_027f9df0 = 0;
      _uRam00000000027f9df8 = 0;
      _DAT_027f9e00 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027f9dfb == '\0') {
    FUN_000f5b20();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_000fabd0();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    FUN_000fba40();
    FUN_000fba40();
  }
  return;
}



