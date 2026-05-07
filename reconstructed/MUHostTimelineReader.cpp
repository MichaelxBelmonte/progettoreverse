// Reconstructed implementation of MUHostTimelineReader
// From MikeCore binary — reverse-engineered pseudocode

#include "MUHostTimelineReader.h"

// ============================================================
// @0000dfe0 — 541 bytes
// str: ""bool""
// str: ""MUHostTimelineReader""
// str: ""GNData""
// str: ""MUTimeline""
// str: ""_isReading""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000dfe0(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_0000bce0();
  unaff_RDI[0xe] = &DAT_024bfe58;
  if (DAT_0270c880 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026cc210 = "MUHostTimelineReader";
      DAT_026cc220 = 0;
      _DAT_026cc218 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_026176d0;
  unaff_RDI[2] = &DAT_02617d80;
  unaff_RDI[3] = &DAT_02617db0;
  unaff_RDI[4] = &DAT_02617e58;
  unaff_RDI[0xe] = &DAT_02618118;
  unaff_RDI[0xf] = 0;
  lVar2 = FUN_0000b9f0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0000e290();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNData");
  }
  unaff_RDI[0x10] = 0;
  lVar2 = FUN_0000b9f0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0000e380();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTimeline");
  }
  *(undefined1 *)(unaff_RDI + 0x11) = 0;
  lVar2 = FUN_0000b9f0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026cc300 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026cc2c8 = FUN_0000b9f0();
        _DAT_026cc2c0 = "_isReading";
        _DAT_026cc2d0 = 0;
        _DAT_026cc2d8 = 0x6200;
        _DAT_026cc2e0 = "bool";
        _DAT_026cc2e8 = 0;
        uRam00000000026cc2f0 = 0;
        _DAT_026cc2f8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}



