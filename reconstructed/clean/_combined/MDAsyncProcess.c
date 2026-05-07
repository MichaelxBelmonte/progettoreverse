// ===================================================================
// MDAsyncProcess — Complete reconstructed pseudocode
// 6 functions
// ===================================================================


// ============================================================
// 000b8680
// ============================================================
// Function: FUN_000b8680
// Address: 000b8680
// Size: 6004 bytes
// Class: MDAsyncProcess

void FUN_000b8680(uint32_t param_1,uint64_t param_2,size_t param_3)

{
  int64_t lVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int64_t lVar8;
  int64_t lVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  void*puVar13;
  int64_t *plVar14;
  int64_t lVar15;
  void *pvVar16;
  char *pcVar17;
  void* pVar18;
  int iVar19;
  void*puVar20;
  double *pdVar21;
  int64_t lVar22;
  int iVar23;
  void*arg1;
  int64_t *this_ptr;
  uint32_t uVar24;
  uint64_t unaff_R12;
  undefined7 uVar26;
  int64_t lVar25;
  double dVar27;
  uint64_t uVar28;
  uint64_t extraout_XMM0_Qa;
  uint32_t extraout_XMM0_Db;
  double dVar33;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar29 [16];
  uint8_t auVar30 [16];
  uint64_t extraout_XMM0_Qb_02;
  uint8_t auVar31 [16];
  uint64_t extraout_XMM0_Qb_04;
  uint8_t auVar32 [16];
  uint32_t extraout_XMM0_Dd;
  double dVar34;
  double dVar35;
  double dVar36;
  uint64_t in_XMM1_Qb;
  uint8_t auVar37 [16];
  uint8_t auVar38 [16];
  uint8_t auVar39 [16];
  uint32_t local_1a8;
  uint32_t local_178;
  uint32_t local_168;
  float local_108;
  uint32_t uStack_104;
  double local_f0;
  int64_t local_d0;
  int64_t local_a0;
  int64_t local_98;
  int64_t local_90;
  char local_88 [8];
  int64_t local_80;
  char local_78;
  int64_t local_70;
  uint64_t local_68;
  int local_60;
  uint8_t local_58 [16];
  uint32_t local_3c;
  char local_38 [8];
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_03;
  uint64_t extraout_XMM0_Qb_05;
  
  if ((char)this_ptr[7] == '\0') {
    return;
  }
  uVar28 = param_2;
  puVar13 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar13 = &g_02572358;
  (*g_02572370)();
  dVar27 = (double)(**(code **)(*(int64_t *)this_ptr[3] + 0xa50))();
  local_58._8_8_ = in_XMM1_Qb;
  local_58._0_8_ = uVar28;
  (**(code **)(*this_ptr + 1000))();
  lVar8 = local_80;
  if (local_78 == '\0') {
    if (local_80 == 0) goto LAB_000b87c5;
    FUN_00d50b00();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_80 == 0) {
LAB_000b87c5:
    (**(code **)(*(int64_t *)this_ptr[3] + 0x988))();
    local_d0 = local_80;
    uVar26 = (undefined7)((uint64_t)unaff_R12 >> 8);
    if (local_80 == 0) {
      local_d0 = 0;
      bVar7 = false;
      uVar24 = (uint32_t)CONCAT71(uVar26,1);
    }
    else {
      bVar7 = true;
      if (((local_78 == '\0') && (FUN_00d50b00(), local_78 != '\0')) && (local_80 != 0)) {
        FUN_00d50b20();
      }
      uVar24 = (uint32_t)CONCAT71(uVar26,1);
    }
    goto LAB_000b889b;
  }
  plVar14 = (int64_t *)FUN_00e8fc40();
  FUN_00082580();
  (**(code **)(*plVar14 + 0x18))();
  FUN_000ba510();
  local_d0 = local_80;
  if (local_80 == 0) {
    local_d0 = 0;
    bVar7 = false;
  }
  else if (local_78 == '\0') {
    FUN_00d50b00();
    bVar7 = true;
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_78 = '\0';
    bVar7 = true;
  }
  if (plVar14 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  uVar24 = 0;
LAB_000b889b:
  FUN_00c8e710();
  lVar9 = local_80;
  if (((local_78 == '\0') && (local_80 != 0)) &&
     ((FUN_00d50b00(), local_78 != '\0' && (local_80 != 0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  dVar27 = dVar27 + g_023910b0;
  dVar33 = (double)local_58._0_8_ + _UNK_023910b8;
  if (local_d0 == 0) {
    bVar5 = false;
    local_98 = 0;
    bVar6 = false;
    local_a0 = 0;
  }
  else {
    local_78 = '\0';
    local_80 = 0;
    local_70 = local_d0;
    local_68 = 0xffffffff;
    local_60 = 0;
    bVar5 = false;
    local_98 = 0;
    bVar6 = false;
    local_a0 = 0;
    local_68._4_4_ = 0;
    while( true ) {
      if (local_68._4_4_ != 0) {
        if (local_68._4_4_ < 1) {
          iVar23 = -local_68._4_4_;
        }
        else {
          iVar23 = (int)local_68 - local_68._4_4_;
          local_68 = CONCAT44(local_68._4_4_,iVar23);
          FUN_00d23690();
          local_60 = local_60 + local_68._4_4_;
          iVar23 = 0;
        }
        local_68 = CONCAT44(iVar23,(int)local_68);
      }
      lVar15 = (int64_t)(int)local_68;
      iVar23 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar23);
      if (*(int *)(local_70 + 0xc) <= iVar23) break;
      lVar22 = *(int64_t *)(local_70 + 0x10);
      local_80 = *(int64_t *)(lVar22 + 8 + lVar15 * 8);
      local_38[0] = '\0';
      if ((char)uVar24 == '\0') {
        pvVar16 = _pthread_getspecific((void*)lVar22);
        pVar18 = (void*)lVar22;
        if ((pvVar16 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pVar18 = (void*)lVar8;
        }
        uVar28 = FUN_01655040();
        local_108 = (float)uVar28;
        uStack_104 = (uint32_t)((uint64_t)uVar28 >> 0x20);
        pvVar16 = _pthread_getspecific(pVar18);
        if ((pvVar16 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pVar18 = (void*)lVar8;
        }
        local_f0 = (double)FUN_016551c0();
        lVar15 = 0;
LAB_000b8b87:
        dVar34 = local_f0 - (double)CONCAT44(uStack_104,local_108);
        uVar28 = FUN_00e7b500();
        local_58._0_8_ = uVar28;
        local_178 = SUB84(dVar27,0);
        local_1a8 = SUB84(dVar33,0);
        cVar10 = FUN_00e7b560(uVar28,dVar34,local_178,local_1a8);
        if (cVar10 != '\0') {
          iVar23 = *(int *)(lVar9 + 0x18);
          FUN_00c8e340(extraout_XMM0_Qa,1);
          lVar22 = *(int64_t *)(lVar9 + 0x10);
          *(void*)(lVar22 + iVar23) = local_58._0_8_;
          *(double *)(lVar22 + 8 + (int64_t)iVar23) = dVar34;
          cVar10 = FUN_000ba600();
          if ((cVar10 != '\0') && (lVar15 != 0)) {
            pvVar16 = _pthread_getspecific(pVar18);
            if (pvVar16 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0165a070();
            if ((local_88[0] != '\0') && (local_90 != 0)) {
              FUN_00d50b20();
            }
            if (local_90 != 0) {
              pvVar16 = _pthread_getspecific(pVar18);
              if (pvVar16 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0165a070();
              pvVar16 = _pthread_getspecific(pVar18);
              if (pvVar16 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar28 = FUN_012f94c0();
              local_58._0_8_ = uVar28;
              if ((local_88[0] != '\0') && (local_90 != 0)) {
                FUN_00d50b20();
              }
              pvVar16 = _pthread_getspecific(pVar18);
              if (pvVar16 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0165a070();
              pvVar16 = _pthread_getspecific(pVar18);
              if (pvVar16 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar34 = (double)FUN_012f9500();
              if ((local_88[0] != '\0') && (local_90 != 0)) {
                FUN_00d50b20();
              }
              if (g_02390448 < (double)local_58._0_8_) {
                dVar35 = (double)local_58._0_8_;
                uVar28 = FUN_00e7b500((double)CONCAT44(uStack_104,local_108) -
                                      (double)local_58._0_8_);
                local_58._0_8_ = uVar28;
                if (local_a0 == 0) {
                  FUN_00c8e690();
                  if ((((local_88[0] == '\0') && (local_90 != 0)) &&
                      (FUN_00d50b00(), local_88[0] != '\0')) && (local_90 != 0)) {
                    FUN_00d50b20();
                  }
                  FUN_00c92170();
                  iVar23 = *(int *)(local_90 + 0x18);
                  iVar11 = iVar23 + 0xf;
                  if (-1 < iVar23) {
                    iVar11 = iVar23;
                  }
                  if (0xf < iVar23) {
                    uVar12 = iVar11 >> 4;
                    puVar20 = *(void**)(local_90 + 0x10);
                    if (6 < uVar12 - 1) {
                      iVar23 = -(uVar12 & 0xfffffff8);
                      do {
                        *puVar20 = local_58._0_8_;
                        puVar20[1] = dVar35;
                        puVar20[2] = local_58._0_8_;
                        puVar20[3] = dVar35;
                        puVar20[4] = local_58._0_8_;
                        puVar20[5] = dVar35;
                        puVar20[6] = local_58._0_8_;
                        puVar20[7] = dVar35;
                        puVar20[8] = local_58._0_8_;
                        puVar20[9] = dVar35;
                        puVar20[10] = local_58._0_8_;
                        puVar20[0xb] = dVar35;
                        puVar20[0xc] = local_58._0_8_;
                        puVar20[0xd] = dVar35;
                        puVar20[0xe] = local_58._0_8_;
                        puVar20[0xf] = dVar35;
                        puVar20 = puVar20 + 0x10;
                        iVar23 = iVar23 + 8;
                      } while (iVar23 != 0);
                    }
                    if ((uVar12 & 7) != 0) {
                      lVar22 = 0;
                      do {
                        *(void*)((int64_t)puVar20 + lVar22) = local_58._0_8_;
                        *(double *)((int64_t)puVar20 + lVar22 + 8) = dVar35;
                        lVar22 = lVar22 + 0x10;
                      } while ((uVar12 & 7) << 4 != (int)lVar22);
                    }
                  }
                  local_a0 = local_90;
                  if (local_90 != 0) {
                    bVar6 = true;
                  }
                }
                else {
                  iVar23 = *(int *)(local_a0 + 0x18);
                  FUN_00c8e340(uVar28,1);
                  lVar22 = *(int64_t *)(local_a0 + 0x10);
                  *(void*)(lVar22 + iVar23) = local_58._0_8_;
                  *(double *)(lVar22 + 8 + (int64_t)iVar23) = dVar35;
                }
              }
              if (g_02390448 < dVar34) {
                uVar28 = FUN_00e7b500(local_f0);
                local_58._0_8_ = uVar28;
                if (local_98 == 0) {
                  FUN_00c8e690();
                  if (((local_88[0] == '\0') && (local_90 != 0)) &&
                     ((FUN_00d50b00(), local_88[0] != '\0' && (local_90 != 0)))) {
                    FUN_00d50b20();
                  }
                  FUN_00c92170();
                  local_98 = local_90;
                  iVar23 = *(int *)(local_90 + 0x18);
                  iVar11 = iVar23 + 0xf;
                  if (-1 < iVar23) {
                    iVar11 = iVar23;
                  }
                  if (0xf < iVar23) {
                    uVar12 = iVar11 >> 4;
                    puVar20 = *(void**)(local_90 + 0x10);
                    if (6 < uVar12 - 1) {
                      iVar23 = -(uVar12 & 0xfffffff8);
                      do {
                        *puVar20 = local_58._0_8_;
                        puVar20[1] = dVar34;
                        puVar20[2] = local_58._0_8_;
                        puVar20[3] = dVar34;
                        puVar20[4] = local_58._0_8_;
                        puVar20[5] = dVar34;
                        puVar20[6] = local_58._0_8_;
                        puVar20[7] = dVar34;
                        puVar20[8] = local_58._0_8_;
                        puVar20[9] = dVar34;
                        puVar20[10] = local_58._0_8_;
                        puVar20[0xb] = dVar34;
                        puVar20[0xc] = local_58._0_8_;
                        puVar20[0xd] = dVar34;
                        puVar20[0xe] = local_58._0_8_;
                        puVar20[0xf] = dVar34;
                        puVar20 = puVar20 + 0x10;
                        iVar23 = iVar23 + 8;
                      } while (iVar23 != 0);
                    }
                    if ((uVar12 & 7) != 0) {
                      lVar22 = 0;
                      do {
                        *(void*)((int64_t)puVar20 + lVar22) = local_58._0_8_;
                        *(double *)((int64_t)puVar20 + lVar22 + 8) = dVar34;
                        lVar22 = lVar22 + 0x10;
                      } while ((uVar12 & 7) << 4 != (int)lVar22);
                    }
                  }
                  if (local_90 != 0) {
                    bVar5 = true;
                  }
                }
                else {
                  iVar23 = *(int *)(local_98 + 0x18);
                  FUN_00c8e340(uVar28,1);
                  lVar22 = *(int64_t *)(local_98 + 0x10);
                  *(void*)(lVar22 + iVar23) = local_58._0_8_;
                  *(double *)(lVar22 + 8 + (int64_t)iVar23) = dVar34;
                }
              }
            }
          }
        }
        if ((local_38[0] != '\0') && (lVar15 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        pvVar16 = _pthread_getspecific((void*)lVar22);
        pVar18 = (void*)lVar22;
        if (pvVar16 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012f51f0();
        if (local_90 != 0) {
          pcVar17 = local_38;
          if (local_88[0] != '\0') {
            local_38[0] = '\x01';
            pcVar17 = local_88;
          }
          *pcVar17 = '\0';
          if (local_88[0] != '\0') {
            FUN_00d50b20();
          }
          pvVar16 = _pthread_getspecific(pVar18);
          if (pvVar16 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar28 = FUN_012f7cb0();
          local_108 = (float)uVar28;
          uStack_104 = (uint32_t)((uint64_t)uVar28 >> 0x20);
          pvVar16 = _pthread_getspecific(pVar18);
          if (pvVar16 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_f0 = (double)FUN_012f9490();
          lVar15 = local_90;
          goto LAB_000b8b87;
        }
      }
    }
    FUN_000be170();
  }
  FUN_00c8e690();
  lVar8 = local_80;
  if ((((local_78 == '\0') && (local_80 != 0)) && (FUN_00d50b00(), local_78 != '\0')) &&
     (local_80 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  iVar23 = *(int *)(lVar8 + 0x18);
  iVar11 = iVar23 + 0xf;
  if (-1 < iVar23) {
    iVar11 = iVar23;
  }
  if (0xf < iVar23) {
    uVar12 = iVar11 >> 4;
    pdVar21 = *(double **)(lVar8 + 0x10);
    if (6 < uVar12 - 1) {
      iVar23 = -(uVar12 & 0xfffffff8);
      do {
        *pdVar21 = dVar27;
        pdVar21[1] = dVar33;
        pdVar21[2] = dVar27;
        pdVar21[3] = dVar33;
        pdVar21[4] = dVar27;
        pdVar21[5] = dVar33;
        pdVar21[6] = dVar27;
        pdVar21[7] = dVar33;
        pdVar21[8] = dVar27;
        pdVar21[9] = dVar33;
        pdVar21[10] = dVar27;
        pdVar21[0xb] = dVar33;
        pdVar21[0xc] = dVar27;
        pdVar21[0xd] = dVar33;
        pdVar21[0xe] = dVar27;
        pdVar21[0xf] = dVar33;
        pdVar21 = pdVar21 + 0x10;
        iVar23 = iVar23 + 8;
      } while (iVar23 != 0);
    }
    if ((uVar12 & 7) != 0) {
      lVar15 = 0;
      do {
        *(double *)((int64_t)pdVar21 + lVar15) = dVar27;
        ((double *)((int64_t)pdVar21 + lVar15))[1] = dVar33;
        lVar15 = lVar15 + 0x10;
      } while ((uVar12 & 7) << 4 != (int)lVar15);
    }
  }
  local_3c = uVar24;
  if (*(int *)(lVar9 + 0x18) < 0x10) {
LAB_000b956a:
    uVar24 = local_3c;
    if (0x1e < *(int *)(lVar8 + 0x18) + 0xfU) {
      FUN_01cfcdc0();
      lVar15 = local_80;
      if (local_78 == '\0') {
        if (local_80 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_78 = '\0';
      }
      FUN_01d488d0();
      if (lVar15 != 0) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
    }
    if (0xf < *(int *)(lVar8 + 0x18)) {
      iVar23 = 0;
      lVar15 = 8;
      do {
        dVar27 = *(double *)(*(int64_t *)(lVar8 + 0x10) + -8 + lVar15);
        auVar37._8_8_ = 0;
        auVar37._0_8_ = dVar27;
        dVar34 = *(double *)(*(int64_t *)(lVar8 + 0x10) + lVar15) + dVar27;
        dVar33 = dVar34;
        if (dVar27 <= dVar34) {
          dVar33 = dVar27;
        }
        plVar14 = (int64_t *)*arg1;
        local_58._0_8_ = dVar34;
        uVar28 = (**(code **)(*(int64_t *)this_ptr[3] + 0x938))(dVar33);
        local_108 = (float)uVar28;
        dVar33 = (double)local_58._0_8_;
        if ((double)local_58._0_8_ <= dVar27) {
          dVar33 = dVar27;
        }
        local_58._0_8_ = (**(code **)(*(int64_t *)this_ptr[3] + 0x938))(dVar33);
        local_58._8_8_ = extraout_XMM0_Qb_00;
        auVar29._0_8_ = FUN_01e3f820();
        auVar29._8_8_ = extraout_XMM0_Qb_01;
        auVar30._8_8_ = extraout_XMM0_Qb;
        auVar30._0_8_ = uVar28;
        auVar30 = blendps(auVar29,auVar30,1);
        auVar4._4_4_ = local_58._4_4_;
        auVar4._0_4_ = (float)local_58._0_4_ - local_108;
        auVar4._8_4_ = local_58._8_4_;
        auVar4._12_4_ = local_58._12_4_;
        local_58 = blendps(auVar37,auVar4,1);
        local_168 = (uint32_t)param_2;
        cVar10 = FUN_00d054a0(auVar30._0_8_,local_58._0_8_,param_1,local_168);
        if (cVar10 != '\0') {
          FUN_00d05360();
          (**(code **)(*plVar14 + 0x3b0))();
        }
        iVar23 = iVar23 + 1;
        iVar11 = *(int *)(lVar8 + 0x18);
        iVar19 = iVar11 + 0xf;
        if (-1 < iVar11) {
          iVar19 = iVar11;
        }
        lVar15 = lVar15 + 0x10;
      } while (iVar23 < iVar19 >> 4);
    }
    if (0x1e < *(int *)(lVar9 + 0x18) + 0xfU) {
      FUN_01cfcdc0();
      lVar15 = local_80;
      if (local_78 == '\0') {
        if (local_80 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_78 = '\0';
      }
      FUN_01d488d0();
      if (lVar15 != 0) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
    }
    if (0xf < *(int *)(lVar9 + 0x18)) {
      iVar23 = 0;
      lVar15 = 8;
      do {
        dVar27 = *(double *)(*(int64_t *)(lVar9 + 0x10) + -8 + lVar15);
        auVar38._8_8_ = 0;
        auVar38._0_8_ = dVar27;
        dVar33 = *(double *)(*(int64_t *)(lVar9 + 0x10) + lVar15) + dVar27;
        if (dVar27 <= dVar33) {
          dVar33 = dVar27;
        }
        plVar14 = (int64_t *)*arg1;
        local_58._0_8_ = (**(code **)(*(int64_t *)this_ptr[3] + 0x938))(dVar33);
        local_58._8_8_ = extraout_XMM0_Qb_02;
        auVar31._0_8_ = FUN_01e3f820();
        auVar31._8_8_ = extraout_XMM0_Qb_03;
        auVar2._4_4_ = local_58._4_4_;
        auVar2._0_4_ = (float)local_58._0_4_ + g_02390d00;
        auVar2._8_4_ = local_58._8_4_;
        auVar2._12_4_ = local_58._12_4_;
        local_58 = blendps(auVar31,auVar2,1);
        blendps(auVar38,g_023910a0,0xd);
        cVar10 = FUN_00d054a0();
        if (cVar10 != '\0') {
          FUN_00d05360();
          (**(code **)(*plVar14 + 0x3b0))();
        }
        iVar23 = iVar23 + 1;
        iVar11 = *(int *)(lVar9 + 0x18);
        iVar19 = iVar11 + 0xf;
        if (-1 < iVar11) {
          iVar19 = iVar11;
        }
        lVar15 = lVar15 + 0x10;
      } while (iVar23 < iVar19 >> 4);
    }
    if (0xf < *(int *)(lVar9 + 0x18)) {
      iVar23 = 0;
      lVar15 = 8;
      do {
        dVar27 = *(double *)(*(int64_t *)(lVar9 + 0x10) + -8 + lVar15);
        auVar39._8_8_ = 0;
        auVar39._0_8_ = dVar27;
        dVar33 = *(double *)(*(int64_t *)(lVar9 + 0x10) + lVar15) + dVar27;
        if (dVar33 <= dVar27) {
          dVar33 = dVar27;
        }
        plVar14 = (int64_t *)*arg1;
        local_58._0_8_ = (**(code **)(*(int64_t *)this_ptr[3] + 0x938))(dVar33);
        local_58._8_8_ = extraout_XMM0_Qb_04;
        auVar32._0_8_ = FUN_01e3f820();
        auVar32._8_8_ = extraout_XMM0_Qb_05;
        auVar3._4_4_ = local_58._4_4_;
        auVar3._0_4_ = (float)local_58._0_4_ + g_02390d00;
        auVar3._8_4_ = local_58._8_4_;
        auVar3._12_4_ = local_58._12_4_;
        local_58 = blendps(auVar32,auVar3,1);
        blendps(auVar39,g_023910a0,0xd);
        cVar10 = FUN_00d054a0();
        if (cVar10 != '\0') {
          FUN_00d05360();
          (**(code **)(*plVar14 + 0x3b0))();
        }
        iVar23 = iVar23 + 1;
        iVar11 = *(int *)(lVar9 + 0x18);
        iVar19 = iVar11 + 0xf;
        if (-1 < iVar11) {
          iVar19 = iVar11;
        }
        lVar15 = lVar15 + 0x10;
      } while (iVar23 < iVar19 >> 4);
    }
    FUN_01e3f820();
    if ((local_a0 != 0) && (0x1e < *(int *)(local_a0 + 0x18) + 0xfU)) {
      FUN_01cfbee0(0);
      lVar15 = local_80;
      if (local_78 == '\0') {
        if (local_80 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_78 = '\0';
      }
      FUN_01d488d0();
      if (lVar15 != 0) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      local_58._4_4_ = extraout_XMM0_Db;
      local_58._0_4_ = extraout_XMM0_Db;
      local_58._8_4_ = extraout_XMM0_Dd;
      local_58._12_4_ = extraout_XMM0_Dd;
      iVar23 = -1;
      lVar15 = 8;
      while( true ) {
        iVar23 = iVar23 + 1;
        iVar11 = *(int *)(local_a0 + 0x18);
        iVar19 = iVar11 + 0xf;
        if (-1 < iVar11) {
          iVar19 = iVar11;
        }
        if (iVar19 >> 4 <= iVar23) break;
        dVar27 = *(double *)(*(int64_t *)(local_a0 + 0x10) + -8 + lVar15);
        dVar33 = *(double *)(*(int64_t *)(local_a0 + 0x10) + lVar15) + dVar27;
        if (dVar27 <= dVar33) {
          dVar33 = dVar27;
        }
        (**(code **)(*(int64_t *)this_ptr[3] + 0x938))(dVar33);
        lVar15 = lVar15 + 0x10;
        (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
      }
    }
    if ((local_98 != 0) && (0x1e < *(int *)(local_98 + 0x18) + 0xfU)) {
      FUN_01d48b40();
      FUN_01cfbee0();
      lVar15 = local_80;
      if (local_78 == '\0') {
        if (local_80 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_78 = '\0';
      }
      FUN_01d488d0();
      if (lVar15 != 0) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      local_58._4_4_ = extraout_XMM0_Db;
      local_58._0_4_ = extraout_XMM0_Db;
      local_58._8_4_ = extraout_XMM0_Dd;
      local_58._12_4_ = extraout_XMM0_Dd;
      iVar23 = -1;
      lVar15 = 8;
      while( true ) {
        iVar23 = iVar23 + 1;
        iVar11 = *(int *)(local_98 + 0x18);
        iVar19 = iVar11 + 0xf;
        if (-1 < iVar11) {
          iVar19 = iVar11;
        }
        if (iVar19 >> 4 <= iVar23) break;
        dVar27 = *(double *)(*(int64_t *)(local_98 + 0x10) + -8 + lVar15);
        dVar33 = *(double *)(*(int64_t *)(local_98 + 0x10) + lVar15) + dVar27;
        if (dVar33 <= dVar27) {
          dVar33 = dVar27;
        }
        (**(code **)(*(int64_t *)this_ptr[3] + 0x938))(dVar33);
        lVar15 = lVar15 + 0x10;
        (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
      }
    }
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    if ((bVar5) && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar6) && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
    if ((bVar7) && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((char)uVar24 == '\0') {
      FUN_00d50b20();
    }
    if (puVar13 != (void*)0x0) {
      FUN_00d50b20();
    }
    return;
  }
  lVar15 = 0;
  pvVar16 = (void *)0x0;
LAB_000b92e0:
  dVar27 = *(double *)(*(int64_t *)(lVar9 + 0x10) + lVar15 * 0x10);
  dVar33 = *(double *)(*(int64_t *)(lVar9 + 0x10) + 8 + lVar15 * 0x10) + dVar27;
  dVar34 = dVar33;
  if (dVar27 <= dVar33) {
    dVar34 = dVar27;
  }
  local_58._0_8_ = dVar34;
  if (dVar33 <= dVar27) {
    dVar33 = dVar27;
  }
LAB_000b9313:
  local_108 = SUB84(pvVar16,0);
  if (0xf < *(int *)(lVar8 + 0x18)) {
    lVar25 = 0;
    lVar22 = 0;
    do {
      dVar34 = *(double *)(*(int64_t *)(lVar8 + 0x10) + lVar25);
      dVar35 = *(double *)(*(int64_t *)(lVar8 + 0x10) + 8 + lVar25) + dVar34;
      dVar27 = dVar35;
      if (dVar34 <= dVar35) {
        dVar27 = dVar34;
      }
      if ((double)local_58._0_8_ <= dVar27) {
        dVar36 = dVar35;
        if (dVar35 <= dVar34) {
          dVar36 = dVar34;
        }
        if (dVar36 <= dVar33) goto LAB_000b9430;
      }
      if (dVar27 < (double)local_58._0_8_) {
        dVar36 = dVar35;
        if (dVar35 <= dVar34) {
          dVar36 = dVar34;
        }
        if (dVar33 < dVar36) {
          dVar34 = (double)local_58._0_8_ - dVar27;
          uVar28 = FUN_00e7b500();
          local_58._0_8_ = uVar28;
          dVar27 = dVar36 - dVar33;
          uVar28 = FUN_00e7b500();
          lVar22 = *(int64_t *)(lVar8 + 0x10);
          *(void*)(lVar22 + lVar25) = local_58._0_8_;
          *(double *)(lVar22 + 8 + lVar25) = dVar34;
          iVar23 = *(int *)(lVar8 + 0x18);
          FUN_00c8e340(dVar34,1);
          lVar22 = *(int64_t *)(lVar8 + 0x10);
          _memmove(pvVar16,(void *)((iVar23 - lVar25) + -0x10),param_3);
          *(void*)(lVar22 + 0x10 + lVar25) = uVar28;
          *(double *)(lVar22 + 0x18 + lVar25) = dVar27;
          break;
        }
      }
      if (dVar33 <= dVar27) {
LAB_000b93fc:
        if (dVar27 < (double)local_58._0_8_) {
          if (dVar35 <= dVar34) {
            dVar35 = dVar34;
          }
          if ((double)local_58._0_8_ < dVar35) {
            dVar36 = (double)local_58._0_8_ - dVar27;
            dVar27 = (double)FUN_00e7b500();
            goto LAB_000b934d;
          }
        }
      }
      else {
        dVar36 = dVar35;
        if (dVar35 <= dVar34) {
          dVar36 = dVar34;
        }
        if (dVar36 <= dVar33) goto LAB_000b93fc;
        dVar36 = dVar36 - dVar33;
        dVar27 = (double)FUN_00e7b500(dVar33);
LAB_000b934d:
        lVar1 = *(int64_t *)(lVar8 + 0x10);
        *(double *)(lVar1 + lVar25) = dVar27;
        *(double *)(lVar1 + 8 + lVar25) = dVar36;
      }
      lVar22 = lVar22 + 1;
      iVar23 = *(int *)(lVar8 + 0x18);
      iVar11 = iVar23 + 0xf;
      if (-1 < iVar23) {
        iVar11 = iVar23;
      }
      pvVar16 = (void *)(uint64_t)(uint)(iVar11 >> 4);
      lVar25 = lVar25 + 0x10;
      if (iVar11 >> 4 <= lVar22) break;
    } while( true );
  }
  goto LAB_000b952e;
LAB_000b9430:
  FUN_00e7b4e0();
  dVar27 = (double)FUN_00c921e0();
  pvVar16 = (void *)(uint64_t)((int)local_108 + 1U);
  if (0x7f < (int)local_108) goto LAB_000b952e;
  goto LAB_000b9313;
LAB_000b952e:
  pvVar16 = (void *)(uint64_t)((int)local_108 + 1U);
  if (0x7e < (int)local_108) {
    FUN_00c8e340(dVar27,0);
    goto LAB_000b956a;
  }
  lVar15 = lVar15 + 1;
  iVar23 = *(int *)(lVar9 + 0x18);
  iVar11 = iVar23 + 0xf;
  if (-1 < iVar23) {
    iVar11 = iVar23;
  }
  if (iVar11 >> 4 <= lVar15) goto LAB_000b956a;
  goto LAB_000b92e0;
}



// ============================================================
// 000b75e0
// ============================================================
// Function: FUN_000b75e0
// Address: 000b75e0
// Size: 2047 bytes
// Class: MDAsyncProcess

void FUN_000b75e0(float param_1,int64_t *param_2,uint64_t param_3,int64_t *param_4)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  char *pcVar4;
  int64_t lVar5;
  int iVar6;
  int64_t *arg1;
  void*this_ptr;
  int64_t **pplVar7;
  int iVar8;
  bool bVar9;
  uint32_t uVar10;
  float fVar11;
  float fVar12;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  float local_e4;
  int64_t *local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  float local_ac;
  float fVar13;
  float local_9c;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68 [8];
  int64_t local_60;
  uint64_t local_58;
  int local_50;
  float local_44;
  char local_40 [8];
  char local_38 [8];
  
  local_ac = param_1;
  FUN_01e05950();
  plVar2 = local_70;
  local_40[0] = local_68[0];
  pcVar4 = local_40;
  if (local_68[0] != '\0') {
    pcVar4 = local_68;
  }
  *pcVar4 = '\0';
  if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_44 = 0.0;
  if ((int64_t *)*param_4 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_4 + 0x990))();
    if (local_70 == (int64_t *)0x0) {
      bVar9 = false;
    }
    else {
      pplVar7 = &local_80;
      (**(code **)(*(int64_t *)*param_4 + 0x990))();
      plVar1 = local_80;
      FUN_00053ac0();
      if (plVar1 == (int64_t *)0x0) {
LAB_000b76cc:
        pplVar7 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar3 = FUN_00e85ea0();
        if (cVar3 == '\0') goto LAB_000b76cc;
      }
      bVar9 = *pplVar7 != (int64_t *)0x0;
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar9) {
      (**(code **)(*(int64_t *)*param_4 + 0x990))();
      local_44 = (float)FUN_00d459e0();
      if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  lVar5 = *arg1;
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0xc) == 1) {
      uVar10 = FUN_00d23310();
      plVar1 = local_70;
      pcVar4 = local_68;
      if (local_68[0] == '\0') {
        pcVar4 = local_38;
      }
      local_38[0] = local_68[0];
      *pcVar4 = '\0';
      if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
        uVar10 = FUN_00d50b20();
      }
      local_108 = *param_2;
      local_100 = '\0';
      pplVar7 = &local_80;
      (**(code **)(*plVar1 + 0x98))(uVar10,&local_108);
      plVar1 = local_80;
      FUN_00053ac0();
      if (plVar1 == (int64_t *)0x0) {
LAB_000b78ef:
        pplVar7 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar3 = FUN_00e85ea0();
        if (cVar3 == '\0') goto LAB_000b78ef;
      }
      plVar1 = *pplVar7;
      if (*(char *)(pplVar7 + 1) == '\0') {
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar7 + 1) = 0;
      }
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        local_44 = (float)FUN_00d459e0();
        if ((int64_t *)*param_4 != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)*param_4 + 0x998))();
        }
        (**(code **)(*(int64_t *)*this_ptr + 0x998))();
        local_44 = local_44 / local_ac;
        (**(code **)(*(int64_t *)*this_ptr + 0x928))();
        if ((int64_t *)*param_4 != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)*param_4 + 0x928))(local_44);
        }
        FUN_00d50b20();
      }
      goto LAB_000b7dd6;
    }
    if (*(int *)(lVar5 + 0xc) != 0) {
      local_68[0] = '\0';
      local_70 = (int64_t *)0x0;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_44 = 0.0;
      local_9c = g_02391074;
      local_58._4_4_ = 0;
      iVar8 = 0;
      local_60 = lVar5;
      fVar13 = g_02391078;
      while( true ) {
        if (local_58._4_4_ != 0) {
          if (local_58._4_4_ < 1) {
            iVar6 = -local_58._4_4_;
          }
          else {
            iVar6 = (int)local_58 - local_58._4_4_;
            local_58 = CONCAT44(local_58._4_4_,iVar6);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar6 = 0;
          }
          local_58 = CONCAT44(iVar6,(int)local_58);
        }
        lVar5 = (int64_t)(int)local_58;
        iVar6 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar6);
        if (*(int *)(local_60 + 0xc) <= iVar6) break;
        local_70 = *(int64_t **)(*(int64_t *)(local_60 + 0x10) + 8 + lVar5 * 8);
        local_f8 = *param_2;
        local_f0 = '\0';
        (**(code **)(*local_70 + 0x98))(*(int64_t *)(local_60 + 0x10),&local_f8);
        plVar1 = local_80;
        FUN_00053ac0();
        pplVar7 = (int64_t **)&g_02802688;
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x360))();
          cVar3 = FUN_00e85ea0();
          pplVar7 = &local_80;
          if (cVar3 == '\0') {
            pplVar7 = (int64_t **)&g_02802688;
          }
        }
        plVar1 = *pplVar7;
        if (*(char *)(pplVar7 + 1) == '\0') {
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(void*)(pplVar7 + 1) = 0;
        }
        if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (int64_t *)0x0) {
          local_e4 = (float)FUN_00d459e0();
          FUN_00d50b20();
          fVar12 = local_e4 / local_ac;
          fVar11 = fVar12;
          if (fVar13 <= fVar12) {
            fVar11 = fVar13;
          }
          local_44 = local_44 + fVar12;
          if (fVar12 <= local_9c) {
            fVar12 = local_9c;
          }
          iVar8 = iVar8 + 1;
          local_9c = fVar12;
          fVar13 = fVar11;
        }
      }
      FUN_00083b20();
      if (iVar8 != 0) {
        local_44 = local_44 / (float)iVar8;
      }
      (**(code **)(*(int64_t *)*this_ptr + 0x998))();
      plVar1 = (int64_t *)*this_ptr;
      if ((fVar13 != local_9c) || (NAN(fVar13) || NAN(local_9c))) {
        FUN_00e99dd0();
        local_c0 = local_70;
        local_b8 = 0;
        if (local_68[0] == '\0') {
          if (local_70 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_68[0] = '\0';
        }
        local_b8 = '\x01';
        (**(code **)(*plVar1 + 0x958))();
        if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((int64_t *)*param_4 != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)*param_4 + 0x998))();
          if ((int64_t *)*param_4 != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*param_4 + 0x928))(local_44);
          }
        }
      }
      else {
        (**(code **)(*plVar2 + 0x378))();
        local_d0 = local_70;
        local_c8 = 0;
        if (local_68[0] == '\0') {
          if (local_70 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_68[0] = '\0';
        }
        local_c8 = '\x01';
        (**(code **)(*plVar1 + 0x958))();
        if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((int64_t *)*param_4 != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)*param_4 + 0x998))();
          if ((int64_t *)*param_4 != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*param_4 + 0x928))(fVar13);
          }
        }
      }
      goto LAB_000b7dd6;
    }
  }
  if ((int64_t *)*param_4 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_4 + 0x998))();
    if ((int64_t *)*param_4 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*param_4 + 0x928))(local_44);
    }
  }
  (**(code **)(*(int64_t *)*this_ptr + 0x998))();
  plVar1 = (int64_t *)*this_ptr;
  FUN_00e9aaa0();
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
  (**(code **)(*plVar1 + 0x958))();
  if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_000b7dd6:
  if ((local_40[0] != '\0') && (plVar2 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 000b6c10
// ============================================================
// Function: FUN_000b6c10
// Address: 000b6c10
// Size: 665 bytes
// Class: MDAsyncProcess
// String references:
//   "%@Insp2.gnui"

void FUN_000b6c10(uint64_t param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  bool bVar3;
  int64_t *plVar4;
  char cVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar6;
  int64_t **pplVar7;
  int64_t local_90;
  char local_88;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  uint32_t local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  lVar1 = *arg1;
  local_58 = 1;
  local_60 = &g_024c5048;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_48 = '\x01';
  pplVar7 = &local_60;
  local_50 = lVar1;
  FUN_00d8cb40(param_1,pplVar7);
  plVar4 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  local_60 = &g_024c5048;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_70 = 0;
  local_68 = '\0';
  FUN_01e51a60(param_1,&local_70);
  plVar6 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      local_60 = (int64_t *)0x0;
      local_58 = CONCAT31(local_58._1_3_,1);
      plVar6 = (int64_t *)0x0;
    }
    else {
      FUN_00d50b00();
      local_60 = plVar6;
      local_58 = CONCAT31(local_58._1_3_,1);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_60 = local_40;
    local_58 = CONCAT31(local_58._1_3_,1);
    local_38 = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  FUN_00018750();
  if (plVar6 == (int64_t *)0x0) {
LAB_000b6d1f:
    pplVar7 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_000b6d1f;
  }
  plVar2 = *pplVar7;
  cVar5 = *(char *)(pplVar7 + 1);
  if ((cVar5 == '\0') || (plVar2 == (int64_t *)0x0)) {
    if (plVar2 == (int64_t *)0x0) {
      bVar3 = true;
      *(void*)(this_ptr + 1) = 0;
      goto joined_r0x000b6e8a;
    }
  }
  else {
    FUN_00d50b00();
  }
  FUN_01f02570();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar2 + 0x5c8))();
  if (local_40 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x5c8))();
    FUN_00d8c7a0();
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  bVar3 = false;
  *(void*)(this_ptr + 1) = 0;
