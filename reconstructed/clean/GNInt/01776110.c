// Function: FUN_01776110
// Address: 01776110
// Size: 767 bytes
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


void FUN_01776110(void* param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  void *pvVar4;
  void* unaff_ESI;
  int64_t this_ptr;
  int local_38;
  
  lVar1 = *(int64_t *)(this_ptr + 0x50);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  lVar2 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + (int64_t)(int)unaff_ESI * 8);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_38 = FUN_01775a80();
  if (0 < (int)unaff_ESI) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_01779f30();
    if (local_38 < iVar3) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_38 = FUN_01779f30();
    }
  }
  if ((int)unaff_ESI < *(int *)(lVar1 + 0xc) + -1) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_01779f30();
    if (iVar3 < local_38) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_38 = FUN_01779f30();
    }
  }
  if (((*(char *)(this_ptr + 0x38) != '\0') && (0 < (int)unaff_ESI)) &&
     ((int)unaff_ESI < *(int *)(lVar1 + 0xc) + -1)) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_01779f30();
    if (local_38 == iVar3) {
      pvVar4 = _pthread_getspecific(unaff_ESI);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01779f30();
    }
    else {
      pvVar4 = _pthread_getspecific(unaff_ESI);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_01779f30();
      if (local_38 == iVar3) {
        pvVar4 = _pthread_getspecific(unaff_ESI);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01779f30();
      }
    }
  }
  FUN_01772540();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

