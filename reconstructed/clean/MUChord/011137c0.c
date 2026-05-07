// Function: FUN_011137c0
// Address: 011137c0
// Size: 766 bytes
// Class: MUChord
// String references:
//   "MUChord"
// === MUChord properties ===
//                   _tonic
//                   _tuning
//                   _scale
//                   _pitchClasses
//                   _audioSource
//                   _parameterSet


void FUN_011137c0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025fbbb0;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_02794b33 == '\0') {
    FUN_01113af0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 2) = 0;
  // [STATIC_INIT: property registration]
  if (g_02794b33 == '\0') {
    FUN_01113c80();
    FUN_00e87980();
  }
  this_ptr[3] = 0;
  // [STATIC_INIT: property registration]
  if (g_02794b33 == '\0') {
    FUN_01113e10();
    FUN_00e87980();
  }
  return;
}

