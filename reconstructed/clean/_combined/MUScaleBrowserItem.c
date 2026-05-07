// ===================================================================
// MUScaleBrowserItem — Complete reconstructed pseudocode
// 28 functions
// ===================================================================


// ============================================================
// 01aaa300
// ============================================================
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



// ============================================================
// 01b4ed20
// ============================================================
// Function: FUN_01b4ed20
// Address: 01b4ed20
// Size: 5208 bytes
// Class: MUScaleBrowserItem
// String references:
//   "%@.%@"
//   "MUScaleBrowserItem"

uint32_t FUN_01b4ed20(uint32_t param_1,int param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  void* pVar7;
  int64_t **pplVar8;
  int64_t *plVar9;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *unaff_R12;
  uint64_t uVar10;
  int64_t *unaff_R13;
  undefined7 uVar12;
  int64_t *plVar11;
  bool bVar13;
  uint32_t uVar14;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t *local_1d8;
  int64_t local_198;
  char local_190;
  int64_t *local_188;
  char local_180;
  int64_t *local_178;
  char local_170;
  int64_t *local_168;
  char local_160;
  int64_t *local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t *local_138;
  char local_130;
  int64_t *local_128;
  char local_120;
  int64_t *local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int local_f4;
  int64_t *local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t *local_b0;
  int64_t *local_a8;
  int64_t *local_a0;
  int64_t *local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  int64_t *local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  uint64_t local_38;
  
  local_f4 = param_2;
  if ((param_2 == 0) || (*(int64_t *)(this_ptr + 0x70) == 0)) goto LAB_01b4ffc6;
  FUN_01e56750();
  if (local_78 == (int64_t *)0x0) {
    bVar13 = false;
  }
  else {
    FUN_01e56750();
    FUN_01e5ca90();
    bVar13 = local_48 != (int64_t *)0x0;
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar13) {
    FUN_01e56750();
    FUN_01e5ca90();
    FUN_01d88f70();
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01e53c20();
    if (local_78 == (int64_t *)0x0) {
      bVar13 = false;
    }
    else {
      FUN_01e53c20();
      FUN_01e42030();
      bVar13 = local_48 != (int64_t *)0x0;
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar13) {
      FUN_01e53c20();
      FUN_01e42030();
      FUN_01d88f70();
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  pplVar8 = &local_78;
  FUN_01ceb020();
  plVar9 = local_78;
  if ((g_02737920 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_027e2e88 = FUN_00d4fe50();
    g_027e2e70 = "MUScaleBrowserItem";
    g_027e2e78 = 0x20;
    g_027e2e80 = FUN_00841ad0;
    g_027e2e90 = 0;
    ram_00000000027e2e98 = 0;
    g_027e2ea0 = 0;
    ram_00000000027e2ea8 = 0;
    g_027e2eb0 = 0;
    ram_00000000027e2eb8 = 0;
    g_027e2ec0 = 0;
    ram_00000000027e2ec8 = 0;
    g_027e2ed0 = 0;
    ram_00000000027e2ed8 = 0;
    g_027e2ee0 = 0;
    ram_00000000027e2ee8 = 0;
    g_027e2ef0 = 0;
    ram_00000000027e2ef8 = 0;
    g_027e2f00 = 0;
    ram_00000000027e2f08 = 0;
    g_027e2f10 = 0;
    ram_00000000027e2f18 = 0;
    g_027e2f20 = 0;
    ram_00000000027e2f28 = 0;
    g_027e2f30 = 0;
    ___cxa_guard_release();
  }
  if (plVar9 == (int64_t *)0x0) {
LAB_01b4ef48:
    pplVar8 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_01b4ef48;
  }
  plVar9 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar9 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar9 != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0x970))();
    unaff_R12 = local_78;
    if (local_70 == '\0') {
      if (local_78 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = '\0';
    }
    FUN_01aa3f90();
    unaff_R13 = local_48;
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    cVar4 = FUN_01b4cd30();
    if (unaff_R13 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (unaff_R12 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0x970))();
      lVar1 = g_027e47f0;
      if (g_027e47f0 != 0) {
        FUN_00d50b00();
      }
      local_f0 = local_90;
      local_e0 = lVar1;
      FUN_00083ea0(2,&local_e0);
      uVar14 = FUN_000b4da0();
      unaff_R12 = local_48;
      if (local_40 == '\0') {
        if (((local_48 != (int64_t *)0x0) && (uVar14 = FUN_00d50b00(), local_40 != '\0')) &&
           (local_48 != (int64_t *)0x0)) {
          uVar14 = FUN_00d50b20();
        }
      }
      else {
        local_40 = '\0';
      }
      local_78 = (int64_t *)&g_0253d630;
      if ((local_50 != '\0') && (local_58 != 0)) {
        uVar14 = FUN_00d50b20();
      }
      local_78 = &g_024c5048;
      if ((local_60 != '\0') && (local_68 != 0)) {
        uVar14 = FUN_00d50b20();
      }
      if (lVar1 != 0) {
        uVar14 = FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        uVar14 = FUN_00d50b20();
      }
      lVar1 = g_027e47e0;
      if (g_027e47e0 != 0) {
        uVar14 = FUN_00d50b00();
      }
      lVar2 = g_027e47f8;
      if (g_027e47f8 != 0) {
        uVar14 = FUN_00d50b00();
      }
      local_198 = lVar2;
      local_190 = '\x01';
      FUN_01f6ca30(uVar14,&local_198);
      local_188 = unaff_R12;
      local_180 = '\0';
      iVar5 = (**(code **)(*local_78 + 0x5d8))();
      if ((local_180 != '\0') && (local_188 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_190 != '\0') && (local_198 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (unaff_R12 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (iVar5 == 1) {
        FUN_00d50b20();
        return 0;
      }
    }
    FUN_00d50b20();
  }
  pplVar8 = &local_78;
  FUN_01ceb020();
  plVar9 = local_78;
  if ((g_02737920 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_027e2e88 = FUN_00d4fe50();
    g_027e2e70 = "MUScaleBrowserItem";
    g_027e2e78 = 0x20;
    g_027e2e80 = FUN_00841ad0;
    g_027e2e90 = 0;
    ram_00000000027e2e98 = 0;
    g_027e2ea0 = 0;
    ram_00000000027e2ea8 = 0;
    g_027e2eb0 = 0;
    ram_00000000027e2eb8 = 0;
    g_027e2ec0 = 0;
    ram_00000000027e2ec8 = 0;
    g_027e2ed0 = 0;
    ram_00000000027e2ed8 = 0;
    g_027e2ee0 = 0;
    ram_00000000027e2ee8 = 0;
    g_027e2ef0 = 0;
    ram_00000000027e2ef8 = 0;
    g_027e2f00 = 0;
    ram_00000000027e2f08 = 0;
    g_027e2f10 = 0;
    ram_00000000027e2f18 = 0;
    g_027e2f20 = 0;
    ram_00000000027e2f28 = 0;
    g_027e2f30 = 0;
    ___cxa_guard_release();
  }
  if (plVar9 == (int64_t *)0x0) {
LAB_01b4f2a6:
    pplVar8 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_01b4f2a6;
  }
  plVar9 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar9 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_b0 = plVar9;
  (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0x970))();
  local_a8 = local_78;
  if ((((local_70 == '\0') && (local_78 != (int64_t *)0x0)) && (FUN_00d50b00(), local_70 != '\0'))
     && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar12 = (undefined7)((uint64_t)unaff_R13 >> 8);
  if (plVar9 == (int64_t *)0x0) {
    FUN_017bf2e0();
    local_80 = local_78;
    if (local_78 == (int64_t *)0x0) goto LAB_01b4f3c3;
    uVar10 = CONCAT71(uVar12,1);
    if (((local_70 == '\0') && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != (int64_t *)0x0))
    {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01aa3f90();
    local_80 = local_78;
    if (local_78 == (int64_t *)0x0) {
LAB_01b4f3c3:
      uVar10 = 0;
      local_80 = (int64_t *)0x0;
    }
    else {
      uVar10 = CONCAT71(uVar12,1);
      if (((local_70 == '\0') && (FUN_00d50b00(), local_70 != '\0')) &&
         (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  (**(code **)(*local_80 + 0x368))();
  plVar9 = local_78;
  FUN_017bf050();
  (**(code **)(*local_90 + 0x368))();
  local_d0 = local_48;
  local_c8 = 0;
  if (local_40 == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_c8 = '\x01';
  cVar4 = FUN_00d90870();
  if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    local_38 = uVar10;
    (**(code **)(*local_80 + 0x368))();
    plVar11 = local_78;
    if ((((local_70 == '\0') && (local_78 != (int64_t *)0x0)) && (FUN_00d50b00(), local_70 != '\0')
        ) && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_017bf050();
    (**(code **)(*local_90 + 0x368))();
    iVar5 = FUN_00d8c7a0();
    FUN_00d8f140(extraout_XMM0_Da,iVar5 + 1);
    plVar9 = plVar11;
    if (plVar11 == local_78) {
LAB_01b4f5a9:
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      plVar9 = local_78;
      if (local_70 == '\0') {
        if (local_78 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if (plVar11 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        goto LAB_01b4f5a9;
      }
      if (plVar11 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      local_70 = '\0';
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar14 = FUN_017bf2e0();
    plVar11 = local_78;
    if ((((local_70 == '\0') && (local_78 != (int64_t *)0x0)) &&
        (uVar14 = FUN_00d50b00(), local_70 != '\0')) && (local_78 != (int64_t *)0x0)) {
      uVar14 = FUN_00d50b20();
    }
    local_170 = '\0';
    local_178 = plVar9;
    (**(code **)(*plVar11 + 0x400))(uVar14,&local_178);
    plVar11 = local_78;
    uVar12 = (undefined7)((uint64_t)unaff_R12 >> 8);
    if (local_78 == local_80) {
      if (((char)local_38 == '\0') && (local_78 != (int64_t *)0x0)) {
        if (local_70 != '\0') goto LAB_01b4f6b8;
        uVar10 = CONCAT71(uVar12,1);
        FUN_00d50b00();
      }
      else {
        uVar10 = local_38 & 0xffffffff;
      }
LAB_01b4f6c5:
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_70 == '\0') {
        if (local_78 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        uVar10 = CONCAT71(uVar12,1);
        if ((char)local_38 == '\0') {
          local_80 = plVar11;
        }
        else {
          local_80 = plVar11;
          FUN_00d50b20();
        }
        goto LAB_01b4f6c5;
      }
      if ((char)local_38 == '\0') {
        local_80 = local_78;
      }
      else {
        local_80 = local_78;
        FUN_00d50b20();
      }
LAB_01b4f6b8:
      local_70 = '\0';
      uVar10 = CONCAT71(uVar12,1);
    }
    if ((local_170 != '\0') && (local_178 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (plVar9 == (int64_t *)0x0) {
      uVar10 = uVar10 & 0xffffffff;
    }
    else {
      FUN_00d50b20();
      uVar10 = uVar10 & 0xffffffff;
    }
  }
  FUN_017a9f30();
  FUN_00df1af0();
  local_1d8 = local_f0;
  pVar7 = 2;
  uVar14 = FUN_00083ea0(2,&local_1d8);
  uVar14 = FUN_00d8cb40(uVar14,&local_78);
  local_c0 = local_90;
  local_b8 = 0;
  if (local_88 == '\0') {
    if (local_90 != (int64_t *)0x0) {
      uVar14 = FUN_00d50b00();
    }
  }
  else {
    local_88 = '\0';
  }
  plVar11 = local_80;
  local_b8 = '\x01';
  (**(code **)(*local_80 + 0x400))(uVar14,&local_c0);
  plVar3 = local_48;
  cVar4 = (char)uVar10;
  uVar12 = (undefined7)((uint64_t)plVar9 >> 8);
  if (local_48 == plVar11) {
    if ((cVar4 == '\0') && (local_48 != (int64_t *)0x0)) {
      if (local_40 != '\0') goto LAB_01b4f87a;
      uVar10 = CONCAT71(uVar12,1);
      FUN_00d50b00();
    }
    else {
      uVar10 = uVar10 & 0xffffffff;
    }
joined_r0x01b4fd36:
    if ((local_40 == '\0') || (local_48 == (int64_t *)0x0)) {
      uVar10 = uVar10 & 0xffffffff;
    }
    else {
      FUN_00d50b20();
      uVar10 = uVar10 & 0xffffffff;
    }
  }
  else {
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      uVar10 = CONCAT71(uVar12,1);
      local_80 = plVar3;
      if (cVar4 != '\0') {
        FUN_00d50b20();
      }
      goto joined_r0x01b4fd36;
    }
    if (cVar4 == '\0') {
      local_80 = local_48;
    }
    else {
      local_80 = local_48;
      FUN_00d50b20();
    }
LAB_01b4f87a:
    local_40 = '\0';
    uVar10 = CONCAT71((int7)((uint64_t)plVar3 >> 8),1);
  }
  if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_78 = (int64_t *)&g_0253d630;
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  local_78 = &g_024c5048;
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*local_80 + 0x3f0))();
  cVar4 = FUN_00ce6e30();
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    (**(code **)(*local_80 + 0x3f0))();
    (**(code **)(*local_78 + 0x428))();
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*local_80 + 0x3f0))();
  cVar4 = FUN_00ce6e30();
  param_1 = extraout_XMM0_Da_00;
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    param_1 = FUN_00d50b20();
  }
  plVar9 = local_b0;
  if (cVar4 != '\0') {
    param_1 = FUN_01d2ac30();
    if (local_70 == '\0') {
      if (local_78 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01b4fa12;
      }
    }
    else if (local_78 != (int64_t *)0x0) {
LAB_01b4fa12:
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_168 = local_a8;
      local_160 = '\0';
      FUN_017aaae0();
      if ((local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_017bf2e0();
      plVar11 = local_78;
      if ((((local_70 == '\0') && (local_78 != (int64_t *)0x0)) &&
          (FUN_00d50b00(), local_70 != '\0')) && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_80 + 0x3f0))();
      local_158 = plVar11;
      local_150 = '\0';
      cVar4 = (**(code **)(*local_78 + 0x50))();
      if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') {
        (**(code **)(*local_80 + 0x3f0))();
        (**(code **)(*local_48 + 0x388))();
        plVar9 = local_78;
        if (local_70 == '\0') {
          if (((local_78 != (int64_t *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
             (local_78 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_70 = '\0';
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_138 = plVar9;
        local_130 = '\0';
        FUN_01aaed70();
        local_a0 = local_78;
        if (plVar9 == local_78) {
          local_a0 = plVar9;
LAB_01b4fdb6:
          if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_70 == '\0') {
            if (local_78 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            if (plVar9 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            goto LAB_01b4fdb6;
          }
          if (plVar9 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          local_70 = '\0';
        }
        if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017aa5e0();
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b6f0();
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_128 = local_a0;
        local_120 = '\0';
        FUN_01735120();
        plVar9 = local_b0;
        if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_a0 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      else {
        local_98 = plVar11;
        local_38 = uVar10;
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017aa5e0();
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b6f0();
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar1 = g_027e3c20;
        if (g_027e3c20 != 0) {
          FUN_00d50b00();
        }
        local_148 = lVar1;
        local_140 = '\x01';
        FUN_01735120();
        uVar10 = local_38;
        plVar11 = local_98;
        plVar9 = local_b0;
        if ((local_140 != '\0') && (local_148 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_118 = local_80;
      local_110 = '\0';
      FUN_017bea90();
      if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar11 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      param_1 = FUN_00d50b20();
    }
  }
  if ((char)uVar10 != '\0') {
    param_1 = FUN_00d50b20();
  }
  if (local_a8 != (int64_t *)0x0) {
    param_1 = FUN_00d50b20();
  }
  if (plVar9 != (int64_t *)0x0) {
    param_1 = FUN_00d50b20();
  }
LAB_01b4ffc6:
  local_108 = *arg1;
  local_100 = '\0';
  uVar14 = FUN_01ad0160(param_1,(uint8_t)local_f4);
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  return uVar14;
}



// ============================================================
// 01b391e0
// ============================================================
// Function: FUN_01b391e0
// Address: 01b391e0
// Size: 4877 bytes
// Class: MUScaleBrowserItem
// String references:
//   "MUScaleBrowserItem"

uint64_t FUN_01b391e0(void* param_1,int param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  uint8_t uVar5;
  byte bVar6;
  int iVar7;
  uint64_t uVar8;
  void *pvVar9;
  void*puVar10;
  int64_t *plVar11;
  int64_t *plVar12;
  int64_t **pplVar13;
  int64_t this_ptr;
  int64_t lVar14;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  int64_t *local_1e8;
  char local_1e0;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t *local_108;
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
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  uint64_t local_60;
  uint32_t local_54;
  int64_t local_50;
  int64_t *local_48;
  char local_40;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar8 = FUN_01b3e280();
  local_68 = local_48;
  if (local_40 == '\0') {
    if (local_48 == (int64_t *)0x0) goto LAB_01b392ad;
    FUN_00d50b00();
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_01b39245:
    local_b0 = 0;
    lVar14 = *(int64_t *)(this_ptr + 0x120);
    if (lVar14 != 0) {
      FUN_00d50b00();
    }
    local_b0 = '\x01';
    local_b8 = lVar14;
    cVar4 = (**(code **)(*local_68 + 0x50))();
    uVar8 = extraout_XMM0_Qa_00;
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      uVar8 = FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      FUN_00d50b20();
      return 1;
    }
    local_54 = 0;
    plVar12 = *(int64_t **)(this_ptr + 0x120);
    if (plVar12 != local_68) {
LAB_01b392d5:
      if ((char)local_54 == '\0') {
        uVar8 = FUN_00d50b00();
      }
      *(int64_t **)(this_ptr + 0x120) = local_68;
      if (plVar12 != (int64_t *)0x0) {
        local_60 = 0;
        uVar8 = FUN_00d50b20();
      }
    }
  }
  else {
    if (local_48 != (int64_t *)0x0) goto LAB_01b39245;
LAB_01b392ad:
    local_54 = (uint32_t)CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
    plVar12 = *(int64_t **)(this_ptr + 0x120);
    uVar8 = extraout_XMM0_Qa;
    if (plVar12 != local_48) goto LAB_01b392d5;
  }
  if ((char)local_54 == '\0') {
    FUN_01b06a50();
    cVar4 = FUN_01aa7eb0();
    uVar8 = extraout_XMM0_Qa_01;
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      FUN_01f27fe0();
      local_a0 = 0;
      (**(code **)(*(int64_t *)(this_ptr + 0x90) + 0x10))();
      FUN_00d50b00();
      local_a0 = '\x01';
      local_a8 = (int64_t *)(this_ptr + 0x90);
      FUN_01f474f0();
      if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
        (**(code **)(*local_a8 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01b06a50();
      FUN_01aa8280();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar8 = FUN_01aa5ff0(0);
    }
  }
  if (*(int64_t *)(this_ptr + 0xe0) != 0) {
    *(void*)(this_ptr + 0xe0) = 0;
    local_60 = 0;
    uVar8 = FUN_00d50b20();
  }
  if ((char)local_54 != '\0') goto LAB_01b39902;
  FUN_017b2910(uVar8,0);
  plVar12 = *(int64_t **)(this_ptr + 0xd8);
  plVar1 = plVar12;
  plVar11 = plVar12;
  if (plVar12 != local_48) {
    if (local_40 == '\0') {
      if (local_48 == (int64_t *)0x0) {
        *(void*)(this_ptr + 0xd8) = 0;
        plVar1 = (int64_t *)0x0;
      }
      else {
        FUN_00d50b00();
        plVar12 = *(int64_t **)(this_ptr + 0xd8);
        *(int64_t **)(this_ptr + 0xd8) = local_48;
        plVar1 = local_48;
      }
    }
    else {
      local_40 = '\0';
      *(int64_t **)(this_ptr + 0xd8) = local_48;
      plVar1 = local_48;
    }
    plVar11 = plVar1;
    if (plVar12 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar1 = *(int64_t **)(this_ptr + 0xd8);
      plVar11 = local_48;
    }
  }
  if ((local_40 != '\0') && (plVar11 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    (**(code **)(*local_68 + 0x370))();
    plVar12 = local_48;
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01b3a2a1;
      }
    }
    else if (local_48 != (int64_t *)0x0) {
LAB_01b3a2a1:
      FUN_017a9f30();
      local_98 = local_48;
      local_90 = 0;
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_90 = '\x01';
      cVar4 = (**(code **)(*plVar12 + 0x50))();
      if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 != '\0') {
        puVar10 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        param_1 = 0x26034e8;
        *puVar10 = &g_026034e8;
        puVar10[0xc] = 0;
        *(uint8_t (*) [16])(puVar10 + 7) = (uint8_t  [16])0x0;
        *(uint8_t (*) [16])(puVar10 + 9) = (uint8_t  [16])0x0;
        *(void*)((int64_t)puVar10 + 0x55) = 0;
        (*g_02603500)();
        pvVar9 = _pthread_getspecific(param_1);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017b31f0();
        FUN_00d50b20();
      }
      local_60 = 0;
      FUN_00d50b20();
      goto LAB_01b3990b;
    }
  }
  else {
    pvVar9 = _pthread_getspecific(param_1);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017aa5e0();
    plVar12 = local_48;
    if ((((local_40 == '\0') && (local_48 != (int64_t *)0x0)) && (FUN_00d50b00(), local_40 != '\0')
        ) && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_0173b120();
    plVar1 = *(int64_t **)(this_ptr + 0xe0);
    plVar11 = plVar1;
    if (plVar1 != local_48) {
      if (local_40 == '\0') {
        if (local_48 == (int64_t *)0x0) {
          plVar11 = (int64_t *)0x0;
          goto LAB_01b395a9;
        }
        FUN_00d50b00();
        plVar1 = *(int64_t **)(this_ptr + 0xe0);
        *(int64_t **)(this_ptr + 0xe0) = local_48;
        plVar11 = local_48;
      }
      else {
        local_40 = '\0';
        plVar11 = local_48;
LAB_01b395a9:
        *(int64_t **)(this_ptr + 0xe0) = plVar11;
      }
      param_1 = (void*)plVar1;
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
        plVar11 = local_48;
      }
    }
    if ((local_40 != '\0') && (plVar11 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_0173b120();
    plVar1 = *(int64_t **)(this_ptr + 0xe8);
    plVar11 = plVar1;
    if (plVar1 != local_48) {
      if (local_40 == '\0') {
        if (local_48 == (int64_t *)0x0) {
          plVar11 = (int64_t *)0x0;
          goto LAB_01b39683;
        }
        FUN_00d50b00();
        plVar1 = *(int64_t **)(this_ptr + 0xe8);
        *(int64_t **)(this_ptr + 0xe8) = local_48;
        plVar11 = local_48;
      }
      else {
        local_40 = '\0';
        plVar11 = local_48;
LAB_01b39683:
        *(int64_t **)(this_ptr + 0xe8) = plVar11;
      }
      param_1 = (void*)plVar1;
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
        plVar11 = local_48;
      }
    }
    if ((local_40 != '\0') && (plVar11 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar9 = _pthread_getspecific(param_1);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar4 = FUN_017583b0();
    if (cVar4 != '\0') {
      pvVar9 = _pthread_getspecific(param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01758890();
    }
    pvVar9 = _pthread_getspecific(param_1);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar4 = FUN_0173f680();
    if (cVar4 == '\0') {
      pvVar9 = _pthread_getspecific(param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b6f0();
      pvVar9 = _pthread_getspecific(param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01736c00();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      pvVar9 = _pthread_getspecific(param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b6f0();
      pvVar9 = _pthread_getspecific(param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01736c00();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (plVar12 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
LAB_01b39902:
  local_60 = 0;
LAB_01b3990b:
  lVar14 = 0;
  if (*(int64_t *)(this_ptr + 0xe0) == 0) {
    *(void*)(this_ptr + 0xf0) = 0;
    *(void*)(this_ptr + 0xfc) = 0;
    *(void*)(this_ptr + 0x100) = 0;
    *(void*)(this_ptr + 0x104) = 0xffffffff;
    *(void*)(this_ptr + 0x108) = 0xffffffff;
    *(void*)(this_ptr + 0x10c) = 0xffffffff;
    *(void*)(this_ptr + 0x110) = 0xffffffff;
  }
  else {
    FUN_01b27070();
    plVar12 = local_48;
    if ((((local_40 == '\0') && (local_48 != (int64_t *)0x0)) && (FUN_00d50b00(), local_40 != '\0')
        ) && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (*(int64_t *)(this_ptr + 0xd8) != 0) {
      local_50 = 0;
      pvVar9 = _pthread_getspecific(param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar4 = FUN_017c0150();
      if (cVar4 == '\0') {
        *(void*)(this_ptr + 0xf0) = 0;
      }
      else {
        *(void*)(this_ptr + 0xf0) = *(void*)(this_ptr + 0x89);
      }
      if (*(char *)(this_ptr + 0xfc) == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = *(void*)(this_ptr + 0x89);
      }
      *(void*)(this_ptr + 0xfc) = uVar5;
      pvVar9 = _pthread_getspecific(param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar4 = FUN_017bff00();
      if (cVar4 == '\0') {
        *(void*)(this_ptr + 0xf1) = 0;
      }
      else {
        *(void*)(this_ptr + 0xf1) = *(void*)(this_ptr + 0x88);
      }
      if (*(char *)(this_ptr + 0xfd) == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = *(void*)(this_ptr + 0x88);
      }
      *(void*)(this_ptr + 0xfd) = uVar5;
      pvVar9 = _pthread_getspecific(param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar4 = FUN_017c0270();
      if (cVar4 == '\0') {
        *(void*)(this_ptr + 0xf2) = 0;
      }
      else {
        *(void*)(this_ptr + 0xf2) = *(void*)(this_ptr + 0x89);
      }
      if (*(char *)(this_ptr + 0xfe) == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = *(void*)(this_ptr + 0x89);
      }
      *(void*)(this_ptr + 0xfe) = uVar5;
      pvVar9 = _pthread_getspecific(param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar4 = FUN_017c0260();
      lVar14 = local_50;
      if (cVar4 == '\0') {
        *(void*)(this_ptr + 0xf3) = 0;
      }
      else {
        *(void*)(this_ptr + 0xf3) = *(void*)(this_ptr + 0x88);
      }
      if (*(char *)(this_ptr + 0xff) == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = *(void*)(this_ptr + 0x88);
      }
      *(void*)(this_ptr + 0xff) = uVar5;
      pvVar9 = _pthread_getspecific(param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      bVar6 = FUN_017c0280();
      *(uint *)(this_ptr + 0xf8) = (uint)bVar6;
      if (*(char *)(this_ptr + 0x100) == '\0') {
        cVar4 = '\0';
      }
      else {
        cVar4 = *(char *)(this_ptr + 0x88);
      }
      *(char *)(this_ptr + 0x100) = cVar4;
    }
    if (*(char *)(this_ptr + 0xf3) == '\0') {
      if (*(char *)(this_ptr + 0x88) == '\0') {
        *(void*)(this_ptr + 0xf4) = 1;
        cVar4 = *(char *)(this_ptr + 0xfc);
      }
      else {
        *(void*)(this_ptr + 0xf4) = 0;
        cVar4 = *(char *)(this_ptr + 0xfc);
      }
    }
    else {
      *(void*)(this_ptr + 0xf4) = 4;
      cVar4 = *(char *)(this_ptr + 0xfc);
    }
    if ((cVar4 != '\0') && (*(int *)(this_ptr + 0x104) != -1)) {
      if (*(int *)(this_ptr + 0x104) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(void*)(this_ptr + 0x89);
      }
      *(void*)(this_ptr + 0xf0) = uVar5;
    }
    if ((*(char *)(this_ptr + 0xfd) != '\0') && (*(int *)(this_ptr + 0x108) != -1)) {
      if (*(int *)(this_ptr + 0x108) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(void*)(this_ptr + 0x88);
      }
      *(void*)(this_ptr + 0xf1) = uVar5;
    }
    if ((*(char *)(this_ptr + 0xfe) != '\0') && (*(int *)(this_ptr + 0x10c) != -1)) {
      if (*(int *)(this_ptr + 0x10c) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(void*)(this_ptr + 0x89);
      }
      *(void*)(this_ptr + 0xf2) = uVar5;
    }
    if ((*(char *)(this_ptr + 0xff) != '\0') && (*(int *)(this_ptr + 0x110) != -1)) {
      *(int *)(this_ptr + 0xf4) = *(int *)(this_ptr + 0x110);
    }
    FUN_01b381a0();
    if (plVar12 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_01b31bc0();
  lVar2 = g_027e4590;
  if ((*(int64_t *)(this_ptr + 0xe0) == 0) && (lVar14 != 0)) {
    if (g_027e4590 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_027e4598;
    if (g_027e4598 != 0) {
      FUN_00d50b00();
    }
    local_128 = lVar3;
    local_120 = '\x01';
    local_118 = 0;
    local_110 = '\0';
    FUN_00d31230(&local_118,&local_128);
    plVar12 = local_48;
    if (local_40 == '\0') {
      if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
         (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_110 != '\0') && (local_118 != 0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    FUN_01e11330();
    local_108 = plVar12;
    local_100 = '\0';
    FUN_01e125e0();
    if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar12 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  pplVar13 = &local_48;
  FUN_01ceb020();
  plVar12 = local_48;
  if ((g_02737920 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    local_50 = lVar14;
    g_027e2e88 = FUN_00d4fe50();
    g_027e2e70 = "MUScaleBrowserItem";
    g_027e2e78 = 0x20;
    g_027e2e80 = FUN_00841ad0;
    g_027e2e90 = (uint8_t  [16])0x0;
    g_027e2ea0 = (uint8_t  [16])0x0;
    g_027e2eb0 = (uint8_t  [16])0x0;
    g_027e2ec0 = (uint8_t  [16])0x0;
    g_027e2ed0 = (uint8_t  [16])0x0;
    g_027e2ee0 = (uint8_t  [16])0x0;
    g_027e2ef0 = (uint8_t  [16])0x0;
    g_027e2f00 = (uint8_t  [16])0x0;
    g_027e2f10 = (uint8_t  [16])0x0;
    g_027e2f20 = (uint8_t  [16])0x0;
    g_027e2f30 = 0;
    ___cxa_guard_release();
    lVar14 = local_50;
  }
  if (plVar12 == (int64_t *)0x0) {
    pplVar13 = &g_02802688;
    plVar12 = g_02802688;
    cVar4 = g_02802690;
  }
  else {
    (**(code **)(*plVar12 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') {
      pplVar13 = &g_02802688;
    }
    plVar12 = *pplVar13;
    cVar4 = *(char *)(pplVar13 + 1);
  }
  if (cVar4 == '\0') {
    if (plVar12 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar13 + 1) = 0;
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar12 == (int64_t *)0x0) {
    uVar8 = FUN_00d6f370();
    local_d8 = g_027e4588;
    local_e8 = 0;
    local_e0 = '\0';
    if (g_027e4588 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_d0 = '\x01';
    FUN_00d6f570(uVar8,&local_d8);
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01aa3f90();
    cVar4 = (**(code **)(*local_48 + 0x3a0))();
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      FUN_00d6f370();
      FUN_01aa3f90();
      uVar8 = (**(code **)(*local_1e8 + 0x368))();
      local_78 = local_c8;
      local_70 = 0;
      local_f8 = g_027e4588;
      if (local_c0 == '\0') {
        if (local_c8 != 0) {
          uVar8 = FUN_00d50b00();
          local_f8 = g_027e4588;
        }
      }
      else {
        local_c0 = '\0';
      }
      local_70 = '\x01';
      g_027e4588 = local_f8;
      if (local_f8 != 0) {
        local_70 = '\x01';
        uVar8 = FUN_00d50b00();
      }
      local_f0 = '\x01';
      FUN_00d6f570(uVar8,&local_f8);
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1e0 != '\0') && (local_1e8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  if ((char)local_54 == '\0') {
    FUN_00d50b20();
  }
  if (((char)local_60 != '\0') && (lVar14 != 0)) {
    FUN_00d50b20();
  }
  return 1;
}



// ============================================================
// 01ab04a0
// ============================================================
// Function: FUN_01ab04a0
// Address: 01ab04a0
// Size: 3548 bytes
// Class: MUScaleBrowserItem
// String references:
//   "MUScaleBrowserItem"

void* FUN_01ab04a0(uint32_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  void*puVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t *in_RCX;
  int64_t **pplVar9;
  int iVar10;
  int64_t arg1;
  void*this_ptr;
  int64_t *plVar11;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t uVar12;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  void*local_1e8;
  uint8_t local_1e0;
  void*local_1d8;
  uint8_t local_1d0;
  int64_t *local_1c8;
  uint8_t local_1c0;
  int64_t *local_1b8;
  uint8_t local_1b0;
  void*local_1a8;
  uint8_t local_1a0;
  int64_t *local_198;
  uint8_t local_190;
  void*local_188;
  uint8_t local_180;
  int64_t *local_178;
  uint8_t local_170;
  int64_t *local_168;
  uint8_t local_160;
  int64_t *local_158;
  uint8_t local_150;
  uint8_t local_148 [8];
  uint8_t local_140;
  int64_t *local_138;
  uint8_t local_130;
  uint8_t local_128 [8];
  uint8_t local_120;
  int64_t *local_118;
  uint8_t local_110;
  int64_t *local_108;
  uint8_t local_100;
  int64_t local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t local_a8;
  int64_t local_a0;
  char local_98;
  void*local_90;
  char local_81;
  code *local_80;
  int64_t *local_78;
  char local_70 [8];
  int64_t *local_68;
  uint64_t local_60;
  int local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  
  lVar7 = *in_RCX;
  local_81 = (char)in_RCX[1];
  if ((local_81 == '\0') || (lVar7 == 0)) {
    if (lVar7 == 0) {
      lVar7 = arg1;
      if (arg1 != 0) goto LAB_01ab04cf;
      lVar7 = 0;
    }
  }
  else {
LAB_01ab04cf:
    param_1 = FUN_00d50b00();
    local_81 = '\x01';
  }
  local_e8 = '\0';
  local_f0 = lVar7;
  local_c0 = lVar7;
  FUN_00c9fe40(param_1,&local_f0);
  plVar5 = local_78;
  pplVar9 = &local_50;
  if (local_70[0] != '\0') {
    pplVar9 = (int64_t **)local_70;
  }
  local_50 = (int64_t *)CONCAT71(local_50._1_7_,local_70[0]);
  *(char *)pplVar9 = '\0';
  if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_50 == '\0') && (plVar5 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if (plVar5 != (int64_t *)0x0) goto LAB_01ab119a;
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  local_80 = g_02572370;
  (*g_02572370)();
  local_90 = puVar4;
  FUN_017aae40();
  plVar5 = local_50;
  if (local_48 == '\0') {
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_78 = plVar5;
  local_70[0] = '\0';
  FUN_00d21140();
  if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_017a9f30();
  plVar5 = local_50;
  if (local_48 == '\0') {
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_78 = plVar5;
  local_70[0] = '\0';
  FUN_00d21140();
  if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_017aa1e0();
  plVar5 = local_50;
  if (local_48 == '\0') {
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_78 = plVar5;
  local_70[0] = '\0';
  FUN_00d21140();
  if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar5 = (int64_t)&g_02572358;
  (*local_80)();
  plVar1 = (int64_t *)*in_RCX;
  if (plVar1 == (int64_t *)0x0) {
    if ((*(char *)(arg1 + 0x91) != '\0') || (*(char *)(arg1 + 0x92) != '\0')) {
      FUN_017bf2e0();
      lVar7 = local_a0;
      if (local_98 == '\0') {
        if (local_a0 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_98 = '\0';
      }
      local_140 = 1;
      local_1e8 = local_90;
      local_1e0 = 0;
      uVar12 = FUN_01ab1b30(&local_1e8,local_148);
      plVar1 = local_50;
      if (local_48 == '\0') {
        if (local_50 != (int64_t *)0x0) {
          uVar12 = FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_78 = plVar1;
      local_70[0] = '\0';
      FUN_00d214d0(uVar12,*(void*)((int64_t)plVar5 + 0xc));
      if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_017bf050();
    plVar1 = local_50;
    if (local_48 == '\0') {
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_130 = 1;
    local_138 = plVar1;
    local_1d8 = local_90;
    local_1d0 = 0;
    uVar8 = FUN_01ab1b30(&local_1d8);
    plVar11 = local_78;
    uVar12 = extraout_XMM0_Da_01;
    if (local_78 == (int64_t *)0x0) {
      local_80 = 0x0;
    }
    else {
      local_80 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
      if (local_70[0] == '\0') {
        uVar12 = FUN_00d50b00();
      }
    }
    if (plVar1 != (int64_t *)0x0) {
      uVar12 = FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
    if (plVar11 != (int64_t *)0x0) {
      local_70[0] = '\0';
      local_78 = (int64_t *)0x0;
      local_40 = plVar11;
      local_68 = plVar11;
      local_60 = 0xffffffff;
      local_58 = 0;
      local_60._4_4_ = 0;
      while( true ) {
        if (local_60._4_4_ != 0) {
          if (local_60._4_4_ < 1) {
            iVar10 = -local_60._4_4_;
          }
          else {
            iVar10 = (int)local_60 - local_60._4_4_;
            local_60 = CONCAT44(local_60._4_4_,iVar10);
            FUN_00d23690();
            local_58 = local_58 + local_60._4_4_;
            iVar10 = 0;
          }
          local_60 = CONCAT44(iVar10,(int)local_60);
        }
        lVar7 = (int64_t)(int)local_60;
        iVar10 = (int)local_60 + 1;
        local_60 = CONCAT44(local_60._4_4_,iVar10);
        if (*(int *)((int64_t)local_68 + 0xc) <= iVar10) break;
        local_1c8 = *(int64_t **)(local_68[2] + 8 + lVar7 * 8);
        local_1c0 = 0;
        local_1b0 = 0;
        local_1b8 = plVar5;
        local_78 = local_1c8;
        cVar3 = FUN_01ab2150(local_68[2],&local_1b8);
        if (cVar3 == '\0') {
          local_50 = local_78;
          local_48 = '\0';
          FUN_00d21140();
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      uVar12 = FUN_01b53440();
      plVar11 = local_40;
    }
    if ((*(char *)(arg1 + 0x90) != '\0') &&
       ((*(char *)(arg1 + 0x91) != '\0' || (*(char *)(arg1 + 0x92) != '\0')))) {
      uVar12 = FUN_017bed60();
      plVar1 = local_78;
      if (local_70[0] == '\0') {
        if (local_78 != (int64_t *)0x0) {
          FUN_00d50b00();
          if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01ab0d1f;
        }
      }
      else if (local_78 != (int64_t *)0x0) {
LAB_01ab0d1f:
        cVar3 = (**(code **)(*plVar1 + 0x3a0))();
        if (cVar3 != '\0') {
          plVar6 = (int64_t *)FUN_00e8fc40();
          FUN_00d4ff40();
          *plVar6 = (int64_t)&g_02641258;
          *(void*)((int64_t)plVar6 + 0xc) = 0;
          plVar6[2] = 0;
          plVar6[3] = 0;
          (*g_02641270)();
          local_e0 = plVar1;
          local_d8 = '\0';
          FUN_01aa3fc0();
          if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*plVar1 + 0x390))();
          local_b8 = local_78;
          local_b0 = 0;
          if (local_70[0] == '\0') {
            if (local_78 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_70[0] = '\0';
          }
          local_b0 = '\x01';
          FUN_01aa3f40();
          if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_01aa3f00();
          local_70[0] = '\0';
          local_78 = plVar6;
          FUN_00d21140();
          if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        uVar12 = FUN_00d50b20();
      }
    }
  }
  else {
    if ((g_02737920 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
      g_027e2e88 = FUN_00d4fe50();
      g_027e2e70 = "MUScaleBrowserItem";
      g_027e2e78 = 0x20;
      g_027e2e80 = FUN_00841ad0;
      g_027e2e90 = 0;
      ram_00000000027e2e98 = 0;
      g_027e2ea0 = 0;
      ram_00000000027e2ea8 = 0;
      g_027e2eb0 = 0;
      ram_00000000027e2eb8 = 0;
      g_027e2ec0 = 0;
      ram_00000000027e2ec8 = 0;
      g_027e2ed0 = 0;
      ram_00000000027e2ed8 = 0;
      g_027e2ee0 = 0;
      ram_00000000027e2ee8 = 0;
      g_027e2ef0 = 0;
      ram_00000000027e2ef8 = 0;
      g_027e2f00 = 0;
      ram_00000000027e2f08 = 0;
      g_027e2f10 = 0;
      ram_00000000027e2f18 = 0;
      g_027e2f20 = 0;
      ram_00000000027e2f28 = 0;
      g_027e2f30 = 0;
      ___cxa_guard_release();
    }
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') {
      in_RCX = &g_02802688;
    }
    lVar7 = *in_RCX;
    lVar2 = in_RCX[1];
    if (((char)lVar2 == '\0') || (lVar7 == 0)) {
      if (lVar7 == 0) {
        local_80 = 0x0;
        plVar11 = (int64_t *)0x0;
        uVar12 = extraout_XMM0_Da;
        goto LAB_01ab108e;
      }
    }
    else {
      FUN_00d50b00();
    }
    local_a8 = lVar7;
    FUN_01aa3f90();
    cVar3 = (**(code **)(*local_78 + 0x3a0))();
    uVar12 = extraout_XMM0_Da_00;
    if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
    if (cVar3 == '\0') {
LAB_01ab0fa5:
      local_80 = 0x0;
      local_40 = (int64_t *)0x0;
    }
    else {
      FUN_01aa3f90();
      lVar7 = local_a0;
      if (local_98 == '\0') {
        if (local_a0 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_98 = '\0';
      }
      local_120 = 1;
      local_1a8 = local_90;
      local_1a0 = 0;
      uVar12 = FUN_01ab1b30(&local_1a8,local_128);
      plVar1 = local_50;
      if (local_48 == '\0') {
        if (local_50 != (int64_t *)0x0) {
          uVar12 = FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_78 = plVar1;
      local_70[0] = '\0';
      FUN_00d214d0(uVar12,*(void*)((int64_t)plVar5 + 0xc));
      if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      FUN_01aa3f90();
      plVar1 = local_78;
      if (local_70[0] == '\0') {
        if (local_78 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70[0] = '\0';
      }
      local_110 = 1;
      local_118 = plVar1;
      cVar3 = FUN_01ab2450();
      uVar12 = extraout_XMM0_Da_02;
      if (plVar1 != (int64_t *)0x0) {
        uVar12 = FUN_00d50b20();
      }
      if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
        uVar12 = FUN_00d50b20();
      }
      if (cVar3 == '\0') goto LAB_01ab0fa5;
      uVar12 = FUN_01aa3f90();
      plVar1 = local_50;
      if (local_48 == '\0') {
        if (local_50 != (int64_t *)0x0) {
          uVar12 = FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_100 = 1;
      local_108 = plVar1;
      uVar12 = FUN_01aafac0(uVar12,&local_108);
      plVar11 = local_78;
      if ((local_70[0] == '\0') && (local_78 != (int64_t *)0x0)) {
        uVar12 = FUN_00d50b00();
      }
      if (plVar1 != (int64_t *)0x0) {
        uVar12 = FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        uVar12 = FUN_00d50b20();
      }
      if (plVar11 == (int64_t *)0x0) goto LAB_01ab0fa5;
      local_198 = plVar11;
      local_190 = 0;
      local_188 = local_90;
      local_180 = 0;
      FUN_01ab1b30(&local_188);
      local_40 = local_78;
      if (local_78 == (int64_t *)0x0) {
        local_80 = 0x0;
      }
      else {
        if (local_70[0] == '\0') {
          FUN_00d50b00();
        }
        local_70[0] = '\0';
        local_78 = (int64_t *)0x0;
        local_68 = local_40;
        local_60 = 0xffffffff;
        local_58 = 0;
        local_60._4_4_ = 0;
        while( true ) {
          if (local_60._4_4_ != 0) {
            if (local_60._4_4_ < 1) {
              iVar10 = -local_60._4_4_;
            }
            else {
              iVar10 = (int)local_60 - local_60._4_4_;
              local_60 = CONCAT44(local_60._4_4_,iVar10);
              FUN_00d23690();
              local_58 = local_58 + local_60._4_4_;
              iVar10 = 0;
            }
            local_60 = CONCAT44(iVar10,(int)local_60);
          }
          lVar7 = (int64_t)(int)local_60;
          iVar10 = (int)local_60 + 1;
          local_60 = CONCAT44(local_60._4_4_,iVar10);
          if (*(int *)((int64_t)local_68 + 0xc) <= iVar10) break;
          local_178 = *(int64_t **)(local_68[2] + 8 + lVar7 * 8);
          local_170 = 0;
          local_160 = 0;
          local_168 = plVar5;
          local_78 = local_178;
          cVar3 = FUN_01ab2150(local_68[2],&local_168);
          if (cVar3 == '\0') {
            local_50 = local_78;
            local_48 = '\0';
            FUN_00d21140();
            if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        uVar8 = FUN_01b53440();
        local_80 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
      }
      uVar12 = FUN_00d50b20();
    }
    plVar11 = local_40;
    if ((char)lVar2 != '\0') {
      uVar12 = FUN_00d50b20();
      plVar11 = local_40;
    }
  }
LAB_01ab108e:
  if (*(int *)((int64_t)plVar5 + 0xc) != 0) {
    FUN_01ab2600(0,FUN_01aaec30);
    if (local_78 == plVar5) {
LAB_01ab10de:
      if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      plVar5 = local_78;
      if (local_70[0] == '\0') {
        if (local_78 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
        goto LAB_01ab10de;
      }
      FUN_00d50b20();
    }
    local_150 = 0;
    local_158 = plVar5;
    uVar12 = FUN_01aaf2c0();
  }
  local_d0 = local_c0;
  local_c8 = '\0';
  local_70[0] = '\0';
  local_78 = plVar5;
  FUN_00ca0840(uVar12,&local_d0);
  if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (local_90 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_80 != '\0') && (plVar11 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01ab119a:
  if (*(int *)((int64_t)plVar5 + 0xc) == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    FUN_00d50b20();
  }
  else {
    *this_ptr = plVar5;
    *(void*)(this_ptr + 1) = 1;
  }
  if ((local_81 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 01b51da0
// ============================================================
// Function: FUN_01b51da0
// Address: 01b51da0
// Size: 3054 bytes
// Class: MUScaleBrowserItem
// String references:
//   "MUScaleBrowserItem"

uint64_t FUN_01b51da0(void**param_1,int param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  void**ppuVar3;
  char cVar4;
  char cVar5;
  void*puVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int iVar9;
  void***pppuVar10;
  void**ppuVar11;
  int64_t this_ptr;
  void**ppuVar12;
  uint64_t unaff_R13;
  uint7 uVar14;
  void**ppuVar13;
  uint64_t unaff_R14;
  uint7 uVar16;
  void**ppuVar15;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar17;
  void**local_1b0;
  char local_1a8;
  void**local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  void**local_160;
  char local_158;
  void**local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  void*local_130;
  char local_128;
  void**local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  void**local_100;
  int64_t local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  void**local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  void**local_b8;
  void*local_b0;
  void**local_a8;
  int64_t *local_a0;
  char local_98;
  void**local_90;
  void**local_88;
  void**local_80;
  void**local_70;
  char local_68;
  void**local_60;
  uint64_t local_58;
  int local_50;
  char local_48;
  uint7 uStack_47;
  byte local_39;
  void**local_38;
  
  if (param_2 == 0) {
LAB_01b528db:
    uVar8 = CONCAT71((int7)((uint64_t)param_1 >> 8),1);
  }
  else {
    pppuVar10 = &local_70;
    FUN_01ceb020();
    ppuVar12 = local_70;
    if ((g_02737920 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
      g_027e2e88 = FUN_00d4fe50();
      g_027e2e70 = "MUScaleBrowserItem";
      g_027e2e78 = 0x20;
      g_027e2e80 = FUN_00841ad0;
      g_027e2e90 = 0;
      ram_00000000027e2e98 = 0;
      g_027e2ea0 = 0;
      ram_00000000027e2ea8 = 0;
      g_027e2eb0 = 0;
      ram_00000000027e2eb8 = 0;
      g_027e2ec0 = 0;
      ram_00000000027e2ec8 = 0;
      g_027e2ed0 = 0;
      ram_00000000027e2ed8 = 0;
      g_027e2ee0 = 0;
      ram_00000000027e2ee8 = 0;
      g_027e2ef0 = 0;
      ram_00000000027e2ef8 = 0;
      g_027e2f00 = 0;
      ram_00000000027e2f08 = 0;
      g_027e2f10 = 0;
      ram_00000000027e2f18 = 0;
      g_027e2f20 = 0;
      ram_00000000027e2f28 = 0;
      g_027e2f30 = 0;
      ___cxa_guard_release();
    }
    if (ppuVar12 == (void**)0x0) {
LAB_01b51e06:
      pppuVar10 = (void***)&g_02802688;
    }
    else {
      (*(*ppuVar12)[0x6c])();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_01b51e06;
    }
    ppuVar12 = *pppuVar10;
    if (*(char *)(pppuVar10 + 1) == '\0') {
      if (ppuVar12 != (void**)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pppuVar10 + 1) = 0;
    }
    if ((local_68 != '\0') && (local_70 != (void**)0x0)) {
      FUN_00d50b20();
    }
    uVar14 = (uint7)((uint64_t)unaff_R13 >> 8);
    local_88 = ppuVar12;
    if ((ppuVar12 == (void**)0x0) ||
       (FUN_01aa3f90(), ppuVar12 = local_70, local_70 == (void**)0x0)) {
      FUN_017bf2e0();
      ppuVar12 = local_70;
      if (local_70 == (void**)0x0) {
        ppuVar12 = (void**)0x0;
        cVar4 = '\0';
        uVar14 = 0;
      }
      else {
        cVar4 = '\x01';
        if (((local_68 == '\0') && (FUN_00d50b00(), local_68 != '\0')) &&
           (local_70 != (void**)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (((local_68 == '\0') && (FUN_00d50b00(), local_68 != '\0')) &&
         (local_70 != (void**)0x0)) {
        FUN_00d50b20();
      }
      cVar4 = '\x01';
    }
    cVar5 = FUN_01ab2450();
    if (cVar5 == '\0') {
      local_1a8 = '\0';
      local_1b0 = ppuVar12;
      FUN_01ab2a40(extraout_XMM0_Da,&local_1b0);
      ppuVar11 = local_70;
      uVar16 = (uint7)((uint64_t)unaff_R14 >> 8);
      if (local_70 == ppuVar12) {
        ppuVar11 = ppuVar12;
        if ((cVar4 == '\0') && (ppuVar12 != (void**)0x0)) {
          if (local_68 != '\0') goto LAB_01b51f75;
          FUN_00d50b00();
          cVar5 = '\x01';
        }
        else {
          uVar16 = uVar14 & 0xffffff;
          cVar5 = cVar4;
        }
LAB_01b51fca:
        ppuVar12 = ppuVar11;
        cVar4 = cVar5;
        if (local_68 == '\0') {
          uVar14 = uVar16 & 0xffffff;
        }
        else if (local_70 == (void**)0x0) {
          uVar14 = uVar16 & 0xffffff;
        }
        else {
          FUN_00d50b20();
          uVar14 = uVar16 & 0xffffff;
        }
      }
      else {
        if (local_68 == '\0') {
          if (local_70 != (void**)0x0) {
            FUN_00d50b00();
          }
          cVar5 = '\x01';
          if ((cVar4 != '\0') && (ppuVar12 != (void**)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01b51fca;
        }
        if ((cVar4 != '\0') && (ppuVar12 != (void**)0x0)) {
          FUN_00d50b20();
        }
LAB_01b51f75:
        local_68 = '\0';
        ppuVar12 = ppuVar11;
        cVar4 = '\x01';
      }
      if ((local_1a8 != '\0') && (local_1b0 != (void**)0x0)) {
        FUN_00d50b20();
      }
    }
    uVar17 = (**(code **)(**(int64_t **)(this_ptr + 0xa8) + 0x970))();
    ppuVar11 = local_70;
    if ((((local_68 == '\0') && (local_70 != (void**)0x0)) &&
        (uVar17 = FUN_00d50b00(), local_68 != '\0')) && (local_70 != (void**)0x0)) {
      uVar17 = FUN_00d50b20();
    }
    local_1a0 = ppuVar11;
    local_198 = '\0';
    local_b8 = ppuVar11;
    (*(*ppuVar12)[0x80])(uVar17,&local_1a0);
    local_80 = local_70;
    if (local_68 == '\0') {
      if (((local_70 != (void**)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
         (local_70 != (void**)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68 = '\0';
    }
    if ((local_198 != '\0') && (local_1a0 != (void**)0x0)) {
      FUN_00d50b20();
    }
    lVar7 = g_027e47e0;
    if (g_027e47e0 != 0) {
      FUN_00d50b00();
    }
    lVar2 = g_027e47e8;
    local_190 = lVar7;
    local_188 = '\x01';
    if (g_027e47e8 != 0) {
      FUN_00d50b00();
    }
    local_180 = lVar2;
    local_178 = '\x01';
    local_170 = 0;
    local_168 = '\0';
    uVar17 = FUN_00d31230(&local_170,&local_180);
    local_e8 = local_a0;
    local_e0 = 0;
    if (local_98 == '\0') {
      if (local_a0 != (int64_t *)0x0) {
        uVar17 = FUN_00d50b00();
      }
    }
    else {
      local_98 = '\0';
    }
    local_e0 = '\x01';
    (*(*ppuVar12)[0x80])(uVar17,&local_e8);
    ppuVar11 = local_70;
    if (local_68 == '\0') {
      if (((local_70 != (void**)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
         (local_70 != (void**)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68 = '\0';
    }
    if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_168 != '\0') && (local_170 != 0)) {
      FUN_00d50b20();
    }
    if ((local_178 != '\0') && (local_180 != 0)) {
      FUN_00d50b20();
    }
    if ((local_188 != '\0') && (local_190 != 0)) {
      FUN_00d50b20();
    }
    local_90 = ppuVar11;
    cVar5 = (*(*ppuVar11)[0x74])();
    if (cVar5 != '\0') {
      local_160 = local_80;
      local_158 = '\0';
      cVar5 = (*(*local_90)[10])();
      if ((local_158 != '\0') && (local_160 != (void**)0x0)) {
        FUN_00d50b20();
      }
      if (cVar5 == '\0') {
        local_150 = local_80;
        local_148 = '\0';
        local_48 = cVar4;
        uStack_47 = uVar14;
        (*(*local_90)[0x87])();
        if ((local_148 != '\0') && (local_150 != (void**)0x0)) {
          FUN_00d50b20();
        }
        local_138 = '\0';
        local_140 = 0;
        (**(code **)(**(int64_t **)(this_ptr + 0xa8) + 0xa20))();
        if ((local_138 != '\0') && (local_140 != 0)) {
          FUN_00d50b20();
        }
        uVar17 = (**(code **)(**(int64_t **)(this_ptr + 0xa8) + 0x478))();
        if (*(int64_t *)(this_ptr + 0xa8) != 0) {
          *(void*)(this_ptr + 0xa8) = 0;
          uVar17 = FUN_00d50b20();
        }
        if (local_88 == (void**)0x0) {
          iVar9 = 0;
        }
        else {
          uVar17 = FUN_01ce9490();
          iVar9 = *(int *)((int64_t)local_70 + 0xc);
          if (local_68 != '\0') {
            uVar17 = FUN_00d50b20();
          }
        }
        FUN_01cecec0(uVar17,iVar9);
        local_a8 = local_70;
        if ((((local_68 == '\0') && (local_70 != (void**)0x0)) &&
            (FUN_00d50b00(), local_68 != '\0')) && (local_70 != (void**)0x0)) {
          FUN_00d50b20();
        }
        FUN_01ce6530();
        if (iVar9 < 1) {
          local_b0 = (void*)0x0;
        }
        else {
          puVar6 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar6 = &g_02641258;
          *(void*)((int64_t)puVar6 + 0xc) = 0;
          puVar6[2] = 0;
          puVar6[3] = 0;
          (*g_02641270)();
          local_b0 = puVar6;
          (*(*local_80)[0x7e])();
          local_d8 = local_70;
          local_d0 = 0;
          if (local_68 == '\0') {
            if (local_70 != (void**)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          local_d0 = '\x01';
          FUN_01aa3fc0();
          if ((local_d0 != '\0') && (local_d8 != (void**)0x0)) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != (void**)0x0)) {
            FUN_00d50b20();
          }
        }
        local_39 = iVar9 < 1;
        plVar1 = *(int64_t **)(this_ptr + 0x80);
        local_f0 = 0;
        lVar7 = *(int64_t *)(this_ptr + 0x78);
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        ppuVar15 = local_80;
        ppuVar13 = local_88;
        local_f0 = '\x01';
        local_130 = local_b0;
        local_128 = '\0';
        param_1 = &local_130;
        local_f8 = lVar7;
        (**(code **)(*plVar1 + 0x5c8))(param_1);
        ppuVar3 = local_70;
        ppuVar11 = local_b8;
        if (local_68 == '\0') {
          if (((local_70 != (void**)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
             (local_70 != (void**)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_68 = '\0';
        }
        if ((local_128 != '\0') && (local_130 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          FUN_00d50b20();
        }
        if (ppuVar3 != (void**)0x0) {
          local_68 = '\0';
          local_70 = (void**)0x0;
          local_100 = ppuVar3;
          local_60 = ppuVar3;
          local_58 = 0xffffffff;
          local_50 = 0;
          local_38 = ppuVar12;
          while( true ) {
            lVar7 = (int64_t)(int)local_58;
            iVar9 = (int)local_58 + 1;
            local_58 = CONCAT44(local_58._4_4_,iVar9);
            if (*(int *)((int64_t)local_60 + 0xc) <= iVar9) break;
            param_1 = (void**)local_60[2];
            local_70 = (void**)param_1[lVar7 + 1];
            FUN_01aa3f10();
            plVar1 = local_a0;
            (*(*local_80)[0x71])();
            local_c8 = local_110;
            local_c0 = 0;
            if (local_108 == '\0') {
              if (local_110 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_108 = '\0';
            }
            local_c0 = '\x01';
            cVar4 = (**(code **)(*plVar1 + 0x50))();
            if ((local_c0 != '\0') && (local_c8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_108 != '\0') && (local_110 != 0)) {
              FUN_00d50b20();
            }
            if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar4 != '\0') {
              iVar9 = local_50 + (int)local_58;
              goto LAB_01b527dc;
            }
            if (local_58._4_4_ != 0) {
              if (local_58._4_4_ < 1) {
                iVar9 = -local_58._4_4_;
              }
              else {
                local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
                FUN_00d23690();
                local_50 = local_50 + local_58._4_4_;
                iVar9 = 0;
              }
              local_58 = CONCAT44(iVar9,(int)local_58);
            }
          }
          iVar9 = -1;
          param_1 = local_60;
LAB_01b527dc:
          FUN_01b53440();
          ppuVar12 = local_38;
          ppuVar15 = local_80;
          ppuVar13 = local_88;
          ppuVar11 = local_a8;
          if (-1 < iVar9) {
            FUN_01dd3d10();
            local_120 = ppuVar11;
            local_118 = '\0';
            (**(code **)(**(int64_t **)(this_ptr + 0x78) + 0x950))();
            if ((local_118 != '\0') && (local_120 != (void**)0x0)) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
          ppuVar11 = local_b8;
        }
        local_39 = local_39 | local_b0 == (void*)0x0;
        if (local_39 == 0) {
          FUN_00d50b20();
        }
        if (local_a8 != (void**)0x0) {
          FUN_00d50b20();
        }
        if (local_90 != (void**)0x0) {
          FUN_00d50b20();
        }
        if (ppuVar15 != (void**)0x0) {
          FUN_00d50b20();
        }
        if (ppuVar11 != (void**)0x0) {
          FUN_00d50b20();
        }
        if (ppuVar13 != (void**)0x0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (ppuVar12 != (void**)0x0)) {
          FUN_00d50b20();
          uVar8 = CONCAT71((int7)((uint64_t)param_1 >> 8),1);
          goto LAB_01b528dd;
        }
        goto LAB_01b528db;
      }
    }
    FUN_00d50b20();
    ppuVar11 = local_88;
    ppuVar12 = local_b8;
    if (local_80 != (void**)0x0) {
      FUN_00d50b20();
    }
    if (ppuVar12 != (void**)0x0) {
      FUN_00d50b20();
    }
    if (ppuVar11 != (void**)0x0) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      FUN_00d50b20();
    }
    uVar8 = 0;
  }
LAB_01b528dd:
  return uVar8 & 0xffffffff;
}



// ============================================================
// 01b4d890
// ============================================================
// Function: FUN_01b4d890
// Address: 01b4d890
// Size: 3080 bytes
// Class: MUScaleBrowserItem
// String references:
//   "MUScaleBrowserItem"

uint64_t FUN_01b4d890(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  char cVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  void*puVar5;
  int64_t lVar6;
  int iVar7;
  char *pcVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  int64_t this_ptr;
  int64_t *plVar11;
  undefined7 uVar13;
  uint64_t uVar12;
  int64_t **pplVar14;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar15;
  int64_t *local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t *local_150;
  char local_148;
  void*local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  char local_c0;
  undefined7 uStack_bf;
  char local_b8;
  uint64_t local_b0;
  int64_t *local_a8;
  int64_t *local_a0;
  void*local_98;
  int64_t *local_90;
  char local_88;
  uint64_t local_80;
  uint64_t local_78;
  int64_t *local_70;
  char local_68 [8];
  int64_t *local_60;
  uint64_t local_58;
  int local_50;
  byte local_41;
  int64_t *local_40;
  int64_t *local_38;
  
  if (param_2 == 0) {
    return 1;
  }
  pplVar14 = &local_70;
  FUN_01ceb020();
  plVar10 = local_70;
  if ((g_02737920 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    g_027e2e88 = FUN_00d4fe50();
    g_027e2e70 = "MUScaleBrowserItem";
    g_027e2e78 = 0x20;
    g_027e2e80 = FUN_00841ad0;
    g_027e2e90 = 0;
    ram_00000000027e2e98 = 0;
    g_027e2ea0 = 0;
    ram_00000000027e2ea8 = 0;
    g_027e2eb0 = 0;
    ram_00000000027e2eb8 = 0;
    g_027e2ec0 = 0;
    ram_00000000027e2ec8 = 0;
    g_027e2ed0 = 0;
    ram_00000000027e2ed8 = 0;
    g_027e2ee0 = 0;
    ram_00000000027e2ee8 = 0;
    g_027e2ef0 = 0;
    ram_00000000027e2ef8 = 0;
    g_027e2f00 = 0;
    ram_00000000027e2f08 = 0;
    g_027e2f10 = 0;
    ram_00000000027e2f18 = 0;
    g_027e2f20 = 0;
    ram_00000000027e2f28 = 0;
    g_027e2f30 = 0;
    ___cxa_guard_release();
  }
  if (plVar10 == (int64_t *)0x0) {
LAB_01b4d8f5:
    pplVar14 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar10 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01b4d8f5;
  }
  plVar11 = *pplVar14;
  if (*(char *)(pplVar14 + 1) == '\0') {
    if (plVar11 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar14 + 1) = 0;
  }
  if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_a8 = plVar11;
  if ((plVar11 == (int64_t *)0x0) ||
     (uVar3 = FUN_01aa3f90(), plVar11 = local_70, local_70 == (int64_t *)0x0)) {
    uVar3 = FUN_017bf2e0();
    plVar11 = local_70;
    if (local_70 == (int64_t *)0x0) {
      plVar11 = (int64_t *)0x0;
      local_80 = 0;
    }
    else {
      local_80 = CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
      if (((local_68[0] == '\0') && (FUN_00d50b00(), local_68[0] != '\0')) &&
         (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (((local_68[0] == '\0') && (uVar3 = FUN_00d50b00(), local_68[0] != '\0')) &&
       (local_70 != (int64_t *)0x0)) {
      uVar3 = FUN_00d50b20();
    }
    local_80 = CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
  }
  cVar2 = FUN_01ab2450();
  if (cVar2 == '\0') {
    local_188 = '\0';
    local_190 = plVar11;
    uVar3 = FUN_01ab2a40(extraout_XMM0_Da,&local_190);
    plVar9 = local_70;
    uVar13 = (undefined7)((uint64_t)plVar10 >> 8);
    if (local_70 == plVar11) {
      plVar9 = plVar11;
      if (((char)local_80 == '\0') && (plVar11 != (int64_t *)0x0)) {
        if (local_68[0] != '\0') goto LAB_01b4da61;
        uVar12 = CONCAT71(uVar13,1);
        FUN_00d50b00();
      }
      else {
        uVar12 = local_80 & 0xffffffff;
      }
LAB_01b4daba:
      if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_80 = uVar12 & 0xffffffff;
      plVar11 = plVar9;
    }
    else {
      if (local_68[0] == '\0') {
        if (local_70 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        uVar12 = CONCAT71(uVar13,1);
        if (((char)local_80 != '\0') && (plVar11 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01b4daba;
      }
      if (((char)local_80 != '\0') && (plVar11 != (int64_t *)0x0)) {
        uVar3 = FUN_00d50b20();
      }
LAB_01b4da61:
      local_68[0] = '\0';
      local_80 = CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
      plVar11 = plVar9;
    }
    if ((local_188 != '\0') && (local_190 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar6 = g_027e47e0;
  if (plVar11 == (int64_t *)0x0) {
    local_78 = 0;
    local_40 = (int64_t *)0x0;
    plVar10 = local_a8;
    goto LAB_01b4e39b;
  }
  if (g_027e47e0 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_027e47e8;
  local_180 = lVar6;
  local_178 = '\x01';
  if (g_027e47e8 != 0) {
    FUN_00d50b00();
  }
  local_170 = lVar1;
  local_168 = '\x01';
  local_160 = 0;
  local_158 = '\0';
  uVar15 = FUN_00d31230(&local_160,&local_170);
  local_f0 = local_90;
  local_e8 = 0;
  if (local_88 == '\0') {
    if (local_90 != (int64_t *)0x0) {
      uVar15 = FUN_00d50b00();
    }
  }
  else {
    local_88 = '\0';
  }
  local_e8 = '\x01';
  (**(code **)(*plVar11 + 0x400))(uVar15,&local_f0);
  local_a0 = local_70;
  if (local_68[0] == '\0') {
    if (((local_70 != (int64_t *)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
       (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68[0] = '\0';
  }
  if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  if ((local_178 != '\0') && (local_180 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*local_a0 + 0x428))();
  uVar15 = FUN_01ce9490();
  local_b0 = (uint64_t)*(uint *)((int64_t)local_70 + 0xc);
  if (local_68[0] != '\0') {
    uVar15 = FUN_00d50b20();
  }
  if ((int)local_b0 < 1) {
    uVar3 = 0;
    local_40 = (int64_t *)0x0;
  }
  else {
    FUN_01cecec0(uVar15,(int)local_b0 + -1);
    plVar10 = local_70;
    if (local_70 == (int64_t *)0x0) {
      plVar10 = (int64_t *)0x0;
      uVar3 = 0;
    }
    else {
      uVar3 = CONCAT71((int7)((uint64_t)pplVar14 >> 8),1);
      if (((local_68[0] == '\0') && (FUN_00d50b00(), local_68[0] != '\0')) &&
         (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    local_40 = plVar10;
    FUN_01dd4a30();
    FUN_00d23340();
    plVar10 = local_70;
    pcVar8 = &local_c0;
    if (local_68[0] != '\0') {
      pcVar8 = local_68;
    }
    local_c0 = local_68[0];
    *pcVar8 = '\0';
    if ((local_68[0] != '\0') && (plVar10 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d45870();
    if ((local_c0 != '\0') && (plVar10 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar10 = local_40;
    FUN_01ce6530();
    FUN_01dd3d10();
    local_150 = plVar10;
    local_148 = '\0';
    uVar15 = (**(code **)(**(int64_t **)(this_ptr + 0x78) + 0x958))();
    if ((local_148 != '\0') && (local_150 != (int64_t *)0x0)) {
      uVar15 = FUN_00d50b20();
    }
  }
  uVar4 = FUN_01cecec0(uVar15,local_b0);
  plVar10 = local_70;
  uVar13 = (undefined7)((uint64_t)uVar4 >> 8);
  cVar2 = (char)uVar3;
  if (local_70 == local_40) {
    local_78 = uVar3;
    plVar10 = local_40;
    if ((cVar2 == '\0') && (local_70 != (int64_t *)0x0)) {
      local_78 = CONCAT71(uVar13,1);
      if (local_68[0] != '\0') goto LAB_01b4df17;
      local_78 = CONCAT71(uVar13,1);
      FUN_00d50b00();
      plVar10 = local_40;
    }
joined_r0x01b4df07:
    local_40 = plVar10;
    if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_68[0] == '\0') {
      if (local_70 != (int64_t *)0x0) {
        uVar4 = FUN_00d50b00();
      }
      local_78 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
      if ((cVar2 != '\0') && (local_40 != (int64_t *)0x0)) {
        local_40 = plVar10;
        FUN_00d50b20();
        plVar10 = local_40;
      }
      goto joined_r0x01b4df07;
    }
    local_78 = CONCAT71(uVar13,1);
    if ((cVar2 == '\0') || (local_40 == (int64_t *)0x0)) {
      local_40 = local_70;
    }
    else {
      local_40 = local_70;
      FUN_00d50b20();
    }
  }
LAB_01b4df17:
  FUN_01ce6530();
  if ((int)local_b0 < 1) {
    local_98 = (void*)0x0;
  }
  else {
    puVar5 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &g_02641258;
    *(void*)((int64_t)puVar5 + 0xc) = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    (*g_02641270)();
    local_98 = puVar5;
    (**(code **)(*local_a0 + 0x3f0))();
    local_e0 = local_70;
    local_d8 = 0;
    if (local_68[0] == '\0') {
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68[0] = '\0';
    }
    local_d8 = '\x01';
    FUN_01aa3fc0();
    if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_41 = (int)local_b0 < 1;
  plVar10 = *(int64_t **)(this_ptr + 0x80);
  local_f8 = 0;
  lVar6 = *(int64_t *)(this_ptr + 0x78);
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  local_f8 = '\x01';
  local_140 = local_98;
  local_138 = '\0';
  local_100 = lVar6;
  (**(code **)(*plVar10 + 0x5c8))(&local_140);
  plVar9 = local_70;
  plVar10 = local_a8;
  if (local_68[0] == '\0') {
    if (((local_70 != (int64_t *)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
       (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68[0] = '\0';
  }
  if ((local_138 != '\0') && (local_140 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if (plVar9 != (int64_t *)0x0) {
    local_68[0] = '\0';
    local_70 = (int64_t *)0x0;
    local_60 = plVar9;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_38 = plVar11;
    while( true ) {
      lVar6 = (int64_t)(int)local_58;
      iVar7 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar7);
      if (*(int *)((int64_t)local_60 + 0xc) <= iVar7) break;
      local_70 = *(int64_t **)(local_60[2] + 8 + lVar6 * 8);
      FUN_01aa3f10();
      plVar10 = local_90;
      lVar6 = g_027e47e0;
      if (g_027e47e0 != 0) {
        FUN_00d50b00();
      }
      lVar1 = g_027e47e8;
      local_130 = lVar6;
      local_128 = '\x01';
      if (g_027e47e8 != 0) {
        FUN_00d50b00();
      }
      local_120 = lVar1;
      local_118 = '\x01';
      local_110 = 0;
      local_108 = '\0';
      FUN_00d31230(&local_110,&local_120);
      local_c8 = 0;
      lVar6 = CONCAT71(uStack_bf,local_c0);
      if (local_b8 == '\0') {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_b8 = '\0';
      }
      local_c8 = '\x01';
      local_d0 = lVar6;
      cVar2 = (**(code **)(*plVar10 + 0x50))();
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (CONCAT71(uStack_bf,local_c0) != 0)) {
        FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != 0)) {
        FUN_00d50b20();
      }
      if ((local_118 != '\0') && (local_120 != 0)) {
        FUN_00d50b20();
      }
      if ((local_128 != '\0') && (local_130 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar2 != '\0') {
        iVar7 = local_50 + (int)local_58;
        goto LAB_01b4e337;
      }
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar7 = -local_58._4_4_;
        }
        else {
          local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar7 = 0;
        }
        local_58 = CONCAT44(iVar7,(int)local_58);
      }
    }
    iVar7 = -1;
LAB_01b4e337:
    uVar15 = FUN_01b53440();
    plVar11 = local_38;
    plVar10 = local_a8;
    if (-1 < iVar7) {
      FUN_01b4d260(uVar15,iVar7);
    }
    FUN_00d50b20();
  }
  local_41 = local_41 | local_98 == (void*)0x0;
  if (local_41 == 0) {
    FUN_00d50b20();
  }
  if (local_a0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_01b4e39b:
  if (plVar10 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_80 != '\0') && (plVar11 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_78 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return 1;
}



// ============================================================
// 01aa5120
// ============================================================
// Function: FUN_01aa5120
// Address: 01aa5120
// Size: 2278 bytes
// Class: MUScaleBrowserItem
// String references:
//   "MUScaleBrowserItem"

void FUN_01aa5120(int64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  uint8_t auVar2 [16];
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  uint64_t uVar6;
  int64_t **pplVar7;
  char *pcVar8;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar9;
  bool bVar10;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t uVar11;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  float fVar14;
  float local_f8;
  uint32_t uStack_f4;
  uint32_t uStack_f0;
  uint32_t uStack_ec;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  float local_9c;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  uint64_t local_78;
  int64_t *local_70;
  char local_68;
  undefined7 uStack_67;
  char local_60;
  int64_t *local_58;
  bool local_50;
  char local_41;
  int64_t *local_40;
  char local_38 [8];
  
  local_d8 = *param_2;
  local_d0 = '\0';
  local_c8 = *param_1;
  local_c0 = '\0';
  FUN_01cec030(&local_c8,&local_d8);
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  plVar9 = (int64_t *)*arg1;
  if ((g_02737920 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_027e2e88 = FUN_00d4fe50();
    g_027e2e70 = "MUScaleBrowserItem";
    g_027e2e78 = 0x20;
    g_027e2e80 = FUN_00841ad0;
    g_027e2e90 = 0;
    ram_00000000027e2e98 = 0;
    g_027e2ea0 = 0;
    ram_00000000027e2ea8 = 0;
    g_027e2eb0 = 0;
    ram_00000000027e2eb8 = 0;
    g_027e2ec0 = 0;
    ram_00000000027e2ec8 = 0;
    g_027e2ed0 = 0;
    ram_00000000027e2ed8 = 0;
    g_027e2ee0 = 0;
    ram_00000000027e2ee8 = 0;
    g_027e2ef0 = 0;
    ram_00000000027e2ef8 = 0;
    g_027e2f00 = 0;
    ram_00000000027e2f08 = 0;
    g_027e2f10 = 0;
    ram_00000000027e2f18 = 0;
    g_027e2f20 = 0;
    ram_00000000027e2f28 = 0;
    g_027e2f30 = 0;
    ___cxa_guard_release();
  }
  if (plVar9 == (int64_t *)0x0) {
LAB_01aa520d:
    arg1 = (int64_t *)&g_02802688;
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_01aa520d;
  }
  lVar1 = *arg1;
  local_41 = (char)arg1[1];
  if ((local_41 == '\0') || (lVar1 == 0)) {
    if (lVar1 == 0) {
      return;
    }
  }
  else {
    FUN_00d50b00();
  }
  local_a8 = lVar1;
  (**(code **)(*(int64_t *)*param_2 + 0x9e8))();
  local_70 = local_40;
  if ((((local_38[0] == '\0') && (local_40 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  cVar4 = FUN_01aa3ef0();
  if (cVar4 == '\0') {
    uVar6 = FUN_01d449a0();
    if ((uVar6 & 2) != 0) {
      plVar9 = (int64_t *)*param_2;
      FUN_01d44be0(extraout_XMM0_Qa_00,2);
      local_88 = local_40;
      local_80 = 0;
      if (local_38[0] == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38[0] = '\0';
      }
      local_80 = '\x01';
      (**(code **)(*plVar9 + 0x9d8))();
      if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    uVar6 = FUN_01d449a0();
    if ((uVar6 & 2) == 0) {
      plVar9 = (int64_t *)*param_2;
      FUN_01d44a40(extraout_XMM0_Qa,2);
      local_98 = local_40;
      local_90 = 0;
      if (local_38[0] == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38[0] = '\0';
      }
      local_90 = '\x01';
      (**(code **)(*plVar9 + 0x9d8))();
      if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_01ce9490();
  plVar9 = local_40;
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar9 == (int64_t *)0x0) {
    local_78 = 0;
    plVar9 = (int64_t *)0x0;
  }
  else {
    FUN_01ce9490();
    FUN_00d23340();
    plVar9 = local_40;
    bVar10 = local_38[0] == '\0';
    local_58 = local_40;
    if (bVar10) {
      local_50 = false;
    }
    else {
      local_50 = true;
      local_38[0] = '\0';
    }
    local_50 = !bVar10;
    if ((g_02737920 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      g_027e2e88 = FUN_00d4fe50();
      g_027e2e70 = "MUScaleBrowserItem";
      g_027e2e78 = 0x20;
      g_027e2e80 = FUN_00841ad0;
      g_027e2e90 = 0;
      ram_00000000027e2e98 = 0;
      g_027e2ea0 = 0;
      ram_00000000027e2ea8 = 0;
      g_027e2eb0 = 0;
      ram_00000000027e2eb8 = 0;
      g_027e2ec0 = 0;
      ram_00000000027e2ec8 = 0;
      g_027e2ed0 = 0;
      ram_00000000027e2ed8 = 0;
      g_027e2ee0 = 0;
      ram_00000000027e2ee8 = 0;
      g_027e2ef0 = 0;
      ram_00000000027e2ef8 = 0;
      g_027e2f00 = 0;
      ram_00000000027e2f08 = 0;
      g_027e2f10 = 0;
      ram_00000000027e2f18 = 0;
      g_027e2f20 = 0;
      ram_00000000027e2f28 = 0;
      g_027e2f30 = 0;
      ___cxa_guard_release();
    }
    if (plVar9 == (int64_t *)0x0) {
LAB_01aa548f:
      pplVar7 = &g_02802688;
      plVar9 = g_02802688;
      if (g_02802688 != (int64_t *)0x0) goto LAB_01aa549e;
LAB_01aa54b6:
      local_78 = 0;
      plVar9 = (int64_t *)0x0;
    }
    else {
      (**(code **)(*plVar9 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_01aa548f;
      pplVar7 = &local_58;
      plVar9 = local_58;
      if (local_58 == (int64_t *)0x0) goto LAB_01aa54b6;
LAB_01aa549e:
      if (*(char *)(pplVar7 + 1) == '\0') {
        pplVar7 = (int64_t **)FUN_00d50b00();
      }
      else {
        *(void*)(pplVar7 + 1) = 0;
      }
      local_78 = CONCAT71((int7)((uint64_t)pplVar7 >> 8),1);
    }
    if ((local_50 != false) && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
      FUN_00d50b20();
    }
  }
  fVar14 = 0.0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  if (((*(float *)(this_ptr + 0x198) == 0.0) && (!NAN(*(float *)(this_ptr + 0x198)))) ||
     ((int64_t *)*param_2 == (int64_t *)0x0)) goto LAB_01aa586a;
  (**(code **)(*(int64_t *)*param_2 + 0x4a0))();
  FUN_00d23340();
  plVar3 = local_40;
  local_68 = local_38[0];
  pcVar8 = local_38;
  if (local_38[0] == '\0') {
    pcVar8 = &local_68;
  }
  *pcVar8 = '\0';
  if ((local_38[0] != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != false) && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 == (int64_t *)0x0) goto LAB_01aa586a;
  (**(code **)(*(int64_t *)*param_2 + 0x4a0))();
  FUN_00d23340();
  plVar3 = local_40;
  local_68 = local_38[0];
  pcVar8 = local_38;
  if (local_38[0] == '\0') {
    pcVar8 = &local_68;
  }
  *pcVar8 = '\0';
  if ((local_38[0] != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar11 = (**(code **)(*plVar3 + 0x4d8))();
  local_f8 = fVar14;
  if (local_68 != '\0') {
    FUN_00d50b20();
  }
  if ((local_50 != false) && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  cVar4 = (**(code **)(*(int64_t *)*param_2 + 0xac8))();
  if (cVar4 == '\0') {
    FUN_01e3f820();
    local_9c = g_023942a8;
  }
  else {
    if (plVar9 == (int64_t *)0x0) {
LAB_01aa5737:
      (**(code **)(*(int64_t *)*param_2 + 0x4a0))();
      FUN_00d23340();
      plVar3 = local_40;
      local_68 = local_38[0];
      pcVar8 = local_38;
      if (local_38[0] == '\0') {
        pcVar8 = &local_68;
      }
      *pcVar8 = '\0';
      if ((local_38[0] != '\0') && (plVar3 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar3 + 0x928))();
      if (local_68 != '\0') {
        FUN_00d50b20();
      }
      if ((local_50 != false) && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_b8 = local_a8;
      local_b0 = '\0';
      cVar4 = (**(code **)(*plVar9 + 0x50))();
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') goto LAB_01aa5737;
      (**(code **)(*(int64_t *)*param_2 + 0x4a0))();
      FUN_00d23340();
      plVar3 = local_40;
      local_68 = local_38[0];
      pcVar8 = local_38;
      if (local_38[0] == '\0') {
        pcVar8 = &local_68;
      }
      *pcVar8 = '\0';
      if ((local_38[0] != '\0') && (plVar3 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar3 + 0x928))();
      if (local_68 != '\0') {
        FUN_00d50b20();
      }
      if ((local_50 != false) && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01e3f820();
    local_9c = g_023941fc;
  }
  (**(code **)(*(int64_t *)*param_2 + 0x4a0))();
  FUN_00d23340();
  pcVar8 = local_38;
  if (local_38[0] == '\0') {
    pcVar8 = &local_68;
  }
  local_68 = local_38[0];
  *pcVar8 = '\0';
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  auVar2._4_4_ = uStack_f4;
  auVar2._0_4_ = local_f8;
  auVar2._8_4_ = uStack_f0;
  auVar2._12_4_ = uStack_ec;
  auVar12._4_12_ = auVar2._4_12_;
  auVar12._0_4_ = local_f8 + local_9c;
  auVar13._8_8_ = extraout_XMM0_Qb;
  auVar13._0_8_ = uVar11;
  auVar13 = blendps(auVar12,auVar13,0xe);
  (**(code **)(*local_40 + 0x4d0))(auVar13._0_8_,fVar14);
  if (local_68 != '\0') {
    FUN_00d50b20();
  }
  if ((local_50 != false) && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01aa586a:
  if (((char)local_78 != '\0') && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_70 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_41 != '\0') {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 008c14e6
// ============================================================
// Function: FUN_008c14e6
// Address: 008c14e6
// Size: 2191 bytes
// Class: MUScaleBrowserItem

int FUN_008c14e6(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  uint64_t uVar5;
  int64_t *arg1;
  int64_t this_ptr;
  uint32_t uVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t lVar14;
  int64_t lVar15;
  int64_t lVar16;
  int64_t lVar17;
  int64_t lVar18;
  int64_t lVar19;
  int64_t lVar20;
  int64_t lVar21;
  int64_t lVar22;
  uint64_t uVar23;
  uint64_t uVar24;
  uint64_t uVar25;
  int local_4c;
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar23 = 0;
  uVar24 = 0;
  uVar25 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar21 = this_ptr + 0xf8;
  lVar7 = this_ptr + 0xf3;
  lVar8 = this_ptr + 0xf2;
  lVar9 = this_ptr + 0xf1;
  lVar10 = this_ptr + 0xf0;
  lVar11 = this_ptr + 0xa8;
  lVar12 = this_ptr + 0x90;
  lVar13 = this_ptr + 0x78;
  lVar14 = this_ptr + 0x40;
  lVar15 = this_ptr + 0x38;
  lVar16 = this_ptr + 0x30;
  lVar17 = this_ptr + 0x28;
  lVar18 = this_ptr + 0x20;
  lVar19 = this_ptr + 0x18;
  lVar20 = this_ptr + 0x10;
  lVar22 = this_ptr + 8;
  do {
    psVar4 = &local_36;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar4,&local_4c,param_3,param_4,lVar7,lVar8,lVar9,lVar10,lVar11,lVar12,
                       lVar13,lVar14,lVar15,lVar16,lVar17,lVar18,lVar19,lVar20,lVar21,lVar22,uVar23,
                       uVar24,uVar25);
    iVar2 = iVar2 + iVar1;
    if (local_4c == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      if ((uVar23 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    iVar1 = (int)local_36;
    switch(iVar1 + -10) {
    case 0:
      if (local_4c != 10) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*arg1 + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0xfd) = 1;
      break;
    case 1:
      if (local_4c != 10) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*arg1 + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0xfe) = 1;
      break;
    case 2:
      if (local_4c != 10) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*arg1 + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0xff) = 1;
      break;
    case 3:
      if (local_4c != 10) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*arg1 + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x100) = 1;
      break;
    case 4:
      if (local_4c != 10) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*arg1 + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x101) = 1;
      break;
    case 5:
      if (local_4c != 10) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*arg1 + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x102) = 1;
      break;
    case 6:
      if (local_4c != 10) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*arg1 + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x103) = 1;
      break;
    case 7:
    case 8:
    case 9:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
switchD_008c1679_caseD_7:
      iVar3 = (**(code **)(*arg1 + 0x160))();
LAB_008c1d21:
      iVar3 = iVar3 + iVar2;
      break;
    case 10:
      if (local_4c != 0xf) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c1d21;
      }
      uVar6 = FUN_008cc280();
      iVar1 = (**(code **)(*arg1 + 0xf8))(uVar6,&local_34);
      FUN_0088ed80();
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        uVar5 = 0;
        do {
          iVar2 = (**(code **)(*arg1 + 0x150))();
          iVar1 = iVar1 + iVar2;
          uVar5 = uVar5 + 1;
        } while (uVar5 < local_34);
      }
      iVar3 = (**(code **)(*arg1 + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(void*)(this_ptr + 0x104) = 1;
      break;
    case 0xb:
      if (local_4c != 0xf) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c1d21;
      }
      uVar6 = FUN_008cc280();
      iVar1 = (**(code **)(*arg1 + 0xf8))(uVar6,&local_34);
      FUN_0088ed80();
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        uVar5 = 0;
        do {
          iVar2 = (**(code **)(*arg1 + 0x150))();
          iVar1 = iVar1 + iVar2;
          uVar5 = uVar5 + 1;
        } while (uVar5 < local_34);
      }
      iVar3 = (**(code **)(*arg1 + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(void*)(this_ptr + 0x105) = 1;
      break;
    case 0x14:
      if (local_4c != 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*arg1 + 0x150))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x106) = 1;
      break;
    case 0x15:
      if (local_4c != 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*arg1 + 0x150))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x107) = 1;
      break;
    case 0x16:
      if (local_4c != 0xc) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = FUN_008fea92();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x108) = 1;
      break;
    case 0x1e:
      if (local_4c != 0xf) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c1d21;
      }
      *(void*)(this_ptr + 0xe0) = *(void*)(this_ptr + 0xd8);
      iVar1 = (**(code **)(*arg1 + 0xf8))(iVar1 + -10,&local_34);
      FUN_008897f0();
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        uVar5 = 0;
        do {
          iVar2 = (**(code **)(*arg1 + 0x138))();
          iVar1 = iVar1 + iVar2;
          uVar5 = uVar5 + 1;
        } while (uVar5 < local_34);
      }
      iVar3 = (**(code **)(*arg1 + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(void*)(this_ptr + 0x109) = 1;
      break;
    case 0x28:
      if (local_4c != 2) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*arg1 + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x10a) = 1;
      break;
    case 0x29:
      if (local_4c != 2) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*arg1 + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x10b) = 1;
      break;
    case 0x2a:
      if (local_4c != 2) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*arg1 + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x10c) = 1;
      break;
    case 0x2b:
      if (local_4c != 2) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*arg1 + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x10d) = 1;
      break;
    case 0x2c:
      if (local_4c != 2) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*arg1 + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x10e) = 1;
      break;
    case 0x2d:
      if (local_4c != 2) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*arg1 + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x10f) = 1;
      break;
    case 0x2e:
      if (local_4c != 2) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*arg1 + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x110) = 1;
      break;
    default:
      if (iVar1 == 10000) {
        if (local_4c != 8) {
          iVar3 = (**(code **)(*arg1 + 0x160))();
          goto LAB_008c1d21;
        }
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x111) = 1;
      }
      else {
        if (iVar1 != 1) goto switchD_008c1679_caseD_7;
        if (local_4c != 8) {
          iVar3 = (**(code **)(*arg1 + 0x160))();
          goto LAB_008c1d21;
        }
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xfc) = 1;
      }
    }
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}



// ============================================================
// 01aa96d0
// ============================================================
// Function: FUN_01aa96d0
// Address: 01aa96d0
// Size: 2276 bytes
// Class: MUScaleBrowserItem

uint64_t FUN_01aa96d0(char *param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  char *pcVar4;
  char *pcVar5;
  void* pVar6;
  uint64_t unaff_RBX;
  uint64_t uVar7;
  int64_t this_ptr;
  int64_t lVar8;
  int64_t lVar9;
  float fVar10;
  float fVar11;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (((*(int64_t *)(this_ptr + 0x20) == 0) || (*(int64_t *)(this_ptr + 0x40) == 0)) ||
     (*(int64_t *)(this_ptr + 0x10) == 0)) {
    uVar7 = 0;
  }
  else {
    FUN_01aa8f10();
    if ((local_40[0] == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific((void*)param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    iVar1 = *(int *)(local_48 + 0xc);
    if (local_40[0] != '\0') {
      FUN_00d50b20();
    }
    if (iVar1 != 0) {
      pvVar3 = _pthread_getspecific((void*)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5ae0();
      iVar2 = *(int *)(local_48 + 0xc);
      if (local_40[0] != '\0') {
        FUN_00d50b20();
      }
      if (iVar2 == 1) {
        pvVar3 = _pthread_getspecific((void*)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e5ae0();
        FUN_00d23310();
        local_38[0] = local_40[0];
        pcVar5 = local_38;
        pcVar4 = local_40;
        if (local_40[0] == '\0') {
          pcVar4 = pcVar5;
        }
        *pcVar4 = '\0';
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        pVar6 = (void*)pcVar5;
        lVar9 = *(int64_t *)(this_ptr + 0x50);
        if (lVar9 == local_48) {
          if ((local_38[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_38[0] == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
              lVar9 = *(int64_t *)(this_ptr + 0x50);
            }
          }
          else {
            local_38[0] = '\0';
          }
          *(int64_t *)(this_ptr + 0x50) = local_48;
          if (lVar9 != 0) {
            FUN_00d50b20();
          }
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e5ae0();
        FUN_00d23310();
        param_1 = local_38;
        pcVar5 = local_40;
        if (local_40[0] == '\0') {
          pcVar5 = param_1;
        }
        local_38[0] = local_40[0];
        *pcVar5 = '\0';
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        lVar9 = *(int64_t *)(this_ptr + 0x58);
        if (lVar9 == local_48) {
          if ((local_38[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_38[0] == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
              lVar9 = *(int64_t *)(this_ptr + 0x58);
            }
          }
          else {
            local_38[0] = '\0';
          }
          *(int64_t *)(this_ptr + 0x58) = local_48;
          if (lVar9 != 0) {
            FUN_00d50b20();
          }
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        pvVar3 = _pthread_getspecific((void*)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e5ae0();
        pvVar3 = _pthread_getspecific((void*)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar10 = (float)FUN_0125a2c0();
        pvVar3 = _pthread_getspecific((void*)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e5ae0();
        pvVar3 = _pthread_getspecific((void*)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar11 = (float)FUN_0125a2c0();
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (fVar10 <= fVar11) {
          pvVar3 = _pthread_getspecific((void*)param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e5ae0();
          lVar9 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 8);
          lVar8 = *(int64_t *)(this_ptr + 0x50);
          if (lVar8 != lVar9) {
            if (lVar9 != 0) {
              FUN_00d50b00();
              lVar8 = *(int64_t *)(this_ptr + 0x50);
            }
            *(int64_t *)(this_ptr + 0x50) = lVar9;
            if (lVar8 != 0) {
              FUN_00d50b20();
            }
          }
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          pvVar3 = _pthread_getspecific((void*)param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e5ae0();
          lVar9 = **(int64_t **)(local_48 + 0x10);
          lVar8 = *(int64_t *)(this_ptr + 0x58);
          if (lVar8 != lVar9) {
            if (lVar9 != 0) {
              FUN_00d50b00();
              lVar8 = *(int64_t *)(this_ptr + 0x58);
            }
            *(int64_t *)(this_ptr + 0x58) = lVar9;
            if (lVar8 != 0) {
              FUN_00d50b20();
            }
          }
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          pvVar3 = _pthread_getspecific((void*)param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e5ae0();
          lVar9 = **(int64_t **)(local_48 + 0x10);
          lVar8 = *(int64_t *)(this_ptr + 0x50);
          if (lVar8 != lVar9) {
            if (lVar9 != 0) {
              FUN_00d50b00();
              lVar8 = *(int64_t *)(this_ptr + 0x50);
            }
            *(int64_t *)(this_ptr + 0x50) = lVar9;
            if (lVar8 != 0) {
              FUN_00d50b20();
            }
          }
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          pvVar3 = _pthread_getspecific((void*)param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e5ae0();
          lVar9 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 8);
          lVar8 = *(int64_t *)(this_ptr + 0x58);
          if (lVar8 != lVar9) {
            if (lVar9 != 0) {
              FUN_00d50b00();
              lVar8 = *(int64_t *)(this_ptr + 0x58);
            }
            *(int64_t *)(this_ptr + 0x58) = lVar9;
            if (lVar8 != 0) {
              FUN_00d50b20();
            }
          }
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      FUN_00cafd20();
      while( true ) {
        pvVar3 = _pthread_getspecific((void*)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e5ae0();
        FUN_00d23310();
        local_38[0] = local_40[0];
        param_1 = local_38;
        pcVar5 = local_40;
        if (local_40[0] == '\0') {
          pcVar5 = param_1;
        }
        *pcVar5 = '\0';
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] == '\0') && (local_48 != 0)) {
          FUN_00d50b00();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if (local_48 == 0) break;
        pvVar3 = _pthread_getspecific((void*)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6e20();
        FUN_00d50b20();
      }
      if (*(int64_t *)(this_ptr + 0x90) != 0) {
        pvVar3 = _pthread_getspecific((void*)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e5ae0();
        FUN_00d23310();
        local_38[0] = local_40[0];
        pcVar5 = local_40;
        if (local_40[0] == '\0') {
          pcVar5 = local_38;
        }
        *pcVar5 = '\0';
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      unaff_RBX = 0;
      (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x3c8))();
    }
    uVar7 = CONCAT71((int7)((uint64_t)unaff_RBX >> 8),iVar1 != 0);
    if (local_48 != 0) {
      FUN_00d50b20();
    }
  }
  return uVar7 & 0xffffffff;
}



// ============================================================
// 01061d10
// ============================================================
// Function: FUN_01061d10
// Address: 01061d10
// Size: 1490 bytes
// Class: MUScaleBrowserItem

bool FUN_01061d10(uchar *param_1,uint64_t param_2,int64_t param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  EVP_CIPHER_CTX *arg1;
  uint uVar7;
  int64_t this_ptr;
  uint uVar8;
  uint uVar9;
  uchar *in;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int *outl;
  uint uVar14;
  int local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  
  if ((param_1 == (uchar *)0x0) || (param_3 == 0)) {
    param_3 = 0;
  }
  else {
    uVar2 = *(byte *)(this_ptr + 0x107) + 1;
    *(char *)(this_ptr + 0x107) = (char)uVar2;
    uVar2 = (uint)*(byte *)(this_ptr + 0x106) + (uVar2 >> 8);
    *(char *)(this_ptr + 0x106) = (char)uVar2;
    uVar2 = (uint)*(byte *)(this_ptr + 0x105) + (uVar2 >> 8);
    *(char *)(this_ptr + 0x105) = (char)uVar2;
    uVar2 = (uint)*(byte *)(this_ptr + 0x104) + (uVar2 >> 8);
    *(char *)(this_ptr + 0x104) = (char)uVar2;
    uVar2 = (uint)*(byte *)(this_ptr + 0x103) + (uVar2 >> 8);
    *(char *)(this_ptr + 0x103) = (char)uVar2;
    uVar2 = (uint)*(byte *)(this_ptr + 0x102) + (uVar2 >> 8);
    *(char *)(this_ptr + 0x102) = (char)uVar2;
    uVar2 = (uint)*(byte *)(this_ptr + 0x101) + (uVar2 >> 8);
    *(char *)(this_ptr + 0x101) = (char)uVar2;
    uVar2 = (uint)*(byte *)(this_ptr + 0x100) + (uVar2 >> 8);
    *(char *)(this_ptr + 0x100) = (char)uVar2;
    uVar2 = (uint)*(byte *)(this_ptr + 0xff) + (uVar2 >> 8);
    *(char *)(this_ptr + 0xff) = (char)uVar2;
    uVar2 = (uint)*(byte *)(this_ptr + 0xfe) + (uVar2 >> 8);
    *(char *)(this_ptr + 0xfe) = (char)uVar2;
    uVar2 = (uint)*(byte *)(this_ptr + 0xfd) + (uVar2 >> 8);
    *(char *)(this_ptr + 0xfd) = (char)uVar2;
    uVar2 = (uint)*(byte *)(this_ptr + 0xfc) + (uVar2 >> 8);
    *(char *)(this_ptr + 0xfc) = (char)uVar2;
    uVar2 = (uint)*(byte *)(this_ptr + 0xfb) + (uVar2 >> 8);
    *(char *)(this_ptr + 0xfb) = (char)uVar2;
    uVar2 = (uint)*(byte *)(this_ptr + 0xfa) + (uVar2 >> 8);
    *(char *)(this_ptr + 0xfa) = (char)uVar2;
    iVar3 = (uint)*(byte *)(this_ptr + 0xf9) + (uVar2 >> 8);
    *(char *)(this_ptr + 0xf9) = (char)iVar3;
    *(char *)(this_ptr + 0xf8) = *(char *)(this_ptr + 0xf8) + (char)((uint)iVar3 >> 8);
    iVar3 = FUN_01062340(0,param_3,0,0);
    if (iVar3 == 0) {
      return false;
    }
    if ((*(byte *)(this_ptr + 0x1c) & 1) == 0) {
      param_3 = 1;
      param_1 = (uchar *)0x0;
    }
  }
  uVar12 = *(byte *)(this_ptr + 0x107) + 1;
  *(char *)(this_ptr + 0x107) = (char)uVar12;
  uVar11 = (uint)*(byte *)(this_ptr + 0x106) + (uVar12 >> 8);
  *(char *)(this_ptr + 0x106) = (char)uVar11;
  uVar10 = (uint)*(byte *)(this_ptr + 0x105) + (uVar11 >> 8);
  *(char *)(this_ptr + 0x105) = (char)uVar10;
  uVar9 = (uint)*(byte *)(this_ptr + 0x104) + (uVar10 >> 8);
  *(char *)(this_ptr + 0x104) = (char)uVar9;
  uVar8 = (uint)*(byte *)(this_ptr + 0x103) + (uVar9 >> 8);
  *(char *)(this_ptr + 0x103) = (char)uVar8;
  uVar4 = (uint)*(byte *)(this_ptr + 0x102) + (uVar8 >> 8);
  *(char *)(this_ptr + 0x102) = (char)uVar4;
  uVar2 = (uint)*(byte *)(this_ptr + 0x101) + (uVar4 >> 8);
  *(char *)(this_ptr + 0x101) = (char)uVar2;
  uVar14 = (uint)*(byte *)(this_ptr + 0x100) + (uVar2 >> 8);
  *(char *)(this_ptr + 0x100) = (char)uVar14;
  local_4c = (uint)*(byte *)(this_ptr + 0xff) + (uVar14 >> 8);
  *(char *)(this_ptr + 0xff) = (char)local_4c;
  local_50 = (uint)*(byte *)(this_ptr + 0xfe) + (local_4c >> 8);
  *(char *)(this_ptr + 0xfe) = (char)local_50;
  local_54 = (uint)*(byte *)(this_ptr + 0xfd) + (local_50 >> 8);
  *(char *)(this_ptr + 0xfd) = (char)local_54;
  local_58 = (uint)*(byte *)(this_ptr + 0xfc) + (local_54 >> 8);
  *(char *)(this_ptr + 0xfc) = (char)local_58;
  uVar5 = (uint)*(byte *)(this_ptr + 0xfb) + (local_58 >> 8);
  *(char *)(this_ptr + 0xfb) = (char)uVar5;
  uVar7 = (uint)*(byte *)(this_ptr + 0xfa) + (uVar5 >> 8);
  *(char *)(this_ptr + 0xfa) = (char)uVar7;
  uVar6 = (uint)*(byte *)(this_ptr + 0xf9) + (uVar7 >> 8);
  *(char *)(this_ptr + 0xf9) = (char)uVar6;
  cVar1 = (char)(uVar6 >> 8) + *(char *)(this_ptr + 0xf8);
  *(char *)(this_ptr + 0xf8) = cVar1;
  if (param_2 == 0) {
    uVar12 = (uVar12 & 0xff) + 1;
    *(char *)(this_ptr + 0x107) = (char)uVar12;
    uVar11 = (uVar11 & 0xff) + (uVar12 >> 8);
    *(char *)(this_ptr + 0x106) = (char)uVar11;
    uVar10 = (uVar10 & 0xff) + (uVar11 >> 8);
    *(char *)(this_ptr + 0x105) = (char)uVar10;
    uVar9 = (uVar9 & 0xff) + (uVar10 >> 8);
    *(char *)(this_ptr + 0x104) = (char)uVar9;
    uVar8 = (uVar8 & 0xff) + (uVar9 >> 8);
    *(char *)(this_ptr + 0x103) = (char)uVar8;
    uVar4 = (uVar4 & 0xff) + (uVar8 >> 8);
    *(char *)(this_ptr + 0x102) = (char)uVar4;
    uVar2 = (uVar2 & 0xff) + (uVar4 >> 8);
    *(char *)(this_ptr + 0x101) = (char)uVar2;
    uVar2 = (uVar14 & 0xff) + (uVar2 >> 8);
    *(char *)(this_ptr + 0x100) = (char)uVar2;
    uVar2 = (local_4c & 0xff) + (uVar2 >> 8);
    *(char *)(this_ptr + 0xff) = (char)uVar2;
    uVar2 = (local_50 & 0xff) + (uVar2 >> 8);
    *(char *)(this_ptr + 0xfe) = (char)uVar2;
    uVar2 = (local_54 & 0xff) + (uVar2 >> 8);
    *(char *)(this_ptr + 0xfd) = (char)uVar2;
    uVar2 = (local_58 & 0xff) + (uVar2 >> 8);
    *(char *)(this_ptr + 0xfc) = (char)uVar2;
    uVar2 = (uVar5 & 0xff) + (uVar2 >> 8);
    *(char *)(this_ptr + 0xfb) = (char)uVar2;
    uVar2 = (uVar7 & 0xff) + (uVar2 >> 8);
    *(char *)(this_ptr + 0xfa) = (char)uVar2;
    iVar3 = (uVar6 & 0xff) + (uVar2 >> 8);
    *(char *)(this_ptr + 0xf9) = (char)iVar3;
    *(char *)(this_ptr + 0xf8) = cVar1 + (char)((uint)iVar3 >> 8);
  }
  else {
    ___bzero();
    do {
      in = (uchar *)0xffffffff;
      iVar3 = _EVP_CipherInit_ex((EVP_CIPHER_CTX *)0x0,(EVP_CIPHER *)0x0,
                                 (ENGINE *)(this_ptr + 0xf8),(uchar *)0xffffffff,param_1,
                                 (int)param_3);
      if (iVar3 == 0) {
        return false;
      }
      outl = (int *)0x40000000;
      if (param_2 < 0x40000000) {
        outl = (int *)(param_2 & 0xffffffff);
      }
      uVar4 = (uint)outl + 0xf >> 4;
      uVar2 = *(uint *)(this_ptr + 0x104);
      uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
      uVar5 = uVar4 + uVar2;
      if (CARRY4(uVar4,uVar2)) {
        uVar2 = uVar2 * -0x10;
        if (uVar5 == 0) {
          uVar2 = (uint)outl;
        }
        uVar4 = *(byte *)(this_ptr + 0x103) + 1;
        *(char *)(this_ptr + 0x103) = (char)uVar4;
        uVar4 = (uint)*(byte *)(this_ptr + 0x102) + (uVar4 >> 8);
        *(char *)(this_ptr + 0x102) = (char)uVar4;
        uVar4 = (uint)*(byte *)(this_ptr + 0x101) + (uVar4 >> 8);
        *(char *)(this_ptr + 0x101) = (char)uVar4;
        uVar4 = (uint)*(byte *)(this_ptr + 0x100) + (uVar4 >> 8);
        *(char *)(this_ptr + 0x100) = (char)uVar4;
        uVar4 = (uint)*(byte *)(this_ptr + 0xff) + (uVar4 >> 8);
        *(char *)(this_ptr + 0xff) = (char)uVar4;
        uVar4 = (uint)*(byte *)(this_ptr + 0xfe) + (uVar4 >> 8);
        *(char *)(this_ptr + 0xfe) = (char)uVar4;
        uVar4 = (uint)*(byte *)(this_ptr + 0xfd) + (uVar4 >> 8);
        *(char *)(this_ptr + 0xfd) = (char)uVar4;
        uVar4 = (uint)*(byte *)(this_ptr + 0xfc) + (uVar4 >> 8);
        *(char *)(this_ptr + 0xfc) = (char)uVar4;
        uVar4 = (uint)*(byte *)(this_ptr + 0xfb) + (uVar4 >> 8);
        *(char *)(this_ptr + 0xfb) = (char)uVar4;
        uVar4 = (uint)*(byte *)(this_ptr + 0xfa) + (uVar4 >> 8);
        *(char *)(this_ptr + 0xfa) = (char)uVar4;
        iVar3 = (uint)*(byte *)(this_ptr + 0xf9) + (uVar4 >> 8);
        *(char *)(this_ptr + 0xf9) = (char)iVar3;
        *(char *)(this_ptr + 0xf8) = *(char *)(this_ptr + 0xf8) + (char)((uint)iVar3 >> 8);
        uVar5 = 0;
        outl = (int *)(uint64_t)uVar2;
      }
      *(uint *)(this_ptr + 0x104) =
           uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      iVar13 = (int)outl;
      iVar3 = _EVP_CipherUpdate(arg1,(uchar *)&local_5c,outl,in,(int)param_1);
      if (iVar3 == 0) {
        return false;
      }
      if (local_5c != iVar13) {
        return false;
      }
      arg1 = (EVP_CIPHER_CTX *)(arg1->oiv + (int64_t)iVar13 + -0x18);
      param_2 = param_2 - (int64_t)iVar13;
    } while (param_2 != 0);
  }
  iVar3 = FUN_01062340(0,param_3,0,0);
  return iVar3 != 0;
}



// ============================================================
// 01b51100
// ============================================================
// Function: FUN_01b51100
// Address: 01b51100
// Size: 1967 bytes
// Class: MUScaleBrowserItem
// String references:
//   "MUScaleBrowserItem"

uint64_t FUN_01b51100(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  int64_t **pplVar6;
  int64_t this_ptr;
  uint64_t unaff_R14;
  uint64_t uVar7;
  bool bVar8;
  uint32_t uVar9;
  int64_t *local_c0;
  char local_b8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  int64_t *local_40;
  char local_38 [8];
  
  uVar7 = CONCAT71((int7)((uint64_t)unaff_R14 >> 8),1);
  if (param_2 == 0) goto LAB_01b51746;
  if (*(char *)(this_ptr + 200) != '\0') {
    uVar7 = 0;
    goto LAB_01b51746;
  }
  *(void*)(this_ptr + 200) = 1;
  pplVar6 = &local_40;
  FUN_01ceb020();
  plVar1 = local_40;
  if ((g_02737920 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_027e2e88 = FUN_00d4fe50();
    g_027e2e70 = "MUScaleBrowserItem";
    g_027e2e78 = 0x20;
    g_027e2e80 = FUN_00841ad0;
    g_027e2e90 = 0;
    ram_00000000027e2e98 = 0;
    g_027e2ea0 = 0;
    ram_00000000027e2ea8 = 0;
    g_027e2eb0 = 0;
    ram_00000000027e2eb8 = 0;
    g_027e2ec0 = 0;
    ram_00000000027e2ec8 = 0;
    g_027e2ed0 = 0;
    ram_00000000027e2ed8 = 0;
    g_027e2ee0 = 0;
    ram_00000000027e2ee8 = 0;
    g_027e2ef0 = 0;
    ram_00000000027e2ef8 = 0;
    g_027e2f00 = 0;
    ram_00000000027e2f08 = 0;
    g_027e2f10 = 0;
    ram_00000000027e2f18 = 0;
    g_027e2f20 = 0;
    ram_00000000027e2f28 = 0;
    g_027e2f30 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_01b51181:
    pplVar6 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01b51181;
  }
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar6 + 1) = 0;
  }
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_01aa3f90();
    cVar3 = (**(code **)(*local_40 + 0x398))();
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      plVar1 = *(int64_t **)(this_ptr + 0x98);
      FUN_01aa3f10();
      local_70 = local_40;
      local_68 = 0;
      if (local_38[0] == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38[0] = '\0';
      }
      local_68 = '\x01';
      (**(code **)(*plVar1 + 0x968))();
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((-1 < *(int *)(this_ptr + 0xc0)) && (-1 < *(int *)(this_ptr + 0xc4))) {
        FUN_01cecec0();
        if ((local_38[0] == '\0') &&
           (((local_40 != (int64_t *)0x0 && (FUN_00d50b00(), local_38[0] != '\0')) &&
            (local_40 != (int64_t *)0x0)))) {
          FUN_00d50b20();
        }
        FUN_01dd3d10();
        (**(code **)(**(int64_t **)(this_ptr + 0x78) + 0x958))();
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  FUN_01b4c2c0();
  *(void*)(this_ptr + 0xc0) = 0xffffffffffffffff;
  FUN_01ce9490();
  if (local_40 == (int64_t *)0x0) {
    bVar8 = false;
  }
  else {
    FUN_01ce9490();
    bVar8 = *(int *)(CONCAT71(uStack_4f,local_50) + 0xc) != 0;
    if (local_48 != '\0') {
      FUN_00d50b20();
    }
  }
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar8) {
    FUN_01ce9490();
    iVar4 = *(int *)((int64_t)local_40 + 0xc) + -1;
    *(int *)(this_ptr + 0xc0) = iVar4;
    if (local_38[0] != '\0') {
      FUN_00d50b20();
      iVar4 = *(int *)(this_ptr + 0xc0);
    }
    FUN_01cecec0(iVar4,iVar4);
    lVar2 = local_40[5];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01dd4a30();
    plVar1 = local_40;
    if (local_38[0] == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01b51444;
      }
    }
    else if (local_40 != (int64_t *)0x0) {
LAB_01b51444:
      if (*(int *)((int64_t)plVar1 + 0xc) == 1) {
        FUN_00d23340();
        plVar1 = local_40;
        pcVar5 = &local_50;
        if (local_38[0] != '\0') {
          pcVar5 = local_38;
        }
        local_50 = local_38[0];
        *pcVar5 = '\0';
        if ((local_38[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        uVar9 = FUN_00d45870();
        *(void*)(this_ptr + 0xc4) = uVar9;
        if ((local_50 != '\0') && (plVar1 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01b4c850();
  pplVar6 = &local_40;
  FUN_01ceb020();
  plVar1 = local_40;
  if ((g_02737920 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_027e2e88 = FUN_00d4fe50();
    g_027e2e70 = "MUScaleBrowserItem";
    g_027e2e78 = 0x20;
    g_027e2e80 = FUN_00841ad0;
    g_027e2e90 = 0;
    ram_00000000027e2e98 = 0;
    g_027e2ea0 = 0;
    ram_00000000027e2ea8 = 0;
    g_027e2eb0 = 0;
    ram_00000000027e2eb8 = 0;
    g_027e2ec0 = 0;
    ram_00000000027e2ec8 = 0;
    g_027e2ed0 = 0;
    ram_00000000027e2ed8 = 0;
    g_027e2ee0 = 0;
    ram_00000000027e2ee8 = 0;
    g_027e2ef0 = 0;
    ram_00000000027e2ef8 = 0;
    g_027e2f00 = 0;
    ram_00000000027e2f08 = 0;
    g_027e2f10 = 0;
    ram_00000000027e2f18 = 0;
    g_027e2f20 = 0;
    ram_00000000027e2f28 = 0;
    g_027e2f30 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_01b5150b:
    pplVar6 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01b5150b;
  }
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar6 + 1) = 0;
  }
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    uVar9 = FUN_00d6f370();
    local_80 = g_027e47d8;
    local_90 = 0;
    local_88 = '\0';
    if (g_027e47d8 != 0) {
      uVar9 = FUN_00d50b00();
    }
    local_78 = '\x01';
    FUN_00d6f570(uVar9,&local_80);
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01aa3f90();
    cVar3 = (**(code **)(*local_40 + 0x3a0))();
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      FUN_00d6f370();
      FUN_01aa3f90();
      uVar9 = (**(code **)(*local_c0 + 0x368))();
      local_58 = 0;
      local_60 = CONCAT71(uStack_4f,local_50);
      local_a0 = g_027e47d8;
      if (local_48 == '\0') {
        if (local_60 != 0) {
          uVar9 = FUN_00d50b00();
          local_a0 = g_027e47d8;
        }
      }
      else {
        local_48 = '\0';
      }
      local_58 = '\x01';
      g_027e47d8 = local_a0;
      if (local_a0 != 0) {
        local_58 = '\x01';
        uVar9 = FUN_00d50b00();
      }
      local_98 = '\x01';
      FUN_00d6f570(uVar9,&local_a0);
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 200) = 0;
LAB_01b51746:
  return uVar7 & 0xffffffff;
}



// ============================================================
// 01aa6cb0
// ============================================================
// Function: FUN_01aa6cb0
// Address: 01aa6cb0
// Size: 2436 bytes
// Class: MUScaleBrowserItem

void FUN_01aa6cb0(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int64_t *plVar6;
  void *pvVar7;
  int64_t *plVar8;
  int64_t lVar9;
  int64_t *plVar10;
  void* pVar11;
  uint uVar12;
  int64_t *arg1;
  int64_t *this_ptr;
  char cVar13;
  int64_t lVar14;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar14 = *arg1;
  if (lVar14 == 0) {
    return;
  }
  if (this_ptr[5] == 0) {
    return;
  }
  if (this_ptr[3] != 0) {
    return;
  }
  lVar9 = this_ptr[4];
  if (lVar9 != lVar14) {
    FUN_00d50b00();
    this_ptr[4] = lVar14;
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d403d0();
  lVar14 = g_02703b10;
  if (g_02703b10 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_e8 = 0;
  local_e0 = '\0';
  plVar10 = &local_e8;
  FUN_00d40470(plVar10,&stack0xffffffffffffff70,3,3);
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (lVar14 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  iVar5 = *(int *)((int64_t)this_ptr + 0x34);
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_00039550();
  (**(code **)(*plVar6 + 0x18))();
  plVar8 = (int64_t *)this_ptr[2];
  if (plVar8 == plVar6) {
    FUN_00d50b20();
  }
  else {
    this_ptr[2] = (int64_t)plVar6;
    if (plVar8 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00cafd20();
  plVar8 = (int64_t *)this_ptr[2];
  lVar14 = this_ptr[4];
  if (lVar14 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar8 + 0x3a0))();
  if (lVar14 != 0) {
    FUN_00d50b20();
  }
  pvVar7 = _pthread_getspecific((void*)plVar10);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar7 = _pthread_getspecific((void*)plVar10);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar7 = _pthread_getspecific((void*)plVar10);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e57a0();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pVar11 = (void*)plVar10;
  if (iVar5 < 0) goto LAB_01aa71ae;
  pvVar7 = _pthread_getspecific(pVar11);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar7 = _pthread_getspecific((void*)plVar10);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pVar11 = (void*)plVar10;
  local_98 = local_40;
  if (local_40 == 0) {
LAB_01aa715c:
    bVar3 = false;
LAB_01aa7165:
    cVar13 = '\x01';
    uVar12 = 1;
    bVar4 = true;
    bVar1 = true;
    bVar2 = false;
joined_r0x01aa7181:
    if (local_98 != 0) goto LAB_01aa7183;
  }
  else {
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e8a60();
    pVar11 = (void*)plVar10;
    if (local_40 == 0) goto LAB_01aa715c;
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    pvVar7 = _pthread_getspecific((void*)plVar10);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar7 = _pthread_getspecific((void*)plVar10);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb450();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    pVar11 = (void*)plVar10;
    if (local_40 == 0) {
      bVar3 = true;
      goto LAB_01aa7165;
    }
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01240a80();
    if (local_40 == 0) {
      lVar14 = 0;
      bVar2 = false;
    }
    else {
      bVar2 = true;
      lVar14 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
    FUN_00d50b20();
    pVar11 = (void*)plVar10;
    uVar12 = 0;
    if (lVar14 != 0) {
      while( true ) {
        pVar11 = (void*)plVar10;
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar5 = FUN_0124a860();
        if (iVar5 <= (int)uVar12) break;
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_d8 = local_40;
        local_d0 = '\0';
        plVar10 = (int64_t *)(uint64_t)uVar12;
        FUN_01240490(plVar10,&local_d8);
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != 0) {
          pvVar7 = _pthread_getspecific((void*)plVar10);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0123fae0();
          FUN_00d50b20();
        }
        uVar12 = uVar12 + 1;
      }
      bVar3 = true;
      uVar12 = 0;
      cVar13 = '\0';
      bVar4 = false;
      bVar1 = false;
      goto joined_r0x01aa7181;
    }
    bVar3 = true;
    bVar4 = true;
LAB_01aa7183:
    bVar1 = bVar4;
    cVar13 = (char)uVar12;
    FUN_00d50b20();
  }
  if ((bVar2) && (!bVar1)) {
    FUN_00d50b20();
  }
  if (bVar3 && cVar13 == '\0') {
    FUN_00d50b20();
  }
LAB_01aa71ae:
  local_c0 = '\0';
  local_c8 = (int64_t *)0x0;
  FUN_00cb1fa0();
  if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
    (**(code **)(*local_c8 + 0x10))();
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)this_ptr[2] + 0x3c8))();
  plVar8 = (int64_t *)FUN_00e8fc40();
  FUN_0038cc50();
  (**(code **)(*plVar8 + 0x18))();
  plVar10 = (int64_t *)this_ptr[3];
  if (plVar10 == plVar8) {
    FUN_00d50b20();
  }
  else {
    this_ptr[3] = (int64_t)plVar8;
    if (plVar10 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar8 = (int64_t *)FUN_002dd0f0();
  (**(code **)(*plVar8 + 0x18))();
  lVar14 = (**(code **)(*this_ptr + 0x380))();
  pvVar7 = _pthread_getspecific(pVar11);
  plVar10 = plVar8;
  if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
    plVar10 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
  }
  plVar10[10] = lVar14;
  local_b0 = '\0';
  local_b8 = plVar8;
  FUN_012dddb0();
  if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar7 = _pthread_getspecific(pVar11);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_012d1940();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  plVar10 = (int64_t *)this_ptr[5];
  local_a0 = 0;
  lVar14 = this_ptr[3];
  if (lVar14 != 0) {
    FUN_00d50b00();
  }
  local_a0 = '\x01';
  local_a8 = lVar14;
  (**(code **)(*plVar10 + 0x120))();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 01b381a0
// ============================================================
// Function: FUN_01b381a0
// Address: 01b381a0
// Size: 2227 bytes
// Class: MUScaleBrowserItem

void FUN_01b381a0(void* param_1)

{
  char cVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  void *pvVar4;
  int64_t *plVar5;
  int64_t lVar6;
  void*puVar7;
  void* pVar8;
  void* pVar9;
  char unaff_SIL;
  int64_t this_ptr;
  int64_t *plVar10;
  float fVar11;
  int64_t *local_b8;
  char local_b0;
  float local_50;
  float local_4c;
  int64_t *local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0xe0) != 0) {
    (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x928))();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar5 = (int64_t *)FUN_00e8b990();
    if (plVar5 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar5 != (int64_t *)0x0) {
      cVar1 = (**(code **)(*plVar5 + 0x3c0))();
      if (cVar1 != '\0') {
        (**(code **)(*plVar5 + 0x3b8))();
        FUN_01a1d6e0();
        FUN_019f76e0();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01a1d6e0();
        (**(code **)(*local_b8 + 0xa28))();
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_40 != (int64_t *)0x0) {
          (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x930))();
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
    FUN_01b27070();
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    FUN_01b270b0();
    plVar5 = *(int64_t **)(this_ptr + 0xe0);
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      plVar5 = *(int64_t **)(this_ptr + 0xe0);
      lVar6 = FUN_00e8b990();
      if (lVar6 != 0) {
        plVar5 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b6f0();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01736c50();
    plVar5 = (int64_t *)*plVar5;
    uVar2 = (*plVar5[0x6e])();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific((void*)plVar5);
    plVar10 = local_40;
    if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar5 = local_40;
      plVar10 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    uVar3 = (**(code **)(*plVar10 + 0x370))();
    pVar8 = (void*)plVar5;
    if (*(char *)(this_ptr + 0xf2) == '\0') {
      pvVar4 = _pthread_getspecific(pVar8);
      plVar10 = local_40;
      if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        plVar5 = local_40;
        plVar10 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
      pVar8 = (void*)plVar5;
      local_50 = (float)(**(code **)(*plVar10 + 0x3a0))();
    }
    else {
      pvVar4 = _pthread_getspecific(pVar8);
      if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        pVar8 = (void*)local_40;
      }
      local_50 = (float)FUN_0173fbe0();
      uVar3 = uVar2;
    }
    FUN_01b3b230(local_50,uVar3);
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    pVar9 = 0x1b38d74;
    switch(*(void*)(this_ptr + 0xf4)) {
    case 0:
      pVar8 = pVar9;
      pvVar4 = _pthread_getspecific(0x1b38d74);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_4c = (float)FUN_0173fbe0();
      break;
    case 1:
      pVar8 = pVar9;
      pvVar4 = _pthread_getspecific(0x1b38d74);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar11 = (float)FUN_0173e440();
      local_4c = (float)_logf(fVar11 * g_02394204);
      pvVar4 = _pthread_getspecific(pVar8);
      if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        pVar8 = (void*)local_40;
      }
      fVar11 = (float)FUN_0173e440();
      local_4c = local_4c * g_02394208;
      local_50 = (float)_logf(fVar11 * g_02394204);
      local_50 = local_50 * g_02394208;
      break;
    case 2:
      pVar8 = pVar9;
      pvVar4 = _pthread_getspecific(0x1b38d74);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar11 = (float)FUN_0173e440();
      local_4c = (float)_logf(fVar11 * g_02394204);
      local_4c = local_4c * g_02394208;
      local_50 = g_0241b650;
      break;
    case 3:
      pVar8 = pVar9;
      pvVar4 = _pthread_getspecific(0x1b38d74);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar11 = (float)FUN_0173e440();
      local_50 = (float)FUN_01773e50();
      local_4c = (float)_logf(fVar11 * g_02394204);
      local_4c = local_4c * g_02394208;
      local_50 = local_50 + g_0241b650;
      break;
    case 4:
      pVar8 = pVar9;
      pvVar4 = _pthread_getspecific(0x1b38d74);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_4c = (float)FUN_0173fbe0();
      pvVar4 = _pthread_getspecific(pVar8);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_50 = (float)FUN_0173fbe0();
      break;
    default:
      local_4c = 0.0;
      local_50 = 0.0;
    }
    pvVar4 = _pthread_getspecific(pVar8);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173ecc0(local_50 - local_4c);
    if (unaff_SIL != '\0') {
      puVar7 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      pVar8 = 0x26034e8;
      *puVar7 = &g_026034e8;
      puVar7[0xc] = 0;
      puVar7[7] = 0;
      puVar7[8] = 0;
      puVar7[9] = 0;
      puVar7[10] = 0;
      *(void*)((int64_t)puVar7 + 0x55) = 0;
      (*g_02603500)();
      pvVar4 = _pthread_getspecific(pVar8);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b120();
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_017aa610();
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_017bf8a0();
      FUN_00d50b20();
    }
    FUN_01ad60d0(unaff_SIL,2);
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 0096761c
// ============================================================
// Function: FUN_0096761c
// Address: 0096761c
// Size: 922 bytes
// Class: MUScaleBrowserItem

void FUN_0096761c(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *arg1;
  int64_t this_ptr;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int64_t lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint64_t local_50;
  uint local_48 [4];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  local_68 = *(uint *)(this_ptr + 0xfc) ^ *arg1;
  uVar12 = *(uint *)(this_ptr + 0x100) ^ arg1[1];
  uVar13 = *(uint *)(this_ptr + 0x104) ^ arg1[2];
  uVar14 = *(uint *)(this_ptr + 0x108) ^ arg1[3];
  uVar7 = *(uint *)(this_ptr + 0x10c);
  local_50 = (uint64_t)local_68;
  uVar10 = (uint64_t)(byte)local_68;
  uStack_64 = uVar12;
  uStack_60 = uVar13;
  uStack_5c = uVar14;
  if (*(int *)(this_ptr + 4) < 2) {
    puVar8 = &local_68;
    puVar5 = local_48;
    uVar2 = 4;
  }
  else {
    iVar4 = 1;
    lVar11 = 0x47;
    puVar1 = local_48;
    puVar8 = &local_68;
    uVar9 = local_50;
    uVar2 = uVar12;
    uVar3 = uVar13;
    do {
      puVar5 = puVar8;
      puVar8 = puVar1;
      uVar6 = uVar7 ^ *(uint *)(&g_023c7a30 + uVar10 * 4) ^
              *(uint *)(&g_023c7e30 + (uint64_t)(uVar14 >> 8 & 0xff) * 4) ^
              *(uint *)(&g_023c8230 + (uint64_t)(uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&g_023c8630 + (uint64_t)(uVar2 >> 0x18) * 4);
      local_50 = (uint64_t)uVar6;
      *puVar8 = uVar6;
      uVar12 = *(uint *)(&g_023c7a30 + (uint64_t)(uVar2 & 0xff) * 4) ^
               *(uint *)(this_ptr + -0xc + lVar11 * 4) ^
               *(uint *)(&g_023c7e30 + (uint64_t)((uint)(uVar9 >> 8) & 0xff) * 4) ^
               *(uint *)(&g_023c8230 + (uint64_t)(uVar14 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&g_023c8630 + (uint64_t)(uVar3 >> 0x18) * 4);
      puVar8[1] = uVar12;
      uVar13 = *(uint *)(&g_023c7a30 + (uint64_t)(uVar3 & 0xff) * 4) ^
               *(uint *)(this_ptr + -8 + lVar11 * 4) ^
               *(uint *)(&g_023c7e30 + (uint64_t)(uVar2 >> 8 & 0xff) * 4) ^
               *(uint *)(&g_023c8230 + (uint64_t)((uint)(uVar9 >> 0x10) & 0xff) * 4) ^
               *(uint *)(&g_023c8630 + (uint64_t)(uVar14 >> 0x18) * 4);
      puVar8[2] = uVar13;
      uVar14 = *(uint *)(&g_023c7a30 + (uint64_t)(uVar14 & 0xff) * 4) ^
               *(uint *)(this_ptr + -4 + lVar11 * 4) ^
               *(uint *)(&g_023c7e30 + (uint64_t)(uVar3 >> 8 & 0xff) * 4) ^
               *(uint *)(&g_023c8230 + (uint64_t)(uVar2 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&g_023c8630 + (uVar9 >> 0x18) * 4);
      puVar8[3] = uVar14;
      iVar4 = iVar4 + 1;
      uVar7 = *(uint *)(this_ptr + lVar11 * 4);
      uVar10 = (uint64_t)(uVar6 & 0xff);
      lVar11 = lVar11 + 4;
      puVar1 = puVar5;
      uVar9 = local_50;
      uVar2 = uVar12;
      uVar3 = uVar13;
    } while (iVar4 < *(int *)(this_ptr + 4));
    uVar10 = (uint64_t)(uVar6 & 0xff);
    uVar2 = (int)lVar11 - 0x43;
  }
  *puVar5 = (uint)(byte)(&g_023c8a30)[uVar12 >> 0x18] << 0x18 ^
            (uint)(byte)(&g_023c8a30)[(uint64_t)(uVar13 >> 0x10) & 0xff] << 0x10 ^
            (uint)(byte)(&g_023c8a30)[(uint64_t)(uVar14 >> 8) & 0xff] << 8 ^
            (byte)(&g_023c8a30)[uVar10] ^ uVar7;
  puVar5[1] = (uint)(byte)(&g_023c8a30)[uVar13 >> 0x18] << 0x18 ^
              (uint)(byte)(&g_023c8a30)[(uint64_t)(uVar14 >> 0x10) & 0xff] << 0x10 ^
              (uint)(byte)(&g_023c8a30)[local_50 >> 8 & 0xff] << 8 ^
              (uint)(byte)(&g_023c8a30)[(uint64_t)uVar12 & 0xff] ^
              *(uint *)(this_ptr + 0xfc + (uint64_t)(uVar2 | 1) * 4);
  puVar5[2] = (uint)(byte)(&g_023c8a30)[uVar14 >> 0x18] << 0x18 ^
              (uint)(byte)(&g_023c8a30)[local_50 >> 0x10 & 0xff] << 0x10 ^
              (uint)(byte)(&g_023c8a30)[(uint64_t)(uVar12 >> 8) & 0xff] << 8 ^
              (uint)(byte)(&g_023c8a30)[(uint64_t)uVar13 & 0xff] ^
              *(uint *)(this_ptr + 0xfc + (uint64_t)(uVar2 | 2) * 4);
  puVar5[3] = (uint)(byte)(&g_023c8a30)[local_50 >> 0x18] << 0x18 ^
              (uint)(byte)(&g_023c8a30)[(uint64_t)(uVar12 >> 0x10) & 0xff] << 0x10 ^
              (uint)(byte)(&g_023c8a30)[(uint64_t)(uVar13 >> 8) & 0xff] << 8 ^
              (uint)(byte)(&g_023c8a30)[(uint64_t)uVar14 & 0xff] ^
              *(uint *)(this_ptr + 0xfc + (uint64_t)(uVar2 | 3) * 4);
  lVar11 = 0;
  do {
    arg1[lVar11] = puVar5[lVar11];
    puVar5[lVar11] = 0;
    puVar8[lVar11] = 0;
    lVar11 = lVar11 + 1;
  } while (lVar11 != 4);
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                      ___stack_chk_fail();
}



// ============================================================
// 01b4c2c0
// ============================================================
// Function: FUN_01b4c2c0
// Address: 01b4c2c0
// Size: 886 bytes
// Class: MUScaleBrowserItem
// String references:
//   "MUScaleBrowserItem"

void FUN_01b4c2c0(void)

{
  int64_t *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint32_t uVar5;
  int64_t **pplVar6;
  int64_t *plVar7;
  int64_t this_ptr;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  pplVar6 = &local_40;
  FUN_01ceb020();
  plVar1 = local_40;
  if ((g_02737920 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_027e2e88 = FUN_00d4fe50();
    g_027e2e70 = "MUScaleBrowserItem";
    g_027e2e78 = 0x20;
    g_027e2e80 = FUN_00841ad0;
    g_027e2e90 = 0;
    ram_00000000027e2e98 = 0;
    g_027e2ea0 = 0;
    ram_00000000027e2ea8 = 0;
    g_027e2eb0 = 0;
    ram_00000000027e2eb8 = 0;
    g_027e2ec0 = 0;
    ram_00000000027e2ec8 = 0;
    g_027e2ed0 = 0;
    ram_00000000027e2ed8 = 0;
    g_027e2ee0 = 0;
    ram_00000000027e2ee8 = 0;
    g_027e2ef0 = 0;
    ram_00000000027e2ef8 = 0;
    g_027e2f00 = 0;
    ram_00000000027e2f08 = 0;
    g_027e2f10 = 0;
    ram_00000000027e2f18 = 0;
    g_027e2f20 = 0;
    ram_00000000027e2f28 = 0;
    g_027e2f30 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_01b4c31a:
    pplVar6 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01b4c31a;
  }
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar6 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0x970))();
  plVar7 = local_40;
  plVar8 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) goto LAB_01b4c46b;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (int64_t *)0x0) goto LAB_01b4c46b;
  uVar5 = FUN_00d95590();
  local_60 = local_50;
  local_58 = 0;
  if (local_48 == '\0') {
    if (local_50 != (int64_t *)0x0) {
      uVar5 = FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_58 = '\x01';
  FUN_00d97f20(uVar5,&local_60);
  plVar8 = local_40;
  plVar9 = plVar7;
  if (plVar7 == local_40) {
joined_r0x01b4c410:
    plVar8 = plVar9;
    if ((local_38 != '\0') && (plVar7 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
      plVar9 = plVar8;
      plVar7 = local_40;
      goto joined_r0x01b4c410;
    }
    FUN_00d50b20();
    local_38 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01b4c46b:
  plVar7 = *(int64_t **)(this_ptr + 0xb8);
  if ((plVar8 == (int64_t *)0x0) || (iVar4 = FUN_00d8c7a0(), iVar4 == 0)) {
    bVar2 = false;
    uVar5 = 0;
  }
  else if (plVar1 == (int64_t *)0x0) {
    uVar5 = 1;
    bVar2 = false;
  }
  else {
    FUN_01aa3f90();
    uVar5 = (**(code **)(*local_40 + 0x3a0))();
    bVar2 = true;
  }
  (**(code **)(*plVar7 + 0x998))(uVar5);
  if (((bVar2) && (local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    plVar7 = *(int64_t **)(this_ptr + 0xb0);
    plVar9 = (int64_t *)0x0;
  }
  else {
    FUN_01aa3f90();
    plVar9 = local_50;
    if (((local_48 == '\0') && (FUN_00d50b00(), local_48 != '\0')) && (local_50 != (int64_t *)0x0))
    {
      FUN_00d50b20();
    }
    plVar7 = *(int64_t **)(this_ptr + 0xb0);
    (**(code **)(*plVar9 + 0x3a0))();
  }
  (**(code **)(*plVar7 + 0x998))();
  if ((plVar1 != (int64_t *)0x0) && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01b4d260
// ============================================================
// Function: FUN_01b4d260
// Address: 01b4d260
// Size: 1030 bytes
// Class: MUScaleBrowserItem

void FUN_01b4d260(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  void*puVar2;
  int64_t *plVar3;
  int64_t lVar4;
  uint32_t uVar5;
  uint8_t auVar6 [16];
  int64_t lVar7;
  void*puVar8;
  uint32_t unaff_ESI;
  int64_t this_ptr;
  float fVar9;
  float fVar11;
  uint64_t in_XMM1_Qb;
  uint8_t auVar10 [16];
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_38;
  char local_30;
  
  FUN_01cecec0(param_1,unaff_ESI);
  plVar1 = *(int64_t **)(local_38 + 0x28);
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  fVar9 = (float)FUN_01dcf710();
  puVar8 = (void*)FUN_00e8fc40();
  FUN_0006daf0();
  *(void*)(puVar8 + 0x27) = 0;
  puVar8[0x2e] = 0;
  *(void*)(puVar8 + 0x2f) = 0;
  puVar8[0x30] = 0;
  *(void*)(puVar8 + 0x31) = 0;
  puVar8[0x28] = 0;
  puVar8[0x29] = 0;
  *(void*)(puVar8 + 0x2a) = 0;
  puVar8[0x2b] = 0;
  puVar8[0x2c] = 0;
  *(void*)((int64_t)puVar8 + 0x165) = 0;
  *(void*)((int64_t)puVar8 + 0x18c) = 0;
  *(void*)((int64_t)puVar8 + 0x194) = 0;
  *(void*)((int64_t)puVar8 + 0x199) = 0;
  puVar8[0x35] = 0;
  puVar8[0x36] = 0;
  puVar8[0x37] = 0;
  puVar8[0x38] = 0;
  *puVar8 = &g_0269c118;
  puVar8[2] = &g_0269cc70;
  puVar8[0x39] = &g_0269ccb0;
  puVar8[0x45] = 0;
  *(void*)(puVar8 + 0x46) = 0;
  puVar8[0x47] = 0;
  puVar8[0x3a] = 0;
  puVar8[0x3b] = 0;
  *(void*)(puVar8 + 0x3c) = 0;
  puVar8[0x3f] = 0;
  puVar8[0x40] = 0;
  puVar8[0x3d] = 0;
  puVar8[0x3e] = 0;
  *(void*)((int64_t)puVar8 + 0x205) = 0;
  puVar8[0x42] = 0;
  puVar8[0x43] = 0;
  *(void*)((int64_t)puVar8 + 0x21d) = 0;
  (*g_0269c130)();
  puVar2 = *(void**)(this_ptr + 0xa8);
  if (puVar2 == puVar8) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0xa8) = puVar8;
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  auVar6._8_8_ = in_XMM1_Qb;
  auVar6._0_8_ = param_2;
  uVar5 = (uint32_t)((uint64_t)in_XMM1_Qb >> 0x20);
  fVar11 = (float)((uint64_t)param_2 >> 0x20);
  auVar10._4_4_ = fVar11;
  auVar10._0_4_ = fVar11 + g_02390124;
  auVar10._8_4_ = uVar5;
  auVar10._12_4_ = uVar5;
  auVar10 = insertps(auVar6,auVar10,0x10);
  (**(code **)(**(int64_t **)(this_ptr + 0xa8) + 0x4d0))(g_02390d00 + fVar9,auVar10._0_8_);
  lVar4 = g_027ebf00;
  plVar3 = *(int64_t **)(this_ptr + 0xa8);
  if (g_027ebf00 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar3 + 0xa10))();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  plVar3 = *(int64_t **)(this_ptr + 0xa8);
  FUN_00d50b00();
  (**(code **)(*plVar3 + 0xa20))();
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0xa8) + 0x3a0))();
  lVar4 = g_027e47e0;
  plVar3 = *(int64_t **)(this_ptr + 0xa8);
  if (g_027e47e0 != 0) {
    FUN_00d50b00();
  }
  lVar7 = g_027e47e8;
  if (g_027e47e8 != 0) {
    FUN_00d50b00();
  }
  local_88 = lVar7;
  local_80 = '\x01';
  local_78 = 0;
  local_70 = '\0';
  FUN_00d31230(&local_78,&local_88);
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  (**(code **)(*plVar3 + 0x968))();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  local_60 = 0;
  lVar4 = *(int64_t *)(this_ptr + 0xa8);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  local_60 = '\x01';
  local_68 = lVar4;
  (**(code **)(*plVar1 + 0x450))();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0xa8) + 0xab8))();
  FUN_00d50b20();
  return;
}



// ============================================================
// 01aa9200
// ============================================================
// Function: FUN_01aa9200
// Address: 01aa9200
// Size: 904 bytes
// Class: MUScaleBrowserItem

void FUN_01aa9200(uint64_t param_1,uint32_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  void *pvVar3;
  void* in_ECX;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t uVar4;
  int64_t local_b0;
  uint8_t local_a8;
  int64_t local_a0;
  uint8_t local_98;
  uint64_t local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  uint32_t local_34;
  
  if ((((*arg1 != 0) && (*(int64_t *)(this_ptr + 0x20) != 0)) &&
      (*(int64_t *)(this_ptr + 0x40) != 0)) && (*(int64_t *)(this_ptr + 0x10) != 0)) {
    local_90 = param_1;
    local_34 = param_2;
    uVar4 = FUN_00cafd20();
    local_b0 = *arg1;
    local_a8 = 0;
    FUN_01aa8960(uVar4,&local_b0);
    lVar1 = local_48;
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    FUN_01aa8f10();
    lVar2 = local_48;
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_88 = lVar1;
    local_80 = '\0';
    FUN_012e6a70();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (lVar2 != 0)) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125a580(local_34);
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012642b0(local_90);
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_70 = '\0';
    local_78 = 0;
    uVar4 = FUN_01270710();
    if ((local_70 != '\0') && (local_78 != 0)) {
      uVar4 = FUN_00d50b20();
    }
    if (*(int64_t *)(this_ptr + 0x90) != 0) {
      local_a0 = *arg1;
      local_98 = 0;
      FUN_01aa8960(uVar4,&local_a0);
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_68 = local_48;
      local_60 = '\0';
      FUN_012e6a70();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125a580(local_34);
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012642b0(local_90);
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_50 = '\0';
      local_58 = 0;
      FUN_01270710();
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x3c8))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 01ce9490
// ============================================================
// Function: FUN_01ce9490
// Address: 01ce9490
// Size: 728 bytes
// Class: MUScaleBrowserItem

void* FUN_01ce9490(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  void*puVar5;
  int64_t lVar6;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t local_78;
  char local_70;
  int64_t local_48;
  
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  (*g_02572370)();
  lVar6 = *(int64_t *)(arg1 + 0x150);
  if (*(int *)(lVar6 + 0xc) < 1) {
    bVar2 = false;
    lVar7 = 0;
    bVar1 = false;
    local_48 = 0;
  }
  else {
    lVar8 = 0;
    local_48 = 0;
    bVar1 = false;
    lVar7 = 0;
    bVar2 = false;
    do {
      lVar6 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + lVar8 * 8);
      if (local_48 == lVar6) {
        if ((!bVar1) && (local_48 != 0)) {
          bVar1 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        if ((bVar1) && (local_48 != 0)) {
          FUN_00d50b20();
          bVar1 = true;
          local_48 = lVar6;
        }
        else {
          bVar1 = true;
          local_48 = lVar6;
        }
      }
      iVar4 = FUN_01dd4c80();
      if (iVar4 != -1) {
        lVar6 = *(int64_t *)(local_48 + 0x20);
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        FUN_01ce41d0();
        if (local_78 == lVar7) {
          lVar9 = lVar7;
          bVar3 = bVar2;
          if ((!bVar2) && (local_78 != 0)) {
            if (local_70 != '\0') goto LAB_01ce9654;
            FUN_00d50b00();
            bVar3 = true;
          }
LAB_01ce96a5:
          lVar7 = lVar9;
          bVar2 = bVar3;
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_70 == '\0') {
            if (local_78 != 0) {
              FUN_00d50b00();
            }
            bVar3 = true;
            lVar9 = local_78;
            if ((bVar2) && (lVar7 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_01ce96a5;
          }
          lVar9 = local_78;
          if ((bVar2) && (lVar7 != 0)) {
            FUN_00d50b20();
          }
LAB_01ce9654:
          local_70 = '\0';
          lVar7 = lVar9;
          bVar2 = true;
        }
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        if (iVar4 < *(int *)(lVar7 + 0xc)) {
          lVar6 = *(int64_t *)(*(int64_t *)(lVar7 + 0x10) + (int64_t)iVar4 * 8);
          if (lVar6 != 0) {
            FUN_00d50b00();
          }
          FUN_00d21140();
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
        }
      }
      lVar8 = lVar8 + 1;
      lVar6 = *(int64_t *)(arg1 + 0x150);
    } while (lVar8 < *(int *)(lVar6 + 0xc));
  }
  *this_ptr = puVar5;
  *(void*)(this_ptr + 1) = 1;
  if ((bVar2) && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar1) && (local_48 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 01b4cd30
// ============================================================
// Function: FUN_01b4cd30
// Address: 01b4cd30
// Size: 799 bytes
// Class: MUScaleBrowserItem

uint64_t FUN_01b4cd30(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  uint uVar4;
  uint32_t uVar5;
  uint64_t uVar6;
  void*arg1;
  void*this_ptr;
  int64_t lVar7;
  int64_t local_a8;
  char local_a0;
  int64_t local_88;
  char local_80;
  int64_t *local_40;
  char local_38;
  
  cVar3 = (**(code **)(*(int64_t *)*arg1 + 0x398))();
  if (cVar3 != '\0') {
    plVar1 = (int64_t *)*this_ptr;
    (**(code **)(*(int64_t *)*arg1 + 0x390))();
    if (local_80 == '\0') {
      if (local_88 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_80 = '\0';
    }
    uVar4 = (**(code **)(*plVar1 + 0x50))();
    uVar6 = (uint64_t)uVar4;
    if (local_88 != 0) {
      FUN_00d50b20();
    }
    if (local_80 != '\0') {
      if (local_88 != 0) {
        FUN_00d50b20();
        return uVar6;
      }
      return uVar6;
    }
    return uVar6;
  }
  cVar3 = (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
  if (cVar3 != '\0') {
    (**(code **)(*(int64_t *)*arg1 + 1000))();
    if (local_80 == '\0') {
      if (local_88 == 0) {
        return 0;
      }
      FUN_00d50b00();
    }
    else if (local_88 == 0) {
      return 0;
    }
    if (0 < *(int *)(local_88 + 0xc)) {
      lVar7 = 0;
      do {
        plVar1 = *(int64_t **)(*(int64_t *)(local_88 + 0x10) + lVar7 * 8);
        cVar3 = (**(code **)(*plVar1 + 0x3a0))();
        if (cVar3 == '\0') {
          (**(code **)(*plVar1 + 0x370))();
          FUN_017a9f30();
          if (local_a0 == '\0') {
            if (local_a8 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_a0 = '\0';
          }
          cVar3 = (**(code **)(*local_40 + 0x50))();
          if (local_a8 != 0) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar3 != '\0') goto LAB_01b4cf91;
        }
        else {
LAB_01b4cf91:
          plVar2 = (int64_t *)*this_ptr;
          (**(code **)(*plVar1 + 0x390))();
          if (local_38 == '\0') {
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          uVar5 = (**(code **)(*plVar2 + 0x50))();
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((char)uVar5 != '\0') {
            FUN_00115910();
            FUN_00d50b20();
            return CONCAT71((uint7)(uint3)((uint)uVar5 >> 8),1);
          }
        }
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < *(int *)(local_88 + 0xc));
    }
    FUN_00115910();
    FUN_00d50b20();
  }
  return 0;
}



// ============================================================
// 01ab1b30
// ============================================================
// Function: FUN_01ab1b30
// Address: 01ab1b30
// Size: 1009 bytes
// Class: MUScaleBrowserItem

void* FUN_01ab1b30(int64_t *param_1,void*param_2)

{
  int64_t *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  void*puVar5;
  int64_t lVar6;
  void*puVar7;
  void*this_ptr;
  uint32_t extraout_XMM0_Da;
  int64_t *local_d8;
  uint8_t local_d0;
  code *local_c8;
  void*local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int local_68;
  void*local_40;
  char local_38;
  
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  (*g_02572370)();
  (**(code **)(*(int64_t *)*param_2 + 1000))();
  if (local_78 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
      goto LAB_01ab1bce;
    }
  }
  else if (local_80 != 0) {
LAB_01ab1bce:
    local_68 = -1;
    local_c8 = g_02641270;
LAB_01ab1c2b:
    lVar6 = (int64_t)local_68;
    local_68 = local_68 + 1;
    if (*(int *)(local_80 + 0xc) <= local_68) {
      FUN_00115910();
      *this_ptr = puVar5;
      *(void*)(this_ptr + 1) = 1;
      FUN_00d50b20();
      return this_ptr;
    }
    plVar1 = *(int64_t **)(*(int64_t *)(local_80 + 0x10) + 8 + lVar6 * 8);
    cVar2 = (**(code **)(*plVar1 + 0x3a0))();
    if (cVar2 == '\0') goto LAB_01ab1d20;
    goto LAB_01ab1c8e;
  }
  *this_ptr = puVar5;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
LAB_01ab1d20:
  cVar2 = (**(code **)(*plVar1 + 0x398))();
  if (cVar2 != '\0') {
    if ((*param_1 != 0) && (*(int *)(*param_1 + 0xc) != 0)) {
      (**(code **)(*plVar1 + 0x370))();
      if (local_88 == '\0') {
        if (local_90 != (void*)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_88 = '\0';
      }
      local_40 = local_90;
      local_38 = '\0';
      cVar2 = FUN_00d23d70();
      if (local_90 != (void*)0x0) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (cVar2 == '\0') goto LAB_01ab1c2b;
    }
LAB_01ab1c8e:
    puVar7 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar7 = &g_02641258;
    *(void*)((int64_t)puVar7 + 0xc) = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    (*local_c8)();
    FUN_01aa3fc0();
    (**(code **)(*plVar1 + 0x390))();
    if (local_38 == '\0') {
      if (local_40 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01aa3f40();
    if (local_40 != (void*)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
      FUN_00d50b20();
    }
    bVar3 = FUN_01ab2450();
    bVar4 = (**(code **)(*plVar1 + 0x3a0))();
    if ((bVar4 & bVar3) == 1) {
      local_d0 = 0;
      local_d8 = plVar1;
      FUN_01aafac0(extraout_XMM0_Da,&local_d8);
      if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01aa3f00();
    local_38 = '\0';
    FUN_00d21140();
    FUN_00d50b20();
    local_40 = puVar7;
  }
  goto LAB_01ab1c2b;
}



// ============================================================
// 01aa85c0
// ============================================================
// Function: FUN_01aa85c0
// Address: 01aa85c0
// Size: 722 bytes
// Class: MUScaleBrowserItem

void FUN_01aa85c0(uint64_t param_1)

{
  void *pvVar1;
  int64_t lVar2;
  void* in_ECX;
  int64_t *plVar3;
  int64_t arg1;
  int64_t *this_ptr;
  uint64_t uVar4;
  int64_t local_80;
  uint8_t local_78;
  uint64_t local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  
  if ((((*(int64_t *)(arg1 + 0x50) == 0) || (*(int64_t *)(arg1 + 0x20) == 0)) ||
      (*(int64_t *)(arg1 + 0x40) == 0)) || (*(int64_t *)(arg1 + 0x10) == 0)) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    local_70 = param_1;
    uVar4 = FUN_00cafd20();
    lVar2 = *(int64_t *)(arg1 + 0x50);
    if (lVar2 != 0) {
      uVar4 = FUN_00d50b00();
    }
    local_78 = 1;
    local_80 = lVar2;
    FUN_01aa8960(uVar4,&local_80);
    local_38 = local_68;
    if ((local_60 == '\0') && (local_68 != 0)) {
      FUN_00d50b00();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    FUN_01aa8f10();
    pvVar1 = _pthread_getspecific(in_ECX);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_58 = local_38;
    local_50 = '\0';
    FUN_012e6a70();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    pvVar1 = _pthread_getspecific(in_ECX);
    if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
      in_ECX = (void*)local_38;
    }
    plVar3 = *(int64_t **)(arg1 + 0x40);
    pvVar1 = _pthread_getspecific(in_ECX);
    if (pvVar1 != (void *)0x0) {
      plVar3 = *(int64_t **)(arg1 + 0x40);
      lVar2 = FUN_00e8b990();
      if (lVar2 != 0) {
        plVar3 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4];
      }
    }
    (**(code **)(*plVar3 + 0x3a0))();
    FUN_0125a580();
    pvVar1 = _pthread_getspecific(in_ECX);
    if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
      in_ECX = (void*)local_38;
    }
    FUN_0126dbb0();
    pvVar1 = _pthread_getspecific(in_ECX);
    if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
      in_ECX = (void*)local_38;
    }
    FUN_012642b0(local_70);
    pvVar1 = _pthread_getspecific(in_ECX);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_40 = '\0';
    local_48 = 0;
    FUN_01270710();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(int64_t **)(arg1 + 0x10) + 0x3c8))();
    *this_ptr = local_38;
    *(void*)(this_ptr + 1) = 1;
  }
  return;
}



// ============================================================
// 01aa4330
// ============================================================
// Function: FUN_01aa4330
// Address: 01aa4330
// Size: 541 bytes
// Class: MUScaleBrowserItem
// String references:
//   "MUScaleBrowserItem"

uint64_t FUN_01aa4330(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int64_t *plVar7;
  undefined7 uVar9;
  uint64_t uVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  
  plVar7 = (int64_t *)*arg1;
  uVar9 = (undefined7)((uint64_t)plVar7 >> 8);
  if (plVar7 == this_ptr) {
    uVar8 = CONCAT71(uVar9,1);
    goto LAB_01aa4492;
  }
  if ((g_02737920 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    g_027e2e88 = FUN_00d4fe50();
    g_027e2e70 = "MUScaleBrowserItem";
    g_027e2e78 = 0x20;
    g_027e2e80 = FUN_00841ad0;
    g_027e2e90 = 0;
    ram_00000000027e2e98 = 0;
    g_027e2ea0 = 0;
    ram_00000000027e2ea8 = 0;
    g_027e2eb0 = 0;
    ram_00000000027e2eb8 = 0;
    g_027e2ec0 = 0;
    ram_00000000027e2ec8 = 0;
    g_027e2ed0 = 0;
    ram_00000000027e2ed8 = 0;
    g_027e2ee0 = 0;
    ram_00000000027e2ee8 = 0;
    g_027e2ef0 = 0;
    ram_00000000027e2ef8 = 0;
    g_027e2f00 = 0;
    ram_00000000027e2f08 = 0;
    g_027e2f10 = 0;
    ram_00000000027e2f18 = 0;
    g_027e2f20 = 0;
    ram_00000000027e2f28 = 0;
    g_027e2f30 = 0;
    ___cxa_guard_release();
  }
  if (plVar7 == (int64_t *)0x0) {
LAB_01aa4388:
    plVar7 = &g_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar7 = arg1;
    if (cVar4 == '\0') goto LAB_01aa4388;
  }
  if (*plVar7 == 0) {
    uVar8 = 0;
  }
  else {
    lVar1 = this_ptr[3];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    lVar2 = *(int64_t *)(*arg1 + 0x18);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    if (lVar1 == lVar2) {
      uVar8 = CONCAT71(uVar9,1);
    }
    else if (this_ptr[3] == 0) {
      uVar8 = 0;
    }
    else {
      FUN_00d50b00();
      if (*(int64_t *)(*arg1 + 0x18) == 0) {
        uVar8 = 0;
      }
      else {
        FUN_00d50b00();
        plVar7 = (int64_t *)this_ptr[3];
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        lVar3 = *(int64_t *)(*arg1 + 0x18);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        uVar5 = (**(code **)(*plVar7 + 0x50))();
        uVar8 = (uint64_t)uVar5;
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
LAB_01aa4492:
  return uVar8 & 0xffffffff;
}



// ============================================================
// 01ab2150
// ============================================================
// Function: FUN_01ab2150
// Address: 01ab2150
// Size: 513 bytes
// Class: MUScaleBrowserItem

uint64_t FUN_01ab2150(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  uint32_t uVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int64_t *local_88;
  uint8_t local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  int local_40;
  uint64_t local_3c;
  
  if ((*param_2 == 0) || (*(int *)(*param_2 + 0xc) == 0)) {
    return 0;
  }
  FUN_01aa3f90();
  plVar6 = local_58;
  if ((local_50 == '\0') &&
     (((local_58 != (int64_t *)0x0 && (FUN_00d50b00(), local_50 != '\0')) &&
      (local_58 != (int64_t *)0x0)))) {
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*plVar6 + 0x3a0))();
  if (cVar3 != '\0') {
    local_88 = plVar6;
    local_80 = 0;
    FUN_01ab2a40(param_1,&local_88);
    plVar2 = local_58;
    if (plVar6 == local_58) {
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_50 == '\0') {
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
      }
      else {
        FUN_00d50b20();
      }
      plVar6 = plVar2;
      if (plVar2 == (int64_t *)0x0) {
        return 0;
      }
    }
    cVar3 = FUN_00ce6e30();
    if (cVar3 == '\0') {
      FUN_00d50b20();
      return 0;
    }
  }
  cVar3 = (**(code **)(*plVar6 + 0x398))();
  if (((cVar3 == '\0') && (cVar3 = (**(code **)(*plVar6 + 0x3a0))(), cVar3 == '\0')) ||
     ((cVar3 = FUN_00ce6e30(), cVar3 == '\0' || (lVar1 = *param_2, lVar1 == 0)))) {
LAB_01ab2338:
    uVar5 = 0;
  }
  else {
    local_50 = '\0';
    local_58 = (int64_t *)0x0;
    local_3c = 0;
    lVar7 = 0;
    local_48 = lVar1;
    do {
      local_40 = (int)lVar7;
      if (*(int *)(lVar1 + 0xc) <= local_40) {
        FUN_01b53440();
        goto LAB_01ab2338;
      }
      local_58 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + lVar7 * 8);
      FUN_01aa3f90();
      local_60 = '\0';
      local_68 = plVar6;
      uVar4 = (**(code **)(*local_78 + 0x50))();
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar7 = lVar7 + 1;
    } while ((char)uVar4 == '\0');
    FUN_01b53440();
    uVar5 = CONCAT71((uint7)(uint3)((uint)uVar4 >> 8),1);
  }
  FUN_00d50b20();
  return uVar5;
}



// ============================================================
// 01aa8960
// ============================================================
// Function: FUN_01aa8960
// Address: 01aa8960
// Size: 908 bytes
// Class: MUScaleBrowserItem

int64_t * FUN_01aa8960(void* param_1)

{
  int64_t lVar1;
  void *pvVar2;
  int64_t *this_ptr;
  int64_t lVar3;
  int64_t local_98;
  char local_90;
  int64_t local_68;
  char local_60;
  
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d51d20();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01265b80();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01265b80();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
      goto LAB_01aa8ac5;
    }
  }
  else if (local_68 != 0) {
LAB_01aa8ac5:
    if (0 < *(int *)(local_68 + 0xc)) {
      lVar3 = 0;
      do {
        lVar1 = *(int64_t *)(*(int64_t *)(local_68 + 0x10) + lVar3 * 8);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011ef460();
        if (local_90 == '\0') {
          if (local_98 != 0) {
            FUN_00d50b00();
            goto LAB_01aa8be0;
          }
        }
        else if (local_98 != 0) {
LAB_01aa8be0:
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013dd9a0();
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_011ef3f0();
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        lVar3 = lVar3 + 1;
      } while ((int)lVar3 < *(int *)(local_68 + 0xc));
    }
    FUN_0015edf0();
    *this_ptr = local_68;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
    goto joined_r0x01aa8cfb;
  }
  *this_ptr = local_68;
  *(void*)(this_ptr + 1) = 1;
joined_r0x01aa8cfb:
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 01aa7bc0
// ============================================================
// Function: FUN_01aa7bc0
// Address: 01aa7bc0
// Size: 507 bytes
// Class: MUScaleBrowserItem

void FUN_01aa7bc0(void* param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  void *pvVar4;
  int64_t this_ptr;
  int64_t local_50;
  char local_48;
  
  if (*(int64_t **)(this_ptr + 0x18) != (int64_t *)0x0) {
    cVar3 = (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x390))();
    if (cVar3 != '\0') {
      cVar3 = (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x5e8))();
      if (cVar3 != '\0') {
        plVar1 = *(int64_t **)(this_ptr + 0x18);
        FUN_0141cb10();
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        (**(code **)(*plVar1 + 0x690))();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x698))();
      }
      plVar1 = *(int64_t **)(this_ptr + 0x28);
      lVar2 = *(int64_t *)(this_ptr + 0x18);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0x128))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    if (*(int64_t *)(this_ptr + 0x18) != 0) {
      *(void*)(this_ptr + 0x18) = 0;
      FUN_00d50b20();
    }
    plVar1 = *(int64_t **)(this_ptr + 0x10);
    lVar2 = *(int64_t *)(this_ptr + 0x20);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x3a8))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d50130();
    if (*(int64_t *)(this_ptr + 0x20) != 0) {
      *(void*)(this_ptr + 0x20) = 0;
      FUN_00d50b20();
    }
    (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x468))();
    (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x470))();
    FUN_00d50130();
    if (*(int64_t *)(this_ptr + 0x10) != 0) {
      *(void*)(this_ptr + 0x10) = 0;
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 01aa6890
// ============================================================
// Function: FUN_01aa6890
// Address: 01aa6890
// Size: 602 bytes
// Class: MUScaleBrowserItem

void FUN_01aa6890(void* param_1)

{
  void *pvVar1;
  int64_t *this_ptr;
  uint32_t uVar2;
  uint64_t unaff_R13;
  int64_t lVar3;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  uint32_t local_48;
  int64_t local_40;
  char local_38;
  
  if (this_ptr[5] == 0) {
    return;
  }
  FUN_017a57b0();
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar3 == 0) {
    return;
  }
  FUN_017a7c70();
  lVar3 = local_40;
  if (local_40 == 0) {
    uVar2 = (uint32_t)CONCAT71((int7)((uint64_t)unaff_R13 >> 8),1);
    lVar3 = 0;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
      uVar2 = 0;
      if ((local_38 == '\0') || (local_40 == 0)) goto LAB_01aa6977;
      FUN_00d50b20();
    }
    uVar2 = 0;
  }
LAB_01aa6977:
  FUN_00d50b20();
  if (lVar3 != 0) {
    local_48 = uVar2;
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    uVar2 = local_48;
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_78 = (int64_t *)0x0;
    local_70 = '\0';
    local_68 = (int64_t *)0x0;
    local_60 = '\0';
    FUN_012cc0c0(&local_68,&local_78,1,0);
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      (**(code **)(*local_68 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      (**(code **)(*local_78 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_50 = '\0';
    local_58 = lVar3;
    (**(code **)(*this_ptr + 0x370))();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((char)uVar2 == '\0') {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 01aa8f10
// ============================================================
// Function: FUN_01aa8f10
// Address: 01aa8f10
// Size: 550 bytes
// Class: MUScaleBrowserItem

void FUN_01aa8f10(void* param_1)

{
  int iVar1;
  void *pvVar2;
  char *pcVar3;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38 [8];
  char local_30 [8];
  
  if (*(int64_t *)(arg1 + 0x20) == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    if (local_38[0] == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38[0] = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    iVar1 = *(int *)(local_40 + 0xc);
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
    if (iVar1 == 0) {
      *this_ptr = local_40;
      *(void*)(this_ptr + 1) = 1;
    }
    else {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6160();
      FUN_00d23310();
      pcVar3 = local_30;
      if (local_38[0] != '\0') {
        pcVar3 = local_38;
      }
      local_30[0] = local_38[0];
      *pcVar3 = '\0';
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      *(void*)(this_ptr + 1) = 0;
      if ((local_30[0] == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      *this_ptr = local_40;
      *(void*)(this_ptr + 1) = 1;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}



// ============================================================
// 01b4c850
// ============================================================
// Function: FUN_01b4c850
// Address: 01b4c850
// Size: 632 bytes
// Class: MUScaleBrowserItem

void FUN_01b4c850(void)

{
  int64_t *plVar1;
  int64_t this_ptr;
  int64_t local_30;
  char local_28;
  
  plVar1 = *(int64_t **)(this_ptr + 0xd0);
  FUN_00d8ede0();
  if (local_28 == '\0') {
    if (local_30 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_28 = '\0';
  }
  (**(code **)(*plVar1 + 0x958))();
  if (local_30 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = *(int64_t **)(this_ptr + 0xd8);
  FUN_00d8ede0();
  if (local_28 == '\0') {
    if (local_30 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_28 = '\0';
  }
  (**(code **)(*plVar1 + 0x958))();
  if (local_30 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = *(int64_t **)(this_ptr + 0xe0);
  FUN_00d8ede0();
  if (local_28 == '\0') {
    if (local_30 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_28 = '\0';
  }
  (**(code **)(*plVar1 + 0x958))();
  if (local_30 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = *(int64_t **)(this_ptr + 0xe8);
  FUN_00d8ede0();
  if (local_28 == '\0') {
    if (local_30 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_28 = '\0';
  }
  (**(code **)(*plVar1 + 0x958))();
  if (local_30 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = *(int64_t **)(this_ptr + 0xf0);
  FUN_00d8ede0();
  if (local_28 == '\0') {
    if (local_30 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_28 = '\0';
  }
  (**(code **)(*plVar1 + 0x958))();
  if (local_30 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  return;
}

