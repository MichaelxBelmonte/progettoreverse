// Function: FUN_00380dd0
// Address: 00380dd0
// Size: 5766 bytes
// Class: GNFilePath
// String references:
//   "GNFilePath"
//   "MDMetaWindowController"


/* WARNING: Removing unreachable block (ram,0x003819d5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00380dd0(longlong **param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong **pplVar13;
  longlong *unaff_RDI;
  longlong *plVar14;
  longlong *unaff_R14;
  longlong *plVar15;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  double dVar16;
  undefined8 uVar17;
  longlong *local_218;
  undefined1 local_210;
  longlong *local_208;
  undefined1 local_200;
  longlong *local_1f8;
  undefined1 local_1f0;
  longlong *local_1e8;
  char local_1e0;
  longlong *local_1d8;
  char local_1d0;
  longlong *local_1c8;
  char local_1c0;
  longlong *local_1b8;
  char local_1b0;
  longlong *local_1a8;
  char local_1a0;
  longlong *local_198;
  char local_190;
  longlong *local_188;
  char local_180;
  longlong *local_178;
  char local_170;
  undefined8 *local_158;
  char local_150;
  ulonglong local_148;
  undefined4 local_13c;
  longlong *local_138;
  char local_130;
  longlong *local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_b8;
  char local_b0;
  longlong *local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68 [8];
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  longlong *local_48;
  char local_40;
  
  if (param_2 != 0) {
    FUN_01c219e0();
    plVar14 = local_70;
    if (local_68[0] == '\0') {
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b00();
        unaff_R14 = plVar14;
        if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00380e3e;
      }
    }
    else if (local_70 != (longlong *)0x0) {
LAB_00380e3e:
      iVar8 = *(int *)((longlong)plVar14 + 0xc);
      local_a8 = plVar14;
      if (iVar8 == 1) {
        FUN_00d23310();
        plVar14 = local_70;
        local_48 = (longlong *)CONCAT71(local_48._1_7_,local_68[0]);
        pplVar13 = &local_48;
        if (local_68[0] != '\0') {
          pplVar13 = (longlong **)local_68;
        }
        *(char *)pplVar13 = '\0';
        if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_48 == '\0') && (plVar14 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        pplVar13 = &local_70;
        (**(code **)(*plVar14 + 0x388))();
        plVar15 = local_70;
        if ((DAT_026fde10 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
          _DAT_026d1818 = FUN_00d4fe50();
          DAT_026d1800 = "GNFilePath";
          _DAT_026d1808 = 0x40;
          _DAT_026d1810 = FUN_00041050;
          _DAT_026d1820 = 0;
          uRam00000000026d1828 = 0;
          _DAT_026d1830 = 0;
          uRam00000000026d1838 = 0;
          _DAT_026d1840 = 0;
          uRam00000000026d1848 = 0;
          _DAT_026d1850 = 0;
          uRam00000000026d1858 = 0;
          _DAT_026d1860 = 0;
          uRam00000000026d1868 = 0;
          _DAT_026d1870 = 0;
          uRam00000000026d1878 = 0;
          _DAT_026d1880 = 0;
          uRam00000000026d1888 = 0;
          _DAT_026d1890 = 0;
          uRam00000000026d1898 = 0;
          _DAT_026d18a0 = 0;
          uRam00000000026d18a8 = 0;
          _DAT_026d18b0 = 0;
          uRam00000000026d18b8 = 0;
          _DAT_026d18c0 = 0;
          ___cxa_guard_release();
        }
        if (plVar15 == (longlong *)0x0) {
LAB_00380ef0:
          pplVar13 = (longlong **)&DAT_02802688;
        }
        else {
          (**(code **)(*plVar15 + 0x360))();
          cVar5 = FUN_00e85ea0();
          if (cVar5 == '\0') goto LAB_00380ef0;
        }
        plVar15 = *pplVar13;
        if (*(char *)(pplVar13 + 1) == '\0') {
          if (plVar15 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(undefined1 *)(pplVar13 + 1) = 0;
        }
        if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d23310();
        unaff_R14 = local_70;
        param_1 = &local_80;
        pplVar13 = (longlong **)local_68;
        if (local_68[0] == '\0') {
          pplVar13 = param_1;
        }
        local_80._0_1_ = local_68[0];
        *(char *)pplVar13 = '\0';
        if ((local_68[0] != '\0') && (unaff_R14 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pplVar13 = &local_48;
        FUN_01c19440();
        plVar1 = local_48;
        FUN_0038ad10();
        if (plVar1 == (longlong *)0x0) {
LAB_00380f9e:
          pplVar13 = (longlong **)&DAT_02802688;
        }
        else {
          (**(code **)(*plVar1 + 0x360))();
          cVar5 = FUN_00e85ea0();
          if (cVar5 == '\0') goto LAB_00380f9e;
        }
        plVar1 = *pplVar13;
        if (*(char *)(pplVar13 + 1) == '\0') {
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(undefined1 *)(pplVar13 + 1) = 0;
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_80 != '\0') && (unaff_R14 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        bVar4 = true;
        bVar3 = true;
        if ((plVar1 != (longlong *)0x0) && (plVar15 != (longlong *)0x0)) {
          cVar5 = (**(code **)(*plVar15 + 0x4c0))();
          if (cVar5 != '\0') {
            (**(code **)(*plVar15 + 0x4c8))();
            if (plVar15 != local_70) {
              plVar15 = local_70;
              if (local_68[0] != '\0') {
                FUN_00d50b20();
                goto LAB_00381067;
              }
              if (local_70 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              FUN_00d50b20();
            }
            if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
LAB_00381067:
          cVar5 = (**(code **)(*plVar15 + 0x3a0))();
          if (cVar5 == '\0') {
            FUN_01c0e5e0();
            (**(code **)(*plVar15 + 0x370))();
            plVar2 = (longlong *)CONCAT71(local_80._1_7_,(char)local_80);
            if (local_78 == '\0') {
              if (plVar2 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_78 = '\0';
            }
            local_68[0] = '\0';
            local_70 = plVar2;
            uVar9 = FUN_00d23d70();
            unaff_R14 = (longlong *)(ulonglong)uVar9;
            uVar17 = extraout_XMM0_Qa_00;
            if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
              uVar17 = FUN_00d50b20();
            }
            if (plVar2 != (longlong *)0x0) {
              uVar17 = FUN_00d50b20();
            }
            if ((local_78 != '\0') && (CONCAT71(local_80._1_7_,(char)local_80) != 0)) {
              uVar17 = FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
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
                  if (local_48 != (longlong *)0x0) {
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
                  plVar14 = (longlong *)CONCAT71(local_80._1_7_,(char)local_80);
                  FUN_01552cd0();
                  local_128 = local_a0;
                  local_120 = 0;
                  if (local_98 == '\0') {
                    if (local_a0 != (longlong *)0x0) {
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
                    if ((local_1e0 != '\0') && (local_1e8 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_78 != '\0') && (CONCAT71(local_80._1_7_,(char)local_80) != 0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (cVar7 == '\0') {
                  puVar12 = (undefined8 *)FUN_00e8fc40();
                  FUN_00d4ff40();
                  *puVar12 = &DAT_024c5080;
                  uVar17 = FUN_00d500e0();
                  local_1c0 = '\0';
                  local_1c8 = plVar15;
                  cVar5 = FUN_00b70580(uVar17,0);
                  if ((local_1c0 != '\0') && (local_1c8 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (cVar5 == '\0') {
                    unaff_R14 = (longlong *)0x0;
                  }
                  else {
                    FUN_01f27fe0();
                    local_1b0 = '\0';
                    local_1b8 = plVar15;
                    uVar9 = (**(code **)(*local_70 + 0x528))();
                    unaff_R14 = (longlong *)(ulonglong)uVar9;
                    if ((local_1b0 != '\0') && (local_1b8 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
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
                  unaff_R14 = (longlong *)(ulonglong)uVar9;
                  if ((local_1d0 != '\0') && (local_1d8 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
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
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b20();
          bVar3 = bVar4;
        }
        if (plVar15 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        if (bVar3) {
          iVar8 = *(int *)((longlong)local_a8 + 0xc);
          goto LAB_0038123a;
        }
LAB_003822c1:
        local_13c = 0;
      }
      else {
LAB_0038123a:
        plVar14 = DAT_026e1800;
        local_13c = (undefined4)CONCAT71((int7)((ulonglong)param_1 >> 8),1);
        if (0 < iVar8) {
          if (DAT_026e1800 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          dVar16 = (double)FUN_00e7d6f0();
          uVar10 = (ulonglong)(dVar16 * DAT_023907c0);
          dVar16 = dVar16 * DAT_023907c0 - _DAT_023907c8;
          FUN_0071a120();
          if ((((local_68[0] == '\0') && (local_70 != (longlong *)0x0)) &&
              (FUN_00d50b00(), local_68[0] != '\0')) && (local_70 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          bVar6 = (byte)(((longlong)dVar16 & (longlong)uVar10 >> 0x3f | uVar10) / 3);
          local_48 = plVar14;
          local_40 = '\0';
          FUN_000175c0();
          plVar15 = local_70;
          if (local_68[0] == '\0') {
            if (((local_70 != (longlong *)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
               (local_70 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_68[0] = '\0';
          }
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar15 != (longlong *)0x0) {
            local_68[0] = '\0';
            local_70 = plVar15;
            bVar6 = FUN_00c70bc0();
            if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
          FUN_00d50b20();
          if (plVar14 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((plVar15 != (longlong *)0x0 & bVar6) != 0) {
            local_148 = CONCAT44(local_148._4_4_,(int)unaff_R14);
            local_68[0] = '\0';
            local_70 = (longlong *)0x0;
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
            lVar11 = (longlong)(int)local_58;
            local_58._0_4_ = (int)local_58 + 1;
            if ((int)local_58 < *(int *)((longlong)local_60 + 0xc)) {
              local_70 = *(longlong **)(local_60[2] + 8 + lVar11 * 8);
              (**(code **)(*local_70 + 0x388))();
              plVar14 = local_48;
              if ((DAT_026fde10 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
                _DAT_026d1818 = FUN_00d4fe50();
                DAT_026d1800 = "GNFilePath";
                _DAT_026d1808 = 0x40;
                _DAT_026d1810 = FUN_00041050;
                _DAT_026d1820 = 0;
                uRam00000000026d1828 = 0;
                _DAT_026d1830 = 0;
                uRam00000000026d1838 = 0;
                _DAT_026d1840 = 0;
                uRam00000000026d1848 = 0;
                _DAT_026d1850 = 0;
                uRam00000000026d1858 = 0;
                _DAT_026d1860 = 0;
                uRam00000000026d1868 = 0;
                _DAT_026d1870 = 0;
                uRam00000000026d1878 = 0;
                _DAT_026d1880 = 0;
                uRam00000000026d1888 = 0;
                _DAT_026d1890 = 0;
                uRam00000000026d1898 = 0;
                _DAT_026d18a0 = 0;
                uRam00000000026d18a8 = 0;
                _DAT_026d18b0 = 0;
                uRam00000000026d18b8 = 0;
                _DAT_026d18c0 = 0;
                ___cxa_guard_release();
              }
              pplVar13 = (longlong **)&DAT_02802688;
              if (plVar14 != (longlong *)0x0) {
                (**(code **)(*plVar14 + 0x360))();
                cVar5 = FUN_00e85ea0();
                pplVar13 = &local_48;
                if (cVar5 == '\0') {
                  pplVar13 = (longlong **)&DAT_02802688;
                }
              }
              plVar14 = *pplVar13;
              if (*(char *)(pplVar13 + 1) == '\0') {
                if (plVar14 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                *(undefined1 *)(pplVar13 + 1) = 0;
              }
              if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              local_1a0 = '\0';
              local_1a8 = plVar14;
              cVar5 = FUN_00b80190();
              if ((local_1a0 != '\0') && (local_1a8 != (longlong *)0x0)) {
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
                if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_110 != '\0') && (local_118 != 0)) {
                FUN_00d50b20();
              }
              if ((local_78 != '\0') && (CONCAT71(local_80._1_7_,(char)local_80) != 0)) {
                FUN_00d50b20();
              }
              if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
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
              local_70 = (longlong *)0x0;
              local_60 = local_a8;
              local_58 = 0xffffffff;
              local_50 = 0;
              unaff_R14 = (longlong *)(local_148 & 0xffffffff);
              while( true ) {
                lVar11 = (longlong)(int)local_58;
                iVar8 = (int)local_58 + 1;
                local_58 = CONCAT44(local_58._4_4_,iVar8);
                if (*(int *)((longlong)local_60 + 0xc) <= iVar8) break;
                local_70 = *(longlong **)(local_60[2] + 8 + lVar11 * 8);
                (**(code **)(*local_70 + 0x388))();
                plVar14 = local_48;
                if ((DAT_026fde10 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
                  _DAT_026d1818 = FUN_00d4fe50();
                  DAT_026d1800 = "GNFilePath";
                  _DAT_026d1808 = 0x40;
                  _DAT_026d1810 = FUN_00041050;
                  _DAT_026d1820 = 0;
                  uRam00000000026d1828 = 0;
                  _DAT_026d1830 = 0;
                  uRam00000000026d1838 = 0;
                  _DAT_026d1840 = 0;
                  uRam00000000026d1848 = 0;
                  _DAT_026d1850 = 0;
                  uRam00000000026d1858 = 0;
                  _DAT_026d1860 = 0;
                  uRam00000000026d1868 = 0;
                  _DAT_026d1870 = 0;
                  uRam00000000026d1878 = 0;
                  _DAT_026d1880 = 0;
                  uRam00000000026d1888 = 0;
                  _DAT_026d1890 = 0;
                  uRam00000000026d1898 = 0;
                  _DAT_026d18a0 = 0;
                  uRam00000000026d18a8 = 0;
                  _DAT_026d18b0 = 0;
                  uRam00000000026d18b8 = 0;
                  _DAT_026d18c0 = 0;
                  ___cxa_guard_release();
                  unaff_R14 = (longlong *)(local_148 & 0xffffffff);
                }
                pplVar13 = (longlong **)&DAT_02802688;
                if (plVar14 != (longlong *)0x0) {
                  (**(code **)(*plVar14 + 0x360))();
                  cVar5 = FUN_00e85ea0();
                  pplVar13 = &local_48;
                  if (cVar5 == '\0') {
                    pplVar13 = (longlong **)&DAT_02802688;
                  }
                }
                plVar14 = *pplVar13;
                if (*(char *)(pplVar13 + 1) == '\0') {
                  if (plVar14 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  *(undefined1 *)(pplVar13 + 1) = 0;
                }
                if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
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
                    if ((local_190 != '\0') && (local_198 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  if ((local_e0 != '\0') && (local_e8 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_b0 != '\0') && (local_b8 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_f0 != '\0') && (local_f8 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_78 != '\0') && (CONCAT71(local_80._1_7_,(char)local_80) != 0)) {
                  FUN_00d50b20();
                }
                if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (cVar7 != '\0') {
                  FUN_01f27fe0();
                  local_180 = '\0';
                  local_188 = plVar14;
                  (**(code **)(*local_48 + 0x528))();
                  if ((local_180 != '\0') && (local_188 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
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
              if (unaff_RDI != (longlong *)0x0) {
                FUN_00d50b00();
              }
              local_80._0_1_ = '\0';
              local_48 = unaff_RDI;
              do {
                plVar15 = local_48;
                (**(code **)(*local_48 + 0x370))();
                plVar14 = local_70;
                if (local_70 == plVar15) {
                  if ((((char)local_80 == '\0') && (local_70 != (longlong *)0x0)) &&
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
                    pplVar13 = (longlong **)local_68;
                  }
                  *(char *)pplVar13 = '\0';
                  plVar15 = plVar14;
                }
                if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((DAT_026fddb0 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
                  _DAT_026e0ab8 = FUN_00015ff0();
                  _DAT_026e0aa0 = "MDMetaWindowController";
                  _DAT_026e0aa8 = 0x198;
                  _DAT_026e0ab0 = FUN_0006dea0;
                  _DAT_026e0ac0 = 0;
                  uRam00000000026e0ac8 = 0;
                  _DAT_026e0ad0 = 0;
                  _DAT_026e0b48 = 0;
                  uRam00000000026e0b50 = 0;
                  _DAT_026e0b58 = 0;
                  DAT_026e0b5a = 1;
                  _DAT_026e0ad8 = 0;
                  uRam00000000026e0ae0 = 0;
                  _DAT_026e0ae8 = 0;
                  uRam00000000026e0af0 = 0;
                  _DAT_026e0af8 = 0;
                  uRam00000000026e0b00 = 0;
                  _DAT_026e0b08 = 0;
                  uRam00000000026e0b10 = 0;
                  _DAT_026e0b18 = 0;
                  uRam00000000026e0b20 = 0;
                  _DAT_026e0b28 = 0;
                  uRam00000000026e0b30 = 0;
                  _DAT_026e0b38 = 0;
                  uRam00000000026e0b40 = 0;
                  DAT_026e0b63 = 0;
                  _DAT_026e0b5b = 0;
                  ___cxa_guard_release();
                }
                pplVar13 = (longlong **)&DAT_02802688;
                if (plVar15 != (longlong *)0x0) {
                  (**(code **)(*plVar15 + 0x360))();
                  cVar5 = FUN_00e85ea0();
                  pplVar13 = &local_48;
                  if (cVar5 == '\0') {
                    pplVar13 = (longlong **)&DAT_02802688;
                  }
                }
                plVar14 = local_48;
                if (*pplVar13 != (longlong *)0x0) {
                  if (((char)local_80 == '\0') && (local_48 != (longlong *)0x0)) {
                    FUN_00d50b00();
                  }
                  goto LAB_00381de0;
                }
              } while (local_48 != (longlong *)0x0);
              plVar14 = (longlong *)0x0;
LAB_00381de0:
              if (unaff_RDI != (longlong *)0x0) {
                FUN_00d50b20();
              }
              puVar12 = (undefined8 *)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar12 = &DAT_02572358;
              (*DAT_02572370)();
              local_68[0] = '\0';
              local_70 = (longlong *)0x0;
              local_60 = local_a8;
              local_58 = 0xffffffff;
              local_50 = 0;
              local_148 = DAT_025908a0;
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
                lVar11 = (longlong)(int)local_58;
                iVar8 = (int)local_58 + 1;
                local_58 = CONCAT44(local_58._4_4_,iVar8);
                if (*(int *)((longlong)local_60 + 0xc) <= iVar8) break;
                local_70 = *(longlong **)(local_60[2] + 8 + lVar11 * 8);
                (**(code **)(*local_70 + 0x388))();
                plVar15 = local_48;
                if (local_40 == '\0') {
                  if (local_48 != (longlong *)0x0) {
                    FUN_00d50b00();
                    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    goto LAB_00381f20;
                  }
                }
                else if (local_48 != (longlong *)0x0) {
LAB_00381f20:
                  local_178 = plVar15;
                  local_170 = '\0';
                  cVar5 = FUN_00b80190();
                  if ((local_170 != '\0') && (local_178 != (longlong *)0x0)) {
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
                    if (local_48 == (longlong *)0x0) {
                      bVar4 = true;
                      plVar15 = (longlong *)0x0;
                    }
                    else {
                      if (local_40 == '\0') {
                        FUN_00d50b00();
                        bVar4 = false;
                        if ((local_40 == '\0') || (local_48 == (longlong *)0x0)) goto LAB_00381ffa;
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
                    if (plVar15 != (longlong *)0x0) {
                      FUN_00b875e0();
                      local_40 = '\0';
                      local_48 = plVar15;
                      FUN_00d21140();
                      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
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
              unaff_R14 = (longlong *)(ulonglong)uVar9;
              if ((local_150 != '\0') && (local_158 != (undefined8 *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (puVar12 != (undefined8 *)0x0) {
                FUN_00d50b20();
              }
              if (plVar14 != (longlong *)0x0) {
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
  unaff_R14 = (longlong *)CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
LAB_003822e3:
  return (ulonglong)unaff_R14 & 0xffffff01;
code_r0x00381527:
  if (plVar14 != (longlong *)0x0) {
LAB_0038140e:
    FUN_00d50b20();
  }
  goto LAB_00381419;
}


