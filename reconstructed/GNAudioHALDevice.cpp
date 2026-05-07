// Reconstructed implementation of GNAudioHALDevice
// From MikeCore binary — reverse-engineered pseudocode

#include "GNAudioHALDevice.h"

// ============================================================
// @007c7bc0 — 2403 bytes
// str: ""GNAudioHALDevice""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c7bc0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_007c71c0();
  *unaff_RDI = &DAT_0252f870;
  *(undefined1 *)((longlong)unaff_RDI + 0xcc) = 0;
  if (DAT_0272ec30 == '\0') {
    iVar5 = ___cxa_guard_acquire();
    if (iVar5 != 0) {
      _DAT_0275dd38 = FUN_00370d10();
      _DAT_0275dd20 = "GNAudioHALDevice";
      _DAT_0275dd28 = 0x128;
      _DAT_0275dd30 = FUN_007c7190;
      _DAT_0275dd40 = 0;
      uRam000000000275dd48 = 0;
      _DAT_0275dd50 = 0;
      _DAT_0275ddc8 = 0;
      uRam000000000275ddd0 = 0;
      _DAT_0275ddd8 = 0;
      DAT_0275ddda = 2;
      _DAT_0275dd58 = 0;
      uRam000000000275dd60 = 0;
      _DAT_0275dd68 = 0;
      uRam000000000275dd70 = 0;
      _DAT_0275dd78 = 0;
      uRam000000000275dd80 = 0;
      _DAT_0275dd88 = 0;
      uRam000000000275dd90 = 0;
      _DAT_0275dd98 = 0;
      uRam000000000275dda0 = 0;
      _DAT_0275dda8 = 0;
      uRam000000000275ddb0 = 0;
      _DAT_0275ddb8 = 0;
      uRam000000000275ddc0 = 0;
      DAT_0275dde3 = 0;
      _DAT_0275dddb = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0275dddb == '\0') {
    FUN_007c8620();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x1a) = 0;
  if (DAT_0272ec30 == '\0') {
    iVar5 = ___cxa_guard_acquire();
    if (iVar5 != 0) {
      _DAT_0275dd38 = FUN_00370d10();
      _DAT_0275dd20 = "GNAudioHALDevice";
      _DAT_0275dd28 = 0x128;
      _DAT_0275dd30 = FUN_007c7190;
      _DAT_0275dd40 = 0;
      uRam000000000275dd48 = 0;
      _DAT_0275dd50 = 0;
      _DAT_0275ddc8 = 0;
      uRam000000000275ddd0 = 0;
      _DAT_0275ddd8 = 0;
      DAT_0275ddda = 2;
      _DAT_0275dd58 = 0;
      uRam000000000275dd60 = 0;
      _DAT_0275dd68 = 0;
      uRam000000000275dd70 = 0;
      _DAT_0275dd78 = 0;
      uRam000000000275dd80 = 0;
      _DAT_0275dd88 = 0;
      uRam000000000275dd90 = 0;
      _DAT_0275dd98 = 0;
      uRam000000000275dda0 = 0;
      _DAT_0275dda8 = 0;
      uRam000000000275ddb0 = 0;
      _DAT_0275ddb8 = 0;
      uRam000000000275ddc0 = 0;
      DAT_0275dde3 = 0;
      _DAT_0275dddb = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0275dddb == '\0') {
    FUN_007c87b0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xd4) = 0;
  if (DAT_0272ec30 == '\0') {
    iVar5 = ___cxa_guard_acquire();
    if (iVar5 != 0) {
      _DAT_0275dd38 = FUN_00370d10();
      _DAT_0275dd20 = "GNAudioHALDevice";
      _DAT_0275dd28 = 0x128;
      _DAT_0275dd30 = FUN_007c7190;
      _DAT_0275dd40 = 0;
      uRam000000000275dd48 = 0;
      _DAT_0275dd50 = 0;
      _DAT_0275ddc8 = 0;
      uRam000000000275ddd0 = 0;
      _DAT_0275ddd8 = 0;
      DAT_0275ddda = 2;
      _DAT_0275dd58 = 0;
      uRam000000000275dd60 = 0;
      _DAT_0275dd68 = 0;
      uRam000000000275dd70 = 0;
      _DAT_0275dd78 = 0;
      uRam000000000275dd80 = 0;
      _DAT_0275dd88 = 0;
      uRam000000000275dd90 = 0;
      _DAT_0275dd98 = 0;
      uRam000000000275dda0 = 0;
      _DAT_0275dda8 = 0;
      uRam000000000275ddb0 = 0;
      _DAT_0275ddb8 = 0;
      uRam000000000275ddc0 = 0;
      DAT_0275dde3 = 0;
      _DAT_0275dddb = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0275dddb == '\0') {
    FUN_007c8940();
    FUN_00e87980();
  }
  uVar1 = *(undefined4 *)(unaff_RSI + 0xdc);
  uVar2 = *(undefined4 *)(unaff_RSI + 0xe0);
  uVar3 = *(undefined4 *)(unaff_RSI + 0xe4);
  *(undefined4 *)(unaff_RDI + 0x1b) = *(undefined4 *)(unaff_RSI + 0xd8);
  *(undefined4 *)((longlong)unaff_RDI + 0xdc) = uVar1;
  *(undefined4 *)(unaff_RDI + 0x1c) = uVar2;
  *(undefined4 *)((longlong)unaff_RDI + 0xe4) = uVar3;
  *(undefined4 *)(unaff_RDI + 0x1d) = 0;
  if (DAT_0272ec30 == '\0') {
    iVar5 = ___cxa_guard_acquire();
    if (iVar5 != 0) {
      _DAT_0275dd38 = FUN_00370d10();
      _DAT_0275dd20 = "GNAudioHALDevice";
      _DAT_0275dd28 = 0x128;
      _DAT_0275dd30 = FUN_007c7190;
      _DAT_0275dd40 = 0;
      uRam000000000275dd48 = 0;
      _DAT_0275dd50 = 0;
      _DAT_0275ddc8 = 0;
      uRam000000000275ddd0 = 0;
      _DAT_0275ddd8 = 0;
      DAT_0275ddda = 2;
      _DAT_0275dd58 = 0;
      uRam000000000275dd60 = 0;
      _DAT_0275dd68 = 0;
      uRam000000000275dd70 = 0;
      _DAT_0275dd78 = 0;
      uRam000000000275dd80 = 0;
      _DAT_0275dd88 = 0;
      uRam000000000275dd90 = 0;
      _DAT_0275dd98 = 0;
      uRam000000000275dda0 = 0;
      _DAT_0275dda8 = 0;
      uRam000000000275ddb0 = 0;
      _DAT_0275ddb8 = 0;
      uRam000000000275ddc0 = 0;
      DAT_0275dde3 = 0;
      _DAT_0275dddb = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0275dddb == '\0') {
    FUN_007c8ad0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xec) = 0;
  if (DAT_0272ec30 == '\0') {
    iVar5 = ___cxa_guard_acquire();
    if (iVar5 != 0) {
      _DAT_0275dd38 = FUN_00370d10();
      _DAT_0275dd20 = "GNAudioHALDevice";
      _DAT_0275dd28 = 0x128;
      _DAT_0275dd30 = FUN_007c7190;
      _DAT_0275dd40 = 0;
      uRam000000000275dd48 = 0;
      _DAT_0275dd50 = 0;
      _DAT_0275ddc8 = 0;
      uRam000000000275ddd0 = 0;
      _DAT_0275ddd8 = 0;
      DAT_0275ddda = 2;
      _DAT_0275dd58 = 0;
      uRam000000000275dd60 = 0;
      _DAT_0275dd68 = 0;
      uRam000000000275dd70 = 0;
      _DAT_0275dd78 = 0;
      uRam000000000275dd80 = 0;
      _DAT_0275dd88 = 0;
      uRam000000000275dd90 = 0;
      _DAT_0275dd98 = 0;
      uRam000000000275dda0 = 0;
      _DAT_0275dda8 = 0;
      uRam000000000275ddb0 = 0;
      _DAT_0275ddb8 = 0;
      uRam000000000275ddc0 = 0;
      DAT_0275dde3 = 0;
      _DAT_0275dddb = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0275dddb == '\0') {
    FUN_007c8c60();
    FUN_00e87980();
  }
  FUN_007c8df0();
  FUN_007c9120();
  *(undefined4 *)(unaff_RDI + 0x20) = 0;
  if (DAT_0272ec30 == '\0') {
    iVar5 = ___cxa_guard_acquire();
    if (iVar5 != 0) {
      _DAT_0275dd38 = FUN_00370d10();
      _DAT_0275dd20 = "GNAudioHALDevice";
      _DAT_0275dd28 = 0x128;
      _DAT_0275dd30 = FUN_007c7190;
      _DAT_0275dd40 = 0;
      uRam000000000275dd48 = 0;
      _DAT_0275dd50 = 0;
      _DAT_0275ddc8 = 0;
      uRam000000000275ddd0 = 0;
      _DAT_0275ddd8 = 0;
      DAT_0275ddda = 2;
      _DAT_0275dd58 = 0;
      uRam000000000275dd60 = 0;
      _DAT_0275dd68 = 0;
      uRam000000000275dd70 = 0;
      _DAT_0275dd78 = 0;
      uRam000000000275dd80 = 0;
      _DAT_0275dd88 = 0;
      uRam000000000275dd90 = 0;
      _DAT_0275dd98 = 0;
      uRam000000000275dda0 = 0;
      _DAT_0275dda8 = 0;
      uRam000000000275ddb0 = 0;
      _DAT_0275ddb8 = 0;
      uRam000000000275ddc0 = 0;
      DAT_0275dde3 = 0;
      _DAT_0275dddb = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0275dddb == '\0') {
    FUN_007c9450();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x104) = 0;
  if (DAT_0272ec30 == '\0') {
    iVar5 = ___cxa_guard_acquire();
    if (iVar5 != 0) {
      _DAT_0275dd38 = FUN_00370d10();
      _DAT_0275dd20 = "GNAudioHALDevice";
      _DAT_0275dd28 = 0x128;
      _DAT_0275dd30 = FUN_007c7190;
      _DAT_0275dd40 = 0;
      uRam000000000275dd48 = 0;
      _DAT_0275dd50 = 0;
      _DAT_0275ddc8 = 0;
      uRam000000000275ddd0 = 0;
      _DAT_0275ddd8 = 0;
      DAT_0275ddda = 2;
      _DAT_0275dd58 = 0;
      uRam000000000275dd60 = 0;
      _DAT_0275dd68 = 0;
      uRam000000000275dd70 = 0;
      _DAT_0275dd78 = 0;
      uRam000000000275dd80 = 0;
      _DAT_0275dd88 = 0;
      uRam000000000275dd90 = 0;
      _DAT_0275dd98 = 0;
      uRam000000000275dda0 = 0;
      _DAT_0275dda8 = 0;
      uRam000000000275ddb0 = 0;
      _DAT_0275ddb8 = 0;
      uRam000000000275ddc0 = 0;
      DAT_0275dde3 = 0;
      _DAT_0275dddb = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0275dddb == '\0') {
    FUN_007c95e0();
    FUN_00e87980();
  }
  FUN_007c9770();
  *(undefined1 *)(unaff_RDI + 0x22) = 0;
  if (DAT_0272ec30 == '\0') {
    iVar5 = ___cxa_guard_acquire();
    if (iVar5 != 0) {
      _DAT_0275dd38 = FUN_00370d10();
      _DAT_0275dd20 = "GNAudioHALDevice";
      _DAT_0275dd28 = 0x128;
      _DAT_0275dd30 = FUN_007c7190;
      _DAT_0275dd40 = 0;
      uRam000000000275dd48 = 0;
      _DAT_0275dd50 = 0;
      _DAT_0275ddc8 = 0;
      uRam000000000275ddd0 = 0;
      _DAT_0275ddd8 = 0;
      DAT_0275ddda = 2;
      _DAT_0275dd58 = 0;
      uRam000000000275dd60 = 0;
      _DAT_0275dd68 = 0;
      uRam000000000275dd70 = 0;
      _DAT_0275dd78 = 0;
      uRam000000000275dd80 = 0;
      _DAT_0275dd88 = 0;
      uRam000000000275dd90 = 0;
      _DAT_0275dd98 = 0;
      uRam000000000275dda0 = 0;
      _DAT_0275dda8 = 0;
      uRam000000000275ddb0 = 0;
      _DAT_0275ddb8 = 0;
      uRam000000000275ddc0 = 0;
      DAT_0275dde3 = 0;
      _DAT_0275dddb = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0275dddb == '\0') {
    FUN_007c9a30();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x114) = 0;
  if (DAT_0272ec30 == '\0') {
    iVar5 = ___cxa_guard_acquire();
    if (iVar5 != 0) {
      _DAT_0275dd38 = FUN_00370d10();
      _DAT_0275dd20 = "GNAudioHALDevice";
      _DAT_0275dd28 = 0x128;
      _DAT_0275dd30 = FUN_007c7190;
      _DAT_0275dd40 = 0;
      uRam000000000275dd48 = 0;
      _DAT_0275dd50 = 0;
      _DAT_0275ddc8 = 0;
      uRam000000000275ddd0 = 0;
      _DAT_0275ddd8 = 0;
      DAT_0275ddda = 2;
      _DAT_0275dd58 = 0;
      uRam000000000275dd60 = 0;
      _DAT_0275dd68 = 0;
      uRam000000000275dd70 = 0;
      _DAT_0275dd78 = 0;
      uRam000000000275dd80 = 0;
      _DAT_0275dd88 = 0;
      uRam000000000275dd90 = 0;
      _DAT_0275dd98 = 0;
      uRam000000000275dda0 = 0;
      _DAT_0275dda8 = 0;
      uRam000000000275ddb0 = 0;
      _DAT_0275ddb8 = 0;
      uRam000000000275ddc0 = 0;
      DAT_0275dde3 = 0;
      _DAT_0275dddb = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0275dddb == '\0') {
    FUN_007c9bc0();
    FUN_00e87980();
  }
  uVar4 = *(undefined8 *)(unaff_RSI + 0x120);
  unaff_RDI[0x23] = *(undefined8 *)(unaff_RSI + 0x118);
  unaff_RDI[0x24] = uVar4;
  return;
}



