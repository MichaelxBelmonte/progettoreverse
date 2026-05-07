// Function: FUN_016a5910
// Address: 016a5910
// Size: 691 bytes
// Class: MUAraDocumentController
// String references:
//   "bool"
//   "MUAraMusicalContext"
//   "MUAraAudioSource"
//   "MUAraAudioModification"
//   "_isUnstable"
//   "MUAraDocumentData"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016a5910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  *unaff_RDI = &DAT_025ee8e8;
  unaff_RDI[7] = 0;
  lVar9 = FUN_015388a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_016a5d30();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAraDocumentData");
  }
  unaff_RDI[8] = 0;
  lVar9 = FUN_015388a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_016a5e20();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAraMusicalContext");
  }
  unaff_RDI[9] = 0;
  lVar9 = FUN_015388a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_016a5f10();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAraAudioSource");
  }
  puVar11 = unaff_RDI + 10;
  unaff_RDI[10] = 0;
  lVar9 = FUN_015388a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_016a6000();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAraAudioModification",param_3,param_4,puVar11);
  }
  FUN_016a60f0();
  FUN_016a61d0();
  FUN_016a62b0();
  FUN_016a6390();
  *(undefined1 *)(unaff_RDI + 0xf) = 0;
  lVar9 = FUN_015388a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027ca790 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027ca758 = FUN_015388a0();
        _DAT_027ca750 = "_isUnstable";
        _DAT_027ca760 = 0;
        _DAT_027ca768 = 0x6210;
        _DAT_027ca770 = "bool";
        _DAT_027ca778 = 0;
        uRam00000000027ca780 = 0;
        _DAT_027ca788 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


