// ===================================================================
// GNUIDesignerDoc — Complete reconstructed pseudocode
// 5 functions
// ===================================================================

// Registered properties (6):
//                   _localizer
//                   _connections
//                   _objectNames
//                   _objectCustomClassNames
//                   _objectsToRename
//                   _objectCustomAttributes


// ============================================================
// 01e2b0c0
// ============================================================
// Function: FUN_01e2b0c0
// Address: 01e2b0c0
// Size: 4000 bytes
// Class: GNUIDesignerDoc
// String references:
//   "GNUIDesignerDoc"
// === GNUIDesignerDoc properties ===
//                   _localizer
//                   _connections
//                   _objectNames
//                   _objectCustomClassNames
//                   _objectsToRename
//                   _objectCustomAttributes


bool FUN_01e2b0c0(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  void*puVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  char *pcVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int64_t *arg1;
  int64_t this_ptr;
  uint uVar10;
  int64_t lVar11;
  int64_t **pplVar12;
  bool bVar13;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar14;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  int64_t local_1f0;
  uint8_t local_1e8;
  int64_t *local_1e0;
  uint8_t local_1d8;
  int64_t local_1d0;
  uint8_t local_1c8;
  int64_t *local_1c0;
  uint8_t local_1b8;
  int64_t local_1b0;
  uint8_t local_1a8;
  uint64_t local_1a0;
  int64_t local_198;
  char local_190;
  int64_t local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t *local_168;
  char local_160;
  int64_t *local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t local_b0;
  int64_t *local_a8;
  uint64_t local_a0;
  int64_t local_98;
  char local_90;
  void*local_88;
  int64_t *local_80;
  int64_t *local_70;
  char local_68;
  undefined7 uStack_67;
  char local_60;
  char local_58 [8];
  uint64_t local_50;
  int64_t *local_40;
  char local_38 [8];
  
  local_80 = param_2;
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  local_88 = puVar4;
  (*g_02572370)();
  lVar11 = *arg1;
  lVar1 = *(int64_t *)(this_ptr + 0x40);
  if (lVar1 != lVar11) {
    if (lVar11 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0x40) = lVar11;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*(int64_t *)*arg1 + 0x3f0))();
  local_a8 = local_40;
  plVar5 = local_40;
  if ((((local_38[0] == '\0') && (local_40 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), plVar5 = local_a8, local_38[0] != '\0')) && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_38[0] = '\0';
  local_40 = plVar5;
  FUN_00d21140();
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*local_a8 + 0x368))();
  local_198 = g_027f3820;
  if (g_027f3820 != 0) {
    FUN_00d50b00();
  }
  local_190 = '\x01';
  cVar2 = FUN_00d8f400();
  uVar14 = extraout_XMM0_Da;
  if ((local_190 != '\0') && (local_198 != 0)) {
    uVar14 = FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar14 = FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    (**(code **)(*local_a8 + 0x3f0))();
    plVar5 = (int64_t *)CONCAT71(uStack_67,local_68);
    if (local_60 == '\0') {
      if (plVar5 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    local_38[0] = '\0';
    local_40 = plVar5;
    uVar14 = FUN_00d21140();
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      uVar14 = FUN_00d50b20();
    }
    if (plVar5 != (int64_t *)0x0) {
      uVar14 = FUN_00d50b20();
    }
    if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
      uVar14 = FUN_00d50b20();
    }
  }
  uVar10 = *(uint *)((int64_t)local_88 + 0xc);
  if (0 < (int)uVar10) {
    lVar11 = (uint64_t)uVar10 + 1;
    do {
      uVar10 = uVar10 - 1;
      FUN_01f27fe0();
      lVar1 = *(int64_t *)(local_88[2] + (uint64_t)uVar10 * 8);
      local_110 = 0;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_110 = '\x01';
      local_118 = lVar1;
      uVar14 = FUN_01f42b10();
      if ((local_110 != '\0') && (local_118 != 0)) {
        uVar14 = FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        uVar14 = FUN_00d50b20();
      }
      lVar11 = lVar11 + -1;
    } while (1 < lVar11);
  }
  plVar5 = (int64_t *)*local_80;
  plVar6 = *(int64_t **)(this_ptr + 0x28);
  if (plVar6 != plVar5) {
    if (plVar5 != (int64_t *)0x0) {
      uVar14 = FUN_00d50b00();
    }
    *(int64_t **)(this_ptr + 0x28) = plVar5;
    if (plVar6 != (int64_t *)0x0) {
      uVar14 = FUN_00d50b20();
    }
  }
  if (g_028b95b0 == 0) {
LAB_01e2b3fe:
    local_188 = *arg1;
    local_180 = '\0';
    uVar14 = FUN_00d17c40();
    local_70 = local_40;
    if (local_40 == (int64_t *)0x0) {
      local_70 = (int64_t *)0x0;
      local_a0 = 0;
    }
    else if (local_38[0] == '\0') {
      uVar8 = FUN_00d50b00();
      local_a0 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
      uVar14 = extraout_XMM0_Da_00;
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        uVar14 = FUN_00d50b20();
      }
    }
    else {
      local_38[0] = '\0';
      local_a0 = CONCAT71((int7)((uint64_t)local_40 >> 8),1);
    }
    if ((local_180 != '\0') && (local_188 != 0)) {
      uVar14 = FUN_00d50b20();
    }
    if (g_028b95b0 != 0) {
      local_1e0 = local_70;
      local_1d8 = 0;
      local_1d0 = *arg1;
      local_1c8 = 0;
      FUN_01e29660(uVar14,&local_1d0);
    }
    if (local_70 == (int64_t *)0x0) {
      plVar6 = (int64_t *)FUN_00e8fc40();
      FUN_000649c0();
      uVar14 = (**(code **)(*plVar6 + 0x18))();
      local_178 = *arg1;
      local_170 = '\0';
      uVar14 = (**(code **)(*plVar6 + 0x610))(uVar14,&local_178);
      local_70 = local_40;
      if (local_40 == (int64_t *)0x0) {
        local_70 = (int64_t *)0x0;
joined_r0x01e2b561:
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          uVar14 = FUN_00d50b20();
        }
      }
      else {
        if (local_38[0] == '\0') {
          uVar8 = FUN_00d50b00();
          local_a0 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
          uVar14 = extraout_XMM0_Da_01;
          goto joined_r0x01e2b561;
        }
        local_38[0] = '\0';
        local_a0 = CONCAT71((int7)((uint64_t)local_40 >> 8),1);
      }
      if ((local_170 != '\0') && (local_178 != 0)) {
        uVar14 = FUN_00d50b20();
      }
      if (g_028b95b0 != 0) {
        local_1c0 = local_70;
        local_1b8 = 0;
        local_1b0 = *arg1;
        local_1a8 = 0;
        FUN_01e29660(uVar14,&local_1b0);
      }
      FUN_00d50b20();
    }
  }
  else {
    local_1f0 = *arg1;
    local_1e8 = 0;
    FUN_01e29580(uVar14,&local_1f0);
    local_70 = local_40;
    if (local_40 == (int64_t *)0x0) goto LAB_01e2b3fe;
    plVar5 = local_40;
    if (local_38[0] == '\0') {
      plVar5 = (int64_t *)FUN_00d50b00();
    }
    local_a0 = CONCAT71((int7)((uint64_t)plVar5 >> 8),1);
  }
  uVar10 = (uint)plVar6;
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_0004b090();
  (**(code **)(*plVar5 + 0x18))();
  local_80 = plVar5;
  FUN_00d1fc80();
  local_100 = 0;
  (**(code **)(*(int64_t *)(this_ptr + 0x10) + 0x10))();
  FUN_00d50b00();
  local_100 = '\x01';
  local_108 = (int64_t *)(this_ptr + 0x10);
  FUN_00d1fc70();
  if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
    (**(code **)(*local_108 + 0x10))();
    FUN_00d50b20();
  }
  (**(code **)(*local_80 + 0x5e0))();
  uVar14 = FUN_00d46300();
  local_d0 = local_98;
  local_c8 = 0;
  plVar5 = g_027f3828;
  if (local_90 == '\0') {
    if (local_98 != 0) {
      uVar14 = FUN_00d50b00();
      plVar5 = g_027f3828;
    }
  }
  else {
    local_90 = '\0';
  }
  local_c8 = '\x01';
  g_027f3828 = plVar5;
  if (plVar5 != (int64_t *)0x0) {
    local_c8 = '\x01';
    uVar14 = FUN_00d50b00();
  }
  local_38[0] = '\0';
  local_40 = plVar5;
  FUN_00ca0840(uVar14,&local_40);
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*local_80 + 0x5e0))();
  local_f0 = 0;
  uVar14 = FUN_00d50b00();
  plVar5 = g_027f3830;
  local_f0 = '\x01';
  local_f8 = this_ptr;
  if (g_027f3830 != (int64_t *)0x0) {
    uVar14 = FUN_00d50b00();
  }
  local_40 = plVar5;
  local_38[0] = '\0';
  uVar14 = FUN_00ca0840(uVar14,&local_40);
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar14 = FUN_00d50b20();
  }
  if (plVar5 != (int64_t *)0x0) {
    uVar14 = FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    uVar14 = FUN_00d50b20();
  }
  if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
    uVar14 = FUN_00d50b20();
  }
  local_168 = local_70;
  local_160 = '\0';
  pplVar12 = &local_40;
  FUN_00d18390(uVar14,&local_168);
  plVar5 = local_40;
  if ((g_026f4460 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_026f43b0 = FUN_00d4fe50();
    g_026f4398 = "GNUIDesignerDoc";
    g_026f43a0 = 0x60;
    g_026f43a8 = FUN_00205ef0;
    g_026f43b8 = 0;
    ram_00000000026f43c0 = 0;
    g_026f43c8 = 0;
    ram_00000000026f43d0 = 0;
    g_026f43d8 = 0;
    ram_00000000026f43e0 = 0;
    g_026f43e8 = 0;
    ram_00000000026f43f0 = 0;
    g_026f43f8 = 0;
    ram_00000000026f4400 = 0;
    g_026f4408 = 0;
    ram_00000000026f4410 = 0;
    g_026f4418 = 0;
    ram_00000000026f4420 = 0;
    g_026f4428 = 0;
    ram_00000000026f4430 = 0;
    g_026f4438 = 0;
    ram_00000000026f4440 = 0;
    g_026f4448 = 0;
    ram_00000000026f4450 = 0;
    g_026f4458 = 0;
    ___cxa_guard_release();
  }
  if (plVar5 == (int64_t *)0x0) {
LAB_01e2b8a7:
    pplVar12 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01e2b8a7;
  }
  plVar6 = *(int64_t **)(this_ptr + 0x18);
  plVar5 = *pplVar12;
  if (plVar6 != plVar5) {
    if (*(char *)(pplVar12 + 1) == '\0') {
      if (plVar5 == (int64_t *)0x0) {
        *(void*)(this_ptr + 0x18) = 0;
      }
      else {
        FUN_00d50b00();
        plVar6 = *(int64_t **)(this_ptr + 0x18);
        *(int64_t **)(this_ptr + 0x18) = *pplVar12;
      }
    }
    else {
      *(void*)(pplVar12 + 1) = 0;
      *(int64_t **)(this_ptr + 0x18) = plVar5;
    }
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x18) != 0) {
    FUN_01e2ce50();
    FUN_00d1fc90();
    plVar5 = local_40;
    if ((((local_38[0] == '\0') && (local_40 != (int64_t *)0x0)) &&
        (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar10 = *(uint *)((int64_t)plVar5 + 0xc);
    if (0 < (int)uVar10) {
      uVar9 = 0;
      do {
        local_158 = local_80;
        local_150 = '\0';
        (**(code **)(**(int64_t **)(plVar5[2] + uVar9 * 8) + 0x138))();
        if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        uVar9 = uVar9 + 1;
      } while (uVar10 != uVar9);
    }
    FUN_00d50b20();
  }
  if (((g_028b95c0 != '\0') || (*(int64_t *)(this_ptr + 0x18) == 0)) ||
     (lVar11 = *(int64_t *)(*(int64_t *)(this_ptr + 0x18) + 0x18), lVar11 == 0)) {
    local_50 = 0;
    plVar5 = (int64_t *)0x0;
    goto LAB_01e2baac;
  }
  FUN_00d50b00();
  local_d8 = lVar11;
  FUN_00d30620();
  plVar5 = local_40;
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 == (int64_t *)0x0) {
LAB_01e2bfb0:
    plVar5 = (int64_t *)0x0;
    local_50 = 0;
  }
  else {
    FUN_00d30620();
    local_c0 = local_40;
    local_b8 = 0;
    if (local_38[0] == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_b8 = '\x01';
    FUN_00e41520();
    if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d2fd00();
    if (CONCAT71(uStack_67,local_68) == 0) {
      bVar13 = false;
    }
    else {
      FUN_00d2fd00();
      if (*(int *)(local_98 + 0xc) < 2) {
        bVar13 = false;
      }
      else if (*(int64_t *)(this_ptr + 0x28) == 0) {
        bVar13 = false;
      }
      else {
        FUN_00ca1380();
        plVar5 = local_40;
        pcVar7 = local_58;
        if (local_38[0] != '\0') {
          pcVar7 = local_38;
        }
        local_58[0] = local_38[0];
        *pcVar7 = '\0';
        if ((local_38[0] != '\0') && (plVar5 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        uVar10 = *(uint *)((int64_t)plVar5 + 0xc);
        bVar13 = 0 < (int)uVar10;
        if ((local_58[0] != '\0') && (plVar5 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
      FUN_00d50b20();
    }
    lVar11 = g_027f3838;
    if (!bVar13) goto LAB_01e2bfb0;
    if (g_027f3838 != 0) {
      FUN_00d50b00();
    }
    local_b0 = lVar11;
    if ((int)uVar10 < 1) {
      local_50 = 0;
      plVar5 = (int64_t *)0x0;
    }
    else {
      local_1a0 = (uint64_t)uVar10;
      uVar9 = 0;
      plVar5 = (int64_t *)0x0;
      local_50 = 0;
      do {
        FUN_00ca1380();
        plVar6 = local_40;
        local_68 = local_38[0];
        pcVar7 = local_38;
        if (local_38[0] == '\0') {
          pcVar7 = &local_68;
        }
        *pcVar7 = '\0';
        if ((local_38[0] != '\0') && (plVar6 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        lVar11 = plVar6[2];
        plVar6 = *(int64_t **)(lVar11 + uVar9 * 8);
        if (plVar5 == plVar6) {
          if (((char)local_50 == '\0') && (plVar5 != (int64_t *)0x0)) {
            local_50 = CONCAT71((int7)((uint64_t)lVar11 >> 8),1);
            FUN_00d50b00();
          }
        }
        else {
          if (plVar6 != (int64_t *)0x0) {
            lVar11 = FUN_00d50b00();
          }
          if (((char)local_50 == '\0') || (plVar5 == (int64_t *)0x0)) {
            local_50 = CONCAT71((int7)((uint64_t)lVar11 >> 8),1);
            plVar5 = plVar6;
          }
          else {
            uVar8 = FUN_00d50b20();
            local_50 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
            plVar5 = plVar6;
          }
        }
        if (local_68 != '\0') {
          FUN_00d50b20();
        }
        uVar14 = FUN_00d4efa0();
        if (local_40 == (int64_t *)0x0) {
          bVar13 = false;
        }
        else {
          uVar14 = FUN_00d4efa0();
          local_148 = local_b0;
          local_140 = '\0';
          uVar14 = FUN_00c841b0(uVar14,&local_148);
          bVar13 = CONCAT71(uStack_67,local_68) != 0;
          if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
            uVar14 = FUN_00d50b20();
          }
          if ((local_140 != '\0') && (local_148 != 0)) {
            uVar14 = FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            uVar14 = FUN_00d50b20();
          }
        }
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          uVar14 = FUN_00d50b20();
        }
        if (bVar13) {
          local_138 = local_d8;
          local_130 = '\0';
          local_128 = local_b0;
          local_120 = '\0';
          (**(code **)(*plVar5 + 0x80))(uVar14,&local_128);
          if ((local_120 != '\0') && (local_128 != 0)) {
            FUN_00d50b20();
          }
          if ((local_130 != '\0') && (local_138 != 0)) {
            FUN_00d50b20();
          }
          FUN_00e41d40();
        }
        uVar9 = uVar9 + 1;
      } while (local_1a0 != uVar9);
    }
    if (local_b0 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_01e2baac:
  uVar10 = *(uint *)((int64_t)local_88 + 0xc);
  if (0 < (int)uVar10) {
    lVar11 = (uint64_t)uVar10 + 1;
    do {
      uVar10 = uVar10 - 1;
      FUN_01f27fe0();
      lVar1 = *(int64_t *)(local_88[2] + (uint64_t)uVar10 * 8);
      local_e0 = 0;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_e0 = '\x01';
      local_e8 = lVar1;
      FUN_01f42b80();
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar11 = lVar11 + -1;
    } while (1 < lVar11);
  }
  lVar11 = *(int64_t *)(this_ptr + 0x18);
  if (local_80 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_a0 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_a8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (plVar5 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return lVar11 != 0;
}



// ============================================================
// 01e2a220
// ============================================================
// Function: FUN_01e2a220
// Address: 01e2a220
// Size: 1275 bytes
// Class: GNUIDesignerDoc
// String references:
//   "%@.gnui"
// === GNUIDesignerDoc properties ===
//                   _localizer
//                   _connections
//                   _objectNames
//                   _objectCustomClassNames
//                   _objectsToRename
//                   _objectCustomAttributes


void FUN_01e2a220(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  char cVar2;
  char cVar3;
  uint64_t uVar4;
  undefined7 uVar5;
  undefined7 extraout_var;
  uint32_t uVar6;
  int64_t *plVar7;
  int64_t *arg1;
  void*this_ptr;
  int64_t *plVar8;
  undefined7 uVar11;
  int64_t *plVar9;
  uint64_t uVar10;
  bool bVar12;
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
  uint32_t local_94;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  uint local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  uint64_t local_38;
  
  lVar1 = g_027f3810;
  local_e8 = *arg1;
  if ((local_e8 == 0) || (plVar8 = (int64_t *)*param_2, plVar8 == (int64_t *)0x0))
  goto LAB_01e2a6dd;
  local_e0 = '\0';
  if (g_027f3810 != 0) {
    FUN_00d50b00();
  }
  local_d8 = lVar1;
  local_d0 = '\x01';
  uVar4 = (**(code **)(*plVar8 + 0x4f0))(&local_d8,&local_e8);
  plVar8 = local_60;
  if (local_60 == (int64_t *)0x0) {
    uVar6 = (uint32_t)CONCAT71((int7)((uint64_t)param_2 >> 8),1);
    plVar8 = (int64_t *)0x0;
    local_38 = 0;
  }
  else {
    if ((char)local_58 == '\0') {
      uVar4 = FUN_00d50b00();
      uVar6 = 0;
      local_38 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
      if (((char)local_58 == '\0') || (local_60 == (int64_t *)0x0)) goto LAB_01e2a2f9;
      uVar4 = FUN_00d50b20();
    }
    else {
      local_58 = local_58 & 0xffffff00;
    }
    local_38 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
    uVar6 = 0;
  }
LAB_01e2a2f9:
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((plVar8 == (int64_t *)0x0) || (cVar2 = (**(code **)(*plVar8 + 0x398))(), cVar2 == '\0')) {
    plVar9 = (int64_t *)*param_2;
    lVar1 = *arg1;
    local_58 = 1;
    local_60 = &g_024c5048;
    local_48 = 0;
    local_94 = uVar6;
    local_40 = plVar8;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_48 = '\x01';
    local_50 = lVar1;
    FUN_00d8cb40();
    local_70 = local_90;
    local_68 = 0;
    if (local_88 == '\0') {
      if (local_90 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_88 = '\0';
    }
    plVar7 = local_40;
    local_68 = '\x01';
    local_c0 = '\0';
    local_c8 = 0;
    uVar4 = (**(code **)(*plVar9 + 0x4f0))(&local_c8,&local_70);
    plVar8 = local_80;
    uVar5 = (undefined7)((uint64_t)uVar4 >> 8);
    uVar11 = (undefined7)((uint64_t)plVar9 >> 8);
    if (local_80 == plVar7) {
      plVar8 = plVar7;
      if (((byte)local_94 & local_80 != (int64_t *)0x0) == 1) {
        if (local_78 != '\0') goto LAB_01e2a469;
        plVar9 = (int64_t *)CONCAT71(uVar11,1);
        FUN_00d50b00();
      }
      else {
        plVar9 = (int64_t *)(local_38 & 0xffffffff);
      }
LAB_01e2a4cb:
      plVar7 = plVar8;
      if ((local_78 == '\0') || (local_80 == (int64_t *)0x0)) {
        local_38 = (uint64_t)plVar9 & 0xffffffff;
      }
      else {
        FUN_00d50b20();
        local_38 = (uint64_t)plVar9 & 0xffffffff;
      }
    }
    else {
      if (local_78 == '\0') {
        if (local_80 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        plVar9 = (int64_t *)CONCAT71(uVar11,1);
        if (((byte)local_38 & plVar7 != (int64_t *)0x0) == 1) {
          FUN_00d50b20();
        }
        goto LAB_01e2a4cb;
      }
      bVar12 = plVar7 != (int64_t *)0x0;
      plVar7 = local_80;
      if (((byte)local_38 & bVar12) == 1) {
        FUN_00d50b20();
        uVar5 = extraout_var;
      }
LAB_01e2a469:
      local_78 = '\0';
      local_38 = CONCAT71(uVar5,1);
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    local_60 = &g_024c5048;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((plVar7 == (int64_t *)0x0) || (cVar2 = (**(code **)(*plVar7 + 0x398))(), cVar2 == '\0')) {
      local_b8 = *arg1;
      local_b0 = '\0';
      local_a8 = 0;
      local_a0 = '\0';
      (**(code **)(*(int64_t *)*param_2 + 0x4f0))(&local_a8,&local_b8);
      plVar8 = local_60;
      uVar5 = (undefined7)((uint64_t)plVar9 >> 8);
      if (local_60 == plVar7) {
        if (((char)local_38 == '\0') && (local_60 != (int64_t *)0x0)) {
          plVar8 = plVar7;
          if ((char)local_58 != '\0') goto LAB_01e2a5ff;
          uVar10 = CONCAT71(uVar5,1);
          FUN_00d50b00();
        }
        else {
          uVar10 = local_38 & 0xffffffff;
          plVar8 = plVar7;
        }
LAB_01e2a665:
        if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if ((char)local_58 == '\0') {
          if (local_60 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          uVar10 = CONCAT71(uVar5,1);
          if (((char)local_38 != '\0') && (plVar7 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01e2a665;
        }
        if (((char)local_38 != '\0') && (plVar7 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01e2a5ff:
        local_58 = local_58 & 0xffffff00;
        uVar10 = CONCAT71(uVar5,1);
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if (plVar8 == (int64_t *)0x0) {
LAB_01e2a6dd:
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
        return;
      }
      local_38 = uVar10 & 0xffffffff;
      cVar3 = (**(code **)(*plVar8 + 0x398))();
      cVar2 = (char)uVar10;
      if (cVar3 == '\0') {
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
        if (cVar2 == '\0') {
          return;
        }
        FUN_00d50b20();
        return;
      }
      *(void*)(this_ptr + 1) = 0;
    }
    else {
      *(void*)(this_ptr + 1) = 0;
      plVar8 = plVar7;
      cVar2 = (char)local_38;
    }
    if (cVar2 != '\0') goto LAB_01e2a354;
  }
  else {
    *(void*)(this_ptr + 1) = 0;
    if ((char)uVar6 == '\0') goto LAB_01e2a354;
  }
  FUN_00d50b00();
LAB_01e2a354:
  *this_ptr = plVar8;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 01e29c40
// ============================================================
// Function: FUN_01e29c40
// Address: 01e29c40
// Size: 942 bytes
// Class: GNUIDesignerDoc
// === GNUIDesignerDoc properties ===
//                   _localizer
//                   _connections
//                   _objectNames
//                   _objectCustomClassNames
//                   _objectsToRename
//                   _objectCustomAttributes


void FUN_01e29c40(void)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t lVar4;
  
  lVar3 = g_027f37d8;
  if (g_027f37d8 != 0) {
    FUN_00d50b00();
  }
  lVar4 = g_028b9520;
  if (g_028b9520 == lVar3) {
    bVar2 = false;
    bVar1 = false;
  }
  else {
    g_028b9520 = lVar3;
    bVar2 = true;
    bVar1 = true;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  if ((lVar3 != 0) && (bVar1 = bVar2, g_028b9528 == '\0')) {
    g_028b9528 = '\x01';
    FUN_00e8cb90();
  }
  if (!bVar1 && lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar3 = g_027f37e0;
  if (g_027f37e0 != 0) {
    FUN_00d50b00();
  }
  lVar4 = g_028b9530;
  if (g_028b9530 == lVar3) {
    bVar1 = false;
  }
  else {
    g_028b9530 = lVar3;
    bVar1 = true;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  if ((lVar3 != 0) && (g_028b9538 == '\0')) {
    g_028b9538 = '\x01';
    FUN_00e8cb90();
  }
  if (!bVar1 && lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar3 = g_027f37e8;
  if (g_027f37e8 != 0) {
    FUN_00d50b00();
  }
  lVar4 = g_028b9540;
  if (g_028b9540 == lVar3) {
    bVar1 = false;
  }
  else {
    g_028b9540 = lVar3;
    bVar1 = true;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  if ((lVar3 != 0) && (g_028b9548 == '\0')) {
    g_028b9548 = '\x01';
    FUN_00e8cb90();
  }
  if (!bVar1 && lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar3 = g_027f37f0;
  if (g_027f37f0 != 0) {
    FUN_00d50b00();
  }
  lVar4 = g_028b9550;
  if (g_028b9550 == lVar3) {
    bVar1 = false;
  }
  else {
    g_028b9550 = lVar3;
    bVar1 = true;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  if ((lVar3 != 0) && (g_028b9558 == '\0')) {
    g_028b9558 = '\x01';
    FUN_00e8cb90();
  }
  if (!bVar1 && lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar3 = g_027f37f8;
  if (g_027f37f8 != 0) {
    FUN_00d50b00();
  }
  lVar4 = g_028b9560;
  if (g_028b9560 == lVar3) {
    bVar1 = false;
  }
  else {
    g_028b9560 = lVar3;
    bVar1 = true;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  if ((lVar3 != 0) && (g_028b9568 == '\0')) {
    g_028b9568 = '\x01';
    FUN_00e8cb90();
  }
  if (!bVar1 && lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar3 = g_027fec90;
  if (g_027fec90 != 0) {
    FUN_00d50b00();
  }
  lVar4 = g_028b9570;
  if (g_028b9570 == lVar3) {
    bVar1 = false;
  }
  else {
    g_028b9570 = lVar3;
    bVar1 = true;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  if ((lVar3 != 0) && (g_028b9578 == '\0')) {
    g_028b9578 = '\x01';
    FUN_00e8cb90();
  }
  if (!bVar1 && lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar3 = g_027f3800;
  if (g_027f3800 != 0) {
    FUN_00d50b00();
  }
  lVar4 = g_028b9580;
  if (g_028b9580 == lVar3) {
    bVar1 = false;
  }
  else {
    g_028b9580 = lVar3;
    bVar1 = true;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  if ((lVar3 != 0) && (g_028b9588 == '\0')) {
    g_028b9588 = '\x01';
    FUN_00e8cb90();
  }
  if (!bVar1 && lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar3 = g_027f3808;
  if (g_027f3808 != 0) {
    FUN_00d50b00();
  }
  lVar4 = g_028b9590;
  if (g_028b9590 == lVar3) {
    bVar1 = false;
  }
  else {
    g_028b9590 = lVar3;
    bVar1 = true;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  if ((lVar3 != 0) && (g_028b9598 == '\0')) {
    g_028b9598 = '\x01';
    FUN_00e8cb90();
  }
  if (!bVar1 && lVar3 != 0) {
    FUN_00d50b20();
  }
  FUN_01e2a120();
  return;
}



// ============================================================
// 01e29660
// ============================================================
// Function: FUN_01e29660
// Address: 01e29660
// Size: 503 bytes
// Class: GNUIDesignerDoc
// === GNUIDesignerDoc properties ===
//                   _localizer
//                   _connections
//                   _objectNames
//                   _objectCustomClassNames
//                   _objectsToRename
//                   _objectCustomAttributes


void FUN_01e29660(uint64_t param_1)

{
  uint64_t uVar1;
  uint uVar2;
  double *pdVar3;
  int iVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int iVar7;
  int iVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int64_t this_ptr;
  double dVar11;
  uint64_t uVar12;
  double dVar13;
  
  if (0 < *(int *)(this_ptr + 0xc)) {
    iVar7 = *(int *)(*(int64_t *)(this_ptr + 0x10) + 0xc);
    if (iVar7 < *(int *)(this_ptr + 0xc)) {
      FUN_00d21140();
      FUN_00d21140();
    }
    else {
      lVar9 = *(int64_t *)(this_ptr + 0x20);
      iVar7 = 0;
      if (((lVar9 != 0) && (uVar2 = *(uint *)(lVar9 + 0x18), 7 < (int)uVar2)) &&
         (param_1 = (uint64_t)(uVar2 & 0xfffffff8), (uVar2 & 0xfffffff8) != 8)) {
        pdVar3 = *(double **)(lVar9 + 0x10);
        dVar11 = *pdVar3;
        uVar1 = (uint64_t)(uVar2 >> 3) - 1;
        uVar6 = (uint64_t)((uint)uVar1 & 3);
        if ((uint64_t)(uVar2 >> 3) - 2 < 3) {
          iVar7 = 0;
          lVar9 = 1;
        }
        else {
          iVar7 = 0;
          uVar5 = 0;
          do {
            uVar10 = uVar5;
            dVar13 = pdVar3[uVar10 + 1];
            iVar8 = (int)uVar10;
            iVar4 = iVar8 + 1;
            if (dVar11 <= dVar13) {
              iVar4 = iVar7;
            }
            if (dVar11 <= dVar13) {
              dVar13 = dVar11;
            }
            dVar11 = pdVar3[uVar10 + 2];
            iVar7 = iVar8 + 2;
            if (dVar13 <= pdVar3[uVar10 + 2]) {
              dVar11 = dVar13;
              iVar7 = iVar4;
            }
            dVar13 = pdVar3[uVar10 + 3];
            iVar4 = iVar8 + 3;
            if (dVar11 <= pdVar3[uVar10 + 3]) {
              dVar13 = dVar11;
              iVar4 = iVar7;
            }
            dVar11 = pdVar3[uVar10 + 4];
            iVar7 = iVar8 + 4;
            if (dVar13 <= pdVar3[uVar10 + 4]) {
              dVar11 = dVar13;
              iVar7 = iVar4;
            }
            uVar5 = uVar10 + 4;
          } while ((uVar1 & 0xfffffffffffffffc) != uVar10 + 4);
          lVar9 = uVar10 + 5;
        }
        for (; param_1 = 0, uVar6 != 0; uVar6 = uVar6 - 1) {
          dVar13 = pdVar3[lVar9];
          iVar8 = (int)lVar9;
          if (dVar11 <= dVar13) {
            dVar13 = dVar11;
            iVar8 = iVar7;
          }
          lVar9 = lVar9 + 1;
          dVar11 = dVar13;
          iVar7 = iVar8;
        }
      }
      uVar12 = FUN_00d233f0(param_1,iVar7);
      FUN_00d233f0(uVar12,iVar7);
    }
    uVar12 = FUN_00e7d6f0();
    *(void*)(*(int64_t *)(*(int64_t *)(this_ptr + 0x20) + 0x10) + (int64_t)iVar7 * 8) =
         uVar12;
  }
  return;
}



// ============================================================
// 01e2a9a0
// ============================================================
// Function: FUN_01e2a9a0
// Address: 01e2a9a0
// Size: 504 bytes
// Class: GNUIDesignerDoc
// === GNUIDesignerDoc properties ===
//                   _localizer
//                   _connections
//                   _objectNames
//                   _objectCustomClassNames
//                   _objectsToRename
//                   _objectCustomAttributes


int64_t * FUN_01e2a9a0(uint64_t param_1)

{
  int64_t lVar1;
  bool bVar2;
  void*arg1;
  int64_t *this_ptr;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t local_98;
  uint8_t local_90;
  uint64_t local_88;
  uint8_t local_80;
  uint8_t local_78 [8];
  uint8_t local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t local_40;
  char local_38;
  
  if (g_028b95a0 == 0) {
    bVar2 = false;
LAB_01e2aa92:
    local_88 = *arg1;
    local_80 = 0;
    FUN_01f27fe0();
    (**(code **)(*local_58 + 0x610))();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_70 = 1;
    FUN_01e2a220(param_1,local_78);
    if (local_68 == 0) {
      lVar1 = 0;
    }
    else {
      bVar2 = true;
      lVar1 = local_68;
      if (local_60 == '\0') {
        FUN_00d50b00();
      }
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 == 0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
    }
    else {
      *(void*)(this_ptr + 1) = 0;
      if (!bVar2) {
        FUN_00d50b00();
      }
      *this_ptr = lVar1;
      *(void*)(this_ptr + 1) = 1;
    }
  }
  else {
    uVar3 = (uint64_t)*(uint *)(g_028b95a0 + 0xc);
    bVar2 = false;
    do {
      if ((int)uVar3 < 1) goto LAB_01e2aa92;
      lVar1 = *(int64_t *)(*(int64_t *)(g_028b95a0 + 0x10) + -8 + uVar3 * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_90 = 1;
      local_98 = lVar1;
      FUN_01e2a220(param_1,&local_98);
      lVar4 = local_68;
      if (local_68 == 0) {
        lVar4 = 0;
      }
      else {
        bVar2 = true;
        if (local_60 == '\0') {
          FUN_00d50b00();
        }
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      uVar3 = uVar3 - 1;
    } while (lVar4 == 0);
    *(void*)(this_ptr + 1) = 0;
    if (!bVar2) {
      FUN_00d50b00();
    }
    *this_ptr = lVar4;
    *(void*)(this_ptr + 1) = 1;
  }
  return this_ptr;
}

