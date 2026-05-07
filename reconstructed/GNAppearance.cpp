// Reconstructed implementation of GNAppearance
// From MikeCore binary — reverse-engineered pseudocode

#include "GNAppearance.h"

// ============================================================
// @001ab9a0 — 752 bytes
// str: ""GNAppearance""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001ab9a0(void)

{
  int iVar1;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_02672598;
  unaff_RDI[2] = *(undefined8 *)(unaff_RSI + 0x10);
  *(undefined4 *)(unaff_RDI + 3) = 0;
  if (DAT_027fed30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e80f8 = FUN_00d4fe50();
      _DAT_026e80e0 = "GNAppearance";
      _DAT_026e80e8 = 0x38;
      _DAT_026e80f0 = FUN_001ab950;
      _DAT_026e8100 = 0;
      uRam00000000026e8108 = 0;
      _DAT_026e8110 = 0;
      uRam00000000026e8118 = 0;
      _DAT_026e8120 = 0;
      uRam00000000026e8128 = 0;
      _DAT_026e8130 = 0;
      uRam00000000026e8138 = 0;
      _DAT_026e8140 = 0;
      uRam00000000026e8148 = 0;
      _DAT_026e8150 = 0;
      uRam00000000026e8158 = 0;
      _DAT_026e8160 = 0;
      uRam00000000026e8168 = 0;
      _DAT_026e8170 = 0;
      uRam00000000026e8178 = 0;
      _DAT_026e8180 = 0;
      uRam00000000026e8188 = 0;
      _DAT_026e8190 = 0;
      _uRam00000000026e8198 = 0;
      _DAT_026e81a0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e819b == '\0') {
    FUN_001abd00();
    FUN_00e87980();
  }
  FUN_001abf30();
  FUN_001ac1b0();
  *(undefined4 *)(unaff_RDI + 6) = 0;
  if (DAT_027fed30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e80f8 = FUN_00d4fe50();
      _DAT_026e80e0 = "GNAppearance";
      _DAT_026e80e8 = 0x38;
      _DAT_026e80f0 = FUN_001ab950;
      _DAT_026e8100 = 0;
      uRam00000000026e8108 = 0;
      _DAT_026e8110 = 0;
      uRam00000000026e8118 = 0;
      _DAT_026e8120 = 0;
      uRam00000000026e8128 = 0;
      _DAT_026e8130 = 0;
      uRam00000000026e8138 = 0;
      _DAT_026e8140 = 0;
      uRam00000000026e8148 = 0;
      _DAT_026e8150 = 0;
      uRam00000000026e8158 = 0;
      _DAT_026e8160 = 0;
      uRam00000000026e8168 = 0;
      _DAT_026e8170 = 0;
      uRam00000000026e8178 = 0;
      _DAT_026e8180 = 0;
      uRam00000000026e8188 = 0;
      _DAT_026e8190 = 0;
      _uRam00000000026e8198 = 0;
      _DAT_026e81a0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e819b == '\0') {
    FUN_001ac430();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x34) = 0;
  if (DAT_027fed30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e80f8 = FUN_00d4fe50();
      _DAT_026e80e0 = "GNAppearance";
      _DAT_026e80e8 = 0x38;
      _DAT_026e80f0 = FUN_001ab950;
      _DAT_026e8100 = 0;
      uRam00000000026e8108 = 0;
      _DAT_026e8110 = 0;
      uRam00000000026e8118 = 0;
      _DAT_026e8120 = 0;
      uRam00000000026e8128 = 0;
      _DAT_026e8130 = 0;
      uRam00000000026e8138 = 0;
      _DAT_026e8140 = 0;
      uRam00000000026e8148 = 0;
      _DAT_026e8150 = 0;
      uRam00000000026e8158 = 0;
      _DAT_026e8160 = 0;
      uRam00000000026e8168 = 0;
      _DAT_026e8170 = 0;
      uRam00000000026e8178 = 0;
      _DAT_026e8180 = 0;
      uRam00000000026e8188 = 0;
      _DAT_026e8190 = 0;
      _uRam00000000026e8198 = 0;
      _DAT_026e81a0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e819b == '\0') {
    FUN_001ac5a0();
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @001abd00 — 522 bytes
// str: ""_state""
// str: ""GNAppearance""
// str: ""GNAppearanceState""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_001abd00(void)

{
  int iVar1;
  
  if (DAT_026e8228 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e8218 = 0x100000000;
      DAT_026e8220 = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e8260 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e8230 = "GNAppearanceState";
      _DAT_026e8238 = 2;
      DAT_026e823c = DAT_026e8220;
      _DAT_026e8240 = &DAT_026e8218;
      _DAT_026e8248 = &DAT_026e8200;
      _DAT_026e8250 = 0;
      uRam00000000026e8258 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_026e81f0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027fed30 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026e80f8 = FUN_00d4fe50();
          _DAT_026e80e0 = "GNAppearance";
          _DAT_026e80e8 = 0x38;
          _DAT_026e80f0 = FUN_001ab950;
          _DAT_026e8100 = 0;
          uRam00000000026e8108 = 0;
          _DAT_026e8110 = 0;
          uRam00000000026e8118 = 0;
          _DAT_026e8120 = 0;
          uRam00000000026e8128 = 0;
          _DAT_026e8130 = 0;
          uRam00000000026e8138 = 0;
          _DAT_026e8140 = 0;
          uRam00000000026e8148 = 0;
          _DAT_026e8150 = 0;
          uRam00000000026e8158 = 0;
          _DAT_026e8160 = 0;
          uRam00000000026e8168 = 0;
          _DAT_026e8170 = 0;
          uRam00000000026e8178 = 0;
          _DAT_026e8180 = 0;
          uRam00000000026e8188 = 0;
          _DAT_026e8190 = 0;
          uRam00000000026e8198 = 0;
          _DAT_026e81a0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_026e81b0 = "_state";
      _DAT_026e81b8 = &DAT_026e80e0;
      _DAT_026e81c0 = 0;
      _DAT_026e81c8 = 0x6501;
      _DAT_026e81d0 = "GNAppearanceState";
      _DAT_026e81d8 = &DAT_026e8230;
      _DAT_026e81e0 = 0;
      uRam00000000026e81e8 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_026e81b0;
}



