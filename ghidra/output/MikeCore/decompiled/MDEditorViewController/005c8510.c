// Function: FUN_005c8510
// Address: 005c8510
// Size: 560 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"
//   "MDEditMode"
//   "_lastEditMode"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_005c8510(void)

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
  if (DAT_0271b050 == '\0') {
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
      _DAT_0271b010 = "_lastEditMode";
      _DAT_0271b018 = &DAT_0270aa40;
      _DAT_0271b020 = 0;
      _DAT_0271b028 = 0x6500;
      _DAT_0271b030 = "MDEditMode";
      _DAT_0271b038 = &DAT_0270f658;
      _DAT_0271b040 = 0;
      uRam000000000271b048 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_0271b010;
}


