// Reconstructed implementation of GNFileArchive
// From MikeCore binary — reverse-engineered pseudocode

#include "GNFileArchive.h"

// ============================================================
// @00040690 — 512 bytes
// str: ""_delegate""
// str: ""GNFileArchive""
// str: ""GNFileArchiveDelegate""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00040690(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_026d16f8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      iVar1 = FUN_00e7ddf0();
      if (DAT_02774e90 == '\0') {
        iVar2 = ___cxa_guard_acquire();
        if (iVar2 != 0) {
          _DAT_026d1578 = FUN_00d4fe50();
          _DAT_026d1560 = "GNFileArchive";
          _DAT_026d1568 = 0x40;
          _DAT_026d1570 = FUN_0003fcf0;
          _DAT_026d1580 = 0;
          uRam00000000026d1588 = 0;
          _DAT_026d1590 = 0;
          _DAT_026d1608 = 0;
          uRam00000000026d1610 = 0;
          _DAT_026d1618 = 0;
          DAT_026d161a = 1;
          _DAT_026d1598 = 0;
          uRam00000000026d15a0 = 0;
          _DAT_026d15a8 = 0;
          uRam00000000026d15b0 = 0;
          _DAT_026d15b8 = 0;
          uRam00000000026d15c0 = 0;
          _DAT_026d15c8 = 0;
          uRam00000000026d15d0 = 0;
          _DAT_026d15d8 = 0;
          uRam00000000026d15e0 = 0;
          _DAT_026d15e8 = 0;
          uRam00000000026d15f0 = 0;
          _DAT_026d15f8 = 0;
          uRam00000000026d1600 = 0;
          DAT_026d1623 = 0;
          _DAT_026d161b = 0;
          ___cxa_guard_release();
        }
      }
      DAT_026d16d8 = (iVar1 != 0) << 6 | 0x82;
      _DAT_026d16c0 = "_delegate";
      _DAT_026d16c8 = &DAT_026d1560;
      _DAT_026d16d0 = 0;
      _DAT_026d16e0 = 0;
      uRam00000000026d16e8 = 0;
      _DAT_026d16f0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d1700 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d1720 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d1708 = "GNFileArchiveDelegate";
          DAT_026d1718 = 0;
          _DAT_026d1710 = 0;
          ___cxa_guard_release();
        }
      }
      FUN_00e87b80();
      ___cxa_guard_release();
    }
  }
  return &DAT_026d16c0;
}



