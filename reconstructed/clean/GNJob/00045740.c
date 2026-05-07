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

