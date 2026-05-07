// Function: FUN_007c71c0
// Address: 007c71c0
// Size: 1182 bytes
// Class: GNInt
// String references:
//   "bool"
//   "_inputChannelCount"
//   "_outputChannelCount"
//   "_outputBuffersDidUnderrfftun"
//   "_reloadRequestedByDriver"
//   "_bufferUnderruns"
//   "_switchInputBuffersLock"
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


void FUN_007c71c0(void)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  int iVar4;
  int64_t lVar5;
  int64_t arg1;
  void*this_ptr;
  
  FUN_005fea00();
  *this_ptr = &g_0252d640;
  uVar1 = *(void*)(arg1 + 0x94);
  uVar2 = *(void*)(arg1 + 0x98);
  uVar3 = *(void*)(arg1 + 0x9c);
  *(void*)(this_ptr + 0x12) = *(void*)(arg1 + 0x90);
  *(void*)((int64_t)this_ptr + 0x94) = uVar1;
  *(void*)(this_ptr + 0x13) = uVar2;
  *(void*)((int64_t)this_ptr + 0x9c) = uVar3;
  *(void*)(this_ptr + 0x14) = 0;
  lVar5 = FUN_00370d10();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xa4) = 0;
  lVar5 = FUN_00370d10();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_007c7720();
  *(void*)(this_ptr + 0x16) = 0;
  lVar5 = FUN_00370d10();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xb1) = 0;
  lVar5 = FUN_00370d10();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xb4) = 0;
  lVar5 = FUN_00370d10();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_007c7800();
  FUN_007c78e0();
  *(void*)(this_ptr + 0x19) = 0;
  lVar5 = FUN_00370d10();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

