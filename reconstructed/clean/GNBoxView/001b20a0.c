// Function: FUN_001b20a0
// Address: 001b20a0
// Size: 547 bytes
// Class: GNBoxView
// String references:
//   "GNBoxView"

void FUN_001b20a0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_000a32b0();
  *this_ptr = &g_02674990;
  this_ptr[2] = &g_026752c0;
  *(void*)(this_ptr + 0x27) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e8b2b == '\0') {
    FUN_001b2330();
    FUN_00e87980();
  }
  FUN_001b2580();
  FUN_001b2870();
  *(void*)(this_ptr + 0x2a) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e8b2b == '\0') {
    FUN_001b2af0();
    FUN_00e87980();
  }
  return;
}

