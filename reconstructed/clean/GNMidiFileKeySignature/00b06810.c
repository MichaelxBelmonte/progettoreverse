// Function: FUN_00b06810
// Address: 00b06810
// Size: 766 bytes
// Class: GNMidiFileKeySignature
// String references:
//   "GNMidiFileKeySignature"

void FUN_00b06810(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_0253afc0;
  this_ptr[2] = 0;
  // [STATIC_INIT: property registration]
  if (g_027631ab == '\0') {
    FUN_00b06b40();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_027631ab == '\0') {
    FUN_00b06cd0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027631ab == '\0') {
    FUN_00b06e60();
    FUN_00e87980();
  }
  return;
}

