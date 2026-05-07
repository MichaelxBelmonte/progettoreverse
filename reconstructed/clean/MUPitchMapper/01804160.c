// Function: FUN_01804160
// Address: 01804160
// Size: 635 bytes
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


void FUN_01804160(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  void*arg1;
  int64_t this_ptr;
  
  FUN_00d61ea0();
  FUN_017e1f30();
  lVar2 = g_027d51a0;
  plVar1 = (int64_t *)*arg1;
  if (g_027d51a0 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar1 + 0x590))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_027d51a0;
  if (cVar4 != '\0') {
    plVar1 = (int64_t *)*arg1;
    if (g_027d51a0 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*plVar1 + 0x510))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      *(void*)(this_ptr + 0x60) = 1;
    }
    lVar2 = g_027d51a8;
    plVar1 = (int64_t *)*arg1;
    if (g_027d51a8 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*plVar1 + 0x590))();
    lVar3 = g_027d51a8;
    if (cVar4 == '\0') {
      cVar4 = '\0';
    }
    else {
      plVar1 = (int64_t *)*arg1;
      if (g_027d51a8 != 0) {
        FUN_00d50b00();
      }
      cVar4 = (**(code **)(*plVar1 + 0x510))();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      *(byte *)(this_ptr + 0x60) = *(byte *)(this_ptr + 0x60) | 0x10;
    }
  }
  lVar2 = g_027d51b0;
  plVar1 = (int64_t *)*arg1;
  if (g_027d51b0 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar1 + 0x590))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_027d51b0;
  if (cVar4 != '\0') {
    plVar1 = (int64_t *)*arg1;
    if (g_027d51b0 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*plVar1 + 0x510))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      *(void*)(this_ptr + 100) = 0x11;
    }
  }
  return;
}

