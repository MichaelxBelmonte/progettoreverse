// Function: FUN_017e6010
// Address: 017e6010
// Size: 529 bytes
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


void FUN_017e6010(void* param_1)

{
  int64_t *plVar1;
  void *pvVar2;
  char *pcVar3;
  void* pVar4;
  char *pcVar5;
  int64_t this_ptr;
  int64_t local_58;
  char local_50 [8];
  int64_t local_48;
  char local_40;
  char local_38 [8];
  
  plVar1 = (int64_t *)FUN_00e8fc40();
  FUN_0117ae00();
  (**(code **)(*plVar1 + 0x18))();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017dd940();
  FUN_017e5510();
  if (*(int *)(*(int64_t *)(this_ptr + 0x50) + 0xc) != 0) {
    FUN_00d23310();
    local_38[0] = local_50[0];
    pcVar5 = local_38;
    pcVar3 = local_50;
    if (local_50[0] == '\0') {
      pcVar3 = pcVar5;
    }
    *pcVar3 = '\0';
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    pVar4 = (void*)pcVar5;
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017dfee0();
    if ((local_38[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d23310();
    pcVar5 = local_50;
    if (local_50[0] == '\0') {
      pcVar5 = local_38;
    }
    local_38[0] = local_50[0];
    *pcVar5 = '\0';
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    local_40 = 0;
    if ((local_38[0] == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
    }
    local_48 = local_58;
    local_40 = '\x01';
    FUN_017ddad0();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}

