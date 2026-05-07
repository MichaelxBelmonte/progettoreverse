// Function: FUN_00568140
// Address: 00568140
// Size: 1012 bytes
// Class: GNSerialNumber
// String references:
//   "GNSerialNumber"

void FUN_00568140(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025726d0;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270d5eb == '\0') {
    FUN_00568560();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 2) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270d5eb == '\0') {
    FUN_005686f0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x14) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270d5eb == '\0') {
    FUN_00568880();
    FUN_00e87980();
  }
  this_ptr[3] = 0;
  // [STATIC_INIT: property registration]
  if (g_0270d5eb == '\0') {
    FUN_00568a10();
    FUN_00e87980();
  }
  return;
}

