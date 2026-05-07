// Function: FUN_001353a0
// Address: 001353a0
// Size: 1136 bytes
// Class: MDExportControllerHelper
// String references:
//   "MDExportControllerHelper"
// === MDExportControllerHelper properties ===
//   GNAudioSampleFormat _sampleFormat


void FUN_001353a0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_024d07b0;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e2e8b == '\0') {
    FUN_00135840();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 2) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e2e8b == '\0') {
    FUN_00135aa0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x14) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e2e8b == '\0') {
    FUN_00135c10();
    FUN_00e87980();
  }
  this_ptr[3] = 0;
  // [STATIC_INIT: property registration]
  if (g_026e2e8b == '\0') {
    FUN_001363b0();
    FUN_00e87980();
  }
  this_ptr[4] = 0;
  // [STATIC_INIT: property registration]
  if (g_026e2e8b == '\0') {
    FUN_00136520();
    FUN_00e87980();
  }
  FUN_00136690();
  return;
}

