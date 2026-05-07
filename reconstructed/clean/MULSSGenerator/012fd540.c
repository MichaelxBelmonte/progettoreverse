// Function: FUN_012fd540
// Address: 012fd540
// Size: 7728 bytes
// Class: MULSSGenerator

uint64_t FUN_012fd540(void* param_1,uint param_2,uint32_t param_3,uint32_t param_4)

{
  uint uVar1;
  void*****pppppuVar2;
  char cVar3;
  void *pvVar4;
  void*puVar5;
  void******ppppppuVar6;
  void*****pppppuVar7;
  int64_t lVar8;
  uint64_t uVar9;
  void* pVar10;
  void******ppppppuVar11;
  void******ppppppuVar12;
  void*****pppppuVar13;
  void******ppppppuVar14;
  uint64_t uVar15;
  int iVar16;
  int64_t *arg1;
  int64_t *this_ptr;
  dword *pdVar17;
  dword *pdVar18;
  void******ppppppuVar19;
  bool bVar20;
  uint64_t uVar21;
  bool bVar22;
  double dVar23;
  uint64_t uVar24;
  char local_res8;
  double local_290;
  void*local_258;
  char local_250;
  void*****local_248;
  char local_240;
  void*****local_238;
  char local_230;
  void*****local_228;
  char local_220;
  void*****local_218;
  char local_210;
  void*****local_208;
  char local_200;
  int64_t local_1f8;
  char local_1f0;
  void*****local_1e8;
  char local_1e0;
  void*****local_1d8;
  char local_1d0;
  void*****local_1c8;
  char local_1c0;
  int64_t local_1b8;
  char local_1b0;
  void*****local_1a8;
  char local_1a0;
  void*****local_198;
  char local_190;
  void*****local_188;
  char local_180;
  void*****local_178;
  char local_170;
  void*****local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  void*****local_148;
  char local_140;
  void*****local_138;
  char local_130;
  void*****local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  void*****local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  uint64_t local_e8;
  uint64_t local_e0;
  void****local_d8;
  char local_d0;
  void*****local_c8;
  void*****local_c0;
  uint32_t local_b4;
  uint32_t local_b0;
  uint local_ac;
  uint32_t local_a8;
  uint32_t uStack_a4;
  char local_a0;
  void*local_98;
  void*****local_90;
  void*****local_88;
  void****local_80;
  void*****local_78;
  uint64_t local_70;
  int local_68;
  void*****local_48;
  char local_40 [8];
  void*****local_38;
  
  if (((*this_ptr != 0) && (*(int *)(*this_ptr + 0xc) != 0)) && (*arg1 != 0)) {
    pVar10 = param_1;
    local_b4 = param_3;
    local_b0 = param_4;
    local_ac = param_2;
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cade0();
    if ((void******)local_88 == (void******)0x0) {
      bVar22 = true;
    }
    else {
      pvVar4 = _pthread_getspecific(pVar10);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cade0();
      pvVar4 = _pthread_getspecific(pVar10);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015058d0();
      bVar22 = local_48 == (void*****)0x0;
      if ((local_40[0] != '\0') && (local_48 != (void*****)0x0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (CONCAT44(uStack_a4,local_a8) != 0)) {
        FUN_00d50b20();
      }
    }
    if (((char)local_80 != '\0') && ((void******)local_88 != (void******)0x0)) {
      FUN_00d50b20();
    }
    if (!bVar22) {
      FUN_00d23310();
      pppppuVar13 = local_88;
      ppppppuVar6 = (void******)&local_80;
      local_48 = (void*****)CONCAT71(local_48._1_7_,(char)local_80);
      ppppppuVar11 = &local_48;
      if ((char)local_80 != '\0') {
        ppppppuVar11 = ppppppuVar6;
      }
      *(void*)ppppppuVar11 = 0;
      if (((char)local_80 != '\0') && ((void******)local_88 != (void******)0x0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific((void*)ppppppuVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar3 = FUN_0129a3a0();
      if (((char)local_48 != '\0') && ((void******)pppppuVar13 != (void******)0x0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        if ((char)local_ac == '\0') {
          ppppppuVar6 = (void******)0x0;
          uVar21 = 0;
          local_98 = (void*)0x0;
        }
        else {
          if (local_res8 == '\0') {
            local_98 = (void*)0x0;
            puVar5 = (void*)FUN_00e8fc40();
            local_98 = (void*)0x0;
            FUN_00d4ff40();
            *puVar5 = &g_025683c0;
            local_98 = (void*)0x0;
            (*g_025683d8)();
            local_98 = (void*)0x0;
            FUN_00c92170();
            local_98 = (void*)0x0;
            FUN_00c92160();
            local_98 = puVar5;
          }
          else {
            local_98 = (void*)0x0;
          }
          uVar21 = (uint64_t)(local_res8 == '\0');
          ppppppuVar6 = (void******)FUN_00e8fc40();
          FUN_00d4ff40();
          *ppppppuVar6 = (void*****)&g_02572358;
          (*g_02572370)();
        }
        local_ac = local_ac ^ 1;
        local_258 = local_98;
        local_250 = '\0';
        local_240 = '\0';
        ppppppuVar11 = &local_248;
        local_248 = ppppppuVar6;
        local_90 = ppppppuVar6;
        FUN_01293ed0(ppppppuVar11,&local_258);
        local_c0 = local_88;
        if ((char)local_80 == '\0') {
          if ((((void******)local_88 != (void******)0x0) &&
              (FUN_00d50b00(), (char)local_80 != '\0')) &&
             ((void******)local_88 != (void******)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_80._0_1_ = '\0';
        }
        if ((local_240 != '\0') && ((void******)local_248 != (void******)0x0)) {
          FUN_00d50b20();
        }
        if ((local_250 != '\0') && (local_258 != (void*)0x0)) {
          FUN_00d50b20();
        }
        ppppppuVar14 = (void******)local_c0;
        if ((void******)local_c0 != (void******)0x0 && (char)local_ac == '\0') {
          local_e8 = CONCAT44(local_e8._4_4_,param_1);
          uVar1 = *(uint *)((int64_t)local_c0 + 0xc);
          ppppppuVar14 = (void******)(uint64_t)uVar1;
          local_e0 = uVar21;
          if (0 < (int)uVar1) {
            pdVar17 = &MACH_HEADER.magic;
            ppppppuVar6 = (void******)0x0;
            do {
              pdVar17 = (dword *)((int64_t)pdVar17 + 1);
              ppppppuVar11 = (void******)((int64_t)ppppppuVar6 + 1);
              if (ppppppuVar11 < ppppppuVar14) {
                ppppppuVar12 = ppppppuVar11;
                pdVar18 = pdVar17;
                if (local_98 == (void*)0x0) {
                  do {
                    pvVar4 = _pthread_getspecific((void*)ppppppuVar12);
                    if (pvVar4 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    local_38 = (void*****)FUN_0125a280();
                    pvVar4 = _pthread_getspecific((void*)ppppppuVar12);
                    if (pvVar4 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    dVar23 = (double)FUN_0125a280();
                    if ((double)local_38 < dVar23) {
                      uVar24 = FUN_00d23f20(dVar23,(uint64_t)pdVar18 & 0xffffffff);
                      FUN_00d23f20(uVar24,(uint64_t)pdVar18 & 0xffffffff);
                    }
                    pdVar18 = (dword *)((int64_t)pdVar18 + 1);
                  } while (ppppppuVar14 != (void******)pdVar18);
                }
                else {
                  do {
                    pvVar4 = _pthread_getspecific((void*)ppppppuVar12);
                    if (pvVar4 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    local_38 = (void*****)FUN_0125a280();
                    pvVar4 = _pthread_getspecific((void*)ppppppuVar12);
                    if (pvVar4 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    dVar23 = (double)FUN_0125a280();
                    if ((double)local_38 < dVar23) {
                      uVar24 = FUN_00d23f20(dVar23,(uint64_t)pdVar18 & 0xffffffff);
                      FUN_00d23f20(uVar24,(uint64_t)pdVar18 & 0xffffffff);
                      lVar8 = local_98[2];
                      uVar24 = *(void*)(lVar8 + (int64_t)ppppppuVar6 * 8);
                      *(void*)(lVar8 + (int64_t)ppppppuVar6 * 8) =
                           *(void*)(lVar8 + (int64_t)pdVar18 * 8);
                      *(void*)(lVar8 + (int64_t)pdVar18 * 8) = uVar24;
                    }
                    pdVar18 = (dword *)((int64_t)pdVar18 + 1);
                  } while (ppppppuVar14 != (void******)pdVar18);
                }
              }
              ppppppuVar6 = ppppppuVar11;
            } while (ppppppuVar11 != ppppppuVar14);
          }
          pvVar4 = _pthread_getspecific((void*)ppppppuVar11);
          uVar24 = local_e8;
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012cade0();
          ppppppuVar6 = (void******)local_48;
          pvVar4 = _pthread_getspecific((void*)ppppppuVar11);
          pppppuVar13 = local_48;
          if ((pvVar4 != (void *)0x0) &&
             (lVar8 = FUN_00e8b990(), ppppppuVar6 = (void******)pppppuVar13, lVar8 != 0)) {
            ppppppuVar6 = (void******)
                          pppppuVar13[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
          }
          FUN_015058d0();
          pppppuVar13 = local_88;
          if ((char)local_80 == '\0') {
            if ((((void******)local_88 != (void******)0x0) &&
                (FUN_00d50b00(), (char)local_80 != '\0')) &&
               ((void******)local_88 != (void******)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_80._0_1_ = '\0';
          }
          if ((local_40[0] != '\0') && ((void******)local_48 != (void******)0x0)) {
            FUN_00d50b20();
          }
          if ((char)uVar24 != '\0') {
            pvVar4 = _pthread_getspecific((void*)ppppppuVar11);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012caf10();
            pppppuVar2 = local_88;
            if ((((char)local_80 == '\0') && ((void******)local_88 != (void******)0x0)
                ) && ((FUN_00d50b00(), (char)local_80 != '\0' &&
                      ((void******)local_88 != (void******)0x0)))) {
              FUN_00d50b20();
            }
            FUN_00d23310();
            pppppuVar7 = local_88;
            ppppppuVar11 = (void******)&local_d8;
            ppppppuVar6 = (void******)&local_80;
            if ((char)local_80 == '\0') {
              ppppppuVar6 = ppppppuVar11;
            }
            local_d8._0_1_ = (char)local_80;
            *(void*)ppppppuVar6 = 0;
            if (((char)local_80 != '\0') &&
               ((void******)pppppuVar7 != (void******)0x0)) {
              FUN_00d50b20();
            }
            pvVar4 = _pthread_getspecific((void*)ppppppuVar11);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0132d610();
            local_f0 = 0;
            local_f8 = CONCAT44(uStack_a4,local_a8);
            if (local_a0 == '\0') {
              if (local_f8 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_a0 = '\0';
            }
            local_f0 = '\x01';
            FUN_016cbba0();
            local_38 = local_48;
            if (local_40[0] == '\0') {
              if ((((void******)local_48 != (void******)0x0) &&
                  (FUN_00d50b00(), local_40[0] != '\0')) &&
                 ((void******)local_48 != (void******)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_40[0] = '\0';
            }
            if ((local_f0 != '\0') && (local_f8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_a0 != '\0') && (CONCAT44(uStack_a4,local_a8) != 0)) {
              FUN_00d50b20();
            }
            if (((char)local_d8 != '\0') &&
               ((void******)pppppuVar7 != (void******)0x0)) {
              FUN_00d50b20();
            }
            if (local_98 != (void*)0x0) {
              pvVar4 = _pthread_getspecific((void*)ppppppuVar11);
              if ((pvVar4 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                ppppppuVar11 = (void******)local_38;
              }
              FUN_016ea7c0(*(void*)local_98[2]);
            }
            pvVar4 = _pthread_getspecific((void*)ppppppuVar11);
            if ((pvVar4 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              ppppppuVar11 = (void******)local_38;
            }
            FUN_016c1150();
            pvVar4 = _pthread_getspecific((void*)ppppppuVar11);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_238 = local_38;
            local_230 = '\0';
            FUN_012cae50();
            if ((local_230 != '\0') && ((void******)local_238 != (void******)0x0)) {
              FUN_00d50b20();
            }
            if ((void******)pppppuVar2 != (void******)0x0) {
              if ((char)local_b4 == '\0') {
                pvVar4 = _pthread_getspecific((void*)ppppppuVar11);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_228 = pppppuVar13;
                local_220 = '\0';
                local_218 = pppppuVar2;
                local_210 = '\0';
                local_208 = local_38;
                local_200 = '\0';
                uVar24 = FUN_00e7bdb0();
                uVar9 = FUN_00e7bdb0();
                local_1f0 = '\0';
                local_1f8 = 0;
                ppppppuVar11 = &local_208;
                FUN_01516650(0,&local_218,uVar24,uVar9);
                if ((local_1f0 != '\0') && (local_1f8 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_200 != '\0') && ((void******)local_208 != (void******)0x0))
                {
                  FUN_00d50b20();
                }
                if ((local_210 != '\0') && ((void******)local_218 != (void******)0x0))
                {
                  FUN_00d50b20();
                }
                if ((local_220 != '\0') && ((void******)local_228 != (void******)0x0))
                {
                  FUN_00d50b20();
                }
              }
              if ((char)local_b0 == '\0') {
                pvVar4 = _pthread_getspecific((void*)ppppppuVar11);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_1e8 = pppppuVar13;
                local_1e0 = '\0';
                local_1d8 = pppppuVar2;
                local_1d0 = '\0';
                local_1c8 = local_38;
                local_1c0 = '\0';
                uVar24 = FUN_00e7bdb0();
                uVar9 = FUN_00e7bdb0();
                local_1b0 = '\0';
                local_1b8 = 0;
                ppppppuVar11 = &local_1c8;
                FUN_01516720(0,&local_1d8,uVar24,uVar9);
                if ((local_1b0 != '\0') && (local_1b8 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_1c0 != '\0') && ((void******)local_1c8 != (void******)0x0))
                {
                  FUN_00d50b20();
                }
                if ((local_1d0 != '\0') && ((void******)local_1d8 != (void******)0x0))
                {
                  FUN_00d50b20();
                }
                if ((local_1e0 != '\0') && ((void******)local_1e8 != (void******)0x0))
                {
                  FUN_00d50b20();
                }
              }
            }
            pvVar4 = _pthread_getspecific((void*)ppppppuVar11);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012cb110();
            pvVar4 = _pthread_getspecific((void*)ppppppuVar11);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e7210();
            ppppppuVar6 = (void******)local_88;
            if (((char)local_80 == '\0') && ((void******)local_88 != (void******)0x0))
            {
              FUN_00d50b00();
            }
            if ((local_40[0] != '\0') && ((void******)local_48 != (void******)0x0)) {
              FUN_00d50b20();
            }
            local_1a8 = ppppppuVar6;
            local_1a0 = '\0';
            FUN_00e7bdb0();
            FUN_01287c80();
            if ((local_1a0 != '\0') && ((void******)local_1a8 != (void******)0x0)) {
              FUN_00d50b20();
            }
            if (ppppppuVar6 != (void******)0x0) {
              FUN_00d50b20();
            }
            if ((void******)local_38 != (void******)0x0) {
              FUN_00d50b20();
            }
            if ((void******)pppppuVar2 != (void******)0x0) {
              FUN_00d50b20();
            }
          }
          if (((char)local_b4 != '\0') || ((char)local_b0 != '\0')) {
            ppppppuVar6 = (void******)*arg1;
            pvVar4 = _pthread_getspecific((void*)ppppppuVar11);
            if (pvVar4 != (void *)0x0) {
              ppppppuVar6 = (void******)*arg1;
              lVar8 = FUN_00e8b990();
              if (lVar8 != 0) {
                ppppppuVar6 = (void******)
                              ppppppuVar6[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
              }
            }
            FUN_012caf10();
            ppppppuVar12 = (void******)local_88;
            if (((((char)local_80 == '\0') &&
                 ((void******)local_88 != (void******)0x0)) &&
                (FUN_00d50b00(), (char)local_80 != '\0')) &&
               ((void******)local_88 != (void******)0x0)) {
              FUN_00d50b20();
            }
            if ((char)local_b0 != '\0') {
              pvVar4 = _pthread_getspecific((void*)ppppppuVar11);
              if ((pvVar4 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                ppppppuVar11 = (void******)pppppuVar13;
              }
              FUN_01510280();
              ppppppuVar6 = (void******)local_48;
              pvVar4 = _pthread_getspecific((void*)ppppppuVar11);
              pppppuVar2 = local_48;
              if ((pvVar4 != (void *)0x0) &&
                 (lVar8 = FUN_00e8b990(), ppppppuVar6 = (void******)pppppuVar2, lVar8 != 0))
              {
                ppppppuVar6 = (void******)
                              pppppuVar2[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
              }
              local_80._0_1_ = '\0';
              local_88 = (void******)0x0;
              FUN_0124f820();
              if (((char)local_80 != '\0') &&
                 ((void******)local_88 != (void******)0x0)) {
                FUN_00d50b20();
              }
              if ((local_40[0] != '\0') && ((void******)local_48 != (void******)0x0))
              {
                FUN_00d50b20();
              }
            }
            if (0 < (int)uVar1) {
              local_c8 = ppppppuVar12;
              ppppppuVar19 = (void******)0x0;
              bVar20 = false;
              bVar22 = false;
              do {
                pVar10 = (void*)ppppppuVar11;
                pvVar4 = _pthread_getspecific(pVar10);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0132d610();
                local_38 = local_88;
                if (((((char)local_80 == '\0') &&
                     ((void******)local_88 != (void******)0x0)) &&
                    (FUN_00d50b00(), (char)local_80 != '\0')) &&
                   ((void******)local_88 != (void******)0x0)) {
                  FUN_00d50b20();
                }
                if (local_98 == (void*)0x0) {
                  dVar23 = 0.0;
                }
                else {
                  dVar23 = *(double *)(local_98[2] + (int64_t)ppppppuVar19 * 8);
                }
                local_e8 = FUN_00e7bdb0();
                uVar24 = FUN_00e7bdb0();
                local_a8 = 0xffffffff;
                if (ppppppuVar19 != (void******)0x0) {
                  pvVar4 = _pthread_getspecific(pVar10);
                  if (pvVar4 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_00e7bcc0();
                  pVar10 = (void*)&local_a8;
                  local_e8 = FUN_016cb9d0(local_290 - dVar23,4);
                }
                if ((void******)(uint64_t)(uVar1 - 1) != ppppppuVar19) {
                  pvVar4 = _pthread_getspecific(pVar10);
                  if (pvVar4 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_290 = (double)FUN_0125a280();
                  pvVar4 = _pthread_getspecific(pVar10);
                  if (pvVar4 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_00e7bcc0();
                  pVar10 = (void*)&local_a8;
                  uVar24 = FUN_016cb9d0(local_290 - dVar23,4);
                }
                pvVar4 = _pthread_getspecific(pVar10);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0132d900();
                pvVar4 = _pthread_getspecific(pVar10);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_198 = pppppuVar13;
                local_190 = '\0';
                ppppppuVar11 = (void******)((int64_t)&MACH_HEADER.magic + 1);
                FUN_01519670(1,&local_198);
                ppppppuVar6 = (void******)local_88;
                if ((char)local_80 == '\0') {
                  if ((((void******)local_88 != (void******)0x0) &&
                      (FUN_00d50b00(), (char)local_80 != '\0')) &&
                     ((void******)local_88 != (void******)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_80._0_1_ = '\0';
                }
                if ((local_190 != '\0') && ((void******)local_198 != (void******)0x0))
                {
                  FUN_00d50b20();
                }
                if ((local_40[0] != '\0') && ((void******)local_48 != (void******)0x0)
                   ) {
                  FUN_00d50b20();
                }
                if ((char)local_b4 != '\0') {
                  pvVar4 = _pthread_getspecific((void*)ppppppuVar11);
                  if (pvVar4 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_188 = ppppppuVar6;
                  local_180 = '\0';
                  local_178 = local_38;
                  local_170 = '\0';
                  local_168 = local_c8;
                  local_160 = '\0';
                  local_158 = 0;
                  local_150 = '\0';
                  ppppppuVar11 = &local_168;
                  cVar3 = FUN_01516650(dVar23,&local_178,local_e8,uVar24);
                  if ((local_150 != '\0') && (local_158 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_160 != '\0') &&
                     ((void******)local_168 != (void******)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_170 != '\0') &&
                     ((void******)local_178 != (void******)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_180 != '\0') &&
                     ((void******)local_188 != (void******)0x0)) {
                    FUN_00d50b20();
                  }
                  bVar22 = bVar20;
                  if (cVar3 != '\0') {
                    bVar22 = true;
                    bVar20 = bVar22;
                  }
                }
                if ((char)local_b0 != '\0') {
                  pvVar4 = _pthread_getspecific((void*)ppppppuVar11);
                  if (pvVar4 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_148 = ppppppuVar6;
                  local_140 = '\0';
                  local_138 = local_38;
                  local_130 = '\0';
                  local_128 = local_c8;
                  local_120 = '\0';
                  local_118 = 0;
                  local_110 = '\0';
                  ppppppuVar11 = &local_128;
                  FUN_01516720(dVar23,&local_138,local_e8,uVar24);
                  if ((local_110 != '\0') && (local_118 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_120 != '\0') &&
                     ((void******)local_128 != (void******)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_130 != '\0') &&
                     ((void******)local_138 != (void******)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_140 != '\0') &&
                     ((void******)local_148 != (void******)0x0)) {
                    FUN_00d50b20();
                  }
                }
                if (ppppppuVar6 != (void******)0x0) {
                  FUN_00d50b20();
                }
                if ((void******)local_38 != (void******)0x0) {
                  FUN_00d50b20();
                }
                ppppppuVar12 = (void******)local_c8;
                pVar10 = (void*)ppppppuVar11;
                ppppppuVar19 = (void******)((int64_t)ppppppuVar19 + 1);
              } while (ppppppuVar14 != ppppppuVar19);
              if (bVar22) {
                pvVar4 = _pthread_getspecific(pVar10);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012cb110();
                pvVar4 = _pthread_getspecific(pVar10);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012e7210();
                ppppppuVar6 = (void******)local_88;
                local_100 = 0;
                if (((char)local_80 == '\0') &&
                   ((void******)local_88 != (void******)0x0)) {
                  FUN_00d50b00();
                }
                local_108 = ppppppuVar6;
                local_100 = '\x01';
                FUN_012879b0();
                if ((local_100 != '\0') && ((void******)local_108 != (void******)0x0))
                {
                  FUN_00d50b20();
                }
                if ((local_40[0] != '\0') && ((void******)local_48 != (void******)0x0)
                   ) {
                  FUN_00d50b20();
                }
              }
            }
            if (ppppppuVar12 != (void******)0x0) {
              FUN_00d50b20();
            }
          }
          ppppppuVar14 = (void******)local_c0;
          uVar21 = local_e0;
          if ((void******)pppppuVar13 != (void******)0x0) {
            FUN_00d50b20();
          }
        }
        uVar15 = CONCAT71((int7)((uint64_t)ppppppuVar6 >> 8),ppppppuVar14 != (void******)0x0
                         );
        if (ppppppuVar14 != (void******)0x0) {
          FUN_00d50b20();
        }
        if ((char)local_ac == '\0' && (void******)local_90 != (void******)0x0) {
          FUN_00d50b20();
        }
        if (((char)uVar21 != '\0') && (local_98 != (void*)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_012fd6d2;
      }
      if ((char)param_1 == '\0') {
        puVar5 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        pVar10 = 0x2572358;
        *puVar5 = &g_02572358;
        local_90 = (void*****)puVar5;
        (*g_02572370)();
        FUN_012e74e0();
        ppppppuVar6 = (void******)local_88;
        if ((char)local_80 == '\0') {
          if ((void******)local_88 != (void******)0x0) {
            FUN_00d50b00();
            goto LAB_012fddf5;
          }
        }
        else if ((void******)local_88 != (void******)0x0) {
LAB_012fddf5:
          local_80._0_1_ = '\0';
          local_88 = (void******)0x0;
          local_38 = ppppppuVar6;
          local_78 = ppppppuVar6;
          local_70 = 0xffffffff;
          local_68 = 0;
          local_70._4_4_ = 0;
          while( true ) {
            if (local_70._4_4_ != 0) {
              if (local_70._4_4_ < 1) {
                iVar16 = -local_70._4_4_;
              }
              else {
                iVar16 = (int)local_70 - local_70._4_4_;
                local_70 = CONCAT44(local_70._4_4_,iVar16);
                FUN_00d23690();
                local_68 = local_68 + local_70._4_4_;
                iVar16 = 0;
              }
              local_70 = CONCAT44(iVar16,(int)local_70);
            }
            lVar8 = (int64_t)(int)local_70;
            iVar16 = (int)local_70 + 1;
            local_70 = CONCAT44(local_70._4_4_,iVar16);
            if (*(int *)((int64_t)local_78 + 0xc) <= iVar16) break;
            pppppuVar13 = (void*****)local_78[2];
            local_88 = (void*****)pppppuVar13[lVar8 + 1];
            pvVar4 = _pthread_getspecific((void*)pppppuVar13);
            pVar10 = (void*)pppppuVar13;
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e8920();
            ppppppuVar6 = (void******)local_48;
            ppppppuVar11 = (void******)*arg1;
            if ((local_40[0] != '\0') && ((void******)local_48 != (void******)0x0)) {
              FUN_00d50b20();
            }
            ppppppuVar14 = (void******)local_88;
            if (ppppppuVar6 == ppppppuVar11) {
              pvVar4 = _pthread_getspecific(pVar10);
              pppppuVar13 = local_88;
              if ((pvVar4 != (void *)0x0) &&
                 (lVar8 = FUN_00e8b990(), ppppppuVar14 = (void******)pppppuVar13, lVar8 != 0)
                 ) {
                ppppppuVar14 = (void******)
                               pppppuVar13[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
              }
              ppppppuVar6 = (void******)ppppppuVar14[0x16];
              if (ppppppuVar6 != (void******)0x0) {
                FUN_00d50b00();
              }
              FUN_00d23310();
              pppppuVar2 = local_48;
              local_d8._0_1_ = local_40[0];
              pppppuVar13 = &local_d8;
              pppppuVar7 = (void*****)local_40;
              if (local_40[0] == '\0') {
                pppppuVar7 = pppppuVar13;
              }
              *(char *)pppppuVar7 = '\0';
              if ((local_40[0] != '\0') && ((void******)pppppuVar2 != (void******)0x0)
                 ) {
                FUN_00d50b20();
              }
              pVar10 = (void*)pppppuVar13;
              pvVar4 = _pthread_getspecific(pVar10);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01264240();
              lVar8 = CONCAT44(uStack_a4,local_a8);
              if (local_a0 == '\0') {
                if (((lVar8 != 0) && (FUN_00d50b00(), local_a0 != '\0')) &&
                   (CONCAT44(uStack_a4,local_a8) != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_a0 = '\0';
              }
              if (((char)local_d8 != '\0') &&
                 ((void******)pppppuVar2 != (void******)0x0)) {
                FUN_00d50b20();
              }
              if (ppppppuVar6 != (void******)0x0) {
                FUN_00d50b20();
              }
              ppppppuVar11 = (void******)local_88;
              if (lVar8 != 0) {
                pvVar4 = _pthread_getspecific(pVar10);
                pppppuVar13 = local_88;
                if ((pvVar4 != (void *)0x0) &&
                   (lVar8 = FUN_00e8b990(), ppppppuVar11 = (void******)pppppuVar13,
                   lVar8 != 0)) {
                  ppppppuVar11 = (void******)
                                 pppppuVar13[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
                }
                ppppppuVar6 = (void******)ppppppuVar11[0xc];
                if (ppppppuVar6 != (void******)0x0) {
                  FUN_00d50b00();
                }
                local_40[0] = '\0';
                local_48 = ppppppuVar6;
                FUN_00d21140();
                if ((local_40[0] != '\0') && ((void******)local_48 != (void******)0x0)
                   ) {
                  FUN_00d50b20();
                }
                if (ppppppuVar6 != (void******)0x0) {
                  FUN_00d50b20();
                }
                FUN_00d50b20();
              }
            }
          }
          ppppppuVar11 = (void******)local_78;
          FUN_000be170();
          pVar10 = (void*)ppppppuVar11;
          FUN_00d50b20();
        }
        iVar16 = *(int *)((int64_t)local_90 + 0xc);
        if ((iVar16 != 0) && ((char)local_ac != '\0')) {
          if (((char)local_b4 != '\0') || ((char)local_b0 != '\0')) {
            if ((char)local_b0 != '\0') {
              pvVar4 = _pthread_getspecific(pVar10);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012cade0();
              pvVar4 = _pthread_getspecific(pVar10);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_015058d0();
              pvVar4 = _pthread_getspecific(pVar10);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01510280();
              pvVar4 = _pthread_getspecific(pVar10);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_80._0_1_ = '\0';
              local_88 = (void******)0x0;
              FUN_0124f820();
              if (((char)local_80 != '\0') &&
                 ((void******)local_88 != (void******)0x0)) {
                FUN_00d50b20();
              }
              if ((local_40[0] != '\0') && ((void******)local_48 != (void******)0x0))
              {
                FUN_00d50b20();
              }
              if ((local_a0 != '\0') && (CONCAT44(uStack_a4,local_a8) != 0)) {
                FUN_00d50b20();
              }
              if ((local_d0 != '\0') && (CONCAT71(local_d8._1_7_,(char)local_d8) != 0)) {
                FUN_00d50b20();
              }
            }
            FUN_0165a430();
            pvVar4 = _pthread_getspecific(pVar10);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012cb110();
            pvVar4 = _pthread_getspecific(pVar10);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_38 = (void*****)FUN_012ebfe0();
            pvVar4 = _pthread_getspecific(pVar10);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012cb110();
            ppppppuVar6 = (void******)local_48;
            pvVar4 = _pthread_getspecific(pVar10);
            pppppuVar13 = local_48;
            if ((pvVar4 != (void *)0x0) &&
               (lVar8 = FUN_00e8b990(), ppppppuVar6 = (void******)pppppuVar13, lVar8 != 0)) {
              ppppppuVar6 = (void******)
                            pppppuVar13[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
            }
            uVar24 = FUN_012ebd30();
            FUN_01519e20(local_38,uVar24,0,0);
            if ((local_40[0] != '\0') && ((void******)local_48 != (void******)0x0)) {
              FUN_00d50b20();
            }
            if (((char)local_80 != '\0') && ((void******)local_88 != (void******)0x0))
            {
              FUN_00d50b20();
            }
          }
        }
        uVar15 = CONCAT71((int7)((uint64_t)ppppppuVar6 >> 8),iVar16 != 0);
        FUN_00d50b20();
        goto LAB_012fd6d2;
      }
    }
  }
  uVar15 = 0;
LAB_012fd6d2:
  return uVar15 & 0xffffffff;
}

