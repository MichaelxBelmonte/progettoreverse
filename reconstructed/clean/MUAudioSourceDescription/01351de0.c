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

