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

