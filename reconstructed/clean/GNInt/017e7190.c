// Function: FUN_017e7190
// Address: 017e7190
// Size: 613 bytes
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


uint64_t FUN_017e7190(uint64_t param_1,int64_t *param_2,uint64_t *param_3)

{
  char cVar1;
  uint64_t uVar2;
  void *pvVar3;
  int extraout_var;
  uint64_t uVar4;
  void* pVar5;
  uint64_t arg1;
  uint64_t this_ptr;
  uint64_t uVar6;
  
  if (*param_2 != 0) {
    pVar5 = 0;
    uVar2 = FUN_017e7400();
    if (param_3 != (uint64_t *)0x0) {
      *param_3 = uVar2;
    }
    if (((uVar2 >> 0x20 == 0) || ((int)((uint64_t)this_ptr >> 0x20) == 0)) ||
       (cVar1 = FUN_00e7c000(), cVar1 == '\0')) {
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016caaa0();
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar2 = FUN_016caaa0();
      FUN_00e7bcc0();
      if ((param_1 >> 0x20 != 0) && (cVar1 = FUN_00e7c630(), cVar1 == '\0')) {
        FUN_00e7bdc0();
      }
      FUN_00e7b970();
      if (((uVar2 >> 0x20 == 0) || (extraout_var == 0)) || (cVar1 = FUN_00e7c020(), cVar1 == '\0'))
      {
        uVar6 = CONCAT71((uint7)(param_1 >> 0x28),1);
        if (arg1 >> 0x20 == 0) {
          return uVar6;
        }
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar4 = FUN_016caaa0();
        if (((uVar4 >> 0x20 == 0) || (uVar2 >> 0x20 == 0)) ||
           (cVar1 = FUN_00e7c020(), cVar1 != '\0')) {
          FUN_00e7b970();
          FUN_00e7b970();
          if (uVar4 >> 0x20 == 0) {
            return uVar6;
          }
          if (uVar2 >> 0x20 == 0) {
            return uVar6;
          }
          cVar1 = FUN_00e7c020();
          if (cVar1 == '\0') {
            return uVar6;
          }
        }
      }
    }
  }
  return 0;
}

