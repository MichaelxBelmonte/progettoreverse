// Function: FUN_00b10260
// Address: 00b10260
// Size: 538 bytes
// Class: GNInt
// String references:
//   "void *"
//   "_overloudEffectID"
//   "_overloudInstance"
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


void FUN_00b10260(void)

{
  int iVar1;
  int64_t lVar2;
  void*this_ptr;
  
  FUN_005fea00();
  *this_ptr = &g_0254f0b8;
  FUN_00b10520();
  FUN_00b10600();
  FUN_00b106e0();
  *(void*)(this_ptr + 0x15) = 0;
  lVar2 = FUN_00b10020();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00b107c0();
    FUN_00e87980();
  }
  FUN_00b10940();
  *(void*)(this_ptr + 0x17) = 0;
  lVar2 = FUN_00b10020();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x18] = 0;
  lVar2 = FUN_00b10020();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

