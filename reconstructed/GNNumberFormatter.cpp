// Reconstructed implementation of GNNumberFormatter
// From MikeCore binary — reverse-engineered pseudocode

#include "GNNumberFormatter.h"

// ============================================================
// @00826d80 — 663 bytes
// str: ""GNNumberFormatter""
// str: ""MUTextField""
// str: ""MUTextFieldDragAndEditHandler""
// str: ""_steps""
// str: ""GNInt""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00826d80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_008258e0();
  *unaff_RDI = &DAT_026603e8;
  unaff_RDI[0x17] = &DAT_02660a98;
  FUN_00825bb0();
  FUN_00825ee0();
  unaff_RDI[0x1c] = &DAT_0264a7b8;
  if (DAT_027323d0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0271fb70 = "MUTextFieldDragAndEditHandler";
      DAT_0271fb80 = 0;
      _DAT_0271fb78 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_0265fc80;
  unaff_RDI[0x17] = &DAT_02660350;
  unaff_RDI[0x1c] = &DAT_026603a0;
  unaff_RDI[0x1d] = 0;
  lVar2 = FUN_00826b20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00827140();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTextField");
  }
  puVar4 = unaff_RDI + 0x1e;
  unaff_RDI[0x1e] = 0;
  lVar2 = FUN_00826b20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00827230();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNNumberFormatter",param_3,param_4,puVar4);
  }
  FUN_00827320();
  *(undefined4 *)(unaff_RDI + 0x20) = 0;
  lVar2 = FUN_00826b20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027324f0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027324b8 = FUN_00826b20();
        _DAT_027324b0 = "_steps";
        _DAT_027324c0 = 0;
        _DAT_027324c8 = 0x6900;
        _DAT_027324d0 = "GNInt";
        _DAT_027324d8 = 0;
        uRam00000000027324e0 = 0;
        _DAT_027324e8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}



