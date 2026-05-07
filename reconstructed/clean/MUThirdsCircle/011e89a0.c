// Function: FUN_011e89a0
// Address: 011e89a0
// Size: 1119 bytes
// Class: MUThirdsCircle
// String references:
//   "PNTestChord"
// === MUThirdsCircle properties ===
//                   _thirdsCircleValues
//                   _chordExtension
//                   _fundamentalPitchClass
//                   _matchQuality


void FUN_011e89a0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025f45c8;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_027bc69b == '\0') {
    FUN_011e8e30();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 2) = 0;
  // [STATIC_INIT: property registration]
  if (g_027bc69b == '\0') {
    FUN_011e8fa0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x14) = 0;
  // [STATIC_INIT: property registration]
  if (g_027bc69b == '\0') {
    FUN_011e9110();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_027bc69b == '\0') {
    FUN_011e9280();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027bc69b == '\0') {
    FUN_011e93f0();
    FUN_00e87980();
  }
  return;
}

