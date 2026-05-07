// Function: FUN_005f3190
// Address: 005f3190
// Size: 598 bytes
// Class: MDViewSettings
// String references:
//   "MDViewSettings"
//   "MUEditTimelineMode"
//   "_tempoEditorInEditor"
//   "=MUEditTimelineModeNone"
//   "=MUEditTimelineAndStretchElementsMode"
//   "=MUEditTimelineBackgroundOnlyMode"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_005f3190(void)

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
  if (DAT_02720ae0 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      if (DAT_027206b0 == '\0') {
        iVar2 = ___cxa_guard_acquire();
        if (iVar2 != 0) {
          _DAT_02720600 = FUN_00d4fe50();
          _DAT_027205e8 = "MDViewSettings";
          _DAT_027205f0 = 0x88;
          _DAT_027205f8 = FUN_005f0b30;
          _DAT_02720608 = 0;
          uRam0000000002720610 = 0;
          _DAT_02720618 = 0;
          uRam0000000002720620 = 0;
          _DAT_02720628 = 0;
          uRam0000000002720630 = 0;
          _DAT_02720638 = 0;
          uRam0000000002720640 = 0;
          _DAT_02720648 = 0;
          uRam0000000002720650 = 0;
          _DAT_02720658 = 0;
          uRam0000000002720660 = 0;
          _DAT_02720668 = 0;
          uRam0000000002720670 = 0;
          _DAT_02720678 = 0;
          uRam0000000002720680 = 0;
          _DAT_02720688 = 0;
          uRam0000000002720690 = 0;
          _DAT_02720698 = 0;
          uRam00000000027206a0 = 0;
          _DAT_027206a8 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02720aa0 = "_tempoEditorInEditor";
      _DAT_02720aa8 = &DAT_027205e8;
      _DAT_02720ab0 = 0;
      _DAT_02720ab8 = 0x6500;
      _DAT_02720ac0 = "MUEditTimelineMode";
      _DAT_02720ac8 = &DAT_0271ad98;
      _DAT_02720ad0 = 0;
      uRam0000000002720ad8 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_02720aa0;
}


