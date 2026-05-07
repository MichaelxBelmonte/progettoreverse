// Function: GNFastFourierTransformer_constructor
// Address: 0003e610
// Size: 789 bytes
// Class: GNFastFourierTransformer
// String references:
//   "GNFastFourierTransformer"

void GNFastFourierTransformer_constructor(void)

{
  uint64_t uVar1;
  int iVar2;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_0258fad0;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_0277799b == '\0') {
    FUN_0003e950();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 2) = 0;
  // [STATIC_INIT: property registration]
  if (g_0277799b == '\0') {
    FUN_0003eae0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x14) = 0;
  // [STATIC_INIT: property registration]
  if (g_0277799b == '\0') {
    FUN_0003ec70();
    FUN_00e87980();
  }
  this_ptr[5] = *(void*)(arg1 + 0x28);
  uVar1 = *(void*)(arg1 + 0x20);
  this_ptr[3] = *(void*)(arg1 + 0x18);
  this_ptr[4] = uVar1;
  return;
}

