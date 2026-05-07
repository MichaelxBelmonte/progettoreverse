// Function: FUN_01131d90
// Address: 01131d90
// Size: 952 bytes
// Class: MUDecomposedAudioSignalCopyRegion
// String references:
//   "MUDecomposedAudioSignalCopyRegion"
// === MUDecomposedAudioSignalCopyRegion properties ===
//                   _sourceSignal
//                   _targetSignal
//                   _endSampleIndex
//                   _fadeAtStart
//                   _fadeAtEnd


void FUN_01131d90(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025bd250;
  FUN_011321b0();
  FUN_011324a0();
  this_ptr[4] = 0;
  // [STATIC_INIT: property registration]
  if (g_027995f3 == '\0') {
    FUN_01132790();
    FUN_00e87980();
  }
  this_ptr[5] = 0;
  // [STATIC_INIT: property registration]
  if (g_027995f3 == '\0') {
    FUN_01132900();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 6) = 0;
  // [STATIC_INIT: property registration]
  if (g_027995f3 == '\0') {
    FUN_01132a70();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x31) = 0;
  // [STATIC_INIT: property registration]
  if (g_027995f3 == '\0') {
    FUN_01132be0();
    FUN_00e87980();
  }
  return;
}

