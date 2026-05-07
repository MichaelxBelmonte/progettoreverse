// Function: FUN_01707c30
// Address: 01707c30
// Size: 1575 bytes
// Class: GNFraction
// String references:
//   "bool"
//   "GNFraction"
//   "double"
//   "GNInt"
//   "_timeAnchor"
//   "MUBarDefinition"
//   "MUPulseDefinition"
//   "_pulseSegmentSize"
//   "_timeSegmentSize"
//   "_isDefaultDivisionTriplets"
//   "_defaultPulseMultiple"
//   "_defaultSubPulseDuration"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01707c30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  *unaff_RDI = &DAT_025eb898;
  unaff_RDI[7] = 0;
  lVar9 = FUN_01707870();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cbb48 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cbb10 = FUN_01707870();
        _DAT_027cbb08 = "_timeAnchor";
        _DAT_027cbb18 = 0;
        _DAT_027cbb20 = 0x6400;
        _DAT_027cbb28 = "double";
        _DAT_027cbb30 = 0;
        uRam00000000027cbb38 = 0;
        _DAT_027cbb40 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[8] = 0;
  lVar9 = FUN_01707870();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01708440();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUBarDefinition");
  }
  unaff_RDI[9] = 0;
  lVar9 = FUN_01707870();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01708530();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUPulseDefinition");
  }
  puVar11 = unaff_RDI + 10;
  unaff_RDI[10] = 0;
  lVar9 = FUN_01707870();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01708620();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUPulseDefinition",param_3,param_4,puVar11);
  }
  *(undefined4 *)(unaff_RDI + 0xb) = 0;
  lVar9 = FUN_01707870();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cbc68 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cbc30 = FUN_01707870();
        _DAT_027cbc28 = "_pulseSegmentSize";
        _DAT_027cbc38 = 0;
        _DAT_027cbc40 = 0x6900;
        _DAT_027cbc48 = "GNInt";
        _DAT_027cbc50 = 0;
        uRam00000000027cbc58 = 0;
        _DAT_027cbc60 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_01708710();
  FUN_017087f0();
  *(undefined4 *)(unaff_RDI + 0xe) = 0;
  lVar9 = FUN_01707870();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cbd40 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cbd08 = FUN_01707870();
        _DAT_027cbd00 = "_timeSegmentSize";
        _DAT_027cbd10 = 0;
        _DAT_027cbd18 = 0x6900;
        _DAT_027cbd20 = "GNInt";
        _DAT_027cbd28 = 0;
        uRam00000000027cbd30 = 0;
        _DAT_027cbd38 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_017088d0();
  FUN_017089b0();
  FUN_01708a90();
  *(undefined4 *)(unaff_RDI + 0x12) = 0;
  lVar9 = FUN_01707870();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01708b70();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x94) = 0;
  lVar9 = FUN_01707870();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cbeb8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cbe80 = FUN_01707870();
        _DAT_027cbe78 = "_isDefaultDivisionTriplets";
        _DAT_027cbe88 = 0;
        _DAT_027cbe90 = 0x6200;
        _DAT_027cbe98 = "bool";
        _DAT_027cbea0 = 0;
        uRam00000000027cbea8 = 0;
        _DAT_027cbeb0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x13] = 0x100000000;
  lVar9 = FUN_01707870();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cbf00 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cbec8 = FUN_01707870();
        _DAT_027cbec0 = "_defaultPulseMultiple";
        _DAT_027cbed0 = 0;
        _DAT_027cbed8 = 0x7100;
        _DAT_027cbee0 = "GNFraction";
        _DAT_027cbee8 = 0;
        uRam00000000027cbef0 = 0;
        _DAT_027cbef8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x14] = 0;
  lVar9 = FUN_01707870();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cbf48 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cbf10 = FUN_01707870();
        _DAT_027cbf08 = "_defaultSubPulseDuration";
        _DAT_027cbf18 = 0;
        _DAT_027cbf20 = 0x6400;
        _DAT_027cbf28 = "double";
        _DAT_027cbf30 = 0;
        uRam00000000027cbf38 = 0;
        _DAT_027cbf40 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


