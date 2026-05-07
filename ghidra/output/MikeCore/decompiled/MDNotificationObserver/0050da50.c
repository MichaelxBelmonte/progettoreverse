// Function: FUN_0050da50
// Address: 0050da50
// Size: 719 bytes
// Class: MDNotificationObserver
// String references:
//   "bool"
//   "MDNotificationObserver"
//   "_showsReplaceRanges"
//   "_isEditingDetection"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050da50(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_0050aad0();
  *unaff_RDI = &DAT_024e31c0;
  unaff_RDI[2] = &DAT_024e3c40;
  unaff_RDI[0x27] = &DAT_024e3c80;
  *(undefined1 *)((longlong)unaff_RDI + 0x1ae) = 0;
  lVar2 = FUN_00275860();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0270a720 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0270a6e8 = FUN_00275860();
        _DAT_0270a6e0 = "_showsReplaceRanges";
        _DAT_0270a6f0 = 0;
        _DAT_0270a6f8 = 0x6200;
        _DAT_0270a700 = "bool";
        _DAT_0270a708 = 0;
        uRam000000000270a710 = 0;
        _DAT_0270a718 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_0050de10();
  unaff_RDI[0x37] = 0;
  lVar2 = FUN_00275860();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0050def0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  unaff_RDI[0x38] = 0;
  lVar2 = FUN_00275860();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0050dfe0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  unaff_RDI[0x39] = 0;
  lVar2 = FUN_00275860();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0050e0d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  *(undefined1 *)(unaff_RDI + 0x3a) = 0;
  lVar2 = FUN_00275860();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0270a888 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0270a850 = FUN_00275860();
        _DAT_0270a848 = "_isEditingDetection";
        _DAT_0270a858 = 0;
        _DAT_0270a860 = 0x6200;
        _DAT_0270a868 = "bool";
        _DAT_0270a870 = 0;
        uRam000000000270a878 = 0;
        _DAT_0270a880 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


