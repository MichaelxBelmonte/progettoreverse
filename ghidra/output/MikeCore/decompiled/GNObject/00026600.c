// Function: FUN_00026600
// Address: 00026600
// Size: 955 bytes
// Class: GNObject
// String references:
//   "bool"
//   "GNObject"
//   "_state"
//   "GNTypedStream"
//   "_coding"
//   "_isSecureSaveEnabled"
//   "GNInt"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00026600(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_00025ab0();
  *unaff_RDI = &DAT_025668e0;
  FUN_00026ba0();
  FUN_00026c80();
  unaff_RDI[7] = 0;
  lVar2 = FUN_00025850();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00026d60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  unaff_RDI[8] = 0;
  lVar2 = FUN_00025850();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00026e50();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  FUN_00026f40();
  *(undefined4 *)(unaff_RDI + 10) = 0;
  lVar2 = FUN_00025850();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026cdee0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026cdea8 = FUN_00025850();
        _DAT_026cdea0 = "_state";
        _DAT_026cdeb0 = 0;
        _DAT_026cdeb8 = 0x6900;
        _DAT_026cdec0 = "GNInt";
        _DAT_026cdec8 = 0;
        uRam00000000026cded0 = 0;
        _DAT_026cded8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  puVar4 = unaff_RDI + 0xb;
  unaff_RDI[0xb] = 0;
  lVar2 = FUN_00025850();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00027020();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject",param_3,param_4,puVar4);
  }
  unaff_RDI[0xc] = 0;
  lVar2 = FUN_00025850();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00027110();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTypedStream");
  }
  *(undefined1 *)(unaff_RDI + 0xd) = 0;
  lVar2 = FUN_00025850();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026cdfb8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026cdf80 = FUN_00025850();
        _DAT_026cdf78 = "_coding";
        _DAT_026cdf88 = 0;
        _DAT_026cdf90 = 0x6200;
        _DAT_026cdf98 = "bool";
        _DAT_026cdfa0 = 0;
        uRam00000000026cdfa8 = 0;
        _DAT_026cdfb0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x69) = 0;
  lVar2 = FUN_00025850();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026ce000 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026cdfc8 = FUN_00025850();
        _DAT_026cdfc0 = "_isSecureSaveEnabled";
        _DAT_026cdfd0 = 0;
        _DAT_026cdfd8 = 0x6200;
        _DAT_026cdfe0 = "bool";
        _DAT_026cdfe8 = 0;
        uRam00000000026cdff0 = 0;
        _DAT_026cdff8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


