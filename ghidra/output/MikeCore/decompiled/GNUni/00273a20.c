// Function: FUN_00273a20
// Address: 00273a20
// Size: 911 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "float"
//   "GNLabel"
//   "GNButton"
//   "GNSlider"
//   "_loLevelingPower"
//   "_hiLevelingPower"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00273a20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_002730b0();
  *unaff_RDI = &DAT_0250e158;
  unaff_RDI[0x11] = 0;
  lVar2 = FUN_00272d40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00273f60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSlider");
  }
  unaff_RDI[0x12] = 0;
  lVar2 = FUN_00272d40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00274050();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSlider");
  }
  puVar4 = unaff_RDI + 0x13;
  unaff_RDI[0x13] = 0;
  lVar2 = FUN_00272d40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00274140();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNLabel",param_3,param_4,puVar4);
  }
  unaff_RDI[0x14] = 0;
  lVar2 = FUN_00272d40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00274230();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNLabel");
  }
  *(undefined4 *)(unaff_RDI + 0x15) = 0;
  lVar2 = FUN_00272d40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f8788 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f8750 = FUN_00272d40();
        _DAT_026f8748 = "_loLevelingPower";
        _DAT_026f8758 = 0;
        _DAT_026f8760 = 0x6600;
        _DAT_026f8768 = "float";
        _DAT_026f8770 = 0;
        uRam00000000026f8778 = 0;
        _DAT_026f8780 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xac) = 0;
  lVar2 = FUN_00272d40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f87d0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f8798 = FUN_00272d40();
        _DAT_026f8790 = "_hiLevelingPower";
        _DAT_026f87a0 = 0;
        _DAT_026f87a8 = 0x6600;
        _DAT_026f87b0 = "float";
        _DAT_026f87b8 = 0;
        uRam00000000026f87c0 = 0;
        _DAT_026f87c8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x16] = 0;
  lVar2 = FUN_00272d40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00274320();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNButton");
  }
  FUN_00274410();
  FUN_002744f0();
  return;
}


