// Reconstructed implementation of MDToolbarPositionCtrl
// From MikeCore binary — reverse-engineered pseudocode

#include "MDToolbarPositionCtrl.h"

// ============================================================
// @005e89a0 — 1017 bytes
// str: ""bool""
// str: ""float""
// str: ""_volume""
// str: ""_amplitudeScaleFactor""
// str: ""_isMuted""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005e89a0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_02590538;
  uVar1 = *(undefined4 *)(unaff_RSI + 0x14);
  uVar2 = *(undefined4 *)(unaff_RSI + 0x18);
  uVar3 = *(undefined4 *)(unaff_RSI + 0x1c);
  uVar4 = *(undefined4 *)(unaff_RSI + 0x20);
  uVar5 = *(undefined4 *)(unaff_RSI + 0x24);
  uVar6 = *(undefined4 *)(unaff_RSI + 0x28);
  uVar7 = *(undefined4 *)(unaff_RSI + 0x2c);
  *(undefined4 *)(unaff_RDI + 2) = *(undefined4 *)(unaff_RSI + 0x10);
  *(undefined4 *)((longlong)unaff_RDI + 0x14) = uVar1;
  *(undefined4 *)(unaff_RDI + 3) = uVar2;
  *(undefined4 *)((longlong)unaff_RDI + 0x1c) = uVar3;
  *(undefined4 *)(unaff_RDI + 4) = uVar4;
  *(undefined4 *)((longlong)unaff_RDI + 0x24) = uVar5;
  *(undefined4 *)(unaff_RDI + 5) = uVar6;
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = uVar7;
  unaff_RDI[6] = *(undefined8 *)(unaff_RSI + 0x30);
  *unaff_RDI = &DAT_024ff098;
  *(undefined4 *)(unaff_RDI + 7) = 0;
  lVar9 = FUN_004fb760();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_005e8e20();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x3c) = 0;
  lVar9 = FUN_004fb760();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_005e8fa0();
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 8) = 0;
  lVar9 = FUN_004fb760();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0271f930 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0271f8f8 = FUN_004fb760();
        _DAT_0271f8f0 = "_isMuted";
        _DAT_0271f900 = 0;
        _DAT_0271f908 = 0x6200;
        _DAT_0271f910 = "bool";
        _DAT_0271f918 = 0;
        uRam000000000271f920 = 0;
        _DAT_0271f928 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x41) = 0;
  lVar9 = FUN_004fb760();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0271f978 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0271f940 = FUN_004fb760();
        _DAT_0271f938 = "_isSolo";
        _DAT_0271f948 = 0;
        _DAT_0271f950 = 0x6200;
        _DAT_0271f958 = "bool";
        _DAT_0271f960 = 0;
        uRam000000000271f968 = 0;
        _DAT_0271f970 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x44) = 0;
  lVar9 = FUN_004fb760();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0271f9c0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0271f988 = FUN_004fb760();
        _DAT_0271f980 = "_volume";
        _DAT_0271f990 = 0;
        _DAT_0271f998 = 0x6600;
        _DAT_0271f9a0 = "float";
        _DAT_0271f9a8 = 0;
        uRam000000000271f9b0 = 0;
        _DAT_0271f9b8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_005e9120();
  *(undefined4 *)(unaff_RDI + 10) = 0;
  lVar9 = FUN_004fb760();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0271fa50 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0271fa18 = FUN_004fb760();
        _DAT_0271fa10 = "_amplitudeScaleFactor";
        _DAT_0271fa20 = 0;
        _DAT_0271fa28 = 0x6600;
        _DAT_0271fa30 = "float";
        _DAT_0271fa38 = 0;
        uRam000000000271fa40 = 0;
        _DAT_0271fa48 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x54) = 0;
  lVar9 = FUN_004fb760();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0271fa98 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0271fa60 = FUN_004fb760();
        _DAT_0271fa58 = "_isTrackTitleEditable";
        _DAT_0271fa68 = 0;
        _DAT_0271fa70 = 0x6200;
        _DAT_0271fa78 = "bool";
        _DAT_0271fa80 = 0;
        uRam000000000271fa88 = 0;
        _DAT_0271fa90 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @003b2450 — 685 bytes
// str: ""onUpdatePlaybackController""
// str: ""handleTransportSetCursor""
// str: ""MDToolbarPositionCtrl""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003b2450(void)

