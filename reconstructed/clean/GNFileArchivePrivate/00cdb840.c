// Function: FUN_00cdb840
// Address: 00cdb840
// Size: 854 bytes
// Class: GNFileArchivePrivate
// String references:
//   "GNFileArchivePrivate"

void FUN_00cdb840(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_0256dc20;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  *(void*)((int64_t)this_ptr + 0x14) = 0;
  *(void*)((int64_t)this_ptr + 0x1c) = 0;
  // [STATIC_INIT: property registration]
  if (g_02774e73 == '\0') {
    FUN_00cdbc30();
    FUN_00e87980();
  }
  FUN_00cdbdc0();
  this_ptr[5] = 0;
  // [STATIC_INIT: property registration]
  if (g_02774e73 == '\0') {
    FUN_00cdc080();
    FUN_00e87980();
  }
  FUN_00cdc210();
  FUN_00cdc4d0();
  *(void*)(this_ptr + 8) = 0;
  // [STATIC_INIT: property registration]
  if (g_02774e73 == '\0') {
    FUN_00cdc790();
    FUN_00e87980();
  }
  FUN_00cdc920();
  return;
}

