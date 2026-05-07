// Function: FUN_008469f0
// Address: 008469f0
// Size: 592 bytes
// Class: MUScaleBrowser
// String references:
//   "bool"
//   "MUScaleBrowser"
//   "MUScaleBrowserCtrl"
//   "_isScaleTuningEditable"
//   "_isScaleModeEditable"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008469f0(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_0005aa20();
  *unaff_RDI = &DAT_026443d8;
  FUN_008429d0();
  *unaff_RDI = &DAT_02647150;
  unaff_RDI[0xf] = 0;
  lVar2 = FUN_008467f0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00846ce0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUScaleBrowser");
  }
  unaff_RDI[0x10] = 0;
  lVar2 = FUN_008467f0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00846dd0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUScaleBrowserCtrl");
  }
  *(undefined1 *)(unaff_RDI + 0x11) = 0;
  lVar2 = FUN_008467f0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02738698 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02738660 = FUN_008467f0();
        _DAT_02738658 = "_isScaleTuningEditable";
        _DAT_02738668 = 0;
        _DAT_02738670 = 0x6200;
        _DAT_02738678 = "bool";
        _DAT_02738680 = 0;
        uRam0000000002738688 = 0;
        _DAT_02738690 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x89) = 0;
  lVar2 = FUN_008467f0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027386e0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027386a8 = FUN_008467f0();
        _DAT_027386a0 = "_isScaleModeEditable";
        _DAT_027386b0 = 0;
        _DAT_027386b8 = 0x6200;
        _DAT_027386c0 = "bool";
        _DAT_027386c8 = 0;
        uRam00000000027386d0 = 0;
        _DAT_027386d8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


