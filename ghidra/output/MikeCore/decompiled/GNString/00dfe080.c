// Function: FUN_00dfe080
// Address: 00dfe080
// Size: 5281 bytes
// Class: GNString
// String references:
//   "GNString"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_00dfe080(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  bool bVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  longlong **pplVar12;
  int iVar13;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar14;
  undefined8 uVar15;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  longlong local_1c8;
  undefined1 local_1c0;
  undefined8 *local_1b8;
  undefined1 local_1b0;
  longlong *local_1a8;
  undefined1 local_1a0;
  longlong local_198;
  undefined1 local_190;
  undefined8 *local_188;
  undefined1 local_180;
  undefined8 *local_178;
  undefined1 local_170;
  longlong local_168;
  double local_160;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong *local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong *local_f8;
  char local_f0;
  longlong *local_e0;
  char local_d8;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  int *local_90;
  longlong *local_88;
  longlong local_80;
  char local_78;
  longlong *local_70;
  undefined8 *local_68;
  longlong *local_60;
  char local_58;
  undefined8 *local_50;
  undefined8 local_48;
  int local_40;
  longlong *local_38;
  
  plVar7 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar7 = (longlong)&DAT_025848c0;
  *(undefined4 *)((longlong)plVar7 + 0x24) = 0;
  plVar7[5] = 0;
  *(undefined1 *)(plVar7 + 6) = 0;
  plVar7[7] = 0;
  *(undefined8 *)((longlong)plVar7 + 0xc) = 0;
  *(undefined8 *)((longlong)plVar7 + 0x14) = 0;
  *(undefined8 *)((longlong)plVar7 + 0x19) = 0;
  FUN_00d500e0();
  *(undefined4 *)((longlong)plVar7 + 0xc) = 0;
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
    plVar7 = (longlong *)*param_2;
    if (plVar7 == local_60) {
      if (((char)param_2[1] != '\0') || (local_60 == (longlong *)0x0)) {
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
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
        if (local_60 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        *param_2 = (longlong)plVar9;
        if (((char)lVar10 != '\0') && (plVar7 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        *param_2 = (longlong)local_60;
        if (((char)lVar10 != '\0') && (plVar7 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    *(undefined1 *)local_88 = 1;
  }
  else {
    *(undefined1 *)(local_38 + 6) = 1;
  }
LAB_00dfe1d9:
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &DAT_02572358;
  (*DAT_02572370)();
  plVar7 = (longlong *)FUN_00e8fc40();
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
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      plVar7 = local_60;
      if (local_58 == '\0') {
        if (local_60 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
      }
      else {
        FUN_00d50b20();
      }
    }
  }
  local_90 = (int *)((longlong)local_38 + 0xc);
  lVar10 = unaff_RSI[3];
  local_70 = plVar7;
  if ((lVar10 != 0) && (3 < *(int *)(lVar10 + 0x18))) {
    lVar14 = 0;
    local_168 = lVar10;
    do {
      iVar6 = *(int *)(*(longlong *)(local_168 + 0x10) + lVar14 * 4);
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
        if (((local_60 != (longlong *)0x0) && (uVar15 = FUN_00d50b00(), local_58 != '\0')) &&
           (local_60 != (longlong *)0x0)) {
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
      if (plVar7 != (longlong *)0x0) {
        *local_90 = iVar6;
        lVar10 = DAT_02787870;
        local_88 = plVar7;
        if (DAT_02787870 != 0) {
          uVar15 = FUN_00d50b00();
        }
        local_158 = lVar10;
        local_150 = '\x01';
        FUN_000175c0(uVar15,&local_158);
        plVar7 = local_60;
        if ((DAT_026fd0c0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
          _DAT_026d5e58 = FUN_00d4fe50();
          DAT_026d5e40 = "GNString";
          _DAT_026d5e48 = 0x40;
          _DAT_026d5e50 = FUN_0005d920;
          _DAT_026d5e60 = 0;
          uRam00000000026d5e68 = 0;
          _DAT_026d5e70 = 0;
          uRam00000000026d5e78 = 0;
          _DAT_026d5e80 = 0;
          uRam00000000026d5e88 = 0;
          _DAT_026d5e90 = 0;
          uRam00000000026d5e98 = 0;
          _DAT_026d5ea0 = 0;
          uRam00000000026d5ea8 = 0;
          _DAT_026d5eb0 = 0;
          uRam00000000026d5eb8 = 0;
          _DAT_026d5ec0 = 0;
          uRam00000000026d5ec8 = 0;
          _DAT_026d5ed0 = 0;
          uRam00000000026d5ed8 = 0;
          _DAT_026d5ee0 = 0;
          uRam00000000026d5ee8 = 0;
          _DAT_026d5ef0 = 0;
          uRam00000000026d5ef8 = 0;
          _DAT_026d5f00 = 0;
          ___cxa_guard_release();
        }
        pplVar12 = (longlong **)&DAT_02802688;
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x360))();
          cVar4 = FUN_00e85ea0();
          pplVar12 = &local_60;
          if (cVar4 == '\0') {
            pplVar12 = (longlong **)&DAT_02802688;
          }
        }
        plVar3 = local_88;
        plVar9 = (longlong *)local_38[2];
        plVar7 = *pplVar12;
        if (plVar9 != plVar7) {
          if (*(char *)(pplVar12 + 1) == '\0') {
            if (plVar7 == (longlong *)0x0) {
              local_38[2] = 0;
            }
            else {
              FUN_00d50b00();
              plVar9 = (longlong *)local_38[2];
              local_38[2] = (longlong)*pplVar12;
            }
          }
          else {
            *(undefined1 *)(pplVar12 + 1) = 0;
            local_38[2] = (longlong)plVar7;
          }
          if (plVar9 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
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
          cVar4 = (**(code **)(*unaff_RSI + 0x380))();
          lVar10 = DAT_02784aa8;
          if ((cVar4 == '\0') || ((char)unaff_RSI[10] == '\0')) {
            uVar15 = extraout_XMM0_Qa;
            if (DAT_02784aa8 != 0) {
              uVar15 = FUN_00d50b00();
            }
            local_148 = lVar10;
            local_140 = '\x01';
            uVar15 = FUN_000175c0(uVar15,&local_148);
            plVar7 = local_60;
            if (local_58 == '\0') {
              if (((local_60 != (longlong *)0x0) && (uVar15 = FUN_00d50b00(), local_58 != '\0')) &&
                 (local_60 != (longlong *)0x0)) {
                uVar15 = FUN_00d50b20();
              }
            }
            else {
              local_58 = '\0';
            }
            if ((local_140 != '\0') && (local_148 != 0)) {
              uVar15 = FUN_00d50b20();
            }
            if (plVar7 != (longlong *)0x0) {
              local_1a8 = plVar3;
              local_1a0 = 0;
              FUN_00dfd400(uVar15,&local_1a8);
              plVar9 = local_60;
              plVar7 = (longlong *)local_38[7];
              if (plVar7 != local_60) {
                if (local_60 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
                local_38[7] = (longlong)plVar9;
                if (plVar7 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
              }
              if ((local_58 != '\0') && (plVar9 != (longlong *)0x0)) {
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
            lVar10 = DAT_02784aa0;
            if (DAT_02784aa0 != 0) {
              uVar15 = FUN_00d50b00();
            }
            local_138 = lVar10;
            local_130 = '\x01';
            FUN_000175c0(uVar15,&local_138);
            plVar7 = local_60;
            if (local_58 == '\0') {
              if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
                 (local_60 != (longlong *)0x0)) {
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
            if (plVar7 == (longlong *)0x0) {
              iVar6 = 2;
            }
            else {
              *(undefined1 *)(local_38 + 4) = 1;
              local_128 = plVar7;
              local_120 = '\0';
              uVar5 = FUN_00c716c0();
              *(undefined4 *)((longlong)plVar9 + 0x24) = uVar5;
              if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((char)local_38[6] == '\0') {
                FUN_00d50b00();
                lVar10 = local_38[2];
                if (lVar10 != 0) {
                  FUN_00d50b00();
                }
                FUN_00e19720(DAT_02394dd8,1);
                plVar7 = (longlong *)local_38[5];
                plVar9 = plVar7;
                if (plVar7 != local_60) {
                  if (local_58 == '\0') {
                    if (local_60 == (longlong *)0x0) {
                      plVar9 = (longlong *)0x0;
                    }
                    else {
                      FUN_00d50b00();
                      plVar7 = (longlong *)local_38[5];
                      plVar9 = local_60;
                    }
                  }
                  else {
                    local_58 = '\0';
                    plVar9 = local_60;
                  }
                  local_38[5] = (longlong)plVar9;
                  if (plVar7 != (longlong *)0x0) {
                    FUN_00d50b20();
                    plVar9 = local_60;
                  }
                }
                if ((local_58 != '\0') && (plVar9 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (lVar10 != 0) {
                  FUN_00d50b20();
                }
                if (unaff_RSI != (longlong *)0x0) {
                  FUN_00d50b20();
                }
                FUN_00e34260();
                FUN_00e19880();
                plVar7 = local_60;
                if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar7 == (longlong *)0x0) goto LAB_00dfe989;
                FUN_00e19880();
                local_a0 = local_60;
                local_98 = 0;
                if (local_58 == '\0') {
                  if (local_60 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_58 = '\0';
                }
                local_98 = '\x01';
                FUN_00e63050();
                if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                *(undefined1 *)(local_38 + 6) = 1;
                FUN_00e19880();
                local_e0 = local_60;
                if (local_58 == '\0') {
                  if (local_60 != (longlong *)0x0) {
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
                if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                iVar6 = 1;
              }
              else {
                iVar6 = 2;
                if (*(int *)((longlong)local_38 + 0x24) == 0) {
                  *local_90 = 0;
LAB_00dfe989:
                  iVar6 = 3;
                }
              }
              FUN_00d50b20();
            }
          }
          else {
            *(undefined4 *)((longlong)local_38 + 0xc) = 0;
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
  iVar6 = *(int *)(unaff_RSI[3] + 0x18);
  iVar11 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar11 = iVar6;
  }
  iVar13 = -1;
  if (3 < iVar6) {
    lVar10 = 0;
    do {
      if (*(int *)(*(longlong *)(unaff_RSI[3] + 0x10) + lVar10 * 4) == *local_90) {
        iVar13 = (int)lVar10;
        if (((int)unaff_RSI[7] != -1) &&
           (bVar1 = true, puVar8 = local_68, plVar7 = local_38, iVar13 <= (int)unaff_RSI[7]))
        goto LAB_00dff222;
        bVar2 = true;
        bVar1 = true;
        plVar7 = (longlong *)unaff_RSI[6];
        goto joined_r0x00dfed88;
      }
      lVar10 = lVar10 + 1;
    } while (iVar11 >> 2 != (int)lVar10);
  }
  bVar2 = false;
  bVar1 = false;
  plVar7 = (longlong *)unaff_RSI[6];
joined_r0x00dfed88:
  if (plVar7 != (longlong *)0x0) {
    local_60 = (longlong *)0x0;
    iVar6 = (**(code **)(*plVar7 + 0x18))();
    bVar1 = bVar2;
    if (iVar6 != 0) {
      plVar7 = (longlong *)FUN_00e8fc40();
      FUN_00d4ff40();
      *plVar7 = (longlong)&DAT_025848c0;
      *(undefined4 *)((longlong)plVar7 + 0x24) = 0;
      plVar7[5] = 0;
      *(undefined1 *)(plVar7 + 6) = 0;
      plVar7[7] = 0;
      *(undefined8 *)((longlong)plVar7 + 0xc) = 0;
      *(undefined8 *)((longlong)plVar7 + 0x14) = 0;
      *(undefined8 *)((longlong)plVar7 + 0x19) = 0;
      FUN_00d500e0();
      *(int *)((longlong)plVar7 + 0xc) = iVar6;
      plVar7[3] = (longlong)local_60;
      iVar6 = *(int *)(unaff_RSI[3] + 0x18);
      iVar11 = iVar6 + 3;
      if (-1 < iVar6) {
        iVar11 = iVar6;
      }
      if (3 < iVar6) {
        lVar10 = 0;
        do {
          if (*(int *)(*(longlong *)(unaff_RSI[3] + 0x10) + lVar10 * 4) ==
              *(int *)((longlong)plVar7 + 0xc)) {
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
  lVar10 = DAT_02787870;
  puVar8 = local_68;
  if (!bVar1) {
    if (DAT_02787870 != 0) {
      FUN_00d50b00();
    }
    local_118 = lVar10;
    local_110 = '\x01';
    pplVar12 = &local_60;
    FUN_00e61ae0();
    plVar7 = local_60;
    if ((DAT_026fd0c0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
      _DAT_026d5e58 = FUN_00d4fe50();
      DAT_026d5e40 = "GNString";
      _DAT_026d5e48 = 0x40;
      _DAT_026d5e50 = FUN_0005d920;
      _DAT_026d5e60 = 0;
      uRam00000000026d5e68 = 0;
      _DAT_026d5e70 = 0;
      uRam00000000026d5e78 = 0;
      _DAT_026d5e80 = 0;
      uRam00000000026d5e88 = 0;
      _DAT_026d5e90 = 0;
      uRam00000000026d5e98 = 0;
      _DAT_026d5ea0 = 0;
      uRam00000000026d5ea8 = 0;
      _DAT_026d5eb0 = 0;
      uRam00000000026d5eb8 = 0;
      _DAT_026d5ec0 = 0;
      uRam00000000026d5ec8 = 0;
      _DAT_026d5ed0 = 0;
      uRam00000000026d5ed8 = 0;
      _DAT_026d5ee0 = 0;
      uRam00000000026d5ee8 = 0;
      _DAT_026d5ef0 = 0;
      uRam00000000026d5ef8 = 0;
      _DAT_026d5f00 = 0;
      ___cxa_guard_release();
    }
    if (plVar7 == (longlong *)0x0) {
LAB_00dfed4a:
      pplVar12 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar7 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_00dfed4a;
    }
    plVar7 = *pplVar12;
    if (*(char *)(pplVar12 + 1) == '\0') {
      if (plVar7 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar12 + 1) = 0;
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_110 != '\0') && (local_118 != 0)) {
      FUN_00d50b20();
    }
    if (plVar7 != (longlong *)0x0) {
      local_58 = '\0';
      local_60 = plVar7;
      cVar4 = FUN_00d23d70();
      uVar15 = extraout_XMM0_Qa_00;
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        uVar15 = FUN_00d50b20();
      }
      if (cVar4 == '\0') {
        local_58 = '\0';
        local_60 = plVar7;
        FUN_00d23370(uVar15,0);
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
    if ((char)local_38[6] == '\0') {
      lVar10 = unaff_RSI[3];
      puVar8 = local_68;
      if (lVar10 != 0) {
        if (3 < *(int *)(lVar10 + 0x18)) {
          lVar14 = 0;
          do {
            uVar5 = *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + lVar14 * 4);
            cVar4 = (**(code **)(*unaff_RSI + 0x380))();
            if (cVar4 == '\0') {
              local_188 = local_68;
              local_180 = 0;
              FUN_00dfd950(uVar5,&local_188);
              plVar7 = local_60;
              if (local_58 == '\0') {
                if (local_60 != (longlong *)0x0) {
                  FUN_00d50b00();
                  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_00dff49b;
                }
              }
              else if (local_60 != (longlong *)0x0) goto LAB_00dff49b;
            }
            iVar6 = *(int *)(lVar10 + 0x18);
            iVar11 = iVar6 + 3;
            if (-1 < iVar6) {
              iVar11 = iVar6;
            }
            lVar14 = lVar14 + 1;
          } while ((int)lVar14 < iVar11 >> 2);
        }
        lVar10 = unaff_RSI[3];
        puVar8 = local_68;
        if (lVar10 != 0) {
          if (3 < *(int *)(lVar10 + 0x18)) {
            lVar14 = 0;
LAB_00dfef6c:
            uVar5 = *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + lVar14 * 4);
            cVar4 = (**(code **)(*unaff_RSI + 0x380))();
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
              if (local_60 != (longlong *)0x0) goto LAB_00dff49b;
              goto LAB_00dfef50;
            }
            if (local_60 == (longlong *)0x0) goto LAB_00dfef50;
            FUN_00d50b00();
            if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_00dff49b:
            *(undefined1 *)(plVar7 + 6) = 1;
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
      plVar7 = (longlong *)unaff_RSI[3];
      puVar8 = local_68;
      if (plVar7 != (longlong *)0x0) {
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
          if (puVar8 != (undefined8 *)0x0) {
            iVar11 = *(int *)(plVar7[2] + (longlong)iVar6 * 4);
            local_58 = '\0';
            local_60 = (longlong *)0x0;
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
            lVar10 = (longlong)(int)local_48;
            iVar13 = (int)local_48 + 1;
            local_48 = CONCAT44(local_48._4_4_,iVar13);
            if (*(int *)((longlong)local_50 + 0xc) <= iVar13) goto LAB_00dff02b;
            local_60 = *(longlong **)(local_50[2] + 8 + lVar10 * 8);
            cVar4 = (**(code **)(*unaff_RSI + 0x380))();
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
            if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (lVar10 == 0) goto LAB_00dff0a0;
            iVar13 = FUN_00d28390();
            if (iVar13 != iVar11) {
              FUN_00d50b20();
              goto LAB_00dff0a0;
            }
            plVar7 = (longlong *)local_38[2];
            if (plVar7 != local_60) {
              if (local_58 == '\0') {
                if (local_60 == (longlong *)0x0) {
                  local_38[2] = 0;
                }
                else {
                  FUN_00d50b00();
                  plVar7 = (longlong *)local_38[2];
                  local_38[2] = (longlong)local_60;
                }
              }
              else {
                local_58 = '\0';
                local_38[2] = (longlong)local_60;
              }
              if (plVar7 != (longlong *)0x0) {
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
    if ((local_38[2] == 0) && (plVar7 = (longlong *)unaff_RSI[3], plVar7 != (longlong *)0x0)) {
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
        if (puVar8 != (undefined8 *)0x0) {
          iVar11 = *(int *)(plVar7[2] + (longlong)iVar6 * 4);
          local_58 = '\0';
          local_60 = (longlong *)0x0;
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
          lVar10 = (longlong)(int)local_48;
          iVar13 = (int)local_48 + 1;
          local_48 = CONCAT44(local_48._4_4_,iVar13);
          if (*(int *)((longlong)local_50 + 0xc) <= iVar13) goto LAB_00dff29c;
          local_60 = *(longlong **)(local_50[2] + 8 + lVar10 * 8);
          cVar4 = (**(code **)(*unaff_RSI + 0x380))();
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
          if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (lVar10 == 0) goto LAB_00dff310;
          iVar13 = FUN_00d28390();
          if (iVar13 != iVar11) {
            FUN_00d50b20();
            goto LAB_00dff310;
          }
          plVar7 = (longlong *)local_38[2];
          if (plVar7 != local_60) {
            if (local_58 == '\0') {
              if (local_60 == (longlong *)0x0) {
                plVar9 = (longlong *)0x0;
              }
              else {
                FUN_00d50b00();
                plVar7 = (longlong *)local_38[2];
                plVar9 = local_60;
              }
            }
            else {
              local_58 = '\0';
              plVar9 = local_60;
            }
            local_38[2] = (longlong)plVar9;
            if (plVar7 != (longlong *)0x0) {
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
  *unaff_RDI = plVar7;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  plVar7 = local_38;
joined_r0x00dfeff8:
  local_38 = plVar7;
  if (local_70 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (puVar8 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar1 && plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


