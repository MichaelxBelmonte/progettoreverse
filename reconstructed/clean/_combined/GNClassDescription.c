// ===================================================================
// GNClassDescription — Complete reconstructed pseudocode
// 8 functions
// ===================================================================

// Registered properties (4):
//                   _potentialValues
//                   _derivationSources
//                   _derivationDestinations
//                   _documentation


// ============================================================
// 01f5f6d0
// ============================================================
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



// ============================================================
// 01e2d210
// ============================================================
// Function: FUN_01e2d210
// Address: 01e2d210
// Size: 3705 bytes
// Class: GNClassDescription
// === GNClassDescription properties ===
//                   _potentialValues
//                   _derivationSources
//                   _derivationDestinations
//                   _documentation


void* FUN_01e2d210(void)

{
  bool bVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t lVar5;
  char cVar6;
  int64_t *plVar7;
  int64_t arg1;
  void*this_ptr;
  bool bVar8;
  byte bVar9;
  bool bVar10;
  int64_t *local_140;
  char local_138;
  int64_t *local_78;
  char local_70;
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_40;
  char local_38;
  
  lVar2 = g_028b9590;
  if (g_028b9590 != 0) {
    FUN_00d50b00();
  }
  FUN_000175c0();
  if (local_78 == (int64_t *)0x0) {
    cVar6 = '\0';
  }
  else {
    if (local_70 == '\0') {
      FUN_00d50b00();
    }
    else {
      local_70 = '\0';
    }
    local_38 = '\0';
    cVar6 = FUN_00c9ff50();
    local_40 = local_78;
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  plVar7 = g_028b9540;
  if (cVar6 != '\0') {
    FUN_000175c0();
    *(void*)(this_ptr + 1) = 0;
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) {
        *this_ptr = 0;
        *(void*)(this_ptr + 1) = 1;
      }
      else {
        FUN_00d50b00();
        *this_ptr = local_40;
        *(void*)(this_ptr + 1) = 1;
      }
    }
    else {
      *this_ptr = local_40;
      *(void*)(this_ptr + 1) = 1;
    }
    bVar1 = false;
    bVar8 = false;
    local_58 = (int64_t *)0x0;
    plVar7 = (int64_t *)0x0;
    goto joined_r0x01e2dc4b;
  }
  if (g_028b9540 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_40 = plVar7;
  cVar6 = FUN_00c9ff50();
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  plVar3 = g_028b9540;
  lVar2 = g_028b9520;
  if (cVar6 != '\0') {
    if (g_028b9540 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_000175c0();
    local_50 = plVar7;
    if (plVar7 == (int64_t *)0x0) {
      local_50 = (int64_t *)0x0;
    }
    else {
      FUN_00d50b00();
    }
    bVar1 = plVar7 != (int64_t *)0x0;
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    FUN_00c80cd0();
    local_58 = plVar7;
    if (plVar7 == (int64_t *)0x0) {
      local_58 = (int64_t *)0x0;
    }
    else {
      FUN_00d50b00();
    }
    bVar8 = plVar7 != (int64_t *)0x0;
    if ((local_58 == (int64_t *)0x0) || (cVar6 = FUN_00c811c0(), cVar6 == '\0')) {
      *(void*)(arg1 + 0x39) = 1;
      FUN_00d8ede0();
      lVar2 = g_027f3840;
      if ((local_70 == '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b00();
        lVar2 = g_027f3840;
      }
      g_027f3840 = lVar2;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_00ca0840();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (local_78 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      plVar7 = local_50;
    }
    else {
      FUN_00c811e0();
      bVar10 = plVar7 == (int64_t *)0x0;
      if (bVar10) {
        plVar7 = (int64_t *)0x0;
      }
      else {
        FUN_00d50b00();
      }
      (**(code **)(*plVar7 + 0x18))();
      *(void*)(this_ptr + 1) = 0;
      if (bVar10) {
        FUN_00d50b00();
        *this_ptr = plVar7;
        *(void*)(this_ptr + 1) = 1;
        plVar7 = local_50;
      }
      else {
        *this_ptr = plVar7;
        *(void*)(this_ptr + 1) = 1;
        plVar7 = local_50;
      }
    }
    goto joined_r0x01e2dc4b;
  }
  if (g_028b9520 != 0) {
    FUN_00d50b00();
  }
  FUN_000175c0();
  if (plVar7 == (int64_t *)0x0) {
    bVar9 = 1;
    bVar1 = false;
    plVar7 = (int64_t *)0x0;
    bVar8 = false;
    local_58 = (int64_t *)0x0;
    bVar10 = false;
  }
  else {
    FUN_00d50b00();
    lVar4 = g_028b9550;
    if (g_028b9550 != 0) {
      FUN_00d50b00();
    }
    cVar6 = (**(code **)(*plVar7 + 0x50))();
    lVar5 = g_028b9570;
    if (cVar6 == '\0') {
      bVar8 = false;
      local_58 = (int64_t *)0x0;
      bVar10 = false;
    }
    else {
      if (g_028b9570 != 0) {
        FUN_00d50b00();
      }
      FUN_000175c0();
      if (local_78 == plVar7) {
LAB_01e2d8a8:
        cVar6 = FUN_00c817a0();
        if (cVar6 == '\0') {
          bVar8 = false;
          local_58 = (int64_t *)0x0;
          bVar10 = false;
        }
        else {
          FUN_00c80cd0();
          local_58 = local_140;
          if (local_140 == (int64_t *)0x0) {
            bVar8 = false;
            local_58 = (int64_t *)0x0;
          }
          else {
            if (local_138 != '\0') {
              bVar10 = true;
              bVar8 = true;
              goto LAB_01e2d9e7;
            }
            FUN_00d50b00();
            bVar8 = true;
          }
          bVar10 = local_58 != (int64_t *)0x0;
          if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        if (local_70 == '\0') {
          if (local_78 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
        }
        else {
          FUN_00d50b20();
          local_70 = '\0';
        }
        plVar7 = local_78;
        if (local_78 != (int64_t *)0x0) goto LAB_01e2d8a8;
        plVar7 = (int64_t *)0x0;
        bVar10 = false;
        local_58 = (int64_t *)0x0;
        bVar8 = false;
      }
LAB_01e2d9e7:
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
    }
    bVar9 = 0;
    bVar1 = true;
    if (lVar4 != 0) {
      FUN_00d50b20();
      bVar1 = true;
      bVar9 = 0;
    }
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_028b9520;
  if (bVar10) {
    FUN_00d8ede0();
    lVar2 = g_028b9530;
    if ((local_70 == '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b00();
      lVar2 = g_028b9530;
    }
    g_028b9530 = lVar2;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (local_78 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 1) = 0;
    if (bVar8) {
      *this_ptr = local_58;
    }
    else {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *this_ptr = local_58;
    }
    *(void*)(this_ptr + 1) = 1;
    bVar8 = false;
    goto joined_r0x01e2dc4b;
  }
  if (g_028b9520 != 0) {
    FUN_00d50b00();
  }
  FUN_000175c0();
  if (local_78 == plVar7) {
    if ((bool)(bVar9 & local_78 != (int64_t *)0x0)) {
      if (local_70 != '\0') goto LAB_01e2dc1a;
      bVar1 = true;
      FUN_00d50b00();
    }
  }
  else {
    if (local_70 == '\0') {
      if (local_78 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      bVar10 = (bool)(bVar1 & plVar7 != (int64_t *)0x0);
      bVar1 = true;
      plVar7 = local_78;
      if (bVar10) {
        FUN_00d50b20();
        goto LAB_01e2dc93;
      }
    }
    else {
      bVar10 = plVar7 != (int64_t *)0x0;
      plVar7 = local_78;
      if ((bool)(bVar1 & bVar10)) {
        FUN_00d50b20();
      }
LAB_01e2dc1a:
      local_70 = '\0';
    }
    bVar1 = true;
  }
LAB_01e2dc93:
  lVar4 = g_028b9560;
  if (plVar7 == (int64_t *)0x0) {
    cVar6 = '\0';
  }
  else {
    if (g_028b9560 != 0) {
      FUN_00d50b00();
    }
    cVar6 = (**(code **)(*plVar7 + 0x50))();
    plVar3 = g_028b9580;
    if (cVar6 == '\0') {
      cVar6 = '\0';
    }
    else {
      if (g_028b9580 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_40 = plVar3;
      cVar6 = FUN_00c9ff50();
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (cVar6 != '\0') {
    FUN_01cb4790();
    if (local_40 == (int64_t *)0x0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      goto joined_r0x01e2dc4b;
    }
    FUN_00d50b00();
    plVar3 = g_028b9580;
    if (g_028b9580 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_000175c0();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*local_40 + 0x3b8))();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      FUN_01d51d50();
    }
    FUN_01d51a40();
    if (local_40 != (int64_t *)0x0) {
      *(void*)(local_40 + 0xc) = 1;
      *this_ptr = local_40;
      *(void*)(this_ptr + 1) = 1;
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (local_40 != (int64_t *)0x0) goto joined_r0x01e2dc4b;
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
joined_r0x01e2dc4b:
  if (local_78 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar1) && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar8) && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 01e2fa60
// ============================================================
// Function: FUN_01e2fa60
// Address: 01e2fa60
// Size: 1358 bytes
// Class: GNClassDescription
// === GNClassDescription properties ===
//                   _potentialValues
//                   _derivationSources
//                   _derivationDestinations
//                   _documentation


int64_t * FUN_01e2fa60(void)

{
  int iVar1;
  int64_t *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int64_t lVar6;
  char cVar7;
  int iVar8;
  int64_t *plVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t **pplVar10;
  int64_t lVar11;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  iVar8 = 0;
  if (*arg1 == 0) {
LAB_01e2fbb4:
    bVar3 = false;
  }
  else {
    FUN_00d4efa0();
    lVar11 = g_02800140;
    if (g_02800140 != 0) {
      FUN_00d50b00();
    }
    FUN_00c841b0();
    plVar9 = local_58;
    pplVar10 = (int64_t **)local_38;
    if ((char)local_50 != '\0') {
      pplVar10 = &local_50;
    }
    local_38[0] = (char)local_50;
    *(void*)pplVar10 = 0;
    if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar11 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (int64_t *)0x0) goto LAB_01e2fbb4;
    pplVar10 = &local_58;
    (**(code **)(*(int64_t *)*arg1 + 0x210))();
    plVar9 = local_58;
    FUN_00081d60();
    if (plVar9 == (int64_t *)0x0) {
LAB_01e2fb76:
      pplVar10 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar9 + 0x360))();
      cVar7 = FUN_00e85ea0();
      if (cVar7 == '\0') goto LAB_01e2fb76;
    }
    plVar9 = *pplVar10;
    if (plVar9 == (int64_t *)0x0) {
      bVar5 = true;
      bVar4 = true;
      bVar3 = false;
      plVar9 = (int64_t *)0x0;
    }
    else if (*(char *)(pplVar10 + 1) == '\0') {
      FUN_00d50b00();
      bVar3 = true;
      bVar5 = false;
      bVar4 = false;
    }
    else {
      *(void*)(pplVar10 + 1) = 0;
      bVar3 = true;
      bVar5 = false;
      bVar4 = false;
    }
    if (((char)local_50 != '\0') && (bVar4 = bVar5, local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
    if (plVar9 != (int64_t *)0x0) {
      *(void*)(this_ptr + 1) = 0;
      if (bVar4) {
        FUN_00d50b00();
      }
      *this_ptr = (int64_t)plVar9;
      goto LAB_01e2ff9a;
    }
  }
  lVar11 = 0;
  local_48 = (int64_t *)0x0;
  while( true ) {
    FUN_00ca1380();
    plVar9 = local_58;
    local_68 = (int64_t *)CONCAT71(local_68._1_7_,(char)local_50);
    pplVar10 = &local_50;
    if ((char)local_50 == '\0') {
      pplVar10 = &local_68;
    }
    *(void*)pplVar10 = 0;
    if (((char)local_50 != '\0') && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    iVar1 = *(int *)((int64_t)plVar9 + 0xc);
    if ((char)local_68 != '\0') {
      FUN_00d50b20();
    }
    lVar6 = g_026d83d0;
    if (iVar1 <= lVar11) break;
    FUN_00ca1380();
    plVar9 = local_58;
    local_40[0] = (char)local_50;
    pplVar10 = &local_50;
    if ((char)local_50 == '\0') {
      pplVar10 = (int64_t **)local_40;
    }
    *(void*)pplVar10 = 0;
    if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar9 = *(int64_t **)(plVar9[2] + lVar11 * 8);
    local_60 = '\0';
    local_68 = plVar9;
    FUN_00081d60();
    pplVar10 = (int64_t **)&g_02802688;
    if (plVar9 != (int64_t *)0x0) {
      (**(code **)(*plVar9 + 0x360))();
      cVar7 = FUN_00e85ea0();
      pplVar10 = &local_68;
      if (cVar7 == '\0') {
        pplVar10 = (int64_t **)&g_02802688;
      }
    }
    plVar2 = *pplVar10;
    local_38[0] = *(char *)(pplVar10 + 1);
    pplVar10 = pplVar10 + 1;
    if (local_38[0] == '\0') {
      pplVar10 = (int64_t **)local_38;
    }
    *(void*)pplVar10 = 0;
    if ((local_60 != '\0') && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40[0] != '\0') {
      FUN_00d50b20();
    }
    plVar9 = local_48;
    bVar4 = bVar3;
    if (plVar2 != (int64_t *)0x0) {
      iVar8 = iVar8 + 1;
      if (plVar2 == local_48) {
        plVar2 = local_48;
        if (bVar3) goto joined_r0x01e2fd4c;
        bVar4 = true;
        if (local_38[0] == '\0') {
          FUN_00d50b00();
          plVar9 = local_48;
        }
      }
      else if (local_38[0] == '\0') {
        FUN_00d50b00();
        bVar4 = true;
        if ((bVar3) && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
joined_r0x01e2fd4c:
        local_48 = plVar2;
        plVar9 = local_48;
        if (local_38[0] != '\0') {
          FUN_00d50b20();
          plVar9 = local_48;
        }
      }
      else {
        bVar4 = true;
        plVar9 = plVar2;
        if ((bVar3) && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    bVar3 = bVar4;
    local_48 = plVar9;
    lVar11 = lVar11 + 1;
  }
  if (iVar8 < 2) {
    *(void*)(this_ptr + 1) = 0;
    if (bVar3) goto LAB_01e2fe4d;
  }
  else {
    if (g_026d83d0 != 0) {
      FUN_00d50b00();
    }
    FUN_000175c0();
    plVar9 = local_58;
    if (local_58 == local_48) {
      if ((!bVar3) && (local_58 != (int64_t *)0x0)) {
        plVar9 = local_48;
        if ((char)local_50 != '\0') goto LAB_01e2fe8e;
        bVar3 = true;
        FUN_00d50b00();
      }
LAB_01e2ff3f:
      plVar9 = local_48;
      if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if ((char)local_50 == '\0') {
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar3) && (local_48 != (int64_t *)0x0)) {
          local_48 = plVar9;
          FUN_00d50b20();
          bVar3 = true;
        }
        else {
          local_48 = plVar9;
          bVar3 = true;
        }
        goto LAB_01e2ff3f;
      }
      if ((bVar3) && (local_48 != (int64_t *)0x0)) {
        local_48 = local_58;
        FUN_00d50b20();
      }
LAB_01e2fe8e:
      local_50._0_1_ = '\0';
      bVar3 = true;
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 1) = 0;
    local_48 = plVar9;
    if (bVar3) {
LAB_01e2fe4d:
      *this_ptr = (int64_t)local_48;
      goto LAB_01e2ff9a;
    }
  }
  plVar9 = local_48;
  if (local_48 == (int64_t *)0x0) {
    plVar9 = (int64_t *)0x0;
  }
  else {
    FUN_00d50b00();
  }
  *this_ptr = (int64_t)plVar9;
LAB_01e2ff9a:
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 01e30780
// ============================================================
// Function: FUN_01e30780
// Address: 01e30780
// Size: 1196 bytes
// Class: GNClassDescription
// === GNClassDescription properties ===
//                   _potentialValues
//                   _derivationSources
//                   _derivationDestinations
//                   _documentation


int64_t * FUN_01e30780(void)

{
  int iVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  bool bVar4;
  int64_t lVar5;
  char cVar6;
  uint64_t uVar7;
  char *pcVar8;
  int64_t *plVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t **pplVar10;
  int64_t lVar11;
  int iVar12;
  undefined7 uVar14;
  uint64_t uVar13;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  int64_t *local_50;
  char local_48 [8];
  uint64_t local_40;
  char local_38 [8];
  
  if (*arg1 == 0) {
LAB_01e308b8:
    local_40 = 0;
  }
  else {
    FUN_00d4efa0();
    lVar11 = g_027fecb0;
    if (g_027fecb0 != 0) {
      FUN_00d50b00();
    }
    FUN_00c841b0();
    plVar9 = local_50;
    pcVar8 = local_38;
    if (local_48[0] != '\0') {
      pcVar8 = local_48;
    }
    local_38[0] = local_48[0];
    *pcVar8 = '\0';
    if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar11 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (int64_t *)0x0) goto LAB_01e308b8;
    pplVar10 = &local_50;
    (**(code **)(*(int64_t *)*arg1 + 0x210))();
    plVar9 = local_50;
    uVar7 = FUN_0020e360();
    if (plVar9 == (int64_t *)0x0) {
LAB_01e3088d:
      pplVar10 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar9 + 0x360))();
      uVar7 = FUN_00e85ea0();
      if ((char)uVar7 == '\0') goto LAB_01e3088d;
    }
    plVar9 = *pplVar10;
    if (plVar9 == (int64_t *)0x0) {
      bVar4 = true;
      local_40 = 0;
      plVar9 = (int64_t *)0x0;
    }
    else {
      if (*(char *)(pplVar10 + 1) == '\0') {
        uVar7 = FUN_00d50b00();
      }
      else {
        *(void*)(pplVar10 + 1) = 0;
      }
      local_40 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
      bVar4 = false;
    }
    if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
    if (plVar9 != (int64_t *)0x0) {
      *(void*)(this_ptr + 1) = 0;
      if (bVar4) {
        FUN_00d50b00();
      }
      *this_ptr = (int64_t)plVar9;
      goto LAB_01e30c1e;
    }
  }
  iVar12 = 0;
  lVar11 = 0;
  local_58 = (int64_t *)0x0;
  while( true ) {
    FUN_00ca1380();
    plVar9 = local_50;
    local_68 = (int64_t *)CONCAT71(local_68._1_7_,local_48[0]);
    pplVar10 = (int64_t **)local_48;
    if (local_48[0] == '\0') {
      pplVar10 = &local_68;
    }
    *(char *)pplVar10 = '\0';
    if ((local_48[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    iVar1 = *(int *)((int64_t)plVar9 + 0xc);
    if ((char)local_68 != '\0') {
      FUN_00d50b20();
    }
    lVar5 = g_027f3850;
    if (iVar1 <= lVar11) break;
    FUN_00ca1380();
    plVar9 = local_50;
    local_38[0] = local_48[0];
    pcVar8 = local_48;
    if (local_48[0] == '\0') {
      pcVar8 = local_38;
    }
    *pcVar8 = '\0';
    if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar2 = *(int64_t **)(plVar9[2] + lVar11 * 8);
    local_60 = '\0';
    local_68 = plVar2;
    FUN_0020e360();
    pplVar10 = (int64_t **)&g_02802688;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pplVar10 = &local_68;
      if (cVar6 == '\0') {
        pplVar10 = (int64_t **)&g_02802688;
      }
    }
    plVar3 = *pplVar10;
    if (*(char *)(pplVar10 + 1) == '\0') {
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar10 + 1) = 0;
      if ((local_60 != '\0') && (plVar2 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      uVar14 = (undefined7)((uint64_t)plVar9 >> 8);
      if (plVar3 == local_58) {
        if ((char)local_40 == '\0') {
          uVar13 = CONCAT71(uVar14,1);
          FUN_00d50b00();
          plVar3 = local_58;
        }
        else {
          uVar13 = local_40 & 0xffffffff;
          plVar3 = local_58;
        }
      }
      else {
        FUN_00d50b00();
        uVar13 = CONCAT71(uVar14,1);
        if (((char)local_40 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      local_58 = plVar3;
      FUN_00d50b20();
      iVar12 = iVar12 + 1;
      local_40 = uVar13 & 0xffffffff;
    }
    lVar11 = lVar11 + 1;
  }
  if (iVar12 < 2) {
    cVar6 = (char)local_40;
    plVar9 = local_58;
  }
  else {
    if (g_027f3850 != 0) {
      FUN_00d50b00();
    }
    plVar2 = local_58;
    FUN_000175c0();
    plVar9 = local_50;
    if (local_50 == plVar2) {
      plVar9 = plVar2;
      cVar6 = (char)local_40;
      if (((char)local_40 == '\0') && (local_50 != (int64_t *)0x0)) {
        if (local_48[0] != '\0') goto LAB_01e30b25;
        FUN_00d50b00();
        cVar6 = '\x01';
      }
LAB_01e30bd3:
      if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_48[0] == '\0') {
        if (local_50 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        cVar6 = '\x01';
        if (((char)local_40 != '\0') && (plVar2 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01e30bd3;
      }
      if (((char)local_40 != '\0') && (plVar2 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_01e30b25:
      local_48[0] = '\0';
      cVar6 = '\x01';
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  *(void*)(this_ptr + 1) = 0;
  if (cVar6 == '\0') {
    if (plVar9 == (int64_t *)0x0) {
      plVar9 = (int64_t *)0x0;
    }
    else {
      FUN_00d50b00();
    }
  }
  *this_ptr = (int64_t)plVar9;
LAB_01e30c1e:
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 01e30190
// ============================================================
// Function: FUN_01e30190
// Address: 01e30190
// Size: 674 bytes
// Class: GNClassDescription
// === GNClassDescription properties ===
//                   _potentialValues
//                   _derivationSources
//                   _derivationDestinations
//                   _documentation


void FUN_01e30190(void)

{
  int iVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t lVar4;
  char cVar5;
  int64_t *this_ptr;
  int64_t *plVar6;
  int64_t **pplVar7;
  bool bVar8;
  int64_t *local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  local_50 = 0;
  plVar6 = (int64_t *)0x0;
  while( true ) {
    FUN_00ca1380();
    lVar4 = local_48;
    local_80 = (int64_t *)CONCAT71(local_80._1_7_,local_40[0]);
    pplVar7 = (int64_t **)local_40;
    if (local_40[0] == '\0') {
      pplVar7 = &local_80;
    }
    *(void*)pplVar7 = 0;
    if ((local_40[0] != '\0') && (lVar4 != 0)) {
      FUN_00d50b20();
    }
    iVar1 = *(int *)(lVar4 + 0xc);
    if ((char)local_80 != '\0') {
      FUN_00d50b20();
    }
    if (iVar1 <= local_50) break;
    FUN_00ca1380();
    lVar4 = local_48;
    local_38[0] = local_40[0];
    pplVar7 = (int64_t **)local_40;
    if (local_40[0] == '\0') {
      pplVar7 = (int64_t **)local_38;
    }
    *(void*)pplVar7 = 0;
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    plVar2 = *(int64_t **)(*(int64_t *)(lVar4 + 0x10) + local_50 * 8);
    local_78 = '\0';
    local_80 = plVar2;
    FUN_00081d60();
    pplVar7 = (int64_t **)&g_02802688;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x360))();
      cVar5 = FUN_00e85ea0();
      pplVar7 = &local_80;
      if (cVar5 == '\0') {
        pplVar7 = (int64_t **)&g_02802688;
      }
    }
    plVar3 = *pplVar7;
    if (plVar3 != plVar6) {
      if (*(char *)(pplVar7 + 1) == '\0') {
        if (plVar3 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar8 = plVar6 != (int64_t *)0x0;
        plVar6 = plVar3;
        if (bVar8) {
          FUN_00d50b20();
        }
      }
      else {
        if (plVar6 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        *(void*)(pplVar7 + 1) = 0;
        plVar6 = plVar3;
        if ((local_78 != '\0') && (plVar2 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
    if (plVar6 != (int64_t *)0x0) {
      FUN_01d28610();
      lVar4 = local_48;
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar4 == 0) {
        local_70 = *this_ptr;
        local_68 = '\0';
        FUN_01d2eb50();
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_01d2e930();
      lVar4 = local_48;
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar4 == 0) {
        local_60 = *this_ptr;
        local_58 = '\0';
        FUN_01d2e920();
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    local_50 = local_50 + 1;
  }
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01e2ec70
// ============================================================
// Function: FUN_01e2ec70
// Address: 01e2ec70
// Size: 766 bytes
// Class: GNClassDescription
// String references:
//   "GNClassDescription"
// === GNClassDescription properties ===
//                   _potentialValues
//                   _derivationSources
//                   _derivationDestinations
//                   _documentation


void FUN_01e2ec70(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t this_ptr;
  
  lVar3 = g_027f3840;
  if (*(char *)(this_ptr + 0x39) != '\0') {
    if (g_027f3840 != 0) {
      FUN_00d50b00();
    }
    cVar4 = FUN_00c9ff50();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      FUN_00d21140();
      lVar3 = g_027f3840;
      if (g_027f3840 != 0) {
        FUN_00d50b00();
      }
      FUN_00ca13a0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
  }
  plVar1 = (int64_t *)*param_2;
  if ((g_026cf800 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_01e2ed9e;
  }
  param_2 = &g_02802688;
LAB_01e2ed9e:
  lVar3 = g_028b9530;
  if (*param_2 != 0) {
    if (g_028b9530 != 0) {
      FUN_00d50b00();
    }
    cVar4 = FUN_00c9ff50();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      FUN_01e2f100();
      lVar2 = *(int64_t *)(this_ptr + 0x30);
      if (lVar2 != lVar3) {
        if (lVar3 == 0) {
          *(void*)(this_ptr + 0x30) = 0;
        }
        else {
          FUN_00d50b00();
          lVar2 = *(int64_t *)(this_ptr + 0x30);
          *(int64_t *)(this_ptr + 0x30) = lVar3;
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00ca1340();
      return;
    }
  }
  if (*(int64_t *)(this_ptr + 0x30) != 0) {
    *(void*)(this_ptr + 0x30) = 0;
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01e2f200
// ============================================================
// Function: FUN_01e2f200
// Address: 01e2f200
// Size: 833 bytes
// Class: GNClassDescription
// === GNClassDescription properties ===
//                   _potentialValues
//                   _derivationSources
//                   _derivationDestinations
//                   _documentation


void FUN_01e2f200(uint64_t param_1,void*param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  byte bVar3;
  char cVar4;
  int64_t this_ptr;
  int64_t *local_80;
  char local_78;
  int64_t *local_48;
  
  FUN_00d21140();
  lVar2 = g_028b9590;
  if (g_028b9590 != 0) {
    FUN_00d50b00();
  }
  FUN_000175c0();
  if (local_80 == (int64_t *)0x0) {
    local_48 = (int64_t *)0x0;
    bVar3 = 0;
  }
  else {
    if (local_78 == '\0') {
      FUN_00d50b00();
    }
    else {
      local_78 = '\0';
    }
    bVar3 = FUN_00c9ff50();
    bVar3 = bVar3 ^ 1;
    local_48 = local_80;
  }
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((bVar3 != 0) && (FUN_00ca0840(), lVar2 = g_027f3818, *(char *)(this_ptr + 0x38) != '\0')) {
    if (g_027f3818 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*local_48 + 0x50))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      plVar1 = (int64_t *)*param_2;
      FUN_00d46300();
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      lVar2 = g_027f3848;
      if (g_027f3848 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0x80))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  if (*(int64_t *)(this_ptr + 0x30) != 0) {
    FUN_00d50b00();
    FUN_00ca0e70();
    FUN_00d50b20();
    if (*(int64_t *)(this_ptr + 0x30) != 0) {
      *(void*)(this_ptr + 0x30) = 0;
      FUN_00d50b20();
    }
  }
  if (local_80 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0002f700
// ============================================================
// Function: FUN_0002f700
// Address: 0002f700
// Size: 1627 bytes
// Class: GNClassDescription
// String references:
//   "GNClassDescription"
// === GNClassDescription properties ===
//                   _potentialValues
//                   _derivationSources
//                   _derivationDestinations
//                   _documentation


void FUN_0002f700(void)

{
  uint64_t uVar1;
  int iVar2;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02567a20;
  FUN_00030000();
  FUN_00030280();
  *(void*)(this_ptr + 4) = 0;
  // [STATIC_INIT: property registration]
  if (g_0277614b == '\0') {
    FUN_00030500();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x24) = 0;
  // [STATIC_INIT: property registration]
  if (g_0277614b == '\0') {
    FUN_00030670();
    FUN_00e87980();
  }
  FUN_000307e0();
  FUN_00030af0();
  FUN_00030e00();
  FUN_00031110();
  *(void*)(this_ptr + 9) = 0;
  // [STATIC_INIT: property registration]
  if (g_0277614b == '\0') {
    FUN_00031400();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x49) = 0;
  // [STATIC_INIT: property registration]
  if (g_0277614b == '\0') {
    FUN_00031570();
    FUN_00e87980();
  }
  this_ptr[10] = *(void*)(arg1 + 0x50);
  FUN_000316e0();
  FUN_000319e0();
  FUN_00031c60();
  FUN_00031ee0();
  FUN_00032160();
  *(void*)(this_ptr + 0x10) = 0;
  // [STATIC_INIT: property registration]
  if (g_0277614b == '\0') {
    FUN_000323e0();
    FUN_00e87980();
  }
  FUN_00032550();
  FUN_000327d0();
  FUN_00032a50();
  FUN_00032d40();
  FUN_00032fc0();
  FUN_00033240();
  FUN_000334c0();
  FUN_00033740();
  FUN_000339c0();
  FUN_00033c40();
  uVar1 = *(void*)(arg1 + 0xe0);
  this_ptr[0x1b] = *(void*)(arg1 + 0xd8);
  this_ptr[0x1c] = uVar1;
  return;
}

