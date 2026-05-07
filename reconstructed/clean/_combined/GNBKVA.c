// ===================================================================
// GNBKVA — Complete reconstructed pseudocode
// 9 functions
// ===================================================================


// ============================================================
// 00e474c0
// ============================================================
// Function: FUN_00e474c0
// Address: 00e474c0
// Size: 977 bytes
// Class: GNBKVA

void FUN_00e474c0(void)

{
  int64_t lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int iVar9;
  int64_t lVar10;
  int64_t this_ptr;
  int64_t lVar11;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  int64_t local_50;
  uint32_t local_44;
  int64_t local_40;
  char local_38;
  
  if ((*(int64_t *)(this_ptr + 0x90) != 0) &&
     (lVar1 = *(int64_t *)(*(int64_t *)(this_ptr + 0x90) + 0x10), 0 < *(int *)(lVar1 + 0xc))) {
    lVar8 = 0;
    do {
      lVar11 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar8 * 8);
      local_70 = '\0';
      local_78 = lVar11;
      uVar7 = FUN_00e47ad0(lVar1,&local_78);
      lVar10 = local_40;
      if (local_40 == 0) {
        local_44 = (uint32_t)CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
        lVar10 = 0;
      }
      else {
        if (local_38 == '\0') {
          FUN_00d50b00();
          local_44 = 0;
          if ((local_38 == '\0') || (local_40 == 0)) goto LAB_00e4759a;
          FUN_00d50b20();
        }
        else {
          local_38 = '\0';
        }
        local_44 = 0;
      }
LAB_00e4759a:
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (lVar10 != 0) {
        FUN_00d79bf0();
        iVar3 = FUN_00d795b0();
        if (iVar3 != 0) {
          local_60 = '\0';
          local_68 = lVar11;
          local_50 = lVar10;
          FUN_00e47c30();
          local_58 = local_40;
          if (local_38 == '\0') {
            if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38 = '\0';
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 == 0) || (iVar5 = iVar3, iVar3 < 1)) {
LAB_00e4771e:
            FUN_00d796b0();
            lVar11 = local_40;
            if (((local_38 == '\0') && (local_40 != 0)) &&
               ((FUN_00d50b00(), local_38 != '\0' && (local_40 != 0)))) {
              FUN_00d50b20();
            }
            iVar5 = FUN_00e5d230();
            if (iVar3 < 2) {
              iVar9 = 1;
LAB_00e4780e:
              iVar6 = iVar9;
              if (iVar9 != iVar3 + -1) goto LAB_00e47883;
            }
            else {
              iVar9 = 1;
              lVar10 = lVar11;
              do {
                FUN_00d79670();
                lVar11 = local_40;
                if (local_40 == lVar10) {
LAB_00e477bd:
                  lVar11 = lVar10;
                  if (local_38 != '\0') {
LAB_00e477c3:
                    if (local_40 != 0) {
                      FUN_00d50b20();
                    }
                  }
                }
                else {
                  if (local_38 == '\0') {
                    if (local_40 != 0) {
                      FUN_00d50b00();
                    }
                    if (lVar10 != 0) {
                      FUN_00d50b20();
                      lVar10 = lVar11;
                      goto LAB_00e477bd;
                    }
                    if (local_38 == '\0') goto LAB_00e477e0;
                    goto LAB_00e477c3;
                  }
                  if (lVar10 != 0) {
                    FUN_00d50b20();
                  }
                }
LAB_00e477e0:
                iVar6 = FUN_00e5d230();
                if (iVar6 != iVar5) goto LAB_00e4780e;
                iVar9 = iVar9 + 1;
                lVar10 = lVar11;
                iVar6 = iVar3;
              } while (iVar3 != iVar9);
LAB_00e47883:
              iVar3 = (iVar3 - iVar6) + 1;
              while (iVar3 = iVar3 + -1, 0 < iVar3) {
                FUN_00d79770();
              }
            }
            if (lVar11 != 0) {
              FUN_00d50b20();
            }
          }
          else {
            do {
              FUN_00d79670();
              lVar11 = local_40;
              if ((local_38 == '\0') &&
                 (((local_40 != 0 && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)))) {
                FUN_00d50b20();
              }
              iVar4 = FUN_00e5d8b0();
              iVar9 = *(int *)(local_58 + 0x18);
              iVar6 = iVar9 + 3;
              if (-1 < iVar9) {
                iVar6 = iVar9;
              }
              if (3 < iVar9) {
                lVar10 = 0;
                do {
                  if (*(int *)(*(int64_t *)(local_58 + 0x10) + lVar10 * 4) == iVar4) {
                    FUN_00d79730();
                    iVar3 = iVar3 + -1;
                    if (lVar11 == 0) goto LAB_00e47640;
                    goto LAB_00e476f8;
                  }
                  lVar10 = lVar10 + 1;
                } while (iVar6 >> 2 != (int)lVar10);
              }
              if (lVar11 != 0) {
LAB_00e476f8:
                FUN_00d50b20();
              }
LAB_00e47640:
              bVar2 = 1 < iVar5;
              iVar5 = iVar5 + -1;
            } while (bVar2);
            if (iVar3 != 0) goto LAB_00e4771e;
          }
          if (local_58 != 0) {
            FUN_00d50b20();
          }
        }
        if ((char)local_44 == '\0') {
          FUN_00d50b20();
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(lVar1 + 0xc));
  }
  return;
}



