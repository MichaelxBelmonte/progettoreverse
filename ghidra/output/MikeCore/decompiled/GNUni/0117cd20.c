// Function: FUN_0117cd20
// Address: 0117cd20
// Size: 1121 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "GNInt"
//   "MUPartMapping"
//   "MUNoteMapping"
//   "_noteMappingLines"
//   "_voiceIndex"
//   "_addressedDiatonicDegree"
//   "_addressedPitchIndex"
//   "_minChordPitchIndexCache"
//   "_maxChordPitchIndexCache"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0117cd20(void)

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
  *unaff_RDI = &DAT_02605908;
  unaff_RDI[7] = 0;
  lVar9 = FUN_0117cac0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0117d220();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_noteMappingLines";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUNoteMapping");
  }
  unaff_RDI[8] = 0;
  lVar9 = FUN_0117cac0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0117d310();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_noteMappingLines";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUPartMapping");
  }
  *(undefined4 *)(unaff_RDI + 9) = 0;
  lVar9 = FUN_0117cac0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027a8878 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027a8840 = FUN_0117cac0();
        _DAT_027a8838 = "_voiceIndex";
        _DAT_027a8848 = 0;
        _DAT_027a8850 = 0x6900;
        _DAT_027a8858 = "GNInt";
        _DAT_027a8860 = 0;
        uRam00000000027a8868 = 0;
        _DAT_027a8870 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x4c) = 0;
  lVar9 = FUN_0117cac0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027a88c0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027a8888 = FUN_0117cac0();
        _DAT_027a8880 = "_addressedDiatonicDegree";
        _DAT_027a8890 = 0;
        _DAT_027a8898 = 0x6900;
        _DAT_027a88a0 = "GNInt";
        _DAT_027a88a8 = 0;
        uRam00000000027a88b0 = 0;
        _DAT_027a88b8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 10) = 0;
  lVar9 = FUN_0117cac0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027a8908 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027a88d0 = FUN_0117cac0();
        _DAT_027a88c8 = "_addressedPitchIndex";
        _DAT_027a88d8 = 0;
        _DAT_027a88e0 = 0x6900;
        _DAT_027a88e8 = "GNInt";
        _DAT_027a88f0 = 0;
        uRam00000000027a88f8 = 0;
        _DAT_027a8900 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x54) = 0;
  lVar9 = FUN_0117cac0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027a8950 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027a8918 = FUN_0117cac0();
        _DAT_027a8910 = "_minChordPitchIndexCache";
        _DAT_027a8920 = 0;
        _DAT_027a8928 = 0x6900;
        _DAT_027a8930 = "GNInt";
        _DAT_027a8938 = 0;
        uRam00000000027a8940 = 0;
        _DAT_027a8948 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0xb) = 0;
  lVar9 = FUN_0117cac0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027a8998 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027a8960 = FUN_0117cac0();
        _DAT_027a8958 = "_maxChordPitchIndexCache";
        _DAT_027a8968 = 0;
        _DAT_027a8970 = 0x6900;
        _DAT_027a8978 = "GNInt";
        _DAT_027a8980 = 0;
        uRam00000000027a8988 = 0;
        _DAT_027a8990 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


