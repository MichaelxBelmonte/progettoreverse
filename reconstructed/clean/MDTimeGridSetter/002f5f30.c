// Function: FUN_002f5f30
// Address: 002f5f30
// Size: 1039 bytes
// Class: MDTimeGridSetter
// String references:
//   "MDTimeGridSetter"

void FUN_002f5f30(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_024cea20;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_02710fcb == '\0') {
    FUN_002f6520();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xd) = 0;
  // [STATIC_INIT: property registration]
  if (g_02710fcb == '\0') {
    FUN_002f66b0();
    FUN_00e87980();
  }
  FUN_002f6840();
  FUN_002f6b70();
  FUN_002f6ea0();
  FUN_002f71d0();
  FUN_002f7500();
  FUN_002f7830();
  FUN_002f7b60();
  FUN_002f7e90();
  FUN_002f81c0();
  FUN_002f84f0();
  FUN_002f8820();
  FUN_002f8b50();
  FUN_002f8e80();
  FUN_002f91b0();
  *(void*)(this_ptr + 0x10) = 0;
  // [STATIC_INIT: property registration]
  if (g_02710fcb == '\0') {
    FUN_002f94e0();
    FUN_00e87980();
  }
  return;
}

