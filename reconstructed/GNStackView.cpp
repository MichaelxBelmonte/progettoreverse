// Reconstructed implementation of GNStackView
// From MikeCore binary — reverse-engineered pseudocode

#include "GNStackView.h"

// ============================================================
// @01e8bbf0 — 713 bytes
// str: ""GNStackView""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e8bbf0(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_000a32b0();
  *unaff_RDI = &DAT_026bcae8;
  unaff_RDI[2] = &DAT_026bd410;
  *(undefined4 *)(unaff_RDI + 0x27) = 0;
  if (DAT_027fa130 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02800818 = FUN_0006d940();
      _DAT_02800800 = "GNStackView";
      _DAT_02800808 = 0x148;
      _DAT_02800810 = FUN_01e8bb90;
      _DAT_02800820 = 0;
      uRam0000000002800828 = 0;
      _DAT_02800830 = 0;
      uRam0000000002800838 = 0;
      _DAT_02800840 = 0;
      uRam0000000002800848 = 0;
      _DAT_02800850 = 0;
      uRam0000000002800858 = 0;
      _DAT_02800860 = 0;
      uRam0000000002800868 = 0;
      _DAT_02800870 = 0;
      uRam0000000002800878 = 0;
      _DAT_02800880 = 0;
      uRam0000000002800888 = 0;
      _DAT_02800890 = 0;
      uRam0000000002800898 = 0;
      _DAT_028008a0 = 0;
      uRam00000000028008a8 = 0;
      _DAT_028008b0 = 0;
      _uRam00000000028008b8 = 0;
      _DAT_028008c0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_028008bb == '\0') {
    FUN_01e8bef0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x13c) = 0;
  if (DAT_027fa130 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02800818 = FUN_0006d940();
      _DAT_02800800 = "GNStackView";
      _DAT_02800808 = 0x148;
      _DAT_02800810 = FUN_01e8bb90;
      _DAT_02800820 = 0;
      uRam0000000002800828 = 0;
      _DAT_02800830 = 0;
      uRam0000000002800838 = 0;
      _DAT_02800840 = 0;
      uRam0000000002800848 = 0;
      _DAT_02800850 = 0;
      uRam0000000002800858 = 0;
      _DAT_02800860 = 0;
      uRam0000000002800868 = 0;
      _DAT_02800870 = 0;
      uRam0000000002800878 = 0;
      _DAT_02800880 = 0;
      uRam0000000002800888 = 0;
      _DAT_02800890 = 0;
      uRam0000000002800898 = 0;
      _DAT_028008a0 = 0;
      uRam00000000028008a8 = 0;
      _DAT_028008b0 = 0;
      _uRam00000000028008b8 = 0;
      _DAT_028008c0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_028008bb == '\0') {
    FUN_01e8c120();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x28) = 0;
  if (DAT_027fa130 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02800818 = FUN_0006d940();
      _DAT_02800800 = "GNStackView";
      _DAT_02800808 = 0x148;
      _DAT_02800810 = FUN_01e8bb90;
      _DAT_02800820 = 0;
      uRam0000000002800828 = 0;
      _DAT_02800830 = 0;
      uRam0000000002800838 = 0;
      _DAT_02800840 = 0;
      uRam0000000002800848 = 0;
      _DAT_02800850 = 0;
      uRam0000000002800858 = 0;
      _DAT_02800860 = 0;
      uRam0000000002800868 = 0;
      _DAT_02800870 = 0;
      uRam0000000002800878 = 0;
      _DAT_02800880 = 0;
      uRam0000000002800888 = 0;
      _DAT_02800890 = 0;
      uRam0000000002800898 = 0;
      _DAT_028008a0 = 0;
      uRam00000000028008a8 = 0;
      _DAT_028008b0 = 0;
      _uRam00000000028008b8 = 0;
      _DAT_028008c0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_028008bb == '\0') {
    FUN_01e8c290();
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @01e8bef0 — 522 bytes
// str: ""_orientation""
// str: ""GNStackView""
// str: ""GNOrientation""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_01e8bef0(void)

{
  int iVar1;
  
  if (DAT_027fa1a8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027fa198 = 0x100000000;
      DAT_027fa1a0 = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_027fa1e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027fa1b0 = "GNOrientation";
      _DAT_027fa1b8 = 2;
      DAT_027fa1bc = DAT_027fa1a0;
      _DAT_027fa1c0 = &DAT_027fa198;
      _DAT_027fa1c8 = &DAT_027fa180;
      _DAT_027fa1d0 = 0;
      uRam00000000027fa1d8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_027fa178 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027fa130 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02800818 = FUN_0006d940();
          _DAT_02800800 = "GNStackView";
          _DAT_02800808 = 0x148;
          _DAT_02800810 = FUN_01e8bb90;
          _DAT_02800820 = 0;
          uRam0000000002800828 = 0;
          _DAT_02800830 = 0;
          uRam0000000002800838 = 0;
          _DAT_02800840 = 0;
          uRam0000000002800848 = 0;
          _DAT_02800850 = 0;
          uRam0000000002800858 = 0;
          _DAT_02800860 = 0;
          uRam0000000002800868 = 0;
          _DAT_02800870 = 0;
          uRam0000000002800878 = 0;
          _DAT_02800880 = 0;
          uRam0000000002800888 = 0;
          _DAT_02800890 = 0;
          uRam0000000002800898 = 0;
          _DAT_028008a0 = 0;
          uRam00000000028008a8 = 0;
          _DAT_028008b0 = 0;
          uRam00000000028008b8 = 0;
          _DAT_028008c0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_027fa138 = "_orientation";
      _DAT_027fa140 = &DAT_02800800;
      _DAT_027fa148 = 0;
      _DAT_027fa150 = 0x6500;
      _DAT_027fa158 = "GNOrientation";
      _DAT_027fa160 = &DAT_027fa1b0;
      _DAT_027fa168 = 0;
      uRam00000000027fa170 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_027fa138;
}



