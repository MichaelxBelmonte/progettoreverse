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
// === GNAudioPlugInDescription properties ===
//   GNAudioPlugInValidationState _validationState
//   GNAudioPlugInKind _kind
//   GNAudioPlugInType _type
//                   _lastTestResults
//                   _isEnabled
//                   _isAvailable
//                   _supportedChannelFormats


void* FUN_00010750(void)

{
  int iVar1;
  
  if (g_026cc858 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      g_026cc840 = (uint)(*g_026cc810 == '=');
      g_026cc844 = 3;
      if (*g_026cc818 != '=') {
        g_026cc844 = g_026cc840 + 1;
      }
      g_026cc848 = 5;
      if (*g_026cc820 != '=') {
        g_026cc848 = g_026cc844 + 1;
      }
      g_026cc84c = 6;
      if (*g_026cc828 != '=') {
        g_026cc84c = g_026cc848 + 1;
      }
      g_026cc850 = 7;
      if (*g_026cc830 != '=') {
        g_026cc850 = g_026cc84c + 1;
      }
      g_026cc854 = g_026cc844 == g_026cc840 + 1 &&
                     ((g_026cc848 == g_026cc844 + 1 && g_026cc84c == g_026cc848 + 1) &&
                     g_026cc850 == g_026cc84c + 1);
      ___cxa_guard_release();
    }
  }
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_026cc7c0 = "_kind";
      g_026cc7c8 = &g_026cc4b0;
      g_026cc7d0 = 0;
      g_026cc7d8 = 0x6500;
      g_026cc7e0 = "GNAudioPlugInKind";
      g_026cc7e8 = &g_026cc860;
      g_026cc7f0 = 0;
      ram_00000000026cc7f8 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_026cc7c0;
}

