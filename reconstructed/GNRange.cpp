// Reconstructed implementation of GNRange
// From MikeCore binary — reverse-engineered pseudocode

#include "GNRange.h"

// ============================================================
// @00057c70 — 756 bytes
// str: ""bool""
// str: ""_destinationCardinality""
// str: ""GNRange""
// str: ""_sourceOwnsDestination""
// str: ""_sourceRetainsDestination""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00057c70(void)

{
  int iVar1;
  longlong lVar2;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_000278b0();
  *unaff_RDI = &DAT_025783f8;
  FUN_00057ff0();
  FUN_000580d0();
  unaff_RDI[0xc] = 0;
  lVar2 = FUN_00057a80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d5140 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d5108 = FUN_00057a80();
        _DAT_026d5100 = "_destinationCardinality";
        _DAT_026d5110 = 0;
        _DAT_026d5118 = 0x4300;
        _DAT_026d5120 = "GNRange";
        _DAT_026d5128 = 0;
        uRam00000000026d5130 = 0;
        _DAT_026d5138 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0xd) = 0;
  lVar2 = FUN_00057a80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d5188 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d5150 = FUN_00057a80();
        _DAT_026d5148 = "_sourceOwnsDestination";
        _DAT_026d5158 = 0;
        _DAT_026d5160 = 0x6200;
        _DAT_026d5168 = "bool";
        _DAT_026d5170 = 0;
        uRam00000000026d5178 = 0;
        _DAT_026d5180 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x69) = 0;
  lVar2 = FUN_00057a80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d51d0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d5198 = FUN_00057a80();
        _DAT_026d5190 = "_sourceRetainsDestination";
        _DAT_026d51a0 = 0;
        _DAT_026d51a8 = 0x6200;
        _DAT_026d51b0 = "bool";
        _DAT_026d51b8 = 0;
        uRam00000000026d51c0 = 0;
        _DAT_026d51c8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x6a) = 0;
  lVar2 = FUN_00057a80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d5218 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d51e0 = FUN_00057a80();
        _DAT_026d51d8 = "_isDestinationListOrdered";
        _DAT_026d51e8 = 0;
        _DAT_026d51f0 = 0x6200;
        _DAT_026d51f8 = "bool";
        _DAT_026d5200 = 0;
        uRam00000000026d5208 = 0;
        _DAT_026d5210 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xe] = *(undefined8 *)(unaff_RSI + 0x70);
  return;
}




// ============================================================
// @001e1200 — 595 bytes
// str: ""GNRange""
// str: ""GNRect""
// str: ""GNLayoutLine""
// str: ""_rect""
// str: ""GNParagraphFormat""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e1200(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_001e02c0();
  *unaff_RDI = &DAT_026a9e08;
  FUN_001e1580();
  unaff_RDI[8] = 0;
  lVar2 = FUN_001dffe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001e1660();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNParagraphFormat");
  }
  unaff_RDI[9] = 0;
  lVar2 = FUN_001dffe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001e1750();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNLayoutLine");
  }
  unaff_RDI[10] = 0;
  lVar2 = FUN_001dffe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026efab0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026efa78 = FUN_001dffe0();
        _DAT_026efa70 = "_substringRange";
        _DAT_026efa80 = 0;
        _DAT_026efa88 = 0x4300;
        _DAT_026efa90 = "GNRange";
        _DAT_026efa98 = 0;
        uRam00000000026efaa0 = 0;
        _DAT_026efaa8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_001e1840();
  unaff_RDI[0xc] = 0;
  unaff_RDI[0xd] = 0;
  lVar2 = FUN_001dffe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026efb00 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026efac8 = FUN_001dffe0();
        _DAT_026efac0 = "_rect";
        _DAT_026efad0 = 0;
        _DAT_026efad8 = 0x5200;
        _DAT_026efae0 = "GNRect";
        _DAT_026efae8 = 0;
        uRam00000000026efaf0 = 0;
        _DAT_026efaf8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}



