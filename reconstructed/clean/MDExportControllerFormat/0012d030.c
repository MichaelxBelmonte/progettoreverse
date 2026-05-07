// Function: FUN_0012d030
// Address: 0012d030
// Size: 1384 bytes
// Class: MDExportControllerFormat
// String references:
//   "MDExportControllerFormat"
// === MDExportControllerFormat properties ===
//   MDExportFormat  _exportFormat
//   GNSoundFileFormat _soundFileFormat


void FUN_0012d030(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_024d00c0;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e1d13 == '\0') {
    FUN_0012d660();
    FUN_00e87980();
  }
  FUN_0012d8e0();
  FUN_0012dba0();
  FUN_0012de60();
  FUN_0012e120();
  FUN_0012e3e0();
  *(void*)(this_ptr + 7) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e1d13 == '\0') {
    FUN_0012e6a0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x39) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e1d13 == '\0') {
    FUN_0012e830();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x3c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e1d13 == '\0') {
    FUN_0012e9c0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 8) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e1d13 == '\0') {
    FUN_0012ec10();
    FUN_00e87980();
  }
  FUN_0012eda0();
  return;
}

