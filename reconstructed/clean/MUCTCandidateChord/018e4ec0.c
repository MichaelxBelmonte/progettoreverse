// Function: FUN_018e4ec0
// Address: 018e4ec0
// Size: 973 bytes
// Class: MUCTCandidateChord
// String references:
//   "MUCTCandidateChord"
// === MUCTCandidateChord properties ===
//                   _chordType
//                   _rootPitchClass
//                   _lowestNotePitchClass
//                   _satisfactionQuality
//                   _intervalDeviation
//                   _alienIntervals
//                   _omittedIntervals


void FUN_018e4ec0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02614f50;
  FUN_018e52f0();
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_027dfa7b == '\0') {
    FUN_018e5570();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027dfa7b == '\0') {
    FUN_018e56e0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 4) = 0;
  // [STATIC_INIT: property registration]
  if (g_027dfa7b == '\0') {
    FUN_018e5850();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x24) = 0;
  // [STATIC_INIT: property registration]
  if (g_027dfa7b == '\0') {
    FUN_018e59c0();
    FUN_00e87980();
  }
  FUN_018e5b30();
  FUN_018e5db0();
  return;
}

