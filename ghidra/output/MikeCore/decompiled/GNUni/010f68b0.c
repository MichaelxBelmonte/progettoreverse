// Function: FUN_010f68b0
// Address: 010f68b0
// Size: 513 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "MUAudioIOSlot"
//   "GNInt"
//   "_slotChannelIndex"
//   "_deviceChannelIndex"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010f68b0(void)

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
  *unaff_RDI = &DAT_024cc370;
  *(undefined4 *)(unaff_RDI + 7) = 0;
  lVar9 = FUN_000e3450();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278ea30 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278e9f8 = FUN_000e3450();
        _DAT_0278e9f0 = "_slotChannelIndex";
        _DAT_0278ea00 = 0;
        _DAT_0278ea08 = 0x6900;
        _DAT_0278ea10 = "GNInt";
        _DAT_0278ea18 = 0;
        uRam000000000278ea20 = 0;
        _DAT_0278ea28 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x3c) = 0;
  lVar9 = FUN_000e3450();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278ea78 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278ea40 = FUN_000e3450();
        _DAT_0278ea38 = "_deviceChannelIndex";
        _DAT_0278ea48 = 0;
        _DAT_0278ea50 = 0x6900;
        _DAT_0278ea58 = "GNInt";
        _DAT_0278ea60 = 0;
        uRam000000000278ea68 = 0;
        _DAT_0278ea70 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[8] = 0;
  lVar9 = FUN_000e3450();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_010f6b00();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioIOSlot");
  }
  return;
}


