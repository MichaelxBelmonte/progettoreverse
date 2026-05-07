// Reconstructed implementation of GNResponder
// From MikeCore binary — reverse-engineered pseudocode

#include "GNResponder.h"

// ============================================================
// @000a32b0 — 5474 bytes
// str: ""GNResponder""
// str: ""bool""
// str: ""GNWindow""
// str: ""GNMenu""
// str: ""_rootView""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a32b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_00006550();
  unaff_RDI[2] = &DAT_0258bc60;
  if (DAT_026df950 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026d6330 = "GNLocalizationTarget";
      DAT_026d6340 = 0;
      _DAT_026d6338 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_026a2418;
  unaff_RDI[2] = &DAT_026a2d40;
  unaff_RDI[3] = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000a4c20();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_rootView";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNWindow");
  }
  *(undefined4 *)(unaff_RDI + 4) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000a4d10();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x24) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000a4e90();
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 5) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d9cf8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d9cc0 = FUN_0006d940();
        _DAT_026d9cb8 = "_autoresizesSubviews";
        _DAT_026d9cc8 = 0;
        _DAT_026d9cd0 = 0x6200;
        _DAT_026d9cd8 = "bool";
        _DAT_026d9ce0 = 0;
        uRam00000000026d9ce8 = 0;
        _DAT_026d9cf0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x29) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d9d40 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d9d08 = FUN_0006d940();
        _DAT_026d9d00 = "_autoresizesSuperview";
        _DAT_026d9d10 = 0;
        _DAT_026d9d18 = 0x6200;
        _DAT_026d9d20 = "bool";
        _DAT_026d9d28 = 0;
        uRam00000000026d9d30 = 0;
        _DAT_026d9d38 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[6] = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000a5000();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_subviews";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNView");
  }
  unaff_RDI[7] = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000a50f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_superview";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNView");
  }
  unaff_RDI[8] = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000a51e0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNCursor");
  }
  *(undefined1 *)(unaff_RDI + 9) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d9e60 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d9e28 = FUN_0006d940();
        _DAT_026d9e20 = "_acceptsFirstMouse";
        _DAT_026d9e30 = 0;
        _DAT_026d9e38 = 0x6200;
        _DAT_026d9e40 = "bool";
        _DAT_026d9e48 = 0;
        uRam00000000026d9e50 = 0;
        _DAT_026d9e58 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_000a52d0();
  *(undefined4 *)(unaff_RDI + 0xb) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000a53b0();
    FUN_00e87980();
  }
  unaff_RDI[0xc] = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000a5520();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNResponder");
  }
  *(undefined1 *)(unaff_RDI + 0xd) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026da010 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d9fd8 = FUN_0006d940();
        _DAT_026d9fd0 = "_subviewNeedDisplay";
        _DAT_026d9fe0 = 0;
        _DAT_026d9fe8 = 0x6201;
        _DAT_026d9ff0 = "bool";
        _DAT_026d9ff8 = 0;
        uRam00000000026da000 = 0;
        _DAT_026da008 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xe] = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000a5610();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNMenu");
  }
  unaff_RDI[0xf] = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000a5700();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNView");
  }
  unaff_RDI[0x10] = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000a57f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNView");
  }
  FUN_000a58e0();
  unaff_RDI[0x12] = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000a59c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNResponder");
  }
  puVar4 = unaff_RDI + 0x13;
  unaff_RDI[0x13] = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000a5ab0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNAppearance",param_3,param_4,puVar4);
  }
  *(undefined4 *)(unaff_RDI + 0x14) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026da208 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026da1d0 = FUN_0006d940();
        _DAT_026da1c8 = "_alpha";
        _DAT_026da1d8 = 0;
        _DAT_026da1e0 = 0x6600;
        _DAT_026da1e8 = "float";
        _DAT_026da1f0 = 0;
        uRam00000000026da1f8 = 0;
        _DAT_026da200 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xa4) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026da250 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026da218 = FUN_0006d940();
        _DAT_026da210 = "_mouseOverIntensity";
        _DAT_026da220 = 0;
        _DAT_026da228 = 0x6600;
        _DAT_026da230 = "float";
        _DAT_026da238 = 0;
        uRam00000000026da240 = 0;
        _DAT_026da248 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0x15) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026da298 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026da260 = FUN_0006d940();
        _DAT_026da258 = "_isTransparent";
        _DAT_026da268 = 0;
        _DAT_026da270 = 0x6201;
        _DAT_026da278 = "bool";
        _DAT_026da280 = 0;
        uRam00000000026da288 = 0;
        _DAT_026da290 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xa9) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026da2e0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026da2a8 = FUN_0006d940();
        _DAT_026da2a0 = "_isBypassingEvents";
        _DAT_026da2b0 = 0;
        _DAT_026da2b8 = 0x6200;
        _DAT_026da2c0 = "bool";
        _DAT_026da2c8 = 0;
        uRam00000000026da2d0 = 0;
        _DAT_026da2d8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xaa) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026da328 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026da2f0 = FUN_0006d940();
        _DAT_026da2e8 = "_drawingFrameReflectSubviews";
        _DAT_026da2f8 = 0;
        _DAT_026da300 = 0x6200;
        _DAT_026da308 = "bool";
        _DAT_026da310 = 0;
        uRam00000000026da318 = 0;
        _DAT_026da320 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xab) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026da370 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026da338 = FUN_0006d940();
        _DAT_026da330 = "_isAutolayoutingSubviews";
        _DAT_026da340 = 0;
        _DAT_026da348 = 0x6200;
        _DAT_026da350 = "bool";
        _DAT_026da358 = 0;
        uRam00000000026da360 = 0;
        _DAT_026da368 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xac) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026da3b8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026da380 = FUN_0006d940();
        _DAT_026da378 = "_needsLayout";
        _DAT_026da388 = 0;
        _DAT_026da390 = 0x6201;
        _DAT_026da398 = "bool";
        _DAT_026da3a0 = 0;
        uRam00000000026da3a8 = 0;
        _DAT_026da3b0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x16) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026da400 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026da3c8 = FUN_0006d940();
        _DAT_026da3c0 = "_visibilityPriority";
        _DAT_026da3d0 = 0;
        _DAT_026da3d8 = 0x6600;
        _DAT_026da3e0 = "float";
        _DAT_026da3e8 = 0;
        uRam00000000026da3f0 = 0;
        _DAT_026da3f8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xb4) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000a5ba0();
    FUN_00e87980();
  }
  unaff_RDI[0x17] = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026da500 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026da4c8 = FUN_0006d940();
        _DAT_026da4c0 = "_minSize";
        _DAT_026da4d0 = 0;
        _DAT_026da4d8 = 0x5300;
        _DAT_026da4e0 = "GNSize";
        _DAT_026da4e8 = 0;
        uRam00000000026da4f0 = 0;
        _DAT_026da4f8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x18] = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026da548 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026da510 = FUN_0006d940();
        _DAT_026da508 = "_maxSize";
        _DAT_026da518 = 0;
        _DAT_026da520 = 0x5300;
        _DAT_026da528 = "GNSize";
        _DAT_026da530 = 0;
        uRam00000000026da538 = 0;
        _DAT_026da540 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x19] = 0;
  unaff_RDI[0x1a] = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026da590 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026da558 = FUN_0006d940();
        _DAT_026da550 = "_padding";
        _DAT_026da560 = 0;
        _DAT_026da568 = 0x4500;
        _DAT_026da570 = "GNEdgeInset";
        _DAT_026da578 = 0;
        uRam00000000026da580 = 0;
        _DAT_026da588 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x1b] = 0;
  unaff_RDI[0x1c] = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026da5d8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026da5a0 = FUN_0006d940();
        _DAT_026da598 = "_margins";
        _DAT_026da5a8 = 0;
        _DAT_026da5b0 = 0x4500;
        _DAT_026da5b8 = "GNEdgeInset";
        _DAT_026da5c0 = 0;
        uRam00000000026da5c8 = 0;
        _DAT_026da5d0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_000a5d20();
  *(undefined1 *)(unaff_RDI + 0x1e) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026da668 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026da630 = FUN_0006d940();
        _DAT_026da628 = "_isSharedSizeScope";
        _DAT_026da638 = 0;
        _DAT_026da640 = 0x6200;
        _DAT_026da648 = "bool";
        _DAT_026da650 = 0;
        uRam00000000026da658 = 0;
        _DAT_026da660 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined8 *)((longlong)unaff_RDI + 0xf4) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026da6b0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026da678 = FUN_0006d940();
        _DAT_026da670 = "_minLayoutSizeCache";
        _DAT_026da680 = 0;
        _DAT_026da688 = 0x5301;
        _DAT_026da690 = "GNSize";
        _DAT_026da698 = 0;
        uRam00000000026da6a0 = 0;
        _DAT_026da6a8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined8 *)((longlong)unaff_RDI + 0xfc) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026da6f8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026da6c0 = FUN_0006d940();
        _DAT_026da6b8 = "_availableLayoutSizeCache";
        _DAT_026da6c8 = 0;
        _DAT_026da6d0 = 0x5301;
        _DAT_026da6d8 = "GNSize";
        _DAT_026da6e0 = 0;
        uRam00000000026da6e8 = 0;
        _DAT_026da6f0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined8 *)((longlong)unaff_RDI + 0x104) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026da740 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026da708 = FUN_0006d940();
        _DAT_026da700 = "_sharedLayoutSizeCache";
        _DAT_026da710 = 0;
        _DAT_026da718 = 0x5301;
        _DAT_026da720 = "GNSize";
        _DAT_026da728 = 0;
        uRam00000000026da730 = 0;
        _DAT_026da738 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined8 *)((longlong)unaff_RDI + 0x10c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x114) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026da788 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026da750 = FUN_0006d940();
        _DAT_026da748 = "_frame";
        _DAT_026da758 = 0;
        _DAT_026da760 = 0x5200;
        _DAT_026da768 = "GNRect";
        _DAT_026da770 = 0;
        uRam00000000026da778 = 0;
        _DAT_026da780 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined8 *)((longlong)unaff_RDI + 0x11c) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026da7d0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026da798 = FUN_0006d940();
        _DAT_026da790 = "_minFrameSize";
        _DAT_026da7a0 = 0;
        _DAT_026da7a8 = 0x5300;
        _DAT_026da7b0 = "GNSize";
        _DAT_026da7b8 = 0;
        uRam00000000026da7c0 = 0;
        _DAT_026da7c8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x124) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026da818 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026da7e0 = FUN_0006d940();
        _DAT_026da7d8 = "_isSettingFrame";
        _DAT_026da7e8 = 0;
        _DAT_026da7f0 = 0x6901;
        _DAT_026da7f8 = "GNInt";
        _DAT_026da800 = 0;
        uRam00000000026da808 = 0;
        _DAT_026da810 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0x25) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026da860 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026da828 = FUN_0006d940();
        _DAT_026da820 = "_unregisterToolTipLocalisationTargetAnyway";
        _DAT_026da830 = 0;
        _DAT_026da838 = 0x6201;
        _DAT_026da840 = "bool";
        _DAT_026da848 = 0;
        uRam00000000026da850 = 0;
        _DAT_026da858 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_000a5e00();
  return;
}




