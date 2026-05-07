// Function: FUN_00d07ad0
// Address: 00d07ad0
// Size: 4521 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x00d08808) */
/* WARNING: Removing unreachable block (ram,0x00d08818) */
/* WARNING: Removing unreachable block (ram,0x00d08aa0) */
/* WARNING: Removing unreachable block (ram,0x00d08aac) */
/* WARNING: Removing unreachable block (ram,0x00d084ba) */
/* WARNING: Removing unreachable block (ram,0x00d084c6) */
/* WARNING: Removing unreachable block (ram,0x00d07ca8) */
/* WARNING: Removing unreachable block (ram,0x00d07cb4) */
/* WARNING: Removing unreachable block (ram,0x00d07d04) */
/* WARNING: Removing unreachable block (ram,0x00d07d10) */
/* WARNING: Removing unreachable block (ram,0x00d07d7c) */
/* WARNING: Removing unreachable block (ram,0x00d07d88) */
/* WARNING: Removing unreachable block (ram,0x00d07efc) */
/* WARNING: Removing unreachable block (ram,0x00d07f08) */
/* WARNING: Removing unreachable block (ram,0x00d0802e) */
/* WARNING: Removing unreachable block (ram,0x00d0803e) */
/* WARNING: Removing unreachable block (ram,0x00d086db) */
/* WARNING: Removing unreachable block (ram,0x00d086e7) */
/* WARNING: Removing unreachable block (ram,0x00d0893e) */
/* WARNING: Removing unreachable block (ram,0x00d0894a) */
/* WARNING: Removing unreachable block (ram,0x00d08be1) */
/* WARNING: Removing unreachable block (ram,0x00d08bed) */
/* WARNING: Removing unreachable block (ram,0x00d07f16) */
/* WARNING: Removing unreachable block (ram,0x00d07f22) */
/* WARNING: Removing unreachable block (ram,0x00d08586) */
/* WARNING: Removing unreachable block (ram,0x00d08596) */

