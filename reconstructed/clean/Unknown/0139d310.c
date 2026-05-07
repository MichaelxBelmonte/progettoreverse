// Function: FUN_0139d310
// Address: 0139d310
// Size: 15825 bytes
// Class: Unknown

void* FUN_0139d310(int64_t *param_1,int64_t *param_2,uint64_t param_3)

{
  uint uVar1;
  int64_t lVar2;
  bool bVar3;
  bool bVar4;
  double dVar5;
  bool bVar6;
  uint8_t auVar7 [16];
  bool bVar8;
  code *pcVar9;
  int iVar10;
  void*puVar11;
  int64_t lVar12;
  void*puVar13;
  uint64_t uVar14;
  undefined7 uVar26;
  int64_t lVar15;
  void *pvVar16;
  int64_t lVar17;
  void *pvVar18;
  int64_t *plVar19;
  int64_t lVar20;
  int64_t lVar21;
  uint64_t uVar22;
  int64_t *plVar23;
  int64_t lVar24;
  int64_t lVar25;
  void* pVar27;
  uint uVar28;
  uint uVar29;
  int64_t *plVar30;
  undefined7 uVar31;
  uint uVar32;
  int64_t arg1;
  void*this_ptr;
  char cVar33;
  int iVar34;
  int iVar35;
  char cVar36;
  char cVar37;
  int64_t *plVar38;
  uint64_t uVar39;
  int iVar40;
  void*puVar41;
  bool bVar42;
  uint32_t uVar43;
  double dVar44;
  double dVar45;
  float fVar46;
  float fVar47;
  float local_19c;
  int64_t local_178;
  char local_170;
  uint32_t local_164;
  uint64_t local_138;
  int64_t *local_130;
  int64_t local_128;
  int64_t *local_120;
  int64_t *local_118;
  int64_t *local_110;
  char local_108;
  int local_f8;
  int64_t local_d8;
  uint64_t local_d0;
  int64_t local_c8;
  int64_t *local_c0;
  int64_t *local_b8;
  int64_t *local_b0;
  uint8_t local_a8 [16];
  int64_t *local_90;
  int64_t *local_88;
  int64_t *local_80;
  int64_t *local_70;
  uint local_68;
  uint local_64;
  int64_t *local_60;
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  uint local_3c;
  int64_t *local_38;
  
  puVar11 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar41 = (void*)&g_02572358;
  *puVar11 = &g_02572358;
  pcVar9 = g_02572370;
  (*g_02572370)();
  lVar2 = *(int64_t *)(arg1 + 0x1a0);
  if (lVar2 == 0) {
    FUN_0132d640();
    lVar2 = *(int64_t *)(arg1 + 0x1a0);
  }
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  dVar45 = *(double *)(lVar2 + 0x38);
  uVar1 = *(uint *)(lVar2 + 0x30);
  lVar12 = FUN_00e83010();
  if (*(float *)(arg1 + 0x84) <= 0.0) {
    local_19c = g_02390124;
  }
  else {
    local_19c = g_02390124 / *(float *)(arg1 + 0x84);
  }
  puVar13 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar13 = &g_02572358;
  (*pcVar9)();
  iVar34 = 0;
  if (*(int *)(arg1 + 0x88) < 1) {
    local_138 = 0;
    local_130 = (int64_t *)0x0;
  }
  else {
    local_130 = (int64_t *)0x0;
    local_138 = 0;
    do {
      local_138 = local_138 & 0xffffffff;
      local_110 = (int64_t *)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_110 = (int64_t)&g_02572358;
      uVar14 = (*pcVar9)();
      uVar26 = (undefined7)((uint64_t)uVar14 >> 8);
      cVar36 = (char)local_138;
      if (local_110 == local_130) {
        local_110 = local_130;
        if (cVar36 == '\0') {
          local_138 = CONCAT71(uVar26,1);
        }
        else {
          FUN_00d50b20();
        }
      }
      else {
        local_138 = CONCAT71(uVar26,1);
        if ((cVar36 != '\0') && (local_130 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      local_108 = '\0';
      param_1 = local_110;
      FUN_00d21140();
      iVar34 = iVar34 + 1;
      local_130 = local_110;
    } while (iVar34 < *(int *)(arg1 + 0x88));
  }
  lVar15 = *(int64_t *)(arg1 + 0x40);
  if (*(int *)(lVar15 + 0xc) < 1) {
    bVar8 = false;
    local_118 = (int64_t *)0x0;
    cVar36 = '\0';
    local_120 = (int64_t *)0x0;
    local_50 = (int64_t *)0x0;
    local_60 = (int64_t *)0x0;
    local_3c = 0;
    local_38 = (int64_t *)0x0;
  }
  else {
    puVar41 = (void*)0x0;
    local_38 = (int64_t *)0x0;
    local_3c = 0;
    local_60 = (int64_t *)0x0;
    local_50 = (int64_t *)0x0;
    local_120 = (int64_t *)0x0;
    cVar33 = '\0';
    cVar36 = '\0';
    local_118 = (int64_t *)0x0;
    param_1 = (int64_t *)0x0;
    bVar8 = false;
    do {
      pVar27 = (void*)param_1;
      lVar15 = *(int64_t *)(lVar15 + 0x10);
      plVar38 = *(int64_t **)(lVar15 + (int64_t)puVar41 * 8);
      if (local_60 == plVar38) {
        if (((char)local_50 == '\0') && (local_60 != (int64_t *)0x0)) {
          local_50 = (int64_t *)CONCAT71((int7)((uint64_t)lVar15 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (plVar38 != (int64_t *)0x0) {
          lVar15 = FUN_00d50b00();
        }
        if (((char)local_50 == '\0') || (local_60 == (int64_t *)0x0)) {
          local_50 = (int64_t *)CONCAT71((int7)((uint64_t)lVar15 >> 8),1);
          local_60 = plVar38;
        }
        else {
          uVar14 = FUN_00d50b20();
          local_50 = (int64_t *)CONCAT71((int7)((uint64_t)uVar14 >> 8),1);
          local_60 = plVar38;
        }
      }
      pvVar16 = _pthread_getspecific(pVar27);
      if (pvVar16 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar14 = FUN_013de560();
      uVar26 = (undefined7)((uint64_t)uVar14 >> 8);
      cVar37 = (char)local_3c;
      if (local_110 == local_38) {
        if ((cVar37 == '\0') && (local_110 != (int64_t *)0x0)) {
          local_3c = (uint)CONCAT71(uVar26,1);
          if (local_108 != '\0') goto LAB_0139d830;
          local_3c = (uint)CONCAT71(uVar26,1);
          FUN_00d50b00();
        }
joined_r0x0139d820:
        if (local_108 == '\0') {
LAB_0139d830:
          if (*(int64_t **)(arg1 + 0x118) != local_38) goto LAB_0139d7ac;
        }
        else {
          if (local_110 != (int64_t *)0x0) {
            FUN_00d50b20();
            goto LAB_0139d797;
          }
          if (*(int64_t **)(arg1 + 0x118) != local_38) goto LAB_0139d7ac;
        }
      }
      else {
        if (local_108 == '\0') {
          if (local_110 != (int64_t *)0x0) {
            uVar14 = FUN_00d50b00();
          }
          local_3c = (uint)CONCAT71((int7)((uint64_t)uVar14 >> 8),1);
          if (cVar37 == '\0') {
            local_38 = local_110;
          }
          else {
            bVar42 = local_38 != (int64_t *)0x0;
            local_38 = local_110;
            if (bVar42) {
              FUN_00d50b20();
              local_38 = local_110;
              goto joined_r0x0139d820;
            }
          }
          goto LAB_0139d830;
        }
        local_3c = (uint)CONCAT71(uVar26,1);
        if ((cVar37 == '\0') || (local_38 == (int64_t *)0x0)) {
          local_38 = local_110;
          if (*(int64_t **)(arg1 + 0x118) == local_110) goto LAB_0139d5e7;
        }
        else {
          FUN_00d50b20();
          local_38 = local_110;
LAB_0139d797:
          if (*(int64_t **)(arg1 + 0x118) == local_38) goto LAB_0139d5e7;
        }
LAB_0139d7ac:
        if ((*(int64_t **)(arg1 + 0x128) != local_38) &&
           (*(int64_t **)(arg1 + 0x120) != local_38)) {
          pvVar16 = _pthread_getspecific((void*)local_38);
          if (pvVar16 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014c2a40();
          if (local_110 == local_120) {
            plVar38 = local_120;
            if ((cVar36 == '\0') && (local_110 != (int64_t *)0x0)) {
              cVar33 = '\x01';
              cVar36 = '\x01';
              if (local_108 != '\0') goto LAB_0139d97b;
              cVar33 = '\x01';
              cVar36 = '\x01';
              FUN_00d50b00();
            }
LAB_0139d961:
            if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            plVar38 = local_110;
            if (local_108 == '\0') {
              if (local_110 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              cVar33 = '\x01';
              cVar37 = '\x01';
              bVar42 = cVar36 != '\0';
              cVar36 = cVar37;
              if ((bVar42) && (local_120 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_0139d961;
            }
            cVar33 = '\x01';
            cVar37 = '\x01';
            bVar42 = cVar36 != '\0';
            cVar36 = cVar37;
            if ((bVar42) && (local_120 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
LAB_0139d97b:
          local_120 = plVar38;
          if (0 < *(int *)((int64_t)plVar38 + 0xc)) {
            local_a8[0] = cVar33;
            lVar15 = 0;
            do {
              plVar30 = *(int64_t **)(plVar38[2] + lVar15 * 8);
              if (local_118 == plVar30) {
                if ((!bVar8) && (local_118 != (int64_t *)0x0)) {
                  bVar8 = true;
                  FUN_00d50b00();
                }
              }
              else {
                if (plVar30 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
                if ((bVar8) && (local_118 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                  bVar8 = true;
                  local_118 = plVar30;
                }
                else {
                  bVar8 = true;
                  local_118 = plVar30;
                }
              }
              if (*(int *)((int64_t)local_118 + 0xc) < *(int *)((int64_t)puVar13 + 0xc)) {
                local_110 = local_38;
                local_108 = '\0';
                FUN_00d21140();
              }
              lVar15 = lVar15 + 1;
              cVar36 = cVar33;
            } while (lVar15 < *(int *)((int64_t)plVar38 + 0xc));
          }
        }
      }
LAB_0139d5e7:
      puVar41 = (void*)((int64_t)puVar41 + 1);
      lVar15 = *(int64_t *)(arg1 + 0x40);
      param_1 = (int64_t *)(int64_t)*(int *)(lVar15 + 0xc);
    } while ((int64_t)puVar41 < (int64_t)param_1);
  }
  plVar38 = local_110;
  FUN_00c8e690();
  if ((local_108 == '\0') && (local_110 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  if (0 < (int)local_110[3]) {
    _memset(param_1,(int)local_110[3],(size_t)param_3);
  }
  pVar27 = (void*)param_1;
  lVar15 = *(int64_t *)(arg1 + 0x1f0);
  if (lVar15 != 0) {
    FUN_00d50b00();
  }
  if (*(int *)(lVar15 + 0xc) != 0) {
    ___bzero();
    plVar30 = *(int64_t **)(arg1 + 0x38);
    if (plVar30 == (int64_t *)0x0) {
      auVar7._8_8_ = 0;
      auVar7._0_8_ = local_a8._8_8_;
      local_a8 = auVar7 << 0x40;
    }
    else {
      pvVar16 = _pthread_getspecific(pVar27);
      if (pvVar16 != (void *)0x0) {
        plVar30 = *(int64_t **)(arg1 + 0x38);
        lVar17 = FUN_00e8b990();
        if (lVar17 != 0) {
          plVar30 = (int64_t *)plVar30[(uint64_t)(*(uint *)(lVar17 + 0x154) & 1) + 4];
        }
      }
      local_a8._0_8_ = (**(code **)(*plVar30 + 0x370))();
    }
    local_108 = '\0';
    local_110 = (int64_t *)0x0;
    local_f8 = -1;
    puVar41 = &g_02802558;
    while( true ) {
      lVar17 = (int64_t)local_f8;
      local_f8 = local_f8 + 1;
      if (*(int *)(lVar15 + 0xc) <= local_f8) break;
      pvVar16 = *(void **)(lVar15 + 0x10);
      local_110 = *(int64_t **)((int64_t)pvVar16 + lVar17 * 8 + 8);
      pvVar18 = _pthread_getspecific((void*)pvVar16);
      if (pvVar18 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar5 = (double)FUN_011f2ec0();
      iVar34 = FUN_00e7d850(SUB84(dVar5 * (double)local_a8._0_8_,0));
      lVar17 = *(int64_t *)(arg1 + 0x1a0);
      if (lVar17 == 0) {
        FUN_0132d640();
        lVar17 = *(int64_t *)(arg1 + 0x1a0);
      }
      if (lVar17 != 0) {
        FUN_00d50b00();
      }
      iVar34 = (int)((double)iVar34 / (double)*(int *)(lVar17 + 0x30) + g_023942d0);
      if (iVar34 < 0) {
        iVar34 = 0;
      }
      iVar10 = *(int *)(arg1 + 0x88);
      FUN_00d50b20();
      if (iVar10 <= iVar34) {
        iVar34 = iVar10 + -1;
      }
      pvVar18 = _pthread_getspecific((void*)pvVar16);
      if (pvVar18 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar5 = (double)FUN_011f2ed0();
      iVar10 = FUN_00e7d850(SUB84(dVar5 * (double)local_a8._0_8_,0));
      lVar17 = *(int64_t *)(arg1 + 0x1a0);
      if (lVar17 == 0) {
        FUN_0132d640();
        lVar17 = *(int64_t *)(arg1 + 0x1a0);
      }
      if (lVar17 != 0) {
        FUN_00d50b00();
      }
      iVar10 = (int)((double)iVar10 / (double)*(int *)(lVar17 + 0x30) + g_023942d0);
      if (iVar10 < 0) {
        iVar10 = 0;
      }
      iVar40 = *(int *)(arg1 + 0x88);
      FUN_00d50b20();
      if (iVar10 < iVar40) {
        if (iVar34 < 0) goto LAB_0139deb5;
LAB_0139de8d:
        iVar40 = *(int *)(arg1 + 0x88);
        if (iVar40 <= iVar10) goto LAB_0139de9c;
LAB_0139dec7:
        iVar35 = iVar10 - iVar34;
        if (iVar34 <= iVar10) {
LAB_0139ded0:
          _memset(pvVar16,iVar35 + 1,(size_t)param_3);
        }
      }
      else {
        iVar10 = iVar40 + -1;
        if (-1 < iVar34) goto LAB_0139de8d;
LAB_0139deb5:
        iVar34 = 0;
        iVar40 = *(int *)(arg1 + 0x88);
        if (iVar10 < iVar40) goto LAB_0139dec7;
LAB_0139de9c:
        iVar35 = (iVar40 + -1) - iVar34;
        if (iVar34 <= iVar40 + -1) goto LAB_0139ded0;
      }
    }
    FUN_014813e0();
  }
  pcVar9 = g_025e74b8;
  if (*(int *)(arg1 + 0x88) < 1) {
    bVar42 = false;
    local_90 = (int64_t *)0x0;
    plVar30 = (int64_t *)((uint64_t)local_50 & 0xffffffff);
    local_b8 = (int64_t *)0x0;
    local_48 = (int64_t *)0x0;
    local_d0 = 0;
    local_58 = (int64_t *)0x0;
    local_68._0_1_ = '\0';
    local_c8 = 0;
    local_64 = 0;
    local_d8 = 0;
    local_70 = (int64_t *)0x0;
    local_88 = (int64_t *)0x0;
  }
  else {
    dVar5 = g_023908d0 / dVar45;
    dVar45 = g_023934c8 / dVar45;
    local_164 = g_0241b650;
    local_a8[0] = (char)local_3c;
    local_80 = (int64_t *)0x0;
    local_d8 = 0;
    local_64 = 0;
    local_c8 = 0;
    local_68 = 0;
    local_b0 = (int64_t *)0x0;
    local_d0 = 0;
    local_c0 = (int64_t *)0x0;
    local_b8 = (int64_t *)0x0;
    local_90 = (int64_t *)0x0;
    bVar42 = false;
    uVar22 = 0;
    plVar23 = (int64_t *)0x0;
    do {
      local_70 = plVar23;
      lVar17 = puVar13[2];
      local_128._0_4_ = (uint)uVar22;
      uVar39 = (uint64_t)(int)(uint)local_128;
      plVar30 = *(int64_t **)(lVar17 + uVar39 * 8);
      if (local_130 == plVar30) {
        if (((char)local_138 == '\0') && (local_130 != (int64_t *)0x0)) {
          local_138 = CONCAT71((int7)((uint64_t)lVar17 >> 8),1);
          puVar41 = (void*)0x0;
          FUN_00d50b00();
        }
      }
      else {
        if (plVar30 != (int64_t *)0x0) {
          puVar41 = (void*)(local_138 & 0xffffffff);
          lVar17 = FUN_00d50b00();
        }
        if (((char)local_138 == '\0') || (local_130 == (int64_t *)0x0)) {
          local_138 = CONCAT71((int7)((uint64_t)lVar17 >> 8),1);
          local_130 = plVar30;
        }
        else {
          puVar41 = (void*)(local_138 & 0xffffffff);
          uVar14 = FUN_00d50b20();
          local_138 = CONCAT71((int7)((uint64_t)uVar14 >> 8),1);
          local_130 = plVar30;
        }
      }
      local_88 = local_80;
      if (*(char *)(plVar38[2] + uVar39) == '\0') {
LAB_0139e020:
        plVar30 = (int64_t *)((uint64_t)local_50 & 0xffffffff);
        local_3c = (uint)CONCAT71((int7)((uint64_t)local_50 >> 8),local_a8[0]);
        local_48 = local_c0;
        local_58 = local_b0;
        uVar28 = (uint)local_128;
      }
      else {
        if (0 < *(int *)((int64_t)local_130 + 0xc)) {
          puVar41 = (void*)0x0;
          do {
            plVar30 = *(int64_t **)(local_130[2] + (int64_t)puVar41 * 8);
            plVar23 = local_130;
            if (local_38 == plVar30) {
              if ((local_a8[0] == '\0') && (local_38 != (int64_t *)0x0)) {
                local_a8[0] = 1;
                FUN_00d50b00();
              }
            }
            else {
              if (plVar30 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              if ((local_a8[0] == '\0') || (local_38 == (int64_t *)0x0)) {
                local_a8[0] = 1;
                local_38 = plVar30;
              }
              else {
                FUN_00d50b20();
                local_a8[0] = 1;
                local_38 = plVar30;
              }
            }
            pVar27 = (void*)plVar23;
            pvVar16 = _pthread_getspecific(pVar27);
            if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
              pVar27 = (void*)local_38;
            }
            iVar34 = FUN_014c2f20();
            if (iVar34 <= (int)(uint)local_128) goto LAB_0139e020;
            pvVar16 = _pthread_getspecific(pVar27);
            if (pvVar16 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_014bc340();
            if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (local_110 != (int64_t *)0x0) goto LAB_0139e020;
            puVar41 = (void*)((int64_t)puVar41 + 1);
          } while ((int64_t)puVar41 < (int64_t)*(int *)((int64_t)local_130 + 0xc));
        }
        cVar33 = (char)local_70;
        if ((uint)local_128 == 0) {
          if ((local_80 == (int64_t *)0x0) || (local_70 = (int64_t *)0x0, cVar33 == '\0')) {
            local_88 = (int64_t *)0x0;
          }
          else {
            local_88 = (int64_t *)0x0;
            FUN_00d50b20();
            local_70 = (int64_t *)0x0;
          }
        }
        else {
          plVar30 = *(int64_t **)(puVar13[2] + -8 + (int64_t)(int)(uint)local_128 * 8);
          if (local_80 == plVar30) {
            if (cVar33 == '\0') {
              if (local_80 == (int64_t *)0x0) {
              }
              else {
                local_70 = (int64_t *)CONCAT71((int7)((uint64_t)plVar30 >> 8),1);
                FUN_00d50b00();
              }
            }
          }
          else {
            uVar14 = 0;
            if (plVar30 != (int64_t *)0x0) {
              uVar14 = FUN_00d50b00(plVar30);
            }
            local_70 = (int64_t *)CONCAT71((int7)((uint64_t)uVar14 >> 8),1);
            local_88 = plVar30;
            if ((cVar33 != '\0') && (local_80 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        if (local_c8 != 0) {
          if ((char)local_68 == '\0') {
            local_68 = 0;
          }
          else {
            local_68 = 0;
            FUN_00d50b20();
          }
        }
        uVar32 = *(uint *)(arg1 + 0x88);
        if ((int)(uint)local_128 < (int)uVar32) {
          puVar41 = (void*)(uint64_t)local_64;
          do {
            local_64 = (uint)puVar41;
            if (*(char *)(plVar38[2] + uVar39) == '\0') {
              local_c8 = 0;
LAB_0139e567:
              uVar32 = (uint)uVar39;
              goto LAB_0139e56e;
            }
            lVar17 = puVar13[2];
            lVar20 = *(int64_t *)(lVar17 + uVar39 * 8);
            if (local_d8 == lVar20) {
              if (((char)puVar41 == '\0') && (local_d8 != 0)) {
                local_64 = (uint)CONCAT71((int7)((uint64_t)lVar17 >> 8),1);
                puVar41 = (void*)0x0;
                FUN_00d50b00();
                lVar20 = local_d8;
                goto LAB_0139e490;
              }
              iVar34 = *(int *)(local_d8 + 0xc);
            }
            else {
              if (lVar20 != 0) {
                lVar17 = FUN_00d50b00();
              }
              local_64 = (uint)CONCAT71((int7)((uint64_t)lVar17 >> 8),1);
              if (((char)puVar41 != '\0') && (local_d8 != 0)) {
                FUN_00d50b20();
              }
LAB_0139e490:
              iVar34 = *(int *)(lVar20 + 0xc);
              local_d8 = lVar20;
            }
            if (iVar34 != 0) {
              local_c8 = local_d8;
              if ((char)local_64 == '\0') {
                local_68 = 0;
                local_64 = 0;
              }
              else {
                FUN_00d50b00();
                local_68 = local_64;
              }
              goto LAB_0139e567;
            }
            uVar39 = uVar39 + 1;
            puVar41 = (void*)(uint64_t)local_64;
            uVar22 = uVar39;
          } while ((int64_t)uVar39 < (int64_t)*(int *)(arg1 + 0x88));
        }
        local_c8 = 0;
        uVar39 = uVar22;
LAB_0139e56e:
        plVar30 = (int64_t *)(uint64_t)(*(int *)(arg1 + 0x88) - 1);
        if ((int)uVar39 < *(int *)(arg1 + 0x88)) {
          plVar30 = (int64_t *)(uVar39 & 0xffffffff);
        }
        uVar28 = (uint)plVar30;
        plVar23 = local_b8;
        if (local_c0 != (int64_t *)0x0) {
          if ((char)local_b8 == '\0') {
            plVar23 = (int64_t *)0x0;
          }
          else {
            FUN_00d50b20();
            plVar23 = (int64_t *)0x0;
          }
        }
        uVar26 = (undefined7)((uint64_t)puVar41 >> 8);
        if (local_b0 == (int64_t *)0x0) {
          uVar22 = local_d0 & 0xffffffff;
          if (local_88 != (int64_t *)0x0) goto LAB_0139e62c;
joined_r0x0139e681:
          local_58 = (int64_t *)0x0;
          local_d0 = uVar22;
          if (local_c8 == 0) goto LAB_0139e780;
LAB_0139e6c0:
          if (*(int *)(local_c8 + 0xc) == 0) goto LAB_0139e780;
          local_48 = (int64_t *)**(void**)(local_c8 + 0x10);
          if (local_48 == (int64_t *)0x0) goto LAB_0139e780;
          local_b8 = (int64_t *)
                     CONCAT71((int7)((uint64_t)*(void**)(local_c8 + 0x10) >> 8),1);
          FUN_00d50b00();
          if (local_58 != (int64_t *)0x0) goto LAB_0139e6f9;
LAB_0139e79a:
          local_3c = (uint)CONCAT71(uVar26,local_a8[0]);
          if (local_48 != (int64_t *)0x0) {
            pvVar16 = _pthread_getspecific((void*)plVar30);
            plVar19 = local_48;
            if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
              plVar19 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar17 + 0x154) & 1) + 4];
            }
            plVar30 = local_70;
            local_164 = (**(code **)(*plVar19 + 0x3e0))();
            local_3c = (uint)CONCAT71(uVar26,local_a8[0]);
          }
          iVar34 = uVar32 - (uint)local_128;
joined_r0x0139ea27:
          cVar33 = (char)local_3c;
          if (((local_48 != (int64_t *)0x0) && (local_58 == (int64_t *)0x0)) &&
             (iVar34 < (int)dVar45)) {
            if (local_38 == local_48) {
              plVar19 = local_38;
              if (((char)local_b8 != '\0') && (cVar33 == '\0')) {
                local_3c = (uint)CONCAT71((int7)(uVar22 >> 8),1);
                FUN_00d50b00();
                plVar23 = local_38;
              }
            }
            else {
              if ((char)local_b8 != '\0') {
                FUN_00d50b00();
              }
              local_3c = (uint)local_b8;
              plVar19 = local_48;
              if ((local_a8[0] != '\0') && (local_38 != (int64_t *)0x0)) {
                FUN_00d50b20();
                plVar23 = local_48;
              }
            }
            uVar29 = uVar32 - 1;
            plVar30 = (int64_t *)(uint64_t)uVar29;
            uVar32 = (uint)local_128 - 1;
            iVar34 = -1;
            local_38 = plVar19;
            local_128._0_4_ = uVar29;
            goto LAB_0139ed9e;
          }
          plVar23 = (int64_t *)FUN_00e8fc40();
          FUN_010fe5f0();
          uVar14 = (**(code **)(*plVar23 + 0x18))();
          uVar26 = (undefined7)((uint64_t)uVar14 >> 8);
          if (plVar23 == local_38) {
            plVar23 = local_38;
            if (cVar33 == '\0') {
              local_3c = (uint)CONCAT71(uVar26,1);
            }
            else {
              FUN_00d50b20();
            }
          }
          else {
            local_3c = (uint)CONCAT71(uVar26,1);
            if ((cVar33 != '\0') && (local_38 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          local_38 = plVar23;
          pvVar16 = _pthread_getspecific((void*)plVar30);
          if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
            plVar30 = local_38;
          }
          FUN_014bc030();
          pvVar16 = _pthread_getspecific((void*)plVar30);
          if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
            plVar30 = local_38;
          }
          FUN_014bc170(g_02390d34);
          iVar34 = 1;
          bVar6 = true;
          if ((uint)local_128 != uVar32) goto LAB_0139efa1;
        }
        else {
          if ((char)local_d0 != '\0') {
            FUN_00d50b20();
          }
          uVar22 = (uint64_t)plVar23 & 0xffffffff;
          if (local_88 == (int64_t *)0x0) goto joined_r0x0139e681;
LAB_0139e62c:
          if (*(int *)((int64_t)local_88 + 0xc) == 0) goto joined_r0x0139e681;
          local_58 = *(int64_t **)local_88[2];
          if (local_58 == (int64_t *)0x0) goto joined_r0x0139e681;
          local_d0 = CONCAT71((int7)((uint64_t)local_88[2] >> 8),1);
          FUN_00d50b00();
          if (local_c8 != 0) goto LAB_0139e6c0;
LAB_0139e780:
          local_48 = (int64_t *)0x0;
          local_b8 = plVar23;
          if (local_58 == (int64_t *)0x0) goto LAB_0139e79a;
LAB_0139e6f9:
          pvVar16 = _pthread_getspecific((void*)local_48);
          uVar31 = (undefined7)(uVar22 >> 8);
          plVar19 = local_58;
          if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
            plVar19 = (int64_t *)local_58[(uint64_t)(*(uint *)(lVar17 + 0x154) & 1) + 4];
          }
          uVar22 = CONCAT71(uVar31,local_a8[0]);
          plVar30 = local_70;
          local_164 = (**(code **)(*plVar19 + 0x3e0))();
          iVar34 = uVar32 - (uint)local_128;
          if ((int)dVar5 <= iVar34) {
            local_3c = (uint)CONCAT71(uVar26,local_a8[0]);
            goto joined_r0x0139ea27;
          }
          if (local_38 == local_58) {
            plVar19 = local_38;
            if (((char)local_d0 == '\0') || (local_a8[0] != '\0')) {
              plVar30 = (int64_t *)CONCAT71(uVar31,local_a8[0]);
            }
            else {
              plVar30 = (int64_t *)CONCAT71(uVar31,1);
              FUN_00d50b00();
              plVar23 = local_38;
            }
          }
          else {
            if ((char)local_d0 != '\0') {
              FUN_00d50b00();
            }
            plVar30 = (int64_t *)(local_d0 & 0xffffffff);
            plVar19 = local_58;
            if ((local_a8[0] != '\0') &&
               (plVar30 = (int64_t *)(local_d0 & 0xffffffff), local_38 != (int64_t *)0x0)) {
              FUN_00d50b20();
              plVar30 = (int64_t *)(local_d0 & 0xffffffff);
              plVar23 = local_58;
            }
          }
          if ((int)*(uint *)(arg1 + 0x88) < (int)uVar32) {
            uVar32 = *(uint *)(arg1 + 0x88);
          }
          iVar34 = 1;
          local_3c = (uint)plVar30;
          local_38 = plVar19;
LAB_0139ed9e:
          pvVar16 = _pthread_getspecific((void*)plVar30);
          if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
            plVar30 = local_38;
          }
          FUN_014d1d00();
          uVar26 = (undefined7)((uint64_t)plVar23 >> 8);
          if (local_110 == local_60) {
            plVar23 = local_60;
            if (((char)local_50 == '\0') && (local_110 != (int64_t *)0x0)) {
              uVar22 = CONCAT71(uVar26,1);
              if (local_108 != '\0') goto LAB_0139ee94;
              uVar22 = CONCAT71(uVar26,1);
              FUN_00d50b00();
            }
            else {
              uVar22 = (uint64_t)local_50 & 0xffffffff;
            }
LAB_0139ee7a:
            if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            plVar23 = local_110;
            if (local_108 == '\0') {
              if (local_110 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              uVar22 = CONCAT71(uVar26,1);
              if (((char)local_50 != '\0') && (local_60 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_0139ee7a;
            }
            uVar22 = CONCAT71(uVar26,1);
            if (((char)local_50 != '\0') && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
LAB_0139ee94:
          bVar6 = false;
          local_50 = (int64_t *)(uVar22 & 0xffffffff);
          local_60 = plVar23;
          if ((uint)local_128 != uVar32) {
LAB_0139efa1:
            do {
              plVar23 = *(int64_t **)(arg1 + 0x38);
              pVar27 = (void*)plVar30;
              pvVar16 = _pthread_getspecific(pVar27);
              if (pvVar16 != (void *)0x0) {
                plVar23 = *(int64_t **)(arg1 + 0x38);
                lVar17 = FUN_00e8b990();
                if (lVar17 != 0) {
                  plVar23 = (int64_t *)plVar23[(uint64_t)(*(uint *)(lVar17 + 0x154) & 1) + 4];
                }
              }
              plVar30 = *(int64_t **)(arg1 + 0x38);
              pvVar16 = _pthread_getspecific(pVar27);
              if (pvVar16 != (void *)0x0) {
                plVar30 = *(int64_t **)(arg1 + 0x38);
                lVar17 = FUN_00e8b990();
                if (lVar17 != 0) {
                  plVar30 = (int64_t *)plVar30[(uint64_t)(*(uint *)(lVar17 + 0x154) & 1) + 4];
                }
              }
              uVar43 = (**(code **)(*plVar30 + 0x3a0))();
              (**(code **)(*plVar23 + 0x388))
                        (0,(int)g_0238fee8,uVar43,
                         (int64_t)(int)(uVar1 * (uint)local_128 - (int)uVar1 / 2));
              fVar47 = g_023d59b4;
              if (0 < (int)uVar1) {
                if ((uint64_t)uVar1 - 1 < 3) {
                  uVar22 = 0;
                }
                else {
                  uVar22 = 0;
                  do {
                    fVar46 = (float)(*(uint *)(lVar12 + uVar22 * 4) & g_02390140);
                    if (fVar46 <= fVar47) {
                      fVar46 = fVar47;
                    }
                    fVar47 = (float)(*(uint *)(lVar12 + 4 + uVar22 * 4) & g_02390140);
                    if (fVar47 <= fVar46) {
                      fVar47 = fVar46;
                    }
                    fVar46 = (float)(*(uint *)(lVar12 + 8 + uVar22 * 4) & g_02390140);
                    if (fVar46 <= fVar47) {
                      fVar46 = fVar47;
                    }
                    fVar47 = (float)(*(uint *)(lVar12 + 0xc + uVar22 * 4) & g_02390140);
                    if (fVar47 <= fVar46) {
                      fVar47 = fVar46;
                    }
                    uVar22 = uVar22 + 4;
                  } while ((uVar1 & 0xfffffffc) != uVar22);
                }
                if ((uint64_t)(uVar1 & 3) != 0) {
                  uVar39 = 0;
                  do {
                    fVar46 = (float)(*(uint *)(lVar12 + uVar22 * 4 + uVar39 * 4) & g_02390140);
                    if (fVar46 <= fVar47) {
                      fVar46 = fVar47;
                    }
                    fVar47 = fVar46;
                    uVar39 = uVar39 + 1;
                  } while ((uVar1 & 3) != uVar39);
                }
              }
              local_a8 = ZEXT416((uint)fVar47);
              plVar23 = (int64_t *)FUN_00e8fc40();
              FUN_00d4ff40();
              *plVar23 = (int64_t)&g_025e74a0;
              *(void*)((int64_t)plVar23 + 0xc) = 0;
              *(void*)((int64_t)plVar23 + 0x14) = 0;
              *(void*)((int64_t)plVar23 + 0x1c) = 0;
              *(void*)((int64_t)plVar23 + 0x24) = 0;
              *(void*)((int64_t)plVar23 + 0x2c) = 0;
              plVar23[6] = 0;
              plVar23[7] = 0;
              plVar23[8] = 0;
              plVar23[9] = 0;
              plVar23[10] = 0;
              plVar23[0xb] = 0;
              *(void*)(plVar23 + 0xc) = 0;
              (*pcVar9)();
              if (plVar23 == local_118) {
                plVar23 = local_118;
                if (bVar8) {
                  FUN_00d50b20();
                  bVar3 = bVar8;
                }
                else {
                  bVar3 = true;
                }
              }
              else {
                bVar3 = true;
                if ((bVar8) && (local_118 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              bVar8 = bVar3;
              *(uint *)((int64_t)plVar23 + 0xc) = (uint)local_128;
              *(void*)(plVar23 + 2) = 0x350637bd;
              *(void*)((int64_t)plVar23 + 0x14) = local_164;
              *(void*)(plVar23 + 3) = local_164;
              *(void*)((int64_t)plVar23 + 0x1c) = 0x38d1b717350637bd;
              *(void*)((int64_t)plVar23 + 0x24) = 0x38d1b717;
              *(float *)(plVar23 + 5) = fVar47 * local_19c;
              *(void*)((int64_t)plVar23 + 0x2c) = 1;
              plVar30 = plVar23;
              pvVar16 = _pthread_getspecific((void*)plVar23);
              if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
                plVar30 = local_38;
              }
              FUN_014c2e20();
              local_128._0_4_ = (uint)local_128 + iVar34;
              local_118 = plVar23;
            } while (uVar32 != (uint)local_128);
          }
        }
        plVar23 = *(int64_t **)(arg1 + 0x38);
        pvVar16 = _pthread_getspecific((void*)plVar30);
        if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
          plVar23 = (int64_t *)plVar23[(uint64_t)(*(uint *)(lVar17 + 0x154) & 1) + 4];
        }
        lVar17 = (**(code **)(*plVar23 + 0x378))();
        pVar27 = (void*)plVar30;
        if (local_38 == local_58) {
          pvVar16 = _pthread_getspecific(pVar27);
          plVar23 = local_58;
          if ((pvVar16 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
            plVar30 = local_58;
            plVar23 = (int64_t *)local_58[(uint64_t)(*(uint *)(lVar20 + 0x154) & 1) + 4];
          }
          lVar20 = (**(code **)(*plVar23 + 0x380))();
          if (local_48 == (int64_t *)0x0) {
            plVar30 = (int64_t *)plVar38[2];
            if (*(char *)((int64_t)plVar30 + (int64_t)(int)uVar28) == '\0') {
              lVar17 = FUN_0134c2c0();
            }
          }
          else {
            pvVar16 = _pthread_getspecific((void*)plVar30);
            plVar23 = local_48;
            if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
              plVar30 = local_48;
              plVar23 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar17 + 0x154) & 1) + 4];
            }
            lVar17 = (**(code **)(*plVar23 + 0x380))();
          }
        }
        else if (local_38 == local_48) {
          pvVar16 = _pthread_getspecific(pVar27);
          if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
            plVar30 = local_48;
          }
          FUN_014c2f20();
          lVar20 = FUN_0134c2c0();
          pvVar16 = _pthread_getspecific((void*)plVar30);
          if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
            plVar30 = local_48;
          }
          lVar17 = FUN_014bb590();
        }
        else {
          if (local_58 == (int64_t *)0x0) {
            lVar20 = 0;
          }
          else {
            pvVar16 = _pthread_getspecific(pVar27);
            if ((pvVar16 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
              plVar30 = local_58;
            }
            lVar20 = FUN_014bb590();
          }
          if (local_48 != (int64_t *)0x0) {
            pvVar16 = _pthread_getspecific((void*)plVar30);
            plVar23 = local_48;
            if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
              plVar30 = local_48;
              plVar23 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar17 + 0x154) & 1) + 4];
            }
            lVar17 = (**(code **)(*plVar23 + 0x380))();
          }
        }
        pvVar16 = _pthread_getspecific((void*)plVar30);
        plVar23 = local_38;
        if ((pvVar16 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
          plVar30 = local_38;
          plVar23 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4];
        }
        pVar27 = (void*)plVar30;
        uVar14 = (**(code **)(*plVar23 + 0x380))();
        local_a8._0_8_ = uVar14;
        pvVar16 = _pthread_getspecific(pVar27);
        plVar30 = local_38;
        if ((pvVar16 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
          plVar30 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4];
        }
        plVar23 = local_50;
        iVar34 = (**(code **)(*plVar30 + 0x388))();
        pvVar16 = _pthread_getspecific((void*)plVar23);
        if ((pvVar16 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
          plVar23 = local_38;
        }
        FUN_014bb250();
        pvVar16 = _pthread_getspecific((void*)plVar23);
        if ((pvVar16 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
          plVar23 = local_38;
        }
        puVar41 = (void*)(lVar17 - lVar20);
        FUN_014bb2b0();
        pvVar16 = _pthread_getspecific((void*)plVar23);
        if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
          plVar23 = local_38;
        }
        FUN_00d50b00();
        FUN_014ce440();
        if (arg1 != 0) {
          FUN_00d50b20();
        }
        pvVar16 = _pthread_getspecific((void*)plVar23);
        if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
          plVar23 = local_38;
        }
        FUN_00d50b00();
        FUN_014ceed0();
        if (arg1 != 0) {
          FUN_00d50b20();
        }
        pvVar16 = _pthread_getspecific((void*)plVar23);
        if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
          plVar23 = local_38;
        }
        FUN_00d50b00();
        FUN_014cfcc0();
        if (arg1 != 0) {
          FUN_00d50b20();
        }
        pvVar16 = _pthread_getspecific((void*)plVar23);
        plVar30 = plVar23;
        if (pvVar16 == (void *)0x0) {
LAB_0139f8c6:
          pVar27 = (void*)plVar30;
          plVar19 = *(int64_t **)(arg1 + 0x38);
          plVar23 = plVar30;
          if (plVar19 != (int64_t *)0x0) goto LAB_0139f8d3;
LAB_0139f93e:
          uVar43 = 0;
        }
        else {
          lVar17 = FUN_00e8b990();
          pVar27 = (void*)plVar23;
          plVar30 = local_38;
          if (lVar17 != 0) goto LAB_0139f8c6;
          plVar19 = *(int64_t **)(arg1 + 0x38);
          if (plVar19 == (int64_t *)0x0) goto LAB_0139f93e;
LAB_0139f8d3:
          pvVar16 = _pthread_getspecific(pVar27);
          if (pvVar16 != (void *)0x0) {
            plVar19 = *(int64_t **)(arg1 + 0x38);
            lVar17 = FUN_00e8b990();
            if (lVar17 != 0) {
              plVar19 = (int64_t *)plVar19[(uint64_t)(*(uint *)(lVar17 + 0x154) & 1) + 4];
            }
          }
          plVar23 = local_50;
          uVar43 = (**(code **)(*plVar19 + 0x370))();
        }
        plVar30 = (int64_t *)((uint64_t)local_50 & 0xffffffff);
        FUN_014bd640(uVar43);
        if (bVar6) {
          if (local_58 != (int64_t *)0x0) {
            pvVar16 = _pthread_getspecific((void*)plVar23);
            if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
              plVar23 = local_58;
            }
            FUN_014bc360();
            pvVar16 = _pthread_getspecific((void*)plVar23);
            if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
              plVar23 = local_38;
            }
            FUN_014bc2e0();
            pvVar16 = _pthread_getspecific((void*)plVar23);
            plVar30 = local_38;
            if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
              plVar23 = local_38;
              plVar30 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar17 + 0x154) & 1) + 4];
            }
            pvVar16 = _pthread_getspecific((void*)plVar23);
            if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
              plVar23 = local_58;
            }
            FUN_014bc000();
            if (local_108 == '\0') {
              if (local_110 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_108 = '\0';
            }
            FUN_014bbe30();
            if (local_110 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          pVar27 = (void*)plVar23;
          if (local_48 != (int64_t *)0x0) {
            pvVar16 = _pthread_getspecific(pVar27);
            if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
              plVar23 = local_38;
            }
            plVar30 = (int64_t *)((uint64_t)local_50 & 0xffffffff);
            iVar34 = FUN_014c2f20();
            pVar27 = (void*)plVar23;
            if (iVar34 == 0) {
              pvVar16 = _pthread_getspecific(pVar27);
              if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
                plVar23 = local_38;
              }
              FUN_014bc360();
              pvVar16 = _pthread_getspecific((void*)plVar23);
              if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
                plVar23 = local_48;
              }
              FUN_014bc2e0();
              pvVar16 = _pthread_getspecific((void*)plVar23);
              plVar30 = local_38;
              if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
                plVar23 = local_38;
                plVar30 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar17 + 0x154) & 1) + 4];
              }
              pVar27 = (void*)plVar23;
              pvVar16 = _pthread_getspecific(pVar27);
              if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
                pVar27 = (void*)local_48;
              }
              FUN_014bc000();
              if (local_108 == '\0') {
                if (local_110 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_108 = '\0';
              }
              FUN_014bbe30();
              if (local_110 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          plVar23 = (int64_t *)FUN_00e8fc40();
          FUN_007eeec0();
          (**(code **)(*plVar23 + 0x18))();
          if (plVar23 == local_60) {
            plVar23 = local_60;
            if ((char)local_50 == '\0') {
              plVar30 = (int64_t *)CONCAT71((int7)((uint64_t)local_50 >> 8),1);
            }
            else {
              FUN_00d50b20();
              plVar30 = local_50;
            }
          }
          else {
            plVar30 = (int64_t *)CONCAT71((int7)((uint64_t)plVar30 >> 8),1);
            if (((char)local_50 != '\0') && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          local_60 = plVar23;
          plVar23 = (int64_t *)FUN_00115860();
          (**(code **)(*plVar23 + 0x18))();
          if (local_90 == plVar23) {
            if ((!bVar42) && (plVar23 = local_90, local_90 != (int64_t *)0x0)) goto LAB_013a049f;
            if (local_90 == (int64_t *)0x0) {
              local_90 = (int64_t *)0x0;
            }
            else {
              FUN_00d50b20();
            }
          }
          else {
            if ((bVar42) && (local_90 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_013a049f:
            local_90 = plVar23;
            bVar42 = true;
          }
          pvVar16 = _pthread_getspecific(pVar27);
          if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
            pVar27 = (void*)local_90;
          }
          FUN_013dd650();
          pvVar16 = _pthread_getspecific(pVar27);
          if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
            pVar27 = (void*)local_38;
          }
          FUN_014bc440();
          pvVar16 = _pthread_getspecific(pVar27);
          if (pvVar16 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013dfbc0();
          FUN_01327c60();
          FUN_01328c70();
          local_110 = local_60;
          local_108 = '\0';
          FUN_00d21140();
        }
        else {
          pvVar16 = _pthread_getspecific((void*)plVar23);
          plVar30 = local_38;
          if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
            plVar23 = local_38;
            plVar30 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar17 + 0x154) & 1) + 4];
          }
          puVar41 = (void*)(**(code **)(*plVar30 + 0x380))();
          pvVar16 = _pthread_getspecific((void*)plVar23);
          plVar30 = local_38;
          if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
            plVar23 = local_38;
            plVar30 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar17 + 0x154) & 1) + 4];
          }
          iVar10 = (**(code **)(*plVar30 + 0x388))();
          pvVar16 = _pthread_getspecific((void*)plVar23);
          if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
            plVar23 = local_60;
          }
          FUN_013dfcb0();
          pvVar16 = _pthread_getspecific((void*)plVar23);
          if (pvVar16 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013dd7c0();
          if (local_110 == (int64_t *)0x0) {
            bVar6 = true;
            plVar30 = (int64_t *)0x0;
          }
          else {
            plVar30 = local_110;
            if (local_108 == '\0') {
              FUN_00d50b00();
              bVar6 = false;
            }
            else {
              local_108 = '\0';
              bVar6 = false;
            }
          }
          if ((local_170 != '\0') && (local_178 != 0)) {
            FUN_00d50b20();
          }
          uVar22 = (uint64_t)(int)*(uint *)((int64_t)plVar30 + 0xc);
          if (0 < (int64_t)uVar22) {
            local_a8._0_4_ = (uint32_t)uVar14;
            iVar40 = (int)puVar41 - local_a8._0_4_;
            iVar34 = (iVar10 - iVar34) + iVar40;
            local_a8._0_8_ = (uint64_t)iVar34;
            if (iVar40 == 0) {
              if (iVar34 == 0) {
                uVar39 = (uint64_t)(*(uint *)((int64_t)plVar30 + 0xc) & 7);
                if (6 < uVar22 - 1) {
                  lVar17 = -(uVar22 & 0xfffffffffffffff8);
                  do {
                    lVar17 = lVar17 + 8;
                  } while (lVar17 != 0);
                }
                puVar41 = (void*)0x0;
                for (; uVar39 != 0; uVar39 = uVar39 - 1) {
                }
              }
              else {
                puVar41 = (void*)0x0;
                do {
                  pvVar16 = _pthread_getspecific((void*)plVar23);
                  if (pvVar16 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  plVar19 = *(int64_t **)(arg1 + 0x38);
                  if (plVar19 == (int64_t *)0x0) {
                    dVar44 = 0.0;
                  }
                  else {
                    pvVar16 = _pthread_getspecific((void*)plVar23);
                    if (pvVar16 != (void *)0x0) {
                      plVar19 = *(int64_t **)(arg1 + 0x38);
                      lVar17 = FUN_00e8b990();
                      if (lVar17 != 0) {
                        plVar19 = (int64_t *)
                                  plVar19[(uint64_t)(*(uint *)(lVar17 + 0x154) & 1) + 4];
                      }
                    }
                    dVar44 = (double)(**(code **)(*plVar19 + 0x370))();
                  }
                  FUN_012756a0(SUB84((double)local_a8._0_8_ / dVar44,0));
                  puVar41 = (void*)((int64_t)puVar41 + 1);
                } while ((int64_t)puVar41 < (int64_t)*(int *)((int64_t)plVar30 + 0xc));
              }
            }
            else {
              puVar41 = (void*)0x0;
              if (iVar34 == 0) {
                do {
                  pvVar16 = _pthread_getspecific((void*)plVar23);
                  if (pvVar16 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  plVar19 = *(int64_t **)(arg1 + 0x38);
                  if (plVar19 == (int64_t *)0x0) {
                    dVar44 = 0.0;
                  }
                  else {
                    pvVar16 = _pthread_getspecific((void*)plVar23);
                    if (pvVar16 != (void *)0x0) {
                      plVar19 = *(int64_t **)(arg1 + 0x38);
                      lVar17 = FUN_00e8b990();
                      if (lVar17 != 0) {
                        plVar19 = (int64_t *)
                                  plVar19[(uint64_t)(*(uint *)(lVar17 + 0x154) & 1) + 4];
                      }
                    }
                    dVar44 = (double)(**(code **)(*plVar19 + 0x370))();
                  }
                  FUN_01275610(SUB84((double)iVar40 / dVar44,0));
                  puVar41 = (void*)((int64_t)puVar41 + 1);
                } while ((int64_t)puVar41 < (int64_t)*(int *)((int64_t)plVar30 + 0xc));
              }
              else {
                do {
                  pvVar16 = _pthread_getspecific((void*)plVar23);
                  if (pvVar16 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  plVar19 = *(int64_t **)(arg1 + 0x38);
                  if (plVar19 == (int64_t *)0x0) {
                    dVar44 = 0.0;
                  }
                  else {
                    pvVar16 = _pthread_getspecific((void*)plVar23);
                    if (pvVar16 != (void *)0x0) {
                      plVar19 = *(int64_t **)(arg1 + 0x38);
                      lVar17 = FUN_00e8b990();
                      if (lVar17 != 0) {
                        plVar19 = (int64_t *)
                                  plVar19[(uint64_t)(*(uint *)(lVar17 + 0x154) & 1) + 4];
                      }
                    }
                    dVar44 = (double)(**(code **)(*plVar19 + 0x370))();
                  }
                  FUN_01275610(SUB84((double)iVar40 / dVar44,0));
                  pvVar16 = _pthread_getspecific((void*)plVar23);
                  if (pvVar16 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  plVar19 = *(int64_t **)(arg1 + 0x38);
                  if (plVar19 == (int64_t *)0x0) {
                    dVar44 = 0.0;
                  }
                  else {
                    pvVar16 = _pthread_getspecific((void*)plVar23);
                    if (pvVar16 != (void *)0x0) {
                      plVar19 = *(int64_t **)(arg1 + 0x38);
                      lVar17 = FUN_00e8b990();
                      if (lVar17 != 0) {
                        plVar19 = (int64_t *)
                                  plVar19[(uint64_t)(*(uint *)(lVar17 + 0x154) & 1) + 4];
                      }
                    }
                    dVar44 = (double)(**(code **)(*plVar19 + 0x370))();
                  }
                  FUN_012756a0(SUB84((double)local_a8._0_8_ / dVar44,0));
                  puVar41 = (void*)((int64_t)puVar41 + 1);
                } while ((int64_t)puVar41 < (int64_t)*(int *)((int64_t)plVar30 + 0xc));
              }
            }
          }
          if (*param_2 != 0) {
            local_110 = local_60;
            local_108 = '\0';
            FUN_00d21140();
          }
          if (bVar6 || plVar30 == (int64_t *)0x0) {
            plVar30 = (int64_t *)((uint64_t)local_50 & 0xffffffff);
          }
          else {
            FUN_00d50b20();
            plVar30 = (int64_t *)((uint64_t)local_50 & 0xffffffff);
          }
        }
      }
      uVar22 = (uint64_t)(uVar28 + 1);
      local_a8[0] = (char)local_3c;
      local_50 = (int64_t *)((uint64_t)plVar30 & 0xffffffff);
      plVar23 = (int64_t *)((uint64_t)local_70 & 0xffffffff);
      local_c0 = local_48;
      local_b0 = local_58;
      local_80 = local_88;
    } while ((int)(uVar28 + 1) < *(int *)(arg1 + 0x88));
  }
  plVar23 = local_110;
  local_50 = (int64_t *)((uint64_t)plVar30 & 0xffffffff);
  lVar12 = *(int64_t *)(arg1 + 0x40);
  plVar30 = local_88;
  if (lVar12 != 0) {
    FUN_00d50b00();
  }
  FUN_0147ce20();
  if (local_108 == '\0') {
    if (local_110 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_108 = '\0';
  }
  if (lVar12 != 0) {
    FUN_00d50b20();
  }
  FUN_00d242c0();
  if (1 < *(int *)((int64_t)local_110 + 0xc)) {
    lVar12 = 1;
    local_128 = 0;
    do {
      plVar19 = *(int64_t **)(plVar23[2] + local_128 * 8);
      if (local_60 == plVar19) {
        if (((char)local_50 == '\0') && (local_60 != (int64_t *)0x0)) {
          local_50 = (int64_t *)0x1;
          FUN_00d50b00();
        }
      }
      else {
        if (plVar19 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if (((char)local_50 == '\0') || (local_60 == (int64_t *)0x0)) {
          local_50 = (int64_t *)0x1;
          local_60 = plVar19;
        }
        else {
          FUN_00d50b20();
          local_50 = (int64_t *)0x1;
          local_60 = plVar19;
        }
      }
      pvVar16 = _pthread_getspecific((void*)plVar30);
      if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
        plVar30 = local_60;
      }
      lVar17 = FUN_013de650();
      pvVar16 = _pthread_getspecific((void*)plVar30);
      if ((pvVar16 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
        plVar30 = local_60;
      }
      lVar20 = FUN_013de790();
      lVar20 = lVar20 + lVar17;
      if (*(int *)((int64_t)plVar23 + 0xc) < 1) {
LAB_013a0afb:
        plVar30 = (int64_t *)(local_128 + 1);
        lVar17 = lVar12;
        if ((int64_t)plVar30 < (int64_t)*(int *)((int64_t)plVar23 + 0xc)) {
LAB_013a0b44:
          lVar21 = *(int64_t *)(plVar23[2] + lVar17 * 8);
          if (lVar21 != 0) {
            FUN_00d50b00();
          }
          pvVar16 = _pthread_getspecific((void*)plVar30);
          if (pvVar16 != (void *)0x0) {
            FUN_00e8b990();
          }
          lVar24 = FUN_013de650();
          if (lVar24 <= lVar20) goto code_r0x013a0b9d;
          if (lVar21 != 0) {
            FUN_00d50b00();
            FUN_00d50b20();
            pvVar16 = _pthread_getspecific((void*)plVar30);
            if (pvVar16 != (void *)0x0) {
              FUN_00e8b990();
            }
            lVar17 = FUN_013de650();
            pvVar16 = _pthread_getspecific((void*)plVar30);
            if ((pvVar16 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
              plVar30 = local_60;
            }
            uVar14 = FUN_013de560();
            uVar26 = (undefined7)((uint64_t)uVar14 >> 8);
            local_80._0_1_ = (char)local_3c;
            if (local_110 == local_38) {
              if (((char)local_80 == '\0') && (local_110 != (int64_t *)0x0)) {
                local_3c = (uint)CONCAT71(uVar26,1);
                if (local_108 != '\0') goto LAB_013a0d37;
                local_3c = (uint)CONCAT71(uVar26,1);
                FUN_00d50b00();
              }
joined_r0x013a0d06:
              if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else if (local_108 == '\0') {
              if (local_110 != (int64_t *)0x0) {
                uVar14 = FUN_00d50b00();
              }
              local_3c = (uint)CONCAT71((int7)((uint64_t)uVar14 >> 8),1);
              if ((char)local_80 == '\0') {
                local_38 = local_110;
              }
              else {
                if (local_38 != (int64_t *)0x0) {
                  FUN_00d50b20();
                  local_38 = local_110;
                  goto joined_r0x013a0d06;
                }
                local_38 = local_110;
              }
            }
            else {
              local_3c = (uint)CONCAT71(uVar26,1);
              if (((char)local_80 == '\0') || (local_38 == (int64_t *)0x0)) {
                local_38 = local_110;
              }
              else {
                FUN_00d50b20();
                local_38 = local_110;
              }
            }
LAB_013a0d37:
            pvVar16 = _pthread_getspecific((void*)plVar30);
            if ((pvVar16 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
              plVar30 = local_38;
            }
            pvVar16 = _pthread_getspecific((void*)plVar30);
            plVar19 = local_38;
            if ((pvVar16 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
              plVar30 = local_38;
              plVar19 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4];
            }
            (**(code **)(*plVar19 + 0x388))();
            FUN_014bb2b0();
            pvVar16 = _pthread_getspecific((void*)plVar30);
            if ((pvVar16 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
              plVar30 = local_60;
            }
            FUN_013dfcb0();
            pvVar16 = _pthread_getspecific((void*)plVar30);
            if (pvVar16 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dd7c0();
            if (local_108 == '\0') {
              if (local_110 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_108 = '\0';
            }
            if ((local_170 != '\0') && (local_178 != 0)) {
              FUN_00d50b20();
            }
            if (0 < *(int *)((int64_t)local_110 + 0xc)) {
              lVar21 = 0;
              do {
                pvVar16 = _pthread_getspecific((void*)plVar30);
                if (pvVar16 != (void *)0x0) {
                  FUN_00e8b990();
                }
                plVar19 = *(int64_t **)(arg1 + 0x38);
                if (plVar19 == (int64_t *)0x0) {
                  dVar45 = 0.0;
                }
                else {
                  pvVar16 = _pthread_getspecific((void*)plVar30);
                  if (pvVar16 != (void *)0x0) {
                    plVar19 = *(int64_t **)(arg1 + 0x38);
                    lVar24 = FUN_00e8b990();
                    if (lVar24 != 0) {
                      plVar19 = (int64_t *)plVar19[(uint64_t)(*(uint *)(lVar24 + 0x154) & 1) + 4];
                    }
                  }
                  dVar45 = (double)(**(code **)(*plVar19 + 0x370))();
                }
                FUN_012756a0(SUB84((double)(lVar17 - lVar20) / dVar45,0));
                lVar21 = lVar21 + 1;
              } while (lVar21 < *(int *)((int64_t)local_110 + 0xc));
            }
            if (*param_2 != 0) {
              local_110 = local_60;
              local_108 = '\0';
              FUN_00d21140();
            }
            FUN_00d50b20();
            FUN_00d50b20();
          }
        }
      }
      else {
        bVar6 = true;
        lVar17 = 0;
        do {
          plVar19 = *(int64_t **)(plVar23[2] + lVar17 * 8);
          if (plVar19 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          if (plVar19 == local_60) {
            iVar34 = 0x27;
          }
          else {
            pvVar16 = _pthread_getspecific((void*)plVar30);
            if (pvVar16 != (void *)0x0) {
              FUN_00e8b990();
            }
            lVar21 = FUN_013de650();
            pvVar16 = _pthread_getspecific((void*)plVar30);
            if (pvVar16 != (void *)0x0) {
              FUN_00e8b990();
            }
            lVar24 = FUN_013de650();
            pvVar16 = _pthread_getspecific((void*)plVar30);
            if (pvVar16 != (void *)0x0) {
              FUN_00e8b990();
            }
            lVar25 = FUN_013de790();
            bVar3 = lVar21 <= lVar20;
            plVar30 = (int64_t *)CONCAT71((int7)((uint64_t)plVar30 >> 8),bVar3);
            bVar4 = lVar20 < lVar25 + lVar24;
            if (bVar3 && bVar4) {
              bVar6 = false;
            }
            iVar34 = 0;
            if (bVar3 && bVar4) {
              iVar34 = 0x25;
            }
          }
          if (plVar19 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        } while (((iVar34 == 0x27) || (iVar34 == 0)) &&
                (lVar17 = lVar17 + 1, lVar17 < *(int *)((int64_t)plVar23 + 0xc)));
        if (bVar6) goto LAB_013a0afb;
      }
LAB_013a080b:
      local_128 = local_128 + 1;
      plVar30 = (int64_t *)(uint64_t)local_3c;
      lVar12 = lVar12 + 1;
    } while (local_128 < (int64_t)*(int *)((int64_t)plVar23 + 0xc) + -1);
  }
  FUN_00e83070();
  *this_ptr = puVar11;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  if (lVar15 != 0) {
    FUN_00d50b20();
  }
  if (plVar38 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (puVar13 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((bVar8) && (local_118 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar36 != '\0') && (local_120 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar42) && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_b8 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_d0 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_3c != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_68 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_64 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_70 != '\0') && (local_88 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_138 != '\0') && (local_130 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
code_r0x013a0b9d:
  if (lVar21 != 0) {
    FUN_00d50b20();
  }
  lVar17 = lVar17 + 1;
  if (*(int *)((int64_t)plVar23 + 0xc) <= (int)lVar17) goto LAB_013a080b;
  goto LAB_013a0b44;
}

