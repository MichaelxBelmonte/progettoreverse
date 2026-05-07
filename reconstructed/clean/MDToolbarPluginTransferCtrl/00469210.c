// Function: FUN_00469210
// Address: 00469210
// Size: 1169 bytes
// Class: MDToolbarPluginTransferCtrl
// String references:
//   "MDToolbarPluginTransferCtrl"

void FUN_00469210(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_0005aa20();
  *this_ptr = &g_024df420;
  FUN_004697e0();
  FUN_00469ad0();
  FUN_00469dc0();
  FUN_0046a0b0();
  FUN_0046a3a0();
  FUN_0046a690();
  FUN_0046a980();
  FUN_0046ac70();
  *(void*)(this_ptr + 0x16) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fdf9b == '\0') {
    FUN_0046af60();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xb1) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fdf9b == '\0') {
    FUN_0046b0d0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xb4) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fdf9b == '\0') {
    FUN_0046b240();
    FUN_00e87980();
  }
  FUN_0046b3b0();
  *(void*)(this_ptr + 0x18) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fdf9b == '\0') {
    FUN_0046b6a0();
    FUN_00e87980();
  }
  return;
}

