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

