// Reconstructed implementation of GNLabel
// From MikeCore binary — reverse-engineered pseudocode

#include "GNLabel.h"

// ============================================================
// @005e25c0 — 1214 bytes
// str: ""bool""
// str: ""float""
// str: ""GNLabel""
// str: ""GNButton""
// str: ""GNSlider""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005e25c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_002730b0();
  *unaff_RDI = &DAT_0250ead8;
  unaff_RDI[0x11] = 0;
  lVar2 = FUN_005e23e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e2ca0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSlider");
  }
  unaff_RDI[0x12] = 0;
  lVar2 = FUN_005e23e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e2d90();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSlider");
  }
  unaff_RDI[0x13] = 0;
  lVar2 = FUN_005e23e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e2e80();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNLabel");
  }
  unaff_RDI[0x14] = 0;
  lVar2 = FUN_005e23e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e2f70();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNLabel");
  }
  puVar4 = unaff_RDI + 0x15;
  unaff_RDI[0x15] = 0;
  lVar2 = FUN_005e23e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e3060();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSwitchButton",param_3,param_4,puVar4);
  }
  *(undefined4 *)(unaff_RDI + 0x16) = 0;
  lVar2 = FUN_005e23e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0271e2b8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0271e280 = FUN_005e23e0();
        _DAT_0271e278 = "_editedCenterFloatValue";
        _DAT_0271e288 = 0;
        _DAT_0271e290 = 0x6600;
        _DAT_0271e298 = "float";
        _DAT_0271e2a0 = 0;
        uRam000000000271e2a8 = 0;
        _DAT_0271e2b0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xb4) = 0;
  lVar2 = FUN_005e23e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0271e300 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0271e2c8 = FUN_005e23e0();
        _DAT_0271e2c0 = "_editedDriftFloatValue";
        _DAT_0271e2d0 = 0;
        _DAT_0271e2d8 = 0x6600;
        _DAT_0271e2e0 = "float";
        _DAT_0271e2e8 = 0;
        uRam000000000271e2f0 = 0;
        _DAT_0271e2f8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x17] = 0;
  lVar2 = FUN_005e23e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e3150();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNButton");
  }
  unaff_RDI[0x18] = 0;
  lVar2 = FUN_005e23e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e3240();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNButton");
  }
  *(undefined1 *)(unaff_RDI + 0x19) = 0;
  lVar2 = FUN_005e23e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0271e3d8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0271e3a0 = FUN_005e23e0();
        _DAT_0271e398 = "_snapToTonality";
        _DAT_0271e3a8 = 0;
        _DAT_0271e3b0 = 0x6200;
        _DAT_0271e3b8 = "bool";
        _DAT_0271e3c0 = 0;
        uRam000000000271e3c8 = 0;
        _DAT_0271e3d0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @001e6fd0 — 1176 bytes
// str: ""bool""
// str: ""float""
// str: ""_progress""
// str: ""GNLabel""
// str: ""GNButton""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e6fd0(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_0005aa20();
  *unaff_RDI = &DAT_026879b0;
  unaff_RDI[0xe] = 0;
  lVar2 = FUN_001e6c80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001e7570();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNLabel");
  }
  unaff_RDI[0xf] = 0;
  lVar2 = FUN_001e6c80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001e7660();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNProgressBar");
  }
  unaff_RDI[0x10] = 0;
  lVar2 = FUN_001e6c80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001e7750();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNButton");
  }
  unaff_RDI[0x11] = 0;
  lVar2 = FUN_001e6c80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f06b8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f0680 = FUN_001e6c80();
        _DAT_026f0678 = "_delay";
        _DAT_026f0688 = 0;
        _DAT_026f0690 = 0x6401;
        _DAT_026f0698 = "GNTimeInterval";
        _DAT_026f06a0 = 0;
        uRam00000000026f06a8 = 0;
        _DAT_026f06b0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x12) = 0;
  lVar2 = FUN_001e6c80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f0700 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f06c8 = FUN_001e6c80();
        _DAT_026f06c0 = "_progress";
        _DAT_026f06d0 = 0;
        _DAT_026f06d8 = 0x6601;
        _DAT_026f06e0 = "float";
        _DAT_026f06e8 = 0;
        uRam00000000026f06f0 = 0;
        _DAT_026f06f8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x94) = 0;
  lVar2 = FUN_001e6c80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f0748 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f0710 = FUN_001e6c80();
        _DAT_026f0708 = "_cancelEnabled";
        _DAT_026f0718 = 0;
        _DAT_026f0720 = 0x6200;
        _DAT_026f0728 = "bool";
        _DAT_026f0730 = 0;
        uRam00000000026f0738 = 0;
        _DAT_026f0740 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x95) = 0;
  lVar2 = FUN_001e6c80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f0790 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f0758 = FUN_001e6c80();
        _DAT_026f0750 = "_shouldStop";
        _DAT_026f0760 = 0;
        _DAT_026f0768 = 0x6201;
        _DAT_026f0770 = "bool";
        _DAT_026f0778 = 0;
        uRam00000000026f0780 = 0;
        _DAT_026f0788 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x96) = 0;
  lVar2 = FUN_001e6c80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f07d8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f07a0 = FUN_001e6c80();
        _DAT_026f0798 = "_closeAfterDelayIsActivated";
        _DAT_026f07a8 = 0;
        _DAT_026f07b0 = 0x6201;
        _DAT_026f07b8 = "bool";
        _DAT_026f07c0 = 0;
        uRam00000000026f07c8 = 0;
        _DAT_026f07d0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}



