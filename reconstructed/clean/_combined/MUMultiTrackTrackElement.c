// ===================================================================
// MUMultiTrackTrackElement — Complete reconstructed pseudocode
// 2 functions
// ===================================================================


// ============================================================
// 00587df0
// ============================================================
// Function: FUN_00587df0
// Address: 00587df0
// Size: 520 bytes
// Class: MUMultiTrackTrackElement
// String references:
//   "MUMultiTrackTrackElement"

void FUN_00587df0(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_a8;
  int64_t local_a0;
  
  if ((g_02712290 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_026d7f60 = FUN_00d4fe50();
    g_026d7f48 = "MUMultiTrackTrackElement";
    g_026d7f50 = 0x50;
    g_026d7f58 = FUN_00072900;
    g_026d7f68 = 0;
    ram_00000000026d7f70 = 0;
    g_026d7f78 = 0;
    g_026d7ff0 = 0;
    ram_00000000026d7ff8 = 0;
    g_026d8000 = 0;
    g_026d8002 = 1;
    g_026d7f80 = 0;
    ram_00000000026d7f88 = 0;
    g_026d7f90 = 0;
    ram_00000000026d7f98 = 0;
    g_026d7fa0 = 0;
    ram_00000000026d7fa8 = 0;
    g_026d7fb0 = 0;
    ram_00000000026d7fb8 = 0;
    g_026d7fc0 = 0;
    ram_00000000026d7fc8 = 0;
    g_026d7fd0 = 0;
    ram_00000000026d7fd8 = 0;
    g_026d7fe0 = 0;
    ram_00000000026d7fe8 = 0;
    g_026d800b = 0;
    g_026d8003 = 0;
    ___cxa_guard_release();
  }
  if (g_026d8003 == '\0') {
    FUN_000064f0();
    FUN_00e87760();
    FUN_00d4ff40();
    FUN_00d50c00();
    FUN_005880e0();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_a0 != 0) {
      FUN_00d50b20();
    }
    if (local_a8 != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
    FUN_00d4ffa0();
  }
  return;
}



// ============================================================
// 005880e0
// ============================================================
// Function: FUN_005880e0
// Address: 005880e0
// Size: 1098 bytes
// Class: MUMultiTrackTrackElement
// String references:
//   "MUMultiTrackTrackElement"
//   "GNHeartbeatHandler"
//   "GNPropertyObserver"

void FUN_005880e0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  this_ptr[2] = &g_025768d0;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  this_ptr[3] = &g_024c8618;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_02658280;
  this_ptr[2] = &g_02658638;
  this_ptr[3] = &g_02658688;
  FUN_00588590();
  FUN_005888c0();
  FUN_00588bf0();
  this_ptr[7] = 0;
  // [STATIC_INIT: property registration]
  if (g_026d8003 == '\0') {
    FUN_00588f10();
    FUN_00e87980();
  }
  this_ptr[8] = 0;
  // [STATIC_INIT: property registration]
  if (g_026d8003 == '\0') {
    FUN_005890a0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 9) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d8003 == '\0') {
    FUN_00589230();
    FUN_00e87980();
  }
  return;
}

