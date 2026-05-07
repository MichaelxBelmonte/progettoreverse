// Reconstructed implementation of GNSlider
// From MikeCore binary — reverse-engineered pseudocode

#include "GNSlider.h"

// ============================================================
// @00581680 — 3815 bytes
// str: ""bool""
// str: ""float""
// str: ""GNSlider""
// str: ""GNPopUpButton""
// str: ""GNSwitchButton""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00581680(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_00582b10();
  *unaff_RDI = &DAT_024d1760;
  unaff_RDI[2] = &DAT_024d2128;
  *(undefined4 *)(unaff_RDI + 0x34) = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027117f8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027117c0 = FUN_00152600();
        _DAT_027117b8 = "_iCent";
        _DAT_027117c8 = 0;
        _DAT_027117d0 = 0x6900;
        _DAT_027117d8 = "GNInt";
        _DAT_027117e0 = 0;
        uRam00000000027117e8 = 0;
        _DAT_027117f0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x35] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02711840 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02711808 = FUN_00152600();
        _DAT_02711800 = "_currentPos";
        _DAT_02711810 = 0;
        _DAT_02711818 = 0x6400;
        _DAT_02711820 = "double";
        _DAT_02711828 = 0;
        uRam0000000002711830 = 0;
        _DAT_02711838 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x36] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02711888 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02711850 = FUN_00152600();
        _DAT_02711848 = "_currentCent";
        _DAT_02711858 = 0;
        _DAT_02711860 = 0x6400;
        _DAT_02711868 = "double";
        _DAT_02711870 = 0;
        uRam0000000002711878 = 0;
        _DAT_02711880 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x37) = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027118d0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02711898 = FUN_00152600();
        _DAT_02711890 = "_midiNoteNumber";
        _DAT_027118a0 = 0;
        _DAT_027118a8 = 0x6900;
        _DAT_027118b0 = "GNInt";
        _DAT_027118b8 = 0;
        uRam00000000027118c0 = 0;
        _DAT_027118c8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x38] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005853b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUPosValue");
  }
  *(undefined1 *)(unaff_RDI + 0x39) = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02711960 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02711928 = FUN_00152600();
        _DAT_02711920 = "_newNoteCoordinatesInitiated";
        _DAT_02711930 = 0;
        _DAT_02711938 = 0x6200;
        _DAT_02711940 = "bool";
        _DAT_02711948 = 0;
        uRam0000000002711950 = 0;
        _DAT_02711958 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x1cc) = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027119a8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02711970 = FUN_00152600();
        _DAT_02711968 = "_pixPerPeriod";
        _DAT_02711978 = 0;
        _DAT_02711980 = 0x6600;
        _DAT_02711988 = "float";
        _DAT_02711990 = 0;
        uRam0000000002711998 = 0;
        _DAT_027119a0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x3a) = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027119f0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027119b8 = FUN_00152600();
        _DAT_027119b0 = "_tempoViewY0";
        _DAT_027119c0 = 0;
        _DAT_027119c8 = 0x6600;
        _DAT_027119d0 = "float";
        _DAT_027119d8 = 0;
        uRam00000000027119e0 = 0;
        _DAT_027119e8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x1d4) = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02711a38 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02711a00 = FUN_00152600();
        _DAT_027119f8 = "_tempoViewHeight";
        _DAT_02711a08 = 0;
        _DAT_02711a10 = 0x6600;
        _DAT_02711a18 = "float";
        _DAT_02711a20 = 0;
        uRam0000000002711a28 = 0;
        _DAT_02711a30 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0x3b) = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02711a80 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02711a48 = FUN_00152600();
        _DAT_02711a40 = "_tempoView";
        _DAT_02711a50 = 0;
        _DAT_02711a58 = 0x6200;
        _DAT_02711a60 = "bool";
        _DAT_02711a68 = 0;
        uRam0000000002711a70 = 0;
        _DAT_02711a78 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x3c] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005854a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNPopUpButton");
  }
  unaff_RDI[0x3d] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00585590();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSwitchButton");
  }
  unaff_RDI[0x3e] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00585680();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSwitchButton");
  }
  puVar4 = unaff_RDI + 0x3f;
  unaff_RDI[0x3f] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00585770();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSwitchButton",param_3,param_4,puVar4);
  }
  unaff_RDI[0x40] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00585860();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSwitchButton");
  }
  unaff_RDI[0x41] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00585950();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSwitchButton");
  }
  unaff_RDI[0x42] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00585a40();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSwitchButton");
  }
  unaff_RDI[0x43] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00585b30();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSwitchButton");
  }
  unaff_RDI[0x44] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00585c20();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSwitchButton");
  }
  unaff_RDI[0x45] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00585d10();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSwitchButton");
  }
  unaff_RDI[0x46] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00585e00();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSwitchButton");
  }
  unaff_RDI[0x47] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00585ef0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSwitchButton");
  }
  unaff_RDI[0x48] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00585fe0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSwitchButton");
  }
  unaff_RDI[0x49] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005860d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSwitchButton");
  }
  unaff_RDI[0x4a] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005861c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSwitchButton");
  }
  unaff_RDI[0x4b] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005862b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSlider");
  }
  unaff_RDI[0x4c] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005863a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSlider");
  }
  unaff_RDI[0x4d] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00586490();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSlider");
  }
  unaff_RDI[0x4e] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00586580();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSlider");
  }
  unaff_RDI[0x4f] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00586670();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSlider");
  }
  unaff_RDI[0x50] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00586760();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSlider");
  }
  unaff_RDI[0x51] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00586850();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSlider");
  }
  return;
}



