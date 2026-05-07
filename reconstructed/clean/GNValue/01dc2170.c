// Function: FUN_01dc2170
// Address: 01dc2170
// Size: 4530 bytes
// Class: GNValue

void* FUN_01dc2170(void)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t lVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  int64_t *plVar8;
  int64_t arg1;
  void*this_ptr;
  bool bVar9;
  int64_t lVar10;
  int64_t local_310;
  char local_308;
  int64_t *local_300;
  char local_2f8;
  int64_t local_2f0;
  char local_2e8;
  int64_t local_2e0;
  char local_2d8;
  int64_t local_2d0;
  char local_2c8;
  int64_t local_2c0;
  char local_2b8;
  int64_t local_2b0;
  char local_2a8;
  int64_t local_2a0;
  char local_298;
  int64_t local_290;
  char local_288;
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
  int64_t *local_210;
  char local_208;
  int64_t local_200;
  char local_1f8;
  int64_t local_1f0;
  char local_1e8;
  int64_t local_1e0;
  char local_1d8;
  int64_t local_1d0;
  char local_1c8;
  int64_t local_1c0;
  char local_1b8;
  int64_t local_1b0;
  char local_1a8;
  int64_t local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t *local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01dc0d60();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 == (int64_t *)0x0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return this_ptr;
  }
  FUN_01dc0d60();
  FUN_01dcc290();
  local_70 = local_40;
  if (local_40 == (int64_t *)0x0) {
    bVar2 = true;
    local_70 = (int64_t *)0x0;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    bVar2 = false;
  }
  else {
    local_38 = '\0';
    bVar2 = false;
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01dc0d60();
  FUN_01dd96b0();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    (**(code **)(*local_40 + 0x10))();
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 != (int64_t *)0x0) {
    FUN_01dc0d60();
    lVar10 = local_140;
    FUN_01dd96b0();
    FUN_01dc0d60();
    local_e0 = 0;
    if ((local_308 == '\0') && (local_310 != 0)) {
      FUN_00d50b00();
    }
    local_e0 = '\x01';
    local_e8 = local_310;
    local_300 = local_70;
    local_2f8 = '\0';
    (**(code **)(*local_68 + 0x88))(&local_300,&local_e8);
    local_58 = local_40;
    if (local_40 == (int64_t *)0x0) {
      bVar1 = true;
      local_58 = (int64_t *)0x0;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = false;
    }
    else {
      local_38 = '\0';
      bVar1 = false;
    }
    if ((local_2f8 != '\0') && (local_300 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      (**(code **)(*local_68 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_138 != '\0') && (lVar10 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 != (int64_t *)0x0) {
      *(void*)(this_ptr + 1) = 0;
      if (bVar1) {
        FUN_00d50b00();
        *this_ptr = local_58;
        *(void*)(this_ptr + 1) = 1;
      }
      else {
        *this_ptr = local_58;
        *(void*)(this_ptr + 1) = 1;
      }
      bVar9 = true;
      bVar1 = false;
      local_48 = (int64_t *)0x0;
      goto LAB_01dc32dd;
    }
  }
  local_58 = (int64_t *)FUN_00e8fc40();
  FUN_001d7da0();
  (**(code **)(*local_58 + 0x18))();
  FUN_01d5e5a0();
  bVar5 = FUN_01db9b00();
  lVar10 = g_027f2750;
  if (bVar5 == 0) {
    bVar1 = false;
    local_48 = (int64_t *)0x0;
  }
  else {
    if (g_027f2750 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_027f2758;
    local_2f0 = lVar10;
    local_2e8 = '\x01';
    if (g_027f2758 != 0) {
      FUN_00d50b00();
    }
    local_2e0 = lVar3;
    local_2d8 = '\x01';
    local_2d0 = 0;
    local_2c8 = '\0';
    FUN_00d31230(&local_2d0,&local_2e0);
    local_d0 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_d0 = '\x01';
    local_d8 = local_40;
    local_2b8 = '\0';
    local_2c0 = 0;
    FUN_01d5d9b0();
    if ((local_2b8 != '\0') && (local_2c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_2c8 != '\0') && (local_2d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_2d8 != '\0') && (local_2e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_2e8 != '\0') && (local_2f0 != 0)) {
      FUN_00d50b20();
    }
    local_48 = (int64_t *)FUN_00e8fc40();
    FUN_001d7da0();
    (**(code **)(*local_48 + 0x18))();
    FUN_01d5e5a0();
    local_2b0 = g_027f2750;
    if (g_027f2750 != 0) {
      FUN_00d50b00();
    }
    lVar10 = g_027f2760;
    local_2a8 = '\x01';
    if (g_027f2760 != 0) {
      FUN_00d50b00();
    }
    local_2a0 = lVar10;
    local_298 = '\x01';
    local_290 = 0;
    local_288 = '\0';
    FUN_00d31230(&local_290,&local_2a0);
    local_c0 = 0;
    lVar10 = g_027f2768;
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
      lVar10 = g_027f2768;
    }
    local_c0 = '\x01';
    local_c8 = local_40;
    g_027f2768 = lVar10;
    if (lVar10 != 0) {
      local_c0 = '\x01';
      FUN_00d50b00();
    }
    local_278 = '\x01';
    local_270 = 0;
    local_268 = '\0';
    local_280 = lVar10;
    if (arg1 != 0) {
      FUN_00d50b00();
    }
    FUN_01d5da60(&local_270,&local_280,&stack0xfffffffffffffed0);
    if (arg1 != 0) {
      FUN_00d50b20();
    }
    if ((local_268 != '\0') && (local_270 != 0)) {
      FUN_00d50b20();
    }
    if ((local_278 != '\0') && (local_280 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_288 != '\0') && (local_290 != 0)) {
      FUN_00d50b20();
    }
    if ((local_298 != '\0') && (local_2a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_2a8 != '\0') && (local_2b0 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d5e230();
    cVar6 = FUN_01db9d40();
    if (cVar6 != '\0') {
      FUN_01db9f80();
    }
    FUN_01d66ab0();
    local_260 = g_027f2750;
    if (g_027f2750 != 0) {
      FUN_00d50b00();
    }
    lVar10 = g_027f2770;
    local_258 = '\x01';
    if (g_027f2770 != 0) {
      FUN_00d50b00();
    }
    local_250 = lVar10;
    local_248 = '\x01';
    local_240 = 0;
    local_238 = '\0';
    FUN_00d31230(&local_240,&local_250);
    local_b0 = 0;
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    lVar10 = g_027f2778;
    local_b0 = '\x01';
    local_b8 = local_40;
    if (g_027f2778 != 0) {
      local_b0 = '\x01';
      FUN_00d50b00();
    }
    local_38 = '\0';
    local_228 = '\x01';
    local_220 = 0;
    local_218 = '\0';
    local_230 = lVar10;
    if (arg1 != 0) {
      FUN_00d50b00();
    }
    FUN_01d5da60(&local_220,&local_230,&stack0xfffffffffffffee0);
    if (arg1 != 0) {
      FUN_00d50b20();
    }
    if ((local_218 != '\0') && (local_220 != 0)) {
      FUN_00d50b20();
    }
    if ((local_228 != '\0') && (local_230 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_238 != '\0') && (local_240 != 0)) {
      FUN_00d50b20();
    }
    if ((local_248 != '\0') && (local_250 != 0)) {
      FUN_00d50b20();
    }
    if ((local_258 != '\0') && (local_260 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d5e230();
    cVar6 = FUN_01db9d40();
    if (cVar6 != '\0') {
      FUN_01db9f80();
    }
    FUN_01d66ab0();
    FUN_01d5e230();
    local_208 = '\0';
    local_210 = local_48;
    FUN_01d654e0();
    if ((local_208 != '\0') && (local_210 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    bVar1 = true;
  }
  FUN_01dc0d60();
  cVar6 = FUN_01dcca70();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar6 != '\0') {
    FUN_01dc0d60();
    iVar7 = FUN_01dca080();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar10 = g_027f2750;
    if (1 < iVar7) {
      if (g_027f2750 != 0) {
        FUN_00d50b00();
      }
      lVar3 = g_027f2780;
      local_200 = lVar10;
      local_1f8 = '\x01';
      if (g_027f2780 != 0) {
        FUN_00d50b00();
      }
      local_1f0 = lVar3;
      local_1e8 = '\x01';
      local_1e0 = 0;
      local_1d8 = '\0';
      FUN_00d31230(&local_1e0,&local_1f0);
      local_a0 = 0;
      local_1d0 = g_027f2788;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
          local_1d0 = g_027f2788;
        }
      }
      else {
        local_38 = '\0';
      }
      local_a0 = '\x01';
      local_a8 = local_40;
      g_027f2788 = local_1d0;
      if (local_1d0 != 0) {
        local_a0 = '\x01';
        FUN_00d50b00();
      }
      local_1c8 = '\x01';
      local_1c0 = 0;
      local_1b8 = '\0';
      if (arg1 != 0) {
        FUN_00d50b00();
      }
      FUN_01d5da60(&local_1c0,&local_1d0,&stack0xfffffffffffffef0);
      if (arg1 != 0) {
        FUN_00d50b20();
      }
      if ((local_1b8 != '\0') && (local_1c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1c8 != '\0') && (local_1d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_1d8 != '\0') && (local_1e0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1e8 != '\0') && (local_1f0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1f8 != '\0') && (local_200 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_01dc0d60();
    FUN_01dcd300();
    iVar7 = *(int *)((int64_t)local_40 + 0xc);
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar10 = g_027f2750;
    if (iVar7 != 0) {
      if (g_027f2750 != 0) {
        FUN_00d50b00();
      }
      lVar3 = g_027f2790;
      local_1b0 = lVar10;
      local_1a8 = '\x01';
      if (g_027f2790 != 0) {
        FUN_00d50b00();
      }
      local_1a0 = lVar3;
      local_198 = '\x01';
      local_190 = 0;
      local_188 = '\0';
      FUN_00d31230(&local_190,&local_1a0);
      local_90 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_90 = '\x01';
      local_98 = local_40;
      local_178 = '\0';
      local_180 = 0;
      FUN_01d5d9b0();
      if ((local_178 != '\0') && (local_180 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_188 != '\0') && (local_190 != 0)) {
        FUN_00d50b20();
      }
      if ((local_198 != '\0') && (local_1a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1a8 != '\0') && (local_1b0 != 0)) {
        FUN_00d50b20();
      }
      plVar8 = (int64_t *)FUN_00e8fc40();
      FUN_001d7da0();
      (**(code **)(*plVar8 + 0x18))();
      if (plVar8 == local_48) {
        plVar8 = local_48;
        if (bVar5 == 0) {
          bVar1 = true;
        }
        else {
          FUN_00d50b20();
        }
      }
      else {
        bVar1 = true;
        if ((bVar5 & local_48 != (int64_t *)0x0) == 1) {
          FUN_00d50b20();
        }
      }
      FUN_01d5e5a0();
      lVar10 = 0;
      while( true ) {
        FUN_01dc0d60();
        FUN_01dcd300();
        iVar7 = *(int *)((int64_t)local_40 + 0xc);
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar7 <= lVar10) break;
        FUN_01dc0d60();
        lVar4 = local_140;
        FUN_01dcd300();
        FUN_01db9ab0();
        local_80 = 0;
        lVar3 = g_027f2798;
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
            lVar3 = g_027f2798;
          }
        }
        else {
          local_38 = '\0';
        }
        local_80 = '\x01';
        local_88 = local_40;
        g_027f2798 = lVar3;
        if (lVar3 != 0) {
          local_80 = '\x01';
          FUN_00d50b00();
        }
        local_168 = '\x01';
        local_160 = 0;
        local_158 = '\0';
        local_170 = lVar3;
        if (arg1 != 0) {
          FUN_00d50b00();
        }
        FUN_01d5da60(&local_160,&local_170,&stack0xffffffffffffff00);
        if (arg1 != 0) {
          FUN_00d50b20();
        }
        if ((local_158 != '\0') && (local_160 != 0)) {
          FUN_00d50b20();
        }
        if ((local_168 != '\0') && (local_170 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_138 != '\0') && (lVar4 != 0)) {
          FUN_00d50b20();
        }
        FUN_01d5e230();
        FUN_01d65490();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        lVar10 = lVar10 + 1;
      }
      FUN_01d5e230();
      local_148 = '\0';
      local_150 = plVar8;
      FUN_01d654e0();
      if ((local_148 != '\0') && (local_150 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_48 = plVar8;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  iVar7 = FUN_01d5b230();
  if (iVar7 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    *this_ptr = local_58;
    *(void*)(this_ptr + 1) = 1;
  }
  bVar9 = iVar7 != 0;
LAB_01dc32dd:
  if (!bVar2 && local_70 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar1) && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar9 && local_58 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

