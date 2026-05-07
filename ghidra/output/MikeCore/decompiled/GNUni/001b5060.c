// Function: FUN_001b5060
// Address: 001b5060
// Size: 806 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "GNObject"
//   "GNTableViewDelegate"
//   "GNScrollView"
//   "GNTableView"
//   "_columns"
//   "GNCoord"
//   "GNTableViewDataSource"
//   "GNBrowser"
//   "_width"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001b5060(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_00006550();
  unaff_RDI[2] = &DAT_02698528;
  if (DAT_026e5c00 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fda90 = "GNTableViewDataSource";
      DAT_026fdaa0 = 0;
      _DAT_026fda98 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  unaff_RDI[3] = &DAT_02698580;
  if (DAT_026e5500 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026d5a10 = "GNTableViewDelegate";
      DAT_026d5a20 = 0;
      _DAT_026d5a18 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_02676898;
  unaff_RDI[2] = &DAT_02676d40;
  unaff_RDI[3] = &DAT_02676d98;
  unaff_RDI[4] = 0;
  lVar2 = FUN_001b4e40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001b5450();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  unaff_RDI[5] = 0;
  lVar2 = FUN_001b4e40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001b5540();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTableView");
  }
  unaff_RDI[6] = 0;
  lVar2 = FUN_001b4e40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001b5630();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNScrollView");
  }
  unaff_RDI[7] = 0;
  lVar2 = FUN_001b4e40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001b5720();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_columns";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNBrowser");
  }
  *(undefined4 *)(unaff_RDI + 8) = 0;
  lVar2 = FUN_001b4e40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027f5d40 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027f5d08 = FUN_001b4e40();
        _DAT_027f5d00 = "_width";
        _DAT_027f5d10 = 0;
        _DAT_027f5d18 = 0x6600;
        _DAT_027f5d20 = "GNCoord";
        _DAT_027f5d28 = 0;
        uRam00000000027f5d30 = 0;
        _DAT_027f5d38 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


