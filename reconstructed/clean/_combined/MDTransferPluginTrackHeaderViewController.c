// ===================================================================
// MDTransferPluginTrackHeaderViewController — Complete reconstructed pseudocode
// 3 functions
// ===================================================================

// Registered properties (4):
//                   _canTransfer
//                   _transferButtonActive
//                   _featureSetObserver
//                   _transferButton


// ============================================================
// 002e3100
// ============================================================
// Function: FUN_002e3100
// Address: 002e3100
// Size: 567 bytes
// Class: MDTransferPluginTrackHeaderViewController
// String references:
//   "MDTransferPluginTrackHeaderViewController"
// === MDTransferPluginTrackHeaderViewController properties ===
//                   _canTransfer
//                   _transferButtonActive
//                   _featureSetObserver
//                   _transferButton


void FUN_002e3100(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_118;
  int64_t local_110;
  int64_t local_100;
  
  if ((g_02700410 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_02700360 = FUN_00138900();
    g_02700348 = "MDTransferPluginTrackHeaderViewController";
    g_02700350 = 0xd8;
    g_02700358 = FUN_00306f50;
    g_02700368 = 0;
    ram_0000000002700370 = 0;
    g_02700378 = 0;
    g_027003f0 = 0;
    ram_00000000027003f8 = 0;
    g_02700400 = 0;
    g_02700402 = 1;
    g_02700380 = 0;
    ram_0000000002700388 = 0;
    g_02700390 = 0;
    ram_0000000002700398 = 0;
    g_027003a0 = 0;
    ram_00000000027003a8 = 0;
    g_027003b0 = 0;
    ram_00000000027003b8 = 0;
    g_027003c0 = 0;
    ram_00000000027003c8 = 0;
    g_027003d0 = 0;
    ram_00000000027003d8 = 0;
    g_027003e0 = 0;
    ram_00000000027003e8 = 0;
    g_0270040b = 0;
    g_02700403 = 0;
    ___cxa_guard_release();
  }
  if (g_02700403 == '\0') {
    FUN_003042e0();
    FUN_00e87760();
    FUN_000161a0();
    FUN_00d50c00();
    FUN_00306fc0();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_004f5300();
    FUN_00e87920(uVar2,0);
    if (local_100 != 0) {
      FUN_00d50b20();
    }
    if (local_110 != 0) {
      FUN_00d50b20();
    }
    if (local_118 != 0) {
      FUN_00d50b20();
    }
    FUN_00138820();
    FUN_00138820();
  }
  return;
}



// ============================================================
// 004f5300
// ============================================================
// Function: FUN_004f5300
// Address: 004f5300
// Size: 741 bytes
// Class: MDTransferPluginTrackHeaderViewController
// String references:
//   "onFeatureSetChanged"
//   "MDTransferPluginTrackHeaderViewController"
//   "handleToggleTransfer"
// === MDTransferPluginTrackHeaderViewController properties ===
//                   _canTransfer
//                   _transferButtonActive
//                   _featureSetObserver
//                   _transferButton


void FUN_004f5300(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_02809818 = "onFeatureSetChanged";
      g_02809820 = &g_02700348;
      g_02809828 = 0;
      g_02809830 = &g_02709970;
      g_02809838 = FUN_004f7140;
      g_02809840 = FUN_004f6010;
      g_02809848 = 0;
      ram_0000000002809850 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02809860 = "handleToggleTransfer";
      g_02809868 = &g_02700348;
      g_02809870 = 0;
      g_02809878 = &g_02709973;
      g_02809880 = FUN_004f71c0;
      g_02809888 = FUN_004f6020;
      g_02809890 = 0;
      ram_0000000002809898 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



// ============================================================
// 00306fc0
// ============================================================
// Function: FUN_00306fc0
// Address: 00306fc0
// Size: 591 bytes
// Class: MDTransferPluginTrackHeaderViewController
// String references:
//   "MDTransferPluginTrackHeaderViewController"
// === MDTransferPluginTrackHeaderViewController properties ===
//                   _canTransfer
//                   _transferButtonActive
//                   _featureSetObserver
//                   _transferButton


void FUN_00306fc0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00306500();
  *this_ptr = &g_024fea68;
  *(void*)(this_ptr + 0x18) = 0;
  // [STATIC_INIT: property registration]
  if (g_02700403 == '\0') {
    FUN_00307290();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xc4) = 0;
  // [STATIC_INIT: property registration]
  if (g_02700403 == '\0') {
    FUN_00307420();
    FUN_00e87980();
  }
  FUN_003075b0();
  FUN_003078e0();
  return;
}

