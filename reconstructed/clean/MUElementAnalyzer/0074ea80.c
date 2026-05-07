// Function: FUN_0074ea80
// Address: 0074ea80
// Size: 7348 bytes
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


void FUN_0074ea80(uint64_t param_1,uint32_t param_2)

{
  bool bVar1;
  bool bVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  void*puVar6;
  void*puVar7;
  int64_t *plVar8;
  int64_t lVar9;
  void *pvVar10;
  void* pVar11;
  int64_t lVar12;
  int64_t *plVar13;
  int64_t *plVar14;
  int64_t *arg1;
  int64_t this_ptr;
  int iVar15;
  bool bVar16;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar17;
  void*local_240;
  uint8_t local_238;
  uint64_t local_230;
  uint8_t local_228;
  int64_t *local_220;
  uint8_t local_218;
  int64_t local_210;
  char local_208;
  int64_t local_200;
  char local_1f8;
  int64_t local_1f0;
  char local_1e8;
  int64_t local_1e0;
  char local_1d8;
  void*local_1d0;
  char local_1c8;
  int64_t *local_1c0;
  char local_1b8;
  int64_t *local_1b0;
  char local_1a8;
  int64_t *local_1a0;
  char local_198;
  int64_t *local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_140;
  char local_138;
  int64_t *local_130;
  uint32_t local_124;
  int64_t *local_120;
  char local_118;
  int64_t *local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_88;
  int64_t *local_80;
  char local_78;
  int64_t local_70;
  void* local_68;
  int64_t *local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  int local_40;
  int iStack_3c;
  int local_38;
  
  local_58 = (int64_t *)*arg1;
  local_50 = '\0';
  local_124 = param_2;
  cVar4 = FUN_00d23d70();
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    return;
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_210 = g_027295a0;
  if (g_027295a0 != 0) {
    FUN_00d50b00();
  }
  local_208 = '\x01';
  local_200 = *arg1;
  local_1f8 = '\0';
  FUN_00d41040(&local_200,&local_210);
  if ((local_1f8 != '\0') && (local_200 != 0)) {
    FUN_00d50b20();
  }
  if ((local_208 != '\0') && (local_210 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_1f0 = g_027ebc70;
  if (g_027ebc70 != 0) {
    FUN_00d50b00();
  }
  local_1e8 = '\x01';
  local_1e0 = *arg1;
  local_1d8 = '\0';
  FUN_00d41040();
  if ((local_1d8 != '\0') && (local_1e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1e8 != '\0') && (local_1f0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_58 = (int64_t *)*arg1;
  local_50 = '\0';
  FUN_00d23f50();
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar9 = *(int64_t *)(this_ptr + 0x140);
  if (lVar9 != 0) {
    if ((char)local_124 == '\0') {
      local_50 = '\0';
      local_58 = (int64_t *)0x0;
      local_48 = *(int64_t **)(lVar9 + 0x10);
      local_40 = 0;
      if (*(int *)((int64_t)local_48 + 0xc) < 1) {
        bVar2 = false;
        local_60 = (int64_t *)0x0;
      }
      else {
        iVar15 = 0;
        local_60 = (int64_t *)0x0;
        bVar1 = false;
        do {
          local_58 = *(int64_t **)(local_48[2] + (int64_t)local_40 * 8);
          FUN_0076f4d0();
          plVar13 = local_80;
          if (local_80 == local_60) {
            plVar13 = local_60;
            bVar2 = bVar1;
            if ((bVar1) || (local_80 == (int64_t *)0x0)) goto joined_r0x0074f025;
            bVar2 = true;
            if (local_78 == '\0') {
              FUN_00d50b00();
              goto LAB_0074f00d;
            }
          }
          else if (local_78 == '\0') {
            if (local_80 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            bVar2 = true;
            if ((bVar1) && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
              local_60 = plVar13;
LAB_0074f00d:
              plVar13 = local_60;
              bVar2 = true;
            }
joined_r0x0074f025:
            local_60 = plVar13;
            plVar13 = local_60;
            if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
              FUN_00d50b20();
              plVar13 = local_60;
            }
          }
          else {
            bVar2 = true;
            if ((bVar1) && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          local_80 = (int64_t *)*arg1;
          local_78 = '\0';
          local_60 = plVar13;
          cVar4 = FUN_00d23d70();
          if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar4 != '\0') {
            local_80 = (int64_t *)*arg1;
            local_78 = '\0';
            FUN_00d23f50();
            if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          iVar15 = iVar15 + *(int *)((int64_t)local_60 + 0xc);
          local_40 = local_40 + 1;
          bVar1 = bVar2;
        } while (local_40 < *(int *)((int64_t)local_48 + 0xc));
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar15 != 0) goto LAB_0075020f;
      }
      plVar13 = (int64_t *)FUN_00e8fc40();
      FUN_00d4ff40();
      *plVar13 = (int64_t)&g_02572358;
      pcVar3 = g_02572370;
      (*g_02572370)();
      if (*(int64_t *)(this_ptr + 0x140) != 0) {
        local_78 = '\0';
        local_80 = (int64_t *)0x0;
        local_70 = *(int64_t *)(*(int64_t *)(this_ptr + 0x140) + 0x10);
        local_68 = 0;
        if (0 < *(int *)(local_70 + 0xc)) {
          do {
            lVar9 = (int64_t)(int)local_68;
            local_80 = *(int64_t **)(*(int64_t *)(local_70 + 0x10) + lVar9 * 8);
            pVar11 = local_68;
            if (*(int64_t *)(this_ptr + 0x150) == 0) {
LAB_0074f2ea:
              bVar1 = false;
              plVar14 = (int64_t *)0x0;
            }
            else {
              uVar17 = FUN_0076f5a0();
              plVar14 = local_58;
              if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
                uVar17 = FUN_00d50b20();
              }
              pVar11 = (void*)lVar9;
              if (plVar14 == (int64_t *)0x0) goto LAB_0074f2ea;
              FUN_0076f5a0(uVar17,&local_80);
              plVar14 = local_58;
              if (local_58 == (int64_t *)0x0) {
                pVar11 = (void*)CONCAT71((int7)((uint64_t)lVar9 >> 8),1);
                plVar14 = (int64_t *)0x0;
                bVar1 = false;
              }
              else {
                bVar1 = true;
                if (local_50 == '\0') {
                  FUN_00d50b00();
                  pVar11 = 0;
                  if ((local_50 == '\0') || (local_58 == (int64_t *)0x0)) goto LAB_0074f2b6;
                  FUN_00d50b20();
                }
                pVar11 = 0;
              }
LAB_0074f2b6:
              bVar16 = *(int *)((int64_t)plVar14 + 0xc) == 0;
              if (plVar14 != (int64_t *)0x0 && bVar16) {
                bVar1 = false;
              }
              if ((plVar14 != (int64_t *)0x0 && bVar16) &&
                 (plVar14 = (int64_t *)0x0, (char)pVar11 == '\0')) {
                FUN_00d50b20();
                goto LAB_0074f2ea;
              }
            }
            pvVar10 = _pthread_getspecific(pVar11);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar17 = FUN_012e5ae0();
            plVar8 = local_58;
            if (local_50 == '\0') {
              if (local_58 != (int64_t *)0x0) {
                uVar17 = FUN_00d50b00();
                if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
                  uVar17 = FUN_00d50b20();
                }
                goto LAB_0074f341;
              }
              if (plVar14 != (int64_t *)0x0) {
                bVar16 = false;
                goto LAB_0074f4ee;
              }
LAB_0074f4b0:
              local_50 = '\0';
              local_58 = plVar8;
              FUN_00d214d0();
              if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              bVar16 = true;
              if (plVar8 != (int64_t *)0x0) {
LAB_0074f4e6:
                FUN_00d50b20();
              }
            }
            else {
LAB_0074f341:
              if (plVar14 == (int64_t *)0x0) goto LAB_0074f4b0;
              bVar16 = false;
              if (plVar8 != (int64_t *)0x0) {
                local_50 = '\0';
                local_58 = (int64_t *)0x0;
                local_48 = plVar8;
                local_40 = -1;
                iStack_3c = 0;
                local_38 = 0;
                while( true ) {
                  if (iStack_3c != 0) {
                    if (iStack_3c < 1) {
                      iStack_3c = -iStack_3c;
                    }
                    else {
                      local_40 = local_40 - iStack_3c;
                      FUN_00d23690(uVar17,iStack_3c);
                      local_38 = local_38 + iStack_3c;
                      iStack_3c = 0;
                    }
                  }
                  lVar9 = (int64_t)local_40;
                  local_40 = local_40 + 1;
                  if (*(int *)((int64_t)local_48 + 0xc) <= local_40) break;
                  local_a0 = *(int64_t **)(local_48[2] + 8 + lVar9 * 8);
                  local_58 = local_a0;
                  cVar4 = FUN_00d24090();
                  uVar17 = extraout_XMM0_Da;
                  if (cVar4 == '\0') {
                    local_a0 = local_58;
                    uVar17 = FUN_00d21140();
                  }
                  local_98 = '\0';
                }
                FUN_001159b0();
                bVar16 = false;
                if (plVar8 == (int64_t *)0x0) goto LAB_0074f4ee;
                goto LAB_0074f4e6;
              }
            }
LAB_0074f4ee:
            if ((bVar1) && (!bVar16)) {
              FUN_00d50b20();
            }
            local_68 = local_68 + 1;
          } while ((int)local_68 < *(int *)(local_70 + 0xc));
          if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      plVar14 = (int64_t *)FUN_00e8fc40();
      FUN_00d4ff40();
      *plVar14 = (int64_t)&g_02572358;
      (*pcVar3)();
      if (plVar13 != (int64_t *)0x0) {
        local_50 = '\0';
        local_58 = (int64_t *)0x0;
        local_40 = -1;
        iStack_3c = 0;
        local_38 = 0;
        local_48 = plVar13;
        while( true ) {
          if (iStack_3c != 0) {
            if (iStack_3c < 1) {
              iStack_3c = -iStack_3c;
            }
            else {
              local_40 = local_40 - iStack_3c;
              FUN_00d23690();
              local_38 = local_38 + iStack_3c;
              iStack_3c = 0;
            }
          }
          lVar9 = (int64_t)local_40;
          local_40 = local_40 + 1;
          if (*(int *)((int64_t)local_48 + 0xc) <= local_40) break;
          local_58 = *(int64_t **)(local_48[2] + 8 + lVar9 * 8);
          pvVar10 = _pthread_getspecific((void*)local_48[2]);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01264240();
          plVar8 = local_80;
          if ((((local_78 == '\0') && (local_80 != (int64_t *)0x0)) &&
              (FUN_00d50b00(), local_78 != '\0')) && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_78 = '\0';
          local_80 = plVar8;
          FUN_00d235a0();
          if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar8 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
        FUN_001159b0();
      }
      FUN_0076f670();
      local_130 = local_58;
      if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      puVar6 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &g_02572358;
      (*pcVar3)();
      if (plVar13 != (int64_t *)0x0) {
        local_50 = '\0';
        local_58 = (int64_t *)0x0;
        local_40 = -1;
        iStack_3c = 0;
        local_38 = 0;
        local_48 = plVar13;
        while( true ) {
          if (iStack_3c != 0) {
            if (iStack_3c < 1) {
              iStack_3c = -iStack_3c;
            }
            else {
              local_40 = local_40 - iStack_3c;
              FUN_00d23690();
              local_38 = local_38 + iStack_3c;
              iStack_3c = 0;
            }
          }
          lVar9 = (int64_t)local_40;
          local_40 = local_40 + 1;
          if (*(int *)((int64_t)local_48 + 0xc) <= local_40) break;
          local_58 = *(int64_t **)(local_48[2] + 8 + lVar9 * 8);
          pvVar10 = _pthread_getspecific((void*)local_48[2]);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
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
          local_80 = local_a0;
          local_78 = '\0';
          cVar4 = FUN_00d24090();
          if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (local_a0 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar4 != '\0') {
            local_80 = local_58;
            local_78 = '\0';
            FUN_00d21140();
            if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        FUN_001159b0();
      }
      if (*(char *)(this_ptr + 0x158) == '\0') {
        puVar7 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar7 = &g_02572358;
        (*pcVar3)();
        if (0 < *(int *)((int64_t)puVar6 + 0xc)) {
          lVar9 = 0;
          do {
            pvVar10 = _pthread_getspecific((void*)puVar6);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e7c0();
            plVar8 = local_80;
            if (local_78 == '\0') {
              if (local_80 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_78 = '\0';
            }
            local_58 = plVar8;
            local_50 = '\0';
            FUN_00d21140();
            if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar8 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            lVar9 = lVar9 + 1;
          } while (lVar9 < *(int *)((int64_t)puVar6 + 0xc));
        }
        plVar8 = (int64_t *)FUN_00e8fc40();
        FUN_0079b9c0();
        (**(code **)(*plVar8 + 0x18))();
        local_1c8 = '\0';
        local_1d0 = puVar7;
        FUN_015cbd00();
        if ((local_1c8 != '\0') && (local_1d0 != (void*)0x0)) {
          FUN_00d50b20();
        }
        FUN_00e34260();
        FUN_015f6e40();
        local_88 = local_58;
        if (local_58 == (int64_t *)0x0) {
          FUN_016c0a70();
          local_88 = local_58;
          plVar8 = local_58;
          if (local_58 == (int64_t *)0x0) {
            local_88 = (int64_t *)0x0;
            bVar1 = false;
          }
          else {
            bVar1 = true;
            if (((local_50 == '\0') && (FUN_00d50b00(), local_50 != '\0')) &&
               (local_58 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          plVar8 = local_58;
          if (((local_50 == '\0') && (FUN_00d50b00(), local_50 != '\0')) &&
             (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          bVar1 = true;
        }
        pVar11 = (void*)plVar8;
        if (*(char *)(this_ptr + 0x159) == '\0') {
          local_198 = '\0';
          local_1a0 = plVar13;
          FUN_00e7bdb0();
          FUN_01287c80();
          if ((local_198 != '\0') && (local_1a0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_1b8 = '\0';
          local_1b0 = local_88;
          local_1a8 = '\0';
          local_1c0 = plVar13;
          FUN_00757c60();
          pvVar10 = _pthread_getspecific(pVar11);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012caf10();
          local_120 = local_58;
          local_118 = 0;
          if (local_50 == '\0') {
            if (local_58 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          local_118 = '\x01';
          FUN_01297c10((int)*(void*)(this_ptr + 0x160));
          if ((local_118 != '\0') && (local_120 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_1a8 != '\0') && (local_1b0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_1b8 != '\0') && (local_1c0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
        if (puVar7 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_00757c60();
        plVar8 = local_58;
        if (local_50 == '\0') {
          if (local_58 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_218 = 1;
        local_220 = plVar8;
        local_238 = 0;
        local_230 = 0;
        local_228 = 0;
        pVar11 = 0;
        local_240 = puVar6;
        FUN_0076fba0(0,&local_240,&local_230);
        if (plVar8 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00757c60();
        pvVar10 = _pthread_getspecific(pVar11);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012caf10();
        local_88 = local_58;
        if (local_58 == (int64_t *)0x0) {
          local_88 = (int64_t *)0x0;
          bVar1 = false;
        }
        else if (local_50 == '\0') {
          FUN_00d50b00();
          bVar1 = true;
          if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_50 = '\0';
          bVar1 = true;
        }
        if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (plVar14 != (int64_t *)0x0) {
        local_50 = '\0';
        local_58 = (int64_t *)0x0;
        local_40 = -1;
        iStack_3c = 0;
        local_38 = 0;
        local_48 = plVar14;
        while( true ) {
          if (iStack_3c != 0) {
            if (iStack_3c < 1) {
              iStack_3c = -iStack_3c;
            }
            else {
              local_40 = local_40 - iStack_3c;
              FUN_00d23690();
              local_38 = local_38 + iStack_3c;
              iStack_3c = 0;
            }
          }
          lVar9 = (int64_t)local_40;
          local_40 = local_40 + 1;
          if (*(int *)((int64_t)local_48 + 0xc) <= local_40) break;
          lVar12 = local_48[2];
          local_58 = *(int64_t **)(lVar12 + 8 + lVar9 * 8);
          pvVar10 = _pthread_getspecific((void*)lVar12);
          pVar11 = (void*)lVar12;
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_190 = local_88;
          local_188 = '\0';
          FUN_016cbba0();
          plVar8 = local_80;
          local_108 = 0;
          if (local_78 == '\0') {
            if (local_80 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_78 = '\0';
          }
          local_108 = '\x01';
          local_110 = plVar8;
          FUN_0132d960();
          if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_188 != '\0') && (local_190 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d403d0();
          lVar9 = g_027ebe30;
          if (g_027ebe30 != 0) {
            FUN_00d50b00();
          }
          local_180 = lVar9;
          local_178 = '\x01';
          pvVar10 = _pthread_getspecific(pVar11);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0132d610();
          local_f8 = 0;
          if (local_98 == '\0') {
            if (local_a0 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_98 = '\0';
          }
          local_f8 = '\x01';
          local_100 = local_a0;
          local_168 = '\0';
          local_170 = 0;
          FUN_00d40470(&local_170,&local_100,3,3);
          if ((local_168 != '\0') && (local_170 != 0)) {
            FUN_00d50b20();
          }
          if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_178 != '\0') && (local_180 != 0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_00115190();
      }
      *(void*)(this_ptr + 0x158) = 0;
      *(void*)(this_ptr + 0x160) = 0;
      if (*(int64_t *)(this_ptr + 0x140) != 0) {
        *(void*)(this_ptr + 0x140) = 0;
        FUN_00d50b20();
      }
      if ((bVar1) && (local_88 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar6 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (local_130 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (plVar13 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      local_50 = '\0';
      local_58 = (int64_t *)0x0;
      local_48 = *(int64_t **)(lVar9 + 0x10);
      local_40 = 0;
      if (*(int *)((int64_t)local_48 + 0xc) < 1) {
        local_60 = (int64_t *)0x0;
        bVar2 = false;
      }
      else {
        local_60 = (int64_t *)0x0;
        bVar2 = false;
        do {
          local_58 = *(int64_t **)(local_48[2] + (int64_t)local_40 * 8);
          FUN_0076f4d0();
          plVar13 = local_80;
          if (local_80 == local_60) {
            plVar13 = local_60;
            bVar1 = bVar2;
            if ((bVar2) || (local_80 == (int64_t *)0x0)) goto joined_r0x0074ee25;
            bVar1 = true;
            if (local_78 == '\0') {
              FUN_00d50b00();
              goto LAB_0074ee0d;
            }
          }
          else if (local_78 == '\0') {
            if (local_80 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            bVar1 = true;
            if ((bVar2) && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
              local_60 = plVar13;
LAB_0074ee0d:
              plVar13 = local_60;
              bVar1 = true;
            }
joined_r0x0074ee25:
            local_60 = plVar13;
            plVar13 = local_60;
            if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
              FUN_00d50b20();
              plVar13 = local_60;
            }
          }
          else {
            bVar1 = true;
            if ((bVar2) && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          bVar2 = bVar1;
          local_80 = (int64_t *)*arg1;
          local_78 = '\0';
          local_60 = plVar13;
          cVar4 = FUN_00d23d70();
          if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar4 != '\0') {
            local_80 = (int64_t *)*arg1;
            local_78 = '\0';
            FUN_00d23f50();
            if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          local_40 = local_40 + 1;
        } while (local_40 < *(int *)((int64_t)local_48 + 0xc));
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
LAB_0075020f:
    if ((bVar2) && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)local_124 != '\0') {
      return;
    }
  }
  FUN_01f27fe0();
  cVar4 = (**(code **)(*local_58 + 0x450))();
  if (cVar4 != '\0') {
    if (local_50 == '\0') {
      return;
    }
    if (local_58 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  plVar13 = (int64_t *)*arg1;
  if ((g_026e0c38 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
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
  if (plVar13 != (int64_t *)0x0) {
    (**(code **)(*plVar13 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar13 = arg1;
    if (cVar4 != '\0') goto LAB_007502ba;
  }
  plVar13 = &g_02802688;
LAB_007502ba:
  lVar9 = *plVar13;
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pVar11 = (void*)plVar13;
  if (lVar9 != 0) {
    if (*(int64_t **)(this_ptr + 0x120) != (int64_t *)0x0) {
      local_50 = '\0';
      local_58 = (int64_t *)0x0;
      local_40 = -1;
      iStack_3c = 0;
      local_38 = 0;
      iVar15 = 0;
      local_48 = *(int64_t **)(this_ptr + 0x120);
      while( true ) {
        if (iStack_3c != 0) {
          if (iStack_3c < 1) {
            iStack_3c = -iStack_3c;
          }
          else {
            local_40 = local_40 - iStack_3c;
            FUN_00d23690();
            local_38 = local_38 + iStack_3c;
            iStack_3c = 0;
          }
        }
        lVar9 = (int64_t)local_40;
        local_40 = local_40 + 1;
        if (*(int *)((int64_t)local_48 + 0xc) <= local_40) break;
        local_58 = *(int64_t **)(local_48[2] + 8 + lVar9 * 8);
        plVar13 = (int64_t *)*arg1;
        if ((g_026e0c38 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
        plVar14 = &g_02802688;
        if (plVar13 != (int64_t *)0x0) {
          (**(code **)(*plVar13 + 0x360))();
          cVar4 = FUN_00e85ea0();
          plVar14 = arg1;
          if (cVar4 == '\0') {
            plVar14 = &g_02802688;
          }
        }
        iVar15 = (iVar15 + 1) - (uint)(*plVar14 == 0);
      }
      plVar13 = local_48;
      FUN_00097c40();
      pVar11 = (void*)plVar13;
      if (iVar15 != 0) {
        return;
      }
    }
    if (*(char *)(this_ptr + 0x169) != '\0') {
      *(void*)(this_ptr + 0x169) = 0;
      FUN_00757c60();
      pvVar10 = _pthread_getspecific(pVar11);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      pvVar10 = _pthread_getspecific(pVar11);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e7210();
      local_f0 = local_58;
      local_e8 = 0;
      if (local_50 == '\0') {
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_e8 = '\x01';
      FUN_00e7bdb0();
      FUN_01287c80();
      if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01f27fe0();
      local_138 = 0;
      uVar17 = FUN_00d50b00();
      local_138 = '\x01';
      local_140 = this_ptr;
      FUN_000c4290(uVar17,&local_140);
      plVar13 = local_58;
      if (local_50 == '\0') {
        if (((local_58 != (int64_t *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
           (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50 = '\0';
      }
      if ((local_138 != '\0') && (local_140 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar13 != (int64_t *)0x0) {
        local_50 = 0;
        local_58 = (int64_t *)0x0;
        local_48 = plVar13;
        iStack_3c = 0;
        local_38 = 0;
        for (lVar9 = 0; local_40 = (int)lVar9, local_40 < *(int *)((int64_t)plVar13 + 0xc);
            lVar9 = lVar9 + 1) {
          local_58 = *(int64_t **)(plVar13[2] + lVar9 * 8);
          FUN_0051b610();
        }
        FUN_0015ee90();
        FUN_00d50b20();
      }
    }
  }
  return;
}