// ============================================================
// @0020e5b0 — 3515 bytes
// str: ""GNResponder""
// str: ""bool""
// str: ""GNViewController""
// str: ""GNRootView""
// str: ""_window""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020e5b0(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_00006550();
  unaff_RDI[2] = &DAT_0258bc60;
  if (DAT_026df950 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026d6330 = "GNLocalizationTarget";
      DAT_026d6340 = 0;
      _DAT_026d6338 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_026a3350;
  unaff_RDI[2] = &DAT_026a37c8;
  unaff_RDI[3] = 0;
  lVar2 = FUN_0020e360();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0020f5c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNRootView");
  }
  unaff_RDI[4] = 0;
  lVar2 = FUN_0020e360();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0020f6b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_window";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNViewController");
  }
  *(undefined1 *)(unaff_RDI + 5) = 0;
  lVar2 = FUN_0020e360();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f5570 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f5538 = FUN_0020e360();
        _DAT_026f5530 = "_isDisplaying";
        _DAT_026f5540 = 0;
        _DAT_026f5548 = 0x6201;
        _DAT_026f5550 = "bool";
        _DAT_026f5558 = 0;
        uRam00000000026f5560 = 0;
        _DAT_026f5568 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x29) = 0;
  lVar2 = FUN_0020e360();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f55b8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f5580 = FUN_0020e360();
        _DAT_026f5578 = "_isDisplayingToBuffer";
        _DAT_026f5588 = 0;
        _DAT_026f5590 = 0x6201;
        _DAT_026f5598 = "bool";
        _DAT_026f55a0 = 0;
        uRam00000000026f55a8 = 0;
        _DAT_026f55b0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[6] = 0;
  lVar2 = FUN_0020e360();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0020f7a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNResponder");
  }
  *(undefined1 *)(unaff_RDI + 7) = 0;
  lVar2 = FUN_0020e360();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f5648 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f5610 = FUN_0020e360();
        _DAT_026f5608 = "_isWidthSizable";
        _DAT_026f5618 = 0;
        _DAT_026f5620 = 0x6200;
        _DAT_026f5628 = "bool";
        _DAT_026f5630 = 0;
        uRam00000000026f5638 = 0;
        _DAT_026f5640 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x39) = 0;
  lVar2 = FUN_0020e360();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f5690 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f5658 = FUN_0020e360();
        _DAT_026f5650 = "_isHeightSizable";
        _DAT_026f5660 = 0;
        _DAT_026f5668 = 0x6200;
        _DAT_026f5670 = "bool";
        _DAT_026f5678 = 0;
        uRam00000000026f5680 = 0;
        _DAT_026f5688 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x3a) = 0;
  lVar2 = FUN_0020e360();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f56d8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f56a0 = FUN_0020e360();
        _DAT_026f5698 = "_closesWindowControllerWhenPerformingClose";
        _DAT_026f56a8 = 0;
        _DAT_026f56b0 = 0x6200;
        _DAT_026f56b8 = "bool";
        _DAT_026f56c0 = 0;
        uRam00000000026f56c8 = 0;
        _DAT_026f56d0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x3c) = 0;
  lVar2 = FUN_0020e360();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f5720 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f56e8 = FUN_0020e360();
        _DAT_026f56e0 = "_styleMask";
        _DAT_026f56f0 = 0;
        _DAT_026f56f8 = 0x6900;
        _DAT_026f5700 = "GNWindowStyleMask";
        _DAT_026f5708 = 0;
        uRam00000000026f5710 = 0;
        _DAT_026f5718 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[8] = 0;
  lVar2 = FUN_0020e360();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f5768 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f5730 = FUN_0020e360();
        _DAT_026f5728 = "_minContentSize";
        _DAT_026f5738 = 0;
        _DAT_026f5740 = 0x5300;
        _DAT_026f5748 = "GNSize";
        _DAT_026f5750 = 0;
        uRam00000000026f5758 = 0;
        _DAT_026f5760 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[9] = 0;
  lVar2 = FUN_0020e360();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f57b0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f5778 = FUN_0020e360();
        _DAT_026f5770 = "_maxContentSize";
        _DAT_026f5780 = 0;
        _DAT_026f5788 = 0x5300;
        _DAT_026f5790 = "GNSize";
        _DAT_026f5798 = 0;
        uRam00000000026f57a0 = 0;
        _DAT_026f57a8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[10] = 0;
  lVar2 = FUN_0020e360();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0020f890();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNImage");
  }
  unaff_RDI[0xb] = 0;
  lVar2 = FUN_0020e360();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0020f980();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNImage");
  }
  unaff_RDI[0xc] = 0;
  lVar2 = FUN_0020e360();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0020fa70();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNImage");
  }
  FUN_0020fb60();
  *(undefined1 *)(unaff_RDI + 0xe) = 0;
  lVar2 = FUN_0020e360();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f5918 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f58e0 = FUN_0020e360();
        _DAT_026f58d8 = "_cascadeWindows";
        _DAT_026f58e8 = 0;
        _DAT_026f58f0 = 0x6200;
        _DAT_026f58f8 = "bool";
        _DAT_026f5900 = 0;
        uRam00000000026f5908 = 0;
        _DAT_026f5910 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_0020fc40();
  *(undefined1 *)(unaff_RDI + 0x10) = 0;
  lVar2 = FUN_0020e360();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f59a8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f5970 = FUN_0020e360();
        _DAT_026f5968 = "_propagatesChangesOnClose";
        _DAT_026f5978 = 0;
        _DAT_026f5980 = 0x6200;
        _DAT_026f5988 = "bool";
        _DAT_026f5990 = 0;
        uRam00000000026f5998 = 0;
        _DAT_026f59a0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x81) = 0;
  lVar2 = FUN_0020e360();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f59f0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f59b8 = FUN_0020e360();
        _DAT_026f59b0 = "_localizesTitle";
        _DAT_026f59c0 = 0;
        _DAT_026f59c8 = 0x6200;
        _DAT_026f59d0 = "bool";
        _DAT_026f59d8 = 0;
        uRam00000000026f59e0 = 0;
        _DAT_026f59e8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x82) = 0;
  lVar2 = FUN_0020e360();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f5a38 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f5a00 = FUN_0020e360();
        _DAT_026f59f8 = "_documentEdited";
        _DAT_026f5a08 = 0;
        _DAT_026f5a10 = 0x6200;
        _DAT_026f5a18 = "bool";
        _DAT_026f5a20 = 0;
        uRam00000000026f5a28 = 0;
        _DAT_026f5a30 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x84) = 0;
  lVar2 = FUN_0020e360();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f5a80 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f5a48 = FUN_0020e360();
        _DAT_026f5a40 = "_isSettingContentSize";
        _DAT_026f5a50 = 0;
        _DAT_026f5a58 = 0x6901;
        _DAT_026f5a60 = "GNInt";
        _DAT_026f5a68 = 0;
        uRam00000000026f5a70 = 0;
        _DAT_026f5a78 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x11] = 0;
  lVar2 = FUN_0020e360();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f5ac8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f5a90 = FUN_0020e360();
        _DAT_026f5a88 = "_contentSize";
        _DAT_026f5a98 = 0;
        _DAT_026f5aa0 = 0x5300;
        _DAT_026f5aa8 = "GNSize";
        _DAT_026f5ab0 = 0;
        uRam00000000026f5ab8 = 0;
        _DAT_026f5ac0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x12] = 0;
  lVar2 = FUN_0020e360();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f5b10 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f5ad8 = FUN_0020e360();
        _DAT_026f5ad0 = "_mouseDownLocation";
        _DAT_026f5ae0 = 0;
        _DAT_026f5ae8 = 0x5001;
        _DAT_026f5af0 = "GNPoint";
        _DAT_026f5af8 = 0;
        uRam00000000026f5b00 = 0;
        _DAT_026f5b08 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x13) = 0;
  lVar2 = FUN_0020e360();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f5b58 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f5b20 = FUN_0020e360();
        _DAT_026f5b18 = "_mouseDownFlags";
        _DAT_026f5b28 = 0;
        _DAT_026f5b30 = 0x6901;
        _DAT_026f5b38 = "GNInt";
        _DAT_026f5b40 = 0;
        uRam00000000026f5b48 = 0;
        _DAT_026f5b50 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x14] = *(undefined8 *)(unaff_RSI + 0xa0);
  return;
}




