// Function: FUN_011e69a0
// Address: 011e69a0
// Size: 974 bytes
// Class: MUPotentialPathConnectionType
// String references:
//   "PNTestMatrixPeaksForFastSearch"
// === MUPotentialPathConnectionType properties ===
//   MUPotentialPathConnectionType _pathConnectionType
//                   _connectingPoint
//                   _allPeaks
//                   _allPeaksIndices
//                   _allXSlicesMaxPeakYIndex
//                   _xSize
//                   _origMatrixYSize
//                   _usedYSize
//                   _currentXIndex


void FUN_011e69a0(void)

{
  int iVar1;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025c6e68;
  FUN_011e6df0();
  FUN_011e70e0();
  FUN_011e7360();
  *(void*)(this_ptr + 5) = 0;
  // [STATIC_INIT: property registration]
  if (g_027bc113 == '\0') {
    FUN_011e75e0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x2c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027bc113 == '\0') {
    FUN_011e7750();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 6) = 0;
  // [STATIC_INIT: property registration]
  if (g_027bc113 == '\0') {
    FUN_011e78c0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x34) = 0;
  // [STATIC_INIT: property registration]
  if (g_027bc113 == '\0') {
    FUN_011e7a30();
    FUN_00e87980();
  }
  this_ptr[7] = *(void*)(arg1 + 0x38);
  return;
}

