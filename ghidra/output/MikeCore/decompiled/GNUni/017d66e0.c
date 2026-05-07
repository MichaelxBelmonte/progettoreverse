// Function: FUN_017d66e0
// Address: 017d66e0
// Size: 1312 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "float"
//   "GNInt"
//   "MULoop"
//   "_loopComponents"
//   "_isAddingCrashCymbal"
//   "_variationIndex"
//   "_isDisabled"
//   "_averagePitchIndex"
//   "_densityIndex"
//   "_matchGrade"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017d66e0(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_01150e50();
  *unaff_RDI = &DAT_02600830;
  *(undefined4 *)((longlong)unaff_RDI + 0x3c) = 0;
  lVar2 = FUN_01c2d280();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_017d6cf0();
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 8) = 0;
  lVar2 = FUN_01c2d280();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027d3a20 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027d39e8 = FUN_01c2d280();
        _DAT_027d39e0 = "_isAddingCrashCymbal";
        _DAT_027d39f0 = 0;
        _DAT_027d39f8 = 0x6200;
        _DAT_027d3a00 = "bool";
        _DAT_027d3a08 = 0;
        uRam00000000027d3a10 = 0;
        _DAT_027d3a18 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x44) = 0;
  lVar2 = FUN_01c2d280();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027d3a68 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027d3a30 = FUN_01c2d280();
        _DAT_027d3a28 = "_variationIndex";
        _DAT_027d3a38 = 0;
        _DAT_027d3a40 = 0x6900;
        _DAT_027d3a48 = "GNInt";
        _DAT_027d3a50 = 0;
        uRam00000000027d3a58 = 0;
        _DAT_027d3a60 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_017d6e90();
  FUN_017d6f70();
  unaff_RDI[0xb] = 0;
  lVar2 = FUN_01c2d280();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_017d7050();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_loopComponents";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoop");
  }
  FUN_017d7140();
  *(undefined1 *)(unaff_RDI + 0xd) = 0;
  lVar2 = FUN_01c2d280();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027d3bd0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027d3b98 = FUN_01c2d280();
        _DAT_027d3b90 = "_isDisabled";
        _DAT_027d3ba0 = 0;
        _DAT_027d3ba8 = 0x6200;
        _DAT_027d3bb0 = "bool";
        _DAT_027d3bb8 = 0;
        uRam00000000027d3bc0 = 0;
        _DAT_027d3bc8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x6c) = 0;
  lVar2 = FUN_01c2d280();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_017d7220();
    FUN_00e87980();
  }
  FUN_017d73e0();
  *(undefined4 *)(unaff_RDI + 0xf) = 0;
  lVar2 = FUN_01c2d280();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027d3d48 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027d3d10 = FUN_01c2d280();
        _DAT_027d3d08 = "_averagePitchIndex";
        _DAT_027d3d18 = 0;
        _DAT_027d3d20 = 0x6900;
        _DAT_027d3d28 = "GNInt";
        _DAT_027d3d30 = 0;
        uRam00000000027d3d38 = 0;
        _DAT_027d3d40 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x7c) = 0;
  lVar2 = FUN_01c2d280();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027d3d90 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027d3d58 = FUN_01c2d280();
        _DAT_027d3d50 = "_densityIndex";
        _DAT_027d3d60 = 0;
        _DAT_027d3d68 = 0x6900;
        _DAT_027d3d70 = "GNInt";
        _DAT_027d3d78 = 0;
        uRam00000000027d3d80 = 0;
        _DAT_027d3d88 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x10) = 0;
  lVar2 = FUN_01c2d280();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027d3dd8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027d3da0 = FUN_01c2d280();
        _DAT_027d3d98 = "_matchGrade";
        _DAT_027d3da8 = 0;
        _DAT_027d3db0 = 0x6601;
        _DAT_027d3db8 = "float";
        _DAT_027d3dc0 = 0;
        uRam00000000027d3dc8 = 0;
        _DAT_027d3dd0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


