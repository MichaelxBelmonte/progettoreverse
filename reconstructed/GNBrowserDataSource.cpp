// Reconstructed implementation of GNBrowserDataSource
// From MikeCore binary — reverse-engineered pseudocode

#include "GNBrowserDataSource.h"

// ============================================================
// @008406f0 — 929 bytes
// str: ""GNBrowserDataSource""
// str: ""MUScaleBrowserCtrl""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008406f0(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_0005aa20();
  unaff_RDI[0xe] = &DAT_02675300;
  if (DAT_026eb178 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026eb160 = "GNBrowserDataSource";
      DAT_026eb170 = 0;
      _DAT_026eb168 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_02642730;
  unaff_RDI[0xe] = &DAT_02642d28;
  FUN_00840b10();
  FUN_00840e00();
  FUN_00841080();
  *(undefined1 *)(unaff_RDI + 0x12) = 0;
  if (DAT_02737718 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02737668 = FUN_00015ff0();
      _DAT_02737650 = "MUScaleBrowserCtrl";
      _DAT_02737658 = 0xa0;
      _DAT_02737660 = FUN_00840690;
      _DAT_02737670 = 0;
      uRam0000000002737678 = 0;
      _DAT_02737680 = 0;
      uRam0000000002737688 = 0;
      _DAT_02737690 = 0;
      uRam0000000002737698 = 0;
      _DAT_027376a0 = 0;
      uRam00000000027376a8 = 0;
      _DAT_027376b0 = 0;
      uRam00000000027376b8 = 0;
      _DAT_027376c0 = 0;
      uRam00000000027376c8 = 0;
      _DAT_027376d0 = 0;
      uRam00000000027376d8 = 0;
      _DAT_027376e0 = 0;
      uRam00000000027376e8 = 0;
      _DAT_027376f0 = 0;
      uRam00000000027376f8 = 0;
      _DAT_02737700 = 0;
      _uRam0000000002737708 = 0;
      _DAT_02737710 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0273770b == '\0') {
    FUN_00841300();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x91) = 0;
  if (DAT_02737718 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02737668 = FUN_00015ff0();
      _DAT_02737650 = "MUScaleBrowserCtrl";
      _DAT_02737658 = 0xa0;
      _DAT_02737660 = FUN_00840690;
      _DAT_02737670 = 0;
      uRam0000000002737678 = 0;
      _DAT_02737680 = 0;
      uRam0000000002737688 = 0;
      _DAT_02737690 = 0;
      uRam0000000002737698 = 0;
      _DAT_027376a0 = 0;
      uRam00000000027376a8 = 0;
      _DAT_027376b0 = 0;
      uRam00000000027376b8 = 0;
      _DAT_027376c0 = 0;
      uRam00000000027376c8 = 0;
      _DAT_027376d0 = 0;
      uRam00000000027376d8 = 0;
      _DAT_027376e0 = 0;
      uRam00000000027376e8 = 0;
      _DAT_027376f0 = 0;
      uRam00000000027376f8 = 0;
      _DAT_02737700 = 0;
      _uRam0000000002737708 = 0;
      _DAT_02737710 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0273770b == '\0') {
    FUN_00841470();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x92) = 0;
  if (DAT_02737718 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02737668 = FUN_00015ff0();
      _DAT_02737650 = "MUScaleBrowserCtrl";
      _DAT_02737658 = 0xa0;
      _DAT_02737660 = FUN_00840690;
      _DAT_02737670 = 0;
      uRam0000000002737678 = 0;
      _DAT_02737680 = 0;
      uRam0000000002737688 = 0;
      _DAT_02737690 = 0;
      uRam0000000002737698 = 0;
      _DAT_027376a0 = 0;
      uRam00000000027376a8 = 0;
      _DAT_027376b0 = 0;
      uRam00000000027376b8 = 0;
      _DAT_027376c0 = 0;
      uRam00000000027376c8 = 0;
      _DAT_027376d0 = 0;
      uRam00000000027376d8 = 0;
      _DAT_027376e0 = 0;
      uRam00000000027376e8 = 0;
      _DAT_027376f0 = 0;
      uRam00000000027376f8 = 0;
      _DAT_02737700 = 0;
      _uRam0000000002737708 = 0;
      _DAT_02737710 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0273770b == '\0') {
    FUN_008415e0();
    FUN_00e87980();
  }
  FUN_00841750();
  return;
}




// ============================================================
// @01e737d0 — 539 bytes
// str: ""GNBrowserDataSource""
// str: ""GNBrowserFileSystemDataSource""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01e738e3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e737d0(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_28;
  
  if ((DAT_027f5dc0 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_027eee18 = FUN_00d4fe50();
    _DAT_027eee00 = "GNBrowserFileSystemDataSource";
    _DAT_027eee08 = 0x20;
    _DAT_027eee10 = FUN_01cede90;
    _DAT_027eee20 = 0;
    uRam00000000027eee28 = 0;
    _DAT_027eee30 = 0;
    uRam00000000027eee38 = 0;
    _DAT_027eee40 = 0;
    uRam00000000027eee48 = 0;
    _DAT_027eee50 = 0;
    uRam00000000027eee58 = 0;
    _DAT_027eee60 = 0;
    uRam00000000027eee68 = 0;
    _DAT_027eee70 = 0;
    uRam00000000027eee78 = 0;
    _DAT_027eee80 = 0;
    uRam00000000027eee88 = 0;
    _DAT_027eee90 = 0;
    uRam00000000027eee98 = 0;
    _DAT_027eeea0 = 0;
    uRam00000000027eeea8 = 0;
    _DAT_027eeeb0 = 0;
    _uRam00000000027eeeb8 = 0;
    _DAT_027eeec0 = 0;
    ___cxa_guard_release();
  }
  if (DAT_027eeebb == '\0') {
    FUN_000064f0();
    FUN_00e87760();
    FUN_00d4ff40();
    FUN_00d50c00();
    FUN_00d4ff80();
    if ((DAT_026eb178 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
      _DAT_026eb160 = "GNBrowserDataSource";
      DAT_026eb170 = 0;
      _DAT_026eb168 = 0;
      ___cxa_guard_release();
    }
    FUN_00e87c40();
    FUN_01e7e8a0();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_28 != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
    FUN_00d4ffa0();
  }
  return;
}



