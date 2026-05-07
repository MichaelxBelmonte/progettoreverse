// Function: FUN_002b1d10
// Address: 002b1d10
// Size: 740 bytes
// Class: GNOperationProgressObserver
// String references:
//   "GNOperationProgressObserver"
//   "MDDocumentLoader"

void FUN_002b1d10(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  this_ptr[2] = &g_024c15b0;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_0250fb60;
  this_ptr[2] = &g_0250fee8;
  FUN_002b2090();
  FUN_002b23c0();
  FUN_002b26f0();
  FUN_002b2a20();
  *(void*)(this_ptr + 7) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fc2f3 == '\0') {
    FUN_002b2ce0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x3c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fc2f3 == '\0') {
    FUN_002b2e70();
    FUN_00e87980();
  }
  return;
}

