// ===================================================================
// MULoopComponentId — Complete reconstructed pseudocode
// 2 functions
// ===================================================================

// Registered properties (4):
//   MULoopComponentType _componentType
//                   _loopArrangementDocument
//                   _superAudioSourceDescription
//                   _isPitchToChordAdaptionEnabled


// ============================================================
// 017d74c0
// ============================================================
// Function: FUN_017d74c0
// Address: 017d74c0
// Size: 900 bytes
// Class: MULoopComponentId
// String references:
//   "MULoopComponentId"
// === MULoopComponentId properties ===
//   MULoopComponentType _componentType
//                   _loopArrangementDocument
//                   _superAudioSourceDescription
//                   _isPitchToChordAdaptionEnabled


void FUN_017d74c0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025c93f0;
  this_ptr[2] = 0;
  // [STATIC_INIT: property registration]
  if (g_027d3e9b == '\0') {
    FUN_017d7870();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d3e9b == '\0') {
    FUN_017d79e0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d3e9b == '\0') {
    FUN_017d7c40();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 4) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d3e9b == '\0') {
    FUN_017d7db0();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 017d79e0
// ============================================================
// Function: FUN_017d79e0
// Address: 017d79e0
// Size: 571 bytes
// Class: MULoopComponentId
// String references:
//   "MULoopComponentId"
//   "_componentType"
//   "MULoopComponentType"
// === MULoopComponentId properties ===
//   MULoopComponentType _componentType
//                   _loopArrangementDocument
//                   _superAudioSourceDescription
//                   _isPitchToChordAdaptionEnabled


void* FUN_017d79e0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_027d3ef8 = "_componentType";
      g_027d3f00 = &g_027d3de0;
      g_027d3f08 = 0;
      g_027d3f10 = 0x6500;
      g_027d3f18 = "MULoopComponentType";
      g_027d3f20 = &g_027dd3a8;
      g_027d3f28 = 0;
      ram_00000000027d3f30 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_027d3ef8;
}

