// ===================================================================
// GNJob — Complete reconstructed pseudocode
// 3 functions
// ===================================================================

// Registered properties (1):
//   GNJobState      _state


// ============================================================
// 0001cda0
// ============================================================
// Function: FUN_0001cda0
// Address: 0001cda0
// Size: 529 bytes
// Class: GNJob
// String references:
//   "GNJob"
// === GNJob properties ===
//   GNJobState      _state


void FUN_0001cda0(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_a8;
  int64_t local_a0;
  
  if ((g_0278c910 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_026d1ef8 = FUN_00d4fe50();
    g_026d1ee0 = "GNJob";
    g_026d1ee8 = 0x60;
    g_026d1ef0 = FUN_000443f0;
    g_026d1f00 = 0;
    ram_00000000026d1f08 = 0;
    g_026d1f10 = 0;
    g_026d1f88 = 0;
    ram_00000000026d1f90 = 0;
    g_026d1f98 = 0;
    g_026d1f9a = 1;
    g_026d1f18 = 0;
    ram_00000000026d1f20 = 0;
    g_026d1f28 = 0;
    ram_00000000026d1f30 = 0;
    g_026d1f38 = 0;
    ram_00000000026d1f40 = 0;
    g_026d1f48 = 0;
    ram_00000000026d1f50 = 0;
    g_026d1f58 = 0;
    ram_00000000026d1f60 = 0;
    g_026d1f68 = 0;
    ram_00000000026d1f70 = 0;
    g_026d1f78 = 0;
    ram_00000000026d1f80 = 0;
    g_026d1fa3 = 0;
    g_026d1f9b = 0;
    ___cxa_guard_release();
  }
  if (g_026d1f9b == '\0') {
    FUN_000064f0();
    FUN_00e87760();
    FUN_00d4ff40();
    FUN_00d50c00();
    FUN_00044470();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    FUN_00e33080();
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
// 00045740
// ============================================================
// Function: FUN_00045740
// Address: 00045740
// Size: 626 bytes
// Class: GNJob
// String references:
//   "_state"
//   "GNJob"
//   "GNJobState"
//   "=GNJobStateRunning"
//   "=GNJobStatePreparing"
//   "=GNJobStateFinished"
// === GNJob properties ===
//   GNJobState      _state


void* FUN_00045740(void)

{
  bool bVar1;
  int iVar2;
  
  if (g_026d20b0 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      bVar1 = *g_026d2080 != '=';
      g_026d20a0 = -(uint)(*g_026d2080 == '=');
      g_026d20a4 = 0;
      if (*g_026d2088 != '=') {
        g_026d20a4 = (uint)bVar1;
      }
      g_026d20a8 = 1;
      if (*g_026d2090 != '=') {
        g_026d20a8 = g_026d20a4 + 1;
      }
      g_026d20ac = g_026d20a4 == bVar1 && g_026d20a8 == g_026d20a4 + 1;
      ___cxa_guard_release();
    }
  }
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_0278c9c0 = "_state";
      g_0278c9c8 = &g_026d1ee0;
      g_0278c9d0 = 0;
      g_0278c9d8 = 0x6500;
      g_0278c9e0 = "GNJobState";
      g_0278c9e8 = &g_026d20b8;
      g_0278c9f0 = 0;
      ram_000000000278c9f8 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_0278c9c0;
}



// ============================================================
// 00045190
// ============================================================
// Function: FUN_00045190
// Address: 00045190
// Size: 512 bytes
// Class: GNJob
// String references:
//   "GNJob"
//   "_backgroundJobObserver"
//   "GNBackgroundJobObserver"
// === GNJob properties ===
//   GNJobState      _state


void* FUN_00045190(void)

{
  int iVar1;
  int iVar2;
  
  // [STATIC_INIT: property registration]
      g_0278c968 = (iVar1 != 0) << 6 | 0x82;
      g_0278c950 = "_backgroundJobObserver";
      g_0278c958 = &g_026d1ee0;
      g_0278c960 = 0;
      g_0278c970 = 0;
      ram_000000000278c978 = 0;
      g_0278c980 = 0;
      ___cxa_guard_release();
    }
  }
  // [STATIC_INIT: property registration]
      FUN_00e87b80();
      ___cxa_guard_release();
    }
  }
  return &g_0278c950;
}