{
  int iVar1;
  
  if (DAT_028081a0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02705710 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0271f418 = FUN_00015ff0();
          _DAT_0271f400 = "MDToolbarPositionCtrl";
          _DAT_0271f408 = 0xa8;
          _DAT_0271f410 = FUN_003b3920;
          _DAT_0271f420 = 0;
          uRam000000000271f428 = 0;
          _DAT_0271f430 = 0;
          uRam000000000271f438 = 0;
          _DAT_0271f440 = 0;
          uRam000000000271f448 = 0;
          _DAT_0271f450 = 0;
          uRam000000000271f458 = 0;
          _DAT_0271f460 = 0;
          uRam000000000271f468 = 0;
          _DAT_0271f470 = 0;
          uRam000000000271f478 = 0;
          _DAT_0271f480 = 0;
          uRam000000000271f488 = 0;
          _DAT_0271f490 = 0;
          uRam000000000271f498 = 0;
          _DAT_0271f4a0 = 0;
          uRam000000000271f4a8 = 0;
          _DAT_0271f4b0 = 0;
          uRam000000000271f4b8 = 0;
          _DAT_0271f4c0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02808160 = "handleTransportSetCursor";
      _DAT_02808168 = &DAT_0271f400;
      _DAT_02808170 = 0;
      _DAT_02808178 = &DAT_02705718;
      _DAT_02808180 = FUN_003b3970;
      _DAT_02808188 = FUN_003b34b0;
      _DAT_02808190 = 0;
      uRam0000000002808198 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028081e8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02705710 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0271f418 = FUN_00015ff0();
          _DAT_0271f400 = "MDToolbarPositionCtrl";
          _DAT_0271f408 = 0xa8;
          _DAT_0271f410 = FUN_003b3920;
          _DAT_0271f420 = 0;
          uRam000000000271f428 = 0;
          _DAT_0271f430 = 0;
          uRam000000000271f438 = 0;
          _DAT_0271f440 = 0;
          uRam000000000271f448 = 0;
          _DAT_0271f450 = 0;
          uRam000000000271f458 = 0;
          _DAT_0271f460 = 0;
          uRam000000000271f468 = 0;
          _DAT_0271f470 = 0;
          uRam000000000271f478 = 0;
          _DAT_0271f480 = 0;
          uRam000000000271f488 = 0;
          _DAT_0271f490 = 0;
          uRam000000000271f498 = 0;
          _DAT_0271f4a0 = 0;
          uRam000000000271f4a8 = 0;
          _DAT_0271f4b0 = 0;
          uRam000000000271f4b8 = 0;
          _DAT_0271f4c0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028081a8 = "onUpdatePlaybackController";
      _DAT_028081b0 = &DAT_0271f400;
      _DAT_028081b8 = 0;
      _DAT_028081c0 = &DAT_0270571c;
      _DAT_028081c8 = FUN_003b3a00;
      _DAT_028081d0 = FUN_003b2720;
      _DAT_028081d8 = 0;
      uRam00000000028081e0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @005e6ed0 — 596 bytes
// str: ""MDToolbarPositionCtrl""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005e6ed0(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_0005aa20();
  *unaff_RDI = &DAT_024f0ec0;
  FUN_005e71c0();
  FUN_005e74a0();
  FUN_005e7790();
  FUN_005e7a80();
  FUN_005e7d70();
  unaff_RDI[0x13] = 0;
  if (DAT_02705710 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0271f418 = FUN_00015ff0();
      _DAT_0271f400 = "MDToolbarPositionCtrl";
      _DAT_0271f408 = 0xa8;
      _DAT_0271f410 = FUN_003b3920;
      _DAT_0271f420 = 0;
      uRam000000000271f428 = 0;
      _DAT_0271f430 = 0;
      uRam000000000271f438 = 0;
      _DAT_0271f440 = 0;
      uRam000000000271f448 = 0;
      _DAT_0271f450 = 0;
      uRam000000000271f458 = 0;
      _DAT_0271f460 = 0;
      uRam000000000271f468 = 0;
      _DAT_0271f470 = 0;
      uRam000000000271f478 = 0;
      _DAT_0271f480 = 0;
      uRam000000000271f488 = 0;
      _DAT_0271f490 = 0;
      uRam000000000271f498 = 0;
      _DAT_0271f4a0 = 0;
      uRam000000000271f4a8 = 0;
      _DAT_0271f4b0 = 0;
      _uRam000000000271f4b8 = 0;
      _DAT_0271f4c0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0271f4bb == '\0') {
    FUN_005e8060();
    FUN_00e87980();
  }
  unaff_RDI[0x14] = 0;
  if (DAT_02705710 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0271f418 = FUN_00015ff0();
      _DAT_0271f400 = "MDToolbarPositionCtrl";
      _DAT_0271f408 = 0xa8;
      _DAT_0271f410 = FUN_003b3920;
      _DAT_0271f420 = 0;
      uRam000000000271f428 = 0;
      _DAT_0271f430 = 0;
      uRam000000000271f438 = 0;
      _DAT_0271f440 = 0;
      uRam000000000271f448 = 0;
      _DAT_0271f450 = 0;
      uRam000000000271f458 = 0;
      _DAT_0271f460 = 0;
      uRam000000000271f468 = 0;
      _DAT_0271f470 = 0;
      uRam000000000271f478 = 0;
      _DAT_0271f480 = 0;
      uRam000000000271f488 = 0;
      _DAT_0271f490 = 0;
      uRam000000000271f498 = 0;
      _DAT_0271f4a0 = 0;
      uRam000000000271f4a8 = 0;
      _DAT_0271f4b0 = 0;
      _uRam000000000271f4b8 = 0;
      _DAT_0271f4c0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0271f4bb == '\0') {
    FUN_005e81d0();
    FUN_00e87980();
  }
  return;
}



