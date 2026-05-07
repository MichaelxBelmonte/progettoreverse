// Function: FUN_0077cd50
// Address: 0077cd50
// Size: 2462 bytes
// Class: MUElementAnalyzer
// String references:
//   "GNJob"
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


void FUN_0077cd50(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  char cVar5;
  uint8_t uVar6;
  int iVar7;
  int64_t **pplVar8;
  int64_t lVar9;
  int64_t *this_ptr;
  uint32_t uVar10;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  uint64_t local_40;
  uint32_t local_38;
  
  pplVar8 = &local_58;
  FUN_00d3ecf0();
  plVar1 = local_58;
  if ((g_0272a440 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
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
  if (plVar1 == (int64_t *)0x0) {
LAB_0077cdaf:
    pplVar8 = &g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_0077cdaf;
  }
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    FUN_00d3ecf0();
    plVar2 = local_58;
    if ((((local_50 == '\0') && (local_58 != (int64_t *)0x0)) && (FUN_00d50b00(), local_50 != '\0')
        ) && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    cVar5 = FUN_00e34240();
    if (cVar5 == '\0') {
      pplVar8 = &local_68;
      FUN_00d3ecf0();
      plVar3 = local_68;
      if ((g_0278c910 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
        g_026d1ef8 = FUN_00d4fe50();
        g_026d1ee0 = "GNJob";
        g_026d1ee8 = 0x60;
        g_026d1ef0 = FUN_000443f0;
        g_026d1f00 = 0;
        ram_00000000026d1f08 = 0;
        g_026d1f10 = 0;
        g_026d1f88 = 0;
        ram_00000000026d1f90 = 0;
        g_026d1f98 = 0;
        g_026d1f9a = 1;
        g_026d1f18 = 0;
        ram_00000000026d1f20 = 0;
        g_026d1f28 = 0;
        ram_00000000026d1f30 = 0;
        g_026d1f38 = 0;
        ram_00000000026d1f40 = 0;
        g_026d1f48 = 0;
        ram_00000000026d1f50 = 0;
        g_026d1f58 = 0;
        ram_00000000026d1f60 = 0;
        g_026d1f68 = 0;
        ram_00000000026d1f70 = 0;
        g_026d1f78 = 0;
        ram_00000000026d1f80 = 0;
        g_026d1fa3 = 0;
        g_026d1f9b = 0;
        ___cxa_guard_release();
      }
      if (plVar3 == (int64_t *)0x0) {
LAB_0077d0f1:
        pplVar8 = &g_02802688;
      }
      else {
        (**(code **)(*plVar3 + 0x360))();
        cVar5 = FUN_00e85ea0();
        if (cVar5 == '\0') goto LAB_0077d0f1;
      }
      plVar3 = *pplVar8;
      if (*(char *)(pplVar8 + 1) == '\0') {
        if (plVar3 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar8 + 1) = 0;
      }
      local_50 = '\0';
      local_58 = plVar3;
      FUN_00e8adb0();
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if ((g_026e0c38 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
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
      if (plVar2 == (int64_t *)0x0) {
LAB_0077ceed:
        if (g_02802688 != (int64_t *)0x0) goto LAB_0077d1f7;
LAB_0077d1ae:
        uVar10 = FUN_0079bbe0();
        plVar3 = g_02802688;
        if (plVar2 != (int64_t *)0x0) {
          (**(code **)(*plVar2 + 0x360))();
          cVar5 = FUN_00e85ea0();
          uVar10 = extraout_XMM0_Da_00;
          plVar3 = g_02802688;
          if (cVar5 != '\0') {
            plVar3 = plVar2;
          }
        }
        if (plVar3 != (int64_t *)0x0) goto LAB_0077d1f7;
      }
      else {
        (**(code **)(*plVar2 + 0x360))();
        cVar5 = FUN_00e85ea0();
        if (cVar5 == '\0') goto LAB_0077ceed;
        if (plVar2 == (int64_t *)0x0) goto LAB_0077d1ae;
LAB_0077d1f7:
        uVar10 = FUN_00e33de0();
        local_c8 = g_0270b920;
        if (g_0270b920 != 0) {
          uVar10 = FUN_00d50b00();
        }
        local_c0 = '\x01';
        pplVar8 = &local_58;
        FUN_000175c0(uVar10,&local_c8);
        plVar3 = local_58;
        FUN_0006e1c0();
        if (plVar3 == (int64_t *)0x0) {
LAB_0077d26b:
          pplVar8 = &g_02802688;
        }
        else {
          (**(code **)(*plVar3 + 0x360))();
          cVar5 = FUN_00e85ea0();
          if (cVar5 == '\0') goto LAB_0077d26b;
        }
        plVar3 = *pplVar8;
        if (*(char *)(pplVar8 + 1) == '\0') {
          if (plVar3 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(void*)(pplVar8 + 1) = 0;
        }
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*this_ptr + 0x610))();
        plVar4 = local_58;
        if (local_50 == '\0') {
          if (local_58 != (int64_t *)0x0) {
            FUN_00d50b00();
            if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_0077d31c;
          }
        }
        else if (local_58 != (int64_t *)0x0) {
LAB_0077d31c:
          local_50 = '\0';
          local_58 = (int64_t *)0x0;
          local_48 = plVar4;
          local_38 = 0;
          local_40 = 0;
          if (0 < *(int *)((int64_t)plVar4 + 0xc)) {
            lVar9 = 0;
            do {
              local_58 = *(int64_t **)(plVar4[2] + lVar9 * 8);
              local_b8 = plVar2;
              local_b0 = '\0';
              local_a0 = '\0';
              local_98 = 0;
              local_90 = '\0';
              local_a8 = plVar3;
              FUN_006fe880(&local_98,&local_a8);
              if ((local_90 != '\0') && (local_98 != 0)) {
                FUN_00d50b20();
              }
              if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              lVar9 = lVar9 + 1;
              local_40 = CONCAT44(local_40._4_4_,(int)lVar9);
            } while ((int)lVar9 < *(int *)((int64_t)plVar4 + 0xc));
          }
          FUN_000e3600();
          FUN_00d50b20();
        }
        uVar10 = FUN_0076f320();
        if (plVar3 != (int64_t *)0x0) {
          uVar10 = FUN_00d50b20();
        }
      }
      FUN_0074ea80(uVar10,1);
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    goto LAB_0077d47c;
  }
  uVar10 = FUN_00e33de0();
  local_f8 = g_0270b920;
  if (g_0270b920 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_f0 = '\x01';
  pplVar8 = &local_58;
  FUN_000175c0(uVar10,&local_f8);
  plVar2 = local_58;
  FUN_0006e1c0();
  if (plVar2 == (int64_t *)0x0) {
LAB_0077ce69:
    pplVar8 = &g_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_0077ce69;
  }
  plVar2 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar10 = (**(code **)(*this_ptr + 0x610))();
  plVar3 = local_58;
  if (local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      uVar10 = FUN_00d50b00();
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        uVar10 = FUN_00d50b20();
      }
      goto LAB_0077cfa4;
    }
  }
  else if (local_58 != (int64_t *)0x0) {
LAB_0077cfa4:
    local_50 = '\0';
    local_58 = (int64_t *)0x0;
    local_48 = plVar3;
    local_38 = 0;
    local_40 = 0;
    if (0 < *(int *)((int64_t)plVar3 + 0xc)) {
      lVar9 = 0;
      do {
        local_58 = *(int64_t **)(plVar3[2] + lVar9 * 8);
        local_e0 = '\0';
        local_d0 = '\0';
        local_e8 = plVar1;
        local_d8 = plVar2;
        uVar10 = FUN_006fe4f0(uVar10,&local_d8);
        if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
          uVar10 = FUN_00d50b20();
        }
        if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
          uVar10 = FUN_00d50b20();
        }
        lVar9 = lVar9 + 1;
        local_40 = CONCAT44(local_40._4_4_,(int)lVar9);
      } while ((int)lVar9 < *(int *)((int64_t)plVar3 + 0xc));
    }
    FUN_000e3600();
    FUN_00d50b20();
  }
  uVar6 = FUN_00e34240();
  FUN_0074ea80(extraout_XMM0_Da,uVar6);
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_0077d47c:
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

