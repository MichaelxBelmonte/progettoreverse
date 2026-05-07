// Function: FUN_00577460
// Address: 00577460
// Size: 917 bytes
// Class: MDElementInsp
// String references:
//   "MDElementInsp"

void FUN_00577460(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_000a2970();
  *this_ptr = &g_024e4050;
  FUN_00577a00();
  FUN_00577d30();
  FUN_00578060();
  FUN_00578390();
  FUN_005786c0();
  FUN_005789f0();
  FUN_00578d20();
  FUN_00579050();
  FUN_00579380();
  FUN_005796b0();
  FUN_005799e0();
  FUN_00579d10();
  FUN_0057a040();
  *(void*)(this_ptr + 0x27) = 0;
  // [STATIC_INIT: property registration]
  if (g_027026cb == '\0') {
    FUN_0057a370();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x139) = 0;
  // [STATIC_INIT: property registration]
  if (g_027026cb == '\0') {
    FUN_0057a500();
    FUN_00e87980();
  }
  FUN_0057a690();
  FUN_0057a9c0();
  return;
}

