// Function: FUN_01ef7e40
// Address: 01ef7e40
// Size: 4729 bytes
// Class: Unknown

void FUN_01ef7e40(byte param_1,uint64_t param_2,int64_t *param_3,uint param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  uint64_t uVar4;
  char *pcVar5;
  int64_t *plVar6;
  uint in_EDX;
  char *pcVar7;
  int64_t lVar8;
  void*arg1;
  int64_t *this_ptr;
  int64_t lVar9;
  bool bVar10;
  float fVar11;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar12 [16];
  uint32_t uVar13;
  float fVar14;
  uint32_t uVar15;
  uint32_t in_XMM1_Dc;
  uint32_t uVar16;
  uint32_t in_XMM1_Dd;
  uint32_t uVar17;
  int local_res8;
  char local_res10;
  int64_t local_2b8;
  char local_2b0;
  int64_t local_2a8;
  char local_2a0;
  int64_t local_298;
  char local_290;
  int64_t local_288;
  char local_280;
  int64_t local_278;
  char local_270;
  int64_t local_268;
  char local_260;
  int64_t local_258;
  char local_250;
  int64_t local_248;
  char local_240;
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
  int64_t local_198;
  char local_190;
  int64_t local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  uint8_t local_118 [16];
  uint local_fc;
  int64_t local_f8;
  char local_f0;
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
  int64_t local_88;
  uint64_t local_80;
  uint32_t local_74;
  int64_t local_70;
  uint64_t local_68;
  uint32_t uStack_60;
  uint32_t uStack_5c;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  int64_t local_40;
  char local_38 [8];
  
  local_118._8_4_ = in_XMM1_Dc;
  local_118._0_8_ = param_2;
  local_118._12_4_ = in_XMM1_Dd;
  local_fc = param_4;
  cVar3 = FUN_01d53b40();
  if (cVar3 == '\0') {
    uVar4 = (**(code **)(*(int64_t *)*param_3 + 0x148))();
    if (local_40 == 0) {
      cVar3 = '\0';
    }
    else {
      (**(code **)(*(int64_t *)*param_3 + 0x148))();
      lVar8 = g_027fecf8;
      if (g_027fecf8 != 0) {
        FUN_00d50b00();
      }
      uVar4 = FUN_00d90eb0();
      cVar3 = (char)uVar4;
      if (lVar8 != 0) {
        uVar4 = FUN_00d50b20();
      }
      if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
        uVar4 = FUN_00d50b20();
      }
    }
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      uVar4 = FUN_00d50b20();
    }
    local_80 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
    if (cVar3 == '\0') goto LAB_01ef8dc1;
  }
  if ((in_EDX & 0xfffffffe) != 0x16) {
    lVar8 = this_ptr[0x11];
    plVar6 = this_ptr;
    if (lVar8 != 0) {
      plVar6 = (int64_t *)FUN_00d50b00();
    }
    if ((local_res10 == '\0') && (local_70 = this_ptr[0x12], plVar6 = this_ptr, local_70 != 0)) {
      local_74 = (uint32_t)CONCAT71((int7)((uint64_t)this_ptr >> 8),1);
      lVar9 = lVar8;
      if ((lVar8 != local_70) && (FUN_00d50b00(), lVar9 = local_70, lVar8 != 0)) {
        FUN_00d50b20();
        lVar9 = local_70;
      }
      local_70 = lVar9;
      local_68 = 0;
      local_80 = 0;
    }
    else {
      local_80 = CONCAT71((int7)((uint64_t)plVar6 >> 8),1);
      if (local_res8 == 1) {
        lVar9 = this_ptr[0x13];
        if (((lVar9 != 0) && (lVar8 != lVar9)) &&
           (FUN_00d50b00(), bVar10 = lVar8 != 0, lVar8 = lVar9, bVar10)) {
          FUN_00d50b20();
        }
        local_68 = this_ptr[0x14];
        if ((local_68 != 0) && ((in_EDX & 0xfffffffe) == 0x1a || ((param_1 ^ 1) & 1) != 0)) {
          FUN_00d50b00();
          local_74 = 0;
          local_70 = lVar8;
          goto LAB_01ef83ba;
        }
      }
      local_68 = 0;
      local_74 = 1;
      local_70 = lVar8;
    }
LAB_01ef83ba:
    (**(code **)(*(int64_t *)*param_3 + 0x148))();
    if (local_40 == 0) {
      cVar3 = '\0';
    }
    else {
      (**(code **)(*(int64_t *)*param_3 + 0x148))();
      local_268 = g_027fecf8;
      if (g_027fecf8 != 0) {
        FUN_00d50b00();
      }
      local_260 = '\x01';
      cVar3 = FUN_00d90eb0();
      if ((local_260 != '\0') && (local_268 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') {
      if (local_68 != 0) {
        local_1d8 = *param_3;
        local_1d0 = '\0';
        local_1c8 = local_68;
        local_1c0 = '\0';
        uVar4 = FUN_01ef79a0(&local_1c8,&local_1d8);
        lVar8 = local_40;
        if ((local_38[0] == '\0') && (local_40 != 0)) {
          uVar4 = FUN_00d50b00();
        }
        if ((local_1c0 != '\0') && (local_1c8 != 0)) {
          uVar4 = FUN_00d50b20();
        }
        if ((local_1d0 != '\0') && (local_1d8 != 0)) {
          uVar4 = FUN_00d50b20();
        }
        local_1b8 = lVar8;
        local_1b0 = '\0';
        uVar4 = FUN_00c9fe40(uVar4,&local_1b8);
        lVar9 = local_40;
        pcVar5 = &local_50;
        if (local_38[0] != '\0') {
          pcVar5 = local_38;
        }
        local_50 = local_38[0];
        *pcVar5 = '\0';
        if ((local_38[0] != '\0') && (lVar9 != 0)) {
          uVar4 = FUN_00d50b20();
        }
        if ((local_50 == '\0') && (lVar9 != 0)) {
          uVar4 = FUN_00d50b00();
        }
        if ((local_1b0 != '\0') && (local_1b8 != 0)) {
          uVar4 = FUN_00d50b20();
        }
        if (lVar9 == 0) {
          local_1a8 = local_70;
          local_1a0 = '\0';
          local_198 = local_68;
          local_190 = '\0';
          uVar4 = FUN_01d54c30(uVar4,&local_198);
          local_a0 = 0;
          local_a8 = CONCAT71(uStack_4f,local_50);
          if (local_48 == '\0') {
            if (local_a8 != 0) {
              uVar4 = FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          local_a0 = '\x01';
          uVar4 = FUN_01d534b0(uVar4,&local_a8);
          if (local_40 != 0) {
            lVar9 = local_40;
            if (local_38[0] == '\0') {
              uVar4 = FUN_00d50b00();
              if ((local_38[0] != '\0') && (local_40 != 0)) {
                uVar4 = FUN_00d50b20();
              }
            }
            else {
              local_38[0] = '\0';
            }
          }
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            uVar4 = FUN_00d50b20();
          }
          if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
            uVar4 = FUN_00d50b20();
          }
          if ((local_190 != '\0') && (local_198 != 0)) {
            uVar4 = FUN_00d50b20();
          }
          if ((local_1a0 != '\0') && (local_1a8 != 0)) {
            uVar4 = FUN_00d50b20();
          }
          local_188 = lVar8;
          local_180 = '\0';
          local_38[0] = '\0';
          local_40 = lVar9;
          FUN_00ca0840(uVar4,&local_188);
          if ((local_38[0] != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if ((local_180 != '\0') && (local_188 != 0)) {
            FUN_00d50b20();
          }
        }
        lVar1 = *param_3;
        lVar2 = param_3[1];
        if (lVar1 == lVar9) {
          if (((char)lVar2 != '\0') || (lVar9 == 0)) goto LAB_01ef8b8a;
          FUN_00d50b00();
          *(void*)(param_3 + 1) = 1;
LAB_01ef8ba8:
          FUN_00d50b20();
        }
        else {
          if (lVar9 != 0) {
            FUN_00d50b00();
          }
          *param_3 = lVar9;
          if (((char)lVar2 != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
          *(void*)(param_3 + 1) = 1;
LAB_01ef8b8a:
          if (lVar9 != 0) goto LAB_01ef8ba8;
        }
        if (lVar8 != 0) {
          FUN_00d50b20();
        }
        goto LAB_01ef8d9a;
      }
      if (local_70 == 0) goto LAB_01ef8dc1;
      local_178 = *param_3;
      local_170 = '\0';
      local_168 = local_70;
      local_160 = '\0';
      uVar4 = FUN_01ef79a0(&local_168,&local_178);
      lVar8 = local_40;
      if ((local_38[0] == '\0') && (local_40 != 0)) {
        uVar4 = FUN_00d50b00();
      }
      if ((local_160 != '\0') && (local_168 != 0)) {
        uVar4 = FUN_00d50b20();
      }
      local_68 = lVar8;
      if ((local_170 != '\0') && (local_178 != 0)) {
        uVar4 = FUN_00d50b20();
      }
      local_158 = local_68;
      local_150 = '\0';
      FUN_00c9fe40(uVar4,&local_158);
      lVar8 = local_40;
      pcVar5 = &local_50;
      if (local_38[0] != '\0') {
        pcVar5 = local_38;
      }
      local_50 = local_38[0];
      *pcVar5 = '\0';
      if ((local_38[0] != '\0') && (lVar8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 == '\0') && (lVar8 != 0)) {
        FUN_00d50b00();
      }
      if ((local_150 != '\0') && (local_158 != 0)) {
        FUN_00d50b20();
      }
      if (lVar8 == 0) {
        local_148 = local_70;
        local_140 = '\0';
        uVar4 = FUN_01d553b0();
        local_90 = 0;
        local_98 = CONCAT71(uStack_4f,local_50);
        if (local_48 == '\0') {
          if (local_98 != 0) {
            uVar4 = FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_90 = '\x01';
        uVar4 = FUN_01d534b0(uVar4,&local_98);
        if (local_40 != 0) {
          lVar8 = local_40;
          if (local_38[0] == '\0') {
            uVar4 = FUN_00d50b00();
            if ((local_38[0] != '\0') && (local_40 != 0)) {
              uVar4 = FUN_00d50b20();
            }
          }
          else {
            local_38[0] = '\0';
          }
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          uVar4 = FUN_00d50b20();
        }
        if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
          uVar4 = FUN_00d50b20();
        }
        if ((local_140 != '\0') && (local_148 != 0)) {
          uVar4 = FUN_00d50b20();
        }
        local_138 = local_68;
        local_130 = '\0';
        local_38[0] = '\0';
        local_40 = lVar8;
        FUN_00ca0840(uVar4,&local_138);
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_130 != '\0') && (local_138 != 0)) {
          FUN_00d50b20();
        }
      }
      lVar2 = local_68;
      lVar9 = *param_3;
      lVar1 = param_3[1];
      if (lVar9 == lVar8) {
        if (((char)lVar1 != '\0') || (lVar8 == 0)) goto LAB_01ef9075;
        FUN_00d50b00();
        *(void*)(param_3 + 1) = 1;
LAB_01ef9097:
        FUN_00d50b20();
      }
      else {
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        *param_3 = lVar8;
        if (((char)lVar1 != '\0') && (lVar9 != 0)) {
          FUN_00d50b20();
        }
        *(void*)(param_3 + 1) = 1;
LAB_01ef9075:
        if (lVar8 != 0) goto LAB_01ef9097;
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_res8 == 1) {
        local_258 = *param_3;
        local_250 = '\0';
        local_248 = local_68;
        local_240 = '\0';
        uVar4 = FUN_01ef79a0(&local_248,&local_258);
        local_88 = local_40;
        if ((local_38[0] == '\0') && (local_40 != 0)) {
          uVar4 = FUN_00d50b00();
        }
        if ((local_240 != '\0') && (local_248 != 0)) {
          uVar4 = FUN_00d50b20();
        }
        if ((local_250 != '\0') && (local_258 != 0)) {
          uVar4 = FUN_00d50b20();
        }
        local_238 = local_88;
        local_230 = '\0';
        uVar4 = FUN_00c9fe40(uVar4,&local_238);
        lVar8 = local_40;
        pcVar5 = &local_50;
        if (local_38[0] != '\0') {
          pcVar5 = local_38;
        }
        local_50 = local_38[0];
        *pcVar5 = '\0';
        if ((local_38[0] != '\0') && (lVar8 != 0)) {
          uVar4 = FUN_00d50b20();
        }
        if ((local_50 == '\0') && (lVar8 != 0)) {
          uVar4 = FUN_00d50b00();
        }
        if ((local_230 != '\0') && (local_238 != 0)) {
          uVar4 = FUN_00d50b20();
        }
        if (lVar8 == 0) {
          local_228 = 0;
          local_220 = '\0';
          local_218 = local_68;
          local_210 = '\0';
          uVar4 = FUN_01d54c30(uVar4,&local_218);
          local_c8 = local_f8;
          local_c0 = 0;
          if (local_f0 == '\0') {
            if (local_f8 != 0) {
              uVar4 = FUN_00d50b00();
            }
          }
          else {
            local_f0 = '\0';
          }
          local_c0 = '\x01';
          uVar4 = FUN_01d534b0(uVar4,&local_c8);
          local_208 = 0;
          local_200 = '\0';
          local_1f8 = local_68;
          local_1f0 = '\0';
          uVar4 = FUN_01d54c30(uVar4,&local_1f8);
          local_b8 = local_e8;
          local_b0 = 0;
          if (local_e0 == '\0') {
            if (local_e8 != 0) {
              uVar4 = FUN_00d50b00();
            }
          }
          else {
            local_e0 = '\0';
          }
          local_b0 = '\x01';
          uVar4 = FUN_01d534b0(uVar4,&local_b8);
          if (local_40 != 0) {
            lVar8 = local_40;
            if (local_38[0] == '\0') {
              uVar4 = FUN_00d50b00();
              if ((local_38[0] != '\0') && (local_40 != 0)) {
                uVar4 = FUN_00d50b20();
              }
            }
            else {
              local_38[0] = '\0';
            }
          }
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            uVar4 = FUN_00d50b20();
          }
          if ((local_e0 != '\0') && (local_e8 != 0)) {
            uVar4 = FUN_00d50b20();
          }
          if ((local_1f0 != '\0') && (local_1f8 != 0)) {
            uVar4 = FUN_00d50b20();
          }
          if ((local_200 != '\0') && (local_208 != 0)) {
            uVar4 = FUN_00d50b20();
          }
          if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
            uVar4 = FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            uVar4 = FUN_00d50b20();
          }
          if ((local_f0 != '\0') && (local_f8 != 0)) {
            uVar4 = FUN_00d50b20();
          }
          if ((local_210 != '\0') && (local_218 != 0)) {
            uVar4 = FUN_00d50b20();
          }
          if ((local_220 != '\0') && (local_228 != 0)) {
            uVar4 = FUN_00d50b20();
          }
          local_1e8 = local_88;
          local_1e0 = '\0';
          local_38[0] = '\0';
          local_40 = lVar8;
          FUN_00ca0840(uVar4,&local_1e8);
          if ((local_38[0] != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if ((local_1e0 != '\0') && (local_1e8 != 0)) {
            FUN_00d50b20();
          }
        }
        lVar9 = *param_3;
        lVar1 = param_3[1];
        if (lVar9 == lVar8) {
          if (((char)lVar1 != '\0') || (lVar8 == 0)) goto LAB_01ef8d66;
          FUN_00d50b00();
          *(void*)(param_3 + 1) = 1;
LAB_01ef8d84:
          FUN_00d50b20();
        }
        else {
          if (lVar8 != 0) {
            FUN_00d50b00();
          }
          *param_3 = lVar8;
          if (((char)lVar1 != '\0') && (lVar9 != 0)) {
            FUN_00d50b20();
          }
          *(void*)(param_3 + 1) = 1;
LAB_01ef8d66:
          if (lVar8 != 0) goto LAB_01ef8d84;
        }
        if (local_88 != 0) {
          FUN_00d50b20();
        }
      }
LAB_01ef8d9a:
      if ((char)local_74 == '\0' && local_68 != 0) {
        FUN_00d50b20();
      }
      if (local_70 == 0) goto LAB_01ef8dc1;
    }
    FUN_00d50b20();
    goto LAB_01ef8dc1;
  }
  FUN_01d48990();
  lVar8 = local_40;
  if ((((local_38[0] == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38[0] != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_2b8 = *param_3;
  local_2b0 = '\0';
  local_68 = lVar8;
  local_2a8 = lVar8;
  local_2a0 = '\0';
  uVar4 = FUN_01ef79a0(&local_2a8,&local_2b8);
  lVar8 = local_40;
  if ((local_38[0] == '\0') && (local_40 != 0)) {
    uVar4 = FUN_00d50b00();
  }
  if ((local_2a0 != '\0') && (local_2a8 != 0)) {
    uVar4 = FUN_00d50b20();
  }
  if ((local_2b0 != '\0') && (local_2b8 != 0)) {
    uVar4 = FUN_00d50b20();
  }
  local_298 = lVar8;
  local_290 = '\0';
  FUN_00c9fe40(uVar4,&local_298);
  lVar9 = local_40;
  pcVar5 = local_38;
  pcVar7 = &local_50;
  if (local_38[0] != '\0') {
    pcVar7 = pcVar5;
  }
  local_50 = local_38[0];
  *pcVar7 = '\0';
  if ((local_38[0] != '\0') && (lVar9 != 0)) {
    pcVar5 = (char *)FUN_00d50b20();
  }
  if ((local_50 == '\0') && (lVar9 != 0)) {
    pcVar5 = (char *)FUN_00d50b00();
  }
  if ((local_290 != '\0') && (local_298 != 0)) {
    pcVar5 = (char *)FUN_00d50b20();
  }
  if (lVar9 == 0) {
    local_288 = local_68;
    local_280 = '\0';
    uVar4 = FUN_01d553b0();
    local_d0 = 0;
    local_d8 = CONCAT71(uStack_4f,local_50);
    if (local_48 == '\0') {
      if (local_d8 != 0) {
        uVar4 = FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_d0 = '\x01';
    uVar4 = FUN_01d534b0(uVar4,&local_d8);
    if (local_40 != 0) {
      lVar9 = local_40;
      if (local_38[0] == '\0') {
        uVar4 = FUN_00d50b00();
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          uVar4 = FUN_00d50b20();
        }
      }
      else {
        local_38[0] = '\0';
      }
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      uVar4 = FUN_00d50b20();
    }
    if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
      uVar4 = FUN_00d50b20();
    }
    if ((local_280 != '\0') && (local_288 != 0)) {
      uVar4 = FUN_00d50b20();
    }
    local_278 = lVar8;
    local_270 = '\0';
    local_38[0] = '\0';
    local_40 = lVar9;
    pcVar5 = (char *)FUN_00ca0840(uVar4,&local_278);
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      pcVar5 = (char *)FUN_00d50b20();
    }
    if ((local_270 != '\0') && (local_278 != 0)) {
      pcVar5 = (char *)FUN_00d50b20();
    }
  }
  lVar1 = *param_3;
  lVar2 = param_3[1];
  if (lVar1 == lVar9) {
    if (((char)lVar2 != '\0') || (lVar9 == 0)) goto LAB_01ef831d;
    FUN_00d50b00();
    *(void*)(param_3 + 1) = 1;
LAB_01ef833b:
    pcVar5 = (char *)FUN_00d50b20();
  }
  else {
    if (lVar9 != 0) {
      pcVar5 = (char *)FUN_00d50b00();
    }
    *param_3 = lVar9;
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      pcVar5 = (char *)FUN_00d50b20();
    }
    *(void*)(param_3 + 1) = 1;
LAB_01ef831d:
    if (lVar9 != 0) goto LAB_01ef833b;
  }
  if (lVar8 != 0) {
    pcVar5 = (char *)FUN_00d50b20();
  }
  local_80 = CONCAT71((int7)((uint64_t)pcVar5 >> 8),1);
  if (local_68 != 0) {
    FUN_00d50b20();
  }
LAB_01ef8dc1:
  uVar13 = local_118._0_4_;
  uVar15 = local_118._4_4_;
  uVar16 = local_118._8_4_;
  uVar17 = local_118._12_4_;
  (**(code **)(*this_ptr + 0x548))();
  local_68 = CONCAT44(uVar15,uVar13);
  uStack_60 = uVar16;
  uStack_5c = uVar17;
  FUN_01d48370();
  (**(code **)(*(int64_t *)*arg1 + 0x390))();
  fVar11 = g_0239011c;
  if ((char)local_80 == '\0') {
    fVar11 = g_02390124;
  }
  fVar14 = g_02390124;
  if (local_res10 == '\0') {
    fVar14 = fVar11;
  }
  FUN_01d526f0();
  auVar12._0_8_ = FUN_00d05510();
  auVar12._8_8_ = extraout_XMM0_Qb;
  if ((local_fc & 0xf) == 1) {
    local_118 = auVar12;
    fVar11 = (float)FUN_01d526f0();
    local_118._0_4_ = (float)local_118._0_4_ + fVar11 * g_0239011c;
    auVar12 = local_118;
  }
  else if ((local_fc & 0xf) == 0) {
    auVar12._4_4_ = (uint32_t)((uint64_t)auVar12._0_8_ >> 0x20);
    auVar12._0_4_ = auVar12._4_4_;
    auVar12._12_4_ = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
    auVar12._8_4_ = auVar12._12_4_;
  }
  auVar12 = roundps(auVar12,auVar12,9);
  local_128 = *param_3;
  local_120 = '\0';
  FUN_01d49110(auVar12._0_8_,fVar14);
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d48390();
  return;
}

