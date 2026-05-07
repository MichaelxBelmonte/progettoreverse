// Function: FUN_00bdad20
// Address: 00bdad20
// Size: 605 bytes
// Class: GNPlugInHostDocument
// String references:
//   "GNPlugInHostDocument"

void FUN_00bdad20(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_0254bd30;
  FUN_00bdb000();
  FUN_00bdb2c0();
  *(void*)(this_ptr + 4) = 0;
  // [STATIC_INIT: property registration]
  if (g_02766593 == '\0') {
    FUN_00bdb580();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x21) = 0;
  // [STATIC_INIT: property registration]
  if (g_02766593 == '\0') {
    FUN_00bdb710();
    FUN_00e87980();
  }
  FUN_00bdb8a0();
  FUN_00bdbbd0();
  return;
}

