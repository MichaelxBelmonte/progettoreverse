// Function: FUN_01300180
// Address: 01300180
// Size: 13222 bytes
// Class: Unknown

uint64_t FUN_01300180(void* param_1,byte param_2,byte param_3,byte param_4)

{
  code *pcVar1;
  code *pcVar2;
  char cVar3;
  byte bVar4;
  char cVar5;
  uint32_t uVar6;
  void *pvVar7;
  code *pcVar8;
  int64_t lVar9;
  int64_t *plVar10;
  void*puVar11;
  code **ppcVar12;
  code **ppcVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  void* pVar16;
  uint uVar17;
  int64_t lVar18;
  uint64_t uVar19;
  code *pcVar20;
  code *pcVar21;
  int iVar22;
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar23;
  double dVar24;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  byte local_res8;
  int *local_res10;
  code *local_4c0;
  char local_4b8;
  code *local_4b0;
  char local_4a8;
  code *local_4a0;
  char local_498;
  code *local_490;
  char local_488;
  code *local_480;
  char local_478;
  int64_t local_470;
  char local_468;
  code *local_460;
  char local_458;
  code *local_450;
  char local_448;
  code *local_440;
  char local_438;
  code *local_430;
  char local_428;
  int64_t local_420;
  char local_418;
  code *local_410;
  char local_408;
  code *local_400;
  char local_3f8;
  code *local_3f0;
  char local_3e8;
  int64_t local_3e0;
  char local_3d8;
  int64_t local_3d0;
  char local_3c8;
  code *local_3c0;
  char local_3b8;
  int64_t local_3b0;
  char local_3a8;
  code *local_3a0;
  char local_398;
  int64_t local_390;
  char local_388;
  int64_t local_380;
  char local_378;
  int64_t local_370;
  char local_368;
  int64_t local_360;
  char local_358;
  int64_t local_350;
  char local_348;
  void*local_340;
  char local_338;
  int64_t local_330;
  char local_328;
  code *local_320;
  char local_318;
  code *local_310;
  char local_308;
  code *local_300;
  char local_2f8;
  code *local_2f0;
  char local_2e8;
  int64_t local_2e0;
  char local_2d8;
  code *local_2d0;
  char local_2c8;
  code *local_2c0;
  char local_2b8;
  code *local_2b0;
  char local_2a8;
  int64_t local_2a0;
  char local_298;
  int64_t local_290;
  char local_288;
  code *local_280;
  char local_278;
  int64_t local_270;
  char local_268;
  int64_t local_260;
  char local_258;
  int64_t local_250;
  char local_248;
  int64_t local_240;
  char local_238;
  code *local_230;
  char local_228;
  int64_t local_220;
  char local_218;
  int64_t local_210;
  char local_208;
  code *local_200;
  char local_1f8;
  int64_t local_1f0;
  char local_1e8;
  double local_1e0;
  int local_1d4;
  code *local_1d0;
  char local_1c8;
  code *local_1c0;
  char local_1b8;
  code *local_1b0;
  char local_1a8;
  code *local_1a0;
  char local_198;
  code *local_190;
  char local_188;
  code *local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  code *local_160;
  char local_158;
  code *local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  void*local_130;
  code *local_128;
  uint64_t uStack_120;
  void* local_114;
  char local_110;
  undefined7 uStack_10f;
  char local_108;
  uint64_t local_f8;
  code *local_d8;
  char local_d0;
  code *local_c8;
  char local_c0;
  code *local_b8;
  uint64_t local_b0;
  int local_a8;
  code *local_a0;
  code *local_98;
  code *local_90;
  code *local_88;
  uint64_t local_80;
  int local_78;
  code *local_70;
  char local_61;
  code *local_60;
  char local_58 [8];
  code *local_50;
  uint64_t local_48;
  int local_40;
  
  if (local_res10 != (int *)0x0) {
    *local_res10 = 0;
  }
  if (((*this_ptr != 0) && (*(int *)(*this_ptr + 0xc) != 0)) && (*arg1 != 0)) {
    local_114 = param_1;
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cade0();
    if (local_98 == 0x0) {
      bVar23 = true;
    }
    else {
      pvVar7 = _pthread_getspecific(param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cade0();
      pvVar7 = _pthread_getspecific(param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015058d0();
      bVar23 = local_60 == 0x0;
      if ((local_58[0] != '\0') && (local_60 != 0x0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0x0)) {
        FUN_00d50b20();
      }
    }
    if (((char)local_90 != '\0') && (local_98 != 0x0)) {
      FUN_00d50b20();
    }
    if (!bVar23) {
      FUN_00d23310();
      pcVar8 = local_98;
      local_c8 = CONCAT71(local_c8._1_7_,(char)local_90);
      ppcVar12 = &local_c8;
      ppcVar13 = &local_90;
      if ((char)local_90 == '\0') {
        ppcVar13 = ppcVar12;
      }
      *(void*)ppcVar13 = 0;
      if (((char)local_90 != '\0') && (pcVar8 != 0x0)) {
        FUN_00d50b20();
      }
      pvVar7 = _pthread_getspecific((void*)ppcVar12);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01267000();
      pcVar20 = local_60;
      pcVar21 = *arg1;
      if ((local_58[0] != '\0') && (local_60 != 0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_c8 != '\0') && (pcVar8 != 0x0)) {
        FUN_00d50b20();
      }
      if (pcVar20 != pcVar21) {
        pcVar8 = FUN_00e8fc40();
        FUN_00d4ff40();
        *(void**)pcVar8 = &g_02572358;
        (*g_02572370)();
        local_a0 = pcVar8;
        FUN_00d21370();
        if (*this_ptr != 0x0) {
          local_90._0_1_ = '\0';
          local_98 = 0x0;
          local_80 = 0xffffffff;
          local_78 = 0;
          local_80._4_4_ = 0;
          local_88 = *this_ptr;
          while( true ) {
            if (local_80._4_4_ != 0) {
              if (local_80._4_4_ < 1) {
                iVar22 = -local_80._4_4_;
              }
              else {
                iVar22 = (int)local_80 - local_80._4_4_;
                local_80 = CONCAT44(local_80._4_4_,iVar22);
                FUN_00d23690();
                local_78 = local_78 + local_80._4_4_;
                iVar22 = 0;
              }
              local_80 = CONCAT44(iVar22,(int)local_80);
            }
            lVar9 = (int64_t)(int)local_80;
            iVar22 = (int)local_80 + 1;
            local_80 = CONCAT44(local_80._4_4_,iVar22);
            if (*(int *)(local_88 + 0xc) <= iVar22) break;
            lVar18 = *(int64_t *)(local_88 + 0x10);
            local_98 = *(code **)(lVar18 + 8 + lVar9 * 8);
            pvVar7 = _pthread_getspecific((void*)lVar18);
            pVar16 = (void*)lVar18;
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125a560();
            pcVar8 = local_60;
            if (local_58[0] == '\0') {
              if (local_60 != 0x0) {
                FUN_00d50b00();
                if ((local_58[0] != '\0') && (local_60 != 0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_013005c0;
              }
            }
            else if (local_60 != 0x0) {
LAB_013005c0:
              local_128 = pcVar8;
              pvVar7 = _pthread_getspecific(pVar16);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_011ef460();
              if (local_58[0] == '\0') {
                if (local_60 != 0x0) {
                  FUN_00d50b00();
                  if ((local_58[0] != '\0') && (local_60 != 0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_01300660;
                }
              }
              else if (local_60 != 0x0) {
LAB_01300660:
                pvVar7 = _pthread_getspecific(pVar16);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_013dd790();
                local_70 = local_60;
                if (local_58[0] == '\0') {
                  if (local_60 != 0x0) {
                    FUN_00d50b00();
                    if ((local_58[0] != '\0') && (local_60 != 0x0)) {
                      FUN_00d50b20();
                    }
                    goto LAB_013006ee;
                  }
                }
                else if (local_60 != 0x0) {
LAB_013006ee:
                  local_58[0] = '\0';
                  local_60 = 0x0;
                  local_48 = 0xffffffff;
                  local_40 = 0;
                  local_48._4_4_ = 0;
                  local_50 = local_70;
                  while( true ) {
                    if (local_48._4_4_ != 0) {
                      if (local_48._4_4_ < 1) {
                        iVar22 = -local_48._4_4_;
                      }
                      else {
                        iVar22 = (int)local_48 - local_48._4_4_;
                        local_48 = CONCAT44(local_48._4_4_,iVar22);
                        FUN_00d23690();
                        local_40 = local_40 + local_48._4_4_;
                        iVar22 = 0;
                      }
                      local_48 = CONCAT44(iVar22,(int)local_48);
                    }
                    lVar9 = (int64_t)(int)local_48;
                    iVar22 = (int)local_48 + 1;
                    local_48 = CONCAT44(local_48._4_4_,iVar22);
                    if (*(int *)(local_50 + 0xc) <= iVar22) break;
                    lVar18 = *(int64_t *)(local_50 + 0x10);
                    local_60 = *(code **)(lVar18 + 8 + lVar9 * 8);
                    pvVar7 = _pthread_getspecific((void*)lVar18);
                    pVar16 = (void*)lVar18;
                    if (pvVar7 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_011ef8d0();
                    pcVar8 = local_c8;
                    if (local_c0 == '\0') {
                      if (local_c8 != 0x0) {
                        FUN_00d50b00();
                        if ((local_c0 != '\0') && (local_c8 != 0x0)) {
                          FUN_00d50b20();
                        }
                        goto LAB_01300820;
                      }
                    }
                    else if (local_c8 != 0x0) {
LAB_01300820:
                      pvVar7 = _pthread_getspecific(pVar16);
                      if (pvVar7 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_01267000();
                      pcVar20 = local_c8;
                      pcVar21 = *arg1;
                      if ((local_c0 != '\0') && (local_c8 != 0x0)) {
                        FUN_00d50b20();
                      }
                      if (pcVar20 == pcVar21) {
                        local_c0 = '\0';
                        local_c8 = pcVar8;
                        FUN_00d21140();
                        if ((local_c0 != '\0') && (local_c8 != 0x0)) {
                          FUN_00d50b20();
                        }
                      }
                      else {
                        pvVar7 = _pthread_getspecific(pVar16);
                        if (pvVar7 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        cVar3 = FUN_0129a390();
                        if (cVar3 != '\0') {
                          pvVar7 = _pthread_getspecific(pVar16);
                          if (pvVar7 != (void *)0x0) {
                            FUN_00e8b990();
                          }
                          FUN_01299fe0();
                          pcVar8 = local_c8;
                          if (local_c0 == '\0') {
                            if (local_c8 != 0x0) {
                              FUN_00d50b00();
                              if ((local_c0 != '\0') && (local_c8 != 0x0)) {
                                FUN_00d50b20();
                              }
                              goto LAB_013009d0;
                            }
                          }
                          else if (local_c8 != 0x0) {
LAB_013009d0:
                            local_c0 = '\0';
                            local_c8 = 0x0;
                            local_b8 = pcVar8;
                            local_b0 = 0xffffffff;
                            local_a8 = 0;
                            local_b0._4_4_ = 0;
                            while( true ) {
                              if (local_b0._4_4_ != 0) {
                                if (local_b0._4_4_ < 1) {
                                  iVar22 = -local_b0._4_4_;
                                }
                                else {
                                  iVar22 = (int)local_b0 - local_b0._4_4_;
                                  local_b0 = CONCAT44(local_b0._4_4_,iVar22);
                                  FUN_00d23690();
                                  local_a8 = local_a8 + local_b0._4_4_;
                                  iVar22 = 0;
                                }
                                local_b0 = CONCAT44(iVar22,(int)local_b0);
                              }
                              lVar9 = (int64_t)(int)local_b0;
                              iVar22 = (int)local_b0 + 1;
                              local_b0 = CONCAT44(local_b0._4_4_,iVar22);
                              if (*(int *)(local_b8 + 0xc) <= iVar22) break;
                              local_c8 = *(code **)(*(int64_t *)(local_b8 + 0x10) + 8 + lVar9 * 8);
                              pvVar7 = _pthread_getspecific
                                                 ((void*)*(int64_t *)(local_b8 + 0x10));
                              if (pvVar7 != (void *)0x0) {
                                FUN_00e8b990();
                              }
                              FUN_01267000();
                              pcVar21 = local_d8;
                              pcVar8 = *arg1;
                              if ((local_d0 != '\0') && (local_d8 != 0x0)) {
                                FUN_00d50b20();
                              }
                              if (pcVar21 == pcVar8) {
                                local_d8 = local_c8;
                                local_d0 = '\0';
                                FUN_00d21140();
                                if ((local_d0 != '\0') && (local_d8 != 0x0)) {
                                  FUN_00d50b20();
                                }
                              }
                            }
                            FUN_001159b0();
                            FUN_00d50b20();
                          }
                        }
                      }
                      FUN_00d50b20();
                    }
                  }
                  FUN_0015edf0();
                  FUN_00d50b20();
                }
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
          }
          FUN_001159b0();
        }
        if (*(int *)(local_a0 + 0xc) == 0) {
          FUN_00d50b20();
          goto LAB_01300330;
        }
        pcVar8 = *this_ptr;
        lVar9 = this_ptr[1];
        if (pcVar8 == local_a0) {
          if ((char)lVar9 == '\0') {
            FUN_00d50b00();
            goto LAB_01300bab;
          }
        }
        else {
          FUN_00d50b00();
          *this_ptr = (int64_t)local_a0;
          if (((char)lVar9 != '\0') && (pcVar8 != 0x0)) {
            FUN_00d50b20();
          }
LAB_01300bab:
          *(void*)(this_ptr + 1) = 1;
        }
        FUN_00d50b20();
      }
      FUN_00d23310();
      pcVar8 = local_98;
      local_60 = CONCAT71(local_60._1_7_,(char)local_90);
      ppcVar12 = &local_60;
      ppcVar13 = &local_90;
      if ((char)local_90 == '\0') {
        ppcVar13 = ppcVar12;
      }
      *(void*)ppcVar13 = 0;
      if (((char)local_90 != '\0') && (local_98 != 0x0)) {
        FUN_00d50b20();
      }
      pvVar7 = _pthread_getspecific((void*)ppcVar12);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar3 = FUN_0129a3a0();
      if (((char)local_60 != '\0') && (pcVar8 != 0x0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        bVar4 = param_2 ^ 1 | local_res8;
        local_1e0 = (double)CONCAT71(local_1e0._1_7_,bVar4);
        if (bVar4 == 0) {
          puVar11 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar11 = &g_025683c0;
          (*g_025683d8)();
          FUN_00c92170();
          FUN_00c92160();
        }
        else {
          puVar11 = (void*)0x0;
        }
        local_350 = *this_ptr;
        local_348 = '\0';
        local_338 = '\0';
        local_330 = 0;
        local_328 = '\0';
        local_340 = puVar11;
        local_130 = puVar11;
        FUN_01293ed0(&local_330);
        pcVar21 = local_98;
        if ((char)local_90 == '\0') {
          if (((local_98 != 0x0) && (FUN_00d50b00(), (char)local_90 != '\0')) &&
             (local_98 != 0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_90._0_1_ = '\0';
        }
        if ((local_328 != '\0') && (local_330 != 0)) {
          FUN_00d50b20();
        }
        if ((local_338 != '\0') && (local_340 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_348 != '\0') && (local_350 != 0)) {
          FUN_00d50b20();
        }
        if (pcVar21 == 0x0) {
          uVar19 = 0;
        }
        else {
          if (*(int *)(pcVar21 + 0xc) == 0) {
            uVar19 = 0;
          }
          else {
            if (local_res10 != (int *)0x0) {
              *local_res10 = *(int *)(pcVar21 + 0xc);
            }
            uVar19 = CONCAT71((int7)((uint64_t)pcVar8 >> 8),1);
            if (param_2 != 0) {
              local_90._0_1_ = '\0';
              local_98 = 0x0;
              local_88 = pcVar21;
              local_80 = 0xffffffff;
              local_78 = 0;
              local_80._4_4_ = 0;
              while( true ) {
                if (local_80._4_4_ != 0) {
                  if (local_80._4_4_ < 1) {
                    iVar22 = -local_80._4_4_;
                  }
                  else {
                    iVar22 = (int)local_80 - local_80._4_4_;
                    local_80 = CONCAT44(local_80._4_4_,iVar22);
                    FUN_00d23690();
                    local_78 = local_78 + local_80._4_4_;
                    iVar22 = 0;
                  }
                  local_80 = CONCAT44(iVar22,(int)local_80);
                }
                lVar9 = (int64_t)(int)local_80;
                iVar22 = (int)local_80 + 1;
                local_80 = CONCAT44(local_80._4_4_,iVar22);
                if (*(int *)(local_88 + 0xc) <= iVar22) break;
                lVar18 = *(int64_t *)(local_88 + 0x10);
                local_98 = *(code **)(lVar18 + 8 + lVar9 * 8);
                pvVar7 = _pthread_getspecific((void*)lVar18);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0132d900();
                pcVar8 = local_60;
                if ((((local_58[0] == '\0') && (local_60 != 0x0)) &&
                    (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != 0x0)) {
                  FUN_00d50b20();
                }
                if (puVar11 == (void*)0x0) {
                  local_f8 = 0;
                  if ((char)local_114 != '\0') goto LAB_01300f36;
LAB_01300f80:
                  local_70 = pcVar8;
                  pVar16 = (void*)lVar18;
                  cVar3 = '\0';
                  local_a0 = ((uint64_t)local_a0 & 0xffffffff00000000);
                }
                else {
                  lVar18 = (int64_t)iVar22 + (int64_t)local_78;
                  local_f8 = *(uint64_t *)(puVar11[2] + lVar18 * 8);
                  if ((char)local_114 == '\0') goto LAB_01300f80;
LAB_01300f36:
                  local_70 = pcVar8;
                  pVar16 = (void*)lVar18;
                  pvVar7 = _pthread_getspecific(pVar16);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0132d610();
                  pcVar21 = local_60;
                  if (((local_58[0] == '\0') && (local_60 != 0x0)) &&
                     ((FUN_00d50b00(), local_58[0] != '\0' && (local_60 != 0x0)))) {
                    FUN_00d50b20();
                  }
                  local_128 = pcVar21;
                  pvVar7 = _pthread_getspecific(pVar16);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_012caf10();
                  pcVar21 = local_c8;
                  local_198 = 0;
                  if (local_c0 == '\0') {
                    if (local_c8 != 0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_c0 = '\0';
                  }
                  pcVar20 = local_128;
                  local_198 = '\x01';
                  local_1a0 = pcVar21;
                  FUN_016cbba0();
                  pcVar21 = local_60;
                  if (local_58[0] == '\0') {
                    if (((local_60 != 0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
                       (local_60 != 0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    local_58[0] = '\0';
                  }
                  if ((local_198 != '\0') && (local_1a0 != 0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_c0 != '\0') && (local_c8 != 0x0)) {
                    FUN_00d50b20();
                  }
                  if (puVar11 != (void*)0x0) {
                    pvVar7 = _pthread_getspecific(pVar16);
                    if (pvVar7 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_016ea7c0(local_f8 ^ g_023945b0);
                  }
                  pvVar7 = _pthread_getspecific(pVar16);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_016c1150();
                  pvVar7 = _pthread_getspecific(pVar16);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_320 = pcVar21;
                  local_318 = '\0';
                  FUN_0132d960();
                  if ((local_318 != '\0') && (local_320 != 0x0)) {
                    FUN_00d50b20();
                  }
                  if (pcVar20 == 0x0) {
                    cVar3 = '\0';
                    local_a0 = ((uint64_t)local_a0 & 0xffffffff00000000);
                  }
                  else {
                    if (param_3 == 0) {
                      pvVar7 = _pthread_getspecific(pVar16);
                      if (pvVar7 != (void *)0x0) {
                        FUN_00e8b990();
                        pcVar8 = local_70;
                      }
                      local_308 = '\0';
                      local_300 = pcVar20;
                      local_2f8 = '\0';
                      local_2f0 = pcVar21;
                      local_2e8 = '\0';
                      local_310 = pcVar8;
                      uVar14 = FUN_00e7bdb0();
                      uVar15 = FUN_00e7bdb0();
                      local_2d8 = '\0';
                      local_2e0 = 0;
                      pVar16 = (void*)&local_2f0;
                      cVar3 = FUN_01516650(0,&local_300,uVar14,uVar15);
                      pcVar8 = local_70;
                      pcVar20 = local_128;
                      if ((local_2d8 != '\0') && (local_2e0 != 0)) {
                        FUN_00d50b20();
                      }
                      if ((local_2e8 != '\0') && (local_2f0 != 0x0)) {
                        FUN_00d50b20();
                      }
                      if ((local_2f8 != '\0') && (local_300 != 0x0)) {
                        FUN_00d50b20();
                      }
                      if ((local_308 != '\0') && (local_310 != 0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    else {
                      cVar3 = '\0';
                    }
                    if (param_4 == 0) {
                      pvVar7 = _pthread_getspecific(pVar16);
                      if (pvVar7 != (void *)0x0) {
                        FUN_00e8b990();
                        pcVar8 = local_70;
                      }
                      local_2c8 = '\0';
                      local_2b8 = '\0';
                      local_2b0 = pcVar21;
                      local_2a8 = '\0';
                      local_2d0 = pcVar8;
                      local_2c0 = pcVar20;
                      uVar14 = FUN_00e7bdb0();
                      uVar15 = FUN_00e7bdb0();
                      local_298 = '\0';
                      local_2a0 = 0;
                      uVar6 = FUN_01516720(0,&local_2c0,uVar14,uVar15);
                      local_a0 = CONCAT44(local_a0._4_4_,uVar6);
                      if ((local_298 != '\0') && (local_2a0 != 0)) {
                        FUN_00d50b20();
                      }
                      if ((local_2a8 != '\0') && (local_2b0 != 0x0)) {
                        FUN_00d50b20();
                      }
                      if ((local_2b8 != '\0') && (local_2c0 != 0x0)) {
                        FUN_00d50b20();
                      }
                      if ((local_2c8 != '\0') && (local_2d0 != 0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    else {
                      local_a0 = ((uint64_t)local_a0 & 0xffffffff00000000);
                    }
                  }
                  FUN_00d403d0();
                  lVar9 = g_027ebe30;
                  if (g_027ebe30 != 0) {
                    FUN_00d50b00();
                  }
                  local_290 = lVar9;
                  local_288 = '\x01';
                  local_280 = pcVar21;
                  local_278 = '\0';
                  local_270 = 0;
                  local_268 = '\0';
                  plVar10 = &local_270;
                  FUN_00d40470(plVar10,&local_280,3,3);
                  pcVar8 = local_128;
                  puVar11 = local_130;
                  pVar16 = (void*)plVar10;
                  if ((local_268 != '\0') && (local_270 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_278 != '\0') && (local_280 != 0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_288 != '\0') && (local_290 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_58[0] != '\0') && (local_60 != 0x0)) {
                    FUN_00d50b20();
                  }
                  if (pcVar21 != 0x0) {
                    FUN_00d50b20();
                  }
                  if (pcVar8 != 0x0) {
                    FUN_00d50b20();
                  }
                }
                if (param_3 != 0) {
                  pvVar7 = _pthread_getspecific(pVar16);
                  if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                    pVar16 = (void*)local_70;
                  }
                  pvVar7 = _pthread_getspecific(pVar16);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_012cade0();
                  pvVar7 = _pthread_getspecific(pVar16);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_015058d0();
                  pcVar8 = local_60;
                  local_188 = 0;
                  if (local_58[0] == '\0') {
                    if (local_60 != 0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_58[0] = '\0';
                  }
                  local_188 = '\x01';
                  local_190 = pcVar8;
                  pvVar7 = _pthread_getspecific(pVar16);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_012caf10();
                  pcVar8 = local_d8;
                  local_178 = 0;
                  if (local_d0 == '\0') {
                    if (local_d8 != 0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_d0 = '\0';
                  }
                  local_178 = '\x01';
                  local_180 = pcVar8;
                  pvVar7 = _pthread_getspecific(pVar16);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0132d610();
                  local_168 = 0;
                  local_170 = CONCAT71(uStack_10f,local_110);
                  if (local_108 == '\0') {
                    if (local_170 != 0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_108 = '\0';
                  }
                  local_168 = '\x01';
                  uVar14 = FUN_00e7bdb0();
                  uVar15 = FUN_00e7bdb0();
                  local_258 = '\0';
                  local_260 = 0;
                  pVar16 = (void*)&local_170;
                  cVar5 = FUN_01516650(local_f8 ^ g_023945b0,&local_180,uVar14,uVar15);
                  if ((local_258 != '\0') && (local_260 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_168 != '\0') && (local_170 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_108 != '\0') && (CONCAT71(uStack_10f,local_110) != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_178 != '\0') && (local_180 != 0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_d0 != '\0') && (local_d8 != 0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_188 != '\0') && (local_190 != 0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_58[0] != '\0') && (local_60 != 0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_c0 != '\0') && (local_c8 != 0x0)) {
                    FUN_00d50b20();
                  }
                  if (cVar5 != '\0') {
                    cVar3 = '\x01';
                  }
                }
                if (param_4 != 0) {
                  pvVar7 = _pthread_getspecific(pVar16);
                  if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                    pVar16 = (void*)local_70;
                  }
                  pvVar7 = _pthread_getspecific(pVar16);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_012cade0();
                  pvVar7 = _pthread_getspecific(pVar16);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_015058d0();
                  pcVar8 = local_60;
                  local_158 = 0;
                  if (local_58[0] == '\0') {
                    if (local_60 != 0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_58[0] = '\0';
                  }
                  local_158 = '\x01';
                  local_160 = pcVar8;
                  pvVar7 = _pthread_getspecific(pVar16);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_012caf10();
                  pcVar8 = local_d8;
                  local_148 = 0;
                  if (local_d0 == '\0') {
                    if (local_d8 != 0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_d0 = '\0';
                  }
                  local_148 = '\x01';
                  local_150 = pcVar8;
                  pvVar7 = _pthread_getspecific(pVar16);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0132d610();
                  local_138 = 0;
                  local_140 = CONCAT71(uStack_10f,local_110);
                  if (local_108 == '\0') {
                    if (local_140 != 0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_108 = '\0';
                  }
                  local_138 = '\x01';
                  uVar14 = FUN_00e7bdb0();
                  uVar15 = FUN_00e7bdb0();
                  local_248 = '\0';
                  local_250 = 0;
                  cVar5 = FUN_01516720(local_f8 ^ g_023945b0,&local_150,uVar14,uVar15);
                  if ((local_248 != '\0') && (local_250 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_138 != '\0') && (local_140 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_108 != '\0') && (CONCAT71(uStack_10f,local_110) != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_148 != '\0') && (local_150 != 0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_d0 != '\0') && (local_d8 != 0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_158 != '\0') && (local_160 != 0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_58[0] != '\0') && (local_60 != 0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_c0 != '\0') && (local_c8 != 0x0)) {
                    FUN_00d50b20();
                  }
                  uVar17 = (uint)local_a0 & 0xff;
                  if (cVar5 != '\0') {
                    uVar17 = 1;
                  }
                  local_a0 = CONCAT44(local_a0._4_4_,uVar17);
                }
                if (cVar3 != '\0') {
                  FUN_00d403d0();
                  lVar9 = g_027c8278;
                  if (g_027c8278 != 0) {
                    FUN_00d50b00();
                  }
                  local_240 = lVar9;
                  local_238 = '\x01';
                  local_230 = local_70;
                  local_228 = '\0';
                  local_220 = 0;
                  local_218 = '\0';
                  FUN_00d40470(&local_220,&local_230,3,3);
                  if ((local_218 != '\0') && (local_220 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_228 != '\0') && (local_230 != 0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_238 != '\0') && (local_240 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_58[0] != '\0') && (local_60 != 0x0)) {
                    FUN_00d50b20();
                  }
                }
                pcVar8 = local_70;
                if ((char)local_a0 != '\0') {
                  FUN_00d403d0();
                  lVar9 = g_027c8280;
                  if (g_027c8280 != 0) {
                    FUN_00d50b00();
                  }
                  local_210 = lVar9;
                  local_208 = '\x01';
                  local_200 = pcVar8;
                  local_1f8 = '\0';
                  local_1f0 = 0;
                  local_1e8 = '\0';
                  FUN_00d40470(&local_1f0,&local_200,3,3);
                  if ((local_1e8 != '\0') && (local_1f0 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_1f8 != '\0') && (local_200 != 0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_208 != '\0') && (local_210 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_58[0] != '\0') && (local_60 != 0x0)) {
                    FUN_00d50b20();
                  }
                }
                if (pcVar8 != 0x0) {
                  FUN_00d50b20();
                }
              }
              FUN_00115190();
              uVar19 = CONCAT71((uint7)(uint3)((uint)iVar22 >> 8),1);
            }
          }
          FUN_00d50b20();
        }
        bVar4 = local_1e0._0_1_ | puVar11 == (void*)0x0;
        local_1e0 = (double)CONCAT71(local_1e0._1_7_,bVar4);
        if (bVar4 == 0) {
          FUN_00d50b20();
        }
        goto LAB_01300332;
      }
      plVar10 = (int64_t *)FUN_00e8fc40();
      FUN_00022d50();
      local_70 = plVar10;
      (**(code **)(*plVar10 + 0x18))();
      FUN_012e74e0();
      pcVar8 = local_98;
      if ((char)local_90 == '\0') {
        if (local_98 != 0x0) {
          FUN_00d50b00();
          goto LAB_01301ec6;
        }
      }
      else if (local_98 != 0x0) {
LAB_01301ec6:
        local_90._0_1_ = '\0';
        local_98 = 0x0;
        local_88 = pcVar8;
        local_80 = 0xffffffff;
        local_78 = 0;
        local_a0 = g_02572370;
        local_80._4_4_ = 0;
        while( true ) {
          if (local_80._4_4_ != 0) {
            if (local_80._4_4_ < 1) {
              iVar22 = -local_80._4_4_;
            }
            else {
              iVar22 = (int)local_80 - local_80._4_4_;
              local_80 = CONCAT44(local_80._4_4_,iVar22);
              FUN_00d23690();
              local_78 = local_78 + local_80._4_4_;
              iVar22 = 0;
            }
            local_80 = CONCAT44(iVar22,(int)local_80);
          }
          lVar9 = (int64_t)(int)local_80;
          iVar22 = (int)local_80 + 1;
          local_80 = CONCAT44(local_80._4_4_,iVar22);
          if (*(int *)(local_88 + 0xc) <= iVar22) break;
          lVar18 = *(int64_t *)(local_88 + 0x10);
          local_98 = *(code **)(lVar18 + 8 + lVar9 * 8);
          pvVar7 = _pthread_getspecific((void*)lVar18);
          pVar16 = (void*)lVar18;
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e8920();
          pcVar21 = local_60;
          pcVar8 = *arg1;
          if ((local_58[0] != '\0') && (local_60 != 0x0)) {
            FUN_00d50b20();
          }
          pcVar20 = local_98;
          if (pcVar21 == pcVar8) {
            pvVar7 = _pthread_getspecific(pVar16);
            pcVar8 = local_98;
            if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), pcVar20 = pcVar8, lVar9 != 0)) {
              pcVar20 = *(code **)(pcVar8 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8 + 0x20);
            }
            lVar9 = *(int64_t *)(pcVar20 + 0xb0);
            if (lVar9 != 0) {
              FUN_00d50b00();
            }
            FUN_00d23310();
            pcVar8 = local_60;
            local_d8 = CONCAT71(local_d8._1_7_,local_58[0]);
            ppcVar12 = &local_d8;
            ppcVar13 = (code **)local_58;
            if (local_58[0] == '\0') {
              ppcVar13 = ppcVar12;
            }
            *(char *)ppcVar13 = '\0';
            if ((local_58[0] != '\0') && (pcVar8 != 0x0)) {
              FUN_00d50b20();
            }
            pVar16 = (void*)ppcVar12;
            pvVar7 = _pthread_getspecific(pVar16);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar14 = FUN_01264240();
            pcVar21 = local_c8;
            if (local_c0 == '\0') {
              if (((local_c8 != 0x0) && (uVar14 = FUN_00d50b00(), local_c0 != '\0')) &&
                 (local_c8 != 0x0)) {
                uVar14 = FUN_00d50b20();
              }
            }
            else {
              local_c0 = '\0';
            }
            if (((char)local_d8 != '\0') && (pcVar8 != 0x0)) {
              uVar14 = FUN_00d50b20();
            }
            if (lVar9 != 0) {
              uVar14 = FUN_00d50b20();
            }
            if (pcVar21 != 0x0) {
              local_4c0 = pcVar21;
              local_4b8 = '\0';
              FUN_01305170(uVar14,&local_4c0);
              pcVar8 = local_60;
              if (local_58[0] == '\0') {
                if (((local_60 != 0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
                   (local_60 != 0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_58[0] = '\0';
              }
              if ((local_4b8 != '\0') && (local_4c0 != 0x0)) {
                FUN_00d50b20();
              }
              if (pcVar8 == 0x0) {
                pcVar8 = FUN_00e8fc40();
                FUN_00d4ff40();
                *(void**)pcVar8 = &g_02572358;
                uVar14 = (*local_a0)();
                local_4a8 = '\0';
                local_4a0 = pcVar21;
                local_498 = '\0';
                local_4b0 = pcVar8;
                FUN_01305220(uVar14,&local_4a0);
                if ((local_498 != '\0') && (local_4a0 != 0x0)) {
                  FUN_00d50b20();
                }
                if ((local_4a8 != '\0') && (local_4b0 != 0x0)) {
                  FUN_00d50b20();
                }
              }
              pcVar21 = local_98;
              pvVar7 = _pthread_getspecific(pVar16);
              pcVar20 = local_98;
              if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), pcVar21 = pcVar20, lVar9 != 0)
                 ) {
                pcVar21 = *(code **)(pcVar20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8 + 0x20)
                ;
              }
              pcVar21 = *(code **)(pcVar21 + 0x60);
              if (pcVar21 != 0x0) {
                FUN_00d50b00();
              }
              local_58[0] = '\0';
              local_60 = pcVar21;
              FUN_00d21140();
              if ((local_58[0] != '\0') && (local_60 != 0x0)) {
                FUN_00d50b20();
              }
              if (pcVar21 != 0x0) {
                FUN_00d50b20();
              }
              if (pcVar8 != 0x0) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
          }
        }
        FUN_000be170();
        FUN_00d50b20();
      }
      FUN_00c9fe20();
      pcVar8 = local_98;
      local_60 = CONCAT71(local_60._1_7_,(char)local_90);
      ppcVar12 = &local_90;
      if ((char)local_90 == '\0') {
        ppcVar12 = &local_60;
      }
      *(void*)ppcVar12 = 0;
      if (((char)local_90 != '\0') && (local_98 != 0x0)) {
        FUN_00d50b20();
      }
      local_1d4 = *(int *)(pcVar8 + 0xc);
      if ((char)local_60 != '\0') {
        FUN_00d50b20();
      }
      if (local_1d4 != 0) {
        if (local_res10 != (int *)0x0) {
          FUN_00c9fe20();
          pcVar8 = local_98;
          ppcVar12 = &local_90;
          if ((char)local_90 == '\0') {
            ppcVar12 = &local_60;
          }
          local_60 = CONCAT71(local_60._1_7_,(char)local_90);
          *(void*)ppcVar12 = 0;
          if (((char)local_90 != '\0') && (local_98 != 0x0)) {
            FUN_00d50b20();
          }
          *local_res10 = *(int *)(pcVar8 + 0xc);
          if ((char)local_60 != '\0') {
            FUN_00d50b20();
          }
        }
        if (((param_2 != 0) && ((byte)((byte)local_114 | param_3 | param_4) == 1)) &&
           (local_70 != 0x0)) {
          local_90._0_1_ = '\0';
          local_98 = 0x0;
          local_88 = *(code **)((int64_t)local_70 + 0x10);
          local_80 = local_80 & 0xffffffff00000000;
          if (0 < *(int *)(local_88 + 0xc)) {
            iVar22 = 0;
            do {
              lVar9 = (int64_t)iVar22;
              local_98 = *(code **)(*(int64_t *)(local_88 + 0x10) + lVar9 * 8);
              FUN_013052d0(lVar9,&local_98);
              pcVar21 = local_60;
              pVar16 = (void*)lVar9;
              if (((local_58[0] == '\0') && (local_60 != 0x0)) &&
                 ((FUN_00d50b00(), local_58[0] != '\0' && (local_60 != 0x0)))) {
                FUN_00d50b20();
              }
              local_490 = pcVar21;
              local_488 = '\0';
              FUN_0165a430();
              if ((local_488 != '\0') && (local_490 != 0x0)) {
                FUN_00d50b20();
              }
              pcVar8 = *arg1;
              pvVar7 = _pthread_getspecific(pVar16);
              if (pvVar7 != (void *)0x0) {
                pcVar8 = *arg1;
                lVar9 = FUN_00e8b990();
                if (lVar9 != 0) {
                  pcVar8 = *(code **)(pcVar8 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8 + 0x20)
                  ;
                }
              }
              FUN_012caf10();
              local_a0 = local_60;
              if ((((local_58[0] == '\0') && (local_60 != 0x0)) &&
                  (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != 0x0)) {
                FUN_00d50b20();
              }
              local_110 = '\0';
              local_61 = '\0';
              if ((char)local_114 != '\0') {
                FUN_00d23340();
                pcVar20 = local_60;
                local_c8 = CONCAT71(local_c8._1_7_,local_58[0]);
                ppcVar12 = &local_c8;
                ppcVar13 = (code **)local_58;
                if (local_58[0] == '\0') {
                  ppcVar13 = ppcVar12;
                }
                *(char *)ppcVar13 = '\0';
                if ((local_58[0] != '\0') && (pcVar20 != 0x0)) {
                  FUN_00d50b20();
                }
                pVar16 = (void*)ppcVar12;
                if (((char)local_c8 == '\0') && (pcVar20 != 0x0)) {
                  FUN_00d50b00();
                }
                pvVar7 = _pthread_getspecific(pVar16);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_130 = (void*)FUN_01655040();
                pvVar7 = _pthread_getspecific(pVar16);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_1e0 = (double)FUN_01653910();
                pvVar7 = _pthread_getspecific(pVar16);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar24 = (double)FUN_01653920();
                pvVar7 = _pthread_getspecific(pVar16);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_128 = FUN_01655100();
                uStack_120 = extraout_XMM0_Qb_00;
                pvVar7 = _pthread_getspecific(pVar16);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0132d610();
                pcVar8 = local_60;
                if ((((local_58[0] == '\0') && (local_60 != 0x0)) &&
                    (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != 0x0)) {
                  FUN_00d50b20();
                }
                local_480 = local_a0;
                local_478 = '\0';
                FUN_016cbba0();
                pcVar1 = local_60;
                if (local_58[0] == '\0') {
                  if (((local_60 != 0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
                     (local_60 != 0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_58[0] = '\0';
                }
                if ((local_478 != '\0') && (local_480 != 0x0)) {
                  FUN_00d50b20();
                }
                pvVar7 = _pthread_getspecific(pVar16);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_016ea7c0((double)local_130 - local_1e0);
                uStack_120 = extraout_XMM0_Qb & uStack_120;
                local_128 = (~-(uint64_t)((double)local_128 != 0.0) & g_0238fee8 |
                                    (~-(uint64_t)(dVar24 != 0.0) & g_0238fee8 |
                                    (~-(uint64_t)(dVar24 != (double)local_128) & g_0238fee8 |
                                    (uint64_t)(dVar24 / (double)local_128) &
                                    -(uint64_t)(dVar24 != (double)local_128)) &
                                    -(uint64_t)(dVar24 != 0.0)) &
                                    -(uint64_t)((double)local_128 != 0.0));
                if (g_02391038 <=
                    (double)((uint64_t)((double)local_128 + g_023b19a0) & g_023908f0)) {
                  pvVar7 = _pthread_getspecific(pVar16);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_468 = '\0';
                  local_470 = 0;
                  FUN_016eae50(local_128);
                  if ((local_468 != '\0') && (local_470 != 0)) {
                    FUN_00d50b20();
                  }
                }
                pvVar7 = _pthread_getspecific(pVar16);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_016c1150();
                pvVar7 = _pthread_getspecific(pVar16);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_460 = pcVar1;
                local_458 = '\0';
                FUN_0132d960();
                if ((local_458 != '\0') && (local_460 != 0x0)) {
                  FUN_00d50b20();
                }
                if (pcVar8 != 0x0) {
                  pvVar7 = _pthread_getspecific(pVar16);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0132d900();
                  pcVar2 = local_60;
                  if ((((local_58[0] == '\0') && (local_60 != 0x0)) &&
                      (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != 0x0)) {
                    FUN_00d50b20();
                  }
                  if (param_3 == 0) {
                    pvVar7 = _pthread_getspecific(pVar16);
                    if (pvVar7 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    local_450 = pcVar2;
                    local_448 = '\0';
                    local_440 = pcVar8;
                    local_438 = '\0';
                    local_430 = pcVar1;
                    local_428 = '\0';
                    uVar14 = FUN_00e7bdb0();
                    uVar15 = FUN_00e7bdb0();
                    local_418 = '\0';
                    local_420 = 0;
                    pVar16 = (void*)&local_430;
                    local_110 = FUN_01516650(0,&local_440,uVar14,uVar15);
                    if ((local_418 != '\0') && (local_420 != 0)) {
                      FUN_00d50b20();
                    }
                    if ((local_428 != '\0') && (local_430 != 0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_438 != '\0') && (local_440 != 0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_448 != '\0') && (local_450 != 0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  if (param_4 == 0) {
                    pvVar7 = _pthread_getspecific(pVar16);
                    if (pvVar7 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    local_410 = pcVar2;
                    local_408 = '\0';
                    local_3f8 = '\0';
                    local_3f0 = pcVar1;
                    local_3e8 = '\0';
                    local_400 = pcVar8;
                    uVar14 = FUN_00e7bdb0();
                    uVar15 = FUN_00e7bdb0();
                    local_3d8 = '\0';
                    local_3e0 = 0;
                    local_61 = FUN_01516720(0,&local_400,uVar14,uVar15);
                    if ((local_3d8 != '\0') && (local_3e0 != 0)) {
                      FUN_00d50b20();
                    }
                    if ((local_3e8 != '\0') && (local_3f0 != 0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_3f8 != '\0') && (local_400 != 0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_408 != '\0') && (local_410 != 0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  if (pcVar2 != 0x0) {
                    FUN_00d50b20();
                  }
                }
                FUN_00d403d0();
                lVar9 = g_027ebe30;
                if (g_027ebe30 != 0) {
                  FUN_00d50b00();
                }
                local_3d0 = lVar9;
                local_3c8 = '\x01';
                local_3c0 = pcVar1;
                local_3b8 = '\0';
                local_3b0 = 0;
                local_3a8 = '\0';
                plVar10 = &local_3b0;
                FUN_00d40470(plVar10,&local_3c0,3,3);
                pVar16 = (void*)plVar10;
                if ((local_3a8 != '\0') && (local_3b0 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_3b8 != '\0') && (local_3c0 != 0x0)) {
                  FUN_00d50b20();
                }
                if ((local_3c8 != '\0') && (local_3d0 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_58[0] != '\0') && (local_60 != 0x0)) {
                  FUN_00d50b20();
                }
                if (pcVar1 != 0x0) {
                  FUN_00d50b20();
                }
                if (pcVar8 != 0x0) {
                  FUN_00d50b20();
                }
                if (pcVar20 != 0x0) {
                  FUN_00d50b20();
                }
              }
              if (param_3 != 0 || param_4 != 0) {
                if (param_4 != 0) {
                  pvVar7 = _pthread_getspecific(pVar16);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0132d900();
                  pvVar7 = _pthread_getspecific(pVar16);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_01510280();
                  pvVar7 = _pthread_getspecific(pVar16);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_58[0] = '\0';
                  local_60 = 0x0;
                  FUN_0124f820();
                  if ((local_58[0] != '\0') && (local_60 != 0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_c0 != '\0') && (local_c8 != 0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_d0 != '\0') && (local_d8 != 0x0)) {
                    FUN_00d50b20();
                  }
                  local_61 = '\x01';
                }
                pvVar7 = _pthread_getspecific(pVar16);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0132d900();
                pvVar7 = _pthread_getspecific(pVar16);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_3a0 = pcVar21;
                local_398 = '\0';
                pvVar7 = _pthread_getspecific(pVar16);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0132d610();
                pcVar8 = local_c8;
                local_1c8 = 0;
                if (local_c0 == '\0') {
                  if (local_c8 != 0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_c0 = '\0';
                }
                local_1c8 = '\x01';
                local_1d0 = pcVar8;
                pvVar7 = _pthread_getspecific(pVar16);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01320d00();
                pcVar8 = local_d8;
                pvVar7 = _pthread_getspecific(pVar16);
                pcVar20 = local_d8;
                if ((pvVar7 != (void *)0x0) &&
                   (lVar9 = FUN_00e8b990(), pcVar8 = pcVar20, lVar9 != 0)) {
                  pcVar8 = *(code **)(pcVar20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8 + 0x20
                                     );
                }
                uVar14 = (**(code **)(*(int64_t *)pcVar8 + 0x398))();
                pVar16 = (void*)param_3;
                FUN_01518160(0,uVar14,param_4,1);
                if ((local_d0 != '\0') && (local_d8 != 0x0)) {
                  FUN_00d50b20();
                }
                if ((local_1c8 != '\0') && (local_1d0 != 0x0)) {
                  FUN_00d50b20();
                }
                if ((local_c0 != '\0') && (local_c8 != 0x0)) {
                  FUN_00d50b20();
                }
                if ((local_398 != '\0') && (local_3a0 != 0x0)) {
                  FUN_00d50b20();
                }
                if ((local_58[0] != '\0') && (local_60 != 0x0)) {
                  FUN_00d50b20();
                }
              }
              if (local_110 != '\0') {
                FUN_00d403d0();
                lVar9 = g_027c8278;
                if (g_027c8278 != 0) {
                  FUN_00d50b00();
                }
                local_390 = lVar9;
                local_388 = '\x01';
                pvVar7 = _pthread_getspecific(pVar16);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0132d900();
                pcVar8 = local_c8;
                local_1b8 = 0;
                if (local_c0 == '\0') {
                  if (local_c8 != 0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_c0 = '\0';
                }
                local_1b8 = '\x01';
                local_1c0 = pcVar8;
                local_378 = '\0';
                local_380 = 0;
                plVar10 = &local_380;
                FUN_00d40470(plVar10,&local_1c0,3,3);
                pVar16 = (void*)plVar10;
                if ((local_378 != '\0') && (local_380 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_1b8 != '\0') && (local_1c0 != 0x0)) {
                  FUN_00d50b20();
                }
                if ((local_c0 != '\0') && (local_c8 != 0x0)) {
                  FUN_00d50b20();
                }
                if ((local_388 != '\0') && (local_390 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_58[0] != '\0') && (local_60 != 0x0)) {
                  FUN_00d50b20();
                }
              }
              if (local_61 != '\0') {
                FUN_00d403d0();
                lVar9 = g_027c8280;
                if (g_027c8280 != 0) {
                  FUN_00d50b00();
                }
                local_370 = lVar9;
                local_368 = '\x01';
                pvVar7 = _pthread_getspecific(pVar16);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0132d900();
                pcVar8 = local_c8;
                local_1a8 = 0;
                if (local_c0 == '\0') {
                  if (local_c8 != 0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_c0 = '\0';
                }
                local_1a8 = '\x01';
                local_1b0 = pcVar8;
                local_358 = '\0';
                local_360 = 0;
                FUN_00d40470(&local_360,&local_1b0,3,3);
                if ((local_358 != '\0') && (local_360 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_1a8 != '\0') && (local_1b0 != 0x0)) {
                  FUN_00d50b20();
                }
                if ((local_c0 != '\0') && (local_c8 != 0x0)) {
                  FUN_00d50b20();
                }
                if ((local_368 != '\0') && (local_370 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_58[0] != '\0') && (local_60 != 0x0)) {
                  FUN_00d50b20();
                }
              }
              if (local_a0 != 0x0) {
                FUN_00d50b20();
              }
              if (pcVar21 != 0x0) {
                FUN_00d50b20();
              }
              iVar22 = (int)local_80 + 1;
              local_80 = CONCAT44(local_80._4_4_,iVar22);
            } while (iVar22 < *(int *)(local_88 + 0xc));
          }
          if (((char)local_90 != '\0') && (local_98 != 0x0)) {
            FUN_00d50b20();
          }
        }
      }
      uVar19 = CONCAT71((int7)((uint64_t)pcVar8 >> 8),local_1d4 != 0);
      if (local_70 != 0x0) {
        FUN_00d50b20();
      }
      goto LAB_01300332;
    }
  }
LAB_01300330:
  uVar19 = 0;
LAB_01300332:
  return uVar19 & 0xffffffff;
}