undefined8 * FUN_00d07ad0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  char *pcVar6;
  longlong *plVar7;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined7 uVar11;
  bool bVar12;
  bool bVar13;
  undefined8 *local_108;
  char local_e0;
  undefined7 uStack_df;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  undefined8 local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 *local_80;
  char local_78;
  undefined7 uStack_77;
  char local_70;
  ulonglong local_68;
  ulonglong local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_00d216c0();
  FUN_00e38430();
  FUN_00d216c0();
  FUN_00d7a2d0();
  FUN_00e38430();
  local_a0 = param_2;
  cVar1 = FUN_00d099c0();
  if (cVar1 == '\0') {
    local_108 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *local_108 = &DAT_02572358;
    (*DAT_02572370)();
    plVar3 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar3 + 0x18))();
    local_90 = plVar3;
    local_80 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *local_80 = &DAT_02578b00;
    (*DAT_02578b18)();
    FUN_00d09d20();
    plVar3 = local_48;
    if ((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    FUN_019b43b0();
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d21140();
    uVar10 = *(ulonglong *)(unaff_RSI + 0x48);
    plVar3 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar3 + 0x18))();
    FUN_00d09fc0();
    bVar13 = true;
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    lVar4 = *(longlong *)(unaff_RSI + 0x28);
    local_60 = 0;
    local_58 = (longlong *)0x0;
    do {
      if (*(int *)(lVar4 + 0xc) < 1) break;
      lVar9 = 0;
      uVar10 = 0;
      do {
        lVar4 = *(longlong *)(lVar4 + 0x10);
        plVar3 = *(longlong **)(lVar4 + lVar9 * 8);
        if (local_58 == plVar3) {
          if (((char)local_60 == '\0') && (local_58 != (longlong *)0x0)) {
            local_60 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
            FUN_00d50b00();
          }
        }
        else {
          if (plVar3 != (longlong *)0x0) {
            lVar4 = FUN_00d50b00();
          }
          if (((char)local_60 == '\0') || (local_58 == (longlong *)0x0)) {
            local_60 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
            local_58 = plVar3;
          }
          else {
            local_58 = plVar3;
            uVar5 = FUN_00d50b20();
            local_60 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
          }
        }
        cVar1 = FUN_00d7a850();
        if (cVar1 == '\0') {
          FUN_00d0a070();
          bVar12 = local_48 != (longlong *)0x0;
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar12 = false;
        }
        if (bVar12) {
          FUN_00d4efa0();
          plVar3 = local_48;
          local_38[0] = local_40[0];
          pcVar6 = local_40;
          if (local_40[0] == '\0') {
            pcVar6 = local_38;
          }
          *pcVar6 = '\0';
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_40[0] = '\0';
          cVar1 = FUN_00d7a850();
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar1 == '\0') {
            local_40[0] = '\0';
            local_48 = plVar3;
            FUN_00d7a410();
            if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar3 == (longlong *)0x0) goto LAB_00d07fc8;
            do {
              iVar2 = FUN_00c811b0();
              if (iVar2 != 0) {
                FUN_00c7e7b0();
                plVar8 = (longlong *)CONCAT71(uStack_77,local_78);
                if (local_70 == '\0') {
                  if (plVar8 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_70 = '\0';
                }
                local_40[0] = '\0';
                local_48 = plVar8;
                cVar1 = FUN_00c9ff50();
                if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar8 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_70 != '\0') && (CONCAT71(uStack_77,local_78) != 0)) {
                  FUN_00d50b20();
                }
                if (cVar1 == '\0') {
                  FUN_00c811b0();
                  FUN_00d46530();
                  lVar4 = CONCAT71(uStack_77,local_78);
                  if (local_70 == '\0') {
                    if (lVar4 != 0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_70 = '\0';
                  }
                  FUN_00c7e7b0();
                  plVar8 = (longlong *)CONCAT71(uStack_df,local_e0);
                  if (local_d8 == '\0') {
                    if (plVar8 != (longlong *)0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_d8 = '\0';
                  }
                  local_40[0] = '\0';
                  local_48 = plVar8;
                  FUN_00ca0840();
                  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (plVar8 != (longlong *)0x0) {
                    FUN_00d50b20();
                  }
                  if ((local_d8 != '\0') && (CONCAT71(uStack_df,local_e0) != 0)) {
                    FUN_00d50b20();
                  }
                  if (lVar4 != 0) {
                    FUN_00d50b20();
                  }
                  if ((local_70 != '\0') && (CONCAT71(uStack_77,local_78) != 0)) {
                    FUN_00d50b20();
                  }
                }
              }
              FUN_00c80a40();
              plVar8 = local_48;
              if (local_48 == plVar3) {
                if (((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) &&
                   (plVar8 = plVar3, local_40[0] != '\0')) goto LAB_00d08267;
              }
              else {
                if (local_40[0] == '\0') {
                  if (local_38[0] == '\0') {
                    pcVar6 = local_38;
                  }
                  else {
                    FUN_00d50b20();
                    pcVar6 = local_38;
                  }
                }
                else {
                  if (local_38[0] != '\0') {
                    FUN_00d50b20();
                  }
LAB_00d08267:
                  local_38[0] = '\x01';
                  pcVar6 = local_40;
                }
                *pcVar6 = '\0';
                plVar3 = plVar8;
              }
              if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            } while (plVar3 != (longlong *)0x0);
          }
          else {
LAB_00d07fc8:
            if ((local_38[0] != '\0') && (plVar3 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          plVar3 = local_58;
          FUN_00d0a120();
          FUN_00d7a410();
          uVar10 = CONCAT71((int7)((ulonglong)plVar3 >> 8),1);
        }
        lVar9 = lVar9 + 1;
        lVar4 = *(longlong *)(unaff_RSI + 0x28);
      } while (lVar9 < *(int *)(lVar4 + 0xc));
    } while ((uVar10 & 1) != 0);
    if (*(char *)(unaff_RSI + 0x70) == '\0') {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = (longlong *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar3 + 0x18))();
      lVar4 = *(longlong *)(unaff_RSI + 0x28);
      if (0 < *(int *)(lVar4 + 0xc)) {
        lVar9 = 0;
        plVar8 = (longlong *)0x0;
        local_68 = 0;
        local_50 = plVar3;
        do {
          lVar4 = *(longlong *)(lVar4 + 0x10);
          plVar3 = *(longlong **)(lVar4 + lVar9 * 8);
          if (local_58 == plVar3) {
            if (((char)local_60 == '\0') && (local_58 != (longlong *)0x0)) {
              local_60 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
              uVar10 = 0;
              FUN_00d50b00();
            }
          }
          else {
            if (plVar3 != (longlong *)0x0) {
              uVar10 = local_60 & 0xffffffff;
              lVar4 = FUN_00d50b00();
            }
            if (((char)local_60 == '\0') || (local_58 == (longlong *)0x0)) {
              local_60 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
              local_58 = plVar3;
            }
            else {
              uVar10 = local_60 & 0xffffffff;
              local_58 = plVar3;
              uVar5 = FUN_00d50b20();
              local_60 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
            }
          }
          cVar1 = FUN_00d7a850();
          if (cVar1 == '\0') {
            (**(code **)(*local_58 + 0x60))();
            plVar3 = local_48;
            uVar11 = (undefined7)(uVar10 >> 8);
            if (local_48 == plVar8) {
              if (((char)local_68 == '\0') && (local_48 != (longlong *)0x0)) {
                plVar3 = plVar8;
                if (local_40[0] != '\0') goto LAB_00d08446;
                uVar10 = CONCAT71(uVar11,1);
                FUN_00d50b00();
              }
              else {
                uVar10 = local_68 & 0xffffffff;
              }
            }
            else {
              if (local_40[0] == '\0') {
                if (local_48 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
                uVar10 = CONCAT71(uVar11,1);
                if (((char)local_68 != '\0') && (plVar8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                  plVar8 = plVar3;
                  goto LAB_00d08490;
                }
              }
              else {
                if (((char)local_68 != '\0') && (plVar8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
LAB_00d08446:
                local_40[0] = '\0';
              }
              uVar10 = CONCAT71(uVar11,1);
              plVar8 = plVar3;
            }
LAB_00d08490:
            bVar13 = plVar8 != (longlong *)0x0;
            if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            local_68 = uVar10 & 0xffffffff;
          }
          else {
            bVar13 = false;
          }
          if ((bVar13) && (cVar1 = (**(code **)(*plVar8 + 0x380))(), cVar1 == '\0')) {
            FUN_00d0b040();
            plVar3 = local_48;
            if ((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b00();
            }
            FUN_00ca0840();
            if (plVar3 != (longlong *)0x0) {
              FUN_00d50b20();
            }
          }
          lVar9 = lVar9 + 1;
          lVar4 = *(longlong *)(unaff_RSI + 0x28);
        } while (lVar9 < *(int *)(lVar4 + 0xc));
        bVar12 = false;
        bVar13 = false;
        plVar3 = local_50;
        goto LAB_00d085d8;
      }
      bVar13 = false;
    }
    bVar12 = false;
    local_68 = 0;
    plVar8 = (longlong *)0x0;
  }
  else {
    bVar13 = true;
    local_80 = (undefined8 *)0x0;
    bVar12 = true;
    local_90 = (longlong *)0x0;
    local_108 = (undefined8 *)0x0;
    local_68 = 0;
    plVar8 = (longlong *)0x0;
    local_60 = 0;
    local_58 = (longlong *)0x0;
    plVar3 = (longlong *)0x0;
  }
LAB_00d085d8:
  plVar7 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar7 + 0x18))();
  local_98 = plVar7;
  if (local_90 != (longlong *)0x0) {
    FUN_00ca1380();
    plVar7 = local_48;
    pcVar6 = &local_78;
    if (local_40[0] != '\0') {
      pcVar6 = local_40;
    }
    local_78 = local_40[0];
    *pcVar6 = '\0';
    if ((local_40[0] != '\0') && (plVar7 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    iVar2 = *(int *)((longlong)plVar7 + 0xc);
    if ((local_78 != '\0') && (plVar7 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar7 = DAT_0277c868;
    if (iVar2 != 0) {
      if (DAT_0277c868 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_48 = plVar7;
      local_40[0] = '\0';
      FUN_00ca0840();
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar7 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  if ((*(longlong *)(*(longlong *)(unaff_RSI + 0x48) + 0x10) == 0) ||
     (iVar2 = FUN_00c8d620(), iVar2 == 0)) {
    lVar4 = DAT_027e7c20;
    if (DAT_027e7c20 != 0) {
      FUN_00d50b00();
    }
    local_48 = (longlong *)lVar4;
    local_40[0] = '\0';
    FUN_00ca0840();
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  else if (*(char *)(unaff_RSI + 0x71) == '\0') {
    FUN_00d0be30();
    local_b8 = 0;
    local_c0 = CONCAT71(uStack_77,local_78);
    if (local_70 == '\0') {
      if (local_c0 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = '\0';
    }
    local_b8 = '\x01';
    FUN_019ba260();
    plVar7 = local_48;
    if (local_40[0] == '\0') {
      if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
         (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40[0] = '\0';
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (CONCAT71(uStack_77,local_78) != 0)) {
      FUN_00d50b20();
    }
    lVar4 = DAT_0277c878;
    if (DAT_0277c878 != 0) {
      FUN_00d50b00();
    }
    FUN_00d242c0();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = DAT_027edfd0;
    if (DAT_027edfd0 != 0) {
      FUN_00d50b00();
    }
    local_48 = (longlong *)lVar4;
    local_40[0] = '\0';
    FUN_00ca0840();
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if (plVar7 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d23310();
    plVar7 = local_48;
    pcVar6 = &local_e0;
    if (local_40[0] != '\0') {
      pcVar6 = local_40;
    }
    local_e0 = local_40[0];
    *pcVar6 = '\0';
    if ((local_40[0] != '\0') && (plVar7 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_c8 = 0;
    if (local_e0 == '\0') {
      if (plVar7 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_e0 = '\0';
    }
    local_c8 = '\x01';
    local_d0 = plVar7;
    FUN_00d0a070();
    lVar4 = CONCAT71(uStack_77,local_78);
    if (local_70 == '\0') {
      if (((lVar4 != 0) && (FUN_00d50b00(), local_70 != '\0')) &&
         (CONCAT71(uStack_77,local_78) != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_70 = '\0';
    }
    if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d0b140();
    lVar9 = DAT_0277c870;
    if (DAT_0277c870 != 0) {
      FUN_00d50b00();
    }
    local_48 = (longlong *)lVar9;
    local_40[0] = '\0';
    FUN_00ca0840();
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  if (plVar3 != (longlong *)0x0) {
    plVar7 = (longlong *)FUN_00e8fc40();
    FUN_00049200();
    (**(code **)(*plVar7 + 0x18))();
    (**(code **)(*plVar7 + 0x5f0))();
    local_a8 = 0;
    local_b0 = CONCAT71(uStack_77,local_78);
    lVar4 = DAT_0277c880;
    if (local_70 == '\0') {
      if (local_b0 != 0) {
        FUN_00d50b00();
        lVar4 = DAT_0277c880;
      }
    }
    else {
      local_70 = '\0';
    }
    local_a8 = '\x01';
    DAT_0277c880 = lVar4;
    if (lVar4 != 0) {
      local_a8 = '\x01';
      FUN_00d50b00();
    }
    local_40[0] = '\0';
    local_48 = (longlong *)lVar4;
    FUN_00ca0840();
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (CONCAT71(uStack_77,local_78) != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  *unaff_RDI = local_98;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (local_80 != (undefined8 *)0x0 && !bVar12) {
    FUN_00d50b20();
  }
  if (local_90 != (longlong *)0x0 && !bVar12) {
    FUN_00d50b20();
  }
  if (!bVar12 && local_108 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar13 && plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_68 != '\0') && (plVar8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_60 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


