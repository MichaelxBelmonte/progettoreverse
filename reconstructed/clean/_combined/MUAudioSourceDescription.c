// ===================================================================
// MUAudioSourceDescription — Complete reconstructed pseudocode
// 35 functions
// ===================================================================

// Registered properties (38):
//   MUAudioSourceDescriptionType _currentDescriptionType
//   bool            _isNewDocument
//   bool            _isDetectionInProgress
//   bool            _insertGroupDefinesPerformanceTempo
//   bool            _stretchInsertGroup
//   double          _stretchInsertStartTime
//   bool            _createdFromSoundfile
//   bool            _timelineWasModified
//   GNInt           _recordingsInProgress
//   bool            _isComparing
//   bool            _followsHostRegionSelection
//   bool            _zoomsToHostRegionSelection
//   GNInt           _shouldDisplayStructureProblemDialog
//   bool            _shouldDisplayUnknownArchiveDialog
//   bool            _shouldDisplayImportedArchiveDialog
//   bool            _useAutomaticDetection
//   bool            _percussiveSeparation
//   bool            _hasDistinctAttacks
//   bool            _findSibilantPointsAutomatically
//   bool            _isPreliminary
//   bool            _isTonalicOnly
//   bool            _allowAutomaticPolyphonicDetection
//   SInt64          _startSampleIndex
//   SInt64          _sampleCount
//   SInt64          _signalEndSampleOffset
//   SInt64          _signalStartSampleOffset
//   float           _pitchCenter
//   float           _energyClaimFactor
//   float           _detectionQuality
//   GNFraction      _idealStartPulse
//   GNFraction      _idealEndPulse
//   bool            _isPreferredDivisionTriplets
//   GNInt           _preferredSubPulsesIndex
//   bool            _isResidual
//   bool            _rightSeparationTypeIsSetExplicitly
//   float           _amount
//   GNInt           _sampleOffset
//   bool            _isAudioAccessible


// ============================================================
// 0133bd20
// ============================================================
// Function: MUAudioSourceDescription_cleanupOverlappingPotentialItemsForPrincipalItem
// Address: 0133bd20
// Size: 34174 bytes
// Class: MUAudioSourceDescription
// String references:
//   "MUAudioSourcePrincipalItem"
//   "MUAudioSourceDescription::cleanupOverlappingPotentialItemsForPrincipalItem(): wrong object type in ...
//   "MUAudioSourceDescription::cleanupOverlappingPotentialItemsForPrincipalItem(): item not in _audioSou...
// === MUAudioSourceDescription properties ===
//   MUAudioSourceDescriptionType _currentDescriptionType
//   bool            _isNewDocument
//   bool            _isDetectionInProgress
//   bool            _insertGroupDefinesPerformanceTempo
//   bool            _stretchInsertGroup
//   double          _stretchInsertStartTime
//   bool            _createdFromSoundfile
//   bool            _timelineWasModified
//   GNInt           _recordingsInProgress
//   bool            _isComparing
//   bool            _followsHostRegionSelection
//   bool            _zoomsToHostRegionSelection
//   GNInt           _shouldDisplayStructureProblemDialog
//   bool            _shouldDisplayUnknownArchiveDialog
//   bool            _shouldDisplayImportedArchiveDialog
//   bool            _useAutomaticDetection
//   bool            _percussiveSeparation
//   bool            _hasDistinctAttacks
//   bool            _findSibilantPointsAutomatically
//   bool            _isPreliminary
//   bool            _isTonalicOnly
//   bool            _allowAutomaticPolyphonicDetection
//   SInt64          _startSampleIndex
//   SInt64          _sampleCount
//   SInt64          _signalEndSampleOffset
//   SInt64          _signalStartSampleOffset
//   float           _pitchCenter
//   float           _energyClaimFactor
//   float           _detectionQuality
//   GNFraction      _idealStartPulse
//   ... +8 more


int64_t MUAudioSourceDescription_cleanupOverlappingPotentialItemsForPrincipalItem(double *******param_1,double *param_2,double ******param_3,double *param_4,
                     char param_5)

{
  uint8_t uVar1;
  uint8_t uVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  uint32_t uVar7;
  int iVar8;
  void* pVar9;
  void*puVar10;
  double *****pppppdVar11;
  void *pvVar12;
  uint64_t uVar13;
  int64_t lVar14;
  int64_t lVar15;
  double *******pppppppdVar16;
  int64_t lVar17;
  double ******ppppppdVar18;
  undefined7 uVar19;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  void* pVar20;
  double *******pppppppdVar21;
  double *******pppppppdVar22;
  double *******pppppppdVar23;
  int iVar24;
  double *arg1;
  double *******this_ptr;
  double *******pppppppdVar25;
  double ******ppppppdVar26;
  double *pdVar27;
  uint64_t uVar28;
  uint uVar29;
  undefined7 uVar31;
  uint64_t uVar30;
  bool bVar32;
  uint32_t extraout_XMM0_Da;
  float fVar33;
  float fVar34;
  double dVar35;
  double dVar36;
  char local_res8;
  char local_res10;
  char local_res18;
  byte local_res20;
  double *******local_3e8;
  uint8_t local_3e0;
  double *******local_3d8;
  uint8_t local_3d0;
  double ******local_3c8;
  uint8_t local_3c0;
  double *******local_3b8;
  uint8_t local_3b0;
  double local_3a8;
  uint8_t local_3a0;
  double local_398;
  uint8_t local_390;
  double local_388;
  uint8_t local_380;
  void*local_378;
  uint8_t local_370;
  double *****local_368;
  uint8_t local_360;
  double *******local_358;
  uint8_t local_350;
  double *******local_348;
  uint8_t local_340;
  double *******local_338;
  uint8_t local_330;
  double *******local_328;
  uint8_t local_320;
  double *******local_318;
  uint8_t local_310;
  void*local_308;
  int64_t local_300;
  double *******local_2f8;
  uint8_t local_2f0;
  double *******local_2e8;
  uint8_t local_2e0;
  double *******local_2d8;
  uint8_t local_2d0;
  int64_t local_2c8;
  int64_t local_2c0;
  char local_2b8;
  int64_t local_2b0;
  char local_2a8;
  double *******local_2a0;
  char local_298;
  double *******local_290;
  char local_288;
  double *******local_280;
  char local_278;
  double *******local_270;
  char local_268;
  int64_t local_260;
  char local_258;
  int64_t local_250;
  char local_248;
  void*local_240;
  char local_238;
  void*local_230;
  char local_228;
  double *******local_220;
  char local_218;
  double ******local_210;
  code *local_208;
  double ******local_200;
  char local_1f8;
  double ******local_1f0;
  char local_1e8;
  double *******local_1e0;
  char local_1d8;
  double *******local_1d0;
  char local_1c8;
  double ******local_1c0;
  char local_1b8;
  double *******local_1b0;
  char local_1a8;
  double *******local_1a0;
  char local_198;
  uint64_t local_190;
  double ******local_188;
  char local_180;
  double ******local_178;
  char local_170;
  uint64_t local_168;
  double local_160;
  double local_158;
  uint64_t local_150;
  double local_148;
  float local_13c;
  double local_138;
  uint64_t local_130;
  double *******local_128;
  double *******local_120;
  uint64_t local_118;
  double *******local_110;
  void*local_108;
  uint64_t local_100;
  double *******local_f8;
  double *******local_f0;
  double *******local_e8;
  double *******local_e0;
  double *******local_d8;
  uint64_t local_d0;
  double *******local_c0;
  char local_b8;
  double local_b0;
  double local_a0;
  uint64_t local_98;
  void*local_88;
  double *******local_80;
  char local_78;
  void*local_70;
  uint64_t local_68;
  int local_60;
  double *local_58;
  double *******local_50;
  double *******local_48;
  double *******local_40;
  double *******local_38;
  
  local_f0 = param_1;
  puVar10 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pppppppdVar21 = (double *******)&g_02572358;
  local_308 = &g_02572358;
  *puVar10 = &g_02572358;
  local_208 = g_02572370;
  local_108 = puVar10;
  (*g_02572370)();
  pppppdVar11 = (double *****)FUN_00e7b4e0();
  *param_3 = pppppdVar11;
  *(void*)param_4 = 0;
  pppppppdVar16 = this_ptr;
  local_210 = param_3;
  local_58 = param_4;
  if (((this_ptr[0x3f] == (double ******)0x0) && (this_ptr[0x40] == (double ******)0x0)) &&
     (param_3 = this_ptr[0x29], param_3 != (double ******)0x0)) {
    pppppppdVar16 = (double *******)&g_02802558;
    local_48 = (double *******)0x0;
    local_d0 = 0;
    local_38 = (double *******)0x0;
    pvVar12 = _pthread_getspecific((void*)pppppppdVar21);
    if (pvVar12 != (void *)0x0) {
      param_3 = this_ptr[0x29];
      local_48 = (double *******)0x0;
      local_d0 = 0;
      local_38 = (double *******)0x0;
      lVar14 = FUN_00e8b990();
      if (lVar14 != 0) {
        param_3 = (double ******)param_3[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
      }
    }
    pdVar27 = (double *)0x0;
    local_48 = (double *******)0x0;
    local_d0 = 0;
    local_38 = (double *******)0x0;
    iVar8 = FUN_0141bab0();
    param_4 = pdVar27;
    if (((iVar8 != 3) || (param_4 = (double *)0x0, *param_2 == 0.0)) || (*arg1 == 0.0))
    goto LAB_0133bdce;
    pvVar12 = _pthread_getspecific((void*)pppppppdVar21);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar13 = FUN_013de560();
    pppppppdVar22 = local_80;
    if (local_80 == (double *******)0x0) {
      local_d0 = 0;
      local_38 = (double *******)0x0;
    }
    else {
      if (local_78 == '\0') {
        local_d0 = 0;
        local_38 = (double *******)0x0;
        uVar13 = FUN_00d50b00();
      }
      else {
        local_78 = '\0';
      }
      local_d0 = CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
      local_38 = pppppppdVar22;
    }
    pvVar12 = _pthread_getspecific((void*)pppppppdVar21);
    if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
      pppppppdVar21 = local_38;
    }
    cVar5 = FUN_014bc070();
    if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
      FUN_00d50b20();
    }
    if (cVar5 == '\0') goto LAB_0133bddd;
    if (local_res10 != '\0') {
      pvVar12 = _pthread_getspecific((void*)pppppppdVar21);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      local_48 = local_80;
      pppppppdVar21 = local_80;
      if (local_80 == (double *******)0x0) {
        local_48 = (double *******)0x0;
        local_98 = 0;
      }
      else {
        local_98 = CONCAT71((int7)((uint64_t)local_80 >> 8),1);
        if (((local_78 == '\0') && (FUN_00d50b00(), local_78 != '\0')) &&
           (local_80 != (double *******)0x0)) {
          FUN_00d50b20();
        }
      }
      pvVar12 = _pthread_getspecific((void*)pppppppdVar21);
      if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
        pppppppdVar21 = local_38;
      }
      local_2b8 = '\0';
      local_2c0 = 0;
      FUN_014bc360();
      if ((local_2b8 != '\0') && (local_2c0 != 0)) {
        FUN_00d50b20();
      }
      pvVar12 = _pthread_getspecific((void*)pppppppdVar21);
      if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
        pppppppdVar21 = local_48;
      }
      pdVar27 = (double *)0x0;
      local_2a8 = '\0';
      local_2b0 = 0;
      FUN_014bc2e0();
      if ((local_2a8 != '\0') && (local_2b0 != 0)) {
        FUN_00d50b20();
      }
      if (*arg1 != 0.0) {
        *arg1 = 0.0;
        if (*(char *)(arg1 + 1) != '\0') {
          FUN_00d50b20();
        }
        pdVar27 = (double *)0x0;
        *(void*)(arg1 + 1) = 0;
      }
      goto LAB_0133bdec;
    }
    local_48 = (double *******)0x0;
    local_98 = 0;
LAB_0133c012:
    local_128 = (double *******)0x0;
    pppppppdVar21 = (double *******)0x0;
    local_58 = (double *)0x0;
    local_d8 = (double *******)0x0;
    local_f8 = (double *******)0x0;
    local_88 = (void*)0x0;
    bVar32 = false;
  }
  else {
LAB_0133bdce:
    local_d0 = 0;
    local_38 = (double *******)0x0;
    pdVar27 = param_4;
LAB_0133bddd:
    local_98 = 0;
    local_48 = (double *******)0x0;
LAB_0133bdec:
    pVar20 = (void*)pppppppdVar21;
    if (*arg1 == 0.0) {
      if (*param_2 == 0.0) goto LAB_0133c012;
      pppppppdVar16 = (double *******)&g_02802558;
      pvVar12 = _pthread_getspecific(pVar20);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      pppppppdVar22 = local_80;
      uVar19 = (undefined7)((uint64_t)param_3 >> 8);
      if (local_80 == local_48) {
        if (((char)local_98 == '\0') && (local_80 != (double *******)0x0)) {
          param_3 = (double ******)CONCAT71(uVar19,1);
          if (local_78 != '\0') goto LAB_0133c0bf;
          param_3 = (double ******)CONCAT71(uVar19,1);
          FUN_00d50b00();
          pppppppdVar22 = local_48;
        }
        else {
          param_3 = (double ******)(local_98 & 0xffffffff);
          pppppppdVar22 = local_48;
        }
joined_r0x0133c0af:
        local_48 = pppppppdVar22;
        if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_78 == '\0') {
          if (local_80 != (double *******)0x0) {
            FUN_00d50b00();
          }
          param_3 = (double ******)CONCAT71(uVar19,1);
          if (((char)local_98 != '\0') && (local_48 != (double *******)0x0)) {
            local_48 = pppppppdVar22;
            FUN_00d50b20();
            pppppppdVar22 = local_48;
          }
          goto joined_r0x0133c0af;
        }
        param_3 = (double ******)CONCAT71(uVar19,1);
        if (((char)local_98 == '\0') || (local_48 == (double *******)0x0)) {
          local_48 = local_80;
        }
        else {
          local_48 = local_80;
          FUN_00d50b20();
        }
      }
LAB_0133c0bf:
      if (local_48 == (double *******)0x0) {
        local_48 = (double *******)0x0;
      }
      else {
        pvVar12 = _pthread_getspecific((void*)pppppppdVar21);
        if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
          pppppppdVar21 = local_48;
        }
        FUN_014bc340();
        pppppppdVar22 = local_80;
        if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
          FUN_00d50b20();
        }
        if (pppppppdVar22 != (double *******)0x0) {
          pvVar12 = _pthread_getspecific((void*)pppppppdVar21);
          if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
            pppppppdVar21 = local_48;
          }
          FUN_014bc340();
          pvVar12 = _pthread_getspecific((void*)pppppppdVar21);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014d1d00();
          pppppppdVar22 = local_80;
          pppppppdVar16 = (double *******)*arg1;
          if (pppppppdVar16 == local_80) {
            if ((*(char *)(arg1 + 1) != '\0') || (local_80 == (double *******)0x0))
            goto LAB_0133c274;
            if (local_78 == '\0') {
              FUN_00d50b00();
              goto LAB_0133c26f;
            }
LAB_0133c20a:
            pdVar27 = arg1 + 1;
            *(void*)pdVar27 = 1;
            local_78 = '\0';
          }
          else {
            cVar5 = *(char *)(arg1 + 1);
            if (local_78 != '\0') {
              *arg1 = (double)local_80;
              if ((cVar5 != '\0') && (pppppppdVar16 != (double *******)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_0133c20a;
            }
            if (local_80 != (double *******)0x0) {
              FUN_00d50b00();
            }
            *arg1 = (double)pppppppdVar22;
            if ((cVar5 != '\0') && (pppppppdVar16 != (double *******)0x0)) {
              FUN_00d50b20();
            }
LAB_0133c26f:
            pdVar27 = arg1 + 1;
            *(void*)pdVar27 = 1;
LAB_0133c274:
            if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((local_b8 != '\0') && (local_c0 != (double *******)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      local_98 = (uint64_t)param_3 & 0xffffffff;
LAB_0133c2ac:
      if (*param_2 != 0.0) {
        if (local_res10 == '\0') goto LAB_0133c65d;
LAB_0133c5a4:
        pVar20 = (void*)pppppppdVar21;
        if (local_res8 == '\0') goto LAB_0133c65d;
        pppppppdVar16 = (double *******)*arg1;
        uVar31 = (undefined7)((uint64_t)param_3 >> 8);
        uVar19 = (undefined7)((uint64_t)pdVar27 >> 8);
        if (pppppppdVar16 != (double *******)0x0) {
          if (*param_2 != 0.0) goto LAB_0133be0c;
          pvVar12 = _pthread_getspecific(pVar20);
          if (pvVar12 != (void *)0x0) {
            pppppppdVar16 = (double *******)*arg1;
            lVar14 = FUN_00e8b990();
            if (lVar14 != 0) {
              pppppppdVar16 =
                   (double *******)pppppppdVar16[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
            }
          }
          FUN_013de560();
          pppppppdVar22 = local_80;
          if (local_80 == local_38) {
            if (((char)local_d0 == '\0') && (local_80 != (double *******)0x0)) {
              uVar28 = CONCAT71(uVar19,1);
              if (local_78 != '\0') goto LAB_0133f025;
              uVar28 = CONCAT71(uVar19,1);
              FUN_00d50b00();
            }
            else {
              uVar28 = local_d0 & 0xffffffff;
            }
LAB_0133f011:
            if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_78 == '\0') {
              if (local_80 != (double *******)0x0) {
                FUN_00d50b00();
              }
              uVar28 = CONCAT71(uVar19,1);
              if (((char)local_d0 == '\0') || (local_38 == (double *******)0x0)) {
                local_38 = pppppppdVar22;
              }
              else {
                local_38 = pppppppdVar22;
                FUN_00d50b20();
              }
              goto LAB_0133f011;
            }
            uVar28 = CONCAT71(uVar19,1);
            if (((char)local_d0 == '\0') || (local_38 == (double *******)0x0)) {
              local_38 = local_80;
            }
            else {
              local_38 = local_80;
              FUN_00d50b20();
            }
          }
LAB_0133f025:
          pvVar12 = _pthread_getspecific((void*)pppppppdVar21);
          if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
            pppppppdVar21 = local_38;
          }
          FUN_014d1b50();
          pppppppdVar22 = local_80;
          if (local_80 == local_48) {
            if (((char)local_98 == '\0') && (local_80 != (double *******)0x0)) {
              uVar30 = CONCAT71(uVar31,1);
              if (local_78 != '\0') goto LAB_0133f222;
              uVar30 = CONCAT71(uVar31,1);
              FUN_00d50b00();
            }
            else {
              uVar30 = local_98 & 0xffffffff;
            }
LAB_0133f20e:
            if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_78 == '\0') {
              if (local_80 != (double *******)0x0) {
                FUN_00d50b00();
              }
              uVar30 = CONCAT71(uVar31,1);
              if (((char)local_98 == '\0') || (local_48 == (double *******)0x0)) {
                local_48 = pppppppdVar22;
              }
              else {
                local_48 = pppppppdVar22;
                FUN_00d50b20();
              }
              goto LAB_0133f20e;
            }
            uVar30 = CONCAT71(uVar31,1);
            if (((char)local_98 == '\0') || (local_48 == (double *******)0x0)) {
              local_48 = local_80;
            }
            else {
              local_48 = local_80;
              FUN_00d50b20();
            }
          }
LAB_0133f222:
          if (local_48 == (double *******)0x0) {
            local_48 = (double *******)0x0;
          }
          else {
            pvVar12 = _pthread_getspecific((void*)pppppppdVar21);
            if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
              pppppppdVar21 = local_48;
            }
            FUN_014d1d00();
            pppppppdVar22 = local_80;
            pppppppdVar16 = (double *******)*param_2;
            if (pppppppdVar16 == local_80) {
              if ((*(char *)(param_2 + 1) != '\0') || (local_80 == (double *******)0x0))
              goto LAB_0133f31a;
              local_40 = (double *******)(param_2 + 1);
              if (local_78 == '\0') {
                FUN_00d50b00();
                goto LAB_0133f313;
              }
            }
            else {
              pppppppdVar21 = (double *******)(param_2 + 1);
              cVar5 = *(char *)(param_2 + 1);
              local_40 = pppppppdVar21;
              if (local_78 == '\0') {
                if (local_80 != (double *******)0x0) {
                  FUN_00d50b00();
                }
                *param_2 = (double)pppppppdVar22;
                if ((cVar5 != '\0') && (pppppppdVar16 != (double *******)0x0)) {
                  FUN_00d50b20();
                }
LAB_0133f313:
                *(void*)local_40 = 1;
LAB_0133f31a:
                if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_0133c671;
              }
              *param_2 = (double)local_80;
              if ((cVar5 != '\0') && (pppppppdVar16 != (double *******)0x0)) {
                FUN_00d50b20();
              }
            }
LAB_013441aa:
            *(void*)local_40 = 1;
          }
          goto LAB_0133c671;
        }
        dVar35 = 0.0;
        if (*param_2 != 0.0) {
          pppppppdVar16 = (double *******)&g_02802558;
          pvVar12 = _pthread_getspecific(pVar20);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de560();
          pppppppdVar22 = local_80;
          if (local_80 == local_48) {
            if (((char)local_98 == '\0') && (local_48 != (double *******)0x0)) {
              uVar30 = CONCAT71(uVar31,1);
              if (local_78 != '\0') goto LAB_0133f129;
              uVar30 = CONCAT71(uVar31,1);
              FUN_00d50b00();
            }
            else {
              uVar30 = local_98 & 0xffffffff;
            }
LAB_0133f115:
            if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_78 == '\0') {
              if (local_80 != (double *******)0x0) {
                FUN_00d50b00();
              }
              uVar30 = CONCAT71(uVar31,1);
              if (((char)local_98 == '\0') || (local_48 == (double *******)0x0)) {
                local_48 = pppppppdVar22;
              }
              else {
                local_48 = pppppppdVar22;
                FUN_00d50b20();
              }
              goto LAB_0133f115;
            }
            uVar30 = CONCAT71(uVar31,1);
            if (((char)local_98 == '\0') || (local_48 == (double *******)0x0)) {
              local_48 = local_80;
            }
            else {
              local_48 = local_80;
              FUN_00d50b20();
            }
          }
LAB_0133f129:
          pvVar12 = _pthread_getspecific((void*)pppppppdVar21);
          if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
            pppppppdVar21 = local_48;
          }
          FUN_014d19a0();
          pppppppdVar22 = local_80;
          if (local_80 == local_38) {
            if (((char)local_d0 != '\0') || (local_38 == (double *******)0x0)) {
              uVar28 = local_d0 & 0xffffffff;
LAB_013440ec:
              if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_01344100;
            }
            if (local_78 == '\0') {
              uVar28 = CONCAT71(uVar19,1);
              FUN_00d50b00();
              goto LAB_013440ec;
            }
            uVar28 = CONCAT71(uVar19,1);
LAB_01344107:
            pvVar12 = _pthread_getspecific((void*)pppppppdVar21);
            if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
              pppppppdVar21 = local_38;
            }
            FUN_014d1d00();
            pppppppdVar22 = local_80;
            pppppppdVar16 = (double *******)*arg1;
            if (pppppppdVar16 == local_80) {
              if ((*(char *)(arg1 + 1) != '\0') || (local_80 == (double *******)0x0))
              goto LAB_013441fd;
              local_40 = (double *******)(arg1 + 1);
              if (local_78 == '\0') {
                FUN_00d50b00();
                goto LAB_013441f6;
              }
            }
            else {
              pppppppdVar21 = (double *******)(arg1 + 1);
              cVar5 = *(char *)(arg1 + 1);
              local_40 = pppppppdVar21;
              if (local_78 == '\0') {
                if (local_80 != (double *******)0x0) {
                  FUN_00d50b00();
                }
                *arg1 = (double)pppppppdVar22;
                if ((cVar5 != '\0') && (pppppppdVar16 != (double *******)0x0)) {
                  FUN_00d50b20();
                }
LAB_013441f6:
                *(void*)local_40 = 1;
LAB_013441fd:
                if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_0133c671;
              }
              *arg1 = (double)local_80;
              if ((cVar5 != '\0') && (pppppppdVar16 != (double *******)0x0)) {
                FUN_00d50b20();
              }
            }
            goto LAB_013441aa;
          }
          if (local_78 == '\0') {
            if (local_80 != (double *******)0x0) {
              FUN_00d50b00();
            }
            uVar28 = CONCAT71(uVar19,1);
            if (((char)local_d0 == '\0') || (local_38 == (double *******)0x0)) {
              local_38 = pppppppdVar22;
            }
            else {
              local_38 = pppppppdVar22;
              FUN_00d50b20();
            }
            goto LAB_013440ec;
          }
          uVar28 = CONCAT71(uVar19,1);
          if (((char)local_d0 == '\0') || (local_38 == (double *******)0x0)) {
            local_38 = local_80;
          }
          else {
            local_38 = local_80;
            FUN_00d50b20();
          }
LAB_01344100:
          if (local_38 != (double *******)0x0) goto LAB_01344107;
          local_38 = (double *******)0x0;
          goto LAB_0133c671;
        }
LAB_0133c863:
        if (dVar35 != 0.0) {
          cVar5 = *(char *)(param_2 + 1);
          pppppppdVar16 = (double *******)CONCAT71((int7)((uint64_t)pppppppdVar16 >> 8),cVar5);
          if (cVar5 != '\0') {
            FUN_00d50b00();
          }
          *arg1 = dVar35;
          *(char *)(arg1 + 1) = cVar5;
        }
        pVar20 = (void*)CONCAT71((int7)((uint64_t)pppppppdVar21 >> 8),1);
        local_138 = (double)CONCAT44(local_138._4_4_,pVar20);
        if (*param_2 != 0.0) {
          *param_2 = 0.0;
          if (*(char *)(param_2 + 1) != '\0') {
            FUN_00d50b20();
          }
          *(void*)(param_2 + 1) = 0;
        }
        goto LAB_0133be16;
      }
      pppppppdVar16 = (double *******)&g_02802558;
      pvVar12 = _pthread_getspecific((void*)pppppppdVar21);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      pppppppdVar22 = local_80;
      uVar19 = (undefined7)((uint64_t)param_3 >> 8);
      if (local_80 == local_38) {
        if (((char)local_d0 == '\0') && (local_80 != (double *******)0x0)) {
          param_3 = (double ******)CONCAT71(uVar19,1);
          if (local_78 != '\0') goto LAB_0133c3c5;
          param_3 = (double ******)CONCAT71(uVar19,1);
          FUN_00d50b00();
          pppppppdVar22 = local_38;
        }
        else {
          param_3 = (double ******)(local_d0 & 0xffffffff);
          pppppppdVar22 = local_38;
        }
joined_r0x0133c3b5:
        local_38 = pppppppdVar22;
        if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_78 == '\0') {
          if (local_80 != (double *******)0x0) {
            FUN_00d50b00();
          }
          param_3 = (double ******)CONCAT71(uVar19,1);
          if (((char)local_d0 != '\0') && (local_38 != (double *******)0x0)) {
            local_38 = pppppppdVar22;
            FUN_00d50b20();
            pppppppdVar22 = local_38;
          }
          goto joined_r0x0133c3b5;
        }
        param_3 = (double ******)CONCAT71(uVar19,1);
        if (((char)local_d0 == '\0') || (local_38 == (double *******)0x0)) {
          local_38 = local_80;
        }
        else {
          local_38 = local_80;
          FUN_00d50b20();
        }
      }
LAB_0133c3c5:
      if (local_38 == (double *******)0x0) {
        local_38 = (double *******)0x0;
      }
      else {
        pvVar12 = _pthread_getspecific((void*)pppppppdVar21);
        if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
          pppppppdVar21 = local_38;
        }
        FUN_014bc420();
        pppppppdVar22 = local_80;
        if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
          FUN_00d50b20();
        }
        if (pppppppdVar22 != (double *******)0x0) {
          pvVar12 = _pthread_getspecific((void*)pppppppdVar21);
          if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
            pppppppdVar21 = local_38;
          }
          FUN_014bc420();
          pvVar12 = _pthread_getspecific((void*)pppppppdVar21);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014d1d00();
          pppppppdVar22 = local_80;
          pppppppdVar16 = (double *******)*param_2;
          if (pppppppdVar16 == local_80) {
            if ((*(char *)(param_2 + 1) != '\0') || (local_80 == (double *******)0x0))
            goto LAB_0133c562;
            if (local_78 == '\0') {
              FUN_00d50b00();
              goto LAB_0133c55d;
            }
LAB_0133c50c:
            pdVar27 = param_2 + 1;
            *(void*)pdVar27 = 1;
            local_78 = '\0';
          }
          else {
            cVar5 = *(char *)(param_2 + 1);
            if (local_78 != '\0') {
              *param_2 = (double)local_80;
              if ((cVar5 != '\0') && (pppppppdVar16 != (double *******)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_0133c50c;
            }
            if (local_80 != (double *******)0x0) {
              FUN_00d50b00();
            }
            *param_2 = (double)pppppppdVar22;
            if ((cVar5 != '\0') && (pppppppdVar16 != (double *******)0x0)) {
              FUN_00d50b20();
            }
LAB_0133c55d:
            pdVar27 = param_2 + 1;
            *(void*)pdVar27 = 1;
LAB_0133c562:
            if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((local_b8 != '\0') && (local_c0 != (double *******)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      local_d0 = (uint64_t)param_3 & 0xffffffff;
      if (local_res10 != '\0') goto LAB_0133c5a4;
LAB_0133c65d:
      uVar30 = local_98 & 0xffffffff;
      uVar28 = local_d0 & 0xffffffff;
LAB_0133c671:
      pVar20 = (void*)pppppppdVar21;
      uVar29 = (uint)uVar28;
      if (*arg1 == 0.0) {
        dVar35 = *param_2;
        local_d0 = uVar28 & 0xffffffff;
        local_98 = uVar30 & 0xffffffff;
        goto LAB_0133c863;
      }
      local_138 = (double)((uint64_t)local_138 & 0xffffffff00000000);
    }
    else {
      if (*param_2 == 0.0) goto LAB_0133c2ac;
LAB_0133be0c:
      local_138 = (double)((uint64_t)local_138 & 0xffffffff00000000);
LAB_0133be16:
      uVar30 = local_98 & 0xffffffff;
      uVar29 = (uint)local_d0;
    }
    pvVar12 = _pthread_getspecific(pVar20);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar13 = FUN_013de560();
    pppppppdVar21 = local_80;
    uVar19 = (undefined7)((uint64_t)uVar13 >> 8);
    cVar5 = (char)uVar29;
    if (local_80 == local_38) {
      if ((cVar5 == '\0') && (local_80 != (double *******)0x0)) {
        local_d0 = CONCAT71(uVar19,1);
        if (local_78 != '\0') goto LAB_0133c8f9;
        local_d0 = CONCAT71(uVar19,1);
        FUN_00d50b00();
        pppppppdVar21 = local_38;
      }
      else {
        local_d0 = (uint64_t)uVar29;
        pppppppdVar21 = local_38;
      }
joined_r0x0133c7a4:
      local_38 = pppppppdVar21;
      if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_78 == '\0') {
        if (local_80 != (double *******)0x0) {
          uVar13 = FUN_00d50b00();
        }
        local_d0 = CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
        if ((cVar5 != '\0') && (local_38 != (double *******)0x0)) {
          local_38 = pppppppdVar21;
          FUN_00d50b20();
          pppppppdVar21 = local_38;
        }
        goto joined_r0x0133c7a4;
      }
      local_d0 = CONCAT71(uVar19,1);
      if ((cVar5 == '\0') || (local_38 == (double *******)0x0)) {
        local_38 = local_80;
      }
      else {
        local_38 = local_80;
        FUN_00d50b20();
      }
    }
LAB_0133c8f9:
    local_148 = *param_2;
    pVar9 = (void*)uVar30;
    if (local_148 == 0.0) {
      local_118 = local_118 & 0xffffffff00000000;
      local_50 = (double *******)((uint64_t)local_50 & 0xffffffff00000000);
    }
    else {
      pvVar12 = _pthread_getspecific(pVar20);
      if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
        pVar20 = (void*)local_38;
      }
      uVar7 = FUN_014bc3c0();
      local_50 = (double *******)CONCAT44(local_50._4_4_,uVar7);
      pvVar12 = _pthread_getspecific(pVar20);
      if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
        pVar20 = (void*)local_38;
      }
      uVar13 = FUN_014bc420();
      local_118 = CONCAT44(local_118._4_4_,
                           (int)CONCAT71((int7)((uint64_t)uVar13 >> 8),
                                         local_80 != (double *******)0x0));
      if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
        FUN_00d50b20();
      }
    }
    pvVar12 = _pthread_getspecific(pVar20);
    pppppppdVar21 = local_38;
    if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), pppppppdVar21 = local_38, lVar14 != 0)
       ) {
      pppppppdVar21 = (double *******)local_38[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
    }
    pVar20 = pVar9;
    lVar14 = (*(*pppppppdVar21)[0x70])();
    pvVar12 = _pthread_getspecific(pVar20);
    if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
      pVar20 = (void*)local_38;
    }
    local_158 = (double)FUN_014bb590();
    pvVar12 = _pthread_getspecific(pVar20);
    pppppppdVar21 = local_38;
    if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), pppppppdVar21 = local_38, lVar15 != 0)
       ) {
      pppppppdVar21 = (double *******)local_38[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
    }
    local_300 = (*(*pppppppdVar21)[0x71])();
    pvVar12 = _pthread_getspecific(pVar9);
    pppppppdVar21 = local_38;
    if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), pppppppdVar21 = local_38, lVar15 != 0)
       ) {
      pppppppdVar21 = (double *******)local_38[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
    }
    pppppppdVar22 = (double *******)(uVar30 & 0xffffffff);
    local_13c = (float)(*(*pppppppdVar21)[0x7c])();
    pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
    if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
      pppppppdVar22 = local_38;
    }
    local_160 = (double)FUN_014bb310();
    local_98._0_1_ = (char)uVar30;
    if (*param_2 == 0.0) {
      local_168 = (double)((uint64_t)local_168 & 0xffffffff00000000);
      local_2c8 = 0;
    }
    else {
      pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      pppppppdVar21 = local_80;
      if (local_80 == local_48) {
        pppppppdVar21 = local_48;
        if (((char)local_98 == '\0') && (local_80 != (double *******)0x0)) {
          local_98._0_1_ = '\x01';
          if (local_78 != '\0') goto LAB_0133cd83;
          FUN_00d50b00();
          pppppppdVar21 = local_48;
          local_98._0_1_ = '\x01';
        }
joined_r0x0133cd73:
        local_48 = pppppppdVar21;
        if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_78 == '\0') {
          if (local_80 != (double *******)0x0) {
            FUN_00d50b00();
          }
          bVar32 = (char)local_98 != '\0';
          local_98._0_1_ = '\x01';
          if ((bVar32) && (local_48 != (double *******)0x0)) {
            local_48 = pppppppdVar21;
            FUN_00d50b20();
            pppppppdVar21 = local_48;
            local_98._0_1_ = '\x01';
          }
          goto joined_r0x0133cd73;
        }
        if (((char)local_98 == '\0') || (local_48 == (double *******)0x0)) {
          local_48 = local_80;
          local_98._0_1_ = '\x01';
        }
        else {
          local_48 = local_80;
          FUN_00d50b20();
          local_98._0_1_ = '\x01';
        }
      }
LAB_0133cd83:
      pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
      if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
        pppppppdVar22 = local_48;
      }
      local_158 = (double)FUN_014bb590();
      pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
      pppppppdVar21 = local_48;
      if ((pvVar12 != (void *)0x0) &&
         (lVar15 = FUN_00e8b990(), pppppppdVar21 = local_48, lVar15 != 0)) {
        pppppppdVar22 = local_48;
        pppppppdVar21 = (double *******)local_48[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
      }
      local_2c8 = (*(*pppppppdVar21)[0x71])();
      pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
      pppppppdVar21 = local_48;
      if ((pvVar12 != (void *)0x0) &&
         (lVar15 = FUN_00e8b990(), pppppppdVar21 = local_48, lVar15 != 0)) {
        pppppppdVar22 = local_48;
        pppppppdVar21 = (double *******)local_48[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
      }
      uVar7 = (*(*pppppppdVar21)[0x7c])();
      local_168 = (double)CONCAT44(local_168._4_4_,uVar7);
    }
    if (((this_ptr[0x3f] == (double ******)0x0) && (this_ptr[0x40] == (double ******)0x0)) &&
       (pppppppdVar16 = (double *******)this_ptr[0x29], pppppppdVar16 != (double *******)0x0)) {
      pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
      if (pvVar12 != (void *)0x0) {
        pppppppdVar16 = (double *******)this_ptr[0x29];
        lVar15 = FUN_00e8b990();
        if (lVar15 != 0) {
          pppppppdVar16 =
               (double *******)pppppppdVar16[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
        }
      }
      iVar8 = FUN_0141bab0();
      if (iVar8 != 1) goto LAB_0133ceaa;
      local_3e8 = local_38;
      local_3e0 = 0;
      uVar7 = FUN_013699d0(extraout_XMM0_Da,&local_3e8);
      local_d8 = local_80;
      pppppppdVar22 = local_80;
      if (local_80 == (double *******)0x0) {
        local_d8 = (double *******)0x0;
        local_f8 = (double *******)0x0;
      }
      else {
        local_f8 = (double *******)CONCAT71((int7)((uint64_t)local_80 >> 8),1);
        if (local_78 == '\0') {
          uVar7 = FUN_00d50b00();
        }
      }
      if (local_48 != (double *******)0x0) {
        local_3d8 = local_48;
        local_3d0 = 0;
        uVar7 = FUN_013699d0(uVar7,&local_3d8);
        if (local_b8 == '\0') {
          if (local_c0 != (double *******)0x0) {
            uVar7 = FUN_00d50b00();
          }
        }
        else {
          local_b8 = '\0';
        }
        local_80 = local_c0;
        local_78 = '\0';
        FUN_00d214d0(uVar7,*(void*)((int64_t)local_d8 + 0xc));
        if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
          FUN_00d50b20();
        }
        if (local_c0 != (double *******)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
LAB_0133ceaa:
      local_f8 = (double *******)0x0;
      local_d8 = (double *******)0x0;
    }
    if (local_148 == 0.0) {
      pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_1f8 = 0;
      ppppppdVar18 = this_ptr[0x19];
      if (ppppppdVar18 != (double ******)0x0) {
        FUN_00d50b00();
      }
      dVar35 = local_138;
      local_1f8 = '\x01';
      local_200 = ppppppdVar18;
      FUN_014d3970((uint64_t)local_138 & 0xff,&local_200);
      local_e8 = local_80;
      pppppppdVar21 = local_80;
      if (local_80 == (double *******)0x0) {
        local_100 = (double *******)CONCAT44(local_100._4_4_,1);
        local_e8 = (double *******)0x0;
      }
      else {
        if (local_78 == '\0') {
          FUN_00d50b00();
          local_100 = (double *******)((uint64_t)local_100._4_4_ << 0x20);
          if ((local_78 == '\0') || (local_80 == (double *******)0x0)) goto LAB_0133d1f4;
          FUN_00d50b20();
        }
        else {
          local_78 = '\0';
        }
        local_100 = (double *******)((uint64_t)local_100 & 0xffffffff00000000);
      }
LAB_0133d1f4:
      if ((local_1f8 != '\0') && (local_200 != (double ******)0x0)) {
        FUN_00d50b20();
      }
      pVar20 = (void*)pppppppdVar21;
      if (local_138._0_1_ == '\0') {
        if (local_e8 == (double *******)0x0) {
          ppppppdVar18 = this_ptr[7];
          pvVar12 = _pthread_getspecific(pVar20);
          if (pvVar12 != (void *)0x0) {
            ppppppdVar18 = this_ptr[7];
            lVar15 = FUN_00e8b990();
            if (lVar15 != 0) {
              ppppppdVar18 = (double ******)
                             ppppppdVar18[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
            }
          }
          pppppppdVar21 = (double *******)(*(*ppppppdVar18)[0x6f])();
        }
        else {
          pvVar12 = _pthread_getspecific(pVar20);
          pppppppdVar16 = local_e8;
          if ((pvVar12 != (void *)0x0) &&
             (lVar15 = FUN_00e8b990(), pppppppdVar16 = local_e8, lVar15 != 0)) {
            pppppppdVar21 = local_e8;
            pppppppdVar16 = (double *******)local_e8[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4]
            ;
          }
          pVar20 = (void*)pppppppdVar21;
          pppppppdVar21 = (double *******)(*(*pppppppdVar16)[0x70])();
        }
      }
      else if (local_e8 == (double *******)0x0) {
        pppppppdVar21 = (double *******)0x0;
      }
      else {
        pvVar12 = _pthread_getspecific(pVar20);
        if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pVar20 = (void*)local_e8;
        }
        pppppppdVar21 = (double *******)FUN_014bb590();
      }
      pvVar12 = _pthread_getspecific(pVar20);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_128 = (double *******)FUN_014e7f30(pppppppdVar21,(uint64_t)dVar35 & 0xff);
      pvVar12 = _pthread_getspecific((void*)pppppppdVar21);
      pppppppdVar16 = local_38;
      if ((pvVar12 != (void *)0x0) &&
         (lVar15 = FUN_00e8b990(), pppppppdVar16 = local_38, lVar15 != 0)) {
        pppppppdVar21 = local_38;
        pppppppdVar16 = (double *******)local_38[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
      }
      pVar20 = (void*)pppppppdVar21;
      local_1e8 = 0;
      ppppppdVar18 = this_ptr[0x1d];
      if (ppppppdVar18 != (double ******)0x0) {
        FUN_00d50b00();
      }
      local_1e8 = '\x01';
      local_1f0 = ppppppdVar18;
      FUN_014d5a40();
      pppppppdVar21 = local_80;
      if (local_78 == '\0') {
        if (((local_80 != (double *******)0x0) && (FUN_00d50b00(), local_78 != '\0')) &&
           (local_80 != (double *******)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_78 = '\0';
      }
      if ((local_1e8 != '\0') && (local_1f0 != (double ******)0x0)) {
        FUN_00d50b20();
      }
      ppppppdVar18 = this_ptr[0x34];
      if (ppppppdVar18 == (double ******)0x0) {
        FUN_0132d640();
        ppppppdVar18 = this_ptr[0x34];
      }
      if (ppppppdVar18 != (double ******)0x0) {
        FUN_00d50b00();
      }
      dVar35 = g_0241b6a8 / (double)ppppppdVar18[7];
      FUN_00d50b20();
      pvVar12 = _pthread_getspecific(pVar20);
      if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
        pVar20 = (void*)local_38;
      }
      uVar29 = FUN_014c2f20();
      pppppppdVar23 = (double *******)(uint64_t)uVar29;
      pvVar12 = _pthread_getspecific(pVar20);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar8 = FUN_014c2f80();
      local_40 = (double *******)CONCAT44(local_40._4_4_,iVar8);
      if (0 < *(int *)((int64_t)pppppppdVar21 + 0xc)) {
        iVar24 = (int)(dVar35 + g_023942d0);
        local_f0 = g_025908a0;
        local_e0 = (double *******)CONCAT44(local_e0._4_4_,iVar24 + iVar8);
        pppppppdVar16 = (double *******)0x0;
        do {
          ppppppdVar18 = (double ******)pppppppdVar21[2][(int64_t)pppppppdVar16];
          local_80 = (double *******)ppppppdVar18;
          local_78 = '\0';
          if ((g_027c0170 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
            g_02790158 = FUN_007ef2d0();
            g_02790140 = "MUAudioSourcePrincipalItem";
            g_02790148 = 0x138;
            g_02790150 = FUN_010fe5c0;
            g_02790160 = 0;
            ram_0000000002790168 = 0;
            g_02790170 = 0;
            ram_0000000002790178 = 0;
            g_02790180 = 0;
            ram_0000000002790188 = 0;
            g_02790190 = 0;
            ram_0000000002790198 = 0;
            g_027901a0 = 0;
            ram_00000000027901a8 = 0;
            g_027901b0 = 0;
            ram_00000000027901b8 = 0;
            g_027901c0 = 0;
            ram_00000000027901c8 = 0;
            g_027901d0 = 0;
            ram_00000000027901d8 = 0;
            g_027901e0 = 0;
            ram_00000000027901e8 = 0;
            g_027901f0 = 0;
            ram_00000000027901f8 = 0;
            g_02790200 = 0;
            ___cxa_guard_release();
          }
          pppppppdVar22 = (double *******)&g_02802688;
          if (ppppppdVar18 != (double ******)0x0) {
            (*(*ppppppdVar18)[0x6c])();
            cVar5 = FUN_00e85ea0();
            pppppppdVar22 = (double *******)&local_80;
            if (cVar5 == '\0') {
              pppppppdVar22 = (double *******)&g_02802688;
            }
          }
          ppppppdVar18 = *pppppppdVar22;
          if (*(char *)(pppppppdVar22 + 1) == '\0') {
            if (ppppppdVar18 != (double ******)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            *(void*)(pppppppdVar22 + 1) = 0;
          }
          if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
            FUN_00d50b20();
          }
          if (ppppppdVar18 == (double ******)0x0) {
            FUN_00e828a0();
          }
          local_78 = '\0';
          local_80 = (double *******)ppppppdVar18;
          cVar5 = FUN_00d23d70();
          if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
            FUN_00d50b20();
          }
          if (cVar5 == '\0') {
            FUN_00e828a0();
          }
          pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar8 = FUN_014c2f20();
          if (iVar8 < (int)(uVar29 - iVar24)) {
LAB_0133de54:
            pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            iVar8 = FUN_014c2f20();
            if (iVar8 < (int)uVar29) {
              pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              iVar8 = FUN_014c2f80();
              if ((int)uVar29 <= iVar8) {
                while( true ) {
                  pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
                  if (pvVar12 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  iVar8 = FUN_014c2f80();
                  pppppppdVar22 = (double *******)&g_02802558;
                  if (iVar8 < (int)uVar29) break;
                  pvVar12 = _pthread_getspecific(0x2802558);
                  if (pvVar12 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
                  if (pvVar12 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_014c3620();
                  pppppppdVar25 = local_80;
                  local_180 = 0;
                  if (local_78 == '\0') {
                    if (local_80 != (double *******)0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_78 = '\0';
                  }
                  local_180 = '\x01';
                  local_188 = (double ******)pppppppdVar25;
                  FUN_014c2cf0();
                  if ((local_180 != '\0') && (local_188 != (double ******)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
                    FUN_00d50b20();
                  }
                }
                pvVar12 = _pthread_getspecific(0x2802558);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
                pppppppdVar25 = local_38;
                if ((pvVar12 != (void *)0x0) &&
                   (lVar15 = FUN_00e8b990(), pppppppdVar25 = local_38, lVar15 != 0)) {
                  pppppppdVar22 = local_38;
                  pppppppdVar25 =
                       (double *******)local_38[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
                }
                pVar20 = (void*)pppppppdVar22;
                (*(*pppppppdVar25)[0x70])();
                pvVar12 = _pthread_getspecific(pVar20);
                ppppppdVar26 = ppppppdVar18;
                if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                  ppppppdVar26 = (double ******)
                                 ppppppdVar18[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
                }
                (*(*ppppppdVar26)[0x70])();
                FUN_014bb2b0();
                pvVar12 = _pthread_getspecific(pVar20);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_1d8 = 0;
                FUN_00d50b00();
                local_1d8 = '\x01';
                local_1e0 = this_ptr;
                FUN_014cfcc0();
                if ((local_1d8 != '\0') && (local_1e0 != (double *******)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_0133e5b0;
              }
            }
            pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            iVar8 = FUN_014c2f20();
            if (iVar8 <= (int)local_40._0_4_) {
              pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              iVar8 = FUN_014c2f80();
              if ((int)local_40._0_4_ < iVar8) {
                pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_110 = (double *******)FUN_014bb590();
                while( true ) {
                  pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
                  if (pvVar12 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  iVar8 = FUN_014c2f20();
                  pppppppdVar22 = (double *******)&g_02802558;
                  pVar20 = 0x2802558;
                  if ((int)local_40._0_4_ < iVar8) break;
                  pvVar12 = _pthread_getspecific(0x2802558);
                  if (pvVar12 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
                  if (pvVar12 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_014c35c0();
                  pppppppdVar25 = local_80;
                  local_170 = 0;
                  if (local_78 == '\0') {
                    if (local_80 != (double *******)0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_78 = '\0';
                  }
                  local_170 = '\x01';
                  local_178 = (double ******)pppppppdVar25;
                  FUN_014c2cf0();
                  if ((local_170 != '\0') && (local_178 != (double ******)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
                    FUN_00d50b20();
                  }
                }
                pvVar12 = _pthread_getspecific(0x2802558);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar12 = _pthread_getspecific(pVar20);
                if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                  pVar20 = (void*)local_38;
                }
                FUN_014bb590();
                FUN_014bb250();
                pvVar12 = _pthread_getspecific(pVar20);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar12 = _pthread_getspecific(pVar20);
                ppppppdVar26 = ppppppdVar18;
                if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                  ppppppdVar26 = (double ******)
                                 ppppppdVar18[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
                }
                (*(*ppppppdVar26)[0x70])();
                FUN_014bb2b0();
                pvVar12 = _pthread_getspecific(pVar20);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_1c8 = 0;
                FUN_00d50b00();
                local_1c8 = '\x01';
                local_1d0 = this_ptr;
                FUN_014cfcc0();
                if ((local_1c8 != '\0') && (local_1d0 != (double *******)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
          }
          else {
            pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            iVar8 = FUN_014c2f80();
            if ((int)local_e0 < iVar8) goto LAB_0133de54;
            local_3c0 = 0;
            local_3c8 = ppppppdVar18;
            FUN_013295b0();
          }
LAB_0133e5b0:
          if (ppppppdVar18 != (double ******)0x0) {
            FUN_00d50b20();
          }
          pppppppdVar16 = (double *******)((int64_t)pppppppdVar16 + 1);
        } while ((int64_t)pppppppdVar16 < (int64_t)*(int *)((int64_t)pppppppdVar21 + 0xc));
      }
      if (local_e8 != (double *******)0x0) {
        local_80 = local_e8;
        local_78 = '\0';
        bVar6 = FUN_00d23d70();
        pVar20 = (void*)pppppppdVar21;
        if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
          FUN_00d50b20();
        }
        if ((bVar6 & local_res20) == 1) {
          pvVar12 = _pthread_getspecific(pVar20);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014d26c0();
        }
      }
      local_80 = local_38;
      local_78 = '\0';
      FUN_00d21140();
      if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      bVar6 = (byte)local_100 | local_e8 == (double *******)0x0;
      pppppppdVar22 = (double *******)(uint64_t)CONCAT31((int3)((uint64_t)local_100 >> 8),bVar6);
      if (bVar6 == 0) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_res10 == '\0') {
        pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
        if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pppppppdVar22 = local_48;
        }
        cVar5 = FUN_014bc070();
        if (cVar5 == '\0') {
          pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
          if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pppppppdVar22 = local_38;
          }
          cVar5 = FUN_014bc070();
          if (cVar5 == '\0') goto LAB_0133ec12;
        }
        ppppppdVar18 = this_ptr[7];
        if (ppppppdVar18 == (double ******)0x0) {
          local_40 = (double *******)0x0;
        }
        else {
          pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
          if (pvVar12 != (void *)0x0) {
            ppppppdVar18 = this_ptr[7];
            lVar15 = FUN_00e8b990();
            if (lVar15 != 0) {
              ppppppdVar18 = (double ******)
                             ppppppdVar18[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
            }
          }
          local_40 = (double *******)(*(*ppppppdVar18)[0x6e])();
        }
        pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
        if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pppppppdVar22 = local_48;
        }
        bVar6 = FUN_014bc070();
        dVar35 = (double)local_40 * g_023908d0;
        pppppppdVar21 =
             (double *******)CONCAT71((int7)((uint64_t)pppppppdVar22 >> 8),0 < (int64_t)local_f0);
        if ((bVar6 & 0 < (int64_t)local_f0) == 1) {
          pvVar12 = _pthread_getspecific((void*)pppppppdVar21);
          pppppppdVar21 = local_48;
          if ((pvVar12 != (void *)0x0) &&
             (lVar15 = FUN_00e8b990(), pppppppdVar21 = local_48, lVar15 != 0)) {
            pppppppdVar21 = (double *******)local_48[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4]
            ;
          }
          lVar15 = (*(*pppppppdVar21)[0x71])();
          pppppppdVar16 = (double *******)(lVar15 - (int)dVar35);
          pppppppdVar21 = local_f0;
          if ((int64_t)pppppppdVar16 < (int64_t)local_f0) {
            pppppppdVar21 = pppppppdVar16;
            local_f0 = pppppppdVar16;
          }
        }
        pvVar12 = _pthread_getspecific((void*)pppppppdVar21);
        if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pppppppdVar21 = local_38;
        }
        bVar6 = FUN_014bc070();
        pppppppdVar21 =
             (double *******)CONCAT71((int7)((uint64_t)pppppppdVar21 >> 8),(int64_t)local_f0 < 0);
        if ((bVar6 & (int64_t)local_f0 < 0) == 1) {
          pvVar12 = _pthread_getspecific((void*)pppppppdVar21);
          pppppppdVar21 = local_38;
          if ((pvVar12 != (void *)0x0) &&
             (lVar15 = FUN_00e8b990(), pppppppdVar21 = local_38, lVar15 != 0)) {
            pppppppdVar21 = (double *******)local_38[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4]
            ;
          }
          lVar15 = (*(*pppppppdVar21)[0x71])();
          pppppppdVar21 = (double *******)((int)dVar35 - lVar15);
          if ((int64_t)local_f0 < (int64_t)pppppppdVar21) {
            local_f0 = pppppppdVar21;
          }
        }
        pvVar12 = _pthread_getspecific((void*)pppppppdVar21);
        if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pppppppdVar21 = local_48;
        }
        bVar6 = FUN_014bc070();
        pppppppdVar21 =
             (double *******)CONCAT71((int7)((uint64_t)pppppppdVar21 >> 8),(int64_t)local_f0 < 0);
        if ((bVar6 & (int64_t)local_f0 < 0) == 1) {
          pvVar12 = _pthread_getspecific((void*)pppppppdVar21);
          pppppppdVar21 = local_48;
          if ((pvVar12 != (void *)0x0) &&
             (lVar15 = FUN_00e8b990(), pppppppdVar21 = local_48, lVar15 != 0)) {
            pppppppdVar21 = (double *******)local_48[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4]
            ;
          }
          local_128 = (double *******)(*(*pppppppdVar21)[0x70])();
          ppppppdVar18 = this_ptr[8];
          local_e0 = local_128;
          if (*(int *)((int64_t)ppppppdVar18 + 0xc) < 1) {
            local_a0 = 0.0;
            pppppppdVar16 = (double *******)0x0;
            bVar32 = false;
            pppppppdVar23 = (double *******)0x0;
          }
          else {
            lVar15 = 0;
            pppppppdVar23 = (double *******)0x0;
            bVar32 = false;
            local_a0 = 0.0;
            pppppppdVar21 = (double *******)0x0;
            do {
              uVar28 = (uint64_t)local_a0 & 0xffffffff;
              pppppppdVar16 = (double *******)ppppppdVar18[2][lVar15];
              local_40 = pppppppdVar23;
              if (pppppppdVar23 == pppppppdVar16) {
                pVar20 = local_a0._0_4_;
                if ((!bVar32) && (pppppppdVar23 != (double *******)0x0)) {
                  bVar32 = true;
                  FUN_00d50b00();
                }
              }
              else {
                if (pppppppdVar16 != (double *******)0x0) {
                  FUN_00d50b00();
                }
                if ((bVar32) && (local_40 != (double *******)0x0)) {
                  local_40 = pppppppdVar16;
                  FUN_00d50b20();
                  bVar32 = true;
                  pVar20 = local_a0._0_4_;
                }
                else {
                  bVar32 = true;
                  local_40 = pppppppdVar16;
                  pVar20 = local_a0._0_4_;
                }
              }
              pppppppdVar23 = local_40;
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar13 = FUN_013de560();
              pppppppdVar16 = local_80;
              uVar19 = (undefined7)((uint64_t)uVar13 >> 8);
              cVar5 = (char)uVar28;
              if (local_80 == pppppppdVar21) {
                local_a0 = (double)uVar28;
                pppppppdVar16 = pppppppdVar21;
                if ((cVar5 == '\0') && (local_80 != (double *******)0x0)) {
                  local_a0 = (double)CONCAT71(uVar19,1);
                  if (local_78 != '\0') goto LAB_0133d91e;
                  local_a0 = (double)CONCAT71(uVar19,1);
                  FUN_00d50b00();
                }
joined_r0x0133d8f6:
                if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                if (local_78 == '\0') {
                  if (local_80 != (double *******)0x0) {
                    uVar13 = FUN_00d50b00();
                  }
                  local_a0 = (double)CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
                  if ((cVar5 != '\0') && (pppppppdVar21 != (double *******)0x0)) {
                    FUN_00d50b20();
                  }
                  goto joined_r0x0133d8f6;
                }
                local_a0 = (double)CONCAT71(uVar19,1);
                if ((cVar5 != '\0') && (pppppppdVar21 != (double *******)0x0)) {
                  FUN_00d50b20();
                }
              }
LAB_0133d91e:
              if (pppppppdVar16 != local_38) {
                pvVar12 = _pthread_getspecific(pVar20);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                lVar17 = FUN_014bb590();
                if (lVar17 <= (int64_t)local_e0) {
                  pvVar12 = _pthread_getspecific(pVar20);
                  if (pvVar12 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  lVar17 = FUN_014bb590();
                  if ((int64_t)local_e0 - lVar17 < (int64_t)local_128) {
                    pvVar12 = _pthread_getspecific((void*)((int64_t)local_e0 - lVar17));
                    if (pvVar12 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    lVar17 = FUN_014bb590();
                    local_128 = (double *******)((int64_t)local_e0 - lVar17);
                  }
                }
              }
              lVar15 = lVar15 + 1;
              ppppppdVar18 = this_ptr[8];
              pppppppdVar21 = pppppppdVar16;
            } while (lVar15 < *(int *)((int64_t)ppppppdVar18 + 0xc));
          }
          pppppppdVar21 = (double *******)-(int64_t)local_128;
          if ((int64_t)local_f0 < (int64_t)pppppppdVar21) {
            local_f0 = pppppppdVar21;
          }
        }
        else {
          local_a0 = 0.0;
          pppppppdVar16 = (double *******)0x0;
          bVar32 = false;
          pppppppdVar23 = (double *******)0x0;
        }
        pvVar12 = _pthread_getspecific((void*)pppppppdVar21);
        if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pppppppdVar21 = local_38;
        }
        bVar6 = FUN_014bc070();
        pppppppdVar22 =
             (double *******)CONCAT71((int7)((uint64_t)pppppppdVar21 >> 8),0 < (int64_t)local_f0);
        pVar20 = (void*)pppppppdVar22;
        if ((bVar6 & 0 < (int64_t)local_f0) == 1) {
          pvVar12 = _pthread_getspecific(pVar20);
          if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pVar20 = (void*)local_38;
          }
          local_e0 = (double *******)FUN_014bb590();
          ppppppdVar18 = this_ptr[7];
          pvVar12 = _pthread_getspecific(pVar20);
          if (pvVar12 != (void *)0x0) {
            ppppppdVar18 = this_ptr[7];
            lVar15 = FUN_00e8b990();
            if (lVar15 != 0) {
              ppppppdVar18 = (double ******)
                             ppppppdVar18[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
            }
          }
          lVar15 = (*(*ppppppdVar18)[0x6f])();
          local_128 = (double *******)(lVar15 - (int64_t)local_e0);
          ppppppdVar18 = this_ptr[8];
          local_40 = pppppppdVar23;
          if (0 < *(int *)((int64_t)ppppppdVar18 + 0xc)) {
            lVar15 = 0;
            pppppppdVar21 = pppppppdVar16;
            do {
              uVar28 = (uint64_t)local_a0 & 0xffffffff;
              pppppppdVar16 = (double *******)ppppppdVar18[2][lVar15];
              if (local_40 == pppppppdVar16) {
                pVar20 = local_a0._0_4_;
                if ((!bVar32) && (local_40 != (double *******)0x0)) {
                  bVar32 = true;
                  FUN_00d50b00();
                }
              }
              else {
                if (pppppppdVar16 != (double *******)0x0) {
                  FUN_00d50b00();
                }
                if ((bVar32) && (local_40 != (double *******)0x0)) {
                  local_40 = pppppppdVar16;
                  FUN_00d50b20();
                  bVar32 = true;
                  pVar20 = local_a0._0_4_;
                }
                else {
                  bVar32 = true;
                  local_40 = pppppppdVar16;
                  pVar20 = local_a0._0_4_;
                }
              }
              pvVar12 = _pthread_getspecific(pVar20);
              if ((pvVar12 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
                pVar20 = (void*)local_40;
              }
              uVar13 = FUN_013de560();
              pppppppdVar16 = local_80;
              uVar19 = (undefined7)((uint64_t)uVar13 >> 8);
              cVar5 = (char)uVar28;
              if (local_80 == pppppppdVar21) {
                pppppppdVar16 = pppppppdVar21;
                local_a0 = (double)uVar28;
                if ((cVar5 == '\0') && (local_80 != (double *******)0x0)) {
                  local_a0 = (double)CONCAT71(uVar19,1);
                  if (local_78 != '\0') goto LAB_0133eade;
                  local_a0 = (double)CONCAT71(uVar19,1);
                  FUN_00d50b00();
                }
joined_r0x0133eab6:
                if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                if (local_78 == '\0') {
                  if (local_80 != (double *******)0x0) {
                    uVar13 = FUN_00d50b00();
                  }
                  local_a0 = (double)CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
                  if ((cVar5 != '\0') && (pppppppdVar21 != (double *******)0x0)) {
                    FUN_00d50b20();
                  }
                  goto joined_r0x0133eab6;
                }
                local_a0 = (double)CONCAT71(uVar19,1);
                if ((cVar5 != '\0') && (pppppppdVar21 != (double *******)0x0)) {
                  FUN_00d50b20();
                }
              }
LAB_0133eade:
              if (pppppppdVar16 != local_48) {
                pvVar12 = _pthread_getspecific(pVar20);
                pppppppdVar21 = pppppppdVar16;
                if ((pvVar12 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
                  pppppppdVar21 =
                       (double *******)pppppppdVar16[(uint64_t)(*(uint *)(lVar17 + 0x154) & 1) + 4]
                  ;
                }
                lVar17 = (*(*pppppppdVar21)[0x70])();
                if ((int64_t)local_e0 <= lVar17) {
                  pvVar12 = _pthread_getspecific(pVar20);
                  pppppppdVar21 = pppppppdVar16;
                  if ((pvVar12 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
                    pppppppdVar21 =
                         (double *******)
                         pppppppdVar16[(uint64_t)(*(uint *)(lVar17 + 0x154) & 1) + 4];
                  }
                  lVar17 = (*(*pppppppdVar21)[0x70])();
                  if (lVar17 - (int64_t)local_e0 < (int64_t)local_128) {
                    pvVar12 = _pthread_getspecific(pVar20);
                    pppppppdVar21 = pppppppdVar16;
                    if ((pvVar12 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
                      pppppppdVar21 =
                           (double *******)
                           pppppppdVar16[(uint64_t)(*(uint *)(lVar17 + 0x154) & 1) + 4];
                    }
                    lVar17 = (*(*pppppppdVar21)[0x70])();
                    local_128 = (double *******)(lVar17 - (int64_t)local_e0);
                  }
                }
              }
              lVar15 = lVar15 + 1;
              ppppppdVar18 = this_ptr[8];
              pppppppdVar21 = pppppppdVar16;
            } while (lVar15 < *(int *)((int64_t)ppppppdVar18 + 0xc));
          }
          pppppppdVar22 = local_128;
          pppppppdVar23 = local_40;
          if ((int64_t)local_128 < (int64_t)local_f0) {
            local_f0 = local_128;
          }
        }
        if ((local_a0._0_1_ != '\0') && (pppppppdVar16 != (double *******)0x0)) {
          FUN_00d50b20();
        }
        if ((bVar32) && (pppppppdVar23 != (double *******)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_0133ec12:
      pppppppdVar23 = local_f8;
      pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
      pppppppdVar21 = local_f8;
      if ((pvVar12 != (void *)0x0) &&
         (lVar15 = FUN_00e8b990(), pppppppdVar23 = pppppppdVar21, lVar15 != 0)) {
        pppppppdVar22 = local_38;
      }
      local_2a0 = local_48;
      local_298 = '\0';
      local_128 = (double *******)FUN_014e3650();
      if ((local_298 != '\0') && (local_2a0 != (double *******)0x0)) {
        FUN_00d50b20();
      }
      local_80 = local_38;
      local_78 = '\0';
      FUN_00d21140();
      if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
        FUN_00d50b20();
      }
      local_80 = local_48;
      local_78 = '\0';
      FUN_00d21140();
      if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
        FUN_00d50b20();
      }
    }
    if (local_128 == (double *******)0x0) {
      bVar32 = false;
      local_88 = (void*)0x0;
      local_58 = (double *)0x0;
      pppppppdVar21 = (double *******)0x0;
    }
    else {
      if (local_res18 == '\0') goto LAB_0133f4a9;
      if (*param_2 == 0.0) {
        uVar1 = false;
LAB_0133f502:
        pVar20 = (void*)pppppppdVar22;
        local_190 = CONCAT71((int7)((uint64_t)param_2 >> 8),1);
        if ((local_138._0_1_ != '\0') &&
           (pppppppdVar21 = (double *******)*arg1, pppppppdVar21 != (double *******)0x0)) {
          uVar28 = CONCAT71((int7)((uint64_t)pppppppdVar23 >> 8),*(char *)(arg1 + 1));
          if (*(char *)(arg1 + 1) != '\0') {
            local_130 = 0;
            local_110 = (double *******)0x0;
            local_100 = (double *******)0x0;
            pppppppdVar16 = (double *******)0x0;
            local_150 = 0;
            local_120 = (double *******)0x0;
            FUN_00d50b00();
          }
          goto LAB_0133f56c;
        }
        local_120 = (double *******)0x0;
        local_150 = 0;
        local_130 = 0;
LAB_0133f6e1:
        local_110 = (double *******)0x0;
        local_100 = (double *******)0x0;
        local_e8 = (double *******)0x0;
        dVar35 = *param_2;
joined_r0x0133f70a:
        uVar2 = false;
      }
      else {
        pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfdd0();
        if (local_80 == (double *******)0x0) {
          bVar32 = false;
        }
        else {
          iVar8 = 5;
          pppppppdVar22 = this_ptr;
          if ((this_ptr[0x3f] == (double ******)0x0) &&
             (iVar8 = 6, this_ptr[0x40] == (double ******)0x0)) {
            if (this_ptr[0x29] == (double ******)0x0) {
              iVar8 = 0;
            }
            else {
              pvVar12 = _pthread_getspecific((void*)this_ptr);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              iVar8 = FUN_0141bab0();
            }
          }
          bVar32 = iVar8 != 3;
        }
        if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
          FUN_00d50b20();
        }
        if ((bVar32) && (this_ptr[0x2a] != (double ******)0x0)) {
          pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar8 = FUN_01538fa0();
          pVar20 = (void*)pppppppdVar22;
          if (iVar8 == 0) goto LAB_0133f4a9;
          pvVar12 = _pthread_getspecific(pVar20);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013e5500();
          pppppppdVar21 = local_80;
          if ((((local_78 == '\0') && (local_80 != (double *******)0x0)) &&
              (FUN_00d50b00(), local_78 != '\0')) && (local_80 != (double *******)0x0)) {
            FUN_00d50b20();
          }
          ppppppdVar18 = this_ptr[7];
          local_40 = pppppppdVar21;
          if (ppppppdVar18 == (double ******)0x0) {
            dVar35 = 0.0;
          }
          else {
            pvVar12 = _pthread_getspecific(pVar20);
            if (pvVar12 != (void *)0x0) {
              ppppppdVar18 = this_ptr[7];
              lVar15 = FUN_00e8b990();
              if (lVar15 != 0) {
                ppppppdVar18 = (double ******)
                               ppppppdVar18[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
              }
            }
            dVar35 = (double)(*(*ppppppdVar18)[0x6e])();
          }
          pVar9 = FUN_00e7d850(SUB84(dVar35 * g_0240f0f8,0));
          ppppppdVar18 = this_ptr[7];
          if (ppppppdVar18 == (double ******)0x0) {
            dVar35 = 0.0;
          }
          else {
            pvVar12 = _pthread_getspecific(pVar20);
            if (pvVar12 != (void *)0x0) {
              ppppppdVar18 = this_ptr[7];
              lVar15 = FUN_00e8b990();
              if (lVar15 != 0) {
                ppppppdVar18 = (double ******)
                               ppppppdVar18[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
              }
            }
            dVar35 = (double)(*(*ppppppdVar18)[0x6e])();
          }
          iVar8 = FUN_00e7d850(SUB84(dVar35 * g_0240f100,0));
          pvVar12 = _pthread_getspecific(pVar20);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de560();
          pppppppdVar21 = local_80;
          pvVar12 = _pthread_getspecific(pVar20);
          pppppppdVar16 = local_80;
          if ((pvVar12 != (void *)0x0) &&
             (lVar15 = FUN_00e8b990(), pppppppdVar21 = pppppppdVar16, lVar15 != 0)) {
            pppppppdVar21 =
                 (double *******)pppppppdVar16[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
          }
          (*(*pppppppdVar21)[0x70])();
          if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
            FUN_00d50b20();
          }
          pvVar12 = _pthread_getspecific(pVar20);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de560();
          pppppppdVar21 = local_80;
          pvVar12 = _pthread_getspecific(pVar20);
          pppppppdVar16 = local_80;
          if ((pvVar12 != (void *)0x0) &&
             (lVar15 = FUN_00e8b990(), pppppppdVar21 = pppppppdVar16, lVar15 != 0)) {
            pppppppdVar21 =
                 (double *******)pppppppdVar16[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
          }
          pppppppdVar21 = (double *******)(*(*pppppppdVar21)[0x71])();
          if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
            FUN_00d50b20();
          }
          pppppppdVar23 = local_40;
          pppppppdVar16 = (double *******)(int64_t)iVar8;
          if ((int64_t)pppppppdVar21 < (int64_t)iVar8) {
            pppppppdVar16 = pppppppdVar21;
          }
          pvVar12 = _pthread_getspecific(pVar9);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          pppppppdVar22 = pppppppdVar16;
          FUN_014bad20();
          uVar1 = true;
          if (pppppppdVar23 != (double *******)0x0) {
            FUN_00d50b20();
          }
        }
        else {
LAB_0133f4a9:
          uVar1 = false;
        }
        pVar20 = (void*)pppppppdVar22;
        pppppppdVar21 = (double *******)*param_2;
        if (pppppppdVar21 == (double *******)0x0) goto LAB_0133f502;
        uVar28 = CONCAT71((int7)((uint64_t)pppppppdVar23 >> 8),*(char *)(param_2 + 1));
        if (*(char *)(param_2 + 1) != '\0') {
          local_130 = 0;
          local_110 = (double *******)0x0;
          local_100 = (double *******)0x0;
          pppppppdVar16 = (double *******)0x0;
          local_150 = 0;
          local_120 = (double *******)0x0;
          FUN_00d50b00();
        }
LAB_0133f56c:
        local_150 = uVar28 & 0xffffffff;
        local_120 = pppppppdVar21;
        pvVar12 = _pthread_getspecific(pVar20);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfdd0();
        local_110 = local_80;
        pppppppdVar22 = local_80;
        if (local_80 == (double *******)0x0) {
          local_130 = 0;
          local_110 = (double *******)0x0;
joined_r0x0133f623:
          if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
            FUN_00d50b20();
          }
          if (local_110 == (double *******)0x0) {
            local_190 = 0;
            goto LAB_0133f6e1;
          }
        }
        else {
          if (local_78 == '\0') {
            uVar13 = FUN_00d50b00();
            local_130 = CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
            goto joined_r0x0133f623;
          }
          local_130 = CONCAT71((int7)((uint64_t)local_80 >> 8),1);
        }
        pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dd6a0();
        local_100 = local_80;
        pppppppdVar22 = local_80;
        if (local_80 == (double *******)0x0) {
          local_100 = (double *******)0x0;
          pppppppdVar16 = (double *******)0x0;
joined_r0x0133f6d4:
          if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          uVar19 = (undefined7)((uint64_t)pppppppdVar16 >> 8);
          if (local_78 == '\0') {
            FUN_00d50b00();
            pppppppdVar16 = (double *******)CONCAT71(uVar19,1);
            goto joined_r0x0133f6d4;
          }
          pppppppdVar16 = (double *******)CONCAT71(uVar19,1);
        }
        pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
        pppppppdVar21 = local_100;
        if ((pvVar12 != (void *)0x0) &&
           (lVar15 = FUN_00e8b990(), pppppppdVar21 = local_100, lVar15 != 0)) {
          pppppppdVar22 = local_100;
          pppppppdVar21 = (double *******)local_100[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
        }
        lVar15 = (*(*pppppppdVar21)[0x70])();
        pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
        if ((pvVar12 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
          pppppppdVar22 = local_120;
        }
        lVar17 = FUN_013de650();
        if (lVar17 <= lVar15) {
          pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
          if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pppppppdVar22 = local_100;
          }
          local_40 = (double *******)FUN_014bacf0();
          pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
          if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pppppppdVar22 = local_120;
          }
          dVar35 = (double)FUN_013de8d0();
          if ((double)local_40 - dVar35 <= g_023934c8) {
            local_190 = 0;
            dVar35 = *param_2;
            local_e8 = pppppppdVar16;
            goto joined_r0x0133f70a;
          }
        }
        local_3b8 = local_120;
        local_3b0 = 0;
        FUN_0133aef0();
        uVar2 = true;
        local_190 = 0;
        dVar35 = *param_2;
        local_e8 = pppppppdVar16;
      }
      pppppppdVar21 = local_e8;
      if ((dVar35 != 0.0) && (*arg1 != 0.0)) {
        pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar13 = FUN_013dfdd0();
        pppppppdVar21 = local_80;
        uVar19 = (undefined7)((uint64_t)pppppppdVar16 >> 8);
        if (local_80 == local_110) {
          if (((char)local_130 == '\0') && (local_80 != (double *******)0x0)) {
            if (local_78 != '\0') {
              uVar19 = (undefined7)((uint64_t)uVar13 >> 8);
              goto joined_r0x0133f9c0;
            }
            pppppppdVar16 = (double *******)CONCAT71(uVar19,1);
            FUN_00d50b00();
          }
          else {
            pppppppdVar16 = (double *******)(local_130 & 0xffffffff);
          }
LAB_0133fa31:
          if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
            FUN_00d50b20();
          }
          if (local_110 == (double *******)0x0) {
            local_110 = (double *******)0x0;
            local_130 = (uint64_t)pppppppdVar16 & 0xffffffff;
            pppppppdVar21 = local_e8;
            goto joined_r0x0133fb3f;
          }
          local_130 = (uint64_t)pppppppdVar16 & 0xffffffff;
        }
        else {
          if (local_78 == '\0') {
            if (local_80 != (double *******)0x0) {
              FUN_00d50b00();
            }
            pppppppdVar16 = (double *******)CONCAT71(uVar19,1);
            if (((char)local_130 == '\0') || (local_110 == (double *******)0x0)) {
              local_110 = pppppppdVar21;
            }
            else {
              local_110 = pppppppdVar21;
              FUN_00d50b20();
            }
            goto LAB_0133fa31;
          }
          if (((char)local_130 != '\0') && (local_110 != (double *******)0x0)) {
            local_110 = local_80;
            uVar13 = FUN_00d50b20();
          }
          uVar19 = (undefined7)((uint64_t)uVar13 >> 8);
          local_110 = pppppppdVar21;
joined_r0x0133f9c0:
          local_130 = CONCAT71(uVar19,1);
          if (local_110 == (double *******)0x0) {
            local_110 = (double *******)0x0;
            pppppppdVar21 = local_e8;
            goto joined_r0x0133fb3f;
          }
        }
        pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
        if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pppppppdVar22 = local_110;
        }
        FUN_013dd6a0();
        pppppppdVar21 = local_80;
        uVar19 = (undefined7)((uint64_t)pppppppdVar16 >> 8);
        if (local_80 == local_100) {
          pppppppdVar16 = local_e8;
          if (((char)local_e8 == '\0') && (local_80 != (double *******)0x0)) {
            pppppppdVar16 = (double *******)CONCAT71(uVar19,1);
            if (local_78 != '\0') goto LAB_0133fd4c;
            FUN_00d50b00();
            pppppppdVar16 = (double *******)CONCAT71(uVar19,1);
          }
LAB_0133fd38:
          if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_78 == '\0') {
            if (local_80 != (double *******)0x0) {
              FUN_00d50b00();
            }
            pppppppdVar16 = (double *******)CONCAT71(uVar19,1);
            if (((char)local_e8 == '\0') || (local_100 == (double *******)0x0)) {
              local_100 = pppppppdVar21;
            }
            else {
              local_100 = pppppppdVar21;
              FUN_00d50b20();
            }
            goto LAB_0133fd38;
          }
          pppppppdVar16 = (double *******)CONCAT71(uVar19,1);
          if (((char)local_e8 == '\0') || (local_100 == (double *******)0x0)) {
            local_100 = local_80;
          }
          else {
            local_100 = local_80;
            FUN_00d50b20();
          }
        }
LAB_0133fd4c:
        pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_40 = (double *******)FUN_013de8d0();
        pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
        if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pppppppdVar22 = local_100;
        }
        dVar35 = (double)FUN_014bb4b0();
        pppppppdVar21 = pppppppdVar16;
        if ((double)local_40 < dVar35) {
          local_3a8 = *arg1;
          local_3a0 = 0;
          uVar2 = true;
          FUN_0133aef0();
        }
      }
joined_r0x0133fb3f:
      local_e8 = pppppppdVar21;
      if (local_res20 != 0) {
        bVar32 = (bool)uVar2;
        if (*arg1 != 0.0) {
          pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013dfdd0();
          pppppppdVar21 = local_80;
          if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
            FUN_00d50b20();
          }
          if (pppppppdVar21 == (double *******)0x0) {
            if (local_res10 != '\0') {
              local_398 = *arg1;
              local_390 = 0;
              pppppppdVar22 = (double *******)0x0;
              FUN_0135d2e0(0,&local_398);
              pppppppdVar21 = local_220;
              if (local_218 == '\0') {
                if (local_220 != (double *******)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_218 = '\0';
              }
              local_c0 = (double *******)*arg1;
              local_80 = pppppppdVar21;
              local_78 = '\0';
              local_b8 = '\0';
              uVar29 = FUN_01346520();
              pppppppdVar16 = (double *******)(uint64_t)uVar29;
              if (pppppppdVar21 != (double *******)0x0) {
                FUN_00d50b20();
              }
              bVar32 = true;
              if ((char)uVar29 != '\0') goto LAB_0133fbb8;
            }
            pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013de560();
            pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_014bcf30();
            bVar32 = (bool)uVar2;
            if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
              FUN_00d50b20();
            }
          }
        }
LAB_0133fbb8:
        uVar2 = bVar32;
        if (*param_2 != 0.0) {
          pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013dfdd0();
          pppppppdVar21 = local_80;
          if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
            FUN_00d50b20();
          }
          if (pppppppdVar21 == (double *******)0x0) {
            if (local_res10 != '\0') {
              local_388 = *param_2;
              local_380 = 0;
              pppppppdVar22 = (double *******)0x0;
              FUN_0135d2e0(0,&local_388);
              if (local_218 == '\0') {
                if (local_220 != (double *******)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_218 = '\0';
              }
              local_c0 = (double *******)*param_2;
              local_80 = local_220;
              local_78 = '\0';
              local_b8 = '\0';
              uVar29 = FUN_01346520();
              pppppppdVar16 = (double *******)(uint64_t)uVar29;
              if (local_220 != (double *******)0x0) {
                FUN_00d50b20();
              }
              uVar2 = true;
              if ((char)uVar29 != '\0') goto LAB_0133fe23;
            }
            pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013de560();
            pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_014bcf30();
            uVar2 = bVar32;
            if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
              FUN_00d50b20();
            }
          }
        }
      }
LAB_0133fe23:
      if (*arg1 != 0.0) {
        pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfef0();
        pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        pppppppdVar16 = local_e8;
        FUN_013e0cc0();
      }
      if (*param_2 != 0.0) {
        pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfef0();
        pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        pppppppdVar16 = local_e8;
        FUN_013e0cc0();
        if ((bool)uVar1) {
          pppppppdVar16 = (double *******)*param_2;
          pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
          if (pvVar12 != (void *)0x0) {
            pppppppdVar16 = (double *******)*param_2;
            lVar15 = FUN_00e8b990();
            if (lVar15 != 0) {
              pppppppdVar16 =
                   (double *******)pppppppdVar16[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
            }
          }
          local_1b8 = 0;
          ppppppdVar18 = this_ptr[0x2a];
          if (ppppppdVar18 != (double ******)0x0) {
            FUN_00d50b00();
          }
          local_1b8 = '\x01';
          local_1c0 = ppppppdVar18;
          FUN_013e1570();
          if ((local_1b8 != '\0') && (local_1c0 != (double ******)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      pdVar27 = local_58;
      if (local_148 == 0.0) {
        bVar6 = 0;
        bVar32 = false;
joined_r0x013400c8:
        if ((bool)uVar2) goto LAB_013403a1;
LAB_01340391:
        if (((bVar6 & bVar32 & (byte)local_118) == 0) || (local_res10 == '\0')) goto LAB_013403a1;
      }
      else {
        cVar5 = (byte)local_118;
        if ((char)local_50 == '\0') {
          pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
          if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pppppppdVar22 = local_48;
          }
          local_290 = local_38;
          local_288 = '\0';
          cVar5 = FUN_014d36f0();
          if ((local_288 != '\0') && (local_290 != (double *******)0x0)) {
            FUN_00d50b20();
          }
        }
        if (((this_ptr[0x3f] == (double ******)0x0) && (this_ptr[0x40] == (double ******)0x0)) &&
           (pppppppdVar16 = (double *******)this_ptr[0x29], pppppppdVar16 != (double *******)0x0))
        {
          pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
          if (pvVar12 != (void *)0x0) {
            pppppppdVar16 = (double *******)this_ptr[0x29];
            lVar15 = FUN_00e8b990();
            if (lVar15 != 0) {
              pppppppdVar16 =
                   (double *******)pppppppdVar16[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
            }
          }
          iVar8 = FUN_0141bab0();
          if (iVar8 == 2) {
            cVar5 = (byte)local_118;
          }
        }
        if ((local_res10 == '\0') || (cVar5 != '\0')) {
          pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
          if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pppppppdVar22 = local_38;
          }
          local_280 = local_48;
          local_278 = '\0';
          FUN_014bc360();
          if ((local_278 != '\0') && (local_280 != (double *******)0x0)) {
            FUN_00d50b20();
          }
          pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
          if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pppppppdVar22 = local_48;
          }
          local_270 = local_38;
          local_268 = '\0';
          FUN_014bc2e0();
          bVar6 = 1;
          if ((local_268 != '\0') && (local_270 != (double *******)0x0)) {
            FUN_00d50b20();
          }
          bVar32 = local_148 != 0.0;
          goto joined_r0x013400c8;
        }
        pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
        if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pppppppdVar22 = local_38;
        }
        local_258 = '\0';
        local_260 = 0;
        FUN_014bc360();
        if ((local_258 != '\0') && (local_260 != 0)) {
          FUN_00d50b20();
        }
        pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
        if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pppppppdVar22 = local_48;
        }
        local_248 = '\0';
        local_250 = 0;
        FUN_014bc2e0();
        if ((local_248 != '\0') && (local_250 != 0)) {
          FUN_00d50b20();
        }
        bVar6 = 0;
        bVar32 = local_148 != 0.0;
        if (!(bool)uVar2) goto LAB_01340391;
LAB_013403a1:
        *(char *)pdVar27 = local_res10;
      }
      cVar5 = FUN_01334f30();
      if (cVar5 != '\0') {
        *(void*)pdVar27 = 1;
      }
      pvVar12 = _pthread_getspecific((void*)pppppppdVar22);
      pppppppdVar21 = local_38;
      if ((pvVar12 != (void *)0x0) &&
         (lVar15 = FUN_00e8b990(), pppppppdVar21 = local_38, lVar15 != 0)) {
        pppppppdVar22 = local_38;
        pppppppdVar21 = (double *******)local_38[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
      }
      lVar15 = (*(*pppppppdVar21)[0x70])();
      pVar20 = (void*)pppppppdVar22;
      if (lVar15 < lVar14) {
        pvVar12 = _pthread_getspecific(pVar20);
        pppppppdVar21 = local_38;
        if ((pvVar12 != (void *)0x0) &&
           (lVar14 = FUN_00e8b990(), pppppppdVar21 = local_38, lVar14 != 0)) {
          pppppppdVar22 = local_38;
          pppppppdVar21 = (double *******)local_38[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
        }
        pVar20 = (void*)pppppppdVar22;
        (*(*pppppppdVar21)[0x70])();
      }
      pvVar12 = _pthread_getspecific(pVar20);
      if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
        pVar20 = (void*)local_38;
      }
      lVar14 = FUN_014bb590();
      if ((int64_t)local_158 < lVar14) {
        pvVar12 = _pthread_getspecific(pVar20);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bb590();
      }
      pppppdVar11 = (double *****)FUN_00e7b4e0();
      *local_210 = pppppdVar11;
      ppppppdVar18 = local_210;
      if (this_ptr[0x3f] == (double ******)0x0) {
        if ((this_ptr[0x40] == (double ******)0x0) &&
           (pppppppdVar16 = (double *******)this_ptr[0x29], pppppppdVar16 != (double *******)0x0))
        {
          pvVar12 = _pthread_getspecific((void*)local_210);
          if (pvVar12 != (void *)0x0) {
            pppppppdVar16 = (double *******)this_ptr[0x29];
            lVar14 = FUN_00e8b990();
            if (lVar14 != 0) {
              pppppppdVar16 =
                   (double *******)pppppppdVar16[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
            }
          }
          iVar8 = FUN_0141bab0();
          if (iVar8 == 3) {
            local_378 = local_108;
            local_370 = 0;
            FUN_0135d660();
          }
        }
        if (((this_ptr[0x3f] != (double ******)0x0) || (this_ptr[0x40] != (double ******)0x0)) ||
           (this_ptr[0x29] == (double ******)0x0)) goto LAB_01340524;
        pvVar12 = _pthread_getspecific((void*)ppppppdVar18);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar8 = FUN_0141bab0();
        if (iVar8 != 1) goto LAB_01340524;
        if (0 < *(int *)((int64_t)local_d8 + 0xc)) {
          lVar14 = 0;
          do {
            pppppdVar11 = local_d8[2][lVar14];
            if (pppppdVar11 != (double *****)0x0) {
              FUN_00d50b00();
            }
            local_360 = 1;
            local_368 = pppppdVar11;
            FUN_013295b0();
            if (pppppdVar11 != (double *****)0x0) {
              FUN_00d50b20();
            }
            lVar14 = lVar14 + 1;
          } while (lVar14 < *(int *)((int64_t)local_d8 + 0xc));
        }
        pvVar12 = _pthread_getspecific((void*)local_d8);
        pppppppdVar21 = local_38;
        if ((pvVar12 != (void *)0x0) &&
           (lVar14 = FUN_00e8b990(), pppppppdVar21 = local_38, lVar14 != 0)) {
          pppppppdVar21 = (double *******)local_38[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
        }
        local_1a8 = 0;
        if (this_ptr != (double *******)0x0) {
          FUN_00d50b00();
        }
        local_1a8 = '\x01';
        local_1b0 = this_ptr;
        FUN_014e8b20();
        local_50 = local_80;
        pppppppdVar22 = local_80;
        if (local_80 == (double *******)0x0) {
          pppppppdVar16 = (double *******)CONCAT71((int7)((uint64_t)pppppppdVar21 >> 8),1);
          local_50 = (double *******)0x0;
          local_58 = (double *)0x0;
        }
        else {
          if (local_78 == '\0') {
            uVar13 = FUN_00d50b00();
            pppppppdVar16 = (double *******)0x0;
            local_58 = (double *)CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
            if ((local_78 == '\0') || (local_80 == (double *******)0x0)) goto LAB_0134424d;
            pppppppdVar21 = (double *******)FUN_00d50b20();
          }
          else {
            local_78 = '\0';
            pppppppdVar21 = local_80;
          }
          pppppppdVar16 = (double *******)0x0;
          local_58 = (double *)CONCAT71((int7)((uint64_t)pppppppdVar21 >> 8),1);
        }
LAB_0134424d:
        if ((local_1a8 != '\0') && (local_1b0 != (double *******)0x0)) {
          FUN_00d50b20();
        }
        if ((byte)pppppppdVar16 == 0) {
          local_358 = local_50;
          local_350 = 0;
          FUN_013293f0();
        }
        pVar20 = (void*)pppppppdVar22;
        if (local_48 != (double *******)0x0) {
          pvVar12 = _pthread_getspecific(pVar20);
          if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
            pppppppdVar22 = local_48;
          }
          pVar20 = (void*)pppppppdVar22;
          local_198 = 0;
          if (this_ptr != (double *******)0x0) {
            FUN_00d50b00();
          }
          local_198 = '\x01';
          local_1a0 = this_ptr;
          FUN_014e8b20();
          pppppppdVar21 = local_80;
          uVar19 = (undefined7)((uint64_t)pppppppdVar16 >> 8);
          if (local_80 == local_50) {
            bVar6 = (byte)pppppppdVar16 & local_80 != (double *******)0x0;
            pppppppdVar16 = (double *******)CONCAT71(uVar19,bVar6);
            if (bVar6 == 1) {
              if (local_78 != '\0') goto LAB_01344369;
              pppppppdVar16 = (double *******)CONCAT71(uVar19,1);
              FUN_00d50b00();
            }
            else {
              pppppppdVar16 = (double *******)((uint64_t)local_58 & 0xffffffff);
            }
LAB_013444f7:
            if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_78 == '\0') {
              if (local_80 != (double *******)0x0) {
                FUN_00d50b00();
              }
              bVar6 = (byte)local_58 & local_50 != (double *******)0x0;
              pVar20 = (void*)CONCAT71((int7)((uint64_t)local_58 >> 8),bVar6);
              pppppppdVar16 = (double *******)CONCAT71(uVar19,1);
              if (bVar6 == 1) {
                local_50 = pppppppdVar21;
                FUN_00d50b20();
              }
              else {
                local_50 = pppppppdVar21;
              }
              goto LAB_013444f7;
            }
            bVar6 = (byte)local_58 & local_50 != (double *******)0x0;
            pVar20 = (void*)CONCAT71((int7)((uint64_t)local_58 >> 8),bVar6);
            local_50 = pppppppdVar21;
            if (bVar6 == 1) {
              local_50 = local_80;
              FUN_00d50b20();
              local_50 = pppppppdVar21;
            }
LAB_01344369:
            local_78 = '\0';
            pppppppdVar16 = (double *******)CONCAT71((int7)((uint64_t)pppppppdVar16 >> 8),1);
          }
          if ((local_198 != '\0') && (local_1a0 != (double *******)0x0)) {
            FUN_00d50b20();
          }
          if (local_50 != (double *******)0x0) {
            local_348 = local_50;
            local_340 = 0;
            FUN_013293f0();
            local_58 = (double *)((uint64_t)pppppppdVar16 & 0xffffffff);
            goto LAB_01340530;
          }
          local_58 = (double *)((uint64_t)pppppppdVar16 & 0xffffffff);
          goto LAB_01340526;
        }
      }
      else {
LAB_01340524:
        pVar20 = (void*)ppppppdVar18;
        local_58 = (double *)0x0;
LAB_01340526:
        local_50 = (double *******)0x0;
      }
LAB_01340530:
      local_88 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_88 = local_308;
      (*local_208)();
      if (local_148 == 0.0) {
        pvVar12 = _pthread_getspecific(pVar20);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfcb0();
        pvVar12 = _pthread_getspecific(pVar20);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dd790();
        local_e0 = local_80;
        if (local_80 == (double *******)0x0) {
          local_118 = 0;
          local_e0 = (double *******)0x0;
        }
        else if (local_78 == '\0') {
          uVar13 = FUN_00d50b00();
          local_118 = CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
          if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_78 = '\0';
          local_118 = CONCAT71((int7)((uint64_t)local_80 >> 8),1);
        }
        if ((local_b8 != '\0') && (local_c0 != (double *******)0x0)) {
          FUN_00d50b20();
        }
        uVar29 = *(uint *)((int64_t)local_e0 + 0xc);
        if (0 < (int)uVar29) {
          dVar35 = (double)(int64_t)local_128;
          lVar14 = (uint64_t)uVar29 + 1;
          pppppppdVar21 = (double *******)0x0;
          bVar32 = false;
          do {
            uVar29 = uVar29 - 1;
            pVar20 = uVar29;
            pvVar12 = _pthread_getspecific(uVar29);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef8d0();
            pppppppdVar22 = local_80;
            if (local_80 == pppppppdVar21) {
              pppppppdVar22 = pppppppdVar21;
              bVar3 = bVar32;
              if ((bVar32) || (local_80 == (double *******)0x0)) goto joined_r0x01341686;
              bVar3 = true;
              if (local_78 == '\0') {
                FUN_00d50b00();
                goto LAB_0134166b;
              }
            }
            else if (local_78 == '\0') {
              if (local_80 != (double *******)0x0) {
                FUN_00d50b00();
              }
              bVar3 = true;
              if ((bVar32) && (pppppppdVar21 != (double *******)0x0)) {
                FUN_00d50b20();
                pppppppdVar21 = pppppppdVar22;
LAB_0134166b:
                pppppppdVar22 = pppppppdVar21;
                bVar3 = true;
              }
joined_r0x01341686:
              if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              bVar3 = true;
              if ((bVar32) && (pppppppdVar21 != (double *******)0x0)) {
                FUN_00d50b20();
              }
            }
            if (local_138._0_1_ == '\0') {
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_40 = (double *******)FUN_01259520();
              ppppppdVar18 = this_ptr[7];
              if (ppppppdVar18 == (double ******)0x0) {
                local_b0 = 0.0;
              }
              else {
                pvVar12 = _pthread_getspecific(pVar20);
                if (pvVar12 != (void *)0x0) {
                  ppppppdVar18 = this_ptr[7];
                  lVar15 = FUN_00e8b990();
                  if (lVar15 != 0) {
                    ppppppdVar18 = (double ******)
                                   ppppppdVar18[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
                  }
                }
                local_b0 = (double)(*(*ppppppdVar18)[0x6e])();
              }
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_f0 = (double *******)FUN_01264170();
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar36 = (double)FUN_0125a280();
              FUN_01259540(SUB84(((double)local_40 +
                                 ((dVar35 / local_b0) * (double)local_f0) / local_160) - dVar36,0));
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01266fe0();
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012e5ae0();
              pppppppdVar21 = local_80;
              if (local_78 == '\0') {
                if (local_80 != (double *******)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_78 = '\0';
              }
              local_2d0 = 1;
              local_2d8 = pppppppdVar21;
              local_310 = 0;
              local_318 = pppppppdVar22;
              FUN_0132a0a0();
              if (pppppppdVar21 != (double *******)0x0) {
                FUN_00d50b20();
              }
              if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
                FUN_00d50b20();
              }
              if ((local_b8 != '\0') && (local_c0 != (double *******)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_40 = (double *******)FUN_0125a280();
              ppppppdVar18 = this_ptr[7];
              if (ppppppdVar18 == (double ******)0x0) {
                local_b0 = 0.0;
              }
              else {
                pvVar12 = _pthread_getspecific(pVar20);
                if (pvVar12 != (void *)0x0) {
                  ppppppdVar18 = this_ptr[7];
                  lVar15 = FUN_00e8b990();
                  if (lVar15 != 0) {
                    ppppppdVar18 = (double ******)
                                   ppppppdVar18[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
                  }
                }
                local_b0 = (double)(*(*ppppppdVar18)[0x6e])();
              }
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_f0 = (double *******)FUN_01264170();
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_168 = (double)FUN_01264170();
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar36 = (double)FUN_0125a280();
              local_40 = (double *******)
                         ((double)local_40 + ((dVar35 / local_b0) * (double)local_f0) / local_160);
              FUN_01259540(SUB84((local_168 + dVar36) - (double)local_40,0));
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012642b0((int)local_40);
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01266fe0();
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012e5ae0();
              pppppppdVar21 = local_80;
              if (local_78 == '\0') {
                if (local_80 != (double *******)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_78 = '\0';
              }
              local_2e0 = 1;
              local_2e8 = pppppppdVar21;
              local_320 = 0;
              local_328 = pppppppdVar22;
              FUN_0132a0a0();
              if (pppppppdVar21 != (double *******)0x0) {
                FUN_00d50b20();
              }
              if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
                FUN_00d50b20();
              }
              if ((local_b8 != '\0') && (local_c0 != (double *******)0x0)) {
                FUN_00d50b20();
              }
            }
            if (NAN(local_13c)) {
LAB_01341f2a:
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_013de3b0();
              FUN_012595a0();
            }
            else {
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar33 = (float)FUN_0125a2c0();
              if (NAN(fVar33)) goto LAB_01341f2a;
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar33 = (float)FUN_013de3b0();
              if (NAN(fVar33)) goto LAB_01341f2a;
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar7 = FUN_0125a2c0();
              local_40 = (double *******)CONCAT44(local_40._4_4_,uVar7);
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar33 = (float)FUN_013de3b0();
              FUN_012595a0((local_40._0_4_ - local_13c) + fVar33);
            }
            local_78 = '\0';
            local_80 = pppppppdVar22;
            FUN_00d21140();
            if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
              FUN_00d50b20();
            }
            lVar14 = lVar14 + -1;
            pppppppdVar21 = pppppppdVar22;
            bVar32 = bVar3;
          } while (1 < lVar14);
          local_40 = (double *******)0x0;
          local_f0 = (double *******)0x0;
          goto LAB_013432fd;
        }
        local_f0 = (double *******)0x0;
        local_40 = (double *******)0x0;
        bVar3 = false;
        pppppppdVar22 = (double *******)0x0;
LAB_01343308:
        local_78 = '\0';
        local_80 = (double *******)0x0;
        local_68 = 0xffffffff;
        local_60 = 0;
        local_68._4_4_ = 0;
        local_70 = local_88;
        while( true ) {
          if (local_68._4_4_ != 0) {
            if (local_68._4_4_ < 1) {
              iVar8 = -local_68._4_4_;
            }
            else {
              iVar8 = (int)local_68 - local_68._4_4_;
              local_68 = CONCAT44(local_68._4_4_,iVar8);
              FUN_00d23690();
              local_60 = local_60 + local_68._4_4_;
              iVar8 = 0;
            }
            local_68 = CONCAT44(iVar8,(int)local_68);
          }
          lVar14 = (int64_t)(int)local_68;
          iVar8 = (int)local_68 + 1;
          local_68 = CONCAT44(local_68._4_4_,iVar8);
          if (*(int *)((int64_t)local_70 + 0xc) <= iVar8) break;
          lVar15 = local_70[2];
          local_80 = *(double ********)(lVar15 + 8 + lVar14 * 8);
          pvVar12 = _pthread_getspecific((void*)lVar15);
          pVar20 = (void*)lVar15;
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e7c0();
          if ((local_b8 == '\0') && (local_c0 != (double *******)0x0)) {
            FUN_00d50b00();
          }
          pvVar12 = _pthread_getspecific(pVar20);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0126f610();
          pvVar12 = _pthread_getspecific(pVar20);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar35 = (double)FUN_01264310();
          pvVar12 = _pthread_getspecific(pVar20);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar36 = (double)FUN_01264170();
          if (dVar36 < dVar35) {
LAB_013435d0:
            pvVar12 = _pthread_getspecific(pVar20);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar12 = _pthread_getspecific(pVar20);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013de9b0();
            FUN_01259540();
            pvVar12 = _pthread_getspecific(pVar20);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar12 = _pthread_getspecific(pVar20);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013defa0();
            FUN_01264390();
            pvVar12 = _pthread_getspecific(pVar20);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012708c0();
            if ((local_b8 != '\0') && (local_c0 != (double *******)0x0)) {
              FUN_00d50b20();
            }
            if (local_c0 != (double *******)0x0) {
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012708c0();
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012dffb0();
              if ((local_b8 != '\0') && (local_c0 != (double *******)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            pvVar12 = _pthread_getspecific(pVar20);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar35 = (double)FUN_01264380();
            if (dVar35 <= 0.0) goto LAB_013435d0;
            pvVar12 = _pthread_getspecific(pVar20);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar35 = (double)FUN_01264380();
            pvVar12 = _pthread_getspecific(pVar20);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar36 = (double)FUN_01264310();
            if (dVar35 <= dVar36) goto LAB_013435d0;
          }
          pvVar12 = _pthread_getspecific(pVar20);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125a5f0();
          pvVar12 = _pthread_getspecific(pVar20);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012682a0();
          if (local_c0 != (double *******)0x0) {
            FUN_00d50b20();
          }
        }
        FUN_001159b0();
      }
      else {
        pvVar12 = _pthread_getspecific(pVar20);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfcb0();
        pvVar12 = _pthread_getspecific(pVar20);
        pppppppdVar21 = local_c0;
        if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
          pppppppdVar21 = (double *******)local_c0[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
        }
        FUN_013dd790();
        local_e0 = local_80;
        if (local_80 == (double *******)0x0) {
          uVar7 = (uint32_t)CONCAT71((int7)((uint64_t)pppppppdVar21 >> 8),1);
          local_118 = 0;
          local_e0 = (double *******)0x0;
        }
        else {
          if (local_78 == '\0') {
            uVar13 = FUN_00d50b00();
            uVar7 = 0;
            local_118 = CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
            if ((local_78 == '\0') || (local_80 == (double *******)0x0)) goto LAB_01340749;
            pppppppdVar21 = (double *******)FUN_00d50b20();
          }
          else {
            local_78 = '\0';
            pppppppdVar21 = local_80;
          }
          local_118 = CONCAT71((int7)((uint64_t)pppppppdVar21 >> 8),1);
          uVar7 = 0;
        }
LAB_01340749:
        if ((local_b8 != '\0') && (local_c0 != (double *******)0x0)) {
          FUN_00d50b20();
        }
        uVar29 = *(uint *)((int64_t)local_e0 + 0xc);
        local_160 = (double)(int64_t)local_128;
        pppppppdVar21 = (double *******)((int64_t)local_128 + local_300);
        local_158 = (double)(int64_t)pppppppdVar21;
        local_208 = CONCAT44(local_208._4_4_,uVar7);
        if ((int)uVar29 < 1) {
          pppppppdVar22 = (double *******)0x0;
          bVar3 = false;
          local_40 = (double *******)0x0;
          local_f0 = (double *******)0x0;
        }
        else {
          local_210 = (double ******)(double)local_300;
          pppppppdVar16 = (double *******)((uint64_t)uVar29 + 1);
          pppppppdVar21 = (double *******)(uint64_t)(uVar29 - 1);
          local_f0 = (double *******)0x0;
          local_40 = (double *******)0x0;
          bVar3 = false;
          pppppppdVar23 = (double *******)0x0;
          do {
            pppppppdVar25 = (double *******)((uint64_t)local_f0 & 0xffffffff);
            local_138 = (double)CONCAT44(local_138._4_4_,(void*)pppppppdVar21);
            pvVar12 = _pthread_getspecific((void*)pppppppdVar21);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef8d0();
            pppppppdVar22 = local_80;
            if (local_80 == pppppppdVar23) {
              pppppppdVar22 = pppppppdVar23;
              bVar32 = bVar3;
              if ((bVar3) || (local_80 == (double *******)0x0)) goto joined_r0x01340906;
              bVar32 = true;
              if (local_78 == '\0') {
                FUN_00d50b00();
                goto LAB_013408eb;
              }
            }
            else if (local_78 == '\0') {
              if (local_80 != (double *******)0x0) {
                FUN_00d50b00();
              }
              bVar32 = true;
              if ((bVar3) && (pppppppdVar23 != (double *******)0x0)) {
                FUN_00d50b20();
                pppppppdVar23 = pppppppdVar22;
LAB_013408eb:
                pppppppdVar22 = pppppppdVar23;
                bVar32 = true;
              }
joined_r0x01340906:
              if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              bVar32 = true;
              if ((bVar3) && (pppppppdVar23 != (double *******)0x0)) {
                FUN_00d50b20();
              }
            }
            bVar3 = bVar32;
            pvVar12 = _pthread_getspecific((void*)pppppppdVar21);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar13 = FUN_01268dd0();
            pppppppdVar23 = local_80;
            uVar19 = (undefined7)((uint64_t)uVar13 >> 8);
            cVar5 = (char)pppppppdVar25;
            if (local_80 == local_40) {
              local_f0 = pppppppdVar25;
              pppppppdVar23 = local_40;
              if ((cVar5 == '\0') && (local_80 != (double *******)0x0)) {
                local_f0 = (double *******)CONCAT71(uVar19,1);
                if (local_78 != '\0') goto LAB_01340a6e;
                local_f0 = (double *******)CONCAT71(uVar19,1);
                FUN_00d50b00();
                pppppppdVar23 = local_40;
              }
joined_r0x01340a39:
              local_40 = pppppppdVar23;
              if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              if (local_78 == '\0') {
                if (local_80 != (double *******)0x0) {
                  uVar13 = FUN_00d50b00();
                }
                local_f0 = (double *******)CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
                if ((cVar5 != '\0') && (local_40 != (double *******)0x0)) {
                  FUN_00d50b20();
                }
                goto joined_r0x01340a39;
              }
              local_f0 = (double *******)CONCAT71(uVar19,1);
              if ((cVar5 == '\0') || (local_40 == (double *******)0x0)) {
                local_40 = local_80;
              }
              else {
                FUN_00d50b20();
                local_40 = pppppppdVar23;
              }
            }
LAB_01340a6e:
            pVar20 = (void*)pppppppdVar21;
            if ((int64_t)local_128 < 0) {
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01264180();
              pvVar12 = _pthread_getspecific(pVar20);
              pppppppdVar21 = local_c0;
              if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                pppppppdVar21 =
                     (double *******)local_c0[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
              }
              (*(*pppppppdVar21)[0x6f])();
              pppppppdVar21 = local_80;
              pvVar12 = _pthread_getspecific(pVar20);
              pppppppdVar23 = local_80;
              if ((pvVar12 != (void *)0x0) &&
                 (lVar14 = FUN_00e8b990(), pppppppdVar21 = pppppppdVar23, lVar14 != 0)) {
                pppppppdVar21 =
                     (double *******)pppppppdVar23[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
              }
              ppppppdVar18 = this_ptr[7];
              if (ppppppdVar18 == (double ******)0x0) {
                dVar35 = 0.0;
              }
              else {
                pvVar12 = _pthread_getspecific(pVar20);
                if (pvVar12 != (void *)0x0) {
                  ppppppdVar18 = this_ptr[7];
                  lVar14 = FUN_00e8b990();
                  if (lVar14 != 0) {
                    ppppppdVar18 = (double ******)
                                   ppppppdVar18[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
                  }
                }
                dVar35 = (double)(*(*ppppppdVar18)[0x6e])();
              }
              local_a0 = (double)(*(*pppppppdVar21)[0x70])(SUB84(local_158 / dVar35,0));
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_148 = (double)FUN_0125a280();
              if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
                FUN_00d50b20();
              }
              if ((local_b8 != '\0') && (local_c0 != (double *******)0x0)) {
                FUN_00d50b20();
              }
LAB_01340f5e:
              local_a0 = local_a0 + local_148;
            }
            else {
              if (local_40 != (double *******)0x0) {
                pvVar12 = _pthread_getspecific(pVar20);
                if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                  pVar20 = (void*)local_40;
                }
                FUN_01264180();
                pvVar12 = _pthread_getspecific(pVar20);
                pppppppdVar21 = local_c0;
                if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                  pppppppdVar21 =
                       (double *******)local_c0[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
                }
                (*(*pppppppdVar21)[0x6f])();
                pppppppdVar21 = local_80;
                pvVar12 = _pthread_getspecific(pVar20);
                pppppppdVar23 = local_80;
                if ((pvVar12 != (void *)0x0) &&
                   (lVar14 = FUN_00e8b990(), pppppppdVar21 = pppppppdVar23, lVar14 != 0)) {
                  pppppppdVar21 =
                       (double *******)pppppppdVar23[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4]
                  ;
                }
                ppppppdVar18 = this_ptr[7];
                if (ppppppdVar18 == (double ******)0x0) {
                  dVar35 = 0.0;
                }
                else {
                  pvVar12 = _pthread_getspecific(pVar20);
                  if (pvVar12 != (void *)0x0) {
                    ppppppdVar18 = this_ptr[7];
                    lVar14 = FUN_00e8b990();
                    if (lVar14 != 0) {
                      ppppppdVar18 = (double ******)
                                     ppppppdVar18[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
                    }
                  }
                  dVar35 = (double)(*(*ppppppdVar18)[0x6e])();
                }
                local_a0 = (double)(*(*pppppppdVar21)[0x70])(SUB84(local_160 / dVar35,0));
                pvVar12 = _pthread_getspecific(pVar20);
                if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                  pVar20 = (void*)local_40;
                }
                local_148 = (double)FUN_0125a280();
                if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_b8 != '\0') && (local_c0 != (double *******)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_01340f5e;
              }
              pvVar12 = _pthread_getspecific(pVar20);
              pppppppdVar23 = local_38;
              if ((pvVar12 != (void *)0x0) &&
                 (lVar14 = FUN_00e8b990(), pppppppdVar23 = local_38, lVar14 != 0)) {
                pppppppdVar21 = local_38;
                pppppppdVar23 =
                     (double *******)local_38[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
              }
              pVar20 = (void*)pppppppdVar21;
              lVar14 = (*(*pppppppdVar23)[0x71])();
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar35 = (double)FUN_01264170();
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_a0 = (double)FUN_0125a280();
              local_a0 = ((double)lVar14 / (double)local_210) * dVar35 + local_a0;
            }
            pvVar12 = _pthread_getspecific(pVar20);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar12 = _pthread_getspecific(pVar20);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar35 = (double)FUN_0125a280();
            FUN_01259540(SUB84(local_a0 - dVar35,0));
            if (NAN(local_13c)) {
LAB_01341224:
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_013de3b0();
              FUN_012595a0();
            }
            else {
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar33 = (float)FUN_0125a2c0();
              if (NAN(fVar33)) goto LAB_01341224;
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar33 = (float)FUN_013de3b0();
              if (NAN(fVar33)) goto LAB_01341224;
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar33 = (float)FUN_0125a2c0();
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar34 = (float)FUN_013de3b0();
              FUN_012595a0((fVar33 - local_13c) + fVar34);
            }
            local_78 = '\0';
            local_80 = pppppppdVar22;
            FUN_00d21140();
            if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
              FUN_00d50b20();
            }
            pppppppdVar16 = (double *******)((int64_t)pppppppdVar16 + -1);
            pppppppdVar21 = (double *******)(uint64_t)(local_138._0_4_ - 1);
            pppppppdVar23 = pppppppdVar22;
          } while (1 < (int64_t)pppppppdVar16);
        }
        fVar33 = SUB84(pppppppdVar21,0);
        pvVar12 = _pthread_getspecific((void*)fVar33);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfcb0();
        pvVar12 = _pthread_getspecific((void*)fVar33);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dd790();
        pppppppdVar21 = local_80;
        uVar31 = (undefined7)((uint64_t)pppppppdVar16 >> 8);
        uVar19 = extraout_var;
        if (local_80 == local_e0) {
          bVar6 = (byte)local_208 & local_80 != (double *******)0x0;
          fVar33 = (float)CONCAT31((int3)((uint64_t)local_208 >> 8),bVar6);
          if (bVar6 == 1) {
            if (local_78 != '\0') goto LAB_013413d7;
            pppppppdVar16 = (double *******)CONCAT71(uVar31,1);
            FUN_00d50b00();
          }
          else {
            pppppppdVar16 = (double *******)(local_118 & 0xffffffff);
          }
LAB_013420d8:
          if ((local_78 == '\0') || (local_80 == (double *******)0x0)) {
            local_118 = (uint64_t)pppppppdVar16 & 0xffffffff;
          }
          else {
            FUN_00d50b20();
            local_118 = (uint64_t)pppppppdVar16 & 0xffffffff;
          }
        }
        else {
          if (local_78 == '\0') {
            if (local_80 != (double *******)0x0) {
              FUN_00d50b00();
            }
            pppppppdVar16 = (double *******)CONCAT71(uVar31,1);
            if ((byte)local_118 == '\0') {
              local_e0 = pppppppdVar21;
            }
            else {
              local_e0 = pppppppdVar21;
              FUN_00d50b20();
            }
            goto LAB_013420d8;
          }
          local_e0 = pppppppdVar21;
          if ((byte)local_118 != '\0') {
            local_e0 = local_80;
            FUN_00d50b20();
            local_e0 = pppppppdVar21;
            uVar19 = extraout_var_00;
          }
LAB_013413d7:
          local_78 = '\0';
          local_118 = CONCAT71(uVar19,1);
        }
        if ((local_b8 != '\0') && (local_c0 != (double *******)0x0)) {
          FUN_00d50b20();
        }
        uVar29 = *(uint *)((int64_t)local_e0 + 0xc);
        if (0 < (int)uVar29) {
          local_148 = (double)local_2c8;
          pppppppdVar16 = (double *******)((uint64_t)uVar29 + 1);
          fVar33 = (float)(uVar29 - 1);
          pppppppdVar21 = pppppppdVar22;
          do {
            pppppppdVar23 = (double *******)(uint64_t)(uint)fVar33;
            pppppppdVar22 = (double *******)((uint64_t)local_f0 & 0xffffffff);
            local_13c = fVar33;
            pvVar12 = _pthread_getspecific((void*)fVar33);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar13 = FUN_011ef8d0();
            pppppppdVar25 = local_80;
            uVar19 = (undefined7)((uint64_t)uVar13 >> 8);
            cVar5 = (char)pppppppdVar22;
            if (local_80 == local_40) {
              local_f0 = pppppppdVar22;
              pppppppdVar25 = local_40;
              if ((cVar5 == '\0') && (local_80 != (double *******)0x0)) {
                local_f0 = (double *******)CONCAT71(uVar19,1);
                if (local_78 != '\0') goto LAB_013422ce;
                local_f0 = (double *******)CONCAT71(uVar19,1);
                FUN_00d50b00();
                pppppppdVar25 = local_40;
              }
joined_r0x01342299:
              local_40 = pppppppdVar25;
              if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              if (local_78 == '\0') {
                if (local_80 != (double *******)0x0) {
                  uVar13 = FUN_00d50b00();
                }
                local_f0 = (double *******)CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
                if ((cVar5 != '\0') && (local_40 != (double *******)0x0)) {
                  FUN_00d50b20();
                }
                goto joined_r0x01342299;
              }
              local_f0 = (double *******)CONCAT71(uVar19,1);
              if ((cVar5 == '\0') || (local_40 == (double *******)0x0)) {
                local_40 = local_80;
              }
              else {
                FUN_00d50b20();
                local_40 = pppppppdVar25;
              }
            }
LAB_013422ce:
            pvVar12 = _pthread_getspecific((void*)pppppppdVar23);
            if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
              pppppppdVar23 = local_40;
            }
            FUN_01268710();
            pppppppdVar22 = local_80;
            if (local_80 == pppppppdVar21) {
              pppppppdVar22 = pppppppdVar21;
              bVar32 = bVar3;
              if ((bVar3) || (local_80 == (double *******)0x0)) goto joined_r0x013423c6;
              bVar32 = true;
              if (local_78 == '\0') {
                FUN_00d50b00();
                goto LAB_013423ab;
              }
            }
            else if (local_78 == '\0') {
              if (local_80 != (double *******)0x0) {
                FUN_00d50b00();
              }
              bVar32 = true;
              if ((bVar3) && (pppppppdVar21 != (double *******)0x0)) {
                FUN_00d50b20();
                pppppppdVar21 = pppppppdVar22;
LAB_013423ab:
                pppppppdVar22 = pppppppdVar21;
                bVar32 = true;
              }
joined_r0x013423c6:
              if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              bVar32 = true;
              if ((bVar3) && (pppppppdVar21 != (double *******)0x0)) {
                FUN_00d50b20();
              }
            }
            bVar3 = bVar32;
            pVar20 = (void*)pppppppdVar23;
            if ((int64_t)local_128 < 1) {
              if (pppppppdVar22 != (double *******)0x0) {
                pvVar12 = _pthread_getspecific(pVar20);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01264180();
                pvVar12 = _pthread_getspecific(pVar20);
                pppppppdVar21 = local_c0;
                if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                  pppppppdVar21 =
                       (double *******)local_c0[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
                }
                (*(*pppppppdVar21)[0x6f])();
                pppppppdVar21 = local_80;
                pvVar12 = _pthread_getspecific(pVar20);
                pppppppdVar23 = local_80;
                if ((pvVar12 != (void *)0x0) &&
                   (lVar14 = FUN_00e8b990(), pppppppdVar21 = pppppppdVar23, lVar14 != 0)) {
                  pppppppdVar21 =
                       (double *******)pppppppdVar23[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4]
                  ;
                }
                ppppppdVar18 = this_ptr[7];
                if (ppppppdVar18 == (double ******)0x0) {
                  dVar35 = 0.0;
                }
                else {
                  pvVar12 = _pthread_getspecific(pVar20);
                  if (pvVar12 != (void *)0x0) {
                    ppppppdVar18 = this_ptr[7];
                    lVar14 = FUN_00e8b990();
                    if (lVar14 != 0) {
                      ppppppdVar18 = (double ******)
                                     ppppppdVar18[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
                    }
                  }
                  dVar35 = (double)(*(*ppppppdVar18)[0x6e])();
                }
                local_a0 = (double)(*(*pppppppdVar21)[0x70])(SUB84(local_158 / dVar35,0));
                pvVar12 = _pthread_getspecific(pVar20);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_138 = (double)FUN_0125a280();
                if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_b8 != '\0') && (local_c0 != (double *******)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_01342800;
              }
              pvVar12 = _pthread_getspecific(pVar20);
              if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                pppppppdVar23 = local_40;
              }
              local_a0 = (double)FUN_01259520();
              pvVar12 = _pthread_getspecific((void*)pppppppdVar23);
              pppppppdVar21 = local_48;
              if ((pvVar12 != (void *)0x0) &&
                 (lVar14 = FUN_00e8b990(), pppppppdVar21 = local_48, lVar14 != 0)) {
                pppppppdVar23 = local_48;
                pppppppdVar21 =
                     (double *******)local_48[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
              }
              pVar20 = (void*)pppppppdVar23;
              lVar14 = (*(*pppppppdVar21)[0x71])();
              pvVar12 = _pthread_getspecific(pVar20);
              if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                pVar20 = (void*)local_40;
              }
              dVar35 = (double)FUN_01264170();
              local_a0 = local_a0 - ((double)lVar14 / local_148) * dVar35;
            }
            else {
              pvVar12 = _pthread_getspecific(pVar20);
              if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                pVar20 = (void*)local_40;
              }
              FUN_01264180();
              pvVar12 = _pthread_getspecific(pVar20);
              pppppppdVar21 = local_c0;
              if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                pppppppdVar21 =
                     (double *******)local_c0[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
              }
              (*(*pppppppdVar21)[0x6f])();
              pppppppdVar21 = local_80;
              pvVar12 = _pthread_getspecific(pVar20);
              pppppppdVar23 = local_80;
              if ((pvVar12 != (void *)0x0) &&
                 (lVar14 = FUN_00e8b990(), pppppppdVar21 = pppppppdVar23, lVar14 != 0)) {
                pppppppdVar21 =
                     (double *******)pppppppdVar23[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
              }
              ppppppdVar18 = this_ptr[7];
              if (ppppppdVar18 == (double ******)0x0) {
                dVar35 = 0.0;
              }
              else {
                pvVar12 = _pthread_getspecific(pVar20);
                if (pvVar12 != (void *)0x0) {
                  ppppppdVar18 = this_ptr[7];
                  lVar14 = FUN_00e8b990();
                  if (lVar14 != 0) {
                    ppppppdVar18 = (double ******)
                                   ppppppdVar18[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
                  }
                }
                dVar35 = (double)(*(*ppppppdVar18)[0x6e])();
              }
              local_a0 = (double)(*(*pppppppdVar21)[0x70])(SUB84(local_160 / dVar35,0));
              pvVar12 = _pthread_getspecific(pVar20);
              if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                pVar20 = (void*)local_40;
              }
              local_138 = (double)FUN_0125a280();
              if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
                FUN_00d50b20();
              }
              if ((local_b8 != '\0') && (local_c0 != (double *******)0x0)) {
                FUN_00d50b20();
              }
LAB_01342800:
              local_a0 = local_a0 + local_138;
            }
            pvVar12 = _pthread_getspecific(pVar20);
            if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
              pVar20 = (void*)local_40;
            }
            local_138 = (double)FUN_01259520();
            pvVar12 = _pthread_getspecific(pVar20);
            if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
              pVar20 = (void*)local_40;
            }
            FUN_012642b0(SUB84(local_a0,0));
            pvVar12 = _pthread_getspecific(pVar20);
            if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
              pVar20 = (void*)local_40;
            }
            FUN_01259540(SUB84(local_138 - local_a0,0));
            if (NAN((float)local_168)) {
LAB_01342bf1:
              pvVar12 = _pthread_getspecific(pVar20);
              if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                pVar20 = (void*)local_40;
              }
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_013de3b0();
              FUN_012595a0();
            }
            else {
              pvVar12 = _pthread_getspecific(pVar20);
              if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                pVar20 = (void*)local_40;
              }
              fVar33 = (float)FUN_0125a2c0();
              if (NAN(fVar33)) goto LAB_01342bf1;
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar33 = (float)FUN_013de3b0();
              if (NAN(fVar33)) goto LAB_01342bf1;
              pvVar12 = _pthread_getspecific(pVar20);
              if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                pVar20 = (void*)local_40;
              }
              pvVar12 = _pthread_getspecific(pVar20);
              if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                pVar20 = (void*)local_40;
              }
              fVar33 = (float)FUN_0125a2c0();
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar34 = (float)FUN_013de3b0();
              FUN_012595a0((fVar33 - (float)local_168) + fVar34);
            }
            local_80 = local_40;
            local_78 = '\0';
            FUN_00d21140();
            if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
              FUN_00d50b20();
            }
            pppppppdVar16 = (double *******)((int64_t)pppppppdVar16 + -1);
            fVar33 = (float)((int)local_13c - 1);
            pppppppdVar21 = pppppppdVar22;
          } while (1 < (int64_t)pppppppdVar16);
        }
        pvVar12 = _pthread_getspecific((void*)fVar33);
        if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
          fVar33 = SUB84(local_38,0);
        }
        FUN_014bc420();
        if (local_80 == (double *******)0x0) {
          bVar32 = false;
        }
        else {
          pvVar12 = _pthread_getspecific((void*)fVar33);
          if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
            fVar33 = SUB84(local_38,0);
          }
          FUN_014bc420();
          bVar32 = local_c0 == local_48;
          if ((local_b8 != '\0') && (local_c0 != (double *******)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
          FUN_00d50b20();
        }
        pvVar12 = _pthread_getspecific((void*)fVar33);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfcb0();
        pvVar12 = _pthread_getspecific((void*)fVar33);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar13 = FUN_013dd790();
        pppppppdVar21 = local_80;
        uVar19 = (undefined7)((uint64_t)pppppppdVar16 >> 8);
        if (local_80 == local_e0) {
          if (((byte)local_118 == '\0') && (local_80 != (double *******)0x0)) {
            pppppppdVar21 = local_e0;
            if (local_78 != '\0') goto LAB_01342e73;
            uVar28 = CONCAT71(uVar19,1);
            FUN_00d50b00();
          }
          else {
            uVar28 = local_118 & 0xffffffff;
          }
LAB_01342f0c:
          if ((local_78 == '\0') || (local_80 == (double *******)0x0)) {
            local_118 = uVar28 & 0xffffffff;
          }
          else {
            FUN_00d50b20();
            local_118 = uVar28 & 0xffffffff;
          }
        }
        else {
          if (local_78 == '\0') {
            if (local_80 != (double *******)0x0) {
              FUN_00d50b00();
            }
            uVar28 = CONCAT71(uVar19,1);
            if (((byte)local_118 == '\0') || (local_e0 == (double *******)0x0)) {
              local_e0 = pppppppdVar21;
            }
            else {
              local_e0 = pppppppdVar21;
              FUN_00d50b20();
            }
            goto LAB_01342f0c;
          }
          if (((byte)local_118 != '\0') && (local_e0 != (double *******)0x0)) {
            local_e0 = local_80;
            uVar13 = FUN_00d50b20();
          }
LAB_01342e73:
          local_78 = '\0';
          local_118 = CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
          local_e0 = pppppppdVar21;
        }
        if ((local_b8 != '\0') && (local_c0 != (double *******)0x0)) {
          FUN_00d50b20();
        }
        uVar29 = *(uint *)((int64_t)local_e0 + 0xc);
        if (0 < (int)uVar29) {
          lVar14 = (uint64_t)uVar29 + 1;
          pppppppdVar21 = pppppppdVar22;
          do {
            uVar29 = uVar29 - 1;
            pVar20 = uVar29;
            pvVar12 = _pthread_getspecific(uVar29);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef8d0();
            pppppppdVar22 = local_80;
            if (local_80 == pppppppdVar21) {
              pppppppdVar22 = pppppppdVar21;
              bVar4 = bVar3;
              if ((bVar3) || (local_80 == (double *******)0x0)) goto joined_r0x01343086;
              bVar4 = true;
              if (local_78 == '\0') {
                FUN_00d50b00();
                goto LAB_0134306b;
              }
            }
            else if (local_78 == '\0') {
              if (local_80 != (double *******)0x0) {
                FUN_00d50b00();
              }
              bVar4 = true;
              if ((bVar3) && (pppppppdVar21 != (double *******)0x0)) {
                FUN_00d50b20();
                pppppppdVar21 = pppppppdVar22;
LAB_0134306b:
                pppppppdVar22 = pppppppdVar21;
                bVar4 = true;
              }
joined_r0x01343086:
              if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              bVar4 = true;
              if ((bVar3) && (pppppppdVar21 != (double *******)0x0)) {
                FUN_00d50b20();
              }
            }
            bVar3 = bVar4;
            if (bVar32) {
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01266fe0();
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012e5ae0();
              pppppppdVar21 = local_80;
              if (local_78 == '\0') {
                if (local_80 != (double *******)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_78 = '\0';
              }
              local_2f0 = 1;
              local_2f8 = pppppppdVar21;
              local_330 = 0;
              local_338 = pppppppdVar22;
              FUN_0132a0a0();
              if (pppppppdVar21 != (double *******)0x0) {
                FUN_00d50b20();
              }
              if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
                FUN_00d50b20();
              }
              if ((local_b8 != '\0') && (local_c0 != (double *******)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012708c0();
              pppppppdVar21 = local_80;
              if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
                FUN_00d50b20();
              }
              if (pppppppdVar21 != (double *******)0x0) {
                pvVar12 = _pthread_getspecific(pVar20);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012708c0();
                pvVar12 = _pthread_getspecific(pVar20);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012dffb0();
                if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            lVar14 = lVar14 + -1;
            pppppppdVar21 = pppppppdVar22;
          } while (1 < lVar14);
        }
LAB_013432fd:
        if (local_88 != (void*)0x0) goto LAB_01343308;
      }
      if ((param_5 != '\0') && (*(int *)((int64_t)local_88 + 0xc) != 0)) {
        local_238 = '\0';
        local_240 = local_88;
        FUN_00e7bdb0();
        FUN_01287c80();
        if ((local_238 != '\0') && (local_240 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_228 = '\0';
        local_230 = local_88;
        FUN_012879b0();
        if ((local_228 != '\0') && (local_230 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      if (((char)local_f0 != '\0') && (local_40 != (double *******)0x0)) {
        FUN_00d50b20();
      }
      if ((bVar3) && (pppppppdVar22 != (double *******)0x0)) {
        FUN_00d50b20();
      }
      if (((byte)local_118 != '\0') && (local_e0 != (double *******)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_e8 != '\0') && (local_100 != (double *******)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_130 != '\0') && (local_110 != (double *******)0x0)) {
        FUN_00d50b20();
      }
      bVar32 = true;
      pppppppdVar21 = local_50;
      if ((char)local_150 != '\0' && (char)local_190 == '\0') {
        FUN_00d50b20();
        pppppppdVar21 = local_50;
      }
    }
    if (local_108 == (void*)0x0) goto LAB_013439d2;
  }
  FUN_00d50b20();
LAB_013439d2:
  if ((bVar32) && (local_88 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_f8 != '\0') && (local_d8 != (double *******)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (pppppppdVar21 != (double *******)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_98 != '\0') && (local_48 != (double *******)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_d0 != '\0') && (local_38 != (double *******)0x0)) {
    FUN_00d50b20();
  }
  return (int64_t)local_128;
}



// ============================================================
// 0134d090
// ============================================================
// Function: FUN_0134d090
// Address: 0134d090
// Size: 7901 bytes
// Class: MUAudioSourceDescription
// === MUAudioSourceDescription properties ===
//   MUAudioSourceDescriptionType _currentDescriptionType
//   bool            _isNewDocument
//   bool            _isDetectionInProgress
//   bool            _insertGroupDefinesPerformanceTempo
//   bool            _stretchInsertGroup
//   double          _stretchInsertStartTime
//   bool            _createdFromSoundfile
//   bool            _timelineWasModified
//   GNInt           _recordingsInProgress
//   bool            _isComparing
//   bool            _followsHostRegionSelection
//   bool            _zoomsToHostRegionSelection
//   GNInt           _shouldDisplayStructureProblemDialog
//   bool            _shouldDisplayUnknownArchiveDialog
//   bool            _shouldDisplayImportedArchiveDialog
//   bool            _useAutomaticDetection
//   bool            _percussiveSeparation
//   bool            _hasDistinctAttacks
//   bool            _findSibilantPointsAutomatically
//   bool            _isPreliminary
//   bool            _isTonalicOnly
//   bool            _allowAutomaticPolyphonicDetection
//   SInt64          _startSampleIndex
//   SInt64          _sampleCount
//   SInt64          _signalEndSampleOffset
//   SInt64          _signalStartSampleOffset
//   float           _pitchCenter
//   float           _energyClaimFactor
//   float           _detectionQuality
//   GNFraction      _idealStartPulse
//   ... +8 more


void FUN_0134d090(double param_1,double param_2)

{
  uint64_t uVar1;
  bool bVar2;
  bool bVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  char cVar6;
  void *pvVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int64_t **pplVar11;
  int64_t *plVar12;
  int64_t lVar13;
  byte bVar14;
  void* in_ECX;
  int64_t **pplVar15;
  uint64_t uVar16;
  void* pVar17;
  uint32_t uVar18;
  int iVar19;
  uint uVar20;
  uint64_t uVar21;
  int64_t *plVar22;
  double dVar23;
  double extraout_XMM0_Qa;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  int64_t local_200;
  char local_1f8;
  int64_t local_1f0;
  char local_1e8;
  int64_t local_1e0;
  char local_1d8;
  int64_t local_1d0;
  char local_1c8;
  int64_t local_1c0;
  char local_1b8;
  int64_t local_1b0;
  char local_1a8;
  int64_t *local_128;
  char local_120;
  int64_t *local_d0;
  int64_t *local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t **local_a0;
  int64_t *local_98;
  int64_t **local_80;
  double local_78;
  int64_t *local_70;
  int64_t *local_68;
  char local_60 [8];
  int64_t *local_58;
  uint64_t local_50;
  int local_48;
  uint32_t uStack_44;
  char local_40;
  int64_t *local_38;
  
  pvVar7 = _pthread_getspecific(in_ECX);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dfcb0();
  plVar4 = local_68;
  if ((((local_60[0] == '\0') && (local_68 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_60[0] != '\0')) && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar7 = _pthread_getspecific(in_ECX);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dd790();
  plVar5 = local_68;
  if (((local_60[0] == '\0') && (local_68 != (int64_t *)0x0)) &&
     ((FUN_00d50b00(), local_60[0] != '\0' && (local_68 != (int64_t *)0x0)))) {
    FUN_00d50b20();
  }
  uVar20 = *(uint *)((int64_t)plVar5 + 0xc);
  uVar21 = (uint64_t)uVar20;
  if (0 < (int)uVar20) {
    do {
      uVar1 = uVar21 - 1;
      plVar12 = (int64_t *)(uVar1 & 0xffffffff);
      pvVar7 = _pthread_getspecific((void*)uVar1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef8d0();
      local_38 = local_68;
      if (((local_60[0] == '\0') && (local_68 != (int64_t *)0x0)) &&
         ((FUN_00d50b00(), local_60[0] != '\0' && (local_68 != (int64_t *)0x0)))) {
        FUN_00d50b20();
      }
      pvVar7 = _pthread_getspecific((void*)plVar12);
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        plVar12 = local_38;
      }
      FUN_01266fe0();
      plVar22 = local_68;
      if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar22 != (int64_t *)0x0) {
        pvVar7 = _pthread_getspecific((void*)plVar12);
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar12 = local_38;
        }
        FUN_012641c0();
        local_70 = local_68;
        if (local_60[0] == '\0') {
          if (local_68 == (int64_t *)0x0) goto LAB_0134d360;
          FUN_00d50b00();
          if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else if (local_68 == (int64_t *)0x0) {
LAB_0134d360:
          pvVar7 = _pthread_getspecific((void*)plVar12);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013dfcb0();
          pvVar7 = _pthread_getspecific((void*)plVar12);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013dd790();
          plVar22 = local_68;
          if (local_60[0] == '\0') {
            if (((local_68 != (int64_t *)0x0) && (FUN_00d50b00(), local_60[0] != '\0')) &&
               (local_68 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_60[0] = '\0';
          }
          if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          uVar20 = *(uint *)((int64_t)plVar22 + 0xc);
          if (0 < (int)uVar20) {
            lVar8 = (uint64_t)uVar20 + 1;
            do {
              uVar20 = uVar20 - 1;
              plVar12 = (int64_t *)(uint64_t)uVar20;
              pvVar7 = _pthread_getspecific(uVar20);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_011ef8d0();
              plVar22 = local_68;
              if (((local_60[0] == '\0') && (local_68 != (int64_t *)0x0)) &&
                 ((FUN_00d50b00(), local_60[0] != '\0' && (local_68 != (int64_t *)0x0)))) {
                FUN_00d50b20();
              }
              pvVar7 = _pthread_getspecific((void*)plVar12);
              if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                plVar12 = local_38;
              }
              FUN_01266fe0();
              pvVar7 = _pthread_getspecific((void*)plVar12);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01266fe0();
              if (local_68 == local_b0) {
                pvVar7 = _pthread_getspecific((void*)plVar12);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_98 = (int64_t *)FUN_0125a280();
                pvVar7 = _pthread_getspecific((void*)plVar12);
                if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                  plVar12 = local_38;
                }
                local_78 = (double)FUN_01259520();
                if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((double)((uint64_t)((double)local_98 - local_78) & g_023908f0) <
                    g_023b67d8) {
                  if (plVar22 != (int64_t *)0x0) {
                    FUN_00d50b00();
                    FUN_00d50b20();
                    local_70 = plVar22;
                  }
                  break;
                }
              }
              else {
                if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              if (plVar22 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              lVar8 = lVar8 + -1;
            } while (1 < lVar8);
          }
          FUN_00d50b20();
        }
        pVar17 = (void*)plVar12;
        if (local_70 == (int64_t *)0x0) {
          pvVar7 = _pthread_getspecific(pVar17);
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            plVar12 = local_38;
          }
          pVar17 = (void*)plVar12;
          pvVar7 = _pthread_getspecific(pVar17);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de9b0();
          FUN_01259540();
          pvVar7 = _pthread_getspecific(pVar17);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125a5f0();
        }
        else {
          pvVar7 = _pthread_getspecific(pVar17);
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            pVar17 = (void*)local_70;
          }
          dVar23 = (double)FUN_01264170();
          pvVar7 = _pthread_getspecific(pVar17);
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            pVar17 = (void*)local_70;
          }
          FUN_012708c0();
          plVar12 = local_68;
          if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar12 == (int64_t *)0x0) {
            bVar2 = false;
            local_d0 = (int64_t *)0x0;
          }
          else {
            pvVar7 = _pthread_getspecific(pVar17);
            if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              pVar17 = (void*)local_70;
            }
            FUN_012708c0();
            pvVar7 = _pthread_getspecific(pVar17);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012dff00();
            local_d0 = local_68;
            plVar12 = local_68;
            if (local_68 == (int64_t *)0x0) {
              local_d0 = (int64_t *)0x0;
              bVar2 = false;
            }
            else if (local_60[0] == '\0') {
              FUN_00d50b00();
              bVar2 = true;
              if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_60[0] = '\0';
              bVar2 = true;
            }
            pVar17 = (void*)plVar12;
            if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          pvVar7 = _pthread_getspecific(pVar17);
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            pVar17 = (void*)local_38;
          }
          uVar10 = FUN_0126e7e0();
          bVar3 = true;
          if (local_68 == (int64_t *)0x0) {
            pvVar7 = _pthread_getspecific(pVar17);
            if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              pVar17 = (void*)local_70;
            }
            uVar10 = FUN_0126e7e0();
            bVar3 = true;
            if (local_b0 == (int64_t *)0x0) {
              pvVar7 = _pthread_getspecific(pVar17);
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                pVar17 = (void*)local_38;
              }
              local_98 = (int64_t *)FUN_01264170();
              pvVar7 = _pthread_getspecific(pVar17);
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                pVar17 = (void*)local_70;
              }
              uVar10 = FUN_01264170();
              bVar3 = g_023934c8 <
                      (double)((uint64_t)((double)local_98 / param_1 - extraout_XMM0_Qa / param_2)
                              & g_023908f0);
            }
            if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
              uVar10 = FUN_00d50b20();
            }
          }
          if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
            uVar10 = FUN_00d50b20();
          }
          if (bVar3) {
            pvVar7 = _pthread_getspecific(pVar17);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0126e7e0();
            plVar12 = local_68;
            FUN_01111330();
            pplVar15 = (int64_t **)&g_02802688;
            if (plVar12 != (int64_t *)0x0) {
              (**(code **)(*plVar12 + 0x360))();
              cVar6 = FUN_00e85ea0();
              pplVar15 = &local_68;
              if (cVar6 == '\0') {
                pplVar15 = (int64_t **)&g_02802688;
              }
            }
            local_a0 = (int64_t **)*pplVar15;
            if (*(char *)(pplVar15 + 1) == '\0') {
              if (local_a0 != (int64_t **)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              *(void*)(pplVar15 + 1) = 0;
            }
            pVar17 = (void*)pplVar15;
            if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            pvVar7 = _pthread_getspecific(pVar17);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0126e7e0();
            plVar12 = local_68;
            FUN_01111330();
            pplVar15 = (int64_t **)&g_02802688;
            if (plVar12 != (int64_t *)0x0) {
              (**(code **)(*plVar12 + 0x360))();
              cVar6 = FUN_00e85ea0();
              pplVar15 = &local_68;
              if (cVar6 == '\0') {
                pplVar15 = (int64_t **)&g_02802688;
              }
            }
            local_80 = (int64_t **)*pplVar15;
            if (*(char *)(pplVar15 + 1) == '\0') {
              if (local_80 != (int64_t **)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              *(void*)(pplVar15 + 1) = 0;
            }
            if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (local_a0 == (int64_t **)0x0) {
              pplVar11 = (int64_t **)FUN_011114e0();
              (*(*pplVar11)[3])();
              local_a0 = pplVar11;
              pvVar7 = _pthread_getspecific((void*)pplVar15);
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                pplVar15 = local_a0;
              }
              FUN_013ef430(g_02391038,g_02391038);
              pvVar7 = _pthread_getspecific((void*)pplVar15);
              pplVar11 = local_a0;
              if ((pvVar7 != (void *)0x0) &&
                 (lVar8 = FUN_00e8b990(), pplVar11 = local_a0, lVar8 != 0)) {
                pplVar15 = local_a0;
                pplVar11 = (int64_t **)local_a0[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
              }
              (*(*pplVar11)[0x83])(0,0);
              if ((local_1f8 != '\0') && (local_200 != 0)) {
                FUN_00d50b20();
              }
              pvVar7 = _pthread_getspecific((void*)pplVar15);
              pplVar11 = local_a0;
              if ((pvVar7 != (void *)0x0) &&
                 (lVar8 = FUN_00e8b990(), pplVar11 = local_a0, lVar8 != 0)) {
                pplVar15 = local_a0;
                pplVar11 = (int64_t **)local_a0[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
              }
              (*(*pplVar11)[0x83])(param_1,param_1);
              if ((local_1e8 != '\0') && (local_1f0 != 0)) {
                FUN_00d50b20();
              }
            }
            pVar17 = (void*)pplVar15;
            if (local_80 == (int64_t **)0x0) {
              pplVar11 = (int64_t **)FUN_011114e0();
              (*(*pplVar11)[3])();
              local_80 = pplVar11;
              pvVar7 = _pthread_getspecific((void*)pplVar15);
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                pplVar15 = local_80;
              }
              FUN_013ef430(g_02391038,g_02391038);
              pvVar7 = _pthread_getspecific((void*)pplVar15);
              pplVar11 = local_80;
              if ((pvVar7 != (void *)0x0) &&
                 (lVar8 = FUN_00e8b990(), pplVar11 = local_80, lVar8 != 0)) {
                pplVar15 = local_80;
                pplVar11 = (int64_t **)local_80[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
              }
              (*(*pplVar11)[0x83])(0,0);
              if ((local_1d8 != '\0') && (local_1e0 != 0)) {
                FUN_00d50b20();
              }
              pvVar7 = _pthread_getspecific((void*)pplVar15);
              pplVar11 = local_80;
              if ((pvVar7 != (void *)0x0) &&
                 (lVar8 = FUN_00e8b990(), pplVar11 = local_80, lVar8 != 0)) {
                pplVar15 = local_80;
                pplVar11 = (int64_t **)local_80[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
              }
              pVar17 = (void*)pplVar15;
              (*(*pplVar11)[0x83])(param_2,param_2);
              if ((local_1c8 != '\0') && (local_1d0 != 0)) {
                FUN_00d50b20();
              }
            }
            plVar12 = (int64_t *)FUN_011114e0();
            (**(code **)(*plVar12 + 0x18))();
            local_98 = plVar12;
            pvVar7 = _pthread_getspecific(pVar17);
            if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              pVar17 = (void*)local_98;
            }
            FUN_013ef430(g_02391038,g_02391038);
            pvVar7 = _pthread_getspecific(pVar17);
            pplVar15 = local_a0;
            if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), pplVar15 = local_a0, lVar8 != 0)
               ) {
              pplVar15 = (int64_t **)local_a0[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
            }
            FUN_013f2b00();
            local_b8 = local_68;
            if (local_68 == (int64_t *)0x0) {
              uVar18 = (uint32_t)CONCAT71((int7)((uint64_t)pplVar15 >> 8),1);
              uVar16 = 0;
              local_b8 = (int64_t *)0x0;
            }
            else {
              plVar12 = local_68;
              if (local_60[0] == '\0') {
                FUN_00d50b00();
                uVar18 = 0;
                if (local_60[0] != '\0') {
                  uVar16 = CONCAT71((int7)((uint64_t)plVar12 >> 8),1);
                  if (local_68 != (int64_t *)0x0) {
                    FUN_00d50b20();
                    uVar16 = CONCAT71((int7)(uVar16 >> 8),1);
                    uVar18 = 0;
                  }
                  goto LAB_0134e063;
                }
              }
              uVar18 = 0;
              uVar16 = CONCAT71((int7)((uint64_t)plVar12 >> 8),1);
            }
LAB_0134e063:
            pvVar7 = _pthread_getspecific((void*)uVar16);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar24 = (double)FUN_01264170();
            if (local_b8 != (int64_t *)0x0) {
              local_60[0] = '\0';
              local_68 = (int64_t *)0x0;
              local_58 = local_b8;
              local_50 = 0xffffffff;
              local_48 = 0;
              local_50._4_4_ = 0;
              while( true ) {
                if (local_50._4_4_ != 0) {
                  if (local_50._4_4_ < 1) {
                    iVar19 = -local_50._4_4_;
                  }
                  else {
                    iVar19 = (int)local_50 - local_50._4_4_;
                    local_50 = CONCAT44(local_50._4_4_,iVar19);
                    FUN_00d23690();
                    local_48 = local_48 + local_50._4_4_;
                    iVar19 = 0;
                  }
                  local_50 = CONCAT44(iVar19,(int)local_50);
                }
                lVar8 = (int64_t)(int)local_50;
                iVar19 = (int)local_50 + 1;
                local_50 = CONCAT44(local_50._4_4_,iVar19);
                if (*(int *)((int64_t)local_58 + 0xc) <= iVar19) break;
                plVar12 = (int64_t *)local_58[2];
                local_68 = (int64_t *)plVar12[lVar8 + 1];
                pvVar7 = _pthread_getspecific((void*)plVar12);
                plVar22 = local_98;
                if ((pvVar7 != (void *)0x0) &&
                   (lVar8 = FUN_00e8b990(), plVar22 = local_98, lVar8 != 0)) {
                  plVar12 = local_98;
                  plVar22 = (int64_t *)local_98[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
                }
                pVar17 = (void*)plVar12;
                pvVar7 = _pthread_getspecific(pVar17);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_78 = (double)FUN_013faed0();
                pvVar7 = _pthread_getspecific(pVar17);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                uVar10 = FUN_013faf20();
                (**(code **)(*plVar22 + 0x418))(local_78 * (dVar24 / param_1),uVar10);
                if ((local_1b8 != '\0') && (local_1c0 != 0)) {
                  FUN_00d50b20();
                }
              }
              FUN_01a81420();
            }
            FUN_00d23340();
            plVar12 = local_68;
            local_b0 = (int64_t *)CONCAT71(local_b0._1_7_,local_60[0]);
            pplVar15 = &local_b0;
            pplVar11 = (int64_t **)local_60;
            if (local_60[0] == '\0') {
              pplVar11 = pplVar15;
            }
            *(char *)pplVar11 = '\0';
            if ((local_60[0] != '\0') && (plVar12 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            pvVar7 = _pthread_getspecific((void*)pplVar15);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_78 = (double)FUN_013faed0();
            if (((char)local_b0 != '\0') && (plVar12 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00d23340();
            plVar12 = local_68;
            local_b0 = (int64_t *)CONCAT71(local_b0._1_7_,local_60[0]);
            pplVar15 = &local_b0;
            pplVar11 = (int64_t **)local_60;
            if (local_60[0] == '\0') {
              pplVar11 = pplVar15;
            }
            *(char *)pplVar11 = '\0';
            if ((local_60[0] != '\0') && (plVar12 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            pVar17 = (void*)pplVar15;
            pvVar7 = _pthread_getspecific(pVar17);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar25 = (double)FUN_013faf20();
            if (((char)local_b0 != '\0') && (plVar12 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            pvVar7 = _pthread_getspecific(pVar17);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013f2b00();
            plVar12 = local_68;
            if (local_68 == local_b8) {
              bVar14 = (byte)uVar18 & local_b8 != (int64_t *)0x0;
              pVar17 = CONCAT31((int3)((uint)uVar18 >> 8),bVar14);
              if (bVar14 != 1) {
                cVar6 = (char)uVar16;
                goto joined_r0x0134e49e;
              }
              cVar6 = '\x01';
              if (local_60[0] == '\0') {
                FUN_00d50b00();
                goto LAB_0134e477;
              }
            }
            else if (local_60[0] == '\0') {
              if (local_68 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              bVar14 = (byte)(uVar16 & 0xffffffff) & local_b8 != (int64_t *)0x0;
              pVar17 = (void*)CONCAT71((int7)((uVar16 & 0xffffffff) >> 8),bVar14);
              cVar6 = '\x01';
              local_b8 = plVar12;
              if (bVar14 == 1) {
                FUN_00d50b20();
LAB_0134e477:
                cVar6 = '\x01';
              }
joined_r0x0134e49e:
              if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              bVar14 = (byte)(uVar16 & 0xffffffff) & local_b8 != (int64_t *)0x0;
              pVar17 = (void*)CONCAT71((int7)((uVar16 & 0xffffffff) >> 8),bVar14);
              cVar6 = '\x01';
              if (bVar14 == 1) {
                FUN_00d50b20();
                local_b8 = plVar12;
              }
              else {
                local_b8 = local_68;
              }
            }
            pvVar7 = _pthread_getspecific(pVar17);
            if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              pVar17 = (void*)local_70;
            }
            dVar26 = (double)FUN_01264170();
            if (local_b8 != (int64_t *)0x0) {
              dVar24 = (dVar24 / param_1) * local_78;
              local_60[0] = '\0';
              local_68 = (int64_t *)0x0;
              local_58 = local_b8;
              local_50 = 0xffffffff;
              local_48 = 0;
              local_50._4_4_ = 0;
              while( true ) {
                if (local_50._4_4_ != 0) {
                  if (local_50._4_4_ < 1) {
                    iVar19 = -local_50._4_4_;
                  }
                  else {
                    iVar19 = (int)local_50 - local_50._4_4_;
                    local_50 = CONCAT44(local_50._4_4_,iVar19);
                    FUN_00d23690();
                    local_48 = local_48 + local_50._4_4_;
                    iVar19 = 0;
                  }
                  local_50 = CONCAT44(iVar19,(int)local_50);
                }
                lVar8 = (int64_t)(int)local_50;
                iVar19 = (int)local_50 + 1;
                local_50 = CONCAT44(local_50._4_4_,iVar19);
                if (*(int *)((int64_t)local_58 + 0xc) <= iVar19) break;
                plVar12 = *(int64_t **)(local_58[2] + 8 + lVar8 * 8);
                local_68 = plVar12;
                if (iVar19 != 0 || local_48 != 0) {
                  pvVar7 = _pthread_getspecific((void*)plVar12);
                  plVar22 = local_98;
                  if ((pvVar7 != (void *)0x0) &&
                     (lVar8 = FUN_00e8b990(), plVar22 = local_98, lVar8 != 0)) {
                    plVar12 = local_98;
                    plVar22 = (int64_t *)local_98[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
                  }
                  pVar17 = (void*)plVar12;
                  pvVar7 = _pthread_getspecific(pVar17);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_78 = (double)FUN_013faed0();
                  pvVar7 = _pthread_getspecific(pVar17);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  dVar27 = (double)FUN_013faf20();
                  (**(code **)(*plVar22 + 0x418))
                            (local_78 * (dVar26 / param_2) + dVar24 + 0.0,dVar27 + dVar25 + 0.0);
                  if ((local_1a8 != '\0') && (local_1b0 != 0)) {
                    FUN_00d50b20();
                  }
                }
              }
              FUN_01a81420();
              pVar17 = (void*)lVar8;
            }
            pvVar7 = _pthread_getspecific(pVar17);
            if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              pVar17 = (void*)local_a0;
            }
            FUN_013f2b00();
            uVar20 = *(uint *)((int64_t)local_68 + 0xc);
            if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (2 < (int)uVar20) {
              pvVar7 = _pthread_getspecific(pVar17);
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                pVar17 = (void*)local_98;
              }
              FUN_013f2b00();
              iVar19 = *(int *)((int64_t)local_68 + 0xc);
              if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((int)uVar20 < iVar19) {
                pvVar7 = _pthread_getspecific(pVar17);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_013f2b00();
                lVar8 = local_68[2];
                lVar9 = *(int64_t *)(lVar8 + (uint64_t)(uVar20 - 2) * 8);
                if (lVar9 != 0) {
                  FUN_00d50b00();
                }
                pVar17 = (void*)lVar8;
                if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                pvVar7 = _pthread_getspecific(pVar17);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_013f2b00();
                pVar17 = uVar20 - 1;
                local_78 = *(double *)(local_68[2] + (uint64_t)pVar17 * 8);
                if (local_78 != 0.0) {
                  FUN_00d50b00();
                }
                if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                pvVar7 = _pthread_getspecific(pVar17);
                if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                  pVar17 = (void*)local_98;
                }
                FUN_013f2b00();
                lVar8 = *(int64_t *)(local_68[2] + (uint64_t)uVar20 * 8);
                if (lVar8 != 0) {
                  FUN_00d50b00();
                }
                if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                pvVar7 = _pthread_getspecific(pVar17);
                if ((pvVar7 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                  pVar17 = SUB84(local_78,0);
                }
                dVar24 = (double)FUN_013faf20();
                pvVar7 = _pthread_getspecific(pVar17);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar25 = (double)FUN_013faf20();
                pvVar7 = _pthread_getspecific(pVar17);
                if ((pvVar7 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                  pVar17 = SUB84(local_78,0);
                }
                dVar26 = (double)FUN_013faed0();
                pvVar7 = _pthread_getspecific(pVar17);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar27 = (double)FUN_013faed0();
                pvVar7 = _pthread_getspecific(pVar17);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar28 = (double)FUN_013faf20();
                pvVar7 = _pthread_getspecific(pVar17);
                if ((pvVar7 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                  pVar17 = SUB84(local_78,0);
                }
                dVar29 = (double)FUN_013faf20();
                pvVar7 = _pthread_getspecific(pVar17);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar30 = (double)FUN_013faed0();
                pvVar7 = _pthread_getspecific(pVar17);
                if ((pvVar7 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                  pVar17 = SUB84(local_78,0);
                }
                dVar31 = (double)FUN_013faed0();
                if ((double)((uint64_t)
                             ((dVar28 - dVar29) / (dVar30 - dVar31) -
                             (dVar24 - dVar25) / (dVar26 - dVar27)) & g_023908f0) < g_02391030)
                {
                  pvVar7 = _pthread_getspecific(pVar17);
                  if ((pvVar7 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                    pVar17 = (void*)local_98;
                  }
                  FUN_013f3080();
                }
                if (lVar8 != 0) {
                  FUN_00d50b20();
                }
                if (local_78 != 0.0) {
                  FUN_00d50b20();
                }
                if (lVar9 != 0) {
                  FUN_00d50b20();
                }
              }
            }
            if ((cVar6 != '\0') && (local_b8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (local_80 != (int64_t **)0x0) {
              FUN_00d50b20();
            }
            if (local_a0 != (int64_t **)0x0) {
              FUN_00d50b20();
            }
            local_78 = (double)((uint64_t)local_78 & 0xffffffff00000000);
          }
          else {
            local_78 = (double)CONCAT44(local_78._4_4_,
                                        (int)CONCAT71((int7)((uint64_t)uVar10 >> 8),1));
            local_98 = (int64_t *)0x0;
          }
          pvVar7 = _pthread_getspecific(pVar17);
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            pVar17 = (void*)local_38;
          }
          pvVar7 = _pthread_getspecific(pVar17);
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            pVar17 = (void*)local_38;
          }
          dVar24 = (double)FUN_01264170();
          FUN_01259540(dVar23 + dVar24);
          if (local_98 != (int64_t *)0x0) {
            pvVar7 = _pthread_getspecific(pVar17);
            if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              pVar17 = (void*)local_38;
            }
            FUN_0125e7c0();
            pvVar7 = _pthread_getspecific(pVar17);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013de9b0();
            FUN_012902c0();
            if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01290740();
            pvVar7 = _pthread_getspecific(pVar17);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0126dd90();
          }
          if (local_d0 != (int64_t *)0x0) {
            local_b0 = local_38;
            FUN_00083ea0(2);
            FUN_00790070();
            if (local_120 == '\0') {
              if (local_128 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_120 = '\0';
            }
            local_b0 = local_128;
            local_a8 = '\0';
            FUN_00d21140();
            if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (local_128 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            local_68 = (int64_t *)&g_0253d630;
            if ((local_40 != '\0') && (CONCAT44(uStack_44,local_48) != 0)) {
              FUN_00d50b20();
            }
            local_68 = &g_024c5048;
            if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (bVar2) {
              FUN_00d50b20();
            }
          }
          if (SUB81(local_78,0) == '\0' && local_98 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
      if (local_38 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      bVar2 = 1 < (int64_t)uVar21;
      uVar21 = uVar1;
    } while (bVar2);
    if (plVar5 == (int64_t *)0x0) goto LAB_0134f006;
  }
  FUN_00d50b20();
LAB_0134f006:
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01351de0
// ============================================================
// Function: MUAudioSourceDescription__activateItem
// Address: 01351de0
// Size: 5370 bytes
// Class: MUAudioSourceDescription
// String references:
//   "MUAudioSourcePrincipalItem"
//   "MUAudioSourceDescription::_activateItem(): item must be MUAudioSourcePrincipalItem"
// === MUAudioSourceDescription properties ===
//   MUAudioSourceDescriptionType _currentDescriptionType
//   bool            _isNewDocument
//   bool            _isDetectionInProgress
//   bool            _insertGroupDefinesPerformanceTempo
//   bool            _stretchInsertGroup
//   double          _stretchInsertStartTime
//   bool            _createdFromSoundfile
//   bool            _timelineWasModified
//   GNInt           _recordingsInProgress
//   bool            _isComparing
//   bool            _followsHostRegionSelection
//   bool            _zoomsToHostRegionSelection
//   GNInt           _shouldDisplayStructureProblemDialog
//   bool            _shouldDisplayUnknownArchiveDialog
//   bool            _shouldDisplayImportedArchiveDialog
//   bool            _useAutomaticDetection
//   bool            _percussiveSeparation
//   bool            _hasDistinctAttacks
//   bool            _findSibilantPointsAutomatically
//   bool            _isPreliminary
//   bool            _isTonalicOnly
//   bool            _allowAutomaticPolyphonicDetection
//   SInt64          _startSampleIndex
//   SInt64          _sampleCount
//   SInt64          _signalEndSampleOffset
//   SInt64          _signalStartSampleOffset
//   float           _pitchCenter
//   float           _energyClaimFactor
//   float           _detectionQuality
//   GNFraction      _idealStartPulse
//   ... +8 more


void* MUAudioSourceDescription__activateItem(code *param_1,int64_t *param_2,int64_t *param_3,int64_t *param_4)

{
  int64_t *plVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int64_t lVar8;
  code *pcVar9;
  char cVar10;
  int iVar11;
  void *pvVar12;
  int64_t lVar13;
  void*puVar14;
  undefined7 uVar18;
  int64_t *plVar15;
  void*puVar16;
  int64_t lVar17;
  void* pVar19;
  void*puVar20;
  int64_t *plVar21;
  int64_t arg1;
  void*this_ptr;
  int64_t *plVar22;
  uint64_t uVar23;
  double dVar24;
  double dVar25;
  int64_t *local_res8;
  int64_t *local_1c8;
  uint8_t local_1c0;
  int64_t *local_1b8;
  uint8_t local_1b0;
  int64_t *local_1a8;
  uint8_t local_1a0;
  void*local_198;
  uint8_t local_190;
  int64_t *local_188;
  uint8_t local_180;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  int64_t *local_160;
  int64_t *local_158;
  uint8_t local_150;
  int64_t *local_148;
  char local_140;
  int64_t *local_138;
  char local_130;
  int64_t *local_128;
  char local_120;
  int64_t *local_118;
  char local_110;
  void* local_104;
  int64_t *local_c0;
  char local_b8;
  int64_t *local_88;
  int64_t *local_80;
  void*local_70;
  int64_t *local_60;
  int64_t *local_58;
  int64_t *local_48;
  char local_40;
  
  if (((*(int64_t *)(arg1 + 0x1f8) != 0) || (*(int64_t *)(arg1 + 0x200) != 0)) ||
     (*(int64_t *)(arg1 + 0x148) == 0)) {
LAB_01351e0b:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return this_ptr;
  }
  local_104 = (void*)param_1;
  pvVar12 = _pthread_getspecific(local_104);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar11 = FUN_0141bab0();
  if (iVar11 != 3) goto LAB_01351e0b;
  plVar1 = (int64_t *)*param_2;
  if ((g_027c0170 == '\0') && (iVar11 = ___cxa_guard_acquire(), iVar11 != 0)) {
    g_02790158 = FUN_007ef2d0();
    g_02790140 = "MUAudioSourcePrincipalItem";
    g_02790148 = 0x138;
    param_1 = FUN_010fe5c0;
    g_02790150 = FUN_010fe5c0;
    g_02790160 = 0;
    ram_0000000002790168 = 0;
    g_02790170 = 0;
    ram_0000000002790178 = 0;
    g_02790180 = 0;
    ram_0000000002790188 = 0;
    g_02790190 = 0;
    ram_0000000002790198 = 0;
    g_027901a0 = 0;
    ram_00000000027901a8 = 0;
    g_027901b0 = 0;
    ram_00000000027901b8 = 0;
    g_027901c0 = 0;
    ram_00000000027901c8 = 0;
    g_027901d0 = 0;
    ram_00000000027901d8 = 0;
    g_027901e0 = 0;
    ram_00000000027901e8 = 0;
    g_027901f0 = 0;
    ram_00000000027901f8 = 0;
    g_02790200 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_01351ed7:
    param_2 = &g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar10 = FUN_00e85ea0();
    if (cVar10 == '\0') goto LAB_01351ed7;
  }
  plVar1 = (int64_t *)*param_2;
  lVar8 = param_2[1];
  if (((char)lVar8 == '\0') || (plVar1 == (int64_t *)0x0)) {
    if (plVar1 == (int64_t *)0x0) {
      bVar4 = true;
      FUN_00e828a0();
    }
    else {
      bVar4 = false;
    }
  }
  else {
    FUN_00d50b00();
    bVar4 = false;
  }
  pvVar12 = _pthread_getspecific((void*)param_1);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d50b00();
  FUN_014ce440();
  if (arg1 != 0) {
    FUN_00d50b20();
  }
  pvVar12 = _pthread_getspecific((void*)param_1);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d50b00();
  FUN_014ceed0();
  if (arg1 != 0) {
    FUN_00d50b20();
  }
  pvVar12 = _pthread_getspecific((void*)param_1);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d50b00();
  FUN_014cfcc0();
  if (arg1 != 0) {
    FUN_00d50b20();
  }
  pvVar12 = _pthread_getspecific((void*)param_1);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bfad0();
  pvVar12 = _pthread_getspecific((void*)param_1);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  plVar21 = *(int64_t **)(arg1 + 0x38);
  if (plVar21 == (int64_t *)0x0) {
    uVar23 = 0;
  }
  else {
    pvVar12 = _pthread_getspecific((void*)param_1);
    if (pvVar12 != (void *)0x0) {
      plVar21 = *(int64_t **)(arg1 + 0x38);
      lVar13 = FUN_00e8b990();
      if (lVar13 != 0) {
        plVar21 = (int64_t *)plVar21[(uint64_t)(*(uint *)(lVar13 + 0x154) & 1) + 4];
      }
    }
    uVar23 = (**(code **)(*plVar21 + 0x370))();
  }
  FUN_014bd640(uVar23);
  local_160 = param_3;
  if ((*param_4 == 0) || (*local_res8 == 0)) {
    puVar14 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar14 = &g_02572358;
    pcVar9 = g_02572370;
    (*g_02572370)();
    puVar16 = (void*)*param_4;
    if (puVar16 == puVar14) {
      if ((char)param_4[1] == '\0') goto LAB_01352207;
      FUN_00d50b20();
    }
    else {
      *param_4 = (int64_t)puVar14;
      if (((char)param_4[1] != '\0') && (puVar16 != (void*)0x0)) {
        FUN_00d50b20();
      }
LAB_01352207:
      *(void*)(param_4 + 1) = 1;
    }
    puVar14 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar14 = &g_02572358;
    (*pcVar9)();
    puVar16 = (void*)*local_res8;
    if (puVar16 == puVar14) {
      if ((char)local_res8[1] == '\0') goto LAB_0135225b;
      FUN_00d50b20();
    }
    else {
      *local_res8 = (int64_t)puVar14;
      if (((char)local_res8[1] != '\0') && (puVar16 != (void*)0x0)) {
        FUN_00d50b20();
      }
LAB_0135225b:
      *(void*)(local_res8 + 1) = 1;
    }
    param_1 = *(code **)(arg1 + 0x40);
    if (*(int *)(param_1 + 0xc) < 1) goto LAB_01352a21;
    lVar13 = 0;
    local_88 = (int64_t *)0x0;
    bVar2 = false;
    local_60 = (int64_t *)0x0;
    bVar5 = false;
    local_58 = (int64_t *)0x0;
    bVar6 = false;
    local_80 = (int64_t *)0x0;
    bVar7 = false;
    plVar21 = (int64_t *)0x0;
    local_70 = (void*)0x0;
    do {
      plVar15 = *(int64_t **)(*(int64_t *)(param_1 + 0x10) + lVar13 * 8);
      local_168 = lVar13;
      if (local_60 == plVar15) {
        if ((!bVar5) && (local_60 != (int64_t *)0x0)) {
          bVar5 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (plVar15 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar5) && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
          bVar5 = true;
          local_60 = plVar15;
        }
        else {
          bVar5 = true;
          local_60 = plVar15;
        }
      }
      pVar19 = (void*)param_1;
      pvVar12 = _pthread_getspecific(pVar19);
      if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
        pVar19 = (void*)local_60;
      }
      FUN_013dfcb0();
      if (local_48 == local_58) {
        if ((!bVar6) && (local_48 != (int64_t *)0x0)) {
          plVar15 = local_58;
          bVar3 = true;
          if (local_40 != '\0') goto LAB_01352477;
          bVar6 = true;
          FUN_00d50b00();
        }
LAB_01352463:
        plVar15 = local_58;
        bVar3 = bVar6;
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar3 = true;
        plVar15 = local_48;
        if ((bVar6) && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
          local_58 = local_48;
          bVar6 = bVar3;
          goto LAB_01352463;
        }
      }
      else {
        bVar3 = true;
        if ((bVar6) && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
          local_58 = local_48;
          plVar15 = local_58;
        }
        else {
          local_58 = local_48;
          plVar15 = local_58;
        }
      }
LAB_01352477:
      bVar6 = bVar3;
      local_58 = plVar15;
      pvVar12 = _pthread_getspecific(pVar19);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dd790();
      if (local_48 == local_80) {
        if ((!bVar7) && (local_48 != (int64_t *)0x0)) {
          plVar15 = local_80;
          bVar3 = true;
          if (local_40 != '\0') goto LAB_01352588;
          bVar7 = true;
          FUN_00d50b00();
        }
LAB_0135254d:
        plVar15 = local_80;
        bVar3 = bVar7;
        if ((local_40 != '\0') && (plVar15 = local_80, local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
          plVar15 = local_80;
        }
      }
      else {
        plVar15 = local_48;
        if (local_40 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          bVar3 = true;
          if ((bVar7) && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
            local_80 = local_48;
            bVar7 = bVar3;
            goto LAB_0135254d;
          }
        }
        else {
          bVar3 = true;
          if ((bVar7) && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
LAB_01352588:
      bVar7 = bVar3;
      if (0 < *(int *)((int64_t)plVar15 + 0xc)) {
        lVar13 = 0;
        plVar22 = plVar21;
        do {
          local_70 = (void*)((uint64_t)local_70 & 0xffffffff);
          pVar19 = (void*)plVar15;
          pvVar12 = _pthread_getspecific(pVar19);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar23 = FUN_011ef8d0();
          uVar18 = (undefined7)((uint64_t)uVar23 >> 8);
          cVar10 = (char)local_70;
          if (local_48 == plVar22) {
            if ((cVar10 == '\0') && (local_48 != (int64_t *)0x0)) {
              local_70 = (void*)CONCAT71(uVar18,1);
              plVar21 = plVar22;
              if (local_40 != '\0') goto LAB_013526ee;
              local_70 = (void*)CONCAT71(uVar18,1);
              FUN_00d50b00();
            }
joined_r0x013526c0:
            plVar21 = plVar22;
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            plVar21 = local_48;
            if (local_40 == '\0') {
              if (local_48 != (int64_t *)0x0) {
                uVar23 = FUN_00d50b00();
              }
              local_70 = (void*)CONCAT71((int7)((uint64_t)uVar23 >> 8),1);
              if ((cVar10 != '\0') && (plVar22 != (int64_t *)0x0)) {
                FUN_00d50b20();
                plVar22 = local_48;
                goto joined_r0x013526c0;
              }
            }
            else {
              local_70 = (void*)CONCAT71(uVar18,1);
              if ((cVar10 != '\0') && (plVar22 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
LAB_013526ee:
          pvVar12 = _pthread_getspecific(pVar19);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          if (local_48 == local_88) {
            if ((bVar2) || (local_48 == (int64_t *)0x0)) {
joined_r0x01352950:
              bVar3 = bVar2;
              plVar22 = local_88;
              if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              bVar3 = true;
              plVar22 = local_88;
              if (local_40 == '\0') {
                FUN_00d50b00();
                goto LAB_013527cf;
              }
            }
          }
          else if (local_40 == '\0') {
            if (local_48 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            bVar3 = true;
            plVar22 = local_48;
            if ((bVar2) && (plVar22 = local_48, local_88 != (int64_t *)0x0)) {
              FUN_00d50b20();
              local_88 = local_48;
LAB_013527cf:
              bVar2 = true;
              goto joined_r0x01352950;
            }
          }
          else {
            bVar3 = true;
            plVar22 = local_48;
            if ((bVar2) && (plVar22 = local_48, local_88 != (int64_t *)0x0)) {
              FUN_00d50b20();
              plVar22 = local_48;
            }
          }
          local_88 = plVar22;
          bVar2 = bVar3;
          if (local_88 != (int64_t *)0x0) {
            pVar19 = (void*)local_88;
            pvVar12 = _pthread_getspecific(pVar19);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar24 = (double)FUN_0125a280();
            pvVar12 = _pthread_getspecific(pVar19);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar25 = (double)FUN_013de8d0();
            local_40 = '\0';
            cVar10 = FUN_00d24090();
            local_48 = local_88;
            if (cVar10 == '\0') {
              FUN_00d21140();
              FUN_00d470c0(dVar24 - dVar25);
              if (local_b8 == '\0') {
                if (local_c0 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_b8 = '\0';
              }
              local_48 = local_c0;
              local_40 = '\0';
              FUN_00d21140();
              if (local_c0 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          lVar13 = lVar13 + 1;
          plVar22 = plVar21;
        } while (lVar13 < *(int *)((int64_t)plVar15 + 0xc));
      }
      lVar13 = local_168 + 1;
      param_1 = *(code **)(arg1 + 0x40);
      local_80 = plVar15;
    } while (lVar13 < *(int *)(param_1 + 0xc));
  }
  else {
LAB_01352a21:
    local_70 = (void*)0x0;
    plVar21 = (int64_t *)0x0;
    bVar7 = false;
    local_80 = (int64_t *)0x0;
    bVar6 = false;
    local_58 = (int64_t *)0x0;
    bVar5 = false;
    local_60 = (int64_t *)0x0;
    bVar2 = false;
    local_88 = (int64_t *)0x0;
  }
  pVar19 = (void*)param_1;
  plVar15 = (int64_t *)FUN_00115860();
  (**(code **)(*plVar15 + 0x18))();
  if (local_58 == plVar15) {
    plVar15 = local_58;
    if ((bVar6) || (local_58 == (int64_t *)0x0)) {
      bVar3 = bVar6;
      if (local_58 == (int64_t *)0x0) {
        local_58 = (int64_t *)0x0;
        plVar15 = local_58;
      }
      else {
        FUN_00d50b20();
      }
    }
    else {
      bVar3 = true;
    }
  }
  else {
    bVar3 = true;
    if ((bVar6) && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_58 = plVar15;
  pvVar12 = _pthread_getspecific(pVar19);
  if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
    pVar19 = (void*)local_58;
  }
  local_140 = '\0';
  local_148 = plVar1;
  FUN_013dd650();
  if ((local_140 != '\0') && (local_148 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar12 = _pthread_getspecific(pVar19);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_138 = local_58;
  local_130 = '\0';
  FUN_014bc440();
  if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar15 = (int64_t *)FUN_00e8fc40();
  FUN_007eeec0();
  (**(code **)(*plVar15 + 0x18))();
  if (plVar15 == local_60) {
    plVar15 = local_60;
    if (bVar5) {
      FUN_00d50b20();
    }
  }
  else if ((bVar5) && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_60 = plVar15;
  pvVar12 = _pthread_getspecific(pVar19);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_128 = local_58;
  local_120 = '\0';
  FUN_013dfbc0();
  if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01327c60();
  if ((char)local_104 != '\0') {
    local_1c8 = local_60;
    local_1c0 = 0;
    pVar19 = 0;
    uVar23 = FUN_0135d2e0(0,&local_1c8);
    if (local_170 == '\0') {
      if (local_178 != 0) {
        uVar23 = FUN_00d50b00();
      }
    }
    else {
      local_170 = '\0';
    }
    FUN_01346520(uVar23,1);
    if (local_178 != 0) {
      FUN_00d50b20();
    }
    pvVar12 = _pthread_getspecific(pVar19);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014d26c0();
  }
  cVar10 = FUN_00d23d70();
  if (cVar10 != '\0') {
    local_1b0 = 0;
    local_1b8 = plVar1;
    FUN_013295b0();
  }
  local_1a0 = 0;
  local_1a8 = plVar1;
  FUN_01328c70();
  puVar16 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar20 = &g_02572358;
  *puVar16 = &g_02572358;
  (*g_02572370)();
  FUN_00d21140();
  local_190 = 0;
  local_198 = puVar16;
  FUN_0135d660();
  if (*(int *)(*param_4 + 0xc) < 1) {
    *this_ptr = local_60;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    lVar13 = 0;
    plVar15 = plVar21;
    local_48 = plVar1;
    do {
      pVar19 = (void*)puVar20;
      local_70 = (void*)((uint64_t)local_70 & 0xffffffff);
      uVar23 = FUN_00d45bc0();
      pvVar12 = _pthread_getspecific(pVar19);
      if ((pvVar12 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
        pVar19 = (void*)local_60;
      }
      uVar23 = FUN_013e5700(uVar23);
      cVar10 = (char)local_70;
      if (local_48 == plVar15) {
        plVar21 = plVar15;
        if ((cVar10 == '\0') && (local_48 != (int64_t *)0x0)) {
          local_70 = (void*)CONCAT71((int7)((uint64_t)uVar23 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (local_48 != (int64_t *)0x0) {
          uVar23 = FUN_00d50b00();
        }
        local_70 = (void*)CONCAT71((int7)((uint64_t)uVar23 >> 8),1);
        plVar21 = local_48;
        if ((cVar10 != '\0') && (plVar15 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      pvVar12 = _pthread_getspecific(pVar19);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_110 = '\0';
      local_118 = plVar21;
      FUN_012e6a70();
      if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar12 = _pthread_getspecific(pVar19);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar23 = FUN_012e5ae0();
      if (local_48 != (int64_t *)0x0) {
        uVar23 = FUN_00d50b00();
      }
      local_150 = 1;
      local_158 = local_48;
      local_180 = 0;
      local_188 = plVar21;
      FUN_0132a0a0(uVar23,&local_188);
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      pvVar12 = _pthread_getspecific(pVar19);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0128c620();
      if (*local_160 != 0) {
        FUN_00d21140();
        local_48 = plVar21;
      }
      lVar13 = lVar13 + 1;
      puVar20 = local_70;
      plVar15 = plVar21;
    } while (lVar13 < *(int *)(*param_4 + 0xc));
    *this_ptr = local_60;
    *(void*)(this_ptr + 1) = 1;
    if (puVar16 == (void*)0x0) goto LAB_01353209;
  }
  FUN_00d50b20();
LAB_01353209:
  if (((char)local_70 != '\0') && (plVar21 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar7) && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (local_88 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)lVar8 == '\0' || bVar4) {
    return this_ptr;
  }
  FUN_00d50b20();
  return this_ptr;
}



// ============================================================
// 013469e0
// ============================================================
// Function: FUN_013469e0
// Address: 013469e0
// Size: 3662 bytes
// Class: MUAudioSourceDescription
// === MUAudioSourceDescription properties ===
//   MUAudioSourceDescriptionType _currentDescriptionType
//   bool            _isNewDocument
//   bool            _isDetectionInProgress
//   bool            _insertGroupDefinesPerformanceTempo
//   bool            _stretchInsertGroup
//   double          _stretchInsertStartTime
//   bool            _createdFromSoundfile
//   bool            _timelineWasModified
//   GNInt           _recordingsInProgress
//   bool            _isComparing
//   bool            _followsHostRegionSelection
//   bool            _zoomsToHostRegionSelection
//   GNInt           _shouldDisplayStructureProblemDialog
//   bool            _shouldDisplayUnknownArchiveDialog
//   bool            _shouldDisplayImportedArchiveDialog
//   bool            _useAutomaticDetection
//   bool            _percussiveSeparation
//   bool            _hasDistinctAttacks
//   bool            _findSibilantPointsAutomatically
//   bool            _isPreliminary
//   bool            _isTonalicOnly
//   bool            _allowAutomaticPolyphonicDetection
//   SInt64          _startSampleIndex
//   SInt64          _sampleCount
//   SInt64          _signalEndSampleOffset
//   SInt64          _signalStartSampleOffset
//   float           _pitchCenter
//   float           _energyClaimFactor
//   float           _detectionQuality
//   GNFraction      _idealStartPulse
//   ... +8 more


uint64_t FUN_013469e0(uint64_t param_1,int64_t *param_2)

{
  dword dVar1;
  void* pVar2;
  int64_t *plVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  void*puVar14;
  void *pvVar15;
  int64_t lVar16;
  void* pVar17;
  void*puVar18;
  int64_t *plVar19;
  void*arg1;
  int64_t this_ptr;
  int64_t lVar20;
  int64_t *plVar21;
  uint64_t uVar22;
  bool bVar23;
  int64_t local_108;
  uint8_t local_100;
  uint64_t local_f8;
  uint8_t local_f0;
  uint64_t local_e8;
  int64_t local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_58;
  int64_t *local_48;
  int64_t *local_40;
  
  puVar14 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar17 = 0x2572358;
  *puVar14 = &g_02572358;
  (*g_02572370)();
  if (((*(int64_t *)(this_ptr + 0x1f8) == 0) && (*(int64_t *)(this_ptr + 0x200) == 0)) &&
     (*(int64_t *)(this_ptr + 0x148) != 0)) {
    pvVar15 = _pthread_getspecific(pVar17);
    if (pvVar15 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar11 = FUN_0141bab0();
    if (iVar11 != 3) goto LAB_01346a4d;
    puVar18 = *(void**)(this_ptr + 0x40);
    plVar21 = param_2;
    if (*(int *)((int64_t)puVar18 + 0xc) < 1) {
      bVar5 = false;
      local_78 = 0;
      bVar8 = false;
      local_48 = (int64_t *)0x0;
      bVar9 = false;
      local_58 = (int64_t *)0x0;
      bVar6 = false;
      local_40 = (int64_t *)0x0;
    }
    else {
      plVar19 = (int64_t *)0x0;
      local_40 = (int64_t *)0x0;
      bVar6 = false;
      local_58 = (int64_t *)0x0;
      bVar9 = false;
      local_48 = (int64_t *)0x0;
      bVar8 = false;
      local_78 = 0;
      bVar5 = false;
      do {
        plVar3 = *(int64_t **)(puVar18[2] + (int64_t)plVar19 * 8);
        if (local_48 == plVar3) {
          if ((!bVar8) && (local_48 != (int64_t *)0x0)) {
            bVar8 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (plVar3 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          if ((bVar8) && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
            bVar8 = true;
            local_48 = plVar3;
          }
          else {
            bVar8 = true;
            local_48 = plVar3;
          }
        }
        pVar17 = (void*)puVar18;
        pvVar15 = _pthread_getspecific(pVar17);
        if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          pVar17 = (void*)local_48;
        }
        FUN_013de560();
        if (local_70 == local_40) {
          if ((!bVar6) && (local_70 != (int64_t *)0x0)) {
            bVar6 = true;
            if (local_68 != '\0') goto LAB_01346d6e;
            FUN_00d50b00();
LAB_01346d2a:
            bVar6 = true;
          }
          if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else if (local_68 == '\0') {
          if (local_70 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          if (bVar6) {
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b20();
              local_40 = local_70;
              goto LAB_01346d2a;
            }
            local_40 = local_70;
            bVar6 = true;
          }
          else {
            local_40 = local_70;
            bVar6 = true;
          }
        }
        else if ((bVar6) && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
          local_40 = local_70;
          bVar6 = true;
        }
        else {
          local_40 = local_70;
          bVar6 = true;
        }
LAB_01346d6e:
        pvVar15 = _pthread_getspecific(pVar17);
        pVar2 = (void*)local_40;
        if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          pVar17 = pVar2;
        }
        cVar10 = FUN_014bc070();
        if (cVar10 != '\0') {
          pvVar15 = _pthread_getspecific(pVar17);
          if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
            pVar17 = pVar2;
          }
          iVar11 = FUN_014c2f20();
          if (iVar11 == 0) {
            pvVar15 = _pthread_getspecific(pVar17);
            if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
              pVar17 = pVar2;
            }
            FUN_014bc420();
            if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            plVar21 = (int64_t *)
                      CONCAT71((int7)((uint64_t)plVar21 >> 8),local_70 == (int64_t *)0x0);
          }
          else {
            plVar21 = (int64_t *)0x0;
          }
          pvVar15 = _pthread_getspecific(pVar17);
          if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
            pVar17 = pVar2;
          }
          FUN_014bc340();
          bVar23 = true;
          if (local_70 == (int64_t *)0x0) {
            pvVar15 = _pthread_getspecific(pVar17);
            if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
              pVar17 = pVar2;
            }
            iVar11 = FUN_014c2f20();
            bVar23 = iVar11 == 0;
          }
          if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((bool)(bVar23 & (char)plVar21 == '\0')) {
            pvVar15 = _pthread_getspecific(pVar17);
            if (pvVar15 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar12 = FUN_014c2f20();
            plVar21 = (int64_t *)(uint64_t)uVar12;
            pvVar15 = _pthread_getspecific(pVar17);
            if (pvVar15 != (void *)0x0) {
              FUN_00e8b990();
            }
            iVar11 = FUN_014c2f80();
            local_e8 = FUN_00e7b4e0();
            lVar16 = *(int64_t *)(this_ptr + 0x40);
            if (*(int *)(lVar16 + 0xc) < 1) {
              bVar23 = false;
LAB_013472cf:
              bVar4 = bVar23;
              if (iVar11 != *(int *)(this_ptr + 0x88) + -1) {
                bVar4 = true;
              }
            }
            else {
              plVar21 = (int64_t *)0x0;
              bVar23 = false;
              bVar7 = false;
              lVar20 = local_78;
              do {
                local_78 = lVar20;
                if (plVar19 != plVar21) {
                  local_78 = *(int64_t *)(*(int64_t *)(lVar16 + 0x10) + (int64_t)plVar21 * 8);
                  lVar16 = lVar20;
                  if (lVar20 == local_78) {
                    local_78 = lVar20;
                    bVar4 = bVar5;
                    if ((!bVar5) && (lVar20 != 0)) {
                      FUN_00d50b00();
                      bVar4 = true;
                    }
                  }
                  else {
                    if (local_78 != 0) {
                      FUN_00d50b00();
                    }
                    bVar4 = true;
                    if ((bVar5) && (lVar20 != 0)) {
                      FUN_00d50b20();
                    }
                  }
                  bVar5 = bVar4;
                  pVar17 = (void*)lVar16;
                  pvVar15 = _pthread_getspecific(pVar17);
                  if (pvVar15 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_013de560();
                  if (local_70 == local_58) {
                    if ((!bVar9) && (local_70 != (int64_t *)0x0)) {
                      bVar9 = true;
                      if (local_68 != '\0') goto LAB_013471c7;
                      FUN_00d50b00();
LAB_01347186:
                      bVar9 = true;
                    }
                    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else if (local_68 == '\0') {
                    if (local_70 != (int64_t *)0x0) {
                      FUN_00d50b00();
                    }
                    if (bVar9) {
                      if (local_58 != (int64_t *)0x0) {
                        FUN_00d50b20();
                        local_58 = local_70;
                        goto LAB_01347186;
                      }
                      local_58 = local_70;
                      bVar9 = true;
                    }
                    else {
                      local_58 = local_70;
                      bVar9 = true;
                    }
                  }
                  else if ((bVar9) && (local_58 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                    local_58 = local_70;
                    bVar9 = true;
                  }
                  else {
                    local_58 = local_70;
                    bVar9 = true;
                  }
LAB_013471c7:
                  pvVar15 = _pthread_getspecific(pVar17);
                  if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
                    pVar17 = (void*)local_58;
                  }
                  iVar13 = FUN_014c2f20();
                  pvVar15 = _pthread_getspecific(pVar17);
                  if (pvVar15 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_014c2f80();
                  FUN_00e7b4e0();
                  cVar10 = FUN_00e7b530();
                  if (cVar10 != '\0') {
                    bVar23 = true;
                    bVar4 = true;
                    goto joined_r0x0134729e;
                  }
                  bVar7 = bVar23;
                  if (iVar13 == iVar11 + 1) {
                    bVar7 = true;
                  }
                  lVar16 = *(int64_t *)(this_ptr + 0x40);
                  bVar23 = bVar7;
                }
                plVar21 = (int64_t *)((int64_t)plVar21 + 1);
                lVar20 = local_78;
              } while ((int64_t)plVar21 < (int64_t)*(int *)(lVar16 + 0xc));
              bVar23 = false;
              bVar4 = false;
joined_r0x0134729e:
              if (!bVar7) goto LAB_013472cf;
            }
            if (!bVar4) goto LAB_01346bb0;
          }
          local_70 = local_48;
          local_68 = '\0';
          FUN_00d21140();
        }
LAB_01346bb0:
        plVar19 = (int64_t *)((int64_t)plVar19 + 1);
        puVar18 = *(void**)(this_ptr + 0x40);
      } while ((int64_t)plVar19 < (int64_t)*(int *)((int64_t)puVar18 + 0xc));
    }
    if (0 < *(int *)((int64_t)puVar14 + 0xc)) {
      plVar21 = (int64_t *)0x0;
      do {
        plVar19 = *(int64_t **)(puVar14[2] + (int64_t)plVar21 * 8);
        puVar18 = puVar14;
        if (local_48 == plVar19) {
          if ((!bVar8) && (local_48 != (int64_t *)0x0)) {
            bVar8 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (plVar19 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          if ((bVar8) && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
            bVar8 = true;
            local_48 = plVar19;
          }
          else {
            bVar8 = true;
            local_48 = plVar19;
          }
        }
        pVar17 = (void*)puVar18;
        pvVar15 = _pthread_getspecific(pVar17);
        if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          pVar17 = (void*)local_48;
        }
        FUN_013de560();
        if (local_70 == local_40) {
          if ((!bVar6) && (local_70 != (int64_t *)0x0)) {
            bVar6 = true;
            if (local_68 != '\0') goto LAB_0134754e;
            FUN_00d50b00();
LAB_0134750a:
            bVar6 = true;
          }
          if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else if (local_68 == '\0') {
          if (local_70 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          if (bVar6) {
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b20();
              local_40 = local_70;
              goto LAB_0134750a;
            }
            local_40 = local_70;
            bVar6 = true;
          }
          else {
            local_40 = local_70;
            bVar6 = true;
          }
        }
        else if ((bVar6) && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
          local_40 = local_70;
          bVar6 = true;
        }
        else {
          local_40 = local_70;
          bVar6 = true;
        }
LAB_0134754e:
        FUN_0134c610();
        pvVar15 = _pthread_getspecific(pVar17);
        if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          pVar17 = (void*)local_40;
        }
        FUN_014d20e0();
        pvVar15 = _pthread_getspecific(pVar17);
        if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          pVar17 = (void*)local_40;
        }
        FUN_014d23d0();
        FUN_01327e70();
        FUN_01327a80();
        FUN_01328e30();
        pvVar15 = _pthread_getspecific(pVar17);
        if (pvVar15 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bbe30();
        plVar21 = (int64_t *)((int64_t)plVar21 + 1);
        puVar18 = puVar14;
      } while ((int64_t)plVar21 < (int64_t)*(int *)((int64_t)puVar14 + 0xc));
    }
    local_108 = *param_2;
    local_100 = 0;
    FUN_0139d310(puVar18,&local_108);
    if (local_70 == (int64_t *)0x0) {
      bVar23 = true;
      local_70 = (int64_t *)0x0;
      dVar1 = MACH_HEADER.filetype;
    }
    else {
      if (local_68 == '\0') {
        FUN_00d50b00();
      }
      bVar23 = false;
      dVar1 = *(dword *)((int64_t)local_70 + 0xc);
    }
    if (0 < (int)dVar1) {
      lVar16 = 0;
      do {
        plVar21 = *(int64_t **)(local_70[2] + lVar16 * 8);
        if (local_48 == plVar21) {
          if ((!bVar8) && (local_48 != (int64_t *)0x0)) {
            bVar8 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (plVar21 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          if ((bVar8) && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
            bVar8 = true;
            local_48 = plVar21;
          }
          else {
            bVar8 = true;
            local_48 = plVar21;
          }
        }
        local_f8 = *arg1;
        local_f0 = 0;
        FUN_01399490();
        lVar16 = lVar16 + 1;
      } while (lVar16 < *(int *)((int64_t)local_70 + 0xc));
    }
    if (*param_2 != 0) {
      FUN_00d214d0();
    }
    if (!bVar23) {
      FUN_00d50b20();
    }
    uVar22 = CONCAT71((int7)((uint64_t)plVar21 >> 8),1);
    if (puVar14 == (void*)0x0) goto LAB_01346a88;
  }
  else {
LAB_01346a4d:
    uVar22 = 0;
    bVar5 = false;
    local_78 = 0;
    bVar8 = false;
    local_48 = (int64_t *)0x0;
    bVar9 = false;
    local_58 = (int64_t *)0x0;
    bVar6 = false;
    local_40 = (int64_t *)0x0;
  }
  FUN_00d50b20();
LAB_01346a88:
  if ((bVar5) && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar8) && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar9) && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar6) && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return uVar22 & 0xffffffff;
}



// ============================================================
// 01350430
// ============================================================
// Function: FUN_01350430
// Address: 01350430
// Size: 2985 bytes
// Class: MUAudioSourceDescription
// === MUAudioSourceDescription properties ===
//   MUAudioSourceDescriptionType _currentDescriptionType
//   bool            _isNewDocument
//   bool            _isDetectionInProgress
//   bool            _insertGroupDefinesPerformanceTempo
//   bool            _stretchInsertGroup
//   double          _stretchInsertStartTime
//   bool            _createdFromSoundfile
//   bool            _timelineWasModified
//   GNInt           _recordingsInProgress
//   bool            _isComparing
//   bool            _followsHostRegionSelection
//   bool            _zoomsToHostRegionSelection
//   GNInt           _shouldDisplayStructureProblemDialog
//   bool            _shouldDisplayUnknownArchiveDialog
//   bool            _shouldDisplayImportedArchiveDialog
//   bool            _useAutomaticDetection
//   bool            _percussiveSeparation
//   bool            _hasDistinctAttacks
//   bool            _findSibilantPointsAutomatically
//   bool            _isPreliminary
//   bool            _isTonalicOnly
//   bool            _allowAutomaticPolyphonicDetection
//   SInt64          _startSampleIndex
//   SInt64          _sampleCount
//   SInt64          _signalEndSampleOffset
//   SInt64          _signalStartSampleOffset
//   float           _pitchCenter
//   float           _energyClaimFactor
//   float           _detectionQuality
//   GNFraction      _idealStartPulse
//   ... +8 more


void FUN_01350430(void)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  void*puVar4;
  void*puVar5;
  int64_t lVar6;
  void *pvVar7;
  int64_t lVar8;
  void* pVar9;
  uint uVar10;
  int64_t *plVar11;
  int64_t *plVar12;
  int iVar13;
  int64_t this_ptr;
  int64_t *plVar14;
  code *pcVar15;
  uint uVar16;
  float fVar17;
  uint32_t uVar18;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  void*local_160;
  uint8_t local_158;
  int64_t *local_150;
  uint8_t local_148;
  uint64_t local_140;
  uint8_t local_138;
  int64_t *local_130;
  uint8_t local_128;
  int64_t *local_120;
  uint8_t local_118;
  uint64_t local_110;
  uint8_t local_108;
  void*local_100;
  uint8_t local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  void*local_c0;
  char local_b8;
  void*local_b0;
  char local_a8;
  int64_t *local_a0;
  void*local_98;
  void*local_90;
  code *local_88;
  int64_t *local_80;
  int64_t *local_78;
  char local_70;
  int64_t local_68;
  uint64_t local_60;
  int local_58;
  int64_t *local_50;
  char local_48;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  pcVar15 = g_02572370;
  (*g_02572370)();
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  (*pcVar15)();
  local_80 = (int64_t *)&g_02572358;
  local_98 = puVar5;
  if (*(int64_t *)(this_ptr + 0xe8) != 0) {
    local_70 = '\0';
    local_78 = (int64_t *)0x0;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_60._4_4_ = 0;
    local_68 = *(int64_t *)(this_ptr + 0xe8);
    while( true ) {
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar13 = -local_60._4_4_;
        }
        else {
          iVar13 = (int)local_60 - local_60._4_4_;
          local_60 = CONCAT44(local_60._4_4_,iVar13);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar13 = 0;
        }
        local_60 = CONCAT44(iVar13,(int)local_60);
      }
      lVar6 = (int64_t)(int)local_60;
      iVar13 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar13);
      if (*(int *)(local_68 + 0xc) <= iVar13) break;
      lVar8 = *(int64_t *)(local_68 + 0x10);
      plVar12 = *(int64_t **)(lVar8 + 8 + lVar6 * 8);
      local_78 = plVar12;
      pvVar7 = _pthread_getspecific((void*)lVar8);
      plVar11 = local_78;
      pVar9 = (void*)lVar8;
      if ((pvVar7 != (void *)0x0) && (lVar6 = FUN_00e8b990(), plVar12 = plVar11, lVar6 != 0)) {
        plVar12 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
      fVar17 = (float)(**(code **)(*plVar12 + 0x3e0))();
      plVar12 = local_78;
      if (*(float *)(this_ptr + 0x70) <= fVar17) {
        pvVar7 = _pthread_getspecific(pVar9);
        plVar11 = local_78;
        if ((pvVar7 != (void *)0x0) && (lVar6 = FUN_00e8b990(), plVar12 = plVar11, lVar6 != 0)) {
          plVar12 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
        fVar17 = (float)(**(code **)(*plVar12 + 0x3e0))();
        if (fVar17 <= *(float *)(this_ptr + 0x74)) {
          pvVar7 = _pthread_getspecific(pVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar17 = (float)FUN_014bc1c0();
          if (*(float *)(this_ptr + 0x78) <= fVar17) {
            local_50 = local_78;
            local_48 = '\0';
            cVar2 = FUN_00d24090();
            if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar2 == '\0') {
              local_50 = local_78;
              local_48 = '\0';
              FUN_00d21140();
              if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
        }
      }
    }
    FUN_0131c810();
  }
  if (*(int64_t *)(this_ptr + 0x40) != 0) {
    local_88 = pcVar15;
    local_70 = '\0';
    local_78 = (int64_t *)0x0;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_60._4_4_ = 0;
    local_68 = *(int64_t *)(this_ptr + 0x40);
    while( true ) {
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar13 = -local_60._4_4_;
        }
        else {
          iVar13 = (int)local_60 - local_60._4_4_;
          local_60 = CONCAT44(local_60._4_4_,iVar13);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar13 = 0;
        }
        local_60 = CONCAT44(iVar13,(int)local_60);
      }
      lVar6 = (int64_t)(int)local_60;
      iVar13 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar13);
      if (*(int *)(local_68 + 0xc) <= iVar13) break;
      lVar8 = *(int64_t *)(local_68 + 0x10);
      local_78 = *(int64_t **)(lVar8 + 8 + lVar6 * 8);
      pvVar7 = _pthread_getspecific((void*)lVar8);
      pVar9 = (void*)lVar8;
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      plVar12 = local_50;
      if ((((local_48 == '\0') && (local_50 != (int64_t *)0x0)) &&
          (FUN_00d50b00(), local_48 != '\0')) && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar2 = FUN_014bc070();
      if (((cVar2 == '\0') && (plVar12 != *(int64_t **)(this_ptr + 0x118))) &&
         ((plVar12 != *(int64_t **)(this_ptr + 0x128) &&
          (plVar12 != *(int64_t **)(this_ptr + 0x120))))) {
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar17 = (float)FUN_013de3b0();
        if (fVar17 < *(float *)(this_ptr + 0x70)) {
LAB_013508ab:
          bVar1 = false;
LAB_013508ae:
          local_50 = local_78;
          local_48 = '\0';
          bVar3 = FUN_00d24090();
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (bVar1) {
            bVar3 = bVar3 ^ 1;
            goto joined_r0x013508f6;
          }
          if (bVar3 != 0) goto LAB_01350a00;
        }
        else {
          pvVar7 = _pthread_getspecific(pVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar17 = (float)FUN_013de3b0();
          if (*(float *)(this_ptr + 0x74) <= fVar17 && fVar17 != *(float *)(this_ptr + 0x74))
          goto LAB_013508ab;
          pvVar7 = _pthread_getspecific(pVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de560();
          pvVar7 = _pthread_getspecific(pVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar17 = (float)FUN_014bc1c0();
          bVar1 = true;
          if (fVar17 < *(float *)(this_ptr + 0x78)) goto LAB_013508ae;
          bVar3 = 0;
joined_r0x013508f6:
          if ((local_e8 != '\0') && (local_f0 != 0)) {
            FUN_00d50b20();
          }
          if (bVar3 == 0) goto LAB_01350a00;
        }
        local_50 = local_78;
        local_48 = '\0';
        FUN_00d21140();
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_01350a00:
      if (plVar12 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_001150f0();
    pcVar15 = local_88;
  }
  plVar12 = local_80;
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_025683c0;
  (*g_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  local_88 = puVar5;
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = plVar12;
  uVar18 = (*pcVar15)();
  local_160 = local_98;
  local_158 = 0;
  local_90 = puVar5;
  uVar18 = FUN_013514e0(uVar18,&local_160);
  local_a0 = local_78;
  if ((local_70 == '\0') && (local_78 != (int64_t *)0x0)) {
    uVar18 = FUN_00d50b00();
  }
  uVar16 = *(uint *)((int64_t)puVar4 + 0xc);
  if (0 < (int)uVar16) {
    lVar6 = (uint64_t)uVar16 + 1;
    do {
      uVar16 = uVar16 - 1;
      plVar11 = (int64_t *)(uint64_t)uVar16;
      plVar12 = *(int64_t **)(puVar4[2] + (int64_t)plVar11 * 8);
      if (plVar12 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_80 = plVar12;
      pvVar7 = _pthread_getspecific((void*)plVar11);
      plVar12 = local_80;
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), plVar12 = local_80, lVar8 != 0)) {
        plVar11 = local_80;
        plVar12 = (int64_t *)local_80[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
      }
      pVar9 = (void*)plVar11;
      (**(code **)(*plVar12 + 0x380))();
      pvVar7 = _pthread_getspecific(pVar9);
      plVar12 = local_80;
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), plVar12 = local_80, lVar8 != 0)) {
        plVar12 = (int64_t *)local_80[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar12 + 0x388))();
      FUN_00e7b4e0();
      plVar12 = local_80;
      local_150 = local_80;
      local_148 = 0;
      local_140 = 0;
      local_138 = 0;
      local_e0 = 0;
      local_d8 = '\0';
      local_d0 = 0;
      local_c8 = '\0';
      uVar18 = MUAudioSourceDescription__activateItem(1,&local_150,&local_140,&local_e0);
      plVar11 = local_78;
      if ((local_70 == '\0') && (local_78 != (int64_t *)0x0)) {
        uVar18 = FUN_00d50b00();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      if (plVar11 != (int64_t *)0x0) {
        local_c0 = (void*)local_88;
        local_b8 = '\0';
        FUN_015b4ee0();
        if ((local_b8 != '\0') && (local_c0 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_70 = '\0';
        local_78 = plVar11;
        FUN_00d21140();
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        uVar18 = FUN_00d50b20();
      }
      if (plVar12 != (int64_t *)0x0) {
        uVar18 = FUN_00d50b20();
      }
      lVar6 = lVar6 + -1;
    } while (1 < lVar6);
  }
  uVar16 = *(uint *)((int64_t)local_98 + 0xc);
  if (0 < (int)uVar16) {
    lVar6 = (uint64_t)uVar16 + 1;
    do {
      uVar16 = uVar16 - 1;
      plVar12 = *(int64_t **)(local_98[2] + (uint64_t)uVar16 * 8);
      uVar10 = uVar16;
      if (plVar12 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      pvVar7 = _pthread_getspecific(uVar10);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      plVar11 = local_78;
      if ((((local_70 == '\0') && (local_78 != (int64_t *)0x0)) &&
          (FUN_00d50b00(), local_70 != '\0')) && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar7 = _pthread_getspecific(uVar10);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar2 = FUN_014bc070();
      uVar18 = extraout_XMM0_Da;
      if (cVar2 == '\0') {
        pvVar7 = _pthread_getspecific(uVar10);
        plVar14 = plVar11;
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar14 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar14 + 0x380))();
        pvVar7 = _pthread_getspecific(uVar10);
        plVar14 = plVar11;
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar14 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar14 + 0x388))();
        uVar18 = FUN_00e7b4e0();
        local_128 = 0;
        local_130 = plVar12;
        cVar2 = FUN_01353c30(uVar18,1);
        uVar18 = extraout_XMM0_Da_00;
        if (cVar2 != '\0') {
          local_b0 = (void*)local_88;
          local_a8 = '\0';
          FUN_015b4ee0();
          if ((local_a8 != '\0') && (local_b0 != (void*)0x0)) {
            FUN_00d50b20();
          }
          local_70 = '\0';
          local_78 = plVar12;
          uVar18 = FUN_00d21140();
          if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
            uVar18 = FUN_00d50b20();
          }
        }
      }
      if (plVar11 != (int64_t *)0x0) {
        uVar18 = FUN_00d50b20();
      }
      if (plVar12 != (int64_t *)0x0) {
        uVar18 = FUN_00d50b20();
      }
      lVar6 = lVar6 + -1;
    } while (1 < lVar6);
  }
  if (0xe < *(int *)((int64_t)local_88 + 0x18) + 7U) {
    local_120 = local_a0;
    local_118 = 0;
    local_110 = 0;
    local_108 = 0;
    uVar18 = FUN_013469e0(uVar18,&local_110);
    local_100 = (void*)local_88;
    local_f8 = 0;
    FUN_01353f80(uVar18,&local_100);
  }
  if (local_a0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_90 != (void*)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  FUN_00d50b20();
  if (puVar4 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 005b1e40
// ============================================================
// Function: FUN_005b1e40
// Address: 005b1e40
// Size: 5742 bytes
// Class: MUAudioSourceDescription
// String references:
//   "bool"
//   "GNUni"
//   "_documentControllers"
//   "MDNotificationObserver"
//   "GNList"
//   "GNPlugInHostDocument"
//   "GNData"
//   "GNOperationProgressObserver"
//   "GNDate"
//   "GNJob"
//   "GNJobCompletionController"
//   "MUTrack"
//   "MDDocument"
//   "MDPropertyObserver"
//   "GNHeartbeatHandler"
//   "GNPropertyObserver"
//   "MDTimeGridSetter"
//   "MUPerformanceRenderer"
//   "MUAudioSourceDescription"
//   "MDMetaDocumentController"
//   ... +25 more
// === MUAudioSourceDescription properties ===
//   MUAudioSourceDescriptionType _currentDescriptionType
//   bool            _isNewDocument
//   bool            _isDetectionInProgress
//   bool            _insertGroupDefinesPerformanceTempo
//   bool            _stretchInsertGroup
//   double          _stretchInsertStartTime
//   bool            _createdFromSoundfile
//   bool            _timelineWasModified
//   GNInt           _recordingsInProgress
//   bool            _isComparing
//   bool            _followsHostRegionSelection
//   bool            _zoomsToHostRegionSelection
//   GNInt           _shouldDisplayStructureProblemDialog
//   bool            _shouldDisplayUnknownArchiveDialog
//   bool            _shouldDisplayImportedArchiveDialog
//   bool            _useAutomaticDetection
//   bool            _percussiveSeparation
//   bool            _hasDistinctAttacks
//   bool            _findSibilantPointsAutomatically
//   bool            _isPreliminary
//   bool            _isTonalicOnly
//   bool            _allowAutomaticPolyphonicDetection
//   SInt64          _startSampleIndex
//   SInt64          _sampleCount
//   SInt64          _signalEndSampleOffset
//   SInt64          _signalStartSampleOffset
//   float           _pitchCenter
//   float           _energyClaimFactor
//   float           _detectionQuality
//   GNFraction      _idealStartPulse
//   ... +8 more


void FUN_005b1e40(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  void*puVar4;
  
  FUN_005b1650();
  *this_ptr = &g_024ff828;
  this_ptr[9] = &g_025768d0;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  this_ptr[10] = &g_024c8618;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  this_ptr[0xb] = &g_024c15b0;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_0250c388;
  this_ptr[9] = &g_0250c9e8;
  this_ptr[10] = &g_0250ca38;
  this_ptr[0xb] = &g_0250ca68;
  FUN_005b3d30();
  FUN_005b3e10();
  this_ptr[0xe] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b3ef0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDPlaybackController");
  }
  this_ptr[0xf] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b3fe0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDDocument");
  }
  this_ptr[0x10] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b40d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_documentControllers";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDMetaDocumentController");
  }
  this_ptr[0x11] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b41c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNPlugInHostDocument");
  }
  this_ptr[0x12] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b42b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUPerformanceRenderer");
  }
  puVar4 = this_ptr + 0x13;
  this_ptr[0x13] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b43a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MURenderParameter");
  }
  this_ptr[0x14] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b4490();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUDisplayPerformanceTimeMapper",param_3,param_4,puVar4);
  }
  this_ptr[0x15] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b4580();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDTimeGridSetter");
  }
  this_ptr[0x16] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b4670();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MURelativeTimeProgressor");
  }
  this_ptr[0x17] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b4760();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNDate");
  }
  this_ptr[0x18] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b4850();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNData");
  }
  *(void*)(this_ptr + 0x19) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_005b4940();
  FUN_005b4a20();
  *(void*)(this_ptr + 0x1c) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x1d] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b4b00();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  this_ptr[0x1e] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b4bf0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  this_ptr[0x1f] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b4ce0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  this_ptr[0x20] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b4dd0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  this_ptr[0x21] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b4ec0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDPropertyObserver");
  }
  this_ptr[0x22] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b4fb0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  this_ptr[0x23] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b50a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTrack");
  }
  this_ptr[0x24] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b5190();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNJob");
  }
  this_ptr[0x25] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b5280();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNJobCompletionController");
  }
  this_ptr[0x26] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b5370();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUJobCompletionLock");
  }
  this_ptr[0x27] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b5460();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUJobCompletionLock");
  }
  this_ptr[0x28] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b5550();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNDictionary");
  }
  this_ptr[0x29] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b5640();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDRecordingAmplitudeAnalyzer");
  }
  this_ptr[0x2a] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b5730();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNDictionary");
  }
  *(void*)(this_ptr + 0x2b) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x159) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x2c] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x2d) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x169) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x16c) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x2e) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x171) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x172) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x174) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x2f) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x179) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_005b5820();
  FUN_005b5900();
  FUN_005b59e0();
  this_ptr[0x33] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b5ac0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDViewSettings");
  }
  this_ptr[0x34] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b5bb0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDEditorDescription");
  }
  this_ptr[0x35] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b5ca0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNList");
  }
  this_ptr[0x36] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b5d90();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAudioSourceDescription");
  }
  return;
}



// ============================================================
// 014ceed0
// ============================================================
// Function: FUN_014ceed0
// Address: 014ceed0
// Size: 2760 bytes
// Class: MUAudioSourceDescription
// === MUAudioSourceDescription properties ===
//   MUAudioSourceDescriptionType _currentDescriptionType
//   bool            _isNewDocument
//   bool            _isDetectionInProgress
//   bool            _insertGroupDefinesPerformanceTempo
//   bool            _stretchInsertGroup
//   double          _stretchInsertStartTime
//   bool            _createdFromSoundfile
//   bool            _timelineWasModified
//   GNInt           _recordingsInProgress
//   bool            _isComparing
//   bool            _followsHostRegionSelection
//   bool            _zoomsToHostRegionSelection
//   GNInt           _shouldDisplayStructureProblemDialog
//   bool            _shouldDisplayUnknownArchiveDialog
//   bool            _shouldDisplayImportedArchiveDialog
//   bool            _useAutomaticDetection
//   bool            _percussiveSeparation
//   bool            _hasDistinctAttacks
//   bool            _findSibilantPointsAutomatically
//   bool            _isPreliminary
//   bool            _isTonalicOnly
//   bool            _allowAutomaticPolyphonicDetection
//   SInt64          _startSampleIndex
//   SInt64          _sampleCount
//   SInt64          _signalEndSampleOffset
//   SInt64          _signalStartSampleOffset
//   float           _pitchCenter
//   float           _energyClaimFactor
//   float           _detectionQuality
//   GNFraction      _idealStartPulse
//   ... +8 more


void FUN_014ceed0(void* param_1)

{
  float *pfVar1;
  float fVar2;
  uint uVar3;
  void*puVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  int64_t lVar15;
  double dVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  void *pvVar20;
  uint64_t uVar21;
  int64_t lVar22;
  void*puVar23;
  void*puVar24;
  void* pVar25;
  uint64_t uVar26;
  uint64_t uVar27;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t uVar28;
  int iVar29;
  uint64_t uVar30;
  uint32_t uVar31;
  float fVar32;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  int64_t local_38;
  
  (**(code **)(*this_ptr + 0x378))();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (local_50 != 0) {
    (**(code **)(*this_ptr + 0x378))();
    lVar22 = *arg1;
    if (lVar22 == local_50) {
      if (((char)arg1[1] != '\0') || (local_50 == 0)) goto LAB_014cefab;
      if (local_48 == '\0') {
        FUN_00d50b00();
        goto LAB_014cefa6;
      }
    }
    else {
      lVar15 = arg1[1];
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        *arg1 = local_50;
        if (((char)lVar15 != '\0') && (lVar22 != 0)) {
          FUN_00d50b20();
        }
LAB_014cefa6:
        *(void*)(arg1 + 1) = 1;
LAB_014cefab:
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_014cefbf;
      }
      *arg1 = local_50;
      if (((char)lVar15 != '\0') && (lVar22 != 0)) {
        FUN_00d50b20();
      }
    }
    *(void*)(arg1 + 1) = 1;
  }
LAB_014cefbf:
  if (*(int *)(this_ptr[0x21] + 0xc) == 0) {
    return;
  }
  pvVar20 = _pthread_getspecific(param_1);
  if (pvVar20 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d790();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  dVar16 = g_0238fee8;
  uVar3 = *(uint *)(local_50 + 0x30);
  uVar30 = (uint64_t)(int)uVar3;
  dVar5 = g_0238fee8 / *(double *)(local_50 + 0x38);
  uVar21 = (**(code **)(*this_ptr + 0x388))();
  uVar26 = (uVar21 | uVar30) >> 0x20;
  if (uVar26 == 0) {
    iVar19 = (int)((uVar21 & 0xffffffff) / (uint64_t)uVar3);
    uVar21 = (uVar21 & 0xffffffff) % (uint64_t)uVar3;
  }
  else {
    iVar19 = (int)((int64_t)uVar21 / (int64_t)uVar30);
    uVar21 = (int64_t)uVar21 % (int64_t)uVar30;
  }
  lVar22 = (**(code **)(*this_ptr + 0x380))(uVar26,uVar21);
  uVar18 = iVar19 + 2;
  FUN_00c8e690();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  iVar29 = 0;
  if (iVar19 < -1) {
    bVar13 = false;
    local_38 = 0;
    bVar12 = false;
    local_40 = 0;
  }
  else {
    uVar21 = 1;
    if (1 < (int)uVar18) {
      uVar21 = (uint64_t)uVar18;
    }
    uVar26 = 0;
    local_40 = 0;
    bVar12 = false;
    local_38 = 0;
    bVar13 = false;
    do {
      dVar6 = (double)(iVar29 + lVar22) * (dVar16 / (double)(int)uVar3);
      uVar31 = FUN_014c36d0(iVar29,(int)dVar6);
      if (local_50 == local_40) {
        if ((bVar12) || (local_50 == 0)) {
          if ((local_48 != '\0') && (local_50 != 0)) {
            uVar31 = FUN_00d50b20();
          }
        }
        else {
          bVar12 = true;
          if (local_48 == '\0') {
            uVar31 = FUN_00d50b00();
          }
        }
      }
      else if (local_48 == '\0') {
        if (local_50 != 0) {
          uVar31 = FUN_00d50b00();
        }
        if ((!bVar12) || (local_40 == 0)) goto LAB_014cf280;
        uVar31 = FUN_00d50b20();
        local_40 = local_50;
        bVar12 = true;
      }
      else if ((bVar12) && (local_40 != 0)) {
        uVar31 = FUN_00d50b20();
        local_40 = local_50;
        bVar12 = true;
      }
      else {
LAB_014cf280:
        local_40 = local_50;
        bVar12 = true;
      }
      FUN_014c36d0(uVar31,(int)dVar6 + 1);
      if (local_50 == local_38) {
        lVar15 = local_38;
        if ((bVar13) || (local_50 == 0)) {
          bVar17 = bVar13;
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar17 = true;
          if (local_48 == '\0') {
            FUN_00d50b00();
          }
        }
      }
      else if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        lVar15 = local_50;
        bVar17 = true;
        if (bVar13) {
          if (local_38 == 0) goto LAB_014cf370;
          FUN_00d50b20();
          lVar15 = local_50;
        }
      }
      else if ((bVar13) && (local_38 != 0)) {
        FUN_00d50b20();
        lVar15 = local_50;
        bVar17 = true;
      }
      else {
LAB_014cf370:
        lVar15 = local_50;
        bVar17 = true;
      }
      bVar13 = bVar17;
      local_38 = lVar15;
      fVar32 = 0.0;
      if ((((local_40 != 0) && (fVar32 = 0.0, local_38 != 0)) &&
          (fVar2 = *(float *)(local_40 + 0x10), !NAN(fVar2))) && (!NAN(*(float *)(local_38 + 0x10)))
         ) {
        fVar32 = (*(float *)(local_38 + 0x10) - fVar2) * ((float)dVar6 - (float)(int)dVar6) + fVar2;
      }
      *(float *)(*(int64_t *)(local_50 + 0x10) + uVar26 * 4) = fVar32;
      uVar26 = uVar26 + 1;
      iVar29 = iVar29 + uVar3;
    } while (uVar21 != uVar26);
  }
  puVar23 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar23 = &g_025f0d98;
  puVar23[2] = 0;
  puVar23[3] = 0;
  puVar23[4] = 0;
  puVar23[5] = 0;
  puVar23[6] = 0;
  puVar23[7] = 0;
  (*g_025f0db0)();
  FUN_015c1480(g_0241c3ec);
  fVar11 = _UNK_024114ac;
  fVar10 = _UNK_024114a8;
  fVar2 = _UNK_024114a4;
  uVar14 = g_023945e0;
  fVar32 = g_0239426c;
  if (-2 < iVar19) {
    lVar22 = *(int64_t *)(local_50 + 0x10);
    uVar21 = 1;
    if (1 < (int)uVar18) {
      uVar21 = (uint64_t)uVar18;
    }
    if ((uint)uVar21 < 8) {
      uVar26 = 0;
    }
    else {
      uVar26 = (uint64_t)((uint)uVar21 & 0x7ffffff8);
      uVar27 = 0;
      do {
        pfVar1 = (float *)(lVar22 + uVar27 * 4);
        fVar7 = pfVar1[1];
        fVar8 = pfVar1[2];
        fVar9 = pfVar1[3];
        if (*pfVar1 < fVar32) {
          *(uint *)(lVar22 + uVar27 * 4) = (uint)*pfVar1 ^ uVar14;
        }
        if (fVar7 < fVar2) {
          *(uint *)(lVar22 + 4 + uVar27 * 4) = (uint)fVar7 ^ uVar14;
        }
        if (fVar8 < fVar10) {
          *(uint *)(lVar22 + 8 + uVar27 * 4) = (uint)fVar8 ^ uVar14;
        }
        if (fVar9 < fVar11) {
          *(uint *)(lVar22 + 0xc + uVar27 * 4) = (uint)fVar9 ^ uVar14;
        }
        pfVar1 = (float *)(lVar22 + 0x10 + uVar27 * 4);
        fVar7 = pfVar1[1];
        fVar8 = pfVar1[2];
        fVar9 = pfVar1[3];
        if (*pfVar1 < fVar32) {
          *(uint *)(lVar22 + 0x10 + uVar27 * 4) = (uint)*pfVar1 ^ uVar14;
        }
        if (fVar7 < fVar2) {
          *(uint *)(lVar22 + 0x14 + uVar27 * 4) = (uint)fVar7 ^ uVar14;
        }
        if (fVar8 < fVar10) {
          *(uint *)(lVar22 + 0x18 + uVar27 * 4) = (uint)fVar8 ^ uVar14;
        }
        if (fVar9 < fVar11) {
          *(uint *)(lVar22 + 0x1c + uVar27 * 4) = (uint)fVar9 ^ uVar14;
        }
        uVar27 = uVar27 + 8;
      } while (uVar26 != uVar27);
      uVar14 = g_023945e0;
      fVar32 = g_0239426c;
      if (uVar26 == uVar21) goto LAB_014cf61b;
    }
    do {
      fVar2 = *(float *)(lVar22 + uVar26 * 4);
      if (fVar2 < fVar32) {
        *(uint *)(lVar22 + uVar26 * 4) = (uint)fVar2 ^ uVar14;
      }
      uVar26 = uVar26 + 1;
    } while (uVar21 != uVar26);
  }
LAB_014cf61b:
  uVar26 = (**(code **)(*this_ptr + 0x398))();
  uVar14 = g_023945e0;
  uVar21 = (uVar26 | uVar30) >> 0x20;
  if (uVar21 == 0) {
    iVar19 = (int)((uVar26 & 0xffffffff) / (uint64_t)uVar3);
    uVar27 = (uVar26 & 0xffffffff) % (uint64_t)uVar3;
  }
  else {
    uVar27 = (int64_t)uVar26 % (int64_t)uVar30;
    iVar19 = (int)((int64_t)uVar26 / (int64_t)uVar30);
  }
  if (iVar19 < (int)uVar18) {
    uVar21 = *(uint64_t *)(local_50 + 0x10);
    uVar27 = (uint64_t)iVar19;
    uVar26 = (int64_t)(int)uVar18 - uVar27;
    uVar3 = g_023945e0;
    if (7 < uVar26) {
      uVar28 = uVar26 & 0xfffffffffffffff8;
      uVar27 = uVar27 + uVar28;
      lVar22 = uVar21 + (int64_t)iVar19 * 4;
      uVar30 = 0;
      do {
        pfVar1 = (float *)(lVar22 + uVar30 * 4);
        fVar32 = pfVar1[1];
        fVar2 = pfVar1[2];
        fVar10 = pfVar1[3];
        if (0.0 < *pfVar1) {
          *(uint *)(lVar22 + uVar30 * 4) = (uint)*pfVar1 ^ uVar14;
        }
        if (fVar32 <= 0.0) {
          if (fVar2 > 0.0) goto LAB_014cf75c;
LAB_014cf71d:
          if (0.0 < fVar10) goto LAB_014cf729;
LAB_014cf778:
          pfVar1 = (float *)(lVar22 + 0x10 + uVar30 * 4);
          fVar32 = *pfVar1;
          fVar2 = pfVar1[1];
          fVar10 = pfVar1[2];
          fVar11 = pfVar1[3];
        }
        else {
          *(uint *)(lVar22 + 4 + uVar30 * 4) = (uint)fVar32 ^ uVar14;
          if (fVar2 <= 0.0) goto LAB_014cf71d;
LAB_014cf75c:
          *(uint *)(lVar22 + 8 + uVar30 * 4) = (uint)fVar2 ^ uVar14;
          if (0.0 >= fVar10) goto LAB_014cf778;
LAB_014cf729:
          *(uint *)(lVar22 + 0xc + uVar30 * 4) = (uint)fVar10 ^ uVar14;
          pfVar1 = (float *)(lVar22 + 0x10 + uVar30 * 4);
          fVar32 = *pfVar1;
          fVar2 = pfVar1[1];
          fVar10 = pfVar1[2];
          fVar11 = pfVar1[3];
        }
        if (0.0 < fVar32) {
          *(uint *)(lVar22 + 0x10 + uVar30 * 4) = (uint)fVar32 ^ uVar14;
        }
        if (0.0 < fVar2) {
          *(uint *)(lVar22 + 0x14 + uVar30 * 4) = (uint)fVar2 ^ uVar14;
        }
        if (0.0 < fVar10) {
          *(uint *)(lVar22 + 0x18 + uVar30 * 4) = (uint)fVar10 ^ uVar14;
        }
        if (0.0 < fVar11) {
          *(uint *)(lVar22 + 0x1c + uVar30 * 4) = (uint)fVar11 ^ uVar14;
        }
        uVar30 = uVar30 + 8;
      } while (uVar28 != uVar30);
      uVar3 = g_023945e0;
      if (uVar26 == uVar28) goto LAB_014cf817;
    }
    do {
      fVar32 = *(float *)(uVar21 + uVar27 * 4);
      if (0.0 < fVar32) {
        *(uint *)(uVar21 + uVar27 * 4) = (uint)fVar32 ^ uVar3;
      }
      uVar27 = uVar27 + 1;
    } while ((int64_t)(int)uVar18 != uVar27);
  }
LAB_014cf817:
  puVar24 = (void*)FUN_00e8fc40(uVar21,uVar27);
  FUN_00d4ff40();
  *(void*)(puVar24 + 7) = 0;
  *(void*)((int64_t)puVar24 + 0x3c) = 0;
  *(void*)(puVar24 + 8) = 0;
  pVar25 = 0x25dc9e8;
  *puVar24 = &g_025dc9e8;
  puVar24[9] = 0;
  puVar24[10] = 0;
  (*g_025dca00)();
  pvVar20 = _pthread_getspecific(pVar25);
  if (pvVar20 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb950(SUB84((double)(float)dVar5,0));
  pvVar20 = _pthread_getspecific(pVar25);
  if (pvVar20 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb890();
  if ((void*)this_ptr[9] != puVar24) {
    FUN_00d64850();
    puVar4 = (void*)this_ptr[9];
    if (puVar4 != puVar24) {
      FUN_00d50b00();
      this_ptr[9] = (int64_t)puVar24;
      if (puVar4 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  FUN_00d50b20();
  if (puVar23 != (void*)0x0) {
    FUN_00d50b20();
  }
  if ((bVar13) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar12) && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_50 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01355320
// ============================================================
// Function: FUN_01355320
// Address: 01355320
// Size: 3734 bytes
// Class: MUAudioSourceDescription
// === MUAudioSourceDescription properties ===
//   MUAudioSourceDescriptionType _currentDescriptionType
//   bool            _isNewDocument
//   bool            _isDetectionInProgress
//   bool            _insertGroupDefinesPerformanceTempo
//   bool            _stretchInsertGroup
//   double          _stretchInsertStartTime
//   bool            _createdFromSoundfile
//   bool            _timelineWasModified
//   GNInt           _recordingsInProgress
//   bool            _isComparing
//   bool            _followsHostRegionSelection
//   bool            _zoomsToHostRegionSelection
//   GNInt           _shouldDisplayStructureProblemDialog
//   bool            _shouldDisplayUnknownArchiveDialog
//   bool            _shouldDisplayImportedArchiveDialog
//   bool            _useAutomaticDetection
//   bool            _percussiveSeparation
//   bool            _hasDistinctAttacks
//   bool            _findSibilantPointsAutomatically
//   bool            _isPreliminary
//   bool            _isTonalicOnly
//   bool            _allowAutomaticPolyphonicDetection
//   SInt64          _startSampleIndex
//   SInt64          _sampleCount
//   SInt64          _signalEndSampleOffset
//   SInt64          _signalStartSampleOffset
//   float           _pitchCenter
//   float           _energyClaimFactor
//   float           _detectionQuality
//   GNFraction      _idealStartPulse
//   ... +8 more


void FUN_01355320(byte param_1,int64_t *param_2,uint8_t param_3)

{
  int64_t *plVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  void*puVar5;
  int64_t lVar6;
  int64_t lVar7;
  void *pvVar8;
  void* pVar9;
  void* pVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t *plVar13;
  void*this_ptr;
  uint64_t uVar14;
  double dVar15;
  double dVar16;
  int64_t local_90;
  char local_88;
  int local_78;
  int64_t local_68;
  int local_50;
  int64_t local_40;
  char local_38;
  
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  (*g_02572370)();
  lVar6 = *param_2;
  if (0 < *(int *)(lVar6 + 0xc)) {
    lVar12 = 0;
    do {
      lVar6 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + lVar12 * 8);
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      bVar3 = FUN_00d23d70();
      FUN_01366a10();
      if (lVar6 == 0) {
        bVar2 = true;
        local_68 = 0;
      }
      else {
        FUN_00d50b00();
        local_68 = 0;
        local_50 = -1;
        if (bVar3 == 0) {
          while( true ) {
            lVar7 = (int64_t)local_50;
            local_50 = local_50 + 1;
            if (*(int *)(lVar6 + 0xc) <= local_50) break;
            local_68 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + 8 + lVar7 * 8);
            cVar4 = FUN_0133aef0();
            if (cVar4 != '\0') {
              local_88 = '\0';
              FUN_00d235a0();
              local_90 = local_68;
            }
          }
        }
        else {
          while( true ) {
            lVar7 = (int64_t)local_50;
            local_50 = local_50 + 1;
            if (*(int *)(lVar6 + 0xc) <= local_50) break;
            local_68 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + 8 + lVar7 * 8);
            cVar4 = FUN_01366cc0(param_3,0);
            if ((cVar4 == '\0') && (cVar4 = FUN_0133aef0(), cVar4 != '\0')) {
              local_88 = '\0';
              FUN_00d235a0();
              local_90 = local_68;
            }
          }
        }
        FUN_001150f0();
        bVar2 = false;
      }
      if (((bVar3 & param_1) == 1) && (FUN_01367040(), local_68 != 0)) {
        FUN_00d50b00();
        local_50 = -1;
        while( true ) {
          lVar7 = (int64_t)local_50;
          local_50 = local_50 + 1;
          if (*(int *)(local_68 + 0xc) <= local_50) break;
          lVar11 = *(int64_t *)(local_68 + 0x10);
          lVar7 = *(int64_t *)(lVar11 + 8 + lVar7 * 8);
          pvVar8 = _pthread_getspecific((void*)lVar11);
          pVar9 = (void*)lVar11;
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar14 = FUN_013dfdd0();
          if (local_88 == '\0') {
            if (local_90 != 0) {
              FUN_00d50b00();
              goto LAB_01355850;
            }
LAB_01355920:
            local_38 = '\0';
            FUN_01346520(uVar14,1);
            local_88 = '\0';
            FUN_00d235a0();
            local_90 = lVar7;
            local_40 = lVar7;
          }
          else {
            if (local_90 == 0) goto LAB_01355920;
LAB_01355850:
            pvVar8 = _pthread_getspecific(pVar9);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dd6a0();
            if ((local_88 == '\0') && (local_90 != 0)) {
              FUN_00d50b00();
            }
            if ((local_90 == 0) || (local_90 == lVar6)) {
              if (local_90 != 0) goto LAB_01355755;
            }
            else {
              pvVar8 = _pthread_getspecific(pVar9);
              if (pvVar8 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar15 = (double)FUN_014bb3e0();
              pvVar8 = _pthread_getspecific(pVar9);
              if (pvVar8 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar16 = (double)FUN_014bb3e0();
              if (dVar15 < dVar16) {
                FUN_0133aef0();
                local_38 = '\0';
                FUN_01346520(lVar6,1);
                local_88 = '\0';
                FUN_00d235a0();
                local_90 = lVar7;
                local_40 = lVar7;
              }
LAB_01355755:
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
        }
        FUN_001150f0();
        FUN_00d50b20();
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      lVar12 = lVar12 + 1;
      lVar6 = *param_2;
    } while (lVar12 < *(int *)(lVar6 + 0xc));
  }
  local_50 = -1;
LAB_01355b1b:
  do {
    lVar12 = local_90;
    lVar7 = (int64_t)local_50;
    local_50 = local_50 + 1;
    if (*(int *)(lVar6 + 0xc) <= local_50) {
      FUN_01a02100();
      if (puVar5 != (void*)0x0) {
        if (0 < *(int *)((int64_t)puVar5 + 0xc)) {
          pVar9 = 0;
          do {
            lVar6 = local_90;
            pVar10 = pVar9;
            pvVar8 = _pthread_getspecific(pVar9);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dfef0();
            pvVar8 = _pthread_getspecific(pVar10);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013e0cc0();
            pvVar8 = _pthread_getspecific(pVar10);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dfcb0();
            pvVar8 = _pthread_getspecific(pVar10);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dd790();
            if (local_88 == '\0') {
              if (local_90 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_88 = '\0';
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if (local_90 != 0) {
              local_88 = '\0';
              local_90 = 0;
              local_78 = -1;
              while( true ) {
                lVar12 = (int64_t)local_78;
                local_78 = local_78 + 1;
                if (*(int *)(lVar6 + 0xc) <= local_78) break;
                lVar7 = *(int64_t *)(lVar6 + 0x10);
                local_90 = *(int64_t *)(lVar7 + 8 + lVar12 * 8);
                pvVar8 = _pthread_getspecific((void*)lVar7);
                pVar10 = (void*)lVar7;
                if (pvVar8 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_011ef8d0();
                if ((local_38 == '\0') && (local_40 != 0)) {
                  FUN_00d50b00();
                }
                pvVar8 = _pthread_getspecific(pVar10);
                if (pvVar8 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0126f610();
                pvVar8 = _pthread_getspecific(pVar10);
                if (pvVar8 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125a5f0();
                FUN_0039e8b0();
                if (local_38 == '\0') {
                  if (local_40 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_38 = '\0';
                }
                FUN_00e7bdb0();
                FUN_01287c80();
                if (local_40 != 0) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != 0)) {
                  FUN_00d50b20();
                }
                if (local_40 != 0) {
                  FUN_00d50b20();
                }
              }
              FUN_0015edf0();
              FUN_00d50b20();
            }
            pVar9 = pVar9 + 1;
          } while ((int)pVar9 < *(int *)((int64_t)puVar5 + 0xc));
        }
        FUN_001150f0();
      }
      *this_ptr = puVar5;
      *(void*)(this_ptr + 1) = 1;
      return;
    }
    plVar1 = *(int64_t **)(*(int64_t *)(lVar6 + 0x10) + 8 + lVar7 * 8);
    FUN_01366a10();
    if (local_88 == '\0') goto LAB_01355bb0;
  } while (local_90 == 0);
  goto LAB_01355bc4;
LAB_01355bb0:
  if (local_90 != 0) {
    FUN_00d50b00();
LAB_01355bc4:
    local_88 = '\0';
    local_90 = 0;
    local_78 = -1;
    while( true ) {
      lVar7 = (int64_t)local_78;
      local_78 = local_78 + 1;
      if (*(int *)(lVar12 + 0xc) <= local_78) break;
      lVar11 = *(int64_t *)(lVar12 + 0x10);
      local_90 = *(int64_t *)(lVar11 + 8 + lVar7 * 8);
      cVar4 = FUN_00d23d70();
      pVar9 = (void*)lVar11;
      if (cVar4 == '\0') {
        pvVar8 = _pthread_getspecific(pVar9);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013de560();
        if (local_90 != 0) {
          FUN_00d50b00();
        }
        pvVar8 = _pthread_getspecific(pVar9);
        plVar13 = plVar1;
        if ((pvVar8 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          plVar13 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar13 + 0x3a0))();
        pvVar8 = _pthread_getspecific(pVar9);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013de650();
        pvVar8 = _pthread_getspecific(pVar9);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bcf30();
        FUN_00d21140();
        if (local_90 != 0) {
          FUN_00d50b20();
        }
      }
      local_38 = '\0';
      local_40 = local_90;
    }
    FUN_001150f0();
    FUN_00d50b20();
  }
  goto LAB_01355b1b;
}



// ============================================================
// 01348960
// ============================================================
// Function: FUN_01348960
// Address: 01348960
// Size: 2714 bytes
// Class: MUAudioSourceDescription
// === MUAudioSourceDescription properties ===
//   MUAudioSourceDescriptionType _currentDescriptionType
//   bool            _isNewDocument
//   bool            _isDetectionInProgress
//   bool            _insertGroupDefinesPerformanceTempo
//   bool            _stretchInsertGroup
//   double          _stretchInsertStartTime
//   bool            _createdFromSoundfile
//   bool            _timelineWasModified
//   GNInt           _recordingsInProgress
//   bool            _isComparing
//   bool            _followsHostRegionSelection
//   bool            _zoomsToHostRegionSelection
//   GNInt           _shouldDisplayStructureProblemDialog
//   bool            _shouldDisplayUnknownArchiveDialog
//   bool            _shouldDisplayImportedArchiveDialog
//   bool            _useAutomaticDetection
//   bool            _percussiveSeparation
//   bool            _hasDistinctAttacks
//   bool            _findSibilantPointsAutomatically
//   bool            _isPreliminary
//   bool            _isTonalicOnly
//   bool            _allowAutomaticPolyphonicDetection
//   SInt64          _startSampleIndex
//   SInt64          _sampleCount
//   SInt64          _signalEndSampleOffset
//   SInt64          _signalStartSampleOffset
//   float           _pitchCenter
//   float           _energyClaimFactor
//   float           _detectionQuality
//   GNFraction      _idealStartPulse
//   ... +8 more


void FUN_01348960(float param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int64_t lVar4;
  void* pVar5;
  int64_t in_RCX;
  char unaff_SIL;
  int iVar6;
  bool bVar7;
  float fVar8;
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
  int64_t local_a8;
  char local_a0;
  int64_t local_80;
  char local_78;
  int local_64;
  int64_t local_60;
  char local_58;
  int64_t local_40;
  char local_38;
  
  pvVar3 = _pthread_getspecific((void*)in_RCX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013de560();
  if ((local_a0 == '\0') && (local_a8 != 0)) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific((void*)in_RCX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014ed740();
  pvVar3 = _pthread_getspecific((void*)in_RCX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dfcb0();
  pvVar3 = _pthread_getspecific((void*)in_RCX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dd790();
  if ((local_a0 == '\0') && (local_a8 != 0)) {
    FUN_00d50b00();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pVar5 = (void*)in_RCX;
  if (local_a8 != 0) {
    if (*(int *)(local_a8 + 0xc) < 1) {
      local_64 = 0x7fffffff;
    }
    else {
      local_64 = 0x7fffffff;
      iVar6 = 0;
      do {
        pvVar3 = _pthread_getspecific((void*)in_RCX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011ef8d0();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        pvVar3 = _pthread_getspecific((void*)in_RCX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar8 = (float)FUN_0125a2c0();
        pvVar3 = _pthread_getspecific((void*)in_RCX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012595a0(fVar8 + param_1 + g_02394254);
        pvVar3 = _pthread_getspecific((void*)in_RCX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012595a0(fVar8 + param_1);
        if (unaff_SIL != '\0') {
          pvVar3 = _pthread_getspecific((void*)in_RCX);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          if (local_40 == 0) {
            bVar7 = false;
          }
          else {
            pvVar3 = _pthread_getspecific((void*)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            pvVar3 = _pthread_getspecific((void*)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e7fb0();
            if (local_60 == 0) {
              bVar7 = false;
            }
            else {
              pvVar3 = _pthread_getspecific((void*)in_RCX);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01266fe0();
              pvVar3 = _pthread_getspecific((void*)in_RCX);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012e7fb0();
              pvVar3 = _pthread_getspecific((void*)in_RCX);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0150eb60();
              if (local_108 == 0) {
                bVar7 = false;
              }
              else {
                pvVar3 = _pthread_getspecific((void*)in_RCX);
                if (pvVar3 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125e930();
                if (local_f8 == 0) {
                  bVar7 = false;
                }
                else {
                  pvVar3 = _pthread_getspecific((void*)in_RCX);
                  if (pvVar3 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0125e930();
                  pvVar3 = _pthread_getspecific((void*)in_RCX);
                  if (pvVar3 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0152ebe0();
                  bVar7 = local_118 != 0;
                  if ((local_110 != '\0') && (local_118 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_c0 != '\0') && (local_c8 != 0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_f0 != '\0') && (local_f8 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_100 != '\0') && (local_108 != 0)) {
                FUN_00d50b20();
              }
              if ((local_e0 != '\0') && (local_e8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_d0 != '\0') && (local_d8 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            if ((local_78 != '\0') && (local_80 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (bVar7) {
            pvVar3 = _pthread_getspecific((void*)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            pvVar3 = _pthread_getspecific((void*)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e7fb0();
            pvVar3 = _pthread_getspecific((void*)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0150eb60();
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            if ((local_78 != '\0') && (local_80 != 0)) {
              FUN_00d50b20();
            }
            pvVar3 = _pthread_getspecific((void*)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01822e80();
            if ((local_38 == '\0') && (local_40 != 0)) {
              FUN_00d50b00();
            }
            pvVar3 = _pthread_getspecific((void*)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e930();
            pvVar3 = _pthread_getspecific((void*)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152ebe0();
            pvVar3 = _pthread_getspecific((void*)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            iVar1 = FUN_01507f00();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            pvVar3 = _pthread_getspecific((void*)in_RCX);
            if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
              in_RCX = local_40;
            }
            pvVar3 = _pthread_getspecific((void*)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125dfa0();
            iVar2 = FUN_01773f20();
            if (local_64 == 0x7fffffff) {
              local_64 = iVar1 - iVar2;
            }
            if (local_40 != 0) {
              FUN_00d50b20();
              FUN_00d50b20();
            }
          }
        }
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        pVar5 = (void*)in_RCX;
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(local_a8 + 0xc));
    }
    FUN_0015edf0();
    FUN_00d50b20();
    if (local_64 != 0x7fffffff) {
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014ed740();
    }
  }
  if (local_a8 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 014ce440
// ============================================================
// Function: FUN_014ce440
// Address: 014ce440
// Size: 1975 bytes
// Class: MUAudioSourceDescription
// === MUAudioSourceDescription properties ===
//   MUAudioSourceDescriptionType _currentDescriptionType
//   bool            _isNewDocument
//   bool            _isDetectionInProgress
//   bool            _insertGroupDefinesPerformanceTempo
//   bool            _stretchInsertGroup
//   double          _stretchInsertStartTime
//   bool            _createdFromSoundfile
//   bool            _timelineWasModified
//   GNInt           _recordingsInProgress
//   bool            _isComparing
//   bool            _followsHostRegionSelection
//   bool            _zoomsToHostRegionSelection
//   GNInt           _shouldDisplayStructureProblemDialog
//   bool            _shouldDisplayUnknownArchiveDialog
//   bool            _shouldDisplayImportedArchiveDialog
//   bool            _useAutomaticDetection
//   bool            _percussiveSeparation
//   bool            _hasDistinctAttacks
//   bool            _findSibilantPointsAutomatically
//   bool            _isPreliminary
//   bool            _isTonalicOnly
//   bool            _allowAutomaticPolyphonicDetection
//   SInt64          _startSampleIndex
//   SInt64          _sampleCount
//   SInt64          _signalEndSampleOffset
//   SInt64          _signalStartSampleOffset
//   float           _pitchCenter
//   float           _energyClaimFactor
//   float           _detectionQuality
//   GNFraction      _idealStartPulse
//   ... +8 more


void FUN_014ce440(void* param_1)

{
  double dVar1;
  uint uVar2;
  void*puVar3;
  uint8_t auVar4 [12];
  uint8_t auVar5 [16];
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  void *pvVar10;
  uint64_t uVar11;
  int64_t lVar12;
  uint64_t uVar13;
  void*puVar14;
  void* pVar15;
  uint64_t uVar16;
  int64_t *plVar17;
  int64_t *arg1;
  int64_t *this_ptr;
  int iVar18;
  float fVar19;
  double dVar20;
  uint64_t uVar21;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar22 [16];
  double dVar23;
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  int64_t *local_38;
  uint64_t extraout_XMM0_Qb_00;
  
  (**(code **)(*this_ptr + 0x378))();
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_50 == (int64_t *)0x0) goto LAB_014ce52f;
  (**(code **)(*this_ptr + 0x378))();
  plVar17 = (int64_t *)*arg1;
  if (plVar17 == local_50) {
    if (((char)arg1[1] != '\0') || (local_50 == (int64_t *)0x0)) goto LAB_014ce51b;
    if (local_48 == '\0') {
      FUN_00d50b00();
      goto LAB_014ce516;
    }
  }
  else {
    lVar12 = arg1[1];
    if (local_48 == '\0') {
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *arg1 = (int64_t)local_50;
      if (((char)lVar12 != '\0') && (plVar17 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_014ce516:
      *(void*)(arg1 + 1) = 1;
LAB_014ce51b:
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_014ce52f;
    }
    *arg1 = (int64_t)local_50;
    if (((char)lVar12 != '\0') && (plVar17 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  *(void*)(arg1 + 1) = 1;
LAB_014ce52f:
  if (*(int *)(this_ptr[0x21] + 0xc) != 0) {
    pvVar10 = _pthread_getspecific(param_1);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d790();
    if ((local_48 == '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    dVar1 = (double)local_50[7];
    uVar2 = *(uint *)(local_50 + 6);
    uVar11 = (uint64_t)(int)uVar2;
    pvVar10 = _pthread_getspecific(param_1);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01320d00();
    pvVar10 = _pthread_getspecific(param_1);
    plVar17 = local_50;
    if ((pvVar10 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
      plVar17 = (int64_t *)local_50[(uint64_t)(*(uint *)(lVar12 + 0x154) & 1) + 4];
    }
    dVar20 = (double)(**(code **)(*plVar17 + 0x370))();
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar13 = (**(code **)(*this_ptr + 0x388))();
    uVar16 = (uVar13 | uVar11) >> 0x20;
    if (uVar16 == 0) {
      uVar11 = (uVar13 & 0xffffffff) % (uint64_t)uVar2;
      iVar9 = (int)((uVar13 & 0xffffffff) / (uint64_t)uVar2);
    }
    else {
      iVar9 = (int)((int64_t)uVar13 / (int64_t)uVar11);
      uVar11 = (int64_t)uVar13 % (int64_t)uVar11;
    }
    lVar12 = (**(code **)(*this_ptr + 0x380))(uVar16,uVar11);
    FUN_00c8e690();
    if ((local_48 == '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    iVar18 = 0;
    if (iVar9 < -1) {
      bVar6 = false;
      local_40 = (int64_t *)0x0;
      bVar7 = false;
      local_38 = (int64_t *)0x0;
    }
    else {
      dVar23 = g_0238fee8 / (double)(int)uVar2;
      uVar11 = 1;
      if (1 < (int)(iVar9 + 2U)) {
        uVar11 = (uint64_t)(iVar9 + 2U);
      }
      auVar5._4_4_ = (float)dVar20;
      auVar5._0_4_ = (float)dVar20;
      uVar13 = 0;
      local_38 = (int64_t *)0x0;
      bVar7 = false;
      local_40 = (int64_t *)0x0;
      bVar6 = false;
      do {
        dVar20 = (double)(iVar18 + lVar12) * dVar23;
        auVar4._4_8_ = (uint64_t)dVar20 >> 0x20;
        auVar4._0_4_ = (float)dVar20;
        uVar21 = FUN_014c36d0(auVar4._0_8_,(int)dVar20);
        if (local_50 == local_38) {
          if ((bVar6) || (local_50 == (int64_t *)0x0)) {
            if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
              uVar21 = FUN_00d50b20();
            }
          }
          else {
            bVar6 = true;
            if (local_48 == '\0') {
              uVar21 = FUN_00d50b00();
            }
          }
        }
        else if (local_48 == '\0') {
          if (local_50 != (int64_t *)0x0) {
            uVar21 = FUN_00d50b00();
          }
          if ((!bVar6) || (local_38 == (int64_t *)0x0)) goto LAB_014ce870;
          uVar21 = FUN_00d50b20();
          local_38 = local_50;
          bVar6 = true;
        }
        else if ((bVar6) && (local_38 != (int64_t *)0x0)) {
          uVar21 = FUN_00d50b20();
          local_38 = local_50;
          bVar6 = true;
        }
        else {
LAB_014ce870:
          local_38 = local_50;
          bVar6 = true;
        }
        FUN_014c36d0(uVar21,(int)dVar20 + 1);
        if (local_50 == local_40) {
          plVar17 = local_40;
          if ((bVar7) || (local_50 == (int64_t *)0x0)) {
            bVar8 = bVar7;
            if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            bVar8 = true;
            if (local_48 == '\0') {
              FUN_00d50b00();
            }
          }
        }
        else if (local_48 == '\0') {
          if (local_50 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          plVar17 = local_50;
          bVar8 = true;
          if (bVar7) {
            if (local_40 == (int64_t *)0x0) goto LAB_014ce940;
            FUN_00d50b20();
            plVar17 = local_50;
          }
        }
        else if ((bVar7) && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
          plVar17 = local_50;
          bVar8 = true;
        }
        else {
LAB_014ce940:
          plVar17 = local_50;
          bVar8 = true;
        }
        bVar7 = bVar8;
        local_40 = plVar17;
        fVar19 = 0.0;
        if ((local_38 != (int64_t *)0x0) && (fVar19 = 0.0, local_40 != (int64_t *)0x0)) {
          insertps(ZEXT416(*(uint *)((int64_t)local_40 + 0x14)),
                   *(void*)((int64_t)local_38 + 0x14),0x10);
          uVar21 = _exp2f();
          auVar22._0_8_ = _exp2f();
          auVar22._8_8_ = extraout_XMM0_Qb_00;
          auVar24._8_8_ = extraout_XMM0_Qb;
          auVar24._0_8_ = uVar21;
          auVar24 = insertps(auVar24,auVar22,0x10);
          auVar25._0_4_ = auVar24._0_4_ * g_0240e480;
          auVar25._4_4_ = auVar24._4_4_ * _UNK_0240e484;
          auVar25._8_4_ = auVar24._8_4_ * _UNK_0240e488;
          auVar25._12_4_ = auVar24._12_4_ * _UNK_0240e48c;
          auVar5._8_8_ = 0;
          auVar24 = divps(auVar5,auVar25);
          fVar19 = (auVar24._0_4_ - auVar24._4_4_) * ((float)dVar20 - (float)(int)dVar20) +
                   auVar24._4_4_;
        }
        *(float *)(local_50[2] + uVar13 * 4) = fVar19;
        uVar13 = uVar13 + 1;
        iVar18 = iVar18 + uVar2;
      } while (uVar11 != uVar13);
    }
    puVar14 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *(void*)(puVar14 + 7) = 0;
    *(void*)((int64_t)puVar14 + 0x3c) = 0;
    *(void*)(puVar14 + 8) = 0;
    pVar15 = 0x25dc9e8;
    *puVar14 = &g_025dc9e8;
    puVar14[9] = 0;
    puVar14[10] = 0;
    (*g_025dca00)();
    pvVar10 = _pthread_getspecific(pVar15);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb950((double)(float)(g_0238fee8 / dVar1));
    pvVar10 = _pthread_getspecific(pVar15);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb890();
    if ((void*)this_ptr[0x11] != puVar14) {
      FUN_00d64850();
      puVar3 = (void*)this_ptr[0x11];
      if (puVar3 != puVar14) {
        FUN_00d50b00();
        this_ptr[0x11] = (int64_t)puVar14;
        if (puVar3 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d64910();
    }
    FUN_00d50b20();
    if ((bVar7) && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((bVar6) && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 013514e0
// ============================================================
// Function: FUN_013514e0
// Address: 013514e0
// Size: 1647 bytes
// Class: MUAudioSourceDescription
// === MUAudioSourceDescription properties ===
//   MUAudioSourceDescriptionType _currentDescriptionType
//   bool            _isNewDocument
//   bool            _isDetectionInProgress
//   bool            _insertGroupDefinesPerformanceTempo
//   bool            _stretchInsertGroup
//   double          _stretchInsertStartTime
//   bool            _createdFromSoundfile
//   bool            _timelineWasModified
//   GNInt           _recordingsInProgress
//   bool            _isComparing
//   bool            _followsHostRegionSelection
//   bool            _zoomsToHostRegionSelection
//   GNInt           _shouldDisplayStructureProblemDialog
//   bool            _shouldDisplayUnknownArchiveDialog
//   bool            _shouldDisplayImportedArchiveDialog
//   bool            _useAutomaticDetection
//   bool            _percussiveSeparation
//   bool            _hasDistinctAttacks
//   bool            _findSibilantPointsAutomatically
//   bool            _isPreliminary
//   bool            _isTonalicOnly
//   bool            _allowAutomaticPolyphonicDetection
//   SInt64          _startSampleIndex
//   SInt64          _sampleCount
//   SInt64          _signalEndSampleOffset
//   SInt64          _signalStartSampleOffset
//   float           _pitchCenter
//   float           _energyClaimFactor
//   float           _detectionQuality
//   GNFraction      _idealStartPulse
//   ... +8 more


void* FUN_013514e0(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  char cVar2;
  int64_t *plVar3;
  void *pvVar4;
  uint64_t uVar5;
  int64_t lVar6;
  void* pVar7;
  int64_t lVar8;
  void*this_ptr;
  int64_t lVar9;
  undefined7 uVar11;
  int64_t *plVar10;
  int64_t lVar12;
  int64_t lVar13;
  double dVar14;
  double dVar15;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  int64_t local_70;
  char local_68;
  uint64_t local_60;
  uint64_t local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  int64_t local_38;
  
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  local_78 = plVar3;
  (**(code **)(*plVar3 + 0x18))();
  if (*(int *)(*param_2 + 0xc) < 1) {
    plVar3 = (int64_t *)0x0;
    local_38 = 0;
    local_60 = 0;
    lVar9 = 0;
    local_58 = 0;
    local_40 = 0;
  }
  else {
    lVar12 = 0;
    local_40 = 0;
    local_58 = 0;
    lVar9 = 0;
    local_60 = 0;
    lVar13 = 0;
    local_38 = 0;
    plVar3 = (int64_t *)0x0;
    plVar10 = param_2;
    do {
      pVar7 = (void*)lVar13;
      pvVar4 = _pthread_getspecific(pVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dfcb0();
      pvVar4 = _pthread_getspecific(pVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar5 = FUN_013dd7c0();
      lVar13 = local_50;
      uVar11 = (undefined7)((uint64_t)plVar10 >> 8);
      if (local_50 == local_40) {
        lVar13 = local_40;
        if (((char)local_58 != '\0') || (local_50 == 0)) {
          plVar10 = (int64_t *)(local_58 & 0xffffffff);
          goto joined_r0x013516bd;
        }
        if (local_48 == '\0') {
          FUN_00d50b00();
          goto LAB_013516d0;
        }
LAB_01351655:
        local_48 = '\0';
        local_58 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
        local_40 = lVar13;
      }
      else {
        if (local_48 != '\0') {
          if (((char)local_58 != '\0') && (local_40 != 0)) {
            uVar5 = FUN_00d50b20();
          }
          goto LAB_01351655;
        }
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        plVar10 = (int64_t *)CONCAT71(uVar11,1);
        if (((char)local_58 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
          local_40 = lVar13;
LAB_013516d0:
          plVar10 = (int64_t *)CONCAT71(uVar11,1);
          lVar13 = local_40;
        }
joined_r0x013516bd:
        local_40 = lVar13;
        if ((local_48 == '\0') || (local_50 == 0)) {
          local_58 = (uint64_t)plVar10 & 0xffffffff;
        }
        else {
          FUN_00d50b20();
          local_58 = (uint64_t)plVar10 & 0xffffffff;
        }
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if (0 < *(int *)(local_40 + 0xc)) {
        lVar13 = 0;
        do {
          plVar10 = plVar3;
          lVar6 = *(int64_t *)(local_40 + 0x10);
          lVar1 = *(int64_t *)(lVar6 + lVar13 * 8);
          lVar8 = local_40;
          plVar3 = plVar10;
          if (lVar9 == lVar1) {
            if (((char)local_60 == '\0') && (lVar9 != 0)) {
              local_60 = CONCAT71((int7)((uint64_t)lVar6 >> 8),1);
              plVar3 = (int64_t *)0x0;
              FUN_00d50b00();
            }
          }
          else {
            if (lVar1 != 0) {
              plVar3 = (int64_t *)(local_60 & 0xffffffff);
              lVar6 = FUN_00d50b00();
            }
            if (((char)local_60 == '\0') || (lVar9 == 0)) {
              local_60 = CONCAT71((int7)((uint64_t)lVar6 >> 8),1);
              lVar9 = lVar1;
            }
            else {
              plVar3 = (int64_t *)(local_60 & 0xffffffff);
              uVar5 = FUN_00d50b20();
              local_60 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
              lVar9 = lVar1;
            }
          }
          pvVar4 = _pthread_getspecific((void*)lVar8);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          lVar6 = local_50;
          uVar11 = (undefined7)((uint64_t)plVar3 >> 8);
          cVar2 = (char)plVar10;
          lVar1 = local_50;
          if (local_50 == local_38) {
            plVar3 = plVar10;
            lVar6 = local_38;
            if ((cVar2 == '\0') && (local_50 != 0)) {
              plVar3 = (int64_t *)CONCAT71(uVar11,1);
              lVar6 = local_38;
              if (local_48 != '\0') goto joined_r0x013519fe;
              FUN_00d50b00();
LAB_0135189f:
              plVar3 = (int64_t *)CONCAT71(uVar11,1);
              lVar6 = local_38;
            }
joined_r0x01351ab8:
            local_38 = lVar6;
            lVar1 = local_50;
            if (local_48 != '\0') {
LAB_013518a9:
              lVar1 = local_50;
              lVar6 = local_38;
              if (local_50 != 0) {
                FUN_00d50b20();
                lVar1 = local_50;
                lVar6 = local_38;
              }
            }
          }
          else {
            if (local_48 == '\0') {
              if (local_50 != 0) {
                FUN_00d50b00();
              }
              plVar3 = (int64_t *)CONCAT71(uVar11,1);
              if (cVar2 == '\0') goto joined_r0x01351ab8;
              if (local_38 != 0) {
                FUN_00d50b20();
                local_38 = lVar6;
                goto LAB_0135189f;
              }
              local_38 = lVar6;
              lVar1 = local_50;
              if (local_48 == '\0') goto joined_r0x013519fe;
              goto LAB_013518a9;
            }
            plVar3 = (int64_t *)CONCAT71(uVar11,1);
            if ((cVar2 != '\0') && (local_38 != 0)) {
              FUN_00d50b20();
              lVar1 = local_50;
            }
          }
joined_r0x013519fe:
          local_50 = lVar6;
          local_38 = local_50;
          if (local_50 != 0) {
            pVar7 = (void*)local_50;
            local_48 = '\0';
            cVar2 = FUN_00ca18c0();
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            lVar1 = local_50;
            if (cVar2 == '\0') {
              pvVar4 = _pthread_getspecific(pVar7);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar14 = (double)FUN_0125a280();
              pvVar4 = _pthread_getspecific((void*)lVar12);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar15 = (double)FUN_013de8d0();
              uVar5 = FUN_00d470c0(dVar14 - dVar15);
              lVar6 = local_50;
              local_68 = 0;
              if (local_48 == '\0') {
                if (local_50 != 0) {
                  uVar5 = FUN_00d50b00();
                }
              }
              else {
                local_48 = '\0';
              }
              local_68 = '\x01';
              local_70 = lVar6;
              local_88 = local_38;
              local_80 = '\0';
              FUN_0139d260(uVar5,&local_88);
              if ((local_80 != '\0') && (local_88 != 0)) {
                FUN_00d50b20();
              }
              if ((local_68 != '\0') && (local_70 != 0)) {
                FUN_00d50b20();
              }
              lVar1 = local_50;
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
                lVar1 = local_50;
              }
            }
          }
          local_50 = lVar1;
          lVar13 = lVar13 + 1;
        } while (lVar13 < *(int *)(local_40 + 0xc));
      }
      lVar12 = lVar12 + 1;
      lVar13 = (int64_t)*(int *)(*param_2 + 0xc);
    } while (lVar12 < lVar13);
  }
  *this_ptr = local_78;
  *(void*)(this_ptr + 1) = 1;
  if (((char)plVar3 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_60 != '\0') && (lVar9 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 01347c70
// ============================================================
// Function: FUN_01347c70
// Address: 01347c70
// Size: 2169 bytes
// Class: MUAudioSourceDescription
// === MUAudioSourceDescription properties ===
//   MUAudioSourceDescriptionType _currentDescriptionType
//   bool            _isNewDocument
//   bool            _isDetectionInProgress
//   bool            _insertGroupDefinesPerformanceTempo
//   bool            _stretchInsertGroup
//   double          _stretchInsertStartTime
//   bool            _createdFromSoundfile
//   bool            _timelineWasModified
//   GNInt           _recordingsInProgress
//   bool            _isComparing
//   bool            _followsHostRegionSelection
//   bool            _zoomsToHostRegionSelection
//   GNInt           _shouldDisplayStructureProblemDialog
//   bool            _shouldDisplayUnknownArchiveDialog
//   bool            _shouldDisplayImportedArchiveDialog
//   bool            _useAutomaticDetection
//   bool            _percussiveSeparation
//   bool            _hasDistinctAttacks
//   bool            _findSibilantPointsAutomatically
//   bool            _isPreliminary
//   bool            _isTonalicOnly
//   bool            _allowAutomaticPolyphonicDetection
//   SInt64          _startSampleIndex
//   SInt64          _sampleCount
//   SInt64          _signalEndSampleOffset
//   SInt64          _signalStartSampleOffset
//   float           _pitchCenter
//   float           _energyClaimFactor
//   float           _detectionQuality
//   GNFraction      _idealStartPulse
//   ... +8 more


uint FUN_01347c70(int64_t *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int64_t *plVar7;
  char cVar8;
  void *pvVar9;
  int64_t lVar10;
  int64_t *plVar11;
  void* pVar12;
  int64_t *plVar13;
  int64_t *plVar14;
  int64_t lVar15;
  byte bVar16;
  int64_t local_b8;
  char local_b0;
  int64_t *local_68;
  uint local_54;
  char local_50 [8];
  int64_t *local_48;
  char local_40 [15];
  char local_31;
  
  pvVar9 = _pthread_getspecific((void*)param_1);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013de560();
  plVar13 = local_48;
  if (local_40[0] == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01347cfe;
    }
LAB_01347d5b:
    bVar6 = true;
  }
  else {
    if (local_48 == (int64_t *)0x0) goto LAB_01347d5b;
LAB_01347cfe:
    pvVar9 = _pthread_getspecific((void*)param_1);
    if ((pvVar9 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
      param_1 = plVar13;
    }
    cVar8 = FUN_014bc070();
    param_1 = (int64_t *)CONCAT71((int7)((uint64_t)param_1 >> 8),1);
    local_54 = (uint)param_1;
    if (cVar8 != '\0') {
      bVar6 = false;
      goto LAB_01348516;
    }
    pvVar9 = _pthread_getspecific(local_54);
    if ((pvVar9 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
      param_1 = plVar13;
      plVar13 = (int64_t *)plVar13[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
    }
    cVar8 = (**(code **)(*plVar13 + 0x3c0))();
    bVar6 = false;
    if (cVar8 != '\0') goto LAB_01348516;
  }
  pvVar9 = _pthread_getspecific((void*)param_1);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dfcb0();
  pvVar9 = _pthread_getspecific((void*)param_1);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dd790();
  plVar13 = local_48;
  if (local_40[0] == '\0') {
    if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if (*(int *)((int64_t)plVar13 + 0xc) < 1) {
    local_54 = 0;
  }
  else {
    lVar15 = 0;
    local_54 = 0;
    do {
      pvVar9 = _pthread_getspecific((void*)param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef8d0();
      plVar7 = local_48;
      if (((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) &&
         ((FUN_00d50b00(), local_40[0] != '\0' && (local_48 != (int64_t *)0x0)))) {
        FUN_00d50b20();
      }
      pvVar9 = _pthread_getspecific((void*)param_1);
      if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        param_1 = plVar7;
      }
      FUN_01267000();
      pVar12 = (void*)param_1;
      if (local_40[0] == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01347fb0;
        }
LAB_01348080:
        bVar5 = true;
LAB_01348145:
        bVar4 = true;
LAB_01348155:
        bVar3 = true;
        local_68 = (int64_t *)0x0;
        bVar2 = false;
      }
      else {
        if (local_48 == (int64_t *)0x0) goto LAB_01348080;
LAB_01347fb0:
        pvVar9 = _pthread_getspecific(pVar12);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cade0();
        if (local_48 == (int64_t *)0x0) {
          bVar5 = false;
          param_1 = local_48;
          goto LAB_01348145;
        }
        plVar11 = local_48;
        if (((local_40[0] == '\0') && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar9 = _pthread_getspecific((void*)plVar11);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01505b90();
        if (local_48 == (int64_t *)0x0) {
          bVar5 = false;
          bVar4 = false;
          param_1 = local_48;
          goto LAB_01348155;
        }
        plVar11 = local_48;
        if (((local_40[0] == '\0') && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar9 = _pthread_getspecific((void*)plVar11);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0179acd0();
        FUN_00d23340();
        local_68 = local_48;
        local_50[0] = local_40[0];
        param_1 = (int64_t *)local_50;
        plVar11 = (int64_t *)local_40;
        if (local_40[0] == '\0') {
          plVar11 = param_1;
        }
        *(void*)plVar11 = 0;
        if ((local_40[0] != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_68 == (int64_t *)0x0) {
          bVar2 = false;
          local_68 = (int64_t *)0x0;
        }
        else {
          bVar2 = true;
          if (local_50[0] == '\0') {
            FUN_00d50b00();
          }
        }
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        bVar3 = false;
        bVar5 = false;
        bVar4 = false;
      }
      pvVar9 = _pthread_getspecific((void*)param_1);
      if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        param_1 = plVar7;
      }
      FUN_0128c200();
      plVar11 = local_48;
      if (local_40[0] == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_013482a7;
        }
        bVar16 = (local_54 & 1) == 0;
        cVar8 = local_68 == (int64_t *)0x0;
      }
      else {
LAB_013482a7:
        local_31 = local_68 == (int64_t *)0x0;
        if (((bool)local_31) || (plVar11 == (int64_t *)0x0)) {
LAB_01348410:
          bVar16 = (local_54 & 1) == 0;
          cVar8 = local_31;
          if (plVar11 == (int64_t *)0x0) goto LAB_01348453;
        }
        else {
          pvVar9 = _pthread_getspecific((void*)param_1);
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            param_1 = local_68;
          }
          FUN_017e5950();
          plVar14 = local_48;
          if (local_48 == (int64_t *)0x0) {
            bVar1 = true;
            plVar14 = (int64_t *)0x0;
          }
          else {
            if (local_40[0] == '\0') {
              FUN_00d50b00();
              bVar1 = false;
              if ((local_40[0] == '\0') || (local_48 == (int64_t *)0x0)) goto LAB_013483b3;
              FUN_00d50b20();
            }
            else {
              local_40[0] = '\0';
            }
            bVar1 = false;
          }
LAB_013483b3:
          if (plVar14 == (int64_t *)0x0) goto LAB_01348410;
          pvVar9 = _pthread_getspecific((void*)param_1);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_54 = FUN_017dcae0();
          bVar16 = (byte)local_54 ^ 1;
          if (!bVar1) {
            FUN_00d50b20();
          }
        }
        cVar8 = local_31;
        FUN_00d50b20();
      }
LAB_01348453:
      if ((bVar2) && (cVar8 == '\0')) {
        FUN_00d50b20();
      }
      if (!bVar3) {
        FUN_00d50b20();
      }
      if (!bVar4) {
        FUN_00d50b20();
      }
      if (!bVar5) {
        FUN_00d50b20();
      }
      if (plVar7 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    } while ((bVar16 != 0) && (lVar15 = lVar15 + 1, lVar15 < *(int *)((int64_t)plVar13 + 0xc)));
  }
  FUN_00d50b20();
  local_54 = local_54 & 0xffffff01;
LAB_01348516:
  if (!bVar6) {
    FUN_00d50b20();
  }
  return local_54;
}



// ============================================================
// 0133b360
// ============================================================
// Function: FUN_0133b360
// Address: 0133b360
// Size: 1971 bytes
// Class: MUAudioSourceDescription
// === MUAudioSourceDescription properties ===
//   MUAudioSourceDescriptionType _currentDescriptionType
//   bool            _isNewDocument
//   bool            _isDetectionInProgress
//   bool            _insertGroupDefinesPerformanceTempo
//   bool            _stretchInsertGroup
//   double          _stretchInsertStartTime
//   bool            _createdFromSoundfile
//   bool            _timelineWasModified
//   GNInt           _recordingsInProgress
//   bool            _isComparing
//   bool            _followsHostRegionSelection
//   bool            _zoomsToHostRegionSelection
//   GNInt           _shouldDisplayStructureProblemDialog
//   bool            _shouldDisplayUnknownArchiveDialog
//   bool            _shouldDisplayImportedArchiveDialog
//   bool            _useAutomaticDetection
//   bool            _percussiveSeparation
//   bool            _hasDistinctAttacks
//   bool            _findSibilantPointsAutomatically
//   bool            _isPreliminary
//   bool            _isTonalicOnly
//   bool            _allowAutomaticPolyphonicDetection
//   SInt64          _startSampleIndex
//   SInt64          _sampleCount
//   SInt64          _signalEndSampleOffset
//   SInt64          _signalStartSampleOffset
//   float           _pitchCenter
//   float           _energyClaimFactor
//   float           _detectionQuality
//   GNFraction      _idealStartPulse
//   ... +8 more


void FUN_0133b360(void* param_1)

{
  code *pcVar1;
  char cVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t lVar5;
  void*puVar6;
  int64_t lVar7;
  int64_t lVar8;
  void*puVar9;
  void* pVar10;
  void*puVar11;
  int64_t *plVar12;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar13;
  double dVar14;
  double dVar15;
  uint64_t uVar16;
  double dVar17;
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  int64_t local_40;
  char local_38;
  
  if ((*arg1 != 0) || (MACH_HEADER.filetype == 0)) {
    lVar5 = **(int64_t **)(*arg1 + 0x10);
    pvVar3 = _pthread_getspecific(param_1);
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      lVar5 = *(int64_t *)(lVar5 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
    plVar12 = *(int64_t **)(lVar5 + 0x38);
    pvVar3 = _pthread_getspecific(param_1);
    if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      plVar12 = (int64_t *)plVar12[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
    dVar14 = (double)(**(code **)(*plVar12 + 0x370))();
    plVar12 = *(int64_t **)(this_ptr + 0x38);
    pvVar3 = _pthread_getspecific(param_1);
    if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      plVar12 = (int64_t *)plVar12[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
    dVar15 = (double)(**(code **)(*plVar12 + 0x370))();
    puVar6 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar11 = &g_02572358;
    *puVar6 = &g_02572358;
    uVar16 = (*g_02572370)();
    lVar5 = *arg1;
    if (0 < *(int *)(lVar5 + 0xc)) {
      lVar4 = 0;
      do {
        lVar5 = *(int64_t *)(*(int64_t *)(lVar5 + 0x10) + lVar4 * 8);
        pvVar3 = _pthread_getspecific((void*)puVar11);
        if ((pvVar3 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          lVar5 = *(int64_t *)(lVar5 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
        }
        lVar5 = *(int64_t *)(lVar5 + 0x40);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        if (0 < *(int *)(lVar5 + 0xc)) {
          lVar7 = 0;
          do {
            pvVar3 = _pthread_getspecific((void*)puVar11);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013de560();
            if ((local_38 == '\0') && (local_40 != 0)) {
              FUN_00d50b00();
            }
            pvVar3 = _pthread_getspecific((void*)puVar11);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar2 = FUN_014bc070();
            if (cVar2 == '\0') {
              pvVar3 = _pthread_getspecific((void*)puVar11);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_013dfdd0();
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              if (local_40 != 0) {
                pvVar3 = _pthread_getspecific((void*)puVar11);
                if (pvVar3 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_013e5500();
                if ((local_38 == '\0') && (local_40 != 0)) {
                  FUN_00d50b00();
                }
                local_38 = '\0';
                FUN_00d21140();
                if (local_40 != 0) {
                  FUN_00d50b20();
                }
              }
            }
            if (local_40 != 0) {
              FUN_00d50b20();
            }
            lVar7 = lVar7 + 1;
          } while (lVar7 < *(int *)(lVar5 + 0xc));
        }
        uVar16 = FUN_00d50b20();
        lVar4 = lVar4 + 1;
        lVar5 = *arg1;
        puVar11 = (void*)(int64_t)*(int *)(lVar5 + 0xc);
      } while (lVar4 < (int64_t)puVar11);
    }
    FUN_00d242c0(uVar16,0);
    pcVar1 = g_025e6278;
    if (0 < *(int *)((int64_t)puVar6 + 0xc)) {
      dVar15 = dVar15 / dVar14;
      lVar5 = 0;
      do {
        plVar12 = *(int64_t **)(puVar6[2] + lVar5 * 8);
        lVar4 = lVar5;
        if (plVar12 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        pvVar3 = _pthread_getspecific((void*)lVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar14 = (double)FUN_014bacf0();
        lVar4 = *(int64_t *)(this_ptr + 0xd0);
        if (0 < *(int *)(lVar4 + 0xc)) {
          lVar7 = 0;
          do {
            lVar8 = *(int64_t *)(*(int64_t *)(lVar4 + 0x10) + lVar7 * 8);
            if (lVar8 != 0) {
              FUN_00d50b00();
            }
            pvVar3 = _pthread_getspecific((void*)lVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar17 = (double)FUN_014bacf0();
            if (lVar8 != 0) {
              FUN_00d50b20();
            }
            if ((double)((uint64_t)(dVar17 - dVar14) & g_023908f0) < g_0240d3c0)
            goto LAB_0133bb35;
            lVar7 = lVar7 + 1;
            lVar4 = *(int64_t *)(this_ptr + 0xd0);
          } while (lVar7 < *(int *)(lVar4 + 0xc));
        }
        pVar10 = (void*)lVar4;
        pvVar3 = _pthread_getspecific(pVar10);
        plVar13 = plVar12;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          plVar13 = (int64_t *)plVar12[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
        lVar4 = (**(code **)(*plVar13 + 0x3a0))();
        pvVar3 = _pthread_getspecific(pVar10);
        plVar13 = plVar12;
        if ((pvVar3 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          plVar13 = (int64_t *)plVar12[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
        }
        lVar7 = (**(code **)(*plVar13 + 0x390))();
        pvVar3 = _pthread_getspecific(pVar10);
        plVar13 = plVar12;
        if ((pvVar3 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar13 = (int64_t *)plVar12[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        lVar8 = (**(code **)(*plVar13 + 0x388))();
        puVar9 = (void*)FUN_00e8fc40();
        FUN_007ef480();
        pVar10 = 0x25e6250;
        *puVar9 = &g_025e6260;
        puVar9[7] = &g_025e66c0;
        puVar9[0x1c] = 0;
        puVar9[0x19] = 0;
        puVar9[0x1a] = 0;
        *(void*)(puVar9 + 0x1b) = 0;
        (*pcVar1)();
        pvVar3 = _pthread_getspecific(pVar10);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        auVar18._0_8_ =
             (double)((uint64_t)((double)lVar4 * dVar15) & g_023945b0 | g_023945c0) +
             (double)lVar4 * dVar15;
        auVar18._8_8_ = _UNK_023945c8;
        roundsd(ZEXT816(0),auVar18,0xb);
        auVar19._0_8_ =
             (double)((uint64_t)((double)lVar7 * dVar15) & g_023945b0 | g_023945c0) +
             (double)lVar7 * dVar15;
        auVar19._8_8_ = _UNK_023945c8;
        auVar18 = roundsd(ZEXT816(0),auVar19,0xb);
        auVar20._0_8_ =
             (double)((uint64_t)((double)lVar8 * dVar15) & g_023945b0 | g_023945c0) +
             (double)lVar8 * dVar15;
        auVar20._8_8_ = _UNK_023945c8;
        auVar19 = roundsd(ZEXT816(0),auVar20,0xb);
        lVar4 = (int64_t)auVar19._0_8_;
        FUN_014bad20(lVar4,(int64_t)auVar18._0_8_);
        pVar10 = (void*)lVar4;
        pvVar3 = _pthread_getspecific(pVar10);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar3 = _pthread_getspecific(pVar10);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bae60();
        FUN_014bae10();
        FUN_01329030();
        FUN_00d50b20();
LAB_0133bb35:
        if (plVar12 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)((int64_t)puVar6 + 0xc));
    }
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 014cfcc0
// ============================================================
// Function: FUN_014cfcc0
// Address: 014cfcc0
// Size: 1752 bytes
// Class: MUAudioSourceDescription
// === MUAudioSourceDescription properties ===
//   MUAudioSourceDescriptionType _currentDescriptionType
//   bool            _isNewDocument
//   bool            _isDetectionInProgress
//   bool            _insertGroupDefinesPerformanceTempo
//   bool            _stretchInsertGroup
//   double          _stretchInsertStartTime
//   bool            _createdFromSoundfile
//   bool            _timelineWasModified
//   GNInt           _recordingsInProgress
//   bool            _isComparing
//   bool            _followsHostRegionSelection
//   bool            _zoomsToHostRegionSelection
//   GNInt           _shouldDisplayStructureProblemDialog
//   bool            _shouldDisplayUnknownArchiveDialog
//   bool            _shouldDisplayImportedArchiveDialog
//   bool            _useAutomaticDetection
//   bool            _percussiveSeparation
//   bool            _hasDistinctAttacks
//   bool            _findSibilantPointsAutomatically
//   bool            _isPreliminary
//   bool            _isTonalicOnly
//   bool            _allowAutomaticPolyphonicDetection
//   SInt64          _startSampleIndex
//   SInt64          _sampleCount
//   SInt64          _signalEndSampleOffset
//   SInt64          _signalStartSampleOffset
//   float           _pitchCenter
//   float           _energyClaimFactor
//   float           _detectionQuality
//   GNFraction      _idealStartPulse
//   ... +8 more


void FUN_014cfcc0(void* param_1)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  int64_t lVar6;
  double dVar7;
  bool bVar8;
  int iVar9;
  void *pvVar10;
  uint64_t uVar11;
  int64_t lVar12;
  void*puVar13;
  void* pVar14;
  uint64_t uVar15;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t uVar16;
  int iVar17;
  float fVar18;
  uint32_t uVar19;
  float fVar20;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  int64_t local_40;
  
  (**(code **)(*this_ptr + 0x378))();
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (local_58 == 0) goto LAB_014cfdaf;
  (**(code **)(*this_ptr + 0x378))();
  lVar12 = *arg1;
  if (lVar12 == local_58) {
    if (((char)arg1[1] != '\0') || (local_58 == 0)) goto LAB_014cfd9b;
    if (local_50 == '\0') {
      FUN_00d50b00();
      goto LAB_014cfd96;
    }
  }
  else {
    lVar6 = arg1[1];
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      *arg1 = local_58;
      if (((char)lVar6 != '\0') && (lVar12 != 0)) {
        FUN_00d50b20();
      }
LAB_014cfd96:
      *(void*)(arg1 + 1) = 1;
LAB_014cfd9b:
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_014cfdaf;
    }
    *arg1 = local_58;
    if (((char)lVar6 != '\0') && (lVar12 != 0)) {
      FUN_00d50b20();
    }
  }
  *(void*)(arg1 + 1) = 1;
LAB_014cfdaf:
  pvVar10 = _pthread_getspecific(param_1);
  if (pvVar10 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar18 = (float)FUN_0132db90();
  if (*(int *)(this_ptr[0x21] + 0xc) != 0) {
    pvVar10 = _pthread_getspecific(param_1);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d790();
    if ((local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
    }
    dVar7 = g_0238fee8;
    uVar1 = *(uint *)(local_58 + 0x30);
    uVar16 = (uint64_t)(int)uVar1;
    dVar2 = g_0238fee8 / *(double *)(local_58 + 0x38);
    uVar11 = (**(code **)(*this_ptr + 0x388))();
    uVar15 = (uVar11 | uVar16) >> 0x20;
    if (uVar15 == 0) {
      uVar16 = (uVar11 & 0xffffffff) % (uint64_t)uVar1;
      iVar9 = (int)((uVar11 & 0xffffffff) / (uint64_t)uVar1);
    }
    else {
      iVar9 = (int)((int64_t)uVar11 / (int64_t)uVar16);
      uVar16 = (int64_t)uVar11 % (int64_t)uVar16;
    }
    lVar12 = (**(code **)(*this_ptr + 0x380))(uVar15,uVar16);
    FUN_00c8e690();
    if ((local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    iVar17 = 0;
    if (iVar9 < -1) {
      local_48 = 0;
      bVar4 = false;
      local_40 = 0;
      bVar5 = false;
    }
    else {
      uVar16 = 1;
      if (1 < (int)(iVar9 + 2U)) {
        uVar16 = (uint64_t)(iVar9 + 2U);
      }
      uVar11 = 0;
      bVar5 = false;
      local_40 = 0;
      bVar4 = false;
      local_48 = 0;
      do {
        dVar3 = (double)(iVar17 + lVar12) * (dVar7 / (double)(int)uVar1);
        uVar19 = FUN_014c36d0((float)dVar3,(int)dVar3);
        if (local_58 == local_48) {
          if ((bVar4) || (local_58 == 0)) {
            if ((local_50 != '\0') && (local_58 != 0)) {
              uVar19 = FUN_00d50b20();
            }
          }
          else {
            bVar4 = true;
            if (local_50 == '\0') {
              uVar19 = FUN_00d50b00();
            }
          }
        }
        else if (local_50 == '\0') {
          if (local_58 != 0) {
            uVar19 = FUN_00d50b00();
          }
          if ((!bVar4) || (local_48 == 0)) goto LAB_014d0090;
          uVar19 = FUN_00d50b20();
          local_48 = local_58;
          bVar4 = true;
        }
        else if ((bVar4) && (local_48 != 0)) {
          uVar19 = FUN_00d50b20();
          local_48 = local_58;
          bVar4 = true;
        }
        else {
LAB_014d0090:
          local_48 = local_58;
          bVar4 = true;
        }
        FUN_014c36d0(uVar19,(int)dVar3 + 1);
        if (local_58 == local_40) {
          lVar6 = local_40;
          if ((bVar5) || (local_58 == 0)) {
            bVar8 = bVar5;
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            bVar8 = true;
            if (local_50 == '\0') {
              FUN_00d50b00();
            }
          }
        }
        else if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
          lVar6 = local_58;
          bVar8 = true;
          if (bVar5) {
            if (local_40 == 0) goto LAB_014d0170;
            FUN_00d50b20();
            lVar6 = local_58;
          }
        }
        else if ((bVar5) && (local_40 != 0)) {
          FUN_00d50b20();
          lVar6 = local_58;
          bVar8 = true;
        }
        else {
LAB_014d0170:
          lVar6 = local_58;
          bVar8 = true;
        }
        bVar5 = bVar8;
        local_40 = lVar6;
        fVar20 = 0.0;
        if ((local_48 != 0) && (fVar20 = 0.0, local_40 != 0)) {
          fVar20 = *(float *)(local_48 + 0x28) * fVar18;
          fVar20 = (*(float *)(local_40 + 0x28) * fVar18 - fVar20) *
                   ((float)dVar3 - (float)(int)dVar3) + fVar20;
        }
        *(float *)(*(int64_t *)(local_58 + 0x10) + uVar11 * 4) = fVar20;
        uVar11 = uVar11 + 1;
        iVar17 = iVar17 + uVar1;
      } while (uVar16 != uVar11);
    }
    puVar13 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *(void*)(puVar13 + 7) = 0;
    *(void*)((int64_t)puVar13 + 0x3c) = 0;
    *(void*)(puVar13 + 8) = 0;
    pVar14 = 0x25dc9e8;
    *puVar13 = &g_025dc9e8;
    puVar13[9] = 0;
    puVar13[10] = 0;
    (*g_025dca00)();
    pvVar10 = _pthread_getspecific(pVar14);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb950(SUB84((double)(float)dVar2,0));
    pvVar10 = _pthread_getspecific(pVar14);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb890();
    FUN_014bc1d0();
    FUN_00d50b20();
    if ((bVar5) && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar4) && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 010ff5d0
// ============================================================
// Function: FUN_010ff5d0
// Address: 010ff5d0
// Size: 3187 bytes
// Class: MUAudioSourceDescription
// String references:
//   "bool"
//   "GNUni"
//   "SInt64"
//   "float"
//   "GNFraction"
//   "MUFunction"
//   "MUAudioSourceComponent"
//   "_sampleCount"
//   "MUAudioSourceDescription"
//   "_energyClaimFactor"
//   "MUAudioSourceItem"
//   "MUPulseAssignmentTarget"
//   "_audioSourceItem"
//   "GNInt"
//   "_startSampleIndex"
//   "_signalEndSampleOffset"
//   "_signalStartSampleOffset"
//   "MUDecomposedAudioSignal"
//   "_owners"
//   "_pitchCenter"
//   ... +9 more
// === MUAudioSourceDescription properties ===
//   MUAudioSourceDescriptionType _currentDescriptionType
//   bool            _isNewDocument
//   bool            _isDetectionInProgress
//   bool            _insertGroupDefinesPerformanceTempo
//   bool            _stretchInsertGroup
//   double          _stretchInsertStartTime
//   bool            _createdFromSoundfile
//   bool            _timelineWasModified
//   GNInt           _recordingsInProgress
//   bool            _isComparing
//   bool            _followsHostRegionSelection
//   bool            _zoomsToHostRegionSelection
//   GNInt           _shouldDisplayStructureProblemDialog
//   bool            _shouldDisplayUnknownArchiveDialog
//   bool            _shouldDisplayImportedArchiveDialog
//   bool            _useAutomaticDetection
//   bool            _percussiveSeparation
//   bool            _hasDistinctAttacks
//   bool            _findSibilantPointsAutomatically
//   bool            _isPreliminary
//   bool            _isTonalicOnly
//   bool            _allowAutomaticPolyphonicDetection
//   SInt64          _startSampleIndex
//   SInt64          _sampleCount
//   SInt64          _signalEndSampleOffset
//   SInt64          _signalStartSampleOffset
//   float           _pitchCenter
//   float           _energyClaimFactor
//   float           _detectionQuality
//   GNFraction      _idealStartPulse
//   ... +8 more


void FUN_010ff5d0(void)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  int iVar8;
  int64_t lVar9;
  char *pcVar10;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02590538;
  uVar1 = *(void*)(arg1 + 0x14);
  uVar2 = *(void*)(arg1 + 0x18);
  uVar3 = *(void*)(arg1 + 0x1c);
  uVar4 = *(void*)(arg1 + 0x20);
  uVar5 = *(void*)(arg1 + 0x24);
  uVar6 = *(void*)(arg1 + 0x28);
  uVar7 = *(void*)(arg1 + 0x2c);
  *(void*)(this_ptr + 2) = *(void*)(arg1 + 0x10);
  *(void*)((int64_t)this_ptr + 0x14) = uVar1;
  *(void*)(this_ptr + 3) = uVar2;
  *(void*)((int64_t)this_ptr + 0x1c) = uVar3;
  *(void*)(this_ptr + 4) = uVar4;
  *(void*)((int64_t)this_ptr + 0x24) = uVar5;
  *(void*)(this_ptr + 5) = uVar6;
  *(void*)((int64_t)this_ptr + 0x2c) = uVar7;
  this_ptr[6] = *(void*)(arg1 + 0x30);
  *this_ptr = &g_025c7fc8;
  this_ptr[7] = &g_025eefe0;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_025e6748;
  this_ptr[7] = &g_025e6ba8;
  this_ptr[8] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01100450();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUFunction");
  }
  this_ptr[9] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01100540();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUFunction");
  }
  this_ptr[10] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01100630();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceDescription");
  }
  this_ptr[0xb] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0xc] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0xd] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0xe] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0xf] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01100720();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_owners";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUDecomposedAudioSignal");
  }
  *(void*)(this_ptr + 0x10) = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x84) = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x11] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01100810();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUFunction");
  }
  *(void*)(this_ptr + 0x12) = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x94) = 0x100000000;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x9c) = 0x100000000;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xa4) = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x15) = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xac) = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xad) = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x16] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01100900();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_rightAdjacentItem";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceItem");
  }
  this_ptr[0x17] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011009f0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_leftAdjacentItem";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceItem");
  }
  this_ptr[0x18] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01100ae0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceItem";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceComponent");
  }
  return;
}



// ============================================================
// 0134fa60
// ============================================================
// Function: FUN_0134fa60
// Address: 0134fa60
// Size: 1546 bytes
// Class: MUAudioSourceDescription
// === MUAudioSourceDescription properties ===
//   MUAudioSourceDescriptionType _currentDescriptionType
//   bool            _isNewDocument
//   bool            _isDetectionInProgress
//   bool            _insertGroupDefinesPerformanceTempo
//   bool            _stretchInsertGroup
//   double          _stretchInsertStartTime
//   bool            _createdFromSoundfile
//   bool            _timelineWasModified
//   GNInt           _recordingsInProgress
//   bool            _isComparing
//   bool            _followsHostRegionSelection
//   bool            _zoomsToHostRegionSelection
//   GNInt           _shouldDisplayStructureProblemDialog
//   bool            _shouldDisplayUnknownArchiveDialog
//   bool            _shouldDisplayImportedArchiveDialog
//   bool            _useAutomaticDetection
//   bool            _percussiveSeparation
//   bool            _hasDistinctAttacks
//   bool            _findSibilantPointsAutomatically
//   bool            _isPreliminary
//   bool            _isTonalicOnly
//   bool            _allowAutomaticPolyphonicDetection
//   SInt64          _startSampleIndex
//   SInt64          _sampleCount
//   SInt64          _signalEndSampleOffset
//   SInt64          _signalStartSampleOffset
//   float           _pitchCenter
//   float           _energyClaimFactor
//   float           _detectionQuality
//   GNFraction      _idealStartPulse
//   ... +8 more


void FUN_0134fa60(void)

{
  char cVar1;
  bool bVar2;
  uint64_t uVar3;
  char *pcVar4;
  void *pvVar5;
  int64_t lVar6;
  void* pVar7;
  char *pcVar8;
  int64_t *arg1;
  int64_t lVar9;
  int64_t lVar10;
  bool bVar11;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  uint8_t local_e0;
  int64_t local_d8;
  uint8_t local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b0;
  char local_a8;
  char local_60;
  undefined7 uStack_5f;
  char local_58;
  uint64_t local_50;
  int64_t local_48;
  char local_40 [8];
  int64_t local_38;
  
  if (0 < *(int *)(*arg1 + 0xc)) {
    lVar10 = 0;
    local_50 = 0;
    local_38 = 0;
    bVar2 = false;
    lVar6 = 0;
    do {
      uVar3 = local_50;
      cVar1 = (char)local_50;
      FUN_00d23310();
      lVar9 = local_48;
      local_60 = local_40[0];
      pcVar8 = &local_60;
      pcVar4 = local_40;
      if (local_40[0] == '\0') {
        pcVar4 = pcVar8;
      }
      *pcVar4 = '\0';
      if ((local_40[0] != '\0') && (lVar9 != 0)) {
        pcVar4 = (char *)FUN_00d50b20();
      }
      if (lVar9 == lVar6) {
        if ((cVar1 == '\0') && (lVar9 != 0)) {
          local_50 = CONCAT71((int7)((uint64_t)pcVar8 >> 8),1);
          lVar9 = lVar6;
          if (local_60 == '\0') {
            FUN_00d50b00();
          }
        }
        else if ((local_60 == '\0') || (lVar9 == 0)) {
          local_50 = uVar3 & 0xffffffff;
          lVar9 = lVar6;
        }
        else {
          FUN_00d50b20();
          local_50 = uVar3 & 0xffffffff;
          lVar9 = lVar6;
        }
      }
      else if (local_60 == '\0') {
        if (lVar9 != 0) {
          pcVar4 = (char *)FUN_00d50b00();
        }
        local_50 = CONCAT71((int7)((uint64_t)pcVar4 >> 8),1);
        if ((cVar1 != '\0') && (lVar6 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50 = CONCAT71((int7)((uint64_t)pcVar4 >> 8),1);
        if ((cVar1 != '\0') && (lVar6 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d23340();
      lVar6 = local_48;
      local_60 = local_40[0];
      pcVar8 = &local_60;
      pcVar4 = local_40;
      if (local_40[0] == '\0') {
        pcVar4 = pcVar8;
      }
      *pcVar4 = '\0';
      if ((local_40[0] != '\0') && (lVar6 != 0)) {
        FUN_00d50b20();
      }
      pVar7 = (void*)pcVar8;
      if (lVar6 == local_38) {
        if ((bVar2) || (lVar6 == 0)) {
          if ((local_60 != '\0') && (lVar6 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar2 = true;
          if (local_60 == '\0') {
            FUN_00d50b00();
          }
        }
      }
      else if (local_60 == '\0') {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        if ((!bVar2) || (local_38 == 0)) goto LAB_0134fc90;
        FUN_00d50b20();
        local_38 = lVar6;
        bVar2 = true;
      }
      else if ((bVar2) && (local_38 != 0)) {
        FUN_00d50b20();
        local_38 = lVar6;
        bVar2 = true;
      }
      else {
LAB_0134fc90:
        local_38 = lVar6;
        bVar2 = true;
      }
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      if (local_48 == 0) {
        bVar11 = false;
      }
      else {
        pvVar5 = _pthread_getspecific(pVar7);
        if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          pVar7 = (void*)local_38;
        }
        FUN_0125e7c0();
        if (CONCAT71(uStack_5f,local_60) == 0) {
          bVar11 = false;
          lVar6 = 0;
        }
        else {
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e7c0();
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013e61a0();
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e7c0();
          bVar11 = local_c8 == local_108;
          if ((local_100 != '\0') && (local_108 != 0)) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_a8 != '\0') && (local_b0 != 0)) {
            FUN_00d50b20();
          }
          lVar6 = CONCAT71(uStack_5f,local_60);
        }
        if ((local_58 != '\0') && (lVar6 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (bVar11) {
        local_e0 = 0;
        local_d8 = local_38;
        local_d0 = 0;
        local_e8 = lVar9;
        FUN_01329cf0(&local_d8,&local_e8);
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_0039e8b0();
      lVar6 = local_48;
      if (local_40[0] == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40[0] = '\0';
      }
      FUN_00e7bdb0();
      FUN_01287c80();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      FUN_0039e8b0();
      lVar6 = local_48;
      if (local_40[0] == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40[0] = '\0';
      }
      FUN_012879b0();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      lVar10 = lVar10 + 1;
      lVar6 = lVar9;
    } while (lVar10 < *(int *)(*arg1 + 0xc));
    if ((bVar2) && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_50 != '\0') && (lVar9 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 01349bf0
// ============================================================
// Function: FUN_01349bf0
// Address: 01349bf0
// Size: 1386 bytes
// Class: MUAudioSourceDescription
// === MUAudioSourceDescription properties ===
//   MUAudioSourceDescriptionType _currentDescriptionType
//   bool            _isNewDocument
//   bool            _isDetectionInProgress
//   bool            _insertGroupDefinesPerformanceTempo
//   bool            _stretchInsertGroup
//   double          _stretchInsertStartTime
//   bool            _createdFromSoundfile
//   bool            _timelineWasModified
//   GNInt           _recordingsInProgress
//   bool            _isComparing
//   bool            _followsHostRegionSelection
//   bool            _zoomsToHostRegionSelection
//   GNInt           _shouldDisplayStructureProblemDialog
//   bool            _shouldDisplayUnknownArchiveDialog
//   bool            _shouldDisplayImportedArchiveDialog
//   bool            _useAutomaticDetection
//   bool            _percussiveSeparation
//   bool            _hasDistinctAttacks
//   bool            _findSibilantPointsAutomatically
//   bool            _isPreliminary
//   bool            _isTonalicOnly
//   bool            _allowAutomaticPolyphonicDetection
//   SInt64          _startSampleIndex
//   SInt64          _sampleCount
//   SInt64          _signalEndSampleOffset
//   SInt64          _signalStartSampleOffset
//   float           _pitchCenter
//   float           _energyClaimFactor
//   float           _detectionQuality
//   GNFraction      _idealStartPulse
//   ... +8 more


void FUN_01349bf0(void* param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t lVar5;
  void* pVar6;
  int64_t lVar7;
  int64_t *plVar8;
  char unaff_SIL;
  int64_t this_ptr;
  int64_t *plVar9;
  float fVar10;
  float fVar11;
  uint64_t local_a8;
  uint8_t local_a0;
  uint64_t local_98;
  uint8_t local_90;
  int64_t *local_88;
  char local_80;
  uint64_t local_78;
  uint8_t local_70;
  int64_t local_68;
  uint64_t local_60;
  int local_58;
  
  if (*(int64_t *)(this_ptr + 0x1f8) != 0) {
    return;
  }
  if (*(int64_t *)(this_ptr + 0x200) != 0) {
    return;
  }
  if (*(int64_t *)(this_ptr + 0x148) == 0) {
LAB_01349fcd:
    if (*(int64_t *)(this_ptr + 0x200) != 0) {
      return;
    }
    if (*(int64_t *)(this_ptr + 0x148) == 0) {
      return;
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar2 = FUN_0141bab0();
    if (iVar2 != 3) {
      return;
    }
  }
  else {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar2 = FUN_0141bab0();
    if (iVar2 != 1) {
      if (*(int64_t *)(this_ptr + 0x1f8) != 0) {
        return;
      }
      goto LAB_01349fcd;
    }
  }
  plVar8 = *(int64_t **)(this_ptr + 0x38);
  if (plVar8 == (int64_t *)0x0) {
    return;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    plVar8 = *(int64_t **)(this_ptr + 0x38);
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar8 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar8 + 0x370))();
  lVar4 = *(int64_t *)(this_ptr + 0x40);
  if (lVar4 != 0) {
    FUN_00d50b00();
    local_70 = 0;
    local_78 = 0;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_60._4_4_ = 0;
    local_68 = lVar4;
    while( true ) {
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar2 = -local_60._4_4_;
        }
        else {
          iVar2 = (int)local_60 - local_60._4_4_;
          local_60 = CONCAT44(local_60._4_4_,iVar2);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar2 = 0;
        }
        local_60 = CONCAT44(iVar2,(int)local_60);
      }
      lVar5 = (int64_t)(int)local_60;
      iVar2 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar2);
      if (*(int *)(local_68 + 0xc) <= iVar2) break;
      lVar7 = *(int64_t *)(local_68 + 0x10);
      local_78 = *(void*)(lVar7 + 8 + lVar5 * 8);
      cVar1 = FUN_01347c70();
      pVar6 = (void*)lVar7;
      if (cVar1 == '\0') {
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013de560();
        plVar8 = local_88;
        if (local_80 == '\0') {
          if (local_88 != (int64_t *)0x0) {
            FUN_00d50b00();
            if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01349e07;
          }
        }
        else if (local_88 != (int64_t *)0x0) {
LAB_01349e07:
          pvVar3 = _pthread_getspecific(pVar6);
          plVar9 = plVar8;
          if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            plVar9 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
          fVar10 = (float)(**(code **)(*plVar9 + 0x3e0))();
          if (!NAN(fVar10)) {
            pvVar3 = _pthread_getspecific(pVar6);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_00d50b00();
            pVar6 = 1;
            FUN_014d9720(1,1);
            if (this_ptr != 0) {
              FUN_00d50b20();
            }
            pvVar3 = _pthread_getspecific(pVar6);
            plVar9 = plVar8;
            if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              plVar9 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
            }
            fVar11 = (float)(**(code **)(*plVar9 + 0x3e0))();
            if (NAN(fVar11)) {
              pvVar3 = _pthread_getspecific(pVar6);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_014bd3c0(fVar10);
            }
            pvVar3 = _pthread_getspecific(pVar6);
            if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              plVar8 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
            }
            fVar11 = (float)(**(code **)(*plVar8 + 0x3e0))();
            FUN_01348960(fVar11 - fVar10);
          }
          FUN_00d50b20();
        }
      }
    }
    lVar5 = local_68;
    FUN_001150f0();
    param_1 = (void*)lVar5;
  }
  if (unaff_SIL == '\0') goto LAB_0134a0c6;
  if (((*(int64_t *)(this_ptr + 0x1f8) == 0) && (*(int64_t *)(this_ptr + 0x200) == 0)) &&
     (*(int64_t *)(this_ptr + 0x148) != 0)) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar2 = FUN_0141bab0();
    if (iVar2 != 3) goto LAB_0134a061;
  }
  else {
LAB_0134a061:
    cVar1 = FUN_01334f30();
    if (cVar1 == '\0') goto LAB_0134a0c6;
  }
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  FUN_0134a250(&local_98,&local_a8,0,0,0,0);
LAB_0134a0c6:
  if (*(char *)(this_ptr + 0x141) != '\x01') {
    FUN_00d64850();
    *(void*)(this_ptr + 0x141) = 1;
    FUN_00d64910();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01353f80
// ============================================================
// Function: FUN_01353f80
// Address: 01353f80
// Size: 1469 bytes
// Class: MUAudioSourceDescription
// === MUAudioSourceDescription properties ===
//   MUAudioSourceDescriptionType _currentDescriptionType
//   bool            _isNewDocument
//   bool            _isDetectionInProgress
//   bool            _insertGroupDefinesPerformanceTempo
//   bool            _stretchInsertGroup
//   double          _stretchInsertStartTime
//   bool            _createdFromSoundfile
//   bool            _timelineWasModified
//   GNInt           _recordingsInProgress
//   bool            _isComparing
//   bool            _followsHostRegionSelection
//   bool            _zoomsToHostRegionSelection
//   GNInt           _shouldDisplayStructureProblemDialog
//   bool            _shouldDisplayUnknownArchiveDialog
//   bool            _shouldDisplayImportedArchiveDialog
//   bool            _useAutomaticDetection
//   bool            _percussiveSeparation
//   bool            _hasDistinctAttacks
//   bool            _findSibilantPointsAutomatically
//   bool            _isPreliminary
//   bool            _isTonalicOnly
//   bool            _allowAutomaticPolyphonicDetection
//   SInt64          _startSampleIndex
//   SInt64          _sampleCount
//   SInt64          _signalEndSampleOffset
//   SInt64          _signalStartSampleOffset
//   float           _pitchCenter
//   float           _energyClaimFactor
//   float           _detectionQuality
//   GNFraction      _idealStartPulse
//   ... +8 more


void FUN_01353f80(uint64_t param_1,int64_t *param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  void*puVar4;
  void *pvVar5;
  void*puVar6;
  int iVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t this_ptr;
  int64_t lVar10;
  uint64_t local_118;
  uint8_t local_110;
  int64_t local_108;
  uint8_t local_100;
  int64_t local_f8;
  int64_t *local_f0;
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
  int64_t local_48;
  char local_40;
  
  if (*(char *)(this_ptr + 0x1a9) == '\0') {
    if (*(char *)(this_ptr + 0x172) == '\0') {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      puVar6 = &g_02572358;
      *puVar4 = &g_02572358;
      (*g_02572370)();
      lVar8 = *param_2;
      if (*(int *)(lVar8 + 0x18) < 8) {
        bVar2 = false;
        lVar10 = 0;
      }
      else {
        lVar9 = 0;
        lVar10 = 0;
        bVar2 = false;
        local_f0 = param_2;
        do {
          iVar1 = *(int *)(*(int64_t *)(lVar8 + 0x10) + 4 + lVar9 * 8);
          lVar8 = *(int64_t *)(this_ptr + 0x40);
          local_f8 = lVar9;
          if (lVar8 != 0) {
            FUN_00d50b00();
          }
          MUAudioSourceDescription_assignEnergyClaimsInSampleRange(0,0,(int64_t)iVar1,0);
          lVar9 = local_e8;
          if (local_e8 == lVar10) {
            lVar9 = lVar10;
            if ((bVar2) || (local_e8 == 0)) {
              bVar3 = bVar2;
              if ((local_e0 != '\0') && (local_e8 != 0)) {
                FUN_00d50b20();
              }
            }
            else if (local_e0 == '\0') {
              FUN_00d50b00();
              bVar3 = true;
            }
            else {
              bVar3 = true;
            }
          }
          else if (local_e0 == '\0') {
            if (local_e8 != 0) {
              FUN_00d50b00();
            }
            bVar3 = true;
            if ((bVar2) && (lVar10 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            if ((bVar2) && (lVar10 != 0)) {
              FUN_00d50b20();
            }
            local_e0 = '\0';
            bVar3 = true;
          }
          bVar2 = bVar3;
          lVar10 = lVar9;
          if (lVar8 != 0) {
            FUN_00d50b20();
          }
          if (0 < *(int *)(lVar10 + 0xc)) {
            lVar8 = 0;
            do {
              lVar9 = *(int64_t *)(*(int64_t *)(lVar10 + 0x10) + lVar8 * 8);
              if (lVar9 != 0) {
                FUN_00d50b00();
              }
              FUN_00d235a0();
              if (lVar9 != 0) {
                FUN_00d50b20();
              }
              lVar8 = lVar8 + 1;
            } while (lVar8 < *(int *)(lVar10 + 0xc));
          }
          lVar9 = local_f8 + 1;
          lVar8 = *local_f0;
          iVar1 = *(int *)(lVar8 + 0x18);
          iVar7 = iVar1 + 7;
          if (-1 < iVar1) {
            iVar7 = iVar1;
          }
          puVar6 = (void*)(int64_t)(iVar7 >> 3);
        } while (lVar9 < (int64_t)puVar6);
      }
      if (0 < *(int *)((int64_t)puVar4 + 0xc)) {
        lVar8 = 0;
        do {
          pvVar5 = _pthread_getspecific((void*)puVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_90 = '\0';
          local_98 = 0;
          FUN_014cfcc0();
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < *(int *)((int64_t)puVar4 + 0xc));
      }
      if (*(char *)(this_ptr + 0x1a8) != '\x01') {
        FUN_00d64850();
        *(void*)(this_ptr + 0x1a8) = 1;
        FUN_00d64910();
      }
      if ((bVar2) && (lVar10 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    else {
      FUN_00d403d0();
      local_d8 = g_027bf410;
      if (g_027bf410 != 0) {
        FUN_00d50b00();
      }
      local_d0 = '\x01';
      FUN_00d50b00();
      local_c8 = 0;
      local_c0 = '\0';
      FUN_00d40470(&local_c8,&stack0xffffffffffffff80,3,3);
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      local_118 = 0;
      local_110 = 0;
      local_108 = *param_2;
      local_100 = 0;
      FUN_0134a250(&local_108,&local_118,0,0);
      FUN_00d403d0();
      local_b8 = g_027e0908;
      if (g_027e0908 != 0) {
        FUN_00d50b00();
      }
      local_b0 = '\x01';
      FUN_00d50b00();
      local_a8 = 0;
      local_a0 = '\0';
      FUN_00d40470(&local_a8,&stack0xffffffffffffff90,3,3);
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}



// ============================================================
// 0134b5a0
// ============================================================
// Function: FUN_0134b5a0
// Address: 0134b5a0
// Size: 1452 bytes
// Class: MUAudioSourceDescription
// === MUAudioSourceDescription properties ===
//   MUAudioSourceDescriptionType _currentDescriptionType
//   bool            _isNewDocument
//   bool            _isDetectionInProgress
//   bool            _insertGroupDefinesPerformanceTempo
//   bool            _stretchInsertGroup
//   double          _stretchInsertStartTime
//   bool            _createdFromSoundfile
//   bool            _timelineWasModified
//   GNInt           _recordingsInProgress
//   bool            _isComparing
//   bool            _followsHostRegionSelection
//   bool            _zoomsToHostRegionSelection
//   GNInt           _shouldDisplayStructureProblemDialog
//   bool            _shouldDisplayUnknownArchiveDialog
//   bool            _shouldDisplayImportedArchiveDialog
//   bool            _useAutomaticDetection
//   bool            _percussiveSeparation
//   bool            _hasDistinctAttacks
//   bool            _findSibilantPointsAutomatically
//   bool            _isPreliminary
//   bool            _isTonalicOnly
//   bool            _allowAutomaticPolyphonicDetection
//   SInt64          _startSampleIndex
//   SInt64          _sampleCount
//   SInt64          _signalEndSampleOffset
//   SInt64          _signalStartSampleOffset
//   float           _pitchCenter
//   float           _energyClaimFactor
//   float           _detectionQuality
//   GNFraction      _idealStartPulse
//   ... +8 more


void* FUN_0134b5a0(int64_t *param_1,int64_t *param_2,char param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  void*puVar4;
  int64_t lVar5;
  void *pvVar6;
  void* pVar7;
  int64_t lVar8;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t local_70;
  char local_68;
  int64_t local_50;
  char local_48;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  (*g_02572370)();
  lVar5 = *(int64_t *)(arg1 + 0x40);
  if (*(int *)(lVar5 + 0xc) < 1) {
    bVar1 = false;
    lVar9 = 0;
    bVar2 = false;
    lVar10 = 0;
  }
  else {
    lVar11 = 0;
    lVar10 = 0;
    bVar2 = false;
    lVar9 = 0;
    lVar8 = 0;
    bVar1 = false;
    do {
      pVar7 = (void*)lVar8;
      lVar5 = *(int64_t *)(*(int64_t *)(lVar5 + 0x10) + lVar11 * 8);
      if (lVar9 == lVar5) {
        if ((!bVar1) && (lVar9 != 0)) {
          bVar1 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        if ((bVar1) && (lVar9 != 0)) {
          FUN_00d50b20();
          bVar1 = true;
          lVar9 = lVar5;
        }
        else {
          bVar1 = true;
          lVar9 = lVar5;
        }
      }
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dfcb0();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        if (param_3 == '\0') {
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de560();
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar3 = FUN_014bc070();
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (cVar3 != '\0') goto LAB_0134b620;
        }
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfdd0();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (local_50 == 0) {
          if (*param_1 != 0) {
            pvVar6 = _pthread_getspecific(pVar7);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013de560();
            if (local_68 == '\0') {
              if (local_70 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            local_50 = local_70;
            local_48 = '\0';
            FUN_00d21140();
            if (local_70 != 0) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          if (*param_2 != 0) {
            pvVar6 = _pthread_getspecific(pVar7);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013de560();
            if (local_68 == '\0') {
              if (local_70 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            local_50 = local_70;
            local_48 = '\0';
            FUN_00d21140();
            if (local_70 != 0) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
          }
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013e5500();
          if (lVar10 == local_50) {
            if ((bVar2) || (lVar10 == 0)) goto joined_r0x0134ba47;
            bVar2 = true;
            if (local_48 == '\0') {
              FUN_00d50b00();
              lVar5 = lVar10;
              goto LAB_0134ba0b;
            }
          }
          else if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
            lVar5 = local_50;
            if ((bVar2) && (lVar10 != 0)) {
              FUN_00d50b20();
            }
LAB_0134ba0b:
            bVar2 = true;
            lVar10 = lVar5;
joined_r0x0134ba47:
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
          else if ((bVar2) && (lVar10 != 0)) {
            FUN_00d50b20();
            bVar2 = true;
            lVar10 = local_50;
          }
          else {
            bVar2 = true;
            lVar10 = local_50;
          }
          local_48 = '\0';
          FUN_00d235a0();
          local_50 = lVar10;
        }
      }
LAB_0134b620:
      lVar11 = lVar11 + 1;
      lVar5 = *(int64_t *)(arg1 + 0x40);
      lVar8 = (int64_t)*(int *)(lVar5 + 0xc);
    } while (lVar11 < lVar8);
  }
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  if ((bVar1) && (lVar9 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (lVar10 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 0134c610
// ============================================================
// Function: FUN_0134c610
// Address: 0134c610
// Size: 1849 bytes
// Class: MUAudioSourceDescription
// === MUAudioSourceDescription properties ===
//   MUAudioSourceDescriptionType _currentDescriptionType
//   bool            _isNewDocument
//   bool            _isDetectionInProgress
//   bool            _insertGroupDefinesPerformanceTempo
//   bool            _stretchInsertGroup
//   double          _stretchInsertStartTime
//   bool            _createdFromSoundfile
//   bool            _timelineWasModified
//   GNInt           _recordingsInProgress
//   bool            _isComparing
//   bool            _followsHostRegionSelection
//   bool            _zoomsToHostRegionSelection
//   GNInt           _shouldDisplayStructureProblemDialog
//   bool            _shouldDisplayUnknownArchiveDialog
//   bool            _shouldDisplayImportedArchiveDialog
//   bool            _useAutomaticDetection
//   bool            _percussiveSeparation
//   bool            _hasDistinctAttacks
//   bool            _findSibilantPointsAutomatically
//   bool            _isPreliminary
//   bool            _isTonalicOnly
//   bool            _allowAutomaticPolyphonicDetection
//   SInt64          _startSampleIndex
//   SInt64          _sampleCount
//   SInt64          _signalEndSampleOffset
//   SInt64          _signalStartSampleOffset
//   float           _pitchCenter
//   float           _energyClaimFactor
//   float           _detectionQuality
//   GNFraction      _idealStartPulse
//   ... +8 more


void FUN_0134c610(void* param_1)

{
  void *pvVar1;
  void* pVar2;
  int64_t lVar3;
  uint uVar4;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_70;
  char local_68;
  int64_t local_40;
  char local_38;
  
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dfcb0();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dd790();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  uVar4 = *(uint *)(local_40 + 0xc);
  if (0 < (int)uVar4) {
    lVar3 = (uint64_t)uVar4 + 1;
    do {
      uVar4 = uVar4 - 1;
      pVar2 = uVar4;
      pvVar1 = _pthread_getspecific(uVar4);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef8d0();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      pvVar1 = _pthread_getspecific(pVar2);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        pvVar1 = _pthread_getspecific(pVar2);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01270ab0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != 0) {
          pvVar1 = _pthread_getspecific(pVar2);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01270ab0();
          pvVar1 = _pthread_getspecific(pVar2);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dffb0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        pvVar1 = _pthread_getspecific(pVar2);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012708c0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != 0) {
          pvVar1 = _pthread_getspecific(pVar2);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012708c0();
          pvVar1 = _pthread_getspecific(pVar2);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dffb0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        pvVar1 = _pthread_getspecific(pVar2);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != 0) {
          pvVar1 = _pthread_getspecific(pVar2);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar1 = _pthread_getspecific(pVar2);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152ebe0();
          pvVar1 = _pthread_getspecific(pVar2);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01508450();
          pvVar1 = _pthread_getspecific(pVar2);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0039e8b0();
          if (local_68 == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          FUN_0150ec20();
          if (local_70 != 0) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if ((local_a8 != '\0') && (local_b0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
        }
        pvVar1 = _pthread_getspecific(pVar2);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        pvVar1 = _pthread_getspecific(pVar2);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6e20();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        pvVar1 = _pthread_getspecific(pVar2);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0128dda0();
      }
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      lVar3 = lVar3 + -1;
    } while (1 < lVar3);
  }
  FUN_00d50b20();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 013549f0
// ============================================================
// Function: FUN_013549f0
// Address: 013549f0
// Size: 1267 bytes
// Class: MUAudioSourceDescription
// === MUAudioSourceDescription properties ===
//   MUAudioSourceDescriptionType _currentDescriptionType
//   bool            _isNewDocument
//   bool            _isDetectionInProgress
//   bool            _insertGroupDefinesPerformanceTempo
//   bool            _stretchInsertGroup
//   double          _stretchInsertStartTime
//   bool            _createdFromSoundfile
//   bool            _timelineWasModified
//   GNInt           _recordingsInProgress
//   bool            _isComparing
//   bool            _followsHostRegionSelection
//   bool            _zoomsToHostRegionSelection
//   GNInt           _shouldDisplayStructureProblemDialog
//   bool            _shouldDisplayUnknownArchiveDialog
//   bool            _shouldDisplayImportedArchiveDialog
//   bool            _useAutomaticDetection
//   bool            _percussiveSeparation
//   bool            _hasDistinctAttacks
//   bool            _findSibilantPointsAutomatically
//   bool            _isPreliminary
//   bool            _isTonalicOnly
//   bool            _allowAutomaticPolyphonicDetection
//   SInt64          _startSampleIndex
//   SInt64          _sampleCount
//   SInt64          _signalEndSampleOffset
//   SInt64          _signalStartSampleOffset
//   float           _pitchCenter
//   float           _energyClaimFactor
//   float           _detectionQuality
//   GNFraction      _idealStartPulse
//   ... +8 more


void FUN_013549f0(float param_1)

{
  void*puVar1;
  code *pcVar2;
  char cVar3;
  void*puVar4;
  void *pvVar5;
  void*puVar6;
  void* pVar7;
  void*puVar8;
  int64_t this_ptr;
  int64_t lVar9;
  int64_t lVar10;
  float fVar11;
  
  fVar11 = *(float *)(this_ptr + 0x7c);
  if ((fVar11 != param_1) || (NAN(fVar11) || NAN(param_1))) {
    FUN_00d64850();
    *(float *)(this_ptr + 0x7c) = param_1;
    FUN_00d64910();
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar8 = &g_02572358;
    *puVar4 = &g_02572358;
    pcVar2 = g_02572370;
    (*g_02572370)();
    if (param_1 <= fVar11) {
      lVar10 = *(int64_t *)(this_ptr + 0x100);
      if (0 < *(int *)(lVar10 + 0xc)) {
        lVar9 = 0;
        do {
          pVar7 = (void*)puVar8;
          lVar10 = *(int64_t *)(*(int64_t *)(lVar10 + 0x10) + lVar9 * 8);
          if (lVar10 != 0) {
            FUN_00d50b00();
          }
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar11 = (float)FUN_014bae60();
          if ((param_1 <= fVar11) && (cVar3 = FUN_00d23d70(), cVar3 == '\0')) {
            FUN_00d21140();
          }
          if (lVar10 != 0) {
            FUN_00d50b20();
          }
          lVar9 = lVar9 + 1;
          lVar10 = *(int64_t *)(this_ptr + 0x100);
          puVar8 = (void*)(int64_t)*(int *)(lVar10 + 0xc);
        } while (lVar9 < (int64_t)puVar8);
      }
      if (0 < *(int *)((int64_t)puVar4 + 0xc)) {
        lVar10 = 0;
        do {
          lVar9 = *(int64_t *)(puVar4[2] + lVar10 * 8);
          if (lVar9 != 0) {
            FUN_00d50b00();
          }
          FUN_01329970();
          if (lVar9 != 0) {
            FUN_00d50b20();
          }
          lVar9 = *(int64_t *)(puVar4[2] + lVar10 * 8);
          if (lVar9 != 0) {
            FUN_00d50b00();
          }
          FUN_01329030();
          if (lVar9 != 0) {
            FUN_00d50b20();
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < *(int *)((int64_t)puVar4 + 0xc));
      }
    }
    else {
      lVar10 = *(int64_t *)(this_ptr + 0xd0);
      if (0 < *(int *)(lVar10 + 0xc)) {
        lVar9 = 0;
        do {
          pVar7 = (void*)puVar8;
          lVar10 = *(int64_t *)(*(int64_t *)(lVar10 + 0x10) + lVar9 * 8);
          if (lVar10 != 0) {
            FUN_00d50b00();
          }
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar11 = (float)FUN_014bae60();
          if ((fVar11 < param_1) && (cVar3 = FUN_00d23d70(), cVar3 == '\0')) {
            FUN_00d21140();
          }
          if (lVar10 != 0) {
            FUN_00d50b20();
          }
          lVar9 = lVar9 + 1;
          lVar10 = *(int64_t *)(this_ptr + 0xd0);
          puVar8 = (void*)(int64_t)*(int *)(lVar10 + 0xc);
        } while (lVar9 < (int64_t)puVar8);
      }
      if (0 < *(int *)((int64_t)puVar4 + 0xc)) {
        lVar10 = 0;
        do {
          lVar9 = *(int64_t *)(puVar4[2] + lVar10 * 8);
          if (lVar9 != 0) {
            FUN_00d50b00();
          }
          FUN_013291f0();
          if (lVar9 != 0) {
            FUN_00d50b20();
          }
          lVar9 = *(int64_t *)(puVar4[2] + lVar10 * 8);
          if (lVar9 != 0) {
            FUN_00d50b00();
          }
          FUN_013297b0();
          if (lVar9 != 0) {
            FUN_00d50b20();
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < *(int *)((int64_t)puVar4 + 0xc));
      }
    }
    if (*(int64_t *)(this_ptr + 0x1b8) == 0) {
      puVar6 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &g_02572358;
      (*pcVar2)();
      puVar1 = *(void**)(this_ptr + 0x1b8);
      if (puVar1 == puVar6) {
        FUN_00d50b20();
      }
      else {
        *(void**)(this_ptr + 0x1b8) = puVar6;
        if (puVar1 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
    }
    if (0 < *(int *)((int64_t)puVar4 + 0xc)) {
      lVar10 = 0;
      do {
        lVar9 = *(int64_t *)(puVar4[2] + lVar10 * 8);
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        FUN_00d235a0();
        if (lVar9 != 0) {
          FUN_00d50b20();
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < *(int *)((int64_t)puVar4 + 0xc));
    }
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 010f06d0
// ============================================================
// Function: FUN_010f06d0
// Address: 010f06d0
// Size: 1637 bytes
// Class: MUAudioSourceDescription
// String references:
//   "bool"
//   "GNUni"
//   "MUTimeline"
//   "_useAutomaticDetection"
//   "_percussiveSeparation"
//   "_hasDistinctAttacks"
//   "_findSibilantPointsAutomatically"
//   "_isPreliminary"
//   "_isTonalicOnly"
//   "_allowAutomaticPolyphonicDetection"
//   "MUAudioSourceDescriptionRange"
// === MUAudioSourceDescription properties ===
//   MUAudioSourceDescriptionType _currentDescriptionType
//   bool            _isNewDocument
//   bool            _isDetectionInProgress
//   bool            _insertGroupDefinesPerformanceTempo
//   bool            _stretchInsertGroup
//   double          _stretchInsertStartTime
//   bool            _createdFromSoundfile
//   bool            _timelineWasModified
//   GNInt           _recordingsInProgress
//   bool            _isComparing
//   bool            _followsHostRegionSelection
//   bool            _zoomsToHostRegionSelection
//   GNInt           _shouldDisplayStructureProblemDialog
//   bool            _shouldDisplayUnknownArchiveDialog
//   bool            _shouldDisplayImportedArchiveDialog
//   bool            _useAutomaticDetection
//   bool            _percussiveSeparation
//   bool            _hasDistinctAttacks
//   bool            _findSibilantPointsAutomatically
//   bool            _isPreliminary
//   bool            _isTonalicOnly
//   bool            _allowAutomaticPolyphonicDetection
//   SInt64          _startSampleIndex
//   SInt64          _sampleCount
//   SInt64          _signalEndSampleOffset
//   SInt64          _signalStartSampleOffset
//   float           _pitchCenter
//   float           _energyClaimFactor
//   float           _detectionQuality
//   GNFraction      _idealStartPulse
//   ... +8 more


void FUN_010f06d0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  int iVar8;
  int64_t lVar9;
  char *pcVar10;
  int64_t arg1;
  void*this_ptr;
  void*puVar11;
  
  FUN_00d4ff80();
  *this_ptr = &g_02590538;
  uVar1 = *(void*)(arg1 + 0x14);
  uVar2 = *(void*)(arg1 + 0x18);
  uVar3 = *(void*)(arg1 + 0x1c);
  uVar4 = *(void*)(arg1 + 0x20);
  uVar5 = *(void*)(arg1 + 0x24);
  uVar6 = *(void*)(arg1 + 0x28);
  uVar7 = *(void*)(arg1 + 0x2c);
  *(void*)(this_ptr + 2) = *(void*)(arg1 + 0x10);
  *(void*)((int64_t)this_ptr + 0x14) = uVar1;
  *(void*)(this_ptr + 3) = uVar2;
  *(void*)((int64_t)this_ptr + 0x1c) = uVar3;
  *(void*)(this_ptr + 4) = uVar4;
  *(void*)((int64_t)this_ptr + 0x24) = uVar5;
  *(void*)(this_ptr + 5) = uVar6;
  *(void*)((int64_t)this_ptr + 0x2c) = uVar7;
  this_ptr[6] = *(void*)(arg1 + 0x30);
  *this_ptr = &g_025e0530;
  FUN_010f0e90();
  FUN_010f0f70();
  FUN_010f1050();
  *(void*)(this_ptr + 10) = 0;
  lVar9 = FUN_010f03e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_010f1130();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x54) = 0;
  lVar9 = FUN_010f03e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x55) = 0;
  lVar9 = FUN_010f03e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x56) = 0;
  lVar9 = FUN_010f03e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x57) = 0;
  lVar9 = FUN_010f03e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xb) = 0;
  lVar9 = FUN_010f03e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x59) = 0;
  lVar9 = FUN_010f03e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x5a) = 0;
  lVar9 = FUN_010f03e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  puVar11 = this_ptr + 0xc;
  this_ptr[0xc] = 0;
  lVar9 = FUN_010f03e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_010f12c0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTimeline",param_3,param_4,puVar11);
  }
  this_ptr[0xd] = 0;
  lVar9 = FUN_010f03e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_010f13b0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceDescriptionRange");
  }
  this_ptr[0xe] = 0;
  lVar9 = FUN_010f03e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_010f14a0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceDescriptionRange");
  }
  return;
}



// ============================================================
// 0134bda0
// ============================================================
// Function: FUN_0134bda0
// Address: 0134bda0
// Size: 830 bytes
// Class: MUAudioSourceDescription
// === MUAudioSourceDescription properties ===
//   MUAudioSourceDescriptionType _currentDescriptionType
//   bool            _isNewDocument
//   bool            _isDetectionInProgress
//   bool            _insertGroupDefinesPerformanceTempo
//   bool            _stretchInsertGroup
//   double          _stretchInsertStartTime
//   bool            _createdFromSoundfile
//   bool            _timelineWasModified
//   GNInt           _recordingsInProgress
//   bool            _isComparing
//   bool            _followsHostRegionSelection
//   bool            _zoomsToHostRegionSelection
//   GNInt           _shouldDisplayStructureProblemDialog
//   bool            _shouldDisplayUnknownArchiveDialog
//   bool            _shouldDisplayImportedArchiveDialog
//   bool            _useAutomaticDetection
//   bool            _percussiveSeparation
//   bool            _hasDistinctAttacks
//   bool            _findSibilantPointsAutomatically
//   bool            _isPreliminary
//   bool            _isTonalicOnly
//   bool            _allowAutomaticPolyphonicDetection
//   SInt64          _startSampleIndex
//   SInt64          _sampleCount
//   SInt64          _signalEndSampleOffset
//   SInt64          _signalStartSampleOffset
//   float           _pitchCenter
//   float           _energyClaimFactor
//   float           _detectionQuality
//   GNFraction      _idealStartPulse
//   ... +8 more


void* FUN_0134bda0(uint64_t param_1,char param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  void*puVar4;
  void *pvVar5;
  int64_t lVar6;
  void* pVar7;
  int64_t lVar8;
  bool bVar9;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar10;
  int64_t lVar11;
  int64_t local_50;
  char local_48;
  int64_t local_38;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  (*g_02572370)();
  lVar6 = *(int64_t *)(arg1 + 0x40);
  if (*(int *)(lVar6 + 0xc) < 1) {
    bVar2 = false;
    local_38 = 0;
    bVar9 = false;
    lVar10 = 0;
  }
  else {
    lVar11 = 0;
    lVar10 = 0;
    bVar9 = false;
    local_38 = 0;
    lVar8 = 0;
    bVar2 = false;
    do {
      pVar7 = (void*)lVar8;
      lVar6 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + lVar11 * 8);
      if (local_38 == lVar6) {
        if ((!bVar2) && (local_38 != 0)) {
          bVar2 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (local_38 != 0)) {
          FUN_00d50b20();
          bVar2 = true;
          local_38 = lVar6;
        }
        else {
          bVar2 = true;
          local_38 = lVar6;
        }
      }
      pvVar5 = _pthread_getspecific(pVar7);
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        pVar7 = (void*)local_38;
      }
      FUN_013dfcb0();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        pvVar5 = _pthread_getspecific(pVar7);
        if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          pVar7 = (void*)local_38;
        }
        FUN_013de560();
        if (local_50 == lVar10) {
          lVar6 = lVar10;
          bVar1 = bVar9;
          if ((!bVar9) && (local_50 != 0)) {
            bVar1 = true;
            if (local_48 != '\0') goto LAB_0134c000;
            FUN_00d50b00();
            bVar1 = true;
          }
LAB_0134bfec:
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          lVar6 = local_50;
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
            bVar1 = true;
            if ((bVar9) && (lVar10 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_0134bfec;
          }
          bVar1 = true;
          if ((bVar9) && (lVar10 != 0)) {
            FUN_00d50b20();
          }
        }
LAB_0134c000:
        lVar10 = lVar6;
        bVar9 = bVar1;
        if (param_2 == '\0') {
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar3 = FUN_014bc070();
          if (cVar3 == '\0') {
            local_48 = '\0';
            FUN_00d21140();
            local_50 = lVar6;
          }
        }
        else {
          local_48 = '\0';
          FUN_00d21140();
          local_50 = lVar6;
        }
      }
      lVar11 = lVar11 + 1;
      lVar6 = *(int64_t *)(arg1 + 0x40);
      lVar8 = (int64_t)*(int *)(lVar6 + 0xc);
    } while (lVar11 < lVar8);
  }
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  if ((bVar2) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar9) && (lVar10 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 01349890
// ============================================================
// Function: FUN_01349890
// Address: 01349890
// Size: 725 bytes
// Class: MUAudioSourceDescription
// === MUAudioSourceDescription properties ===
//   MUAudioSourceDescriptionType _currentDescriptionType
//   bool            _isNewDocument
//   bool            _isDetectionInProgress
//   bool            _insertGroupDefinesPerformanceTempo
//   bool            _stretchInsertGroup
//   double          _stretchInsertStartTime
//   bool            _createdFromSoundfile
//   bool            _timelineWasModified
//   GNInt           _recordingsInProgress
//   bool            _isComparing
//   bool            _followsHostRegionSelection
//   bool            _zoomsToHostRegionSelection
//   GNInt           _shouldDisplayStructureProblemDialog
//   bool            _shouldDisplayUnknownArchiveDialog
//   bool            _shouldDisplayImportedArchiveDialog
//   bool            _useAutomaticDetection
//   bool            _percussiveSeparation
//   bool            _hasDistinctAttacks
//   bool            _findSibilantPointsAutomatically
//   bool            _isPreliminary
//   bool            _isTonalicOnly
//   bool            _allowAutomaticPolyphonicDetection
//   SInt64          _startSampleIndex
//   SInt64          _sampleCount
//   SInt64          _signalEndSampleOffset
//   SInt64          _signalStartSampleOffset
//   float           _pitchCenter
//   float           _energyClaimFactor
//   float           _detectionQuality
//   GNFraction      _idealStartPulse
//   ... +8 more


void FUN_01349890(void* param_1)

{
  char cVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t this_ptr;
  int iVar6;
  float fVar7;
  float fVar8;
  uint64_t uVar9;
  int64_t *local_48;
  char local_40;
  
  plVar5 = *(int64_t **)(this_ptr + 0x38);
  if (plVar5 != (int64_t *)0x0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      plVar5 = *(int64_t **)(this_ptr + 0x38);
      lVar3 = FUN_00e8b990();
      if (lVar3 != 0) {
        plVar5 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
      }
    }
    uVar9 = (**(code **)(*plVar5 + 0x370))();
    lVar3 = *(int64_t *)(this_ptr + 0x40);
    if (lVar3 != 0) {
      FUN_00d50b00();
      if (0 < *(int *)(lVar3 + 0xc)) {
        iVar6 = 0;
        do {
          cVar1 = FUN_01347c70();
          if (cVar1 == '\0') {
            pvVar2 = _pthread_getspecific(param_1);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013de560();
            if (local_40 == '\0') {
              if (local_48 != (int64_t *)0x0) {
                FUN_00d50b00();
                goto LAB_01349a00;
              }
            }
            else if (local_48 != (int64_t *)0x0) {
LAB_01349a00:
              pvVar2 = _pthread_getspecific(param_1);
              plVar5 = local_48;
              if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
                plVar5 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
              }
              fVar7 = (float)(**(code **)(*plVar5 + 0x3e0))();
              if (!NAN(fVar7)) {
                pvVar2 = _pthread_getspecific(param_1);
                if (pvVar2 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_014bd640(uVar9);
                pvVar2 = _pthread_getspecific(param_1);
                plVar5 = local_48;
                if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
                  plVar5 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
                }
                fVar8 = (float)(**(code **)(*plVar5 + 0x3e0))();
                if (NAN(fVar8)) {
                  pvVar2 = _pthread_getspecific(param_1);
                  if (pvVar2 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_014bd3c0(fVar7);
                }
                pvVar2 = _pthread_getspecific(param_1);
                plVar5 = local_48;
                if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
                  plVar5 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
                }
                fVar8 = (float)(**(code **)(*plVar5 + 0x3e0))();
                FUN_01348960(fVar8 - fVar7);
              }
              FUN_00d50b20();
            }
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(lVar3 + 0xc));
      }
      FUN_001150f0();
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 0110ae80
// ============================================================
// Function: FUN_0110ae80
// Address: 0110ae80
// Size: 610 bytes
// Class: MUAudioSourceDescription
// String references:
//   "MUAudioSourceComponent"
//   "MUAudioSourceDescription"
//   "MUAudioSourceElement"
//   "_audioSourceElements"
//   "_audioSourceElement"
// === MUAudioSourceDescription properties ===
//   MUAudioSourceDescriptionType _currentDescriptionType
//   bool            _isNewDocument
//   bool            _isDetectionInProgress
//   bool            _insertGroupDefinesPerformanceTempo
//   bool            _stretchInsertGroup
//   double          _stretchInsertStartTime
//   bool            _createdFromSoundfile
//   bool            _timelineWasModified
//   GNInt           _recordingsInProgress
//   bool            _isComparing
//   bool            _followsHostRegionSelection
//   bool            _zoomsToHostRegionSelection
//   GNInt           _shouldDisplayStructureProblemDialog
//   bool            _shouldDisplayUnknownArchiveDialog
//   bool            _shouldDisplayImportedArchiveDialog
//   bool            _useAutomaticDetection
//   bool            _percussiveSeparation
//   bool            _hasDistinctAttacks
//   bool            _findSibilantPointsAutomatically
//   bool            _isPreliminary
//   bool            _isTonalicOnly
//   bool            _allowAutomaticPolyphonicDetection
//   SInt64          _startSampleIndex
//   SInt64          _sampleCount
//   SInt64          _signalEndSampleOffset
//   SInt64          _signalStartSampleOffset
//   float           _pitchCenter
//   float           _energyClaimFactor
//   float           _detectionQuality
//   GNFraction      _idealStartPulse
//   ... +8 more


void FUN_0110ae80(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  int iVar8;
  int64_t lVar9;
  char *pcVar10;
  int64_t arg1;
  void*this_ptr;
  void*puVar11;
  
  FUN_00d4ff80();
  *this_ptr = &g_02590538;
  uVar1 = *(void*)(arg1 + 0x14);
  uVar2 = *(void*)(arg1 + 0x18);
  uVar3 = *(void*)(arg1 + 0x1c);
  uVar4 = *(void*)(arg1 + 0x20);
  uVar5 = *(void*)(arg1 + 0x24);
  uVar6 = *(void*)(arg1 + 0x28);
  uVar7 = *(void*)(arg1 + 0x2c);
  *(void*)(this_ptr + 2) = *(void*)(arg1 + 0x10);
  *(void*)((int64_t)this_ptr + 0x14) = uVar1;
  *(void*)(this_ptr + 3) = uVar2;
  *(void*)((int64_t)this_ptr + 0x1c) = uVar3;
  *(void*)(this_ptr + 4) = uVar4;
  *(void*)((int64_t)this_ptr + 0x24) = uVar5;
  *(void*)(this_ptr + 5) = uVar6;
  *(void*)((int64_t)this_ptr + 0x2c) = uVar7;
  this_ptr[6] = *(void*)(arg1 + 0x30);
  *this_ptr = &g_025d9690;
  this_ptr[7] = 0;
  lVar9 = FUN_007eece0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0110b200();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceElement");
  }
  this_ptr[8] = 0;
  lVar9 = FUN_007eece0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0110b2f0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceElement";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceComponent");
  }
  this_ptr[9] = 0;
  lVar9 = FUN_007eece0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0110b3e0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceComponent");
  }
  puVar11 = this_ptr + 10;
  this_ptr[10] = 0;
  lVar9 = FUN_007eece0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0110b4d0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceComponent",param_3,param_4,puVar11);
  }
  this_ptr[0xb] = 0;
  lVar9 = FUN_007eece0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0110b5c0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceComponent");
  }
  this_ptr[0xc] = 0;
  lVar9 = FUN_007eece0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0110b6b0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceElements";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceDescription");
  }
  return;
}



// ============================================================
// 014c36d0
// ============================================================
// Function: FUN_014c36d0
// Address: 014c36d0
// Size: 685 bytes
// Class: MUAudioSourceDescription
// === MUAudioSourceDescription properties ===
//   MUAudioSourceDescriptionType _currentDescriptionType
//   bool            _isNewDocument
//   bool            _isDetectionInProgress
//   bool            _insertGroupDefinesPerformanceTempo
//   bool            _stretchInsertGroup
//   double          _stretchInsertStartTime
//   bool            _createdFromSoundfile
//   bool            _timelineWasModified
//   GNInt           _recordingsInProgress
//   bool            _isComparing
//   bool            _followsHostRegionSelection
//   bool            _zoomsToHostRegionSelection
//   GNInt           _shouldDisplayStructureProblemDialog
//   bool            _shouldDisplayUnknownArchiveDialog
//   bool            _shouldDisplayImportedArchiveDialog
//   bool            _useAutomaticDetection
//   bool            _percussiveSeparation
//   bool            _hasDistinctAttacks
//   bool            _findSibilantPointsAutomatically
//   bool            _isPreliminary
//   bool            _isTonalicOnly
//   bool            _allowAutomaticPolyphonicDetection
//   SInt64          _startSampleIndex
//   SInt64          _sampleCount
//   SInt64          _signalEndSampleOffset
//   SInt64          _signalStartSampleOffset
//   float           _pitchCenter
//   float           _energyClaimFactor
//   float           _detectionQuality
//   GNFraction      _idealStartPulse
//   ... +8 more


int64_t * FUN_014c36d0(void* param_1,int param_2)

{
  int64_t lVar1;
  char cVar2;
  void *pvVar3;
  char *pcVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar5;
  int iVar6;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  int64_t local_40;
  char local_38 [8];
  
  FUN_014c34a0();
  lVar5 = local_40;
  if (local_38[0] == '\0') {
    if (local_40 == 0) goto LAB_014c371a;
  }
  else {
    if (local_40 != 0) goto LAB_014c3963;
LAB_014c371a:
    cVar2 = (**(code **)(*arg1 + 1000))();
    iVar6 = -1;
    if ((cVar2 != '\0') && (lVar1 = **(int64_t **)(arg1[0x21] + 0x10), lVar1 != 0)) {
      FUN_00d50b00();
      iVar6 = *(int *)(lVar1 + 0xc);
      FUN_00d50b20();
    }
    if (param_2 < iVar6) {
      FUN_014bc340();
      lVar1 = local_40;
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_014bc340();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014c34a0();
        if ((local_40 != 0) && (lVar5 = local_40, local_38[0] == '\0')) {
          FUN_00d50b00();
        }
        if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
          FUN_00d50b20();
        }
      }
      if (lVar5 != 0) goto LAB_014c3963;
      cVar2 = (**(code **)(*arg1 + 1000))();
      if ((cVar2 == '\0') ||
         (lVar5 = **(int64_t **)(arg1[0x21] + 0x10),
         **(int64_t **)(arg1[0x21] + 0x10) == 0)) {
LAB_014c3960:
        lVar5 = 0;
        goto LAB_014c3963;
      }
    }
    else {
      FUN_014bc420();
      lVar1 = local_40;
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_014bc420();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014c34a0();
        if ((local_40 != 0) && (lVar5 = local_40, local_38[0] == '\0')) {
          FUN_00d50b00();
        }
        if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
          FUN_00d50b20();
        }
      }
      if (lVar5 != 0) goto LAB_014c3963;
      cVar2 = (**(code **)(*arg1 + 1000))();
      if (cVar2 == '\0') goto LAB_014c3960;
      FUN_00d23340();
      pcVar4 = &local_50;
      if (local_38[0] != '\0') {
        pcVar4 = local_38;
      }
      local_50 = local_38[0];
      *pcVar4 = '\0';
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar5 = local_40;
      if ((local_50 != '\0') || (local_40 == 0)) goto LAB_014c3963;
    }
  }
  FUN_00d50b00();
LAB_014c3963:
  *this_ptr = lVar5;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 01366cc0
// ============================================================
// Function: FUN_01366cc0
// Address: 01366cc0
// Size: 848 bytes
// Class: MUAudioSourceDescription
// === MUAudioSourceDescription properties ===
//   MUAudioSourceDescriptionType _currentDescriptionType
//   bool            _isNewDocument
//   bool            _isDetectionInProgress
//   bool            _insertGroupDefinesPerformanceTempo
//   bool            _stretchInsertGroup
//   double          _stretchInsertStartTime
//   bool            _createdFromSoundfile
//   bool            _timelineWasModified
//   GNInt           _recordingsInProgress
//   bool            _isComparing
//   bool            _followsHostRegionSelection
//   bool            _zoomsToHostRegionSelection
//   GNInt           _shouldDisplayStructureProblemDialog
//   bool            _shouldDisplayUnknownArchiveDialog
//   bool            _shouldDisplayImportedArchiveDialog
//   bool            _useAutomaticDetection
//   bool            _percussiveSeparation
//   bool            _hasDistinctAttacks
//   bool            _findSibilantPointsAutomatically
//   bool            _isPreliminary
//   bool            _isTonalicOnly
//   bool            _allowAutomaticPolyphonicDetection
//   SInt64          _startSampleIndex
//   SInt64          _sampleCount
//   SInt64          _signalEndSampleOffset
//   SInt64          _signalStartSampleOffset
//   float           _pitchCenter
//   float           _energyClaimFactor
//   float           _detectionQuality
//   GNFraction      _idealStartPulse
//   ... +8 more


uint64_t FUN_01366cc0(void* param_1)

{
  char cVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  double dVar7;
  double dVar8;
  double local_68;
  int64_t local_60;
  char local_58;
  double local_48;
  double local_40;
  
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_48 = (double)FUN_013de8d0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_40 = (double)FUN_013de9b0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar1 = FUN_013dee00();
  if (cVar1 == '\0') {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar1 = FUN_013dee60();
    if (cVar1 != '\0') {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar3 = FUN_013ded30();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar4 = FUN_013de790();
      if (g_023942d0 < (double)lVar3 / (double)lVar4) {
        return 0;
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013df480();
      pvVar2 = _pthread_getspecific(param_1);
      lVar3 = local_60;
      if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        lVar3 = *(int64_t *)(local_60 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
      plVar6 = *(int64_t **)(lVar3 + 0x38);
      if (plVar6 == (int64_t *)0x0) {
        local_68 = 0.0;
      }
      else {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          plVar6 = *(int64_t **)(lVar3 + 0x38);
          lVar3 = FUN_00e8b990();
          if (lVar3 != 0) {
            plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
          }
        }
        local_68 = (double)(**(code **)(*plVar6 + 0x370))();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar3 = FUN_013ded30();
      dVar7 = (double)lVar3 / local_68 + g_0240d3e0;
      dVar8 = 0.0;
      if (0.0 <= dVar7) {
        dVar8 = dVar7;
      }
      local_48 = local_48 + dVar8;
      local_40 = local_40 - dVar8;
    }
  }
  uVar5 = FUN_013676b0(local_48,local_40);
  return uVar5;
}



// ============================================================
// 010f5320
// ============================================================
// Function: FUN_010f5320
// Address: 010f5320
// Size: 610 bytes
// Class: MUAudioSourceDescription
// String references:
//   "bool"
//   "GNUni"
//   "MUAnalyzer"
//   "MUTrackAudioRecorder"
//   "MUAudioSourceDescription"
//   "_isAudioAccessible"
// === MUAudioSourceDescription properties ===
//   MUAudioSourceDescriptionType _currentDescriptionType
//   bool            _isNewDocument
//   bool            _isDetectionInProgress
//   bool            _insertGroupDefinesPerformanceTempo
//   bool            _stretchInsertGroup
//   double          _stretchInsertStartTime
//   bool            _createdFromSoundfile
//   bool            _timelineWasModified
//   GNInt           _recordingsInProgress
//   bool            _isComparing
//   bool            _followsHostRegionSelection
//   bool            _zoomsToHostRegionSelection
//   GNInt           _shouldDisplayStructureProblemDialog
//   bool            _shouldDisplayUnknownArchiveDialog
//   bool            _shouldDisplayImportedArchiveDialog
//   bool            _useAutomaticDetection
//   bool            _percussiveSeparation
//   bool            _hasDistinctAttacks
//   bool            _findSibilantPointsAutomatically
//   bool            _isPreliminary
//   bool            _isTonalicOnly
//   bool            _allowAutomaticPolyphonicDetection
//   SInt64          _startSampleIndex
//   SInt64          _sampleCount
//   SInt64          _signalEndSampleOffset
//   SInt64          _signalStartSampleOffset
//   float           _pitchCenter
//   float           _energyClaimFactor
//   float           _detectionQuality
//   GNFraction      _idealStartPulse
//   ... +8 more


void FUN_010f5320(void)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  int iVar8;
  int64_t lVar9;
  char *pcVar10;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02590538;
  uVar1 = *(void*)(arg1 + 0x14);
  uVar2 = *(void*)(arg1 + 0x18);
  uVar3 = *(void*)(arg1 + 0x1c);
  uVar4 = *(void*)(arg1 + 0x20);
  uVar5 = *(void*)(arg1 + 0x24);
  uVar6 = *(void*)(arg1 + 0x28);
  uVar7 = *(void*)(arg1 + 0x2c);
  *(void*)(this_ptr + 2) = *(void*)(arg1 + 0x10);
  *(void*)((int64_t)this_ptr + 0x14) = uVar1;
  *(void*)(this_ptr + 3) = uVar2;
  *(void*)((int64_t)this_ptr + 0x1c) = uVar3;
  *(void*)(this_ptr + 4) = uVar4;
  *(void*)((int64_t)this_ptr + 0x24) = uVar5;
  *(void*)(this_ptr + 5) = uVar6;
  *(void*)((int64_t)this_ptr + 0x2c) = uVar7;
  this_ptr[6] = *(void*)(arg1 + 0x30);
  *this_ptr = &g_025d0298;
  this_ptr[7] = 0;
  lVar9 = FUN_00115af0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_010f5670();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceDescription");
  }
  this_ptr[8] = 0;
  lVar9 = FUN_00115af0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_010f5760();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceDescription");
  }
  this_ptr[9] = 0;
  lVar9 = FUN_00115af0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_010f5850();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAnalyzer");
  }
  FUN_010f5940();
  this_ptr[0xb] = 0;
  lVar9 = FUN_00115af0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_010f5a20();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTrackAudioRecorder");
  }
  *(void*)(this_ptr + 0xc) = 0;
  lVar9 = FUN_00115af0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 01346520
// ============================================================
// Function: FUN_01346520
// Address: 01346520
// Size: 952 bytes
// Class: MUAudioSourceDescription
// === MUAudioSourceDescription properties ===
//   MUAudioSourceDescriptionType _currentDescriptionType
//   bool            _isNewDocument
//   bool            _isDetectionInProgress
//   bool            _insertGroupDefinesPerformanceTempo
//   bool            _stretchInsertGroup
//   double          _stretchInsertStartTime
//   bool            _createdFromSoundfile
//   bool            _timelineWasModified
//   GNInt           _recordingsInProgress
//   bool            _isComparing
//   bool            _followsHostRegionSelection
//   bool            _zoomsToHostRegionSelection
//   GNInt           _shouldDisplayStructureProblemDialog
//   bool            _shouldDisplayUnknownArchiveDialog
//   bool            _shouldDisplayImportedArchiveDialog
//   bool            _useAutomaticDetection
//   bool            _percussiveSeparation
//   bool            _hasDistinctAttacks
//   bool            _findSibilantPointsAutomatically
//   bool            _isPreliminary
//   bool            _isTonalicOnly
//   bool            _allowAutomaticPolyphonicDetection
//   SInt64          _startSampleIndex
//   SInt64          _sampleCount
//   SInt64          _signalEndSampleOffset
//   SInt64          _signalStartSampleOffset
//   float           _pitchCenter
//   float           _energyClaimFactor
//   float           _detectionQuality
//   GNFraction      _idealStartPulse
//   ... +8 more


uint FUN_01346520(void* param_1,char param_2,uint64_t param_3,uint64_t param_4)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t *this_ptr;
  int64_t local_50;
  char local_48;
  
  if (*this_ptr != 0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dfdd0();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (local_50 == 0) {
      if (param_2 != '\0') {
        param_1 = 0;
        cVar1 = FUN_01366cc0(0,0,param_3,param_4,0);
        if (cVar1 == '\0') {
          return 0;
        }
      }
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar2 = FUN_014bc070();
      if ((char)uVar2 == '\0') {
        plVar4 = (int64_t *)FUN_00115860();
        (**(code **)(*plVar4 + 0x18))();
        pvVar3 = _pthread_getspecific(param_1);
        if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          param_1 = (void*)plVar4;
        }
        FUN_013dd650();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc440();
        plVar4 = (int64_t *)*this_ptr;
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          plVar4 = (int64_t *)*this_ptr;
          lVar5 = FUN_00e8b990();
          if (lVar5 != 0) {
            plVar4 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
        }
        (**(code **)(*plVar4 + 0x3a0))();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013de650();
        pvVar3 = _pthread_getspecific(param_1);
        if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          param_1 = 0;
        }
        FUN_014bcf30();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfce0();
        FUN_00d50b20();
      }
      return uVar2 ^ 1;
    }
  }
  return 0;
}



// ============================================================
// 01109be0
// ============================================================
// Function: FUN_01109be0
// Address: 01109be0
// Size: 648 bytes
// Class: MUAudioSourceDescription
// === MUAudioSourceDescription properties ===
//   MUAudioSourceDescriptionType _currentDescriptionType
//   bool            _isNewDocument
//   bool            _isDetectionInProgress
//   bool            _insertGroupDefinesPerformanceTempo
//   bool            _stretchInsertGroup
//   double          _stretchInsertStartTime
//   bool            _createdFromSoundfile
//   bool            _timelineWasModified
//   GNInt           _recordingsInProgress
//   bool            _isComparing
//   bool            _followsHostRegionSelection
//   bool            _zoomsToHostRegionSelection
//   GNInt           _shouldDisplayStructureProblemDialog
//   bool            _shouldDisplayUnknownArchiveDialog
//   bool            _shouldDisplayImportedArchiveDialog
//   bool            _useAutomaticDetection
//   bool            _percussiveSeparation
//   bool            _hasDistinctAttacks
//   bool            _findSibilantPointsAutomatically
//   bool            _isPreliminary
//   bool            _isTonalicOnly
//   bool            _allowAutomaticPolyphonicDetection
//   SInt64          _startSampleIndex
//   SInt64          _sampleCount
//   SInt64          _signalEndSampleOffset
//   SInt64          _signalStartSampleOffset
//   float           _pitchCenter
//   float           _energyClaimFactor
//   float           _detectionQuality
//   GNFraction      _idealStartPulse
//   ... +8 more


void FUN_01109be0(void)

{
  void*this_ptr;
  
  *this_ptr = &g_025d8f90;
  if (this_ptr[0x40] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x3f] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x3e] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x3d] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x3b] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x39] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x38] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x37] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x36] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x34] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x33] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x2f] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x2d] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x2b] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x2a] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x29] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x27] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x25] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x24] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x23] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x22] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x21] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x20] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x1f] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x1e] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x1d] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x1c] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x1b] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x1a] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x19] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x16] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0xd] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0xc] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0xb] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[10] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[9] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[8] != 0) {
    FUN_00d50b20();
  }
  FUN_00d4ffa0();
  return;
}



// ============================================================
// 0110c460
// ============================================================
// Function: FUN_0110c460
// Address: 0110c460
// Size: 599 bytes
// Class: MUAudioSourceDescription
// String references:
//   "float"
//   "MUAudioSourceDescription"
//   "GNInt"
//   "_sampleOffset"
//   "MUAudioSourceInstrument"
//   "_audioSourceInstrumentPortions"
//   "_amount"
// === MUAudioSourceDescription properties ===
//   MUAudioSourceDescriptionType _currentDescriptionType
//   bool            _isNewDocument
//   bool            _isDetectionInProgress
//   bool            _insertGroupDefinesPerformanceTempo
//   bool            _stretchInsertGroup
//   double          _stretchInsertStartTime
//   bool            _createdFromSoundfile
//   bool            _timelineWasModified
//   GNInt           _recordingsInProgress
//   bool            _isComparing
//   bool            _followsHostRegionSelection
//   bool            _zoomsToHostRegionSelection
//   GNInt           _shouldDisplayStructureProblemDialog
//   bool            _shouldDisplayUnknownArchiveDialog
//   bool            _shouldDisplayImportedArchiveDialog
//   bool            _useAutomaticDetection
//   bool            _percussiveSeparation
//   bool            _hasDistinctAttacks
//   bool            _findSibilantPointsAutomatically
//   bool            _isPreliminary
//   bool            _isTonalicOnly
//   bool            _allowAutomaticPolyphonicDetection
//   SInt64          _startSampleIndex
//   SInt64          _sampleCount
//   SInt64          _signalEndSampleOffset
//   SInt64          _signalStartSampleOffset
//   float           _pitchCenter
//   float           _energyClaimFactor
//   float           _detectionQuality
//   GNFraction      _idealStartPulse
//   ... +8 more


void FUN_0110c460(void)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  int iVar8;
  int64_t lVar9;
  int64_t arg1;
  void*this_ptr;
  char *pcVar10;
  
  FUN_00d4ff80();
  *this_ptr = &g_02590538;
  uVar1 = *(void*)(arg1 + 0x14);
  uVar2 = *(void*)(arg1 + 0x18);
  uVar3 = *(void*)(arg1 + 0x1c);
  uVar4 = *(void*)(arg1 + 0x20);
  uVar5 = *(void*)(arg1 + 0x24);
  uVar6 = *(void*)(arg1 + 0x28);
  uVar7 = *(void*)(arg1 + 0x2c);
  *(void*)(this_ptr + 2) = *(void*)(arg1 + 0x10);
  *(void*)((int64_t)this_ptr + 0x14) = uVar1;
  *(void*)(this_ptr + 3) = uVar2;
  *(void*)((int64_t)this_ptr + 0x1c) = uVar3;
  *(void*)(this_ptr + 4) = uVar4;
  *(void*)((int64_t)this_ptr + 0x24) = uVar5;
  *(void*)(this_ptr + 5) = uVar6;
  *(void*)((int64_t)this_ptr + 0x2c) = uVar7;
  this_ptr[6] = *(void*)(arg1 + 0x30);
  *this_ptr = &g_025bc438;
  *(void*)(this_ptr + 7) = 0;
  lVar9 = FUN_0110c220();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x3c) = 0;
  lVar9 = FUN_0110c220();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[8] = 0;
  lVar9 = FUN_0110c220();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0110c710();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceInstrumentPortions";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceDescription");
  }
  this_ptr[9] = 0;
  lVar9 = FUN_0110c220();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0110c800();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceInstrumentPortions";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceInstrument");
  }
  return;
}



// ============================================================
// 0135d660
// ============================================================
// Function: FUN_0135d660
// Address: 0135d660
// Size: 556 bytes
// Class: MUAudioSourceDescription
// === MUAudioSourceDescription properties ===
//   MUAudioSourceDescriptionType _currentDescriptionType
//   bool            _isNewDocument
//   bool            _isDetectionInProgress
//   bool            _insertGroupDefinesPerformanceTempo
//   bool            _stretchInsertGroup
//   double          _stretchInsertStartTime
//   bool            _createdFromSoundfile
//   bool            _timelineWasModified
//   GNInt           _recordingsInProgress
//   bool            _isComparing
//   bool            _followsHostRegionSelection
//   bool            _zoomsToHostRegionSelection
//   GNInt           _shouldDisplayStructureProblemDialog
//   bool            _shouldDisplayUnknownArchiveDialog
//   bool            _shouldDisplayImportedArchiveDialog
//   bool            _useAutomaticDetection
//   bool            _percussiveSeparation
//   bool            _hasDistinctAttacks
//   bool            _findSibilantPointsAutomatically
//   bool            _isPreliminary
//   bool            _isTonalicOnly
//   bool            _allowAutomaticPolyphonicDetection
//   SInt64          _startSampleIndex
//   SInt64          _sampleCount
//   SInt64          _signalEndSampleOffset
//   SInt64          _signalStartSampleOffset
//   float           _pitchCenter
//   float           _energyClaimFactor
//   float           _detectionQuality
//   GNFraction      _idealStartPulse
//   ... +8 more


void FUN_0135d660(int64_t param_1)

{
  int64_t lVar1;
  void *pvVar2;
  int64_t lVar3;
  void* pVar4;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar5;
  int64_t lVar6;
  uint32_t uVar7;
  
  FUN_0138f140();
  lVar1 = *arg1;
  if (0 < *(int *)(lVar1 + 0xc)) {
    lVar6 = 0;
    do {
      pVar4 = (void*)param_1;
      lVar1 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar6 * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014ce440();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014ceed0();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014cfcc0();
      pvVar2 = _pthread_getspecific(pVar4);
      if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
        plVar5 = *(int64_t **)(this_ptr + 0x38);
        if (plVar5 != (int64_t *)0x0) goto LAB_0135d850;
LAB_0135d831:
        uVar7 = 0;
      }
      else {
        plVar5 = *(int64_t **)(this_ptr + 0x38);
        if (plVar5 == (int64_t *)0x0) goto LAB_0135d831;
LAB_0135d850:
        pvVar2 = _pthread_getspecific(pVar4);
        if (pvVar2 != (void *)0x0) {
          plVar5 = *(int64_t **)(this_ptr + 0x38);
          lVar3 = FUN_00e8b990();
          if (lVar3 != 0) {
            plVar5 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
          }
        }
        uVar7 = (**(code **)(*plVar5 + 0x370))();
      }
      FUN_014bd640(uVar7);
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar6 = lVar6 + 1;
      lVar1 = *arg1;
      param_1 = (int64_t)*(int *)(lVar1 + 0xc);
    } while (lVar6 < param_1);
  }
  return;
}



// ============================================================
// 01353c30
// ============================================================
// Function: FUN_01353c30
// Address: 01353c30
// Size: 697 bytes
// Class: MUAudioSourceDescription
// === MUAudioSourceDescription properties ===
//   MUAudioSourceDescriptionType _currentDescriptionType
//   bool            _isNewDocument
//   bool            _isDetectionInProgress
//   bool            _insertGroupDefinesPerformanceTempo
//   bool            _stretchInsertGroup
//   double          _stretchInsertStartTime
//   bool            _createdFromSoundfile
//   bool            _timelineWasModified
//   GNInt           _recordingsInProgress
//   bool            _isComparing
//   bool            _followsHostRegionSelection
//   bool            _zoomsToHostRegionSelection
//   GNInt           _shouldDisplayStructureProblemDialog
//   bool            _shouldDisplayUnknownArchiveDialog
//   bool            _shouldDisplayImportedArchiveDialog
//   bool            _useAutomaticDetection
//   bool            _percussiveSeparation
//   bool            _hasDistinctAttacks
//   bool            _findSibilantPointsAutomatically
//   bool            _isPreliminary
//   bool            _isTonalicOnly
//   bool            _allowAutomaticPolyphonicDetection
//   SInt64          _startSampleIndex
//   SInt64          _sampleCount
//   SInt64          _signalEndSampleOffset
//   SInt64          _signalStartSampleOffset
//   float           _pitchCenter
//   float           _energyClaimFactor
//   float           _detectionQuality
//   GNFraction      _idealStartPulse
//   ... +8 more


uint FUN_01353c30(uint64_t param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  void* pVar4;
  void* pVar5;
  int64_t this_ptr;
  int64_t local_58;
  char local_50;
  
  if (((*(int64_t *)(this_ptr + 0x1f8) == 0) && (*(int64_t *)(this_ptr + 0x200) == 0)) &&
     (*(int64_t *)(this_ptr + 0x148) != 0)) {
    pvVar3 = _pthread_getspecific((void*)param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar1 = FUN_0141bab0();
    if (iVar1 == 3) {
      pvVar3 = _pthread_getspecific((void*)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      if (local_58 == 0) {
        pVar4 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),1);
        local_58 = 0;
      }
      else if (local_50 == '\0') {
        FUN_00d50b00();
        pVar4 = 0;
      }
      else {
        pVar4 = 0;
      }
      pVar5 = pVar4;
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar2 = FUN_014bc070();
      if ((char)uVar2 == '\0') {
        FUN_0134c610();
        FUN_01327e70();
        FUN_01327a80();
        FUN_01328e30();
        if (param_2 != '\0') {
          FUN_013293f0();
        }
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014d20e0();
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014d23d0();
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bbe30();
      }
      if ((char)pVar4 != '\0' || local_58 == 0) {
        return uVar2 ^ 1;
      }
      FUN_00d50b20();
      return uVar2 ^ 1;
    }
  }
  return 0;
}



// ============================================================
// 0133aef0
// ============================================================
// Function: FUN_0133aef0
// Address: 0133aef0
// Size: 754 bytes
// Class: MUAudioSourceDescription
// === MUAudioSourceDescription properties ===
//   MUAudioSourceDescriptionType _currentDescriptionType
//   bool            _isNewDocument
//   bool            _isDetectionInProgress
//   bool            _insertGroupDefinesPerformanceTempo
//   bool            _stretchInsertGroup
//   double          _stretchInsertStartTime
//   bool            _createdFromSoundfile
//   bool            _timelineWasModified
//   GNInt           _recordingsInProgress
//   bool            _isComparing
//   bool            _followsHostRegionSelection
//   bool            _zoomsToHostRegionSelection
//   GNInt           _shouldDisplayStructureProblemDialog
//   bool            _shouldDisplayUnknownArchiveDialog
//   bool            _shouldDisplayImportedArchiveDialog
//   bool            _useAutomaticDetection
//   bool            _percussiveSeparation
//   bool            _hasDistinctAttacks
//   bool            _findSibilantPointsAutomatically
//   bool            _isPreliminary
//   bool            _isTonalicOnly
//   bool            _allowAutomaticPolyphonicDetection
//   SInt64          _startSampleIndex
//   SInt64          _sampleCount
//   SInt64          _signalEndSampleOffset
//   SInt64          _signalStartSampleOffset
//   float           _pitchCenter
//   float           _energyClaimFactor
//   float           _detectionQuality
//   GNFraction      _idealStartPulse
//   ... +8 more


uint64_t FUN_0133aef0(void* param_1)

{
  void *pvVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t *this_ptr;
  int64_t local_40;
  char local_38;
  
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dfdd0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_0133af7f;
    }
  }
  else if (local_40 != 0) {
LAB_0133af7f:
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd6a0();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013de560();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd650();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014bc570();
    lVar3 = *this_ptr;
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      lVar3 = *this_ptr;
      lVar2 = FUN_00e8b990();
      if (lVar2 != 0) {
        lVar3 = *(int64_t *)(lVar3 + 0x20 + (uint64_t)(*(uint *)(lVar2 + 0x154) & 1) * 8);
      }
    }
    FUN_013dfce0();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014bcf30();
    if (local_40 != 0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
    uVar4 = CONCAT71((int7)((uint64_t)lVar3 >> 8),1);
    FUN_00d50b20();
    goto LAB_0133b1d1;
  }
  uVar4 = 0;
LAB_0133b1d1:
  return uVar4 & 0xffffffff;
}



// ============================================================
// 00839f30
// ============================================================
// Function: FUN_00839f30
// Address: 00839f30
// Size: 581 bytes
// Class: MUAudioSourceDescription
// String references:
//   "MUPitchSystemRulerView"
//   "MUAudioSourceDescriptionType"
//   "_currentDescriptionType"
// === MUAudioSourceDescription properties ===
//   MUAudioSourceDescriptionType _currentDescriptionType
//   bool            _isNewDocument
//   bool            _isDetectionInProgress
//   bool            _insertGroupDefinesPerformanceTempo
//   bool            _stretchInsertGroup
//   double          _stretchInsertStartTime
//   bool            _createdFromSoundfile
//   bool            _timelineWasModified
//   GNInt           _recordingsInProgress
//   bool            _isComparing
//   bool            _followsHostRegionSelection
//   bool            _zoomsToHostRegionSelection
//   GNInt           _shouldDisplayStructureProblemDialog
//   bool            _shouldDisplayUnknownArchiveDialog
//   bool            _shouldDisplayImportedArchiveDialog
//   bool            _useAutomaticDetection
//   bool            _percussiveSeparation
//   bool            _hasDistinctAttacks
//   bool            _findSibilantPointsAutomatically
//   bool            _isPreliminary
//   bool            _isTonalicOnly
//   bool            _allowAutomaticPolyphonicDetection
//   SInt64          _startSampleIndex
//   SInt64          _sampleCount
//   SInt64          _signalEndSampleOffset
//   SInt64          _signalStartSampleOffset
//   float           _pitchCenter
//   float           _energyClaimFactor
//   float           _detectionQuality
//   GNFraction      _idealStartPulse
//   ... +8 more


void* FUN_00839f30(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_027366f0 = "_currentDescriptionType";
      g_027366f8 = &g_026f9750;
      g_02736700 = 0;
      g_02736708 = 0x6500;
      g_02736710 = "MUAudioSourceDescriptionType";
      g_02736718 = &g_027153a8;
      g_02736720 = 0;
      ram_0000000002736728 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_027366f0;
}

