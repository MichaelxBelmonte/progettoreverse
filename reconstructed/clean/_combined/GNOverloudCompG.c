// ===================================================================
// GNOverloudCompG — Complete reconstructed pseudocode
// 8 functions
// ===================================================================

// Registered properties (3):
//   float           _minValue
//   float           _maxValue
//   float           _offValue


// ============================================================
// 00c38a40
// ============================================================
// Function: FUN_00c38a40
// Address: 00c38a40
// Size: 2249 bytes
// Class: GNOverloudCompG
// === GNOverloudCompG properties ===
//   float           _minValue
//   float           _maxValue
//   float           _offValue


void FUN_00c38a40(void)

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
  
  *(void*)(this_ptr + 0xb8) = 0x14;
  lVar1 = g_0276cdb8;
  if (g_0276cdb8 == 0) {
    lVar4 = *(int64_t *)(this_ptr + 0x90);
    if (lVar4 == 0) goto LAB_00c38aa9;
  }
  else {
    FUN_00d50b00();
    lVar4 = *(int64_t *)(this_ptr + 0x90);
    if (lVar4 == lVar1) {
      FUN_00d50b20();
      goto LAB_00c38aa9;
    }
  }
  *(int64_t *)(this_ptr + 0x90) = lVar1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_00c38aa9:
  *(void*)(this_ptr + 0xa8) = 1;
  if ((g_028a5f88 == (void*)0x0) || (g_028a5f91 == '\0')) {
    FUN_00e8cb50();
    if (g_028a5f88 == (void*)0x0) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_0254ed40;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      FUN_00d500e0();
      bVar5 = g_028a5f88 == (void*)0x0;
      g_028a5f88 = puVar3;
      if (((bVar5) || (FUN_00d50b20(), lVar1 = g_0276cdc0, g_028a5f88 != (void*)0x0)) &&
         (lVar1 = g_0276cdc0, g_028a5f90 == '\0')) {
        g_028a5f90 = '\x01';
        FUN_00e8cb90();
        lVar1 = g_0276cdc0;
      }
      g_0276cdc0 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276cdc8;
      local_200 = 1;
      local_208 = lVar1;
      if (g_0276cdc8 != 0) {
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
      lVar1 = g_0276c440;
      if (g_0276c440 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_027c7650;
      local_1e8 = lVar1;
      local_1e0 = 1;
      if (g_027c7650 != 0) {
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
      lVar1 = g_0276bf00;
      if (g_0276bf00 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bf08;
      local_1c8 = lVar1;
      local_1c0 = 1;
      if (g_0276bf08 != 0) {
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
      lVar1 = g_0276c450;
      if (g_0276c450 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c458;
      local_1a8 = lVar1;
      local_1a0 = 1;
      if (g_0276c458 != 0) {
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
      lVar1 = g_0276cdd0;
      if (g_0276cdd0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276cdd8;
      local_188 = lVar1;
      local_180 = 1;
      if (g_0276cdd8 != 0) {
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
      lVar1 = g_0276cc90;
      if (g_0276cc90 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_027c70a8;
      local_168 = lVar1;
      local_160 = 1;
      if (g_027c70a8 != 0) {
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
      lVar1 = g_0276cde0;
      if (g_0276cde0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276cde8;
      local_148 = lVar1;
      local_140 = 1;
      if (g_0276cde8 != 0) {
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
      lVar1 = g_0276c460;
      if (g_0276c460 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c468;
      local_128 = lVar1;
      local_120 = 1;
      if (g_0276c468 != 0) {
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
      lVar1 = g_0276c430;
      if (g_0276c430 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_027bdfc0;
      local_108 = lVar1;
      local_100 = 1;
      if (g_027bdfc0 != 0) {
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
      lVar1 = g_0276cdf0;
      if (g_0276cdf0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276cdf8;
      local_e8 = lVar1;
      local_e0 = 1;
      if (g_0276cdf8 != 0) {
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
      lVar1 = g_0276ce00;
      if (g_0276ce00 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276ce08;
      local_c8 = lVar1;
      local_c0 = 1;
      if (g_0276ce08 != 0) {
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
      lVar1 = g_0276ce10;
      if (g_0276ce10 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276ce18;
      local_a8 = lVar1;
      local_a0 = 1;
      if (g_0276ce18 != 0) {
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
      lVar1 = g_0276ce20;
      if (g_0276ce20 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276ce28;
      local_88 = lVar1;
      local_80 = 1;
      if (g_0276ce28 != 0) {
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
      lVar1 = g_0276ce30;
      if (g_0276ce30 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276ce38;
      local_68 = lVar1;
      local_60 = 1;
      if (g_0276ce38 != 0) {
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
      lVar1 = g_0276ce40;
      if (g_0276ce40 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276ce48;
      local_48 = lVar1;
      local_40 = 1;
      if (g_0276ce48 != 0) {
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
      g_028a5f91 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a5f91 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = *(void**)(this_ptr + 0xb0);
    if (puVar3 == g_028a5f88) {
      return;
    }
  }
  else {
    puVar3 = *(void**)(this_ptr + 0xb0);
    if (puVar3 == g_028a5f88) {
      return;
    }
  }
  puVar2 = g_028a5f88;
  if (g_028a5f88 != (void*)0x0) {
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
// 00c37a80
// ============================================================
// Function: FUN_00c37a80
// Address: 00c37a80
// Size: 2153 bytes
// Class: GNOverloudCompG
// String references:
//   "GNOverloudCompG"
// === GNOverloudCompG properties ===
//   float           _minValue
//   float           _maxValue
//   float           _offValue


void* FUN_00c37a80(int64_t *param_1,uint64_t param_2,void*param_3)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  int iVar6;
  int64_t *plVar7;
  void*this_ptr;
  int64_t **pplVar8;
  int64_t local_c8;
  uint8_t local_c0;
  uint64_t local_b8;
  uint8_t local_b0;
  int64_t *local_40;
  char local_38;
  
  plVar7 = (int64_t *)*param_1;
  if ((g_0276efc0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    g_0276ef10 = FUN_00b10020();
    g_0276eef8 = "GNOverloudCompG";
    g_0276ef00 = 0xe8;
    g_0276ef08 = FUN_00c42f00;
    g_0276ef18 = 0;
    ram_000000000276ef20 = 0;
    g_0276ef28 = 0;
    ram_000000000276ef30 = 0;
    g_0276ef38 = 0;
    ram_000000000276ef40 = 0;
    g_0276ef48 = 0;
    ram_000000000276ef50 = 0;
    g_0276ef58 = 0;
    ram_000000000276ef60 = 0;
    g_0276ef68 = 0;
    ram_000000000276ef70 = 0;
    g_0276ef78 = 0;
    ram_000000000276ef80 = 0;
    g_0276ef88 = 0;
    ram_000000000276ef90 = 0;
    g_0276ef98 = 0;
    ram_000000000276efa0 = 0;
    g_0276efa8 = 0;
    ram_000000000276efb0 = 0;
    g_0276efb8 = 0;
    ___cxa_guard_release();
  }
  if (plVar7 == (int64_t *)0x0) {
LAB_00c37ad9:
    plVar7 = (int64_t *)&g_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar5 = FUN_00e85ea0();
    plVar7 = param_1;
    if (cVar5 == '\0') goto LAB_00c37ad9;
  }
  lVar1 = *plVar7;
  lVar3 = plVar7[1];
  if (((char)lVar3 != '\0') && (lVar1 != 0)) {
    FUN_00d50b00();
  }
  pplVar8 = &local_40;
  FUN_00c16ff0();
  plVar7 = local_40;
  if ((g_0276efc0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    g_0276ef10 = FUN_00b10020();
    g_0276eef8 = "GNOverloudCompG";
    g_0276ef00 = 0xe8;
    g_0276ef08 = FUN_00c42f00;
    g_0276ef18 = 0;
    ram_000000000276ef20 = 0;
    g_0276ef28 = 0;
    ram_000000000276ef30 = 0;
    g_0276ef38 = 0;
    ram_000000000276ef40 = 0;
    g_0276ef48 = 0;
    ram_000000000276ef50 = 0;
    g_0276ef58 = 0;
    ram_000000000276ef60 = 0;
    g_0276ef68 = 0;
    ram_000000000276ef70 = 0;
    g_0276ef78 = 0;
    ram_000000000276ef80 = 0;
    g_0276ef88 = 0;
    ram_000000000276ef90 = 0;
    g_0276ef98 = 0;
    ram_000000000276efa0 = 0;
    g_0276efa8 = 0;
    ram_000000000276efb0 = 0;
    g_0276efb8 = 0;
    ___cxa_guard_release();
  }
  if (plVar7 == (int64_t *)0x0) {
    pplVar8 = &g_02802688;
    plVar7 = g_02802688;
    if (g_02802690 == '\0') goto LAB_00c37b7c;
LAB_00c37b60:
    *(void*)(pplVar8 + 1) = 0;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') {
      pplVar8 = &g_02802688;
    }
    plVar7 = *pplVar8;
    if (*(char *)(pplVar8 + 1) != '\0') goto LAB_00c37b60;
LAB_00c37b7c:
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar4 = g_0276c408;
  plVar2 = (int64_t *)*param_3;
  if (g_0276c408 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar2 + 0x50))();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  lVar4 = g_0276cda8;
  if (cVar5 == '\0') {
    plVar2 = (int64_t *)*param_3;
    if (g_0276cda8 != 0) {
      FUN_00d50b00();
    }
    cVar5 = (**(code **)(*plVar2 + 0x50))();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = g_0276c410;
    if (cVar5 != '\0') {
      FUN_00d46530();
      plVar2 = local_40;
      *(void*)(this_ptr + 1) = 0;
      if (local_38 == '\0') {
        if (local_40 == (int64_t *)0x0) goto LAB_00c37de9;
        FUN_00d50b00();
        *this_ptr = plVar2;
        *(void*)(this_ptr + 1) = 1;
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00c37df7;
      }
      goto LAB_00c37deb;
    }
    if (plVar7 == (int64_t *)0x0) {
LAB_00c37f04:
      local_c8 = *param_1;
      local_c0 = 0;
      local_b8 = *param_3;
      local_b0 = 0;
      FUN_00c17210(&local_c8,param_2,&local_b8);
      goto LAB_00c37df7;
    }
    plVar2 = (int64_t *)*param_3;
    if (g_0276c410 != 0) {
      FUN_00d50b00();
    }
    cVar5 = (**(code **)(*plVar2 + 0x50))();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = g_0276cdb0;
    if (cVar5 != '\0') {
      iVar6 = *(int *)(lVar1 + 0xe0);
      if (iVar6 == 0) {
        FUN_00aea610((int)plVar7[0x19]);
        FUN_00d46dc0();
        plVar7 = local_40;
        *(void*)(this_ptr + 1) = 0;
        if (local_38 == '\0') {
          if (local_40 == (int64_t *)0x0) goto LAB_00c38182;
          FUN_00d50b00();
          *this_ptr = plVar7;
          *(void*)(this_ptr + 1) = 1;
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00c37dfc;
        }
      }
      else if (iVar6 == 2) {
        FUN_00aea610((int)plVar7[0x1a]);
        FUN_00d46dc0();
        plVar7 = local_40;
        *(void*)(this_ptr + 1) = 0;
        if (local_38 == '\0') {
          if (local_40 == (int64_t *)0x0) goto LAB_00c38182;
          FUN_00d50b00();
          *this_ptr = plVar7;
          *(void*)(this_ptr + 1) = 1;
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00c37dfc;
        }
      }
      else if (iVar6 == 4) {
        FUN_00aea610((int)plVar7[0x1b]);
        FUN_00d46dc0();
        plVar7 = local_40;
        *(void*)(this_ptr + 1) = 0;
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
            *this_ptr = plVar7;
            *(void*)(this_ptr + 1) = 1;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_00c37dfc;
          }
LAB_00c38182:
          local_40 = (int64_t *)0x0;
        }
      }
      else {
        FUN_00d46dc0(g_023b36a8);
        plVar7 = local_40;
        *(void*)(this_ptr + 1) = 0;
        if (local_38 == '\0') {
          if (local_40 == (int64_t *)0x0) goto LAB_00c38182;
          FUN_00d50b00();
          *this_ptr = plVar7;
          *(void*)(this_ptr + 1) = 1;
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00c37dfc;
        }
      }
      goto LAB_00c38184;
    }
    plVar2 = (int64_t *)*param_3;
    if (g_0276cdb0 != 0) {
      FUN_00d50b00();
    }
    cVar5 = (**(code **)(*plVar2 + 0x50))();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if (cVar5 == '\0') goto LAB_00c37f04;
    iVar6 = *(int *)(lVar1 + 0xe4);
    if (iVar6 == 1) {
      FUN_00aea610(*(void*)((int64_t)plVar7 + 0xcc));
      FUN_00d46dc0();
      plVar7 = local_40;
      *(void*)(this_ptr + 1) = 0;
      if (local_38 != '\0') goto LAB_00c38184;
      if (local_40 == (int64_t *)0x0) goto LAB_00c38182;
      FUN_00d50b00();
      *this_ptr = plVar7;
      *(void*)(this_ptr + 1) = 1;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (iVar6 == 3) {
      FUN_00aea610(*(void*)((int64_t)plVar7 + 0xd4));
      FUN_00d46dc0();
      plVar7 = local_40;
      *(void*)(this_ptr + 1) = 0;
      if (local_38 != '\0') goto LAB_00c38184;
      if (local_40 == (int64_t *)0x0) goto LAB_00c38182;
      FUN_00d50b00();
      *this_ptr = plVar7;
      *(void*)(this_ptr + 1) = 1;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (iVar6 == 5) {
      FUN_00aea610(*(void*)((int64_t)plVar7 + 0xdc));
      FUN_00d46dc0();
      plVar7 = local_40;
      *(void*)(this_ptr + 1) = 0;
      if (local_38 == '\0') {
        if (local_40 == (int64_t *)0x0) goto LAB_00c38182;
        FUN_00d50b00();
        *this_ptr = plVar7;
        *(void*)(this_ptr + 1) = 1;
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
LAB_00c38184:
        *this_ptr = local_40;
        *(void*)(this_ptr + 1) = 1;
      }
    }
    else {
      FUN_00d46dc0(g_023b36a8);
      plVar7 = local_40;
      *(void*)(this_ptr + 1) = 0;
      if (local_38 != '\0') goto LAB_00c38184;
      if (local_40 == (int64_t *)0x0) goto LAB_00c38182;
      FUN_00d50b00();
      *this_ptr = plVar7;
      *(void*)(this_ptr + 1) = 1;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_00d46530();
    plVar2 = local_40;
    *(void*)(this_ptr + 1) = 0;
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) {
LAB_00c37de9:
        local_40 = (int64_t *)0x0;
        goto LAB_00c37deb;
      }
      FUN_00d50b00();
      *this_ptr = plVar2;
      *(void*)(this_ptr + 1) = 1;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
LAB_00c37deb:
      *this_ptr = local_40;
      *(void*)(this_ptr + 1) = 1;
    }
LAB_00c37df7:
    if (plVar7 == (int64_t *)0x0) goto LAB_00c37e04;
  }
LAB_00c37dfc:
  FUN_00d50b20();
LAB_00c37e04:
  if (((char)lVar3 != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 00c3a570
// ============================================================
// Function: FUN_00c3a570
// Address: 00c3a570
// Size: 1510 bytes
// Class: GNOverloudCompG
// === GNOverloudCompG properties ===
//   float           _minValue
//   float           _maxValue
//   float           _offValue


uint64_t FUN_00c3a570(uint64_t param_1,byte param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint64_t uVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar7;
  uint32_t extraout_XMM0_Da_00;
  float fVar8;
  int64_t local_f0;
  char local_e8;
  int64_t *local_e0;
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
  float local_7c;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  float local_44;
  int64_t *local_40;
  char local_38;
  
  FUN_01cae990();
  plVar2 = local_40;
  lVar1 = g_027ef7e8;
  if (g_027ef7e8 != 0) {
    FUN_00d50b00();
  }
  bVar3 = (**(code **)(*plVar2 + 0x50))();
  uVar7 = extraout_XMM0_Da;
  if (lVar1 != 0) {
    uVar7 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar7 = FUN_00d50b20();
  }
  if ((bVar3 & param_2) == 0) {
    local_90 = *arg1;
    local_88 = '\0';
    uVar5 = FUN_01d16950(uVar7,param_2);
    uVar6 = (uint64_t)uVar5;
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    goto LAB_00c3ab42;
  }
  FUN_01ccad60();
  iVar4 = (**(code **)(*local_40 + 0x920))();
  uVar7 = extraout_XMM0_Da_00;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar7 = FUN_00d50b20();
  }
  lVar1 = g_027e7c20;
  if (iVar4 == 0) {
    if (g_027e7c20 != 0) {
      uVar7 = FUN_00d50b00();
    }
    local_c0 = lVar1;
    local_b8 = '\x01';
    uVar7 = (**(code **)(*this_ptr + 0x4c8))(uVar7,&local_c0);
    plVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (uVar7 = FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        uVar7 = FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      uVar7 = FUN_00d50b20();
    }
    if (plVar2 != (int64_t *)0x0) {
      uVar7 = FUN_00d46dc0((int)this_ptr[0xd]);
      local_58 = local_40;
      local_50 = 0;
      local_b0 = g_027e7c20;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          uVar7 = FUN_00d50b00();
          local_b0 = g_027e7c20;
        }
      }
      else {
        local_38 = '\0';
      }
      local_50 = '\x01';
      g_027e7c20 = local_b0;
      if (local_b0 != 0) {
        local_50 = '\x01';
        uVar7 = FUN_00d50b00();
      }
      local_a8 = '\x01';
      (**(code **)(*this_ptr + 0x4d0))(uVar7,&local_b0);
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar7 = FUN_00d50b20();
    }
  }
  else {
    local_7c = *(float *)(this_ptr + 0xc);
    fVar8 = *(float *)((int64_t)this_ptr + 100);
    local_44 = fVar8;
    if (g_027e7c20 != 0) {
      fVar8 = (float)FUN_00d50b00();
    }
    local_f0 = lVar1;
    local_e8 = '\x01';
    FUN_01ccaae0(fVar8,&local_f0);
    plVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    local_44 = (local_44 - local_7c) * g_0239011c + local_7c;
    if (plVar2 != (int64_t *)0x0) {
      uVar7 = FUN_01d836c0();
      plVar2 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          uVar7 = FUN_00d50b00();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            uVar7 = FUN_00d50b20();
          }
          goto LAB_00c3a856;
        }
      }
      else if (local_40 != (int64_t *)0x0) {
LAB_00c3a856:
        local_70 = 0;
        lVar1 = this_ptr[0xe];
        if (lVar1 != 0) {
          uVar7 = FUN_00d50b00();
        }
        local_70 = '\x01';
        local_78 = lVar1;
        (**(code **)(*plVar2 + 0x88))(uVar7,&local_78);
        plVar2 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
             (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if (plVar2 != (int64_t *)0x0) {
          local_e0 = plVar2;
          local_d8 = '\0';
          local_44 = (float)FUN_00c71d60();
          if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    uVar7 = FUN_00d46dc0(local_44);
    local_68 = local_40;
    local_60 = 0;
    local_d0 = g_027e7c20;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        uVar7 = FUN_00d50b00();
        local_d0 = g_027e7c20;
      }
    }
    else {
      local_38 = '\0';
    }
    local_60 = '\x01';
    g_027e7c20 = local_d0;
    if (local_d0 != 0) {
      local_60 = '\x01';
      uVar7 = FUN_00d50b00();
    }
    local_c8 = '\x01';
    uVar7 = (**(code **)(*this_ptr + 0x4d0))(uVar7,&local_d0);
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      uVar7 = FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      uVar7 = FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      uVar7 = FUN_00d50b20();
    }
  }
  lVar1 = g_027e7c20;
  if (g_027e7c20 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_a0 = lVar1;
  local_98 = '\x01';
  FUN_01ccaae0(uVar7,&local_a0);
  FUN_01d243a0();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  uVar6 = CONCAT71((int7)((uint64_t)lVar1 >> 8),1);
LAB_00c3ab42:
  return uVar6 & 0xffffffff;
}



// ============================================================
// 00c3b010
// ============================================================
// Function: FUN_00c3b010
// Address: 00c3b010
// Size: 734 bytes
// Class: GNOverloudCompG
// === GNOverloudCompG properties ===
//   float           _minValue
//   float           _maxValue
//   float           _offValue


void FUN_00c3b010(void)

{
  int64_t lVar1;
  void*puVar2;
  void*puVar3;
  int64_t this_ptr;
  int64_t lVar4;
  bool bVar5;
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
  
  *(void*)(this_ptr + 0xb8) = 0x15;
  lVar1 = g_0276ce58;
  if (g_0276ce58 == 0) {
    lVar4 = *(int64_t *)(this_ptr + 0x90);
    if (lVar4 == 0) goto LAB_00c3b076;
  }
  else {
    FUN_00d50b00();
    lVar4 = *(int64_t *)(this_ptr + 0x90);
    if (lVar4 == lVar1) {
      FUN_00d50b20();
      goto LAB_00c3b076;
    }
  }
  *(int64_t *)(this_ptr + 0x90) = lVar1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_00c3b076:
  *(void*)(this_ptr + 0xa8) = 4;
  if ((g_028a5f98 == (void*)0x0) || (g_028a5fa1 == '\0')) {
    FUN_00e8cb50();
    if (g_028a5f98 == (void*)0x0) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_0254ed40;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      FUN_00d500e0();
      bVar5 = g_028a5f98 == (void*)0x0;
      g_028a5f98 = puVar3;
      if (((bVar5) || (FUN_00d50b20(), lVar1 = g_0276c380, g_028a5f98 != (void*)0x0)) &&
         (lVar1 = g_0276c380, g_028a5fa0 == '\0')) {
        g_028a5fa0 = '\x01';
        FUN_00e8cb90();
        lVar1 = g_0276c380;
      }
      g_0276c380 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c388;
      local_80 = 1;
      local_88 = lVar1;
      if (g_0276c388 != 0) {
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
      lVar1 = g_0276ce60;
      if (g_0276ce60 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276ce68;
      local_68 = lVar1;
      local_60 = 1;
      if (g_0276ce68 != 0) {
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
      g_028a5fa1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a5fa1 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = *(void**)(this_ptr + 0xb0);
    if (puVar3 == g_028a5f98) {
      return;
    }
  }
  else {
    puVar3 = *(void**)(this_ptr + 0xb0);
    if (puVar3 == g_028a5f98) {
      return;
    }
  }
  puVar2 = g_028a5f98;
  if (g_028a5f98 != (void*)0x0) {
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
// 00c3b7b0
// ============================================================
// Function: FUN_00c3b7b0
// Address: 00c3b7b0
// Size: 616 bytes
// Class: GNOverloudCompG
// === GNOverloudCompG properties ===
//   float           _minValue
//   float           _maxValue
//   float           _offValue


void FUN_00c3b7b0(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int iVar2;
  int64_t *this_ptr;
  uint64_t uVar3;
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint32_t uVar6;
  uint uVar7;
  uint32_t in_XMM1_Dc;
  uint in_XMM1_Dd;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  int64_t *local_30;
  char local_28;
  
  uVar7 = (uint)((uint64_t)param_2 >> 0x20);
  uVar6 = (uint32_t)param_2;
  uVar3 = FUN_01d17670();
  local_60 = g_027e7c20;
  if (g_027e7c20 != 0) {
    uVar3 = FUN_00d50b00();
  }
  local_58 = '\x01';
  (**(code **)(*this_ptr + 0x4c8))(uVar3,&local_60);
  plVar1 = local_30;
  if (local_28 == '\0') {
    if (((local_30 != (int64_t *)0x0) && (FUN_00d50b00(), local_28 != '\0')) &&
       (local_30 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_28 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    local_50 = plVar1;
    local_48 = '\0';
    iVar2 = FUN_00c716c0();
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (iVar2 != 0) {
      FUN_01e40eb0();
      plVar1 = local_30;
      if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        return;
      }
      FUN_01e40eb0();
      plVar1 = local_30;
      local_38 = 0;
      local_40 = this_ptr[0xc];
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      local_38 = '\x01';
      (**(code **)(*plVar1 + 0x450))();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      plVar1 = (int64_t *)this_ptr[0xd];
      FUN_01e3f820();
      auVar4._4_4_ = uVar7;
      auVar4._0_4_ = uVar6;
      auVar4._8_4_ = in_XMM1_Dc;
      auVar4._12_4_ = in_XMM1_Dd;
      auVar4 = blendps(ZEXT816(0),auVar4,2);
      (**(code **)(*plVar1 + 0x4f0))(auVar4._0_8_);
      FUN_01e40eb0();
      (**(code **)(*local_30 + 0x620))();
      if (local_28 == '\0') {
        return;
      }
      if (local_30 == (int64_t *)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
  }
  FUN_01e40eb0();
  plVar1 = local_30;
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)this_ptr[0xc] + 0x478))();
    plVar1 = (int64_t *)this_ptr[0xd];
    FUN_01e3f820();
    auVar5._0_4_ = uVar7 ^ g_023945e0;
    auVar5._4_4_ = uVar7 ^ _UNK_023945e4;
    auVar5._8_4_ = in_XMM1_Dd ^ _UNK_023945e8;
    auVar5._12_4_ = in_XMM1_Dd ^ _UNK_023945ec;
    auVar4 = insertps(auVar5,auVar5,0x1d);
    (**(code **)(*plVar1 + 0x4f0))(auVar4._0_8_);
    FUN_01e40eb0();
    (**(code **)(*local_30 + 0x620))();
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 00c3b430
// ============================================================
// Function: FUN_00c3b430
// Address: 00c3b430
// Size: 545 bytes
// Class: GNOverloudCompG
// === GNOverloudCompG properties ===
//   float           _minValue
//   float           _maxValue
//   float           _offValue


void FUN_00c3b430(float param_1)

{
  void*puVar1;
  int64_t lVar2;
  void*puVar3;
  int64_t arg1;
  int64_t *plVar4;
  int64_t *this_ptr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar2 = g_0276ce70;
  if ((param_1 != g_02390124) || (NAN(param_1) || NAN(g_02390124))) {
    if (g_0239426c <= param_1) {
      fVar5 = (float)FUN_00d48b10();
      fVar6 = (float)FUN_00d48af0();
      fVar7 = (float)((uint)(fVar5 - fVar6) & g_02390140);
      fVar5 = *(float *)(arg1 + 0x50);
      fVar8 = g_02390124 / (*(float *)(arg1 + 0x54) - fVar5);
      fVar6 = (float)FUN_00d48af0();
      fVar6 = fVar6 + (param_1 - fVar5) * fVar8 * fVar7;
      if (*(char *)(arg1 + 0x58) != '\0') {
        fVar5 = (float)FUN_00d48b10();
        fVar6 = (float)((uint)(fVar6 - fVar5) ^ g_023945e0);
      }
      FUN_00d49aa0(fVar6);
    }
    else if ((param_1 != 0.0) || (NAN(param_1))) {
      if ((g_0239426c <= param_1) || (param_1 <= 0.0)) {
        FUN_00d8ede0();
      }
      else {
        plVar4 = *(int64_t **)(arg1 + 0x60);
        if (plVar4 == (int64_t *)0x0) {
          puVar3 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *(void*)((int64_t)puVar3 + 0xc) = 0;
          *(void*)((int64_t)puVar3 + 0x14) = 0;
          *(void*)((int64_t)puVar3 + 0x1a) = 0;
          puVar3[5] = 0;
          puVar3[6] = 0;
          puVar3[7] = 0;
          puVar3[8] = 0;
          puVar3[9] = 0;
          puVar3[10] = 0;
          *puVar3 = &g_0255ebc0;
          *(void*)(puVar3 + 0xb) = 0;
          FUN_00d500e0();
          puVar1 = *(void**)(arg1 + 0x60);
          if (puVar1 == puVar3) {
            FUN_00d50b20();
          }
          else {
            *(void**)(arg1 + 0x60) = puVar3;
            if (puVar1 != (void*)0x0) {
              FUN_00d50b20();
            }
          }
          FUN_00d48ac0();
          FUN_00d48ae0(g_023d7ffc);
          FUN_00d48b00(g_023941f0);
          plVar4 = *(int64_t **)(arg1 + 0x60);
        }
        (**(code **)(*plVar4 + 0x378))
                  ((uint)(param_1 * g_02390d2c + g_02390d00) ^ g_023945e0);
      }
    }
    else {
      FUN_00d933c0();
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar2;
    *(void*)(this_ptr + 1) = 1;
  }
  return;
}



// ============================================================
// 00c4a720
// ============================================================
// Function: FUN_00c4a720
// Address: 00c4a720
// Size: 1814 bytes
// Class: GNOverloudCompG
// String references:
//   "GNOverloudCompG"
// === GNOverloudCompG properties ===
//   float           _minValue
//   float           _maxValue
//   float           _offValue


void FUN_00c4a720(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00b10260();
  *this_ptr = &g_0255f708;
  *(void*)(this_ptr + 0x19) = 0;
  // [STATIC_INIT: property registration]
  if (g_0276efb3 == '\0') {
    FUN_00c4ae70();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xcc) = 0;
  // [STATIC_INIT: property registration]
  if (g_0276efb3 == '\0') {
    FUN_00c4afe0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x1a) = 0;
  // [STATIC_INIT: property registration]
  if (g_0276efb3 == '\0') {
    FUN_00c4b150();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xd4) = 0;
  // [STATIC_INIT: property registration]
  if (g_0276efb3 == '\0') {
    FUN_00c4b2c0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x1b) = 0;
  // [STATIC_INIT: property registration]
  if (g_0276efb3 == '\0') {
    FUN_00c4b430();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xdc) = 0;
  // [STATIC_INIT: property registration]
  if (g_0276efb3 == '\0') {
    FUN_00c4b5a0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x1c) = 0;
  // [STATIC_INIT: property registration]
  if (g_0276efb3 == '\0') {
    FUN_00c4b710();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xe4) = 0;
  // [STATIC_INIT: property registration]
  if (g_0276efb3 == '\0') {
    FUN_00c4b880();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 00c4bbb0
// ============================================================
// Function: FUN_00c4bbb0
// Address: 00c4bbb0
// Size: 578 bytes
// Class: GNOverloudCompG
// String references:
//   "_minValue"
//   "float"
//   "_maxValue"
//   "_offValue"
// === GNOverloudCompG properties ===
//   float           _minValue
//   float           _maxValue
//   float           _offValue


void FUN_00c4bbb0(void)

{
  int iVar1;
  int64_t lVar2;
  void*this_ptr;
  
  FUN_001bcb00();
  *this_ptr = &g_02560740;
  this_ptr[9] = &g_02560c90;
  this_ptr[10] = &g_02560cf8;
  *(void*)(this_ptr + 0xc) = 0;
  lVar2 = FUN_00c432b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 100) = 0;
  lVar2 = FUN_00c432b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xd) = 0;
  lVar2 = FUN_00c432b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_00c4be40();
  return;
}

