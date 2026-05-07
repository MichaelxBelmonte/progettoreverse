// Function: FUN_00d7bac0
// Address: 00d7bac0
// Size: 4411 bytes
// Class: GNList
// String references:
//   "GNList"
//   "GNSortOrdering"
//   "GNString"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


int FUN_00d7bac0(uint64_t param_1,int64_t *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int64_t **pplVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  int64_t lVar11;
  code *pcVar12;
  uint64_t uVar13;
  void*arg1;
  void*this_ptr;
  int64_t *plVar14;
  int64_t *plVar15;
  int64_t *plVar16;
  int64_t *plVar17;
  bool bVar18;
  uint32_t uVar19;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t *local_178;
  char local_170;
  int64_t *local_168;
  char local_160;
  int64_t *local_158;
  char local_150;
  int64_t *local_148;
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
  uint local_ec;
  int64_t *local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  uint64_t local_c8;
  int64_t *local_c0;
  int64_t *local_b8;
  int64_t *local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  int64_t *local_90;
  int64_t *local_88;
  int64_t *local_80;
  int64_t *local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  int64_t *local_58;
  uint32_t local_50;
  uint32_t local_4c;
  int64_t *local_48;
  uint32_t local_3c;
  uint32_t local_38;
  char local_31;
  
  local_100 = '\0';
  local_108 = param_2;
  if ((g_0277b3e0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_026d5b08 = FUN_00d4fe50();
    g_026d5af0 = "GNSortOrdering";
    g_026d5af8 = 0x40;
    g_026d5b00 = FUN_0005c990;
    g_026d5b10 = 0;
    ram_00000000026d5b18 = 0;
    g_026d5b20 = 0;
    ram_00000000026d5b28 = 0;
    g_026d5b30 = 0;
    ram_00000000026d5b38 = 0;
    g_026d5b40 = 0;
    ram_00000000026d5b48 = 0;
    g_026d5b50 = 0;
    ram_00000000026d5b58 = 0;
    g_026d5b60 = 0;
    ram_00000000026d5b68 = 0;
    g_026d5b70 = 0;
    ram_00000000026d5b78 = 0;
    g_026d5b80 = 0;
    ram_00000000026d5b88 = 0;
    g_026d5b90 = 0;
    ram_00000000026d5b98 = 0;
    g_026d5ba0 = 0;
    ram_00000000026d5ba8 = 0;
    g_026d5bb0 = 0;
    ___cxa_guard_release();
  }
  if (param_2 == (int64_t *)0x0) {
LAB_00d7bb25:
    pplVar5 = &g_02802688;
    if (g_02802688 != (int64_t *)0x0) goto LAB_00d7bb32;
LAB_00d7bba5:
    plVar6 = local_108;
    uVar7 = CONCAT71((int7)((uint64_t)pplVar5 >> 8),g_027048b0);
    if ((g_027048b0 == '\0') && (uVar7 = ___cxa_guard_acquire(), (int)uVar7 != 0)) {
      g_026cd478 = FUN_00d4fe50();
      g_026cd460 = "GNList";
      g_026cd468 = 0x20;
      g_026cd470 = FUN_00018210;
      g_026cd480 = 0;
      ram_00000000026cd488 = 0;
      g_026cd490 = 0;
      g_026cd508 = 0;
      ram_00000000026cd510 = 0;
      g_026cd518 = 0;
      g_026cd51a = 6;
      g_026cd498 = 0;
      ram_00000000026cd4a0 = 0;
      g_026cd4a8 = 0;
      ram_00000000026cd4b0 = 0;
      g_026cd4b8 = 0;
      ram_00000000026cd4c0 = 0;
      g_026cd4c8 = 0;
      ram_00000000026cd4d0 = 0;
      g_026cd4d8 = 0;
      ram_00000000026cd4e0 = 0;
      g_026cd4e8 = 0;
      ram_00000000026cd4f0 = 0;
      g_026cd4f8 = 0;
      ram_00000000026cd500 = 0;
      g_026cd523 = 0;
      g_026cd51b = 0;
      uVar7 = ___cxa_guard_release();
    }
    if (plVar6 == (int64_t *)0x0) {
LAB_00d7bc11:
      pplVar5 = &g_02802688;
      plVar6 = g_02802688;
      if (g_02802688 == (int64_t *)0x0) goto LAB_00d7ca2d;
LAB_00d7bc1d:
      if (*(char *)(pplVar5 + 1) == '\0') {
        uVar7 = FUN_00d50b00();
      }
      else {
        *(void*)(pplVar5 + 1) = 0;
      }
      goto LAB_00d7bc33;
    }
    (**(code **)(*plVar6 + 0x360))();
    uVar7 = FUN_00e85ea0();
    if ((char)uVar7 == '\0') goto LAB_00d7bc11;
    if ((g_0277b3e0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      g_026d5b08 = FUN_00d4fe50();
      g_026d5af0 = "GNSortOrdering";
      g_026d5af8 = 0x40;
      g_026d5b00 = FUN_0005c990;
      g_026d5b10 = 0;
      ram_00000000026d5b18 = 0;
      g_026d5b20 = 0;
      ram_00000000026d5b28 = 0;
      g_026d5b30 = 0;
      ram_00000000026d5b38 = 0;
      g_026d5b40 = 0;
      ram_00000000026d5b48 = 0;
      g_026d5b50 = 0;
      ram_00000000026d5b58 = 0;
      g_026d5b60 = 0;
      ram_00000000026d5b68 = 0;
      g_026d5b70 = 0;
      ram_00000000026d5b78 = 0;
      g_026d5b80 = 0;
      ram_00000000026d5b88 = 0;
      g_026d5b90 = 0;
      ram_00000000026d5b98 = 0;
      g_026d5ba0 = 0;
      ram_00000000026d5ba8 = 0;
      g_026d5bb0 = 0;
      ___cxa_guard_release();
    }
    uVar7 = FUN_00e8da30();
    if ((char)uVar7 == '\0') goto LAB_00d7bc11;
    pplVar5 = &local_108;
    plVar6 = local_108;
    if (local_108 != (int64_t *)0x0) goto LAB_00d7bc1d;
LAB_00d7ca2d:
    uVar13 = CONCAT71((int7)((uint64_t)param_2 >> 8),1);
    uVar7 = 0;
    plVar6 = (int64_t *)0x0;
  }
  else {
    (**(code **)(*param_2 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_00d7bb25;
    pplVar5 = &local_108;
    if (local_108 == (int64_t *)0x0) goto LAB_00d7bba5;
LAB_00d7bb32:
    plVar6 = (int64_t *)FUN_00e8fc40();
    FUN_00d4ff40();
    *plVar6 = (int64_t)&g_02572358;
    (*g_02572370)();
    local_70 = local_108;
    local_68 = '\0';
    uVar7 = FUN_00d21140();
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      uVar7 = FUN_00d50b20();
    }
LAB_00d7bc33:
    uVar7 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
    uVar13 = 0;
  }
  uVar1 = *(uint *)((int64_t)plVar6 + 0xc);
  local_c0 = (int64_t *)0x0;
  local_b0 = (int64_t *)0x0;
  if ((int)uVar1 < 1) {
    iVar3 = 0;
  }
  else {
    local_ec = (uint)uVar13;
    local_90 = (int64_t *)0x0;
    local_60 = (int64_t *)0x0;
    local_f8 = (int64_t *)0x0;
    local_58 = (int64_t *)0x0;
    local_48 = (int64_t *)0x0;
    plVar17 = (int64_t *)0x0;
    local_98 = (int64_t *)0x0;
    local_88 = (int64_t *)0x0;
    local_78 = (int64_t *)0x0;
    local_38 = 0;
    local_3c = 0;
    uVar13 = 1;
    plVar14 = (int64_t *)0x0;
    cVar2 = '\0';
    local_c8 = uVar7;
    local_b8 = plVar6;
LAB_00d7bcd0:
    plVar6 = *(int64_t **)(local_b8[2] + -8 + uVar13 * 8);
    if (plVar14 == plVar6) {
      plVar6 = plVar14;
      local_31 = cVar2;
      if ((cVar2 == '\0') && (plVar14 != (int64_t *)0x0)) {
        local_31 = '\x01';
        FUN_00d50b00();
      }
    }
    else {
      if (plVar6 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_31 = '\x01';
      if ((cVar2 != '\0') && (plVar14 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    plVar14 = (int64_t *)*this_ptr;
    local_80 = plVar6;
    uVar19 = (**(code **)(*plVar6 + 0x370))();
    plVar6 = local_78;
    local_e8 = local_a8;
    local_e0 = 0;
    if (local_a0 == '\0') {
      if (local_a8 != (int64_t *)0x0) {
        uVar19 = FUN_00d50b00();
      }
    }
    else {
      local_a0 = '\0';
    }
    local_e0 = '\x01';
    plVar8 = (int64_t *)(**(code **)(*plVar14 + 0xa0))(uVar19,&local_e8);
    plVar15 = local_70;
    plVar14 = local_88;
    if (local_70 == plVar6) {
      plVar15 = local_48;
      if (((char)local_3c == '\0') && (local_70 != (int64_t *)0x0)) {
        if (local_68 != '\0') goto LAB_00d7bea6;
        local_50 = (uint32_t)CONCAT71((int7)((uint64_t)plVar8 >> 8),1);
        local_3c = 0;
        FUN_00d50b00();
        plVar15 = local_48;
      }
      else {
        local_50 = local_3c;
      }
LAB_00d7bef0:
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_68 == '\0') {
        if (local_70 != (int64_t *)0x0) {
          plVar8 = (int64_t *)FUN_00d50b00();
        }
        local_c0 = plVar15;
        local_50 = (uint32_t)CONCAT71((int7)((uint64_t)plVar8 >> 8),1);
        if (((char)local_3c == '\0') || (plVar6 == (int64_t *)0x0)) {
          local_90 = plVar15;
          local_98 = plVar15;
          plVar6 = plVar15;
        }
        else {
          FUN_00d50b20();
          local_90 = plVar15;
          local_98 = plVar15;
          plVar6 = plVar15;
        }
        goto LAB_00d7bef0;
      }
      local_c0 = local_70;
      plVar8 = plVar15;
      if (((char)local_3c == '\0') || (plVar6 == (int64_t *)0x0)) {
        local_90 = local_70;
        local_98 = local_70;
        plVar6 = plVar15;
      }
      else {
        FUN_00d50b20();
        local_90 = plVar15;
        local_98 = plVar15;
        plVar6 = plVar15;
      }
LAB_00d7bea6:
      local_68 = '\0';
      local_50 = (uint32_t)CONCAT71((int7)((uint64_t)plVar8 >> 8),1);
    }
    if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_78 = plVar6;
    if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar6 = (int64_t *)*arg1;
    uVar19 = (**(code **)(*local_80 + 0x370))();
    local_d8 = local_a8;
    local_d0 = 0;
    if (local_a0 == '\0') {
      if (local_a8 != (int64_t *)0x0) {
        uVar19 = FUN_00d50b00();
      }
    }
    else {
      local_a0 = '\0';
    }
    local_d0 = '\x01';
    plVar8 = (int64_t *)(**(code **)(*plVar6 + 0xa0))(uVar19,&local_d8);
    plVar6 = local_70;
    if (local_70 == plVar14) {
      local_4c = local_38;
      plVar16 = local_60;
      plVar10 = local_58;
      plVar6 = local_f8;
      plVar9 = plVar14;
      if (((char)local_38 == '\0') && (local_70 != (int64_t *)0x0)) {
        if (local_68 != '\0') goto LAB_00d7c0a6;
        local_4c = (uint32_t)CONCAT71((int7)((uint64_t)plVar8 >> 8),1);
        local_38 = 0;
        FUN_00d50b00();
        plVar16 = local_60;
        plVar10 = local_58;
      }
joined_r0x00d7c0db:
      plVar14 = plVar9;
      local_58 = plVar10;
      local_60 = plVar16;
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      plVar17 = plVar6;
      if (local_68 == '\0') {
        if (local_70 != (int64_t *)0x0) {
          plVar8 = (int64_t *)FUN_00d50b00();
        }
        local_b0 = plVar6;
        local_4c = (uint32_t)CONCAT71((int7)((uint64_t)plVar8 >> 8),1);
        plVar16 = plVar6;
        plVar10 = plVar6;
        plVar9 = plVar6;
        if (((char)local_38 != '\0') && (plVar14 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto joined_r0x00d7c0db;
      }
      local_b0 = local_70;
      plVar8 = plVar6;
      if (((char)local_38 == '\0') || (plVar14 == (int64_t *)0x0)) {
        local_60 = local_70;
        local_58 = local_70;
        plVar14 = plVar6;
      }
      else {
        FUN_00d50b20();
        local_60 = plVar6;
        local_58 = plVar6;
        plVar14 = plVar6;
      }
LAB_00d7c0a6:
      local_68 = '\0';
      local_4c = (uint32_t)CONCAT71((int7)((uint64_t)plVar8 >> 8),1);
    }
    if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*local_80 + 0x390))();
    plVar8 = local_70;
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar8 == (int64_t *)0x0) {
      local_3c = local_50;
      local_38 = local_4c;
      plVar8 = local_90;
      plVar16 = local_98;
      local_48 = plVar15;
    }
    else {
      uVar19 = (**(code **)(*local_80 + 0x390))();
      local_178 = local_98;
      local_170 = '\0';
      (**(code **)(*local_a8 + 0x388))(uVar19,&local_178);
      plVar10 = local_78;
      local_48 = local_70;
      plVar9 = local_70;
      if (local_70 == local_78) {
        if (((char)local_50 == '\0') && (local_70 != (int64_t *)0x0)) {
          plVar8 = local_90;
          plVar16 = local_98;
          if (local_68 != '\0') goto LAB_00d7c28e;
          local_3c = (uint32_t)CONCAT71((int7)((uint64_t)local_70 >> 8),1);
          local_50 = 0;
          FUN_00d50b00();
          plVar8 = local_90;
          plVar16 = local_98;
          local_48 = plVar15;
        }
        else {
          local_3c = local_50;
          plVar8 = local_90;
          plVar16 = local_98;
          local_48 = plVar15;
        }
LAB_00d7c2f0:
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_68 == '\0') {
          if (local_70 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          local_c0 = local_48;
          local_3c = (uint32_t)CONCAT71((int7)((uint64_t)local_48 >> 8),1);
          plVar8 = local_48;
          plVar16 = local_48;
          if (((char)local_50 != '\0') && (plVar10 != (int64_t *)0x0)) {
            FUN_00d50b20();
            plVar8 = local_48;
            plVar16 = local_48;
          }
          goto LAB_00d7c2f0;
        }
        local_c0 = local_70;
        plVar8 = local_70;
        plVar16 = local_70;
        plVar15 = local_48;
        if (((char)local_50 != '\0') && (local_78 != (int64_t *)0x0)) {
          plVar9 = (int64_t *)FUN_00d50b20();
          plVar8 = local_48;
          plVar16 = local_48;
          plVar15 = local_48;
        }
LAB_00d7c28e:
        local_48 = plVar15;
        local_68 = '\0';
        local_3c = (uint32_t)CONCAT71((int7)((uint64_t)plVar9 >> 8),1);
      }
      if ((local_170 != '\0') && (local_178 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar19 = (**(code **)(*local_80 + 0x390))();
      local_160 = '\0';
      local_168 = plVar17;
      (**(code **)(*local_a8 + 0x388))(uVar19,&local_168);
      plVar15 = local_70;
      plVar10 = local_70;
      if (local_70 == plVar14) {
        local_38 = local_4c;
        plVar15 = local_60;
        plVar9 = local_58;
        if (((char)local_4c == '\0') && (local_70 != (int64_t *)0x0)) {
          if (local_68 != '\0') goto LAB_00d7c434;
          local_38 = (uint32_t)CONCAT71((int7)((uint64_t)local_70 >> 8),1);
          local_4c = 0;
          FUN_00d50b00();
          plVar15 = local_60;
          plVar9 = local_58;
        }
joined_r0x00d7c449:
        local_58 = plVar9;
        local_60 = plVar15;
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar6 = plVar15;
        plVar17 = plVar15;
        if (local_68 == '\0') {
          uVar7 = 0;
          if (local_70 != (int64_t *)0x0) {
            uVar7 = FUN_00d50b00();
          }
          local_b0 = plVar15;
          local_38 = (uint32_t)CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
          plVar9 = plVar15;
          if (((char)local_4c != '\0') && (plVar14 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto joined_r0x00d7c449;
        }
        local_b0 = local_70;
        if (((char)local_4c == '\0') || (plVar14 == (int64_t *)0x0)) {
          local_60 = local_70;
          local_58 = local_70;
        }
        else {
          plVar10 = (int64_t *)FUN_00d50b20();
          local_60 = plVar15;
          local_58 = plVar15;
        }
LAB_00d7c434:
        local_68 = '\0';
        local_38 = (uint32_t)CONCAT71((int7)((uint64_t)plVar10 >> 8),1);
      }
      if ((local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    plVar14 = local_60;
    plVar15 = local_48;
    if (plVar16 == (int64_t *)0x0) {
      iVar3 = -(uint)(plVar6 != (int64_t *)0x0);
      plVar10 = (int64_t *)0x0;
      plVar17 = plVar6;
      plVar9 = plVar6;
    }
    else if (plVar17 == (int64_t *)0x0) {
      iVar3 = 1;
      plVar10 = plVar16;
      plVar17 = (int64_t *)0x0;
      plVar9 = local_58;
    }
    else {
      lVar11 = (**(code **)(*local_80 + 0x3a0))();
      if (lVar11 == 0) {
        if ((g_026fd0c0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          g_026d5e58 = FUN_00d4fe50();
          g_026d5e40 = "GNString";
          g_026d5e48 = 0x40;
          g_026d5e50 = FUN_0005d920;
          g_026d5e60 = 0;
          ram_00000000026d5e68 = 0;
          g_026d5e70 = 0;
          ram_00000000026d5e78 = 0;
          g_026d5e80 = 0;
          ram_00000000026d5e88 = 0;
          g_026d5e90 = 0;
          ram_00000000026d5e98 = 0;
          g_026d5ea0 = 0;
          ram_00000000026d5ea8 = 0;
          g_026d5eb0 = 0;
          ram_00000000026d5eb8 = 0;
          g_026d5ec0 = 0;
          ram_00000000026d5ec8 = 0;
          g_026d5ed0 = 0;
          ram_00000000026d5ed8 = 0;
          g_026d5ee0 = 0;
          ram_00000000026d5ee8 = 0;
          g_026d5ef0 = 0;
          ram_00000000026d5ef8 = 0;
          g_026d5f00 = 0;
          ___cxa_guard_release();
        }
        pplVar5 = &g_02802688;
        if (plVar8 != (int64_t *)0x0) {
          (**(code **)(*plVar8 + 0x360))();
          cVar2 = FUN_00e85ea0();
          pplVar5 = &local_c0;
          if (cVar2 == '\0') {
            pplVar5 = &g_02802688;
          }
        }
        plVar6 = local_b0;
        if (*pplVar5 != (int64_t *)0x0) {
          if ((g_026fd0c0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
            g_026d5e58 = FUN_00d4fe50();
            g_026d5e40 = "GNString";
            g_026d5e48 = 0x40;
            g_026d5e50 = FUN_0005d920;
            g_026d5e60 = 0;
            ram_00000000026d5e68 = 0;
            g_026d5e70 = 0;
            ram_00000000026d5e78 = 0;
            g_026d5e80 = 0;
            ram_00000000026d5e88 = 0;
            g_026d5e90 = 0;
            ram_00000000026d5e98 = 0;
            g_026d5ea0 = 0;
            ram_00000000026d5ea8 = 0;
            g_026d5eb0 = 0;
            ram_00000000026d5eb8 = 0;
            g_026d5ec0 = 0;
            ram_00000000026d5ec8 = 0;
            g_026d5ed0 = 0;
            ram_00000000026d5ed8 = 0;
            g_026d5ee0 = 0;
            ram_00000000026d5ee8 = 0;
            g_026d5ef0 = 0;
            ram_00000000026d5ef8 = 0;
            g_026d5f00 = 0;
            ___cxa_guard_release();
          }
          pplVar5 = &g_02802688;
          if (plVar6 != (int64_t *)0x0) {
            (**(code **)(*plVar6 + 0x360))();
            cVar2 = FUN_00e85ea0();
            pplVar5 = &local_b0;
            if (cVar2 == '\0') {
              pplVar5 = &g_02802688;
            }
          }
          if (*pplVar5 != (int64_t *)0x0) {
            iVar3 = (**(code **)(*local_80 + 0x380))();
            uVar19 = extraout_XMM0_Da;
            if ((iVar3 == 2) ||
               (iVar3 = (**(code **)(*local_80 + 0x380))(), plVar6 = local_b0, plVar8 = local_c0,
               uVar19 = extraout_XMM0_Da_00, iVar3 == 3)) {
              plVar6 = local_b0;
              plVar8 = local_c0;
              local_138 = local_b0;
              local_130 = '\0';
              iVar3 = FUN_00d92590(uVar19,1);
              plVar10 = plVar8;
              plVar17 = plVar6;
              plVar16 = plVar8;
              plVar14 = plVar6;
              plVar9 = plVar6;
              plVar15 = plVar8;
              if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_128 = local_b0;
              local_120 = '\0';
              iVar3 = (**(code **)(*local_c0 + 0x58))();
              plVar10 = plVar8;
              plVar17 = plVar6;
              plVar16 = plVar8;
              plVar14 = plVar6;
              plVar9 = plVar6;
              plVar15 = plVar8;
              if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            goto LAB_00d7c730;
          }
        }
        plVar6 = local_b0;
        plVar8 = local_c0;
        local_118 = local_b0;
        local_110 = '\0';
        iVar3 = (**(code **)(*local_c0 + 0x58))();
        plVar10 = plVar8;
        plVar17 = plVar6;
        plVar16 = plVar8;
        plVar14 = plVar6;
        plVar9 = plVar6;
        plVar15 = plVar8;
        if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        pcVar12 = (**(code **)(*local_80 + 0x3a0))();
        local_158 = local_48;
        local_150 = '\0';
        local_148 = local_58;
        local_140 = '\0';
        iVar3 = (*pcVar12)(local_58,local_80);
        if ((local_140 != '\0') && (local_148 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_88 = local_58;
        local_78 = local_48;
        plVar10 = local_48;
        plVar17 = local_88;
        plVar16 = local_78;
        plVar14 = local_60;
        plVar9 = local_58;
        plVar15 = local_48;
      }
    }
LAB_00d7c730:
    local_48 = plVar15;
    local_58 = plVar9;
    local_60 = plVar14;
    local_78 = plVar16;
    local_88 = plVar17;
    plVar17 = local_88;
    iVar4 = (**(code **)(*local_80 + 0x380))();
    local_90 = plVar8;
    if ((iVar4 != 1) && (iVar4 = (**(code **)(*local_80 + 0x380))(), iVar4 != 3)) {
LAB_00d7c76f:
      if ((iVar3 != 0) ||
         (bVar18 = uVar1 <= uVar13, uVar13 = uVar13 + 1, plVar14 = local_80, cVar2 = local_31,
         local_f8 = plVar6, local_98 = plVar10, bVar18)) goto LAB_00d7c96f;
      goto LAB_00d7bcd0;
    }
    if (iVar3 == -1) {
      iVar3 = 1;
      goto joined_r0x00d7c981;
    }
    if (iVar3 != 1) goto LAB_00d7c76f;
    iVar3 = -1;
LAB_00d7c96f:
joined_r0x00d7c981:
    if (((char)local_38 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    cVar2 = local_31;
    if (((char)local_3c != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar2 == '\0') {
      cVar2 = (char)local_ec;
      goto joined_r0x00d7c965;
    }
    FUN_00d50b20();
    uVar13 = (uint64_t)local_ec;
  }
  cVar2 = (char)uVar13;
joined_r0x00d7c965:
  if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    FUN_00d50b20();
  }
  return iVar3;
}

