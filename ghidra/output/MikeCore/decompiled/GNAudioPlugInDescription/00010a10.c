// Function: FUN_00010a10
// Address: 00010a10
// Size: 522 bytes
// Class: GNAudioPlugInDescription
// String references:
//   "GNAudioPlugInDescription"
//   "GNAudioPlugInType"
//   "_type"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00010a10(void)

{
  int iVar1;
  
  if (DAT_026cc908 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026cc8f8 = 0x100000000;
      DAT_026cc900 = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_026cc940 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026cc910 = "GNAudioPlugInType";
      _DAT_026cc918 = 2;
      DAT_026cc91c = DAT_026cc900;
      _DAT_026cc920 = &DAT_026cc8f8;
      _DAT_026cc928 = &DAT_026cc8e0;
      _DAT_026cc930 = 0;
      uRam00000000026cc938 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_026cc8d8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026cc578 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026cc4c8 = FUN_00d4fe50();
          _DAT_026cc4b0 = "GNAudioPlugInDescription";
          _DAT_026cc4b8 = 0x58;
          _DAT_026cc4c0 = FUN_0000ee40;
          _DAT_026cc4d0 = 0;
          uRam00000000026cc4d8 = 0;
          _DAT_026cc4e0 = 0;
          uRam00000000026cc4e8 = 0;
          _DAT_026cc4f0 = 0;
          uRam00000000026cc4f8 = 0;
          _DAT_026cc500 = 0;
          uRam00000000026cc508 = 0;
          _DAT_026cc510 = 0;
          uRam00000000026cc518 = 0;
          _DAT_026cc520 = 0;
          uRam00000000026cc528 = 0;
          _DAT_026cc530 = 0;
          uRam00000000026cc538 = 0;
          _DAT_026cc540 = 0;
          uRam00000000026cc548 = 0;
          _DAT_026cc550 = 0;
          uRam00000000026cc558 = 0;
          _DAT_026cc560 = 0;
          uRam00000000026cc568 = 0;
          _DAT_026cc570 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_026cc898 = "_type";
      _DAT_026cc8a0 = &DAT_026cc4b0;
      _DAT_026cc8a8 = 0;
      _DAT_026cc8b0 = 0x6500;
      _DAT_026cc8b8 = "GNAudioPlugInType";
      _DAT_026cc8c0 = &DAT_026cc910;
      _DAT_026cc8c8 = 0;
      uRam00000000026cc8d0 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_026cc898;
}


