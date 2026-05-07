// Function: FUN_0020e5b0
// Address: 0020e5b0
// Size: 3515 bytes
// Class: GNResponder
// String references:
//   "GNResponder"
//   "bool"
//   "GNViewController"
//   "GNRootView"
//   "_window"
//   "GNLocalizationTarget"
//   "GNSize"
//   "_localizesTitle"
//   "GNImage"
//   "GNPoint"
//   "_isDisplaying"
//   "_isDisplayingToBuffer"
//   "_isWidthSizable"
//   "_isHeightSizable"
//   "_closesWindowControllerWhenPerformingClose"
//   "_styleMask"
//   "GNWindowStyleMask"
//   "_minContentSize"
//   "_maxContentSize"
//   "_cascadeWindows"
//   ... +7 more


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


