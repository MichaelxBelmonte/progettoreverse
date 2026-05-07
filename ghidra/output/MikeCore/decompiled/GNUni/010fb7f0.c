// Function: FUN_010fb7f0
// Address: 010fb7f0
// Size: 512 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "MUAudioRecorderCenterDelegate"
//   "MUAudioRecorderCenter"
//   "_audioRecorderCenterDelegate"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_010fb7f0(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_0278f738 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      iVar1 = FUN_00e7ddf0();
      if (DAT_0278f500 == '\0') {
        iVar2 = ___cxa_guard_acquire();
        if (iVar2 != 0) {
          _DAT_0278f450 = FUN_00d4fe50();
          _DAT_0278f438 = "MUAudioRecorderCenter";
          _DAT_0278f440 = 0x40;
          _DAT_0278f448 = FUN_010fa020;
          _DAT_0278f458 = 0;
          uRam000000000278f460 = 0;
          _DAT_0278f468 = 0;
          _DAT_0278f4e0 = 0;
          uRam000000000278f4e8 = 0;
          _DAT_0278f4f0 = 0;
          DAT_0278f4f2 = 1;
          _DAT_0278f470 = 0;
          uRam000000000278f478 = 0;
          _DAT_0278f480 = 0;
          uRam000000000278f488 = 0;
          _DAT_0278f490 = 0;
          uRam000000000278f498 = 0;
          _DAT_0278f4a0 = 0;
          uRam000000000278f4a8 = 0;
          _DAT_0278f4b0 = 0;
          uRam000000000278f4b8 = 0;
          _DAT_0278f4c0 = 0;
          uRam000000000278f4c8 = 0;
          _DAT_0278f4d0 = 0;
          uRam000000000278f4d8 = 0;
          DAT_0278f4fb = 0;
          _DAT_0278f4f3 = 0;
          ___cxa_guard_release();
        }
      }
      DAT_0278f718 = (iVar1 != 0) << 6 | 0x82;
      _DAT_0278f700 = "_audioRecorderCenterDelegate";
      _DAT_0278f708 = &DAT_0278f438;
      _DAT_0278f710 = 0;
      _DAT_0278f720 = 0;
      uRam000000000278f728 = 0;
      _DAT_0278f730 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0278f740 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026cbb60 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02722bf0 = "MUAudioRecorderCenterDelegate";
          DAT_02722c00 = 0;
          _DAT_02722bf8 = 0;
          ___cxa_guard_release();
        }
      }
      FUN_00e87b80();
      ___cxa_guard_release();
    }
  }
  return &DAT_0278f700;
}


