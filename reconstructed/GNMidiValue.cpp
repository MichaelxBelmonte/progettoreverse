// Reconstructed implementation of GNMidiValue
// From MikeCore binary — reverse-engineered pseudocode

#include "GNMidiValue.h"

// ============================================================
// @00b0f730 — 1561 bytes
// str: ""bool""
// str: ""GNMidiValue""
// str: ""GNMidiSynthesizer""
// str: ""_startVelocity""
// str: ""_stopVelocity""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b0f730(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_005fea00();
  *unaff_RDI = &DAT_0253e850;
  *(undefined1 *)(unaff_RDI + 0x12) = 0;
  lVar2 = FUN_00b0f500();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275b5d0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275b598 = FUN_00b0f500();
        _DAT_0275b590 = "_noteNumber";
        _DAT_0275b5a0 = 0;
        _DAT_0275b5a8 = 0x6300;
        _DAT_0275b5b0 = "GNMidiValue";
        _DAT_0275b5b8 = 0;
        uRam000000000275b5c0 = 0;
        _DAT_0275b5c8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x91) = 0;
  lVar2 = FUN_00b0f500();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275b618 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275b5e0 = FUN_00b0f500();
        _DAT_0275b5d8 = "_startVelocity";
        _DAT_0275b5e8 = 0;
        _DAT_0275b5f0 = 0x6300;
        _DAT_0275b5f8 = "GNMidiValue";
        _DAT_0275b600 = 0;
        uRam000000000275b608 = 0;
        _DAT_0275b610 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x92) = 0;
  lVar2 = FUN_00b0f500();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275b660 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275b628 = FUN_00b0f500();
        _DAT_0275b620 = "_stopVelocity";
        _DAT_0275b630 = 0;
        _DAT_0275b638 = 0x6300;
        _DAT_0275b640 = "GNMidiValue";
        _DAT_0275b648 = 0;
        uRam000000000275b650 = 0;
        _DAT_0275b658 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x93) = 0;
  lVar2 = FUN_00b0f500();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275b6a8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275b670 = FUN_00b0f500();
        _DAT_0275b668 = "_aftertouch";
        _DAT_0275b678 = 0;
        _DAT_0275b680 = 0x6300;
        _DAT_0275b688 = "GNMidiValue";
        _DAT_0275b690 = 0;
        uRam000000000275b698 = 0;
        _DAT_0275b6a0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x94) = 0;
  lVar2 = FUN_00b0f500();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275b6f0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275b6b8 = FUN_00b0f500();
        _DAT_0275b6b0 = "_programNumber";
        _DAT_0275b6c0 = 0;
        _DAT_0275b6c8 = 0x6300;
        _DAT_0275b6d0 = "GNMidiValue";
        _DAT_0275b6d8 = 0;
        uRam000000000275b6e0 = 0;
        _DAT_0275b6e8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x95) = 0;
  lVar2 = FUN_00b0f500();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275b738 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275b700 = FUN_00b0f500();
        _DAT_0275b6f8 = "_stopping";
        _DAT_0275b708 = 0;
        _DAT_0275b710 = 0x6200;
        _DAT_0275b718 = "bool";
        _DAT_0275b720 = 0;
        uRam000000000275b728 = 0;
        _DAT_0275b730 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x96) = 0;
  lVar2 = FUN_00b0f500();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275b780 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275b748 = FUN_00b0f500();
        _DAT_0275b740 = "_playing";
        _DAT_0275b750 = 0;
        _DAT_0275b758 = 0x6200;
        _DAT_0275b760 = "bool";
        _DAT_0275b768 = 0;
        uRam000000000275b770 = 0;
        _DAT_0275b778 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x13) = 0;
  lVar2 = FUN_00b0f500();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275b7c8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275b790 = FUN_00b0f500();
        _DAT_0275b788 = "_signalSize";
        _DAT_0275b798 = 0;
        _DAT_0275b7a0 = 0x6900;
        _DAT_0275b7a8 = "GNInt";
        _DAT_0275b7b0 = 0;
        uRam000000000275b7b8 = 0;
        _DAT_0275b7c0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_00b0fde0();
  unaff_RDI[0x15] = 0;
  lVar2 = FUN_00b0f500();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00b0fec0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNMidiSynthesizer");
  }
  return;
}



