// Function: FUN_00711930
// Address: 00711930
// Size: 572 bytes
// Class: MDPluginPreferencesController
// String references:
//   "MDPluginPreferencesController"

void FUN_00711930(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_0005aa20();
  *this_ptr = &g_02502c40;
  FUN_00711bf0();
  FUN_00711ee0();
  FUN_007121d0();
  *(void*)(this_ptr + 0x11) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270cce3 == '\0') {
    FUN_007124c0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x8c) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270cce3 == '\0') {
    FUN_00712630();
    FUN_00e87980();
  }
  FUN_007127a0();
  return;
}

