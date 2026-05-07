// Reconstructed implementation of GNMidiEvent
// From MikeCore binary — reverse-engineered pseudocode

#include "GNMidiEvent.h"

// ============================================================
// @00b0e240 — 792 bytes
// str: ""bool""
// str: ""GNMidiEvent""
// str: ""GNMidiTimeStamp""
// str: ""GNMidiPort""
// str: ""_notifiesOnReceipt""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b0e240(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_025396e8;
  FUN_00b04210();
  FUN_00b04500();
  *unaff_RDI = &DAT_0253da40;
  FUN_00b0e680();
  *(undefined1 *)(unaff_RDI + 5) = 0;
  lVar2 = FUN_00b0e060();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275b020 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275afe8 = FUN_00b0e060();
        _DAT_0275afe0 = "_notifiesOnReceipt";
        _DAT_0275aff0 = 0;
        _DAT_0275aff8 = 0x6200;
        _DAT_0275b000 = "bool";
        _DAT_0275b008 = 0;
        uRam000000000275b010 = 0;
        _DAT_0275b018 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x29) = 0;
  lVar2 = FUN_00b0e060();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275b068 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275b030 = FUN_00b0e060();
        _DAT_0275b028 = "_copiesOnReceipt";
        _DAT_0275b038 = 0;
        _DAT_0275b040 = 0x6200;
        _DAT_0275b048 = "bool";
        _DAT_0275b050 = 0;
        uRam000000000275b058 = 0;
        _DAT_0275b060 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[6] = 0;
  lVar2 = FUN_00b0e060();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00b0e760();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNMidiEvent");
  }
  unaff_RDI[7] = 0;
  lVar2 = FUN_00b0e060();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275b0f8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275b0c0 = FUN_00b0e060();
        _DAT_0275b0b8 = "_currentTime";
        _DAT_0275b0c8 = 0;
        _DAT_0275b0d0 = 0x6400;
        _DAT_0275b0d8 = "GNMidiTimeStamp";
        _DAT_0275b0e0 = 0;
        uRam000000000275b0e8 = 0;
        _DAT_0275b0f0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[8] = 0;
  lVar2 = FUN_00b0e060();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00b0e850();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNMidiPort");
  }
  return;
}



