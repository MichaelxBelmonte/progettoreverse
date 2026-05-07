// Function: FUN_017e87c0
// Address: 017e87c0
// Size: 7158 bytes
// Class: GNInt
// === GNInt properties ===
//   GNInt           _assembledElementRendererCount
//   bool            _processPeriodBased
//   bool            _usesPososc
//   bool            _resetAllPhasesAtAttack
//   bool            _continueAllPhasesByDefault
//   bool            _renderWithOriginalTime
//   float           _freqDomainFormantResolution
//   GNInt           _freqDomainFourierSize
//   float           _freqDomainPhaseResetParametersScale
//   float           _formantPitchUpCompensationFactor
//   float           _formantPitchDownCompensationFactor
//   bool            _didFail
//   GNInt           _expectedResultLength
//   GNInt           _httpStatusCode
//   bool            _isSuspended
//   SInt64          _uploadLength
//   GNInt           _receivedResultLength
//   bool            _didTimeOut
//   float           _cent
//   GNInt           _westernStandardPitchIndexOffset
//   bool            _isLoop
//   GNInt           _numerator
//   GNInt           _denominator
//   GNInt           _beats
//   GNInt           _tonalKey
//   GNInt           _tonalGender
//   float           _time
//   float           _nextBeepStartTime
//   float           _beepTime
//   float           _beepLength
//   ... +133 more


