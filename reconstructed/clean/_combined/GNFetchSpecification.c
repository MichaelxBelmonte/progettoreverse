// ===================================================================
// GNFetchSpecification — Complete reconstructed pseudocode
// 1 functions
// ===================================================================

// Registered properties (8):
//                   _className
//                   _entityName
//                   _fetchLimit
//                   _usesDistinct
//                   _locksObjects
//                   _refreshesRefetchedObjects
//                   _promptsAfterFetchLimit
//                   _requiresAllQualifierBindingVariables


// ============================================================
// 00cf6010
// ============================================================
// Function: FUN_00cf6010
// Address: 00cf6010
// Size: 1586 bytes
// Class: GNFetchSpecification
// String references:
//   "GNFetchSpecification"
// === GNFetchSpecification properties ===
//                   _className
//                   _entityName
//                   _fetchLimit
//                   _usesDistinct
//                   _locksObjects
//                   _refreshesRefetchedObjects
//                   _promptsAfterFetchLimit
//                   _requiresAllQualifierBindingVariables


void FUN_00cf6010(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_0256d0c0;
  FUN_00cf66e0();
  FUN_00cf6a10();
  FUN_00cf6d40();
  FUN_00cf7000();
  *(void*)(this_ptr + 6) = 0;
  // [STATIC_INIT: property registration]
  if (g_02777c1b == '\0') {
    FUN_00cf72c0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x34) = 0;
  // [STATIC_INIT: property registration]
  if (g_02777c1b == '\0') {
    FUN_00cf7450();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x35) = 0;
  // [STATIC_INIT: property registration]
  if (g_02777c1b == '\0') {
    FUN_00cf75e0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x36) = 0;
  // [STATIC_INIT: property registration]
  if (g_02777c1b == '\0') {
    FUN_00cf7770();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x37) = 0;
  // [STATIC_INIT: property registration]
  if (g_02777c1b == '\0') {
    FUN_00cf7900();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 7) = 0;
  // [STATIC_INIT: property registration]
  if (g_02777c1b == '\0') {
    FUN_00cf7a90();
    FUN_00e87980();
  }
  return;
}