// ============================================================
// @0005aa20 — 1154 bytes
// str: ""GNResponder""
// str: ""bool""
// str: ""GNWindow""
// str: ""GNUni""
// str: ""GNDocumentController""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005aa20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_00006550();
  *unaff_RDI = &DAT_026a2d80;
  unaff_RDI[2] = 0;
  lVar2 = FUN_00015ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0005b0e0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNView");
  }
  unaff_RDI[3] = 0;
  lVar2 = FUN_00015ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0005b1d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNWindow");
  }
  unaff_RDI[4] = 0;
  lVar2 = FUN_00015ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0005b2c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_windowControllers";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNDocumentController");
  }
  unaff_RDI[5] = 0;
  lVar2 = FUN_00015ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0005b3b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNToolbar");
  }
  puVar4 = unaff_RDI + 6;
  unaff_RDI[6] = 0;
  lVar2 = FUN_00015ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0005b4a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNView",param_3,param_4,puVar4);
  }
  unaff_RDI[7] = 0;
  lVar2 = FUN_00015ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0005b590();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNView");
  }
  *(undefined1 *)(unaff_RDI + 8) = 0;
  lVar2 = FUN_00015ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d5910 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d58d8 = FUN_00015ff0();
        _DAT_026d58d0 = "_isControllingWindow";
        _DAT_026d58e0 = 0;
        _DAT_026d58e8 = 0x6200;
        _DAT_026d58f0 = "bool";
        _DAT_026d58f8 = 0;
        uRam00000000026d5900 = 0;
        _DAT_026d5908 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[9] = 0;
  lVar2 = FUN_00015ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0005b680();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  unaff_RDI[10] = 0;
  lVar2 = FUN_00015ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0005b770();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNDictionary");
  }
  unaff_RDI[0xb] = 0;
  lVar2 = FUN_00015ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0005b860();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNLocalizer");
  }
  unaff_RDI[0xc] = 0;
  lVar2 = FUN_00015ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0005b950();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNRootView");
  }
  unaff_RDI[0xd] = 0;
  lVar2 = FUN_00015ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0005ba40();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNResponder");
  }
  return;
}




