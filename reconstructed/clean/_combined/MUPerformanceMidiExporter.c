// ===================================================================
// MUPerformanceMidiExporter — Complete reconstructed pseudocode
// 2 functions
// ===================================================================

// Registered properties (1):
//   GNMidiFileTimeBase _timeBase


// ============================================================
// 0118b080
// ============================================================
// Function: FUN_0118b080
// Address: 0118b080
// Size: 731 bytes
// Class: MUPerformanceMidiExporter
// String references:
//   "MUPerformanceMidiExporter"
// === MUPerformanceMidiExporter properties ===
//   GNMidiFileTimeBase _timeBase


void FUN_0118b080(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025ee570;
  FUN_0118b3a0();
  this_ptr[3] = 0;
  // [STATIC_INIT: property registration]
  if (g_027aad73 == '\0') {
    FUN_0118b690();
    FUN_00e87980();
  }
  this_ptr[4] = 0;
  // [STATIC_INIT: property registration]
  if (g_027aad73 == '\0') {
    FUN_0118b800();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 5) = 0;
  // [STATIC_INIT: property registration]
  if (g_027aad73 == '\0') {
    FUN_0118b970();
    FUN_00e87980();
  }
  FUN_0118bba0();
  return;
}



// ============================================================
// 0118b970
// ============================================================
// Function: FUN_0118b970
// Address: 0118b970
// Size: 522 bytes
// Class: MUPerformanceMidiExporter
// String references:
//   "MUPerformanceMidiExporter"
//   "GNMidiFileTimeBase"
//   "_timeBase"
// === MUPerformanceMidiExporter properties ===
//   GNMidiFileTimeBase _timeBase


void* FUN_0118b970(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_027aae60 = "_timeBase";
      g_027aae68 = &g_027aacb8;
      g_027aae70 = 0;
      g_027aae78 = 0x6500;
      g_027aae80 = "GNMidiFileTimeBase";
      g_027aae88 = &g_027aaee0;
      g_027aae90 = 0;
      ram_00000000027aae98 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_027aae60;
}

