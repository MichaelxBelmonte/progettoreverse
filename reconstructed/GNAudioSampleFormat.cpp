// Reconstructed implementation of GNAudioSampleFormat
// From MikeCore binary — reverse-engineered pseudocode

#include "GNAudioSampleFormat.h"

// ============================================================
// @007b7bf0 — 824 bytes
// str: ""GNAudioSampleFormat""
// str: ""_sampleFormat""
// str: ""=GNAudioInvalidSampleFormat""
// str: ""=GNAudioPCM16IntMSB""
// str: ""=GNAudioPCM24IntMSB""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_007b7bf0(void)

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
  if (DAT_0272c5c0 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      _DAT_0272c588 = FUN_007b6e40();
      _DAT_0272c580 = "_sampleFormat";
      _DAT_0272c590 = 0;
      _DAT_0272c598 = 0x6500;
      _DAT_0272c5a0 = "GNAudioSampleFormat";
      _DAT_0272c5a8 = &DAT_026e3108;
      _DAT_0272c5b0 = 0;
      uRam000000000272c5b8 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_0272c580;
}