// ============================================================
// @01d827c0 — 934 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01d82b2a) */
/* WARNING: Removing unreachable block (ram,0x01d82b36) */

ulonglong FUN_01d827c0(undefined8 param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar6;
  longlong *local_70;
  undefined4 local_68;
  longlong local_60;
  char local_58;
  undefined1 local_50;
  longlong *local_48;
  char local_40;
  char local_31;
  
  FUN_00d4efa0();
  FUN_01cae990();
  plVar6 = local_48;
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  cVar3 = FUN_00c86130();
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    FUN_01cae990();
    uVar5 = FUN_00d8b910();
    if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b00();
    }
    lVar1 = *unaff_RSI;
    local_68 = 2;
    local_70 = &DAT_024c5048;
    local_58 = 0;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_58 = '\x01';
    local_70 = (longlong *)&DAT_0268b698;
    local_60 = lVar1;
    local_50 = param_2;
    FUN_00d3af80(&DAT_027f1320,uVar5,&local_70);
    plVar6 = local_48;
    if (local_40 == '\0') {
      if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
         (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
    }
    local_70 = &DAT_024c5048;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    cVar3 = (**(code **)(*plVar6 + 0x368))();
    local_31 = '\0';
    FUN_00d3aaa0();
    if (cVar3 == '\0') {
      FUN_00d4efa0();
      plVar6 = local_70;
      FUN_01cae990();
      plVar2 = local_48;
      if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_00c85fb0();
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      plVar6 = (longlong *)CONCAT71((int7)((ulonglong)uVar5 >> 8),local_31 != '\0');
    }
    FUN_00d50b20();
    if (cVar3 != '\0') goto LAB_01d82b4d;
  }
  (**(code **)(*unaff_RDI + 0x370))();
  plVar6 = local_70;
  if ((char)local_68 == '\0') {
    if (local_70 != (longlong *)0x0) {
      FUN_00d50b00();
      if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01d82ae1;
    }
  }
  else if (local_70 != (longlong *)0x0) {
LAB_01d82ae1:
    cVar3 = FUN_00d50c10();
    if (cVar3 == '\0') {
      plVar6 = (longlong *)0x0;
    }
    else {
      uVar4 = (**(code **)(*plVar6 + 0x3b8))();
      plVar6 = (longlong *)(ulonglong)uVar4;
    }
    FUN_00d50b20();
    goto LAB_01d82b4d;
  }
  plVar6 = (longlong *)0x0;
