// Function: FUN_017766f0
// Address: 017766f0
// Size: 547 bytes
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


uint32_t FUN_017766f0(float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int64_t lVar3;
  int iVar4;
  uint32_t uVar5;
  void *pvVar6;
  void* pVar7;
  int unaff_ESI;
  int64_t this_ptr;
  void* pVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  iVar1 = *(int *)(this_ptr + 0x48);
  pVar7 = unaff_ESI + iVar1;
  if (*(char *)(this_ptr + 0x38) == '\0') {
    if (iVar1 + param_2 != pVar7) goto LAB_0177678c;
  }
  else {
    iVar2 = *(int *)(*(int64_t *)(this_ptr + 0x50) + 0xc);
    iVar4 = iVar2 + -1;
    do {
      pVar7 = pVar7 + iVar4;
    } while ((int)((1 - iVar2) + pVar7) < 0);
    do {
      pVar7 = pVar7 + (1 - iVar2);
    } while (iVar4 <= (int)pVar7);
    pVar8 = iVar1 + param_2;
    do {
      pVar8 = pVar8 + iVar4;
    } while ((int)((1 - iVar2) + pVar8) < 0);
    do {
      pVar8 = pVar8 + (1 - iVar2);
    } while (iVar4 <= (int)pVar8);
    if (pVar8 != pVar7) {
LAB_0177678c:
      lVar3 = *(int64_t *)(this_ptr + 0x50);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar9 = (float)FUN_01779ec0();
      fVar9 = fVar9 + param_1;
      if (*(char *)(this_ptr + 0x38) != '\0') {
        fVar10 = (float)FUN_017708f0();
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar11 = (float)FUN_01779ec0();
        pvVar6 = _pthread_getspecific((void*)*(void*)(lVar3 + 0x10));
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar12 = (float)FUN_01779ec0();
        for (; fVar12 <= fVar9; fVar9 = fVar9 - fVar10) {
        }
        for (; fVar9 < fVar11; fVar9 = fVar9 + fVar10) {
        }
      }
      uVar5 = FUN_01771c60(fVar9);
      if ((char)uVar5 != '\0') {
        FUN_01776110();
      }
      if (lVar3 == 0) {
        return uVar5;
      }
      FUN_00d50b20();
      return uVar5;
    }
  }
  return 0;
}

