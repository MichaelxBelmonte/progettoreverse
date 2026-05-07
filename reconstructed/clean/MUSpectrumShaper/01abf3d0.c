// Function: FUN_01abf3d0
// Address: 01abf3d0
// Size: 2173 bytes
// Class: MUSpectrumShaper
// String references:
//   "%@+%I ct"
//   "%@%I ct"
//   "+%.2f dB"
//   "%.2f dB"
// === MUSpectrumShaper properties ===
//   GNInt           _assembledElementRendererCount
//   MUSpectrumShaperSpectrumType _spectrumType
//   bool            _processSpectrumShaper
//   bool            _canUseSpectrumShaper
//   bool            _processEqualizer
//   bool            _processLowerSpectrum
//   bool            _processUpperSpectrum
//   bool            _isBypassed
//   GNInt           _overallSpectrumFundamentalPitchIndex
//   float           _overallSpectrumFreqPerBin
//   float           _referenceMagnitudeSum
//   float           _maximumMagnitudeSum
//   float           _synthAmps
//   float           _synthPhases
//   float           _emphasizePow
//   float           _allGain
//   float           _ampDifferencePow
//   float           _clipLimit
//   bool            _didRequestCacheValidation
//   bool            _appliedEqualizerFactorsAreValid
//   bool            _appliedEqualizerFormantFactorsAreValid
//   bool            _processSpectrumShaperIsValid
//   float           _startValue
//   float           _riseDuration
//   float           _riseEndValue
//   float           _decayStartTime
//   float           _decayEndTime
//   float           _decayFactor
//   float           _endValue
//   bool            _needsProcessEnvelope
//   ... +35 more


void FUN_01abf3d0(void* param_1,uint64_t param_2)

