// Function: FUN_007b1940
// Address: 007b1940
// Size: 1030 bytes
// Class: GNSoundFile
// String references:
//   "GNSoundFile"
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

undefined * FUN_007b1940(void)

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
  if (DAT_0272b828 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      if (DAT_026d8478 == '\0') {
        iVar2 = ___cxa_guard_acquire();
        if (iVar2 != 0) {
          _DAT_026f9358 = FUN_00d4fe50();
          _DAT_026f9340 = "GNSoundFile";
          _DAT_026f9348 = 0x98;
          _DAT_026f9350 = FUN_00083bc0;
          _DAT_026f9360 = 0;
          uRam00000000026f9368 = 0;
          _DAT_026f9370 = 0;
          _DAT_026f93e8 = 0;
          uRam00000000026f93f0 = 0;
          _DAT_026f93f8 = 0;
          DAT_026f93fa = 3;
          _DAT_026f9378 = 0;
          uRam00000000026f9380 = 0;
          _DAT_026f9388 = 0;
          uRam00000000026f9390 = 0;
          _DAT_026f9398 = 0;
          uRam00000000026f93a0 = 0;
          _DAT_026f93a8 = 0;
          uRam00000000026f93b0 = 0;
          _DAT_026f93b8 = 0;
          uRam00000000026f93c0 = 0;
          _DAT_026f93c8 = 0;
          uRam00000000026f93d0 = 0;
          _DAT_026f93d8 = 0;
          uRam00000000026f93e0 = 0;
          DAT_026f9403 = 0;
          _DAT_026f93fb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0272b7e8 = "_sampleFormat";
      _DAT_0272b7f0 = &DAT_026f9340;
      _DAT_0272b7f8 = 0;
      _DAT_0272b800 = 0x6500;
      _DAT_0272b808 = "GNAudioSampleFormat";
      _DAT_0272b810 = &DAT_026e3108;
      _DAT_0272b818 = 0;
      uRam000000000272b820 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_0272b7e8;
}


