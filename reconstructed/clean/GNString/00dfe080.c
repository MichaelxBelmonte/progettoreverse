// Function: FUN_00dfe080
// Address: 00dfe080
// Size: 5281 bytes
// Class: GNString
// String references:
//   "GNString"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void* FUN_00dfe080(int64_t *param_1,int64_t *param_2)

{
  bool bVar1;
  bool bVar2;
  int64_t *plVar3;
  char cVar4;
  uint32_t uVar5;
  int iVar6;
  int64_t *plVar7;
  void*puVar8;
  int64_t *plVar9;
  int64_t lVar10;
  int iVar11;
  int64_t **pplVar12;
  int iVar13;
  int64_t *arg1;
  void*this_ptr;
  int64_t lVar14;
  uint64_t uVar15;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  int64_t local_1c8;
  uint8_t local_1c0;
  void*local_1b8;
  uint8_t local_1b0;
  int64_t *local_1a8;
  uint8_t local_1a0;
  int64_t local_198;
  uint8_t local_190;
  void*local_188;
  uint8_t local_180;
  void*local_178;
  uint8_t local_170;
  int64_t local_168;
  double local_160;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t *local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t *local_f8;
  char local_f0;
  int64_t *local_e0;
  char local_d8;
  int64_t local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int *local_90;
  int64_t *local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  void*local_68;
  int64_t *local_60;
  char local_58;
  void*local_50;
  uint64_t local_48;
  int local_40;
  int64_t *local_38;
  
  plVar7 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar7 = (int64_t)&g_025848c0;
  *(void*)((int64_t)plVar7 + 0x24) = 0;
  plVar7[5] = 0;
  *(void*)(plVar7 + 6) = 0;
  plVar7[7] = 0;
  *(void*)((int64_t)plVar7 + 0xc) = 0;
  *(void*)((int64_t)plVar7 + 0x14) = 0;
  *(void*)((int64_t)plVar7 + 0x19) = 0;
  FUN_00d500e0();
  *(void*)((int64_t)plVar7 + 0xc) = 0;
  lVar10 = *param_1;
  lVar14 = plVar7[5];
  local_38 = plVar7;
  if (lVar14 != lVar10) {
    if (lVar10 != 0) {
      FUN_00d50b00();
    }
    local_38[5] = lVar10;
    if (lVar14 != 0) {
      FUN_00d50b20();
    }
  }
  if (*param_2 == 0) {
    FUN_00dffe20();
    plVar9 = local_60;
    plVar7 = (int64_t *)*param_2;
    if (plVar7 == local_60) {
      if (((char)param_2[1] != '\0') || (local_60 == (int64_t *)0x0)) {
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00dfe1d9;
      }
      local_88 = param_2 + 1;
      if (local_58 == '\0') {
        FUN_00d50b00();
      }
    }
    else {
      local_88 = param_2 + 1;
      lVar10 = param_2[1];
      if (local_58 == '\0') {
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *param_2 = (int64_t)plVar9;
        if (((char)lVar10 != '\0') && (plVar7 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        *param_2 = (int64_t)local_60;
        if (((char)lVar10 != '\0') && (plVar7 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    *(void*)local_88 = 1;
  }
  else {
    *(void*)(local_38 + 6) = 1;
  }
LAB_00dfe1d9:
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &g_02572358;
  (*g_02572370)();
  plVar7 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar7 + 0x18))();
  local_68 = puVar8;
  if (*param_2 != 0) {
    local_1c0 = 0;
    local_1b0 = 0;
    local_1c8 = *param_2;
    local_1b8 = puVar8;
    FUN_00dfb1b0(&local_1b8,&local_1c8);
    if (plVar7 == local_60) {
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      plVar7 = local_60;
      if (local_58 == '\0') {
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
      }
      else {
        FUN_00d50b20();
      }
    }
  }
  local_90 = (int *)((int64_t)local_38 + 0xc);
  lVar10 = arg1[3];
  local_70 = plVar7;
  if ((lVar10 != 0) && (3 < *(int *)(lVar10 + 0x18))) {
    lVar14 = 0;
    local_168 = lVar10;
    do {
      iVar6 = *(int *)(*(int64_t *)(local_168 + 0x10) + lVar14 * 4);
      uVar15 = FUN_00d46530();
      local_b0 = local_80;
      local_a8 = 0;
      if (local_78 == '\0') {
        if (local_80 != 0) {
          uVar15 = FUN_00d50b00();
        }
      }
      else {
        local_78 = '\0';
      }
      local_a8 = '\x01';
      uVar15 = FUN_00e00c70(uVar15,&local_b0);
      plVar7 = local_60;
      if (local_58 == '\0') {
        if (((local_60 != (int64_t *)0x0) && (uVar15 = FUN_00d50b00(), local_58 != '\0')) &&
           (local_60 != (int64_t *)0x0)) {
          uVar15 = FUN_00d50b20();
        }
      }
      else {
        local_58 = '\0';
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        uVar15 = FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        uVar15 = FUN_00d50b20();
      }
      if (plVar7 != (int64_t *)0x0) {
        *local_90 = iVar6;
        lVar10 = g_02787870;
        local_88 = plVar7;
        if (g_02787870 != 0) {
          uVar15 = FUN_00d50b00();
        }
        local_158 = lVar10;
        local_150 = '\x01';
        FUN_000175c0(uVar15,&local_158);
        plVar7 = local_60;
        if ((g_026fd0c0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
        pplVar12 = (int64_t **)&g_02802688;
        if (plVar7 != (int64_t *)0x0) {
          (**(code **)(*plVar7 + 0x360))();
          cVar4 = FUN_00e85ea0();
          pplVar12 = &local_60;
          if (cVar4 == '\0') {
            pplVar12 = (int64_t **)&g_02802688;
          }
        }
        plVar3 = local_88;
        plVar9 = (int64_t *)local_38[2];
        plVar7 = *pplVar12;
        if (plVar9 != plVar7) {
          if (*(char *)(pplVar12 + 1) == '\0') {
            if (plVar7 == (int64_t *)0x0) {
              local_38[2] = 0;
            }
            else {
              FUN_00d50b00();
              plVar9 = (int64_t *)local_38[2];
              local_38[2] = (int64_t)*pplVar12;
            }
          }
          else {
            *(void*)(pplVar12 + 1) = 0;
            local_38[2] = (int64_t)plVar7;
          }
          if (plVar9 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_150 != '\0') && (local_158 != 0)) {
          FUN_00d50b20();
        }
        if (local_38[2] == 0) {
          *local_90 = 0;
          iVar6 = 3;
        }
        else {
          cVar4 = (**(code **)(*arg1 + 0x380))();
          lVar10 = g_02784aa8;
          if ((cVar4 == '\0') || ((char)arg1[10] == '\0')) {
            uVar15 = extraout_XMM0_Qa;
            if (g_02784aa8 != 0) {
              uVar15 = FUN_00d50b00();
            }
            local_148 = lVar10;
            local_140 = '\x01';
            uVar15 = FUN_000175c0(uVar15,&local_148);
            plVar7 = local_60;
            if (local_58 == '\0') {
              if (((local_60 != (int64_t *)0x0) && (uVar15 = FUN_00d50b00(), local_58 != '\0')) &&
                 (local_60 != (int64_t *)0x0)) {
                uVar15 = FUN_00d50b20();
              }
            }
            else {
              local_58 = '\0';
            }
            if ((local_140 != '\0') && (local_148 != 0)) {
              uVar15 = FUN_00d50b20();
            }
            if (plVar7 != (int64_t *)0x0) {
              local_1a8 = plVar3;
              local_1a0 = 0;
              FUN_00dfd400(uVar15,&local_1a8);
              plVar9 = local_60;
              plVar7 = (int64_t *)local_38[7];
              if (plVar7 != local_60) {
                if (local_60 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
                local_38[7] = (int64_t)plVar9;
                if (plVar7 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
              }
              if ((local_58 != '\0') && (plVar9 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              local_160 = (double)FUN_00c93980();
              iVar6 = 0;
              if (local_160 < 0.0) {
                *local_90 = 0;
                iVar6 = 3;
              }
              FUN_00d50b20();
              uVar15 = 0;
              if (local_160 < 0.0) goto LAB_00dfead0;
            }
            lVar10 = g_02784aa0;
            if (g_02784aa0 != 0) {
              uVar15 = FUN_00d50b00();
            }
            local_138 = lVar10;
            local_130 = '\x01';
            FUN_000175c0(uVar15,&local_138);
            plVar7 = local_60;
            if (local_58 == '\0') {
              if (((local_60 != (int64_t *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
                 (local_60 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_58 = '\0';
            }
            if ((local_130 != '\0') && (local_138 != 0)) {
              FUN_00d50b20();
            }
            plVar9 = local_38;
            if (plVar7 == (int64_t *)0x0) {
              iVar6 = 2;
            }
            else {
              *(void*)(local_38 + 4) = 1;
              local_128 = plVar7;
              local_120 = '\0';
              uVar5 = FUN_00c716c0();
              *(void*)((int64_t)plVar9 + 0x24) = uVar5;
              if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((char)local_38[6] == '\0') {
                FUN_00d50b00();
                lVar10 = local_38[2];
                if (lVar10 != 0) {
                  FUN_00d50b00();
                }
                FUN_00e19720(g_02394dd8,1);
                plVar7 = (int64_t *)local_38[5];
                plVar9 = plVar7;
                if (plVar7 != local_60) {
                  if (local_58 == '\0') {
                    if (local_60 == (int64_t *)0x0) {
                      plVar9 = (int64_t *)0x0;
                    }
                    else {
                      FUN_00d50b00();
                      plVar7 = (int64_t *)local_38[5];
                      plVar9 = local_60;
                    }
                  }
                  else {
                    local_58 = '\0';
                    plVar9 = local_60;
                  }
                  local_38[5] = (int64_t)plVar9;
                  if (plVar7 != (int64_t *)0x0) {
                    FUN_00d50b20();
                    plVar9 = local_60;
                  }
                }
                if ((local_58 != '\0') && (plVar9 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (lVar10 != 0) {
                  FUN_00d50b20();
                }
                if (arg1 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
                FUN_00e34260();
                FUN_00e19880();
                plVar7 = local_60;
                if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar7 == (int64_t *)0x0) goto LAB_00dfe989;
                FUN_00e19880();
                local_a0 = local_60;
                local_98 = 0;
                if (local_58 == '\0') {
                  if (local_60 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_58 = '\0';
                }
                local_98 = '\x01';
                FUN_00e63050();
                if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                *(void*)(local_38 + 6) = 1;
                FUN_00e19880();
                local_e0 = local_60;
                if (local_58 == '\0') {
                  if (local_60 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                  lVar10 = local_38[5];
                }
                else {
                  local_58 = '\0';
                  lVar10 = local_38[5];
                }
                local_d8 = '\x01';
                if (lVar10 != 0) {
                  local_d8 = '\x01';
                  FUN_00d50b00();
                }
                local_190 = 1;
                local_198 = lVar10;
                FUN_00dfe080(&local_198,&local_e0);
                if (lVar10 != 0) {
                  FUN_00d50b20();
                }
                if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                iVar6 = 1;
              }
              else {
                iVar6 = 2;
                if (*(int *)((int64_t)local_38 + 0x24) == 0) {
                  *local_90 = 0;
LAB_00dfe989:
                  iVar6 = 3;
                }
              }
              FUN_00d50b20();
            }
          }
          else {
            *(void*)((int64_t)local_38 + 0xc) = 0;
            iVar6 = 3;
            if (local_38[2] != 0) {
              local_38[2] = 0;
              FUN_00d50b20();
            }
          }
        }
LAB_00dfead0:
        FUN_00d50b20();
        if ((iVar6 != 0) && (iVar6 != 3)) {
          if (iVar6 != 2) {
            bVar1 = false;
            puVar8 = local_68;
            plVar7 = local_38;
            goto joined_r0x00dfeff8;
          }
          break;
        }
      }
      iVar6 = *(int *)(local_168 + 0x18);
      iVar11 = iVar6 + 3;
      if (-1 < iVar6) {
        iVar11 = iVar6;
      }
      lVar14 = lVar14 + 1;
    } while ((int)lVar14 < iVar11 >> 2);
  }
  iVar6 = *(int *)(arg1[3] + 0x18);
  iVar11 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar11 = iVar6;
  }
  iVar13 = -1;
  if (3 < iVar6) {
    lVar10 = 0;
    do {
      if (*(int *)(*(int64_t *)(arg1[3] + 0x10) + lVar10 * 4) == *local_90) {
        iVar13 = (int)lVar10;
        if (((int)arg1[7] != -1) &&
           (bVar1 = true, puVar8 = local_68, plVar7 = local_38, iVar13 <= (int)arg1[7]))
        goto LAB_00dff222;
        bVar2 = true;
        bVar1 = true;
        plVar7 = (int64_t *)arg1[6];
        goto joined_r0x00dfed88;
      }
      lVar10 = lVar10 + 1;
    } while (iVar11 >> 2 != (int)lVar10);
  }
  bVar2 = false;
  bVar1 = false;
  plVar7 = (int64_t *)arg1[6];
joined_r0x00dfed88:
  if (plVar7 != (int64_t *)0x0) {
    local_60 = (int64_t *)0x0;
    iVar6 = (**(code **)(*plVar7 + 0x18))();
    bVar1 = bVar2;
    if (iVar6 != 0) {
      plVar7 = (int64_t *)FUN_00e8fc40();
      FUN_00d4ff40();
      *plVar7 = (int64_t)&g_025848c0;
      *(void*)((int64_t)plVar7 + 0x24) = 0;
      plVar7[5] = 0;
      *(void*)(plVar7 + 6) = 0;
      plVar7[7] = 0;
      *(void*)((int64_t)plVar7 + 0xc) = 0;
      *(void*)((int64_t)plVar7 + 0x14) = 0;
      *(void*)((int64_t)plVar7 + 0x19) = 0;
      FUN_00d500e0();
      *(int *)((int64_t)plVar7 + 0xc) = iVar6;
      plVar7[3] = (int64_t)local_60;
      iVar6 = *(int *)(arg1[3] + 0x18);
      iVar11 = iVar6 + 3;
      if (-1 < iVar6) {
        iVar11 = iVar6;
      }
      if (3 < iVar6) {
        lVar10 = 0;
        do {
          if (*(int *)(*(int64_t *)(arg1[3] + 0x10) + lVar10 * 4) ==
              *(int *)((int64_t)plVar7 + 0xc)) {
            if ((iVar13 == -1) || ((int)lVar10 < iVar13)) {
              bVar1 = false;
              puVar8 = local_68;
              goto LAB_00dff222;
            }
            FUN_00d50b20();
            goto LAB_00dfecc9;
          }
          lVar10 = lVar10 + 1;
        } while (iVar11 >> 2 != (int)lVar10);
      }
      FUN_00d50b20();
    }
  }
LAB_00dfecc9:
  lVar10 = g_02787870;
  puVar8 = local_68;
  if (!bVar1) {
    if (g_02787870 != 0) {
      FUN_00d50b00();
    }
    local_118 = lVar10;
    local_110 = '\x01';
    pplVar12 = &local_60;
    FUN_00e61ae0();
    plVar7 = local_60;
    if ((g_026fd0c0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
    if (plVar7 == (int64_t *)0x0) {
LAB_00dfed4a:
      pplVar12 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar7 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_00dfed4a;
    }
    plVar7 = *pplVar12;
    if (*(char *)(pplVar12 + 1) == '\0') {
      if (plVar7 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar12 + 1) = 0;
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_110 != '\0') && (local_118 != 0)) {
      FUN_00d50b20();
    }
    if (plVar7 != (int64_t *)0x0) {
      local_58 = '\0';
      local_60 = plVar7;
      cVar4 = FUN_00d23d70();
      uVar15 = extraout_XMM0_Qa_00;
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        uVar15 = FUN_00d50b20();
      }
      if (cVar4 == '\0') {
        local_58 = '\0';
        local_60 = plVar7;
        FUN_00d23370(uVar15,0);
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
    if ((char)local_38[6] == '\0') {
      lVar10 = arg1[3];
      puVar8 = local_68;
      if (lVar10 != 0) {
        if (3 < *(int *)(lVar10 + 0x18)) {
          lVar14 = 0;
          do {
            uVar5 = *(void*)(*(int64_t *)(lVar10 + 0x10) + lVar14 * 4);
            cVar4 = (**(code **)(*arg1 + 0x380))();
            if (cVar4 == '\0') {
              local_188 = local_68;
              local_180 = 0;
              FUN_00dfd950(uVar5,&local_188);
              plVar7 = local_60;
              if (local_58 == '\0') {
                if (local_60 != (int64_t *)0x0) {
                  FUN_00d50b00();
                  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_00dff49b;
                }
              }
              else if (local_60 != (int64_t *)0x0) goto LAB_00dff49b;
            }
            iVar6 = *(int *)(lVar10 + 0x18);
            iVar11 = iVar6 + 3;
            if (-1 < iVar6) {
              iVar11 = iVar6;
            }
            lVar14 = lVar14 + 1;
          } while ((int)lVar14 < iVar11 >> 2);
        }
        lVar10 = arg1[3];
        puVar8 = local_68;
        if (lVar10 != 0) {
          if (3 < *(int *)(lVar10 + 0x18)) {
            lVar14 = 0;
LAB_00dfef6c:
            uVar5 = *(void*)(*(int64_t *)(lVar10 + 0x10) + lVar14 * 4);
            cVar4 = (**(code **)(*arg1 + 0x380))();
            if (cVar4 == '\0') {
LAB_00dfef50:
              iVar6 = *(int *)(lVar10 + 0x18);
              iVar11 = iVar6 + 3;
              if (-1 < iVar6) {
                iVar11 = iVar6;
              }
              lVar14 = lVar14 + 1;
              if (iVar11 >> 2 <= (int)lVar14) goto LAB_00dfee3d;
              goto LAB_00dfef6c;
            }
            local_178 = local_68;
            local_170 = 0;
            FUN_00dfd950(uVar5,&local_178);
            plVar7 = local_60;
            if (local_58 != '\0') {
              if (local_60 != (int64_t *)0x0) goto LAB_00dff49b;
              goto LAB_00dfef50;
            }
            if (local_60 == (int64_t *)0x0) goto LAB_00dfef50;
            FUN_00d50b00();
            if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_00dff49b:
            *(void*)(plVar7 + 6) = 1;
            bVar1 = false;
            puVar8 = local_68;
            goto LAB_00dff222;
          }
          goto LAB_00dfee3d;
        }
      }
    }
    else {
LAB_00dfee3d:
      plVar7 = (int64_t *)arg1[3];
      puVar8 = local_68;
      if (plVar7 != (int64_t *)0x0) {
        iVar6 = -1;
        local_88 = plVar7;
        do {
          iVar6 = iVar6 + 1;
          iVar11 = (int)plVar7[3];
          iVar13 = iVar11 + 3;
          if (-1 < iVar11) {
            iVar13 = iVar11;
          }
          if (iVar13 >> 2 <= iVar6) break;
          if (puVar8 != (void*)0x0) {
            iVar11 = *(int *)(plVar7[2] + (int64_t)iVar6 * 4);
            local_58 = '\0';
            local_60 = (int64_t *)0x0;
            local_48 = 0xffffffff;
            local_40 = 0;
            local_48._4_4_ = 0;
            local_50 = puVar8;
LAB_00dff0a3:
            if (local_48._4_4_ != 0) {
              if (local_48._4_4_ < 1) {
                iVar13 = -local_48._4_4_;
              }
              else {
                iVar13 = (int)local_48 - local_48._4_4_;
                local_48 = CONCAT44(local_48._4_4_,iVar13);
                FUN_00d23690();
                local_40 = local_40 + local_48._4_4_;
                iVar13 = 0;
              }
              local_48 = CONCAT44(iVar13,(int)local_48);
            }
            lVar10 = (int64_t)(int)local_48;
            iVar13 = (int)local_48 + 1;
            local_48 = CONCAT44(local_48._4_4_,iVar13);
            if (*(int *)((int64_t)local_50 + 0xc) <= iVar13) goto LAB_00dff02b;
            local_60 = *(int64_t **)(local_50[2] + 8 + lVar10 * 8);
            cVar4 = (**(code **)(*arg1 + 0x380))();
            if (cVar4 != '\0') {
LAB_00dff0a0:
              goto LAB_00dff0a3;
            }
            local_108 = local_60;
            local_100 = '\0';
            FUN_00d25fa0();
            lVar10 = local_80;
            if (local_78 == '\0') {
              if (((local_80 != 0) && (FUN_00d50b00(), local_78 != '\0')) && (local_80 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_78 = '\0';
            }
            if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (lVar10 == 0) goto LAB_00dff0a0;
            iVar13 = FUN_00d28390();
            if (iVar13 != iVar11) {
              FUN_00d50b20();
              goto LAB_00dff0a0;
            }
            plVar7 = (int64_t *)local_38[2];
            if (plVar7 != local_60) {
              if (local_58 == '\0') {
                if (local_60 == (int64_t *)0x0) {
                  local_38[2] = 0;
                }
                else {
                  FUN_00d50b00();
                  plVar7 = (int64_t *)local_38[2];
                  local_38[2] = (int64_t)local_60;
                }
              }
              else {
                local_58 = '\0';
                local_38[2] = (int64_t)local_60;
              }
              if (plVar7 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
            }
            FUN_00d50b20();
LAB_00dff02b:
            FUN_00018280();
            plVar7 = local_88;
            puVar8 = local_68;
          }
        } while (local_38[2] == 0);
      }
    }
    if ((local_38[2] == 0) && (plVar7 = (int64_t *)arg1[3], plVar7 != (int64_t *)0x0)) {
      iVar6 = -1;
      local_88 = plVar7;
      do {
        iVar6 = iVar6 + 1;
        iVar11 = (int)plVar7[3];
        iVar13 = iVar11 + 3;
        if (-1 < iVar11) {
          iVar13 = iVar11;
        }
        if (iVar13 >> 2 <= iVar6) break;
        if (puVar8 != (void*)0x0) {
          iVar11 = *(int *)(plVar7[2] + (int64_t)iVar6 * 4);
          local_58 = '\0';
          local_60 = (int64_t *)0x0;
          local_48 = 0xffffffff;
          local_40 = 0;
          local_48._4_4_ = 0;
          local_50 = puVar8;
LAB_00dff313:
          if (local_48._4_4_ != 0) {
            if (local_48._4_4_ < 1) {
              iVar13 = -local_48._4_4_;
            }
            else {
              iVar13 = (int)local_48 - local_48._4_4_;
              local_48 = CONCAT44(local_48._4_4_,iVar13);
              FUN_00d23690();
              local_40 = local_40 + local_48._4_4_;
              iVar13 = 0;
            }
            local_48 = CONCAT44(iVar13,(int)local_48);
          }
          lVar10 = (int64_t)(int)local_48;
          iVar13 = (int)local_48 + 1;
          local_48 = CONCAT44(local_48._4_4_,iVar13);
          if (*(int *)((int64_t)local_50 + 0xc) <= iVar13) goto LAB_00dff29c;
          local_60 = *(int64_t **)(local_50[2] + 8 + lVar10 * 8);
          cVar4 = (**(code **)(*arg1 + 0x380))();
          if (cVar4 == '\0') {
LAB_00dff310:
            goto LAB_00dff313;
          }
          local_f8 = local_60;
          local_f0 = '\0';
          FUN_00d25fa0();
          lVar10 = local_80;
          if (local_78 == '\0') {
            if (((local_80 != 0) && (FUN_00d50b00(), local_78 != '\0')) && (local_80 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_78 = '\0';
          }
          if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (lVar10 == 0) goto LAB_00dff310;
          iVar13 = FUN_00d28390();
          if (iVar13 != iVar11) {
            FUN_00d50b20();
            goto LAB_00dff310;
          }
          plVar7 = (int64_t *)local_38[2];
          if (plVar7 != local_60) {
            if (local_58 == '\0') {
              if (local_60 == (int64_t *)0x0) {
                plVar9 = (int64_t *)0x0;
              }
              else {
                FUN_00d50b00();
                plVar7 = (int64_t *)local_38[2];
                plVar9 = local_60;
              }
            }
            else {
              local_58 = '\0';
              plVar9 = local_60;
            }
            local_38[2] = (int64_t)plVar9;
            if (plVar7 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
LAB_00dff29c:
          FUN_00018280();
          plVar7 = local_88;
          puVar8 = local_68;
        }
      } while (local_38[2] == 0);
    }
    *local_90 = 0;
  }
  bVar1 = true;
  plVar7 = local_38;
LAB_00dff222:
  *this_ptr = plVar7;
  *(void*)(this_ptr + 1) = 1;
  plVar7 = local_38;
joined_r0x00dfeff8:
  local_38 = plVar7;
  if (local_70 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (puVar8 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (!bVar1 && plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

