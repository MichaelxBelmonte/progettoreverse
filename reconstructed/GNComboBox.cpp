// Reconstructed implementation of GNComboBox
// From MikeCore binary — reverse-engineered pseudocode

#include "GNComboBox.h"

// ============================================================
// @01e7ef60 — 598 bytes
// str: ""GNComboBox""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e7ef60(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_001f8d00();
  *unaff_RDI = &DAT_0267a768;
  unaff_RDI[2] = &DAT_0267b2d0;
  unaff_RDI[0x39] = &DAT_0267b310;
  FUN_01e7f240();
  FUN_01e7f530();
  *(undefined4 *)(unaff_RDI + 0x4a) = 0;
  if (DAT_027f5f80 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027ef558 = FUN_001f8a30();
      _DAT_027ef540 = "GNComboBox";
      _DAT_027ef548 = 0x268;
      _DAT_027ef550 = FUN_01d0cdd0;
      _DAT_027ef560 = 0;
      uRam00000000027ef568 = 0;
      _DAT_027ef570 = 0;
      uRam00000000027ef578 = 0;
      _DAT_027ef580 = 0;
      uRam00000000027ef588 = 0;
      _DAT_027ef590 = 0;
      uRam00000000027ef598 = 0;
      _DAT_027ef5a0 = 0;
      uRam00000000027ef5a8 = 0;
      _DAT_027ef5b0 = 0;
      uRam00000000027ef5b8 = 0;
      _DAT_027ef5c0 = 0;
      uRam00000000027ef5c8 = 0;
      _DAT_027ef5d0 = 0;
      uRam00000000027ef5d8 = 0;
      _DAT_027ef5e0 = 0;
      uRam00000000027ef5e8 = 0;
      _DAT_027ef5f0 = 0;
      _uRam00000000027ef5f8 = 0;
      _DAT_027ef600 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027ef5fb == '\0') {
    FUN_01e7f820();
    FUN_00e87980();
  }
  FUN_01e7fa50();
  *(undefined1 *)(unaff_RDI + 0x4c) = 0;
  if (DAT_027f5f80 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027ef558 = FUN_001f8a30();
      _DAT_027ef540 = "GNComboBox";
      _DAT_027ef548 = 0x268;
      _DAT_027ef550 = FUN_01d0cdd0;
      _DAT_027ef560 = 0;
      uRam00000000027ef568 = 0;
      _DAT_027ef570 = 0;
      uRam00000000027ef578 = 0;
      _DAT_027ef580 = 0;
      uRam00000000027ef588 = 0;
      _DAT_027ef590 = 0;
      uRam00000000027ef598 = 0;
      _DAT_027ef5a0 = 0;
      uRam00000000027ef5a8 = 0;
      _DAT_027ef5b0 = 0;
      uRam00000000027ef5b8 = 0;
      _DAT_027ef5c0 = 0;
      uRam00000000027ef5c8 = 0;
      _DAT_027ef5d0 = 0;
      uRam00000000027ef5d8 = 0;
      _DAT_027ef5e0 = 0;
      uRam00000000027ef5e8 = 0;
      _DAT_027ef5f0 = 0;
      _uRam00000000027ef5f8 = 0;
      _DAT_027ef600 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027ef5fb == '\0') {
    FUN_01e7fcd0();
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @01e7f820 — 519 bytes
// str: ""_mode""
// str: ""GNComboBox""
// str: ""GNComboBoxMode""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_01e7f820(void)

{
  int iVar1;
  
  if (DAT_027f60a8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027f6090 = _DAT_0238fcc0;
      uRam00000000027f6094 = _UNK_0238fcc4;
      uRam00000000027f6098 = _UNK_0238fcc8;
      uRam00000000027f609c = _UNK_0238fccc;
      DAT_027f60a0 = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_027f60e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027f60b0 = "GNComboBoxMode";
      _DAT_027f60b8 = 4;
      DAT_027f60bc = DAT_027f60a0;
      _DAT_027f60c0 = &DAT_027f6090;
      _DAT_027f60c8 = &DAT_027f6060;
      _DAT_027f60d0 = 0;
      uRam00000000027f60d8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_027f6058 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027f5f80 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027ef558 = FUN_001f8a30();
          _DAT_027ef540 = "GNComboBox";
          _DAT_027ef548 = 0x268;
          _DAT_027ef550 = FUN_01d0cdd0;
          _DAT_027ef560 = 0;
          uRam00000000027ef568 = 0;
          _DAT_027ef570 = 0;
          uRam00000000027ef578 = 0;
          _DAT_027ef580 = 0;
          uRam00000000027ef588 = 0;
          _DAT_027ef590 = 0;
          uRam00000000027ef598 = 0;
          _DAT_027ef5a0 = 0;
          uRam00000000027ef5a8 = 0;
          _DAT_027ef5b0 = 0;
          uRam00000000027ef5b8 = 0;
          _DAT_027ef5c0 = 0;
          uRam00000000027ef5c8 = 0;
          _DAT_027ef5d0 = 0;
          uRam00000000027ef5d8 = 0;
          _DAT_027ef5e0 = 0;
          uRam00000000027ef5e8 = 0;
          _DAT_027ef5f0 = 0;
          uRam00000000027ef5f8 = 0;
          _DAT_027ef600 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_027f6018 = "_mode";
      _DAT_027f6020 = &DAT_027ef540;
      _DAT_027f6028 = 0;
      _DAT_027f6030 = 0x6500;
      _DAT_027f6038 = "GNComboBoxMode";
      _DAT_027f6040 = &DAT_027f60b0;
      _DAT_027f6048 = 0;
      uRam00000000027f6050 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_027f6018;
}




// ============================================================
// @01e73d90 — 515 bytes
// str: ""GNComboBox""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e73d90(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_2b0;
  longlong local_2a8;
  longlong local_298;
  longlong local_48;
  longlong local_40;
  longlong local_30;
  
  if (DAT_027f5f80 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027ef558 = FUN_001f8a30();
      _DAT_027ef540 = "GNComboBox";
      _DAT_027ef548 = 0x268;
      _DAT_027ef550 = FUN_01d0cdd0;
      _DAT_027ef560 = 0;
      uRam00000000027ef568 = 0;
      _DAT_027ef570 = 0;
      uRam00000000027ef578 = 0;
      _DAT_027ef580 = 0;
      uRam00000000027ef588 = 0;
      _DAT_027ef590 = 0;
      uRam00000000027ef598 = 0;
      _DAT_027ef5a0 = 0;
      uRam00000000027ef5a8 = 0;
      _DAT_027ef5b0 = 0;
      uRam00000000027ef5b8 = 0;
      _DAT_027ef5c0 = 0;
      uRam00000000027ef5c8 = 0;
      _DAT_027ef5d0 = 0;
      uRam00000000027ef5d8 = 0;
      _DAT_027ef5e0 = 0;
      uRam00000000027ef5e8 = 0;
      _DAT_027ef5f0 = 0;
      _uRam00000000027ef5f8 = 0;
      _DAT_027ef600 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027ef5fb == '\0') {
    FUN_0018a670();
    FUN_00e87760();
    FUN_01d0ce00();
    FUN_00d50c00();
    FUN_01e7ef60();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_01d08090();
    FUN_00e87920(uVar2,0);
    if (local_30 != 0) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    FUN_001fa900();
    if (local_298 != 0) {
      FUN_00d50b20();
    }
    if (local_2a8 != 0) {
      FUN_00d50b20();
    }
    if (local_2b0 != 0) {
      FUN_00d50b20();
    }
    FUN_001fa900();
  }
  return;
}



