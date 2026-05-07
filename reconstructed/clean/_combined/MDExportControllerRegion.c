// ===================================================================
// MDExportControllerRegion — Complete reconstructed pseudocode
// 2 functions
// ===================================================================

// Registered properties (1):
//   MDExportRegionType _type


// ============================================================
// 0012fcb0
// ============================================================
// Function: FUN_0012fcb0
// Address: 0012fcb0
// Size: 763 bytes
// Class: MDExportControllerRegion
// String references:
//   "MDExportControllerRegion"
// === MDExportControllerRegion properties ===
//   MDExportRegionType _type


void FUN_0012fcb0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_024d0438;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e2403 == '\0') {
    FUN_0012ffe0();
    FUN_00e87980();
  }
  this_ptr[2] = 0;
  // [STATIC_INIT: property registration]
  if (g_026e2403 == '\0') {
    FUN_00130250();
    FUN_00e87980();
  }
  this_ptr[3] = 0;
  // [STATIC_INIT: property registration]
  if (g_026e2403 == '\0') {
    FUN_001303e0();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 0012ffe0
// ============================================================
// Function: FUN_0012ffe0
// Address: 0012ffe0
// Size: 581 bytes
// Class: MDExportControllerRegion
// String references:
//   "_type"
//   "MDExportControllerRegion"
//   "MDExportRegionType"
// === MDExportControllerRegion properties ===
//   MDExportRegionType _type


void* FUN_0012ffe0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_026e2418 = "_type";
      g_026e2420 = &g_026e2348;
      g_026e2428 = 0;
      g_026e2430 = 0x6500;
      g_026e2438 = "MDExportRegionType";
      g_026e2440 = &g_026e24c8;
      g_026e2448 = 0;
      ram_00000000026e2450 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_026e2418;
}

