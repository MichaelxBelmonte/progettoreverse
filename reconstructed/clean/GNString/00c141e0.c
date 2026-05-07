// Function: FUN_00c141e0
// Address: 00c141e0
// Size: 2008 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00c141e0(void)

{
  int64_t lVar1;
  void*puVar2;
  void*puVar3;
  int64_t this_ptr;
  int64_t lVar4;
  bool bVar5;
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
  
  *(void*)(this_ptr + 0xb8) = 0xe;
  lVar1 = g_0276c400;
  if (g_0276c400 == 0) {
    lVar4 = *(int64_t *)(this_ptr + 0x90);
    if (lVar4 == 0) goto LAB_00c14249;
  }
  else {
    FUN_00d50b00();
    lVar4 = *(int64_t *)(this_ptr + 0x90);
    if (lVar4 == lVar1) {
      FUN_00d50b20();
      goto LAB_00c14249;
    }
  }
  *(int64_t *)(this_ptr + 0x90) = lVar1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_00c14249:
  *(void*)(this_ptr + 0xa8) = 3;
  if ((g_028a5da0 == (void*)0x0) || (g_028a5da9 == '\0')) {
    FUN_00e8cb50();
    if (g_028a5da0 == (void*)0x0) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_0254ed40;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      FUN_00d500e0();
      bVar5 = g_028a5da0 == (void*)0x0;
      g_028a5da0 = puVar3;
      if (((bVar5) || (FUN_00d50b20(), lVar1 = g_02765370, g_028a5da0 != (void*)0x0)) &&
         (lVar1 = g_02765370, g_028a5da8 == '\0')) {
        g_028a5da8 = '\x01';
        FUN_00e8cb90();
        lVar1 = g_02765370;
      }
      g_02765370 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_026fb990;
      local_1c0 = 1;
      local_1c8 = lVar1;
      if (g_026fb990 != 0) {
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
      lVar1 = g_0276bf58;
      if (g_0276bf58 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bf60;
      local_1a8 = lVar1;
      local_1a0 = 1;
      if (g_0276bf60 != 0) {
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
      lVar1 = g_0276bf68;
      if (g_0276bf68 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bf70;
      local_188 = lVar1;
      local_180 = 1;
      if (g_0276bf70 != 0) {
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
      lVar1 = g_0276bf78;
      if (g_0276bf78 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bf80;
      local_168 = lVar1;
      local_160 = 1;
      if (g_0276bf80 != 0) {
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
      lVar1 = g_0276bf88;
      if (g_0276bf88 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bf90;
      local_148 = lVar1;
      local_140 = 1;
      if (g_0276bf90 != 0) {
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
      lVar1 = g_0276bf98;
      if (g_0276bf98 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bfa0;
      local_128 = lVar1;
      local_120 = 1;
      if (g_0276bfa0 != 0) {
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
      lVar1 = g_0276bfa8;
      if (g_0276bfa8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bfb0;
      local_108 = lVar1;
      local_100 = 1;
      if (g_0276bfb0 != 0) {
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
      lVar1 = g_0276c390;
      if (g_0276c390 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_027df900;
      local_e8 = lVar1;
      local_e0 = 1;
      if (g_027df900 != 0) {
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
      lVar1 = g_0276bf40;
      if (g_0276bf40 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bf48;
      local_c8 = lVar1;
      local_c0 = 1;
      if (g_0276bf48 != 0) {
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
      lVar1 = g_027bed58;
      if (g_027bed58 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bfe0;
      local_a8 = lVar1;
      local_a0 = 1;
      if (g_0276bfe0 != 0) {
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
      lVar1 = g_0276bfe8;
      if (g_0276bfe8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bff0;
      local_88 = lVar1;
      local_80 = 1;
      if (g_0276bff0 != 0) {
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
      lVar1 = g_0276bff8;
      if (g_0276bff8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c000;
      local_68 = lVar1;
      local_60 = 1;
      if (g_0276c000 != 0) {
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
      g_028a5da9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a5da9 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = *(void**)(this_ptr + 0xb0);
    if (puVar3 == g_028a5da0) {
      return;
    }
  }
  else {
    puVar3 = *(void**)(this_ptr + 0xb0);
    if (puVar3 == g_028a5da0) {
      return;
    }
  }
  puVar2 = g_028a5da0;
  if (g_028a5da0 != (void*)0x0) {
    FUN_00d50b00();
  }
  *(void**)(this_ptr + 0xb0) = puVar2;
  if (puVar3 == (void*)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}

