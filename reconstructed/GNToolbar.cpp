// Reconstructed implementation of GNToolbar
// From MikeCore binary — reverse-engineered pseudocode

#include "GNToolbar.h"

// ============================================================
// @01e8eb00 — 1580 bytes
// str: ""float""
// str: ""_scrollerKnobMargin""
// str: ""_scrollerBorderRadius""
// str: ""_rectRadius""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e8eb00(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *unaff_RDI;
  
  FUN_001ab9a0();
  *unaff_RDI = &DAT_026a3808;
  FUN_01e8f720();
  FUN_01e8f800();
  FUN_01e8f8e0();
  FUN_01e8f9c0();
  FUN_01e8faa0();
  FUN_01e8fb80();
  FUN_01e8fc60();
  FUN_01e8fd40();
  FUN_01e8fe20();
  FUN_01e8ff00();
  FUN_01e8ffe0();
  FUN_01e900c0();
  FUN_01e901a0();
  FUN_01e90280();
  FUN_01e90360();
  FUN_01e90440();
  FUN_01e90520();
  FUN_01e90600();
  FUN_01e906e0();
  FUN_01e907c0();
  FUN_01e908a0();
  FUN_01e90980();
  FUN_01e90a60();
  FUN_01e90b40();
  FUN_01e90c20();
  FUN_01e90d00();
  FUN_01e90de0();
  FUN_01e90ec0();
  FUN_01e90fa0();
  FUN_01e91080();
  FUN_01e91160();
  FUN_01e91240();
  FUN_01e91320();
  FUN_01e91400();
  FUN_01e914e0();
  FUN_01e915c0();
  FUN_01e916a0();
  FUN_01e91780();
  FUN_01e91860();
  FUN_01e91940();
  *(undefined4 *)(unaff_RDI + 0x2f) = 0;
  lVar2 = FUN_01d74c10();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027fc6e0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027fc6a8 = FUN_01d74c10();
        _DAT_027fc6a0 = "_rectRadius";
        _DAT_027fc6b0 = 0;
        _DAT_027fc6b8 = 0x6600;
        _DAT_027fc6c0 = "float";
        _DAT_027fc6c8 = 0;
        uRam00000000027fc6d0 = 0;
        _DAT_027fc6d8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x17c) = 0;
  lVar2 = FUN_01d74c10();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027fc728 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027fc6f0 = FUN_01d74c10();
        _DAT_027fc6e8 = "_scrollerKnobMargin";
        _DAT_027fc6f8 = 0;
        _DAT_027fc700 = 0x6600;
        _DAT_027fc708 = "float";
        _DAT_027fc710 = 0;
        uRam00000000027fc718 = 0;
        _DAT_027fc720 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x30) = 0;
  lVar2 = FUN_01d74c10();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027fc770 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027fc738 = FUN_01d74c10();
        _DAT_027fc730 = "_scrollerBorderRadius";
        _DAT_027fc740 = 0;
        _DAT_027fc748 = 0x6600;
        _DAT_027fc750 = "float";
        _DAT_027fc758 = 0;
        uRam00000000027fc760 = 0;
        _DAT_027fc768 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @01e8d890 — 532 bytes
// str: ""GNToolbar""
// str: ""_displayMode""
// str: ""GNToolbarDisplayMode""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_01e8d890(void)

