// ===================================================================
// MUAlignmentAnchor — Complete reconstructed pseudocode
// 1 functions
// ===================================================================

// Registered properties (26):
//                   _quarterPosition
//                   _continuousQuarter
//                   _anchorOffsets
//                   _ampQualityFactor
//                   _validityState
//                   _tempQuality1
//                   _tempQuality2
//                   _isAssigned
//                   _testAssigned
//                   _compareDiffSums
//                   _hasInvalidElement
//                   _assignment
//                   _potentialAssignments
//                   _associatedAnchors
//                   _prefersTriplets
//                   _regionWeight2
//                   _regionWeight3
//                   _anchorOffsetsForSlaveTracks
//                   _compareDiffSumsForSlaveTracks
//                   _originalQuality
//                   _distanceWeight0
//                   _distanceWeight1
//                   _otherAnchor
//                   _offsetIndex
//                   _otherOffsetIndex
//                   _assignmentQuality


// ============================================================
// 01886fe0
// ============================================================
// Function: FUN_01886fe0
// Address: 01886fe0
// Size: 3282 bytes
// Class: MUAlignmentAnchor
// String references:
//   "MUAlignmentAnchor"
// === MUAlignmentAnchor properties ===
//                   _quarterPosition
//                   _continuousQuarter
//                   _anchorOffsets
//                   _ampQualityFactor
//                   _validityState
//                   _tempQuality1
//                   _tempQuality2
//                   _isAssigned
//                   _testAssigned
//                   _compareDiffSums
//                   _hasInvalidElement
//                   _assignment
//                   _potentialAssignments
//                   _associatedAnchors
//                   _prefersTriplets
//                   _regionWeight2
//                   _regionWeight3
//                   _anchorOffsetsForSlaveTracks
//                   _compareDiffSumsForSlaveTracks
//                   _originalQuality
//                   _distanceWeight0
//                   _distanceWeight1
//                   _otherAnchor
//                   _offsetIndex
//                   _otherOffsetIndex
//                   _assignmentQuality


void FUN_01886fe0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_0260f1b0;
  this_ptr[2] = 0;
  // [STATIC_INIT: property registration]
  if (g_027d7b53 == '\0') {
    FUN_01887e10();
    FUN_00e87980();
  }
  this_ptr[3] = 0x100000000;
  // [STATIC_INIT: property registration]
  if (g_027d7b53 == '\0') {
    FUN_01887f80();
    FUN_00e87980();
  }
  this_ptr[4] = 0;
  // [STATIC_INIT: property registration]
  if (g_027d7b53 == '\0') {
    FUN_018880f0();
    FUN_00e87980();
  }
  FUN_01888260();
  *(void*)(this_ptr + 6) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d7b53 == '\0') {
    FUN_018884e0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x34) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d7b53 == '\0') {
    FUN_01888650();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 7) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d7b53 == '\0') {
    FUN_018887c0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x3c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d7b53 == '\0') {
    FUN_01888930();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 8) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d7b53 == '\0') {
    FUN_01888aa0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x44) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d7b53 == '\0') {
    FUN_01888c10();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x45) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d7b53 == '\0') {
    FUN_01888d80();
    FUN_00e87980();
  }
  FUN_01888ef0();
  FUN_01889170();
  *(void*)(this_ptr + 0xb) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d7b53 == '\0') {
    FUN_018893f0();
    FUN_00e87980();
  }
  FUN_01889560();
  FUN_01889850();
  FUN_01889b40();
  FUN_01889e30();
  *(void*)(this_ptr + 0x10) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d7b53 == '\0') {
    FUN_0188a120();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x84) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d7b53 == '\0') {
    FUN_0188a290();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x11) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d7b53 == '\0') {
    FUN_0188a400();
    FUN_00e87980();
  }
  FUN_0188a570();
  FUN_0188a7f0();
  return;
}

