// Function: FUN_017d81c0
// Address: 017d81c0
// Size: 613 bytes
// Class: MULoopToneDummyEnumRegistrationClass
// String references:
//   "MULoopToneDummyEnumRegistrationClass"
//   "_tone"
//   "MULoopTone"
//   "=MULoopToneUndefined"
//   "=MULoopToneDark"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_017d81c0(void)

{
  bool bVar1;
  int iVar2;
  
  if (DAT_027dd048 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      bVar1 = *DAT_027dd000 != '=';
      _DAT_027dd030 = -(uint)(*DAT_027dd000 == '=');
      _DAT_027dd034 = 0;
      if (*DAT_027dd008 != '=') {
        _DAT_027dd034 = (uint)bVar1;
      }
      _DAT_027dd038 = _DAT_027dd034 + 1;
      _DAT_027dd03c = _DAT_027dd034 + 2;
      DAT_027dd040 = _DAT_027dd034 == bVar1;
      ___cxa_guard_release();
    }
  }
  if (DAT_027dd080 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      _DAT_027dd050 = "MULoopTone";
      _DAT_027dd058 = 4;
      DAT_027dd05c = DAT_027dd040;
      _DAT_027dd060 = &DAT_027dd030;
      _DAT_027dd068 = &DAT_027dd000;
      _DAT_027dd070 = 0;
      uRam00000000027dd078 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_027d40e0 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      if (DAT_027d4098 == '\0') {
        iVar2 = ___cxa_guard_acquire();
        if (iVar2 != 0) {
          _DAT_027d3fe8 = FUN_00d4fe50();
          _DAT_027d3fd0 = "MULoopToneDummyEnumRegistrationClass";
          _DAT_027d3fd8 = 0x10;
          _DAT_027d3fe0 = FUN_017d7f30;
          _DAT_027d3ff0 = 0;
          uRam00000000027d3ff8 = 0;
          _DAT_027d4000 = 0;
          _DAT_027d4078 = 0;
          uRam00000000027d4080 = 0;
          _DAT_027d4088 = 0;
          DAT_027d408a = 3;
          _DAT_027d4008 = 0;
          uRam00000000027d4010 = 0;
          _DAT_027d4018 = 0;
          uRam00000000027d4020 = 0;
          _DAT_027d4028 = 0;
          uRam00000000027d4030 = 0;
          _DAT_027d4038 = 0;
          uRam00000000027d4040 = 0;
          _DAT_027d4048 = 0;
          uRam00000000027d4050 = 0;
          _DAT_027d4058 = 0;
          uRam00000000027d4060 = 0;
          _DAT_027d4068 = 0;
          uRam00000000027d4070 = 0;
          DAT_027d4093 = 0;
          _DAT_027d408b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_027d40a0 = "_tone";
      _DAT_027d40a8 = &DAT_027d3fd0;
      _DAT_027d40b0 = 0;
      _DAT_027d40b8 = 0x6500;
      _DAT_027d40c0 = "MULoopTone";
      _DAT_027d40c8 = &DAT_027dd050;
      _DAT_027d40d0 = 0;
      uRam00000000027d40d8 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_027d40a0;
}


