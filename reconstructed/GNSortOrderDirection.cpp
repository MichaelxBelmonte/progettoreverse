// Reconstructed implementation of GNSortOrderDirection
// From MikeCore binary — reverse-engineered pseudocode

#include "GNSortOrderDirection.h"

// ============================================================
// @001f20a0 — 519 bytes
// str: ""GNSortOrderDirection""
// str: ""GNTableColumn""
// str: ""_sortOrderDirection""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_001f20a0(void)

{
  int iVar1;
  
  if (DAT_026d5c58 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026d5c40 = _DAT_0238fcc0;
      uRam00000000026d5c44 = _UNK_0238fcc4;
      uRam00000000026d5c48 = _UNK_0238fcc8;
      uRam00000000026d5c4c = _UNK_0238fccc;
      DAT_026d5c50 = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d5c90 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026d5c60 = "GNSortOrderDirection";
      _DAT_026d5c68 = 4;
      DAT_026d5c6c = DAT_026d5c50;
      _DAT_026d5c70 = &DAT_026d5c40;
      _DAT_026d5c78 = &DAT_026d5c10;
      _DAT_026d5c80 = 0;
      uRam00000000026d5c88 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_026f1f38 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026f1b90 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f1ae0 = FUN_00d4fe50();
          _DAT_026f1ac8 = "GNTableColumn";
          _DAT_026f1ad0 = 0x68;
          _DAT_026f1ad8 = FUN_001efe10;
          _DAT_026f1ae8 = 0;
          uRam00000000026f1af0 = 0;
          _DAT_026f1af8 = 0;
          uRam00000000026f1b00 = 0;
          _DAT_026f1b08 = 0;
          uRam00000000026f1b10 = 0;
          _DAT_026f1b18 = 0;
          uRam00000000026f1b20 = 0;
          _DAT_026f1b28 = 0;
          uRam00000000026f1b30 = 0;
          _DAT_026f1b38 = 0;
          uRam00000000026f1b40 = 0;
          _DAT_026f1b48 = 0;
          uRam00000000026f1b50 = 0;
          _DAT_026f1b58 = 0;
          uRam00000000026f1b60 = 0;
          _DAT_026f1b68 = 0;
          uRam00000000026f1b70 = 0;
          _DAT_026f1b78 = 0;
          uRam00000000026f1b80 = 0;
          _DAT_026f1b88 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_026f1ef8 = "_sortOrderDirection";
      _DAT_026f1f00 = &DAT_026f1ac8;
      _DAT_026f1f08 = 0;
      _DAT_026f1f10 = 0x6500;
      _DAT_026f1f18 = "GNSortOrderDirection";
      _DAT_026f1f20 = &DAT_026d5c60;
      _DAT_026f1f28 = 0;
      uRam00000000026f1f30 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_026f1ef8;
}