joined_r0x000b6e8a:
  if ((cVar5 == '\0') && (!bVar3)) {
    FUN_00d50b00();
  }
  *this_ptr = (int64_t)plVar2;
  *(void*)(this_ptr + 1) = 1;
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 000b5720
// ============================================================
// Function: FUN_000b5720
// Address: 000b5720
// Size: 562 bytes
// Class: MDAsyncProcess

void FUN_000b5720(uint64_t param_1,uint64_t param_2)

{
  uint8_t auVar1 [16];
  uint8_t auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float in_XMM1_Dc;
  float fVar7;
  float in_XMM1_Dd;
  float fVar8;
  uint8_t local_38 [16];
  uint64_t local_28;
  uint8_t local_20;
  
  fVar5 = (float)((uint64_t)param_2 >> 0x20);
  fVar3 = (float)param_2;
  FUN_01d97850();
  if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_28 == (int64_t *)0x0) {
    FUN_01d94ee0();
    FUN_01d95060();
  }
  else {
    FUN_01d97870();
    (**(code **)(*local_28 + 0x4d8))();
    fVar4 = fVar3;
    fVar6 = fVar5;
    fVar7 = in_XMM1_Dc;
    fVar8 = in_XMM1_Dd;
    if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d97850();
    (**(code **)(*local_28 + 0x4d8))();
    local_38._0_4_ = fVar4;
    local_38._4_4_ = fVar6;
    local_38._8_4_ = fVar7;
    local_38._12_4_ = fVar8;
    if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    auVar2._4_4_ = -(uint)(fVar5 < fVar6);
    auVar2._0_4_ = -(uint)(fVar3 < fVar4);
    auVar2._8_4_ = -(uint)(in_XMM1_Dc < fVar7);
    auVar2._12_4_ = -(uint)(in_XMM1_Dd < fVar8);
    extractps(auVar2,1);
    FUN_01d95060();
    FUN_01d94ee0();
    FUN_01d97870();
    (**(code **)(*local_28 + 0x4d8))();
    if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    auVar1._4_4_ = fVar6;
    auVar1._0_4_ = fVar4;
    auVar1._8_4_ = fVar7;
    auVar1._12_4_ = fVar8;
    blendps(local_38,auVar1,2);
    FUN_01d97850();
    (**(code **)(*local_28 + 0x4d0))();
    if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01d97e80();
  if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_28 != (int64_t *)0x0) {
    FUN_01d97e80();
    FUN_01d92440();
    if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01d97ec0();
  if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_28 != (int64_t *)0x0) {
    FUN_01d97ec0();
    FUN_01d92440();
    if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 000b7160
// ============================================================
// Function: FUN_000b7160
// Address: 000b7160
// Size: 702 bytes
// Class: MDAsyncProcess

void FUN_000b7160(void)

{
  void*puVar1;
  int64_t *plVar2;
  uint8_t uVar3;
  uint uVar4;
  void*puVar5;
  int64_t *this_ptr;
  int iVar6;
  int64_t *local_40;
  char local_38;
  
  FUN_01e5ca90();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  puVar5 = (void*)FUN_00e8fc40();
  FUN_0006daf0();
  *puVar5 = &g_024f1490;
  puVar5[2] = &g_024f1e80;
  *(void*)(puVar5 + 0x27) = 0;
  *(void*)((int64_t)puVar5 + 0x13b) = 0;
  puVar5[0x28] = 0;
  puVar5[0x29] = 0;
  puVar5[0x2a] = 0;
  puVar5[0x2b] = 0;
  puVar5[0x2c] = 0;
  puVar5[0x2d] = 0;
  puVar5[0x2e] = 0;
  puVar5[0x2f] = 0;
  puVar5[0x30] = 0;
  (*g_024f14a8)();
  puVar1 = (void*)this_ptr[2];
  if (puVar1 == puVar5) {
    FUN_00d50b20();
  }
  else {
    this_ptr[2] = (int64_t)puVar5;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  plVar2 = (int64_t *)this_ptr[2];
  (**(code **)(*local_40 + 0x4d8))();
  (**(code **)(*plVar2 + 0x4d0))();
  FUN_01e59080();
  FUN_01e4cf40();
  plVar2 = (int64_t *)this_ptr[2];
  uVar3 = FUN_01e5c720();
  FUN_01e5c7d0();
  (**(code **)(*plVar2 + 0x558))(uVar3);
  plVar2 = (int64_t *)this_ptr[2];
  (**(code **)(*local_40 + 0x578))();
  (**(code **)(*plVar2 + 0x570))();
  (**(code **)(*this_ptr + 0x670))();
  uVar4 = (**(code **)(*local_40 + 0x560))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((uVar4 & 0x10) == 0) {
    (**(code **)(*this_ptr + 0x670))();
    FUN_01e59910();
    (**(code **)(*local_40 + 0x9b8))();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*local_40 + 0x4a0))();
  iVar6 = *(int *)((int64_t)local_40 + 0xc);
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  if (0 < iVar6) {
    do {
      (**(code **)(*local_40 + 0x4a0))();
      plVar2 = *(int64_t **)local_40[2];
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar2 + 0x478))();
      (**(code **)(*(int64_t *)this_ptr[2] + 0x450))();
      FUN_00d50b20();
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 000b41e0
// ============================================================
// Function: FUN_000b41e0
// Address: 000b41e0
// Size: 609 bytes
// Class: MDAsyncProcess
// String references:
//   "MDAsyncProcess"

void FUN_000b41e0(uint32_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t **pplVar5;
  int64_t **pplVar6;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  char local_28 [8];
  
  lVar2 = g_026dc0d0;
  if (g_026dc0d0 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_78 = lVar2;
  local_70 = '\x01';
  pplVar6 = &local_38;
  FUN_000175c0(param_1,&local_78);
  plVar1 = local_38;
  // [STATIC_INIT: property registration]
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_000b425f;
  }
  pplVar6 = (int64_t **)&g_02802688;
LAB_000b425f:
  plVar1 = *pplVar6;
  local_28[0] = *(char *)(pplVar6 + 1);
  pplVar5 = (int64_t **)local_28;
  if (local_28[0] != '\0') {
    pplVar5 = pplVar6 + 1;
  }
  *(void*)pplVar5 = 0;
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ca1340();
  (**(code **)(*plVar1 + 0x380))();
  FUN_00d403d0();
  local_68 = g_026dc0d8;
  if (g_026dc0d8 != 0) {
    FUN_00d50b00();
  }
  local_60 = '\x01';
  local_50 = '\0';
  local_48 = 0;
  local_40 = '\0';
  local_58 = plVar1;
  FUN_00d40470(&local_48,&local_58,1,3);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_28[0] != '\0') {
    FUN_00d50b20();
  }
  return;
}

