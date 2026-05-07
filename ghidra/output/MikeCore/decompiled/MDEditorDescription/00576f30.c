// Function: FUN_00576f30
// Address: 00576f30
// Size: 532 bytes
// Class: MDEditorDescription
// String references:
//   "MDEditorDescription"
//   "MDEditMode"
//   "_editMode"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00576f30(void)

{
  int iVar1;
  
  if (DAT_0270f650 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0270f640 = 0x100000000;
      _DAT_0270f648 = 2;
      DAT_0270f64c = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_0270f688 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0270f658 = "MDEditMode";
      _DAT_0270f660 = 3;
      DAT_0270f664 = DAT_0270f64c;
      _DAT_0270f668 = &DAT_0270f640;
      _DAT_0270f670 = &DAT_0270f620;
      _DAT_0270f678 = 0;
      uRam000000000270f680 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_0270f618 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0270f150 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02705978 = FUN_00d4fe50();
          _DAT_02705960 = "MDEditorDescription";
          _DAT_02705968 = 0x88;
          _DAT_02705970 = FUN_004412b0;
          _DAT_02705980 = 0;
          uRam0000000002705988 = 0;
          _DAT_02705990 = 0;
          uRam0000000002705998 = 0;
          _DAT_027059a0 = 0;
          uRam00000000027059a8 = 0;
          _DAT_027059b0 = 0;
          uRam00000000027059b8 = 0;
          _DAT_027059c0 = 0;
          uRam00000000027059c8 = 0;
          _DAT_027059d0 = 0;
          uRam00000000027059d8 = 0;
          _DAT_027059e0 = 0;
          uRam00000000027059e8 = 0;
          _DAT_027059f0 = 0;
          uRam00000000027059f8 = 0;
          _DAT_02705a00 = 0;
          uRam0000000002705a08 = 0;
          _DAT_02705a10 = 0;
          uRam0000000002705a18 = 0;
          _DAT_02705a20 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0270f5d8 = "_editMode";
      _DAT_0270f5e0 = &DAT_02705960;
      _DAT_0270f5e8 = 0;
      _DAT_0270f5f0 = 0x6500;
      _DAT_0270f5f8 = "MDEditMode";
      _DAT_0270f600 = &DAT_0270f658;
      _DAT_0270f608 = 0;
      uRam000000000270f610 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_0270f5d8;
}


