// Function: FUN_005c6d00
// Address: 005c6d00
// Size: 626 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"
//   "MUEditTimelineMode"
//   "_tempoEditorMode"
//   "=MUEditTimelineModeNone"
//   "=MUEditTimelineAndStretchElementsMode"
//   "=MUEditTimelineBackgroundOnlyMode"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_005c6d00(void)

{
  bool bVar1;
  int iVar2;
  
  if (DAT_0271ad90 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      bVar1 = *DAT_0271ad60 != '=';
      _DAT_0271ad80 = -(uint)(*DAT_0271ad60 == '=');
      _DAT_0271ad84 = 0;
      if (*DAT_0271ad68 != '=') {
        _DAT_0271ad84 = (uint)bVar1;
      }
      _DAT_0271ad88 = 1;
      if (*DAT_0271ad70 != '=') {
        _DAT_0271ad88 = _DAT_0271ad84 + 1;
      }
      DAT_0271ad8c = _DAT_0271ad84 == bVar1 && _DAT_0271ad88 == _DAT_0271ad84 + 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_0271adc8 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      _DAT_0271ad98 = "MUEditTimelineMode";
      _DAT_0271ada0 = 3;
      DAT_0271ada4 = DAT_0271ad8c;
      _DAT_0271ada8 = &DAT_0271ad80;
      _DAT_0271adb0 = &DAT_0271ad60;
      _DAT_0271adb8 = 0;
      uRam000000000271adc0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_0271ad50 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      if (DAT_026f7020 == '\0') {
        iVar2 = ___cxa_guard_acquire();
        if (iVar2 != 0) {
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
      _DAT_0271ad10 = "_tempoEditorMode";
      _DAT_0271ad18 = &DAT_0270aa40;
      _DAT_0271ad20 = 0;
      _DAT_0271ad28 = 0x6500;
      _DAT_0271ad30 = "MUEditTimelineMode";
      _DAT_0271ad38 = &DAT_0271ad98;
      _DAT_0271ad40 = 0;
      uRam000000000271ad48 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_0271ad10;
}


