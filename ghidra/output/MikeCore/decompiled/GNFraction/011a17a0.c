// Function: FUN_011a17a0
// Address: 011a17a0
// Size: 1715 bytes
// Class: GNFraction
// String references:
//   "bool"
//   "float"
//   "GNFraction"
//   "MUTimeJump"
//   "double"
//   "_isRecording"
//   "_clickLevel"
//   "_isClicking"
//   "_isMutingAllTracks"
//   "_isIgnoringSourceTimeForElementTimeFunction"
//   "_releaseDuration"
//   "_preplayDuration"
//   "_clickResolution"
//   "_clickFrequency"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011a17a0(void)

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
  char *pcVar10;
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
  *unaff_RDI = &DAT_025ed110;
  *(undefined1 *)(unaff_RDI + 7) = 0;
  lVar9 = FUN_011a15f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027aee30 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027aedf8 = FUN_011a15f0();
        _DAT_027aedf0 = "_isRecording";
        _DAT_027aee00 = 0;
        _DAT_027aee08 = 0x6200;
        _DAT_027aee10 = "bool";
        _DAT_027aee18 = 0;
        uRam00000000027aee20 = 0;
        _DAT_027aee28 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[8] = 0;
  lVar9 = FUN_011a15f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011a1f40();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTimeJump");
  }
  *(undefined4 *)(unaff_RDI + 9) = 0;
  lVar9 = FUN_011a15f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027aeec0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027aee88 = FUN_011a15f0();
        _DAT_027aee80 = "_clickLevel";
        _DAT_027aee90 = 0;
        _DAT_027aee98 = 0x6600;
        _DAT_027aeea0 = "float";
        _DAT_027aeea8 = 0;
        uRam00000000027aeeb0 = 0;
        _DAT_027aeeb8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x4c) = 0;
  lVar9 = FUN_011a15f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027aef08 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027aeed0 = FUN_011a15f0();
        _DAT_027aeec8 = "_isClicking";
        _DAT_027aeed8 = 0;
        _DAT_027aeee0 = 0x6200;
        _DAT_027aeee8 = "bool";
        _DAT_027aeef0 = 0;
        uRam00000000027aeef8 = 0;
        _DAT_027aef00 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x4d) = 0;
  lVar9 = FUN_011a15f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027aef50 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027aef18 = FUN_011a15f0();
        _DAT_027aef10 = "_isMutingAllTracks";
        _DAT_027aef20 = 0;
        _DAT_027aef28 = 0x6200;
        _DAT_027aef30 = "bool";
        _DAT_027aef38 = 0;
        uRam00000000027aef40 = 0;
        _DAT_027aef48 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x4e) = 0;
  lVar9 = FUN_011a15f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027aef98 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027aef60 = FUN_011a15f0();
        _DAT_027aef58 = "_isIgnoringSourceTimeForElementTimeFunction";
        _DAT_027aef68 = 0;
        _DAT_027aef70 = 0x6200;
        _DAT_027aef78 = "bool";
        _DAT_027aef80 = 0;
        uRam00000000027aef88 = 0;
        _DAT_027aef90 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[10] = 0;
  lVar9 = FUN_011a15f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027aefe0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027aefa8 = FUN_011a15f0();
        _DAT_027aefa0 = "_releaseDuration";
        _DAT_027aefb0 = 0;
        _DAT_027aefb8 = 0x6400;
        _DAT_027aefc0 = "double";
        _DAT_027aefc8 = 0;
        uRam00000000027aefd0 = 0;
        _DAT_027aefd8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xb] = 0;
  lVar9 = FUN_011a15f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027af028 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027aeff0 = FUN_011a15f0();
        _DAT_027aefe8 = "_preplayDuration";
        _DAT_027aeff8 = 0;
        _DAT_027af000 = 0x6400;
        _DAT_027af008 = "double";
        _DAT_027af010 = 0;
        uRam00000000027af018 = 0;
        _DAT_027af020 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xc] = 0x100000000;
  lVar9 = FUN_011a15f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027af070 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027af038 = FUN_011a15f0();
        _DAT_027af030 = "_clickResolution";
        _DAT_027af040 = 0;
        _DAT_027af048 = 0x7100;
        _DAT_027af050 = "GNFraction";
        _DAT_027af058 = 0;
        uRam00000000027af060 = 0;
        _DAT_027af068 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0xd) = 0;
  lVar9 = FUN_011a15f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027af0b8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027af080 = FUN_011a15f0();
        _DAT_027af078 = "_clickFrequency";
        _DAT_027af088 = 0;
        _DAT_027af090 = 0x6600;
        _DAT_027af098 = "float";
        _DAT_027af0a0 = 0;
        uRam00000000027af0a8 = 0;
        _DAT_027af0b0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


