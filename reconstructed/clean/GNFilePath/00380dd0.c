// Function: FUN_00380dd0
// Address: 00380dd0
// Size: 5766 bytes
// Class: GNFilePath
// String references:
//   "GNFilePath"
//   "MDMetaWindowController"

uint64_t FUN_00380dd0(int64_t **param_1,int param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  uint64_t uVar10;
  int64_t lVar11;
  void*puVar12;
  int64_t **pplVar13;
  int64_t *this_ptr;
  int64_t *plVar14;
  int64_t *unaff_R14;
  int64_t *plVar15;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  double dVar16;
  uint64_t uVar17;
  int64_t *local_218;
  uint8_t local_210;
  int64_t *local_208;
  uint8_t local_200;
  int64_t *local_1f8;
  uint8_t local_1f0;
  int64_t *local_1e8;
  char local_1e0;
  int64_t *local_1d8;
  char local_1d0;
  int64_t *local_1c8;
  char local_1c0;
  int64_t *local_1b8;
  char local_1b0;
  int64_t *local_1a8;
  char local_1a0;
  int64_t *local_198;
  char local_190;
  int64_t *local_188;
  char local_180;
  int64_t *local_178;
  char local_170;
  void*local_158;
  char local_150;
  uint64_t local_148;
  uint32_t local_13c;
  int64_t *local_138;
  char local_130;
  int64_t *local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68 [8];
  int64_t *local_60;
  uint64_t local_58;
  int local_50;
  int64_t *local_48;
  char local_40;
  
  if (param_2 != 0) {
    FUN_01c219e0();
    plVar14 = local_70;
    if (local_68[0] == '\0') {
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b00();
        unaff_R14 = plVar14;
        if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00380e3e;
      }
    }
    else if (local_70 != (int64_t *)0x0) {
LAB_00380e3e:
      iVar8 = *(int *)((int64_t)plVar14 + 0xc);
      local_a8 = plVar14;
      if (iVar8 == 1) {
        FUN_00d23310();
        plVar14 = local_70;
        local_48 = (int64_t *)CONCAT71(local_48._1_7_,local_68[0]);
        pplVar13 = &local_48;
        if (local_68[0] != '\0') {
          pplVar13 = (int64_t **)local_68;
        }
        *(char *)pplVar13 = '\0';
        if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_48 == '\0') && (plVar14 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        pplVar13 = &local_70;
        (**(code **)(*plVar14 + 0x388))();
        plVar15 = local_70;
        if ((g_026fde10 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
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
        if (plVar15 == (int64_t *)0x0) {
LAB_00380ef0:
          pplVar13 = (int64_t **)&g_02802688;
        }
        else {
          (**(code **)(*plVar15 + 0x360))();
          cVar5 = FUN_00e85ea0();
          if (cVar5 == '\0') goto LAB_00380ef0;
        }
        plVar15 = *pplVar13;
        if (*(char *)(pplVar13 + 1) == '\0') {
          if (plVar15 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(void*)(pplVar13 + 1) = 0;
        }
        if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d23310();
        unaff_R14 = local_70;
        param_1 = &local_80;
        pplVar13 = (int64_t **)local_68;
        if (local_68[0] == '\0') {
          pplVar13 = param_1;
        }
        local_80._0_1_ = local_68[0];
        *(char *)pplVar13 = '\0';
        if ((local_68[0] != '\0') && (unaff_R14 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pplVar13 = &local_48;
        FUN_01c19440();
        plVar1 = local_48;
        FUN_0038ad10();
        if (plVar1 == (int64_t *)0x0) {
LAB_00380f9e:
          pplVar13 = (int64_t **)&g_02802688;
        }
        else {
          (**(code **)(*plVar1 + 0x360))();
          cVar5 = FUN_00e85ea0();
          if (cVar5 == '\0') goto LAB_00380f9e;
        }
        plVar1 = *pplVar13;
        if (*(char *)(pplVar13 + 1) == '\0') {
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(void*)(pplVar13 + 1) = 0;
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_80 != '\0') && (unaff_R14 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        bVar4 = true;
        bVar3 = true;
        if ((plVar1 != (int64_t *)0x0) && (plVar15 != (int64_t *)0x0)) {
          cVar5 = (**(code **)(*plVar15 + 0x4c0))();
          if (cVar5 != '\0') {
            (**(code **)(*plVar15 + 0x4c8))();
            if (plVar15 != local_70) {
              plVar15 = local_70;
              if (local_68[0] != '\0') {
                FUN_00d50b20();
                goto LAB_00381067;
              }
              if (local_70 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              FUN_00d50b20();
            }
            if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
LAB_00381067:
          cVar5 = (**(code **)(*plVar15 + 0x3a0))();
          if (cVar5 == '\0') {
            FUN_01c0e5e0();
            (**(code **)(*plVar15 + 0x370))();
            plVar2 = (int64_t *)CONCAT71(local_80._1_7_,(char)local_80);
            if (local_78 == '\0') {
              if (plVar2 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_78 = '\0';
            }
            local_68[0] = '\0';
            local_70 = plVar2;
            uVar9 = FUN_00d23d70();
            unaff_R14 = (int64_t *)(uint64_t)uVar9;
            uVar17 = extraout_XMM0_Qa_00;
            if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
              uVar17 = FUN_00d50b20();
            }
            if (plVar2 != (int64_t *)0x0) {
              uVar17 = FUN_00d50b20();
            }
            if ((local_78 != '\0') && (CONCAT71(local_80._1_7_,(char)local_80) != 0)) {
              uVar17 = FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              uVar17 = FUN_00d50b20();
            }
            if ((char)uVar9 == '\0') {
              cVar5 = (**(code **)(*plVar15 + 0x398))();
              if (cVar5 != '\0') {
                (**(code **)(*plVar15 + 0x370))();
                plVar14 = local_70;
                FUN_0074b2e0();
                local_138 = local_48;
                local_130 = 0;
                if (local_40 == '\0') {
                  if (local_48 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_40 = '\0';
                }
                local_130 = '\x01';
                cVar5 = (**(code **)(*plVar14 + 0x50))();
                cVar7 = '\x01';
                if (cVar5 == '\0') {
                  (**(code **)(*plVar15 + 0x370))();
                  plVar14 = (int64_t *)CONCAT71(local_80._1_7_,(char)local_80);
                  FUN_01552cd0();
                  local_128 = local_a0;
                  local_120 = 0;
                  if (local_98 == '\0') {
                    if (local_a0 != (int64_t *)0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_98 = '\0';
                  }
                  local_120 = '\x01';
                  cVar5 = (**(code **)(*plVar14 + 0x50))();
                  cVar7 = '\x01';
                  if (cVar5 == '\0') {
                    local_1e0 = '\0';
                    local_1e8 = plVar15;
                    cVar7 = FUN_00b80190();
                    if ((local_1e0 != '\0') && (local_1e8 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_78 != '\0') && (CONCAT71(local_80._1_7_,(char)local_80) != 0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (cVar7 == '\0') {
                  puVar12 = (void*)FUN_00e8fc40();
                  FUN_00d4ff40();
                  *puVar12 = &g_024c5080;
                  uVar17 = FUN_00d500e0();
                  local_1c0 = '\0';
                  local_1c8 = plVar15;
                  cVar5 = FUN_00b70580(uVar17,0);
                  if ((local_1c0 != '\0') && (local_1c8 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (cVar5 == '\0') {
                    unaff_R14 = (int64_t *)0x0;
                  }
                  else {
                    FUN_01f27fe0();
                    local_1b0 = '\0';
                    local_1b8 = plVar15;
                    uVar9 = (**(code **)(*local_70 + 0x528))();
                    unaff_R14 = (int64_t *)(uint64_t)uVar9;
                    if ((local_1b0 != '\0') && (local_1b8 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  FUN_00d50b20();
                }
                else {
                  FUN_01f27fe0();
                  local_1d0 = '\0';
                  local_1d8 = plVar15;
                  uVar9 = (**(code **)(*local_70 + 0x528))();
                  unaff_R14 = (int64_t *)(uint64_t)uVar9;
                  if ((local_1d0 != '\0') && (local_1d8 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                bVar4 = false;
                bVar3 = false;
              }
            }
            else {
              local_208 = plVar14;
              local_200 = 0;
              local_1f0 = 0;
              local_1f8 = plVar1;
              FUN_00383510(uVar17,&local_1f8);
              FUN_00380c30();
            }
          }
          else {
            local_210 = 0;
            local_218 = plVar1;
            FUN_00383510(extraout_XMM0_Qa,&local_218);
            FUN_00380c30();
          }
        }
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b20();
          bVar3 = bVar4;
        }
        if (plVar15 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        if (bVar3) {
          iVar8 = *(int *)((int64_t)local_a8 + 0xc);
          goto LAB_0038123a;
        }
LAB_003822c1:
        local_13c = 0;
      }
      else {
LAB_0038123a:
        plVar14 = g_026e1800;
        local_13c = (uint32_t)CONCAT71((int7)((uint64_t)param_1 >> 8),1);
        if (0 < iVar8) {
          if (g_026e1800 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          dVar16 = (double)FUN_00e7d6f0();
          uVar10 = (uint64_t)(dVar16 * g_023907c0);
          dVar16 = dVar16 * g_023907c0 - g_023907c8;
          FUN_0071a120();
          if ((((local_68[0] == '\0') && (local_70 != (int64_t *)0x0)) &&
              (FUN_00d50b00(), local_68[0] != '\0')) && (local_70 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          bVar6 = (byte)(((int64_t)dVar16 & (int64_t)uVar10 >> 0x3f | uVar10) / 3);
          local_48 = plVar14;
          local_40 = '\0';
          FUN_000175c0();
          plVar15 = local_70;
          if (local_68[0] == '\0') {
            if (((local_70 != (int64_t *)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
               (local_70 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_68[0] = '\0';
          }
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar15 != (int64_t *)0x0) {
            local_68[0] = '\0';
            local_70 = plVar15;
            bVar6 = FUN_00c70bc0();
            if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
          FUN_00d50b20();
          if (plVar14 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((plVar15 != (int64_t *)0x0 & bVar6) != 0) {
            local_148 = CONCAT44(local_148._4_4_,(int)unaff_R14);
            local_68[0] = '\0';
            local_70 = (int64_t *)0x0;
            local_60 = local_a8;
            local_58._0_4_ = -1;
            local_58._4_4_ = 0;
            local_50 = 0;
            bVar3 = false;
LAB_00381419:
            if (local_58._4_4_ != 0) {
              if (local_58._4_4_ < 1) {
                local_58._4_4_ = -local_58._4_4_;
              }
              else {
                local_58._0_4_ = (int)local_58 - local_58._4_4_;
                FUN_00d23690();
                local_50 = local_50 + local_58._4_4_;
                local_58._4_4_ = 0;
              }
            }
            lVar11 = (int64_t)(int)local_58;
            local_58._0_4_ = (int)local_58 + 1;
            if ((int)local_58 < *(int *)((int64_t)local_60 + 0xc)) {
              local_70 = *(int64_t **)(local_60[2] + 8 + lVar11 * 8);
              (**(code **)(*local_70 + 0x388))();
              plVar14 = local_48;
              if ((g_026fde10 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
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
              pplVar13 = (int64_t **)&g_02802688;
              if (plVar14 != (int64_t *)0x0) {
                (**(code **)(*plVar14 + 0x360))();
                cVar5 = FUN_00e85ea0();
                pplVar13 = &local_48;
                if (cVar5 == '\0') {
                  pplVar13 = (int64_t **)&g_02802688;
                }
              }
              plVar14 = *pplVar13;
              if (*(char *)(pplVar13 + 1) == '\0') {
                if (plVar14 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                *(void*)(pplVar13 + 1) = 0;
              }
              if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              local_1a0 = '\0';
              local_1a8 = plVar14;
              cVar5 = FUN_00b80190();
              if ((local_1a0 != '\0') && (local_1a8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar5 != '\0') goto code_r0x00381527;
              (**(code **)(*plVar14 + 0x370))();
              plVar15 = local_48;
              FUN_0074b2e0();
              local_110 = 0;
              lVar11 = CONCAT71(local_80._1_7_,(char)local_80);
              if (local_78 == '\0') {
                if (lVar11 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_78 = '\0';
              }
              local_110 = '\x01';
              local_118 = lVar11;
              cVar5 = (**(code **)(*plVar15 + 0x50))();
              cVar7 = '\x01';
              if (cVar5 == '\0') {
                (**(code **)(*plVar14 + 0x370))();
                plVar14 = local_a0;
                FUN_01552cd0();
                local_108 = local_b8;
                local_100 = 0;
                if (local_b0 == '\0') {
                  if (local_b8 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_b0 = '\0';
                }
                local_100 = '\x01';
                cVar7 = (**(code **)(*plVar14 + 0x50))();
                if ((local_100 != '\0') && (local_108 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_b0 != '\0') && (local_b8 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_110 != '\0') && (local_118 != 0)) {
                FUN_00d50b20();
              }
              if ((local_78 != '\0') && (CONCAT71(local_80._1_7_,(char)local_80) != 0)) {
                FUN_00d50b20();
              }
              if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar7 != '\0') {
                bVar3 = true;
              }
              goto LAB_0038140e;
            }
            FUN_0038d420();
            if (bVar3) {
              local_68[0] = '\0';
              local_70 = (int64_t *)0x0;
              local_60 = local_a8;
              local_58 = 0xffffffff;
              local_50 = 0;
              unaff_R14 = (int64_t *)(local_148 & 0xffffffff);
              while( true ) {
                lVar11 = (int64_t)(int)local_58;
                iVar8 = (int)local_58 + 1;
                local_58 = CONCAT44(local_58._4_4_,iVar8);
                if (*(int *)((int64_t)local_60 + 0xc) <= iVar8) break;
                local_70 = *(int64_t **)(local_60[2] + 8 + lVar11 * 8);
                (**(code **)(*local_70 + 0x388))();
                plVar14 = local_48;
                if ((g_026fde10 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
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
                  unaff_R14 = (int64_t *)(local_148 & 0xffffffff);
                }
                pplVar13 = (int64_t **)&g_02802688;
                if (plVar14 != (int64_t *)0x0) {
                  (**(code **)(*plVar14 + 0x360))();
                  cVar5 = FUN_00e85ea0();
                  pplVar13 = &local_48;
                  if (cVar5 == '\0') {
                    pplVar13 = (int64_t **)&g_02802688;
                  }
                }
                plVar14 = *pplVar13;
                if (*(char *)(pplVar13 + 1) == '\0') {
                  if (plVar14 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  *(void*)(pplVar13 + 1) = 0;
                }
                if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                (**(code **)(*plVar14 + 0x370))();
                plVar15 = local_48;
                FUN_0074b2e0();
                local_f0 = 0;
                lVar11 = CONCAT71(local_80._1_7_,(char)local_80);
                if (local_78 == '\0') {
                  if (lVar11 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_78 = '\0';
                }
                local_f0 = '\x01';
                local_f8 = lVar11;
                cVar5 = (**(code **)(*plVar15 + 0x50))();
                cVar7 = '\x01';
                if (cVar5 == '\0') {
                  (**(code **)(*plVar14 + 0x370))();
                  plVar15 = local_a0;
                  FUN_01552cd0();
                  local_e8 = local_b8;
                  local_e0 = 0;
                  if (local_b0 == '\0') {
                    if (local_b8 != 0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_b0 = '\0';
                  }
                  local_e0 = '\x01';
                  cVar5 = (**(code **)(*plVar15 + 0x50))();
                  cVar7 = '\x01';
                  if (cVar5 == '\0') {
                    local_190 = '\0';
                    local_198 = plVar14;
                    cVar7 = FUN_00b80190();
                    if ((local_190 != '\0') && (local_198 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  if ((local_e0 != '\0') && (local_e8 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_b0 != '\0') && (local_b8 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_f0 != '\0') && (local_f8 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_78 != '\0') && (CONCAT71(local_80._1_7_,(char)local_80) != 0)) {
                  FUN_00d50b20();
                }
                if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (cVar7 != '\0') {
                  FUN_01f27fe0();
                  local_180 = '\0';
                  local_188 = plVar14;
                  (**(code **)(*local_48 + 0x528))();
                  if ((local_180 != '\0') && (local_188 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                uVar17 = FUN_00d50b20();
                iVar8 = local_58._4_4_;
                if (local_58._4_4_ != 0) {
                  if (local_58._4_4_ < 1) {
                    iVar8 = -local_58._4_4_;
                  }
                  else {
                    local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
                    FUN_00d23690(uVar17,local_58._4_4_);
                    local_50 = local_50 + iVar8;
                    iVar8 = 0;
                  }
                  local_58 = CONCAT44(iVar8,(int)local_58);
                }
              }
              FUN_0038d420();
            }
            else {
              if (this_ptr != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              local_80._0_1_ = '\0';
              local_48 = this_ptr;
              do {
                plVar15 = local_48;
                (**(code **)(*local_48 + 0x370))();
                plVar14 = local_70;
                if (local_70 == plVar15) {
                  if ((((char)local_80 == '\0') && (local_70 != (int64_t *)0x0)) &&
                     (plVar14 = plVar15, local_68[0] != '\0')) goto LAB_00381837;
                }
                else {
                  local_48 = local_70;
                  if (local_68[0] == '\0') {
                    if ((char)local_80 == '\0') {
                      pplVar13 = &local_80;
                    }
                    else {
                      FUN_00d50b20();
                      pplVar13 = &local_80;
                    }
                  }
                  else {
                    if ((char)local_80 != '\0') {
                      FUN_00d50b20();
                    }
LAB_00381837:
                    local_80._0_1_ = '\x01';
                    pplVar13 = (int64_t **)local_68;
                  }
                  *(char *)pplVar13 = '\0';
                  plVar15 = plVar14;
                }
                if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((g_026fddb0 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
                  g_026e0ab8 = FUN_00015ff0();
                  g_026e0aa0 = "MDMetaWindowController";
                  g_026e0aa8 = 0x198;
                  g_026e0ab0 = FUN_0006dea0;
                  g_026e0ac0 = 0;
                  ram_00000000026e0ac8 = 0;
                  g_026e0ad0 = 0;
                  g_026e0b48 = 0;
                  ram_00000000026e0b50 = 0;
                  g_026e0b58 = 0;
                  g_026e0b5a = 1;
                  g_026e0ad8 = 0;
                  ram_00000000026e0ae0 = 0;
                  g_026e0ae8 = 0;
                  ram_00000000026e0af0 = 0;
                  g_026e0af8 = 0;
                  ram_00000000026e0b00 = 0;
                  g_026e0b08 = 0;
                  ram_00000000026e0b10 = 0;
                  g_026e0b18 = 0;
                  ram_00000000026e0b20 = 0;
                  g_026e0b28 = 0;
                  ram_00000000026e0b30 = 0;
                  g_026e0b38 = 0;
                  ram_00000000026e0b40 = 0;
                  g_026e0b63 = 0;
                  g_026e0b5b = 0;
                  ___cxa_guard_release();
                }
                pplVar13 = (int64_t **)&g_02802688;
                if (plVar15 != (int64_t *)0x0) {
                  (**(code **)(*plVar15 + 0x360))();
                  cVar5 = FUN_00e85ea0();
                  pplVar13 = &local_48;
                  if (cVar5 == '\0') {
                    pplVar13 = (int64_t **)&g_02802688;
                  }
                }
                plVar14 = local_48;
                if (*pplVar13 != (int64_t *)0x0) {
                  if (((char)local_80 == '\0') && (local_48 != (int64_t *)0x0)) {
                    FUN_00d50b00();
                  }
                  goto LAB_00381de0;
                }
              } while (local_48 != (int64_t *)0x0);
              plVar14 = (int64_t *)0x0;
LAB_00381de0:
              if (this_ptr != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              puVar12 = (void*)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar12 = &g_02572358;
              (*g_02572370)();
              local_68[0] = '\0';
              local_70 = (int64_t *)0x0;
              local_60 = local_a8;
              local_58 = 0xffffffff;
              local_50 = 0;
              local_148 = g_025908a0;
              local_58._4_4_ = 0;
              while( true ) {
                if (local_58._4_4_ != 0) {
                  if (local_58._4_4_ < 1) {
                    iVar8 = -local_58._4_4_;
                  }
                  else {
                    iVar8 = (int)local_58 - local_58._4_4_;
                    local_58 = CONCAT44(local_58._4_4_,iVar8);
                    FUN_00d23690();
                    local_50 = local_50 + local_58._4_4_;
                    iVar8 = 0;
                  }
                  local_58 = CONCAT44(iVar8,(int)local_58);
                }
                lVar11 = (int64_t)(int)local_58;
                iVar8 = (int)local_58 + 1;
                local_58 = CONCAT44(local_58._4_4_,iVar8);
                if (*(int *)((int64_t)local_60 + 0xc) <= iVar8) break;
                local_70 = *(int64_t **)(local_60[2] + 8 + lVar11 * 8);
                (**(code **)(*local_70 + 0x388))();
                plVar15 = local_48;
                if (local_40 == '\0') {
                  if (local_48 != (int64_t *)0x0) {
                    FUN_00d50b00();
                    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    goto LAB_00381f20;
                  }
                }
                else if (local_48 != (int64_t *)0x0) {
LAB_00381f20:
                  local_178 = plVar15;
                  local_170 = '\0';
                  cVar5 = FUN_00b80190();
                  if ((local_170 != '\0') && (local_178 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (cVar5 != '\0') {
                    (**(code **)(*local_70 + 0x388))();
                    local_d0 = 0;
                    lVar11 = CONCAT71(local_80._1_7_,(char)local_80);
                    if (local_78 == '\0') {
                      if (lVar11 != 0) {
                        FUN_00d50b00();
                      }
                    }
                    else {
                      local_78 = '\0';
                    }
                    local_d0 = '\x01';
                    local_d8 = lVar11;
                    FUN_00b810f0();
                    plVar15 = local_48;
                    if (local_48 == (int64_t *)0x0) {
                      bVar4 = true;
                      plVar15 = (int64_t *)0x0;
                    }
                    else {
                      if (local_40 == '\0') {
                        FUN_00d50b00();
                        bVar4 = false;
                        if ((local_40 == '\0') || (local_48 == (int64_t *)0x0)) goto LAB_00381ffa;
                        FUN_00d50b20();
                      }
                      else {
                        local_40 = '\0';
                      }
                      bVar4 = false;
                    }
LAB_00381ffa:
                    if ((local_d0 != '\0') && (local_d8 != 0)) {
                      FUN_00d50b20();
                    }
                    if ((local_78 != '\0') && (CONCAT71(local_80._1_7_,(char)local_80) != 0)) {
                      FUN_00d50b20();
                    }
                    if (plVar15 != (int64_t *)0x0) {
                      FUN_00b875e0();
                      local_40 = '\0';
                      local_48 = plVar15;
                      FUN_00d21140();
                      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (!bVar4) {
                        FUN_00d50b20();
                      }
                    }
                  }
                  FUN_00d50b20();
                }
              }
              FUN_0038d420();
              FUN_00631670();
              local_150 = '\0';
              local_158 = puVar12;
              uVar9 = FUN_0070e870();
              unaff_R14 = (int64_t *)(uint64_t)uVar9;
              if ((local_150 != '\0') && (local_158 != (void*)0x0)) {
                FUN_00d50b20();
              }
              if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (puVar12 != (void*)0x0) {
                FUN_00d50b20();
              }
              if (plVar14 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
            }
            if (!bVar3) goto LAB_003822c1;
          }
        }
      }
      FUN_00d50b20();
      if ((char)local_13c == '\0') goto LAB_003822e3;
    }
  }
  unaff_R14 = (int64_t *)CONCAT71((int7)((uint64_t)unaff_R14 >> 8),1);
LAB_003822e3:
  return (uint64_t)unaff_R14 & 0xffffff01;
code_r0x00381527:
  if (plVar14 != (int64_t *)0x0) {
LAB_0038140e:
    FUN_00d50b20();
  }
  goto LAB_00381419;
}

