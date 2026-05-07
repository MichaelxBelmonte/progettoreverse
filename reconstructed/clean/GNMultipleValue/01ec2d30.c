// Function: FUN_01ec2d30
// Address: 01ec2d30
// Size: 4995 bytes
// Class: GNMultipleValue
// String references:
//   "GNMultipleValue"
//   "GNControl"
//   "value%I"

void FUN_01ec2d30(void)

{
  int64_t *plVar1;
  void*puVar2;
  bool bVar3;
  bool bVar4;
  int64_t lVar5;
  char cVar6;
  int iVar7;
  void*puVar8;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  undefined7 extraout_var_03;
  undefined7 uVar9;
  int64_t *plVar10;
  int64_t *plVar11;
  int64_t lVar12;
  int64_t *plVar13;
  int64_t *plVar14;
  int64_t *this_ptr;
  void**ppuVar15;
  int64_t **pplVar16;
  uint32_t uVar17;
  uint32_t extraout_XMM0_Da;
  int64_t *local_2c8;
  uint8_t local_2c0;
  int64_t *local_2b8;
  char local_2b0;
  int64_t local_2a8;
  char local_2a0;
  void*local_298;
  char local_290;
  void*local_288;
  char local_280;
  int64_t local_278;
  int64_t local_270;
  int64_t *local_268;
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
  int64_t local_210;
  char local_208;
  int64_t local_200;
  char local_1f8;
  int64_t local_1f0;
  void*local_1e8;
  uint32_t local_1e0;
  uint32_t local_1dc;
  void*local_1d8;
  int64_t local_1d0;
  uint64_t local_1c8;
  int64_t *local_1c0;
  uint local_1b8;
  void*local_1b0;
  char local_1a8;
  int64_t local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t local_170;
  char local_168;
  int64_t *local_160;
  int64_t *local_158;
  void*local_138;
  char local_130 [8];
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
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  local_130[0] = '\0';
  local_138 = (void*)0x0;
  local_128 = 0;
  local_120 = '\0';
  local_118 = 0;
  local_110 = '\0';
  local_108 = 0;
  local_100 = '\0';
  local_f8 = 0;
  local_f0 = '\0';
  local_e8 = 0;
  local_e0 = '\0';
  local_d8 = 0;
  local_d0 = '\0';
  local_c0 = '\0';
  local_c8 = 0;
  local_b0 = '\0';
  local_b8 = 0;
  local_a0 = '\0';
  local_a8 = 0;
  local_90 = '\0';
  local_98 = 0;
  local_80 = '\0';
  local_88 = 0;
  local_70 = '\0';
  local_78 = 0;
  local_60 = '\0';
  local_68 = 0;
  local_50 = '\0';
  local_58 = 0;
  local_40 = '\0';
  local_48 = 0;
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &g_025795a8;
  (*g_025795c0)();
  local_270 = 0;
  local_1c8 = 0;
  bVar3 = false;
  local_158 = (int64_t *)0x0;
  plVar11 = (int64_t *)0x0;
  local_1d8 = puVar8;
LAB_01ec2eb2:
  do {
    plVar14 = plVar11;
    plVar11 = (int64_t *)(local_130 + local_270 * 0x10 + -8);
    do {
      plVar13 = plVar11;
      lVar12 = local_270;
      iVar7 = FUN_01cc9c20();
      puVar8 = local_1d8;
      if (iVar7 < lVar12) {
        ppuVar15 = &local_138;
        lVar12 = -1;
        goto LAB_01ec3680;
      }
      local_270 = lVar12 + 1;
      local_1e0 = 1;
      local_1e8 = &g_024cc6f0;
      local_1dc = (uint32_t)local_270;
      uVar17 = FUN_00d8cb40(local_270,&local_1e8);
      plVar11 = local_1c0;
      local_160 = (int64_t *)lVar12;
      if (local_158 == local_1c0) {
        plVar11 = local_158;
        if (bVar3) {
          bVar4 = true;
        }
        else if (local_158 == (int64_t *)0x0) {
          bVar4 = false;
        }
        else {
          bVar3 = true;
          if ((char)local_1b8 != '\0') goto LAB_01ec30cd;
          bVar4 = true;
          uVar17 = FUN_00d50b00();
        }
LAB_01ec3090:
        bVar3 = bVar4;
        if (((char)local_1b8 != '\0') && (local_1c0 != (int64_t *)0x0)) {
          uVar17 = FUN_00d50b20();
        }
      }
      else {
        if ((char)local_1b8 == '\0') {
          if (local_1c0 != (int64_t *)0x0) {
            uVar17 = FUN_00d50b00();
          }
          bVar4 = true;
          if ((bVar3) && (local_158 != (int64_t *)0x0)) {
            uVar17 = FUN_00d50b20();
          }
          goto LAB_01ec3090;
        }
        if ((bVar3) && (local_158 != (int64_t *)0x0)) {
          uVar17 = FUN_00d50b20();
          bVar3 = true;
        }
        else {
          bVar3 = true;
        }
      }
LAB_01ec30cd:
      local_2b0 = '\0';
      local_2b8 = plVar11;
      local_158 = plVar11;
      (**(code **)(*this_ptr + 0x4c8))(uVar17,&local_2b8);
      plVar1 = local_1c0;
      plVar11 = (int64_t *)*plVar13;
      if (plVar11 == local_1c0) {
        if (((char)plVar13[1] == '\0') && (local_1c0 != (int64_t *)0x0)) {
          plVar10 = (int64_t *)(local_130 + (int64_t)local_160 * 0x10);
          if ((char)local_1b8 != '\0') goto LAB_01ec3177;
          FUN_00d50b00();
          goto LAB_01ec31bd;
        }
LAB_01ec31c8:
        plVar11 = local_160;
        if (((char)local_1b8 != '\0') && (local_1c0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar10 = plVar13 + 1;
        lVar12 = plVar13[1];
        if ((char)local_1b8 == '\0') {
          if (local_1c0 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          *plVar13 = (int64_t)plVar1;
          if (((char)lVar12 != '\0') && (plVar11 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_01ec31bd:
          *(void*)plVar10 = 1;
          goto LAB_01ec31c8;
        }
        *plVar13 = (int64_t)local_1c0;
        if (((char)lVar12 != '\0') && (plVar11 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01ec3177:
        *(void*)plVar10 = 1;
        local_1b8 = local_1b8 & 0xffffff00;
        plVar11 = local_160;
      }
      if ((local_2b0 != '\0') && (local_2b8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      plVar1 = (int64_t *)*plVar13;
      if ((g_0277a3a0 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
        g_026d3c38 = FUN_00d4fe50();
        g_026d3c20 = "GNMultipleValue";
        g_026d3c28 = 0x18;
        g_026d3c30 = FUN_00050c70;
        g_026d3c40 = 0;
        ram_00000000026d3c48 = 0;
        g_026d3c50 = 0;
        ram_00000000026d3c58 = 0;
        g_026d3c60 = 0;
        ram_00000000026d3c68 = 0;
        g_026d3c70 = 0;
        ram_00000000026d3c78 = 0;
        g_026d3c80 = 0;
        ram_00000000026d3c88 = 0;
        g_026d3c90 = 0;
        ram_00000000026d3c98 = 0;
        g_026d3ca0 = 0;
        ram_00000000026d3ca8 = 0;
        g_026d3cb0 = 0;
        ram_00000000026d3cb8 = 0;
        g_026d3cc0 = 0;
        ram_00000000026d3cc8 = 0;
        g_026d3cd0 = 0;
        ram_00000000026d3cd8 = 0;
        g_026d3ce0 = 0;
        ___cxa_guard_release();
        plVar11 = local_160;
      }
      plVar10 = &g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar6 = FUN_00e85ea0();
        plVar10 = plVar13;
        if (cVar6 == '\0') {
          plVar10 = &g_02802688;
        }
      }
      local_160 = (int64_t *)CONCAT71(local_160._1_7_,(char)plVar10[1]);
      if (((char)plVar10[1] == '\0') || (*plVar10 == 0)) {
        if (*plVar10 != 0) goto LAB_01ec3279;
      }
      else {
        FUN_00d50b00();
LAB_01ec3279:
        FUN_00e987e0();
        plVar10 = local_1c0;
        plVar1 = (int64_t *)*plVar13;
        if (plVar1 == local_1c0) {
          if (((char)plVar13[1] == '\0') && (local_1c0 != (int64_t *)0x0)) {
            local_268 = (int64_t *)(local_130 + (int64_t)plVar11 * 0x10);
            if ((char)local_1b8 != '\0') goto LAB_01ec32fa;
            FUN_00d50b00();
            goto LAB_01ec3333;
          }
LAB_01ec333d:
          if (((char)local_1b8 != '\0') && (local_1c0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_268 = plVar13 + 1;
          lVar12 = plVar13[1];
          if ((char)local_1b8 == '\0') {
            if (local_1c0 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            *plVar13 = (int64_t)plVar10;
            if (((char)lVar12 != '\0') && (plVar1 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_01ec3333:
            *(void*)local_268 = 1;
            goto LAB_01ec333d;
          }
          *plVar13 = (int64_t)local_1c0;
          if (((char)lVar12 != '\0') && (plVar1 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_01ec32fa:
          *(void*)local_268 = 1;
        }
        if ((char)local_160 != '\0') {
          FUN_00d50b20();
        }
      }
      plVar11 = plVar13 + 2;
    } while (*plVar13 == 0);
    local_2c8 = local_158;
    local_2c0 = 0;
    uVar17 = FUN_01ec2c30(local_270,&local_2c8);
    plVar11 = local_1c0;
    uVar9 = extraout_var;
    if (local_1c0 != plVar14) {
      if ((char)local_1b8 == '\0') {
        if (local_1c0 != (int64_t *)0x0) {
          uVar17 = FUN_00d50b00();
          uVar9 = extraout_var_01;
        }
        if (((char)local_1c8 != '\0') && (plVar14 != (int64_t *)0x0)) {
          uVar17 = FUN_00d50b20();
          uVar9 = extraout_var_02;
        }
      }
      else if (((char)local_1c8 != '\0') && (plVar14 != (int64_t *)0x0)) {
        uVar17 = FUN_00d50b20();
        uVar9 = extraout_var_00;
      }
LAB_01ec3527:
      plVar14 = plVar11;
      local_1c8 = CONCAT71(uVar9,1);
      plVar11 = (int64_t *)0x0;
      if (plVar14 != (int64_t *)0x0) break;
      goto LAB_01ec2eb2;
    }
    if (((char)local_1c8 == '\0') && (local_1c0 != (int64_t *)0x0)) {
      plVar11 = plVar14;
      if ((char)local_1b8 == '\0') {
        uVar17 = FUN_00d50b00();
        uVar9 = extraout_var_03;
      }
      goto LAB_01ec3527;
    }
    if (((char)local_1b8 != '\0') && (local_1c0 != (int64_t *)0x0)) {
      uVar17 = FUN_00d50b20();
    }
    plVar11 = (int64_t *)0x0;
  } while (plVar14 == (int64_t *)0x0);
  local_2a8 = *plVar13;
  local_2a0 = '\0';
  (**(code **)(*plVar14 + 0x388))(uVar17,&local_2a8);
  plVar1 = local_1c0;
  plVar11 = (int64_t *)*plVar13;
  if (plVar11 == local_1c0) {
    if (((char)plVar13[1] != '\0') || (local_1c0 == (int64_t *)0x0)) goto LAB_01ec361d;
    if ((char)local_1b8 == '\0') {
      FUN_00d50b00();
      goto LAB_01ec3618;
    }
  }
  else {
    local_160 = plVar13;
    lVar12 = plVar13[1];
    if ((char)local_1b8 == '\0') {
      if (local_1c0 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *local_160 = (int64_t)plVar1;
      if (((char)lVar12 != '\0') && (plVar11 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_01ec3618:
      *(void*)(plVar13 + 1) = 1;
LAB_01ec361d:
      if (((char)local_1b8 != '\0') && (local_1c0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01ec3637;
    }
    *plVar13 = (int64_t)local_1c0;
    if (((char)lVar12 != '\0') && (plVar11 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  *(void*)(plVar13 + 1) = 1;
  local_1b8 = local_1b8 & 0xffffff00;
LAB_01ec3637:
  plVar11 = plVar14;
  if ((local_2a0 != '\0') && (local_2a8 != 0)) {
    FUN_00d50b20();
  }
  goto LAB_01ec2eb2;
  while (puVar2 = *ppuVar15, ppuVar15 = ppuVar15 + 2, puVar2 == (void*)0x0) {
LAB_01ec3680:
    iVar7 = FUN_01cc9c20();
    lVar12 = lVar12 + 1;
    if (iVar7 <= lVar12) {
      lVar12 = this_ptr[0xb];
      if (lVar12 != 0) {
        local_258 = 0;
        uVar17 = FUN_00d50b00();
        local_258 = '\x01';
        local_260 = lVar12;
        FUN_00d93870(uVar17,g_025908a0);
        if ((local_258 != '\0') && (local_260 != 0)) {
          FUN_00d50b20();
        }
      }
      goto switchD_01ec36ca_default;
    }
  }
  uVar17 = FUN_01cc9c20();
  switch(uVar17) {
  case 0:
    local_248 = 0;
    lVar12 = this_ptr[10];
    uVar17 = extraout_XMM0_Da;
    if (lVar12 != 0) {
      uVar17 = FUN_00d50b00();
    }
    local_248 = '\x01';
    local_250 = lVar12;
    FUN_00d93870(uVar17,g_025908a0);
    if ((local_248 != '\0') && (local_250 != 0)) {
      FUN_00d50b20();
    }
    break;
  case 1:
    local_238 = 0;
    lVar12 = this_ptr[10];
    uVar17 = extraout_XMM0_Da;
    if (lVar12 != 0) {
      uVar17 = FUN_00d50b00();
    }
    puVar2 = local_138;
    local_238 = '\x01';
    local_1b8 = 1;
    local_1c0 = &g_024c5048;
    local_1a8 = 0;
    local_240 = lVar12;
    if (local_138 != (void*)0x0) {
      uVar17 = FUN_00d50b00();
    }
    local_1b0 = puVar2;
    local_1a8 = '\x01';
    FUN_00d93870(uVar17,&local_1c0);
    local_1c0 = &g_024c5048;
    if ((local_1a8 != '\0') && (local_1b0 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_238 != '\0') && (local_240 != 0)) {
      FUN_00d50b20();
    }
    break;
  case 2:
    local_228 = 0;
    lVar12 = this_ptr[10];
    if (lVar12 != 0) {
      FUN_00d50b00();
    }
    local_228 = '\x01';
    local_1e8 = local_138;
    local_1d0 = local_128;
    local_230 = lVar12;
    uVar17 = FUN_00083ea0(2,&local_1d0);
    FUN_00d93870(uVar17,&local_1c0);
    local_1c0 = (int64_t *)&g_0253d630;
    if ((local_198 != '\0') && (local_1a0 != 0)) {
      FUN_00d50b20();
    }
    local_1c0 = &g_024c5048;
    if ((local_1a8 != '\0') && (local_1b0 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_228 != '\0') && (local_230 != 0)) {
      FUN_00d50b20();
    }
    break;
  case 3:
    local_218 = 0;
    lVar12 = this_ptr[10];
    if (lVar12 != 0) {
      FUN_00d50b00();
    }
    local_218 = '\x01';
    local_1e8 = local_138;
    local_1d0 = local_128;
    local_1f0 = local_118;
    local_220 = lVar12;
    uVar17 = FUN_002bd7b0(&local_1f0,&local_1d0,3);
    FUN_00d93870(uVar17,&local_1c0);
    local_1c0 = (int64_t *)&g_025df260;
    if ((local_188 != '\0') && (local_190 != 0)) {
      FUN_00d50b20();
    }
    local_1c0 = (int64_t *)&g_0253d630;
    if ((local_198 != '\0') && (local_1a0 != 0)) {
      FUN_00d50b20();
    }
    local_1c0 = &g_024c5048;
    if ((local_1a8 != '\0') && (local_1b0 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_218 != '\0') && (local_220 != 0)) {
      FUN_00d50b20();
    }
    break;
  case 4:
    local_208 = 0;
    lVar12 = this_ptr[10];
    if (lVar12 != 0) {
      FUN_00d50b00();
    }
    local_208 = '\x01';
    local_1e8 = local_138;
    local_1d0 = local_128;
    local_1f0 = local_118;
    local_278 = local_108;
    local_210 = lVar12;
    uVar17 = FUN_00b8f440(&local_1f0,&local_1d0,&local_278,4);
    FUN_00d93870(uVar17,&local_1c0);
    FUN_007f76c0();
    if ((local_208 != '\0') && (local_210 != 0)) {
      FUN_00d50b20();
    }
    break;
  case 5:
    local_1f8 = 0;
    lVar12 = this_ptr[10];
    if (lVar12 != 0) {
      FUN_00d50b00();
    }
    lVar5 = local_f8;
    local_1f8 = '\x01';
    local_1e8 = local_138;
    local_1d0 = local_128;
    local_1f0 = local_118;
    local_278 = local_108;
    local_200 = lVar12;
    uVar17 = FUN_00b8f440(&local_1f0,&local_1d0,&local_278,5);
    local_1c0 = &g_02511780;
    local_168 = 0;
    if (lVar5 != 0) {
      uVar17 = FUN_00d50b00();
    }
    local_170 = lVar5;
    local_168 = '\x01';
    FUN_00d93870(uVar17,&local_1c0);
    local_1c0 = &g_02511780;
    if ((local_168 != '\0') && (local_170 != 0)) {
      FUN_00d50b20();
    }
    FUN_007f76c0();
    if ((local_1f8 != '\0') && (local_200 != 0)) {
      FUN_00d50b20();
    }
  }
switchD_01ec36ca_default:
  FUN_00d8c7d0();
  pplVar16 = &local_1c0;
  FUN_01ccad60();
  plVar11 = local_1c0;
  FUN_0020e360();
  if (plVar11 == (int64_t *)0x0) {
LAB_01ec37db:
    pplVar16 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar11 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_01ec37db;
  }
  plVar11 = *pplVar16;
  if (((char)local_1b8 != '\0') && (local_1c0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar13 = local_158;
  if (plVar11 != (int64_t *)0x0) {
    FUN_01ccad60();
    local_298 = puVar8;
    local_290 = '\0';
    FUN_01e5a050();
    if ((local_290 != '\0') && (local_298 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_1b8 != '\0') && (local_1c0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    goto LAB_01ec396b;
  }
  pplVar16 = &local_1c0;
  FUN_01ccad60();
  plVar11 = local_1c0;
  if ((g_026e43b0 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    g_026df898 = FUN_0006d940();
    g_026df880 = "GNControl";
    g_026df888 = 0x1c8;
    g_026df890 = FUN_000858d0;
    g_026df8a0 = 0;
    ram_00000000026df8a8 = 0;
    g_026df8b0 = 0;
    ram_00000000026df8b8 = 0;
    g_026df8c0 = 0;
    ram_00000000026df8c8 = 0;
    g_026df8d0 = 0;
    ram_00000000026df8d8 = 0;
    g_026df8e0 = 0;
    ram_00000000026df8e8 = 0;
    g_026df8f0 = 0;
    ram_00000000026df8f8 = 0;
    g_026df900 = 0;
    ram_00000000026df908 = 0;
    g_026df910 = 0;
    ram_00000000026df918 = 0;
    g_026df920 = 0;
    ram_00000000026df928 = 0;
    g_026df930 = 0;
    ram_00000000026df938 = 0;
    g_026df940 = 0;
    ___cxa_guard_release();
    puVar8 = local_1d8;
  }
  if (plVar11 == (int64_t *)0x0) {
LAB_01ec38cf:
    pplVar16 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar11 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_01ec38cf;
  }
  plVar11 = *pplVar16;
  if (((char)local_1b8 != '\0') && (local_1c0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar13 = local_158;
  if (plVar11 != (int64_t *)0x0) {
    FUN_01ccad60();
    local_280 = '\0';
    local_288 = puVar8;
    (**(code **)(*local_1c0 + 0x958))();
    if ((local_280 != '\0') && (local_288 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_1b8 != '\0') && (local_1c0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_01ec396b:
  if (((char)local_1c8 != '\0') && (plVar14 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if ((local_130[0] != '\0') && (local_138 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (plVar13 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar8 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return;
}

