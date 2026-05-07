// ===================================================================
// GNOverloudTapedesk — Complete reconstructed pseudocode
// 19 functions
// ===================================================================


// ============================================================
// 00c34960
// ============================================================
// Function: FUN_00c34960
// Address: 00c34960
// Size: 3130 bytes
// Class: GNOverloudTapedesk

void FUN_00c34960(void)

{
  int64_t lVar1;
  void*puVar2;
  void*puVar3;
  int64_t this_ptr;
  int64_t lVar4;
  bool bVar5;
  int64_t local_2e8;
  uint8_t local_2e0;
  int64_t local_2d8;
  uint8_t local_2d0;
  int64_t local_2c8;
  uint8_t local_2c0;
  int64_t local_2b8;
  uint8_t local_2b0;
  int64_t local_2a8;
  uint8_t local_2a0;
  int64_t local_298;
  uint8_t local_290;
  int64_t local_288;
  uint8_t local_280;
  int64_t local_278;
  uint8_t local_270;
  int64_t local_268;
  uint8_t local_260;
  int64_t local_258;
  uint8_t local_250;
  int64_t local_248;
  uint8_t local_240;
  int64_t local_238;
  uint8_t local_230;
  int64_t local_228;
  uint8_t local_220;
  int64_t local_218;
  uint8_t local_210;
  int64_t local_208;
  uint8_t local_200;
  int64_t local_1f8;
  uint8_t local_1f0;
  int64_t local_1e8;
  uint8_t local_1e0;
  int64_t local_1d8;
  uint8_t local_1d0;
  int64_t local_1c8;
  uint8_t local_1c0;
  int64_t local_1b8;
  uint8_t local_1b0;
  int64_t local_1a8;
  uint8_t local_1a0;
  int64_t local_198;
  uint8_t local_190;
  int64_t local_188;
  uint8_t local_180;
  int64_t local_178;
  uint8_t local_170;
  int64_t local_168;
  uint8_t local_160;
  int64_t local_158;
  uint8_t local_150;
  int64_t local_148;
  uint8_t local_140;
  int64_t local_138;
  uint8_t local_130;
  int64_t local_128;
  uint8_t local_120;
  int64_t local_118;
  uint8_t local_110;
  int64_t local_108;
  uint8_t local_100;
  int64_t local_f8;
  uint8_t local_f0;
  int64_t local_e8;
  uint8_t local_e0;
  int64_t local_d8;
  uint8_t local_d0;
  int64_t local_c8;
  uint8_t local_c0;
  int64_t local_b8;
  uint8_t local_b0;
  int64_t local_a8;
  uint8_t local_a0;
  int64_t local_98;
  uint8_t local_90;
  int64_t local_88;
  uint8_t local_80;
  int64_t local_78;
  uint8_t local_70;
  int64_t local_68;
  uint8_t local_60;
  int64_t local_58;
  uint8_t local_50;
  int64_t local_48;
  uint8_t local_40;
  int64_t local_38;
  uint8_t local_30;
  
  *(void*)(this_ptr + 0xb8) = 0x13;
  lVar1 = g_0276cc88;
  if (g_0276cc88 == 0) {
    lVar4 = *(int64_t *)(this_ptr + 0x90);
    if (lVar4 == 0) goto LAB_00c349c9;
  }
  else {
    FUN_00d50b00();
    lVar4 = *(int64_t *)(this_ptr + 0x90);
    if (lVar4 == lVar1) {
      FUN_00d50b20();
      goto LAB_00c349c9;
    }
  }
  *(int64_t *)(this_ptr + 0x90) = lVar1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_00c349c9:
  *(void*)(this_ptr + 0xa8) = 2;
  if ((g_028a5f68 == (void*)0x0) || (g_028a5f71 == '\0')) {
    FUN_00e8cb50();
    if (g_028a5f68 == (void*)0x0) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_0254ed40;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      FUN_00d500e0();
      bVar5 = g_028a5f68 == (void*)0x0;
      g_028a5f68 = puVar3;
      if (((bVar5) || (FUN_00d50b20(), lVar1 = g_0276cc90, g_028a5f68 != (void*)0x0)) &&
         (lVar1 = g_0276cc90, g_028a5f70 == '\0')) {
        g_028a5f70 = '\x01';
        FUN_00e8cb90();
        lVar1 = g_0276cc90;
      }
      g_0276cc90 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_027c70a8;
      local_2e0 = 1;
      local_2e8 = lVar1;
      if (g_027c70a8 != 0) {
        FUN_00d50b00();
      }
      local_2d8 = lVar4;
      local_2d0 = 1;
      FUN_00bf1030(&local_2d8,&local_2e8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276cca0;
      if (g_0276cca0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276cca8;
      local_2c8 = lVar1;
      local_2c0 = 1;
      if (g_0276cca8 != 0) {
        FUN_00d50b00();
      }
      local_2b8 = lVar4;
      local_2b0 = 1;
      FUN_00bf1030(&local_2b8,&local_2c8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276be18;
      if (g_0276be18 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276be20;
      local_2a8 = lVar1;
      local_2a0 = 1;
      if (g_0276be20 != 0) {
        FUN_00d50b00();
      }
      local_298 = lVar4;
      local_290 = 1;
      FUN_00bf1030(&local_298,&local_2a8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276ccb0;
      if (g_0276ccb0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276ccb8;
      local_288 = lVar1;
      local_280 = 1;
      if (g_0276ccb8 != 0) {
        FUN_00d50b00();
      }
      local_278 = lVar4;
      local_270 = 1;
      FUN_00bf1030(&local_278,&local_288);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276ccc0;
      if (g_0276ccc0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276ccc8;
      local_268 = lVar1;
      local_260 = 1;
      if (g_0276ccc8 != 0) {
        FUN_00d50b00();
      }
      local_258 = lVar4;
      local_250 = 1;
      FUN_00bf1030(&local_258,&local_268);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276bd78;
      if (g_0276bd78 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bd80;
      local_248 = lVar1;
      local_240 = 1;
      if (g_0276bd80 != 0) {
        FUN_00d50b00();
      }
      local_238 = lVar4;
      local_230 = 1;
      FUN_00bf1030(&local_238,&local_248);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276bd98;
      if (g_0276bd98 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bda0;
      local_228 = lVar1;
      local_220 = 1;
      if (g_0276bda0 != 0) {
        FUN_00d50b00();
      }
      local_218 = lVar4;
      local_210 = 1;
      FUN_00bf1030(&local_218,&local_228);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276ccd0;
      if (g_0276ccd0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276ccd8;
      local_208 = lVar1;
      local_200 = 1;
      if (g_0276ccd8 != 0) {
        FUN_00d50b00();
      }
      local_1f8 = lVar4;
      local_1f0 = 1;
      FUN_00bf1030(&local_1f8,&local_208);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276cce0;
      if (g_0276cce0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276cce8;
      local_1e8 = lVar1;
      local_1e0 = 1;
      if (g_0276cce8 != 0) {
        FUN_00d50b00();
      }
      local_1d8 = lVar4;
      local_1d0 = 1;
      FUN_00bf1030(&local_1d8,&local_1e8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276bda8;
      if (g_0276bda8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bdb0;
      local_1c8 = lVar1;
      local_1c0 = 1;
      if (g_0276bdb0 != 0) {
        FUN_00d50b00();
      }
      local_1b8 = lVar4;
      local_1b0 = 1;
      FUN_00bf1030(&local_1b8,&local_1c8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276bdc8;
      if (g_0276bdc8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bdd0;
      local_1a8 = lVar1;
      local_1a0 = 1;
      if (g_0276bdd0 != 0) {
        FUN_00d50b00();
      }
      local_198 = lVar4;
      local_190 = 1;
      FUN_00bf1030(&local_198,&local_1a8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276ccf0;
      if (g_0276ccf0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276ccf8;
      local_188 = lVar1;
      local_180 = 1;
      if (g_0276ccf8 != 0) {
        FUN_00d50b00();
      }
      local_178 = lVar4;
      local_170 = 1;
      FUN_00bf1030(&local_178,&local_188);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276cd00;
      if (g_0276cd00 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276cd08;
      local_168 = lVar1;
      local_160 = 1;
      if (g_0276cd08 != 0) {
        FUN_00d50b00();
      }
      local_158 = lVar4;
      local_150 = 1;
      FUN_00bf1030(&local_158,&local_168);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276bd48;
      if (g_0276bd48 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bd50;
      local_148 = lVar1;
      local_140 = 1;
      if (g_0276bd50 != 0) {
        FUN_00d50b00();
      }
      local_138 = lVar4;
      local_130 = 1;
      FUN_00bf1030(&local_138,&local_148);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276cd10;
      if (g_0276cd10 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276cd18;
      local_128 = lVar1;
      local_120 = 1;
      if (g_0276cd18 != 0) {
        FUN_00d50b00();
      }
      local_118 = lVar4;
      local_110 = 1;
      FUN_00bf1030(&local_118,&local_128);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276cd20;
      if (g_0276cd20 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276cd28;
      local_108 = lVar1;
      local_100 = 1;
      if (g_0276cd28 != 0) {
        FUN_00d50b00();
      }
      local_f8 = lVar4;
      local_f0 = 1;
      FUN_00bf1030(&local_f8,&local_108);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276cd30;
      if (g_0276cd30 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276cd38;
      local_e8 = lVar1;
      local_e0 = 1;
      if (g_0276cd38 != 0) {
        FUN_00d50b00();
      }
      local_d8 = lVar4;
      local_d0 = 1;
      FUN_00bf1030(&local_d8,&local_e8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276cd40;
      if (g_0276cd40 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276cd48;
      local_c8 = lVar1;
      local_c0 = 1;
      if (g_0276cd48 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar4;
      local_b0 = 1;
      FUN_00bf1030(&local_b8,&local_c8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276cd50;
      if (g_0276cd50 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276cd58;
      local_a8 = lVar1;
      local_a0 = 1;
      if (g_0276cd58 != 0) {
        FUN_00d50b00();
      }
      local_98 = lVar4;
      local_90 = 1;
      FUN_00bf1030(&local_98,&local_a8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276cd60;
      if (g_0276cd60 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276cd68;
      local_88 = lVar1;
      local_80 = 1;
      if (g_0276cd68 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar4;
      local_70 = 1;
      FUN_00bf1030(&local_78,&local_88);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276cd70;
      if (g_0276cd70 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276cd78;
      local_68 = lVar1;
      local_60 = 1;
      if (g_0276cd78 != 0) {
        FUN_00d50b00();
      }
      local_58 = lVar4;
      local_50 = 1;
      FUN_00bf1030(&local_58,&local_68);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276be48;
      if (g_0276be48 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276be50;
      local_48 = lVar1;
      local_40 = 1;
      if (g_0276be50 != 0) {
        FUN_00d50b00();
      }
      local_38 = lVar4;
      local_30 = 1;
      FUN_00bf1030(&local_38,&local_48);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      g_028a5f71 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a5f71 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = *(void**)(this_ptr + 0xb0);
    if (puVar3 == g_028a5f68) {
      return;
    }
  }
  else {
    puVar3 = *(void**)(this_ptr + 0xb0);
    if (puVar3 == g_028a5f68) {
      return;
    }
  }
  puVar2 = g_028a5f68;
  if (g_028a5f68 != (void*)0x0) {
    FUN_00d50b00();
  }
  *(void**)(this_ptr + 0xb0) = puVar2;
  if (puVar3 == (void*)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 00cb45c0
// ============================================================
// Function: FUN_00cb45c0
// Address: 00cb45c0
// Size: 2313 bytes
// Class: GNOverloudTapedesk

void FUN_00cb45c0(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  char cVar2;
  int64_t *plVar3;
  bool *pbVar4;
  int64_t lVar5;
  void *pvVar6;
  int64_t **pplVar7;
  int iVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar9;
  int64_t local_180;
  char local_178;
  int64_t *local_170;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t *local_148;
  char local_140;
  int64_t *local_138;
  char local_130;
  int64_t *local_128;
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
  int64_t *local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  uint64_t local_78;
  int local_70;
  int64_t *local_68;
  bool local_60 [8];
  int64_t local_58;
  uint64_t local_50;
  int local_48;
  bool local_38 [8];
  
  cVar2 = (**(code **)(*(int64_t *)*param_2 + 0x370))();
  if (cVar2 != '\0') {
    local_168 = *arg1;
    local_160 = '\0';
    local_158 = *param_2;
    local_150 = '\0';
    cVar2 = (**(code **)(*this_ptr + 0x408))();
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
    if ((local_160 != '\0') && (local_168 != 0)) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      cVar2 = FUN_00d77de0();
      if (cVar2 == '\0') {
        (**(code **)(*(int64_t *)*arg1 + 0x210))();
        plVar3 = local_68;
        if (local_60[0] == false) {
          if (local_68 == (int64_t *)0x0) goto LAB_00cb4886;
          FUN_00d50b00();
          if ((local_60[0] != false) && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else if (local_68 == (int64_t *)0x0) goto LAB_00cb4886;
        local_138 = plVar3;
        local_130 = '\0';
        cVar2 = (**(code **)(*this_ptr + 0x3b0))();
        if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((cVar2 != '\0') &&
           ((cVar2 = (**(code **)(*plVar3 + 0x2c0))(), cVar2 == '\0' ||
            (iVar8 = (**(code **)(*plVar3 + 0x2c8))(), iVar8 == 0)))) {
          local_128 = plVar3;
          local_120 = '\0';
          (**(code **)(*this_ptr + 0x3e0))();
          if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
      else {
        (**(code **)(*(int64_t *)*arg1 + 0x210))();
        plVar3 = local_68;
        if ((((local_60[0] == false) && (local_68 != (int64_t *)0x0)) &&
            (FUN_00d50b00(), local_60[0] != false)) && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_148 = plVar3;
        local_140 = '\0';
        FUN_00cb53b0(0,1);
        plVar1 = local_90;
        if (local_88 == '\0') {
          if (local_90 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_88 = '\0';
        }
        local_68 = plVar1;
        local_60[0] = false;
        FUN_00d21140();
        if ((local_60[0] != false) && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_140 != '\0') && (local_148 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar3 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
    }
  }
LAB_00cb4886:
  cVar2 = FUN_00d74560();
  if (cVar2 == '\0') {
    local_118 = *arg1;
    local_110 = '\0';
    (**(code **)(*this_ptr + 0x458))();
    if ((local_110 != '\0') && (local_118 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((((this_ptr[0x12] != 0) && ((char)this_ptr[0x1c] != '\0')) && ((int)this_ptr[0x1a] == 0))
     && (((plVar3 = (int64_t *)(**(code **)(*(int64_t *)*arg1 + 0x188))(),
          plVar3 != (int64_t *)0x0 && (*plVar3 != 0)) &&
         (cVar2 = (**(code **)(*(int64_t *)*param_2 + 0x370))(), cVar2 != '\0')))) {
    local_108 = *param_2;
    local_100 = '\0';
    cVar2 = (**(code **)(*(int64_t *)*arg1 + 0x2b8))();
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      (**(code **)(*(int64_t *)*arg1 + 0x210))();
      plVar1 = local_68;
      local_170 = local_68;
      if (local_60[0] == false) {
        pbVar4 = local_38;
      }
      else {
        pbVar4 = local_60;
      }
      local_38[0] = local_60[0] != false;
      *pbVar4 = false;
      if ((local_60[0] != false) && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        if (*plVar3 != 0) {
          local_a8 = plVar1;
          local_60[0] = false;
          local_68 = (int64_t *)0x0;
          local_50 = 0xffffffff;
          local_48 = 0;
          local_50._4_4_ = 0;
          local_58 = *plVar3;
          while( true ) {
            if (local_50._4_4_ != 0) {
              if (local_50._4_4_ < 1) {
                iVar8 = -local_50._4_4_;
              }
              else {
                iVar8 = (int)local_50 - local_50._4_4_;
                local_50 = CONCAT44(local_50._4_4_,iVar8);
                FUN_00d23690();
                local_48 = local_48 + local_50._4_4_;
                iVar8 = 0;
              }
              local_50 = CONCAT44(iVar8,(int)local_50);
            }
            lVar5 = (int64_t)(int)local_50;
            iVar8 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,iVar8);
            if (*(int *)(local_58 + 0xc) <= iVar8) break;
            local_68 = *(int64_t **)(*(int64_t *)(local_58 + 0x10) + 8 + lVar5 * 8);
            FUN_00e17bc0();
            if (local_90 == (int64_t *)0x0) {
              bVar9 = true;
            }
            else {
              FUN_00e17bc0();
              if (local_a0 == (int64_t *)0x0) {
                bVar9 = false;
              }
              else {
                FUN_00e17bc0();
                bVar9 = local_180 == *param_2;
                if ((local_178 != '\0') && (local_180 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (bVar9) {
              cVar2 = FUN_00d77de0();
              if (cVar2 == '\0') {
                FUN_00e8b690();
                (**(code **)(*local_a8 + 0x360))();
                cVar2 = FUN_00e85ea0();
                pplVar7 = &local_170;
                if (cVar2 == '\0') {
                  pplVar7 = (int64_t **)&g_02802688;
                }
                if (*pplVar7 != (int64_t *)0x0) {
                  pvVar6 = _pthread_getspecific((void*)pplVar7);
                  if (pvVar6 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_00e17ba0();
                  local_e8 = 0;
                  local_e0 = '\0';
                  FUN_00e8c420();
                  if ((local_e0 != '\0') && (local_e8 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
                    (**(code **)(*local_90 + 0x10))();
                    FUN_00d50b20();
                  }
                }
              }
              else {
                local_88 = '\0';
                local_90 = (int64_t *)0x0;
                local_80 = local_a8;
                local_78 = 0xffffffff;
                local_70 = 0;
                local_78._4_4_ = 0;
                while( true ) {
                  if (local_78._4_4_ != 0) {
                    if (local_78._4_4_ < 1) {
                      iVar8 = -local_78._4_4_;
                    }
                    else {
                      iVar8 = (int)local_78 - local_78._4_4_;
                      local_78 = CONCAT44(local_78._4_4_,iVar8);
                      FUN_00d23690();
                      local_70 = local_70 + local_78._4_4_;
                      iVar8 = 0;
                    }
                    local_78 = CONCAT44(iVar8,(int)local_78);
                  }
                  lVar5 = (int64_t)(int)local_78;
                  iVar8 = (int)local_78 + 1;
                  local_78 = CONCAT44(local_78._4_4_,iVar8);
                  if (*(int *)((int64_t)local_80 + 0xc) <= iVar8) break;
                  plVar3 = *(int64_t **)(local_80[2] + 8 + lVar5 * 8);
                  local_a0 = plVar3;
                  local_90 = plVar3;
                  FUN_00e8b690();
                  pplVar7 = (int64_t **)&g_02802688;
                  if (plVar3 != (int64_t *)0x0) {
                    (**(code **)(*plVar3 + 0x360))();
                    cVar2 = FUN_00e85ea0();
                    pplVar7 = &local_a0;
                    if (cVar2 == '\0') {
                      pplVar7 = (int64_t **)&g_02802688;
                    }
                  }
                  if (*pplVar7 != (int64_t *)0x0) {
                    pvVar6 = _pthread_getspecific((void*)pplVar7);
                    if (pvVar6 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_00e17ba0();
                    local_f8 = 0;
                    local_f0 = '\0';
                    FUN_00e8c420();
                    if ((local_f0 != '\0') && (local_f8 != 0)) {
                      FUN_00d50b20();
                    }
                    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
                      (**(code **)(*local_a0 + 0x10))();
                      FUN_00d50b20();
                    }
                  }
                }
                FUN_00e8cae0();
              }
            }
          }
          FUN_00cc12b0();
        }
        if (local_38[0] != false) {
          FUN_00d50b20();
        }
      }
    }
  }
  if ((((*(char *)((int64_t)this_ptr + 0xe1) != '\0') && (this_ptr[8] != 0)) &&
      (cVar2 = FUN_00db3680(), cVar2 == '\0')) && (cVar2 = FUN_00d74560(), cVar2 == '\0')) {
    local_d8 = *param_2;
    local_d0 = '\0';
    cVar2 = (**(code **)(*(int64_t *)*arg1 + 0x350))();
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      local_c8 = *arg1;
      local_c0 = '\0';
      local_b8 = *param_2;
      local_b0 = '\0';
      FUN_00db2960();
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}



// ============================================================
// 00c308f0
// ============================================================
// Function: FUN_00c308f0
// Address: 00c308f0
// Size: 2243 bytes
// Class: GNOverloudTapedesk

void FUN_00c308f0(void)

{
  int64_t lVar1;
  void*puVar2;
  void*puVar3;
  int64_t this_ptr;
  int64_t lVar4;
  bool bVar5;
  int64_t local_208;
  uint8_t local_200;
  int64_t local_1f8;
  uint8_t local_1f0;
  int64_t local_1e8;
  uint8_t local_1e0;
  int64_t local_1d8;
  uint8_t local_1d0;
  int64_t local_1c8;
  uint8_t local_1c0;
  int64_t local_1b8;
  uint8_t local_1b0;
  int64_t local_1a8;
  uint8_t local_1a0;
  int64_t local_198;
  uint8_t local_190;
  int64_t local_188;
  uint8_t local_180;
  int64_t local_178;
  uint8_t local_170;
  int64_t local_168;
  uint8_t local_160;
  int64_t local_158;
  uint8_t local_150;
  int64_t local_148;
  uint8_t local_140;
  int64_t local_138;
  uint8_t local_130;
  int64_t local_128;
  uint8_t local_120;
  int64_t local_118;
  uint8_t local_110;
  int64_t local_108;
  uint8_t local_100;
  int64_t local_f8;
  uint8_t local_f0;
  int64_t local_e8;
  uint8_t local_e0;
  int64_t local_d8;
  uint8_t local_d0;
  int64_t local_c8;
  uint8_t local_c0;
  int64_t local_b8;
  uint8_t local_b0;
  int64_t local_a8;
  uint8_t local_a0;
  int64_t local_98;
  uint8_t local_90;
  int64_t local_88;
  uint8_t local_80;
  int64_t local_78;
  uint8_t local_70;
  int64_t local_68;
  uint8_t local_60;
  int64_t local_58;
  uint8_t local_50;
  int64_t local_48;
  uint8_t local_40;
  int64_t local_38;
  uint8_t local_30;
  
  *(void*)(this_ptr + 0xb8) = 0x12;
  lVar1 = g_0276cb40;
  if (g_0276cb40 == 0) {
    lVar4 = *(int64_t *)(this_ptr + 0x90);
    if (lVar4 == 0) goto LAB_00c30959;
  }
  else {
    FUN_00d50b00();
    lVar4 = *(int64_t *)(this_ptr + 0x90);
    if (lVar4 == lVar1) {
      FUN_00d50b20();
      goto LAB_00c30959;
    }
  }
  *(int64_t *)(this_ptr + 0x90) = lVar1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_00c30959:
  *(void*)(this_ptr + 0xa8) = 1;
  if ((g_028a5f28 == (void*)0x0) || (g_028a5f31 == '\0')) {
    FUN_00e8cb50();
    if (g_028a5f28 == (void*)0x0) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_0254ed40;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      FUN_00d500e0();
      bVar5 = g_028a5f28 == (void*)0x0;
      g_028a5f28 = puVar3;
      if (((bVar5) || (FUN_00d50b20(), lVar1 = g_0276cb48, g_028a5f28 != (void*)0x0)) &&
         (lVar1 = g_0276cb48, g_028a5f30 == '\0')) {
        g_028a5f30 = '\x01';
        FUN_00e8cb90();
        lVar1 = g_0276cb48;
      }
      g_0276cb48 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276cb50;
      local_200 = 1;
      local_208 = lVar1;
      if (g_0276cb50 != 0) {
        FUN_00d50b00();
      }
      local_1f8 = lVar4;
      local_1f0 = 1;
      FUN_00bf1030(&local_1f8,&local_208);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276cb58;
      if (g_0276cb58 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276cb60;
      local_1e8 = lVar1;
      local_1e0 = 1;
      if (g_0276cb60 != 0) {
        FUN_00d50b00();
      }
      local_1d8 = lVar4;
      local_1d0 = 1;
      FUN_00bf1030(&local_1d8,&local_1e8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276cb68;
      if (g_0276cb68 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276cb70;
      local_1c8 = lVar1;
      local_1c0 = 1;
      if (g_0276cb70 != 0) {
        FUN_00d50b00();
      }
      local_1b8 = lVar4;
      local_1b0 = 1;
      FUN_00bf1030(&local_1b8,&local_1c8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276cb78;
      if (g_0276cb78 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276cb80;
      local_1a8 = lVar1;
      local_1a0 = 1;
      if (g_0276cb80 != 0) {
        FUN_00d50b00();
      }
      local_198 = lVar4;
      local_190 = 1;
      FUN_00bf1030(&local_198,&local_1a8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276cb88;
      if (g_0276cb88 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276cb90;
      local_188 = lVar1;
      local_180 = 1;
      if (g_0276cb90 != 0) {
        FUN_00d50b00();
      }
      local_178 = lVar4;
      local_170 = 1;
      FUN_00bf1030(&local_178,&local_188);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276cb98;
      if (g_0276cb98 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276cba0;
      local_168 = lVar1;
      local_160 = 1;
      if (g_0276cba0 != 0) {
        FUN_00d50b00();
      }
      local_158 = lVar4;
      local_150 = 1;
      FUN_00bf1030(&local_158,&local_168);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276cba8;
      if (g_0276cba8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276cbb0;
      local_148 = lVar1;
      local_140 = 1;
      if (g_0276cbb0 != 0) {
        FUN_00d50b00();
      }
      local_138 = lVar4;
      local_130 = 1;
      FUN_00bf1030(&local_138,&local_148);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276cbb8;
      if (g_0276cbb8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276cbc0;
      local_128 = lVar1;
      local_120 = 1;
      if (g_0276cbc0 != 0) {
        FUN_00d50b00();
      }
      local_118 = lVar4;
      local_110 = 1;
      FUN_00bf1030(&local_118,&local_128);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276cbc8;
      if (g_0276cbc8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276cbd0;
      local_108 = lVar1;
      local_100 = 1;
      if (g_0276cbd0 != 0) {
        FUN_00d50b00();
      }
      local_f8 = lVar4;
      local_f0 = 1;
      FUN_00bf1030(&local_f8,&local_108);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276cbd8;
      if (g_0276cbd8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276cbe0;
      local_e8 = lVar1;
      local_e0 = 1;
      if (g_0276cbe0 != 0) {
        FUN_00d50b00();
      }
      local_d8 = lVar4;
      local_d0 = 1;
      FUN_00bf1030(&local_d8,&local_e8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276cbe8;
      if (g_0276cbe8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276cbf0;
      local_c8 = lVar1;
      local_c0 = 1;
      if (g_0276cbf0 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar4;
      local_b0 = 1;
      FUN_00bf1030(&local_b8,&local_c8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276cbf8;
      if (g_0276cbf8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276cc00;
      local_a8 = lVar1;
      local_a0 = 1;
      if (g_0276cc00 != 0) {
        FUN_00d50b00();
      }
      local_98 = lVar4;
      local_90 = 1;
      FUN_00bf1030(&local_98,&local_a8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276cc08;
      if (g_0276cc08 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276cc10;
      local_88 = lVar1;
      local_80 = 1;
      if (g_0276cc10 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar4;
      local_70 = 1;
      FUN_00bf1030(&local_78,&local_88);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276cc18;
      if (g_0276cc18 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276cc20;
      local_68 = lVar1;
      local_60 = 1;
      if (g_0276cc20 != 0) {
        FUN_00d50b00();
      }
      local_58 = lVar4;
      local_50 = 1;
      FUN_00bf1030(&local_58,&local_68);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276cc28;
      if (g_0276cc28 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276cc30;
      local_48 = lVar1;
      local_40 = 1;
      if (g_0276cc30 != 0) {
        FUN_00d50b00();
      }
      local_38 = lVar4;
      local_30 = 1;
      FUN_00bf1030(&local_38,&local_48);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      g_028a5f31 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a5f31 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = *(void**)(this_ptr + 0xb0);
    if (puVar3 == g_028a5f28) {
      return;
    }
  }
  else {
    puVar3 = *(void**)(this_ptr + 0xb0);
    if (puVar3 == g_028a5f28) {
      return;
    }
  }
  puVar2 = g_028a5f28;
  if (g_028a5f28 != (void*)0x0) {
    FUN_00d50b00();
  }
  *(void**)(this_ptr + 0xb0) = puVar2;
  if (puVar3 == (void*)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 00c32cc0
// ============================================================
// Function: FUN_00c32cc0
// Address: 00c32cc0
// Size: 2027 bytes
// Class: GNOverloudTapedesk
// String references:
//   "Circle_%f_%f_%f"

void FUN_00c32cc0(uint64_t param_1,float param_2,float param_3)

{
  int64_t lVar1;
  code *pcVar2;
  void*puVar3;
  void*puVar4;
  uint32_t in_EDX;
  int64_t *arg1;
  void*this_ptr;
  bool bVar5;
  uint64_t uVar6;
  uint8_t in_XMM0 [16];
  uint8_t auVar7 [16];
  float fVar9;
  uint32_t in_XMM1_Dd;
  uint8_t auVar8 [16];
  float fVar10;
  uint32_t local_148;
  float fStack_144;
  uint32_t uStack_13c;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  void*local_110;
  char local_108;
  void*local_100;
  char local_f8;
  void*local_f0;
  char local_e8;
  void*local_e0;
  char local_d8;
  uint32_t local_d0;
  float local_cc;
  float local_c8;
  float fStack_c4;
  uint32_t uStack_c0;
  uint32_t uStack_bc;
  uint8_t local_b8 [16];
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  float local_74;
  void*local_70;
  char local_68;
  void*local_58;
  uint local_50;
  uint32_t local_4c;
  float local_48;
  float local_44;
  uint64_t local_40;
  uint32_t local_38;
  float local_34;
  
  fVar9 = (float)((uint64_t)param_1 >> 0x20);
  auVar7._0_4_ = g_0239011c * fVar9 + in_XMM0._0_4_;
  auVar7._4_4_ = g_0239011c * fVar9 + in_XMM0._4_4_;
  auVar7._8_4_ = in_XMM0._8_4_ + 0.0;
  auVar7._12_4_ = in_XMM0._12_4_ + 0.0;
  auVar7 = roundps(in_XMM0,auVar7,9);
  local_40 = CONCAT44(local_40._4_4_,g_02390118 + param_2);
  local_b8 = ZEXT416((uint)(g_024204d0 * (g_02390118 + param_2) * g_023d9594));
  local_74 = param_3;
  local_34 = param_2;
  ___sincosf_stret();
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02680400;
  *(void*)((int64_t)puVar3 + 0xc) = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  *(void*)((int64_t)puVar3 + 0x39) = 0;
  *(void*)((int64_t)puVar3 + 0x41) = 0;
  pcVar2 = g_02680418;
  (*g_02680418)();
  FUN_01d39180();
  fVar10 = (float)((int)fVar9 / 2) + g_023b1608;
  local_148 = auVar7._0_4_;
  fStack_144 = auVar7._4_4_;
  uStack_13c = auVar7._12_4_;
  local_cc = g_02394244 + fVar10;
  local_c8 = fStack_144;
  fStack_c4 = fStack_144;
  uStack_c0 = uStack_13c;
  uStack_bc = uStack_13c;
  local_38 = local_148;
  if ((local_74 != g_02390124) || (NAN(local_74) || NAN(g_02390124))) {
    if (0.0 <= (float)local_40) {
      FUN_01d39310();
      local_34 = (float)local_40;
    }
    else {
      FUN_01d39310();
      local_34 = (float)local_40;
    }
  }
  else {
    FUN_01d39310();
  }
  FUN_01d38830();
  FUN_01d48370();
  local_50 = 3;
  local_4c = local_38;
  local_48 = local_c8;
  local_58 = (void*)&g_026b2438;
  local_44 = fVar10;
  uVar6 = FUN_00d8cb40();
  if ((local_128 == '\0') && (local_130 != 0)) {
    uVar6 = FUN_00d50b00();
  }
  local_b8._0_8_ = local_130;
  local_120 = local_130;
  local_118 = '\0';
  FUN_000175c0(uVar6,&local_120);
  puVar4 = local_58;
  local_d0 = in_EDX;
  if (local_58 == (void*)0x0) {
    local_40 = 0;
    puVar4 = (void*)0x0;
  }
  else {
    if ((char)local_50 != '\0') {
      local_50 = local_50 & 0xffffff00;
      local_40 = CONCAT71((int7)((uint64_t)local_58 >> 8),1);
      bVar5 = false;
      goto LAB_00c32fe1;
    }
    uVar6 = FUN_00d50b00();
    local_40 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
  }
  bVar5 = puVar4 == (void*)0x0;
  if (((char)local_50 != '\0') && (local_58 != (void*)0x0)) {
    FUN_00d50b20();
  }
LAB_00c32fe1:
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if (bVar5) {
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &g_02680400;
    *(void*)((int64_t)puVar4 + 0xc) = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    *(void*)((int64_t)puVar4 + 0x39) = 0;
    *(void*)((int64_t)puVar4 + 0x41) = 0;
    uVar6 = (*pcVar2)();
    local_40 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
    uVar6 = FUN_01d39310();
    local_108 = '\0';
    local_58 = (void*)local_b8._0_8_;
    local_50 = local_50 & 0xffffff00;
    local_110 = puVar4;
    uVar6 = FUN_00ca0840(uVar6,&local_58);
    if (((char)local_50 != '\0') && (local_58 != (void*)0x0)) {
      uVar6 = FUN_00d50b20();
    }
    local_40 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
    if ((local_108 != '\0') && (local_110 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  local_f8 = '\0';
  local_100 = puVar4;
  (**(code **)(*(int64_t *)*this_ptr + 0x398))();
  if ((local_f8 != '\0') && (local_100 != (void*)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*this_ptr + 0x368))();
  local_a0 = 0;
  local_a8 = *(int64_t *)(*arg1 + 0x70);
  if (local_a8 != 0) {
    FUN_00d50b00();
  }
  local_a0 = '\x01';
  FUN_01d488d0();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  local_e8 = '\0';
  local_f0 = puVar3;
  (**(code **)(*(int64_t *)*this_ptr + 0x3a0))();
  if ((local_e8 != '\0') && (local_f0 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d48390();
  FUN_01d48370();
  local_d8 = '\0';
  local_e0 = puVar3;
  (**(code **)(*(int64_t *)*this_ptr + 0x398))();
  if ((local_d8 != '\0') && (local_e0 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((char)local_d0 == '\0') {
    local_80 = 0;
    lVar1 = *(int64_t *)(*arg1 + 0x150);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_80 = '\x01';
    local_88 = lVar1;
    FUN_01d488d0();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_90 = 0;
    lVar1 = *(int64_t *)(*arg1 + 0x148);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_90 = '\x01';
    local_98 = lVar1;
    FUN_01d488d0();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  auVar7 = insertps(in_XMM0,ZEXT416((uint)(g_024229f0 * (fVar10 + fVar10) + (local_c8 - fVar10))),
                    0x10);
  auVar8._4_4_ = fVar9;
  auVar8._0_4_ = fVar9;
  auVar8._8_4_ = in_XMM1_Dd;
  auVar8._12_4_ = in_XMM1_Dd;
  auVar8 = insertps(auVar8,ZEXT416((uint)((fVar10 + fVar10) * g_02394298)),0x10);
  (**(code **)(*(int64_t *)*this_ptr + 0x3b0))(auVar7._0_8_,auVar8._0_8_);
  FUN_01d48390();
  FUN_01d48b40();
  (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
  local_70 = local_58;
  local_68 = 0;
  if ((char)local_50 == '\0') {
    if (local_58 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = local_50 & 0xffffff00;
  }
  local_68 = '\x01';
  FUN_01d488d0();
  if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (local_58 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_74 != g_02390124) || (NAN(local_74) || NAN(g_02390124))) {
    (**(code **)(*(int64_t *)*this_ptr + 0x3e0))();
  }
  else if (local_34 < g_023b294c) {
    if (g_0239011c < local_34) {
      FUN_01d48b40((local_34 + g_02390118) * g_02394248 + g_02390124);
    }
    (**(code **)(*(int64_t *)*this_ptr + 0x3e0))();
  }
  if (local_b8._0_8_ != 0) {
    FUN_00d50b20();
  }
  if (((char)local_40 != '\0') && (puVar4 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 00c2f0a0
// ============================================================
// Function: FUN_00c2f0a0
// Address: 00c2f0a0
// Size: 1601 bytes
// Class: GNOverloudTapedesk
// String references:
//   "GNOverloudTapedesk"

void* FUN_00c2f0a0(int64_t *param_1,uint64_t param_2,void*param_3)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  void*this_ptr;
  int64_t **pplVar7;
  int64_t local_c0;
  uint8_t local_b8;
  uint64_t local_b0;
  uint8_t local_a8;
  int64_t *local_48;
  char local_40;
  char local_31;
  
  plVar6 = (int64_t *)*param_1;
  if ((g_0276e460 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_0276e3b0 = FUN_00b10020();
    g_0276e398 = "GNOverloudTapedesk";
    g_0276e3a0 = 0xe8;
    g_0276e3a8 = FUN_00c41400;
    g_0276e3b8 = 0;
    ram_000000000276e3c0 = 0;
    g_0276e3c8 = 0;
    ram_000000000276e3d0 = 0;
    g_0276e3d8 = 0;
    ram_000000000276e3e0 = 0;
    g_0276e3e8 = 0;
    ram_000000000276e3f0 = 0;
    g_0276e3f8 = 0;
    ram_000000000276e400 = 0;
    g_0276e408 = 0;
    ram_000000000276e410 = 0;
    g_0276e418 = 0;
    ram_000000000276e420 = 0;
    g_0276e428 = 0;
    ram_000000000276e430 = 0;
    g_0276e438 = 0;
    ram_000000000276e440 = 0;
    g_0276e448 = 0;
    ram_000000000276e450 = 0;
    g_0276e458 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (int64_t *)0x0) {
LAB_00c2f0f9:
    plVar6 = &g_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar6 = param_1;
    if (cVar4 == '\0') goto LAB_00c2f0f9;
  }
  lVar1 = *plVar6;
  local_31 = (char)plVar6[1];
  if ((local_31 != '\0') && (lVar1 != 0)) {
    FUN_00d50b00();
  }
  pplVar7 = &local_48;
  FUN_00c16ff0();
  plVar6 = local_48;
  if ((g_0276e460 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_0276e3b0 = FUN_00b10020();
    g_0276e398 = "GNOverloudTapedesk";
    g_0276e3a0 = 0xe8;
    g_0276e3a8 = FUN_00c41400;
    g_0276e3b8 = 0;
    ram_000000000276e3c0 = 0;
    g_0276e3c8 = 0;
    ram_000000000276e3d0 = 0;
    g_0276e3d8 = 0;
    ram_000000000276e3e0 = 0;
    g_0276e3e8 = 0;
    ram_000000000276e3f0 = 0;
    g_0276e3f8 = 0;
    ram_000000000276e400 = 0;
    g_0276e408 = 0;
    ram_000000000276e410 = 0;
    g_0276e418 = 0;
    ram_000000000276e420 = 0;
    g_0276e428 = 0;
    ram_000000000276e430 = 0;
    g_0276e438 = 0;
    ram_000000000276e440 = 0;
    g_0276e448 = 0;
    ram_000000000276e450 = 0;
    g_0276e458 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (int64_t *)0x0) {
LAB_00c2f16b:
    pplVar7 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_00c2f16b;
  }
  plVar6 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar3 = g_0276caf8;
  plVar2 = (int64_t *)*param_3;
  if (g_0276caf8 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar2 + 0x50))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar3 = g_0276cb00;
  if (cVar4 == '\0') {
    if (plVar6 == (int64_t *)0x0) {
LAB_00c2f49f:
      local_c0 = *param_1;
      local_b8 = 0;
      local_b0 = *param_3;
      local_a8 = 0;
      FUN_00c17210(&local_c0,param_2,&local_b0);
      goto LAB_00c2f4e7;
    }
    plVar2 = (int64_t *)*param_3;
    if (g_0276cb00 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*plVar2 + 0x50))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = g_0276cb08;
    if (cVar4 == '\0') {
      plVar2 = (int64_t *)*param_3;
      if (g_0276cb08 != 0) {
        FUN_00d50b00();
      }
      cVar4 = (**(code **)(*plVar2 + 0x50))();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276cb10;
      if (cVar4 == '\0') {
        plVar2 = (int64_t *)*param_3;
        if (g_0276cb10 != 0) {
          FUN_00d50b00();
        }
        cVar4 = (**(code **)(*plVar2 + 0x50))();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if (cVar4 == '\0') goto LAB_00c2f49f;
        FUN_00aea610(*(void*)((int64_t)plVar6 + 0xcc));
        FUN_00d46dc0();
        plVar6 = local_48;
        *(void*)(this_ptr + 1) = 0;
        if (local_40 != '\0') goto LAB_00c2f551;
        if (local_48 == (int64_t *)0x0) goto LAB_00c2f54f;
        FUN_00d50b00();
        *this_ptr = plVar6;
        *(void*)(this_ptr + 1) = 1;
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_00aea610((int)plVar6[0x19]);
        FUN_00d46dc0();
        plVar6 = local_48;
        *(void*)(this_ptr + 1) = 0;
        if (local_40 != '\0') goto LAB_00c2f551;
        if (local_48 == (int64_t *)0x0) goto LAB_00c2f54f;
        FUN_00d50b00();
        *this_ptr = plVar6;
        *(void*)(this_ptr + 1) = 1;
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (*(int *)(lVar1 + 0xd8) == 0) {
        FUN_00aea610((int)plVar6[0x1a]);
        FUN_00d46dc0();
        plVar6 = local_48;
        *(void*)(this_ptr + 1) = 0;
        if (local_40 == '\0') {
          if (local_48 == (int64_t *)0x0) goto LAB_00c2f54f;
          FUN_00d50b00();
          *this_ptr = plVar6;
          *(void*)(this_ptr + 1) = 1;
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00c2f55d;
        }
      }
      else {
        FUN_00aea610(*(void*)((int64_t)plVar6 + 0xd4));
        FUN_00d46dc0();
        plVar6 = local_48;
        *(void*)(this_ptr + 1) = 0;
        if (local_40 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
            *this_ptr = plVar6;
            *(void*)(this_ptr + 1) = 1;
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_00c2f55d;
          }
LAB_00c2f54f:
          local_48 = (int64_t *)0x0;
        }
      }
LAB_00c2f551:
      *this_ptr = local_48;
      *(void*)(this_ptr + 1) = 1;
    }
  }
  else {
    FUN_00d46530();
    plVar2 = local_48;
    *(void*)(this_ptr + 1) = 0;
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
        *this_ptr = plVar2;
        *(void*)(this_ptr + 1) = 1;
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00c2f4e7;
      }
      local_48 = (int64_t *)0x0;
    }
    *this_ptr = local_48;
    *(void*)(this_ptr + 1) = 1;
LAB_00c2f4e7:
    if (plVar6 == (int64_t *)0x0) goto LAB_00c2f565;
  }
LAB_00c2f55d:
  FUN_00d50b20();
LAB_00c2f565:
  if ((local_31 != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 00c319e0
// ============================================================
// Function: FUN_00c319e0
// Address: 00c319e0
// Size: 1459 bytes
// Class: GNOverloudTapedesk

void FUN_00c319e0(uint64_t param_1,int param_2)

{
  bool bVar1;
  int64_t lVar2;
  void*puVar3;
  void*puVar4;
  void*puVar5;
  void*this_ptr;
  bool bVar6;
  
  puVar4 = g_028a5f58;
  puVar3 = g_028a5f48;
  puVar5 = g_028a5f38;
  if (param_2 == 10) {
    if ((g_028a5f58 == (void*)0x0) || (g_028a5f61 == '\0')) {
      FUN_00e8cb50();
      if (g_028a5f58 == (void*)0x0) {
        puVar5 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &g_02572358;
        (*g_02572370)();
        if (g_028a5f58 == puVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = g_028a5f58 != (void*)0x0;
          g_028a5f58 = puVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (g_028a5f60 == '\0') {
          g_028a5f60 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = g_0276cc70;
        if (g_0276cc70 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276cc78;
        if (g_0276cc78 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        g_028a5f61 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028a5f61 = '\x01';
        FUN_00e8cb70();
      }
      puVar5 = g_028a5f58;
      *(void*)(this_ptr + 1) = 0;
      if (puVar5 == (void*)0x0) goto LAB_00c31f77;
    }
    else {
      *(void*)(this_ptr + 1) = 0;
      puVar5 = puVar4;
    }
    FUN_00d50b00();
    goto LAB_00c31f79;
  }
  if (param_2 == 9) {
    if ((g_028a5f48 == (void*)0x0) || (g_028a5f51 == '\0')) {
      FUN_00e8cb50();
      if (g_028a5f48 == (void*)0x0) {
        puVar5 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &g_02572358;
        (*g_02572370)();
        if (g_028a5f48 == puVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = g_028a5f48 != (void*)0x0;
          g_028a5f48 = puVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (g_028a5f50 == '\0') {
          g_028a5f50 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = g_0276cc58;
        if (g_0276cc58 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276cc60;
        if (g_0276cc60 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276cc68;
        if (g_0276cc68 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        g_028a5f51 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028a5f51 = '\x01';
        FUN_00e8cb70();
      }
      puVar5 = g_028a5f48;
      *(void*)(this_ptr + 1) = 0;
      if (puVar5 == (void*)0x0) goto LAB_00c31f77;
    }
    else {
      *(void*)(this_ptr + 1) = 0;
      puVar5 = puVar3;
    }
    FUN_00d50b00();
  }
  else {
    if (param_2 != 1) {
      FUN_00b34370();
      return;
    }
    if ((g_028a5f38 == (void*)0x0) || (g_028a5f41 == '\0')) {
      FUN_00e8cb50();
      if (g_028a5f38 == (void*)0x0) {
        puVar5 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &g_02572358;
        (*g_02572370)();
        if (g_028a5f38 == puVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = g_028a5f38 != (void*)0x0;
          g_028a5f38 = puVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (g_028a5f40 == '\0') {
          g_028a5f40 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = g_0276cc40;
        if (g_0276cc40 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276cc48;
        if (g_0276cc48 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276cc50;
        if (g_0276cc50 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        g_028a5f41 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028a5f41 = '\x01';
        FUN_00e8cb70();
      }
      puVar5 = g_028a5f38;
      *(void*)(this_ptr + 1) = 0;
      if (puVar5 == (void*)0x0) {
LAB_00c31f77:
        puVar5 = (void*)0x0;
        goto LAB_00c31f79;
      }
    }
    else {
      *(void*)(this_ptr + 1) = 0;
    }
    FUN_00d50b00();
  }
LAB_00c31f79:
  *this_ptr = puVar5;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 00c2fa50
// ============================================================
// Function: FUN_00c2fa50
// Address: 00c2fa50
// Size: 1187 bytes
// Class: GNOverloudTapedesk

uint64_t FUN_00c2fa50(int64_t *param_1,int64_t *param_2,int64_t *param_3)

{
  int64_t lVar1;
  char cVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint uVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  int64_t this_ptr;
  int64_t local_118;
  uint8_t local_110;
  int64_t *local_d0;
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
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  *(void*)(this_ptr + 0xb0) = 0;
  lVar1 = g_0276cb18;
  plVar6 = (int64_t *)*param_1;
  if (g_0276cb18 != 0) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*plVar6 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_0276caf8;
  if (cVar2 == '\0') {
    plVar6 = (int64_t *)*param_1;
    if (g_0276caf8 != 0) {
      FUN_00d50b00();
    }
    local_b0 = lVar1;
    local_a8 = '\x01';
    uVar3 = (**(code **)(*plVar6 + 0x50))();
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((char)uVar3 == '\0') {
      local_118 = *param_2;
      local_110 = 0;
      local_a0 = *param_1;
      local_98 = '\0';
      local_90 = *param_3;
      local_88 = '\0';
      uVar5 = FUN_00c17aa0(&local_a0,&local_118,&local_90);
      uVar7 = (uint64_t)uVar5;
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      uVar4 = FUN_00d45870();
      *(void*)(*param_2 + 0xd8) = uVar4;
      uVar7 = CONCAT71((uint7)(uint3)((uint)uVar3 >> 8),1);
    }
  }
  else {
    plVar6 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar6 + 0x18))();
    lVar1 = g_0276cb20;
    if (g_0276cb20 != 0) {
      FUN_00d50b00();
    }
    local_40 = lVar1;
    local_38 = '\0';
    FUN_00ca0840();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_00d46300();
    local_60 = local_80;
    local_58 = 0;
    lVar1 = g_0276cb28;
    if (local_78 == '\0') {
      if (local_80 != 0) {
        FUN_00d50b00();
        lVar1 = g_0276cb28;
      }
    }
    else {
      local_78 = '\0';
    }
    local_58 = '\x01';
    g_0276cb28 = lVar1;
    if (lVar1 != 0) {
      local_58 = '\x01';
      FUN_00d50b00();
    }
    local_38 = '\0';
    local_40 = lVar1;
    FUN_00ca0840();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    lVar1 = g_0276cb30;
    if (g_0276cb30 != 0) {
      FUN_00d50b00();
    }
    local_68 = 0;
    FUN_00d50b00();
    local_68 = '\x01';
    local_c8 = '\0';
    local_d0 = plVar6;
    local_70 = this_ptr;
    FUN_00d40470(&local_d0,&local_70,3,3);
    if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = g_0276cb28;
    if (g_0276cb28 != 0) {
      FUN_00d50b00();
    }
    local_c0 = lVar1;
    local_b8 = '\x01';
    FUN_000175c0();
    local_50 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    uVar5 = FUN_00c70bc0();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((char)uVar5 != '\0') {
      *(void*)(this_ptr + 0xb0) = 1;
    }
    FUN_00d50b20();
    uVar7 = (uint64_t)uVar5 ^ 1;
  }
  return uVar7;
}



// ============================================================
// 00c33bc0
// ============================================================
// Function: FUN_00c33bc0
// Address: 00c33bc0
// Size: 965 bytes
// Class: GNOverloudTapedesk

void FUN_00c33bc0(void)

{
  int iVar1;
  int64_t lVar2;
  code *pcVar3;
  void*puVar4;
  int64_t lVar5;
  int64_t this_ptr;
  int64_t lVar6;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  uint64_t local_60;
  uint32_t local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  uint32_t local_34;
  
  FUN_01d0f230();
  local_b0 = g_0276cc80;
  if ((*(int64_t *)(this_ptr + 0x1d8) != 0) && (*(int64_t *)(this_ptr + 0x1d0) != 0)) {
    if (g_0276cc80 != 0) {
      FUN_00d50b00();
    }
    local_a8 = '\x01';
    FUN_00d91000(1,&local_b0);
    lVar5 = local_78;
    if (local_70 == '\0') {
      if (((local_78 != 0) && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_70 = '\0';
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    lVar6 = g_0276cc80;
    local_80 = lVar5;
    if (g_0276cc80 != 0) {
      FUN_00d50b00();
    }
    local_a0 = lVar6;
    local_98 = '\x01';
    FUN_00d91000(1,&local_a0);
    local_40 = local_78;
    if (local_70 == '\0') {
      if (((local_78 != 0) && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_70 = '\0';
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &g_025683c0;
    pcVar3 = g_025683d8;
    (*g_025683d8)();
    FUN_00c92170();
    FUN_00c92160();
    lVar6 = *(int64_t *)(this_ptr + 0x1e0);
    *(void**)(this_ptr + 0x1e0) = puVar4;
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &g_025683c0;
    (*pcVar3)();
    FUN_00c92170();
    FUN_00c92160();
    lVar6 = *(int64_t *)(this_ptr + 0x1e8);
    *(void**)(this_ptr + 0x1e8) = puVar4;
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      local_70 = '\0';
      local_78 = 0;
      local_68 = lVar5;
      local_58 = 0;
      local_60 = 0;
      if (0 < *(int *)(lVar5 + 0xc)) {
        lVar6 = 0;
        do {
          local_90 = *(int64_t *)(*(int64_t *)(lVar5 + 0x10) + lVar6 * 8);
          lVar5 = *(int64_t *)(this_ptr + 0x1e0);
          local_88 = '\0';
          local_78 = local_90;
          local_34 = FUN_00c71d60();
          iVar1 = *(int *)(lVar5 + 0x18);
          FUN_00c8e340(local_34,1);
          *(void*)(*(int64_t *)(lVar5 + 0x10) + (int64_t)iVar1) = local_34;
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          lVar5 = *(int64_t *)(this_ptr + 0x1e8);
          lVar2 = *(int64_t *)(*(int64_t *)(local_40 + 0x10) + lVar6 * 8);
          local_48 = 0;
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          local_48 = '\x01';
          local_50 = lVar2;
          local_34 = FUN_00c71d60();
          iVar1 = *(int *)(lVar5 + 0x18);
          FUN_00c8e340(local_34,1);
          *(void*)(*(int64_t *)(lVar5 + 0x10) + (int64_t)iVar1) = local_34;
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          lVar6 = lVar6 + 1;
          local_60 = CONCAT44(local_60._4_4_,(int)lVar6);
          lVar5 = local_80;
        } while ((int)lVar6 < *(int *)(local_80 + 0xc));
      }
      FUN_00018280();
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 00c34160
// ============================================================
// Function: FUN_00c34160
// Address: 00c34160
// Size: 803 bytes
// Class: GNOverloudTapedesk

void FUN_00c34160(uint64_t param_1,uint64_t param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int64_t *plVar4;
  void*puVar5;
  uint64_t uVar6;
  int iVar7;
  void*arg1;
  int64_t lVar8;
  int64_t *this_ptr;
  float fVar9;
  float extraout_XMM0_Db;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int64_t local_58;
  char local_50;
  uint local_48;
  
  fVar11 = (float)((uint64_t)param_2 >> 0x20);
  if (this_ptr[0x3c] != 0) {
    iVar2 = *(int *)(this_ptr[0x3c] + 0x18);
    iVar7 = iVar2 + 3;
    if (-1 < iVar2) {
      iVar7 = iVar2;
    }
    if (3 < iVar2) {
      fVar9 = (float)(**(code **)(*this_ptr + 0x930))();
      FUN_01e3f820();
      pfVar3 = *(float **)(this_ptr[0x3c] + 0x10);
      fVar1 = *pfVar3;
      if (fVar9 <= fVar1) {
        fVar13 = **(float **)(this_ptr[0x3d] + 0x10);
      }
      else {
        uVar6 = (uint64_t)((iVar7 >> 2) - 1);
        if (pfVar3[uVar6] <= fVar9) {
          fVar13 = *(float *)(*(int64_t *)(this_ptr[0x3d] + 0x10) + uVar6 * 4);
        }
        else {
          uVar6 = 0;
          while (fVar1 < fVar9) {
            lVar8 = uVar6 + 1;
            uVar6 = uVar6 + 1;
            fVar1 = pfVar3[lVar8];
          }
          lVar8 = (int64_t)((uVar6 << 0x20) + -0x100000000) >> 0x1e;
          fVar10 = *(float *)((int64_t)pfVar3 + lVar8);
          fVar13 = *(float *)(*(int64_t *)(this_ptr[0x3d] + 0x10) + lVar8);
          fVar13 = ((*(float *)(*(int64_t *)(this_ptr[0x3d] + 0x10) + (uVar6 & 0xffffffff) * 4) -
                    fVar13) * (fVar9 - fVar10)) / (fVar1 - fVar10) + fVar13;
        }
      }
      fVar1 = *(float *)(this_ptr + 0x39);
      FUN_01d48370();
      plVar4 = (int64_t *)*arg1;
      FUN_01e3f820();
      (**(code **)(*plVar4 + 0x390))();
      FUN_01cfbee0(g_0239011c,0,0);
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_01d488d0();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      fVar10 = (float)((uint)(g_023b5d7c - fVar13) & -(uint)(fVar13 < g_023b5d7c));
      fVar12 = 0.0;
      local_48 = ~-(uint)(fVar13 < g_023b5d7c) & ((uint)(g_023b5d80 + fVar13) ^ g_023945e0) |
                 (uint)fVar10;
      plVar4 = (int64_t *)*arg1;
      fVar9 = (float)FUN_01e3f820();
      fVar10 = fVar10 * g_0239011c;
      FUN_01e3f820();
      (**(code **)(*plVar4 + 0x370))
                (fVar9 + fVar10,
                 fVar12 + extraout_XMM0_Db + g_02390d00 + *(float *)(this_ptr + 0x39));
      (**(code **)(*(int64_t *)*arg1 + 0x378))(local_48);
      puVar5 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar5 = &g_02680400;
      *(void*)((int64_t)puVar5 + 0xc) = 0;
      puVar5[6] = 0;
      puVar5[7] = 0;
      *(void*)((int64_t)puVar5 + 0x39) = 0;
      *(void*)((int64_t)puVar5 + 0x41) = 0;
      (*g_02680418)();
      FUN_01d38ba0(g_02394244,0);
      FUN_01d38ba0(0,(uint)(fVar11 + fVar1) ^ g_023945e0);
      FUN_01d38ba0(g_0239458c,0);
      FUN_01d38b10();
      (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
      FUN_01d48390();
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 01f316e0
// ============================================================
// Function: FUN_01f316e0
// Address: 01f316e0
// Size: 1142 bytes
// Class: GNOverloudTapedesk

uint32_t FUN_01f316e0(int64_t *param_1,uint64_t param_2,int64_t *param_3,int64_t *param_4)

{
  int64_t lVar1;
  void*puVar2;
  int iVar3;
  void*puVar4;
  int64_t lVar5;
  void*puVar6;
  uint32_t uVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  
  if (*arg1 == 0) {
    (**(code **)(*this_ptr + 0x458))();
    lVar5 = *arg1;
    if (lVar5 == local_48) {
      if (((char)arg1[1] != '\0') || (local_48 == 0)) goto LAB_01f317bc;
      if (local_40 == '\0') {
        FUN_00d50b00();
        goto LAB_01f317b5;
      }
    }
    else {
      lVar1 = arg1[1];
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        *arg1 = local_48;
        if (((char)lVar1 != '\0') && (lVar5 != 0)) {
          FUN_00d50b20();
        }
LAB_01f317b5:
        local_38 = arg1 + 1;
        *(void*)local_38 = 1;
LAB_01f317bc:
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01f317d0;
      }
      *arg1 = local_48;
      if (((char)lVar1 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
    }
    local_38 = arg1 + 1;
    *(void*)local_38 = 1;
  }
LAB_01f317d0:
  *(int *)((int64_t)this_ptr + 0xdc) = *(int *)((int64_t)this_ptr + 0xdc) + 1;
  *(int *)(this_ptr + 0x1c) = (int)this_ptr[0x1c] + 1;
  _objc_alloc();
  puVar2 = PTR__objc_msgSend_024a9998;
  (*PTR__objc_msgSend_024a9998)();
  _objc_alloc();
  (*puVar2)();
  _objc_autorelease();
  (*puVar2)();
  FUN_00e1cfc0();
  (*PTR__objc_msgSend_024a9998)();
  FUN_00e1cfc0();
  (*PTR__objc_msgSend_024a9998)();
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_025683c0;
  (*g_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  if ((*param_1 != 0) && (iVar3 = FUN_00d8c7a0(), iVar3 != 0)) {
    FUN_00e1cfc0();
    (*PTR__objc_msgSend_024a9998)();
    (*PTR__objc_msgSend_024a9998)();
    iVar3 = *(int *)(puVar4 + 3);
    FUN_00c8e340();
    *(void*)(puVar4[2] + (int64_t)iVar3) = 0;
  }
  if ((*param_3 != 0) && (iVar3 = FUN_00d8c7a0(), iVar3 != 0)) {
    FUN_00e1cfc0();
    (*PTR__objc_msgSend_024a9998)();
    (*PTR__objc_msgSend_024a9998)();
    iVar3 = *(int *)(puVar4 + 3);
    FUN_00c8e340();
    *(void*)(puVar4[2] + (int64_t)iVar3) = 1;
  }
  if ((*param_4 != 0) && (iVar3 = FUN_00d8c7a0(), iVar3 != 0)) {
    FUN_00e1cfc0();
    (*PTR__objc_msgSend_024a9998)();
    (*PTR__objc_msgSend_024a9998)();
    (*PTR__objc_msgSend_024a9998)();
    iVar3 = *(int *)(puVar4 + 3);
    FUN_00c8e340();
    *(void*)(puVar4[2] + (int64_t)iVar3) = 2;
  }
  lVar5 = (*PTR__objc_msgSend_024a9998)();
  if (lVar5 == 0x3ea) {
    puVar6 = (void*)(puVar4[2] + 8);
  }
  else if (lVar5 == 0x3e9) {
    puVar6 = (void*)(puVar4[2] + 4);
  }
  else {
    uVar7 = 0;
    if (lVar5 != 1000) goto LAB_01f31b1e;
    puVar6 = (void*)puVar4[2];
  }
  uVar7 = *puVar6;
LAB_01f31b1e:
  (*PTR__objc_release_024a99a0)();
  *(int *)((int64_t)this_ptr + 0xdc) = *(int *)((int64_t)this_ptr + 0xdc) + -1;
  *(int *)(this_ptr + 0x1c) = (int)this_ptr[0x1c] + -1;
  FUN_00d50b20();
  return uVar7;
}



// ============================================================
// 00c36d90
// ============================================================
// Function: FUN_00c36d90
// Address: 00c36d90
// Size: 772 bytes
// Class: GNOverloudTapedesk

uint64_t FUN_00c36d90(uint64_t param_1,byte param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint64_t uVar6;
  int64_t *arg1;
  int64_t *this_ptr;
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
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01cae990();
  plVar2 = local_40;
  lVar1 = g_027ef7e8;
  if (g_027ef7e8 != 0) {
    FUN_00d50b00();
  }
  bVar3 = (**(code **)(*plVar2 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar3 & param_2) == 0) {
    local_70 = *arg1;
    local_68 = '\0';
    uVar5 = FUN_01d16950(param_1,param_2);
    uVar6 = (uint64_t)uVar5;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    iVar4 = FUN_01caea00();
    if (iVar4 == 0) {
      FUN_00d46530();
      local_50 = local_40;
      local_48 = 0;
      local_90 = g_027e7c20;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
          local_90 = g_027e7c20;
        }
      }
      else {
        local_38 = '\0';
      }
      local_48 = '\x01';
      g_027e7c20 = local_90;
      if (local_90 != 0) {
        local_48 = '\x01';
        FUN_00d50b00();
      }
      local_88 = '\x01';
      (**(code **)(*this_ptr + 0x4d0))(param_1,&local_90);
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01caea40();
      FUN_00d46530();
      local_60 = local_40;
      local_58 = 0;
      local_a0 = g_027e7c20;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
          local_a0 = g_027e7c20;
        }
      }
      else {
        local_38 = '\0';
      }
      local_58 = '\x01';
      g_027e7c20 = local_a0;
      if (local_a0 != 0) {
        local_58 = '\x01';
        FUN_00d50b00();
      }
      local_98 = '\x01';
      (**(code **)(*this_ptr + 0x4d0))(param_1,&local_a0);
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    lVar1 = g_027e7c20;
    if (g_027e7c20 != 0) {
      FUN_00d50b00();
    }
    local_80 = lVar1;
    local_78 = '\x01';
    FUN_01ccaae0(param_1,&local_80);
    FUN_01d243a0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    uVar6 = CONCAT71((int7)((uint64_t)lVar1 >> 8),1);
  }
  return uVar6 & 0xffffffff;
}



// ============================================================
// 00c2e750
// ============================================================
// Function: FUN_00c2e750
// Address: 00c2e750
// Size: 731 bytes
// Class: GNOverloudTapedesk

void FUN_00c2e750(int param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int64_t *arg1;
  void*this_ptr;
  uint32_t uVar4;
  uint32_t extraout_XMM0_Da;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  float local_44;
  int64_t *local_40;
  char local_38;
  
  plVar1 = (int64_t *)arg1[3];
  if ((plVar1 == (int64_t *)0x0) || (lVar2 = arg1[2], lVar2 == 0)) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    local_90 = 0;
    local_44 = (float)param_1;
    uVar4 = FUN_00d50b00();
    local_90 = '\x01';
    local_98 = lVar2;
    (**(code **)(*plVar1 + 0x618))(uVar4,&local_98);
    plVar1 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    cVar3 = (**(code **)(*plVar1 + 0x50))();
    if (cVar3 != '\0') {
      plVar1 = (int64_t *)arg1[3];
      local_80 = 0;
      lVar2 = arg1[2];
      uVar4 = extraout_XMM0_Da;
      if (lVar2 != 0) {
        uVar4 = FUN_00d50b00();
      }
      local_80 = '\x01';
      local_88 = lVar2;
      (**(code **)(*plVar1 + 0x88))(uVar4,&local_88);
      local_68 = local_40;
      local_60 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_60 = '\x01';
      uVar4 = FUN_00c71d60();
      *(void*)(arg1 + 4) = uVar4;
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
    }
    local_44 = (float)(int)local_44 * g_023d4ff8 + *(float *)(arg1 + 4);
    plVar1 = (int64_t *)arg1[3];
    uVar4 = FUN_00d46dc0();
    local_58 = local_40;
    local_50 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        uVar4 = FUN_00d50b00();
      }
      lVar2 = arg1[2];
    }
    else {
      local_38 = '\0';
      lVar2 = arg1[2];
    }
    local_50 = '\x01';
    if (lVar2 != 0) {
      local_50 = '\x01';
      local_70 = 0;
      uVar4 = FUN_00d50b00();
    }
    local_70 = '\x01';
    local_78 = lVar2;
    (**(code **)(*plVar1 + 0x80))(uVar4,&local_78);
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*arg1 + 0x378))(local_44);
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00c324e0
// ============================================================
// Function: FUN_00c324e0
// Address: 00c324e0
// Size: 590 bytes
// Class: GNOverloudTapedesk

void FUN_00c324e0(float param_1)

{
  int unaff_ESI;
  int64_t *this_ptr;
  byte bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  iVar2 = -1;
  fVar4 = 0.0;
  bVar1 = 0;
  if ((*(char *)((int64_t)this_ptr + 0xdc) != '\0') && (bVar1 = 0, unaff_ESI - 7U < 2)) {
    fVar4 = (float)(**(code **)(*this_ptr + 0x458))();
    fVar4 = param_1 - fVar4;
    bVar1 = 1;
    if (unaff_ESI == 7) {
      iVar2 = 8;
    }
    else if (unaff_ESI == 8) {
      iVar2 = 7;
    }
    else {
      bVar1 = 0;
    }
  }
  fVar3 = *(float *)(*(int64_t *)(this_ptr[0x13] + 0x10) + (int64_t)unaff_ESI * 4);
  if ((fVar3 != param_1) || (NAN(fVar3) || NAN(param_1))) {
    *(float *)(*(int64_t *)(this_ptr[0x13] + 0x10) + (int64_t)unaff_ESI * 4) = param_1;
    (**(code **)(*this_ptr + 0x638))(param_1);
    FUN_00b32040();
  }
  if (!(bool)(bVar1 & (fVar4 != 0.0 && *(char *)((int64_t)this_ptr + 0xdc) != '\0'))) {
    return;
  }
  fVar3 = *(float *)(this_ptr + 0x1c);
  if ((fVar3 == 0.0) && (!NAN(fVar3))) {
    fVar3 = (float)(**(code **)(*this_ptr + 0x458))();
  }
  fVar3 = fVar3 - fVar4;
  if ((0.0 <= fVar3) && (fVar3 <= g_02390124)) {
    *(void*)(this_ptr + 0x1c) = 0;
    fVar4 = *(float *)(*(int64_t *)(this_ptr[0x13] + 0x10) + (int64_t)iVar2 * 4);
    if ((fVar4 == fVar3) && (!NAN(fVar4) && !NAN(fVar3))) {
      return;
    }
    *(float *)(*(int64_t *)(this_ptr[0x13] + 0x10) + (int64_t)iVar2 * 4) = fVar3;
    (**(code **)(*this_ptr + 0x638))();
    FUN_00b32040();
    return;
  }
  if (((0.0 <= fVar3) || (*(float *)(this_ptr + 0x1c) != 0.0)) ||
     (NAN(*(float *)(this_ptr + 0x1c)))) {
    if (((fVar3 <= g_02390124) || (*(float *)(this_ptr + 0x1c) != 0.0)) ||
       (NAN(*(float *)(this_ptr + 0x1c)))) goto LAB_00c32718;
    fVar4 = *(float *)(*(int64_t *)(this_ptr[0x13] + 0x10) + (int64_t)iVar2 * 4);
    if ((fVar4 == g_02390124) && (!NAN(fVar4) && !NAN(g_02390124))) goto LAB_00c32718;
    *(void*)(*(int64_t *)(this_ptr[0x13] + 0x10) + (int64_t)iVar2 * 4) = 0x3f800000;
    fVar4 = g_02390124;
  }
  else {
    fVar4 = *(float *)(*(int64_t *)(this_ptr[0x13] + 0x10) + (int64_t)iVar2 * 4);
    if ((fVar4 == 0.0) && (!NAN(fVar4))) goto LAB_00c32718;
    *(void*)(*(int64_t *)(this_ptr[0x13] + 0x10) + (int64_t)iVar2 * 4) = 0;
    fVar4 = 0.0;
  }
  (**(code **)(*this_ptr + 0x638))(fVar4);
  FUN_00b32040();
LAB_00c32718:
  *(float *)(this_ptr + 0x1c) = fVar3;
  return;
}



// ============================================================
// 00c302d0
// ============================================================
// Function: FUN_00c302d0
// Address: 00c302d0
// Size: 717 bytes
// Class: GNOverloudTapedesk
// String references:
//   "GNOverloudTapedesk"

void FUN_00c302d0(int64_t *param_1,int64_t *param_2,int64_t *param_3)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t this_ptr;
  int64_t **pplVar4;
  uint32_t uVar5;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t local_b8;
  uint8_t local_b0;
  int64_t local_a8;
  uint8_t local_a0;
  int64_t *local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  if (*(char *)(this_ptr + 0xb0) == '\0') goto LAB_00c304a9;
  pplVar4 = &local_40;
  local_98 = param_1;
  uVar5 = FUN_00b37610();
  plVar1 = local_40;
  // [STATIC_INIT: property registration]
  if (plVar1 == (int64_t *)0x0) {
LAB_00c30349:
    pplVar4 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    uVar5 = extraout_XMM0_Da;
    if (cVar2 == '\0') goto LAB_00c30349;
  }
  plVar1 = *pplVar4;
  if (*(char *)(pplVar4 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      uVar5 = FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar4 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar5 = FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    local_90 = *param_3;
    local_88 = '\0';
    local_80 = *local_98;
    local_78 = '\0';
    (**(code **)(*plVar1 + 0x80))(uVar5,&local_80);
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_70 = g_0276cb38;
  if (g_0276cb38 != 0) {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  local_60 = *param_2;
  local_58 = '\0';
  local_50 = 0;
  local_48 = '\0';
  FUN_00d40470(&local_50,&local_60,3,3);
  param_1 = local_98;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_00c304a9:
  local_b8 = *param_2;
  local_b0 = 0;
  local_a8 = *param_1;
  local_a0 = 0;
  FUN_00c2bb50(&local_a8,&local_b8);
  return;
}



// ============================================================
// 00c376f0
// ============================================================
// Function: FUN_00c376f0
// Address: 00c376f0
// Size: 521 bytes
// Class: GNOverloudTapedesk

uint64_t FUN_00c376f0(uint64_t param_1,byte param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  byte bVar3;
  uint uVar4;
  uint64_t uVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar6;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01cae990();
  plVar2 = local_40;
  lVar1 = g_027ef7e8;
  if (g_027ef7e8 != 0) {
    FUN_00d50b00();
  }
  bVar3 = (**(code **)(*plVar2 + 0x50))();
  uVar6 = extraout_XMM0_Da;
  if (lVar1 != 0) {
    uVar6 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar6 = FUN_00d50b20();
  }
  if ((bVar3 & param_2) == 0) {
    local_60 = *arg1;
    local_58 = '\0';
    uVar4 = FUN_01d16950(uVar6,param_2);
    uVar5 = (uint64_t)uVar4;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar6 = FUN_00d46dc0((*(float *)((int64_t)this_ptr + 100) - *(float *)(this_ptr + 0xc)) *
                         g_0239011c + *(float *)(this_ptr + 0xc));
    local_50 = local_40;
    local_48 = 0;
    local_80 = g_027e7c20;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        uVar6 = FUN_00d50b00();
        local_80 = g_027e7c20;
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    g_027e7c20 = local_80;
    if (local_80 != 0) {
      local_48 = '\x01';
      uVar6 = FUN_00d50b00();
    }
    local_78 = '\x01';
    uVar6 = (**(code **)(*this_ptr + 0x4d0))(uVar6,&local_80);
    if ((local_78 != '\0') && (local_80 != 0)) {
      uVar6 = FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      uVar6 = FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      uVar6 = FUN_00d50b20();
    }
    lVar1 = g_027e7c20;
    if (g_027e7c20 != 0) {
      uVar6 = FUN_00d50b00();
    }
    local_70 = lVar1;
    local_68 = '\x01';
    FUN_01ccaae0(uVar6,&local_70);
    FUN_01d243a0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    uVar5 = CONCAT71((int7)((uint64_t)lVar1 >> 8),1);
  }
  return uVar5 & 0xffffffff;
}



// ============================================================
// 00c35fe0
// ============================================================
// Function: FUN_00c35fe0
// Address: 00c35fe0
// Size: 703 bytes
// Class: GNOverloudTapedesk

void FUN_00c35fe0(uint64_t param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  void*puVar4;
  void*this_ptr;
  bool bVar5;
  
  puVar4 = g_028a5f78;
  if (param_2 != 0x13) {
    FUN_00b34370();
    return;
  }
  if ((g_028a5f78 == (void*)0x0) || (g_028a5f81 == '\0')) {
    FUN_00e8cb50();
    if (g_028a5f78 == (void*)0x0) {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_02572358;
      (*g_02572370)();
      if (g_028a5f78 == puVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = g_028a5f78 != (void*)0x0;
        g_028a5f78 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (g_028a5f80 == '\0') {
        g_028a5f80 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = g_0276cd80;
      if (g_0276cd80 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276cd88;
      if (g_0276cd88 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276cd90;
      if (g_0276cd90 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276cd98;
      if (g_0276cd98 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276cda0;
      if (g_0276cda0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      g_028a5f81 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a5f81 = '\x01';
      FUN_00e8cb70();
    }
    puVar4 = g_028a5f78;
    *(void*)(this_ptr + 1) = 0;
    if (puVar4 == (void*)0x0) {
      puVar4 = (void*)0x0;
      goto LAB_00c36281;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_00c36281:
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 00c338a0
// ============================================================
// Function: FUN_00c338a0
// Address: 00c338a0
// Size: 589 bytes
// Class: GNOverloudTapedesk

void FUN_00c338a0(uint64_t param_1,uint32_t param_2)

{
  int64_t *plVar1;
  char cVar2;
  uint8_t uVar3;
  int64_t *this_ptr;
  int64_t **pplVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  uint32_t extraout_XMM0_Dc;
  uint32_t in_XMM1_Dc;
  int64_t *plVar8;
  uint32_t local_4c;
  int64_t *local_40;
  char local_38;
  
  pplVar4 = &local_40;
  (**(code **)(*this_ptr + 0x640))();
  plVar1 = local_40;
  FUN_00209700();
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_00c33900;
  }
  pplVar4 = (int64_t **)&g_02802688;
LAB_00c33900:
  plVar1 = *pplVar4;
  if (*(char *)(pplVar4 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar4 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    local_4c = (uint32_t)plVar1[0x3d];
    *(void*)(plVar1 + 0x3d) = 0x3f8eb852;
  }
  (**(code **)(*this_ptr + 0x640))();
  plVar8 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar5 = FUN_01e3f820();
  uVar3 = (**(code **)(*this_ptr + 0x9a0))();
  (**(code **)(*this_ptr + 0xa70))();
  (**(code **)(*plVar8 + 0x3f0))(uVar5,0xf,0,uVar3);
  this_ptr[0x3a] = 0x3f8000003f19999a;
  uVar3 = 0;
  plVar8 = plVar1;
  uVar6 = FUN_01e3f820();
  uVar5 = extraout_XMM0_Dc;
  uVar7 = (**(code **)(*this_ptr + 0x930))();
  (**(code **)(*this_ptr + 0x9a0))();
  (**(code **)(*this_ptr + 0xa70))();
  FUN_00c32cc0(uVar6,param_2,uVar7,g_02390128,plVar8,uVar3,uVar6,uVar5,param_2,in_XMM1_Dc);
  if (plVar1 != (int64_t *)0x0) {
    *(void*)(plVar1 + 0x3d) = local_4c;
  }
  FUN_00d50b20();
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00c364b0
// ============================================================
// Function: FUN_00c364b0
// Address: 00c364b0
// Size: 869 bytes
// Class: GNOverloudTapedesk

void FUN_00c364b0(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t this_ptr;
  uint64_t local_78;
  uint8_t local_70;
  uint32_t local_40;
  
  FUN_01cc9350();
  lVar1 = *(int64_t *)(this_ptr + 0x78);
  if (lVar1 != 0) {
    local_40 = -1;
    while( true ) {
      lVar4 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_40) break;
      (**(code **)(**(int64_t **)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar4 * 8) + 0xa20))();
    }
    FUN_007f7b50();
  }
  FUN_00d216c0();
  FUN_01ccad60();
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  FUN_00d21140();
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x60) != 0) {
    FUN_00d50b00();
    FUN_00d21140();
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x68) != 0) {
    FUN_00d50b00();
    FUN_00d21140();
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x70) != 0) {
    FUN_00d50b00();
    FUN_00d21140();
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x78);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar4 = 0;
      do {
        plVar2 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + lVar4 * 8);
        FUN_00d50b00();
        (**(code **)(*plVar2 + 0xa20))();
        if (this_ptr != 0) {
          FUN_00d50b20();
        }
        lVar3 = g_027ef7e8;
        if (g_027ef7e8 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar2 + 0xa10))();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_007f7b50();
  }
  return;
}



// ============================================================
// 00c47240
// ============================================================
// Function: FUN_00c47240
// Address: 00c47240
// Size: 1588 bytes
// Class: GNOverloudTapedesk
// String references:
//   "GNOverloudTapedesk"

void FUN_00c47240(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00b10260();
  *this_ptr = &g_02559198;
  *(void*)(this_ptr + 0x19) = 0;
  // [STATIC_INIT: property registration]
  if (g_0276e453 == '\0') {
    FUN_00c478b0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xcc) = 0;
  // [STATIC_INIT: property registration]
  if (g_0276e453 == '\0') {
    FUN_00c47a20();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x1a) = 0;
  // [STATIC_INIT: property registration]
  if (g_0276e453 == '\0') {
    FUN_00c47b90();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xd4) = 0;
  // [STATIC_INIT: property registration]
  if (g_0276e453 == '\0') {
    FUN_00c47d00();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x1b) = 0;
  // [STATIC_INIT: property registration]
  if (g_0276e453 == '\0') {
    FUN_00c47e70();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xdc) = 0;
  // [STATIC_INIT: property registration]
  if (g_0276e453 == '\0') {
    FUN_00c47fe0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x1c) = 0;
  // [STATIC_INIT: property registration]
  if (g_0276e453 == '\0') {
    FUN_00c48150();
    FUN_00e87980();
  }
  return;
}

