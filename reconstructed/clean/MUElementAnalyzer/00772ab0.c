// Function: FUN_00772ab0
// Address: 00772ab0
// Size: 3327 bytes
// Class: MUElementAnalyzer
// String references:
//   "MUElementAnalyzer"
//   "MUAmplitudeAnalyzer"
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


void FUN_00772ab0(void* param_1)

{
  int64_t *plVar1;
  bool bVar2;
  int64_t *plVar3;
  char cVar4;
  int64_t **pplVar5;
  uint64_t uVar6;
  void *pvVar7;
  int64_t lVar8;
  int64_t *plVar9;
  int iVar10;
  int64_t *this_ptr;
  int64_t *plVar11;
  uint32_t uVar12;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t *local_198;
  uint8_t local_190;
  int64_t *local_188;
  int64_t *local_180;
  int64_t local_178;
  char local_170;
  int64_t *local_168;
  char local_160;
  int64_t *local_158;
  char local_150;
  int64_t *local_148;
  char local_140;
  int64_t *local_138;
  char local_130;
  int64_t *local_128;
  char local_120;
  int64_t *local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t *local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  uint64_t local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a0;
  char local_98;
  int local_88;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  uint64_t local_48;
  int local_40;
  char local_31;
  
  uVar12 = FUN_00d3ecf0();
  plVar11 = local_60;
  if ((local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
    uVar12 = FUN_00d50b00();
    local_b8 = plVar11;
    local_b0 = '\x01';
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
  }
  else {
    local_b8 = local_60;
    local_b0 = '\x01';
  }
  if ((g_026e0c38 == '\0') &&
     (iVar10 = ___cxa_guard_acquire(), uVar12 = extraout_XMM0_Da_00, iVar10 != 0)) {
    g_026e0b88 = FUN_000fddb0();
    g_026e0b70 = "MUElementAnalyzer";
    g_026e0b78 = 0x180;
    param_1 = 0xfdd80;
    g_026e0b80 = FUN_000fdd80;
    g_026e0b90 = 0;
    ram_00000000026e0b98 = 0;
    g_026e0ba0 = 0;
    g_026e0c18 = 0;
    ram_00000000026e0c20 = 0;
    g_026e0c28 = 0;
    g_026e0c2a = 1;
    g_026e0ba8 = 0;
    ram_00000000026e0bb0 = 0;
    g_026e0bb8 = 0;
    ram_00000000026e0bc0 = 0;
    g_026e0bc8 = 0;
    ram_00000000026e0bd0 = 0;
    g_026e0bd8 = 0;
    ram_00000000026e0be0 = 0;
    g_026e0be8 = 0;
    ram_00000000026e0bf0 = 0;
    g_026e0bf8 = 0;
    ram_00000000026e0c00 = 0;
    g_026e0c08 = 0;
    ram_00000000026e0c10 = 0;
    g_026e0c33 = 0;
    g_026e0c2b = 0;
    uVar12 = ___cxa_guard_release();
  }
  if (plVar11 == (int64_t *)0x0) {
LAB_00772b21:
    pplVar5 = &g_02802688;
  }
  else {
    (**(code **)(*plVar11 + 0x360))();
    cVar4 = FUN_00e85ea0();
    uVar12 = extraout_XMM0_Da;
    if (cVar4 == '\0') goto LAB_00772b21;
    pplVar5 = &local_b8;
  }
  plVar9 = local_b8;
  plVar11 = *pplVar5;
  local_31 = *(char *)(pplVar5 + 1);
  local_188 = plVar11;
  if ((local_31 == '\0') || (plVar11 == (int64_t *)0x0)) {
    if (plVar11 != (int64_t *)0x0) goto LAB_00772b8e;
    FUN_0079bbe0();
    if (plVar9 == (int64_t *)0x0) {
LAB_00772fe5:
      if (g_02802688 == (int64_t *)0x0) goto LAB_007733ef;
LAB_00772ff6:
      bVar2 = true;
      local_d8 = 0;
      plVar11 = (int64_t *)0x0;
      goto LAB_00772bec;
    }
    (**(code **)(*plVar9 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_00772fe5;
    if (local_b8 != (int64_t *)0x0) goto LAB_00772ff6;
LAB_007733ef:
    if ((g_0272a440 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
      g_0272a390 = FUN_000fddb0();
      g_0272a378 = "MUAmplitudeAnalyzer";
      g_0272a380 = 0x90;
      g_0272a388 = FUN_0079c0e0;
      g_0272a398 = 0;
      ram_000000000272a3a0 = 0;
      g_0272a3a8 = 0;
      g_0272a420 = 0;
      ram_000000000272a428 = 0;
      g_0272a430 = 0;
      g_0272a432 = 1;
      g_0272a3b0 = 0;
      ram_000000000272a3b8 = 0;
      g_0272a3c0 = 0;
      ram_000000000272a3c8 = 0;
      g_0272a3d0 = 0;
      ram_000000000272a3d8 = 0;
      g_0272a3e0 = 0;
      ram_000000000272a3e8 = 0;
      g_0272a3f0 = 0;
      ram_000000000272a3f8 = 0;
      g_0272a400 = 0;
      ram_000000000272a408 = 0;
      g_0272a410 = 0;
      ram_000000000272a418 = 0;
      g_0272a43b = 0;
      g_0272a433 = 0;
      ___cxa_guard_release();
    }
    plVar11 = local_b8;
    plVar1 = g_02802688;
    if (plVar9 != (int64_t *)0x0) {
      (**(code **)(*plVar9 + 0x360))();
      cVar4 = FUN_00e85ea0();
      plVar11 = local_b8;
      plVar1 = g_02802688;
      if (cVar4 != '\0') {
        plVar1 = local_b8;
      }
    }
    local_b8 = plVar11;
    if (plVar1 == (int64_t *)0x0) goto LAB_00773380;
    uVar12 = FUN_00e33de0();
    local_108 = g_0270b920;
    if (g_0270b920 != 0) {
      uVar12 = FUN_00d50b00();
    }
    local_100 = '\x01';
    pplVar5 = &local_60;
    FUN_000175c0(uVar12,&local_108);
    plVar9 = local_60;
    FUN_0006e1c0();
    if (plVar9 == (int64_t *)0x0) {
LAB_007734c6:
      pplVar5 = &g_02802688;
    }
    else {
      (**(code **)(*plVar9 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_007734c6;
    }
    plVar9 = *pplVar5;
    if (*(char *)(pplVar5 + 1) == '\0') {
      if (plVar9 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar5 + 1) = 0;
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar12 = (**(code **)(*this_ptr + 0x610))();
    plVar1 = local_60;
    if (local_58 == '\0') {
      if (local_60 != (int64_t *)0x0) {
        uVar12 = FUN_00d50b00();
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          uVar12 = FUN_00d50b20();
        }
        goto LAB_00773583;
      }
    }
    else if (local_60 != (int64_t *)0x0) {
LAB_00773583:
      local_58 = '\0';
      local_60 = (int64_t *)0x0;
      local_50 = plVar1;
      local_40 = 0;
      local_48 = 0;
      if (0 < *(int *)((int64_t)plVar1 + 0xc)) {
        lVar8 = 0;
        do {
          local_60 = *(int64_t **)(plVar1[2] + lVar8 * 8);
          local_f0 = '\0';
          local_e0 = '\0';
          local_f8 = plVar11;
          local_e8 = plVar9;
          uVar12 = FUN_006fe4f0(uVar12,&local_e8);
          if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
            uVar12 = FUN_00d50b20();
          }
          if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
            uVar12 = FUN_00d50b20();
          }
          lVar8 = lVar8 + 1;
          local_48 = CONCAT44(local_48._4_4_,(int)lVar8);
        } while ((int)lVar8 < *(int *)((int64_t)plVar1 + 0xc));
      }
      FUN_000e3600();
      FUN_00d50b20();
    }
    bVar2 = true;
    if (plVar9 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    uVar12 = FUN_00d50b00();
LAB_00772b8e:
    local_190 = 0;
    local_198 = plVar11;
    uVar6 = FUN_00773ea0(uVar12,&local_198);
    plVar11 = local_60;
    if (local_60 == (int64_t *)0x0) {
      local_d8 = 0;
    }
    else {
      local_d8 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
      if (local_58 == '\0') {
        FUN_00d50b00();
      }
    }
    bVar2 = false;
    plVar9 = local_b8;
LAB_00772bec:
    FUN_00e33de0();
    local_178 = g_0270b920;
    if (g_0270b920 != 0) {
      FUN_00d50b00();
    }
    local_170 = '\x01';
    pplVar5 = &local_60;
    FUN_000175c0();
    plVar1 = local_60;
    FUN_0006e1c0();
    if (plVar1 == (int64_t *)0x0) {
LAB_00772c6b:
      pplVar5 = &g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_00772c6b;
    }
    plVar1 = *pplVar5;
    if (*(char *)(pplVar5 + 1) == '\0') {
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar5 + 1) = 0;
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_170 != '\0') && (local_178 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 == (int64_t *)0x0) {
LAB_00772e01:
      (**(code **)(*this_ptr + 0x610))();
      plVar3 = local_60;
      if (local_58 == '\0') {
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b00();
          if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00772e52;
        }
      }
      else if (local_60 != (int64_t *)0x0) {
LAB_00772e52:
        local_58 = '\0';
        local_60 = (int64_t *)0x0;
        local_c0 = plVar3;
        local_50 = plVar3;
        local_48 = 0xffffffff;
        local_40 = 0;
        local_48._4_4_ = 0;
        while( true ) {
          if (local_48._4_4_ != 0) {
            if (local_48._4_4_ < 1) {
              iVar10 = -local_48._4_4_;
            }
            else {
              iVar10 = (int)local_48 - local_48._4_4_;
              local_48 = CONCAT44(local_48._4_4_,iVar10);
              FUN_00d23690();
              local_40 = local_40 + local_48._4_4_;
              iVar10 = 0;
            }
            local_48 = CONCAT44(iVar10,(int)local_48);
          }
          lVar8 = (int64_t)(int)local_48;
          iVar10 = (int)local_48 + 1;
          local_48 = CONCAT44(local_48._4_4_,iVar10);
          if (*(int *)((int64_t)local_50 + 0xc) <= iVar10) break;
          local_60 = *(int64_t **)(local_50[2] + 8 + lVar8 * 8);
          local_130 = '\0';
          local_120 = '\0';
          local_110 = '\0';
          local_138 = plVar9;
          local_128 = plVar1;
          local_118 = plVar11;
          FUN_006fe880(&local_118,&local_128);
          if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_000e3600();
        FUN_00d50b20();
      }
    }
    else {
      pvVar7 = _pthread_getspecific(param_1);
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        param_1 = (void*)plVar1;
      }
      FUN_01264240();
      if (local_98 == '\0') {
        if (local_a0 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_98 = '\0';
      }
      local_60 = local_a0;
      local_58 = '\0';
      cVar4 = FUN_00c9ff50();
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_a0 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') goto LAB_00772e01;
      pvVar7 = _pthread_getspecific(param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      local_c8 = 0;
      if (local_98 == '\0') {
        if (local_a0 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_98 = '\0';
      }
      local_c8 = '\x01';
      local_d0 = local_a0;
      FUN_0076f110();
      plVar3 = local_60;
      if (local_58 == '\0') {
        if (((local_60 != (int64_t *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
           (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_58 = '\0';
      }
      if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 != (int64_t *)0x0) {
        local_58 = '\0';
        local_60 = (int64_t *)0x0;
        local_180 = plVar3;
        local_50 = plVar3;
        local_48 = 0xffffffff;
        local_40 = 0;
        local_48._4_4_ = 0;
        while( true ) {
          plVar3 = local_a0;
          if (local_48._4_4_ != 0) {
            if (local_48._4_4_ < 1) {
              iVar10 = -local_48._4_4_;
            }
            else {
              iVar10 = (int)local_48 - local_48._4_4_;
              local_48 = CONCAT44(local_48._4_4_,iVar10);
              FUN_00d23690();
              local_40 = local_40 + local_48._4_4_;
              iVar10 = 0;
            }
            local_48 = CONCAT44(iVar10,(int)local_48);
          }
          lVar8 = (int64_t)(int)local_48;
          iVar10 = (int)local_48 + 1;
          local_48 = CONCAT44(local_48._4_4_,iVar10);
          if (*(int *)((int64_t)local_50 + 0xc) <= iVar10) break;
          local_60 = *(int64_t **)(local_50[2] + 8 + lVar8 * 8);
          (**(code **)(*this_ptr + 0x610))();
          if (local_98 == '\0') {
            if (local_a0 != (int64_t *)0x0) {
              FUN_00d50b00();
              goto LAB_007731de;
            }
          }
          else if (local_a0 != (int64_t *)0x0) {
LAB_007731de:
            local_98 = '\0';
            local_a0 = (int64_t *)0x0;
            local_c0 = plVar3;
            local_88 = -1;
            while( true ) {
              lVar8 = (int64_t)local_88;
              local_88 = local_88 + 1;
              if (*(int *)((int64_t)plVar3 + 0xc) <= local_88) break;
              local_a0 = *(int64_t **)(plVar3[2] + 8 + lVar8 * 8);
              local_160 = '\0';
              local_158 = local_60;
              local_150 = '\0';
              local_140 = '\0';
              local_168 = plVar9;
              local_148 = plVar11;
              FUN_006fe880(&local_148,&local_158);
              if ((local_140 != '\0') && (local_148 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            FUN_000e3600();
            FUN_00d50b20();
          }
        }
        FUN_001159b0();
        FUN_00d50b20();
      }
    }
    FUN_0076f320();
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_d8 != '\0') && (plVar11 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_31 != '\0') && (!bVar2)) {
    FUN_00d50b20();
  }
LAB_00773380:
  if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