{
  float fVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  void*puVar4;
  void*puVar5;
  int iVar6;
  void *pvVar7;
  int64_t *this_ptr;
  void*puVar8;
  void*puVar9;
  bool bVar10;
  uint64_t uVar11;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar12;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  uint64_t extraout_XMM0_Qa_00;
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint64_t extraout_XMM0_Qa_01;
  uint8_t auVar17 [16];
  uint64_t in_XMM1_Qb;
  uint8_t auVar18 [16];
  void*local_a8;
  char local_a0;
  void*local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  void*local_78;
  float local_6c;
  void*local_68;
  uint local_60;
  void*local_58;
  char local_50;
  uint32_t local_48;
  void*local_40;
  uint local_38;
  uint32_t local_34;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  
  uVar11 = FUN_01e3f820();
  if (*(int *)((int64_t)this_ptr + 0x1bc) == -1) goto LAB_01abfc19;
  fVar1 = *(float *)((int64_t)this_ptr + 0x1b4);
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b9440();
  puVar4 = local_68;
  if (((char)local_60 == '\0') && (local_68 != (void*)0x0)) {
    FUN_00d50b00();
    if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  local_78 = puVar4;
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b93e0();
  puVar4 = local_68;
  if (((char)local_60 == '\0') && (local_68 != (void*)0x0)) {
    FUN_00d50b00();
    if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar6 = FUN_015b7ba0();
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b7b80();
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017ed3a0();
  if (local_68 == (void*)0x0) {
    if (((char)local_38 != '\0') && (local_40 != (void*)0x0)) {
      FUN_00d50b20();
    }
LAB_01abf72a:
    local_6c = g_02390124;
    iVar6 = (int)this_ptr[0x33];
    if (iVar6 == 0) goto LAB_01abf70c;
LAB_01abf742:
    puVar8 = g_027e3078;
    if (iVar6 == 3) {
      if (g_027e3078 != (void*)0x0) {
        FUN_00d50b00();
      }
      FUN_00015ff0();
      local_88 = FUN_00e86210();
      local_80 = 0;
      uVar12 = extraout_XMM0_Qa;
      if (local_88 != 0) {
        uVar12 = FUN_00d50b00();
      }
      local_80 = '\x01';
      uVar12 = FUN_01d824e0(uVar12,&local_88);
      puVar5 = local_68;
      puVar9 = local_78;
      if ((char)local_60 == '\0') {
        if (local_68 != (void*)0x0) {
          uVar12 = FUN_00d50b00();
          if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
            uVar12 = FUN_00d50b20();
          }
        }
      }
      else {
        local_60 = local_60 & 0xffffff00;
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        uVar12 = FUN_00d50b20();
      }
      if (puVar5 != (void*)0x0) {
        local_a8 = puVar8;
        local_a0 = '\0';
        FUN_01e57260(uVar12,&local_a8);
        puVar9 = local_68;
        if (local_68 == puVar8) {
LAB_01abf987:
          puVar9 = local_78;
          if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((char)local_60 == '\0') {
            if (local_68 != (void*)0x0) {
              FUN_00d50b00();
            }
            bVar10 = puVar8 != (void*)0x0;
            puVar8 = puVar9;
            if (bVar10) {
              FUN_00d50b20();
            }
            goto LAB_01abf987;
          }
          if (puVar8 != (void*)0x0) {
            FUN_00d50b20();
          }
          local_60 = local_60 & 0xffffff00;
          puVar8 = local_68;
          puVar9 = local_78;
        }
        if ((local_a0 != '\0') && (local_a8 != (void*)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      local_58 = puVar8;
      if (g_02390124 <=
          local_6c * *(float *)(puVar9[2] + (int64_t)*(int *)((int64_t)this_ptr + 0x1bc) * 4)) {
        auVar15._0_8_ = _logf();
        auVar15._8_8_ = extraout_XMM0_Qb_02;
        auVar16._4_12_ = auVar15._4_12_;
        auVar16._0_4_ = (float)auVar15._0_8_ * g_0240e498;
        local_48 = FUN_00e7d780(auVar16._0_8_);
        local_60 = 2;
        local_68 = &g_024c5048;
        local_50 = 0;
        uVar12 = extraout_XMM0_Qa_01;
        if (puVar8 != (void*)0x0) {
          uVar12 = FUN_00d50b00();
        }
        local_50 = '\x01';
        local_68 = (void*)&g_025df2a0;
        FUN_00d8cb40(uVar12,&local_68);
        puVar9 = local_40;
        if (local_40 == (void*)0x0) {
          puVar9 = (void*)0x0;
          bVar10 = false;
        }
        else if ((char)local_38 == '\0') {
          FUN_00d50b00();
          bVar10 = true;
          if (((char)local_38 != '\0') && (local_40 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = local_38 & 0xffffff00;
          bVar10 = true;
        }
        local_68 = &g_024c5048;
        if ((local_50 != '\0') && (local_58 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        auVar13._0_8_ = _logf();
        auVar13._8_8_ = extraout_XMM0_Qb_01;
        auVar14._4_12_ = auVar13._4_12_;
        auVar14._0_4_ = (float)auVar13._0_8_ * g_0240e498;
        local_48 = FUN_00e7d780(auVar14._0_8_);
        local_60 = 2;
        local_68 = &g_024c5048;
        local_50 = 0;
        uVar12 = extraout_XMM0_Qa_00;
        if (puVar8 != (void*)0x0) {
          uVar12 = FUN_00d50b00();
        }
        local_50 = '\x01';
        local_68 = (void*)&g_025df2a0;
        FUN_00d8cb40(uVar12,&local_68);
        puVar9 = local_40;
        if (local_40 == (void*)0x0) {
          puVar9 = (void*)0x0;
          bVar10 = false;
        }
        else if ((char)local_38 == '\0') {
          FUN_00d50b00();
          bVar10 = true;
          if (((char)local_38 != '\0') && (local_40 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = local_38 & 0xffffff00;
          bVar10 = true;
        }
        local_68 = &g_024c5048;
        if ((local_50 != '\0') && (local_58 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      if (puVar8 != (void*)0x0) {
        FUN_00d50b20();
      }
      goto LAB_01abfb81;
    }
    if (*(float *)(puVar4[2] + (int64_t)*(int *)((int64_t)this_ptr + 0x1bc) * 4) <= g_02390124)
    {
      uVar12 = FUN_00aea610();
      local_38 = 1;
      local_40 = &g_024d0b28;
      local_34 = (uint32_t)uVar12;
      FUN_00d8cb40(uVar12,&local_40);
      puVar9 = local_68;
      if (local_68 == (void*)0x0) goto LAB_01abf929;
      bVar10 = true;
      if ((char)local_60 == '\0') {
        FUN_00d50b00();
        if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      uVar12 = FUN_00aea610();
      local_38 = 1;
      local_40 = &g_024d0b28;
      local_34 = (uint32_t)uVar12;
      FUN_00d8cb40(uVar12,&local_40);
      puVar9 = local_68;
      if (local_68 == (void*)0x0) {
LAB_01abf929:
        puVar9 = (void*)0x0;
        bVar10 = false;
      }
      else {
        bVar10 = true;
        if ((char)local_60 == '\0') {
          FUN_00d50b00();
          if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
      }
    }
LAB_01abfb86:
    FUN_00d50b20();
  }
  else {
    if ((char)local_60 != '\0') {
      FUN_00d50b20();
    }
    if (((char)local_38 != '\0') && (local_40 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((iVar6 != 3) && (iVar6 != 0)) goto LAB_01abf72a;
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015b7b80();
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017ed3a0();
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    auVar17._0_8_ = FUN_012c6af0();
    auVar17._8_8_ = extraout_XMM0_Qb_00;
    auVar18._4_12_ = auVar17._4_12_;
    auVar18._0_4_ = (float)auVar17._0_8_ * g_023941f4;
    local_6c = (float)_exp2f(auVar18._0_8_);
    if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_38 != '\0') && (local_40 != (void*)0x0)) {
      FUN_00d50b20();
    }
    local_6c = g_02390124 / local_6c;
    iVar6 = (int)this_ptr[0x33];
    if (iVar6 != 0) goto LAB_01abf742;
LAB_01abf70c:
    bVar10 = false;
    puVar9 = (void*)0x0;
LAB_01abfb81:
    if (puVar4 != (void*)0x0) goto LAB_01abfb86;
  }
  if (local_78 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar9 != (void*)0x0) {
    auVar3._8_8_ = in_XMM1_Qb;
    auVar3._0_8_ = param_2;
    auVar18 = blendps(auVar3,g_0241c670,0xd);
    auVar2._8_8_ = extraout_XMM0_Qb;
    auVar2._0_8_ = uVar11;
    auVar17 = blendps(auVar2,ZEXT416((uint)(fVar1 + g_023b36a8)),1);
    local_90 = '\0';
    local_98 = puVar9;
    (**(code **)(*this_ptr + 0x6d8))(auVar17._0_8_,auVar18._0_8_);
    if ((local_90 != '\0') && (local_98 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (!bVar10) {
      return;
    }
    FUN_00d50b20();
    return;
  }
LAB_01abfc19:
  (**(code **)(*this_ptr + 0x6e0))();
  return;
}

