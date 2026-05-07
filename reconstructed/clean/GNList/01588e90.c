// Function: FUN_01588e90
// Address: 01588e90
// Size: 5253 bytes
// Class: GNList
// String references:
//   "GNList"
//   "GNData"
//   "GNDictionary"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01588e90(uint32_t param_1,int64_t *param_2)

{
  float *pfVar1;
  uint *puVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  int64_t lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  char cVar19;
  int iVar20;
  uint uVar21;
  void*puVar22;
  int64_t lVar23;
  uint64_t uVar24;
  int64_t *plVar25;
  uint64_t uVar26;
  uint uVar27;
  int64_t **pplVar29;
  int64_t *plVar30;
  int64_t *arg1;
  uint64_t uVar31;
  uint64_t uVar32;
  int64_t lVar33;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar34;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Da_04;
  uint32_t extraout_XMM0_Da_05;
  uint32_t extraout_XMM0_Da_06;
  uint32_t extraout_XMM0_Da_07;
  uint32_t extraout_XMM0_Da_08;
  float fVar35;
  uint32_t extraout_XMM0_Da_09;
  uint32_t extraout_XMM0_Da_10;
  uint32_t extraout_XMM0_Da_11;
  uint32_t extraout_XMM0_Da_12;
  uint32_t extraout_XMM0_Da_13;
  float fVar36;
  uint uVar37;
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
  void*local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t *local_a0;
  uint32_t local_94;
  int64_t *local_90;
  int64_t *local_88;
  void*local_80;
  int64_t *local_78;
  int64_t *local_70;
  int64_t *local_68;
  uint64_t local_60;
  uint64_t local_58;
  char local_49;
  int64_t *local_48;
  char local_40;
  uint64_t uVar28;
  
  plVar25 = (int64_t *)*arg1;
  if ((g_026fdd40 == '\0') &&
     (iVar20 = ___cxa_guard_acquire(), param_1 = extraout_XMM0_Da_09, iVar20 != 0)) {
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
    param_1 = ___cxa_guard_release();
  }
  if (plVar25 == (int64_t *)0x0) {
LAB_01588ee5:
    plVar25 = &g_02802688;
  }
  else {
    (**(code **)(*plVar25 + 0x360))();
    cVar19 = FUN_00e85ea0();
    plVar25 = arg1;
    param_1 = extraout_XMM0_Da;
    if (cVar19 == '\0') goto LAB_01588ee5;
  }
  local_70 = (int64_t *)*plVar25;
  local_49 = (char)plVar25[1];
  if ((local_49 == '\0') || (local_70 == (int64_t *)0x0)) {
    if (local_70 == (int64_t *)0x0) {
      local_1a0 = *param_2;
      local_198 = '\0';
      FUN_00dacde0(param_1,&local_1a0);
      if (local_198 == '\0') {
        return;
      }
      if (local_1a0 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
  }
  else {
    param_1 = FUN_00d50b00();
  }
  lVar33 = g_027c6f80;
  if (g_027c6f80 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_190 = lVar33;
  local_188 = '\x01';
  uVar34 = FUN_000175c0(param_1,&local_190);
  local_90 = local_48;
  local_a0 = local_48;
  if (local_48 == (int64_t *)0x0) {
    local_90 = (int64_t *)0x0;
LAB_01588f93:
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      uVar34 = FUN_00d50b20();
    }
  }
  else {
    if (local_40 == '\0') {
      uVar34 = FUN_00d50b00();
      goto LAB_01588f93;
    }
    local_40 = '\0';
  }
  if ((local_188 != '\0') && (local_190 != 0)) {
    uVar34 = FUN_00d50b20();
  }
  if (local_90 == (int64_t *)0x0) {
    local_180 = *arg1;
    local_178 = '\0';
    local_170 = *param_2;
    local_168 = '\0';
    FUN_00dacde0(uVar34,&local_170);
    if ((local_168 != '\0') && (local_170 != 0)) {
      FUN_00d50b20();
    }
    if ((local_178 != '\0') && (local_180 != 0)) {
      FUN_00d50b20();
    }
    goto LAB_01589edb;
  }
  iVar20 = FUN_00c811b0();
  FUN_00c7e7b0();
  local_78 = local_48;
  if ((((local_40 == '\0') && (local_48 != (int64_t *)0x0)) && (FUN_00d50b00(), local_40 != '\0'))
     && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar33 = g_027c76b8;
  if (g_027c76b8 != 0) {
    FUN_00d50b00();
  }
  local_160 = lVar33;
  local_158 = '\x01';
  cVar19 = (**(code **)(*local_78 + 0x50))();
  uVar34 = extraout_XMM0_Da_00;
  if ((local_158 != '\0') && (local_160 != 0)) {
    uVar34 = FUN_00d50b20();
  }
  lVar23 = g_027c7718;
  lVar33 = g_027c7338;
  if (cVar19 == '\0') {
    if (g_027c7338 != 0) {
      FUN_00d50b00();
    }
    local_110 = lVar33;
    local_108 = '\x01';
    cVar19 = (**(code **)(*local_78 + 0x50))();
    uVar34 = extraout_XMM0_Da_02;
    if ((local_108 != '\0') && (local_110 != 0)) {
      uVar34 = FUN_00d50b20();
    }
    lVar23 = g_027c7858;
    lVar33 = g_027c7350;
    if (cVar19 == '\0') {
      if (g_027c7858 != 0) {
        FUN_00d50b00();
      }
      local_d0 = lVar23;
      local_c8 = '\x01';
      cVar19 = (**(code **)(*local_78 + 0x50))();
      uVar34 = extraout_XMM0_Da_03;
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        uVar34 = FUN_00d50b20();
      }
      lVar33 = g_027c7850;
      if (cVar19 == '\0') goto LAB_01589ebc;
      if (g_027c7850 != 0) {
        uVar34 = FUN_00d50b00();
      }
      local_c0 = lVar33;
      local_b8 = '\x01';
      pplVar29 = &local_48;
      uVar34 = (**(code **)(*local_70 + 0x88))(uVar34,&local_c0);
      plVar25 = local_48;
      if ((g_026fdd40 == '\0') &&
         (iVar20 = ___cxa_guard_acquire(), uVar34 = extraout_XMM0_Da_13, iVar20 != 0)) {
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
        uVar34 = ___cxa_guard_release();
      }
      if (plVar25 == (int64_t *)0x0) {
LAB_015893c6:
        pplVar29 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar25 + 0x360))();
        cVar19 = FUN_00e85ea0();
        uVar34 = extraout_XMM0_Da_04;
        if (cVar19 == '\0') goto LAB_015893c6;
      }
      plVar25 = *pplVar29;
      if (plVar25 == (int64_t *)0x0) {
        bVar11 = true;
        plVar25 = (int64_t *)0x0;
      }
      else {
        if (*(char *)(pplVar29 + 1) == '\0') {
          uVar34 = FUN_00d50b00();
        }
        else {
          *(void*)(pplVar29 + 1) = 0;
        }
        bVar11 = false;
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        uVar34 = FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        uVar34 = FUN_00d50b20();
      }
      lVar33 = g_027c7358;
      if (g_027c7358 != 0) {
        uVar34 = FUN_00d50b00();
      }
      local_b0 = lVar33;
      local_a8 = '\x01';
      pplVar29 = &local_48;
      (**(code **)(*plVar25 + 0x88))(uVar34,&local_b0);
      plVar25 = local_48;
      FUN_00053ac0();
      if (plVar25 == (int64_t *)0x0) {
LAB_01589c3e:
        pplVar29 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar25 + 0x360))();
        cVar19 = FUN_00e85ea0();
        if (cVar19 == '\0') goto LAB_01589c3e;
      }
      plVar25 = *pplVar29;
      if (*(char *)(pplVar29 + 1) == '\0') {
        if (plVar25 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar29 + 1) = 0;
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if (plVar25 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (!bVar11) {
        FUN_00d50b20();
      }
    }
    else if (iVar20 < 9) {
      if (g_027c7350 != 0) {
        uVar34 = FUN_00d50b00();
      }
      local_100 = lVar33;
      local_f8 = '\x01';
      pplVar29 = &local_48;
      (**(code **)(*local_70 + 0x88))(uVar34,&local_100);
      plVar25 = local_48;
      if ((g_027048b0 == '\0') && (iVar20 = ___cxa_guard_acquire(), iVar20 != 0)) {
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
      if (plVar25 == (int64_t *)0x0) {
LAB_01589253:
        pplVar29 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar25 + 0x360))();
        cVar19 = FUN_00e85ea0();
        if (cVar19 == '\0') goto LAB_01589253;
      }
      plVar25 = *pplVar29;
      if (plVar25 == (int64_t *)0x0) {
        uVar34 = (uint32_t)CONCAT71((int7)((uint64_t)pplVar29 >> 8),1);
        plVar25 = (int64_t *)0x0;
      }
      else {
        if (*(char *)(pplVar29 + 1) == '\0') {
          FUN_00d50b00();
        }
        else {
          *(void*)(pplVar29 + 1) = 0;
        }
        uVar34 = 0;
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
      local_94 = uVar34;
      local_88 = plVar25;
      puVar22 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar22 = &g_02572358;
      uVar34 = (*g_02572370)();
      local_80 = puVar22;
      if (*(int *)((int64_t)plVar25 + 0xc) < 1) {
        plVar25 = (int64_t *)0x0;
        local_58 = 0;
        local_68 = (int64_t *)0x0;
        local_60 = 0;
      }
      else {
        lVar33 = 0;
        local_60 = 0;
        local_68 = (int64_t *)0x0;
        local_58 = 0;
        plVar25 = (int64_t *)0x0;
        do {
          lVar23 = local_88[2];
          plVar30 = *(int64_t **)(lVar23 + lVar33 * 8);
          if (local_68 == plVar30) {
            lVar12 = g_027c7438;
            if (((char)local_60 == '\0') && (local_68 != (int64_t *)0x0)) {
              local_60 = CONCAT71((int7)((uint64_t)lVar23 >> 8),1);
              uVar34 = FUN_00d50b00();
              lVar12 = g_027c7438;
            }
          }
          else {
            if (plVar30 != (int64_t *)0x0) {
              lVar23 = FUN_00d50b00();
              uVar34 = extraout_XMM0_Da_07;
            }
            if (((char)local_60 == '\0') || (local_68 == (int64_t *)0x0)) {
              local_60 = CONCAT71((int7)((uint64_t)lVar23 >> 8),1);
              lVar12 = g_027c7438;
              local_68 = plVar30;
            }
            else {
              local_68 = plVar30;
              uVar24 = FUN_00d50b20();
              local_60 = CONCAT71((int7)((uint64_t)uVar24 >> 8),1);
              uVar34 = extraout_XMM0_Da_08;
              lVar12 = g_027c7438;
            }
          }
          g_027c7438 = lVar12;
          if (lVar12 != 0) {
            uVar34 = FUN_00d50b00();
          }
          local_e8 = '\x01';
          local_f0 = lVar12;
          (**(code **)(*local_68 + 0x88))(uVar34,&local_f0);
          plVar30 = local_48;
          uVar24 = 0;
          if ((g_026fdd40 == '\0') && (uVar24 = ___cxa_guard_acquire(), (int)uVar24 != 0)) {
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
            uVar24 = ___cxa_guard_release();
          }
          pplVar29 = (int64_t **)&g_02802688;
          if (plVar30 != (int64_t *)0x0) {
            (**(code **)(*plVar30 + 0x360))(local_58);
            uVar24 = FUN_00e85ea0(local_58);
            pplVar29 = &local_48;
            if ((char)uVar24 == '\0') {
              pplVar29 = (int64_t **)&g_02802688;
            }
          }
          plVar30 = *pplVar29;
          if (plVar25 == plVar30) {
            if (((char)local_58 == '\0') && (plVar25 != (int64_t *)0x0)) {
              plVar30 = plVar25;
              if (*(char *)(pplVar29 + 1) != '\0') goto LAB_01589919;
              local_58 = CONCAT71((int7)((uint64_t)uVar24 >> 8),1);
              FUN_00d50b00();
            }
          }
          else if (*(char *)(pplVar29 + 1) == '\0') {
            if (plVar30 != (int64_t *)0x0) {
              uVar24 = FUN_00d50b00();
            }
            if (((char)local_58 == '\0') || (plVar25 == (int64_t *)0x0)) {
              local_58 = CONCAT71((int7)((uint64_t)uVar24 >> 8),1);
              plVar25 = plVar30;
            }
            else {
              uVar24 = FUN_00d50b20();
              local_58 = CONCAT71((int7)((uint64_t)uVar24 >> 8),1);
              plVar25 = plVar30;
            }
          }
          else {
            if (((char)local_58 != '\0') && (plVar25 != (int64_t *)0x0)) {
              uVar24 = FUN_00d50b20();
            }
LAB_01589919:
            *(void*)(pplVar29 + 1) = 0;
            local_58 = CONCAT71((int7)((uint64_t)uVar24 >> 8),1);
            plVar25 = plVar30;
          }
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_e8 != '\0') && (local_f0 != 0)) {
            FUN_00d50b20();
          }
          local_40 = '\0';
          local_48 = plVar25;
          uVar34 = FUN_00d235a0();
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            uVar34 = FUN_00d50b20();
          }
          lVar33 = lVar33 + 1;
        } while (lVar33 < *(int *)((int64_t)local_88 + 0xc));
      }
      plVar30 = g_027c7340;
      local_e0 = local_80;
      local_d8 = '\0';
      if (g_027c7340 != (int64_t *)0x0) {
        uVar34 = FUN_00d50b00();
      }
      local_48 = plVar30;
      local_40 = '\0';
      FUN_00ca0840(uVar34,&local_48);
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar30 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_58 != '\0') && (plVar25 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((char)local_94 == '\0') {
        FUN_00d50b20();
      }
      if (local_80 != (void*)0x0) {
        FUN_00d50b20();
      }
      goto LAB_01589eb5;
    }
