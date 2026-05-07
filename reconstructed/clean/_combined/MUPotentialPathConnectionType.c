// ===================================================================
// MUPotentialPathConnectionType — Complete reconstructed pseudocode
// 3 functions
// ===================================================================

// Registered properties (9):
//   MUPotentialPathConnectionType _pathConnectionType
//                   _connectingPoint
//                   _allPeaks
//                   _allPeaksIndices
//                   _allXSlicesMaxPeakYIndex
//                   _xSize
//                   _origMatrixYSize
//                   _usedYSize
//                   _currentXIndex


// ============================================================
// 011e69a0
// ============================================================
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



// ============================================================
// 011e4dc0
// ============================================================
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



// ============================================================
// 011e6210
// ============================================================
// Function: FUN_011e6210
// Address: 011e6210
// Size: 536 bytes
// Class: MUPotentialPathConnectionType
// String references:
//   "PNTestMatrixPotentialPathConnection"
//   "MUPotentialPathConnectionType"
//   "_pathConnectionType"
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


void* FUN_011e6210(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_027bbf20 = "_pathConnectionType";
      g_027bbf28 = &g_027bbe50;
      g_027bbf30 = 0;
      g_027bbf38 = 0x6500;
      g_027bbf40 = "MUPotentialPathConnectionType";
      g_027bbf48 = &g_027bbfd8;
      g_027bbf50 = 0;
      ram_00000000027bbf58 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_027bbf20;
}

