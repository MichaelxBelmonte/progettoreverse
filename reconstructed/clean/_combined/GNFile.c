// ===================================================================
// GNFile — Complete reconstructed pseudocode
// 2 functions
// ===================================================================

// Registered properties (1):
//   GNEndian        _endianness


// ============================================================
// 0003ee50
// ============================================================
// Function: FUN_0003ee50
// Address: 0003ee50
// Size: 835 bytes
// Class: GNFile
// String references:
//   "GNFile"
// === GNFile properties ===
//   GNEndian        _endianness


void FUN_0003ee50(void)

{
  int iVar1;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_0256d868;
  FUN_0003f200();
  *(void*)(this_ptr + 3) = *(void*)(arg1 + 0x18);
  *(void*)((int64_t)this_ptr + 0x1c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d137b == '\0') {
    FUN_0003f4c0();
    FUN_00e87980();
  }
  FUN_0003f710();
  *(void*)(this_ptr + 5) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d137b == '\0') {
    FUN_0003f9d0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x2c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d137b == '\0') {
    FUN_0003fb60();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 0003f4c0
// ============================================================
// Function: FUN_0003f4c0
// Address: 0003f4c0
// Size: 550 bytes
// Class: GNFile
// String references:
//   "GNFile"
//   "GNEndian"
//   "_endianness"
// === GNFile properties ===
//   GNEndian        _endianness


void* FUN_0003f4c0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_026d13d8 = "_endianness";
      g_026d13e0 = &g_026d12c0;
      g_026d13e8 = 0;
      g_026d13f0 = 0x6500;
      g_026d13f8 = "GNEndian";
      g_026d1400 = &g_026d1450;
      g_026d1408 = 0;
      ram_00000000026d1410 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_026d13d8;
}

