// Function: FUN_011cbec0
// Address: 011cbec0
// Size: 724 bytes
// Class: MUElement
// String references:
//   "MUElement"
//   "MUTrack"
//   "double"
//   "GNInt"
//   "_performanceTime"
//   "_startMargin"
//   "_endMargin"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011cbec0(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_010f86d0();
  *unaff_RDI = &DAT_025dead0;
  *(undefined4 *)(unaff_RDI + 0xb) = 0;
  lVar2 = FUN_000fe4b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027b7f58 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027b7f20 = FUN_000fe4b0();
        _DAT_027b7f18 = "_startMargin";
        _DAT_027b7f28 = 0;
        _DAT_027b7f30 = 0x6900;
        _DAT_027b7f38 = "GNInt";
        _DAT_027b7f40 = 0;
        uRam00000000027b7f48 = 0;
        _DAT_027b7f50 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x5c) = 0;
  lVar2 = FUN_000fe4b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027b7fa0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027b7f68 = FUN_000fe4b0();
        _DAT_027b7f60 = "_endMargin";
        _DAT_027b7f70 = 0;
        _DAT_027b7f78 = 0x6900;
        _DAT_027b7f80 = "GNInt";
        _DAT_027b7f88 = 0;
        uRam00000000027b7f90 = 0;
        _DAT_027b7f98 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xc] = 0;
  lVar2 = FUN_000fe4b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027b7fe8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027b7fb0 = FUN_000fe4b0();
        _DAT_027b7fa8 = "_performanceTime";
        _DAT_027b7fb8 = 0;
        _DAT_027b7fc0 = 0x6400;
        _DAT_027b7fc8 = "double";
        _DAT_027b7fd0 = 0;
        uRam00000000027b7fd8 = 0;
        _DAT_027b7fe0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xd] = 0;
  lVar2 = FUN_000fe4b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011cc270();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTrack");
  }
  unaff_RDI[0xe] = 0;
  lVar2 = FUN_000fe4b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011cc360();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUElement");
  }
  return;
}


