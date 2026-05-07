// Function: FUN_0176d660
// Address: 0176d660
// Size: 1902 bytes
// Class: GNInt
// String references:
//   "bool"
//   "float"
//   "_isCyclic"
//   "GNInt"
//   "_tuning"
//   "_didRequestCacheValidation"
//   "MUScaleTuningSequence"
//   "MUScaleTuningInterval"
//   "_rootIndex"
//   "_scaleTuning"
//   "_tuningPitchAnchor"
//   "_westernStandardPitchIndexAnchor"
//   "_suggestedMinPitch"
//   "_suggestedMaxPitch"
//   "_suggestedMinPitchIndex"
//   "_suggestedMaxPitchIndex"
//   "MUScaleStretching"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0176d660(void)

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
  *unaff_RDI = &DAT_025ff2a8;
  *(undefined1 *)(unaff_RDI + 7) = 0;
  lVar9 = FUN_01a014c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cda78 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cda40 = FUN_01a014c0();
        _DAT_027cda38 = "_isCyclic";
        _DAT_027cda48 = 0;
        _DAT_027cda50 = 0x6200;
        _DAT_027cda58 = "bool";
        _DAT_027cda60 = 0;
        uRam00000000027cda68 = 0;
        _DAT_027cda70 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_0176df20();
  *(undefined4 *)(unaff_RDI + 9) = 0;
  lVar9 = FUN_01a014c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cdb08 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cdad0 = FUN_01a014c0();
        _DAT_027cdac8 = "_rootIndex";
        _DAT_027cdad8 = 0;
        _DAT_027cdae0 = 0x6900;
        _DAT_027cdae8 = "GNInt";
        _DAT_027cdaf0 = 0;
        uRam00000000027cdaf8 = 0;
        _DAT_027cdb00 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[10] = 0;
  lVar9 = FUN_01a014c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0176e000();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_tuning";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUScaleTuningInterval");
  }
  unaff_RDI[0xb] = 0;
  lVar9 = FUN_01a014c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0176e0f0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_scaleTuning";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUScaleTuningSequence");
  }
  *(undefined4 *)(unaff_RDI + 0xc) = 0;
  lVar9 = FUN_01a014c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cdbe0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cdba8 = FUN_01a014c0();
        _DAT_027cdba0 = "_tuningPitchAnchor";
        _DAT_027cdbb0 = 0;
        _DAT_027cdbb8 = 0x6600;
        _DAT_027cdbc0 = "float";
        _DAT_027cdbc8 = 0;
        uRam00000000027cdbd0 = 0;
        _DAT_027cdbd8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 100) = 0;
  lVar9 = FUN_01a014c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cdc28 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cdbf0 = FUN_01a014c0();
        _DAT_027cdbe8 = "_westernStandardPitchIndexAnchor";
        _DAT_027cdbf8 = 0;
        _DAT_027cdc00 = 0x6900;
        _DAT_027cdc08 = "GNInt";
        _DAT_027cdc10 = 0;
        uRam00000000027cdc18 = 0;
        _DAT_027cdc20 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xd] = 0;
  lVar9 = FUN_01a014c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0176e1e0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_tuning";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUScaleStretching");
  }
  *(undefined1 *)(unaff_RDI + 0xe) = 0;
  lVar9 = FUN_01a014c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cdcb8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cdc80 = FUN_01a014c0();
        _DAT_027cdc78 = "_didRequestCacheValidation";
        _DAT_027cdc88 = 0;
        _DAT_027cdc90 = 0x6211;
        _DAT_027cdc98 = "bool";
        _DAT_027cdca0 = 0;
        uRam00000000027cdca8 = 0;
        _DAT_027cdcb0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x74) = 0;
  lVar9 = FUN_01a014c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cdd00 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cdcc8 = FUN_01a014c0();
        _DAT_027cdcc0 = "_suggestedMinPitch";
        _DAT_027cdcd0 = 0;
        _DAT_027cdcd8 = 0x6601;
        _DAT_027cdce0 = "float";
        _DAT_027cdce8 = 0;
        uRam00000000027cdcf0 = 0;
        _DAT_027cdcf8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0xf) = 0;
  lVar9 = FUN_01a014c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cdd48 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cdd10 = FUN_01a014c0();
        _DAT_027cdd08 = "_suggestedMaxPitch";
        _DAT_027cdd18 = 0;
        _DAT_027cdd20 = 0x6601;
        _DAT_027cdd28 = "float";
        _DAT_027cdd30 = 0;
        uRam00000000027cdd38 = 0;
        _DAT_027cdd40 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x7c) = 0;
  lVar9 = FUN_01a014c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cdd90 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cdd58 = FUN_01a014c0();
        _DAT_027cdd50 = "_suggestedMinPitchIndex";
        _DAT_027cdd60 = 0;
        _DAT_027cdd68 = 0x6901;
        _DAT_027cdd70 = "GNInt";
        _DAT_027cdd78 = 0;
        uRam00000000027cdd80 = 0;
        _DAT_027cdd88 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x10) = 0;
  lVar9 = FUN_01a014c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cddd8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cdda0 = FUN_01a014c0();
        _DAT_027cdd98 = "_suggestedMaxPitchIndex";
        _DAT_027cdda8 = 0;
        _DAT_027cddb0 = 0x6901;
        _DAT_027cddb8 = "GNInt";
        _DAT_027cddc0 = 0;
        uRam00000000027cddc8 = 0;
        _DAT_027cddd0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


