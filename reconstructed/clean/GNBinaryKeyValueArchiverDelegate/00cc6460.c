// Function: FUN_00cc6460
// Address: 00cc6460
// Size: 560 bytes
// Class: GNBinaryKeyValueArchiverDelegate
// String references:
//   "GNBinaryKeyValueArchiverDelegate"
//   "GNBinaryKeyValueUnarchiverDelegate"
//   "GNEditingSyncClient"

void FUN_00cc6460(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  this_ptr[2] = &g_0258ce70;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  this_ptr[3] = &g_0258dd80;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_0256a9e8;
  this_ptr[2] = &g_0256ad78;
  this_ptr[3] = &g_0256adb0;
  FUN_00cc66e0();
  *(void*)(this_ptr + 5) = 0;
  // [STATIC_INIT: property registration]
  if (g_027738f3 == '\0') {
    FUN_00cc69e0();
    FUN_00e87980();
  }
  FUN_00cc6b50();
  FUN_00cc6e40();
  return;
}

