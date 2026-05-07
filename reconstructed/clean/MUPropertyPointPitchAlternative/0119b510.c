// Function: FUN_0119b510
// Address: 0119b510
// Size: 902 bytes
// Class: MUPropertyPointPitchAlternative
// String references:
//   "MUPropertyPointPitchAlternative"
// === MUPropertyPointPitchAlternative properties ===
//                   _pitchWithoutVibrato
//                   _pitchHorizontality
//                   _pitchHarmonicQuality
//                   _pitchByHarmonics
//                   _centPosIndex
//                   _propertyPointNumber
//                   _relevanceFromDetectionMatrix
//                   _temporaryAuxFloatValue1
//                   _temporaryAuxFloatValue2


void FUN_0119b510(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025f1ef0;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ad703 == '\0') {
    FUN_0119b8c0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 2) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ad703 == '\0') {
    FUN_0119ba30();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x14) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ad703 == '\0') {
    FUN_0119bba0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ad703 == '\0') {
    FUN_0119bd10();
    FUN_00e87980();
  }
  return;
}

