// Function: FUN_001c0c60
// Address: 001c0c60
// Size: 1232 bytes
// Class: GNPropertyObserver
// String references:
//   "GNPropertyObserver"
//   "GNDebugObjectBrowser"
//   "GNBrowserDataSource"

void FUN_001c0c60(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_0005aa20();
  this_ptr[0xe] = &g_02675300;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  this_ptr[0xf] = &g_025768d0;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_026bc408;
  this_ptr[0xe] = &g_026bca10;
  this_ptr[0xf] = &g_026bca98;
  FUN_001c1210();
  FUN_001c1590();
  FUN_001c18c0();
  FUN_001c1bf0();
  FUN_001c1f20();
  FUN_001c2250();
  FUN_001c2580();
  *(void*)(this_ptr + 0x17) = 0;
  // [STATIC_INIT: property registration]
  if (g_026eb14b == '\0') {
    FUN_001c2840();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xb9) = 0;
  // [STATIC_INIT: property registration]
  if (g_026eb14b == '\0') {
    FUN_001c29d0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xba) = 0;
  // [STATIC_INIT: property registration]
  if (g_026eb14b == '\0') {
    FUN_001c2b60();
    FUN_00e87980();
  }
  return;
}

