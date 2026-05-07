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

