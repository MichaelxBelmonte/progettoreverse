// Function: FUN_00d05f30
// Address: 00d05f30
// Size: 1313 bytes
// Class: GNInt
// String references:
//   "bool"
//   "SInt64"
//   "_didFail"
//   "_isSuspended"
//   "_uploadLength"
//   "_didTimeOut"
//   "_httpStatusCode"
//   "_expectedResultLength"
//   "_receivedResultLength"
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


void FUN_00d05f30(void)

{
  int iVar1;
  int64_t lVar2;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00e95410();
  *this_ptr = &g_0258d9f8;
  this_ptr[7] = *(void*)(arg1 + 0x38);
  FUN_00d06520();
  *(void*)(this_ptr + 9) = 0;
  lVar2 = FUN_00d05d00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_00d06600();
  *(void*)(this_ptr + 0xb) = 0;
  lVar2 = FUN_00d05d00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x5c) = 0;
  lVar2 = FUN_00d05d00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xc) = 0;
  lVar2 = FUN_00d05d00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_00d066e0();
  this_ptr[0xe] = 0;
  lVar2 = FUN_00d05d00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xf) = 0;
  lVar2 = FUN_00d05d00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x7c) = 0;
  lVar2 = FUN_00d05d00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

