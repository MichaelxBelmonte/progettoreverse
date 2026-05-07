// Function: FUN_000a32b0
// Address: 000a32b0
// Size: 5474 bytes
// Class: GNResponder
// String references:
//   "GNResponder"
//   "bool"
//   "GNWindow"
//   "GNMenu"
//   "_rootView"
//   "float"
//   "GNView"
//   "GNLocalizationTarget"
//   "_autoresizesSubviews"
//   "_autoresizesSuperview"
//   "_superview"
//   "_subviews"
//   "GNCursor"
//   "_acceptsFirstMouse"
//   "_subviewNeedDisplay"
//   "GNAppearance"
//   "_alpha"
//   "_mouseOverIntensity"
//   "_isTransparent"
//   "_isBypassingEvents"
//   ... +20 more


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


