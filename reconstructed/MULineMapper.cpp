// Reconstructed implementation of MULineMapper
// From MikeCore binary — reverse-engineered pseudocode

#include "MULineMapper.h"

// ============================================================
// @01152d90 — 1120 bytes
// ============================================================

void FUN_01152d90(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff40();
  *(undefined4 *)(unaff_RDI + 7) = 0;
  *unaff_RDI = &DAT_026043c0;
  *(undefined1 *)((longlong)unaff_RDI + 0x3c) = 0;
  unaff_RDI[0xd] = 0;
  unaff_RDI[8] = 0;
  unaff_RDI[9] = 0;
  unaff_RDI[10] = 0;
  unaff_RDI[0xb] = 0;
  *(undefined4 *)(unaff_RDI + 0xc) = 0;
  iVar2 = DAT_02802630;
  if (DAT_02802630 < 2) {
    unaff_RDI[0xe] = 0;
    unaff_RDI[0xf] = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    pcVar1 = DAT_02572370;
    (*DAT_02572370)();
    unaff_RDI[0xd] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[0xe] = 0;
    if (iVar2 < 2) {
      unaff_RDI[0xf] = 0;
    }
    else {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      unaff_RDI[0xe] = puVar3;
      iVar2 = DAT_02802630;
      unaff_RDI[0xf] = 0;
      if (1 < iVar2) {
        puVar3 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = &DAT_02572358;
        (*DAT_02572370)();
        unaff_RDI[0xf] = puVar3;
        iVar2 = DAT_02802630;
      }
    }
  }
  unaff_RDI[0x16] = 0;
  unaff_RDI[0x17] = 0;
  unaff_RDI[0x14] = 0;
  unaff_RDI[0x15] = 0;
  unaff_RDI[0x12] = 0;
  unaff_RDI[0x13] = 0;
  unaff_RDI[0x10] = 0;
  unaff_RDI[0x11] = 0;
  unaff_RDI[0x18] = 0;
  if (iVar2 < 2) {
    unaff_RDI[0x19] = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    pcVar1 = DAT_02572370;
    (*DAT_02572370)();
    unaff_RDI[0x18] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[0x19] = 0;
    if (1 < iVar2) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      unaff_RDI[0x19] = puVar3;
      iVar2 = DAT_02802630;
    }
  }
  *(undefined4 *)(unaff_RDI + 0x1e) = 0;
  unaff_RDI[0x1a] = 0;
  unaff_RDI[0x1b] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0xdd) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0xe5) = 0;
  unaff_RDI[0x1f] = 0;
  unaff_RDI[0x20] = 0;
  if (iVar2 < 2) {
    unaff_RDI[0x21] = 0;
    unaff_RDI[0x22] = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    pcVar1 = DAT_02572370;
    (*DAT_02572370)();
    unaff_RDI[0x20] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[0x21] = 0;
    if (iVar2 < 2) {
      unaff_RDI[0x22] = 0;
      unaff_RDI[0x23] = 0;
      unaff_RDI[0x24] = 0;
      goto joined_r0x01153189;
    }
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*pcVar1)();
    unaff_RDI[0x21] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[0x22] = 0;
    if (1 < iVar2) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*DAT_02572370)();
      unaff_RDI[0x22] = puVar3;
      iVar2 = DAT_02802630;
      unaff_RDI[0x23] = 0;
      unaff_RDI[0x24] = 0;
      goto joined_r0x01153189;
    }
  }
  unaff_RDI[0x23] = 0;
  unaff_RDI[0x24] = 0;
joined_r0x01153189:
  if (iVar2 < 2) {
    unaff_RDI[0x25] = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    pcVar1 = DAT_02572370;
    (*DAT_02572370)();
    unaff_RDI[0x24] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[0x25] = 0;
    if (1 < iVar2) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      unaff_RDI[0x25] = puVar3;
    }
  }
  *(undefined4 *)(unaff_RDI + 0x26) = 0;
  *(undefined4 *)(unaff_RDI + 0x2c) = 0;
  unaff_RDI[0x27] = 0;
  unaff_RDI[0x28] = 0;
  unaff_RDI[0x29] = 0;
  unaff_RDI[0x2a] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x157) = 0;
  unaff_RDI[0x2d] = 0;
  unaff_RDI[0x2e] = 0;
  *(undefined4 *)(unaff_RDI + 0x2f) = 0;
  return;
}




// ============================================================
// @01152660 — 522 bytes
// str: ""MULineMapper""
// str: ""MULineMapperTimeScope""
// str: ""_timeScope""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_01152660(void)

{
  int iVar1;
  
  if (DAT_027a0298 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027a0288 = 0x100000000;
      DAT_027a0290 = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_027a02d0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027a02a0 = "MULineMapperTimeScope";
      _DAT_027a02a8 = 2;
      DAT_027a02ac = DAT_027a0290;
      _DAT_027a02b0 = &DAT_027a0288;
      _DAT_027a02b8 = &DAT_027a0270;
      _DAT_027a02c0 = 0;
      uRam00000000027a02c8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_027a0260 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027e0350 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0279fee8 = FUN_01151de0();
          _DAT_0279fed0 = "MULineMapper";
          _DAT_0279fed8 = 0x58;
          _DAT_0279fee0 = FUN_01151d20;
          _DAT_0279fef0 = 0;
          uRam000000000279fef8 = 0;
          _DAT_0279ff00 = 0;
          uRam000000000279ff08 = 0;
          _DAT_0279ff10 = 0;
          uRam000000000279ff18 = 0;
          _DAT_0279ff20 = 0;
          uRam000000000279ff28 = 0;
          _DAT_0279ff30 = 0;
          uRam000000000279ff38 = 0;
          _DAT_0279ff40 = 0;
          uRam000000000279ff48 = 0;
          _DAT_0279ff50 = 0;
          uRam000000000279ff58 = 0;
          _DAT_0279ff60 = 0;
          uRam000000000279ff68 = 0;
          _DAT_0279ff70 = 0;
          uRam000000000279ff78 = 0;
          _DAT_0279ff80 = 0;
          uRam000000000279ff88 = 0;
          _DAT_0279ff90 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_027a0220 = "_timeScope";
      _DAT_027a0228 = &DAT_0279fed0;
      _DAT_027a0230 = 0;
      _DAT_027a0238 = 0x6500;
      _DAT_027a0240 = "MULineMapperTimeScope";
      _DAT_027a0248 = &DAT_027a02a0;
      _DAT_027a0250 = 0;
      uRam00000000027a0258 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_027a0220;
}



