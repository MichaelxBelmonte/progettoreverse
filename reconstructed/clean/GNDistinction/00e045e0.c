// Function: FUN_00e045e0
// Address: 00e045e0
// Size: 500 bytes
// Class: GNDistinction
// String references:
//   "GNDistinction"

void FUN_00e045e0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02585398;
  FUN_00e04820();
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_02784cf3 == '\0') {
    FUN_00e04aa0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1c) = 0;
  // [STATIC_INIT: property registration]
  if (g_02784cf3 == '\0') {
    FUN_00e04c10();
    FUN_00e87980();
  }
  FUN_00e04d80();
  return;
}

