// Function: FUN_00135c10
// Address: 00135c10
// Size: 1002 bytes
// Class: MDExportControllerHelper
// String references:
//   "MDExportControllerHelper"
//   "GNAudioSampleFormat"
//   "_sampleFormat"
//   "=GNAudioInvalidSampleFormat"
//   "=GNAudioPCM16IntMSB"
//   "=GNAudioPCM24IntMSB"
//   "=GNAudioPCM32IntMSB"
//   "=GNAudioPCM32FloatMSB"
//   "=GNAudioPCM64FloatMSB"
//   "=GNAudioPCM32IntMSB16"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00135c10(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (DAT_026e3100 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      _DAT_026e3080 = -(uint)(*DAT_026e2f80 == '=');
      uVar3 = (uint)(*DAT_026e2f80 != '=');
      DAT_026e3084 = 0;
      if (*DAT_026e2f88 != '=') {
        DAT_026e3084 = uVar3;
      }
      iVar2 = DAT_026e3084 + 1;
      DAT_026e3088 = 1;
      if (*DAT_026e2f90 != '=') {
        DAT_026e3088 = iVar2;
      }
      iVar6 = DAT_026e3088 + 1;
      DAT_026e308c = 2;
      if (*DAT_026e2f98 != '=') {
        DAT_026e308c = iVar6;
      }
      iVar8 = DAT_026e308c + 1;
      DAT_026e3090 = 3;
      if (*DAT_026e2fa0 != '=') {
        DAT_026e3090 = iVar8;
      }
      iVar7 = DAT_026e3090 + 1;
      DAT_026e3094 = 4;
      if (*DAT_026e2fa8 != '=') {
        DAT_026e3094 = iVar7;
      }
      iVar5 = DAT_026e3094 + 1;
      DAT_026e3098 = 8;
      if (*DAT_026e2fb0 != '=') {
        DAT_026e3098 = iVar5;
      }
      iVar4 = DAT_026e3098 + 1;
      bVar1 = FUN_00136020(9,iVar4,10,0xb,0x14,0x18,0x19,0x1a,0x1b,0x40,0x41,0x42,0x43,0x44,0x45);
      DAT_026e30f8 = DAT_026e3084 == uVar3 &
                     (DAT_026e3088 == iVar2 &&
                     (DAT_026e308c == iVar6 &&
                     (DAT_026e3090 == iVar8 && (DAT_026e3094 == iVar7 && DAT_026e3098 == iVar5)))) &
                     bVar1 & DAT_026e309c == iVar4;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e3138 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      _DAT_026e3108 = "GNAudioSampleFormat";
      _DAT_026e3110 = 0x1e;
      DAT_026e3114 = DAT_026e30f8;
      _DAT_026e3118 = &DAT_026e3080;
      _DAT_026e3120 = &DAT_026e2f80;
      _DAT_026e3128 = 0;
      uRam00000000026e3130 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_026e2f70 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      if (DAT_026e2e98 == '\0') {
        iVar2 = ___cxa_guard_acquire();
        if (iVar2 != 0) {
          _DAT_026e2de8 = FUN_00d4fe50();
          _DAT_026e2dd0 = "MDExportControllerHelper";
          _DAT_026e2dd8 = 0x30;
          _DAT_026e2de0 = FUN_00135230;
          _DAT_026e2df0 = 0;
          uRam00000000026e2df8 = 0;
          _DAT_026e2e00 = 0;
          uRam00000000026e2e08 = 0;
          _DAT_026e2e10 = 0;
          uRam00000000026e2e18 = 0;
          _DAT_026e2e20 = 0;
          uRam00000000026e2e28 = 0;
          _DAT_026e2e30 = 0;
          uRam00000000026e2e38 = 0;
          _DAT_026e2e40 = 0;
          uRam00000000026e2e48 = 0;
          _DAT_026e2e50 = 0;
          uRam00000000026e2e58 = 0;
          _DAT_026e2e60 = 0;
          uRam00000000026e2e68 = 0;
          _DAT_026e2e70 = 0;
          uRam00000000026e2e78 = 0;
          _DAT_026e2e80 = 0;
          uRam00000000026e2e88 = 0;
          _DAT_026e2e90 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_026e2f30 = "_sampleFormat";
      _DAT_026e2f38 = &DAT_026e2dd0;
      _DAT_026e2f40 = 0;
      _DAT_026e2f48 = 0x6500;
      _DAT_026e2f50 = "GNAudioSampleFormat";
      _DAT_026e2f58 = &DAT_026e3108;
      _DAT_026e2f60 = 0;
      uRam00000000026e2f68 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_026e2f30;
}


