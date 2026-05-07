// Function: FUN_0176ef50
// Address: 0176ef50
// Size: 831 bytes
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


void FUN_0176ef50(void* param_1)

{
  int64_t lVar1;
  void *pvVar2;
  void* pVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t this_ptr;
  int64_t local_a8;
  char local_a0;
  int64_t local_58;
  char local_50;
  int local_40;
  
  FUN_00d50f50();
  if ((*(int64_t *)(this_ptr + 0x18) == this_ptr) &&
     (lVar5 = *(int64_t *)(this_ptr + 0x50), lVar5 != 0)) {
    local_50 = '\0';
    local_58 = 0;
    local_40 = -1;
    while( true ) {
      lVar1 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar5 + 0xc) <= local_40) break;
      lVar4 = *(int64_t *)(lVar5 + 0x10);
      local_58 = *(int64_t *)(lVar4 + 8 + lVar1 * 8);
      pvVar2 = _pthread_getspecific((void*)lVar4);
      pVar3 = (void*)lVar4;
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01779f90();
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if (local_a8 != this_ptr) {
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d50b00();
        FUN_01779fc0();
        if (this_ptr != 0) {
          FUN_00d50b20();
        }
      }
    }
    FUN_01777940();
    param_1 = (void*)lVar5;
  }
  if (*(int64_t *)(this_ptr + 0x68) != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01777cf0();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 == 0) {
      FUN_0176f3a0();
    }
    if (*(int64_t *)(this_ptr + 0x68) != 0) {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01777c80();
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 == 0) {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d50b00();
        FUN_01777ca0();
        if (this_ptr != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  return;
}

