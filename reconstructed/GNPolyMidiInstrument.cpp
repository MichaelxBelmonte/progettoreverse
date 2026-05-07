// Reconstructed implementation of GNPolyMidiInstrument
// From MikeCore binary — reverse-engineered pseudocode

#include "GNPolyMidiInstrument.h"

// ============================================================
// @00b10c00 — 592 bytes
// str: ""GNPolyMidiInstrument""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b10c00(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *unaff_RDI;
  
  FUN_005fea00();
  *unaff_RDI = &DAT_0253c2f8;
  *(undefined4 *)(unaff_RDI + 0x12) = 0;
  lVar2 = FUN_00b0c680();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00b0c8a0();
    FUN_00e87980();
  }
  *unaff_RDI = &DAT_0253f450;
  FUN_00b10ec0();
  *(undefined4 *)(unaff_RDI + 0x14) = 0;
  if (DAT_0275bfb0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0275bf00 = FUN_00b0c680();
      _DAT_0275bee8 = "GNPolyMidiInstrument";
      _DAT_0275bef0 = 0xb8;
      _DAT_0275bef8 = FUN_00b10b10;
      _DAT_0275bf08 = 0;
      uRam000000000275bf10 = 0;
      _DAT_0275bf18 = 0;
      uRam000000000275bf20 = 0;
      _DAT_0275bf28 = 0;
      uRam000000000275bf30 = 0;
      _DAT_0275bf38 = 0;
      uRam000000000275bf40 = 0;
      _DAT_0275bf48 = 0;
      uRam000000000275bf50 = 0;
      _DAT_0275bf58 = 0;
      uRam000000000275bf60 = 0;
      _DAT_0275bf68 = 0;
      uRam000000000275bf70 = 0;
      _DAT_0275bf78 = 0;
      uRam000000000275bf80 = 0;
      _DAT_0275bf88 = 0;
      uRam000000000275bf90 = 0;
      _DAT_0275bf98 = 0;
      _uRam000000000275bfa0 = 0;
      _DAT_0275bfa8 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0275bfa3 == '\0') {
    FUN_00b111b0();
    FUN_00e87980();
  }
  FUN_00b11320();
  *(undefined1 *)(unaff_RDI + 0x16) = 0;
  if (DAT_0275bfb0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0275bf00 = FUN_00b0c680();
      _DAT_0275bee8 = "GNPolyMidiInstrument";
      _DAT_0275bef0 = 0xb8;
      _DAT_0275bef8 = FUN_00b10b10;
      _DAT_0275bf08 = 0;
      uRam000000000275bf10 = 0;
      _DAT_0275bf18 = 0;
      uRam000000000275bf20 = 0;
      _DAT_0275bf28 = 0;
      uRam000000000275bf30 = 0;
      _DAT_0275bf38 = 0;
      uRam000000000275bf40 = 0;
      _DAT_0275bf48 = 0;
      uRam000000000275bf50 = 0;
      _DAT_0275bf58 = 0;
      uRam000000000275bf60 = 0;
      _DAT_0275bf68 = 0;
      uRam000000000275bf70 = 0;
      _DAT_0275bf78 = 0;
      uRam000000000275bf80 = 0;
      _DAT_0275bf88 = 0;
      uRam000000000275bf90 = 0;
      _DAT_0275bf98 = 0;
      _uRam000000000275bfa0 = 0;
      _DAT_0275bfa8 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0275bfa3 == '\0') {
    FUN_00b115a0();
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @00af4470 — 580 bytes
// str: ""GNPolyMidiInstrument""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00af45df) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00af4470(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_f0;
  longlong local_e0;
  undefined8 *local_38;
  
  if ((DAT_0275bfb0 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_0275bf00 = FUN_00b0c680();
    _DAT_0275bee8 = "GNPolyMidiInstrument";
    _DAT_0275bef0 = 0xb8;
    _DAT_0275bef8 = FUN_00b10b10;
    _DAT_0275bf08 = 0;
    uRam000000000275bf10 = 0;
    _DAT_0275bf18 = 0;
    uRam000000000275bf20 = 0;
    _DAT_0275bf28 = 0;
    uRam000000000275bf30 = 0;
    _DAT_0275bf38 = 0;
    uRam000000000275bf40 = 0;
    _DAT_0275bf48 = 0;
    uRam000000000275bf50 = 0;
    _DAT_0275bf58 = 0;
    uRam000000000275bf60 = 0;
    _DAT_0275bf68 = 0;
    uRam000000000275bf70 = 0;
    _DAT_0275bf78 = 0;
    uRam000000000275bf80 = 0;
    _DAT_0275bf88 = 0;
    uRam000000000275bf90 = 0;
    _DAT_0275bf98 = 0;
    _uRam000000000275bfa0 = 0;
    _DAT_0275bfa8 = 0;
    ___cxa_guard_release();
  }
  if (DAT_0275bfa3 == '\0') {
    FUN_00af30e0();
    FUN_00e87760();
    FUN_00d4ff40();
    local_38 = (undefined8 *)0x0;
    if (1 < DAT_02802630) {
      local_38 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_38 = &DAT_02572358;
      (*DAT_02572370)();
    }
    FUN_00d50c00();
    FUN_00b10c00();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_e0 != 0) {
      FUN_00d50b20();
    }
    if (local_f0 != 0) {
      FUN_00d50b20();
    }
    FUN_00013900();
    if (local_38 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    FUN_00013900();
  }
  return;
}



