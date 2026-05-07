// Reconstructed implementation of MDEditorViewAggregate
// From MikeCore binary — reverse-engineered pseudocode

#include "MDEditorViewAggregate.h"

// ============================================================
// @005ae980 — 710 bytes
// str: ""bool""
// str: ""MDEditorViewAggregate""
// str: ""MDSelectionController""
// str: ""_detectionEditorView""
// str: ""_isQuantizeTimePreviewEnabled""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ae980(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_005a97a0();
  *unaff_RDI = &DAT_024e70f0;
  unaff_RDI[2] = &DAT_024e89d0;
  unaff_RDI[0x28] = &DAT_024e8a10;
  unaff_RDI[0x29] = &DAT_024e8a60;
  unaff_RDI[0x2a] = &DAT_024e8a90;
  unaff_RDI[0xc0] = 0;
  lVar2 = FUN_0034d920();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005aece0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_detectionEditorView";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDSelectionController");
  }
  unaff_RDI[0xc1] = 0;
  lVar2 = FUN_0034d920();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005aedd0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDEditorViewAggregate");
  }
  *(undefined4 *)(unaff_RDI + 0xc2) = 0;
  lVar2 = FUN_0034d920();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005aeec0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x614) = 0;
  lVar2 = FUN_0034d920();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005af030();
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0xc3) = 0;
  lVar2 = FUN_0034d920();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027180b0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02718078 = FUN_0034d920();
        _DAT_02718070 = "_isQuantizeTimePreviewEnabled";
        _DAT_02718080 = 0;
        _DAT_02718088 = 0x6200;
        _DAT_02718090 = "bool";
        _DAT_02718098 = 0;
        uRam00000000027180a0 = 0;
        _DAT_027180a8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x619) = 0;
  lVar2 = FUN_0034d920();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027180f8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027180c0 = FUN_0034d920();
        _DAT_027180b8 = "_isCorrectPitchPreviewEnabled";
        _DAT_027180c8 = 0;
        _DAT_027180d0 = 0x6200;
        _DAT_027180d8 = "bool";
        _DAT_027180e0 = 0;
        uRam00000000027180e8 = 0;
        _DAT_027180f0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}



