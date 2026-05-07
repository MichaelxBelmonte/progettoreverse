// ===================================================================
// MDExportControllerFormat — Complete reconstructed pseudocode
// 3 functions
// ===================================================================

// Registered properties (2):
//   MDExportFormat  _exportFormat
//   GNSoundFileFormat _soundFileFormat


// ============================================================
// 0012d030
// ============================================================
// Function: FUN_0012d030
// Address: 0012d030
// Size: 1384 bytes
// Class: MDExportControllerFormat
// String references:
//   "MDExportControllerFormat"
// === MDExportControllerFormat properties ===
//   MDExportFormat  _exportFormat
//   GNSoundFileFormat _soundFileFormat


void FUN_0012d030(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_024d00c0;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e1d13 == '\0') {
    FUN_0012d660();
    FUN_00e87980();
  }
  FUN_0012d8e0();
  FUN_0012dba0();
  FUN_0012de60();
  FUN_0012e120();
  FUN_0012e3e0();
  *(void*)(this_ptr + 7) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e1d13 == '\0') {
    FUN_0012e6a0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x39) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e1d13 == '\0') {
    FUN_0012e830();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x3c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e1d13 == '\0') {
    FUN_0012e9c0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 8) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e1d13 == '\0') {
    FUN_0012ec10();
    FUN_00e87980();
  }
  FUN_0012eda0();
  return;
}



// ============================================================
// 0012d660
// ============================================================
// Function: FUN_0012d660
// Address: 0012d660
// Size: 599 bytes
// Class: MDExportControllerFormat
// String references:
//   "MDExportControllerFormat"
//   "GNSoundFileFormat"
//   "_soundFileFormat"
// === MDExportControllerFormat properties ===
//   MDExportFormat  _exportFormat
//   GNSoundFileFormat _soundFileFormat


void* FUN_0012d660(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_026e1d28 = "_soundFileFormat";
      g_026e1d30 = &g_026e1c58;
      g_026e1d38 = 0;
      g_026e1d40 = 0x6500;
      g_026e1d48 = "GNSoundFileFormat";
      g_026e1d50 = &g_026e1e08;
      g_026e1d58 = 0;
      ram_00000000026e1d60 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_026e1d28;
}



// ============================================================
// 0012e9c0
// ============================================================
// Function: FUN_0012e9c0
// Address: 0012e9c0
// Size: 547 bytes
// Class: MDExportControllerFormat
// String references:
//   "MDExportControllerFormat"
//   "MDExportFormat"
//   "_exportFormat"
// === MDExportControllerFormat properties ===
//   MDExportFormat  _exportFormat
//   GNSoundFileFormat _soundFileFormat


void* FUN_0012e9c0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_026e2038 = "_exportFormat";
      g_026e2040 = &g_026e1c58;
      g_026e2048 = 0;
      g_026e2050 = 0x6500;
      g_026e2058 = "MDExportFormat";
      g_026e2060 = &g_026e20d0;
      g_026e2068 = 0;
      ram_00000000026e2070 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_026e2038;
}

