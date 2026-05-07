// Function: FUN_008401e0
// Address: 008401e0
// Size: 588 bytes
// Class: GNBrowserDataField
// String references:
//   "float"
//   "GNBrowserDataField"
//   "_playingItemProgress"
//   "_canStartPlayback"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008401e0(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_0083cc40();
  *unaff_RDI = &DAT_026415d0;
  unaff_RDI[2] = &DAT_02641f80;
  *(undefined4 *)((longlong)unaff_RDI + 0x194) = 0;
  lVar2 = FUN_0083c8c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02737570 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02737538 = FUN_0083c8c0();
        _DAT_02737530 = "_playingItemProgress";
        _DAT_02737540 = 0;
        _DAT_02737548 = 0x6600;
        _DAT_02737550 = "float";
        _DAT_02737558 = 0;
        uRam0000000002737560 = 0;
        _DAT_02737568 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x33) = 0;
  lVar2 = FUN_0083c8c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027375b8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02737580 = FUN_0083c8c0();
        _DAT_02737578 = "_canStartPlayback";
        _DAT_02737588 = 0;
        _DAT_02737590 = 0x6600;
        _DAT_02737598 = "float";
        _DAT_027375a0 = 0;
        uRam00000000027375a8 = 0;
        _DAT_027375b0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x34] = 0;
  lVar2 = FUN_0083c8c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_008404b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNBrowserDataField");
  }
  unaff_RDI[0x35] = 0;
  lVar2 = FUN_0083c8c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_008405a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNBrowserDataField");
  }
  return;
}


