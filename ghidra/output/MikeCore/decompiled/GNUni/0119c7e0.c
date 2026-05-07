// Function: FUN_0119c7e0
// Address: 0119c7e0
// Size: 909 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "GNFraction"
//   "MUTempoRegion"
//   "MUQuarterTimeline"
//   "MUBarTimeline"
//   "_quartersPerAnchor"
//   "MUQuarterAnchor"
//   "_isUndefinedAtStart"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0119c7e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  *unaff_RDI = &DAT_025fa1b8;
  *(undefined4 *)(unaff_RDI + 7) = 0;
  lVar9 = FUN_0119c4c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0119ccf0();
    FUN_00e87980();
  }
  FUN_0119ce60();
  FUN_0119cf40();
  unaff_RDI[10] = 0;
  lVar9 = FUN_0119c4c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0119d020();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUQuarterTimeline");
  }
  puVar11 = unaff_RDI + 0xb;
  unaff_RDI[0xb] = 0;
  lVar9 = FUN_0119c4c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0119d110();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUBarTimeline",param_3,param_4,puVar11);
  }
  unaff_RDI[0xc] = 0;
  lVar9 = FUN_0119c4c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0119d200();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTempoRegion");
  }
  unaff_RDI[0xd] = 0x100000000;
  lVar9 = FUN_0119c4c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027adcd8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027adca0 = FUN_0119c4c0();
        _DAT_027adc98 = "_quartersPerAnchor";
        _DAT_027adca8 = 0;
        _DAT_027adcb0 = 0x7100;
        _DAT_027adcb8 = "GNFraction";
        _DAT_027adcc0 = 0;
        uRam00000000027adcc8 = 0;
        _DAT_027adcd0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_0119d2f0();
  unaff_RDI[0xf] = 0;
  lVar9 = FUN_0119c4c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0119d3d0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUQuarterAnchor");
  }
  *(undefined1 *)(unaff_RDI + 0x10) = 0;
  lVar9 = FUN_0119c4c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027addb0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027add78 = FUN_0119c4c0();
        _DAT_027add70 = "_isUndefinedAtStart";
        _DAT_027add80 = 0;
        _DAT_027add88 = 0x6200;
        _DAT_027add90 = "bool";
        _DAT_027add98 = 0;
        uRam00000000027adda0 = 0;
        _DAT_027adda8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_0119d4c0();
  return;
}


