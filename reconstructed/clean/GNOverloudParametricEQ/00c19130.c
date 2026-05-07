// Function: FUN_00c19130
// Address: 00c19130
// Size: 2772 bytes
// Class: GNOverloudParametricEQ

void FUN_00c19130(void)

{
  void*puVar1;
  void*puVar2;
  int64_t this_ptr;
  int64_t lVar3;
  int64_t lVar4;
  bool bVar5;
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
  
  *(void*)(this_ptr + 0xb8) = 0x10;
  lVar4 = g_0276c4a0;
  if (g_0276c4a0 == 0) {
    lVar3 = *(int64_t *)(this_ptr + 0x90);
    if (lVar3 != 0) goto LAB_00c19185;
  }
  else {
    FUN_00d50b00();
    lVar3 = *(int64_t *)(this_ptr + 0x90);
    if (lVar3 == lVar4) {
      FUN_00d50b20();
    }
    else {
LAB_00c19185:
      *(int64_t *)(this_ptr + 0x90) = lVar4;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
  }
  *(void*)(this_ptr + 0xa8) = 6;
  if ((g_028a5e00 != (void*)0x0) && (g_028a5e09 != '\0')) {
    puVar2 = *(void**)(this_ptr + 0xb0);
    if (puVar2 == g_028a5e00) {
      return;
    }
    goto LAB_00c19bc4;
  }
  FUN_00e8cb50();
  if (g_028a5e00 == (void*)0x0) {
    puVar2 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &g_0254ed40;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    FUN_00d500e0();
    bVar5 = g_028a5e00 == (void*)0x0;
    g_028a5e00 = puVar2;
    if (((bVar5) || (FUN_00d50b20(), g_028a5e00 != (void*)0x0)) && (g_028a5e08 == '\0'))
    {
      g_028a5e08 = '\x01';
      FUN_00e8cb90();
      lVar4 = g_0276c380;
      if (g_0276c380 == 0) goto LAB_00c192ad;
LAB_00c19259:
      lVar4 = g_0276c380;
      FUN_00d50b00();
      lVar3 = g_0276c380;
      local_38 = lVar4;
      local_30 = 1;
      if (g_0276c380 == 0) goto LAB_00c192ad;
      FUN_00d50b00();
    }
    else {
      lVar4 = g_0276c380;
      if (g_0276c380 != 0) goto LAB_00c19259;
LAB_00c192ad:
      local_30 = 1;
      lVar3 = 0;
      local_38 = lVar4;
    }
    local_280 = 1;
    local_288 = lVar3;
    FUN_00bf1030(&local_288,&local_38);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = g_0276bcc0;
    if (g_0276bcc0 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_0276bcc8;
    local_278 = lVar4;
    local_270 = 1;
    if (g_0276bcc8 != 0) {
      FUN_00d50b00();
    }
    local_268 = lVar3;
    local_260 = 1;
    FUN_00bf1030(&local_268,&local_278);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = g_0276bcd0;
    if (g_0276bcd0 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_0276bcd8;
    local_258 = lVar4;
    local_250 = 1;
    if (g_0276bcd8 != 0) {
      FUN_00d50b00();
    }
    local_248 = lVar3;
    local_240 = 1;
    FUN_00bf1030(&local_248,&local_258);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = g_0276c4a8;
    if (g_0276c4a8 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_0276c4b0;
    local_238 = lVar4;
    local_230 = 1;
    if (g_0276c4b0 != 0) {
      FUN_00d50b00();
    }
    local_228 = lVar3;
    local_220 = 1;
    FUN_00bf1030(&local_228,&local_238);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = g_0276c4b8;
    if (g_0276c4b8 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_0276c4c0;
    local_218 = lVar4;
    local_210 = 1;
    if (g_0276c4c0 != 0) {
      FUN_00d50b00();
    }
    local_208 = lVar3;
    local_200 = 1;
    FUN_00bf1030(&local_208,&local_218);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = g_0276c4c8;
    if (g_0276c4c8 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_0276c4d0;
    local_1f8 = lVar4;
    local_1f0 = 1;
    if (g_0276c4d0 != 0) {
      FUN_00d50b00();
    }
    local_1e8 = lVar3;
    local_1e0 = 1;
    FUN_00bf1030(&local_1e8,&local_1f8);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = g_0276c4d8;
    if (g_0276c4d8 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_0276c4e0;
    local_1d8 = lVar4;
    local_1d0 = 1;
    if (g_0276c4e0 != 0) {
      FUN_00d50b00();
    }
    local_1c8 = lVar3;
    local_1c0 = 1;
    FUN_00bf1030(&local_1c8,&local_1d8);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = g_0276c4e8;
    if (g_0276c4e8 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_0276c4f0;
    local_1b8 = lVar4;
    local_1b0 = 1;
    if (g_0276c4f0 != 0) {
      FUN_00d50b00();
    }
    local_1a8 = lVar3;
    local_1a0 = 1;
    FUN_00bf1030(&local_1a8,&local_1b8);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = g_02765370;
    if (g_02765370 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_026fb990;
    local_198 = lVar4;
    local_190 = 1;
    if (g_026fb990 != 0) {
      FUN_00d50b00();
    }
    local_188 = lVar3;
    local_180 = 1;
    FUN_00bf1030(&local_188,&local_198);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = g_0276c4f8;
    if (g_0276c4f8 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_0276c500;
    local_178 = lVar4;
    local_170 = 1;
    if (g_0276c500 != 0) {
      FUN_00d50b00();
    }
    local_168 = lVar3;
    local_160 = 1;
    FUN_00bf1030(&local_168,&local_178);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = g_0276c3f0;
    if (g_0276c3f0 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_0276c508;
    local_158 = lVar4;
    local_150 = 1;
    if (g_0276c508 != 0) {
      FUN_00d50b00();
    }
    local_148 = lVar3;
    local_140 = 1;
    FUN_00bf1030(&local_148,&local_158);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = g_0276c510;
    if (g_0276c510 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_0276c518;
    local_138 = lVar4;
    local_130 = 1;
    if (g_0276c518 != 0) {
      FUN_00d50b00();
    }
    local_128 = lVar3;
    local_120 = 1;
    FUN_00bf1030(&local_128,&local_138);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = g_0276c520;
    if (g_0276c520 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_0276c528;
    local_118 = lVar4;
    local_110 = 1;
    if (g_0276c528 != 0) {
      FUN_00d50b00();
    }
    local_108 = lVar3;
    local_100 = 1;
    FUN_00bf1030(&local_108,&local_118);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = g_0276c530;
    if (g_0276c530 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_0276c538;
    local_f8 = lVar4;
    local_f0 = 1;
    if (g_0276c538 != 0) {
      FUN_00d50b00();
    }
    local_e8 = lVar3;
    local_e0 = 1;
    FUN_00bf1030(&local_e8,&local_f8);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = g_0276c540;
    if (g_0276c540 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_0276c548;
    local_d8 = lVar4;
    local_d0 = 1;
    if (g_0276c548 != 0) {
      FUN_00d50b00();
    }
    local_c8 = lVar3;
    local_c0 = 1;
    FUN_00bf1030(&local_c8,&local_d8);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = g_0276c550;
    if (g_0276c550 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_0276c558;
    local_b8 = lVar4;
    local_b0 = 1;
    if (g_0276c558 != 0) {
      FUN_00d50b00();
    }
    local_a8 = lVar3;
    local_a0 = 1;
    FUN_00bf1030(&local_a8,&local_b8);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = g_0276c560;
    if (g_0276c560 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_0276c568;
    local_98 = lVar4;
    local_90 = 1;
    if (g_0276c568 != 0) {
      FUN_00d50b00();
    }
    local_88 = lVar3;
    local_80 = 1;
    FUN_00bf1030(&local_88,&local_98);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = g_0276c570;
    if (g_0276c570 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_0276c578;
    local_78 = lVar4;
    local_70 = 1;
    if (g_0276c578 != 0) {
      FUN_00d50b00();
    }
    local_68 = lVar3;
    local_60 = 1;
    FUN_00bf1030(&local_68,&local_78);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = g_0276c580;
    if (g_0276c580 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_0276c588;
    local_58 = lVar4;
    local_50 = 1;
    if (g_0276c588 != 0) {
      FUN_00d50b00();
    }
    local_48 = lVar3;
    local_40 = 1;
    FUN_00bf1030(&local_48,&local_58);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    g_028a5e09 = '\x01';
    FUN_00e8cb70();
  }
  else {
    g_028a5e09 = '\x01';
    FUN_00e8cb70();
  }
  puVar2 = *(void**)(this_ptr + 0xb0);
  if (puVar2 == g_028a5e00) {
    return;
  }
LAB_00c19bc4:
  puVar1 = g_028a5e00;
  if (g_028a5e00 != (void*)0x0) {
    FUN_00d50b00();
  }
  *(void**)(this_ptr + 0xb0) = puVar1;
  if (puVar2 == (void*)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}

