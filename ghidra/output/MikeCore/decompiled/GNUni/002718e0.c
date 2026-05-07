// Function: FUN_002718e0
// Address: 002718e0
// Size: 1048 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "MUPart"
//   "_autoanalyzesSplitsAndJoins"
//   "_previewsChords"
//   "_showsDegrees"
//   "_showsFunctions"
//   "_hasOmittedThirds"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002718e0(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_0026cd40();
  *unaff_RDI = &DAT_02635eb0;
  unaff_RDI[2] = &DAT_02636a48;
  unaff_RDI[0x27] = &DAT_02636a88;
  unaff_RDI[0x28] = &DAT_02636ad8;
  unaff_RDI[0x3f] = 0;
  lVar2 = FUN_0026cb20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00271d90();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUPart");
  }
  *(undefined1 *)(unaff_RDI + 0x40) = 0;
  lVar2 = FUN_0026cb20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f7f28 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f7ef0 = FUN_0026cb20();
        _DAT_026f7ee8 = "_autoanalyzesSplitsAndJoins";
        _DAT_026f7ef8 = 0;
        _DAT_026f7f00 = 0x6200;
        _DAT_026f7f08 = "bool";
        _DAT_026f7f10 = 0;
        uRam00000000026f7f18 = 0;
        _DAT_026f7f20 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x201) = 0;
  lVar2 = FUN_0026cb20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f7f70 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f7f38 = FUN_0026cb20();
        _DAT_026f7f30 = "_previewsChords";
        _DAT_026f7f40 = 0;
        _DAT_026f7f48 = 0x6200;
        _DAT_026f7f50 = "bool";
        _DAT_026f7f58 = 0;
        uRam00000000026f7f60 = 0;
        _DAT_026f7f68 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x202) = 0;
  lVar2 = FUN_0026cb20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f7fb8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f7f80 = FUN_0026cb20();
        _DAT_026f7f78 = "_showsDegrees";
        _DAT_026f7f88 = 0;
        _DAT_026f7f90 = 0x6200;
        _DAT_026f7f98 = "bool";
        _DAT_026f7fa0 = 0;
        uRam00000000026f7fa8 = 0;
        _DAT_026f7fb0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x203) = 0;
  lVar2 = FUN_0026cb20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f8000 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f7fc8 = FUN_0026cb20();
        _DAT_026f7fc0 = "_showsFunctions";
        _DAT_026f7fd0 = 0;
        _DAT_026f7fd8 = 0x6200;
        _DAT_026f7fe0 = "bool";
        _DAT_026f7fe8 = 0;
        uRam00000000026f7ff0 = 0;
        _DAT_026f7ff8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x204) = 0;
  lVar2 = FUN_0026cb20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f8048 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f8010 = FUN_0026cb20();
        _DAT_026f8008 = "_hasOmittedThirds";
        _DAT_026f8018 = 0;
        _DAT_026f8020 = 0x6200;
        _DAT_026f8028 = "bool";
        _DAT_026f8030 = 0;
        uRam00000000026f8038 = 0;
        _DAT_026f8040 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


