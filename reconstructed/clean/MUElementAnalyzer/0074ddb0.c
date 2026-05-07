// Function: FUN_0074ddb0
// Address: 0074ddb0
// Size: 1762 bytes
// Class: MUElementAnalyzer
// === MUElementAnalyzer properties ===
//   SInt64          _engineSampleOffset
//   GNInt           _engineIndex
//   float *         _originalSignal
//   float *         _originalSignalBufferWithMargin
//   SInt64          _sampleCount
//   SInt64          _nonSilentSampleCount
//   double          _sampleRate
//   double          _duration
//   double          _parameterValuesPerSecond
//   GNInt           _parameterDataSize
//   float           _maxAmplitude
//   float           _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum
//   float           _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum
//   bool            _isPercussive
//   bool            _isPolyphonic
//   float           _pitchJumpsSum
//   float           _pitchBarycenter
//   float           _allPercussiveDecay
//   float           _allRhythmicQuality
//   float           _allTonality
//   float           _allCentDiffPerMillisecond
//   float           _allPitchRangePerNote
//   float           _allEnergyRelevantRegionRatio
//   float           _allAttackPeakQuality
//   float           _allAttackPeakToEnergyRegionRatio
//   float           _allMonophony
//   float           _referenceAttackPeakValue
//   float           _referencePeakRmsLevel
//   bool            _origRMSValid
//   GNInt *         _nonSilentRmsVals
//   ... +76 more


void FUN_0074ddb0(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  int64_t lVar4;
  int iVar5;
  int64_t *this_ptr;
  int64_t **pplVar6;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  uint64_t local_40;
  int local_38;
  
  local_a0 = 0;
  lVar4 = this_ptr[0x24];
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  local_a0 = '\x01';
  local_a8 = lVar4;
  FUN_0074e990();
  plVar2 = local_58;
  if (local_50 == '\0') {
    if (((local_58 != (int64_t *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
       (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50 = '\0';
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    local_50 = 0;
    local_58 = (int64_t *)0x0;
    local_48 = plVar2;
    local_40._0_4_ = -1;
    local_40._4_4_ = 0;
    local_38 = 0;
    while( true ) {
      lVar4 = (int64_t)(int)local_40;
      local_40._0_4_ = (int)local_40 + 1;
      if (*(int *)((int64_t)local_48 + 0xc) <= (int)local_40) break;
      local_58 = *(int64_t **)(local_48[2] + 8 + lVar4 * 8);
      FUN_00e34b50();
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          local_40._4_4_ = -local_40._4_4_;
        }
        else {
          local_40._0_4_ = (int)local_40 - local_40._4_4_;
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          local_40._4_4_ = 0;
        }
      }
    }
    FUN_00097c40();
    local_50 = 0;
    local_58 = (int64_t *)0x0;
    local_48 = plVar2;
    local_40._0_4_ = -1;
    local_40._4_4_ = 0;
    local_38 = 0;
    while( true ) {
      lVar4 = (int64_t)(int)local_40;
      local_40._0_4_ = (int)local_40 + 1;
      if (*(int *)((int64_t)local_48 + 0xc) <= (int)local_40) break;
      local_58 = *(int64_t **)(local_48[2] + 8 + lVar4 * 8);
      FUN_0074ea80(local_48[2],1);
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          local_40._4_4_ = -local_40._4_4_;
        }
        else {
          local_40._0_4_ = (int)local_40 - local_40._4_4_;
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          local_40._4_4_ = 0;
        }
      }
    }
    FUN_00097c40();
    local_50 = '\0';
    local_58 = (int64_t *)0x0;
    local_48 = plVar2;
    local_40 = 0xffffffff;
    local_38 = 0;
    while( true ) {
      lVar4 = (int64_t)(int)local_40;
      iVar5 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar5);
      if (*(int *)((int64_t)local_48 + 0xc) <= iVar5) break;
      local_58 = *(int64_t **)(local_48[2] + 8 + lVar4 * 8);
      FUN_00e34b70();
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar5 = -local_40._4_4_;
        }
        else {
          local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar5 = 0;
        }
        local_40 = CONCAT44(iVar5,(int)local_40);
      }
    }
    FUN_00097c40();
  }
  FUN_00d403d0();
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_f8 = 0;
  local_f0 = '\0';
  local_e8 = 0;
  local_e0 = '\0';
  FUN_00d41040(&local_e8,&local_f8);
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  plVar1 = local_58;
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_01f27fe0();
    (**(code **)(this_ptr[10] + 0x10))();
    FUN_00d50b00();
    FUN_01f474f0();
    if (this_ptr + 10 != (int64_t *)0x0) {
      (**(code **)(this_ptr[10] + 0x10))();
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00751820();
  if (this_ptr[0x12] != 0) {
    pplVar6 = &local_58;
    FUN_01f27fe0();
    plVar1 = local_58;
    FUN_003708c0();
    if (plVar1 == (int64_t *)0x0) {
LAB_0074e1b9:
      pplVar6 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_0074e1b9;
    }
    plVar1 = *pplVar6;
    if (*(char *)(pplVar6 + 1) == '\0') {
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar6 + 1) = 0;
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x7b0))();
      lVar4 = this_ptr[0x12];
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      FUN_01257b00();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*(int64_t *)this_ptr[0x12] + 0x370))();
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d403d0();
      lVar4 = this_ptr[0x12];
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      local_d8 = 0;
      local_d0 = '\0';
      local_c8 = 0;
      local_c0 = '\0';
      FUN_00d41040(&local_c8,&local_d8);
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (this_ptr[0x12] != 0) {
      this_ptr[0x12] = 0;
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*this_ptr + 0x498))();
  if (local_50 == '\0') {
    if (local_58 == (int64_t *)0x0) goto LAB_0074e474;
    FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == (int64_t *)0x0) goto LAB_0074e474;
  local_b0 = '\0';
  local_b8 = 0;
  (**(code **)(*this_ptr + 0x490))();
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x628))();
  if (local_58 == (int64_t *)0x0) {
LAB_0074e464:
    FUN_00d50130();
  }
  else {
    cVar3 = FUN_00751ba0();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') goto LAB_0074e464;
  }
  FUN_00d50b20();
LAB_0074e474:
  FUN_00d50550();
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

