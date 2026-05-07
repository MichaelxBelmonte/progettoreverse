// Function: FUN_005ca0e0
// Address: 005ca0e0
// Size: 1125 bytes
// Class: MDFileBrowserInsp
// String references:
//   "MDFileBrowserInsp"
//   "MUBrowserViewDelegate"
// === MDFileBrowserInsp properties ===
//   MDFileBrowserInspectorMode _mode


void FUN_005ca0e0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_000a2970();
  this_ptr[0x1a] = &g_02667b80;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_024eb6e8;
  this_ptr[0x1a] = &g_024ebe28;
  FUN_005ca7a0();
  FUN_005caad0();
  FUN_005cad90();
  FUN_005cb0c0();
  FUN_005cb3f0();
  FUN_005cb720();
  FUN_005cba50();
  *(void*)(this_ptr + 0x22) = 0;
  // [STATIC_INIT: property registration]
  if (g_0271b39b == '\0') {
    FUN_005cbd80();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x114) = 0;
  // [STATIC_INIT: property registration]
  if (g_0271b39b == '\0') {
    FUN_005cbfe0();
    FUN_00e87980();
  }
  FUN_005cc170();
  FUN_005cc4a0();
  FUN_005cc7d0();
  FUN_005ccb00();
  FUN_005cce30();
  FUN_005cd0f0();
  FUN_005cd420();
  FUN_005cd6e0();
  FUN_005cda10();
  FUN_005cdd40();
  FUN_005ce070();
  return;
}

