// Function: FUN_01785110
// Address: 01785110
// Size: 613 bytes
// Class: MULoopComponentPitchRangeDummyEnumRegistrationClass
// String references:
//   "_dummy"
//   "MULoopComponentPitchRangeDummyEnumRegistrationClass"
//   "MULoopComponentPitchRange"
//   "=MULoopComponentPitchRangeUndefined"
//   "=MULoopComponentPitchRangeLow"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_01785110(void)

{
  bool bVar1;
  int iVar2;
  
  if (DAT_027dd1f8 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      bVar1 = *DAT_027dd1b0 != '=';
      _DAT_027dd1e0 = -(uint)(*DAT_027dd1b0 == '=');
      _DAT_027dd1e4 = 0;
      if (*DAT_027dd1b8 != '=') {
        _DAT_027dd1e4 = (uint)bVar1;
      }
      _DAT_027dd1e8 = _DAT_027dd1e4 + 1;
      _DAT_027dd1ec = _DAT_027dd1e4 + 2;
      DAT_027dd1f0 = _DAT_027dd1e4 == bVar1;
      ___cxa_guard_release();
    }
  }
  if (DAT_027dd230 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      _DAT_027dd200 = "MULoopComponentPitchRange";
      _DAT_027dd208 = 4;
      DAT_027dd20c = DAT_027dd1f0;
      _DAT_027dd210 = &DAT_027dd1e0;
      _DAT_027dd218 = &DAT_027dd1b0;
      _DAT_027dd220 = 0;
      uRam00000000027dd228 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_027cedc8 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      if (DAT_027ced80 == '\0') {
        iVar2 = ___cxa_guard_acquire();
        if (iVar2 != 0) {
          _DAT_027cecd0 = FUN_00d4fe50();
          _DAT_027cecb8 = "MULoopComponentPitchRangeDummyEnumRegistrationClass";
          _DAT_027cecc0 = 0x10;
          _DAT_027cecc8 = FUN_01784e80;
          _DAT_027cecd8 = 0;
          uRam00000000027cece0 = 0;
          _DAT_027cece8 = 0;
          _DAT_027ced60 = 0;
          uRam00000000027ced68 = 0;
          _DAT_027ced70 = 0;
          DAT_027ced72 = 3;
          _DAT_027cecf0 = 0;
          uRam00000000027cecf8 = 0;
          _DAT_027ced00 = 0;
          uRam00000000027ced08 = 0;
          _DAT_027ced10 = 0;
          uRam00000000027ced18 = 0;
          _DAT_027ced20 = 0;
          uRam00000000027ced28 = 0;
          _DAT_027ced30 = 0;
          uRam00000000027ced38 = 0;
          _DAT_027ced40 = 0;
          uRam00000000027ced48 = 0;
          _DAT_027ced50 = 0;
          uRam00000000027ced58 = 0;
          DAT_027ced7b = 0;
          _DAT_027ced73 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_027ced88 = "_dummy";
      _DAT_027ced90 = &DAT_027cecb8;
      _DAT_027ced98 = 0;
      _DAT_027ceda0 = 0x6500;
      _DAT_027ceda8 = "MULoopComponentPitchRange";
      _DAT_027cedb0 = &DAT_027dd200;
      _DAT_027cedb8 = 0;
      uRam00000000027cedc0 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_027ced88;
}


