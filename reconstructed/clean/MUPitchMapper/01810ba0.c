// Function: FUN_01810ba0
// Address: 01810ba0
// Size: 1139 bytes
// Class: MUPitchMapper
// String references:
//   "MUPitchMapperMappingStorage"
// === MUPitchMapper properties ===
//   MUPitchMapperCriterion _criterion
//   MUPartMapperScaleScope _scaleScope
//   MUPartMapperVoicingMode _voicingMode
//                   _minInterval
//                   _maxInterval
//                   _minPitchIndex
//                   _maxPitchIndex
//                   _maxTranspositionInterval
//                   _lowestIntervalShouldMatchForthOrFifth
//                   _omitsUnplayedDegrees
//                   _degreeMaskMatchesGender
//                   _redirectsOnDominants
//                   _lowestPitchDegreeMask


void FUN_01810ba0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_026079b0;
  FUN_018111e0();
  FUN_01811460();
  FUN_018116e0();
  FUN_01811960();
  FUN_01811be0();
  FUN_01811e60();
  FUN_018120e0();
  FUN_01812360();
  FUN_018125e0();
  FUN_01812860();
  FUN_01812ae0();
  FUN_01812d60();
  FUN_01813050();
  *(void*)(this_ptr + 0xf) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d5273 == '\0') {
    FUN_01813340();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x79) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d5273 == '\0') {
    FUN_018134b0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x7a) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d5273 == '\0') {
    FUN_01813620();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x7b) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d5273 == '\0') {
    FUN_01813790();
    FUN_00e87980();
  }
  return;
}

