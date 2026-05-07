// Function: FUN_005ba230
// Address: 005ba230
// Size: 790 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "GNSlider"
//   "_isPressed"
//   "_showsPluginWindowResizeView"
//   "MUProgressView"
//   "_progressViewStart"
//   "double"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ba230(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_001e9800();
  *unaff_RDI = &DAT_02623330;
  unaff_RDI[2] = &DAT_02623ce8;
  *(undefined1 *)(unaff_RDI + 0x38) = 0;
  lVar2 = FUN_00074a70();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02719ae0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02719aa8 = FUN_00074a70();
        _DAT_02719aa0 = "_isPressed";
        _DAT_02719ab0 = 0;
        _DAT_02719ab8 = 0x6200;
        _DAT_02719ac0 = "bool";
        _DAT_02719ac8 = 0;
        uRam0000000002719ad0 = 0;
        _DAT_02719ad8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x1c1) = 0;
  lVar2 = FUN_00074a70();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02719b28 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02719af0 = FUN_00074a70();
        _DAT_02719ae8 = "_showsPluginWindowResizeView";
        _DAT_02719af8 = 0;
        _DAT_02719b00 = 0x6200;
        _DAT_02719b08 = "bool";
        _DAT_02719b10 = 0;
        uRam0000000002719b18 = 0;
        _DAT_02719b20 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x39] = 0;
  lVar2 = FUN_00074a70();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005ba620();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUProgressView");
  }
  unaff_RDI[0x3a] = 0;
  lVar2 = FUN_00074a70();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005ba710();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSlider");
  }
  FUN_005ba800();
  unaff_RDI[0x3c] = 0;
  lVar2 = FUN_00074a70();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02719c48 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02719c10 = FUN_00074a70();
        _DAT_02719c08 = "_progressViewStart";
        _DAT_02719c18 = 0;
        _DAT_02719c20 = 0x6400;
        _DAT_02719c28 = "double";
        _DAT_02719c30 = 0;
        uRam0000000002719c38 = 0;
        _DAT_02719c40 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


