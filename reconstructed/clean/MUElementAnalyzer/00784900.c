// Function: FUN_00784900
// Address: 00784900
// Size: 2844 bytes
// Class: MUElementAnalyzer
// String references:
//   "MUElementAnalyzer"
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


void FUN_00784900(void*param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t **pplVar2;
  int64_t lVar3;
  uint8_t uVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  int64_t lVar8;
  void* pVar9;
  void*puVar10;
  int64_t **pplVar11;
  int64_t ***ppplVar12;
  uint8_t uVar13;
  void*arg1;
  uint uVar14;
  int64_t **pplVar15;
  uint32_t uVar16;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint64_t local_138;
  uint8_t local_130;
  int64_t **local_128;
  uint8_t local_120;
  int64_t *local_118;
  void*local_110;
  int64_t *local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t **local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int local_c4;
  int64_t local_c0;
  char local_b8;
  int64_t local_a0;
  char local_98;
  int64_t **local_80;
  char local_78;
  int64_t **local_70;
  uint64_t local_68;
  int local_60;
  uint8_t local_51;
  int64_t *local_50;
  char local_48;
  int64_t **local_40;
  
  puVar10 = param_1;
  pvVar7 = _pthread_getspecific((void*)param_1);
  pVar9 = (void*)puVar10;
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar6 = FUN_01326de0();
  if (iVar6 != 0) {
    pvVar7 = _pthread_getspecific(pVar9);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0076f070();
    FUN_013d8fe0();
  }
  local_51 = iVar6 != 0;
  pvVar7 = _pthread_getspecific(pVar9);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_c4 = iVar6;
  FUN_01320d00();
  pvVar7 = _pthread_getspecific(pVar9);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar16 = FUN_0124e100();
  local_40 = local_80;
  pplVar11 = local_80;
  if (local_78 == '\0') {
    if (((local_80 != (int64_t **)0x0) && (uVar16 = FUN_00d50b00(), local_78 != '\0')) &&
       (local_80 != (int64_t **)0x0)) {
      uVar16 = FUN_00d50b20();
    }
  }
  else {
    local_78 = '\0';
  }
  pVar9 = (void*)pplVar11;
  local_118 = param_2;
  local_110 = param_1;
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    uVar16 = FUN_00d50b20();
  }
  uVar14 = 0;
  if (local_40 != (int64_t **)0x0) {
    local_78 = '\0';
    local_80 = (int64_t **)0x0;
    local_70 = local_40;
    local_68 = 0xffffffff;
    local_60 = 0;
    while( true ) {
      if (uVar14 != 0) {
        if ((int)uVar14 < 1) {
          iVar6 = -uVar14;
        }
        else {
          local_68 = CONCAT44(local_68._4_4_,(int)local_68 - uVar14);
          FUN_00d23690(uVar16,uVar14);
          local_60 = local_60 + local_68._4_4_;
          iVar6 = 0;
        }
        local_68 = CONCAT44(iVar6,(int)local_68);
      }
      lVar8 = (int64_t)(int)local_68;
      iVar6 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar6);
      uVar14 = (uint)(iVar6 < *(int *)((int64_t)local_70 + 0xc));
      pplVar11 = local_70;
      if (*(int *)((int64_t)local_70 + 0xc) <= iVar6) break;
      local_80 = (int64_t **)local_70[2][lVar8 + 1];
      uVar16 = FUN_00e33de0();
      plVar1 = g_02729580;
      if (g_02729580 != (int64_t *)0x0) {
        uVar16 = FUN_00d50b00();
      }
      local_108 = plVar1;
      local_100 = '\x01';
      FUN_000175c0(uVar16,&local_108);
      plVar1 = local_50;
      uVar16 = FUN_00053ac0();
      pplVar11 = (int64_t **)&g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar5 = FUN_00e85ea0();
        pplVar11 = &local_50;
        uVar16 = extraout_XMM0_Da;
        if (cVar5 == '\0') {
          pplVar11 = (int64_t **)&g_02802688;
        }
      }
      plVar1 = *pplVar11;
      if (*(char *)(pplVar11 + 1) == '\0') {
        if (plVar1 != (int64_t *)0x0) {
          uVar16 = FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar11 + 1) = 0;
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        uVar16 = FUN_00d50b20();
      }
      if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
        uVar16 = FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        uVar16 = FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        cVar5 = FUN_00d45ad0();
        uVar16 = FUN_00d50b20();
        if (cVar5 != '\0') break;
      }
      uVar14 = local_68._4_4_;
    }
    pVar9 = (void*)pplVar11;
    FUN_00097c40();
  }
  pvVar7 = _pthread_getspecific(pVar9);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01320d00();
  pvVar7 = _pthread_getspecific(pVar9);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0124e100();
  pplVar11 = local_80;
  if (local_78 == '\0') {
    if (((local_80 != (int64_t **)0x0) && (FUN_00d50b00(), local_78 != '\0')) &&
       (local_80 != (int64_t **)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_78 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (0 < (int)*(uint *)((int64_t)pplVar11 + 0xc)) {
    lVar8 = (uint64_t)*(uint *)((int64_t)pplVar11 + 0xc) + 1;
    do {
      pVar9 = (void*)pplVar11[2];
      uVar16 = FUN_00e33de0();
      lVar3 = g_02729618;
      if (g_02729618 != 0) {
        uVar16 = FUN_00d50b00();
      }
      local_f8 = lVar3;
      local_f0 = '\x01';
      FUN_000175c0(uVar16,&local_f8);
      pplVar2 = local_80;
      pplVar15 = (int64_t **)*arg1;
      if ((local_78 != '\0') && (local_80 != (int64_t **)0x0)) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (pplVar2 != pplVar15) {
        FUN_00d23620();
      }
      lVar8 = lVar8 + -1;
    } while (1 < lVar8);
  }
  local_e0 = '\0';
  local_e8 = pplVar11;
  FUN_00e34bb0();
  if ((local_e0 != '\0') && (local_e8 != (int64_t **)0x0)) {
    FUN_00d50b20();
  }
  FUN_00785940();
  local_80 = (int64_t **)*arg1;
  local_78 = '\0';
  FUN_00ca13a0();
  if ((local_78 != '\0') && (local_80 != (int64_t **)0x0)) {
    FUN_00d50b20();
  }
  if (local_c4 == 0) {
LAB_00784f3b:
    local_78 = '\0';
    local_80 = (int64_t **)0x0;
    uVar4 = 0;
LAB_00784f49:
    uVar13 = uVar4;
    pplVar15 = (int64_t **)0x0;
  }
  else {
    pvVar7 = _pthread_getspecific(pVar9);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar5 = FUN_0134a950();
    if (cVar5 == '\0') goto LAB_00784f3b;
    pvVar7 = _pthread_getspecific(pVar9);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d610();
    pplVar15 = local_80;
    if (local_78 == '\0') {
      uVar13 = 1;
      uVar4 = 1;
      if (local_80 != (int64_t **)0x0) {
        FUN_00d50b00();
        if ((local_78 != '\0') && (local_80 != (int64_t **)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00784f4c;
      }
      goto LAB_00784f49;
    }
    local_78 = '\0';
    uVar13 = 1;
  }
LAB_00784f4c:
  local_138 = *local_110;
  local_130 = 0;
  local_d8 = *local_118;
  local_d0 = '\0';
  local_120 = 0;
  local_128 = pplVar15;
  uVar16 = FUN_007651c0(local_51,&local_138,&local_d8,uVar13);
  pplVar2 = local_80;
  if (local_40 == local_80) {
    if ((local_78 != '\0') && (local_80 != (int64_t **)0x0)) {
      uVar16 = FUN_00d50b20();
    }
  }
  else {
    if (local_78 == '\0') {
      if (local_80 != (int64_t **)0x0) {
        uVar16 = FUN_00d50b00();
      }
      if (local_40 != (int64_t **)0x0) {
        local_40 = pplVar2;
        uVar16 = FUN_00d50b20();
        goto joined_r0x007850c2;
      }
    }
    else {
      if (local_40 == (int64_t **)0x0) {
        local_40 = local_80;
        goto joined_r0x007850c2;
      }
      uVar16 = FUN_00d50b20();
    }
    local_40 = pplVar2;
  }
joined_r0x007850c2:
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    uVar16 = FUN_00d50b20();
  }
  if (((char)uVar14 != '\0') && (local_40 != (int64_t **)0x0)) {
    local_78 = '\0';
    local_80 = (int64_t **)0x0;
    local_70 = local_40;
    local_68 = 0xffffffff;
    local_60 = 0;
    iVar6 = 0;
    while( true ) {
      if (iVar6 != 0) {
        if (iVar6 < 1) {
          iVar6 = -iVar6;
        }
        else {
          local_68 = CONCAT44(local_68._4_4_,(int)local_68 - iVar6);
          uVar16 = FUN_00d23690(uVar16,iVar6);
          local_60 = local_60 + iVar6;
          iVar6 = 0;
        }
        local_68 = CONCAT44(iVar6,(int)local_68);
      }
      lVar8 = (int64_t)(int)local_68;
      iVar6 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar6);
      if (*(int *)((int64_t)local_70 + 0xc) <= iVar6) break;
      pplVar2 = (int64_t **)local_70[2][lVar8 + 1];
      local_80 = pplVar2;
      if ((g_026e0c38 == '\0') &&
         (iVar6 = ___cxa_guard_acquire(), uVar16 = extraout_XMM0_Da_01, iVar6 != 0)) {
        g_026e0b88 = FUN_000fddb0();
        g_026e0b70 = "MUElementAnalyzer";
        g_026e0b78 = 0x180;
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
        uVar16 = ___cxa_guard_release();
      }
      ppplVar12 = (int64_t ***)&g_02802688;
      if (pplVar2 != (int64_t **)0x0) {
        (*(*pplVar2)[0x6c])();
        cVar5 = FUN_00e85ea0();
        ppplVar12 = &local_80;
        uVar16 = extraout_XMM0_Da_00;
        if (cVar5 == '\0') {
          ppplVar12 = (int64_t ***)&g_02802688;
        }
      }
      if (*(char *)(ppplVar12 + 1) == '\0') {
        if (*ppplVar12 != (int64_t **)0x0) {
          FUN_00d50b00();
          goto LAB_007851f1;
        }
      }
      else {
        *(void*)(ppplVar12 + 1) = 0;
        if (*ppplVar12 != (int64_t **)0x0) {
LAB_007851f1:
          FUN_00e33de0();
          uVar16 = FUN_00d46300();
          lVar8 = local_c0;
          plVar1 = g_02729580;
          if (local_b8 == '\0') {
            if (local_c0 != 0) {
              uVar16 = FUN_00d50b00();
              plVar1 = g_02729580;
            }
          }
          else {
            local_b8 = '\0';
          }
          g_02729580 = plVar1;
          if (plVar1 != (int64_t *)0x0) {
            uVar16 = FUN_00d50b00();
          }
          local_48 = '\0';
          local_50 = plVar1;
          FUN_00ca0840(uVar16,&local_50);
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if (lVar8 != 0) {
            FUN_00d50b20();
          }
          if ((local_b8 != '\0') && (local_c0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
          uVar16 = FUN_00d50b20();
        }
      }
      iVar6 = local_68._4_4_;
    }
    FUN_00097c40();
  }
  if (pplVar15 != (int64_t **)0x0) {
    FUN_00d50b20();
  }
  if (pplVar11 != (int64_t **)0x0) {
    FUN_00d50b20();
  }
  if (local_40 != (int64_t **)0x0) {
    FUN_00d50b20();
  }
  return;
}

