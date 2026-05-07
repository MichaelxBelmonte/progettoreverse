// Function: FUN_00038300
// Address: 00038300
// Size: 1006 bytes
// Class: GNInt
// String references:
//   "bool"
//   "_precision"
//   "_minValue"
//   "float"
//   "_maxValue"
//   "_shouldRemoveTrailingZeros"
//   "_precisionRelatesToAllDigits"
//   "GNInt"
// === GNInt properties ===
//   GNInt           _assembledElementRendererCount
//   bool            _processPeriodBased
//   bool            _usesPososc
//   bool            _resetAllPhasesAtAttack
//   bool            _continueAllPhasesByDefault
//   bool            _renderWithOriginalTime
//   float           _freqDomainFormantResolution
//   GNInt           _freqDomainFourierSize
//   float           _freqDomainPhaseResetParametersScale
//   float           _formantPitchUpCompensationFactor
//   float           _formantPitchDownCompensationFactor
//   bool            _didFail
//   GNInt           _expectedResultLength
//   GNInt           _httpStatusCode
//   bool            _isSuspended
//   SInt64          _uploadLength
//   GNInt           _receivedResultLength
//   bool            _didTimeOut
//   float           _cent
//   GNInt           _westernStandardPitchIndexOffset
//   bool            _isLoop
//   GNInt           _numerator
//   GNInt           _denominator
//   GNInt           _beats
//   GNInt           _tonalKey
//   GNInt           _tonalGender
//   float           _time
//   float           _nextBeepStartTime
//   float           _beepTime
//   float           _beepLength
//   ... +133 more


void FUN_00038300(void)

{
  int iVar1;
  int64_t lVar2;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02576110;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  lVar2 = FUN_00037f20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 2) = 0;
  lVar2 = FUN_00037f20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x14) = 0;
  lVar2 = FUN_00037f20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_000387e0();
  *(void*)(this_ptr + 4) = 0;
  lVar2 = FUN_00037f20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x21) = 0;
  lVar2 = FUN_00037f20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_000388c0();
  FUN_000389a0();
  FUN_00038a80();
  FUN_00038b60();
  FUN_00038c40();
  return;
}

