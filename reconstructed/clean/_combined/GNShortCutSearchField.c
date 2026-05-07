// ===================================================================
// GNShortCutSearchField — Complete reconstructed pseudocode
// 2 functions
// ===================================================================


// ============================================================
// 01f81f80
// ============================================================
// Function: FUN_01f81f80
// Address: 01f81f80
// Size: 681 bytes
// Class: GNShortCutSearchField
// String references:
//   "GNShortCutSearchField"

void FUN_01f81f80(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_290;
  
  if ((g_02801238 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_02801188 = FUN_001f8a30();
    g_02801170 = "GNShortCutSearchField";
    g_02801178 = 600;
    g_02801180 = FUN_01f90aa0;
    g_02801190 = 0;
    ram_0000000002801198 = 0;
    g_028011a0 = 0;
    ram_00000000028011a8 = 0;
    g_028011b0 = 0;
    ram_00000000028011b8 = 0;
    g_028011c0 = 0;
    ram_00000000028011c8 = 0;
    g_028011d0 = 0;
    ram_00000000028011d8 = 0;
    g_028011e0 = 0;
    ram_00000000028011e8 = 0;
    g_028011f0 = 0;
    ram_00000000028011f8 = 0;
    g_02801200 = 0;
    ram_0000000002801208 = 0;
    g_02801210 = 0;
    ram_0000000002801218 = 0;
    g_02801220 = 0;
    _ram_0000000002801228 = 0;
    g_02801230 = 0;
    ___cxa_guard_release();
  }
  if (g_0280122b == '\0') {
    FUN_0018a670();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_01f90be0();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_290 != 0) {
      FUN_00d50b20();
    }
    FUN_001fa900();
    FUN_001fa900();
  }
  return;
}



// ============================================================
// 01f90be0
// ============================================================
// Function: FUN_01f90be0
// Address: 01f90be0
// Size: 536 bytes
// Class: GNShortCutSearchField
// String references:
//   "GNShortCutSearchField"

void FUN_01f90be0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_001f8d00();
  *this_ptr = &g_026850b0;
  this_ptr[2] = &g_02685c08;
  this_ptr[0x39] = &g_02685c48;
  *(void*)(this_ptr + 0x48) = 0;
  // [STATIC_INIT: property registration]
  if (g_0280122b == '\0') {
    FUN_01f90e50();
    FUN_00e87980();
  }
  FUN_01f90fc0();
  *(void*)(this_ptr + 0x4a) = 0;
  // [STATIC_INIT: property registration]
  if (g_0280122b == '\0') {
    FUN_01f91240();
    FUN_00e87980();
  }
  return;
}

