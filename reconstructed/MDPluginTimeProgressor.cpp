// Reconstructed implementation of MDPluginTimeProgressor
// From MikeCore binary — reverse-engineered pseudocode

#include "MDPluginTimeProgressor.h"

// ============================================================
// @005dbd30 — 570 bytes
// str: ""MDPluginTimeProgressor""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005dbd30(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
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
  *unaff_RDI = &DAT_024c0af0;
  unaff_RDI[7] = 0;
  if (DAT_0271d230 == '\0') {
    iVar8 = ___cxa_guard_acquire();
    if (iVar8 != 0) {
      _DAT_026cce88 = FUN_00018c10();
      _DAT_026cce70 = "MDPluginTimeProgressor";
      _DAT_026cce78 = 0x48;
      _DAT_026cce80 = FUN_00018bd0;
      _DAT_026cce90 = 0;
      uRam00000000026cce98 = 0;
      _DAT_026ccea0 = 0;
      _DAT_026ccf18 = 0;
      uRam00000000026ccf20 = 0;
      _DAT_026ccf28 = 0;
      DAT_026ccf2a = 1;
      _DAT_026ccea8 = 0;
      uRam00000000026cceb0 = 0;
      _DAT_026cceb8 = 0;
      uRam00000000026ccec0 = 0;
      _DAT_026ccec8 = 0;
      uRam00000000026cced0 = 0;
      _DAT_026cced8 = 0;
      uRam00000000026ccee0 = 0;
      _DAT_026ccee8 = 0;
      uRam00000000026ccef0 = 0;
      _DAT_026ccef8 = 0;
      uRam00000000026ccf00 = 0;
      _DAT_026ccf08 = 0;
      uRam00000000026ccf10 = 0;
      DAT_026ccf33 = 0;
      _DAT_026ccf2b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026ccf2b == '\0') {
    FUN_005dbf90();
    FUN_00e87980();
  }
  unaff_RDI[8] = 0;
  if (DAT_0271d230 == '\0') {
    iVar8 = ___cxa_guard_acquire();
    if (iVar8 != 0) {
      _DAT_026cce88 = FUN_00018c10();
      _DAT_026cce70 = "MDPluginTimeProgressor";
      _DAT_026cce78 = 0x48;
      _DAT_026cce80 = FUN_00018bd0;
      _DAT_026cce90 = 0;
      uRam00000000026cce98 = 0;
      _DAT_026ccea0 = 0;
      _DAT_026ccf18 = 0;
      uRam00000000026ccf20 = 0;
      _DAT_026ccf28 = 0;
      DAT_026ccf2a = 1;
      _DAT_026ccea8 = 0;
      uRam00000000026cceb0 = 0;
      _DAT_026cceb8 = 0;
      uRam00000000026ccec0 = 0;
      _DAT_026ccec8 = 0;
      uRam00000000026cced0 = 0;
      _DAT_026cced8 = 0;
      uRam00000000026ccee0 = 0;
      _DAT_026ccee8 = 0;
      uRam00000000026ccef0 = 0;
      _DAT_026ccef8 = 0;
      uRam00000000026ccf00 = 0;
      _DAT_026ccf08 = 0;
      uRam00000000026ccf10 = 0;
      DAT_026ccf33 = 0;
      _DAT_026ccf2b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026ccf2b == '\0') {
    FUN_005dc120();
    FUN_00e87980();
  }
  return;
}



