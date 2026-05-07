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

