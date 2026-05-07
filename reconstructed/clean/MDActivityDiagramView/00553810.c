// Function: FUN_00553810
// Address: 00553810
// Size: 802 bytes
// Class: MDActivityDiagramView
// String references:
//   "MDActivityDiagramView"
// === MDActivityDiagramView properties ===
//                   _voicesDiagramView
//                   _displayLoadDiagramView
//                   _ioLoadDiagramView
//                   _fftCountDiagramView
//                   _jobDiagramView


void FUN_00553810(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_000a32b0();
  *this_ptr = &g_02503e00;
  this_ptr[2] = &g_02504728;
  *(void*)(this_ptr + 0x27) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270d183 == '\0') {
    FUN_00553bc0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x13c) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270d183 == '\0') {
    FUN_00553d30();
    FUN_00e87980();
  }
  FUN_00553ea0();
  FUN_00554120();
  FUN_00554410();
  *(void*)(this_ptr + 0x2b) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270d183 == '\0') {
    FUN_00554700();
    FUN_00e87980();
  }
  return;
}

