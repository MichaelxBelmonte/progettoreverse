// Function: FUN_00068b60
// Address: 00068b60
// Size: 572 bytes
// Class: GNInt
// String references:
//   "bool"
//   "_memoryLevel"
//   "_blockSize"
//   "_wantsGZIPHeader"
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


void FUN_00068b60(void)

{
  int iVar1;
  int64_t lVar2;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_0258ed08;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  lVar2 = FUN_00068910();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00068df0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 2) = 0;
  lVar2 = FUN_00068910();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x14) = 0;
  lVar2 = FUN_00068910();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 3) = 0;
  lVar2 = FUN_00068910();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

