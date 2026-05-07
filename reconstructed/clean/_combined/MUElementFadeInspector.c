// ===================================================================
// MUElementFadeInspector — Complete reconstructed pseudocode
// 4 functions
// ===================================================================


// ============================================================
// 01c12c10
// ============================================================
// Function: FUN_01c12c10
// Address: 01c12c10
// Size: 3736 bytes
// Class: MUElementFadeInspector

uint64_t FUN_01c12c10(uint64_t param_1,uint64_t *param_2)

{
  uint *puVar1;
  bool bVar2;
  double dVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  void *pvVar11;
  int64_t lVar12;
  uint64_t *puVar13;
  byte bVar14;
  void* pVar15;
  uint *puVar16;
  uint64_t uVar17;
  uint64_t unaff_RBX;
  undefined7 uVar18;
  uint64_t *arg1;
  int64_t *plVar19;
  bool bVar20;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t uVar21;
  uint32_t extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float fVar22;
  float fVar23;
  double dVar24;
  float fVar25;
  uint64_t local_200;
  uint8_t local_1f8;
  uint8_t local_1e8;
  uint64_t local_1e0;
  uint8_t local_1d8;
  uint8_t local_1c8;
  uint64_t local_1c0;
  uint8_t local_1b8;
  uint8_t local_1a8;
  uint64_t local_1a0;
  uint8_t local_198;
  uint8_t local_188;
  uint64_t local_180;
  uint8_t local_178;
  uint8_t local_168;
  uint64_t local_160;
  uint8_t local_158;
  uint8_t local_148;
  uint64_t local_140;
  uint8_t local_138;
  int64_t *local_130;
  char local_128;
  double local_120;
  uint64_t local_118;
  char local_110;
  uint64_t local_108;
  char local_100;
  uint64_t local_f8;
  char local_f0;
  uint64_t local_e8;
  char local_e0;
  uint local_d8;
  uint local_d4;
  int64_t local_d0;
  char local_c8;
  uint32_t local_c0;
  uint local_bc;
  int64_t local_b8;
  char local_b0;
  double local_a8;
  int64_t *local_a0;
  uint64_t local_98;
  uint64_t local_88;
  uint *local_58;
  int64_t *local_50;
  char local_48;
  
  plVar5 = local_50;
  if (*param_2 == 0) {
    uVar17 = 0;
    goto LAB_01c13a94;
  }
  FUN_01a58dc0();
  if (local_50 == (int64_t *)0x0) {
    local_c0 = (uint32_t)CONCAT71((int7)((uint64_t)unaff_RBX >> 8),1);
    plVar19 = (int64_t *)0x0;
  }
  else {
    plVar19 = local_50;
    if (local_48 == '\0') {
      FUN_00d50b00();
      local_c0 = 0;
    }
    else {
      local_c0 = 0;
    }
  }
  (**(code **)(*plVar19 + 0x7b0))();
  local_a0 = local_50;
  if ((local_48 == '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  cVar6 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" + *plVar19)
          )();
  if (cVar6 == '\0') {
    uVar17 = 0;
  }
  else {
    iVar9 = FUN_01d3a5a0();
    uVar21 = extraout_XMM0_Da;
    if ((iVar9 == 1) && (iVar9 = FUN_01d3b630(), uVar21 = extraout_XMM0_Da_00, iVar9 == 1)) {
      FUN_01a58dc0();
      (**(code **)(*local_130 + 0xe10))();
      local_b8 = local_d0;
      local_b0 = 0;
      if (local_c8 == '\0') {
        if (local_d0 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_c8 = '\0';
      }
      local_b0 = '\x01';
      FUN_00243390();
      if ((local_48 == '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_128 != '\0') && (local_130 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_50 = (int64_t *)*param_2;
      cVar6 = FUN_00d23d70();
      if (cVar6 == '\0') {
        local_50 = (int64_t *)*param_2;
        FUN_00d23370(extraout_XMM0_Da_01,0);
      }
      FUN_01d3abf0();
      local_98 = (double)FUN_01e466c0();
      pvVar11 = _pthread_getspecific((void*)param_1);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_120 = (double)FUN_0125a280();
      pvVar11 = _pthread_getspecific((void*)param_1);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_a8 = (double)FUN_01264170();
      local_88 = (double)(**(code **)(*plVar19 + 0x930))((float)local_98);
      dVar24 = (double)(**(code **)(*plVar19 + 0x930))((float)local_98);
      pvVar11 = _pthread_getspecific((void*)param_1);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      bVar7 = FUN_012686a0();
      uVar17 = *param_2;
      pvVar11 = _pthread_getspecific((void*)param_1);
      if (pvVar11 != (void *)0x0) {
        uVar17 = *param_2;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          uVar17 = *(uint64_t *)(uVar17 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      bVar8 = FUN_012686d0();
      iVar9 = FUN_01d3b620();
      pVar15 = (void*)param_1;
      if (iVar9 == 2) {
        dVar24 = dVar24 - local_120;
        uVar18 = (undefined7)(uVar17 >> 8);
        if (bVar7 == 0 && bVar8 == 0) {
          if (dVar24 <= local_a8 * g_023942d0) {
            local_1e8 = 0;
            local_1e0 = *param_2;
            local_1d8 = 0;
            uVar17 = CONCAT71(uVar18,1);
            FUN_01c13e80(SUB84(local_88,0),&local_1e0);
          }
          else {
            local_200 = *param_2;
            local_1f8 = 0;
            uVar17 = CONCAT71(uVar18,1);
            FUN_01c13e80(SUB84(local_88,0),&local_200);
          }
        }
        else {
          fVar22 = (float)(**(code **)(*plVar19 + 0x938))();
          local_98 = (double)(**(code **)(*plVar19 + 0x930))(fVar22 + g_02390d30);
          local_98 = local_98 - dVar24;
          if (bVar7 == 0) {
            uVar17 = CONCAT71(uVar18,1);
            if (bVar8 != 0) {
LAB_01c1390d:
              uVar17 = *param_2;
              pvVar11 = _pthread_getspecific(pVar15);
              if (pvVar11 != (void *)0x0) {
                uVar17 = *param_2;
                lVar12 = FUN_00e8b990();
                if (lVar12 != 0) {
                  uVar17 = *(uint64_t *)
                            (uVar17 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
                }
              }
              dVar3 = (double)FUN_01268260();
              uVar18 = (undefined7)(uVar17 >> 8);
              if ((local_a8 - dVar3) - local_98 <= dVar24) {
                local_188 = 0;
                local_180 = *param_2;
                local_178 = 0;
                uVar17 = CONCAT71(uVar18,1);
                FUN_01c13e80(SUB84(local_88,0),&local_180);
              }
              else {
                uVar17 = CONCAT71(uVar18,1);
                if (bVar7 == 0) {
                  local_168 = 0;
                  local_160 = *param_2;
                  local_158 = 0;
                  FUN_01c13e80(SUB84(local_88,0),&local_160);
                }
              }
            }
          }
          else {
            uVar17 = *param_2;
            pvVar11 = _pthread_getspecific(pVar15);
            if (pvVar11 != (void *)0x0) {
              uVar17 = *param_2;
              lVar12 = FUN_00e8b990();
              if (lVar12 != 0) {
                uVar17 = *(uint64_t *)
                          (uVar17 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
              }
            }
            dVar3 = (double)FUN_01268240();
            uVar18 = (undefined7)(uVar17 >> 8);
            if (dVar24 <= dVar3 + local_98) {
              local_1c8 = 0;
              local_1c0 = *param_2;
              local_1b8 = 0;
              uVar17 = CONCAT71(uVar18,1);
              FUN_01c13e80(SUB84(local_88,0),&local_1c0);
            }
            else {
              if (bVar8 != 0) goto LAB_01c1390d;
              local_1a8 = 0;
              local_1a0 = *param_2;
              local_198 = 0;
              uVar17 = CONCAT71(uVar18,1);
              FUN_01c13e80(SUB84(local_88,0),&local_1a0);
            }
          }
        }
      }
      else {
        local_bc = 0;
        fVar22 = extraout_XMM0_Da_02;
        if (bVar8 != 0) {
          pvVar11 = _pthread_getspecific(pVar15);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar24 = (double)FUN_01259520();
          pvVar11 = _pthread_getspecific((void*)param_1);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar3 = (double)FUN_01268260();
          fVar22 = (float)(**(code **)(*plVar19 + 0x938))(SUB84(dVar24 - dVar3,0));
          fVar22 = fVar22 + g_023b8b2c;
          local_bc = (uint)(fVar22 <= (float)local_98);
        }
        bVar14 = bVar7 ^ 1 | local_bc != 0;
        pVar15 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),bVar14);
        if (bVar14 == 0) {
          pvVar11 = _pthread_getspecific(pVar15);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar24 = (double)FUN_0125a280();
          pvVar11 = _pthread_getspecific(pVar15);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar3 = (double)FUN_01268240();
          fVar22 = (float)(**(code **)(*plVar19 + 0x938))(SUB84(dVar24 + dVar3,0));
          fVar22 = fVar22 + g_02390d30;
          local_bc = (fVar22 < (float)local_98) - 1;
        }
        if ((local_bc == 0 & bVar8 & bVar7) == 1) {
          local_118 = *arg1;
          local_110 = '\0';
          local_108 = *param_2;
          local_100 = '\0';
          uVar10 = FUN_01a58d30(fVar22,&local_108);
          uVar17 = (uint64_t)uVar10;
          if ((local_100 != '\0') && (local_108 != 0)) {
            FUN_00d50b20();
          }
          if ((local_110 != '\0') && (local_118 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          FUN_01cf74c0();
          bVar20 = local_bc != 0;
          local_a8 = local_a8 * g_023942d0;
          local_d8 = ((int)local_bc >> 0x1f) + 6;
          puVar16 = (uint *)0x1;
          if (bVar7 != 0) {
            puVar16 = (uint *)(uint64_t)((uint)(bVar8 ^ 1) * 2);
          }
          local_d4 = (uint)puVar16;
          local_58 = (uint *)0x0;
switchD_01c1365e_caseD_3:
          (**(code **)(*plVar19 + 0x658))();
          uVar17 = *arg1;
          if ((int64_t *)uVar17 == local_50) {
            if (((char)arg1[1] == '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b00();
              goto LAB_01c13542;
            }
            uVar4 = *arg1;
          }
          else {
            uVar4 = arg1[1];
            if (local_50 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            *arg1 = (uint64_t)local_50;
            if (((char)uVar4 != '\0') && (uVar17 != 0)) {
              FUN_00d50b20();
            }
LAB_01c13542:
            *(void*)(arg1 + 1) = 1;
            uVar4 = *arg1;
          }
          if (uVar4 != 0) {
            uVar10 = FUN_01d3a5a0();
            uVar17 = (uint64_t)uVar10;
            if (uVar10 == 6) goto LAB_01c1389a;
            iVar9 = FUN_01d3a5a0();
            pVar15 = (void*)puVar16;
            if (iVar9 == 5) {
              FUN_01d3abf0();
              local_88 = (double)FUN_01e466c0();
              pvVar11 = _pthread_getspecific(pVar15);
              if (pvVar11 != (void *)0x0) {
                FUN_00e8b990();
              }
              puVar13 = (uint64_t *)FUN_00e8b990();
              puVar16 = (uint *)*puVar13;
              cVar6 = (**(code **)(puVar16 + 0xf0))();
              if (cVar6 != '\0') {
                pvVar11 = _pthread_getspecific((void*)puVar16);
                if (pvVar11 != (void *)0x0) {
                  FUN_00e8b990();
                }
                puVar13 = (uint64_t *)FUN_00e8b990();
                puVar16 = (uint *)*puVar13;
                (**(code **)(puVar16 + 0xee))();
              }
              bVar2 = (uint)local_58 < 9;
              if (bVar2) {
                puVar16 = &switchD_01c1365e::switchdataD_01c13e54;
                puVar1 = &switchD_01c1365e::switchdataD_01c13e54 + (int64_t)local_58;
                switch(local_58) {
                case (uint *)0x0:
                  fVar22 = (float)((uint)((float)local_88 - (float)local_98) & g_02390140);
                  fVar25 = (float)((uint)(local_88._4_4_ - local_98._4_4_) & (uint)UNK_02390144);
                  local_58 = (uint *)0x0;
                  if (fVar25 < fVar22) {
                    fVar23 = (float)((uint)(fVar22 - fVar25) & g_02390140);
                    if (g_02390124 < fVar23) {
                      local_98 = local_88;
                    }
                    uVar10 = local_d8;
                    if (fVar23 <= g_02390124) {
                      uVar10 = 0;
                    }
                    uVar17 = CONCAT71((int7)((uint64_t)
                                             ((int64_t)&switchD_01c1365e::switchdataD_01c13e54 +
                                             (int64_t)(int)*puVar1) >> 8),
                                      fVar23 <= g_02390124 || bVar20) & 0xffffffff;
                    bVar14 = (byte)uVar17 | bVar7 | bVar8;
                    puVar16 = (uint *)CONCAT71((int7)(uVar17 >> 8),bVar14);
                    if (fVar23 > g_02390124 && !bVar20) {
                      uVar10 = local_d4;
                    }
                    local_58 = (uint *)(uint64_t)uVar10;
                    if (bVar14 == 0) {
                      dVar24 = (double)(**(code **)(*plVar19 + 0x930))((float)local_88);
                      local_58 = (uint *)(uint64_t)((local_a8 < dVar24 - local_120) + 1);
                      local_98 = local_88;
                    }
                  }
                  if ((fVar22 < fVar25) &&
                     (g_02390124 < (float)((uint)(fVar22 - fVar25) & g_02390140))) {
                    if (local_bc != 0) {
                      local_58._0_4_ = 8;
                    }
                    puVar16 = (uint *)(uint64_t)(uint)local_58;
                    if ((int)local_bc < 0) {
                      puVar16 = (uint *)0x7;
                    }
                    local_98 = local_88;
                    local_58 = puVar16;
                  }
                  goto switchD_01c1365e_caseD_3;
                default:
                  dVar24 = (double)(**(code **)(*plVar19 + 0x930))((float)local_88);
                  break;
                case (uint *)0x3:
                case (uint *)0x4:
                  goto switchD_01c1365e_caseD_3;
                case (uint *)0x5:
                  dVar24 = (double)(**(code **)(*plVar19 + 0x930))((float)local_98);
                  uVar21 = (float)local_88;
                  local_88 = dVar24;
                  dVar24 = (double)(**(code **)(*plVar19 + 0x930))(uVar21);
                  goto LAB_01c13709;
                case (uint *)0x6:
                  local_88 = (double)(**(code **)(*plVar19 + 0x930))((float)local_88);
                  dVar24 = (double)(**(code **)(*plVar19 + 0x930))((float)local_98);
LAB_01c13709:
                  dVar24 = local_88 - dVar24;
                  break;
                case (uint *)0x7:
                case (uint *)0x8:
                  fVar22 = (float)(**(code **)(*plVar19 + 3000))();
                  dVar24 = (double)((local_98._4_4_ - local_88._4_4_) * fVar22) * g_023934c8;
                }
                if ((dVar24 != g_02390448) || (NAN(dVar24) || NAN(g_02390448))) {
                  local_148 = 0;
                  local_140 = *param_2;
                  local_138 = 0;
                  puVar16 = local_58;
                  FUN_01c13e80(SUB84(dVar24,0),&local_140);
                }
              }
            }
            goto switchD_01c1365e_caseD_3;
          }
LAB_01c1389a:
          uVar17 = CONCAT71((int7)(uVar17 >> 8),1);
          FUN_01cf74c0();
        }
      }
      if (plVar5 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      local_f8 = *arg1;
      local_f0 = '\0';
      local_e8 = *param_2;
      local_e0 = '\0';
      uVar10 = FUN_01a58d30(uVar21,&local_e8);
      uVar17 = (uint64_t)uVar10;
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  if (local_a0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_c0 == '\0') {
    FUN_00d50b20();
  }
LAB_01c13a94:
  return uVar17 & 0xffffffff;
}



// ============================================================
// 01c13e80
// ============================================================
// Function: FUN_01c13e80
// Address: 01c13e80
// Size: 3595 bytes
// Class: MUElementFadeInspector

void FUN_01c13e80(double param_1,int64_t *param_2)

{
  uint *puVar1;
  int64_t lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  void*puVar6;
  void *pvVar7;
  uint64_t uVar8;
  int64_t lVar9;
  uint32_t in_ECX;
  void*puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  int64_t lVar14;
  int64_t lVar15;
  int64_t *arg1;
  int64_t lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  uint *local_b0;
  char local_a8;
  int64_t local_68;
  char local_60;
  double local_40;
  
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar10 = &g_02572358;
  *puVar6 = &g_02572358;
  (*g_02572370)();
  pvVar7 = _pthread_getspecific((void*)puVar10);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar8 = FUN_01274b60();
  if (local_a8 == '\0') {
    if (local_b0 == (uint *)0x0) goto LAB_01c13f54;
    FUN_00d50b00();
  }
  else if (local_b0 == (uint *)0x0) {
LAB_01c13f54:
    puVar1 = (uint *)*param_2;
    if (puVar1 != (uint *)0x0) {
      puVar11 = (uint *)(CONCAT71((int7)((uint64_t)uVar8 >> 8),(char)param_2[1]) & 0xffffffff);
      if ((char)param_2[1] != '\0') {
        FUN_00d50b00();
      }
      lVar2 = *arg1;
      goto joined_r0x01c13f9b;
    }
  }
  puVar11 = (uint *)CONCAT71((int7)((uint64_t)puVar10 >> 8),1);
  lVar2 = *arg1;
  puVar1 = local_b0;
joined_r0x01c13f9b:
  if (lVar2 == 0) {
    bVar3 = false;
    lVar15 = 0;
  }
  else {
    if (*(int *)(lVar2 + 0xc) < 1) {
      bVar3 = false;
      lVar15 = 0;
    }
    else {
      lVar16 = 0;
      lVar15 = 0;
      bVar3 = false;
      puVar12 = puVar11;
      do {
        lVar9 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + lVar16 * 8);
        pvVar7 = _pthread_getspecific((void*)puVar12);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01274b60();
        if ((local_60 == '\0') && (local_68 != 0)) {
          FUN_00d50b00();
        }
        else if ((local_68 == 0) && (lVar9 != 0)) {
          FUN_00d50b00();
          local_68 = lVar9;
        }
        cVar5 = FUN_00d23d70();
        if (cVar5 == '\0') {
          FUN_00d21140();
          dVar17 = param_1;
          if (lVar9 != local_68) {
            pvVar7 = _pthread_getspecific((void*)puVar12);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            if (local_68 == lVar15) {
              lVar14 = lVar15;
              bVar4 = bVar3;
              if ((!bVar3) && (local_68 != 0)) {
                FUN_00d50b00();
                bVar4 = true;
              }
            }
            else {
              if (local_68 != 0) {
                FUN_00d50b00();
              }
              bVar4 = true;
              lVar14 = local_68;
              if ((bVar3) && (lVar15 != 0)) {
                FUN_00d50b20();
              }
            }
            bVar3 = bVar4;
            if (lVar14 == 0) {
              lVar15 = 0;
              goto switchD_01c14275_default;
            }
            pvVar7 = _pthread_getspecific((void*)puVar12);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar17 = (double)FUN_012f8e60(param_1);
            lVar15 = lVar14;
          }
          local_40 = param_1;
          if (puVar1 == (uint *)0x0) {
            puVar13 = &switchD_01c142ea::switchdataD_01c14ef4;
            dVar18 = g_023908c8;
            switch(in_ECX) {
            case 1:
              goto switchD_01c142ea_caseD_1;
            case 2:
              goto switchD_01c142ea_caseD_2;
            case 3:
              goto switchD_01c14275_caseD_3;
            case 4:
              goto switchD_01c14275_caseD_4;
            case 5:
              goto switchD_01c14275_caseD_5;
            case 6:
              goto switchD_01c14275_caseD_6;
            case 7:
              goto switchD_01c14275_caseD_7;
            case 8:
              goto switchD_01c14275_caseD_8;
            }
          }
          else {
            puVar13 = &switchD_01c14275::switchdataD_01c14ed4;
            switch(in_ECX) {
            case 1:
              pvVar7 = _pthread_getspecific(0x1c14ed4);
              if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                puVar13 = puVar1;
              }
              dVar19 = (double)FUN_0125a280();
              dVar18 = g_023908c8;
              if (dVar19 < dVar17) {
                pvVar7 = _pthread_getspecific((void*)puVar13);
                if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                  puVar13 = puVar1;
                }
                dVar18 = (double)FUN_0125a280();
                dVar18 = dVar17 - dVar18;
              }
switchD_01c142ea_caseD_1:
              pvVar7 = _pthread_getspecific((void*)puVar13);
              puVar12 = puVar13;
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
                puVar12 = puVar13;
              }
              FUN_01267350(dVar18);
              break;
            case 2:
              pvVar7 = _pthread_getspecific(0x1c14ed4);
              if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                puVar13 = puVar1;
              }
              dVar19 = (double)FUN_01259520();
              dVar18 = g_023908c8;
              if (dVar17 < dVar19) {
                pvVar7 = _pthread_getspecific((void*)puVar13);
                if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                  puVar13 = puVar1;
                }
                dVar18 = (double)FUN_01259520();
                dVar18 = dVar18 - dVar17;
              }
switchD_01c142ea_caseD_2:
              pvVar7 = _pthread_getspecific((void*)puVar13);
              puVar12 = puVar13;
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
                puVar12 = puVar13;
              }
              FUN_01267b80(dVar18);
              break;
            case 3:
switchD_01c14275_caseD_3:
              puVar12 = puVar13;
              pvVar7 = _pthread_getspecific((void*)puVar12);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01267400(g_023908c8);
              break;
            case 4:
switchD_01c14275_caseD_4:
              puVar12 = puVar13;
              pvVar7 = _pthread_getspecific((void*)puVar12);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01267c40(g_023908c8);
              break;
            case 5:
switchD_01c14275_caseD_5:
              puVar12 = puVar13;
              pvVar7 = _pthread_getspecific((void*)puVar12);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              cVar5 = FUN_012686a0();
              if (cVar5 != '\0') {
                if (lVar9 != local_68) {
                  pvVar7 = _pthread_getspecific((void*)puVar12);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  dVar17 = (double)FUN_0125a280();
                  pvVar7 = _pthread_getspecific((void*)puVar12);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  dVar18 = (double)FUN_01268240();
                  pvVar7 = _pthread_getspecific((void*)puVar12);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  dVar19 = (double)FUN_012f8e60();
                  pvVar7 = _pthread_getspecific((void*)puVar12);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_40 = (double)FUN_012f8e60(dVar17 + dVar18 + param_1);
                  local_40 = local_40 - dVar19;
                }
                pvVar7 = _pthread_getspecific((void*)puVar12);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar17 = (double)FUN_01268240();
                pvVar7 = _pthread_getspecific((void*)puVar12);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar18 = (double)FUN_0125a280();
                pvVar7 = _pthread_getspecific((void*)puVar12);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01267400((dVar17 + dVar18) - local_40);
              }
              break;
            case 6:
switchD_01c14275_caseD_6:
              puVar12 = puVar13;
              pvVar7 = _pthread_getspecific((void*)puVar12);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              cVar5 = FUN_012686d0();
              if (cVar5 != '\0') {
                if (lVar9 != local_68) {
                  pvVar7 = _pthread_getspecific((void*)puVar12);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  dVar17 = (double)FUN_01259520();
                  pvVar7 = _pthread_getspecific((void*)puVar12);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  dVar18 = (double)FUN_01268260();
                  pvVar7 = _pthread_getspecific((void*)puVar12);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  dVar19 = (double)FUN_012f8e60();
                  pvVar7 = _pthread_getspecific((void*)puVar12);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_40 = (double)FUN_012f8e60((dVar17 - dVar18) + param_1);
                  local_40 = local_40 - dVar19;
                }
                pvVar7 = _pthread_getspecific((void*)puVar12);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar17 = (double)FUN_01268260();
                pvVar7 = _pthread_getspecific((void*)puVar12);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar18 = (double)FUN_01259520();
                pvVar7 = _pthread_getspecific((void*)puVar12);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01267c40(local_40 + (dVar18 - dVar17));
              }
              break;
            case 7:
switchD_01c14275_caseD_7:
              puVar12 = puVar13;
              pvVar7 = _pthread_getspecific((void*)puVar12);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              cVar5 = FUN_012686a0();
              if (cVar5 != '\0') {
                pvVar7 = _pthread_getspecific((void*)puVar12);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01266180();
                dVar17 = (double)_log();
                dVar18 = dVar17 / g_0241e5a8 - param_1;
                dVar17 = g_023b3bc0;
                if (dVar18 <= g_023b3bc0) {
                  dVar17 = dVar18;
                }
                dVar18 = g_0241e5b0;
                if (g_0241e5b0 <= dVar17) {
                  dVar18 = dVar17;
                }
                uVar8 = _exp2(dVar18);
                pvVar7 = _pthread_getspecific((void*)puVar12);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01266120(uVar8);
              }
              break;
            case 8:
switchD_01c14275_caseD_8:
              puVar12 = puVar13;
              pvVar7 = _pthread_getspecific((void*)puVar12);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              cVar5 = FUN_012686d0();
              if (cVar5 != '\0') {
                pvVar7 = _pthread_getspecific((void*)puVar12);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012661f0();
                dVar17 = (double)_log();
                dVar18 = dVar17 / g_0241e5a8 - param_1;
                dVar17 = g_023b3bc0;
                if (dVar18 <= g_023b3bc0) {
                  dVar17 = dVar18;
                }
                dVar18 = g_0241e5b0;
                if (g_0241e5b0 <= dVar17) {
                  dVar18 = dVar17;
                }
                uVar8 = _exp2(dVar18);
                pvVar7 = _pthread_getspecific((void*)puVar12);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01266190(uVar8);
              }
            }
          }
        }
switchD_01c14275_default:
        local_60 = '\0';
        if (local_68 != 0) {
          FUN_00d50b20();
        }
        lVar16 = lVar16 + 1;
      } while ((int)lVar16 < *(int *)(lVar2 + 0xc));
    }
    FUN_001159b0();
  }
  if (((char)puVar11 != '\0') && (puVar1 != (uint *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (lVar15 != 0)) {
    FUN_00d50b20();
  }
  if (puVar6 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01c128c0
// ============================================================
// Function: FUN_01c128c0
// Address: 01c128c0
// Size: 505 bytes
// Class: MUElementFadeInspector

void FUN_01c128c0(void)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *this_ptr;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  
  FUN_00d50100();
  if ((g_028b6300 == 0) || (g_028b6309 == '\0')) {
    FUN_00e8cb50();
    lVar3 = g_027e8dd8;
    if (g_028b6300 == 0) {
      if (g_027e8dd8 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_01d20ca0(g_023b1900);
      lVar2 = g_028b6300;
      if (g_028b6300 != local_48) {
        if (local_40 == '\0') {
          if (local_48 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_48;
          }
        }
        else {
          local_40 = '\0';
          lVar2 = local_48;
        }
        bVar1 = g_028b6300 != 0;
        g_028b6300 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_48;
        }
      }
      if ((lVar2 != 0) && (g_028b6308 == '\0')) {
        g_028b6308 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_48;
      }
      if ((local_40 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      g_028b6309 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b6309 = '\x01';
      FUN_00e8cb70();
    }
    if (g_028b6300 == 0) {
      lVar3 = 0;
      goto LAB_01c12a79;
    }
  }
  lVar3 = g_028b6300;
  FUN_00d50b00();
LAB_01c12a79:
  (**(code **)(*this_ptr + 0x390))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01c12550
// ============================================================
// Function: FUN_01c12550
// Address: 01c12550
// Size: 583 bytes
// Class: MUElementFadeInspector
// String references:
//   "MUElementFadeInspector"

void FUN_01c12550(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_130;
  int64_t local_128;
  int64_t local_120;
  
  if ((g_027e8ea8 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_027e8df8 = FUN_00335590();
    g_027e8de0 = "MUElementFadeInspector";
    g_027e8de8 = 0xf0;
    g_027e8df0 = FUN_01c15170;
    g_027e8e00 = 0;
    ram_00000000027e8e08 = 0;
    g_027e8e10 = 0;
    g_027e8e88 = 0;
    ram_00000000027e8e90 = 0;
    g_027e8e98 = 0;
    g_027e8e9a = 1;
    g_027e8e18 = 0;
    ram_00000000027e8e20 = 0;
    g_027e8e28 = 0;
    ram_00000000027e8e30 = 0;
    g_027e8e38 = 0;
    ram_00000000027e8e40 = 0;
    g_027e8e48 = 0;
    ram_00000000027e8e50 = 0;
    g_027e8e58 = 0;
    ram_00000000027e8e60 = 0;
    g_027e8e68 = 0;
    ram_00000000027e8e70 = 0;
    g_027e8e78 = 0;
    ram_00000000027e8e80 = 0;
    g_027e8ea3 = 0;
    g_027e8e9b = 0;
    ___cxa_guard_release();
  }
  if (g_027e8e9b == '\0') {
    FUN_00827f80();
    FUN_00e87760();
    FUN_00018440();
    FUN_00d50c00();
    FUN_01c151f0();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_01928ae0();
    FUN_00e87920(uVar2,0);
    if (local_120 != 0) {
      FUN_00d50b20();
    }
    if (local_128 != 0) {
      FUN_00d50b20();
    }
    if (local_130 != 0) {
      FUN_00d50b20();
    }
    FUN_000a2890();
    FUN_000a2890();
  }
  return;
}

