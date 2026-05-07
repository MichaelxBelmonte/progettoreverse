// Reconstructed implementation of GNBrowserDataField
// From MikeCore binary — reverse-engineered pseudocode

#include "GNBrowserDataField.h"

// ============================================================
// @008401e0 — 588 bytes
// str: ""float""
// str: ""GNBrowserDataField""
// str: ""_playingItemProgress""
// str: ""_canStartPlayback""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008401e0(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_0083cc40();
  *unaff_RDI = &DAT_026415d0;
  unaff_RDI[2] = &DAT_02641f80;
  *(undefined4 *)((longlong)unaff_RDI + 0x194) = 0;
  lVar2 = FUN_0083c8c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02737570 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02737538 = FUN_0083c8c0();
        _DAT_02737530 = "_playingItemProgress";
        _DAT_02737540 = 0;
        _DAT_02737548 = 0x6600;
        _DAT_02737550 = "float";
        _DAT_02737558 = 0;
        uRam0000000002737560 = 0;
        _DAT_02737568 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x33) = 0;
  lVar2 = FUN_0083c8c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027375b8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02737580 = FUN_0083c8c0();
        _DAT_02737578 = "_canStartPlayback";
        _DAT_02737588 = 0;
        _DAT_02737590 = 0x6600;
        _DAT_02737598 = "float";
        _DAT_027375a0 = 0;
        uRam00000000027375a8 = 0;
        _DAT_027375b0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x34] = 0;
  lVar2 = FUN_0083c8c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_008404b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNBrowserDataField");
  }
  unaff_RDI[0x35] = 0;
  lVar2 = FUN_0083c8c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_008405a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNBrowserDataField");
  }
  return;
}




// ============================================================
// @0017e420 — 561 bytes
// str: ""GNBrowserDataField""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0017e58a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0017e420(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_200;
  
  if ((DAT_026e8c70 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_027ea068 = FUN_001b2d30();
    _DAT_027ea050 = "GNBrowserDataField";
    _DAT_027ea058 = 0x1d8;
    _DAT_027ea060 = FUN_001b2c60;
    _DAT_027ea070 = 0;
    uRam00000000027ea078 = 0;
    _DAT_027ea080 = 0;
    uRam00000000027ea088 = 0;
    _DAT_027ea090 = 0;
    uRam00000000027ea098 = 0;
    _DAT_027ea0a0 = 0;
    uRam00000000027ea0a8 = 0;
    _DAT_027ea0b0 = 0;
    uRam00000000027ea0b8 = 0;
    _DAT_027ea0c0 = 0;
    uRam00000000027ea0c8 = 0;
    _DAT_027ea0d0 = 0;
    uRam00000000027ea0d8 = 0;
    _DAT_027ea0e0 = 0;
    uRam00000000027ea0e8 = 0;
    _DAT_027ea0f0 = 0;
    uRam00000000027ea0f8 = 0;
    _DAT_027ea100 = 0;
    _uRam00000000027ea108 = 0;
    _DAT_027ea110 = 0;
    ___cxa_guard_release();
  }
  if (DAT_027ea10b == '\0') {
    FUN_00189280();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_001b2fa0();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_200 != 0) {
      FUN_00d50b20();
    }
    FUN_000993f0();
    FUN_000993f0();
  }
  return;
}



