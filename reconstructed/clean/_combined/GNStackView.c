// ===================================================================
// GNStackView — Complete reconstructed pseudocode
// 2 functions
// ===================================================================

// Registered properties (1):
//   GNOrientation   _orientation


// ============================================================
// 01e8bbf0
// ============================================================
// Function: FUN_01e8bbf0
// Address: 01e8bbf0
// Size: 713 bytes
// Class: GNStackView
// String references:
//   "GNStackView"
// === GNStackView properties ===
//   GNOrientation   _orientation


void FUN_01e8bbf0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_000a32b0();
  *this_ptr = &g_026bcae8;
  this_ptr[2] = &g_026bd410;
  *(void*)(this_ptr + 0x27) = 0;
  // [STATIC_INIT: property registration]
  if (g_028008bb == '\0') {
    FUN_01e8bef0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x13c) = 0;
  // [STATIC_INIT: property registration]
  if (g_028008bb == '\0') {
    FUN_01e8c120();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x28) = 0;
  // [STATIC_INIT: property registration]
  if (g_028008bb == '\0') {
    FUN_01e8c290();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 01e8bef0
// ============================================================
// Function: FUN_01e8bef0
// Address: 01e8bef0
// Size: 522 bytes
// Class: GNStackView
// String references:
//   "_orientation"
//   "GNStackView"
//   "GNOrientation"
// === GNStackView properties ===
//   GNOrientation   _orientation


void* FUN_01e8bef0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_027fa138 = "_orientation";
      g_027fa140 = &g_02800800;
      g_027fa148 = 0;
      g_027fa150 = 0x6500;
      g_027fa158 = "GNOrientation";
      g_027fa160 = &g_027fa1b0;
      g_027fa168 = 0;
      ram_00000000027fa170 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_027fa138;
}

