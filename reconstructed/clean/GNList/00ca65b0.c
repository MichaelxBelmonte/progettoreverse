// Function: FUN_00ca65b0
// Address: 00ca65b0
// Size: 7511 bytes
// Class: GNList
// String references:
//   "GNList"
//   "GNData"
//   "GNValue"
//   "%I"
//   "%@"
//   "%f"
//   "\t"
//   "%@ = "
//   "(\n"
//   ",\n"
//   "\"%@\" = "
//   "%02x"
//   "YES"
//   "NO"
//   "{\n"
//   "\"%@\""
//   "%lld"
//   "GNString"
//   "GNDictionary"
//   "\n"
//   ... +0 more
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00ca65b0(uint64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  code *pcVar4;
  int64_t *plVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  void*puVar9;
  int64_t *plVar10;
  int64_t **pplVar11;
  uint64_t uVar12;
  void*arg1;
  int64_t lVar13;
  int64_t *plVar14;
  undefined7 uVar15;
  uint32_t uVar16;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint64_t uVar17;
  uint8_t uVar18;
  int64_t local_258;
  char local_250;
  int64_t local_248;
  char local_240;
  int64_t local_238;
  char local_230;
  int64_t local_228;
  char local_220;
  int64_t local_218;
  char local_210;
  int64_t *local_208;
  uint8_t local_200;
  uint8_t local_1f0;
  uint8_t local_1e0;
  uint64_t local_1d8;
  uint8_t local_1d0;
  int64_t local_1c8;
  uint8_t local_1c0;
  int64_t local_1b8;
  char local_1b0;
  void*local_1a8;
  char local_1a0;
  void*local_198;
  char local_190;
  int64_t local_188;
  int64_t local_180;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int local_154;
  int64_t *local_150;
  char local_148;
  int64_t *local_140;
  char local_138;
  int64_t *local_130;
  char local_128;
  int64_t *local_120;
  char local_118;
  int64_t *local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t local_d0;
  int64_t local_c8;
  int64_t local_c0;
  int64_t *local_b0;
  char local_a8;
  uint64_t local_a0;
  int64_t *local_98;
  char local_90;
  uint64_t local_88;
  char local_7b;
  char local_7a;
  char local_79;
  int64_t *local_78;
  void*local_70;
  int64_t *local_68;
  uint local_60;
  uint32_t local_5c;
  int64_t *local_58;
  char local_50;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  local_88 = param_1;
  if ((g_028a7290 == 0) || (g_028a7299 == '\0')) {
    FUN_00e8cb50();
    lVar13 = g_02773340;
    if (g_028a7290 == 0) {
      if (g_02773340 != 0) {
        FUN_00d50b00();
        lVar1 = g_028a7290;
        if (g_028a7290 == lVar13) {
          bVar3 = false;
          bVar2 = false;
        }
        else {
          g_028a7290 = lVar13;
          bVar3 = true;
          bVar2 = true;
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        if (g_028a7298 == '\0') {
          g_028a7298 = '\x01';
          FUN_00e8cb90();
          bVar2 = bVar3;
        }
        if (!bVar2) {
          FUN_00d50b20();
        }
      }
      g_028a7299 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a7299 = '\x01';
      FUN_00e8cb70();
    }
  }
  puVar9 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &g_025795a8;
  pcVar4 = g_025795c0;
  local_70 = puVar9;
  (*g_025795c0)();
  plVar10 = (int64_t *)*param_2;
  if ((g_026fd0c0 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
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
  if (plVar10 == (int64_t *)0x0) {
LAB_00ca66fd:
    plVar10 = &g_02802688;
  }
  else {
    (**(code **)(*plVar10 + 0x360))();
    cVar6 = FUN_00e85ea0();
    plVar10 = param_2;
    if (cVar6 == '\0') goto LAB_00ca66fd;
  }
  local_188 = *plVar10;
  local_7b = (char)plVar10[1];
  if ((local_7b == '\0') || (local_188 == 0)) {
    if (local_188 != 0) goto LAB_00ca672d;
    plVar10 = (int64_t *)*param_2;
    if ((g_027048b0 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
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
    if (plVar10 == (int64_t *)0x0) {
LAB_00ca6a15:
      plVar10 = &g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      plVar10 = param_2;
      if (cVar6 == '\0') goto LAB_00ca6a15;
    }
    local_c0 = *plVar10;
    local_7a = (char)plVar10[1];
    if ((local_7a != '\0') && (local_c0 != 0)) {
      FUN_00d50b00();
LAB_00ca6a45:
      uVar16 = FUN_00d8dcb0();
      FUN_00d8cbf0(uVar16,6);
      local_140 = local_68;
      local_138 = 0;
      if ((char)local_60 == '\0') {
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = local_60 & 0xffffff00;
      }
      local_138 = '\x01';
      uVar16 = FUN_00c8e5b0();
      if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
        uVar16 = FUN_00d50b20();
      }
      if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        uVar16 = FUN_00d50b20();
      }
      if (0 < *(int *)(local_c0 + 0xc)) {
        local_78 = (int64_t *)CONCAT44(local_78._4_4_,(int)local_88 + 1);
        if ((int)local_88 < 0) {
          lVar13 = 0;
          do {
            if (lVar13 != 0) {
              FUN_00c92190(uVar16,2);
            }
            local_1d8 = *arg1;
            local_1d0 = 0;
            lVar1 = *(int64_t *)(*(int64_t *)(local_c0 + 0x10) + lVar13 * 8);
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
            local_1c0 = 1;
            local_1c8 = lVar1;
            uVar16 = FUN_00ca65b0((uint64_t)local_78 & 0xffffffff,&local_1c8);
            if (lVar1 != 0) {
              uVar16 = FUN_00d50b20();
            }
            lVar13 = lVar13 + 1;
          } while (lVar13 < *(int *)(local_c0 + 0xc));
        }
        else {
          lVar13 = 0;
          do {
            iVar7 = (int)local_78;
            if (lVar13 != 0) {
              uVar16 = FUN_00c92190(uVar16,2);
              iVar7 = (int)local_78;
            }
            do {
              uVar16 = FUN_00c92190(uVar16,1);
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
            local_1d8 = *arg1;
            local_1d0 = 0;
            lVar1 = *(int64_t *)(*(int64_t *)(local_c0 + 0x10) + lVar13 * 8);
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
            local_1c0 = 1;
            local_1c8 = lVar1;
            uVar16 = FUN_00ca65b0((uint64_t)local_78 & 0xffffffff,&local_1c8);
            if (lVar1 != 0) {
              uVar16 = FUN_00d50b20();
            }
            lVar13 = lVar13 + 1;
          } while (lVar13 < *(int *)(local_c0 + 0xc));
        }
      }
      uVar16 = FUN_00c92190(uVar16,1);
      if (0 < (int)local_88) {
        do {
          uVar16 = FUN_00c92190(uVar16,1);
          uVar8 = (int)local_88 - 1;
          local_88 = (uint64_t)uVar8;
        } while (uVar8 != 0);
      }
      uVar16 = FUN_00d8dcb0();
      FUN_00d8cbf0(uVar16,6);
      local_130 = local_68;
      local_128 = 0;
      if ((char)local_60 == '\0') {
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = local_60 & 0xffffff00;
      }
      local_128 = '\x01';
      FUN_00c8e5b0();
      if ((local_128 != '\0') && (local_130 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      bVar2 = false;
LAB_00ca6d76:
      plVar10 = (int64_t *)0x0;
      bVar3 = true;
      if ((local_7a != '\0') && (!bVar2)) {
        FUN_00d50b20();
        plVar10 = (int64_t *)0x0;
      }
      goto LAB_00ca697e;
    }
    if (local_c0 != 0) goto LAB_00ca6a45;
    plVar10 = (int64_t *)*param_2;
    if ((g_026fdd40 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
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
    if (plVar10 == (int64_t *)0x0) {
LAB_00ca6dda:
      plVar10 = &g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      plVar10 = param_2;
      if (cVar6 == '\0') goto LAB_00ca6dda;
    }
    lVar13 = *plVar10;
    local_79 = (char)plVar10[1];
    local_180 = lVar13;
    if ((local_79 != '\0') && (lVar13 != 0)) {
      FUN_00d50b00();
LAB_00ca6e0d:
      lVar13 = *(int64_t *)(lVar13 + 0x10);
      if (lVar13 != 0) {
        FUN_00d50b00();
      }
      local_90 = '\0';
      local_98 = (int64_t *)0x0;
      local_a0 = 0;
      local_78 = (int64_t *)0x0;
      local_c8 = lVar13;
      uVar16 = FUN_00d8dcb0();
      FUN_00d8cbf0(uVar16,6);
      local_120 = local_68;
      local_118 = 0;
      if ((char)local_60 == '\0') {
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = local_60 & 0xffffff00;
      }
      local_118 = '\x01';
      uVar16 = FUN_00c8e5b0();
      if ((local_118 != '\0') && (local_120 != (int64_t *)0x0)) {
        uVar16 = FUN_00d50b20();
      }
      if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        uVar16 = FUN_00d50b20();
      }
      if (*(int *)(lVar13 + 0xc) < 1) {
        local_a0 = 0;
        local_78 = (int64_t *)0x0;
      }
      else {
        local_154 = (int)local_88 + 1;
        lVar13 = 0;
        local_78 = (int64_t *)0x0;
        local_a0 = 0;
        do {
          local_d0 = lVar13;
          if (lVar13 != 0) {
            uVar16 = FUN_00c92190(lVar13,1);
          }
          iVar7 = local_154;
          if (-1 < (int)local_88) {
            do {
              uVar16 = FUN_00c92190(uVar16,1);
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          FUN_00d8eb70();
          cVar6 = local_90;
          plVar14 = local_98;
          plVar10 = *(int64_t **)(*(int64_t *)(local_c8 + 0x10) + local_d0 * 8);
          if (local_98 == plVar10) {
            if ((local_90 == '\0') && (plVar10 != (int64_t *)0x0)) {
              FUN_00d50b00();
              plVar10 = plVar14;
              goto LAB_00ca6fe5;
            }
          }
          else {
            if (plVar10 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_98 = plVar10;
            if ((cVar6 != '\0') && (plVar14 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_00ca6fe5:
            local_90 = '\x01';
            plVar14 = plVar10;
          }
          if ((g_026fd0c0 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
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
          pplVar11 = (int64_t **)&g_02802688;
          if (plVar14 != (int64_t *)0x0) {
            (**(code **)(*plVar14 + 0x360))();
            cVar6 = FUN_00e85ea0();
            pplVar11 = &local_98;
            if (cVar6 == '\0') {
              pplVar11 = (int64_t **)&g_02802688;
            }
          }
          plVar5 = local_78;
          plVar10 = *pplVar11;
          cVar6 = *(char *)(pplVar11 + 1);
          uVar15 = (undefined7)((uint64_t)plVar14 >> 8);
          uVar12 = CONCAT71(uVar15,cVar6);
          if (plVar10 == local_78) {
            if (((cVar6 == '\0') || ((char)local_a0 != '\0')) || (plVar10 == (int64_t *)0x0)) {
              uVar12 = local_a0 & 0xffffffff;
            }
            else {
              uVar12 = CONCAT71(uVar15,1);
              FUN_00d50b00();
            }
          }
          else {
            if ((cVar6 != '\0') && (plVar10 != (int64_t *)0x0)) {
              FUN_00d50b00();
            }
            plVar5 = plVar10;
            if (((char)local_a0 != '\0') && (local_78 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          local_78 = plVar5;
          if (local_78 == (int64_t *)0x0) {
            (**(code **)(*local_98 + 400))();
            local_78 = local_68;
            if (local_68 == (int64_t *)0x0) {
              local_78 = (int64_t *)0x0;
            }
            else {
              uVar12 = CONCAT71((int7)(uVar12 >> 8),1);
              if ((char)local_60 == '\0') {
                FUN_00d50b00();
                if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
          }
          lVar13 = g_028a7290;
          local_a0 = uVar12 & 0xffffffff;
          local_160 = 0;
          if (g_028a7290 != 0) {
            FUN_00d50b00();
          }
          local_168 = lVar13;
          local_160 = '\x01';
          cVar6 = FUN_00d90dc0();
          uVar16 = extraout_XMM0_Da;
          if ((local_160 != '\0') && (local_168 != 0)) {
            uVar16 = FUN_00d50b20();
          }
          plVar10 = local_78;
          if (cVar6 == '\0') {
            uVar16 = FUN_00ca61c0();
            plVar10 = local_b0;
            local_60 = 1;
            local_68 = &g_024c5048;
            local_50 = 0;
            if (local_b0 != (int64_t *)0x0) {
              uVar16 = FUN_00d50b00();
            }
            local_58 = plVar10;
            local_50 = '\x01';
            uVar16 = FUN_00d94d80(uVar16,&local_68);
            local_68 = &g_024c5048;
            if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
              uVar16 = FUN_00d50b20();
            }
            if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
              uVar16 = FUN_00d50b20();
            }
          }
          else {
            local_60 = 1;
            local_68 = &g_024c5048;
            local_50 = 0;
            if (local_78 != (int64_t *)0x0) {
              uVar16 = FUN_00d50b00();
            }
            local_58 = plVar10;
            local_50 = '\x01';
            uVar16 = FUN_00d94d80(uVar16,&local_68);
            local_68 = &g_024c5048;
            if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
              uVar16 = FUN_00d50b20();
            }
          }
          FUN_00d8cbf0(uVar16,6);
          plVar10 = local_68;
          local_108 = 0;
          if ((char)local_60 == '\0') {
            if (local_68 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_60 = local_60 & 0xffffff00;
          }
          local_108 = '\x01';
          local_110 = plVar10;
          uVar16 = FUN_00c8e5b0();
          if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
            uVar16 = FUN_00d50b20();
          }
          if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            uVar16 = FUN_00d50b20();
          }
          uVar17 = *arg1;
          uVar18 = 0;
          plVar10 = *(int64_t **)(*(int64_t *)(local_c8 + 0x10) + local_d0 * 8);
          if (plVar10 != (int64_t *)0x0) {
            uVar16 = FUN_00d50b00();
          }
          local_a8 = '\x01';
          local_b0 = plVar10;
          FUN_00c9fe40(uVar16,&local_b0,param_3,param_4,uVar17,uVar18);
          plVar14 = local_68;
          if ((char)local_60 == '\0') {
            if (local_68 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_60 = local_60 & 0xffffff00;
          }
          local_200 = 1;
          local_208 = plVar14;
          uVar16 = FUN_00ca65b0(local_154,&local_208);
          if (plVar14 != (int64_t *)0x0) {
            uVar16 = FUN_00d50b20();
          }
          if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            uVar16 = FUN_00d50b20();
          }
          if (plVar10 != (int64_t *)0x0) {
            uVar16 = FUN_00d50b20();
          }
          uVar16 = FUN_00c92190(uVar16,1);
          lVar13 = local_d0 + 1;
        } while (lVar13 < *(int *)(local_c8 + 0xc));
      }
      lVar13 = local_c8;
      uVar16 = FUN_00c92190(uVar16,1);
      if (0 < (int)local_88) {
        do {
          uVar16 = FUN_00c92190(uVar16,1);
          uVar8 = (int)local_88 - 1;
          local_88 = (uint64_t)uVar8;
        } while (uVar8 != 0);
      }
      uVar16 = FUN_00d8dcb0();
      FUN_00d8cbf0(uVar16,6);
      local_100 = local_68;
      local_f8 = 0;
      if ((char)local_60 == '\0') {
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = local_60 & 0xffffff00;
      }
      local_f8 = '\x01';
      FUN_00c8e5b0();
      if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_a0 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar13 != 0) {
        FUN_00d50b20();
      }
      bVar3 = false;
LAB_00ca7693:
      bVar2 = true;
      if ((local_79 != '\0') && (!bVar3)) {
        FUN_00d50b20();
      }
      goto LAB_00ca6d76;
    }
    if (lVar13 != 0) goto LAB_00ca6e0d;
    plVar10 = (int64_t *)*param_2;
    if ((g_026d0220 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
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
      ___cxa_guard_release();
    }
    if (plVar10 == (int64_t *)0x0) {
LAB_00ca76f1:
      plVar10 = &g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      plVar10 = param_2;
      if (cVar6 == '\0') goto LAB_00ca76f1;
    }
    lVar13 = *plVar10;
    local_78 = (int64_t *)CONCAT71(local_78._1_7_,(char)plVar10[1]);
    if (((char)plVar10[1] != '\0') && (lVar13 != 0)) {
      FUN_00d50b00();
LAB_00ca771d:
      local_d0 = lVar13;
      puVar9 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar9 = &g_025683c0;
      (*g_025683d8)();
      FUN_00c92170();
      plVar10 = (int64_t *)FUN_00e8fc40();
      FUN_00d4ff40();
      *plVar10 = (int64_t)&g_0256d868;
      plVar10[2] = 0;
      *(void*)((int64_t)plVar10 + 0x1c) = 0;
      *(void*)((int64_t)plVar10 + 0x24) = 0;
      *(void*)((int64_t)plVar10 + 0x2c) = 0;
      (*g_0256d880)();
      local_1a0 = '\0';
      local_1a8 = puVar9;
      uVar16 = FUN_00cccf90();
      if ((local_1a0 != '\0') && (local_1a8 != (void*)0x0)) {
        uVar16 = FUN_00d50b20();
      }
      uVar8 = *(uint *)(lVar13 + 0x18);
      local_88 = *(uint64_t *)(lVar13 + 0x10);
      uVar16 = FUN_00ccdee0(uVar16,0x3c);
      if ((local_250 != '\0') && (local_258 != 0)) {
        uVar16 = FUN_00d50b20();
      }
      if (0 < (int)uVar8) {
        uVar12 = 0;
        do {
          if ((((uVar12 != 0) && ((uVar12 & 3) == 0)) &&
              (FUN_00ccdee0(uVar16,0x20), local_240 != '\0')) && (local_248 != 0)) {
            FUN_00d50b20();
          }
          FUN_00e7df20(*(void*)(local_88 + uVar12),"%02x");
          uVar16 = (**(code **)(*plVar10 + 0x388))(2,&local_68);
          if ((local_230 != '\0') && (local_238 != 0)) {
            uVar16 = FUN_00d50b20();
          }
          uVar12 = uVar12 + 1;
        } while (uVar8 != uVar12);
      }
      FUN_00ccdee0(uVar16,0x3e);
      if ((local_220 != '\0') && (local_228 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar10 + 0x368))();
      if ((local_210 != '\0') && (local_218 != 0)) {
        FUN_00d50b20();
      }
      local_190 = '\0';
      local_198 = puVar9;
      FUN_00c8e5b0();
      if ((local_190 != '\0') && (local_198 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (puVar9 != (void*)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      bVar3 = true;
      if ((char)local_78 != '\0') {
        FUN_00d50b20();
      }
      goto LAB_00ca7693;
    }
    if (lVar13 != 0) goto LAB_00ca771d;
    plVar10 = (int64_t *)*param_2;
    FUN_00053ac0();
    if (plVar10 == (int64_t *)0x0) {
LAB_00ca79d4:
      plVar10 = &g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      plVar10 = param_2;
      if (cVar6 == '\0') goto LAB_00ca79d4;
    }
    lVar13 = plVar10[1];
    if (((char)lVar13 == '\0') || (*plVar10 == 0)) {
      if (*plVar10 != 0) goto LAB_00ca79fb;
      plVar10 = (int64_t *)*param_2;
      if ((g_0270c850 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
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
      if (plVar10 == (int64_t *)0x0) {
LAB_00ca7a90:
        param_2 = &g_02802688;
      }
      else {
        (**(code **)(*plVar10 + 0x360))();
        cVar6 = FUN_00e85ea0();
        if (cVar6 == '\0') goto LAB_00ca7a90;
      }
      plVar10 = (int64_t *)*param_2;
      lVar13 = param_2[1];
      if (((char)lVar13 == '\0') || (plVar10 == (int64_t *)0x0)) {
        if (plVar10 != (int64_t *)0x0) goto LAB_00ca7c02;
      }
      else {
        FUN_00d50b00();
LAB_00ca7c02:
        local_88 = CONCAT71(local_88._1_7_,(char)lVar13);
        if (g_028a72e0 == '\0') {
          (**(code **)(*plVar10 + 0x370))();
          plVar10 = local_b0;
          if (local_a8 == '\0') {
            if (local_b0 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_a8 = '\0';
          }
          local_1e0 = 1;
          uVar16 = FUN_00ca61c0();
          local_58 = local_98;
          local_60 = 1;
          local_68 = &g_024c5048;
          local_50 = 0;
          if (local_98 != (int64_t *)0x0) {
            uVar16 = FUN_00d50b00();
          }
          local_50 = '\x01';
          uVar16 = FUN_00d94d80(uVar16,&local_68);
          local_68 = &g_024c5048;
          if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            uVar16 = FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
            uVar16 = FUN_00d50b20();
          }
          if (plVar10 != (int64_t *)0x0) {
            uVar16 = FUN_00d50b20();
          }
          if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
            uVar16 = FUN_00d50b20();
          }
        }
        else {
          (**(code **)(*plVar10 + 0x368))();
          plVar10 = local_b0;
          if (local_a8 == '\0') {
            if (local_b0 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_a8 = '\0';
          }
          local_1f0 = 1;
          uVar16 = FUN_00ca61c0();
          local_58 = local_98;
          local_60 = 1;
          local_68 = &g_024c5048;
          local_50 = 0;
          if (local_98 != (int64_t *)0x0) {
            uVar16 = FUN_00d50b00();
          }
          local_50 = '\x01';
          uVar16 = FUN_00d94d80(uVar16,&local_68);
          local_68 = &g_024c5048;
          if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            uVar16 = FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
            uVar16 = FUN_00d50b20();
          }
          if (plVar10 != (int64_t *)0x0) {
            uVar16 = FUN_00d50b20();
          }
          if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
            uVar16 = FUN_00d50b20();
          }
        }
        FUN_00d8cbf0(uVar16,6);
        local_e0 = local_68;
        local_d8 = 0;
        if ((char)local_60 == '\0') {
          if (local_68 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = local_60 & 0xffffff00;
        }
        local_d8 = '\x01';
        cVar6 = (char)local_88;
        FUN_00c8e5b0();
        if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar6 != '\0') {
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_00d50b00();
LAB_00ca79fb:
      uVar18 = FUN_00dd6e50();
      uVar16 = extraout_XMM0_Da_00;
      switch(uVar18) {
      case 0x49:
        local_5c = FUN_00d45870();
        local_60 = 1;
        local_68 = &g_024cc6f0;
        uVar16 = FUN_00d94d80(&g_024cc6f0,&local_68);
        break;
      case 0x62:
        cVar6 = FUN_00d45ad0();
        if (cVar6 == '\0') {
          uVar16 = FUN_00d8dcb0();
        }
        else {
          uVar16 = FUN_00d8dcb0();
        }
        break;
      case 99:
        local_5c = FUN_00d45870();
        local_60 = 1;
        local_68 = &g_024cc6f0;
        uVar16 = FUN_00d94d80(&g_024cc6f0,&local_68);
        break;
      case 100:
        local_58 = (int64_t *)FUN_00d45bc0();
        local_60 = 1;
        local_68 = (int64_t *)&g_024de5e0;
        uVar16 = FUN_00d94d80((int)local_58,&local_68);
        break;
      case 0x66:
        local_5c = FUN_00d459e0();
        local_60 = 1;
        local_68 = &g_024d0b28;
        uVar16 = FUN_00d94d80(local_5c,&local_68);
        break;
      case 0x69:
        local_5c = FUN_00d45870();
        local_60 = 1;
        local_68 = &g_024cc6f0;
        uVar16 = FUN_00d94d80(&g_024cc6f0,&local_68);
        break;
      case 0x6c:
        local_58 = (int64_t *)FUN_00d45790();
        local_60 = 1;
        local_68 = (int64_t *)&g_024da828;
        uVar16 = FUN_00d94d80(&g_024da828,&local_68);
      }
      FUN_00d8cbf0(uVar16,6);
      local_f0 = local_68;
      local_e8 = 0;
      if ((char)local_60 == '\0') {
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = local_60 & 0xffffff00;
      }
      local_e8 = '\x01';
      FUN_00c8e5b0();
      if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((char)lVar13 != '\0') {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_00d50b00();
LAB_00ca672d:
    plVar10 = (int64_t *)FUN_00e8fc40();
    FUN_00d4ff40();
    *plVar10 = (int64_t)&g_025795a8;
    (*pcVar4)();
    local_1b8 = local_188;
    local_1b0 = '\0';
    FUN_00d8dbf0();
    if ((local_1b0 != '\0') && (local_1b8 != 0)) {
      FUN_00d50b20();
    }
    iVar7 = FUN_00d8c7a0();
    lVar13 = g_028a7290;
    if (iVar7 == 0) {
LAB_00ca6850:
      uVar16 = FUN_00ca61c0();
      local_58 = local_98;
      local_60 = 1;
      local_68 = &g_024c5048;
      local_50 = 0;
      if (local_98 != (int64_t *)0x0) {
        uVar16 = FUN_00d50b00();
      }
      local_50 = '\x01';
      uVar16 = FUN_00d94d80(uVar16,&local_68);
      local_68 = &g_024c5048;
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        uVar16 = FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
        uVar16 = FUN_00d50b20();
      }
    }
    else {
      local_170 = 0;
      if (g_028a7290 != 0) {
        FUN_00d50b00();
      }
      local_178 = lVar13;
      local_170 = '\x01';
      cVar6 = FUN_00d90dc0();
      if ((local_170 != '\0') && (local_178 != 0)) {
        FUN_00d50b20();
      }
      if (cVar6 == '\0') goto LAB_00ca6850;
      local_60 = 1;
      local_68 = &g_024c5048;
      local_50 = 0;
      uVar16 = FUN_00d50b00();
      local_50 = '\x01';
      local_58 = plVar10;
      uVar16 = FUN_00d94d80(uVar16,&local_68);
      local_68 = &g_024c5048;
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        uVar16 = FUN_00d50b20();
      }
    }
    FUN_00d8cbf0(uVar16,6);
    local_150 = local_68;
    local_148 = 0;
    if ((char)local_60 == '\0') {
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = local_60 & 0xffffff00;
    }
    local_148 = '\x01';
    FUN_00c8e5b0();
    if ((local_148 != '\0') && (local_150 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    bVar3 = false;
LAB_00ca697e:
    if ((local_7b != '\0') && (!bVar3)) {
      FUN_00d50b20();
    }
    if (!bVar3 && plVar10 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (local_70 == (void*)0x0) goto LAB_00ca69b7;
  }
  FUN_00d50b20();
LAB_00ca69b7:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                      ___stack_chk_fail();
}

