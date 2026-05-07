// Function: FUN_00791e10
// Address: 00791e10
// Size: 2965 bytes
// Class: MUElementAnalyzer
// String references:
//   "GNList"
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


float FUN_00791e10(float param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  int64_t lVar4;
  void *pvVar5;
  int64_t lVar6;
  char *pcVar7;
  void* pVar8;
  int *in_RCX;
  int64_t **pplVar9;
  int64_t *plVar10;
  int64_t lVar11;
  char *pcVar12;
  int iVar13;
  int iVar14;
  uint64_t uVar15;
  int iVar16;
  int64_t *arg1;
  uint uVar17;
  int64_t this_ptr;
  uint32_t uVar18;
  int64_t *local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  uint64_t local_b8;
  int local_b0;
  int local_a4;
  int64_t *local_a0;
  char local_98;
  int64_t local_90;
  int64_t *local_88;
  int64_t *local_80;
  int64_t *local_78;
  char local_70;
  int64_t local_68;
  uint64_t local_60;
  int local_58;
  float local_4c;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  lVar4 = g_027296b8;
  local_4c = param_1;
  if ((*arg1 != 0) && (1 < *(int *)(*arg1 + 0xc))) {
    if (g_027296b8 != 0) {
      FUN_00d50b00();
    }
    local_90 = lVar4;
    FUN_00e33de0();
    uVar18 = FUN_00d46dc0(local_4c);
    local_a0 = local_48;
    local_98 = 0;
    if (local_40[0] == '\0') {
      if (local_48 != (int64_t *)0x0) {
        uVar18 = FUN_00d50b00();
      }
    }
    else {
      local_40[0] = '\0';
    }
    lVar4 = local_90;
    local_98 = '\x01';
    local_d0 = local_90;
    local_c8 = '\0';
    FUN_00ca0840(uVar18,&local_d0);
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (*(int64_t *)(this_ptr + 0x120) != 0) {
      local_c8 = '\0';
      local_d0 = 0;
      local_b8 = 0xffffffff;
      local_b0 = 0;
      local_a4 = 1;
      local_c0 = *(int64_t *)(this_ptr + 0x120);
LAB_00792038:
      uVar15 = local_b8 & 0xffffffff;
LAB_00792050:
      uVar17 = (int)uVar15 + 1;
      if ((int)uVar17 < *(int *)(local_c0 + 0xc)) goto code_r0x0079205b;
      local_b8 = CONCAT44(local_b8._4_4_,(int)uVar15 + 1);
LAB_0079295c:
      FUN_00097c40();
      iVar14 = local_a4;
      lVar4 = local_90;
      goto joined_r0x0079297f;
    }
    iVar14 = 1;
joined_r0x0079297f:
    if (in_RCX != (int *)0x0) {
      *in_RCX = iVar14;
    }
    local_4c = local_4c / (float)iVar14;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  return local_4c;
code_r0x0079205b:
  local_d0 = *(int64_t *)(*(int64_t *)(local_c0 + 0x10) + (int64_t)(int)uVar17 * 8);
  uVar15 = (uint64_t)uVar17;
  if (local_d0 != *param_2) goto code_r0x00792077;
  goto LAB_00792050;
code_r0x00792077:
  local_b8 = CONCAT44(local_b8._4_4_,uVar17);
LAB_0079207d:
  uVar18 = FUN_00e33de0();
  lVar4 = g_0270b920;
  if (g_0270b920 != 0) {
    uVar18 = FUN_00d50b00();
  }
  local_108 = lVar4;
  local_100 = '\x01';
  FUN_000175c0(uVar18,&local_108);
  plVar1 = local_78;
  FUN_0006e1c0();
  pplVar9 = (int64_t **)&g_02802688;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    pplVar9 = &local_78;
    if (cVar3 == '\0') {
      pplVar9 = (int64_t **)&g_02802688;
    }
  }
  local_80 = *pplVar9;
  if (*(char *)(pplVar9 + 1) == '\0') {
    if (local_80 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar9 + 1) = 0;
  }
  pVar8 = (void*)pplVar9;
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_80 == (int64_t *)0x0) {
    uVar18 = FUN_00e33de0();
    lVar4 = g_027295d0;
    if (g_027295d0 != 0) {
      uVar18 = FUN_00d50b00();
    }
    local_f8 = lVar4;
    local_f0 = '\x01';
    FUN_000175c0(uVar18,&local_f8);
    plVar1 = local_78;
    if ((g_027048b0 == '\0') && (iVar14 = ___cxa_guard_acquire(), iVar14 != 0)) {
      g_026cd478 = FUN_00d4fe50();
      g_026cd460 = "GNList";
      g_026cd468 = 0x20;
      g_026cd470 = FUN_00018210;
      g_026cd480 = 0;
      ram_00000000026cd488 = 0;
      g_026cd490 = 0;
      g_026cd508 = 0;
      ram_00000000026cd510 = 0;
      g_026cd518 = 0;
      g_026cd51a = 6;
      g_026cd498 = 0;
      ram_00000000026cd4a0 = 0;
      g_026cd4a8 = 0;
      ram_00000000026cd4b0 = 0;
      g_026cd4b8 = 0;
      ram_00000000026cd4c0 = 0;
      g_026cd4c8 = 0;
      ram_00000000026cd4d0 = 0;
      g_026cd4d8 = 0;
      ram_00000000026cd4e0 = 0;
      g_026cd4e8 = 0;
      ram_00000000026cd4f0 = 0;
      g_026cd4f8 = 0;
      ram_00000000026cd500 = 0;
      g_026cd523 = 0;
      g_026cd51b = 0;
      ___cxa_guard_release();
    }
    pplVar9 = (int64_t **)&g_02802688;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      pplVar9 = (int64_t **)&g_02802688;
      if (cVar3 != '\0') {
        FUN_0006e1c0();
        cVar3 = FUN_00e8da30();
        pplVar9 = &local_78;
        if (cVar3 == '\0') {
          pplVar9 = (int64_t **)&g_02802688;
        }
      }
    }
    plVar1 = *pplVar9;
    if (*(char *)(pplVar9 + 1) == '\0') {
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar9 + 1) = 0;
    }
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    local_88 = plVar1;
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar1 = (int64_t *)*param_2;
    if ((g_026e0c38 == '\0') && (iVar14 = ___cxa_guard_acquire(), iVar14 != 0)) {
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
      ___cxa_guard_release();
    }
    plVar10 = &g_02802688;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      plVar10 = param_2;
      if (cVar3 == '\0') {
        plVar10 = &g_02802688;
      }
    }
    lVar4 = *plVar10;
    if (lVar4 != 0) {
      uVar18 = FUN_013fb420();
      plVar1 = local_78;
      if ((((local_70 == '\0') && (local_78 != (int64_t *)0x0)) &&
          (uVar18 = FUN_00d50b00(), local_70 != '\0')) && (local_78 != (int64_t *)0x0)) {
        uVar18 = FUN_00d50b20();
      }
      iVar14 = 0;
      if (*arg1 != 0) {
        local_70 = '\0';
        local_78 = (int64_t *)0x0;
        local_60 = 0xffffffff;
        local_58 = 0;
        local_68 = *arg1;
        do {
          if (iVar14 != 0) {
            if (iVar14 < 1) {
              iVar14 = -iVar14;
            }
            else {
              local_60 = CONCAT44(local_60._4_4_,(int)local_60 - iVar14);
              FUN_00d23690(uVar18,iVar14);
              local_58 = local_58 + local_60._4_4_;
              iVar14 = 0;
            }
            local_60 = CONCAT44(iVar14,(int)local_60);
          }
          lVar6 = (int64_t)(int)local_60;
          iVar14 = (int)local_60 + 1;
          local_60 = CONCAT44(local_60._4_4_,iVar14);
          if (*(int *)(local_68 + 0xc) <= iVar14) {
            iVar14 = 0;
            goto LAB_00792648;
          }
          lVar11 = *(int64_t *)(local_68 + 0x10);
          local_78 = *(int64_t **)(lVar11 + 8 + lVar6 * 8);
          pvVar5 = _pthread_getspecific((void*)lVar11);
          pVar8 = (void*)lVar11;
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar18 = FUN_012e5ae0();
          iVar14 = *(int *)((int64_t)local_48 + 0xc);
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            uVar18 = FUN_00d50b20();
          }
          if (iVar14 == 1) {
            pvVar5 = _pthread_getspecific(pVar8);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e5ae0();
            FUN_00d23310();
            plVar10 = local_48;
            local_38[0] = local_40[0];
            pcVar12 = local_38;
            pcVar7 = local_40;
            if (local_40[0] == '\0') {
              pcVar7 = pcVar12;
            }
            *pcVar7 = '\0';
            if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            pVar8 = (void*)pcVar12;
            pvVar5 = _pthread_getspecific(pVar8);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0126ef70();
            pvVar5 = _pthread_getspecific(pVar8);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar18 = FUN_01320d00();
            plVar2 = local_48;
            if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
              uVar18 = FUN_00d50b20();
            }
            if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
              uVar18 = FUN_00d50b20();
            }
            if ((local_38[0] != '\0') && (plVar10 != (int64_t *)0x0)) {
              uVar18 = FUN_00d50b20();
            }
            if ((local_110 != '\0') && (local_118 != 0)) {
              uVar18 = FUN_00d50b20();
            }
            if (local_128 == plVar2) goto LAB_00792646;
          }
          iVar14 = local_60._4_4_;
        } while( true );
      }
      goto LAB_00792651;
    }
    cVar3 = '\0';
    goto LAB_0079265e;
  }
  pvVar5 = _pthread_getspecific(pVar8);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01266fe0();
  plVar1 = local_48;
  if (local_40[0] == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40[0] = '\0';
  }
  local_78 = plVar1;
  local_70 = '\0';
  cVar3 = FUN_00d23d70();
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') goto LAB_00792682;
  goto LAB_0079278c;
