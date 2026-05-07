// Function: FUN_00c2c8f0
// Address: 00c2c8f0
// Size: 4192 bytes
// Class: Unknown
// String references:
//   "editValueForKey"
//   "Edit %@"
//   "v@@I@"

uint64_t FUN_00c2c8f0(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  undefined7 uVar7;
  uint64_t uVar5;
  int64_t **pplVar6;
  int64_t *arg1;
  int64_t *plVar8;
  int64_t *plVar9;
  bool bVar10;
  uint uVar11;
  uint64_t uVar12;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  float local_2b8;
  uint32_t uStack_2b4;
  int64_t *local_2a0;
  int64_t local_298;
  char local_290;
  int64_t local_288;
  char local_280;
  int64_t local_278;
  char local_270;
  int64_t *local_268;
  char local_260;
  int64_t *local_258;
  char local_250;
  int64_t *local_248;
  char local_240;
  int64_t *local_238;
  char local_230;
  int64_t *local_228;
  char local_220;
  int64_t *local_218;
  char local_210;
  int64_t *local_208;
  char local_200;
  int64_t local_1f8;
  char local_1f0;
  int64_t *local_1e8;
  char local_1e0;
  int64_t *local_1d8;
  char local_1d0;
  int64_t local_1c8;
  char local_1c0;
  int64_t local_1b8;
  char local_1b0;
  int64_t *local_1a8;
  char local_1a0;
  int64_t *local_198;
  char local_190;
  int64_t *local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t *local_168;
  char local_160;
  int64_t *local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t *local_138;
  uint64_t local_130;
  int64_t *local_128;
  uint64_t local_120;
  int64_t *local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t *local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  uint64_t local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_c0;
  int64_t *local_b8;
  int64_t *local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  uint local_90;
  int64_t *local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_60;
  char local_58;
  int64_t *local_48;
  int64_t *local_40;
  uint32_t local_38;
  
  local_128 = (int64_t *)0x0;
  uVar12 = FUN_01ccad60();
  plVar8 = local_98;
  if (local_98 == (int64_t *)0x0) {
    local_b0 = (int64_t *)0x0;
joined_r0x00c2c951:
    if (((char)local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
  }
  else {
    if ((char)local_90 == '\0') {
      uVar12 = FUN_00d50b00();
      local_b0 = plVar8;
      local_128 = plVar8;
      goto joined_r0x00c2c951;
    }
    local_128 = local_98;
    local_b0 = local_98;
  }
  if (local_b0 != (int64_t *)0x0) {
    local_c0 = plVar8;
    FUN_01cae990();
    plVar8 = local_98;
    lVar1 = g_027ef7e8;
    if (g_027ef7e8 != 0) {
      FUN_00d50b00();
    }
    local_298 = lVar1;
    local_290 = '\x01';
    cVar3 = (**(code **)(*plVar8 + 0x50))();
    plVar8 = local_c0;
    if (cVar3 == '\0') {
      bVar10 = false;
      uVar7 = 0;
      uVar12 = extraout_XMM0_Qa;
    }
    else {
      uVar12 = FUN_01d3a560();
      if (local_a8 == (int64_t *)0x0) {
        bVar10 = false;
        uVar7 = 0;
      }
      else {
        FUN_01d3a560();
        iVar4 = FUN_01d3a5a0();
        bVar10 = iVar4 == 2;
        uVar7 = (undefined7)((uint64_t)lVar1 >> 8);
        uVar12 = extraout_XMM0_Qa_00;
        if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
          uVar12 = FUN_00d50b20();
        }
      }
      if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
        uVar12 = FUN_00d50b20();
      }
    }
    if ((local_290 != '\0') && (local_298 != 0)) {
      uVar12 = FUN_00d50b20();
    }
    if (((char)local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
    lVar1 = g_027e7c20;
    if (bVar10) {
      uVar5 = CONCAT71(uVar7,1);
      if (param_2 == '\0') goto LAB_00c2cd87;
      if (g_027e7c20 != 0) {
        uVar12 = FUN_00d50b00();
      }
      local_288 = lVar1;
      local_280 = '\x01';
      uVar12 = FUN_01ccab60(uVar12,&local_288);
      local_48 = local_98;
      if ((char)local_90 == '\0') {
        if (local_98 != (int64_t *)0x0) {
          uVar12 = FUN_00d50b00();
          if (((char)local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
            uVar12 = FUN_00d50b20();
          }
        }
      }
      else {
        local_90 = local_90 & 0xffffff00;
      }
      if ((local_280 != '\0') && (local_288 != 0)) {
        uVar12 = FUN_00d50b20();
      }
      lVar1 = g_027e7c20;
      if (g_027e7c20 != 0) {
        uVar12 = FUN_00d50b00();
      }
      local_278 = lVar1;
      local_270 = '\x01';
      uVar12 = FUN_01ccaae0(uVar12,&local_278);
      local_b8 = local_98;
      if ((char)local_90 == '\0') {
        if (local_98 != (int64_t *)0x0) {
          uVar12 = FUN_00d50b00();
          if (((char)local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
            uVar12 = FUN_00d50b20();
          }
        }
      }
      else {
        local_90 = local_90 & 0xffffff00;
      }
      if ((local_270 != '\0') && (local_278 != 0)) {
        uVar12 = FUN_00d50b20();
      }
      if (local_b8 != (int64_t *)0x0) {
        pplVar6 = &local_98;
        FUN_01d836c0();
        plVar8 = local_98;
        FUN_00b10020();
        if (plVar8 == (int64_t *)0x0) {
LAB_00c2cbdf:
          pplVar6 = (int64_t **)&g_02802688;
        }
        else {
          (**(code **)(*plVar8 + 0x360))();
          cVar3 = FUN_00e85ea0();
          if (cVar3 == '\0') goto LAB_00c2cbdf;
        }
        local_40 = *pplVar6;
        plVar8 = local_c0;
        if (*pplVar6 == (int64_t *)0x0) {
          local_38 = 1;
          uVar12 = 0;
          local_40 = (int64_t *)0x0;
        }
        else {
          uVar7 = (undefined7)((uint64_t)pplVar6 >> 8);
          if (*(char *)(pplVar6 + 1) == '\0') {
            FUN_00d50b00();
            uVar12 = CONCAT71(uVar7,1);
            local_38 = 0;
            plVar8 = local_c0;
          }
          else {
            *(void*)(pplVar6 + 1) = 0;
            uVar12 = CONCAT71(uVar7,1);
            local_38 = 0;
          }
        }
        local_c0 = plVar8;
        if (((char)local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_40 != (int64_t *)0x0) {
          local_120 = uVar12;
          FUN_01e42030();
          if ((char)local_90 == '\0') {
            if (local_98 != (int64_t *)0x0) {
              FUN_00d50b00();
              if (((char)local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_00c2cddd;
            }
LAB_00c2ce2e:
            local_d8 = 0;
            plVar9 = (int64_t *)0x0;
          }
          else {
            if (local_98 == (int64_t *)0x0) goto LAB_00c2ce2e;
LAB_00c2cddd:
            uVar12 = FUN_01d8fb30();
            plVar9 = local_98;
            if (local_98 == (int64_t *)0x0) {
              local_d8 = 0;
              plVar9 = (int64_t *)0x0;
            }
            else {
              local_d8 = CONCAT71((int7)((uint64_t)uVar12 >> 8),1);
              if ((char)local_90 == '\0') {
                FUN_00d50b00();
                if (((char)local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            FUN_00d50b20();
          }
          FUN_001f8a30();
          if (local_b0 == (int64_t *)0x0) {
LAB_00c2ce7f:
            if (g_02802688 == 0) goto LAB_00c2d0f2;
LAB_00c2cea2:
            uVar12 = FUN_01e05950();
            plVar8 = local_98;
            if (((char)local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
              uVar12 = FUN_00d50b20();
            }
            if (plVar8 == (int64_t *)0x0) goto LAB_00c2d0f2;
            if (plVar9 != (int64_t *)0x0) {
              local_268 = local_48;
              local_260 = '\0';
              (**(code **)(*local_40 + 0x88))(uVar12,&local_268);
              plVar8 = local_98;
              if ((char)local_90 == '\0') {
                if (local_98 != (int64_t *)0x0) {
                  FUN_00d50b00();
                  if (((char)local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
              }
              else {
                local_90 = local_90 & 0xffffff00;
              }
              if ((local_260 != '\0') && (local_268 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              local_258 = local_40;
              local_250 = '\0';
              local_130 = (uint64_t)local_130._4_4_ << 0x20;
              local_a8 = plVar8;
              local_d0 = local_48;
              local_138 = plVar9;
              FUN_00b359e0(&local_130,&local_d0,&local_138,4);
              FUN_00db2930("v@@I@","editValueForKey",&local_98);
              local_98 = (int64_t *)&g_02532370;
              if ((local_58 != '\0') && (local_60 != 0)) {
                FUN_00d50b20();
              }
              local_98 = (int64_t *)&g_0253d630;
              if ((local_70 != '\0') && (local_78 != 0)) {
                FUN_00d50b20();
              }
              local_98 = &g_024c5048;
              if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_250 != '\0') && (local_258 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              local_248 = local_48;
              local_240 = '\0';
              uVar12 = FUN_00d9a330();
              local_88 = local_d0;
              local_90 = 1;
              local_98 = &g_024c5048;
              local_80 = 0;
              if (local_d0 != (int64_t *)0x0) {
                uVar12 = FUN_00d50b00();
              }
              local_80 = '\x01';
              FUN_00d8cb40(uVar12,&local_98);
              local_118 = local_a8;
              local_110 = 0;
              if (local_a0 == '\0') {
                if (local_a8 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_a0 = '\0';
              }
              local_110 = '\x01';
              FUN_00db3140();
              if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              local_98 = &g_024c5048;
              if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_240 != '\0') && (local_248 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar8 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
            }
            uVar12 = (**(code **)(*local_b0 + 0x970))();
            local_108 = local_98;
            local_100 = 0;
            if ((char)local_90 == '\0') {
              if (local_98 != (int64_t *)0x0) {
                uVar12 = FUN_00d50b00();
              }
            }
            else {
              local_90 = local_90 & 0xffffff00;
            }
            local_100 = '\x01';
            local_238 = local_48;
            local_230 = '\0';
            uVar12 = (**(code **)(*local_40 + 0x600))(uVar12,&local_238);
            if ((local_230 != '\0') && (local_238 != (int64_t *)0x0)) {
              uVar12 = FUN_00d50b20();
            }
            if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
              uVar12 = FUN_00d50b20();
            }
            if (((char)local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
              uVar12 = FUN_00d50b20();
            }
            local_228 = local_48;
            local_220 = '\0';
            (**(code **)(*local_40 + 0x88))(uVar12,&local_228);
            plVar8 = local_98;
            if ((char)local_90 == '\0') {
              if (local_98 != (int64_t *)0x0) {
                FUN_00d50b00();
                if (((char)local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            else {
              local_90 = local_90 & 0xffffff00;
            }
            if ((local_220 != '\0') && (local_228 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            local_218 = plVar8;
            local_210 = '\0';
            uVar12 = FUN_00c71d60();
            if ((local_210 != '\0') && (local_218 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            local_2b8 = (float)uVar12;
            uStack_2b4 = (uint32_t)((uint64_t)uVar12 >> 0x20);
            uVar11 = -(uint)(g_02390124 < local_2b8 + g_02391090);
            FUN_00d46dc0(CONCAT44(uStack_2b4,~uVar11 & (uint)(local_2b8 + g_02391090)) |
                         (uint64_t)(g_0239109c & uVar11));
            local_f8 = local_98;
            local_f0 = 0;
            if ((char)local_90 == '\0') {
              if (local_98 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_90 = local_90 & 0xffffff00;
            }
            local_f0 = '\x01';
            local_208 = local_48;
            local_200 = '\0';
            local_1f8 = 0;
            local_1f0 = '\0';
            FUN_00b324d0(0,&local_208,&local_1f8);
            if ((local_1f0 != '\0') && (local_1f8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_200 != '\0') && (local_208 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (((char)local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            local_1e8 = plVar8;
            local_1e0 = '\0';
            local_1d8 = local_48;
            local_1d0 = '\0';
            local_1c8 = 0;
            local_1c0 = '\0';
            FUN_00b324d0(0,&local_1d8,&local_1c8);
            if ((local_1c0 != '\0') && (local_1c8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_1d0 != '\0') && (local_1d8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_1e0 != '\0') && (local_1e8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar8 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          else {
            (**(code **)(*local_b0 + 0x360))();
            cVar3 = FUN_00e85ea0();
            if (cVar3 == '\0') goto LAB_00c2ce7f;
            if (local_128 != (int64_t *)0x0) goto LAB_00c2cea2;
LAB_00c2d0f2:
            local_1b0 = '\0';
            local_1b8 = 0;
            local_1a8 = local_48;
            local_1a0 = '\0';
            local_190 = '\0';
            local_198 = plVar9;
            FUN_00b324d0(0,&local_1a8,&local_198);
            if ((local_190 != '\0') && (local_198 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_1a0 != '\0') && (local_1a8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_1b0 != '\0') && (local_1b8 != 0)) {
              FUN_00d50b20();
            }
            uVar12 = (**(code **)(*local_b0 + 0x970))();
            local_e8 = local_98;
            local_e0 = 0;
            if ((char)local_90 == '\0') {
              if (local_98 != (int64_t *)0x0) {
                uVar12 = FUN_00d50b00();
              }
            }
            else {
              local_90 = local_90 & 0xffffff00;
            }
            local_e0 = '\x01';
            local_188 = local_48;
            local_180 = '\0';
            (**(code **)(*local_40 + 0x610))(uVar12,&local_188);
            if ((local_180 != '\0') && (local_188 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (((char)local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          plVar8 = g_0276ca98;
          if (g_0276ca98 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          lVar1 = g_0276caa0;
          if (g_0276caa0 != 0) {
            FUN_00d50b00();
          }
          local_d0 = plVar8;
          local_138 = local_48;
          local_130 = lVar1;
          local_2a0 = local_40;
          FUN_002d73e0(&local_130,&local_138,&local_2a0,4);
          FUN_0036bfe0();
          plVar2 = local_a8;
          if (local_a0 == '\0') {
            if (((local_a8 != (int64_t *)0x0) && (FUN_00d50b00(), local_a0 != '\0')) &&
               (local_a8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_a0 = '\0';
          }
          FUN_002d10d0();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if (plVar8 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          FUN_00d403d0();
          lVar1 = g_0276caa8;
          if (g_0276caa8 != 0) {
            FUN_00d50b00();
          }
          local_178 = lVar1;
          local_170 = '\x01';
          local_168 = local_b8;
          local_160 = '\0';
          local_158 = plVar2;
          local_150 = '\0';
          FUN_00d40470(&local_158,&local_168,3,3);
          plVar8 = local_c0;
          if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_170 != '\0') && (local_178 != 0)) {
            FUN_00d50b20();
          }
          if (((char)local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_01d243a0();
          if (plVar2 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if (((char)local_d8 != '\0') && (plVar9 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          uVar5 = CONCAT71((int7)((uint64_t)lVar1 >> 8),1);
          if ((char)local_38 == '\0') {
            FUN_00d50b20();
          }
          goto LAB_00c2cd87;
        }
        uVar12 = FUN_00d50b20();
      }
      if (local_48 != (int64_t *)0x0) {
        uVar12 = FUN_00d50b20();
      }
    }
  }
  local_148 = *arg1;
  local_140 = '\0';
  uVar11 = FUN_01d16950(uVar12,param_2);
  uVar5 = (uint64_t)uVar11;
  if ((local_140 != '\0') && (local_148 != 0)) {
    FUN_00d50b20();
  }
LAB_00c2cd87:
  if ((plVar8 != (int64_t *)0x0) && (local_b0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return uVar5 & 0xffffffff;
}

