// Function: FUN_01201770
// Address: 01201770
// Size: 1007 bytes
// Class: MUBarSignatureMap
// String references:
//   "MUBarSignatureMap"

void FUN_01201770(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025cf470;
  FUN_01201c00();
  FUN_01201f10();
  FUN_01202190();
  *(void*)(this_ptr + 5) = 0;
  // [STATIC_INIT: property registration]
  if (g_027bd0fb == '\0') {
    FUN_01202410();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x29) = 0;
  // [STATIC_INIT: property registration]
  if (g_027bd0fb == '\0') {
    FUN_01202580();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x2a) = 0;
  // [STATIC_INIT: property registration]
  if (g_027bd0fb == '\0') {
    FUN_012026f0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x2c) = 0x100000000;
  // [STATIC_INIT: property registration]
  if (g_027bd0fb == '\0') {
    FUN_01202860();
    FUN_00e87980();
  }
  FUN_012029d0();
  FUN_01202cc0();
  return;
}

