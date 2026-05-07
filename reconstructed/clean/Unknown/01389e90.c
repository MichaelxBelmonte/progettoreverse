// Function: FUN_01389e90
// Address: 01389e90
// Size: 4727 bytes
// Class: Unknown

void FUN_01389e90(int64_t param_1,int param_2)

{
  char cVar1;
  void*puVar2;
  int64_t lVar3;
  void *pvVar4;
  int64_t lVar5;
  void* pVar6;
  uint uVar7;
  int64_t *plVar8;
  int iVar9;
  int iVar10;
  int64_t *arg1;
  int64_t *plVar11;
  uint uVar12;
  int64_t local_120;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int local_a4;
  int64_t local_a0;
  char local_98;
  void*local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  uint64_t local_70;
  int local_68;
  int64_t *local_60;
  char local_58;
  void*local_50;
  uint64_t local_48;
  int local_40;
  int64_t *local_38;
  
  if (*(int *)(*arg1 + 0xc) == 0) {
    return;
  }
  cVar1 = FUN_01334f30();
  if (cVar1 == '\0') {
    return;
  }
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar6 = 0x2572358;
  *puVar2 = &g_02572358;
  local_90 = puVar2;
  (*g_02572370)();
  puVar2 = (void*)*arg1;
  if (1 < *(int *)((int64_t)puVar2 + 0xc)) {
    local_58 = '\0';
    local_60 = (int64_t *)0x0;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_48._4_4_ = 0;
    local_a4 = 0;
    local_38 = (int64_t *)((uint64_t)local_38 & 0xffffffff00000000);
    local_50 = puVar2;
    while( true ) {
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar9 = -local_48._4_4_;
        }
        else {
          iVar9 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar9);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar9 = 0;
        }
        local_48 = CONCAT44(iVar9,(int)local_48);
      }
      lVar3 = (int64_t)(int)local_48;
      iVar9 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar9);
      if (*(int *)((int64_t)local_50 + 0xc) <= iVar9) break;
      lVar5 = local_50[2];
      local_60 = *(int64_t **)(lVar5 + 8 + lVar3 * 8);
      pvVar4 = _pthread_getspecific((void*)lVar5);
      pVar6 = (void*)lVar5;
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      if (local_80 == '\0') {
        if (local_88 != (int64_t *)0x0) {
          FUN_00d50b00();
          if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_0138a050;
        }
      }
      else if (local_88 != (int64_t *)0x0) {
LAB_0138a050:
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013de560();
        plVar11 = local_88;
        if (local_80 == '\0') {
          if (local_88 != (int64_t *)0x0) {
            FUN_00d50b00();
            if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_0138a0d0;
          }
        }
        else if (local_88 != (int64_t *)0x0) {
LAB_0138a0d0:
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_100 = '\0';
          local_108 = 0;
          local_f8 = 0;
          local_f0 = '\0';
          plVar8 = &local_108;
          FUN_014c03f0(plVar8,&local_120,&local_f8);
          pVar6 = (void*)plVar8;
          if ((local_f0 != '\0') && (local_f8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_100 != '\0') && (local_108 != 0)) {
            FUN_00d50b20();
          }
          lVar3 = local_120;
          if (local_a0 < 1) {
            pvVar4 = _pthread_getspecific(pVar6);
            plVar8 = plVar11;
            if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              plVar8 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
            }
            lVar5 = (**(code **)(*plVar8 + 0x388))();
            if (lVar3 < lVar5) goto LAB_0138a1c8;
          }
          else {
LAB_0138a1c8:
            local_a4 = local_a4 + 1;
          }
          pvVar4 = _pthread_getspecific(pVar6);
          plVar8 = plVar11;
          if ((pvVar4 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
            plVar8 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
          }
          cVar1 = (**(code **)(*plVar8 + 0x3c8))();
          if (cVar1 == '\0') {
            pvVar4 = _pthread_getspecific(pVar6);
            if ((pvVar4 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
              plVar11 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
            }
            cVar1 = (**(code **)(*plVar11 + 0x3d0))();
            if (cVar1 != '\0') goto LAB_01389f60;
          }
          else {
LAB_01389f60:
            local_38 = (int64_t *)CONCAT44(local_38._4_4_,(int)local_38 + 1);
          }
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
    FUN_001159b0();
    if ((void*)*arg1 != (void*)0x0) {
      iVar9 = local_a4 / 2;
      local_58 = '\0';
      local_60 = (int64_t *)0x0;
      local_48 = 0xffffffff;
      local_40 = 0;
      local_48._4_4_ = 0;
      local_50 = (void*)*arg1;
      while( true ) {
        if (local_48._4_4_ != 0) {
          if (local_48._4_4_ < 1) {
            iVar10 = -local_48._4_4_;
          }
          else {
            iVar10 = (int)local_48 - local_48._4_4_;
            local_48 = CONCAT44(local_48._4_4_,iVar10);
            FUN_00d23690();
            local_40 = local_40 + local_48._4_4_;
            iVar10 = 0;
          }
          local_48 = CONCAT44(iVar10,(int)local_48);
        }
        lVar3 = (int64_t)(int)local_48;
        iVar10 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,iVar10);
        if (*(int *)((int64_t)local_50 + 0xc) <= iVar10) break;
        lVar5 = local_50[2];
        local_60 = *(int64_t **)(lVar5 + 8 + lVar3 * 8);
        pvVar4 = _pthread_getspecific((void*)lVar5);
        pVar6 = (void*)lVar5;
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e7c0();
        plVar11 = local_88;
        if (local_80 == '\0') {
          if (local_88 != (int64_t *)0x0) {
            FUN_00d50b00();
            if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_0138a400;
          }
        }
        else if (local_88 != (int64_t *)0x0) {
LAB_0138a400:
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de560();
          if (local_80 == '\0') {
            if (local_88 != (int64_t *)0x0) {
              FUN_00d50b00();
              if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_0138a480;
            }
          }
          else if (local_88 != (int64_t *)0x0) {
LAB_0138a480:
            if (iVar9 < (int)local_38) {
              pvVar4 = _pthread_getspecific(pVar6);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_014bd1e0();
            }
            else {
              pvVar4 = _pthread_getspecific(pVar6);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_e0 = '\0';
              local_e8 = 0;
              plVar8 = &local_e8;
              FUN_014c0100(plVar8,1);
              pVar6 = (void*)plVar8;
              if ((local_e0 != '\0') && (local_e8 != 0)) {
                FUN_00d50b20();
              }
            }
            pvVar4 = _pthread_getspecific(pVar6);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dfef0();
            pvVar4 = _pthread_getspecific(pVar6);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013e0cc0();
            local_80 = '\0';
            local_88 = plVar11;
            FUN_00d21140();
            if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
      FUN_001159b0();
    }
    goto LAB_0138ae70;
  }
  lVar3 = *(int64_t *)puVar2[2];
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e7c0();
  if (local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      local_38 = local_60;
      FUN_00d50b00();
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0138a628;
    }
  }
  else {
    local_38 = local_60;
    if (local_60 != (int64_t *)0x0) {
LAB_0138a628:
      pvVar4 = _pthread_getspecific(pVar6);
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        pVar6 = (void*)local_38;
      }
      FUN_013de560();
      plVar11 = local_60;
      if (local_58 == '\0') {
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b00();
          if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_0138a6a0;
        }
      }
      else if (local_60 != (int64_t *)0x0) {
LAB_0138a6a0:
        if (param_2 == 2) {
          pvVar4 = _pthread_getspecific(pVar6);
          plVar8 = plVar11;
          if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            plVar8 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
          cVar1 = (**(code **)(*plVar8 + 0x3d0))();
          if (cVar1 == '\0') goto LAB_0138a78e;
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014bd130();
LAB_0138adb0:
          pvVar4 = _pthread_getspecific(pVar6);
          if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            pVar6 = (void*)local_38;
          }
          FUN_013dfef0();
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013e0cc0();
          local_60 = local_38;
          local_58 = '\0';
          FUN_00d21140();
          if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (param_2 == 1) {
            pvVar4 = _pthread_getspecific(pVar6);
            plVar8 = plVar11;
            if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              plVar8 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
            }
            cVar1 = (**(code **)(*plVar8 + 0x3c8))();
            if (cVar1 != '\0') {
              pvVar4 = _pthread_getspecific(pVar6);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_014bd0d0();
              goto LAB_0138adb0;
            }
          }
LAB_0138a78e:
          pvVar4 = _pthread_getspecific(pVar6);
          plVar8 = plVar11;
          if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            plVar8 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
          cVar1 = (**(code **)(*plVar8 + 0x3c0))();
          if (cVar1 != '\0') {
LAB_0138a7c8:
            pvVar4 = _pthread_getspecific(pVar6);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_014bd1e0();
            goto LAB_0138adb0;
          }
          pvVar4 = _pthread_getspecific(pVar6);
          plVar8 = plVar11;
          if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            plVar8 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
          cVar1 = (**(code **)(*plVar8 + 0x3c8))();
          if (cVar1 != '\0') {
            pvVar4 = _pthread_getspecific(pVar6);
            plVar8 = plVar11;
            if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              plVar8 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
            }
            cVar1 = (**(code **)(*plVar8 + 0x3d0))();
            if (cVar1 != '\0') goto LAB_0138a7c8;
          }
          pvVar4 = _pthread_getspecific(pVar6);
          plVar8 = plVar11;
          if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            plVar8 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
          cVar1 = (**(code **)(*plVar8 + 0x3c8))();
          if (cVar1 == '\0') {
            pvVar4 = _pthread_getspecific(pVar6);
            plVar8 = plVar11;
            if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              plVar8 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
            }
            cVar1 = (**(code **)(*plVar8 + 0x3d0))();
            if (cVar1 == '\0') {
              pvVar4 = _pthread_getspecific(pVar6);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_d0 = '\0';
              local_d8 = 0;
              pVar6 = (void*)&local_d8;
              FUN_014c0100();
              if ((local_d0 != '\0') && (local_d8 != 0)) {
                FUN_00d50b20();
              }
              pvVar4 = _pthread_getspecific(pVar6);
              plVar8 = plVar11;
              if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
                plVar8 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
              }
              cVar1 = (**(code **)(*plVar8 + 0x3c8))();
              if (cVar1 == '\0') {
                pvVar4 = _pthread_getspecific(pVar6);
                plVar8 = plVar11;
                if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
                  plVar8 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
                }
                cVar1 = (**(code **)(*plVar8 + 0x3d0))();
                if (cVar1 == '\0') {
                  pvVar4 = _pthread_getspecific(pVar6);
                  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
                    plVar11 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
                  }
                  lVar5 = (**(code **)(*plVar11 + 0x388))();
                  lVar5 = lVar5 / 2;
                  if (param_1 < lVar5) {
                    pvVar4 = _pthread_getspecific((void*)lVar5);
                    pVar6 = (void*)lVar5;
                    if (pvVar4 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_014bd0d0();
                  }
                  else {
                    pvVar4 = _pthread_getspecific((void*)lVar5);
                    pVar6 = (void*)lVar5;
                    if (pvVar4 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_014bd130();
                  }
                }
              }
              goto LAB_0138adb0;
            }
          }
          pvVar4 = _pthread_getspecific(pVar6);
          plVar8 = plVar11;
          if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            plVar8 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
          cVar1 = (**(code **)(*plVar8 + 0x3c8))();
          if (cVar1 != '\0') {
            pvVar4 = _pthread_getspecific(pVar6);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_c0 = '\0';
            local_c8 = 0;
            pVar6 = (void*)&local_c8;
            FUN_014c0100();
            if ((local_c0 != '\0') && (local_c8 != 0)) {
              FUN_00d50b20();
            }
            pvVar4 = _pthread_getspecific(pVar6);
            plVar8 = plVar11;
            if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              plVar8 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
            }
            cVar1 = (**(code **)(*plVar8 + 0x3d0))();
            if (cVar1 == '\0') {
              pvVar4 = _pthread_getspecific(pVar6);
              if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
                plVar11 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
              }
              lVar5 = (**(code **)(*plVar11 + 0x3b0))();
              if (lVar5 < param_1) {
                pvVar4 = _pthread_getspecific(pVar6);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_014bd130();
              }
            }
            goto LAB_0138adb0;
          }
          pvVar4 = _pthread_getspecific(pVar6);
          plVar8 = plVar11;
          if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            plVar8 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
          cVar1 = (**(code **)(*plVar8 + 0x3d0))();
          if (cVar1 != '\0') {
            pvVar4 = _pthread_getspecific(pVar6);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_b0 = '\0';
            local_b8 = 0;
            pVar6 = (void*)&local_b8;
            FUN_014c0100();
            if ((local_b0 != '\0') && (local_b8 != 0)) {
              FUN_00d50b20();
            }
            pvVar4 = _pthread_getspecific(pVar6);
            plVar8 = plVar11;
            if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              plVar8 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
            }
            cVar1 = (**(code **)(*plVar8 + 0x3c8))();
            if (cVar1 == '\0') {
              pvVar4 = _pthread_getspecific(pVar6);
              if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
                plVar11 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
              }
              lVar5 = (**(code **)(*plVar11 + 0x3b8))();
              if (param_1 < lVar5) {
                pvVar4 = _pthread_getspecific(pVar6);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_014bd0d0();
              }
            }
            goto LAB_0138adb0;
          }
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
LAB_0138ae70:
  if (*(int *)((int64_t)local_90 + 0xc) != 0) {
    local_58 = '\0';
    local_60 = (int64_t *)0x0;
    local_50 = local_90;
    local_40 = 0;
    local_48 = 0;
    if (0 < *(int *)((int64_t)local_90 + 0xc)) {
      uVar12 = 0;
      do {
        local_60 = *(int64_t **)(local_90[2] + (uint64_t)uVar12 * 8);
        uVar7 = uVar12;
        pvVar4 = _pthread_getspecific(uVar12);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfcb0();
        pvVar4 = _pthread_getspecific(uVar7);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dd790();
        plVar11 = local_88;
        if (local_80 == '\0') {
          if (((local_88 != (int64_t *)0x0) && (FUN_00d50b00(), local_80 != '\0')) &&
             (local_88 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_80 = '\0';
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if (plVar11 != (int64_t *)0x0) {
          local_80 = '\0';
          local_88 = (int64_t *)0x0;
          local_78 = plVar11;
          local_70 = 0xffffffff;
          local_68 = 0;
          local_70._4_4_ = 0;
          while( true ) {
            if (local_70._4_4_ != 0) {
              if (local_70._4_4_ < 1) {
                iVar9 = -local_70._4_4_;
              }
              else {
                iVar9 = (int)local_70 - local_70._4_4_;
                local_70 = CONCAT44(local_70._4_4_,iVar9);
                FUN_00d23690();
                local_68 = local_68 + local_70._4_4_;
                iVar9 = 0;
              }
              local_70 = CONCAT44(iVar9,(int)local_70);
            }
            lVar3 = (int64_t)(int)local_70;
            iVar9 = (int)local_70 + 1;
            local_70 = CONCAT44(local_70._4_4_,iVar9);
            if (*(int *)((int64_t)local_78 + 0xc) <= iVar9) break;
            lVar5 = local_78[2];
            local_88 = *(int64_t **)(lVar5 + 8 + lVar3 * 8);
            pvVar4 = _pthread_getspecific((void*)lVar5);
            pVar6 = (void*)lVar5;
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef8d0();
            lVar3 = local_a0;
            if (((local_98 == '\0') && (local_a0 != 0)) &&
               ((FUN_00d50b00(), local_98 != '\0' && (local_a0 != 0)))) {
              FUN_00d50b20();
            }
            pvVar4 = _pthread_getspecific(pVar6);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0126f610();
            pvVar4 = _pthread_getspecific(pVar6);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125a5f0();
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
          }
          FUN_0015edf0();
          FUN_00d50b20();
        }
        uVar12 = uVar12 + 1;
        local_48 = CONCAT44(local_48._4_4_,uVar12);
      } while ((int)uVar12 < *(int *)((int64_t)local_90 + 0xc));
    }
    FUN_001150f0();
    FUN_013357a0();
  }
  FUN_00d50b20();
  return;
}

