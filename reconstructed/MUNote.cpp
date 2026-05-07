// Reconstructed implementation of MUNote
// From MikeCore binary — reverse-engineered pseudocode

#include "MUNote.h"

// ============================================================
// @01180ab0 — 964 bytes
// str: ""bool""
// str: ""MUNote""
// str: ""GNInt""
// str: ""_relatesToChord""
// str: ""_relatesToKey""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01180ab0(void)

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
  *unaff_RDI = &DAT_025c2b00;
  *(undefined1 *)(unaff_RDI + 7) = 0;
  lVar9 = FUN_01180840();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027a9000 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027a8fc8 = FUN_01180840();
        _DAT_027a8fc0 = "_relatesToChord";
        _DAT_027a8fd0 = 0;
        _DAT_027a8fd8 = 0x6200;
        _DAT_027a8fe0 = "bool";
        _DAT_027a8fe8 = 0;
        uRam00000000027a8ff0 = 0;
        _DAT_027a8ff8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x39) = 0;
  lVar9 = FUN_01180840();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027a9048 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027a9010 = FUN_01180840();
        _DAT_027a9008 = "_relatesToKey";
        _DAT_027a9018 = 0;
        _DAT_027a9020 = 0x6200;
        _DAT_027a9028 = "bool";
        _DAT_027a9030 = 0;
        uRam00000000027a9038 = 0;
        _DAT_027a9040 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x3a) = 0;
  lVar9 = FUN_01180840();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027a9090 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027a9058 = FUN_01180840();
        _DAT_027a9050 = "_relatesToNextNote";
        _DAT_027a9060 = 0;
        _DAT_027a9068 = 0x6200;
        _DAT_027a9070 = "bool";
        _DAT_027a9078 = 0;
        uRam00000000027a9080 = 0;
        _DAT_027a9088 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x3c) = 0;
  lVar9 = FUN_01180840();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01180f10();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 8) = 0;
  lVar9 = FUN_01180840();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027a9188 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027a9150 = FUN_01180840();
        _DAT_027a9148 = "_role";
        _DAT_027a9158 = 0;
        _DAT_027a9160 = 0x6900;
        _DAT_027a9168 = "GNInt";
        _DAT_027a9170 = 0;
        uRam00000000027a9178 = 0;
        _DAT_027a9180 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[9] = 0;
  lVar9 = FUN_01180840();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01181080();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUNote");
  }
  unaff_RDI[10] = 0;
  lVar9 = FUN_01180840();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01181170();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUNote");
  }
  return;
}



