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
// === MDExportControllerHelper properties ===
//   GNAudioSampleFormat _sampleFormat


void* FUN_00135c10(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (g_026e3100 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      g_026e3080 = -(uint)(*g_026e2f80 == '=');
      uVar3 = (uint)(*g_026e2f80 != '=');
      g_026e3084 = 0;
      if (*g_026e2f88 != '=') {
        g_026e3084 = uVar3;
      }
      iVar2 = g_026e3084 + 1;
      g_026e3088 = 1;
      if (*g_026e2f90 != '=') {
        g_026e3088 = iVar2;
      }
      iVar6 = g_026e3088 + 1;
      g_026e308c = 2;
      if (*g_026e2f98 != '=') {
        g_026e308c = iVar6;
      }
      iVar8 = g_026e308c + 1;
      g_026e3090 = 3;
      if (*g_026e2fa0 != '=') {
        g_026e3090 = iVar8;
      }
      iVar7 = g_026e3090 + 1;
      g_026e3094 = 4;
      if (*g_026e2fa8 != '=') {
        g_026e3094 = iVar7;
      }
      iVar5 = g_026e3094 + 1;
      g_026e3098 = 8;
      if (*g_026e2fb0 != '=') {
        g_026e3098 = iVar5;
      }
      iVar4 = g_026e3098 + 1;
      bVar1 = FUN_00136020(9,iVar4,10,0xb,0x14,0x18,0x19,0x1a,0x1b,0x40,0x41,0x42,0x43,0x44,0x45);
      g_026e30f8 = g_026e3084 == uVar3 &
                     (g_026e3088 == iVar2 &&
                     (g_026e308c == iVar6 &&
                     (g_026e3090 == iVar8 && (g_026e3094 == iVar7 && g_026e3098 == iVar5)))) &
                     bVar1 & g_026e309c == iVar4;
      ___cxa_guard_release();
    }
  }
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_026e2f30 = "_sampleFormat";
      g_026e2f38 = &g_026e2dd0;
      g_026e2f40 = 0;
      g_026e2f48 = 0x6500;
      g_026e2f50 = "GNAudioSampleFormat";
      g_026e2f58 = &g_026e3108;
      g_026e2f60 = 0;
      ram_00000000026e2f68 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_026e2f30;
}

