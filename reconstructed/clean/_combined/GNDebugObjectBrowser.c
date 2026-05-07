// ===================================================================
// GNDebugObjectBrowser — Complete reconstructed pseudocode
// 3 functions
// ===================================================================


// ============================================================
// 01f5ab60
// ============================================================
// Function: FUN_01f5ab60
// Address: 01f5ab60
// Size: 2225 bytes
// Class: GNDebugObjectBrowser
// String references:
//   "GNDebugObjectBrowser"
//   "handleCopy"
//   "handleFinishEditing"
//   "handlePaste"
//   "handleSelectCell"
//   "handleEditCell"
//   "handleStopModal"

void FUN_01f5ab60(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_028bab18 = "handleEditCell";
      g_028bab20 = &g_026eb090;
      g_028bab28 = 0;
      g_028bab30 = &g_028007f0;
      g_028bab38 = FUN_01f67450;
      g_028bab40 = FUN_01f634e0;
      g_028bab48 = 0;
      ram_00000000028bab50 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028bab60 = "handleSelectCell";
      g_028bab68 = &g_026eb090;
      g_028bab70 = 0;
      g_028bab78 = &g_028007f0;
      g_028bab80 = FUN_01f67450;
      g_028bab88 = FUN_01f64970;
      g_028bab90 = 0;
      ram_00000000028bab98 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028baba8 = "handleFinishEditing";
      g_028babb0 = &g_026eb090;
      g_028babb8 = 0;
      g_028babc0 = &g_028007f0;
      g_028babc8 = FUN_01f67450;
      g_028babd0 = FUN_01f64a20;
      g_028babd8 = 0;
      ram_00000000028babe0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028babf0 = "handleCopy";
      g_028babf8 = &g_026eb090;
      g_028bac00 = 0;
      g_028bac08 = &g_028007f0;
      g_028bac10 = FUN_01f67450;
      g_028bac18 = FUN_01f65830;
      g_028bac20 = 0;
      ram_00000000028bac28 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028bac38 = "handlePaste";
      g_028bac40 = &g_026eb090;
      g_028bac48 = 0;
      g_028bac50 = &g_028007f0;
      g_028bac58 = FUN_01f67450;
      g_028bac60 = FUN_01f64ef0;
      g_028bac68 = 0;
      ram_00000000028bac70 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028bac80 = "handleStopModal";
      g_028bac88 = &g_026eb090;
      g_028bac90 = 0;
      g_028bac98 = &g_028007f0;
      g_028baca0 = FUN_01f67450;
      g_028baca8 = FUN_01f66f00;
      g_028bacb0 = 0;
      ram_00000000028bacb8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



// ============================================================
// 01f5b910
// ============================================================
// Function: FUN_01f5b910
// Address: 01f5b910
// Size: 771 bytes
// Class: GNDebugObjectBrowser

void FUN_01f5b910(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t this_ptr;
  
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_0006daf0();
  (**(code **)(*plVar3 + 0x18))();
  plVar1 = *(int64_t **)(this_ptr + 0x10);
  if (plVar1 == plVar3) {
    FUN_00d50b20();
  }
  else {
    *(int64_t **)(this_ptr + 0x10) = plVar3;
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x4d0))(0,g_02423950);
  (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x558))();
  (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x570))();
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_0083cb00();
  (**(code **)(*plVar3 + 0x18))();
  plVar1 = *(int64_t **)(this_ptr + 0x88);
  if (plVar1 == plVar3) {
    FUN_00d50b20();
  }
  else {
    *(int64_t **)(this_ptr + 0x88) = plVar3;
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x4d0))(0,g_02423950);
  FUN_01ce8690();
  FUN_01ceca30();
  (**(code **)(*(int64_t *)(this_ptr + 0x70) + 0x10))();
  FUN_00d50b00();
  FUN_01ce86a0();
  if ((int64_t *)(this_ptr + 0x70) != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)(this_ptr + 0x70) + 0x10))();
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x558))();
  FUN_00d50b00();
  FUN_01cebab0();
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_028007b0;
  if (g_028007b0 != 0) {
    FUN_00d50b00();
  }
  FUN_01ceba50();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  FUN_01ceb930();
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_027e4580;
  if (g_027e4580 != 0) {
    FUN_00d50b00();
  }
  FUN_01ceb8d0();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_01ce8620();
  FUN_01ce8670();
  FUN_01ce84d0();
  plVar1 = *(int64_t **)(this_ptr + 0x10);
  lVar2 = *(int64_t *)(this_ptr + 0x88);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x450))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x90) != 0) {
    FUN_01ce8720();
  }
  return;
}



// ============================================================
// 001c1360
// ============================================================
// Function: FUN_001c1360
// Address: 001c1360
// Size: 512 bytes
// Class: GNDebugObjectBrowser
// String references:
//   "GNDebugObjectBrowser"
//   "_debugObjectBrowserDelegate"
//   "GNDebugObjectBrowserDelegate"

void* FUN_001c1360(void)

{
  int iVar1;
  int iVar2;
  
  // [STATIC_INIT: property registration]
      g_026eb198 = (iVar1 != 0) << 6 | 0x82;
      g_026eb180 = "_debugObjectBrowserDelegate";
      g_026eb188 = &g_026eb090;
      g_026eb190 = 0;
      g_026eb1a0 = 0;
      ram_00000000026eb1a8 = 0;
      g_026eb1b0 = 0;
      ___cxa_guard_release();
    }
  }
  // [STATIC_INIT: property registration]
      FUN_00e87b80();
      ___cxa_guard_release();
    }
  }
  return &g_026eb180;
}

