// ===================================================================
// MUSamplerComponentRenderer — Complete reconstructed pseudocode
// 1 functions
// ===================================================================

// Registered properties (3):
//                   _sampler
//                   _sourceTime
//                   _functionHint


// ============================================================
// 011a2660
// ============================================================
// Function: FUN_011a2660
// Address: 011a2660
// Size: 1462 bytes
// Class: MUSamplerComponentRenderer
// String references:
//   "MUSamplerComponentRenderer"
// === MUSamplerComponentRenderer properties ===
//                   _sampler
//                   _sourceTime
//                   _functionHint


void FUN_011a2660(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_010f3160();
  *this_ptr = &g_025e16b8;
  FUN_011a2cf0();
  FUN_011a2fe0();
  FUN_011a32d0();
  *(void*)(this_ptr + 0x20) = 0;
  // [STATIC_INIT: property registration]
  if (g_027af51b == '\0') {
    FUN_011a35c0();
    FUN_00e87980();
  }
  this_ptr[0x21] = 0;
  // [STATIC_INIT: property registration]
  if (g_027af51b == '\0') {
    FUN_011a3730();
    FUN_00e87980();
  }
  this_ptr[0x22] = 0;
  // [STATIC_INIT: property registration]
  if (g_027af51b == '\0') {
    FUN_011a38a0();
    FUN_00e87980();
  }
  this_ptr[0x23] = 0;
  // [STATIC_INIT: property registration]
  if (g_027af51b == '\0') {
    FUN_011a3a10();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x24) = 0;
  // [STATIC_INIT: property registration]
  if (g_027af51b == '\0') {
    FUN_011a3b80();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x124) = 0;
  // [STATIC_INIT: property registration]
  if (g_027af51b == '\0') {
    FUN_011a3cf0();
    FUN_00e87980();
  }
  return;
}

