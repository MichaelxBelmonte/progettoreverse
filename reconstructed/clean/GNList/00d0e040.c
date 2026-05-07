// Function: FUN_00d0e040
// Address: 00d0e040
// Size: 5284 bytes
// Class: GNList
// String references:
//   "GNList"
//   "GNString"
//   "GNDictionary"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00d0e040(uint32_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  char cVar2;
  void*puVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int iVar7;
  int64_t *arg1;
  int64_t this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t uVar8;
  uint32_t extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Da_04;
  int64_t local_3c8;
  uint8_t local_3c0;
  int64_t local_3b8;
  uint8_t local_3b0;
  int64_t local_3a8;
  uint8_t local_3a0;
  int64_t local_398;
  uint8_t local_390;
  int64_t local_388;
  uint8_t local_380;
  int64_t local_378;
  uint8_t local_370;
  int64_t local_368;
  uint8_t local_360;
  int64_t local_358;
  uint8_t local_350;
  int64_t local_348;
  uint8_t local_340;
  int64_t local_338;
  uint8_t local_330;
  int64_t local_328;
  uint8_t local_320;
  int64_t local_318;
  char local_310;
  int64_t local_308;
  char local_300;
  int64_t local_2f8;
  char local_2f0;
  int64_t local_2e8;
  char local_2e0;
  int64_t local_2d8;
  char local_2d0;
  int64_t local_2c8;
  char local_2c0;
  int64_t local_2b8;
  char local_2b0;
  int64_t local_2a8;
  char local_2a0;
  int64_t local_298;
  char local_290;
  int64_t local_288;
  char local_280;
  int64_t *local_278;
  char local_270;
  int64_t local_268;
  char local_260;
  int64_t *local_258;
  char local_250;
  int64_t local_248;
  char local_240;
  void*local_238;
  char local_230;
  int64_t local_228;
  char local_220;
  int64_t local_218;
  char local_210;
  int64_t local_208;
  char local_200;
  int64_t local_1f8;
  char local_1f0;
  int64_t *local_1e8;
  char local_1e0;
  int64_t local_1d8;
  char local_1d0;
  int64_t *local_1c8;
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
  int64_t *local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
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
  int64_t *local_80;
  int64_t local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  uint64_t local_48;
  int local_40;
  char local_31;
  
  lVar4 = g_0277c890;
  if (*arg1 == 0) {
    return;
  }
  local_80 = param_2;
  if (*(char *)(this_ptr + 0x70) != '\0') {
    param_2 = (int64_t *)*param_2;
    if (g_0277c890 != 0) {
      FUN_00d50b00();
    }
    local_318 = lVar4;
    local_310 = '\x01';
    cVar2 = (**(code **)(*param_2 + 0x50))();
    param_1 = extraout_XMM0_Da;
    if ((local_310 != '\0') && (local_318 != 0)) {
      param_1 = FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      return;
    }
  }
  if (*(char *)(this_ptr + 0x71) == '\0') {
    local_1a8 = *(int64_t *)(this_ptr + 0x50);
    local_1a0 = '\0';
    FUN_00d0a070(param_1,&local_1a8);
    lVar4 = local_60;
    if (local_58 == '\0') {
      if (((local_60 != 0) && (FUN_00d50b00(), local_58 != '\0')) && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58 = '\0';
    }
    if ((local_1a0 != '\0') && (local_1a8 != 0)) {
      FUN_00d50b20();
    }
    local_358 = *arg1;
    local_350 = 0;
    cVar2 = FUN_00d099c0();
    if (cVar2 == '\0') {
      local_188 = *arg1;
      local_180 = '\0';
      uVar8 = FUN_019a54a0(extraout_XMM0_Da_03,&local_188);
      lVar1 = local_60;
      if ((local_58 != '\0') && (local_60 != 0)) {
        uVar8 = FUN_00d50b20();
      }
      if ((local_180 != '\0') && (local_188 != 0)) {
        uVar8 = FUN_00d50b20();
      }
      if (lVar1 == 0) {
        local_348 = *arg1;
        local_340 = 0;
        uVar8 = FUN_00d09d20(uVar8,&local_348);
        local_d8 = local_60;
        local_d0 = 0;
        if ((local_58 == '\0') && (local_60 != 0)) {
          uVar8 = FUN_00d50b00();
        }
        local_d0 = '\x01';
        local_178 = *arg1;
        local_170 = '\0';
        FUN_019b43b0(uVar8,&local_178);
        if ((local_170 != '\0') && (local_178 != 0)) {
          FUN_00d50b20();
        }
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
        local_168 = *arg1;
        local_160 = '\0';
        uVar8 = FUN_00d21140();
        if ((local_160 != '\0') && (local_168 != 0)) {
          uVar8 = FUN_00d50b20();
        }
      }
      local_158 = *arg1;
      local_150 = '\0';
      uVar8 = FUN_00d0a070(uVar8,&local_158);
      if ((local_58 != '\0') && (local_60 != 0)) {
        uVar8 = FUN_00d50b20();
      }
      if ((local_150 != '\0') && (local_158 != 0)) {
        uVar8 = FUN_00d50b20();
      }
      if (local_60 == 0) {
        plVar5 = (int64_t *)FUN_00e8fc40();
        FUN_00022d50();
        uVar8 = (**(code **)(*plVar5 + 0x18))();
        local_140 = '\x01';
        local_138 = *arg1;
        local_130 = '\0';
        local_148 = plVar5;
        uVar8 = FUN_00d09fc0(uVar8,&local_138);
        if ((local_130 != '\0') && (local_138 != 0)) {
          uVar8 = FUN_00d50b20();
        }
        if ((local_140 != '\0') && (local_148 != (int64_t *)0x0)) {
          uVar8 = FUN_00d50b20();
        }
      }
      local_338 = *arg1;
      local_330 = 0;
      uVar8 = FUN_00d0b040(uVar8,&local_338);
      local_90 = 0;
      if (local_68 == '\0') {
        if (local_70 != 0) {
          uVar8 = FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      local_90 = '\x01';
      local_98 = local_70;
      local_328 = *local_80;
      local_320 = 0;
      uVar8 = FUN_00d10270(uVar8,&local_328);
      if (local_120 == '\0') {
        if (local_128 != 0) {
          uVar8 = FUN_00d50b00();
        }
      }
      else {
        local_120 = '\0';
      }
      local_60 = local_128;
      local_58 = '\0';
      FUN_00ca0840(uVar8,&local_60);
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (local_128 != 0) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_198 = *arg1;
      local_190 = '\0';
      local_60 = *local_80;
      local_58 = '\0';
      FUN_00ca0840(extraout_XMM0_Da_03,&local_60);
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_190 != '\0') && (local_198 != 0)) {
        FUN_00d50b20();
      }
    }
    if (lVar4 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  plVar5 = *(int64_t **)(this_ptr + 0x50);
  local_308 = *arg1;
  local_300 = '\0';
  local_2f8 = *local_80;
  local_2f0 = '\0';
  local_110 = 0;
  lVar4 = *(int64_t *)(this_ptr + 0x78);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  local_110 = '\x01';
  local_118 = lVar4;
  cVar2 = (**(code **)(*plVar5 + 0x270))(&local_118,&local_2f8);
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2f0 != '\0') && (local_2f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_300 != '\0') && (local_308 != 0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    return;
  }
  plVar5 = (int64_t *)*arg1;
  if ((g_027048b0 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
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
  }
  if (plVar5 == (int64_t *)0x0) {
LAB_00d0e1dc:
    plVar5 = &g_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar5 = arg1;
    if (cVar2 == '\0') goto LAB_00d0e1dc;
  }
  lVar4 = *plVar5;
  local_31 = (char)plVar5[1];
  if ((local_31 != '\0') && (lVar4 != 0)) {
    FUN_00d50b00();
  }
  local_2e8 = *(int64_t *)(this_ptr + 0x50);
  local_2e0 = '\0';
  local_88 = lVar4;
  FUN_00d0a070();
  local_78 = local_60;
  if (local_58 == '\0') {
    if (((local_60 != 0) && (FUN_00d50b00(), local_58 != '\0')) && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_2e0 != '\0') && (local_2e8 != 0)) {
    FUN_00d50b20();
  }
  local_2d8 = *arg1;
  local_2d0 = '\0';
  cVar2 = FUN_00d099c0();
  uVar8 = extraout_XMM0_Da_00;
  if (cVar2 == '\0') {
    plVar5 = (int64_t *)*arg1;
    if ((g_026fdd40 == '\0') &&
       (iVar7 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_04, iVar7 != 0)) {
      g_026cd0e8 = FUN_00d4fe50();
      g_026cd0d0 = "GNDictionary";
      g_026cd0d8 = 0x28;
      g_026cd0e0 = FUN_00022d20;
      g_026cd0f0 = 0;
      ram_00000000026cd0f8 = 0;
      g_026cd100 = 0;
      g_026cd178 = 0;
      ram_00000000026cd180 = 0;
      g_026cd188 = 0;
      g_026cd18a = 6;
      g_026cd108 = 0;
      ram_00000000026cd110 = 0;
      g_026cd118 = 0;
      ram_00000000026cd120 = 0;
      g_026cd128 = 0;
      ram_00000000026cd130 = 0;
      g_026cd138 = 0;
      ram_00000000026cd140 = 0;
      g_026cd148 = 0;
      ram_00000000026cd150 = 0;
      g_026cd158 = 0;
      ram_00000000026cd160 = 0;
      g_026cd168 = 0;
      ram_00000000026cd170 = 0;
      g_026cd193 = 0;
      g_026cd18b = 0;
      uVar8 = ___cxa_guard_release();
    }
    plVar6 = &g_02802688;
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x360))();
      cVar2 = FUN_00e85ea0();
      uVar8 = extraout_XMM0_Da_01;
      if (cVar2 != '\0') {
        if ((g_026fd0c0 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
          g_026d5e58 = FUN_00d4fe50();
          g_026d5e40 = "GNString";
          g_026d5e48 = 0x40;
          g_026d5e50 = FUN_0005d920;
          g_026d5e60 = 0;
          ram_00000000026d5e68 = 0;
          g_026d5e70 = 0;
          ram_00000000026d5e78 = 0;
          g_026d5e80 = 0;
          ram_00000000026d5e88 = 0;
          g_026d5e90 = 0;
          ram_00000000026d5e98 = 0;
          g_026d5ea0 = 0;
          ram_00000000026d5ea8 = 0;
          g_026d5eb0 = 0;
          ram_00000000026d5eb8 = 0;
          g_026d5ec0 = 0;
          ram_00000000026d5ec8 = 0;
          g_026d5ed0 = 0;
          ram_00000000026d5ed8 = 0;
          g_026d5ee0 = 0;
          ram_00000000026d5ee8 = 0;
          g_026d5ef0 = 0;
          ram_00000000026d5ef8 = 0;
          g_026d5f00 = 0;
          ___cxa_guard_release();
        }
        cVar2 = FUN_00e8db60();
        plVar6 = arg1;
        uVar8 = extraout_XMM0_Da_02;
        if (cVar2 == '\0') {
          plVar6 = &g_02802688;
        }
      }
    }
    lVar4 = *plVar6;
    if ((local_2d0 != '\0') && (local_2d8 != 0)) {
      uVar8 = FUN_00d50b20();
    }
    if (lVar4 == 0) {
      if (local_88 == 0) {
        local_228 = *arg1;
        local_220 = '\0';
        uVar8 = FUN_019a54a0(uVar8,&local_228);
        lVar4 = local_60;
        if ((local_58 != '\0') && (local_60 != 0)) {
          uVar8 = FUN_00d50b20();
        }
        if ((local_220 != '\0') && (local_228 != 0)) {
          uVar8 = FUN_00d50b20();
        }
        if (lVar4 == 0) {
          local_398 = *arg1;
          local_390 = 0;
          uVar8 = FUN_00d09d20(uVar8,&local_398);
          local_e8 = local_60;
          local_e0 = 0;
          if ((local_58 == '\0') && (local_60 != 0)) {
            uVar8 = FUN_00d50b00();
          }
          local_e0 = '\x01';
          local_218 = *arg1;
          local_210 = '\0';
          FUN_019b43b0(uVar8,&local_218);
          if ((local_210 != '\0') && (local_218 != 0)) {
            FUN_00d50b20();
          }
          if ((local_e0 != '\0') && (local_e8 != 0)) {
            FUN_00d50b20();
          }
          local_208 = *arg1;
          local_200 = '\0';
          uVar8 = FUN_00d21140();
          if ((local_200 != '\0') && (local_208 != 0)) {
            uVar8 = FUN_00d50b20();
          }
        }
        local_1f8 = *arg1;
        local_1f0 = '\0';
        uVar8 = FUN_00d0a070(uVar8,&local_1f8);
        if ((local_58 != '\0') && (local_60 != 0)) {
          uVar8 = FUN_00d50b20();
        }
        if ((local_1f0 != '\0') && (local_1f8 != 0)) {
          uVar8 = FUN_00d50b20();
        }
        if (local_60 == 0) {
          plVar5 = (int64_t *)FUN_00e8fc40();
          FUN_00022d50();
          uVar8 = (**(code **)(*plVar5 + 0x18))();
          local_1e0 = '\0';
          local_1d8 = *arg1;
          local_1d0 = '\0';
          local_1e8 = plVar5;
          uVar8 = FUN_00d09fc0(uVar8,&local_1d8);
          if ((local_1d0 != '\0') && (local_1d8 != 0)) {
            uVar8 = FUN_00d50b20();
          }
          if ((local_1e0 != '\0') && (local_1e8 != (int64_t *)0x0)) {
            uVar8 = FUN_00d50b20();
          }
          local_1c0 = '\0';
          local_388 = *local_80;
          local_380 = 0;
          local_1c8 = plVar5;
          uVar8 = FUN_00d10270(uVar8,&local_388);
          if (local_68 == '\0') {
            if (local_70 != 0) {
              uVar8 = FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          local_60 = local_70;
          local_58 = '\0';
          FUN_00ca0840(uVar8,&local_60);
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if (local_70 != 0) {
            FUN_00d50b20();
          }
          if ((local_1c0 != '\0') && (local_1c8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        else {
          local_378 = *arg1;
          local_370 = 0;
          uVar8 = FUN_00d0b040(uVar8,&local_378);
          local_b0 = 0;
          if (local_68 == '\0') {
            if (local_70 != 0) {
              uVar8 = FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          local_b0 = '\x01';
          local_b8 = local_70;
          local_368 = *local_80;
          local_360 = 0;
          uVar8 = FUN_00d10270(uVar8,&local_368);
          if (local_120 == '\0') {
            if (local_128 != 0) {
              uVar8 = FUN_00d50b00();
            }
          }
          else {
            local_120 = '\0';
          }
          local_60 = local_128;
          local_58 = '\0';
          uVar8 = FUN_00ca0840(uVar8,&local_60);
          if ((local_58 != '\0') && (local_60 != 0)) {
            uVar8 = FUN_00d50b20();
          }
          if (local_128 != 0) {
            uVar8 = FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            uVar8 = FUN_00d50b20();
          }
          if (*(char *)(this_ptr + 0x71) != '\0') {
            local_1b8 = *arg1;
            local_1b0 = '\0';
            FUN_019a54a0(uVar8,&local_1b8);
            local_a8 = local_60;
            local_a0 = 0;
            if (local_58 == '\0') {
              if (local_60 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_58 = '\0';
            }
            local_a0 = '\x01';
            FUN_00d7a410();
            if ((local_a0 != '\0') && (local_a8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            if ((local_1b0 != '\0') && (local_1b8 != 0)) {
              FUN_00d50b20();
            }
          }
        }
      }
      else {
        puVar3 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = &g_02572358;
        (*g_02572370)();
        local_58 = 0;
        local_60 = 0;
        local_50 = local_88;
        local_48 = 0xffffffff;
        local_40 = 0;
        local_48._4_4_ = 0;
        while( true ) {
          if (local_48._4_4_ != 0) {
            if (local_48._4_4_ < 1) {
              iVar7 = -local_48._4_4_;
            }
            else {
              iVar7 = (int)local_48 - local_48._4_4_;
              local_48 = CONCAT44(local_48._4_4_,iVar7);
              FUN_00d23690();
              local_40 = local_40 + local_48._4_4_;
              iVar7 = 0;
            }
            local_48 = CONCAT44(iVar7,(int)local_48);
          }
          lVar4 = (int64_t)(int)local_48;
          iVar7 = (int)local_48 + 1;
          local_48 = CONCAT44(local_48._4_4_,iVar7);
          if (*(int *)(local_50 + 0xc) <= iVar7) break;
          local_2b8 = *(int64_t *)(*(int64_t *)(local_50 + 0x10) + 8 + lVar4 * 8);
          local_2b0 = '\0';
          local_60 = local_2b8;
          uVar8 = FUN_019a54a0(*(int64_t *)(local_50 + 0x10),&local_2b8);
          lVar4 = local_70;
          if ((local_68 != '\0') && (local_70 != 0)) {
            uVar8 = FUN_00d50b20();
          }
          if ((local_2b0 != '\0') && (local_2b8 != 0)) {
            uVar8 = FUN_00d50b20();
          }
          if (lVar4 == 0) {
            local_3c8 = local_60;
            local_3c0 = 0;
            uVar8 = FUN_00d09d20(uVar8,&local_3c8);
            lVar4 = local_70;
            local_100 = 0;
            if ((local_68 == '\0') && (local_70 != 0)) {
              uVar8 = FUN_00d50b00();
            }
            local_108 = lVar4;
            local_100 = '\x01';
            local_2a8 = local_60;
            local_2a0 = '\0';
            FUN_019b43b0(uVar8,&local_2a8);
            if ((local_2a0 != '\0') && (local_2a8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_100 != '\0') && (local_108 != 0)) {
              FUN_00d50b20();
            }
            local_298 = local_60;
            local_290 = '\0';
            uVar8 = FUN_00d21140();
            if ((local_290 != '\0') && (local_298 != 0)) {
              uVar8 = FUN_00d50b20();
            }
          }
          local_288 = local_60;
          local_280 = '\0';
          uVar8 = FUN_00d0a070(uVar8,&local_288);
          lVar4 = local_70;
          if ((local_68 != '\0') && (local_70 != 0)) {
            uVar8 = FUN_00d50b20();
          }
          if ((local_280 != '\0') && (local_288 != 0)) {
            uVar8 = FUN_00d50b20();
          }
          if (lVar4 == 0) {
            plVar5 = (int64_t *)FUN_00e8fc40();
            FUN_00022d50();
            uVar8 = (**(code **)(*plVar5 + 0x18))();
            local_270 = '\0';
            local_268 = local_60;
            local_260 = '\0';
            local_278 = plVar5;
            FUN_00d09fc0(uVar8,&local_268);
            if ((local_260 != '\0') && (local_268 != 0)) {
              FUN_00d50b20();
            }
            if ((local_270 != '\0') && (local_278 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            local_250 = '\0';
            local_258 = plVar5;
            FUN_00d21140();
            if ((local_250 != '\0') && (local_258 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
          else {
            local_3b8 = local_60;
            local_3b0 = 0;
            FUN_00d0b040(uVar8,&local_3b8);
            lVar4 = local_70;
            local_f0 = 0;
            if ((local_68 == '\0') && (local_70 != 0)) {
              FUN_00d50b00();
            }
            local_f8 = lVar4;
            local_f0 = '\x01';
            uVar8 = FUN_00d21140();
            if ((local_f0 != '\0') && (local_f8 != 0)) {
              uVar8 = FUN_00d50b20();
            }
            if (*(char *)(this_ptr + 0x71) != '\0') {
              local_248 = local_60;
              local_240 = '\0';
              FUN_019a54a0(uVar8,&local_248);
              local_c8 = local_70;
              local_c0 = 0;
              if (local_68 == '\0') {
                if (local_70 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_68 = '\0';
              }
              local_c0 = '\x01';
              FUN_00d7a410();
              if ((local_c0 != '\0') && (local_c8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_68 != '\0') && (local_70 != 0)) {
                FUN_00d50b20();
              }
              if ((local_240 != '\0') && (local_248 != 0)) {
                FUN_00d50b20();
              }
            }
          }
        }
        uVar8 = FUN_00083b20();
        local_230 = '\0';
        local_3a8 = *local_80;
        local_3a0 = 0;
        local_238 = puVar3;
        uVar8 = FUN_00d10270(uVar8,&local_3a8);
        if (local_68 == '\0') {
          if (local_70 != 0) {
            uVar8 = FUN_00d50b00();
          }
        }
        else {
          local_68 = '\0';
        }
        local_60 = local_70;
        local_58 = '\0';
        FUN_00ca0840(uVar8,&local_60);
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if (local_70 != 0) {
          FUN_00d50b20();
        }
        if ((local_230 != '\0') && (local_238 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (puVar3 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
      goto LAB_00d0e370;
    }
  }
  local_2c8 = *arg1;
  local_2c0 = '\0';
  local_60 = *local_80;
  local_58 = '\0';
  FUN_00ca0840(uVar8,&local_60);
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2c0 != '\0') && (local_2c8 != 0)) {
    FUN_00d50b20();
  }
LAB_00d0e370:
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  if ((local_31 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  return;
}

