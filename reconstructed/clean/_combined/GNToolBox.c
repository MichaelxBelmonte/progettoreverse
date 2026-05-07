// ===================================================================
// GNToolBox — Complete reconstructed pseudocode
// 2 functions
// ===================================================================

// Registered properties (3):
//                   _selectedToolIndex
//                   _selectedSubtoolIndex
//                   _tools


// ============================================================
// 0019f010
// ============================================================
// Function: FUN_0019f010
// Address: 0019f010
// Size: 2491 bytes
// Class: GNToolBox
// String references:
//   "GNToolBox"
// === GNToolBox properties ===
//                   _selectedToolIndex
//                   _selectedSubtoolIndex
//                   _tools


void FUN_0019f010(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_0269e470;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e6753 == '\0') {
    FUN_0019fa50();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 2) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e6753 == '\0') {
    FUN_0019fbc0();
    FUN_00e87980();
  }
  FUN_0019fd30();
  FUN_001a0020();
  this_ptr[5] = 0;
  // [STATIC_INIT: property registration]
  if (g_026e6753 == '\0') {
    FUN_001a0310();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 6) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e6753 == '\0') {
    FUN_001a0480();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x31) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e6753 == '\0') {
    FUN_001a05f0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x32) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e6753 == '\0') {
    FUN_001a0760();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x33) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e6753 == '\0') {
    FUN_001a08d0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x34) = 0;
  *(void*)((int64_t)this_ptr + 0x3c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e6753 == '\0') {
    FUN_001a0a40();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x44) = 0;
  *(void*)((int64_t)this_ptr + 0x4c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e6753 == '\0') {
    FUN_001a0bb0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x54) = 0;
  *(void*)((int64_t)this_ptr + 0x5c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e6753 == '\0') {
    FUN_001a0d20();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 100) = 0;
  *(void*)((int64_t)this_ptr + 0x6c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e6753 == '\0') {
    FUN_001a0e90();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 0017c120
// ============================================================
// Function: FUN_0017c120
// Address: 0017c120
// Size: 544 bytes
// Class: GNToolBox
// String references:
//   "GNToolBox"
// === GNToolBox properties ===
//                   _selectedToolIndex
//                   _selectedSubtoolIndex
//                   _tools


void FUN_0017c120(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_f0;
  int64_t local_e8;
  void*local_78;
  
  if ((g_026e6760 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_026e66b0 = FUN_00d4fe50();
    g_026e6698 = "GNToolBox";
    g_026e66a0 = 0x78;
    g_026e66a8 = FUN_0019ef40;
    g_026e66b8 = 0;
    ram_00000000026e66c0 = 0;
    g_026e66c8 = 0;
    ram_00000000026e66d0 = 0;
    g_026e66d8 = 0;
    ram_00000000026e66e0 = 0;
    g_026e66e8 = 0;
    ram_00000000026e66f0 = 0;
    g_026e66f8 = 0;
    ram_00000000026e6700 = 0;
    g_026e6708 = 0;
    ram_00000000026e6710 = 0;
    g_026e6718 = 0;
    ram_00000000026e6720 = 0;
    g_026e6728 = 0;
    ram_00000000026e6730 = 0;
    g_026e6738 = 0;
    ram_00000000026e6740 = 0;
    g_026e6748 = 0;
    _ram_00000000026e6750 = 0;
    g_026e6758 = 0;
    ___cxa_guard_release();
  }
  if (g_026e6753 == '\0') {
    FUN_000064f0();
    FUN_00e87760();
    FUN_00d4ff40();
    local_78 = (void*)0x0;
    if (1 < g_02802630) {
      local_78 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_78 = &g_02572358;
      (*g_02572370)();
    }
    FUN_00d50c00();
    FUN_0019f010();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_e8 != 0) {
      FUN_00d50b20();
    }
    if (local_f0 != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
    if (local_78 != (void*)0x0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
  }
  return;
}

