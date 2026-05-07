// Function: FUN_01f2c5e0
// Address: 01f2c5e0
// Size: 4930 bytes
// Class: GNString
// String references:
//   "Cannot create dirs."
//   "Exception handling test."
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_01f2c5e0(uint64_t param_1,byte param_2)

{
  int64_t *plVar1;
  uint3 uVar2;
  code *pcVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  char cVar7;
  uint32_t uVar8;
  uint uVar9;
  int iVar10;
  void*puVar11;
  uint64_t uVar12;
  int64_t lVar13;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t **pplVar14;
  int64_t *plVar15;
  bool bVar16;
  int64_t local_288;
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
  int64_t *local_200;
  char local_1f8;
  uint64_t local_1f0;
  char local_1e8;
  int64_t local_1e0;
  char local_1d8;
  int64_t local_1d0;
  char local_1c8;
  uint64_t local_1c0;
  char local_1b8;
  int64_t *local_1b0;
  char local_1a8;
  uint64_t local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  void*local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  void*local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  uint64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_01cae990();
  plVar15 = local_60;
  local_280 = g_027fff88;
  if (g_027fff88 != 0) {
    FUN_00d50b00();
  }
  local_278 = '\x01';
  uVar8 = (**(code **)(*plVar15 + 0x50))();
  if ((local_278 != '\0') && (local_280 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)uVar8 != '\0') {
    uVar12 = CONCAT71((uint7)(uint3)((uint)uVar8 >> 8),1);
    if (param_2 == 0) goto LAB_01f2d90e;
    FUN_01cb4790();
    (**(code **)(*local_60 + 0x658))();
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    goto LAB_01f2c6a9;
  }
  FUN_01cae990();
  plVar15 = local_60;
  local_270 = g_02703b40;
  if (g_02703b40 != 0) {
    FUN_00d50b00();
  }
  local_268 = '\x01';
  uVar8 = (**(code **)(*plVar15 + 0x50))();
  if ((local_268 != '\0') && (local_270 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)uVar8 != '\0') {
    uVar2 = (uint3)((uint)uVar8 >> 8);
    uVar12 = CONCAT71((uint7)uVar2,1);
    if (param_2 != 0) {
      (**(code **)(*this_ptr + 0x638))();
      uVar12 = (uint64_t)CONCAT31(uVar2,1);
    }
    goto LAB_01f2d90e;
  }
  FUN_01cae990();
  plVar15 = local_60;
  local_260 = g_02728ad8;
  if (g_02728ad8 != 0) {
    FUN_00d50b00();
  }
  local_258 = '\x01';
  uVar8 = (**(code **)(*plVar15 + 0x50))();
  if ((local_258 != '\0') && (local_260 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)uVar8 != '\0') {
    uVar2 = (uint3)((uint)uVar8 >> 8);
    uVar12 = CONCAT71((uint7)uVar2,1);
    if (param_2 != 0) {
      (**(code **)(*this_ptr + 0x630))();
      uVar12 = (uint64_t)CONCAT31(uVar2,1);
    }
    goto LAB_01f2d90e;
  }
  FUN_01cae990();
  plVar15 = local_60;
  local_250 = g_02728ac8;
  if (g_02728ac8 != 0) {
    FUN_00d50b00();
  }
  local_248 = '\x01';
  uVar8 = (**(code **)(*plVar15 + 0x50))();
  if ((local_248 != '\0') && (local_250 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)uVar8 != '\0') {
    uVar2 = (uint3)((uint)uVar8 >> 8);
    uVar12 = CONCAT71((uint7)uVar2,1);
    if (param_2 != 0) {
      (**(code **)(*this_ptr + 0x628))();
      uVar12 = (uint64_t)CONCAT31(uVar2,1);
    }
    goto LAB_01f2d90e;
  }
  FUN_01cae990();
  plVar15 = local_60;
  local_240 = g_026fb8b8;
  if (g_026fb8b8 != 0) {
    FUN_00d50b00();
  }
  local_238 = '\x01';
  uVar8 = (**(code **)(*plVar15 + 0x50))();
  if ((local_238 != '\0') && (local_240 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)uVar8 != '\0') {
    uVar2 = (uint3)((uint)uVar8 >> 8);
    uVar12 = CONCAT71((uint7)uVar2,1);
    if (param_2 != 0) {
      (**(code **)(*this_ptr + 0x5e8))();
      uVar12 = (uint64_t)CONCAT31(uVar2,1);
    }
    goto LAB_01f2d90e;
  }
  FUN_01cae990();
  plVar15 = local_60;
  local_230 = g_026fb8c8;
  if (g_026fb8c8 != 0) {
    FUN_00d50b00();
  }
  local_228 = '\x01';
  uVar8 = (**(code **)(*plVar15 + 0x50))();
  if ((local_228 != '\0') && (local_230 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)uVar8 == '\0') {
    FUN_01cae990();
    plVar15 = local_60;
    local_220 = g_027fff90;
    if (g_027fff90 != 0) {
      FUN_00d50b00();
    }
    local_218 = '\x01';
    uVar8 = (**(code **)(*plVar15 + 0x50))();
    if ((local_218 != '\0') && (local_220 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)uVar8 == '\0') {
      FUN_01cae990();
      plVar15 = local_60;
      local_210 = g_027fff98;
      if (g_027fff98 != 0) {
        FUN_00d50b00();
      }
      local_208 = '\x01';
      uVar8 = (**(code **)(*plVar15 + 0x50))();
      if ((local_208 != '\0') && (local_210 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((char)uVar8 == '\0') {
        FUN_01cae990();
        plVar15 = local_60;
        local_1e0 = g_027fff80;
        if (g_027fff80 != 0) {
          FUN_00d50b00();
        }
        local_1d8 = '\x01';
        uVar8 = (**(code **)(*plVar15 + 0x50))();
        if ((local_1d8 != '\0') && (local_1e0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((char)uVar8 != '\0') {
          uVar2 = (uint3)((uint)uVar8 >> 8);
          uVar12 = CONCAT71((uint7)uVar2,1);
          if (param_2 != 0) {
            (**(code **)(*this_ptr + 0x678))();
            uVar12 = (uint64_t)CONCAT31(uVar2,1);
          }
          goto LAB_01f2d90e;
        }
        FUN_01cae990();
        plVar15 = local_60;
        local_1d0 = g_027fffa0;
        if (g_027fffa0 != 0) {
          FUN_00d50b00();
        }
        local_1c8 = '\x01';
        uVar8 = (**(code **)(*plVar15 + 0x50))();
        if ((local_1c8 != '\0') && (local_1d0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((char)uVar8 != '\0') {
          uVar12 = CONCAT71((uint7)(uint3)((uint)uVar8 >> 8),1);
          if (param_2 == 0) goto LAB_01f2d90e;
          FUN_01caec40();
          uVar12 = g_027fffa8;
          if (g_027fffa8 != 0) {
            FUN_00d50b00();
          }
          local_1c0 = uVar12;
          local_1b8 = '\x01';
          FUN_000175c0();
          plVar15 = local_60;
          if (local_58 == '\0') {
            if (((local_60 != (int64_t *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
               (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_58 = '\0';
          }
          if ((local_1b8 != '\0') && (local_1c0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          if (plVar15 != (int64_t *)0x0) {
            local_1b0 = plVar15;
            local_1a8 = '\0';
            uVar9 = FUN_00ce3750();
            if ((local_1a8 != '\0') && (local_1b0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            uVar4 = g_027fffb0;
            uVar12 = (uint64_t)uVar9;
            if ((char)uVar9 == '\0') {
              if (g_027fffb0 != 0) {
                FUN_00d50b00();
              }
              local_1a0 = uVar4;
              local_198 = '\x01';
              FUN_00cc7b40();
              uVar12 = uVar4;
              if ((local_198 != '\0') && (local_1a0 != 0)) {
                FUN_00d50b20();
              }
            }
            FUN_00d50b20();
          }
          goto LAB_01f2c6a9;
        }
        FUN_01cae990();
        plVar15 = local_60;
        local_190 = g_027fffb8;
        if (g_027fffb8 != 0) {
          FUN_00d50b00();
        }
        local_188 = '\x01';
        cVar7 = (**(code **)(*plVar15 + 0x50))();
        if ((local_188 != '\0') && (local_190 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar7 != '\0') {
          lVar13 = this_ptr[9];
          if (lVar13 != 0) {
            FUN_00d50b00();
            FUN_00d50b20();
            uVar12 = CONCAT71((int7)((uint64_t)lVar13 >> 8),1);
            if (param_2 != 0) {
              lVar13 = this_ptr[9];
              if (lVar13 != 0) {
                FUN_00d50b00();
              }
              FUN_01e5eda0();
              if (lVar13 != 0) {
                FUN_00d50b20();
              }
            }
            goto LAB_01f2d90e;
          }
LAB_01f2d90c:
          uVar12 = 0;
          goto LAB_01f2d90e;
        }
        FUN_01cae990();
        plVar15 = local_60;
        local_180 = g_027fffc0;
        if (g_027fffc0 != 0) {
          FUN_00d50b00();
        }
        local_178 = '\x01';
        cVar7 = (**(code **)(*plVar15 + 0x50))();
        if ((local_178 != '\0') && (local_180 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar7 == '\0') {
          FUN_01cae990();
          plVar15 = local_60;
          local_160 = g_027fffc8;
          if (g_027fffc8 != 0) {
            FUN_00d50b00();
          }
          local_158 = '\x01';
          uVar8 = (**(code **)(*plVar15 + 0x50))();
          if ((local_158 != '\0') && (local_160 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((char)uVar8 != '\0') {
            bVar16 = *(int *)(this_ptr[0xd] + 0xc) != 0;
            uVar12 = (uint64_t)CONCAT31((int3)((uint)uVar8 >> 8),bVar16);
            if ((bVar16) && (param_2 != 0)) {
              FUN_00d216c0();
              FUN_00d6f370();
              plVar15 = local_60;
              if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              lVar13 = 0;
              if (plVar15 != (int64_t *)0x0) {
                FUN_00d6f370();
                puVar11 = (void*)FUN_00e8fc40();
                FUN_00d4ff40();
                *puVar11 = &g_02572358;
                pcVar3 = g_02572370;
                (*g_02572370)();
                local_140 = g_027fffd0;
                local_148 = '\x01';
                local_150 = puVar11;
                if (g_027fffd0 != 0) {
                  FUN_00d50b00();
                }
                local_138 = '\x01';
                FUN_00d6f570();
                if ((local_138 != '\0') && (local_140 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_148 != '\0') && (local_150 != (void*)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_00d6f370();
                puVar11 = (void*)FUN_00e8fc40();
                FUN_00d4ff40();
                *puVar11 = &g_02572358;
                (*pcVar3)();
                lVar13 = g_027fffd8;
                local_128 = '\x01';
                local_130 = puVar11;
                if (g_027fffd8 != 0) {
                  FUN_00d50b00();
                }
                local_120 = lVar13;
                local_118 = '\x01';
                FUN_00d6f570();
                if ((local_118 != '\0') && (local_120 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_128 != '\0') && (local_130 != (void*)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              (**(code **)(*this_ptr + 0x4b0))();
              uVar12 = CONCAT71((int7)((uint64_t)lVar13 >> 8),1);
            }
            goto LAB_01f2d90e;
          }
          FUN_01cae990();
          plVar15 = local_60;
          local_110 = g_027fffe0;
          if (g_027fffe0 != 0) {
            FUN_00d50b00();
          }
          local_108 = '\x01';
          uVar8 = (**(code **)(*plVar15 + 0x50))();
          if ((local_108 != '\0') && (local_110 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((char)uVar8 != '\0') {
            uVar2 = (uint3)((uint)uVar8 >> 8);
            uVar12 = CONCAT71((uint7)uVar2,1);
            if (param_2 != 0) {
              FUN_00e82970();
              uVar12 = (uint64_t)CONCAT31(uVar2,1);
            }
            goto LAB_01f2d90e;
          }
          FUN_01cae990();
          plVar15 = local_60;
          local_100 = g_027fffe8;
          if (g_027fffe8 != 0) {
            FUN_00d50b00();
          }
          local_f8 = '\x01';
          uVar8 = (**(code **)(*plVar15 + 0x50))();
          if ((local_f8 != '\0') && (local_100 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((char)uVar8 == '\0') {
            FUN_01cae990();
            plVar15 = local_60;
            local_f0 = g_027ffff0;
            if (g_027ffff0 != 0) {
              FUN_00d50b00();
            }
            local_e8 = '\x01';
            uVar8 = (**(code **)(*plVar15 + 0x50))();
            if ((local_e8 != '\0') && (local_f0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            uVar4 = g_027ffff8;
            if ((char)uVar8 == '\0') {
              FUN_01cae990();
              plVar15 = local_60;
              local_d0 = g_02800000;
              if (g_02800000 != 0) {
                FUN_00d50b00();
              }
              local_c8 = '\x01';
              uVar8 = (**(code **)(*plVar15 + 0x50))();
              if ((local_c8 != '\0') && (local_d0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((char)uVar8 == '\0') {
                FUN_01cb29c0();
                if (local_60 == (int64_t *)0x0) {
                  cVar7 = '\0';
                }
                else {
                  FUN_01cb29c0();
                  cVar7 = FUN_01cb3500();
                  if ((local_68 != '\0') && (local_70 != 0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (cVar7 == '\0') {
                  local_90 = *arg1;
                  local_88 = '\0';
                  uVar9 = FUN_01d827c0();
                  uVar12 = (uint64_t)uVar9;
                  if ((local_88 != '\0') && (local_90 != 0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_01f2d90e;
                }
                FUN_01cae990();
                lVar13 = g_02800008;
                if (g_02800008 != 0) {
                  FUN_00d50b00();
                }
                local_288 = lVar13;
                FUN_00083ea0(2,&local_288);
                FUN_000b4da0();
                lVar6 = local_70;
                if (local_68 == '\0') {
                  if (((local_70 != 0) && (FUN_00d50b00(), local_68 != '\0')) && (local_70 != 0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_68 = '\0';
                }
                local_60 = (int64_t *)&g_0253d630;
                if ((local_38 != '\0') && (local_40 != 0)) {
                  FUN_00d50b20();
                }
                local_60 = &g_024c5048;
                if ((local_48 != '\0') && (local_50 != 0)) {
                  FUN_00d50b20();
                }
                if (lVar13 != 0) {
                  FUN_00d50b20();
                }
                if ((local_78 != '\0') && (local_80 != 0)) {
                  FUN_00d50b20();
                }
                lVar13 = g_027fff58;
                if (g_027fff58 != 0) {
                  FUN_00d50b00();
                }
                lVar5 = g_02800010;
                local_c0 = lVar13;
                local_b8 = '\x01';
                if (g_02800010 != 0) {
                  FUN_00d50b00();
                }
                local_b0 = lVar5;
                local_a8 = '\x01';
                FUN_01f6ca30();
                local_a0 = lVar6;
                local_98 = '\0';
                iVar10 = (**(code **)(*local_60 + 0x5d8))();
                if ((local_98 != '\0') && (local_a0 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_a8 != '\0') && (local_b0 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_b8 != '\0') && (local_c0 != 0)) {
                  FUN_00d50b20();
                }
                if (iVar10 == 1) {
                  FUN_01cb29c0();
                  if (local_58 == '\0') {
                    if (local_60 != (int64_t *)0x0) {
                      FUN_00d50b00();
                      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      goto LAB_01f2d8ef;
                    }
                  }
                  else if (local_60 != (int64_t *)0x0) {
LAB_01f2d8ef:
                    FUN_01cb3480();
                    FUN_00d50b20();
                  }
                }
                if (lVar6 != 0) {
                  FUN_00d50b20();
                }
                goto LAB_01f2d90c;
              }
              uVar12 = CONCAT71((uint7)(uint3)((uint)uVar8 >> 8),1);
              if (param_2 == 0) goto LAB_01f2d90e;
              *(void*)((int64_t)this_ptr + 0xe4) = 1;
            }
            else {
              uVar12 = CONCAT71((uint7)(uint3)((uint)uVar8 >> 8),1);
              if (param_2 == 0) goto LAB_01f2d90e;
              if (g_027ffff8 != 0) {
                FUN_00d50b00();
              }
              local_e0 = uVar4;
              local_d8 = '\x01';
              FUN_00cc7b40();
              uVar12 = uVar4;
              if ((local_d8 != '\0') && (local_e0 != 0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            uVar12 = CONCAT71((uint7)(uint3)((uint)uVar8 >> 8),1);
            if (param_2 == 0) goto LAB_01f2d90e;
          }
          goto LAB_01f2c6a9;
        }
        FUN_01caeae0();
        FUN_01d66da0();
        local_170 = g_027fffc0;
        if (g_027fffc0 != 0) {
          FUN_00d50b00();
        }
        local_168 = '\x01';
        pplVar14 = &local_60;
        FUN_000175c0();
        plVar15 = local_60;
        FUN_0020e360();
        if (plVar15 == (int64_t *)0x0) {
LAB_01f2d051:
          pplVar14 = (int64_t **)&g_02802688;
        }
        else {
          (**(code **)(*plVar15 + 0x360))();
          cVar7 = FUN_00e85ea0();
          if (cVar7 == '\0') goto LAB_01f2d051;
        }
        plVar1 = *pplVar14;
        if (*(char *)(pplVar14 + 1) == '\0') {
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(void*)(pplVar14 + 1) = 0;
        }
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_168 != '\0') && (local_170 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        bVar16 = plVar1 != (int64_t *)0x0;
        uVar12 = CONCAT71((int7)((uint64_t)plVar15 >> 8),bVar16);
        if ((param_2 ^ 1) == 0 && bVar16) {
          FUN_01e5d9c0();
        }
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((param_2 ^ 1) != 0 || !bVar16) goto LAB_01f2d90e;
      }
      else {
        uVar12 = CONCAT71((uint7)(uint3)((uint)uVar8 >> 8),1);
        if (param_2 == 0) goto LAB_01f2d90e;
        FUN_01caeae0();
        plVar15 = local_60;
        if (local_60 == (int64_t *)0x0) {
          bVar16 = true;
          plVar15 = (int64_t *)0x0;
        }
        else {
          if (local_58 == '\0') {
            FUN_00d50b00();
            bVar16 = false;
            if ((local_58 == '\0') || (bVar16 = false, local_60 == (int64_t *)0x0))
            goto LAB_01f2ce79;
            FUN_00d50b20();
          }
          bVar16 = false;
        }
LAB_01f2ce79:
        FUN_01d65ea0();
        local_1f8 = '\0';
        local_200 = plVar15;
        iVar10 = FUN_01d5e2e0();
        if ((local_1f8 != '\0') && (local_200 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        uVar12 = *(uint64_t *)(*(int64_t *)(this_ptr[0xd] + 0x10) + (int64_t)iVar10 * 8);
        if (uVar12 != 0) {
          FUN_00d50b00();
        }
        local_1e8 = '\0';
        local_1f0 = uVar12;
        (**(code **)(*this_ptr + 0x528))();
        if ((local_1e8 != '\0') && (local_1f0 != 0)) {
          FUN_00d50b20();
        }
        if (uVar12 != 0) {
          FUN_00d50b20();
        }
        if (!bVar16 && plVar15 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      uVar12 = CONCAT71((uint7)(uint3)((uint)uVar8 >> 8),1);
      if (param_2 == 0) goto LAB_01f2d90e;
      (**(code **)(*this_ptr + 0x5e0))();
      FUN_01f7e530();
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    uVar12 = CONCAT71((uint7)(uint3)((uint)uVar8 >> 8),1);
    if (param_2 == 0) goto LAB_01f2d90e;
    (**(code **)(*this_ptr + 0x5e0))();
    FUN_01f7e230();
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_01f2c6a9:
  uVar12 = CONCAT71((int7)(uVar12 >> 8),1);
LAB_01f2d90e:
  return uVar12 & 0xffffffff;
}

