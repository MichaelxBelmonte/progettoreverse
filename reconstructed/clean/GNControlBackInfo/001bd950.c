// Function: FUN_001bd950
// Address: 001bd950
// Size: 1150 bytes
// Class: GNControlBackInfo
// String references:
//   "GNControlBackInfo"
// === GNControlBackInfo properties ===
//                   _pressedImage
//                   _bounds
//                   _contentRect
//                   _loaded
//                   _scalingMask
//                   _next


void FUN_001bd950(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_024d6a08;
  FUN_001bde90();
  FUN_001be150();
  FUN_001be410();
  FUN_001be6d0();
  this_ptr[6] = 0;
  this_ptr[7] = 0;
  // [STATIC_INIT: property registration]
  if (g_026ea87b == '\0') {
    FUN_001be990();
    FUN_00e87980();
  }
  this_ptr[8] = 0;
  this_ptr[9] = 0;
  // [STATIC_INIT: property registration]
  if (g_026ea87b == '\0') {
    FUN_001beb20();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 10) = 0;
  // [STATIC_INIT: property registration]
  if (g_026ea87b == '\0') {
    FUN_001becb0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x54) = 0;
  // [STATIC_INIT: property registration]
  if (g_026ea87b == '\0') {
    FUN_001bee40();
    FUN_00e87980();
  }
  FUN_001befd0();
  FUN_001bf290();
  return;
}

