// Function: FUN_00d33a10
// Address: 00d33a10
// Size: 6488 bytes
// Class: GNList
// String references:
//   "GNList"
//   "{\n"
//   "  %@ "
//   "= "
//   "\"%@\";"
//   "\n  {\n"
//   "  };\n"
//   "}\n"
//   "    \"%@\""
//   "= ("
//   "%@, \"%@\""
//   ");\n"
//   "GNString"
//   "GNDictionary"
//   "\n"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


uint32_t FUN_00d33a10(void)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  code *pcVar4;
  int64_t *plVar5;
  uint uVar6;
  int64_t lVar7;
  char cVar8;
  int iVar9;
  void*puVar10;
  void*puVar11;
  void*puVar12;
  undefined7 uVar16;
  uint64_t uVar13;
  int64_t lVar14;
  int64_t lVar15;
  int64_t **pplVar17;
  int64_t *plVar18;
  uint64_t uVar19;
  int64_t *plVar20;
  int64_t *arg1;
  uint64_t uVar21;
  uint64_t uVar22;
  uint32_t uVar23;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t uVar24;
  uint32_t extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Da_04;
  uint8_t local_248 [8];
  uint64_t local_240;
  int64_t local_218;
  char local_210;
  int64_t local_1e0;
  char local_1d8;
  int64_t *local_1d0;
  char local_1c8;
  int64_t *local_1c0;
  char local_1b8;
  int64_t *local_1b0;
  char local_1a8;
  int64_t local_1a0;
  char local_198;
  void*local_190;
  code *local_188;
  uint64_t local_180;
  uint64_t local_178;
  int64_t *local_170;
  int64_t *local_168;
  char local_160;
  int64_t *local_158;
  char local_150;
  int64_t *local_148;
  char local_140;
  int64_t *local_138;
  char local_130;
  uint64_t local_128;
  int64_t *local_120;
  void*local_118;
  int64_t *local_110;
  uint32_t local_104;
  int64_t *local_100;
  char local_f8;
  int64_t *local_f0;
  void*local_e8;
  uint64_t local_e0;
  uint64_t local_d8;
  uint64_t local_d0;
  uint local_c8;
  int local_c4;
  int64_t *local_c0;
  int64_t *local_b8;
  uint local_b0 [2];
  int64_t *local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  void*local_88;
  int64_t local_80;
  char local_72;
  char local_71;
  uint64_t local_70;
  int64_t *local_68;
  int64_t *local_60;
  uint64_t local_58;
  int64_t *local_50;
  void*local_48;
  int64_t *local_40;
  uint32_t local_38;
  uint8_t local_31;
  
  FUN_00c9fe20();
  plVar18 = local_b8;
  local_100 = (int64_t *)CONCAT71(local_100._1_7_,(char)local_b0[0]);
  pplVar17 = (int64_t **)local_b0;
  if ((char)local_b0[0] == '\0') {
    pplVar17 = &local_100;
  }
  *(void*)pplVar17 = 0;
  if (((char)local_b0[0] != '\0') && (plVar18 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_110 = plVar18;
  if ((char)local_100 == '\0') {
    if (plVar18 == (int64_t *)0x0) {
      return 0;
    }
    FUN_00d50b00();
    uVar1 = *(uint *)((int64_t)plVar18 + 0xc);
    uVar19 = local_180;
  }
  else {
    if (plVar18 == (int64_t *)0x0) {
      return 0;
    }
    uVar1 = *(uint *)((int64_t)plVar18 + 0xc);
    uVar19 = local_180;
  }
  local_c4 = 0;
  local_180 = (uint64_t)uVar1;
  if (local_180 != 0) {
    local_c4 = 0;
    if (0 < (int)uVar1) {
      uVar19 = 0;
      local_c4 = 0;
      do {
        lVar15 = *(int64_t *)(local_110[2] + uVar19 * 8);
        if (lVar15 != 0) {
          FUN_00d50b00();
        }
        iVar9 = FUN_00d8c7a0();
        if (local_c4 < iVar9) {
          local_c4 = FUN_00d8c7a0();
        }
        if (lVar15 != 0) {
          FUN_00d50b20();
        }
        uVar19 = uVar19 + 1;
      } while (local_180 != uVar19);
    }
    puVar10 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar10 = &g_025683c0;
    (*g_025683d8)();
    uVar23 = FUN_00c92170();
    uVar23 = FUN_00c92190(uVar23,2);
    pcVar4 = g_02572370;
    local_e8 = puVar10;
    if (0 < (int)local_180) {
      local_188 = g_025795c0;
      uVar19 = 0;
      local_190 = &g_025795a8;
      do {
        plVar18 = *(int64_t **)(local_110[2] + uVar19 * 8);
        local_240 = uVar19;
        if (plVar18 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        puVar11 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar11 = local_190;
        uVar23 = (*local_188)();
        local_b0[0] = 1;
        local_b8 = &g_024c5048;
        local_a0 = 0;
        if (plVar18 != (int64_t *)0x0) {
          uVar23 = FUN_00d50b00();
        }
        local_a0 = '\x01';
        local_a8 = plVar18;
        FUN_00d94d80(uVar23,&local_b8);
        local_b8 = &g_024c5048;
        if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        iVar9 = FUN_00d8c7a0();
        iVar9 = local_c4 - iVar9;
        uVar23 = extraout_XMM0_Da;
        if (0 < iVar9) {
          do {
            uVar23 = FUN_00d8db70(uVar23,1);
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        uVar23 = FUN_00d8db70(uVar23,2);
        local_1b8 = '\0';
        local_1c0 = plVar18;
        uVar23 = FUN_000175c0(uVar23,&local_1c0);
        plVar20 = local_b8;
        if ((char)local_b0[0] == '\0') {
          if (local_b8 == (int64_t *)0x0) {
            local_138 = (int64_t *)0x0;
            local_130 = '\x01';
            plVar20 = (int64_t *)0x0;
          }
          else {
            uVar23 = FUN_00d50b00();
            local_138 = plVar20;
            local_130 = '\x01';
            if (((char)local_b0[0] != '\0') && (local_b8 != (int64_t *)0x0)) {
              uVar23 = FUN_00d50b20();
            }
          }
        }
        else {
          local_138 = local_b8;
          local_130 = '\x01';
          local_b0[0] = local_b0[0] & 0xffffff00;
        }
        if ((local_1b8 != '\0') && (local_1c0 != (int64_t *)0x0)) {
          uVar23 = FUN_00d50b20();
        }
        if ((g_026fd0c0 == '\0') &&
           (iVar9 = ___cxa_guard_acquire(), uVar23 = extraout_XMM0_Da_03, iVar9 != 0)) {
          local_50 = plVar18;
          local_48 = puVar11;
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
          uVar23 = ___cxa_guard_release();
          plVar18 = local_50;
          puVar11 = local_48;
          puVar10 = local_e8;
        }
        pplVar17 = (int64_t **)&g_02802688;
        if (plVar20 != (int64_t *)0x0) {
          (**(code **)(*plVar20 + 0x360))();
          cVar8 = FUN_00e85ea0();
          pplVar17 = &local_138;
          uVar23 = extraout_XMM0_Da_00;
          if (cVar8 == '\0') {
            pplVar17 = (int64_t **)&g_02802688;
          }
        }
        plVar5 = local_138;
        plVar20 = *pplVar17;
        local_72 = *(char *)(pplVar17 + 1);
        if ((*(char *)(pplVar17 + 1) == '\0') || (plVar20 == (int64_t *)0x0)) {
          if (plVar20 != (int64_t *)0x0) goto LAB_00d33e19;
          if ((g_026fdd40 == '\0') &&
             (iVar9 = ___cxa_guard_acquire(), uVar23 = extraout_XMM0_Da_04, iVar9 != 0)) {
            local_50 = plVar18;
            local_48 = puVar11;
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
            uVar23 = ___cxa_guard_release();
            plVar18 = local_50;
            puVar11 = local_48;
            puVar10 = local_e8;
          }
          pplVar17 = (int64_t **)&g_02802688;
          if (plVar5 != (int64_t *)0x0) {
            (**(code **)(*plVar5 + 0x360))();
            cVar8 = FUN_00e85ea0();
            pplVar17 = (int64_t **)&g_02802688;
            uVar23 = extraout_XMM0_Da_01;
            if (cVar8 != '\0') {
              if ((g_026fd0c0 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
                local_50 = plVar18;
                local_48 = puVar11;
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
                plVar18 = local_50;
                puVar11 = local_48;
                puVar10 = local_e8;
              }
              cVar8 = FUN_00e8db60();
              pplVar17 = &local_138;
              uVar23 = extraout_XMM0_Da_02;
              if (cVar8 == '\0') {
                pplVar17 = (int64_t **)&g_02802688;
              }
            }
          }
          local_170 = *pplVar17;
          cVar8 = *(char *)(pplVar17 + 1);
          if ((cVar8 != '\0') && (local_170 != (int64_t *)0x0)) {
            uVar23 = FUN_00d50b00();
LAB_00d340fc:
            local_71 = cVar8;
            FUN_00d8cbf0(uVar23,6);
            plVar20 = local_b8;
            local_140 = 0;
            if ((char)local_b0[0] == '\0') {
              if (local_b8 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_b0[0] = local_b0[0] & 0xffffff00;
            }
            local_140 = '\x01';
            local_148 = plVar20;
            uVar23 = FUN_00c8e5b0();
            if ((local_140 != '\0') && (local_148 != (int64_t *)0x0)) {
              uVar23 = FUN_00d50b20();
            }
            if (((char)local_b0[0] != '\0') && (local_b8 != (int64_t *)0x0)) {
              uVar23 = FUN_00d50b20();
            }
            FUN_00c92190(uVar23,5);
            puVar12 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar12 = &g_02572358;
            (*pcVar4)();
            local_118 = puVar12;
            FUN_00c9fe20();
            plVar20 = local_b8;
            local_100 = (int64_t *)CONCAT71(local_100._1_7_,(char)local_b0[0]);
            pplVar17 = (int64_t **)local_b0;
            if ((char)local_b0[0] == '\0') {
              pplVar17 = &local_100;
            }
            *(void*)pplVar17 = 0;
            if (((char)local_b0[0] != '\0') && (plVar20 != (int64_t *)0x0)) {
              pplVar17 = (int64_t **)FUN_00d50b20();
            }
            uVar16 = (undefined7)((uint64_t)pplVar17 >> 8);
            if (plVar20 == (int64_t *)0x0) {
              plVar20 = (int64_t *)0x0;
              local_104 = (uint32_t)CONCAT71(uVar16,1);
              local_178 = 0;
            }
            else {
              local_178 = CONCAT71(uVar16,1);
              if ((char)local_100 == '\0') {
                FUN_00d50b00();
              }
              local_104 = 0;
            }
            uVar1 = *(uint *)((int64_t)plVar20 + 0xc);
            local_120 = plVar20;
            if ((int)uVar1 < 1) {
              local_58 = 0;
              local_60 = (int64_t *)0x0;
              local_88 = (void*)0x0;
              local_e0 = 0;
              local_80 = 0;
              bVar2 = false;
LAB_00d35092:
              bVar3 = bVar2;
              uVar24 = FUN_00d50b20();
            }
            else {
              uVar22 = 0;
              local_80 = 0;
              uVar19 = 0;
              local_88 = (void*)0x0;
              local_d8 = 0;
              local_40 = (int64_t *)0x0;
              local_50 = plVar18;
              local_48 = puVar11;
              uVar23 = 0;
              do {
                local_38 = uVar23;
                uVar21 = local_d8 & 0xffffffff;
                puVar10 = (void*)FUN_00e8fc40();
                FUN_00d4ff40();
                *puVar10 = local_190;
                uVar13 = (*local_188)();
                uVar16 = (undefined7)((uint64_t)uVar13 >> 8);
                cVar8 = (char)uVar21;
                if (puVar10 == local_88) {
                  if (cVar8 == '\0') {
                    local_d8 = CONCAT71(uVar16,1);
                    puVar10 = local_88;
                  }
                  else {
                    FUN_00d50b20();
                    local_d8 = uVar21;
                    puVar10 = local_88;
                  }
                }
                else {
                  local_d8 = CONCAT71(uVar16,1);
                  if ((cVar8 != '\0') && (local_88 != (void*)0x0)) {
                    FUN_00d50b20();
                  }
                }
                local_88 = puVar10;
                lVar15 = *(int64_t *)(local_120[2] + uVar22 * 8);
                cVar8 = (char)uVar19;
                if (local_80 == lVar15) {
                  lVar14 = local_80;
                  if ((cVar8 == '\0') && (lVar15 != 0)) {
                    uVar19 = 1;
                    FUN_00d50b00();
                    lVar14 = local_80;
                  }
                }
                else {
                  if (lVar15 != 0) {
                    FUN_00d50b00();
                  }
                  uVar19 = 1;
                  lVar14 = lVar15;
                  if ((cVar8 != '\0') && (local_80 != 0)) {
                    FUN_00d50b20();
                  }
                }
                local_80 = lVar14;
                uVar23 = FUN_00ca61c0();
                plVar18 = local_100;
                local_b0[0] = 1;
                local_b8 = &g_024c5048;
                local_a0 = 0;
                if (local_100 != (int64_t *)0x0) {
                  uVar23 = FUN_00d50b00();
                }
                local_a8 = plVar18;
                local_a0 = '\x01';
                uVar23 = FUN_00d94d80(uVar23,&local_b8);
                local_b8 = &g_024c5048;
                if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
                  uVar23 = FUN_00d50b20();
                }
                if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
                  uVar23 = FUN_00d50b20();
                }
                FUN_00d8cbf0(uVar23,6);
                plVar18 = local_b8;
                if (local_b8 == local_40) {
                  plVar18 = local_40;
                  uVar23 = local_38;
                  if (((char)local_38 != '\0') || (local_b8 == (int64_t *)0x0))
                  goto joined_r0x00d34573;
                  uVar23 = 1;
                  if ((char)local_b0[0] == '\0') {
                    FUN_00d50b00();
                    goto LAB_00d34558;
                  }
                }
                else if ((char)local_b0[0] == '\0') {
                  if (local_b8 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                  uVar23 = 1;
                  if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                    local_40 = plVar18;
LAB_00d34558:
                    plVar18 = local_40;
                    uVar23 = 1;
                  }
joined_r0x00d34573:
                  local_40 = plVar18;
                  plVar18 = local_40;
                  if (((char)local_b0[0] != '\0') && (local_b8 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                    plVar18 = local_40;
                  }
                }
                else {
                  uVar23 = 1;
                  if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                local_b0[0] = local_b0[0] & 0xffffff00;
                local_b8 = plVar18;
                local_40 = plVar18;
                FUN_00d21140();
                if (((char)local_b0[0] != '\0') && (local_b8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                uVar22 = uVar22 + 1;
              } while (uVar1 != uVar22);
              local_128 = 0;
              local_60 = (int64_t *)0x0;
              local_58 = 0;
              local_68 = (int64_t *)0x0;
              uVar22 = 0;
              local_c0 = (int64_t *)0x0;
              local_70 = 0;
              do {
                puVar10 = (void*)FUN_00e8fc40();
                FUN_00d4ff40();
                *puVar10 = local_190;
                (*local_188)();
                if (puVar10 == local_88) {
                  FUN_00d50b20();
                  local_31 = (uint8_t)local_d8;
                  puVar10 = local_88;
                }
                else {
                  local_31 = 1;
                  if (local_88 != (void*)0x0) {
                    FUN_00d50b20();
                  }
                }
                local_88 = puVar10;
                lVar15 = local_120[2];
                lVar14 = *(int64_t *)(lVar15 + local_128 * 8);
                if (local_80 == lVar14) {
                  local_e0 = uVar19;
                  lVar7 = local_80;
                  if (((char)uVar19 == '\0') && (lVar14 != 0)) {
                    local_e0 = CONCAT71((int7)((uint64_t)lVar15 >> 8),1);
                    FUN_00d50b00();
                    lVar7 = local_80;
                  }
                }
                else {
                  if (lVar14 != 0) {
                    lVar15 = FUN_00d50b00();
                  }
                  local_e0 = CONCAT71((int7)((uint64_t)lVar15 >> 8),1);
                  lVar7 = lVar14;
                  if (((char)uVar19 != '\0') && (local_80 != 0)) {
                    FUN_00d50b20();
                  }
                }
                local_80 = lVar7;
                lVar15 = local_118[2];
                plVar18 = *(int64_t **)(lVar15 + local_128 * 8);
                if (local_40 == plVar18) {
                  plVar18 = local_40;
                  local_38 = uVar23;
                  if (((char)uVar23 == '\0') && (local_40 != (int64_t *)0x0)) {
                    local_38 = (uint32_t)CONCAT71((int7)((uint64_t)lVar15 >> 8),1);
                    FUN_00d50b00();
                  }
                }
                else {
                  if (plVar18 != (int64_t *)0x0) {
                    lVar15 = FUN_00d50b00();
                  }
                  local_38 = (uint32_t)CONCAT71((int7)((uint64_t)lVar15 >> 8),1);
                  if (((char)uVar23 != '\0') && (local_40 != (int64_t *)0x0)) {
                    local_40 = plVar18;
                    FUN_00d50b20();
                  }
                }
                lVar15 = plVar18[3];
                local_f8 = '\0';
                local_100 = plVar18;
                local_f0 = plVar18;
                uVar23 = FUN_00c8e5b0();
                if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
                  uVar23 = FUN_00d50b20();
                }
                if (0 < 0x65 - (int)lVar15) {
                  iVar9 = (int)lVar15 + -0x65;
                  do {
                    uVar23 = FUN_00c92190(uVar23,1);
                    iVar9 = iVar9 + 1;
                  } while (iVar9 != 0);
                }
                uVar23 = FUN_00c92190(uVar23,3);
                local_1e0 = local_80;
                local_1d8 = '\0';
                uVar13 = FUN_000175c0(uVar23,&local_1e0);
                plVar18 = local_b8;
                uVar13 = CONCAT71((int7)((uint64_t)uVar13 >> 8),g_027048b0);
                if ((g_027048b0 == '\0') && (uVar13 = ___cxa_guard_acquire(), (int)uVar13 != 0)) {
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
                  uVar13 = ___cxa_guard_release();
                }
                pplVar17 = (int64_t **)&g_02802688;
                if (plVar18 != (int64_t *)0x0) {
                  (**(code **)(*plVar18 + 0x360))();
                  uVar13 = FUN_00e85ea0();
                  pplVar17 = &local_b8;
                  if ((char)uVar13 == '\0') {
                    pplVar17 = (int64_t **)&g_02802688;
                  }
                }
                plVar18 = *pplVar17;
                cVar8 = (char)uVar22;
                if (plVar18 == local_68) {
                  local_d0 = uVar22;
                  plVar20 = local_68;
                  if ((cVar8 == '\0') && (plVar18 != (int64_t *)0x0)) {
                    plVar18 = local_68;
                    if (*(char *)(pplVar17 + 1) != '\0') goto LAB_00d34914;
                    local_d0 = CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
                    FUN_00d50b00();
                    plVar20 = local_68;
                  }
                }
                else if (*(char *)(pplVar17 + 1) == '\0') {
                  if (plVar18 != (int64_t *)0x0) {
                    uVar13 = FUN_00d50b00();
                  }
                  local_d0 = CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
                  plVar20 = plVar18;
                  if ((cVar8 != '\0') && (local_68 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  if ((cVar8 != '\0') && (local_68 != (int64_t *)0x0)) {
                    uVar13 = FUN_00d50b20();
                  }
LAB_00d34914:
                  *(void*)(pplVar17 + 1) = 0;
                  local_d0 = CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
                  plVar20 = plVar18;
                }
                local_68 = plVar20;
                if (((char)local_b0[0] != '\0') && (local_b8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_1d8 != '\0') && (local_1e0 != 0)) {
                  FUN_00d50b20();
                }
                plVar18 = *(int64_t **)local_68[2];
                local_b0[0] = local_b0[0] & 0xffffff00;
                local_b8 = plVar18;
                uVar13 = FUN_00053ac0();
                pplVar17 = (int64_t **)&g_02802688;
                if (plVar18 != (int64_t *)0x0) {
                  (**(code **)(*plVar18 + 0x360))();
                  uVar13 = FUN_00e85ea0();
                  pplVar17 = &local_b8;
                  if ((char)uVar13 == '\0') {
                    pplVar17 = (int64_t **)&g_02802688;
                  }
                }
                plVar20 = *pplVar17;
                if (plVar20 == local_c0) {
                  if (((char)local_70 == '\0') && (plVar20 != (int64_t *)0x0)) {
                    plVar20 = local_c0;
                    if (*(char *)(pplVar17 + 1) != '\0') goto LAB_00d34a65;
                    local_c8 = (uint)CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
                    FUN_00d50b00();
                  }
                  else {
                    local_c8 = (uint)local_70;
                  }
                }
                else if (*(char *)(pplVar17 + 1) == '\0') {
                  if (plVar20 != (int64_t *)0x0) {
                    uVar13 = FUN_00d50b00();
                  }
                  local_c8 = (uint)CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
                  if (((char)local_70 == '\0') || (local_c0 == (int64_t *)0x0)) goto LAB_00d34ae0;
                  FUN_00d50b20();
                  local_c0 = plVar20;
                }
                else {
                  if (((char)local_70 != '\0') && (local_c0 != (int64_t *)0x0)) {
                    uVar13 = FUN_00d50b20();
                  }
LAB_00d34a65:
                  *(void*)(pplVar17 + 1) = 0;
                  local_c8 = (uint)CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
                  if (((char)local_b0[0] == '\0') || (plVar18 == (int64_t *)0x0)) {
LAB_00d34ae0:
                    local_c0 = plVar20;
                  }
                  else {
                    FUN_00d50b20();
                    local_c0 = plVar20;
                  }
                }
                plVar18 = *(int64_t **)(local_68[2] + 8);
                local_b8 = plVar18;
                local_b0[0] = local_b0[0] & 0xffffff00;
                uVar13 = CONCAT71((int7)((uint64_t)local_68[2] >> 8),g_026fd0c0);
                if ((g_026fd0c0 == '\0') && (uVar13 = ___cxa_guard_acquire(), (int)uVar13 != 0)) {
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
                  uVar13 = ___cxa_guard_release();
                }
                pplVar17 = (int64_t **)&g_02802688;
                if (plVar18 != (int64_t *)0x0) {
                  (**(code **)(*plVar18 + 0x360))(local_58);
                  uVar13 = FUN_00e85ea0(local_58);
                  pplVar17 = &local_b8;
                  if ((char)uVar13 == '\0') {
                    pplVar17 = (int64_t **)&g_02802688;
                  }
                }
                plVar18 = *pplVar17;
                if (local_60 == plVar18) {
                  if (((char)local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
                    plVar18 = local_60;
                    if (*(char *)(pplVar17 + 1) != '\0') goto LAB_00d34bdc;
                    local_58 = CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
                    FUN_00d50b00();
                  }
                }
                else {
                  if (*(char *)(pplVar17 + 1) == '\0') {
                    if (plVar18 != (int64_t *)0x0) {
                      uVar13 = FUN_00d50b00();
                    }
                    if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                      local_60 = plVar18;
                      uVar13 = FUN_00d50b20();
                      local_58 = CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
                      goto LAB_00d34beb;
                    }
                  }
                  else {
                    if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                      local_60 = plVar18;
                      uVar13 = FUN_00d50b20();
                    }
LAB_00d34bdc:
                    *(void*)(pplVar17 + 1) = 0;
                  }
                  local_58 = CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
                  local_60 = plVar18;
                }
LAB_00d34beb:
                if (((char)local_b0[0] != '\0') && (local_b8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                local_1d0 = local_60;
                local_1c8 = '\0';
                FUN_00ca61c0();
                uVar23 = FUN_00083ea0(2,local_248);
                uVar23 = FUN_00d94d80(uVar23,&local_b8);
                local_b8 = (int64_t *)&g_0253d630;
                if ((local_90 != '\0') && (local_98 != 0)) {
                  uVar23 = FUN_00d50b20();
                }
                local_b8 = &g_024c5048;
                if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
                  uVar23 = FUN_00d50b20();
                }
                if ((local_210 != '\0') && (local_218 != 0)) {
                  uVar23 = FUN_00d50b20();
                }
                if ((local_1c8 != '\0') && (local_1d0 != (int64_t *)0x0)) {
                  uVar23 = FUN_00d50b20();
                }
                FUN_00d8cbf0(uVar23,6);
                plVar18 = local_b8;
                local_160 = 0;
                if ((char)local_b0[0] == '\0') {
                  if (local_b8 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_b0[0] = local_b0[0] & 0xffffff00;
                }
                local_160 = '\x01';
                local_168 = plVar18;
                uVar23 = FUN_00c8e5b0();
                if ((local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
                  uVar23 = FUN_00d50b20();
                }
                if (((char)local_b0[0] != '\0') && (local_b8 != (int64_t *)0x0)) {
                  uVar23 = FUN_00d50b20();
                }
                uVar6 = local_c8;
                uVar22 = local_d0;
                uVar24 = FUN_00c92190(uVar23,3);
                local_128 = local_128 + 1;
                uVar19 = local_e0 & 0xffffffff;
                local_d8 = CONCAT71((int7)(local_e0 >> 8),local_31);
                uVar22 = uVar22 & 0xffffffff;
                local_40 = local_f0;
                local_70 = (uint64_t)uVar6;
                uVar23 = local_38;
              } while (local_128 != uVar1);
              if (((char)uVar6 != '\0') && (local_c0 != (int64_t *)0x0)) {
                uVar24 = FUN_00d50b20();
              }
              puVar11 = local_48;
              plVar18 = local_50;
              puVar10 = local_e8;
              if (((char)local_38 != '\0') && (local_f0 != (int64_t *)0x0)) {
                uVar24 = FUN_00d50b20();
              }
              if (((char)local_d0 != '\0') && (local_68 != (int64_t *)0x0)) {
                uVar24 = FUN_00d50b20();
              }
              bVar3 = true;
              bVar2 = true;
              if (local_118 != (void*)0x0) goto LAB_00d35092;
            }
            if ((char)local_104 == '\0' && local_120 != (int64_t *)0x0) {
              uVar24 = FUN_00d50b20();
            }
            if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
              uVar24 = FUN_00d50b20();
            }
            if ((bVar3) && (local_88 != (void*)0x0)) {
              uVar24 = FUN_00d50b20();
            }
            if (((char)local_e0 != '\0') && (local_80 != 0)) {
              uVar24 = FUN_00d50b20();
            }
            uVar23 = FUN_00c92190(uVar24,5);
            bVar2 = true;
            if (local_71 != '\0') {
              uVar23 = FUN_00d50b20();
            }
            goto LAB_00d33ff4;
          }
          if (local_170 != (int64_t *)0x0) goto LAB_00d340fc;
        }
        else {
          FUN_00d50b00();
LAB_00d33e19:
          local_1a8 = '\0';
          local_1b0 = plVar20;
          uVar23 = FUN_00ca61c0();
          plVar20 = local_100;
          local_b0[0] = 1;
          local_b8 = &g_024c5048;
          local_a0 = 0;
          if (local_100 != (int64_t *)0x0) {
            uVar23 = FUN_00d50b00();
          }
          local_a8 = plVar20;
          local_a0 = '\x01';
          uVar23 = FUN_00d94d80(uVar23,&local_b8);
          local_b8 = &g_024c5048;
          if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
            uVar23 = FUN_00d50b20();
          }
          if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
            uVar23 = FUN_00d50b20();
          }
          if ((local_1a8 != '\0') && (local_1b0 != (int64_t *)0x0)) {
            uVar23 = FUN_00d50b20();
          }
          FUN_00d8cbf0(uVar23,6);
          plVar20 = local_b8;
          local_150 = 0;
          if ((char)local_b0[0] == '\0') {
            if (local_b8 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_b0[0] = local_b0[0] & 0xffffff00;
          }
          local_150 = '\x01';
          local_158 = plVar20;
          uVar23 = FUN_00c8e5b0();
          if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
            uVar23 = FUN_00d50b20();
          }
          if (((char)local_b0[0] != '\0') && (local_b8 != (int64_t *)0x0)) {
            uVar23 = FUN_00d50b20();
          }
          uVar23 = FUN_00c92190(uVar23,1);
          bVar2 = false;
LAB_00d33ff4:
          if ((local_72 != '\0') && (!bVar2)) {
            uVar23 = FUN_00d50b20();
          }
        }
        if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
          uVar23 = FUN_00d50b20();
        }
        if (puVar11 != (void*)0x0) {
          uVar23 = FUN_00d50b20();
        }
        if (plVar18 != (int64_t *)0x0) {
          uVar23 = FUN_00d50b20();
        }
        uVar19 = local_240 + 1;
      } while (uVar19 != local_180);
    }
    FUN_00c92190(uVar23,2);
    local_1a0 = *arg1;
    local_198 = '\0';
    local_c4 = FUN_00c91c80();
    if ((local_198 != '\0') && (local_1a0 != 0)) {
      FUN_00d50b20();
    }
    if (puVar10 != (void*)0x0) {
      FUN_00d50b20();
    }
    uVar19 = local_180;
    if (local_110 == (int64_t *)0x0) {
      return local_c4;
    }
  }
  local_180 = uVar19;
  FUN_00d50b20();
  return local_c4;
}

