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

