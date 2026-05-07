// Function: FUN_0165f820
// Address: 0165f820
// Size: 516 bytes
// Class: MUBarSignature
// String references:
//   "MUBarSignature"

void FUN_0165f820(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025ce298;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ed28b == '\0') {
    FUN_0165fa50();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 2) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ed28b == '\0') {
    FUN_0165fbe0();
    FUN_00e87980();
  }
  return;
}

