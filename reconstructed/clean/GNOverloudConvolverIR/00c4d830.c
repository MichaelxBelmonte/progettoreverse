// Function: FUN_00c4d830
// Address: 00c4d830
// Size: 958 bytes
// Class: GNOverloudConvolverIR
// String references:
//   "GNOverloudConvolverIR"

void FUN_00c4d830(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025571d8;
  FUN_00c4dc50();
  FUN_00c4ded0();
  this_ptr[4] = 0;
  // [STATIC_INIT: property registration]
  if (g_0276df73 == '\0') {
    FUN_00c4e150();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 5) = 0;
  // [STATIC_INIT: property registration]
  if (g_0276df73 == '\0') {
    FUN_00c4e2c0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x2c) = 0;
  // [STATIC_INIT: property registration]
  if (g_0276df73 == '\0') {
    FUN_00c4e430();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 6) = 0;
  // [STATIC_INIT: property registration]
  if (g_0276df73 == '\0') {
    FUN_00c4e5a0();
    FUN_00e87980();
  }
  return;
}

