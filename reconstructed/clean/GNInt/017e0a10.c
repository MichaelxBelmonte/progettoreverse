// Function: FUN_017e0a10
// Address: 017e0a10
// Size: 674 bytes
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


int64_t * FUN_017e0a10(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  void* pVar4;
  int64_t lVar5;
  void *pvVar6;
  int64_t lVar7;
  int64_t *plVar8;
  int64_t arg1;
  int64_t *this_ptr;
  int local_40;
  
  lVar1 = *(int64_t *)(arg1 + 0x40);
  if (lVar1 != 0) {
    local_40 = -1;
    do {
      lVar5 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_40) {
        FUN_017dee80();
        *(void*)(this_ptr + 1) = 0;
        if (arg1 == 0) goto LAB_017e0c9c;
        goto LAB_017e0c94;
      }
      lVar7 = *(int64_t *)(lVar1 + 0x10);
      plVar2 = *(int64_t **)(lVar7 + 8 + lVar5 * 8);
      pvVar6 = _pthread_getspecific((void*)lVar7);
      pVar4 = (void*)lVar7;
      plVar8 = plVar2;
      if ((pvVar6 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        plVar8 = (int64_t *)plVar2[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
      cVar3 = (**(code **)(*plVar8 + 0x3b8))();
    } while (cVar3 == '\0');
    FUN_017dee80();
    if (*(int64_t *)(arg1 + 0x50) != 0) {
      FUN_00d50b00();
      pvVar6 = _pthread_getspecific(pVar4);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017e5fe0();
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b00();
        FUN_00d50b00();
        pVar4 = FUN_00d23d20();
        FUN_00d50b20();
        if ((pVar4 != 0xffffffff) && ((int)pVar4 < *(int *)((int64_t)plVar2 + 0xc) + -1)) {
          pvVar6 = _pthread_getspecific(pVar4);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_017e0a10();
          FUN_00d50b20();
          FUN_00d50b20();
          return this_ptr;
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  *(void*)(this_ptr + 1) = 0;
LAB_017e0c94:
  FUN_00d50b00();
LAB_017e0c9c:
  *this_ptr = arg1;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

