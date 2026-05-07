// Reconstructed implementation of MDPlaybackController
// From MikeCore binary — reverse-engineered pseudocode

#include "MDPlaybackController.h"

// ============================================================
// @005da070 — 684 bytes
// str: ""MDPlaybackController""
// str: ""MUPlaybackController""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005da070(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  unaff_RDI[2] = &DAT_0263ce20;
  if (DAT_02715e50 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027045a0 = "MUPlaybackController";
      DAT_027045b0 = 0;
      _DAT_027045a8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_024e2bb0;
  unaff_RDI[2] = &DAT_024e3080;
  FUN_005da360();
  *(undefined4 *)(unaff_RDI + 4) = 0;
  if (DAT_0271cb00 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027021e8 = FUN_00d4fe50();
      _DAT_027021d0 = "MDPlaybackController";
      _DAT_027021d8 = 0x28;
      _DAT_027021e0 = FUN_003153d0;
      _DAT_027021f0 = 0;
      uRam00000000027021f8 = 0;
      _DAT_02702200 = 0;
      _DAT_02702278 = 0;
      uRam0000000002702280 = 0;
      _DAT_02702288 = 0;
      DAT_0270228a = 1;
      _DAT_02702208 = 0;
      uRam0000000002702210 = 0;
      _DAT_02702218 = 0;
      uRam0000000002702220 = 0;
      _DAT_02702228 = 0;
      uRam0000000002702230 = 0;
      _DAT_02702238 = 0;
      uRam0000000002702240 = 0;
      _DAT_02702248 = 0;
      uRam0000000002702250 = 0;
      _DAT_02702258 = 0;
      uRam0000000002702260 = 0;
      _DAT_02702268 = 0;
      uRam0000000002702270 = 0;
      DAT_02702293 = 0;
      _DAT_0270228b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0270228b == '\0') {
    FUN_005da690();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x24) = 0;
  if (DAT_0271cb00 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027021e8 = FUN_00d4fe50();
      _DAT_027021d0 = "MDPlaybackController";
      _DAT_027021d8 = 0x28;
      _DAT_027021e0 = FUN_003153d0;
      _DAT_027021f0 = 0;
      uRam00000000027021f8 = 0;
      _DAT_02702200 = 0;
      _DAT_02702278 = 0;
      uRam0000000002702280 = 0;
      _DAT_02702288 = 0;
      DAT_0270228a = 1;
      _DAT_02702208 = 0;
      uRam0000000002702210 = 0;
      _DAT_02702218 = 0;
      uRam0000000002702220 = 0;
      _DAT_02702228 = 0;
      uRam0000000002702230 = 0;
      _DAT_02702238 = 0;
      uRam0000000002702240 = 0;
      _DAT_02702248 = 0;
      uRam0000000002702250 = 0;
      _DAT_02702258 = 0;
      uRam0000000002702260 = 0;
      _DAT_02702268 = 0;
      uRam0000000002702270 = 0;
      DAT_02702293 = 0;
      _DAT_0270228b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0270228b == '\0') {
    FUN_005da8e0();
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @005da8e0 — 560 bytes
// str: ""MDPlaybackController""
// str: ""MDPlaybackSetup""
// str: ""_playbackSetup""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_005da8e0(void)

{
  int iVar1;
  
  if (DAT_0271cca0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0271cc90 = 0x100000000;
      _DAT_0271cc98 = 2;
      DAT_0271cc9c = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_0271ccd8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0271cca8 = "MDPlaybackSetup";
      _DAT_0271ccb0 = 3;
      DAT_0271ccb4 = DAT_0271cc9c;
      _DAT_0271ccb8 = &DAT_0271cc90;
      _DAT_0271ccc0 = &DAT_0271cc70;
      _DAT_0271ccc8 = 0;
      uRam000000000271ccd0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_0271cc68 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0271cb00 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027021e8 = FUN_00d4fe50();
          _DAT_027021d0 = "MDPlaybackController";
          _DAT_027021d8 = 0x28;
          _DAT_027021e0 = FUN_003153d0;
          _DAT_027021f0 = 0;
          uRam00000000027021f8 = 0;
          _DAT_02702200 = 0;
          _DAT_02702278 = 0;
          uRam0000000002702280 = 0;
          _DAT_02702288 = 0;
          DAT_0270228a = 1;
          _DAT_02702208 = 0;
          uRam0000000002702210 = 0;
          _DAT_02702218 = 0;
          uRam0000000002702220 = 0;
          _DAT_02702228 = 0;
          uRam0000000002702230 = 0;
          _DAT_02702238 = 0;
          uRam0000000002702240 = 0;
          _DAT_02702248 = 0;
          uRam0000000002702250 = 0;
          _DAT_02702258 = 0;
          uRam0000000002702260 = 0;
          _DAT_02702268 = 0;
          uRam0000000002702270 = 0;
          DAT_02702293 = 0;
          _DAT_0270228b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0271cc28 = "_playbackSetup";
      _DAT_0271cc30 = &DAT_027021d0;
      _DAT_0271cc38 = 0;
      _DAT_0271cc40 = 0x6500;
      _DAT_0271cc48 = "MDPlaybackSetup";
      _DAT_0271cc50 = &DAT_0271cca8;
      _DAT_0271cc58 = 0;
      uRam000000000271cc60 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_0271cc28;
}




// ============================================================
// @005da690 — 547 bytes
// str: ""MDPlaybackController""
// str: ""MDPlaybackState""
// str: ""_playbackState""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_005da690(void)

{
  int iVar1;
  
  if (DAT_0271cbe8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0271cbd0 = _DAT_0238fcc0;
      uRam000000000271cbd4 = _UNK_0238fcc4;
      uRam000000000271cbd8 = _UNK_0238fcc8;
      uRam000000000271cbdc = _UNK_0238fccc;
      DAT_0271cbe0 = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_0271cc20 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0271cbf0 = "MDPlaybackState";
      _DAT_0271cbf8 = 4;
      DAT_0271cbfc = DAT_0271cbe0;
      _DAT_0271cc00 = &DAT_0271cbd0;
      _DAT_0271cc08 = &DAT_0271cba0;
      _DAT_0271cc10 = 0;
      uRam000000000271cc18 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_0271cb90 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0271cb00 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027021e8 = FUN_00d4fe50();
          _DAT_027021d0 = "MDPlaybackController";
          _DAT_027021d8 = 0x28;
          _DAT_027021e0 = FUN_003153d0;
          _DAT_027021f0 = 0;
          uRam00000000027021f8 = 0;
          _DAT_02702200 = 0;
          _DAT_02702278 = 0;
          uRam0000000002702280 = 0;
          _DAT_02702288 = 0;
          DAT_0270228a = 1;
          _DAT_02702208 = 0;
          uRam0000000002702210 = 0;
          _DAT_02702218 = 0;
          uRam0000000002702220 = 0;
          _DAT_02702228 = 0;
          uRam0000000002702230 = 0;
          _DAT_02702238 = 0;
          uRam0000000002702240 = 0;
          _DAT_02702248 = 0;
          uRam0000000002702250 = 0;
          _DAT_02702258 = 0;
          uRam0000000002702260 = 0;
          _DAT_02702268 = 0;
          uRam0000000002702270 = 0;
          DAT_02702293 = 0;
          _DAT_0270228b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0271cb50 = "_playbackState";
      _DAT_0271cb58 = &DAT_027021d0;
      _DAT_0271cb60 = 0;
      _DAT_0271cb68 = 0x6500;
      _DAT_0271cb70 = "MDPlaybackState";
      _DAT_0271cb78 = &DAT_0271cbf0;
      _DAT_0271cb80 = 0;
      uRam000000000271cb88 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_0271cb50;
}




// ============================================================
// @005d9580 — 500 bytes
// ============================================================

void FUN_005d9580(void)

{
  undefined8 *unaff_RDI;
  
  *unaff_RDI = &DAT_02507318;
  unaff_RDI[0xe] = &DAT_025079f8;
  unaff_RDI[0xf] = &DAT_02507a28;
  if (unaff_RDI[0x32] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x30] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x2e] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x2d] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x2c] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x29] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x28] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x27] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x26] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x25] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x24] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x23] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x22] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x20] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x1f] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x1e] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x1d] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x1c] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x1b] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x1a] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x19] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x18] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x17] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x16] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x14] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x11] != 0) {
    FUN_00d50b20();
  }
  FUN_00015ea0();
  return;
}



