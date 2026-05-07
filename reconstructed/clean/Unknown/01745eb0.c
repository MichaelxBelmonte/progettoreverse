// Function: FUN_01745eb0
// Address: 01745eb0
// Size: 6022 bytes
// Class: Unknown
// String references:
//   "%@%@"

int64_t * FUN_01745eb0(int64_t *param_1,int64_t *param_2,size_t param_3)

{
  int64_t *plVar1;
  void*puVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  uint32_t uVar8;
  int iVar9;
  void*puVar10;
  void *pvVar11;
  int64_t lVar12;
  int64_t lVar13;
  void* pVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint64_t uVar18;
  int64_t *arg1;
  uint64_t uVar19;
  uint uVar20;
  uint uVar21;
  int64_t *this_ptr;
  uint uVar22;
  uint64_t uVar23;
  uint uVar24;
  bool bVar25;
  int64_t local_1e0;
  uint64_t local_1d8;
  int64_t local_1d0;
  char local_1c8;
  int64_t local_1c0;
  char local_1b8;
  int64_t local_1b0;
  char local_1a8;
  int64_t local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t *local_150;
  int64_t *local_148;
  uint64_t local_140;
  uint32_t local_134;
  int64_t *local_130;
  char local_128;
  int64_t *local_120;
  char local_118;
  int64_t *local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  void*local_d0;
  int64_t *local_c8;
  int64_t *local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_70;
  char local_68;
  int local_58;
  int iStack_4c;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  plVar3 = local_70;
  local_c8 = param_1;
  FUN_00c8e690();
  if ((local_68 == '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (3 < (int)*(uint *)((int64_t)local_70 + 0x18)) {
    _memset_pattern16(param_1,(void *)((uint64_t)((*(uint *)((int64_t)local_70 + 0x18) >> 2) - 1)
                                       * 4 + 4),param_3);
  }
  FUN_00d95590();
  local_128 = 0;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_128 = '\x01';
  local_130 = local_40;
  FUN_00d97f80();
  lVar12 = *param_2;
  if ((int64_t *)lVar12 == local_70) {
    if (((char)param_2[1] == '\0') && (local_70 != (int64_t *)0x0)) {
      if (local_68 != '\0') goto LAB_0174601b;
      FUN_00d50b00();
      goto LAB_01746060;
    }
LAB_0174606f:
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar13 = param_2[1];
    if (local_68 == '\0') {
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *param_2 = (int64_t)local_70;
      if (((char)lVar13 != '\0') && (lVar12 != 0)) {
        FUN_00d50b20();
      }
LAB_01746060:
      *(void*)(param_2 + 1) = 1;
      goto LAB_0174606f;
    }
    *param_2 = (int64_t)local_70;
    if (((char)lVar13 != '\0') && (lVar12 != 0)) {
      FUN_00d50b20();
    }
LAB_0174601b:
    *(void*)(param_2 + 1) = 1;
    local_68 = '\0';
  }
  if ((local_128 != '\0') && (local_130 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar12 = g_0270b790;
  if (g_0270b790 != 0) {
    FUN_00d50b00();
  }
  local_1d0 = lVar12;
  local_1c8 = '\x01';
  cVar5 = FUN_00d90870();
  lVar12 = g_026fce10;
  cVar6 = '\x01';
  if (cVar5 == '\0') {
    if (g_026fce10 != 0) {
      FUN_00d50b00();
    }
    local_1c0 = lVar12;
    local_1b8 = '\x01';
    cVar6 = FUN_00d90870();
    if ((local_1b8 != '\0') && (local_1c0 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_1c8 != '\0') && (local_1d0 != 0)) {
    FUN_00d50b20();
  }
  if (cVar6 != '\0') {
    iVar7 = FUN_00d8d560();
    uVar20 = *(uint *)(*local_c8 + 0x18);
    if (3 < (int)uVar20) {
      lVar12 = *(int64_t *)(*local_c8 + 0x10);
      uVar23 = (uint64_t)(uVar20 >> 2);
      do {
        uVar19 = (uint64_t)((int)uVar23 - 1);
        iVar9 = *(int *)(lVar12 + uVar19 * 4);
        if (iVar9 != -1000000) {
          *(int *)(*(int64_t *)((int64_t)local_70 + 0x10) + uVar19 * 4) = iVar9 + iVar7;
        }
        bVar25 = 1 < (int64_t)uVar23;
        uVar23 = uVar23 - 1;
      } while (bVar25);
    }
    *this_ptr = (int64_t)local_70;
    *(void*)(this_ptr + 1) = 1;
    return this_ptr;
  }
  puVar10 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar14 = 0x2572358;
  *puVar10 = &g_02572358;
  (*g_02572370)();
  lVar12 = arg1[0xb];
  local_d0 = puVar10;
  if (lVar12 != 0) {
    FUN_00d50b00();
  }
  pvVar11 = _pthread_getspecific(pVar14);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01736e70();
  if ((local_68 == '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if (lVar12 != 0) {
    FUN_00d50b20();
  }
  if (local_70 != (int64_t *)0x0) {
    local_58 = -1;
    while (local_58 = local_58 + 1, local_58 < *(int *)((int64_t)local_70 + 0xc)) {
      pVar14 = (void*)*(void*)((int64_t)local_70 + 0x10);
      pvVar11 = _pthread_getspecific(pVar14);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017394e0();
      if (local_40 == (int64_t *)0x0) {
        bVar25 = false;
      }
      else {
        pvVar11 = _pthread_getspecific(pVar14);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017394e0();
        iVar7 = FUN_00d8c7a0();
        bVar25 = iVar7 != 0;
        if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar25) {
        pvVar11 = _pthread_getspecific(pVar14);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017394e0();
        if (local_88 == '\0') {
          if (local_90 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_88 = '\0';
        }
        local_40 = local_90;
        local_38 = '\0';
        FUN_00d21140();
        if (local_90 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_0176e380();
    FUN_00d50b20();
  }
  puVar10 = local_d0;
  FUN_00d242c0();
  puVar2 = local_d0;
  if (puVar10 != (void*)0x0) {
    local_58 = -1;
    do {
      lVar12 = (int64_t)local_58;
      local_58 = local_58 + 1;
      if (*(int *)((int64_t)puVar2 + 0xc) <= local_58) goto LAB_017466bb;
      lVar12 = *(int64_t *)(puVar2[2] + 8 + lVar12 * 8);
      FUN_00d99d60();
      FUN_00d99d60();
      local_118 = 0;
      if (local_88 == '\0') {
        if (local_90 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_88 = '\0';
      }
      local_118 = '\x01';
      local_120 = local_90;
      cVar5 = FUN_00d90870();
      if ((local_118 != '\0') && (local_120 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    } while (cVar5 == '\0');
    if (lVar12 == 0) {
LAB_017466bb:
      FUN_00018280();
    }
    else {
      lVar13 = lVar12;
      FUN_00d50b00();
      pVar14 = (void*)lVar13;
      FUN_00018280();
      if (lVar12 != 0) {
        local_134 = 0;
        lVar13 = arg1[0xb];
        if (lVar13 != 0) {
          FUN_00d50b00();
        }
        pvVar11 = _pthread_getspecific(pVar14);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01736e70();
        if (lVar12 != 0) {
          FUN_00d50b00();
        }
        if (lVar13 != 0) {
          FUN_00d50b20();
        }
        if (lVar12 == 0) {
LAB_01746a4f:
          *(void*)(this_ptr + 1) = 0;
          lVar12 = *local_c8;
          if ((char)local_c8[1] == '\0') {
            if (lVar12 != 0) {
              FUN_00d50b00();
            }
            *this_ptr = lVar12;
            *(void*)(this_ptr + 1) = 1;
            bVar25 = true;
          }
          else {
            *this_ptr = lVar12;
            *(void*)(this_ptr + 1) = 1;
            *(void*)(local_c8 + 1) = 0;
            bVar25 = true;
          }
        }
        else {
          local_70 = (int64_t *)0x0;
          local_58 = -1;
          do {
            lVar13 = (int64_t)local_58;
            local_58 = local_58 + 1;
            if (*(int *)(lVar12 + 0xc) <= local_58) {
              iVar7 = -1;
              break;
            }
            local_70 = *(int64_t **)(*(int64_t *)(lVar12 + 0x10) + 8 + lVar13 * 8);
            pvVar11 = _pthread_getspecific((void*)*(int64_t *)(lVar12 + 0x10));
            if (pvVar11 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_017394e0();
            local_1a8 = '\0';
            local_1b0 = lVar12;
            cVar5 = (**(code **)(*local_40 + 0x50))();
            if ((local_1a8 != '\0') && (local_1b0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            iVar7 = local_58;
          } while (cVar5 == '\0');
          plVar4 = local_70;
          FUN_0176e380();
          FUN_00d50b20();
          if (iVar7 == -1) goto LAB_01746a4f;
          uVar8 = FUN_017482a0();
          lVar13 = g_026e3bc8;
          if (g_026e3bc8 != 0) {
            FUN_00d50b00();
          }
          local_1a0 = lVar13;
          local_198 = '\x01';
          local_190 = 0;
          local_188 = '\0';
          (**(code **)(*arg1 + 0x3c8))(&local_1a0,uVar8,&local_190);
          if (local_70 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          if ((local_188 != '\0') && (local_190 != 0)) {
            FUN_00d50b20();
          }
          if ((local_198 != '\0') && (local_1a0 != 0)) {
            FUN_00d50b20();
          }
          local_150 = local_70;
          FUN_00d97ce0();
          if (local_70 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          iVar7 = FUN_00d8c7a0();
          if (iVar7 < 2) {
            local_98 = (int64_t *)0x0;
            uVar18 = 0;
          }
          else {
            FUN_00d8f140();
            local_98 = local_70;
            if (local_70 == (int64_t *)0x0) {
              uVar18 = 0;
              local_98 = (int64_t *)0x0;
            }
            else {
              uVar18 = CONCAT71((int7)((uint64_t)lVar13 >> 8),1);
              FUN_00d50b00();
            }
          }
          local_1d8 = uVar18;
          FUN_0177f010();
          FUN_00d97ce0();
          local_108 = 0;
          if (local_38 == '\0') {
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_108 = '\x01';
          local_110 = local_40;
          iVar7 = FUN_01780190();
          if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (iVar7 == -0x80000000) {
            *(void*)(this_ptr + 1) = 0;
            lVar12 = *local_c8;
            if ((char)local_c8[1] == '\0') {
              if (lVar12 != 0) {
                FUN_00d50b00();
              }
              *this_ptr = lVar12;
              *(void*)(this_ptr + 1) = 1;
              bVar25 = true;
            }
            else {
              *this_ptr = lVar12;
              *(void*)(this_ptr + 1) = 1;
              *(void*)(local_c8 + 1) = 0;
              bVar25 = true;
            }
          }
          else {
            FUN_00d8c7a0();
            FUN_00d8f140();
            plVar1 = (int64_t *)*param_2;
            if (plVar1 == local_70) {
              if (((char)param_2[1] == '\0') && (local_70 != (int64_t *)0x0)) {
                FUN_00d50b00();
                goto LAB_01746d0b;
              }
            }
            else {
              lVar13 = param_2[1];
              if (local_70 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              *param_2 = (int64_t)local_70;
              if (((char)lVar13 != '\0') && (plVar1 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
LAB_01746d0b:
              *(void*)(param_2 + 1) = 1;
            }
            if (local_98 != (int64_t *)0x0) {
              local_1e0 = *param_2;
              FUN_00083ea0(2,&local_1e0);
              FUN_00d8cb40();
              plVar1 = (int64_t *)*param_2;
              if (plVar1 == local_40) {
                if (((char)param_2[1] == '\0') && (local_40 != (int64_t *)0x0)) {
                  if (local_38 != '\0') goto LAB_01746dcd;
                  FUN_00d50b00();
                  goto LAB_01746e0b;
                }
LAB_01746e13:
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                lVar13 = param_2[1];
                if (local_38 == '\0') {
                  if (local_40 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                  *param_2 = (int64_t)local_40;
                  if (((char)lVar13 != '\0') && (plVar1 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
LAB_01746e0b:
                  *(void*)(param_2 + 1) = 1;
                  goto LAB_01746e13;
                }
                *param_2 = (int64_t)local_40;
                if (((char)lVar13 != '\0') && (plVar1 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
LAB_01746dcd:
                *(void*)(param_2 + 1) = 1;
                local_38 = '\0';
              }
              if ((local_48 != '\0') && (iStack_4c != 0)) {
                FUN_00d50b20();
              }
              local_70 = &g_024c5048;
              if (((char)local_58 != '\0') && (lVar12 != 0)) {
                FUN_00d50b20();
              }
            }
            FUN_00d95590();
            local_f8 = 0;
            if (local_38 == '\0') {
              if (local_40 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_f8 = '\x01';
            local_100 = local_40;
            FUN_00d97f80();
            plVar1 = (int64_t *)*param_2;
            if (plVar1 == local_70) {
              if (((char)param_2[1] == '\0') && (local_70 != (int64_t *)0x0)) {
                FUN_00d50b00();
                goto LAB_01746f51;
              }
            }
            else {
              lVar12 = param_2[1];
              if (local_70 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              *param_2 = (int64_t)local_70;
              if (((char)lVar12 != '\0') && (plVar1 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
LAB_01746f51:
              *(void*)(param_2 + 1) = 1;
            }
            if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            while( true ) {
              lVar12 = g_027cd570;
              if (g_027cd570 != 0) {
                FUN_00d50b00();
              }
              local_180 = lVar12;
              local_178 = '\x01';
              iVar7 = FUN_00d90650();
              if ((local_178 != '\0') && (local_180 != 0)) {
                FUN_00d50b20();
              }
              if (iVar7 == -1) break;
              FUN_00d8ede0();
              local_e8 = 0;
              if (local_38 == '\0') {
                if (local_40 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              local_e8 = '\x01';
              local_f0 = local_40;
              FUN_00d98c80(&local_f0);
              plVar1 = (int64_t *)*param_2;
              if (plVar1 == local_70) {
                if (((char)param_2[1] == '\0') && (local_70 != (int64_t *)0x0)) {
                  FUN_00d50b00();
                  goto LAB_0174711d;
                }
              }
              else {
                lVar12 = param_2[1];
                if (local_70 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
                *param_2 = (int64_t)local_70;
                if (((char)lVar12 != '\0') && (plVar1 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
LAB_0174711d:
                *(void*)(param_2 + 1) = 1;
              }
              if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            while( true ) {
              lVar12 = g_02781610;
              if (g_02781610 != 0) {
                FUN_00d50b00();
              }
              local_170 = lVar12;
              local_168 = '\x01';
              iVar7 = FUN_00d90650();
              if ((local_168 != '\0') && (local_170 != 0)) {
                FUN_00d50b20();
              }
              if (iVar7 == -1) break;
              FUN_00d8ede0();
              local_d8 = 0;
              if (local_38 == '\0') {
                if (local_40 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              local_d8 = '\x01';
              local_e0 = local_40;
              FUN_00d98c80(&local_e0);
              plVar1 = (int64_t *)*param_2;
              if (plVar1 == local_70) {
                if (((char)param_2[1] == '\0') && (local_70 != (int64_t *)0x0)) {
                  FUN_00d50b00();
                  goto LAB_017472ed;
                }
              }
              else {
                lVar12 = param_2[1];
                if (local_70 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
                *param_2 = (int64_t)local_70;
                if (((char)lVar12 != '\0') && (plVar1 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
LAB_017472ed:
                *(void*)(param_2 + 1) = 1;
              }
              if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            local_160 = *param_2;
            local_158 = '\0';
            FUN_00ddb860();
            if (local_70 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            if ((local_158 != '\0') && (local_160 != 0)) {
              FUN_00d50b20();
            }
            local_148 = local_70;
            (**(code **)(*local_70 + 0x410))();
            lVar12 = *local_c8;
            if (3 < (int)*(uint *)(lVar12 + 0x18)) {
              uVar20 = *(uint *)(lVar12 + 0x18) >> 2;
              uVar23 = (uint64_t)(uVar20 - 1);
              do {
                uVar17 = uVar20;
                if (*(int *)(*(int64_t *)(lVar12 + 0x10) + uVar23 * 4) != -1000000) {
                  local_140 = (uint64_t)uVar20;
                  (**(code **)(*arg1 + 0x370))();
                  iVar7 = (**(code **)(*arg1 + 0x378))();
                  plVar1 = local_c8;
                  uVar24 = iVar7 - *(int *)(*(int64_t *)(*local_c8 + 0x10) + uVar23 * 4);
                  iVar7 = (**(code **)(*arg1 + 0x378))();
                  uVar17 = iVar7 - *(int *)(*(int64_t *)(*plVar1 + 0x10) + uVar23 * 4);
                  iVar9 = (**(code **)(*arg1 + 0x378))();
                  lVar12 = *plVar1;
                  iVar7 = *(int *)(*(int64_t *)(lVar12 + 0x10) + uVar23 * 4);
                  uVar22 = iVar9 - iVar7;
                  uVar20 = -uVar24;
                  if (0 < (int)uVar24) {
                    uVar20 = uVar24;
                  }
                  uVar21 = -uVar17;
                  if (0 < (int)uVar17) {
                    uVar21 = uVar17;
                  }
                  uVar16 = uVar20;
                  if (uVar21 < uVar20) {
                    uVar16 = uVar21;
                  }
                  uVar15 = -uVar22;
                  if (0 < (int)uVar22) {
                    uVar15 = uVar22;
                  }
                  uVar22 = uVar15;
                  if ((int)uVar16 <= (int)uVar15) {
                    uVar22 = uVar16;
                  }
                  if ((int)uVar16 < (int)uVar15) {
                    if (uVar22 == uVar20) {
                      lVar13 = *(int64_t *)((int64_t)plVar3 + 0x10);
                      uVar17 = uVar24;
                    }
                    else {
                      if (uVar22 != uVar21) goto LAB_01747422;
                      lVar13 = *(int64_t *)((int64_t)plVar3 + 0x10);
                    }
                    *(uint *)(lVar13 + uVar23 * 4) = iVar7 + uVar17;
                  }
                  else {
                    *(int *)(*(int64_t *)((int64_t)plVar3 + 0x10) + uVar23 * 4) = iVar9;
                  }
LAB_01747422:
                  uVar17 = (uint)local_140;
                }
                uVar23 = uVar23 - 1;
                uVar20 = uVar17 - 1;
              } while (uVar20 != 0 && 0 < (int)uVar17);
            }
            *this_ptr = (int64_t)plVar3;
            *(void*)(this_ptr + 1) = 1;
            if (local_148 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            bVar25 = false;
          }
          if (((char)local_1d8 != '\0') && (local_98 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar4 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if (local_150 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
        if ((char)local_134 == '\0') {
          FUN_00d50b20();
        }
        goto LAB_01747636;
      }
    }
  }
  *(void*)(this_ptr + 1) = 0;
  lVar12 = *local_c8;
  if ((char)local_c8[1] == '\0') {
    if (lVar12 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar12;
    *(void*)(this_ptr + 1) = 1;
    bVar25 = true;
  }
  else {
    *this_ptr = lVar12;
    *(void*)(this_ptr + 1) = 1;
    *(void*)(local_c8 + 1) = 0;
    bVar25 = true;
  }
LAB_01747636:
  if (local_d0 != (void*)0x0) {
    FUN_00d50b20();
  }
  if ((bVar25) && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

