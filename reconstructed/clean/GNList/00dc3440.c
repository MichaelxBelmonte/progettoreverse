// Function: FUN_00dc3440
// Address: 00dc3440
// Size: 5487 bytes
// Class: GNList
// String references:
//   "GNList"
//   "GNData"
//   "</%@>"
//   "GNString"
//   "GNDictionary"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00dc3440(int64_t *param_1,uint64_t param_2,int64_t *param_3,uint8_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t lVar5;
  char cVar6;
  int iVar7;
  int64_t lVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  int iVar11;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t **pplVar12;
  bool bVar13;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar14;
  int64_t local_3f0;
  uint8_t local_3e8;
  int64_t *local_3e0;
  uint8_t local_3d8;
  int64_t local_3d0;
  uint8_t local_3c8;
  int64_t *local_3c0;
  uint8_t local_3b8;
  int64_t local_3b0;
  uint8_t local_3a8;
  int64_t local_3a0;
  char local_398;
  int64_t local_390;
  uint8_t local_388;
  int64_t local_380;
  uint8_t local_378;
  uint64_t local_370;
  uint8_t local_368;
  uint64_t local_360;
  uint8_t local_358;
  int64_t local_350;
  uint8_t local_348;
  uint64_t local_340;
  uint8_t local_338;
  int64_t local_330;
  uint8_t local_328;
  int64_t local_320;
  uint8_t local_318;
  int64_t *local_310;
  uint8_t local_308;
  int64_t local_300;
  uint8_t local_2f8;
  int64_t local_2f0;
  uint8_t local_2e8;
  int64_t local_2e0;
  uint8_t local_2d8;
  int64_t local_2d0;
  uint8_t local_2c8;
  int64_t local_2c0;
  uint8_t local_2b8;
  uint64_t local_2b0;
  uint8_t local_2a8;
  int64_t local_2a0;
  uint8_t local_298;
  int64_t local_290;
  uint8_t local_288;
  int64_t local_280;
  uint8_t local_278;
  int64_t local_270;
  uint8_t local_268;
  int64_t local_260;
  uint8_t local_258;
  int64_t local_250;
  uint8_t local_248;
  int64_t local_240;
  uint8_t local_238;
  int64_t local_230;
  uint8_t local_228;
  int64_t local_220;
  uint8_t local_218;
  int64_t *local_210;
  uint8_t local_208;
  uint8_t local_200 [8];
  uint8_t local_1f8;
  int64_t *local_1f0;
  uint8_t local_1e8;
  uint8_t local_1e0 [8];
  uint8_t local_1d8;
  uint8_t local_1d0 [8];
  uint8_t local_1c8;
  int64_t *local_1c0;
  char local_1b8;
  int64_t *local_1b0;
  int64_t *local_1a8;
  char local_1a0;
  int64_t *local_198;
  uint8_t local_190;
  int64_t *local_188;
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
  int64_t *local_108;
  int64_t *local_100;
  char local_f8;
  int64_t *local_f0;
  uint64_t local_e8;
  int local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t *local_c8;
  uint local_c0 [2];
  int64_t *local_b8;
  uint local_b0;
  uint32_t local_ac;
  uint32_t uStack_a8;
  uint32_t uStack_a4;
  char local_a0;
  int64_t *local_70;
  char local_68;
  uint64_t local_60;
  
  plVar9 = (int64_t *)*param_1;
  local_60 = param_2;
  if ((g_026fdd40 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
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
  plVar10 = &g_02802688;
  if (plVar9 != (int64_t *)0x0) {
    (**(code **)(*plVar9 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 != '\0') {
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
      cVar6 = FUN_00e8db60();
      plVar10 = param_1;
      if (cVar6 == '\0') {
        plVar10 = &g_02802688;
      }
    }
  }
  lVar1 = *plVar10;
  lVar4 = plVar10[1];
  if (((char)lVar4 == '\0') || (lVar1 == 0)) {
    if (lVar1 == 0) {
      plVar9 = (int64_t *)*param_1;
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
      if (plVar9 == (int64_t *)0x0) {
LAB_00dc37da:
        plVar9 = &g_02802688;
      }
      else {
        (**(code **)(*plVar9 + 0x360))();
        cVar6 = FUN_00e85ea0();
        plVar9 = param_1;
        if (cVar6 == '\0') goto LAB_00dc37da;
      }
      plVar10 = (int64_t *)*plVar9;
      lVar1 = plVar9[1];
      if (((char)lVar1 == '\0') || (plVar10 == (int64_t *)0x0)) {
        if (plVar10 == (int64_t *)0x0) {
          plVar9 = (int64_t *)*param_1;
          if ((g_026d0220 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
            g_02789148 = FUN_00d4fe50();
            g_02789130 = "GNData";
            g_02789138 = 0x28;
            g_02789140 = FUN_000378a0;
            g_02789150 = 0;
            ram_0000000002789158 = 0;
            g_02789160 = 0;
            ram_0000000002789168 = 0;
            g_02789170 = 0;
            ram_0000000002789178 = 0;
            g_02789180 = 0;
            ram_0000000002789188 = 0;
            g_02789190 = 0;
            ram_0000000002789198 = 0;
            g_027891a0 = 0;
            ram_00000000027891a8 = 0;
            g_027891b0 = 0;
            ram_00000000027891b8 = 0;
            g_027891c0 = 0;
            ram_00000000027891c8 = 0;
            g_027891d0 = 0;
            ram_00000000027891d8 = 0;
            g_027891e0 = 0;
            ram_00000000027891e8 = 0;
            g_027891f0 = 0;
            ___cxa_guard_release();
          }
          if (plVar9 != (int64_t *)0x0) {
            (**(code **)(*plVar9 + 0x360))();
            cVar6 = FUN_00e85ea0();
            plVar9 = param_1;
            if (cVar6 != '\0') goto LAB_00dc4259;
          }
          plVar9 = &g_02802688;
LAB_00dc4259:
          lVar1 = plVar9[1];
          if (((char)lVar1 == '\0') || (*plVar9 == 0)) {
            if (*plVar9 == 0) {
              local_230 = *param_3;
              if (local_230 == 0) {
                local_260 = *this_ptr;
                local_258 = 0;
                local_250 = *arg1;
                local_248 = 0;
                local_240 = *param_1;
                local_238 = 0;
                local_228 = 0;
                FUN_00dc07c0(&local_240,local_60,&local_230,param_4);
                return;
              }
              local_2a0 = *this_ptr;
              local_298 = 0;
              local_290 = *arg1;
              local_288 = 0;
              local_280 = *param_1;
              local_278 = 0;
              FUN_00dbf000();
              plVar9 = local_c8;
              if ((char)local_c0[0] == '\0') {
                if (local_c8 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_c0[0] = local_c0[0] & 0xffffff00;
              }
              local_1c8 = 1;
              local_270 = *param_3;
              local_268 = 0;
              FUN_00dbff30(local_1d0,local_60,&local_270,param_4);
              if (plVar9 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              if ((char)local_c0[0] == '\0') {
                return;
              }
              if (local_c8 == (int64_t *)0x0) {
                return;
              }
              FUN_00d50b20();
              return;
            }
          }
          else {
            FUN_00d50b00();
          }
          local_2f0 = *this_ptr;
          local_2e8 = 0;
          local_2e0 = *arg1;
          local_2d8 = 0;
          FUN_00c92910(0,0x7fffffff);
          plVar9 = g_027648d0;
          if (g_027648d0 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          local_220 = local_118;
          local_210 = plVar9;
          FUN_00083ea0(2,&local_210);
          FUN_000b4da0();
          plVar10 = local_100;
          if (local_f8 == '\0') {
            if (local_100 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_f8 = '\0';
          }
          lVar4 = g_027c6f60;
          local_1d8 = 1;
          if (g_027c6f60 != 0) {
            FUN_00d50b00();
          }
          local_2d0 = lVar4;
          local_2c8 = 1;
          local_2c0 = *param_3;
          local_2b8 = 0;
          local_2b0 = 0;
          local_2a8 = 0;
          FUN_00dc1400(local_1e0,local_60,&local_2d0,&local_2c0);
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          if (plVar10 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_c8 = (int64_t *)&g_0253d630;
          if ((local_a0 != '\0') && (CONCAT44(uStack_a4,uStack_a8) != 0)) {
            FUN_00d50b20();
          }
          local_c8 = &g_024c5048;
          if (((char)local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar9 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_110 != '\0') && (local_118 != 0)) {
            FUN_00d50b20();
          }
          if ((char)lVar1 == '\0') {
            return;
          }
          FUN_00d50b20();
          return;
        }
      }
      else {
        FUN_00d50b00();
      }
      local_c0[0] = local_c0[0] & 0xffffff00;
      local_c8 = (int64_t *)0x0;
      local_ac = 0;
      uStack_a8 = 0;
      local_b8 = plVar10;
      for (lVar8 = 0; local_b0 = (uint)lVar8, (int)local_b0 < *(int *)((int64_t)plVar10 + 0xc);
          lVar8 = lVar8 + 1) {
        local_310 = *(int64_t **)(plVar10[2] + lVar8 * 8);
        local_330 = *this_ptr;
        local_328 = 0;
        local_320 = *arg1;
        local_318 = 0;
        local_308 = 0;
        local_300 = *param_3;
        local_2f8 = 0;
        local_c8 = local_310;
        FUN_00dc3440(&local_310,local_60,&local_300,1);
      }
      FUN_00083b20();
      bVar13 = true;
      if ((char)lVar1 != '\0') {
        FUN_00d50b20();
      }
      goto LAB_00dc40c7;
    }
  }
  else {
    FUN_00d50b00();
  }
  plVar9 = g_027f37d8;
  if (g_027f37d8 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_c8 = plVar9;
  local_c0[0] = local_c0[0] & 0xffffff00;
  cVar6 = FUN_00ca18c0();
  uVar14 = extraout_XMM0_Da;
  if (((char)local_c0[0] != '\0') && (local_c8 != (int64_t *)0x0)) {
    uVar14 = FUN_00d50b20();
  }
  if (plVar9 != (int64_t *)0x0) {
    uVar14 = FUN_00d50b20();
  }
  plVar9 = g_027f37d8;
  lVar8 = g_02783b50;
  if (cVar6 == '\0') {
    lVar1 = *this_ptr;
    plVar9 = (int64_t *)*arg1;
    lVar2 = *param_3;
    local_110 = '\0';
    local_118 = lVar1;
    if (g_02783b50 != 0) {
      uVar14 = FUN_00d50b00();
    }
    local_220 = lVar8;
    local_218 = 1;
    FUN_00dbdbc0(uVar14,&local_220);
    local_108 = local_c8;
    if (((char)local_c0[0] == '\0') && (local_c8 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    local_210 = local_108;
    local_208 = 0;
    FUN_00dbdd00();
    plVar10 = local_c8;
    if (((char)local_c0[0] == '\0') && (local_c8 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    local_1a8 = plVar10;
    local_1a0 = '\0';
    local_3e8 = 0;
    local_3f0 = lVar2;
    FUN_00dbe290(&local_3f0,&local_1a8,param_4);
    plVar3 = local_c8;
    if (plVar10 == local_c8) {
      if (((char)local_c0[0] != '\0') && (local_c8 != (int64_t *)0x0)) {
        FUN_00d50b20(local_c8);
      }
    }
    else if ((char)local_c0[0] == '\0') {
      if (local_c8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      bVar13 = plVar10 != (int64_t *)0x0;
      plVar10 = plVar3;
      if (bVar13) {
        FUN_00d50b20();
      }
    }
    else {
      bVar13 = plVar10 != (int64_t *)0x0;
      plVar10 = plVar3;
      if (bVar13) {
        FUN_00d50b20(local_c8);
      }
    }
    if ((local_1a0 != '\0') && (local_1a8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00c9fe20();
    plVar3 = local_c8;
    local_100 = (int64_t *)CONCAT71(local_100._1_7_,(char)local_c0[0]);
    pplVar12 = (int64_t **)local_c0;
    if ((char)local_c0[0] == '\0') {
      pplVar12 = &local_100;
    }
    *(void*)pplVar12 = 0;
    if (((char)local_c0[0] != '\0') && (plVar3 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    iVar7 = *(int *)((int64_t)plVar3 + 0xc);
    if ((char)local_100 != '\0') {
      FUN_00d50b20();
    }
    if (iVar7 == 0) {
      local_c0[0] = local_c0[0] & 0xffffff00;
      local_190 = 0;
      local_198 = plVar10;
      local_c8 = plVar9;
      FUN_00dbde70();
      plVar9 = local_108;
      plVar3 = local_1c0;
      if ((local_1b8 == '\0') && (local_1c0 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      local_100 = plVar3;
      local_f8 = '\x01';
      FUN_00dbfc90(&local_100,0);
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      local_1b8 = '\0';
      local_3d8 = 0;
      local_3e0 = plVar10;
      local_1c0 = plVar9;
      FUN_00dbdf50();
      plVar3 = local_c8;
      if (((char)local_c0[0] == '\0') && (local_c8 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      local_198 = plVar3;
      local_190 = 1;
      FUN_00dbfc90(&local_198);
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      uVar14 = FUN_00c9fe20();
      plVar3 = local_c8;
      pplVar12 = (int64_t **)local_c0;
      if ((char)local_c0[0] == '\0') {
        pplVar12 = &local_100;
      }
      local_100 = (int64_t *)CONCAT71(local_100._1_7_,(char)local_c0[0]);
      *(void*)pplVar12 = 0;
      if (((char)local_c0[0] != '\0') && (plVar3 != (int64_t *)0x0)) {
        uVar14 = FUN_00d50b20();
      }
      if ((char)local_100 == '\0') {
        if (plVar3 != (int64_t *)0x0) {
          FUN_00d50b00();
          goto LAB_00dc3b98;
        }
      }
      else if (plVar3 != (int64_t *)0x0) {
LAB_00dc3b98:
        local_f8 = 0;
        local_100 = (int64_t *)0x0;
        local_1b0 = plVar3;
        local_f0 = plVar3;
        local_e8 = 0xffffffff;
        local_e0 = 0;
        iVar7 = (int)local_60;
        local_e8._4_4_ = 0;
        while( true ) {
          if (local_e8._4_4_ != 0) {
            if (local_e8._4_4_ < 1) {
              iVar11 = -local_e8._4_4_;
            }
            else {
              iVar11 = (int)local_e8 - local_e8._4_4_;
              local_e8 = CONCAT44(local_e8._4_4_,iVar11);
              FUN_00d23690();
              local_e0 = local_e0 + local_e8._4_4_;
              iVar11 = 0;
            }
            local_e8 = CONCAT44(iVar11,(int)local_e8);
          }
          lVar8 = (int64_t)(int)local_e8;
          iVar11 = (int)local_e8 + 1;
          local_e8 = CONCAT44(local_e8._4_4_,iVar11);
          if (*(int *)((int64_t)local_f0 + 0xc) <= iVar11) break;
          local_188 = *(int64_t **)(local_f0[2] + 8 + lVar8 * 8);
          local_180 = '\0';
          local_100 = local_188;
          FUN_000175c0(local_f0[2],&local_188);
          plVar3 = local_c8;
          local_68 = 0;
          if ((char)local_c0[0] == '\0') {
            if (local_c8 == (int64_t *)0x0) {
              local_70 = (int64_t *)0x0;
              local_68 = '\x01';
            }
            else {
              FUN_00d50b00();
              local_70 = plVar3;
              local_68 = '\x01';
              if (((char)local_c0[0] != '\0') && (local_c8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            local_70 = local_c8;
            local_68 = '\x01';
            local_c0[0] = local_c0[0] & 0xffffff00;
          }
          if ((local_180 != '\0') && (local_188 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          lVar8 = g_02704000;
          local_3c8 = 0;
          local_3b8 = 0;
          local_130 = 0;
          local_3d0 = lVar1;
          local_3c0 = plVar9;
          if (g_02704000 != 0) {
            FUN_00d50b00();
          }
          lVar2 = g_027e7c20;
          local_138 = lVar8;
          local_130 = '\x01';
          local_120 = 0;
          if (g_027e7c20 != 0) {
            FUN_00d50b00();
          }
          local_128 = lVar2;
          local_120 = '\x01';
          FUN_00dc5220(&local_70,&local_138,&local_128);
          uVar14 = FUN_000b4da0();
          lVar8 = local_d8;
          if (local_d0 == '\0') {
            if (local_d8 != 0) {
              uVar14 = FUN_00d50b00();
            }
          }
          else {
            local_d0 = '\0';
          }
          lVar2 = g_02783b58;
          local_1f8 = 1;
          local_388 = 0;
          local_390 = lVar1;
          if (g_02783b58 != 0) {
            uVar14 = FUN_00d50b00();
          }
          local_380 = lVar2;
          local_378 = 1;
          FUN_00dbdbc0(uVar14,&local_380);
          lVar5 = local_3a0;
          if ((local_398 == '\0') && (local_3a0 != 0)) {
            FUN_00d50b00();
          }
          local_3b0 = lVar5;
          local_3a8 = 1;
          local_370 = 0;
          local_368 = 0;
          local_360 = 0;
          local_358 = 0;
          FUN_00dc1400(local_200,iVar7 + 1,&local_3b0,&local_370);
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          if (lVar8 != 0) {
            FUN_00d50b20();
          }
          if ((local_d0 != '\0') && (local_d8 != 0)) {
            FUN_00d50b20();
          }
          FUN_002d10d0();
          if ((local_120 != '\0') && (local_128 != 0)) {
            FUN_00d50b20();
          }
          if ((local_130 != '\0') && (local_138 != 0)) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_00018280();
        uVar14 = FUN_00d50b20();
      }
      plVar3 = local_108;
      local_f8 = '\0';
      local_c0[0] = 1;
      local_c8 = &g_024c5048;
      local_b0 = local_b0 & 0xffffff00;
      local_100 = plVar9;
      if (local_108 != (int64_t *)0x0) {
        uVar14 = FUN_00d50b00();
      }
      local_b8 = plVar3;
      local_b0 = CONCAT31(local_b0._1_3_,1);
      FUN_00d8cb40(uVar14,&local_c8);
      lVar1 = local_d8;
      if (local_d0 == '\0') {
        if (local_d8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_d0 = '\0';
      }
      local_68 = '\x01';
      FUN_00dbfc90(&local_70,0);
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      local_c8 = &g_024c5048;
      plVar9 = local_108;
      if (((char)local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
        FUN_00d50b20();
        plVar9 = local_108;
      }
    }
    if (plVar10 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar9 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    local_178 = *this_ptr;
    local_170 = '\0';
    local_168 = *arg1;
    local_160 = '\0';
    local_150 = '\0';
    local_158 = lVar1;
    if (g_027f37d8 != (int64_t *)0x0) {
      uVar14 = FUN_00d50b00();
    }
    local_148 = plVar9;
    local_140 = '\x01';
    pplVar12 = &local_c8;
    FUN_000175c0(uVar14,&local_148);
    plVar9 = local_c8;
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
    if (plVar9 == (int64_t *)0x0) {
LAB_00dc3606:
      pplVar12 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar9 + 0x360))();
      cVar6 = FUN_00e85ea0();
      if (cVar6 == '\0') goto LAB_00dc3606;
    }
    plVar9 = *pplVar12;
    if (*(char *)(pplVar12 + 1) == '\0') {
      if (plVar9 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar12 + 1) = 0;
    }
    local_1e8 = 1;
    local_350 = *param_3;
    local_348 = 0;
    local_340 = 0;
    local_338 = 0;
    local_1f0 = plVar9;
    FUN_00dc1400(&local_158,local_60,&local_1f0,&local_350);
    if (plVar9 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_c0[0] != '\0') && (local_c8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_140 != '\0') && (local_148 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
    if ((local_160 != '\0') && (local_168 != 0)) {
      FUN_00d50b20();
    }
    bVar13 = false;
    if ((local_170 == '\0') || (bVar13 = false, local_178 == 0)) goto LAB_00dc40c7;
    FUN_00d50b20();
  }
  bVar13 = false;
LAB_00dc40c7:
  if (((char)lVar4 != '\0') && (!bVar13)) {
    FUN_00d50b20();
  }
  return;
}

