// Function: FUN_010fc3b0
// Address: 010fc3b0
// Size: 1771 bytes
// Class: GNInt
// String references:
//   "bool"
//   "float"
//   "GNInt"
//   "_processPeriodBased"
//   "_usesPososc"
//   "_resetAllPhasesAtAttack"
//   "_continueAllPhasesByDefault"
//   "_renderWithOriginalTime"
//   "_freqDomainFormantResolution"
//   "_freqDomainFourierSize"
//   "_freqDomainPhaseResetParametersScale"
//   "_formantPitchUpCompensationFactor"
//   "_formantPitchDownCompensationFactor"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010fc3b0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_02590538;
  uVar1 = *(undefined4 *)(unaff_RSI + 0x14);
  uVar2 = *(undefined4 *)(unaff_RSI + 0x18);
  uVar3 = *(undefined4 *)(unaff_RSI + 0x1c);
  uVar4 = *(undefined4 *)(unaff_RSI + 0x20);
  uVar5 = *(undefined4 *)(unaff_RSI + 0x24);
  uVar6 = *(undefined4 *)(unaff_RSI + 0x28);
  uVar7 = *(undefined4 *)(unaff_RSI + 0x2c);
  *(undefined4 *)(unaff_RDI + 2) = *(undefined4 *)(unaff_RSI + 0x10);
  *(undefined4 *)((longlong)unaff_RDI + 0x14) = uVar1;
  *(undefined4 *)(unaff_RDI + 3) = uVar2;
  *(undefined4 *)((longlong)unaff_RDI + 0x1c) = uVar3;
  *(undefined4 *)(unaff_RDI + 4) = uVar4;
  *(undefined4 *)((longlong)unaff_RDI + 0x24) = uVar5;
  *(undefined4 *)(unaff_RDI + 5) = uVar6;
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = uVar7;
  unaff_RDI[6] = *(undefined8 *)(unaff_RSI + 0x30);
  *unaff_RDI = &DAT_025f0698;
  *(undefined1 *)(unaff_RDI + 7) = 0;
  lVar9 = FUN_010fc1b0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278f9b8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278f980 = FUN_010fc1b0();
        _DAT_0278f978 = "_processPeriodBased";
        _DAT_0278f988 = 0;
        _DAT_0278f990 = 0x6200;
        _DAT_0278f998 = "bool";
        _DAT_0278f9a0 = 0;
        uRam000000000278f9a8 = 0;
        _DAT_0278f9b0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x39) = 0;
  lVar9 = FUN_010fc1b0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278fa00 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278f9c8 = FUN_010fc1b0();
        _DAT_0278f9c0 = "_usesPososc";
        _DAT_0278f9d0 = 0;
        _DAT_0278f9d8 = 0x6200;
        _DAT_0278f9e0 = "bool";
        _DAT_0278f9e8 = 0;
        uRam000000000278f9f0 = 0;
        _DAT_0278f9f8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x3a) = 0;
  lVar9 = FUN_010fc1b0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278fa48 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278fa10 = FUN_010fc1b0();
        _DAT_0278fa08 = "_resetAllPhasesAtAttack";
        _DAT_0278fa18 = 0;
        _DAT_0278fa20 = 0x6200;
        _DAT_0278fa28 = "bool";
        _DAT_0278fa30 = 0;
        uRam000000000278fa38 = 0;
        _DAT_0278fa40 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x3b) = 0;
  lVar9 = FUN_010fc1b0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278fa90 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278fa58 = FUN_010fc1b0();
        _DAT_0278fa50 = "_continueAllPhasesByDefault";
        _DAT_0278fa60 = 0;
        _DAT_0278fa68 = 0x6200;
        _DAT_0278fa70 = "bool";
        _DAT_0278fa78 = 0;
        uRam000000000278fa80 = 0;
        _DAT_0278fa88 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x3c) = 0;
  lVar9 = FUN_010fc1b0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278fad8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278faa0 = FUN_010fc1b0();
        _DAT_0278fa98 = "_renderWithOriginalTime";
        _DAT_0278faa8 = 0;
        _DAT_0278fab0 = 0x6200;
        _DAT_0278fab8 = "bool";
        _DAT_0278fac0 = 0;
        uRam000000000278fac8 = 0;
        _DAT_0278fad0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 8) = 0;
  lVar9 = FUN_010fc1b0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278fb20 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278fae8 = FUN_010fc1b0();
        _DAT_0278fae0 = "_freqDomainFormantResolution";
        _DAT_0278faf0 = 0;
        _DAT_0278faf8 = 0x6600;
        _DAT_0278fb00 = "float";
        _DAT_0278fb08 = 0;
        uRam000000000278fb10 = 0;
        _DAT_0278fb18 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x44) = 0;
  lVar9 = FUN_010fc1b0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278fb68 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278fb30 = FUN_010fc1b0();
        _DAT_0278fb28 = "_freqDomainFourierSize";
        _DAT_0278fb38 = 0;
        _DAT_0278fb40 = 0x6900;
        _DAT_0278fb48 = "GNInt";
        _DAT_0278fb50 = 0;
        uRam000000000278fb58 = 0;
        _DAT_0278fb60 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 9) = 0;
  lVar9 = FUN_010fc1b0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278fbb0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278fb78 = FUN_010fc1b0();
        _DAT_0278fb70 = "_freqDomainPhaseResetParametersScale";
        _DAT_0278fb80 = 0;
        _DAT_0278fb88 = 0x6600;
        _DAT_0278fb90 = "float";
        _DAT_0278fb98 = 0;
        uRam000000000278fba0 = 0;
        _DAT_0278fba8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x4c) = 0;
  lVar9 = FUN_010fc1b0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278fbf8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278fbc0 = FUN_010fc1b0();
        _DAT_0278fbb8 = "_formantPitchUpCompensationFactor";
        _DAT_0278fbc8 = 0;
        _DAT_0278fbd0 = 0x6600;
        _DAT_0278fbd8 = "float";
        _DAT_0278fbe0 = 0;
        uRam000000000278fbe8 = 0;
        _DAT_0278fbf0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 10) = 0;
  lVar9 = FUN_010fc1b0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278fc40 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278fc08 = FUN_010fc1b0();
        _DAT_0278fc00 = "_formantPitchDownCompensationFactor";
        _DAT_0278fc10 = 0;
        _DAT_0278fc18 = 0x6600;
        _DAT_0278fc20 = "float";
        _DAT_0278fc28 = 0;
        uRam000000000278fc30 = 0;
        _DAT_0278fc38 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


