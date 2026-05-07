// Function: FUN_01744580
// Address: 01744580
// Size: 4243 bytes
// Class: Unknown

int64_t * FUN_01744580(int64_t *param_1,int64_t *param_2,size_t param_3)

{
  void *pvVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  bool bVar4;
  int64_t *plVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int64_t lVar10;
  uint64_t uVar11;
  int64_t lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint64_t uVar16;
  int64_t *arg1;
  uint64_t uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int64_t *this_ptr;
  uint uVar21;
  uint uVar22;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b0;
  char local_a8;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  int64_t *local_68;
  char local_60;
  int local_50;
  
  plVar5 = local_68;
  FUN_00c8e690();
  if ((local_60 == '\0') && (local_68 != (void *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (3 < (int)*(uint *)((int64_t)local_68 + 0x18)) {
    _memset_pattern16(local_68,(void *)((uint64_t)((*(uint *)((int64_t)local_68 + 0x18) >> 2) - 1)
                                        * 4 + 4),param_3);
  }
  FUN_00d95590();
  if (local_78 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  FUN_00d97f80();
  pvVar1 = (void *)*param_2;
  if (pvVar1 == local_68) {
    if (((char)param_2[1] != '\0') || (local_68 == (void *)0x0)) goto LAB_01744721;
    if (local_60 == '\0') {
      FUN_00d50b00();
      goto LAB_0174471c;
    }
LAB_017446e5:
    *(void*)(param_2 + 1) = 1;
    local_60 = '\0';
  }
  else {
    lVar10 = param_2[1];
    if (local_60 != '\0') {
      *param_2 = (int64_t)local_68;
      if (((char)lVar10 != '\0') && (pvVar1 != (void *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_017446e5;
    }
    if (local_68 != (void *)0x0) {
      FUN_00d50b00();
    }
    *param_2 = (int64_t)local_68;
    if (((char)lVar10 != '\0') && (pvVar1 != (void *)0x0)) {
      FUN_00d50b20();
    }
LAB_0174471c:
    *(void*)(param_2 + 1) = 1;
LAB_01744721:
    if ((local_60 != '\0') && (local_68 != (void *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (local_80 != 0) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  lVar10 = g_0270b790;
  if (g_0270b790 != 0) {
    FUN_00d50b00();
  }
  cVar6 = FUN_00d90870();
  lVar12 = g_026fce10;
  cVar7 = '\x01';
  if (cVar6 == '\0') {
    if (g_026fce10 != 0) {
      FUN_00d50b00();
    }
    cVar7 = FUN_00d90870();
    if (lVar12 != 0) {
      FUN_00d50b20();
    }
  }
  if (lVar10 != 0) {
    FUN_00d50b20();
  }
  if (cVar7 != '\0') {
    iVar8 = FUN_00d8d560();
    uVar18 = *(uint *)(*param_1 + 0x18);
    if (3 < (int)uVar18) {
      lVar10 = *(int64_t *)(*param_1 + 0x10);
      uVar16 = (uint64_t)(uVar18 >> 2);
      do {
        uVar17 = (uint64_t)((int)uVar16 - 1);
        iVar9 = *(int *)(lVar10 + uVar17 * 4);
        if (iVar9 != -1000000) {
          *(int *)(*(int64_t *)((int64_t)local_68 + 0x10) + uVar17 * 4) = iVar9 + iVar8;
        }
        bVar4 = 1 < (int64_t)uVar16;
        uVar16 = uVar16 - 1;
      } while (bVar4);
    }
    *this_ptr = (int64_t)local_68;
    *(void*)(this_ptr + 1) = 1;
    return this_ptr;
  }
  FUN_0177f010();
  FUN_01780120();
  if (local_60 == '\0') {
    if (local_68 != (void *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  FUN_00e01ce0(0);
  if ((local_60 != '\0') && (local_68 != (void *)0x0)) {
    FUN_00d50b20();
  }
  if (local_68 != (void *)0x0) {
    local_50 = -1;
    do {
      lVar10 = (int64_t)local_50;
      local_50 = local_50 + 1;
      if (*(int *)((int64_t)local_68 + 0xc) <= local_50) goto LAB_01744aa9;
      plVar2 = *(int64_t **)(*(int64_t *)((int64_t)local_68 + 0x10) + 8 + lVar10 * 8);
      FUN_00d99d60();
      cVar6 = FUN_00d90870();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
    } while (cVar6 == '\0');
    if (plVar2 == (int64_t *)0x0) {
LAB_01744aa9:
      FUN_00018280();
    }
    else {
      FUN_00d50b00();
      FUN_00018280();
      if (plVar2 != (int64_t *)0x0) {
        FUN_0177f010();
        iVar8 = FUN_01780190();
        if (iVar8 == -0x80000000) {
          *(void*)(this_ptr + 1) = 0;
          lVar10 = *param_1;
          if ((char)param_1[1] == '\0') {
            if (lVar10 != 0) {
              FUN_00d50b00();
            }
            *this_ptr = lVar10;
            *(void*)(this_ptr + 1) = 1;
            bVar4 = false;
          }
          else {
            *this_ptr = lVar10;
            *(void*)(this_ptr + 1) = 1;
            *(void*)(param_1 + 1) = 0;
            bVar4 = false;
          }
        }
        else {
          FUN_00d8c7a0();
          FUN_00d8f140();
          plVar3 = (int64_t *)*param_2;
          if (plVar3 == plVar2) {
            if (((char)param_2[1] == '\0') && (plVar2 != (int64_t *)0x0)) {
              FUN_00d50b00();
              goto LAB_01744cdd;
            }
          }
          else {
            lVar10 = param_2[1];
            if (plVar2 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            *param_2 = (int64_t)plVar2;
            if (((char)lVar10 != '\0') && (plVar3 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_01744cdd:
            local_70 = param_2 + 1;
            *(void*)local_70 = 1;
          }
          FUN_00d95590();
          if (local_78 == '\0') {
            if (local_80 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_78 = '\0';
          }
          FUN_00d97f80();
          plVar3 = (int64_t *)*param_2;
          if (plVar3 == plVar2) {
            if (((char)param_2[1] == '\0') && (plVar2 != (int64_t *)0x0)) {
              FUN_00d50b00();
              goto LAB_01744ddf;
            }
          }
          else {
            lVar10 = param_2[1];
            if (plVar2 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            *param_2 = (int64_t)plVar2;
            if (((char)lVar10 != '\0') && (plVar3 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_01744ddf:
            local_70 = param_2 + 1;
            *(void*)local_70 = 1;
          }
          if (local_80 != 0) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          FUN_0171ebf0();
          local_68 = plVar2;
          if (plVar2 != (int64_t *)0x0) {
            FUN_00d50b00();
            local_68 = (int64_t *)0x0;
            local_50 = -1;
            while( true ) {
              lVar10 = (int64_t)local_50;
              local_50 = local_50 + 1;
              if (*(int *)((int64_t)plVar2 + 0xc) <= local_50) break;
              local_68 = *(int64_t **)(plVar2[2] + 8 + lVar10 * 8);
              while (uVar11 = FUN_00d90650(), (int)uVar11 != -1) {
                FUN_00d8ede0();
                local_d0 = 0;
                if (local_a8 == '\0') {
                  if (local_b0 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_a8 = '\0';
                }
                local_d0 = '\x01';
                local_d8 = local_b0;
                FUN_00d98c80(&local_d8,uVar11);
                lVar10 = *param_2;
                if (lVar10 == local_80) {
                  if (((char)param_2[1] == '\0') && (local_80 != 0)) {
                    if (local_78 != '\0') goto LAB_01745002;
                    FUN_00d50b00();
                    goto LAB_0174503c;
                  }
LAB_01745041:
                  if ((local_78 != '\0') && (local_80 != 0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  lVar12 = param_2[1];
                  if (local_78 == '\0') {
                    if (local_80 != 0) {
                      FUN_00d50b00();
                    }
                    *param_2 = local_80;
                    if (((char)lVar12 != '\0') && (lVar10 != 0)) {
                      FUN_00d50b20();
                    }
LAB_0174503c:
                    *(void*)(param_2 + 1) = 1;
                    goto LAB_01745041;
                  }
                  *param_2 = local_80;
                  if (((char)lVar12 != '\0') && (lVar10 != 0)) {
                    FUN_00d50b20();
                  }
LAB_01745002:
                  *(void*)(param_2 + 1) = 1;
                  local_78 = '\0';
                }
                if ((local_d0 != '\0') && (local_d8 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_a8 != '\0') && (local_b0 != 0)) {
                  FUN_00d50b20();
                }
              }
            }
            FUN_00018280();
            FUN_00d50b20();
          }
          plVar2 = local_68;
          FUN_0171e8d0();
          if (local_68 != (int64_t *)0x0) {
            FUN_00d50b00();
            local_68 = (int64_t *)0x0;
            local_50 = -1;
            while( true ) {
              lVar10 = (int64_t)local_50;
              local_50 = local_50 + 1;
              if (*(int *)((int64_t)plVar2 + 0xc) <= local_50) break;
              local_68 = *(int64_t **)(plVar2[2] + 8 + lVar10 * 8);
              while (uVar11 = FUN_00d90650(), (int)uVar11 != -1) {
                FUN_00d8ede0();
                local_c0 = 0;
                if (local_a8 == '\0') {
                  if (local_b0 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_a8 = '\0';
                }
                local_c0 = '\x01';
                local_c8 = local_b0;
                FUN_00d98c80(&local_c8,uVar11);
                lVar10 = *param_2;
                if (lVar10 == local_80) {
                  if (((char)param_2[1] == '\0') && (local_80 != 0)) {
                    if (local_78 != '\0') goto LAB_01745282;
                    FUN_00d50b00();
                    goto LAB_017452bc;
                  }
LAB_017452c1:
                  if ((local_78 != '\0') && (local_80 != 0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  lVar12 = param_2[1];
                  if (local_78 == '\0') {
                    if (local_80 != 0) {
                      FUN_00d50b00();
                    }
                    *param_2 = local_80;
                    if (((char)lVar12 != '\0') && (lVar10 != 0)) {
                      FUN_00d50b20();
                    }
LAB_017452bc:
                    *(void*)(param_2 + 1) = 1;
                    goto LAB_017452c1;
                  }
                  *param_2 = local_80;
                  if (((char)lVar12 != '\0') && (lVar10 != 0)) {
                    FUN_00d50b20();
                  }
LAB_01745282:
                  *(void*)(param_2 + 1) = 1;
                  local_78 = '\0';
                }
                if ((local_c0 != '\0') && (local_c8 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_a8 != '\0') && (local_b0 != 0)) {
                  FUN_00d50b20();
                }
              }
            }
            FUN_00018280();
            FUN_00d50b20();
          }
          FUN_00ddb860();
          if (local_68 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          (**(code **)(*local_68 + 0x410))();
          lVar10 = *param_1;
          if (3 < (int)*(uint *)(lVar10 + 0x18)) {
            uVar18 = *(uint *)(lVar10 + 0x18) >> 2;
            uVar16 = (uint64_t)(uVar18 - 1);
            do {
              if (*(int *)(*(int64_t *)(lVar10 + 0x10) + uVar16 * 4) != -1000000) {
                iVar8 = (**(code **)(*arg1 + 0x370))();
                iVar8 = (**(code **)(*arg1 + 0x378))
                                  ((uint64_t)((int64_t)iVar8 * 0x2aaaaaab) >> 0x3f);
                uVar22 = iVar8 - *(int *)(*(int64_t *)(*param_1 + 0x10) + uVar16 * 4);
                iVar8 = (**(code **)(*arg1 + 0x378))();
                uVar15 = iVar8 - *(int *)(*(int64_t *)(*param_1 + 0x10) + uVar16 * 4);
                iVar9 = (**(code **)(*arg1 + 0x378))();
                lVar10 = *param_1;
                iVar8 = *(int *)(*(int64_t *)(lVar10 + 0x10) + uVar16 * 4);
                uVar21 = iVar9 - iVar8;
                uVar19 = -uVar22;
                if (0 < (int)uVar22) {
                  uVar19 = uVar22;
                }
                uVar20 = -uVar15;
                if (0 < (int)uVar15) {
                  uVar20 = uVar15;
                }
                uVar14 = uVar19;
                if (uVar20 < uVar19) {
                  uVar14 = uVar20;
                }
                uVar13 = -uVar21;
                if (0 < (int)uVar21) {
                  uVar13 = uVar21;
                }
                uVar21 = uVar13;
                if ((int)uVar14 <= (int)uVar13) {
                  uVar21 = uVar14;
                }
                if ((int)uVar14 < (int)uVar13) {
                  if (uVar21 == uVar19) {
                    lVar12 = *(int64_t *)((int64_t)plVar5 + 0x10);
                    uVar15 = uVar22;
                  }
                  else {
                    if (uVar21 != uVar20) goto LAB_017454f5;
                    lVar12 = *(int64_t *)((int64_t)plVar5 + 0x10);
                  }
                  *(uint *)(lVar12 + uVar16 * 4) = iVar8 + uVar15;
                }
                else {
                  *(int *)(*(int64_t *)((int64_t)plVar5 + 0x10) + uVar16 * 4) = iVar9;
                }
              }
LAB_017454f5:
              uVar16 = uVar16 - 1;
              uVar19 = uVar18 - 1;
              bVar4 = 0 < (int)uVar18;
              uVar18 = uVar19;
            } while (uVar19 != 0 && bVar4);
          }
          *this_ptr = (int64_t)plVar5;
          *(void*)(this_ptr + 1) = 1;
          bVar4 = true;
          if (local_68 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
        goto LAB_01745461;
      }
    }
  }
  *(void*)(this_ptr + 1) = 0;
  lVar10 = *param_1;
  if ((char)param_1[1] == '\0') {
    if (lVar10 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar10;
    *(void*)(this_ptr + 1) = 1;
    bVar4 = false;
  }
  else {
    *this_ptr = lVar10;
    *(void*)(this_ptr + 1) = 1;
    *(void*)(param_1 + 1) = 0;
    bVar4 = false;
  }
LAB_01745461:
  if (plVar5 != (void *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar4 && plVar5 != (void *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

