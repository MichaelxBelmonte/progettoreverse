// ===================================================================
// GNSplitViewItem — Complete reconstructed pseudocode
// 2 functions
// ===================================================================

// Registered properties (5):
//   GNSplitViewAutoscrollingKind _autoscrollingKind
//                   _geometryPreferencesKey
//                   _canCollapse
//                   _isCollapsed
//                   _dividerRect


// ============================================================
// 001ee6b0
// ============================================================
// Function: FUN_001ee6b0
// Address: 001ee6b0
// Size: 1577 bytes
// Class: GNSplitViewItem
// String references:
//   "GNSplitViewItem"
// === GNSplitViewItem properties ===
//   GNSplitViewAutoscrollingKind _autoscrollingKind
//                   _geometryPreferencesKey
//                   _canCollapse
//                   _isCollapsed
//                   _dividerRect


void FUN_001ee6b0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_026915a8;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f165b == '\0') {
    FUN_001eed40();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xd) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f165b == '\0') {
    FUN_001eeeb0();
    FUN_00e87980();
  }
  this_ptr[2] = 0;
  // [STATIC_INIT: property registration]
  if (g_026f165b == '\0') {
    FUN_001ef020();
    FUN_00e87980();
  }
  this_ptr[3] = 0;
  // [STATIC_INIT: property registration]
  if (g_026f165b == '\0') {
    FUN_001ef190();
    FUN_00e87980();
  }
  FUN_001ef300();
  this_ptr[5] = 0;
  this_ptr[6] = 0;
  // [STATIC_INIT: property registration]
  if (g_026f165b == '\0') {
    FUN_001ef5f0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 7) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f165b == '\0') {
    FUN_001ef760();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x3c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f165b == '\0') {
    FUN_001ef9a0();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 001ef760
// ============================================================
// Function: FUN_001ef760
// Address: 001ef760
// Size: 532 bytes
// Class: GNSplitViewItem
// String references:
//   "GNSplitViewItem"
//   "GNSplitViewAutoscrollingKind"
//   "_autoscrollingKind"
// === GNSplitViewItem properties ===
//   GNSplitViewAutoscrollingKind _autoscrollingKind
//                   _geometryPreferencesKey
//                   _canCollapse
//                   _isCollapsed
//                   _dividerRect


void* FUN_001ef760(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_026f1820 = "_autoscrollingKind";
      g_026f1828 = &g_026f15a0;
      g_026f1830 = 0;
      g_026f1838 = 0x6500;
      g_026f1840 = "GNSplitViewAutoscrollingKind";
      g_026f1848 = &g_026f18a8;
      g_026f1850 = 0;
      ram_00000000026f1858 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_026f1820;
}

