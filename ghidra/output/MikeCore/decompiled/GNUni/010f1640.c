// Function: FUN_010f1640
// Address: 010f1640
// Size: 851 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "MUElement"
//   "MUFunction"
//   "MUAudioSourceComponent"
//   "GNInt"
//   "_audioComponents"
//   "MUAudioRenderInfo"
//   "_splitArchiveSourceElementIndex"
//   "_splitArchiveSourceComponentIndex"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010f1640(void)

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
  *unaff_RDI = &DAT_025c86c0;
  unaff_RDI[7] = 0;
  lVar9 = FUN_001152a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_010f1aa0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUFunction");
  }
  unaff_RDI[8] = 0;
  lVar9 = FUN_001152a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_010f1b90();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUFunction");
  }
  unaff_RDI[9] = 0;
  lVar9 = FUN_001152a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_010f1c80();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioComponents";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUElement");
  }
  unaff_RDI[10] = 0;
  lVar9 = FUN_001152a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_010f1d70();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioComponents";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceComponent");
  }
  unaff_RDI[0xb] = 0;
  lVar9 = FUN_001152a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_010f1e60();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioRenderInfo");
  }
  *(undefined4 *)(unaff_RDI + 0xc) = 0;
  lVar9 = FUN_001152a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278d538 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278d500 = FUN_001152a0();
        _DAT_0278d4f8 = "_splitArchiveSourceElementIndex";
        _DAT_0278d508 = 0;
        _DAT_0278d510 = 0x6900;
        _DAT_0278d518 = "GNInt";
        _DAT_0278d520 = 0;
        uRam000000000278d528 = 0;
        _DAT_0278d530 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 100) = 0;
  lVar9 = FUN_001152a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278d580 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278d548 = FUN_001152a0();
        _DAT_0278d540 = "_splitArchiveSourceComponentIndex";
        _DAT_0278d550 = 0;
        _DAT_0278d558 = 0x6900;
        _DAT_0278d560 = "GNInt";
        _DAT_0278d568 = 0;
        uRam000000000278d570 = 0;
        _DAT_0278d578 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


