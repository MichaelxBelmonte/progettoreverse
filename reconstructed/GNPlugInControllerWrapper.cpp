// Reconstructed implementation of GNPlugInControllerWrapper
// From MikeCore binary — reverse-engineered pseudocode

#include "GNPlugInControllerWrapper.h"

// ============================================================
// @000030f0 — 612 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00003192) */
/* WARNING: Removing unreachable block (ram,0x0000319e) */
/* WARNING: Removing unreachable block (ram,0x00003203) */
/* WARNING: Removing unreachable block (ram,0x0000320c) */

void FUN_000030f0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  undefined4 local_34;
  
  FUN_01f282c0();
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_00005410();
  (**(code **)(*plVar3 + 0x18))();
  uVar4 = (**(code **)(*plVar3 + 0x4c8))();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_00003168;
    }
  }
  else if (local_48 != 0) {
LAB_00003168:
    FUN_00d6f2a0();
    local_34 = 0;
    goto LAB_000031b1;
  }
  local_34 = (undefined4)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
LAB_000031b1:
  FUN_00d6f370();
  lVar2 = local_48;
  if ((((local_40 == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40 != '\0')) &&
     (local_48 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d32c80();
  FUN_00df2e00();
  FUN_00e36330();
  FUN_00e36840();
  FUN_00e36990();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar3 + 0x460))();
  FUN_00d403d0();
  lVar1 = DAT_026cb120;
  if (DAT_026cb120 != 0) {
    FUN_00d50b00();
  }
  local_60 = '\0';
  local_58 = 0;
  local_50 = '\0';
  local_68 = plVar3;
  FUN_00d40470(&local_58,&local_68,1,3);
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((char)local_34 == '\0') {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @00003ae0 — 534 bytes
// str: ""GNPlugInControllerWrapper""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00003c06) */
/* WARNING: Removing unreachable block (ram,0x00003c14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003ae0(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_38;
  longlong local_30;
  
  if ((DAT_026cc3d0 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_026cc320 = FUN_00d4fe50();
    _DAT_026cc308 = "GNPlugInControllerWrapper";
    _DAT_026cc310 = 0x38;
    _DAT_026cc318 = FUN_0000e470;
    _DAT_026cc328 = 0;
    uRam00000000026cc330 = 0;
    _DAT_026cc338 = 0;
    _DAT_026cc3b0 = 0;
    uRam00000000026cc3b8 = 0;
    _DAT_026cc3c0 = 0;
    DAT_026cc3c2 = 1;
    _DAT_026cc340 = 0;
    uRam00000000026cc348 = 0;
    _DAT_026cc350 = 0;
    uRam00000000026cc358 = 0;
    _DAT_026cc360 = 0;
    uRam00000000026cc368 = 0;
    _DAT_026cc370 = 0;
    uRam00000000026cc378 = 0;
    _DAT_026cc380 = 0;
    uRam00000000026cc388 = 0;
    _DAT_026cc390 = 0;
    uRam00000000026cc398 = 0;
    _DAT_026cc3a0 = 0;
    uRam00000000026cc3a8 = 0;
    DAT_026cc3cb = 0;
    _DAT_026cc3c3 = 0;
    ___cxa_guard_release();
  }
  if (DAT_026cc3c3 == '\0') {
    FUN_000064f0();
    FUN_00e87760();
    FUN_00d4ff40();
    FUN_00d50c00();
    FUN_00d4ff80();
    FUN_0000e4c0();
    FUN_0000e7e0();
    FUN_0000eb10();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_30 != 0) {
      FUN_00d50b20();
    }
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
    FUN_00d4ffa0();
  }
  return;
}




// ============================================================
// @00005710 — 511 bytes
// ============================================================

void FUN_00005710(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff40();
  *(undefined1 *)((longlong)unaff_RDI + 0xc) = 0;
  *unaff_RDI = &DAT_026b98e8;
  unaff_RDI[2] = &DAT_026ba010;
  unaff_RDI[3] = 0;
  if (1 < DAT_02802630) {
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &DAT_02572358;
    (*DAT_02572370)();
    unaff_RDI[3] = puVar2;
  }
  iVar1 = DAT_02802630;
  *(undefined4 *)(unaff_RDI + 4) = 0;
  unaff_RDI[5] = 0;
  unaff_RDI[6] = 0;
  unaff_RDI[7] = 0;
  if (1 < iVar1) {
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &DAT_02572358;
    (*DAT_02572370)();
    unaff_RDI[7] = puVar2;
    iVar1 = DAT_02802630;
  }
  unaff_RDI[0xc] = 0;
  unaff_RDI[0xd] = 0;
  unaff_RDI[10] = 0;
  unaff_RDI[0xb] = 0;
  unaff_RDI[8] = 0;
  unaff_RDI[9] = 0;
  if (1 < iVar1) {
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &DAT_02572358;
    (*DAT_02572370)();
    unaff_RDI[0xd] = puVar2;
    iVar1 = DAT_02802630;
  }
  unaff_RDI[0xe] = 0;
  *(undefined1 *)(unaff_RDI + 0xf) = 0;
  *(undefined4 *)((longlong)unaff_RDI + 0x7c) = 0;
  unaff_RDI[0x10] = 0;
  if (1 < iVar1) {
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &DAT_02572358;
    (*DAT_02572370)();
    unaff_RDI[0x10] = puVar2;
    iVar1 = DAT_02802630;
  }
  unaff_RDI[0x13] = 0;
  unaff_RDI[0x14] = 0;
  unaff_RDI[0x11] = 0;
  unaff_RDI[0x12] = 0;
  if (1 < iVar1) {
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &DAT_02572358;
    (*DAT_02572370)();
    unaff_RDI[0x14] = puVar2;
  }
  unaff_RDI[0x17] = 0;
  unaff_RDI[0x18] = 0;
  unaff_RDI[0x15] = 0;
  unaff_RDI[0x16] = 0;
  *(undefined4 *)((longlong)unaff_RDI + 199) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0xdc) = 0;
  *(undefined1 *)((longlong)unaff_RDI + 0xe4) = 0;
  unaff_RDI[0x1d] = 0;
  unaff_RDI[0x1e] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0xf6) = 0;
  return;
}



