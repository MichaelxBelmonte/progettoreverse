// Function: FUN_0132b1c0
// Address: 0132b1c0
// Size: 3152 bytes
// Class: MUAudioSourceSibilantItem
// === MUAudioSourceSibilantItem properties ===
//                   _audioSourceElement
//                   _suggestsSeparateComponentRenderers
//                   _polyphonicSeparationDirectoryIdentifier
//                   _pulseTimeline


void* FUN_0132b1c0(uint64_t param_1)

{
  int64_t lVar1;
  code *pcVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  void*puVar6;
  void *pvVar7;
  void*puVar8;
  int64_t *plVar9;
  void* pVar10;
  int64_t *plVar11;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar12;
  int64_t lVar13;
  uint64_t uVar14;
  int64_t local_1b8;
  char local_1b0;
  int64_t local_1a8;
  uint8_t local_1a0;
  int64_t local_198;
  uint8_t local_190;
  int64_t local_188;
  char local_180;
  int64_t local_178;
  uint8_t local_170;
  int64_t local_168;
  uint8_t local_160;
  uint64_t local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  int64_t local_a8;
  int64_t local_a0;
  uint64_t local_98;
  uint32_t local_90;
  int64_t local_88;
  void*local_80;
  void*local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  void*local_58;
  char local_50 [8];
  int64_t local_48;
  int64_t local_40;
  int64_t local_38;
  
  lVar13 = *(int64_t *)(arg1 + 0x200);
  local_158 = param_1;
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  plVar11 = (int64_t *)&g_02572358;
  *puVar6 = &g_02572358;
  (*g_02572370)();
  if (lVar13 != 0) {
    pvVar7 = _pthread_getspecific((void*)plVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar7 = _pthread_getspecific((void*)plVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar7 = _pthread_getspecific((void*)plVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    FUN_00d23310();
    uVar14 = CONCAT71((int7)((uint64_t)plVar11 >> 8),(char)local_a8);
    plVar11 = &local_38;
    if ((char)local_a8 != '\0') {
      plVar11 = &local_a8;
    }
    local_38._0_1_ = (char)local_a8;
    *(void*)plVar11 = 0;
    if (((char)local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    pvVar7 = _pthread_getspecific((void*)uVar14);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    lVar13 = local_48;
    if ((char)local_40 == '\0') {
      if (((local_48 != 0) && (FUN_00d50b00(), (char)local_40 != '\0')) && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40._0_1_ = '\0';
    }
    if (((char)local_38 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (CONCAT71(local_d0._1_7_,(char)local_d0) != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (CONCAT71(local_c0._1_7_,(char)local_c0) != 0)) {
      FUN_00d50b20();
    }
    local_58 = puVar6;
    if (lVar13 != 0) {
      local_a8._0_1_ = 0;
      local_b0 = 0;
      local_a0 = lVar13;
      local_90 = 0;
      local_98 = 0;
      if (0 < *(int *)(lVar13 + 0xc)) {
        lVar12 = 0;
        do {
          local_b0 = *(void*)(*(int64_t *)(lVar13 + 0x10) + lVar12 * 8);
          pvVar7 = _pthread_getspecific((void*)uVar14);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012649b0();
          lVar1 = CONCAT71(local_70._1_7_,(char)local_70);
          if (local_68 == '\0') {
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          local_40._0_1_ = '\0';
          local_48 = lVar1;
          FUN_00d21140();
          if (((char)local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
            FUN_00d50b20();
          }
          lVar12 = lVar12 + 1;
          local_98 = CONCAT44(local_98._4_4_,(int)lVar12);
        } while ((int)lVar12 < *(int *)(lVar13 + 0xc));
      }
      FUN_001159b0();
      FUN_00d50b20();
    }
    *this_ptr = local_58;
    *(void*)(this_ptr + 1) = 1;
    return this_ptr;
  }
  FUN_00d21370();
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &g_0258a670;
  pcVar2 = g_0258a688;
  (*g_0258a688)();
  local_78 = puVar8;
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &g_0258a670;
  (*pcVar2)();
  lVar13 = *(int64_t *)(arg1 + 0x40);
  local_80 = puVar8;
  if (lVar13 != 0) {
    FUN_00d50b00();
  }
  FUN_0147ce20();
  lVar12 = local_b0;
  if ((char)local_a8 == '\0') {
    if (((local_b0 != 0) && (FUN_00d50b00(), (char)local_a8 != '\0')) && (local_b0 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_a8._0_1_ = '\0';
  }
  if (lVar13 != 0) {
    FUN_00d50b20();
  }
  if (lVar12 == 0) {
    *this_ptr = puVar6;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    local_a8._0_1_ = '\0';
    local_b0 = 0;
    local_a0 = lVar12;
    local_90 = 0;
    local_98 = 0;
    local_58 = puVar6;
    if (0 < *(int *)(lVar12 + 0xc)) {
      lVar13 = 0;
      do {
        local_b0 = *(int64_t *)(*(int64_t *)(lVar12 + 0x10) + lVar13 * 8);
        pVar10 = (void*)plVar11;
        pvVar7 = _pthread_getspecific(pVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013e5700(local_158);
        lVar1 = local_48;
        if ((((char)local_40 == '\0') && (local_48 != 0)) &&
           ((FUN_00d50b00(), (char)local_40 != '\0' && (local_48 != 0)))) {
          FUN_00d50b20();
        }
        pvVar7 = _pthread_getspecific(pVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125a560();
        lVar3 = local_48;
        local_d0._0_1_ = (char)local_40;
        plVar11 = &local_d0;
        plVar9 = &local_40;
        if ((char)local_40 == '\0') {
          plVar9 = plVar11;
        }
        *(void*)plVar9 = 0;
        if (((char)local_40 != '\0') && (lVar3 != 0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          pvVar7 = _pthread_getspecific((void*)plVar11);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_011ef460();
          lVar4 = local_48;
          if (((char)local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          pVar10 = (void*)plVar11;
          if (lVar4 != 0) {
            pvVar7 = _pthread_getspecific(pVar10);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef460();
            pvVar7 = _pthread_getspecific(pVar10);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dd6a0();
            lVar4 = local_48;
            local_c0._0_1_ = (char)local_40;
            plVar11 = &local_c0;
            plVar9 = &local_40;
            if ((char)local_40 == '\0') {
              plVar9 = plVar11;
            }
            *(void*)plVar9 = 0;
            if (((char)local_40 != '\0') && (lVar4 != 0)) {
              FUN_00d50b20();
            }
            pVar10 = (void*)plVar11;
            local_60 = lVar4;
            if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
              FUN_00d50b20();
            }
            pvVar7 = _pthread_getspecific(pVar10);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar14 = FUN_014bc420();
            lVar4 = local_48;
            local_70._0_1_ = (char)local_40;
            plVar11 = &local_70;
            plVar9 = &local_40;
            if ((char)local_40 == '\0') {
              plVar9 = plVar11;
            }
            *(void*)plVar9 = 0;
            if (((char)local_40 != '\0') && (lVar4 != 0)) {
              uVar14 = FUN_00d50b20();
            }
            pVar10 = (void*)plVar11;
            local_88 = lVar4;
            if (lVar4 != 0) {
              local_150 = lVar4;
              local_148 = '\0';
              uVar14 = FUN_0132c500(uVar14,&local_150);
              lVar4 = local_48;
              local_38._0_1_ = (char)local_40;
              plVar11 = &local_38;
              plVar9 = &local_40;
              if ((char)local_40 == '\0') {
                plVar9 = plVar11;
              }
              *(void*)plVar9 = 0;
              if (((char)local_40 != '\0') && (local_48 != 0)) {
                uVar14 = FUN_00d50b20();
              }
              pVar10 = (void*)plVar11;
              if ((local_148 != '\0') && (local_150 != 0)) {
                uVar14 = FUN_00d50b20();
              }
              if (lVar4 == 0) {
                local_140 = lVar1;
                local_138 = '\0';
                local_130 = local_60;
                local_128 = '\0';
                FUN_0132c5b0(uVar14,&local_130);
                if ((local_128 != '\0') && (local_130 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_138 != '\0') && (local_140 != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_48 = local_88;
                local_40._0_1_ = '\0';
                FUN_00e383c0();
                if (((char)local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
                local_1a8 = lVar1;
                local_1a0 = 0;
                local_198 = lVar4;
                local_190 = 0;
                plVar11 = &local_198;
                FUN_01329cf0(plVar11,&local_1a8);
                pVar10 = (void*)plVar11;
                if ((local_1b0 != '\0') && (local_1b8 != 0)) {
                  FUN_00d50b20();
                }
                if ((char)local_38 != '\0') {
                  FUN_00d50b20();
                }
              }
            }
            pvVar7 = _pthread_getspecific(pVar10);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar14 = FUN_014bc340();
            lVar4 = local_48;
            local_38._0_1_ = (char)local_40;
            plVar11 = &local_38;
            plVar9 = &local_40;
            if ((char)local_40 == '\0') {
              plVar9 = plVar11;
            }
            *(void*)plVar9 = 0;
            if (((char)local_40 != '\0') && (local_48 != 0)) {
              uVar14 = FUN_00d50b20();
            }
            if (lVar4 != 0) {
              local_120 = lVar4;
              local_118 = '\0';
              uVar14 = FUN_0132c500(uVar14,&local_120);
              lVar5 = local_48;
              local_50[0] = (char)local_40;
              plVar11 = (int64_t *)local_50;
              plVar9 = &local_40;
              if ((char)local_40 == '\0') {
                plVar9 = plVar11;
              }
              *(void*)plVar9 = 0;
              if (((char)local_40 != '\0') && (lVar5 != 0)) {
                uVar14 = FUN_00d50b20();
              }
              if ((local_118 != '\0') && (local_120 != 0)) {
                uVar14 = FUN_00d50b20();
              }
              if (lVar5 == 0) {
                local_110 = lVar1;
                local_108 = '\0';
                local_100 = local_60;
                local_f8 = '\0';
                FUN_0132c5b0(uVar14,&local_100);
                if ((local_f8 != '\0') && (local_100 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_108 != '\0') && (local_110 != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_40._0_1_ = '\0';
                local_48 = lVar4;
                FUN_00e383c0();
                if (((char)local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
                local_178 = lVar5;
                local_170 = 0;
                local_168 = lVar1;
                local_160 = 0;
                plVar11 = &local_168;
                FUN_01329cf0(plVar11,&local_178);
                if ((local_180 != '\0') && (local_188 != 0)) {
                  FUN_00d50b20();
                }
                if (local_50[0] != '\0') {
                  FUN_00d50b20();
                }
              }
              if ((char)local_38 != '\0') {
                FUN_00d50b20();
              }
            }
            if (((char)local_70 != '\0') && (local_88 != 0)) {
              FUN_00d50b20();
            }
            if (((char)local_c0 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        local_40._0_1_ = '\0';
        local_48 = lVar1;
        FUN_00d21140();
        if (((char)local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (((char)local_d0 != '\0') && (lVar3 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        lVar13 = lVar13 + 1;
        local_98 = CONCAT44(local_98._4_4_,(int)lVar13);
      } while ((int)lVar13 < *(int *)(lVar12 + 0xc));
    }
    FUN_001150f0();
    *this_ptr = local_58;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
    puVar6 = local_78;
    if (local_80 == (void*)0x0) goto LAB_0132be24;
  }
  puVar6 = local_78;
  FUN_00d50b20();
LAB_0132be24:
  if (puVar6 != (void*)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