// ============================================================
// 00e46c90
// ============================================================
// Function: FUN_00e46c90
// Address: 00e46c90
// Size: 1186 bytes
// Class: GNBKVA

void FUN_00e46c90(void)

{
  int64_t lVar1;
  char cVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_48;
  char local_40;
  
  lVar1 = *arg1;
  lVar4 = *(int64_t *)(this_ptr + 0x38);
  if (lVar4 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0x38) = lVar1;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d4efa0();
  lVar1 = *(int64_t *)(this_ptr + 0x40);
  lVar4 = lVar1;
  if (lVar1 != local_48) {
    lVar4 = local_48;
    if (local_40 == '\0') {
      if (local_48 == 0) {
        lVar4 = 0;
        goto LAB_00e46cfc;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x40);
      *(int64_t *)(this_ptr + 0x40) = local_48;
    }
    else {
      local_40 = '\0';
LAB_00e46cfc:
      *(int64_t *)(this_ptr + 0x40) = lVar4;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar4 = local_48;
    }
  }
  if ((local_40 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x40);
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    do {
      cVar2 = FUN_00e3a1c0();
      if (cVar2 == '\0') break;
      FUN_00c80a40();
    } while (lVar1 != 0);
    local_40 = '\0';
    lVar4 = *(int64_t *)(this_ptr + 0x40);
    local_48 = lVar1;
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
  }
  FUN_00e47ad0();
  *(int64_t *)(this_ptr + 0x48) = local_48;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x48) == 0) {
    plVar3 = (int64_t *)FUN_00e4c0a0();
    (**(code **)(*plVar3 + 0x18))();
    lVar1 = *(int64_t *)(this_ptr + 0x40);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00e47b80();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    *(int64_t **)(this_ptr + 0x48) = plVar3;
    FUN_00d50b20();
  }
  plVar3 = *(int64_t **)(this_ptr + 200);
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b00();
    cVar2 = (**(code **)(*plVar3 + 0x18))();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if (cVar2 == '\0') goto LAB_00e47094;
  }
  cVar2 = (**(code **)(*(int64_t *)*arg1 + 0x1e8))();
  plVar3 = (int64_t *)*arg1;
  if (cVar2 == '\0') {
    FUN_00d50b00();
    (**(code **)(*plVar3 + 0x120))();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    (**(code **)(*plVar3 + 0x250))();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
  }
LAB_00e47094:
  plVar3 = *(int64_t **)(this_ptr + 200);
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b00();
    (**(code **)(*plVar3 + 0x20))();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 00e484f0
// ============================================================
// Function: FUN_00e484f0
// Address: 00e484f0
// Size: 1072 bytes
// Class: GNBKVA
// String references:
//   "object tried to encode key more than once!"

