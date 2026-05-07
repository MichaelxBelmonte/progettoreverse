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