void FUN_017e87c0(void)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  void* pVar7;
  int iVar8;
  void *pvVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  int64_t lVar12;
  int extraout_var;
  void* pVar13;
  uint64_t uVar14;
  uint64_t *puVar15;
  int iVar16;
  int64_t this_ptr;
  int iVar17;
  uint uVar18;
  uint64_t *puVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  uint32_t uVar22;
  uint32_t extraout_XMM0_Da_04;
  int64_t local_1f8;
  char local_1f0;
  uint64_t *local_1e8;
  char local_1e0;
  int64_t local_1d8;
  char local_1d0;
  uint64_t *local_1c8;
  char local_1c0;
  int64_t local_1b8;
  char local_1b0;
  int64_t local_1a8;
  char local_1a0;
  uint64_t local_140;
  char local_138;
  uint64_t local_130;
  char local_128;
  uint64_t local_120;
  char local_118;
  uint64_t local_110;
  char local_108;
  uint64_t local_100;
  char local_f8;
  uint64_t local_f0;
  char local_e8;
  uint64_t local_e0;
  char local_d8;
  uint64_t local_d0;
  uint64_t *local_c8;
  uint64_t *local_c0;
  int64_t local_b8;
  uint64_t *local_b0;
  uint64_t local_a8;
  char local_a0;
  uint64_t *local_88;
  uint64_t local_80;
  uint64_t *local_78;
  uint64_t local_70;
  int local_68;
  char local_60 [8];
  uint64_t *local_58;
  uint64_t *local_50;
  uint64_t local_48;
  char local_40;
  char local_38 [8];
  
  FUN_017e1d40();
  if (((((char)local_80 == '\0') && (local_88 != (uint64_t *)0x0)) &&
      (FUN_00d50b00(), (char)local_80 != '\0')) && (local_88 != (uint64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_58 = local_88;
  FUN_017e1dd0();
  local_c0 = local_88;
  if ((((char)local_80 == '\0') && (local_88 != (uint64_t *)0x0)) &&
     ((FUN_00d50b00(), (char)local_80 != '\0' && (local_88 != (uint64_t *)0x0)))) {
    FUN_00d50b20();
  }
  uVar20 = (uint64_t)*(uint *)((int64_t)local_88 + 0xc);
  puVar15 = local_88;
  if (0 < (int)*(uint *)((int64_t)local_88 + 0xc)) {
    do {
      uVar21 = uVar20 - 1;
      lVar12 = *(int64_t *)(puVar15[2] + (uVar21 & 0xffffffff) * 8);
      pvVar9 = _pthread_getspecific((void*)puVar15[2]);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017ddb20();
      FUN_00d23310();
      local_a8 = CONCAT71(local_a8._1_7_,(char)local_80);
      puVar19 = &local_80;
      if ((char)local_80 == '\0') {
        puVar19 = &local_a8;
      }
      *(void*)puVar19 = 0;
      if (((char)local_80 != '\0') && (local_88 != (uint64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_c8 = local_88;
      local_60[0] = (char)local_a8 != '\0';
      puVar19 = (uint64_t *)local_60;
      puVar10 = &local_a8;
      if (!(bool)local_60[0]) {
        puVar10 = puVar19;
      }
      *(void*)puVar10 = 0;
      if (((char)local_a8 != '\0') && (local_88 != (uint64_t *)0x0)) {
        FUN_00d50b20();
      }
      pVar7 = (void*)puVar19;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      local_38[0] = '\0';
      if (local_c8 != (uint64_t *)0x0) {
        pvVar9 = _pthread_getspecific(pVar7);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017e11f0();
        FUN_01543a70(0,FUN_017db4e0);
        if ((char)local_80 == '\0') {
          if (((local_88 != (uint64_t *)0x0) && (FUN_00d50b00(), (char)local_80 != '\0')) &&
             (local_88 != (uint64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_80._0_1_ = '\0';
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d23340();
        local_48 = CONCAT71(local_48._1_7_,(char)local_80);
        puVar19 = &local_48;
        puVar10 = &local_80;
        if ((char)local_80 == '\0') {
          puVar10 = puVar19;
        }
        *(void*)puVar10 = 0;
        if (((char)local_80 != '\0') && (local_88 != (uint64_t *)0x0)) {
          FUN_00d50b20();
        }
        pVar7 = (void*)puVar19;
        local_b8 = lVar12;
        if (local_88 == (uint64_t *)0x0) {
          puVar19 = (uint64_t *)0x0;
        }
        else {
          puVar19 = (uint64_t *)local_38;
          if ((char)local_48 != '\0') {
            local_38[0] = '\x01';
            puVar19 = &local_48;
          }
          *(char *)puVar19 = '\0';
          puVar19 = local_88;
          if ((char)local_48 != '\0') {
            FUN_00d50b20();
          }
        }
        local_80._0_1_ = '\0';
        cVar4 = FUN_00d23d70();
        if (((char)local_80 != '\0') && (puVar19 != (uint64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar4 != '\0') {
          FUN_00d23310();
          local_48 = CONCAT71(local_48._1_7_,(char)local_80);
          puVar10 = &local_48;
          puVar11 = &local_80;
          if ((char)local_80 == '\0') {
            puVar11 = puVar10;
          }
          *(void*)puVar11 = 0;
          if (((char)local_80 != '\0') && (puVar19 != (uint64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (((local_38[0] == '\0') && (puVar19 != (uint64_t *)0x0)) && ((char)local_48 != '\0'))
          {
            local_38[0] = '\x01';
                                local_48._0_1_ = 0;
            puVar10 = puVar19;
          }
          pVar7 = (void*)puVar10;
          if (((char)local_48 != '\0') && (puVar19 != (uint64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (local_88 != (uint64_t *)0x0) {
          FUN_00d50b20();
        }
        local_88 = puVar19;
        if (puVar19 != (uint64_t *)0x0) {
          pvVar9 = _pthread_getspecific(pVar7);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_017db850();
          local_d0 = uVar21;
          pvVar9 = _pthread_getspecific(pVar7);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_48 = FUN_01507970();
          if ((local_48 >> 0x20 == 0) || ((int)local_c0[3] == 0)) {
            bVar5 = 0;
          }
          else {
            bVar5 = FUN_00e7c020();
            bVar5 = bVar5 ^ 1;
          }
          if (((char)local_80 != '\0') && (puVar19 != (uint64_t *)0x0)) {
            FUN_00d50b20();
          }
          uVar21 = local_d0;
          if (bVar5 != 0) {
            pvVar9 = _pthread_getspecific(pVar7);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_017dda00();
            if ((char)local_80 == '\0') {
              if (((puVar19 != (uint64_t *)0x0) && (FUN_00d50b00(), (char)local_80 != '\0')) &&
                 (puVar19 != (uint64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_80._0_1_ = '\0';
            }
            uVar21 = local_d0;
            if (puVar19 != (uint64_t *)0x0) {
              local_50 = puVar19;
              pvVar9 = _pthread_getspecific(pVar7);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_017dfc90();
              pVar7 = 0;
              FUN_01543a70();
              if ((char)local_80 == '\0') {
                if (((puVar19 != (uint64_t *)0x0) && (FUN_00d50b00(), (char)local_80 != '\0')) &&
                   (puVar19 != (uint64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_80._0_1_ = '\0';
              }
              if ((local_40 != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              if (puVar19 == (uint64_t *)0x0) {
                puVar15 = (uint64_t *)0x0;
                bVar2 = false;
              }
              else {
                local_80._0_1_ = '\0';
                local_88 = (uint64_t *)0x0;
                local_70 = 0xffffffff;
                local_68 = 0;
                bVar2 = false;
                puVar15 = (uint64_t *)0x0;
                local_b0 = puVar19;
                local_78 = puVar19;
                local_70._4_4_ = 0;
                while( true ) {
                  if (local_70._4_4_ != 0) {
                    if (local_70._4_4_ < 1) {
                      iVar16 = -local_70._4_4_;
                    }
                    else {
                      iVar16 = (int)local_70 - local_70._4_4_;
                      local_70 = CONCAT44(local_70._4_4_,iVar16);
                      FUN_00d23690();
                      local_68 = local_68 + local_70._4_4_;
                      iVar16 = 0;
                    }
                    local_70 = CONCAT44(iVar16,(int)local_70);
                  }
                  lVar12 = (int64_t)(int)local_70;
                  iVar16 = (int)local_70 + 1;
                  local_70 = CONCAT44(local_70._4_4_,iVar16);
                  puVar10 = local_78;
                  if (*(int *)((int64_t)local_78 + 0xc) <= iVar16) break;
                  puVar10 = (uint64_t *)local_78[2];
                  local_88 = (uint64_t *)puVar10[lVar12 + 1];
                  pvVar9 = _pthread_getspecific((void*)puVar10);
                  if (pvVar9 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_017db850();
                  pvVar9 = _pthread_getspecific((void*)puVar10);
                  if (pvVar9 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_a8 = FUN_01507970();
                  if ((local_a8 >> 0x20 == 0) || ((int)local_c0[2] == 0)) {
                    bVar5 = 0;
                  }
                  else {
                    bVar5 = FUN_00e7c020();
                    bVar5 = bVar5 ^ 1;
                  }
                  if ((local_40 != '\0') && (local_48 != 0)) {
                    FUN_00d50b20();
                  }
                  if (bVar5 != 0) {
                    if (puVar15 != (uint64_t *)0x0) {
                      pvVar9 = _pthread_getspecific((void*)puVar10);
                      if (pvVar9 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_017db850();
                      pvVar9 = _pthread_getspecific((void*)puVar10);
                      if (pvVar9 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_01507970();
                      pvVar9 = _pthread_getspecific((void*)puVar10);
                      if (pvVar9 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_017db850();
                      pvVar9 = _pthread_getspecific((void*)puVar10);
                      if (pvVar9 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      uVar21 = FUN_01507970();
                      cVar4 = '\0';
                      if ((extraout_var != 0) && (uVar21 >> 0x20 != 0)) {
                        cVar4 = FUN_00e7c020();
                      }
                      if ((local_a0 != '\0') && (local_a8 != 0)) {
                        FUN_00d50b20();
                      }
                      if ((local_40 != '\0') && (local_48 != 0)) {
                        FUN_00d50b20();
                      }
                      pVar7 = (void*)puVar10;
                      if (cVar4 != '\0') break;
                      pvVar9 = _pthread_getspecific(pVar7);
                      if (pvVar9 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      iVar16 = FUN_017dca70();
                      pvVar9 = _pthread_getspecific(pVar7);
                      if (pvVar9 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      iVar6 = FUN_017dca70();
                      if (iVar16 < iVar6) goto LAB_017e8e53;
                    }
                    if (local_88 == puVar15) {
                      if ((!bVar2) && (local_88 != (uint64_t *)0x0)) {
                        puVar10 = puVar15;
                        if ((char)local_80 != '\0') goto LAB_017e91ca;
                        bVar2 = true;
                        FUN_00d50b00();
                      }
                    }
                    else {
                      puVar10 = local_88;
                      if ((char)local_80 == '\0') {
                        if (local_88 != (uint64_t *)0x0) {
                          FUN_00d50b00();
                        }
                        if ((bVar2) && (puVar15 != (uint64_t *)0x0)) {
                          FUN_00d50b20();
                          puVar15 = local_88;
                          bVar2 = true;
                          goto LAB_017e8e53;
                        }
                      }
                      else {
                        if ((bVar2) && (puVar15 != (uint64_t *)0x0)) {
                          FUN_00d50b20();
                        }
LAB_017e91ca:
                        local_80._0_1_ = '\0';
                      }
                      puVar15 = puVar10;
                      bVar2 = true;
                    }
                  }
LAB_017e8e53:
                }
                pVar7 = (void*)puVar10;
                FUN_01916320();
                FUN_00d50b20();
              }
              FUN_00d50b20();
              uVar21 = local_d0;
              if ((puVar15 != (uint64_t *)0x0) && (puVar19 != puVar15)) {
                if (local_38[0] != '\0') {
                  FUN_00d50b20();
                }
                local_38[0] = '\0';
                puVar19 = puVar15;
              }
              if ((bVar2) && (puVar15 != (uint64_t *)0x0)) {
                FUN_00d50b20();
              }
              puVar15 = local_58;
              if (puVar19 == (uint64_t *)0x0) goto LAB_017e9368;
            }
          }
          local_50 = puVar19;
          iVar16 = FUN_017e4480();
          if (iVar16 != -1000000) {
            pvVar9 = _pthread_getspecific(pVar7);
            if ((pvVar9 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
              pVar7 = (void*)local_b8;
            }
            iVar16 = FUN_017dca70();
            pvVar9 = _pthread_getspecific(pVar7);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            iVar6 = FUN_017dca70();
            uVar14 = (uint64_t)(iVar6 <= iVar16);
            uVar22 = *(void*)(this_ptr + 0x48 + uVar14 * 4);
            pvVar9 = _pthread_getspecific((uint)(iVar6 <= iVar16));
            pVar7 = (void*)uVar14;
            if ((pvVar9 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
              pVar7 = (void*)local_b8;
            }
            iVar16 = FUN_017dca70();
            pvVar9 = _pthread_getspecific(pVar7);
            if ((pvVar9 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
              pVar7 = (void*)local_50;
            }
            iVar6 = FUN_017dca70();
            if (iVar16 == iVar6) {
              FUN_017e4480();
              local_1f8 = local_b8;
              local_1f0 = '\0';
              FUN_017e4370(local_b8,&local_1f8);
              if ((local_1f0 != '\0') && (local_1f8 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              pVar13 = 0x17eb464;
              puVar19 = local_88;
              switch(uVar22) {
              case 0:
                pvVar9 = _pthread_getspecific(0x17eb464);
                if ((pvVar9 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
                  pVar13 = (void*)local_50;
                }
                FUN_017dca70();
                pvVar9 = _pthread_getspecific(pVar13);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_017dca70();
                local_1e8 = local_50;
                local_1e0 = '\0';
                FUN_017e4480();
                local_1d8 = local_b8;
                local_1d0 = '\0';
                FUN_017e4370(local_b8,&local_1d8);
                uVar21 = local_d0;
                if ((local_1d0 != '\0') && (local_1d8 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_1e0 != '\0') && (local_1e8 != (uint64_t *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_017e9359;
              case 1:
                FUN_017e1a30();
                uVar21 = local_48;
                if (local_40 == '\0') {
                  if (local_48 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_40 = '\0';
                }
                uVar22 = FUN_017e1d20();
                FUN_01794400(extraout_XMM0_Da_00,uVar22);
                local_b0 = local_88;
                puVar15 = local_88;
                if (local_88 == (uint64_t *)0x0) {
                  bVar3 = false;
                  local_b0 = (uint64_t *)0x0;
                }
                else if ((char)local_80 == '\0') {
                  FUN_00d50b00();
                  bVar3 = true;
                  if (((char)local_80 != '\0') && (local_88 != (uint64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_80._0_1_ = '\0';
                  bVar3 = true;
                }
                pVar7 = (void*)puVar15;
                if (uVar21 != 0) {
                  FUN_00d50b20();
                }
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
                FUN_017e1bc0();
                uVar21 = local_48;
                if (local_40 == '\0') {
                  if (local_48 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_40 = '\0';
                }
                uVar22 = FUN_017e1d20();
                FUN_01794400(extraout_XMM0_Da_02,uVar22);
                if (local_88 == (uint64_t *)0x0) {
                  bVar2 = false;
                  puVar19 = (uint64_t *)0x0;
                }
                else if ((char)local_80 == '\0') {
                  FUN_00d50b00();
                  bVar2 = true;
                  if (((char)local_80 != '\0') && (local_88 != (uint64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_80._0_1_ = '\0';
                  bVar2 = true;
                }
                if (uVar21 != 0) {
                  FUN_00d50b20();
                }
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
                break;
              case 2:
                FUN_017e1a60();
                uVar21 = local_48;
                if (local_40 == '\0') {
                  if (local_48 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_40 = '\0';
                }
                uVar22 = FUN_017e1d20();
                FUN_017936d0(extraout_XMM0_Da,uVar22);
                local_b0 = local_88;
                puVar15 = local_88;
                if (local_88 == (uint64_t *)0x0) {
                  bVar3 = false;
                  local_b0 = (uint64_t *)0x0;
                }
                else if ((char)local_80 == '\0') {
                  FUN_00d50b00();
                  bVar3 = true;
                  if (((char)local_80 != '\0') && (local_88 != (uint64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_80._0_1_ = '\0';
                  bVar3 = true;
                }
                pVar7 = (void*)puVar15;
                if (uVar21 != 0) {
                  FUN_00d50b20();
                }
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
                FUN_017e1bf0();
                uVar21 = local_48;
                if (local_40 == '\0') {
                  if (local_48 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_40 = '\0';
                }
                uVar22 = FUN_017e1d20();
                FUN_017936d0(extraout_XMM0_Da_01,uVar22);
                if (local_88 == (uint64_t *)0x0) {
                  bVar2 = false;
                  puVar19 = (uint64_t *)0x0;
                }
                else if ((char)local_80 == '\0') {
                  FUN_00d50b00();
                  bVar2 = true;
                  if (((char)local_80 != '\0') && (local_88 != (uint64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_80._0_1_ = '\0';
                  bVar2 = true;
                }
                if (uVar21 != 0) {
                  FUN_00d50b20();
                }
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
                break;
              case 3:
                FUN_017e1a60();
                uVar21 = local_48;
                if (local_40 == '\0') {
                  if (local_48 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_40 = '\0';
                }
                FUN_017e1a30();
                uVar14 = local_a8;
                local_138 = 0;
                if (local_a0 == '\0') {
                  if (local_a8 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_a0 = '\0';
                }
                local_138 = '\x01';
                local_140 = uVar14;
                uVar22 = FUN_017e1d20();
                FUN_017921e0(uVar22,&local_140,0);
                local_b0 = local_88;
                if (local_88 == (uint64_t *)0x0) {
                  bVar3 = false;
                  local_b0 = (uint64_t *)0x0;
                }
                else if ((char)local_80 == '\0') {
                  FUN_00d50b00();
                  bVar3 = true;
                  if (((char)local_80 != '\0') && (local_88 != (uint64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_80._0_1_ = '\0';
                  bVar3 = true;
                }
                if ((local_138 != '\0') && (local_140 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_a0 != '\0') && (local_a8 != 0)) {
                  FUN_00d50b20();
                }
                if (uVar21 != 0) {
                  FUN_00d50b20();
                }
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
                FUN_017e1bf0();
                uVar21 = local_48;
                local_128 = 0;
                if (local_40 == '\0') {
                  if (local_48 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_40 = '\0';
                }
                local_128 = '\x01';
                local_130 = uVar21;
                FUN_017e1bc0();
                uVar21 = local_a8;
                local_118 = 0;
                if (local_a0 == '\0') {
                  if (local_a8 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_a0 = '\0';
                }
                local_118 = '\x01';
                local_120 = uVar21;
                pVar7 = FUN_017e1d20();
                FUN_017921e0(pVar7,&local_120,0);
                if (local_88 == (uint64_t *)0x0) {
                  bVar2 = false;
                  puVar19 = (uint64_t *)0x0;
                }
                else if ((char)local_80 == '\0') {
                  FUN_00d50b00();
                  bVar2 = true;
                  if (((char)local_80 != '\0') && (local_88 != (uint64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_80._0_1_ = '\0';
                  bVar2 = true;
                }
                if ((local_118 != '\0') && (local_120 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_a0 != '\0') && (local_a8 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_128 != '\0') && (local_130 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
                break;
              case 4:
                FUN_017e1a60();
                uVar21 = local_48;
                local_108 = 0;
                if (local_40 == '\0') {
                  if (local_48 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_40 = '\0';
                }
                local_108 = '\x01';
                local_110 = uVar21;
                FUN_017e1a30();
                uVar21 = local_a8;
                local_f8 = 0;
                if (local_a0 == '\0') {
                  if (local_a8 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_a0 = '\0';
                }
                local_f8 = '\x01';
                local_100 = uVar21;
                uVar22 = FUN_017e1d20();
                FUN_017921e0(uVar22,&local_100,1);
                local_b0 = local_88;
                if (local_88 == (uint64_t *)0x0) {
                  bVar3 = false;
                  local_b0 = (uint64_t *)0x0;
                }
                else if ((char)local_80 == '\0') {
                  FUN_00d50b00();
                  bVar3 = true;
                  if (((char)local_80 != '\0') && (local_88 != (uint64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_80._0_1_ = '\0';
                  bVar3 = true;
                }
                if ((local_f8 != '\0') && (local_100 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_a0 != '\0') && (local_a8 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_108 != '\0') && (local_110 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
                FUN_017e1bf0();
                uVar21 = local_48;
                local_e8 = 0;
                if (local_40 == '\0') {
                  if (local_48 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_40 = '\0';
                }
                local_e8 = '\x01';
                local_f0 = uVar21;
                FUN_017e1bc0();
                uVar21 = local_a8;
                local_d8 = 0;
                if (local_a0 == '\0') {
                  if (local_a8 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_a0 = '\0';
                }
                local_d8 = '\x01';
                local_e0 = uVar21;
                pVar7 = FUN_017e1d20();
                FUN_017921e0(pVar7,&local_e0,1);
                if (local_88 == (uint64_t *)0x0) {
                  bVar2 = false;
                  puVar19 = (uint64_t *)0x0;
                }
                else if ((char)local_80 == '\0') {
                  FUN_00d50b00();
                  bVar2 = true;
                  if (((char)local_80 != '\0') && (local_88 != (uint64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_80._0_1_ = '\0';
                  bVar2 = true;
                }
                if ((local_d8 != '\0') && (local_e0 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_a0 != '\0') && (local_a8 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_e8 != '\0') && (local_f0 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
                break;
              default:
                local_b0 = (uint64_t *)0x0;
                bVar3 = false;
                puVar19 = (uint64_t *)0x0;
                bVar2 = false;
              }
              pvVar9 = _pthread_getspecific(pVar7);
              if ((pvVar9 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
                pVar7 = (void*)local_b8;
              }
              iVar16 = FUN_017dca70();
              pvVar9 = _pthread_getspecific(pVar7);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              iVar8 = FUN_017dca70();
              iVar17 = 0;
              iVar6 = (uint)(iVar16 < iVar8) * 2 + -1;
              if (iVar16 != iVar8) {
                iVar17 = 0;
                do {
                  bVar5 = FUN_01716980((((uint)(iVar16 / 6 + (iVar16 >> 0x1f)) >> 1) -
                                       (iVar16 >> 0x1f)) * 0xc);
                  iVar17 = iVar17 + (uint)bVar5;
                  iVar16 = iVar16 + iVar6;
                } while (iVar8 != iVar16);
              }
              local_1c8 = local_50;
              local_1c0 = '\0';
              iVar16 = FUN_017e4480();
              uVar22 = extraout_XMM0_Da_03;
              if ((local_1c0 != '\0') && (local_1c8 != (uint64_t *)0x0)) {
                uVar22 = FUN_00d50b20();
              }
              if (0 < iVar17) {
                do {
                  iVar8 = iVar16 - iVar6 >> 0x1f;
                  bVar5 = FUN_01716980((((uint)((iVar16 - iVar6) / 6 + iVar8) >> 1) - iVar8) * 0xc);
                  iVar16 = iVar16 - iVar6;
                  iVar17 = iVar17 - (uint)bVar5;
                  uVar22 = extraout_XMM0_Da_04;
                } while (0 < iVar17);
              }
              local_1b8 = local_b8;
              local_1b0 = '\0';
              FUN_017e4370(uVar22,&local_1b8);
              puVar15 = local_58;
              uVar21 = local_d0;
              if ((local_1b0 != '\0') && (local_1b8 != 0)) {
                FUN_00d50b20();
              }
              if ((bVar2) && (puVar19 != (uint64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((bVar3) && (local_b0 != (uint64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
LAB_017e9359:
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
        }
      }
LAB_017e9368:
      if ((local_60[0] != '\0') && (local_c8 != (uint64_t *)0x0)) {
        FUN_00d50b20();
      }
      bVar2 = 1 < (int64_t)uVar20;
      uVar20 = uVar21;
    } while (bVar2);
  }
  if (*(int *)(this_ptr + 0x50) == 2) {
    uVar18 = *(uint *)((int64_t)local_58 + 0xc);
    if (0 < (int)uVar18) {
      lVar12 = (uint64_t)uVar18 + 1;
      do {
        uVar18 = uVar18 - 1;
        lVar1 = *(int64_t *)(local_58[2] + (uint64_t)uVar18 * 8);
        cVar4 = FUN_017e82b0();
        if (cVar4 != '\0') {
          local_1a0 = '\0';
          local_1a8 = lVar1;
          FUN_017e4670(g_02391078);
          if ((local_1a0 != '\0') && (local_1a8 != 0)) {
            FUN_00d50b20();
          }
        }
        lVar12 = lVar12 + -1;
      } while (1 < lVar12);
    }
  }
  if (local_c0 != (uint64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_58 != (uint64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

