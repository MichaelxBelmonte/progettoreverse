// Function: FUN_01385600
// Address: 01385600
// Size: 8049 bytes
// Class: GNFilePath

void FUN_01385600(int64_t *param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  int64_t lVar6;
  void*puVar7;
  int64_t lVar8;
  uint64_t uVar9;
  void* pVar10;
  uint64_t *puVar11;
  int64_t *plVar12;
  uint64_t *puVar13;
  int64_t lVar14;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t *puVar15;
  uint64_t *puVar16;
  uint32_t uVar17;
  code *pcVar18;
  undefined7 uVar21;
  uint64_t uVar19;
  int64_t lVar20;
  bool bVar22;
  double dVar23;
  uint64_t *extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  uint64_t *local_180;
  uint8_t local_178;
  uint64_t *local_170;
  uint8_t local_168;
  int64_t local_160;
  uint8_t local_158;
  uint64_t *local_150;
  uint8_t local_148;
  void*local_140;
  uint8_t local_138;
  int64_t *local_130;
  uint64_t local_128;
  double local_120;
  uint64_t *local_118;
  void*local_110;
  char local_108;
  void*local_100;
  char local_f8;
  code *local_f0;
  uint8_t local_e8 [8];
  int64_t local_e0;
  char local_d8;
  uint64_t local_d0;
  uint64_t local_c8;
  void*local_c0;
  void*local_b8;
  void*local_b0;
  void*local_a8;
  uint64_t *local_a0;
  double local_98;
  uint64_t *local_90;
  uint64_t *local_88;
  uint8_t local_79;
  uint64_t *local_78;
  uint64_t *local_70;
  uint64_t *local_68;
  uint64_t *local_60;
  uint64_t *local_58;
  uint64_t *local_50;
  uint64_t *local_48;
  char local_40;
  
  plVar12 = *(int64_t **)(this_ptr + 0x38);
  local_130 = param_1;
  local_d0 = param_2;
  pvVar5 = _pthread_getspecific((void*)param_1);
  pVar10 = (void*)param_1;
  if (pvVar5 != (void *)0x0) {
    plVar12 = *(int64_t **)(this_ptr + 0x38);
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      plVar12 = (int64_t *)plVar12[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
  }
  local_120 = (double)(**(code **)(*plVar12 + 0x370))();
  local_79 = 0;
  if (*(int64_t *)(this_ptr + 0x1f8) != 0) {
    return;
  }
  if (*(int64_t *)(this_ptr + 0x200) != 0) {
    return;
  }
  if (*(int64_t *)(this_ptr + 0x148) == 0) {
LAB_0138583f:
    if (*(int64_t *)(this_ptr + 0x200) != 0) {
      return;
    }
    if (*(int64_t *)(this_ptr + 0x148) != 0) {
      pvVar5 = _pthread_getspecific(pVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_0141bab0();
      if (iVar3 == 2) goto LAB_013856fa;
      if (*(int64_t *)(this_ptr + 0x1f8) != 0) {
        return;
      }
    }
    if (*(int64_t *)(this_ptr + 0x200) != 0) {
      return;
    }
    if (*(int64_t *)(this_ptr + 0x148) == 0) {
      return;
    }
    pvVar5 = _pthread_getspecific(pVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_0141bab0();
    if (iVar3 != 1) {
      return;
    }
  }
  else {
    pvVar5 = _pthread_getspecific(pVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_0141bab0();
    if (iVar3 != 4) {
      if (*(int64_t *)(this_ptr + 0x1f8) != 0) {
        return;
      }
      goto LAB_0138583f;
    }
  }
LAB_013856fa:
  local_88 = *(uint64_t **)(this_ptr + 0x58);
  if (local_88 == (uint64_t *)0x0) {
    return;
  }
  FUN_00d50b00();
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_025683c0;
  (*g_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  local_b8 = puVar7;
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar11 = (uint64_t *)&g_02572358;
  local_a8 = &g_02572358;
  *puVar7 = &g_02572358;
  pcVar18 = g_02572370;
  (*g_02572370)();
  local_f0 = pcVar18;
  local_b0 = puVar7;
  if ((*arg1 == 0) || (*(int *)(*arg1 + 0xc) == 0)) {
    local_d8 = 0;
    lVar6 = *(int64_t *)(this_ptr + 0x40);
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    local_d8 = '\x01';
    local_e0 = lVar6;
    FUN_0147ce20();
    puVar16 = local_48;
    puVar15 = (uint64_t *)*arg1;
    if (puVar15 == local_48) {
      if (((char)arg1[1] == '\0') && (local_48 != (uint64_t *)0x0)) {
        if (local_40 != '\0') goto LAB_01385930;
        FUN_00d50b00();
        goto LAB_0138596e;
      }
LAB_01385979:
      if ((local_40 != '\0') && (local_48 != (uint64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      lVar6 = arg1[1];
      if (local_40 == '\0') {
        if (local_48 != (uint64_t *)0x0) {
          FUN_00d50b00();
        }
        *arg1 = (int64_t)puVar16;
        if (((char)lVar6 != '\0') && (puVar15 != (uint64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_0138596e:
        *(void*)(arg1 + 1) = 1;
        pcVar18 = local_f0;
        goto LAB_01385979;
      }
      *arg1 = (int64_t)local_48;
      if (((char)lVar6 != '\0') && (puVar15 != (uint64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_01385930:
      *(void*)(arg1 + 1) = 1;
      local_40 = '\0';
      pcVar18 = local_f0;
    }
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
  }
  plVar12 = *(int64_t **)(this_ptr + 0x38);
  pvVar5 = _pthread_getspecific((void*)puVar11);
  if (pvVar5 != (void *)0x0) {
    plVar12 = *(int64_t **)(this_ptr + 0x38);
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      plVar12 = (int64_t *)plVar12[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
  }
  local_70 = (uint64_t *)(**(code **)(*plVar12 + 0x398))();
  if (*(int *)(*arg1 + 0xc) < 1) {
    local_98 = 0.0;
  }
  else {
    local_98 = 0.0;
    lVar6 = 0;
    do {
      pVar10 = (void*)puVar11;
      pvVar5 = _pthread_getspecific(pVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar23 = (double)FUN_013de8d0();
      if (dVar23 < (double)local_70) {
        pvVar5 = _pthread_getspecific(pVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_70 = (uint64_t *)FUN_013de8d0();
      }
      pvVar5 = _pthread_getspecific(pVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar23 = (double)FUN_013dea30();
      if (local_98 < dVar23) {
        pvVar5 = _pthread_getspecific(pVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_98 = (double)FUN_013dea30();
      }
      lVar6 = lVar6 + 1;
      puVar11 = (uint64_t *)(int64_t)*(int *)(*arg1 + 0xc);
    } while (lVar6 < (int64_t)puVar11);
  }
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = local_a8;
  (*pcVar18)();
  lVar6 = *(int64_t *)(this_ptr + 0x40);
  local_c0 = puVar7;
  if (0 < *(int *)(lVar6 + 0xc)) {
    local_50 = (uint64_t *)0x0;
    puVar15 = (uint64_t *)0x0;
    puVar16 = (uint64_t *)0x0;
    puVar13 = (uint64_t *)0x0;
    local_58 = (uint64_t *)0x0;
LAB_01385c02:
    do {
      puVar1 = *(uint64_t **)(*(int64_t *)(lVar6 + 0x10) + (int64_t)local_50 * 8);
      puVar11 = local_50;
      local_78 = puVar16;
      local_60 = puVar13;
      if (puVar1 != (uint64_t *)0x0) {
        FUN_00d50b00();
      }
      local_40 = '\0';
      local_48 = puVar1;
      cVar2 = FUN_00d24090();
      if ((local_40 != '\0') && (local_48 != (uint64_t *)0x0)) {
        FUN_00d50b20();
      }
      puVar16 = local_78;
      iVar3 = 9;
      puVar13 = local_60;
      if (cVar2 == '\0') {
        local_40 = '\0';
        local_48 = puVar1;
        FUN_00d21140();
        if ((local_40 != '\0') && (local_48 != (uint64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar5 = _pthread_getspecific((void*)puVar11);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar23 = (double)FUN_013de8d0();
        if ((double)local_70 <= dVar23) {
          pvVar5 = _pthread_getspecific((void*)puVar11);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar23 = (double)FUN_013de8d0();
          if (dVar23 < local_98) {
            local_68 = puVar15;
            pvVar5 = _pthread_getspecific((void*)puVar11);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013de560();
            puVar15 = local_48;
            local_118 = local_48;
            if (local_40 == '\0') {
              if (local_48 == (uint64_t *)0x0) goto LAB_01385f39;
              FUN_00d50b00();
              if ((local_40 != '\0') && (local_48 != (uint64_t *)0x0)) {
                FUN_00d50b20();
              }
LAB_01385eaf:
              pvVar5 = _pthread_getspecific((void*)puVar11);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_014bc340();
              puVar13 = local_48;
              if ((local_40 != '\0') && (local_48 != (uint64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (puVar13 != (uint64_t *)0x0) {
                pvVar5 = _pthread_getspecific((void*)puVar11);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_014bc340();
                puVar13 = local_48;
                puVar11 = local_48;
                if (local_48 != (uint64_t *)0x0) {
                  if (local_40 == '\0') {
                    FUN_00d50b00();
                  }
                  else {
                    local_40 = '\0';
                  }
                  if ((local_40 != '\0') && (local_48 != (uint64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  pvVar5 = _pthread_getspecific((void*)puVar11);
                  if (pvVar5 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  cVar2 = FUN_014bc070();
                  local_90 = puVar13;
                  if (cVar2 == '\0') {
                    pvVar5 = _pthread_getspecific((void*)puVar11);
                    if (pvVar5 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    cVar2 = FUN_014bc070();
                    if (cVar2 == '\0') {
                      pvVar5 = _pthread_getspecific((void*)puVar11);
                      if (pvVar5 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_014d1d00();
                      puVar13 = local_60;
                      uVar21 = (undefined7)((uint64_t)puVar15 >> 8);
                      if (local_48 == local_60) {
                        if (((char)local_58 == '\0') && (local_48 != (uint64_t *)0x0)) {
                          uVar19 = CONCAT71(uVar21,1);
                          if (local_40 != '\0') goto LAB_0138612c;
                          uVar19 = CONCAT71(uVar21,1);
                          FUN_00d50b00();
                        }
                        else {
                          uVar19 = (uint64_t)local_58 & 0xffffffff;
                        }
LAB_01386118:
                        if ((local_40 != '\0') && (local_48 != (uint64_t *)0x0)) {
                          FUN_00d50b20();
                        }
                      }
                      else {
                        puVar13 = local_48;
                        if (local_40 == '\0') {
                          if (local_48 != (uint64_t *)0x0) {
                            FUN_00d50b00();
                          }
                          uVar19 = CONCAT71(uVar21,1);
                          if (((char)local_58 != '\0') && (local_60 != (uint64_t *)0x0)) {
                            FUN_00d50b20();
                          }
                          goto LAB_01386118;
                        }
                        uVar19 = CONCAT71(uVar21,1);
                        if (((char)local_58 != '\0') && (local_60 != (uint64_t *)0x0)) {
                          FUN_00d50b20();
                        }
                      }
LAB_0138612c:
                      bVar22 = false;
                      local_a0 = (uint64_t *)((uint64_t)local_a0 & 0xffffffff00000000);
                      local_58 = (uint64_t *)(uVar19 & 0xffffffff);
                      local_60 = puVar13;
                      goto LAB_01386146;
                    }
                  }
                  bVar22 = false;
                  local_a0 = (uint64_t *)((uint64_t)local_a0 & 0xffffffff00000000);
                  goto LAB_01386146;
                }
              }
              bVar22 = true;
              local_90 = (uint64_t *)0x0;
              local_a0 = (uint64_t *)((uint64_t)local_a0 & 0xffffffff00000000);
            }
            else {
              if (local_48 != (uint64_t *)0x0) goto LAB_01385eaf;
LAB_01385f39:
              bVar22 = true;
              local_90 = (uint64_t *)0x0;
              local_a0 = (uint64_t *)CONCAT44(local_a0._4_4_,1);
            }
LAB_01386146:
            puVar15 = local_68;
            if (local_60 == (uint64_t *)0x0) {
              iVar3 = 0;
            }
            else {
              uVar21 = (undefined7)((uint64_t)puVar16 >> 8);
              if (local_68 == puVar1) {
                iVar3 = 7;
                if (((char)puVar16 == '\0') && (local_68 != (uint64_t *)0x0)) {
                  puVar16 = (uint64_t *)CONCAT71(uVar21,1);
                  FUN_00d50b00();
                  puVar15 = local_68;
                }
              }
              else {
                if (puVar1 != (uint64_t *)0x0) {
                  FUN_00d50b00();
                }
                iVar3 = 7;
                puVar16 = (uint64_t *)CONCAT71(uVar21,1);
                puVar15 = puVar1;
                if (((char)local_78 != '\0') && (local_68 != (uint64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            local_68 = puVar15;
            if ((char)local_a0 == '\0') {
              FUN_00d50b20();
            }
            puVar15 = local_68;
            if (!bVar22) {
              FUN_00d50b20();
            }
            puVar13 = local_60;
            if (local_60 != (uint64_t *)0x0) goto joined_r0x01385d85;
            local_60 = (uint64_t *)0x0;
          }
        }
        iVar3 = 0;
        puVar13 = local_60;
      }
joined_r0x01385d85:
      local_60 = puVar13;
      if (puVar1 != (uint64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((iVar3 == 9) || (iVar3 == 0)) {
        local_50 = (uint64_t *)((int64_t)local_50 + 1);
        lVar6 = *(int64_t *)(this_ptr + 0x40);
        puVar11 = (uint64_t *)(int64_t)*(int *)(lVar6 + 0xc);
        if ((int64_t)local_50 < (int64_t)puVar11) goto LAB_01385c02;
      }
      if (puVar15 == (uint64_t *)0x0) {
        if (((char)local_58 != '\0') && (puVar13 != (uint64_t *)0x0)) {
          FUN_00d50b20();
        }
        break;
      }
      local_178 = 0;
      local_180 = puVar15;
      cVar2 = FUN_0136bb10(local_e8,&local_180,1,0);
      if (cVar2 != '\0') {
        local_40 = '\0';
        local_48 = puVar13;
        FUN_00d23e50();
        if ((local_40 != '\0') && (local_48 != (uint64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (((char)local_58 != '\0') && (puVar13 != (uint64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((char)puVar16 != '\0') {
        FUN_00d50b20();
      }
      lVar6 = *(int64_t *)(this_ptr + 0x40);
      local_50 = (uint64_t *)0x0;
      puVar15 = (uint64_t *)0x0;
      puVar16 = (uint64_t *)0x0;
      puVar13 = (uint64_t *)0x0;
      puVar11 = (uint64_t *)0x0;
      local_58 = (uint64_t *)0x0;
      if (*(int *)(lVar6 + 0xc) < 1) break;
    } while( true );
  }
  puVar7 = (void*)FUN_00e8fc40();
  pcVar18 = local_f0;
  FUN_00d4ff40();
  *puVar7 = local_a8;
  (*pcVar18)();
  local_90 = puVar7;
  puVar15 = (uint64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar15 = (uint64_t)local_a8;
  dVar23 = (double)(*pcVar18)();
  lVar6 = *(int64_t *)(this_ptr + 0xd0);
  local_60 = puVar15;
  if (0 < *(int *)(lVar6 + 0xc)) {
    lVar14 = 0;
    do {
      pVar10 = (void*)puVar11;
      puVar11 = *(uint64_t **)(*(int64_t *)(lVar6 + 0x10) + lVar14 * 8);
      if (puVar11 != (uint64_t *)0x0) {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific(pVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar23 = (double)FUN_014bb640();
      if (((double)local_70 <= dVar23) && (dVar23 < local_98)) {
        local_40 = '\0';
        local_48 = puVar11;
        dVar23 = (double)FUN_00d21140();
        if ((local_40 != '\0') && (local_48 != (uint64_t *)0x0)) {
          dVar23 = (double)FUN_00d50b20();
        }
      }
      if (puVar11 != (uint64_t *)0x0) {
        dVar23 = (double)FUN_00d50b20();
      }
      lVar14 = lVar14 + 1;
      lVar6 = *(int64_t *)(this_ptr + 0xd0);
      puVar11 = (uint64_t *)(int64_t)*(int *)(lVar6 + 0xc);
    } while (lVar14 < (int64_t)puVar11);
  }
  puVar15 = local_60;
  puVar16 = (uint64_t *)FUN_00d242c0(dVar23,0);
  if (0 < *(int *)((int64_t)puVar15 + 0xc)) {
    lVar6 = 0;
    do {
      lVar14 = *(int64_t *)(puVar15[2] + lVar6 * 8);
      if (lVar14 != 0) {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific((void*)puVar11);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_50 = (uint64_t *)FUN_014bacf0();
      puVar16 = local_70;
      if (((double)local_70 <= (double)local_50) &&
         (puVar16 = local_50, (double)local_50 < local_98)) {
        local_50 = (uint64_t *)((double)local_50 + g_0240dea8);
        pvVar5 = _pthread_getspecific((void*)puVar11);
        if ((pvVar5 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          puVar11 = local_88;
        }
        local_78 = (uint64_t *)FUN_016c9480(local_50);
        puVar16 = (uint64_t *)FUN_00e7c860();
        puVar15 = (uint64_t *)((g_023b4df8 / (double)local_78) * (double)puVar16 * g_02420c40);
        lVar8 = *(int64_t *)(this_ptr + 0x40);
        if (0 < *(int *)(lVar8 + 0xc)) {
          local_78 = g_0241b6a8;
          if ((double)g_0241b6a8 <= (double)puVar15) {
            local_78 = puVar15;
          }
          lVar20 = 0;
          do {
            puVar15 = *(uint64_t **)(*(int64_t *)(lVar8 + 0x10) + lVar20 * 8);
            if (puVar15 != (uint64_t *)0x0) {
              FUN_00d50b00();
            }
            pvVar5 = _pthread_getspecific((void*)puVar11);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013de560();
            puVar13 = local_48;
            if ((((local_40 == '\0') && (local_48 != (uint64_t *)0x0)) &&
                (FUN_00d50b00(), local_40 != '\0')) && (local_48 != (uint64_t *)0x0)) {
              FUN_00d50b20();
            }
            pvVar5 = _pthread_getspecific((void*)puVar11);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar2 = FUN_014bc070();
            puVar16 = extraout_XMM0_Qa;
            if (cVar2 == '\0') {
              pvVar5 = _pthread_getspecific((void*)puVar11);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              puVar16 = (uint64_t *)FUN_013de8d0();
              if ((double)puVar16 < (double)local_50) {
                pvVar5 = _pthread_getspecific((void*)puVar11);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                puVar16 = (uint64_t *)FUN_013dea30();
                if ((double)local_50 < (double)puVar16) {
                  pvVar5 = _pthread_getspecific((void*)puVar11);
                  if (pvVar5 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  puVar16 = (uint64_t *)FUN_013de8d0();
                  if ((double)local_50 - (double)puVar16 <= (double)local_78) {
                    if (puVar13 != (uint64_t *)0x0) {
                      puVar16 = (uint64_t *)FUN_00d50b20();
                    }
                    if (puVar15 != (uint64_t *)0x0) {
                      puVar16 = (uint64_t *)FUN_00d50b20();
                    }
                  }
                  else {
                    pvVar5 = _pthread_getspecific((void*)puVar11);
                    if (pvVar5 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    dVar23 = (double)FUN_013dea30();
                    puVar16 = (uint64_t *)(dVar23 - (double)local_50);
                    if ((double)puVar16 <= (double)local_78) {
                      if (puVar13 != (uint64_t *)0x0) {
                        puVar16 = (uint64_t *)FUN_00d50b20();
                      }
                      if (puVar15 != (uint64_t *)0x0) {
                        puVar16 = (uint64_t *)FUN_00d50b20();
                      }
                    }
                    else {
                      if (puVar15 != (uint64_t *)0x0) {
                        puVar16 = (uint64_t *)FUN_00d50b00();
                      }
                      if (puVar13 != (uint64_t *)0x0) {
                        puVar16 = (uint64_t *)FUN_00d50b20();
                      }
                      if ((puVar15 != (uint64_t *)0x0) &&
                         (puVar16 = (uint64_t *)FUN_00d50b20(), puVar15 != (uint64_t *)0x0)) {
                        local_168 = 0;
                        puVar11 = (uint64_t *)(int64_t)((double)local_50 * local_120);
                        local_170 = puVar15;
                        FUN_0135f200(puVar11,&local_170,local_e8,&local_79);
                        puVar16 = local_48;
                        if ((local_40 == '\0') && (local_48 != (uint64_t *)0x0)) {
                          FUN_00d50b00();
                        }
                        local_40 = '\0';
                        local_48 = (uint64_t *)lVar14;
                        FUN_00d235a0();
                        if ((local_40 != '\0') && (local_48 != (uint64_t *)0x0)) {
                          FUN_00d50b20();
                        }
                        local_110 = local_b8;
                        local_108 = '\0';
                        FUN_015b4ee0();
                        if ((local_108 != '\0') && (local_110 != (void*)0x0)) {
                          FUN_00d50b20();
                        }
                        local_40 = '\0';
                        local_48 = puVar16;
                        FUN_00d21140();
                        if ((local_40 != '\0') && (local_48 != (uint64_t *)0x0)) {
                          FUN_00d50b20();
                        }
                        local_40 = '\0';
                        local_48 = puVar15;
                        FUN_00d21140();
                        if ((local_40 != '\0') && (local_48 != (uint64_t *)0x0)) {
                          FUN_00d50b20();
                        }
                        if (puVar16 != (uint64_t *)0x0) {
                          FUN_00d50b20();
                        }
                        puVar16 = (uint64_t *)FUN_00d50b20();
                      }
                    }
                  }
                  break;
                }
              }
            }
            if (puVar13 != (uint64_t *)0x0) {
              puVar16 = (uint64_t *)FUN_00d50b20();
            }
            if (puVar15 != (uint64_t *)0x0) {
              puVar16 = (uint64_t *)FUN_00d50b20();
            }
            lVar20 = lVar20 + 1;
            lVar8 = *(int64_t *)(this_ptr + 0x40);
            puVar11 = (uint64_t *)(int64_t)*(int *)(lVar8 + 0xc);
          } while (lVar20 < (int64_t)puVar11);
        }
      }
      if (lVar14 != 0) {
        puVar16 = (uint64_t *)FUN_00d50b20();
      }
      lVar6 = lVar6 + 1;
      puVar15 = local_60;
    } while (lVar6 < *(int *)((int64_t)local_60 + 0xc));
  }
  lVar6 = *(int64_t *)(this_ptr + 0x100);
  if (0 < *(int *)(lVar6 + 0xc)) {
    lVar14 = 0;
    do {
      pVar10 = (void*)puVar11;
      puVar11 = *(uint64_t **)(*(int64_t *)(lVar6 + 0x10) + lVar14 * 8);
      if (puVar11 != (uint64_t *)0x0) {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific(pVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      puVar16 = (uint64_t *)FUN_014bb640();
      if (((double)local_70 <= (double)puVar16) && ((double)puVar16 < local_98)) {
        local_40 = '\0';
        local_48 = puVar11;
        puVar16 = (uint64_t *)FUN_00d235a0();
        if ((local_40 != '\0') && (local_48 != (uint64_t *)0x0)) {
          puVar16 = (uint64_t *)FUN_00d50b20();
        }
      }
      if (puVar11 != (uint64_t *)0x0) {
        puVar16 = (uint64_t *)FUN_00d50b20();
      }
      lVar14 = lVar14 + 1;
      lVar6 = *(int64_t *)(this_ptr + 0x100);
      puVar11 = (uint64_t *)(int64_t)*(int *)(lVar6 + 0xc);
    } while (lVar14 < (int64_t)puVar11);
  }
  FUN_00d242c0(puVar16,0);
  pvVar5 = _pthread_getspecific((void*)puVar11);
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    puVar11 = local_88;
  }
  FUN_016c25f0(local_70);
  local_c8 = FUN_00e7cd00();
  puVar15 = local_90;
  pvVar5 = _pthread_getspecific((void*)puVar11);
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    puVar11 = local_88;
  }
  FUN_016c25f0(local_98);
  local_128 = FUN_00e7cd00();
  pVar10 = (void*)puVar11;
  if ((local_c8._4_4_ != 0) && (local_128 >> 0x20 != 0)) {
    iVar3 = 0;
    while( true ) {
      cVar2 = FUN_00e7c020();
      pVar10 = (void*)puVar11;
      if (cVar2 != '\0') break;
      pvVar5 = _pthread_getspecific(pVar10);
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        puVar11 = local_88;
      }
      local_78 = (uint64_t *)FUN_016c98e0();
      pvVar5 = _pthread_getspecific((void*)puVar11);
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        puVar11 = local_88;
      }
      local_50 = (uint64_t *)FUN_016c9480(local_78);
      dVar23 = (double)FUN_00e7c860();
      puVar16 = (uint64_t *)((g_023b4df8 / (double)local_50) * dVar23 * g_02420c40);
      local_a0 = g_0241b6a8;
      if ((double)g_0241b6a8 <= (double)puVar16) {
        local_a0 = puVar16;
      }
      local_68 = (uint64_t *)((double)local_a0 * g_023934c8);
      if (iVar3 < *(int *)((int64_t)local_60 + 0xc)) {
        local_98 = (double)local_78 + (double)local_68;
        lVar6 = (int64_t)iVar3;
        local_a8 = (void*)CONCAT44(local_a8._4_4_,iVar3);
        local_58 = (uint64_t *)0x0;
        uVar17 = 0;
        do {
          puVar11 = *(uint64_t **)(local_60[2] + lVar6 * 8);
          puVar15 = local_60;
          if (puVar11 != (uint64_t *)0x0) {
            FUN_00d50b00();
          }
          pvVar5 = _pthread_getspecific((void*)puVar15);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar9 = FUN_014bacf0();
          local_50 = (uint64_t *)extraout_XMM0_Qa_00;
          puVar15 = local_58;
          if (extraout_XMM0_Qa_00 <= local_98) {
            dVar23 = (double)((uint64_t)(extraout_XMM0_Qa_00 - (double)local_78) & g_023908f0);
            if ((double)local_68 <= dVar23) {
LAB_01386d00:
              local_70 = (uint64_t *)CONCAT44(local_70._4_4_,uVar17);
            }
            else {
              local_68 = (uint64_t *)dVar23;
              if (local_58 == puVar11) {
                if (((char)uVar17 != '\0') || (local_58 == (uint64_t *)0x0)) goto LAB_01386d00;
                local_70 = (uint64_t *)
                           CONCAT44(local_70._4_4_,(int)CONCAT71((int7)((uint64_t)uVar9 >> 8),1));
                FUN_00d50b00();
                puVar15 = local_58;
              }
              else {
                if (puVar11 != (uint64_t *)0x0) {
                  uVar9 = FUN_00d50b00();
                }
                local_70 = (uint64_t *)
                           CONCAT44(local_70._4_4_,(int)CONCAT71((int7)((uint64_t)uVar9 >> 8),1));
                puVar15 = puVar11;
                if (((char)uVar17 != '\0') && (local_58 != (uint64_t *)0x0)) {
                  local_58 = puVar11;
                  FUN_00d50b20();
                  puVar15 = local_58;
                }
              }
            }
          }
          else {
            local_70 = (uint64_t *)CONCAT44(local_70._4_4_,uVar17);
            local_a8 = (void*)CONCAT44(local_a8._4_4_,iVar3);
          }
          local_58 = puVar15;
          if (puVar11 != (uint64_t *)0x0) {
            FUN_00d50b20();
          }
          puVar16 = local_58;
          puVar15 = local_90;
          if (local_98 < (double)local_50) break;
          lVar6 = lVar6 + 1;
          iVar3 = iVar3 + 1;
          uVar17 = local_70._0_4_;
        } while (lVar6 < *(int *)((int64_t)local_60 + 0xc));
        puVar11 = local_60;
        if (local_58 == (uint64_t *)0x0) {
          puVar16 = (uint64_t *)((uint64_t)local_a8 & 0xffffffff);
          iVar3 = (int)local_a8;
          goto LAB_01386e1f;
        }
        pvVar5 = _pthread_getspecific((void*)local_60);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_78 = (uint64_t *)FUN_014bacf0();
        local_50 = (uint64_t *)((double)local_78 + g_0240dea8);
        local_48 = puVar16;
        local_40 = '\0';
        cVar2 = FUN_00d24090();
        if ((local_40 != '\0') && (local_48 != (uint64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_68 = (uint64_t *)0x0;
        iVar3 = (int)local_a8;
        if (cVar2 == '\0') goto LAB_01386e51;
        local_98 = (double)CONCAT44(local_98._4_4_,1);
        bVar22 = false;
      }
      else {
        local_70 = (uint64_t *)((uint64_t)local_70 & 0xffffffff00000000);
        puVar16 = local_60;
LAB_01386e1f:
        local_68 = (uint64_t *)CONCAT71((int7)((uint64_t)puVar16 >> 8),1);
        if (((*(int64_t *)(this_ptr + 0x1f8) == 0) && (*(int64_t *)(this_ptr + 0x200) == 0)) &&
           (*(int64_t *)(this_ptr + 0x148) != 0)) {
          pvVar5 = _pthread_getspecific((void*)puVar11);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar4 = FUN_0141bab0();
          local_50 = (uint64_t *)((double)local_78 + g_0240dea8);
          if (iVar4 != 2) {
            local_50 = local_78;
          }
          local_58 = (uint64_t *)0x0;
        }
        else {
          local_58 = (uint64_t *)0x0;
          local_50 = local_78;
        }
LAB_01386e51:
        puVar11 = *(uint64_t **)(this_ptr + 0x40);
        local_98 = (double)CONCAT44(local_98._4_4_,
                                    (int)CONCAT71((int7)((uint64_t)this_ptr >> 8),1));
        if (0 < *(int *)((int64_t)puVar11 + 0xc)) {
          lVar6 = 0;
          do {
            lVar14 = *(int64_t *)(puVar11[2] + lVar6 * 8);
            if (lVar14 != 0) {
              FUN_00d50b00();
            }
            pvVar5 = _pthread_getspecific((void*)puVar11);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013de560();
            puVar16 = local_48;
            if (((local_40 == '\0') && (local_48 != (uint64_t *)0x0)) &&
               ((FUN_00d50b00(), local_40 != '\0' && (local_48 != (uint64_t *)0x0)))) {
              FUN_00d50b20();
            }
            pvVar5 = _pthread_getspecific((void*)puVar11);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar2 = FUN_014bc070();
            if (cVar2 == '\0') {
              pvVar5 = _pthread_getspecific((void*)puVar11);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar23 = (double)FUN_013de8d0();
              if (dVar23 < (double)local_50) {
                pvVar5 = _pthread_getspecific((void*)puVar11);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar23 = (double)FUN_013dea30();
                if ((double)local_50 < dVar23) {
                  pvVar5 = _pthread_getspecific((void*)puVar11);
                  if (pvVar5 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  dVar23 = (double)FUN_013de8d0();
                  if ((double)local_50 - dVar23 <= (double)local_a0) {
                    if (puVar16 != (uint64_t *)0x0) {
                      FUN_00d50b20();
                    }
                    if (lVar14 != 0) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    pvVar5 = _pthread_getspecific((void*)puVar11);
                    if (pvVar5 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    dVar23 = (double)FUN_013dea30();
                    if ((double)local_a0 < dVar23 - (double)local_50) {
                      bVar22 = lVar14 != 0;
                      if (bVar22) {
                        FUN_00d50b00();
                      }
                      if (puVar16 != (uint64_t *)0x0) {
                        FUN_00d50b20();
                      }
                      if ((lVar14 != 0) && (FUN_00d50b20(), lVar14 != 0)) {
                        local_158 = 0;
                        puVar11 = (uint64_t *)(int64_t)((double)local_50 * local_120);
                        local_160 = lVar14;
                        FUN_0135f200(puVar11,&local_160,local_e8,&local_79);
                        puVar16 = local_48;
                        if ((local_40 == '\0') && (local_48 != (uint64_t *)0x0)) {
                          FUN_00d50b00();
                        }
                        local_50 = puVar16;
                        if (((*(int64_t *)(this_ptr + 0x1f8) == 0) &&
                            (*(int64_t *)(this_ptr + 0x200) == 0)) &&
                           (*(int64_t *)(this_ptr + 0x148) != 0)) {
                          pvVar5 = _pthread_getspecific((void*)puVar11);
                          if (pvVar5 != (void *)0x0) {
                            FUN_00e8b990();
                          }
                          iVar4 = FUN_0141bab0();
                          if (iVar4 == 2) {
                            if ((char)local_68 == '\0') {
                              local_48 = local_58;
                              local_40 = '\0';
                              cVar2 = FUN_00d24090();
                              if ((local_40 != '\0') && (local_48 != (uint64_t *)0x0)) {
                                FUN_00d50b20();
                              }
                              if (cVar2 != '\0') {
                                local_150 = local_58;
                                local_148 = 0;
                                FUN_0135de20();
                              }
                              local_48 = local_58;
                              local_40 = '\0';
                              FUN_00d235a0();
                              puVar15 = local_90;
                              if ((local_40 != '\0') && (local_48 != (uint64_t *)0x0)) {
                                FUN_00d50b20();
                                puVar15 = local_90;
                              }
                            }
                            else {
                              FUN_01365ec0(local_78,g_0240f0f8,g_024113a8);
                              puVar16 = local_48;
                              if ((local_40 == '\0') && (local_48 != (uint64_t *)0x0)) {
                                FUN_00d50b00();
                              }
                              local_40 = '\0';
                              local_48 = puVar16;
                              FUN_00d235a0();
                              if ((local_40 != '\0') && (local_48 != (uint64_t *)0x0)) {
                                FUN_00d50b20();
                              }
                              puVar15 = local_90;
                              if (puVar16 != (uint64_t *)0x0) {
                                FUN_00d50b20();
                              }
                            }
                          }
                        }
                        local_100 = local_b8;
                        local_f8 = '\0';
                        FUN_015b4ee0();
                        if ((local_f8 != '\0') && (local_100 != (void*)0x0)) {
                          FUN_00d50b20();
                        }
                        local_40 = '\0';
                        local_48 = (uint64_t *)lVar14;
                        FUN_00d21140();
                        if ((local_40 != '\0') && (local_48 != (uint64_t *)0x0)) {
                          FUN_00d50b20();
                        }
                        local_48 = local_50;
                        local_40 = '\0';
                        FUN_00d21140();
                        if ((local_40 != '\0') && (local_48 != (uint64_t *)0x0)) {
                          FUN_00d50b20();
                        }
                        if (local_50 != (uint64_t *)0x0) {
                          FUN_00d50b20();
                        }
                        local_98 = (double)((uint64_t)local_98 & 0xffffffff00000000);
                      }
                      goto LAB_01387185;
                    }
                    if (puVar16 != (uint64_t *)0x0) {
                      FUN_00d50b20();
                    }
                    if (lVar14 != 0) {
                      FUN_00d50b20();
                    }
                  }
                  break;
                }
              }
            }
            if (puVar16 != (uint64_t *)0x0) {
              FUN_00d50b20();
            }
            if (lVar14 != 0) {
              FUN_00d50b20();
            }
            lVar6 = lVar6 + 1;
            puVar11 = *(uint64_t **)(this_ptr + 0x40);
          } while (lVar6 < *(int *)((int64_t)puVar11 + 0xc));
        }
        bVar22 = false;
      }
LAB_01387185:
      FUN_00e7b820();
      if (bVar22 && local_98._0_1_ == '\0') {
        FUN_00d50b20();
      }
      if ((char)local_70 != '\0' && (char)local_68 == '\0') {
        FUN_00d50b20();
      }
      pVar10 = (void*)puVar11;
      if ((local_c8._4_4_ == 0) || (local_128._4_4_ == 0)) break;
    }
  }
  if ((*(int64_t *)(this_ptr + 0x1f8) == 0) &&
     ((*(int64_t *)(this_ptr + 0x200) == 0 && (*(int64_t *)(this_ptr + 0x148) != 0)))) {
    pvVar5 = _pthread_getspecific(pVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_0141bab0();
    uVar9 = extraout_XMM0_Qa_02;
    if (iVar3 != 3) goto LAB_01387505;
  }
  else {
LAB_01387505:
    cVar2 = FUN_01334f30();
    uVar9 = extraout_XMM0_Qa_01;
    if (cVar2 == '\0') goto LAB_01387549;
  }
  if (0xe < *(int *)(local_b8 + 3) + 7U) {
    local_140 = local_b8;
    local_138 = 0;
    FUN_01353f80(uVar9,&local_140);
  }
LAB_01387549:
  if (*local_130 != 0) {
    FUN_00d216c0();
  }
  if (local_60 != (uint64_t *)0x0) {
    FUN_00d50b20();
  }
  if (puVar15 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_c0 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_b0 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_b8 != (void*)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