LAB_00792646:
  iVar14 = 1;
LAB_00792648:
  FUN_000be170();
LAB_00792651:
  cVar3 = (char)iVar14;
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_0079265e:
  if (local_88 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((lVar4 != 0) && (cVar3 != '\0')) {
LAB_00792682:
    lVar4 = local_90;
    uVar18 = FUN_00e33de0();
    local_e8 = lVar4;
    local_e0 = '\0';
    FUN_000175c0(uVar18,&local_e8);
    plVar1 = local_78;
    FUN_00053ac0();
    pplVar9 = (int64_t **)&g_02802688;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      pplVar9 = &local_78;
      if (cVar3 == '\0') {
        pplVar9 = (int64_t **)&g_02802688;
      }
    }
    plVar1 = *pplVar9;
    if (*(char *)(pplVar9 + 1) == '\0') {
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar9 + 1) = 0;
    }
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_a4 = local_a4 + 1;
    if (plVar1 != (int64_t *)0x0) {
      uVar18 = FUN_00d459e0();
      local_88 = (int64_t *)CONCAT44(local_88._4_4_,uVar18);
      FUN_00d50b20();
      local_4c = local_4c + local_88._0_4_;
    }
  }
  if (local_80 != (int64_t *)0x0) {
LAB_0079278c:
    FUN_00d50b20();
  }
  iVar14 = local_b8._4_4_;
  iVar13 = local_b8._4_4_;
  if (local_b8._4_4_ == 0) goto LAB_00792038;
  do {
    if (iVar14 == 0) {
      iVar14 = 0;
    }
    else {
      if (iVar14 < 1) {
        iVar13 = -iVar14;
      }
      else {
        local_b8 = CONCAT44(local_b8._4_4_,(int)local_b8 - iVar14);
        FUN_00d23690();
        local_b0 = local_b0 + iVar13;
        iVar13 = 0;
      }
      local_b8 = CONCAT44(iVar13,(int)local_b8);
      iVar14 = iVar13;
    }
    lVar4 = (int64_t)(int)local_b8;
    iVar16 = (int)local_b8 + 1;
    local_b8 = CONCAT44(local_b8._4_4_,iVar16);
    if (*(int *)(local_c0 + 0xc) <= iVar16) goto LAB_0079295c;
    local_d0 = *(int64_t *)(*(int64_t *)(local_c0 + 0x10) + 8 + lVar4 * 8);
  } while (local_d0 == *param_2);
  goto LAB_0079207d;
}

