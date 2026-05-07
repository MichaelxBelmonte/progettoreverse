// Function: FUN_006decb0
// Address: 006decb0
// Size: 7923 bytes
// Class: GNList
// String references:
//   "GNList"
//   "GNValue"
//   "GNDictionary"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_006decb0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  uint8_t uVar5;
  int iVar6;
  int64_t *plVar7;
  void*puVar8;
  int64_t lVar9;
  char *pcVar10;
  int64_t this_ptr;
  int64_t **pplVar11;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar12;
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
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  int64_t local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  char local_68 [8];
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  void*local_40;
  char local_38 [8];
  
  FUN_00d50100();
  FUN_00d6f370();
  plVar3 = local_70;
  pcVar10 = local_38;
  if (local_68[0] != '\0') {
    pcVar10 = local_68;
  }
  local_38[0] = local_68[0];
  *pcVar10 = '\0';
  if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar4 = (**(code **)(*local_70 + 0x450))();
  uVar12 = extraout_XMM0_Da;
  if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
    uVar12 = FUN_00d50b20();
  }
  lVar9 = g_027275e8;
  lVar2 = g_02727588;
  if (cVar4 == '\0') {
    if (g_027275e8 != 0) {
      uVar12 = FUN_00d50b00();
    }
    local_1a0 = lVar9;
    local_198 = '\x01';
    uVar12 = FUN_00d708a0(uVar12,0xffffffff);
    *(void*)(this_ptr + 0xc) = uVar12;
    uVar12 = extraout_XMM0_Da_04;
    if ((local_198 != '\0') && (local_1a0 != 0)) {
      uVar12 = FUN_00d50b20();
    }
    lVar2 = g_027275f0;
    if (g_027275f0 != 0) {
      uVar12 = FUN_00d50b00();
    }
    local_190 = lVar2;
    local_188 = '\x01';
    uVar12 = FUN_00d708a0(uVar12,0xffffffff);
    *(void*)(this_ptr + 0x10) = uVar12;
    uVar12 = extraout_XMM0_Da_05;
    if ((local_188 != '\0') && (local_190 != 0)) {
      uVar12 = FUN_00d50b20();
    }
    *(void*)(this_ptr + 0x2a) = 1;
    lVar2 = g_027275f8;
    if (g_027275f8 != 0) {
      uVar12 = FUN_00d50b00();
    }
    local_180 = lVar2;
    local_178 = '\x01';
    uVar5 = FUN_00d70f90(uVar12,0);
    *(void*)(this_ptr + 0x28) = uVar5;
    if ((local_178 != '\0') && (local_180 != 0)) {
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 0x29) = 0;
    lVar2 = g_02727600;
    if (g_02727600 != 0) {
      FUN_00d50b00();
    }
    local_170 = lVar2;
    local_168 = '\x01';
    local_160 = 0;
    local_158 = '\0';
    FUN_00d704d0(&local_160,&local_170);
    plVar1 = local_70;
    if (g_026fdd40 == '\0') {
      local_40 = &g_026fdd40;
      iVar6 = ___cxa_guard_acquire();
      if (iVar6 != 0) {
        g_026cd0e8 = FUN_00d4fe50();
        g_026cd0d0 = "GNDictionary";
        g_026cd0d8 = 0x28;
        g_026cd0e0 = FUN_00022d20;
        g_026cd0f0 = 0;
        ram_00000000026cd0f8 = 0;
        g_026cd100 = 0;
        g_026cd178 = 0;
        ram_00000000026cd180 = 0;
        g_026cd188 = 0;
        g_026cd18a = 6;
        g_026cd108 = 0;
        ram_00000000026cd110 = 0;
        g_026cd118 = 0;
        ram_00000000026cd120 = 0;
        g_026cd128 = 0;
        ram_00000000026cd130 = 0;
        g_026cd138 = 0;
        ram_00000000026cd140 = 0;
        g_026cd148 = 0;
        ram_00000000026cd150 = 0;
        g_026cd158 = 0;
        ram_00000000026cd160 = 0;
        g_026cd168 = 0;
        ram_00000000026cd170 = 0;
        g_026cd193 = 0;
        g_026cd18b = 0;
        ___cxa_guard_release();
      }
    }
    pplVar11 = (int64_t **)&g_02802688;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 != '\0') {
        if (g_0270c850 == '\0') {
          local_40 = &g_0270c850;
          iVar6 = ___cxa_guard_acquire();
          if (iVar6 != 0) {
            g_026d4348 = FUN_00d4fe50();
            g_026d4330 = "GNValue";
            g_026d4338 = 0x18;
            g_026d4340 = FUN_00053cb0;
            g_026d4350 = 0;
            ram_00000000026d4358 = 0;
            g_026d4360 = 0;
            ram_00000000026d4368 = 0;
            g_026d4370 = 0;
            ram_00000000026d4378 = 0;
            g_026d4380 = 0;
            ram_00000000026d4388 = 0;
            g_026d4390 = 0;
            ram_00000000026d4398 = 0;
            g_026d43a0 = 0;
            ram_00000000026d43a8 = 0;
            g_026d43b0 = 0;
            ram_00000000026d43b8 = 0;
            g_026d43c0 = 0;
            ram_00000000026d43c8 = 0;
            g_026d43d0 = 0;
            ram_00000000026d43d8 = 0;
            g_026d43e0 = 0;
            ram_00000000026d43e8 = 0;
            g_026d43f0 = 0;
            ___cxa_guard_release();
          }
        }
        cVar4 = FUN_00e8db60();
        if (cVar4 != '\0') {
          if (g_027048b0 == '\0') {
            local_40 = &g_027048b0;
            iVar6 = ___cxa_guard_acquire();
            if (iVar6 != 0) {
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
              ___cxa_guard_release();
            }
          }
          cVar4 = FUN_00e8dc10();
          pplVar11 = &local_70;
          if (cVar4 == '\0') {
            pplVar11 = (int64_t **)&g_02802688;
          }
        }
      }
    }
    plVar7 = *(int64_t **)(this_ptr + 0x18);
    plVar1 = *pplVar11;
    if (plVar7 != plVar1) {
      if (*(char *)(pplVar11 + 1) == '\0') {
        if (plVar1 == (int64_t *)0x0) {
          *(void*)(this_ptr + 0x18) = 0;
        }
        else {
          FUN_00d50b00();
          plVar7 = *(int64_t **)(this_ptr + 0x18);
          *(int64_t **)(this_ptr + 0x18) = *pplVar11;
        }
      }
      else {
        *(void*)(pplVar11 + 1) = 0;
        *(int64_t **)(this_ptr + 0x18) = plVar1;
      }
      if (plVar7 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_158 != '\0') && (local_160 != 0)) {
      FUN_00d50b20();
    }
    if ((local_168 != '\0') && (local_170 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = g_02727608;
    if (g_02727608 != 0) {
      FUN_00d50b00();
    }
    local_150 = lVar2;
    local_148 = '\x01';
    local_140 = 0;
    local_138 = '\0';
    FUN_00d704d0(&local_140,&local_150);
    plVar1 = local_70;
    if (g_026fdd40 == '\0') {
      local_40 = &g_026fdd40;
      iVar6 = ___cxa_guard_acquire();
      if (iVar6 != 0) {
        g_026cd0e8 = FUN_00d4fe50();
        g_026cd0d0 = "GNDictionary";
        g_026cd0d8 = 0x28;
        g_026cd0e0 = FUN_00022d20;
        g_026cd0f0 = 0;
        ram_00000000026cd0f8 = 0;
        g_026cd100 = 0;
        g_026cd178 = 0;
        ram_00000000026cd180 = 0;
        g_026cd188 = 0;
        g_026cd18a = 6;
        g_026cd108 = 0;
        ram_00000000026cd110 = 0;
        g_026cd118 = 0;
        ram_00000000026cd120 = 0;
        g_026cd128 = 0;
        ram_00000000026cd130 = 0;
        g_026cd138 = 0;
        ram_00000000026cd140 = 0;
        g_026cd148 = 0;
        ram_00000000026cd150 = 0;
        g_026cd158 = 0;
        ram_00000000026cd160 = 0;
        g_026cd168 = 0;
        ram_00000000026cd170 = 0;
        g_026cd193 = 0;
        g_026cd18b = 0;
        ___cxa_guard_release();
      }
    }
    pplVar11 = (int64_t **)&g_02802688;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 != '\0') {
        if (g_0270c850 == '\0') {
          local_40 = &g_0270c850;
          iVar6 = ___cxa_guard_acquire();
          if (iVar6 != 0) {
            g_026d4348 = FUN_00d4fe50();
            g_026d4330 = "GNValue";
            g_026d4338 = 0x18;
            g_026d4340 = FUN_00053cb0;
            g_026d4350 = 0;
            ram_00000000026d4358 = 0;
            g_026d4360 = 0;
            ram_00000000026d4368 = 0;
            g_026d4370 = 0;
            ram_00000000026d4378 = 0;
            g_026d4380 = 0;
            ram_00000000026d4388 = 0;
            g_026d4390 = 0;
            ram_00000000026d4398 = 0;
            g_026d43a0 = 0;
            ram_00000000026d43a8 = 0;
            g_026d43b0 = 0;
            ram_00000000026d43b8 = 0;
            g_026d43c0 = 0;
            ram_00000000026d43c8 = 0;
            g_026d43d0 = 0;
            ram_00000000026d43d8 = 0;
            g_026d43e0 = 0;
            ram_00000000026d43e8 = 0;
            g_026d43f0 = 0;
            ___cxa_guard_release();
          }
        }
        cVar4 = FUN_00e8db60();
        if (cVar4 != '\0') {
          if (g_027048b0 == '\0') {
            local_40 = &g_027048b0;
            iVar6 = ___cxa_guard_acquire();
            if (iVar6 != 0) {
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
              ___cxa_guard_release();
            }
          }
          cVar4 = FUN_00e8dc10();
          pplVar11 = &local_70;
          if (cVar4 == '\0') {
            pplVar11 = (int64_t **)&g_02802688;
          }
        }
      }
    }
    plVar7 = *(int64_t **)(this_ptr + 0x20);
    plVar1 = *pplVar11;
    if (plVar7 != plVar1) {
      if (*(char *)(pplVar11 + 1) == '\0') {
        if (plVar1 == (int64_t *)0x0) {
          *(void*)(this_ptr + 0x20) = 0;
        }
        else {
          FUN_00d50b00();
          plVar7 = *(int64_t **)(this_ptr + 0x20);
          *(int64_t **)(this_ptr + 0x20) = *pplVar11;
        }
      }
      else {
        *(void*)(pplVar11 + 1) = 0;
        *(int64_t **)(this_ptr + 0x20) = plVar1;
      }
      if (plVar7 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_138 != '\0') && (local_140 != 0)) {
      FUN_00d50b20();
    }
    if ((local_148 != '\0') && (local_150 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = g_02727610;
    if (g_02727610 != 0) {
      FUN_00d50b00();
    }
    local_130 = lVar2;
    local_128 = '\x01';
    local_120 = 0;
    local_118 = '\0';
    FUN_00d704d0(&local_120,&local_130);
    plVar1 = *(int64_t **)(this_ptr + 0x40);
    plVar7 = plVar1;
    if (plVar1 != local_70) {
      if (local_68[0] == '\0') {
        if (local_70 == (int64_t *)0x0) {
          plVar7 = (int64_t *)0x0;
          goto LAB_006df61f;
        }
        FUN_00d50b00();
        plVar1 = *(int64_t **)(this_ptr + 0x40);
        *(int64_t **)(this_ptr + 0x40) = local_70;
        plVar7 = local_70;
      }
      else {
        local_68[0] = '\0';
        plVar7 = local_70;
LAB_006df61f:
        *(int64_t **)(this_ptr + 0x40) = plVar7;
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
        plVar7 = local_70;
      }
    }
    if ((local_68[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
    if ((local_128 != '\0') && (local_130 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = g_02727618;
    if (g_02727618 != 0) {
      FUN_00d50b00();
    }
    local_110 = lVar2;
    local_108 = '\x01';
    local_100 = 0;
    local_f8 = '\0';
    uVar12 = FUN_00d704d0(&local_100,&local_110);
    plVar1 = *(int64_t **)(this_ptr + 0x48);
    plVar7 = plVar1;
    if (plVar1 != local_70) {
      if (local_68[0] == '\0') {
        if (local_70 == (int64_t *)0x0) {
          plVar7 = (int64_t *)0x0;
          goto LAB_006df70e;
        }
        uVar12 = FUN_00d50b00();
        plVar1 = *(int64_t **)(this_ptr + 0x48);
        *(int64_t **)(this_ptr + 0x48) = local_70;
        plVar7 = local_70;
      }
      else {
        local_68[0] = '\0';
        plVar7 = local_70;
LAB_006df70e:
        *(int64_t **)(this_ptr + 0x48) = plVar7;
      }
      if (plVar1 != (int64_t *)0x0) {
        uVar12 = FUN_00d50b20();
        plVar7 = local_70;
      }
    }
    if ((local_68[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
    if ((local_f8 != '\0') && (local_100 != 0)) {
      uVar12 = FUN_00d50b20();
    }
    if ((local_108 != '\0') && (local_110 != 0)) {
      uVar12 = FUN_00d50b20();
    }
    *(void*)(this_ptr + 0x50) = 0xffffffff;
    *(void*)(this_ptr + 0x54) = 0;
    if (*(int64_t *)(this_ptr + 0x58) != 0) {
      *(void*)(this_ptr + 0x58) = 0;
      uVar12 = FUN_00d50b20();
    }
    lVar2 = g_02727620;
    if (g_02727620 != 0) {
      uVar12 = FUN_00d50b00();
    }
    local_f0 = lVar2;
    local_e8 = '\x01';
    uVar5 = FUN_00d70f90(uVar12,0);
    *(void*)(this_ptr + 0x2b) = uVar5;
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 0x70) = 0;
  }
  else {
    if (g_02727588 != 0) {
      uVar12 = FUN_00d50b00();
    }
    uVar12 = FUN_00d708a0(uVar12,0xffffffff);
    *(void*)(this_ptr + 0xc) = uVar12;
    uVar12 = extraout_XMM0_Da_00;
    if (lVar2 != 0) {
      uVar12 = FUN_00d50b20();
    }
    lVar2 = g_02727590;
    if (g_02727590 != 0) {
      uVar12 = FUN_00d50b00();
    }
    uVar12 = FUN_00d708a0(uVar12,0xffffffff);
    *(void*)(this_ptr + 0x10) = uVar12;
    uVar12 = extraout_XMM0_Da_01;
    if (lVar2 != 0) {
      uVar12 = FUN_00d50b20();
    }
    lVar2 = g_02727598;
    if (g_02727598 != 0) {
      uVar12 = FUN_00d50b00();
    }
    uVar5 = FUN_00d70f90(uVar12,1);
    *(void*)(this_ptr + 0x2a) = uVar5;
    uVar12 = extraout_XMM0_Da_02;
    if (lVar2 != 0) {
      uVar12 = FUN_00d50b20();
    }
    lVar2 = g_027275a0;
    if (g_027275a0 != 0) {
      uVar12 = FUN_00d50b00();
    }
    uVar5 = FUN_00d70f90(uVar12,1);
    *(void*)(this_ptr + 0x28) = uVar5;
    uVar12 = extraout_XMM0_Da_03;
    if (lVar2 != 0) {
      uVar12 = FUN_00d50b20();
    }
    lVar2 = g_027275a8;
    if (g_027275a8 != 0) {
      uVar12 = FUN_00d50b00();
    }
    uVar5 = FUN_00d70f90(uVar12,1);
    *(void*)(this_ptr + 0x29) = uVar5;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = g_027275b0;
    if (g_027275b0 != 0) {
      FUN_00d50b00();
    }
    local_260 = lVar2;
    local_258 = '\x01';
    local_250 = 0;
    local_248 = '\0';
    FUN_00d704d0(&local_250,&local_260);
    plVar1 = local_70;
    if (g_026fdd40 == '\0') {
      local_40 = &g_026fdd40;
      iVar6 = ___cxa_guard_acquire();
      if (iVar6 != 0) {
        g_026cd0e8 = FUN_00d4fe50();
        g_026cd0d0 = "GNDictionary";
        g_026cd0d8 = 0x28;
        g_026cd0e0 = FUN_00022d20;
        g_026cd0f0 = 0;
        ram_00000000026cd0f8 = 0;
        g_026cd100 = 0;
        g_026cd178 = 0;
        ram_00000000026cd180 = 0;
        g_026cd188 = 0;
        g_026cd18a = 6;
        g_026cd108 = 0;
        ram_00000000026cd110 = 0;
        g_026cd118 = 0;
        ram_00000000026cd120 = 0;
        g_026cd128 = 0;
        ram_00000000026cd130 = 0;
        g_026cd138 = 0;
        ram_00000000026cd140 = 0;
        g_026cd148 = 0;
        ram_00000000026cd150 = 0;
        g_026cd158 = 0;
        ram_00000000026cd160 = 0;
        g_026cd168 = 0;
        ram_00000000026cd170 = 0;
        g_026cd193 = 0;
        g_026cd18b = 0;
        ___cxa_guard_release();
      }
    }
    pplVar11 = (int64_t **)&g_02802688;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 != '\0') {
        if (g_0270c850 == '\0') {
          local_40 = &g_0270c850;
          iVar6 = ___cxa_guard_acquire();
          if (iVar6 != 0) {
            g_026d4348 = FUN_00d4fe50();
            g_026d4330 = "GNValue";
            g_026d4338 = 0x18;
            g_026d4340 = FUN_00053cb0;
            g_026d4350 = 0;
            ram_00000000026d4358 = 0;
            g_026d4360 = 0;
            ram_00000000026d4368 = 0;
            g_026d4370 = 0;
            ram_00000000026d4378 = 0;
            g_026d4380 = 0;
            ram_00000000026d4388 = 0;
            g_026d4390 = 0;
            ram_00000000026d4398 = 0;
            g_026d43a0 = 0;
            ram_00000000026d43a8 = 0;
            g_026d43b0 = 0;
            ram_00000000026d43b8 = 0;
            g_026d43c0 = 0;
            ram_00000000026d43c8 = 0;
            g_026d43d0 = 0;
            ram_00000000026d43d8 = 0;
            g_026d43e0 = 0;
            ram_00000000026d43e8 = 0;
            g_026d43f0 = 0;
            ___cxa_guard_release();
          }
        }
        cVar4 = FUN_00e8db60();
        if (cVar4 != '\0') {
          if (g_027048b0 == '\0') {
            local_40 = &g_027048b0;
            iVar6 = ___cxa_guard_acquire();
            if (iVar6 != 0) {
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
              ___cxa_guard_release();
            }
          }
          cVar4 = FUN_00e8dc10();
          pplVar11 = &local_70;
          if (cVar4 == '\0') {
            pplVar11 = (int64_t **)&g_02802688;
          }
        }
      }
    }
    plVar7 = *(int64_t **)(this_ptr + 0x18);
    plVar1 = *pplVar11;
    if (plVar7 != plVar1) {
      if (*(char *)(pplVar11 + 1) == '\0') {
        if (plVar1 == (int64_t *)0x0) {
          *(void*)(this_ptr + 0x18) = 0;
        }
        else {
          FUN_00d50b00();
          plVar7 = *(int64_t **)(this_ptr + 0x18);
          *(int64_t **)(this_ptr + 0x18) = *pplVar11;
        }
      }
      else {
        *(void*)(pplVar11 + 1) = 0;
        *(int64_t **)(this_ptr + 0x18) = plVar1;
      }
      if (plVar7 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_248 != '\0') && (local_250 != 0)) {
      FUN_00d50b20();
    }
    if ((local_258 != '\0') && (local_260 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = g_027275b8;
    if (g_027275b8 != 0) {
      FUN_00d50b00();
    }
    local_240 = lVar2;
    local_238 = '\x01';
    local_230 = 0;
    local_228 = '\0';
    FUN_00d704d0(&local_230,&local_240);
    plVar1 = local_70;
    if (g_026fdd40 == '\0') {
      local_40 = &g_026fdd40;
      iVar6 = ___cxa_guard_acquire();
      if (iVar6 != 0) {
        g_026cd0e8 = FUN_00d4fe50();
        g_026cd0d0 = "GNDictionary";
        g_026cd0d8 = 0x28;
        g_026cd0e0 = FUN_00022d20;
        g_026cd0f0 = 0;
        ram_00000000026cd0f8 = 0;
        g_026cd100 = 0;
        g_026cd178 = 0;
        ram_00000000026cd180 = 0;
        g_026cd188 = 0;
        g_026cd18a = 6;
        g_026cd108 = 0;
        ram_00000000026cd110 = 0;
        g_026cd118 = 0;
        ram_00000000026cd120 = 0;
        g_026cd128 = 0;
        ram_00000000026cd130 = 0;
        g_026cd138 = 0;
        ram_00000000026cd140 = 0;
        g_026cd148 = 0;
        ram_00000000026cd150 = 0;
        g_026cd158 = 0;
        ram_00000000026cd160 = 0;
        g_026cd168 = 0;
        ram_00000000026cd170 = 0;
        g_026cd193 = 0;
        g_026cd18b = 0;
        ___cxa_guard_release();
      }
    }
    pplVar11 = (int64_t **)&g_02802688;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 != '\0') {
        if (g_0270c850 == '\0') {
          local_40 = &g_0270c850;
          iVar6 = ___cxa_guard_acquire();
          if (iVar6 != 0) {
            g_026d4348 = FUN_00d4fe50();
            g_026d4330 = "GNValue";
            g_026d4338 = 0x18;
            g_026d4340 = FUN_00053cb0;
            g_026d4350 = 0;
            ram_00000000026d4358 = 0;
            g_026d4360 = 0;
            ram_00000000026d4368 = 0;
            g_026d4370 = 0;
            ram_00000000026d4378 = 0;
            g_026d4380 = 0;
            ram_00000000026d4388 = 0;
            g_026d4390 = 0;
            ram_00000000026d4398 = 0;
            g_026d43a0 = 0;
            ram_00000000026d43a8 = 0;
            g_026d43b0 = 0;
            ram_00000000026d43b8 = 0;
            g_026d43c0 = 0;
            ram_00000000026d43c8 = 0;
            g_026d43d0 = 0;
            ram_00000000026d43d8 = 0;
            g_026d43e0 = 0;
            ram_00000000026d43e8 = 0;
            g_026d43f0 = 0;
            ___cxa_guard_release();
          }
        }
        cVar4 = FUN_00e8db60();
        if (cVar4 != '\0') {
          if (g_027048b0 == '\0') {
            local_40 = &g_027048b0;
            iVar6 = ___cxa_guard_acquire();
            if (iVar6 != 0) {
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
              ___cxa_guard_release();
            }
          }
          cVar4 = FUN_00e8dc10();
          pplVar11 = &local_70;
          if (cVar4 == '\0') {
            pplVar11 = (int64_t **)&g_02802688;
          }
        }
      }
    }
    plVar7 = *(int64_t **)(this_ptr + 0x20);
    plVar1 = *pplVar11;
    if (plVar7 != plVar1) {
      if (*(char *)(pplVar11 + 1) == '\0') {
        if (plVar1 == (int64_t *)0x0) {
          *(void*)(this_ptr + 0x20) = 0;
        }
        else {
          FUN_00d50b00();
          plVar7 = *(int64_t **)(this_ptr + 0x20);
          *(int64_t **)(this_ptr + 0x20) = *pplVar11;
        }
      }
      else {
        *(void*)(pplVar11 + 1) = 0;
        *(int64_t **)(this_ptr + 0x20) = plVar1;
      }
      if (plVar7 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_228 != '\0') && (local_230 != 0)) {
      FUN_00d50b20();
    }
    if ((local_238 != '\0') && (local_240 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = g_027275c0;
    if (g_027275c0 != 0) {
      FUN_00d50b00();
    }
    local_220 = lVar2;
    local_218 = '\x01';
    local_210 = 0;
    local_208 = '\0';
    FUN_00d704d0(&local_210,&local_220);
    plVar1 = *(int64_t **)(this_ptr + 0x40);
    plVar7 = plVar1;
    if (plVar1 != local_70) {
      if (local_68[0] == '\0') {
        if (local_70 == (int64_t *)0x0) {
          plVar7 = (int64_t *)0x0;
          goto LAB_006df8e4;
        }
        FUN_00d50b00();
        plVar1 = *(int64_t **)(this_ptr + 0x40);
        *(int64_t **)(this_ptr + 0x40) = local_70;
        plVar7 = local_70;
      }
      else {
        local_68[0] = '\0';
        plVar7 = local_70;
LAB_006df8e4:
        *(int64_t **)(this_ptr + 0x40) = plVar7;
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
        plVar7 = local_70;
      }
    }
    if ((local_68[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_208 != '\0') && (local_210 != 0)) {
      FUN_00d50b20();
    }
    if ((local_218 != '\0') && (local_220 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = g_027275c8;
    if (g_027275c8 != 0) {
      FUN_00d50b00();
    }
    local_200 = lVar2;
    local_1f8 = '\x01';
    local_1f0 = 0;
    local_1e8 = '\0';
    FUN_00d704d0(&local_1f0,&local_200);
    plVar1 = *(int64_t **)(this_ptr + 0x48);
    plVar7 = plVar1;
    if (plVar1 != local_70) {
      if (local_68[0] == '\0') {
        if (local_70 == (int64_t *)0x0) {
          plVar7 = (int64_t *)0x0;
          goto LAB_006df9d3;
        }
        FUN_00d50b00();
        plVar1 = *(int64_t **)(this_ptr + 0x48);
        *(int64_t **)(this_ptr + 0x48) = local_70;
        plVar7 = local_70;
      }
      else {
        local_68[0] = '\0';
        plVar7 = local_70;
LAB_006df9d3:
        *(int64_t **)(this_ptr + 0x48) = plVar7;
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
        plVar7 = local_70;
      }
    }
    if ((local_68[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_1e8 != '\0') && (local_1f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1f8 != '\0') && (local_200 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = g_027275d0;
    if (g_027275d0 != 0) {
      FUN_00d50b00();
    }
    local_1e0 = lVar2;
    local_1d8 = '\x01';
    local_1d0 = 0;
    local_1c8 = '\0';
    uVar12 = FUN_00d704d0(&local_1d0,&local_1e0);
    plVar1 = local_70;
    if (g_027048b0 == '\0') {
      local_40 = &g_027048b0;
      iVar6 = ___cxa_guard_acquire();
      uVar12 = extraout_XMM0_Da_09;
      if (iVar6 != 0) {
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
        uVar12 = ___cxa_guard_release();
      }
    }
    pplVar11 = (int64_t **)&g_02802688;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar4 = FUN_00e85ea0();
      uVar12 = extraout_XMM0_Da_06;
      if (cVar4 != '\0') {
        if (g_0270c850 == '\0') {
          local_40 = &g_0270c850;
          iVar6 = ___cxa_guard_acquire();
          if (iVar6 != 0) {
            g_026d4348 = FUN_00d4fe50();
            g_026d4330 = "GNValue";
            g_026d4338 = 0x18;
            g_026d4340 = FUN_00053cb0;
            g_026d4350 = 0;
            ram_00000000026d4358 = 0;
            g_026d4360 = 0;
            ram_00000000026d4368 = 0;
            g_026d4370 = 0;
            ram_00000000026d4378 = 0;
            g_026d4380 = 0;
            ram_00000000026d4388 = 0;
            g_026d4390 = 0;
            ram_00000000026d4398 = 0;
            g_026d43a0 = 0;
            ram_00000000026d43a8 = 0;
            g_026d43b0 = 0;
            ram_00000000026d43b8 = 0;
            g_026d43c0 = 0;
            ram_00000000026d43c8 = 0;
            g_026d43d0 = 0;
            ram_00000000026d43d8 = 0;
            g_026d43e0 = 0;
            ram_00000000026d43e8 = 0;
            g_026d43f0 = 0;
            ___cxa_guard_release();
          }
        }
        cVar4 = FUN_00e8da30();
        pplVar11 = &local_70;
        uVar12 = extraout_XMM0_Da_07;
        if (cVar4 == '\0') {
          pplVar11 = (int64_t **)&g_02802688;
        }
      }
    }
    plVar7 = *(int64_t **)(this_ptr + 0x30);
    plVar1 = *pplVar11;
    if (plVar7 != plVar1) {
      if (*(char *)(pplVar11 + 1) == '\0') {
        if (plVar1 == (int64_t *)0x0) {
          *(void*)(this_ptr + 0x30) = 0;
        }
        else {
          uVar12 = FUN_00d50b00();
          plVar7 = *(int64_t **)(this_ptr + 0x30);
          *(int64_t **)(this_ptr + 0x30) = *pplVar11;
        }
      }
      else {
        *(void*)(pplVar11 + 1) = 0;
        *(int64_t **)(this_ptr + 0x30) = plVar1;
      }
      if (plVar7 != (int64_t *)0x0) {
        uVar12 = FUN_00d50b20();
      }
    }
    if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
    if ((local_1c8 != '\0') && (local_1d0 != 0)) {
      uVar12 = FUN_00d50b20();
    }
    if ((local_1d8 != '\0') && (local_1e0 != 0)) {
      uVar12 = FUN_00d50b20();
    }
    *(void*)(this_ptr + 0x50) = 0xffffffff;
    *(void*)(this_ptr + 0x54) = 0;
    if (*(int64_t *)(this_ptr + 0x58) != 0) {
      *(void*)(this_ptr + 0x58) = 0;
      uVar12 = FUN_00d50b20();
    }
    lVar2 = g_027275d8;
    if (g_027275d8 != 0) {
      uVar12 = FUN_00d50b00();
    }
    local_1c0 = lVar2;
    local_1b8 = '\x01';
    uVar5 = FUN_00d70f90(uVar12,0);
    *(void*)(this_ptr + 0x2b) = uVar5;
    uVar12 = extraout_XMM0_Da_08;
    if ((local_1b8 != '\0') && (local_1c0 != 0)) {
      uVar12 = FUN_00d50b20();
    }
    lVar2 = g_027275e0;
    if (g_027275e0 != 0) {
      uVar12 = FUN_00d50b00();
    }
    local_1b0 = lVar2;
    local_1a8 = '\x01';
    uVar12 = FUN_00d708a0(uVar12,0);
    *(void*)(this_ptr + 0x70) = uVar12;
    if ((local_1a8 != '\0') && (local_1b0 != 0)) {
      FUN_00d50b20();
    }
  }
  uVar12 = FUN_00d6f370();
  local_e0 = g_026f6e58;
  if (g_026f6e58 != 0) {
    uVar12 = FUN_00d50b00();
  }
  local_d8 = '\x01';
  uVar5 = FUN_00d70f90(uVar12,1);
  *(void*)(this_ptr + 0x55) = uVar5;
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x68) != 0) {
    *(void*)(this_ptr + 0x68) = 0;
    FUN_00d50b20();
  }
  lVar2 = g_026fba80;
  if (*(int64_t *)(this_ptr + 0x18) == 0) {
    if (g_026fba80 != 0) {
      FUN_00d50b00();
    }
    local_d0 = lVar2;
    local_c8 = '\x01';
    FUN_006e17f0();
    FUN_00d46530();
    local_b0 = local_a0;
    local_a8 = local_90;
    FUN_00083ea0(2,&local_a8);
    FUN_006e1750();
    lVar2 = *(int64_t *)(this_ptr + 0x18);
    lVar9 = lVar2;
    if (lVar2 != local_80) {
      if (local_78 == '\0') {
        if (local_80 == 0) {
          lVar9 = 0;
          goto LAB_006dfe86;
        }
        FUN_00d50b00();
        lVar2 = *(int64_t *)(this_ptr + 0x18);
        *(int64_t *)(this_ptr + 0x18) = local_80;
        lVar9 = local_80;
      }
      else {
        local_78 = '\0';
        lVar9 = local_80;
LAB_006dfe86:
        *(int64_t *)(this_ptr + 0x18) = lVar9;
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
        lVar9 = local_80;
      }
    }
    if ((local_78 != '\0') && (lVar9 != 0)) {
      FUN_00d50b20();
    }
    local_70 = (int64_t *)&g_0253d630;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    local_70 = &g_024c5048;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar2 = g_027259d0;
  if (*(int64_t *)(this_ptr + 0x20) != 0) goto LAB_006dfd39;
  if (g_027259d0 != 0) {
    FUN_00d50b00();
  }
  local_c0 = lVar2;
  local_b8 = '\x01';
  FUN_006e17f0();
  FUN_00d46530();
  local_b0 = local_a0;
  local_a8 = local_90;
  FUN_00083ea0(2,&local_a8);
  FUN_006e1750();
  lVar2 = *(int64_t *)(this_ptr + 0x20);
  lVar9 = lVar2;
  if (lVar2 != local_80) {
    if (local_78 == '\0') {
      if (local_80 == 0) {
        lVar9 = 0;
        goto LAB_006dff4a;
      }
      FUN_00d50b00();
      lVar2 = *(int64_t *)(this_ptr + 0x20);
      *(int64_t *)(this_ptr + 0x20) = local_80;
      lVar9 = local_80;
    }
    else {
      local_78 = '\0';
      lVar9 = local_80;
LAB_006dff4a:
      *(int64_t *)(this_ptr + 0x20) = lVar9;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar9 = local_80;
    }
  }
  if ((local_78 != '\0') && (lVar9 != 0)) {
    FUN_00d50b20();
  }
  local_70 = (int64_t *)&g_0253d630;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_70 = &g_024c5048;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
LAB_006dfd39:
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &g_025683c0;
  (*g_025683d8)();
  FUN_00c92170();
  uVar12 = FUN_00c92160();
  lVar2 = *(int64_t *)(this_ptr + 0x78);
  *(void**)(this_ptr + 0x78) = puVar8;
  if (lVar2 != 0) {
    uVar12 = FUN_00d50b20();
    puVar8 = *(void**)(this_ptr + 0x78);
  }
  iVar6 = *(int *)(puVar8 + 3);
  FUN_00c8e340(uVar12,1);
  *(void*)(puVar8[2] + (int64_t)iVar6) = 1;
  if ((local_38[0] != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

