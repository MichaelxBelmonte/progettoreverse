// Function: FUN_01aaa300
// Address: 01aaa300
// Size: 8559 bytes
// Class: MUScaleBrowserItem

void FUN_01aaa300(uint64_t param_1,uint64_t param_2,size_t param_3)

{
  int64_t *plVar1;
  float *pfVar2;
  code *pcVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  void *pvVar7;
  int64_t lVar8;
  void*puVar9;
  uint64_t uVar10;
  int iVar11;
  uint uVar12;
  int64_t lVar13;
  int64_t *plVar14;
  int64_t *this_ptr;
  void*puVar15;
  uint64_t uVar16;
  int iVar17;
  uint64_t uVar18;
  float fVar19;
  float fVar20;
  uint32_t uVar21;
  double dVar22;
  double dVar23;
  int64_t local_1a8;
  char local_1a0;
  int64_t local_198;
  char local_190;
  int64_t local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  uint64_t local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t local_c0;
  uint64_t local_b8;
  uint64_t local_b0;
  uint32_t local_a4;
  int64_t *local_a0;
  char local_98;
  float local_8c;
  uint *local_88;
  int64_t local_80;
  void*local_78;
  uint64_t local_70;
  int64_t *local_68;
  char local_60;
  int64_t local_48;
  char local_40;
  double local_38;
  
  if (((((this_ptr[9] != 0) && (this_ptr[8] != 0)) &&
       ((int64_t *)this_ptr[5] != (int64_t *)0x0)) &&
      (cVar4 = (**(code **)(*(int64_t *)this_ptr[5] + 0x18))(), cVar4 != '\0')) &&
     ((this_ptr[3] == 0 || (FUN_01aa8280(), this_ptr[3] == 0)))) {
    FUN_01f27fe0();
    plVar1 = local_68;
    local_1a8 = g_027e3040;
    if (g_027e3040 != 0) {
      FUN_00d50b00();
    }
    local_1a0 = '\x01';
    local_d8 = 0;
    lVar13 = this_ptr[9];
    if (lVar13 != 0) {
      FUN_00d50b00();
    }
    local_d8 = '\x01';
    local_e0 = lVar13;
    (**(code **)(*plVar1 + 0x5f0))(&local_e0,&local_1a8);
    local_c0 = local_48;
    lVar13 = local_48;
    if (local_48 == 0) {
      local_a4 = 1;
      local_c0 = 0;
    }
    else if (local_40 == '\0') {
      FUN_00d50b00();
      local_a4 = 0;
    }
    else {
      local_40 = '\0';
      local_a4 = 0;
    }
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1a0 != '\0') && (local_1a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_198 = local_c0;
    local_190 = '\0';
    (**(code **)(*this_ptr + 0x368))();
    if ((local_190 != '\0') && (local_198 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr[3] != 0) {
      cVar4 = FUN_01aa96d0();
      if (cVar4 == '\0') {
        FUN_01aa8280();
      }
      else {
        pvVar7 = _pthread_getspecific((void*)lVar13);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar19 = (float)FUN_0125a2c0();
        plVar1 = this_ptr + 8;
        pvVar7 = _pthread_getspecific((void*)lVar13);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b790();
        pvVar7 = _pthread_getspecific((void*)lVar13);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_8c = (float)FUN_017708f0();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        pvVar7 = _pthread_getspecific((void*)lVar13);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b790();
        pvVar7 = _pthread_getspecific((void*)lVar13);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_70 = FUN_01770c70();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        pvVar7 = _pthread_getspecific((void*)lVar13);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b6f0();
        pvVar7 = _pthread_getspecific((void*)lVar13);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01736c50();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        pvVar7 = _pthread_getspecific((void*)lVar13);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b790();
        pvVar7 = _pthread_getspecific((void*)lVar13);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar4 = FUN_01770870();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (cVar4 != '\0') {
          fVar19 = fVar19 + g_0241c590;
          local_88 = (uint *)CONCAT44(local_88._4_4_,g_0239011c * local_8c);
          local_78 = (void*)CONCAT44(local_78._4_4_,fVar19 - g_0239011c * local_8c);
          do {
            plVar14 = (int64_t *)*plVar1;
            pvVar7 = _pthread_getspecific((void*)lVar13);
            if (pvVar7 != (void *)0x0) {
              plVar14 = (int64_t *)*plVar1;
              lVar8 = FUN_00e8b990();
              if (lVar8 != 0) {
                plVar14 = (int64_t *)plVar14[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
              }
            }
            fVar20 = (float)(**(code **)(*plVar14 + 0x3a0))();
          } while (fVar20 < local_78._0_4_);
          fVar19 = fVar19 + local_88._0_4_;
          do {
            plVar14 = (int64_t *)*plVar1;
            pvVar7 = _pthread_getspecific((void*)lVar13);
            if (pvVar7 != (void *)0x0) {
              plVar14 = (int64_t *)*plVar1;
              lVar8 = FUN_00e8b990();
              if (lVar8 != 0) {
                plVar14 = (int64_t *)plVar14[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
              }
            }
            fVar20 = (float)(**(code **)(*plVar14 + 0x3a0))();
          } while (fVar19 <= fVar20);
        }
        puVar9 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar9 = &g_025683c0;
        pcVar3 = g_025683d8;
        (*g_025683d8)();
        FUN_00c92170();
        FUN_00c92160();
        local_78 = puVar9;
        puVar9 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar9 = &g_025683c0;
        (*pcVar3)();
        FUN_00c92170();
        FUN_00c92160();
        local_b8 = 0;
        local_80 = 0;
        pvVar7 = _pthread_getspecific((void*)lVar13);
        if (pvVar7 != (void *)0x0) {
          local_b8 = 0;
          local_80 = 0;
          FUN_00e8b990();
        }
        local_b8 = 0;
        local_80 = 0;
        cVar4 = FUN_0173ed60();
        if (cVar4 == '\0') {
          local_b8 = 0;
          local_80 = 0;
        }
        else {
          FUN_00c8e690();
          if ((local_40 == '\0') && (local_48 != 0)) {
            FUN_00d50b00();
          }
          FUN_00c92170();
          uVar10 = FUN_00c92160();
          local_80 = local_48;
          local_b8 = CONCAT71((int7)((uint64_t)uVar10 >> 8),local_48 != 0);
          plVar14 = (int64_t *)*plVar1;
          pvVar7 = _pthread_getspecific((void*)lVar13);
          if (pvVar7 != (void *)0x0) {
            plVar14 = (int64_t *)*plVar1;
            lVar8 = FUN_00e8b990();
            if (lVar8 != 0) {
              plVar14 = (int64_t *)plVar14[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
            }
          }
          uVar21 = (**(code **)(*plVar14 + 0x3a0))();
          **(void**)(local_80 + 0x10) = uVar21;
          plVar14 = (int64_t *)*plVar1;
          pvVar7 = _pthread_getspecific((void*)lVar13);
          if (pvVar7 != (void *)0x0) {
            plVar14 = (int64_t *)*plVar1;
            lVar8 = FUN_00e8b990();
            if (lVar8 != 0) {
              plVar14 = (int64_t *)plVar14[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
            }
          }
          uVar21 = (**(code **)(*plVar14 + 0x3a0))();
          *(void*)(*(int64_t *)(local_80 + 0x10) + 4) = uVar21;
        }
        pvVar7 = _pthread_getspecific((void*)lVar13);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b790();
        pvVar7 = _pthread_getspecific((void*)lVar13);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar4 = FUN_01770870();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        puVar15 = local_78;
        if (cVar4 == '\0') {
          pvVar7 = _pthread_getspecific((void*)lVar13);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0173b790();
          pvVar7 = _pthread_getspecific((void*)lVar13);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01770f00();
          local_70 = CONCAT44(local_70._4_4_,*(void*)(local_48 + 0xc));
          if (local_40 != '\0') {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          pvVar7 = _pthread_getspecific((void*)lVar13);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0173b790();
          pvVar7 = _pthread_getspecific((void*)lVar13);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01770ea0();
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (0 < (int)local_70) {
            do {
              pvVar7 = _pthread_getspecific((void*)lVar13);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01740240();
              if (local_40 == '\0') {
                if (local_48 != 0) {
                  FUN_00d50b00();
                  goto LAB_01aab2ea;
                }
              }
              else if (local_48 != 0) {
LAB_01aab2ea:
                pvVar7 = _pthread_getspecific((void*)lVar13);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01739580();
                if (local_48 == 0) {
                  cVar4 = '\0';
                }
                else {
                  pvVar7 = _pthread_getspecific((void*)lVar13);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_01739580();
                  plVar14 = local_68;
                  lVar8 = g_027cd560;
                  if (g_027cd560 != 0) {
                    FUN_00d50b00();
                  }
                  local_148 = lVar8;
                  local_140 = '\x01';
                  cVar5 = (**(code **)(*plVar14 + 0x50))();
                  cVar4 = '\x01';
                  if (cVar5 == '\0') {
                    pvVar7 = _pthread_getspecific((void*)lVar13);
                    if (pvVar7 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_01739580();
                    plVar14 = local_a0;
                    lVar8 = g_027e3b58;
                    if (g_027e3b58 != 0) {
                      FUN_00d50b00();
                    }
                    local_138 = lVar8;
                    local_130 = '\x01';
                    cVar4 = (**(code **)(*plVar14 + 0x50))();
                    if ((local_130 != '\0') && (local_138 != 0)) {
                      FUN_00d50b20();
                    }
                    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  if ((local_140 != '\0') && (local_148 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
                puVar15 = local_78;
                if (cVar4 != '\0') {
                  plVar14 = (int64_t *)*plVar1;
                  pvVar7 = _pthread_getspecific((void*)lVar13);
                  if (pvVar7 != (void *)0x0) {
                    plVar14 = (int64_t *)*plVar1;
                    lVar8 = FUN_00e8b990();
                    if (lVar8 != 0) {
                      plVar14 = (int64_t *)plVar14[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
                    }
                  }
                  uVar10 = (**(code **)(*plVar14 + 0x3a0))();
                  local_88 = (uint *)CONCAT44(local_88._4_4_,(int)uVar10);
                  iVar17 = *(int *)(puVar15 + 3);
                  FUN_00c8e340(uVar10,1);
                  *(float *)(puVar15[2] + (int64_t)iVar17) = local_88._0_4_;
                }
                pvVar7 = _pthread_getspecific((void*)lVar13);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01739580();
                if (local_48 == 0) {
                  cVar4 = '\0';
                }
                else {
                  pvVar7 = _pthread_getspecific((void*)lVar13);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_01739580();
                  plVar14 = local_68;
                  lVar8 = g_027cd560;
                  if (g_027cd560 != 0) {
                    FUN_00d50b00();
                  }
                  local_128 = lVar8;
                  local_120 = '\x01';
                  cVar5 = (**(code **)(*plVar14 + 0x50))();
                  cVar4 = '\x01';
                  puVar15 = local_78;
                  if (cVar5 == '\0') {
                    pvVar7 = _pthread_getspecific((void*)lVar13);
                    if (pvVar7 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_01739580();
                    plVar14 = local_a0;
                    lVar8 = g_027e3b60;
                    if (g_027e3b60 != 0) {
                      FUN_00d50b00();
                    }
                    local_118 = lVar8;
                    local_110 = '\x01';
                    cVar4 = (**(code **)(*plVar14 + 0x50))();
                    puVar15 = local_78;
                    if ((local_110 != '\0') && (local_118 != 0)) {
                      FUN_00d50b20();
                    }
                    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  if ((local_120 != '\0') && (local_128 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
                if (cVar4 != '\0') {
                  plVar14 = (int64_t *)*plVar1;
                  pvVar7 = _pthread_getspecific((void*)lVar13);
                  if (pvVar7 != (void *)0x0) {
                    plVar14 = (int64_t *)*plVar1;
                    lVar8 = FUN_00e8b990();
                    if (lVar8 != 0) {
                      plVar14 = (int64_t *)plVar14[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
                    }
                  }
                  uVar10 = (**(code **)(*plVar14 + 0x3a0))();
                  local_88 = (uint *)CONCAT44(local_88._4_4_,(int)uVar10);
                  iVar17 = *(int *)(puVar9 + 3);
                  FUN_00c8e340(uVar10,1);
                  *(float *)(puVar9[2] + (int64_t)iVar17) = local_88._0_4_;
                }
                FUN_00d50b20();
              }
              iVar17 = (int)local_70 + -1;
              local_70 = CONCAT44(local_70._4_4_,iVar17);
            } while (iVar17 != 0);
          }
          local_88 = (uint *)(puVar15 + 3);
          local_b0 = (uint64_t)*(uint *)(puVar9 + 3);
          uVar6 = 0;
        }
        else {
          if (-1 < (int)local_70) {
            local_70 = (uint64_t)((int)local_70 + 1);
            do {
              pvVar7 = _pthread_getspecific((void*)lVar13);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01740240();
              if (local_40 == '\0') {
                if (local_48 != 0) {
                  FUN_00d50b00();
                  goto LAB_01aaac5c;
                }
              }
              else if (local_48 != 0) {
LAB_01aaac5c:
                pvVar7 = _pthread_getspecific((void*)lVar13);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01739580();
                if (local_48 == 0) {
                  cVar4 = '\0';
                }
                else {
                  pvVar7 = _pthread_getspecific((void*)lVar13);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_01739580();
                  plVar14 = local_68;
                  lVar8 = g_027cd560;
                  if (g_027cd560 != 0) {
                    FUN_00d50b00();
                  }
                  local_188 = lVar8;
                  local_180 = '\x01';
                  cVar5 = (**(code **)(*plVar14 + 0x50))();
                  cVar4 = '\x01';
                  if (cVar5 == '\0') {
                    pvVar7 = _pthread_getspecific((void*)lVar13);
                    if (pvVar7 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_01739580();
                    plVar14 = local_a0;
                    lVar8 = g_027e3b58;
                    if (g_027e3b58 != 0) {
                      FUN_00d50b00();
                    }
                    local_178 = lVar8;
                    local_170 = '\x01';
                    cVar4 = (**(code **)(*plVar14 + 0x50))();
                    if ((local_170 != '\0') && (local_178 != 0)) {
                      FUN_00d50b20();
                    }
                    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  if ((local_180 != '\0') && (local_188 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
                if (cVar4 != '\0') {
                  plVar14 = (int64_t *)*plVar1;
                  pvVar7 = _pthread_getspecific((void*)lVar13);
                  if (pvVar7 != (void *)0x0) {
                    plVar14 = (int64_t *)*plVar1;
                    lVar8 = FUN_00e8b990();
                    if (lVar8 != 0) {
                      plVar14 = (int64_t *)plVar14[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
                    }
                  }
                  uVar10 = (**(code **)(*plVar14 + 0x3a0))();
                  local_88 = (uint *)CONCAT44(local_88._4_4_,(int)uVar10);
                  iVar17 = *(int *)(local_78 + 3);
                  FUN_00c8e340(uVar10,1);
                  *(float *)(local_78[2] + (int64_t)iVar17) = local_88._0_4_;
                }
                pvVar7 = _pthread_getspecific((void*)lVar13);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01739580();
                if (local_48 == 0) {
                  cVar4 = '\0';
                }
                else {
                  pvVar7 = _pthread_getspecific((void*)lVar13);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_01739580();
                  plVar14 = local_68;
                  lVar8 = g_027cd560;
                  if (g_027cd560 != 0) {
                    FUN_00d50b00();
                  }
                  local_168 = lVar8;
                  local_160 = '\x01';
                  cVar5 = (**(code **)(*plVar14 + 0x50))();
                  cVar4 = '\x01';
                  if (cVar5 == '\0') {
                    pvVar7 = _pthread_getspecific((void*)lVar13);
                    if (pvVar7 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_01739580();
                    plVar14 = local_a0;
                    lVar8 = g_027e3b60;
                    if (g_027e3b60 != 0) {
                      FUN_00d50b00();
                    }
                    local_158 = lVar8;
                    local_150 = '\x01';
                    cVar4 = (**(code **)(*plVar14 + 0x50))();
                    if ((local_150 != '\0') && (local_158 != 0)) {
                      FUN_00d50b20();
                    }
                    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  if ((local_160 != '\0') && (local_168 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
                if (cVar4 != '\0') {
                  plVar14 = (int64_t *)*plVar1;
                  pvVar7 = _pthread_getspecific((void*)lVar13);
                  if (pvVar7 != (void *)0x0) {
                    plVar14 = (int64_t *)*plVar1;
                    lVar8 = FUN_00e8b990();
                    if (lVar8 != 0) {
                      plVar14 = (int64_t *)plVar14[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
                    }
                  }
                  uVar10 = (**(code **)(*plVar14 + 0x3a0))();
                  local_88 = (uint *)CONCAT44(local_88._4_4_,(int)uVar10);
                  iVar17 = *(int *)(puVar9 + 3);
                  FUN_00c8e340(uVar10,1);
                  *(float *)(puVar9[2] + (int64_t)iVar17) = local_88._0_4_;
                }
                FUN_00d50b20();
              }
              uVar6 = (int)local_70 - 1;
              local_70 = (uint64_t)uVar6;
            } while (uVar6 != 0);
          }
          puVar15 = local_78;
          local_88 = (uint *)(local_78 + 3);
          uVar18 = (uint64_t)*(uint *)(puVar9 + 3);
          uVar6 = *local_88;
          local_b0 = uVar18;
          if (7 < (int)uVar6) {
            pvVar7 = (void *)local_78[2];
            fVar19 = *(float *)((int64_t)pvVar7 + (uint64_t)((uVar6 >> 2) - 2) * 4);
            FUN_00c8e340(pvVar7,1);
            fVar19 = fVar19 - local_8c;
            pfVar2 = (float *)puVar15[2];
            _memmove(pvVar7,(void *)(uint64_t)uVar6,param_3);
            *pfVar2 = fVar19;
            uVar18 = (uint64_t)*(uint *)(puVar9 + 3);
          }
          uVar6 = (uint)(7 < (int)uVar6);
          if (7 < (int)uVar18) {
            fVar19 = *(float *)(puVar9[2] + 4);
            FUN_00c8e340(fVar19,1);
            *(float *)(puVar9[2] + uVar18) = local_8c + fVar19;
          }
        }
        local_e8 = (uint64_t)((int)local_b0 + 3);
        if (-1 < (int)local_b0) {
          local_e8 = local_b0 & 0xffffffff;
        }
        iVar17 = *(int *)(puVar15 + 3);
        iVar11 = iVar17 + 3;
        if (-1 < iVar17) {
          iVar11 = iVar17;
        }
        local_38 = 0.0;
        local_8c = (float)uVar6;
        if ((int)uVar6 < iVar11 >> 2) {
          uVar18 = (uint64_t)uVar6;
          if (local_80 == 0) {
            local_38 = 0.0;
            do {
              lVar13 = this_ptr[10];
              if (lVar13 != 0) {
                FUN_00d50b00();
              }
              FUN_01aa9200(local_38,*(void*)(local_78[2] + uVar18 * 4));
              if (lVar13 != 0) {
                FUN_00d50b20();
              }
              local_38 = local_38 + g_0241c598;
              if (uVar18 != 0) {
                lVar13 = this_ptr[10];
                if (lVar13 != 0) {
                  FUN_00d50b00();
                }
                FUN_01aa9200(local_38,*(void*)
                                       (local_78[2] + (uint64_t)((int)uVar18 - 1) * 4));
                if (lVar13 != 0) {
                  FUN_00d50b20();
                }
              }
              local_38 = local_38 + g_0241c598;
              lVar13 = this_ptr[10];
              if (lVar13 != 0) {
                FUN_00d50b00();
              }
              FUN_01aa9200(local_38,*(void*)(local_78[2] + uVar18 * 4));
              if (lVar13 != 0) {
                FUN_00d50b20();
              }
              uVar18 = uVar18 + 1;
              uVar6 = *local_88;
              uVar12 = uVar6 + 3;
              if (-1 < (int)uVar6) {
                uVar12 = uVar6;
              }
              local_38 = local_38 + g_0241c598;
            } while ((int64_t)uVar18 < (int64_t)((int)uVar12 >> 2));
          }
          else {
            local_38 = 0.0;
            iVar17 = 0;
            local_70 = local_70 & 0xffffffff00000000;
            uVar16 = 0;
            do {
              lVar13 = this_ptr[10];
              if (lVar13 != 0) {
                FUN_00d50b00();
              }
              FUN_01aa9200(local_38,*(void*)(local_78[2] + uVar18 * 4));
              if (lVar13 != 0) {
                FUN_00d50b20();
              }
              if (iVar17 + (int)(uVar16 / 6) * 6 == 0) {
                lVar13 = this_ptr[0xb];
                if (lVar13 != 0) {
                  FUN_00d50b00();
                }
                FUN_01aa9200(local_38,*(void*)
                                       (*(int64_t *)(local_80 + 0x10) +
                                       (int64_t)((int)local_70 % 2) * 4));
                if (lVar13 != 0) {
                  FUN_00d50b20();
                }
                local_70 = CONCAT44(local_70._4_4_,(int)local_70 + 1);
              }
              local_38 = local_38 + g_0241c598;
              if (uVar18 != 0) {
                lVar13 = this_ptr[10];
                if (lVar13 != 0) {
                  FUN_00d50b00();
                }
                FUN_01aa9200(local_38,*(void*)
                                       (local_78[2] + (uint64_t)((int)uVar18 - 1) * 4));
                if (lVar13 != 0) {
                  FUN_00d50b20();
                }
              }
              local_38 = local_38 + g_0241c598;
              lVar13 = this_ptr[10];
              if (lVar13 != 0) {
                FUN_00d50b00();
              }
              FUN_01aa9200(local_38,*(void*)(local_78[2] + uVar18 * 4));
              if (lVar13 != 0) {
                FUN_00d50b20();
              }
              uVar16 = (uint64_t)((int)uVar16 + 3);
              local_38 = local_38 + g_0241c598;
              uVar18 = uVar18 + 1;
              uVar6 = *local_88;
              uVar12 = uVar6 + 3;
              if (-1 < (int)uVar6) {
                uVar12 = uVar6;
              }
              iVar17 = iVar17 + -3;
            } while ((int64_t)uVar18 < (int64_t)((int)uVar12 >> 2));
          }
        }
        iVar17 = 0;
        if ((int)local_b0 < 4) {
          local_b0 = (uint64_t)local_b0._4_4_ << 0x20;
        }
        else {
          uVar6 = (int)local_e8 >> 2;
          local_e8 = (uint64_t)uVar6;
          uVar18 = (uint64_t)uVar6;
          if (local_80 == 0) {
            uVar16 = (uint64_t)(uVar6 - 1);
            while( true ) {
              lVar13 = this_ptr[10];
              if (lVar13 != 0) {
                FUN_00d50b00();
              }
              FUN_01aa9200(local_38,*(void*)(puVar9[2] + uVar16 * 4));
              if (lVar13 != 0) {
                FUN_00d50b20();
              }
              local_38 = local_38 + g_0241c598;
              if ((int)uVar16 == 0) break;
              iVar17 = *(int *)(puVar9 + 3);
              iVar11 = iVar17 + 3;
              if (-1 < iVar17) {
                iVar11 = iVar17;
              }
              if ((int64_t)uVar18 < (int64_t)(iVar11 >> 2)) {
                lVar13 = this_ptr[10];
                if (lVar13 != 0) {
                  FUN_00d50b00();
                }
                FUN_01aa9200(local_38,*(void*)(puVar9[2] + uVar18 * 4));
                if (lVar13 != 0) {
                  FUN_00d50b20();
                }
              }
              local_38 = local_38 + g_0241c598;
              lVar13 = this_ptr[10];
              if (lVar13 != 0) {
                FUN_00d50b00();
              }
              FUN_01aa9200(local_38,*(void*)(puVar9[2] + uVar16 * 4));
              if (lVar13 != 0) {
                FUN_00d50b20();
              }
              local_38 = local_38 + g_0241c598;
              uVar18 = uVar18 - 1;
              uVar16 = uVar16 - 1;
            }
            local_b0 = local_b0 & 0xffffffff00000000;
          }
          else {
            uVar16 = (uint64_t)(uVar6 - 1);
            local_70 = 0;
            local_b0 = (uint64_t)local_b0._4_4_ << 0x20;
            uVar6 = 0;
            while( true ) {
              lVar13 = this_ptr[10];
              if (lVar13 != 0) {
                FUN_00d50b00();
              }
              FUN_01aa9200(local_38,*(void*)(puVar9[2] + uVar16 * 4));
              if (lVar13 != 0) {
                FUN_00d50b20();
              }
              if ((int)local_70 + (uVar6 / 6) * 6 == 0) {
                lVar13 = this_ptr[0xb];
                if (lVar13 != 0) {
                  FUN_00d50b00();
                }
                FUN_01aa9200(local_38,*(void*)
                                       (*(int64_t *)(local_80 + 0x10) +
                                       (int64_t)((int)local_b0 % 2) * 4));
                if (lVar13 != 0) {
                  FUN_00d50b20();
                }
                local_b0 = CONCAT44(local_b0._4_4_,(int)local_b0 + 1);
              }
              local_38 = local_38 + g_0241c598;
              if ((int)uVar18 == 1) break;
              iVar17 = *(int *)(puVar9 + 3);
              iVar11 = iVar17 + 3;
              if (-1 < iVar17) {
                iVar11 = iVar17;
              }
              if ((int64_t)uVar18 < (int64_t)(iVar11 >> 2)) {
                lVar13 = this_ptr[10];
                if (lVar13 != 0) {
                  FUN_00d50b00();
                }
                FUN_01aa9200(local_38,*(void*)(puVar9[2] + uVar18 * 4));
                if (lVar13 != 0) {
                  FUN_00d50b20();
                }
              }
              local_38 = local_38 + g_0241c598;
              lVar13 = this_ptr[10];
              if (lVar13 != 0) {
                FUN_00d50b00();
              }
              FUN_01aa9200(local_38,*(void*)(puVar9[2] + uVar16 * 4));
              if (lVar13 != 0) {
                FUN_00d50b20();
              }
              uVar6 = uVar6 + 3;
              local_38 = local_38 + g_0241c598;
              uVar18 = uVar18 - 1;
              uVar16 = uVar16 - 1;
              local_70 = (uint64_t)((int)local_70 - 3);
            }
          }
          iVar17 = (int)local_e8 * 3 + -2;
        }
        puVar15 = local_78;
        if ((local_8c != 0.0) && (0xb < (int)*local_88)) {
          lVar13 = this_ptr[10];
          if (lVar13 != 0) {
            FUN_00d50b00();
          }
          FUN_01aa9200(local_38,*(void*)(puVar15[2] + 8));
          if (lVar13 != 0) {
            FUN_00d50b20();
          }
          lVar13 = this_ptr[10];
          if (lVar13 != 0) {
            FUN_00d50b00();
          }
          local_38 = local_38 + g_0241c598;
          FUN_01aa9200(local_38,*(void*)puVar15[2]);
          if (lVar13 != 0) {
            FUN_00d50b20();
          }
          lVar13 = this_ptr[10];
          if (lVar13 != 0) {
            FUN_00d50b00();
          }
          local_38 = local_38 + g_0241c598;
          FUN_01aa9200(local_38,*(void*)(puVar15[2] + 4));
          if (lVar13 != 0) {
            FUN_00d50b20();
          }
          if ((local_80 != 0) && ((iVar17 + 2) % 6 == 0)) {
            lVar13 = this_ptr[0xb];
            if (lVar13 != 0) {
              FUN_00d50b00();
            }
            FUN_01aa9200(local_38,*(void*)
                                   (*(int64_t *)(local_80 + 0x10) +
                                   (int64_t)((int)local_b0 % 2) * 4));
            if (lVar13 != 0) {
              FUN_00d50b20();
            }
          }
        }
        this_ptr[0x11] = (int64_t)(local_38 + g_0241c5a0);
        this_ptr[0x10] = 0;
        if (this_ptr[0x12] != 0) {
          this_ptr[0x11] = 0x40c3880000000000;
        }
        FUN_012d25b0();
        local_d0 = local_68;
        local_c8 = 0;
        if (local_60 == '\0') {
          if (local_68 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        local_c8 = '\x01';
        FUN_0141c4c0(0);
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_0141cb70(this_ptr[0x11]);
        if ((local_40 == '\0') && (local_48 != 0)) {
          FUN_00d50b00();
        }
        local_108 = local_48;
        local_100 = '\0';
        (**(code **)(*(int64_t *)this_ptr[3] + 0x690))();
        if ((local_100 != '\0') && (local_108 != 0)) {
          FUN_00d50b20();
        }
        local_f8 = local_48;
        local_f0 = '\0';
        (**(code **)(*(int64_t *)this_ptr[3] + 0x690))();
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          FUN_00d50b20();
        }
        dVar22 = (double)FUN_00e7d6f0();
        dVar22 = dVar22 + g_023b3bc0;
        while (cVar4 = FUN_01aa7eb0(), cVar4 == '\0') {
          dVar23 = (double)FUN_00e7d6f0();
          if (dVar22 < dVar23) {
            FUN_01aa8280();
            break;
          }
          FUN_00b33790();
          FUN_00da6b00();
        }
        if (local_48 != 0) {
          FUN_00d50b20();
          FUN_00d50b20();
        }
        if (((char)local_b8 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if (puVar9 != (void*)0x0) {
          FUN_00d50b20();
        }
        if (puVar15 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
    }
    if ((char)local_a4 == '\0' && local_c0 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

