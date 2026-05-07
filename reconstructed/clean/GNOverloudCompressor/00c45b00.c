// Function: FUN_00c45b00
// Address: 00c45b00
// Size: 922 bytes
// Class: GNOverloudCompressor
// String references:
//   "GNOverloudCompressor1176"

void FUN_00c45b00(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00b10260();
  *this_ptr = &g_02556528;
  *(void*)(this_ptr + 0x19) = 0;
  // [STATIC_INIT: property registration]
  if (g_0276ddd3 == '\0') {
    FUN_00c45ed0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xcc) = 0;
  // [STATIC_INIT: property registration]
  if (g_0276ddd3 == '\0') {
    FUN_00c46040();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x1a) = 0;
  // [STATIC_INIT: property registration]
  if (g_0276ddd3 == '\0') {
    FUN_00c461b0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xd4) = 0;
  // [STATIC_INIT: property registration]
  if (g_0276ddd3 == '\0') {
    FUN_00c46320();
    FUN_00e87980();
  }
  return;
}

