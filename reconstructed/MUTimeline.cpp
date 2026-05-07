// Reconstructed implementation of MUTimeline
// From MikeCore binary — reverse-engineered pseudocode

#include "MUTimeline.h"

// ============================================================
// @00823ca0 — 959 bytes
// str: ""bool""
// str: ""MUTimeline""
// str: ""GNPropertyObserver""
// str: ""_numerator""
// str: ""_denominator""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00823ca0(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_008233b0();
  unaff_RDI[5] = &DAT_025768d0;
  if (DAT_026ea710 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f7680 = "GNPropertyObserver";
      DAT_026f7690 = 0;
      _DAT_026f7688 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_02639460;
  unaff_RDI[5] = &DAT_02639858;
  unaff_RDI[6] = 0;
  lVar2 = FUN_00083c20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00824120();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTimeline");
  }
  *(undefined4 *)(unaff_RDI + 7) = 0;
  lVar2 = FUN_00083c20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02731828 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027317f0 = FUN_00083c20();
        _DAT_027317e8 = "_numerator";
        _DAT_027317f8 = 0;
        _DAT_02731800 = 0x6900;
        _DAT_02731808 = "GNInt";
        _DAT_02731810 = 0;
        uRam0000000002731818 = 0;
        _DAT_02731820 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x3c) = 0;
  lVar2 = FUN_00083c20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02731870 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02731838 = FUN_00083c20();
        _DAT_02731830 = "_denominator";
        _DAT_02731840 = 0;
        _DAT_02731848 = 0x6900;
        _DAT_02731850 = "GNInt";
        _DAT_02731858 = 0;
        uRam0000000002731860 = 0;
        _DAT_02731868 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[8] = 0;
  lVar2 = FUN_00083c20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027318b8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02731880 = FUN_00083c20();
        _DAT_02731878 = "_offset";
        _DAT_02731888 = 0;
        _DAT_02731890 = 0x6400;
        _DAT_02731898 = "double";
        _DAT_027318a0 = 0;
        uRam00000000027318a8 = 0;
        _DAT_027318b0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_00824210();
  *(undefined1 *)(unaff_RDI + 10) = 0;
  lVar2 = FUN_00083c20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02731948 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02731910 = FUN_00083c20();
        _DAT_02731908 = "_isDynamicTimeGrid";
        _DAT_02731918 = 0;
        _DAT_02731920 = 0x6200;
        _DAT_02731928 = "bool";
        _DAT_02731930 = 0;
        uRam0000000002731938 = 0;
        _DAT_02731940 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @0112e4c0 — 700 bytes
// str: ""MUTimeline""
// str: ""MUPart""
// str: ""MUQuarterSequence""
// str: ""MUPerformance""
// str: ""_composition""
// ============================================================

void FUN_0112e4c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  char *pcVar10;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 *puVar11;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_02590538;
  uVar1 = *(undefined4 *)(unaff_RSI + 0x14);
  uVar2 = *(undefined4 *)(unaff_RSI + 0x18);
  uVar3 = *(undefined4 *)(unaff_RSI + 0x1c);
  uVar4 = *(undefined4 *)(unaff_RSI + 0x20);
  uVar5 = *(undefined4 *)(unaff_RSI + 0x24);
  uVar6 = *(undefined4 *)(unaff_RSI + 0x28);
  uVar7 = *(undefined4 *)(unaff_RSI + 0x2c);
  *(undefined4 *)(unaff_RDI + 2) = *(undefined4 *)(unaff_RSI + 0x10);
  *(undefined4 *)((longlong)unaff_RDI + 0x14) = uVar1;
  *(undefined4 *)(unaff_RDI + 3) = uVar2;
  *(undefined4 *)((longlong)unaff_RDI + 0x1c) = uVar3;
  *(undefined4 *)(unaff_RDI + 4) = uVar4;
  *(undefined4 *)((longlong)unaff_RDI + 0x24) = uVar5;
  *(undefined4 *)(unaff_RDI + 5) = uVar6;
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = uVar7;
  unaff_RDI[6] = *(undefined8 *)(unaff_RSI + 0x30);
  *unaff_RDI = &DAT_025e90a0;
  unaff_RDI[7] = 0;
  lVar9 = FUN_000be210();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0112e8f0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_composition";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUPart");
  }
  unaff_RDI[8] = 0;
  lVar9 = FUN_000be210();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0112e9e0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_composition";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUPerformance");
  }
  unaff_RDI[9] = 0;
  lVar9 = FUN_000be210();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0112ead0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUQuarterSequence");
  }
  puVar11 = unaff_RDI + 10;
  unaff_RDI[10] = 0;
  lVar9 = FUN_000be210();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0112ebc0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUCompositionDescription",param_3,param_4,puVar11);
  }
  unaff_RDI[0xb] = 0;
  lVar9 = FUN_000be210();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0112ecb0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_composition";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUCompositionLayout");
  }
  unaff_RDI[0xc] = 0;
  lVar9 = FUN_000be210();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0112eda0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTimeline");
  }
  unaff_RDI[0xd] = 0;
  lVar9 = FUN_000be210();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0112ee90();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUPulseTimeline");
  }
  return;
}



