// Function: FUN_01183b10
// Address: 01183b10
// Size: 816 bytes
// Class: MUPart
// String references:
//   "bool"
//   "MUPart"
//   "_didRequestCacheValidation"
//   "MUNoteMappingGroup"
//   "MUNoteMapping"
//   "_partMapping"
//   "MUNoteMappingLine"
//   "_isVoicingValid"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01183b10(void)

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
  *unaff_RDI = &DAT_02606ad8;
  unaff_RDI[7] = 0;
  lVar9 = FUN_01183780();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01183fb0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUPart");
  }
  unaff_RDI[8] = 0;
  lVar9 = FUN_01183780();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011840a0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_partMapping";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUNoteMapping");
  }
  unaff_RDI[9] = 0;
  lVar9 = FUN_01183780();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01184190();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_partMapping";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUNoteMappingLine");
  }
  unaff_RDI[10] = 0;
  lVar9 = FUN_01183780();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01184280();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_partMapping";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUNoteMappingGroup");
  }
  FUN_01184370();
  FUN_01184450();
  *(undefined1 *)(unaff_RDI + 0xd) = 0;
  lVar9 = FUN_01183780();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027a9e70 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027a9e38 = FUN_01183780();
        _DAT_027a9e30 = "_didRequestCacheValidation";
        _DAT_027a9e40 = 0;
        _DAT_027a9e48 = 0x6201;
        _DAT_027a9e50 = "bool";
        _DAT_027a9e58 = 0;
        uRam00000000027a9e60 = 0;
        _DAT_027a9e68 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x69) = 0;
  lVar9 = FUN_01183780();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027a9eb8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027a9e80 = FUN_01183780();
        _DAT_027a9e78 = "_isVoicingValid";
        _DAT_027a9e88 = 0;
        _DAT_027a9e90 = 0x6200;
        _DAT_027a9e98 = "bool";
        _DAT_027a9ea0 = 0;
        uRam00000000027a9ea8 = 0;
        _DAT_027a9eb0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


