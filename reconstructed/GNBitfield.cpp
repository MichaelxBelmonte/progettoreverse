// Reconstructed implementation of GNBitfield
// From MikeCore binary — reverse-engineered pseudocode

#include "GNBitfield.h"

// ============================================================
// @0002f270 — 519 bytes
// ============================================================

void FUN_0002f270(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff40();
  *unaff_RDI = &DAT_02567a20;
  unaff_RDI[2] = 0;
  unaff_RDI[3] = 0;
  unaff_RDI[4] = 0;
  unaff_RDI[5] = 0;
  iVar2 = DAT_02802630;
  if (DAT_02802630 < 2) {
    unaff_RDI[6] = 0;
    unaff_RDI[7] = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    pcVar1 = DAT_02572370;
    (*DAT_02572370)();
    unaff_RDI[5] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[6] = 0;
    if (iVar2 < 2) {
      unaff_RDI[7] = 0;
      unaff_RDI[8] = 0;
      goto LAB_0002f3e2;
    }
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*pcVar1)();
    unaff_RDI[6] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[7] = 0;
    if (1 < iVar2) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      unaff_RDI[7] = puVar3;
      iVar2 = DAT_02802630;
      unaff_RDI[8] = 0;
      if (1 < iVar2) {
        puVar3 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = &DAT_02572358;
        (*pcVar1)();
        unaff_RDI[8] = puVar3;
        iVar2 = DAT_02802630;
      }
      goto LAB_0002f3e2;
    }
  }
  unaff_RDI[8] = 0;
LAB_0002f3e2:
  *(undefined2 *)(unaff_RDI + 9) = 0;
  unaff_RDI[0xb] = 0;
  unaff_RDI[0xc] = 0;
  unaff_RDI[0xd] = 0;
  unaff_RDI[0xe] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x71) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x79) = 0;
  unaff_RDI[0x11] = 0;
  unaff_RDI[0x12] = 0;
  unaff_RDI[0x13] = 0;
  unaff_RDI[0x14] = 0;
  unaff_RDI[0x15] = 0;
  unaff_RDI[0x16] = 0;
  unaff_RDI[0x17] = 0;
  unaff_RDI[0x18] = 0;
  unaff_RDI[0x19] = 0;
  unaff_RDI[0x1a] = 0;
  if (1 < iVar2) {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*DAT_02572370)();
    unaff_RDI[0x1a] = puVar3;
  }
  return;
}




// ============================================================
// @0002ecf0 — 517 bytes
// str: ""GNBitfield""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002ecf0(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_0258caf8;
  unaff_RDI[2] = 0;
  if (DAT_026cf760 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026cf6b0 = FUN_00d4fe50();
      _DAT_026cf698 = "GNBitfield";
      _DAT_026cf6a0 = 0x20;
      _DAT_026cf6a8 = FUN_0002eca0;
      _DAT_026cf6b8 = 0;
      uRam00000000026cf6c0 = 0;
      _DAT_026cf6c8 = 0;
      _DAT_026cf740 = 0;
      uRam00000000026cf748 = 0;
      _DAT_026cf750 = 0;
      DAT_026cf752 = 3;
      _DAT_026cf6d0 = 0;
      uRam00000000026cf6d8 = 0;
      _DAT_026cf6e0 = 0;
      uRam00000000026cf6e8 = 0;
      _DAT_026cf6f0 = 0;
      uRam00000000026cf6f8 = 0;
      _DAT_026cf700 = 0;
      uRam00000000026cf708 = 0;
      _DAT_026cf710 = 0;
      uRam00000000026cf718 = 0;
      _DAT_026cf720 = 0;
      uRam00000000026cf728 = 0;
      _DAT_026cf730 = 0;
      uRam00000000026cf738 = 0;
      DAT_026cf75b = 0;
      _DAT_026cf753 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026cf753 == '\0') {
    FUN_0002ef20();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 3) = 0;
  if (DAT_026cf760 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026cf6b0 = FUN_00d4fe50();
      _DAT_026cf698 = "GNBitfield";
      _DAT_026cf6a0 = 0x20;
      _DAT_026cf6a8 = FUN_0002eca0;
      _DAT_026cf6b8 = 0;
      uRam00000000026cf6c0 = 0;
      _DAT_026cf6c8 = 0;
      _DAT_026cf740 = 0;
      uRam00000000026cf748 = 0;
      _DAT_026cf750 = 0;
      DAT_026cf752 = 3;
      _DAT_026cf6d0 = 0;
      uRam00000000026cf6d8 = 0;
      _DAT_026cf6e0 = 0;
      uRam00000000026cf6e8 = 0;
      _DAT_026cf6f0 = 0;
      uRam00000000026cf6f8 = 0;
      _DAT_026cf700 = 0;
      uRam00000000026cf708 = 0;
      _DAT_026cf710 = 0;
      uRam00000000026cf718 = 0;
      _DAT_026cf720 = 0;
      uRam00000000026cf728 = 0;
      _DAT_026cf730 = 0;
      uRam00000000026cf738 = 0;
      DAT_026cf75b = 0;
      _DAT_026cf753 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026cf753 == '\0') {
    FUN_0002f0b0();
    FUN_00e87980();
  }
  return;
}