{
  int iVar1;
  
  if (DAT_027fb720 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027fb710 = 0x100000000;
      _DAT_027fb718 = 2;
      DAT_027fb71c = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_027fb758 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027fb728 = "GNToolbarDisplayMode";
      _DAT_027fb730 = 3;
      DAT_027fb734 = DAT_027fb71c;
      _DAT_027fb738 = &DAT_027fb710;
      _DAT_027fb740 = &DAT_027fb6f0;
      _DAT_027fb748 = 0;
      uRam00000000027fb750 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_027fb6e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027fb5c0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027f1470 = FUN_0006d940();
          _DAT_027f1458 = "GNToolbar";
          _DAT_027f1460 = 0x188;
          _DAT_027f1468 = FUN_01d90d10;
          _DAT_027f1478 = 0;
          uRam00000000027f1480 = 0;
          _DAT_027f1488 = 0;
          uRam00000000027f1490 = 0;
          _DAT_027f1498 = 0;
          uRam00000000027f14a0 = 0;
          _DAT_027f14a8 = 0;
          uRam00000000027f14b0 = 0;
          _DAT_027f14b8 = 0;
          uRam00000000027f14c0 = 0;
          _DAT_027f14c8 = 0;
          uRam00000000027f14d0 = 0;
          _DAT_027f14d8 = 0;
          uRam00000000027f14e0 = 0;
          _DAT_027f14e8 = 0;
          uRam00000000027f14f0 = 0;
          _DAT_027f14f8 = 0;
          uRam00000000027f1500 = 0;
          _DAT_027f1508 = 0;
          uRam00000000027f1510 = 0;
          _DAT_027f1518 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_027fb6a0 = "_displayMode";
      _DAT_027fb6a8 = &DAT_027f1458;
      _DAT_027fb6b0 = 0;
      _DAT_027fb6b8 = 0x6500;
      _DAT_027fb6c0 = "GNToolbarDisplayMode";
      _DAT_027fb6c8 = &DAT_027fb728;
      _DAT_027fb6d0 = 0;
      uRam00000000027fb6d8 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_027fb6a0;
}




// ============================================================
// @01e8dad0 — 519 bytes
// str: ""GNToolbar""
// str: ""GNEdge""
// str: ""_edge""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_01e8dad0(void)

{
  int iVar1;
  
  if (DAT_026e5268 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e5250 = _DAT_0238fcc0;
      uRam00000000026e5254 = _UNK_0238fcc4;
      uRam00000000026e5258 = _UNK_0238fcc8;
      uRam00000000026e525c = _UNK_0238fccc;
      DAT_026e5260 = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e52a0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e5270 = "GNEdge";
      _DAT_026e5278 = 4;
      DAT_026e527c = DAT_026e5260;
      _DAT_026e5280 = &DAT_026e5250;
      _DAT_026e5288 = &DAT_026e5220;
      _DAT_026e5290 = 0;
      uRam00000000026e5298 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_027fb7a0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027fb5c0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027f1470 = FUN_0006d940();
          _DAT_027f1458 = "GNToolbar";
          _DAT_027f1460 = 0x188;
          _DAT_027f1468 = FUN_01d90d10;
          _DAT_027f1478 = 0;
          uRam00000000027f1480 = 0;
          _DAT_027f1488 = 0;
          uRam00000000027f1490 = 0;
          _DAT_027f1498 = 0;
          uRam00000000027f14a0 = 0;
          _DAT_027f14a8 = 0;
          uRam00000000027f14b0 = 0;
          _DAT_027f14b8 = 0;
          uRam00000000027f14c0 = 0;
          _DAT_027f14c8 = 0;
          uRam00000000027f14d0 = 0;
          _DAT_027f14d8 = 0;
          uRam00000000027f14e0 = 0;
          _DAT_027f14e8 = 0;
          uRam00000000027f14f0 = 0;
          _DAT_027f14f8 = 0;
          uRam00000000027f1500 = 0;
          _DAT_027f1508 = 0;
          uRam00000000027f1510 = 0;
          _DAT_027f1518 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_027fb760 = "_edge";
      _DAT_027fb768 = &DAT_027f1458;
      _DAT_027fb770 = 0;
      _DAT_027fb778 = 0x6500;
      _DAT_027fb780 = "GNEdge";
      _DAT_027fb788 = &DAT_026e5270;
      _DAT_027fb790 = 0;
      uRam00000000027fb798 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_027fb760;
}