LAB_01d82b4d:
  return (ulonglong)plVar6 & 0xffffff01;
}




// ============================================================
// @0020de90 — 847 bytes
// ============================================================

void FUN_0020de90(void)

{
  undefined8 *unaff_RDI;
  
  *unaff_RDI = &DAT_026b1720;
  unaff_RDI[7] = &DAT_026b1df0;
  if (unaff_RDI[0x3c] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x3b] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x38] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x37] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x31] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x30] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x2f] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x2e] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x2d] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x2c] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x2b] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x2a] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x29] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x28] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x27] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x26] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x25] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x24] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x23] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x22] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x21] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x20] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x1f] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x1e] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x1d] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x1c] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x1b] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x1a] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x19] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x18] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x17] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x16] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x15] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x14] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x13] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x12] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x11] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x10] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0xf] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0xe] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0xd] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0xc] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0xb] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[10] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[9] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[8] != 0) {
    FUN_00d50b20();
  }
  *unaff_RDI = &DAT_02672598;
  if (unaff_RDI[5] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[4] != 0) {
    FUN_00d50b20();
  }
  FUN_00d4ffa0();
  return;
}




// ============================================================
// @01d82060 — 759 bytes
// str: ""GNResponder""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01d82297) */
/* WARNING: Removing unreachable block (ram,0x01d822a4) */
/* WARNING: Removing unreachable block (ram,0x01d820bc) */
/* WARNING: Removing unreachable block (ram,0x01d820c5) */
/* WARNING: Removing unreachable block (ram,0x01d8218d) */
/* WARNING: Removing unreachable block (ram,0x01d82196) */
/* WARNING: Removing unreachable block (ram,0x01d821d7) */
/* WARNING: Removing unreachable block (ram,0x01d82200) */
/* WARNING: Removing unreachable block (ram,0x01d821d9) */
/* WARNING: Removing unreachable block (ram,0x01d82202) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d82060(void)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong **pplVar6;
  code *unaff_RSI;
  longlong *unaff_RDI;
  uint uVar7;
  longlong *local_98;
  longlong local_58;
  char local_50;
  int local_40;
  
  FUN_00d503f0();
  (**(code **)(*unaff_RDI + 0x368))();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_01d82152;
    FUN_00d50b00();
  }
  else if (local_58 == 0) goto LAB_01d82152;
  uVar7 = *(uint *)(local_58 + 0xc);
  if (0 < (int)uVar7) {
    lVar5 = (ulonglong)uVar7 + 1;
    do {
      uVar7 = uVar7 - 1;
      lVar1 = *(longlong *)(*(longlong *)(local_58 + 0x10) + (ulonglong)uVar7 * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      (*unaff_RSI)();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar5 = lVar5 + -1;
    } while (1 < lVar5);
  }
  FUN_00d50b20();
LAB_01d82152:
  (**(code **)(*unaff_RDI + 0x290))();
  if (local_50 == '\0') {
    if (local_58 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_58 == 0) {
    return;
  }
  local_40 = -1;
  while( true ) {
    lVar5 = (longlong)local_40;
    local_40 = local_40 + 1;
    if (*(int *)(local_58 + 0xc) <= local_40) break;
    plVar2 = *(longlong **)(*(longlong *)(local_58 + 0x10) + 8 + lVar5 * 8);
    local_98 = plVar2;
    if ((DAT_026cb300 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      _DAT_026d9028 = FUN_00d4fe50();
      _DAT_026d9010 = "GNResponder";
      _DAT_026d9018 = 0x10;
      _DAT_026d9020 = FUN_00005d90;
      _DAT_026d9030 = 0;
      uRam00000000026d9038 = 0;
      _DAT_026d9040 = 0;
      uRam00000000026d9048 = 0;
      _DAT_026d9050 = 0;
      uRam00000000026d9058 = 0;
      _DAT_026d9060 = 0;
      uRam00000000026d9068 = 0;
      _DAT_026d9070 = 0;
      uRam00000000026d9078 = 0;
      _DAT_026d9080 = 0;
      uRam00000000026d9088 = 0;
      _DAT_026d9090 = 0;
      uRam00000000026d9098 = 0;
      _DAT_026d90a0 = 0;
      uRam00000000026d90a8 = 0;
      _DAT_026d90b0 = 0;
      uRam00000000026d90b8 = 0;
      _DAT_026d90c0 = 0;
      uRam00000000026d90c8 = 0;
      _DAT_026d90d0 = 0;
      ___cxa_guard_release();
    }
    pplVar6 = (longlong **)&DAT_02802688;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x360))();
      cVar3 = FUN_00e85ea0();
      pplVar6 = &local_98;
      if (cVar3 == '\0') {
        pplVar6 = (longlong **)&DAT_02802688;
      }
    }
    if (*pplVar6 != (longlong *)0x0) {
      (*unaff_RSI)();
    }
  }
  FUN_01d84b10();
  FUN_00d50b20();
  return;
}




// ============================================================
// @01d824e0 — 509 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01d82589) */
/* WARNING: Removing unreachable block (ram,0x01d82592) */

