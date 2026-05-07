// Function: FUN_017712c0
// Address: 017712c0
// Size: 553 bytes
// Class: GNInt
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


void FUN_017712c0(int64_t param_1)

{
  void *pvVar1;
  int64_t lVar2;
  int64_t this_ptr;
  int iVar3;
  int local_40;
  
  lVar2 = *(int64_t *)(this_ptr + 0x50);
  if (lVar2 != 0) {
    local_40 = -1;
    while (local_40 = local_40 + 1, local_40 < *(int *)(lVar2 + 0xc)) {
      pvVar1 = _pthread_getspecific((void*)*(void*)(lVar2 + 0x10));
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01779fc0();
    }
    FUN_01777940();
    param_1 = lVar2;
  }
  FUN_00d64850();
  FUN_00d243f0();
  FUN_00d64910();
  lVar2 = *(int64_t *)(this_ptr + 0x50);
  if (lVar2 != 0) {
    if (0 < *(int *)(lVar2 + 0xc)) {
      iVar3 = 0;
      do {
        pvVar1 = _pthread_getspecific((void*)param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d50b00();
        FUN_01779fc0();
        if (this_ptr != 0) {
          FUN_00d50b20();
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(lVar2 + 0xc));
    }
    FUN_01777940();
  }
  return;
}

