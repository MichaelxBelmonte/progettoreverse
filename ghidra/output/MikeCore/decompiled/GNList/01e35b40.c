// Function: FUN_01e35b40
// Address: 01e35b40
// Size: 5147 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01e368d4) */
/* WARNING: Removing unreachable block (ram,0x01e368e0) */
/* WARNING: Removing unreachable block (ram,0x01e368fc) */
/* WARNING: Removing unreachable block (ram,0x01e36908) */

void FUN_01e35b40(void)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  char *pcVar4;
  longlong **pplVar5;
  int iVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *local_1c0;
  char local_1b8;
  longlong *local_1b0;
  char local_1a8;
  longlong *local_1a0;
  char local_198;
  longlong *local_190;
  char local_188;
  longlong *local_180;
  char local_178;
  longlong *local_170;
  char local_168;
  longlong *local_160;
  char local_158;
  longlong *local_150;
  char local_148;
  longlong *local_140;
  char local_138;
  longlong *local_130;
  char local_128;
  longlong *local_120;
  char local_118;
  longlong *local_110;
  char local_108;
  longlong *local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_98;
  char local_90 [8];
  longlong *local_88;
  undefined8 local_80;
  int local_78;
  longlong *local_70;
  char local_68 [8];
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  char local_48;
  undefined7 uStack_47;
  char local_40;
  
  FUN_00d3ecc0();
  plVar1 = local_70;
  lVar8 = DAT_027f3858;
  if (DAT_027f3858 != 0) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*plVar1 + 0x50))();
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    FUN_00d3ed20();
    lVar8 = DAT_0277e650;
    if (DAT_0277e650 != 0) {
      FUN_00d50b00();
    }
    FUN_000175c0();
    plVar1 = local_70;
    if (local_68[0] == '\0') {
      if (((local_70 != (longlong *)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
         (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68[0] = '\0';
    }
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    if ((local_90[0] != '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d3ed20();
    lVar8 = DAT_027f38c0;
    if (DAT_027f38c0 != 0) {
      FUN_00d50b00();
    }
    FUN_000175c0();
    plVar9 = local_70;
    if (local_68[0] == '\0') {
      if (((local_70 != (longlong *)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
         (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68[0] = '\0';
    }
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    if ((local_90[0] != '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar3 = (longlong *)FUN_00e8fc40();
    FUN_00d4ff40();
    *plVar3 = (longlong)&DAT_02572358;
    (*DAT_02572370)();
    FUN_00c9fe20();
    plVar7 = local_70;
    pplVar5 = (longlong **)local_68;
    if (local_68[0] == '\0') {
      pplVar5 = &local_98;
    }
    local_98 = (longlong *)CONCAT71(local_98._1_7_,local_68[0]);
    *(undefined1 *)pplVar5 = 0;
    if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)local_98 == '\0') {
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_98 = (longlong *)((ulonglong)local_98 & 0xffffffffffffff00);
    }
    local_68[0] = '\0';
    FUN_00d243f0();
    if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar7 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    local_68[0] = '\0';
    local_70 = (longlong *)0x0;
    local_50 = 0;
    local_58 = 0;
    local_60 = plVar3;
    if (0 < *(int *)((longlong)plVar3 + 0xc)) {
      lVar8 = 0;
      do {
        local_70 = *(longlong **)(plVar3[2] + lVar8 * 8);
        FUN_00c9fe40();
        plVar7 = local_98;
        local_48 = local_90[0];
        pcVar4 = local_90;
        if (local_90[0] == '\0') {
          pcVar4 = &local_48;
        }
        *pcVar4 = '\0';
        if ((local_90[0] != '\0') && (local_98 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        cVar2 = (**(code **)(*plVar7 + 0x50))();
        if (local_48 != '\0') {
          FUN_00d50b20();
        }
        if (cVar2 != '\0') {
          FUN_01e34de0();
        }
        lVar8 = lVar8 + 1;
        local_58 = CONCAT44(local_58._4_4_,(int)lVar8);
      } while ((int)lVar8 < *(int *)((longlong)plVar3 + 0xc));
    }
    FUN_00083b20();
    FUN_00d50b20();
    if (plVar9 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    goto LAB_01e36ef4;
  }
  FUN_00d3ecc0();
  plVar1 = local_70;
  lVar8 = DAT_0277e658;
  if (DAT_0277e658 != 0) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*plVar1 + 0x50))();
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') goto LAB_01e36ef4;
  FUN_00d3ed20();
  lVar8 = DAT_0277e650;
  if (DAT_0277e650 != 0) {
    FUN_00d50b00();
  }
  FUN_000175c0();
  plVar1 = local_70;
  if (local_68[0] == '\0') {
    if (((local_70 != (longlong *)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
       (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68[0] = '\0';
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if ((local_90[0] != '\0') && (local_98 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d3ecf0();
  FUN_00d74120();
  plVar9 = local_70;
  if (local_68[0] == '\0') {
    if (((local_70 != (longlong *)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
       (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68[0] = '\0';
  }
  if ((local_90[0] != '\0') && (local_98 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_c8 = plVar9;
  FUN_00d3ecf0();
  FUN_00d744f0();
  plVar7 = local_70;
  if (local_68[0] == '\0') {
    if (((local_70 != (longlong *)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
       (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68[0] = '\0';
  }
  if ((local_90[0] != '\0') && (local_98 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_c0 = plVar7;
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  if (*(longlong **)(unaff_RDI + 0x28) == (longlong *)0x0) {
LAB_01e369c0:
    local_90[0] = '\0';
    local_98 = (longlong *)0x0;
    local_88 = (longlong *)plVar3[2];
    local_80 = local_80 & 0xffffffff00000000;
    if (0 < *(int *)((longlong)local_88 + 0xc)) {
      iVar6 = 0;
      do {
        plVar9 = *(longlong **)(local_88[2] + (longlong)iVar6 * 8);
        local_98 = plVar9;
        FUN_00204df0();
        pplVar5 = (longlong **)&DAT_02802688;
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x360))();
          cVar2 = FUN_00e85ea0();
          pplVar5 = &local_98;
          if (cVar2 == '\0') {
            pplVar5 = (longlong **)&DAT_02802688;
          }
        }
        plVar9 = *pplVar5;
        if (*(char *)(pplVar5 + 1) == '\0') {
          if (plVar9 == (longlong *)0x0) goto LAB_01e36b00;
          FUN_00d50b00();
LAB_01e36abd:
          FUN_01e37eb0();
          plVar7 = local_70;
          if (local_68[0] == '\0') {
            if (local_70 != (longlong *)0x0) {
              FUN_00d50b00();
              if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_01e36bb0;
            }
          }
          else if (local_70 != (longlong *)0x0) {
LAB_01e36bb0:
            (**(code **)(*plVar9 + 0x3b8))();
            plVar9 = local_70;
            if (local_68[0] == '\0') {
              if (local_70 != (longlong *)0x0) {
                FUN_00d50b00();
                if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_01e36c00;
              }
            }
            else if (local_70 != (longlong *)0x0) {
LAB_01e36c00:
              (**(code **)(*plVar9 + 0x448))();
              plVar9 = local_70;
              if (local_68[0] == '\0') {
                if (local_70 != (longlong *)0x0) {
                  FUN_00d50b00();
                  if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_01e36cce;
                }
              }
              else if (local_70 != (longlong *)0x0) {
LAB_01e36cce:
                local_68[0] = '\0';
                local_70 = (longlong *)0x0;
                local_60 = plVar9;
                local_58 = 0xffffffff;
                local_50 = 0;
                local_58._4_4_ = 0;
                while( true ) {
                  if (local_58._4_4_ != 0) {
                    if (local_58._4_4_ < 1) {
                      iVar6 = -local_58._4_4_;
                    }
                    else {
                      iVar6 = (int)local_58 - local_58._4_4_;
                      local_58 = CONCAT44(local_58._4_4_,iVar6);
                      FUN_00d23690();
                      local_50 = local_50 + local_58._4_4_;
                      iVar6 = 0;
                    }
                    local_58 = CONCAT44(iVar6,(int)local_58);
                  }
                  lVar8 = (longlong)(int)local_58;
                  iVar6 = (int)local_58 + 1;
                  local_58 = CONCAT44(local_58._4_4_,iVar6);
                  if (*(int *)((longlong)local_60 + 0xc) <= iVar6) break;
                  local_120 = *(longlong **)(local_60[2] + 8 + lVar8 * 8);
                  local_118 = '\0';
                  local_70 = local_120;
                  FUN_01cc98b0(local_60[2],&local_120);
                  lVar8 = CONCAT71(uStack_47,local_48);
                  if (local_40 == '\0') {
                    if (((lVar8 != 0) && (FUN_00d50b00(), local_40 != '\0')) &&
                       (CONCAT71(uStack_47,local_48) != 0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    local_40 = '\0';
                  }
                  if ((local_118 != '\0') && (local_120 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (lVar8 != 0) {
                    FUN_01cc79e0();
                    local_110 = plVar7;
                    local_108 = '\0';
                    cVar2 = (**(code **)(*(longlong *)CONCAT71(uStack_47,local_48) + 0x50))();
                    if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
                      FUN_00d50b20();
                    }
                    if (cVar2 != '\0') {
                      local_100 = local_c8;
                      local_f8 = '\0';
                      FUN_01cc7990();
                      if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    FUN_00d50b20();
                  }
                }
                FUN_00018280();
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        else {
          *(undefined1 *)(pplVar5 + 1) = 0;
          if (plVar9 != (longlong *)0x0) goto LAB_01e36abd;
LAB_01e36b00:
          local_f0 = local_c8;
          local_e8 = '\0';
          (**(code **)(*local_98 + 0x378))();
          if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*local_98 + 0x370))();
          lVar8 = CONCAT71(uStack_47,local_48);
          if (local_40 == '\0') {
            if (lVar8 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          FUN_01e352b0();
          plVar9 = local_70;
          if ((local_68[0] == '\0') && (local_70 != (longlong *)0x0)) {
            FUN_00d50b00();
          }
          if (lVar8 != 0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
            FUN_00d50b20();
          }
          if (plVar9 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
        plVar7 = local_c0;
        plVar9 = local_c8;
        iVar6 = (int)local_80 + 1;
        local_80 = CONCAT44(local_80._4_4_,iVar6);
      } while (iVar6 < *(int *)((longlong)local_88 + 0xc));
      if ((local_90[0] != '\0') && (local_98 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  else {
    local_68[0] = '\0';
    local_70 = (longlong *)0x0;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    local_60 = *(longlong **)(unaff_RDI + 0x28);
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar6 = -local_58._4_4_;
        }
        else {
          iVar6 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar6);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar6 = 0;
        }
        local_58 = CONCAT44(iVar6,(int)local_58);
      }
      lVar8 = (longlong)(int)local_58;
      iVar6 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar6);
      if (*(int *)((longlong)local_60 + 0xc) <= iVar6) break;
      plVar9 = *(longlong **)(local_60[2] + 8 + lVar8 * 8);
      local_70 = plVar9;
      FUN_00204df0();
      pplVar5 = (longlong **)&DAT_02802688;
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar5 = &local_70;
        if (cVar2 == '\0') {
          pplVar5 = (longlong **)&DAT_02802688;
        }
      }
      plVar9 = *pplVar5;
      if (*(char *)(pplVar5 + 1) == '\0') {
        if (plVar9 == (longlong *)0x0) goto LAB_01e360f0;
        FUN_00d50b00();
LAB_01e360b4:
        local_d0 = plVar9;
        (**(code **)(*plVar9 + 0x3b8))();
        plVar9 = local_98;
        if (local_90[0] == '\0') {
          if (local_98 != (longlong *)0x0) {
            FUN_00d50b00();
            if ((local_90[0] != '\0') && (local_98 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01e36210;
          }
        }
        else if (local_98 != (longlong *)0x0) {
LAB_01e36210:
          (**(code **)(*plVar9 + 0x448))();
          plVar9 = local_98;
          if (local_90[0] == '\0') {
            if (local_98 != (longlong *)0x0) {
              FUN_00d50b00();
              if ((local_90[0] != '\0') && (local_98 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_01e36270;
            }
          }
          else if (local_98 != (longlong *)0x0) {
LAB_01e36270:
            local_90[0] = '\0';
            local_98 = (longlong *)0x0;
            local_88 = plVar9;
            local_80 = 0xffffffff;
            local_78 = 0;
            local_80._4_4_ = 0;
            while( true ) {
              if (local_80._4_4_ != 0) {
                if (local_80._4_4_ < 1) {
                  iVar6 = -local_80._4_4_;
                }
                else {
                  iVar6 = (int)local_80 - local_80._4_4_;
                  local_80 = CONCAT44(local_80._4_4_,iVar6);
                  FUN_00d23690();
                  local_78 = local_78 + local_80._4_4_;
                  iVar6 = 0;
                }
                local_80 = CONCAT44(iVar6,(int)local_80);
              }
              lVar8 = (longlong)(int)local_80;
              iVar6 = (int)local_80 + 1;
              local_80 = CONCAT44(local_80._4_4_,iVar6);
              if (*(int *)((longlong)local_88 + 0xc) <= iVar6) break;
              local_1c0 = *(longlong **)(local_88[2] + 8 + lVar8 * 8);
              local_1b8 = '\0';
              local_98 = local_1c0;
              FUN_01ccaae0(local_88[2],&local_1c0);
              lVar8 = CONCAT71(uStack_47,local_48);
              if (local_40 == '\0') {
                if (((lVar8 != 0) && (FUN_00d50b00(), local_40 != '\0')) &&
                   (CONCAT71(uStack_47,local_48) != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_40 = '\0';
              }
              if ((local_1b8 != '\0') && (local_1c0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              local_1b0 = local_98;
              local_1a8 = '\0';
              FUN_01ccab60();
              plVar9 = (longlong *)CONCAT71(uStack_47,local_48);
              if (local_40 == '\0') {
                if (((plVar9 != (longlong *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
                   (CONCAT71(uStack_47,local_48) != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_40 = '\0';
              }
              if ((local_1a8 != '\0') && (local_1b0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((plVar9 != (longlong *)0x0) && (lVar8 != 0)) {
                local_198 = '\0';
                local_1a0 = plVar1;
                cVar2 = (**(code **)(*plVar9 + 0x50))();
                if (cVar2 == '\0') {
                  cVar2 = '\0';
                }
                else {
                  FUN_01d25f70();
                  local_190 = local_c0;
                  local_188 = '\0';
                  cVar2 = (**(code **)(*(longlong *)CONCAT71(uStack_47,local_48) + 0x50))();
                  if ((local_188 != '\0') && (local_190 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_198 != '\0') && (local_1a0 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (cVar2 != '\0') {
                  local_180 = plVar1;
                  local_178 = '\0';
                  local_170 = local_70;
                  local_168 = '\0';
                  FUN_01e37e00();
                  if ((local_168 != '\0') && (local_170 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_178 != '\0') && (local_180 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
              }
              if (plVar9 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              if (lVar8 != 0) {
                FUN_00d50b20();
              }
            }
            FUN_00018280();
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      else {
        *(undefined1 *)(pplVar5 + 1) = 0;
        if (plVar9 != (longlong *)0x0) goto LAB_01e360b4;
LAB_01e360f0:
        (**(code **)(*local_70 + 0x380))();
        plVar9 = local_98;
        if ((local_90[0] != '\0') && (local_98 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*local_70 + 0x380))();
          local_160 = plVar1;
          local_158 = '\0';
          cVar2 = (**(code **)(*local_98 + 0x50))();
          if ((local_158 != '\0') && (local_160 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_90[0] != '\0') && (local_98 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar2 != '\0') {
            (**(code **)(*local_70 + 0x370))();
            lVar8 = CONCAT71(uStack_47,local_48);
            if (local_40 == '\0') {
              if (lVar8 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_40 = '\0';
            }
            FUN_01e352b0();
            plVar9 = local_98;
            if ((local_90[0] != '\0') && (local_98 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (lVar8 != 0) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
              FUN_00d50b20();
            }
            if (plVar9 == local_c0) {
              local_150 = plVar1;
              local_148 = '\0';
              FUN_00c84370();
              plVar9 = local_98;
              if (local_90[0] == '\0') {
                if (((local_98 != (longlong *)0x0) && (FUN_00d50b00(), local_90[0] != '\0')) &&
                   (local_98 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_90[0] = '\0';
              }
              if ((local_148 != '\0') && (local_150 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar9 != (longlong *)0x0) {
                local_140 = plVar1;
                local_138 = '\0';
                local_130 = local_70;
                local_128 = '\0';
                FUN_01e37e00();
                if ((local_128 != '\0') && (local_130 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_138 != '\0') && (local_140 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_00d50b20();
              }
            }
          }
        }
      }
    }
    FUN_01e39430();
    plVar7 = local_c0;
    plVar9 = local_c8;
    if (plVar3 != (longlong *)0x0) goto LAB_01e369c0;
  }
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar9 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_01e36ef4:
  local_e0 = *unaff_RSI;
  local_d8 = '\0';
  FUN_00d530a0();
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  return;
}


