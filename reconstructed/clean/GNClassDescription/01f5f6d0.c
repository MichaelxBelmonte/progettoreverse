// Function: FUN_01f5f6d0
// Address: 01f5f6d0
// Size: 5211 bytes
// Class: GNClassDescription
// String references:
//   "GNClassDescription"
//   "%@: %@"
//   "%p"
//   "GNDictionary"
//   "(%@*)%p"
//   "%@:"
// === GNClassDescription properties ===
//                   _potentialValues
//                   _derivationSources
//                   _derivationDestinations
//                   _documentation


void FUN_01f5f6d0(int64_t *param_1)

{
  int64_t lVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined7 uVar8;
  undefined7 extraout_var_02;
  undefined7 extraout_var_03;
  undefined7 extraout_var_04;
  undefined7 extraout_var_05;
  int64_t *plVar9;
  uint32_t uVar10;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t **pplVar11;
  bool bVar12;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar13;
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
  int64_t local_1b8;
  char local_1b0;
  int64_t local_1a8;
  char local_1a0;
  int64_t local_198;
  char local_190;
  int64_t local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t *local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t *local_148;
  char local_140;
  int64_t *local_138;
  char local_130;
  uint32_t local_124;
  int64_t *local_120;
  uint64_t local_118;
  int64_t local_110;
  char local_108;
  int64_t *local_100;
  int64_t *local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  uint64_t local_d8;
  uint64_t local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t *local_b8;
  uint local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  uint64_t local_88;
  int64_t *local_80;
  uint64_t local_78;
  uint64_t local_70;
  uint64_t local_68;
  int64_t *local_60;
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_31;
  
  local_f0 = '\0';
  local_f8 = (int64_t *)0x0;
  plVar9 = (int64_t *)*param_1;
  if ((g_026fdd40 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
  if (plVar9 == (int64_t *)0x0) {
LAB_01f5f737:
    plVar9 = (int64_t *)&g_02802688;
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar9 = param_1;
    if (cVar2 == '\0') goto LAB_01f5f737;
  }
  local_48 = (int64_t *)*plVar9;
  if (local_48 == (int64_t *)0x0) {
    local_118 = 0;
    local_80 = (int64_t *)0x0;
    local_88 = 0;
LAB_01f5fd53:
    (**(code **)(*(int64_t *)*param_1 + 0x198))();
    plVar9 = local_b8;
    *(void*)(this_ptr + 1) = 0;
    if ((char)local_b0 == '\0') {
      if (local_b8 != (int64_t *)0x0) {
        FUN_00d50b00();
        *this_ptr = (int64_t)plVar9;
        *(void*)(this_ptr + 1) = 1;
        if (((char)local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01f5fd94;
      }
      plVar9 = (int64_t *)0x0;
    }
    *this_ptr = (int64_t)plVar9;
    *(void*)(this_ptr + 1) = 1;
LAB_01f5fd94:
    local_d8 = 0;
    plVar9 = (int64_t *)0x0;
    local_d0 = 0;
    plVar7 = (int64_t *)0x0;
  }
  else {
    local_118 = CONCAT71((int7)((uint64_t)local_48 >> 8),(char)plVar9[1]);
    if ((char)plVar9[1] != '\0') {
      FUN_00d50b00();
    }
    plVar9 = g_028007b8;
    if (g_028007b8 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_b8 = plVar9;
    local_b0 = local_b0 & 0xffffff00;
    cVar2 = FUN_00c9ff50();
    uVar13 = extraout_XMM0_Da;
    if (((char)local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
      uVar13 = FUN_00d50b20();
    }
    if (plVar9 != (int64_t *)0x0) {
      uVar13 = FUN_00d50b20();
    }
    lVar1 = g_027fec90;
    plVar9 = g_027c6f80;
    if (cVar2 == '\0') {
      if (g_027c6f80 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_b8 = plVar9;
      local_b0 = local_b0 & 0xffffff00;
      cVar2 = FUN_00c9ff50();
      uVar13 = extraout_XMM0_Da_01;
      if (((char)local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b20();
      }
      plVar7 = g_027c6f80;
      if (cVar2 == '\0') {
        local_88 = 0;
        local_80 = (int64_t *)0x0;
        bVar12 = false;
      }
      else {
        if (g_027c6f80 != (int64_t *)0x0) {
          uVar13 = FUN_00d50b00();
        }
        local_138 = plVar7;
        local_130 = '\x01';
        pplVar11 = &local_b8;
        (**(code **)(*local_48 + 0x88))(uVar13,&local_138);
        plVar7 = local_b8;
        if ((g_026cf800 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
          g_027760a8 = FUN_00d4fe50();
          g_02776090 = "GNClassDescription";
          g_02776098 = 0xe8;
          g_027760a0 = FUN_0002f240;
          g_027760b0 = 0;
          ram_00000000027760b8 = 0;
          g_027760c0 = 0;
          ram_00000000027760c8 = 0;
          g_027760d0 = 0;
          ram_00000000027760d8 = 0;
          g_027760e0 = 0;
          ram_00000000027760e8 = 0;
          g_027760f0 = 0;
          ram_00000000027760f8 = 0;
          g_02776100 = 0;
          ram_0000000002776108 = 0;
          g_02776110 = 0;
          ram_0000000002776118 = 0;
          g_02776120 = 0;
          ram_0000000002776128 = 0;
          g_02776130 = 0;
          ram_0000000002776138 = 0;
          g_02776140 = 0;
          ram_0000000002776148 = 0;
          g_02776150 = 0;
          ___cxa_guard_release();
        }
        if (plVar7 == (int64_t *)0x0) {
LAB_01f5f92b:
          pplVar11 = &g_02802688;
        }
        else {
          (**(code **)(*plVar7 + 0x360))();
          cVar2 = FUN_00e85ea0();
          if (cVar2 == '\0') goto LAB_01f5f92b;
        }
        plVar7 = *pplVar11;
        if (plVar7 == (int64_t *)0x0) {
          local_88 = 0;
          plVar7 = (int64_t *)0x0;
        }
        else {
          if (*(char *)(pplVar11 + 1) == '\0') {
            plVar6 = (int64_t *)FUN_00d50b00();
          }
          else {
            *(void*)(pplVar11 + 1) = 0;
            plVar6 = plVar7;
          }
          local_88 = CONCAT71((int7)((uint64_t)plVar6 >> 8),1);
        }
        bVar12 = plVar7 != (int64_t *)0x0;
        local_80 = plVar7;
        if (((char)local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (plVar9 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (!bVar12) goto LAB_01f5fd53;
      FUN_00c7e7b0();
      local_100 = local_e8;
      local_120 = (int64_t *)*param_1;
      uVar13 = FUN_00083ea0(2,&local_120);
      FUN_00d8cb40(uVar13,&local_b8);
      lVar1 = local_c8;
      *(void*)(this_ptr + 1) = 0;
      if (local_c0 == '\0') {
        if (local_c8 == 0) {
          *this_ptr = 0;
          *(void*)(this_ptr + 1) = 1;
        }
        else {
          FUN_00d50b00();
          *this_ptr = lVar1;
          *(void*)(this_ptr + 1) = 1;
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        *this_ptr = local_c8;
        *(void*)(this_ptr + 1) = 1;
        local_c0 = '\0';
      }
      local_b8 = (int64_t *)&g_0253d630;
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      local_b8 = &g_024c5048;
      if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01f5fd94;
    }
    if (g_027fec90 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_1b8 = lVar1;
    local_1b0 = '\x01';
    uVar5 = (**(code **)(*local_48 + 0x88))(uVar13,&local_1b8);
    plVar7 = local_b8;
    uVar13 = extraout_XMM0_Da_00;
    if (local_b8 == (int64_t *)0x0) {
      local_d8 = 0;
      bVar12 = true;
      plVar9 = (int64_t *)0x0;
joined_r0x01f5f983:
      if (((char)local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b20();
      }
    }
    else {
      if ((char)local_b0 == '\0') {
        uVar5 = FUN_00d50b00();
        local_d8 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
        bVar12 = plVar7 == (int64_t *)0x0;
        plVar9 = plVar7;
        uVar13 = extraout_XMM0_Da_02;
        goto joined_r0x01f5f983;
      }
      local_b0 = local_b0 & 0xffffff00;
      local_d8 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
      bVar12 = false;
      plVar9 = local_b8;
    }
    if ((local_1b0 != '\0') && (local_1b8 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    lVar1 = g_028007c0;
    if (bVar12) {
      if (g_028007c0 != 0) {
        uVar13 = FUN_00d50b00();
      }
      local_1a8 = lVar1;
      local_1a0 = '\x01';
      uVar5 = (**(code **)(*local_48 + 0x88))(uVar13,&local_1a8);
      plVar7 = local_b8;
      uVar13 = extraout_XMM0_Da_03;
      if (local_b8 == (int64_t *)0x0) {
        local_d0 = 0;
        plVar7 = (int64_t *)0x0;
        bVar12 = true;
joined_r0x01f5fa98:
        if (((char)local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
      }
      else {
        if ((char)local_b0 == '\0') {
          uVar5 = FUN_00d50b00();
          local_d0 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
          bVar12 = plVar7 == (int64_t *)0x0;
          uVar13 = extraout_XMM0_Da_04;
          goto joined_r0x01f5fa98;
        }
        local_b0 = local_b0 & 0xffffff00;
        local_d0 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
        bVar12 = false;
      }
      if ((local_1a0 != '\0') && (local_1a8 != 0)) {
        uVar13 = FUN_00d50b20();
      }
      lVar1 = g_027756f0;
      if (bVar12) {
        if (g_027756f0 != 0) {
          uVar13 = FUN_00d50b00();
        }
        local_198 = lVar1;
        local_190 = '\x01';
        uVar13 = (**(code **)(*local_48 + 0x88))(uVar13,&local_198);
        local_80 = local_b8;
        if (local_b8 == (int64_t *)0x0) {
          local_88 = 0;
          local_80 = (int64_t *)0x0;
joined_r0x01f5ff2c:
          if (((char)local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
            uVar13 = FUN_00d50b20();
          }
        }
        else {
          if ((char)local_b0 == '\0') {
            uVar5 = FUN_00d50b00();
            local_88 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
            uVar13 = extraout_XMM0_Da_05;
            goto joined_r0x01f5ff2c;
          }
          local_b0 = local_b0 & 0xffffff00;
          local_88 = CONCAT71((int7)((uint64_t)local_b8 >> 8),1);
        }
        if ((local_190 != '\0') && (local_198 != 0)) {
          uVar13 = FUN_00d50b20();
        }
        lVar1 = g_02704000;
        if (g_02704000 != 0) {
          uVar13 = FUN_00d50b00();
        }
        local_188 = lVar1;
        local_180 = '\x01';
        uVar5 = (**(code **)(*local_48 + 0x88))(uVar13,&local_188);
        plVar9 = local_b8;
        uVar13 = extraout_XMM0_Da_06;
        if (local_b8 == (int64_t *)0x0) {
          local_68 = 0;
          local_60 = (int64_t *)0x0;
joined_r0x01f60043:
          if (((char)local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
            uVar13 = FUN_00d50b20();
          }
        }
        else {
          if ((char)local_b0 == '\0') {
            uVar5 = FUN_00d50b00();
            local_68 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
            uVar13 = extraout_XMM0_Da_07;
            local_60 = plVar9;
            goto joined_r0x01f60043;
          }
          local_b0 = local_b0 & 0xffffff00;
          local_68 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
          local_60 = local_b8;
        }
        if ((local_180 != '\0') && (local_188 != 0)) {
          uVar13 = FUN_00d50b20();
        }
        lVar1 = g_027e7c20;
        if (g_027e7c20 != 0) {
          uVar13 = FUN_00d50b00();
        }
        local_178 = lVar1;
        local_170 = '\x01';
        uVar13 = (**(code **)(*local_48 + 0x88))(uVar13,&local_178);
        local_50 = local_b8;
        if (local_b8 == (int64_t *)0x0) {
          uVar10 = (uint32_t)CONCAT71((int7)((uint64_t)lVar1 >> 8),1);
          local_50 = (int64_t *)0x0;
          local_70 = 0;
        }
        else {
          if ((char)local_b0 == '\0') {
            uVar5 = FUN_00d50b00();
            uVar10 = 0;
            local_70 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
            uVar13 = extraout_XMM0_Da_08;
            if (((char)local_b0 == '\0') || (local_b8 == (int64_t *)0x0)) goto LAB_01f60135;
            plVar7 = (int64_t *)FUN_00d50b20();
            uVar13 = extraout_XMM0_Da_09;
          }
          else {
            local_b0 = local_b0 & 0xffffff00;
            plVar7 = local_b8;
          }
          local_70 = CONCAT71((int7)((uint64_t)plVar7 >> 8),1);
          uVar10 = 0;
        }
LAB_01f60135:
        if ((local_170 != '\0') && (local_178 != 0)) {
          uVar13 = FUN_00d50b20();
        }
        local_40 = plVar9;
        local_168 = local_60;
        local_160 = '\0';
        local_124 = uVar10;
        uVar13 = FUN_00c841b0(uVar13,&local_168);
        plVar7 = local_b8;
        cVar2 = local_f0;
        plVar9 = local_f8;
        if (local_f8 == local_b8) {
          plVar7 = local_f8;
          if ((local_f0 != '\0') || (local_b8 == (int64_t *)0x0)) goto LAB_01f60231;
          if ((char)local_b0 == '\0') {
            uVar13 = FUN_00d50b00();
            plVar7 = plVar9;
            goto LAB_01f60227;
          }
LAB_01f601da:
          local_f0 = '\x01';
          local_b0 = local_b0 & 0xffffff00;
        }
        else {
          if ((char)local_b0 != '\0') {
            local_f8 = local_b8;
            if ((local_f0 != '\0') && (plVar9 != (int64_t *)0x0)) {
              uVar13 = FUN_00d50b20();
            }
            goto LAB_01f601da;
          }
          if (local_b8 != (int64_t *)0x0) {
            uVar13 = FUN_00d50b00();
          }
          local_f8 = plVar7;
          if ((cVar2 != '\0') && (plVar9 != (int64_t *)0x0)) {
            uVar13 = FUN_00d50b20();
          }
LAB_01f60227:
          local_f0 = '\x01';
LAB_01f60231:
          if (((char)local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
            uVar13 = FUN_00d50b20();
          }
        }
        if ((local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
        lVar1 = g_0276caa0;
        if (g_0276caa0 != 0) {
          uVar13 = FUN_00d50b00();
        }
        local_158 = lVar1;
        local_150 = '\x01';
        (**(code **)(*local_48 + 0x88))(uVar13,&local_158);
        local_58 = local_b8;
        if (local_b8 == (int64_t *)0x0) {
          local_58 = (int64_t *)0x0;
          local_78 = 0;
        }
        else if ((char)local_b0 == '\0') {
          uVar5 = FUN_00d50b00();
          local_78 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
          if (((char)local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_b0 = local_b0 & 0xffffff00;
          local_78 = CONCAT71((int7)((uint64_t)local_b8 >> 8),1);
        }
        if ((local_150 != '\0') && (local_158 != 0)) {
          FUN_00d50b20();
        }
        if (*(int64_t *)(arg1 + 0x98) == 0) {
LAB_01f60480:
          FUN_000274b0();
          if (plVar7 == (int64_t *)0x0) {
LAB_01f604a9:
            plVar9 = g_02802688;
            plVar6 = g_02802688;
            cVar2 = g_02802690;
            if (g_02802690 == '\0') goto LAB_01f604e0;
LAB_01f604d1:
            plVar6 = (int64_t *)0x0;
            if (plVar9 == (int64_t *)0x0) goto LAB_01f604e0;
            FUN_00d50b00();
          }
          else {
            (**(code **)(*plVar7 + 0x360))();
            cVar2 = FUN_00e85ea0();
            if (cVar2 == '\0') goto LAB_01f604a9;
            plVar9 = local_f8;
            plVar6 = local_f8;
            cVar2 = local_f0;
            if (local_f0 != '\0') goto LAB_01f604d1;
LAB_01f604e0:
            plVar9 = local_40;
            if (plVar6 == (int64_t *)0x0) {
              if (((plVar7 != (int64_t *)0x0) || (local_50 == (int64_t *)0x0)) ||
                 (cVar2 = (**(code **)(*local_50 + 0x70))(), cVar2 == '\0')) {
                plVar7 = local_60;
                *(void*)(this_ptr + 1) = 0;
                if (plVar9 == (int64_t *)0x0) {
                  if (local_60 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                  *this_ptr = (int64_t)plVar7;
                }
                else {
                  *this_ptr = (int64_t)local_60;
                }
                *(void*)(this_ptr + 1) = 1;
                plVar9 = (int64_t *)0x0;
                plVar7 = (int64_t *)0x0;
                local_68 = 0;
                goto LAB_01f5fdc7;
              }
              local_e8 = local_60;
              local_100 = local_50;
              uVar13 = FUN_00083ea0(2,&local_100);
              FUN_00d8cb40(uVar13,&local_b8);
              lVar1 = local_c8;
              *(void*)(this_ptr + 1) = 0;
              if (local_c0 == '\0') {
                if (local_c8 == 0) {
                  *this_ptr = 0;
                  *(void*)(this_ptr + 1) = 1;
                }
                else {
                  FUN_00d50b00();
                  *this_ptr = lVar1;
                  *(void*)(this_ptr + 1) = 1;
                  if ((local_c0 != '\0') && (local_c8 != 0)) {
                    FUN_00d50b20();
                  }
                }
              }
              else {
                *this_ptr = local_c8;
                *(void*)(this_ptr + 1) = 1;
                local_c0 = '\0';
              }
              local_b8 = (int64_t *)&g_0253d630;
              if ((local_90 != '\0') && (local_98 != 0)) {
                FUN_00d50b20();
              }
              local_b8 = &g_024c5048;
              if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_01f608c7;
            }
          }
          FUN_00c77cd0();
          cVar3 = FUN_00c7b220();
          if (((char)local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar3 == 'e') {
            local_31 = cVar2;
            uVar13 = FUN_00c77cd0();
            local_148 = local_50;
            local_140 = '\0';
            FUN_00c7b3d0(uVar13,&local_148);
            plVar9 = local_b8;
            uVar8 = extraout_var;
            if ((char)local_b0 == '\0') {
              if (local_b8 != (int64_t *)0x0) {
                FUN_00d50b00();
                uVar8 = extraout_var_03;
                if (((char)local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                  uVar8 = extraout_var_04;
                }
              }
            }
            else {
              local_b0 = local_b0 & 0xffffff00;
            }
            if ((local_140 != '\0') && (local_148 != (int64_t *)0x0)) {
              FUN_00d50b20();
              uVar8 = extraout_var_00;
            }
            if ((local_c0 != '\0') && (local_c8 != 0)) {
              FUN_00d50b20();
              uVar8 = extraout_var_01;
            }
            cVar2 = local_31;
            if (plVar9 != (int64_t *)0x0) {
              if (plVar9 == local_50) {
                plVar9 = local_50;
                if ((char)local_124 != '\0') {
                  FUN_00d50b00();
                  plVar9 = local_50;
                  uVar8 = extraout_var_05;
                }
              }
              else {
                uVar5 = FUN_00d50b00();
                uVar8 = (undefined7)((uint64_t)uVar5 >> 8);
                if (((byte)local_70 & local_50 != (int64_t *)0x0) == 1) {
                  FUN_00d50b20();
                  uVar8 = extraout_var_02;
                }
              }
              local_70 = CONCAT71(uVar8,1);
              FUN_00d50b20();
              cVar2 = local_31;
              local_50 = plVar9;
            }
          }
          FUN_00d74120();
          local_100 = local_e8;
          local_120 = local_50;
          uVar13 = FUN_00083ea0(2,&local_120);
          FUN_00d8cb40(uVar13,&local_b8);
          lVar1 = local_c8;
          *(void*)(this_ptr + 1) = 0;
          if (local_c0 == '\0') {
            if (local_c8 == 0) {
              *this_ptr = 0;
              *(void*)(this_ptr + 1) = 1;
            }
            else {
              FUN_00d50b00();
              *this_ptr = lVar1;
              *(void*)(this_ptr + 1) = 1;
              if ((local_c0 != '\0') && (local_c8 != 0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            *this_ptr = local_c8;
            *(void*)(this_ptr + 1) = 1;
            local_c0 = '\0';
          }
          local_b8 = (int64_t *)&g_0253d630;
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          local_b8 = &g_024c5048;
          if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar2 != '\0') {
            FUN_00d50b20();
          }
        }
        else {
          local_108 = 0;
          lVar1 = *(int64_t *)(arg1 + 0xb0);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          local_108 = '\x01';
          local_110 = lVar1;
          cVar2 = (**(code **)(*local_60 + 0x50))();
          bVar12 = false;
          if ((cVar2 != '\0') && (bVar12 = false, local_58 != (int64_t *)0x0)) {
            bVar12 = *(int64_t **)(arg1 + 0xa0) == local_58;
          }
          if ((local_108 != '\0') && (local_110 != 0)) {
            FUN_00d50b20();
          }
          if (!bVar12) goto LAB_01f60480;
          uVar13 = FUN_00d74120();
          local_a8 = local_e8;
          local_b0 = 1;
          local_b8 = &g_024c5048;
          local_a0 = 0;
          if (local_e8 != (int64_t *)0x0) {
            uVar13 = FUN_00d50b00();
          }
          local_a0 = '\x01';
          FUN_00d8cb40(uVar13,&local_b8);
          lVar1 = local_c8;
          *(void*)(this_ptr + 1) = 0;
          if (local_c0 == '\0') {
            if (local_c8 == 0) {
              *this_ptr = 0;
              *(void*)(this_ptr + 1) = 1;
            }
            else {
              FUN_00d50b00();
              *this_ptr = lVar1;
              *(void*)(this_ptr + 1) = 1;
              if ((local_c0 != '\0') && (local_c8 != 0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            *this_ptr = local_c8;
            *(void*)(this_ptr + 1) = 1;
            local_c0 = '\0';
          }
          local_b8 = &g_024c5048;
          if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
LAB_01f608c7:
        plVar9 = (int64_t *)0x0;
        plVar7 = (int64_t *)0x0;
        goto LAB_01f5fdc7;
      }
      local_a8 = (int64_t *)FUN_00dd6dc0();
      local_b0 = 1;
      local_b8 = (int64_t *)&g_02576920;
      FUN_00d8cb40(&g_02576920,&local_b8);
      lVar1 = local_c8;
      *(void*)(this_ptr + 1) = 0;
      if (local_c0 == '\0') {
        if (local_c8 == 0) {
          local_c8 = 0;
          goto LAB_01f5fbc6;
        }
        FUN_00d50b00();
        *this_ptr = lVar1;
        *(void*)(this_ptr + 1) = 1;
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
LAB_01f5fbc6:
        *this_ptr = local_c8;
        *(void*)(this_ptr + 1) = 1;
      }
      plVar9 = (int64_t *)0x0;
    }
    else {
      *(void*)(this_ptr + 1) = 0;
      if (plVar7 == (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *this_ptr = (int64_t)plVar9;
      *(void*)(this_ptr + 1) = 1;
      local_d8 = 0;
      local_d0 = 0;
      plVar7 = (int64_t *)0x0;
    }
    local_88 = 0;
    local_80 = (int64_t *)0x0;
  }
  local_78 = 0;
  local_58 = (int64_t *)0x0;
  local_70 = 0;
  local_50 = (int64_t *)0x0;
  local_68 = 0;
  local_60 = (int64_t *)0x0;
LAB_01f5fdc7:
  if (((char)local_118 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_d8 != '\0') && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_d0 != '\0') && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_88 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_78 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_70 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_68 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

