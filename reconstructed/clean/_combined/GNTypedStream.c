// ===================================================================
// GNTypedStream — Complete reconstructed pseudocode
// 2 functions
// ===================================================================

// Registered properties (1):
//   GNEndian        _endianness


// ============================================================
// 00062bf0
// ============================================================
// Function: FUN_00062bf0
// Address: 00062bf0
// Size: 1069 bytes
// Class: GNTypedStream
// String references:
//   "GNTypedStream"
// === GNTypedStream properties ===
//   GNEndian        _endianness


void FUN_00062bf0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_0257a448;
  FUN_00063090();
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d6b9b == '\0') {
    FUN_00063350();
    FUN_00e87980();
  }
  FUN_000634e0();
  *(void*)(this_ptr + 5) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d6b9b == '\0') {
    FUN_00063810();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x2c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d6b9b == '\0') {
    FUN_000639a0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 6) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d6b9b == '\0') {
    FUN_00063bf0();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 000639a0
// ============================================================
// Function: FUN_000639a0
// Address: 000639a0
// Size: 550 bytes
// Class: GNTypedStream
// String references:
//   "GNTypedStream"
//   "GNEndian"
//   "_endianness"
// === GNTypedStream properties ===
//   GNEndian        _endianness


void* FUN_000639a0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_026d6c50 = "_endianness";
      g_026d6c58 = &g_026d6ae0;
      g_026d6c60 = 0;
      g_026d6c68 = 0x6500;
      g_026d6c70 = "GNEndian";
      g_026d6c78 = &g_026d1450;
      g_026d6c80 = 0;
      ram_00000000026d6c88 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_026d6c50;
}

