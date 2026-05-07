// Function: FUN_010f1fd0
// Address: 010f1fd0
// Size: 731 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "GNAudioChannelFormat"
//   "_isBypassing"
//   "_inputChannelFormat"
//   "_outputChannelFormat"
//   "MUAudioEffectRenderer"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010f1fd0(void)

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
  *unaff_RDI = &DAT_025c9018;
  *(undefined4 *)(unaff_RDI + 7) = 0;
  lVar9 = FUN_0044b870();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278d5c8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278d590 = FUN_0044b870();
        _DAT_0278d588 = "_inputChannelFormat";
        _DAT_0278d598 = 0;
        _DAT_0278d5a0 = 0x6500;
        _DAT_0278d5a8 = "GNAudioChannelFormat";
        _DAT_0278d5b0 = 0;
        uRam000000000278d5b8 = 0;
        _DAT_0278d5c0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x3c) = 0;
  lVar9 = FUN_0044b870();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278d610 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278d5d8 = FUN_0044b870();
        _DAT_0278d5d0 = "_outputChannelFormat";
        _DAT_0278d5e0 = 0;
        _DAT_0278d5e8 = 0x6500;
        _DAT_0278d5f0 = "GNAudioChannelFormat";
        _DAT_0278d5f8 = 0;
        uRam000000000278d600 = 0;
        _DAT_0278d608 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 8) = 0;
  lVar9 = FUN_0044b870();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278d658 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278d620 = FUN_0044b870();
        _DAT_0278d618 = "_isBypassing";
        _DAT_0278d628 = 0;
        _DAT_0278d630 = 0x6200;
        _DAT_0278d638 = "bool";
        _DAT_0278d640 = 0;
        uRam000000000278d648 = 0;
        _DAT_0278d650 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[9] = 0;
  lVar9 = FUN_0044b870();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_010f2340();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioEffectRenderer");
  }
  FUN_010f2430();
  FUN_010f2510();
  return;
}


