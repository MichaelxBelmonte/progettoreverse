// Function: FUN_014ee5f0
// Address: 014ee5f0
// Size: 534 bytes
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


void FUN_014ee5f0(uint64_t param_1,char param_2)

{
  float fVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  int64_t lVar4;
  void*puVar5;
  void*puVar6;
  int64_t *arg1;
  int64_t this_ptr;
  
  *(void*)(this_ptr + 0xc) = *(void*)(*arg1 + 0xc);
  *(void*)(this_ptr + 0x14) = *(void*)(*arg1 + 0x14);
  *(void*)(this_ptr + 0x18) = *(void*)(*arg1 + 0x18);
  *(void*)(this_ptr + 0x1c) = *(void*)(*arg1 + 0x1c);
  *(void*)(this_ptr + 0x24) = *(void*)(*arg1 + 0x24);
  *(void*)(this_ptr + 0x28) = *(void*)(*arg1 + 0x28);
  *(void*)(this_ptr + 0x40) = *(void*)(*arg1 + 0x40);
  *(void*)(this_ptr + 0x44) = *(void*)(*arg1 + 0x44);
  *(void*)(this_ptr + 0x48) = *(void*)(*arg1 + 0x48);
  *(void*)(this_ptr + 0x4c) = *(void*)(*arg1 + 0x4c);
  lVar4 = *arg1;
  fVar1 = *(float *)(lVar4 + 0x20);
  if (NAN(fVar1)) {
    *(void*)(this_ptr + 0x20) = 0x7fc00000;
    fVar1 = *(float *)(lVar4 + 0x10);
  }
  else {
    *(float *)(this_ptr + 0x20) = fVar1;
    fVar1 = *(float *)(*arg1 + 0x10);
  }
  if (NAN(fVar1)) {
    *(void*)(this_ptr + 0x10) = 0x7fc00000;
  }
  else {
    *(float *)(this_ptr + 0x10) = fVar1;
  }
  if ((param_2 != '\0') && (lVar4 = *(int64_t *)(*arg1 + 0x30), lVar4 != 0)) {
    uVar3 = *(void*)(lVar4 + 0xc);
    uVar2 = *(void*)(lVar4 + 0x10);
    puVar5 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &g_025f1b78;
    *(void*)((int64_t)puVar5 + 0xc) = 0;
    (*g_025f1b90)();
    puVar6 = *(void**)(this_ptr + 0x30);
    if (puVar6 == puVar5) {
      FUN_00d50b20();
    }
    else {
      *(void**)(this_ptr + 0x30) = puVar5;
      if (puVar6 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    lVar4 = *(int64_t *)(this_ptr + 0x30);
    *(void*)(lVar4 + 0xc) = uVar3;
    *(void*)(lVar4 + 0x10) = uVar2;
  }
  if (*(int64_t *)(*arg1 + 0x38) != 0) {
    puVar6 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &g_025f1ef0;
    *(void*)((int64_t)puVar6 + 0xc) = 0;
    *(void*)((int64_t)puVar6 + 0x14) = 0;
    (*g_025f1f08)();
    *(void*)((int64_t)puVar6 + 0xc) =
         *(void*)(*(int64_t *)(*arg1 + 0x38) + 0xc);
    *(void*)((int64_t)puVar6 + 0x14) =
         *(void*)(*(int64_t *)(*arg1 + 0x38) + 0x14);
    *(void*)(puVar6 + 2) = *(void*)(*(int64_t *)(*arg1 + 0x38) + 0x10);
    *(void*)(puVar6 + 3) = *(void*)(*(int64_t *)(*arg1 + 0x38) + 0x18);
    if (*(void**)(this_ptr + 0x38) != puVar6) {
      FUN_00d64850();
      puVar5 = *(void**)(this_ptr + 0x38);
      if (puVar5 != puVar6) {
        FUN_00d50b00();
        *(void**)(this_ptr + 0x38) = puVar6;
        if (puVar5 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d64910();
    }
    FUN_00d50b20();
  }
  return;
}

