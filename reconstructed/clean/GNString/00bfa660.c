// Function: FUN_00bfa660
// Address: 00bfa660
// Size: 3252 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00bfa660(void)

{
  int64_t lVar1;
  void*puVar2;
  void*puVar3;
  int64_t this_ptr;
  int64_t lVar4;
  bool bVar5;
  int64_t local_308;
  uint8_t local_300;
  int64_t local_2f8;
  uint8_t local_2f0;
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
  
  *(void*)(this_ptr + 0xb8) = 1;
  lVar1 = g_0276bd30;
  if (g_0276bd30 == 0) {
    lVar4 = *(int64_t *)(this_ptr + 0x90);
    if (lVar4 == 0) goto LAB_00bfa6c9;
  }
  else {
    FUN_00d50b00();
    lVar4 = *(int64_t *)(this_ptr + 0x90);
    if (lVar4 == lVar1) {
      FUN_00d50b20();
      goto LAB_00bfa6c9;
    }
  }
  *(int64_t *)(this_ptr + 0x90) = lVar1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_00bfa6c9:
  *(void*)(this_ptr + 0xa8) = 2;
  if ((g_028a5a90 == (void*)0x0) || (g_028a5a99 == '\0')) {
    FUN_00e8cb50();
    if (g_028a5a90 == (void*)0x0) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_0254ed40;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      FUN_00d500e0();
      bVar5 = g_028a5a90 == (void*)0x0;
      g_028a5a90 = puVar3;
      if (((bVar5) || (FUN_00d50b20(), lVar1 = g_0276bd38, g_028a5a90 != (void*)0x0)) &&
         (lVar1 = g_0276bd38, g_028a5a98 == '\0')) {
        g_028a5a98 = '\x01';
        FUN_00e8cb90();
        lVar1 = g_0276bd38;
      }
      g_0276bd38 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bd40;
      local_300 = 1;
      local_308 = lVar1;
      if (g_0276bd40 != 0) {
        FUN_00d50b00();
      }
      local_2f8 = lVar4;
      local_2f0 = 1;
      FUN_00bf1030(&local_2f8,&local_308);
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
      local_2e8 = lVar1;
      local_2e0 = 1;
      if (g_0276bd50 != 0) {
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
      lVar1 = g_0276bd58;
      if (g_0276bd58 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bd60;
      local_2c8 = lVar1;
      local_2c0 = 1;
      if (g_0276bd60 != 0) {
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
      lVar1 = g_0276bd68;
      if (g_0276bd68 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bd70;
      local_2a8 = lVar1;
      local_2a0 = 1;
      if (g_0276bd70 != 0) {
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
      lVar1 = g_0276bd78;
      if (g_0276bd78 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bd80;
      local_288 = lVar1;
      local_280 = 1;
      if (g_0276bd80 != 0) {
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
      lVar1 = g_0276bd88;
      if (g_0276bd88 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bd90;
      local_268 = lVar1;
      local_260 = 1;
      if (g_0276bd90 != 0) {
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
      lVar1 = g_0276bd98;
      if (g_0276bd98 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bda0;
      local_248 = lVar1;
      local_240 = 1;
      if (g_0276bda0 != 0) {
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
      lVar1 = g_0276bda8;
      if (g_0276bda8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bdb0;
      local_228 = lVar1;
      local_220 = 1;
      if (g_0276bdb0 != 0) {
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
      lVar1 = g_0276bdb8;
      if (g_0276bdb8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bdc0;
      local_208 = lVar1;
      local_200 = 1;
      if (g_0276bdc0 != 0) {
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
      lVar1 = g_0276bdc8;
      if (g_0276bdc8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bdd0;
      local_1e8 = lVar1;
      local_1e0 = 1;
      if (g_0276bdd0 != 0) {
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
      lVar1 = g_0276bdd8;
      if (g_0276bdd8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bde0;
      local_1c8 = lVar1;
      local_1c0 = 1;
      if (g_0276bde0 != 0) {
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
      lVar1 = g_0276bde8;
      if (g_0276bde8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bdf0;
      local_1a8 = lVar1;
      local_1a0 = 1;
      if (g_0276bdf0 != 0) {
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
      lVar1 = g_0276bdf8;
      if (g_0276bdf8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276be00;
      local_188 = lVar1;
      local_180 = 1;
      if (g_0276be00 != 0) {
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
      lVar1 = g_0276be08;
      if (g_0276be08 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276be10;
      local_168 = lVar1;
      local_160 = 1;
      if (g_0276be10 != 0) {
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
      lVar1 = g_0276be18;
      if (g_0276be18 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276be20;
      local_148 = lVar1;
      local_140 = 1;
      if (g_0276be20 != 0) {
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
      lVar1 = g_0276be28;
      if (g_0276be28 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276be30;
      local_128 = lVar1;
      local_120 = 1;
      if (g_0276be30 != 0) {
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
      lVar1 = g_0276be38;
      if (g_0276be38 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276be40;
      local_108 = lVar1;
      local_100 = 1;
      if (g_0276be40 != 0) {
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
      lVar1 = g_0276be48;
      if (g_0276be48 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276be50;
      local_e8 = lVar1;
      local_e0 = 1;
      if (g_0276be50 != 0) {
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
      lVar1 = g_0276be58;
      if (g_0276be58 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276be60;
      local_c8 = lVar1;
      local_c0 = 1;
      if (g_0276be60 != 0) {
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
      lVar1 = g_0276be68;
      if (g_0276be68 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276be70;
      local_a8 = lVar1;
      local_a0 = 1;
      if (g_0276be70 != 0) {
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
      lVar1 = g_0276be78;
      if (g_0276be78 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276be80;
      local_88 = lVar1;
      local_80 = 1;
      if (g_0276be80 != 0) {
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
      lVar1 = g_0276be88;
      if (g_0276be88 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276be90;
      local_68 = lVar1;
      local_60 = 1;
      if (g_0276be90 != 0) {
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
      lVar1 = g_0276be98;
      if (g_0276be98 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bea0;
      local_48 = lVar1;
      local_40 = 1;
      if (g_0276bea0 != 0) {
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
      g_028a5a99 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a5a99 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = *(void**)(this_ptr + 0xb0);
    if (puVar3 == g_028a5a90) {
      return;
    }
  }
  else {
    puVar3 = *(void**)(this_ptr + 0xb0);
    if (puVar3 == g_028a5a90) {
      return;
    }
  }
  puVar2 = g_028a5a90;
  if (g_028a5a90 != (void*)0x0) {
    FUN_00d50b00();
  }
  *(void**)(this_ptr + 0xb0) = puVar2;
  if (puVar3 == (void*)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}

