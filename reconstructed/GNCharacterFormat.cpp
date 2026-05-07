// Reconstructed implementation of GNCharacterFormat
// From MikeCore binary — reverse-engineered pseudocode

#include "GNCharacterFormat.h"

// ============================================================
// @001b5c70 — 532 bytes
// str: ""GNCharacterFormat""
// str: ""GNRenderingStyle""
// str: ""_renderingStyle""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_001b5c70(void)

{
  int iVar1;
  
  if (DAT_026e9690 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e9680 = 0x100000000;
      _DAT_026e9688 = 2;
      DAT_026e968c = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e96c8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e9698 = "GNRenderingStyle";
      _DAT_026e96a0 = 3;
      DAT_026e96a4 = DAT_026e968c;
      _DAT_026e96a8 = &DAT_026e9680;
      _DAT_026e96b0 = &DAT_026e9660;
      _DAT_026e96b8 = 0;
      uRam00000000026e96c0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_026e9658 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e95c8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026e9518 = FUN_00d4fe50();
          _DAT_026e9500 = "GNCharacterFormat";
          _DAT_026e9508 = 0x38;
          _DAT_026e9510 = FUN_001b5810;
          _DAT_026e9520 = 0;
          uRam00000000026e9528 = 0;
          _DAT_026e9530 = 0;
          uRam00000000026e9538 = 0;
          _DAT_026e9540 = 0;
          uRam00000000026e9548 = 0;
          _DAT_026e9550 = 0;
          uRam00000000026e9558 = 0;
          _DAT_026e9560 = 0;
          uRam00000000026e9568 = 0;
          _DAT_026e9570 = 0;
          uRam00000000026e9578 = 0;
          _DAT_026e9580 = 0;
          uRam00000000026e9588 = 0;
          _DAT_026e9590 = 0;
          uRam00000000026e9598 = 0;
          _DAT_026e95a0 = 0;
          uRam00000000026e95a8 = 0;
          _DAT_026e95b0 = 0;
          uRam00000000026e95b8 = 0;
          _DAT_026e95c0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_026e9618 = "_renderingStyle";
      _DAT_026e9620 = &DAT_026e9500;
      _DAT_026e9628 = 0;
      _DAT_026e9630 = 0x6500;
      _DAT_026e9638 = "GNRenderingStyle";
      _DAT_026e9640 = &DAT_026e9698;
      _DAT_026e9648 = 0;
      uRam00000000026e9650 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_026e9618;
}



