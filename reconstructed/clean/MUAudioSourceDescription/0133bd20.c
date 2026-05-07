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

