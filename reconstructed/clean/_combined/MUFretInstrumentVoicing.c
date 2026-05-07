// ===================================================================
// MUFretInstrumentVoicing — Complete reconstructed pseudocode
// 1 functions
// ===================================================================

// Registered properties (3):
//                   _playability
//                   _fretDisplayOffset
//                   _fingersOnStrings


// ============================================================
// 0151d140
// ============================================================
// Function: FUN_0151d140
// Address: 0151d140
// Size: 531 bytes
// Class: MUFretInstrumentVoicing
// String references:
//   "MUFretInstrumentVoicing"
// === MUFretInstrumentVoicing properties ===
//                   _playability
//                   _fretDisplayOffset
//                   _fingersOnStrings


void FUN_0151d140(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_0151ca60();
  *this_ptr = &g_026051e0;
  *(void*)(this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_027c2da3 == '\0') {
    FUN_0151d3f0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 100) = 0;
  // [STATIC_INIT: property registration]
  if (g_027c2da3 == '\0') {
    FUN_0151d560();
    FUN_00e87980();
  }
  FUN_0151d6d0();
  FUN_0151d9c0();
  FUN_0151dcb0();
  return;
}

