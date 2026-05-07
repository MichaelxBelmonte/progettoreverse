// Function: FUN_002d6160
// Address: 002d6160
// Size: 570 bytes
// Class: MDProjectAudioSource
// String references:
//   "MDProjectAudioSource"
// === MDProjectAudioSource properties ===
//   MDProjectAudioSourceLocation _location
//   MDProjectAudioSourceStatus _status


void FUN_002d6160(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_024de268;
  FUN_002d6400();
  FUN_002d6730();
  *(void*)(this_ptr + 4) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd09b == '\0') {
    FUN_002d6a60();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x24) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd09b == '\0') {
    FUN_002d6cb0();
    FUN_00e87980();
  }
  return;
}

