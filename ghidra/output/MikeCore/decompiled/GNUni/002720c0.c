// Function: FUN_002720c0
// Address: 002720c0
// Size: 1651 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "MUPart"
//   "_autoanalyzesSplitsAndJoins"
//   "_tuningIsEditable"
//   "MUScaleModeFormatter"
//   "_detectsChurchModes"
//   "_detectsDetailedModeChanges"
//   "_previewsKeys"
//   "_canFindMoreModes"
//   "_canFindLessModes"
//   "_modesCountDirection"
//   "GNInt"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002720c0(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_0026cd40();
  *unaff_RDI = &DAT_02650890;
  unaff_RDI[2] = &DAT_02651410;
  unaff_RDI[0x27] = &DAT_02651450;
  unaff_RDI[0x28] = &DAT_026514a0;
  unaff_RDI[0x3f] = 0;
  lVar2 = FUN_00271e80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00272840();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUPart");
  }
  *(undefined1 *)(unaff_RDI + 0x40) = 0;
  lVar2 = FUN_00271e80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f81a8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f8170 = FUN_00271e80();
        _DAT_026f8168 = "_tuningIsEditable";
        _DAT_026f8178 = 0;
        _DAT_026f8180 = 0x6200;
        _DAT_026f8188 = "bool";
        _DAT_026f8190 = 0;
        uRam00000000026f8198 = 0;
        _DAT_026f81a0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x41] = 0;
  lVar2 = FUN_00271e80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00272930();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUScaleModeFormatter");
  }
  *(undefined1 *)(unaff_RDI + 0x42) = 0;
  lVar2 = FUN_00271e80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f8238 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f8200 = FUN_00271e80();
        _DAT_026f81f8 = "_autoanalyzesSplitsAndJoins";
        _DAT_026f8208 = 0;
        _DAT_026f8210 = 0x6200;
        _DAT_026f8218 = "bool";
        _DAT_026f8220 = 0;
        uRam00000000026f8228 = 0;
        _DAT_026f8230 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x211) = 0;
  lVar2 = FUN_00271e80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f8280 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f8248 = FUN_00271e80();
        _DAT_026f8240 = "_detectsChurchModes";
        _DAT_026f8250 = 0;
        _DAT_026f8258 = 0x6200;
        _DAT_026f8260 = "bool";
        _DAT_026f8268 = 0;
        uRam00000000026f8270 = 0;
        _DAT_026f8278 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x212) = 0;
  lVar2 = FUN_00271e80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f82c8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f8290 = FUN_00271e80();
        _DAT_026f8288 = "_detectsDetailedModeChanges";
        _DAT_026f8298 = 0;
        _DAT_026f82a0 = 0x6200;
        _DAT_026f82a8 = "bool";
        _DAT_026f82b0 = 0;
        uRam00000000026f82b8 = 0;
        _DAT_026f82c0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x213) = 0;
  lVar2 = FUN_00271e80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f8310 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f82d8 = FUN_00271e80();
        _DAT_026f82d0 = "_previewsKeys";
        _DAT_026f82e0 = 0;
        _DAT_026f82e8 = 0x6200;
        _DAT_026f82f0 = "bool";
        _DAT_026f82f8 = 0;
        uRam00000000026f8300 = 0;
        _DAT_026f8308 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x214) = 0;
  lVar2 = FUN_00271e80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f8358 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f8320 = FUN_00271e80();
        _DAT_026f8318 = "_canFindMoreModes";
        _DAT_026f8328 = 0;
        _DAT_026f8330 = 0x6200;
        _DAT_026f8338 = "bool";
        _DAT_026f8340 = 0;
        uRam00000000026f8348 = 0;
        _DAT_026f8350 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x215) = 0;
  lVar2 = FUN_00271e80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f83a0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f8368 = FUN_00271e80();
        _DAT_026f8360 = "_canFindLessModes";
        _DAT_026f8370 = 0;
        _DAT_026f8378 = 0x6200;
        _DAT_026f8380 = "bool";
        _DAT_026f8388 = 0;
        uRam00000000026f8390 = 0;
        _DAT_026f8398 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x43) = 0;
  lVar2 = FUN_00271e80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f83e8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f83b0 = FUN_00271e80();
        _DAT_026f83a8 = "_modesCountDirection";
        _DAT_026f83b8 = 0;
        _DAT_026f83c0 = 0x6900;
        _DAT_026f83c8 = "GNInt";
        _DAT_026f83d0 = 0;
        uRam00000000026f83d8 = 0;
        _DAT_026f83e0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


