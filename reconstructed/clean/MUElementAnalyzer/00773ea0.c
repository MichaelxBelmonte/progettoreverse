// Function: FUN_00773ea0
// Address: 00773ea0
// Size: 2232 bytes
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


void FUN_00773ea0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  uint32_t uVar4;
  int64_t *plVar5;
  void *pvVar6;
  void* pVar7;
  int64_t lVar8;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t local_1b8;
  char local_1b0;
  int64_t local_1a8;
  char local_1a0;
  int64_t local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
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
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(arg1 + 0xd8) == 0) {
    plVar5 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar5 + 0x18))();
    lVar8 = *(int64_t *)(arg1 + 0xd8);
    *(int64_t **)(arg1 + 0xd8) = plVar5;
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00dd6a00();
  lVar8 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_48 = lVar8;
  FUN_0078d520();
  lVar8 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar8 == 0) {
    uVar4 = FUN_01433c20();
    lVar1 = g_02729670;
    pVar7 = 0x774d98;
    switch(uVar4) {
    case 1:
      FUN_013fb3a0();
      if (local_40 == 0) {
        cVar3 = '\0';
      }
      else {
        FUN_013fb3a0();
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0141b660();
        if (local_1b8 == 0) {
          cVar3 = '\0';
        }
        else {
          FUN_013fb3a0();
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0141b660();
          lVar1 = g_02729668;
          if (g_02729668 != 0) {
            FUN_00d50b00();
          }
          cVar3 = FUN_00d90eb0();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if ((local_1a0 != '\0') && (local_1a8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_170 != '\0') && (local_178 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_1b0 != '\0') && (local_1b8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_180 != '\0') && (local_188 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = g_02729670;
      if (cVar3 == '\0') {
        if (g_02729670 != 0) {
          FUN_00d50b00();
        }
        lVar2 = g_02729680;
        local_128 = lVar1;
        local_120 = '\x01';
        if (g_02729680 != 0) {
          FUN_00d50b00();
        }
        local_118 = lVar2;
        local_110 = '\x01';
        local_108 = 0;
        local_100 = '\0';
        FUN_00d31230(&local_108,&local_118);
        if (local_40 != 0) {
          lVar8 = local_40;
          if (local_38 == '\0') {
            FUN_00d50b00();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38 = '\0';
          }
        }
        if ((local_100 != '\0') && (local_108 != 0)) {
          FUN_00d50b20();
        }
        if ((local_110 != '\0') && (local_118 != 0)) {
          FUN_00d50b20();
        }
        if ((local_120 != '\0') && (local_128 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (g_02729670 != 0) {
          FUN_00d50b00();
        }
        lVar2 = g_02729678;
        if (g_02729678 != 0) {
          FUN_00d50b00();
        }
        local_148 = lVar2;
        local_140 = '\x01';
        local_138 = 0;
        local_130 = '\0';
        FUN_00d31230(&local_138,&local_148);
        if (local_40 != 0) {
          lVar8 = local_40;
          if (local_38 == '\0') {
            FUN_00d50b00();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38 = '\0';
          }
        }
        if ((local_130 != '\0') && (local_138 != 0)) {
          FUN_00d50b20();
        }
        if ((local_140 != '\0') && (local_148 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      break;
    case 2:
      if (g_02729670 != 0) {
        FUN_00d50b00();
      }
      lVar2 = g_02729678;
      local_f8 = lVar1;
      local_f0 = '\x01';
      if (g_02729678 != 0) {
        FUN_00d50b00();
      }
      local_e8 = lVar2;
      local_e0 = '\x01';
      local_d8 = 0;
      local_d0 = '\0';
      FUN_00d31230(&local_d8,&local_e8);
      if (local_40 != 0) {
        lVar8 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      break;
    case 3:
      if (g_02729670 != 0) {
        FUN_00d50b00();
      }
      lVar2 = g_02729688;
      local_c8 = lVar1;
      local_c0 = '\x01';
      if (g_02729688 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar2;
      local_b0 = '\x01';
      local_a8 = 0;
      local_a0 = '\0';
      FUN_00d31230(&local_a8,&local_b8);
      if (local_40 != 0) {
        lVar8 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      break;
    case 4:
      if (g_02729670 != 0) {
        FUN_00d50b00();
      }
      lVar2 = g_02729690;
      local_98 = lVar1;
      local_90 = '\x01';
      if (g_02729690 != 0) {
        FUN_00d50b00();
      }
      local_88 = lVar2;
      local_80 = '\x01';
      local_78 = 0;
      local_70 = '\0';
      FUN_00d31230(&local_78,&local_88);
      if (local_40 != 0) {
        lVar8 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
    }
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      local_60 = '\0';
      local_58 = local_48;
      local_50 = '\0';
      local_68 = lVar8;
      FUN_0078d5d0();
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  *this_ptr = lVar8;
  *(void*)(this_ptr + 1) = 1;
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  return;
}

