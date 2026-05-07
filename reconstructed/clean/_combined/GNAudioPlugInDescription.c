// ===================================================================
// GNAudioPlugInDescription — Complete reconstructed pseudocode
// 4 functions
// ===================================================================

// Registered properties (7):
//   GNAudioPlugInValidationState _validationState
//   GNAudioPlugInKind _kind
//   GNAudioPlugInType _type
//                   _lastTestResults
//                   _isEnabled
//                   _isAvailable
//                   _supportedChannelFormats


// ============================================================
// 00010750
// ============================================================
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



// ============================================================
// 0000ef30
// ============================================================
// Function: FUN_0000ef30
// Address: 0000ef30
// Size: 1255 bytes
// Class: GNAudioPlugInDescription
// String references:
//   "GNAudioPlugInDescription"
// === GNAudioPlugInDescription properties ===
//   GNAudioPlugInValidationState _validationState
//   GNAudioPlugInKind _kind
//   GNAudioPlugInType _type
//                   _lastTestResults
//                   _isEnabled
//                   _isAvailable
//                   _supportedChannelFormats


void FUN_0000ef30(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02531978;
  FUN_0000f500();
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_026cc56b == '\0') {
    FUN_0000f780();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x19) = 0;
  // [STATIC_INIT: property registration]
  if (g_026cc56b == '\0') {
    FUN_0000f8f0();
    FUN_00e87980();
  }
  FUN_0000fa60();
  FUN_0000fd50();
  FUN_0000ffd0();
  FUN_00010250();
  FUN_000104d0();
  *(void*)(this_ptr + 9) = 0;
  // [STATIC_INIT: property registration]
  if (g_026cc56b == '\0') {
    FUN_00010750();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x4c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026cc56b == '\0') {
    FUN_00010a10();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 10) = 0;
  // [STATIC_INIT: property registration]
  if (g_026cc56b == '\0') {
    FUN_00010c40();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 00010c40
// ============================================================
// Function: FUN_00010c40
// Address: 00010c40
// Size: 519 bytes
// Class: GNAudioPlugInDescription
// String references:
//   "GNAudioPlugInDescription"
//   "GNAudioPlugInValidationState"
//   "_validationState"
// === GNAudioPlugInDescription properties ===
//   GNAudioPlugInValidationState _validationState
//   GNAudioPlugInKind _kind
//   GNAudioPlugInType _type
//                   _lastTestResults
//                   _isEnabled
//                   _isAvailable
//                   _supportedChannelFormats


void* FUN_00010c40(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_026cc948 = "_validationState";
      g_026cc950 = &g_026cc4b0;
      g_026cc958 = 0;
      g_026cc960 = 0x6500;
      g_026cc968 = "GNAudioPlugInValidationState";
      g_026cc970 = &g_026cc9e0;
      g_026cc978 = 0;
      ram_00000000026cc980 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_026cc948;
}



// ============================================================
// 00010a10
// ============================================================
// Function: FUN_00010a10
// Address: 00010a10
// Size: 522 bytes
// Class: GNAudioPlugInDescription
// String references:
//   "GNAudioPlugInDescription"
//   "GNAudioPlugInType"
//   "_type"
// === GNAudioPlugInDescription properties ===
//   GNAudioPlugInValidationState _validationState
//   GNAudioPlugInKind _kind
//   GNAudioPlugInType _type
//                   _lastTestResults
//                   _isEnabled
//                   _isAvailable
//                   _supportedChannelFormats


void* FUN_00010a10(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_026cc898 = "_type";
      g_026cc8a0 = &g_026cc4b0;
      g_026cc8a8 = 0;
      g_026cc8b0 = 0x6500;
      g_026cc8b8 = "GNAudioPlugInType";
      g_026cc8c0 = &g_026cc910;
      g_026cc8c8 = 0;
      ram_00000000026cc8d0 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_026cc898;
}

