// Function: FUN_005c82b0
// Address: 005c82b0
// Size: 560 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"
//   "MDEditMode"
//   "_editMode"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_005c82b0(void)

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
  if (DAT_0271b008 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026f7020 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0270aa58 = FUN_00015ff0();
          _DAT_0270aa40 = "MDEditorViewController";
          _DAT_0270aa48 = 0x1e8;
          _DAT_0270aa50 = FUN_00074eb0;
          _DAT_0270aa60 = 0;
          uRam000000000270aa68 = 0;
          _DAT_0270aa70 = 0;
          _DAT_0270aae8 = 0;
          uRam000000000270aaf0 = 0;
          _DAT_0270aaf8 = 0;
          DAT_0270aafa = 1;
          _DAT_0270aa78 = 0;
          uRam000000000270aa80 = 0;
          _DAT_0270aa88 = 0;
          uRam000000000270aa90 = 0;
          _DAT_0270aa98 = 0;
          uRam000000000270aaa0 = 0;
          _DAT_0270aaa8 = 0;
          uRam000000000270aab0 = 0;
          _DAT_0270aab8 = 0;
          uRam000000000270aac0 = 0;
          _DAT_0270aac8 = 0;
          uRam000000000270aad0 = 0;
          _DAT_0270aad8 = 0;
          uRam000000000270aae0 = 0;
          DAT_0270ab03 = 0;
          _DAT_0270aafb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0271afc8 = "_editMode";
      _DAT_0271afd0 = &DAT_0270aa40;
      _DAT_0271afd8 = 0;
      _DAT_0271afe0 = 0x6500;
      _DAT_0271afe8 = "MDEditMode";
      _DAT_0271aff0 = &DAT_0270f658;
      _DAT_0271aff8 = 0;
      uRam000000000271b000 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_0271afc8;
}


