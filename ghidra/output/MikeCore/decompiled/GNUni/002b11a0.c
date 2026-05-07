// Function: FUN_002b11a0
// Address: 002b11a0
// Size: 1289 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "GNOperationProgressObserver"
//   "float"
//   "_progress"
//   "MDProgressViewController"
//   "MDProgressViewControllerDelegate"
//   "_duration"
//   "_preparedCondition"
//   "_progressOffset"
//   "_progressFactor"
//   "double"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002b11a0(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *unaff_RDI;
  char *pcVar3;
  
  FUN_002b0b70();
  unaff_RDI[4] = &DAT_024c15b0;
  if (DAT_0278c930 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026ceef0 = "GNOperationProgressObserver";
      DAT_026cef00 = 0;
      _DAT_026ceef8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  unaff_RDI[5] = &DAT_024d3940;
  if (DAT_026e4548 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e4530 = "MDProgressViewControllerDelegate";
      DAT_026e4540 = 0;
      _DAT_026e4538 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_024ed660;
  unaff_RDI[4] = &DAT_024eda40;
  unaff_RDI[5] = &DAT_024eda78;
  FUN_002b17b0();
  FUN_002b1890();
  FUN_002b1970();
  *(undefined1 *)(unaff_RDI + 9) = 0;
  lVar2 = FUN_002b0910();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026fc0c8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026fc090 = FUN_002b0910();
        _DAT_026fc088 = "_preparedCondition";
        _DAT_026fc098 = 0;
        _DAT_026fc0a0 = 0x6200;
        _DAT_026fc0a8 = "bool";
        _DAT_026fc0b0 = 0;
        uRam00000000026fc0b8 = 0;
        _DAT_026fc0c0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[10] = 0;
  lVar2 = FUN_002b0910();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026fc110 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026fc0d8 = FUN_002b0910();
        _DAT_026fc0d0 = "_duration";
        _DAT_026fc0e0 = 0;
        _DAT_026fc0e8 = 0x6400;
        _DAT_026fc0f0 = "double";
        _DAT_026fc0f8 = 0;
        uRam00000000026fc100 = 0;
        _DAT_026fc108 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0xb) = 0;
  lVar2 = FUN_002b0910();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026fc158 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026fc120 = FUN_002b0910();
        _DAT_026fc118 = "_progressOffset";
        _DAT_026fc128 = 0;
        _DAT_026fc130 = 0x6600;
        _DAT_026fc138 = "float";
        _DAT_026fc140 = 0;
        uRam00000000026fc148 = 0;
        _DAT_026fc150 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x5c) = 0;
  lVar2 = FUN_002b0910();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026fc1a0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026fc168 = FUN_002b0910();
        _DAT_026fc160 = "_progressFactor";
        _DAT_026fc170 = 0;
        _DAT_026fc178 = 0x6600;
        _DAT_026fc180 = "float";
        _DAT_026fc188 = 0;
        uRam00000000026fc190 = 0;
        _DAT_026fc198 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0xc) = 0;
  lVar2 = FUN_002b0910();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026fc1e8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026fc1b0 = FUN_002b0910();
        _DAT_026fc1a8 = "_progress";
        _DAT_026fc1b8 = 0;
        _DAT_026fc1c0 = 0x6600;
        _DAT_026fc1c8 = "float";
        _DAT_026fc1d0 = 0;
        uRam00000000026fc1d8 = 0;
        _DAT_026fc1e0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xd] = 0;
  lVar2 = FUN_002b0910();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_002b1a50();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDProgressViewController");
  }
  return;
}


