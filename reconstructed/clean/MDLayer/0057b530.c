// Function: FUN_0057b530
// Address: 0057b530
// Size: 955 bytes
// Class: MDLayer
// String references:
//   "MDLayer"
// === MDLayer properties ===
//   MDLayerState    _state


void FUN_0057b530(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_024f1ec0;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_027102bb == '\0') {
    FUN_0057b970();
    FUN_00e87980();
  }
  FUN_0057bbb0();
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_027102bb == '\0') {
    FUN_0057be30();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x19) = 0;
  // [STATIC_INIT: property registration]
  if (g_027102bb == '\0') {
    FUN_0057bfa0();
    FUN_00e87980();
  }
  FUN_0057c110();
  FUN_0057c3f0();
  *(void*)(this_ptr + 6) = 0;
  // [STATIC_INIT: property registration]
  if (g_027102bb == '\0') {
    FUN_0057c6e0();
    FUN_00e87980();
  }
  return;
}

