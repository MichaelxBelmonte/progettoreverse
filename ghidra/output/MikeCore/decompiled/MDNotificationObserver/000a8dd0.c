// Function: FUN_000a8dd0
// Address: 000a8dd0
// Size: 577 bytes
// Class: MDNotificationObserver
// String references:
//   "MDNotificationObserver"
//   "MDInspectorViewController"
//   "_selectedIndex"
//   "_fixedCount"
//   "GNInt"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a8dd0(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_000a5ee0();
  *unaff_RDI = &DAT_024e46f0;
  unaff_RDI[2] = &DAT_024e50e0;
  unaff_RDI[0x31] = 0;
  lVar2 = FUN_000a2ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000a9080();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDInspectorViewController");
  }
  unaff_RDI[0x32] = 0;
  lVar2 = FUN_000a2ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000a9170();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  *(undefined4 *)(unaff_RDI + 0x33) = 0;
  lVar2 = FUN_000a2ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026dada8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026dad70 = FUN_000a2ee0();
        _DAT_026dad68 = "_selectedIndex";
        _DAT_026dad78 = 0;
        _DAT_026dad80 = 0x6900;
        _DAT_026dad88 = "GNInt";
        _DAT_026dad90 = 0;
        uRam00000000026dad98 = 0;
        _DAT_026dada0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x19c) = 0;
  lVar2 = FUN_000a2ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026dadf0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026dadb8 = FUN_000a2ee0();
        _DAT_026dadb0 = "_fixedCount";
        _DAT_026dadc0 = 0;
        _DAT_026dadc8 = 0x6900;
        _DAT_026dadd0 = "GNInt";
        _DAT_026dadd8 = 0;
        uRam00000000026dade0 = 0;
        _DAT_026dade8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


