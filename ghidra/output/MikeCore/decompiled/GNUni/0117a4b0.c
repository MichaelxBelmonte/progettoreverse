// Function: FUN_0117a4b0
// Address: 0117a4b0
// Size: 1031 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "SInt64"
//   "GNFraction"
//   "MUNoteRealization"
//   "MUPart"
//   "_startQuarter"
//   "_endQuarter"
//   "_note"
//   "GNInt"
//   "_pitchIndex"
//   "_notes"
//   "MUNoteMapping"
//   "_noteMappingId"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0117a4b0(void)

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
  *unaff_RDI = &DAT_025e9798;
  unaff_RDI[7] = 0x100000000;
  lVar9 = FUN_0117a240();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027a7d28 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027a7cf0 = FUN_0117a240();
        _DAT_027a7ce8 = "_startQuarter";
        _DAT_027a7cf8 = 0;
        _DAT_027a7d00 = 0x7100;
        _DAT_027a7d08 = "GNFraction";
        _DAT_027a7d10 = 0;
        uRam00000000027a7d18 = 0;
        _DAT_027a7d20 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[8] = 0x100000000;
  lVar9 = FUN_0117a240();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027a7d70 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027a7d38 = FUN_0117a240();
        _DAT_027a7d30 = "_endQuarter";
        _DAT_027a7d40 = 0;
        _DAT_027a7d48 = 0x7100;
        _DAT_027a7d50 = "GNFraction";
        _DAT_027a7d58 = 0;
        uRam00000000027a7d60 = 0;
        _DAT_027a7d68 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[9] = 0;
  lVar9 = FUN_0117a240();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0117a950();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_note";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUNoteRealization");
  }
  *(undefined4 *)(unaff_RDI + 10) = 0;
  lVar9 = FUN_0117a240();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027a7e00 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027a7dc8 = FUN_0117a240();
        _DAT_027a7dc0 = "_pitchIndex";
        _DAT_027a7dd0 = 0;
        _DAT_027a7dd8 = 0x6900;
        _DAT_027a7de0 = "GNInt";
        _DAT_027a7de8 = 0;
        uRam00000000027a7df0 = 0;
        _DAT_027a7df8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xb] = 0;
  lVar9 = FUN_0117a240();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0117aa40();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_notes";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUPart");
  }
  unaff_RDI[0xc] = 0;
  lVar9 = FUN_0117a240();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0117ab30();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUNoteMapping");
  }
  unaff_RDI[0xd] = 0;
  lVar9 = FUN_0117a240();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027a7ed8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027a7ea0 = FUN_0117a240();
        _DAT_027a7e98 = "_noteMappingId";
        _DAT_027a7ea8 = 0;
        _DAT_027a7eb0 = 0x6c01;
        _DAT_027a7eb8 = "SInt64";
        _DAT_027a7ec0 = 0;
        uRam00000000027a7ec8 = 0;
        _DAT_027a7ed0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


