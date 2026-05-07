// Function: FUN_0056f450
// Address: 0056f450
// Size: 569 bytes
// Class: GNCelemonyAccountClient
// String references:
//   "bool"
//   "GNCelemonyAccountClient"
//   "GNTimeInterval"
//   "_versionIsUpToDate"
//   "_timeout"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056f450(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_00044470();
  *unaff_RDI = &DAT_0257d578;
  unaff_RDI[2] = &DAT_0257d930;
  unaff_RDI[3] = &DAT_0257d968;
  unaff_RDI[0xc] = 0;
  lVar2 = FUN_000982d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0056f7a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNCelemonyAccountClient");
  }
  *(undefined1 *)(unaff_RDI + 0xd) = 0;
  lVar2 = FUN_000982d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0270e368 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0270e330 = FUN_000982d0();
        _DAT_0270e328 = "_versionIsUpToDate";
        _DAT_0270e338 = 0;
        _DAT_0270e340 = 0x6200;
        _DAT_0270e348 = "bool";
        _DAT_0270e350 = 0;
        uRam000000000270e358 = 0;
        _DAT_0270e360 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_0056f890();
  FUN_0056f970();
  FUN_0056fa50();
  unaff_RDI[0x11] = 0;
  lVar2 = FUN_000982d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0270e488 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0270e450 = FUN_000982d0();
        _DAT_0270e448 = "_timeout";
        _DAT_0270e458 = 0;
        _DAT_0270e460 = 0x6400;
        _DAT_0270e468 = "GNTimeInterval";
        _DAT_0270e470 = 0;
        uRam000000000270e478 = 0;
        _DAT_0270e480 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


