// Function: FUN_0129b6c0
// Address: 0129b6c0
// Size: 17518 bytes
// Class: MUAudioSourcePrincipalItem

void FUN_0129b6c0(uint64_t param_1,uint64_t param_2,code **param_3)

{
  double dVar1;
  char cVar2;
  uint32_t uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  int64_t lVar8;
  int64_t lVar9;
  code *pcVar10;
  uint64_t uVar11;
  void *pvVar12;
  int64_t lVar13;
  int64_t *plVar14;
  void*puVar15;
  byte bVar16;
  int iVar17;
  uint uVar18;
  void* pVar19;
  code **ppcVar20;
  code *pcVar21;
  int iVar22;
  int64_t *this_ptr;
  code *pcVar23;
  uint uVar24;
  code *unaff_R14;
  code *pcVar25;
  undefined7 uVar26;
  bool bVar27;
  uint32_t uVar28;
  int64_t local_3d0;
  char local_3c8;
  int64_t local_3c0;
  char local_3b8;
  code *local_3a0;
  char local_398;
  int64_t local_390;
  char local_388;
  code *local_380;
  char local_378;
  code *local_370;
  char local_368;
  code *local_360;
  char local_358;
  code *local_350;
  char local_348;
  int64_t local_340;
  char local_338;
  int64_t local_330;
  char local_328;
  code *local_320;
  char local_318;
  int64_t local_310;
  char local_308;
  code *local_300;
  char local_2f8;
  code *local_2f0;
  char local_2e8;
  code *local_2e0;
  char local_2d8;
  code *local_2d0;
  char local_2c8;
  int64_t local_2c0;
  char local_2b8;
  int64_t local_2b0;
  char local_2a8;
  int64_t local_2a0;
  char local_298;
  int64_t local_290;
  char local_288;
  int64_t local_280;
  char local_278;
  int64_t local_270;
  char local_268;
  int64_t local_260;
  char local_258;
  int64_t local_250;
  char local_248;
  int64_t local_240;
  char local_238;
  int64_t local_230;
  char local_228;
  int64_t local_220;
  char local_218;
  int64_t local_210;
  char local_208;
  int64_t local_200;
  char local_1f8;
  code *local_1f0;
  char local_1e8;
  code *local_1e0;
  char local_1d8;
  int64_t local_1d0;
  char local_1c8;
  int64_t local_1c0;
  char local_1b8;
  int64_t *local_1b0;
  char local_1a8;
  int64_t *local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t *local_180;
  char local_178;
  int64_t *local_170;
  char local_168;
  uint64_t local_160;
  uint32_t local_154;
  code *local_150;
  char local_148;
  code *local_140;
  char local_138;
  code *local_130;
  char local_128;
  uint64_t local_120;
  code *local_118;
  char local_110;
  code *local_108;
  char local_100;
  code *local_f8;
  code *local_f0;
  code *local_e8;
  uint32_t local_dc;
  uint64_t local_d8;
  code *local_d0;
  code *local_c8;
  code *local_c0;
  uint local_b4;
  code *local_b0;
  code *local_a8;
  code *local_a0;
  char local_98;
  int64_t local_90;
  uint64_t local_88;
  int local_80;
  code *local_78;
  char local_70;
  int64_t *local_68;
  code *local_60;
  char local_58;
  code *local_50;
  uint64_t local_48;
  int local_40;
  
  lVar9 = this_ptr[9];
  if (lVar9 == 0) {
    return;
  }
  if (this_ptr[0x20] == 0) {
    return;
  }
  local_68 = this_ptr + 9;
  pvVar7 = _pthread_getspecific((void*)param_1);
  if (pvVar7 != (void *)0x0) {
    lVar9 = *local_68;
    lVar8 = FUN_00e8b990();
    if (lVar8 != 0) {
      lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
  }
  if (*(int64_t *)(lVar9 + 0xd8) == 0) {
    local_58 = '\0';
    local_60 = 0x0;
LAB_0129b81d:
    bVar27 = true;
  }
  else {
    pvVar7 = _pthread_getspecific((void*)param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011ef490();
    if (local_60 == 0x0) goto LAB_0129b81d;
    lVar9 = *local_68;
    pvVar7 = _pthread_getspecific((void*)param_1);
    if (pvVar7 != (void *)0x0) {
      lVar9 = *local_68;
      lVar8 = FUN_00e8b990();
      if (lVar8 != 0) {
        lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
    }
    if (*(int64_t *)(lVar9 + 0xd8) == 0) {
      local_70 = '\0';
      local_78 = 0x0;
    }
    else {
      pvVar7 = _pthread_getspecific((void*)param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef490();
    }
    pvVar7 = _pthread_getspecific((void*)param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01320d00();
    bVar27 = local_a0 == 0x0;
    if ((local_98 != '\0') && (local_a0 != 0x0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_58 != '\0') && (local_60 != 0x0)) {
    FUN_00d50b20();
  }
  if (bVar27) {
    return;
  }
  *(int *)((int64_t)this_ptr + 0x54) = *(int *)((int64_t)this_ptr + 0x54) + 1;
  lVar9 = FUN_00e8b990();
  if (lVar9 != 0) {
    FUN_00e8b990();
    FUN_00cb1f10();
    FUN_00db3260();
    if ((local_58 != '\0') && (local_60 != 0x0)) {
      FUN_00d50b20();
    }
  }
  pcVar10 = CONCAT71((int7)((uint64_t)param_1 >> 8),1);
  local_154 = SUB84(pcVar10,0);
  if (this_ptr[0x1c] == 0x0) {
    local_f8 = 0x0;
    local_160 = 0;
  }
  else {
    local_58 = '\0';
    local_60 = 0x0;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_c8 = g_02572370;
    local_160 = 0;
    local_f8 = 0x0;
    local_50 = this_ptr[0x1c];
    local_48._4_4_ = 0;
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
      local_60 = *(code **)(*(int64_t *)(local_50 + 0x10) + 8 + lVar9 * 8);
      lVar9 = *local_68;
      pvVar7 = _pthread_getspecific((void*)*(int64_t *)(local_50 + 0x10));
      if (pvVar7 != (void *)0x0) {
        lVar9 = *local_68;
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      lVar9 = *(int64_t *)(lVar9 + 0xe0);
      if (lVar9 != 0) {
        FUN_00d50b00();
        local_98 = '\0';
        local_a0 = 0x0;
        local_88 = 0xffffffff;
        local_80 = 0;
        local_90 = lVar9;
        while( true ) {
          lVar9 = (int64_t)(int)local_88;
          iVar22 = (int)local_88 + 1;
          local_88 = CONCAT44(local_88._4_4_,iVar22);
          if (*(int *)(local_90 + 0xc) <= iVar22) break;
          lVar8 = *(int64_t *)(local_90 + 0x10);
          local_a0 = *(code **)(lVar8 + 8 + lVar9 * 8);
          pvVar7 = _pthread_getspecific((void*)lVar8);
          pVar19 = (void*)lVar8;
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_011ef460();
          pvVar7 = _pthread_getspecific(pVar19);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_011ef460();
          unaff_R14 = local_78;
          if ((local_398 != '\0') && (local_3a0 != 0x0)) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != 0x0)) {
            FUN_00d50b20();
          }
          if (unaff_R14 == local_3a0) {
            FUN_0015edf0();
            FUN_00d50b20();
            goto LAB_0129b994;
          }
          if (local_88._4_4_ != 0) {
            if (local_88._4_4_ < 1) {
              iVar22 = -local_88._4_4_;
            }
            else {
              local_88 = CONCAT44(local_88._4_4_,(int)local_88 - local_88._4_4_);
              FUN_00d23690();
              local_80 = local_80 + local_88._4_4_;
              iVar22 = 0;
            }
            local_88 = CONCAT44(iVar22,(int)local_88);
          }
        }
        FUN_0015edf0();
        FUN_00d50b20();
      }
      if (local_f8 == 0x0) {
        pcVar10 = FUN_00e8fc40();
        FUN_00d4ff40();
        *(void**)pcVar10 = &g_02572358;
        uVar11 = (*local_c8)();
        local_160 = CONCAT71((int7)((uint64_t)uVar11 >> 8),1);
        local_f8 = pcVar10;
      }
      local_a0 = local_60;
      local_98 = '\0';
      FUN_00d21140();
      if ((local_98 != '\0') && (local_a0 != 0x0)) {
        FUN_00d50b20();
      }
LAB_0129b994:
    }
    pcVar10 = local_50;
    FUN_0015edf0();
    if (local_f8 == 0x0) {
      local_f8 = 0x0;
    }
    else {
      local_58 = '\0';
      local_60 = 0x0;
      local_50 = local_f8;
      local_48 = 0xffffffff;
      local_40 = 0;
      while( true ) {
        lVar9 = (int64_t)(int)local_48;
        iVar22 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,iVar22);
        if (*(int *)(local_50 + 0xc) <= iVar22) break;
        local_60 = *(code **)(*(int64_t *)(local_50 + 0x10) + 8 + lVar9 * 8);
        FUN_0126e8b0();
        if (local_48._4_4_ != 0) {
          if (local_48 < 0) {
            iVar22 = -local_48._4_4_;
          }
          else {
            local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
            FUN_00d23690();
            local_40 = local_40 + local_48._4_4_;
            iVar22 = 0;
          }
          local_48 = CONCAT44(iVar22,(int)local_48);
        }
      }
      pcVar10 = local_50;
      FUN_0015edf0();
      local_154 = 0;
    }
  }
  lVar9 = *local_68;
  pvVar7 = _pthread_getspecific((void*)pcVar10);
  if (pvVar7 != (void *)0x0) {
    lVar9 = *local_68;
    lVar8 = FUN_00e8b990();
    if (lVar8 != 0) {
      lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
  }
  pcVar25 = *(code **)(lVar9 + 0xe0);
  if (pcVar25 != 0x0) {
    FUN_00d50b00();
    local_58 = '\0';
    local_60 = 0x0;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_a8 = g_025c86d8;
    local_48._4_4_ = 0;
    local_c8 = &g_025c86c0;
    local_c0 = pcVar25;
    local_50 = pcVar25;
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
      lVar8 = *(int64_t *)(local_50 + 0x10);
      local_60 = *(code **)(lVar8 + 8 + lVar9 * 8);
      if (this_ptr[0x1c] != 0) {
        local_98 = '\0';
        local_a0 = 0x0;
        local_88 = 0xffffffff;
        local_80 = 0;
        local_90 = this_ptr[0x1c];
        while( true ) {
          lVar9 = (int64_t)(int)local_88;
          iVar22 = (int)local_88 + 1;
          local_88 = CONCAT44(local_88._4_4_,iVar22);
          if (*(int *)(local_90 + 0xc) <= iVar22) break;
          lVar8 = *(int64_t *)(local_90 + 0x10);
          local_a0 = *(code **)(lVar8 + 8 + lVar9 * 8);
          pvVar7 = _pthread_getspecific((void*)lVar8);
          pVar19 = (void*)lVar8;
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_011ef460();
          pvVar7 = _pthread_getspecific(pVar19);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_011ef460();
          pcVar10 = local_78;
          if ((local_398 != '\0') && (local_3a0 != 0x0)) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != 0x0)) {
            FUN_00d50b20();
          }
          if (pcVar10 == local_3a0) {
            FUN_0015edf0();
            unaff_R14 = local_3a0;
            goto LAB_0129bdec;
          }
          if (local_88._4_4_ != 0) {
            if (local_88._4_4_ < 1) {
              iVar22 = -local_88._4_4_;
            }
            else {
              local_88 = CONCAT44(local_88._4_4_,(int)local_88 - local_88._4_4_);
              FUN_00d23690();
              local_80 = local_80 + local_88._4_4_;
              iVar22 = 0;
            }
            local_88 = CONCAT44(iVar22,(int)local_88);
          }
        }
        lVar8 = local_90;
        FUN_0015edf0();
      }
      pVar19 = (void*)lVar8;
      unaff_R14 = FUN_00e8fc40();
      FUN_00d4ff40();
      *(code **)unaff_R14 = local_c8;
      *(void*)(unaff_R14 + 0x38) = 0;
      *(void*)(unaff_R14 + 0x40) = 0;
      *(void*)(unaff_R14 + 0x48) = 0;
      *(void*)(unaff_R14 + 0x50) = 0;
      *(void*)(unaff_R14 + 0x58) = 0;
      *(void*)(unaff_R14 + 0x60) = 0;
      (*local_a8)();
      pvVar7 = _pthread_getspecific(pVar19);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar7 = _pthread_getspecific(pVar19);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef460();
      pcVar10 = local_a0;
      local_148 = 0;
      if (local_98 == '\0') {
        if (local_a0 != 0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_98 = '\0';
      }
      local_148 = '\x01';
      local_150 = pcVar10;
      FUN_011ef3f0();
      if ((local_148 != '\0') && (local_150 != 0x0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0x0)) {
        FUN_00d50b20();
      }
      FUN_01265db0();
      FUN_00d50b20();
LAB_0129bdec:
    }
    pcVar10 = local_50;
    FUN_0015edf0();
    FUN_00d50b20();
  }
  lVar9 = *local_68;
  pvVar7 = _pthread_getspecific((void*)pcVar10);
  if (pvVar7 != (void *)0x0) {
    lVar9 = *local_68;
    lVar8 = FUN_00e8b990();
    if (lVar8 != 0) {
      lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
  }
  local_c8 = CONCAT44(local_c8._4_4_,*(void*)(lVar9 + 0xf8));
  if (this_ptr[0x19] == 0) {
    local_58 = '\0';
    local_60 = 0x0;
  }
  else {
    pvVar7 = _pthread_getspecific((void*)pcVar10);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152ebe0();
    if (local_60 != 0x0) {
      if (*local_68 == 0) {
        if (local_58 != '\0') {
          FUN_00d50b20();
        }
      }
      else {
        pvVar7 = _pthread_getspecific((void*)pcVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar2 = FUN_0129a470();
        if ((local_58 != '\0') && (local_60 != 0x0)) {
          FUN_00d50b20();
        }
        if (cVar2 != '\0') {
          pvVar7 = _pthread_getspecific((void*)pcVar10);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar22 = FUN_0129a650();
          pvVar7 = _pthread_getspecific((void*)pcVar10);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0129a8a0();
          lVar9 = *local_68;
          pvVar7 = _pthread_getspecific((void*)pcVar10);
          if (pvVar7 != (void *)0x0) {
            lVar9 = *local_68;
            lVar8 = FUN_00e8b990();
            if (lVar8 != 0) {
              lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            }
          }
          if (*(int64_t *)(lVar9 + 200) == 0) {
LAB_0129dc85:
            pcVar25 = 0x0;
          }
          else {
            pvVar7 = _pthread_getspecific((void*)pcVar10);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152ebe0();
            pcVar25 = local_60;
            if (local_58 == '\0') {
              if (local_60 == 0x0) goto LAB_0129dc85;
              FUN_00d50b00();
              if ((local_58 != '\0') && (local_60 != 0x0)) {
                FUN_00d50b20();
              }
            }
          }
          local_c0 = pcVar25;
          if (this_ptr[0x19] == 0) {
            pcVar23 = 0x0;
LAB_0129eb93:
            local_f0 = pcVar23;
            if (pcVar25 != 0x0) goto LAB_0129eba3;
LAB_0129ec36:
            local_d8 = 0;
            pcVar21 = 0x0;
            pcVar23 = local_f0;
          }
          else {
            pvVar7 = _pthread_getspecific((void*)pcVar10);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152ebe0();
            pcVar23 = local_60;
            if (local_58 != '\0') goto LAB_0129eb93;
            if (local_60 != 0x0) {
              FUN_00d50b00();
              if ((local_58 != '\0') && (local_60 != 0x0)) {
                FUN_00d50b20();
              }
              goto LAB_0129eb93;
            }
            local_f0 = 0x0;
            if (pcVar25 == 0x0) goto LAB_0129ec36;
LAB_0129eba3:
            pcVar23 = local_f0;
            pvVar7 = _pthread_getspecific((void*)pcVar10);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar11 = FUN_01508270();
            pcVar21 = local_60;
            if (local_60 == 0x0) {
              pcVar21 = 0x0;
              local_d8 = 0;
            }
            else {
              local_d8 = CONCAT71((int7)((uint64_t)uVar11 >> 8),1);
              if (((local_58 == '\0') && (FUN_00d50b00(), local_58 != '\0')) &&
                 (local_60 != 0x0)) {
                FUN_00d50b20();
              }
            }
          }
          local_b0 = pcVar21;
          if (pcVar23 == 0x0) {
            uVar6 = 0;
            local_a8 = 0x0;
          }
          else {
            pvVar7 = _pthread_getspecific((void*)pcVar10);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01508270();
            local_a8 = local_60;
            pcVar10 = local_60;
            if (local_60 == 0x0) {
              local_a8 = 0x0;
              uVar6 = 0;
            }
            else {
              uVar6 = (uint)CONCAT71((int7)((uint64_t)pcVar23 >> 8),1);
              if (((local_58 == '\0') && (FUN_00d50b00(), local_58 != '\0')) &&
                 (local_60 != 0x0)) {
                FUN_00d50b20();
              }
            }
          }
          if ((g_028ac4f8 == (int64_t *)0x0) || (g_028ac501 == '\0')) {
            FUN_00e8cb50();
            if (g_028ac4f8 == (int64_t *)0x0) {
              plVar14 = (int64_t *)FUN_00e8fc40();
              FUN_0117d430();
              (**(code **)(*plVar14 + 0x18))();
              bVar27 = g_028ac4f8 == (int64_t *)0x0;
              g_028ac4f8 = plVar14;
              if (((bVar27) || (FUN_00d50b20(), g_028ac4f8 != (int64_t *)0x0)) &&
                 (g_028ac500 == '\0')) {
                g_028ac500 = '\x01';
                FUN_00e8cb90();
              }
              g_028ac501 = '\x01';
              FUN_00e8cb70();
            }
            else {
              g_028ac501 = '\x01';
              FUN_00e8cb70();
            }
          }
          FUN_017e1d30();
          if ((g_028ac4e8 == (void*)0x0) || (g_028ac4f1 == '\0')) {
            FUN_00e8cb50();
            if (g_028ac4e8 == (void*)0x0) {
              puVar15 = (void*)FUN_00e8fc40();
              FUN_00d4ff40();
              puVar15[8] = 0;
              *(void*)(puVar15 + 7) = 0;
              *(void*)((int64_t)puVar15 + 0x3c) = 0;
              pcVar10 = &g_026075c8;
              *puVar15 = &g_026075c8;
              puVar15[9] = 0;
              puVar15[10] = 0;
              *(void*)(puVar15 + 0xb) = 0;
              (*g_026075e0)();
              bVar27 = g_028ac4e8 == (void*)0x0;
              g_028ac4e8 = puVar15;
              if (((bVar27) || (FUN_00d50b20(), g_028ac4e8 != (void*)0x0)) &&
                 (g_028ac4f0 == '\0')) {
                g_028ac4f0 = '\x01';
                FUN_00e8cb90();
              }
              pvVar7 = _pthread_getspecific((void*)pcVar10);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_017fad10();
              g_028ac4f1 = '\x01';
              FUN_00e8cb70();
            }
            else {
              g_028ac4f1 = '\x01';
              FUN_00e8cb70();
            }
          }
          pvVar7 = _pthread_getspecific((void*)pcVar10);
          if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            pcVar10 = local_c0;
          }
          FUN_01507e40();
          local_140 = local_a0;
          local_138 = 0;
          if (local_98 == '\0') {
            if (local_a0 != 0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_98 = '\0';
          }
          local_138 = '\x01';
          FUN_017178d0();
          local_e8 = local_60;
          if (local_60 == 0x0) {
            local_dc = 1;
            unaff_R14 = 0x0;
          }
          else {
            uVar26 = (undefined7)((uint64_t)pcVar25 >> 8);
            if (local_58 == '\0') {
              FUN_00d50b00();
              local_dc = 0;
              unaff_R14 = CONCAT71(uVar26,1);
              if ((local_58 == '\0') || (local_60 == 0x0)) goto LAB_0129efac;
              FUN_00d50b20();
            }
            else {
              local_58 = '\0';
            }
            unaff_R14 = CONCAT71(uVar26,1);
            local_dc = 0;
          }
LAB_0129efac:
          if ((local_138 != '\0') && (local_140 != 0x0)) {
            FUN_00d50b20();
          }
          if ((local_98 != '\0') && (local_a0 != 0x0)) {
            FUN_00d50b20();
          }
          pvVar7 = _pthread_getspecific((void*)pcVar10);
          if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            pcVar10 = local_f0;
          }
          FUN_01507e40();
          local_130 = local_a0;
          local_128 = 0;
          if (local_98 == '\0') {
            if (local_a0 != 0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_98 = '\0';
          }
          local_128 = '\x01';
          uVar11 = FUN_017178d0();
          pcVar25 = local_60;
          if (local_60 == 0x0) {
            pcVar25 = 0x0;
            local_120 = 0;
          }
          else if (local_58 == '\0') {
            uVar11 = FUN_00d50b00();
            local_120 = CONCAT71((int7)((uint64_t)uVar11 >> 8),1);
            if ((local_58 != '\0') && (local_60 != 0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_58 = '\0';
            local_120 = CONCAT71((int7)((uint64_t)uVar11 >> 8),1);
          }
          if ((local_128 != '\0') && (local_130 != 0x0)) {
            FUN_00d50b20();
          }
          local_d0 = pcVar25;
          if ((local_98 != '\0') && (local_a0 != 0x0)) {
            FUN_00d50b20();
          }
          pcVar25 = local_b0;
          local_b4 = uVar6;
          if (local_a8 == 0x0) {
            pcVar10 = local_b0;
            if (local_b0 == 0x0) {
              local_a8 = local_b0;
              local_b4 = uVar6 & 0xff;
            }
            else {
              local_a8 = local_b0;
              local_b4 = 0;
              if ((char)local_d8 != '\0') {
                local_b4 = 1;
                FUN_00d50b00();
                local_a8 = pcVar25;
              }
            }
          }
          pVar19 = (void*)pcVar10;
          pcVar10 = local_d0;
          if ((local_d0 == 0x0) && (local_e8 != 0x0)) {
            if ((char)local_dc == '\0') {
              local_d0 = 0x0;
              FUN_00d50b00();
            }
            local_120 = (uint64_t)unaff_R14 & 0xffffffff;
            pcVar10 = local_e8;
          }
          pcVar25 = local_c0;
          if (local_b0 == 0x0) {
            pcVar23 = 0x0;
          }
          else if ((local_a8 == 0x0) || (iVar22 != 1)) {
            pcVar23 = local_b0;
            if ((local_a8 != 0x0) && (iVar22 == 0)) {
              iVar4 = FUN_01715480();
              iVar5 = FUN_01715480();
              pcVar25 = local_b0;
              iVar17 = iVar4 - iVar5;
              iVar22 = 6;
              if (iVar17 < 6) {
                iVar22 = iVar17;
              }
              uVar6 = (iVar4 - (iVar22 + iVar5)) + 0xb;
              uVar24 = (uVar6 % 0xc - uVar6) + iVar17;
              unaff_R14 = (uint64_t)uVar24;
              uVar6 = 0xfffffffb;
              if (-5 < (int)uVar24) {
                uVar6 = uVar24;
              }
              local_d0 = CONCAT71(local_d0._1_7_,uVar6 - uVar24 != 0);
              local_320 = local_b0;
              local_318 = '\0';
              FUN_01716260();
              pcVar23 = local_60;
              if (local_60 == pcVar25) {
                if ((char)local_d8 == '\0') {
                  if (local_58 != '\0') goto LAB_0129f6c7;
                  FUN_00d50b00();
                }
LAB_0129f6d4:
                if ((local_58 != '\0') && (local_60 != 0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                if (local_58 == '\0') {
                  if (local_60 != 0x0) {
                    FUN_00d50b00();
                  }
                  if ((char)local_d8 == '\0') {
                    local_b0 = pcVar23;
                  }
                  else {
                    local_b0 = pcVar23;
                    FUN_00d50b20();
                  }
                  goto LAB_0129f6d4;
                }
                if ((char)local_d8 == '\0') {
                  local_b0 = local_60;
                }
                else {
                  local_b0 = local_60;
                  FUN_00d50b20();
                }
LAB_0129f6c7:
                local_58 = '\0';
              }
              if ((local_318 != '\0') && (local_320 != 0x0)) {
                FUN_00d50b20();
              }
              iVar22 = FUN_01715480();
              iVar22 = iVar22 * 7;
              iVar22 = iVar22 + (((uint)(iVar22 / 6 + (iVar22 >> 0x1f)) >> 1) - (iVar22 >> 0x1f)) *
                                -0xc;
              cVar2 = ((byte)(iVar22 >> 0x1f) & 0xc) + (char)iVar22 + '\x06';
              uVar18 = cVar2 * 0x2b;
              pVar19 = (void*)
                       (char)(cVar2 + ((char)((uVar18 & 0xffff) >> 0xf) + (char)(uVar18 >> 9)) *
                                      -0xc + -6);
              FUN_01715d30();
              pvVar7 = _pthread_getspecific(pVar19);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_017facc0();
              pvVar7 = _pthread_getspecific(pVar19);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              plVar14 = g_028ac4f8;
              local_308 = '\0';
              local_310 = 0;
              local_300 = local_b0;
              local_2f8 = '\0';
              local_2f0 = local_a8;
              local_2e8 = '\0';
              local_2e0 = local_e8;
              local_2d8 = '\0';
              local_2c8 = '\0';
              local_2c0 = 0;
              local_2b8 = '\0';
              local_198 = 0;
              local_2d0 = pcVar10;
              if (g_028ac4f8 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              local_1a0 = plVar14;
              local_198 = '\x01';
              local_2b0 = 0;
              local_2a8 = '\0';
              ppcVar20 = &local_300;
              param_3 = &local_2f0;
              FUN_017fb9d0(ppcVar20,&local_310,param_3,&local_2e0);
              pcVar25 = local_60;
              pVar19 = (void*)ppcVar20;
              if (local_58 == '\0') {
                if (((local_60 != 0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
                   (local_60 != 0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_58 = '\0';
              }
              if ((local_2a8 != '\0') && (local_2b0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_198 != '\0') && (local_1a0 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_2b8 != '\0') && (local_2c0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_2c8 != '\0') && (local_2d0 != 0x0)) {
                FUN_00d50b20();
              }
              if ((local_2d8 != '\0') && (local_2e0 != 0x0)) {
                FUN_00d50b20();
              }
              if ((local_2e8 != '\0') && (local_2f0 != 0x0)) {
                FUN_00d50b20();
              }
              if ((local_2f8 != '\0') && (local_300 != 0x0)) {
                FUN_00d50b20();
              }
              if ((local_308 != '\0') && (local_310 != 0)) {
                FUN_00d50b20();
              }
              pvVar7 = _pthread_getspecific(pVar19);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              iVar22 = FUN_01507f00();
              iVar4 = uVar24 + (((uVar6 - uVar24) - (uint)(byte)local_d0) / 0xc +
                               (uint)(byte)local_d0) * 0xc;
              iVar22 = iVar22 + iVar4;
              iVar22 = iVar22 + (((uint)(iVar22 / 6 + (iVar22 >> 0x1f)) >> 1) - (iVar22 >> 0x1f)) *
                                -0xc;
              iVar22 = *(int *)(*(int64_t *)(pcVar25 + 0x10) +
                               (int64_t)(int)((iVar22 >> 0x1f & 0xcU) + iVar22) * 4);
              FUN_00d50b20();
              iVar22 = (iVar4 + iVar22) * 100;
              local_c8 = CONCAT44(local_c8._4_4_,local_c8._0_4_ + (float)iVar22);
              local_d8 = CONCAT71((uint7)(uint3)((uint)iVar22 >> 8),1);
              pcVar23 = local_b0;
              pcVar25 = local_c0;
            }
          }
          else {
            local_d0 = pcVar10;
            pvVar7 = _pthread_getspecific(pVar19);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_017facc0();
            pcVar25 = local_b0;
            pcVar10 = local_d0;
            pvVar7 = _pthread_getspecific(pVar19);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            plVar14 = g_028ac4f8;
            local_388 = '\0';
            local_390 = 0;
            local_380 = pcVar25;
            local_378 = '\0';
            local_370 = local_a8;
            local_368 = '\0';
            local_360 = local_e8;
            local_358 = '\0';
            local_350 = pcVar10;
            local_348 = '\0';
            local_340 = 0;
            local_338 = '\0';
            local_1a8 = 0;
            if (g_028ac4f8 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_1b0 = plVar14;
            local_1a8 = '\x01';
            local_330 = 0;
            local_328 = '\0';
            ppcVar20 = &local_380;
            param_3 = &local_370;
            FUN_017fb9d0(ppcVar20,&local_390,param_3,&local_360);
            unaff_R14 = local_60;
            pcVar25 = local_c0;
            pVar19 = (void*)ppcVar20;
            if (local_58 == '\0') {
              if (((local_60 != 0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
                 (local_60 != 0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_58 = '\0';
            }
            if ((local_328 != '\0') && (local_330 != 0)) {
              FUN_00d50b20();
            }
            if ((local_1a8 != '\0') && (local_1b0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_338 != '\0') && (local_340 != 0)) {
              FUN_00d50b20();
            }
            if ((local_348 != '\0') && (local_350 != 0x0)) {
              FUN_00d50b20();
            }
            if ((local_358 != '\0') && (local_360 != 0x0)) {
              FUN_00d50b20();
            }
            if ((local_368 != '\0') && (local_370 != 0x0)) {
              FUN_00d50b20();
            }
            if ((local_378 != '\0') && (local_380 != 0x0)) {
              FUN_00d50b20();
            }
            if ((local_388 != '\0') && (local_390 != 0)) {
              FUN_00d50b20();
            }
            pvVar7 = _pthread_getspecific(pVar19);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            iVar22 = FUN_01507f00();
            iVar22 = iVar22 + (((uint)(iVar22 / 6 + (iVar22 >> 0x1f)) >> 1) - (iVar22 >> 0x1f)) *
                              -0xc;
            iVar22 = *(int *)(*(int64_t *)(unaff_R14 + 0x10) +
                             (int64_t)(int)((iVar22 >> 0x1f & 0xcU) + iVar22) * 4);
            FUN_00d50b20();
            local_c8 = CONCAT44(local_c8._4_4_,local_c8._0_4_ + (float)(iVar22 * 100));
            pcVar23 = local_b0;
          }
          if (((char)local_120 != '\0') && (pcVar10 != 0x0)) {
            FUN_00d50b20();
          }
          bVar16 = (byte)local_dc | local_e8 == 0x0;
          pcVar10 = (uint64_t)CONCAT31((int3)((uint)local_dc >> 8),bVar16);
          if (bVar16 == 0) {
            FUN_00d50b20();
          }
          if (((char)local_b4 != '\0') && (local_a8 != 0x0)) {
            FUN_00d50b20();
          }
          if (((char)local_d8 != '\0') && (pcVar23 != 0x0)) {
            FUN_00d50b20();
          }
          if (local_f0 != 0x0) {
            FUN_00d50b20();
          }
          if (pcVar25 != 0x0) {
            FUN_00d50b20();
          }
        }
      }
    }
  }
  if ((local_c8._0_4_ != *(float *)(this_ptr + 0x1f)) ||
     (NAN(local_c8._0_4_) || NAN(*(float *)(this_ptr + 0x1f)))) {
    uVar11 = FUN_00d64850();
    *(float *)(this_ptr + 0x1f) = local_c8._0_4_;
    local_c0 = CONCAT44(local_c0._4_4_,(int)CONCAT71((int7)((uint64_t)uVar11 >> 8),1));
    FUN_00d64910();
  }
  else {
    local_c0 = ((uint64_t)local_c0 & 0xffffffff00000000);
  }
  local_e8 = this_ptr[0x1d];
  local_f0 = ((double)this_ptr[0x1e] + (double)local_e8);
  lVar9 = this_ptr[9];
  pvVar7 = _pthread_getspecific((void*)pcVar10);
  if (pvVar7 != (void *)0x0) {
    lVar9 = *local_68;
    lVar8 = FUN_00e8b990();
    if (lVar8 != 0) {
      lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
  }
  local_c8 = (*(double *)(lVar9 + 0xe8) + *(double *)(lVar9 + 0xb8));
  lVar9 = *local_68;
  pvVar7 = _pthread_getspecific((void*)pcVar10);
  if (pvVar7 != (void *)0x0) {
    lVar9 = *local_68;
    lVar8 = FUN_00e8b990();
    if (lVar8 != 0) {
      lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
  }
  local_a8 = (*(double *)(lVar9 + 0xe8) + *(double *)(lVar9 + 0xf0));
  pvVar7 = _pthread_getspecific((void*)pcVar10);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_c8 = FUN_012f8ad0((int)local_c8);
  lVar9 = *local_68;
  pvVar7 = _pthread_getspecific((void*)pcVar10);
  if (pvVar7 != (void *)0x0) {
    lVar9 = *local_68;
    lVar8 = FUN_00e8b990();
    if (lVar8 != 0) {
      lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
  }
  local_c8 = ((double)local_c8 - *(double *)(lVar9 + 0xb8));
  pvVar7 = _pthread_getspecific((void*)pcVar10);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_a8 = FUN_012f8ad0((int)local_a8);
  uVar26 = (undefined7)((uint64_t)this_ptr >> 8);
  if (((double)local_c8 != (double)this_ptr[0x1d]) ||
     (NAN((double)local_c8) || NAN((double)this_ptr[0x1d]))) {
    cVar2 = FUN_0129aaf0();
    pcVar10 = CONCAT71((int7)((uint64_t)pcVar10 >> 8),1);
    local_b0 = CONCAT44(local_b0._4_4_,(int)pcVar10);
    if (cVar2 == '\0') {
      uVar3 = FUN_0129ac30();
      local_b0 = CONCAT44(local_b0._4_4_,uVar3);
    }
    if (((double)this_ptr[0x1d] != (double)local_c8) ||
       (NAN((double)this_ptr[0x1d]) || NAN((double)local_c8))) {
      FUN_00d64850();
      this_ptr[0x1d] = (int64_t)local_c8;
      FUN_00d64910();
    }
    local_a8 = ((double)local_a8 - (double)local_c8);
    dVar1 = (double)this_ptr[0x1e];
    uVar3 = SUB84(dVar1,0);
    uVar28 = (uint32_t)((uint64_t)dVar1 >> 0x20);
    if (((double)local_a8 != dVar1) || (NAN((double)local_a8) || NAN(dVar1))) goto LAB_0129c711;
LAB_0129c756:
    uVar3 = 0;
  }
  else {
    local_a8 = ((double)local_a8 - (double)local_c8);
    if (((double)local_a8 != (double)this_ptr[0x1e]) ||
       (NAN((double)local_a8) || NAN((double)this_ptr[0x1e]))) {
      cVar2 = FUN_0129aaf0();
      pcVar10 = CONCAT71((int7)((uint64_t)pcVar10 >> 8),1);
      local_b0 = CONCAT44(local_b0._4_4_,(int)pcVar10);
      if (cVar2 == '\0') {
        uVar3 = FUN_0129ac30();
        local_b0 = CONCAT44(local_b0._4_4_,uVar3);
      }
      uVar3 = (uint32_t)this_ptr[0x1e];
      uVar28 = (uint32_t)((uint64_t)this_ptr[0x1e] >> 0x20);
LAB_0129c711:
      local_c0 = CONCAT44(local_c0._4_4_,(int)CONCAT71(uVar26,1));
      if (((double)CONCAT44(uVar28,uVar3) != (double)local_a8) ||
         (NAN((double)CONCAT44(uVar28,uVar3)) || NAN((double)local_a8))) {
        FUN_00d64850();
        this_ptr[0x1e] = (int64_t)local_a8;
        FUN_00d64910();
      }
      goto LAB_0129c756;
    }
    uVar3 = (uint32_t)CONCAT71((int7)((uint64_t)unaff_R14 >> 8),1);
    local_b0 = ((uint64_t)local_b0 & 0xffffffff00000000);
  }
  lVar9 = *local_68;
  pvVar7 = _pthread_getspecific((void*)pcVar10);
  if (pvVar7 != (void *)0x0) {
    lVar9 = *local_68;
    lVar8 = FUN_00e8b990();
    if (lVar8 != 0) {
      lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
  }
  lVar9 = *(int64_t *)(lVar9 + 0x160);
  local_c8 = CONCAT44(local_c8._4_4_,uVar3);
  if (lVar9 == 0) {
    if (this_ptr[0x2c] != 0) {
      local_c0 = CONCAT44(local_c0._4_4_,(int)CONCAT71(uVar26,1));
      FUN_0126dd90();
    }
  }
  else {
    FUN_00d50b00();
    if (this_ptr[0x2c] != 0) {
      pvVar7 = _pthread_getspecific((void*)pcVar10);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_188 = 0;
      lVar8 = this_ptr[0x2c];
      if (lVar8 != 0) {
        FUN_00d50b00();
      }
      local_188 = '\x01';
      local_190 = lVar8;
      cVar2 = FUN_00d51e10();
      if ((local_188 != '\0') && (local_190 != 0)) {
        FUN_00d50b20();
      }
      if (cVar2 != '\0') goto LAB_0129c947;
    }
    pvVar7 = _pthread_getspecific((void*)pcVar10);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    pcVar25 = local_60;
    if (local_58 == '\0') {
      if (local_60 != 0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    uVar11 = FUN_0126dd90();
    if (pcVar25 != 0x0) {
      uVar11 = FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0x0)) {
      uVar11 = FUN_00d50b20();
    }
    local_c0 = CONCAT44(local_c0._4_4_,(int)CONCAT71((int7)((uint64_t)uVar11 >> 8),1));
  }
LAB_0129c947:
  if ((g_028ac4d8 == 0x0) || (g_028ac4e1 == '\0')) {
    FUN_00e8cb50();
    if (g_028ac4d8 == 0x0) {
      pcVar25 = FUN_00e8fc40();
      FUN_00d4ff40();
      pcVar10 = &g_02572358;
      *(void**)pcVar25 = &g_02572358;
      (*g_02572370)();
      bVar27 = g_028ac4d8 == 0x0;
      g_028ac4d8 = pcVar25;
      if (((bVar27) || (FUN_00d50b20(), g_028ac4d8 != 0x0)) && (g_028ac4e0 == '\0')) {
        g_028ac4e0 = '\x01';
        FUN_00e8cb90();
      }
      uVar3 = FUN_00d4efa0();
      local_2a0 = g_027e0b18;
      if (g_027e0b18 != 0) {
        uVar3 = FUN_00d50b00();
      }
      local_298 = '\x01';
      FUN_00c837f0(uVar3,&local_2a0);
      pcVar25 = local_a0;
      if (local_98 == '\0') {
        if (local_a0 != 0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_98 = '\0';
      }
      local_60 = pcVar25;
      local_58 = '\0';
      FUN_00d21140();
      if ((local_58 != '\0') && (local_60 != 0x0)) {
        FUN_00d50b20();
      }
      if (pcVar25 != 0x0) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0x0)) {
        FUN_00d50b20();
      }
      if ((local_298 != '\0') && (local_2a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0x0)) {
        FUN_00d50b20();
      }
      uVar3 = FUN_00d4efa0();
      local_290 = g_027e0b20;
      if (g_027e0b20 != 0) {
        uVar3 = FUN_00d50b00();
      }
      local_288 = '\x01';
      FUN_00c837f0(uVar3,&local_290);
      pcVar25 = local_a0;
      if (local_98 == '\0') {
        if (local_a0 != 0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_98 = '\0';
      }
      local_60 = pcVar25;
      local_58 = '\0';
      FUN_00d21140();
      if ((local_58 != '\0') && (local_60 != 0x0)) {
        FUN_00d50b20();
      }
      if (pcVar25 != 0x0) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0x0)) {
        FUN_00d50b20();
      }
      if ((local_288 != '\0') && (local_290 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0x0)) {
        FUN_00d50b20();
      }
      uVar3 = FUN_00d4efa0();
      local_280 = g_026d83e0;
      if (g_026d83e0 != 0) {
        uVar3 = FUN_00d50b00();
      }
      local_278 = '\x01';
      FUN_00c837f0(uVar3,&local_280);
      pcVar25 = local_a0;
      if (local_98 == '\0') {
        if (local_a0 != 0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_98 = '\0';
      }
      local_60 = pcVar25;
      local_58 = '\0';
      FUN_00d21140();
      if ((local_58 != '\0') && (local_60 != 0x0)) {
        FUN_00d50b20();
      }
      if (pcVar25 != 0x0) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0x0)) {
        FUN_00d50b20();
      }
      if ((local_278 != '\0') && (local_280 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0x0)) {
        FUN_00d50b20();
      }
      uVar3 = FUN_00d4efa0();
      local_270 = g_026d83e8;
      if (g_026d83e8 != 0) {
        uVar3 = FUN_00d50b00();
      }
      local_268 = '\x01';
      FUN_00c837f0(uVar3,&local_270);
      pcVar25 = local_a0;
      if (local_98 == '\0') {
        if (local_a0 != 0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_98 = '\0';
      }
      local_60 = pcVar25;
      local_58 = '\0';
      FUN_00d21140();
      if ((local_58 != '\0') && (local_60 != 0x0)) {
        FUN_00d50b20();
      }
      if (pcVar25 != 0x0) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0x0)) {
        FUN_00d50b20();
      }
      if ((local_268 != '\0') && (local_270 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0x0)) {
        FUN_00d50b20();
      }
      uVar3 = FUN_00d4efa0();
      local_260 = g_02726c50;
      if (g_02726c50 != 0) {
        uVar3 = FUN_00d50b00();
      }
      local_258 = '\x01';
      FUN_00c837f0(uVar3,&local_260);
      pcVar25 = local_a0;
      if (local_98 == '\0') {
        if (local_a0 != 0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_98 = '\0';
      }
      local_60 = pcVar25;
      local_58 = '\0';
      FUN_00d21140();
      if ((local_58 != '\0') && (local_60 != 0x0)) {
        FUN_00d50b20();
      }
      if (pcVar25 != 0x0) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0x0)) {
        FUN_00d50b20();
      }
      if ((local_258 != '\0') && (local_260 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0x0)) {
        FUN_00d50b20();
      }
      uVar3 = FUN_00d4efa0();
      local_250 = g_027bebe8;
      if (g_027bebe8 != 0) {
        uVar3 = FUN_00d50b00();
      }
      local_248 = '\x01';
      FUN_00c837f0(uVar3,&local_250);
      pcVar25 = local_a0;
      if (local_98 == '\0') {
        if (local_a0 != 0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_98 = '\0';
      }
      local_60 = pcVar25;
      local_58 = '\0';
      FUN_00d21140();
      if ((local_58 != '\0') && (local_60 != 0x0)) {
        FUN_00d50b20();
      }
      if (pcVar25 != 0x0) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0x0)) {
        FUN_00d50b20();
      }
      if ((local_248 != '\0') && (local_250 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0x0)) {
        FUN_00d50b20();
      }
      uVar3 = FUN_00d4efa0();
      local_240 = g_026d83f8;
      if (g_026d83f8 != 0) {
        uVar3 = FUN_00d50b00();
      }
      local_238 = '\x01';
      FUN_00c837f0(uVar3,&local_240);
      pcVar25 = local_a0;
      if (local_98 == '\0') {
        if (local_a0 != 0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_98 = '\0';
      }
      local_60 = pcVar25;
      local_58 = '\0';
      FUN_00d21140();
      if ((local_58 != '\0') && (local_60 != 0x0)) {
        FUN_00d50b20();
      }
      if (pcVar25 != 0x0) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0x0)) {
        FUN_00d50b20();
      }
      if ((local_238 != '\0') && (local_240 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0x0)) {
        FUN_00d50b20();
      }
      uVar3 = FUN_00d4efa0();
      local_230 = g_027e0af0;
      if (g_027e0af0 != 0) {
        uVar3 = FUN_00d50b00();
      }
      local_228 = '\x01';
      FUN_00c837f0(uVar3,&local_230);
      pcVar25 = local_a0;
      if (local_98 == '\0') {
        if (local_a0 != 0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_98 = '\0';
      }
      local_60 = pcVar25;
      local_58 = '\0';
      FUN_00d21140();
      if ((local_58 != '\0') && (local_60 != 0x0)) {
        FUN_00d50b20();
      }
      if (pcVar25 != 0x0) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0x0)) {
        FUN_00d50b20();
      }
      if ((local_228 != '\0') && (local_230 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0x0)) {
        FUN_00d50b20();
      }
      uVar3 = FUN_00d4efa0();
      local_220 = g_027e0af8;
      if (g_027e0af8 != 0) {
        uVar3 = FUN_00d50b00();
      }
      local_218 = '\x01';
      FUN_00c837f0(uVar3,&local_220);
      pcVar25 = local_a0;
      if (local_98 == '\0') {
        if (local_a0 != 0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_98 = '\0';
      }
      local_60 = pcVar25;
      local_58 = '\0';
      FUN_00d21140();
      if ((local_58 != '\0') && (local_60 != 0x0)) {
        FUN_00d50b20();
      }
      if (pcVar25 != 0x0) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0x0)) {
        FUN_00d50b20();
      }
      if ((local_218 != '\0') && (local_220 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0x0)) {
        FUN_00d50b20();
      }
      uVar3 = FUN_00d4efa0();
      local_210 = g_027e0b00;
      if (g_027e0b00 != 0) {
        uVar3 = FUN_00d50b00();
      }
      local_208 = '\x01';
      FUN_00c837f0(uVar3,&local_210);
      pcVar25 = local_a0;
      if (local_98 == '\0') {
        if (local_a0 != 0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_98 = '\0';
      }
      local_60 = pcVar25;
      local_58 = '\0';
      FUN_00d21140();
      if ((local_58 != '\0') && (local_60 != 0x0)) {
        FUN_00d50b20();
      }
      if (pcVar25 != 0x0) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0x0)) {
        FUN_00d50b20();
      }
      if ((local_208 != '\0') && (local_210 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0x0)) {
        FUN_00d50b20();
      }
      FUN_00d4efa0();
      local_200 = g_027e0b08;
      if (g_027e0b08 != 0) {
        FUN_00d50b00();
      }
      local_1f8 = '\x01';
      FUN_00c837f0();
      pcVar25 = local_a0;
      if (local_98 == '\0') {
        if (local_a0 != 0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_98 = '\0';
      }
      local_60 = pcVar25;
      local_58 = '\0';
      FUN_00d21140();
      if ((local_58 != '\0') && (local_60 != 0x0)) {
        FUN_00d50b20();
      }
      if (pcVar25 != 0x0) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0x0)) {
        FUN_00d50b20();
      }
      if ((local_1f8 != '\0') && (local_200 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0x0)) {
        FUN_00d50b20();
      }
      g_028ac4e1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028ac4e1 = '\x01';
      FUN_00e8cb70();
    }
    if (g_028ac4d8 == 0x0) goto LAB_0129d624;
LAB_0129c96d:
    local_58 = '\0';
    local_60 = 0x0;
    local_50 = g_028ac4d8;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_48._4_4_ = 0;
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
      lVar8 = (int64_t)(int)local_48;
      iVar22 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar22);
      if (*(int *)(local_50 + 0xc) <= iVar22) break;
      pvVar7 = *(void **)(local_50 + 0x10);
      local_60 = *(code **)((int64_t)pvVar7 + lVar8 * 8 + 8);
      FUN_00c77cd0();
      FUN_00c7b220();
      iVar22 = FUN_00e82730();
      if ((local_98 != '\0') && (local_a0 != 0x0)) {
        FUN_00d50b20();
      }
      plVar14 = (int64_t *)*local_68;
      pvVar12 = _pthread_getspecific((void*)pvVar7);
      if (pvVar12 != (void *)0x0) {
        plVar14 = (int64_t *)*local_68;
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          plVar14 = (int64_t *)plVar14[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
      }
      (**(code **)(*plVar14 + 0x218))();
      (**(code **)(*this_ptr + 0x218))();
      iVar22 = _memcmp(pvVar7,(void *)(int64_t)iVar22,(size_t)param_3);
      if (iVar22 != 0) {
        (**(code **)(*this_ptr + 0x208))(1,local_60);
      }
    }
    pcVar10 = local_50;
    FUN_00cc1480();
    if (this_ptr[0x15] == 0) goto LAB_0129d97c;
LAB_0129d636:
    lVar8 = *local_68;
    pvVar7 = _pthread_getspecific((void*)pcVar10);
    if (pvVar7 != (void *)0x0) {
      lVar8 = *local_68;
      lVar13 = FUN_00e8b990();
      if (lVar13 != 0) {
        lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8);
      }
    }
    if (*(int64_t *)(lVar8 + 0xa8) == 0) {
LAB_0129d811:
      if (this_ptr[0x15] == 0) {
LAB_0129d894:
        pcVar25 = 0x0;
      }
      else {
        pvVar7 = _pthread_getspecific((void*)pcVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012dff70();
        pcVar25 = local_60;
        if (local_58 == '\0') {
          if (local_60 == 0x0) goto LAB_0129d894;
          FUN_00d50b00();
          if ((local_58 != '\0') && (local_60 != 0x0)) {
            FUN_00d50b20();
          }
        }
      }
      pvVar7 = _pthread_getspecific((void*)pcVar10);
      pcVar23 = pcVar25;
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        pcVar23 = *(code **)(pcVar25 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8 + 0x20);
      }
      *(int *)(pcVar23 + 0x54) = *(int *)(pcVar23 + 0x54) + 1;
      pvVar7 = _pthread_getspecific((void*)pcVar10);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dffb0();
      pvVar7 = _pthread_getspecific((void*)pcVar10);
      if ((pvVar7 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
        *(int *)(pcVar25 + 0x54) = *(int *)(pcVar25 + 0x54) + -1;
      }
      else {
        *(int *)(*(int64_t *)(pcVar25 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8 + 0x20) +
                0x54) =
             *(int *)(*(int64_t *)(pcVar25 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8 + 0x20)
                     + 0x54) + -1;
      }
      if (pcVar25 != 0x0) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
      pvVar7 = _pthread_getspecific((void*)pcVar10);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dff70();
      pcVar25 = local_60;
      pvVar7 = _pthread_getspecific((void*)pcVar10);
      pcVar23 = local_60;
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), pcVar25 = pcVar23, lVar8 != 0)) {
        pcVar25 = *(code **)(pcVar23 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8 + 0x20);
      }
      pcVar25 = *(code **)(pcVar25 + 0x48);
      if (pcVar25 != 0x0) {
        FUN_00d50b00();
      }
      lVar8 = *local_68;
      pvVar7 = _pthread_getspecific((void*)pcVar10);
      if (pvVar7 != (void *)0x0) {
        lVar8 = *local_68;
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8);
        }
      }
      lVar8 = *(int64_t *)(lVar8 + 0xa8);
      if (lVar8 != 0) {
        FUN_00d50b00();
      }
      pvVar7 = _pthread_getspecific((void*)pcVar10);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dff70();
      pcVar23 = local_a0;
      if ((local_98 != '\0') && (local_a0 != 0x0)) {
        FUN_00d50b20();
      }
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
      if (pcVar25 != 0x0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (pcVar25 != pcVar23) goto LAB_0129d811;
    }
    if (this_ptr[0x15] == 0) goto LAB_0129d97c;
  }
  else {
    if (g_028ac4d8 != 0x0) goto LAB_0129c96d;
LAB_0129d624:
    if (this_ptr[0x15] != 0) goto LAB_0129d636;
LAB_0129d97c:
    lVar8 = *local_68;
    pvVar7 = _pthread_getspecific((void*)pcVar10);
    if (pvVar7 != (void *)0x0) {
      lVar8 = *local_68;
      lVar13 = FUN_00e8b990();
      if (lVar13 != 0) {
        lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8);
      }
    }
    if (*(int64_t *)(lVar8 + 0xa8) != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
      pvVar7 = _pthread_getspecific((void*)pcVar10);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar8 = *local_68;
      pvVar7 = _pthread_getspecific((void*)pcVar10);
      if (pvVar7 != (void *)0x0) {
        lVar8 = *local_68;
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8);
        }
      }
      if (*(int64_t *)(lVar8 + 0xa8) == 0) {
        local_98 = '\0';
        local_a0 = 0x0;
LAB_0129daf5:
        local_118 = 0x0;
      }
      else {
        pvVar7 = _pthread_getspecific((void*)pcVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012dff70();
        local_118 = local_a0;
        local_110 = 0;
        if (local_98 == '\0') {
          if (local_a0 == 0x0) goto LAB_0129daf5;
          FUN_00d50b00();
        }
        else {
          local_98 = '\0';
        }
      }
      local_110 = '\x01';
      FUN_012f98b0();
      pcVar25 = local_60;
      if (local_58 == '\0') {
        if (((local_60 != 0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
           (local_60 != 0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_58 = '\0';
      }
      if ((local_110 != '\0') && (local_118 != 0x0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0x0)) {
        FUN_00d50b20();
      }
      if (pcVar25 != 0x0) {
        pvVar7 = _pthread_getspecific((void*)pcVar10);
        pcVar23 = pcVar25;
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          pcVar23 = *(code **)(pcVar25 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8 + 0x20);
        }
        *(int *)(pcVar23 + 0x54) = *(int *)(pcVar23 + 0x54) + 1;
        pvVar7 = _pthread_getspecific((void*)pcVar10);
        pcVar23 = pcVar25;
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          pcVar23 = *(code **)(pcVar25 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8 + 0x20);
        }
        if (*(int64_t *)(pcVar23 + 0xa0) == 0) {
LAB_0129dd81:
          bVar27 = true;
        }
        else {
          pvVar7 = _pthread_getspecific((void*)pcVar10);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dff00();
          pcVar23 = local_60;
          if (local_58 == '\0') {
            if (local_60 == 0x0) goto LAB_0129dd81;
            FUN_00d50b00();
            if ((local_58 != '\0') && (local_60 != 0x0)) {
              FUN_00d50b20();
            }
          }
          else if (local_60 == 0x0) {
            bVar27 = true;
            goto LAB_0129de62;
          }
          pvVar7 = _pthread_getspecific((void*)pcVar10);
          pcVar21 = pcVar23;
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            pcVar21 = *(code **)(pcVar23 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8 + 0x20);
          }
          *(int *)(pcVar21 + 0x54) = *(int *)(pcVar21 + 0x54) + 1;
          pvVar7 = _pthread_getspecific((void*)pcVar10);
          pcVar21 = pcVar25;
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            pcVar21 = *(code **)(pcVar25 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8 + 0x20);
          }
          lVar8 = *(int64_t *)(pcVar21 + 0xa0);
          if (lVar8 != 0) {
            FUN_00d50b00();
          }
          pvVar7 = _pthread_getspecific((void*)pcVar10);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dffb0();
          if (lVar8 != 0) {
            FUN_00d50b20();
          }
          pvVar7 = _pthread_getspecific((void*)pcVar10);
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            pcVar23 = *(code **)(pcVar23 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8 + 0x20);
          }
          *(int *)(pcVar23 + 0x54) = *(int *)(pcVar23 + 0x54) + -1;
          bVar27 = false;
        }
LAB_0129de62:
        local_1f0 = pcVar25;
        local_1e8 = '\0';
        local_178 = 0;
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_178 = '\x01';
        local_180 = this_ptr;
        FUN_012e0130();
        if ((local_3c8 != '\0') && (local_3d0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_178 != '\0') && (local_180 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_1e8 != '\0') && (local_1f0 != 0x0)) {
          FUN_00d50b20();
        }
        pvVar7 = _pthread_getspecific((void*)pcVar10);
        if ((pvVar7 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
          *(int *)(pcVar25 + 0x54) = *(int *)(pcVar25 + 0x54) + -1;
        }
        else {
          *(int *)(*(int64_t *)(pcVar25 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8 + 0x20) +
                  0x54) =
               *(int *)(*(int64_t *)
                         (pcVar25 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8 + 0x20) + 0x54) +
               -1;
        }
        if (!bVar27) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
  }
  if (this_ptr[0x14] == 0) {
LAB_0129e2a8:
    lVar8 = *local_68;
    pvVar7 = _pthread_getspecific((void*)pcVar10);
    if (pvVar7 != (void *)0x0) {
      lVar8 = *local_68;
      lVar13 = FUN_00e8b990();
      if (lVar13 != 0) {
        lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8);
      }
    }
    if (*(int64_t *)(lVar8 + 0xa0) != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
      pvVar7 = _pthread_getspecific((void*)pcVar10);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar8 = *local_68;
      pvVar7 = _pthread_getspecific((void*)pcVar10);
      if (pvVar7 != (void *)0x0) {
        lVar8 = *local_68;
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8);
        }
      }
      if (*(int64_t *)(lVar8 + 0xa0) == 0) {
        local_98 = '\0';
        local_a0 = 0x0;
LAB_0129e421:
        local_108 = 0x0;
      }
      else {
        pvVar7 = _pthread_getspecific((void*)pcVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012dff00();
        local_108 = local_a0;
        local_100 = 0;
        if (local_98 == '\0') {
          if (local_a0 == 0x0) goto LAB_0129e421;
          FUN_00d50b00();
        }
        else {
          local_98 = '\0';
        }
      }
      local_100 = '\x01';
      FUN_012f98b0();
      pcVar25 = local_60;
      if (local_58 == '\0') {
        if (((local_60 != 0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
           (local_60 != 0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_58 = '\0';
      }
      if ((local_100 != '\0') && (local_108 != 0x0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0x0)) {
        FUN_00d50b20();
      }
      if (pcVar25 != 0x0) {
        pvVar7 = _pthread_getspecific((void*)pcVar10);
        pcVar23 = pcVar25;
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          pcVar23 = *(code **)(pcVar25 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8 + 0x20);
        }
        *(int *)(pcVar23 + 0x54) = *(int *)(pcVar23 + 0x54) + 1;
        pvVar7 = _pthread_getspecific((void*)pcVar10);
        pcVar23 = pcVar25;
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          pcVar23 = *(code **)(pcVar25 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8 + 0x20);
        }
        if (*(int64_t *)(pcVar23 + 0xa8) == 0) {
LAB_0129e601:
          bVar27 = true;
        }
        else {
          pvVar7 = _pthread_getspecific((void*)pcVar10);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dff70();
          pcVar23 = local_60;
          if (local_58 == '\0') {
            if (local_60 == 0x0) goto LAB_0129e601;
            FUN_00d50b00();
            if ((local_58 != '\0') && (local_60 != 0x0)) {
              FUN_00d50b20();
            }
          }
          else if (local_60 == 0x0) {
            bVar27 = true;
            goto LAB_0129e6e2;
          }
          pvVar7 = _pthread_getspecific((void*)pcVar10);
          pcVar21 = pcVar23;
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            pcVar21 = *(code **)(pcVar23 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8 + 0x20);
          }
          *(int *)(pcVar21 + 0x54) = *(int *)(pcVar21 + 0x54) + 1;
          pvVar7 = _pthread_getspecific((void*)pcVar10);
          pcVar21 = pcVar25;
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            pcVar21 = *(code **)(pcVar25 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8 + 0x20);
          }
          lVar8 = *(int64_t *)(pcVar21 + 0xa8);
          if (lVar8 != 0) {
            FUN_00d50b00();
          }
          pvVar7 = _pthread_getspecific((void*)pcVar10);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dffb0();
          if (lVar8 != 0) {
            FUN_00d50b20();
          }
          pvVar7 = _pthread_getspecific((void*)pcVar10);
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            pcVar23 = *(code **)(pcVar23 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8 + 0x20);
          }
          *(int *)(pcVar23 + 0x54) = *(int *)(pcVar23 + 0x54) + -1;
          bVar27 = false;
        }
LAB_0129e6e2:
        local_168 = 0;
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_168 = '\x01';
        local_1e0 = pcVar25;
        local_1d8 = '\0';
        local_170 = this_ptr;
        FUN_012e0130();
        if ((local_3b8 != '\0') && (local_3c0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_1d8 != '\0') && (local_1e0 != 0x0)) {
          FUN_00d50b20();
        }
        if ((local_168 != '\0') && (local_170 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar7 = _pthread_getspecific((void*)pcVar10);
        if ((pvVar7 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
          *(int *)(pcVar25 + 0x54) = *(int *)(pcVar25 + 0x54) + -1;
        }
        else {
          *(int *)(*(int64_t *)(pcVar25 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8 + 0x20) +
                  0x54) =
               *(int *)(*(int64_t *)
                         (pcVar25 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8 + 0x20) + 0x54) +
               -1;
        }
        if (!bVar27) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
  }
  else {
    lVar8 = *local_68;
    pvVar7 = _pthread_getspecific((void*)pcVar10);
    if (pvVar7 != (void *)0x0) {
      lVar8 = *local_68;
      lVar13 = FUN_00e8b990();
      if (lVar13 != 0) {
        lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8);
      }
    }
    if (*(int64_t *)(lVar8 + 0xa0) == 0) {
LAB_0129e13d:
      if (this_ptr[0x14] == 0) {
LAB_0129e1c0:
        pcVar25 = 0x0;
      }
      else {
        pvVar7 = _pthread_getspecific((void*)pcVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012dff00();
        pcVar25 = local_60;
        if (local_58 == '\0') {
          if (local_60 == 0x0) goto LAB_0129e1c0;
          FUN_00d50b00();
          if ((local_58 != '\0') && (local_60 != 0x0)) {
            FUN_00d50b20();
          }
        }
      }
      pvVar7 = _pthread_getspecific((void*)pcVar10);
      pcVar23 = pcVar25;
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        pcVar23 = *(code **)(pcVar25 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8 + 0x20);
      }
      *(int *)(pcVar23 + 0x54) = *(int *)(pcVar23 + 0x54) + 1;
      pvVar7 = _pthread_getspecific((void*)pcVar10);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dffb0();
      pvVar7 = _pthread_getspecific((void*)pcVar10);
      if ((pvVar7 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
        *(int *)(pcVar25 + 0x54) = *(int *)(pcVar25 + 0x54) + -1;
      }
      else {
        *(int *)(*(int64_t *)(pcVar25 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8 + 0x20) +
                0x54) =
             *(int *)(*(int64_t *)(pcVar25 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8 + 0x20)
                     + 0x54) + -1;
      }
      if (pcVar25 != 0x0) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
      pvVar7 = _pthread_getspecific((void*)pcVar10);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dff00();
      pcVar25 = local_60;
      pvVar7 = _pthread_getspecific((void*)pcVar10);
      pcVar23 = local_60;
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), pcVar25 = pcVar23, lVar8 != 0)) {
        pcVar25 = *(code **)(pcVar23 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8 + 0x20);
      }
      pcVar25 = *(code **)(pcVar25 + 0x48);
      if (pcVar25 != 0x0) {
        FUN_00d50b00();
      }
      lVar8 = *local_68;
      pvVar7 = _pthread_getspecific((void*)pcVar10);
      if (pvVar7 != (void *)0x0) {
        lVar8 = *local_68;
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8);
        }
      }
      lVar8 = *(int64_t *)(lVar8 + 0xa0);
      if (lVar8 != 0) {
        FUN_00d50b00();
      }
      pvVar7 = _pthread_getspecific((void*)pcVar10);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dff00();
      pcVar23 = local_a0;
      if ((local_98 != '\0') && (local_a0 != 0x0)) {
        FUN_00d50b20();
      }
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
      if (pcVar25 != 0x0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (pcVar25 != pcVar23) goto LAB_0129e13d;
    }
    if (this_ptr[0x14] == 0) goto LAB_0129e2a8;
  }
  if (this_ptr[0x15] != 0) {
    pvVar7 = _pthread_getspecific((void*)pcVar10);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar8 = *local_68;
    pvVar7 = _pthread_getspecific((void*)pcVar10);
    if (pvVar7 != (void *)0x0) {
      lVar8 = *local_68;
      lVar13 = FUN_00e8b990();
      if (lVar13 != 0) {
        lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8);
      }
    }
    lVar8 = *(int64_t *)(lVar8 + 0xa8);
    if (lVar8 != 0) {
      FUN_00d50b00();
    }
    local_1c8 = '\x01';
    local_1d0 = lVar8;
    FUN_012e0640();
    if ((local_1c8 != '\0') && (local_1d0 != 0)) {
      FUN_00d50b20();
    }
  }
  if (this_ptr[0x14] != 0) {
    pvVar7 = _pthread_getspecific((void*)pcVar10);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar8 = *local_68;
    pvVar7 = _pthread_getspecific((void*)pcVar10);
    if (pvVar7 != (void *)0x0) {
      lVar8 = *local_68;
      lVar13 = FUN_00e8b990();
      if (lVar13 != 0) {
        lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8);
      }
    }
    lVar8 = *(int64_t *)(lVar8 + 0xa0);
    if (lVar8 != 0) {
      FUN_00d50b00();
    }
    local_1b8 = '\x01';
    local_1c0 = lVar8;
    FUN_012e0640();
    if ((local_1b8 != '\0') && (local_1c0 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((char)local_c0 != '\0') {
    FUN_0125a5f0();
  }
  dVar1 = (double)this_ptr[0x1d];
  if (((double)local_e8 != dVar1) || (NAN((double)local_e8) || NAN(dVar1))) {
LAB_0129e9cb:
    *(void*)((int64_t)this_ptr + 0x51) = 0;
    FUN_0125f010();
  }
  else if (((double)local_f0 != dVar1 + (double)this_ptr[0x1e]) ||
          (NAN((double)local_f0) || NAN(dVar1 + (double)this_ptr[0x1e]))) goto LAB_0129e9cb;
  pVar19 = (void*)pcVar10;
  if ((char)local_c8 == '\0') {
    cVar2 = FUN_0129aaf0();
    pVar19 = (void*)pcVar10;
    if (cVar2 == '\0') {
      bVar16 = FUN_0129ac30();
      bVar16 = (char)local_b0 != '\0' | bVar16;
      pVar19 = (void*)CONCAT71((int7)((uint64_t)pcVar10 >> 8),bVar16);
      if (bVar16 != 1) goto LAB_0129ea55;
    }
    pvVar7 = _pthread_getspecific(pVar19);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012f7860();
  }
LAB_0129ea55:
  if (this_ptr[0x19] != 0) {
    FUN_00d50b00();
    pvVar7 = _pthread_getspecific(pVar19);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152f790();
    FUN_00d50b20();
    if (this_ptr[0x19] != 0) {
      FUN_00d50b00();
      pvVar7 = _pthread_getspecific(pVar19);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152fdb0();
      FUN_00d50b20();
    }
  }
  lVar8 = FUN_00e8b990();
  if (lVar8 != 0) {
    FUN_00e8b990();
    FUN_00cb1f10();
    FUN_00db3270();
    if ((local_58 != '\0') && (local_60 != 0x0)) {
      FUN_00d50b20();
    }
  }
  *(int *)((int64_t)this_ptr + 0x54) = *(int *)((int64_t)this_ptr + 0x54) + -1;
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  if ((char)local_160 != '\0' && (char)local_154 == '\0') {
    FUN_00d50b20();
  }
  return;
}

