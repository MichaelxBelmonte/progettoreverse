// Function: FUN_00010750
// Address: 00010750
// Size: 665 bytes
// Class: GNAudioPlugInDescription
// String references:
//   "GNAudioPlugInDescription"
//   "GNAudioPlugInKind"
//   "_kind"
//   "=GNAudioAUv2PlugIn"
//   "=GNAudioProcessorPlugIn"
//   "=GNAudioVST3PlugIn"
//   "=GNAudioAAXPlugIn"
//   "=GNAudioAUv3PlugIn"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00010750(void)

{
  int iVar1;
  
  if (DAT_026cc858 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026cc840 = (uint)(*DAT_026cc810 == '=');
      _DAT_026cc844 = 3;
      if (*DAT_026cc818 != '=') {
        _DAT_026cc844 = _DAT_026cc840 + 1;
      }
      _DAT_026cc848 = 5;
      if (*DAT_026cc820 != '=') {
        _DAT_026cc848 = _DAT_026cc844 + 1;
      }
      _DAT_026cc84c = 6;
      if (*DAT_026cc828 != '=') {
        _DAT_026cc84c = _DAT_026cc848 + 1;
      }
      _DAT_026cc850 = 7;
      if (*DAT_026cc830 != '=') {
        _DAT_026cc850 = _DAT_026cc84c + 1;
      }
      DAT_026cc854 = _DAT_026cc844 == _DAT_026cc840 + 1 &&
                     ((_DAT_026cc848 == _DAT_026cc844 + 1 && _DAT_026cc84c == _DAT_026cc848 + 1) &&
                     _DAT_026cc850 == _DAT_026cc84c + 1);
      ___cxa_guard_release();
    }
  }
  if (DAT_026cc890 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026cc860 = "GNAudioPlugInKind";
      _DAT_026cc868 = 5;
      DAT_026cc86c = DAT_026cc854;
      _DAT_026cc870 = &DAT_026cc840;
      _DAT_026cc878 = &DAT_026cc810;
      _DAT_026cc880 = 0;
      uRam00000000026cc888 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_026cc800 == '\0') {
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
      _DAT_026cc7c0 = "_kind";
      _DAT_026cc7c8 = &DAT_026cc4b0;
      _DAT_026cc7d0 = 0;
      _DAT_026cc7d8 = 0x6500;
      _DAT_026cc7e0 = "GNAudioPlugInKind";
      _DAT_026cc7e8 = &DAT_026cc860;
      _DAT_026cc7f0 = 0;
      uRam00000000026cc7f8 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_026cc7c0;
}


