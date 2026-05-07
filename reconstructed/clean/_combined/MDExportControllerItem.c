// ===================================================================
// MDExportControllerItem — Complete reconstructed pseudocode
// 2 functions
// ===================================================================

// Registered properties (4):
//                   _track
//                   _fileName
//                   _isChecked
//                   _needsFilePath


// ============================================================
// 003b1e40
// ============================================================
// Function: FUN_003b1e40
// Address: 003b1e40
// Size: 958 bytes
// Class: MDExportControllerItem
// String references:
//   "MDExportControllerItem"
//   "setIsChecked"
//   "getFileName"
//   "GNString"
// === MDExportControllerItem properties ===
//                   _track
//                   _fileName
//                   _isChecked
//                   _needsFilePath


void FUN_003b1e40(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_028080d0 = "setIsChecked";
      g_028080d8 = &g_026e1990;
      g_028080e0 = 0;
      g_028080e8 = &g_027056e0;
      g_028080f0 = FUN_003b2390;
      g_028080f8 = FUN_003b2220;
      g_02808100 = 0;
      ram_0000000002808108 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02808118 = "getFileName";
      g_02808120 = &g_026e1990;
      g_02808128 = 0;
      g_02808130 = &g_027056e3;
      g_02808138 = FUN_003b23b0;
      g_02808140 = FUN_003b2240;
      g_02808148 = 0;
      // [STATIC_INIT: property registration]
      g_02808150 = g_026d5e40;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



// ============================================================
// 0012b970
// ============================================================
// Function: FUN_0012b970
// Address: 0012b970
// Size: 612 bytes
// Class: MDExportControllerItem
// String references:
//   "MDExportControllerItem"
// === MDExportControllerItem properties ===
//                   _track
//                   _fileName
//                   _isChecked
//                   _needsFilePath


void FUN_0012b970(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_024cfd48;
  FUN_0012bc70();
  FUN_0012bfa0();
  FUN_0012c2c0();
  FUN_0012c580();
  FUN_0012c840();
  *(void*)(this_ptr + 7) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e1a4b == '\0') {
    FUN_0012cb00();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x39) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e1a4b == '\0') {
    FUN_0012cc90();
    FUN_00e87980();
  }
  return;
}

