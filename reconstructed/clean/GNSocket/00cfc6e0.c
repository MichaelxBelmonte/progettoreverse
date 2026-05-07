// Function: FUN_00cfc6e0
// Address: 00cfc6e0
// Size: 516 bytes
// Class: GNSocket
// String references:
//   "GNSocket"
// === GNSocket properties ===
//   GNStringEncoding _stringEncoding


void FUN_00cfc6e0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_0257b918;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_027793d3 == '\0') {
    FUN_00cfc910();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 2) = 0;
  // [STATIC_INIT: property registration]
  if (g_027793d3 == '\0') {
    FUN_00cfcca0();
    FUN_00e87980();
  }
  return;
}

