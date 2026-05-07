// Function: FUN_001b40a0
// Address: 001b40a0
// Size: 674 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "float"
//   "GNSnapContext"
//   "_minFloatValue"
//   "_maxFloatValue"
//   "_isFineTuning"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001b40a0(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_000f62d0();
  *unaff_RDI = &DAT_02690078;
  unaff_RDI[2] = &DAT_02690ba8;
  unaff_RDI[0x39] = 0;
  lVar2 = FUN_001b37d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001b43c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSnapContext");
  }
  *(undefined4 *)(unaff_RDI + 0x3a) = 0;
  lVar2 = FUN_001b37d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026e9218 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026e91e0 = FUN_001b37d0();
        _DAT_026e91d8 = "_minFloatValue";
        _DAT_026e91e8 = 0;
        _DAT_026e91f0 = 0x6600;
        _DAT_026e91f8 = "float";
        _DAT_026e9200 = 0;
        uRam00000000026e9208 = 0;
        _DAT_026e9210 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x1d4) = 0;
  lVar2 = FUN_001b37d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026e9260 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026e9228 = FUN_001b37d0();
        _DAT_026e9220 = "_maxFloatValue";
        _DAT_026e9230 = 0;
        _DAT_026e9238 = 0x6600;
        _DAT_026e9240 = "float";
        _DAT_026e9248 = 0;
        uRam00000000026e9250 = 0;
        _DAT_026e9258 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0x3b) = 0;
  lVar2 = FUN_001b37d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026e92a8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026e9270 = FUN_001b37d0();
        _DAT_026e9268 = "_isFineTuning";
        _DAT_026e9278 = 0;
        _DAT_026e9280 = 0x6201;
        _DAT_026e9288 = "bool";
        _DAT_026e9290 = 0;
        uRam00000000026e9298 = 0;
        _DAT_026e92a0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


