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

