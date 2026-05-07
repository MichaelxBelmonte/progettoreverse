// ===================================================================
// MUGrooveBasedGrooveAssignmentEntry — Complete reconstructed pseudocode
// 1 functions
// ===================================================================

// Registered properties (6):
//                   _barSignature
//                   _grooveSignal
//                   _maxima
//                   _targetQuarters
//                   _targetTimes
//                   _grooveAssignments


// ============================================================
// 0142b3c0
// ============================================================
// Function: FUN_0142b3c0
// Address: 0142b3c0
// Size: 905 bytes
// Class: MUGrooveBasedGrooveAssignmentEntry
// String references:
//   "MUGrooveBasedGrooveAssignmentEntry"
// === MUGrooveBasedGrooveAssignmentEntry properties ===
//                   _barSignature
//                   _grooveSignal
//                   _maxima
//                   _targetQuarters
//                   _targetTimes
//                   _grooveAssignments


void FUN_0142b3c0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025e1d30;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_027c10d3 == '\0') {
    FUN_0142b780();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 2) = 0;
  // [STATIC_INIT: property registration]
  if (g_027c10d3 == '\0') {
    FUN_0142b8f0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x14) = 0;
  // [STATIC_INIT: property registration]
  if (g_027c10d3 == '\0') {
    FUN_0142ba60();
    FUN_00e87980();
  }
  this_ptr[3] = 0x100000000;
  // [STATIC_INIT: property registration]
  if (g_027c10d3 == '\0') {
    FUN_0142bbd0();
    FUN_00e87980();
  }
  return;
}

