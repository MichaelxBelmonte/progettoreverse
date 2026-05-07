// Function: FUN_00bb2c20
// Address: 00bb2c20
// Size: 4003 bytes
// Class: GNData
// String references:
//   "GNData"
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void* FUN_00bb2c20(uint64_t param_1,uint64_t param_2,size_t param_3)

{
  int64_t lVar1;
  code *pcVar2;
  void*puVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  code *pcVar8;
  int64_t lVar9;
  code **ppcVar10;
  code *pcVar11;
  int64_t *arg1;
  void*this_ptr;
  char cVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  code *pcVar15;
  code *pcVar16;
  undefined7 uVar17;
  uint32_t uVar18;
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
  int64_t local_238;
  char local_230;
  int64_t local_228;
  char local_220;
  int64_t local_218;
  char local_210;
  int64_t local_208;
  char local_200;
  int64_t local_1f8;
  char local_1f0;
  int64_t local_1e8;
  char local_1e0;
  int64_t local_1d8;
  char local_1d0;
  int64_t local_1c8;
  char local_1c0;
  int64_t local_1b8;
  char local_1b0;
  int64_t local_1a8;
  char local_1a0;
  uint64_t local_178;
  uint64_t local_170;
  uint64_t local_168;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  uint64_t local_c0;
  void*local_b8;
  code *local_b0;
  int64_t *local_a8;
  uint64_t local_a0;
  uint64_t local_98;
  uint local_8c;
  code *local_88;
  int64_t local_80;
  code *local_78;
  code *local_70;
  char local_68;
  uint64_t local_60;
  uint64_t local_58;
  uint64_t uStack_50;
  uint64_t local_48;
  uint64_t uStack_40;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  if (*arg1 == 0) {
    puVar3 = (void*)0x0;
    goto LAB_00bb3c30;
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_025683c0;
  (*g_025683d8)();
  FUN_00c92170();
  local_b8 = puVar3;
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar4 = (int64_t)&g_0256d868;
  plVar4[2] = 0;
  *(void*)((int64_t)plVar4 + 0x1c) = 0;
  *(void*)((int64_t)plVar4 + 0x24) = 0;
  *(void*)((int64_t)plVar4 + 0x2c) = 0;
  (*g_0256d880)();
  local_a8 = plVar4;
  FUN_00cccf90();
  local_88 = 0x0;
  local_a0 = 0;
  local_78 = 0x0;
  local_c0 = 0;
  local_b0 = 0x0;
  local_60 = 0;
  local_98 = 0;
  local_80 = 0;
  uVar18 = FUN_00ccce80();
  local_150 = g_02765310;
  lVar9 = *arg1;
  if (g_02765310 != 0) {
    uVar18 = FUN_00d50b00();
  }
  local_148 = '\x01';
  uVar18 = FUN_000175c0(uVar18,&local_150);
  pcVar2 = local_70;
  if (local_70 == 0x0) {
    uVar6 = 0;
    pcVar11 = 0x0;
joined_r0x00bb2dd3:
    if ((local_68 != '\0') && (local_70 != 0x0)) {
      uVar18 = FUN_00d50b20();
    }
  }
  else {
    uVar17 = (undefined7)((uint64_t)lVar9 >> 8);
    if (local_68 == '\0') {
      uVar18 = FUN_00d50b00();
      uVar6 = CONCAT71(uVar17,1);
      pcVar11 = pcVar2;
      goto joined_r0x00bb2dd3;
    }
    local_68 = '\0';
    uVar6 = CONCAT71(uVar17,1);
    pcVar11 = local_70;
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    uVar18 = FUN_00d50b20();
  }
  local_c0 = uVar6;
  local_b0 = pcVar11;
  if ((pcVar11 == 0x0) || (*(int *)(pcVar11 + 0xc) == 0)) {
    local_88 = 0x0;
    local_a0 = 0;
    local_78 = 0x0;
    local_60 = 0;
    local_98 = 0;
    local_80 = 0;
    FUN_00ccdf50(uVar18,0);
    if ((local_1b0 != '\0') && (local_1b8 != 0)) {
      FUN_00d50b20();
    }
LAB_00bb3b3f:
    uVar13 = 0;
    local_88 = 0x0;
    local_a0 = 0;
    local_78 = 0x0;
    local_60 = 0;
    pcVar11 = 0x0;
    local_98 = 0;
    local_80 = 0;
  }
  else {
    local_88 = 0x0;
    local_a0 = 0;
    local_78 = 0x0;
    local_60 = 0;
    local_98 = 0;
    local_80 = 0;
    FUN_00ccdf50();
    if ((local_230 != '\0') && (local_238 != 0)) {
      FUN_00d50b20();
    }
    if (*(int *)(local_b0 + 0xc) < 1) goto LAB_00bb3b3f;
    lVar9 = 0;
    local_80 = 0;
    local_98 = 0;
    pcVar11 = 0x0;
    local_60 = 0;
    local_78 = 0x0;
    local_a0 = 0;
    local_88 = 0x0;
    uVar13 = 0;
    do {
      local_8c = (uint)uVar13;
      uVar13 = local_a0 & 0xffffffff;
      lVar5 = *(int64_t *)(local_b0 + 0x10);
      lVar1 = *(int64_t *)(lVar5 + lVar9 * 8);
      pcVar8 = local_b0;
      if (local_80 == lVar1) {
        if (((char)local_98 == '\0') && (local_80 != 0)) {
          local_98 = CONCAT71((int7)((uint64_t)lVar5 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (lVar1 != 0) {
          lVar5 = FUN_00d50b00();
        }
        if (((char)local_98 == '\0') || (local_80 == 0)) {
          local_98 = CONCAT71((int7)((uint64_t)lVar5 >> 8),1);
          local_80 = lVar1;
        }
        else {
          local_80 = lVar1;
          uVar6 = FUN_00d50b20();
          local_98 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
        }
      }
      lVar5 = g_02764910;
      uVar18 = 0;
      local_58 = 0;
      uStack_50 = 0;
      if (g_02764910 != 0) {
        uVar18 = FUN_00d50b00();
      }
      local_140 = lVar5;
      local_138 = '\x01';
      FUN_000175c0(uVar18,&local_140);
      pcVar16 = local_70;
      uVar6 = 0;
      if ((g_026d0220 == '\0') && (uVar6 = ___cxa_guard_acquire(), (int)uVar6 != 0)) {
        g_02789148 = FUN_00d4fe50();
        g_02789130 = "GNData";
        g_02789138 = 0x28;
        pcVar8 = FUN_000378a0;
        g_02789140 = FUN_000378a0;
        g_02789150 = 0;
        ram_0000000002789158 = 0;
        g_02789160 = 0;
        ram_0000000002789168 = 0;
        g_02789170 = 0;
        ram_0000000002789178 = 0;
        g_02789180 = 0;
        ram_0000000002789188 = 0;
        g_02789190 = 0;
        ram_0000000002789198 = 0;
        g_027891a0 = 0;
        ram_00000000027891a8 = 0;
        g_027891b0 = 0;
        ram_00000000027891b8 = 0;
        g_027891c0 = 0;
        ram_00000000027891c8 = 0;
        g_027891d0 = 0;
        ram_00000000027891d8 = 0;
        g_027891e0 = 0;
        ram_00000000027891e8 = 0;
        g_027891f0 = 0;
        uVar6 = ___cxa_guard_release();
      }
      ppcVar10 = (code **)&g_02802688;
      if (pcVar16 != 0x0) {
        (**(code **)(*(int64_t *)pcVar16 + 0x360))();
        uVar6 = FUN_00e85ea0();
        ppcVar10 = &local_70;
        if ((char)uVar6 == '\0') {
          ppcVar10 = (code **)&g_02802688;
        }
      }
      pcVar16 = *ppcVar10;
      cVar12 = (char)uVar13;
      if (pcVar16 == local_78) {
        local_a0 = uVar13;
        pcVar15 = local_78;
        if ((cVar12 == '\0') && (pcVar16 != 0x0)) {
          if (*(char *)(ppcVar10 + 1) != '\0') goto LAB_00bb3084;
          local_a0 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
          FUN_00d50b00();
          pcVar15 = local_78;
        }
      }
      else {
        pcVar15 = pcVar16;
        if (*(char *)(ppcVar10 + 1) == '\0') {
          if (pcVar16 != 0x0) {
            uVar6 = FUN_00d50b00();
          }
          local_a0 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
          if ((cVar12 != '\0') && (local_78 != 0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((cVar12 != '\0') && (local_78 != 0x0)) {
            uVar6 = FUN_00d50b20();
          }
LAB_00bb3084:
          *(void*)(ppcVar10 + 1) = 0;
          local_a0 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
          pcVar16 = pcVar15;
        }
      }
      local_78 = pcVar15;
      if ((local_68 != '\0') && (local_70 != 0x0)) {
        FUN_00d50b20();
      }
      if ((local_138 != '\0') && (local_140 != 0)) {
        FUN_00d50b20();
      }
      if (local_78 != 0x0) {
        if ((int64_t)*(int *)(local_78 + 0x18) < 0x11) {
          _memcpy(pcVar8,(void *)(int64_t)*(int *)(local_78 + 0x18),param_3);
        }
        else {
          local_58 = **(void**)(local_78 + 0x10);
          uStack_50 = (*(void**)(local_78 + 0x10))[1];
        }
      }
      uVar18 = (**(code **)(*local_a8 + 0x388))(0x10,&local_58);
      if ((local_220 != '\0') && (local_228 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      lVar5 = g_02765320;
      if (g_02765320 != 0) {
        uVar18 = FUN_00d50b00();
      }
      local_130 = lVar5;
      local_128 = '\x01';
      uVar18 = FUN_000175c0(uVar18,&local_130);
      pcVar8 = local_70;
      uVar17 = (undefined7)(uVar13 >> 8);
      if (local_70 == pcVar11) {
        if (((char)local_60 == '\0') && (local_70 != 0x0)) {
          pcVar8 = pcVar11;
          if (local_68 != '\0') goto LAB_00bb31f4;
          uVar13 = CONCAT71(uVar17,1);
          uVar18 = FUN_00d50b00();
        }
        else {
          uVar13 = local_60 & 0xffffffff;
        }
      }
      else {
        if (local_68 == '\0') {
          if (local_70 != 0x0) {
            uVar18 = FUN_00d50b00();
          }
          uVar13 = CONCAT71(uVar17,1);
          if (((char)local_60 != '\0') && (pcVar11 != 0x0)) {
            uVar18 = FUN_00d50b20();
            pcVar11 = pcVar8;
            goto LAB_00bb3240;
          }
        }
        else {
          if (((char)local_60 != '\0') && (pcVar11 != 0x0)) {
            uVar18 = FUN_00d50b20();
          }
LAB_00bb31f4:
          local_68 = '\0';
        }
        uVar13 = CONCAT71(uVar17,1);
        pcVar11 = pcVar8;
      }
LAB_00bb3240:
      if ((local_68 != '\0') && (local_70 != 0x0)) {
        uVar18 = FUN_00d50b20();
      }
      if ((local_128 != '\0') && (local_130 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      if (pcVar11 == 0x0) {
        local_170 = 0;
        lVar5 = g_02764920;
      }
      else {
        local_60 = uVar13;
        local_170 = FUN_00d45790();
        uVar18 = extraout_XMM0_Da;
        lVar5 = g_02764920;
      }
      g_02764920 = lVar5;
      if (lVar5 != 0) {
        uVar18 = FUN_00d50b00();
      }
      local_118 = '\x01';
      local_120 = lVar5;
      uVar6 = FUN_000175c0(uVar18,&local_120);
      pcVar8 = local_70;
      cVar12 = (char)uVar13;
      uVar18 = extraout_XMM0_Da_00;
      if (local_70 == pcVar11) {
        pcVar8 = pcVar11;
        local_60 = uVar13;
        if ((cVar12 == '\0') && (local_70 != 0x0)) {
          if (local_68 != '\0') goto LAB_00bb3323;
          local_60 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
          uVar18 = FUN_00d50b00();
        }
      }
      else if (local_68 == '\0') {
        if (local_70 != 0x0) {
          uVar6 = FUN_00d50b00();
          uVar18 = extraout_XMM0_Da_02;
        }
        local_60 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
        if ((cVar12 != '\0') && (pcVar11 != 0x0)) {
          uVar18 = FUN_00d50b20();
        }
      }
      else {
        if ((cVar12 != '\0') && (pcVar11 != 0x0)) {
          uVar6 = FUN_00d50b20();
          uVar18 = extraout_XMM0_Da_01;
        }
LAB_00bb3323:
        local_68 = '\0';
        local_60 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
      }
      if ((local_68 != '\0') && (local_70 != 0x0)) {
        uVar18 = FUN_00d50b20();
      }
      if ((local_118 != '\0') && (local_120 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      local_178 = param_1;
      if (pcVar8 != 0x0) {
        local_178 = FUN_00d45790();
        uVar18 = extraout_XMM0_Da_03;
      }
      lVar5 = g_02765330;
      if (g_02765330 != 0) {
        uVar18 = FUN_00d50b00();
      }
      local_110 = lVar5;
      local_108 = '\x01';
      uVar18 = FUN_000175c0(uVar18,&local_110);
      pcVar11 = local_70;
      uVar17 = (undefined7)((uint64_t)pcVar16 >> 8);
      if (local_70 == pcVar8) {
        if (((char)local_60 == '\0') && (local_70 != 0x0)) {
          pcVar11 = pcVar8;
          if (local_68 != '\0') goto LAB_00bb3454;
          uVar14 = CONCAT71(uVar17,1);
          uVar18 = FUN_00d50b00();
        }
        else {
          uVar14 = local_60 & 0xffffffff;
        }
      }
      else {
        if (local_68 == '\0') {
          if (local_70 != 0x0) {
            uVar18 = FUN_00d50b00();
          }
          uVar14 = CONCAT71(uVar17,1);
          if (((char)local_60 != '\0') && (pcVar8 != 0x0)) {
            uVar18 = FUN_00d50b20();
            pcVar8 = pcVar11;
            goto LAB_00bb34a0;
          }
        }
        else {
          if (((char)local_60 != '\0') && (pcVar8 != 0x0)) {
            uVar18 = FUN_00d50b20();
          }
LAB_00bb3454:
          local_68 = '\0';
        }
        uVar14 = CONCAT71(uVar17,1);
        pcVar8 = pcVar11;
      }
LAB_00bb34a0:
      if ((local_68 != '\0') && (local_70 != 0x0)) {
        uVar18 = FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      if (pcVar8 == 0x0) {
        local_168 = 0;
        lVar5 = g_02764930;
      }
      else {
        local_60 = uVar14 & 0xffffffff;
        local_168 = FUN_00d45790();
        uVar18 = extraout_XMM0_Da_04;
        lVar5 = g_02764930;
      }
      g_02764930 = lVar5;
      if (lVar5 != 0) {
        uVar18 = FUN_00d50b00();
      }
      local_f8 = '\x01';
      local_100 = lVar5;
      uVar18 = FUN_000175c0(uVar18,&local_100);
      pcVar11 = local_70;
      uVar17 = (undefined7)(uVar13 >> 8);
      cVar12 = (char)uVar14;
      if (local_70 == pcVar8) {
        if ((cVar12 == '\0') && (local_70 != 0x0)) {
          pcVar11 = pcVar8;
          if (local_68 != '\0') goto LAB_00bb3583;
          uVar14 = CONCAT71(uVar17,1);
          uVar18 = FUN_00d50b00();
        }
        else {
          uVar14 = uVar14 & 0xffffffff;
        }
      }
      else {
        if (local_68 == '\0') {
          if (local_70 != 0x0) {
            uVar18 = FUN_00d50b00();
          }
          uVar14 = CONCAT71(uVar17,1);
          if ((cVar12 != '\0') && (pcVar8 != 0x0)) {
            uVar18 = FUN_00d50b20();
            pcVar8 = pcVar11;
            goto LAB_00bb35d0;
          }
        }
        else {
          if ((cVar12 != '\0') && (pcVar8 != 0x0)) {
            uVar18 = FUN_00d50b20();
          }
LAB_00bb3583:
          local_68 = '\0';
        }
        uVar14 = CONCAT71(uVar17,1);
        pcVar8 = pcVar11;
      }
LAB_00bb35d0:
      if ((local_68 != '\0') && (local_70 != 0x0)) {
        uVar18 = FUN_00d50b20();
      }
      if ((local_f8 != '\0') && (local_100 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      if (pcVar8 == 0x0) {
        uVar6 = 0;
        lVar5 = g_02765340;
      }
      else {
        local_60 = uVar14;
        uVar6 = FUN_00d45790();
        uVar18 = extraout_XMM0_Da_05;
        lVar5 = g_02765340;
      }
      g_02765340 = lVar5;
      if (lVar5 != 0) {
        uVar18 = FUN_00d50b00();
      }
      local_e8 = '\x01';
      local_f0 = lVar5;
      uVar7 = FUN_000175c0(uVar18,&local_f0);
      pcVar11 = local_70;
      cVar12 = (char)uVar14;
      uVar18 = extraout_XMM0_Da_06;
      if (local_70 == pcVar8) {
        pcVar11 = pcVar8;
        local_60 = uVar14;
        if ((cVar12 == '\0') && (local_70 != 0x0)) {
          if (local_68 != '\0') goto LAB_00bb36a3;
          local_60 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
          uVar18 = FUN_00d50b00();
        }
      }
      else if (local_68 == '\0') {
        if (local_70 != 0x0) {
          uVar7 = FUN_00d50b00();
          uVar18 = extraout_XMM0_Da_08;
        }
        local_60 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
        if ((cVar12 != '\0') && (pcVar8 != 0x0)) {
          uVar18 = FUN_00d50b20();
        }
      }
      else {
        if ((cVar12 != '\0') && (pcVar8 != 0x0)) {
          uVar7 = FUN_00d50b20();
          uVar18 = extraout_XMM0_Da_07;
        }
LAB_00bb36a3:
        local_68 = '\0';
        local_60 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
      }
      if ((local_68 != '\0') && (local_70 != 0x0)) {
        uVar18 = FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      if (pcVar11 == 0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_00d45790();
        uVar18 = extraout_XMM0_Da_09;
      }
      uVar18 = FUN_00ccdf90(uVar18,local_170);
      if ((local_210 != '\0') && (local_218 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      uVar18 = FUN_00ccdf90(uVar18,local_178);
      if ((local_200 != '\0') && (local_208 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      uVar18 = FUN_00ccdf90(uVar18,local_168);
      if ((local_1f0 != '\0') && (local_1f8 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      uVar18 = FUN_00ccdf90(uVar18,uVar6);
      if ((local_1e0 != '\0') && (local_1e8 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      FUN_00ccdf90(uVar18,uVar7);
      if ((local_1d0 != '\0') && (local_1d8 != 0)) {
        FUN_00d50b20();
      }
      lVar5 = g_02729550;
      uVar18 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_58 = 0;
      uStack_50 = 0;
      if (g_02729550 != 0) {
        uVar18 = FUN_00d50b00();
      }
      local_e0 = lVar5;
      local_d8 = '\x01';
      uVar18 = FUN_000175c0(uVar18,&local_e0);
      pcVar8 = local_70;
      uVar17 = (undefined7)(uVar14 >> 8);
      if (local_70 == local_88) {
        if (((char)local_8c == '\0') && (local_70 != 0x0)) {
          pcVar8 = local_88;
          if (local_68 != '\0') goto LAB_00bb38d8;
          uVar13 = CONCAT71(uVar17,1);
          uVar18 = FUN_00d50b00();
        }
        else {
          uVar13 = (uint64_t)local_8c;
        }
      }
      else {
        if (local_68 == '\0') {
          if (local_70 != 0x0) {
            uVar18 = FUN_00d50b00();
          }
          uVar13 = CONCAT71(uVar17,1);
          if (((char)local_8c != '\0') && (local_88 != 0x0)) {
            uVar18 = FUN_00d50b20();
            local_88 = pcVar8;
            goto LAB_00bb3940;
          }
        }
        else {
          if (((char)local_8c != '\0') && (local_88 != 0x0)) {
            uVar18 = FUN_00d50b20();
          }
LAB_00bb38d8:
          local_68 = '\0';
        }
        uVar13 = CONCAT71(uVar17,1);
        local_88 = pcVar8;
      }
LAB_00bb3940:
      if ((local_68 != '\0') && (local_70 != 0x0)) {
        uVar18 = FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      lVar5 = g_02729550;
      if (local_88 != 0x0) {
        if (g_02729550 != 0) {
          uVar18 = FUN_00d50b00();
        }
        local_d0 = lVar5;
        local_c8 = '\x01';
        FUN_000175c0(uVar18,&local_d0);
        FUN_00d8d460();
        if ((local_68 != '\0') && (local_70 != 0x0)) {
          FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
      }
      local_8c = (uint)uVar13;
      (**(code **)(*local_a8 + 0x388))(0x20,&local_58);
      if ((local_1c0 != '\0') && (local_1c8 != 0)) {
        FUN_00d50b20();
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(local_b0 + 0xc));
  }
  (**(code **)(*local_a8 + 0x368))();
  if ((local_1a0 != '\0') && (local_1a8 != 0)) {
    FUN_00d50b20();
  }
  if (((char)uVar13 != '\0') && (local_88 != 0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  pcVar8 = local_b0;
  puVar3 = local_b8;
  if (((char)local_a0 != '\0') && (local_78 != 0x0)) {
    FUN_00d50b20();
  }
  if ((pcVar2 != 0x0) && (pcVar8 != 0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_60 != '\0') && (pcVar11 != 0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_98 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
LAB_00bb3c30:
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return this_ptr;
}

