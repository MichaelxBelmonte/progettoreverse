// Function: FUN_005f1790
// Address: 005f1790
// Size: 629 bytes
// Class: MDViewSettings
// String references:
//   "MDViewSettings"
//   "MDInspectorPosition"
//   "_inspectorLeftPosition"
//   "=MDInspectorPositionOff"
//   "=MDInspectorPositionSide"
//   "=MDInspectorPositionArranger"
//   "=MDInspectorPositionEditor"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_005f1790(void)

{
  uint uVar1;
  int iVar2;
  
  if (DAT_02720748 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      _DAT_02720730 = -(uint)(*DAT_02720700 == '=');
      uVar1 = (uint)(*DAT_02720700 != '=');
      _DAT_02720734 = 0;
      if (*DAT_02720708 != '=') {
        _DAT_02720734 = uVar1;
      }
      _DAT_02720738 = 1;
      if (*DAT_02720710 != '=') {
        _DAT_02720738 = _DAT_02720734 + 1;
      }
      _DAT_0272073c = 2;
      if (*DAT_02720718 != '=') {
        _DAT_0272073c = _DAT_02720738 + 1;
      }
      DAT_02720740 = _DAT_02720734 == uVar1 &&
                     (_DAT_02720738 == _DAT_02720734 + 1 && _DAT_0272073c == _DAT_02720738 + 1);
      ___cxa_guard_release();
    }
  }
  if (DAT_02720780 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      _DAT_02720750 = "MDInspectorPosition";
      _DAT_02720758 = 4;
      DAT_0272075c = DAT_02720740;
      _DAT_02720760 = &DAT_02720730;
      _DAT_02720768 = &DAT_02720700;
      _DAT_02720770 = 0;
      uRam0000000002720778 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_027206f8 == '\0') {
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
      _DAT_027206b8 = "_inspectorLeftPosition";
      _DAT_027206c0 = &DAT_027205e8;
      _DAT_027206c8 = 0;
      _DAT_027206d0 = 0x6500;
      _DAT_027206d8 = "MDInspectorPosition";
      _DAT_027206e0 = &DAT_02720750;
      _DAT_027206e8 = 0;
      uRam00000000027206f0 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_027206b8;
}


