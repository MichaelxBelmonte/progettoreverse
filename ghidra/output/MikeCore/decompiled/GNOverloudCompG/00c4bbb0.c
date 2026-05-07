// Function: FUN_00c4bbb0
// Address: 00c4bbb0
// Size: 578 bytes
// Class: GNOverloudCompG
// String references:
//   "_minValue"
//   "float"
//   "_maxValue"
//   "_offValue"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c4bbb0(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *unaff_RDI;
  
  FUN_001bcb00();
  *unaff_RDI = &DAT_02560740;
  unaff_RDI[9] = &DAT_02560c90;
  unaff_RDI[10] = &DAT_02560cf8;
  *(undefined4 *)(unaff_RDI + 0xc) = 0;
  lVar2 = FUN_00c432b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02770a48 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02770a10 = FUN_00c432b0();
        _DAT_02770a08 = "_minValue";
        _DAT_02770a18 = 0;
        _DAT_02770a20 = 0x6600;
        _DAT_02770a28 = "float";
        _DAT_02770a30 = 0;
        uRam0000000002770a38 = 0;
        _DAT_02770a40 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 100) = 0;
  lVar2 = FUN_00c432b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02770a90 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02770a58 = FUN_00c432b0();
        _DAT_02770a50 = "_maxValue";
        _DAT_02770a60 = 0;
        _DAT_02770a68 = 0x6600;
        _DAT_02770a70 = "float";
        _DAT_02770a78 = 0;
        uRam0000000002770a80 = 0;
        _DAT_02770a88 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0xd) = 0;
  lVar2 = FUN_00c432b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02770ad8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02770aa0 = FUN_00c432b0();
        _DAT_02770a98 = "_offValue";
        _DAT_02770aa8 = 0;
        _DAT_02770ab0 = 0x6600;
        _DAT_02770ab8 = "float";
        _DAT_02770ac0 = 0;
        uRam0000000002770ac8 = 0;
        _DAT_02770ad0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_00c4be40();
  return;
}


