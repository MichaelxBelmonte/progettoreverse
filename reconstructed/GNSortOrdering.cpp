// Reconstructed implementation of GNSortOrdering
// From MikeCore binary — reverse-engineered pseudocode

#include "GNSortOrdering.h"

// ============================================================
// @0005ce40 — 519 bytes
// str: ""GNSortOrdering""
// str: ""GNSortOrderDirection""
// str: ""_direction""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0005ce40(void)

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
  if (DAT_0277b430 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0277b3e0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d5b08 = FUN_00d4fe50();
          _DAT_026d5af0 = "GNSortOrdering";
          _DAT_026d5af8 = 0x40;
          _DAT_026d5b00 = FUN_0005c990;
          _DAT_026d5b10 = 0;
          uRam00000000026d5b18 = 0;
          _DAT_026d5b20 = 0;
          uRam00000000026d5b28 = 0;
          _DAT_026d5b30 = 0;
          uRam00000000026d5b38 = 0;
          _DAT_026d5b40 = 0;
          uRam00000000026d5b48 = 0;
          _DAT_026d5b50 = 0;
          uRam00000000026d5b58 = 0;
          _DAT_026d5b60 = 0;
          uRam00000000026d5b68 = 0;
          _DAT_026d5b70 = 0;
          uRam00000000026d5b78 = 0;
          _DAT_026d5b80 = 0;
          uRam00000000026d5b88 = 0;
          _DAT_026d5b90 = 0;
          uRam00000000026d5b98 = 0;
          _DAT_026d5ba0 = 0;
          uRam00000000026d5ba8 = 0;
          _DAT_026d5bb0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0277b3f0 = "_direction";
      _DAT_0277b3f8 = &DAT_026d5af0;
      _DAT_0277b400 = 0;
      _DAT_0277b408 = 0x6500;
      _DAT_0277b410 = "GNSortOrderDirection";
      _DAT_0277b418 = &DAT_026d5c60;
      _DAT_0277b420 = 0;
      uRam000000000277b428 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_0277b3f0;
}



