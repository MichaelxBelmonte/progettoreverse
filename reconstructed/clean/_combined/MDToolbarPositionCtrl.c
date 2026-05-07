// ===================================================================
// MDToolbarPositionCtrl — Complete reconstructed pseudocode
// 3 functions
// ===================================================================

// Registered properties (5):
//   bool            _isMuted
//   bool            _isSolo
//   float           _volume
//   float           _amplitudeScaleFactor
//   bool            _isTrackTitleEditable


// ============================================================
// 005e89a0
// ============================================================
// Function: FUN_005e89a0
// Address: 005e89a0
// Size: 1017 bytes
// Class: MDToolbarPositionCtrl
// String references:
//   "bool"
//   "float"
//   "_volume"
//   "_amplitudeScaleFactor"
//   "_isMuted"
//   "_isSolo"
//   "_isTrackTitleEditable"
// === MDToolbarPositionCtrl properties ===
//   bool            _isMuted
//   bool            _isSolo
//   float           _volume
//   float           _amplitudeScaleFactor
//   bool            _isTrackTitleEditable


void FUN_005e89a0(void)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  int iVar8;
  int64_t lVar9;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02590538;
  uVar1 = *(void*)(arg1 + 0x14);
  uVar2 = *(void*)(arg1 + 0x18);
  uVar3 = *(void*)(arg1 + 0x1c);
  uVar4 = *(void*)(arg1 + 0x20);
  uVar5 = *(void*)(arg1 + 0x24);
  uVar6 = *(void*)(arg1 + 0x28);
  uVar7 = *(void*)(arg1 + 0x2c);
  *(void*)(this_ptr + 2) = *(void*)(arg1 + 0x10);
  *(void*)((int64_t)this_ptr + 0x14) = uVar1;
  *(void*)(this_ptr + 3) = uVar2;
  *(void*)((int64_t)this_ptr + 0x1c) = uVar3;
  *(void*)(this_ptr + 4) = uVar4;
  *(void*)((int64_t)this_ptr + 0x24) = uVar5;
  *(void*)(this_ptr + 5) = uVar6;
  *(void*)((int64_t)this_ptr + 0x2c) = uVar7;
  this_ptr[6] = *(void*)(arg1 + 0x30);
  *this_ptr = &g_024ff098;
  *(void*)(this_ptr + 7) = 0;
  lVar9 = FUN_004fb760();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_005e8e20();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x3c) = 0;
  lVar9 = FUN_004fb760();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_005e8fa0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 8) = 0;
  lVar9 = FUN_004fb760();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x41) = 0;
  lVar9 = FUN_004fb760();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x44) = 0;
  lVar9 = FUN_004fb760();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_005e9120();
  *(void*)(this_ptr + 10) = 0;
  lVar9 = FUN_004fb760();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x54) = 0;
  lVar9 = FUN_004fb760();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 003b2450
// ============================================================
// Function: FUN_003b2450
// Address: 003b2450
// Size: 685 bytes
// Class: MDToolbarPositionCtrl
// String references:
//   "onUpdatePlaybackController"
//   "handleTransportSetCursor"
//   "MDToolbarPositionCtrl"
// === MDToolbarPositionCtrl properties ===
//   bool            _isMuted
//   bool            _isSolo
//   float           _volume
//   float           _amplitudeScaleFactor
//   bool            _isTrackTitleEditable


void FUN_003b2450(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_02808160 = "handleTransportSetCursor";
      g_02808168 = &g_0271f400;
      g_02808170 = 0;
      g_02808178 = &g_02705718;
      g_02808180 = FUN_003b3970;
      g_02808188 = FUN_003b34b0;
      g_02808190 = 0;
      ram_0000000002808198 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028081a8 = "onUpdatePlaybackController";
      g_028081b0 = &g_0271f400;
      g_028081b8 = 0;
      g_028081c0 = &g_0270571c;
      g_028081c8 = FUN_003b3a00;
      g_028081d0 = FUN_003b2720;
      g_028081d8 = 0;
      ram_00000000028081e0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



// ============================================================
// 005e6ed0
// ============================================================
// Function: FUN_005e6ed0
// Address: 005e6ed0
// Size: 596 bytes
// Class: MDToolbarPositionCtrl
// String references:
//   "MDToolbarPositionCtrl"
// === MDToolbarPositionCtrl properties ===
//   bool            _isMuted
//   bool            _isSolo
//   float           _volume
//   float           _amplitudeScaleFactor
//   bool            _isTrackTitleEditable


void FUN_005e6ed0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_0005aa20();
  *this_ptr = &g_024f0ec0;
  FUN_005e71c0();
  FUN_005e74a0();
  FUN_005e7790();
  FUN_005e7a80();
  FUN_005e7d70();
  this_ptr[0x13] = 0;
  // [STATIC_INIT: property registration]
  if (g_0271f4bb == '\0') {
    FUN_005e8060();
    FUN_00e87980();
  }
  this_ptr[0x14] = 0;
  // [STATIC_INIT: property registration]
  if (g_0271f4bb == '\0') {
    FUN_005e81d0();
    FUN_00e87980();
  }
  return;
}

