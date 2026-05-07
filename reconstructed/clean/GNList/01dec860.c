// Function: FUN_01dec860
// Address: 01dec860
// Size: 5271 bytes
// Class: GNList
// String references:
//   "GNList"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


uint64_t FUN_01dec860(int param_1,int64_t *param_2)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar9;
  int64_t lVar10;
  bool bVar11;
  uint32_t uVar12;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t local_2a8;
  char local_2a0;
  int64_t local_298;
  char local_290;
  int64_t local_288;
  char local_280;
  int64_t local_278;
  char local_270;
  int64_t *local_268;
  char local_260;
  int64_t local_258;
  char local_250;
  int64_t local_248;
  char local_240;
  int64_t *local_238;
  char local_230;
  int64_t local_228;
  char local_220;
  int64_t *local_218;
  char local_210;
  int64_t local_208;
  char local_200;
  int64_t local_1f8;
  char local_1f0;
  int64_t local_1e8;
  char local_1e0;
  int64_t local_1d8;
  char local_1d0;
  int64_t *local_1c8;
  char local_1c0;
  int64_t *local_1b8;
  char local_1b0;
  int64_t *local_1a8;
  char local_1a0;
  int64_t *local_198;
  char local_190;
  int64_t *local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t *local_140;
  char local_138;
  int64_t *local_130;
  char local_128;
  int64_t *local_120;
  char local_118;
  int64_t *local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  uint64_t local_f0;
  int64_t *local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t *local_d0;
  int64_t *local_c8;
  int64_t *local_c0;
  int64_t *local_b8;
  int64_t *local_b0;
  int64_t *local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  int64_t *local_88;
  int64_t *local_80;
  int64_t *local_78;
  int64_t *local_70;
  int64_t *local_68;
  int64_t *local_60;
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar4 = (int64_t)&g_02572358;
  uVar12 = (*g_02572370)();
  local_278 = g_02800140;
  local_e8 = (int64_t *)0x0;
  if (g_02800140 != 0) {
    uVar12 = FUN_00d50b00();
  }
  local_270 = '\x01';
  FUN_01ccaae0(uVar12,&local_278);
  local_80 = local_40;
  if (local_40 == (int64_t *)0x0) {
    bVar11 = true;
    local_80 = (int64_t *)0x0;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar11 = false;
      if ((local_38 == '\0') || (local_40 == (int64_t *)0x0)) goto LAB_01dec939;
      FUN_00d50b20();
    }
    else {
      local_38 = '\0';
    }
    bVar11 = false;
  }
LAB_01dec939:
  if ((local_270 != '\0') && (local_278 != 0)) {
    FUN_00d50b20();
  }
  if (bVar11) {
LAB_01decb17:
    local_f0 = 0;
LAB_01decb20:
    local_60 = (int64_t *)0x0;
    local_90 = (int64_t *)0x0;
    plVar7 = (int64_t *)0x0;
    plVar8 = local_80;
  }
  else {
    FUN_01d26010();
    plVar8 = local_40;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      (**(code **)(*local_40 + 0x10))();
      FUN_00d50b20();
    }
    plVar7 = local_80;
    if (plVar8 != (int64_t *)0x0) {
      FUN_01d26010();
      local_268 = plVar7;
      local_260 = '\0';
      local_258 = *param_2;
      local_250 = '\0';
      local_248 = *arg1;
      local_240 = '\0';
      uVar5 = (**(code **)(*local_40 + 0xc0))(param_1,&local_258,&local_248);
      cVar2 = (char)uVar5;
      if ((local_240 != '\0') && (local_248 != 0)) {
        uVar5 = FUN_00d50b20();
      }
      if ((local_250 != '\0') && (local_258 != 0)) {
        uVar5 = FUN_00d50b20();
      }
      if ((local_260 != '\0') && (local_268 != (int64_t *)0x0)) {
        uVar5 = FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        (**(code **)(*local_40 + 0x10))();
        uVar5 = FUN_00d50b20();
      }
      local_f0 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
      if (cVar2 == '\0') goto LAB_01deca75;
      goto LAB_01decb20;
    }
