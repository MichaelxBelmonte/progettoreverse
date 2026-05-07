// Function: FUN_00d1c6d0
// Address: 00d1c6d0
// Size: 4427 bytes
// Class: GNList
// String references:
//   "GNList"
//   "GNString"
//   "GNDictionary"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void* FUN_00d1c6d0(char param_1)

{
  int64_t *plVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  void*puVar5;
  int64_t **pplVar6;
  int64_t **pplVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int iVar10;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar11;
  int iVar12;
  int64_t **pplVar13;
  bool bVar14;
  uint32_t uVar15;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Da_04;
  uint32_t extraout_XMM0_Da_05;
  int64_t *local_170;
  char local_168;
  int64_t *local_160;
  char local_158;
  int64_t *local_150;
  char local_148;
  int64_t *local_140;
  char local_138;
  int64_t *local_130;
  char local_128;
  int64_t *local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t **local_d0;
  int64_t local_c8;
  int64_t *local_b0;
  int64_t *local_a8;
  int64_t *local_90;
  int64_t *local_88;
  int64_t *local_80;
  uint64_t local_78;
  int local_70;
  int64_t *local_68;
  char local_60;
  char local_58 [8];
  char local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  local_38[0] = '\0';
  FUN_00d8b910();
  FUN_00c9fe20();
  plVar9 = local_90;
  local_68 = (int64_t *)CONCAT71(local_68._1_7_,(char)local_88);
  pplVar6 = &local_88;
  if ((char)local_88 == '\0') {
    pplVar6 = &local_68;
  }
  *(void*)pplVar6 = 0;
  if (((char)local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_58[0] = (char)local_68 != '\0';
  pplVar6 = (int64_t **)local_58;
  if ((bool)local_58[0]) {
    pplVar6 = &local_68;
  }
  *(void*)pplVar6 = 0;
  if (((char)local_68 != '\0') && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_a8 = plVar9;
  iVar10 = *(int *)((int64_t)plVar9 + 0xc);
  iVar12 = *(int *)(arg1 + 0x78);
  if (iVar10 <= iVar12) {
    *(void*)(arg1 + 0x78) = 0;
    iVar12 = 0;
  }
  pcVar2 = g_02572370;
  pplVar6 = (int64_t **)(this_ptr + 1);
  if (param_1 == '\0') {
    do {
      lVar11 = (int64_t)iVar12;
      local_50 = '\0';
      FUN_00d8b910();
      iVar4 = FUN_00e7ddf0();
      if (iVar4 == 0) goto LAB_00d1c8d8;
      iVar12 = iVar12 + 1;
      if (iVar10 <= iVar12) {
        iVar12 = 0;
      }
    } while (iVar12 != *(int *)(arg1 + 0x78));
  }
  else {
    local_d0 = &local_88;
    do {
      lVar11 = (int64_t)iVar12;
      local_c8 = *(int64_t *)(local_a8[2] + lVar11 * 8);
      local_50 = '\0';
      FUN_00d8b910();
      iVar4 = FUN_00e7ddf0();
      if (iVar4 == 0) goto LAB_00d1c8d8;
      iVar4 = FUN_00e7ddf0();
      if (iVar4 == 0) {
        uVar15 = FUN_00ca1380();
        plVar9 = local_90;
        local_68 = (int64_t *)CONCAT71(local_68._1_7_,(char)local_88);
        pplVar7 = &local_88;
        if ((char)local_88 == '\0') {
          pplVar7 = &local_68;
        }
        *(void*)pplVar7 = 0;
        if (((char)local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
          uVar15 = FUN_00d50b20();
        }
        plVar9 = *(int64_t **)(plVar9[2] + lVar11 * 8);
        local_b0 = plVar9;
        local_40[0] = '\0';
        if ((char)local_68 != '\0') {
          uVar15 = FUN_00d50b20();
        }
        if (*(char *)(arg1 + 0x7c) != '\0') {
          if ((g_026fdd40 == '\0') &&
             (iVar10 = ___cxa_guard_acquire(), uVar15 = extraout_XMM0_Da_04, iVar10 != 0)) {
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
            uVar15 = ___cxa_guard_release();
          }
          pplVar7 = &g_02802688;
          if (plVar9 != (int64_t *)0x0) {
            (**(code **)(*plVar9 + 0x360))();
            cVar3 = FUN_00e85ea0();
            uVar15 = extraout_XMM0_Da;
            if (cVar3 != '\0') {
              if ((g_026fd0c0 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
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
              cVar3 = FUN_00e8db60();
              uVar15 = extraout_XMM0_Da_00;
              if (cVar3 == '\0') {
                pplVar7 = &g_02802688;
              }
              else {
                pplVar7 = &local_b0;
              }
            }
          }
          plVar8 = local_b0;
          plVar9 = g_0277c878;
          pplVar13 = &local_88;
          if (*pplVar7 == (int64_t *)0x0) {
            if ((g_027048b0 == '\0') &&
               (iVar10 = ___cxa_guard_acquire(), uVar15 = extraout_XMM0_Da_05, iVar10 != 0)) {
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
              uVar15 = ___cxa_guard_release();
            }
            plVar9 = g_02802688;
            if (plVar8 != (int64_t *)0x0) {
              (**(code **)(*plVar8 + 0x360))();
              cVar3 = FUN_00e85ea0();
              uVar15 = extraout_XMM0_Da_02;
              plVar9 = g_02802688;
              if (cVar3 != '\0') {
                plVar9 = local_b0;
              }
            }
            if (plVar9 != (int64_t *)0x0) {
              puVar5 = (void*)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar5 = &g_02572358;
              (*pcVar2)();
              local_48[0] = '\x01';
              local_88._0_1_ = '\0';
              local_90 = (int64_t *)0x0;
              local_80 = plVar9;
              local_78 = 0xffffffff;
              local_70 = 0;
              local_78._4_4_ = 0;
              local_d0 = (int64_t **)&g_026fdd40;
              goto LAB_00d1cc7b;
            }
          }
          else {
            if (g_0277c878 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_90 = plVar9;
            local_88._0_1_ = '\0';
            cVar3 = FUN_00c9ff50();
            uVar15 = extraout_XMM0_Da_01;
            if (((char)local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
              uVar15 = FUN_00d50b20();
            }
            if (plVar9 != (int64_t *)0x0) {
              uVar15 = FUN_00d50b20();
            }
            plVar9 = g_0277c878;
            if (cVar3 != '\0') {
              if (g_0277c878 != (int64_t *)0x0) {
                uVar15 = FUN_00d50b00();
              }
              local_170 = plVar9;
              local_168 = '\x01';
              uVar15 = FUN_000175c0(uVar15,&local_170);
              if (local_90 == local_b0) {
                if (((local_40[0] == '\0') && (local_90 != (int64_t *)0x0)) &&
                   ((char)local_88 != '\0')) goto LAB_00d1d1eb;
              }
              else {
                bVar14 = local_b0 != (int64_t *)0x0;
                local_b0 = local_90;
                if ((char)local_88 == '\0') {
                  pplVar13 = (int64_t **)local_40;
                  if (bVar14 && local_40[0] != '\0') {
                    uVar15 = FUN_00d50b20();
                  }
                }
                else {
                  if (bVar14 && local_40[0] != '\0') {
                    uVar15 = FUN_00d50b20();
                  }
LAB_00d1d1eb:
                  local_40[0] = '\x01';
                }
                *(void*)pplVar13 = 0;
              }
              if (((char)local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
                uVar15 = FUN_00d50b20();
              }
              if ((local_168 != '\0') && (local_170 != (int64_t *)0x0)) {
                uVar15 = FUN_00d50b20();
              }
            }
          }
        }
        plVar1 = local_b0;
        local_130 = local_b0;
        local_128 = '\0';
        FUN_019a54a0(uVar15,&local_130);
        if (local_90 == (int64_t *)0x0) {
          plVar8 = (int64_t *)0x0;
        }
        else {
          if ((char)local_88 == '\0') {
            pplVar7 = (int64_t **)local_38;
          }
          else {
            local_38[0] = '\x01';
            pplVar7 = &local_88;
          }
          *(void*)pplVar7 = 0;
          plVar8 = local_90;
        }
        if (((char)local_88 != '\0') && (plVar8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_128 != '\0') && (local_130 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar8 == (int64_t *)0x0) {
          if ((*(int64_t *)(arg1 + 0x60) == 0) || (*(int64_t *)(arg1 + 0x68) == 0)) {
            plVar8 = (int64_t *)0x0;
          }
          else {
            uVar15 = FUN_00ca1380();
            plVar9 = local_90;
            local_e0._0_1_ = (char)local_88;
            pplVar7 = &local_e0;
            if ((char)local_88 != '\0') {
              pplVar7 = &local_88;
            }
            *(void*)pplVar7 = 0;
            if (((char)local_88 != '\0') && (plVar9 != (int64_t *)0x0)) {
              uVar15 = FUN_00d50b20();
            }
            lVar11 = *(int64_t *)(plVar9[2] + lVar11 * 8);
            local_108 = 0;
            if (lVar11 != 0) {
              uVar15 = FUN_00d50b00();
            }
            local_108 = '\x01';
            local_110 = lVar11;
            uVar15 = FUN_00c9fe40(uVar15,&local_110);
            plVar8 = local_90;
            local_68 = (int64_t *)CONCAT71(local_68._1_7_,(char)local_88);
            pplVar7 = &local_88;
            if ((char)local_88 == '\0') {
              pplVar7 = &local_68;
            }
            *(void*)pplVar7 = 0;
            if (((char)local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
              uVar15 = FUN_00d50b20();
            }
            if (plVar8 == (int64_t *)0x0) {
              plVar8 = (int64_t *)0x0;
            }
            else {
              if ((char)local_68 == '\0') {
                pplVar7 = (int64_t **)local_38;
              }
              else {
                local_38[0] = '\x01';
                pplVar7 = &local_68;
              }
              *(void*)pplVar7 = 0;
              if ((char)local_68 != '\0') {
                uVar15 = FUN_00d50b20();
              }
            }
            if ((local_108 != '\0') && (local_110 != 0)) {
              uVar15 = FUN_00d50b20();
            }
            if ((char)local_e0 != '\0') {
              uVar15 = FUN_00d50b20();
            }
            if (plVar8 == (int64_t *)0x0) {
              plVar8 = (int64_t *)0x0;
            }
            else {
              local_118 = '\0';
              local_120 = plVar8;
              (**(code **)(**(int64_t **)(arg1 + 0x68) + 0x420))(uVar15,&local_120);
              plVar9 = local_90;
              if (local_90 == plVar8) {
                plVar9 = plVar8;
                if ((local_38[0] == '\0') && ((char)local_88 != '\0')) {
                  local_38[0] = '\x01';
                  goto LAB_00d1d59f;
                }
              }
              else {
                if ((char)local_88 == '\0') {
                  local_d0 = (int64_t **)local_38;
                  if (local_38[0] != '\0') {
                    FUN_00d50b20();
                  }
                }
                else {
                  if (local_38[0] != '\0') {
                    FUN_00d50b20();
                  }
                  local_38[0] = '\x01';
                }
LAB_00d1d59f:
                *(void*)local_d0 = 0;
                plVar8 = plVar9;
                plVar9 = local_90;
              }
              if (((char)local_88 != '\0') && (plVar9 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_118 != '\0') && (local_120 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
        }
        *(int *)(arg1 + 0x78) = iVar12 + 1;
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = plVar8;
        lVar11 = local_c8;
        plVar9 = local_a8;
        if (local_38[0] == '\0') {
          *(void*)pplVar6 = 0;
          local_38[0] = '\0';
        }
        else {
          *(void*)pplVar6 = 1;
          local_38[0] = '\0';
        }
        goto joined_r0x00d1d47f;
      }
      iVar12 = iVar12 + 1;
      if (iVar10 <= iVar12) {
        iVar12 = 0;
      }
    } while (iVar12 != *(int *)(arg1 + 0x78));
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  if (local_38[0] != '\0') {
    *(void*)pplVar6 = 1;
    pplVar6 = (int64_t **)local_38;
  }
  *(void*)pplVar6 = 0;
  plVar9 = local_a8;
LAB_00d1ca56:
  plVar8 = (int64_t *)0x0;
LAB_00d1ca59:
  if ((local_58[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (plVar8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
LAB_00d1c8d8:
  *(int *)(arg1 + 0x78) = iVar12 + 1;
  FUN_00ca1380();
  plVar8 = local_90;
  plVar9 = local_a8;
  pplVar6 = &local_88;
  if ((char)local_88 == '\0') {
    pplVar6 = &local_68;
  }
  local_68 = (int64_t *)CONCAT71(local_68._1_7_,(char)local_88);
  *(void*)pplVar6 = 0;
  if (((char)local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  *this_ptr = *(void*)(plVar8[2] + lVar11 * 8);
  *(void*)(this_ptr + 1) = 0;
  if ((char)local_68 != '\0') {
    FUN_00d50b20();
  }
  goto LAB_00d1ca56;
LAB_00d1cc7b:
  if (local_78._4_4_ != 0) {
    if (local_78._4_4_ < 1) {
      iVar10 = -local_78._4_4_;
    }
    else {
      iVar10 = (int)local_78 - local_78._4_4_;
      local_78 = CONCAT44(local_78._4_4_,iVar10);
      FUN_00d23690();
      local_70 = local_70 + local_78._4_4_;
      iVar10 = 0;
    }
    local_78 = CONCAT44(iVar10,(int)local_78);
  }
  lVar11 = (int64_t)(int)local_78;
  iVar10 = (int)local_78 + 1;
  local_78 = CONCAT44(local_78._4_4_,iVar10);
  if (*(int *)((int64_t)local_80 + 0xc) <= iVar10) goto LAB_00d1d18d;
  plVar9 = *(int64_t **)(local_80[2] + 8 + lVar11 * 8);
  local_90 = plVar9;
  if ((g_026fdd40 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
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
  pplVar7 = &g_02802688;
  if (plVar9 != (int64_t *)0x0) {
    (**(code **)(*plVar9 + 0x360))();
    cVar3 = FUN_00e85ea0();
    pplVar7 = &g_02802688;
    if (cVar3 != '\0') {
      if ((g_026fd0c0 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
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
      cVar3 = FUN_00e8db60();
      pplVar7 = &local_90;
      if (cVar3 == '\0') {
        pplVar7 = &g_02802688;
      }
    }
  }
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (*pplVar7 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_00d1cd61;
    }
LAB_00d1ce40:
    local_150 = local_90;
    local_148 = '\0';
    FUN_019a54a0(pplVar7,&local_150);
    plVar9 = local_68;
    if (local_60 == '\0') {
      if (((local_68 != (int64_t *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
         (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60 = '\0';
    }
    if ((local_148 != '\0') && (local_150 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 != (int64_t *)0x0) {
      local_140 = plVar9;
      local_138 = '\0';
      FUN_00d21140();
      if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
    if (*pplVar7 == (int64_t *)0x0) goto LAB_00d1ce40;
LAB_00d1cd61:
    plVar9 = g_0277c878;
    if (g_0277c878 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_68 = plVar9;
    local_60 = '\0';
    cVar3 = FUN_00c9ff50();
    uVar15 = extraout_XMM0_Da_03;
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      uVar15 = FUN_00d50b20();
    }
    if (plVar9 != (int64_t *)0x0) {
      uVar15 = FUN_00d50b20();
    }
    plVar9 = g_0277c878;
    if (cVar3 != '\0') {
      if (g_0277c878 != (int64_t *)0x0) {
        uVar15 = FUN_00d50b00();
      }
      local_160 = plVar9;
      local_158 = '\x01';
      uVar15 = FUN_000175c0(uVar15,&local_160);
      local_e8 = 0;
      local_f0 = CONCAT71(local_e0._1_7_,(char)local_e0);
      if (local_d8 == '\0') {
        if (local_f0 != 0) {
          uVar15 = FUN_00d50b00();
        }
      }
      else {
        local_d8 = '\0';
      }
      local_e8 = '\x01';
      FUN_019a54a0(uVar15,&local_f0);
      plVar9 = local_68;
      local_f8 = 0;
      if (local_60 == '\0') {
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      local_f8 = '\x01';
      local_100 = plVar9;
      FUN_00d21140();
      if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (CONCAT71(local_e0._1_7_,(char)local_e0) != 0)) {
        FUN_00d50b20();
      }
      if ((local_158 != '\0') && (local_160 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  goto LAB_00d1cc7b;
LAB_00d1d18d:
  FUN_00083b20();
  plVar9 = local_a8;
  lVar11 = local_c8;
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = puVar5;
  if (local_48[0] != '\0') {
    *(void*)pplVar6 = 1;
    pplVar6 = (int64_t **)local_48;
  }
  *(void*)pplVar6 = 0;
  if ((local_48[0] != '\0') && (puVar5 != (void*)0x0)) {
    FUN_00d50b20();
  }
  plVar8 = (int64_t *)0x0;
  plVar1 = local_b0;
joined_r0x00d1d47f:
  if ((local_40[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (lVar11 != 0)) {
    FUN_00d50b20();
  }
  goto LAB_00d1ca59;
}

