// Function: FUN_008634f0
// Address: 008634f0
// Size: 626 bytes
// Class: MUTempoEditorView
// String references:
//   "MUTempoEditorView"
//   "MUEditTimelineMode"
//   "_editTimelineMode"
//   "=MUEditTimelineModeNone"
//   "=MUEditTimelineAndStretchElementsMode"
//   "=MUEditTimelineBackgroundOnlyMode"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_008634f0(void)

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
  if (DAT_0273d450 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      if (DAT_027ebf10 == '\0') {
        iVar2 = ___cxa_guard_acquire();
        if (iVar2 != 0) {
          _DAT_0273ced8 = FUN_0006d940();
          _DAT_0273cec0 = "MUTempoEditorView";
          _DAT_0273cec8 = 0x2e8;
          _DAT_0273ced0 = FUN_0010c150;
          _DAT_0273cee0 = 0;
          uRam000000000273cee8 = 0;
          _DAT_0273cef0 = 0;
          _DAT_0273cf68 = 0;
          uRam000000000273cf70 = 0;
          _DAT_0273cf78 = 0;
          DAT_0273cf7a = 1;
          _DAT_0273cef8 = 0;
          uRam000000000273cf00 = 0;
          _DAT_0273cf08 = 0;
          uRam000000000273cf10 = 0;
          _DAT_0273cf18 = 0;
          uRam000000000273cf20 = 0;
          _DAT_0273cf28 = 0;
          uRam000000000273cf30 = 0;
          _DAT_0273cf38 = 0;
          uRam000000000273cf40 = 0;
          _DAT_0273cf48 = 0;
          uRam000000000273cf50 = 0;
          _DAT_0273cf58 = 0;
          uRam000000000273cf60 = 0;
          DAT_0273cf83 = 0;
          _DAT_0273cf7b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0273d410 = "_editTimelineMode";
      _DAT_0273d418 = &DAT_0273cec0;
      _DAT_0273d420 = 0;
      _DAT_0273d428 = 0x6500;
      _DAT_0273d430 = "MUEditTimelineMode";
      _DAT_0273d438 = &DAT_0271ad98;
      _DAT_0273d440 = 0;
      uRam000000000273d448 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_0273d410;
}


