// Function: FUN_00831880
// Address: 00831880
// Size: 600 bytes
// Class: MUTextFieldDragAndEditHandler
// String references:
//   "MUTextFieldDragAndEditHandler"
//   "MUElementPitchInspector"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00831880(void)

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
  *unaff_RDI = &DAT_02654840;
  unaff_RDI[0x17] = &DAT_02654f10;
  unaff_RDI[0x1a] = &DAT_02654f60;
  FUN_00831bb0();
  FUN_00831ee0();
  FUN_00832210();
  FUN_00832540();
  FUN_00832800();
  FUN_00832ac0();
  *(undefined4 *)(unaff_RDI + 0x21) = 0;
  if (DAT_02735010 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02734f60 = FUN_00335590();
      _DAT_02734f48 = "MUElementPitchInspector";
      _DAT_02734f50 = 0x110;
      _DAT_02734f58 = FUN_008317f0;
      _DAT_02734f68 = 0;
      uRam0000000002734f70 = 0;
      _DAT_02734f78 = 0;
      _DAT_02734ff0 = 0;
      uRam0000000002734ff8 = 0;
      _DAT_02735000 = 0;
      DAT_02735002 = 1;
      _DAT_02734f80 = 0;
      uRam0000000002734f88 = 0;
      _DAT_02734f90 = 0;
      uRam0000000002734f98 = 0;
      _DAT_02734fa0 = 0;
      uRam0000000002734fa8 = 0;
      _DAT_02734fb0 = 0;
      uRam0000000002734fb8 = 0;
      _DAT_02734fc0 = 0;
      uRam0000000002734fc8 = 0;
      _DAT_02734fd0 = 0;
      uRam0000000002734fd8 = 0;
      _DAT_02734fe0 = 0;
      uRam0000000002734fe8 = 0;
      DAT_0273500b = 0;
      _DAT_02735003 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02735003 == '\0') {
    FUN_00832d80();
    FUN_00e87980();
  }
  return;
}


