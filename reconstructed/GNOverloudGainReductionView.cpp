// Reconstructed implementation of GNOverloudGainReductionView
// From MikeCore binary — reverse-engineered pseudocode

#include "GNOverloudGainReductionView.h"

// ============================================================
// @00c02550 — 3294 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00c02d60) */
/* WARNING: Removing unreachable block (ram,0x00c02d69) */
/* WARNING: Removing unreachable block (ram,0x00c0317e) */
/* WARNING: Removing unreachable block (ram,0x00c03187) */
/* WARNING: Removing unreachable block (ram,0x00c030de) */
/* WARNING: Removing unreachable block (ram,0x00c030e7) */
/* WARNING: Removing unreachable block (ram,0x00c0303e) */
/* WARNING: Removing unreachable block (ram,0x00c03047) */
/* WARNING: Removing unreachable block (ram,0x00c02f9e) */
/* WARNING: Removing unreachable block (ram,0x00c02fa7) */
/* WARNING: Removing unreachable block (ram,0x00c02efe) */
/* WARNING: Removing unreachable block (ram,0x00c02f07) */
/* WARNING: Removing unreachable block (ram,0x00c02e5e) */
/* WARNING: Removing unreachable block (ram,0x00c02e67) */
/* WARNING: Removing unreachable block (ram,0x00c02eae) */
/* WARNING: Removing unreachable block (ram,0x00c02eb7) */
/* WARNING: Removing unreachable block (ram,0x00c02f4e) */
/* WARNING: Removing unreachable block (ram,0x00c02f57) */
/* WARNING: Removing unreachable block (ram,0x00c02fee) */
/* WARNING: Removing unreachable block (ram,0x00c02ff7) */
/* WARNING: Removing unreachable block (ram,0x00c0308e) */
/* WARNING: Removing unreachable block (ram,0x00c03097) */
/* WARNING: Removing unreachable block (ram,0x00c0312e) */
/* WARNING: Removing unreachable block (ram,0x00c03137) */
/* WARNING: Removing unreachable block (ram,0x00c031ce) */
/* WARNING: Removing unreachable block (ram,0x00c031d7) */
/* WARNING: Removing unreachable block (ram,0x00c02c62) */
/* WARNING: Removing unreachable block (ram,0x00c02c6b) */
/* WARNING: Removing unreachable block (ram,0x00c02b72) */
/* WARNING: Removing unreachable block (ram,0x00c02b7b) */
/* WARNING: Removing unreachable block (ram,0x00c02ad2) */
/* WARNING: Removing unreachable block (ram,0x00c02adb) */
/* WARNING: Removing unreachable block (ram,0x00c02a32) */
/* WARNING: Removing unreachable block (ram,0x00c02a3b) */
/* WARNING: Removing unreachable block (ram,0x00c02992) */
/* WARNING: Removing unreachable block (ram,0x00c0299b) */
/* WARNING: Removing unreachable block (ram,0x00c028f2) */
/* WARNING: Removing unreachable block (ram,0x00c028fb) */
/* WARNING: Removing unreachable block (ram,0x00c02852) */
/* WARNING: Removing unreachable block (ram,0x00c0285b) */
/* WARNING: Removing unreachable block (ram,0x00c027b2) */
/* WARNING: Removing unreachable block (ram,0x00c027bb) */
/* WARNING: Removing unreachable block (ram,0x00c02802) */
/* WARNING: Removing unreachable block (ram,0x00c0280b) */
/* WARNING: Removing unreachable block (ram,0x00c028a2) */
/* WARNING: Removing unreachable block (ram,0x00c028ab) */
/* WARNING: Removing unreachable block (ram,0x00c029e2) */
/* WARNING: Removing unreachable block (ram,0x00c029eb) */
/* WARNING: Removing unreachable block (ram,0x00c02a82) */
/* WARNING: Removing unreachable block (ram,0x00c02a8b) */
/* WARNING: Removing unreachable block (ram,0x00c02b22) */
/* WARNING: Removing unreachable block (ram,0x00c02b2b) */
/* WARNING: Removing unreachable block (ram,0x00c02bc2) */
/* WARNING: Removing unreachable block (ram,0x00c02bcb) */
/* WARNING: Removing unreachable block (ram,0x00c02d10) */
/* WARNING: Removing unreachable block (ram,0x00c02d19) */
/* WARNING: Removing unreachable block (ram,0x00c02db0) */
/* WARNING: Removing unreachable block (ram,0x00c02db9) */
/* WARNING: Removing unreachable block (ram,0x00c02942) */
/* WARNING: Removing unreachable block (ram,0x00c0294b) */
/* WARNING: Removing unreachable block (ram,0x00c02c12) */
/* WARNING: Removing unreachable block (ram,0x00c02c1b) */

