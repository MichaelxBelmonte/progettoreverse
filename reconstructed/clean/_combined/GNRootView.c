// ===================================================================
// GNRootView — Complete reconstructed pseudocode
// 14 functions
// ===================================================================


// ============================================================
// 00095750
// ============================================================
// Function: FUN_00095750
// Address: 00095750
// Size: 3845 bytes
// Class: GNRootView
// String references:
//   "GNRootView"
//   "MDURLOpenedController"

void FUN_00095750(void)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  char *pcVar7;
  int64_t *plVar8;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar9;
  int64_t **pplVar10;
  uint32_t uVar11;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t *local_1e8;
  uint8_t local_1e0;
  int64_t *local_1d8;
  uint8_t local_1d0;
  int64_t *local_1c8;
  uint8_t local_1c0;
  int64_t *local_1b8;
  uint8_t local_1b0;
  uint64_t local_1a8;
  uint8_t local_1a0;
  int64_t *local_198;
  uint8_t local_190;
  uint8_t local_188 [8];
  uint8_t local_180;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t *local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  char local_c8;
  undefined7 uStack_c7;
  char local_c0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38 [8];
  
  FUN_00d3ecc0();
  plVar8 = local_40;
  local_178 = g_026d8aa8;
  if (g_026d8aa8 != 0) {
    FUN_00d50b00();
  }
  local_170 = '\x01';
  cVar4 = (**(code **)(*plVar8 + 0x50))();
  if ((local_170 != '\0') && (local_178 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    FUN_00d3ecc0();
    plVar8 = local_40;
    local_158 = g_026d8aa0;
    if (g_026d8aa0 != 0) {
      FUN_00d50b00();
    }
    local_150 = '\x01';
    cVar4 = (**(code **)(*plVar8 + 0x50))();
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      uVar11 = FUN_00d3ecf0();
      lVar1 = local_50;
      if (local_48 == '\0') {
        if (local_50 != 0) {
          uVar11 = FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_180 = 1;
      FUN_00095530(uVar11,local_188);
      if ((local_38[0] == '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != (int64_t *)0x0) {
        local_1c8 = local_40;
        local_1c0 = 0;
        FUN_00094580();
        FUN_00d50b20();
        return;
      }
      return;
    }
    FUN_00d3ecc0();
    plVar8 = local_40;
    local_148 = g_027ebc70;
    if (g_027ebc70 != 0) {
      FUN_00d50b00();
    }
    local_140 = '\x01';
    cVar4 = (**(code **)(*plVar8 + 0x50))();
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') {
      local_e8 = *arg1;
      local_e0 = '\0';
      FUN_00d530a0();
      if (local_e0 == '\0') {
        return;
      }
      if (local_e8 != 0) {
        FUN_00d50b20();
        return;
      }
      return;
    }
    FUN_00d403d0();
    if (this_ptr != 0) {
      FUN_00d50b00();
    }
    lVar1 = g_027ebc70;
    if (g_027ebc70 != 0) {
      FUN_00d50b00();
    }
    local_138 = lVar1;
    local_130 = '\x01';
    FUN_00d3ecf0();
    local_98 = local_50;
    local_90 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_90 = '\x01';
    FUN_00d41040(&local_98,&local_138);
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar8 = *(int64_t **)(this_ptr + 0x10);
    if (plVar8 == (int64_t *)0x0) {
      FUN_00093070();
      plVar9 = local_40;
      if (local_38[0] == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
          goto LAB_00095dd0;
        }
      }
      else if (local_40 != (int64_t *)0x0) {
LAB_00095dd0:
        (**(code **)(*plVar9 + 0x5e8))();
        FUN_00d23310();
        plVar9 = local_40;
        pcVar7 = &local_c8;
        if (local_38[0] != '\0') {
          pcVar7 = local_38;
        }
        local_c8 = local_38[0];
        *pcVar7 = '\0';
        if ((local_38[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((plVar9 != (int64_t *)0x0) && (plVar8 = plVar9, local_c8 == '\0')) {
          FUN_00d50b00();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
    }
    pplVar10 = &local_40;
    local_58 = plVar8;
    FUN_00d3ecf0();
    plVar8 = local_40;
    FUN_00098010();
    if (plVar8 == (int64_t *)0x0) {
LAB_00095e98:
      pplVar10 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar8 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_00095e98;
    }
    plVar9 = local_58;
    plVar8 = *pplVar10;
    if (*(char *)(pplVar10 + 1) == '\0') {
      if (plVar8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar10 + 1) = 0;
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar8 == (int64_t *)0x0) {
      pplVar10 = &local_40;
      FUN_00d3ecf0();
      plVar8 = local_40;
      FUN_000982d0();
      if (plVar8 == (int64_t *)0x0) {
LAB_00095f38:
        pplVar10 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar8 + 0x360))();
        cVar4 = FUN_00e85ea0();
        if (cVar4 == '\0') goto LAB_00095f38;
      }
      plVar9 = local_58;
      plVar8 = *pplVar10;
      if (*(char *)(pplVar10 + 1) == '\0') {
        if (plVar8 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar10 + 1) = 0;
      }
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((plVar8 != (int64_t *)0x0) && (plVar9 != (int64_t *)0x0)) {
        local_f0 = '\0';
        local_f8 = plVar8;
        uVar11 = FUN_00d50b00();
        FUN_00639aa0(uVar11,&stack0xffffffffffffff58);
        if (this_ptr != 0) {
          FUN_00d50b20();
        }
        if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (plVar8 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      goto LAB_000960a6;
    }
    FUN_00e34d60();
    if (local_38[0] == '\0') {
      if (local_40 == (int64_t *)0x0) goto LAB_00095f91;
      FUN_00d50b00();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_00095f7c:
      FUN_00d50b20();
    }
    else {
      if (local_40 != (int64_t *)0x0) goto LAB_00095f7c;
LAB_00095f91:
      FUN_00e198c0();
      plVar8 = local_40;
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar8 != (int64_t *)0x0) {
        FUN_01e697d0();
        uVar11 = FUN_00e198c0();
        local_88 = local_50;
        local_80 = 0;
        if (local_48 == '\0') {
          if (local_50 != 0) {
            uVar11 = FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_80 = '\x01';
        FUN_01e69930(uVar11,0);
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00e19900();
        if (local_40 == (int64_t *)0x0) {
          bVar5 = 1;
        }
        else {
          FUN_01f27fe0();
          FUN_00281390();
          FUN_00e19900();
          local_78 = local_d8;
          local_70 = 0;
          if (local_d0 == '\0') {
            if (local_d8 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_d0 = '\0';
          }
          local_70 = '\x01';
          bVar5 = FUN_00e6d4e0();
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          if ((local_d0 != '\0') && (local_d8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (CONCAT71(uStack_c7,local_c8) != 0)) {
            FUN_00d50b20();
          }
          bVar5 = bVar5 ^ 1;
        }
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        lVar1 = g_026d8ab8;
        if (bVar5 != 0) {
          if (g_026d8ab8 != 0) {
            FUN_00d50b00();
          }
          local_128 = lVar1;
          local_120 = '\x01';
          local_118 = 0;
          local_110 = '\0';
          local_108 = 0;
          local_100 = '\0';
          pplVar10 = &local_40;
          FUN_01e4fcf0(&local_108,&local_118);
          plVar8 = local_40;
          if ((g_0270e710 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
            g_02726298 = FUN_00015ff0();
            g_02726280 = "MDURLOpenedController";
            g_02726288 = 0x90;
            g_02726290 = FUN_00098280;
            g_027262a0 = 0;
            ram_00000000027262a8 = 0;
            g_027262b0 = 0;
            ram_00000000027262b8 = 0;
            g_027262c0 = 0;
            ram_00000000027262c8 = 0;
            g_027262d0 = 0;
            ram_00000000027262d8 = 0;
            g_027262e0 = 0;
            ram_00000000027262e8 = 0;
            g_027262f0 = 0;
            ram_00000000027262f8 = 0;
            g_02726300 = 0;
            ram_0000000002726308 = 0;
            g_02726310 = 0;
            ram_0000000002726318 = 0;
            g_02726320 = 0;
            ram_0000000002726328 = 0;
            g_02726330 = 0;
            ram_0000000002726338 = 0;
            g_02726340 = 0;
            ___cxa_guard_release();
            plVar9 = local_58;
          }
          if (plVar8 == (int64_t *)0x0) {
LAB_000962ce:
            pplVar10 = (int64_t **)&g_02802688;
          }
          else {
            (**(code **)(*plVar8 + 0x360))();
            cVar4 = FUN_00e85ea0();
            if (cVar4 == '\0') goto LAB_000962ce;
          }
          plVar8 = *pplVar10;
          if (*(char *)(pplVar10 + 1) == '\0') {
            if (plVar8 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            *(void*)(pplVar10 + 1) = 0;
          }
          if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
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
          if (plVar8 != (int64_t *)0x0) {
            FUN_00e198c0();
            FUN_00dbbbc0();
            local_68 = local_40;
            local_60 = 0;
            if (local_38[0] == '\0') {
              if (local_40 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38[0] = '\0';
            }
            local_60 = '\x01';
            uVar11 = FUN_0054d030();
            if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
              uVar11 = FUN_00d50b20();
            }
            if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
              uVar11 = FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              uVar11 = FUN_00d50b20();
            }
            local_1b0 = 0;
            local_1a8 = 0;
            local_1a0 = 0;
            local_1b8 = plVar8;
            FUN_00093bd0(uVar11,&local_1a8);
            if (plVar9 != (int64_t *)0x0) {
              local_190 = 0;
              local_198 = plVar9;
              FUN_00094580();
            }
            FUN_00d50b20();
          }
        }
      }
    }
    FUN_00d50b20();
LAB_000960a6:
    if (plVar9 != (int64_t *)0x0) {
      FUN_00d50b20();
      return;
    }
    return;
  }
  uVar11 = FUN_00d3ed20();
  local_168 = g_026d8ab0;
  if (g_026d8ab0 != 0) {
    uVar11 = FUN_00d50b00();
  }
  local_160 = '\x01';
  pplVar10 = &local_40;
  FUN_000175c0(uVar11,&local_168);
  plVar8 = local_40;
  if ((g_026e85e0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    g_027f4bd8 = FUN_0006d940();
    g_027f4bc0 = "GNRootView";
    g_027f4bc8 = 0x1d0;
    g_027f4bd0 = FUN_00097da0;
    g_027f4be0 = 0;
    ram_00000000027f4be8 = 0;
    g_027f4bf0 = 0;
    ram_00000000027f4bf8 = 0;
    g_027f4c00 = 0;
    ram_00000000027f4c08 = 0;
    g_027f4c10 = 0;
    ram_00000000027f4c18 = 0;
    g_027f4c20 = 0;
    ram_00000000027f4c28 = 0;
    g_027f4c30 = 0;
    ram_00000000027f4c38 = 0;
    g_027f4c40 = 0;
    ram_00000000027f4c48 = 0;
    g_027f4c50 = 0;
    ram_00000000027f4c58 = 0;
    g_027f4c60 = 0;
    ram_00000000027f4c68 = 0;
    g_027f4c70 = 0;
    ram_00000000027f4c78 = 0;
    g_027f4c80 = 0;
    ___cxa_guard_release();
  }
  if (plVar8 == (int64_t *)0x0) {
LAB_00095863:
    pplVar10 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_00095863;
  }
  plVar8 = *pplVar10;
  if (*(char *)(pplVar10 + 1) == '\0') {
    if (plVar8 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar10 + 1) = 0;
  }
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_160 != '\0') && (local_168 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pplVar10 = &local_40;
  local_58 = plVar8;
  uVar11 = FUN_00d3ecf0();
  plVar8 = local_40;
  if ((g_026e85e0 == '\0') &&
     (iVar6 = ___cxa_guard_acquire(), uVar11 = extraout_XMM0_Da_00, iVar6 != 0)) {
    g_027f4bd8 = FUN_0006d940();
    g_027f4bc0 = "GNRootView";
    g_027f4bc8 = 0x1d0;
    g_027f4bd0 = FUN_00097da0;
    g_027f4be0 = 0;
    ram_00000000027f4be8 = 0;
    g_027f4bf0 = 0;
    ram_00000000027f4bf8 = 0;
    g_027f4c00 = 0;
    ram_00000000027f4c08 = 0;
    g_027f4c10 = 0;
    ram_00000000027f4c18 = 0;
    g_027f4c20 = 0;
    ram_00000000027f4c28 = 0;
    g_027f4c30 = 0;
    ram_00000000027f4c38 = 0;
    g_027f4c40 = 0;
    ram_00000000027f4c48 = 0;
    g_027f4c50 = 0;
    ram_00000000027f4c58 = 0;
    g_027f4c60 = 0;
    ram_00000000027f4c68 = 0;
    g_027f4c70 = 0;
    ram_00000000027f4c78 = 0;
    g_027f4c80 = 0;
    uVar11 = ___cxa_guard_release();
  }
  if (plVar8 == (int64_t *)0x0) {
LAB_00095ac9:
    pplVar10 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar4 = FUN_00e85ea0();
    uVar11 = extraout_XMM0_Da;
    if (cVar4 == '\0') goto LAB_00095ac9;
  }
  plVar8 = *pplVar10;
  if (*(char *)(pplVar10 + 1) == '\0') {
    if (plVar8 != (int64_t *)0x0) {
      uVar11 = FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar10 + 1) = 0;
  }
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar11 = FUN_00d50b20();
  }
  if (plVar8 == (int64_t *)0x0) {
    lVar1 = *(int64_t *)(this_ptr + 0x10);
joined_r0x00095b5a:
    bVar3 = false;
    bVar2 = false;
    plVar9 = (int64_t *)0x0;
  }
  else {
    local_1e0 = 0;
    local_1e8 = plVar8;
    FUN_00095530(uVar11,&local_1e8);
    plVar9 = local_40;
    if (local_40 == (int64_t *)0x0) {
      lVar1 = *(int64_t *)(this_ptr + 0x10);
      goto joined_r0x00095b5a;
    }
    bVar3 = true;
    bVar2 = true;
    if (local_38[0] == '\0') {
      FUN_00d50b00();
    }
    lVar1 = *(int64_t *)(this_ptr + 0x10);
  }
  if (lVar1 != 0) {
    FUN_01e561b0();
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    bVar2 = bVar3;
    if (local_40 == local_58) {
      if (plVar9 == (int64_t *)0x0) {
        FUN_00094d10();
        goto LAB_00095c17;
      }
      local_1d0 = 0;
      local_1d8 = plVar9;
      FUN_00094580();
    }
  }
  if ((bVar2) && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_00095c17:
  plVar9 = local_58;
  if (plVar8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar9 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01e23740
// ============================================================
// Function: FUN_01e23740
// Address: 01e23740
// Size: 3122 bytes
// Class: GNRootView
// String references:
//   "GNRootView"

int64_t * FUN_01e23740(char param_1,uint64_t param_2)

{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t *plVar5;
  void*puVar6;
  int64_t *plVar7;
  int64_t *in_RDX;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar8;
  bool bVar9;
  bool bVar10;
  float fVar11;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar12;
  float extraout_XMM0_Db;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  uint32_t uVar15;
  uint32_t uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  uVar16 = (uint32_t)((uint64_t)param_2 >> 0x20);
  uVar15 = (uint32_t)param_2;
  FUN_01e24810();
  if (((*in_RDX == 0) || (iVar4 = FUN_01d3b630(), iVar4 != 1)) && (param_1 != '\0')) {
    lVar8 = *arg1;
  }
  else {
    g_028b9519 = '\x01';
    lVar8 = *arg1;
  }
  if (lVar8 != 0) {
    FUN_01e42030();
    plVar5 = local_40;
    plVar7 = g_028b9508;
    if (g_028b9508 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == (int64_t *)0x0) {
          plVar5 = (int64_t *)0x0;
        }
        else {
          FUN_00d50b00();
          plVar5 = local_40;
        }
      }
      else {
        local_38 = '\0';
      }
      bVar9 = g_028b9508 != (int64_t *)0x0;
      plVar7 = plVar5;
      g_028b9508 = plVar5;
      if (bVar9) {
        plVar5 = (int64_t *)FUN_00d50b20();
        plVar7 = local_40;
      }
    }
    if ((plVar7 != (int64_t *)0x0) && (g_028b9510 == '\0')) {
      g_028b9510 = '\x01';
      plVar5 = (int64_t *)FUN_00e8cb90();
      plVar7 = local_40;
    }
    if ((local_38 != '\0') && (plVar7 != (int64_t *)0x0)) {
      plVar5 = (int64_t *)FUN_00d50b20();
    }
    goto LAB_01e2395a;
  }
  if ((g_026e85e0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_027f4bd8 = FUN_0006d940();
    g_027f4bc0 = "GNRootView";
    g_027f4bc8 = 0x1d0;
    g_027f4bd0 = FUN_00097da0;
    g_027f4be0 = 0;
    ram_00000000027f4be8 = 0;
    g_027f4bf0 = 0;
    ram_00000000027f4bf8 = 0;
    g_027f4c00 = 0;
    ram_00000000027f4c08 = 0;
    g_027f4c10 = 0;
    ram_00000000027f4c18 = 0;
    g_027f4c20 = 0;
    ram_00000000027f4c28 = 0;
    g_027f4c30 = 0;
    ram_00000000027f4c38 = 0;
    g_027f4c40 = 0;
    ram_00000000027f4c48 = 0;
    g_027f4c50 = 0;
    ram_00000000027f4c58 = 0;
    g_027f4c60 = 0;
    ram_00000000027f4c68 = 0;
    g_027f4c70 = 0;
    ram_00000000027f4c78 = 0;
    g_027f4c80 = 0;
    ___cxa_guard_release();
  }
  local_78 = FUN_00e86210();
  local_70 = 0;
  uVar12 = extraout_XMM0_Qa;
  if (local_78 != 0) {
    uVar12 = FUN_00d50b00();
  }
  local_70 = '\x01';
  plVar5 = (int64_t *)FUN_01d824e0(uVar12,&local_78);
  plVar7 = g_028b9508;
  if (g_028b9508 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) {
        plVar7 = (int64_t *)0x0;
        goto LAB_01e2384c;
      }
      FUN_00d50b00();
      plVar3 = g_028b9508;
      g_028b9508 = local_40;
      plVar5 = (int64_t *)0x0;
      plVar7 = local_40;
      if (plVar3 == (int64_t *)0x0) goto LAB_01e23911;
    }
    else {
      local_38 = '\0';
      plVar7 = local_40;
LAB_01e2384c:
      bVar9 = g_028b9508 == (int64_t *)0x0;
      g_028b9508 = plVar7;
      if (bVar9) {
        plVar5 = (int64_t *)0x0;
        goto LAB_01e23911;
      }
    }
    plVar5 = (int64_t *)FUN_00d50b20();
    plVar7 = local_40;
  }
LAB_01e23911:
  if ((plVar7 != (int64_t *)0x0) && (g_028b9510 == '\0')) {
    g_028b9510 = '\x01';
    plVar5 = (int64_t *)FUN_00e8cb90();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    plVar5 = (int64_t *)FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    plVar5 = (int64_t *)FUN_00d50b20();
  }
LAB_01e2395a:
  if (g_028b9508 != (int64_t *)0x0) {
    FUN_01d907a0();
    local_48 = local_40;
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) {
        return (int64_t *)0x0;
      }
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (local_40 == (int64_t *)0x0) {
      return (int64_t *)0x0;
    }
    uVar12 = FUN_01d3abf0();
    *(void*)(this_ptr + 0x44) = uVar12;
    FUN_01d3abf0();
    FUN_01f514b0();
    uVar12 = FUN_01f51370();
    *(void*)(this_ptr + 0x34) = uVar12;
    *(uint64_t *)(this_ptr + 0x3c) = CONCAT44(uVar16,uVar15);
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (*(int *)(this_ptr + 0xc) != -1) {
      fVar11 = (float)FUN_01e21f60();
      fVar17 = 0.0;
      *(float *)(this_ptr + 0x44) = *(float *)(this_ptr + 0x44) - fVar11;
      if (*(int *)(this_ptr + 0x10) != -1) {
        FUN_01e21df0();
        *(float *)(this_ptr + 0x48) =
             *(float *)(this_ptr + 0x48) - (extraout_XMM0_Db + fVar17 + g_02390d00);
      }
    }
    fVar11 = g_0239011c;
    fVar17 = 0.0;
    fVar18 = 0.0;
    fVar19 = 0.0;
    *(float *)(this_ptr + 0x44) =
         *(float *)(this_ptr + 0x44) - (float)*(void*)(this_ptr + 0x28) * g_0239011c;
    *(float *)(this_ptr + 0x48) =
         *(float *)(this_ptr + 0x48) -
         (float)((uint64_t)*(void*)(this_ptr + 0x28) >> 0x20) * fVar11;
    if (*arg1 != 0) {
      FUN_01e3f820();
      uVar12 = FUN_01e46ed0();
      *(void*)(this_ptr + 0x44) = uVar12;
    }
    puVar6 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *(void*)((int64_t)puVar6 + 0xc) = 0;
    *puVar6 = &g_026a3350;
    puVar6[2] = &g_026a37c8;
    puVar6[3] = 0;
    puVar6[4] = 0;
    *(void*)(puVar6 + 5) = 0;
    puVar6[6] = 0;
    *(void*)((int64_t)puVar6 + 0x37) = 0;
    *(void*)((int64_t)puVar6 + 0x3c) = 0;
    *(void*)((int64_t)puVar6 + 0x44) = 0;
    *(void*)((int64_t)puVar6 + 0x4c) = 0;
    *(void*)((int64_t)puVar6 + 0x54) = 0;
    *(void*)((int64_t)puVar6 + 0x5c) = 0;
    *(void*)((int64_t)puVar6 + 100) = 0;
    *(void*)((int64_t)puVar6 + 0x69) = 0;
    puVar6[0xf] = 0;
    *(void*)((int64_t)puVar6 + 0x7f) = 0;
    *(void*)((int64_t)puVar6 + 0x84) = 0;
    *(void*)((int64_t)puVar6 + 0x8c) = 0;
    *(void*)((int64_t)puVar6 + 0x94) = 0;
    uVar12 = (*g_026a3368)();
    if (g_028b94c8 == puVar6) {
      bVar2 = false;
      bVar9 = false;
    }
    else {
      bVar2 = true;
      bVar9 = true;
      bVar10 = g_028b94c8 != (void*)0x0;
      g_028b94c8 = puVar6;
      if (bVar10) {
        uVar12 = FUN_00d50b20();
      }
    }
    if (g_028b94d0 == '\0') {
      g_028b94d0 = '\x01';
      uVar12 = FUN_00e8cb90();
      bVar9 = bVar2;
    }
    if (!bVar9) {
      uVar12 = FUN_00d50b20();
    }
    plVar5 = g_028b9508;
    local_60 = 0;
    if (g_028b9508 != (int64_t *)0x0) {
      uVar12 = FUN_00d50b00();
    }
    local_68 = plVar5;
    local_60 = '\x01';
    FUN_01e5b6f0(uVar12,&local_68);
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar12 = FUN_01e21f60();
    auVar13._0_4_ = (float)uVar12 + fVar11;
    auVar13._4_4_ = (float)((uint64_t)uVar12 >> 0x20) + fVar17;
    auVar13._8_4_ = (float)extraout_XMM0_Qb + fVar18;
    auVar13._12_4_ = (float)((uint64_t)extraout_XMM0_Qb >> 0x20) + fVar19;
    auVar14._4_4_ = fVar17;
    auVar14._0_4_ = fVar11;
    auVar14._8_4_ = fVar18;
    auVar14._12_4_ = fVar19;
    auVar14 = blendps(auVar13,auVar14,2);
    *(int64_t *)(this_ptr + 0x4c) = auVar14._0_8_;
    plVar5 = (int64_t *)FUN_00e8fc40();
    FUN_0006daf0();
    *plVar5 = (int64_t)&g_0269f1a0;
    plVar5[2] = (int64_t)&g_0269fac8;
    plVar5[0x27] = 0;
    *(void*)(plVar5 + 0x28) = 0;
    FUN_00d500e0();
    if (g_028b94a8 == plVar5) {
      bVar2 = false;
      bVar9 = false;
    }
    else {
      bVar2 = true;
      bVar9 = true;
      bVar10 = g_028b94a8 != (int64_t *)0x0;
      g_028b94a8 = plVar5;
      if (bVar10) {
        FUN_00d50b20();
      }
    }
    if (g_028b94b0 == '\0') {
      g_028b94b0 = '\x01';
      FUN_00e8cb90();
      bVar9 = bVar2;
    }
    if (!bVar9) {
      FUN_00d50b20();
    }
    plVar5 = g_028b94a8;
    FUN_00d50b00();
    plVar5[0x27] = this_ptr;
    FUN_00d50b20();
    (**(code **)(*g_028b94a8 + 0x4d0))();
    FUN_01e5bc80();
    FUN_01e5bb70(*(void*)(this_ptr + 0x44));
    FUN_01e5ca90();
    plVar5 = local_40;
    local_58 = g_028b94a8;
    local_50 = 0;
    if (g_028b94a8 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_50 = '\x01';
    (**(code **)(*plVar5 + 0x450))();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar5 = (int64_t *)FUN_00e8fc40();
    FUN_0006daf0();
    *plVar5 = (int64_t)&g_0269f1a0;
    plVar5[2] = (int64_t)&g_0269fac8;
    plVar5[0x27] = 0;
    *(void*)(plVar5 + 0x28) = 0;
    FUN_00d500e0();
    if (g_028b94b8 == plVar5) {
      bVar2 = false;
      bVar9 = false;
    }
    else {
      bVar2 = true;
      bVar9 = true;
      bVar10 = g_028b94b8 != (int64_t *)0x0;
      g_028b94b8 = plVar5;
      if (bVar10) {
        FUN_00d50b20();
      }
    }
    if (g_028b94c0 == '\0') {
      g_028b94c0 = '\x01';
      FUN_00e8cb90();
      bVar9 = bVar2;
    }
    if (!bVar9) {
      FUN_00d50b20();
    }
    plVar5 = g_028b94b8;
    *(void*)(g_028b94b8 + 0x28) = 1;
    FUN_00d50b00();
    plVar5[0x27] = this_ptr;
    FUN_00d50b20();
    (**(code **)(*g_028b94b8 + 0x4d0))();
    plVar5 = (int64_t *)FUN_00e8fc40();
    FUN_0006daf0();
    plVar5[0x27] = 0;
    *(void*)(plVar5 + 0x28) = 0;
    *(void*)((int64_t)plVar5 + 0x17c) = 0;
    plVar5[0x30] = 0;
    *(void*)(plVar5 + 0x31) = 0;
    plVar5[0x29] = 0;
    plVar5[0x2a] = 0;
    *(void*)((int64_t)plVar5 + 0x154) = 0;
    *(void*)((int64_t)plVar5 + 0x15c) = 0;
    plVar5[0x2d] = 0;
    plVar5[0x2e] = 0;
    *(void*)(plVar5 + 0x2f) = 0;
    *plVar5 = (int64_t)&g_0269e7e8;
    plVar5[2] = (int64_t)&g_0269f160;
    plVar5[0x32] = 0;
    FUN_00d500e0();
    if (g_028b94f8 == plVar5) {
      bVar2 = false;
      bVar9 = false;
    }
    else {
      bVar2 = true;
      bVar9 = true;
      bVar10 = g_028b94f8 != (int64_t *)0x0;
      g_028b94f8 = plVar5;
      if (bVar10) {
        FUN_00d50b20();
      }
    }
    if (g_028b9500 == '\0') {
      g_028b9500 = '\x01';
      FUN_00e8cb90();
      bVar9 = bVar2;
    }
    if (!bVar9) {
      FUN_00d50b20();
    }
    (**(code **)(*g_028b94f8 + 0x4d0))();
    uVar12 = g_023dcd04;
    *(void*)(this_ptr + 100) = g_023dccfc;
    *(void*)(this_ptr + 0x6c) = uVar12;
    uVar12 = g_023dcd04;
    *(void*)(this_ptr + 0x54) = g_023dccfc;
    *(void*)(this_ptr + 0x5c) = uVar12;
    plVar5 = g_028b94f8;
    lVar8 = *(int64_t *)(this_ptr + 0x20);
    lVar1 = g_028b94f8[0x32];
    if (lVar1 != lVar8) {
      if (lVar8 != 0) {
        FUN_00d50b00();
      }
      plVar5[0x32] = lVar8;
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_01d3abf0();
    FUN_01e22920();
    FUN_01e5d9c0();
    if (*(int *)(this_ptr + 0xc) == -1) {
      *(void*)(this_ptr + 0x10) = 0xffffffff;
    }
    FUN_01e1f2c0();
    *(void*)(this_ptr + 0x31) = 1;
    (**(code **)(*g_028b94a8 + 0x3c0))();
    *(void*)(this_ptr + 0x31) = 0;
    FUN_01e42030();
    (**(code **)(*local_40 + 0x6e0))();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((int64_t)*(int *)(this_ptr + 0xc) != -1) &&
       (*(int64_t *)
         (*(int64_t *)(*(int64_t *)(this_ptr + 0x18) + 0x10) +
         (int64_t)*(int *)(this_ptr + 0xc) * 8) != 0)) {
      FUN_00d50b00();
      FUN_00d50b20();
      if ((int64_t)*(int *)(this_ptr + 0xc) == -1) {
        lVar8 = 0;
        bVar9 = true;
      }
      else {
        lVar8 = *(int64_t *)
                 (*(int64_t *)(*(int64_t *)(this_ptr + 0x18) + 0x10) +
                 (int64_t)*(int *)(this_ptr + 0xc) * 8);
        if (lVar8 == 0) {
          lVar8 = 0;
        }
        else {
          FUN_00d50b00();
        }
        bVar9 = false;
      }
      FUN_01e25fd0();
      plVar5 = local_40;
      if (local_40 == (int64_t *)0x0) {
        plVar5 = (int64_t *)0x0;
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if (!bVar9 && lVar8 != 0) {
        FUN_00d50b20();
      }
      if (((g_028b9519 == '\0') && (plVar5 != (int64_t *)0x0)) &&
         (iVar4 = FUN_01d5b230(), iVar4 != 0)) {
        FUN_01d62b90();
        plVar7 = *(int64_t **)(this_ptr + 0x20);
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_40 == plVar7) {
          FUN_01d62b80();
        }
      }
      if (plVar5 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_01e23600();
    FUN_01e236a0();
    if ((g_028b94c8 != (void*)0x0) && (FUN_01e5e740(), g_028b94c8 != (void*)0x0))
    {
      FUN_00d50130();
    }
    if (g_028b94b8 != (int64_t *)0x0) {
      FUN_00d50130();
    }
    if (g_028b94f8 != (int64_t *)0x0) {
      FUN_00d50130();
    }
    if (g_028b94f8 != (int64_t *)0x0) {
      g_028b94f8 = (int64_t *)0x0;
      FUN_00d50b20();
    }
    local_48 = (int64_t *)0x0;
    FUN_00d50b20();
    if (g_028b94a8 != (int64_t *)0x0) {
      g_028b94a8 = (int64_t *)0x0;
      FUN_00d50b20();
    }
    if (g_028b94c8 != (void*)0x0) {
      g_028b94c8 = (void*)0x0;
      FUN_00d50b20();
    }
    if (g_028b94b8 != (int64_t *)0x0) {
      g_028b94b8 = (int64_t *)0x0;
      FUN_00d50b20();
    }
    plVar5 = (int64_t *)FUN_01e24a90();
    g_028b9519 = '\0';
  }
  return plVar5;
}



// ============================================================
// 000c49f0
// ============================================================
// Function: FUN_000c49f0
// Address: 000c49f0
// Size: 3184 bytes
// Class: GNRootView
// String references:
//   "GNRootView"
//   "MDMetaWindowController"

void FUN_000c49f0(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  int64_t lVar6;
  char *pcVar7;
  int64_t **pplVar8;
  int64_t *arg1;
  bool bVar9;
  uint32_t uVar10;
  int64_t *local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  char local_90;
  undefined7 uStack_8f;
  char local_88;
  int64_t *local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_50 [8];
  int64_t *local_48;
  uint64_t local_40;
  int local_38;
  
  FUN_00d3ecc0();
  plVar1 = local_58;
  lVar6 = g_026cb128;
  if (g_026cb128 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar1 + 0x50))();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    FUN_00d3ecc0();
    plVar1 = local_58;
    local_e0 = g_026cb130;
    if (g_026cb130 != 0) {
      FUN_00d50b00();
    }
    local_d8 = '\x01';
    cVar4 = (**(code **)(*plVar1 + 0x50))();
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') goto LAB_000c5300;
    pplVar8 = &local_58;
    FUN_00d3ecf0();
    plVar1 = local_58;
    if ((g_026e85e0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      g_027f4bd8 = FUN_0006d940();
      g_027f4bc0 = "GNRootView";
      g_027f4bc8 = 0x1d0;
      g_027f4bd0 = FUN_00097da0;
      g_027f4be0 = 0;
      ram_00000000027f4be8 = 0;
      g_027f4bf0 = 0;
      ram_00000000027f4bf8 = 0;
      g_027f4c00 = 0;
      ram_00000000027f4c08 = 0;
      g_027f4c10 = 0;
      ram_00000000027f4c18 = 0;
      g_027f4c20 = 0;
      ram_00000000027f4c28 = 0;
      g_027f4c30 = 0;
      ram_00000000027f4c38 = 0;
      g_027f4c40 = 0;
      ram_00000000027f4c48 = 0;
      g_027f4c50 = 0;
      ram_00000000027f4c58 = 0;
      g_027f4c60 = 0;
      ram_00000000027f4c68 = 0;
      g_027f4c70 = 0;
      ram_00000000027f4c78 = 0;
      g_027f4c80 = 0;
      ___cxa_guard_release();
    }
    if (plVar1 == (int64_t *)0x0) {
LAB_000c4bab:
      pplVar8 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_000c4bab;
    }
    plVar1 = *pplVar8;
    if (*(char *)(pplVar8 + 1) == '\0') {
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar8 + 1) = 0;
    }
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_80 = plVar1;
    (**(code **)(*plVar1 + 0x4a0))();
    FUN_00d23310();
    plVar1 = local_58;
    pcVar7 = &local_90;
    if (local_50[0] != '\0') {
      pcVar7 = local_50;
    }
    local_90 = local_50[0];
    *pcVar7 = '\0';
    if ((local_50[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pplVar8 = &local_68;
    (**(code **)(*plVar1 + 0x370))();
    plVar1 = local_68;
    if ((g_026fddb0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      g_026e0ab8 = FUN_00015ff0();
      g_026e0aa0 = "MDMetaWindowController";
      g_026e0aa8 = 0x198;
      g_026e0ab0 = FUN_0006dea0;
      g_026e0ac0 = 0;
      ram_00000000026e0ac8 = 0;
      g_026e0ad0 = 0;
      g_026e0b48 = 0;
      ram_00000000026e0b50 = 0;
      g_026e0b58 = 0;
      g_026e0b5a = 1;
      g_026e0ad8 = 0;
      ram_00000000026e0ae0 = 0;
      g_026e0ae8 = 0;
      ram_00000000026e0af0 = 0;
      g_026e0af8 = 0;
      ram_00000000026e0b00 = 0;
      g_026e0b08 = 0;
      ram_00000000026e0b10 = 0;
      g_026e0b18 = 0;
      ram_00000000026e0b20 = 0;
      g_026e0b28 = 0;
      ram_00000000026e0b30 = 0;
      g_026e0b38 = 0;
      ram_00000000026e0b40 = 0;
      g_026e0b63 = 0;
      g_026e0b5b = 0;
      ___cxa_guard_release();
    }
    if (plVar1 == (int64_t *)0x0) {
LAB_000c4fd7:
      pplVar8 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_000c4fd7;
    }
    plVar1 = *pplVar8;
    if (*(char *)(pplVar8 + 1) == '\0') {
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar8 + 1) = 0;
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_90 != '\0') {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e561b0();
    if (local_58 == (int64_t *)0x0) {
      bVar9 = false;
    }
    else {
      FUN_01e561b0();
      FUN_01d8f0f0();
      bVar9 = local_68 != (int64_t *)0x0;
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar9) {
      FUN_01e561b0();
      FUN_01d8b010();
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*plVar1 + 0x5f8))();
    local_a0 = local_68;
    local_98 = 0;
    if (local_60 == '\0') {
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    local_98 = '\x01';
    FUN_000c5e20();
    plVar2 = local_58;
    if (local_50[0] == '\0') {
      if (((local_58 != (int64_t *)0x0) && (FUN_00d50b00(), local_50[0] != '\0')) &&
         (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50[0] = '\0';
    }
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (int64_t *)0x0) {
      local_50[0] = '\0';
      local_58 = (int64_t *)0x0;
      local_48 = plVar2;
      local_40 = 0xffffffff;
      local_38 = 0;
      while( true ) {
        lVar6 = (int64_t)(int)local_40;
        iVar5 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar5);
        if (*(int *)((int64_t)local_48 + 0xc) <= iVar5) break;
        local_d0 = *(int64_t **)(local_48[2] + 8 + lVar6 * 8);
        local_c8 = '\0';
        local_58 = local_d0;
        (**(code **)(*plVar1 + 0x608))();
        if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50130();
        if (local_40._4_4_ != 0) {
          if (local_40._4_4_ < 1) {
            iVar5 = -local_40._4_4_;
          }
          else {
            local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
            FUN_00d23690();
            local_38 = local_38 + local_40._4_4_;
            iVar5 = 0;
          }
          local_40 = CONCAT44(iVar5,(int)local_40);
        }
      }
      FUN_000e3600();
      FUN_00d50b20();
    }
    FUN_00612250();
    plVar3 = local_58;
    plVar2 = local_80;
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      FUN_00612250();
      local_b8 = '\0';
      local_c0 = plVar1;
      (**(code **)(*local_58 + 0x4b8))();
      if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    goto LAB_000c5300;
  }
  pplVar8 = &local_58;
  FUN_00d3ecf0();
  plVar1 = local_58;
  if ((g_026e85e0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_027f4bd8 = FUN_0006d940();
    g_027f4bc0 = "GNRootView";
    g_027f4bc8 = 0x1d0;
    g_027f4bd0 = FUN_00097da0;
    g_027f4be0 = 0;
    ram_00000000027f4be8 = 0;
    g_027f4bf0 = 0;
    ram_00000000027f4bf8 = 0;
    g_027f4c00 = 0;
    ram_00000000027f4c08 = 0;
    g_027f4c10 = 0;
    ram_00000000027f4c18 = 0;
    g_027f4c20 = 0;
    ram_00000000027f4c28 = 0;
    g_027f4c30 = 0;
    ram_00000000027f4c38 = 0;
    g_027f4c40 = 0;
    ram_00000000027f4c48 = 0;
    g_027f4c50 = 0;
    ram_00000000027f4c58 = 0;
    g_027f4c60 = 0;
    ram_00000000027f4c68 = 0;
    g_027f4c70 = 0;
    ram_00000000027f4c78 = 0;
    g_027f4c80 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_000c4aca:
    pplVar8 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_000c4aca;
  }
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
  }
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_80 = plVar1;
  (**(code **)(*plVar1 + 0x4a0))();
  FUN_00d23310();
  plVar1 = local_58;
  pcVar7 = &local_90;
  if (local_50[0] != '\0') {
    pcVar7 = local_50;
  }
  local_90 = local_50[0];
  *pcVar7 = '\0';
  if ((local_50[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pplVar8 = &local_68;
  (**(code **)(*plVar1 + 0x370))();
  plVar1 = local_68;
  if ((g_026fddb0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026e0ab8 = FUN_00015ff0();
    g_026e0aa0 = "MDMetaWindowController";
    g_026e0aa8 = 0x198;
    g_026e0ab0 = FUN_0006dea0;
    g_026e0ac0 = 0;
    ram_00000000026e0ac8 = 0;
    g_026e0ad0 = 0;
    g_026e0b48 = 0;
    ram_00000000026e0b50 = 0;
    g_026e0b58 = 0;
    g_026e0b5a = 1;
    g_026e0ad8 = 0;
    ram_00000000026e0ae0 = 0;
    g_026e0ae8 = 0;
    ram_00000000026e0af0 = 0;
    g_026e0af8 = 0;
    ram_00000000026e0b00 = 0;
    g_026e0b08 = 0;
    ram_00000000026e0b10 = 0;
    g_026e0b18 = 0;
    ram_00000000026e0b20 = 0;
    g_026e0b28 = 0;
    ram_00000000026e0b30 = 0;
    g_026e0b38 = 0;
    ram_00000000026e0b40 = 0;
    g_026e0b63 = 0;
    g_026e0b5b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_000c4c8c:
    pplVar8 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_000c4c8c;
  }
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_90 != '\0') {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_0062abf0();
  uVar10 = FUN_00521db0();
  plVar2 = local_58;
  if (local_50[0] == '\0') {
    if (((local_58 != (int64_t *)0x0) && (uVar10 = FUN_00d50b00(), local_50[0] != '\0')) &&
       (local_58 != (int64_t *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
  }
  else {
    local_50[0] = '\0';
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    uVar10 = FUN_00d50b20();
  }
  local_f8 = '\0';
  local_100 = plVar1;
  (**(code **)(*plVar2 + 0x600))(uVar10,&local_100);
  plVar2 = local_58;
  if (local_50[0] == '\0') {
    if (((local_58 != (int64_t *)0x0) && (FUN_00d50b00(), local_50[0] != '\0')) &&
       (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50[0] = '\0';
  }
  if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_f0 = plVar2;
  local_e8 = '\0';
  (**(code **)(*plVar1 + 0x600))();
  if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_0062abf0();
  FUN_00b34cb0();
  if (local_58 == (int64_t *)0x0) {
    cVar4 = '\0';
  }
  else {
    FUN_0062abf0();
    FUN_00b34cb0();
    cVar4 = (**(code **)(*local_78 + 0x58))();
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      (**(code **)(*local_78 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (CONCAT71(uStack_8f,local_90) != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    (**(code **)(*local_58 + 0x10))();
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    FUN_0064dff0();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  FUN_00d50b20();
  FUN_00d50b20();
LAB_000c5300:
  local_b0 = *arg1;
  local_a8 = '\0';
  FUN_00292f50();
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01e22920
// ============================================================
// Function: FUN_01e22920
// Address: 01e22920
// Size: 2356 bytes
// Class: GNRootView

void FUN_01e22920(uint64_t param_1)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  void*puVar7;
  int iVar8;
  int64_t *arg1;
  int64_t this_ptr;
  int iVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint32_t uVar13;
  uint64_t in_XMM0_Qb;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint32_t uVar14;
  uint8_t auVar12 [16];
  uint32_t uVar18;
  uint32_t uVar19;
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fStack_114;
  float fStack_10c;
  float local_f8;
  float fStack_f4;
  float local_b8;
  float fStack_b4;
  uint32_t uStack_b0;
  uint32_t uStack_ac;
  float local_a8;
  float fStack_a4;
  uint32_t uStack_a0;
  uint32_t uStack_9c;
  float local_98;
  float fStack_94;
  int local_68;
  int64_t local_58;
  char local_50;
  int local_40;
  
  if (((((*(float *)(this_ptr + 100) != g_023dccfc) ||
        (NAN(*(float *)(this_ptr + 100)) || NAN(g_023dccfc))) ||
       (*(float *)(this_ptr + 0x68) != g_023dcd00)) ||
      ((NAN(*(float *)(this_ptr + 0x68)) || NAN(g_023dcd00) ||
       (*(float *)(this_ptr + 0x6c) != g_023dcd04)))) ||
     ((NAN(*(float *)(this_ptr + 0x6c)) || NAN(g_023dcd04) ||
      ((*(float *)(this_ptr + 0x70) != g_023dcd08 ||
       (NAN(*(float *)(this_ptr + 0x70)) || NAN(g_023dcd08))))))) goto LAB_01e22e61;
  local_b8 = g_023dccfc;
  fStack_b4 = g_023dcd00;
  uVar13 = 0;
  uVar14 = 0;
  lVar2 = *(int64_t *)(this_ptr + 0x18);
  local_98 = g_023dcd04;
  fStack_94 = g_023dcd08;
  if (lVar2 != 0) {
    local_68 = -1;
    uStack_b0 = 0;
    uStack_ac = 0;
    local_a8 = g_023dcd04;
    fStack_a4 = g_023dcd08;
    uStack_a0 = 0;
    uStack_9c = 0;
    fVar20 = g_023dcd04;
    fVar21 = g_023dcd08;
    local_f8 = local_b8;
    fStack_f4 = fStack_b4;
LAB_01e22a38:
    do {
      lVar4 = local_58;
      local_68 = local_68 + 1;
      if (*(int *)(lVar2 + 0xc) <= local_68) goto LAB_01e22d64;
      FUN_01e262a0();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
          goto LAB_01e22ad0;
        }
      }
      else if (local_58 != 0) {
LAB_01e22ad0:
        local_50 = '\0';
        local_58 = 0;
        local_40 = -1;
        fVar22 = local_a8;
        fVar23 = fStack_a4;
        uVar18 = uStack_a0;
        uVar19 = uStack_9c;
LAB_01e22b25:
        uStack_9c = uVar19;
        uStack_a0 = uVar18;
        fStack_a4 = fVar23;
        local_a8 = fVar22;
        lVar10 = (int64_t)local_40;
        local_40 = local_40 + 1;
        if (local_40 < *(int *)(lVar4 + 0xc)) {
          lVar3 = *(int64_t *)(lVar4 + 0x10);
          local_58 = *(int64_t *)(lVar3 + 8 + lVar10 * 8);
          fVar22 = fVar20;
          fVar23 = fVar21;
          uVar18 = uVar13;
          uVar19 = uVar14;
          uVar11 = FUN_01e21df0(lVar3,local_40);
          if ((((local_b8 == g_023dccfc) && (!NAN(local_b8) && !NAN(g_023dccfc))) &&
              (fStack_b4 == g_023dcd00)) &&
             (((!NAN(fStack_b4) && !NAN(g_023dcd00) && (local_a8 == g_023dcd04)) &&
              (!NAN(local_a8) && !NAN(g_023dcd04))))) goto code_r0x01e22b83;
          goto LAB_01e22ba0;
        }
        FUN_00274dd0();
        FUN_00d50b20();
      }
      if (g_028b9519 == '\0') {
        FUN_01e25fd0();
        if (local_50 == '\0') {
          if (local_58 == 0) goto LAB_01e22a38;
          FUN_00d50b00();
        }
        else if (local_58 == 0) goto LAB_01e22a38;
        (**(code **)(*g_028b94f8 + 0x918))();
        FUN_01e22190();
        lVar4 = g_028b94f8[0x2d];
        fVar22 = local_98;
        fVar23 = fStack_94;
        if ((lVar4 != 0) && (0xf < *(int *)(lVar4 + 0x18))) {
          iVar9 = 0;
          lVar10 = 8;
          fVar20 = local_f8;
          fVar21 = fStack_f4;
          do {
            uVar11 = *(void*)(*(int64_t *)(lVar4 + 0x10) + -8 + lVar10);
            local_f8 = (float)uVar11;
            fStack_f4 = (float)((uint64_t)uVar11 >> 0x20);
            uVar13 = 0;
            uVar14 = 0;
            uVar11 = *(void*)(*(int64_t *)(lVar4 + 0x10) + lVar10);
            fVar22 = (float)uVar11;
            fVar23 = (float)((uint64_t)uVar11 >> 0x20);
            if ((((fVar20 != g_023dccfc) || (NAN(fVar20) || NAN(g_023dccfc))) ||
                (fVar21 != g_023dcd00)) ||
               (((NAN(fVar21) || NAN(g_023dcd00) || (local_98 != g_023dcd04)) ||
                (NAN(local_98) || NAN(g_023dcd04))))) {
LAB_01e22d20:
              fVar22 = local_98;
              fVar23 = fStack_94;
              uVar11 = FUN_00d052e0();
              local_f8 = (float)uVar11;
              fStack_f4 = (float)((uint64_t)uVar11 >> 0x20);
              uVar13 = (uint32_t)extraout_XMM0_Qb_01;
              uVar14 = (uint32_t)((uint64_t)extraout_XMM0_Qb_01 >> 0x20);
            }
            else if ((fStack_94 != g_023dcd08) || (NAN(fStack_94) || NAN(g_023dcd08)))
            goto LAB_01e22d20;
            iVar9 = iVar9 + 1;
            iVar1 = *(int *)(lVar4 + 0x18);
            iVar8 = iVar1 + 0xf;
            if (-1 < iVar1) {
              iVar8 = iVar1;
            }
            lVar10 = lVar10 + 0x10;
            fVar20 = local_f8;
            fVar21 = fStack_f4;
            local_98 = fVar22;
            fStack_94 = fVar23;
          } while (iVar9 < iVar8 >> 4);
        }
        FUN_00d50b20();
        local_98 = fVar22;
        fStack_94 = fVar23;
      }
    } while( true );
  }
  local_a8 = g_023dcd04;
  fStack_a4 = g_023dcd08;
  uStack_a0 = 0;
  uStack_9c = 0;
  local_f8 = g_023dccfc;
  fStack_f4 = g_023dcd00;
LAB_01e22d8b:
  if (((((local_f8 != g_023dccfc) || (NAN(local_f8) || NAN(g_023dccfc))) ||
       (fStack_f4 != g_023dcd00)) ||
      ((NAN(fStack_f4) || NAN(g_023dcd00) || (local_98 != g_023dcd04)))) ||
     (NAN(local_98) || NAN(g_023dcd04))) {
LAB_01e22dbd:
    FUN_00d051c0();
    *(float *)(this_ptr + 0x6c) = local_98;
    *(float *)(this_ptr + 0x70) = fStack_94;
    *(void*)(this_ptr + 100) = *(void*)(this_ptr + 0x44);
    *(float *)(this_ptr + 0x68) = *(float *)(this_ptr + 0x48) - fStack_94;
  }
  else if ((fStack_94 != g_023dcd08) || (NAN(fStack_94) || NAN(g_023dcd08))) goto LAB_01e22dbd;
  if ((local_b8 == g_023dccfc) && (!NAN(local_b8) && !NAN(g_023dccfc))) {
    if ((fStack_b4 == g_023dcd00) && (!NAN(fStack_b4) && !NAN(g_023dcd00))) {
      if ((local_a8 == g_023dcd04) && (!NAN(local_a8) && !NAN(g_023dcd04))) {
        if ((fStack_a4 == g_023dcd08) && (!NAN(fStack_a4) && !NAN(g_023dcd08)))
        goto LAB_01e22e61;
      }
    }
  }
  *(void*)(this_ptr + 0x54) = *(void*)(this_ptr + 0x44);
  *(void*)(this_ptr + 0x5c) = *(void*)(this_ptr + 0x4c);
  *(float *)(this_ptr + 0x58) = *(float *)(this_ptr + 0x50) + *(float *)(this_ptr + 0x58);
  auVar15._4_4_ = fStack_a4;
  auVar15._0_4_ = local_a8;
  auVar15._8_4_ = uStack_a0;
  auVar15._12_4_ = uStack_9c;
  uVar11 = extractps(auVar15,1);
  *(void*)(this_ptr + 0x60) = uVar11;
LAB_01e22e61:
  fStack_10c = (float)((uint64_t)in_XMM0_Qb >> 0x20);
  uVar11 = FUN_00d052e0(*(void*)(this_ptr + 0x44),*(void*)(this_ptr + 0x4c),
                        (int)*(void*)(this_ptr + 0x54),
                        (int)*(void*)(this_ptr + 0x5c));
  if (g_028b9519 == '\0') {
    uVar11 = FUN_00d052e0();
    local_a8 = (float)uVar11;
    fStack_a4 = (float)((uint64_t)uVar11 >> 0x20);
  }
  else {
    local_a8 = (float)uVar11;
    fStack_a4 = (float)((uint64_t)uVar11 >> 0x20);
  }
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02572358;
  (*g_02572370)();
  if (*arg1 == 0) {
    FUN_01ede360(*(void*)(this_ptr + 0x34),*(void*)(this_ptr + 0x3c),0);
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_00d21140();
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    auVar17._8_8_ = 0;
    auVar17._0_8_ = *(uint64_t *)(this_ptr + 0x3c);
    fStack_114 = (float)((uint64_t)param_1 >> 0x20);
    auVar15 = insertps(auVar17,ZEXT416((uint)((g_02390d00 + fStack_114) -
                                             (float)((uint64_t)*(void*)(this_ptr + 0x34) >>
                                                    0x20))),0x10);
    FUN_01ede360(0,auVar15._0_8_,0);
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_00d21140();
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    auVar12._8_8_ = 0;
    auVar12._0_8_ = *(uint64_t *)(this_ptr + 0x34);
    auVar16._8_8_ = 0;
    auVar16._0_8_ = *(uint64_t *)(this_ptr + 0x3c);
    fVar20 = (float)(*(uint64_t *)(this_ptr + 0x3c) >> 0x20) -
             (fStack_114 - (float)(*(uint64_t *)(this_ptr + 0x34) >> 0x20));
    fVar21 = 0.0 - (fStack_10c - 0.0);
    auVar6._4_4_ = fStack_114;
    auVar6._0_4_ = fStack_114 + g_02390124;
    auVar6._8_4_ = fStack_10c;
    auVar6._12_4_ = fStack_10c;
    auVar15 = insertps(auVar12,auVar6,0x10);
    auVar5._4_4_ = fVar20;
    auVar5._0_4_ = fVar20 + g_02390d00;
    auVar5._8_4_ = fVar21;
    auVar5._12_4_ = fVar21;
    auVar17 = insertps(auVar16,auVar5,0x10);
    FUN_01ede360(auVar15._0_8_,auVar17._0_8_,0);
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_00d21140();
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01ede360(*(void*)(this_ptr + 0x34),*(void*)(this_ptr + 0x3c),0);
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_00d21140();
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  uVar11 = FUN_01edf3b0();
  local_b8 = (float)uVar11;
  fStack_b4 = (float)((uint64_t)uVar11 >> 0x20);
  *(float *)(this_ptr + 0x44) = *(float *)(this_ptr + 0x44) + (local_b8 - local_a8);
  *(float *)(this_ptr + 0x48) = (fStack_b4 - fStack_a4) + *(float *)(this_ptr + 0x48);
  FUN_01e5ba50(*(void*)(this_ptr + 0x44),*(void*)(this_ptr + 0x4c));
  FUN_00d50b20();
  return;
code_r0x01e22b83:
  if ((fStack_a4 != g_023dcd08) ||
     (fVar20 = local_b8, fVar21 = fStack_b4, uVar13 = uStack_b0, uVar14 = uStack_ac,
     uStack_b0 = (int)extraout_XMM0_Qb, uStack_ac = (int)((uint64_t)extraout_XMM0_Qb >> 0x20),
     local_b8 = (float)uVar11, fStack_b4 = (float)((uint64_t)uVar11 >> 0x20),
     NAN(fStack_a4) || NAN(g_023dcd08))) {
LAB_01e22ba0:
    fVar20 = local_a8;
    fVar21 = fStack_a4;
    uVar13 = uStack_a0;
    uVar14 = uStack_9c;
    uVar11 = FUN_00d052e0();
    local_b8 = (float)uVar11;
    fStack_b4 = (float)((uint64_t)uVar11 >> 0x20);
    uStack_b0 = (uint32_t)extraout_XMM0_Qb_00;
    uStack_ac = (uint32_t)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
    fVar22 = fVar20;
    fVar23 = fVar21;
    uVar18 = uVar13;
    uVar19 = uVar14;
  }
  goto LAB_01e22b25;
LAB_01e22d64:
  FUN_00274dd0();
  goto LAB_01e22d8b;
}



// ============================================================
// 000c6aa0
// ============================================================
// Function: FUN_000c6aa0
// Address: 000c6aa0
// Size: 1823 bytes
// Class: GNRootView

void FUN_000c6aa0(int64_t *param_1,int64_t *param_2,int64_t *param_3)

{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t *plVar5;
  void *pvVar6;
  void* pVar7;
  int64_t lVar8;
  int64_t this_ptr;
  int64_t lVar9;
  int64_t *plVar10;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
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
  int64_t *local_40;
  char local_38;
  
  plVar10 = *(int64_t **)(this_ptr + 0x158);
  (**(code **)(*plVar10 + 0x368))();
  bVar2 = true;
  if (*(int64_t *)(this_ptr + 0x168) == 0) {
    local_48 = 0;
  }
  else {
    lVar1 = *(int64_t *)(*(int64_t *)(this_ptr + 0x168) + 0x10);
    iVar4 = *(int *)(lVar1 + 0xc);
    if (iVar4 < 1) {
      local_48 = 0;
      bVar2 = true;
    }
    else {
      lVar9 = 0;
      local_a0 = plVar10;
      do {
        lVar8 = *(int64_t *)(lVar1 + 0x10);
        local_48 = *(int64_t *)(lVar8 + lVar9 * 8);
        if (*(int64_t *)(local_48 + 0x308) == 0) {
          FUN_0051b4f0();
          plVar3 = local_40;
          pVar7 = (void*)lVar8;
          plVar10 = (int64_t *)*param_2;
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          lVar8 = local_48;
          if (plVar3 == plVar10) {
            FUN_00d50b00();
            plVar10 = local_a0;
            if (*(int64_t *)(lVar8 + 0x308) == 0) {
              FUN_013fb420();
              pvVar6 = _pthread_getspecific(pVar7);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_00521db0();
              FUN_00757c60();
              pvVar6 = _pthread_getspecific(pVar7);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012caf10();
              local_88 = local_68;
              local_80 = 0;
              if (local_60 == '\0') {
                if (local_68 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_60 = '\0';
              }
              local_80 = '\x01';
              FUN_016cbba0();
              local_98 = local_58;
              local_90 = 0;
              if (local_50 == '\0') {
                if (local_58 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_50 = '\0';
              }
              local_90 = '\x01';
              FUN_0132d960();
              if ((local_90 != '\0') && (local_98 != 0)) {
                FUN_00d50b20();
              }
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
              if ((local_80 != '\0') && (local_88 != 0)) {
                FUN_00d50b20();
              }
              if ((local_60 != '\0') && (local_68 != 0)) {
                FUN_00d50b20();
              }
              if ((local_118 != '\0') && (local_120 != 0)) {
                FUN_00d50b20();
              }
              if ((local_128 != '\0') && (local_130 != 0)) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d403d0();
              lVar1 = g_027ebe30;
              if (g_027ebe30 != 0) {
                FUN_00d50b00();
              }
              FUN_013fb420();
              pvVar6 = _pthread_getspecific(pVar7);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0132d610();
              local_78 = local_58;
              local_70 = 0;
              if (local_50 == '\0') {
                if (local_58 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_50 = '\0';
              }
              local_70 = '\x01';
              local_f8 = '\0';
              local_100 = 0;
              FUN_00d40470(&local_100,&local_78,3,3);
              if ((local_f8 != '\0') && (local_100 != 0)) {
                FUN_00d50b20();
              }
              if ((local_70 != '\0') && (local_78 != 0)) {
                FUN_00d50b20();
              }
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
              if ((local_60 != '\0') && (local_68 != 0)) {
                FUN_00d50b20();
              }
              if (lVar1 != 0) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            plVar5 = (int64_t *)FUN_00e8fc40();
            FUN_00022d50();
            (**(code **)(*plVar5 + 0x18))();
            plVar3 = g_026de560;
            lVar1 = *param_1;
            if ((lVar1 != 0) && (*(int *)(lVar1 + 0xc) != 0)) {
              local_e8 = '\0';
              local_f0 = lVar1;
              if (g_026de560 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              local_40 = plVar3;
              local_38 = '\0';
              FUN_00ca0840();
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar3 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              if ((local_e8 != '\0') && (local_f0 != 0)) {
                FUN_00d50b20();
              }
            }
            plVar3 = g_0270b8f0;
            lVar1 = *param_3;
            if ((lVar1 != 0) && (*(int *)(lVar1 + 0xc) != 0)) {
              local_d8 = '\0';
              local_e0 = lVar1;
              if (g_0270b8f0 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              local_40 = plVar3;
              local_38 = '\0';
              FUN_00ca0840();
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar3 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              if ((local_d8 != '\0') && (local_e0 != 0)) {
                FUN_00d50b20();
              }
            }
            FUN_00d403d0();
            local_d0 = g_026de568;
            if (g_026de568 != 0) {
              FUN_00d50b00();
            }
            local_c8 = '\x01';
            local_c0 = local_48;
            local_b8 = '\0';
            local_a8 = '\0';
            local_b0 = plVar5;
            FUN_00d40470(&local_b0,&local_c0,3,3);
            if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_b8 != '\0') && (local_c0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_c8 != '\0') && (local_d0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00b34cb0();
            plVar3 = local_40;
            if (local_38 == '\0') {
              if (local_40 != (int64_t *)0x0) {
                (**(code **)(*local_40 + 0x10))();
                FUN_00d50b00();
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  (**(code **)(*local_40 + 0x10))();
                  FUN_00d50b20();
                }
                goto LAB_000c6ef1;
              }
            }
            else if (local_40 != (int64_t *)0x0) {
LAB_000c6ef1:
              (**(code **)(*plVar3 + 0x50))();
              (**(code **)(*plVar3 + 0x10))();
              FUN_00d50b20();
            }
            FUN_00d50b20();
            bVar2 = false;
            goto LAB_000c6f17;
          }
          iVar4 = *(int *)(lVar1 + 0xc);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < iVar4);
      local_48 = 0;
      bVar2 = true;
      plVar10 = local_a0;
    }
  }
LAB_000c6f17:
  (**(code **)(*plVar10 + 0x378))();
  if (!bVar2) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01e24a90
// ============================================================
// Function: FUN_01e24a90
// Address: 01e24a90
// Size: 1999 bytes
// Class: GNRootView

void FUN_01e24a90(void)

{
  bool bVar1;
  char cVar2;
  int64_t this_ptr;
  int64_t lVar3;
  int64_t lVar4;
  bool bVar5;
  bool bVar6;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_78;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_00d403d0();
  lVar3 = g_027f33c8;
  if (g_027f33c8 != 0) {
    FUN_00d50b00();
  }
  if (this_ptr != 0) {
    FUN_00d50b00();
  }
  local_d8 = 0;
  local_d0 = '\0';
  FUN_00d40470(&local_d8,&stack0xffffffffffffff58,1,3);
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x20) == 0) {
    return;
  }
  if ((*(int *)(this_ptr + 0xc) != -1) && (*(int *)(this_ptr + 0x10) != -1)) {
    FUN_01e26090();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      if ((*(int *)(this_ptr + 0xc) == -1) || (*(int *)(this_ptr + 0x10) == -1)) {
        local_38 = '\0';
        local_40 = 0;
      }
      else {
        FUN_01e26090();
      }
      cVar2 = FUN_01e26480();
      if (cVar2 == '\0') {
        bVar5 = false;
      }
      else {
        if ((*(int *)(this_ptr + 0xc) == -1) || (*(int *)(this_ptr + 0x10) == -1)) {
          local_58 = '\0';
          local_60 = 0;
        }
        else {
          FUN_01e26090();
        }
        FUN_01e26490();
        bVar5 = local_50 != 0;
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (!bVar5) {
        return;
      }
      if ((*(int *)(this_ptr + 0xc) == -1) || (*(int *)(this_ptr + 0x10) == -1)) {
        local_58 = '\0';
        local_60 = 0;
      }
      else {
        FUN_01e26090();
      }
      FUN_01e26490();
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_01caeba0();
      if (local_40 == 0) {
        local_40 = 0;
        bVar6 = false;
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
        bVar6 = true;
      }
      else {
        bVar6 = true;
      }
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      FUN_01caec40();
      if ((*(int *)(this_ptr + 0xc) == -1) || (*(int *)(this_ptr + 0x10) == -1)) {
        local_58 = '\0';
        local_60 = 0;
LAB_01e2514e:
        local_78 = 0;
      }
      else {
        FUN_01e26090();
        if (local_58 == '\0') {
          if (local_60 == 0) goto LAB_01e2514e;
          FUN_00d50b00();
          local_78 = local_60;
        }
        else {
          local_78 = local_60;
          local_58 = '\0';
        }
      }
      lVar3 = g_027e1388;
      if (g_027e1388 != 0) {
        FUN_00d50b00();
      }
      FUN_00ca0840();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (local_78 != 0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01e251e5;
    }
  }
  if ((int64_t)*(int *)(this_ptr + 0xc) == -1) {
    return;
  }
  if (*(int64_t *)
       (*(int64_t *)(*(int64_t *)(this_ptr + 0x18) + 0x10) +
       (int64_t)*(int *)(this_ptr + 0xc) * 8) == 0) {
    return;
  }
  FUN_00d50b00();
  FUN_00d50b20();
  if ((int64_t)*(int *)(this_ptr + 0xc) == -1) {
    lVar3 = 0;
    bVar5 = true;
  }
  else {
    lVar3 = *(int64_t *)
             (*(int64_t *)(*(int64_t *)(this_ptr + 0x18) + 0x10) +
             (int64_t)*(int *)(this_ptr + 0xc) * 8);
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_00d50b00();
    }
    bVar5 = false;
  }
  cVar2 = FUN_01e26480();
  if (cVar2 == '\0') {
    bVar6 = false;
    if (!bVar5 && lVar3 != 0) goto LAB_01e24e89;
  }
  else {
    if ((int64_t)*(int *)(this_ptr + 0xc) == -1) {
      lVar4 = 0;
      bVar1 = true;
    }
    else {
      lVar4 = *(int64_t *)
               (*(int64_t *)(*(int64_t *)(this_ptr + 0x18) + 0x10) +
               (int64_t)*(int *)(this_ptr + 0xc) * 8);
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        FUN_00d50b00();
      }
      bVar1 = false;
    }
    FUN_01e26490();
    bVar6 = local_40 != 0;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (!bVar1 && lVar4 != 0) {
      FUN_00d50b20();
    }
    if (!bVar5 && lVar3 != 0) {
LAB_01e24e89:
      FUN_00d50b20();
    }
  }
  if (!bVar6) {
    return;
  }
  if ((int64_t)*(int *)(this_ptr + 0xc) == -1) {
    lVar3 = 0;
    bVar5 = true;
  }
  else {
    lVar3 = *(int64_t *)
             (*(int64_t *)(*(int64_t *)(this_ptr + 0x18) + 0x10) +
             (int64_t)*(int *)(this_ptr + 0xc) * 8);
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_00d50b00();
    }
    bVar5 = false;
  }
  FUN_01e26490();
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  FUN_01caeba0();
  if (local_40 == 0) {
    local_40 = 0;
    bVar6 = false;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    bVar6 = true;
  }
  else {
    bVar6 = true;
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar5 && lVar3 != 0) {
    FUN_00d50b20();
  }
  FUN_01caec40();
  lVar3 = g_027e1388;
  if ((int64_t)*(int *)(this_ptr + 0xc) == -1) {
    local_b8 = 0;
  }
  else {
    local_b8 = *(int64_t *)
                (*(int64_t *)(*(int64_t *)(this_ptr + 0x18) + 0x10) +
                (int64_t)*(int *)(this_ptr + 0xc) * 8);
    if (local_b8 != 0) {
      FUN_00d50b00();
      lVar3 = g_027e1388;
    }
  }
  local_b0 = '\x01';
  g_027e1388 = lVar3;
  if (lVar3 != 0) {
    local_b0 = '\x01';
    FUN_00d50b00();
  }
  FUN_00ca0840();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
LAB_01e251e5:
  if (local_40 != 0) {
    local_c0 = '\0';
    local_c8 = local_40;
    (**(code **)(**(int64_t **)(this_ptr + 0x20) + 0x3b8))();
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if (bVar6) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 01e22190
// ============================================================
// Function: FUN_01e22190
// Address: 01e22190
// Size: 1166 bytes
// Class: GNRootView

void FUN_01e22190(uint64_t param_1)

{
  void*puVar1;
  uint uVar2;
  int64_t lVar3;
  uint8_t auVar4 [16];
  uint64_t uVar5;
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  bool bVar8;
  bool bVar9;
  int iVar10;
  void*puVar11;
  int64_t lVar12;
  int64_t *plVar13;
  uint64_t uVar14;
  int64_t this_ptr;
  float *pfVar15;
  int iVar16;
  uint64_t unaff_R15;
  uint32_t uVar17;
  uint32_t extraout_XMM0_Da;
  float fVar18;
  uint32_t in_XMM0_Dc;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dc_01;
  uint32_t in_XMM0_Dd;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  uint32_t extraout_XMM0_Dd_01;
  uint8_t local_b8 [8];
  float fStack_b0;
  float fStack_ac;
  uint8_t local_a8 [16];
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  uint32_t local_74;
  int64_t *local_70;
  char local_68;
  float local_54;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  
  uVar17 = FUN_01cb4790();
  if (local_50 == (int64_t *)0x0) {
    local_74 = (uint32_t)CONCAT71((int7)((uint64_t)unaff_R15 >> 8),1);
    plVar13 = (int64_t *)0x0;
  }
  else {
    plVar13 = local_50;
    if (local_48 == '\0') {
      uVar17 = FUN_00d50b00();
      local_74 = 0;
    }
    else {
      local_74 = 0;
    }
  }
  local_80 = plVar13;
  if (*(int64_t *)(this_ptr + 0x168) == 0) {
    puVar11 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar11 = &g_025683c0;
    (*g_025683d8)();
    FUN_00c92170();
    uVar17 = FUN_00c92160();
    puVar1 = *(void**)(this_ptr + 0x168);
    if (puVar1 == puVar11) {
      uVar17 = FUN_00d50b20();
    }
    else {
      *(void**)(this_ptr + 0x168) = puVar11;
      if (puVar1 != (void*)0x0) {
        uVar17 = FUN_00d50b20();
      }
    }
  }
  else {
    uVar17 = FUN_00c8e340(uVar17,0);
  }
  local_a8._0_8_ = (**(code **)(*plVar13 + 0x3c8))(uVar17,0);
  local_a8._8_4_ = extraout_XMM0_Dc;
  local_a8._12_4_ = extraout_XMM0_Dd;
  uVar5 = (**(code **)(*plVar13 + 0x3c8))((int)local_a8._0_8_,1);
  auVar4._8_4_ = extraout_XMM0_Dc_00;
  auVar4._0_8_ = uVar5;
  auVar4._12_4_ = extraout_XMM0_Dd_00;
  local_a8 = insertps(local_a8,auVar4,0x10);
  local_54 = g_023b169c;
  bVar8 = false;
  local_40 = (int64_t *)0x0;
  iVar16 = 0;
  do {
    iVar10 = FUN_01d5b230();
    uVar17 = local_74;
    plVar13 = local_80;
    if (iVar10 <= iVar16) {
      uVar2 = *(uint *)(*(int64_t *)(this_ptr + 0x168) + 0x18);
      if (0xf < (int)uVar2) {
        uVar2 = uVar2 >> 4;
        lVar3 = *(int64_t *)(*(int64_t *)(this_ptr + 0x168) + 0x10);
        if ((uint64_t)uVar2 - 1 < 3) {
          uVar14 = 0;
        }
        else {
          pfVar15 = (float *)(lVar3 + 0x38);
          uVar14 = 0;
          do {
            pfVar15[-0xc] = local_54;
            pfVar15[-8] = local_54;
            pfVar15[-4] = local_54;
            *pfVar15 = local_54;
            uVar14 = uVar14 + 4;
            pfVar15 = pfVar15 + 0x10;
          } while ((uVar2 & 0xfffffffc) != uVar14);
        }
        if ((uint64_t)(uVar2 & 3) != 0) {
          lVar12 = 0;
          do {
            *(float *)(lVar3 + uVar14 * 0x10 + 8 + lVar12) = local_54;
            lVar12 = lVar12 + 0x10;
          } while ((uint64_t)(uVar2 & 3) << 4 != lVar12);
        }
      }
      if ((bVar8) && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((char)uVar17 == '\0' && plVar13 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      return;
    }
    FUN_01d5b240(extraout_XMM0_Da,iVar16);
    if (local_50 == local_40) {
      if ((bVar8) || (local_50 == (int64_t *)0x0)) {
joined_r0x01e22360:
        plVar13 = local_40;
        bVar9 = bVar8;
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar13 = local_40;
        bVar9 = true;
        if (local_48 == '\0') {
          FUN_00d50b00();
          goto LAB_01e22348;
        }
      }
    }
    else {
      plVar13 = local_50;
      if (local_48 == '\0') {
        if (local_50 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar9 = true;
        if ((bVar8) && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
          local_40 = local_50;
LAB_01e22348:
          bVar8 = true;
          goto joined_r0x01e22360;
        }
      }
      else {
        bVar9 = true;
        if ((bVar8) && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    bVar8 = bVar9;
    FUN_01d65230();
    local_68 = 0;
    if (local_48 == '\0') {
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_68 = '\x01';
    local_70 = local_50;
    local_90 = *(int64_t *)(this_ptr + 0x158);
    local_88 = '\0';
    local_b8 = (uint8_t  [8])
               (**(code **)(*local_80 + 0x5d0))(*(void*)(this_ptr + 0x178),&local_90);
    fStack_b0 = (float)extraout_XMM0_Dc_01;
    fStack_ac = (float)extraout_XMM0_Dd_01;
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    auVar7._8_4_ = in_XMM0_Dc;
    auVar7._0_8_ = param_1;
    auVar7._12_4_ = in_XMM0_Dd;
    if (SUB84(local_b8,0) < (float)param_1) {
      _local_b8 = blendps(_local_b8,auVar7,1);
    }
    lVar3 = *(int64_t *)(this_ptr + 0x168);
    iVar10 = *(int *)(lVar3 + 0x18);
    FUN_00c8e340((float)param_1,1);
    fVar18 = (float)local_b8._0_4_;
    if ((float)local_b8._0_4_ <= local_54) {
      fVar18 = local_54;
    }
    puVar1 = (void*)(*(int64_t *)(lVar3 + 0x10) + (int64_t)iVar10);
    *puVar1 = local_a8._0_8_;
    *(void*)(puVar1 + 1) = local_b8._0_4_;
    *(void*)((int64_t)puVar1 + 0xc) = local_b8._4_4_;
    auVar6._4_4_ = (float)local_b8._4_4_ + local_a8._4_4_;
    auVar6._0_4_ = (float)local_b8._0_4_ + local_a8._0_4_;
    auVar6._8_4_ = fStack_b0 + local_a8._8_4_;
    auVar6._12_4_ = fStack_ac + local_a8._12_4_;
    local_a8 = blendps(local_a8,auVar6,2);
    iVar16 = iVar16 + 1;
    local_54 = fVar18;
    local_40 = plVar13;
  } while( true );
}



// ============================================================
// 01d83990
// ============================================================
// Function: FUN_01d83990
// Address: 01d83990
// Size: 1019 bytes
// Class: GNRootView
// String references:
//   "GNRootView"

void FUN_01d83990(void)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t *this_ptr;
  int64_t lVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *plVar9;
  int64_t *local_50;
  char local_48;
  
  plVar9 = this_ptr;
  if (this_ptr == (int64_t *)0x0) {
    bVar1 = false;
    cVar3 = '\0';
    lVar6 = 0;
    plVar7 = (int64_t *)0x0;
  }
  else {
    FUN_00d50b00();
    bVar1 = false;
    plVar8 = (int64_t *)0x0;
    do {
      if ((g_026e85e0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        g_027f4bd8 = FUN_0006d940();
        g_027f4bc0 = "GNRootView";
        g_027f4bc8 = 0x1d0;
        g_027f4bd0 = FUN_00097da0;
        g_027f4be0 = 0;
        ram_00000000027f4be8 = 0;
        g_027f4bf0 = 0;
        ram_00000000027f4bf8 = 0;
        g_027f4c00 = 0;
        ram_00000000027f4c08 = 0;
        g_027f4c10 = 0;
        ram_00000000027f4c18 = 0;
        g_027f4c20 = 0;
        ram_00000000027f4c28 = 0;
        g_027f4c30 = 0;
        ram_00000000027f4c38 = 0;
        g_027f4c40 = 0;
        ram_00000000027f4c48 = 0;
        g_027f4c50 = 0;
        ram_00000000027f4c58 = 0;
        g_027f4c60 = 0;
        ram_00000000027f4c68 = 0;
        g_027f4c70 = 0;
        ram_00000000027f4c78 = 0;
        g_027f4c80 = 0;
        ___cxa_guard_release();
      }
      (**(code **)(*plVar9 + 0x360))();
      cVar3 = FUN_00e85ea0();
      plVar5 = (int64_t *)&stack0xffffffffffffffa0;
      if (cVar3 == '\0') {
        plVar5 = &g_02802688;
      }
      lVar6 = *plVar5;
      plVar7 = plVar8;
      if (lVar6 != 0) {
        cVar3 = (char)plVar5[1];
        if (cVar3 != '\0') {
          FUN_00d50b00();
        }
        FUN_01d8c6e0();
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_50 == (int64_t *)0x0) goto LAB_01d83ccb;
        FUN_01d8c6e0();
        if (plVar8 == local_50) {
          bVar2 = bVar1;
          if ((bVar1) || (plVar8 == (int64_t *)0x0)) goto joined_r0x01d83afc;
          bVar2 = true;
          if (local_48 == '\0') {
            FUN_00d50b00();
            goto LAB_01d83b20;
          }
        }
        else if (local_48 == '\0') {
          if (local_50 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          plVar7 = local_50;
          if ((bVar1) && (plVar8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_01d83b20:
          plVar8 = plVar7;
          bVar2 = true;
joined_r0x01d83afc:
          plVar7 = plVar8;
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar2 = true;
          plVar7 = local_50;
          if ((bVar1) && (plVar8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        bVar1 = bVar2;
        if (cVar3 != '\0') {
          FUN_00d50b20();
        }
      }
      (**(code **)(*plVar9 + 0x370))();
      if (local_50 == plVar9) {
LAB_01d83bda:
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar9 = local_50;
        if (local_48 == '\0') {
          if (local_50 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
          goto LAB_01d83bda;
        }
        FUN_00d50b20();
      }
      plVar8 = plVar7;
    } while (plVar9 != (int64_t *)0x0);
    cVar3 = '\0';
    lVar6 = 0;
  }
LAB_01d83ccb:
  local_68 = 0;
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  local_78 = '\0';
  local_80 = plVar7;
  local_70 = this_ptr;
  FUN_01e57a30(&local_80,&local_70);
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar1) && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar3 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  if (plVar9 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 000c67f0
// ============================================================
// Function: FUN_000c67f0
// Address: 000c67f0
// Size: 536 bytes
// Class: GNRootView

uint64_t FUN_000c67f0(uint64_t param_1,int64_t *param_2,void*param_3,void*param_4)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  void* pVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t this_ptr;
  int64_t lVar9;
  void*local_res8;
  char *local_res10;
  int64_t *local_res18;
  int64_t local_40;
  char local_38;
  
  plVar1 = *(int64_t **)(this_ptr + 0x158);
  (**(code **)(*plVar1 + 0x368))();
  uVar8 = CONCAT71((int7)((uint64_t)this_ptr >> 8),1);
  if (*(int64_t *)(this_ptr + 0x168) != 0) {
    lVar2 = *(int64_t *)(*(int64_t *)(this_ptr + 0x168) + 0x10);
    iVar4 = *(int *)(lVar2 + 0xc);
    if (0 < iVar4) {
      lVar9 = 0;
      do {
        lVar7 = *(int64_t *)(lVar2 + 0x10);
        if (*(int64_t *)(*(int64_t *)(lVar7 + lVar9 * 8) + 0x308) == 0) {
          FUN_0051b4f0();
          pVar6 = (void*)lVar7;
          lVar7 = *param_2;
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 == lVar7) {
            FUN_00d50b00();
            if (*local_res10 == '\0') {
              cVar3 = FUN_0052f210();
              *local_res10 = cVar3;
            }
            *param_3 = 1;
            *param_4 = 0;
            *local_res8 = 0;
            pvVar5 = _pthread_getspecific(pVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e7fb0();
            lVar2 = *local_res18;
            if (lVar2 == local_40) {
              if (((char)local_res18[1] == '\0') && (local_40 != 0)) {
                if (local_38 != '\0') goto LAB_000c6985;
                FUN_00d50b00();
                goto LAB_000c69c1;
              }
LAB_000c69c5:
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              lVar9 = local_res18[1];
              if (local_38 == '\0') {
                if (local_40 != 0) {
                  FUN_00d50b00();
                }
                *local_res18 = local_40;
                if (((char)lVar9 != '\0') && (lVar2 != 0)) {
                  FUN_00d50b20();
                }
LAB_000c69c1:
                *(void*)(local_res18 + 1) = 1;
                goto LAB_000c69c5;
              }
              *local_res18 = local_40;
              if (((char)lVar9 != '\0') && (lVar2 != 0)) {
                FUN_00d50b20();
              }
LAB_000c6985:
              *(void*)(local_res18 + 1) = 1;
            }
            uVar8 = 0;
            goto LAB_000c69de;
          }
          iVar4 = *(int *)(lVar2 + 0xc);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < iVar4);
      uVar8 = CONCAT71((int7)((uint64_t)local_res10 >> 8),1);
    }
  }
LAB_000c69de:
  (**(code **)(*plVar1 + 0x378))();
  if ((char)uVar8 == '\0') {
    FUN_00d50b20();
  }
  return (uVar8 ^ 1) & 0xffffffff;
}



// ============================================================
// 000c4430
// ============================================================
// Function: FUN_000c4430
// Address: 000c4430
// Size: 647 bytes
// Class: GNRootView

void FUN_000c4430(void)

{
  int64_t *plVar1;
  char cVar2;
  char *pcVar3;
  void*arg1;
  int64_t *this_ptr;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  int64_t *local_40;
  char local_38 [8];
  
  FUN_00ca1380();
  plVar1 = local_40;
  local_50 = local_38[0];
  pcVar3 = local_38;
  if (local_38[0] == '\0') {
    pcVar3 = &local_50;
  }
  *pcVar3 = '\0';
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_40 = (int64_t *)*arg1;
  local_38[0] = '\0';
  cVar2 = FUN_00d23d70();
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (plVar1 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    if (this_ptr[0x2a] != 0) {
      FUN_00ca1380();
      plVar1 = local_40;
      pcVar3 = local_38;
      if (local_38[0] == '\0') {
        pcVar3 = &local_50;
      }
      local_50 = local_38[0];
      *pcVar3 = '\0';
      if ((local_38[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_40 = (int64_t *)*arg1;
      local_38[0] = '\0';
      cVar2 = FUN_00d24090();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar2 != '\0') {
        local_40 = (int64_t *)*arg1;
        local_38[0] = '\0';
        FUN_00ca1990();
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    (**(code **)(*this_ptr + 0x720))();
    if (CONCAT71(uStack_4f,local_50) == 0) {
      cVar2 = '\0';
    }
    else {
      (**(code **)(*this_ptr + 0x720))();
      (**(code **)(*local_78 + 0x618))();
      local_40 = (int64_t *)*arg1;
      local_38[0] = '\0';
      cVar2 = FUN_00d24090();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      (**(code **)(*this_ptr + 0x720))();
      (**(code **)(*local_40 + 0x5f8))();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}



// ============================================================
// 000c6250
// ============================================================
// Function: FUN_000c6250
// Address: 000c6250
// Size: 615 bytes
// Class: GNRootView
// String references:
//   "Melodyne #%I"

void* FUN_000c6250(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  bool bVar4;
  char cVar5;
  void *pvVar6;
  void* pVar7;
  int64_t arg1;
  void*this_ptr;
  int64_t *plVar8;
  int64_t lVar9;
  int64_t *local_40;
  char local_38;
  
  plVar1 = *(int64_t **)(arg1 + 0x158);
  (**(code **)(*plVar1 + 0x368))();
  bVar4 = false;
  do {
    FUN_00d8cb40();
    if (local_40 == (int64_t *)0x0) {
      plVar8 = (int64_t *)0x0;
    }
    else {
      bVar4 = true;
      plVar8 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
    if (*(int64_t *)(arg1 + 0x168) != 0) {
      lVar2 = *(int64_t *)(*(int64_t *)(arg1 + 0x168) + 0x10);
      pVar7 = *(void* *)(lVar2 + 0xc);
      if (0 < (int)pVar7) {
        lVar9 = 0;
        do {
          lVar3 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + lVar9 * 8);
          if ((*(int64_t *)(lVar3 + 0x308) == 0) && (*param_2 != lVar3)) {
            FUN_0051be00();
            pvVar6 = _pthread_getspecific(pVar7);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e6000();
            if (local_38 == '\0') {
              if (local_40 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            cVar5 = (**(code **)(*plVar8 + 0x50))();
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            if (cVar5 != '\0') {
              if (bVar4) {
                FUN_00d50b20();
                bVar4 = false;
                plVar8 = (int64_t *)0x0;
              }
              else {
                bVar4 = false;
                plVar8 = (int64_t *)0x0;
              }
              break;
            }
            pVar7 = *(void* *)(lVar2 + 0xc);
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 < (int)pVar7);
      }
    }
    if (plVar8 != (int64_t *)0x0) {
      *(void*)(this_ptr + 1) = 0;
      if (!bVar4) {
        FUN_00d50b00();
      }
      *this_ptr = plVar8;
      *(void*)(this_ptr + 1) = 1;
      (**(code **)(*plVar1 + 0x378))();
      return this_ptr;
    }
  } while( true );
}



// ============================================================
// 001adcf0
// ============================================================
// Function: FUN_001adcf0
// Address: 001adcf0
// Size: 2812 bytes
// Class: GNRootView
// String references:
//   "GNRootView"

void FUN_001adcf0(void)

{
  int iVar1;
  int64_t arg1;
  void*this_ptr;
  
  FUN_000a32b0();
  *this_ptr = &g_0268b6d0;
  this_ptr[2] = &g_0268c0a8;
  FUN_001ae9c0();
  FUN_001aecb0();
  FUN_001aefa0();
  FUN_001af280();
  *(void*)(this_ptr + 0x2b) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f4c7b == '\0') {
    FUN_001af560();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x159) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f4c7b == '\0') {
    FUN_001af6d0();
    FUN_00e87980();
  }
  FUN_001af840();
  FUN_001afb30();
  FUN_001afdb0();
  FUN_001b00a0();
  this_ptr[0x30] = 0;
  // [STATIC_INIT: property registration]
  if (g_027f4c7b == '\0') {
    FUN_001b0390();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x31) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f4c7b == '\0') {
    FUN_001b0500();
    FUN_00e87980();
  }
  FUN_001b0670();
  FUN_001b0960();
  *(void*)(this_ptr + 0x34) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f4c7b == '\0') {
    FUN_001b0c50();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1a1) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f4c7b == '\0') {
    FUN_001b0dc0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1a2) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f4c7b == '\0') {
    FUN_001b0f30();
    FUN_00e87980();
  }
  FUN_001b10a0();
  FUN_001b1390();
  FUN_001b1610();
  this_ptr[0x38] = *(void*)(arg1 + 0x1c0);
  *(void*)(this_ptr + 0x39) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f4c7b == '\0') {
    FUN_001b1900();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1c9) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f4c7b == '\0') {
    FUN_001b1a70();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1ca) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f4c7b == '\0') {
    FUN_001b1be0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1cc) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f4c7b == '\0') {
    FUN_001b1d50();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 000c7760
// ============================================================
// Function: FUN_000c7760
// Address: 000c7760
// Size: 521 bytes
// Class: GNRootView

uint64_t FUN_000c7760(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  void *pvVar5;
  void* pVar6;
  int64_t lVar7;
  int64_t this_ptr;
  uint64_t unaff_R13;
  uint64_t uVar8;
  int64_t lVar9;
  int64_t *local_40;
  char local_38;
  
  plVar2 = *(int64_t **)(this_ptr + 0x158);
  (**(code **)(*plVar2 + 0x368))();
  uVar8 = CONCAT71((int7)((uint64_t)unaff_R13 >> 8),1);
  if (*(int64_t *)(this_ptr + 0x168) != 0) {
    lVar3 = *(int64_t *)(*(int64_t *)(this_ptr + 0x168) + 0x10);
    lVar9 = -1;
LAB_000c77ac:
    do {
      lVar7 = (int64_t)(int)lVar9;
      do {
        lVar9 = lVar7 + 1;
        if (*(int *)(lVar3 + 0xc) <= lVar9) goto LAB_000c794b;
        lVar1 = lVar7 * 8;
        lVar7 = lVar9;
      } while (*(int64_t *)(*(int64_t *)(*(int64_t *)(lVar3 + 0x10) + 8 + lVar1) + 0x308) != 0);
      FUN_0051be00();
      pVar6 = (void*)lVar7;
      if (local_38 == '\0') goto LAB_000c77fd;
    } while (local_40 == (int64_t *)0x0);
    goto LAB_000c7820;
  }
LAB_000c794b:
  (**(code **)(*plVar2 + 0x378))();
  return uVar8 & 0xffffffff;
LAB_000c77fd:
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b00();
LAB_000c7820:
    FUN_004f9670();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if (local_40 != (int64_t *)0x0) {
      pvVar5 = _pthread_getspecific(pVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_004fae50();
      cVar4 = (**(code **)(*local_40 + 0x50))();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (cVar4 != '\0') goto LAB_000c7940;
    }
    FUN_00d50b20();
    uVar8 = CONCAT71((int7)((uint64_t)local_40 >> 8),1);
  }
  goto LAB_000c77ac;
LAB_000c7940:
  FUN_00d50b20();
  uVar8 = 0;
  goto LAB_000c794b;
}



// ============================================================
// 000c3e50
// ============================================================
// Function: FUN_000c3e50
// Address: 000c3e50
// Size: 543 bytes
// Class: GNRootView

int64_t * FUN_000c3e50(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar4;
  int64_t local_58;
  char local_50;
  int64_t local_40;
  char local_38;
  
  if ((*param_2 == 0) || (*(int *)(*param_2 + 0xc) == 0)) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    FUN_000c41f0();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    plVar1 = *(int64_t **)(arg1 + 0x158);
    (**(code **)(*plVar1 + 0x368))();
    if ((*(int64_t *)(arg1 + 0x168) != 0) &&
       (lVar2 = *(int64_t *)(*(int64_t *)(arg1 + 0x168) + 0x10), 0 < *(int *)(lVar2 + 0xc)))
    {
      lVar4 = 0;
      do {
        FUN_0051be00();
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        cVar3 = FUN_00d24090();
        if (local_58 != 0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') {
          FUN_0051b590();
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          FUN_00d235a0();
          if (local_58 != 0) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if (*(int *)(local_40 + 0xc) == *(int *)(*param_2 + 0xc)) break;
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(lVar2 + 0xc));
    }
    *this_ptr = local_40;
    *(void*)(this_ptr + 1) = 1;
    (**(code **)(*plVar1 + 0x378))();
  }
  return this_ptr;
}

