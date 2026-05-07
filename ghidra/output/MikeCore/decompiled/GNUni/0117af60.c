// Function: FUN_0117af60
// Address: 0117af60
// Size: 1432 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "MUNote"
//   "GNInt"
//   "MUPartMapping"
//   "MUNoteMappingGroup"
//   "MUNoteMapping"
//   "_sourcePitchIndexCache"
//   "_noteMappings"
//   "MUNoteMappingLine"
//   "_masterMapping"
//   "_slaveMappings"
//   "_noteDirectionMask"
//   "MUNoteDirectionMask"
//   "_picksNextChord"
//   "_isExcludedFromVoicing"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0117af60(void)

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
  *unaff_RDI = &DAT_02604e60;
  *(undefined4 *)(unaff_RDI + 7) = 0;
  lVar9 = FUN_0117ac20();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027a7ff0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027a7fb8 = FUN_0117ac20();
        _DAT_027a7fb0 = "_sourcePitchIndexCache";
        _DAT_027a7fc0 = 0;
        _DAT_027a7fc8 = 0x6901;
        _DAT_027a7fd0 = "GNInt";
        _DAT_027a7fd8 = 0;
        uRam00000000027a7fe0 = 0;
        _DAT_027a7fe8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[8] = 0;
  lVar9 = FUN_0117ac20();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0117b610();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUNote");
  }
  unaff_RDI[9] = 0;
  lVar9 = FUN_0117ac20();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0117b700();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_noteMappings";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUPartMapping");
  }
  unaff_RDI[10] = 0;
  lVar9 = FUN_0117ac20();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0117b7f0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_noteMappings";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUNoteMappingGroup");
  }
  unaff_RDI[0xb] = 0;
  lVar9 = FUN_0117ac20();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0117b8e0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_noteMappings";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUNoteMappingLine");
  }
  unaff_RDI[0xc] = 0;
  lVar9 = FUN_0117ac20();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0117b9d0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_slaveMappings";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUNoteMapping");
  }
  unaff_RDI[0xd] = 0;
  lVar9 = FUN_0117ac20();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0117bac0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_masterMapping";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUNoteMapping");
  }
  *(undefined4 *)(unaff_RDI + 0xe) = 0;
  lVar9 = FUN_0117ac20();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0117bbb0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x74) = 0;
  lVar9 = FUN_0117ac20();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027a82b8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027a8280 = FUN_0117ac20();
        _DAT_027a8278 = "_noteDirectionMask";
        _DAT_027a8288 = 0;
        _DAT_027a8290 = 0x6900;
        _DAT_027a8298 = "MUNoteDirectionMask";
        _DAT_027a82a0 = 0;
        uRam00000000027a82a8 = 0;
        _DAT_027a82b0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0xf) = 0;
  lVar9 = FUN_0117ac20();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0117bd20();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x7c) = 0;
  lVar9 = FUN_0117ac20();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027a83c0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027a8388 = FUN_0117ac20();
        _DAT_027a8380 = "_picksNextChord";
        _DAT_027a8390 = 0;
        _DAT_027a8398 = 0x6200;
        _DAT_027a83a0 = "bool";
        _DAT_027a83a8 = 0;
        uRam00000000027a83b0 = 0;
        _DAT_027a83b8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x7d) = 0;
  lVar9 = FUN_0117ac20();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027a8408 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027a83d0 = FUN_0117ac20();
        _DAT_027a83c8 = "_isExcludedFromVoicing";
        _DAT_027a83d8 = 0;
        _DAT_027a83e0 = 0x6200;
        _DAT_027a83e8 = "bool";
        _DAT_027a83f0 = 0;
        uRam00000000027a83f8 = 0;
        _DAT_027a8400 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x10] = 0;
  lVar9 = FUN_0117ac20();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0117bea0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUNoteMapping");
  }
  return;
}


