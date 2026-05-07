// Function: FUN_01677060
// Address: 01677060
// Size: 801 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "MUPart"
//   "_usesHostScales"
//   "_usesHostChords"
//   "GNInt"
//   "MUAraRegionSequencePersistentData"
//   "_orderIndex"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01677060(void)

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
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  char *pcVar10;
  
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
  *unaff_RDI = &DAT_025f7bb0;
  unaff_RDI[7] = 0;
  lVar9 = FUN_01676650();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01677450();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUPart");
  }
  *(undefined4 *)(unaff_RDI + 8) = 0;
  lVar9 = FUN_01676650();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027c86d0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027c8698 = FUN_01676650();
        _DAT_027c8690 = "_orderIndex";
        _DAT_027c86a0 = 0;
        _DAT_027c86a8 = 0x6910;
        _DAT_027c86b0 = "GNInt";
        _DAT_027c86b8 = 0;
        uRam00000000027c86c0 = 0;
        _DAT_027c86c8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_01677540();
  FUN_01677620();
  *(undefined1 *)(unaff_RDI + 0xb) = 0;
  lVar9 = FUN_01676650();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027c87a8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027c8770 = FUN_01676650();
        _DAT_027c8768 = "_usesHostScales";
        _DAT_027c8778 = 0;
        _DAT_027c8780 = 0x6210;
        _DAT_027c8788 = "bool";
        _DAT_027c8790 = 0;
        uRam00000000027c8798 = 0;
        _DAT_027c87a0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x59) = 0;
  lVar9 = FUN_01676650();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027c87f0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027c87b8 = FUN_01676650();
        _DAT_027c87b0 = "_usesHostChords";
        _DAT_027c87c0 = 0;
        _DAT_027c87c8 = 0x6210;
        _DAT_027c87d0 = "bool";
        _DAT_027c87d8 = 0;
        uRam00000000027c87e0 = 0;
        _DAT_027c87e8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xc] = 0;
  lVar9 = FUN_01676650();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01677700();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAraRegionSequencePersistentData");
  }
  return;
}