undefined8 * FUN_01d824e0(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  char *pcVar6;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (unaff_RSI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  bVar3 = true;
  do {
    if (unaff_RSI == (longlong *)0x0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      return unaff_RDI;
    }
    FUN_00d4efa0();
    local_38[0] = local_40[0];
    pcVar6 = local_40;
    if (local_40[0] == '\0') {
      pcVar6 = local_38;
    }
    *pcVar6 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 == (longlong *)0x0) ||
       ((local_48 != (longlong *)*param_2 && (cVar5 = FUN_00c80ea0(), cVar5 == '\0')))) {
      (**(code **)(*unaff_RSI + 0x370))();
      if (local_48 == unaff_RSI) {
        bVar4 = bVar3;
        if ((!bVar3) && (local_48 != (longlong *)0x0)) {
          bVar4 = true;
          if (local_40[0] != '\0') goto LAB_01d82684;
          FUN_00d50b00();
          bVar4 = true;
        }
joined_r0x01d8265d:
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        unaff_RSI = local_48;
        if (local_40[0] == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          bVar4 = true;
          if (bVar3) {
            FUN_00d50b20();
          }
          goto joined_r0x01d8265d;
        }
        bVar4 = true;
        if (bVar3) {
          FUN_00d50b20();
        }
      }
LAB_01d82684:
      bVar2 = false;
      bVar1 = false;
      bVar3 = bVar4;
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (!bVar3) {
        FUN_00d50b00();
      }
      *unaff_RDI = unaff_RSI;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      bVar2 = true;
      bVar1 = true;
      bVar3 = false;
    }
    if ((local_38[0] != '\0') && (bVar1 = bVar2, local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar1) {
      if ((bVar3) && (unaff_RSI != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      return unaff_RDI;
    }
  } while( true );
}



