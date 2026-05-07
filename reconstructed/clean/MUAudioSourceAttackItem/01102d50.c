// Function: FUN_01102d50
// Address: 01102d50
// Size: 962 bytes
// Class: MUAudioSourceAttackItem
// String references:
//   "MUAudioSourceAttackItem"

void FUN_01102d50(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_010ff5d0();
  *this_ptr = &g_025e6260;
  this_ptr[7] = &g_025e66c0;
  this_ptr[0x19] = 0;
  // [STATIC_INIT: property registration]
  if (g_0272f86b == '\0') {
    FUN_01103140();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x1a) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272f86b == '\0') {
    FUN_011032b0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xd4) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272f86b == '\0') {
    FUN_01103420();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x1b) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272f86b == '\0') {
    FUN_01103590();
    FUN_00e87980();
  }
  FUN_01103700();
  return;
}

