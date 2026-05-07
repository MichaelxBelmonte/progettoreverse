// Reconstructed implementation of GNClipView
// From MikeCore binary — reverse-engineered pseudocode

#include "GNClipView.h"

// ============================================================
// @01cf2570 — 3421 bytes
// str: ""GNClipView""
// str: ""_editDrawsBackground""
// str: ""_editDocumentView""
// str: ""setLeftBorderVisibility""
// str: ""setRightBorderVisibility""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cf2570(void)

{
  int iVar1;
  
  if (DAT_028b7608 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026fde20 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026e9778 = FUN_0006d940();
          _DAT_026e9760 = "GNClipView";
          _DAT_026e9768 = 0x178;
          _DAT_026e9770 = FUN_001b6420;
          _DAT_026e9780 = 0;
          uRam00000000026e9788 = 0;
          _DAT_026e9790 = 0;
          uRam00000000026e9798 = 0;
          _DAT_026e97a0 = 0;
          uRam00000000026e97a8 = 0;
          _DAT_026e97b0 = 0;
          uRam00000000026e97b8 = 0;
          _DAT_026e97c0 = 0;
          uRam00000000026e97c8 = 0;
          _DAT_026e97d0 = 0;
          uRam00000000026e97d8 = 0;
          _DAT_026e97e0 = 0;
          uRam00000000026e97e8 = 0;
          _DAT_026e97f0 = 0;
          uRam00000000026e97f8 = 0;
          _DAT_026e9800 = 0;
          uRam00000000026e9808 = 0;
          _DAT_026e9810 = 0;
          uRam00000000026e9818 = 0;
          _DAT_026e9820 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b75c8 = "_editDrawsBackground";
      _DAT_028b75d0 = &DAT_026e9760;
      _DAT_028b75d8 = 0;
      _DAT_028b75e0 = &DAT_027ef0b8;
      _DAT_028b75e8 = FUN_01cfa320;
      _DAT_028b75f0 = FUN_01cf3300;
      _DAT_028b75f8 = 0;
      uRam00000000028b7600 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b7650 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026fde20 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026e9778 = FUN_0006d940();
          _DAT_026e9760 = "GNClipView";
          _DAT_026e9768 = 0x178;
          _DAT_026e9770 = FUN_001b6420;
          _DAT_026e9780 = 0;
          uRam00000000026e9788 = 0;
          _DAT_026e9790 = 0;
          uRam00000000026e9798 = 0;
          _DAT_026e97a0 = 0;
          uRam00000000026e97a8 = 0;
          _DAT_026e97b0 = 0;
          uRam00000000026e97b8 = 0;
          _DAT_026e97c0 = 0;
          uRam00000000026e97c8 = 0;
          _DAT_026e97d0 = 0;
          uRam00000000026e97d8 = 0;
          _DAT_026e97e0 = 0;
          uRam00000000026e97e8 = 0;
          _DAT_026e97f0 = 0;
          uRam00000000026e97f8 = 0;
          _DAT_026e9800 = 0;
          uRam00000000026e9808 = 0;
          _DAT_026e9810 = 0;
          uRam00000000026e9818 = 0;
          _DAT_026e9820 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b7610 = "_editDocumentView";
      _DAT_028b7618 = &DAT_026e9760;
      _DAT_028b7620 = 0;
      _DAT_028b7628 = &DAT_027ef0bb;
      _DAT_028b7630 = FUN_01cfa340;
      _DAT_028b7638 = FUN_01cf5820;
      _DAT_028b7640 = 0;
      uRam00000000028b7648 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b7698 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026fde20 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026e9778 = FUN_0006d940();
          _DAT_026e9760 = "GNClipView";
          _DAT_026e9768 = 0x178;
          _DAT_026e9770 = FUN_001b6420;
          _DAT_026e9780 = 0;
          uRam00000000026e9788 = 0;
          _DAT_026e9790 = 0;
          uRam00000000026e9798 = 0;
          _DAT_026e97a0 = 0;
          uRam00000000026e97a8 = 0;
          _DAT_026e97b0 = 0;
          uRam00000000026e97b8 = 0;
          _DAT_026e97c0 = 0;
          uRam00000000026e97c8 = 0;
          _DAT_026e97d0 = 0;
          uRam00000000026e97d8 = 0;
          _DAT_026e97e0 = 0;
          uRam00000000026e97e8 = 0;
          _DAT_026e97f0 = 0;
          uRam00000000026e97f8 = 0;
          _DAT_026e9800 = 0;
          uRam00000000026e9808 = 0;
          _DAT_026e9810 = 0;
          uRam00000000026e9818 = 0;
          _DAT_026e9820 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b7658 = "setLeftBorderVisibility";
      _DAT_028b7660 = &DAT_026e9760;
      _DAT_028b7668 = 0;
      _DAT_028b7670 = &DAT_027ef0be;
      _DAT_028b7678 = FUN_01cfa3c0;
      _DAT_028b7680 = FUN_01cf3350;
      _DAT_028b7688 = 0;
      uRam00000000028b7690 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b76e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026fde20 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026e9778 = FUN_0006d940();
          _DAT_026e9760 = "GNClipView";
          _DAT_026e9768 = 0x178;
          _DAT_026e9770 = FUN_001b6420;
          _DAT_026e9780 = 0;
          uRam00000000026e9788 = 0;
          _DAT_026e9790 = 0;
          uRam00000000026e9798 = 0;
          _DAT_026e97a0 = 0;
          uRam00000000026e97a8 = 0;
          _DAT_026e97b0 = 0;
          uRam00000000026e97b8 = 0;
          _DAT_026e97c0 = 0;
          uRam00000000026e97c8 = 0;
          _DAT_026e97d0 = 0;
          uRam00000000026e97d8 = 0;
          _DAT_026e97e0 = 0;
          uRam00000000026e97e8 = 0;
          _DAT_026e97f0 = 0;
          uRam00000000026e97f8 = 0;
          _DAT_026e9800 = 0;
          uRam00000000026e9808 = 0;
          _DAT_026e9810 = 0;
          uRam00000000026e9818 = 0;
          _DAT_026e9820 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b76a0 = "setRightBorderVisibility";
      _DAT_028b76a8 = &DAT_026e9760;
      _DAT_028b76b0 = 0;
      _DAT_028b76b8 = &DAT_027ef0be;
      _DAT_028b76c0 = FUN_01cfa3c0;
      _DAT_028b76c8 = FUN_01cf33a0;
      _DAT_028b76d0 = 0;
      uRam00000000028b76d8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b7728 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026fde20 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026e9778 = FUN_0006d940();
          _DAT_026e9760 = "GNClipView";
          _DAT_026e9768 = 0x178;
          _DAT_026e9770 = FUN_001b6420;
          _DAT_026e9780 = 0;
          uRam00000000026e9788 = 0;
          _DAT_026e9790 = 0;
          uRam00000000026e9798 = 0;
          _DAT_026e97a0 = 0;
          uRam00000000026e97a8 = 0;
          _DAT_026e97b0 = 0;
          uRam00000000026e97b8 = 0;
          _DAT_026e97c0 = 0;
          uRam00000000026e97c8 = 0;
          _DAT_026e97d0 = 0;
          uRam00000000026e97d8 = 0;
          _DAT_026e97e0 = 0;
          uRam00000000026e97e8 = 0;
          _DAT_026e97f0 = 0;
          uRam00000000026e97f8 = 0;
          _DAT_026e9800 = 0;
          uRam00000000026e9808 = 0;
          _DAT_026e9810 = 0;
          uRam00000000026e9818 = 0;
          _DAT_026e9820 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b76e8 = "setTopBorderVisibility";
      _DAT_028b76f0 = &DAT_026e9760;
      _DAT_028b76f8 = 0;
      _DAT_028b7700 = &DAT_027ef0be;
      _DAT_028b7708 = FUN_01cfa3c0;
      _DAT_028b7710 = FUN_01cf33f0;
      _DAT_028b7718 = 0;
      uRam00000000028b7720 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b7770 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026fde20 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026e9778 = FUN_0006d940();
          _DAT_026e9760 = "GNClipView";
          _DAT_026e9768 = 0x178;
          _DAT_026e9770 = FUN_001b6420;
          _DAT_026e9780 = 0;
          uRam00000000026e9788 = 0;
          _DAT_026e9790 = 0;
          uRam00000000026e9798 = 0;
          _DAT_026e97a0 = 0;
          uRam00000000026e97a8 = 0;
          _DAT_026e97b0 = 0;
          uRam00000000026e97b8 = 0;
          _DAT_026e97c0 = 0;
          uRam00000000026e97c8 = 0;
          _DAT_026e97d0 = 0;
          uRam00000000026e97d8 = 0;
          _DAT_026e97e0 = 0;
          uRam00000000026e97e8 = 0;
          _DAT_026e97f0 = 0;
          uRam00000000026e97f8 = 0;
          _DAT_026e9800 = 0;
          uRam00000000026e9808 = 0;
          _DAT_026e9810 = 0;
          uRam00000000026e9818 = 0;
          _DAT_026e9820 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b7730 = "setBottomBorderVisibility";
      _DAT_028b7738 = &DAT_026e9760;
      _DAT_028b7740 = 0;
      _DAT_028b7748 = &DAT_027ef0be;
      _DAT_028b7750 = FUN_01cfa3c0;
      _DAT_028b7758 = FUN_01cf3440;
      _DAT_028b7760 = 0;
      uRam00000000028b7768 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b77b8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026fde20 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026e9778 = FUN_0006d940();
          _DAT_026e9760 = "GNClipView";
          _DAT_026e9768 = 0x178;
          _DAT_026e9770 = FUN_001b6420;
          _DAT_026e9780 = 0;
          uRam00000000026e9788 = 0;
          _DAT_026e9790 = 0;
          uRam00000000026e9798 = 0;
          _DAT_026e97a0 = 0;
          uRam00000000026e97a8 = 0;
          _DAT_026e97b0 = 0;
          uRam00000000026e97b8 = 0;
          _DAT_026e97c0 = 0;
          uRam00000000026e97c8 = 0;
          _DAT_026e97d0 = 0;
          uRam00000000026e97d8 = 0;
          _DAT_026e97e0 = 0;
          uRam00000000026e97e8 = 0;
          _DAT_026e97f0 = 0;
          uRam00000000026e97f8 = 0;
          _DAT_026e9800 = 0;
          uRam00000000026e9808 = 0;
          _DAT_026e9810 = 0;
          uRam00000000026e9818 = 0;
          _DAT_026e9820 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b7778 = "_editLeftBorderType";
      _DAT_028b7780 = &DAT_026e9760;
      _DAT_028b7788 = 0;
      _DAT_028b7790 = &DAT_027ef0c1;
      _DAT_028b7798 = FUN_01cfa3f0;
      _DAT_028b77a0 = FUN_01cf3490;
      _DAT_028b77a8 = 0;
      uRam00000000028b77b0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b7800 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026fde20 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026e9778 = FUN_0006d940();
          _DAT_026e9760 = "GNClipView";
          _DAT_026e9768 = 0x178;
          _DAT_026e9770 = FUN_001b6420;
          _DAT_026e9780 = 0;
          uRam00000000026e9788 = 0;
          _DAT_026e9790 = 0;
          uRam00000000026e9798 = 0;
          _DAT_026e97a0 = 0;
          uRam00000000026e97a8 = 0;
          _DAT_026e97b0 = 0;
          uRam00000000026e97b8 = 0;
          _DAT_026e97c0 = 0;
          uRam00000000026e97c8 = 0;
          _DAT_026e97d0 = 0;
          uRam00000000026e97d8 = 0;
          _DAT_026e97e0 = 0;
          uRam00000000026e97e8 = 0;
          _DAT_026e97f0 = 0;
          uRam00000000026e97f8 = 0;
          _DAT_026e9800 = 0;
          uRam00000000026e9808 = 0;
          _DAT_026e9810 = 0;
          uRam00000000026e9818 = 0;
          _DAT_026e9820 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b77c0 = "_editRightBorderType";
      _DAT_028b77c8 = &DAT_026e9760;
      _DAT_028b77d0 = 0;
      _DAT_028b77d8 = &DAT_027ef0c1;
      _DAT_028b77e0 = FUN_01cfa3f0;
      _DAT_028b77e8 = FUN_01cf3560;
      _DAT_028b77f0 = 0;
      uRam00000000028b77f8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b7848 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026fde20 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026e9778 = FUN_0006d940();
          _DAT_026e9760 = "GNClipView";
          _DAT_026e9768 = 0x178;
          _DAT_026e9770 = FUN_001b6420;
          _DAT_026e9780 = 0;
          uRam00000000026e9788 = 0;
          _DAT_026e9790 = 0;
          uRam00000000026e9798 = 0;
          _DAT_026e97a0 = 0;
          uRam00000000026e97a8 = 0;
          _DAT_026e97b0 = 0;
          uRam00000000026e97b8 = 0;
          _DAT_026e97c0 = 0;
          uRam00000000026e97c8 = 0;
          _DAT_026e97d0 = 0;
          uRam00000000026e97d8 = 0;
          _DAT_026e97e0 = 0;
          uRam00000000026e97e8 = 0;
          _DAT_026e97f0 = 0;
          uRam00000000026e97f8 = 0;
          _DAT_026e9800 = 0;
          uRam00000000026e9808 = 0;
          _DAT_026e9810 = 0;
          uRam00000000026e9818 = 0;
          _DAT_026e9820 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b7808 = "_editTopBorderType";
      _DAT_028b7810 = &DAT_026e9760;
      _DAT_028b7818 = 0;
      _DAT_028b7820 = &DAT_027ef0c1;
      _DAT_028b7828 = FUN_01cfa3f0;
      _DAT_028b7830 = FUN_01cf3640;
      _DAT_028b7838 = 0;
      uRam00000000028b7840 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b7890 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026fde20 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026e9778 = FUN_0006d940();
          _DAT_026e9760 = "GNClipView";
          _DAT_026e9768 = 0x178;
          _DAT_026e9770 = FUN_001b6420;
          _DAT_026e9780 = 0;
          uRam00000000026e9788 = 0;
          _DAT_026e9790 = 0;
          uRam00000000026e9798 = 0;
          _DAT_026e97a0 = 0;
          uRam00000000026e97a8 = 0;
          _DAT_026e97b0 = 0;
          uRam00000000026e97b8 = 0;
          _DAT_026e97c0 = 0;
          uRam00000000026e97c8 = 0;
          _DAT_026e97d0 = 0;
          uRam00000000026e97d8 = 0;
          _DAT_026e97e0 = 0;
          uRam00000000026e97e8 = 0;
          _DAT_026e97f0 = 0;
          uRam00000000026e97f8 = 0;
          _DAT_026e9800 = 0;
          uRam00000000026e9808 = 0;
          _DAT_026e9810 = 0;
          uRam00000000026e9818 = 0;
          _DAT_026e9820 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b7850 = "_editBottomBorderType";
      _DAT_028b7858 = &DAT_026e9760;
      _DAT_028b7860 = 0;
      _DAT_028b7868 = &DAT_027ef0c1;
      _DAT_028b7870 = FUN_01cfa3f0;
      _DAT_028b7878 = FUN_01cf3720;
      _DAT_028b7880 = 0;
      uRam00000000028b7888 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @001b6490 — 3009 bytes
// str: ""GNClipView""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001b6490(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_000a32b0();
  *unaff_RDI = &DAT_02678958;
  unaff_RDI[2] = &DAT_02679280;
  FUN_001b70d0();
  *(undefined1 *)(unaff_RDI + 0x28) = 0;
  if (DAT_026fde20 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e9778 = FUN_0006d940();
      _DAT_026e9760 = "GNClipView";
      _DAT_026e9768 = 0x178;
      _DAT_026e9770 = FUN_001b6420;
      _DAT_026e9780 = 0;
      uRam00000000026e9788 = 0;
      _DAT_026e9790 = 0;
      uRam00000000026e9798 = 0;
      _DAT_026e97a0 = 0;
      uRam00000000026e97a8 = 0;
      _DAT_026e97b0 = 0;
      uRam00000000026e97b8 = 0;
      _DAT_026e97c0 = 0;
      uRam00000000026e97c8 = 0;
      _DAT_026e97d0 = 0;
      uRam00000000026e97d8 = 0;
      _DAT_026e97e0 = 0;
      uRam00000000026e97e8 = 0;
      _DAT_026e97f0 = 0;
      uRam00000000026e97f8 = 0;
      _DAT_026e9800 = 0;
      uRam00000000026e9808 = 0;
      _DAT_026e9810 = 0;
      _uRam00000000026e9818 = 0;
      _DAT_026e9820 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e981b == '\0') {
    FUN_001b73c0();
    FUN_00e87980();
  }
  FUN_001b7530();
  *(undefined1 *)(unaff_RDI + 0x2a) = 0;
  if (DAT_026fde20 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e9778 = FUN_0006d940();
      _DAT_026e9760 = "GNClipView";
      _DAT_026e9768 = 0x178;
      _DAT_026e9770 = FUN_001b6420;
      _DAT_026e9780 = 0;
      uRam00000000026e9788 = 0;
      _DAT_026e9790 = 0;
      uRam00000000026e9798 = 0;
      _DAT_026e97a0 = 0;
      uRam00000000026e97a8 = 0;
      _DAT_026e97b0 = 0;
      uRam00000000026e97b8 = 0;
      _DAT_026e97c0 = 0;
      uRam00000000026e97c8 = 0;
      _DAT_026e97d0 = 0;
      uRam00000000026e97d8 = 0;
      _DAT_026e97e0 = 0;
      uRam00000000026e97e8 = 0;
      _DAT_026e97f0 = 0;
      uRam00000000026e97f8 = 0;
      _DAT_026e9800 = 0;
      uRam00000000026e9808 = 0;
      _DAT_026e9810 = 0;
      _uRam00000000026e9818 = 0;
      _DAT_026e9820 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e981b == '\0') {
    FUN_001b77b0();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x151) = 0;
  if (DAT_026fde20 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e9778 = FUN_0006d940();
      _DAT_026e9760 = "GNClipView";
      _DAT_026e9768 = 0x178;
      _DAT_026e9770 = FUN_001b6420;
      _DAT_026e9780 = 0;
      uRam00000000026e9788 = 0;
      _DAT_026e9790 = 0;
      uRam00000000026e9798 = 0;
      _DAT_026e97a0 = 0;
      uRam00000000026e97a8 = 0;
      _DAT_026e97b0 = 0;
      uRam00000000026e97b8 = 0;
      _DAT_026e97c0 = 0;
      uRam00000000026e97c8 = 0;
      _DAT_026e97d0 = 0;
      uRam00000000026e97d8 = 0;
      _DAT_026e97e0 = 0;
      uRam00000000026e97e8 = 0;
      _DAT_026e97f0 = 0;
      uRam00000000026e97f8 = 0;
      _DAT_026e9800 = 0;
      uRam00000000026e9808 = 0;
      _DAT_026e9810 = 0;
      _uRam00000000026e9818 = 0;
      _DAT_026e9820 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e981b == '\0') {
    FUN_001b7920();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x152) = 0;
  if (DAT_026fde20 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e9778 = FUN_0006d940();
      _DAT_026e9760 = "GNClipView";
      _DAT_026e9768 = 0x178;
      _DAT_026e9770 = FUN_001b6420;
      _DAT_026e9780 = 0;
      uRam00000000026e9788 = 0;
      _DAT_026e9790 = 0;
      uRam00000000026e9798 = 0;
      _DAT_026e97a0 = 0;
      uRam00000000026e97a8 = 0;
      _DAT_026e97b0 = 0;
      uRam00000000026e97b8 = 0;
      _DAT_026e97c0 = 0;
      uRam00000000026e97c8 = 0;
      _DAT_026e97d0 = 0;
      uRam00000000026e97d8 = 0;
      _DAT_026e97e0 = 0;
      uRam00000000026e97e8 = 0;
      _DAT_026e97f0 = 0;
      uRam00000000026e97f8 = 0;
      _DAT_026e9800 = 0;
      uRam00000000026e9808 = 0;
      _DAT_026e9810 = 0;
      _uRam00000000026e9818 = 0;
      _DAT_026e9820 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e981b == '\0') {
    FUN_001b7a90();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x153) = 0;
  if (DAT_026fde20 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e9778 = FUN_0006d940();
      _DAT_026e9760 = "GNClipView";
      _DAT_026e9768 = 0x178;
      _DAT_026e9770 = FUN_001b6420;
      _DAT_026e9780 = 0;
      uRam00000000026e9788 = 0;
      _DAT_026e9790 = 0;
      uRam00000000026e9798 = 0;
      _DAT_026e97a0 = 0;
      uRam00000000026e97a8 = 0;
      _DAT_026e97b0 = 0;
      uRam00000000026e97b8 = 0;
      _DAT_026e97c0 = 0;
      uRam00000000026e97c8 = 0;
      _DAT_026e97d0 = 0;
      uRam00000000026e97d8 = 0;
      _DAT_026e97e0 = 0;
      uRam00000000026e97e8 = 0;
      _DAT_026e97f0 = 0;
      uRam00000000026e97f8 = 0;
      _DAT_026e9800 = 0;
      uRam00000000026e9808 = 0;
      _DAT_026e9810 = 0;
      _uRam00000000026e9818 = 0;
      _DAT_026e9820 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e981b == '\0') {
    FUN_001b7c00();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x154) = 0;
  if (DAT_026fde20 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e9778 = FUN_0006d940();
      _DAT_026e9760 = "GNClipView";
      _DAT_026e9768 = 0x178;
      _DAT_026e9770 = FUN_001b6420;
      _DAT_026e9780 = 0;
      uRam00000000026e9788 = 0;
      _DAT_026e9790 = 0;
      uRam00000000026e9798 = 0;
      _DAT_026e97a0 = 0;
      uRam00000000026e97a8 = 0;
      _DAT_026e97b0 = 0;
      uRam00000000026e97b8 = 0;
      _DAT_026e97c0 = 0;
      uRam00000000026e97c8 = 0;
      _DAT_026e97d0 = 0;
      uRam00000000026e97d8 = 0;
      _DAT_026e97e0 = 0;
      uRam00000000026e97e8 = 0;
      _DAT_026e97f0 = 0;
      uRam00000000026e97f8 = 0;
      _DAT_026e9800 = 0;
      uRam00000000026e9808 = 0;
      _DAT_026e9810 = 0;
      _uRam00000000026e9818 = 0;
      _DAT_026e9820 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e981b == '\0') {
    FUN_001b7d70();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x2b) = 0;
  if (DAT_026fde20 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e9778 = FUN_0006d940();
      _DAT_026e9760 = "GNClipView";
      _DAT_026e9768 = 0x178;
      _DAT_026e9770 = FUN_001b6420;
      _DAT_026e9780 = 0;
      uRam00000000026e9788 = 0;
      _DAT_026e9790 = 0;
      uRam00000000026e9798 = 0;
      _DAT_026e97a0 = 0;
      uRam00000000026e97a8 = 0;
      _DAT_026e97b0 = 0;
      uRam00000000026e97b8 = 0;
      _DAT_026e97c0 = 0;
      uRam00000000026e97c8 = 0;
      _DAT_026e97d0 = 0;
      uRam00000000026e97d8 = 0;
      _DAT_026e97e0 = 0;
      uRam00000000026e97e8 = 0;
      _DAT_026e97f0 = 0;
      uRam00000000026e97f8 = 0;
      _DAT_026e9800 = 0;
      uRam00000000026e9808 = 0;
      _DAT_026e9810 = 0;
      _uRam00000000026e9818 = 0;
      _DAT_026e9820 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e981b == '\0') {
    FUN_001b7fb0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x15c) = 0;
  if (DAT_026fde20 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e9778 = FUN_0006d940();
      _DAT_026e9760 = "GNClipView";
      _DAT_026e9768 = 0x178;
      _DAT_026e9770 = FUN_001b6420;
      _DAT_026e9780 = 0;
      uRam00000000026e9788 = 0;
      _DAT_026e9790 = 0;
      uRam00000000026e9798 = 0;
      _DAT_026e97a0 = 0;
      uRam00000000026e97a8 = 0;
      _DAT_026e97b0 = 0;
      uRam00000000026e97b8 = 0;
      _DAT_026e97c0 = 0;
      uRam00000000026e97c8 = 0;
      _DAT_026e97d0 = 0;
      uRam00000000026e97d8 = 0;
      _DAT_026e97e0 = 0;
      uRam00000000026e97e8 = 0;
      _DAT_026e97f0 = 0;
      uRam00000000026e97f8 = 0;
      _DAT_026e9800 = 0;
      uRam00000000026e9808 = 0;
      _DAT_026e9810 = 0;
      _uRam00000000026e9818 = 0;
      _DAT_026e9820 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e981b == '\0') {
    FUN_001b81f0();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x2c) = 0;
  if (DAT_026fde20 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e9778 = FUN_0006d940();
      _DAT_026e9760 = "GNClipView";
      _DAT_026e9768 = 0x178;
      _DAT_026e9770 = FUN_001b6420;
      _DAT_026e9780 = 0;
      uRam00000000026e9788 = 0;
      _DAT_026e9790 = 0;
      uRam00000000026e9798 = 0;
      _DAT_026e97a0 = 0;
      uRam00000000026e97a8 = 0;
      _DAT_026e97b0 = 0;
      uRam00000000026e97b8 = 0;
      _DAT_026e97c0 = 0;
      uRam00000000026e97c8 = 0;
      _DAT_026e97d0 = 0;
      uRam00000000026e97d8 = 0;
      _DAT_026e97e0 = 0;
      uRam00000000026e97e8 = 0;
      _DAT_026e97f0 = 0;
      uRam00000000026e97f8 = 0;
      _DAT_026e9800 = 0;
      uRam00000000026e9808 = 0;
      _DAT_026e9810 = 0;
      _uRam00000000026e9818 = 0;
      _DAT_026e9820 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e981b == '\0') {
    FUN_001b8430();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x164) = 0;
  if (DAT_026fde20 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e9778 = FUN_0006d940();
      _DAT_026e9760 = "GNClipView";
      _DAT_026e9768 = 0x178;
      _DAT_026e9770 = FUN_001b6420;
      _DAT_026e9780 = 0;
      uRam00000000026e9788 = 0;
      _DAT_026e9790 = 0;
      uRam00000000026e9798 = 0;
      _DAT_026e97a0 = 0;
      uRam00000000026e97a8 = 0;
      _DAT_026e97b0 = 0;
      uRam00000000026e97b8 = 0;
      _DAT_026e97c0 = 0;
      uRam00000000026e97c8 = 0;
      _DAT_026e97d0 = 0;
      uRam00000000026e97d8 = 0;
      _DAT_026e97e0 = 0;
      uRam00000000026e97e8 = 0;
      _DAT_026e97f0 = 0;
      uRam00000000026e97f8 = 0;
      _DAT_026e9800 = 0;
      uRam00000000026e9808 = 0;
      _DAT_026e9810 = 0;
      _uRam00000000026e9818 = 0;
      _DAT_026e9820 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e981b == '\0') {
    FUN_001b8670();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x2d) = 0;
  if (DAT_026fde20 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e9778 = FUN_0006d940();
      _DAT_026e9760 = "GNClipView";
      _DAT_026e9768 = 0x178;
      _DAT_026e9770 = FUN_001b6420;
      _DAT_026e9780 = 0;
      uRam00000000026e9788 = 0;
      _DAT_026e9790 = 0;
      uRam00000000026e9798 = 0;
      _DAT_026e97a0 = 0;
      uRam00000000026e97a8 = 0;
      _DAT_026e97b0 = 0;
      uRam00000000026e97b8 = 0;
      _DAT_026e97c0 = 0;
      uRam00000000026e97c8 = 0;
      _DAT_026e97d0 = 0;
      uRam00000000026e97d8 = 0;
      _DAT_026e97e0 = 0;
      uRam00000000026e97e8 = 0;
      _DAT_026e97f0 = 0;
      uRam00000000026e97f8 = 0;
      _DAT_026e9800 = 0;
      uRam00000000026e9808 = 0;
      _DAT_026e9810 = 0;
      _uRam00000000026e9818 = 0;
      _DAT_026e9820 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e981b == '\0') {
    FUN_001b87e0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x16c) = 0;
  if (DAT_026fde20 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e9778 = FUN_0006d940();
      _DAT_026e9760 = "GNClipView";
      _DAT_026e9768 = 0x178;
      _DAT_026e9770 = FUN_001b6420;
      _DAT_026e9780 = 0;
      uRam00000000026e9788 = 0;
      _DAT_026e9790 = 0;
      uRam00000000026e9798 = 0;
      _DAT_026e97a0 = 0;
      uRam00000000026e97a8 = 0;
      _DAT_026e97b0 = 0;
      uRam00000000026e97b8 = 0;
      _DAT_026e97c0 = 0;
      uRam00000000026e97c8 = 0;
      _DAT_026e97d0 = 0;
      uRam00000000026e97d8 = 0;
      _DAT_026e97e0 = 0;
      uRam00000000026e97e8 = 0;
      _DAT_026e97f0 = 0;
      uRam00000000026e97f8 = 0;
      _DAT_026e9800 = 0;
      uRam00000000026e9808 = 0;
      _DAT_026e9810 = 0;
      _uRam00000000026e9818 = 0;
      _DAT_026e9820 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e981b == '\0') {
    FUN_001b8950();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x2e) = 0;
  if (DAT_026fde20 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e9778 = FUN_0006d940();
      _DAT_026e9760 = "GNClipView";
      _DAT_026e9768 = 0x178;
      _DAT_026e9770 = FUN_001b6420;
      _DAT_026e9780 = 0;
      uRam00000000026e9788 = 0;
      _DAT_026e9790 = 0;
      uRam00000000026e9798 = 0;
      _DAT_026e97a0 = 0;
      uRam00000000026e97a8 = 0;
      _DAT_026e97b0 = 0;
      uRam00000000026e97b8 = 0;
      _DAT_026e97c0 = 0;
      uRam00000000026e97c8 = 0;
      _DAT_026e97d0 = 0;
      uRam00000000026e97d8 = 0;
      _DAT_026e97e0 = 0;
      uRam00000000026e97e8 = 0;
      _DAT_026e97f0 = 0;
      uRam00000000026e97f8 = 0;
      _DAT_026e9800 = 0;
      uRam00000000026e9808 = 0;
      _DAT_026e9810 = 0;
      _uRam00000000026e9818 = 0;
      _DAT_026e9820 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e981b == '\0') {
    FUN_001b8ac0();
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @01cf5ff0 — 2717 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01cf60e7) */
/* WARNING: Removing unreachable block (ram,0x01cf60f0) */
/* WARNING: Removing unreachable block (ram,0x01cf66b6) */
/* WARNING: Removing unreachable block (ram,0x01cf66c3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cf5ff0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  longlong lVar8;
  longlong *plVar9;
  char unaff_SIL;
  longlong *unaff_RDI;
  longlong *plVar10;
  float fVar11;
  float extraout_XMM0_Da;
  float fVar22;
  float extraout_XMM0_Db;
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uVar12;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uVar13;
  undefined8 extraout_XMM0_Qb_03;
  undefined4 uVar23;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 extraout_XMM0_Qb_04;
  undefined1 auVar24 [12];
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar44;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 local_128 [48];
  undefined1 local_e8 [8];
  undefined8 uStack_e0;
  undefined8 local_c8;
  float local_b8;
  float fStack_b4;
  longlong *local_a0;
  char local_98;
  undefined1 local_88 [16];
  undefined1 local_78 [8];
  undefined8 uStack_70;
  undefined1 local_68 [8];
  undefined8 uStack_60;
  longlong *local_58;
  char local_50;
  undefined1 local_48 [8];
  undefined8 uStack_40;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_02;
  
  fVar22 = (float)((ulonglong)param_2 >> 0x20);
  fVar29 = (float)param_2;
  uStack_70 = in_XMM0_Qb;
  local_78 = (undefined1  [8])param_1;
  (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x4d8))();
  fVar32 = fVar29;
  (**(code **)(*unaff_RDI + 0x4d8))();
  (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x4d8))();
  fVar44 = fVar22;
  (**(code **)(*unaff_RDI + 0x4d8))();
  fVar22 = fVar22 - fVar44;
  auVar25 = ZEXT816(0);
  if ((float)param_1 < 0.0) {
    _local_78 = blendps(_local_78,ZEXT816(0),1);
  }
  auVar24 = ZEXT812(0);
  if (0.0 <= fVar29 - fVar32) {
    auVar24._4_8_ = 0;
    auVar24._0_4_ = fVar29 - fVar32;
  }
  auVar50._12_4_ = 0;
  auVar50._0_12_ = auVar24;
  if (local_78._4_4_ < 0.0) {
    _local_78 = blendps(_local_78,ZEXT816(0),2);
    if (0.0 <= fVar22) {
      auVar25 = ZEXT416((uint)fVar22);
    }
    if (local_78._0_4_ <= auVar24._0_4_) goto LAB_01cf60a4;
LAB_01cf612c:
    _local_78 = blendps(_local_78,auVar50,1);
    if (auVar25._0_4_ < local_78._4_4_) {
LAB_01cf60ad:
      _local_78 = insertps(_local_78,auVar25,0x10);
    }
  }
  else {
    if (0.0 <= fVar22) {
      auVar25 = ZEXT416((uint)fVar22);
    }
    if (auVar24._0_4_ < local_78._0_4_) goto LAB_01cf612c;
LAB_01cf60a4:
    if (auVar25._0_4_ < local_78._4_4_) goto LAB_01cf60ad;
  }
  (**(code **)(*unaff_RDI + 0x7b8))();
  if (local_58 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
    bVar5 = true;
    lVar8 = unaff_RDI[0x27];
    if (lVar8 != 0) goto LAB_01cf6109;
LAB_01cf615b:
    fVar32 = 0.0;
    fVar44 = 0.0;
  }
  else {
    if (local_50 == '\0') {
      FUN_00d50b00();
    }
    bVar5 = false;
    lVar8 = unaff_RDI[0x27];
    plVar10 = local_58;
    if (lVar8 == 0) goto LAB_01cf615b;
LAB_01cf6109:
    fVar32 = 0.0 - (float)*(undefined8 *)(lVar8 + 0x10c);
    fVar44 = 0.0 - (float)((ulonglong)*(undefined8 *)(lVar8 + 0x10c) >> 0x20);
  }
  fVar22 = (float)local_78._0_4_ - fVar32;
  fVar29 = (float)local_78._4_4_ - fVar44;
  fVar30 = (float)uStack_70 - 0.0;
  fVar31 = uStack_70._4_4_ - 0.0;
  fVar33 = (float)local_78._4_4_ - fVar44;
  if (((fVar22 == 0.0) && (fVar33 == 0.0)) && (!NAN(fVar33))) goto LAB_01cf6a51;
  local_c8 = CONCAT44(DAT_023dccec._4_4_,(float)DAT_023dccec);
  local_68 = (undefined1  [8])CONCAT44(DAT_023dccf4._4_4_,(float)DAT_023dccf4);
  uStack_60 = 0;
  local_e8._0_4_ = fVar22;
  local_e8._4_4_ = fVar29;
  uStack_e0._0_4_ = fVar30;
  uStack_e0._4_4_ = fVar31;
  FUN_01e436c0();
  FUN_01e3f820();
  auVar25 = _local_e8;
  local_e8 = (undefined1  [8])FUN_00d05360();
  uStack_e0 = extraout_XMM0_Qb;
  if ((float)local_78._0_4_ <= fVar32) {
    local_128._8_8_ = 0;
    local_128._0_8_ = local_c8;
    local_88._8_8_ = 0;
    local_88._0_8_ = local_68;
    auVar17 = auVar25;
    if (fVar32 <= (float)local_78._0_4_) goto LAB_01cf628a;
LAB_01cf63a5:
    auVar50 = auVar25;
    auVar18._0_8_ = FUN_01e436c0();
    auVar18._8_8_ = extraout_XMM0_Qb_02;
    auVar40._0_4_ = fVar22 + (float)auVar18._0_8_;
    auVar40._4_4_ = fVar29 + (float)((ulonglong)auVar18._0_8_ >> 0x20);
    auVar40._8_4_ = fVar30 + (float)extraout_XMM0_Qb_02;
    auVar40._12_4_ = fVar31 + (float)((ulonglong)extraout_XMM0_Qb_02 >> 0x20);
    local_128._0_16_ = blendps(auVar40,auVar18,2);
    auVar19._0_4_ = fVar32 - (float)local_78._0_4_;
    auVar19._4_4_ = fVar44 - (float)local_78._4_4_;
    auVar19._8_4_ = 0.0 - (float)uStack_70;
    auVar19._12_4_ = 0.0 - uStack_70._4_4_;
    local_88 = blendps(auVar50,auVar19,0xd);
    auVar17._0_4_ = auVar25._0_4_ - auVar19._0_4_;
    auVar17._4_4_ = auVar25._4_4_ - auVar19._4_4_;
    auVar17._8_4_ = auVar25._8_4_ - auVar19._8_4_;
    auVar17._12_4_ = auVar25._12_4_ - auVar19._12_4_;
    _local_48 = blendps(auVar25,auVar17,0xd);
    if (fVar44 < (float)local_78._4_4_) goto LAB_01cf629e;
LAB_01cf6405:
    uVar13 = local_88._0_8_;
  }
  else {
    auVar50 = auVar25;
    auVar14._0_8_ = FUN_01e436c0();
    auVar14._8_8_ = extraout_XMM0_Qb_00;
    auVar35._0_4_ = (float)auVar14._0_8_ + auVar50._0_4_;
    auVar35._4_4_ = (float)((ulonglong)auVar14._0_8_ >> 0x20) + auVar50._4_4_;
    auVar35._8_4_ = (float)extraout_XMM0_Qb_00 + auVar50._8_4_;
    auVar35._12_4_ = (float)((ulonglong)extraout_XMM0_Qb_00 >> 0x20) + auVar50._12_4_;
    local_128._0_16_ = blendps(auVar35,auVar14,2);
    auVar2._4_4_ = fVar29;
    auVar2._0_4_ = fVar22;
    auVar2._8_4_ = fVar30;
    auVar2._12_4_ = fVar31;
    local_88 = blendps(auVar50,auVar2,0xd);
    auVar15._0_4_ = fVar22 + SUB84(local_e8,0);
    auVar15._4_4_ = fVar29 + (float)((ulonglong)local_e8 >> 0x20);
    auVar15._8_4_ = fVar30 + (float)extraout_XMM0_Qb;
    auVar15._12_4_ = fVar31 + (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
    _local_e8 = blendps(_local_e8,auVar15,0xd);
    auVar16._0_4_ = auVar25._0_4_ - fVar22;
    auVar16._4_4_ = auVar25._4_4_ - fVar29;
    auVar16._8_4_ = auVar25._8_4_ - fVar30;
    auVar16._12_4_ = auVar25._12_4_ - fVar31;
    auVar25 = blendps(auVar25,auVar16,0xd);
    auVar17 = auVar25;
    if ((float)local_78._0_4_ < fVar32) goto LAB_01cf63a5;
LAB_01cf628a:
    _local_48 = auVar17;
    if ((float)local_78._4_4_ <= fVar44) goto LAB_01cf6405;
LAB_01cf629e:
    uVar13 = local_88._0_8_;
    uVar12 = FUN_01e436c0();
    fVar11 = (float)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
    auVar49._0_4_ = (float)uVar12 + auVar17._0_4_;
    auVar49._4_4_ = (float)((ulonglong)uVar12 >> 0x20) + auVar17._4_4_;
    auVar49._8_4_ = (float)extraout_XMM0_Qb_01 + auVar17._8_4_;
    auVar49._12_4_ = fVar11 + auVar17._12_4_;
    auVar25._8_4_ = (float)extraout_XMM0_Qb_01;
    auVar25._0_8_ = uVar12;
    auVar25._12_4_ = fVar11;
    auVar25 = blendps(auVar25,auVar49,2);
    local_c8 = auVar25._0_8_;
    fVar11 = local_e8._4_4_;
    auVar36._4_4_ = fVar11;
    auVar36._0_4_ = fVar11;
    auVar36._8_4_ = local_e8._12_4_;
    auVar36._12_4_ = local_e8._12_4_;
    auVar37._4_12_ = auVar36._4_12_;
    auVar37._0_4_ = fVar11 + fVar33;
    insertps(_local_e8,auVar37,0x10);
    fVar11 = local_48._4_4_;
    auVar38._4_4_ = fVar11;
    auVar38._0_4_ = fVar11;
    auVar38._8_4_ = local_48._12_4_;
    auVar38._12_4_ = local_48._12_4_;
    auVar39._4_12_ = auVar38._4_12_;
    auVar39._0_4_ = fVar11 - fVar33;
    _local_48 = insertps(_local_48,auVar39,0x10);
    fVar11 = local_128._0_4_;
    auVar25 = _local_48;
    if ((((fVar11 != (float)DAT_023dccec) || (NAN(fVar11) || NAN((float)DAT_023dccec))) ||
        ((local_128._4_4_ != DAT_023dccec._4_4_ ||
         ((NAN(local_128._4_4_) || NAN(DAT_023dccec._4_4_) ||
          (auVar25 = local_88, (float)local_88._0_4_ != (float)DAT_023dccf4)))))) ||
       (NAN((float)local_88._0_4_) || NAN((float)DAT_023dccf4))) {
LAB_01cf633c:
      if (fVar11 < (float)uVar12) {
        auVar50 = blendps(auVar49,local_128._0_16_,0xd);
        local_c8 = auVar50._0_8_;
      }
      auVar17._0_4_ = auVar17._0_4_ + (float)local_88._0_4_;
      local_88 = auVar25;
    }
    else if (((float)local_88._4_4_ != DAT_023dccf4._4_4_) ||
            (NAN((float)local_88._4_4_) || NAN(DAT_023dccf4._4_4_))) goto LAB_01cf633c;
    _local_68 = insertps(auVar17,fVar33,0x10);
    auVar17 = local_88;
  }
  local_88._0_4_ = (undefined4)uVar13;
  local_88._4_4_ = (undefined4)((ulonglong)uVar13 >> 0x20);
  auVar27 = auVar17;
  if ((float)local_78._4_4_ < fVar44) {
    uVar13 = FUN_01e436c0();
    fVar11 = (float)((ulonglong)uVar13 >> 0x20);
    auVar41._4_4_ = fVar11;
    auVar41._0_4_ = fVar11;
    uVar23 = (undefined4)((ulonglong)extraout_XMM0_Qb_03 >> 0x20);
    auVar41._8_4_ = uVar23;
    auVar41._12_4_ = uVar23;
    auVar42._4_12_ = auVar41._4_12_;
    auVar42._0_4_ = fVar11 + fVar33;
    auVar26._8_4_ = (int)extraout_XMM0_Qb_03;
    auVar26._0_8_ = uVar13;
    auVar26._12_4_ = uVar23;
    auVar25 = insertps(auVar26,auVar42,0x10);
    local_c8 = auVar25._0_8_;
    auVar27._0_4_ = fVar44 - (float)local_78._4_4_;
    auVar27._4_4_ = fVar44;
    auVar27._8_8_ = 0;
    fVar11 = local_48._4_4_;
    auVar45._4_4_ = fVar11;
    auVar45._0_4_ = fVar11;
    auVar45._8_4_ = local_48._12_4_;
    auVar45._12_4_ = local_48._12_4_;
    auVar46._4_12_ = auVar45._4_12_;
    auVar46._0_4_ = fVar11 - auVar27._0_4_;
    auVar25 = insertps(_local_48,auVar46,0x10);
    local_48 = auVar25._0_8_;
    fVar11 = local_128._0_4_;
    if (((((fVar11 != (float)DAT_023dccec) || (NAN(fVar11) || NAN((float)DAT_023dccec))) ||
         (local_128._4_4_ != DAT_023dccec._4_4_)) ||
        ((NAN(local_128._4_4_) || NAN(DAT_023dccec._4_4_) ||
         ((float)local_88._0_4_ != (float)DAT_023dccf4)))) ||
       (NAN((float)local_88._0_4_) || NAN((float)DAT_023dccf4))) {
LAB_01cf64a9:
      if (fVar11 < (float)uVar13) {
        auVar25 = insertps(local_128._0_16_,auVar42,0x10);
        local_c8 = auVar25._0_8_;
      }
      auVar17._0_4_ = auVar17._0_4_ + (float)local_88._0_4_;
    }
    else if (((float)local_88._4_4_ != DAT_023dccf4._4_4_) ||
            (NAN((float)local_88._4_4_) || NAN(DAT_023dccf4._4_4_))) goto LAB_01cf64a9;
    _local_68 = insertps(auVar17,auVar27,0x10);
  }
  FUN_01e42030();
  (**(code **)(*local_a0 + 0x9a0))();
  if (local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  bVar4 = true;
  if ((((*(char *)((longlong)unaff_RDI + 0x153) == '\0') &&
       (cVar6 = (**(code **)(*local_58 + 0x440))(), cVar6 != '\0')) &&
      (FUN_01e3f820(), (float)(_DAT_02390140 & (uint)fVar22) <= auVar27._0_4_)) &&
     (FUN_01e3f820(), (float)(_DAT_02390140 & (uint)fVar33) <= auVar27._4_4_)) {
    fVar11 = (float)(**(code **)(*local_58 + 0x448))();
    fVar34 = fVar22 / fVar11;
    if ((fVar34 != 0.0) || (NAN(fVar34))) {
      auVar47._0_4_ = _DAT_023945e0 & (uint)fVar34;
      auVar47._4_4_ = _UNK_023945e4 & (uint)fVar29;
      auVar47._8_4_ = _UNK_023945e8 & (uint)fVar30;
      auVar47._12_4_ = _UNK_023945ec & (uint)fVar31;
      auVar48._4_12_ = SUB1612(auVar47 | _DAT_023945f0,4);
      auVar48._0_4_ = SUB164(auVar47 | _DAT_023945f0,0) + fVar34;
      auVar25 = roundss(auVar48,auVar48,0xb);
      if ((fVar34 == auVar25._0_4_) && (!NAN(fVar34) && !NAN(auVar25._0_4_))) goto LAB_01cf65d9;
LAB_01cf6610:
      bVar4 = true;
    }
    else {
LAB_01cf65d9:
      fVar11 = fVar33 / fVar11;
      if ((fVar11 != 0.0) || (bVar4 = false, NAN(fVar11))) {
        auVar20._0_4_ = _DAT_023945e0 & (uint)fVar11;
        auVar20._4_4_ = _UNK_023945e4 & local_78._4_4_;
        auVar20._8_4_ = _UNK_023945e8 & (uint)uStack_70._4_4_;
        auVar20._12_4_ = _UNK_023945ec & (uint)uStack_70._4_4_;
        auVar21._4_12_ = SUB1612(auVar20 | _DAT_023945f0,4);
        auVar21._0_4_ = SUB164(auVar20 | _DAT_023945f0,0) + fVar11;
        auVar25 = roundss(auVar21,auVar21,0xb);
        if ((fVar11 != auVar25._0_4_) || (bVar4 = false, NAN(fVar11) || NAN(auVar25._0_4_)))
        goto LAB_01cf6610;
      }
    }
  }
  bVar7 = FUN_01cf3e60();
  if (bVar4 || (bVar7 ^ 1) != 0) {
    local_48._0_4_ = (float)DAT_023dccec;
    local_48._4_4_ = DAT_023dccec._4_4_;
    local_b8 = (float)DAT_023dccf4;
    fStack_b4 = DAT_023dccf4._4_4_;
    FUN_01e3f820();
    (**(code **)(*unaff_RDI + 0x618))();
  }
  else {
    FUN_00d50b00();
    plVar9 = unaff_RDI;
    if (unaff_RDI[0x27] != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
      plVar1 = (longlong *)unaff_RDI[0x27];
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      if (plVar1 == unaff_RDI) {
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_00d50b20();
        plVar9 = plVar1;
      }
    }
    (**(code **)(*plVar9 + 0x4d8))();
    FUN_01e49300();
    FUN_01e42030();
    (**(code **)(*local_a0 + 0x9a0))();
    auVar28._0_4_ = fVar44 - (float)local_78._4_4_;
    auVar28._4_4_ = fVar44;
    auVar28._8_8_ = 0;
    auVar43._0_4_ = fVar32 - (float)local_78._0_4_;
    auVar43._4_4_ = fVar44;
    auVar43._8_8_ = 0;
    insertps(auVar43,auVar28,0x10);
    (**(code **)(*local_58 + 0x450))();
    local_b8 = SUB84(local_48,0);
    fStack_b4 = (float)((ulonglong)local_48 >> 0x20);
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    local_48._0_4_ = extraout_XMM0_Da;
    local_48._4_4_ = extraout_XMM0_Db;
  }
  FUN_01cf5d20();
  if (((((float)local_48._0_4_ != (float)DAT_023dccec) ||
       (NAN((float)local_48._0_4_) || NAN((float)DAT_023dccec))) ||
      ((float)local_48._4_4_ != DAT_023dccec._4_4_)) ||
     (((NAN((float)local_48._4_4_) || NAN(DAT_023dccec._4_4_) || (local_b8 != (float)DAT_023dccf4))
      || (NAN(local_b8) || NAN((float)DAT_023dccf4))))) {
LAB_01cf6800:
    FUN_00d50b00();
    plVar9 = unaff_RDI;
    if (unaff_RDI[0x27] != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
      plVar1 = (longlong *)unaff_RDI[0x27];
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      if (plVar1 == unaff_RDI) {
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_00d50b20();
        plVar9 = plVar1;
      }
    }
    FUN_01e49090();
    if (plVar9 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  else if ((fStack_b4 != DAT_023dccf4._4_4_) || (NAN(fStack_b4) || NAN(DAT_023dccf4._4_4_)))
  goto LAB_01cf6800;
  if (!bVar4 && (bVar7 ^ 1) == 0) {
    if ((((((float)local_128._0_4_ != (float)DAT_023dccec) ||
          (NAN((float)local_128._0_4_) || NAN((float)DAT_023dccec))) ||
         ((float)local_128._4_4_ != DAT_023dccec._4_4_)) ||
        ((NAN((float)local_128._4_4_) || NAN(DAT_023dccec._4_4_) ||
         ((float)local_88._0_4_ != (float)DAT_023dccf4)))) ||
       (NAN((float)local_88._0_4_) || NAN((float)DAT_023dccf4))) {
LAB_01cf68c1:
      FUN_00d052e0();
      FUN_01e436c0();
      FUN_00d05360();
      (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x618))();
    }
    else if (((float)local_88._4_4_ != DAT_023dccf4._4_4_) ||
            (NAN((float)local_88._4_4_) || NAN(DAT_023dccf4._4_4_))) goto LAB_01cf68c1;
    if (((float)local_c8 == (float)DAT_023dccec) &&
       (!NAN((float)local_c8) && !NAN((float)DAT_023dccec))) {
      if ((local_c8._4_4_ == DAT_023dccec._4_4_) &&
         (!NAN(local_c8._4_4_) && !NAN(DAT_023dccec._4_4_))) {
        if (((float)local_68._0_4_ == (float)DAT_023dccf4) &&
           (!NAN((float)local_68._0_4_) && !NAN((float)DAT_023dccf4))) {
          if (((float)local_68._4_4_ == DAT_023dccf4._4_4_) &&
             (!NAN((float)local_68._4_4_) && !NAN(DAT_023dccf4._4_4_))) goto LAB_01cf69cf;
        }
      }
    }
    local_78 = (undefined1  [8])FUN_00d052e0();
    uStack_70 = extraout_XMM0_Qb_04;
    uStack_40 = uStack_60;
    local_48 = local_68;
    FUN_01e436c0();
    uVar23 = (undefined4)((ulonglong)uStack_60 >> 0x20);
    fVar32 = (float)((ulonglong)local_68 >> 0x20);
    auVar51._4_4_ = fVar32;
    auVar51._0_4_ = fVar32;
    auVar51._8_4_ = uVar23;
    auVar51._12_4_ = uVar23;
    auVar52._4_12_ = auVar51._4_12_;
    auVar52._0_4_ = fVar32 + DAT_02390d34;
    uVar23 = (undefined4)((ulonglong)extraout_XMM0_Qb_04 >> 0x20);
    fVar32 = (float)((ulonglong)local_78 >> 0x20);
    auVar53._4_4_ = fVar32;
    auVar53._0_4_ = fVar32;
    auVar53._8_4_ = uVar23;
    auVar53._12_4_ = uVar23;
    auVar54._4_12_ = auVar53._4_12_;
    auVar54._0_4_ = fVar32 + DAT_02390d00;
    insertps(_local_78,auVar54,0x10);
    insertps(_local_48,auVar52,0x10);
    FUN_00d05360();
    (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x618))();
  }
LAB_01cf69cf:
  if (plVar10 != (longlong *)0x0) {
    FUN_00d50b00();
    auVar3._4_4_ = fVar29;
    auVar3._0_4_ = fVar22;
    auVar3._8_4_ = fVar30;
    auVar3._12_4_ = fVar31;
    auVar25 = insertps(auVar3,fVar33,0x10);
    (**(code **)(*plVar10 + 0x930))(auVar25._0_8_);
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (unaff_SIL != '\0') {
    FUN_01cf6d20();
  }
  if (local_58 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_01cf6a51:
  if (!bVar5 && plVar10 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01cf88b0 — 1654 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01cf8f16) */
/* WARNING: Removing unreachable block (ram,0x01cf8f1f) */
/* WARNING: Removing unreachable block (ram,0x01cf8e50) */
/* WARNING: Removing unreachable block (ram,0x01cf8e59) */
/* WARNING: Removing unreachable block (ram,0x01cf8e03) */
/* WARNING: Removing unreachable block (ram,0x01cf8cd6) */
/* WARNING: Removing unreachable block (ram,0x01cf8cdf) */
/* WARNING: Removing unreachable block (ram,0x01cf8c36) */
/* WARNING: Removing unreachable block (ram,0x01cf8c3f) */
/* WARNING: Removing unreachable block (ram,0x01cf8b96) */
/* WARNING: Removing unreachable block (ram,0x01cf8b9f) */
/* WARNING: Removing unreachable block (ram,0x01cf8af6) */
/* WARNING: Removing unreachable block (ram,0x01cf8aff) */
/* WARNING: Removing unreachable block (ram,0x01cf8a56) */
/* WARNING: Removing unreachable block (ram,0x01cf8a5f) */
/* WARNING: Removing unreachable block (ram,0x01cf89b6) */
/* WARNING: Removing unreachable block (ram,0x01cf89bf) */
/* WARNING: Removing unreachable block (ram,0x01cf8a06) */
/* WARNING: Removing unreachable block (ram,0x01cf8a0f) */
/* WARNING: Removing unreachable block (ram,0x01cf8aa6) */
/* WARNING: Removing unreachable block (ram,0x01cf8aaf) */
/* WARNING: Removing unreachable block (ram,0x01cf8b46) */
/* WARNING: Removing unreachable block (ram,0x01cf8b4f) */
/* WARNING: Removing unreachable block (ram,0x01cf8be6) */
/* WARNING: Removing unreachable block (ram,0x01cf8bef) */
/* WARNING: Removing unreachable block (ram,0x01cf8c86) */
/* WARNING: Removing unreachable block (ram,0x01cf8c8f) */
/* WARNING: Removing unreachable block (ram,0x01cf8d59) */
/* WARNING: Removing unreachable block (ram,0x01cf8d62) */
/* WARNING: Removing unreachable block (ram,0x01cf8e88) */
/* WARNING: Removing unreachable block (ram,0x01cf8dbd) */
/* WARNING: Removing unreachable block (ram,0x01cf8dca) */
/* WARNING: Removing unreachable block (ram,0x01cf8ebd) */
/* WARNING: Removing unreachable block (ram,0x01cf8ec6) */

ulonglong FUN_01cf88b0(undefined8 param_1,char param_2)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong unaff_RDI;
  bool bVar10;
  longlong local_60;
  char local_58;
  
  if ((DAT_028b78b8 == (undefined8 *)0x0) || (DAT_028b78c1 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b78b8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar8 = &DAT_02572358;
      (*DAT_02572370)();
      if (DAT_028b78b8 == puVar8) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar10 = DAT_028b78b8 != (undefined8 *)0x0;
        DAT_028b78b8 = puVar8;
        if (bVar10) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b78c0 == '\0') {
        DAT_028b78c0 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027ef080;
      if (DAT_027ef080 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027ef088;
      if (DAT_027ef088 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_026de648;
      if (DAT_026de648 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027f1690;
      if (DAT_027f1690 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_026de630;
      if (DAT_026de630 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027f1680;
      if (DAT_027f1680 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027ef090;
      if (DAT_027ef090 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027ef098;
      if (DAT_027ef098 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027ef0a0;
      if (DAT_027ef0a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027ef0a8;
      if (DAT_027ef0a8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027ef0b0;
      if (DAT_027ef0b0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_028b78c1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b78c1 = '\x01';
      FUN_00e8cb70();
    }
  }
  if (*(longlong *)(unaff_RDI + 0x138) != 0) {
    FUN_01cae990();
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    cVar5 = FUN_00d23d70();
    if (local_60 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    plVar4 = DAT_027f1670;
    if (cVar5 != '\0') {
      uVar6 = (**(code **)(**(longlong **)(unaff_RDI + 0x138) + 0x3b8))();
      return (ulonglong)uVar6;
    }
    if (DAT_027f1670 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    FUN_01cae990();
    if (local_60 != 0) {
      FUN_00d50b00();
    }
    uVar7 = (**(code **)(*plVar4 + 0x50))();
    if (local_60 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if ((char)uVar7 != '\0') {
      uVar9 = CONCAT71((uint7)(uint3)((uint)uVar7 >> 8),1);
      if (param_2 == '\0') {
        return uVar9;
      }
      FUN_01caeb00();
      if (local_60 != 0) {
        FUN_00d50b00();
      }
      FUN_01cf7150();
      if (local_60 == 0) {
        return uVar9;
      }
      FUN_00d50b20();
      return uVar9;
    }
  }
  uVar6 = FUN_01e47f50();
  return (ulonglong)uVar6;
}




// ============================================================
// @01cf7d30 — 1380 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01cf7dec) */
/* WARNING: Removing unreachable block (ram,0x01cf7df5) */
/* WARNING: Removing unreachable block (ram,0x01cf81c3) */
/* WARNING: Removing unreachable block (ram,0x01cf81cc) */
/* WARNING: Removing unreachable block (ram,0x01cf7eb1) */
/* WARNING: Removing unreachable block (ram,0x01cf7ebe) */
/* WARNING: Removing unreachable block (ram,0x01cf8250) */
/* WARNING: Removing unreachable block (ram,0x01cf8259) */
/* WARNING: Removing unreachable block (ram,0x01cf8218) */
/* WARNING: Removing unreachable block (ram,0x01cf8122) */
/* WARNING: Removing unreachable block (ram,0x01cf810b) */
/* WARNING: Removing unreachable block (ram,0x01cf80c9) */
/* WARNING: Removing unreachable block (ram,0x01cf80f2) */
/* WARNING: Removing unreachable block (ram,0x01cf80fb) */
/* WARNING: Removing unreachable block (ram,0x01cf8096) */
/* WARNING: Removing unreachable block (ram,0x01cf80a4) */
/* WARNING: Removing unreachable block (ram,0x01cf80ad) */
/* WARNING: Removing unreachable block (ram,0x01cf80b2) */
/* WARNING: Removing unreachable block (ram,0x01cf817a) */
/* WARNING: Removing unreachable block (ram,0x01cf817c) */
/* WARNING: Removing unreachable block (ram,0x01cf8182) */
/* WARNING: Removing unreachable block (ram,0x01cf818b) */
/* WARNING: Removing unreachable block (ram,0x01cf8190) */
/* WARNING: Removing unreachable block (ram,0x01cf8194) */
/* WARNING: Removing unreachable block (ram,0x01cf81d7) */
/* WARNING: Removing unreachable block (ram,0x01cf81e0) */
/* WARNING: Removing unreachable block (ram,0x01cf81e5) */
/* WARNING: Removing unreachable block (ram,0x01cf81fa) */
/* WARNING: Removing unreachable block (ram,0x01cf7f12) */
/* WARNING: Removing unreachable block (ram,0x01cf7f1b) */
/* WARNING: Removing unreachable block (ram,0x01cf7f79) */
/* WARNING: Removing unreachable block (ram,0x01cf7f82) */
/* WARNING: Removing unreachable block (ram,0x01cf8119) */
/* WARNING: Removing unreachable block (ram,0x01cf813e) */
/* WARNING: Removing unreachable block (ram,0x01cf8167) */
/* WARNING: Removing unreachable block (ram,0x01cf8170) */
/* WARNING: Removing unreachable block (ram,0x01cf826d) */
/* WARNING: Removing unreachable block (ram,0x01cf8127) */
/* WARNING: Removing unreachable block (ram,0x01cf820f) */
/* WARNING: Removing unreachable block (ram,0x01cf821d) */
/* WARNING: Removing unreachable block (ram,0x01cf8287) */
/* WARNING: Removing unreachable block (ram,0x01cf8221) */
/* WARNING: Removing unreachable block (ram,0x01cf8264) */
/* WARNING: Removing unreachable block (ram,0x01cf8272) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cf7d30(void)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  char cVar3;
  int iVar4;
  longlong *unaff_RDI;
  float fVar5;
  undefined8 uVar6;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar13;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar14;
  longlong local_40;
  char local_38;
  
  iVar4 = FUN_01d3a5a0();
  if (iVar4 != 1) {
    if (iVar4 == 7) {
      if (unaff_RDI[0x27] == 0) {
        return;
      }
      uVar6 = *(undefined8 *)(unaff_RDI[0x27] + 0x10c);
      fVar10 = 0.0 - (float)uVar6;
      fVar13 = 0.0 - (float)((ulonglong)uVar6 >> 0x20);
      iVar4 = FUN_01d3b650();
      if (iVar4 != 1) {
        (**(code **)(*unaff_RDI + 0x7b8))();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
            goto LAB_01cf7f87;
          }
        }
        else if (local_40 != 0) {
LAB_01cf7f87:
          FUN_01d97ec0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 == 0) {
            (**(code **)(MACH_HEADER._0_8_ + 0x7b8))();
          }
          FUN_00d50b20();
        }
        iVar4 = 1;
        fVar14 = fVar13;
        goto LAB_01cf7fc0;
      }
      (**(code **)(*unaff_RDI + 0x7b8))();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
          goto LAB_01cf7f20;
        }
      }
      else if (local_40 != 0) {
LAB_01cf7f20:
        FUN_01d97e80();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 == 0) {
          (**(code **)(MACH_HEADER._0_8_ + 0x7b8))();
        }
        FUN_00d50b20();
      }
      iVar4 = 0;
      fVar14 = fVar10;
LAB_01cf7fc0:
      uVar6 = FUN_01d3b640();
      fVar5 = (float)uVar6 * DAT_023908ec;
      auVar11._0_4_ = _DAT_023945e0 & (uint)fVar5;
      auVar11._4_4_ = _UNK_023945e4 & (uint)((ulonglong)uVar6 >> 0x20);
      auVar11._8_4_ = _UNK_023945e8 & (uint)extraout_XMM0_Qb;
      auVar11._12_4_ = _UNK_023945ec & (uint)((ulonglong)extraout_XMM0_Qb >> 0x20);
      auVar12._4_12_ = SUB1612(auVar11 | _DAT_023945f0,4);
      auVar12._0_4_ = SUB164(auVar11 | _DAT_023945f0,0) + fVar5;
      auVar7._0_12_ = ZEXT812(0);
      auVar7._12_4_ = 0;
      auVar8 = roundss(auVar7,auVar12,0xb);
      fVar14 = fVar14 - auVar8._0_4_;
      auVar9._0_4_ = -(uint)(iVar4 == _DAT_0238fcc0);
      auVar9._4_4_ = -(uint)(iVar4 == _UNK_0238fcc4);
      auVar9._8_4_ = -(uint)(iVar4 == _UNK_0238fcc8);
      auVar9._12_4_ = -(uint)(iVar4 == _UNK_0238fccc);
      auVar2._4_4_ = fVar13;
      auVar2._0_4_ = fVar10;
      auVar2._8_8_ = 0;
      auVar8._4_4_ = fVar14;
      auVar8._0_4_ = fVar14;
      auVar8._8_4_ = fVar14;
      auVar8._12_4_ = fVar14;
      blendvps(auVar2,auVar8,auVar9);
      FUN_01cf5ff0();
      return;
    }
    if (iVar4 != 6) goto LAB_01cf7e8f;
  }
  plVar1 = (longlong *)unaff_RDI[0x27];
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar1 + 0x548))();
  if (cVar3 == '\0') {
    FUN_00d50b20();
  }
  else {
    cVar3 = *(char *)((longlong)unaff_RDI + 0x151);
    FUN_00d50b20();
    if (cVar3 == '\0') {
      *(undefined1 *)((longlong)unaff_RDI + 0x151) = 1;
      plVar1 = (longlong *)unaff_RDI[0x27];
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0x3c0))();
      FUN_00d50b20();
      *(undefined1 *)((longlong)unaff_RDI + 0x151) = 0;
      return;
    }
  }
  if ((iVar4 == 1) || (iVar4 == 6)) {
    FUN_01d3b630();
  }
LAB_01cf7e8f:
  FUN_01e459c0();
  return;
}




// ============================================================
// @01cf41d0 — 1104 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01cf41d0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  char cVar8;
  float *pfVar9;
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar14;
  undefined8 uVar13;
  float extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  float extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined8 in_XMM1_Qb;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined1 local_88 [8];
  float fStack_80;
  float fStack_7c;
  longlong *local_68;
  char local_60;
  longlong local_40;
  char local_38;
  longlong *local_30;
  char local_28;
  
  local_88 = (undefined1  [8])FUN_01e3f820();
  fVar14 = (float)((ulonglong)local_88 >> 0x20);
  fVar11 = SUB84(local_88,0);
  fStack_80 = extraout_XMM0_Dc;
  fStack_7c = extraout_XMM0_Dd;
  local_98 = (float)param_2;
  fStack_94 = (float)((ulonglong)param_2 >> 0x20);
  fStack_90 = (float)in_XMM1_Qb;
  fStack_8c = (float)((ulonglong)in_XMM1_Qb >> 0x20);
  switch(unaff_ESI) {
  case 0:
    pfVar9 = (float *)((longlong)unaff_RDI + 0x164);
    break;
  case 1:
    pfVar9 = (float *)((longlong)unaff_RDI + 0x16c);
    break;
  case 2:
    pfVar9 = (float *)(unaff_RDI + 0x2d);
    break;
  case 3:
    pfVar9 = (float *)(unaff_RDI + 0x2e);
    break;
  default:
    return local_88;
  }
  if ((*pfVar9 == 0.0) && (!NAN(*pfVar9))) {
    return local_88;
  }
  (**(code **)(*unaff_RDI + 0x640))();
  uVar13 = (**(code **)(*local_30 + 0x580))();
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x640))();
  fVar12 = (float)(**(code **)(*local_30 + 0x578))();
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  switch(unaff_ESI) {
  case 0:
    (**(code **)(*unaff_RDI + 0x7b8))();
    cVar8 = FUN_01d95200();
    if (cVar8 == '\0') {
      bVar10 = false;
    }
    else {
      (**(code **)(*unaff_RDI + 0x7b8))();
      FUN_01d97870();
      bVar10 = local_68 == unaff_RDI;
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    auVar5._4_4_ = fStack_94;
    auVar5._0_4_ = fStack_94 + DAT_02390d34;
    auVar5._8_4_ = fStack_8c;
    auVar5._12_4_ = fStack_8c;
    auVar15 = insertps(_DAT_023b1630,auVar5,0x10);
    local_88._4_4_ = fVar14 + _UNK_023b5de4;
    local_88._0_4_ = fVar11 + _DAT_023b5de0;
    if (bVar10) {
      auVar6._4_4_ = fStack_94;
      auVar6._0_4_ = fStack_94 + DAT_02390d34 + fVar12;
      auVar6._8_4_ = fStack_8c;
      auVar6._12_4_ = fStack_8c;
      insertps(auVar15,auVar6,0x10);
    }
    break;
  case 1:
    (**(code **)(*unaff_RDI + 0x7b8))();
    cVar8 = FUN_01d951e0();
    if (cVar8 == '\0') {
      bVar10 = false;
    }
    else {
      (**(code **)(*unaff_RDI + 0x7b8))();
      FUN_01d97870();
      bVar10 = local_68 == unaff_RDI;
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    auVar7._8_4_ = fStack_90;
    auVar7._0_8_ = param_2;
    auVar7._12_4_ = fStack_8c;
    auVar15 = blendps(auVar7,_DAT_023b1620,0xe);
    auVar4._4_4_ = fVar14;
    auVar4._0_4_ = fVar14 + DAT_02390d00;
    auVar4._8_4_ = extraout_XMM0_Dd;
    auVar4._12_4_ = extraout_XMM0_Dd;
    auVar16 = insertps(_local_88,auVar4,0x10);
    local_88 = auVar16._0_8_;
    goto joined_r0x01cf4551;
  case 2:
    (**(code **)(*unaff_RDI + 0x7b8))();
    cVar8 = FUN_01d95200();
    if (cVar8 == '\0') {
      bVar10 = false;
    }
    else {
      (**(code **)(*unaff_RDI + 0x7b8))();
      FUN_01d97870();
      bVar10 = local_68 == unaff_RDI;
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_88._4_4_ = fVar14 + fStack_94 + _UNK_023b5574;
    local_88._0_4_ = fVar11 + local_98 + _DAT_023b5570;
    auVar2._4_4_ = fStack_94;
    auVar2._0_4_ = fStack_94 + DAT_02390d34;
    auVar2._8_4_ = fStack_8c;
    auVar2._12_4_ = fStack_8c;
    auVar15 = insertps(_DAT_023b1630,auVar2,0x10);
    if (bVar10) {
      auVar3._4_4_ = fStack_94;
      auVar3._0_4_ = fStack_94 + DAT_02390d34 + fVar12;
      auVar3._8_4_ = fStack_8c;
      auVar3._12_4_ = fStack_8c;
      insertps(auVar15,auVar3,0x10);
    }
    break;
  case 3:
    (**(code **)(*unaff_RDI + 0x7b8))();
    cVar8 = FUN_01d951e0();
    if (cVar8 == '\0') {
      bVar10 = false;
    }
    else {
      (**(code **)(*unaff_RDI + 0x7b8))();
      FUN_01d97870();
      bVar10 = local_68 == unaff_RDI;
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    auVar16._8_4_ = fStack_90;
    auVar16._0_8_ = param_2;
    auVar16._12_4_ = fStack_8c;
    auVar15._4_4_ = fVar14 + fStack_94;
    auVar15._0_4_ = fVar11 + local_98;
    auVar15._8_4_ = extraout_XMM0_Dc + fStack_90;
    auVar15._12_4_ = extraout_XMM0_Dd + fStack_8c;
    auVar15 = blendps(_local_88,auVar15,2);
    local_88 = auVar15._0_8_;
    auVar15 = blendps(auVar16,_DAT_023b1620,0xe);
joined_r0x01cf4551:
    if (bVar10) {
      auVar1._4_4_ = (int)((ulonglong)uVar13 >> 0x20);
      auVar1._0_4_ = (float)uVar13 + local_98;
      auVar1._8_4_ = extraout_XMM0_Dc_00;
      auVar1._12_4_ = extraout_XMM0_Dd_00;
      blendps(auVar15,auVar1,1);
    }
  }
  return local_88;
}




// ============================================================
// @01cf4a00 — 849 bytes
// ============================================================

void FUN_01cf4a00(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint unaff_ESI;
  longlong *unaff_RDI;
  bool bVar4;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  if ((DAT_028b78a8 == (undefined8 *)0x0) || (DAT_028b78b1 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b78a8 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*DAT_02572370)();
      bVar4 = DAT_028b78a8 == (undefined8 *)0x0;
      DAT_028b78a8 = puVar3;
      if (((bVar4) || (FUN_00d50b20(), lVar2 = DAT_027ef060, DAT_028b78a8 != (undefined8 *)0x0)) &&
         (lVar2 = DAT_027ef060, DAT_028b78b0 == '\0')) {
        DAT_028b78b0 = '\x01';
        FUN_00e8cb90();
        lVar2 = DAT_027ef060;
      }
      DAT_027ef060 = lVar2;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      local_30 = '\0';
      local_38 = lVar2;
      FUN_00d21140();
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_027ef068;
      if (DAT_027ef068 != 0) {
        FUN_00d50b00();
      }
      local_38 = lVar2;
      local_30 = '\0';
      FUN_00d21140();
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_027ef070;
      if (DAT_027ef070 != 0) {
        FUN_00d50b00();
      }
      local_38 = lVar2;
      local_30 = '\0';
      FUN_00d21140();
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_027ef078;
      if (DAT_027ef078 != 0) {
        FUN_00d50b00();
      }
      local_38 = lVar2;
      local_30 = '\0';
      FUN_00d21140();
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      DAT_028b78b1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b78b1 = '\x01';
      FUN_00e8cb70();
    }
  }
  if (3 < unaff_ESI) {
    return;
  }
  switch((ulonglong)unaff_ESI) {
  case 0:
    iVar1 = *(int *)((longlong)unaff_RDI + 0x154);
    break;
  case 1:
    iVar1 = *(int *)((longlong)unaff_RDI + 0x15c);
    break;
  case 2:
    iVar1 = (int)unaff_RDI[0x2b];
    goto joined_r0x01cf4c69;
  case 3:
    iVar1 = (int)unaff_RDI[0x2c];
joined_r0x01cf4c69:
    if (iVar1 != 2) {
      return;
    }
    goto LAB_01cf4c6f;
  }
  if (iVar1 == 2) {
LAB_01cf4c6f:
    FUN_01cf4890();
    FUN_00d46dc0();
    local_48 = local_38;
    local_40 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_40 = '\x01';
    lVar2 = *(longlong *)(DAT_028b78a8[2] + (ulonglong)unaff_ESI * 8);
    local_50 = 0;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_50 = '\x01';
    local_58 = lVar2;
    (**(code **)(*unaff_RDI + 0x408))(&local_58,&local_48);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @01cf4f60 — 847 bytes
// ============================================================

void FUN_01cf4f60(undefined8 param_1,uint param_2)

{
  longlong *plVar1;
  char cVar2;
  float *pfVar3;
  longlong *unaff_RDI;
  longlong lVar4;
  undefined4 uVar5;
  float fVar6;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (param_2 < 4) {
    switch((ulonglong)param_2) {
    case 0:
      pfVar3 = (float *)((longlong)unaff_RDI + 0x164);
      break;
    case 1:
      pfVar3 = (float *)((longlong)unaff_RDI + 0x16c);
      break;
    case 2:
      pfVar3 = (float *)(unaff_RDI + 0x2d);
      break;
    case 3:
      pfVar3 = (float *)(unaff_RDI + 0x2e);
    }
    local_5c = *pfVar3;
    if ((local_5c != 0.0) || (NAN(local_5c))) {
      (**(code **)(*unaff_RDI + 0x7b8))();
      cVar2 = FUN_01d951e0();
      local_58 = 0;
      if (cVar2 != '\0') {
        (**(code **)(*unaff_RDI + 0x640))();
        local_58 = (**(code **)(*local_50 + 0x580))();
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0x7b8))();
      cVar2 = FUN_01d95200();
      local_54 = 0;
      if (cVar2 != '\0') {
        (**(code **)(*unaff_RDI + 0x640))();
        local_54 = (**(code **)(*local_50 + 0x578))();
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      uVar5 = (**(code **)(*unaff_RDI + 0x640))();
      plVar1 = local_50;
      local_80 = DAT_026e41f0;
      if (DAT_026e41f0 != 0) {
        uVar5 = FUN_00d50b00();
      }
      local_78 = '\x01';
      (**(code **)(*plVar1 + 0x3b0))(uVar5,&local_80);
      lVar4 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar4 == 0) {
        (**(code **)(*unaff_RDI + 0x640))();
        (**(code **)(*local_50 + 0x3a0))();
        if (local_40 != 0) {
          lVar4 = local_40;
          if (local_38 == '\0') {
            FUN_00d50b00();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38 = '\0';
          }
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_01d48370();
      local_68 = '\0';
      local_70 = lVar4;
      FUN_01d488d0();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d48b40(DAT_02390124);
      fVar6 = (float)FUN_01d48a00();
      FUN_01d489d0(local_5c * fVar6);
      FUN_01e3f820();
      if (param_2 < 4) {
                    /* WARNING: Could not recover jumptable at 0x01cf51d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_01cf5598 + *(int *)(&DAT_01cf5598 + (ulonglong)param_2 * 4)))
                  (&DAT_01cf5598 + *(int *)(&DAT_01cf5598 + (ulonglong)param_2 * 4));
        return;
      }
      FUN_01d48390();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}




// ============================================================
// @01cf6d20 — 745 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01cf6df8) */
/* WARNING: Removing unreachable block (ram,0x01cf6e01) */
/* WARNING: Removing unreachable block (ram,0x01cf6d76) */
/* WARNING: Removing unreachable block (ram,0x01cf6d7f) */
/* WARNING: Removing unreachable block (ram,0x01cf6e4d) */
/* WARNING: Removing unreachable block (ram,0x01cf6e56) */

void FUN_01cf6d20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong *unaff_RDI;
  longlong *plVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar12 [12];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  longlong *local_48;
  char local_40;
  
  fVar14 = (float)((ulonglong)param_2 >> 0x20);
  fVar16 = (float)param_2;
  if (unaff_RDI[0x27] == 0) {
    return;
  }
  (**(code **)(*unaff_RDI + 0x7b8))();
  if (local_40 == '\0') {
    if (local_48 == (longlong *)0x0) goto LAB_01cf6db0;
    FUN_00d50b00();
LAB_01cf6d84:
    FUN_01d97870();
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_48 == unaff_RDI) {
      FUN_01d97e80();
      if (local_48 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
        bVar5 = false;
      }
      else {
        bVar5 = true;
        plVar6 = local_48;
        if (local_40 == '\0') {
          FUN_00d50b00();
        }
      }
      FUN_01d97ec0();
      if (local_48 == (longlong *)0x0) {
        bVar4 = false;
        local_48 = (longlong *)0x0;
      }
      else {
        if (local_40 == '\0') {
          FUN_00d50b00();
        }
        bVar4 = true;
      }
      bVar3 = false;
      goto LAB_01cf6e63;
    }
    bVar3 = false;
  }
  else {
    if (local_48 != (longlong *)0x0) goto LAB_01cf6d84;
LAB_01cf6db0:
    bVar3 = true;
  }
  local_48 = (longlong *)0x0;
  bVar4 = false;
  bVar5 = false;
  plVar6 = (longlong *)0x0;
LAB_01cf6e63:
  FUN_01e3f820();
  fVar7 = fVar16;
  fVar13 = fVar14;
  (**(code **)(*unaff_RDI + 0x4d8))();
  if (plVar6 != (longlong *)0x0) {
    if ((fVar16 != 0.0) || (fVar15 = DAT_02390124, NAN(fVar16))) {
      fVar15 = fVar7 / fVar16;
    }
    fVar2 = DAT_02390124;
    if (fVar15 <= DAT_02390124) {
      fVar2 = fVar15;
    }
    FUN_01d91950();
    if (fVar2 < DAT_02390124) {
      fVar16 = fVar16 - fVar7;
      if ((fVar16 != 0.0) || (NAN(fVar16))) {
        if (unaff_RDI[0x27] == 0) {
          auVar8 = ZEXT816(0);
        }
        else {
          uVar1 = *(undefined8 *)(unaff_RDI[0x27] + 0x10c);
          auVar8._0_4_ = 0.0 - (float)uVar1;
          auVar8._4_4_ = 0.0 - (float)((ulonglong)uVar1 >> 0x20);
          auVar8._8_8_ = 0;
        }
        auVar9._4_12_ = auVar8._4_12_;
        auVar9._0_4_ = auVar8._0_4_ / fVar16;
        (**(code **)(*plVar6 + 0x928))(auVar9._0_8_);
      }
    }
  }
  if (local_48 != (longlong *)0x0) {
    fVar7 = (float)(~-(uint)(!NAN(fVar13) && !NAN(fVar13)) & (uint)DAT_02390124 |
                   (~-(uint)(fVar14 != 0.0) & (uint)DAT_02390124 |
                   (uint)(fVar13 / fVar14) & -(uint)(fVar14 != 0.0)) &
                   -(uint)(!NAN(fVar13) && !NAN(fVar13)));
    fVar16 = DAT_02390124;
    if (fVar7 <= DAT_02390124) {
      fVar16 = fVar7;
    }
    FUN_01d91950();
    if (fVar16 < DAT_02390124) {
      fVar14 = fVar14 - fVar13;
      if ((fVar14 != 0.0) || (NAN(fVar14))) {
        if (unaff_RDI[0x27] == 0) {
          auVar12 = ZEXT412(0);
        }
        else {
          auVar12._0_4_ = 0.0 - (float)((ulonglong)*(undefined8 *)(unaff_RDI[0x27] + 0x10c) >> 0x20)
          ;
          auVar12._4_8_ = 0;
        }
        auVar10._4_4_ = auVar12._0_4_;
        auVar10._0_4_ = auVar10._4_4_;
        auVar10._12_4_ = auVar12._8_4_;
        auVar10._8_4_ = auVar10._12_4_;
        auVar11._4_12_ = auVar10._4_12_;
        auVar11._0_4_ = auVar10._4_4_ / fVar14;
        (**(code **)(*local_48 + 0x928))(auVar11._0_8_);
      }
    }
  }
  if (!bVar3) {
    FUN_00d50b20();
  }
  if ((bVar4) && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar5) && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01cf3b20 — 708 bytes
// ============================================================

void FUN_01cf3b20(void)

{
  int iVar1;
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  float fVar2;
  
  switch(unaff_ESI) {
  case 0:
    iVar1 = *(int *)((longlong)unaff_RDI + 0x154);
    if (iVar1 == 2) {
      fVar2 = (float)FUN_01cf4890();
      if ((*(float *)((longlong)unaff_RDI + 0x164) != fVar2) ||
         (NAN(*(float *)((longlong)unaff_RDI + 0x164)) || NAN(fVar2))) {
        *(float *)((longlong)unaff_RDI + 0x164) = fVar2;
        goto LAB_01cf3dc1;
      }
    }
    else if (iVar1 == 1) {
      if ((*(float *)((longlong)unaff_RDI + 0x164) != DAT_02390124) ||
         (NAN(*(float *)((longlong)unaff_RDI + 0x164)) || NAN(DAT_02390124))) {
        *(undefined4 *)((longlong)unaff_RDI + 0x164) = 0x3f800000;
        goto LAB_01cf3dc1;
      }
    }
    else if ((iVar1 == 0) &&
            ((*(float *)((longlong)unaff_RDI + 0x164) != 0.0 ||
             (NAN(*(float *)((longlong)unaff_RDI + 0x164)))))) {
      *(undefined4 *)((longlong)unaff_RDI + 0x164) = 0;
LAB_01cf3dc1:
      FUN_01cf41d0();
                    /* WARNING: Could not recover jumptable at 0x01cf3ddd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_RDI + 0x618))();
      return;
    }
    break;
  case 1:
    iVar1 = *(int *)((longlong)unaff_RDI + 0x15c);
    if (iVar1 == 2) {
      fVar2 = (float)FUN_01cf4890();
      if ((*(float *)((longlong)unaff_RDI + 0x16c) != fVar2) ||
         (NAN(*(float *)((longlong)unaff_RDI + 0x16c)) || NAN(fVar2))) {
        *(float *)((longlong)unaff_RDI + 0x16c) = fVar2;
        goto LAB_01cf3dc1;
      }
    }
    else if (iVar1 == 1) {
      if ((*(float *)((longlong)unaff_RDI + 0x16c) != DAT_02390124) ||
         (NAN(*(float *)((longlong)unaff_RDI + 0x16c)) || NAN(DAT_02390124))) {
        *(undefined4 *)((longlong)unaff_RDI + 0x16c) = 0x3f800000;
        goto LAB_01cf3dc1;
      }
    }
    else if ((iVar1 == 0) &&
            ((*(float *)((longlong)unaff_RDI + 0x16c) != 0.0 ||
             (NAN(*(float *)((longlong)unaff_RDI + 0x16c)))))) {
      *(undefined4 *)((longlong)unaff_RDI + 0x16c) = 0;
      goto LAB_01cf3dc1;
    }
    break;
  case 2:
    iVar1 = (int)unaff_RDI[0x2b];
    if (iVar1 == 2) {
      fVar2 = (float)FUN_01cf4890();
      if ((*(float *)(unaff_RDI + 0x2d) != fVar2) ||
         (NAN(*(float *)(unaff_RDI + 0x2d)) || NAN(fVar2))) {
        *(float *)(unaff_RDI + 0x2d) = fVar2;
        goto LAB_01cf3dc1;
      }
    }
    else if (iVar1 == 1) {
      if ((*(float *)(unaff_RDI + 0x2d) != DAT_02390124) ||
         (NAN(*(float *)(unaff_RDI + 0x2d)) || NAN(DAT_02390124))) {
        *(undefined4 *)(unaff_RDI + 0x2d) = 0x3f800000;
        goto LAB_01cf3dc1;
      }
    }
    else if ((iVar1 == 0) &&
            ((*(float *)(unaff_RDI + 0x2d) != 0.0 || (NAN(*(float *)(unaff_RDI + 0x2d)))))) {
      *(undefined4 *)(unaff_RDI + 0x2d) = 0;
      goto LAB_01cf3dc1;
    }
    break;
  case 3:
    iVar1 = (int)unaff_RDI[0x2c];
    if (iVar1 == 2) {
      fVar2 = (float)FUN_01cf4890();
      if ((*(float *)(unaff_RDI + 0x2e) != fVar2) ||
         (NAN(*(float *)(unaff_RDI + 0x2e)) || NAN(fVar2))) {
        *(float *)(unaff_RDI + 0x2e) = fVar2;
        goto LAB_01cf3dc1;
      }
    }
    else if (iVar1 == 1) {
      if ((*(float *)(unaff_RDI + 0x2e) != DAT_02390124) ||
         (NAN(*(float *)(unaff_RDI + 0x2e)) || NAN(DAT_02390124))) {
        *(undefined4 *)(unaff_RDI + 0x2e) = 0x3f800000;
        goto LAB_01cf3dc1;
      }
    }
    else if ((iVar1 == 0) &&
            ((*(float *)(unaff_RDI + 0x2e) != 0.0 || (NAN(*(float *)(unaff_RDI + 0x2e)))))) {
      *(undefined4 *)(unaff_RDI + 0x2e) = 0;
      goto LAB_01cf3dc1;
    }
  }
  return;
}




// ============================================================
// @01cf7910 — 705 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01cf7ac6) */
/* WARNING: Removing unreachable block (ram,0x01cf7acf) */
/* WARNING: Removing unreachable block (ram,0x01cf7a82) */
/* WARNING: Removing unreachable block (ram,0x01cf7a8b) */

void FUN_01cf7910(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  longlong *local_90;
  char local_88;
  longlong local_40;
  char local_38;
  
  fVar11 = (float)((ulonglong)param_2 >> 0x20);
  if (unaff_RDI[0x27] == 0) {
LAB_01cf79e2:
    if (*(char *)((longlong)unaff_RDI + 0x152) == '\0') goto LAB_01cf7a11;
    lVar7 = unaff_RDI[0x29];
    if (lVar7 == 0) {
      (**(code **)(*unaff_RDI + 0x640))();
      (**(code **)(*local_90 + 0x4e8))();
      if (local_40 == 0) {
        lVar7 = 0;
        bVar4 = false;
      }
      else {
        lVar7 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
          bVar4 = true;
        }
        else {
          local_38 = '\0';
          bVar4 = true;
        }
      }
      if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) goto LAB_01cf7aac;
      iVar2 = *(int *)((longlong)unaff_RDI + 0x154);
      goto joined_r0x01cf7b20;
    }
    FUN_00d50b00();
    bVar4 = true;
LAB_01cf7aac:
    FUN_01d488d0();
    (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))(param_1,(float)param_2);
    iVar2 = *(int *)((longlong)unaff_RDI + 0x154);
  }
  else {
    fVar9 = (float)param_2;
    FUN_00d50b00();
    plVar3 = (longlong *)unaff_RDI[0x27];
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    cVar5 = (**(code **)(*plVar3 + 0x628))();
    if (cVar5 == '\0') {
      bVar4 = false;
    }
    else {
      lVar7 = unaff_RDI[0x27];
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      FUN_01e436c0();
      fVar10 = fVar9;
      fVar12 = fVar11;
      FUN_01e3f820();
      bVar4 = fVar11 == fVar12 && fVar9 == fVar10;
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
    FUN_00d50b20();
    if (!bVar4) goto LAB_01cf79e2;
LAB_01cf7a11:
    bVar4 = false;
    iVar2 = *(int *)((longlong)unaff_RDI + 0x154);
joined_r0x01cf7b20:
    lVar7 = 0;
  }
  if ((((iVar2 != 0) || ((int)unaff_RDI[0x2b] != 0)) || (*(int *)((longlong)unaff_RDI + 0x15c) != 0)
      ) || ((int)unaff_RDI[0x2c] != 0)) {
    FUN_01cf3930();
    if (local_38 == '\0') {
      if (local_40 == 0) goto LAB_01cf7bad;
      FUN_00d50b00();
    }
    else if (local_40 == 0) goto LAB_01cf7bad;
    lVar8 = 0;
    while( true ) {
      iVar2 = *(int *)(local_40 + 0x18);
      iVar6 = iVar2 + 3;
      if (-1 < iVar2) {
        iVar6 = iVar2;
      }
      if (iVar6 >> 2 <= (int)lVar8) break;
      lVar1 = lVar8 * 4;
      lVar8 = lVar8 + 1;
      FUN_01cf4f60(iVar6 >> 2,*(undefined4 *)(*(longlong *)(local_40 + 0x10) + lVar1),param_3,
                   param_4,0);
    }
    FUN_00d50b20();
  }
LAB_01cf7bad:
  if ((bVar4) && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01cf7150 — 622 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01cf71cc) */
/* WARNING: Removing unreachable block (ram,0x01cf71d5) */
/* WARNING: Removing unreachable block (ram,0x01cf7198) */
/* WARNING: Removing unreachable block (ram,0x01cf71a1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cf7150(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  float fVar3;
  undefined4 uVar4;
  undefined4 extraout_XMM0_Dc;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 in_XMM1_Qb;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float local_98;
  float fStack_94;
  float fStack_8c;
  longlong *local_88;
  char local_80;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 local_58 [16];
  longlong *local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0x7b8))();
  if (local_40 != (longlong *)0x0) {
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x828))();
    if (unaff_RDI[0x27] == 0) {
      local_58._0_8_ = 0;
    }
    else {
      uVar1 = *(undefined8 *)(unaff_RDI[0x27] + 0x10c);
      param_2 = CONCAT44(0.0 - (float)((ulonglong)uVar1 >> 0x20),0.0 - (float)uVar1);
      in_XMM1_Qb = 0;
      local_58._0_8_ = param_2;
    }
    local_58._8_8_ = 0;
    FUN_01e3f820();
    local_68 = (float)param_2;
    fStack_64 = (float)(param_2 >> 0x20);
    fStack_60 = (float)in_XMM1_Qb;
    fStack_5c = (float)((ulonglong)in_XMM1_Qb >> 0x20);
    (**(code **)(*unaff_RDI + 0x4d8))();
    FUN_01d97e80();
    plVar2 = (longlong *)*unaff_RSI;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 == local_40) {
      local_98 = (float)param_2;
      if (local_68 - local_98 <= 0.0) {
        local_58 = blendps(local_58,ZEXT816(0),0xd);
      }
      else {
        fVar3 = (float)(**(code **)(*(longlong *)*unaff_RSI + 0x930))();
        auVar8._0_4_ = (float)(int)((local_68 - local_98) * fVar3);
        auVar8._4_4_ = (float)(int)fStack_64;
        auVar8._8_4_ = (float)(int)fStack_60;
        auVar8._12_4_ = (float)(int)fStack_5c;
        local_58 = blendps(local_58,auVar8,1);
      }
    }
    FUN_01d97ec0();
    plVar2 = (longlong *)*unaff_RSI;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 == local_40) {
      fStack_94 = (float)(param_2 >> 0x20);
      fStack_8c = (float)((ulonglong)in_XMM1_Qb >> 0x20);
      fStack_64 = fStack_64 - fStack_94;
      if (fStack_64 <= 0.0) {
        local_58 = blendps(local_58,ZEXT816(0),2);
      }
      else {
        fVar3 = (float)(**(code **)(*(longlong *)*unaff_RSI + 0x930))();
        auVar5._0_4_ = (float)(int)(fStack_64 * fVar3);
        auVar5._4_4_ = (float)(int)fStack_64;
        auVar5._8_4_ = (float)(int)(fStack_5c - fStack_8c);
        auVar5._12_4_ = (float)(int)(fStack_5c - fStack_8c);
        local_58 = insertps(local_58,auVar5,0x10);
      }
    }
    FUN_01e42030();
    (**(code **)(*local_88 + 0x9a0))();
    uVar4 = (**(code **)(*local_40 + 0x448))();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    auVar7._4_4_ = uVar4;
    auVar7._0_4_ = uVar4;
    auVar7._8_4_ = extraout_XMM0_Dc;
    auVar7._12_4_ = extraout_XMM0_Dc;
    auVar8 = divps(local_58,auVar7);
    auVar6._0_4_ = (float)(_DAT_023945e0 & (uint)auVar8._0_4_ | _DAT_023945f0) + auVar8._0_4_;
    auVar6._4_4_ = (float)(_UNK_023945e4 & (uint)auVar8._4_4_ | _UNK_023945f4) + auVar8._4_4_;
    auVar6._8_4_ = (float)(_UNK_023945e8 & (uint)auVar8._8_4_ | _UNK_023945f8) + auVar8._8_4_;
    auVar6._12_4_ = (float)(_UNK_023945ec & (uint)auVar8._12_4_ | _UNK_023945fc) + auVar8._12_4_;
    roundps(auVar6,auVar6,0xb);
    FUN_01cf5ff0();
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01cf85d0 — 618 bytes
// ============================================================

void FUN_01cf85d0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  char cVar3;
  longlong *plVar4;
  longlong *unaff_RDI;
  undefined8 in_XMM0_Qb;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  ulonglong uVar8;
  float fVar9;
  undefined8 in_XMM1_Qb;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  float fVar13;
  undefined1 auVar12 [16];
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  uint uStack_4c;
  undefined1 local_28 [16];
  
  if (unaff_RDI[0x27] == 0) {
    local_28._0_8_ = 0;
  }
  else {
    uVar10 = *(undefined8 *)(unaff_RDI[0x27] + 0x10c);
    param_2 = CONCAT44(0.0 - (float)((ulonglong)uVar10 >> 0x20),0.0 - (float)uVar10);
    in_XMM1_Qb = 0;
    local_28._0_8_ = param_2;
  }
  local_28._8_8_ = 0;
  FUN_01e3f820();
  uVar8 = param_2;
  uVar10 = in_XMM1_Qb;
  (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x4d8))();
  cVar3 = FUN_00d05410();
  local_68 = (float)param_2;
  fStack_64 = (float)(param_2 >> 0x20);
  fStack_60 = (float)in_XMM1_Qb;
  fStack_5c = (float)((ulonglong)in_XMM1_Qb >> 0x20);
  fVar13 = 0.0;
  auVar5 = ZEXT816(0);
  if (cVar3 == '\0') {
    local_58 = (float)param_1;
    fStack_54 = (float)((ulonglong)param_1 >> 0x20);
    uStack_4c = (uint)((ulonglong)in_XMM0_Qb >> 0x20);
    fVar13 = (float)(-(uint)(local_58 < 0.0) & (uint)local_58 |
                    ~-(uint)(local_58 < 0.0) &
                    -(uint)(local_68 < local_58) & (uint)(local_58 - local_68));
    auVar11._0_4_ =
         ~-(uint)(fStack_54 < 0.0) & -(uint)(fStack_64 < fStack_54) & (uint)(fStack_54 - fStack_64);
    auVar11._4_4_ = ~(uint)fStack_54 & (uint)fStack_64 & (uint)fStack_54;
    auVar11._8_4_ = ~uStack_4c & (uint)fStack_5c & uStack_4c;
    auVar11._12_4_ = ~uStack_4c & (uint)fStack_5c & uStack_4c;
    auVar5._0_4_ = -(uint)(fStack_54 < 0.0) & (uint)fStack_54;
    auVar5._4_4_ = fStack_54;
    auVar5._8_4_ = uStack_4c;
    auVar5._12_4_ = uStack_4c;
    auVar5 = auVar5 | auVar11;
  }
  local_88 = (float)uVar8;
  fStack_84 = (float)(uVar8 >> 0x20);
  fStack_80 = (float)uVar10;
  fStack_7c = (float)((ulonglong)uVar10 >> 0x20);
  local_88 = local_88 - local_68;
  fStack_84 = fStack_84 - fStack_64;
  if (local_88 < (float)local_28._0_8_ + fVar13) {
    auVar2._4_4_ = fStack_84;
    auVar2._0_4_ = local_88;
    auVar2._8_4_ = fStack_80 - fStack_60;
    auVar2._12_4_ = fStack_7c - fStack_5c;
    auVar12 = blendps(local_28,auVar2,0xd);
    fVar13 = auVar12._0_4_;
  }
  else {
    auVar12._0_4_ = (float)local_28._0_8_ + fVar13;
    auVar12._4_4_ = (int)((ulonglong)local_28._0_8_ >> 0x20);
    auVar12._8_8_ = 0;
    fVar13 = auVar12._0_4_;
  }
  if (fVar13 < 0.0) {
    auVar12 = blendps(auVar12,ZEXT816(0),1);
  }
  auVar6._4_12_ = auVar5._4_12_;
  auVar6._0_4_ = auVar5._0_4_ + auVar12._4_4_;
  if (fStack_84 < auVar6._0_4_) {
    auVar1._4_4_ = fStack_84;
    auVar1._0_4_ = local_88;
    auVar1._8_4_ = fStack_80 - fStack_60;
    auVar1._12_4_ = fStack_7c - fStack_5c;
    auVar5 = blendps(auVar12,auVar1,2);
    uVar10 = auVar5._0_8_;
    fVar13 = auVar5._4_4_;
  }
  else {
    auVar5 = insertps(auVar12,auVar6,0x10);
    uVar10 = auVar5._0_8_;
    fVar13 = auVar5._4_4_;
  }
  if (fVar13 < 0.0) {
    auVar5 = blendps(auVar5,ZEXT816(0),2);
    uVar10 = auVar5._0_8_;
  }
  if (cVar3 != '\0') {
    return;
  }
  plVar4 = (longlong *)unaff_RDI[0x27];
  fVar13 = (float)uVar10;
  if (plVar4 == (longlong *)0x0) {
joined_r0x01cf87a2:
    if (fVar13 == 0.0) {
      fVar9 = 0.0;
      plVar4 = (longlong *)0x0;
      if (!NAN(fVar13)) goto LAB_01cf87b8;
    }
  }
  else {
    FUN_00d50b00();
    (**(code **)(*plVar4 + 0x830))();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    plVar4 = (longlong *)unaff_RDI[0x27];
    if (plVar4 == (longlong *)0x0) goto joined_r0x01cf87a2;
    fVar7 = 0.0 - (float)*(undefined8 *)((longlong)plVar4 + 0x10c);
    fVar9 = 0.0 - (float)((ulonglong)*(undefined8 *)((longlong)plVar4 + 0x10c) >> 0x20);
    if ((fVar13 == fVar7) && (!NAN(fVar13) && !NAN(fVar7))) {
LAB_01cf87b8:
      if (fVar9 == (float)((ulonglong)uVar10 >> 0x20)) goto joined_r0x01cf87f7;
    }
  }
  FUN_01cf5d20();
  FUN_01cf5a00();
  (**(code **)(*unaff_RDI + 0x620))();
  plVar4 = (longlong *)unaff_RDI[0x27];
joined_r0x01cf87f7:
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b00();
    (**(code **)(*plVar4 + 0x838))();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @001b7fb0 — 532 bytes
// str: ""GNClipView""
// str: ""GNClipViewBorderType""
// str: ""_rightBorderType""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_001b7fb0(void)

{
  int iVar1;
  
  if (DAT_026e9aa0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e9a90 = 0x100000000;
      _DAT_026e9a98 = 2;
      DAT_026e9a9c = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e9ad8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e9aa8 = "GNClipViewBorderType";
      _DAT_026e9ab0 = 3;
      DAT_026e9ab4 = DAT_026e9a9c;
      _DAT_026e9ab8 = &DAT_026e9a90;
      _DAT_026e9ac0 = &DAT_026e9a70;
      _DAT_026e9ac8 = 0;
      uRam00000000026e9ad0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_026e9b20 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026fde20 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026e9778 = FUN_0006d940();
          _DAT_026e9760 = "GNClipView";
          _DAT_026e9768 = 0x178;
          _DAT_026e9770 = FUN_001b6420;
          _DAT_026e9780 = 0;
          uRam00000000026e9788 = 0;
          _DAT_026e9790 = 0;
          uRam00000000026e9798 = 0;
          _DAT_026e97a0 = 0;
          uRam00000000026e97a8 = 0;
          _DAT_026e97b0 = 0;
          uRam00000000026e97b8 = 0;
          _DAT_026e97c0 = 0;
          uRam00000000026e97c8 = 0;
          _DAT_026e97d0 = 0;
          uRam00000000026e97d8 = 0;
          _DAT_026e97e0 = 0;
          uRam00000000026e97e8 = 0;
          _DAT_026e97f0 = 0;
          uRam00000000026e97f8 = 0;
          _DAT_026e9800 = 0;
          uRam00000000026e9808 = 0;
          _DAT_026e9810 = 0;
          uRam00000000026e9818 = 0;
          _DAT_026e9820 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_026e9ae0 = "_rightBorderType";
      _DAT_026e9ae8 = &DAT_026e9760;
      _DAT_026e9af0 = 0;
      _DAT_026e9af8 = 0x6500;
      _DAT_026e9b00 = "GNClipViewBorderType";
      _DAT_026e9b08 = &DAT_026e9aa8;
      _DAT_026e9b10 = 0;
      uRam00000000026e9b18 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_026e9ae0;
}




// ============================================================
// @001b8430 — 532 bytes
// str: ""GNClipView""
// str: ""GNClipViewBorderType""
// str: ""_bottomBorderType""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_001b8430(void)

{
  int iVar1;
  
  if (DAT_026e9aa0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e9a90 = 0x100000000;
      _DAT_026e9a98 = 2;
      DAT_026e9a9c = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e9ad8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e9aa8 = "GNClipViewBorderType";
      _DAT_026e9ab0 = 3;
      DAT_026e9ab4 = DAT_026e9a9c;
      _DAT_026e9ab8 = &DAT_026e9a90;
      _DAT_026e9ac0 = &DAT_026e9a70;
      _DAT_026e9ac8 = 0;
      uRam00000000026e9ad0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_026e9bb0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026fde20 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026e9778 = FUN_0006d940();
          _DAT_026e9760 = "GNClipView";
          _DAT_026e9768 = 0x178;
          _DAT_026e9770 = FUN_001b6420;
          _DAT_026e9780 = 0;
          uRam00000000026e9788 = 0;
          _DAT_026e9790 = 0;
          uRam00000000026e9798 = 0;
          _DAT_026e97a0 = 0;
          uRam00000000026e97a8 = 0;
          _DAT_026e97b0 = 0;
          uRam00000000026e97b8 = 0;
          _DAT_026e97c0 = 0;
          uRam00000000026e97c8 = 0;
          _DAT_026e97d0 = 0;
          uRam00000000026e97d8 = 0;
          _DAT_026e97e0 = 0;
          uRam00000000026e97e8 = 0;
          _DAT_026e97f0 = 0;
          uRam00000000026e97f8 = 0;
          _DAT_026e9800 = 0;
          uRam00000000026e9808 = 0;
          _DAT_026e9810 = 0;
          uRam00000000026e9818 = 0;
          _DAT_026e9820 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_026e9b70 = "_bottomBorderType";
      _DAT_026e9b78 = &DAT_026e9760;
      _DAT_026e9b80 = 0;
      _DAT_026e9b88 = 0x6500;
      _DAT_026e9b90 = "GNClipViewBorderType";
      _DAT_026e9b98 = &DAT_026e9aa8;
      _DAT_026e9ba0 = 0;
      uRam00000000026e9ba8 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_026e9b70;
}




// ============================================================
// @001b7d70 — 532 bytes
// str: ""GNClipView""
// str: ""GNClipViewBorderType""
// str: ""_leftBorderType""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_001b7d70(void)

{
  int iVar1;
  
  if (DAT_026e9aa0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e9a90 = 0x100000000;
      _DAT_026e9a98 = 2;
      DAT_026e9a9c = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e9ad8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e9aa8 = "GNClipViewBorderType";
      _DAT_026e9ab0 = 3;
      DAT_026e9ab4 = DAT_026e9a9c;
      _DAT_026e9ab8 = &DAT_026e9a90;
      _DAT_026e9ac0 = &DAT_026e9a70;
      _DAT_026e9ac8 = 0;
      uRam00000000026e9ad0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_026e9a68 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026fde20 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026e9778 = FUN_0006d940();
          _DAT_026e9760 = "GNClipView";
          _DAT_026e9768 = 0x178;
          _DAT_026e9770 = FUN_001b6420;
          _DAT_026e9780 = 0;
          uRam00000000026e9788 = 0;
          _DAT_026e9790 = 0;
          uRam00000000026e9798 = 0;
          _DAT_026e97a0 = 0;
          uRam00000000026e97a8 = 0;
          _DAT_026e97b0 = 0;
          uRam00000000026e97b8 = 0;
          _DAT_026e97c0 = 0;
          uRam00000000026e97c8 = 0;
          _DAT_026e97d0 = 0;
          uRam00000000026e97d8 = 0;
          _DAT_026e97e0 = 0;
          uRam00000000026e97e8 = 0;
          _DAT_026e97f0 = 0;
          uRam00000000026e97f8 = 0;
          _DAT_026e9800 = 0;
          uRam00000000026e9808 = 0;
          _DAT_026e9810 = 0;
          uRam00000000026e9818 = 0;
          _DAT_026e9820 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_026e9a28 = "_leftBorderType";
      _DAT_026e9a30 = &DAT_026e9760;
      _DAT_026e9a38 = 0;
      _DAT_026e9a40 = 0x6500;
      _DAT_026e9a48 = "GNClipViewBorderType";
      _DAT_026e9a50 = &DAT_026e9aa8;
      _DAT_026e9a58 = 0;
      uRam00000000026e9a60 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_026e9a28;
}




// ============================================================
// @001b81f0 — 532 bytes
// str: ""GNClipView""
// str: ""GNClipViewBorderType""
// str: ""_topBorderType""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_001b81f0(void)

{
  int iVar1;
  
  if (DAT_026e9aa0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e9a90 = 0x100000000;
      _DAT_026e9a98 = 2;
      DAT_026e9a9c = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e9ad8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e9aa8 = "GNClipViewBorderType";
      _DAT_026e9ab0 = 3;
      DAT_026e9ab4 = DAT_026e9a9c;
      _DAT_026e9ab8 = &DAT_026e9a90;
      _DAT_026e9ac0 = &DAT_026e9a70;
      _DAT_026e9ac8 = 0;
      uRam00000000026e9ad0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_026e9b68 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026fde20 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026e9778 = FUN_0006d940();
          _DAT_026e9760 = "GNClipView";
          _DAT_026e9768 = 0x178;
          _DAT_026e9770 = FUN_001b6420;
          _DAT_026e9780 = 0;
          uRam00000000026e9788 = 0;
          _DAT_026e9790 = 0;
          uRam00000000026e9798 = 0;
          _DAT_026e97a0 = 0;
          uRam00000000026e97a8 = 0;
          _DAT_026e97b0 = 0;
          uRam00000000026e97b8 = 0;
          _DAT_026e97c0 = 0;
          uRam00000000026e97c8 = 0;
          _DAT_026e97d0 = 0;
          uRam00000000026e97d8 = 0;
          _DAT_026e97e0 = 0;
          uRam00000000026e97e8 = 0;
          _DAT_026e97f0 = 0;
          uRam00000000026e97f8 = 0;
          _DAT_026e9800 = 0;
          uRam00000000026e9808 = 0;
          _DAT_026e9810 = 0;
          uRam00000000026e9818 = 0;
          _DAT_026e9820 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_026e9b28 = "_topBorderType";
      _DAT_026e9b30 = &DAT_026e9760;
      _DAT_026e9b38 = 0;
      _DAT_026e9b40 = 0x6500;
      _DAT_026e9b48 = "GNClipViewBorderType";
      _DAT_026e9b50 = &DAT_026e9aa8;
      _DAT_026e9b58 = 0;
      uRam00000000026e9b60 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_026e9b28;
}




// ============================================================
// @0017eec0 — 504 bytes
// str: ""GNClipView""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0017efe1) */
/* WARNING: Removing unreachable block (ram,0x0017efef) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0017eec0(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_1d8;
  longlong local_1c8;
  
  if ((DAT_026fde20 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_026e9778 = FUN_0006d940();
    _DAT_026e9760 = "GNClipView";
    _DAT_026e9768 = 0x178;
    _DAT_026e9770 = FUN_001b6420;
    _DAT_026e9780 = 0;
    uRam00000000026e9788 = 0;
    _DAT_026e9790 = 0;
    uRam00000000026e9798 = 0;
    _DAT_026e97a0 = 0;
    uRam00000000026e97a8 = 0;
    _DAT_026e97b0 = 0;
    uRam00000000026e97b8 = 0;
    _DAT_026e97c0 = 0;
    uRam00000000026e97c8 = 0;
    _DAT_026e97d0 = 0;
    uRam00000000026e97d8 = 0;
    _DAT_026e97e0 = 0;
    uRam00000000026e97e8 = 0;
    _DAT_026e97f0 = 0;
    uRam00000000026e97f8 = 0;
    _DAT_026e9800 = 0;
    uRam00000000026e9808 = 0;
    _DAT_026e9810 = 0;
    _uRam00000000026e9818 = 0;
    _DAT_026e9820 = 0;
    ___cxa_guard_release();
  }
  if (DAT_026e981b == '\0') {
    FUN_000a31d0();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_001b6490();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_01cf2570();
    FUN_00e87920(uVar2,0);
    if (local_1c8 != 0) {
      FUN_00d50b20();
    }
    if (local_1d8 != 0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
    FUN_0006d770();
  }
  return;
}



