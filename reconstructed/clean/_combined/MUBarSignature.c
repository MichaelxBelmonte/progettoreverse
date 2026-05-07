// ===================================================================
// MUBarSignature — Complete reconstructed pseudocode
// 14 functions
// ===================================================================


// ============================================================
// 0178c910
// ============================================================
// Function: FUN_0178c910
// Address: 0178c910
// Size: 12994 bytes
// Class: MUBarSignature

void* FUN_0178c910(uint64_t param_1,int64_t *param_2,code *param_3,void *param_4)

{
  uint8_t auVar1 [16];
  byte bVar2;
  uint8_t (*pauVar3) [16];
  void*puVar4;
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  void *pvVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  void*puVar23;
  void *pvVar24;
  int64_t lVar25;
  int extraout_var;
  int64_t lVar26;
  int64_t *plVar27;
  uint64_t uVar28;
  int64_t *plVar29;
  code **ppcVar30;
  int64_t *plVar31;
  code **ppcVar32;
  char cVar33;
  uint uVar34;
  uint uVar35;
  void* pVar36;
  uint64_t uVar37;
  int iVar38;
  int64_t *plVar39;
  int64_t *plVar40;
  bool bVar41;
  int iVar42;
  int64_t arg1;
  void*this_ptr;
  char cVar43;
  int64_t unaff_R12;
  int64_t lVar44;
  uint64_t uVar45;
  uint uVar46;
  int iVar47;
  bool bVar48;
  float fVar49;
  double dVar50;
  uint64_t uVar51;
  uint8_t auVar52 [16];
  uint8_t auVar53 [16];
  float fVar54;
  int *in_stack_fffffffffffffe98;
  int local_c0;
  int local_bc;
  int local_b8;
  int64_t *local_a8;
  int local_94;
  int64_t *local_90;
  code *local_88;
  void *local_80;
  uint64_t local_78;
  int local_70;
  uint64_t local_68;
  uint64_t local_60;
  double local_40;
  char local_38 [8];
  
  FUN_00c8e690();
  plVar7 = local_90;
  if (((char)local_88 == '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b00();
    if (((char)local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  puVar23 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar36 = 0x25683c0;
  *puVar23 = &g_025683c0;
  (*g_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  lVar44 = *(int64_t *)(arg1 + 0x10);
  if (lVar44 != 0) {
    FUN_00d50b00();
  }
  pvVar24 = _pthread_getspecific(pVar36);
  if ((pvVar24 == (void *)0x0) || (lVar25 = FUN_00e8b990(), lVar25 == 0)) {
    cVar33 = *(char *)(lVar44 + 0x38);
  }
  else {
    cVar33 = *(char *)(*(int64_t *)(lVar44 + 0x20 + (uint64_t)(*(uint *)(lVar25 + 0x154) & 1) * 8)
                      + 0x38);
  }
  if (lVar44 != 0) {
    FUN_00d50b20();
  }
  if (cVar33 == '\0') {
LAB_0178ccd4:
    fVar49 = g_02390124;
    pvVar24 = *(void **)(arg1 + 0x48);
    pvVar10 = local_80;
    if (pvVar24 == (void *)0x0) {
      iVar42 = 0;
      bVar41 = false;
      uVar37 = 0;
      local_80 = *(void **)(arg1 + 0x50);
joined_r0x0178cdc0:
      if (local_80 != (void *)0x0) {
        local_88 = ((uint64_t)local_88 & 0xffffffffffffff00);
        local_90 = (int64_t *)0x0;
        local_78 = 0xffffffff;
        local_70 = 0;
        local_94 = 0x80;
        local_78._4_4_ = 0;
        uVar46 = 0;
        local_68 = uVar37;
        while( true ) {
          if (local_78._4_4_ != 0) {
            if ((int)local_78._4_4_ < 1) {
              iVar47 = -local_78._4_4_;
            }
            else {
              iVar47 = (int)local_78 - local_78._4_4_;
              local_78 = CONCAT44(local_78._4_4_,iVar47);
              FUN_00d23690();
              local_70 = local_70 + local_78._4_4_;
              iVar47 = 0;
            }
            local_78 = CONCAT44(iVar47,(int)local_78);
          }
          lVar44 = (int64_t)(int)local_78;
          iVar47 = (int)local_78 + 1;
          local_78 = CONCAT44(local_78._4_4_,iVar47);
          if (*(int *)((int64_t)local_80 + 0xc) <= iVar47) break;
          lVar25 = *(int64_t *)((int64_t)local_80 + 0x10);
          local_90 = *(int64_t **)(lVar25 + 8 + lVar44 * 8);
          pvVar24 = _pthread_getspecific((void*)lVar25);
          pVar36 = (void*)lVar25;
          if (pvVar24 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar47 = FUN_01508300();
          if (((byte)uVar37 & iVar47 == iVar42) == 0) {
            lVar44 = *(int64_t *)(arg1 + 0x10);
            if (lVar44 != 0) {
              FUN_00d50b00();
            }
            pvVar24 = _pthread_getspecific(pVar36);
            if ((pvVar24 == (void *)0x0) || (lVar25 = FUN_00e8b990(), lVar25 == 0)) {
              if (*(char *)(lVar44 + 0x4e) == '\0') goto LAB_0178cf49;
LAB_0178cf69:
              lVar25 = *(int64_t *)(arg1 + 0x10);
              if (lVar25 != 0) {
                FUN_00d50b00();
              }
              pvVar24 = _pthread_getspecific(pVar36);
              if ((pvVar24 == (void *)0x0) || (lVar26 = FUN_00e8b990(), lVar26 == 0)) {
                lVar26 = *(int64_t *)(lVar25 + 0x60);
              }
              else {
                lVar26 = *(int64_t *)
                          (*(int64_t *)
                            (lVar25 + 0x20 + (uint64_t)(*(uint *)(lVar26 + 0x154) & 1) * 8) + 0x60)
                ;
              }
              bVar48 = lVar26 != 0;
              if (lVar25 != 0) {
                FUN_00d50b20();
              }
            }
            else {
              if (*(char *)(*(int64_t *)
                             (lVar44 + 0x20 + (uint64_t)(*(uint *)(lVar25 + 0x154) & 1) * 8) + 0x4e
                           ) != '\0') goto LAB_0178cf69;
LAB_0178cf49:
              bVar48 = false;
            }
            if (lVar44 != 0) {
              FUN_00d50b20();
            }
            local_40 = g_0238fee8;
            if (bVar48) {
              pvVar24 = _pthread_getspecific(pVar36);
              if (pvVar24 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01508650();
              lVar44 = *(int64_t *)(arg1 + 0x10);
              if (lVar44 != 0) {
                FUN_00d50b00();
              }
              pvVar24 = _pthread_getspecific(pVar36);
              lVar25 = lVar44;
              if ((pvVar24 != (void *)0x0) && (lVar26 = FUN_00e8b990(), lVar26 != 0)) {
                lVar25 = *(int64_t *)
                          (lVar44 + 0x20 + (uint64_t)(*(uint *)(lVar26 + 0x154) & 1) * 8);
              }
              plVar39 = *(int64_t **)(lVar25 + 0x60);
              pvVar24 = _pthread_getspecific(pVar36);
              if (pvVar24 != (void *)0x0) {
                plVar39 = *(int64_t **)(lVar25 + 0x60);
                lVar25 = FUN_00e8b990();
                if (lVar25 != 0) {
                  plVar39 = (int64_t *)plVar39[(uint64_t)(*(uint *)(lVar25 + 0x154) & 1) + 4];
                }
              }
              local_40 = (double)(**(code **)(*plVar39 + 0x380))
                                           (g_0238fee8 - g_0238fee8 / (double)extraout_var);
              if (lVar44 != 0) {
                FUN_00d50b20();
              }
            }
            lVar44 = *(int64_t *)(arg1 + 0x10);
            if (lVar44 != 0) {
              FUN_00d50b00();
            }
            pvVar24 = _pthread_getspecific(pVar36);
            if ((pvVar24 == (void *)0x0) || (lVar25 = FUN_00e8b990(), lVar25 == 0)) {
              if (*(char *)(lVar44 + 0x4f) == '\0') goto LAB_0178d147;
LAB_0178d159:
              lVar25 = *(int64_t *)(arg1 + 0x10);
              if (lVar25 != 0) {
                FUN_00d50b00();
              }
              pvVar24 = _pthread_getspecific(pVar36);
              if ((pvVar24 == (void *)0x0) || (lVar26 = FUN_00e8b990(), lVar26 == 0)) {
                lVar26 = *(int64_t *)(lVar25 + 0x68);
              }
              else {
                lVar26 = *(int64_t *)
                          (*(int64_t *)
                            (lVar25 + 0x20 + (uint64_t)(*(uint *)(lVar26 + 0x154) & 1) * 8) + 0x68)
                ;
              }
              bVar48 = lVar26 != 0;
              if (lVar25 != 0) {
                FUN_00d50b20();
              }
            }
            else {
              if (*(char *)(*(int64_t *)
                             (lVar44 + 0x20 + (uint64_t)(*(uint *)(lVar25 + 0x154) & 1) * 8) + 0x4f
                           ) != '\0') goto LAB_0178d159;
LAB_0178d147:
              bVar48 = false;
            }
            if (lVar44 != 0) {
              FUN_00d50b20();
            }
            if (bVar48) {
              pvVar24 = _pthread_getspecific(pVar36);
              if (pvVar24 != (void *)0x0) {
                FUN_00e8b990();
              }
              iVar38 = FUN_01508300();
              if (iVar38 < 0) {
                iVar38 = 0;
              }
              lVar44 = *(int64_t *)(arg1 + 0x10);
              if (lVar44 != 0) {
                FUN_00d50b00();
              }
              pvVar24 = _pthread_getspecific(pVar36);
              lVar25 = lVar44;
              if ((pvVar24 != (void *)0x0) && (lVar26 = FUN_00e8b990(), lVar26 != 0)) {
                lVar25 = *(int64_t *)
                          (lVar44 + 0x20 + (uint64_t)(*(uint *)(lVar26 + 0x154) & 1) * 8);
              }
              plVar39 = *(int64_t **)(lVar25 + 0x68);
              pvVar24 = _pthread_getspecific(pVar36);
              if (pvVar24 != (void *)0x0) {
                plVar39 = *(int64_t **)(lVar25 + 0x68);
                lVar25 = FUN_00e8b990();
                if (lVar25 != 0) {
                  plVar39 = (int64_t *)plVar39[(uint64_t)(*(uint *)(lVar25 + 0x154) & 1) + 4];
                }
              }
              dVar50 = g_024124f8;
              if ((double)iVar38 <= g_024124f8) {
                dVar50 = (double)iVar38;
              }
              dVar50 = (double)(**(code **)(*plVar39 + 0x380))(dVar50);
              local_40 = local_40 * dVar50;
              if (lVar44 != 0) {
                FUN_00d50b20();
              }
            }
            lVar44 = *(int64_t *)(arg1 + 0x10);
            if (lVar44 != 0) {
              FUN_00d50b00();
            }
            pvVar24 = _pthread_getspecific(pVar36);
            if ((pvVar24 == (void *)0x0) || (lVar25 = FUN_00e8b990(), lVar25 == 0)) {
              if (*(char *)(lVar44 + 0x51) == '\0') goto LAB_0178d32a;
LAB_0178d349:
              lVar25 = *(int64_t *)(arg1 + 0x10);
              if (lVar25 != 0) {
                FUN_00d50b00();
              }
              pvVar24 = _pthread_getspecific(pVar36);
              if ((pvVar24 == (void *)0x0) || (lVar26 = FUN_00e8b990(), lVar26 == 0)) {
                if (*(int64_t *)(lVar25 + 0x78) == 0) goto LAB_0178d394;
LAB_0178d3a8:
                bVar48 = *(int64_t *)(arg1 + 0x38) != 0;
              }
              else {
                if (*(int64_t *)
                     (*(int64_t *)(lVar25 + 0x20 + (uint64_t)(*(uint *)(lVar26 + 0x154) & 1) * 8)
                     + 0x78) != 0) goto LAB_0178d3a8;
LAB_0178d394:
                bVar48 = false;
              }
              if (lVar25 != 0) {
                FUN_00d50b20();
              }
            }
            else {
              if (*(char *)(*(int64_t *)
                             (lVar44 + 0x20 + (uint64_t)(*(uint *)(lVar25 + 0x154) & 1) * 8) + 0x51
                           ) != '\0') goto LAB_0178d349;
LAB_0178d32a:
              bVar48 = false;
            }
            if (lVar44 != 0) {
              FUN_00d50b20();
            }
            uVar37 = local_68;
            if (bVar48) {
              uVar51 = FUN_017906e0();
              lVar44 = *(int64_t *)(arg1 + 0x10);
              if (lVar44 != 0) {
                FUN_00d50b00();
              }
              pvVar24 = _pthread_getspecific(pVar36);
              lVar25 = lVar44;
              if ((pvVar24 != (void *)0x0) && (lVar26 = FUN_00e8b990(), lVar26 != 0)) {
                lVar25 = *(int64_t *)
                          (lVar44 + 0x20 + (uint64_t)(*(uint *)(lVar26 + 0x154) & 1) * 8);
              }
              plVar39 = *(int64_t **)(lVar25 + 0x78);
              pvVar24 = _pthread_getspecific(pVar36);
              if (pvVar24 != (void *)0x0) {
                plVar39 = *(int64_t **)(lVar25 + 0x78);
                lVar25 = FUN_00e8b990();
                if (lVar25 != 0) {
                  plVar39 = (int64_t *)plVar39[(uint64_t)(*(uint *)(lVar25 + 0x154) & 1) + 4];
                }
              }
              dVar50 = (double)(**(code **)(*plVar39 + 0x380))(uVar51);
              local_40 = local_40 * dVar50;
              uVar37 = local_68;
              if (lVar44 != 0) {
                FUN_00d50b20();
                uVar37 = local_68;
              }
            }
            local_68 = uVar37;
            if (iVar47 < local_94) {
              if (local_40 <= g_023942d0) {
                lVar44 = *(int64_t *)(arg1 + 0x10);
                if (lVar44 != 0) {
                  FUN_00d50b00();
                }
                pvVar24 = _pthread_getspecific(pVar36);
                if ((pvVar24 == (void *)0x0) || (lVar25 = FUN_00e8b990(), lVar25 == 0)) {
                  cVar33 = *(char *)(lVar44 + 0x4a);
                }
                else {
                  cVar33 = *(char *)(*(int64_t *)
                                      (lVar44 + 0x20 +
                                      (uint64_t)(*(uint *)(lVar25 + 0x154) & 1) * 8) + 0x4a);
                }
                if (lVar44 != 0) {
                  FUN_00d50b20();
                }
                if (cVar33 == '\0') goto LAB_0178ce03;
              }
              local_94 = iVar47;
            }
LAB_0178ce03:
            iVar47 = iVar47 + (((uint)(iVar47 / 6 + (iVar47 >> 0x1f)) >> 1) - (iVar47 >> 0x1f)) *
                              -0xc;
            uVar46 = uVar46 | 1 << ((iVar47 >> 0x1f & 0xcU) + iVar47 & 0x1f);
            *(float *)(plVar7[2] + (int64_t)iVar47 * 4) =
                 (float)local_40 + *(float *)(plVar7[2] + (int64_t)iVar47 * 4);
          }
        }
        pvVar24 = local_80;
        FUN_0015ed50();
        goto LAB_0178d6af;
      }
    }
    else {
      uVar46 = *(uint *)((int64_t)pvVar24 + 0x18);
      uVar12 = uVar46 + 3;
      if (-1 < (int)uVar46) {
        uVar12 = uVar46;
      }
      param_4 = (void *)(uint64_t)uVar12;
      if (3 < (int)uVar46) {
        param_4 = (void *)(uint64_t)(uint)((int)uVar12 >> 2);
        param_3 = *(code **)((int64_t)pvVar24 + 0x10);
        lVar44 = plVar7[2];
        local_94 = 0x80;
        iVar42 = 0;
        lVar25 = 0;
        uVar46 = 0;
        do {
          iVar47 = *(int *)(param_3 + lVar25 * 4);
          if (iVar47 < local_94) {
            local_94 = iVar47;
          }
          iVar38 = iVar47 + (((uint)(iVar47 / 6 + (iVar47 >> 0x1f)) >> 1) - (iVar47 >> 0x1f)) * -0xc
          ;
          uVar34 = (iVar38 >> 0x1f & 0xcU) + iVar38;
          pvVar24 = (void *)(uint64_t)uVar34;
          uVar46 = uVar46 | 1 << (uVar34 & 0x1f);
          *(float *)(lVar44 + (int64_t)(int)uVar34 * 4) =
               fVar49 / (float)(iVar47 * iVar47) + *(float *)(lVar44 + (int64_t)(int)uVar34 * 4);
          lVar25 = lVar25 + 1;
        } while ((int)lVar25 < (int)uVar12 >> 2);
        bVar41 = false;
        goto LAB_0178d6af;
      }
      iVar42 = 0;
      bVar41 = false;
    }
  }
  else {
    lVar44 = *(int64_t *)(arg1 + 0x48);
    if (lVar44 == 0) {
      if (*(void **)(arg1 + 0x50) != (void *)0x0) {
        local_88 = ((uint64_t)local_88 & 0xffffffffffffff00);
        local_90 = (int64_t *)0x0;
        local_78 = 0xffffffff;
        local_70 = 0;
        local_78._4_4_ = 0;
        local_80 = *(void **)(arg1 + 0x50);
        while( true ) {
          if (local_78._4_4_ != 0) {
            if ((int)local_78._4_4_ < 1) {
              iVar42 = -local_78._4_4_;
            }
            else {
              iVar42 = (int)local_78 - local_78._4_4_;
              local_78 = CONCAT44(local_78._4_4_,iVar42);
              FUN_00d23690();
              local_70 = local_70 + local_78._4_4_;
              iVar42 = 0;
            }
            local_78 = CONCAT44(iVar42,(int)local_78);
          }
          lVar44 = (int64_t)(int)local_78;
          iVar42 = (int)local_78 + 1;
          local_78 = CONCAT44(local_78._4_4_,iVar42);
          if (*(int *)((int64_t)local_80 + 0xc) <= iVar42) break;
          local_90 = *(int64_t **)(*(int64_t *)((int64_t)local_80 + 0x10) + 8 + lVar44 * 8);
          pvVar24 = _pthread_getspecific((void*)*(int64_t *)((int64_t)local_80 + 0x10));
          if (pvVar24 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar38 = FUN_01508300();
          iVar42 = *(int *)(puVar23 + 3);
          lVar44 = (int64_t)iVar42;
          iVar47 = iVar42 + 3;
          if (-1 < lVar44) {
            iVar47 = iVar42;
          }
          if (3 < lVar44) {
            iVar47 = iVar47 >> 2;
            lVar25 = 0;
            do {
              if (*(int *)(puVar23[2] + lVar25 * 4) == iVar38) goto LAB_0178cb74;
              lVar25 = lVar25 + 1;
            } while (iVar47 != (int)lVar25);
          }
          FUN_00c8e340(iVar47,1);
          *(int *)(puVar23[2] + lVar44) = iVar38;
LAB_0178cb74:
        }
        FUN_0015ed50();
      }
    }
    else if (3 < *(int *)(lVar44 + 0x18)) {
      uVar37 = 0;
      do {
        iVar42 = *(int *)(*(int64_t *)(lVar44 + 0x10) + uVar37 * 4);
        iVar47 = *(int *)(puVar23 + 3);
        unaff_R12 = (int64_t)iVar47;
        iVar38 = iVar47 + 3;
        if (-1 < unaff_R12) {
          iVar38 = iVar47;
        }
        if (3 < unaff_R12) {
          lVar25 = 0;
          do {
            if (*(int *)(puVar23[2] + lVar25 * 4) == iVar42) goto LAB_0178ca90;
            lVar25 = lVar25 + 1;
          } while (iVar38 >> 2 != (int)lVar25);
        }
        FUN_00c8e340();
        *(int *)(puVar23[2] + unaff_R12) = iVar42;
LAB_0178ca90:
        uVar46 = (int)uVar37 + 1;
        uVar37 = (uint64_t)uVar46;
        iVar42 = *(int *)(lVar44 + 0x18);
        iVar47 = iVar42 + 3;
        if (-1 < iVar42) {
          iVar47 = iVar42;
        }
      } while ((int)uVar46 < iVar47 >> 2);
    }
    local_90 = (int64_t *)0x0;
    local_88 = FUN_00e8b540;
    param_3 = FUN_00370b80;
    _qsort_r(&local_90,4,0x370b80,param_4,in_stack_fffffffffffffe98);
    fVar49 = g_02390124;
    if ((*(int *)(puVar23 + 3) < 8) ||
       (iVar42 = *(int *)puVar23[2], ((int *)puVar23[2])[1] + -0xc < iVar42)) goto LAB_0178ccd4;
    pvVar24 = *(void **)(arg1 + 0x48);
    pvVar10 = local_80;
    if (pvVar24 == (void *)0x0) {
      bVar41 = true;
      uVar37 = CONCAT71((int7)((uint64_t)unaff_R12 >> 8),1);
      local_80 = *(void **)(arg1 + 0x50);
      goto joined_r0x0178cdc0;
    }
    iVar47 = *(int *)((int64_t)pvVar24 + 0x18);
    iVar38 = iVar47 + 3;
    if (-1 < iVar47) {
      iVar38 = iVar47;
    }
    bVar41 = true;
    if (3 < iVar47) {
      pvVar24 = *(void **)((int64_t)pvVar24 + 0x10);
      local_94 = 0x80;
      lVar44 = 0;
      uVar46 = 0;
      do {
        iVar47 = *(int *)((int64_t)pvVar24 + lVar44 * 4);
        if (iVar47 != iVar42) {
          if (iVar47 < local_94) {
            local_94 = iVar47;
          }
          iVar13 = iVar47 + (((uint)(iVar47 / 6 + (iVar47 >> 0x1f)) >> 1) - (iVar47 >> 0x1f)) * -0xc
          ;
          uVar12 = (iVar13 >> 0x1f & 0xcU) + iVar13;
          uVar46 = uVar46 | 1 << (uVar12 & 0x1f);
          *(float *)(plVar7[2] + (int64_t)(int)uVar12 * 4) =
               fVar49 / (float)(iVar47 * iVar47) + *(float *)(plVar7[2] + (int64_t)(int)uVar12 * 4)
          ;
        }
        lVar44 = lVar44 + 1;
      } while ((int)lVar44 < iVar38 >> 2);
      goto LAB_0178d6af;
    }
  }
  local_80 = pvVar10;
  local_94 = 0x80;
  uVar46 = 0;
LAB_0178d6af:
  pauVar3 = (uint8_t (*) [16])plVar7[2];
  auVar52 = *pauVar3;
  auVar53 = auVar52;
  if (auVar52._0_4_ <= 0.0) {
    auVar53._12_4_ = 0;
    auVar53._0_12_ = auVar52._4_12_;
    auVar53 = auVar53 << 0x20;
  }
  fVar49 = auVar52._4_4_;
  if (auVar52._4_4_ <= auVar53._0_4_) {
    fVar49 = auVar53._0_4_;
  }
  fVar54 = *(float *)(*pauVar3 + 8);
  if (*(float *)(*pauVar3 + 8) <= fVar49) {
    fVar54 = fVar49;
  }
  fVar49 = auVar52._12_4_;
  if (auVar52._12_4_ <= fVar54) {
    fVar49 = fVar54;
  }
  auVar53 = pauVar3[1];
  fVar54 = auVar53._0_4_;
  if (auVar53._0_4_ <= fVar49) {
    fVar54 = fVar49;
  }
  fVar49 = auVar53._4_4_;
  if (auVar53._4_4_ <= fVar54) {
    fVar49 = fVar54;
  }
  fVar54 = *(float *)(pauVar3[1] + 8);
  if (*(float *)(pauVar3[1] + 8) <= fVar49) {
    fVar54 = fVar49;
  }
  fVar49 = auVar53._12_4_;
  if (auVar53._12_4_ <= fVar54) {
    fVar49 = fVar54;
  }
  auVar1 = pauVar3[2];
  fVar54 = auVar1._0_4_;
  if (auVar1._0_4_ <= fVar49) {
    fVar54 = fVar49;
  }
  fVar49 = auVar1._4_4_;
  if (auVar1._4_4_ <= fVar54) {
    fVar49 = fVar54;
  }
  fVar54 = *(float *)(pauVar3[2] + 8);
  if (*(float *)(pauVar3[2] + 8) <= fVar49) {
    fVar54 = fVar49;
  }
  fVar49 = auVar1._12_4_;
  if (auVar1._12_4_ <= fVar54) {
    fVar49 = fVar54;
  }
  if ((fVar49 != 0.0) || (NAN(fVar49))) {
    auVar5._4_4_ = fVar49;
    auVar5._0_4_ = fVar49;
    auVar5._8_4_ = fVar49;
    auVar5._12_4_ = fVar49;
    auVar52 = divps(auVar52,auVar5);
    *pauVar3 = auVar52;
    auVar52._4_4_ = fVar49;
    auVar52._0_4_ = fVar49;
    auVar52._8_4_ = fVar49;
    auVar52._12_4_ = fVar49;
    auVar52 = divps(auVar53,auVar52);
    pauVar3[1] = auVar52;
    auVar6._4_4_ = fVar49;
    auVar6._0_4_ = fVar49;
    auVar6._8_4_ = fVar49;
    auVar6._12_4_ = fVar49;
    auVar52 = divps(auVar1,auVar6);
    pauVar3[2] = auVar52;
  }
  else {
    _memset_pattern16(pvVar24,segment_command_00000020.segname + 8,(size_t)param_3);
  }
  FUN_00c8e690();
  plVar39 = local_90;
  if (((char)local_88 == '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b00();
    if (((char)local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  uVar12 = uVar46 & 0xffff;
  uVar37 = 0;
  iVar47 = 0;
  do {
    if ((uVar12 >> ((uint)uVar37 & 0x1f) & 1) != 0) {
      lVar44 = 0;
      uVar45 = uVar37 & 0xffffffff;
      iVar38 = iVar47;
      do {
        iVar14 = (int)uVar45;
        iVar13 = 0;
        if (0 < iVar14) {
          iVar13 = iVar14;
        }
        local_68 = CONCAT71(local_68._1_7_,iVar13 + iVar38 != 0);
        lVar25 = *(int64_t *)(arg1 + 0x10);
        pvVar24 = _pthread_getspecific((void*)pvVar24);
        if (pvVar24 != (void *)0x0) {
          lVar25 = *(int64_t *)(arg1 + 0x10);
          lVar26 = FUN_00e8b990();
          if (lVar26 != 0) {
            lVar25 = *(int64_t *)(lVar25 + 0x20 + (uint64_t)(*(uint *)(lVar26 + 0x154) & 1) * 8);
          }
        }
        uVar45 = (uint64_t)
                 (iVar14 + (((iVar13 + iVar38) - (uint)(byte)local_68) / 0xc + (uint)(byte)local_68)
                           * 0xc);
        pvVar24 = (void *)plVar39[2];
        *(float *)((int64_t)pvVar24 + uVar45 * 4) =
             *(float *)(*(int64_t *)(*(int64_t *)(lVar25 + 0x40) + 0x10) + lVar44) *
             *(float *)(plVar7[2] + uVar37 * 4) + *(float *)((int64_t)pvVar24 + uVar45 * 4);
        uVar45 = (uint64_t)(iVar14 - 1);
        iVar38 = iVar38 + 1;
        lVar44 = lVar44 + 4;
      } while (lVar44 != 0x30);
    }
    uVar37 = uVar37 + 1;
    iVar47 = iVar47 + -1;
  } while (uVar37 != 0xc);
  bVar2 = *(byte *)(arg1 + 0x40);
  FUN_00c8e690();
  plVar8 = local_90;
  if (((char)local_88 == '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b00();
    if (((char)local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00c92170();
  FUN_00c92160();
  uVar51 = _UNK_0238fcc8;
  puVar4 = (void*)plVar8[2];
  *puVar4 = g_0238fcc0;
  puVar4[1] = uVar51;
  uVar51 = _UNK_0238ff18;
  puVar4[2] = g_0238ff10;
  puVar4[3] = uVar51;
  uVar51 = _UNK_0241c0b8;
  puVar4[4] = g_0241c0b0;
  puVar4[5] = uVar51;
  local_90 = (int64_t *)plVar39[2];
  local_88 = FUN_017910f0;
  _qsort_r(&local_90,4,0x370b80,param_4,in_stack_fffffffffffffe98);
  iVar47 = local_94 + (((uint)(local_94 / 6 + (local_94 >> 0x1f)) >> 1) - (local_94 >> 0x1f)) * -0xc
  ;
  local_68 = CONCAT44(local_68._4_4_,-(uVar46 & 1));
  cVar33 = '\0';
  if (0 < iVar47) {
    cVar33 = '\f';
  }
  iVar38 = 1 - local_94;
  iVar38 = iVar38 + (((uint)(iVar38 / 6 + (iVar38 >> 0x1f)) >> 1) - (iVar38 >> 0x1f)) * -0xc;
  iVar13 = 2 - local_94;
  iVar13 = iVar13 + (((uint)(iVar13 / 6 + (iVar13 >> 0x1f)) >> 1) - (iVar13 >> 0x1f)) * -0xc;
  iVar14 = 3 - local_94;
  iVar14 = iVar14 + (((uint)(iVar14 / 6 + (iVar14 >> 0x1f)) >> 1) - (iVar14 >> 0x1f)) * -0xc;
  iVar15 = 4 - local_94;
  iVar15 = iVar15 + (((uint)(iVar15 / 6 + (iVar15 >> 0x1f)) >> 1) - (iVar15 >> 0x1f)) * -0xc;
  iVar16 = 5 - local_94;
  iVar16 = iVar16 + (((uint)(iVar16 / 6 + (iVar16 >> 0x1f)) >> 1) - (iVar16 >> 0x1f)) * -0xc;
  iVar17 = 6 - local_94;
  iVar17 = iVar17 + (((uint)(iVar17 / 6 + (iVar17 >> 0x1f)) >> 1) - (iVar17 >> 0x1f)) * -0xc;
  iVar18 = 7 - local_94;
  iVar18 = iVar18 + (((uint)(iVar18 / 6 + (iVar18 >> 0x1f)) >> 1) - (iVar18 >> 0x1f)) * -0xc;
  iVar19 = 8 - local_94;
  iVar19 = iVar19 + (((uint)(iVar19 / 6 + (iVar19 >> 0x1f)) >> 1) - (iVar19 >> 0x1f)) * -0xc;
  iVar20 = 9 - local_94;
  iVar20 = iVar20 + (((uint)(iVar20 / 6 + (iVar20 >> 0x1f)) >> 1) - (iVar20 >> 0x1f)) * -0xc;
  iVar21 = 10 - local_94;
  iVar21 = iVar21 + (((uint)(iVar21 / 6 + (iVar21 >> 0x1f)) >> 1) - (iVar21 >> 0x1f)) * -0xc;
  iVar22 = 0xb - local_94;
  iVar22 = iVar22 + (((uint)(iVar22 / 6 + (iVar22 >> 0x1f)) >> 1) - (iVar22 >> 0x1f)) * -0xc;
  cVar43 = (char)uVar12;
  uVar34 = 1 << (((byte)(iVar18 >> 0x1f) & 0xc) + (char)iVar18 & 0x1f);
  if (-1 < cVar43) {
    uVar34 = 0;
  }
  uVar35 = 1 << (((byte)(iVar21 >> 0x1f) & 0xc) + (char)iVar21 & 0x1f) &
           (int)(uVar12 << 0x15) >> 0x1f;
  uVar37 = (uint64_t)uVar35;
  uVar12 = 1 << (((byte)(iVar22 >> 0x1f) & 0xc) + (char)iVar22 & 0x1f) &
           (int)(uVar12 << 0x14) >> 0x1f | uVar35 |
           1 << (((byte)(iVar20 >> 0x1f) & 0xc) + (char)iVar20 & 0x1f) &
           (int)(uVar12 << 0x16) >> 0x1f |
           1 << (((byte)(iVar19 >> 0x1f) & 0xc) + (char)iVar19 & 0x1f) &
           (int)(uVar12 << 0x17) >> 0x1f | uVar34 |
           1 << (((byte)(iVar17 >> 0x1f) & 0xc) + (char)iVar17 & 0x1f) &
           (int)(uVar12 << 0x19) >> 0x1f |
           1 << (((byte)(iVar16 >> 0x1f) & 0xc) + (char)iVar16 & 0x1f) &
           (int)(uVar12 << 0x1a) >> 0x1f |
           1 << (((byte)(iVar15 >> 0x1f) & 0xc) + (char)iVar15 & 0x1f) &
           (int)(uVar12 << 0x1b) >> 0x1f |
           1 << (((byte)(iVar14 >> 0x1f) & 0xc) + (char)iVar14 & 0x1f) &
           (int)(uVar12 << 0x1c) >> 0x1f |
           1 << (((byte)(iVar13 >> 0x1f) & 0xc) + (char)iVar13 & 0x1f) &
           (int)(uVar12 << 0x1d) >> 0x1f |
           1 << (((byte)(iVar38 >> 0x1f) & 0xc) + (char)iVar38 & 0x1f) &
           (int)(uVar12 << 0x1e) >> 0x1f | 1 << (cVar33 - (char)iVar47 & 0x1fU) & -(uVar46 & 1);
  plVar27 = (int64_t *)(arg1 + 0x28);
  local_b8 = 0;
  local_bc = 0;
  local_a8 = (int64_t *)0x0;
  local_60 = 0;
  do {
    lVar44 = *(int64_t *)(arg1 + 0x10);
    pVar36 = (void*)uVar37;
    pvVar24 = _pthread_getspecific(pVar36);
    if (pvVar24 != (void *)0x0) {
      lVar44 = *(int64_t *)(arg1 + 0x10);
      lVar25 = FUN_00e8b990();
      if (lVar25 != 0) {
        lVar44 = *(int64_t *)(lVar44 + 0x20 + (uint64_t)(*(uint *)(lVar25 + 0x154) & 1) * 8);
      }
    }
    iVar38 = iVar47;
    if (*(char *)(lVar44 + 0x4a) != '\0') goto LAB_0178e0c1;
    lVar44 = *(int64_t *)(arg1 + 0x10);
    pvVar24 = _pthread_getspecific(pVar36);
    if (pvVar24 != (void *)0x0) {
      lVar44 = *(int64_t *)(arg1 + 0x10);
      lVar25 = FUN_00e8b990();
      if (lVar25 != 0) {
        lVar44 = *(int64_t *)(lVar44 + 0x20 + (uint64_t)(*(uint *)(lVar25 + 0x154) & 1) * 8);
      }
    }
    if ((local_bc == 1 || local_b8 == 0 && *(char *)(lVar44 + 0x4b) != '\0') && (local_94 != 0x80))
    {
      if ((int)uVar12 < 0xa1) {
        if ((uVar12 != 0x49) && (uVar12 != 0x85)) goto LAB_0178e0a0;
      }
      else if ((uVar12 != 0xa1) && ((uVar12 != 0x111 && (uVar12 != 0x249)))) goto LAB_0178e0a0;
    }
    else {
LAB_0178e0a0:
      lVar44 = (int64_t)local_bc;
      local_bc = local_bc + 1;
      iVar38 = *(int *)(plVar8[2] + lVar44 * 4);
    }
LAB_0178e0c1:
    iVar13 = iVar38 * 7;
    iVar13 = iVar13 + (((uint)(iVar13 / 6 + (iVar13 >> 0x1f)) >> 1) - (iVar13 >> 0x1f)) * -0xc;
    cVar33 = ((byte)(iVar13 >> 0x1f) & 0xc) + (char)iVar13 + '\x06';
    uVar34 = cVar33 * 0x2b;
    FUN_01716350((int)(char)(cVar33 + ((char)((uVar34 & 0xffff) >> 0xf) + (char)(uVar34 >> 9)) *
                                      -0xc + -6));
    plVar9 = local_90;
    if (((char)local_88 == '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b00();
      if (((char)local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    iVar13 = 1 - iVar38 >> 0x1f;
    FUN_01715d40((((uint)((1 - iVar38) / 6 + iVar13) >> 1) - iVar13) * 0xc,
                 -(uint)((uVar46 & 2) == 0));
    iVar13 = 2 - iVar38 >> 0x1f;
    FUN_01715d40((((uint)((2 - iVar38) / 6 + iVar13) >> 1) - iVar13) * 0xc,
                 -(uint)((uVar46 & 4) == 0));
    iVar13 = 3 - iVar38 >> 0x1f;
    FUN_01715d40((((uint)((3 - iVar38) / 6 + iVar13) >> 1) - iVar13) * 0xc,
                 -(uint)((uVar46 & 8) == 0));
    iVar13 = 4 - iVar38 >> 0x1f;
    FUN_01715d40((((uint)((4 - iVar38) / 6 + iVar13) >> 1) - iVar13) * 0xc,
                 -(uint)((uVar46 & 0x10) == 0));
    iVar13 = 5 - iVar38 >> 0x1f;
    FUN_01715d40((((uint)((5 - iVar38) / 6 + iVar13) >> 1) - iVar13) * 0xc,
                 -(uint)((uVar46 & 0x20) == 0));
    iVar13 = 6 - iVar38 >> 0x1f;
    FUN_01715d40((((uint)((6 - iVar38) / 6 + iVar13) >> 1) - iVar13) * 0xc,
                 -(uint)((uVar46 & 0x40) == 0));
    iVar13 = 7 - iVar38 >> 0x1f;
    FUN_01715d40((((uint)((7 - iVar38) / 6 + iVar13) >> 1) - iVar13) * 0xc,(int)(char)~(cVar43 >> 7)
                );
    iVar13 = 8 - iVar38 >> 0x1f;
    FUN_01715d40((((uint)((8 - iVar38) / 6 + iVar13) >> 1) - iVar13) * 0xc,
                 -(uint)((uVar46 & 0x100) == 0));
    iVar13 = 9 - iVar38 >> 0x1f;
    FUN_01715d40((((uint)((9 - iVar38) / 6 + iVar13) >> 1) - iVar13) * 0xc,
                 -(uint)((uVar46 & 0x200) == 0));
    iVar13 = 10 - iVar38 >> 0x1f;
    FUN_01715d40((((uint)((10 - iVar38) / 6 + iVar13) >> 1) - iVar13) * 0xc,
                 -(uint)((uVar46 & 0x400) == 0));
    iVar13 = 0xb - iVar38 >> 0x1f;
    uVar37 = (uint64_t)((((uint)((0xb - iVar38) / 6 + iVar13) >> 1) - iVar13) * 0xc);
    FUN_01715d40(uVar37,-(uint)((uVar46 & 0x800) == 0));
    FUN_01715d80();
    if (*(char *)(arg1 + 0x40) == '\0') {
      lVar44 = *(int64_t *)(arg1 + 0x10);
      if (lVar44 != 0) {
        FUN_00d50b00();
      }
      pvVar24 = _pthread_getspecific((void*)uVar37);
      if ((pvVar24 == (void *)0x0) || (lVar25 = FUN_00e8b990(), lVar25 == 0)) {
        uVar34 = *(uint *)(lVar44 + 0x54);
      }
      else {
        uVar34 = *(uint *)(*(int64_t *)
                            (lVar44 + 0x20 + (uint64_t)(*(uint *)(lVar25 + 0x154) & 1) * 8) + 0x54)
        ;
      }
      uVar45 = (uint64_t)uVar34;
      if (lVar44 != 0) {
        FUN_00d50b20();
      }
      local_c0 = 5;
      if (*(char *)(arg1 + 0x40) == '\0') {
        lVar44 = *(int64_t *)(arg1 + 0x10);
        if (lVar44 != 0) {
          FUN_00d50b00();
        }
        pvVar24 = _pthread_getspecific((void*)uVar37);
        if ((pvVar24 == (void *)0x0) || (lVar25 = FUN_00e8b990(), lVar25 == 0)) {
          local_c0 = *(int *)(lVar44 + 0x54);
        }
        else {
          local_c0 = *(int *)(*(int64_t *)
                               (lVar44 + 0x20 + (uint64_t)(*(uint *)(lVar25 + 0x154) & 1) * 8) +
                             0x54);
        }
        if (lVar44 != 0) {
          FUN_00d50b20();
        }
      }
      if ((int)uVar34 <= local_c0) goto LAB_0178e550;
    }
    else {
      local_c0 = 5;
      uVar45 = 1;
LAB_0178e550:
      local_68 = uVar45;
      do {
        uVar34 = (uint)uVar37;
        uVar37 = 0;
        if (((uVar46 & 1) != 0) && (iVar38 != 0)) {
          iVar13 = 0;
          if (0 < iVar38) {
            iVar13 = 0xc;
          }
          uVar34 = iVar13 - iVar38;
          iVar13 = 6;
          if (uVar34 < 0xc) {
            iVar13 = *(int *)(&g_024126f0 + (int64_t)(int)uVar34 * 4);
          }
          uVar37 = (uint64_t)(uint)(1 << ((byte)uVar34 & 0x1f));
          if ((int)local_68 < iVar13) {
            uVar37 = 0;
          }
        }
        if (((uVar46 & 2) != 0) && (iVar38 != 1)) {
          iVar13 = 1;
          if (1 < iVar38) {
            iVar13 = 0xd;
          }
          uVar35 = iVar13 - iVar38;
          uVar34 = 6;
          if (uVar35 < 0xc) {
            uVar34 = *(uint *)(&g_024126f0 + (int64_t)(int)uVar35 * 4);
          }
          if ((int)uVar34 <= (int)local_68) {
            uVar37 = (uint64_t)((uint)uVar37 | 1 << (uVar35 & 0x1f));
          }
        }
        if (((uVar46 & 4) != 0) && (iVar38 != 2)) {
          iVar13 = 2;
          if (2 < iVar38) {
            iVar13 = 0xe;
          }
          uVar35 = iVar13 - iVar38;
          uVar34 = 6;
          if (uVar35 < 0xc) {
            uVar34 = *(uint *)(&g_024126f0 + (int64_t)(int)uVar35 * 4);
          }
          if ((int)uVar34 <= (int)local_68) {
            uVar37 = (uint64_t)((uint)uVar37 | 1 << (uVar35 & 0x1f));
          }
        }
        if (((uVar46 & 8) != 0) && (iVar38 != 3)) {
          iVar13 = 3;
          if (3 < iVar38) {
            iVar13 = 0xf;
          }
          uVar35 = iVar13 - iVar38;
          uVar34 = 6;
          if (uVar35 < 0xc) {
            uVar34 = *(uint *)(&g_024126f0 + (int64_t)(int)uVar35 * 4);
          }
          if ((int)uVar34 <= (int)local_68) {
            uVar37 = (uint64_t)((uint)uVar37 | 1 << (uVar35 & 0x1f));
          }
        }
        if (((uVar46 & 0x10) != 0) && (iVar38 != 4)) {
          iVar13 = 4;
          if (4 < iVar38) {
            iVar13 = 0x10;
          }
          uVar35 = iVar13 - iVar38;
          uVar34 = 6;
          if (uVar35 < 0xc) {
            uVar34 = *(uint *)(&g_024126f0 + (int64_t)(int)uVar35 * 4);
          }
          if ((int)uVar34 <= (int)local_68) {
            uVar37 = (uint64_t)((uint)uVar37 | 1 << (uVar35 & 0x1f));
          }
        }
        if (((uVar46 & 0x20) != 0) && (iVar38 != 5)) {
          iVar13 = 5;
          if (5 < iVar38) {
            iVar13 = 0x11;
          }
          uVar35 = iVar13 - iVar38;
          uVar34 = 6;
          if (uVar35 < 0xc) {
            uVar34 = *(uint *)(&g_024126f0 + (int64_t)(int)uVar35 * 4);
          }
          if ((int)uVar34 <= (int)local_68) {
            uVar37 = (uint64_t)((uint)uVar37 | 1 << (uVar35 & 0x1f));
          }
        }
        if (((uVar46 & 0x40) != 0) && (iVar38 != 6)) {
          uVar34 = 6;
          iVar13 = 6;
          if (6 < iVar38) {
            iVar13 = 0x12;
          }
          uVar35 = iVar13 - iVar38;
          if (uVar35 < 0xc) {
            uVar34 = *(uint *)(&g_024126f0 + (int64_t)(int)uVar35 * 4);
          }
          if ((int)uVar34 <= (int)local_68) {
            uVar37 = (uint64_t)((uint)uVar37 | 1 << (uVar35 & 0x1f));
          }
        }
        if ((cVar43 < '\0') && (iVar38 != 7)) {
          iVar13 = 7;
          if (7 < iVar38) {
            iVar13 = 0x13;
          }
          uVar35 = iVar13 - iVar38;
          uVar34 = 6;
          if (uVar35 < 0xc) {
            uVar34 = *(uint *)(&g_024126f0 + (int64_t)(int)uVar35 * 4);
          }
          if ((int)uVar34 <= (int)local_68) {
            uVar37 = (uint64_t)((uint)uVar37 | 1 << (uVar35 & 0x1f));
          }
        }
        if (((uVar46 & 0x100) != 0) && (iVar38 != 8)) {
          iVar13 = 8;
          if (8 < iVar38) {
            iVar13 = 0x14;
          }
          uVar35 = iVar13 - iVar38;
          uVar34 = 6;
          if (uVar35 < 0xc) {
            uVar34 = *(uint *)(&g_024126f0 + (int64_t)(int)uVar35 * 4);
          }
          if ((int)uVar34 <= (int)local_68) {
            uVar37 = (uint64_t)((uint)uVar37 | 1 << (uVar35 & 0x1f));
          }
        }
        if (((uVar46 & 0x200) != 0) && (iVar38 != 9)) {
          iVar13 = 9;
          if (9 < iVar38) {
            iVar13 = 0x15;
          }
          uVar35 = iVar13 - iVar38;
          uVar34 = 6;
          if (uVar35 < 0xc) {
            uVar34 = *(uint *)(&g_024126f0 + (int64_t)(int)uVar35 * 4);
          }
          if ((int)uVar34 <= (int)local_68) {
            uVar37 = (uint64_t)((uint)uVar37 | 1 << (uVar35 & 0x1f));
          }
        }
        if (((uVar46 & 0x400) != 0) && (iVar38 != 10)) {
          iVar13 = 10;
          if (10 < iVar38) {
            iVar13 = 0x16;
          }
          uVar35 = iVar13 - iVar38;
          uVar34 = 6;
          if (uVar35 < 0xc) {
            uVar34 = *(uint *)(&g_024126f0 + (int64_t)(int)uVar35 * 4);
          }
          if ((int)uVar34 <= (int)local_68) {
            uVar37 = (uint64_t)((uint)uVar37 | 1 << (uVar35 & 0x1f));
          }
        }
        if (((uVar46 & 0x800) != 0) && (iVar38 != 0xb)) {
          iVar13 = 0xb;
          if (0xb < iVar38) {
            iVar13 = 0x17;
          }
          uVar35 = iVar13 - iVar38;
          uVar34 = 6;
          if (uVar35 < 0xc) {
            uVar34 = *(uint *)(&g_024126f0 + (int64_t)(int)uVar35 * 4);
          }
          if ((int)uVar34 <= (int)local_68) {
            uVar37 = (uint64_t)((uint)uVar37 | 1 << (uVar35 & 0x1f));
          }
        }
        lVar44 = *(int64_t *)(arg1 + 0x10);
        if (lVar44 != 0) {
          FUN_00d50b00();
        }
        pvVar24 = _pthread_getspecific(uVar34);
        if ((pvVar24 == (void *)0x0) || (lVar25 = FUN_00e8b990(), lVar25 == 0)) {
          if (*(char *)(lVar44 + 0x4c) == '\0') goto LAB_0178e8da;
LAB_0178e8f9:
          lVar25 = *(int64_t *)(arg1 + 0x10);
          if (lVar25 != 0) {
            FUN_00d50b00();
          }
          pvVar24 = _pthread_getspecific(uVar34);
          if ((pvVar24 == (void *)0x0) || (lVar26 = FUN_00e8b990(), lVar26 == 0)) {
            if (*(char *)(lVar25 + 0x4d) == '\0') goto LAB_0178e943;
LAB_0178e959:
            bVar48 = false;
            if ((*plVar27 != 0) && ((uVar37 & 0x3c) == 0)) {
              bVar48 = (uVar37 & 0x1c0) == 0;
            }
          }
          else {
            if (*(char *)(*(int64_t *)
                           (lVar25 + 0x20 + (uint64_t)(*(uint *)(lVar26 + 0x154) & 1) * 8) + 0x4d)
                != '\0') goto LAB_0178e959;
LAB_0178e943:
            bVar48 = false;
          }
          if (lVar25 != 0) {
            FUN_00d50b20();
          }
        }
        else {
          if (*(char *)(*(int64_t *)
                         (lVar44 + 0x20 + (uint64_t)(*(uint *)(lVar25 + 0x154) & 1) * 8) + 0x4c) !=
              '\0') goto LAB_0178e8f9;
LAB_0178e8da:
          bVar48 = false;
        }
        if (lVar44 != 0) {
          FUN_00d50b20();
        }
        if (bVar48) {
          pvVar24 = _pthread_getspecific(uVar34);
          if (pvVar24 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar13 = FUN_01743720();
          plVar40 = (int64_t *)*plVar27;
          pvVar24 = _pthread_getspecific(uVar34);
          if (pvVar24 != (void *)0x0) {
            plVar40 = (int64_t *)*plVar27;
            lVar44 = FUN_00e8b990();
            if (lVar44 != 0) {
              plVar40 = (int64_t *)plVar40[(uint64_t)(*(uint *)(lVar44 + 0x154) & 1) + 4];
            }
          }
          cVar33 = (**(code **)(*plVar40 + 0x400))();
          iVar13 = iVar13 * 7;
          iVar13 = iVar13 + (((uint)(iVar13 / 6 + (iVar13 >> 0x1f)) >> 1) - (iVar13 >> 0x1f)) * -0xc
          ;
          iVar13 = (iVar13 >> 0x1f & 0xcU) + iVar13;
          iVar14 = iVar13 + 3;
          if (cVar33 == '\0') {
            iVar14 = iVar13;
          }
          iVar13 = (iVar38 - iVar14) + 0xc;
          uVar34 = iVar13 + (((uint)(iVar13 / 6 + (iVar13 >> 0x1f)) >> 1) - (iVar13 >> 0x1f)) * -0xc
          ;
          uVar35 = ((int)uVar34 >> 0x1f & 0xcU) + uVar34;
          if (0xb < uVar35) goto LAB_0178eab4;
          uVar34 = 0x10a;
          if ((0x10aU >> (uVar35 & 0x1f) & 1) != 0) {
            uVar37 = (uint64_t)((uint)uVar37 | 0x90);
            goto LAB_0178eab4;
          }
          uVar34 = 0x840;
          pVar36 = 0x840;
          if ((0x840U >> (uVar35 & 0x1f) & 1) == 0) goto LAB_0178eab4;
          uVar37 = (uint64_t)((uint)uVar37 | 0x490);
          bVar41 = true;
          lVar44 = *(int64_t *)(arg1 + 0x10);
          iVar42 = iVar38;
          iVar38 = iVar38 + -4;
        }
        else {
LAB_0178eab4:
          lVar44 = *(int64_t *)(arg1 + 0x10);
          pVar36 = uVar34;
        }
        if (lVar44 != 0) {
          FUN_00d50b00();
        }
        pvVar24 = _pthread_getspecific(pVar36);
        if ((pvVar24 == (void *)0x0) || (lVar25 = FUN_00e8b990(), lVar25 == 0)) {
          if (*(char *)(lVar44 + 0x4c) == '\0') goto LAB_0178eb05;
LAB_0178eb29:
          if (*plVar27 == 0) {
            if (lVar44 != 0) {
              FUN_00d50b20();
            }
            goto LAB_0178ec80;
          }
          if ((uVar37 & 0x3c) != 0) {
            if (lVar44 != 0) {
              FUN_00d50b20();
            }
            goto LAB_0178ec80;
          }
          if (lVar44 != 0) {
            FUN_00d50b20();
          }
          if ((int)local_68 < 2) goto LAB_0178ec80;
          plVar40 = (int64_t *)*plVar27;
          pvVar24 = _pthread_getspecific(pVar36);
          if (pvVar24 != (void *)0x0) {
            plVar40 = (int64_t *)*plVar27;
            lVar44 = FUN_00e8b990();
            if (lVar44 != 0) {
              plVar40 = (int64_t *)plVar40[(uint64_t)(*(uint *)(lVar44 + 0x154) & 1) + 4];
            }
          }
          plVar29 = (int64_t *)*plVar27;
          pvVar24 = _pthread_getspecific(pVar36);
          if (pvVar24 != (void *)0x0) {
            plVar29 = (int64_t *)*plVar27;
            lVar44 = FUN_00e8b990();
            if (lVar44 != 0) {
              plVar29 = (int64_t *)plVar29[(uint64_t)(*(uint *)(lVar44 + 0x154) & 1) + 4];
            }
          }
          (**(code **)(*plVar29 + 0x378))();
          lVar44 = *plVar40;
          cVar33 = (**(code **)(lVar44 + 0x3b8))();
          pVar36 = (void*)lVar44;
          if (cVar33 != '\0') {
            uVar37 = (uint64_t)((uint)uVar37 | 8);
            goto LAB_0178ec80;
          }
          plVar40 = (int64_t *)*plVar27;
          pvVar24 = _pthread_getspecific(pVar36);
          if (pvVar24 != (void *)0x0) {
            plVar40 = (int64_t *)*plVar27;
            lVar44 = FUN_00e8b990();
            if (lVar44 != 0) {
              plVar40 = (int64_t *)plVar40[(uint64_t)(*(uint *)(lVar44 + 0x154) & 1) + 4];
            }
          }
          plVar29 = (int64_t *)*plVar27;
          pvVar24 = _pthread_getspecific(pVar36);
          if (pvVar24 != (void *)0x0) {
            plVar29 = (int64_t *)*plVar27;
            lVar44 = FUN_00e8b990();
            if (lVar44 != 0) {
              plVar29 = (int64_t *)plVar29[(uint64_t)(*(uint *)(lVar44 + 0x154) & 1) + 4];
            }
          }
          (**(code **)(*plVar29 + 0x378))();
          cVar33 = (**(code **)(*plVar40 + 0x3b8))();
          pVar36 = (uint)uVar37 | 0x10;
          if (cVar33 != '\0') {
            uVar37 = (uint64_t)pVar36;
          }
          lVar44 = *(int64_t *)(arg1 + 0x10);
        }
        else {
          if (*(char *)(*(int64_t *)
                         (lVar44 + 0x20 + (uint64_t)(*(uint *)(lVar25 + 0x154) & 1) * 8) + 0x4c) !=
              '\0') goto LAB_0178eb29;
LAB_0178eb05:
          if (lVar44 != 0) {
            FUN_00d50b20();
          }
LAB_0178ec80:
          lVar44 = *(int64_t *)(arg1 + 0x10);
        }
        if (lVar44 != 0) {
          FUN_00d50b00();
        }
        pvVar24 = _pthread_getspecific(pVar36);
        if ((pvVar24 != (void *)0x0) && (lVar25 = FUN_00e8b990(), lVar25 != 0)) {
          if (*(char *)(*(int64_t *)
                         (lVar44 + 0x20 + (uint64_t)(*(uint *)(lVar25 + 0x154) & 1) * 8) + 0x4d) !=
              '\0') goto LAB_0178ece9;
LAB_0178ecca:
          if (lVar44 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0178eed0;
        }
        if (*(char *)(lVar44 + 0x4d) == '\0') goto LAB_0178ecca;
LAB_0178ece9:
        if (*plVar27 == 0) {
          if (lVar44 != 0) {
            FUN_00d50b20();
            goto LAB_0178eed0;
          }
LAB_0178f1c0:
          iVar13 = iVar38 * 7;
          iVar13 = iVar13 + (((uint)(iVar13 / 6 + (iVar13 >> 0x1f)) >> 1) - (iVar13 >> 0x1f)) * -0xc
          ;
          cVar33 = ((byte)(iVar13 >> 0x1f) & 0xc) + (char)iVar13 + '\x06';
          uVar34 = cVar33 * 0x2b;
          pVar36 = (void*)
                   (char)(cVar33 + ((char)((uVar34 & 0xffff) >> 0xf) + (char)(uVar34 >> 9)) * -0xc +
                         -6);
        }
        else {
          uVar34 = (uint)uVar37;
          if ((uVar37 & 0x1c0) == 0) {
            if (lVar44 != 0) {
              FUN_00d50b20();
            }
            if ((int)local_68 < 1) goto LAB_0178eed0;
            plVar40 = (int64_t *)*plVar27;
            pvVar24 = _pthread_getspecific(pVar36);
            if (pvVar24 != (void *)0x0) {
              plVar40 = (int64_t *)*plVar27;
              lVar44 = FUN_00e8b990();
              if (lVar44 != 0) {
                plVar40 = (int64_t *)plVar40[(uint64_t)(*(uint *)(lVar44 + 0x154) & 1) + 4];
              }
            }
            plVar29 = (int64_t *)*plVar27;
            pvVar24 = _pthread_getspecific(pVar36);
            if (pvVar24 != (void *)0x0) {
              plVar29 = (int64_t *)*plVar27;
              lVar44 = FUN_00e8b990();
              if (lVar44 != 0) {
                plVar29 = (int64_t *)plVar29[(uint64_t)(*(uint *)(lVar44 + 0x154) & 1) + 4];
              }
            }
            (**(code **)(*plVar29 + 0x378))();
            lVar44 = *plVar40;
            cVar33 = (**(code **)(lVar44 + 0x3b8))();
            pVar36 = (void*)lVar44;
            if (cVar33 == '\0') {
              plVar40 = (int64_t *)*plVar27;
              if ((uVar37 & 0x10) == 0) {
                pvVar24 = _pthread_getspecific(pVar36);
                if (pvVar24 != (void *)0x0) {
                  plVar40 = (int64_t *)*plVar27;
                  lVar44 = FUN_00e8b990();
                  if (lVar44 != 0) {
                    plVar40 = (int64_t *)plVar40[(uint64_t)(*(uint *)(lVar44 + 0x154) & 1) + 4];
                  }
                }
                plVar29 = (int64_t *)*plVar27;
                pvVar24 = _pthread_getspecific(pVar36);
                if (pvVar24 != (void *)0x0) {
                  plVar29 = (int64_t *)*plVar27;
                  lVar44 = FUN_00e8b990();
                  if (lVar44 != 0) {
                    plVar29 = (int64_t *)plVar29[(uint64_t)(*(uint *)(lVar44 + 0x154) & 1) + 4];
                  }
                }
                (**(code **)(*plVar29 + 0x378))();
                lVar44 = *plVar40;
                cVar33 = (**(code **)(lVar44 + 0x3b8))();
                pVar36 = (void*)lVar44;
                if (cVar33 == '\0') {
LAB_0178eebd:
                  uVar37 = (uint64_t)(uVar34 | 0x100);
                  goto LAB_0178eed0;
                }
              }
              else {
                pvVar24 = _pthread_getspecific(pVar36);
                if (pvVar24 != (void *)0x0) {
                  plVar40 = (int64_t *)*plVar27;
                  lVar44 = FUN_00e8b990();
                  if (lVar44 != 0) {
                    plVar40 = (int64_t *)plVar40[(uint64_t)(*(uint *)(lVar44 + 0x154) & 1) + 4];
                  }
                }
                plVar29 = (int64_t *)*plVar27;
                pvVar24 = _pthread_getspecific(pVar36);
                if (pvVar24 != (void *)0x0) {
                  plVar29 = (int64_t *)*plVar27;
                  lVar44 = FUN_00e8b990();
                  if (lVar44 != 0) {
                    plVar29 = (int64_t *)plVar29[(uint64_t)(*(uint *)(lVar44 + 0x154) & 1) + 4];
                  }
                }
                (**(code **)(*plVar29 + 0x378))();
                lVar44 = *plVar40;
                cVar33 = (**(code **)(lVar44 + 0x3b8))();
                pVar36 = (void*)lVar44;
                if (cVar33 != '\0') goto LAB_0178eebd;
              }
              uVar37 = (uint64_t)(uVar34 | 0x40);
              lVar44 = *plVar27;
            }
            else {
              uVar37 = (uint64_t)(uVar34 | 0x80);
              lVar44 = *plVar27;
            }
          }
          else {
            if (lVar44 != 0) {
              FUN_00d50b20();
            }
LAB_0178eed0:
            lVar44 = *plVar27;
          }
          if (lVar44 == 0) goto LAB_0178f1c0;
          pvVar24 = _pthread_getspecific(pVar36);
          if (pvVar24 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar13 = FUN_01743720();
          plVar40 = (int64_t *)*plVar27;
          pvVar24 = _pthread_getspecific(pVar36);
          if (pvVar24 != (void *)0x0) {
            plVar40 = (int64_t *)*plVar27;
            lVar44 = FUN_00e8b990();
            if (lVar44 != 0) {
              plVar40 = (int64_t *)plVar40[(uint64_t)(*(uint *)(lVar44 + 0x154) & 1) + 4];
            }
          }
          cVar33 = (**(code **)(*plVar40 + 0x400))();
          if (cVar33 == '\0') {
            if (iVar13 < 1) goto LAB_0178efae;
LAB_0178efd7:
            iVar14 = iVar13 + -6;
            if (iVar13 < 6) {
              iVar14 = -1;
            }
LAB_0178efe8:
            iVar13 = iVar38 * 7;
            iVar13 = iVar13 + (((uint)(iVar13 / 6 + (iVar13 >> 0x1f)) >> 1) - (iVar13 >> 0x1f)) *
                              -0xc;
            iVar14 = ((iVar13 >> 0x1f & 0xcU) + iVar13) - iVar14;
            pVar36 = (int)(iVar14 + (((uint)(iVar14 / 6 + (iVar14 >> 0x1f)) >> 1) - (iVar14 >> 0x1f)
                                    ) * -0xc) >> 0x1f & 0xc;
          }
          else if (((iVar13 != 1) || (iVar38 != 6)) && ((iVar13 != 2 || (iVar38 != 1)))) {
            iVar13 = iVar13 + -3;
            if ((int)-(uint)(iVar13 == 0) < iVar13) goto LAB_0178efd7;
LAB_0178efae:
            iVar14 = iVar13 + -1;
            if (-6 < iVar13) {
              iVar14 = -6;
            }
            goto LAB_0178efe8;
          }
        }
        uVar51 = FUN_01716350();
        plVar40 = local_90;
        if (((char)local_88 == '\0') && (local_90 != (int64_t *)0x0)) {
          uVar51 = FUN_00d50b00();
          if (((char)local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
            uVar51 = FUN_00d50b20();
          }
        }
        uVar51 = FUN_01715d40(uVar51,((uint)(uVar37 >> 1) & 1) - 1);
        uVar51 = FUN_01715d40(uVar51,((uint)(uVar37 >> 2) & 1) - 1);
        uVar51 = FUN_01715d40(uVar51,((uint)(uVar37 >> 3) & 1) - 1);
        uVar51 = FUN_01715d40(uVar51,((uint)(uVar37 >> 4) & 1) - 1);
        uVar51 = FUN_01715d40(uVar51,((uint)(uVar37 >> 5) & 1) - 1);
        uVar51 = FUN_01715d40(uVar51,((uint)(uVar37 >> 6) & 1) - 1);
        uVar51 = FUN_01715d40(uVar51,(int)(char)~((char)uVar37 >> 7));
        uVar51 = FUN_01715d40(uVar51,((uint)(uVar37 >> 8) & 1) - 1);
        uVar51 = FUN_01715d40(uVar51,((uint)(uVar37 >> 9) & 1) - 1);
        FUN_01715d40(uVar51,((uint)(uVar37 >> 10) & 1) - 1);
        FUN_01715d40();
        if (bVar41) {
          iVar13 = iVar42 - iVar38 >> 0x1f;
          pVar36 = (((uint)((iVar42 - iVar38) / 6 + iVar13) >> 1) - iVar13) * 0xc;
          FUN_01716100();
        }
        FUN_01715d80();
        if (local_b8 == 0) {
          lVar44 = *(int64_t *)(arg1 + 0x10);
          if (lVar44 != 0) {
            FUN_00d50b00();
          }
          pvVar24 = _pthread_getspecific(pVar36);
          if ((pvVar24 == (void *)0x0) || (lVar25 = FUN_00e8b990(), lVar25 == 0)) {
            iVar13 = *(int *)(lVar44 + 0x54);
          }
          else {
            iVar13 = *(int *)(*(int64_t *)
                               (lVar44 + 0x20 + (uint64_t)(*(uint *)(lVar25 + 0x154) & 1) * 8) +
                             0x54);
          }
          if (lVar44 != 0) {
            FUN_00d50b20();
          }
          if ((int)local_68 == iVar13) {
            if (local_a8 == plVar40) {
              if (((char)local_60 != '\0') || (local_a8 == (int64_t *)0x0)) goto LAB_0178fa50;
              local_60 = 0;
              FUN_00d50b00();
            }
            else {
              if (plVar40 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              uVar37 = 1;
              if (((char)local_60 == '\0') || (local_a8 == (int64_t *)0x0)) {
                plVar29 = (int64_t *)*param_2;
                local_a8 = plVar40;
                goto joined_r0x0178fa64;
              }
              local_a8 = plVar40;
              FUN_00d50b20();
            }
            uVar37 = 1;
            plVar29 = (int64_t *)*param_2;
          }
          else {
LAB_0178fa50:
            uVar37 = local_60 & 0xffffffff;
            plVar29 = (int64_t *)*param_2;
          }
joined_r0x0178fa64:
          if (plVar29 != (int64_t *)0x0) {
            cVar33 = (char)param_2[1];
            if (cVar33 != '\0') {
              FUN_00d50b00();
            }
LAB_0178f593:
            local_60 = uVar37;
            lVar44 = *(int64_t *)(arg1 + 0x10);
            goto joined_r0x0178f5a1;
          }
        }
        else {
          uVar37 = local_60;
          if (*param_2 != 0) {
            if ((int)local_68 == (int)uVar45) {
              plVar29 = (int64_t *)FUN_00e8fc40();
              FUN_01794ea0();
              (**(code **)(*plVar29 + 0x18))(local_60);
              *(void*)((int64_t)plVar29 + 0xc) = *(void*)(*param_2 + 0xc);
              *(void*)((int64_t)plVar29 + 0x14) = *(void*)(*param_2 + 0x14);
              local_88 = ((uint64_t)local_88 & 0xffffffffffffff00);
              plVar31 = param_2;
              local_90 = plVar29;
              FUN_00d21140();
              pVar36 = (void*)plVar31;
              if (((char)local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              cVar33 = '\x01';
              uVar37 = local_60;
              goto LAB_0178f593;
            }
            FUN_00d23340();
            plVar29 = local_90;
            local_38[0] = (char)local_88;
            ppcVar32 = (code **)local_38;
            ppcVar30 = &local_88;
            if ((char)local_88 == '\0') {
              ppcVar30 = ppcVar32;
            }
            *(void*)ppcVar30 = 0;
            if (((char)local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            pVar36 = (void*)ppcVar32;
            if (plVar29 == (int64_t *)0x0) {
              cVar33 = '\0';
              plVar29 = (int64_t *)0x0;
            }
            else {
              cVar33 = '\x01';
              if (local_38[0] == '\0') {
                FUN_00d50b00();
              }
            }
            lVar44 = *(int64_t *)(arg1 + 0x10);
joined_r0x0178f5a1:
            if (lVar44 != 0) {
              FUN_00d50b00();
            }
            pvVar24 = _pthread_getspecific(pVar36);
            if ((pvVar24 == (void *)0x0) || (lVar25 = FUN_00e8b990(), lVar25 == 0)) {
              iVar13 = *(int *)(lVar44 + 0x54);
            }
            else {
              iVar13 = *(int *)(*(int64_t *)
                                 (lVar44 + 0x20 + (uint64_t)(*(uint *)(lVar25 + 0x154) & 1) * 8) +
                               0x54);
            }
            if (lVar44 != 0) {
              FUN_00d50b20();
            }
            if ((int)local_68 == iVar13) {
              if ((void *)plVar29[7] != (void *)0x0) {
                local_88 = ((uint64_t)local_88 & 0xffffffffffffff00);
                local_90 = (int64_t *)0x0;
                local_78 = 0xffffffff;
                local_70 = 0;
                local_80 = (void *)plVar29[7];
                uVar34 = 0;
                while( true ) {
                  if (uVar34 != 0) {
                    if ((int)uVar34 < 1) {
                      iVar13 = -uVar34;
                    }
                    else {
                      local_78 = CONCAT44(local_78._4_4_,(int)local_78 - uVar34);
                      FUN_00d23690(uVar34,uVar34);
                      local_70 = local_70 + local_78._4_4_;
                      iVar13 = 0;
                    }
                    local_78 = CONCAT44(iVar13,(int)local_78);
                  }
                  lVar44 = (int64_t)(int)local_78;
                  iVar13 = (int)local_78 + 1;
                  local_78 = CONCAT44(local_78._4_4_,iVar13);
                  if (*(int *)((int64_t)local_80 + 0xc) <= iVar13) break;
                  local_90 = *(int64_t **)
                              (*(int64_t *)((int64_t)local_80 + 0x10) + 8 + lVar44 * 8);
                  cVar11 = (**(code **)(*(int64_t *)local_90[4] + 0x50))();
                  uVar34 = local_78._4_4_;
                  if (cVar11 != '\0') {
                    uVar34 = ~local_78._4_4_;
                    local_78 = CONCAT44(uVar34,(int)local_78);
                  }
                }
                FUN_01798230();
              }
              plVar31 = (int64_t *)plVar29[4];
joined_r0x0178fc25:
              if (plVar31 != plVar40) {
                if (plVar40 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
                plVar29[4] = (int64_t)plVar40;
                if (plVar31 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
              }
              lVar44 = _UNK_02412518;
              plVar29[8] = g_02412510;
              plVar29[9] = lVar44;
              lVar44 = 0;
              do {
                fVar49 = *(float *)(plVar7[2] + lVar44 * 4) / g_02390d28;
                if (g_0239424c < fVar49) {
                  cVar11 = FUN_01716980();
                  if (cVar11 == '\0') {
                    *(float *)((int64_t)plVar29 + 0x44) =
                         fVar49 + *(float *)((int64_t)plVar29 + 0x44);
                    *(int *)((int64_t)plVar29 + 0x4c) = *(int *)((int64_t)plVar29 + 0x4c) + 1;
                  }
                  else {
                    if (0 < (int)plVar29[9]) {
                      *(int *)(plVar29 + 9) = (int)plVar29[9] + -1;
                    }
                    *(float *)(plVar29 + 8) = fVar49 + *(float *)(plVar29 + 8);
                  }
                }
                lVar44 = lVar44 + 1;
              } while (lVar44 != 0xc);
              if (local_94 == 0x80) {
                bVar48 = false;
              }
              else {
                iVar13 = FUN_017154c0();
                bVar48 = (iVar47 >> 0x1f & 0xcU) + iVar47 == iVar13;
              }
              *(bool *)((int64_t)plVar29 + 0x52) = bVar48;
              uVar37 = ~plVar9[3];
              *(bool *)(plVar29 + 10) = (uVar37 & 0xf00000000000) != 0;
              *(bool *)((int64_t)plVar29 + 0x51) = (uVar37 & 0xf0000000000) != 0;
            }
            else {
              iVar13 = FUN_01717720();
              if (((iVar13 < 7) &&
                  (((int)local_68 != 1 || (cVar11 = FUN_017177f0(), cVar11 != '\0')))) &&
                 (((int64_t *)plVar29[4] == (int64_t *)0x0 ||
                  (cVar11 = (**(code **)(*(int64_t *)plVar29[4] + 0x50))(), cVar11 == '\0')))) {
                if ((void *)plVar29[7] != (void *)0x0) {
                  local_88 = ((uint64_t)local_88 & 0xffffffffffffff00);
                  local_90 = (int64_t *)0x0;
                  local_78 = 0xffffffff;
                  local_70 = 0;
                  local_80 = (void *)plVar29[7];
                  while( true ) {
                    lVar44 = (int64_t)(int)local_78;
                    iVar13 = (int)local_78 + 1;
                    local_78 = CONCAT44(local_78._4_4_,iVar13);
                    if (*(int *)((int64_t)local_80 + 0xc) <= iVar13) break;
                    local_90 = *(int64_t **)
                                (*(int64_t *)((int64_t)local_80 + 0x10) + 8 + lVar44 * 8);
                    cVar11 = (**(code **)(*(int64_t *)local_90[4] + 0x50))();
                    if (cVar11 != '\0') {
                      FUN_01798230();
                      goto joined_r0x0178fb94;
                    }
                    if (local_78._4_4_ != 0) {
                      if ((int)local_78._4_4_ < 1) {
                        iVar13 = -local_78._4_4_;
                      }
                      else {
                        local_78 = CONCAT44(local_78._4_4_,(int)local_78 - local_78._4_4_);
                        FUN_00d23690();
                        local_70 = local_70 + local_78._4_4_;
                        iVar13 = 0;
                      }
                      local_78 = CONCAT44(iVar13,(int)local_78);
                    }
                  }
                  FUN_01798230();
                }
                plVar31 = (int64_t *)FUN_00e8fc40();
                FUN_01794ea0();
                (**(code **)(*plVar31 + 0x18))();
                local_88 = ((uint64_t)local_88 & 0xffffffffffffff00);
                local_90 = plVar31;
                FUN_00d21140();
                if (((char)local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_00d50b20();
                FUN_00d23340();
                plVar31 = local_90;
                local_38[0] = (char)local_88;
                ppcVar32 = &local_88;
                if ((char)local_88 == '\0') {
                  ppcVar32 = (code **)local_38;
                }
                *(void*)ppcVar32 = 0;
                if (((char)local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar31 == plVar29) {
                  if ((cVar33 == '\0') && (plVar31 != (int64_t *)0x0)) {
                    cVar33 = '\x01';
                    if (local_38[0] == '\0') {
                      FUN_00d50b00();
                    }
                  }
                  else if ((local_38[0] != '\0') && (plVar31 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  plVar29 = plVar31;
                  if (local_38[0] == '\0') {
                    if (plVar31 != (int64_t *)0x0) {
                      FUN_00d50b00();
                    }
                    if (cVar33 == '\0') goto LAB_0178fbe1;
                    FUN_00d50b20();
                    cVar33 = '\x01';
                  }
                  else if (cVar33 == '\0') {
LAB_0178fbe1:
                    cVar33 = '\x01';
                  }
                  else {
                    FUN_00d50b20();
                    cVar33 = '\x01';
                  }
                }
                *(void*)((int64_t)plVar29 + 0xc) = *(void*)(*param_2 + 0xc);
                *(void*)((int64_t)plVar29 + 0x14) = *(void*)(*param_2 + 0x14);
                plVar31 = (int64_t *)plVar29[4];
                goto joined_r0x0178fc25;
              }
            }
joined_r0x0178fb94:
            uVar37 = local_60;
            if ((cVar33 != '\0') && (plVar29 != (int64_t *)0x0)) {
              FUN_00d50b20();
              uVar37 = local_60;
            }
          }
        }
        local_60 = uVar37;
        if (plVar40 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        iVar13 = (int)local_68;
        uVar28 = (uint64_t)(iVar13 + 1);
        uVar37 = local_68;
        local_68 = uVar28;
      } while (iVar13 != local_c0);
    }
    if (plVar9 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    local_b8 = local_b8 + 1;
    if (local_b8 == (uint)bVar2 * 2 + 1) {
      *(void*)(this_ptr + 1) = 0;
      if (((char)local_60 == '\0') && (local_a8 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      *this_ptr = local_a8;
      *(void*)(this_ptr + 1) = 1;
      if (plVar8 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (plVar39 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (puVar23 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (plVar7 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      return this_ptr;
    }
  } while( true );
}



// ============================================================
// 0178a800
// ============================================================
// Function: FUN_0178a800
// Address: 0178a800
// Size: 5681 bytes
// Class: MUBarSignature

void* FUN_0178a800(void*param_1,int64_t *param_2,void*param_3)

{
  void*puVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  uint32_t uVar6;
  void*puVar7;
  int64_t lVar8;
  void *pvVar9;
  int extraout_var;
  int extraout_var_00;
  void**ppuVar10;
  uint64_t uVar11;
  int64_t *plVar12;
  void*puVar13;
  int extraout_var_01;
  void**ppuVar14;
  int64_t *plVar15;
  void*puVar16;
  uint64_t uVar17;
  void* pVar18;
  int64_t lVar19;
  int iVar20;
  int iVar21;
  int64_t arg1;
  void*this_ptr;
  byte bVar22;
  int iStack_124;
  int iStack_11c;
  uint64_t local_108;
  char local_100;
  uint64_t local_f8;
  uint64_t local_f0;
  void*local_e8;
  void*local_e0;
  void*local_d8;
  uint local_cc;
  uint64_t local_c8;
  void*local_c0;
  void*local_b8;
  void*local_b0;
  uint64_t local_a8;
  int local_a0;
  uint64_t local_98;
  int64_t *local_90;
  char local_81;
  int64_t *local_80;
  void*local_78;
  void*local_70;
  char local_68;
  int64_t *local_60;
  char local_58 [8];
  void*local_50;
  uint64_t local_48;
  int local_40;
  void*local_38;
  
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02572358;
  pcVar3 = g_02572370;
  local_d8 = puVar7;
  (*g_02572370)();
  puVar7 = (void*)*param_2;
  if ((puVar7 != (void*)0x0) && (*(int *)((int64_t)puVar7 + 0xc) != 0)) {
    local_b8._0_1_ = '\0';
    local_c0 = (void*)0x0;
    local_a8 = 0xffffffff;
    local_a0 = 0;
    local_a8._4_4_ = 0;
    local_b0 = puVar7;
    local_80 = param_2;
    while( true ) {
      if (local_a8._4_4_ != 0) {
        if (local_a8._4_4_ < 1) {
          iVar20 = -local_a8._4_4_;
        }
        else {
          iVar20 = (void*)local_a8 - local_a8._4_4_;
          local_a8 = CONCAT44(local_a8._4_4_,iVar20);
          FUN_00d23690();
          local_a0 = local_a0 + local_a8._4_4_;
          iVar20 = 0;
        }
        local_a8 = CONCAT44(iVar20,(void*)local_a8);
      }
      lVar8 = (int64_t)(int)(void*)local_a8;
      iVar20 = (void*)local_a8 + 1;
      local_a8 = CONCAT44(local_a8._4_4_,iVar20);
      if (*(int *)((int64_t)local_b0 + 0xc) <= iVar20) break;
      lVar19 = local_b0[2];
      local_c0 = *(void**)(lVar19 + 8 + lVar8 * 8);
      pvVar9 = _pthread_getspecific((void*)lVar19);
      pVar18 = (void*)lVar19;
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      plVar15 = local_60;
      if ((local_58[0] != '\0') && (local_60 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (plVar15 != (void*)0x0) {
        pvVar9 = _pthread_getspecific(pVar18);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        pvVar9 = _pthread_getspecific(pVar18);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152ebe0();
        puVar7 = local_70;
        if (local_68 == '\0') {
          if (local_70 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_68 = '\0';
        }
        local_60 = puVar7;
        local_58[0] = '\0';
        FUN_00d21140();
        if ((local_58[0] != '\0') && (local_60 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (puVar7 != (void*)0x0) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_100 != '\0') && (local_108 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_001159b0();
    if (*(int *)((int64_t)local_d8 + 0xc) != 0) {
      FUN_00d23310();
      puVar7 = local_c0;
      ppuVar14 = &local_b8;
      ppuVar10 = (void**)&local_108;
      if ((char)local_b8 != '\0') {
        ppuVar10 = ppuVar14;
      }
      local_108 = (void*)CONCAT71(local_108._1_7_,(char)local_b8);
      *(void*)ppuVar10 = 0;
      if (((char)local_b8 != '\0') && (puVar7 != (void*)0x0)) {
        FUN_00d50b20();
      }
      pVar18 = (void*)ppuVar14;
      pvVar9 = _pthread_getspecific(pVar18);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01267000();
      pvVar9 = _pthread_getspecific(pVar18);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      local_38 = local_60;
      if (local_58[0] == '\0') {
        if (((local_60 != (void*)0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
           (local_60 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_58[0] = '\0';
      }
      if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_108 != '\0') && (puVar7 != (void*)0x0)) {
        FUN_00d50b20();
      }
      iStack_124 = (int)((uint64_t)param_1 >> 0x20);
      if (iStack_124 == 0) {
        local_108 = (void*)FUN_00e7bdb0();
      }
      else {
        pvVar9 = _pthread_getspecific(pVar18);
        if ((pvVar9 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          pVar18 = (void*)local_38;
        }
        local_108 = (void*)FUN_016caaa0();
      }
      iStack_11c = (int)((uint64_t)param_3 >> 0x20);
      if (iStack_11c == 0) {
        FUN_00e7bdb0();
        iVar20 = extraout_var;
      }
      else {
        pvVar9 = _pthread_getspecific(pVar18);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016caaa0();
        iVar20 = extraout_var_00;
      }
      FUN_00d23310();
      puVar7 = local_c0;
      local_70 = (void*)CONCAT71(local_70._1_7_,(char)local_b8);
      ppuVar14 = &local_70;
      ppuVar10 = &local_b8;
      if ((char)local_b8 == '\0') {
        ppuVar10 = ppuVar14;
      }
      *(void*)ppuVar10 = 0;
      if (((char)local_b8 != '\0') && (local_c0 != (void*)0x0)) {
        FUN_00d50b20();
      }
      pvVar9 = _pthread_getspecific((void*)ppuVar14);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01508450();
      plVar15 = local_60;
      if (local_58[0] == '\0') {
        if (local_60 != (void*)0x0) {
          FUN_00d50b00();
          goto LAB_0178adae;
        }
        if (*(int64_t *)(arg1 + 0x30) != 0) {
          *(void*)(arg1 + 0x30) = 0;
          local_78 = (void*)CONCAT71(local_78._1_7_,1);
          goto LAB_0178ade4;
        }
      }
      else {
        local_58[0] = '\0';
LAB_0178adae:
        puVar13 = *(void**)(arg1 + 0x30);
        if (puVar13 != plVar15) {
          local_78 = (void*)CONCAT71(local_78._1_7_,plVar15 == (void*)0x0);
          if (plVar15 != (void*)0x0) {
            FUN_00d50b00();
          }
          *(int64_t **)(arg1 + 0x30) = plVar15;
          if (puVar13 != (void*)0x0) {
LAB_0178ade4:
            FUN_00d50b20();
          }
        }
        if (plVar15 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
      if ((local_58[0] != '\0') && (local_60 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_70 != '\0') && (puVar7 != (void*)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d23310();
      puVar7 = local_c0;
      ppuVar14 = &local_70;
      ppuVar10 = &local_b8;
      if ((char)local_b8 == '\0') {
        ppuVar10 = ppuVar14;
      }
      local_70 = (void*)CONCAT71(local_70._1_7_,(char)local_b8);
      *(void*)ppuVar10 = 0;
      if (((char)local_b8 != '\0') && (local_c0 != (void*)0x0)) {
        FUN_00d50b20();
      }
      pvVar9 = _pthread_getspecific((void*)ppuVar14);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01267000();
      puVar13 = *(void**)(arg1 + 0x38);
      plVar15 = puVar13;
      if (puVar13 != local_60) {
        if (local_58[0] == '\0') {
          if (local_60 == (void*)0x0) {
            plVar15 = (void*)0x0;
            goto LAB_0178aebb;
          }
          FUN_00d50b00();
          puVar13 = *(void**)(arg1 + 0x38);
          *(int64_t **)(arg1 + 0x38) = local_60;
          plVar15 = local_60;
        }
        else {
          local_58[0] = '\0';
          plVar15 = local_60;
LAB_0178aebb:
          *(int64_t **)(arg1 + 0x38) = plVar15;
        }
        if (puVar13 != (void*)0x0) {
          FUN_00d50b20();
          plVar15 = local_60;
        }
      }
      if ((local_58[0] != '\0') && (plVar15 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_70 != '\0') && (puVar7 != (void*)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d242c0();
      uVar11 = FUN_00d216c0();
      local_cc = (uint)CONCAT71((int7)((uint64_t)uVar11 >> 8),1);
      bVar5 = false;
      bVar22 = 0;
      plVar15 = (int64_t *)0x0;
      do {
        plVar12 = (int64_t *)FUN_00e8fc40();
        FUN_0111d0d0();
        (**(code **)(*plVar12 + 0x18))();
        local_80 = plVar12;
        if ((bool)(bVar22 & plVar15 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        puVar7 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar7 = &g_02572358;
        (*pcVar3)();
        local_78 = puVar7;
        puVar7 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar7 = &g_02572358;
        (*pcVar3)();
        puVar13 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar13 = &g_02572358;
        (*pcVar3)();
        local_e0 = puVar13;
        FUN_00e7bcc0();
        FUN_00e7bcc0();
        FUN_00e7bcc0();
        FUN_00e7bcc0();
        puVar13 = (void*)FUN_00e7bcc0();
        local_f0 = FUN_00e7bcc0();
        local_b8._0_1_ = '\0';
        local_c0 = (void*)0x0;
        local_b0 = local_d8;
        local_a8 = 0xffffffff;
        local_a0 = 0;
        local_a8._4_4_ = 0;
        while( true ) {
          if (local_a8._4_4_ != 0) {
            if (local_a8._4_4_ < 1) {
              iVar21 = -local_a8._4_4_;
            }
            else {
              iVar21 = (void*)local_a8 - local_a8._4_4_;
              local_a8 = CONCAT44(local_a8._4_4_,iVar21);
              FUN_00d23690();
              local_a0 = local_a0 + local_a8._4_4_;
              iVar21 = 0;
            }
            local_a8 = CONCAT44(iVar21,(void*)local_a8);
          }
          lVar8 = (int64_t)(int)(void*)local_a8;
          iVar21 = (void*)local_a8 + 1;
          local_a8 = CONCAT44(local_a8._4_4_,iVar21);
          if (*(int *)((int64_t)local_b0 + 0xc) <= iVar21) break;
          lVar19 = local_b0[2];
          local_c0 = *(void**)(lVar19 + 8 + lVar8 * 8);
          local_f8 = FUN_0178c570(lVar19,0);
          if (*(int *)((int64_t)local_78 + 0xc) == 0) {
LAB_0178bc1c:
            if (local_81 != '\0') {
LAB_0178bc26:
              if ((local_108._4_4_ != 0) && (local_f8._4_4_ != 0)) {
                cVar4 = FUN_00e7c020();
                if (cVar4 != '\0') goto LAB_0178b0e0;
              }
              if (((iVar20 == 0) || (local_f8._4_4_ == 0)) ||
                 (cVar4 = FUN_00e7c020(), cVar4 != '\0')) {
                local_60 = local_c0;
                local_58[0] = '\0';
                FUN_00d21140();
                if ((local_58[0] != '\0') && (local_60 != (void*)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
          }
          else {
            pvVar9 = _pthread_getspecific((void*)lVar19);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar11 = FUN_00d23310();
            plVar15 = local_60;
            local_70 = (void*)CONCAT71(local_70._1_7_,local_58[0]);
            ppuVar14 = (void**)local_58;
            if (local_58[0] == '\0') {
              ppuVar14 = &local_70;
            }
            *(char *)ppuVar14 = '\0';
            if ((local_58[0] != '\0') && (plVar15 != (void*)0x0)) {
              uVar11 = FUN_00d50b20();
            }
            if (((char)local_70 == '\0') && (plVar15 != (void*)0x0)) {
              uVar11 = FUN_00d50b00();
            }
            FUN_0178c570(uVar11,0);
            pVar18 = 0;
            local_98 = (void*)FUN_016c4630(0,1);
            if (plVar15 != (void*)0x0) {
              FUN_00d50b20();
            }
            pvVar9 = _pthread_getspecific(pVar18);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_c8 = (void*)FUN_016c4630(0,1);
            if ((((uint64_t)local_c8 >> 0x20 == 0) || (local_98._4_4_ == 0)) ||
               (cVar4 = FUN_00e7c020(), cVar4 == '\0')) {
              pVar18 = *(int *)((int64_t)local_b0 + 0xc) - 1;
              if ((void*)local_a8 != pVar18) goto LAB_0178bc1c;
            }
            else {
              pVar18 = *(int *)((int64_t)local_b0 + 0xc) - 1;
            }
            if ((void*)local_a8 == pVar18) {
              pvVar9 = _pthread_getspecific(pVar18);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              pVar18 = 0;
              FUN_016c47d0(0,local_f8);
              uVar6 = FUN_0123ffa0();
              local_e8 = (void*)CONCAT44(local_e8._4_4_,uVar6);
              local_70 = local_98;
              FUN_00e7c260();
              local_c8 = local_70;
              if ((local_58[0] != '\0') && (local_60 != (void*)0x0)) {
                FUN_00d50b20();
              }
            }
            if (((iStack_124 != 0) && (local_98._4_4_ != 0)) &&
               (cVar4 = FUN_00e7c020(), cVar4 != '\0')) {
              local_98 = param_1;
            }
            iVar21 = local_c8._4_4_;
            puVar16 = local_c8;
            if (((iStack_11c != 0) && (local_c8._4_4_ != 0)) &&
               (cVar4 = FUN_00e7c020(), iVar21 = iStack_11c, puVar16 = param_3, cVar4 == '\0')) {
              iVar21 = local_c8._4_4_;
              if (local_98._4_4_ != 0) goto LAB_0178b41e;
LAB_0178b450:
              plVar15 = (int64_t *)FUN_00e8fc40();
              FUN_01794ea0();
              (**(code **)(*plVar15 + 0x18))();
              *(void**)((int64_t)plVar15 + 0xc) = local_98;
              *(void**)((int64_t)plVar15 + 0x14) = local_c8;
              puVar16 = *(void**)(arg1 + 0x50);
              local_90 = plVar15;
              if (puVar16 != local_78) {
                FUN_00d50b00();
                *(void**)(arg1 + 0x50) = local_78;
                if (puVar16 != (void*)0x0) {
                  FUN_00d50b20();
                }
              }
              if (*(int64_t *)(arg1 + 0x48) != 0) {
                *(void*)(arg1 + 0x48) = 0;
                FUN_00d50b20();
              }
              if (((*(int64_t *)(arg1 + 0x30) != 0) && (local_f0 >> 0x20 != 0)) &&
                 ((local_98._4_4_ != 0 &&
                  ((local_f0 >> 0x20 != 0 && (cVar4 = FUN_00e7c020(), cVar4 == '\0')))))) {
                pvVar9 = _pthread_getspecific(pVar18);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar9 = _pthread_getspecific(pVar18);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                uVar11 = FUN_016c4760();
                pVar18 = 0;
                FUN_01510b20(0,uVar11,&local_f0,0);
                puVar16 = *(void**)(arg1 + 0x28);
                plVar15 = puVar16;
                if (puVar16 != local_60) {
                  if (local_58[0] == '\0') {
                    if (local_60 == (void*)0x0) {
                      plVar15 = (void*)0x0;
                      goto LAB_0178b5bb;
                    }
                    FUN_00d50b00();
                    puVar16 = *(void**)(arg1 + 0x28);
                    *(int64_t **)(arg1 + 0x28) = local_60;
                    plVar15 = local_60;
                  }
                  else {
                    local_58[0] = '\0';
                    plVar15 = local_60;
LAB_0178b5bb:
                    *(int64_t **)(arg1 + 0x28) = plVar15;
                  }
                  pVar18 = (void*)puVar16;
                  if (puVar16 != (void*)0x0) {
                    FUN_00d50b20();
                    plVar15 = local_60;
                  }
                }
                if ((local_58[0] != '\0') && (plVar15 != (void*)0x0)) {
                  FUN_00d50b20();
                }
                if (local_f0._4_4_ != 0) {
                  pvVar9 = _pthread_getspecific(pVar18);
                  if ((pvVar9 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                    pVar18 = (void*)local_38;
                  }
                  local_f0 = FUN_016caaa0();
                }
              }
              FUN_0178c910();
              plVar15 = local_60;
              if ((local_58[0] == '\0') && (local_60 != (void*)0x0)) {
                FUN_00d50b00();
              }
              local_60 = local_90;
              local_58[0] = '\0';
              FUN_00d21140();
              if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (!bVar5) {
                FUN_01790bd0();
              }
              puVar16 = (void*)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar16 = &g_02572358;
              (*pcVar3)();
              FUN_01787bb0();
              if (*(char *)(arg1 + 0x40) == '\0') {
                local_58[0] = 0;
                local_60 = (int64_t *)0x0;
                local_48 = 0xffffffff;
                local_40 = 0;
                local_48._4_4_ = 0;
                local_50 = puVar16;
                while( true ) {
                  if (local_48._4_4_ != 0) {
                    if (local_48._4_4_ < 1) {
                      iVar21 = -local_48._4_4_;
                    }
                    else {
                      iVar21 = (int)local_48 - local_48._4_4_;
                      local_48 = CONCAT44(local_48._4_4_,iVar21);
                      FUN_00d23690();
                      local_40 = local_40 + local_48._4_4_;
                      iVar21 = 0;
                    }
                    local_48 = CONCAT44(iVar21,(int)local_48);
                  }
                  lVar8 = (int64_t)(int)local_48;
                  iVar21 = (int)local_48 + 1;
                  local_48 = CONCAT44(local_48._4_4_,iVar21);
                  if (*(int *)((int64_t)local_50 + 0xc) <= iVar21) break;
                  lVar19 = local_50[2];
                  local_60 = *(int64_t **)(lVar19 + 8 + lVar8 * 8);
                  pvVar9 = _pthread_getspecific((void*)lVar19);
                  pVar18 = (void*)lVar19;
                  if ((pvVar9 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
                    puVar1 = *(void**)((int64_t)local_60 + 0x20);
                  }
                  else {
                    pVar18 = (void*)local_80;
                    puVar1 = *(void**)((int64_t)local_60 + 0x20);
                  }
                  if (puVar1 != (void*)0x0) {
                    FUN_00d50b00();
                  }
                  pvVar9 = _pthread_getspecific(pVar18);
                  if ((pvVar9 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                    pVar18 = (void*)local_38;
                  }
                  uVar11 = FUN_016c4760();
                  pvVar9 = _pthread_getspecific(pVar18);
                  if (pvVar9 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  uVar17 = FUN_016c4760();
                  local_68 = '\0';
                  local_70 = puVar1;
                  FUN_012502a0(uVar17,uVar11,(int)local_48 != 0 || local_40 != 0);
                  if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
                    FUN_00d50b20();
                  }
                  if (puVar1 != (void*)0x0) {
                    FUN_00d50b20();
                  }
                  local_70 = *(void**)((int64_t)local_60 + 0x14);
                  FUN_00e7b970();
                  local_e8 = local_70;
                  if (*(char *)((int64_t)local_60 + 0x50) != '\0') {
                    FUN_00e7b820();
                  }
                  if (*(char *)((int64_t)local_60 + 0x51) != '\0') {
                    FUN_00e7b820();
                  }
                  FUN_00e7b820();
                  iVar21 = 0;
                  do {
                    cVar4 = FUN_01716980();
                    if (cVar4 != '\0') {
                      plVar12 = *(int64_t **)(arg1 + 0x28);
                      pvVar9 = _pthread_getspecific((void*)uVar17);
                      if (pvVar9 != (void *)0x0) {
                        plVar12 = *(int64_t **)(arg1 + 0x28);
                        lVar8 = FUN_00e8b990();
                        if (lVar8 != 0) {
                          plVar12 = (int64_t *)
                                    plVar12[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
                        }
                      }
                      cVar4 = (**(code **)(*plVar12 + 0x3b8))();
                      if (cVar4 == '\0') goto LAB_0178b8c3;
                    }
                    iVar21 = iVar21 + 1;
                  } while (iVar21 != 0xc);
                  FUN_00e7b820();
LAB_0178b8c3:
                }
                FUN_01798230();
                if (*(int *)((int64_t)puVar16 + 0xc) == 1) {
                  local_60 = local_c8;
                  FUN_00e7b970();
                  local_70 = local_60;
                  FUN_00e7b820();
                }
              }
              else {
                pvVar9 = _pthread_getspecific(pVar18);
                if ((pvVar9 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                  pVar18 = (void*)local_80;
                }
                pvVar9 = _pthread_getspecific(pVar18);
                if ((pvVar9 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                  pVar18 = (void*)local_38;
                }
                uVar11 = FUN_016c4760();
                pvVar9 = _pthread_getspecific(pVar18);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                uVar17 = FUN_016c4760();
                local_58[0] = '\0';
                local_60 = plVar15;
                FUN_012502a0(uVar17,uVar11,0);
                if ((local_58[0] != '\0') && (local_60 != (void*)0x0)) {
                  FUN_00d50b20();
                }
              }
              local_60 = local_78;
              local_58[0] = '\0';
              FUN_00d21140();
              if ((local_58[0] != '\0') && (local_60 != (void*)0x0)) {
                FUN_00d50b20();
              }
              puVar16 = (void*)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar16 = &g_02572358;
              (*pcVar3)();
              if (local_78 != (void*)0x0) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
              if (plVar15 != (void*)0x0) {
                FUN_00d50b20();
              }
              if (local_90 != (int64_t *)0x0) {
                FUN_00d50b20();
                local_78 = puVar16;
                goto LAB_0178bc1c;
              }
              local_78 = puVar16;
              if (local_81 == '\0') goto LAB_0178b0e0;
              goto LAB_0178bc26;
            }
            local_c8 = puVar16;
            if (local_98._4_4_ == 0) goto LAB_0178b450;
LAB_0178b41e:
            if ((iVar21 == 0) || (cVar4 = FUN_00e7c020(), cVar4 != '\0')) goto LAB_0178b450;
          }
LAB_0178b0e0:
        }
        FUN_0015ed50();
        if (*(int *)((int64_t)local_78 + 0xc) != 0) {
          local_c0 = local_78;
          local_b8._0_1_ = '\0';
          FUN_00d21140();
          if (((char)local_b8 != '\0') && (local_c0 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
        local_70 = (void*)((uint64_t)local_70 & 0xffffffff00000000);
        local_90 = (int64_t *)((uint64_t)local_90 & 0xffffffff00000000);
        if ((extraout_var_01 != 0) && (cVar4 = FUN_00e7c650(), cVar4 != '\0')) {
          local_c0 = puVar13;
          FUN_00e7bdc0();
          local_60 = local_c0;
          uVar6 = FUN_00e7c810();
          local_90 = (int64_t *)CONCAT44(local_90._4_4_,uVar6);
        }
        puVar13 = local_e0;
        pVar18 = 1;
        if (g_023b1e88 < (double)local_90._0_4_) {
          bVar5 = true;
        }
        puVar16 = *(void**)(arg1 + 0x68);
        if (puVar16 != local_e0) {
          pVar18 = 1;
          if (local_e0 != (void*)0x0) {
            pVar18 = 1;
            FUN_00d50b00();
          }
          *(void**)(arg1 + 0x68) = puVar13;
          if (puVar16 != (void*)0x0) {
            FUN_00d50b20();
          }
        }
        if (puVar13 != (void*)0x0) {
          FUN_00d50b20();
        }
        if (puVar7 != (void*)0x0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        plVar15 = local_80;
        bVar22 = 1;
        uVar2 = local_cc & 1;
        local_cc = 0;
      } while (uVar2 != 0);
      pvVar9 = _pthread_getspecific(pVar18);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_018847e0();
      *this_ptr = plVar15;
      *(void*)(this_ptr + 1) = 1;
      if (local_38 != (void*)0x0) {
        FUN_00d50b20();
      }
      goto LAB_0178ac38;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
LAB_0178ac38:
  FUN_00d50b20();
  return this_ptr;
}



// ============================================================
// 017891f0
// ============================================================
// Function: FUN_017891f0
// Address: 017891f0
// Size: 3801 bytes
// Class: MUBarSignature

void*
FUN_017891f0(void**param_1,int64_t *param_2,uint64_t param_3,int64_t *param_4)

{
  code *pcVar1;
  void**ppuVar2;
  char cVar3;
  void*puVar4;
  int64_t lVar5;
  void *pvVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  void***pppuVar10;
  void**ppuVar11;
  void**ppuVar12;
  void* pVar13;
  void**ppuVar14;
  int64_t lVar15;
  int iVar16;
  int64_t arg1;
  void*this_ptr;
  char *pcVar17;
  void***pppuVar18;
  int64_t *local_res8;
  int iStack_cc;
  void**local_b0;
  char local_a8;
  int64_t *local_a0;
  void**local_98;
  void*local_90;
  uint64_t local_88;
  char local_80;
  int64_t *local_78;
  void**local_70;
  char local_68 [8];
  void*local_60;
  uint64_t local_58;
  int local_50;
  void**local_48;
  char local_40;
  
  local_98 = param_1;
  local_78 = param_2;
  if (*local_res8 == 0) {
    ppuVar14 = (void**)(int64_t *)0x0;
  }
  else {
    FUN_00d23310();
    ppuVar2 = local_70;
    pppuVar10 = &local_48;
    if (local_68[0] != '\0') {
      pppuVar10 = (void***)local_68;
    }
    local_48 = (void**)CONCAT71(local_48._1_7_,local_68[0]);
    *(char *)pppuVar10 = '\0';
    if ((local_68[0] != '\0') && (local_70 != (void**)0x0)) {
      FUN_00d50b20();
    }
    ppuVar14 = ppuVar2;
    if (((char)local_48 == '\0') &&
       (ppuVar14 = (void**)(int64_t *)0x0, ppuVar2 != (void**)0x0)) {
      FUN_00d50b00();
      ppuVar14 = ppuVar2;
    }
  }
  *(void*)(arg1 + 0x40) = 1;
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  pcVar1 = g_02572370;
  (*g_02572370)();
  local_90 = puVar4;
  if (*(int64_t *)(arg1 + 0x48) != 0) {
    *(void*)(arg1 + 0x48) = 0;
    FUN_00d50b20();
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  (*pcVar1)();
  lVar5 = *(int64_t *)(arg1 + 0x50);
  *(void**)(arg1 + 0x50) = puVar4;
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  FUN_00d216c0();
  if (*param_4 != 0) {
    FUN_00d216c0();
  }
  if (*local_res8 != 0) {
    FUN_00d216c0();
  }
  puVar4 = (void*)*local_78;
  if ((puVar4 == (void*)0x0) || (*(int *)((int64_t)puVar4 + 0xc) == 0)) {
LAB_017895fc:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    local_68[0] = '\0';
    local_70 = (void**)0x0;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    local_a0 = (int64_t *)ppuVar14;
    local_60 = puVar4;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar16 = -local_58._4_4_;
        }
        else {
          iVar16 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar16);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar16 = 0;
        }
        local_58 = CONCAT44(iVar16,(int)local_58);
      }
      lVar5 = (int64_t)(int)local_58;
      iVar16 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar16);
      if (*(int *)((int64_t)local_60 + 0xc) <= iVar16) break;
      lVar15 = local_60[2];
      local_70 = *(void***)(lVar15 + 8 + lVar5 * 8);
      pvVar6 = _pthread_getspecific((void*)lVar15);
      pVar13 = (void*)lVar15;
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      ppuVar14 = local_48;
      if ((local_40 != '\0') && (local_48 != (void**)0x0)) {
        FUN_00d50b20();
      }
      if (ppuVar14 != (void**)0x0) {
        pvVar6 = _pthread_getspecific(pVar13);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        pvVar6 = _pthread_getspecific(pVar13);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152ebe0();
        ppuVar14 = local_88;
        if (local_80 == '\0') {
          if (local_88 != (void**)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_80 = '\0';
        }
        local_48 = ppuVar14;
        local_40 = '\0';
        FUN_00d21140();
        if ((local_40 != '\0') && (local_48 != (void**)0x0)) {
          FUN_00d50b20();
        }
        if (ppuVar14 != (void**)0x0) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != (void**)0x0)) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != (void**)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_001159b0();
    ppuVar14 = (void**)local_a0;
    if (*(int *)((int64_t)local_90 + 0xc) == 0) goto LAB_017895fc;
    FUN_00d23310();
    ppuVar14 = local_70;
    pppuVar10 = (void***)local_68;
    pppuVar18 = &local_b0;
    if (local_68[0] != '\0') {
      pppuVar18 = pppuVar10;
    }
    local_b0 = (void**)CONCAT71(local_b0._1_7_,local_68[0]);
    *(void*)pppuVar18 = 0;
    if ((local_68[0] != '\0') && (ppuVar14 != (void**)0x0)) {
      FUN_00d50b20();
    }
    pVar13 = (void*)pppuVar10;
    pvVar6 = _pthread_getspecific(pVar13);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01267000();
    pvVar6 = _pthread_getspecific(pVar13);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    ppuVar2 = local_48;
    if (local_40 == '\0') {
      if (((local_48 != (void**)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
         (local_48 != (void**)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_80 != '\0') && (local_88 != (void**)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_b0 != '\0') && (ppuVar14 != (void**)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d23310();
    ppuVar14 = local_70;
    local_88 = (void**)CONCAT71(local_88._1_7_,local_68[0]);
    ppuVar12 = (void**)local_68;
    if (local_68[0] == '\0') {
      ppuVar12 = (void**)&local_88;
    }
    *(char *)ppuVar12 = '\0';
    if ((local_68[0] != '\0') && (ppuVar14 != (void**)0x0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(pVar13);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01508450();
    ppuVar12 = local_48;
    if (local_40 == '\0') {
      if (local_48 != (void**)0x0) {
        FUN_00d50b00();
        goto LAB_0178978b;
      }
      if (*(int64_t *)(arg1 + 0x30) != 0) {
        *(void*)(arg1 + 0x30) = 0;
        goto LAB_017897d7;
      }
    }
    else {
      local_40 = '\0';
LAB_0178978b:
      ppuVar11 = *(void***)(arg1 + 0x30);
      if (ppuVar11 != ppuVar12) {
        if (ppuVar12 != (void**)0x0) {
          FUN_00d50b00();
        }
        *(void***)(arg1 + 0x30) = ppuVar12;
        if (ppuVar11 != (void**)0x0) {
LAB_017897d7:
          FUN_00d50b20();
        }
      }
      if (ppuVar12 != (void**)0x0) {
        FUN_00d50b20();
      }
    }
    if ((local_40 != '\0') && (local_48 != (void**)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_88 != '\0') && (ppuVar14 != (void**)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d23310();
    ppuVar12 = local_70;
    ppuVar14 = (void**)local_68;
    ppuVar11 = (void**)&local_88;
    if (local_68[0] != '\0') {
      ppuVar11 = ppuVar14;
    }
    local_88 = (void**)CONCAT71(local_88._1_7_,local_68[0]);
    *(char *)ppuVar11 = '\0';
    if ((local_68[0] != '\0') && (ppuVar12 != (void**)0x0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific((void*)ppuVar14);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01267000();
    ppuVar11 = *(void***)(arg1 + 0x38);
    if (ppuVar11 != local_48) {
      ppuVar14 = ppuVar11;
      if (local_40 == '\0') {
        if (local_48 == (void**)0x0) {
          ppuVar11 = (void**)0x0;
        }
        else {
          FUN_00d50b00();
          ppuVar11 = local_48;
          ppuVar14 = *(void***)(arg1 + 0x38);
        }
      }
      else {
        local_40 = '\0';
        ppuVar11 = local_48;
      }
      *(void***)(arg1 + 0x38) = ppuVar11;
      if (ppuVar14 != (void**)0x0) {
        FUN_00d50b20();
        ppuVar11 = local_48;
      }
    }
    pVar13 = (void*)ppuVar14;
    if ((local_40 != '\0') && (ppuVar11 != (void**)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_88 != '\0') && (ppuVar12 != (void**)0x0)) {
      FUN_00d50b20();
    }
    plVar7 = (int64_t *)FUN_00e8fc40();
    FUN_01794ea0();
    (**(code **)(*plVar7 + 0x18))();
    local_78 = plVar7;
    pvVar6 = _pthread_getspecific(pVar13);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar8 = FUN_016caaa0();
    *(void*)((int64_t)plVar7 + 0xc) = uVar8;
    pvVar6 = _pthread_getspecific(pVar13);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar8 = FUN_016caaa0();
    *(void*)((int64_t)local_78 + 0x14) = uVar8;
    local_68[0] = '\0';
    local_70 = (void**)0x0;
    local_60 = local_90;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar16 = -local_58._4_4_;
        }
        else {
          iVar16 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar16);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar16 = 0;
        }
        local_58 = CONCAT44(iVar16,(int)local_58);
      }
      lVar5 = (int64_t)(int)local_58;
      iVar16 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar16);
      if (*(int *)((int64_t)local_60 + 0xc) <= iVar16) break;
      lVar15 = local_60[2];
      local_70 = *(void***)(lVar15 + 8 + lVar5 * 8);
      pvVar6 = _pthread_getspecific((void*)lVar15);
      pVar13 = (void*)lVar15;
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_88 = (void**)FUN_01507970();
      local_48 = local_98;
      FUN_00e7c280();
      local_b0 = local_48;
      if (((local_88._4_4_ != 0) && ((uint64_t)local_48 >> 0x20 != 0)) &&
         (cVar3 = FUN_00e7c020(), cVar3 == '\0')) {
        pvVar6 = _pthread_getspecific(pVar13);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar9 = FUN_01507970();
        if (((uVar9 >> 0x20 != 0) && (iStack_cc = (int)((uint64_t)param_3 >> 0x20), iStack_cc != 0)
            ) && (cVar3 = FUN_00e7c020(), plVar7 = local_78, cVar3 != '\0')) {
          local_88 = (void**)FUN_0178c570();
          if ((((char)local_b0 != '\0') && ((uint64_t)local_88 >> 0x20 != 0)) &&
             ((int)plVar7[2] != 0)) {
            cVar3 = FUN_00e7c020();
            if (((cVar3 == '\0' && local_88._4_4_ != 0) && ((int)plVar7[3] != 0)) &&
               (cVar3 = FUN_00e7c020(), cVar3 != '\0')) {
              local_48 = local_70;
              local_40 = '\0';
              FUN_00d21140();
              if ((local_40 != '\0') && (local_48 != (void**)0x0)) {
                FUN_00d50b20();
              }
            }
          }
        }
      }
    }
    puVar4 = local_60;
    FUN_0015ed50();
    if (*(int64_t *)(arg1 + 0x30) != 0) {
      pvVar6 = _pthread_getspecific((void*)puVar4);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01510b20(0,local_98,0,0);
      ppuVar14 = *(void***)(arg1 + 0x28);
      ppuVar12 = ppuVar14;
      if (ppuVar14 != local_70) {
        if (local_68[0] == '\0') {
          if (local_70 == (void**)0x0) {
            ppuVar12 = (void**)0x0;
          }
          else {
            FUN_00d50b00();
            ppuVar14 = *(void***)(arg1 + 0x28);
            ppuVar12 = local_70;
          }
        }
        else {
          local_68[0] = '\0';
          ppuVar12 = local_70;
        }
        *(void***)(arg1 + 0x28) = ppuVar12;
        if (ppuVar14 != (void**)0x0) {
          FUN_00d50b20();
          ppuVar12 = local_70;
        }
      }
      if ((local_68[0] != '\0') && (ppuVar12 != (void**)0x0)) {
        FUN_00d50b20();
      }
    }
    plVar7 = local_78;
    uVar8 = FUN_0178c910();
    ppuVar12 = local_70;
    if (local_70 == (void**)0x0) {
      local_98 = (void**)
                 CONCAT44(local_98._4_4_,(int)CONCAT71((int7)((uint64_t)uVar8 >> 8),1));
    }
    else {
      if (local_68[0] == '\0') {
        FUN_00d50b00();
      }
      local_98 = (void**)((uint64_t)local_98 & 0xffffffff00000000);
    }
    local_70 = (void**)plVar7;
    local_68[0] = '\0';
    FUN_00d21140();
    if ((local_68[0] != '\0') && (local_70 != (void**)0x0)) {
      FUN_00d50b20();
    }
    if (*param_4 != 0) {
      plVar7 = (int64_t *)local_78[4];
      if (plVar7 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_68[0] = '\0';
      local_70 = (void**)plVar7;
      FUN_00d21140();
      if ((local_68[0] != '\0') && (local_70 != (void**)0x0)) {
        FUN_00d50b20();
      }
      if (plVar7 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((*local_res8 != 0) && (*(int *)(local_78[7] + 0xc) != 0)) {
        FUN_00d23310();
        ppuVar14 = local_70;
        local_48 = (void**)CONCAT71(local_48._1_7_,local_68[0]);
        pppuVar10 = (void***)local_68;
        if (local_68[0] == '\0') {
          pppuVar10 = &local_48;
        }
        *(char *)pppuVar10 = '\0';
        if ((local_68[0] != '\0') && (local_70 != (void**)0x0)) {
          FUN_00d50b20();
        }
        plVar7 = ppuVar14[4];
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_68[0] = '\0';
        local_70 = (void**)plVar7;
        FUN_00d21140();
        if ((local_68[0] != '\0') && (local_70 != (void**)0x0)) {
          FUN_00d50b20();
        }
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((char)local_48 != '\0') {
          FUN_00d50b20();
        }
      }
      if (*(int *)(local_78[6] + 0xc) != 0) {
        FUN_00d23310();
        ppuVar14 = local_70;
        local_48 = (void**)CONCAT71(local_48._1_7_,local_68[0]);
        pppuVar10 = (void***)local_68;
        if (local_68[0] == '\0') {
          pppuVar10 = &local_48;
        }
        *(char *)pppuVar10 = '\0';
        if ((local_68[0] != '\0') && (local_70 != (void**)0x0)) {
          FUN_00d50b20();
        }
        plVar7 = ppuVar14[4];
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_68[0] = '\0';
        local_70 = (void**)plVar7;
        FUN_00d21140();
        if ((local_68[0] != '\0') && (local_70 != (void**)0x0)) {
          FUN_00d50b20();
        }
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((char)local_48 != '\0') {
          FUN_00d50b20();
        }
        if (*local_res8 != 0) {
          FUN_00d23310();
          ppuVar14 = local_70;
          local_48 = (void**)CONCAT71(local_48._1_7_,local_68[0]);
          pppuVar10 = (void***)local_68;
          if (local_68[0] == '\0') {
            pppuVar10 = &local_48;
          }
          *(char *)pppuVar10 = '\0';
          if ((local_68[0] != '\0') && (local_70 != (void**)0x0)) {
            FUN_00d50b20();
          }
          iVar16 = *(int *)((int64_t)ppuVar14[7] + 0xc);
          if (((char)local_48 != '\0') && (ppuVar14 != (void**)0x0)) {
            FUN_00d50b20();
          }
          if (iVar16 != 0) {
            FUN_00d23310();
            ppuVar14 = local_70;
            pcVar17 = (char *)&local_88;
            if (local_68[0] != '\0') {
              pcVar17 = local_68;
            }
            local_88 = (void**)CONCAT71(local_88._1_7_,local_68[0]);
            *pcVar17 = '\0';
            if ((local_68[0] != '\0') && (ppuVar14 != (void**)0x0)) {
              FUN_00d50b20();
            }
            FUN_00d23310();
            ppuVar14 = local_70;
            pppuVar10 = (void***)local_68;
            if (local_68[0] == '\0') {
              pppuVar10 = &local_48;
            }
            local_48 = (void**)CONCAT71(local_48._1_7_,local_68[0]);
            *(char *)pppuVar10 = '\0';
            if ((local_68[0] != '\0') && (local_70 != (void**)0x0)) {
              FUN_00d50b20();
            }
            plVar7 = ppuVar14[4];
            if (plVar7 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_68[0] = '\0';
            local_70 = (void**)plVar7;
            FUN_00d21140();
            if ((local_68[0] != '\0') && (local_70 != (void**)0x0)) {
              FUN_00d50b20();
            }
            if (plVar7 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((char)local_48 != '\0') {
              FUN_00d50b20();
            }
            if ((char)local_88 != '\0') {
              FUN_00d50b20();
            }
          }
        }
      }
    }
    *(void*)(arg1 + 0x40) = 0;
    *(void*)(this_ptr + 1) = 0;
    if (((char)local_98 != '\0') && (ppuVar12 != (void**)0x0)) {
      FUN_00d50b00();
    }
    ppuVar14 = (void**)local_a0;
    *this_ptr = ppuVar12;
    *(void*)(this_ptr + 1) = 1;
    if (local_78 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    puVar4 = local_90;
    if (ppuVar2 != (void**)0x0) {
      FUN_00d50b20();
    }
    if (puVar4 == (void*)0x0) goto LAB_01789618;
  }
  FUN_00d50b20();
LAB_01789618:
  if (ppuVar14 != (void**)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 01c8b7d0
// ============================================================
// Function: FUN_01c8b7d0
// Address: 01c8b7d0
// Size: 4387 bytes
// Class: MUBarSignature

void FUN_01c8b7d0(int64_t *param_1,uint64_t param_2)

{
  void* pVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  char cVar4;
  int iVar5;
  uint64_t uVar6;
  int64_t lVar7;
  void *pvVar8;
  int64_t lVar9;
  void* pVar10;
  int64_t *in_RCX;
  int64_t *plVar11;
  void*puVar12;
  void*arg1;
  int64_t *this_ptr;
  bool bVar13;
  uint32_t uVar14;
  float fVar15;
  uint64_t in_XMM0_Qb;
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar21 [16];
  uint8_t auVar22 [16];
  uint64_t extraout_XMM0_Qb_01;
  uint64_t in_XMM1_Qb;
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  int64_t local_160;
  char local_158;
  uint8_t local_150 [8];
  uint32_t local_148;
  uint32_t uStack_144;
  uint32_t uStack_140;
  uint32_t uStack_13c;
  uint8_t local_138 [4];
  int iStack_134;
  int64_t *local_130;
  uint32_t local_124;
  int64_t *local_120;
  char local_118;
  int64_t *local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  int64_t *local_f0;
  uint64_t local_e8;
  uint64_t uStack_e0;
  uint8_t local_d8 [8];
  uint64_t uStack_d0;
  uint32_t local_c4;
  int64_t *local_c0;
  int64_t *local_b8;
  uint64_t local_b0;
  int64_t *local_a8;
  int64_t *local_a0;
  uint64_t local_98;
  uint64_t uStack_90;
  int64_t *local_80;
  int64_t *local_70;
  char local_68;
  uint64_t local_60;
  float local_58;
  uint32_t uStack_54;
  int local_48;
  
  uStack_d0 = in_XMM1_Qb;
  local_d8 = (uint8_t  [8])param_2;
  local_e8 = param_1;
  uStack_e0 = in_XMM0_Qb;
  FUN_01d48370();
  (**(code **)(*(int64_t *)*arg1 + 0x390))();
  (**(code **)(*this_ptr + 0x640))();
  local_a8 = local_60;
  if ((local_58._0_1_ == '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  plVar11 = (int64_t *)this_ptr[0x29];
  if (plVar11 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_80 = (int64_t *)this_ptr[0x2d];
  local_130 = plVar11;
  if (local_80 == (int64_t *)0x0) {
    FUN_01cfc6a0();
    local_80 = local_60;
    in_RCX = local_60;
    if (local_60 == (int64_t *)0x0) {
      local_80 = (int64_t *)0x0;
      local_b0 = 0;
    }
    else {
      local_b0 = CONCAT71((int7)((uint64_t)local_60 >> 8),1);
      if (local_58._0_1_ == '\0') {
        FUN_00d50b00();
      }
    }
  }
  else {
    uVar6 = FUN_00d50b00();
    local_b0 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
  }
  pVar10 = (void*)in_RCX;
  FUN_01d488d0();
  plVar11 = (int64_t *)*arg1;
  FUN_00d05530();
  (**(code **)(*plVar11 + 0x3b0))();
  FUN_01d48b40();
  plVar11 = (int64_t *)this_ptr[0x2e];
  if (plVar11 == (int64_t *)0x0) {
    (**(code **)(*local_a8 + 0x3a0))();
    local_c0 = local_60;
    if ((local_60 != (int64_t *)0x0) && (plVar11 = local_c0, local_58._0_1_ == '\0')) {
      FUN_00d50b00();
      plVar11 = local_c0;
    }
  }
  else {
    FUN_00d50b00();
  }
  local_c0 = plVar11;
  plVar11 = (int64_t *)this_ptr[0x2f];
  if (plVar11 == (int64_t *)0x0) {
    (**(code **)(*local_a8 + 0x3a8))();
    local_b8 = local_60;
    if ((local_60 != (int64_t *)0x0) && (plVar11 = local_b8, local_58._0_1_ == '\0')) {
      FUN_00d50b00();
      plVar11 = local_b8;
    }
  }
  else {
    FUN_00d50b00();
  }
  local_b8 = plVar11;
  local_d8._0_4_ = (float)local_d8._0_4_ + (float)local_e8;
  local_d8._4_4_ = (float)local_d8._4_4_ + local_e8._4_4_;
  uStack_d0._0_4_ = (float)uStack_d0 + (float)uStack_e0;
  uStack_d0._4_4_ = uStack_d0._4_4_ + uStack_e0._4_4_;
  auVar20._4_12_ = local_d8._4_12_;
  auVar20._0_4_ = (float)local_d8._0_4_ + g_02390d00;
  auVar24 = auVar20;
  (**(code **)(*local_130 + 0x368))();
  local_a0 = local_60;
  if ((local_58._0_1_ == '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01d488d0();
  plVar11 = local_a0;
  local_148 = local_e8._4_4_;
  uStack_144 = local_e8._4_4_;
  uStack_140 = uStack_e0._4_4_;
  uStack_13c = uStack_e0._4_4_;
  auVar16._4_4_ = local_d8._4_4_;
  auVar16._0_4_ = local_d8._4_4_;
  auVar16._8_4_ = uStack_d0._4_4_;
  auVar16._12_4_ = uStack_d0._4_4_;
  auVar17._4_12_ = auVar16._4_12_;
  auVar17._0_4_ = (float)local_d8._4_4_ + g_02390d00;
  _local_d8 = auVar17;
  if (local_a0 != (int64_t *)0x0) {
    local_58 = (float)((uint)local_58 & 0xffffff00);
    local_60 = (int64_t *)0x0;
    local_48 = -1;
    while( true ) {
      lVar7 = (int64_t)local_48;
      local_48 = local_48 + 1;
      if (*(int *)((int64_t)plVar11 + 0xc) <= local_48) break;
      local_60 = *(int64_t **)(plVar11[2] + 8 + lVar7 * 8);
      iVar5 = (**(code **)(*local_60 + 0x380))();
      if (iVar5 == 0) {
        plVar2 = (int64_t *)*arg1;
        uVar14 = (**(code **)(*local_60 + 0x368))();
        local_98 = CONCAT44(local_98._4_4_,uVar14);
        (**(code **)(*local_60 + 0x368))();
        auVar24._4_4_ = uStack_144;
        auVar24._0_4_ = (float)local_148;
        auVar24._8_4_ = uStack_140;
        auVar24._12_4_ = uStack_13c;
        (**(code **)(*plVar2 + 0x3e0))();
      }
    }
    FUN_01a01420();
    pVar10 = (void*)plVar11;
  }
  FUN_01d488d0();
  plVar11 = local_a0;
  if (local_a0 != (int64_t *)0x0) {
    local_58 = (float)((uint)local_58 & 0xffffff00);
    local_60 = (int64_t *)0x0;
    local_48 = -1;
    while( true ) {
      lVar7 = (int64_t)local_48;
      local_48 = local_48 + 1;
      if (*(int *)((int64_t)plVar11 + 0xc) <= local_48) break;
      local_60 = *(int64_t **)(plVar11[2] + 8 + lVar7 * 8);
      iVar5 = (**(code **)(*local_60 + 0x380))();
      if (iVar5 != 0) {
        plVar2 = (int64_t *)*arg1;
        uVar14 = (**(code **)(*local_60 + 0x368))();
        local_98 = CONCAT44(local_98._4_4_,uVar14);
        (**(code **)(*local_60 + 0x368))();
        auVar24._4_4_ = uStack_144;
        auVar24._0_4_ = (float)local_148;
        auVar24._8_4_ = uStack_140;
        auVar24._12_4_ = uStack_13c;
        (**(code **)(*plVar2 + 0x3e0))();
      }
    }
    FUN_01a01420();
    pVar10 = (void*)plVar11;
  }
  lVar7 = this_ptr[0x2b];
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  pvVar8 = _pthread_getspecific(pVar10);
  pVar1 = (void*)lVar7;
  if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
    pVar10 = pVar1;
  }
  iVar5 = FUN_016c2ea0();
  if (0 < iVar5) {
    (**(code **)(*this_ptr + 0x640))();
    (**(code **)(*local_70 + 0x370))();
    local_118 = 0;
    if (local_58._0_1_ == '\0') {
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = (float)((uint)local_58 & 0xffffff00);
    }
    local_118 = '\x01';
    local_120 = local_60;
    FUN_01d48a10();
    if ((local_118 != '\0') && (local_120 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58._0_1_ != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar8 = _pthread_getspecific(pVar10);
    if ((pvVar8 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
      plVar11 = (int64_t *)this_ptr[0x28];
    }
    else {
      plVar11 = (int64_t *)this_ptr[0x28];
    }
    if (plVar11 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_98 = (**(code **)(*plVar11 + 0x388))(g_02390d00 + (float)local_e8);
    FUN_0123fd00();
    pVar10 = 0;
    uVar6 = FUN_016cb9d0(local_98,1);
    FUN_00d50b20();
    local_c4 = 0xffffffff;
    local_124 = 0xffffffff;
    pvVar8 = _pthread_getspecific(pVar10);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar12 = local_150;
    FUN_016ca840(puVar12,uVar6,local_138,&local_c4);
    pVar10 = (void*)puVar12;
    if ((local_58._0_1_ == '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    plVar11 = (int64_t *)this_ptr[0x28];
    if (plVar11 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    pvVar8 = _pthread_getspecific(pVar10);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c98e0();
    local_98 = (**(code **)(*plVar11 + 0x390))();
    uStack_90 = extraout_XMM0_Qb;
    FUN_00d50b20();
    (**(code **)(*this_ptr + 0x640))();
    (**(code **)(*local_70 + 0x490))(0,0x11,0);
    local_f0 = local_60;
    if (local_58._0_1_ == '\0') {
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = (float)((uint)local_58 & 0xffffff00);
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x640))();
    puVar12 = (void*)((int64_t)&MACH_HEADER.magic + 1);
    (**(code **)(*local_70 + 0x490))(1,0x11,0);
    local_e8 = local_60;
    if (local_58._0_1_ == '\0') {
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = (float)((uint)local_58 & 0xffffff00);
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    auVar23._0_4_ = auVar20._0_4_ + g_02390124;
    auVar23._4_12_ = auVar20._4_12_;
    auVar18._0_4_ = g_023945e0 & (uint)(float)local_98;
    auVar18._4_4_ = _UNK_023945e4 & local_98._4_4_;
    auVar18._8_4_ = _UNK_023945e8 & (uint)uStack_90;
    auVar18._12_4_ = _UNK_023945ec & uStack_90._4_4_;
    auVar19._4_12_ = SUB1612(auVar18 | g_023945f0,4);
    auVar19._0_4_ = SUB164(auVar18 | g_023945f0,0) + (float)local_98;
    auVar20 = roundss(auVar19,auVar19,0xb);
    local_98 = CONCAT44(local_98._4_4_,auVar20._0_4_);
    auVar24 = auVar23;
    plVar11 = local_60;
    fVar15 = auVar20._0_4_;
    while (fVar15 <= auVar23._0_4_) {
      pVar10 = (void*)puVar12;
      FUN_01c8b390();
      if ((local_68 == '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      fVar15 = (float)local_60 + (float)local_98;
      uVar3 = (uint64_t)local_60 >> 0x20;
      local_60 = (int64_t *)CONCAT44((int)uVar3,fVar15);
      lVar9 = this_ptr[0x2d];
      if (lVar9 != 0) {
        FUN_00d50b00();
      }
      FUN_01d488d0();
      if (lVar9 != 0) {
        FUN_00d50b20();
      }
      (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
      (**(code **)(*local_a8 + 0x3a0))();
      local_108 = 0;
      if (local_68 == '\0') {
        if (local_70 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      local_108 = '\x01';
      local_110 = local_70;
      FUN_01d488d0();
      if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
      (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
      if (iStack_134 == 0) {
LAB_01c8c443:
        pvVar8 = _pthread_getspecific(pVar10);
        if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          pVar10 = pVar1;
        }
        cVar4 = FUN_016cb720();
        if (cVar4 == '\0') {
          FUN_01d488d0();
        }
        else {
          FUN_01d488d0();
        }
        auVar24._4_4_ = uStack_54;
        auVar24._0_4_ = local_58;
        auVar24._8_8_ = 0;
        (**(code **)(*(int64_t *)*arg1 + 0x3f8))(local_60,0);
      }
      else {
        plVar2 = (int64_t *)this_ptr[0x28];
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        pvVar8 = _pthread_getspecific(pVar10);
        if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          pVar10 = pVar1;
        }
        FUN_016c98e0();
        local_98 = (**(code **)(*plVar2 + 0x390))();
        uStack_90 = extraout_XMM0_Qb_00;
        FUN_00d50b20();
        auVar21._0_4_ = (uint)(float)local_98 & g_023945e0;
        auVar21._4_4_ = local_98._4_4_ & _UNK_023945e4;
        auVar21._8_4_ = (uint)uStack_90 & _UNK_023945e8;
        auVar21._12_4_ = uStack_90._4_4_ & _UNK_023945ec;
        auVar22._4_12_ = SUB1612(auVar21 | g_023945f0,4);
        auVar22._0_4_ = SUB164(auVar21 | g_023945f0,0) + (float)local_98;
        auVar24 = roundss(ZEXT816(0),auVar22,0xb);
        local_98 = CONCAT44(local_98._4_4_,auVar24._0_4_);
        auVar24._0_4_ = auVar24._0_4_ + g_02394210;
        if (fVar15 + local_58 + g_02390d00 < auVar24._0_4_) goto LAB_01c8c443;
      }
      if (iStack_134 == 0) {
        if (local_70 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        break;
      }
      pvVar8 = _pthread_getspecific(pVar10);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      puVar12 = local_138;
      FUN_016ca9d0(puVar12,local_150,&local_c4);
      if (plVar11 == local_70) {
LAB_01c8c62d:
        if (local_68 == '\0') {
LAB_01c8c650:
          if (local_70 != (int64_t *)0x0) goto LAB_01c8c670;
        }
        else if (local_70 != (int64_t *)0x0) {
          FUN_00d50b20();
          goto LAB_01c8c644;
        }
      }
      else {
        if (local_68 == '\0') {
          if (local_70 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          bVar13 = plVar11 != (int64_t *)0x0;
          plVar11 = local_70;
          if (bVar13) {
            FUN_00d50b20();
          }
          goto LAB_01c8c62d;
        }
        bVar13 = plVar11 == (int64_t *)0x0;
        plVar11 = local_70;
        if (bVar13) goto LAB_01c8c650;
        FUN_00d50b20();
LAB_01c8c644:
        if (local_70 == (int64_t *)0x0) goto LAB_01c8c190;
LAB_01c8c670:
        FUN_00d50b20();
      }
LAB_01c8c190:
      fVar15 = (float)local_98;
    }
    if (local_e8 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (local_f0 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar11 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  uVar6 = (**(code **)(*this_ptr + 0x640))();
  local_160 = g_026e41f0;
  if (g_026e41f0 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_158 = '\x01';
  (**(code **)(*local_70 + 0x3b0))(uVar6,&local_160);
  local_f8 = 0;
  if (local_58._0_1_ == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58._0_1_ = '\0';
  }
  local_f8 = '\x01';
  local_100 = local_60;
  FUN_01d488d0();
  if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58._0_1_ != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar11 = (int64_t *)*arg1;
  uVar6 = FUN_01e3f820();
  local_148 = (uint32_t)uVar6;
  uStack_144 = (uint32_t)((uint64_t)uVar6 >> 0x20);
  uStack_140 = (uint32_t)extraout_XMM0_Qb_01;
  uStack_13c = (uint32_t)((uint64_t)extraout_XMM0_Qb_01 >> 0x20);
  _local_d8 = auVar24;
  local_98 = FUN_01e3f820();
  FUN_01e3f820();
  (**(code **)(*plVar11 + 0x3e0))();
  FUN_01d48390();
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if (local_a0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_b8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_c0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_130 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_a8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_b0 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01786b30
// ============================================================
// Function: FUN_01786b30
// Address: 01786b30
// Size: 1947 bytes
// Class: MUBarSignature

void FUN_01786b30(void* param_1)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t this_ptr;
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
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  
  lVar1 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  FUN_00e8b7a0();
  FUN_00c8e2b0(g_02412520,0x30);
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar5 = *(int64_t *)(this_ptr + 0x40);
  if (lVar5 == local_68) {
    if (local_68 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(int64_t *)(this_ptr + 0x40) = local_68;
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  *(void*)(this_ptr + 0x54) = 3;
  *(void*)(this_ptr + 0x4c) = 0x101;
  uVar2 = FUN_00e7bcc0();
  *(void*)(this_ptr + 0x58) = uVar2;
  *(void*)(this_ptr + 0x4e) = 1;
  plVar3 = (int64_t *)FUN_000bea40();
  (**(code **)(*plVar3 + 0x18))();
  plVar6 = *(int64_t **)(this_ptr + 0x60);
  if (plVar6 == plVar3) {
    FUN_00d50b20();
  }
  else {
    *(int64_t **)(this_ptr + 0x60) = plVar3;
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar6 = *(int64_t **)(this_ptr + 0x60);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar6 = *(int64_t **)(this_ptr + 0x60);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x418))(0,g_0238fee8);
  if ((local_140 != '\0') && (local_148 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = *(int64_t **)(this_ptr + 0x60);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar6 = *(int64_t **)(this_ptr + 0x60);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x418))((int)g_0238fee8,0);
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0x4f) = 1;
  plVar3 = (int64_t *)FUN_000bea40();
  (**(code **)(*plVar3 + 0x18))();
  plVar6 = *(int64_t **)(this_ptr + 0x68);
  if (plVar6 == plVar3) {
    FUN_00d50b20();
  }
  else {
    *(int64_t **)(this_ptr + 0x68) = plVar3;
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar6 = *(int64_t **)(this_ptr + 0x68);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar6 = *(int64_t **)(this_ptr + 0x68);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x418))(0,0);
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = *(int64_t **)(this_ptr + 0x68);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar6 = *(int64_t **)(this_ptr + 0x68);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x418))((int)g_024111c0,g_0238fee8);
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = *(int64_t **)(this_ptr + 0x68);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar6 = *(int64_t **)(this_ptr + 0x68);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x418))((int)g_023b7c08,g_0238fee8);
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = *(int64_t **)(this_ptr + 0x68);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar6 = *(int64_t **)(this_ptr + 0x68);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x418))((int)g_023b4df8,g_023942d0);
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = *(int64_t **)(this_ptr + 0x68);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar6 = *(int64_t **)(this_ptr + 0x68);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x418))((int)g_024124f0,g_023942d0);
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = *(int64_t **)(this_ptr + 0x68);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar6 = *(int64_t **)(this_ptr + 0x68);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x418))((int)g_024124f8,0);
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0x50) = 0;
  plVar3 = (int64_t *)FUN_000bea40();
  (**(code **)(*plVar3 + 0x18))();
  plVar6 = *(int64_t **)(this_ptr + 0x70);
  if (plVar6 == plVar3) {
    FUN_00d50b20();
  }
  else {
    *(int64_t **)(this_ptr + 0x70) = plVar3;
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar6 = *(int64_t **)(this_ptr + 0x70);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar6 = *(int64_t **)(this_ptr + 0x70);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x418))(0,0);
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = *(int64_t **)(this_ptr + 0x70);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar6 = *(int64_t **)(this_ptr + 0x70);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x418))((int)g_0238fee8,g_0238fee8);
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0x51) = 1;
  plVar3 = (int64_t *)FUN_000bea40();
  (**(code **)(*plVar3 + 0x18))();
  plVar6 = *(int64_t **)(this_ptr + 0x78);
  if (plVar6 == plVar3) {
    FUN_00d50b20();
  }
  else {
    *(int64_t **)(this_ptr + 0x78) = plVar3;
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar6 = *(int64_t **)(this_ptr + 0x78);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar6 = *(int64_t **)(this_ptr + 0x78);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x418))(0,0);
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = *(int64_t **)(this_ptr + 0x78);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar6 = *(int64_t **)(this_ptr + 0x78);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x418))((int)g_02412500,g_02412508);
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = *(int64_t **)(this_ptr + 0x78);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar6 = *(int64_t **)(this_ptr + 0x78);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x418))((int)g_023b2c70,g_0238fee8);
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = *(int64_t **)(this_ptr + 0x78);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar6 = *(int64_t **)(this_ptr + 0x78);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x418))((int)g_023b3bc0,g_0238fee8);
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != lVar1) {
                        ___stack_chk_fail();
  }
  return;
}



// ============================================================
// 01787e50
// ============================================================
// Function: FUN_01787e50
// Address: 01787e50
// Size: 1370 bytes
// Class: MUBarSignature
// String references:
//   " %@"
//   "\t"
//   "\n"
//   "%@ (%Q-%Q)"
//   "%f %I %I %I"
//   " *"

void FUN_01787e50(void*param_1,int64_t param_2)

{
  int64_t lVar1;
  void*puVar2;
  char cVar3;
  void*puVar4;
  int64_t lVar5;
  int iVar6;
  int iVar7;
  int64_t arg1;
  void*this_ptr;
  uint32_t uVar8;
  uint64_t local_b8;
  uint8_t local_b0;
  void*local_a8;
  void*local_a0;
  uint32_t local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  int local_74;
  void*local_70;
  char local_68;
  int local_48;
  
  local_a8 = param_1;
  local_80 = param_2;
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_025795a8;
  (*g_025795c0)();
  lVar1 = *(int64_t *)(arg1 + 0x20);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00d94d80(*(void*)(arg1 + 0xc),&stack0xffffffffffffffa0);
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((int)local_80 < 5) {
    iVar6 = 1;
    if (1 < 5 - (int)local_80) {
      iVar6 = 5 - (int)local_80;
    }
    do {
      FUN_00d8db40();
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00d94d80();
  FUN_00d50b00();
  cVar3 = FUN_00d23d70();
  uVar8 = FUN_00d50b20();
  if (cVar3 != '\0') {
    FUN_01787bb0();
    uVar8 = FUN_00d94d80();
  }
  lVar1 = *(int64_t *)(arg1 + 0x30);
  if (lVar1 != 0) {
    local_48 = -1;
    while( true ) {
      lVar5 = (int64_t)local_48;
      local_48 = local_48 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_48) break;
      lVar5 = *(int64_t *)(*(int64_t *)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar5 * 8) + 0x20);
      local_98 = 1;
      local_a0 = &g_024c5048;
      local_88 = 0;
      if (lVar5 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_88 = '\x01';
      local_90 = lVar5;
      uVar8 = FUN_00d94d80(uVar8,&local_a0);
      local_a0 = &g_024c5048;
      if ((local_88 != '\0') && (local_90 != 0)) {
        uVar8 = FUN_00d50b20();
      }
    }
    FUN_01798230();
  }
  lVar1 = *(int64_t *)(arg1 + 0x28);
  if (lVar1 != 0) {
    local_74 = (int)local_80 + 1;
    if ((int)local_80 < 0) {
      local_80 = lVar1;
      if (0 < *(int *)(lVar1 + 0xc)) {
        iVar6 = 0;
        do {
          FUN_00d8db40();
          local_b8 = *local_a8;
          local_b0 = 0;
          FUN_01787e50(&local_b8,local_74);
          puVar2 = local_a0;
          local_68 = 0;
          if (((char)local_98 == '\0') && (local_a0 != (void*)0x0)) {
            FUN_00d50b00();
          }
          local_70 = puVar2;
          local_68 = '\x01';
          FUN_00d8dbf0();
          lVar1 = local_80;
          if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
            FUN_00d50b20();
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(lVar1 + 0xc));
      }
    }
    else {
      local_80 = lVar1;
      if (0 < *(int *)(lVar1 + 0xc)) {
        iVar6 = 0;
        do {
          FUN_00d8db40();
          iVar7 = local_74;
          do {
            FUN_00d8db40();
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          local_b8 = *local_a8;
          local_b0 = 0;
          FUN_01787e50(&local_b8,local_74);
          puVar2 = local_a0;
          local_68 = 0;
          if (((char)local_98 == '\0') && (local_a0 != (void*)0x0)) {
            FUN_00d50b00();
          }
          local_70 = puVar2;
          local_68 = '\x01';
          FUN_00d8dbf0();
          lVar1 = local_80;
          if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
            FUN_00d50b20();
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(lVar1 + 0xc));
      }
    }
    FUN_01798230();
  }
  FUN_00d8c7d0();
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 01c8d6c0
// ============================================================
// Function: FUN_01c8d6c0
// Address: 01c8d6c0
// Size: 714 bytes
// Class: MUBarSignature
// String references:
//   "MUBarSignature"

uint64_t FUN_01c8d6c0(void* param_1,char param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  int64_t this_ptr;
  int64_t **pplVar6;
  uint64_t unaff_R14;
  uint64_t uVar7;
  bool bVar9;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  undefined7 uVar8;
  
  if (*(int64_t *)(this_ptr + 0x180) == 0) {
    uVar7 = 0;
    goto LAB_01c8d8b2;
  }
  bVar9 = *(int *)(this_ptr + 0x18c) == 0;
  uVar8 = (undefined7)((uint64_t)unaff_R14 >> 8);
  uVar7 = CONCAT71(uVar8,!bVar9);
  if (((bVar9) || (param_2 == '\0')) ||
     (uVar7 = CONCAT71(uVar8,1), *(int64_t *)(this_ptr + 0x158) == 0)) goto LAB_01c8d8b2;
  FUN_00d50b00();
  FUN_00d50b20();
  pplVar6 = &local_60;
  (**(code **)(**(int64_t **)(this_ptr + 0x180) + 0x980))();
  plVar1 = local_60;
  if ((g_026d8a28 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_027ed1e8 = FUN_00d4fe50();
    g_027ed1d0 = "MUBarSignature";
    g_027ed1d8 = 0x18;
    param_1 = 0x92680;
    g_027ed1e0 = FUN_00092680;
    g_027ed1f0 = 0;
    ram_00000000027ed1f8 = 0;
    g_027ed200 = 0;
    g_027ed278 = 0;
    ram_00000000027ed280 = 0;
    g_027ed288 = 0;
    g_027ed28a = 2;
    g_027ed208 = 0;
    ram_00000000027ed210 = 0;
    g_027ed218 = 0;
    ram_00000000027ed220 = 0;
    g_027ed228 = 0;
    ram_00000000027ed230 = 0;
    g_027ed238 = 0;
    ram_00000000027ed240 = 0;
    g_027ed248 = 0;
    ram_00000000027ed250 = 0;
    g_027ed258 = 0;
    ram_00000000027ed260 = 0;
    g_027ed268 = 0;
    ram_00000000027ed270 = 0;
    g_027ed293 = 0;
    g_027ed28b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_01c8d76d:
    pplVar6 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01c8d76d;
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
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    lVar2 = *(int64_t *)(this_ptr + 0x158);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_48 = '\0';
    local_50 = plVar1;
    FUN_01703b00(&local_50,*(void*)(this_ptr + 0x188));
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (*(int64_t *)(this_ptr + 0x1a8) != 0) {
      FUN_01c4e030();
    }
    lVar2 = *(int64_t *)(this_ptr + 0x158);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_38 = '\x01';
    local_40 = lVar2;
    FUN_01c453b0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01c886d0();
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_01c8d8b2:
  return uVar7 & 0xffffffff;
}



// ============================================================
// 01786270
// ============================================================
// Function: FUN_01786270
// Address: 01786270
// Size: 723 bytes
// Class: MUBarSignature
// String references:
//   "MUBarSignature"
//   "%I/%I"
//   "GNString"

void FUN_01786270(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  uint32_t uVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t *this_ptr;
  void*local_40;
  uint32_t local_38;
  uint32_t local_34;
  uint32_t local_30;
  
  plVar6 = (int64_t *)*param_2;
  if ((g_026d8a28 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_027ed1e8 = FUN_00d4fe50();
    g_027ed1d0 = "MUBarSignature";
    g_027ed1d8 = 0x18;
    g_027ed1e0 = FUN_00092680;
    g_027ed1f0 = 0;
    ram_00000000027ed1f8 = 0;
    g_027ed200 = 0;
    g_027ed278 = 0;
    ram_00000000027ed280 = 0;
    g_027ed288 = 0;
    g_027ed28a = 2;
    g_027ed208 = 0;
    ram_00000000027ed210 = 0;
    g_027ed218 = 0;
    ram_00000000027ed220 = 0;
    g_027ed228 = 0;
    ram_00000000027ed230 = 0;
    g_027ed238 = 0;
    ram_00000000027ed240 = 0;
    g_027ed248 = 0;
    ram_00000000027ed250 = 0;
    g_027ed258 = 0;
    ram_00000000027ed260 = 0;
    g_027ed268 = 0;
    ram_00000000027ed270 = 0;
    g_027ed293 = 0;
    g_027ed28b = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (int64_t *)0x0) {
LAB_017862bd:
    plVar6 = &g_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar6 = param_2;
    if (cVar3 == '\0') goto LAB_017862bd;
  }
  lVar1 = plVar6[1];
  if (((char)lVar1 != '\0') && (*plVar6 != 0)) {
    FUN_00d50b00();
LAB_017862e4:
    uVar4 = FUN_0123fef0();
    local_30 = FUN_0123ff00();
    local_38 = 2;
    local_40 = &g_024c3df0;
    local_34 = uVar4;
    FUN_00d8cb40(&g_024c3df0,&local_40);
    if ((char)lVar1 != '\0') {
      FUN_00d50b20();
    }
    return;
  }
  if (*plVar6 != 0) goto LAB_017862e4;
  plVar6 = (int64_t *)*param_2;
  if ((g_026fd0c0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026d5e58 = FUN_00d4fe50();
    g_026d5e40 = "GNString";
    g_026d5e48 = 0x40;
    g_026d5e50 = FUN_0005d920;
    g_026d5e60 = 0;
    ram_00000000026d5e68 = 0;
    g_026d5e70 = 0;
    ram_00000000026d5e78 = 0;
    g_026d5e80 = 0;
    ram_00000000026d5e88 = 0;
    g_026d5e90 = 0;
    ram_00000000026d5e98 = 0;
    g_026d5ea0 = 0;
    ram_00000000026d5ea8 = 0;
    g_026d5eb0 = 0;
    ram_00000000026d5eb8 = 0;
    g_026d5ec0 = 0;
    ram_00000000026d5ec8 = 0;
    g_026d5ed0 = 0;
    ram_00000000026d5ed8 = 0;
    g_026d5ee0 = 0;
    ram_00000000026d5ee8 = 0;
    g_026d5ef0 = 0;
    ram_00000000026d5ef8 = 0;
    g_026d5f00 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_01786372;
  }
  param_2 = &g_02802688;
LAB_01786372:
  lVar1 = *param_2;
  lVar2 = param_2[1];
  if (((char)lVar2 == '\0') || (lVar1 == 0)) {
    if (lVar1 == 0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      return;
    }
    *(void*)(this_ptr + 1) = 0;
    if ((char)lVar2 == '\0') {
      FUN_00d50b00();
    }
  }
  else {
    FUN_00d50b00();
    *(void*)(this_ptr + 1) = 0;
  }
  *this_ptr = lVar1;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 01788a10
// ============================================================
// Function: FUN_01788a10
// Address: 01788a10
// Size: 938 bytes
// Class: MUBarSignature

int64_t * FUN_01788a10(uint64_t param_1,void*param_2,uint64_t param_3,int64_t *param_4)

{
  int64_t lVar1;
  bool bVar2;
  char cVar3;
  void*puVar4;
  int64_t *this_ptr;
  int iVar5;
  uint64_t local_d0;
  uint8_t local_c8;
  int64_t local_c0;
  uint8_t local_b8;
  uint64_t local_b0;
  uint8_t local_a8;
  int64_t local_88;
  char local_80;
  int64_t local_48;
  char local_40;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  (*g_02572370)();
  local_c0 = 0;
  if (*param_4 != 0) {
    FUN_00d216c0();
    local_c0 = *param_4;
  }
  local_d0 = *param_2;
  local_c8 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  FUN_017891f0(param_1,&local_d0,param_3,&local_c0);
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
      goto LAB_01788b06;
    }
  }
  else if (local_88 != 0) {
LAB_01788b06:
    cVar3 = FUN_01716c00();
    if (cVar3 == '\0') {
      FUN_01715620();
      FUN_017181f0();
      if (local_88 != 0) {
        bVar2 = true;
        if (local_80 == '\0') {
          FUN_00d50b00();
        }
        goto LAB_01788bb0;
      }
      bVar2 = false;
      lVar1 = *param_4;
    }
    else {
      FUN_01715620();
      FUN_017185b0();
      if (local_88 == 0) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
        if (local_80 == '\0') {
          FUN_00d50b00();
        }
      }
LAB_01788bb0:
      lVar1 = *param_4;
    }
    if (lVar1 != 0) {
      if (0 < *(int *)((int64_t)puVar4 + 0xc)) {
        iVar5 = 0;
        do {
          cVar3 = FUN_01716c00();
          if (cVar3 == '\0') {
            FUN_01715620();
            FUN_017181f0();
            if (local_40 == '\0') {
              if (local_48 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_40 = '\0';
            }
            FUN_00d235a0();
            if (local_48 != 0) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            FUN_01715620();
            FUN_017185b0();
            if (local_40 == '\0') {
              if (local_48 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_40 = '\0';
            }
            FUN_00d235a0();
            if (local_48 != 0) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)((int64_t)puVar4 + 0xc));
      }
      FUN_01a74380();
    }
    *(void*)(this_ptr + 1) = 0;
    if ((!bVar2) && (local_88 != 0)) {
      FUN_00d50b00();
    }
    *this_ptr = local_88;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
    goto LAB_01788d90;
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
LAB_01788d90:
  FUN_00d50b20();
  return this_ptr;
}



// ============================================================
// 01786580
// ============================================================
// Function: FUN_01786580
// Address: 01786580
// Size: 819 bytes
// Class: MUBarSignature
// String references:
//   "%I"

void FUN_01786580(uint64_t param_1,int64_t *param_2)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar8;
  uint64_t uVar9;
  int64_t local_40;
  char local_38;
  
  lVar3 = g_027cee10;
  if (*param_2 != 0) {
    if (g_027cee10 != 0) {
      FUN_00d50b00();
    }
    FUN_00d91bc0();
    lVar8 = local_40;
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar8 = 0;
      }
      else {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar8 != 0) {
      if (*(int *)(lVar8 + 0xc) == 0) {
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
      }
      else {
        FUN_00d8d560();
        FUN_0123ff10();
        if (*(int *)(lVar8 + 0xc) < 2) {
          iVar5 = FUN_00d8c7a0();
          if ((1 < iVar5) && (*(int *)(arg1 + 0xc) == 0)) {
            iVar5 = FUN_00d8c7a0();
            uVar6 = FUN_0123fcf0();
            uVar9 = (uint64_t)uVar6;
            if (0 < (int)uVar6) {
              do {
                uVar6 = (uint)uVar9;
                FUN_00d8cb40();
                if ((local_38 == '\0') && (local_40 != 0)) {
                  FUN_00d50b00();
                }
                iVar7 = FUN_00d8c7a0();
                if ((iVar7 < iVar5) && (cVar4 = FUN_00d8f400(), cVar4 != '\0')) {
                  FUN_00d8c7a0();
                  FUN_00d8c7a0();
                  FUN_00d97ce0();
                  FUN_00d8d560();
                  if ((local_38 != '\0') && (local_40 != 0)) {
                    FUN_00d50b20();
                  }
                  FUN_0123ff10();
                  bVar2 = true;
                  bVar1 = true;
                }
                else {
                  bVar2 = false;
                  bVar1 = false;
                }
                if (local_40 != 0) {
                  FUN_00d50b20();
                  bVar1 = bVar2;
                }
                uVar9 = uVar9 >> 1;
              } while (!bVar1 && 1 < uVar6);
            }
          }
        }
        else {
          FUN_00d8d560();
        }
        FUN_0123ff30();
        FUN_0123fbe0();
        *(void*)(this_ptr + 1) = 0;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
            *this_ptr = local_40;
            *(void*)(this_ptr + 1) = 1;
            goto LAB_017866e9;
          }
          local_40 = 0;
        }
        *this_ptr = local_40;
        *(void*)(this_ptr + 1) = 1;
      }
LAB_017866e9:
      FUN_00d50b20();
      return;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return;
}



// ============================================================
// 01c8d230
// ============================================================
// Function: FUN_01c8d230
// Address: 01c8d230
// Size: 769 bytes
// Class: MUBarSignature

uint64_t FUN_01c8d230(void* param_1)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  char cVar5;
  void *pvVar6;
  void* pVar7;
  void*puVar8;
  int64_t this_ptr;
  uint64_t local_70;
  uint64_t local_68;
  uint64_t local_60;
  uint64_t local_58;
  uint32_t local_50;
  uint32_t local_4c;
  uint64_t local_48;
  uint64_t local_40;
  char local_38;
  
  local_50 = 0xffffffff;
  lVar1 = *(int64_t *)(this_ptr + 0x158);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  pVar7 = (void*)&local_70;
  FUN_016ca840();
  uVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  local_48 = FUN_0123ffd0();
  local_60 = local_70;
  local_58 = local_68;
  local_4c = local_50;
  lVar1 = *(int64_t *)(this_ptr + 0x158);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar6 = _pthread_getspecific(pVar7);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar8 = &local_58;
  FUN_016ca950(puVar8,&local_60,&local_4c);
  uVar3 = local_40;
  pVar7 = (void*)puVar8;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (((uVar3 != 0) && (local_40 = FUN_0123ffd0(), local_40 >> 0x20 != 0)) &&
     ((local_48._4_4_ != 0 && (cVar5 = FUN_00e7c020(), cVar5 != '\0')))) {
    local_48 = FUN_0123ffd0();
  }
  local_60 = local_70;
  local_58 = local_68;
  local_4c = local_50;
  lVar1 = *(int64_t *)(this_ptr + 0x158);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar6 = _pthread_getspecific(pVar7);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016ca9d0(&local_58,&local_60,&local_4c);
  uVar4 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (uVar4 != 0) {
    local_40 = FUN_0123ffd0();
    if (((local_40 >> 0x20 != 0) && (local_48._4_4_ != 0)) &&
       (cVar5 = FUN_00e7c020(), cVar5 != '\0')) {
      local_48 = FUN_0123ffd0();
    }
    FUN_00d50b20();
  }
  if (uVar3 != 0) {
    FUN_00d50b20();
  }
  if (uVar2 != 0) {
    FUN_00d50b20();
  }
  return local_48;
}



// ============================================================
// 0178c570
// ============================================================
// Function: FUN_0178c570
// Address: 0178c570
// Size: 740 bytes
// Class: MUBarSignature

uint64_t FUN_0178c570(void* param_1,uint64_t *param_2)

{
  char cVar1;
  void *pvVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int extraout_var;
  uint64_t uVar5;
  void* pVar6;
  void*arg1;
  int64_t local_60;
  char local_58;
  int iStack_4c;
  int iStack_44;
  int64_t local_40;
  char local_38;
  
  if (arg1 != (void*)0x0) {
    *arg1 = 1;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01508450();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150ff70();
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar3 = FUN_01508650();
  if (param_2 == (uint64_t *)0x0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    param_1 = 0;
    uVar4 = FUN_016c4630(0,2);
  }
  else {
    uVar4 = *param_2;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pVar6 = 0;
  FUN_016c47d0(0,uVar3);
  FUN_00e7bcc0();
  FUN_0123ffd0();
  FUN_00e7bdc0();
  iStack_44 = (int)(uVar4 >> 0x20);
  if (((((iStack_44 != 0) && (iStack_4c = (int)(uVar3 >> 0x20), iStack_4c != 0)) &&
       (cVar1 = FUN_00e7c020(), cVar1 != '\0')) &&
      ((FUN_00e7b970(), uVar4 >> 0x20 != 0 && (extraout_var != 0)))) &&
     (cVar1 = FUN_00e7c020(), cVar1 == '\0')) {
    pvVar2 = _pthread_getspecific(pVar6);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar5 = FUN_01508740();
    uVar3 = uVar4;
    if (((arg1 != (void*)0x0) && (uVar5 >> 0x20 != 0)) &&
       ((iStack_44 != 0 && (cVar1 = FUN_00e7c020(), cVar1 == '\0')))) {
      *arg1 = 0;
    }
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  return uVar3;
}



// ============================================================
// 01787bb0
// ============================================================
// Function: FUN_01787bb0
// Address: 01787bb0
// Size: 573 bytes
// Class: MUBarSignature

float FUN_01787bb0(void)

{
  int iVar1;
  int iVar2;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar3;
  float fVar4;
  float fVar5;
  int local_48;
  float local_34;
  
  fVar5 = g_0240b530;
  if (*(char *)(this_ptr + 0x52) != '\0') {
    fVar5 = 0.0;
  }
  iVar2 = *(int *)(this_ptr + 0x4c);
  iVar1 = *(int *)(this_ptr + 0x48);
  lVar3 = *(int64_t *)(this_ptr + 0x28);
  if (lVar3 == 0) {
    local_34 = 0.0;
    lVar3 = 0;
  }
  else {
    local_48 = -1;
    local_34 = 0.0;
    while (local_48 = local_48 + 1, local_48 < *(int *)(lVar3 + 0xc)) {
      fVar4 = (float)FUN_01787bb0();
      local_34 = local_34 + fVar4;
    }
    FUN_01798230();
    lVar3 = *(int64_t *)(this_ptr + 0x28);
  }
  fVar5 = ((g_02390124 - (float)(iVar1 * iVar1) / g_023908ec) - (float)iVar2 / g_023908ec) -
          fVar5;
  if (*(int *)(lVar3 + 0xc) != 0) {
    local_34 = local_34 / (float)*(int *)(lVar3 + 0xc);
  }
  if ((double)fVar5 + g_023934c8 <= (double)local_34) {
    if (lVar3 != 0) {
      for (iVar2 = 0; iVar2 < *(int *)(lVar3 + 0xc); iVar2 = iVar2 + 1) {
        FUN_01787bb0();
      }
      FUN_01798230();
    }
  }
  else {
    local_34 = fVar5;
    if (*arg1 != 0) {
      FUN_00d50b00();
      FUN_00d21140();
      FUN_00d50b20();
    }
  }
  return local_34;
}



// ============================================================
// 0165f820
// ============================================================
// Function: FUN_0165f820
// Address: 0165f820
// Size: 516 bytes
// Class: MUBarSignature
// String references:
//   "MUBarSignature"

void FUN_0165f820(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025ce298;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ed28b == '\0') {
    FUN_0165fa50();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 2) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ed28b == '\0') {
    FUN_0165fbe0();
    FUN_00e87980();
  }
  return;
}

