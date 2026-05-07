// Function: FUN_01bd69c0
// Address: 01bd69c0
// Size: 3034 bytes
// Class: MUSpectrumShaper
// String references:
//   "MUSpectrumShaperSpectrumCtrl"
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


void FUN_01bd69c0(void)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int64_t *plVar6;
  int64_t lVar7;
  undefined7 uVar10;
  void *pvVar8;
  uint64_t uVar9;
  int iVar11;
  void* pVar12;
  int64_t **pplVar13;
  int64_t *plVar14;
  int64_t this_ptr;
  int64_t lVar15;
  int64_t *plVar16;
  bool bVar17;
  char local_f8;
  undefined7 uStack_f7;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t local_78;
  int64_t *local_70;
  uint64_t local_68;
  uint32_t local_5c;
  int64_t *local_58;
  uint64_t local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38 [8];
  
  lVar15 = *(int64_t *)(this_ptr + 0x90);
  if (lVar15 != 0) {
    FUN_00d50b00();
  }
  local_78 = lVar15;
  while( true ) {
    lVar15 = *(int64_t *)(*(int64_t *)(this_ptr + 0x88) + 0x38);
    if (lVar15 != 0) {
      FUN_00d50b00();
    }
    iVar4 = *(int *)(lVar15 + 0xc);
    iVar11 = *(int *)(local_78 + 0x18);
    FUN_00d50b20();
    iVar3 = iVar11 + 3;
    if (-1 < iVar11) {
      iVar3 = iVar11;
    }
    if (iVar4 <= iVar3 >> 2) break;
    lVar15 = *(int64_t *)(*(int64_t *)(this_ptr + 0x88) + 0x38);
    if (lVar15 != 0) {
      FUN_00d50b00();
    }
    FUN_00d23340();
    plVar6 = local_40;
    local_f8 = local_38[0];
    pcVar5 = local_38;
    if (local_38[0] == '\0') {
      pcVar5 = &local_f8;
    }
    *pcVar5 = '\0';
    if ((local_38[0] != '\0') && (plVar6 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_f8 == '\0') && (plVar6 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    if (lVar15 != 0) {
      FUN_00d50b20();
    }
    FUN_01ebbf20();
    plVar14 = local_40;
    if ((g_027e7428 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      g_027e7378 = FUN_00015ff0();
      g_027e7360 = "MUSpectrumShaperSpectrumCtrl";
      g_027e7368 = 0x98;
      g_027e7370 = FUN_01be23f0;
      g_027e7380 = 0;
      ram_00000000027e7388 = 0;
      g_027e7390 = 0;
      ram_00000000027e7398 = 0;
      g_027e73a0 = 0;
      ram_00000000027e73a8 = 0;
      g_027e73b0 = 0;
      ram_00000000027e73b8 = 0;
      g_027e73c0 = 0;
      ram_00000000027e73c8 = 0;
      g_027e73d0 = 0;
      ram_00000000027e73d8 = 0;
      g_027e73e0 = 0;
      ram_00000000027e73e8 = 0;
      g_027e73f0 = 0;
      ram_00000000027e73f8 = 0;
      g_027e7400 = 0;
      ram_00000000027e7408 = 0;
      g_027e7410 = 0;
      ram_00000000027e7418 = 0;
      g_027e7420 = 0;
      ___cxa_guard_release();
    }
    pplVar13 = (int64_t **)&g_02802688;
    if (plVar14 != (int64_t *)0x0) {
      (**(code **)(*plVar14 + 0x360))();
      cVar2 = FUN_00e85ea0();
      pplVar13 = &local_40;
      if (cVar2 == '\0') {
        pplVar13 = (int64_t **)&g_02802688;
      }
    }
    plVar14 = *pplVar13;
    if (*(char *)(pplVar13 + 1) == '\0') {
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar13 + 1) = 0;
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar14 == (int64_t *)0x0) {
      (**(code **)(*plVar6 + 0x940))();
    }
    else {
      FUN_01b5e5b0();
      FUN_00d50b20();
    }
    (**(code **)(*plVar6 + 0x478))();
    FUN_00d50130();
    FUN_00d50b20();
  }
  while( true ) {
    lVar15 = *(int64_t *)(*(int64_t *)(this_ptr + 0x88) + 0x38);
    if (lVar15 != 0) {
      FUN_00d50b00();
    }
    iVar4 = *(int *)(lVar15 + 0xc);
    iVar11 = *(int *)(local_78 + 0x18);
    FUN_00d50b20();
    iVar3 = iVar11 + 3;
    if (-1 < iVar11) {
      iVar3 = iVar11;
    }
    if (iVar3 >> 2 <= iVar4) break;
    plVar6 = (int64_t *)FUN_00e8fc40();
    FUN_001911a0();
    (**(code **)(*plVar6 + 0x18))();
    FUN_01e3f820();
    (**(code **)(*plVar6 + 0x4d0))();
    (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x450))();
    (**(code **)(*plVar6 + 0x558))();
    FUN_00d50b20();
  }
  FUN_01bd0d90();
  if (3 < *(int *)(local_78 + 0x18)) {
    lVar15 = 0;
    do {
      uVar1 = *(uint *)(*(int64_t *)(local_78 + 0x10) + lVar15 * 4);
      lVar7 = *(int64_t *)(*(int64_t *)(this_ptr + 0x88) + 0x38);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      plVar6 = *(int64_t **)(*(int64_t *)(lVar7 + 0x10) + lVar15 * 8);
      if (plVar6 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
      plVar16 = g_027e5c30;
      plVar14 = g_027e5c28;
      local_70 = plVar6;
      if (4 < uVar1) {
        local_58 = (int64_t *)0x0;
        local_68 = 0;
        goto LAB_01bd6f50;
      }
      lVar7 = (int64_t)&switchD_01bd6e1b::switchdataD_01bd7b70 +
              (int64_t)(int)(&switchD_01bd6e1b::switchdataD_01bd7b70)[uVar1];
      uVar10 = (undefined7)((uint64_t)g_027e5c28 >> 8);
      switch(uVar1) {
      case 0:
        if (g_027e5c28 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_58 = plVar14;
        local_68 = CONCAT71(uVar10,plVar14 != (int64_t *)0x0);
        local_5c = 1;
        break;
      case 1:
        if (g_027e5c28 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_58 = plVar14;
        local_68 = CONCAT71(uVar10,plVar14 != (int64_t *)0x0);
        local_48 = (int64_t *)0x0;
        local_50 = 0;
        local_5c = 0;
        goto LAB_01bd6f5c;
      case 2:
        if (g_027e5c28 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_58 = plVar14;
        local_68 = CONCAT71(uVar10,plVar14 != (int64_t *)0x0);
        local_5c = 2;
        break;
      case 3:
        if (g_027e5c28 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_58 = plVar14;
        local_68 = CONCAT71(uVar10,plVar14 != (int64_t *)0x0);
        local_5c = 3;
        break;
      case 4:
        if (g_027e5c30 != (int64_t *)0x0) {
          lVar7 = FUN_00d50b00();
        }
        local_58 = plVar16;
        local_68 = CONCAT71((int7)((uint64_t)lVar7 >> 8),plVar16 != (int64_t *)0x0);
        FUN_01bd8b20();
        local_48 = local_40;
        if (local_40 == (int64_t *)0x0) {
          local_50 = 0;
          local_48 = (int64_t *)0x0;
        }
        else {
          local_50 = CONCAT71((int7)((uint64_t)local_40 >> 8),1);
          if (local_38[0] == '\0') {
            FUN_00d50b00();
          }
        }
        goto LAB_01bd6f5c;
      }
LAB_01bd6f50:
      local_48 = (int64_t *)0x0;
      local_50 = 0;
LAB_01bd6f5c:
      FUN_01ebbf20();
      plVar14 = local_40;
      if ((g_027e7428 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        g_027e7378 = FUN_00015ff0();
        g_027e7360 = "MUSpectrumShaperSpectrumCtrl";
        g_027e7368 = 0x98;
        g_027e7370 = FUN_01be23f0;
        g_027e7380 = 0;
        ram_00000000027e7388 = 0;
        g_027e7390 = 0;
        ram_00000000027e7398 = 0;
        g_027e73a0 = 0;
        ram_00000000027e73a8 = 0;
        g_027e73b0 = 0;
        ram_00000000027e73b8 = 0;
        g_027e73c0 = 0;
        ram_00000000027e73c8 = 0;
        g_027e73d0 = 0;
        ram_00000000027e73d8 = 0;
        g_027e73e0 = 0;
        ram_00000000027e73e8 = 0;
        g_027e73f0 = 0;
        ram_00000000027e73f8 = 0;
        g_027e7400 = 0;
        ram_00000000027e7408 = 0;
        g_027e7410 = 0;
        ram_00000000027e7418 = 0;
        g_027e7420 = 0;
        ___cxa_guard_release();
        plVar6 = local_70;
      }
      pplVar13 = (int64_t **)&g_02802688;
      if (plVar14 != (int64_t *)0x0) {
        (**(code **)(*plVar14 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar13 = &local_40;
        if (cVar2 == '\0') {
          pplVar13 = (int64_t **)&g_02802688;
        }
      }
      plVar14 = *pplVar13;
      if (*(char *)(pplVar13 + 1) == '\0') {
        if (plVar14 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar13 + 1) = 0;
      }
      pVar12 = (void*)pplVar13;
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_48 == (int64_t *)0x0) {
        FUN_01bd8b20();
        plVar16 = local_40;
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar16 == (int64_t *)0x0) {
          local_48 = (int64_t *)0x0;
        }
        else {
          FUN_01bd8b20();
          lVar7 = CONCAT71(uStack_f7,local_f8);
          pvVar8 = _pthread_getspecific(pVar12);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_017eca70();
          local_48 = local_40;
          if (local_40 == (int64_t *)0x0) {
            local_48 = (int64_t *)0x0;
          }
          else if (local_38[0] == '\0') {
            uVar9 = FUN_00d50b00();
            local_50 = CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
            if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38[0] = '\0';
            local_50 = CONCAT71((int7)((uint64_t)local_40 >> 8),1);
          }
          if ((local_f0 != '\0') && (lVar7 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      local_e0 = '\0';
      local_e8 = plVar6;
      cVar2 = (**(code **)(*local_58 + 0x50))();
      if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar2 == '\0') {
        if (plVar14 == (int64_t *)0x0) {
          local_c0 = '\0';
          local_c8 = 0;
          (**(code **)(*plVar6 + 0x940))();
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_d0 = '\0';
          local_d8 = 0;
          FUN_01b5e5b0();
          if ((local_d0 != '\0') && (local_d8 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      local_b8 = local_58;
      local_b0 = '\0';
      FUN_01eb6f70();
      if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01ebbf20();
      plVar6 = local_40;
      if ((g_027e7428 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        g_027e7378 = FUN_00015ff0();
        g_027e7360 = "MUSpectrumShaperSpectrumCtrl";
        g_027e7368 = 0x98;
        g_027e7370 = FUN_01be23f0;
        g_027e7380 = 0;
        ram_00000000027e7388 = 0;
        g_027e7390 = 0;
        ram_00000000027e7398 = 0;
        g_027e73a0 = 0;
        ram_00000000027e73a8 = 0;
        g_027e73b0 = 0;
        ram_00000000027e73b8 = 0;
        g_027e73c0 = 0;
        ram_00000000027e73c8 = 0;
        g_027e73d0 = 0;
        ram_00000000027e73d8 = 0;
        g_027e73e0 = 0;
        ram_00000000027e73e8 = 0;
        g_027e73f0 = 0;
        ram_00000000027e73f8 = 0;
        g_027e7400 = 0;
        ram_00000000027e7408 = 0;
        g_027e7410 = 0;
        ram_00000000027e7418 = 0;
        g_027e7420 = 0;
        ___cxa_guard_release();
      }
      pplVar13 = (int64_t **)&g_02802688;
      if (plVar6 != (int64_t *)0x0) {
        (**(code **)(*plVar6 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar13 = &local_40;
        if (cVar2 == '\0') {
          pplVar13 = (int64_t **)&g_02802688;
        }
      }
      plVar6 = *pplVar13;
      plVar16 = local_70;
      if (plVar14 != plVar6) {
        if (*(char *)(pplVar13 + 1) == '\0') {
          if (plVar6 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          plVar16 = local_70;
          bVar17 = plVar14 != (int64_t *)0x0;
          plVar14 = plVar6;
          if (bVar17) {
            FUN_00d50b20();
          }
        }
        else {
          if (plVar14 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          *(void*)(pplVar13 + 1) = 0;
          plVar14 = plVar6;
          plVar16 = local_70;
        }
      }
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 == (int64_t *)0x0) {
        local_98 = local_48;
        local_90 = '\0';
        FUN_002edd50();
        local_88 = local_40;
        local_80 = 0;
        if (local_38[0] == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38[0] = '\0';
        }
        local_80 = '\x01';
        (**(code **)(*plVar16 + 0x940))();
        if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_a8 = local_48;
        local_a0 = '\0';
        FUN_01b5e5b0();
        if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      if (((char)local_50 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((char)local_68 != '\0') {
        FUN_00d50b20();
      }
      if (plVar16 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      iVar4 = *(int *)(local_78 + 0x18);
      iVar11 = iVar4 + 3;
      if (-1 < iVar4) {
        iVar11 = iVar4;
      }
      lVar15 = lVar15 + 1;
    } while ((int)lVar15 < iVar11 >> 2);
  }
  FUN_01e53c20();
  (**(code **)(*local_40 + 0x8e0))();
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

