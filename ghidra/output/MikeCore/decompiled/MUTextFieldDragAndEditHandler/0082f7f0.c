// Function: FUN_0082f7f0
// Address: 0082f7f0
// Size: 558 bytes
// Class: MUTextFieldDragAndEditHandler
// String references:
//   "MUTextFieldDragAndEditHandler"
//   "MUElementSinglePercentInspector"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0082f7f0(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_008258e0();
  unaff_RDI[0x1a] = &DAT_0264a7b8;
  if (DAT_027323d0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0271fb70 = "MUTextFieldDragAndEditHandler";
      DAT_0271fb80 = 0;
      _DAT_0271fb78 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_02655728;
  unaff_RDI[0x17] = &DAT_02655e10;
  unaff_RDI[0x1a] = &DAT_02655e60;
  FUN_0082fac0();
  FUN_0082fd80();
  FUN_008300b0();
  FUN_00830370();
  *(undefined4 *)(unaff_RDI + 0x1f) = 0;
  if (DAT_02734b18 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02734a68 = FUN_00335590();
      _DAT_02734a50 = "MUElementSinglePercentInspector";
      _DAT_02734a58 = 0x100;
      _DAT_02734a60 = FUN_0082f770;
      _DAT_02734a70 = 0;
      uRam0000000002734a78 = 0;
      _DAT_02734a80 = 0;
      _DAT_02734af8 = 0;
      uRam0000000002734b00 = 0;
      _DAT_02734b08 = 0;
      DAT_02734b0a = 1;
      _DAT_02734a88 = 0;
      uRam0000000002734a90 = 0;
      _DAT_02734a98 = 0;
      uRam0000000002734aa0 = 0;
      _DAT_02734aa8 = 0;
      uRam0000000002734ab0 = 0;
      _DAT_02734ab8 = 0;
      uRam0000000002734ac0 = 0;
      _DAT_02734ac8 = 0;
      uRam0000000002734ad0 = 0;
      _DAT_02734ad8 = 0;
      uRam0000000002734ae0 = 0;
      _DAT_02734ae8 = 0;
      uRam0000000002734af0 = 0;
      DAT_02734b13 = 0;
      _DAT_02734b0b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02734b0b == '\0') {
    FUN_00830630();
    FUN_00e87980();
  }
  return;
}


