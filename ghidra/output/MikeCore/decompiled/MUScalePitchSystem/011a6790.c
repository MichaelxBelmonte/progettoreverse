// Function: FUN_011a6790
// Address: 011a6790
// Size: 1080 bytes
// Class: MUScalePitchSystem
// String references:
//   "bool"
//   "MUScalePitchSystem"
//   "_tuningIsSuggestedRelevant"
//   "_modeIsSuggestedRelevant"
//   "_tuningPitchAnchorIsSuggestedRelevant"
//   "_modeFundamentalOffsetIsSuggestedRelevant"
//   "_stretchingIsSuggestedRelevant"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011a6790(void)

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
  *unaff_RDI = &DAT_026034e8;
  unaff_RDI[7] = 0;
  lVar9 = FUN_011a6590();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011a6cc0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUScalePitchSystem");
  }
  FUN_011a6db0();
  FUN_011a6e90();
  FUN_011a6f70();
  *(undefined1 *)(unaff_RDI + 0xb) = 0;
  lVar9 = FUN_011a6590();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027aff88 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027aff50 = FUN_011a6590();
        _DAT_027aff48 = "_tuningIsSuggestedRelevant";
        _DAT_027aff58 = 0;
        _DAT_027aff60 = 0x6200;
        _DAT_027aff68 = "bool";
        _DAT_027aff70 = 0;
        uRam00000000027aff78 = 0;
        _DAT_027aff80 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x59) = 0;
  lVar9 = FUN_011a6590();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027affd0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027aff98 = FUN_011a6590();
        _DAT_027aff90 = "_modeIsSuggestedRelevant";
        _DAT_027affa0 = 0;
        _DAT_027affa8 = 0x6200;
        _DAT_027affb0 = "bool";
        _DAT_027affb8 = 0;
        uRam00000000027affc0 = 0;
        _DAT_027affc8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x5a) = 0;
  lVar9 = FUN_011a6590();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b0018 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027affe0 = FUN_011a6590();
        _DAT_027affd8 = "_tuningPitchAnchorIsSuggestedRelevant";
        _DAT_027affe8 = 0;
        _DAT_027afff0 = 0x6200;
        _DAT_027afff8 = "bool";
        _DAT_027b0000 = 0;
        uRam00000000027b0008 = 0;
        _DAT_027b0010 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x5b) = 0;
  lVar9 = FUN_011a6590();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b0060 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b0028 = FUN_011a6590();
        _DAT_027b0020 = "_modeFundamentalOffsetIsSuggestedRelevant";
        _DAT_027b0030 = 0;
        _DAT_027b0038 = 0x6200;
        _DAT_027b0040 = "bool";
        _DAT_027b0048 = 0;
        uRam00000000027b0050 = 0;
        _DAT_027b0058 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x5c) = 0;
  lVar9 = FUN_011a6590();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b00a8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b0070 = FUN_011a6590();
        _DAT_027b0068 = "_stretchingIsSuggestedRelevant";
        _DAT_027b0078 = 0;
        _DAT_027b0080 = 0x6200;
        _DAT_027b0088 = "bool";
        _DAT_027b0090 = 0;
        uRam00000000027b0098 = 0;
        _DAT_027b00a0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_011a7050();
  return;
}


