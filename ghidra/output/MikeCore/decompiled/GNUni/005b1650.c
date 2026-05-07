// Function: FUN_005b1650
// Address: 005b1650
// Size: 585 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "GNUndoStackFrame"
//   "GNViewController"
//   "GNDisplayGroup"
//   "_documentController"
//   "GNUndoManager"
//   "_hadChanges"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b1650(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_00006550();
  *unaff_RDI = &DAT_0267fa98;
  unaff_RDI[2] = 0;
  lVar2 = FUN_000838a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b19a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_documentController";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNViewController");
  }
  unaff_RDI[3] = 0;
  lVar2 = FUN_000838a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b1a90();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNUndoManager");
  }
  unaff_RDI[4] = 0;
  lVar2 = FUN_000838a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b1b80();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNDisplayGroup");
  }
  unaff_RDI[5] = 0;
  lVar2 = FUN_000838a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b1c70();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNUndoStackFrame");
  }
  unaff_RDI[6] = *(undefined8 *)(unaff_RSI + 0x30);
  *(undefined1 *)(unaff_RDI + 7) = 0;
  lVar2 = FUN_000838a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02718730 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027186f8 = FUN_000838a0();
        _DAT_027186f0 = "_hadChanges";
        _DAT_02718700 = 0;
        _DAT_02718708 = 0x6201;
        _DAT_02718710 = "bool";
        _DAT_02718718 = 0;
        uRam0000000002718720 = 0;
        _DAT_02718728 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_005b1d60();
  return;
}