LAB_01589ebc:
    FUN_00d50b20();
  }
  else {
    if (g_027c7718 != 0) {
      uVar34 = FUN_00d50b00();
    }
    local_150 = lVar23;
    local_148 = '\x01';
    pplVar29 = &local_48;
    uVar34 = (**(code **)(*local_70 + 0x88))(uVar34,&local_150);
    plVar25 = local_48;
    if ((g_026d0220 == '\0') &&
       (iVar20 = ___cxa_guard_acquire(), uVar34 = extraout_XMM0_Da_10, iVar20 != 0)) {
      g_02789148 = FUN_00d4fe50();
      g_02789130 = "GNData";
      g_02789138 = 0x28;
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
      uVar34 = ___cxa_guard_release();
    }
    if (plVar25 == (int64_t *)0x0) {
LAB_015890e4:
      pplVar29 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar25 + 0x360))();
      cVar19 = FUN_00e85ea0();
      uVar34 = extraout_XMM0_Da_01;
      if (cVar19 == '\0') goto LAB_015890e4;
    }
    plVar25 = *pplVar29;
    if (*(char *)(pplVar29 + 1) == '\0') {
      if (plVar25 != (int64_t *)0x0) {
        uVar34 = FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar29 + 1) = 0;
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      uVar34 = FUN_00d50b20();
    }
    if ((local_148 != '\0') && (local_150 != 0)) {
      uVar34 = FUN_00d50b20();
    }
    lVar33 = g_027c7710;
    if (g_027c7710 != 0) {
      uVar34 = FUN_00d50b00();
    }
    local_140 = lVar33;
    local_138 = '\x01';
    pplVar29 = &local_48;
    uVar34 = (**(code **)(*local_70 + 0x88))(uVar34,&local_140);
    plVar30 = local_48;
    if ((g_026d0220 == '\0') &&
       (iVar20 = ___cxa_guard_acquire(), uVar34 = extraout_XMM0_Da_11, iVar20 != 0)) {
      g_02789148 = FUN_00d4fe50();
      g_02789130 = "GNData";
      g_02789138 = 0x28;
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
      uVar34 = ___cxa_guard_release();
    }
    if (plVar30 == (int64_t *)0x0) {
LAB_0158949c:
      pplVar29 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar30 + 0x360))();
      cVar19 = FUN_00e85ea0();
      uVar34 = extraout_XMM0_Da_05;
      if (cVar19 == '\0') goto LAB_0158949c;
    }
    plVar30 = *pplVar29;
    if (*(char *)(pplVar29 + 1) == '\0') {
      if (plVar30 != (int64_t *)0x0) {
        uVar34 = FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar29 + 1) = 0;
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      uVar34 = FUN_00d50b20();
    }
    if ((local_138 != '\0') && (local_140 != 0)) {
      uVar34 = FUN_00d50b20();
    }
    lVar33 = g_027c7708;
    if (g_027c7708 != 0) {
      uVar34 = FUN_00d50b00();
    }
    local_130 = lVar33;
    local_128 = '\x01';
    pplVar29 = &local_48;
    uVar34 = (**(code **)(*local_70 + 0x88))(uVar34,&local_130);
    plVar3 = local_48;
    if ((g_026d0220 == '\0') &&
       (iVar20 = ___cxa_guard_acquire(), uVar34 = extraout_XMM0_Da_12, iVar20 != 0)) {
      g_02789148 = FUN_00d4fe50();
      g_02789130 = "GNData";
      g_02789138 = 0x28;
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
      uVar34 = ___cxa_guard_release();
    }
    if (plVar3 == (int64_t *)0x0) {
LAB_01589560:
      pplVar29 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar3 + 0x360))();
      cVar19 = FUN_00e85ea0();
      uVar34 = extraout_XMM0_Da_06;
      if (cVar19 == '\0') goto LAB_01589560;
    }
    plVar3 = *pplVar29;
    if (*(char *)(pplVar29 + 1) == '\0') {
      if (plVar3 != (int64_t *)0x0) {
        uVar34 = FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar29 + 1) = 0;
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      uVar34 = FUN_00d50b20();
    }
    if ((local_128 != '\0') && (local_130 != 0)) {
      uVar34 = FUN_00d50b20();
    }
    lVar33 = g_027c76e0;
    if (g_027c76e0 != 0) {
      uVar34 = FUN_00d50b00();
    }
    local_120 = lVar33;
    local_118 = '\x01';
    (**(code **)(*local_70 + 0x88))(uVar34,&local_120);
    uVar21 = FUN_00d45870();
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
    fVar17 = g_0240f130;
    fVar35 = g_023b4df0;
    if (((plVar25 != (int64_t *)0x0) && (plVar30 != (int64_t *)0x0)) && (-1 < (int)uVar21)) {
      lVar33 = plVar25[2];
      lVar23 = plVar30[2];
      if (uVar21 == 0) {
        uVar26 = 0;
      }
      else {
        uVar26 = 0;
        do {
          fVar36 = fVar17;
          if ((*(char *)(lVar33 + uVar26) == '\0') ||
             (pfVar1 = (float *)(lVar23 + uVar26 * 4), fVar36 = fVar35,
             *pfVar1 <= fVar35 && fVar35 != *pfVar1)) {
            *(float *)(lVar23 + uVar26 * 4) = fVar36;
          }
          fVar36 = fVar17;
          if ((*(char *)(lVar33 + 1 + uVar26) == '\0') ||
             (pfVar1 = (float *)(lVar23 + 4 + uVar26 * 4), fVar36 = fVar35,
             *pfVar1 <= fVar35 && fVar35 != *pfVar1)) {
            *(float *)(lVar23 + 4 + uVar26 * 4) = fVar36;
          }
          uVar26 = uVar26 + 2;
        } while ((uVar21 + 1 & 0xfffffffe) != uVar26);
      }
      if (((uVar21 + 1 & 1) != 0) &&
         ((fVar35 = g_0240f130, *(char *)(lVar33 + uVar26) == '\0' ||
          (pfVar1 = (float *)(lVar23 + uVar26 * 4), fVar35 = g_023b4df0,
          *pfVar1 <= g_023b4df0 && g_023b4df0 != *pfVar1)))) {
        *(float *)(lVar23 + uVar26 * 4) = fVar35;
      }
    }
    fVar18 = _UNK_0240f0dc;
    fVar36 = _UNK_0240f0d8;
    fVar17 = _UNK_0240f0d4;
    fVar35 = g_023b4df0;
    uVar16 = g_023945e0;
    uVar15 = _UNK_0239014c;
    uVar14 = _UNK_02390148;
    uVar37 = _UNK_02390144;
    uVar13 = g_02390140;
    if (((plVar30 != (int64_t *)0x0) && (plVar3 != (int64_t *)0x0)) && (-1 < (int)uVar21)) {
      uVar26 = plVar30[2];
      uVar4 = plVar3[2];
      uVar27 = uVar21 + 1;
      uVar28 = (uint64_t)uVar27;
      if ((uVar21 < 3) || ((uVar4 < uVar26 + uVar28 * 4 && (uVar26 < uVar4 + uVar28 * 4)))) {
        uVar31 = 0;
      }
      else {
        uVar31 = (uint64_t)(uVar27 & 0xfffffffc);
        uVar32 = 0;
        do {
          puVar2 = (uint *)(uVar4 + uVar32 * 4);
          uVar21 = *puVar2;
          uVar5 = puVar2[1];
          uVar6 = puVar2[2];
          uVar7 = puVar2[3];
          puVar2 = (uint *)(uVar4 + uVar32 * 4);
          *puVar2 = uVar21 & uVar13;
          puVar2[1] = uVar5 & uVar37;
          puVar2[2] = uVar6 & uVar14;
          puVar2[3] = uVar7 & uVar15;
          pfVar1 = (float *)(uVar26 + uVar32 * 4);
          fVar8 = pfVar1[1];
          fVar9 = pfVar1[2];
          fVar10 = pfVar1[3];
          if (*pfVar1 < fVar35) {
            *(uint *)(uVar4 + uVar32 * 4) = uVar21 & uVar13 ^ uVar16;
          }
          if (fVar8 < fVar17) {
            *(uint *)(uVar4 + 4 + uVar32 * 4) = uVar5 & uVar37 ^ uVar16;
          }
          if (fVar9 < fVar36) {
            *(uint *)(uVar4 + 8 + uVar32 * 4) = uVar6 & uVar14 ^ uVar16;
          }
          if (fVar10 < fVar18) {
            *(uint *)(uVar4 + 0xc + uVar32 * 4) = uVar7 & uVar15 ^ uVar16;
          }
          uVar32 = uVar32 + 4;
        } while (uVar31 != uVar32);
        if (uVar31 == uVar28) goto LAB_01589e8e;
      }
      uVar32 = ~uVar31;
      if ((uVar27 & 1) != 0) {
        uVar21 = *(uint *)(uVar4 + uVar31 * 4) & g_02390140;
        *(uint *)(uVar4 + uVar31 * 4) = uVar21;
        pfVar1 = (float *)(uVar26 + uVar31 * 4);
        if (*pfVar1 <= g_023b4df0 && g_023b4df0 != *pfVar1) {
          *(uint *)(uVar4 + uVar31 * 4) = uVar21 ^ g_023945e0;
        }
        uVar31 = uVar31 | 1;
      }
      fVar35 = g_023b4df0;
      uVar13 = g_023945e0;
      uVar21 = g_02390140;
      if (uVar32 + uVar28 != 0) {
        do {
          uVar37 = *(uint *)(uVar4 + uVar31 * 4) & uVar21;
          *(uint *)(uVar4 + uVar31 * 4) = uVar37;
          pfVar1 = (float *)(uVar26 + uVar31 * 4);
          if (*pfVar1 <= fVar35 && fVar35 != *pfVar1) {
            *(uint *)(uVar4 + uVar31 * 4) = uVar37 ^ uVar13;
          }
          uVar37 = *(uint *)(uVar4 + 4 + uVar31 * 4) & uVar21;
          *(uint *)(uVar4 + 4 + uVar31 * 4) = uVar37;
          pfVar1 = (float *)(uVar26 + 4 + uVar31 * 4);
          if (*pfVar1 <= fVar35 && fVar35 != *pfVar1) {
            *(uint *)(uVar4 + 4 + uVar31 * 4) = uVar37 ^ uVar13;
          }
          uVar31 = uVar31 + 2;
        } while (uVar28 != uVar31);
      }
    }
LAB_01589e8e:
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar30 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar25 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
LAB_01589eb5:
    if (local_78 != (int64_t *)0x0) goto LAB_01589ebc;
  }
  if (local_a0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_01589edb:
  if (local_49 != '\0') {
    FUN_00d50b20();
  }
  return;
}

