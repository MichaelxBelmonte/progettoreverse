// Reconstructed implementation of MDToolbarGridCtrl
// From MikeCore binary — reverse-engineered pseudocode

#include "MDToolbarGridCtrl.h"

// ============================================================
// @0006ec00 — 1367 bytes
// str: ""handleValueChanged""
// str: ""onSelectedDocumentDidChange""
// str: ""onTimeGridSetterChanged""
// str: ""onLocaleUserLocaleChanged""
// str: ""MDToolbarGridCtrl""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006ec00(void)

{
  int iVar1;
  
  if (DAT_02803178 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d7e70 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d7dc0 = FUN_00015ff0();
          _DAT_026d7da8 = "MDToolbarGridCtrl";
          _DAT_026d7db0 = 0x98;
          _DAT_026d7db8 = FUN_00071a80;
          _DAT_026d7dc8 = 0;
          uRam00000000026d7dd0 = 0;
          _DAT_026d7dd8 = 0;
          uRam00000000026d7de0 = 0;
          _DAT_026d7de8 = 0;
          uRam00000000026d7df0 = 0;
          _DAT_026d7df8 = 0;
          uRam00000000026d7e00 = 0;
          _DAT_026d7e08 = 0;
          uRam00000000026d7e10 = 0;
          _DAT_026d7e18 = 0;
          uRam00000000026d7e20 = 0;
          _DAT_026d7e28 = 0;
          uRam00000000026d7e30 = 0;
          _DAT_026d7e38 = 0;
          uRam00000000026d7e40 = 0;
          _DAT_026d7e48 = 0;
          uRam00000000026d7e50 = 0;
          _DAT_026d7e58 = 0;
          uRam00000000026d7e60 = 0;
          _DAT_026d7e68 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02803138 = "handleValueChanged";
      _DAT_02803140 = &DAT_026d7da8;
      _DAT_02803148 = 0;
      _DAT_02803150 = &DAT_026d7e78;
      _DAT_02803158 = FUN_00071ad0;
      _DAT_02803160 = FUN_00070b90;
      _DAT_02803168 = 0;
      uRam0000000002803170 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028031c0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d7e70 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d7dc0 = FUN_00015ff0();
          _DAT_026d7da8 = "MDToolbarGridCtrl";
          _DAT_026d7db0 = 0x98;
          _DAT_026d7db8 = FUN_00071a80;
          _DAT_026d7dc8 = 0;
          uRam00000000026d7dd0 = 0;
          _DAT_026d7dd8 = 0;
          uRam00000000026d7de0 = 0;
          _DAT_026d7de8 = 0;
          uRam00000000026d7df0 = 0;
          _DAT_026d7df8 = 0;
          uRam00000000026d7e00 = 0;
          _DAT_026d7e08 = 0;
          uRam00000000026d7e10 = 0;
          _DAT_026d7e18 = 0;
          uRam00000000026d7e20 = 0;
          _DAT_026d7e28 = 0;
          uRam00000000026d7e30 = 0;
          _DAT_026d7e38 = 0;
          uRam00000000026d7e40 = 0;
          _DAT_026d7e48 = 0;
          uRam00000000026d7e50 = 0;
          _DAT_026d7e58 = 0;
          uRam00000000026d7e60 = 0;
          _DAT_026d7e68 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02803180 = "onSelectedDocumentDidChange";
      _DAT_02803188 = &DAT_026d7da8;
      _DAT_02803190 = 0;
      _DAT_02803198 = &DAT_026d7e7c;
      _DAT_028031a0 = FUN_00071b60;
      _DAT_028031a8 = FUN_0006f3d0;
      _DAT_028031b0 = 0;
      uRam00000000028031b8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02803208 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d7e70 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d7dc0 = FUN_00015ff0();
          _DAT_026d7da8 = "MDToolbarGridCtrl";
          _DAT_026d7db0 = 0x98;
          _DAT_026d7db8 = FUN_00071a80;
          _DAT_026d7dc8 = 0;
          uRam00000000026d7dd0 = 0;
          _DAT_026d7dd8 = 0;
          uRam00000000026d7de0 = 0;
          _DAT_026d7de8 = 0;
          uRam00000000026d7df0 = 0;
          _DAT_026d7df8 = 0;
          uRam00000000026d7e00 = 0;
          _DAT_026d7e08 = 0;
          uRam00000000026d7e10 = 0;
          _DAT_026d7e18 = 0;
          uRam00000000026d7e20 = 0;
          _DAT_026d7e28 = 0;
          uRam00000000026d7e30 = 0;
          _DAT_026d7e38 = 0;
          uRam00000000026d7e40 = 0;
          _DAT_026d7e48 = 0;
          uRam00000000026d7e50 = 0;
          _DAT_026d7e58 = 0;
          uRam00000000026d7e60 = 0;
          _DAT_026d7e68 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028031c8 = "onTimeGridSetterChanged";
      _DAT_028031d0 = &DAT_026d7da8;
      _DAT_028031d8 = 0;
      _DAT_028031e0 = &DAT_026d7e7c;
      _DAT_028031e8 = FUN_00071b60;
      _DAT_028031f0 = FUN_00070990;
      _DAT_028031f8 = 0;
      uRam0000000002803200 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02803250 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d7e70 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d7dc0 = FUN_00015ff0();
          _DAT_026d7da8 = "MDToolbarGridCtrl";
          _DAT_026d7db0 = 0x98;
          _DAT_026d7db8 = FUN_00071a80;
          _DAT_026d7dc8 = 0;
          uRam00000000026d7dd0 = 0;
          _DAT_026d7dd8 = 0;
          uRam00000000026d7de0 = 0;
          _DAT_026d7de8 = 0;
          uRam00000000026d7df0 = 0;
          _DAT_026d7df8 = 0;
          uRam00000000026d7e00 = 0;
          _DAT_026d7e08 = 0;
          uRam00000000026d7e10 = 0;
          _DAT_026d7e18 = 0;
          uRam00000000026d7e20 = 0;
          _DAT_026d7e28 = 0;
          uRam00000000026d7e30 = 0;
          _DAT_026d7e38 = 0;
          uRam00000000026d7e40 = 0;
          _DAT_026d7e48 = 0;
          uRam00000000026d7e50 = 0;
          _DAT_026d7e58 = 0;
          uRam00000000026d7e60 = 0;
          _DAT_026d7e68 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02803210 = "onLocaleUserLocaleChanged";
      _DAT_02803218 = &DAT_026d7da8;
      _DAT_02803220 = 0;
      _DAT_02803228 = &DAT_026d7e7c;
      _DAT_02803230 = FUN_00071b60;
      _DAT_02803238 = FUN_0006f9e0;
      _DAT_02803240 = 0;
      uRam0000000002803248 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



