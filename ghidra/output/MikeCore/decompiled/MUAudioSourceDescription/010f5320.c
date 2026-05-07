// Function: FUN_010f5320
// Address: 010f5320
// Size: 610 bytes
// Class: MUAudioSourceDescription
// String references:
//   "bool"
//   "GNUni"
//   "MUAnalyzer"
//   "MUTrackAudioRecorder"
//   "MUAudioSourceDescription"
//   "_isAudioAccessible"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010f5320(void)

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
  *unaff_RDI = &DAT_025d0298;
  unaff_RDI[7] = 0;
  lVar9 = FUN_00115af0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_010f5670();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceDescription");
  }
  unaff_RDI[8] = 0;
  lVar9 = FUN_00115af0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_010f5760();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceDescription");
  }
  unaff_RDI[9] = 0;
  lVar9 = FUN_00115af0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_010f5850();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAnalyzer");
  }
  FUN_010f5940();
  unaff_RDI[0xb] = 0;
  lVar9 = FUN_00115af0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_010f5a20();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTrackAudioRecorder");
  }
  *(undefined1 *)(unaff_RDI + 0xc) = 0;
  lVar9 = FUN_00115af0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027bf760 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027bf728 = FUN_00115af0();
        _DAT_027bf720 = "_isAudioAccessible";
        _DAT_027bf730 = 0;
        _DAT_027bf738 = 0x6211;
        _DAT_027bf740 = "bool";
        _DAT_027bf748 = 0;
        uRam00000000027bf750 = 0;
        _DAT_027bf758 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


