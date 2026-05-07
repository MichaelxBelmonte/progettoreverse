// Reconstructed implementation of GNIconsViewAssoc
// From MikeCore binary — reverse-engineered pseudocode

#include "GNIconsViewAssoc.h"

// ============================================================
// @00182050 — 683 bytes
// str: ""GNIconsViewAssoc""
// str: ""GNIconsViewDelegate""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x001821f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00182050(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  longlong local_80;
  
  if ((DAT_027f71b0 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_026ed2e8 = FUN_001ba850();
    _DAT_026ed2d0 = "GNIconsViewAssoc";
    _DAT_026ed2d8 = 0x58;
    _DAT_026ed2e0 = FUN_001cd1a0;
    _DAT_026ed2f0 = 0;
    uRam00000000026ed2f8 = 0;
    _DAT_026ed300 = 0;
    uRam00000000026ed308 = 0;
    _DAT_026ed310 = 0;
    uRam00000000026ed318 = 0;
    _DAT_026ed320 = 0;
    uRam00000000026ed328 = 0;
    _DAT_026ed330 = 0;
    uRam00000000026ed338 = 0;
    _DAT_026ed340 = 0;
    uRam00000000026ed348 = 0;
    _DAT_026ed350 = 0;
    uRam00000000026ed358 = 0;
    _DAT_026ed360 = 0;
    uRam00000000026ed368 = 0;
    _DAT_026ed370 = 0;
    uRam00000000026ed378 = 0;
    _DAT_026ed380 = 0;
    _uRam00000000026ed388 = 0;
    _DAT_026ed390 = 0;
    ___cxa_guard_release();
  }
  if (DAT_026ed38b == '\0') {
    FUN_001ba5f0();
    FUN_00e87760();
    FUN_00d4ff40();
    if (1 < DAT_02802630) {
      puVar2 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &DAT_02572358;
      (*DAT_02572370)();
    }
    FUN_00d50c00();
    FUN_001baad0();
    if ((DAT_027f6db0 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
      _DAT_026ed3a0 = "GNIconsViewDelegate";
      DAT_026ed3b0 = 0;
      _DAT_026ed3a8 = 0;
      ___cxa_guard_release();
    }
    FUN_00e87c40();
    FUN_001cd290();
    FUN_00d50c00();
    uVar3 = FUN_00e87770();
    FUN_00e87920(uVar3,0);
    if (local_80 != 0) {
      FUN_00d50b20();
    }
    FUN_001bb300();
    FUN_001bb300();
  }
  return;
}



