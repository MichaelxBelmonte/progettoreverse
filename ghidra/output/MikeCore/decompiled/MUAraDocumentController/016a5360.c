// Function: FUN_016a5360
// Address: 016a5360
// Size: 612 bytes
// Class: MUAraDocumentController
// String references:
//   "bool"
//   "MUAraDocumentController"
//   "MUAraMusicalContextPersistentData"
//   "_archiveIsPotentiallyUnstable"
//   "_mustSyncPitchSystemsAfterImportingPreM41Archive"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016a5360(void)

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
  *unaff_RDI = &DAT_025f7f28;
  unaff_RDI[7] = 0;
  lVar9 = FUN_016be450();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_016a5650();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAraDocumentController");
  }
  unaff_RDI[8] = 0;
  lVar9 = FUN_016be450();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_016a5740();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAraMusicalContextPersistentData");
  }
  FUN_016a5830();
  *(undefined1 *)(unaff_RDI + 10) = 0;
  lVar9 = FUN_016be450();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027ca4c0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027ca488 = FUN_016be450();
        _DAT_027ca480 = "_archiveIsPotentiallyUnstable";
        _DAT_027ca490 = 0;
        _DAT_027ca498 = 0x6210;
        _DAT_027ca4a0 = "bool";
        _DAT_027ca4a8 = 0;
        uRam00000000027ca4b0 = 0;
        _DAT_027ca4b8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x51) = 0;
  lVar9 = FUN_016be450();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027ca508 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027ca4d0 = FUN_016be450();
        _DAT_027ca4c8 = "_mustSyncPitchSystemsAfterImportingPreM41Archive";
        _DAT_027ca4d8 = 0;
        _DAT_027ca4e0 = 0x6211;
        _DAT_027ca4e8 = "bool";
        _DAT_027ca4f0 = 0;
        uRam00000000027ca4f8 = 0;
        _DAT_027ca500 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


