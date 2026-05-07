// Function: FUN_011bf720
// Address: 011bf720
// Size: 1217 bytes
// Class: MUElementAnalyzer
// String references:
//   "bool"
//   "GNUni"
//   "MUTimeline"
//   "float"
//   "MUElementAnalyzer"
//   "double"
//   "_isPreliminary"
//   "MUTempoAnalyzerEvent"
//   "_sourceDuration"
//   "_maxUsedPeriod"
//   "_elementsAreTonal"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011bf720(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_00044470();
  *unaff_RDI = &DAT_025f2cd0;
  unaff_RDI[2] = &DAT_025f3088;
  unaff_RDI[3] = &DAT_025f30c0;
  unaff_RDI[0xc] = 0;
  lVar2 = FUN_011bf510();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011bfda0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTempoAnalyzerEvent");
  }
  unaff_RDI[0xd] = 0;
  lVar2 = FUN_011bf510();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011bfe90();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTempoAnalyzerEvent");
  }
  unaff_RDI[0xe] = 0;
  lVar2 = FUN_011bf510();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011bff80();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTimeline");
  }
  unaff_RDI[0xf] = 0;
  lVar2 = FUN_011bf510();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011c0070();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTimeline");
  }
  unaff_RDI[0x10] = 0;
  lVar2 = FUN_011bf510();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011c0160();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUElementAnalyzer");
  }
  unaff_RDI[0x11] = 0;
  lVar2 = FUN_011bf510();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027b5d50 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027b5d18 = FUN_011bf510();
        _DAT_027b5d10 = "_sourceDuration";
        _DAT_027b5d20 = 0;
        _DAT_027b5d28 = 0x6400;
        _DAT_027b5d30 = "double";
        _DAT_027b5d38 = 0;
        uRam00000000027b5d40 = 0;
        _DAT_027b5d48 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x12) = 0;
  lVar2 = FUN_011bf510();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027b5d98 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027b5d60 = FUN_011bf510();
        _DAT_027b5d58 = "_maxUsedPeriod";
        _DAT_027b5d68 = 0;
        _DAT_027b5d70 = 0x6600;
        _DAT_027b5d78 = "float";
        _DAT_027b5d80 = 0;
        uRam00000000027b5d88 = 0;
        _DAT_027b5d90 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x94) = 0;
  lVar2 = FUN_011bf510();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027b5de0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027b5da8 = FUN_011bf510();
        _DAT_027b5da0 = "_elementsAreTonal";
        _DAT_027b5db0 = 0;
        _DAT_027b5db8 = 0x6200;
        _DAT_027b5dc0 = "bool";
        _DAT_027b5dc8 = 0;
        uRam00000000027b5dd0 = 0;
        _DAT_027b5dd8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x95) = 0;
  lVar2 = FUN_011bf510();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027b5e28 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027b5df0 = FUN_011bf510();
        _DAT_027b5de8 = "_isPreliminary";
        _DAT_027b5df8 = 0;
        _DAT_027b5e00 = 0x6200;
        _DAT_027b5e08 = "bool";
        _DAT_027b5e10 = 0;
        uRam00000000027b5e18 = 0;
        _DAT_027b5e20 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


