// Function: FUN_010f6bf0
// Address: 010f6bf0
// Size: 532 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "MUAudioIOChannelConnection"
//   "_inputChannelCount"
//   "_outputChannelCount"
//   "GNInt"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010f6bf0(void)

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
  *unaff_RDI = &DAT_0250ce18;
  FUN_010f6e70();
  *(undefined4 *)(unaff_RDI + 8) = 0;
  lVar9 = FUN_0079c160();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278eb50 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278eb18 = FUN_0079c160();
        _DAT_0278eb10 = "_inputChannelCount";
        _DAT_0278eb20 = 0;
        _DAT_0278eb28 = 0x6900;
        _DAT_0278eb30 = "GNInt";
        _DAT_0278eb38 = 0;
        uRam000000000278eb40 = 0;
        _DAT_0278eb48 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x44) = 0;
  lVar9 = FUN_0079c160();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278eb98 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278eb60 = FUN_0079c160();
        _DAT_0278eb58 = "_outputChannelCount";
        _DAT_0278eb68 = 0;
        _DAT_0278eb70 = 0x6900;
        _DAT_0278eb78 = "GNInt";
        _DAT_0278eb80 = 0;
        uRam000000000278eb88 = 0;
        _DAT_0278eb90 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[9] = 0;
  lVar9 = FUN_0079c160();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_010f6f50();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioIOChannelConnection");
  }
  return;
}


