// Function: FUN_01182110
// Address: 01182110
// Size: 1862 bytes
// Class: MUComposition
// String references:
//   "bool"
//   "MUComposition"
//   "_rootPart"
//   "MUPart"
//   "MUQuarterSequence"
//   "_part"
//   "MUScaleModeSequence"
//   "MUNote"
//   "MUQuarterSequenceObserver"
//   "_didRequestCacheValidation"
//   "MUChordSequence"
//   "_parts"
//   "_subparts"
//   "_superpart"
//   "MUPartInstrument"
//   "MULyric"
//   "MUScaleTuningSequence"
//   "MUScalePitchSystemSequence"
//   "_isPitchSystemCacheValid"
//   "_isDerivedKeySequenceCacheValid"
//   ... +0 more


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01182110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  undefined8 *puVar11;
  
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
  *unaff_RDI = &DAT_025c7fc8;
  unaff_RDI[7] = &DAT_025d0720;
  if (DAT_0278c400 == '\0') {
    iVar8 = ___cxa_guard_acquire();
    if (iVar8 != 0) {
      _DAT_027cb980 = "MUQuarterSequenceObserver";
      DAT_027cb990 = 0;
      _DAT_027cb988 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_025e9b50;
  unaff_RDI[7] = &DAT_025e9ee8;
  unaff_RDI[8] = 0;
  lVar9 = FUN_0013db50();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01182b20();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_part";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUNote");
  }
  unaff_RDI[9] = 0;
  lVar9 = FUN_0013db50();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01182c10();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_superpart";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUPart");
  }
  unaff_RDI[10] = 0;
  lVar9 = FUN_0013db50();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01182d00();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_subparts";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUPart");
  }
  unaff_RDI[0xb] = 0;
  lVar9 = FUN_0013db50();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01182df0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_rootPart";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUComposition");
  }
  unaff_RDI[0xc] = 0;
  lVar9 = FUN_0013db50();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01182ee0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_part";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUPartInstrument");
  }
  puVar11 = unaff_RDI + 0xd;
  unaff_RDI[0xd] = 0;
  lVar9 = FUN_0013db50();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01182fd0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUQuarterSequence",param_3,param_4,puVar11);
  }
  unaff_RDI[0xe] = 0;
  lVar9 = FUN_0013db50();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011830c0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_part";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MULyric");
  }
  unaff_RDI[0xf] = 0;
  lVar9 = FUN_0013db50();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011831b0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_parts";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUScaleTuningSequence");
  }
  unaff_RDI[0x10] = 0;
  lVar9 = FUN_0013db50();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011832a0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_parts";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUScaleModeSequence");
  }
  unaff_RDI[0x11] = 0;
  lVar9 = FUN_0013db50();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01183390();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_parts";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUChordSequence");
  }
  unaff_RDI[0x12] = 0;
  lVar9 = FUN_0013db50();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01183480();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUScalePitchSystemSequence");
  }
  unaff_RDI[0x13] = 0;
  lVar9 = FUN_0013db50();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01183570();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUChordSequence");
  }
  *(undefined1 *)(unaff_RDI + 0x14) = 0;
  lVar9 = FUN_0013db50();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027a9b18 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027a9ae0 = FUN_0013db50();
        _DAT_027a9ad8 = "_didRequestCacheValidation";
        _DAT_027a9ae8 = 0;
        _DAT_027a9af0 = 0x6211;
        _DAT_027a9af8 = "bool";
        _DAT_027a9b00 = 0;
        uRam00000000027a9b08 = 0;
        _DAT_027a9b10 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xa1) = 0;
  lVar9 = FUN_0013db50();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027a9b60 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027a9b28 = FUN_0013db50();
        _DAT_027a9b20 = "_isPitchSystemCacheValid";
        _DAT_027a9b30 = 0;
        _DAT_027a9b38 = 0x6201;
        _DAT_027a9b40 = "bool";
        _DAT_027a9b48 = 0;
        uRam00000000027a9b50 = 0;
        _DAT_027a9b58 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xa2) = 0;
  lVar9 = FUN_0013db50();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027a9ba8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027a9b70 = FUN_0013db50();
        _DAT_027a9b68 = "_isDerivedKeySequenceCacheValid";
        _DAT_027a9b78 = 0;
        _DAT_027a9b80 = 0x6201;
        _DAT_027a9b88 = "bool";
        _DAT_027a9b90 = 0;
        uRam00000000027a9b98 = 0;
        _DAT_027a9ba0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


