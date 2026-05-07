// Function: FUN_0056b300
// Address: 0056b300
// Size: 664 bytes
// Class: GNLicenseContext
// String references:
//   "GNLicenseContext"

void FUN_0056b300(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02584c38;
  FUN_0056b6b0();
  FUN_0056b970();
  FUN_0056bc30();
  FUN_0056bef0();
  FUN_0056c290();
  *(void*)(this_ptr + 7) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270dc5b == '\0') {
    FUN_0056c630();
    FUN_00e87980();
  }
  FUN_0056c7c0();
  FUN_0056caf0();
  *(void*)(this_ptr + 10) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270dc5b == '\0') {
    FUN_0056ce20();
    FUN_00e87980();
  }
  return;
}

