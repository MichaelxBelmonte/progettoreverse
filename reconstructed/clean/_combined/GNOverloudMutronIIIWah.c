// ===================================================================
// GNOverloudMutronIIIWah — Complete reconstructed pseudocode
// 2 functions
// ===================================================================


// ============================================================
// 00c0f280
// ============================================================
// Function: FUN_00c0f280
// Address: 00c0f280
// Size: 6947 bytes
// Class: GNOverloudMutronIIIWah
// String references:
//   "_automationTimes"
//   "_automationValues"
//   "Reset Wah Automation"
//   "Open Wah Automation"
//   "GNOverloudMutronIIIWah"

uint64_t FUN_00c0f280(uint64_t param_1,int param_2)

{
  code *pcVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  int64_t lVar9;
  int64_t *plVar10;
  void*puVar11;
  int64_t **pplVar12;
  int64_t lVar13;
  int64_t *this_ptr;
  uint64_t uVar14;
  uint32_t uVar15;
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
  int64_t local_2b8;
  int64_t *local_2b0;
  double local_2a8;
  int64_t *local_2a0;
  char local_298;
  int64_t *local_290;
  char local_288;
  int64_t local_280;
  char local_278;
  int64_t local_270;
  char local_268;
  int64_t *local_260;
  char local_258;
  int64_t local_250;
  char local_248;
  int64_t local_240;
  char local_238;
  int64_t *local_230;
  char local_228;
  int64_t *local_220;
  char local_218;
  int64_t local_210;
  char local_208;
  int64_t local_200;
  char local_1f8;
  int64_t *local_1f0;
  char local_1e8;
  int64_t *local_1e0;
  char local_1d8;
  float local_1cc;
  double local_1c8;
  int64_t *local_1c0;
  int64_t *local_1b8;
  char local_1b0;
  int64_t *local_1a8;
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
  int64_t local_148;
  char local_140;
  int64_t *local_138;
  char local_130;
  int64_t *local_128;
  char local_120;
  int64_t *local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t *local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  int64_t *local_d8;
  int64_t *local_c8;
  char local_c0;
  int local_b0;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  uint64_t local_88;
  int local_80;
  int64_t *local_78;
  int64_t *local_70;
  int64_t *local_68;
  uint local_60 [2];
  int64_t *local_58;
  uint64_t local_50;
  int local_48;
  uint32_t uStack_44;
  char local_40;
  uint64_t local_38;
  
  if (param_2 == 0) {
    return 1;
  }
  (**(code **)(*this_ptr + 0x5d0))();
  plVar4 = local_68;
  if (((char)local_60[0] == '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b00();
    if (((char)local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (plVar4[0x19] != 0) {
    uVar15 = (**(code **)(*this_ptr + 0x608))();
    if ((char)local_60[0] == '\0') {
      if (local_68 != (int64_t *)0x0) {
        uVar15 = FUN_00d50b00();
        if (((char)local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
          uVar15 = FUN_00d50b20();
        }
        goto LAB_00c0f400;
      }
    }
    else if (local_68 != (int64_t *)0x0) {
LAB_00c0f400:
      local_2a0 = plVar4;
      local_298 = '\0';
      if ((g_0276d9d0 == '\0') &&
         (iVar8 = ___cxa_guard_acquire(), uVar15 = extraout_XMM0_Da_15, iVar8 != 0)) {
        g_0276d920 = FUN_00b10020();
        g_0276d908 = "GNOverloudMutronIIIWah";
        g_0276d910 = 0xd8;
        g_0276d918 = FUN_00c40c30;
        g_0276d928 = 0;
        ram_000000000276d930 = 0;
        g_0276d938 = 0;
        ram_000000000276d940 = 0;
        g_0276d948 = 0;
        ram_000000000276d950 = 0;
        g_0276d958 = 0;
        ram_000000000276d960 = 0;
        g_0276d968 = 0;
        ram_000000000276d970 = 0;
        g_0276d978 = 0;
        ram_000000000276d980 = 0;
        g_0276d988 = 0;
        ram_000000000276d990 = 0;
        g_0276d998 = 0;
        ram_000000000276d9a0 = 0;
        g_0276d9a8 = 0;
        ram_000000000276d9b0 = 0;
        g_0276d9b8 = 0;
        ram_000000000276d9c0 = 0;
        g_0276d9c8 = 0;
        uVar15 = ___cxa_guard_release();
      }
      lVar9 = FUN_00e85ef0(uVar15,1);
      if (lVar9 == 0) {
        lVar9 = FUN_00e858c0(extraout_XMM0_Da,1);
        uVar15 = extraout_XMM0_Da_00;
        if ((lVar9 != 0) && (lVar9 = *(int64_t *)(lVar9 + 0x28), lVar9 != 0)) goto LAB_00c0f483;
LAB_00c0f612:
        lVar9 = 0;
      }
      else {
        lVar9 = *(int64_t *)(lVar9 + 0x30);
        uVar15 = extraout_XMM0_Da;
        if (lVar9 == 0) goto LAB_00c0f612;
LAB_00c0f483:
        local_190 = 0;
        uVar15 = FUN_00d50b00();
      }
      local_190 = '\x01';
      local_198 = lVar9;
      uVar15 = FUN_00db2960(uVar15,&local_198);
      if ((local_190 != '\0') && (local_198 != 0)) {
        uVar15 = FUN_00d50b20();
      }
      if ((local_298 != '\0') && (local_2a0 != (int64_t *)0x0)) {
        uVar15 = FUN_00d50b20();
      }
      local_290 = plVar4;
      local_288 = '\0';
      if ((g_0276d9d0 == '\0') &&
         (iVar8 = ___cxa_guard_acquire(), uVar15 = extraout_XMM0_Da_16, iVar8 != 0)) {
        g_0276d920 = FUN_00b10020();
        g_0276d908 = "GNOverloudMutronIIIWah";
        g_0276d910 = 0xd8;
        g_0276d918 = FUN_00c40c30;
        g_0276d928 = 0;
        ram_000000000276d930 = 0;
        g_0276d938 = 0;
        ram_000000000276d940 = 0;
        g_0276d948 = 0;
        ram_000000000276d950 = 0;
        g_0276d958 = 0;
        ram_000000000276d960 = 0;
        g_0276d968 = 0;
        ram_000000000276d970 = 0;
        g_0276d978 = 0;
        ram_000000000276d980 = 0;
        g_0276d988 = 0;
        ram_000000000276d990 = 0;
        g_0276d998 = 0;
        ram_000000000276d9a0 = 0;
        g_0276d9a8 = 0;
        ram_000000000276d9b0 = 0;
        g_0276d9b8 = 0;
        ram_000000000276d9c0 = 0;
        g_0276d9c8 = 0;
        uVar15 = ___cxa_guard_release();
      }
      lVar9 = FUN_00e85ef0(uVar15,1);
      if (lVar9 == 0) {
        lVar9 = FUN_00e858c0(extraout_XMM0_Da_01,1);
        uVar15 = extraout_XMM0_Da_02;
        if ((lVar9 != 0) && (lVar9 = *(int64_t *)(lVar9 + 0x28), lVar9 != 0)) goto LAB_00c0f6e4;
LAB_00c0f6f5:
        lVar9 = 0;
      }
      else {
        lVar9 = *(int64_t *)(lVar9 + 0x30);
        uVar15 = extraout_XMM0_Da_01;
        if (lVar9 == 0) goto LAB_00c0f6f5;
LAB_00c0f6e4:
        local_180 = 0;
        uVar15 = FUN_00d50b00();
      }
      local_180 = '\x01';
      local_188 = lVar9;
      uVar15 = FUN_00db2960(uVar15,&local_188);
      if ((local_180 != '\0') && (local_188 != 0)) {
        uVar15 = FUN_00d50b20();
      }
      if ((local_288 != '\0') && (local_290 != (int64_t *)0x0)) {
        uVar15 = FUN_00d50b20();
      }
      FUN_00d8cb40(uVar15,g_025908a0);
      local_138 = local_68;
      local_130 = 0;
      if ((char)local_60[0] == '\0') {
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60[0] = local_60[0] & 0xffffff00;
      }
      local_130 = '\x01';
      FUN_00db31b0();
      if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    if (plVar4[0x19] != 0) {
      plVar4[0x19] = 0;
      FUN_00d50b20();
    }
    if (plVar4[0x1a] != 0) {
      plVar4[0x1a] = 0;
      FUN_00d50b20();
    }
    FUN_00d403d0();
    local_280 = g_0276c278;
    if (g_0276c278 != 0) {
      FUN_00d50b00();
    }
    local_278 = '\x01';
    local_1b0 = 0;
    FUN_00d50b00();
    local_1b0 = '\x01';
    local_270 = 0;
    local_268 = '\0';
    local_1b8 = this_ptr;
    FUN_00d40470(&local_270,&local_1b8,1,3);
    if ((local_268 != '\0') && (local_270 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1b0 != '\0') && (local_1b8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_278 != '\0') && (local_280 != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    goto LAB_00c1095c;
  }
  FUN_01f4e930();
  plVar10 = local_68;
  if (((((char)local_60[0] == '\0') && (local_68 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), (char)local_60[0] != '\0')) && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar10 + 0x388))();
  FUN_00b5dfe0();
  local_60[0] = 1;
  local_68 = &g_024c5048;
  local_50 = local_50 & 0xffffffffffffff00;
  if (local_c8 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_58 = local_c8;
  local_50 = CONCAT71(local_50._1_7_,1);
  FUN_00c11e10();
  local_128 = local_a0;
  local_120 = 0;
  if (local_98 == '\0') {
    if (local_a0 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_98 = '\0';
  }
  local_120 = '\x01';
  (**(code **)(*plVar10 + 0x368))();
  if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_68 = &g_024c5048;
  if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  iVar8 = FUN_01f4eb70();
  if (iVar8 == 0) {
    (**(code **)(*plVar10 + 0x380))();
    plVar3 = local_68;
    if (((char)local_60[0] == '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b00();
      if (((char)local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*plVar3 + 0x370))();
    plVar5 = local_68;
    if (((char)local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar5 == (int64_t *)0x0) {
LAB_00c10947:
      FUN_00d50b20();
    }
    else {
      local_d8 = plVar3;
      (**(code **)(*plVar3 + 0x370))();
      plVar3 = local_68;
      FUN_00b5dfe0();
      local_118 = local_a0;
      local_110 = 0;
      if (local_98 == '\0') {
        if (local_a0 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_98 = '\0';
      }
      local_110 = '\x01';
      cVar6 = (**(code **)(*plVar3 + 0x50))();
      if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar6 == '\0') goto LAB_00c10947;
      local_260 = local_d8;
      local_258 = '\0';
      local_70 = plVar10;
      uVar15 = FUN_00b5f170();
      local_78 = local_68;
      plVar10 = local_68;
      if ((char)local_60[0] == '\0') {
        if (local_68 != (int64_t *)0x0) {
          plVar10 = (int64_t *)FUN_00d50b00();
          uVar15 = extraout_XMM0_Da_04;
          if (((char)local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
            plVar10 = (int64_t *)FUN_00d50b20();
            uVar15 = extraout_XMM0_Da_05;
          }
        }
      }
      else {
        local_60[0] = local_60[0] & 0xffffff00;
      }
      if ((local_258 != '\0') && (local_260 != (int64_t *)0x0)) {
        plVar10 = (int64_t *)FUN_00d50b20();
        uVar15 = extraout_XMM0_Da_03;
      }
      lVar9 = g_0276c2b0;
      if (local_78 == (int64_t *)0x0) {
        if (g_0276c2b0 != 0) {
          plVar10 = (int64_t *)FUN_00d50b00();
          uVar15 = extraout_XMM0_Da_06;
        }
        local_38 = CONCAT71((int7)((uint64_t)plVar10 >> 8),lVar9 != 0);
      }
      else {
        FUN_00d403d0();
        local_250 = g_0276c278;
        if (g_0276c278 != 0) {
          FUN_00d50b00();
        }
        local_248 = '\x01';
        local_1a0 = 0;
        FUN_00d50b00();
        local_1a0 = '\x01';
        local_240 = 0;
        local_238 = '\0';
        local_1a8 = this_ptr;
        FUN_00d40470(&local_240,&local_1a8,1,3);
        if ((local_238 != '\0') && (local_240 != 0)) {
          FUN_00d50b20();
        }
        if ((local_1a0 != '\0') && (local_1a8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_248 != '\0') && (local_250 != 0)) {
          FUN_00d50b20();
        }
        if (((char)local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        uVar15 = (**(code **)(*this_ptr + 0x608))();
        if ((char)local_60[0] == '\0') {
          if (local_68 != (int64_t *)0x0) {
            uVar15 = FUN_00d50b00();
            if (((char)local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
              uVar15 = FUN_00d50b20();
            }
            goto LAB_00c0fba0;
          }
        }
        else if (local_68 != (int64_t *)0x0) {
LAB_00c0fba0:
          local_230 = plVar4;
          local_228 = '\0';
          if ((g_0276d9d0 == '\0') &&
             (iVar8 = ___cxa_guard_acquire(), uVar15 = extraout_XMM0_Da_17, iVar8 != 0)) {
            g_0276d920 = FUN_00b10020();
            g_0276d908 = "GNOverloudMutronIIIWah";
            g_0276d910 = 0xd8;
            g_0276d918 = FUN_00c40c30;
            g_0276d928 = 0;
            ram_000000000276d930 = 0;
            g_0276d938 = 0;
            ram_000000000276d940 = 0;
            g_0276d948 = 0;
            ram_000000000276d950 = 0;
            g_0276d958 = 0;
            ram_000000000276d960 = 0;
            g_0276d968 = 0;
            ram_000000000276d970 = 0;
            g_0276d978 = 0;
            ram_000000000276d980 = 0;
            g_0276d988 = 0;
            ram_000000000276d990 = 0;
            g_0276d998 = 0;
            ram_000000000276d9a0 = 0;
            g_0276d9a8 = 0;
            ram_000000000276d9b0 = 0;
            g_0276d9b8 = 0;
            ram_000000000276d9c0 = 0;
            g_0276d9c8 = 0;
            uVar15 = ___cxa_guard_release();
          }
          lVar9 = FUN_00e85ef0(uVar15,1);
          if (lVar9 == 0) {
            lVar9 = FUN_00e858c0(extraout_XMM0_Da_07,1);
            uVar15 = extraout_XMM0_Da_08;
            if (lVar9 != 0) {
              lVar9 = *(int64_t *)(lVar9 + 0x28);
              goto LAB_00c0fc00;
            }
LAB_00c0fc1d:
            lVar9 = 0;
          }
          else {
            lVar9 = *(int64_t *)(lVar9 + 0x30);
            uVar15 = extraout_XMM0_Da_07;
LAB_00c0fc00:
            local_170 = 0;
            if (lVar9 == 0) goto LAB_00c0fc1d;
            uVar15 = FUN_00d50b00();
          }
          local_170 = '\x01';
          local_178 = lVar9;
          uVar15 = FUN_00db2960(uVar15,&local_178);
          if ((local_170 != '\0') && (local_178 != 0)) {
            uVar15 = FUN_00d50b20();
          }
          if ((local_228 != '\0') && (local_230 != (int64_t *)0x0)) {
            uVar15 = FUN_00d50b20();
          }
          local_220 = plVar4;
          local_218 = '\0';
          if ((g_0276d9d0 == '\0') &&
             (iVar8 = ___cxa_guard_acquire(), uVar15 = extraout_XMM0_Da_18, iVar8 != 0)) {
            g_0276d920 = FUN_00b10020();
            g_0276d908 = "GNOverloudMutronIIIWah";
            g_0276d910 = 0xd8;
            g_0276d918 = FUN_00c40c30;
            g_0276d928 = 0;
            ram_000000000276d930 = 0;
            g_0276d938 = 0;
            ram_000000000276d940 = 0;
            g_0276d948 = 0;
            ram_000000000276d950 = 0;
            g_0276d958 = 0;
            ram_000000000276d960 = 0;
            g_0276d968 = 0;
            ram_000000000276d970 = 0;
            g_0276d978 = 0;
            ram_000000000276d980 = 0;
            g_0276d988 = 0;
            ram_000000000276d990 = 0;
            g_0276d998 = 0;
            ram_000000000276d9a0 = 0;
            g_0276d9a8 = 0;
            ram_000000000276d9b0 = 0;
            g_0276d9b8 = 0;
            ram_000000000276d9c0 = 0;
            g_0276d9c8 = 0;
            uVar15 = ___cxa_guard_release();
          }
          lVar9 = FUN_00e85ef0(uVar15,1);
          if (lVar9 == 0) {
            lVar9 = FUN_00e858c0(extraout_XMM0_Da_09,1);
            uVar15 = extraout_XMM0_Da_10;
            if (lVar9 != 0) {
              lVar9 = *(int64_t *)(lVar9 + 0x28);
              goto LAB_00c0fcd7;
            }
LAB_00c0fcf4:
            lVar9 = 0;
          }
          else {
            lVar9 = *(int64_t *)(lVar9 + 0x30);
            uVar15 = extraout_XMM0_Da_09;
LAB_00c0fcd7:
            local_160 = 0;
            if (lVar9 == 0) goto LAB_00c0fcf4;
            uVar15 = FUN_00d50b00();
          }
          local_160 = '\x01';
          local_168 = lVar9;
          FUN_00db2960(uVar15,&local_168);
          if ((local_160 != '\0') && (local_168 != 0)) {
            FUN_00d50b20();
          }
          if ((local_218 != '\0') && (local_220 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d8cb40();
          local_108 = local_68;
          local_100 = 0;
          if ((char)local_60[0] == '\0') {
            if (local_68 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_60[0] = local_60[0] & 0xffffff00;
          }
          local_100 = '\x01';
          FUN_00db31b0();
          if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (((char)local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        local_38 = 0;
        puVar11 = (void*)FUN_00e8fc40();
        local_38 = 0;
        FUN_00d4ff40();
        *puVar11 = &g_025683c0;
        pcVar1 = g_025683d8;
        local_38 = 0;
        (*g_025683d8)();
        local_38 = 0;
        FUN_00c92170();
        local_38 = 0;
        FUN_00c92160();
        lVar9 = plVar4[0x19];
        plVar4[0x19] = (int64_t)puVar11;
        if (lVar9 != 0) {
          local_38 = 0;
          FUN_00d50b20();
        }
        local_38 = 0;
        puVar11 = (void*)FUN_00e8fc40();
        local_38 = 0;
        FUN_00d4ff40();
        *puVar11 = &g_025683c0;
        local_38 = 0;
        (*pcVar1)();
        local_38 = 0;
        FUN_00c92170();
        local_38 = 0;
        FUN_00c92160();
        lVar9 = plVar4[0x1a];
        plVar4[0x1a] = (int64_t)puVar11;
        if (lVar9 != 0) {
          local_38 = 0;
          FUN_00d50b20();
        }
        FUN_00b60b30();
        plVar10 = local_68;
        if (((char)local_60[0] == '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b00();
          if (((char)local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        lVar9 = g_0276c298;
        local_1c0 = plVar10;
        if (*(int *)((int64_t)plVar10 + 0xc) == 1) {
          FUN_00d23310();
          plVar10 = local_68;
          pplVar12 = (int64_t **)local_60;
          if ((char)local_60[0] == '\0') {
            pplVar12 = &local_a0;
          }
          local_a0 = (int64_t *)CONCAT71(local_a0._1_7_,(char)local_60[0]);
          *(void*)pplVar12 = 0;
          if (((char)local_60[0] != '\0') && (plVar10 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_2a8 = (double)FUN_00b5c640();
          if (((char)local_a0 != '\0') && (plVar10 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          uVar14 = 0;
LAB_00c0ffea:
          FUN_00b61300();
          iVar8 = *(int *)((int64_t)local_68 + 0xc);
          if ((char)local_60[0] != '\0') {
            FUN_00d50b20();
          }
          lVar9 = g_0276c2a0;
          if ((iVar8 == 1) || (g_0276c2a0 == 0)) {
            FUN_00b61300();
            plVar10 = local_68;
            if ((char)local_60[0] == '\0') {
              if (local_68 != (int64_t *)0x0) {
                FUN_00d50b00();
                if (((char)local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_00c10070;
              }
            }
            else if (local_68 != (int64_t *)0x0) {
LAB_00c10070:
              local_60[0] = local_60[0] & 0xffffff00;
              local_68 = (int64_t *)0x0;
              local_58 = plVar10;
              local_50 = 0xffffffff;
              local_48 = 0;
              local_50._4_4_ = 0;
              local_2b0 = plVar10;
              local_38 = uVar14;
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
                lVar9 = (int64_t)(int)local_50;
                iVar8 = (int)local_50 + 1;
                local_50 = CONCAT44(local_50._4_4_,iVar8);
                if (*(int *)((int64_t)local_58 + 0xc) <= iVar8) break;
                local_68 = *(int64_t **)(local_58[2] + 8 + lVar9 * 8);
                FUN_00b5d7e0();
                plVar10 = local_a0;
                if (local_98 == '\0') {
                  if (local_a0 != (int64_t *)0x0) {
                    FUN_00d50b00();
                    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    goto LAB_00c10150;
                  }
                }
                else if (local_a0 != (int64_t *)0x0) {
LAB_00c10150:
                  local_98 = '\0';
                  local_a0 = (int64_t *)0x0;
                  local_90 = plVar10;
                  local_88 = 0xffffffff;
                  local_80 = 0;
                  local_88._4_4_ = 0;
                  while( true ) {
                    plVar10 = local_c8;
                    if (local_88._4_4_ != 0) {
                      if (local_88._4_4_ < 1) {
                        iVar8 = -local_88._4_4_;
                      }
                      else {
                        iVar8 = (int)local_88 - local_88._4_4_;
                        local_88 = CONCAT44(local_88._4_4_,iVar8);
                        FUN_00d23690();
                        local_80 = local_80 + local_88._4_4_;
                        iVar8 = 0;
                      }
                      local_88 = CONCAT44(iVar8,(int)local_88);
                    }
                    lVar9 = (int64_t)(int)local_88;
                    iVar8 = (int)local_88 + 1;
                    local_88 = CONCAT44(local_88._4_4_,iVar8);
                    if (*(int *)((int64_t)local_90 + 0xc) <= iVar8) break;
                    local_a0 = *(int64_t **)(local_90[2] + 8 + lVar9 * 8);
                    local_1c8 = (double)FUN_00b5beb0();
                    iVar8 = FUN_00b60810();
                    if (iVar8 == 0) {
                      local_1c8 = local_1c8 * local_2a8;
                    }
                    FUN_00b5b3a0();
                    if (local_c0 == '\0') {
                      if (local_c8 != (int64_t *)0x0) {
                        FUN_00d50b00();
                        goto LAB_00c10290;
                      }
                    }
                    else if (local_c8 != (int64_t *)0x0) {
LAB_00c10290:
                      local_c0 = '\0';
                      local_c8 = (int64_t *)0x0;
                      local_b0 = -1;
                      while( true ) {
                        lVar9 = (int64_t)local_b0;
                        local_b0 = local_b0 + 1;
                        if (*(int *)((int64_t)plVar10 + 0xc) <= local_b0) break;
                        local_c8 = *(int64_t **)(plVar10[2] + 8 + lVar9 * 8);
                        cVar6 = FUN_00b51d00();
                        if ((cVar6 == -0x50) && (cVar6 = FUN_00b51df0(), cVar6 == '\x01')) {
                          bVar7 = FUN_00b51e10();
                          local_1cc = (float)bVar7 / g_023d5000;
                          lVar9 = plVar4[0x19];
                          iVar8 = *(int *)(lVar9 + 0x18);
                          FUN_00c8e340(local_1cc,1);
                          *(double *)(*(int64_t *)(lVar9 + 0x10) + (int64_t)iVar8) = local_1c8;
                          lVar9 = plVar4[0x1a];
                          iVar8 = *(int *)(lVar9 + 0x18);
                          FUN_00c8e340(SUB84(local_1c8,0),1);
                          *(float *)(*(int64_t *)(lVar9 + 0x10) + (int64_t)iVar8) = local_1cc;
                        }
                      }
                      FUN_00b671d0();
                      FUN_00d50b20();
                    }
                  }
                  FUN_00b66ae0();
                  FUN_00d50b20();
                }
              }
              FUN_00b67020();
              FUN_00d50b20();
              uVar14 = local_38;
            }
            lVar13 = g_0276c2a8;
            lVar9 = 0;
            if ((*(int *)(plVar4[0x19] + 0x18) + 7U < 0xf) && (g_0276c2a8 != 0)) {
              FUN_00d50b00();
              uVar14 = CONCAT71((int7)((uint64_t)uVar14 >> 8),1);
              lVar9 = lVar13;
            }
          }
          else {
            FUN_00d50b00();
            uVar14 = CONCAT71((int7)((uint64_t)uVar14 >> 8),1);
          }
        }
        else {
          if (g_0276c298 != 0) {
            FUN_00d50b00();
          }
          uVar14 = CONCAT71((int7)((uint64_t)plVar10 >> 8),lVar9 != 0);
          if (lVar9 == 0) {
            local_2a8 = g_023942d0;
            goto LAB_00c0ffea;
          }
        }
        local_38 = uVar14;
        uVar15 = FUN_00d50130();
        if (local_1c0 != (int64_t *)0x0) {
          uVar15 = FUN_00d50b20();
        }
      }
      lVar13 = g_0276c2b8;
      if (lVar9 != 0) {
        if (g_0276c2b8 != 0) {
          uVar15 = FUN_00d50b00();
        }
        lVar2 = g_0276c2c0;
        local_210 = lVar13;
        local_208 = '\x01';
        if (g_0276c2c0 != 0) {
          uVar15 = FUN_00d50b00();
        }
        local_200 = lVar2;
        local_1f8 = '\x01';
        FUN_01f6ca30(uVar15,&local_200);
        plVar10 = local_a0;
        lVar13 = g_027092c0;
        if (g_027092c0 != 0) {
          FUN_00d50b00();
        }
        local_2b8 = lVar13;
        FUN_00083ea0(2,&local_2b8);
        FUN_000b4da0();
        local_f0 = 0;
        if (local_c0 == '\0') {
          if (local_c8 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_c0 = '\0';
        }
        local_f0 = '\x01';
        local_f8 = local_c8;
        (**(code **)(*plVar10 + 0x5d8))();
        if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_68 = (int64_t *)&g_0253d630;
        if ((local_40 != '\0') && (CONCAT44(uStack_44,local_48) != 0)) {
          FUN_00d50b20();
        }
        local_68 = &g_024c5048;
        if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar13 != 0) {
          FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_1f8 != '\0') && (local_200 != 0)) {
          FUN_00d50b20();
        }
        if ((local_208 != '\0') && (local_210 != 0)) {
          FUN_00d50b20();
        }
        uVar15 = (**(code **)(*this_ptr + 0x608))();
        if ((char)local_60[0] == '\0') {
          if (local_68 != (int64_t *)0x0) {
            uVar15 = FUN_00d50b00();
            if (((char)local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
              uVar15 = FUN_00d50b20();
            }
            goto LAB_00c1068a;
          }
        }
        else if (local_68 != (int64_t *)0x0) {
LAB_00c1068a:
          local_1f0 = plVar4;
          local_1e8 = '\0';
          if ((g_0276d9d0 == '\0') &&
             (iVar8 = ___cxa_guard_acquire(), uVar15 = extraout_XMM0_Da_19, iVar8 != 0)) {
            g_0276d920 = FUN_00b10020();
            g_0276d908 = "GNOverloudMutronIIIWah";
            g_0276d910 = 0xd8;
            g_0276d918 = FUN_00c40c30;
            g_0276d928 = 0;
            ram_000000000276d930 = 0;
            g_0276d938 = 0;
            ram_000000000276d940 = 0;
            g_0276d948 = 0;
            ram_000000000276d950 = 0;
            g_0276d958 = 0;
            ram_000000000276d960 = 0;
            g_0276d968 = 0;
            ram_000000000276d970 = 0;
            g_0276d978 = 0;
            ram_000000000276d980 = 0;
            g_0276d988 = 0;
            ram_000000000276d990 = 0;
            g_0276d998 = 0;
            ram_000000000276d9a0 = 0;
            g_0276d9a8 = 0;
            ram_000000000276d9b0 = 0;
            g_0276d9b8 = 0;
            ram_000000000276d9c0 = 0;
            g_0276d9c8 = 0;
            uVar15 = ___cxa_guard_release();
          }
          lVar13 = FUN_00e85ef0(uVar15,1);
          if (lVar13 == 0) {
            lVar13 = FUN_00e858c0(extraout_XMM0_Da_11,1);
            uVar15 = extraout_XMM0_Da_12;
            if (lVar13 != 0) {
              lVar13 = *(int64_t *)(lVar13 + 0x28);
              goto LAB_00c106ea;
            }
LAB_00c10707:
            lVar13 = 0;
          }
          else {
            lVar13 = *(int64_t *)(lVar13 + 0x30);
            uVar15 = extraout_XMM0_Da_11;
LAB_00c106ea:
            local_150 = 0;
            if (lVar13 == 0) goto LAB_00c10707;
            uVar15 = FUN_00d50b00();
          }
          local_150 = '\x01';
          local_158 = lVar13;
          uVar15 = FUN_00db2960(uVar15,&local_158);
          if ((local_150 != '\0') && (local_158 != 0)) {
            uVar15 = FUN_00d50b20();
          }
          if ((local_1e8 != '\0') && (local_1f0 != (int64_t *)0x0)) {
            uVar15 = FUN_00d50b20();
          }
          local_1e0 = plVar4;
          local_1d8 = '\0';
          if ((g_0276d9d0 == '\0') &&
             (iVar8 = ___cxa_guard_acquire(), uVar15 = extraout_XMM0_Da_20, iVar8 != 0)) {
            g_0276d920 = FUN_00b10020();
            g_0276d908 = "GNOverloudMutronIIIWah";
            g_0276d910 = 0xd8;
            g_0276d918 = FUN_00c40c30;
            g_0276d928 = 0;
            ram_000000000276d930 = 0;
            g_0276d938 = 0;
            ram_000000000276d940 = 0;
            g_0276d948 = 0;
            ram_000000000276d950 = 0;
            g_0276d958 = 0;
            ram_000000000276d960 = 0;
            g_0276d968 = 0;
            ram_000000000276d970 = 0;
            g_0276d978 = 0;
            ram_000000000276d980 = 0;
            g_0276d988 = 0;
            ram_000000000276d990 = 0;
            g_0276d998 = 0;
            ram_000000000276d9a0 = 0;
            g_0276d9a8 = 0;
            ram_000000000276d9b0 = 0;
            g_0276d9b8 = 0;
            ram_000000000276d9c0 = 0;
            g_0276d9c8 = 0;
            uVar15 = ___cxa_guard_release();
          }
          lVar13 = FUN_00e85ef0(uVar15,1);
          if (lVar13 == 0) {
            lVar13 = FUN_00e858c0(extraout_XMM0_Da_13,1);
            uVar15 = extraout_XMM0_Da_14;
            if (lVar13 != 0) {
              lVar13 = *(int64_t *)(lVar13 + 0x28);
              goto LAB_00c107c1;
            }
LAB_00c107de:
            lVar13 = 0;
          }
          else {
            lVar13 = *(int64_t *)(lVar13 + 0x30);
            uVar15 = extraout_XMM0_Da_13;
LAB_00c107c1:
            local_140 = 0;
            if (lVar13 == 0) goto LAB_00c107de;
            uVar15 = FUN_00d50b00();
          }
          local_140 = '\x01';
          local_148 = lVar13;
          uVar15 = FUN_00db2960(uVar15,&local_148);
          if ((local_140 != '\0') && (local_148 != 0)) {
            uVar15 = FUN_00d50b20();
          }
          if ((local_1d8 != '\0') && (local_1e0 != (int64_t *)0x0)) {
            uVar15 = FUN_00d50b20();
          }
          FUN_00d8cb40(uVar15,g_025908a0);
          local_e8 = local_68;
          local_e0 = 0;
          if ((char)local_60[0] == '\0') {
            if (local_68 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_60[0] = local_60[0] & 0xffffff00;
          }
          local_e0 = '\x01';
          FUN_00db31b0();
          if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (((char)local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        if (plVar4[0x19] != 0) {
          plVar4[0x19] = 0;
          FUN_00d50b20();
        }
        if (plVar4[0x1a] != 0) {
          plVar4[0x1a] = 0;
          FUN_00d50b20();
        }
      }
      if (local_78 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar10 = local_70;
      plVar3 = local_d8;
      if (((char)local_38 != '\0') && (lVar9 != 0)) {
        FUN_00d50b20();
      }
      if (plVar3 != (int64_t *)0x0) goto LAB_00c10947;
    }
    if (plVar10 == (int64_t *)0x0) goto LAB_00c1095c;
  }
  FUN_00d50b20();
LAB_00c1095c:
  (**(code **)(*this_ptr + 0x600))();
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return 1;
}



// ============================================================
// 00bf33e0
// ============================================================
// Function: FUN_00bf33e0
// Address: 00bf33e0
// Size: 568 bytes
// Class: GNOverloudMutronIIIWah
// String references:
//   "GNOverloudMutronIIIWah"

void FUN_00bf33e0(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_100;
  int64_t local_f8;
  
  if ((g_0276d9d0 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_0276d920 = FUN_00b10020();
    g_0276d908 = "GNOverloudMutronIIIWah";
    g_0276d910 = 0xd8;
    g_0276d918 = FUN_00c40c30;
    g_0276d928 = 0;
    ram_000000000276d930 = 0;
    g_0276d938 = 0;
    ram_000000000276d940 = 0;
    g_0276d948 = 0;
    ram_000000000276d950 = 0;
    g_0276d958 = 0;
    ram_000000000276d960 = 0;
    g_0276d968 = 0;
    ram_000000000276d970 = 0;
    g_0276d978 = 0;
    ram_000000000276d980 = 0;
    g_0276d988 = 0;
    ram_000000000276d990 = 0;
    g_0276d998 = 0;
    ram_000000000276d9a0 = 0;
    g_0276d9a8 = 0;
    ram_000000000276d9b0 = 0;
    g_0276d9b8 = 0;
    _ram_000000000276d9c0 = 0;
    g_0276d9c8 = 0;
    ___cxa_guard_release();
  }
  if (g_0276d9c3 == '\0') {
    FUN_00af3fa0();
    FUN_00e87760();
    FUN_00d4ff40();
    FUN_00d50c00();
    FUN_00b10260();
    FUN_00c46490();
    FUN_00c46710();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    FUN_00c0e620();
    if (local_f8 != 0) {
      FUN_00d50b20();
    }
    if (local_100 != 0) {
      FUN_00d50b20();
    }
    FUN_00b10a20();
    FUN_00b10a20();
  }
  return;
}

