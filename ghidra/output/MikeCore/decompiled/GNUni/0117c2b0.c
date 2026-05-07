// Function: FUN_0117c2b0
// Address: 0117c2b0
// Size: 559 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "_didRequestCacheValidation"
//   "MUPartMapping"
//   "MUPartMapper"
//   "_noteMappingGroup"
//   "MUNoteMapping"
//   "_noteMappingGroups"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0117c2b0(void)

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
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  char *pcVar10;
  
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
  *unaff_RDI = &DAT_02605560;
  FUN_0117c5b0();
  unaff_RDI[8] = 0;
  lVar9 = FUN_0117bf90();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0117c690();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_noteMappingGroup";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUPartMapper");
  }
  unaff_RDI[9] = 0;
  lVar9 = FUN_0117bf90();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0117c780();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_noteMappingGroup";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUNoteMapping");
  }
  unaff_RDI[10] = 0;
  lVar9 = FUN_0117bf90();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0117c870();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_noteMappingGroups";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUPartMapping");
  }
  FUN_0117c960();
  *(undefined1 *)(unaff_RDI + 0xc) = 0;
  lVar9 = FUN_0117bf90();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027a86d0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027a8698 = FUN_0117bf90();
        _DAT_027a8690 = "_didRequestCacheValidation";
        _DAT_027a86a0 = 0;
        _DAT_027a86a8 = 0x6201;
        _DAT_027a86b0 = "bool";
        _DAT_027a86b8 = 0;
        uRam00000000027a86c0 = 0;
        _DAT_027a86c8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


