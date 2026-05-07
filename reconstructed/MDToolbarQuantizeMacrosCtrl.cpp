// Reconstructed implementation of MDToolbarQuantizeMacrosCtrl
// From MikeCore binary — reverse-engineered pseudocode

#include "MDToolbarQuantizeMacrosCtrl.h"

// ============================================================
// @000fec10 — 685 bytes
// str: ""MDToolbarQuantizeMacrosCtrl""
// str: ""onSomethingChanged""
// str: ""onDetecionStateChanged""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000fec10(void)

{
  int iVar1;
  
  if (DAT_02803f18 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026db1d8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026db128 = FUN_00015ff0();
          _DAT_026db110 = "MDToolbarQuantizeMacrosCtrl";
          _DAT_026db118 = 0xa0;
          _DAT_026db120 = FUN_000ad610;
          _DAT_026db130 = 0;
          uRam00000000026db138 = 0;
          _DAT_026db140 = 0;
          uRam00000000026db148 = 0;
          _DAT_026db150 = 0;
          uRam00000000026db158 = 0;
          _DAT_026db160 = 0;
          uRam00000000026db168 = 0;
          _DAT_026db170 = 0;
          uRam00000000026db178 = 0;
          _DAT_026db180 = 0;
          uRam00000000026db188 = 0;
          _DAT_026db190 = 0;
          uRam00000000026db198 = 0;
          _DAT_026db1a0 = 0;
          uRam00000000026db1a8 = 0;
          _DAT_026db1b0 = 0;
          uRam00000000026db1b8 = 0;
          _DAT_026db1c0 = 0;
          uRam00000000026db1c8 = 0;
          _DAT_026db1d0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02803ed8 = "onSomethingChanged";
      _DAT_02803ee0 = &DAT_026db110;
      _DAT_02803ee8 = 0;
      _DAT_02803ef0 = &DAT_026e0f18;
      _DAT_02803ef8 = 0xfff00;
      _DAT_02803f00 = 0xff000;
      _DAT_02803f08 = 0;
      uRam0000000002803f10 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02803f60 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026db1d8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026db128 = FUN_00015ff0();
          _DAT_026db110 = "MDToolbarQuantizeMacrosCtrl";
          _DAT_026db118 = 0xa0;
          _DAT_026db120 = FUN_000ad610;
          _DAT_026db130 = 0;
          uRam00000000026db138 = 0;
          _DAT_026db140 = 0;
          uRam00000000026db148 = 0;
          _DAT_026db150 = 0;
          uRam00000000026db158 = 0;
          _DAT_026db160 = 0;
          uRam00000000026db168 = 0;
          _DAT_026db170 = 0;
          uRam00000000026db178 = 0;
          _DAT_026db180 = 0;
          uRam00000000026db188 = 0;
          _DAT_026db190 = 0;
          uRam00000000026db198 = 0;
          _DAT_026db1a0 = 0;
          uRam00000000026db1a8 = 0;
          _DAT_026db1b0 = 0;
          uRam00000000026db1b8 = 0;
          _DAT_026db1c0 = 0;
          uRam00000000026db1c8 = 0;
          _DAT_026db1d0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02803f20 = "onDetecionStateChanged";
      _DAT_02803f28 = &DAT_026db110;
      _DAT_02803f30 = 0;
      _DAT_02803f38 = &DAT_026e0f18;
      _DAT_02803f40 = 0xfff00;
      _DAT_02803f48 = FUN_000feee0;
      _DAT_02803f50 = 0;
      uRam0000000002803f58 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @000fdf90 — 589 bytes
// ============================================================

void FUN_000fdf90(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff40();
  *(undefined8 *)((longlong)unaff_RDI + 0x2f) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x37) = 0;
  unaff_RDI[4] = 0;
  unaff_RDI[5] = 0;
  unaff_RDI[8] = 0;
  unaff_RDI[9] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x49) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x51) = 0;
  unaff_RDI[0xe] = 0;
  unaff_RDI[0xf] = 0;
  unaff_RDI[0xc] = 0;
  unaff_RDI[0xd] = 0;
  *unaff_RDI = &DAT_025e4fa0;
  unaff_RDI[2] = &DAT_025e5360;
  unaff_RDI[3] = &DAT_025e5398;
  if (1 < DAT_02802630) {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*DAT_02572370)();
    unaff_RDI[0xf] = puVar3;
  }
  iVar2 = DAT_02802630;
  *(undefined1 *)(unaff_RDI + 0x10) = 0;
  unaff_RDI[0x1b] = 0;
  *(undefined1 *)(unaff_RDI + 0x1c) = 0;
  unaff_RDI[0x11] = 0;
  unaff_RDI[0x12] = 0;
  unaff_RDI[0x13] = 0;
  unaff_RDI[0x14] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0xa5) = 0;
  unaff_RDI[0x16] = 0;
  unaff_RDI[0x17] = 0;
  *(undefined2 *)(unaff_RDI + 0x18) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0xc4) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0xcc) = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0xd4) = 0;
  unaff_RDI[0x1d] = 0;
  unaff_RDI[0x1e] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0xf4) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0xfc) = 0;
  unaff_RDI[0x21] = 0;
  unaff_RDI[0x22] = 0;
  unaff_RDI[0x23] = 0;
  unaff_RDI[0x24] = 0;
  unaff_RDI[0x25] = 0;
  unaff_RDI[0x26] = 0;
  unaff_RDI[0x27] = 0;
  unaff_RDI[0x28] = 0;
  unaff_RDI[0x29] = 0;
  if (iVar2 < 2) {
    unaff_RDI[0x2a] = 0;
    unaff_RDI[0x2b] = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    pcVar1 = DAT_02572370;
    (*DAT_02572370)();
    unaff_RDI[0x29] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[0x2a] = 0;
    if (iVar2 < 2) {
      unaff_RDI[0x2b] = 0;
      unaff_RDI[0x2c] = 0;
      goto LAB_000fe1b9;
    }
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*pcVar1)();
    unaff_RDI[0x2a] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[0x2b] = 0;
    if (1 < iVar2) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      unaff_RDI[0x2b] = puVar3;
      iVar2 = DAT_02802630;
      unaff_RDI[0x2c] = 0;
      if (1 < iVar2) {
        puVar3 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = &DAT_02572358;
        (*pcVar1)();
        unaff_RDI[0x2c] = puVar3;
      }
      goto LAB_000fe1b9;
    }
  }
  unaff_RDI[0x2c] = 0;
LAB_000fe1b9:
  unaff_RDI[0x2d] = 0;
  unaff_RDI[0x2e] = 0;
  unaff_RDI[0x2f] = 0;
  return;
}



