// Reconstructed implementation of GNDrawPath
// From MikeCore binary — reverse-engineered pseudocode

#include "GNDrawPath.h"

// ============================================================
// @001c6ac0 — 818 bytes
// str: ""GNDrawPath""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001c6ac0(void)

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
  *unaff_RDI = &DAT_02680400;
  *(undefined4 *)((longlong)unaff_RDI + 0xc) = 0;
  if (DAT_026ec2f0 == '\0') {
    iVar8 = ___cxa_guard_acquire();
    if (iVar8 != 0) {
      _DAT_026ec240 = FUN_00d4fe50();
      _DAT_026ec228 = "GNDrawPath";
      _DAT_026ec230 = 0x50;
      _DAT_026ec238 = FUN_001c6a70;
      _DAT_026ec248 = 0;
      uRam00000000026ec250 = 0;
      _DAT_026ec258 = 0;
      _DAT_026ec2d0 = 0;
      uRam00000000026ec2d8 = 0;
      _DAT_026ec2e0 = 0;
      DAT_026ec2e2 = 1;
      _DAT_026ec260 = 0;
      uRam00000000026ec268 = 0;
      _DAT_026ec270 = 0;
      uRam00000000026ec278 = 0;
      _DAT_026ec280 = 0;
      uRam00000000026ec288 = 0;
      _DAT_026ec290 = 0;
      uRam00000000026ec298 = 0;
      _DAT_026ec2a0 = 0;
      uRam00000000026ec2a8 = 0;
      _DAT_026ec2b0 = 0;
      uRam00000000026ec2b8 = 0;
      _DAT_026ec2c0 = 0;
      uRam00000000026ec2c8 = 0;
      DAT_026ec2eb = 0;
      _DAT_026ec2e3 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026ec2e3 == '\0') {
    FUN_001c6e50();
    FUN_00e87980();
  }
  uVar1 = *(undefined4 *)(unaff_RSI + 0x10);
  uVar2 = *(undefined4 *)(unaff_RSI + 0x14);
  uVar3 = *(undefined4 *)(unaff_RSI + 0x18);
  uVar4 = *(undefined4 *)(unaff_RSI + 0x1c);
  uVar5 = *(undefined4 *)(unaff_RSI + 0x24);
  uVar6 = *(undefined4 *)(unaff_RSI + 0x28);
  uVar7 = *(undefined4 *)(unaff_RSI + 0x2c);
  *(undefined4 *)(unaff_RDI + 4) = *(undefined4 *)(unaff_RSI + 0x20);
  *(undefined4 *)((longlong)unaff_RDI + 0x24) = uVar5;
  *(undefined4 *)(unaff_RDI + 5) = uVar6;
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = uVar7;
  *(undefined4 *)(unaff_RDI + 2) = uVar1;
  *(undefined4 *)((longlong)unaff_RDI + 0x14) = uVar2;
  *(undefined4 *)(unaff_RDI + 3) = uVar3;
  *(undefined4 *)((longlong)unaff_RDI + 0x1c) = uVar4;
  FUN_001c6fe0();
  unaff_RDI[7] = 0;
  unaff_RDI[8] = 0;
  if (DAT_026ec2f0 == '\0') {
    iVar8 = ___cxa_guard_acquire();
    if (iVar8 != 0) {
      _DAT_026ec240 = FUN_00d4fe50();
      _DAT_026ec228 = "GNDrawPath";
      _DAT_026ec230 = 0x50;
      _DAT_026ec238 = FUN_001c6a70;
      _DAT_026ec248 = 0;
      uRam00000000026ec250 = 0;
      _DAT_026ec258 = 0;
      _DAT_026ec2d0 = 0;
      uRam00000000026ec2d8 = 0;
      _DAT_026ec2e0 = 0;
      DAT_026ec2e2 = 1;
      _DAT_026ec260 = 0;
      uRam00000000026ec268 = 0;
      _DAT_026ec270 = 0;
      uRam00000000026ec278 = 0;
      _DAT_026ec280 = 0;
      uRam00000000026ec288 = 0;
      _DAT_026ec290 = 0;
      uRam00000000026ec298 = 0;
      _DAT_026ec2a0 = 0;
      uRam00000000026ec2a8 = 0;
      _DAT_026ec2b0 = 0;
      uRam00000000026ec2b8 = 0;
      _DAT_026ec2c0 = 0;
      uRam00000000026ec2c8 = 0;
      DAT_026ec2eb = 0;
      _DAT_026ec2e3 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026ec2e3 == '\0') {
    FUN_001c72a0();
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 9) = 0;
  if (DAT_026ec2f0 == '\0') {
    iVar8 = ___cxa_guard_acquire();
    if (iVar8 != 0) {
      _DAT_026ec240 = FUN_00d4fe50();
      _DAT_026ec228 = "GNDrawPath";
      _DAT_026ec230 = 0x50;
      _DAT_026ec238 = FUN_001c6a70;
      _DAT_026ec248 = 0;
      uRam00000000026ec250 = 0;
      _DAT_026ec258 = 0;
      _DAT_026ec2d0 = 0;
      uRam00000000026ec2d8 = 0;
      _DAT_026ec2e0 = 0;
      DAT_026ec2e2 = 1;
      _DAT_026ec260 = 0;
      uRam00000000026ec268 = 0;
      _DAT_026ec270 = 0;
      uRam00000000026ec278 = 0;
      _DAT_026ec280 = 0;
      uRam00000000026ec288 = 0;
      _DAT_026ec290 = 0;
      uRam00000000026ec298 = 0;
      _DAT_026ec2a0 = 0;
      uRam00000000026ec2a8 = 0;
      _DAT_026ec2b0 = 0;
      uRam00000000026ec2b8 = 0;
      _DAT_026ec2c0 = 0;
      uRam00000000026ec2c8 = 0;
      DAT_026ec2eb = 0;
      _DAT_026ec2e3 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026ec2e3 == '\0') {
    FUN_001c7430();
    FUN_00e87980();
  }
  return;
}



