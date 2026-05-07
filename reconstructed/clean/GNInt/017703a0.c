// Function: FUN_017703a0
// Address: 017703a0
// Size: 500 bytes
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


void FUN_017703a0(void* param_1)

{
  int64_t lVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  void *pvVar5;
  void*puVar6;
  void* pVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_78;
  char local_70;
  
  FUN_01770670();
  lVar1 = *arg1;
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != local_78) {
    if (*arg1 == 0) {
      if (this_ptr[0xd] != 0) {
        FUN_0176f3a0();
      }
    }
    else if (this_ptr[0xd] == 0) {
      puVar6 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      pVar7 = 0x25ff650;
      *puVar6 = &g_025ff650;
      puVar6[7] = 0;
      puVar6[8] = 0;
      puVar6[9] = 0;
      puVar6[10] = 0;
      *(void*)((int64_t)puVar6 + 0x51) = 0;
      *(void*)((int64_t)puVar6 + 0x59) = 0;
      (*g_025ff668)();
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01777d20();
      FUN_0176f3a0();
      FUN_00d50b20();
    }
    else {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01777d20();
    }
    uVar4 = _UNK_02411fbc;
    uVar3 = _UNK_02411fb8;
    uVar2 = _UNK_02411fb4;
    *(void*)((int64_t)this_ptr + 0x74) = g_02411fb0;
    *(void*)(this_ptr + 0xf) = uVar2;
    *(void*)((int64_t)this_ptr + 0x7c) = uVar3;
    *(void*)(this_ptr + 0x10) = uVar4;
    (**(code **)(*this_ptr + 0x390))();
  }
  return;
}

