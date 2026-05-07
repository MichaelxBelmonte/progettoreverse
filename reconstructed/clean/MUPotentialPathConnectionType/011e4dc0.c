// Function: FUN_011e4dc0
// Address: 011e4dc0
// Size: 959 bytes
// Class: MUPotentialPathConnectionType
// String references:
//   "PNTestMatrixPathChain"
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


void FUN_011e4dc0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025c6778;
  FUN_011e51e0();
  FUN_011e5460();
  *(void*)(this_ptr + 4) = 0;
  // [STATIC_INIT: property registration]
  if (g_027bbc43 == '\0') {
    FUN_011e5750();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x24) = 0;
  // [STATIC_INIT: property registration]
  if (g_027bbc43 == '\0') {
    FUN_011e58c0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 5) = 0;
  // [STATIC_INIT: property registration]
  if (g_027bbc43 == '\0') {
    FUN_011e5a30();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x2c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027bbc43 == '\0') {
    FUN_011e5ba0();
    FUN_00e87980();
  }
  FUN_011e5d10();
  return;
}

