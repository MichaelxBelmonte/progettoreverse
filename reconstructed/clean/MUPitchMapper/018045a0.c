// Function: FUN_018045a0
// Address: 018045a0
// Size: 508 bytes
// Class: MUPitchMapper
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


void FUN_018045a0(void* param_1)

{
  void *pvVar1;
  char *pcVar2;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t local_68;
  char local_60;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_017e2270();
  if (local_40[0] == '\0') {
    if (local_48 == 0) goto LAB_0180476f;
    FUN_00d50b00();
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_48 == 0) goto LAB_0180476f;
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017e0a10();
  if (local_40[0] == '\0') {
    if (((local_48 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if (local_48 != 0) {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017dfc60();
    FUN_00d23310();
    pcVar2 = local_38;
    if (local_40[0] != '\0') {
      pcVar2 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar2 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 != 0) {
      *this_ptr = local_48;
      *(void*)(this_ptr + 1) = 1;
      FUN_00d50b20();
      FUN_00d50b20();
      return;
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_0180476f:
  *(void*)(this_ptr + 1) = 0;
  if (arg1 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = arg1;
  *(void*)(this_ptr + 1) = 1;
  return;
}

