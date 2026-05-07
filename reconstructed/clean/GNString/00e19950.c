// Function: FUN_00e19950
// Address: 00e19950
// Size: 5970 bytes
// Class: GNString
// String references:
//   "%@getLicense?%@"
//   "GNString"
//   "GNDictionary"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00e19950(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t lVar4;
  void*puVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  void*puVar8;
  char cVar9;
  byte bVar10;
  int iVar11;
  void*puVar12;
  int64_t *plVar13;
  int64_t **pplVar14;
  void*puVar15;
  int64_t this_ptr;
  char cVar16;
  bool bVar17;
  uint32_t uVar18;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Da_04;
  int64_t local_260;
  uint64_t local_258;
  int64_t local_250;
  char local_248;
  void*local_240;
  void*local_238;
  char local_230;
  int64_t local_228;
  char local_220;
  int64_t local_218;
  char local_210;
  void*local_208;
  char local_200;
  void*local_1f8;
  char local_1f0;
  int64_t local_1e8;
  char local_1e0;
  void*local_1d8;
  char local_1d0;
  void*local_1c8;
  char local_1c0;
  int64_t *local_1b8;
  char local_1b0;
  void*local_1a8;
  char local_1a0;
  int64_t local_198;
  char local_190;
  int64_t local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t *local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t *local_118;
  char local_110;
  void*local_108;
  char local_100;
  void*local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  void*local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  uVar18 = FUN_00e00960();
  if (local_70 == (void*)0x0) {
    bVar17 = false;
  }
  else {
    uVar18 = FUN_00e00960();
    bVar17 = (char)local_40[6] != '\0';
    if (local_38 != '\0') {
      uVar18 = FUN_00d50b20();
    }
  }
  if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
    uVar18 = FUN_00d50b20();
  }
  if (!bVar17) {
    FUN_00e67a40(uVar18,0);
    puVar5 = local_70;
    if ((((local_68 == '\0') && (local_70 != (void*)0x0)) &&
        (FUN_00d50b00(), local_68 != '\0')) && (local_70 != (void*)0x0)) {
      FUN_00d50b20();
    }
    lVar1 = *(int64_t *)(this_ptr + 0x78);
    if (lVar1 != 0) {
      local_d0 = 0;
      uVar18 = FUN_00d50b00();
      puVar12 = g_02787870;
      local_d0 = '\x01';
      local_d8 = lVar1;
      if (g_02787870 != (void*)0x0) {
        uVar18 = FUN_00d50b00();
      }
      local_70 = puVar12;
      local_68 = '\0';
      FUN_00ca0840(uVar18,&local_70);
      if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (puVar12 != (void*)0x0) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
    }
    local_238 = puVar5;
    local_230 = '\0';
    FUN_00e6f320();
    if ((local_230 != '\0') && (local_238 != (void*)0x0)) {
      FUN_00d50b20();
    }
    puVar12 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar12 = &g_02572358;
    uVar18 = (*g_02572370)();
    lVar4 = g_02787900;
    lVar1 = g_027855c8;
    if (*(char *)(this_ptr + 0x70) == '\0') {
      if (g_027855c8 != 0) {
        uVar18 = FUN_00d50b00();
      }
      puVar15 = g_027855b0;
      local_1e8 = lVar1;
      local_1e0 = '\x01';
      if (g_027855b0 != (void*)0x0) {
        uVar18 = FUN_00d50b00();
      }
      local_70 = puVar15;
      local_68 = '\0';
      FUN_00ca0840(uVar18,&local_70);
      if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (puVar15 != (void*)0x0) {
        FUN_00d50b20();
      }
      if ((local_1e0 != '\0') && (local_1e8 != 0)) {
        FUN_00d50b20();
      }
      puVar15 = g_027855b0;
      if (g_027855b0 != (void*)0x0) {
        FUN_00d50b00();
      }
      local_70 = puVar15;
      local_68 = '\0';
      FUN_00d21140();
      if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (puVar15 != (void*)0x0) {
        FUN_00d50b20();
      }
      puVar15 = g_02787870;
      if (g_02787870 != (void*)0x0) {
        FUN_00d50b00();
      }
      local_70 = puVar15;
      local_68 = '\0';
      FUN_00d21140();
      if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (puVar15 != (void*)0x0) {
        FUN_00d50b20();
      }
      puVar15 = g_027855c0;
      if (g_027855c0 != (void*)0x0) {
        FUN_00d50b00();
      }
      local_70 = puVar15;
      local_68 = '\0';
      FUN_00d21140();
      if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (puVar15 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      if (g_02787900 != 0) {
        uVar18 = FUN_00d50b00();
      }
      puVar15 = g_027855a0;
      local_228 = lVar4;
      local_220 = '\x01';
      if (g_027855a0 != (void*)0x0) {
        uVar18 = FUN_00d50b00();
      }
      local_70 = puVar15;
      local_68 = '\0';
      uVar18 = FUN_00ca0840(uVar18,&local_70);
      if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
        uVar18 = FUN_00d50b20();
      }
      if (puVar15 != (void*)0x0) {
        uVar18 = FUN_00d50b20();
      }
      if ((local_220 != '\0') && (local_228 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      lVar1 = g_027855a8;
      if (g_027855a8 != 0) {
        uVar18 = FUN_00d50b00();
      }
      puVar15 = g_027855b0;
      local_218 = lVar1;
      local_210 = '\x01';
      if (g_027855b0 != (void*)0x0) {
        uVar18 = FUN_00d50b00();
      }
      local_70 = puVar15;
      local_68 = '\0';
      uVar18 = FUN_00ca0840(uVar18,&local_70);
      if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
        uVar18 = FUN_00d50b20();
      }
      if (puVar15 != (void*)0x0) {
        uVar18 = FUN_00d50b20();
      }
      if ((local_210 != '\0') && (local_218 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      puVar15 = g_02787870;
      if (g_02787870 != (void*)0x0) {
        uVar18 = FUN_00d50b00();
      }
      local_208 = puVar15;
      local_200 = '\x01';
      uVar18 = FUN_000175c0(uVar18,&local_208);
      puVar15 = local_70;
      if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
        uVar18 = FUN_00d50b20();
      }
      if ((local_200 != '\0') && (local_208 != (void*)0x0)) {
        uVar18 = FUN_00d50b20();
      }
      puVar8 = g_02787870;
      if (puVar15 != (void*)0x0) {
        if (g_02787870 != (void*)0x0) {
          uVar18 = FUN_00d50b00();
        }
        local_1f8 = puVar8;
        local_1f0 = '\x01';
        uVar18 = FUN_000175c0(uVar18,&local_1f8);
        plVar6 = local_40;
        puVar15 = g_027855b8;
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            uVar18 = FUN_00d50b00();
            puVar15 = g_027855b8;
          }
        }
        else {
          local_38 = '\0';
        }
        g_027855b8 = puVar15;
        if (puVar15 != (void*)0x0) {
          uVar18 = FUN_00d50b00();
        }
        local_68 = '\0';
        local_70 = puVar15;
        FUN_00ca0840(uVar18,&local_70);
        if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (puVar15 != (void*)0x0) {
          FUN_00d50b20();
        }
        if (plVar6 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_1f0 != '\0') && (local_1f8 != (void*)0x0)) {
          FUN_00d50b20();
        }
        puVar15 = g_02787870;
        if (g_02787870 != (void*)0x0) {
          FUN_00d50b00();
        }
        local_70 = puVar15;
        local_68 = '\0';
        FUN_00ca13a0();
        if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (puVar15 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
      puVar15 = g_027855b0;
      if (g_027855b0 != (void*)0x0) {
        FUN_00d50b00();
      }
      local_70 = puVar15;
      local_68 = '\0';
      FUN_00d21140();
      if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (puVar15 != (void*)0x0) {
        FUN_00d50b20();
      }
      puVar15 = g_027855b8;
      if (g_027855b8 != (void*)0x0) {
        FUN_00d50b00();
      }
      local_70 = puVar15;
      local_68 = '\0';
      FUN_00d21140();
      if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (puVar15 != (void*)0x0) {
        FUN_00d50b20();
      }
      puVar15 = g_027855c0;
      if (g_027855c0 != (void*)0x0) {
        FUN_00d50b00();
      }
      local_70 = puVar15;
      local_68 = '\0';
      FUN_00d21140();
      if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (puVar15 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    local_1d8 = puVar5;
    local_1d0 = '\0';
    local_1c0 = '\0';
    local_1c8 = puVar12;
    FUN_00e600c0();
    if ((local_1c0 != '\0') && (local_1c8 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_1d0 != '\0') && (local_1d8 != (void*)0x0)) {
      FUN_00d50b20();
    }
    FUN_00e69510();
    lVar1 = g_02787880;
    if (g_02787880 != 0) {
      FUN_00d50b00();
    }
    local_260 = lVar1;
    uVar18 = FUN_00083ea0(2,&local_260);
    FUN_00d8cb40(uVar18,&local_70);
    plVar6 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    local_70 = (void*)&g_0253d630;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    local_70 = &g_024c5048;
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_248 != '\0') && (local_250 != 0)) {
      FUN_00d50b20();
    }
    local_68 = '\0';
    local_70 = (void*)0x0;
    FUN_00da5ad0();
    local_58 = local_38 != '\0';
    local_60 = local_40;
    if ((bool)local_58) {
      local_38 = '\0';
    }
    local_50 = FUN_00da7170();
    FUN_00da7180();
    if (local_60 == (int64_t *)0x0) {
      puVar15 = (void*)0x0;
      cVar16 = '\0';
    }
    else {
      cVar16 = '\0';
      local_240 = &g_026fdd40;
      puVar15 = (void*)0x0;
      do {
        local_1b8 = plVar6;
        local_1b0 = '\0';
        local_1a8 = puVar5;
        local_1a0 = '\0';
        local_258 = *(void*)(this_ptr + 0xa0);
        FUN_00d50b00();
        FUN_00e69550((int)local_258,&local_1b8,&stack0xffffffffffffff38);
        plVar7 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
             (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if (this_ptr != 0) {
          FUN_00d50b20();
        }
        if ((local_1a0 != '\0') && (local_1a8 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_1b0 != '\0') && (local_1b8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        cVar9 = FUN_00e34a50();
        if (cVar9 != '\0') {
          FUN_00e34a60();
        }
        cVar9 = FUN_00e34240();
        lVar1 = g_02787890;
        puVar8 = puVar15;
        if (cVar9 == '\0') {
          uVar18 = extraout_XMM0_Da;
          if (plVar7 != (int64_t *)0x0) {
            if (g_02787890 != 0) {
              uVar18 = FUN_00d50b00();
            }
            local_198 = lVar1;
            local_190 = '\x01';
            uVar18 = FUN_000175c0(uVar18,&local_198);
            plVar2 = local_40;
            if ((g_026fd0c0 == '\0') &&
               (iVar11 = ___cxa_guard_acquire(), uVar18 = extraout_XMM0_Da_03, iVar11 != 0)) {
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
              uVar18 = ___cxa_guard_release();
            }
            pplVar14 = (int64_t **)&g_02802688;
            if (plVar2 != (int64_t *)0x0) {
              (**(code **)(*plVar2 + 0x360))();
              cVar9 = FUN_00e85ea0();
              pplVar14 = &local_40;
              uVar18 = extraout_XMM0_Da_00;
              if (cVar9 == '\0') {
                pplVar14 = (int64_t **)&g_02802688;
              }
            }
            plVar2 = *pplVar14;
            if (*(char *)(pplVar14 + 1) == '\0') {
              if (plVar2 != (int64_t *)0x0) {
                uVar18 = FUN_00d50b00();
              }
            }
            else {
              *(void*)(pplVar14 + 1) = 0;
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              uVar18 = FUN_00d50b20();
            }
            if ((local_190 != '\0') && (local_198 != 0)) {
              uVar18 = FUN_00d50b20();
            }
            lVar1 = g_027855d0;
            if (plVar2 != (int64_t *)0x0) {
              if (g_027855d0 != 0) {
                uVar18 = FUN_00d50b00();
              }
              local_188 = lVar1;
              local_180 = '\x01';
              FUN_000175c0(uVar18,&local_188);
              plVar13 = local_40;
              if ((g_026fdd40 == '\0') && (iVar11 = ___cxa_guard_acquire(), iVar11 != 0)) {
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
              pplVar14 = (int64_t **)&g_02802688;
              if (plVar13 != (int64_t *)0x0) {
                (**(code **)(*plVar13 + 0x360))();
                cVar9 = FUN_00e85ea0();
                pplVar14 = (int64_t **)&g_02802688;
                if (cVar9 != '\0') {
                  if ((g_026fd0c0 == '\0') && (iVar11 = ___cxa_guard_acquire(), iVar11 != 0)) {
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
                  cVar9 = FUN_00e8db60();
                  pplVar14 = &local_40;
                  if (cVar9 == '\0') {
                    pplVar14 = (int64_t **)&g_02802688;
                  }
                }
              }
              plVar3 = *(int64_t **)(this_ptr + 0x80);
              plVar13 = *pplVar14;
              if (plVar3 != plVar13) {
                if (*(char *)(pplVar14 + 1) == '\0') {
                  if (plVar13 == (int64_t *)0x0) {
                    *(void*)(this_ptr + 0x80) = 0;
                  }
                  else {
                    FUN_00d50b00();
                    plVar3 = *(int64_t **)(this_ptr + 0x80);
                    *(int64_t **)(this_ptr + 0x80) = *pplVar14;
                  }
                }
                else {
                  *(void*)(pplVar14 + 1) = 0;
                  *(int64_t **)(this_ptr + 0x80) = plVar13;
                }
                if (plVar3 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
              }
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_180 != '\0') && (local_188 != 0)) {
                FUN_00d50b20();
              }
              lVar1 = g_027855d8;
              plVar13 = *(int64_t **)(this_ptr + 0x80);
              if (plVar13 == (int64_t *)0x0) {
                if (g_027855d8 != 0) {
                  FUN_00d50b00();
                }
                local_178 = lVar1;
                local_170 = '\x01';
                cVar9 = (**(code **)(*plVar2 + 0x50))();
                if ((local_170 != '\0') && (local_178 != 0)) {
                  FUN_00d50b20();
                }
                lVar1 = g_027855e0;
                if (cVar9 == '\0') {
                  if (g_027855e0 != 0) {
                    FUN_00d50b00();
                  }
                  local_168 = lVar1;
                  local_160 = '\x01';
                  cVar9 = (**(code **)(*plVar2 + 0x50))();
                  if ((local_160 != '\0') && (local_168 != 0)) {
                    FUN_00d50b20();
                  }
                  if (cVar9 != '\0') {
                    plVar13 = (int64_t *)FUN_00e8fc40();
                    FUN_00022d50();
                    (**(code **)(*plVar13 + 0x18))();
                    lVar1 = *(int64_t *)(this_ptr + 0x80);
                    *(int64_t **)(this_ptr + 0x80) = plVar13;
                    if (lVar1 == 0) goto LAB_00e1a74d;
                    FUN_00d50b20();
                  }
                }
                else {
                  plVar13 = (int64_t *)FUN_00e8fc40();
                  FUN_00022d50();
                  (**(code **)(*plVar13 + 0x18))();
                  lVar1 = *(int64_t *)(this_ptr + 0x80);
                  *(int64_t **)(this_ptr + 0x80) = plVar13;
                  if (lVar1 == 0) goto LAB_00e1a74d;
                  FUN_00d50b20();
                }
                plVar13 = *(int64_t **)(this_ptr + 0x80);
                if (plVar13 != (int64_t *)0x0) goto LAB_00e1a74d;
LAB_00e1a742:
                plVar13 = (int64_t *)0x0;
              }
              else {
                if (plVar13 == (int64_t *)0x0) goto LAB_00e1a742;
LAB_00e1a74d:
                FUN_00d50b00();
              }
              FUN_00e6f880();
              if (plVar13 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              lVar1 = g_027855e8;
              if (g_027855e8 != 0) {
                FUN_00d50b00();
              }
              local_158 = lVar1;
              local_150 = '\x01';
              cVar9 = (**(code **)(*plVar2 + 0x50))();
              uVar18 = extraout_XMM0_Da_01;
              if ((local_150 != '\0') && (local_158 != 0)) {
                uVar18 = FUN_00d50b20();
              }
              lVar1 = g_027855f0;
              if (cVar9 == '\0') {
                if (g_027855f0 != 0) {
                  uVar18 = FUN_00d50b00();
                }
                local_148 = lVar1;
                local_140 = '\x01';
                uVar18 = FUN_000175c0(uVar18,&local_148);
                plVar2 = local_40;
                if ((g_026fd0c0 == '\0') &&
                   (iVar11 = ___cxa_guard_acquire(), uVar18 = extraout_XMM0_Da_04, iVar11 != 0)) {
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
                  uVar18 = ___cxa_guard_release();
                }
                pplVar14 = (int64_t **)&g_02802688;
                if (plVar2 != (int64_t *)0x0) {
                  (**(code **)(*plVar2 + 0x360))();
                  cVar9 = FUN_00e85ea0();
                  pplVar14 = &local_40;
                  uVar18 = extraout_XMM0_Da_02;
                  if (cVar9 == '\0') {
                    pplVar14 = (int64_t **)&g_02802688;
                  }
                }
                plVar2 = *pplVar14;
                if (*(char *)(pplVar14 + 1) == '\0') {
                  if (plVar2 != (int64_t *)0x0) {
                    uVar18 = FUN_00d50b00();
                  }
                }
                else {
                  *(void*)(pplVar14 + 1) = 0;
                }
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  uVar18 = FUN_00d50b20();
                }
                if ((local_140 != '\0') && (local_148 != 0)) {
                  uVar18 = FUN_00d50b20();
                }
                if (plVar2 != (int64_t *)0x0) {
                  local_130 = '\0';
                  local_138 = plVar2;
                  FUN_00db9a70();
                  plVar2 = *(int64_t **)(this_ptr + 0x88);
                  plVar13 = plVar2;
                  if (plVar2 != local_40) {
                    if (local_38 == '\0') {
                      if (local_40 == (int64_t *)0x0) {
                        plVar13 = (int64_t *)0x0;
                        goto LAB_00e1a8e9;
                      }
                      FUN_00d50b00();
                      plVar2 = *(int64_t **)(this_ptr + 0x88);
                      *(int64_t **)(this_ptr + 0x88) = local_40;
                      plVar13 = local_40;
                    }
                    else {
                      local_38 = '\0';
                      plVar13 = local_40;
LAB_00e1a8e9:
                      *(int64_t **)(this_ptr + 0x88) = plVar13;
                    }
                    if (plVar2 != (int64_t *)0x0) {
                      FUN_00d50b20();
                      plVar13 = local_40;
                    }
                  }
                  if ((local_38 != '\0') && (plVar13 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  uVar18 = FUN_00d50b20();
                }
                lVar1 = g_027878a0;
                if (g_027878a0 != 0) {
                  uVar18 = FUN_00d50b00();
                }
                local_128 = lVar1;
                local_120 = '\x01';
                FUN_000175c0(uVar18,&local_128);
                plVar2 = local_40;
                if ((g_026fd0c0 == '\0') && (iVar11 = ___cxa_guard_acquire(), iVar11 != 0)) {
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
                pplVar14 = (int64_t **)&g_02802688;
                if (plVar2 != (int64_t *)0x0) {
                  (**(code **)(*plVar2 + 0x360))();
                  cVar9 = FUN_00e85ea0();
                  pplVar14 = &local_40;
                  if (cVar9 == '\0') {
                    pplVar14 = (int64_t **)&g_02802688;
                  }
                }
                plVar2 = *pplVar14;
                if (*(char *)(pplVar14 + 1) == '\0') {
                  if (plVar2 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  *(void*)(pplVar14 + 1) = 0;
                }
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_120 != '\0') && (local_128 != 0)) {
                  FUN_00d50b20();
                }
                if (plVar2 != (int64_t *)0x0) {
                  local_110 = '\0';
                  local_118 = plVar2;
                  FUN_00db9a70();
                  plVar2 = *(int64_t **)(this_ptr + 0x90);
                  plVar13 = plVar2;
                  if (plVar2 != local_40) {
                    if (local_38 == '\0') {
                      if (local_40 == (int64_t *)0x0) {
                        plVar13 = (int64_t *)0x0;
                        goto LAB_00e1aa73;
                      }
                      FUN_00d50b00();
                      plVar2 = *(int64_t **)(this_ptr + 0x90);
                      *(int64_t **)(this_ptr + 0x90) = local_40;
                      plVar13 = local_40;
                    }
                    else {
                      local_38 = '\0';
                      plVar13 = local_40;
LAB_00e1aa73:
                      *(int64_t **)(this_ptr + 0x90) = plVar13;
                    }
                    if (plVar2 != (int64_t *)0x0) {
                      FUN_00d50b20();
                      plVar13 = local_40;
                    }
                  }
                  if ((local_38 != '\0') && (plVar13 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  FUN_00d50b20();
                }
              }
              uVar18 = FUN_00d50b20();
            }
          }
          if (local_70 != (void*)0x0) {
            local_108 = local_70;
            local_100 = '\0';
            local_f8 = puVar5;
            local_f0 = '\0';
            local_e8 = plVar7;
            local_e0 = '\0';
            FUN_00e6a750(uVar18,&local_e8);
            if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_f0 != '\0') && (local_f8 != (void*)0x0)) {
              FUN_00d50b20();
            }
            if ((local_100 != '\0') && (local_108 != (void*)0x0)) {
              FUN_00d50b20();
            }
            *(void*)(this_ptr + 0x98) = 3;
            if (plVar7 == (int64_t *)0x0) {
              bVar10 = FUN_00dd1a20();
              *(uint *)(this_ptr + 0x98) = bVar10 + 1;
            }
            FUN_00e34a70();
            cVar9 = local_68;
            puVar8 = local_70;
            if (local_70 == puVar15) {
              puVar8 = puVar15;
              if (((local_68 != '\0') && (cVar16 == '\0')) && (local_70 != (void*)0x0)) {
                FUN_00d50b00();
                cVar16 = '\x01';
              }
            }
            else {
              if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
                FUN_00d50b00();
              }
              bVar17 = cVar16 != '\0';
              cVar16 = cVar9;
              if ((bVar17) && (puVar15 != (void*)0x0)) {
                FUN_00d50b20();
              }
            }
          }
        }
        puVar15 = puVar8;
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        FUN_00da7180();
        if (local_60 == (int64_t *)0x0) break;
        local_60 = (int64_t *)0x0;
        if (local_58 == '\0') {
          local_58 = '\0';
          break;
        }
        FUN_00d50b20();
        local_58 = '\0';
      } while (local_60 != (int64_t *)0x0);
    }
    local_60 = (int64_t *)0x0;
    if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((puVar15 != (void*)0x0) && (FUN_00e971f0(), cVar16 != '\0')) {
      FUN_00d50b20();
    }
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (puVar12 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (puVar5 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}

