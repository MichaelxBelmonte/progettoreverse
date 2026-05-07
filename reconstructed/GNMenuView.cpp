// Reconstructed implementation of GNMenuView
// From MikeCore binary — reverse-engineered pseudocode

#include "GNMenuView.h"

// ============================================================
// @0018ed50 — 1458 bytes
// str: ""GNMenuView""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0018ed50(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_000a32b0();
  *unaff_RDI = &DAT_026b4ed8;
  unaff_RDI[2] = &DAT_026b5850;
  FUN_0018f3b0();
  *(undefined4 *)(unaff_RDI + 0x28) = 0;
  if (DAT_026e4f48 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e4e98 = FUN_0006d940();
      _DAT_026e4e80 = "GNMenuView";
      _DAT_026e4e88 = 400;
      _DAT_026e4e90 = FUN_0018ecc0;
      _DAT_026e4ea0 = 0;
      uRam00000000026e4ea8 = 0;
      _DAT_026e4eb0 = 0;
      _DAT_026e4f28 = 0;
      uRam00000000026e4f30 = 0;
      _DAT_026e4f38 = 0;
      DAT_026e4f3a = 1;
      _DAT_026e4eb8 = 0;
      uRam00000000026e4ec0 = 0;
      _DAT_026e4ec8 = 0;
      uRam00000000026e4ed0 = 0;
      _DAT_026e4ed8 = 0;
      uRam00000000026e4ee0 = 0;
      _DAT_026e4ee8 = 0;
      uRam00000000026e4ef0 = 0;
      _DAT_026e4ef8 = 0;
      uRam00000000026e4f00 = 0;
      _DAT_026e4f08 = 0;
      uRam00000000026e4f10 = 0;
      _DAT_026e4f18 = 0;
      uRam00000000026e4f20 = 0;
      DAT_026e4f43 = 0;
      _DAT_026e4f3b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e4f3b == '\0') {
    FUN_0018f6e0();
    FUN_00e87980();
  }
  FUN_0018f870();
  FUN_0018fb90();
  FUN_0018feb0();
  *(undefined4 *)(unaff_RDI + 0x2c) = 0;
  if (DAT_026e4f48 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e4e98 = FUN_0006d940();
      _DAT_026e4e80 = "GNMenuView";
      _DAT_026e4e88 = 400;
      _DAT_026e4e90 = FUN_0018ecc0;
      _DAT_026e4ea0 = 0;
      uRam00000000026e4ea8 = 0;
      _DAT_026e4eb0 = 0;
      _DAT_026e4f28 = 0;
      uRam00000000026e4f30 = 0;
      _DAT_026e4f38 = 0;
      DAT_026e4f3a = 1;
      _DAT_026e4eb8 = 0;
      uRam00000000026e4ec0 = 0;
      _DAT_026e4ec8 = 0;
      uRam00000000026e4ed0 = 0;
      _DAT_026e4ed8 = 0;
      uRam00000000026e4ee0 = 0;
      _DAT_026e4ee8 = 0;
      uRam00000000026e4ef0 = 0;
      _DAT_026e4ef8 = 0;
      uRam00000000026e4f00 = 0;
      _DAT_026e4f08 = 0;
      uRam00000000026e4f10 = 0;
      _DAT_026e4f18 = 0;
      uRam00000000026e4f20 = 0;
      DAT_026e4f43 = 0;
      _DAT_026e4f3b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e4f3b == '\0') {
    FUN_001901d0();
    FUN_00e87980();
  }
  FUN_00190360();
  FUN_00190620();
  *(undefined1 *)(unaff_RDI + 0x2f) = 0;
  if (DAT_026e4f48 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e4e98 = FUN_0006d940();
      _DAT_026e4e80 = "GNMenuView";
      _DAT_026e4e88 = 400;
      _DAT_026e4e90 = FUN_0018ecc0;
      _DAT_026e4ea0 = 0;
      uRam00000000026e4ea8 = 0;
      _DAT_026e4eb0 = 0;
      _DAT_026e4f28 = 0;
      uRam00000000026e4f30 = 0;
      _DAT_026e4f38 = 0;
      DAT_026e4f3a = 1;
      _DAT_026e4eb8 = 0;
      uRam00000000026e4ec0 = 0;
      _DAT_026e4ec8 = 0;
      uRam00000000026e4ed0 = 0;
      _DAT_026e4ed8 = 0;
      uRam00000000026e4ee0 = 0;
      _DAT_026e4ee8 = 0;
      uRam00000000026e4ef0 = 0;
      _DAT_026e4ef8 = 0;
      uRam00000000026e4f00 = 0;
      _DAT_026e4f08 = 0;
      uRam00000000026e4f10 = 0;
      _DAT_026e4f18 = 0;
      uRam00000000026e4f20 = 0;
      DAT_026e4f43 = 0;
      _DAT_026e4f3b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e4f3b == '\0') {
    FUN_00190940();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x17c) = 0;
  if (DAT_026e4f48 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e4e98 = FUN_0006d940();
      _DAT_026e4e80 = "GNMenuView";
      _DAT_026e4e88 = 400;
      _DAT_026e4e90 = FUN_0018ecc0;
      _DAT_026e4ea0 = 0;
      uRam00000000026e4ea8 = 0;
      _DAT_026e4eb0 = 0;
      _DAT_026e4f28 = 0;
      uRam00000000026e4f30 = 0;
      _DAT_026e4f38 = 0;
      DAT_026e4f3a = 1;
      _DAT_026e4eb8 = 0;
      uRam00000000026e4ec0 = 0;
      _DAT_026e4ec8 = 0;
      uRam00000000026e4ed0 = 0;
      _DAT_026e4ed8 = 0;
      uRam00000000026e4ee0 = 0;
      _DAT_026e4ee8 = 0;
      uRam00000000026e4ef0 = 0;
      _DAT_026e4ef8 = 0;
      uRam00000000026e4f00 = 0;
      _DAT_026e4f08 = 0;
      uRam00000000026e4f10 = 0;
      _DAT_026e4f18 = 0;
      uRam00000000026e4f20 = 0;
      DAT_026e4f43 = 0;
      _DAT_026e4f3b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e4f3b == '\0') {
    FUN_00190ad0();
    FUN_00e87980();
  }
  FUN_00190d20();
  *(undefined1 *)(unaff_RDI + 0x31) = 0;
  if (DAT_026e4f48 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e4e98 = FUN_0006d940();
      _DAT_026e4e80 = "GNMenuView";
      _DAT_026e4e88 = 400;
      _DAT_026e4e90 = FUN_0018ecc0;
      _DAT_026e4ea0 = 0;
      uRam00000000026e4ea8 = 0;
      _DAT_026e4eb0 = 0;
      _DAT_026e4f28 = 0;
      uRam00000000026e4f30 = 0;
      _DAT_026e4f38 = 0;
      DAT_026e4f3a = 1;
      _DAT_026e4eb8 = 0;
      uRam00000000026e4ec0 = 0;
      _DAT_026e4ec8 = 0;
      uRam00000000026e4ed0 = 0;
      _DAT_026e4ed8 = 0;
      uRam00000000026e4ee0 = 0;
      _DAT_026e4ee8 = 0;
      uRam00000000026e4ef0 = 0;
      _DAT_026e4ef8 = 0;
      uRam00000000026e4f00 = 0;
      _DAT_026e4f08 = 0;
      uRam00000000026e4f10 = 0;
      _DAT_026e4f18 = 0;
      uRam00000000026e4f20 = 0;
      DAT_026e4f43 = 0;
      _DAT_026e4f3b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e4f3b == '\0') {
    FUN_00190fe0();
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @00184f70 — 584 bytes
// str: ""GNMenuView""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x001850c5) */
/* WARNING: Removing unreachable block (ram,0x001850b7) */
/* WARNING: Removing unreachable block (ram,0x001850d3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00184f70(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_208;
  longlong local_1d8;
  longlong local_1c0;
  
  if ((DAT_026e4f48 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_026e4e98 = FUN_0006d940();
    _DAT_026e4e80 = "GNMenuView";
    _DAT_026e4e88 = 400;
    _DAT_026e4e90 = FUN_0018ecc0;
    _DAT_026e4ea0 = 0;
    uRam00000000026e4ea8 = 0;
    _DAT_026e4eb0 = 0;
    _DAT_026e4f28 = 0;
    uRam00000000026e4f30 = 0;
    _DAT_026e4f38 = 0;
    DAT_026e4f3a = 1;
    _DAT_026e4eb8 = 0;
    uRam00000000026e4ec0 = 0;
    _DAT_026e4ec8 = 0;
    uRam00000000026e4ed0 = 0;
    _DAT_026e4ed8 = 0;
    uRam00000000026e4ee0 = 0;
    _DAT_026e4ee8 = 0;
    uRam00000000026e4ef0 = 0;
    _DAT_026e4ef8 = 0;
    uRam00000000026e4f00 = 0;
    _DAT_026e4f08 = 0;
    uRam00000000026e4f10 = 0;
    _DAT_026e4f18 = 0;
    uRam00000000026e4f20 = 0;
    DAT_026e4f43 = 0;
    _DAT_026e4f3b = 0;
    ___cxa_guard_release();
  }
  if (DAT_026e4f3b == '\0') {
    FUN_000a31d0();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_0018ed50();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_1c0 != 0) {
      FUN_00d50b20();
    }
    if (local_1d8 != 0) {
      FUN_00d50b20();
    }
    if (local_208 != 0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
    FUN_0006d770();
  }
  return;
}




// ============================================================
// @00190ad0 — 547 bytes
// str: ""GNMenuView""
// str: ""GNEdge""
// str: ""_expandDirection""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00190ad0(void)

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
  if (DAT_026e5218 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e4f48 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026e4e98 = FUN_0006d940();
          _DAT_026e4e80 = "GNMenuView";
          _DAT_026e4e88 = 400;
          _DAT_026e4e90 = FUN_0018ecc0;
          _DAT_026e4ea0 = 0;
          uRam00000000026e4ea8 = 0;
          _DAT_026e4eb0 = 0;
          _DAT_026e4f28 = 0;
          uRam00000000026e4f30 = 0;
          _DAT_026e4f38 = 0;
          DAT_026e4f3a = 1;
          _DAT_026e4eb8 = 0;
          uRam00000000026e4ec0 = 0;
          _DAT_026e4ec8 = 0;
          uRam00000000026e4ed0 = 0;
          _DAT_026e4ed8 = 0;
          uRam00000000026e4ee0 = 0;
          _DAT_026e4ee8 = 0;
          uRam00000000026e4ef0 = 0;
          _DAT_026e4ef8 = 0;
          uRam00000000026e4f00 = 0;
          _DAT_026e4f08 = 0;
          uRam00000000026e4f10 = 0;
          _DAT_026e4f18 = 0;
          uRam00000000026e4f20 = 0;
          DAT_026e4f43 = 0;
          _DAT_026e4f3b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_026e51d8 = "_expandDirection";
      _DAT_026e51e0 = &DAT_026e4e80;
      _DAT_026e51e8 = 0;
      _DAT_026e51f0 = 0x6500;
      _DAT_026e51f8 = "GNEdge";
      _DAT_026e5200 = &DAT_026e5270;
      _DAT_026e5208 = 0;
      uRam00000000026e5210 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_026e51d8;
}



