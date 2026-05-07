// Function: FUN_01162ae0
// Address: 01162ae0
// Size: 1043 bytes
// Class: GNInt
// String references:
//   "bool"
//   "GNInt"
//   "MULoopLibrary"
//   "_coverRows"
//   "_orderindex"
//   "MULoopCover"
//   "_coverRow"
//   "_maxCovers"
//   "_seeAll"
//   "_randomizeOrder"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01162ae0(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_01150e50();
  *unaff_RDI = &DAT_02611170;
  FUN_01162fe0();
  unaff_RDI[9] = 0;
  lVar2 = FUN_011627b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011630c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_coverRow";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopCover");
  }
  unaff_RDI[10] = 0;
  lVar2 = FUN_011627b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011631b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopCover");
  }
  unaff_RDI[0xb] = 0;
  lVar2 = FUN_011627b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011632a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_coverRows";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopLibrary");
  }
  *(undefined4 *)(unaff_RDI + 0xc) = 0;
  lVar2 = FUN_011627b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027a3b18 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027a3ae0 = FUN_011627b0();
        _DAT_027a3ad8 = "_orderindex";
        _DAT_027a3ae8 = 0;
        _DAT_027a3af0 = 0x6900;
        _DAT_027a3af8 = "GNInt";
        _DAT_027a3b00 = 0;
        uRam00000000027a3b08 = 0;
        _DAT_027a3b10 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 100) = 0;
  lVar2 = FUN_011627b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01163390();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0xd) = 0;
  lVar2 = FUN_011627b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027a3c38 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027a3c00 = FUN_011627b0();
        _DAT_027a3bf8 = "_maxCovers";
        _DAT_027a3c08 = 0;
        _DAT_027a3c10 = 0x6900;
        _DAT_027a3c18 = "GNInt";
        _DAT_027a3c20 = 0;
        uRam00000000027a3c28 = 0;
        _DAT_027a3c30 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x6c) = 0;
  lVar2 = FUN_011627b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027a3c80 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027a3c48 = FUN_011627b0();
        _DAT_027a3c40 = "_seeAll";
        _DAT_027a3c50 = 0;
        _DAT_027a3c58 = 0x6200;
        _DAT_027a3c60 = "bool";
        _DAT_027a3c68 = 0;
        uRam00000000027a3c70 = 0;
        _DAT_027a3c78 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x6d) = 0;
  lVar2 = FUN_011627b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027a3cc8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027a3c90 = FUN_011627b0();
        _DAT_027a3c88 = "_randomizeOrder";
        _DAT_027a3c98 = 0;
        _DAT_027a3ca0 = 0x6200;
        _DAT_027a3ca8 = "bool";
        _DAT_027a3cb0 = 0;
        uRam00000000027a3cb8 = 0;
        _DAT_027a3cc0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


