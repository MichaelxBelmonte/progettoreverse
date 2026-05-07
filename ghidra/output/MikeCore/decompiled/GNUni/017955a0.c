// Function: FUN_017955a0
// Address: 017955a0
// Size: 823 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "GNViewController"
//   "MUTimeline"
//   "MUPart"
//   "MUScalePitchSystem"
//   "MUPerformance"
//   "MUChordRootAnalyzerEntry"
//   "_calcsAlternateChords"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017955a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_026021a8;
  FUN_01114080();
  FUN_011143b0();
  *unaff_RDI = &DAT_02602550;
  puVar4 = unaff_RDI + 4;
  unaff_RDI[4] = 0;
  lVar2 = FUN_01795180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01795af0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTimeline",param_3,param_4,puVar4);
  }
  unaff_RDI[5] = 0;
  lVar2 = FUN_01795180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01795be0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUScalePitchSystem");
  }
  unaff_RDI[6] = 0;
  lVar2 = FUN_01795180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01795cd0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUPart");
  }
  unaff_RDI[7] = 0;
  lVar2 = FUN_01795180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01795dc0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUPerformance");
  }
  *(undefined1 *)(unaff_RDI + 8) = 0;
  lVar2 = FUN_01795180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027cf398 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027cf360 = FUN_01795180();
        _DAT_027cf358 = "_calcsAlternateChords";
        _DAT_027cf368 = 0;
        _DAT_027cf370 = 0x6200;
        _DAT_027cf378 = "bool";
        _DAT_027cf380 = 0;
        uRam00000000027cf388 = 0;
        _DAT_027cf390 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_01795eb0();
  FUN_01795f90();
  unaff_RDI[0xb] = 0;
  lVar2 = FUN_01795180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01796070();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUChordRootAnalyzerEntry");
  }
  unaff_RDI[0xc] = 0;
  lVar2 = FUN_01795180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01796160();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNViewController");
  }
  FUN_01796250();
  return;
}


