// Function: FUN_00857530
// Address: 00857530
// Size: 2083 bytes
// Class: GNHeartbeatHandler
// String references:
//   "bool"
//   "float"
//   "_minFloatValue"
//   "_maxFloatValue"
//   "_slideRuleAnchorOffset"
//   "_showRatios"
//   "_showAllRatios"
//   "_showRatioModeButton"
//   "_lastAnchorOffsetChangeRatio"
//   "_slideRuleAnchorOffsetMinRatio"
//   "_slideRuleAnchorOffsetMaxRatio"
//   "_movingResolutionRatio"
//   "_movingFineResolutionRatio"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00857530(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *unaff_RDI;
  
  FUN_000f62d0();
  *unaff_RDI = &DAT_02645fa8;
  unaff_RDI[2] = &DAT_02646a70;
  FUN_00857e70();
  FUN_00857f50();
  *(undefined1 *)(unaff_RDI + 0x3b) = 0;
  lVar2 = FUN_008572a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273bb60 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273bb28 = FUN_008572a0();
        _DAT_0273bb20 = "_showRatios";
        _DAT_0273bb30 = 0;
        _DAT_0273bb38 = 0x6200;
        _DAT_0273bb40 = "bool";
        _DAT_0273bb48 = 0;
        uRam000000000273bb50 = 0;
        _DAT_0273bb58 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x1d9) = 0;
  lVar2 = FUN_008572a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273bba8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273bb70 = FUN_008572a0();
        _DAT_0273bb68 = "_showAllRatios";
        _DAT_0273bb78 = 0;
        _DAT_0273bb80 = 0x6200;
        _DAT_0273bb88 = "bool";
        _DAT_0273bb90 = 0;
        uRam000000000273bb98 = 0;
        _DAT_0273bba0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x1da) = 0;
  lVar2 = FUN_008572a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273bbf0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273bbb8 = FUN_008572a0();
        _DAT_0273bbb0 = "_showRatioModeButton";
        _DAT_0273bbc0 = 0;
        _DAT_0273bbc8 = 0x6200;
        _DAT_0273bbd0 = "bool";
        _DAT_0273bbd8 = 0;
        uRam000000000273bbe0 = 0;
        _DAT_0273bbe8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x1dc) = 0;
  lVar2 = FUN_008572a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00858030();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x3c) = 0;
  lVar2 = FUN_008572a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273bce8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273bcb0 = FUN_008572a0();
        _DAT_0273bca8 = "_minFloatValue";
        _DAT_0273bcb8 = 0;
        _DAT_0273bcc0 = 0x6600;
        _DAT_0273bcc8 = "float";
        _DAT_0273bcd0 = 0;
        uRam000000000273bcd8 = 0;
        _DAT_0273bce0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x1e4) = 0;
  lVar2 = FUN_008572a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273bd30 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273bcf8 = FUN_008572a0();
        _DAT_0273bcf0 = "_maxFloatValue";
        _DAT_0273bd00 = 0;
        _DAT_0273bd08 = 0x6600;
        _DAT_0273bd10 = "float";
        _DAT_0273bd18 = 0;
        uRam000000000273bd20 = 0;
        _DAT_0273bd28 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x3d) = 0;
  lVar2 = FUN_008572a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273bd78 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273bd40 = FUN_008572a0();
        _DAT_0273bd38 = "_slideRuleAnchorOffset";
        _DAT_0273bd48 = 0;
        _DAT_0273bd50 = 0x6600;
        _DAT_0273bd58 = "float";
        _DAT_0273bd60 = 0;
        uRam000000000273bd68 = 0;
        _DAT_0273bd70 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x1ec) = 0;
  lVar2 = FUN_008572a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273bdc0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273bd88 = FUN_008572a0();
        _DAT_0273bd80 = "_lastAnchorOffsetChangeRatio";
        _DAT_0273bd90 = 0;
        _DAT_0273bd98 = 0x6600;
        _DAT_0273bda0 = "float";
        _DAT_0273bda8 = 0;
        uRam000000000273bdb0 = 0;
        _DAT_0273bdb8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x3e) = 0;
  lVar2 = FUN_008572a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273be08 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273bdd0 = FUN_008572a0();
        _DAT_0273bdc8 = "_slideRuleAnchorOffsetMinRatio";
        _DAT_0273bdd8 = 0;
        _DAT_0273bde0 = 0x6600;
        _DAT_0273bde8 = "float";
        _DAT_0273bdf0 = 0;
        uRam000000000273bdf8 = 0;
        _DAT_0273be00 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 500) = 0;
  lVar2 = FUN_008572a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273be50 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273be18 = FUN_008572a0();
        _DAT_0273be10 = "_slideRuleAnchorOffsetMaxRatio";
        _DAT_0273be20 = 0;
        _DAT_0273be28 = 0x6600;
        _DAT_0273be30 = "float";
        _DAT_0273be38 = 0;
        uRam000000000273be40 = 0;
        _DAT_0273be48 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x3f) = 0;
  lVar2 = FUN_008572a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273be98 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273be60 = FUN_008572a0();
        _DAT_0273be58 = "_movingResolutionRatio";
        _DAT_0273be68 = 0;
        _DAT_0273be70 = 0x6600;
        _DAT_0273be78 = "float";
        _DAT_0273be80 = 0;
        uRam000000000273be88 = 0;
        _DAT_0273be90 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x1fc) = 0;
  lVar2 = FUN_008572a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273bee0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273bea8 = FUN_008572a0();
        _DAT_0273bea0 = "_movingFineResolutionRatio";
        _DAT_0273beb0 = 0;
        _DAT_0273beb8 = 0x6600;
        _DAT_0273bec0 = "float";
        _DAT_0273bec8 = 0;
        uRam000000000273bed0 = 0;
        _DAT_0273bed8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_008581a0();
  return;
}


