// Reconstructed implementation of GNThread
// From MikeCore binary — reverse-engineered pseudocode

#include "GNThread.h"

// ============================================================
// @00060b50 — 1889 bytes
// str: ""GNThread""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00060b50(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_02579948;
  unaff_RDI[2] = *(undefined8 *)(unaff_RSI + 0x10);
  *(undefined1 *)(unaff_RDI + 3) = 0;
  if (DAT_02789200 == '\0') {
    iVar4 = ___cxa_guard_acquire();
    if (iVar4 != 0) {
      _DAT_026d6708 = FUN_00d4fe50();
      _DAT_026d66f0 = "GNThread";
      _DAT_026d66f8 = 0x78;
      _DAT_026d6700 = FUN_00060af0;
      _DAT_026d6710 = 0;
      uRam00000000026d6718 = 0;
      _DAT_026d6720 = 0;
      _DAT_026d6798 = 0;
      uRam00000000026d67a0 = 0;
      _DAT_026d67a8 = 0;
      DAT_026d67aa = 3;
      _DAT_026d6728 = 0;
      uRam00000000026d6730 = 0;
      _DAT_026d6738 = 0;
      uRam00000000026d6740 = 0;
      _DAT_026d6748 = 0;
      uRam00000000026d6750 = 0;
      _DAT_026d6758 = 0;
      uRam00000000026d6760 = 0;
      _DAT_026d6768 = 0;
      uRam00000000026d6770 = 0;
      _DAT_026d6778 = 0;
      uRam00000000026d6780 = 0;
      _DAT_026d6788 = 0;
      uRam00000000026d6790 = 0;
      DAT_026d67b3 = 0;
      _DAT_026d67ab = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d67ab == '\0') {
    FUN_00061380();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x19) = 0;
  if (DAT_02789200 == '\0') {
    iVar4 = ___cxa_guard_acquire();
    if (iVar4 != 0) {
      _DAT_026d6708 = FUN_00d4fe50();
      _DAT_026d66f0 = "GNThread";
      _DAT_026d66f8 = 0x78;
      _DAT_026d6700 = FUN_00060af0;
      _DAT_026d6710 = 0;
      uRam00000000026d6718 = 0;
      _DAT_026d6720 = 0;
      _DAT_026d6798 = 0;
      uRam00000000026d67a0 = 0;
      _DAT_026d67a8 = 0;
      DAT_026d67aa = 3;
      _DAT_026d6728 = 0;
      uRam00000000026d6730 = 0;
      _DAT_026d6738 = 0;
      uRam00000000026d6740 = 0;
      _DAT_026d6748 = 0;
      uRam00000000026d6750 = 0;
      _DAT_026d6758 = 0;
      uRam00000000026d6760 = 0;
      _DAT_026d6768 = 0;
      uRam00000000026d6770 = 0;
      _DAT_026d6778 = 0;
      uRam00000000026d6780 = 0;
      _DAT_026d6788 = 0;
      uRam00000000026d6790 = 0;
      DAT_026d67b3 = 0;
      _DAT_026d67ab = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d67ab == '\0') {
    FUN_00061510();
    FUN_00e87980();
  }
  unaff_RDI[4] = *(undefined8 *)(unaff_RSI + 0x20);
  FUN_000616a0();
  *(undefined4 *)(unaff_RDI + 6) = 0;
  if (DAT_02789200 == '\0') {
    iVar4 = ___cxa_guard_acquire();
    if (iVar4 != 0) {
      _DAT_026d6708 = FUN_00d4fe50();
      _DAT_026d66f0 = "GNThread";
      _DAT_026d66f8 = 0x78;
      _DAT_026d6700 = FUN_00060af0;
      _DAT_026d6710 = 0;
      uRam00000000026d6718 = 0;
      _DAT_026d6720 = 0;
      _DAT_026d6798 = 0;
      uRam00000000026d67a0 = 0;
      _DAT_026d67a8 = 0;
      DAT_026d67aa = 3;
      _DAT_026d6728 = 0;
      uRam00000000026d6730 = 0;
      _DAT_026d6738 = 0;
      uRam00000000026d6740 = 0;
      _DAT_026d6748 = 0;
      uRam00000000026d6750 = 0;
      _DAT_026d6758 = 0;
      uRam00000000026d6760 = 0;
      _DAT_026d6768 = 0;
      uRam00000000026d6770 = 0;
      _DAT_026d6778 = 0;
      uRam00000000026d6780 = 0;
      _DAT_026d6788 = 0;
      uRam00000000026d6790 = 0;
      DAT_026d67b3 = 0;
      _DAT_026d67ab = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d67ab == '\0') {
    FUN_000619d0();
    FUN_00e87980();
  }
  unaff_RDI[7] = 0;
  if (DAT_02789200 == '\0') {
    iVar4 = ___cxa_guard_acquire();
    if (iVar4 != 0) {
      _DAT_026d6708 = FUN_00d4fe50();
      _DAT_026d66f0 = "GNThread";
      _DAT_026d66f8 = 0x78;
      _DAT_026d6700 = FUN_00060af0;
      _DAT_026d6710 = 0;
      uRam00000000026d6718 = 0;
      _DAT_026d6720 = 0;
      _DAT_026d6798 = 0;
      uRam00000000026d67a0 = 0;
      _DAT_026d67a8 = 0;
      DAT_026d67aa = 3;
      _DAT_026d6728 = 0;
      uRam00000000026d6730 = 0;
      _DAT_026d6738 = 0;
      uRam00000000026d6740 = 0;
      _DAT_026d6748 = 0;
      uRam00000000026d6750 = 0;
      _DAT_026d6758 = 0;
      uRam00000000026d6760 = 0;
      _DAT_026d6768 = 0;
      uRam00000000026d6770 = 0;
      _DAT_026d6778 = 0;
      uRam00000000026d6780 = 0;
      _DAT_026d6788 = 0;
      uRam00000000026d6790 = 0;
      DAT_026d67b3 = 0;
      _DAT_026d67ab = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d67ab == '\0') {
    FUN_00061c20();
    FUN_00e87980();
  }
  FUN_00061db0();
  FUN_00062070();
  uVar1 = *(undefined4 *)(unaff_RSI + 0x54);
  uVar2 = *(undefined4 *)(unaff_RSI + 0x58);
  uVar3 = *(undefined4 *)(unaff_RSI + 0x5c);
  *(undefined4 *)(unaff_RDI + 10) = *(undefined4 *)(unaff_RSI + 0x50);
  *(undefined4 *)((longlong)unaff_RDI + 0x54) = uVar1;
  *(undefined4 *)(unaff_RDI + 0xb) = uVar2;
  *(undefined4 *)((longlong)unaff_RDI + 0x5c) = uVar3;
  *(undefined4 *)(unaff_RDI + 0xc) = 0;
  if (DAT_02789200 == '\0') {
    iVar4 = ___cxa_guard_acquire();
    if (iVar4 != 0) {
      _DAT_026d6708 = FUN_00d4fe50();
      _DAT_026d66f0 = "GNThread";
      _DAT_026d66f8 = 0x78;
      _DAT_026d6700 = FUN_00060af0;
      _DAT_026d6710 = 0;
      uRam00000000026d6718 = 0;
      _DAT_026d6720 = 0;
      _DAT_026d6798 = 0;
      uRam00000000026d67a0 = 0;
      _DAT_026d67a8 = 0;
      DAT_026d67aa = 3;
      _DAT_026d6728 = 0;
      uRam00000000026d6730 = 0;
      _DAT_026d6738 = 0;
      uRam00000000026d6740 = 0;
      _DAT_026d6748 = 0;
      uRam00000000026d6750 = 0;
      _DAT_026d6758 = 0;
      uRam00000000026d6760 = 0;
      _DAT_026d6768 = 0;
      uRam00000000026d6770 = 0;
      _DAT_026d6778 = 0;
      uRam00000000026d6780 = 0;
      _DAT_026d6788 = 0;
      uRam00000000026d6790 = 0;
      DAT_026d67b3 = 0;
      _DAT_026d67ab = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d67ab == '\0') {
    FUN_00062330();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 100) = 0;
  if (DAT_02789200 == '\0') {
    iVar4 = ___cxa_guard_acquire();
    if (iVar4 != 0) {
      _DAT_026d6708 = FUN_00d4fe50();
      _DAT_026d66f0 = "GNThread";
      _DAT_026d66f8 = 0x78;
      _DAT_026d6700 = FUN_00060af0;
      _DAT_026d6710 = 0;
      uRam00000000026d6718 = 0;
      _DAT_026d6720 = 0;
      _DAT_026d6798 = 0;
      uRam00000000026d67a0 = 0;
      _DAT_026d67a8 = 0;
      DAT_026d67aa = 3;
      _DAT_026d6728 = 0;
      uRam00000000026d6730 = 0;
      _DAT_026d6738 = 0;
      uRam00000000026d6740 = 0;
      _DAT_026d6748 = 0;
      uRam00000000026d6750 = 0;
      _DAT_026d6758 = 0;
      uRam00000000026d6760 = 0;
      _DAT_026d6768 = 0;
      uRam00000000026d6770 = 0;
      _DAT_026d6778 = 0;
      uRam00000000026d6780 = 0;
      _DAT_026d6788 = 0;
      uRam00000000026d6790 = 0;
      DAT_026d67b3 = 0;
      _DAT_026d67ab = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d67ab == '\0') {
    FUN_000624c0();
    FUN_00e87980();
  }
  FUN_00062650();
  *(undefined4 *)(unaff_RDI + 0xe) = 0;
  if (DAT_02789200 == '\0') {
    iVar4 = ___cxa_guard_acquire();
    if (iVar4 != 0) {
      _DAT_026d6708 = FUN_00d4fe50();
      _DAT_026d66f0 = "GNThread";
      _DAT_026d66f8 = 0x78;
      _DAT_026d6700 = FUN_00060af0;
      _DAT_026d6710 = 0;
      uRam00000000026d6718 = 0;
      _DAT_026d6720 = 0;
      _DAT_026d6798 = 0;
      uRam00000000026d67a0 = 0;
      _DAT_026d67a8 = 0;
      DAT_026d67aa = 3;
      _DAT_026d6728 = 0;
      uRam00000000026d6730 = 0;
      _DAT_026d6738 = 0;
      uRam00000000026d6740 = 0;
      _DAT_026d6748 = 0;
      uRam00000000026d6750 = 0;
      _DAT_026d6758 = 0;
      uRam00000000026d6760 = 0;
      _DAT_026d6768 = 0;
      uRam00000000026d6770 = 0;
      _DAT_026d6778 = 0;
      uRam00000000026d6780 = 0;
      _DAT_026d6788 = 0;
      uRam00000000026d6790 = 0;
      DAT_026d67b3 = 0;
      _DAT_026d67ab = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d67ab == '\0') {
    FUN_00062980();
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @000619d0 — 557 bytes
// str: ""GNThread""
// str: ""GNThreadPriorityGroup""
// str: ""_priorityGroup""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_000619d0(void)

{
  int iVar1;
  
  if (DAT_026d68a8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026d6890 = _DAT_0238fcc0;
      uRam00000000026d6894 = _UNK_0238fcc4;
      uRam00000000026d6898 = _UNK_0238fcc8;
      uRam00000000026d689c = _UNK_0238fccc;
      _DAT_026d68a0 = 4;
      DAT_026d68a4 = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d68e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026d68b0 = "GNThreadPriorityGroup";
      _DAT_026d68b8 = 5;
      DAT_026d68bc = DAT_026d68a4;
      _DAT_026d68c0 = &DAT_026d6890;
      _DAT_026d68c8 = &DAT_026d6860;
      DAT_026d68d0 = 0;
      uRam00000000026d68d8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_027892b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02789200 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d6708 = FUN_00d4fe50();
          _DAT_026d66f0 = "GNThread";
          _DAT_026d66f8 = 0x78;
          _DAT_026d6700 = FUN_00060af0;
          _DAT_026d6710 = 0;
          uRam00000000026d6718 = 0;
          _DAT_026d6720 = 0;
          _DAT_026d6798 = 0;
          uRam00000000026d67a0 = 0;
          _DAT_026d67a8 = 0;
          DAT_026d67aa = 3;
          _DAT_026d6728 = 0;
          uRam00000000026d6730 = 0;
          _DAT_026d6738 = 0;
          uRam00000000026d6740 = 0;
          _DAT_026d6748 = 0;
          uRam00000000026d6750 = 0;
          _DAT_026d6758 = 0;
          uRam00000000026d6760 = 0;
          _DAT_026d6768 = 0;
          uRam00000000026d6770 = 0;
          _DAT_026d6778 = 0;
          uRam00000000026d6780 = 0;
          _DAT_026d6788 = 0;
          uRam00000000026d6790 = 0;
          DAT_026d67b3 = 0;
          _DAT_026d67ab = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02789270 = "_priorityGroup";
      _DAT_02789278 = &DAT_026d66f0;
      _DAT_02789280 = 0;
      _DAT_02789288 = 0x6500;
      _DAT_02789290 = "GNThreadPriorityGroup";
      _DAT_02789298 = &DAT_026d68b0;
      _DAT_027892a0 = 0;
      uRam00000000027892a8 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_02789270;
}