void FUN_00e484f0(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  void*puVar7;
  int64_t lVar8;
  char unaff_SIL;
  int64_t this_ptr;
  int iVar9;
  
  FUN_00e3a1c0();
  if (*(char *)(this_ptr + 0x2c) == '\0') {
    lVar8 = *(int64_t *)(this_ptr + 0x60);
  }
  else {
    lVar8 = *(int64_t *)(this_ptr + 0x48);
  }
  bVar3 = lVar8 == 0;
  if (bVar3) {
    lVar8 = 0;
  }
  else {
    FUN_00d50b00();
  }
  lVar1 = *param_2;
  iVar5 = FUN_00e3a2a0();
  iVar9 = 0;
  do {
    iVar6 = FUN_00d795b0();
    if (iVar6 <= iVar9) {
      puVar7 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &g_0258e990;
      *(void*)((int64_t)puVar7 + 0xc) = 0;
      *(void*)(puVar7 + 2) = 0;
      *(void*)((int64_t)puVar7 + 0x14) = 0;
      (*g_0258e9a8)();
      FUN_00e5d270();
      FUN_00d795e0();
      FUN_00d50b20();
LAB_00e48735:
      if (!bVar3 && lVar8 != 0) {
        FUN_00d50b20();
      }
      return;
    }
    FUN_00d79670();
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    iVar6 = FUN_00e5d8b0();
    lVar2 = g_027816e8;
    if (iVar6 == iVar5) {
      if (*(char *)(this_ptr + 0x2c) != '\0') {
        cVar4 = FUN_00e5d8c0();
        if (cVar4 == unaff_SIL) {
          FUN_00e5d8d0();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        else {
          lVar2 = *(int64_t *)(this_ptr + 0x40);
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          FUN_00e47c30();
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          if (lVar1 == 0) {
            FUN_00c8e710();
            FUN_00c92170();
            FUN_00c92160();
            lVar2 = *(int64_t *)(this_ptr + 0x40);
            if (lVar2 != 0) {
              FUN_00d50b00();
            }
            FUN_00e48c30();
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
          }
          iVar9 = *(int *)(lVar1 + 0x18);
          FUN_00c8e340();
          *(int *)(*(int64_t *)(lVar1 + 0x10) + (int64_t)iVar9) = iVar5;
          FUN_00d50b20();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        goto LAB_00e48735;
      }
      if (g_027816e8 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc7b40();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    iVar9 = iVar9 + 1;
  } while( true );
}



// ============================================================
// 00e4a130
// ============================================================
// Function: FUN_00e4a130
// Address: 00e4a130
// Size: 635 bytes
// Class: GNBKVA

void FUN_00e4a130(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_70;
  uint8_t local_68;
  int64_t local_60;
  uint8_t local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (*(char *)(this_ptr + 0x2c) == '\0') {
    local_40 = *param_2;
    local_38 = '\0';
    FUN_00e3a2a0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_50 = *(int64_t *)(this_ptr + 0x48);
    local_48 = '\0';
    iVar3 = FUN_00e5d7f0();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (iVar3 == -1) {
      local_60 = *param_2;
      local_58 = 0;
      FUN_00e484f0(param_1,&local_60);
      lVar2 = *arg1;
      lVar1 = local_40;
    }
    else {
      FUN_00dac5e0();
      lVar2 = *arg1;
      lVar1 = local_40;
    }
    local_40 = lVar2;
    if (local_40 != 0) {
      local_38 = '\0';
      FUN_00e3a1c0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_40 = *arg1;
      local_38 = '\0';
      FUN_00e3a1c0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_40 = *arg1;
      local_38 = '\0';
      FUN_00e38fb0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_40 = *arg1;
      local_38 = '\0';
      FUN_00e3a2a0();
      lVar1 = local_40;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
        lVar1 = local_40;
      }
    }
    local_40 = lVar1;
    FUN_00daab70();
  }
  else {
    local_70 = *param_2;
    local_68 = 0;
    FUN_00e484f0(param_1,&local_70);
    local_40 = *arg1;
    if (local_40 != 0) {
      local_38 = '\0';
      FUN_00e3a1c0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_40 = *arg1;
      local_38 = '\0';
      FUN_00e3a1c0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_40 = *arg1;
      local_38 = '\0';
      FUN_00e38fb0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}



// ============================================================
// 00e45ff0
// ============================================================
// Function: FUN_00e45ff0
// Address: 00e45ff0
// Size: 598 bytes
// Class: GNBKVA

uint64_t FUN_00e45ff0(uint64_t param_1)

{
  int iVar1;
  int64_t lVar2;
  int64_t this_ptr;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  int64_t local_68;
  char local_60;
  int64_t local_40;
  char local_38;
  
  FUN_00daab70();
  lVar2 = *(int64_t *)(this_ptr + 0x90);
  if ((lVar2 != 0) && (lVar5 = *(int64_t *)(lVar2 + 0x10), 0 < *(int *)(lVar5 + 0xc))) {
    lVar4 = 0;
    local_70 = lVar5;
    do {
      lVar2 = *(int64_t *)(*(int64_t *)(lVar5 + 0x10) + lVar4 * 8);
      FUN_00c7e7b0();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00dab040();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00c811b0();
      FUN_00daab70();
      local_78 = '\0';
      local_80 = lVar2;
      FUN_00e47ad0(param_1,&local_80);
      lVar5 = local_70;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_00d795b0();
      }
      FUN_00daab70();
      if (0 < iVar1) {
        iVar3 = 0;
        do {
          FUN_00d79670(param_1,iVar3);
          local_60 = 0;
          lVar2 = *(int64_t *)(this_ptr + 0x30);
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          local_60 = '\x01';
          local_68 = lVar2;
          FUN_00e5d8e0();
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          lVar5 = local_70;
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          iVar3 = iVar3 + 1;
        } while (iVar1 != iVar3);
      }
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      lVar4 = lVar4 + 1;
      lVar2 = (int64_t)*(int *)(lVar5 + 0xc);
    } while (lVar4 < lVar2);
  }
  return CONCAT71((int7)((uint64_t)lVar2 >> 8),1);
}



// ============================================================
// 00e46700
// ============================================================
// Function: FUN_00e46700
// Address: 00e46700
// Size: 741 bytes
// Class: GNBKVA

uint64_t FUN_00e46700(void)

{
  int iVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  char *pcVar5;
  int64_t *arg1;
  int64_t this_ptr;
  uint local_4c;
  char local_40 [8];
  char local_38 [8];
  
  plVar2 = *(int64_t **)(this_ptr + 0xd0);
  iVar1 = *(int *)(*(int64_t *)(*(int64_t *)(this_ptr + 0xa0) + 0x10) + 0xc);
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b00();
    (**(code **)(*plVar2 + 0x18))(0);
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00e39e40();
  FUN_00e38f50();
  FUN_00e39e40();
  FUN_00e39e40();
  *(void*)(this_ptr + 0x2c) = 0;
  lVar3 = *arg1;
  local_40[0] = '\0';
  FUN_00e38fb0();
  if ((local_40[0] != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  local_4c = 0;
  while( true ) {
    FUN_00e46bf0();
    local_38[0] = local_40[0];
    pcVar5 = local_40;
    if (local_40[0] == '\0') {
      pcVar5 = local_38;
    }
    *pcVar5 = '\0';
    if ((local_40[0] != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 == 0) break;
    local_40[0] = '\0';
    cVar4 = FUN_00e3a2e0();
    if ((local_40[0] != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') {
      local_40[0] = '\0';
      FUN_00e3a1c0();
      if ((local_40[0] != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      local_40[0] = '\0';
      FUN_00e3a1c0();
      if ((local_40[0] != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      FUN_00e47ce0();
      FUN_00e48260();
      local_40[0] = '\0';
      FUN_00e3a1c0();
      if ((local_40[0] != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      plVar2 = *(int64_t **)(this_ptr + 0xd0);
      if ((plVar2 != (int64_t *)0x0) && (local_4c = local_4c + 1, (local_4c & 0x3ff) == 0)) {
        FUN_00d50b00();
        (**(code **)(*plVar2 + 0x18))((float)(int)local_4c / (float)(iVar1 + 1));
        if (this_ptr != 0) {
          FUN_00d50b20();
        }
      }
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
  }
  plVar2 = *(int64_t **)(this_ptr + 0xd0);
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b00();
    (**(code **)(*plVar2 + 0x18))(g_02390124);
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
  }
  return 1;
}



// ============================================================
// 00e47ce0
// ============================================================
// Function: FUN_00e47ce0
// Address: 00e47ce0
// Size: 794 bytes
// Class: GNBKVA

void FUN_00e47ce0(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int64_t lVar4;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_38;
  char local_30;
  
  lVar1 = *arg1;
  lVar4 = *(int64_t *)(this_ptr + 0x38);
  if (lVar4 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0x38) = lVar1;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d4efa0();
  lVar1 = *(int64_t *)(this_ptr + 0x40);
  lVar4 = lVar1;
  if (lVar1 != local_38) {
    lVar4 = local_38;
    if (local_30 == '\0') {
      if (local_38 == 0) {
        lVar4 = 0;
        goto LAB_00e47d47;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x40);
      *(int64_t *)(this_ptr + 0x40) = local_38;
    }
    else {
      local_30 = '\0';
LAB_00e47d47:
      *(int64_t *)(this_ptr + 0x40) = lVar4;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar4 = local_38;
    }
  }
  if ((local_30 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x40);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00e47ad0();
  *(int64_t *)(this_ptr + 0x48) = local_38;
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d797a0();
  FUN_00e5d8a0();
  FUN_00dac5e0();
  ___bzero();
  FUN_00dac5e0();
  plVar2 = *(int64_t **)(this_ptr + 200);
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b00();
    cVar3 = (**(code **)(*plVar2 + 0x18))();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') goto LAB_00e47f73;
  }
  cVar3 = (**(code **)(*(int64_t *)*arg1 + 0x1e8))();
  plVar2 = (int64_t *)*arg1;
  if (cVar3 == '\0') {
    FUN_00d50b00();
    (**(code **)(*plVar2 + 0x120))();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    (**(code **)(*plVar2 + 0x250))();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
  }
LAB_00e47f73:
  plVar2 = *(int64_t **)(this_ptr + 200);
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b00();
    (**(code **)(*plVar2 + 0x20))();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 00e45630
// ============================================================
// Function: FUN_00e45630
// Address: 00e45630
// Size: 737 bytes
// Class: GNBKVA
// String references:
//   "GNBKVA"

uint64_t FUN_00e45630(uint64_t param_1,void*param_2)

{
  uint64_t uVar1;
  uint uVar2;
  void*puVar3;
  uint64_t uVar4;
  int64_t *this_ptr;
  int64_t *local_70;
  char local_68;
  int64_t local_40;
  char local_38;
  
  FUN_00daa970();
  FUN_00daa990();
  uVar1 = *param_2;
  FUN_00dab200(0,6);
  FUN_00daa9d0();
  FUN_00daaf60();
  FUN_00daa9b0();
  FUN_00daaf60();
  FUN_00daab70();
  FUN_00daab70();
  if ((int)this_ptr[5] == 0) {
    FUN_00e45a50();
    uVar4 = CONCAT71((int7)((uint64_t)uVar1 >> 8),1);
  }
  else {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_025683c0;
    (*g_025683d8)();
    FUN_00c92170();
    FUN_00daa540();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00daa980();
    FUN_00daa970();
    FUN_00daa9b0();
    FUN_00daa990();
    FUN_00daa9d0();
    FUN_00daa9c0();
    FUN_00e45a50();
    (**(code **)(*this_ptr + 0x608))();
    (**(code **)(*local_70 + 0x368))();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 == 0) {
      uVar4 = 0;
    }
    else {
      uVar2 = FUN_00dab390();
      uVar4 = (uint64_t)uVar2;
      if ((char)uVar2 != '\0') {
        FUN_00daab50();
      }
      FUN_00d50b20();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  return uVar4 & 0xffffffff;
}



// ============================================================
// 00e45c10
// ============================================================
// Function: FUN_00e45c10
// Address: 00e45c10
// Size: 510 bytes
// Class: GNBKVA

void FUN_00e45c10(void)

{
  int64_t lVar1;
  char cVar2;
  char *pcVar3;
  int64_t *arg1;
  int64_t this_ptr;
  char local_40 [8];
  char local_38 [8];
  
  FUN_00e38430();
  FUN_00e39e40();
  FUN_00e38430();
  FUN_00e39e40();
  FUN_00e39e40();
  FUN_00e39e40();
  FUN_00e38f50();
  FUN_00e39e40();
  *(void*)(this_ptr + 0x2c) = 1;
  lVar1 = *arg1;
  local_40[0] = '\0';
  FUN_00e38fb0();
  if ((local_40[0] != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  while( true ) {
    FUN_00e46bf0();
    local_38[0] = local_40[0];
    pcVar3 = local_40;
    if (local_40[0] == '\0') {
      pcVar3 = local_38;
    }
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 == 0) break;
    local_40[0] = '\0';
    cVar2 = FUN_00e3a2e0();
    if ((local_40[0] != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
    if (cVar2 == '\0') {
      local_40[0] = '\0';
      FUN_00e3a1c0();
      if ((local_40[0] != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
      local_40[0] = '\0';
      FUN_00e3a1c0();
      if ((local_40[0] != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
      FUN_00e46c90();
      local_40[0] = '\0';
      FUN_00e3a1c0();
      if ((local_40[0] != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
  }
  FUN_00e474c0();
  return;
}

