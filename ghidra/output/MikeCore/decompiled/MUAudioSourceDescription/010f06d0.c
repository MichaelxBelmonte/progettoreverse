// Function: FUN_010f06d0
// Address: 010f06d0
// Size: 1637 bytes
// Class: MUAudioSourceDescription
// String references:
//   "bool"
//   "GNUni"
//   "MUTimeline"
//   "_useAutomaticDetection"
//   "_percussiveSeparation"
//   "_hasDistinctAttacks"
//   "_findSibilantPointsAutomatically"
//   "_isPreliminary"
//   "_isTonalicOnly"
//   "_allowAutomaticPolyphonicDetection"
//   "MUAudioSourceDescriptionRange"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010f06d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  *unaff_RDI = &DAT_025e0530;
  FUN_010f0e90();
  FUN_010f0f70();
  FUN_010f1050();
  *(undefined4 *)(unaff_RDI + 10) = 0;
  lVar9 = FUN_010f03e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_010f1130();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x54) = 0;
  lVar9 = FUN_010f03e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278d030 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278cff8 = FUN_010f03e0();
        _DAT_0278cff0 = "_useAutomaticDetection";
        _DAT_0278d000 = 0;
        _DAT_0278d008 = 0x6200;
        _DAT_0278d010 = "bool";
        _DAT_0278d018 = 0;
        uRam000000000278d020 = 0;
        _DAT_0278d028 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x55) = 0;
  lVar9 = FUN_010f03e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278d078 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278d040 = FUN_010f03e0();
        _DAT_0278d038 = "_percussiveSeparation";
        _DAT_0278d048 = 0;
        _DAT_0278d050 = 0x6200;
        _DAT_0278d058 = "bool";
        _DAT_0278d060 = 0;
        uRam000000000278d068 = 0;
        _DAT_0278d070 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x56) = 0;
  lVar9 = FUN_010f03e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278d0c0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278d088 = FUN_010f03e0();
        _DAT_0278d080 = "_hasDistinctAttacks";
        _DAT_0278d090 = 0;
        _DAT_0278d098 = 0x6200;
        _DAT_0278d0a0 = "bool";
        _DAT_0278d0a8 = 0;
        uRam000000000278d0b0 = 0;
        _DAT_0278d0b8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x57) = 0;
  lVar9 = FUN_010f03e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278d108 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278d0d0 = FUN_010f03e0();
        _DAT_0278d0c8 = "_findSibilantPointsAutomatically";
        _DAT_0278d0d8 = 0;
        _DAT_0278d0e0 = 0x6200;
        _DAT_0278d0e8 = "bool";
        _DAT_0278d0f0 = 0;
        uRam000000000278d0f8 = 0;
        _DAT_0278d100 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0xb) = 0;
  lVar9 = FUN_010f03e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278d150 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278d118 = FUN_010f03e0();
        _DAT_0278d110 = "_isPreliminary";
        _DAT_0278d120 = 0;
        _DAT_0278d128 = 0x6200;
        _DAT_0278d130 = "bool";
        _DAT_0278d138 = 0;
        uRam000000000278d140 = 0;
        _DAT_0278d148 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x59) = 0;
  lVar9 = FUN_010f03e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278d198 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278d160 = FUN_010f03e0();
        _DAT_0278d158 = "_isTonalicOnly";
        _DAT_0278d168 = 0;
        _DAT_0278d170 = 0x6200;
        _DAT_0278d178 = "bool";
        _DAT_0278d180 = 0;
        uRam000000000278d188 = 0;
        _DAT_0278d190 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x5a) = 0;
  lVar9 = FUN_010f03e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278d1e0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278d1a8 = FUN_010f03e0();
        _DAT_0278d1a0 = "_allowAutomaticPolyphonicDetection";
        _DAT_0278d1b0 = 0;
        _DAT_0278d1b8 = 0x6200;
        _DAT_0278d1c0 = "bool";
        _DAT_0278d1c8 = 0;
        uRam000000000278d1d0 = 0;
        _DAT_0278d1d8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  puVar11 = unaff_RDI + 0xc;
  unaff_RDI[0xc] = 0;
  lVar9 = FUN_010f03e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_010f12c0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTimeline",param_3,param_4,puVar11);
  }
  unaff_RDI[0xd] = 0;
  lVar9 = FUN_010f03e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_010f13b0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceDescriptionRange");
  }
  unaff_RDI[0xe] = 0;
  lVar9 = FUN_010f03e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_010f14a0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceDescriptionRange");
  }
  return;
}


