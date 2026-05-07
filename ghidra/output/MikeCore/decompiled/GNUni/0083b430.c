// Function: FUN_0083b430
// Address: 0083b430
// Size: 995 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "float"
//   "GNPropertyObserver"
//   "MUFunction"
//   "_maxLocation"
//   "_minLocation"
//   "_maxDisplayValue"
//   "_minDisplayValue"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0083b430(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_000f62d0();
  unaff_RDI[0x39] = &DAT_025768d0;
  if (DAT_026ea710 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f7680 = "GNPropertyObserver";
      DAT_026f7690 = 0;
      _DAT_026f7688 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_0263af58;
  unaff_RDI[2] = &DAT_0263ba40;
  unaff_RDI[0x39] = &DAT_0263ba80;
  *(undefined4 *)(unaff_RDI + 0x3a) = 0;
  lVar2 = FUN_0083b1a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02736ca8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02736c70 = FUN_0083b1a0();
        _DAT_02736c68 = "_maxLocation";
        _DAT_02736c78 = 0;
        _DAT_02736c80 = 0x6600;
        _DAT_02736c88 = "float";
        _DAT_02736c90 = 0;
        uRam0000000002736c98 = 0;
        _DAT_02736ca0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x1d4) = 0;
  lVar2 = FUN_0083b1a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02736cf0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02736cb8 = FUN_0083b1a0();
        _DAT_02736cb0 = "_minLocation";
        _DAT_02736cc0 = 0;
        _DAT_02736cc8 = 0x6600;
        _DAT_02736cd0 = "float";
        _DAT_02736cd8 = 0;
        uRam0000000002736ce0 = 0;
        _DAT_02736ce8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x3b) = 0;
  lVar2 = FUN_0083b1a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02736d38 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02736d00 = FUN_0083b1a0();
        _DAT_02736cf8 = "_maxDisplayValue";
        _DAT_02736d08 = 0;
        _DAT_02736d10 = 0x6600;
        _DAT_02736d18 = "float";
        _DAT_02736d20 = 0;
        uRam0000000002736d28 = 0;
        _DAT_02736d30 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x1dc) = 0;
  lVar2 = FUN_0083b1a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02736d80 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02736d48 = FUN_0083b1a0();
        _DAT_02736d40 = "_minDisplayValue";
        _DAT_02736d50 = 0;
        _DAT_02736d58 = 0x6600;
        _DAT_02736d60 = "float";
        _DAT_02736d68 = 0;
        uRam0000000002736d70 = 0;
        _DAT_02736d78 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x3c] = 0;
  lVar2 = FUN_0083b1a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0083b890();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUFunction");
  }
  return;
}