LAB_01deca75:
    FUN_01d258f0();
    local_c0 = local_40;
    if (local_40 == (int64_t *)0x0) goto LAB_01decb17;
    if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0))
    {
      FUN_00d50b20();
    }
    FUN_01d28610();
    local_90 = local_40;
    if (local_40 == (int64_t *)0x0) {
      FUN_01ccad60();
      FUN_01e42030();
      FUN_01d8c6e0();
      FUN_01e5c650();
      FUN_01e55ec0();
      (**(code **)(*local_a0 + 0x498))();
      local_90 = local_40;
      if (local_40 == (int64_t *)0x0) {
        local_90 = (int64_t *)0x0;
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_2a0 != '\0') && (local_2a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_290 != '\0') && (local_298 != 0)) {
        FUN_00d50b20();
      }
      if ((local_280 != '\0') && (local_288 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
            (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_238 = local_90;
    local_230 = '\0';
    FUN_01d25f70();
    local_140 = local_a0;
    local_138 = 0;
    if (local_98 == '\0') {
      if (local_a0 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_98 = '\0';
    }
    local_138 = '\x01';
    uVar12 = FUN_01caaf60(&local_140,&local_238);
    local_60 = local_40;
    if (local_40 == (int64_t *)0x0) {
      local_60 = (int64_t *)0x0;
    }
    else if (local_38 == '\0') {
      uVar12 = FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        uVar12 = FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
    if ((local_230 != '\0') && (local_238 != (int64_t *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
    lVar9 = g_027eda18;
    if (g_027eda18 != 0) {
      uVar12 = FUN_00d50b00();
    }
    local_228 = lVar9;
    local_220 = '\x01';
    FUN_01ca7f90(uVar12,&local_228);
    local_d0 = local_40;
    plVar7 = local_40;
    if (local_40 == (int64_t *)0x0) {
      bVar11 = true;
      local_d0 = (int64_t *)0x0;
    }
    else {
      if (local_38 == '\0') {
        FUN_00d50b00();
        bVar11 = false;
        if ((local_38 == '\0') || (local_40 == (int64_t *)0x0)) goto LAB_01dece70;
        FUN_00d50b20();
      }
      else {
        local_38 = '\0';
      }
      bVar11 = false;
    }
LAB_01dece70:
    if ((local_220 != '\0') && (local_228 != 0)) {
      FUN_00d50b20();
    }
    if (bVar11) {
      plVar6 = (int64_t *)0x0;
    }
    else {
      plVar6 = (int64_t *)FUN_00e8fc40();
      FUN_0004b090();
      uVar12 = (**(code **)(*plVar6 + 0x18))();
      local_218 = local_d0;
      local_210 = '\0';
      (**(code **)(*plVar6 + 0x5f8))(uVar12,&local_218);
      if (plVar4 == local_40) {
LAB_01decf1d:
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar4 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
          goto LAB_01decf1d;
        }
        FUN_00d50b20();
        local_38 = '\0';
      }
      if ((local_210 != '\0') && (local_218 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    plVar8 = local_80;
    local_c8 = plVar6;
    local_48 = plVar4;
    if ((local_60 == (int64_t *)0x0) || (*(int *)((int64_t)local_60 + 0xc) == 0)) {
      FUN_01d28610();
      local_110 = local_a0;
      local_108 = 0;
      if (local_98 == '\0') {
        if (local_a0 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_98 = '\0';
      }
      local_108 = '\x01';
      (**(code **)(*local_c0 + 0x538))();
      local_100 = local_e0;
      local_f8 = 0;
      if (local_d8 == '\0') {
        if (local_e0 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_d8 = '\0';
      }
      local_f8 = '\x01';
      FUN_01caaf60(&local_100,&local_110);
      plVar7 = local_40;
      if (local_40 == local_60) {
LAB_01dedbe1:
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          if (local_60 == (int64_t *)0x0) {
            local_60 = plVar7;
          }
          else {
            local_60 = plVar7;
            FUN_00d50b20();
          }
          goto LAB_01dedbe1;
        }
        if (local_60 != (int64_t *)0x0) {
          local_60 = local_40;
          FUN_00d50b20();
        }
        local_38 = '\0';
        local_60 = local_40;
      }
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_88 = (int64_t *)0x0;
      local_68 = (int64_t *)0x0;
      local_78 = (int64_t *)0x0;
      local_70 = (int64_t *)0x0;
      lVar9 = 0;
      local_f0 = 0;
      plVar7 = (int64_t *)0x0;
      plVar6 = (int64_t *)0x0;
    }
    else {
      local_f0 = CONCAT71((int7)((uint64_t)plVar7 >> 8),1);
      if (*(int *)((int64_t)local_60 + 0xc) < 1) {
        local_88 = (int64_t *)0x0;
        local_68 = (int64_t *)0x0;
        local_78 = (int64_t *)0x0;
        local_70 = (int64_t *)0x0;
        lVar9 = 0;
        plVar7 = (int64_t *)0x0;
        plVar6 = (int64_t *)0x0;
      }
      else {
        local_88 = (int64_t *)0x0;
        local_a8 = (int64_t *)0x0;
        local_b0 = (int64_t *)0x0;
        local_b8 = (int64_t *)0x0;
        lVar10 = 0;
        local_58 = (int64_t *)0x0;
        lVar9 = 0;
        local_50 = (int64_t *)0x0;
        local_70 = (int64_t *)0x0;
        local_78 = (int64_t *)0x0;
        local_68 = (int64_t *)0x0;
        do {
          lVar1 = *(int64_t *)(local_60[2] + lVar10 * 8);
          if (lVar9 != lVar1) {
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
            bVar11 = lVar9 != 0;
            lVar9 = lVar1;
            if (bVar11) {
              FUN_00d50b20();
            }
          }
          FUN_01d25cb0();
          local_200 = '\0';
          local_208 = lVar9;
          cVar2 = FUN_00d23d70();
          if ((local_200 != '\0') && (local_208 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar2 == '\0') {
            local_1f0 = '\0';
            local_1f8 = lVar9;
            uVar12 = FUN_01d2d3b0();
            if ((local_1f0 != '\0') && (local_1f8 != 0)) {
              uVar12 = FUN_00d50b20();
            }
            lVar1 = g_027edfd0;
            if (g_027edfd0 != 0) {
              uVar12 = FUN_00d50b00();
            }
            local_1e8 = lVar1;
            local_1e0 = '\x01';
            uVar12 = FUN_01ccaae0(uVar12,&local_1e8);
            plVar8 = local_40;
            if (local_40 == local_58) {
LAB_01ded2f1:
              if (local_38 != '\0') {
LAB_01ded2f7:
                if (local_40 != (int64_t *)0x0) {
                  uVar12 = FUN_00d50b20();
                }
              }
            }
            else {
              if (local_38 == '\0') {
                if (local_40 != (int64_t *)0x0) {
                  uVar12 = FUN_00d50b00();
                }
                if (local_58 != (int64_t *)0x0) {
                  uVar12 = FUN_00d50b20();
                  local_58 = plVar8;
                  goto LAB_01ded2f1;
                }
                local_58 = plVar8;
                if (local_38 == '\0') goto LAB_01ded305;
                goto LAB_01ded2f7;
              }
              if (local_58 != (int64_t *)0x0) {
                uVar12 = FUN_00d50b20();
              }
              local_38 = '\0';
              local_58 = plVar8;
            }
LAB_01ded305:
            if ((local_1e0 != '\0') && (local_1e8 != 0)) {
              uVar12 = FUN_00d50b20();
            }
            lVar1 = g_027edfd0;
            if (local_58 == (int64_t *)0x0) {
              local_58 = (int64_t *)0x0;
              plVar8 = local_1c8;
            }
            else {
              if (g_027edfd0 != 0) {
                uVar12 = FUN_00d50b00();
              }
              local_1d8 = lVar1;
              local_1d0 = '\x01';
              FUN_01ccab60(uVar12,&local_1d8);
              plVar8 = local_40;
              if (local_40 == local_78) {
LAB_01ded3b5:
                if (local_38 != '\0') {
LAB_01ded3bb:
                  if (local_40 != (int64_t *)0x0) {
                    FUN_00d50b20();
                  }
                }
              }
              else {
                if (local_38 == '\0') {
                  if (local_40 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                  if (local_78 != (int64_t *)0x0) {
                    FUN_00d50b20();
                    local_78 = plVar8;
                    goto LAB_01ded3b5;
                  }
                  local_78 = plVar8;
                  if (local_38 == '\0') goto LAB_01ded3c9;
                  goto LAB_01ded3bb;
                }
                if (local_78 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
                local_38 = '\0';
                local_78 = plVar8;
              }
LAB_01ded3c9:
              if ((local_1d0 != '\0') && (local_1d8 != 0)) {
                FUN_00d50b20();
              }
              FUN_01d25f70();
              plVar7 = local_40;
              plVar8 = local_68;
              if (local_40 == local_68) {
joined_r0x01ded53a:
                local_68 = plVar8;
                plVar7 = local_68;
                plVar8 = local_1c8;
                plVar6 = local_78;
                if ((local_38 != '\0') && (plVar6 = local_78, local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                  plVar7 = local_68;
                  plVar8 = local_1c8;
                  plVar6 = local_78;
                }
              }
              else {
                if (local_38 == '\0') {
                  if (local_40 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                  plVar8 = plVar7;
                  if (local_68 != (int64_t *)0x0) {
                    FUN_00d50b20();
                  }
                  goto joined_r0x01ded53a;
                }
                plVar8 = local_1c8;
                plVar6 = local_78;
                if (local_68 != (int64_t *)0x0) {
                  FUN_00d50b20();
                  plVar8 = local_1c8;
                  plVar6 = local_78;
                }
              }
              local_1c8 = plVar6;
              local_68 = plVar7;
              local_78 = local_1c8;
              if (local_68 == (int64_t *)0x0) {
                local_68 = (int64_t *)0x0;
              }
              else {
                local_1c0 = '\0';
                cVar2 = FUN_00c87b10();
                uVar12 = extraout_XMM0_Da;
                if ((local_1c0 != '\0') && (local_1c8 != (int64_t *)0x0)) {
                  uVar12 = FUN_00d50b20();
                }
                plVar8 = local_1c8;
                if (cVar2 != '\0') {
                  local_1b8 = local_78;
                  local_1b0 = '\0';
                  FUN_00c85950(uVar12,&local_1b8);
                  plVar8 = local_40;
                  if (local_40 == local_70) {
LAB_01ded57d:
                    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    if (local_38 == '\0') {
                      if (local_40 != (int64_t *)0x0) {
                        FUN_00d50b00();
                      }
                      if (local_70 == (int64_t *)0x0) {
                        local_70 = plVar8;
                      }
                      else {
                        FUN_00d50b20();
                        local_70 = plVar8;
                      }
                      goto LAB_01ded57d;
                    }
                    if (local_70 != (int64_t *)0x0) {
                      FUN_00d50b20();
                    }
                    local_38 = '\0';
                    local_70 = plVar8;
                  }
                  if ((local_1b0 != '\0') && (local_1b8 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (local_70 == (int64_t *)0x0) {
                    local_70 = (int64_t *)0x0;
                    plVar8 = local_1c8;
                  }
                  else {
                    cVar2 = FUN_00d77de0();
                    plVar8 = local_1c8;
                    if (cVar2 == '\0') {
                      plVar8 = *(int64_t **)(plVar4[2] + lVar10 * 8);
                      plVar7 = local_50;
                      uVar12 = extraout_XMM0_Da_00;
                      if (local_50 != plVar8) {
                        if (plVar8 != (int64_t *)0x0) {
                          uVar12 = FUN_00d50b00();
                        }
                        plVar7 = plVar8;
                        if (local_50 != (int64_t *)0x0) {
                          local_50 = plVar8;
                          uVar12 = FUN_00d50b20();
                        }
                      }
                      if (plVar7 == (int64_t *)0x0) {
LAB_01ded637:
                        local_50 = (int64_t *)0x0;
                      }
                      else {
                        local_50 = (int64_t *)FUN_00dd6dc0();
                        if (local_50 != plVar7) {
                          if (local_50 != (int64_t *)0x0) {
                            FUN_00d50b00(local_50);
                          }
                          uVar12 = FUN_00d50b20();
                          plVar7 = local_50;
                          if (local_50 == (int64_t *)0x0) goto LAB_01ded637;
                        }
                        local_50 = plVar7;
                        uVar12 = FUN_00d74120();
                        local_130 = local_a0;
                        local_128 = 0;
                        if (local_98 == '\0') {
                          if (local_a0 != (int64_t *)0x0) {
                            uVar12 = FUN_00d50b00();
                          }
                        }
                        else {
                          local_98 = '\0';
                        }
                        local_128 = '\x01';
                        uVar12 = (**(code **)(*local_50 + 0x88))(uVar12,&local_130);
                        plVar8 = local_40;
                        if (local_40 == local_b8) {
LAB_01ded757:
                          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                            uVar12 = FUN_00d50b20();
                          }
                        }
                        else {
                          if (local_38 == '\0') {
                            if (local_40 != (int64_t *)0x0) {
                              uVar12 = FUN_00d50b00();
                            }
                            local_e8 = plVar8;
                            if (local_b8 == (int64_t *)0x0) {
                              local_88 = plVar8;
                              local_a8 = plVar8;
                              local_b0 = plVar8;
                            }
                            else {
                              uVar12 = FUN_00d50b20();
                              local_88 = plVar8;
                              local_a8 = plVar8;
                              local_b0 = plVar8;
                            }
                            goto LAB_01ded757;
                          }
                          local_e8 = local_40;
                          if (local_b8 != (int64_t *)0x0) {
                            uVar12 = FUN_00d50b20();
                          }
                          local_38 = '\0';
                          local_88 = plVar8;
                          local_a8 = plVar8;
                          local_b0 = plVar8;
                        }
                        if ((local_128 != '\0') && (local_130 != (int64_t *)0x0)) {
                          uVar12 = FUN_00d50b20();
                        }
                        if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
                          uVar12 = FUN_00d50b20();
                        }
                      }
                      plVar8 = local_b0;
                      if (local_b0 != (int64_t *)0x0) {
                        local_1a8 = local_78;
                        local_1a0 = '\0';
                        (**(code **)(*local_b0 + 0x88))(uVar12,&local_1a8);
                        plVar7 = local_40;
                        if (local_40 == plVar8) {
LAB_01ded843:
                          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                            FUN_00d50b20();
                          }
                        }
                        else {
                          if (local_38 == '\0') {
                            if (local_40 != (int64_t *)0x0) {
                              FUN_00d50b00();
                            }
                            local_e8 = plVar7;
                            FUN_00d50b20();
                            local_88 = plVar7;
                            local_a8 = plVar7;
                            goto LAB_01ded843;
                          }
                          local_e8 = local_40;
                          FUN_00d50b20();
                          local_38 = '\0';
                          local_88 = plVar7;
                          local_a8 = plVar7;
                        }
                        if ((local_1a0 != '\0') && (local_1a8 != (int64_t *)0x0)) {
                          FUN_00d50b20();
                        }
                        if (local_a8 != (int64_t *)0x0) {
                          if ((g_027048b0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)
                             ) {
                            g_026cd478 = FUN_00d4fe50();
                            g_026cd460 = "GNList";
                            g_026cd468 = 0x20;
                            g_026cd470 = FUN_00018210;
                            g_026cd480 = 0;
                            ram_00000000026cd488 = 0;
                            g_026cd490 = 0;
                            g_026cd508 = 0;
                            ram_00000000026cd510 = 0;
                            g_026cd518 = 0;
                            g_026cd51a = 6;
                            g_026cd498 = 0;
                            ram_00000000026cd4a0 = 0;
                            g_026cd4a8 = 0;
                            ram_00000000026cd4b0 = 0;
                            g_026cd4b8 = 0;
                            ram_00000000026cd4c0 = 0;
                            g_026cd4c8 = 0;
                            ram_00000000026cd4d0 = 0;
                            g_026cd4d8 = 0;
                            ram_00000000026cd4e0 = 0;
                            g_026cd4e8 = 0;
                            ram_00000000026cd4f0 = 0;
                            g_026cd4f8 = 0;
                            ram_00000000026cd500 = 0;
                            g_026cd523 = 0;
                            g_026cd51b = 0;
                            ___cxa_guard_release();
                            plVar4 = local_48;
                          }
                          (**(code **)(*local_a8 + 0x360))();
                          cVar2 = FUN_00e85ea0();
                          local_88 = local_e8;
                          plVar8 = local_e8;
                          if (cVar2 == '\0') {
                            plVar8 = g_02802688;
                          }
                          if (plVar8 != (int64_t *)0x0) {
                            local_198 = local_50;
                            local_190 = '\0';
                            cVar2 = FUN_00d24090(plVar8,local_e8);
                            if ((local_190 != '\0') && (local_198 != (int64_t *)0x0)) {
                              FUN_00d50b20();
                            }
                            if (cVar2 != '\0') {
                              local_188 = local_50;
                              local_180 = '\0';
                              FUN_00d23f50();
                              if ((local_180 != '\0') && (local_188 != (int64_t *)0x0)) {
                                FUN_00d50b20();
                                local_b8 = local_88;
                                plVar8 = local_1c8;
                                local_b0 = local_b8;
                                local_a8 = local_b8;
                                goto LAB_01decfd4;
                              }
                            }
                          }
                          local_a8 = local_88;
                          local_b0 = local_88;
                          local_b8 = local_88;
                          plVar8 = local_1c8;
                          goto LAB_01decfd4;
                        }
                        local_a8 = (int64_t *)0x0;
                      }
                      local_b0 = (int64_t *)0x0;
                      local_b8 = (int64_t *)0x0;
                      plVar8 = local_1c8;
                    }
                  }
                }
              }
            }
          }
          else if ((*(char *)(this_ptr + 0x58) != '\0') ||
                  (cVar2 = (**(code **)(*local_c0 + 0x540))(), plVar8 = local_1c8, cVar2 != '\0')) {
            FUN_01d25cb0();
            local_170 = '\0';
            local_178 = lVar9;
            iVar3 = FUN_00d237a0();
            if ((local_170 != '\0') && (local_178 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            local_160 = '\0';
            local_168 = lVar9;
            FUN_002edd50();
            local_120 = local_40;
            local_118 = 0;
            if (local_38 == '\0') {
              if (local_40 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            plVar4 = local_48;
            local_118 = '\x01';
            uVar12 = FUN_01d2db80();
            if ((local_118 != '\0') && (local_120 != (int64_t *)0x0)) {
              uVar12 = FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              uVar12 = FUN_00d50b20();
            }
            if ((local_160 != '\0') && (local_168 != 0)) {
              uVar12 = FUN_00d50b20();
            }
            param_1 = param_1 - (uint)(iVar3 <= param_1);
            local_150 = '\0';
            local_158 = lVar9;
            FUN_01d2cbb0(uVar12,param_1);
            if ((local_150 != '\0') && (local_158 != 0)) {
              FUN_00d50b20();
            }
            param_1 = param_1 + 1;
            plVar8 = local_1c8;
          }
LAB_01decfd4:
          local_1c8 = plVar8;
          lVar10 = lVar10 + 1;
          plVar7 = local_58;
          plVar6 = local_50;
          plVar8 = local_80;
        } while (lVar10 < *(int *)((int64_t)local_60 + 0xc));
      }
    }
    if (local_d0 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (local_70 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (local_78 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (local_c8 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (local_88 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
    if (plVar4 == (int64_t *)0x0) goto LAB_01decb3d;
  }
  FUN_00d50b20();
LAB_01decb3d:
  if (local_60 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_90 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return local_f0;
}