void FUN_00c02550(undefined8 param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *unaff_RDI;
  bool bVar6;
  
  puVar4 = DAT_028a5bb8;
  puVar3 = DAT_028a5ba8;
  puVar5 = DAT_028a5b98;
  if (param_2 == 10) {
    if ((DAT_028a5bb8 == (undefined8 *)0x0) || (DAT_028a5bc1 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a5bb8 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028a5bb8 == puVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = DAT_028a5bb8 != (undefined8 *)0x0;
          DAT_028a5bb8 = puVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a5bc0 == '\0') {
          DAT_028a5bc0 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = DAT_027bed58;
        if (DAT_027bed58 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c090;
        if (DAT_0276c090 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c098;
        if (DAT_0276c098 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        DAT_028a5bc1 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a5bc1 = '\x01';
        FUN_00e8cb70();
      }
      puVar5 = DAT_028a5bb8;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (puVar5 == (undefined8 *)0x0) goto LAB_00c03214;
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      puVar5 = puVar4;
    }
    FUN_00d50b00();
    goto LAB_00c03216;
  }
  if (param_2 == 5) {
    if ((DAT_028a5ba8 == (undefined8 *)0x0) || (DAT_028a5bb1 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a5ba8 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028a5ba8 == puVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = DAT_028a5ba8 != (undefined8 *)0x0;
          DAT_028a5ba8 = puVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a5bb0 == '\0') {
          DAT_028a5bb0 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = DAT_026d7d48;
        if (DAT_026d7d48 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c008;
        if (DAT_0276c008 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c010;
        if (DAT_0276c010 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c018;
        if (DAT_0276c018 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c020;
        if (DAT_0276c020 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_026d7d40;
        if (DAT_026d7d40 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c030;
        if (DAT_0276c030 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c038;
        if (DAT_0276c038 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c040;
        if (DAT_0276c040 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c048;
        if (DAT_0276c048 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c050;
        if (DAT_0276c050 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_026d7d38;
        if (DAT_026d7d38 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        DAT_028a5bb1 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a5bb1 = '\x01';
        FUN_00e8cb70();
      }
      puVar5 = DAT_028a5ba8;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (puVar5 == (undefined8 *)0x0) goto LAB_00c03214;
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      puVar5 = puVar3;
    }
    FUN_00d50b00();
  }
  else {
    if (param_2 != 1) {
      FUN_00b34370();
      return;
    }
    if ((DAT_028a5b98 == (undefined8 *)0x0) || (DAT_028a5ba1 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a5b98 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028a5b98 == puVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = DAT_028a5b98 != (undefined8 *)0x0;
          DAT_028a5b98 = puVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a5ba0 == '\0') {
          DAT_028a5ba0 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c008;
        if (DAT_0276c008 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c010;
        if (DAT_0276c010 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c018;
        if (DAT_0276c018 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c020;
        if (DAT_0276c020 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_026d7d40;
        if (DAT_026d7d40 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c030;
        if (DAT_0276c030 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c038;
        if (DAT_0276c038 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c040;
        if (DAT_0276c040 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c048;
        if (DAT_0276c048 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c050;
        if (DAT_0276c050 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_026d7d38;
        if (DAT_026d7d38 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c060;
        if (DAT_0276c060 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c068;
        if (DAT_0276c068 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c070;
        if (DAT_0276c070 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c078;
        if (DAT_0276c078 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c080;
        if (DAT_0276c080 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        DAT_028a5ba1 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a5ba1 = '\x01';
        FUN_00e8cb70();
      }
      puVar5 = DAT_028a5b98;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (puVar5 == (undefined8 *)0x0) {
LAB_00c03214:
        puVar5 = (undefined8 *)0x0;
        goto LAB_00c03216;
      }
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
    }
    FUN_00d50b00();
  }
LAB_00c03216:
  *unaff_RDI = puVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @00c0bcd0 — 2739 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00c0c581) */
/* WARNING: Removing unreachable block (ram,0x00c0c58a) */
/* WARNING: Removing unreachable block (ram,0x00c0c483) */
/* WARNING: Removing unreachable block (ram,0x00c0c48c) */
/* WARNING: Removing unreachable block (ram,0x00c0c393) */
/* WARNING: Removing unreachable block (ram,0x00c0c39c) */
/* WARNING: Removing unreachable block (ram,0x00c0c2f3) */
/* WARNING: Removing unreachable block (ram,0x00c0c2fc) */
/* WARNING: Removing unreachable block (ram,0x00c0c2a3) */
/* WARNING: Removing unreachable block (ram,0x00c0c2ac) */
/* WARNING: Removing unreachable block (ram,0x00c0c203) */
/* WARNING: Removing unreachable block (ram,0x00c0c20c) */
/* WARNING: Removing unreachable block (ram,0x00c0c113) */
/* WARNING: Removing unreachable block (ram,0x00c0c11c) */
/* WARNING: Removing unreachable block (ram,0x00c0c073) */
/* WARNING: Removing unreachable block (ram,0x00c0c07c) */
/* WARNING: Removing unreachable block (ram,0x00c0c023) */
/* WARNING: Removing unreachable block (ram,0x00c0c02c) */
/* WARNING: Removing unreachable block (ram,0x00c0bf83) */
/* WARNING: Removing unreachable block (ram,0x00c0bf8c) */
/* WARNING: Removing unreachable block (ram,0x00c0bf33) */
/* WARNING: Removing unreachable block (ram,0x00c0bf3c) */
/* WARNING: Removing unreachable block (ram,0x00c0bfd3) */
/* WARNING: Removing unreachable block (ram,0x00c0bfdc) */
/* WARNING: Removing unreachable block (ram,0x00c0c0c3) */
/* WARNING: Removing unreachable block (ram,0x00c0c0cc) */
/* WARNING: Removing unreachable block (ram,0x00c0c163) */
/* WARNING: Removing unreachable block (ram,0x00c0c16c) */
/* WARNING: Removing unreachable block (ram,0x00c0c1b3) */
/* WARNING: Removing unreachable block (ram,0x00c0c1bc) */
/* WARNING: Removing unreachable block (ram,0x00c0c253) */
/* WARNING: Removing unreachable block (ram,0x00c0c25c) */
/* WARNING: Removing unreachable block (ram,0x00c0c343) */
/* WARNING: Removing unreachable block (ram,0x00c0c34c) */
/* WARNING: Removing unreachable block (ram,0x00c0c3e3) */
/* WARNING: Removing unreachable block (ram,0x00c0c3ec) */
/* WARNING: Removing unreachable block (ram,0x00c0c433) */
/* WARNING: Removing unreachable block (ram,0x00c0c43c) */
/* WARNING: Removing unreachable block (ram,0x00c0c4d3) */
/* WARNING: Removing unreachable block (ram,0x00c0c4dc) */
/* WARNING: Removing unreachable block (ram,0x00c0c6cf) */
/* WARNING: Removing unreachable block (ram,0x00c0c6d8) */
/* WARNING: Removing unreachable block (ram,0x00c0c67f) */
/* WARNING: Removing unreachable block (ram,0x00c0c688) */
/* WARNING: Removing unreachable block (ram,0x00c0c71f) */
/* WARNING: Removing unreachable block (ram,0x00c0c728) */
/* WARNING: Removing unreachable block (ram,0x00c0c5d1) */
/* WARNING: Removing unreachable block (ram,0x00c0c5da) */

void FUN_00c0bcd0(undefined8 param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *unaff_RDI;
  bool bVar6;
  
  puVar4 = DAT_028a5cc8;
  puVar3 = DAT_028a5cb8;
  puVar5 = DAT_028a5ca8;
  if (param_2 == 8) {
    if ((DAT_028a5cc8 == (undefined8 *)0x0) || (DAT_028a5cd1 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a5cc8 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028a5cc8 == puVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = DAT_028a5cc8 != (undefined8 *)0x0;
          DAT_028a5cc8 = puVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a5cd0 == '\0') {
          DAT_028a5cd0 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c268;
        if (DAT_0276c268 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c270;
        if (DAT_0276c270 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        DAT_028a5cd1 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a5cd1 = '\x01';
        FUN_00e8cb70();
      }
      puVar5 = DAT_028a5cc8;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (puVar5 == (undefined8 *)0x0) goto LAB_00c0c767;
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      puVar5 = puVar4;
    }
    FUN_00d50b00();
    goto LAB_00c0c769;
  }
  if (param_2 == 7) {
    if ((DAT_028a5cb8 == (undefined8 *)0x0) || (DAT_028a5cc1 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a5cb8 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028a5cb8 == puVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = DAT_028a5cb8 != (undefined8 *)0x0;
          DAT_028a5cb8 = puVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a5cc0 == '\0') {
          DAT_028a5cc0 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c250;
        if (DAT_0276c250 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c258;
        if (DAT_0276c258 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c260;
        if (DAT_0276c260 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        DAT_028a5cc1 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a5cc1 = '\x01';
        FUN_00e8cb70();
      }
      puVar5 = DAT_028a5cb8;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (puVar5 == (undefined8 *)0x0) goto LAB_00c0c767;
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      puVar5 = puVar3;
    }
    FUN_00d50b00();
  }
  else {
    if (param_2 != 2) {
      FUN_00b34370();
      return;
    }
    if ((DAT_028a5ca8 == (undefined8 *)0x0) || (DAT_028a5cb1 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a5ca8 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028a5ca8 == puVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = DAT_028a5ca8 != (undefined8 *)0x0;
          DAT_028a5ca8 = puVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a5cb0 == '\0') {
          DAT_028a5cb0 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c118;
        if (DAT_0276c118 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c120;
        if (DAT_0276c120 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c128;
        if (DAT_0276c128 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c130;
        if (DAT_0276c130 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c078;
        if (DAT_0276c078 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c070;
        if (DAT_0276c070 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c068;
        if (DAT_0276c068 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c060;
        if (DAT_0276c060 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_026d7d38;
        if (DAT_026d7d38 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c050;
        if (DAT_0276c050 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c048;
        if (DAT_0276c048 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c040;
        if (DAT_0276c040 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c038;
        if (DAT_0276c038 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c030;
        if (DAT_0276c030 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_026d7d40;
        if (DAT_026d7d40 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c020;
        if (DAT_0276c020 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c018;
        if (DAT_0276c018 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c010;
        if (DAT_0276c010 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c008;
        if (DAT_0276c008 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        DAT_028a5cb1 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a5cb1 = '\x01';
        FUN_00e8cb70();
      }
      puVar5 = DAT_028a5ca8;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (puVar5 == (undefined8 *)0x0) {
LAB_00c0c767:
        puVar5 = (undefined8 *)0x0;
        goto LAB_00c0c769;
      }
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
    }
    FUN_00d50b00();
  }
LAB_00c0c769:
  *unaff_RDI = puVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @00c0d750 — 2435 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00c0debf) */
/* WARNING: Removing unreachable block (ram,0x00c0decb) */

void FUN_00c0d750(double param_1,double param_2,double param_3,double param_4)

{
  double *pdVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined4 *puVar5;
  bool bVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  void *pvVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined8 in_R8;
  int iVar16;
  int iVar17;
  uint uVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  double dVar24;
  float fVar25;
  float fVar26;
  double in_XMM4_Qa;
  double local_80;
  int local_64;
  undefined8 *local_50;
  undefined8 *local_48;
  
  if ((in_XMM4_Qa != 0.0) || (NAN(in_XMM4_Qa))) {
    local_48 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *local_48 = &DAT_025683c0;
    pcVar7 = DAT_025683d8;
    (*DAT_025683d8)();
    FUN_00c92170();
    FUN_00c92160();
    local_50 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *local_50 = &DAT_025683c0;
    (*pcVar7)();
    FUN_00c92170();
    FUN_00c92160();
    local_80 = (param_2 * in_XMM4_Qa) / param_4;
    lVar14 = *(longlong *)(unaff_RDI + 200);
  }
  else {
    local_50 = (undefined8 *)0x0;
    local_48 = (undefined8 *)0x0;
    local_80 = 0.0;
    lVar14 = *(longlong *)(unaff_RDI + 200);
  }
  if ((lVar14 != 0) && (7 < (int)*(uint *)(lVar14 + 0x18))) {
    dVar24 = param_3 + param_4 + in_XMM4_Qa;
    uVar15 = *(uint *)(lVar14 + 0x18) >> 3;
    uVar13 = (ulonglong)(uVar15 - 1);
    if ((in_XMM4_Qa != 0.0) || (NAN(in_XMM4_Qa))) {
      pvVar12 = (void *)(ulonglong)(uVar15 * 4 - 4);
      lVar14 = *(longlong *)(lVar14 + 0x10);
      dVar3 = *(double *)(lVar14 + uVar13 * 8);
      uVar19 = SUB84(dVar3,0);
      uVar21 = (undefined4)((ulonglong)dVar3 >> 0x20);
      while( true ) {
        if ((param_3 <= dVar3) &&
           ((double)CONCAT44(uVar21,uVar19) <= dVar24 && dVar24 != (double)CONCAT44(uVar21,uVar19)))
        {
          if ((double)CONCAT44(uVar21,uVar19) <= param_3 + in_XMM4_Qa &&
              param_3 + in_XMM4_Qa != (double)CONCAT44(uVar21,uVar19)) {
            iVar9 = *(int *)(local_48 + 3);
            FUN_00c8e340(uVar19,1);
            puVar10 = (undefined8 *)local_48[2];
            _memmove(pvVar12,(void *)(longlong)iVar9,(size_t)in_R8);
            uVar2 = *(undefined8 *)(lVar14 + uVar13 * 8);
            *puVar10 = uVar2;
            lVar14 = *(longlong *)(*(longlong *)(unaff_RDI + 0xd0) + 0x10);
            iVar9 = *(int *)(local_50 + 3);
            FUN_00c8e340((int)uVar2,1);
            puVar5 = (undefined4 *)local_50[2];
            _memmove(pvVar12,(void *)(longlong)iVar9,(size_t)in_R8);
            *puVar5 = *(undefined4 *)(lVar14 + uVar13 * 4);
          }
          FUN_00e7b4e0();
          FUN_00c921e0();
          FUN_00e7b4e0();
          FUN_00c921e0();
        }
        if ((int)uVar13 < 1) break;
        uVar13 = uVar13 - 1;
        lVar14 = *(longlong *)(*(longlong *)(unaff_RDI + 200) + 0x10);
        dVar3 = *(double *)(lVar14 + uVar13 * 8);
        uVar19 = SUB84(dVar3,0);
        uVar21 = (undefined4)((ulonglong)dVar3 >> 0x20);
      }
    }
    else {
      dVar3 = *(double *)(*(longlong *)(lVar14 + 0x10) + uVar13 * 8);
      uVar19 = SUB84(dVar3,0);
      uVar21 = (undefined4)((ulonglong)dVar3 >> 0x20);
      while( true ) {
        if ((param_3 <= dVar3) &&
           ((double)CONCAT44(uVar21,uVar19) <= dVar24 && dVar24 != (double)CONCAT44(uVar21,uVar19)))
        {
          FUN_00e7b4e0();
          FUN_00c921e0();
          FUN_00e7b4e0();
          FUN_00c921e0();
        }
        if ((int)uVar13 < 1) break;
        uVar13 = uVar13 - 1;
        dVar3 = *(double *)(*(longlong *)(*(longlong *)(unaff_RDI + 200) + 0x10) + uVar13 * 8);
        uVar19 = SUB84(dVar3,0);
        uVar21 = (undefined4)((ulonglong)dVar3 >> 0x20);
      }
    }
  }
  lVar14 = *(longlong *)(*unaff_RSI + 200);
  if (lVar14 != 0) {
    iVar9 = *(int *)(lVar14 + 0x18);
    iVar8 = iVar9 + 7;
    if (-1 < iVar9) {
      iVar8 = iVar9;
    }
    if (iVar9 < 8) goto LAB_00c0dd5d;
    iVar9 = -1;
    uVar13 = 0;
    uVar15 = 0xffffffff;
    do {
      if ((iVar9 == -1) &&
         (iVar9 = -1, param_1 <= *(double *)(*(longlong *)(lVar14 + 0x10) + uVar13 * 8))) {
        iVar9 = (int)uVar13;
      }
      if ((uVar15 == 0xffffffff) &&
         (uVar15 = 0xffffffff,
         param_1 + param_2 + local_80 <= *(double *)(*(longlong *)(lVar14 + 0x10) + uVar13 * 8))) {
        uVar15 = (int)uVar13 - 1;
      }
      uVar13 = uVar13 + 1;
    } while ((uint)(iVar8 >> 3) != uVar13);
    if (iVar9 == -1) goto LAB_00c0dd5d;
    uVar18 = (iVar8 >> 3) - 1;
    if (uVar15 != 0xffffffff) {
      uVar18 = uVar15;
    }
    uVar13 = (ulonglong)uVar18;
    lVar14 = *(longlong *)(unaff_RDI + 200);
    if (lVar14 == 0) {
      puVar10 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar10 = &DAT_025683c0;
      pcVar7 = DAT_025683d8;
      (*DAT_025683d8)();
      FUN_00c92170();
      FUN_00c92160();
      lVar14 = *(longlong *)(unaff_RDI + 200);
      *(undefined8 **)(unaff_RDI + 200) = puVar10;
      if (lVar14 != 0) {
        FUN_00d50b20();
      }
      puVar10 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar10 = &DAT_025683c0;
      (*pcVar7)();
      FUN_00c92170();
      FUN_00c92160();
      lVar14 = *(longlong *)(unaff_RDI + 0xd0);
      *(undefined8 **)(unaff_RDI + 0xd0) = puVar10;
      if (lVar14 != 0) {
        FUN_00d50b20();
      }
      iVar8 = 0;
    }
    else {
      FUN_00d50b00();
      iVar8 = FUN_00e96fd0(SUB84(param_3,0));
      if (lVar14 != 0) {
        FUN_00d50b20();
      }
      iVar8 = iVar8 + 1;
    }
    if (iVar9 <= (int)uVar18) {
      lVar14 = (longlong)iVar9;
      iVar16 = iVar8 * 4;
      local_80._0_4_ = iVar8 * -4;
      iVar17 = iVar8 * 8;
      iVar8 = iVar8 * -8;
      local_64 = (uVar18 - iVar9) + 1;
      do {
        puVar10 = *(undefined8 **)(*(longlong *)(*unaff_RSI + 200) + 0x10);
        fVar25 = *(float *)(*(longlong *)(*(longlong *)(*unaff_RSI + 0xd0) + 0x10) + lVar14 * 4);
        dVar24 = (((double)puVar10[lVar14] - param_1) / param_2) * param_4 + param_3;
        fVar20 = SUB84(dVar24,0);
        fVar26 = fVar25;
        if ((((in_XMM4_Qa == DAT_02390448) && (!NAN(in_XMM4_Qa) && !NAN(DAT_02390448))) ||
            (*(int *)(local_48 + 3) + 7U < 0xf)) ||
           (fVar26 = SUB84(param_3 + in_XMM4_Qa,0), param_3 + in_XMM4_Qa <= dVar24))
        goto LAB_00c0e013;
        iVar9 = FUN_00e96fd0(fVar20);
        if (iVar9 == -1) {
          iVar9 = 0;
          if (dVar24 < *(double *)local_48[2]) goto LAB_00c0def0;
          uVar15 = *(uint *)(local_48 + 3);
          pdVar1 = (double *)((longlong)(int)uVar15 + -8 + (longlong)local_48[2]);
          puVar10 = local_48;
          fVar26 = fVar20;
          if (*pdVar1 <= dVar24 && dVar24 != *pdVar1) {
            uVar18 = uVar15;
            if ((int)uVar15 < 0) {
              uVar18 = uVar15 + 7;
            }
            if (0xe < uVar15 + 7) {
              iVar9 = ((int)uVar18 >> 3) + -1;
              goto LAB_00c0def0;
            }
          }
        }
        else {
LAB_00c0def0:
          if ((int)*(uint *)(local_48 + 3) < 0x10) {
            fVar26 = *(float *)local_50[2];
          }
          else {
            lVar11 = (longlong)
                     (int)(iVar9 - (uint)((int)((*(uint *)(local_48 + 3) >> 3) - 1) <= iVar9));
            dVar3 = *(double *)(local_48[2] + lVar11 * 8);
            dVar4 = *(double *)(local_48[2] + 8 + lVar11 * 8);
            puVar10 = (undefined8 *)local_50[2];
            fVar23 = *(float *)((longlong)puVar10 + lVar11 * 4);
            fVar26 = *(float *)((longlong)puVar10 + lVar11 * 4 + 4);
            fVar22 = fVar26 - fVar23;
            if (dVar24 <= (dVar3 + dVar4) * DAT_023942d0) {
              fVar26 = fVar23 + fVar22 * (float)((dVar24 - dVar3) / (dVar4 - dVar3));
            }
            else {
              fVar26 = fVar26 + fVar22 * (float)((dVar24 - dVar4) / (dVar4 - dVar3));
            }
          }
          fVar23 = (float)((dVar24 - param_3) / in_XMM4_Qa);
          fVar25 = fVar25 * fVar23 + (DAT_02390124 - fVar23) * fVar26;
        }
LAB_00c0e013:
        lVar11 = *(longlong *)(unaff_RDI + 200);
        iVar9 = *(int *)(lVar11 + 0x18);
        FUN_00c8e340(fVar26,1);
        lVar11 = *(longlong *)(lVar11 + 0x10);
        _memmove(puVar10,(void *)(longlong)(iVar9 + iVar8),(size_t)uVar13);
        *(double *)(lVar11 + iVar17) = dVar24;
        lVar11 = *(longlong *)(unaff_RDI + 0xd0);
        iVar9 = *(int *)(lVar11 + 0x18);
        FUN_00c8e340(fVar20,1);
        lVar11 = *(longlong *)(lVar11 + 0x10);
        _memmove(puVar10,(void *)(longlong)(iVar9 + local_80._0_4_),(size_t)uVar13);
        *(float *)(lVar11 + iVar16) = fVar25;
        lVar14 = lVar14 + 1;
        local_80._0_4_ = local_80._0_4_ + -4;
        iVar16 = iVar16 + 4;
        iVar8 = iVar8 + -8;
        iVar17 = iVar17 + 8;
        local_64 = local_64 + -1;
      } while (local_64 != 0);
    }
  }
  FUN_00b32040();
LAB_00c0dd5d:
  bVar6 = in_XMM4_Qa != DAT_02390448;
  if (local_50 != (undefined8 *)0x0 && bVar6) {
    FUN_00d50b20();
  }
  if (bVar6 && local_48 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00c08ed0 — 2303 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00c0971f) */
/* WARNING: Removing unreachable block (ram,0x00c09728) */
/* WARNING: Removing unreachable block (ram,0x00c09621) */
/* WARNING: Removing unreachable block (ram,0x00c0962a) */
/* WARNING: Removing unreachable block (ram,0x00c09581) */
/* WARNING: Removing unreachable block (ram,0x00c0958a) */
/* WARNING: Removing unreachable block (ram,0x00c094e1) */
/* WARNING: Removing unreachable block (ram,0x00c094ea) */
/* WARNING: Removing unreachable block (ram,0x00c09441) */
/* WARNING: Removing unreachable block (ram,0x00c0944a) */
/* WARNING: Removing unreachable block (ram,0x00c093a1) */
/* WARNING: Removing unreachable block (ram,0x00c093aa) */
/* WARNING: Removing unreachable block (ram,0x00c09301) */
/* WARNING: Removing unreachable block (ram,0x00c0930a) */
/* WARNING: Removing unreachable block (ram,0x00c09261) */
/* WARNING: Removing unreachable block (ram,0x00c0926a) */
/* WARNING: Removing unreachable block (ram,0x00c091c1) */
/* WARNING: Removing unreachable block (ram,0x00c091ca) */
/* WARNING: Removing unreachable block (ram,0x00c09121) */
/* WARNING: Removing unreachable block (ram,0x00c0912a) */
/* WARNING: Removing unreachable block (ram,0x00c09081) */
/* WARNING: Removing unreachable block (ram,0x00c0908a) */
/* WARNING: Removing unreachable block (ram,0x00c090d1) */
/* WARNING: Removing unreachable block (ram,0x00c090da) */
/* WARNING: Removing unreachable block (ram,0x00c09171) */
/* WARNING: Removing unreachable block (ram,0x00c0917a) */
/* WARNING: Removing unreachable block (ram,0x00c09211) */
/* WARNING: Removing unreachable block (ram,0x00c0921a) */
/* WARNING: Removing unreachable block (ram,0x00c092b1) */
/* WARNING: Removing unreachable block (ram,0x00c092ba) */
/* WARNING: Removing unreachable block (ram,0x00c09351) */
/* WARNING: Removing unreachable block (ram,0x00c0935a) */
/* WARNING: Removing unreachable block (ram,0x00c093f1) */
/* WARNING: Removing unreachable block (ram,0x00c093fa) */
/* WARNING: Removing unreachable block (ram,0x00c09491) */
/* WARNING: Removing unreachable block (ram,0x00c0949a) */
/* WARNING: Removing unreachable block (ram,0x00c09531) */
/* WARNING: Removing unreachable block (ram,0x00c0953a) */
/* WARNING: Removing unreachable block (ram,0x00c095d1) */
/* WARNING: Removing unreachable block (ram,0x00c095da) */
/* WARNING: Removing unreachable block (ram,0x00c096cf) */
/* WARNING: Removing unreachable block (ram,0x00c096d8) */
/* WARNING: Removing unreachable block (ram,0x00c0976f) */
/* WARNING: Removing unreachable block (ram,0x00c09778) */

void FUN_00c08ed0(undefined8 param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *unaff_RDI;
  bool bVar5;
  
  puVar3 = DAT_028a5c68;
  puVar4 = DAT_028a5c58;
  if (param_2 == 7) {
    if ((DAT_028a5c68 == (undefined8 *)0x0) || (DAT_028a5c71 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a5c68 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028a5c68 == puVar4) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar5 = DAT_028a5c68 != (undefined8 *)0x0;
          DAT_028a5c68 = puVar4;
          if (bVar5) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a5c70 == '\0') {
          DAT_028a5c70 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c0d8;
        if (DAT_0276c0d8 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c0a8;
        if (DAT_0276c0a8 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_027bed58;
        if (DAT_027bed58 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        DAT_028a5c71 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a5c71 = '\x01';
        FUN_00e8cb70();
      }
      puVar4 = DAT_028a5c68;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (puVar4 == (undefined8 *)0x0) goto LAB_00c097b5;
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      puVar4 = puVar3;
    }
    FUN_00d50b00();
  }
  else {
    if (param_2 != 1) {
      FUN_00b34370();
      return;
    }
    if ((DAT_028a5c58 == (undefined8 *)0x0) || (DAT_028a5c61 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a5c58 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028a5c58 == puVar4) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar5 = DAT_028a5c58 != (undefined8 *)0x0;
          DAT_028a5c58 = puVar4;
          if (bVar5) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a5c60 == '\0') {
          DAT_028a5c60 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c118;
        if (DAT_0276c118 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c120;
        if (DAT_0276c120 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c128;
        if (DAT_0276c128 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c130;
        if (DAT_0276c130 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c078;
        if (DAT_0276c078 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c070;
        if (DAT_0276c070 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c068;
        if (DAT_0276c068 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c060;
        if (DAT_0276c060 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_026d7d38;
        if (DAT_026d7d38 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c050;
        if (DAT_0276c050 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c048;
        if (DAT_0276c048 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c040;
        if (DAT_0276c040 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c038;
        if (DAT_0276c038 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c030;
        if (DAT_0276c030 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_026d7d40;
        if (DAT_026d7d40 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c020;
        if (DAT_0276c020 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c018;
        if (DAT_0276c018 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c010;
        if (DAT_0276c010 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c008;
        if (DAT_0276c008 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        DAT_028a5c61 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a5c61 = '\x01';
        FUN_00e8cb70();
      }
      puVar4 = DAT_028a5c58;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (puVar4 == (undefined8 *)0x0) {
LAB_00c097b5:
        puVar4 = (undefined8 *)0x0;
        goto LAB_00c097b7;
      }
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
    }
    FUN_00d50b00();
  }
LAB_00c097b7:
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @00c04940 — 2303 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00c0518f) */
/* WARNING: Removing unreachable block (ram,0x00c05198) */
/* WARNING: Removing unreachable block (ram,0x00c05091) */
/* WARNING: Removing unreachable block (ram,0x00c0509a) */
/* WARNING: Removing unreachable block (ram,0x00c04ff1) */
/* WARNING: Removing unreachable block (ram,0x00c04ffa) */
/* WARNING: Removing unreachable block (ram,0x00c04f51) */
/* WARNING: Removing unreachable block (ram,0x00c04f5a) */
/* WARNING: Removing unreachable block (ram,0x00c04eb1) */
/* WARNING: Removing unreachable block (ram,0x00c04eba) */
/* WARNING: Removing unreachable block (ram,0x00c04e11) */
/* WARNING: Removing unreachable block (ram,0x00c04e1a) */
/* WARNING: Removing unreachable block (ram,0x00c04d71) */
/* WARNING: Removing unreachable block (ram,0x00c04d7a) */
/* WARNING: Removing unreachable block (ram,0x00c04cd1) */
/* WARNING: Removing unreachable block (ram,0x00c04cda) */
/* WARNING: Removing unreachable block (ram,0x00c04c31) */
/* WARNING: Removing unreachable block (ram,0x00c04c3a) */
/* WARNING: Removing unreachable block (ram,0x00c04b91) */
/* WARNING: Removing unreachable block (ram,0x00c04b9a) */
/* WARNING: Removing unreachable block (ram,0x00c04af1) */
/* WARNING: Removing unreachable block (ram,0x00c04afa) */
/* WARNING: Removing unreachable block (ram,0x00c04b41) */
/* WARNING: Removing unreachable block (ram,0x00c04b4a) */
/* WARNING: Removing unreachable block (ram,0x00c04be1) */
/* WARNING: Removing unreachable block (ram,0x00c04bea) */
/* WARNING: Removing unreachable block (ram,0x00c04c81) */
/* WARNING: Removing unreachable block (ram,0x00c04c8a) */
/* WARNING: Removing unreachable block (ram,0x00c04d21) */
/* WARNING: Removing unreachable block (ram,0x00c04d2a) */
/* WARNING: Removing unreachable block (ram,0x00c04dc1) */
/* WARNING: Removing unreachable block (ram,0x00c04dca) */
/* WARNING: Removing unreachable block (ram,0x00c04e61) */
/* WARNING: Removing unreachable block (ram,0x00c04e6a) */
/* WARNING: Removing unreachable block (ram,0x00c04f01) */
/* WARNING: Removing unreachable block (ram,0x00c04f0a) */
/* WARNING: Removing unreachable block (ram,0x00c04fa1) */
/* WARNING: Removing unreachable block (ram,0x00c04faa) */
/* WARNING: Removing unreachable block (ram,0x00c05041) */
/* WARNING: Removing unreachable block (ram,0x00c0504a) */
/* WARNING: Removing unreachable block (ram,0x00c0513f) */
/* WARNING: Removing unreachable block (ram,0x00c05148) */
/* WARNING: Removing unreachable block (ram,0x00c051df) */
/* WARNING: Removing unreachable block (ram,0x00c051e8) */

void FUN_00c04940(undefined8 param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *unaff_RDI;
  bool bVar5;
  
  puVar3 = DAT_028a5bd8;
  puVar4 = DAT_028a5bc8;
  if (param_2 == 8) {
    if ((DAT_028a5bd8 == (undefined8 *)0x0) || (DAT_028a5be1 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a5bd8 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028a5bd8 == puVar4) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar5 = DAT_028a5bd8 != (undefined8 *)0x0;
          DAT_028a5bd8 = puVar4;
          if (bVar5) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a5be0 == '\0') {
          DAT_028a5be0 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c0d8;
        if (DAT_0276c0d8 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c0a8;
        if (DAT_0276c0a8 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_027bed58;
        if (DAT_027bed58 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        DAT_028a5be1 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a5be1 = '\x01';
        FUN_00e8cb70();
      }
      puVar4 = DAT_028a5bd8;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (puVar4 == (undefined8 *)0x0) goto LAB_00c05225;
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      puVar4 = puVar3;
    }
    FUN_00d50b00();
  }
  else {
    if (param_2 != 1) {
      FUN_00b34370();
      return;
    }
    if ((DAT_028a5bc8 == (undefined8 *)0x0) || (DAT_028a5bd1 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a5bc8 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028a5bc8 == puVar4) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar5 = DAT_028a5bc8 != (undefined8 *)0x0;
          DAT_028a5bc8 = puVar4;
          if (bVar5) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a5bd0 == '\0') {
          DAT_028a5bd0 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c118;
        if (DAT_0276c118 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c120;
        if (DAT_0276c120 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c128;
        if (DAT_0276c128 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c130;
        if (DAT_0276c130 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c078;
        if (DAT_0276c078 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c070;
        if (DAT_0276c070 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c068;
        if (DAT_0276c068 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c060;
        if (DAT_0276c060 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_026d7d38;
        if (DAT_026d7d38 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c050;
        if (DAT_0276c050 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c048;
        if (DAT_0276c048 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c040;
        if (DAT_0276c040 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c038;
        if (DAT_0276c038 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c030;
        if (DAT_0276c030 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_026d7d40;
        if (DAT_026d7d40 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c020;
        if (DAT_0276c020 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c018;
        if (DAT_0276c018 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c010;
        if (DAT_0276c010 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c008;
        if (DAT_0276c008 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        DAT_028a5bd1 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a5bd1 = '\x01';
        FUN_00e8cb70();
      }
      puVar4 = DAT_028a5bc8;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (puVar4 == (undefined8 *)0x0) {
LAB_00c05225:
        puVar4 = (undefined8 *)0x0;
        goto LAB_00c05227;
      }
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
    }
    FUN_00d50b00();
  }
LAB_00c05227:
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @00c07540 — 2062 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00c07c9e) */
/* WARNING: Removing unreachable block (ram,0x00c07ca7) */
/* WARNING: Removing unreachable block (ram,0x00c07bfe) */
/* WARNING: Removing unreachable block (ram,0x00c07c07) */
/* WARNING: Removing unreachable block (ram,0x00c07b5e) */
/* WARNING: Removing unreachable block (ram,0x00c07b67) */
/* WARNING: Removing unreachable block (ram,0x00c07abe) */
/* WARNING: Removing unreachable block (ram,0x00c07ac7) */
/* WARNING: Removing unreachable block (ram,0x00c07a1e) */
/* WARNING: Removing unreachable block (ram,0x00c07a27) */
/* WARNING: Removing unreachable block (ram,0x00c0797e) */
/* WARNING: Removing unreachable block (ram,0x00c07987) */
/* WARNING: Removing unreachable block (ram,0x00c078de) */
/* WARNING: Removing unreachable block (ram,0x00c078e7) */
/* WARNING: Removing unreachable block (ram,0x00c0783e) */
/* WARNING: Removing unreachable block (ram,0x00c07847) */
/* WARNING: Removing unreachable block (ram,0x00c07740) */
/* WARNING: Removing unreachable block (ram,0x00c07749) */
/* WARNING: Removing unreachable block (ram,0x00c076f0) */
/* WARNING: Removing unreachable block (ram,0x00c076f9) */
/* WARNING: Removing unreachable block (ram,0x00c07790) */
/* WARNING: Removing unreachable block (ram,0x00c07799) */
/* WARNING: Removing unreachable block (ram,0x00c0788e) */
/* WARNING: Removing unreachable block (ram,0x00c07897) */
/* WARNING: Removing unreachable block (ram,0x00c0792e) */
/* WARNING: Removing unreachable block (ram,0x00c07937) */
/* WARNING: Removing unreachable block (ram,0x00c079ce) */
/* WARNING: Removing unreachable block (ram,0x00c079d7) */
/* WARNING: Removing unreachable block (ram,0x00c07a6e) */
/* WARNING: Removing unreachable block (ram,0x00c07a77) */
/* WARNING: Removing unreachable block (ram,0x00c07b0e) */
/* WARNING: Removing unreachable block (ram,0x00c07b17) */
/* WARNING: Removing unreachable block (ram,0x00c07bae) */
/* WARNING: Removing unreachable block (ram,0x00c07bb7) */
/* WARNING: Removing unreachable block (ram,0x00c07c4e) */
/* WARNING: Removing unreachable block (ram,0x00c07c57) */
/* WARNING: Removing unreachable block (ram,0x00c07cee) */
/* WARNING: Removing unreachable block (ram,0x00c07cf7) */

void FUN_00c07540(undefined8 param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *unaff_RDI;
  bool bVar5;
  
  puVar3 = DAT_028a5c38;
  puVar4 = DAT_028a5c28;
  if (param_2 == 2) {
    if ((DAT_028a5c38 == (undefined8 *)0x0) || (DAT_028a5c41 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a5c38 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028a5c38 == puVar4) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar5 = DAT_028a5c38 != (undefined8 *)0x0;
          DAT_028a5c38 = puVar4;
          if (bVar5) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a5c40 == '\0') {
          DAT_028a5c40 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c130;
        if (DAT_0276c130 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c078;
        if (DAT_0276c078 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c070;
        if (DAT_0276c070 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c068;
        if (DAT_0276c068 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c060;
        if (DAT_0276c060 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_026d7d38;
        if (DAT_026d7d38 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c050;
        if (DAT_0276c050 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c048;
        if (DAT_0276c048 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c040;
        if (DAT_0276c040 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c038;
        if (DAT_0276c038 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c030;
        if (DAT_0276c030 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_026d7d40;
        if (DAT_026d7d40 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c020;
        if (DAT_0276c020 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c018;
        if (DAT_0276c018 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c010;
        if (DAT_0276c010 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c008;
        if (DAT_0276c008 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        DAT_028a5c41 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a5c41 = '\x01';
        FUN_00e8cb70();
      }
      puVar4 = DAT_028a5c38;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (puVar4 == (undefined8 *)0x0) goto LAB_00c07d34;
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      puVar4 = puVar3;
    }
    FUN_00d50b00();
  }
  else {
    if (param_2 != 0) {
      FUN_00b34370();
      return;
    }
    if ((DAT_028a5c28 == (undefined8 *)0x0) || (DAT_028a5c31 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a5c28 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028a5c28 == puVar4) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar5 = DAT_028a5c28 != (undefined8 *)0x0;
          DAT_028a5c28 = puVar4;
          if (bVar5) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a5c30 == '\0') {
          DAT_028a5c30 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c188;
        if (DAT_0276c188 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c190;
        if (DAT_0276c190 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c198;
        if (DAT_0276c198 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        DAT_028a5c31 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a5c31 = '\x01';
        FUN_00e8cb70();
      }
      puVar4 = DAT_028a5c28;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (puVar4 == (undefined8 *)0x0) {
LAB_00c07d34:
        puVar4 = (undefined8 *)0x0;
        goto LAB_00c07d36;
      }
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
    }
    FUN_00d50b00();
  }
LAB_00c07d36:
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @00c018b0 — 2008 bytes
// ============================================================

void FUN_00c018b0(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong unaff_RDI;
  longlong lVar4;
  bool bVar5;
  longlong local_1c8;
  undefined1 local_1c0;
  longlong local_1b8;
  undefined1 local_1b0;
  longlong local_1a8;
  undefined1 local_1a0;
  longlong local_198;
  undefined1 local_190;
  longlong local_188;
  undefined1 local_180;
  longlong local_178;
  undefined1 local_170;
  longlong local_168;
  undefined1 local_160;
  longlong local_158;
  undefined1 local_150;
  longlong local_148;
  undefined1 local_140;
  longlong local_138;
  undefined1 local_130;
  longlong local_128;
  undefined1 local_120;
  longlong local_118;
  undefined1 local_110;
  longlong local_108;
  undefined1 local_100;
  longlong local_f8;
  undefined1 local_f0;
  longlong local_e8;
  undefined1 local_e0;
  longlong local_d8;
  undefined1 local_d0;
  longlong local_c8;
  undefined1 local_c0;
  longlong local_b8;
  undefined1 local_b0;
  longlong local_a8;
  undefined1 local_a0;
  longlong local_98;
  undefined1 local_90;
  longlong local_88;
  undefined1 local_80;
  longlong local_78;
  undefined1 local_70;
  longlong local_68;
  undefined1 local_60;
  longlong local_58;
  undefined1 local_50;
  longlong local_48;
  undefined1 local_40;
  longlong local_38;
  undefined1 local_30;
  
  *(undefined4 *)(unaff_RDI + 0xb8) = 5;
  lVar1 = DAT_0276bf50;
  if (DAT_0276bf50 == 0) {
    lVar4 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar4 == 0) goto LAB_00c01919;
  }
  else {
    FUN_00d50b00();
    lVar4 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar4 == lVar1) {
      FUN_00d50b20();
      goto LAB_00c01919;
    }
  }
  *(longlong *)(unaff_RDI + 0x90) = lVar1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_00c01919:
  *(undefined4 *)(unaff_RDI + 0xa8) = 3;
  if ((DAT_028a5b88 == (undefined8 *)0x0) || (DAT_028a5b91 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a5b88 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_0254ed40;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      FUN_00d500e0();
      bVar5 = DAT_028a5b88 == (undefined8 *)0x0;
      DAT_028a5b88 = puVar3;
      if (((bVar5) || (FUN_00d50b20(), lVar1 = DAT_02765370, DAT_028a5b88 != (undefined8 *)0x0)) &&
         (lVar1 = DAT_02765370, DAT_028a5b90 == '\0')) {
        DAT_028a5b90 = '\x01';
        FUN_00e8cb90();
        lVar1 = DAT_02765370;
      }
      DAT_02765370 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_026fb990;
      local_1c0 = 1;
      local_1c8 = lVar1;
      if (DAT_026fb990 != 0) {
        FUN_00d50b00();
      }
      local_1b8 = lVar4;
      local_1b0 = 1;
      FUN_00bf1030(&local_1b8,&local_1c8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276bf58;
      if (DAT_0276bf58 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bf60;
      local_1a8 = lVar1;
      local_1a0 = 1;
      if (DAT_0276bf60 != 0) {
        FUN_00d50b00();
      }
      local_198 = lVar4;
      local_190 = 1;
      FUN_00bf1030(&local_198,&local_1a8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276bf68;
      if (DAT_0276bf68 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bf70;
      local_188 = lVar1;
      local_180 = 1;
      if (DAT_0276bf70 != 0) {
        FUN_00d50b00();
      }
      local_178 = lVar4;
      local_170 = 1;
      FUN_00bf1030(&local_178,&local_188);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276bf78;
      if (DAT_0276bf78 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bf80;
      local_168 = lVar1;
      local_160 = 1;
      if (DAT_0276bf80 != 0) {
        FUN_00d50b00();
      }
      local_158 = lVar4;
      local_150 = 1;
      FUN_00bf1030(&local_158,&local_168);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276bf88;
      if (DAT_0276bf88 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bf90;
      local_148 = lVar1;
      local_140 = 1;
      if (DAT_0276bf90 != 0) {
        FUN_00d50b00();
      }
      local_138 = lVar4;
      local_130 = 1;
      FUN_00bf1030(&local_138,&local_148);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276bf98;
      if (DAT_0276bf98 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bfa0;
      local_128 = lVar1;
      local_120 = 1;
      if (DAT_0276bfa0 != 0) {
        FUN_00d50b00();
      }
      local_118 = lVar4;
      local_110 = 1;
      FUN_00bf1030(&local_118,&local_128);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276bfa8;
      if (DAT_0276bfa8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bfb0;
      local_108 = lVar1;
      local_100 = 1;
      if (DAT_0276bfb0 != 0) {
        FUN_00d50b00();
      }
      local_f8 = lVar4;
      local_f0 = 1;
      FUN_00bf1030(&local_f8,&local_108);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276bfb8;
      if (DAT_0276bfb8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bfc0;
      local_e8 = lVar1;
      local_e0 = 1;
      if (DAT_0276bfc0 != 0) {
        FUN_00d50b00();
      }
      local_d8 = lVar4;
      local_d0 = 1;
      FUN_00bf1030(&local_d8,&local_e8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276bfc8;
      if (DAT_0276bfc8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bfd0;
      local_c8 = lVar1;
      local_c0 = 1;
      if (DAT_0276bfd0 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar4;
      local_b0 = 1;
      FUN_00bf1030(&local_b8,&local_c8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027bed58;
      if (DAT_027bed58 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bfe0;
      local_a8 = lVar1;
      local_a0 = 1;
      if (DAT_0276bfe0 != 0) {
        FUN_00d50b00();
      }
      local_98 = lVar4;
      local_90 = 1;
      FUN_00bf1030(&local_98,&local_a8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276bfe8;
      if (DAT_0276bfe8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bff0;
      local_88 = lVar1;
      local_80 = 1;
      if (DAT_0276bff0 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar4;
      local_70 = 1;
      FUN_00bf1030(&local_78,&local_88);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276bff8;
      if (DAT_0276bff8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c000;
      local_68 = lVar1;
      local_60 = 1;
      if (DAT_0276c000 != 0) {
        FUN_00d50b00();
      }
      local_58 = lVar4;
      local_50 = 1;
      FUN_00bf1030(&local_58,&local_68);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276be48;
      if (DAT_0276be48 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276be50;
      local_48 = lVar1;
      local_40 = 1;
      if (DAT_0276be50 != 0) {
        FUN_00d50b00();
      }
      local_38 = lVar4;
      local_30 = 1;
      FUN_00bf1030(&local_38,&local_48);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      DAT_028a5b91 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a5b91 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = *(undefined8 **)(unaff_RDI + 0xb0);
    if (puVar3 == DAT_028a5b88) {
      return;
    }
  }
  else {
    puVar3 = *(undefined8 **)(unaff_RDI + 0xb0);
    if (puVar3 == DAT_028a5b88) {
      return;
    }
  }
  puVar2 = DAT_028a5b88;
  if (DAT_028a5b88 != (undefined8 *)0x0) {
    FUN_00d50b00();
  }
  *(undefined8 **)(unaff_RDI + 0xb0) = puVar2;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @00c06150 — 1820 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00c067bc) */
/* WARNING: Removing unreachable block (ram,0x00c067c5) */
/* WARNING: Removing unreachable block (ram,0x00c0671c) */
/* WARNING: Removing unreachable block (ram,0x00c06725) */
/* WARNING: Removing unreachable block (ram,0x00c0667c) */
/* WARNING: Removing unreachable block (ram,0x00c06685) */
/* WARNING: Removing unreachable block (ram,0x00c065dc) */
/* WARNING: Removing unreachable block (ram,0x00c065e5) */
/* WARNING: Removing unreachable block (ram,0x00c0653c) */
/* WARNING: Removing unreachable block (ram,0x00c06545) */
/* WARNING: Removing unreachable block (ram,0x00c0649c) */
/* WARNING: Removing unreachable block (ram,0x00c064a5) */
/* WARNING: Removing unreachable block (ram,0x00c063fc) */
/* WARNING: Removing unreachable block (ram,0x00c06405) */
/* WARNING: Removing unreachable block (ram,0x00c0635c) */
/* WARNING: Removing unreachable block (ram,0x00c06365) */
/* WARNING: Removing unreachable block (ram,0x00c062bc) */
/* WARNING: Removing unreachable block (ram,0x00c062c5) */
/* WARNING: Removing unreachable block (ram,0x00c0626c) */
/* WARNING: Removing unreachable block (ram,0x00c06275) */
/* WARNING: Removing unreachable block (ram,0x00c0630c) */
/* WARNING: Removing unreachable block (ram,0x00c06315) */
/* WARNING: Removing unreachable block (ram,0x00c063ac) */
/* WARNING: Removing unreachable block (ram,0x00c063b5) */
/* WARNING: Removing unreachable block (ram,0x00c0644c) */
/* WARNING: Removing unreachable block (ram,0x00c06455) */
/* WARNING: Removing unreachable block (ram,0x00c064ec) */
/* WARNING: Removing unreachable block (ram,0x00c064f5) */
/* WARNING: Removing unreachable block (ram,0x00c0658c) */
/* WARNING: Removing unreachable block (ram,0x00c06595) */
/* WARNING: Removing unreachable block (ram,0x00c0662c) */
/* WARNING: Removing unreachable block (ram,0x00c06635) */
/* WARNING: Removing unreachable block (ram,0x00c066cc) */
/* WARNING: Removing unreachable block (ram,0x00c066d5) */
/* WARNING: Removing unreachable block (ram,0x00c0676c) */
/* WARNING: Removing unreachable block (ram,0x00c06775) */
/* WARNING: Removing unreachable block (ram,0x00c0680c) */
/* WARNING: Removing unreachable block (ram,0x00c06815) */

void FUN_00c06150(undefined8 param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_RDI;
  bool bVar5;
  
  puVar4 = DAT_028a5c08;
  if (param_2 != 3) {
    FUN_00b34370();
    return;
  }
  if ((DAT_028a5c08 == (undefined8 *)0x0) || (DAT_028a5c11 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a5c08 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_02572358;
      (*DAT_02572370)();
      if (DAT_028a5c08 == puVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = DAT_028a5c08 != (undefined8 *)0x0;
        DAT_028a5c08 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a5c10 == '\0') {
        DAT_028a5c10 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c118;
      if (DAT_0276c118 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c120;
      if (DAT_0276c120 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c128;
      if (DAT_0276c128 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c130;
      if (DAT_0276c130 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c078;
      if (DAT_0276c078 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c070;
      if (DAT_0276c070 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c068;
      if (DAT_0276c068 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c060;
      if (DAT_0276c060 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_026d7d38;
      if (DAT_026d7d38 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c050;
      if (DAT_0276c050 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c048;
      if (DAT_0276c048 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c040;
      if (DAT_0276c040 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c038;
      if (DAT_0276c038 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c030;
      if (DAT_0276c030 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_026d7d40;
      if (DAT_026d7d40 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c020;
      if (DAT_0276c020 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c018;
      if (DAT_0276c018 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c010;
      if (DAT_0276c010 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c008;
      if (DAT_0276c008 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_028a5c11 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a5c11 = '\x01';
      FUN_00e8cb70();
    }
    puVar4 = DAT_028a5c08;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_00c06850;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_00c06850:
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @00c03e40 — 1758 bytes
// ============================================================

void FUN_00c03e40(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong unaff_RDI;
  longlong lVar4;
  bool bVar5;
  longlong local_188;
  undefined1 local_180;
  longlong local_178;
  undefined1 local_170;
  longlong local_168;
  undefined1 local_160;
  longlong local_158;
  undefined1 local_150;
  longlong local_148;
  undefined1 local_140;
  longlong local_138;
  undefined1 local_130;
  longlong local_128;
  undefined1 local_120;
  longlong local_118;
  undefined1 local_110;
  longlong local_108;
  undefined1 local_100;
  longlong local_f8;
  undefined1 local_f0;
  longlong local_e8;
  undefined1 local_e0;
  longlong local_d8;
  undefined1 local_d0;
  longlong local_c8;
  undefined1 local_c0;
  longlong local_b8;
  undefined1 local_b0;
  longlong local_a8;
  undefined1 local_a0;
  longlong local_98;
  undefined1 local_90;
  longlong local_88;
  undefined1 local_80;
  longlong local_78;
  undefined1 local_70;
  longlong local_68;
  undefined1 local_60;
  longlong local_58;
  undefined1 local_50;
  longlong local_48;
  undefined1 local_40;
  longlong local_38;
  undefined1 local_30;
  
  *(undefined4 *)(unaff_RDI + 0xb8) = 6;
  lVar1 = DAT_0276c0a0;
  if (DAT_0276c0a0 == 0) {
    lVar4 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar4 == 0) goto LAB_00c03ea9;
  }
  else {
    FUN_00d50b00();
    lVar4 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar4 == lVar1) {
      FUN_00d50b20();
      goto LAB_00c03ea9;
    }
  }
  *(longlong *)(unaff_RDI + 0x90) = lVar1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_00c03ea9:
  *(undefined4 *)(unaff_RDI + 0xa8) = 4;
  if ((DAT_028a5be8 == (undefined8 *)0x0) || (DAT_028a5bf1 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a5be8 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_0254ed40;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      FUN_00d500e0();
      bVar5 = DAT_028a5be8 == (undefined8 *)0x0;
      DAT_028a5be8 = puVar3;
      if (((bVar5) || (FUN_00d50b20(), lVar1 = DAT_0276c0a8, DAT_028a5be8 != (undefined8 *)0x0)) &&
         (lVar1 = DAT_0276c0a8, DAT_028a5bf0 == '\0')) {
        DAT_028a5bf0 = '\x01';
        FUN_00e8cb90();
        lVar1 = DAT_0276c0a8;
      }
      DAT_0276c0a8 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c0b0;
      local_180 = 1;
      local_188 = lVar1;
      if (DAT_0276c0b0 != 0) {
        FUN_00d50b00();
      }
      local_178 = lVar4;
      local_170 = 1;
      FUN_00bf1030(&local_178,&local_188);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276c0b8;
      if (DAT_0276c0b8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c0c0;
      local_168 = lVar1;
      local_160 = 1;
      if (DAT_0276c0c0 != 0) {
        FUN_00d50b00();
      }
      local_158 = lVar4;
      local_150 = 1;
      FUN_00bf1030(&local_158,&local_168);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276c0c8;
      if (DAT_0276c0c8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c0d0;
      local_148 = lVar1;
      local_140 = 1;
      if (DAT_0276c0d0 != 0) {
        FUN_00d50b00();
      }
      local_138 = lVar4;
      local_130 = 1;
      FUN_00bf1030(&local_138,&local_148);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276c0d8;
      if (DAT_0276c0d8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c0e0;
      local_128 = lVar1;
      local_120 = 1;
      if (DAT_0276c0e0 != 0) {
        FUN_00d50b00();
      }
      local_118 = lVar4;
      local_110 = 1;
      FUN_00bf1030(&local_118,&local_128);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276c0e8;
      if (DAT_0276c0e8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c0f0;
      local_108 = lVar1;
      local_100 = 1;
      if (DAT_0276c0f0 != 0) {
        FUN_00d50b00();
      }
      local_f8 = lVar4;
      local_f0 = 1;
      FUN_00bf1030(&local_f8,&local_108);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276c0f8;
      if (DAT_0276c0f8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c100;
      local_e8 = lVar1;
      local_e0 = 1;
      if (DAT_0276c100 != 0) {
        FUN_00d50b00();
      }
      local_d8 = lVar4;
      local_d0 = 1;
      FUN_00bf1030(&local_d8,&local_e8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276c108;
      if (DAT_0276c108 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c110;
      local_c8 = lVar1;
      local_c0 = 1;
      if (DAT_0276c110 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar4;
      local_b0 = 1;
      FUN_00bf1030(&local_b8,&local_c8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027bed58;
      if (DAT_027bed58 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bfe0;
      local_a8 = lVar1;
      local_a0 = 1;
      if (DAT_0276bfe0 != 0) {
        FUN_00d50b00();
      }
      local_98 = lVar4;
      local_90 = 1;
      FUN_00bf1030(&local_98,&local_a8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276bfe8;
      if (DAT_0276bfe8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bff0;
      local_88 = lVar1;
      local_80 = 1;
      if (DAT_0276bff0 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar4;
      local_70 = 1;
      FUN_00bf1030(&local_78,&local_88);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276bff8;
      if (DAT_0276bff8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c000;
      local_68 = lVar1;
      local_60 = 1;
      if (DAT_0276c000 != 0) {
        FUN_00d50b00();
      }
      local_58 = lVar4;
      local_50 = 1;
      FUN_00bf1030(&local_58,&local_68);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276be48;
      if (DAT_0276be48 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276be50;
      local_48 = lVar1;
      local_40 = 1;
      if (DAT_0276be50 != 0) {
        FUN_00d50b00();
      }
      local_38 = lVar4;
      local_30 = 1;
      FUN_00bf1030(&local_38,&local_48);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      DAT_028a5bf1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a5bf1 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = *(undefined8 **)(unaff_RDI + 0xb0);
    if (puVar3 == DAT_028a5be8) {
      return;
    }
  }
  else {
    puVar3 = *(undefined8 **)(unaff_RDI + 0xb0);
    if (puVar3 == DAT_028a5be8) {
      return;
    }
  }
  puVar2 = DAT_028a5be8;
  if (DAT_028a5be8 != (undefined8 *)0x0) {
    FUN_00d50b00();
  }
  *(undefined8 **)(unaff_RDI + 0xb0) = puVar2;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @00c084a0 — 1630 bytes
// ============================================================

void FUN_00c084a0(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong unaff_RDI;
  longlong lVar4;
  bool bVar5;
  longlong local_168;
  undefined1 local_160;
  longlong local_158;
  undefined1 local_150;
  longlong local_148;
  undefined1 local_140;
  longlong local_138;
  undefined1 local_130;
  longlong local_128;
  undefined1 local_120;
  longlong local_118;
  undefined1 local_110;
  longlong local_108;
  undefined1 local_100;
  longlong local_f8;
  undefined1 local_f0;
  longlong local_e8;
  undefined1 local_e0;
  longlong local_d8;
  undefined1 local_d0;
  longlong local_c8;
  undefined1 local_c0;
  longlong local_b8;
  undefined1 local_b0;
  longlong local_a8;
  undefined1 local_a0;
  longlong local_98;
  undefined1 local_90;
  longlong local_88;
  undefined1 local_80;
  longlong local_78;
  undefined1 local_70;
  longlong local_68;
  undefined1 local_60;
  longlong local_58;
  undefined1 local_50;
  longlong local_48;
  undefined1 local_40;
  longlong local_38;
  undefined1 local_30;
  
  *(undefined4 *)(unaff_RDI + 0xb8) = 9;
  lVar1 = DAT_0276c1a0;
  if (DAT_0276c1a0 == 0) {
    lVar4 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar4 == 0) goto LAB_00c08509;
  }
  else {
    FUN_00d50b00();
    lVar4 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar4 == lVar1) {
      FUN_00d50b20();
      goto LAB_00c08509;
    }
  }
  *(longlong *)(unaff_RDI + 0x90) = lVar1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_00c08509:
  *(undefined4 *)(unaff_RDI + 0xa8) = 4;
  if ((DAT_028a5c48 == (undefined8 *)0x0) || (DAT_028a5c51 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a5c48 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_0254ed40;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      FUN_00d500e0();
      bVar5 = DAT_028a5c48 == (undefined8 *)0x0;
      DAT_028a5c48 = puVar3;
      if (((bVar5) || (FUN_00d50b20(), lVar1 = DAT_0276c1a8, DAT_028a5c48 != (undefined8 *)0x0)) &&
         (lVar1 = DAT_0276c1a8, DAT_028a5c50 == '\0')) {
        DAT_028a5c50 = '\x01';
        FUN_00e8cb90();
        lVar1 = DAT_0276c1a8;
      }
      DAT_0276c1a8 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c1b0;
      local_160 = 1;
      local_168 = lVar1;
      if (DAT_0276c1b0 != 0) {
        FUN_00d50b00();
      }
      local_158 = lVar4;
      local_150 = 1;
      FUN_00bf1030(&local_158,&local_168);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276c0b8;
      if (DAT_0276c0b8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c0c0;
      local_148 = lVar1;
      local_140 = 1;
      if (DAT_0276c0c0 != 0) {
        FUN_00d50b00();
      }
      local_138 = lVar4;
      local_130 = 1;
      FUN_00bf1030(&local_138,&local_148);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276c0c8;
      if (DAT_0276c0c8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c0d0;
      local_128 = lVar1;
      local_120 = 1;
      if (DAT_0276c0d0 != 0) {
        FUN_00d50b00();
      }
      local_118 = lVar4;
      local_110 = 1;
      FUN_00bf1030(&local_118,&local_128);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276c1b8;
      if (DAT_0276c1b8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c1c0;
      local_108 = lVar1;
      local_100 = 1;
      if (DAT_0276c1c0 != 0) {
        FUN_00d50b00();
      }
      local_f8 = lVar4;
      local_f0 = 1;
      FUN_00bf1030(&local_f8,&local_108);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276c1c8;
      if (DAT_0276c1c8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c1d0;
      local_e8 = lVar1;
      local_e0 = 1;
      if (DAT_0276c1d0 != 0) {
        FUN_00d50b00();
      }
      local_d8 = lVar4;
      local_d0 = 1;
      FUN_00bf1030(&local_d8,&local_e8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276c140;
      if (DAT_0276c140 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c148;
      local_c8 = lVar1;
      local_c0 = 1;
      if (DAT_0276c148 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar4;
      local_b0 = 1;
      FUN_00bf1030(&local_b8,&local_c8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027bed58;
      if (DAT_027bed58 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bfe0;
      local_a8 = lVar1;
      local_a0 = 1;
      if (DAT_0276bfe0 != 0) {
        FUN_00d50b00();
      }
      local_98 = lVar4;
      local_90 = 1;
      FUN_00bf1030(&local_98,&local_a8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276bfe8;
      if (DAT_0276bfe8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bff0;
      local_88 = lVar1;
      local_80 = 1;
      if (DAT_0276bff0 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar4;
      local_70 = 1;
      FUN_00bf1030(&local_78,&local_88);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276bff8;
      if (DAT_0276bff8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c000;
      local_68 = lVar1;
      local_60 = 1;
      if (DAT_0276c000 != 0) {
        FUN_00d50b00();
      }
      local_58 = lVar4;
      local_50 = 1;
      FUN_00bf1030(&local_58,&local_68);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276be48;
      if (DAT_0276be48 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276be50;
      local_48 = lVar1;
      local_40 = 1;
      if (DAT_0276be50 != 0) {
        FUN_00d50b00();
      }
      local_38 = lVar4;
      local_30 = 1;
      FUN_00bf1030(&local_38,&local_48);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      DAT_028a5c51 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a5c51 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = *(undefined8 **)(unaff_RDI + 0xb0);
    if (puVar3 == DAT_028a5c48) {
      return;
    }
  }
  else {
    puVar3 = *(undefined8 **)(unaff_RDI + 0xb0);
    if (puVar3 == DAT_028a5c48) {
      return;
    }
  }
  puVar2 = DAT_028a5c48;
  if (DAT_028a5c48 != (undefined8 *)0x0) {
    FUN_00d50b00();
  }
  *(undefined8 **)(unaff_RDI + 0xb0) = puVar2;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @00c0b2a0 — 1627 bytes
// ============================================================

void FUN_00c0b2a0(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong unaff_RDI;
  longlong lVar4;
  bool bVar5;
  longlong local_168;
  undefined1 local_160;
  longlong local_158;
  undefined1 local_150;
  longlong local_148;
  undefined1 local_140;
  longlong local_138;
  undefined1 local_130;
  longlong local_128;
  undefined1 local_120;
  longlong local_118;
  undefined1 local_110;
  longlong local_108;
  undefined1 local_100;
  longlong local_f8;
  undefined1 local_f0;
  longlong local_e8;
  undefined1 local_e0;
  longlong local_d8;
  undefined1 local_d0;
  longlong local_c8;
  undefined1 local_c0;
  longlong local_b8;
  undefined1 local_b0;
  longlong local_a8;
  undefined1 local_a0;
  longlong local_98;
  undefined1 local_90;
  longlong local_88;
  undefined1 local_80;
  longlong local_78;
  undefined1 local_70;
  longlong local_68;
  undefined1 local_60;
  longlong local_58;
  undefined1 local_50;
  longlong local_48;
  undefined1 local_40;
  longlong local_38;
  undefined1 local_30;
  
  *(undefined4 *)(unaff_RDI + 0xb8) = 0xb;
  lVar1 = DAT_0276c1e0;
  if (DAT_0276c1e0 == 0) {
    lVar4 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar4 == 0) goto LAB_00c0b309;
  }
  else {
    FUN_00d50b00();
    lVar4 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar4 == lVar1) {
      FUN_00d50b20();
      goto LAB_00c0b309;
    }
  }
  *(longlong *)(unaff_RDI + 0x90) = lVar1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_00c0b309:
  *(undefined4 *)(unaff_RDI + 0xa8) = 4;
  if ((DAT_028a5c98 == (undefined8 *)0x0) || (DAT_028a5ca1 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a5c98 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_0254ed40;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      FUN_00d500e0();
      bVar5 = DAT_028a5c98 == (undefined8 *)0x0;
      DAT_028a5c98 = puVar3;
      if (((bVar5) || (FUN_00d50b20(), lVar1 = DAT_0276c098, DAT_028a5c98 != (undefined8 *)0x0)) &&
         (lVar1 = DAT_0276c098, DAT_028a5ca0 == '\0')) {
        DAT_028a5ca0 = '\x01';
        FUN_00e8cb90();
        lVar1 = DAT_0276c098;
      }
      DAT_0276c098 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_027e8d68;
      local_160 = 1;
      local_168 = lVar1;
      if (DAT_027e8d68 != 0) {
        FUN_00d50b00();
      }
      local_158 = lVar4;
      local_150 = 1;
      FUN_00bf1030(&local_158,&local_168);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276c1a8;
      if (DAT_0276c1a8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c1b0;
      local_148 = lVar1;
      local_140 = 1;
      if (DAT_0276c1b0 != 0) {
        FUN_00d50b00();
      }
      local_138 = lVar4;
      local_130 = 1;
      FUN_00bf1030(&local_138,&local_148);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276c1f0;
      if (DAT_0276c1f0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c1f8;
      local_128 = lVar1;
      local_120 = 1;
      if (DAT_0276c1f8 != 0) {
        FUN_00d50b00();
      }
      local_118 = lVar4;
      local_110 = 1;
      FUN_00bf1030(&local_118,&local_128);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276c200;
      if (DAT_0276c200 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c208;
      local_108 = lVar1;
      local_100 = 1;
      if (DAT_0276c208 != 0) {
        FUN_00d50b00();
      }
      local_f8 = lVar4;
      local_f0 = 1;
      FUN_00bf1030(&local_f8,&local_108);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276c1b8;
      if (DAT_0276c1b8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c1c0;
      local_e8 = lVar1;
      local_e0 = 1;
      if (DAT_0276c1c0 != 0) {
        FUN_00d50b00();
      }
      local_d8 = lVar4;
      local_d0 = 1;
      FUN_00bf1030(&local_d8,&local_e8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276c210;
      if (DAT_0276c210 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c218;
      local_c8 = lVar1;
      local_c0 = 1;
      if (DAT_0276c218 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar4;
      local_b0 = 1;
      FUN_00bf1030(&local_b8,&local_c8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276c220;
      if (DAT_0276c220 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c228;
      local_a8 = lVar1;
      local_a0 = 1;
      if (DAT_0276c228 != 0) {
        FUN_00d50b00();
      }
      local_98 = lVar4;
      local_90 = 1;
      FUN_00bf1030(&local_98,&local_a8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276c230;
      if (DAT_0276c230 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_027ebef0;
      local_88 = lVar1;
      local_80 = 1;
      if (DAT_027ebef0 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar4;
      local_70 = 1;
      FUN_00bf1030(&local_78,&local_88);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276c240;
      if (DAT_0276c240 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c248;
      local_68 = lVar1;
      local_60 = 1;
      if (DAT_0276c248 != 0) {
        FUN_00d50b00();
      }
      local_58 = lVar4;
      local_50 = 1;
      FUN_00bf1030(&local_58,&local_68);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276be48;
      if (DAT_0276be48 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276be50;
      local_48 = lVar1;
      local_40 = 1;
      if (DAT_0276be50 != 0) {
        FUN_00d50b00();
      }
      local_38 = lVar4;
      local_30 = 1;
      FUN_00bf1030(&local_38,&local_48);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      DAT_028a5ca1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a5ca1 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = *(undefined8 **)(unaff_RDI + 0xb0);
    if (puVar3 == DAT_028a5c98) {
      return;
    }
  }
  else {
    puVar3 = *(undefined8 **)(unaff_RDI + 0xb0);
    if (puVar3 == DAT_028a5c98) {
      return;
    }
  }
  puVar2 = DAT_028a5c98;
  if (DAT_028a5c98 != (undefined8 *)0x0) {
    FUN_00d50b00();
  }
  *(undefined8 **)(unaff_RDI + 0xb0) = puVar2;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @00c0a680 — 1580 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00c0abfc) */
/* WARNING: Removing unreachable block (ram,0x00c0ac05) */
/* WARNING: Removing unreachable block (ram,0x00c0ab5c) */
/* WARNING: Removing unreachable block (ram,0x00c0ab65) */
/* WARNING: Removing unreachable block (ram,0x00c0aabc) */
/* WARNING: Removing unreachable block (ram,0x00c0aac5) */
/* WARNING: Removing unreachable block (ram,0x00c0aa1c) */
/* WARNING: Removing unreachable block (ram,0x00c0aa25) */
/* WARNING: Removing unreachable block (ram,0x00c0a97c) */
/* WARNING: Removing unreachable block (ram,0x00c0a985) */
/* WARNING: Removing unreachable block (ram,0x00c0a8dc) */
/* WARNING: Removing unreachable block (ram,0x00c0a8e5) */
/* WARNING: Removing unreachable block (ram,0x00c0a83c) */
/* WARNING: Removing unreachable block (ram,0x00c0a845) */
/* WARNING: Removing unreachable block (ram,0x00c0a79c) */
/* WARNING: Removing unreachable block (ram,0x00c0a7a5) */
/* WARNING: Removing unreachable block (ram,0x00c0a7ec) */
/* WARNING: Removing unreachable block (ram,0x00c0a7f5) */
/* WARNING: Removing unreachable block (ram,0x00c0a88c) */
/* WARNING: Removing unreachable block (ram,0x00c0a895) */
/* WARNING: Removing unreachable block (ram,0x00c0a92c) */
/* WARNING: Removing unreachable block (ram,0x00c0a935) */
/* WARNING: Removing unreachable block (ram,0x00c0a9cc) */
/* WARNING: Removing unreachable block (ram,0x00c0a9d5) */
/* WARNING: Removing unreachable block (ram,0x00c0aa6c) */
/* WARNING: Removing unreachable block (ram,0x00c0aa75) */
/* WARNING: Removing unreachable block (ram,0x00c0ab0c) */
/* WARNING: Removing unreachable block (ram,0x00c0ab15) */
/* WARNING: Removing unreachable block (ram,0x00c0abac) */
/* WARNING: Removing unreachable block (ram,0x00c0abb5) */
/* WARNING: Removing unreachable block (ram,0x00c0ac4c) */
/* WARNING: Removing unreachable block (ram,0x00c0ac55) */

void FUN_00c0a680(undefined8 param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_RDI;
  bool bVar5;
  
  puVar4 = DAT_028a5c88;
  if (param_2 != 1) {
    FUN_00b34370();
    return;
  }
  if ((DAT_028a5c88 == (undefined8 *)0x0) || (DAT_028a5c91 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a5c88 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_02572358;
      (*DAT_02572370)();
      if (DAT_028a5c88 == puVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = DAT_028a5c88 != (undefined8 *)0x0;
        DAT_028a5c88 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a5c90 == '\0') {
        DAT_028a5c90 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c130;
      if (DAT_0276c130 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c078;
      if (DAT_0276c078 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c070;
      if (DAT_0276c070 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c068;
      if (DAT_0276c068 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c060;
      if (DAT_0276c060 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_026d7d38;
      if (DAT_026d7d38 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c050;
      if (DAT_0276c050 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c048;
      if (DAT_0276c048 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c040;
      if (DAT_0276c040 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c038;
      if (DAT_0276c038 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c030;
      if (DAT_0276c030 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_026d7d40;
      if (DAT_026d7d40 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c020;
      if (DAT_0276c020 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c018;
      if (DAT_0276c018 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c010;
      if (DAT_0276c010 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c008;
      if (DAT_0276c008 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_028a5c91 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a5c91 = '\x01';
      FUN_00e8cb70();
    }
    puVar4 = DAT_028a5c88;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_00c0ac90;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_00c0ac90:
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @00c00f60 — 1383 bytes
// ============================================================

void FUN_00c00f60(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong unaff_RDI;
  longlong lVar4;
  bool bVar5;
  longlong local_128;
  undefined1 local_120;
  longlong local_118;
  undefined1 local_110;
  longlong local_108;
  undefined1 local_100;
  longlong local_f8;
  undefined1 local_f0;
  longlong local_e8;
  undefined1 local_e0;
  longlong local_d8;
  undefined1 local_d0;
  longlong local_c8;
  undefined1 local_c0;
  longlong local_b8;
  undefined1 local_b0;
  longlong local_a8;
  undefined1 local_a0;
  longlong local_98;
  undefined1 local_90;
  longlong local_88;
  undefined1 local_80;
  longlong local_78;
  undefined1 local_70;
  longlong local_68;
  undefined1 local_60;
  longlong local_58;
  undefined1 local_50;
  longlong local_48;
  undefined1 local_40;
  longlong local_38;
  undefined1 local_30;
  
  *(undefined4 *)(unaff_RDI + 0xb8) = 4;
  lVar1 = DAT_0276bf28;
  if (DAT_0276bf28 == 0) {
    lVar4 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar4 == 0) goto LAB_00c00fc9;
  }
  else {
    FUN_00d50b00();
    lVar4 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar4 == lVar1) {
      FUN_00d50b20();
      goto LAB_00c00fc9;
    }
  }
  *(longlong *)(unaff_RDI + 0x90) = lVar1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_00c00fc9:
  *(undefined4 *)(unaff_RDI + 0xa8) = 6;
  if ((DAT_028a5b78 == (undefined8 *)0x0) || (DAT_028a5b81 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a5b78 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_0254ed40;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      FUN_00d500e0();
      bVar5 = DAT_028a5b78 == (undefined8 *)0x0;
      DAT_028a5b78 = puVar3;
      if (((bVar5) || (FUN_00d50b20(), lVar1 = DAT_0276bcc0, DAT_028a5b78 != (undefined8 *)0x0)) &&
         (lVar1 = DAT_0276bcc0, DAT_028a5b80 == '\0')) {
        DAT_028a5b80 = '\x01';
        FUN_00e8cb90();
        lVar1 = DAT_0276bcc0;
      }
      DAT_0276bcc0 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bcc8;
      local_120 = 1;
      local_128 = lVar1;
      if (DAT_0276bcc8 != 0) {
        FUN_00d50b00();
      }
      local_118 = lVar4;
      local_110 = 1;
      FUN_00bf1030(&local_118,&local_128);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276bcd0;
      if (DAT_0276bcd0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bcd8;
      local_108 = lVar1;
      local_100 = 1;
      if (DAT_0276bcd8 != 0) {
        FUN_00d50b00();
      }
      local_f8 = lVar4;
      local_f0 = 1;
      FUN_00bf1030(&local_f8,&local_108);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_02765370;
      if (DAT_02765370 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_026fb990;
      local_e8 = lVar1;
      local_e0 = 1;
      if (DAT_026fb990 != 0) {
        FUN_00d50b00();
      }
      local_d8 = lVar4;
      local_d0 = 1;
      FUN_00bf1030(&local_d8,&local_e8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276bce0;
      if (DAT_0276bce0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bce8;
      local_c8 = lVar1;
      local_c0 = 1;
      if (DAT_0276bce8 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar4;
      local_b0 = 1;
      FUN_00bf1030(&local_b8,&local_c8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276bcf0;
      if (DAT_0276bcf0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bcf8;
      local_a8 = lVar1;
      local_a0 = 1;
      if (DAT_0276bcf8 != 0) {
        FUN_00d50b00();
      }
      local_98 = lVar4;
      local_90 = 1;
      FUN_00bf1030(&local_98,&local_a8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276bf30;
      if (DAT_0276bf30 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bf38;
      local_88 = lVar1;
      local_80 = 1;
      if (DAT_0276bf38 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar4;
      local_70 = 1;
      FUN_00bf1030(&local_78,&local_88);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276bf40;
      if (DAT_0276bf40 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bf48;
      local_68 = lVar1;
      local_60 = 1;
      if (DAT_0276bf48 != 0) {
        FUN_00d50b00();
      }
      local_58 = lVar4;
      local_50 = 1;
      FUN_00bf1030(&local_58,&local_68);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276bd20;
      if (DAT_0276bd20 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bd28;
      local_48 = lVar1;
      local_40 = 1;
      if (DAT_0276bd28 != 0) {
        FUN_00d50b00();
      }
      local_38 = lVar4;
      local_30 = 1;
      FUN_00bf1030(&local_38,&local_48);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      DAT_028a5b81 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a5b81 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = *(undefined8 **)(unaff_RDI + 0xb0);
    if (puVar3 == DAT_028a5b78) {
      return;
    }
  }
  else {
    puVar3 = *(undefined8 **)(unaff_RDI + 0xb0);
    if (puVar3 == DAT_028a5b78) {
      return;
    }
  }
  puVar2 = DAT_028a5b78;
  if (DAT_028a5b78 != (undefined8 *)0x0) {
    FUN_00d50b00();
  }
  *(undefined8 **)(unaff_RDI + 0xb0) = puVar2;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @00c00640 — 1383 bytes
// ============================================================

void FUN_00c00640(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong unaff_RDI;
  longlong lVar4;
  bool bVar5;
  longlong local_128;
  undefined1 local_120;
  longlong local_118;
  undefined1 local_110;
  longlong local_108;
  undefined1 local_100;
  longlong local_f8;
  undefined1 local_f0;
  longlong local_e8;
  undefined1 local_e0;
  longlong local_d8;
  undefined1 local_d0;
  longlong local_c8;
  undefined1 local_c0;
  longlong local_b8;
  undefined1 local_b0;
  longlong local_a8;
  undefined1 local_a0;
  longlong local_98;
  undefined1 local_90;
  longlong local_88;
  undefined1 local_80;
  longlong local_78;
  undefined1 local_70;
  longlong local_68;
  undefined1 local_60;
  longlong local_58;
  undefined1 local_50;
  longlong local_48;
  undefined1 local_40;
  longlong local_38;
  undefined1 local_30;
  
  *(undefined4 *)(unaff_RDI + 0xb8) = 3;
  lVar1 = DAT_0276bf20;
  if (DAT_0276bf20 == 0) {
    lVar4 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar4 == 0) goto LAB_00c006a9;
  }
  else {
    FUN_00d50b00();
    lVar4 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar4 == lVar1) {
      FUN_00d50b20();
      goto LAB_00c006a9;
    }
  }
  *(longlong *)(unaff_RDI + 0x90) = lVar1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_00c006a9:
  *(undefined4 *)(unaff_RDI + 0xa8) = 6;
  if ((DAT_028a5b68 == (undefined8 *)0x0) || (DAT_028a5b71 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a5b68 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_0254ed40;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      FUN_00d500e0();
      bVar5 = DAT_028a5b68 == (undefined8 *)0x0;
      DAT_028a5b68 = puVar3;
      if (((bVar5) || (FUN_00d50b20(), lVar1 = DAT_0276bcc0, DAT_028a5b68 != (undefined8 *)0x0)) &&
         (lVar1 = DAT_0276bcc0, DAT_028a5b70 == '\0')) {
        DAT_028a5b70 = '\x01';
        FUN_00e8cb90();
        lVar1 = DAT_0276bcc0;
      }
      DAT_0276bcc0 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bcc8;
      local_120 = 1;
      local_128 = lVar1;
      if (DAT_0276bcc8 != 0) {
        FUN_00d50b00();
      }
      local_118 = lVar4;
      local_110 = 1;
      FUN_00bf1030(&local_118,&local_128);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276bcd0;
      if (DAT_0276bcd0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bcd8;
      local_108 = lVar1;
      local_100 = 1;
      if (DAT_0276bcd8 != 0) {
        FUN_00d50b00();
      }
      local_f8 = lVar4;
      local_f0 = 1;
      FUN_00bf1030(&local_f8,&local_108);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_02765370;
      if (DAT_02765370 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_026fb990;
      local_e8 = lVar1;
      local_e0 = 1;
      if (DAT_026fb990 != 0) {
        FUN_00d50b00();
      }
      local_d8 = lVar4;
      local_d0 = 1;
      FUN_00bf1030(&local_d8,&local_e8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276bce0;
      if (DAT_0276bce0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bce8;
      local_c8 = lVar1;
      local_c0 = 1;
      if (DAT_0276bce8 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar4;
      local_b0 = 1;
      FUN_00bf1030(&local_b8,&local_c8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276bcf0;
      if (DAT_0276bcf0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bcf8;
      local_a8 = lVar1;
      local_a0 = 1;
      if (DAT_0276bcf8 != 0) {
        FUN_00d50b00();
      }
      local_98 = lVar4;
      local_90 = 1;
      FUN_00bf1030(&local_98,&local_a8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276bd00;
      if (DAT_0276bd00 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bd08;
      local_88 = lVar1;
      local_80 = 1;
      if (DAT_0276bd08 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar4;
      local_70 = 1;
      FUN_00bf1030(&local_78,&local_88);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276bd10;
      if (DAT_0276bd10 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_027fecf0;
      local_68 = lVar1;
      local_60 = 1;
      if (DAT_027fecf0 != 0) {
        FUN_00d50b00();
      }
      local_58 = lVar4;
      local_50 = 1;
      FUN_00bf1030(&local_58,&local_68);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276bd20;
      if (DAT_0276bd20 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bd28;
      local_48 = lVar1;
      local_40 = 1;
      if (DAT_0276bd28 != 0) {
        FUN_00d50b00();
      }
      local_38 = lVar4;
      local_30 = 1;
      FUN_00bf1030(&local_38,&local_48);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      DAT_028a5b71 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a5b71 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = *(undefined8 **)(unaff_RDI + 0xb0);
    if (puVar3 == DAT_028a5b68) {
      return;
    }
  }
  else {
    puVar3 = *(undefined8 **)(unaff_RDI + 0xb0);
    if (puVar3 == DAT_028a5b68) {
      return;
    }
  }
  puVar2 = DAT_028a5b68;
  if (DAT_028a5b68 != (undefined8 *)0x0) {
    FUN_00d50b00();
  }
  *(undefined8 **)(unaff_RDI + 0xb0) = puVar2;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @00bffe20 — 1255 bytes
// str: ""%0.0f dB""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00bffedf) */
/* WARNING: Removing unreachable block (ram,0x00bffeeb) */
/* WARNING: Removing unreachable block (ram,0x00c002d7) */
/* WARNING: Removing unreachable block (ram,0x00c002e3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bffe20(void)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar17;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong *local_50;
  undefined4 local_48;
  undefined4 local_44;
  longlong *local_40;
  char local_38;
  
  uVar13 = FUN_01e3f820();
  fVar12 = in_XMM1._4_4_;
  auVar18._4_4_ = fVar12;
  auVar18._0_4_ = fVar12;
  auVar18._8_4_ = in_XMM1._12_4_;
  auVar18._12_4_ = in_XMM1._12_4_;
  auVar15._4_12_ = auVar18._4_12_;
  auVar15._0_4_ = fVar12 + DAT_023941fc;
  auVar18 = insertps(in_XMM1,auVar15,0x10);
  (**(code **)(*unaff_RDI + 0x640))();
  (**(code **)(*local_40 + 0x3f0))(2,0x27,0,1,auVar15);
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((longlong *)unaff_RDI[0x28] != (longlong *)0x0) {
    uVar11 = (**(code **)(*(longlong *)unaff_RDI[0x28] + 0x628))();
    (**(code **)(*unaff_RDI + 0x640))();
    local_b8 = auVar18._0_8_;
    uStack_b0 = auVar18._8_8_;
    (**(code **)(*local_40 + 0x548))();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    fVar12 = (float)FUN_00aea6b0();
    (**(code **)(*unaff_RDI + 0x640))();
    (**(code **)(*local_50 + 0x3a0))();
    plVar7 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (plVar7 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    auVar4._8_8_ = uStack_b0;
    auVar4._0_8_ = local_b8;
    uVar3 = (undefined4)((ulonglong)uStack_b0 >> 0x20);
    fVar17 = (float)((ulonglong)local_b8 >> 0x20);
    auVar16._4_4_ = fVar17;
    auVar16._0_4_ = fVar17;
    auVar16._8_4_ = uVar3;
    auVar16._12_4_ = uVar3;
    fVar22 = fVar17 - fVar12 * fVar17;
    fVar12 = 0.0;
    if (0.0 <= fVar22) {
      fVar12 = fVar22;
    }
    if (fVar12 <= fVar17) {
      auVar16._0_4_ = fVar12;
    }
    insertps(auVar4,auVar16,0x10);
    (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))();
    lVar6 = unaff_RDI[0x2a];
    iVar9 = (int)lVar6 + 1;
    *(int *)(unaff_RDI + 0x2a) = iVar9;
    lVar2 = unaff_RDI[0x29];
    *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + (longlong)(int)lVar6 * 4) = uVar11;
    iVar1 = *(int *)(lVar2 + 0x18);
    iVar10 = iVar1 + 3;
    if (-1 < iVar1) {
      iVar10 = iVar1;
    }
    if (iVar10 >> 2 <= iVar9) {
      *(undefined4 *)(unaff_RDI + 0x2a) = 0;
    }
    fVar12 = (float)(**(code **)(DAT_02786500 + 8))();
    if (fVar12 < DAT_02390124) {
      uVar14 = FUN_00aea610();
      local_48 = 1;
      local_50 = &DAT_024d0b28;
      local_44 = (undefined4)uVar14;
      FUN_00d8cb40(uVar14,&local_50);
      plVar7 = local_40;
      if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
          (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0x640))();
      (**(code **)(*local_50 + 0x390))();
      plVar8 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (plVar8 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0x640))();
      (**(code **)(*local_50 + 0x378))();
      plVar8 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d48a10();
      if (plVar8 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      fVar12 = auVar15._0_4_;
      if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
        fVar12 = auVar15._0_4_;
      }
      auVar5._8_8_ = extraout_XMM0_Qb;
      auVar5._0_8_ = uVar13;
      uVar11 = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
      fVar17 = (float)((ulonglong)uVar13 >> 0x20);
      auVar19._4_4_ = fVar17;
      auVar19._0_4_ = fVar17;
      auVar19._8_4_ = uVar11;
      auVar19._12_4_ = uVar11;
      auVar20._4_12_ = auVar19._4_12_;
      auVar20._0_4_ = fVar17 + fVar12 + DAT_02390d00;
      insertps(auVar5,auVar20,0x10);
      auVar21._4_12_ = in_XMM1._4_12_;
      auVar21._0_4_ = in_XMM1._0_4_ + DAT_024112b0;
      blendps(auVar21,_DAT_02421240,0xe);
      (**(code **)(*(longlong *)*unaff_RSI + 0x3f8))();
      if (plVar7 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}




// ============================================================
// @00c0a070 — 993 bytes
// ============================================================

void FUN_00c0a070(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong unaff_RDI;
  longlong lVar4;
  bool bVar5;
  longlong local_c8;
  undefined1 local_c0;
  longlong local_b8;
  undefined1 local_b0;
  longlong local_a8;
  undefined1 local_a0;
  longlong local_98;
  undefined1 local_90;
  longlong local_88;
  undefined1 local_80;
  longlong local_78;
  undefined1 local_70;
  longlong local_68;
  undefined1 local_60;
  longlong local_58;
  undefined1 local_50;
  longlong local_48;
  undefined1 local_40;
  longlong local_38;
  undefined1 local_30;
  
  *(undefined4 *)(unaff_RDI + 0xb8) = 10;
  lVar1 = DAT_0276c1d8;
  if (DAT_0276c1d8 == 0) {
    lVar4 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar4 == 0) goto LAB_00c0a0d9;
  }
  else {
    FUN_00d50b00();
    lVar4 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar4 == lVar1) {
      FUN_00d50b20();
      goto LAB_00c0a0d9;
    }
  }
  *(longlong *)(unaff_RDI + 0x90) = lVar1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_00c0a0d9:
  *(undefined4 *)(unaff_RDI + 0xa8) = 4;
  if ((DAT_028a5c78 == (undefined8 *)0x0) || (DAT_028a5c81 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a5c78 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_0254ed40;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      FUN_00d500e0();
      bVar5 = DAT_028a5c78 == (undefined8 *)0x0;
      DAT_028a5c78 = puVar3;
      if (((bVar5) || (FUN_00d50b20(), lVar1 = DAT_0276c0a8, DAT_028a5c78 != (undefined8 *)0x0)) &&
         (lVar1 = DAT_0276c0a8, DAT_028a5c80 == '\0')) {
        DAT_028a5c80 = '\x01';
        FUN_00e8cb90();
        lVar1 = DAT_0276c0a8;
      }
      DAT_0276c0a8 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c0b0;
      local_c0 = 1;
      local_c8 = lVar1;
      if (DAT_0276c0b0 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar4;
      local_b0 = 1;
      FUN_00bf1030(&local_b8,&local_c8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276c0b8;
      if (DAT_0276c0b8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c0c0;
      local_a8 = lVar1;
      local_a0 = 1;
      if (DAT_0276c0c0 != 0) {
        FUN_00d50b00();
      }
      local_98 = lVar4;
      local_90 = 1;
      FUN_00bf1030(&local_98,&local_a8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276c0c8;
      if (DAT_0276c0c8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c0d0;
      local_88 = lVar1;
      local_80 = 1;
      if (DAT_0276c0d0 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar4;
      local_70 = 1;
      FUN_00bf1030(&local_78,&local_88);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276c0d8;
      if (DAT_0276c0d8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c0e0;
      local_68 = lVar1;
      local_60 = 1;
      if (DAT_0276c0e0 != 0) {
        FUN_00d50b00();
      }
      local_58 = lVar4;
      local_50 = 1;
      FUN_00bf1030(&local_58,&local_68);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276be48;
      if (DAT_0276be48 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276be50;
      local_48 = lVar1;
      local_40 = 1;
      if (DAT_0276be50 != 0) {
        FUN_00d50b00();
      }
      local_38 = lVar4;
      local_30 = 1;
      FUN_00bf1030(&local_38,&local_48);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      DAT_028a5c81 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a5c81 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = *(undefined8 **)(unaff_RDI + 0xb0);
    if (puVar3 == DAT_028a5c78) {
      return;
    }
  }
  else {
    puVar3 = *(undefined8 **)(unaff_RDI + 0xb0);
    if (puVar3 == DAT_028a5c78) {
      return;
    }
  }
  puVar2 = DAT_028a5c78;
  if (DAT_028a5c78 != (undefined8 *)0x0) {
    FUN_00d50b00();
  }
  *(undefined8 **)(unaff_RDI + 0xb0) = puVar2;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @00c05b10 — 993 bytes
// ============================================================

void FUN_00c05b10(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong unaff_RDI;
  longlong lVar4;
  bool bVar5;
  longlong local_c8;
  undefined1 local_c0;
  longlong local_b8;
  undefined1 local_b0;
  longlong local_a8;
  undefined1 local_a0;
  longlong local_98;
  undefined1 local_90;
  longlong local_88;
  undefined1 local_80;
  longlong local_78;
  undefined1 local_70;
  longlong local_68;
  undefined1 local_60;
  longlong local_58;
  undefined1 local_50;
  longlong local_48;
  undefined1 local_40;
  longlong local_38;
  undefined1 local_30;
  
  *(undefined4 *)(unaff_RDI + 0xb8) = 7;
  lVar1 = DAT_0276c138;
  if (DAT_0276c138 == 0) {
    lVar4 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar4 == 0) goto LAB_00c05b79;
  }
  else {
    FUN_00d50b00();
    lVar4 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar4 == lVar1) {
      FUN_00d50b20();
      goto LAB_00c05b79;
    }
  }
  *(longlong *)(unaff_RDI + 0x90) = lVar1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_00c05b79:
  *(undefined4 *)(unaff_RDI + 0xa8) = 4;
  if ((DAT_028a5bf8 == (undefined8 *)0x0) || (DAT_028a5c01 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a5bf8 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_0254ed40;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      FUN_00d500e0();
      bVar5 = DAT_028a5bf8 == (undefined8 *)0x0;
      DAT_028a5bf8 = puVar3;
      if (((bVar5) || (FUN_00d50b20(), lVar1 = DAT_0276c0a8, DAT_028a5bf8 != (undefined8 *)0x0)) &&
         (lVar1 = DAT_0276c0a8, DAT_028a5c00 == '\0')) {
        DAT_028a5c00 = '\x01';
        FUN_00e8cb90();
        lVar1 = DAT_0276c0a8;
      }
      DAT_0276c0a8 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c0b0;
      local_c0 = 1;
      local_c8 = lVar1;
      if (DAT_0276c0b0 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar4;
      local_b0 = 1;
      FUN_00bf1030(&local_b8,&local_c8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276c140;
      if (DAT_0276c140 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c148;
      local_a8 = lVar1;
      local_a0 = 1;
      if (DAT_0276c148 != 0) {
        FUN_00d50b00();
      }
      local_98 = lVar4;
      local_90 = 1;
      FUN_00bf1030(&local_98,&local_a8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027bed58;
      if (DAT_027bed58 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bfe0;
      local_88 = lVar1;
      local_80 = 1;
      if (DAT_0276bfe0 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar4;
      local_70 = 1;
      FUN_00bf1030(&local_78,&local_88);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276c0b8;
      if (DAT_0276c0b8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c0c0;
      local_68 = lVar1;
      local_60 = 1;
      if (DAT_0276c0c0 != 0) {
        FUN_00d50b00();
      }
      local_58 = lVar4;
      local_50 = 1;
      FUN_00bf1030(&local_58,&local_68);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276c0c8;
      if (DAT_0276c0c8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c0d0;
      local_48 = lVar1;
      local_40 = 1;
      if (DAT_0276c0d0 != 0) {
        FUN_00d50b00();
      }
      local_38 = lVar4;
      local_30 = 1;
      FUN_00bf1030(&local_38,&local_48);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      DAT_028a5c01 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a5c01 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = *(undefined8 **)(unaff_RDI + 0xb0);
    if (puVar3 == DAT_028a5bf8) {
      return;
    }
  }
  else {
    puVar3 = *(undefined8 **)(unaff_RDI + 0xb0);
    if (puVar3 == DAT_028a5bf8) {
      return;
    }
  }
  puVar2 = DAT_028a5bf8;
  if (DAT_028a5bf8 != (undefined8 *)0x0) {
    FUN_00d50b00();
  }
  *(undefined8 **)(unaff_RDI + 0xb0) = puVar2;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @00c06f30 — 990 bytes
// ============================================================

void FUN_00c06f30(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong unaff_RDI;
  longlong lVar4;
  bool bVar5;
  longlong local_c8;
  undefined1 local_c0;
  longlong local_b8;
  undefined1 local_b0;
  longlong local_a8;
  undefined1 local_a0;
  longlong local_98;
  undefined1 local_90;
  longlong local_88;
  undefined1 local_80;
  longlong local_78;
  undefined1 local_70;
  longlong local_68;
  undefined1 local_60;
  longlong local_58;
  undefined1 local_50;
  longlong local_48;
  undefined1 local_40;
  longlong local_38;
  undefined1 local_30;
  
  *(undefined4 *)(unaff_RDI + 0xb8) = 8;
  lVar1 = DAT_0276c150;
  if (DAT_0276c150 == 0) {
    lVar4 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar4 == 0) goto LAB_00c06f99;
  }
  else {
    FUN_00d50b00();
    lVar4 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar4 == lVar1) {
      FUN_00d50b20();
      goto LAB_00c06f99;
    }
  }
  *(longlong *)(unaff_RDI + 0x90) = lVar1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_00c06f99:
  *(undefined4 *)(unaff_RDI + 0xa8) = 4;
  if ((DAT_028a5c18 == (undefined8 *)0x0) || (DAT_028a5c21 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a5c18 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_0254ed40;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      FUN_00d500e0();
      bVar5 = DAT_028a5c18 == (undefined8 *)0x0;
      DAT_028a5c18 = puVar3;
      if (((bVar5) || (FUN_00d50b20(), lVar1 = DAT_0276c158, DAT_028a5c18 != (undefined8 *)0x0)) &&
         (lVar1 = DAT_0276c158, DAT_028a5c20 == '\0')) {
        DAT_028a5c20 = '\x01';
        FUN_00e8cb90();
        lVar1 = DAT_0276c158;
      }
      DAT_0276c158 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c160;
      local_c0 = 1;
      local_c8 = lVar1;
      if (DAT_0276c160 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar4;
      local_b0 = 1;
      FUN_00bf1030(&local_b8,&local_c8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276c0a8;
      if (DAT_0276c0a8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c0b0;
      local_a8 = lVar1;
      local_a0 = 1;
      if (DAT_0276c0b0 != 0) {
        FUN_00d50b00();
      }
      local_98 = lVar4;
      local_90 = 1;
      FUN_00bf1030(&local_98,&local_a8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276c168;
      if (DAT_0276c168 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c170;
      local_88 = lVar1;
      local_80 = 1;
      if (DAT_0276c170 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar4;
      local_70 = 1;
      FUN_00bf1030(&local_78,&local_88);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276c0c8;
      if (DAT_0276c0c8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c0d0;
      local_68 = lVar1;
      local_60 = 1;
      if (DAT_0276c0d0 != 0) {
        FUN_00d50b00();
      }
      local_58 = lVar4;
      local_50 = 1;
      FUN_00bf1030(&local_58,&local_68);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276c178;
      if (DAT_0276c178 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c180;
      local_48 = lVar1;
      local_40 = 1;
      if (DAT_0276c180 != 0) {
        FUN_00d50b00();
      }
      local_38 = lVar4;
      local_30 = 1;
      FUN_00bf1030(&local_38,&local_48);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      DAT_028a5c21 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a5c21 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = *(undefined8 **)(unaff_RDI + 0xb0);
    if (puVar3 == DAT_028a5c18) {
      return;
    }
  }
  else {
    puVar3 = *(undefined8 **)(unaff_RDI + 0xb0);
    if (puVar3 == DAT_028a5c18) {
      return;
    }
  }
  puVar2 = DAT_028a5c18;
  if (DAT_028a5c18 != (undefined8 *)0x0) {
    FUN_00d50b00();
  }
  *(undefined8 **)(unaff_RDI + 0xb0) = puVar2;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @00c0ea10 — 932 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00c0eaa7) */
/* WARNING: Removing unreachable block (ram,0x00c0eaac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00c0ea10(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  char cVar4;
  longlong **pplVar5;
  longlong *plVar6;
  longlong *in_RDX;
  int unaff_ESI;
  longlong unaff_RDI;
  float fVar7;
  undefined8 in_XMM1_Qb;
  undefined1 auVar8 [16];
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  local_88 = *in_RDX;
  local_80 = '\0';
  uVar2 = FUN_00b3c720(param_1,&local_88);
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_ESI != 0) {
    return uVar2;
  }
  FUN_00d23340();
  plVar6 = local_38;
  local_70 = local_30 != '\0';
  local_78 = local_38;
  if ((bool)local_70) {
    local_30 = '\0';
  }
  FUN_00c4d260();
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') {
      pplVar5 = &local_78;
      plVar3 = local_78;
      cVar4 = local_70;
      goto joined_r0x00c0eaea;
    }
  }
  pplVar5 = &DAT_02802688;
  plVar3 = DAT_02802688;
  cVar4 = DAT_02802690;
joined_r0x00c0eaea:
  if (cVar4 == '\0') {
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_70 != '\0') && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    fVar7 = (float)(**(code **)(*(longlong *)plVar3[0x12] + 0x4d8))();
    plVar6 = (longlong *)FUN_00e8fc40();
    FUN_0006daf0();
    *(undefined4 *)(plVar6 + 0x27) = 0;
    plVar6[0x2e] = 0;
    *(undefined4 *)(plVar6 + 0x2f) = 0;
    plVar6[0x30] = 0;
    *(undefined1 *)(plVar6 + 0x31) = 0;
    plVar6[0x28] = 0;
    plVar6[0x29] = 0;
    *(undefined4 *)(plVar6 + 0x2a) = 0;
    plVar6[0x2b] = 0;
    plVar6[0x2c] = 0;
    *(undefined8 *)((longlong)plVar6 + 0x165) = 0;
    *(undefined8 *)((longlong)plVar6 + 0x18c) = 0;
    *(undefined8 *)((longlong)plVar6 + 0x194) = 0;
    *(undefined8 *)((longlong)plVar6 + 0x199) = 0;
    plVar6[0x35] = 0;
    plVar6[0x36] = 0;
    plVar6[0x37] = 0;
    plVar6[0x38] = 0;
    *plVar6 = (longlong)&DAT_02677e10;
    plVar6[2] = (longlong)&DAT_026788e8;
    plVar6[0x39] = (longlong)&DAT_02678928;
    *(undefined4 *)((longlong)plVar6 + 500) = 0;
    *(undefined1 *)(plVar6 + 0x3f) = 0;
    plVar6[0x43] = 0;
    plVar6[0x3c] = 0;
    plVar6[0x3d] = 0;
    plVar6[0x3a] = 0;
    plVar6[0x3b] = 0;
    *(undefined1 *)(plVar6 + 0x3e) = 0;
    *(undefined8 *)((longlong)plVar6 + 0x1fc) = 0;
    *(undefined8 *)((longlong)plVar6 + 0x204) = 0;
    *(undefined8 *)((longlong)plVar6 + 0x20c) = 0;
    (*DAT_02677e28)();
    lVar1 = *(longlong *)(unaff_RDI + 0xb8);
    *(longlong **)(unaff_RDI + 0xb8) = plVar6;
    if (lVar1 != 0) {
      FUN_00d50b20();
      plVar6 = *(longlong **)(unaff_RDI + 0xb8);
    }
    auVar8._8_8_ = in_XMM1_Qb;
    auVar8._0_8_ = param_2;
    auVar8 = blendps(auVar8,_DAT_023b5da0,0xd);
    (**(code **)(*plVar6 + 0x4d0))(fVar7 + DAT_02390d30 + (float)param_2,auVar8._0_8_);
    local_68 = DAT_0276c280;
    plVar6 = *(longlong **)(unaff_RDI + 0xb8);
    if (DAT_0276c280 != 0) {
      FUN_00d50b00();
    }
    local_60 = '\x01';
    (**(code **)(*plVar6 + 0x958))();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_0276c288;
    plVar6 = *(longlong **)(unaff_RDI + 0xb8);
    if (DAT_0276c288 != 0) {
      FUN_00d50b00();
    }
    local_58 = lVar1;
    local_50 = '\x01';
    (**(code **)(*plVar6 + 0xa10))();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    FUN_01e53c20();
    plVar6 = local_38;
    local_40 = 0;
    local_48 = *(longlong *)(unaff_RDI + 0xb8);
    if (local_48 != 0) {
      FUN_00d50b00();
    }
    local_40 = '\x01';
    (**(code **)(*plVar6 + 0x450))();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return uVar2;
}




// ============================================================
// @00c0ef00 — 547 bytes
// ============================================================

void FUN_00c0ef00(undefined4 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong **pplVar5;
  int unaff_ESI;
  longlong *unaff_RDI;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  
  pplVar5 = &local_48;
  (**(code **)(*unaff_RDI + 0x5d0))();
  local_38 = local_48;
  if ((((local_40 == '\0') && (local_48 != (longlong *)0x0)) && (FUN_00d50b00(), local_40 != '\0'))
     && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00b3c6f0(param_1);
  plVar1 = *(longlong **)(*(longlong *)(unaff_RDI[0x13] + 0x10) + (longlong)unaff_ESI * 8);
  local_40 = '\0';
  local_48 = plVar1;
  FUN_00c4d260();
  if (plVar1 == (longlong *)0x0) {
LAB_00c0efb3:
    pplVar5 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_00c0efb3;
  }
  plVar2 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar5 + 1) = 0;
    if ((local_40 != '\0') && (plVar1 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  plVar1 = local_38;
  if (((unaff_ESI == 0) && (unaff_RDI[0x17] != 0)) && (plVar2 != (longlong *)0x0)) {
    if (local_38[0x19] == 0) {
      (**(code **)(*(longlong *)plVar2[0x11] + 0x998))();
      (**(code **)(*(longlong *)plVar2[0x12] + 0x998))();
      lVar3 = DAT_0276c280;
      plVar2 = (longlong *)unaff_RDI[0x17];
      if (DAT_0276c280 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar2 + 0x958))();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(*(longlong *)plVar2[0x11] + 0x998))();
      (**(code **)(*(longlong *)plVar2[0x12] + 0x998))();
      lVar3 = DAT_0276c290;
      plVar2 = (longlong *)unaff_RDI[0x17];
      if (DAT_0276c290 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar2 + 0x958))();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
  }
  else if (plVar2 == (longlong *)0x0) goto LAB_00c0efff;
  FUN_00d50b20();
LAB_00c0efff:
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00bff5f0 — 513 bytes
// str: ""GNOverloudGainReductionView""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00bff718) */
/* WARNING: Removing unreachable block (ram,0x00bff726) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bff5f0(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_198;
  longlong local_190;
  
  if ((DAT_0276f710 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_0276f660 = FUN_0006d940();
    _DAT_0276f648 = "GNOverloudGainReductionView";
    _DAT_0276f650 = 0x158;
    _DAT_0276f658 = FUN_00c43db0;
    _DAT_0276f668 = 0;
    uRam000000000276f670 = 0;
    _DAT_0276f678 = 0;
    uRam000000000276f680 = 0;
    _DAT_0276f688 = 0;
    uRam000000000276f690 = 0;
    _DAT_0276f698 = 0;
    uRam000000000276f6a0 = 0;
    _DAT_0276f6a8 = 0;
    uRam000000000276f6b0 = 0;
    _DAT_0276f6b8 = 0;
    uRam000000000276f6c0 = 0;
    _DAT_0276f6c8 = 0;
    uRam000000000276f6d0 = 0;
    _DAT_0276f6d8 = 0;
    uRam000000000276f6e0 = 0;
    _DAT_0276f6e8 = 0;
    uRam000000000276f6f0 = 0;
    _DAT_0276f6f8 = 0;
    _uRam000000000276f700 = 0;
    _DAT_0276f708 = 0;
    ___cxa_guard_release();
  }
  if (DAT_0276f703 == '\0') {
    FUN_000a31d0();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_00c4c550();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_00bff8e0();
    FUN_00e87920(uVar2,0);
    if (local_190 != 0) {
      FUN_00d50b20();
    }
    if (local_198 != 0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
    FUN_0006d770();
  }
  return;
}



