// Function: FUN_017964f0
// Address: 017964f0
// Size: 1954 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "MUTimeline"
//   "float"
//   "GNFraction"
//   "GNInt"
//   "_timeSliceCount"
//   "_pitchOffset"
//   "MUScalePitchSystemSequence"
//   "_beatDivision"
//   "_beatCount"
//   "_allStartBeat"
//   "_isBlues"
//   "_bluesRoot"
//   "_considersBlues"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017964f0(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_026021a8;
  FUN_01114080();
  FUN_011143b0();
  *unaff_RDI = &DAT_0260c778;
  unaff_RDI[4] = 0;
  lVar2 = FUN_01796330();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01796fb0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTimeline");
  }
  unaff_RDI[5] = 0;
  lVar2 = FUN_01796330();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_017970a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUScalePitchSystemSequence");
  }
  *(undefined4 *)(unaff_RDI + 6) = 0;
  lVar2 = FUN_01796330();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027cf6a8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027cf670 = FUN_01796330();
        _DAT_027cf668 = "_beatDivision";
        _DAT_027cf678 = 0;
        _DAT_027cf680 = 0x6900;
        _DAT_027cf688 = "GNInt";
        _DAT_027cf690 = 0;
        uRam00000000027cf698 = 0;
        _DAT_027cf6a0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x34) = 0;
  lVar2 = FUN_01796330();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027cf6f0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027cf6b8 = FUN_01796330();
        _DAT_027cf6b0 = "_beatCount";
        _DAT_027cf6c0 = 0;
        _DAT_027cf6c8 = 0x6900;
        _DAT_027cf6d0 = "GNInt";
        _DAT_027cf6d8 = 0;
        uRam00000000027cf6e0 = 0;
        _DAT_027cf6e8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 7) = 0;
  lVar2 = FUN_01796330();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027cf738 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027cf700 = FUN_01796330();
        _DAT_027cf6f8 = "_timeSliceCount";
        _DAT_027cf708 = 0;
        _DAT_027cf710 = 0x6900;
        _DAT_027cf718 = "GNInt";
        _DAT_027cf720 = 0;
        uRam00000000027cf728 = 0;
        _DAT_027cf730 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined8 *)((longlong)unaff_RDI + 0x3c) = 0x100000000;
  lVar2 = FUN_01796330();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027cf780 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027cf748 = FUN_01796330();
        _DAT_027cf740 = "_allStartBeat";
        _DAT_027cf750 = 0;
        _DAT_027cf758 = 0x7100;
        _DAT_027cf760 = "GNFraction";
        _DAT_027cf768 = 0;
        uRam00000000027cf770 = 0;
        _DAT_027cf778 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x44) = 0;
  lVar2 = FUN_01796330();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027cf7c8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027cf790 = FUN_01796330();
        _DAT_027cf788 = "_pitchOffset";
        _DAT_027cf798 = 0;
        _DAT_027cf7a0 = 0x6600;
        _DAT_027cf7a8 = "float";
        _DAT_027cf7b0 = 0;
        uRam00000000027cf7b8 = 0;
        _DAT_027cf7c0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_01797190();
  FUN_01797270();
  FUN_01797350();
  FUN_01797430();
  FUN_01797510();
  FUN_017975f0();
  *(undefined1 *)(unaff_RDI + 0xf) = 0;
  lVar2 = FUN_01796330();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027cf9c0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027cf988 = FUN_01796330();
        _DAT_027cf980 = "_isBlues";
        _DAT_027cf990 = 0;
        _DAT_027cf998 = 0x6200;
        _DAT_027cf9a0 = "bool";
        _DAT_027cf9a8 = 0;
        uRam00000000027cf9b0 = 0;
        _DAT_027cf9b8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x7c) = 0;
  lVar2 = FUN_01796330();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027cfa08 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027cf9d0 = FUN_01796330();
        _DAT_027cf9c8 = "_bluesRoot";
        _DAT_027cf9d8 = 0;
        _DAT_027cf9e0 = 0x6900;
        _DAT_027cf9e8 = "GNInt";
        _DAT_027cf9f0 = 0;
        uRam00000000027cf9f8 = 0;
        _DAT_027cfa00 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0x10) = 0;
  lVar2 = FUN_01796330();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027cfa50 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027cfa18 = FUN_01796330();
        _DAT_027cfa10 = "_considersBlues";
        _DAT_027cfa20 = 0;
        _DAT_027cfa28 = 0x6200;
        _DAT_027cfa30 = "bool";
        _DAT_027cfa38 = 0;
        uRam00000000027cfa40 = 0;
        _DAT_027cfa48 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_017976d0();
  FUN_017977b0();
  FUN_01797890();
  FUN_01797970();
  FUN_01797a50();
  FUN_01797b30();
  FUN_01797c10();
  FUN_01797cf0();
  FUN_01797dd0();
  return;
}


