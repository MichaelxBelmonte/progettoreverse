// Function: FUN_01f72160
// Address: 01f72160
// Size: 18918 bytes
// Class: GNList
// String references:
//   "GNList"
//   "GNString"
//   "GNDictionary"
//   "%@.lproj"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


uint64_t FUN_01f72160(uint32_t param_1,int64_t *param_2,uint32_t param_3)

{
  uint uVar1;
  bool bVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  int64_t lVar9;
  int64_t *plVar10;
  int64_t *plVar11;
  int64_t *plVar12;
  uint64_t uVar13;
  int64_t **pplVar14;
  int64_t *arg1;
  int64_t *this_ptr;
  char cVar15;
  byte bVar16;
  int64_t *unaff_R13;
  undefined7 uVar17;
  uint64_t uVar18;
  uint uVar19;
  int64_t *unaff_R15;
  int64_t *plVar20;
  dword *pdVar21;
  bool bVar22;
  uint32_t uVar23;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Da_04;
  uint32_t extraout_XMM0_Da_05;
  uint32_t extraout_XMM0_Da_06;
  uint32_t extraout_XMM0_Da_07;
  uint32_t extraout_XMM0_Da_08;
  uint32_t extraout_XMM0_Da_09;
  uint32_t extraout_XMM0_Da_10;
  uint32_t extraout_XMM0_Da_11;
  uint32_t extraout_XMM0_Da_12;
  uint32_t extraout_XMM0_Da_13;
  uint32_t extraout_XMM0_Da_14;
  uint32_t extraout_XMM0_Da_15;
  uint32_t extraout_XMM0_Da_16;
  uint32_t extraout_XMM0_Da_17;
  uint32_t extraout_XMM0_Da_18;
  uint32_t extraout_XMM0_Da_19;
  uint32_t extraout_XMM0_Da_20;
  uint32_t extraout_XMM0_Da_21;
  uint32_t extraout_XMM0_Da_22;
  uint32_t extraout_XMM0_Da_23;
  uint32_t extraout_XMM0_Da_24;
  uint32_t extraout_XMM0_Da_25;
  uint32_t extraout_XMM0_Da_26;
  uint32_t extraout_XMM0_Da_27;
  uint32_t extraout_XMM0_Da_28;
  uint32_t extraout_XMM0_Da_29;
  uint32_t extraout_XMM0_Da_30;
  int64_t local_4e8;
  char local_4e0;
  int64_t local_4d8;
  char local_4d0;
  int64_t local_4c8;
  char local_4c0;
  int64_t local_4b8;
  char local_4b0;
  int64_t *local_4a8;
  char local_4a0;
  int64_t local_498;
  char local_490;
  int64_t *local_488;
  char local_480;
  int64_t local_478;
  char local_470;
  int64_t local_468;
  char local_460;
  int64_t *local_458;
  char local_450;
  int64_t *local_448;
  char local_440;
  int64_t local_438;
  char local_430;
  int64_t *local_428;
  char local_420;
  int64_t *local_418;
  char local_410;
  int64_t local_408;
  char local_400;
  int64_t *local_3f8;
  char local_3f0;
  int64_t *local_3e8;
  char local_3e0;
  int64_t *local_3d8;
  char local_3d0;
  int64_t *local_3c8;
  char local_3c0;
  int64_t *local_3b8;
  char local_3b0;
  int64_t *local_3a8;
  char local_3a0;
  int64_t *local_398;
  char local_390;
  int64_t *local_388;
  char local_380;
  int64_t *local_378;
  char local_370;
  int64_t *local_368;
  char local_360;
  int64_t *local_358;
  char local_350;
  int64_t *local_348;
  char local_340;
  int64_t *local_338;
  char local_330;
  int64_t *local_328;
  char local_320;
  int64_t *local_318;
  char local_310;
  int64_t *local_308;
  char local_300;
  int64_t *local_2f8;
  char local_2f0;
  int64_t *local_2e8;
  char local_2e0;
  int64_t local_2d8;
  char local_2d0;
  int64_t local_2c8;
  char local_2c0;
  int64_t *local_2b8;
  char local_2b0;
  int64_t local_2a8;
  char local_2a0;
  int64_t local_298;
  char local_290;
  int64_t local_288;
  char local_280;
  uint32_t local_278;
  int local_274;
  uint64_t local_270;
  int64_t *local_268;
  int64_t *local_260;
  char local_258;
  int64_t *local_250;
  char local_248;
  int64_t *local_240;
  char local_238;
  int64_t *local_230;
  char local_228;
  int64_t *local_220;
  char local_218;
  int64_t *local_210;
  char local_208;
  int64_t *local_200;
  char local_1f8;
  int64_t *local_1f0;
  char local_1e8;
  int64_t *local_1e0;
  char local_1d8;
  int64_t *local_1d0;
  char local_1c8;
  int64_t *local_1c0;
  int64_t *local_1b8;
  uint64_t local_1b0;
  uint32_t local_1a8;
  uint32_t local_1a4;
  int64_t *local_1a0;
  uint64_t local_198;
  uint64_t local_190;
  int64_t *local_188;
  int64_t *local_180;
  int64_t *local_178;
  uint64_t local_170;
  uint64_t local_168;
  char local_159;
  int64_t *local_158;
  char local_150;
  int64_t *local_148;
  int64_t *local_140;
  uint64_t local_138;
  int64_t *local_130;
  int64_t *local_128;
  uint64_t local_120;
  int64_t *local_118;
  int64_t *local_110;
  int64_t *local_108;
  int64_t *local_100;
  uint64_t local_f8;
  uint64_t local_f0;
  uint64_t local_e8;
  int64_t *local_e0;
  int64_t *local_d8;
  int64_t *local_d0;
  int64_t *local_c8;
  int64_t *local_c0;
  int64_t *local_b8;
  int64_t *local_b0;
  int64_t *local_a8;
  uint64_t local_a0;
  uint local_94;
  int64_t *local_90;
  int64_t *local_88;
  int64_t *local_80;
  int64_t *local_78;
  int64_t *local_70;
  int64_t *local_68;
  int64_t *local_60;
  uint local_58 [2];
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  uint32_t local_38;
  
  plVar8 = (int64_t *)*this_ptr;
  if (plVar8 == (int64_t *)0x0) {
    uVar18 = 0;
    goto LAB_01f7275d;
  }
  local_159 = (char)this_ptr[1];
  local_278 = param_1;
  local_1c0 = plVar8;
  local_38 = param_3;
  if (local_159 != '\0') {
    FUN_00d50b00();
  }
  FUN_00d31720();
  local_1a0 = local_60;
  if (local_60 == (int64_t *)0x0) {
    local_1a4 = 1;
    local_1a0 = (int64_t *)0x0;
  }
  else {
    if ((char)local_58[0] == '\0') {
      FUN_00d50b00();
      local_1a4 = 0;
      if (((char)local_58[0] == '\0') || (local_60 == (int64_t *)0x0)) goto LAB_01f7223e;
      FUN_00d50b20();
    }
    else {
      local_58[0] = local_58[0] & 0xffffff00;
    }
    local_1a4 = 0;
  }
LAB_01f7223e:
  if ((local_1a0 == (int64_t *)0x0) || (*(int *)((int64_t)local_1a0 + 0xc) == 0)) {
    FUN_01f27fe0();
    lVar9 = g_02800c60;
    if (g_02800c60 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*local_1c0 + 0x368))();
    local_260 = local_c0;
    local_258 = 0;
    if ((char)local_b8 == '\0') {
      if (local_c0 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_b8._0_1_ = '\0';
    }
    local_258 = '\x01';
    local_4e0 = '\0';
    local_4e8 = 0;
    local_4d8 = 0;
    local_4d0 = '\0';
    local_4c8 = 0;
    local_4c0 = '\0';
    FUN_01f316e0(&local_4e8,&local_260,&local_4d8,&local_4c8);
    if ((local_4c0 != '\0') && (local_4c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_4d0 != '\0') && (local_4d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_4e0 != '\0') && (local_4e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_258 != '\0') && (local_260 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
    if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_01f72577:
    local_80 = (int64_t *)0x0;
    local_90 = (int64_t *)0x0;
    local_170 = 0;
    local_e0 = (int64_t *)0x0;
    local_198 = 0;
    local_180 = (int64_t *)0x0;
    local_e8 = 0;
    local_d0 = (int64_t *)0x0;
    local_148 = (int64_t *)0x0;
    local_140 = (int64_t *)0x0;
    local_110 = (int64_t *)0x0;
    local_88 = (int64_t *)0x0;
    local_120 = 0;
    local_b0 = (int64_t *)0x0;
    local_40 = (int64_t *)0x0;
    local_68 = (int64_t *)0x0;
    cVar4 = '\0';
    local_a8 = (int64_t *)0x0;
    bVar22 = false;
    local_188 = (int64_t *)0x0;
    uVar18 = 0;
  }
  else {
    FUN_01f27fe0();
    (**(code **)(*local_158 + 0x610))();
    (**(code **)(*local_c0 + 1000))();
    local_1b8 = local_60;
    if ((char)local_58[0] == '\0') {
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b00();
        if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_58[0] = local_58[0] & 0xffffff00;
    }
    if (((char)local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_1b8 == (int64_t *)0x0) goto LAB_01f72577;
    local_274 = *(int *)((int64_t)local_1b8 + 0xc);
    if (local_274 == 0) {
      local_188 = (int64_t *)0x0;
      bVar22 = false;
      local_a8 = (int64_t *)0x0;
      cVar4 = '\0';
      local_68 = (int64_t *)0x0;
      local_40 = (int64_t *)0x0;
      local_b0 = (int64_t *)0x0;
      local_120 = 0;
      local_88 = (int64_t *)0x0;
      local_110 = (int64_t *)0x0;
      local_140 = (int64_t *)0x0;
      local_148 = (int64_t *)0x0;
      local_d0 = (int64_t *)0x0;
      local_e8 = 0;
      local_180 = (int64_t *)0x0;
      local_198 = 0;
      local_e0 = (int64_t *)0x0;
      local_170 = 0;
      local_90 = (int64_t *)0x0;
      local_80 = (int64_t *)0x0;
      local_128 = (int64_t *)0x0;
      local_118 = (int64_t *)0x0;
      local_f0 = 0;
      local_108 = (int64_t *)0x0;
      local_94 = 0;
      local_c8 = (int64_t *)0x0;
      local_100 = (int64_t *)0x0;
      local_d8 = (int64_t *)0x0;
      local_f8 = 0;
      local_130 = (int64_t *)0x0;
      local_138 = 0;
      local_178 = (int64_t *)0x0;
      local_168 = 0;
    }
    else {
      FUN_00ce6e90();
      local_e0 = local_60;
      if (local_60 == (int64_t *)0x0) {
        local_1a8 = 1;
        local_268 = (int64_t *)0x0;
        local_1b0 = 1;
        local_170 = 0;
LAB_01f72bf1:
        local_e0 = (int64_t *)0x0;
      }
      else {
        plVar8 = local_60;
        if ((char)local_58[0] == '\0') {
          FUN_00d50b00();
          if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        lVar9 = g_02800c68;
        if (g_02800c68 != 0) {
          FUN_00d50b00();
        }
        plVar20 = local_e0;
        local_4b8 = lVar9;
        local_4b0 = '\x01';
        uVar6 = (**(code **)(*local_e0 + 0x400))();
        unaff_R15 = local_60;
        if (local_60 == plVar20) {
LAB_01f72908:
          if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
            uVar6 = FUN_00d50b20();
          }
        }
        else {
          if ((char)local_58[0] == '\0') {
            if (local_60 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_e0 = unaff_R15;
            uVar6 = FUN_00d50b20();
            goto LAB_01f72908;
          }
          local_e0 = local_60;
          uVar6 = FUN_00d50b20();
          local_58[0] = local_58[0] & 0xffffff00;
          local_e0 = unaff_R15;
        }
        if ((local_4b0 != '\0') && (local_4b8 != 0)) {
          uVar6 = FUN_00d50b20();
        }
        if (local_e0 == (int64_t *)0x0) {
          local_1a8 = (uint32_t)CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
          local_268 = (int64_t *)0x0;
LAB_01f72bef:
          local_1b0 = 0;
          local_170 = 1;
          goto LAB_01f72bf1;
        }
        uVar6 = CONCAT71((int7)((uint64_t)plVar8 >> 8),1);
        local_170 = uVar6;
        cVar4 = (**(code **)(*local_e0 + 0x3a0))();
        if (cVar4 == '\0') {
          (**(code **)(*local_e0 + 0x420))();
        }
        FUN_01f27fe0();
        (**(code **)(*local_158 + 0x458))();
        local_250 = local_c0;
        local_248 = 0;
        if ((char)local_b8 == '\0') {
          if (local_c0 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_b8._0_1_ = '\0';
        }
        plVar8 = local_e0;
        local_248 = '\x01';
        uVar7 = (**(code **)(*local_e0 + 0x400))();
        unaff_R15 = local_60;
        if (local_60 == plVar8) {
LAB_01f72a69:
          if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
            uVar7 = FUN_00d50b20();
          }
        }
        else {
          if ((char)local_58[0] == '\0') {
            if (local_60 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_e0 = unaff_R15;
            uVar7 = FUN_00d50b20();
            goto LAB_01f72a69;
          }
          local_e0 = local_60;
          uVar7 = FUN_00d50b20();
          local_58[0] = local_58[0] & 0xffffff00;
          local_e0 = unaff_R15;
        }
        if ((local_248 != '\0') && (local_250 != (int64_t *)0x0)) {
          uVar7 = FUN_00d50b20();
        }
        if (((char)local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
          uVar7 = FUN_00d50b20();
        }
        if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
          uVar7 = FUN_00d50b20();
        }
        if (local_e0 == (int64_t *)0x0) {
          local_1a8 = (uint32_t)CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
          local_268 = local_e0;
          goto LAB_01f72bef;
        }
        local_170 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
        cVar4 = (**(code **)(*local_e0 + 0x3a0))();
        if (cVar4 != '\0') {
          (**(code **)(*local_e0 + 0x410))();
        }
        (**(code **)(*local_e0 + 0x420))();
        FUN_01f27fe0();
        (**(code **)(*local_c0 + 0x610))();
        local_4a8 = local_e0;
        local_4a0 = '\0';
        uVar6 = (**(code **)(*local_60 + 0x440))();
        if ((local_4a0 != '\0') && (local_4a8 != (int64_t *)0x0)) {
          uVar6 = FUN_00d50b20();
        }
        if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
          uVar6 = FUN_00d50b20();
        }
        if (((char)local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
          uVar6 = FUN_00d50b20();
        }
        local_170 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
        local_1a8 = 0;
        local_268 = local_e0;
        local_1b0 = 0;
      }
      local_180 = (int64_t *)*arg1;
      if (local_180 == (int64_t *)0x0) {
        uVar6 = 0;
        local_180 = (int64_t *)0x0;
      }
      else {
        uVar6 = CONCAT71((int7)((uint64_t)arg1 >> 8),(char)arg1[1]);
        if ((char)arg1[1] != '\0') {
          FUN_00d50b00();
        }
      }
      local_198 = uVar6;
      plVar8 = (int64_t *)FUN_00e8fc40();
      FUN_00022d50();
      uVar23 = (**(code **)(*plVar8 + 0x18))();
      local_138 = (uint64_t)*(uint *)((int64_t)local_1b8 + 0xc);
      local_188 = plVar8;
      if ((int)*(uint *)((int64_t)local_1b8 + 0xc) < 1) {
        local_168 = 0;
        local_178 = (int64_t *)0x0;
        local_e8 = 0;
        local_d0 = (int64_t *)0x0;
        plVar10 = (int64_t *)0x0;
        plVar20 = (int64_t *)0x0;
        plVar8 = (int64_t *)0x0;
        local_68 = (int64_t *)0x0;
      }
      else {
        uVar18 = 0;
        local_68 = (int64_t *)0x0;
        local_40 = (int64_t *)0x0;
        local_140 = (int64_t *)0x0;
        local_148 = (int64_t *)0x0;
        local_d0 = (int64_t *)0x0;
        local_e8 = 0;
        local_178 = (int64_t *)0x0;
        local_168 = 0;
        do {
          while( true ) {
            lVar9 = local_1b8[2];
            plVar8 = *(int64_t **)(lVar9 + uVar18 * 8);
            if (local_d0 == plVar8) {
              if (((char)local_e8 == '\0') && (local_d0 != (int64_t *)0x0)) {
                local_e8 = CONCAT71((int7)((uint64_t)lVar9 >> 8),1);
                unaff_R15 = (int64_t *)0x0;
                FUN_00d50b00();
              }
            }
            else {
              if (plVar8 != (int64_t *)0x0) {
                unaff_R15 = (int64_t *)(local_e8 & 0xffffffff);
                lVar9 = FUN_00d50b00();
              }
              if (((char)local_e8 == '\0') || (local_d0 == (int64_t *)0x0)) {
                local_e8 = CONCAT71((int7)((uint64_t)lVar9 >> 8),1);
                local_d0 = plVar8;
              }
              else {
                unaff_R15 = (int64_t *)(local_e8 & 0xffffffff);
                local_d0 = plVar8;
                uVar6 = FUN_00d50b20();
                local_e8 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
              }
            }
            (**(code **)(*local_d0 + 0x368))();
            lVar9 = g_02800c70;
            if (g_02800c70 != 0) {
              FUN_00d50b00();
            }
            local_498 = lVar9;
            local_490 = '\x01';
            cVar4 = FUN_00d8f400();
            uVar23 = extraout_XMM0_Da;
            if ((local_490 != '\0') && (local_498 != 0)) {
              uVar23 = FUN_00d50b20();
            }
            if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
              uVar23 = FUN_00d50b20();
            }
            if (cVar4 == '\0') break;
            plVar8 = (int64_t *)FUN_00e8fc40();
            FUN_00207df0();
            uVar6 = (**(code **)(*plVar8 + 0x18))();
            uVar17 = (undefined7)((uint64_t)uVar6 >> 8);
            if (plVar8 == local_178) {
              if ((char)local_168 == '\0') {
                local_168 = CONCAT71(uVar17,1);
                plVar8 = local_178;
              }
              else {
                FUN_00d50b20();
                plVar8 = local_178;
              }
            }
            else {
              bVar22 = (char)local_168 != '\0';
              local_168 = CONCAT71(uVar17,1);
              if ((bVar22) && (local_178 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            local_488 = local_d0;
            local_480 = '\0';
            local_478 = 0;
            local_470 = '\0';
            local_178 = plVar8;
            cVar4 = FUN_01e2cb90();
            if ((local_470 != '\0') && (local_478 != 0)) {
              FUN_00d50b20();
            }
            if ((local_480 != '\0') && (local_488 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            plVar20 = local_140;
            plVar8 = local_40;
            plVar10 = local_148;
            if (cVar4 != '\0') {
              FUN_01e2d190();
              plVar20 = local_140;
              uVar17 = (undefined7)((uint64_t)unaff_R15 >> 8);
              if (local_60 == local_140) {
                plVar10 = local_148;
                if (((char)local_148 == '\0') && (local_60 != (int64_t *)0x0)) {
                  plVar10 = (int64_t *)CONCAT71(uVar17,1);
                  if ((char)local_58[0] != '\0') goto LAB_01f72ff9;
                  FUN_00d50b00();
                  plVar10 = (int64_t *)CONCAT71(uVar17,1);
                }
LAB_01f72fe5:
                if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                plVar20 = local_60;
                if ((char)local_58[0] == '\0') {
                  if (local_60 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                  plVar10 = (int64_t *)CONCAT71(uVar17,1);
                  if (((char)local_148 != '\0') && (local_140 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_01f72fe5;
                }
                plVar10 = (int64_t *)CONCAT71(uVar17,1);
                if (((char)local_148 != '\0') && (local_140 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
LAB_01f72ff9:
              if (plVar20 == (int64_t *)0x0) {
                plVar20 = (int64_t *)0x0;
                plVar8 = local_40;
              }
              else {
                FUN_00e414f0();
                plVar11 = local_60;
                uVar17 = (undefined7)((uint64_t)unaff_R13 >> 8);
                if (local_60 == local_68) {
                  plVar8 = local_40;
                  if (((char)local_40 == '\0') && (local_60 != (int64_t *)0x0)) {
                    plVar8 = (int64_t *)CONCAT71(uVar17,1);
                    plVar11 = local_68;
                    if ((char)local_58[0] != '\0') goto joined_r0x01f7310e;
                    FUN_00d50b00();
                    plVar8 = (int64_t *)CONCAT71(uVar17,1);
                  }
LAB_01f730a3:
joined_r0x01f730a7:
                  plVar11 = local_68;
                  if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                    plVar11 = local_68;
                  }
                }
                else {
                  if ((char)local_58[0] == '\0') {
                    if (local_60 != (int64_t *)0x0) {
                      FUN_00d50b00();
                    }
                    plVar8 = (int64_t *)CONCAT71(uVar17,1);
                    if (((char)local_40 != '\0') && (local_68 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                      local_68 = plVar11;
                      goto LAB_01f730a3;
                    }
                    local_68 = plVar11;
                    goto joined_r0x01f730a7;
                  }
                  plVar8 = (int64_t *)CONCAT71(uVar17,1);
                  if (((char)local_40 != '\0') && (local_68 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
joined_r0x01f7310e:
                local_68 = plVar11;
                if (local_68 == (int64_t *)0x0) {
                  local_68 = (int64_t *)0x0;
                }
                else {
                  local_58[0] = local_58[0] & 0xffffff00;
                  local_60 = local_68;
                  FUN_00ca1b70();
                  if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
              }
            }
            FUN_00d403d0();
            uVar23 = FUN_00d3fc60();
            if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
              uVar23 = FUN_00d50b20();
            }
            local_40 = (int64_t *)((uint64_t)plVar8 & 0xffffffff);
            local_148 = (int64_t *)((uint64_t)plVar10 & 0xffffffff);
            uVar18 = uVar18 + 1;
            unaff_R13 = plVar8;
            unaff_R15 = plVar10;
            local_140 = plVar20;
            if (local_138 == uVar18) goto LAB_01f731a4;
          }
          uVar18 = uVar18 + 1;
          plVar20 = local_140;
          plVar8 = local_40;
          unaff_R13 = local_40;
          plVar10 = local_148;
          unaff_R15 = local_148;
        } while (local_138 != uVar18);
      }
LAB_01f731a4:
      pcVar3 = g_02572370;
      uVar1 = *(uint *)((int64_t)local_1a0 + 0xc);
      local_148 = plVar10;
      local_140 = plVar20;
      if ((int)uVar1 < 1) {
        local_138 = 0;
        local_130 = (int64_t *)0x0;
        local_f8 = 0;
        local_d8 = (int64_t *)0x0;
        local_100 = (int64_t *)0x0;
        local_c8 = (int64_t *)0x0;
        local_94 = 0;
        local_108 = (int64_t *)0x0;
        local_f0 = 0;
        local_118 = (int64_t *)0x0;
        local_128 = (int64_t *)0x0;
        local_80 = (int64_t *)0x0;
        local_90 = (int64_t *)0x0;
        local_110 = (int64_t *)0x0;
        local_88 = (int64_t *)0x0;
        local_120 = 0;
        local_b0 = (int64_t *)0x0;
        cVar4 = '\0';
        plVar20 = (int64_t *)0x0;
      }
      else {
        uVar13 = 0;
        plVar20 = (int64_t *)0x0;
        uVar18 = 0;
        local_b0 = (int64_t *)0x0;
        local_120 = 0;
        local_88 = (int64_t *)0x0;
        local_110 = (int64_t *)0x0;
        local_90 = (int64_t *)0x0;
        local_80 = (int64_t *)0x0;
        local_128 = (int64_t *)0x0;
        local_118 = (int64_t *)0x0;
        local_f0 = 0;
        local_108 = (int64_t *)0x0;
        local_94 = 0;
        local_c8 = (int64_t *)0x0;
        local_100 = (int64_t *)0x0;
        local_d8 = (int64_t *)0x0;
        local_f8 = 0;
        local_130 = (int64_t *)0x0;
        local_138 = 0;
        local_40 = plVar8;
        do {
          plVar8 = local_d0;
          lVar9 = *(int64_t *)(local_1a0[2] + uVar13 * 8);
          local_58[0] = 1;
          local_60 = &g_024c5048;
          local_48 = 0;
          local_270 = uVar13;
          local_190 = uVar18;
          if (lVar9 != 0) {
            uVar23 = FUN_00d50b00();
          }
          local_48 = '\x01';
          local_50 = lVar9;
          uVar23 = FUN_00d8cb40(uVar23,&local_60);
          local_240 = local_158;
          local_238 = 0;
          if (local_150 == '\0') {
            if (local_158 != (int64_t *)0x0) {
              uVar23 = FUN_00d50b00();
            }
          }
          else {
            local_150 = '\0';
          }
          local_238 = '\x01';
          (**(code **)(*local_1c0 + 0x400))(uVar23,&local_240);
          local_d0 = local_c0;
          plVar10 = local_c0;
          if (local_c0 == plVar8) {
            if (((char)local_e8 == '\0') && (local_c0 != (int64_t *)0x0)) {
              plVar11 = plVar8;
              if ((char)local_b8 != '\0') goto LAB_01f73433;
              local_70 = (int64_t *)
                         CONCAT44(local_70._4_4_,(int)CONCAT71((int7)((uint64_t)local_c0 >> 8),1));
              FUN_00d50b00();
              local_d0 = plVar8;
            }
            else {
              local_70 = (int64_t *)CONCAT44(local_70._4_4_,(int)local_e8);
              local_d0 = plVar8;
            }
LAB_01f7349e:
            if (((char)local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if ((char)local_b8 == '\0') {
              uVar6 = 0;
              if (local_c0 != (int64_t *)0x0) {
                uVar6 = FUN_00d50b00();
              }
              local_70 = (int64_t *)
                         CONCAT44(local_70._4_4_,(int)CONCAT71((int7)((uint64_t)uVar6 >> 8),1));
              if (((char)local_e8 != '\0') && (plVar8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_01f7349e;
            }
            plVar11 = local_d0;
            if (((char)local_e8 != '\0') && (plVar8 != (int64_t *)0x0)) {
              plVar10 = (int64_t *)FUN_00d50b20();
              plVar11 = local_d0;
            }
LAB_01f73433:
            local_d0 = plVar11;
            local_b8._0_1_ = '\0';
            local_70 = (int64_t *)
                       CONCAT44(local_70._4_4_,(int)CONCAT71((int7)((uint64_t)plVar10 >> 8),1));
          }
          if ((local_238 != '\0') && (local_240 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_78 = plVar20;
          if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_60 = &g_024c5048;
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          cVar4 = (**(code **)(*local_d0 + 0x3a0))();
          uVar23 = extraout_XMM0_Da_00;
          if (cVar4 == '\0') {
            uVar23 = (**(code **)(*local_d0 + 0x420))();
          }
          uVar18 = local_120;
          if (local_b0 != (int64_t *)0x0) {
            if ((char)local_120 == '\0') {
              uVar18 = 0;
            }
            else {
              local_b0 = (int64_t *)0x0;
              uVar23 = FUN_00d50b20();
              uVar18 = 0;
            }
          }
          plVar8 = local_110;
          if (local_88 != (int64_t *)0x0) {
            if ((char)local_110 == '\0') {
              plVar8 = (int64_t *)0x0;
            }
            else {
              local_b0 = (int64_t *)0x0;
              local_88 = (int64_t *)0x0;
              local_120 = uVar18 & 0xffffffff;
              uVar23 = FUN_00d50b20();
              plVar8 = (int64_t *)0x0;
            }
          }
          if (local_180 == (int64_t *)0x0) {
LAB_01f73870:
            local_b0 = (int64_t *)0x0;
          }
          else {
            lVar9 = *(int64_t *)(local_1a0[2] + local_270 * 8);
            local_58[0] = 1;
            local_60 = &g_024c5048;
            local_48 = 0;
            if (lVar9 != 0) {
              uVar23 = FUN_00d50b00();
            }
            local_48 = '\x01';
            local_50 = lVar9;
            uVar23 = FUN_00d8cb40(uVar23,&local_60);
            local_230 = local_158;
            local_228 = 0;
            if (local_150 == '\0') {
              if (local_158 != (int64_t *)0x0) {
                uVar23 = FUN_00d50b00();
              }
            }
            else {
              local_150 = '\0';
            }
            local_228 = '\x01';
            uVar23 = (**(code **)(*local_180 + 0x400))(uVar23,&local_230);
            plVar20 = local_c0;
            if ((char)local_b8 == '\0') {
              if (((local_c0 != (int64_t *)0x0) &&
                  (uVar23 = FUN_00d50b00(), (char)local_b8 != '\0')) &&
                 (local_c0 != (int64_t *)0x0)) {
                uVar23 = FUN_00d50b20();
              }
            }
            else {
              local_b8._0_1_ = '\0';
            }
            if ((local_228 != '\0') && (local_230 != (int64_t *)0x0)) {
              uVar23 = FUN_00d50b20();
            }
            if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
              uVar23 = FUN_00d50b20();
            }
            local_60 = &g_024c5048;
            if ((local_48 != '\0') && (local_50 != 0)) {
              uVar23 = FUN_00d50b20();
            }
            if (plVar20 == (int64_t *)0x0) goto LAB_01f73870;
            cVar4 = (**(code **)(*plVar20 + 0x3a0))();
            lVar9 = g_02800c78;
            if (cVar4 == '\0') {
              local_b0 = (int64_t *)0x0;
              goto LAB_01f73a50;
            }
            uVar23 = extraout_XMM0_Da_01;
            if (g_02800c78 != 0) {
              uVar23 = FUN_00d50b00();
            }
            local_468 = lVar9;
            local_460 = '\x01';
            uVar23 = (**(code **)(*plVar20 + 0x400))(uVar23,&local_468);
            plVar10 = local_60;
            plVar11 = plVar20;
            if (plVar20 == local_60) {
joined_r0x01f737d0:
              plVar10 = plVar11;
              if (((char)local_58[0] != '\0') && (plVar20 != (int64_t *)0x0)) {
                uVar23 = FUN_00d50b20();
              }
            }
            else {
              if ((char)local_58[0] == '\0') {
                if (local_60 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
                uVar23 = FUN_00d50b20();
                plVar11 = plVar10;
                plVar20 = local_60;
                goto joined_r0x01f737d0;
              }
              uVar23 = FUN_00d50b20();
              local_58[0] = local_58[0] & 0xffffff00;
            }
            if ((local_460 != '\0') && (local_468 != 0)) {
              uVar23 = FUN_00d50b20();
            }
            if (plVar10 == (int64_t *)0x0) goto LAB_01f73870;
            cVar4 = (**(code **)(*plVar10 + 0x398))();
            if (cVar4 == '\0') {
              local_b0 = (int64_t *)0x0;
            }
            else {
              local_450 = '\0';
              local_458 = plVar10;
              uVar23 = FUN_00ca94c0();
              local_b0 = local_60;
              if (local_60 == (int64_t *)0x0) {
                local_b0 = (int64_t *)0x0;
              }
              else {
                uVar17 = (undefined7)(uVar18 >> 8);
                if ((char)local_58[0] == '\0') {
                  uVar23 = FUN_00d50b00();
                  uVar18 = CONCAT71(uVar17,1);
                  if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
                    uVar23 = FUN_00d50b20();
                  }
                }
                else {
                  local_58[0] = local_58[0] & 0xffffff00;
                  uVar18 = CONCAT71(uVar17,1);
                }
              }
              if ((local_450 != '\0') && (local_458 != (int64_t *)0x0)) {
                uVar23 = FUN_00d50b20();
              }
              plVar20 = g_0277d5a0;
              if (local_b0 == (int64_t *)0x0) {
                local_b0 = (int64_t *)0x0;
              }
              else {
                local_88 = (int64_t *)CONCAT44(local_88._4_4_,(int)uVar18);
                if (g_0277d5a0 != (int64_t *)0x0) {
                  uVar23 = FUN_00d50b00();
                }
                local_448 = plVar20;
                local_440 = '\x01';
                FUN_000175c0(uVar23,&local_448);
                plVar20 = local_60;
                if ((g_026fdd40 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
                  ___cxa_guard_release();
                }
                pplVar14 = (int64_t **)&g_02802688;
                if (plVar20 != (int64_t *)0x0) {
                  (**(code **)(*plVar20 + 0x360))();
                  cVar4 = FUN_00e85ea0();
                  pplVar14 = &local_60;
                  if (cVar4 == '\0') {
                    pplVar14 = (int64_t **)&g_02802688;
                  }
                }
                plVar10 = *pplVar14;
                if (plVar10 == local_b0) {
                  if (((char)local_88 == '\0') && (plVar10 != (int64_t *)0x0)) {
                    plVar10 = local_b0;
                    if (*(char *)(pplVar14 + 1) == '\0') {
                      FUN_00d50b00();
                      goto LAB_01f73a19;
                    }
                    goto LAB_01f73a12;
                  }
                  uVar18 = (uint64_t)local_88 & 0xffffffff;
                  cVar4 = (char)local_58[0];
                }
                else {
                  if (*(char *)(pplVar14 + 1) == '\0') {
                    if (plVar10 != (int64_t *)0x0) {
                      FUN_00d50b00();
                    }
                    if ((char)local_88 != '\0') {
                      FUN_00d50b20();
                      local_b0 = plVar10;
                      goto LAB_01f73a19;
                    }
                    local_b0 = plVar10;
                  }
                  else {
                    if ((char)local_88 != '\0') {
                      FUN_00d50b20();
                    }
LAB_01f73a12:
                    local_b0 = plVar10;
                    *(void*)(pplVar14 + 1) = 0;
LAB_01f73a19:
                  }
                  uVar18 = CONCAT71((int7)((uint64_t)plVar20 >> 8),1);
                  cVar4 = (char)local_58[0];
                }
                if ((cVar4 != '\0') && (local_60 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_440 != '\0') && (local_448 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
LAB_01f73a50:
            uVar23 = FUN_00d50b20();
          }
          plVar20 = (int64_t *)*param_2;
          local_120 = uVar18;
          if (plVar20 == (int64_t *)0x0) {
LAB_01f73d10:
            local_88 = (int64_t *)0x0;
          }
          else {
            lVar9 = *(int64_t *)(local_1a0[2] + local_270 * 8);
            local_58[0] = 1;
            local_60 = &g_024c5048;
            local_48 = 0;
            if (lVar9 != 0) {
              uVar23 = FUN_00d50b00();
            }
            local_48 = '\x01';
            local_50 = lVar9;
            uVar23 = FUN_00d8cb40(uVar23,&local_60);
            local_220 = local_158;
            local_218 = 0;
            if (local_150 == '\0') {
              if (local_158 != (int64_t *)0x0) {
                uVar23 = FUN_00d50b00();
              }
            }
            else {
              local_150 = '\0';
            }
            local_218 = '\x01';
            (**(code **)(*plVar20 + 0x400))(uVar23,&local_220);
            plVar20 = local_c0;
            if ((char)local_b8 == '\0') {
              if (((local_c0 != (int64_t *)0x0) && (FUN_00d50b00(), (char)local_b8 != '\0')) &&
                 (local_c0 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_b8._0_1_ = '\0';
            }
            if ((local_218 != '\0') && (local_220 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            local_60 = &g_024c5048;
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if (plVar20 == (int64_t *)0x0) goto LAB_01f73d10;
            cVar4 = (**(code **)(*plVar20 + 0x3a0))();
            lVar9 = g_0277d640;
            if (cVar4 == '\0') {
              local_88 = (int64_t *)0x0;
              goto LAB_01f73ec0;
            }
            uVar23 = extraout_XMM0_Da_02;
            if (g_0277d640 != 0) {
              uVar23 = FUN_00d50b00();
            }
            local_438 = lVar9;
            local_430 = '\x01';
            (**(code **)(*plVar20 + 0x400))(uVar23,&local_438);
            plVar10 = local_60;
            plVar11 = plVar20;
            if (plVar20 == local_60) {
joined_r0x01f73c6d:
              plVar10 = plVar11;
              if (((char)local_58[0] != '\0') && (plVar20 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              if ((char)local_58[0] == '\0') {
                if (local_60 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
                FUN_00d50b20();
                plVar11 = plVar10;
                plVar20 = local_60;
                goto joined_r0x01f73c6d;
              }
              FUN_00d50b20();
              local_58[0] = local_58[0] & 0xffffff00;
            }
            if ((local_430 != '\0') && (local_438 != 0)) {
              FUN_00d50b20();
            }
            if (plVar10 == (int64_t *)0x0) goto LAB_01f73d10;
            cVar4 = (**(code **)(*plVar10 + 0x398))();
            if (cVar4 == '\0') {
              local_88 = (int64_t *)0x0;
            }
            else {
              local_420 = '\0';
              local_428 = plVar10;
              uVar23 = FUN_00ca94c0();
              local_88 = local_60;
              if (local_60 == (int64_t *)0x0) {
                local_88 = (int64_t *)0x0;
                uVar19 = (uint)plVar8;
              }
              else {
                uVar17 = (undefined7)(uVar18 >> 8);
                if ((char)local_58[0] == '\0') {
                  uVar23 = FUN_00d50b00();
                  uVar19 = (uint)CONCAT71(uVar17,1);
                  if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
                    uVar23 = FUN_00d50b20();
                  }
                }
                else {
                  local_58[0] = local_58[0] & 0xffffff00;
                  uVar19 = (uint)CONCAT71(uVar17,1);
                }
              }
              if ((local_420 != '\0') && (local_428 != (int64_t *)0x0)) {
                uVar23 = FUN_00d50b20();
              }
              plVar20 = g_0277d5a0;
              if (local_88 == (int64_t *)0x0) {
                local_88 = (int64_t *)0x0;
                plVar8 = (int64_t *)(uint64_t)uVar19;
              }
              else {
                if (g_0277d5a0 != (int64_t *)0x0) {
                  uVar23 = FUN_00d50b00();
                }
                local_418 = plVar20;
                local_410 = '\x01';
                FUN_000175c0(uVar23,&local_418);
                plVar20 = local_60;
                if ((g_026fdd40 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
                  ___cxa_guard_release();
                }
                pplVar14 = (int64_t **)&g_02802688;
                if (plVar20 != (int64_t *)0x0) {
                  (**(code **)(*plVar20 + 0x360))();
                  cVar4 = FUN_00e85ea0();
                  pplVar14 = &local_60;
                  if (cVar4 == '\0') {
                    pplVar14 = (int64_t **)&g_02802688;
                  }
                }
                plVar20 = *pplVar14;
                cVar4 = (char)uVar19;
                if (plVar20 == local_88) {
                  if ((cVar4 == '\0') && (plVar20 != (int64_t *)0x0)) {
                    plVar20 = local_88;
                    if (*(char *)(pplVar14 + 1) == '\0') {
                      FUN_00d50b00();
                      goto LAB_01f73e89;
                    }
                    goto LAB_01f73e82;
                  }
                  plVar8 = (int64_t *)(uint64_t)uVar19;
                  cVar4 = (char)local_58[0];
                }
                else {
                  if (*(char *)(pplVar14 + 1) == '\0') {
                    if (plVar20 != (int64_t *)0x0) {
                      FUN_00d50b00();
                    }
                    if (cVar4 != '\0') {
                      FUN_00d50b20();
                      local_88 = plVar20;
                      goto LAB_01f73e89;
                    }
                    local_88 = plVar20;
                  }
                  else {
                    if (cVar4 != '\0') {
                      FUN_00d50b20();
                    }
LAB_01f73e82:
                    local_88 = plVar20;
                    *(void*)(pplVar14 + 1) = 0;
LAB_01f73e89:
                  }
                  plVar8 = (int64_t *)CONCAT71((int7)((uint64_t)plVar8 >> 8),1);
                  cVar4 = (char)local_58[0];
                }
                if ((cVar4 != '\0') && (local_60 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_410 != '\0') && (local_418 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
LAB_01f73ec0:
            FUN_00d50b20();
          }
          local_110 = plVar8;
          cVar4 = (**(code **)(*local_d0 + 0x3a0))();
          uVar18 = local_190;
          lVar9 = g_0277d640;
          if (cVar4 == '\0') {
            local_e8 = (uint64_t)local_70 & 0xffffffff;
            plVar20 = local_78;
            uVar18 = local_190;
            plVar10 = local_68;
            plVar8 = local_40;
            uVar23 = extraout_XMM0_Da_03;
          }
          else {
            uVar23 = extraout_XMM0_Da_03;
            if (g_0277d640 != 0) {
              uVar23 = FUN_00d50b00();
            }
            plVar10 = local_d0;
            local_408 = lVar9;
            local_400 = '\x01';
            uVar6 = (**(code **)(*local_d0 + 0x400))(uVar23,&local_408);
            plVar20 = local_60;
            if (local_60 == plVar10) {
              if (((char)local_70 == '\0') && (local_60 != (int64_t *)0x0)) {
                if ((char)local_58[0] == '\0') {
                  local_e8 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
                  FUN_00d50b00();
                  goto LAB_01f73fb3;
                }
                goto LAB_01f73fd4;
              }
              local_e8 = (uint64_t)local_70 & 0xffffffff;
joined_r0x01f73fc9:
              if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              if ((char)local_58[0] == '\0') {
                if (local_60 != (int64_t *)0x0) {
                  uVar6 = FUN_00d50b00();
                }
                local_e8 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
                if ((char)local_70 == '\0') {
                  local_d0 = plVar20;
                }
                else {
                  FUN_00d50b20();
                  local_d0 = plVar20;
LAB_01f73fb3:
                }
                goto joined_r0x01f73fc9;
              }
              if ((char)local_70 == '\0') {
                local_d0 = local_60;
              }
              else {
                uVar6 = FUN_00d50b20();
                local_d0 = plVar20;
              }
LAB_01f73fd4:
              local_58[0] = local_58[0] & 0xffffff00;
              local_e8 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
            }
            if ((local_400 != '\0') && (local_408 != 0)) {
              FUN_00d50b20();
            }
            if ((char)local_278 == '\0') {
              local_70 = (int64_t *)CONCAT44(local_70._4_4_,(int)local_e8);
              cVar4 = (**(code **)(*local_d0 + 0x398))();
              uVar18 = local_190;
              if (cVar4 == '\0') goto LAB_01f74130;
              local_3f8 = local_d0;
              local_3f0 = '\0';
              uVar23 = FUN_00de36c0();
              plVar20 = local_60;
              if ((g_026fdd40 == '\0') &&
                 (iVar5 = ___cxa_guard_acquire(), uVar23 = extraout_XMM0_Da_30, iVar5 != 0)) {
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
                uVar23 = ___cxa_guard_release();
                uVar18 = local_190;
              }
              pplVar14 = (int64_t **)&g_02802688;
              if (plVar20 != (int64_t *)0x0) {
                (**(code **)(*plVar20 + 0x360))();
                cVar4 = FUN_00e85ea0();
                pplVar14 = (int64_t **)&g_02802688;
                uVar23 = extraout_XMM0_Da_04;
                if (cVar4 != '\0') {
                  if ((g_026fd0c0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
                    uVar18 = local_190;
                  }
                  cVar4 = FUN_00e8db60();
                  pplVar14 = &local_60;
                  uVar23 = extraout_XMM0_Da_05;
                  if (cVar4 == '\0') {
                    pplVar14 = (int64_t **)&g_02802688;
                  }
                }
              }
              plVar10 = local_78;
              local_a8 = *pplVar14;
              cVar4 = (char)uVar18;
              if (local_a8 == local_78) {
                if ((cVar4 != '\0') || (local_a8 == (int64_t *)0x0)) {
                  local_a0 = uVar18 & 0xffffffff;
                  local_a8 = local_78;
                  goto LAB_01f742e0;
                }
                if (*(char *)(pplVar14 + 1) != '\0') {
                  local_a8 = local_78;
                  goto LAB_01f74287;
                }
                local_a0 = CONCAT71((int7)((uint64_t)local_a8 >> 8),1);
                uVar23 = FUN_00d50b00();
                local_a8 = plVar10;
              }
              else if (*(char *)(pplVar14 + 1) == '\0') {
                uVar6 = 0;
                if (local_a8 != (int64_t *)0x0) {
                  uVar6 = FUN_00d50b00();
                  uVar23 = extraout_XMM0_Da_12;
                }
                local_a0 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
                if ((cVar4 != '\0') && (local_78 != (int64_t *)0x0)) {
                  uVar23 = FUN_00d50b20();
                }
LAB_01f742e0:
              }
              else {
                plVar10 = local_a8;
                if ((cVar4 != '\0') && (local_78 != (int64_t *)0x0)) {
                  plVar10 = (int64_t *)FUN_00d50b20();
                  uVar23 = extraout_XMM0_Da_06;
                }
LAB_01f74287:
                *(void*)(pplVar14 + 1) = 0;
                local_a0 = CONCAT71((int7)((uint64_t)plVar10 >> 8),1);
              }
              if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
                uVar23 = FUN_00d50b20();
              }
              if ((local_3f0 != '\0') && (local_3f8 != (int64_t *)0x0)) {
                uVar23 = FUN_00d50b20();
              }
              plVar10 = g_0277d5a0;
              if (local_a8 == (int64_t *)0x0) goto LAB_01f7416a;
            }
            else {
LAB_01f74130:
              if (local_78 == (int64_t *)0x0) {
                local_a0 = uVar18 & 0xffffffff;
              }
              else {
                local_a0 = 0;
                if ((char)uVar18 != '\0') {
                  local_a0 = 0;
                  local_70 = (int64_t *)CONCAT44(local_70._4_4_,(int)local_e8);
                  local_78 = (int64_t *)0x0;
                  FUN_00d50b20();
                }
              }
LAB_01f7416a:
              plVar10 = (int64_t *)FUN_00e8fc40();
              FUN_00022d50();
              (**(code **)(*plVar10 + 0x18))();
              local_a8 = plVar10;
              FUN_01f27fe0();
              (**(code **)(*local_158 + 0x6a8))();
              plVar10 = local_c0;
              if ((char)local_b8 == '\0') {
                if (local_c0 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_b8._0_1_ = '\0';
              }
              local_60 = plVar10;
              local_58[0] = local_58[0] & 0xffffff00;
              uVar6 = FUN_00ca1b70();
              uVar23 = extraout_XMM0_Da_07;
              if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
                uVar6 = FUN_00d50b20();
                uVar23 = extraout_XMM0_Da_08;
              }
              if (plVar10 != (int64_t *)0x0) {
                uVar6 = FUN_00d50b20();
                uVar23 = extraout_XMM0_Da_09;
              }
              if (((char)local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
                uVar6 = FUN_00d50b20();
                uVar23 = extraout_XMM0_Da_10;
              }
              if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
                uVar6 = FUN_00d50b20();
                uVar23 = extraout_XMM0_Da_11;
              }
              local_a0 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
              plVar10 = g_0277d5a0;
            }
            g_0277d5a0 = plVar10;
            if (plVar10 != (int64_t *)0x0) {
              uVar23 = FUN_00d50b00();
            }
            local_3e0 = '\x01';
            local_3e8 = plVar10;
            FUN_000175c0(uVar23,&local_3e8);
            local_70 = local_60;
            if (local_60 == local_68) {
              local_78 = local_40;
              plVar10 = local_68;
              if (((char)local_40 != '\0') || (local_60 == (int64_t *)0x0))
              goto joined_r0x01f75ad5;
              if ((char)local_58[0] != '\0') {
                local_70 = local_68;
                goto LAB_01f743aa;
              }
              local_78 = (int64_t *)CONCAT71((int7)((uint64_t)local_60 >> 8),1);
              FUN_00d50b00();
              local_70 = plVar10;
              if ((char)local_58[0] == '\0') goto LAB_01f74404;
LAB_01f743f6:
              if (local_60 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
            }
            else if ((char)local_58[0] == '\0') {
              uVar6 = 0;
              if (local_60 != (int64_t *)0x0) {
                uVar6 = FUN_00d50b00();
              }
              local_78 = (int64_t *)CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
              if (((char)local_40 != '\0') && (local_68 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              plVar10 = local_70;
joined_r0x01f75ad5:
              local_70 = plVar10;
              if ((char)local_58[0] != '\0') goto LAB_01f743f6;
            }
            else {
              plVar10 = local_60;
              if (((char)local_40 != '\0') && (local_68 != (int64_t *)0x0)) {
                plVar10 = (int64_t *)FUN_00d50b20();
              }
LAB_01f743aa:
              local_58[0] = local_58[0] & 0xffffff00;
              local_78 = (int64_t *)CONCAT71((int7)((uint64_t)plVar10 >> 8),1);
            }
LAB_01f74404:
            if ((local_3e0 != '\0') && (local_3e8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (local_70 == (int64_t *)0x0) {
              plVar11 = (int64_t *)FUN_00e8fc40();
              FUN_00022d50();
              uVar23 = (**(code **)(*plVar11 + 0x18))();
              plVar10 = g_0277d5a0;
              local_3d0 = '\0';
              local_3d8 = plVar11;
              local_70 = plVar11;
              if (g_0277d5a0 != (int64_t *)0x0) {
                uVar23 = FUN_00d50b00();
              }
              local_60 = plVar10;
              local_58[0] = local_58[0] & 0xffffff00;
              uVar6 = FUN_00ca0840(uVar23,&local_60);
              if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
                uVar6 = FUN_00d50b20();
              }
              if (plVar10 != (int64_t *)0x0) {
                uVar6 = FUN_00d50b20();
              }
              local_78 = (int64_t *)CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
              if ((local_3d0 != '\0') && (local_3d8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            uVar23 = FUN_00c9fe20();
            plVar10 = local_60;
            local_c0 = (int64_t *)CONCAT71(local_c0._1_7_,(char)local_58[0]);
            pplVar14 = (int64_t **)local_58;
            if ((char)local_58[0] == '\0') {
              pplVar14 = &local_c0;
            }
            *(void*)pplVar14 = 0;
            if (((char)local_58[0] != '\0') && (plVar10 != (int64_t *)0x0)) {
              uVar23 = FUN_00d50b20();
            }
            if (plVar10 == local_128) {
              plVar11 = local_128;
              if (((char)local_c0 != '\0') && (plVar10 != (int64_t *)0x0)) {
                uVar23 = FUN_00d50b20();
                plVar11 = local_128;
              }
            }
            else {
              plVar11 = plVar10;
              if ((char)local_c0 == '\0') {
                if (plVar10 != (int64_t *)0x0) {
                  uVar23 = FUN_00d50b00();
                }
                if (local_128 != (int64_t *)0x0) {
                  uVar23 = FUN_00d50b20();
                }
              }
              else if (local_128 != (int64_t *)0x0) {
                uVar23 = FUN_00d50b20();
              }
            }
            local_128 = plVar11;
            if (local_128 != (int64_t *)0x0) {
              local_68 = (int64_t *)(uint64_t)*(uint *)((int64_t)local_128 + 0xc);
              if (0 < (int)*(uint *)((int64_t)local_128 + 0xc)) {
                plVar10 = (int64_t *)0x0;
                do {
                  lVar9 = local_128[2];
                  plVar11 = *(int64_t **)(lVar9 + (int64_t)plVar10 * 8);
                  if (local_d8 == plVar11) {
                    plVar12 = local_d8;
                    if (((char)local_f8 == '\0') && (plVar11 != (int64_t *)0x0)) {
                      local_f8 = CONCAT71((int7)((uint64_t)lVar9 >> 8),1);
                      uVar23 = FUN_00d50b00();
                      plVar12 = local_d8;
                    }
                  }
                  else {
                    if (plVar11 != (int64_t *)0x0) {
                      lVar9 = FUN_00d50b00();
                      uVar23 = extraout_XMM0_Da_13;
                    }
                    bVar22 = (char)local_f8 != '\0';
                    local_f8 = CONCAT71((int7)((uint64_t)lVar9 >> 8),1);
                    plVar12 = plVar11;
                    if ((bVar22) && (local_d8 != (int64_t *)0x0)) {
                      uVar23 = FUN_00d50b20();
                    }
                  }
                  local_3c0 = '\0';
                  local_3c8 = plVar12;
                  local_d8 = plVar12;
                  uVar6 = FUN_000175c0(uVar23,&local_3c8);
                  plVar12 = local_60;
                  plVar11 = local_108;
                  uVar23 = extraout_XMM0_Da_14;
                  if (local_108 == local_60) {
                    if (((char)local_94 == '\0') && (local_108 != (int64_t *)0x0)) {
                      plVar12 = local_108;
                      if ((char)local_58[0] != '\0') goto LAB_01f746f4;
                      local_94 = 0;
                      uVar23 = FUN_00d50b00();
                      goto LAB_01f74790;
                    }
                    plVar20 = (int64_t *)(uint64_t)local_94;
joined_r0x01f74767:
                    uVar19 = (uint)plVar20;
                    plVar12 = plVar11;
                    if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
                      uVar23 = FUN_00d50b20();
                    }
                  }
                  else {
                    if ((char)local_58[0] == '\0') {
                      if (local_60 != (int64_t *)0x0) {
                        uVar23 = FUN_00d50b00();
                      }
                      plVar11 = plVar12;
                      if (((char)local_94 != '\0') && (local_108 != (int64_t *)0x0)) {
                        local_108 = plVar12;
                        uVar23 = FUN_00d50b20();
                      }
LAB_01f74790:
                      plVar20 = (int64_t *)CONCAT71((int7)((uint64_t)plVar20 >> 8),1);
                      goto joined_r0x01f74767;
                    }
                    if (((char)local_94 != '\0') && (local_108 != (int64_t *)0x0)) {
                      local_108 = local_60;
                      uVar6 = FUN_00d50b20();
                      uVar23 = extraout_XMM0_Da_15;
                    }
LAB_01f746f4:
                    local_58[0] = local_58[0] & 0xffffff00;
                    uVar19 = (uint)CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
                  }
                  local_108 = plVar12;
                  local_94 = uVar19;
                  if ((local_3c0 != '\0') && (local_3c8 != (int64_t *)0x0)) {
                    uVar23 = FUN_00d50b20();
                  }
                  plVar11 = plVar20;
                  if (local_c8 == (int64_t *)0x0) {
                    local_40 = (int64_t *)CONCAT44(local_40._4_4_,(int)local_100);
                    if (local_b0 != (int64_t *)0x0) goto LAB_01f74810;
joined_r0x01f748c4:
                    plVar20 = (int64_t *)0x0;
                    plVar12 = plVar10;
                    if (local_88 == (int64_t *)0x0) goto LAB_01f74da0;
LAB_01f74c10:
                    local_398 = local_d8;
                    local_390 = '\0';
                    FUN_000175c0(uVar23,&local_398);
                    plVar11 = local_60;
                    if ((g_027048b0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
                    pplVar14 = (int64_t **)&g_02802688;
                    if (plVar11 != (int64_t *)0x0) {
                      (**(code **)(*plVar11 + 0x360))();
                      cVar4 = FUN_00e85ea0();
                      pplVar14 = &local_60;
                      if (cVar4 == '\0') {
                        pplVar14 = (int64_t **)&g_02802688;
                      }
                    }
                    plVar11 = *pplVar14;
                    if (*(char *)(pplVar14 + 1) == '\0') {
                      if (plVar11 != (int64_t *)0x0) {
                        FUN_00d50b00();
                      }
                    }
                    else {
                      *(void*)(pplVar14 + 1) = 0;
                    }
                    if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_390 != '\0') && (local_398 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    plVar12 = plVar10;
                    if (plVar11 == (int64_t *)0x0) goto LAB_01f74da0;
                    FUN_00d23340();
                    plVar8 = local_60;
                    local_b8._0_1_ = 0;
                    local_c0 = local_60;
                    pplVar14 = &local_b8;
                    if ((char)local_58[0] != '\0') {
                      local_b8._0_1_ = 1;
                      pplVar14 = (int64_t **)local_58;
                    }
                    local_b8._0_1_ = (char)local_58[0] != '\0';
                    *(void*)pplVar14 = 0;
                    if (((char)local_58[0] != '\0') && (plVar8 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((g_026fd0c0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
                    pplVar14 = (int64_t **)&g_02802688;
                    if (plVar8 != (int64_t *)0x0) {
                      (**(code **)(*plVar8 + 0x360))();
                      cVar4 = FUN_00e85ea0();
                      pplVar14 = &local_c0;
                      if (cVar4 == '\0') {
                        pplVar14 = (int64_t **)&g_02802688;
                      }
                    }
                    plVar8 = *pplVar14;
                    local_c8 = plVar8;
                    if (plVar8 == plVar20) {
                      local_c8 = plVar20;
                      if (((char)local_40 == '\0') && (plVar8 != (int64_t *)0x0)) {
                        if (*(char *)(pplVar14 + 1) != '\0') goto LAB_01f74dda;
                        local_100 = (int64_t *)CONCAT71((int7)((uint64_t)plVar8 >> 8),1);
                        local_c8 = plVar8;
                        FUN_00d50b00();
                        local_c8 = plVar20;
                      }
                      else {
                        local_100 = (int64_t *)((uint64_t)local_40 & 0xffffffff);
                      }
                    }
                    else if (*(char *)(pplVar14 + 1) == '\0') {
                      uVar6 = 0;
                      if (plVar8 != (int64_t *)0x0) {
                        uVar6 = FUN_00d50b00();
                      }
                      local_100 = (int64_t *)CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
                      if (((char)local_40 != '\0') && (plVar20 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    else {
                      if (((char)local_40 != '\0') && (plVar20 != (int64_t *)0x0)) {
                        plVar8 = (int64_t *)FUN_00d50b20();
                      }
LAB_01f74dda:
                      *(void*)(pplVar14 + 1) = 0;
                      local_100 = (int64_t *)CONCAT71((int7)((uint64_t)plVar8 >> 8),1);
                    }
                    if (((char)local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    FUN_00d50b20();
                  }
                  else {
                    if ((char)local_100 != '\0') {
                      uVar23 = FUN_00d50b20();
                    }
                    local_40 = (int64_t *)((uint64_t)local_40 & 0xffffffff00000000);
                    if (local_b0 == (int64_t *)0x0) goto joined_r0x01f748c4;
LAB_01f74810:
                    uVar23 = FUN_00c9fe20();
                    plVar12 = local_60;
                    local_c0 = (int64_t *)CONCAT71(local_c0._1_7_,(char)local_58[0]);
                    pplVar14 = (int64_t **)local_58;
                    if ((char)local_58[0] == '\0') {
                      pplVar14 = &local_c0;
                    }
                    *(void*)pplVar14 = 0;
                    if (((char)local_58[0] != '\0') && (plVar12 != (int64_t *)0x0)) {
                      uVar23 = FUN_00d50b20();
                    }
                    uVar17 = (undefined7)((uint64_t)plVar20 >> 8);
                    if (plVar12 == local_118) {
                      if (((char)local_f0 == '\0') && (plVar12 != (int64_t *)0x0)) {
                        plVar12 = local_118;
                        if ((char)local_c0 == '\0') {
                          uVar23 = FUN_00d50b00();
                          plVar12 = local_118;
                        }
joined_r0x01f74939:
                        plVar11 = (int64_t *)CONCAT71(uVar17,1);
                        local_118 = plVar12;
                      }
                      else {
                        if (((char)local_c0 == '\0') || (plVar12 == (int64_t *)0x0)) {
                          plVar11 = (int64_t *)(local_f0 & 0xffffffff);
                          goto joined_r0x01f74e3b;
                        }
                        uVar23 = FUN_00d50b20();
                        plVar11 = (int64_t *)(local_f0 & 0xffffffff);
                      }
joined_r0x01f74939:
                      if (local_118 != (int64_t *)0x0) goto LAB_01f749d5;
LAB_01f7497c:
                      plVar20 = (int64_t *)0x0;
                      local_f0 = (uint64_t)plVar11 & 0xffffffff;
                      local_118 = (int64_t *)0x0;
                    }
                    else {
                      if ((char)local_c0 == '\0') {
                        if (plVar12 != (int64_t *)0x0) {
                          uVar23 = FUN_00d50b00();
                        }
                        plVar11 = (int64_t *)CONCAT71(uVar17,1);
                        if ((char)local_f0 != '\0') {
                          if (local_118 == (int64_t *)0x0) goto joined_r0x01f74939;
                          uVar23 = FUN_00d50b20();
                          local_118 = plVar12;
                          goto joined_r0x01f74939;
                        }
                      }
                      else {
                        plVar11 = (int64_t *)CONCAT71(uVar17,1);
                        if (((char)local_f0 != '\0') && (local_118 != (int64_t *)0x0)) {
                          uVar23 = FUN_00d50b20();
                          local_118 = plVar12;
                          goto joined_r0x01f74939;
                        }
                      }
                      plVar11 = (int64_t *)CONCAT71(uVar17,1);
                      local_118 = plVar12;
joined_r0x01f74e3b:
                      if (local_118 == (int64_t *)0x0) goto LAB_01f7497c;
LAB_01f749d5:
                      local_c8 = (int64_t *)(uint64_t)*(uint *)((int64_t)local_118 + 0xc);
                      if ((int)*(uint *)((int64_t)local_118 + 0xc) < 1) {
                        local_f0 = (uint64_t)plVar11 & 0xffffffff;
                        goto joined_r0x01f748c4;
                      }
                      local_f0 = CONCAT71(local_f0._1_7_,(char)plVar11);
                      pdVar21 = &MACH_HEADER.magic;
                      plVar11 = local_130;
                      local_100 = plVar10;
                      do {
                        pdVar21 = (dword *)((int64_t)pdVar21 + 1);
                        plVar20 = *(int64_t **)(local_118[2] + -8 + (int64_t)pdVar21 * 8);
                        uVar17 = (undefined7)((uint64_t)plVar8 >> 8);
                        local_130 = plVar11;
                        if (plVar11 == plVar20) {
                          if ((char)local_138 == '\0') {
                            if (plVar11 == (int64_t *)0x0) {
                              plVar8 = (int64_t *)(local_138 & 0xffffffff);
                            }
                            else {
                              plVar8 = (int64_t *)CONCAT71(uVar17,1);
                              local_138 = 0;
                              FUN_00d50b00();
                            }
                          }
                          else {
                            plVar8 = (int64_t *)(local_138 & 0xffffffff);
                          }
                        }
                        else {
                          if (plVar20 != (int64_t *)0x0) {
                            FUN_00d50b00();
                          }
                          plVar8 = (int64_t *)CONCAT71(uVar17,1);
                          plVar11 = plVar20;
                          if (((char)local_138 != '\0') && (local_130 != (int64_t *)0x0)) {
                            local_130 = plVar20;
                            FUN_00d50b20();
                          }
                        }
                        local_3b8 = local_108;
                        local_3b0 = '\0';
                        cVar4 = FUN_00d90870();
                        uVar23 = extraout_XMM0_Da_16;
                        if ((local_3b0 != '\0') && (local_3b8 != (int64_t *)0x0)) {
                          uVar23 = FUN_00d50b20();
                        }
                        if (cVar4 == '\0') {
                          plVar20 = (int64_t *)0x0;
                        }
                        else {
                          local_3a0 = '\0';
                          local_3a8 = plVar11;
                          uVar6 = FUN_000175c0(uVar23,&local_3a8);
                          plVar20 = local_60;
                          uVar23 = extraout_XMM0_Da_17;
                          if (local_60 == (int64_t *)0x0) {
                            plVar20 = (int64_t *)0x0;
                          }
                          else if ((char)local_58[0] == '\0') {
                            uVar6 = FUN_00d50b00();
                            local_40 = (int64_t *)
                                       CONCAT44(local_40._4_4_,
                                                (int)CONCAT71((int7)((uint64_t)uVar6 >> 8),1));
                            uVar23 = extraout_XMM0_Da_18;
                            if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
                              uVar23 = FUN_00d50b20();
                            }
                          }
                          else {
                            local_58[0] = local_58[0] & 0xffffff00;
                            local_40 = (int64_t *)
                                       CONCAT44(local_40._4_4_,
                                                (int)CONCAT71((int7)((uint64_t)uVar6 >> 8),1));
                          }
                          if ((local_3a0 != '\0') && (local_3a8 != (int64_t *)0x0)) {
                            uVar23 = FUN_00d50b20();
                          }
                        }
                      } while ((plVar20 == (int64_t *)0x0) &&
                              (local_138 = (uint64_t)plVar8 & 0xffffffff, pdVar21 < local_c8));
                      local_138 = (uint64_t)plVar8 & 0xffffffff;
                      local_f0 = CONCAT71((int7)(local_138 >> 8),(char)local_f0);
                      plVar10 = local_100;
                      local_130 = plVar11;
                    }
                    plVar12 = plVar10;
                    if (local_88 != (int64_t *)0x0) goto LAB_01f74c10;
LAB_01f74da0:
                    local_100 = (int64_t *)((uint64_t)local_40 & 0xffffffff);
                    plVar10 = plVar8;
                    local_c8 = plVar20;
                  }
                  local_60 = local_d8;
                  local_58[0] = local_58[0] & 0xffffff00;
                  cVar4 = FUN_00ca18c0();
                  uVar23 = extraout_XMM0_Da_19;
                  if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
                    uVar23 = FUN_00d50b20();
                  }
                  if (cVar4 == '\0') {
                    plVar8 = (int64_t *)FUN_00e8fc40();
                    FUN_00d4ff40();
                    *plVar8 = (int64_t)&g_02572358;
                    (*pcVar3)();
                    plVar20 = local_80;
                    if (plVar8 == local_90) {
                      if ((char)local_80 == '\0') {
                        plVar20 = (int64_t *)CONCAT71((int7)((uint64_t)local_80 >> 8),1);
                        plVar8 = local_90;
                        goto joined_r0x01f751b0;
                      }
                      FUN_00d50b20();
LAB_01f7502d:
                      if (local_c8 != (int64_t *)0x0) goto LAB_01f7503b;
LAB_01f75171:
                      FUN_00d46530();
                      plVar8 = local_60;
                      local_1f8 = 0;
                      if ((char)local_58[0] == '\0') {
                        if (local_60 != (int64_t *)0x0) {
                          FUN_00d50b00();
                        }
                      }
                      else {
                        local_58[0] = local_58[0] & 0xffffff00;
                      }
                      local_1f8 = '\x01';
                      local_200 = plVar8;
                      FUN_00d21140();
                      if ((local_1f8 != '\0') && (local_200 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      local_378 = local_108;
                      local_370 = '\0';
                      uVar23 = FUN_00d21140();
                      if ((local_370 != '\0') && (local_378 != (int64_t *)0x0)) {
                        uVar23 = FUN_00d50b20();
                      }
                    }
                    else {
                      plVar20 = (int64_t *)CONCAT71((int7)((uint64_t)plVar11 >> 8),1);
                      if (((char)local_80 != '\0') && (local_90 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                        local_90 = plVar8;
                        goto LAB_01f7502d;
                      }
joined_r0x01f751b0:
                      local_90 = plVar8;
                      if (local_c8 == (int64_t *)0x0) goto LAB_01f75171;
LAB_01f7503b:
                      FUN_00d46530();
                      plVar8 = local_60;
                      local_208 = 0;
                      if ((char)local_58[0] == '\0') {
                        if (local_60 != (int64_t *)0x0) {
                          FUN_00d50b00();
                        }
                      }
                      else {
                        local_58[0] = local_58[0] & 0xffffff00;
                      }
                      local_208 = '\x01';
                      local_210 = plVar8;
                      FUN_00d21140();
                      if ((local_208 != '\0') && (local_210 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      local_388 = local_c8;
                      local_380 = '\0';
                      uVar23 = FUN_00d21140();
                      if ((local_380 != '\0') && (local_388 != (int64_t *)0x0)) {
                        uVar23 = FUN_00d50b20();
                      }
                    }
                    local_368 = local_90;
                    local_360 = '\0';
                    local_60 = local_d8;
                    local_58[0] = local_58[0] & 0xffffff00;
                    uVar23 = FUN_00ca0840(uVar23,&local_60);
                    if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
                      uVar23 = FUN_00d50b20();
                    }
                    if ((local_360 == '\0') || (local_368 == (int64_t *)0x0)) {
                      local_80 = (int64_t *)((uint64_t)plVar20 & 0xffffffff);
                    }
                    else {
                      uVar23 = FUN_00d50b20();
                      local_80 = (int64_t *)((uint64_t)plVar20 & 0xffffffff);
                    }
                  }
                  else {
                    local_358 = local_d8;
                    local_350 = '\0';
                    FUN_000175c0(uVar23,&local_358);
                    plVar8 = local_60;
                    if ((g_027048b0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
                    pplVar14 = (int64_t **)&g_02802688;
                    if (plVar8 != (int64_t *)0x0) {
                      (**(code **)(*plVar8 + 0x360))();
                      cVar4 = FUN_00e85ea0();
                      pplVar14 = &local_60;
                      if (cVar4 == '\0') {
                        pplVar14 = (int64_t **)&g_02802688;
                      }
                    }
                    plVar8 = *pplVar14;
                    uVar17 = (undefined7)((uint64_t)plVar10 >> 8);
                    if (plVar8 == local_90) {
                      if (((char)local_80 == '\0') && (local_90 != (int64_t *)0x0)) {
                        plVar8 = local_90;
                        if (*(char *)(pplVar14 + 1) != '\0') goto LAB_01f75005;
                        uVar18 = CONCAT71(uVar17,1);
                        FUN_00d50b00();
                      }
                      else {
                        uVar18 = (uint64_t)local_80 & 0xffffffff;
                      }
                    }
                    else {
                      if (*(char *)(pplVar14 + 1) == '\0') {
                        if (plVar8 != (int64_t *)0x0) {
                          FUN_00d50b00();
                        }
                        uVar18 = CONCAT71(uVar17,1);
                        if (((char)local_80 != '\0') && (local_90 != (int64_t *)0x0)) {
                          FUN_00d50b20();
                          local_90 = plVar8;
                          goto LAB_01f75300;
                        }
                      }
                      else {
                        if (((char)local_80 != '\0') && (local_90 != (int64_t *)0x0)) {
                          FUN_00d50b20();
                        }
LAB_01f75005:
                        *(void*)(pplVar14 + 1) = 0;
                      }
                      uVar18 = CONCAT71(uVar17,1);
                      local_90 = plVar8;
                    }
LAB_01f75300:
                    if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_350 != '\0') && (local_358 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    FUN_00d23310();
                    plVar8 = local_60;
                    local_b8._0_1_ = (char)local_58[0] != '\0';
                    local_c0 = local_60;
                    pplVar14 = &local_b8;
                    if ((bool)(char)local_b8) {
                      pplVar14 = (int64_t **)local_58;
                    }
                    *(void*)pplVar14 = 0;
                    if (((char)local_58[0] != '\0') && (plVar8 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    FUN_00053ac0();
                    pplVar14 = (int64_t **)&g_02802688;
                    if (plVar8 != (int64_t *)0x0) {
                      (**(code **)(*plVar8 + 0x360))();
                      cVar4 = FUN_00e85ea0();
                      pplVar14 = &local_c0;
                      if (cVar4 == '\0') {
                        pplVar14 = (int64_t **)&g_02802688;
                      }
                    }
                    plVar20 = *pplVar14;
                    local_40 = (int64_t *)CONCAT71(local_40._1_7_,(char)uVar18);
                    if (plVar20 == (int64_t *)0x0) {
                      uVar17 = (undefined7)(uVar18 >> 8);
                      bVar16 = 1;
                      plVar20 = (int64_t *)0x0;
                    }
                    else {
                      if (*(char *)(pplVar14 + 1) == '\0') {
                        FUN_00d50b00();
                      }
                      else {
                        *(void*)(pplVar14 + 1) = 0;
                      }
                      bVar16 = 0;
                      uVar17 = 0;
                    }
                    if (((char)local_b8 != '\0') && (plVar8 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    iVar5 = FUN_00d45870();
                    if (iVar5 == 0) {
                      if (local_c8 == (int64_t *)0x0) {
                        local_338 = local_108;
                        local_330 = '\0';
                        uVar6 = FUN_00d233f0(extraout_XMM0_Da_20,1);
                        uVar23 = extraout_XMM0_Da_24;
                        if ((local_330 != '\0') && (local_338 != (int64_t *)0x0)) {
                          uVar6 = FUN_00d50b20();
                          uVar23 = extraout_XMM0_Da_25;
                        }
                      }
                      else {
                        uVar23 = FUN_00d46530();
                        plVar8 = local_60;
                        local_1e8 = 0;
                        if ((char)local_58[0] == '\0') {
                          if (local_60 != (int64_t *)0x0) {
                            uVar23 = FUN_00d50b00();
                          }
                        }
                        else {
                          local_58[0] = local_58[0] & 0xffffff00;
                        }
                        local_1e8 = '\x01';
                        local_1f0 = plVar8;
                        uVar23 = FUN_00d233f0(uVar23,0);
                        if ((local_1e8 != '\0') && (local_1f0 != (int64_t *)0x0)) {
                          uVar23 = FUN_00d50b20();
                        }
                        if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
                          uVar23 = FUN_00d50b20();
                        }
                        local_348 = local_c8;
                        local_340 = '\0';
                        uVar6 = FUN_00d233f0(uVar23,1);
                        uVar23 = extraout_XMM0_Da_26;
                        if ((local_340 != '\0') && (local_348 != (int64_t *)0x0)) {
                          uVar6 = FUN_00d50b20();
                          uVar23 = extraout_XMM0_Da_27;
                        }
                      }
                    }
                    else {
                      uVar6 = FUN_00d45870();
                      uVar23 = extraout_XMM0_Da_21;
                      if (((int)uVar6 == 1) && (local_c8 != (int64_t *)0x0)) {
                        local_328 = local_c8;
                        local_320 = '\0';
                        uVar6 = FUN_00d233f0(extraout_XMM0_Da_21,1);
                        uVar23 = extraout_XMM0_Da_22;
                        if ((local_320 != '\0') && (local_328 != (int64_t *)0x0)) {
                          uVar6 = FUN_00d50b20();
                          uVar23 = extraout_XMM0_Da_23;
                        }
                      }
                    }
                    bVar16 = bVar16 | plVar20 == (int64_t *)0x0;
                    plVar10 = (int64_t *)CONCAT71(uVar17,bVar16);
                    if (bVar16 == 0) {
                      uVar6 = FUN_00d50b20();
                      local_80 = (int64_t *)CONCAT71((int7)((uint64_t)uVar6 >> 8),(char)local_40);
                      uVar23 = extraout_XMM0_Da_28;
                    }
                    else {
                      local_80 = (int64_t *)CONCAT71((int7)((uint64_t)uVar6 >> 8),(char)local_40);
                    }
                  }
                  plVar8 = plVar10;
                  plVar10 = (int64_t *)((int64_t)plVar12 + 1);
                } while ((int64_t *)((int64_t)plVar12 + 1) != local_68);
                if (local_70 == (int64_t *)0x0) goto LAB_01f76023;
              }
              plVar8 = (int64_t *)FUN_00e8fc40();
              FUN_00022d50();
              (**(code **)(*plVar8 + 0x18))();
              local_60 = local_70;
              local_58[0] = local_58[0] & 0xffffff00;
              local_40 = plVar8;
              FUN_00ca0e70();
              if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00c9fe20();
              plVar20 = local_60;
              local_c0 = (int64_t *)CONCAT71(local_c0._1_7_,(char)local_58[0]);
              pplVar14 = (int64_t **)local_58;
              if ((char)local_58[0] == '\0') {
                pplVar14 = &local_c0;
              }
              *(void*)pplVar14 = 0;
              if (((char)local_58[0] != '\0') && (plVar20 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              uVar19 = *(uint *)((int64_t)plVar20 + 0xc);
              if ((char)local_c0 != '\0') {
                FUN_00d50b20();
              }
              if ((int)uVar19 < 1) {
                plVar8 = (int64_t *)(local_f8 & 0xffffffff);
              }
              else {
                uVar18 = 0;
                do {
                  FUN_00c9fe20();
                  plVar20 = local_60;
                  local_c0 = (int64_t *)CONCAT71(local_c0._1_7_,(char)local_58[0]);
                  pplVar14 = (int64_t **)local_58;
                  if ((char)local_58[0] == '\0') {
                    pplVar14 = &local_c0;
                  }
                  *(void*)pplVar14 = 0;
                  if (((char)local_58[0] != '\0') && (plVar20 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  plVar20 = *(int64_t **)(plVar20[2] + uVar18 * 8);
                  uVar17 = (undefined7)((uint64_t)plVar8 >> 8);
                  if (local_d8 == plVar20) {
                    if (((char)local_f8 == '\0') && (plVar20 != (int64_t *)0x0)) {
                      FUN_00d50b00();
                      goto LAB_01f759d0;
                    }
                    plVar8 = (int64_t *)(local_f8 & 0xffffffff);
                    plVar20 = local_d8;
                  }
                  else {
                    if (plVar20 != (int64_t *)0x0) {
                      FUN_00d50b00();
                    }
                    plVar8 = (int64_t *)CONCAT71(uVar17,1);
                    if (((char)local_f8 != '\0') && (local_d8 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                      local_d8 = plVar20;
LAB_01f759d0:
                      plVar8 = (int64_t *)CONCAT71(uVar17,1);
                      plVar20 = local_d8;
                    }
                  }
                  local_d8 = plVar20;
                  if ((char)local_c0 != '\0') {
                    FUN_00d50b20();
                  }
                  local_60 = local_d8;
                  local_58[0] = local_58[0] & 0xffffff00;
                  cVar4 = FUN_00d23d70();
                  if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (cVar4 != '\0') {
                    local_60 = local_d8;
                    local_58[0] = local_58[0] & 0xffffff00;
                    FUN_00ca13a0();
                    if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  uVar18 = uVar18 + 1;
                  local_f8 = (uint64_t)plVar8 & 0xffffffff;
                } while (uVar19 != uVar18);
              }
              FUN_00c9fe20();
              plVar20 = local_60;
              local_c0 = (int64_t *)CONCAT71(local_c0._1_7_,(char)local_58[0]);
              pplVar14 = (int64_t **)local_58;
              if ((char)local_58[0] == '\0') {
                pplVar14 = &local_c0;
              }
              *(void*)pplVar14 = 0;
              if (((char)local_58[0] != '\0') && (plVar20 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              local_68 = (int64_t *)(uint64_t)*(uint *)((int64_t)plVar20 + 0xc);
              if ((char)local_c0 != '\0') {
                FUN_00d50b20();
              }
              if ((int)local_68 < 1) {
                local_f8 = (uint64_t)plVar8 & 0xffffffff;
              }
              else {
                plVar20 = (int64_t *)0x0;
                do {
                  plVar11 = (int64_t *)((uint64_t)local_80 & 0xffffffff);
                  uVar23 = FUN_00c9fe20();
                  plVar10 = local_60;
                  local_c0 = (int64_t *)CONCAT71(local_c0._1_7_,(char)local_58[0]);
                  pplVar14 = (int64_t **)local_58;
                  if ((char)local_58[0] == '\0') {
                    pplVar14 = &local_c0;
                  }
                  *(void*)pplVar14 = 0;
                  if (((char)local_58[0] != '\0') && (plVar10 != (int64_t *)0x0)) {
                    uVar23 = FUN_00d50b20();
                  }
                  lVar9 = plVar10[2];
                  plVar12 = *(int64_t **)(lVar9 + (int64_t)plVar20 * 8);
                  if (local_d8 == plVar12) {
                    if (((char)plVar8 == '\0') && (plVar12 != (int64_t *)0x0)) {
                      local_f8 = CONCAT71((int7)((uint64_t)lVar9 >> 8),1);
                      uVar23 = FUN_00d50b00();
                      goto LAB_01f75c40;
                    }
                    local_f8 = (uint64_t)plVar8 & 0xffffffff;
                    plVar12 = local_d8;
                  }
                  else {
                    if (plVar12 != (int64_t *)0x0) {
                      lVar9 = FUN_00d50b00();
                      uVar23 = extraout_XMM0_Da_29;
                    }
                    local_f8 = CONCAT71((int7)((uint64_t)lVar9 >> 8),1);
                    if (((char)plVar8 != '\0') && (local_d8 != (int64_t *)0x0)) {
                      uVar23 = FUN_00d50b20();
                      local_d8 = plVar12;
LAB_01f75c40:
                      plVar12 = local_d8;
                    }
                  }
                  local_d8 = plVar12;
                  if (((char)local_c0 != '\0') && (plVar10 != (int64_t *)0x0)) {
                    uVar23 = FUN_00d50b20();
                  }
                  local_318 = local_d8;
                  local_310 = '\0';
                  FUN_000175c0(uVar23,&local_318);
                  plVar8 = local_60;
                  uVar6 = 0;
                  if ((g_027048b0 == '\0') && (uVar6 = ___cxa_guard_acquire(), (int)uVar6 != 0)) {
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
                    uVar6 = ___cxa_guard_release();
                  }
                  pplVar14 = (int64_t **)&g_02802688;
                  if (plVar8 != (int64_t *)0x0) {
                    (**(code **)(*plVar8 + 0x360))();
                    uVar6 = FUN_00e85ea0();
                    pplVar14 = &local_60;
                    if ((char)uVar6 == '\0') {
                      pplVar14 = (int64_t **)&g_02802688;
                    }
                  }
                  plVar8 = *pplVar14;
                  cVar4 = (char)plVar11;
                  if (plVar8 == local_90) {
                    plVar10 = local_90;
                    local_80 = plVar11;
                    if ((cVar4 == '\0') && (plVar8 != (int64_t *)0x0)) {
                      plVar8 = local_90;
                      if (*(char *)(pplVar14 + 1) != '\0') goto LAB_01f75d23;
                      local_80 = (int64_t *)CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
                      FUN_00d50b00();
                      plVar10 = local_90;
                    }
                  }
                  else if (*(char *)(pplVar14 + 1) == '\0') {
                    if (plVar8 != (int64_t *)0x0) {
                      uVar6 = FUN_00d50b00();
                    }
                    local_80 = (int64_t *)CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
                    plVar10 = plVar8;
                    if ((cVar4 != '\0') && (local_90 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    if ((cVar4 != '\0') && (local_90 != (int64_t *)0x0)) {
                      uVar6 = FUN_00d50b20();
                    }
LAB_01f75d23:
                    *(void*)(pplVar14 + 1) = 0;
                    local_80 = (int64_t *)CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
                    plVar10 = plVar8;
                  }
                  local_90 = plVar10;
                  if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_310 != '\0') && (local_318 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  FUN_00d23310();
                  plVar8 = local_60;
                  local_b8._0_1_ = (char)local_58[0] != '\0';
                  local_c0 = local_60;
                  pplVar14 = &local_b8;
                  if ((bool)(char)local_b8) {
                    pplVar14 = (int64_t **)local_58;
                  }
                  *(void*)pplVar14 = 0;
                  if (((char)local_58[0] != '\0') && (plVar8 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  FUN_00053ac0();
                  pplVar14 = (int64_t **)&g_02802688;
                  if (plVar8 != (int64_t *)0x0) {
                    (**(code **)(*plVar8 + 0x360))();
                    cVar4 = FUN_00e85ea0();
                    pplVar14 = &local_c0;
                    if (cVar4 == '\0') {
                      pplVar14 = (int64_t **)&g_02802688;
                    }
                  }
                  plVar10 = *pplVar14;
                  if (plVar10 == (int64_t *)0x0) {
                    bVar2 = true;
                    bVar22 = true;
                    plVar10 = (int64_t *)0x0;
                  }
                  else {
                    if (*(char *)(pplVar14 + 1) == '\0') {
                      FUN_00d50b00();
                    }
                    else {
                      *(void*)(pplVar14 + 1) = 0;
                    }
                    bVar2 = false;
                    bVar22 = false;
                  }
                  if (((char)local_b8 != '\0') && (bVar22 = bVar2, plVar8 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  iVar5 = FUN_00d45870();
                  if ((iVar5 == 0) || ((char)local_38 != '\0')) {
                    local_60 = local_d8;
                    local_58[0] = local_58[0] & 0xffffff00;
                    FUN_00ca13a0();
                    if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  if (!bVar22 && plVar10 != (int64_t *)0x0) {
                    FUN_00d50b20();
                  }
                  plVar20 = (int64_t *)((int64_t)plVar20 + 1);
                  plVar8 = (int64_t *)(local_f8 & 0xffffffff);
                } while (local_68 != plVar20);
              }
              if (local_40 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
            }
LAB_01f76023:
            local_308 = local_a8;
            local_300 = '\0';
            local_2f8 = local_d0;
            local_2f0 = '\0';
            uVar23 = FUN_00d33a10();
            if ((local_2f0 != '\0') && (local_2f8 != (int64_t *)0x0)) {
              uVar23 = FUN_00d50b20();
            }
            if ((local_300 != '\0') && (local_308 != (int64_t *)0x0)) {
              uVar23 = FUN_00d50b20();
            }
            plVar20 = local_a8;
            uVar18 = local_a0;
            plVar10 = local_70;
            plVar8 = local_78;
            if ((char)local_1a8 == '\0') {
              if ((char)local_1b0 == '\0') {
                uVar23 = FUN_00d50b00();
              }
              lVar9 = *(int64_t *)(local_1a0[2] + local_270 * 8);
              local_58[0] = 1;
              local_60 = &g_024c5048;
              local_48 = 0;
              if (lVar9 != 0) {
                uVar23 = FUN_00d50b00();
              }
              local_48 = '\x01';
              local_50 = lVar9;
              uVar23 = FUN_00d8cb40(uVar23,&local_60);
              local_1e0 = local_158;
              local_1d8 = 0;
              if (local_150 == '\0') {
                if (local_158 != (int64_t *)0x0) {
                  uVar23 = FUN_00d50b00();
                }
              }
              else {
                local_150 = '\0';
              }
              plVar11 = local_e0;
              local_1d8 = '\x01';
              uVar23 = (**(code **)(*local_e0 + 0x400))(uVar23,&local_1e0);
              plVar8 = local_e0;
              if (local_c0 == plVar11) {
                cVar4 = (char)local_170;
                if ((char)local_1b0 != '\0') {
                  plVar11 = local_e0;
                  if ((char)local_b8 != '\0') goto LAB_01f761d6;
                  cVar4 = '\x01';
                  uVar23 = FUN_00d50b00();
                  plVar11 = plVar8;
                }
LAB_01f7627b:
                if (((char)local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
                  uVar23 = FUN_00d50b20();
                }
              }
              else {
                plVar11 = local_c0;
                if ((char)local_b8 == '\0') {
                  if (local_c0 != (int64_t *)0x0) {
                    uVar23 = FUN_00d50b00();
                  }
                  cVar4 = '\x01';
                  if ((char)local_1b0 == '\0') {
                    uVar23 = FUN_00d50b20();
                  }
                  goto LAB_01f7627b;
                }
                if ((char)local_1b0 == '\0') {
                  uVar23 = FUN_00d50b20();
                }
LAB_01f761d6:
                local_b8._0_1_ = '\0';
                cVar4 = '\x01';
              }
              if ((local_1d8 != '\0') && (local_1e0 != (int64_t *)0x0)) {
                uVar23 = FUN_00d50b20();
              }
              if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
                uVar23 = FUN_00d50b20();
              }
              local_60 = &g_024c5048;
              if ((local_48 != '\0') && (local_50 != 0)) {
                uVar23 = FUN_00d50b20();
              }
              plVar20 = local_a8;
              uVar18 = local_a0;
              plVar10 = local_70;
              plVar8 = local_78;
              if (plVar11 != (int64_t *)0x0) {
                uVar23 = (**(code **)(*local_d0 + 0x388))();
                plVar8 = local_c0;
                local_1c8 = 0;
                if ((char)local_b8 == '\0') {
                  if (local_c0 != (int64_t *)0x0) {
                    uVar23 = FUN_00d50b00();
                  }
                }
                else {
                  local_b8._0_1_ = '\0';
                }
                local_1c8 = '\x01';
                local_1d0 = plVar8;
                uVar23 = (**(code **)(*plVar11 + 0x400))(uVar23,&local_1d0);
                plVar12 = local_60;
                if (local_60 == plVar11) {
                  if ((cVar4 == '\0') && (local_60 != (int64_t *)0x0)) {
                    plVar12 = plVar11;
                    if ((char)local_58[0] != '\0') goto LAB_01f763e8;
                    cVar4 = '\x01';
                    uVar23 = FUN_00d50b00();
                  }
LAB_01f763cf:
                  plVar12 = plVar11;
                  cVar15 = cVar4;
joined_r0x01f763d3:
                  if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
                    uVar23 = FUN_00d50b20();
                  }
                }
                else {
                  if ((char)local_58[0] == '\0') {
                    if (local_60 != (int64_t *)0x0) {
                      uVar23 = FUN_00d50b00();
                    }
                    cVar15 = '\x01';
                    if (cVar4 != '\0') {
                      uVar23 = FUN_00d50b20();
                      plVar11 = plVar12;
                      cVar4 = '\x01';
                      goto LAB_01f763cf;
                    }
                    goto joined_r0x01f763d3;
                  }
                  if (cVar4 != '\0') {
                    uVar23 = FUN_00d50b20();
                  }
LAB_01f763e8:
                  local_58[0] = local_58[0] & 0xffffff00;
                  cVar15 = '\x01';
                }
                if ((local_1c8 != '\0') && (local_1d0 != (int64_t *)0x0)) {
                  uVar23 = FUN_00d50b20();
                }
                if (((char)local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
                  uVar23 = FUN_00d50b20();
                }
                plVar20 = local_a8;
                uVar18 = local_a0;
                plVar10 = local_70;
                plVar8 = local_78;
                if (plVar12 != (int64_t *)0x0) {
                  local_2e0 = '\0';
                  local_2e8 = plVar12;
                  (**(code **)(*local_d0 + 0x440))();
                  if ((local_2e0 != '\0') && (local_2e8 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  uVar23 = (**(code **)(*plVar12 + 0x3f0))();
                  plVar11 = local_60;
                  if (local_60 == plVar12) {
                    plVar11 = plVar12;
                    if (cVar15 != '\0') {
LAB_01f7652b:
                      if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
                        uVar23 = FUN_00d50b20();
                      }
                      goto LAB_01f7653f;
                    }
                    if ((char)local_58[0] == '\0') {
                      uVar23 = FUN_00d50b00();
                      goto LAB_01f7652b;
                    }
                  }
                  else {
                    if ((char)local_58[0] == '\0') {
                      if (local_60 != (int64_t *)0x0) {
                        uVar23 = FUN_00d50b00();
                      }
                      if (cVar15 != '\0') {
                        uVar23 = FUN_00d50b20();
                      }
                      goto LAB_01f7652b;
                    }
                    if (cVar15 != '\0') {
                      uVar23 = FUN_00d50b20();
                    }
LAB_01f7653f:
                    plVar20 = local_a8;
                    uVar18 = local_a0;
                    plVar10 = local_70;
                    plVar8 = local_78;
                    plVar12 = plVar11;
                    if (plVar11 == (int64_t *)0x0) goto LAB_01f732dd;
                  }
                  lVar9 = g_0277d638;
                  if (g_0277d638 != 0) {
                    uVar23 = FUN_00d50b00();
                  }
                  local_2d8 = lVar9;
                  local_2d0 = '\x01';
                  uVar23 = (**(code **)(*plVar12 + 0x400))(uVar23,&local_2d8);
                  if (local_60 == plVar12) {
LAB_01f765bf:
                    if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
                      uVar23 = FUN_00d50b20();
                    }
                  }
                  else {
                    plVar12 = local_60;
                    if ((char)local_58[0] == '\0') {
                      if (local_60 != (int64_t *)0x0) {
                        FUN_00d50b00();
                      }
                      uVar23 = FUN_00d50b20();
                      goto LAB_01f765bf;
                    }
                    uVar23 = FUN_00d50b20();
                    local_58[0] = local_58[0] & 0xffffff00;
                  }
                  if ((local_2d0 != '\0') && (local_2d8 != 0)) {
                    uVar23 = FUN_00d50b20();
                  }
                  plVar20 = local_a8;
                  uVar18 = local_a0;
                  plVar10 = local_70;
                  plVar8 = local_78;
                  if (plVar12 != (int64_t *)0x0) {
                    cVar4 = (**(code **)(*plVar12 + 0x398))();
                    if (cVar4 != '\0') {
                      (**(code **)(*plVar12 + 0x408))();
                    }
                    uVar23 = FUN_00d50b20();
                    plVar20 = local_a8;
                    uVar18 = local_a0;
                    plVar10 = local_70;
                    plVar8 = local_78;
                  }
                }
              }
            }
          }
LAB_01f732dd:
          uVar13 = local_270 + 1;
          cVar4 = (char)uVar18;
          uVar18 = uVar18 & 0xffffffff;
          local_40 = (int64_t *)((uint64_t)plVar8 & 0xffffffff);
          local_68 = plVar10;
        } while (uVar13 != uVar1);
      }
      local_a8 = plVar20;
      local_40 = plVar8;
      FUN_01f27fe0();
      local_2c8 = g_02800c80;
      if (g_02800c80 != 0) {
        FUN_00d50b00();
      }
      plVar8 = g_027d3920;
      local_2c0 = '\x01';
      if (g_027d3920 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_2b8 = plVar8;
      local_2b0 = '\x01';
      local_2a8 = 0;
      local_2a0 = '\0';
      local_298 = 0;
      local_290 = '\0';
      local_288 = 0;
      local_280 = '\0';
      FUN_01f316e0(&local_2a8,&local_2b8,&local_298,&local_288);
      if ((local_280 != '\0') && (local_288 != 0)) {
        FUN_00d50b20();
      }
      if ((local_290 != '\0') && (local_298 != 0)) {
        FUN_00d50b20();
      }
      if ((local_2a0 != '\0') && (local_2a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_2b0 != '\0') && (local_2b8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_2c0 != '\0') && (local_2c8 != 0)) {
        FUN_00d50b20();
      }
      if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      bVar22 = true;
    }
    uVar18 = CONCAT71((int7)((uint64_t)plVar8 >> 8),local_274 != 0);
    FUN_00d50b20();
    if (((char)local_168 != '\0') && (local_178 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_138 != '\0') && (local_130 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_f8 != '\0') && (local_d8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_100 != '\0') && (local_c8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_94 != '\0') && (local_108 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_f0 != '\0') && (local_118 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_128 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((char)local_1a4 == '\0' && local_1a0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_80 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_170 != '\0') && (local_e0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_198 != '\0') && (local_180 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_e8 != '\0') && (local_d0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_159 != '\0') {
    FUN_00d50b20();
  }
  if (((char)local_148 != '\0') && (local_140 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_110 != '\0') && (local_88 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_120 != '\0') && (local_b0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_40 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar4 != '\0') && (local_a8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar22) && (local_188 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01f7275d:
  return uVar18 & 0xffffffff;
}

