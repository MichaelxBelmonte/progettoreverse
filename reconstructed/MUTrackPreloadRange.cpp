// Reconstructed implementation of MUTrackPreloadRange
// From MikeCore binary — reverse-engineered pseudocode

#include "MUTrackPreloadRange.h"

// ============================================================
// @011cd5a0 — 574 bytes
// str: ""MUTrackPreloadRange""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011cd5a0(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_026161f0;
  FUN_011cd840();
  FUN_011cdb70();
  unaff_RDI[4] = 0;
  unaff_RDI[5] = 0;
  if (DAT_027b85b8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027b8508 = FUN_00d4fe50();
      _DAT_027b84f0 = "MUTrackPreloadRange";
      _DAT_027b84f8 = 0x38;
      _DAT_027b8500 = FUN_011cd4b0;
      _DAT_027b8510 = 0;
      uRam00000000027b8518 = 0;
      _DAT_027b8520 = 0;
      _DAT_027b8598 = 0;
      uRam00000000027b85a0 = 0;
      _DAT_027b85a8 = 0;
      DAT_027b85aa = 3;
      _DAT_027b8528 = 0;
      uRam00000000027b8530 = 0;
      _DAT_027b8538 = 0;
      uRam00000000027b8540 = 0;
      _DAT_027b8548 = 0;
      uRam00000000027b8550 = 0;
      _DAT_027b8558 = 0;
      uRam00000000027b8560 = 0;
      _DAT_027b8568 = 0;
      uRam00000000027b8570 = 0;
      _DAT_027b8578 = 0;
      uRam00000000027b8580 = 0;
      _DAT_027b8588 = 0;
      uRam00000000027b8590 = 0;
      DAT_027b85b3 = 0;
      _DAT_027b85ab = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027b85ab == '\0') {
    FUN_011cdea0();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 6) = 0;
  if (DAT_027b85b8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027b8508 = FUN_00d4fe50();
      _DAT_027b84f0 = "MUTrackPreloadRange";
      _DAT_027b84f8 = 0x38;
      _DAT_027b8500 = FUN_011cd4b0;
      _DAT_027b8510 = 0;
      uRam00000000027b8518 = 0;
      _DAT_027b8520 = 0;
      _DAT_027b8598 = 0;
      uRam00000000027b85a0 = 0;
      _DAT_027b85a8 = 0;
      DAT_027b85aa = 3;
      _DAT_027b8528 = 0;
      uRam00000000027b8530 = 0;
      _DAT_027b8538 = 0;
      uRam00000000027b8540 = 0;
      _DAT_027b8548 = 0;
      uRam00000000027b8550 = 0;
      _DAT_027b8558 = 0;
      uRam00000000027b8560 = 0;
      _DAT_027b8568 = 0;
      uRam00000000027b8570 = 0;
      _DAT_027b8578 = 0;
      uRam00000000027b8580 = 0;
      _DAT_027b8588 = 0;
      uRam00000000027b8590 = 0;
      DAT_027b85b3 = 0;
      _DAT_027b85ab = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027b85ab == '\0') {
    FUN_011ce030();
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @011ce1f0 — 502 bytes
// ============================================================

void FUN_011ce1f0(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff40();
  *(undefined8 *)((longlong)unaff_RDI + 0x7c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x84) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x6c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x74) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x5c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 100) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x4c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x54) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x3c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x44) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x2c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x34) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x1c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x24) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0xc) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x14) = 0;
  *(undefined4 *)((longlong)unaff_RDI + 0x8c) = 0;
  unaff_RDI[0x12] = 0;
  unaff_RDI[0x13] = 0;
  unaff_RDI[0x14] = 0;
  unaff_RDI[0x15] = 0;
  unaff_RDI[0x16] = 0;
  unaff_RDI[0x17] = 0;
  unaff_RDI[0x18] = 0;
  unaff_RDI[0x19] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0xce) = 0;
  unaff_RDI[0x1b] = 0;
  unaff_RDI[0x1c] = 0;
  *unaff_RDI = &DAT_025d6a08;
  unaff_RDI[0x1d] = 0;
  unaff_RDI[0x1e] = 0;
  unaff_RDI[0x1f] = 0;
  if (1 < DAT_02802630) {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*DAT_02572370)();
    unaff_RDI[0x1f] = puVar3;
  }
  iVar2 = DAT_02802630;
  unaff_RDI[0x24] = 0;
  unaff_RDI[0x25] = 0;
  unaff_RDI[0x22] = 0;
  unaff_RDI[0x23] = 0;
  unaff_RDI[0x20] = 0;
  unaff_RDI[0x21] = 0;
  if (1 < iVar2) {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*DAT_02572370)();
    unaff_RDI[0x25] = puVar3;
    iVar2 = DAT_02802630;
  }
  unaff_RDI[0x26] = 0;
  *(undefined4 *)(unaff_RDI + 0x27) = 0;
  unaff_RDI[0x28] = 0;
  if (iVar2 < 2) {
    unaff_RDI[0x29] = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    pcVar1 = DAT_02572370;
    (*DAT_02572370)();
    unaff_RDI[0x28] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[0x29] = 0;
    if (1 < iVar2) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      unaff_RDI[0x29] = puVar3;
    }
  }
  *(undefined4 *)(unaff_RDI + 0x2e) = 0;
  unaff_RDI[0x2f] = 0;
  unaff_RDI[0x2a] = 0;
  unaff_RDI[0x2b] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x15d) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x165) = 0;
  return;
}



