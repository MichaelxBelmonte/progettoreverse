// Function: FUN_000a0cb0
// Address: 000a0cb0
// Size: 862 bytes
// Class: GNInspector
// String references:
//   "GNInspector"

void FUN_000a0cb0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_0005aa20();
  *this_ptr = &g_026b2f00;
  FUN_000a1100();
  *(void*)(this_ptr + 0xf) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d926b == '\0') {
    FUN_000a1380();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x79) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d926b == '\0') {
    FUN_000a14f0();
    FUN_00e87980();
  }
  FUN_000a1660();
  *(void*)(this_ptr + 0x11) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d926b == '\0') {
    FUN_000a18e0();
    FUN_00e87980();
  }
  FUN_000a1a50();
  FUN_000a1cd0();
  FUN_000a1fc0();
  FUN_000a22b0();
  FUN_000a25a0();
  return;
}

