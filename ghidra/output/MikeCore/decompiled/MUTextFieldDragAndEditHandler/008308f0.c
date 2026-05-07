// Function: FUN_008308f0
// Address: 008308f0
// Size: 512 bytes
// Class: MUTextFieldDragAndEditHandler
// String references:
//   "MUTextFieldDragAndEditHandler"
//   "MUElementFormantInspector"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008308f0(void)

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
  *unaff_RDI = &DAT_02652f30;
  unaff_RDI[0x17] = &DAT_026535f8;
  unaff_RDI[0x1a] = &DAT_02653648;
  FUN_00830b50();
  FUN_00830e80();
  *(undefined4 *)(unaff_RDI + 0x1d) = 0;
  if (DAT_02734d50 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02734ca0 = FUN_00335590();
      _DAT_02734c88 = "MUElementFormantInspector";
      _DAT_02734c90 = 0xf8;
      _DAT_02734c98 = FUN_00830870;
      _DAT_02734ca8 = 0;
      uRam0000000002734cb0 = 0;
      _DAT_02734cb8 = 0;
      _DAT_02734d30 = 0;
      uRam0000000002734d38 = 0;
      _DAT_02734d40 = 0;
      DAT_02734d42 = 1;
      _DAT_02734cc0 = 0;
      uRam0000000002734cc8 = 0;
      _DAT_02734cd0 = 0;
      uRam0000000002734cd8 = 0;
      _DAT_02734ce0 = 0;
      uRam0000000002734ce8 = 0;
      _DAT_02734cf0 = 0;
      uRam0000000002734cf8 = 0;
      _DAT_02734d00 = 0;
      uRam0000000002734d08 = 0;
      _DAT_02734d10 = 0;
      uRam0000000002734d18 = 0;
      _DAT_02734d20 = 0;
      uRam0000000002734d28 = 0;
      DAT_02734d4b = 0;
      _DAT_02734d43 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02734d43 == '\0') {
    FUN_00831140();
    FUN_00e87980();
  }
  FUN_008312d0();
  return;
}


