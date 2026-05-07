// Function: FUN_00193b60
// Address: 00193b60
// Size: 934 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "GNTimer"
//   "GNObject"
//   "GNCoord"
//   "_showsSubitemIndicatorForEmptyEntries"
//   "_autoexpandingRow"
//   "_indentationPerLevel"
//   "GNInt"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00193b60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_00194050();
  *unaff_RDI = &DAT_026af340;
  unaff_RDI[2] = &DAT_026afdc0;
  FUN_0019e680();
  FUN_0019e850();
  unaff_RDI[0x56] = 0;
  lVar2 = FUN_00192f30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0019ea20();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  puVar4 = unaff_RDI + 0x57;
  unaff_RDI[0x57] = 0;
  lVar2 = FUN_00192f30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0019eb10();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject",param_3,param_4,puVar4);
  }
  FUN_0019ec00();
  *(undefined1 *)(unaff_RDI + 0x59) = 0;
  lVar2 = FUN_00192f30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026e6570 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026e6538 = FUN_00192f30();
        _DAT_026e6530 = "_showsSubitemIndicatorForEmptyEntries";
        _DAT_026e6540 = 0;
        _DAT_026e6548 = 0x6200;
        _DAT_026e6550 = "bool";
        _DAT_026e6558 = 0;
        uRam00000000026e6560 = 0;
        _DAT_026e6568 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x2cc) = 0;
  lVar2 = FUN_00192f30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026e65b8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026e6580 = FUN_00192f30();
        _DAT_026e6578 = "_autoexpandingRow";
        _DAT_026e6588 = 0;
        _DAT_026e6590 = 0x6901;
        _DAT_026e6598 = "GNInt";
        _DAT_026e65a0 = 0;
        uRam00000000026e65a8 = 0;
        _DAT_026e65b0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x5a) = 0;
  lVar2 = FUN_00192f30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026e6600 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026e65c8 = FUN_00192f30();
        _DAT_026e65c0 = "_indentationPerLevel";
        _DAT_026e65d0 = 0;
        _DAT_026e65d8 = 0x6600;
        _DAT_026e65e0 = "GNCoord";
        _DAT_026e65e8 = 0;
        uRam00000000026e65f0 = 0;
        _DAT_026e65f8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x5b] = 0;
  lVar2 = FUN_00192f30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0019ece0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTimer");
  }
  return;
}


