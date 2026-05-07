// Function: FUN_001c7e80
// Address: 001c7e80
// Size: 660 bytes
// Class: GNEvent
// String references:
//   "_type"
//   "GNEvent"
//   "GNEventType"
//   "=GNTextInputEvent"
//   "=GNMagnifyEvent"
//   "=GNRotateEvent"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_001c7e80(void)

{
  int iVar1;
  bool bVar2;
  
  if (DAT_026ec518 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026ec4e0 = _DAT_0238fcc0;
      uRam00000000026ec4e8 = _UNK_0238fcc8;
      _DAT_026ec4f0 = _DAT_0238ff10;
      uRam00000000026ec4f4 = _UNK_0238ff14;
      uRam00000000026ec4f8 = _UNK_0238ff18;
      uRam00000000026ec4fc = _UNK_0238ff1c;
      _DAT_026ec500 = 0x900000008;
      bVar2 = *DAT_026ec4c0 == '=';
      _DAT_026ec508 = (uint)bVar2 * 4 + 10;
      iVar1 = (uint)bVar2 * 4 + 0xb;
      _DAT_026ec50c = 0xf;
      if (*DAT_026ec4c8 != '=') {
        _DAT_026ec50c = iVar1;
      }
      _DAT_026ec510 = 0x10;
      if (*DAT_026ec4d0 != '=') {
        _DAT_026ec510 = _DAT_026ec50c + 1;
      }
      DAT_026ec514 = (_DAT_026ec50c == iVar1 && _DAT_026ec510 == _DAT_026ec50c + 1) && !bVar2;
      ___cxa_guard_release();
    }
  }
  if (DAT_026ec550 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026ec520 = "GNEventType";
      _DAT_026ec528 = 0xd;
      DAT_026ec52c = DAT_026ec514;
      _DAT_026ec530 = &DAT_026ec4e0;
      _DAT_026ec538 = &DAT_026ec470;
      DAT_026ec540 = 0;
      uRam00000000026ec548 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_026ec468 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026ec420 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027e3fc8 = FUN_00d4fe50();
          _DAT_027e3fb0 = "GNEvent";
          _DAT_027e3fb8 = 0x50;
          _DAT_027e3fc0 = FUN_001c75c0;
          _DAT_027e3fd0 = 0;
          uRam00000000027e3fd8 = 0;
          _DAT_027e3fe0 = 0;
          uRam00000000027e3fe8 = 0;
          _DAT_027e3ff0 = 0;
          uRam00000000027e3ff8 = 0;
          _DAT_027e4000 = 0;
          uRam00000000027e4008 = 0;
          _DAT_027e4010 = 0;
          uRam00000000027e4018 = 0;
          _DAT_027e4020 = 0;
          uRam00000000027e4028 = 0;
          _DAT_027e4030 = 0;
          uRam00000000027e4038 = 0;
          _DAT_027e4040 = 0;
          uRam00000000027e4048 = 0;
          _DAT_027e4050 = 0;
          uRam00000000027e4058 = 0;
          _DAT_027e4060 = 0;
          uRam00000000027e4068 = 0;
          _DAT_027e4070 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_026ec428 = "_type";
      _DAT_026ec430 = &DAT_027e3fb0;
      _DAT_026ec438 = 0;
      _DAT_026ec440 = 0x6500;
      _DAT_026ec448 = "GNEventType";
      _DAT_026ec450 = &DAT_026ec520;
      _DAT_026ec458 = 0;
      uRam00000000026ec460 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_026ec428;
}


