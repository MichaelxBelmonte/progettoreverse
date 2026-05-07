// Function: FUN_011a4100
// Address: 011a4100
// Size: 1228 bytes
// Class: MUSamplerElementRenderer
// String references:
//   "MUSamplerElementRenderer"
// === MUSamplerElementRenderer properties ===
//                   _nextElementTime
//                   _elementStartTime
//                   _playingComponentRenderers


void FUN_011a4100(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_010f3160();
  *this_ptr = &g_025d7e60;
  *(void*)(this_ptr + 0x1d) = 0;
  // [STATIC_INIT: property registration]
  if (g_027af873 == '\0') {
    FUN_011a4690();
    FUN_00e87980();
  }
  this_ptr[0x1e] = 0;
  // [STATIC_INIT: property registration]
  if (g_027af873 == '\0') {
    FUN_011a4800();
    FUN_00e87980();
  }
  this_ptr[0x1f] = 0;
  // [STATIC_INIT: property registration]
  if (g_027af873 == '\0') {
    FUN_011a4970();
    FUN_00e87980();
  }
  this_ptr[0x20] = 0;
  // [STATIC_INIT: property registration]
  if (g_027af873 == '\0') {
    FUN_011a4ae0();
    FUN_00e87980();
  }
  this_ptr[0x21] = 0;
  // [STATIC_INIT: property registration]
  if (g_027af873 == '\0') {
    FUN_011a4c50();
    FUN_00e87980();
  }
  FUN_011a4dc0();
  FUN_011a50b0();
  FUN_011a53a0();
  return;
}

