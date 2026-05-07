// Function: FUN_0118a6a0
// Address: 0118a6a0
// Size: 641 bytes
// Class: MUTrack
// String references:
//   "bool"
//   "MUTrack"
//   "MUComposition"
//   "MUAudioSource"
//   "_performance"
//   "MUAudioIOConfiguration"
//   "_performances"
//   "_isDetectionPerformance"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0118a6a0(void)

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
  *unaff_RDI = &DAT_025d4058;
  FUN_0118aa10();
  unaff_RDI[8] = 0;
  lVar9 = FUN_0118a3e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0118aaf0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_performance";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTrack");
  }
  unaff_RDI[9] = 0;
  lVar9 = FUN_0118a3e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0118abe0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSource");
  }
  FUN_0118acd0();
  *(undefined1 *)(unaff_RDI + 0xb) = 0;
  lVar9 = FUN_0118a3e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027aac20 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027aabe8 = FUN_0118a3e0();
        _DAT_027aabe0 = "_isDetectionPerformance";
        _DAT_027aabf0 = 0;
        _DAT_027aabf8 = 0x6200;
        _DAT_027aac00 = "bool";
        _DAT_027aac08 = 0;
        uRam00000000027aac10 = 0;
        _DAT_027aac18 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xc] = 0;
  lVar9 = FUN_0118a3e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0118adb0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_performances";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUComposition");
  }
  unaff_RDI[0xd] = 0;
  lVar9 = FUN_0118a3e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0118aea0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioIOConfiguration");
  }
  return;
}


