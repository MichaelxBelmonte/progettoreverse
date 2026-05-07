// Function: FUN_017ee2e0
// Address: 017ee2e0
// Size: 11571 bytes
// Class: MUAudioSourcePrincipalItem
// String references:
//   "MUAudioSourcePrincipalItem"

uint64_t FUN_017ee2e0(int64_t *param_1,void*param_2,int64_t *param_3,char *param_4,
                      float *param_5,float *param_6,float *param_7,void*param_8,
                      void*param_9)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  void*puVar5;
  double dVar6;
  uint8_t auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  uint uVar24;
  bool bVar25;
  bool bVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  qword *pqVar34;
  char cVar35;
  int iVar36;
  uint uVar37;
  void*puVar38;
  int64_t lVar39;
  void *pvVar40;
  int64_t lVar41;
  void*puVar42;
  char *pcVar43;
  qword **ppqVar44;
  uint64_t uVar45;
  void* pVar46;
  uint uVar47;
  qword *pqVar48;
  qword **ppqVar49;
  qword *pqVar50;
  int iVar51;
  int iVar52;
  uint64_t uVar53;
  int64_t lVar54;
  int64_t *plVar55;
  qword *pqVar56;
  int64_t *arg1;
  uint8_t (*pauVar57) [16];
  uint64_t uVar58;
  uint64_t uVar59;
  char *pcVar60;
  int64_t lVar61;
  uint uVar62;
  uint7 uVar63;
  float fVar64;
  uint32_t uVar65;
  float fVar66;
  float fVar67;
  float extraout_XMM0_Da;
  uint8_t auVar68 [16];
  float fVar69;
  int iVar70;
  int iVar71;
  int iVar72;
  int iVar73;
  uint8_t auVar74 [16];
  uint8_t auVar75 [16];
  uint8_t auVar76 [16];
  uint8_t auVar77 [16];
  uint8_t auVar78 [16];
  uint8_t auVar79 [16];
  uint8_t auVar80 [16];
  uint8_t auVar81 [16];
  uint8_t auVar82 [16];
  uint8_t auVar83 [16];
  uint8_t auVar84 [16];
  uint8_t auVar85 [16];
  int64_t *local_res8;
  int64_t *local_res10;
  void* *local_res18;
  float *local_res20;
  int64_t local_160;
  char local_158;
  qword *local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  qword *local_130;
  char *local_128;
  int64_t *local_120;
  uint32_t local_114;
  qword *local_110;
  char local_108;
  int64_t *local_100;
  int local_f4;
  qword *local_f0;
  uint64_t local_e8;
  uint64_t local_e0;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  uint64_t local_c8;
  void*local_c0;
  qword *local_b8;
  uint64_t local_b0;
  void*local_a8;
  qword *local_a0;
  qword *local_98;
  qword *local_90;
  code *local_88;
  int64_t local_80;
  uint64_t local_78;
  int local_70;
  uint local_64;
  qword *local_60;
  qword *local_58;
  float local_4c;
  qword *local_48;
  char local_40;
  double local_38;
  
  local_128 = param_4;
  local_120 = param_3;
  local_100 = param_1;
  puVar38 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  local_e0 = &g_02572358;
  *puVar38 = &g_02572358;
  local_b8 = g_02572370;
  local_a8 = puVar38;
  (*g_02572370)();
  *param_9 = 0;
  if (*arg1 == 0) {
    local_b0 = 0;
    local_98 = (qword *)0x0;
    iVar51 = *(int *)((int64_t)local_a8 + 0xc);
  }
  else {
    local_88 = ((uint64_t)local_88 & 0xffffffffffffff00);
    local_90 = (qword *)0x0;
    local_78 = 0xffffffff;
    local_70 = 0;
    local_4c = 0.0;
    local_b0 = 0;
    local_98 = (qword *)0x0;
    local_80 = *arg1;
    while( true ) {
      lVar39 = (int64_t)(int)local_78;
      iVar51 = (int)local_78 + 1;
      local_78 = CONCAT44(local_78._4_4_,iVar51);
      if (*(int *)(local_80 + 0xc) <= iVar51) break;
      lVar41 = *(int64_t *)(local_80 + 0x10);
      local_90 = *(qword **)(lVar41 + 8 + lVar39 * 8);
      local_f0 = (qword *)0x0;
      pvVar40 = _pthread_getspecific((void*)lVar41);
      pVar46 = (void*)lVar41;
      if (pvVar40 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125a560();
      if (local_40 == '\0') {
        if (local_48 != (qword *)0x0) {
          FUN_00d50b00();
          if ((local_40 != '\0') && (local_48 != (qword *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_017ee4d0;
        }
LAB_017ee410:
      }
      else {
        if (local_48 == (qword *)0x0) goto LAB_017ee410;
LAB_017ee4d0:
        pvVar40 = _pthread_getspecific(pVar46);
        if (pvVar40 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011ef460();
        local_58 = local_48;
        if (local_48 == (qword *)0x0) {
          bVar26 = true;
          pqVar56 = (qword *)0x0;
          local_58 = (qword *)0x0;
          bVar25 = true;
        }
        else {
          pqVar56 = local_48;
          if (((local_40 == '\0') && (FUN_00d50b00(), local_40 != '\0')) &&
             (local_48 != (qword *)0x0)) {
            FUN_00d50b20();
          }
          pVar46 = (void*)pqVar56;
          pvVar40 = _pthread_getspecific(pVar46);
          if ((pvVar40 != (void *)0x0) && (lVar39 = FUN_00e8b990(), lVar39 != 0)) {
            pVar46 = (void*)local_58;
          }
          FUN_013dd6a0();
          pqVar56 = local_48;
          if (local_48 == (qword *)0x0) {
            bVar25 = true;
            pqVar56 = (qword *)0x0;
            bVar26 = false;
          }
          else {
            if (local_40 == '\0') {
              FUN_00d50b00();
              local_f0 = pqVar56;
              if ((local_40 != '\0') && (local_48 != (qword *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_f0 = local_48;
            }
            pvVar40 = _pthread_getspecific(pVar46);
            if (pvVar40 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar35 = FUN_014bc070();
            if (cVar35 == '\0') {
              pvVar40 = _pthread_getspecific(pVar46);
              pqVar48 = pqVar56;
              if ((pvVar40 != (void *)0x0) && (lVar39 = FUN_00e8b990(), lVar39 != 0)) {
                pqVar48 = (qword *)pqVar56[(uint64_t)(*(uint *)(lVar39 + 0x154) & 1) + 4];
              }
              fVar64 = (float)(**(code **)(*pqVar48 + 0x3e0))();
              if (!NAN(fVar64)) {
                if ((g_027c0170 == '\0') && (iVar51 = ___cxa_guard_acquire(), iVar51 != 0)) {
                  g_02790158 = FUN_007ef2d0();
                  g_02790140 = "MUAudioSourcePrincipalItem";
                  g_02790148 = 0x138;
                  g_02790150 = FUN_010fe5c0;
                  g_02790160 = 0;
                  ram_0000000002790168 = 0;
                  g_02790170 = 0;
                  ram_0000000002790178 = 0;
                  g_02790180 = 0;
                  ram_0000000002790188 = 0;
                  g_02790190 = 0;
                  ram_0000000002790198 = 0;
                  g_027901a0 = 0;
                  ram_00000000027901a8 = 0;
                  g_027901b0 = 0;
                  ram_00000000027901b8 = 0;
                  g_027901c0 = 0;
                  ram_00000000027901c8 = 0;
                  g_027901d0 = 0;
                  ram_00000000027901d8 = 0;
                  g_027901e0 = 0;
                  ram_00000000027901e8 = 0;
                  g_027901f0 = 0;
                  ram_00000000027901f8 = 0;
                  g_02790200 = 0;
                  ___cxa_guard_release();
                }
                (**(code **)(*pqVar56 + 0x360))();
                cVar35 = FUN_00e85ea0();
                pqVar56 = local_f0;
                pqVar48 = local_f0;
                if (cVar35 == '\0') {
                  pqVar48 = g_02802688;
                }
                if (pqVar48 != (qword *)0x0) {
                  local_48 = local_f0;
                  local_40 = '\0';
                  FUN_00d21140();
                  if ((local_40 != '\0') && (local_48 != (qword *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (*local_res10 != 0) {
                    pvVar40 = _pthread_getspecific((void*)pqVar48);
                    if (pvVar40 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    cVar35 = FUN_0126ee50();
                    local_38 = (double)CONCAT44(local_38._4_4_,g_02391090);
                    if (cVar35 != '\0') {
                      pvVar40 = _pthread_getspecific((void*)pqVar48);
                      if (pvVar40 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_0125e7c0();
                      pqVar50 = local_48;
                      if ((((local_40 == '\0') && (local_48 != (qword *)0x0)) &&
                          (FUN_00d50b00(), local_40 != '\0')) && (local_48 != (qword *)0x0)) {
                        FUN_00d50b20();
                      }
                      local_60 = pqVar50;
                      pvVar40 = _pthread_getspecific((void*)pqVar48);
                      if (pvVar40 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_013dfdd0();
                      pqVar50 = local_48;
                      if (((local_40 == '\0') && (local_48 != (qword *)0x0)) &&
                         ((FUN_00d50b00(), local_40 != '\0' && (local_48 != (qword *)0x0)))) {
                        FUN_00d50b20();
                      }
                      pvVar40 = _pthread_getspecific((void*)pqVar48);
                      if (pvVar40 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_013dd6a0();
                      pqVar34 = local_48;
                      if (((local_40 == '\0') && (local_48 != (qword *)0x0)) &&
                         ((FUN_00d50b00(), local_40 != '\0' && (local_48 != (qword *)0x0)))) {
                        FUN_00d50b20();
                      }
                      pvVar40 = _pthread_getspecific((void*)pqVar48);
                      if (pvVar40 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      uVar65 = FUN_014bae60();
                      local_38 = (double)CONCAT44(local_38._4_4_,uVar65);
                      if (pqVar34 != (qword *)0x0) {
                        FUN_00d50b20();
                      }
                      if (pqVar50 != (qword *)0x0) {
                        FUN_00d50b20();
                      }
                      if (local_60 != (qword *)0x0) {
                        FUN_00d50b20();
                      }
                    }
                    pvVar40 = _pthread_getspecific((void*)pqVar48);
                    if (pvVar40 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    uVar65 = FUN_014bc1c0();
                    local_c0 = (void*)CONCAT44(local_c0._4_4_,uVar65);
                    if (pqVar56 != (qword *)0x0) {
                      FUN_00d50b00();
                    }
                    pvVar40 = _pthread_getspecific((void*)pqVar48);
                    pqVar50 = pqVar56;
                    if ((pvVar40 != (void *)0x0) && (lVar39 = FUN_00e8b990(), lVar39 != 0)) {
                      pqVar50 = (qword *)pqVar56[(uint64_t)(*(uint *)(lVar39 + 0x154) & 1) + 4];
                    }
                    fVar64 = (float)(**(code **)(*pqVar50 + 0x3e0))();
                    fVar64 = (float)_exp2f(fVar64 * g_023941f4);
                    local_a0 = (qword *)CONCAT44(local_a0._4_4_,fVar64 * g_023941f8);
                    pvVar40 = _pthread_getspecific((void*)pqVar48);
                    pqVar50 = pqVar56;
                    if ((pvVar40 != (void *)0x0) && (lVar39 = FUN_00e8b990(), lVar39 != 0)) {
                      pqVar50 = (qword *)pqVar56[(uint64_t)(*(uint *)(lVar39 + 0x154) & 1) + 4];
                    }
                    (**(code **)(*pqVar50 + 0x378))();
                    pvVar40 = _pthread_getspecific((void*)pqVar48);
                    if (pvVar40 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_01320d00();
                    local_60 = local_48;
                    if (local_40 == '\0') {
                      if (((local_48 != (qword *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
                         (local_48 != (qword *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    else {
                      local_40 = '\0';
                    }
                    if ((local_108 != '\0') && (local_110 != (qword *)0x0)) {
                      FUN_00d50b20();
                    }
                    pvVar40 = _pthread_getspecific((void*)pqVar48);
                    pqVar50 = local_60;
                    if ((pvVar40 != (void *)0x0) &&
                       (lVar39 = FUN_00e8b990(), pqVar50 = local_60, lVar39 != 0)) {
                      pqVar48 = local_60;
                      pqVar50 = (qword *)local_60[(uint64_t)(*(uint *)(lVar39 + 0x154) & 1) + 4];
                    }
                    pVar46 = (void*)pqVar48;
                    local_c8 = (double)(**(code **)(*pqVar50 + 0x370))();
                    pvVar40 = _pthread_getspecific(pVar46);
                    pqVar48 = pqVar56;
                    if ((pvVar40 != (void *)0x0) && (lVar39 = FUN_00e8b990(), lVar39 != 0)) {
                      pqVar48 = (qword *)pqVar56[(uint64_t)(*(uint *)(lVar39 + 0x154) & 1) + 4];
                    }
                    iVar51 = (**(code **)(*pqVar48 + 0x3a0))();
                    pvVar40 = _pthread_getspecific(pVar46);
                    pqVar48 = pqVar56;
                    if ((pvVar40 != (void *)0x0) && (lVar39 = FUN_00e8b990(), lVar39 != 0)) {
                      pqVar48 = (qword *)pqVar56[(uint64_t)(*(uint *)(lVar39 + 0x154) & 1) + 4];
                    }
                    local_e8 = (**(code **)(*pqVar48 + 0x380))();
                    iVar36 = FUN_00e7d780(((float)local_c8 / local_a0._0_4_) * g_023b169c);
                    pvVar40 = _pthread_getspecific(pVar46);
                    pqVar48 = pqVar56;
                    if ((pvVar40 != (void *)0x0) && (lVar39 = FUN_00e8b990(), lVar39 != 0)) {
                      pqVar48 = (qword *)pqVar56[(uint64_t)(*(uint *)(lVar39 + 0x154) & 1) + 4];
                    }
                    lVar39 = (**(code **)(*pqVar48 + 0x380))();
                    pvVar40 = _pthread_getspecific(pVar46);
                    if (pvVar40 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    lVar41 = FUN_014bb590();
                    pqVar48 = local_60;
                    iVar36 = iVar36 + (iVar51 - (int)(float)local_e8);
                    pqVar50 = local_98;
                    if (lVar41 < lVar39 + iVar36) {
                      uVar53 = local_b0 & 0xffffffff;
                      local_38 = (double)CONCAT44(local_38._4_4_,local_4c);
                    }
                    else {
                      local_38._0_4_ = local_38._0_4_ * local_c0._0_4_;
                      if (local_4c < local_38._0_4_) {
                        uVar63 = (uint7)(uint3)((uint)iVar36 >> 8);
                        if (local_98 == pqVar56) {
                          if (((char)local_b0 == '\0') && (pqVar56 != (qword *)0x0)) {
                            FUN_00d50b00();
                            goto LAB_017eece0;
                          }
                          uVar53 = local_b0 & 0xffffffff;
                        }
                        else {
                          if (pqVar56 != (qword *)0x0) {
                            FUN_00d50b00();
                          }
                          pqVar48 = local_60;
                          uVar53 = CONCAT71(uVar63,1);
                          pqVar50 = pqVar56;
                          if (((char)local_b0 != '\0') && (local_98 != (qword *)0x0)) {
                            FUN_00d50b20();
                            local_98 = pqVar56;
LAB_017eece0:
                            uVar53 = CONCAT71(uVar63,1);
                            pqVar50 = local_98;
                          }
                        }
                      }
                      else {
                        uVar53 = local_b0 & 0xffffffff;
                        local_38 = (double)CONCAT44(local_38._4_4_,local_4c);
                      }
                    }
                    local_98 = pqVar50;
                    if (pqVar48 != (qword *)0x0) {
                      FUN_00d50b20();
                    }
                    if (pqVar56 != (qword *)0x0) {
                      FUN_00d50b20();
                    }
                    local_4c = local_38._0_4_;
                    local_b0 = uVar53;
                  }
                }
              }
            }
            bVar26 = false;
            bVar25 = false;
          }
        }
        FUN_00d50b20();
        if (!bVar25 && pqVar56 != (qword *)0x0) {
          FUN_00d50b20();
        }
        if (!bVar26) {
          FUN_00d50b20();
          goto LAB_017ee410;
        }
      }
      if (local_78._4_4_ != 0) {
        if (local_78._4_4_ < 1) {
          iVar51 = -local_78._4_4_;
        }
        else {
          iVar51 = (int)local_78 - local_78._4_4_;
          local_78._4_4_ = (int)(local_78 >> 0x20);
          local_78 = CONCAT44(local_78._4_4_,iVar51);
          FUN_00d23690();
          local_70 = local_70 + local_78._4_4_;
          iVar51 = 0;
        }
        local_78 = CONCAT44(iVar51,(int)local_78);
      }
    }
    FUN_001159b0();
    iVar51 = *(int *)((int64_t)local_a8 + 0xc);
  }
  if (iVar51 == 0) {
    uVar53 = 0;
    goto LAB_017f1113;
  }
  param_2 = (void*)*param_2;
  if (param_2 == (void*)0x0) {
    puVar38 = (void*)0x0;
    local_c0 = (void*)0x0;
    if (iVar51 < 1) goto LAB_017ef01e;
LAB_017eee77:
    local_114 = 0;
    local_38 = (double)((uint64_t)local_38 & 0xffffffff00000000);
    lVar39 = 0;
    local_58._0_4_ = g_02391078;
    local_60 = (qword *)CONCAT44(local_60._4_4_,g_02391078);
    local_4c = 0.0;
    local_a0 = (qword *)((uint64_t)local_a0 & 0xffffffff00000000);
    do {
      plVar55 = *(int64_t **)(local_a8[2] + lVar39 * 8);
      puVar38 = local_a8;
      pvVar40 = _pthread_getspecific((void*)local_a8);
      pVar46 = (void*)puVar38;
      if ((pvVar40 != (void *)0x0) && (lVar41 = FUN_00e8b990(), lVar41 != 0)) {
        plVar55 = (int64_t *)plVar55[(uint64_t)(*(uint *)(lVar41 + 0x154) & 1) + 4];
      }
      fVar64 = (float)(**(code **)(*plVar55 + 0x3e0))();
      if (!NAN(fVar64)) {
        local_c8 = (double)CONCAT44(local_c8._4_4_,fVar64);
        fVar64 = (float)_exp2f(fVar64 * g_023941f4);
        local_e8 = CONCAT44(local_e8._4_4_,fVar64 * g_023941f8);
        pvVar40 = _pthread_getspecific(pVar46);
        if (pvVar40 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar6 = (double)FUN_014bb310();
        fVar64 = (float)local_e8;
        if (local_60._0_4_ <= (float)local_e8) {
          fVar64 = local_60._0_4_;
        }
        fVar66 = (float)local_c8;
        if (local_58._0_4_ <= (float)local_c8) {
          fVar66 = local_58._0_4_;
        }
        fVar67 = (float)local_c8;
        if ((float)local_c8 <= local_38._0_4_) {
          fVar67 = local_38._0_4_;
        }
        local_a0 = (qword *)CONCAT44(local_a0._4_4_,local_a0._0_4_ + (float)dVar6);
        local_4c = local_4c + (float)local_e8 * (float)dVar6;
        local_60 = (qword *)CONCAT44(local_60._4_4_,fVar64);
        local_38 = (double)CONCAT44(local_38._4_4_,fVar67);
        local_58._0_4_ = fVar66;
      }
      lVar39 = lVar39 + 1;
      puVar38 = local_a8;
    } while (lVar39 < *(int *)((int64_t)local_a8 + 0xc));
  }
  else {
    puVar38 = param_2;
    puVar42 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar42 = local_e0;
    (*local_b8)();
    local_c0 = puVar42;
    if (0 < *(int *)((int64_t)local_a8 + 0xc)) goto LAB_017eee77;
LAB_017ef01e:
    local_114 = 0;
    local_a0 = (qword *)((uint64_t)local_a0 & 0xffffffff00000000);
    local_38 = (double)((uint64_t)local_38 & 0xffffffff00000000);
    local_60 = (qword *)CONCAT44(local_60._4_4_,g_02391078);
    local_58._0_4_ = g_02391078;
    local_4c = 0.0;
  }
  pVar46 = (void*)puVar38;
  fVar64 = g_023908e0;
  if (g_02394274 <= local_a0._0_4_) {
    fVar64 = local_4c / local_a0._0_4_;
  }
  fVar66 = (local_38._0_4_ - local_58._0_4_) * g_0239011c;
  local_58._0_4_ = local_58._0_4_ + fVar66;
  local_38 = (double)CONCAT44(local_38._4_4_,fVar66);
  local_a0 = (qword *)CONCAT44(local_a0._4_4_,g_023b3888 * fVar66);
  local_4c = fVar64;
  fVar64 = (float)_exp2f((local_58._0_4_ - g_023b3888 * fVar66) * g_023941f4);
  *param_5 = fVar64 * g_023941f8;
  fVar64 = (float)_exp2f((local_a0._0_4_ + local_58._0_4_) * g_023941f4);
  *param_6 = fVar64 * g_023941f8;
  plVar55 = *(int64_t **)local_a8[2];
  pvVar40 = _pthread_getspecific(pVar46);
  if ((pvVar40 != (void *)0x0) && (lVar39 = FUN_00e8b990(), lVar39 != 0)) {
    plVar55 = (int64_t *)plVar55[(uint64_t)(*(uint *)(lVar39 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar55 + 0x378))();
  pqVar56 = local_90;
  if (((char)local_88 == '\0') && (local_90 != (qword *)0x0)) {
    FUN_00d50b00();
    if (((char)local_88 != '\0') && (local_90 != (qword *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_130 = pqVar56;
  pvVar40 = _pthread_getspecific(pVar46);
  if (pvVar40 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01320d00();
  pqVar56 = local_90;
  pvVar40 = _pthread_getspecific(pVar46);
  pqVar48 = local_90;
  if ((pvVar40 != (void *)0x0) && (lVar39 = FUN_00e8b990(), pqVar56 = pqVar48, lVar39 != 0)) {
    pqVar56 = (qword *)pqVar48[(uint64_t)(*(uint *)(lVar39 + 0x154) & 1) + 4];
  }
  local_a0 = (qword *)(**(code **)(*pqVar56 + 0x370))();
  if (((char)local_88 != '\0') && (local_90 != (qword *)0x0)) {
    FUN_00d50b20();
  }
  iVar51 = FUN_00e7d850(SUB84((double)local_a0 / (double)local_60._0_4_,0));
  local_60 = (qword *)CONCAT44(local_60._4_4_,(local_60._0_4_ + local_4c) * g_0239011c);
  fVar64 = 2.24208e-44;
  do {
    fVar66 = fVar64;
    fVar64 = (float)((int)fVar66 * 2);
  } while ((int)fVar66 < iVar51 * 4);
  local_4c = 5.73972e-42;
  if ((uint)fVar66 < 0x1000) {
    local_4c = fVar66;
  }
  GNFastFourierTransformer_create();
  local_a0 = local_90;
  if (((char)local_88 == '\0') && (local_90 != (qword *)0x0)) {
    FUN_00d50b00();
    if (((char)local_88 != '\0') && (local_90 != (qword *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  local_b8 = local_90;
  pqVar56 = local_90;
  if (((char)local_88 == '\0') && (local_90 != (qword *)0x0)) {
    FUN_00d50b00();
    pqVar56 = local_b8;
    if (((char)local_88 != '\0') && (local_90 != (qword *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  pcVar43 = (char *)FUN_00e83da0();
  ppqVar44 = (qword **)((int64_t)&MACH_HEADER.magic + 1);
  if (1 < (uint)local_4c) {
    ppqVar44 = (qword **)(uint64_t)(uint)local_4c;
  }
  if (7 < (uint)ppqVar44) {
    ppqVar49 = (qword **)(uint64_t)((uint)ppqVar44 & 0x1ff0);
    lVar39 = ((uint64_t)(ppqVar49 + -1) >> 3) + 1;
    pauVar57 = (uint8_t (*) [16])(pcVar43 + 0x30);
    do {
      fVar64 = *(float *)((int64_t)pauVar57[-3] + 4);
      fVar66 = *(float *)((int64_t)pauVar57[-3] + 8);
      fVar67 = *(float *)((int64_t)pauVar57[-3] + 0xc);
      fVar69 = *(float *)((int64_t)pauVar57[-2] + 4);
      fVar8 = *(float *)((int64_t)pauVar57[-2] + 0xc);
      fVar9 = *(float *)pauVar57[-1];
      fVar10 = *(float *)((int64_t)pauVar57[-1] + 4);
      fVar11 = *(float *)((int64_t)pauVar57[-1] + 8);
      fVar12 = *(float *)((int64_t)pauVar57[-1] + 0xc);
      fVar13 = *(float *)*pauVar57;
      fVar14 = *(float *)((int64_t)*pauVar57 + 4);
      fVar15 = *(float *)((int64_t)*pauVar57 + 8);
      fVar16 = *(float *)((int64_t)*pauVar57 + 0xc);
      auVar84._0_4_ = *(float *)pauVar57[-2] * *(float *)pauVar57[-2];
      auVar84._4_4_ = fVar69 * fVar69;
      auVar84._8_4_ =
           *(float *)((int64_t)pauVar57[-2] + 8) * *(float *)((int64_t)pauVar57[-2] + 8);
      auVar84._12_4_ = fVar8 * fVar8;
      *(float *)pauVar57[-3] = *(float *)pauVar57[-3] * *(float *)pauVar57[-3];
      *(float *)((int64_t)pauVar57[-3] + 4) = fVar64 * fVar64;
      *(float *)((int64_t)pauVar57[-3] + 8) = fVar66 * fVar66;
      *(float *)((int64_t)pauVar57[-3] + 0xc) = fVar67 * fVar67;
      pauVar57[-2] = auVar84;
      auVar74._0_4_ = fVar13 * fVar13;
      auVar74._4_4_ = fVar14 * fVar14;
      auVar74._8_4_ = fVar15 * fVar15;
      auVar74._12_4_ = fVar16 * fVar16;
      *(float *)pauVar57[-1] = fVar9 * fVar9;
      *(float *)((int64_t)pauVar57[-1] + 4) = fVar10 * fVar10;
      *(float *)((int64_t)pauVar57[-1] + 8) = fVar11 * fVar11;
      *(float *)((int64_t)pauVar57[-1] + 0xc) = fVar12 * fVar12;
      *pauVar57 = auVar74;
      pauVar57 = pauVar57 + 4;
      lVar39 = lVar39 + -2;
      if (lVar39 == 0) goto joined_r0x017ef3c7;
    } while( true );
  }
  ppqVar49 = (qword **)0x0;
  do {
    *(float *)(pcVar43 + (int64_t)ppqVar49 * 4) =
         *(float *)(pcVar43 + (int64_t)ppqVar49 * 4) * *(float *)(pcVar43 + (int64_t)ppqVar49 * 4)
    ;
    ppqVar49 = (qword **)((int64_t)ppqVar49 + 1);
joined_r0x017ef3c7:
  } while (ppqVar49 != ppqVar44);
  if (*(int *)((int64_t)local_a8 + 0xc) < 1) {
    local_d0 = 0;
    local_c8 = (double)((uint64_t)local_c8._4_4_ << 0x20);
    local_cc = 0;
    local_e0 = (void*)((uint64_t)local_e0._4_4_ << 0x20);
    local_d4 = 0;
    local_d8 = 0;
    local_f4 = 0;
  }
  else {
    local_e8 = CONCAT44(local_e8._4_4_,g_0241b660 + local_58._0_4_);
    local_38 = (double)CONCAT44(local_38._4_4_,local_38._0_4_ + g_02394240);
    local_58 = (qword *)CONCAT44(local_58._4_4_,local_58._0_4_ + g_02394240);
    lVar39 = 0;
    local_f4 = 0;
    local_d8 = 0;
    local_d4 = 0;
    local_e0 = (void*)((uint64_t)local_e0._4_4_ << 0x20);
    local_cc = 0;
    local_c8 = (double)((uint64_t)local_c8._4_4_ << 0x20);
    local_d0 = 0;
    do {
      pVar46 = (void*)ppqVar49;
      FUN_00c8e690();
      pqVar48 = local_90;
      if (((char)local_88 == '\0') && (local_90 != (qword *)0x0)) {
        FUN_00d50b00();
        if (((char)local_88 != '\0') && (local_90 != (qword *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_00c92170();
      FUN_00c92160();
      ___bzero();
      pvVar40 = _pthread_getspecific(pVar46);
      if (pvVar40 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_160 = *local_100;
      local_158 = '\0';
      local_150 = local_a0;
      local_148 = '\0';
      ppqVar49 = &local_150;
      param_4 = pcVar43;
      uVar37 = FUN_014cd1b0(ppqVar49,&local_160,local_4c);
      pqVar56 = (qword *)(uint64_t)uVar37;
      if ((local_148 != '\0') && (local_150 != (qword *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_158 != '\0') && (local_160 != 0)) {
        FUN_00d50b20();
      }
      if ((char)uVar37 != '\0') {
        if (local_c0 != (void*)0x0) {
          pqVar56 = *(qword **)(local_a8[2] + lVar39 * 8);
          if (pqVar56 != (qword *)0x0) {
            FUN_00d50b00();
          }
          local_88 = ((uint64_t)local_88 & 0xffffffffffffff00);
          local_90 = pqVar56;
          FUN_00d21140();
          if (((char)local_88 != '\0') && (local_90 != (qword *)0x0)) {
            FUN_00d50b20();
          }
          if (pqVar56 != (qword *)0x0) {
            FUN_00d50b20();
          }
        }
        param_4 = (char *)(uint64_t)local_64;
        if (0x1ff < (int)local_64) {
          local_64 = 0x1ff;
          param_4 = section_000001f8.sectname + 7;
        }
        ppqVar49 = (qword **)pqVar48[2];
        lVar41 = 7;
        fVar64 = (float)local_c8;
        do {
          fVar64 = fVar64 + *(float *)((int64_t)ppqVar49 + lVar41 * 4 + -0x1c) +
                   *(float *)((int64_t)ppqVar49 + lVar41 * 4 + -0x18) +
                   *(float *)((int64_t)ppqVar49 + lVar41 * 4 + -0x14) +
                   *(float *)((int64_t)ppqVar49 + lVar41 * 4 + -0x10) +
                   *(float *)((int64_t)ppqVar49 + lVar41 * 4 + -0xc) +
                   *(float *)((int64_t)ppqVar49 + lVar41 * 4 + -8) +
                   *(float *)((int64_t)ppqVar49 + lVar41 * 4 + -4) +
                   *(float *)((int64_t)ppqVar49 + lVar41 * 4);
          lVar41 = lVar41 + 8;
        } while (lVar41 != 0x207);
        local_c8 = (double)CONCAT44(local_c8._4_4_,fVar64);
        if (*local_120 != 0) {
          uVar37 = (uint)param_4;
          if (-1 < (int)uVar37) {
            puVar5 = *(void**)(*local_120 + 0x10);
            uVar62 = uVar37 + 1;
            uVar53 = (uint64_t)uVar62;
            if ((uVar37 < 7) ||
               ((puVar5 < (void*)((int64_t)ppqVar49 + uVar53 * 4) &&
                (ppqVar49 < puVar5 + uVar53 * 4)))) {
              uVar59 = 0;
            }
            else {
              uVar59 = (uint64_t)(uVar62 & 0xfffffff8);
              uVar45 = (uVar59 - 8 >> 3) + 1;
              if (uVar59 - 8 == 0) {
                pqVar56 = (qword *)0x0;
LAB_017ef865:
                pfVar1 = (float *)((int64_t)ppqVar49 + (int64_t)pqVar56 * 4);
                fVar64 = pfVar1[1];
                fVar66 = pfVar1[2];
                fVar67 = pfVar1[3];
                pfVar4 = (float *)((int64_t)ppqVar49 + (int64_t)pqVar56 * 4 + 0x10);
                fVar69 = *pfVar4;
                fVar8 = pfVar4[1];
                fVar9 = pfVar4[2];
                fVar10 = pfVar4[3];
                pfVar4 = (float *)(puVar5 + (int64_t)pqVar56 * 4);
                fVar11 = pfVar4[1];
                fVar12 = pfVar4[2];
                fVar13 = pfVar4[3];
                pfVar3 = (float *)(puVar5 + (int64_t)pqVar56 * 4 + 0x10);
                fVar14 = *pfVar3;
                fVar15 = pfVar3[1];
                fVar16 = pfVar3[2];
                fVar17 = pfVar3[3];
                pfVar3 = (float *)(puVar5 + (int64_t)pqVar56 * 4);
                *pfVar3 = *pfVar4 + *pfVar1;
                pfVar3[1] = fVar11 + fVar64;
                pfVar3[2] = fVar12 + fVar66;
                pfVar3[3] = fVar13 + fVar67;
                pfVar1 = (float *)(puVar5 + (int64_t)pqVar56 * 4 + 0x10);
                *pfVar1 = fVar14 + fVar69;
                pfVar1[1] = fVar15 + fVar8;
                pfVar1[2] = fVar16 + fVar9;
                pfVar1[3] = fVar17 + fVar10;
              }
              else {
                lVar41 = -(uVar45 & 0xfffffffffffffffe);
                pqVar56 = (qword *)0x0;
                do {
                  pfVar1 = (float *)((int64_t)ppqVar49 + (int64_t)pqVar56 * 4);
                  fVar64 = pfVar1[1];
                  fVar66 = pfVar1[2];
                  fVar67 = pfVar1[3];
                  pfVar4 = (float *)((int64_t)ppqVar49 + (int64_t)pqVar56 * 4 + 0x10);
                  fVar69 = *pfVar4;
                  fVar8 = pfVar4[1];
                  fVar9 = pfVar4[2];
                  fVar10 = pfVar4[3];
                  pfVar4 = (float *)(puVar5 + (int64_t)pqVar56 * 4);
                  fVar11 = pfVar4[1];
                  fVar12 = pfVar4[2];
                  fVar13 = pfVar4[3];
                  pfVar3 = (float *)(puVar5 + (int64_t)pqVar56 * 4 + 0x10);
                  fVar14 = *pfVar3;
                  fVar15 = pfVar3[1];
                  fVar16 = pfVar3[2];
                  fVar17 = pfVar3[3];
                  pfVar3 = (float *)(puVar5 + (int64_t)pqVar56 * 4 + 0x20);
                  fVar18 = *pfVar3;
                  fVar19 = pfVar3[1];
                  fVar20 = pfVar3[2];
                  fVar21 = pfVar3[3];
                  auVar84 = *(uint8_t (*) [16])(puVar5 + (int64_t)pqVar56 * 4 + 0x30);
                  pfVar3 = (float *)(puVar5 + (int64_t)pqVar56 * 4);
                  *pfVar3 = *pfVar4 + *pfVar1;
                  pfVar3[1] = fVar11 + fVar64;
                  pfVar3[2] = fVar12 + fVar66;
                  pfVar3[3] = fVar13 + fVar67;
                  pfVar1 = (float *)(puVar5 + (int64_t)pqVar56 * 4 + 0x10);
                  *pfVar1 = fVar14 + fVar69;
                  pfVar1[1] = fVar15 + fVar8;
                  pfVar1[2] = fVar16 + fVar9;
                  pfVar1[3] = fVar17 + fVar10;
                  pfVar1 = (float *)((int64_t)ppqVar49 + (int64_t)pqVar56 * 4 + 0x20);
                  fVar64 = pfVar1[1];
                  fVar66 = pfVar1[2];
                  fVar67 = pfVar1[3];
                  pfVar4 = (float *)((int64_t)ppqVar49 + (int64_t)pqVar56 * 4 + 0x30);
                  fVar69 = *pfVar4;
                  fVar8 = pfVar4[1];
                  fVar9 = pfVar4[2];
                  fVar10 = pfVar4[3];
                  pfVar4 = (float *)(puVar5 + (int64_t)pqVar56 * 4 + 0x20);
                  *pfVar4 = *pfVar1 + fVar18;
                  pfVar4[1] = fVar64 + fVar19;
                  pfVar4[2] = fVar66 + fVar20;
                  pfVar4[3] = fVar67 + fVar21;
                  pfVar1 = (float *)(puVar5 + (int64_t)pqVar56 * 4 + 0x30);
                  *pfVar1 = fVar69 + auVar84._0_4_;
                  pfVar1[1] = fVar8 + auVar84._4_4_;
                  pfVar1[2] = fVar9 + auVar84._8_4_;
                  pfVar1[3] = fVar10 + auVar84._12_4_;
                  pqVar56 = pqVar56 + 2;
                  lVar41 = lVar41 + 2;
                } while (lVar41 != 0);
                if ((uVar45 & 1) != 0) goto LAB_017ef865;
              }
              if (uVar59 == uVar53) goto LAB_017ef890;
            }
            uVar45 = ~uVar59;
            uVar58 = uVar53 & 3;
            if ((uVar62 & 3) != 0) {
              do {
                *(float *)(puVar5 + uVar59 * 4) =
                     *(float *)((int64_t)ppqVar49 + uVar59 * 4) + *(float *)(puVar5 + uVar59 * 4);
                uVar59 = uVar59 + 1;
                uVar58 = uVar58 - 1;
              } while (uVar58 != 0);
            }
            if (2 < uVar45 + uVar53) {
              do {
                *(float *)(puVar5 + uVar59 * 4) =
                     *(float *)((int64_t)ppqVar49 + uVar59 * 4) + *(float *)(puVar5 + uVar59 * 4);
                *(float *)(puVar5 + uVar59 * 4 + 4) =
                     *(float *)((int64_t)ppqVar49 + uVar59 * 4 + 4) +
                     *(float *)(puVar5 + uVar59 * 4 + 4);
                *(float *)(puVar5 + uVar59 * 4 + 8) =
                     *(float *)((int64_t)ppqVar49 + uVar59 * 4 + 8) +
                     *(float *)(puVar5 + uVar59 * 4 + 8);
                *(float *)(puVar5 + uVar59 * 4 + 0xc) =
                     *(float *)((int64_t)ppqVar49 + uVar59 * 4 + 0xc) +
                     *(float *)(puVar5 + uVar59 * 4 + 0xc);
                uVar59 = uVar59 + 4;
              } while (uVar53 != uVar59);
            }
          }
LAB_017ef890:
          local_e0 = (void*)CONCAT44(local_e0._4_4_,(int)local_e0 + (int)local_f0);
          param_4 = (char *)(uint64_t)(uVar37 * (int)local_f0);
          local_f4 = local_f4 + uVar37 * (int)local_f0;
        }
        if ((*(int64_t *)local_128 != 0) || (*local_res8 != 0)) {
          pqVar56 = *(qword **)(local_a8[2] + lVar39 * 8);
          pvVar40 = _pthread_getspecific((void*)ppqVar49);
          if ((pvVar40 != (void *)0x0) && (lVar41 = FUN_00e8b990(), lVar41 != 0)) {
            pqVar56 = (qword *)pqVar56[(uint64_t)(*(uint *)(lVar41 + 0x154) & 1) + 4];
          }
          fVar67 = (float)(**(code **)(*pqVar56 + 0x3e0))();
          fVar64 = 0.0;
          fVar66 = 0.0;
          if (fVar67 <= (float)local_e8) {
            if (fVar67 < local_58._0_4_) goto LAB_017ef95a;
LAB_017ef935:
            lVar41 = *local_res8;
          }
          else {
            fVar66 = (fVar67 - (float)local_e8) / local_38._0_4_;
            if (local_58._0_4_ <= fVar67) goto LAB_017ef935;
LAB_017ef95a:
            fVar64 = (local_58._0_4_ - fVar67) / local_38._0_4_;
            lVar41 = *local_res8;
          }
          if ((lVar41 != 0) && (g_0239424c < fVar66)) {
            if (-1 < (int)local_64) {
              uVar53 = pqVar48[2];
              uVar59 = *(uint64_t *)(lVar41 + 0x10);
              plVar55 = (int64_t *)((uint64_t)local_64 + 1);
              if ((local_64 < 7) ||
                 ((uVar59 < uVar53 + (int64_t)plVar55 * 4 &&
                  (uVar53 < uVar59 + (int64_t)plVar55 * 4)))) {
                param_4 = (char *)0x0;
              }
              else {
                param_4 = (char *)(uint64_t)((uint)plVar55 & 0xfffffff8);
                uVar45 = ((uint64_t)(param_4 + -8) >> 3) + 1;
                if ((int64_t *)(param_4 + -8) == (int64_t *)0x0) {
                  pqVar56 = (qword *)0x0;
LAB_017efac1:
                  pfVar1 = (float *)(uVar53 + (int64_t)pqVar56 * 4);
                  fVar67 = pfVar1[1];
                  fVar69 = pfVar1[2];
                  fVar8 = pfVar1[3];
                  pfVar3 = (float *)(uVar53 + 0x10 + (int64_t)pqVar56 * 4);
                  pfVar4 = (float *)(uVar59 + (int64_t)pqVar56 * 4);
                  fVar9 = pfVar4[1];
                  fVar10 = pfVar4[2];
                  fVar11 = pfVar4[3];
                  pfVar2 = (float *)(uVar59 + 0x10 + (int64_t)pqVar56 * 4);
                  auVar76._0_4_ = *pfVar2 + *pfVar3 * fVar66;
                  auVar76._4_4_ = pfVar2[1] + pfVar3[1] * fVar66;
                  auVar76._8_4_ = pfVar2[2] + pfVar3[2] * fVar66;
                  auVar76._12_4_ = pfVar2[3] + pfVar3[3] * fVar66;
                  pfVar3 = (float *)(uVar59 + (int64_t)pqVar56 * 4);
                  *pfVar3 = *pfVar4 + *pfVar1 * fVar66;
                  pfVar3[1] = fVar9 + fVar67 * fVar66;
                  pfVar3[2] = fVar10 + fVar69 * fVar66;
                  pfVar3[3] = fVar11 + fVar8 * fVar66;
                  *(uint8_t (*) [16])(uVar59 + 0x10 + (int64_t)pqVar56 * 4) = auVar76;
                }
                else {
                  lVar41 = -(uVar45 & 0xfffffffffffffffe);
                  pqVar56 = (qword *)0x0;
                  do {
                    pfVar1 = (float *)(uVar53 + (int64_t)pqVar56 * 4);
                    fVar67 = pfVar1[1];
                    fVar69 = pfVar1[2];
                    fVar8 = pfVar1[3];
                    pfVar4 = (float *)(uVar53 + 0x10 + (int64_t)pqVar56 * 4);
                    fVar9 = *pfVar4;
                    fVar10 = pfVar4[1];
                    fVar11 = pfVar4[2];
                    fVar12 = pfVar4[3];
                    pfVar4 = (float *)(uVar59 + (int64_t)pqVar56 * 4);
                    fVar13 = pfVar4[1];
                    fVar14 = pfVar4[2];
                    fVar15 = pfVar4[3];
                    pfVar3 = (float *)(uVar59 + 0x10 + (int64_t)pqVar56 * 4);
                    fVar16 = *pfVar3;
                    fVar17 = pfVar3[1];
                    fVar18 = pfVar3[2];
                    fVar19 = pfVar3[3];
                    auVar84 = *(uint8_t (*) [16])(uVar59 + 0x20 + (int64_t)pqVar56 * 4);
                    pfVar3 = (float *)(uVar59 + 0x30 + (int64_t)pqVar56 * 4);
                    fVar20 = *pfVar3;
                    fVar21 = pfVar3[1];
                    fVar22 = pfVar3[2];
                    fVar23 = pfVar3[3];
                    pfVar3 = (float *)(uVar59 + (int64_t)pqVar56 * 4);
                    *pfVar3 = *pfVar4 + *pfVar1 * fVar66;
                    pfVar3[1] = fVar13 + fVar67 * fVar66;
                    pfVar3[2] = fVar14 + fVar69 * fVar66;
                    pfVar3[3] = fVar15 + fVar8 * fVar66;
                    pfVar1 = (float *)(uVar59 + 0x10 + (int64_t)pqVar56 * 4);
                    *pfVar1 = fVar16 + fVar9 * fVar66;
                    pfVar1[1] = fVar17 + fVar10 * fVar66;
                    pfVar1[2] = fVar18 + fVar11 * fVar66;
                    pfVar1[3] = fVar19 + fVar12 * fVar66;
                    pfVar1 = (float *)(uVar53 + 0x20 + (int64_t)pqVar56 * 4);
                    pfVar4 = (float *)(uVar53 + 0x30 + (int64_t)pqVar56 * 4);
                    fVar67 = *pfVar4;
                    fVar69 = pfVar4[1];
                    fVar8 = pfVar4[2];
                    fVar9 = pfVar4[3];
                    auVar75._0_4_ = *pfVar1 * fVar66 + auVar84._0_4_;
                    auVar75._4_4_ = pfVar1[1] * fVar66 + auVar84._4_4_;
                    auVar75._8_4_ = pfVar1[2] * fVar66 + auVar84._8_4_;
                    auVar75._12_4_ = pfVar1[3] * fVar66 + auVar84._12_4_;
                    *(uint8_t (*) [16])(uVar59 + 0x20 + (int64_t)pqVar56 * 4) = auVar75;
                    pfVar1 = (float *)(uVar59 + 0x30 + (int64_t)pqVar56 * 4);
                    *pfVar1 = fVar67 * fVar66 + fVar20;
                    pfVar1[1] = fVar69 * fVar66 + fVar21;
                    pfVar1[2] = fVar8 * fVar66 + fVar22;
                    pfVar1[3] = fVar9 * fVar66 + fVar23;
                    pqVar56 = pqVar56 + 2;
                    lVar41 = lVar41 + 2;
                  } while (lVar41 != 0);
                  if ((uVar45 & 1) != 0) goto LAB_017efac1;
                }
                if ((int64_t *)param_4 == plVar55) goto LAB_017efb00;
              }
              pcVar60 = param_4;
              if (((uint64_t)plVar55 & 1) != 0) {
                *(float *)(uVar59 + (int64_t)param_4 * 4) =
                     *(float *)(uVar53 + (int64_t)param_4 * 4) * fVar66 +
                     *(float *)(uVar59 + (int64_t)param_4 * 4);
                pcVar60 = (char *)((uint64_t)param_4 | 1);
              }
              param_4 = (char *)(~(uint64_t)param_4 + (int64_t)plVar55);
              if (param_4 != (char *)0x0) {
                do {
                  *(float *)(uVar59 + (int64_t)pcVar60 * 4) =
                       *(float *)(uVar53 + (int64_t)pcVar60 * 4) * fVar66 +
                       *(float *)(uVar59 + (int64_t)pcVar60 * 4);
                  *(float *)(uVar59 + 4 + (int64_t)pcVar60 * 4) =
                       *(float *)(uVar53 + 4 + (int64_t)pcVar60 * 4) * fVar66 +
                       *(float *)(uVar59 + 4 + (int64_t)pcVar60 * 4);
                  pcVar60 = pcVar60 + 2;
                } while (plVar55 != (int64_t *)pcVar60);
              }
            }
LAB_017efb00:
            ppqVar49 = (qword **)((uint64_t)local_f0 & 0xffffffff);
            local_d0 = local_d0 + (int)local_f0;
            local_d4 = local_64 * (int)local_f0 + local_d4;
          }
          if ((*(int64_t *)local_128 != 0) && (g_0239424c < fVar64)) {
            if (-1 < (int)local_64) {
              uVar53 = pqVar48[2];
              uVar59 = *(uint64_t *)(*(int64_t *)local_128 + 0x10);
              plVar55 = (int64_t *)((uint64_t)local_64 + 1);
              if ((local_64 < 7) ||
                 ((uVar59 < uVar53 + (int64_t)plVar55 * 4 &&
                  (uVar53 < uVar59 + (int64_t)plVar55 * 4)))) {
                param_4 = (char *)0x0;
              }
              else {
                param_4 = (char *)(uint64_t)((uint)plVar55 & 0xfffffff8);
                uVar45 = ((uint64_t)(param_4 + -8) >> 3) + 1;
                if ((int64_t *)(param_4 + -8) == (int64_t *)0x0) {
                  pqVar56 = (qword *)0x0;
LAB_017efc71:
                  pfVar1 = (float *)(uVar53 + (int64_t)pqVar56 * 4);
                  fVar66 = pfVar1[1];
                  fVar67 = pfVar1[2];
                  fVar69 = pfVar1[3];
                  pfVar4 = (float *)(uVar53 + 0x10 + (int64_t)pqVar56 * 4);
                  fVar8 = *pfVar4;
                  fVar9 = pfVar4[1];
                  fVar10 = pfVar4[2];
                  fVar11 = pfVar4[3];
                  pfVar4 = (float *)(uVar59 + (int64_t)pqVar56 * 4);
                  fVar12 = pfVar4[1];
                  fVar13 = pfVar4[2];
                  fVar14 = pfVar4[3];
                  pfVar3 = (float *)(uVar59 + 0x10 + (int64_t)pqVar56 * 4);
                  fVar15 = *pfVar3;
                  fVar16 = pfVar3[1];
                  fVar17 = pfVar3[2];
                  fVar18 = pfVar3[3];
                  pfVar3 = (float *)(uVar59 + (int64_t)pqVar56 * 4);
                  *pfVar3 = *pfVar4 + *pfVar1 * fVar64;
                  pfVar3[1] = fVar12 + fVar66 * fVar64;
                  pfVar3[2] = fVar13 + fVar67 * fVar64;
                  pfVar3[3] = fVar14 + fVar69 * fVar64;
                  pfVar1 = (float *)(uVar59 + 0x10 + (int64_t)pqVar56 * 4);
                  *pfVar1 = fVar15 + fVar8 * fVar64;
                  pfVar1[1] = fVar16 + fVar9 * fVar64;
                  pfVar1[2] = fVar17 + fVar10 * fVar64;
                  pfVar1[3] = fVar18 + fVar11 * fVar64;
                }
                else {
                  lVar41 = -(uVar45 & 0xfffffffffffffffe);
                  pqVar56 = (qword *)0x0;
                  do {
                    pfVar1 = (float *)(uVar53 + (int64_t)pqVar56 * 4);
                    fVar66 = pfVar1[1];
                    fVar67 = pfVar1[2];
                    fVar69 = pfVar1[3];
                    pfVar4 = (float *)(uVar53 + 0x10 + (int64_t)pqVar56 * 4);
                    fVar8 = *pfVar4;
                    fVar9 = pfVar4[1];
                    fVar10 = pfVar4[2];
                    fVar11 = pfVar4[3];
                    pfVar4 = (float *)(uVar59 + (int64_t)pqVar56 * 4);
                    fVar12 = pfVar4[1];
                    fVar13 = pfVar4[2];
                    fVar14 = pfVar4[3];
                    pfVar3 = (float *)(uVar59 + 0x10 + (int64_t)pqVar56 * 4);
                    fVar15 = *pfVar3;
                    fVar16 = pfVar3[1];
                    fVar17 = pfVar3[2];
                    fVar18 = pfVar3[3];
                    auVar84 = *(uint8_t (*) [16])(uVar59 + 0x20 + (int64_t)pqVar56 * 4);
                    pfVar3 = (float *)(uVar59 + 0x30 + (int64_t)pqVar56 * 4);
                    fVar19 = *pfVar3;
                    fVar20 = pfVar3[1];
                    fVar21 = pfVar3[2];
                    fVar22 = pfVar3[3];
                    pfVar3 = (float *)(uVar59 + (int64_t)pqVar56 * 4);
                    *pfVar3 = *pfVar4 + *pfVar1 * fVar64;
                    pfVar3[1] = fVar12 + fVar66 * fVar64;
                    pfVar3[2] = fVar13 + fVar67 * fVar64;
                    pfVar3[3] = fVar14 + fVar69 * fVar64;
                    pfVar1 = (float *)(uVar59 + 0x10 + (int64_t)pqVar56 * 4);
                    *pfVar1 = fVar15 + fVar8 * fVar64;
                    pfVar1[1] = fVar16 + fVar9 * fVar64;
                    pfVar1[2] = fVar17 + fVar10 * fVar64;
                    pfVar1[3] = fVar18 + fVar11 * fVar64;
                    pfVar1 = (float *)(uVar53 + 0x20 + (int64_t)pqVar56 * 4);
                    fVar66 = pfVar1[1];
                    fVar67 = pfVar1[2];
                    fVar69 = pfVar1[3];
                    pfVar4 = (float *)(uVar53 + 0x30 + (int64_t)pqVar56 * 4);
                    auVar80._0_4_ = *pfVar4 * fVar64 + fVar19;
                    auVar80._4_4_ = pfVar4[1] * fVar64 + fVar20;
                    auVar80._8_4_ = pfVar4[2] * fVar64 + fVar21;
                    auVar80._12_4_ = pfVar4[3] * fVar64 + fVar22;
                    pfVar4 = (float *)(uVar59 + 0x20 + (int64_t)pqVar56 * 4);
                    *pfVar4 = *pfVar1 * fVar64 + auVar84._0_4_;
                    pfVar4[1] = fVar66 * fVar64 + auVar84._4_4_;
                    pfVar4[2] = fVar67 * fVar64 + auVar84._8_4_;
                    pfVar4[3] = fVar69 * fVar64 + auVar84._12_4_;
                    *(uint8_t (*) [16])(uVar59 + 0x30 + (int64_t)pqVar56 * 4) = auVar80;
                    pqVar56 = pqVar56 + 2;
                    lVar41 = lVar41 + 2;
                  } while (lVar41 != 0);
                  if ((uVar45 & 1) != 0) goto LAB_017efc71;
                }
                if ((int64_t *)param_4 == plVar55) goto LAB_017efcb0;
              }
              pcVar60 = param_4;
              if (((uint64_t)plVar55 & 1) != 0) {
                *(float *)(uVar59 + (int64_t)param_4 * 4) =
                     *(float *)(uVar53 + (int64_t)param_4 * 4) * fVar64 +
                     *(float *)(uVar59 + (int64_t)param_4 * 4);
                pcVar60 = (char *)((uint64_t)param_4 | 1);
              }
              param_4 = (char *)(~(uint64_t)param_4 + (int64_t)plVar55);
              if (param_4 != (char *)0x0) {
                do {
                  *(float *)(uVar59 + (int64_t)pcVar60 * 4) =
                       *(float *)(uVar53 + (int64_t)pcVar60 * 4) * fVar64 +
                       *(float *)(uVar59 + (int64_t)pcVar60 * 4);
                  *(float *)(uVar59 + 4 + (int64_t)pcVar60 * 4) =
                       *(float *)(uVar53 + 4 + (int64_t)pcVar60 * 4) * fVar64 +
                       *(float *)(uVar59 + 4 + (int64_t)pcVar60 * 4);
                  pcVar60 = pcVar60 + 2;
                } while (plVar55 != (int64_t *)pcVar60);
              }
            }
LAB_017efcb0:
            ppqVar49 = (qword **)((uint64_t)local_f0 & 0xffffffff);
            local_cc = local_cc + (int)local_f0;
            local_d8 = local_64 * (int)local_f0 + local_d8;
          }
        }
        *(void*)(local_b8[2] + lVar39 * 4) = local_114;
      }
      if (pqVar48 != (qword *)0x0) {
        FUN_00d50b20();
      }
      lVar39 = lVar39 + 1;
    } while (lVar39 < *(int *)((int64_t)local_a8 + 0xc));
  }
  FUN_00e83070();
  if (g_02394274 <= (float)local_c8) {
    if (param_8 != (void*)0x0) {
      local_90 = (qword *)0x0;
      local_88 = FUN_00e8b560;
      _qsort_r(&local_90,4,0x17fa4d0,param_4,(int *)arg1);
      iVar51 = FUN_00e7d850(SUB84((double)*(int *)((int64_t)local_a8 + 0xc) * g_02411178,0));
      *param_8 = *(void*)(local_b8[2] + (int64_t)iVar51 * 4);
    }
    if (((param_7 != (float *)0x0) && (*local_120 != 0)) && (0 < (int)local_e0)) {
      lVar39 = *(int64_t *)(*local_120 + 0x10);
      *param_7 = (*(float *)(lVar39 + 4) + 0.0 + *(float *)(lVar39 + 8) + *(float *)(lVar39 + 0xc) +
                  *(float *)(lVar39 + 0x10) + *(float *)(lVar39 + 0x14) + *(float *)(lVar39 + 0x18)
                  + *(float *)(lVar39 + 0x1c) + *(float *)(lVar39 + 0x20) +
                  *(float *)(lVar39 + 0x24) + *(float *)(lVar39 + 0x28) + *(float *)(lVar39 + 0x2c)
                  + *(float *)(lVar39 + 0x30) + *(float *)(lVar39 + 0x34) +
                  *(float *)(lVar39 + 0x38) + *(float *)(lVar39 + 0x3c) + *(float *)(lVar39 + 0x40)
                  + *(float *)(lVar39 + 0x44) + *(float *)(lVar39 + 0x48) +
                 *(float *)(lVar39 + 0x4c)) / (float)(int)local_e0;
    }
    local_58 = (qword *)CONCAT44(local_58._4_4_,(float)local_d4 / (float)local_d0);
    local_38 = (double)CONCAT44(local_38._4_4_,(float)local_d8 / (float)local_cc);
    fVar64 = (float)(int)local_e0;
    local_e8 = CONCAT44(local_e8._4_4_,(float)local_f4 / fVar64);
    iVar51 = 0;
    do {
      pVar46 = (void*)param_7;
      local_64 = 1;
      if (iVar51 == 2) {
        lVar39 = *local_res8;
        if (lVar39 == 0) break;
        cVar35 = (char)local_res8[1];
        if (cVar35 != '\0') {
          FUN_00d50b00();
        }
        if (0 < local_d0) {
          local_64 = FUN_00e7d780(local_58._0_4_);
        }
joined_r0x017f0068:
        if (0x1ff < (int)local_64) {
          local_64 = 0x1ff;
        }
LAB_017f0076:
        param_7 = *(float **)(lVar39 + 0x10);
        fVar64 = param_7[1];
        fVar66 = *param_7;
        if (fVar64 < *param_7) {
          *param_7 = fVar64;
          fVar66 = fVar64;
        }
        if ((int)local_64 < 1) {
          fVar64 = 0.0;
          fVar67 = 0.0;
        }
        else {
          uVar37 = local_64 + 1;
          fVar64 = fVar64 + g_0239424c;
          fVar67 = g_02390124;
          if (uVar37 != 2) {
            lVar41 = 2;
            if (uVar37 != 3) {
              lVar41 = 2;
              do {
                fVar64 = fVar64 + param_7[lVar41] + param_7[lVar41 + 1];
                fVar67 = g_02390124 / (float)((int)lVar41 + 1) +
                         g_02390124 / (float)(int)lVar41 + fVar67;
                pqVar56 = (qword *)((lVar41 - ((uint64_t)uVar37 - 2 & 0xfffffffffffffffe)) + 2);
                lVar41 = lVar41 + 2;
              } while (pqVar56 != (qword *)((int64_t)&MACH_HEADER.magic + 2));
            }
            if ((uVar37 & 1) != 0) {
              fVar64 = fVar64 + param_7[lVar41];
              fVar67 = fVar67 + g_02390124 / (float)(int)lVar41;
            }
          }
        }
        fVar69 = g_02390124;
        if (g_02394274 <= fVar64) {
          fVar69 = fVar67 / fVar64;
        }
        *param_7 = fVar66 * fVar69;
        lVar41 = 0;
        do {
          pfVar1 = param_7 + lVar41 + 1;
          fVar64 = pfVar1[1];
          fVar66 = pfVar1[2];
          fVar67 = pfVar1[3];
          pfVar4 = param_7 + lVar41 + 5;
          fVar8 = *pfVar4;
          fVar9 = pfVar4[1];
          fVar10 = pfVar4[2];
          fVar11 = pfVar4[3];
          pfVar4 = param_7 + lVar41 + 9;
          fVar12 = *pfVar4;
          fVar13 = pfVar4[1];
          fVar14 = pfVar4[2];
          fVar15 = pfVar4[3];
          pfVar4 = param_7 + lVar41 + 0xd;
          fVar16 = *pfVar4;
          fVar17 = pfVar4[1];
          fVar18 = pfVar4[2];
          fVar19 = pfVar4[3];
          pfVar4 = param_7 + lVar41 + 1;
          *pfVar4 = *pfVar1 * fVar69;
          pfVar4[1] = fVar64 * fVar69;
          pfVar4[2] = fVar66 * fVar69;
          pfVar4[3] = fVar67 * fVar69;
          pfVar1 = param_7 + lVar41 + 5;
          *pfVar1 = fVar8 * fVar69;
          pfVar1[1] = fVar9 * fVar69;
          pfVar1[2] = fVar10 * fVar69;
          pfVar1[3] = fVar11 * fVar69;
          auVar81._0_4_ = fVar12 * fVar69;
          auVar81._4_4_ = fVar13 * fVar69;
          auVar81._8_4_ = fVar14 * fVar69;
          auVar81._12_4_ = fVar15 * fVar69;
          *(uint8_t (*) [16])(param_7 + lVar41 + 9) = auVar81;
          pfVar1 = param_7 + lVar41 + 0xd;
          *pfVar1 = fVar16 * fVar69;
          pfVar1[1] = fVar17 * fVar69;
          pfVar1[2] = fVar18 * fVar69;
          pfVar1[3] = fVar19 * fVar69;
          pfVar1 = param_7 + lVar41 + 0x11;
          fVar64 = pfVar1[1];
          fVar66 = pfVar1[2];
          fVar67 = pfVar1[3];
          pfVar4 = param_7 + lVar41 + 0x15;
          fVar8 = *pfVar4;
          fVar9 = pfVar4[1];
          fVar10 = pfVar4[2];
          fVar11 = pfVar4[3];
          pfVar4 = param_7 + lVar41 + 0x11;
          *pfVar4 = *pfVar1 * fVar69;
          pfVar4[1] = fVar64 * fVar69;
          pfVar4[2] = fVar66 * fVar69;
          pfVar4[3] = fVar67 * fVar69;
          pfVar1 = param_7 + lVar41 + 0x15;
          *pfVar1 = fVar8 * fVar69;
          pfVar1[1] = fVar9 * fVar69;
          pfVar1[2] = fVar10 * fVar69;
          pfVar1[3] = fVar11 * fVar69;
          lVar41 = lVar41 + 0x18;
        } while (lVar41 != 0x1f8);
        param_7[0x1f9] = param_7[0x1f9] * fVar69;
        param_7[0x1fa] = param_7[0x1fa] * fVar69;
        param_7[0x1fb] = param_7[0x1fb] * fVar69;
        param_7[0x1fc] = param_7[0x1fc] * fVar69;
        param_7[0x1fd] = param_7[0x1fd] * fVar69;
        param_7[0x1fe] = param_7[0x1fe] * fVar69;
        param_7[0x1ff] = fVar69 * param_7[0x1ff];
        fVar64 = 0.0;
        lVar41 = 0;
        do {
          fVar66 = param_7[lVar41];
          if (param_7[lVar41] <= fVar64) {
            fVar66 = fVar64;
          }
          fVar64 = param_7[lVar41 + 1];
          if (param_7[lVar41 + 1] <= fVar66) {
            fVar64 = fVar66;
          }
          fVar66 = param_7[lVar41 + 2];
          if (param_7[lVar41 + 2] <= fVar64) {
            fVar66 = fVar64;
          }
          fVar64 = param_7[lVar41 + 3];
          if (param_7[lVar41 + 3] <= fVar66) {
            fVar64 = fVar66;
          }
          lVar41 = lVar41 + 4;
        } while (lVar41 != 0x200);
        if (g_02394274 <= fVar64) {
          fVar64 = g_02390124 / SQRT(fVar64);
          lVar41 = 0;
          do {
            pfVar1 = param_7 + lVar41;
            fVar66 = pfVar1[1];
            fVar67 = pfVar1[2];
            fVar69 = pfVar1[3];
            pfVar4 = param_7 + lVar41 + 4;
            fVar8 = *pfVar4;
            fVar9 = pfVar4[1];
            fVar10 = pfVar4[2];
            fVar11 = pfVar4[3];
            pfVar4 = param_7 + lVar41 + 8;
            fVar12 = *pfVar4;
            fVar13 = pfVar4[1];
            fVar14 = pfVar4[2];
            fVar15 = pfVar4[3];
            pfVar4 = param_7 + lVar41 + 0xc;
            fVar16 = *pfVar4;
            fVar17 = pfVar4[1];
            fVar18 = pfVar4[2];
            fVar19 = pfVar4[3];
            pfVar4 = param_7 + lVar41;
            *pfVar4 = *pfVar1 * fVar64;
            pfVar4[1] = fVar66 * fVar64;
            pfVar4[2] = fVar67 * fVar64;
            pfVar4[3] = fVar69 * fVar64;
            pfVar1 = param_7 + lVar41 + 4;
            *pfVar1 = fVar8 * fVar64;
            pfVar1[1] = fVar9 * fVar64;
            pfVar1[2] = fVar10 * fVar64;
            pfVar1[3] = fVar11 * fVar64;
            auVar77._0_4_ = fVar12 * fVar64;
            auVar77._4_4_ = fVar13 * fVar64;
            auVar77._8_4_ = fVar14 * fVar64;
            auVar77._12_4_ = fVar15 * fVar64;
            auVar82._0_4_ = fVar16 * fVar64;
            auVar82._4_4_ = fVar17 * fVar64;
            auVar82._8_4_ = fVar18 * fVar64;
            auVar82._12_4_ = fVar19 * fVar64;
            *(uint8_t (*) [16])(param_7 + lVar41 + 8) = auVar77;
            *(uint8_t (*) [16])(param_7 + lVar41 + 0xc) = auVar82;
            lVar41 = lVar41 + 0x10;
          } while (lVar41 != 0x200);
        }
        iVar33 = _UNK_023de2bc;
        iVar32 = _UNK_023de2b8;
        iVar31 = _UNK_023de2b4;
        iVar30 = g_023de2b0;
        iVar29 = _UNK_0239418c;
        iVar28 = _UNK_02394188;
        iVar27 = _UNK_02394184;
        iVar36 = g_02394180;
        iVar52 = 5;
        if ((int)local_64 < 0x14) {
          uVar37 = local_64 + 3;
          if (-1 < (int)local_64) {
            uVar37 = local_64;
          }
          iVar52 = (int)uVar37 >> 2;
        }
        if (iVar52 < 1) {
          fVar64 = 0.0;
        }
        else {
          lVar41 = (int64_t)(int)(local_64 - iVar52);
          fVar64 = 0.0;
          do {
            fVar64 = fVar64 + (float)(int)lVar41 * param_7[lVar41];
            lVar41 = lVar41 + 1;
          } while (lVar41 < (int)local_64);
          fVar64 = fVar64 / (float)iVar52;
        }
        lVar41 = (int64_t)(int)local_64;
        do {
          if (fVar64 / (float)(int)lVar41 <= param_7[lVar41]) {
            if ((int)lVar41 < 0x200) goto LAB_017f03ec;
            goto LAB_017f04de;
          }
          lVar41 = lVar41 + -1;
        } while ((int)lVar41 != 1);
        lVar41 = 1;
LAB_017f03ec:
        iVar52 = (int)lVar41;
        lVar41 = (int64_t)iVar52;
        if (0x1ffU - iVar52 < 3) {
LAB_017f04c0:
          do {
            param_7[lVar41] = fVar64 / (float)(int)lVar41;
            lVar41 = lVar41 + 1;
          } while ((int)lVar41 != 0x200);
        }
        else {
          uVar53 = (uint64_t)(0x1ffU - iVar52) + 1;
          uVar59 = uVar53 & 0xfffffffffffffffc;
          iVar70 = iVar52 + g_0238fcc0;
          iVar71 = iVar52 + _UNK_0238fcc4;
          iVar72 = iVar52 + _UNK_0238fcc8;
          iVar73 = iVar52 + _UNK_0238fccc;
          auVar68._0_8_ = CONCAT44(fVar64,fVar64);
          auVar68._8_4_ = fVar64;
          auVar68._12_4_ = fVar64;
          uVar45 = (uVar59 - 4 >> 2) + 1;
          if (uVar59 - 4 == 0) {
            lVar61 = 0;
LAB_017f04a7:
            auVar7._4_4_ = (float)iVar71;
            auVar7._0_4_ = (float)iVar70;
            auVar7._8_4_ = (float)iVar72;
            auVar7._12_4_ = (float)iVar73;
            auVar84 = divps(auVar68,auVar7);
            *(uint8_t (*) [16])(param_7 + lVar61 + lVar41) = auVar84;
          }
          else {
            lVar54 = -(uVar45 & 0xfffffffffffffffe);
            lVar61 = 0;
            do {
              auVar78._0_4_ = (float)iVar70;
              auVar78._4_4_ = (float)iVar71;
              auVar78._8_4_ = (float)iVar72;
              auVar78._12_4_ = (float)iVar73;
              auVar83._8_4_ = fVar64;
              auVar83._0_8_ = auVar68._0_8_;
              auVar83._12_4_ = fVar64;
              auVar84 = divps(auVar83,auVar78);
              *(uint8_t (*) [16])(param_7 + iVar52 + lVar61) = auVar84;
              auVar79._0_4_ = (float)(iVar70 + iVar36);
              auVar79._4_4_ = (float)(iVar71 + iVar27);
              auVar79._8_4_ = (float)(iVar72 + iVar28);
              auVar79._12_4_ = (float)(iVar73 + iVar29);
              auVar85._8_4_ = fVar64;
              auVar85._0_8_ = auVar68._0_8_;
              auVar85._12_4_ = fVar64;
              auVar84 = divps(auVar85,auVar79);
              *(uint8_t (*) [16])(param_7 + (int64_t)iVar52 + lVar61 + 4) = auVar84;
              lVar61 = lVar61 + 8;
              iVar70 = iVar70 + iVar30;
              iVar71 = iVar71 + iVar31;
              iVar72 = iVar72 + iVar32;
              iVar73 = iVar73 + iVar33;
              lVar54 = lVar54 + 2;
            } while (lVar54 != 0);
            pqVar56 = (qword *)0x0;
            if ((uVar45 & 1) != 0) goto LAB_017f04a7;
          }
          if (uVar53 != uVar59) {
            lVar41 = lVar41 + uVar59;
            goto LAB_017f04c0;
          }
        }
LAB_017f04de:
        lVar41 = 0;
        do {
          pfVar1 = param_7 + lVar41;
          fVar64 = pfVar1[1];
          fVar66 = pfVar1[2];
          fVar67 = pfVar1[3];
          pfVar4 = param_7 + lVar41 + 4;
          fVar69 = *pfVar4;
          fVar8 = pfVar4[1];
          fVar9 = pfVar4[2];
          fVar10 = pfVar4[3];
          if (*pfVar1 < g_0240d16c) {
            param_7[lVar41] = 1e-07;
          }
          if (fVar64 < _UNK_02416634) {
            param_7[lVar41 + 1] = 1e-07;
          }
          if (fVar66 < _UNK_02416638) {
            param_7[lVar41 + 2] = 1e-07;
          }
          if (fVar67 < _UNK_0241663c) {
            param_7[lVar41 + 3] = 1e-07;
          }
          if (fVar69 < g_0240d16c) {
            param_7[lVar41 + 4] = 1e-07;
          }
          if (fVar8 < _UNK_02416634) {
            param_7[lVar41 + 5] = 1e-07;
          }
          if (fVar9 < _UNK_02416638) {
            param_7[lVar41 + 6] = 1e-07;
          }
          fVar64 = (float)-(uint)(fVar69 < g_02416630);
          if (fVar10 < _UNK_0241663c) {
            param_7[lVar41 + 7] = 1e-07;
          }
          lVar41 = lVar41 + 8;
        } while (lVar41 != 0x200);
        if ((cVar35 != '\0') && (lVar39 != 0)) {
          fVar64 = (float)FUN_00d50b20();
        }
      }
      else if (iVar51 == 1) {
        lVar39 = *(int64_t *)local_128;
        if (lVar39 != 0) {
          cVar35 = local_128[8];
          if (cVar35 != '\0') {
            FUN_00d50b00();
          }
          if (0 < local_cc) {
            local_64 = FUN_00e7d780(local_38._0_4_);
          }
          goto joined_r0x017f0068;
        }
      }
      else {
        if (iVar51 != 0) {
          cVar35 = '\0';
          lVar39 = 0;
          goto LAB_017f0076;
        }
        lVar39 = *local_120;
        if (lVar39 != 0) {
          cVar35 = (char)local_120[1];
          if (cVar35 != '\0') {
            FUN_00d50b00();
          }
          if (0 < (int)local_e0) {
            local_64 = FUN_00e7d780((float)local_e8);
          }
          goto joined_r0x017f0068;
        }
      }
      pVar46 = (void*)param_7;
      iVar51 = iVar51 + 1;
    } while (iVar51 != 3);
    if (*local_100 != 0) {
      plVar55 = *(int64_t **)local_a8[2];
      pvVar40 = _pthread_getspecific(pVar46);
      if ((pvVar40 != (void *)0x0) && (lVar39 = FUN_00e8b990(), lVar39 != 0)) {
        plVar55 = (int64_t *)plVar55[(uint64_t)(*(uint *)(lVar39 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar55 + 0x378))();
      pqVar48 = local_90;
      if (((char)local_88 == '\0') && (local_90 != (qword *)0x0)) {
        FUN_00d50b00();
        if (((char)local_88 != '\0') && (local_90 != (qword *)0x0)) {
          FUN_00d50b20();
        }
      }
      pvVar40 = _pthread_getspecific(pVar46);
      if (pvVar40 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01320d00();
      pqVar56 = local_90;
      pvVar40 = _pthread_getspecific(pVar46);
      pqVar50 = local_90;
      if ((pvVar40 != (void *)0x0) && (lVar39 = FUN_00e8b990(), pqVar56 = pqVar50, lVar39 != 0)) {
        pqVar56 = (qword *)pqVar50[(uint64_t)(*(uint *)(lVar39 + 0x154) & 1) + 4];
      }
      local_58 = (qword *)(**(code **)(*pqVar56 + 0x370))();
      if (((char)local_88 != '\0') && (local_90 != (qword *)0x0)) {
        FUN_00d50b20();
      }
      local_38 = (double)FUN_015c70e0((int)local_58);
      uVar53 = (uint64_t)((uint)local_4c >> 1);
      **(void**)(*local_100 + 0x10) = 0;
      puVar38 = (void*)FUN_00e8fc40(uVar53,0x800 % uVar53);
      FUN_00d4ff40();
      *puVar38 = &g_025f0d98;
      puVar38[2] = 0;
      puVar38[3] = 0;
      puVar38[4] = 0;
      puVar38[5] = 0;
      puVar38[6] = 0;
      puVar38[7] = 0;
      (*g_025f0db0)();
      fVar64 = (float)(int)(0x800 / uVar53);
      fVar66 = fVar64 + fVar64 + g_02390d34 + g_02391090;
      fVar64 = g_023d5000;
      if (fVar66 <= g_023d5000) {
        fVar64 = fVar66;
      }
      FUN_015c15b0(fVar64,0x800);
      fVar64 = ((float)(double)local_58 / (float)local_38) * g_02411e00 * g_0239011c;
      local_58 = (qword *)CONCAT44(local_58._4_4_,fVar64);
      uVar53 = 0;
      uVar62 = FUN_00e7d780(local_60._0_4_ / fVar64);
      uVar37 = 5;
      if (5 < (int)uVar62) {
        uVar37 = uVar62;
      }
      pqVar50 = &segment_command_000003d8.fileoff;
      if ((int)uVar37 < 0x400) {
        pqVar50 = (qword *)(uint64_t)uVar37;
      }
      pVar46 = (void*)pqVar50;
      uVar37 = pVar46 - (int)((uint64_t)pqVar50 >> 1);
      if (-1 < (int)uVar37) {
        uVar53 = (uint64_t)uVar37;
      }
      uVar37 = uVar37 + pVar46;
      pqVar56 = (qword *)(uint64_t)uVar37;
      lVar39 = *(int64_t *)(*local_100 + 0x10);
      if ((int)uVar53 < (int)uVar37) {
        uVar62 = uVar37 - (int)uVar53;
        uVar59 = ~uVar53 + (int64_t)(int)uVar37;
        pqVar56 = (qword *)((uint64_t)uVar62 & 3);
        if ((uVar62 & 3) == 0) {
          fVar64 = 0.0;
          if (2 < uVar59) goto LAB_017f0960;
        }
        else {
          lVar41 = -(int64_t)pqVar56;
          fVar64 = 0.0;
          do {
            fVar66 = *(float *)(lVar39 + uVar53 * 4);
            if (fVar64 < fVar66) {
              pqVar50 = (qword *)(uVar53 & 0xffffffff);
              fVar64 = fVar66;
            }
            pVar46 = (void*)pqVar50;
            uVar53 = uVar53 + 1;
            lVar41 = lVar41 + 1;
          } while (lVar41 != 0);
          if (uVar59 < 3) {
            pqVar56 = (qword *)0x0;
          }
          else {
LAB_017f0960:
            do {
              fVar66 = *(float *)(lVar39 + uVar53 * 4);
              uVar62 = (uint)uVar53;
              uVar47 = (uint)pqVar50;
              if (fVar64 < fVar66) {
                uVar47 = uVar62;
              }
              fVar67 = *(float *)(lVar39 + 4 + uVar53 * 4);
              if (fVar66 <= fVar64) {
                fVar66 = fVar64;
              }
              uVar24 = uVar62 + 1;
              if (fVar67 <= fVar66) {
                fVar67 = fVar66;
                uVar24 = uVar47;
              }
              fVar66 = *(float *)(lVar39 + 8 + uVar53 * 4);
              uVar47 = uVar62 + 2;
              if (fVar66 <= fVar67) {
                uVar47 = uVar24;
              }
              pqVar56 = (qword *)(uint64_t)uVar47;
              if (fVar66 <= fVar67) {
                fVar66 = fVar67;
              }
              fVar64 = *(float *)(lVar39 + 0xc + uVar53 * 4);
              pqVar50 = (qword *)(uint64_t)(uVar62 + 3);
              if (fVar64 <= fVar66) {
                fVar64 = fVar66;
                pqVar50 = pqVar56;
              }
              pVar46 = (void*)pqVar50;
              uVar53 = uVar53 + 4;
            } while ((int64_t)uVar53 < (int64_t)(int)uVar37);
          }
        }
      }
      fVar64 = *(float *)(lVar39 + (int64_t)(int)pVar46 * 4);
      if (g_02394274 <= fVar64) {
        fVar64 = g_02390124 / fVar64;
        lVar41 = 0;
        do {
          pfVar1 = (float *)(lVar39 + lVar41 * 4);
          fVar66 = pfVar1[1];
          fVar67 = pfVar1[2];
          fVar69 = pfVar1[3];
          pfVar4 = (float *)(lVar39 + 0x10 + lVar41 * 4);
          fVar8 = *pfVar4;
          fVar9 = pfVar4[1];
          fVar10 = pfVar4[2];
          fVar11 = pfVar4[3];
          pfVar4 = (float *)(lVar39 + 0x20 + lVar41 * 4);
          fVar12 = *pfVar4;
          fVar13 = pfVar4[1];
          fVar14 = pfVar4[2];
          fVar15 = pfVar4[3];
          pfVar4 = (float *)(lVar39 + 0x30 + lVar41 * 4);
          fVar16 = *pfVar4;
          fVar17 = pfVar4[1];
          fVar18 = pfVar4[2];
          fVar19 = pfVar4[3];
          pfVar4 = (float *)(lVar39 + lVar41 * 4);
          *pfVar4 = *pfVar1 * fVar64;
          pfVar4[1] = fVar66 * fVar64;
          pfVar4[2] = fVar67 * fVar64;
          pfVar4[3] = fVar69 * fVar64;
          pfVar1 = (float *)(lVar39 + 0x10 + lVar41 * 4);
          *pfVar1 = fVar8 * fVar64;
          pfVar1[1] = fVar9 * fVar64;
          pfVar1[2] = fVar10 * fVar64;
          pfVar1[3] = fVar11 * fVar64;
          pfVar1 = (float *)(lVar39 + 0x20 + lVar41 * 4);
          *pfVar1 = fVar12 * fVar64;
          pfVar1[1] = fVar13 * fVar64;
          pfVar1[2] = fVar14 * fVar64;
          pfVar1[3] = fVar15 * fVar64;
          pfVar1 = (float *)(lVar39 + 0x30 + lVar41 * 4);
          *pfVar1 = fVar16 * fVar64;
          pfVar1[1] = fVar17 * fVar64;
          pfVar1[2] = fVar18 * fVar64;
          pfVar1[3] = fVar19 * fVar64;
          lVar41 = lVar41 + 0x10;
        } while (lVar41 != 0x800);
      }
      lVar41 = 0;
      do {
        pfVar1 = (float *)(lVar39 + lVar41 * 4);
        fVar64 = pfVar1[1];
        fVar66 = pfVar1[2];
        fVar67 = pfVar1[3];
        if (*pfVar1 < g_0240d16c) {
          *(void*)(lVar39 + lVar41 * 4) = 0x33d6bf95;
        }
        if (fVar64 < _UNK_02416634) {
          *(void*)(lVar39 + 4 + lVar41 * 4) = 0x33d6bf95;
        }
        if (_UNK_02416638 <= fVar66) {
          if (fVar67 < _UNK_0241663c) goto LAB_017f0b48;
LAB_017f0ab3:
          pfVar1 = (float *)(lVar39 + 0x10 + lVar41 * 4);
          fVar64 = pfVar1[1];
          fVar66 = pfVar1[2];
          fVar67 = pfVar1[3];
          if (*pfVar1 < g_0240d16c) {
LAB_017f0ac5:
            *(void*)(lVar39 + 0x10 + lVar41 * 4) = 0x33d6bf95;
          }
        }
        else {
          *(void*)(lVar39 + 8 + lVar41 * 4) = 0x33d6bf95;
          if (_UNK_0241663c <= fVar67) goto LAB_017f0ab3;
LAB_017f0b48:
          *(void*)(lVar39 + 0xc + lVar41 * 4) = 0x33d6bf95;
          pfVar1 = (float *)(lVar39 + 0x10 + lVar41 * 4);
          fVar64 = pfVar1[1];
          fVar66 = pfVar1[2];
          fVar67 = pfVar1[3];
          if (*pfVar1 < g_0240d16c) goto LAB_017f0ac5;
        }
        if (fVar64 < _UNK_02416634) {
          *(void*)(lVar39 + 0x14 + lVar41 * 4) = 0x33d6bf95;
        }
        if (fVar66 < _UNK_02416638) {
          *(void*)(lVar39 + 0x18 + lVar41 * 4) = 0x33d6bf95;
        }
        if (fVar67 < _UNK_0241663c) {
          *(void*)(lVar39 + 0x1c + lVar41 * 4) = 0x33d6bf95;
        }
        lVar41 = lVar41 + 8;
      } while (lVar41 != 0x800);
      *local_res18 = pVar46;
      *local_res20 = local_58._0_4_;
      fVar64 = local_58._0_4_;
      if (puVar38 != (void*)0x0) {
        fVar64 = (float)FUN_00d50b20();
      }
      if (pqVar48 != (qword *)0x0) {
        fVar64 = (float)FUN_00d50b20();
      }
    }
    if ((*local_res10 != 0) && (local_98 != (qword *)0x0)) {
      pvVar40 = _pthread_getspecific(pVar46);
      if (pvVar40 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_140 = *local_res10;
      local_138 = '\0';
      uVar37 = FUN_014cdc80();
      pqVar56 = (qword *)(uint64_t)uVar37;
      fVar64 = extraout_XMM0_Da;
      if ((local_138 != '\0') && (local_140 != 0)) {
        fVar64 = (float)FUN_00d50b20();
      }
      *param_9 = (char)uVar37;
    }
    if ((local_c0 != (void*)0x0) && (*arg1 != 0)) {
      local_88 = ((uint64_t)local_88 & 0xffffffffffffff00);
      local_90 = (qword *)0x0;
      local_78 = 0xffffffff;
      local_70 = 0;
      pqVar56 = (qword *)0x0;
      local_80 = *arg1;
      while( true ) {
        iVar51 = (int)pqVar56;
        if (iVar51 != 0) {
          if (iVar51 < 1) {
            pqVar56 = (qword *)(uint64_t)(uint)-iVar51;
          }
          else {
            local_78 = CONCAT44(local_78._4_4_,(int)local_78 - iVar51);
            FUN_00d23690(fVar64,pqVar56);
            local_70 = local_70 + iVar51;
            pqVar56 = (qword *)0x0;
          }
          local_78 = CONCAT44((int)pqVar56,(int)local_78);
        }
        lVar39 = (int64_t)(int)local_78;
        iVar51 = (int)local_78 + 1;
        local_78 = CONCAT44(local_78._4_4_,iVar51);
        if (*(int *)(local_80 + 0xc) <= iVar51) break;
        lVar41 = *(int64_t *)(local_80 + 0x10);
        local_90 = *(qword **)(lVar41 + 8 + lVar39 * 8);
        local_110 = (qword *)0x0;
        pvVar40 = _pthread_getspecific((void*)lVar41);
        pVar46 = (void*)lVar41;
        if (pvVar40 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar64 = (float)FUN_0125a560();
        if (local_40 == '\0') {
          if (local_48 != (qword *)0x0) {
            FUN_00d50b00();
            if ((local_40 != '\0') && (local_48 != (qword *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_017f0da0;
          }
        }
        else if (local_48 != (qword *)0x0) {
LAB_017f0da0:
          pvVar40 = _pthread_getspecific(pVar46);
          if (pvVar40 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_011ef460();
          if (local_48 == (qword *)0x0) {
            bVar26 = true;
            pqVar56 = (qword *)0x0;
            bVar25 = true;
          }
          else {
            if (((local_40 == '\0') && (FUN_00d50b00(), local_40 != '\0')) &&
               (local_48 != (qword *)0x0)) {
              FUN_00d50b20();
            }
            pvVar40 = _pthread_getspecific(pVar46);
            if (pvVar40 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dd6a0();
            pqVar56 = local_48;
            if (local_48 == (qword *)0x0) {
              bVar25 = true;
              pqVar56 = (qword *)0x0;
              bVar26 = false;
            }
            else {
              if (local_40 == '\0') {
                FUN_00d50b00();
                local_110 = pqVar56;
                if ((local_40 != '\0') && (local_48 != (qword *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_110 = local_48;
              }
              pvVar40 = _pthread_getspecific(pVar46);
              if (pvVar40 != (void *)0x0) {
                FUN_00e8b990();
              }
              cVar35 = FUN_014bc070();
              if (cVar35 == '\0') {
                if ((g_027c0170 == '\0') && (iVar51 = ___cxa_guard_acquire(), iVar51 != 0)) {
                  g_02790158 = FUN_007ef2d0();
                  g_02790140 = "MUAudioSourcePrincipalItem";
                  g_02790148 = 0x138;
                  g_02790150 = FUN_010fe5c0;
                  g_02790160 = 0;
                  ram_0000000002790168 = 0;
                  g_02790170 = 0;
                  ram_0000000002790178 = 0;
                  g_02790180 = 0;
                  ram_0000000002790188 = 0;
                  g_02790190 = 0;
                  ram_0000000002790198 = 0;
                  g_027901a0 = 0;
                  ram_00000000027901a8 = 0;
                  g_027901b0 = 0;
                  ram_00000000027901b8 = 0;
                  g_027901c0 = 0;
                  ram_00000000027901c8 = 0;
                  g_027901d0 = 0;
                  ram_00000000027901d8 = 0;
                  g_027901e0 = 0;
                  ram_00000000027901e8 = 0;
                  g_027901f0 = 0;
                  ram_00000000027901f8 = 0;
                  g_02790200 = 0;
                  ___cxa_guard_release();
                }
                (**(code **)(*pqVar56 + 0x360))();
                cVar35 = FUN_00e85ea0();
                pqVar56 = local_110;
                pqVar48 = local_110;
                if (cVar35 == '\0') {
                  pqVar48 = g_02802688;
                }
                if (pqVar48 != (qword *)0x0) {
                  local_48 = local_110;
                  local_40 = '\0';
                  cVar35 = FUN_00d23d70();
                  if ((local_40 != '\0') && (local_48 != (qword *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (cVar35 != '\0') {
                    local_48 = local_90;
                    local_40 = '\0';
                    FUN_00d21140();
                    if ((local_40 != '\0') && (local_48 != (qword *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                }
              }
              bVar26 = false;
              bVar25 = false;
            }
          }
          fVar64 = (float)FUN_00d50b20();
          if (!bVar25 && pqVar56 != (qword *)0x0) {
            fVar64 = (float)FUN_00d50b20();
          }
          if (!bVar26) {
            fVar64 = (float)FUN_00d50b20();
          }
        }
        pqVar56 = (qword *)(local_78 >> 0x20);
      }
      FUN_001159b0();
    }
  }
  uVar53 = CONCAT71((int7)((uint64_t)pqVar56 >> 8),g_02394274 <= (float)local_c8);
  if (local_b8 != (qword *)0x0) {
    FUN_00d50b20();
  }
  if (local_a0 != (qword *)0x0) {
    FUN_00d50b20();
  }
  if (local_130 != (qword *)0x0) {
    FUN_00d50b20();
  }
  if ((param_2 != (void*)0x0) && (local_c0 != (void*)0x0)) {
    FUN_00d50b20();
  }
LAB_017f1113:
  if (((char)local_b0 != '\0') && (local_98 != (qword *)0x0)) {
    FUN_00d50b20();
  }
  if (local_a8 != (void*)0x0) {
    FUN_00d50b20();
  }
  return uVar53 & 0xffffffff;
}

