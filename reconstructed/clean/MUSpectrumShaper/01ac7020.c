// Function: FUN_01ac7020
// Address: 01ac7020
// Size: 7048 bytes
// Class: MUSpectrumShaper
// String references:
//   "MUSpectrumShaperController"
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


void FUN_01ac7020(void* param_1,uint64_t param_2)

{
  int64_t *plVar1;
  void *pvVar2;
  int64_t lVar3;
  void* pVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  int iVar9;
  uint64_t uVar10;
  int iVar11;
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar12;
  float fVar13;
  uint64_t uVar14;
  float fVar16;
  uint64_t in_XMM1_Qb;
  uint32_t uVar17;
  uint8_t auVar15 [16];
  int64_t local_238;
  char local_230;
  int64_t local_228;
  char local_220;
  int64_t local_218;
  char local_210;
  int64_t local_208;
  char local_200;
  int64_t local_1f8;
  char local_1f0;
  int64_t local_1e8;
  char local_1e0;
  int64_t local_1d8;
  char local_1d0;
  int64_t local_1c8;
  char local_1c0;
  int64_t local_1b8;
  char local_1b0;
  int64_t local_1a8;
  char local_1a0;
  int64_t *local_198;
  char local_190;
  int64_t *local_188;
  char local_180;
  int64_t *local_178;
  char local_170;
  int64_t *local_168;
  char local_160;
  int64_t *local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t *local_138;
  char local_130;
  int64_t *local_128;
  char local_120;
  int64_t *local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  uint64_t local_a8;
  int local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  int local_80;
  uint64_t local_78;
  uint32_t uStack_70;
  uint32_t uStack_6c;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  uint64_t local_40;
  int local_38;
  
  if (this_ptr[0x29] == *arg1) {
    return;
  }
  local_78 = this_ptr + 0x29;
  if (this_ptr[0x29] != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar3 = FUN_00e8b990();
    if (lVar3 == 0) {
      local_180 = 0;
      (**(code **)(this_ptr[0x27] + 0x10))();
      FUN_00d50b00();
      local_180 = '\x01';
      local_188 = this_ptr + 0x27;
      FUN_00cbb340();
      if ((local_180 != '\0') && (local_188 != (int64_t *)0x0)) {
        (**(code **)(*local_188 + 0x10))();
        FUN_00d50b20();
      }
    }
    else {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e8b990();
      local_190 = 0;
      (**(code **)(this_ptr[0x27] + 0x10))();
      FUN_00d50b00();
      local_190 = '\x01';
      local_238 = 0;
      local_230 = '\0';
      param_1 = (void*)&local_238;
      local_198 = this_ptr + 0x27;
      FUN_00cbadd0();
      if ((local_230 != '\0') && (local_238 != 0)) {
        FUN_00d50b20();
      }
      if ((local_190 != '\0') && (local_198 != (int64_t *)0x0)) {
        (**(code **)(*local_198 + 0x10))();
        FUN_00d50b20();
      }
    }
  }
  if (*(int *)(this_ptr[0x2b] + 0xc) != 0) {
    local_50 = '\0';
    local_58 = (int64_t *)0x0;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    local_48 = (int64_t *)this_ptr[0x2b];
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar11 = -local_40._4_4_;
        }
        else {
          iVar11 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar11);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar11 = 0;
        }
        local_40 = CONCAT44(iVar11,(int)local_40);
      }
      lVar3 = (int64_t)(int)local_40;
      iVar11 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar11);
      if (*(int *)((int64_t)local_48 + 0xc) <= iVar11) break;
      local_58 = *(int64_t **)(local_48[2] + 8 + lVar3 * 8);
      lVar5 = (int64_t)iVar11 + (int64_t)local_38;
      lVar3 = *(int64_t *)(*(int64_t *)(this_ptr[0x2a] + 0x10) + lVar5 * 8);
      if (lVar3 != 0) {
        FUN_00d50b00();
        lVar5 = (int64_t)local_38 + (int64_t)(int)local_40;
      }
      lVar5 = *(int64_t *)(*(int64_t *)(this_ptr[0x2c] + 0x10) + lVar5 * 8);
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      local_220 = '\0';
      local_210 = '\0';
      local_228 = lVar3;
      local_218 = lVar5;
      FUN_012dc070();
      if ((local_210 != '\0') && (local_218 != 0)) {
        FUN_00d50b20();
      }
      if ((local_220 != '\0') && (local_228 != 0)) {
        FUN_00d50b20();
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_01aca190();
    param_1 = (void*)lVar3;
    FUN_01f27fe0();
    local_170 = 0;
    (**(code **)(this_ptr[0x28] + 0x10))();
    FUN_00d50b00();
    local_170 = '\x01';
    local_178 = this_ptr + 0x28;
    FUN_01f474f0();
    if ((local_170 != '\0') && (local_178 != (int64_t *)0x0)) {
      (**(code **)(*local_178 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d216c0();
  FUN_00d216c0();
  FUN_00d216c0();
  lVar3 = *arg1;
  lVar5 = this_ptr[0x29];
  if (lVar5 != lVar3) {
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    *local_78 = lVar3;
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  ___bzero();
  if (this_ptr[0x2d] != 0) {
    this_ptr[0x2d] = 0;
    FUN_00d50b20();
  }
  if (*local_78 == 0) goto LAB_01ac8ab9;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar3 = FUN_00e8b990();
  if (lVar3 == 0) goto LAB_01ac8ab9;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  plVar7 = this_ptr + 0x27;
  local_160 = 0;
  (**(code **)(this_ptr[0x27] + 0x10))();
  FUN_00d50b00();
  local_160 = '\x01';
  local_168 = plVar7;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b7b80();
  local_128 = local_58;
  local_120 = 0;
  if (local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_120 = '\x01';
  local_200 = '\0';
  local_208 = 0;
  plVar6 = &local_208;
  FUN_00cbad80(plVar6,&local_128,0x20);
  pVar4 = (void*)plVar6;
  if ((local_200 != '\0') && (local_208 != 0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
    (**(code **)(*local_168 + 0x10))();
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  local_150 = 0;
  (**(code **)(*plVar7 + 0x10))();
  FUN_00d50b00();
  local_150 = '\x01';
  local_158 = plVar7;
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b7b80();
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017ed3a0();
  local_118 = local_58;
  local_110 = 0;
  if (local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_110 = '\x01';
  local_1f0 = '\0';
  local_1f8 = 0;
  plVar7 = &local_1f8;
  FUN_00cbad30(plVar7,&local_118,4);
  pVar4 = (void*)plVar7;
  if ((local_1f0 != '\0') && (local_1f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
    (**(code **)(*local_158 + 0x10))();
    FUN_00d50b20();
  }
  if ((g_02725b90 == '\0') && (iVar11 = ___cxa_guard_acquire(), iVar11 != 0)) {
    g_027e5c58 = FUN_00015ff0();
    g_027e5c40 = "MUSpectrumShaperController";
    g_027e5c48 = 0xa0;
    pVar4 = 0x6594f0;
    g_027e5c50 = FUN_006594f0;
    g_027e5c60 = 0;
    ram_00000000027e5c68 = 0;
    g_027e5c70 = 0;
    ram_00000000027e5c78 = 0;
    g_027e5c80 = 0;
    ram_00000000027e5c88 = 0;
    g_027e5c90 = 0;
    ram_00000000027e5c98 = 0;
    g_027e5ca0 = 0;
    ram_00000000027e5ca8 = 0;
    g_027e5cb0 = 0;
    ram_00000000027e5cb8 = 0;
    g_027e5cc0 = 0;
    ram_00000000027e5cc8 = 0;
    g_027e5cd0 = 0;
    ram_00000000027e5cd8 = 0;
    g_027e5ce0 = 0;
    ram_00000000027e5ce8 = 0;
    g_027e5cf0 = 0;
    ram_00000000027e5cf8 = 0;
    g_027e5d00 = 0;
    ___cxa_guard_release();
  }
  local_148 = FUN_00e86210();
  local_140 = 0;
  if (local_148 != 0) {
    FUN_00d50b00();
  }
  local_140 = '\x01';
  FUN_01d824e0();
  plVar7 = local_58;
  if (local_50 == '\0') {
    if (((local_58 != (int64_t *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
       (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50 = '\0';
  }
  if ((local_140 != '\0') && (local_148 != 0)) {
    FUN_00d50b20();
  }
  uVar17 = (uint32_t)((uint64_t)in_XMM1_Qb >> 0x20);
  fVar16 = (float)((uint64_t)param_2 >> 0x20);
  if ((plVar7 != (int64_t *)0x0) && (*local_78 != 0)) {
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015b7b80();
    if (local_58 == (int64_t *)0x0) {
      bVar12 = false;
    }
    else {
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015b7b80();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017ed3a0();
      bVar12 = local_c0 != 0;
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar17 = (uint32_t)((uint64_t)in_XMM1_Qb >> 0x20);
    fVar16 = (float)((uint64_t)param_2 >> 0x20);
    if (bVar12) {
      FUN_01bd8bc0();
      if (local_50 == '\0') {
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b00();
          if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01ac7af7;
        }
      }
      else if (local_58 != (int64_t *)0x0) {
LAB_01ac7af7:
        FUN_01bd2e40();
        plVar6 = local_58;
        uVar17 = (uint32_t)((uint64_t)in_XMM1_Qb >> 0x20);
        fVar16 = (float)((uint64_t)param_2 >> 0x20);
        if (local_50 == '\0') {
          if (local_58 != (int64_t *)0x0) {
            FUN_00d50b00();
            if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01ac7c57;
          }
        }
        else if (local_58 != (int64_t *)0x0) {
LAB_01ac7c57:
          local_50 = '\0';
          local_58 = (int64_t *)0x0;
          local_48 = plVar6;
          local_40 = 0xffffffff;
          local_38 = 0;
          local_40._4_4_ = 0;
          while( true ) {
            if (local_40._4_4_ != 0) {
              if (local_40._4_4_ < 1) {
                iVar11 = -local_40._4_4_;
              }
              else {
                iVar11 = (int)local_40 - local_40._4_4_;
                local_40 = CONCAT44(local_40._4_4_,iVar11);
                FUN_00d23690();
                local_38 = local_38 + local_40._4_4_;
                iVar11 = 0;
              }
              local_40 = CONCAT44(iVar11,(int)local_40);
            }
            uVar17 = (uint32_t)((uint64_t)in_XMM1_Qb >> 0x20);
            fVar16 = (float)((uint64_t)param_2 >> 0x20);
            lVar3 = (int64_t)(int)local_40;
            iVar11 = (int)local_40 + 1;
            local_40 = CONCAT44(local_40._4_4_,iVar11);
            if (*(int *)((int64_t)local_48 + 0xc) <= iVar11) break;
            local_58 = *(int64_t **)(local_48[2] + 8 + lVar3 * 8);
            pvVar2 = _pthread_getspecific((void*)local_48[2]);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0123f310();
            lVar3 = local_98;
            local_100 = 0;
            if (local_90 == '\0') {
              if (local_98 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_90 = '\0';
            }
            local_100 = '\x01';
            local_108 = lVar3;
            (**(code **)(*plVar7 + 0x5c8))();
            lVar3 = local_c0;
            if (local_b8 == '\0') {
              if (((local_c0 != 0) && (FUN_00d50b00(), local_b8 != '\0')) && (local_c0 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_b8 = '\0';
            }
            if ((local_100 != '\0') && (local_108 != 0)) {
              FUN_00d50b20();
            }
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            if (lVar3 != 0) {
              local_b8 = '\0';
              local_c0 = 0;
              local_b0 = lVar3;
              local_a8 = 0xffffffff;
              local_a0 = 0;
              iVar11 = 0;
              while( true ) {
                iVar9 = 0;
                if (iVar11 != 0) {
                  if (iVar11 < 1) {
                    iVar9 = -iVar11;
                  }
                  else {
                    local_a8 = CONCAT44(local_a8._4_4_,(int)local_a8 - iVar11);
                    FUN_00d23690();
                    local_a0 = local_a0 + local_a8._4_4_;
                    iVar9 = 0;
                  }
                  local_a8 = CONCAT44(iVar9,(int)local_a8);
                }
                lVar3 = (int64_t)(int)local_a8;
                iVar11 = (int)local_a8 + 1;
                local_a8 = CONCAT44(local_a8._4_4_,iVar11);
                if (*(int *)(local_b0 + 0xc) <= iVar11) break;
                local_c0 = *(int64_t *)(*(int64_t *)(local_b0 + 0x10) + 8 + lVar3 * 8);
                iVar11 = iVar9;
                if (local_c0 != 0) {
                  local_90 = '\0';
                  local_98 = 0;
                  local_88 = *(int64_t *)(local_c0 + 0x10);
                  local_80 = 0;
                  if (0 < *(int *)(local_88 + 0xc)) {
                    do {
                      lVar5 = (int64_t)local_80;
                      local_98 = *(int64_t *)(*(int64_t *)(local_88 + 0x10) + lVar5 * 8);
                      FUN_01ac9b60(lVar5,&local_98);
                      lVar3 = local_68;
                      pVar4 = (void*)lVar5;
                      if ((((local_60 == '\0') && (local_68 != 0)) &&
                          (FUN_00d50b00(), local_60 != '\0')) && (local_68 != 0)) {
                        FUN_00d50b20();
                      }
                      pvVar2 = _pthread_getspecific(pVar4);
                      if (pvVar2 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      uVar14 = FUN_015b7ba0();
                      uVar14 = FUN_01414d40(uVar14,8);
                      lVar5 = local_68;
                      if (((local_60 == '\0') && (local_68 != 0)) &&
                         ((uVar14 = FUN_00d50b00(), local_60 != '\0' && (local_68 != 0)))) {
                        uVar14 = FUN_00d50b20();
                      }
                      local_1e8 = lVar5;
                      local_1e0 = '\0';
                      local_1d8 = lVar3;
                      local_1d0 = '\0';
                      FUN_012dbf10(uVar14,&local_1d8);
                      if ((local_1d0 != '\0') && (local_1d8 != 0)) {
                        FUN_00d50b20();
                      }
                      if ((local_1e0 != '\0') && (local_1e8 != 0)) {
                        FUN_00d50b20();
                      }
                      local_68 = local_98;
                      local_60 = '\0';
                      FUN_00d21140();
                      if ((local_60 != '\0') && (local_68 != 0)) {
                        FUN_00d50b20();
                      }
                      local_60 = '\0';
                      local_68 = lVar3;
                      FUN_00d21140();
                      if ((local_60 != '\0') && (local_68 != 0)) {
                        FUN_00d50b20();
                      }
                      local_60 = '\0';
                      local_68 = lVar5;
                      FUN_00d21140();
                      if ((local_60 != '\0') && (local_68 != 0)) {
                        FUN_00d50b20();
                      }
                      if (lVar5 != 0) {
                        FUN_00d50b20();
                      }
                      if (lVar3 != 0) {
                        FUN_00d50b20();
                      }
                      local_80 = local_80 + 1;
                    } while (local_80 < *(int *)(local_88 + 0xc));
                    if ((local_90 != '\0') && (local_98 != 0)) {
                      FUN_00d50b20();
                    }
                  }
                  iVar11 = local_a8._4_4_;
                }
              }
              FUN_01aca2a0();
              FUN_00d50b20();
            }
          }
          plVar6 = local_48;
          FUN_01aca200();
          pVar4 = (void*)plVar6;
          FUN_00d50b20();
        }
        FUN_00d50b20();
        goto LAB_01ac8563;
      }
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015b7b80();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017ed3a0();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123f310();
      local_f8 = local_c0;
      local_f0 = 0;
      if (local_b8 == '\0') {
        if (local_c0 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_b8 = '\0';
      }
      local_f0 = '\x01';
      (**(code **)(*plVar7 + 0x5c8))();
      plVar6 = local_58;
      if (local_50 == '\0') {
        if (((local_58 != (int64_t *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
           (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50 = '\0';
      }
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      uVar17 = (uint32_t)((uint64_t)in_XMM1_Qb >> 0x20);
      fVar16 = (float)((uint64_t)param_2 >> 0x20);
      if (plVar6 != (int64_t *)0x0) {
        local_50 = '\0';
        local_58 = (int64_t *)0x0;
        local_48 = plVar6;
        local_40 = 0xffffffff;
        local_38 = 0;
        uVar10 = 0;
        while( true ) {
          uVar8 = 0;
          iVar11 = (int)uVar10;
          if (iVar11 != 0) {
            if (iVar11 < 1) {
              uVar8 = (uint64_t)(uint)-iVar11;
            }
            else {
              local_40 = CONCAT44(local_40._4_4_,(int)local_40 - iVar11);
              FUN_00d23690();
              local_38 = local_38 + local_40._4_4_;
              uVar8 = 0;
            }
            local_40 = CONCAT44((int)uVar8,(int)local_40);
          }
          uVar17 = (uint32_t)((uint64_t)in_XMM1_Qb >> 0x20);
          fVar16 = (float)((uint64_t)param_2 >> 0x20);
          pVar4 = (void*)uVar8;
          lVar3 = (int64_t)(int)local_40;
          iVar11 = (int)local_40 + 1;
          local_40 = CONCAT44(local_40._4_4_,iVar11);
          if (*(int *)((int64_t)local_48 + 0xc) <= iVar11) break;
          local_58 = *(int64_t **)(local_48[2] + 8 + lVar3 * 8);
          uVar10 = uVar8;
          if (local_58 != (int64_t *)0x0) {
            local_b8 = '\0';
            local_c0 = 0;
            local_b0 = local_58[2];
            local_a8 = local_a8 & 0xffffffff00000000;
            if (0 < *(int *)(local_b0 + 0xc)) {
              iVar11 = 0;
              do {
                lVar5 = (int64_t)iVar11;
                local_c0 = *(int64_t *)(*(int64_t *)(local_b0 + 0x10) + lVar5 * 8);
                FUN_01ac9b60(lVar5,&local_c0);
                lVar3 = local_98;
                pVar4 = (void*)lVar5;
                if ((((local_90 == '\0') && (local_98 != 0)) && (FUN_00d50b00(), local_90 != '\0'))
                   && (local_98 != 0)) {
                  FUN_00d50b20();
                }
                pvVar2 = _pthread_getspecific(pVar4);
                if (pvVar2 != (void *)0x0) {
                  FUN_00e8b990();
                }
                uVar14 = FUN_015b7ba0();
                uVar14 = FUN_01414d40(uVar14,8);
                lVar5 = local_98;
                if (((local_90 == '\0') && (local_98 != 0)) &&
                   ((uVar14 = FUN_00d50b00(), local_90 != '\0' && (local_98 != 0)))) {
                  uVar14 = FUN_00d50b20();
                }
                local_1c8 = lVar5;
                local_1c0 = '\0';
                local_1b8 = lVar3;
                local_1b0 = '\0';
                FUN_012dbf10(uVar14,&local_1b8);
                if ((local_1b0 != '\0') && (local_1b8 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_1c0 != '\0') && (local_1c8 != 0)) {
                  FUN_00d50b20();
                }
                local_98 = local_c0;
                local_90 = '\0';
                FUN_00d21140();
                if ((local_90 != '\0') && (local_98 != 0)) {
                  FUN_00d50b20();
                }
                local_90 = '\0';
                local_98 = lVar3;
                FUN_00d21140();
                if ((local_90 != '\0') && (local_98 != 0)) {
                  FUN_00d50b20();
                }
                local_90 = '\0';
                local_98 = lVar5;
                FUN_00d21140();
                if ((local_90 != '\0') && (local_98 != 0)) {
                  FUN_00d50b20();
                }
                if (lVar5 != 0) {
                  FUN_00d50b20();
                }
                if (lVar3 != 0) {
                  FUN_00d50b20();
                }
                iVar11 = (int)local_a8 + 1;
                local_a8 = CONCAT44(local_a8._4_4_,iVar11);
              } while (iVar11 < *(int *)(local_b0 + 0xc));
              if ((local_b8 != '\0') && (local_c0 != 0)) {
                FUN_00d50b20();
              }
            }
            uVar10 = local_40 >> 0x20;
          }
        }
        FUN_01aca2a0();
        FUN_00d50b20();
      }
    }
  }
LAB_01ac8563:
  if (*(int *)(this_ptr[0x2b] + 0xc) != 0) {
    FUN_01f27fe0();
    local_130 = 0;
    (**(code **)(this_ptr[0x28] + 0x10))();
    uVar14 = FUN_00d50b00();
    local_130 = '\x01';
    local_1a8 = 0;
    local_1a0 = '\0';
    local_138 = this_ptr + 0x28;
    FUN_01f47190(uVar14,&local_1a8);
    if ((local_1a0 != '\0') && (local_1a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
      (**(code **)(*local_138 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*this_ptr + 0x640))();
  plVar6 = local_58;
  FUN_01e3f820();
  (**(code **)(*plVar6 + 0x3d0))();
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b93e0();
  plVar6 = local_58;
  if ((((local_50 == '\0') && (local_58 != (int64_t *)0x0)) && (FUN_00d50b00(), local_50 != '\0'))
     && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b9950();
  plVar1 = local_58;
  if (((local_50 == '\0') && (local_58 != (int64_t *)0x0)) &&
     ((FUN_00d50b00(), local_50 != '\0' && (local_58 != (int64_t *)0x0)))) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b7b80();
  if (local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01ac87de;
    }
LAB_01ac88aa:
    if (plVar1 != (int64_t *)0x0) goto LAB_01ac8a93;
  }
  else {
    if (local_58 == (int64_t *)0x0) goto LAB_01ac88aa;
LAB_01ac87de:
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar11 = FUN_015b7ba0();
    auVar15 = ZEXT416(g_023945e0 & (uint)(g_0240b530 * fVar16)) | g_023945f0;
    auVar15._0_4_ = auVar15._0_4_ + g_0240b530 * fVar16;
    auVar15 = roundss(ZEXT816(0),auVar15,0xb);
    fVar13 = g_0241fd58;
    if (auVar15._0_4_ <= g_0241fd58) {
      fVar13 = auVar15._0_4_;
    }
    local_78 = (int64_t *)CONCAT44(fVar16,fVar16 - fVar13);
    uStack_70 = uVar17;
    uStack_6c = uVar17;
    if (iVar11 == 3) {
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017f2da0();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017f2d90();
      lVar3 = 0;
      do {
        _exp2f((float)((int)lVar3 + 0x23) * g_023908e0 * g_023941f4);
        FUN_00aea610();
        fVar13 = (float)_powf();
        fVar16 = 0.0;
        if (0.0 <= fVar13 * (float)local_78) {
          fVar16 = fVar13 * (float)local_78;
        }
        *(float *)(*(int64_t *)(this_ptr[0x32] + 0x10) + lVar3 * 4) =
             ((float)(int)lVar3 / g_023d7ff4) * fVar16;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x66);
    }
    else {
      lVar3 = 0;
      do {
        FUN_00aea610();
        fVar13 = (float)_powf();
        fVar16 = 0.0;
        if (0.0 <= fVar13 * (float)local_78) {
          fVar16 = fVar13 * (float)local_78;
        }
        *(float *)(*(int64_t *)(this_ptr[0x32] + 0x10) + lVar3 * 4) = fVar16;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x200);
    }
    FUN_00d50b20();
LAB_01ac8a93:
    FUN_00d50b20();
  }
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_01ac8ab9:
  *(void*)((int64_t)this_ptr + 0x1bc) = 0xffffffff;
  ___bzero();
  (**(code **)(*this_ptr + 0x620))();
  return;
}

