// Function: FUN_002d3da0
// Address: 002d3da0
// Size: 3677 bytes
// Class: GNFilePath
// String references:
//   "GNFilePath"

uint64_t FUN_002d3da0(void* param_1)

{
  bool bVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  int64_t **pplVar6;
  void *pvVar7;
  int64_t lVar8;
  void* pVar9;
  uint64_t uVar10;
  int64_t *plVar11;
  int iVar12;
  int64_t this_ptr;
  int64_t *plVar13;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t uVar14;
  int64_t local_1f0;
  int64_t local_1e8;
  int64_t local_1e0;
  int64_t local_1d8;
  char local_1d0;
  int64_t local_1c8;
  char local_1c0;
  int64_t *local_1b8;
  char local_1b0;
  int64_t *local_1a8;
  char local_1a0;
  int64_t *local_198;
  char local_190;
  int64_t local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t *local_168;
  char local_160;
  int64_t *local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t *local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t *local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  uint64_t local_98;
  int local_90;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  uint64_t local_48;
  int local_40;
  
  lVar8 = g_026fcec0;
  if (*(int64_t *)(this_ptr + 0xf0) != 0) {
    pVar9 = param_1;
    if (g_026fcec0 != 0) {
      FUN_00d50b00();
    }
    local_1c8 = lVar8;
    local_1c0 = '\x01';
    FUN_01cac990();
    plVar13 = local_b0;
    if (local_a8 == '\0') {
      if (((local_b0 != (int64_t *)0x0) && (FUN_00d50b00(), local_a8 != '\0')) &&
         (local_b0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_a8 = '\0';
    }
    if ((local_1c0 != '\0') && (local_1c8 != 0)) {
      FUN_00d50b20();
    }
    if (plVar13 != (int64_t *)0x0) {
      local_e0 = plVar13;
      if (*(int *)((int64_t)plVar13 + 0xc) == 1) {
        FUN_00d23310();
        plVar13 = local_b0;
        local_58 = local_a8 != '\0';
        local_60 = local_b0;
        if ((bool)local_58) {
          local_a8 = '\0';
        }
        if ((g_026fde10 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
          g_026d1818 = FUN_00d4fe50();
          g_026d1800 = "GNFilePath";
          g_026d1808 = 0x40;
          pVar9 = 0x41050;
          g_026d1810 = FUN_00041050;
          g_026d1820 = 0;
          ram_00000000026d1828 = 0;
          g_026d1830 = 0;
          ram_00000000026d1838 = 0;
          g_026d1840 = 0;
          ram_00000000026d1848 = 0;
          g_026d1850 = 0;
          ram_00000000026d1858 = 0;
          g_026d1860 = 0;
          ram_00000000026d1868 = 0;
          g_026d1870 = 0;
          ram_00000000026d1878 = 0;
          g_026d1880 = 0;
          ram_00000000026d1888 = 0;
          g_026d1890 = 0;
          ram_00000000026d1898 = 0;
          g_026d18a0 = 0;
          ram_00000000026d18a8 = 0;
          g_026d18b0 = 0;
          ram_00000000026d18b8 = 0;
          g_026d18c0 = 0;
          ___cxa_guard_release();
        }
        if (plVar13 == (int64_t *)0x0) {
LAB_002d43c1:
          pplVar6 = &g_02802688;
          plVar13 = g_02802688;
          if (g_02802690 != '\0') goto LAB_002d43d1;
LAB_002d43e4:
          if (plVar13 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          (**(code **)(*plVar13 + 0x360))();
          cVar4 = FUN_00e85ea0();
          if (cVar4 == '\0') goto LAB_002d43c1;
          pplVar6 = &local_60;
          plVar13 = local_60;
          if (local_58 == '\0') goto LAB_002d43e4;
LAB_002d43d1:
          *(void*)(pplVar6 + 1) = 0;
        }
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        cVar4 = (**(code **)(*plVar13 + 0x3a0))();
        if (cVar4 == '\0') {
          lVar8 = *(int64_t *)(this_ptr + 0xe0);
          if (lVar8 != 0) {
            FUN_00d50b00();
          }
          iVar5 = *(int *)(lVar8 + 0xc);
          FUN_00d50b20();
          if ((int)param_1 < iVar5) {
            lVar8 = *(int64_t *)(this_ptr + 0xe0);
            if (lVar8 != 0) {
              FUN_00d50b00();
            }
            lVar8 = *(int64_t *)(*(int64_t *)(lVar8 + 0x10) + (int64_t)(int)param_1 * 8);
            if (lVar8 != 0) {
              FUN_00d50b00();
            }
            FUN_00d50b20();
            if (lVar8 != 0) {
              if (*(int *)(lVar8 + 0x24) == 2) {
                FUN_002c1dc0();
                plVar11 = local_b0;
                (**(code **)(*plVar13 + 0x388))();
                local_d8 = local_60;
                local_d0 = 0;
                if (local_58 == '\0') {
                  if (local_60 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_58 = '\0';
                }
                local_d0 = '\x01';
                cVar4 = (**(code **)(*plVar11 + 0x50))();
                uVar14 = extraout_XMM0_Da_00;
                if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
                  uVar14 = FUN_00d50b20();
                }
                if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                  uVar14 = FUN_00d50b20();
                }
                if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
                  uVar14 = FUN_00d50b20();
                }
                lVar8 = g_026f6fb0;
                if (cVar4 == '\0') {
                  if (g_026f6fb0 != 0) {
                    uVar14 = FUN_00d50b00();
                  }
                  lVar2 = g_026fcee8;
                  local_188 = lVar8;
                  local_180 = '\x01';
                  if (g_026fcee8 != 0) {
                    uVar14 = FUN_00d50b00();
                  }
                  local_178 = lVar2;
                  local_170 = '\x01';
                  FUN_01f6ca30(uVar14,&local_178);
                  local_c8 = local_b0;
                  if (local_a8 == '\0') {
                    if (((local_b0 != (int64_t *)0x0) && (FUN_00d50b00(), local_a8 != '\0')) &&
                       (local_b0 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    local_a8 = '\0';
                  }
                  if ((local_170 != '\0') && (local_178 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_180 != '\0') && (local_188 != 0)) {
                    FUN_00d50b20();
                  }
                  FUN_002c1dc0();
                  lVar8 = g_026fcef0;
                  if (g_026fcef0 != 0) {
                    FUN_00d50b00();
                  }
                  local_108 = lVar8;
                  (**(code **)(*plVar13 + 0x388))();
                  lVar2 = g_026fcef8;
                  if (g_026fcef8 != 0) {
                    FUN_00d50b00();
                  }
                  local_1f0 = lVar8;
                  local_1e8 = local_1d8;
                  local_1e0 = lVar2;
                  FUN_002d73e0(&local_1e8,&local_1f0,&local_1e0,4);
                  FUN_000b4da0();
                  plVar11 = local_60;
                  if (local_58 == '\0') {
                    if (((local_60 != (int64_t *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
                       (local_60 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    local_58 = '\0';
                  }
                  FUN_002d10d0();
                  if (lVar2 != 0) {
                    FUN_00d50b20();
                  }
                  if ((local_1d0 != '\0') && (local_1d8 != 0)) {
                    FUN_00d50b20();
                  }
                  if (local_108 != 0) {
                    FUN_00d50b20();
                  }
                  if ((local_b8 != '\0') && (local_c0 != 0)) {
                    FUN_00d50b20();
                  }
                  local_168 = plVar11;
                  local_160 = '\0';
                  iVar5 = (**(code **)(*local_c8 + 0x5d8))();
                  if ((local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (plVar11 != (int64_t *)0x0) {
                    FUN_00d50b20();
                  }
                  FUN_00d50b20();
                  if (iVar5 != 0) goto LAB_002d4993;
                }
                local_150 = '\0';
                local_158 = plVar13;
                FUN_002c3060();
                if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                (**(code **)(**(int64_t **)(this_ptr + 0xf0) + 0x578))();
                FUN_00d403d0();
                local_148 = g_026fce60;
                if (g_026fce60 != 0) {
                  FUN_00d50b00();
                }
                local_140 = '\x01';
                local_f8 = 0;
                FUN_00d50b00();
                local_f8 = '\x01';
                local_138 = 0;
                local_130 = '\0';
                local_100 = this_ptr;
                FUN_00d40470(&local_138,&local_100,1,3);
                if ((local_130 != '\0') && (local_138 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_f8 != '\0') && (local_100 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_140 != '\0') && (local_148 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                uVar10 = CONCAT71((int7)((uint64_t)this_ptr >> 8),1);
              }
              else {
LAB_002d4993:
                uVar10 = 0;
              }
              FUN_00d50b20();
              goto LAB_002d4ae8;
            }
          }
          uVar10 = 0;
        }
        else {
          (**(code **)(**(int64_t **)(this_ptr + 0xf0) + 0x628))();
          pvVar7 = _pthread_getspecific(pVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_004a1110();
          pvVar7 = _pthread_getspecific(pVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01313ad0();
          plVar11 = local_b0;
          pvVar7 = _pthread_getspecific(pVar9);
          plVar3 = local_b0;
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), plVar11 = plVar3, lVar8 != 0)) {
            plVar11 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
          }
          local_1b0 = '\0';
          local_1a8 = (int64_t *)0x0;
          local_1a0 = '\0';
          local_198 = (int64_t *)0x0;
          local_190 = '\0';
          local_1b8 = plVar13;
          FUN_012cc0c0(&local_198,&local_1a8,1,0);
          if ((local_190 != '\0') && (local_198 != (int64_t *)0x0)) {
            (**(code **)(*local_198 + 0x10))();
            FUN_00d50b20();
          }
          if ((local_1a0 != '\0') && (local_1a8 != (int64_t *)0x0)) {
            (**(code **)(*local_1a8 + 0x10))();
            FUN_00d50b20();
          }
          if ((local_1b0 != '\0') && (local_1b8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_b8 != '\0') && (local_c0 != 0)) {
            FUN_00d50b20();
          }
          (**(code **)(**(int64_t **)(this_ptr + 0xf0) + 0x578))();
          uVar10 = CONCAT71((int7)((uint64_t)plVar11 >> 8),1);
          FUN_002c9a70();
        }
LAB_002d4ae8:
        FUN_00d50b20();
      }
      else {
        local_a8 = '\0';
        local_b0 = (int64_t *)0x0;
        local_a0 = plVar13;
        local_98 = 0xffffffff;
        local_90 = 0;
        local_98._4_4_ = 0;
        while( true ) {
          if (local_98._4_4_ != 0) {
            if (local_98._4_4_ < 1) {
              iVar5 = -local_98._4_4_;
            }
            else {
              iVar5 = (int)local_98 - local_98._4_4_;
              local_98 = CONCAT44(local_98._4_4_,iVar5);
              FUN_00d23690();
              local_90 = local_90 + local_98._4_4_;
              iVar5 = 0;
            }
            local_98 = CONCAT44(iVar5,(int)local_98);
          }
          lVar8 = (int64_t)(int)local_98;
          iVar5 = (int)local_98 + 1;
          local_98 = CONCAT44(local_98._4_4_,iVar5);
          if (*(int *)((int64_t)local_a0 + 0xc) <= iVar5) break;
          plVar13 = *(int64_t **)(local_a0[2] + 8 + lVar8 * 8);
          local_60 = plVar13;
          local_b0 = plVar13;
          if ((g_026fde10 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
            g_026d1818 = FUN_00d4fe50();
            g_026d1800 = "GNFilePath";
            g_026d1808 = 0x40;
            g_026d1810 = FUN_00041050;
            g_026d1820 = 0;
            ram_00000000026d1828 = 0;
            g_026d1830 = 0;
            ram_00000000026d1838 = 0;
            g_026d1840 = 0;
            ram_00000000026d1848 = 0;
            g_026d1850 = 0;
            ram_00000000026d1858 = 0;
            g_026d1860 = 0;
            ram_00000000026d1868 = 0;
            g_026d1870 = 0;
            ram_00000000026d1878 = 0;
            g_026d1880 = 0;
            ram_00000000026d1888 = 0;
            g_026d1890 = 0;
            ram_00000000026d1898 = 0;
            g_026d18a0 = 0;
            ram_00000000026d18a8 = 0;
            g_026d18b0 = 0;
            ram_00000000026d18b8 = 0;
            g_026d18c0 = 0;
            ___cxa_guard_release();
          }
          pplVar6 = &g_02802688;
          if (plVar13 != (int64_t *)0x0) {
            (**(code **)(*plVar13 + 0x360))();
            cVar4 = FUN_00e85ea0();
            pplVar6 = &local_60;
            if (cVar4 == '\0') {
              pplVar6 = &g_02802688;
            }
          }
          if (*pplVar6 != (int64_t *)0x0) {
            cVar4 = (**(code **)(*local_b0 + 0x3a0))();
            plVar13 = local_b0;
            if (cVar4 == '\0') {
              uVar14 = (**(code **)(*local_b0 + 0x3f0))();
              plVar13 = local_60;
              if (local_60 == (int64_t *)0x0) goto LAB_002d4065;
              bVar1 = true;
              if (((local_58 == '\0') && (uVar14 = FUN_00d50b00(), local_58 != '\0')) &&
                 (local_60 != (int64_t *)0x0)) {
                uVar14 = FUN_00d50b20();
              }
            }
            else {
              uVar14 = extraout_XMM0_Da;
              if (local_b0 == (int64_t *)0x0) {
                plVar13 = (int64_t *)0x0;
LAB_002d4065:
                bVar1 = false;
              }
              else if (local_a8 == '\0') {
                bVar1 = true;
                uVar14 = FUN_00d50b00();
              }
              else {
                local_a8 = '\0';
                bVar1 = true;
              }
            }
            FUN_002d0ef0(uVar14,0);
            plVar11 = local_60;
            if (local_58 == '\0') {
              if (local_60 != (int64_t *)0x0) {
                FUN_00d50b00();
                goto LAB_002d40c1;
              }
            }
            else if (local_60 != (int64_t *)0x0) {
LAB_002d40c1:
              local_58 = '\0';
              local_60 = (int64_t *)0x0;
              local_50 = plVar11;
              local_48 = 0xffffffff;
              local_40 = 0;
              iVar5 = 0;
              while( true ) {
                iVar12 = 0;
                if (iVar5 != 0) {
                  if (iVar5 < 1) {
                    iVar12 = -iVar5;
                  }
                  else {
                    local_48 = CONCAT44(local_48._4_4_,(int)local_48 - iVar5);
                    FUN_00d23690(iVar5,iVar5);
                    local_40 = local_40 + local_48._4_4_;
                    iVar12 = 0;
                  }
                  local_48 = CONCAT44(iVar12,(int)local_48);
                }
                lVar8 = (int64_t)(int)local_48;
                iVar5 = (int)local_48 + 1;
                local_48 = CONCAT44(local_48._4_4_,iVar5);
                if (*(int *)((int64_t)local_50 + 0xc) <= iVar5) break;
                local_60 = *(int64_t **)(local_50[2] + 8 + lVar8 * 8);
                iVar5 = iVar12;
                if (*(int *)((int64_t)local_60 + 0x24) == 2) {
                  FUN_002c3060();
                  iVar5 = local_48._4_4_;
                }
              }
              FUN_002d7300();
              FUN_00d50b20();
            }
            if ((bVar1) && (plVar13 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        FUN_002d7540();
        (**(code **)(**(int64_t **)(this_ptr + 0xf0) + 0x578))();
        FUN_00d403d0();
        lVar8 = g_026fce60;
        if (g_026fce60 != 0) {
          FUN_00d50b00();
        }
        local_128 = lVar8;
        local_120 = '\x01';
        local_e8 = 0;
        FUN_00d50b00();
        local_e8 = '\x01';
        local_118 = 0;
        local_110 = '\0';
        local_f0 = this_ptr;
        FUN_00d40470(&local_118,&local_f0,1,3);
        if ((local_110 != '\0') && (local_118 != 0)) {
          FUN_00d50b20();
        }
        if ((local_e8 != '\0') && (local_f0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_120 != '\0') && (local_128 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        uVar10 = CONCAT71((int7)((uint64_t)lVar8 >> 8),1);
      }
      FUN_00d50b20();
      goto LAB_002d4af8;
    }
  }
  uVar10 = 0;
LAB_002d4af8:
  return uVar10 & 0xffffffff;
}

