// Function: FUN_00d07ad0
// Address: 00d07ad0
// Size: 4521 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void* FUN_00d07ad0(uint64_t param_1,uint64_t param_2)

{
  char cVar1;
  int iVar2;
  int64_t *plVar3;
  int64_t lVar4;
  uint64_t uVar5;
  char *pcVar6;
  int64_t *plVar7;
  int64_t arg1;
  void*this_ptr;
  int64_t *plVar8;
  int64_t lVar9;
  uint64_t uVar10;
  undefined7 uVar11;
  bool bVar12;
  bool bVar13;
  void*local_108;
  char local_e0;
  undefined7 uStack_df;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  uint64_t local_a0;
  int64_t *local_98;
  int64_t *local_90;
  void*local_80;
  char local_78;
  undefined7 uStack_77;
  char local_70;
  uint64_t local_68;
  uint64_t local_60;
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
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
    local_108 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *local_108 = &g_02572358;
    (*g_02572370)();
    plVar3 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar3 + 0x18))();
    local_90 = plVar3;
    local_80 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *local_80 = &g_02578b00;
    (*g_02578b18)();
    FUN_00d09d20();
    plVar3 = local_48;
    if ((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    FUN_019b43b0();
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d21140();
    uVar10 = *(uint64_t *)(arg1 + 0x48);
    plVar3 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar3 + 0x18))();
    FUN_00d09fc0();
    bVar13 = true;
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    lVar4 = *(int64_t *)(arg1 + 0x28);
    local_60 = 0;
    local_58 = (int64_t *)0x0;
    do {
      if (*(int *)(lVar4 + 0xc) < 1) break;
      lVar9 = 0;
      uVar10 = 0;
      do {
        lVar4 = *(int64_t *)(lVar4 + 0x10);
        plVar3 = *(int64_t **)(lVar4 + lVar9 * 8);
        if (local_58 == plVar3) {
          if (((char)local_60 == '\0') && (local_58 != (int64_t *)0x0)) {
            local_60 = CONCAT71((int7)((uint64_t)lVar4 >> 8),1);
            FUN_00d50b00();
          }
        }
        else {
          if (plVar3 != (int64_t *)0x0) {
            lVar4 = FUN_00d50b00();
          }
          if (((char)local_60 == '\0') || (local_58 == (int64_t *)0x0)) {
            local_60 = CONCAT71((int7)((uint64_t)lVar4 >> 8),1);
            local_58 = plVar3;
          }
          else {
            local_58 = plVar3;
            uVar5 = FUN_00d50b20();
            local_60 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
          }
        }
        cVar1 = FUN_00d7a850();
        if (cVar1 == '\0') {
          FUN_00d0a070();
          bVar12 = local_48 != (int64_t *)0x0;
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
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
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_40[0] = '\0';
          cVar1 = FUN_00d7a850();
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar1 == '\0') {
            local_40[0] = '\0';
            local_48 = plVar3;
            FUN_00d7a410();
            if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar3 == (int64_t *)0x0) goto LAB_00d07fc8;
            do {
              iVar2 = FUN_00c811b0();
              if (iVar2 != 0) {
                FUN_00c7e7b0();
                plVar8 = (int64_t *)CONCAT71(uStack_77,local_78);
                if (local_70 == '\0') {
                  if (plVar8 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_70 = '\0';
                }
                local_40[0] = '\0';
                local_48 = plVar8;
                cVar1 = FUN_00c9ff50();
                if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar8 != (int64_t *)0x0) {
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
                  plVar8 = (int64_t *)CONCAT71(uStack_df,local_e0);
                  if (local_d8 == '\0') {
                    if (plVar8 != (int64_t *)0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_d8 = '\0';
                  }
                  local_40[0] = '\0';
                  local_48 = plVar8;
                  FUN_00ca0840();
                  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (plVar8 != (int64_t *)0x0) {
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
                if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) &&
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
              if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            } while (plVar3 != (int64_t *)0x0);
          }
          else {
LAB_00d07fc8:
            if ((local_38[0] != '\0') && (plVar3 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          plVar3 = local_58;
          FUN_00d0a120();
          FUN_00d7a410();
          uVar10 = CONCAT71((int7)((uint64_t)plVar3 >> 8),1);
        }
        lVar9 = lVar9 + 1;
        lVar4 = *(int64_t *)(arg1 + 0x28);
      } while (lVar9 < *(int *)(lVar4 + 0xc));
    } while ((uVar10 & 1) != 0);
    if (*(char *)(arg1 + 0x70) == '\0') {
      plVar3 = (int64_t *)0x0;
    }
    else {
      plVar3 = (int64_t *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar3 + 0x18))();
      lVar4 = *(int64_t *)(arg1 + 0x28);
      if (0 < *(int *)(lVar4 + 0xc)) {
        lVar9 = 0;
        plVar8 = (int64_t *)0x0;
        local_68 = 0;
        local_50 = plVar3;
        do {
          lVar4 = *(int64_t *)(lVar4 + 0x10);
          plVar3 = *(int64_t **)(lVar4 + lVar9 * 8);
          if (local_58 == plVar3) {
            if (((char)local_60 == '\0') && (local_58 != (int64_t *)0x0)) {
              local_60 = CONCAT71((int7)((uint64_t)lVar4 >> 8),1);
              uVar10 = 0;
              FUN_00d50b00();
            }
          }
          else {
            if (plVar3 != (int64_t *)0x0) {
              uVar10 = local_60 & 0xffffffff;
              lVar4 = FUN_00d50b00();
            }
            if (((char)local_60 == '\0') || (local_58 == (int64_t *)0x0)) {
              local_60 = CONCAT71((int7)((uint64_t)lVar4 >> 8),1);
              local_58 = plVar3;
            }
            else {
              uVar10 = local_60 & 0xffffffff;
              local_58 = plVar3;
              uVar5 = FUN_00d50b20();
              local_60 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
            }
          }
          cVar1 = FUN_00d7a850();
          if (cVar1 == '\0') {
            (**(code **)(*local_58 + 0x60))();
            plVar3 = local_48;
            uVar11 = (undefined7)(uVar10 >> 8);
            if (local_48 == plVar8) {
              if (((char)local_68 == '\0') && (local_48 != (int64_t *)0x0)) {
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
                if (local_48 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
                uVar10 = CONCAT71(uVar11,1);
                if (((char)local_68 != '\0') && (plVar8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                  plVar8 = plVar3;
                  goto LAB_00d08490;
                }
              }
              else {
                if (((char)local_68 != '\0') && (plVar8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
LAB_00d08446:
                local_40[0] = '\0';
              }
              uVar10 = CONCAT71(uVar11,1);
              plVar8 = plVar3;
            }
LAB_00d08490:
            bVar13 = plVar8 != (int64_t *)0x0;
            if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
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
            if ((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b00();
            }
            FUN_00ca0840();
            if (plVar3 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          lVar9 = lVar9 + 1;
          lVar4 = *(int64_t *)(arg1 + 0x28);
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
    plVar8 = (int64_t *)0x0;
  }
  else {
    bVar13 = true;
    local_80 = (void*)0x0;
    bVar12 = true;
    local_90 = (int64_t *)0x0;
    local_108 = (void*)0x0;
    local_68 = 0;
    plVar8 = (int64_t *)0x0;
    local_60 = 0;
    local_58 = (int64_t *)0x0;
    plVar3 = (int64_t *)0x0;
  }
LAB_00d085d8:
  plVar7 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar7 + 0x18))();
  local_98 = plVar7;
  if (local_90 != (int64_t *)0x0) {
    FUN_00ca1380();
    plVar7 = local_48;
    pcVar6 = &local_78;
    if (local_40[0] != '\0') {
      pcVar6 = local_40;
    }
    local_78 = local_40[0];
    *pcVar6 = '\0';
    if ((local_40[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    iVar2 = *(int *)((int64_t)plVar7 + 0xc);
    if ((local_78 != '\0') && (plVar7 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar7 = g_0277c868;
    if (iVar2 != 0) {
      if (g_0277c868 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_48 = plVar7;
      local_40[0] = '\0';
      FUN_00ca0840();
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar7 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  if ((*(int64_t *)(*(int64_t *)(arg1 + 0x48) + 0x10) == 0) ||
     (iVar2 = FUN_00c8d620(), iVar2 == 0)) {
    lVar4 = g_027e7c20;
    if (g_027e7c20 != 0) {
      FUN_00d50b00();
    }
    local_48 = (int64_t *)lVar4;
    local_40[0] = '\0';
    FUN_00ca0840();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  else if (*(char *)(arg1 + 0x71) == '\0') {
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
      if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
         (local_48 != (int64_t *)0x0)) {
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
    lVar4 = g_0277c878;
    if (g_0277c878 != 0) {
      FUN_00d50b00();
    }
    FUN_00d242c0();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = g_027edfd0;
    if (g_027edfd0 != 0) {
      FUN_00d50b00();
    }
    local_48 = (int64_t *)lVar4;
    local_40[0] = '\0';
    FUN_00ca0840();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if (plVar7 != (int64_t *)0x0) {
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
    if ((local_40[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_c8 = 0;
    if (local_e0 == '\0') {
      if (plVar7 != (int64_t *)0x0) {
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
    if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d0b140();
    lVar9 = g_0277c870;
    if (g_0277c870 != 0) {
      FUN_00d50b00();
    }
    local_48 = (int64_t *)lVar9;
    local_40[0] = '\0';
    FUN_00ca0840();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  if (plVar3 != (int64_t *)0x0) {
    plVar7 = (int64_t *)FUN_00e8fc40();
    FUN_00049200();
    (**(code **)(*plVar7 + 0x18))();
    (**(code **)(*plVar7 + 0x5f0))();
    local_a8 = 0;
    local_b0 = CONCAT71(uStack_77,local_78);
    lVar4 = g_0277c880;
    if (local_70 == '\0') {
      if (local_b0 != 0) {
        FUN_00d50b00();
        lVar4 = g_0277c880;
      }
    }
    else {
      local_70 = '\0';
    }
    local_a8 = '\x01';
    g_0277c880 = lVar4;
    if (lVar4 != 0) {
      local_a8 = '\x01';
      FUN_00d50b00();
    }
    local_40[0] = '\0';
    local_48 = (int64_t *)lVar4;
    FUN_00ca0840();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
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
  *this_ptr = local_98;
  *(void*)(this_ptr + 1) = 1;
  if (local_80 != (void*)0x0 && !bVar12) {
    FUN_00d50b20();
  }
  if (local_90 != (int64_t *)0x0 && !bVar12) {
    FUN_00d50b20();
  }
  if (!bVar12 && local_108 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (!bVar13 && plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_68 != '\0') && (plVar8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_60 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

