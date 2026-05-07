// Function: FUN_00010c40
// Address: 00010c40
// Size: 519 bytes
// Class: GNAudioPlugInDescription
// String references:
//   "GNAudioPlugInDescription"
//   "GNAudioPlugInValidationState"
//   "_validationState"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00010c40(void)

{
  int iVar1;
  
  if (DAT_026cc9d8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026cc9c0 = _DAT_0238fcc0;
      uRam00000000026cc9c4 = _UNK_0238fcc4;
      uRam00000000026cc9c8 = _UNK_0238fcc8;
      uRam00000000026cc9cc = _UNK_0238fccc;
      DAT_026cc9d0 = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_026cca10 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026cc9e0 = "GNAudioPlugInValidationState";
      _DAT_026cc9e8 = 4;
      DAT_026cc9ec = DAT_026cc9d0;
      _DAT_026cc9f0 = &DAT_026cc9c0;
      _DAT_026cc9f8 = &DAT_026cc990;
      _DAT_026cca00 = 0;
      uRam00000000026cca08 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_026cc988 == '\0') {
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
      _DAT_026cc948 = "_validationState";
      _DAT_026cc950 = &DAT_026cc4b0;
      _DAT_026cc958 = 0;
      _DAT_026cc960 = 0x6500;
      _DAT_026cc968 = "GNAudioPlugInValidationState";
      _DAT_026cc970 = &DAT_026cc9e0;
      _DAT_026cc978 = 0;
      uRam00000000026cc980 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_026cc948;
}


