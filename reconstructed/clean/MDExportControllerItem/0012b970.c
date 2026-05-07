// Function: FUN_0012b970
// Address: 0012b970
// Size: 612 bytes
// Class: MDExportControllerItem
// String references:
//   "MDExportControllerItem"
// === MDExportControllerItem properties ===
//                   _track
//                   _fileName
//                   _isChecked
//                   _needsFilePath


void FUN_0012b970(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_024cfd48;
  FUN_0012bc70();
  FUN_0012bfa0();
  FUN_0012c2c0();
  FUN_0012c580();
  FUN_0012c840();
  *(void*)(this_ptr + 7) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e1a4b == '\0') {
    FUN_0012cb00();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x39) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e1a4b == '\0') {
    FUN_0012cc90();
    FUN_00e87980();
  }
  return;
}

