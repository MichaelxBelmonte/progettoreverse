// Function: FUN_007b47e0
// Address: 007b47e0
// Size: 1045 bytes
// Class: GNInt
// String references:
//   "bool"
//   "_numerator"
//   "_denominator"
//   "_isLoop"
//   "_beats"
//   "_tonalKey"
//   "_tonalGender"
//   "GNInt"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007b47e0(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_025480c0;
  *(undefined1 *)((longlong)unaff_RDI + 0xc) = 0;
  lVar2 = FUN_007b4410();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275cf00 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275cec8 = FUN_007b4410();
        _DAT_0275cec0 = "_isLoop";
        _DAT_0275ced0 = 0;
        _DAT_0275ced8 = 0x6200;
        _DAT_0275cee0 = "bool";
        _DAT_0275cee8 = 0;
        uRam000000000275cef0 = 0;
        _DAT_0275cef8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 2) = 0;
  lVar2 = FUN_007b4410();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0272bcc0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0272bc88 = FUN_007b4410();
        _DAT_0272bc80 = "_numerator";
        _DAT_0272bc90 = 0;
        _DAT_0272bc98 = 0x6900;
        _DAT_0272bca0 = "GNInt";
        _DAT_0272bca8 = 0;
        uRam000000000272bcb0 = 0;
        _DAT_0272bcb8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x14) = 0;
  lVar2 = FUN_007b4410();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275cf50 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275cf18 = FUN_007b4410();
        _DAT_0275cf10 = "_denominator";
        _DAT_0275cf20 = 0;
        _DAT_0275cf28 = 0x6900;
        _DAT_0275cf30 = "GNInt";
        _DAT_0275cf38 = 0;
        uRam000000000275cf40 = 0;
        _DAT_0275cf48 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 3) = 0;
  lVar2 = FUN_007b4410();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0272bd10 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0272bcd8 = FUN_007b4410();
        _DAT_0272bcd0 = "_beats";
        _DAT_0272bce0 = 0;
        _DAT_0272bce8 = 0x6900;
        _DAT_0272bcf0 = "GNInt";
        _DAT_0272bcf8 = 0;
        uRam000000000272bd00 = 0;
        _DAT_0272bd08 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x1c) = 0;
  lVar2 = FUN_007b4410();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275cfa0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275cf68 = FUN_007b4410();
        _DAT_0275cf60 = "_tonalKey";
        _DAT_0275cf70 = 0;
        _DAT_0275cf78 = 0x6900;
        _DAT_0275cf80 = "GNInt";
        _DAT_0275cf88 = 0;
        uRam000000000275cf90 = 0;
        _DAT_0275cf98 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 4) = 0;
  lVar2 = FUN_007b4410();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0272bd60 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0272bd28 = FUN_007b4410();
        _DAT_0272bd20 = "_tonalGender";
        _DAT_0272bd30 = 0;
        _DAT_0272bd38 = 0x6900;
        _DAT_0272bd40 = "GNInt";
        _DAT_0272bd48 = 0;
        uRam000000000272bd50 = 0;
        _DAT_0272bd58 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


