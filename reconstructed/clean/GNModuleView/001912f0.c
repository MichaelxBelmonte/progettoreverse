// Function: FUN_001912f0
// Address: 001912f0
// Size: 1306 bytes
// Class: GNModuleView
// String references:
//   "GNModuleView"
// === GNModuleView properties ===
//                   _uiName
//                   _trimsLoadedView
//                   _trimMargins
//                   _requiresObjectsForLoadingUI
//                   _takesFrameSizeFromUI
//                   _loadedFilesOwner
//                   _loadedWindowMinSize


void FUN_001912f0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_000a32b0();
  *this_ptr = &g_026abbb8;
  this_ptr[2] = &g_026ac560;
  FUN_001918c0();
  *(void*)(this_ptr + 0x28) = 0;
  // [STATIC_INIT: property registration]
  if (g_027e77bb == '\0') {
    FUN_00191b40();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x144) = 0;
  // [STATIC_INIT: property registration]
  if (g_027e77bb == '\0') {
    FUN_00191cb0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x14c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027e77bb == '\0') {
    FUN_00191e20();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x14d) = 0;
  // [STATIC_INIT: property registration]
  if (g_027e77bb == '\0') {
    FUN_00191f90();
    FUN_00e87980();
  }
  FUN_00192100();
  FUN_001923f0();
  FUN_001926e0();
  this_ptr[0x2d] = 0;
  // [STATIC_INIT: property registration]
  if (g_027e77bb == '\0') {
    FUN_001929d0();
    FUN_00e87980();
  }
  FUN_00192b40();
  return;
}

