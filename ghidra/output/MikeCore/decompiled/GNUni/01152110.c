// Function: FUN_01152110
// Address: 01152110
// Size: 1003 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "_reservesPitchRange"
//   "_limitsHighestPitchIndex"
//   "_limitsLowestPitchIndex"
//   "_isQuarterAssignmentIrrelevant"
//   "_isPitchAssignmentIrrelevant"
//   "MUNoteMappingGroup"
//   "_mappers"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01152110(void)

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
  *unaff_RDI = &DAT_02606000;
  *(undefined1 *)(unaff_RDI + 7) = 0;
  lVar9 = FUN_01151de0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027a00b0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027a0078 = FUN_01151de0();
        _DAT_027a0070 = "_reservesPitchRange";
        _DAT_027a0080 = 0;
        _DAT_027a0088 = 0x6200;
        _DAT_027a0090 = "bool";
        _DAT_027a0098 = 0;
        uRam00000000027a00a0 = 0;
        _DAT_027a00a8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x39) = 0;
  lVar9 = FUN_01151de0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027a00f8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027a00c0 = FUN_01151de0();
        _DAT_027a00b8 = "_limitsHighestPitchIndex";
        _DAT_027a00c8 = 0;
        _DAT_027a00d0 = 0x6200;
        _DAT_027a00d8 = "bool";
        _DAT_027a00e0 = 0;
        uRam00000000027a00e8 = 0;
        _DAT_027a00f0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x3a) = 0;
  lVar9 = FUN_01151de0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027a0140 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027a0108 = FUN_01151de0();
        _DAT_027a0100 = "_limitsLowestPitchIndex";
        _DAT_027a0110 = 0;
        _DAT_027a0118 = 0x6200;
        _DAT_027a0120 = "bool";
        _DAT_027a0128 = 0;
        uRam00000000027a0130 = 0;
        _DAT_027a0138 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x3b) = 0;
  lVar9 = FUN_01151de0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027a0188 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027a0150 = FUN_01151de0();
        _DAT_027a0148 = "_isQuarterAssignmentIrrelevant";
        _DAT_027a0158 = 0;
        _DAT_027a0160 = 0x6200;
        _DAT_027a0168 = "bool";
        _DAT_027a0170 = 0;
        uRam00000000027a0178 = 0;
        _DAT_027a0180 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x3c) = 0;
  lVar9 = FUN_01151de0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027a01d0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027a0198 = FUN_01151de0();
        _DAT_027a0190 = "_isPitchAssignmentIrrelevant";
        _DAT_027a01a0 = 0;
        _DAT_027a01a8 = 0x6200;
        _DAT_027a01b0 = "bool";
        _DAT_027a01b8 = 0;
        uRam00000000027a01c0 = 0;
        _DAT_027a01c8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[8] = 0;
  lVar9 = FUN_01151de0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01152570();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_mappers";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUNoteMappingGroup");
  }
  return;
}


