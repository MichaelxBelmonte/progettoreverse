// Function: FUN_017e7400
// Address: 017e7400
// Size: 1653 bytes
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


uint64_t FUN_017e7400(void*param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  uint64_t uVar5;
  uint uVar6;
  void* pVar7;
  void*puVar8;
  uint64_t uVar9;
  uint64_t arg1;
  int iVar10;
  bool bVar11;
  uint32_t local_70;
  int local_6c;
  int64_t local_68;
  void*local_60;
  uint64_t local_58;
  char local_50;
  uint64_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  
  local_60 = &local_70;
  if (param_1 != (void*)0x0) {
    local_60 = param_1;
  }
  local_70 = 0xffffffff;
  pvVar4 = _pthread_getspecific((void*)param_1);
  pVar7 = (void*)param_1;
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_38 = FUN_016caaa0();
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar8 = local_60;
  FUN_016cac90(local_60,1);
  pvVar4 = _pthread_getspecific((void*)puVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar8 = local_60;
  local_6c = param_2;
  uVar5 = FUN_016cac90(local_60,2);
  pVar7 = (void*)puVar8;
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    local_68 = uVar5;
    FUN_00e8b990();
  }
  local_48 = FUN_016caaa0();
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_40 = FUN_016caaa0();
  pvVar4 = _pthread_getspecific(pVar7);
  iVar3 = local_6c;
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016ca840(0,arg1,0,local_60);
  uVar9 = local_58;
  if ((((local_50 == '\0') && (local_58 != 0)) && (FUN_00d50b00(), local_50 != '\0')) &&
     (local_58 != 0)) {
    FUN_00d50b20();
  }
  local_68 = uVar9;
  uVar2 = FUN_0123fef0();
  uVar9 = local_38;
  FUN_00e7bcc0();
  local_58 = uVar9;
  FUN_00e7c860();
  local_38 = FUN_00e7cd00();
  uVar9 = local_38 >> 0x20;
  uVar6 = (uint)(local_38 >> 0x20);
  if ((uVar2 + 1 < 3) || ((uVar2 - ((int)uVar2 >> 0x1f) & 0xfffffffe) != uVar2)) {
    if (iVar3 == 1) {
      do {
        if (uVar6 != 0) {
          pVar7 = (void*)uVar9;
          local_48._4_4_ = (int)(local_48 >> 0x20);
          bVar11 = local_48._4_4_ != 0;
          if (bVar11) {
            cVar1 = FUN_00e7c020();
            uVar9 = local_48;
            if (cVar1 == '\0') goto LAB_017e7a5c;
            if (local_38._4_4_ == 0) goto LAB_017e7942;
          }
          if ((local_40._4_4_ != 0) && (cVar1 = FUN_00e7c020(), uVar9 = local_40, cVar1 == '\0'))
          goto LAB_017e7a5c;
        }
LAB_017e7942:
        local_58 = CONCAT44(local_58._4_4_,1);
        FUN_00e7c280();
        uVar9 = (uint64_t)local_38._4_4_;
        uVar6 = local_38._4_4_;
      } while( true );
    }
    if (iVar3 != 2) {
      do {
        pVar7 = (void*)uVar9;
        if (pVar7 != 0) {
          if (local_48._4_4_ != 0) {
            cVar1 = FUN_00e7c020();
            uVar9 = local_48;
            if (cVar1 == '\0') goto LAB_017e7a5c;
            if (local_38._4_4_ == 0) goto LAB_017e7a00;
          }
          if ((local_40._4_4_ != 0) && (cVar1 = FUN_00e7c020(), uVar9 = local_40, cVar1 == '\0'))
          goto LAB_017e7a5c;
        }
LAB_017e7a00:
        uVar9 = local_38 >> 0x20;
      } while( true );
    }
    do {
      if (uVar6 != 0) {
        pVar7 = (void*)uVar9;
        local_48._4_4_ = (int)(local_48 >> 0x20);
        bVar11 = local_48._4_4_ != 0;
        if (bVar11) {
          cVar1 = FUN_00e7c020();
          uVar9 = local_48;
          if (cVar1 == '\0') goto LAB_017e7a5c;
          if (local_38._4_4_ == 0) goto LAB_017e7812;
        }
        if ((local_40._4_4_ != 0) && (cVar1 = FUN_00e7c020(), uVar9 = local_40, cVar1 == '\0'))
        goto LAB_017e7a5c;
      }
LAB_017e7812:
      local_58 = CONCAT44(local_58._4_4_,1);
      FUN_00e7c260();
      uVar9 = (uint64_t)local_38._4_4_;
      uVar6 = local_38._4_4_;
    } while( true );
  }
  iVar10 = (int)uVar2 / 2;
  if (iVar3 == 1) {
    do {
      pVar7 = (void*)uVar9;
      if (uVar6 != 0) {
        local_48._4_4_ = (int)(local_48 >> 0x20);
        bVar11 = local_48._4_4_ != 0;
        if (bVar11) {
          cVar1 = FUN_00e7c020();
          uVar9 = local_48;
          if (cVar1 == '\0') goto LAB_017e7a5c;
          if (local_38._4_4_ == 0) goto LAB_017e7893;
        }
        if ((local_40._4_4_ != 0) && (cVar1 = FUN_00e7c020(), uVar9 = local_40, cVar1 == '\0'))
        goto LAB_017e7a5c;
      }
LAB_017e7893:
      local_58 = local_38;
      FUN_00e7b970();
      iVar3 = FUN_00e7cea0();
      uVar9 = local_38;
      if (iVar3 % iVar10 == 0) goto LAB_017e7a5c;
      local_58 = CONCAT44(local_58._4_4_,1);
      FUN_00e7c280();
      uVar9 = (uint64_t)local_38._4_4_;
      uVar6 = local_38._4_4_;
    } while( true );
  }
  if (iVar3 != 2) {
    do {
      pVar7 = (void*)uVar9;
      if (uVar6 != 0) {
        local_48._4_4_ = (int)(local_48 >> 0x20);
        bVar11 = local_48._4_4_ != 0;
        if (bVar11) {
          cVar1 = FUN_00e7c020();
          uVar9 = local_48;
          if (cVar1 == '\0') goto LAB_017e7a5c;
          if (local_38._4_4_ == 0) goto LAB_017e79c3;
        }
        if ((local_40._4_4_ != 0) && (cVar1 = FUN_00e7c020(), uVar9 = local_40, cVar1 == '\0'))
        goto LAB_017e7a5c;
      }
LAB_017e79c3:
      local_58 = local_38;
      FUN_00e7b970();
      iVar3 = FUN_00e7cea0();
      uVar9 = local_38;
      if (iVar3 % iVar10 == 0) goto LAB_017e7a5c;
      uVar9 = (uint64_t)local_38._4_4_;
      uVar6 = local_38._4_4_;
    } while( true );
  }
  do {
    pVar7 = (void*)uVar9;
    if (uVar6 != 0) {
      local_48._4_4_ = (int)(local_48 >> 0x20);
      bVar11 = local_48._4_4_ != 0;
      if (bVar11) {
        cVar1 = FUN_00e7c020();
        uVar9 = local_48;
        if (cVar1 == '\0') {
LAB_017e7a5c:
          local_38 = uVar9;
          pvVar4 = _pthread_getspecific(pVar7);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar5 = FUN_016c4760();
          if (local_68 != 0) {
            FUN_00d50b20();
          }
          return uVar5;
        }
        if (local_38._4_4_ == 0) goto LAB_017e7743;
      }
      if ((local_40._4_4_ != 0) && (cVar1 = FUN_00e7c020(), uVar9 = local_40, cVar1 == '\0'))
      goto LAB_017e7a5c;
    }
LAB_017e7743:
    local_58 = local_38;
    FUN_00e7b970();
    iVar3 = FUN_00e7cea0();
    uVar9 = local_38;
    if (iVar3 % iVar10 == 0) goto LAB_017e7a5c;
    local_58 = CONCAT44(local_58._4_4_,1);
    FUN_00e7c260();
    uVar9 = (uint64_t)local_38._4_4_;
    uVar6 = local_38._4_4_;
  } while( true );
}

