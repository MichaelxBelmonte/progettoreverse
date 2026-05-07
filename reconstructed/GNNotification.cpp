// Reconstructed implementation of GNNotification
// From MikeCore binary — reverse-engineered pseudocode

#include "GNNotification.h"

// ============================================================
// @00051da0 — 581 bytes
// str: ""GNNotification""
// str: ""GNNotificationCoalescing""
// str: ""_coalescing""
// str: ""=GNNotificationCoalescingOnIdAndSender""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00051da0(void)

{
  int iVar1;
  
  if (DAT_026d3f10 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026d3f00 = 0x100000000;
      DAT_026d3f0c = *DAT_026d3ef0 != '=';
      _DAT_026d3f08 = *DAT_026d3ef0 == '=' | 2;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d3f48 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026d3f18 = "GNNotificationCoalescing";
      _DAT_026d3f20 = 3;
      DAT_026d3f24 = DAT_026d3f0c;
      _DAT_026d3f28 = &DAT_026d3f00;
      _DAT_026d3f30 = &DAT_026d3ee0;
      _DAT_026d3f38 = 0;
      uRam00000000026d3f40 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_0277a580 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0277a4e0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d3d78 = FUN_00d4fe50();
          _DAT_026d3d60 = "GNNotification";
          _DAT_026d3d68 = 0x30;
          _DAT_026d3d70 = FUN_000512e0;
          _DAT_026d3d80 = 0;
          uRam00000000026d3d88 = 0;
          _DAT_026d3d90 = 0;
          _DAT_026d3e08 = 0;
          uRam00000000026d3e10 = 0;
          _DAT_026d3e18 = 0;
          DAT_026d3e1a = 2;
          _DAT_026d3d98 = 0;
          uRam00000000026d3da0 = 0;
          _DAT_026d3da8 = 0;
          uRam00000000026d3db0 = 0;
          _DAT_026d3db8 = 0;
          uRam00000000026d3dc0 = 0;
          _DAT_026d3dc8 = 0;
          uRam00000000026d3dd0 = 0;
          _DAT_026d3dd8 = 0;
          uRam00000000026d3de0 = 0;
          _DAT_026d3de8 = 0;
          uRam00000000026d3df0 = 0;
          _DAT_026d3df8 = 0;
          uRam00000000026d3e00 = 0;
          DAT_026d3e23 = 0;
          _DAT_026d3e1b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0277a540 = "_coalescing";
      _DAT_0277a548 = &DAT_026d3d60;
      _DAT_0277a550 = 0;
      _DAT_0277a558 = 0x6500;
      _DAT_0277a560 = "GNNotificationCoalescing";
      _DAT_0277a568 = &DAT_026d3f18;
      _DAT_0277a570 = 0;
      uRam000000000277a578 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_0277a540;
}



