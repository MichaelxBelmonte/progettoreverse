// Function: FUN_00046ae0
// Address: 00046ae0
// Size: 1175 bytes
// Class: GNJobCenter
// String references:
//   "GNJobCenter"

void FUN_00046ae0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_0258a2f8;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d23eb == '\0') {
    FUN_00047080();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 2) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d23eb == '\0') {
    FUN_00047210();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x14) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d23eb == '\0') {
    FUN_000473a0();
    FUN_00e87980();
  }
  FUN_00047530();
  FUN_00047860();
  FUN_00047b90();
  FUN_00047e50();
  FUN_00048110();
  FUN_00048440();
  FUN_00048770();
  *(void*)(this_ptr + 10) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d23eb == '\0') {
    FUN_00048aa0();
    FUN_00e87980();
  }
  return;
}

