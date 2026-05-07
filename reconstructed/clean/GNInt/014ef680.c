// Function: FUN_014ef680
// Address: 014ef680
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


void FUN_014ef680(uint32_t param_1)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t this_ptr;
  int64_t lVar6;
  bool bVar7;
  
  if (*(int *)(*(int64_t *)(this_ptr + 0x108) + 0xc) != 0) {
    lVar2 = FUN_00e83010();
    lVar3 = *(int64_t *)(this_ptr + 0x108);
    if (*(int *)(lVar3 + 0xc) < 1) {
      bVar7 = false;
      lVar5 = 0;
    }
    else {
      lVar4 = 0;
      lVar5 = 0;
      bVar7 = false;
      do {
        lVar3 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + lVar4 * 8);
        if (lVar5 == lVar3) {
          if ((!bVar7) && (lVar5 != 0)) {
            bVar7 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar3 != 0) {
            FUN_00d50b00();
          }
          if ((bVar7) && (lVar5 != 0)) {
            FUN_00d50b20();
            bVar7 = true;
            lVar5 = lVar3;
          }
          else {
            bVar7 = true;
            lVar5 = lVar3;
          }
        }
        *(void*)(lVar2 + lVar4 * 4) = *(void*)(lVar5 + 0x24);
        lVar4 = lVar4 + 1;
        lVar3 = *(int64_t *)(this_ptr + 0x108);
      } while (lVar4 < *(int *)(lVar3 + 0xc));
    }
    FUN_015c1480(param_1);
    lVar3 = *(int64_t *)(this_ptr + 0x108);
    if (0 < *(int *)(lVar3 + 0xc)) {
      lVar6 = 0;
      lVar4 = lVar5;
      do {
        lVar5 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + lVar6 * 8);
        if (lVar4 == lVar5) {
          lVar5 = lVar4;
          bVar1 = bVar7;
          if ((!bVar7) && (lVar4 != 0)) {
            FUN_00d50b00();
            bVar1 = true;
          }
        }
        else {
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          bVar1 = true;
          if ((bVar7) && (lVar4 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar7 = bVar1;
        *(void*)(lVar5 + 0x24) = *(void*)(lVar2 + lVar6 * 4);
        lVar6 = lVar6 + 1;
        lVar3 = *(int64_t *)(this_ptr + 0x108);
        lVar4 = lVar5;
      } while (lVar6 < *(int *)(lVar3 + 0xc));
    }
    FUN_00e83070();
    if ((bVar7) && (lVar5 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}

