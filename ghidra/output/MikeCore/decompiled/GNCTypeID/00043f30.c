// Function: FUN_00043f30
// Address: 00043f30
// Size: 883 bytes
// Class: GNCTypeID
// String references:
//   "bool"
//   "_showsX"
//   "_showsY"
//   "_showsWidth"
//   "_showsHeight"
//   "_cTypeID"
//   "GNCTypeID"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00043f30(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_0257f3c0;
  *(undefined1 *)((longlong)unaff_RDI + 0xc) = 0;
  lVar2 = FUN_00043d20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d1d70 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d1d38 = FUN_00043d20();
        _DAT_026d1d30 = "_showsX";
        _DAT_026d1d40 = 0;
        _DAT_026d1d48 = 0x6200;
        _DAT_026d1d50 = "bool";
        _DAT_026d1d58 = 0;
        uRam00000000026d1d60 = 0;
        _DAT_026d1d68 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xd) = 0;
  lVar2 = FUN_00043d20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d1db8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d1d80 = FUN_00043d20();
        _DAT_026d1d78 = "_showsY";
        _DAT_026d1d88 = 0;
        _DAT_026d1d90 = 0x6200;
        _DAT_026d1d98 = "bool";
        _DAT_026d1da0 = 0;
        uRam00000000026d1da8 = 0;
        _DAT_026d1db0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xe) = 0;
  lVar2 = FUN_00043d20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d1e00 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d1dc8 = FUN_00043d20();
        _DAT_026d1dc0 = "_showsWidth";
        _DAT_026d1dd0 = 0;
        _DAT_026d1dd8 = 0x6200;
        _DAT_026d1de0 = "bool";
        _DAT_026d1de8 = 0;
        uRam00000000026d1df0 = 0;
        _DAT_026d1df8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xf) = 0;
  lVar2 = FUN_00043d20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d1e48 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d1e10 = FUN_00043d20();
        _DAT_026d1e08 = "_showsHeight";
        _DAT_026d1e18 = 0;
        _DAT_026d1e20 = 0x6200;
        _DAT_026d1e28 = "bool";
        _DAT_026d1e30 = 0;
        uRam00000000026d1e38 = 0;
        _DAT_026d1e40 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 2) = 0;
  lVar2 = FUN_00043d20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d1e90 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d1e58 = FUN_00043d20();
        _DAT_026d1e50 = "_cTypeID";
        _DAT_026d1e60 = 0;
        _DAT_026d1e68 = 0x6301;
        _DAT_026d1e70 = "GNCTypeID";
        _DAT_026d1e78 = 0;
        uRam00000000026d1e80 = 0;
        _DAT_026d1e88 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_00044310();
  return;
}


