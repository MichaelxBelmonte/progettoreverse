// ===================================================================
// MDAnimation — Complete reconstructed pseudocode
// 2 functions
// ===================================================================

// Registered properties (1):
//   MDInterpolationMethod _interpolationMethod


// ============================================================
// 00572da0
// ============================================================
// Function: FUN_00572da0
// Address: 00572da0
// Size: 1208 bytes
// Class: MDAnimation
// String references:
//   "MDAnimation"
// === MDAnimation properties ===
//   MDInterpolationMethod _interpolationMethod


void FUN_00572da0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_024f9ac8;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270ed1b == '\0') {
    FUN_00573310();
    FUN_00e87980();
  }
  FUN_00573550();
  FUN_005737d0();
  this_ptr[4] = 0;
  // [STATIC_INIT: property registration]
  if (g_0270ed1b == '\0') {
    FUN_00573a50();
    FUN_00e87980();
  }
  FUN_00573bc0();
  FUN_00573eb0();
  this_ptr[7] = 0;
  this_ptr[8] = 0;
  // [STATIC_INIT: property registration]
  if (g_0270ed1b == '\0') {
    FUN_005741a0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 9) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270ed1b == '\0') {
    FUN_00574310();
    FUN_00e87980();
  }
  this_ptr[10] = 0;
  // [STATIC_INIT: property registration]
  if (g_0270ed1b == '\0') {
    FUN_00574480();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 00573310
// ============================================================
// Function: FUN_00573310
// Address: 00573310
// Size: 532 bytes
// Class: MDAnimation
// String references:
//   "MDAnimation"
//   "MDInterpolationMethod"
//   "_interpolationMethod"
// === MDAnimation properties ===
//   MDInterpolationMethod _interpolationMethod


void* FUN_00573310(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_0270ed30 = "_interpolationMethod";
      g_0270ed38 = &g_0270ec60;
      g_0270ed40 = 0;
      g_0270ed48 = 0x6500;
      g_0270ed50 = "MDInterpolationMethod";
      g_0270ed58 = &g_0270edb8;
      g_0270ed60 = 0;
      ram_000000000270ed68 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_0270ed30;
}

