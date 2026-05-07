// ===================================================================
// MULSSGenerator — Complete reconstructed pseudocode
// 114 functions
// ===================================================================


// ============================================================
// 012fd540
// ============================================================
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



// ============================================================
// 012f0b60
// ============================================================
// Function: FUN_012f0b60
// Address: 012f0b60
// Size: 9863 bytes
// Class: MULSSGenerator

void*
FUN_012f0b60(void******param_1,int64_t *param_2,uint32_t param_3,uint32_t param_4,
            int64_t *param_5)

{
  void*puVar1;
  void******ppppppuVar2;
  void*****pppppuVar3;
  void*****pppppuVar4;
  int64_t lVar5;
  void****ppppuVar6;
  void****ppppuVar7;
  void *pvVar8;
  void*puVar9;
  undefined7 uVar15;
  uint64_t uVar10;
  uint64_t uVar11;
  void******ppppppuVar12;
  int64_t lVar13;
  int64_t lVar14;
  void* pVar16;
  char *pcVar17;
  int64_t arg1;
  void*this_ptr;
  char local_res8;
  char local_res10;
  char local_res18;
  void*local_res20;
  int64_t local_398;
  char local_390;
  void****local_340;
  char local_338;
  void*****local_330;
  char local_328;
  void*****local_320;
  char local_318;
  void*****local_310;
  char local_308;
  void*****local_300;
  char local_2f8;
  int64_t local_2f0;
  char local_2e8;
  void*****local_2e0;
  char local_2d8;
  void*****local_2d0;
  char local_2c8;
  int64_t local_2c0;
  char local_2b8;
  int64_t local_2b0;
  char local_2a8;
  int64_t local_2a0;
  char local_298;
  int64_t local_290;
  char local_288;
  void*****local_280;
  char local_278;
  void*****local_270;
  char local_268;
  void*****local_260;
  char local_258;
  void*****local_250;
  char local_248;
  int64_t local_240;
  char local_238;
  void*****local_230;
  char local_228;
  void*****local_220;
  char local_218;
  void*****local_210;
  char local_208;
  void*****local_200;
  char local_1f8;
  int64_t local_1f0;
  char local_1e8;
  void****local_1e0;
  char local_1d8;
  int local_1cc;
  int64_t local_1c8;
  char local_1c0;
  int64_t local_1b8;
  char local_1b0;
  uint32_t local_1a4;
  void****local_1a0;
  char local_198;
  void****local_190;
  char local_188;
  void****local_180;
  char local_178;
  void****local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  void****local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  void****local_120;
  char local_118;
  void*****local_110;
  char local_108;
  undefined7 uStack_107;
  char local_100;
  int64_t local_f8;
  int64_t local_f0;
  char local_e8;
  void*****local_d8;
  char local_d0 [72];
  void****local_88;
  char local_80;
  uint64_t local_78;
  double local_70;
  int64_t local_68;
  char local_60;
  void*****local_58;
  void*****local_50;
  void*****local_48;
  void****local_40;
  char local_38;
  
  pppppuVar3 = local_d8;
  local_58 = (void*****)CONCAT44(local_58._4_4_,param_3);
  pVar16 = 0;
  local_1a4 = param_4;
  local_48 = param_1;
  local_f8 = FUN_012912a0(0,0,0);
  pvVar8 = _pthread_getspecific(pVar16);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132b1c0(local_f8);
  local_110 = local_d8;
  if (local_d0[0] == '\0') {
    if ((void******)local_d8 == (void******)0x0) goto LAB_012f30c6;
    FUN_00d50b00();
    if ((local_d0[0] != '\0') && ((void******)local_d8 != (void******)0x0)) {
      FUN_00d50b20();
    }
  }
  else if ((void******)local_d8 == (void******)0x0) goto LAB_012f30c6;
  if (*param_5 == 0) {
    FUN_012e7fb0();
    ppppppuVar12 = (void******)*param_5;
    if (ppppppuVar12 == (void******)local_d8) {
      if (((char)param_5[1] != '\0') || ((void******)local_d8 == (void******)0x0))
      goto LAB_012f0d44;
      if (local_d0[0] == '\0') {
        FUN_00d50b00();
        goto LAB_012f0d38;
      }
    }
    else {
      lVar14 = param_5[1];
      if (local_d0[0] == '\0') {
        if ((void******)local_d8 != (void******)0x0) {
          FUN_00d50b00();
        }
        *param_5 = (int64_t)local_d8;
        if (((char)lVar14 != '\0') && (ppppppuVar12 != (void******)0x0)) {
          FUN_00d50b20();
        }
LAB_012f0d38:
        *(void*)(param_5 + 1) = 1;
LAB_012f0d44:
        if ((local_d0[0] != '\0') && ((void******)local_d8 != (void******)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_012f0d5e;
      }
      *param_5 = (int64_t)local_d8;
      if (((char)lVar14 != '\0') && (ppppppuVar12 != (void******)0x0)) {
        FUN_00d50b20();
      }
    }
    *(void*)(param_5 + 1) = 1;
  }
LAB_012f0d5e:
  local_50 = (void*****)FUN_01266200();
  local_70 = (double)FUN_012664b0();
  local_68 = g_02709968;
  local_60 = 0;
  if (g_02709968 != 0) {
    FUN_00d50b00();
  }
  pppppuVar4 = g_027295d0;
  local_60 = '\x01';
  local_80 = 0;
  if (g_027295d0 != (void*****)0x0) {
    FUN_00d50b00();
  }
  local_88 = pppppuVar4;
  local_80 = '\x01';
  FUN_012f4890(param_2,&local_68,&local_88);
  FUN_000b4da0();
  ppppuVar6 = local_40;
  if (local_38 == '\0') {
    if ((((void*****)local_40 != (void*****)0x0) && (FUN_00d50b00(), local_38 != '\0')
        ) && ((void*****)local_40 != (void*****)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_002d10d0();
  if ((local_80 != '\0') && ((void*****)local_88 != (void*****)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  lVar14 = g_027e1368;
  if (g_027e1368 != 0) {
    FUN_00d50b00();
  }
  local_1c0 = 0;
  if (arg1 != 0) {
    FUN_00d50b00();
  }
  local_1c0 = '\x01';
  local_338 = '\0';
  ppppppuVar12 = (void******)&local_340;
  local_340 = ppppuVar6;
  local_1c8 = arg1;
  FUN_00d40470(ppppppuVar12,&local_1c8,3,3);
  if ((local_338 != '\0') && ((void*****)local_340 != (void*****)0x0)) {
    FUN_00d50b20();
  }
  if ((local_1c0 != '\0') && (local_1c8 != 0)) {
    FUN_00d50b20();
  }
  if (lVar14 != 0) {
    FUN_00d50b20();
  }
  if ((local_d0[0] != '\0') && ((void******)local_d8 != (void******)0x0)) {
    FUN_00d50b20();
  }
  if ((*param_2 != 0) && (*(int *)(*param_2 + 0xc) != 0)) {
    FUN_012edae0();
  }
  local_d8 = pppppuVar3;
  if ((char)local_58 != '\0') {
    FUN_012ead00(local_50,local_70 - (double)local_50);
    if (local_d0[0] == '\0') {
      if ((void******)local_d8 != (void******)0x0) {
        FUN_00d50b00();
        goto LAB_012f1002;
      }
      if (local_res20 == (void*)0x0) goto LAB_012f1158;
LAB_012f100b:
      puVar9 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      ppppppuVar12 = (void******)&g_02572358;
      *puVar9 = &g_02572358;
      (*g_02572370)();
      puVar1 = (void*)*local_res20;
      if (puVar1 == puVar9) {
        if (*(char *)(local_res20 + 1) == '\0') goto LAB_012f10b0;
        FUN_00d50b20();
        ppppppuVar2 = (void******)*param_2;
      }
      else {
        *local_res20 = puVar9;
        if ((*(char *)(local_res20 + 1) != '\0') && (puVar1 != (void*)0x0)) {
          FUN_00d50b20();
        }
LAB_012f10b0:
        *(void*)(local_res20 + 1) = 1;
        ppppppuVar2 = (void******)*param_2;
      }
      if (ppppppuVar2 != (void******)0x0) {
        local_d0[0] = '\0';
        FUN_00d23480();
        local_d8 = ppppppuVar2;
        if ((local_d0[0] != '\0') && (ppppppuVar2 != (void******)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((void******)pppppuVar3 == (void******)0x0) goto LAB_012f1158;
      local_d0[0] = '\0';
      FUN_00d23480();
      if ((local_d0[0] != '\0') && ((void******)pppppuVar3 != (void******)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
LAB_012f1002:
      if (local_res20 != (void*)0x0) goto LAB_012f100b;
      if ((void******)local_d8 == (void******)0x0) goto LAB_012f1158;
    }
    FUN_012edae0();
    FUN_00d50b20();
    local_d8 = pppppuVar3;
  }
LAB_012f1158:
  lVar14 = *(int64_t *)(arg1 + 0xb0);
  if (lVar14 != 0) {
    FUN_00d50b00();
  }
  local_1cc = *(int *)(lVar14 + 0xc);
  FUN_00d50b20();
  uVar15 = (undefined7)((uint64_t)local_d8 >> 8);
  if ((char)local_1a4 == '\0') {
LAB_012f1261:
    local_70 = 0.0;
    local_58 = (void******)0x0;
  }
  else {
    pvVar8 = _pthread_getspecific((void*)ppppppuVar12);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d610();
    pVar16 = (void*)ppppppuVar12;
    if (local_d0[0] == '\0') {
      if ((void******)local_d8 == (void******)0x0) goto LAB_012f1261;
      local_50 = local_d8;
      FUN_00d50b00();
      if ((local_d0[0] != '\0') && ((void******)local_d8 != (void******)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50 = local_d8;
      if ((void******)local_d8 == (void******)0x0) goto LAB_012f1261;
    }
    FUN_012e8920();
    lVar14 = local_68;
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cade0();
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01505900();
    if (local_d0[0] == '\0') {
      if ((((void******)local_d8 != (void******)0x0) &&
          (FUN_00d50b00(), local_d0[0] != '\0')) &&
         ((void******)local_d8 != (void******)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_d0[0] = '\0';
    }
    if ((local_38 != '\0') && ((void*****)local_40 != (void*****)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (lVar14 != 0)) {
      FUN_00d50b20();
    }
    local_330 = local_50;
    local_328 = '\0';
    FUN_016cbba0();
    if (local_d0[0] == '\0') {
      if ((((void******)local_d8 != (void******)0x0) &&
          (FUN_00d50b00(), local_d0[0] != '\0')) &&
         ((void******)local_d8 != (void******)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_d0[0] = '\0';
    }
    if ((local_328 != '\0') && ((void******)local_330 != (void******)0x0)) {
      FUN_00d50b20();
    }
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c1150();
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016ea7c0(local_f8);
    FUN_012e8920();
    ppppuVar7 = local_40;
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cade0();
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_320 = local_d8;
    local_318 = '\0';
    FUN_015056c0();
    if ((local_318 != '\0') && ((void******)local_320 != (void******)0x0)) {
      FUN_00d50b20();
    }
    if ((local_d0[0] != '\0') && ((void******)local_d8 != (void******)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && ((void*****)ppppuVar7 != (void*****)0x0)) {
      FUN_00d50b20();
    }
    FUN_012e8920();
    lVar14 = local_68;
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7210();
    local_58 = local_d8;
    if ((void******)local_d8 == (void******)0x0) {
      local_58 = (void******)0x0;
      local_70 = 0.0;
      ppppppuVar12 = (void******)local_d8;
    }
    else {
      local_70 = (double)CONCAT71(uVar15,1);
      ppppppuVar12 = (void******)local_d8;
      if (local_d0[0] == '\0') {
        FUN_00d50b00();
      }
    }
    if ((local_38 != '\0') && ((void*****)local_40 != (void*****)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (lVar14 != 0)) {
      FUN_00d50b20();
    }
    pVar16 = (void*)ppppppuVar12;
    if ((local_res8 == '\0') && ((void******)local_d8 != (void******)0x0)) {
      pvVar8 = _pthread_getspecific(pVar16);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150fe30();
      pvVar8 = _pthread_getspecific(pVar16);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar8 = _pthread_getspecific(pVar16);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150fe30();
      local_1a0 = local_40;
      local_198 = 0;
      if (local_38 == '\0') {
        if ((void*****)local_40 != (void*****)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_198 = '\x01';
      local_310 = local_d8;
      local_308 = '\0';
      local_300 = local_d8;
      local_2f8 = '\0';
      uVar10 = FUN_00e7bdb0();
      uVar11 = FUN_00e7bdb0();
      local_2e8 = '\0';
      local_2f0 = 0;
      ppppppuVar12 = &local_300;
      FUN_01516650(0,&local_310,uVar10,uVar11);
      if ((local_2e8 != '\0') && (local_2f0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_2f8 != '\0') && ((void******)local_300 != (void******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_308 != '\0') && ((void******)local_310 != (void******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_198 != '\0') && ((void*****)local_1a0 != (void*****)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && ((void*****)local_40 != (void*****)0x0)) {
        FUN_00d50b20();
      }
      if ((local_d0[0] != '\0') && ((void******)local_d8 != (void******)0x0)) {
        FUN_00d50b20();
      }
    }
    pVar16 = (void*)ppppppuVar12;
    if ((local_res10 == '\0') && ((void******)local_d8 != (void******)0x0)) {
      pvVar8 = _pthread_getspecific(pVar16);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150fe30();
      pvVar8 = _pthread_getspecific(pVar16);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar8 = _pthread_getspecific(pVar16);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150fe30();
      local_190 = local_40;
      local_188 = 0;
      if (local_38 == '\0') {
        if ((void*****)local_40 != (void*****)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_188 = '\x01';
      local_2e0 = local_d8;
      local_2d8 = '\0';
      local_2d0 = local_d8;
      local_2c8 = '\0';
      uVar10 = FUN_00e7bdb0();
      uVar11 = FUN_00e7bdb0();
      local_2b8 = '\0';
      local_2c0 = 0;
      ppppppuVar12 = &local_2d0;
      FUN_01516720(0,&local_2e0,uVar10,uVar11);
      if ((local_2b8 != '\0') && (local_2c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_2c8 != '\0') && ((void******)local_2d0 != (void******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_2d8 != '\0') && ((void******)local_2e0 != (void******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_188 != '\0') && ((void*****)local_190 != (void*****)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && ((void*****)local_40 != (void*****)0x0)) {
        FUN_00d50b20();
      }
      if ((local_d0[0] != '\0') && ((void******)local_d8 != (void******)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((void******)local_d8 != (void******)0x0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  if (local_res8 == '\0') {
LAB_012f1dc4:
    local_78 = 0;
    local_50 = (void******)0x0;
  }
  else {
    pvVar8 = _pthread_getspecific((void*)ppppppuVar12);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d610();
    if ((local_d0[0] != '\0') && ((void******)local_d8 != (void******)0x0)) {
      FUN_00d50b20();
    }
    if ((void******)local_d8 == (void******)0x0) goto LAB_012f1dc4;
    pvVar8 = _pthread_getspecific((void*)ppppppuVar12);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d900();
    pvVar8 = _pthread_getspecific((void*)ppppppuVar12);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150eb60();
    if ((local_d0[0] != '\0') && ((void******)local_d8 != (void******)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && ((void*****)local_40 != (void*****)0x0)) {
      FUN_00d50b20();
    }
    pVar16 = (void*)ppppppuVar12;
    if ((void******)local_d8 == (void******)0x0) goto LAB_012f1dc4;
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150fe30();
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d900();
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150fe30();
    local_170 = local_88;
    local_168 = 0;
    if (local_80 == '\0') {
      if ((void*****)local_88 != (void*****)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_80 = '\0';
    }
    local_168 = '\x01';
    pVar16 = 1;
    FUN_01519670(1,&local_170);
    local_180 = local_40;
    local_178 = 0;
    if (local_38 == '\0') {
      if ((void*****)local_40 != (void*****)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_178 = '\x01';
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d610();
    local_160 = local_f0;
    local_158 = 0;
    if (local_e8 == '\0') {
      if (local_f0 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_e8 = '\0';
    }
    local_158 = '\x01';
    FUN_012e8920();
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cade0();
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01505900();
    local_148 = 0;
    local_150 = CONCAT71(uStack_107,local_108);
    if (local_100 == '\0') {
      if (local_150 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_100 = '\0';
    }
    local_148 = '\x01';
    uVar10 = FUN_00e7bdb0();
    uVar11 = FUN_00e7bdb0();
    local_298 = '\0';
    local_2a0 = 0;
    pVar16 = (void*)&local_150;
    FUN_01516650(local_f8,&local_160,uVar10,uVar11);
    if ((local_298 != '\0') && (local_2a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_148 != '\0') && (local_150 != 0)) {
      FUN_00d50b20();
    }
    if ((local_100 != '\0') && (CONCAT71(uStack_107,local_108) != 0)) {
      FUN_00d50b20();
    }
    if ((local_2a8 != '\0') && (local_2b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_390 != '\0') && (local_398 != 0)) {
      FUN_00d50b20();
    }
    if ((local_158 != '\0') && (local_160 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_178 != '\0') && ((void*****)local_180 != (void*****)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && ((void*****)local_40 != (void*****)0x0)) {
      FUN_00d50b20();
    }
    if ((local_168 != '\0') && ((void*****)local_170 != (void*****)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && ((void*****)local_88 != (void*****)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0[0] != '\0') && ((void******)local_d8 != (void******)0x0)) {
      FUN_00d50b20();
    }
    FUN_012e8920();
    lVar14 = local_68;
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7210();
    local_50 = local_d8;
    if ((void******)local_d8 == (void******)0x0) {
      local_50 = (void******)0x0;
      local_78 = 0;
      ppppppuVar12 = (void******)local_d8;
    }
    else {
      local_78 = CONCAT71(uVar15,1);
      ppppppuVar12 = (void******)local_d8;
      if (local_d0[0] == '\0') {
        FUN_00d50b00();
      }
    }
    if ((local_38 != '\0') && ((void*****)local_40 != (void*****)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (lVar14 != 0)) {
      FUN_00d50b20();
    }
  }
  if (local_res10 != '\0') {
    pvVar8 = _pthread_getspecific((void*)ppppppuVar12);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d610();
    if ((local_d0[0] != '\0') && ((void******)local_d8 != (void******)0x0)) {
      FUN_00d50b20();
    }
    if ((void******)local_d8 != (void******)0x0) {
      pvVar8 = _pthread_getspecific((void*)ppppppuVar12);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0132d900();
      pvVar8 = _pthread_getspecific((void*)ppppppuVar12);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01510280();
      if ((local_d0[0] != '\0') && ((void******)local_d8 != (void******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && ((void*****)local_40 != (void*****)0x0)) {
        FUN_00d50b20();
      }
      pVar16 = (void*)ppppppuVar12;
      if ((void******)local_d8 != (void******)0x0) {
        pvVar8 = _pthread_getspecific(pVar16);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0150fe30();
        pvVar8 = _pthread_getspecific(pVar16);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar8 = _pthread_getspecific(pVar16);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0132d900();
        local_140 = local_40;
        local_138 = 0;
        if (local_38 == '\0') {
          if ((void*****)local_40 != (void*****)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_138 = '\x01';
        pvVar8 = _pthread_getspecific(pVar16);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0132d610();
        local_130 = local_68;
        local_128 = 0;
        if (local_60 == '\0') {
          if (local_68 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        local_128 = '\x01';
        FUN_012e8920();
        lVar14 = CONCAT71(uStack_107,local_108);
        pvVar8 = _pthread_getspecific(pVar16);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cade0();
        pvVar8 = _pthread_getspecific(pVar16);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01505900();
        local_120 = local_88;
        local_118 = 0;
        if (local_80 == '\0') {
          if ((void*****)local_88 != (void*****)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_80 = '\0';
        }
        local_118 = '\x01';
        uVar10 = FUN_00e7bdb0();
        uVar11 = FUN_00e7bdb0();
        local_288 = '\0';
        local_290 = 0;
        ppppppuVar12 = (void******)&local_120;
        FUN_01516720(local_f8,&local_130,uVar10,uVar11);
        if ((local_288 != '\0') && (local_290 != 0)) {
          FUN_00d50b20();
        }
        if ((local_118 != '\0') && ((void*****)local_120 != (void*****)0x0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && ((void*****)local_88 != (void*****)0x0)) {
          FUN_00d50b20();
        }
        if ((local_e8 != '\0') && (local_f0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_100 != '\0') && (lVar14 != 0)) {
          FUN_00d50b20();
        }
        if ((local_128 != '\0') && (local_130 != 0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((local_138 != '\0') && ((void*****)local_140 != (void*****)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && ((void*****)local_40 != (void*****)0x0)) {
          FUN_00d50b20();
        }
        if ((local_d0[0] != '\0') && ((void******)local_d8 != (void******)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  if ((local_res18 != '\0') && ((char)local_1a4 == '\0')) {
    pvVar8 = _pthread_getspecific((void*)ppppppuVar12);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d610();
    if ((((local_d0[0] == '\0') && ((void******)local_d8 != (void******)0x0)) &&
        (FUN_00d50b00(), local_d0[0] != '\0')) &&
       ((void******)local_d8 != (void******)0x0)) {
      FUN_00d50b20();
    }
    FUN_012e8920();
    lVar14 = local_68;
    pvVar8 = _pthread_getspecific((void*)ppppppuVar12);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cade0();
    pvVar8 = _pthread_getspecific((void*)ppppppuVar12);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01505900();
    if (local_d0[0] == '\0') {
      if ((((void******)local_d8 != (void******)0x0) &&
          (FUN_00d50b00(), local_d0[0] != '\0')) &&
         ((void******)local_d8 != (void******)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_d0[0] = '\0';
    }
    if ((local_38 != '\0') && ((void*****)local_40 != (void*****)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (lVar14 != 0)) {
      FUN_00d50b20();
    }
    pVar16 = (void*)ppppppuVar12;
    if (((void******)local_d8 != (void******)0x0) &&
       ((void******)local_d8 != (void******)0x0)) {
      local_280 = local_d8;
      local_278 = '\0';
      FUN_016cbba0();
      if (local_d0[0] == '\0') {
        if ((((void******)local_d8 != (void******)0x0) &&
            (FUN_00d50b00(), local_d0[0] != '\0')) &&
           ((void******)local_d8 != (void******)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_d0[0] = '\0';
      }
      if ((local_278 != '\0') && ((void******)local_280 != (void******)0x0)) {
        FUN_00d50b20();
      }
      pvVar8 = _pthread_getspecific(pVar16);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016ea7c0(local_f8);
      local_270 = local_110;
      local_268 = '\0';
      local_260 = local_d8;
      local_258 = '\0';
      local_250 = local_d8;
      local_248 = '\0';
      ppppppuVar12 = (void******)FUN_00e7bdb0();
      local_238 = '\0';
      local_240 = 0;
      FUN_012910e0(g_0238fee8,&local_250,&local_240);
      if ((local_238 != '\0') && (local_240 != 0)) {
        FUN_00d50b20();
      }
      if ((local_248 != '\0') && ((void******)local_250 != (void******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_258 != '\0') && ((void******)local_260 != (void******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_268 != '\0') && ((void******)local_270 != (void******)0x0)) {
        FUN_00d50b20();
      }
      if ((void******)local_d8 != (void******)0x0) {
        FUN_00d50b20();
      }
    }
    if ((void******)local_d8 != (void******)0x0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  FUN_012e6c30();
  pvVar8 = _pthread_getspecific((void*)ppppppuVar12);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_230 = local_110;
  local_228 = '\0';
  FUN_0150ddd0();
  if ((local_228 != '\0') && ((void******)local_230 != (void******)0x0)) {
    FUN_00d50b20();
  }
  local_220 = local_110;
  local_218 = '\0';
  FUN_00e7bdb0();
  FUN_01287c80();
  if ((local_218 != '\0') && ((void******)local_220 != (void******)0x0)) {
    FUN_00d50b20();
  }
  if ((void******)local_58 != (void******)0x0) {
    local_210 = local_58;
    local_208 = '\0';
    FUN_00e7bdb0();
    FUN_01287c80();
    if ((local_208 != '\0') && ((void******)local_210 != (void******)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((void******)local_50 != (void******)0x0) {
    local_200 = local_50;
    local_1f8 = '\0';
    FUN_012879b0();
    if ((local_1f8 != '\0') && ((void******)local_200 != (void******)0x0)) {
      FUN_00d50b20();
    }
  }
  pvVar8 = _pthread_getspecific((void*)ppppppuVar12);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013d9040();
  if ((local_d0[0] != '\0') && ((void******)local_d8 != (void******)0x0)) {
    FUN_00d50b20();
  }
  if ((void******)local_d8 != (void******)0x0) {
    pvVar8 = _pthread_getspecific((void*)ppppppuVar12);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013d9040();
    pvVar8 = _pthread_getspecific((void*)ppppppuVar12);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar8 = _pthread_getspecific((void*)ppppppuVar12);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    lVar14 = local_68;
    pvVar8 = _pthread_getspecific((void*)ppppppuVar12);
    lVar5 = local_68;
    if ((pvVar8 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar14 = lVar5, lVar13 != 0)) {
      lVar14 = *(int64_t *)(lVar5 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8);
    }
    lVar14 = *(int64_t *)(lVar14 + 0xa8);
    if (lVar14 != 0) {
      FUN_00d50b00();
    }
    local_f8 = lVar14;
    FUN_00d23310();
    pVar16 = (void*)CONCAT71((int7)((uint64_t)ppppppuVar12 >> 8),local_d0[0]);
    pcVar17 = &local_108;
    if (local_d0[0] != '\0') {
      pcVar17 = local_d0;
    }
    local_108 = local_d0[0];
    *pcVar17 = '\0';
    if ((local_d0[0] != '\0') && ((void******)local_d8 != (void******)0x0)) {
      FUN_00d50b20();
    }
    local_48 = local_d8;
    pvVar8 = _pthread_getspecific(pVar16);
    if ((pvVar8 == (void *)0x0) || (lVar14 = FUN_00e8b990(), lVar14 == 0)) {
      pppppuVar3 = (void*****)local_d8[0x17];
    }
    else {
      pppppuVar3 = (void*****)local_d8[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4][0x17];
    }
    if (pppppuVar3 != (void*****)0x0) {
      FUN_00d50b00();
    }
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    ppppuVar7 = local_40;
    if (local_38 == '\0') {
      if ((void*****)local_40 != (void*****)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if (*(void******)(arg1 + 0xb8) != (void*****)ppppuVar7) {
      FUN_00d64850();
      pppppuVar4 = *(void******)(arg1 + 0xb8);
      if (pppppuVar4 != (void*****)ppppuVar7) {
        if ((void*****)ppppuVar7 != (void*****)0x0) {
          FUN_00d50b00();
        }
        *(void*****)(arg1 + 0xb8) = ppppuVar7;
        if (pppppuVar4 != (void*****)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d64910();
    }
    if ((void*****)ppppuVar7 != (void*****)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && ((void*****)local_40 != (void*****)0x0)) {
      FUN_00d50b20();
    }
    lVar14 = local_f8;
    if (pppppuVar3 != (void*****)0x0) {
      FUN_00d50b20();
    }
    if ((local_108 != '\0') && ((void******)local_48 != (void******)0x0)) {
      FUN_00d50b20();
    }
    if (lVar14 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && ((void*****)local_88 != (void*****)0x0)) {
      FUN_00d50b20();
    }
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_1cc == 0) && (*(char *)(arg1 + 0x88) == '\0')) {
    FUN_00d64850();
    *(void*)(arg1 + 0x88) = 1;
    FUN_00d64910();
  }
  FUN_00d403d0();
  local_1f0 = g_02702db8;
  if (g_02702db8 != 0) {
    FUN_00d50b00();
  }
  local_1e8 = '\x01';
  local_1b0 = 0;
  if (arg1 != 0) {
    FUN_00d50b00();
  }
  local_1b0 = '\x01';
  local_1d8 = '\0';
  local_1e0 = ppppuVar6;
  local_1b8 = arg1;
  FUN_00d40470(&local_1e0,&local_1b8,1,0);
  if ((local_1d8 != '\0') && ((void*****)local_1e0 != (void*****)0x0)) {
    FUN_00d50b20();
  }
  if ((local_1b0 != '\0') && (local_1b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1e8 != '\0') && (local_1f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0[0] != '\0') && ((void******)local_d8 != (void******)0x0)) {
    FUN_00d50b20();
  }
  if ((void*****)ppppuVar6 != (void*****)0x0) {
    FUN_00d50b20();
  }
  if ((local_70._0_1_ != '\0') && ((void******)local_58 != (void******)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_78 != '\0') && ((void******)local_50 != (void******)0x0)) {
    FUN_00d50b20();
  }
LAB_012f30c6:
  *this_ptr = local_110;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 0015b0f0
// ============================================================
// Function: FUN_0015b0f0
// Address: 0015b0f0
// Size: 6622 bytes
// Class: MULSSGenerator
// String references:
//   "MULSSGenerator"

void* FUN_0015b0f0(int64_t *param_1,int param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t *plVar5;
  void *pvVar6;
  int64_t lVar7;
  char *pcVar8;
  int64_t lVar9;
  int64_t lVar10;
  void*puVar11;
  void* pVar12;
  int64_t **pplVar13;
  void*this_ptr;
  uint uVar14;
  int64_t *plVar15;
  bool bVar16;
  int64_t local_130;
  char local_128;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  char local_70 [16];
  uint32_t local_60;
  uint64_t local_5c;
  int64_t *local_50;
  char local_48;
  char local_40 [8];
  int64_t *local_38;
  
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_0015e7e0();
  local_38 = plVar5;
  (**(code **)(*plVar5 + 0x18))();
  if (param_2 == 0) {
    pvVar6 = _pthread_getspecific((void*)param_1);
    plVar5 = local_38;
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar5 = local_38, lVar7 != 0)) {
      param_1 = local_38;
      plVar5 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    }
    pvVar6 = _pthread_getspecific((void*)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar6 = _pthread_getspecific((void*)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    plVar2 = local_78;
    if (local_70[0] == '\0') {
      if (local_78 != (int64_t *)0x0) {
        FUN_00d50b00();
        goto LAB_0015b3a6;
      }
      if (plVar5[0x11] != 0) {
        plVar5[0x11] = 0;
        goto LAB_0015b429;
      }
    }
    else {
      local_70[0] = '\0';
LAB_0015b3a6:
      plVar15 = (int64_t *)plVar5[0x11];
      if (plVar15 != plVar2) {
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        plVar5[0x11] = (int64_t)plVar2;
        if (plVar15 != (int64_t *)0x0) {
LAB_0015b429:
          FUN_00d50b20();
        }
      }
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific((void*)param_1);
    plVar5 = local_38;
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar5 = local_38, lVar7 != 0)) {
      param_1 = local_38;
      plVar5 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    }
    pvVar6 = _pthread_getspecific((void*)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313b00();
    pvVar6 = _pthread_getspecific((void*)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015058d0();
    plVar2 = local_78;
    if (local_70[0] == '\0') {
      if (local_78 != (int64_t *)0x0) {
        FUN_00d50b00();
        goto LAB_0015b547;
      }
      if (plVar5[0x12] != 0) {
        plVar5[0x12] = 0;
        goto LAB_0015b7ac;
      }
    }
    else {
      local_70[0] = '\0';
LAB_0015b547:
      plVar15 = (int64_t *)plVar5[0x12];
      if (plVar15 != plVar2) {
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        plVar5[0x12] = (int64_t)plVar2;
        if (plVar15 != (int64_t *)0x0) {
LAB_0015b7ac:
          FUN_00d50b20();
        }
      }
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    pvVar6 = _pthread_getspecific((void*)param_1);
    plVar5 = local_38;
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar5 = local_38, lVar7 != 0)) {
      param_1 = local_38;
      plVar5 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    }
    pvVar6 = _pthread_getspecific((void*)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar6 = _pthread_getspecific((void*)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar6 = _pthread_getspecific((void*)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    FUN_00d23310();
    plVar2 = local_78;
    local_40[0] = local_70[0];
    pcVar8 = local_70;
    if (local_70[0] == '\0') {
      pcVar8 = local_40;
    }
    *pcVar8 = '\0';
    if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40[0] == '\0') {
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b00();
        plVar15 = (int64_t *)plVar5[0x11];
        if (plVar15 != plVar2) goto LAB_0015b3f9;
        goto LAB_0015b59d;
      }
      if (plVar5[0x11] != 0) {
        plVar5[0x11] = 0;
        goto LAB_0015b590;
      }
    }
    else {
      local_40[0] = '\0';
      plVar15 = (int64_t *)plVar5[0x11];
      if (plVar15 != plVar2) {
        if (plVar2 != (int64_t *)0x0) {
LAB_0015b3f9:
          FUN_00d50b00();
        }
        plVar5[0x11] = (int64_t)plVar2;
        if (plVar15 != (int64_t *)0x0) {
LAB_0015b590:
          FUN_00d50b20();
        }
      }
      if (plVar2 != (int64_t *)0x0) {
LAB_0015b59d:
        FUN_00d50b20();
      }
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific((void*)param_1);
    plVar5 = local_38;
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar5 = local_38, lVar7 != 0)) {
      param_1 = local_38;
      plVar5 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    }
    pvVar6 = _pthread_getspecific((void*)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313b00();
    pvVar6 = _pthread_getspecific((void*)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015058d0();
    pvVar6 = _pthread_getspecific((void*)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150eff0();
    FUN_00d23310();
    plVar2 = local_78;
    pcVar8 = local_70;
    if (local_70[0] == '\0') {
      pcVar8 = local_40;
    }
    local_40[0] = local_70[0];
    *pcVar8 = '\0';
    if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40[0] == '\0') {
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b00();
        plVar15 = (int64_t *)plVar5[0x12];
        if (plVar15 != plVar2) goto LAB_0015b783;
        goto LAB_0015b80f;
      }
      if (plVar5[0x12] != 0) {
        plVar5[0x12] = 0;
        goto LAB_0015b802;
      }
    }
    else {
      local_40[0] = '\0';
      plVar15 = (int64_t *)plVar5[0x12];
      if (plVar15 != plVar2) {
        if (plVar2 != (int64_t *)0x0) {
LAB_0015b783:
          FUN_00d50b00();
        }
        plVar5[0x12] = (int64_t)plVar2;
        if (plVar15 != (int64_t *)0x0) {
LAB_0015b802:
          FUN_00d50b20();
        }
      }
      if (plVar2 != (int64_t *)0x0) {
LAB_0015b80f:
        FUN_00d50b20();
      }
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar6 = _pthread_getspecific((void*)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar6 = _pthread_getspecific((void*)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012ca540();
  if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific((void*)param_1);
  if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    lVar7 = local_38[0x11];
  }
  else {
    lVar7 = *(int64_t *)(local_38[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4] + 0x88);
    param_1 = local_38;
  }
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  pvVar6 = _pthread_getspecific((void*)param_1);
  if ((pvVar6 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
    *(void*)(lVar7 + 0x130) = 0;
  }
  else {
    *(void*)
     (*(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8) + 0x130) = 0;
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific((void*)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313b00();
  pvVar6 = _pthread_getspecific((void*)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01505730();
  if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific((void*)param_1);
  if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    lVar7 = local_38[0x12];
  }
  else {
    lVar7 = *(int64_t *)(local_38[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4] + 0x90);
    param_1 = local_38;
  }
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  pvVar6 = _pthread_getspecific((void*)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150fed0();
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific((void*)param_1);
  if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    lVar7 = local_38[0x11];
  }
  else {
    lVar7 = *(int64_t *)(local_38[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4] + 0x88);
    param_1 = local_38;
  }
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  FUN_004f7da0();
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific((void*)param_1);
  if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    lVar7 = local_38[0x11];
  }
  else {
    lVar7 = *(int64_t *)(local_38[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4] + 0x88);
    param_1 = local_38;
  }
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  pvVar6 = _pthread_getspecific((void*)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  if (local_78 == (int64_t *)0x0) {
    bVar16 = false;
  }
  else {
    pvVar6 = _pthread_getspecific((void*)param_1);
    if ((pvVar6 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
      lVar9 = local_38[0x11];
    }
    else {
      lVar9 = *(int64_t *)(local_38[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4] + 0x88);
      param_1 = local_38;
    }
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific((void*)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    bVar16 = *(int *)((int64_t)local_50 + 0xc) != 0;
    if (local_48 != '\0') {
      FUN_00d50b20();
    }
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if (bVar16) {
    pvVar6 = _pthread_getspecific((void*)param_1);
    if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
      lVar7 = local_38[0x11];
    }
    else {
      lVar7 = *(int64_t *)(local_38[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4] + 0x88);
      param_1 = local_38;
    }
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific((void*)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    uVar14 = *(uint *)((int64_t)local_78 + 0xc);
    if (local_70[0] != '\0') {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (0 < (int)uVar14) {
      lVar7 = (uint64_t)uVar14 + 1;
      do {
        uVar14 = uVar14 - 1;
        pvVar6 = _pthread_getspecific((void*)param_1);
        if ((pvVar6 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
          lVar9 = local_38[0x11];
        }
        else {
          lVar9 = *(int64_t *)(local_38[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4] + 0x88);
          param_1 = local_38;
        }
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific((void*)param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar6 = _pthread_getspecific((void*)param_1);
        if ((pvVar6 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
          lVar10 = local_38[0x11];
        }
        else {
          lVar10 = *(int64_t *)(local_38[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4] + 0x88);
          param_1 = local_38;
        }
        pVar12 = (void*)param_1;
        if (lVar10 != 0) {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific(pVar12);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6160();
        param_1 = (int64_t *)(uint64_t)uVar14;
        lVar1 = *(int64_t *)(local_78[2] + (int64_t)param_1 * 8);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        FUN_012e68b0();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar10 != 0) {
          FUN_00d50b20();
        }
        if (lVar9 != 0) {
          FUN_00d50b20();
        }
        lVar7 = lVar7 + -1;
      } while (1 < lVar7);
    }
  }
  pvVar6 = _pthread_getspecific((void*)param_1);
  if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    lVar7 = local_38[0x12];
  }
  else {
    lVar7 = *(int64_t *)(local_38[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4] + 0x90);
    param_1 = local_38;
  }
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  pvVar6 = _pthread_getspecific((void*)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150eff0();
  if (local_78 == (int64_t *)0x0) {
    bVar16 = false;
  }
  else {
    pvVar6 = _pthread_getspecific((void*)param_1);
    if ((pvVar6 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
      lVar9 = local_38[0x12];
    }
    else {
      lVar9 = *(int64_t *)(local_38[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4] + 0x90);
      param_1 = local_38;
    }
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific((void*)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150eff0();
    bVar16 = *(int *)((int64_t)local_50 + 0xc) != 0;
    if (local_48 != '\0') {
      FUN_00d50b20();
    }
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if (bVar16) {
    pvVar6 = _pthread_getspecific((void*)param_1);
    if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
      lVar7 = local_38[0x12];
    }
    else {
      lVar7 = *(int64_t *)(local_38[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4] + 0x90);
      param_1 = local_38;
    }
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific((void*)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150eff0();
    uVar14 = *(uint *)((int64_t)local_78 + 0xc);
    if (local_70[0] != '\0') {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (0 < (int)uVar14) {
      lVar7 = (uint64_t)uVar14 + 1;
      do {
        uVar14 = uVar14 - 1;
        pvVar6 = _pthread_getspecific((void*)param_1);
        if ((pvVar6 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
          lVar9 = local_38[0x12];
        }
        else {
          lVar9 = *(int64_t *)(local_38[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4] + 0x90);
          param_1 = local_38;
        }
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific((void*)param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar6 = _pthread_getspecific((void*)param_1);
        if ((pvVar6 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
          lVar10 = local_38[0x12];
        }
        else {
          lVar10 = *(int64_t *)(local_38[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4] + 0x90);
          param_1 = local_38;
        }
        pVar12 = (void*)param_1;
        if (lVar10 != 0) {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific(pVar12);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0150eff0();
        param_1 = (int64_t *)(uint64_t)uVar14;
        lVar1 = *(int64_t *)(local_78[2] + (int64_t)param_1 * 8);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        FUN_0150f380();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar10 != 0) {
          FUN_00d50b20();
        }
        if (lVar9 != 0) {
          FUN_00d50b20();
        }
        lVar7 = lVar7 + -1;
      } while (1 < lVar7);
    }
  }
  pvVar6 = _pthread_getspecific((void*)param_1);
  plVar5 = local_38;
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar5 = local_38, lVar7 != 0)) {
    param_1 = local_38;
    plVar5 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
  }
  pvVar6 = _pthread_getspecific((void*)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar6 = _pthread_getspecific((void*)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012caf10();
  plVar2 = local_78;
  if (local_70[0] == '\0') {
    if (local_78 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_0015c5c8;
    }
    if (plVar5[0x14] != 0) {
      plVar5[0x14] = 0;
      goto LAB_0015c609;
    }
  }
  else {
    local_70[0] = '\0';
LAB_0015c5c8:
    plVar15 = (int64_t *)plVar5[0x14];
    if (plVar15 != plVar2) {
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      plVar5[0x14] = (int64_t)plVar2;
      if (plVar15 != (int64_t *)0x0) {
LAB_0015c609:
        FUN_00d50b20();
      }
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific((void*)param_1);
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    param_1 = local_38;
  }
  pvVar6 = _pthread_getspecific((void*)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar6 = _pthread_getspecific((void*)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb480();
  if (local_80 == '\0') {
    if (local_88 == 0) goto LAB_0015c794;
    FUN_00d50b00();
  }
  else {
    local_80 = '\0';
    if (local_88 == 0) goto LAB_0015c794;
  }
  local_70[0] = '\0';
  local_78 = (int64_t *)0x0;
  local_5c = 0;
  for (lVar7 = 0; local_60 = (uint32_t)lVar7, lVar7 < *(int *)(local_88 + 0xc); lVar7 = lVar7 + 1)
  {
    local_78 = *(int64_t **)(*(int64_t *)(local_88 + 0x10) + lVar7 * 8);
    local_48 = '\0';
    local_50 = local_78;
    FUN_00155200();
  }
  FUN_00115e00();
  FUN_00d50b20();
LAB_0015c794:
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific((void*)param_1);
  if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    lVar7 = local_38[0x11];
  }
  else {
    lVar7 = *(int64_t *)(local_38[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4] + 0x88);
    param_1 = local_38;
  }
  pVar12 = (void*)param_1;
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  pvVar6 = _pthread_getspecific(pVar12);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  pplVar13 = &local_78;
  FUN_012e78c0();
  plVar5 = local_78;
  if ((g_0270c820 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_027e77e8 = FUN_0015ef90();
    g_027e77d0 = "MULSSGenerator";
    g_027e77d8 = 0x70;
    pVar12 = 0x15ef30;
    g_027e77e0 = FUN_0015ef30;
    g_027e77f0 = 0;
    ram_00000000027e77f8 = 0;
    g_027e7800 = 0;
    ram_00000000027e7808 = 0;
    g_027e7810 = 0;
    ram_00000000027e7818 = 0;
    g_027e7820 = 0;
    ram_00000000027e7828 = 0;
    g_027e7830 = 0;
    ram_00000000027e7838 = 0;
    g_027e7840 = 0;
    ram_00000000027e7848 = 0;
    g_027e7850 = 0;
    ram_00000000027e7858 = 0;
    g_027e7860 = 0;
    ram_00000000027e7868 = 0;
    g_027e7870 = 0;
    ram_00000000027e7878 = 0;
    g_027e7880 = 0;
    ram_00000000027e7888 = 0;
    g_027e7890 = 0;
    ___cxa_guard_release();
  }
  if (plVar5 == (int64_t *)0x0) {
    pplVar13 = &g_02802688;
    plVar5 = g_02802688;
    cVar3 = g_02802690;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') {
      pplVar13 = &g_02802688;
    }
    plVar5 = *pplVar13;
    cVar3 = *(char *)(pplVar13 + 1);
  }
  if (cVar3 == '\0') {
    if (plVar5 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar13 + 1) = 0;
  }
  if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if (plVar5 == (int64_t *)0x0) {
    *this_ptr = local_38;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    pvVar6 = _pthread_getspecific(pVar12);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c6cb0();
    plVar5 = local_78;
    if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar5 == (int64_t *)0x0) {
      pvVar6 = _pthread_getspecific(pVar12);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      puVar11 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar11 = &g_02607248;
      puVar11[7] = 0;
      puVar11[8] = 0;
      puVar11[9] = 0;
      puVar11[10] = 0;
      puVar11[0xb] = 0;
      puVar11[0xc] = 0;
      puVar11[0xd] = 0;
      puVar11[0xe] = 0;
      *(void*)((int64_t)puVar11 + 0x76) = 0;
      puVar11[0x10] = 0;
      puVar11[0x11] = 0;
      puVar11[0x12] = 0;
      puVar11[0x13] = 0;
      puVar11[0x14] = 0;
      puVar11[0x15] = 0;
      puVar11[0x16] = 0;
      puVar11[0x17] = 0;
      puVar11[0x18] = 0;
      puVar11[0x19] = 0;
      puVar11[0x1a] = 0;
      (*g_02607260)();
      FUN_012c64a0();
      if (puVar11 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    *this_ptr = local_38;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 012f56c0
// ============================================================
// Function: FUN_012f56c0
// Address: 012f56c0
// Size: 5254 bytes
// Class: MULSSGenerator

void FUN_012f56c0(void* param_1)

{
  int iVar1;
  int64_t lVar2;
  bool bVar3;
  code *pcVar4;
  char cVar5;
  int64_t lVar6;
  void*puVar7;
  int64_t lVar8;
  void *pvVar9;
  int64_t *plVar10;
  undefined7 uVar12;
  int64_t lVar11;
  void* pVar13;
  int iVar14;
  uint32_t unaff_ESI;
  int64_t *this_ptr;
  uint8_t uVar15;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  uint32_t local_e0;
  int local_dc;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  void*local_b8;
  uint64_t local_b0;
  void*local_a8;
  int64_t local_a0;
  int64_t local_98;
  char local_90 [8];
  int64_t local_88;
  uint64_t local_80;
  int local_78;
  int64_t local_70;
  int64_t local_68;
  int64_t local_58;
  char local_50;
  int local_40;
  
  *(int *)((int64_t)this_ptr + 0x6c) = *(int *)((int64_t)this_ptr + 0x6c) + 1;
  local_e0 = unaff_ESI;
  lVar6 = FUN_00e8b990();
  if (lVar6 != 0) {
    FUN_00e8b990();
    FUN_00cb1f10();
    FUN_00db3260();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02572358;
  pcVar4 = g_02572370;
  local_b8 = puVar7;
  (*g_02572370)();
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02572358;
  (*pcVar4)();
  local_a8 = puVar7;
  local_68 = FUN_012f75b0();
  local_a0 = FUN_012f7690();
  if (this_ptr[0xb] == 0) {
    local_58 = this_ptr[0x16];
    if (local_58 != 0) {
      FUN_00d50b00();
    }
    local_50 = '\0';
    FUN_00d243f0();
    if (local_58 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    lVar6 = this_ptr[0x16];
    if (lVar6 != 0) {
      local_50 = '\0';
      local_58 = 0;
      local_40 = -1;
      while( true ) {
        lVar8 = (int64_t)local_40;
        local_40 = local_40 + 1;
        if (*(int *)(lVar6 + 0xc) <= local_40) break;
        lVar11 = *(int64_t *)(lVar6 + 0x10);
        local_58 = *(int64_t *)(lVar11 + 8 + lVar8 * 8);
        pvVar9 = _pthread_getspecific((void*)lVar11);
        pVar13 = (void*)lVar11;
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01274b60();
        if (local_90[0] == '\0') {
          if (local_98 == 0) goto LAB_012f5950;
          FUN_00d50b00();
          if ((local_90[0] != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
LAB_012f58d0:
          pvVar9 = _pthread_getspecific(pVar13);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar5 = FUN_012754d0(local_68,local_a0);
          if (cVar5 == '\0') {
LAB_012f5a20:
            local_90[0] = '\0';
            local_98 = local_58;
            FUN_00d21140();
            if ((local_90[0] != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            pvVar9 = _pthread_getspecific(pVar13);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar5 = FUN_0129b690(local_68,local_a0);
            if (cVar5 == '\0') goto LAB_012f5a20;
            pvVar9 = _pthread_getspecific(pVar13);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            lVar11 = local_98;
            lVar8 = this_ptr[0xb];
            if ((local_90[0] != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            if (lVar11 != lVar8) goto LAB_012f5a20;
          }
          FUN_00d50b20();
        }
        else {
          if (local_98 != 0) goto LAB_012f58d0;
LAB_012f5950:
          local_90[0] = '\0';
          local_98 = local_58;
          FUN_00d21140();
          if ((local_90[0] != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      FUN_001159b0();
      param_1 = (void*)lVar6;
    }
    lVar6 = local_58;
    pvVar9 = _pthread_getspecific(param_1);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e9900(local_68,local_a0);
    if ((local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
    }
    local_d0 = 0;
    lVar8 = this_ptr[0x16];
    if (lVar8 != 0) {
      FUN_00d50b00();
    }
    local_d0 = '\x01';
    local_d8 = lVar8;
    FUN_012f7770();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    lVar8 = local_58;
    if (local_58 != 0) {
      local_50 = '\0';
      local_58 = 0;
      local_70 = lVar6;
      local_40 = -1;
LAB_012f5ba3:
      lVar8 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (local_40 < *(int *)(lVar6 + 0xc)) {
        lVar11 = *(int64_t *)(lVar6 + 0x10);
        local_58 = *(int64_t *)(lVar11 + 8 + lVar8 * 8);
        pvVar9 = _pthread_getspecific((void*)lVar11);
        pVar13 = (void*)lVar11;
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar5 = FUN_0129b690(local_68,local_a0);
        if (cVar5 != '\0') {
          pvVar9 = _pthread_getspecific(pVar13);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01299fe0();
          lVar8 = local_98;
          if (local_90[0] == '\0') {
            if (local_98 != 0) {
              FUN_00d50b00();
              if ((local_90[0] != '\0') && (local_98 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_012f5cd0;
            }
          }
          else if (local_98 != 0) {
LAB_012f5cd0:
            local_90[0] = '\0';
            local_98 = 0;
            local_88 = lVar8;
            local_80 = 0xffffffff;
            local_78 = 0;
            while( true ) {
              lVar8 = (int64_t)(int)local_80;
              iVar14 = (int)local_80 + 1;
              local_80 = CONCAT44(local_80._4_4_,iVar14);
              if (*(int *)(local_88 + 0xc) <= iVar14) break;
              local_c8 = *(int64_t *)(*(int64_t *)(local_88 + 0x10) + 8 + lVar8 * 8);
              local_c0 = '\0';
              local_98 = local_c8;
              cVar5 = FUN_00d7a850();
              if ((local_c0 != '\0') && (local_c8 != 0)) {
                FUN_00d50b20();
              }
              if (cVar5 != '\0') {
                FUN_001159b0();
                FUN_00d50b20();
                goto LAB_012f5ba3;
              }
              if (local_80._4_4_ != 0) {
                if (local_80._4_4_ < 1) {
                  iVar14 = -local_80._4_4_;
                }
                else {
                  local_80 = CONCAT44(local_80._4_4_,(int)local_80 - local_80._4_4_);
                  FUN_00d23690();
                  local_78 = local_78 + local_80._4_4_;
                  iVar14 = 0;
                }
                local_80 = CONCAT44(iVar14,(int)local_80);
              }
            }
            FUN_001159b0();
            FUN_00d50b20();
          }
          local_90[0] = '\0';
          local_98 = local_58;
          FUN_00d21140();
          if ((local_90[0] != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
        }
        goto LAB_012f5ba3;
      }
      FUN_001159b0();
      lVar8 = local_70;
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
  }
  puVar7 = local_b8;
  local_dc = *(int *)((int64_t)local_b8 + 0xc);
  pVar13 = 0;
  if (local_dc != 0) {
    local_50 = '\0';
    local_58 = 0;
    local_40 = -1;
    while( true ) {
      lVar6 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)((int64_t)puVar7 + 0xc) <= local_40) break;
      lVar8 = puVar7[2];
      local_58 = *(int64_t *)(lVar8 + 8 + lVar6 * 8);
      pvVar9 = _pthread_getspecific((void*)lVar8);
      pVar13 = (void*)lVar8;
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01274b60();
      lVar6 = local_98;
      local_c8 = CONCAT71(local_c8._1_7_,local_90[0]);
      plVar10 = (int64_t *)local_90;
      if (local_90[0] == '\0') {
        plVar10 = &local_c8;
      }
      *(void*)plVar10 = 0;
      if ((local_90[0] != '\0') && (lVar6 != 0)) {
        FUN_00d50b20();
      }
      pvVar9 = _pthread_getspecific(pVar13);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0129a1f0();
      if (((char)local_c8 != '\0') && (lVar6 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_001159b0();
    pVar13 = (void*)puVar7;
    FUN_012edae0();
  }
  if (*(int *)((int64_t)local_a8 + 0xc) == 0) {
    local_b0 = 0;
    local_70 = 0;
  }
  else {
    FUN_00d51d20();
    local_70 = local_58;
    if (local_58 == 0) {
      local_b0 = 0;
      if (local_50 != '\0') {
        local_b0 = 0;
      }
    }
    else {
      uVar12 = (undefined7)((uint64_t)local_58 >> 8);
      local_b0 = CONCAT71(uVar12,1);
      if (local_50 == '\0') {
        local_b0 = CONCAT71(uVar12,1);
        FUN_00d50b00();
      }
    }
    FUN_01298e30();
    lVar6 = local_70;
    if (local_70 != 0) {
      local_50 = '\0';
      local_58 = 0;
      local_40 = -1;
      while( true ) {
        lVar8 = (int64_t)local_40;
        local_40 = local_40 + 1;
        if (*(int *)(lVar6 + 0xc) <= local_40) break;
        local_58 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + 8 + lVar8 * 8);
        lVar8 = local_a8[2];
        lVar11 = *(int64_t *)(lVar8 + (int64_t)local_40 * 8);
        pvVar9 = _pthread_getspecific((void*)lVar8);
        pVar13 = (void*)lVar8;
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01265b80();
        lVar8 = local_98;
        local_68 = lVar11;
        if ((((local_90[0] == '\0') && (local_98 != 0)) && (FUN_00d50b00(), local_90[0] != '\0')) &&
           (local_98 != 0)) {
          FUN_00d50b20();
        }
        pvVar9 = _pthread_getspecific(pVar13);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01265b80();
        lVar11 = local_98;
        if (local_90[0] == '\0') {
          if (local_98 != 0) {
            FUN_00d50b00();
            if ((local_90[0] != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_012f62f1;
          }
        }
        else if (local_98 != 0) {
LAB_012f62f1:
          local_90[0] = '\0';
          local_98 = 0;
          local_a0 = lVar11;
          local_88 = lVar11;
          local_80 = 0xffffffff;
          local_78 = 0;
          local_80._4_4_ = 0;
          while( true ) {
            if (local_80._4_4_ != 0) {
              if (local_80._4_4_ < 1) {
                iVar14 = -local_80._4_4_;
              }
              else {
                iVar14 = (int)local_80 - local_80._4_4_;
                local_80 = CONCAT44(local_80._4_4_,iVar14);
                FUN_00d23690();
                local_78 = local_78 + local_80._4_4_;
                iVar14 = 0;
              }
              local_80 = CONCAT44(iVar14,(int)local_80);
            }
            lVar11 = (int64_t)(int)local_80;
            iVar14 = (int)local_80 + 1;
            local_80 = CONCAT44(local_80._4_4_,iVar14);
            if (*(int *)(local_88 + 0xc) <= iVar14) break;
            local_98 = *(int64_t *)(*(int64_t *)(local_88 + 0x10) + 8 + lVar11 * 8);
            lVar11 = *(int64_t *)(lVar8 + 0x10);
            lVar2 = *(int64_t *)(lVar11 + ((int64_t)iVar14 + (int64_t)local_78) * 8);
            if (lVar2 != 0) {
              FUN_00d50b00();
            }
            pVar13 = (void*)lVar11;
            pvVar9 = _pthread_getspecific(pVar13);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef460();
            lVar11 = local_c8;
            if (((local_c0 == '\0') && (local_c8 != 0)) &&
               ((FUN_00d50b00(), local_c0 != '\0' && (local_c8 != 0)))) {
              FUN_00d50b20();
            }
            pvVar9 = _pthread_getspecific(pVar13);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef3f0();
            if (lVar11 != 0) {
              FUN_00d50b20();
            }
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
          }
          FUN_0015edf0();
          pVar13 = (void*)lVar11;
          FUN_00d50b20();
        }
        pvVar9 = _pthread_getspecific(pVar13);
        if ((pvVar9 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          local_68 = *(int64_t *)(local_68 + 0x20 + (uint64_t)(*(uint *)(lVar11 + 0x154) & 1) * 8)
          ;
        }
        FUN_0129a010();
        if (lVar8 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_001159b0();
    }
    lVar6 = local_70;
    FUN_012e6c30();
    pVar13 = (void*)lVar6;
    FUN_012e7fb0();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_012e7fb0();
      pvVar9 = _pthread_getspecific(pVar13);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150ddd0();
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  lVar6 = local_70;
  if ((char)local_e0 == '\0') {
    local_68 = this_ptr[0x16];
    if (local_68 != 0) {
      uVar15 = 1;
      FUN_00d50b00();
      goto LAB_012f669d;
    }
    local_68 = 0;
    local_a0 = CONCAT71(local_a0._1_7_,1);
joined_r0x012f68e5:
    bVar3 = true;
joined_r0x012f68e5:
    if (local_dc == 0) goto LAB_012f6949;
  }
  else {
    if (((char)local_b0 == '\0') || (local_70 == 0)) {
      if (local_70 == 0) {
        local_a0 = CONCAT71(local_a0._1_7_,(char)local_b0);
        local_68 = local_70;
        goto joined_r0x012f68e5;
      }
      local_a0 = CONCAT71(local_a0._1_7_,(char)local_b0);
      iVar14 = *(int *)(local_70 + 0xc);
    }
    else {
      FUN_00d50b00();
      uVar15 = (uint8_t)local_b0;
      local_68 = lVar6;
LAB_012f669d:
      local_a0 = CONCAT71(local_a0._1_7_,uVar15);
      iVar14 = *(int *)(local_68 + 0xc);
      lVar6 = local_68;
    }
    local_68 = lVar6;
    if (iVar14 == 0) {
      bVar3 = false;
      goto joined_r0x012f68e5;
    }
    local_58 = 0;
    local_40 = -1;
    while( true ) {
      lVar8 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar6 + 0xc) <= local_40) break;
      local_58 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + 8 + lVar8 * 8);
      pvVar9 = _pthread_getspecific((void*)*(int64_t *)(lVar6 + 0x10));
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0129b6c0();
    }
    FUN_001159b0();
    local_110 = 0;
    local_108 = '\0';
    plVar10 = &local_110;
    FUN_01271d60(plVar10,1);
    pVar13 = (void*)plVar10;
    if (local_58 != 0) {
      FUN_00d50b00();
    }
    local_50 = '\0';
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
    local_100 = local_68;
    local_f8 = '\0';
    local_f0 = local_58;
    local_e8 = '\0';
    FUN_0127e4d0(g_023b67d8);
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    bVar3 = false;
  }
  *(void*)((int64_t)this_ptr + 0x6b) = 0;
  (**(code **)(*this_ptr + 0x370))();
LAB_012f6949:
  lVar6 = this_ptr[0xb];
  pvVar9 = _pthread_getspecific(pVar13);
  if (pvVar9 != (void *)0x0) {
    lVar6 = this_ptr[0xb];
    lVar8 = FUN_00e8b990();
    if (lVar8 != 0) {
      lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
  }
  lVar6 = *(int64_t *)(lVar6 + 0xb8);
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  pvVar9 = _pthread_getspecific(pVar13);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f2240();
  iVar14 = *(int *)(local_58 + 0xc);
  lVar8 = this_ptr[0x17];
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  pvVar9 = _pthread_getspecific(pVar13);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f2240();
  iVar1 = *(int *)(local_98 + 0xc);
  if (local_90[0] != '\0') {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (iVar14 != iVar1) {
    pvVar9 = _pthread_getspecific(pVar13);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    if (this_ptr[0x17] != local_58) {
      FUN_00d64850();
      lVar8 = this_ptr[0x17];
      if (lVar8 != local_58) {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
        this_ptr[0x17] = local_58;
        if (lVar8 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00d64910();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar8 = FUN_00e8b990();
  if (lVar8 != 0) {
    FUN_00e8b990();
    FUN_00cb1f10();
    FUN_00db3270();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  *(int *)((int64_t)this_ptr + 0x6c) = *(int *)((int64_t)this_ptr + 0x6c) + -1;
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if ((char)local_a0 != '\0' && !bVar3) {
    FUN_00d50b20();
  }
  if (((char)local_b0 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (local_a8 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_b8 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 005228a0
// ============================================================
// Function: FUN_005228a0
// Address: 005228a0
// Size: 3465 bytes
// Class: MULSSGenerator
// String references:
//   "MULSSGenerator"

void FUN_005228a0(uint param_1,uint64_t param_2,size_t param_3)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  uint8_t uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int64_t **pplVar8;
  int64_t lVar9;
  void *pvVar10;
  code *pcVar11;
  int64_t lVar12;
  void* pVar13;
  code *pcVar14;
  uint uVar15;
  int iVar16;
  void *pvVar17;
  char *pcVar18;
  uint64_t uVar19;
  int64_t *this_ptr;
  uint64_t uVar20;
  void *pvVar21;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar22;
  uint32_t extraout_XMM0_Da_00;
  float fVar23;
  int64_t *local_1a8;
  char local_1a0 [8];
  int64_t local_198;
  uint64_t local_190;
  int local_188;
  uint local_180;
  uint32_t local_17c;
  uint64_t local_178;
  float local_16c;
  code *local_168;
  char local_160 [8];
  int64_t local_158;
  char local_150;
  int64_t local_38;
  
  pvVar21 = (void *)(uint64_t)param_1;
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  if ((this_ptr[0x1d] == 0) && (this_ptr[0x4f] == 0)) goto LAB_00523487;
  if ((this_ptr[0x61] == 0) || ((char)this_ptr[0x6b] == '\0')) {
    param_3 = FUN_00b33590();
    uVar22 = FUN_00b33520();
    pvVar17 = (void *)((int64_t)&segment_command_00000020.vmsize + 4);
    pvVar10 = pvVar21;
    FUN_00ae9b20(pvVar21,0x44,param_3,uVar22);
    lVar9 = this_ptr[0x61];
  }
  else {
    uVar6 = FUN_00b33590();
    pvVar10 = (void *)(uint64_t)uVar6;
    pvVar17 = pvVar21;
    FUN_00ae9740();
    lVar9 = this_ptr[0x61];
  }
  if (lVar9 == 0) {
    cVar3 = FUN_00e316d0();
    if (cVar3 == '\0') goto LAB_00523487;
    *(void*)((int64_t)this_ptr + 0x2e4) = 0;
  }
  (**(code **)(*(int64_t *)this_ptr[0x21] + 0x498))();
  lVar9 = local_158;
  if ((local_150 != '\0') && (local_158 != 0)) {
    FUN_00d50b20();
  }
  if (lVar9 != 0) {
    (**(code **)(*(int64_t *)this_ptr[0x21] + 0x498))();
    FUN_00cbc280();
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
    _pthread_setspecific((void*)pvVar10,pvVar17);
  }
  uVar7 = FUN_00b33120();
  uVar6 = FUN_00b33130();
  if ((int)uVar6 < (int)uVar7) {
    uVar6 = uVar7;
  }
  uVar15 = 0x24;
  if ((int)uVar6 < 0x24) {
    uVar15 = uVar6;
  }
  local_180 = uVar7;
  FUN_00516d30(extraout_XMM0_Da,uVar15);
  _memcpy(pvVar10,section_00000108.segname + 8,param_3);
  FUN_00b31a00();
  plVar1 = local_1a8;
  pcVar14 = CONCAT71((int7)((uint64_t)pvVar10 >> 8),local_1a0[0]);
  pcVar18 = local_160;
  if (local_1a0[0] != '\0') {
    pcVar18 = local_1a0;
  }
  local_160[0] = local_1a0[0];
  *pcVar18 = '\0';
  if ((local_1a0[0] != '\0') && (local_1a8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar4 = FUN_00bc4910();
  *(void*)(this_ptr + 0x49) = uVar4;
  lVar9 = FUN_00e7d6f0();
  this_ptr[0x48] = lVar9;
  *(void*)((int64_t)this_ptr + 0x249) = 1;
  uVar22 = FUN_00523880();
  if (this_ptr[0x61] == 0) {
    FUN_011ee3f0(uVar22,pvVar21);
    cVar3 = (**(code **)(*this_ptr + 0x420))();
    if (cVar3 != '\0') {
      FUN_013fd5b0();
      FUN_013fe5f0();
      if ((local_1a0[0] != '\0') && (local_1a8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  cVar3 = FUN_00bc4910();
  if (cVar3 == '\0') {
    FUN_00521f90(extraout_XMM0_Da_00,pvVar21);
  }
  else {
    FUN_00520990(extraout_XMM0_Da_00,pvVar21);
  }
  uVar6 = (uint)pcVar14;
  if (this_ptr[0x61] != 0) goto LAB_00522b82;
  lVar9 = this_ptr[0x22];
  local_178 = 0;
  pvVar10 = _pthread_getspecific(uVar6);
  if (pvVar10 != (void *)0x0) {
    lVar9 = this_ptr[0x22];
    local_178 = 0;
    lVar12 = FUN_00e8b990();
    if (lVar12 != 0) {
      lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
    }
  }
  if ((*(float *)(lVar9 + 0x54) != 0.0) || (NAN(*(float *)(lVar9 + 0x54)))) {
LAB_00522c7b:
    FUN_0051b4f0();
    uVar6 = (uint)pcVar14;
    if (local_1a0[0] == '\0') {
      if (local_1a8 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_1a0[0] != '\0') && (local_1a8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00522cdc;
      }
    }
    else if (local_1a8 != (int64_t *)0x0) {
LAB_00522cdc:
      pvVar10 = _pthread_getspecific((void*)pcVar14);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      pplVar8 = &local_1a8;
      FUN_012e78c0();
      plVar2 = local_1a8;
      if ((g_0270c820 == '\0') && (iVar16 = ___cxa_guard_acquire(), iVar16 != 0)) {
        g_027e77e8 = FUN_0015ef90();
        g_027e77d0 = "MULSSGenerator";
        g_027e77d8 = 0x70;
        pcVar14 = FUN_0015ef30;
        g_027e77e0 = FUN_0015ef30;
        g_027e77f0 = 0;
        ram_00000000027e77f8 = 0;
        g_027e7800 = 0;
        ram_00000000027e7808 = 0;
        g_027e7810 = 0;
        ram_00000000027e7818 = 0;
        g_027e7820 = 0;
        ram_00000000027e7828 = 0;
        g_027e7830 = 0;
        ram_00000000027e7838 = 0;
        g_027e7840 = 0;
        ram_00000000027e7848 = 0;
        g_027e7850 = 0;
        ram_00000000027e7858 = 0;
        g_027e7860 = 0;
        ram_00000000027e7868 = 0;
        g_027e7870 = 0;
        ram_00000000027e7878 = 0;
        g_027e7880 = 0;
        ram_00000000027e7888 = 0;
        g_027e7890 = 0;
        ___cxa_guard_release();
      }
      if (plVar2 == (int64_t *)0x0) {
        pplVar8 = (int64_t **)&g_02802688;
        pcVar11 = g_02802688;
        if (g_02802688 != 0x0) goto LAB_00522d7b;
LAB_00522d9d:
        local_178 = 0;
        pcVar11 = 0x0;
      }
      else {
        (**(code **)(*plVar2 + 0x360))();
        cVar3 = FUN_00e85ea0();
        if (cVar3 == '\0') {
          pplVar8 = (int64_t **)&g_02802688;
        }
        pcVar11 = *pplVar8;
        if (*pplVar8 == 0x0) goto LAB_00522d9d;
LAB_00522d7b:
        if (*(char *)(pplVar8 + 1) == '\0') {
          pplVar8 = (int64_t **)FUN_00d50b00();
        }
        else {
          *(void*)(pplVar8 + 1) = 0;
        }
        local_178 = CONCAT71((int7)((uint64_t)pplVar8 >> 8),1);
      }
      if ((local_1a0[0] != '\0') && (local_1a8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pVar13 = (void*)pcVar14;
      if (pcVar11 == 0x0) {
        local_16c = 0.0;
        local_17c = 0;
      }
      else {
        pvVar10 = _pthread_getspecific(pVar13);
        pcVar14 = pcVar11;
        if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          pcVar14 = *(code **)(pcVar11 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8 + 0x20);
        }
        local_17c = *(void*)(pcVar14 + 0x44);
        pvVar10 = _pthread_getspecific(pVar13);
        pcVar14 = pcVar11;
        if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          pcVar14 = *(code **)(pcVar11 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8 + 0x20);
        }
        local_16c = *(float *)(pcVar14 + 0x40);
        lVar9 = this_ptr[0x22];
        pvVar10 = _pthread_getspecific(pVar13);
        if (pvVar10 != (void *)0x0) {
          lVar9 = this_ptr[0x22];
          lVar12 = FUN_00e8b990();
          if (lVar12 != 0) {
            lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
          }
        }
        local_168 = CONCAT44(local_168._4_4_,*(void*)(lVar9 + 0x54));
        lVar9 = this_ptr[0x22];
        pvVar10 = _pthread_getspecific(pVar13);
        if (pvVar10 != (void *)0x0) {
          lVar9 = this_ptr[0x22];
          lVar12 = FUN_00e8b990();
          if (lVar12 != 0) {
            lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
          }
        }
        local_168 = CONCAT44(local_168._4_4_,local_168._0_4_ * *(float *)(lVar9 + 0x58));
        pvVar10 = _pthread_getspecific(pVar13);
        pcVar14 = pcVar11;
        if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          pcVar14 = *(code **)(pcVar11 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8 + 0x20);
        }
        *(float *)(pcVar14 + 0x40) = local_168._0_4_;
        lVar9 = this_ptr[0x22];
        pvVar10 = _pthread_getspecific(pVar13);
        if (pvVar10 != (void *)0x0) {
          lVar9 = this_ptr[0x22];
          lVar12 = FUN_00e8b990();
          if (lVar12 != 0) {
            lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
          }
        }
        local_168 = CONCAT44(local_168._4_4_,*(void*)(lVar9 + 0x5c));
        lVar9 = this_ptr[0x22];
        pvVar10 = _pthread_getspecific(pVar13);
        if (pvVar10 != (void *)0x0) {
          lVar9 = this_ptr[0x22];
          lVar12 = FUN_00e8b990();
          if (lVar12 != 0) {
            lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
          }
        }
        local_168 = CONCAT44(local_168._4_4_,local_168._0_4_ * *(float *)(lVar9 + 0x60));
        pvVar10 = _pthread_getspecific(pVar13);
        pcVar14 = pcVar11;
        if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          pcVar14 = *(code **)(pcVar11 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8 + 0x20);
        }
        *(float *)(pcVar14 + 0x44) = local_168._0_4_;
      }
      uVar6 = (uint)pcVar14;
      FUN_00d50b20();
      goto LAB_0052307e;
    }
LAB_00522b82:
    local_17c = 0;
    local_178 = 0;
    local_16c = 0.0;
    pcVar11 = 0x0;
  }
  else {
    lVar9 = this_ptr[0x22];
    local_178 = 0;
    pvVar10 = _pthread_getspecific((void*)pcVar14);
    if (pvVar10 != (void *)0x0) {
      lVar9 = this_ptr[0x22];
      local_178 = 0;
      lVar12 = FUN_00e8b990();
      if (lVar12 != 0) {
        lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
      }
    }
    uVar6 = (uint)pcVar14;
    if ((*(float *)(lVar9 + 0x5c) != 0.0) || (NAN(*(float *)(lVar9 + 0x5c)))) goto LAB_00522c7b;
    local_17c = 0;
    local_178 = 0;
    local_16c = 0.0;
    pcVar11 = 0x0;
  }
LAB_0052307e:
  local_168 = pcVar11;
  lVar9 = FUN_00bc4920();
  this_ptr[0x4e] = lVar9;
  if (this_ptr[0x4f] != 0) {
    FUN_012dda10();
    pvVar10 = pvVar21;
    (**(code **)(*(int64_t *)this_ptr[0x4f] + 0x400))(pvVar21,&local_158);
    cVar3 = (**(code **)(*(int64_t *)this_ptr[0x4f] + 0x5e8))();
    uVar6 = (uint)pvVar10;
    if (cVar3 != '\0') {
      fVar23 = *(float *)(this_ptr + 0x52);
      if ((((fVar23 != g_02390124) || (NAN(fVar23) || NAN(g_02390124))) && (0 < (int)param_1))
         && (0 < (int)local_180)) {
        uVar20 = (uint64_t)local_180;
        if ((fVar23 != 0.0) || (NAN(fVar23))) {
          uVar19 = 0;
          do {
            if ((&local_158)[uVar19] != 0) {
              (**(code **)(g_02786500 + 0x20))(fVar23);
            }
            uVar6 = (uint)pvVar10;
            uVar19 = uVar19 + 1;
          } while (uVar20 != uVar19);
        }
        else {
          uVar19 = 0;
          do {
            if ((&local_158)[uVar19] != 0) {
              (**(code **)(g_02786500 + 0x40))();
            }
            uVar6 = (uint)pvVar10;
            uVar19 = uVar19 + 1;
          } while (uVar20 != uVar19);
        }
      }
    }
  }
  pcVar14 = local_168;
  if (this_ptr[0x1d] != 0) {
    FUN_012dda10();
    uVar6 = param_1;
    (**(code **)(*(int64_t *)this_ptr[0x1d] + 0x400))(pvVar21,&local_158);
  }
  if (pcVar14 != 0x0) {
    pvVar10 = _pthread_getspecific(uVar6);
    pcVar11 = pcVar14;
    if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      pcVar11 = *(code **)(pcVar14 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8 + 0x20);
    }
    *(float *)(pcVar11 + 0x40) = local_16c;
    pvVar10 = _pthread_getspecific(uVar6);
    if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      pcVar14 = *(code **)(pcVar14 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8 + 0x20);
    }
    *(void*)(pcVar14 + 0x44) = local_17c;
  }
  cVar3 = (**(code **)(*this_ptr + 0x5a8))();
  if (cVar3 == '\0') {
    lVar9 = this_ptr[0x22];
    pvVar10 = _pthread_getspecific(uVar6);
    if (pvVar10 != (void *)0x0) {
      lVar9 = this_ptr[0x22];
      lVar12 = FUN_00e8b990();
      if (lVar12 != 0) {
        lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
      }
    }
    fVar23 = *(float *)(lVar9 + 0x50);
    if ((((fVar23 != g_02390124) || (NAN(fVar23) || NAN(g_02390124))) && (0 < (int)param_1)) &&
       (0 < (int)local_180)) {
      uVar20 = (uint64_t)local_180;
      if ((fVar23 != 0.0) || (NAN(fVar23))) {
        uVar19 = 0;
        local_16c = fVar23;
        do {
          if ((&local_158)[uVar19] != 0) {
            (**(code **)(g_02786500 + 0x20))(fVar23);
            fVar23 = local_16c;
          }
          uVar19 = uVar19 + 1;
        } while (uVar20 != uVar19);
      }
      else {
        uVar19 = 0;
        do {
          if ((&local_158)[uVar19] != 0) {
            (**(code **)(g_02786500 + 0x40))();
          }
          uVar19 = uVar19 + 1;
        } while (uVar20 != uVar19);
      }
    }
  }
  pcVar14 = local_168;
  bVar5 = FUN_00bc4910();
  pVar13 = (void*)bVar5;
  pvVar10 = pvVar21;
  FUN_00523d70(bVar5,pvVar21,local_180);
  FUN_005224d0();
  if (this_ptr[0x5d] != 0) {
    local_1a0[0] = '\0';
    local_1a8 = (int64_t *)0x0;
    local_190 = 0xffffffff;
    local_188 = 0;
    local_198 = this_ptr[0x5d];
    while( true ) {
      lVar9 = (int64_t)(int)local_190;
      uVar6 = (int)local_190 + 1;
      pvVar10 = (void *)(uint64_t)uVar6;
      local_190 = CONCAT44(local_190._4_4_,uVar6);
      if (*(int *)(local_198 + 0xc) <= (int)uVar6) break;
      local_1a8 = *(int64_t **)(*(int64_t *)(local_198 + 0x10) + 8 + lVar9 * 8);
      (**(code **)(*local_1a8 + 0x400))(pvVar21,param_2);
      if (local_190._4_4_ != 0) {
        if (local_190 < 0) {
          iVar16 = -local_190._4_4_;
        }
        else {
          local_190 = CONCAT44(local_190._4_4_,(int)local_190 - local_190._4_4_);
          FUN_00d23690();
          local_188 = local_188 + local_190._4_4_;
          iVar16 = 0;
        }
        local_190 = CONCAT44(iVar16,(int)local_190);
      }
    }
    lVar9 = local_198;
    FUN_00540a20();
    pVar13 = (void*)lVar9;
  }
  (**(code **)(*(int64_t *)this_ptr[0x21] + 0x498))();
  plVar2 = local_1a8;
  if ((local_1a0[0] != '\0') && (local_1a8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    _pthread_setspecific(pVar13,pvVar10);
    (**(code **)(*(int64_t *)this_ptr[0x21] + 0x498))();
    FUN_00cbc2a0();
    if ((local_1a0[0] != '\0') && (local_1a8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (this_ptr[0x61] == 0) {
    FUN_00e31730();
  }
  if (((char)local_178 != '\0') && (pcVar14 != 0x0)) {
    FUN_00d50b20();
  }
  if ((local_160[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_00523487:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return;
}



// ============================================================
// 012cce00
// ============================================================
// Function: FUN_012cce00
// Address: 012cce00
// Size: 4151 bytes
// Class: MULSSGenerator
// String references:
//   "MULSSGenerator"

void FUN_012cce00(uint32_t param_1)

{
  int64_t ******pppppplVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  int64_t lVar7;
  void*puVar8;
  int64_t *******ppppppplVar9;
  void* pVar10;
  int64_t *******in_RCX;
  code *pcVar11;
  char *pcVar12;
  char unaff_SIL;
  int64_t this_ptr;
  int64_t *******ppppppplVar13;
  int64_t *******ppppppplVar14;
  bool bVar15;
  int64_t local_60;
  char local_58;
  int64_t *******local_50;
  int64_t ******local_48;
  int64_t *******local_40;
  int64_t ******local_38;
  
  pVar10 = (void*)in_RCX;
  ppppppplVar13 = *(int64_t ********)(this_ptr + 0x40);
  if (ppppppplVar13 == (int64_t *******)0x0) {
    if (*(int64_t *)(this_ptr + 0x68) == 0) {
      param_1 = FUN_01240d70();
      ppppppplVar14 = *(int64_t ********)(this_ptr + 0x68);
      ppppppplVar9 = ppppppplVar14;
      if (ppppppplVar14 != local_50) {
        if ((char)local_48 == '\0') {
          if (local_50 == (int64_t *******)0x0) {
            ppppppplVar9 = (int64_t *******)0x0;
            goto LAB_012cce61;
          }
          param_1 = FUN_00d50b00();
          in_RCX = *(int64_t ********)(this_ptr + 0x68);
          *(int64_t ********)(this_ptr + 0x68) = local_50;
          ppppppplVar9 = local_50;
        }
        else {
          local_48._0_1_ = '\0';
          ppppppplVar9 = local_50;
LAB_012cce61:
          *(int64_t ********)(this_ptr + 0x68) = ppppppplVar9;
          in_RCX = ppppppplVar14;
        }
        if (in_RCX != (int64_t *******)0x0) {
          param_1 = FUN_00d50b20();
          ppppppplVar9 = local_50;
        }
      }
      if (((char)local_48 != '\0') && (ppppppplVar9 != (int64_t *******)0x0)) {
        param_1 = FUN_00d50b20();
      }
    }
    lVar7 = g_027bed58;
    if (g_027bed58 != 0) {
      param_1 = FUN_00d50b00();
    }
    FUN_012c9770(param_1,0);
    if ((local_50 != (int64_t *******)0x0) && (ppppppplVar13 = local_50, (char)local_48 == '\0')) {
      FUN_00d50b00();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific((void*)in_RCX);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar6 = _pthread_getspecific((void*)in_RCX);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012407c0();
    FUN_00d23310();
    ppppppplVar14 = local_50;
    pVar10 = (void*)CONCAT71((int7)((uint64_t)in_RCX >> 8),(char)local_48);
    pcVar12 = (char *)&local_38;
    if ((char)local_48 != '\0') {
      pcVar12 = (char *)&local_48;
    }
    local_38._0_1_ = (char)local_48;
    *pcVar12 = '\0';
    if (((char)local_48 != '\0') && (local_50 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_38 == '\0') && (ppppppplVar14 != (int64_t *******)0x0)) {
      FUN_00d50b00();
    }
    FUN_012e89e0();
    if (ppppppplVar14 != (int64_t *******)0x0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    FUN_012ca540();
  }
  else {
    FUN_00d50b00();
  }
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  if (*(int *)((int64_t)local_50 + 0xc) == 0) {
    bVar15 = true;
  }
  else {
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    bVar15 = *(int *)(local_60 + 0xc) != 0;
    if (local_58 != '\0') {
      FUN_00d50b20();
    }
  }
  if (((char)local_48 != '\0') && (local_50 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar15) goto LAB_012cdd8e;
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6000();
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar4 = FUN_012e57e0();
  pcVar11 = (uint64_t)uVar4;
  FUN_012c9ae0(pcVar11,0);
  local_40 = local_50;
  if (((char)local_48 == '\0') && (local_50 != (int64_t *******)0x0)) {
    FUN_00d50b00();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific((void*)pcVar11);
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    pcVar11 = local_40;
  }
  pvVar6 = _pthread_getspecific((void*)pcVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e57e0();
  FUN_012e57a0();
  pvVar6 = _pthread_getspecific((void*)pcVar11);
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    pcVar11 = local_40;
  }
  pvVar6 = _pthread_getspecific((void*)pcVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8a60();
  ppppppplVar14 = local_50;
  if ((char)local_48 == '\0') {
    if (local_50 != (int64_t *******)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48._0_1_ = '\0';
  }
  FUN_012e89e0();
  if (ppppppplVar14 != (int64_t *******)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific((void*)pcVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  iVar5 = *(int *)((int64_t)local_50 + 0xc);
  if ((char)local_48 != '\0') {
    FUN_00d50b20();
  }
  if (iVar5 == 0) {
    pvVar6 = _pthread_getspecific((void*)pcVar11);
    lVar7 = g_0276c080;
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
      lVar7 = g_0276c080;
    }
    g_0276c080 = lVar7;
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    FUN_012e5f80();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    pvVar6 = _pthread_getspecific((void*)pcVar11);
    lVar7 = g_0276ce70;
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
      lVar7 = g_0276ce70;
    }
    g_0276ce70 = lVar7;
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    FUN_012e5f80();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
  }
  pvVar6 = _pthread_getspecific((void*)pcVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e89e0();
  pvVar6 = _pthread_getspecific((void*)pcVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7d10();
  ppppppplVar14 = local_50;
  if (((char)local_48 != '\0') && (local_50 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if (ppppppplVar14 == (int64_t *******)0x0) {
    pvVar6 = _pthread_getspecific((void*)pcVar11);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7900();
  }
  if (unaff_SIL != '\0') {
    pvVar6 = _pthread_getspecific((void*)pcVar11);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    ppppppplVar14 = (int64_t *******)&local_50;
    FUN_012e78c0();
    ppppppplVar9 = local_50;
    if ((g_0270c820 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      g_027e77e8 = FUN_0015ef90();
      g_027e77d0 = "MULSSGenerator";
      g_027e77d8 = 0x70;
      pcVar11 = FUN_0015ef30;
      g_027e77e0 = FUN_0015ef30;
      g_027e77f0 = 0;
      ram_00000000027e77f8 = 0;
      g_027e7800 = 0;
      ram_00000000027e7808 = 0;
      g_027e7810 = 0;
      ram_00000000027e7818 = 0;
      g_027e7820 = 0;
      ram_00000000027e7828 = 0;
      g_027e7830 = 0;
      ram_00000000027e7838 = 0;
      g_027e7840 = 0;
      ram_00000000027e7848 = 0;
      g_027e7850 = 0;
      ram_00000000027e7858 = 0;
      g_027e7860 = 0;
      ram_00000000027e7868 = 0;
      g_027e7870 = 0;
      ram_00000000027e7878 = 0;
      g_027e7880 = 0;
      ram_00000000027e7888 = 0;
      g_027e7890 = 0;
      ___cxa_guard_release();
    }
    if (ppppppplVar9 == (int64_t *******)0x0) {
LAB_012cd677:
      ppppppplVar14 = (int64_t *******)&g_02802688;
    }
    else {
      (*(*ppppppplVar9)[0x6c])();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_012cd677;
    }
    pppppplVar1 = *ppppppplVar14;
    if (*(char *)(ppppppplVar14 + 1) == '\0') {
      if (pppppplVar1 != (int64_t ******)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(ppppppplVar14 + 1) = 0;
    }
    if (((char)local_48 != '\0') && (local_50 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    if (pppppplVar1 != (int64_t ******)0x0) {
      pvVar6 = _pthread_getspecific((void*)pcVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c6cb0();
      ppppppplVar14 = local_50;
      if (((char)local_48 != '\0') && (local_50 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      if (ppppppplVar14 == (int64_t *******)0x0) {
        pvVar6 = _pthread_getspecific((void*)pcVar11);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        puVar8 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        pcVar11 = &g_02607248;
        *puVar8 = &g_02607248;
        puVar8[7] = 0;
        puVar8[8] = 0;
        puVar8[9] = 0;
        puVar8[10] = 0;
        puVar8[0xb] = 0;
        puVar8[0xc] = 0;
        puVar8[0xd] = 0;
        puVar8[0xe] = 0;
        *(void*)((int64_t)puVar8 + 0x76) = 0;
        puVar8[0x10] = 0;
        puVar8[0x11] = 0;
        puVar8[0x12] = 0;
        puVar8[0x13] = 0;
        puVar8[0x14] = 0;
        puVar8[0x15] = 0;
        puVar8[0x16] = 0;
        puVar8[0x17] = 0;
        puVar8[0x18] = 0;
        puVar8[0x19] = 0;
        puVar8[0x1a] = 0;
        (*g_02607260)();
        FUN_012c64a0();
        if (puVar8 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
  }
  pvVar6 = _pthread_getspecific((void*)pcVar11);
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    pcVar11 = local_40;
  }
  FUN_012e6520();
  pcVar2 = g_02607260;
  while( true ) {
    pVar10 = (void*)pcVar11;
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    iVar5 = *(int *)((int64_t)local_50 + 0xc);
    if (((char)local_48 != '\0') && (local_50 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    ppppppplVar14 = local_40;
    if (iVar5 == 0) break;
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    FUN_00d23310();
    ppppppplVar14 = local_50;
    local_38._0_1_ = (char)local_48;
    pcVar11 = &local_38;
    ppppppplVar9 = &local_48;
    if ((char)local_48 == '\0') {
      ppppppplVar9 = (int64_t *******)pcVar11;
    }
    *ppppppplVar9 = (code)0x0;
    if (((char)local_48 != '\0') && (local_50 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_38 == '\0') && (ppppppplVar14 != (int64_t *******)0x0)) {
      FUN_00d50b00();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific((void*)pcVar11);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e68b0();
    pvVar6 = _pthread_getspecific((void*)pcVar11);
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      pcVar11 = local_40;
    }
    FUN_012e6520();
    if (unaff_SIL != '\0') {
      pvVar6 = _pthread_getspecific((void*)pcVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e78c0();
      ppppppplVar9 = local_50;
      if ((g_0270c820 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
        g_027e77e8 = FUN_0015ef90();
        g_027e77d0 = "MULSSGenerator";
        g_027e77d8 = 0x70;
        g_027e77e0 = FUN_0015ef30;
        g_027e77f0 = 0;
        ram_00000000027e77f8 = 0;
        g_027e7800 = 0;
        ram_00000000027e7808 = 0;
        g_027e7810 = 0;
        ram_00000000027e7818 = 0;
        g_027e7820 = 0;
        ram_00000000027e7828 = 0;
        g_027e7830 = 0;
        ram_00000000027e7838 = 0;
        g_027e7840 = 0;
        ram_00000000027e7848 = 0;
        g_027e7850 = 0;
        ram_00000000027e7858 = 0;
        g_027e7860 = 0;
        ram_00000000027e7868 = 0;
        g_027e7870 = 0;
        ram_00000000027e7878 = 0;
        g_027e7880 = 0;
        ram_00000000027e7888 = 0;
        g_027e7890 = 0;
        ___cxa_guard_release();
      }
      pcVar11 = &g_02802688;
      if (ppppppplVar9 != (int64_t *******)0x0) {
        (*(*ppppppplVar9)[0x6c])();
        cVar3 = FUN_00e85ea0();
        pcVar11 = &local_50;
        if (cVar3 == '\0') {
          pcVar11 = &g_02802688;
        }
      }
      pppppplVar1 = *(int64_t *******)pcVar11;
      if (*((int64_t)pcVar11 + 8) == (code)0x0) {
        if (pppppplVar1 != (int64_t ******)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *((int64_t)pcVar11 + 8) = (code)0x0;
      }
      if (((char)local_48 != '\0') && (local_50 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      if (pppppplVar1 != (int64_t ******)0x0) {
        pvVar6 = _pthread_getspecific((void*)pcVar11);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c6cb0();
        ppppppplVar9 = local_50;
        if (((char)local_48 != '\0') && (local_50 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
        if (ppppppplVar9 == (int64_t *******)0x0) {
          pvVar6 = _pthread_getspecific((void*)pcVar11);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          puVar8 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar8 = &g_02607248;
          puVar8[7] = 0;
          puVar8[8] = 0;
          puVar8[9] = 0;
          puVar8[10] = 0;
          puVar8[0xb] = 0;
          puVar8[0xc] = 0;
          puVar8[0xd] = 0;
          puVar8[0xe] = 0;
          *(void*)((int64_t)puVar8 + 0x76) = 0;
          puVar8[0x10] = 0;
          puVar8[0x11] = 0;
          puVar8[0x12] = 0;
          puVar8[0x13] = 0;
          puVar8[0x14] = 0;
          puVar8[0x15] = 0;
          puVar8[0x16] = 0;
          puVar8[0x17] = 0;
          puVar8[0x18] = 0;
          puVar8[0x19] = 0;
          puVar8[0x1a] = 0;
          (*pcVar2)();
          FUN_012c64a0();
          if (puVar8 != (void*)0x0) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
    }
    if (ppppppplVar14 != (int64_t *******)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_012ca540();
  if (ppppppplVar14 != (int64_t *******)0x0) {
    FUN_00d50b20();
  }
LAB_012cdd8e:
  if (ppppppplVar13 != (int64_t *******)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01bd7b90
// ============================================================
// Function: FUN_01bd7b90
// Address: 01bd7b90
// Size: 2891 bytes
// Class: MULSSGenerator
// String references:
//   "MULSSGenerator"

void FUN_01bd7b90(uint64_t param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int64_t **pplVar4;
  void *pvVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int64_t lVar8;
  void*puVar9;
  void* pVar10;
  int64_t **pplVar11;
  int64_t this_ptr;
  uint64_t unaff_R13;
  undefined7 uVar12;
  bool bVar13;
  int64_t local_88;
  int64_t local_80;
  int64_t *local_78;
  int64_t local_70;
  uint64_t local_68;
  int local_60;
  void*local_58;
  int64_t *local_50;
  char local_48;
  uint32_t local_3c;
  
  uVar1 = *(uint *)(*(int64_t *)(this_ptr + 0x78) + 0xc);
  pplVar4 = (int64_t **)(uint64_t)uVar1;
  if (uVar1 == 1) {
    if (*(int64_t *)(this_ptr + 0x98) != 0) {
      unaff_R13 = 0;
      FUN_00d50130();
      if (*(int64_t *)(this_ptr + 0x98) != 0) {
        *(void*)(this_ptr + 0x98) = 0;
        unaff_R13 = 0;
        FUN_00d50b20();
      }
    }
    FUN_00d23310();
    pplVar4 = &local_78;
    pVar10 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),(char)local_78);
    pplVar11 = &local_50;
    if ((char)local_78 != '\0') {
      pplVar11 = pplVar4;
    }
    local_50 = (int64_t *)CONCAT71(local_50._1_7_,(char)local_78);
    *(void*)pplVar11 = 0;
    if (((char)local_78 != '\0') && (local_80 != 0)) {
      pplVar4 = (int64_t **)FUN_00d50b20();
    }
    if (local_80 != 0) {
      if ((char)local_50 == '\0') {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific(pVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e78c0();
      if (local_80 == 0) {
        bVar13 = false;
      }
      else {
        pvVar5 = _pthread_getspecific(pVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        pplVar4 = &local_50;
        FUN_012e78c0();
        plVar6 = local_50;
        if ((g_0270c820 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          g_027e77e8 = FUN_0015ef90();
          g_027e77d0 = "MULSSGenerator";
          g_027e77d8 = 0x70;
          pVar10 = 0x15ef30;
          g_027e77e0 = FUN_0015ef30;
          g_027e77f0 = 0;
          ram_00000000027e77f8 = 0;
          g_027e7800 = 0;
          ram_00000000027e7808 = 0;
          g_027e7810 = 0;
          ram_00000000027e7818 = 0;
          g_027e7820 = 0;
          ram_00000000027e7828 = 0;
          g_027e7830 = 0;
          ram_00000000027e7838 = 0;
          g_027e7840 = 0;
          ram_00000000027e7848 = 0;
          g_027e7850 = 0;
          ram_00000000027e7858 = 0;
          g_027e7860 = 0;
          ram_00000000027e7868 = 0;
          g_027e7870 = 0;
          ram_00000000027e7878 = 0;
          g_027e7880 = 0;
          ram_00000000027e7888 = 0;
          g_027e7890 = 0;
          ___cxa_guard_release();
        }
        if (plVar6 == (int64_t *)0x0) {
LAB_01bd8284:
          pplVar4 = (int64_t **)&g_02802688;
        }
        else {
          (**(code **)(*plVar6 + 0x360))();
          cVar2 = FUN_00e85ea0();
          if (cVar2 == '\0') goto LAB_01bd8284;
        }
        bVar13 = *pplVar4 != (int64_t *)0x0;
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (((char)local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if (bVar13) {
        pvVar5 = _pthread_getspecific(pVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e78c0();
        if (local_80 == 0) {
          puVar9 = (void*)0x0;
          local_88 = 0;
joined_r0x01bd8359:
          if (((char)local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          uVar12 = (undefined7)((uint64_t)unaff_R13 >> 8);
          local_88 = local_80;
          if ((char)local_78 == '\0') {
            FUN_00d50b00();
            puVar9 = (void*)CONCAT71(uVar12,1);
            goto joined_r0x01bd8359;
          }
          puVar9 = (void*)CONCAT71(uVar12,1);
        }
        if (local_88 == 0) goto LAB_01bd83be;
        local_58 = puVar9;
        pvVar5 = _pthread_getspecific(pVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c6cb0();
        if (local_80 == 0) {
          bVar13 = false;
          lVar7 = 0;
        }
        else {
          if ((((char)local_78 == '\0') && (FUN_00d50b00(), (char)local_78 != '\0')) &&
             (local_80 != 0)) {
            FUN_00d50b20();
          }
          pvVar5 = _pthread_getspecific(pVar10);
          lVar7 = local_80;
          if ((pvVar5 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            lVar7 = *(int64_t *)(local_80 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
          if (*(int64_t *)(lVar7 + 0x58) != 0) {
            pvVar5 = _pthread_getspecific(pVar10);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            puVar9 = (void*)FUN_017ed3a0();
            if (local_80 == local_88) {
              if (((char)local_58 == '\0') && (local_80 != 0)) {
                local_3c = CONCAT31(local_3c._1_3_,1);
                if ((char)local_78 != '\0') goto LAB_01bd85ed;
                local_3c = CONCAT31(local_3c._1_3_,1);
                puVar9 = (void*)FUN_00d50b00();
              }
              else {
                local_3c = CONCAT31(local_3c._1_3_,(char)local_58);
                puVar9 = local_58;
              }
LAB_01bd85d9:
              if (((char)local_78 != '\0') && (local_80 != 0)) {
                puVar9 = (void*)FUN_00d50b20();
              }
            }
            else {
              if ((char)local_78 == '\0') {
                if (local_80 != 0) {
                  puVar9 = (void*)FUN_00d50b00();
                }
                local_3c = CONCAT31(local_3c._1_3_,1);
                if ((char)local_58 == '\0') {
                  local_88 = local_80;
                }
                else {
                  local_88 = local_80;
                  puVar9 = (void*)FUN_00d50b20();
                }
                goto LAB_01bd85d9;
              }
              local_3c = CONCAT31(local_3c._1_3_,1);
              if ((char)local_58 == '\0') {
                local_88 = local_80;
              }
              else {
                local_88 = local_80;
                puVar9 = (void*)FUN_00d50b20();
              }
            }
LAB_01bd85ed:
            local_58 = (void*)CONCAT71((int7)((uint64_t)puVar9 >> 8),(uint8_t)local_3c);
          }
          pvVar5 = _pthread_getspecific(pVar10);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar2 = FUN_017f2970();
          if (cVar2 == '\0') {
            bVar13 = false;
            lVar7 = 0;
            FUN_00d50b20();
          }
          else {
            bVar13 = true;
            lVar7 = local_80;
          }
        }
        local_3c = 0;
        if (((char)local_58 == '\0') || (local_88 == 0)) goto LAB_01bd84c6;
        FUN_00d50b20();
      }
      else {
LAB_01bd83be:
        bVar13 = false;
        lVar7 = 0;
      }
      local_3c = 0;
      goto LAB_01bd84c6;
    }
LAB_01bd8139:
    local_3c = (uint32_t)CONCAT71((int7)((uint64_t)pplVar4 >> 8),1);
    bVar13 = false;
    lVar7 = 0;
  }
  else {
    if ((int)uVar1 < 2) goto LAB_01bd8139;
    local_3c = (uint32_t)CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    if (*(int64_t *)(this_ptr + 0x98) == 0) {
      plVar6 = (int64_t *)FUN_00e8fc40();
      FUN_01bdae30();
      (**(code **)(*plVar6 + 0x18))();
      lVar7 = *(int64_t *)(this_ptr + 0x98);
      *(int64_t **)(this_ptr + 0x98) = plVar6;
      if (lVar7 != 0) {
        FUN_00d50b20();
        plVar6 = *(int64_t **)(this_ptr + 0x98);
      }
      plVar6[3] = this_ptr;
    }
    puVar9 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    pVar10 = 0x2572358;
    *puVar9 = &g_02572358;
    (*g_02572370)();
    local_58 = puVar9;
    if (*(int64_t *)(this_ptr + 0x78) != 0) {
      local_78._0_1_ = '\0';
      local_80 = 0;
      local_68 = 0xffffffff;
      local_60 = 0;
      local_68._4_4_ = 0;
      local_70 = *(int64_t *)(this_ptr + 0x78);
      while( true ) {
        if (local_68._4_4_ != 0) {
          if (local_68._4_4_ < 1) {
            iVar3 = -local_68._4_4_;
          }
          else {
            iVar3 = (int)local_68 - local_68._4_4_;
            local_68 = CONCAT44(local_68._4_4_,iVar3);
            FUN_00d23690();
            local_60 = local_60 + local_68._4_4_;
            iVar3 = 0;
          }
          local_68 = CONCAT44(iVar3,(int)local_68);
        }
        lVar7 = (int64_t)(int)local_68;
        iVar3 = (int)local_68 + 1;
        local_68 = CONCAT44(local_68._4_4_,iVar3);
        if (*(int *)(local_70 + 0xc) <= iVar3) break;
        local_80 = *(int64_t *)(*(int64_t *)(local_70 + 0x10) + 8 + lVar7 * 8);
        pvVar5 = _pthread_getspecific((void*)*(int64_t *)(local_70 + 0x10));
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e78c0();
        plVar6 = local_50;
        if ((g_0270c820 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          g_027e77e8 = FUN_0015ef90();
          g_027e77d0 = "MULSSGenerator";
          g_027e77d8 = 0x70;
          g_027e77e0 = FUN_0015ef30;
          g_027e77f0 = 0;
          ram_00000000027e77f8 = 0;
          g_027e7800 = 0;
          ram_00000000027e7808 = 0;
          g_027e7810 = 0;
          ram_00000000027e7818 = 0;
          g_027e7820 = 0;
          ram_00000000027e7828 = 0;
          g_027e7830 = 0;
          ram_00000000027e7838 = 0;
          g_027e7840 = 0;
          ram_00000000027e7848 = 0;
          g_027e7850 = 0;
          ram_00000000027e7858 = 0;
          g_027e7860 = 0;
          ram_00000000027e7868 = 0;
          g_027e7870 = 0;
          ram_00000000027e7878 = 0;
          g_027e7880 = 0;
          ram_00000000027e7888 = 0;
          g_027e7890 = 0;
          ___cxa_guard_release();
        }
        pplVar4 = (int64_t **)&g_02802688;
        if (plVar6 != (int64_t *)0x0) {
          (**(code **)(*plVar6 + 0x360))();
          cVar2 = FUN_00e85ea0();
          pplVar4 = &local_50;
          if (cVar2 == '\0') {
            pplVar4 = (int64_t **)&g_02802688;
          }
        }
        plVar6 = *pplVar4;
        if (*(char *)(pplVar4 + 1) == '\0') {
          if (plVar6 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(void*)(pplVar4 + 1) = 0;
        }
        pVar10 = (void*)pplVar4;
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar6 != (int64_t *)0x0) {
          pvVar5 = _pthread_getspecific(pVar10);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012c6cb0();
          if (local_50 != (int64_t *)0x0) {
            if (((local_48 == '\0') && (FUN_00d50b00(), local_48 != '\0')) &&
               (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            pvVar5 = _pthread_getspecific(pVar10);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar2 = FUN_017f2970();
            if (cVar2 != '\0') {
              pvVar5 = _pthread_getspecific(pVar10);
              lVar7 = local_80;
              if ((pvVar5 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                lVar7 = *(int64_t *)
                         (local_80 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
              }
              if (*(int64_t *)(lVar7 + 0x58) != 0) {
                pvVar5 = _pthread_getspecific(pVar10);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_017ed3a0();
                if (plVar6 != local_50) {
                  plVar6 = local_50;
                  if (local_48 != '\0') {
                    FUN_00d50b20();
                    goto LAB_01bd8049;
                  }
                  if (local_50 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                  FUN_00d50b20();
                }
                if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
LAB_01bd8049:
              local_48 = '\0';
              local_50 = plVar6;
              FUN_00d235a0();
              if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            FUN_00d50b20();
          }
        }
        if (plVar6 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      lVar7 = local_70;
      FUN_000be170();
      pVar10 = (void*)lVar7;
    }
    FUN_01bd23c0();
    if (*(int64_t *)(*(int64_t *)(this_ptr + 0x98) + 0x20) == 0) {
      bVar13 = false;
      local_80 = 0;
    }
    else {
      FUN_00d50b00();
      FUN_00d50b20();
      lVar7 = *(int64_t *)(*(int64_t *)(this_ptr + 0x98) + 0x20);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific(pVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c6cb0();
      if (local_80 == 0) {
        local_80 = 0;
        bVar13 = false;
      }
      else if ((char)local_78 == '\0') {
        FUN_00d50b00();
        bVar13 = true;
        if (((char)local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_78._0_1_ = '\0';
        bVar13 = true;
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
    }
    lVar7 = local_80;
    if (local_58 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  local_80 = 0;
LAB_01bd84c6:
  FUN_01d2a770();
  FUN_01bd69c0();
  if ((bVar13) && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  if ((char)local_3c == '\0' && local_80 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 004879c0
// ============================================================
// Function: FUN_004879c0
// Address: 004879c0
// Size: 2967 bytes
// Class: MULSSGenerator
// String references:
//   "MULSSGenerator"

void FUN_004879c0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int64_t *plVar4;
  int64_t *this_ptr;
  int64_t *plVar5;
  uint32_t uVar6;
  int64_t local_1e0;
  char local_1d8;
  int64_t local_1d0;
  char local_1c8;
  int64_t local_1c0;
  char local_1b8;
  int64_t local_1b0;
  char local_1a8;
  int64_t local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t *local_120;
  char local_118;
  int64_t *local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_58;
  char local_50 [8];
  int64_t *plVar7;
  char local_40;
  char local_38;
  
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_38 = '\0';
  plVar5 = this_ptr;
  plVar7 = this_ptr;
  do {
    (**(code **)(*plVar5 + 0x370))();
    if (local_58 == plVar5) {
      if (((local_38 == '\0') && (local_58 != (int64_t *)0x0)) && (local_50[0] != '\0'))
      goto LAB_00487a57;
    }
    else {
      plVar5 = local_58;
      plVar7 = local_58;
      if (local_50[0] == '\0') {
        if (local_38 == '\0') {
          pcVar3 = &stack0xffffffffffffffc8;
        }
        else {
          FUN_00d50b20();
          pcVar3 = &stack0xffffffffffffffc8;
        }
      }
      else {
        if (local_38 != '\0') {
          FUN_00d50b20();
        }
LAB_00487a57:
        local_38 = '\x01';
        pcVar3 = local_50;
      }
      *pcVar3 = '\0';
    }
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00082eb0();
    plVar4 = &g_02802688;
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar4 = (int64_t *)&stack0xffffffffffffffb8;
      if (cVar1 == '\0') {
        plVar4 = &g_02802688;
      }
    }
    if (*plVar4 != 0) {
      if ((local_38 == '\0') && (plVar5 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      goto LAB_00487b03;
    }
    if (plVar5 == (int64_t *)0x0) {
LAB_00487b03:
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (plVar5 != (int64_t *)0x0) {
        (**(code **)(*plVar5 + 0x498))();
        if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_58 != (int64_t *)0x0) {
          (**(code **)(*plVar5 + 0x498))();
          plVar4 = this_ptr + 0x1a;
          local_118 = 0;
          (**(code **)(this_ptr[0x1a] + 0x10))();
          FUN_00d50b00();
          local_118 = '\x01';
          local_1e0 = 0;
          local_1d8 = '\0';
          local_120 = plVar4;
          FUN_002771e0();
          uVar6 = FUN_00e86210();
          local_1d0 = g_027086f8;
          if (g_027086f8 != 0) {
            uVar6 = FUN_00d50b00();
          }
          local_1c8 = '\x01';
          FUN_00c841b0(uVar6,&local_1d0);
          local_b8 = 0;
          if (local_40 == '\0') {
            if (plVar7 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_b8 = '\x01';
          local_c0 = plVar7;
          FUN_00cbad30(&local_c0,&local_1e0,4);
          if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (plVar7 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_1c8 != '\0') && (local_1d0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_1d8 != '\0') && (local_1e0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_118 != '\0') && (local_120 != (int64_t *)0x0)) {
            (**(code **)(*local_120 + 0x10))();
            FUN_00d50b20();
          }
          if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*plVar5 + 0x498))();
          local_108 = 0;
          (**(code **)(*plVar4 + 0x10))();
          FUN_00d50b00();
          local_108 = '\x01';
          local_1c0 = 0;
          local_1b8 = '\0';
          local_110 = plVar4;
          if ((g_0270c820 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
            g_027e77e8 = FUN_0015ef90();
            g_027e77d0 = "MULSSGenerator";
            g_027e77d8 = 0x70;
            g_027e77e0 = FUN_0015ef30;
            g_027e77f0 = 0;
            ram_00000000027e77f8 = 0;
            g_027e7800 = 0;
            ram_00000000027e7808 = 0;
            g_027e7810 = 0;
            ram_00000000027e7818 = 0;
            g_027e7820 = 0;
            ram_00000000027e7828 = 0;
            g_027e7830 = 0;
            ram_00000000027e7838 = 0;
            g_027e7840 = 0;
            ram_00000000027e7848 = 0;
            g_027e7850 = 0;
            ram_00000000027e7858 = 0;
            g_027e7860 = 0;
            ram_00000000027e7868 = 0;
            g_027e7870 = 0;
            ram_00000000027e7878 = 0;
            g_027e7880 = 0;
            ram_00000000027e7888 = 0;
            g_027e7890 = 0;
            ___cxa_guard_release();
          }
          uVar6 = FUN_00e86210();
          local_1b0 = g_02708700;
          if (g_02708700 != 0) {
            uVar6 = FUN_00d50b00();
          }
          local_1a8 = '\x01';
          FUN_00c841b0(uVar6,&local_1b0);
          local_a8 = 0;
          if (local_40 == '\0') {
            if (plVar7 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_a8 = '\x01';
          local_b0 = plVar7;
          FUN_00cbad30(&local_b0,&local_1c0,4);
          if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (plVar7 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_1a8 != '\0') && (local_1b0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_1b8 != '\0') && (local_1c0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
            (**(code **)(*local_110 + 0x10))();
            FUN_00d50b20();
          }
          if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*plVar5 + 0x498))();
          local_f8 = 0;
          (**(code **)(*plVar4 + 0x10))();
          FUN_00d50b00();
          local_f8 = '\x01';
          local_1a0 = 0;
          local_198 = '\0';
          local_100 = plVar4;
          FUN_002771e0();
          uVar6 = FUN_00e86210();
          local_190 = g_02708708;
          if (g_02708708 != 0) {
            uVar6 = FUN_00d50b00();
          }
          local_188 = '\x01';
          FUN_00c841b0(uVar6,&local_190);
          local_98 = 0;
          if (local_40 == '\0') {
            if (plVar7 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_98 = '\x01';
          local_a0 = plVar7;
          FUN_00cbad30(&local_a0,&local_1a0,4);
          if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (plVar7 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_188 != '\0') && (local_190 != 0)) {
            FUN_00d50b20();
          }
          if ((local_198 != '\0') && (local_1a0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
            (**(code **)(*local_100 + 0x10))();
            FUN_00d50b20();
          }
          if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*plVar5 + 0x498))();
          local_e8 = 0;
          (**(code **)(*plVar4 + 0x10))();
          FUN_00d50b00();
          local_e8 = '\x01';
          local_180 = 0;
          local_178 = '\0';
          local_f0 = plVar4;
          FUN_0049c3f0();
          uVar6 = FUN_00e86210();
          local_170 = g_027ebef0;
          if (g_027ebef0 != 0) {
            uVar6 = FUN_00d50b00();
          }
          local_168 = '\x01';
          FUN_00c841b0(uVar6,&local_170);
          local_88 = 0;
          if (local_40 == '\0') {
            if (plVar7 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_88 = '\x01';
          local_90 = plVar7;
          FUN_00cbad30(&local_90,&local_180,4);
          if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (plVar7 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_168 != '\0') && (local_170 != 0)) {
            FUN_00d50b20();
          }
          if ((local_178 != '\0') && (local_180 != 0)) {
            FUN_00d50b20();
          }
          if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
            (**(code **)(*local_f0 + 0x10))();
            FUN_00d50b20();
          }
          if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*plVar5 + 0x498))();
          local_d8 = 0;
          (**(code **)(*plVar4 + 0x10))();
          FUN_00d50b00();
          local_d8 = '\x01';
          local_160 = 0;
          local_158 = '\0';
          local_e0 = plVar4;
          FUN_0049c3f0();
          uVar6 = FUN_00e86210();
          local_150 = g_02708710;
          if (g_02708710 != 0) {
            uVar6 = FUN_00d50b00();
          }
          local_148 = '\x01';
          FUN_00c841b0(uVar6,&local_150);
          local_78 = 0;
          if (local_40 == '\0') {
            if (plVar7 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_78 = '\x01';
          local_80 = plVar7;
          FUN_00cbad30(&local_80,&local_160,4);
          if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (plVar7 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_148 != '\0') && (local_150 != 0)) {
            FUN_00d50b20();
          }
          if ((local_158 != '\0') && (local_160 != 0)) {
            FUN_00d50b20();
          }
          if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
            (**(code **)(*local_e0 + 0x10))();
            FUN_00d50b20();
          }
          if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*plVar5 + 0x498))();
          local_c8 = 0;
          (**(code **)(*plVar4 + 0x10))();
          FUN_00d50b00();
          local_c8 = '\x01';
          local_140 = 0;
          local_138 = '\0';
          local_d0 = plVar4;
          FUN_0049c3f0();
          uVar6 = FUN_00e86210();
          local_130 = g_02708718;
          if (g_02708718 != 0) {
            uVar6 = FUN_00d50b00();
          }
          local_128 = '\x01';
          FUN_00c841b0(uVar6,&local_130);
          local_68 = 0;
          if (local_40 == '\0') {
            if (plVar7 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_68 = '\x01';
          local_70 = plVar7;
          FUN_00cbad30(&local_70,&local_140,4);
          if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (plVar7 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_128 != '\0') && (local_130 != 0)) {
            FUN_00d50b20();
          }
          if ((local_138 != '\0') && (local_140 != 0)) {
            FUN_00d50b20();
          }
          if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
            (**(code **)(*local_d0 + 0x10))();
            FUN_00d50b20();
          }
          if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          *(void*)(this_ptr + 0x1b) = 1;
        }
      }
      FUN_0047dd70();
      if (plVar5 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      return;
    }
  } while( true );
}



// ============================================================
// 00488f50
// ============================================================
// Function: FUN_00488f50
// Address: 00488f50
// Size: 3048 bytes
// Class: MULSSGenerator
// String references:
//   "MULSSGenerator"

void FUN_00488f50(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int64_t *plVar4;
  int64_t *this_ptr;
  int64_t *plVar5;
  uint32_t uVar6;
  int64_t local_1f0;
  char local_1e8;
  int64_t local_1e0;
  char local_1d8;
  int64_t local_1d0;
  char local_1c8;
  int64_t local_1c0;
  char local_1b8;
  int64_t local_1b0;
  char local_1a8;
  int64_t local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t *local_130;
  char local_128;
  int64_t *local_120;
  char local_118;
  int64_t *local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_50 [8];
  int64_t *plVar7;
  char local_40;
  char local_38;
  
  if ((char)this_ptr[0x1b] == '\0') {
    return;
  }
  FUN_00d50b00();
  local_38 = '\0';
  plVar5 = this_ptr;
  plVar7 = this_ptr;
  do {
    (**(code **)(*plVar5 + 0x370))();
    plVar4 = local_58;
    if (local_58 == plVar5) {
      if (((local_38 == '\0') && (local_58 != (int64_t *)0x0)) &&
         (plVar4 = plVar5, local_50[0] != '\0')) goto LAB_00488ff7;
    }
    else {
      plVar7 = plVar4;
      if (local_50[0] == '\0') {
        if (local_38 == '\0') {
          pcVar3 = &stack0xffffffffffffffc8;
        }
        else {
          FUN_00d50b20();
          pcVar3 = &stack0xffffffffffffffc8;
        }
      }
      else {
        if (local_38 != '\0') {
          FUN_00d50b20();
        }
LAB_00488ff7:
        local_38 = '\x01';
        pcVar3 = local_50;
      }
      *pcVar3 = '\0';
      plVar5 = plVar4;
    }
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00082eb0();
    plVar4 = &g_02802688;
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar4 = (int64_t *)&stack0xffffffffffffffb8;
      if (cVar1 == '\0') {
        plVar4 = &g_02802688;
      }
    }
    if (*plVar4 != 0) {
      if ((local_38 == '\0') && (plVar5 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      break;
    }
  } while (plVar5 != (int64_t *)0x0);
  FUN_00d50b20();
  if (plVar5 != (int64_t *)0x0) {
    (**(code **)(*plVar5 + 0x498))();
    plVar4 = local_58;
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar4 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x498))();
      plVar4 = this_ptr + 0x1a;
      local_118 = 0;
      (**(code **)(this_ptr[0x1a] + 0x10))();
      FUN_00d50b00();
      local_118 = '\x01';
      local_1f0 = 0;
      local_1e8 = '\0';
      local_120 = plVar4;
      FUN_002771e0();
      uVar6 = FUN_00e86210();
      local_1e0 = g_027086f8;
      if (g_027086f8 != 0) {
        uVar6 = FUN_00d50b00();
      }
      local_1d8 = '\x01';
      FUN_00c841b0(uVar6,&local_1e0);
      local_b0 = 0;
      if (local_40 == '\0') {
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_b0 = '\x01';
      local_b8 = plVar7;
      FUN_00cbadd0(&local_b8,&local_1f0);
      if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (plVar7 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_1d8 != '\0') && (local_1e0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1e8 != '\0') && (local_1f0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_118 != '\0') && (local_120 != (int64_t *)0x0)) {
        (**(code **)(*local_120 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar5 + 0x498))();
      local_108 = 0;
      (**(code **)(*plVar4 + 0x10))();
      FUN_00d50b00();
      local_108 = '\x01';
      local_1d0 = 0;
      local_1c8 = '\0';
      local_110 = plVar4;
      if ((g_0270c820 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
        g_027e77e8 = FUN_0015ef90();
        g_027e77d0 = "MULSSGenerator";
        g_027e77d8 = 0x70;
        g_027e77e0 = FUN_0015ef30;
        g_027e77f0 = 0;
        ram_00000000027e77f8 = 0;
        g_027e7800 = 0;
        ram_00000000027e7808 = 0;
        g_027e7810 = 0;
        ram_00000000027e7818 = 0;
        g_027e7820 = 0;
        ram_00000000027e7828 = 0;
        g_027e7830 = 0;
        ram_00000000027e7838 = 0;
        g_027e7840 = 0;
        ram_00000000027e7848 = 0;
        g_027e7850 = 0;
        ram_00000000027e7858 = 0;
        g_027e7860 = 0;
        ram_00000000027e7868 = 0;
        g_027e7870 = 0;
        ram_00000000027e7878 = 0;
        g_027e7880 = 0;
        ram_00000000027e7888 = 0;
        g_027e7890 = 0;
        ___cxa_guard_release();
      }
      uVar6 = FUN_00e86210();
      local_1c0 = g_02708700;
      if (g_02708700 != 0) {
        uVar6 = FUN_00d50b00();
      }
      local_1b8 = '\x01';
      FUN_00c841b0(uVar6,&local_1c0);
      local_a0 = 0;
      if (local_40 == '\0') {
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_a0 = '\x01';
      local_a8 = plVar7;
      FUN_00cbadd0(&local_a8,&local_1d0);
      if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (plVar7 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_1b8 != '\0') && (local_1c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1c8 != '\0') && (local_1d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
        (**(code **)(*local_110 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar5 + 0x498))();
      local_f8 = 0;
      (**(code **)(*plVar4 + 0x10))();
      FUN_00d50b00();
      local_f8 = '\x01';
      local_1b0 = 0;
      local_1a8 = '\0';
      local_100 = plVar4;
      FUN_002771e0();
      uVar6 = FUN_00e86210();
      local_1a0 = g_02708708;
      if (g_02708708 != 0) {
        uVar6 = FUN_00d50b00();
      }
      local_198 = '\x01';
      FUN_00c841b0(uVar6,&local_1a0);
      local_90 = 0;
      if (local_40 == '\0') {
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_90 = '\x01';
      local_98 = plVar7;
      FUN_00cbadd0(&local_98,&local_1b0);
      if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (plVar7 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_198 != '\0') && (local_1a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1a8 != '\0') && (local_1b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
        (**(code **)(*local_100 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar5 + 0x498))();
      local_e8 = 0;
      (**(code **)(*plVar4 + 0x10))();
      FUN_00d50b00();
      local_e8 = '\x01';
      local_190 = 0;
      local_188 = '\0';
      local_f0 = plVar4;
      FUN_0049c3f0();
      uVar6 = FUN_00e86210();
      local_180 = g_027ebef0;
      if (g_027ebef0 != 0) {
        uVar6 = FUN_00d50b00();
      }
      local_178 = '\x01';
      FUN_00c841b0(uVar6,&local_180);
      local_80 = 0;
      if (local_40 == '\0') {
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_80 = '\x01';
      local_88 = plVar7;
      FUN_00cbadd0(&local_88,&local_190);
      if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (plVar7 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_178 != '\0') && (local_180 != 0)) {
        FUN_00d50b20();
      }
      if ((local_188 != '\0') && (local_190 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
        (**(code **)(*local_f0 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar5 + 0x498))();
      local_d8 = 0;
      (**(code **)(*plVar4 + 0x10))();
      FUN_00d50b00();
      local_d8 = '\x01';
      local_170 = 0;
      local_168 = '\0';
      local_e0 = plVar4;
      FUN_0049c3f0();
      uVar6 = FUN_00e86210();
      local_160 = g_02708710;
      if (g_02708710 != 0) {
        uVar6 = FUN_00d50b00();
      }
      local_158 = '\x01';
      FUN_00c841b0(uVar6,&local_160);
      local_70 = 0;
      if (local_40 == '\0') {
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_70 = '\x01';
      local_78 = plVar7;
      FUN_00cbadd0(&local_78,&local_170);
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (plVar7 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_158 != '\0') && (local_160 != 0)) {
        FUN_00d50b20();
      }
      if ((local_168 != '\0') && (local_170 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
        (**(code **)(*local_e0 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar5 + 0x498))();
      local_c8 = 0;
      (**(code **)(*plVar4 + 0x10))();
      FUN_00d50b00();
      local_c8 = '\x01';
      local_150 = 0;
      local_148 = '\0';
      local_d0 = plVar4;
      FUN_0049c3f0();
      uVar6 = FUN_00e86210();
      local_140 = g_02708718;
      if (g_02708718 != 0) {
        uVar6 = FUN_00d50b00();
      }
      local_138 = '\x01';
      FUN_00c841b0(uVar6,&local_140);
      local_60 = 0;
      if (local_40 == '\0') {
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_60 = '\x01';
      local_68 = plVar7;
      FUN_00cbadd0(&local_68,&local_150);
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (plVar7 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_138 != '\0') && (local_140 != 0)) {
        FUN_00d50b20();
      }
      if ((local_148 != '\0') && (local_150 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
        (**(code **)(*local_d0 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      *(void*)(this_ptr + 0x1b) = 0;
      goto LAB_00489a78;
    }
  }
  local_128 = 0;
  (**(code **)(this_ptr[0x1a] + 0x10))();
  FUN_00d50b00();
  local_128 = '\x01';
  local_130 = this_ptr + 0x1a;
  FUN_00cbb340();
  if ((local_128 != '\0') && (local_130 != (int64_t *)0x0)) {
    (**(code **)(*local_130 + 0x10))();
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0x1b) = 0;
  if (plVar5 == (int64_t *)0x0) {
    return;
  }
LAB_00489a78:
  FUN_00d50b20();
  return;
}



// ============================================================
// 004f83c0
// ============================================================
// Function: FUN_004f83c0
// Address: 004f83c0
// Size: 3428 bytes
// Class: MULSSGenerator
// String references:
//   "MULSSGenerator"

void* FUN_004f83c0(void* param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t *plVar5;
  void *pvVar6;
  int64_t *plVar7;
  void*puVar8;
  void* pVar9;
  void*this_ptr;
  int64_t **pplVar10;
  bool bVar11;
  uint32_t uVar12;
  int64_t *local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  uint64_t local_48;
  int64_t *local_40;
  char local_38;
  
  local_48 = param_2;
  FUN_004f9670();
  plVar5 = local_40;
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_004f7c70();
  if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  local_70 = local_58;
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_00082580();
  (**(code **)(*plVar5 + 0x18))();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar12 = FUN_012f4ba0();
  plVar7 = g_02708bf0;
  if (g_02708bf0 != (int64_t *)0x0) {
    uVar12 = FUN_00d50b00();
  }
  local_58 = plVar7;
  local_50 = '\0';
  pplVar10 = &local_58;
  FUN_00ca0840(uVar12,pplVar10);
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5f80();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e57a0();
  local_50 = '\0';
  local_58 = (int64_t *)0x0;
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e78c0();
  plVar7 = local_40;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 == (int64_t *)0x0) {
    plVar7 = (int64_t *)FUN_00e8fc40();
    FUN_00d4ff40();
    plVar7[7] = 0;
    plVar7[8] = 0;
    pVar9 = 0x25d31f0;
    *plVar7 = (int64_t)&g_025d31f0;
    *(void*)(plVar7 + 9) = 0;
    plVar7[10] = 0;
    *(void*)(plVar7 + 0xb) = 0;
    *(void*)((int64_t)plVar7 + 0x5c) = 0;
    *(void*)((int64_t)plVar7 + 99) = 0;
    (*g_025d3208)();
    pvVar6 = _pthread_getspecific(pVar9);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar8 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    param_1 = 0x2607248;
    *puVar8 = &g_02607248;
    puVar8[7] = 0;
    puVar8[8] = 0;
    puVar8[9] = 0;
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    puVar8[0xc] = 0;
    puVar8[0xd] = 0;
    puVar8[0xe] = 0;
    *(void*)((int64_t)puVar8 + 0x76) = 0;
    puVar8[0x10] = 0;
    puVar8[0x11] = 0;
    puVar8[0x12] = 0;
    puVar8[0x13] = 0;
    puVar8[0x14] = 0;
    puVar8[0x15] = 0;
    puVar8[0x16] = 0;
    puVar8[0x17] = 0;
    puVar8[0x18] = 0;
    puVar8[0x19] = 0;
    puVar8[0x1a] = 0;
    (*g_02607260)();
    FUN_012c64a0();
    if (puVar8 != (void*)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b00();
    local_50 = '\x01';
    local_58 = plVar7;
    FUN_00d50b20();
  }
  else {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e78c0();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    plVar7 = local_40;
    if (local_40 == (int64_t *)0x0) {
      plVar7 = (int64_t *)0x0;
joined_r0x004f8796:
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_38 == '\0') {
        FUN_00d50b00();
        local_58 = plVar7;
        local_50 = '\x01';
        goto joined_r0x004f8796;
      }
      local_58 = local_40;
      local_50 = '\x01';
      local_38 = '\0';
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((g_0270c820 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      g_027e77e8 = FUN_0015ef90();
      g_027e77d0 = "MULSSGenerator";
      g_027e77d8 = 0x70;
      param_1 = 0x15ef30;
      g_027e77e0 = FUN_0015ef30;
      g_027e77f0 = 0;
      ram_00000000027e77f8 = 0;
      g_027e7800 = 0;
      ram_00000000027e7808 = 0;
      g_027e7810 = 0;
      ram_00000000027e7818 = 0;
      g_027e7820 = 0;
      ram_00000000027e7828 = 0;
      g_027e7830 = 0;
      ram_00000000027e7838 = 0;
      g_027e7840 = 0;
      ram_00000000027e7848 = 0;
      g_027e7850 = 0;
      ram_00000000027e7858 = 0;
      g_027e7860 = 0;
      ram_00000000027e7868 = 0;
      g_027e7870 = 0;
      ram_00000000027e7878 = 0;
      g_027e7880 = 0;
      ram_00000000027e7888 = 0;
      g_027e7890 = 0;
      ___cxa_guard_release();
    }
    if (plVar7 == (int64_t *)0x0) {
LAB_004f88d4:
      pplVar10 = &g_02802688;
    }
    else {
      (**(code **)(*plVar7 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_004f88d4;
    }
    cVar3 = *(char *)(pplVar10 + 1);
    if ((cVar3 == '\0') || (*pplVar10 == (int64_t *)0x0)) {
      if (*pplVar10 == (int64_t *)0x0) goto LAB_004f8a46;
    }
    else {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c6cb0();
    plVar7 = local_40;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar7 == (int64_t *)0x0) {
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      puVar8 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      param_1 = 0x2607248;
      *puVar8 = &g_02607248;
      puVar8[7] = 0;
      puVar8[8] = 0;
      puVar8[9] = 0;
      puVar8[10] = 0;
      puVar8[0xb] = 0;
      puVar8[0xc] = 0;
      puVar8[0xd] = 0;
      puVar8[0xe] = 0;
      *(void*)((int64_t)puVar8 + 0x76) = 0;
      puVar8[0x10] = 0;
      puVar8[0x11] = 0;
      puVar8[0x12] = 0;
      puVar8[0x13] = 0;
      puVar8[0x14] = 0;
      puVar8[0x15] = 0;
      puVar8[0x16] = 0;
      puVar8[0x17] = 0;
      puVar8[0x18] = 0;
      puVar8[0x19] = 0;
      puVar8[0x1a] = 0;
      (*g_02607260)();
      FUN_012c64a0();
      if (puVar8 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    if (cVar3 != '\0') {
      FUN_00d50b20();
    }
  }
LAB_004f8a46:
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  plVar7 = local_58;
  FUN_012e7710();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7900();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e60a0();
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_012e60e0();
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6040();
  FUN_012e6050();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7d10();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  pplVar10 = &local_40;
  FUN_011f2810();
  plVar2 = local_40;
  FUN_004fbac0();
  plVar1 = g_02802688;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') {
      pplVar10 = &g_02802688;
    }
    plVar1 = *pplVar10;
  }
  if (plVar1 == (int64_t *)0x0) {
    bVar11 = false;
    plVar1 = local_70;
    goto joined_r0x004f8e02;
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7d10();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  pplVar10 = &local_90;
  FUN_011f2810();
  plVar1 = local_90;
  FUN_004fbac0();
  if (plVar1 == (int64_t *)0x0) {
LAB_004f8dc1:
    pplVar10 = &g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_004f8dc1;
  }
  plVar1 = local_70;
  bVar11 = *pplVar10 != (int64_t *)0x0;
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
joined_r0x004f8e02:
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (bVar11) {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7d10();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011f2810();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7d10();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011f2810();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012de7c0();
    FUN_012de780();
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  *this_ptr = plVar5;
  *(void*)(this_ptr + 1) = 1;
  if ((local_50 != '\0') && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 00523d70
// ============================================================
// Function: FUN_00523d70
// Address: 00523d70
// Size: 1543 bytes
// Class: MULSSGenerator

void FUN_00523d70(char param_1,uint param_2,uint param_3)

{
  float *pfVar1;
  char cVar2;
  void* pVar3;
  uint64_t uVar4;
  int64_t lVar5;
  void *pvVar6;
  uint64_t uVar7;
  int iVar8;
  int iVar9;
  void* pVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint uVar15;
  int64_t arg1;
  uint64_t uVar16;
  int64_t *this_ptr;
  int64_t lVar17;
  int64_t lVar18;
  size_t sVar19;
  int64_t lVar20;
  int iVar21;
  int iVar22;
  int64_t lVar23;
  int iVar24;
  uint64_t uVar25;
  float fVar26;
  double dVar27;
  int iVar29;
  int iVar30;
  uint8_t auVar28 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  uint8_t auVar34 [16];
  uint8_t auVar35 [16];
  uint8_t auVar36 [16];
  uint8_t auVar37 [16];
  float fVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  
  if ((((0 < (int)param_2) && (0 < (int)param_3)) && (arg1 != 0)) &&
     (((uVar13 = (uint64_t)param_2, param_1 == '\0' ||
       (*(char *)((int64_t)this_ptr + 0x24b) == '\0')) &&
      (cVar2 = (**(code **)(*this_ptr + 0x5a8))(), cVar2 == '\0')))) {
    uVar4 = (uint64_t)param_3;
    if ((param_1 == '\0') || (this_ptr[0x61] != 0)) {
      uVar11 = 0;
      do {
        uVar12 = 0xffffffffffffffff;
        do {
          if (uVar12 - uVar13 == -1) goto LAB_00523e48;
          fVar38 = *(float *)(this_ptr[uVar11 + 0x23] + 4 + uVar12 * 4);
          uVar12 = uVar12 + 1;
        } while ((fVar38 == 0.0) && (!NAN(fVar38)));
        if (uVar12 < uVar13) {
          uVar13 = 0;
          do {
            if ((*(int64_t *)(arg1 + uVar13 * 8) != 0) && (this_ptr[uVar13 + 0x23] != 0)) {
              (**(code **)(g_02786500 + 0x28))();
            }
            uVar13 = uVar13 + 1;
          } while (uVar4 != uVar13);
          return;
        }
LAB_00523e48:
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar4);
    }
    else {
      dVar27 = (double)FUN_00b335d0();
      lVar5 = FUN_00e7dae0((double)this_ptr[0x4c] * dVar27);
      iVar8 = (int)(dVar27 * g_02391030);
      fVar38 = (float)(int)(dVar27 * g_02391030);
      pVar3 = 0;
      do {
        lVar23 = (int)pVar3 + lVar5;
        pvVar6 = _pthread_getspecific(pVar3);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar20 = uVar13 + lVar5;
        cVar2 = FUN_0054f510(dVar27);
        sVar19 = (size_t)lVar20;
        pVar10 = param_2;
        if (cVar2 != '\0') {
          pVar10 = pVar3;
          if (-lVar23 != 0 && lVar23 < 1) {
            iVar22 = (int)-lVar23;
            lVar23 = lVar23 + iVar22;
            pVar10 = pVar3 + iVar22;
          }
          if ((int)pVar10 < (int)param_2) {
            iVar21 = (int)lVar23;
            iVar22 = -iVar21;
            iVar9 = iVar22 - iVar8;
            iVar39 = g_02394180;
            iVar40 = _UNK_02394184;
            iVar41 = _UNK_02394188;
            iVar42 = _UNK_0239418c;
            if (iVar9 != 0 && iVar8 <= iVar22) {
              iVar24 = param_2 - pVar10;
              iVar22 = iVar24;
              if (iVar9 < iVar24) {
                iVar22 = iVar9;
              }
              pvVar6 = (void *)((int64_t)iVar22 * 4);
              if (param_3 == 1) {
                uVar11 = 0;
              }
              else {
                uVar11 = 0;
                do {
                  if ((*(int64_t *)(arg1 + uVar11 * 8) != 0) &&
                     ((void *)this_ptr[uVar11 + 0x23] != (void *)0x0)) {
                    _memcpy((void *)this_ptr[uVar11 + 0x23],pvVar6,(size_t)lVar20);
                    iVar39 = g_02394180;
                    iVar40 = _UNK_02394184;
                    iVar41 = _UNK_02394188;
                    iVar42 = _UNK_0239418c;
                  }
                  if ((*(int64_t *)(arg1 + 8 + uVar11 * 8) != 0) &&
                     ((void *)this_ptr[uVar11 + 0x24] != (void *)0x0)) {
                    _memcpy((void *)this_ptr[uVar11 + 0x24],pvVar6,(size_t)lVar20);
                    iVar39 = g_02394180;
                    iVar40 = _UNK_02394184;
                    iVar41 = _UNK_02394188;
                    iVar42 = _UNK_0239418c;
                  }
                  sVar19 = (size_t)lVar20;
                  uVar11 = uVar11 + 2;
                } while ((param_3 & 0xfffffffe) != uVar11);
              }
              if ((((param_3 & 1) != 0) && (*(int64_t *)(arg1 + uVar11 * 8) != 0)) &&
                 ((void *)this_ptr[uVar11 + 0x23] != (void *)0x0)) {
                _memcpy((void *)this_ptr[uVar11 + 0x23],pvVar6,sVar19);
                iVar39 = g_02394180;
                iVar40 = _UNK_02394184;
                iVar41 = _UNK_02394188;
                iVar42 = _UNK_0239418c;
              }
              pVar10 = iVar22 + pVar10;
              if (iVar24 <= iVar9) goto LAB_00523f40;
              iVar21 = iVar21 + iVar22;
              iVar22 = iVar8;
            }
            if (0 < iVar22) {
              iVar9 = param_2 - pVar10;
              if (iVar22 <= (int)(param_2 - pVar10)) {
                iVar9 = iVar22;
              }
              lVar23 = (int64_t)(int)pVar10;
              uVar15 = iVar9 - 1;
              if (uVar15 < 3) {
                uVar11 = 0;
                do {
                  lVar20 = *(int64_t *)(arg1 + uVar11 * 8);
                  if (((lVar20 != 0) && (lVar18 = this_ptr[uVar11 + 0x23], lVar18 != 0)) &&
                     (0 < iVar9)) {
                    lVar20 = lVar20 + lVar23 * 4;
                    lVar17 = 0;
                    do {
                      fVar26 = (float)((int)lVar17 + iVar21 + iVar8);
                      *(float *)(lVar20 + lVar17 * 4) =
                           ((fVar38 - fVar26) * *(float *)(lVar18 + lVar23 * 4 + lVar17 * 4)) /
                           fVar38 + (fVar26 * *(float *)(lVar20 + lVar17 * 4)) / fVar38;
                      lVar17 = lVar17 + 1;
                    } while (iVar9 != (int)lVar17);
                  }
                  uVar11 = uVar11 + 1;
                } while (uVar11 != uVar4);
              }
              else {
                iVar22 = iVar21 + iVar8;
                uVar11 = (uint64_t)uVar15 + 1;
                uVar25 = uVar11 & 0xfffffffffffffffc;
                lVar20 = lVar23 + (uint64_t)uVar15 + 1;
                uVar12 = 0;
                do {
                  lVar18 = *(int64_t *)(arg1 + uVar12 * 8);
                  if (((lVar18 != 0) && (lVar17 = this_ptr[uVar12 + 0x23], lVar17 != 0)) &&
                     (0 < iVar9)) {
                    uVar14 = lVar17 + lVar23 * 4;
                    uVar7 = lVar18 + lVar23 * 4;
                    if (((uint64_t)(lVar17 + lVar20 * 4) <= uVar7) ||
                       (uVar15 = 0, (uint64_t)(lVar18 + lVar20 * 4) <= uVar14)) {
                      uVar16 = 0;
                      auVar28 = g_0238fcc0;
                      do {
                        iVar24 = auVar28._4_4_;
                        iVar29 = auVar28._8_4_;
                        iVar30 = auVar28._12_4_;
                        fVar26 = (float)(iVar22 + auVar28._0_4_);
                        fVar31 = (float)(iVar22 + iVar24);
                        fVar32 = (float)(iVar22 + iVar29);
                        fVar33 = (float)(iVar22 + iVar30);
                        pfVar1 = (float *)(uVar7 + uVar16 * 4);
                        auVar34._0_4_ = *pfVar1 * fVar26;
                        auVar34._4_4_ = pfVar1[1] * fVar31;
                        auVar34._8_4_ = pfVar1[2] * fVar32;
                        auVar34._12_4_ = pfVar1[3] * fVar33;
                        auVar35._4_4_ = fVar38;
                        auVar35._0_4_ = fVar38;
                        auVar35._8_4_ = fVar38;
                        auVar35._12_4_ = fVar38;
                        auVar35 = divps(auVar34,auVar35);
                        pfVar1 = (float *)(uVar14 + uVar16 * 4);
                        auVar36._0_4_ = (fVar38 - fVar26) * *pfVar1;
                        auVar36._4_4_ = (fVar38 - fVar31) * pfVar1[1];
                        auVar36._8_4_ = (fVar38 - fVar32) * pfVar1[2];
                        auVar36._12_4_ = (fVar38 - fVar33) * pfVar1[3];
                        auVar37._4_4_ = fVar38;
                        auVar37._0_4_ = fVar38;
                        auVar37._8_4_ = fVar38;
                        auVar37._12_4_ = fVar38;
                        auVar37 = divps(auVar36,auVar37);
                        pfVar1 = (float *)(uVar7 + uVar16 * 4);
                        *pfVar1 = auVar37._0_4_ + auVar35._0_4_;
                        pfVar1[1] = auVar37._4_4_ + auVar35._4_4_;
                        pfVar1[2] = auVar37._8_4_ + auVar35._8_4_;
                        pfVar1[3] = auVar37._12_4_ + auVar35._12_4_;
                        uVar16 = uVar16 + 4;
                        auVar28._0_4_ = auVar28._0_4_ + iVar39;
                        auVar28._4_4_ = iVar24 + iVar40;
                        auVar28._8_4_ = iVar29 + iVar41;
                        auVar28._12_4_ = iVar30 + iVar42;
                      } while (uVar25 != uVar16);
                      uVar15 = (uint)uVar11 & 0xfffffffc;
                      uVar7 = uVar7 + uVar25 * 4;
                      uVar14 = uVar14 + uVar25 * 4;
                      if (uVar11 == uVar25) goto LAB_005242a0;
                    }
                    lVar18 = 0;
                    do {
                      fVar26 = (float)(int)(uVar15 + iVar8 + iVar21 + (int)lVar18);
                      *(float *)(uVar7 + lVar18 * 4) =
                           ((fVar38 - fVar26) * *(float *)(uVar14 + lVar18 * 4)) / fVar38 +
                           (fVar26 * *(float *)(uVar7 + lVar18 * 4)) / fVar38;
                      lVar18 = lVar18 + 1;
                    } while (iVar9 - uVar15 != (int)lVar18);
                  }
LAB_005242a0:
                  uVar12 = uVar12 + 1;
                } while (uVar12 != uVar4);
              }
              pVar10 = iVar9 + pVar10;
            }
          }
        }
LAB_00523f40:
        pVar3 = (pVar10 == pVar3) + pVar10;
      } while ((int)pVar3 < (int)param_2);
    }
  }
  return;
}



// ============================================================
// 012e9900
// ============================================================
// Function: FUN_012e9900
// Address: 012e9900
// Size: 2622 bytes
// Class: MULSSGenerator

void* FUN_012e9900(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  code *pcVar4;
  char cVar5;
  byte bVar6;
  void *pvVar7;
  int64_t lVar8;
  void* in_ECX;
  void* pVar9;
  int in_EDX;
  int64_t *arg1;
  void*this_ptr;
  int64_t lVar10;
  uint uVar11;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  void*local_78;
  char local_70;
  int local_60;
  void*local_50;
  char local_48;
  void*local_40;
  
  if ((char)arg1[0x28] != '\0') {
    (**(code **)(*arg1 + 0x1a0))();
  }
  lVar10 = arg1[0x27];
  if (lVar10 == 0) {
LAB_012e9a22:
    pcVar4 = g_02572370;
    lVar10 = arg1[0x16];
    if (lVar10 != 0) {
      local_70 = '\0';
      local_78 = (void*)0x0;
      local_60 = -1;
      bVar2 = false;
      local_40 = (void*)0x0;
      while( true ) {
        lVar8 = (int64_t)local_60;
        local_60 = local_60 + 1;
        if (*(int *)(lVar10 + 0xc) <= local_60) break;
        local_78 = *(void**)(*(int64_t *)(lVar10 + 0x10) + 8 + lVar8 * 8);
        pvVar7 = _pthread_getspecific((void*)*(int64_t *)(lVar10 + 0x10));
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar5 = FUN_012754d0(param_1,param_2);
        if (cVar5 != '\0') {
          if (local_40 == (void*)0x0) {
            local_40 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *local_40 = &g_02572358;
            (*pcVar4)();
            bVar2 = true;
          }
          local_48 = '\0';
          FUN_00d24b60(0,FUN_012e8c90,0);
          local_50 = local_78;
        }
      }
      FUN_001159b0();
LAB_012e9bcc:
      if ((local_40 != (void*)0x0) && (in_EDX != 0)) {
        uVar11 = *(uint *)((int64_t)local_40 + 0xc);
        if (in_EDX == 1) {
          if (0 < (int)uVar11) {
            lVar8 = (uint64_t)uVar11 + 1;
            lVar10 = 0;
            bVar3 = false;
            do {
              uVar11 = uVar11 - 1;
              lVar1 = *(int64_t *)(local_40[2] + (uint64_t)uVar11 * 8);
              pVar9 = uVar11;
              if (lVar10 == lVar1) {
                if ((!bVar3) && (lVar10 != 0)) {
                  bVar3 = true;
                  FUN_00d50b00();
                }
              }
              else {
                if (lVar1 != 0) {
                  FUN_00d50b00();
                }
                if ((bVar3) && (lVar10 != 0)) {
                  FUN_00d50b20();
                  bVar3 = true;
                  lVar10 = lVar1;
                }
                else {
                  bVar3 = true;
                  lVar10 = lVar1;
                }
              }
              pvVar7 = _pthread_getspecific(pVar9);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125a560();
              if (local_78 == (void*)0x0) {
                cVar5 = '\0';
              }
              else {
                pvVar7 = _pthread_getspecific(pVar9);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125a560();
                pvVar7 = _pthread_getspecific(pVar9);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_011ef460();
                if (local_50 == (void*)0x0) {
                  cVar5 = '\0';
                }
                else {
                  pvVar7 = _pthread_getspecific(pVar9);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0125a560();
                  pvVar7 = _pthread_getspecific(pVar9);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_011ef460();
                  pvVar7 = _pthread_getspecific(pVar9);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_013dd6a0();
                  pvVar7 = _pthread_getspecific(pVar9);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  cVar5 = FUN_014bc070();
                  if ((local_a8 != '\0') && (local_b0 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_98 != '\0') && (local_a0 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_88 != '\0') && (local_90 != 0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_48 != '\0') && (local_50 != (void*)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_b8 != '\0') && (local_c0 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_70 != '\0') && (local_78 != (void*)0x0)) {
                FUN_00d50b20();
              }
              if (cVar5 != '\0') {
                FUN_00d23620();
              }
              lVar8 = lVar8 + -1;
            } while (1 < lVar8);
LAB_012ea359:
            if ((bVar3) && (lVar10 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else if (0 < (int)uVar11) {
          lVar8 = (uint64_t)uVar11 + 1;
          lVar10 = 0;
          bVar3 = false;
          do {
            uVar11 = uVar11 - 1;
            lVar1 = *(int64_t *)(local_40[2] + (uint64_t)uVar11 * 8);
            pVar9 = uVar11;
            if (lVar10 == lVar1) {
              if ((!bVar3) && (lVar10 != 0)) {
                bVar3 = true;
                FUN_00d50b00();
              }
            }
            else {
              if (lVar1 != 0) {
                FUN_00d50b00();
              }
              if ((bVar3) && (lVar10 != 0)) {
                FUN_00d50b20();
                bVar3 = true;
                lVar10 = lVar1;
              }
              else {
                bVar3 = true;
                lVar10 = lVar1;
              }
            }
            pvVar7 = _pthread_getspecific(pVar9);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125a560();
            if (local_78 == (void*)0x0) {
              bVar6 = 1;
            }
            else {
              pvVar7 = _pthread_getspecific(pVar9);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125a560();
              pvVar7 = _pthread_getspecific(pVar9);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_011ef460();
              if (local_50 == (void*)0x0) {
                bVar6 = 1;
              }
              else {
                pvVar7 = _pthread_getspecific(pVar9);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125a560();
                pvVar7 = _pthread_getspecific(pVar9);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_011ef460();
                pvVar7 = _pthread_getspecific(pVar9);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_013dd6a0();
                pvVar7 = _pthread_getspecific(pVar9);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                bVar6 = FUN_014bc070();
                if ((local_a8 != '\0') && (local_b0 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_98 != '\0') && (local_a0 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_88 != '\0') && (local_90 != 0)) {
                  FUN_00d50b20();
                }
                bVar6 = bVar6 ^ 1;
              }
              if ((local_48 != '\0') && (local_50 != (void*)0x0)) {
                FUN_00d50b20();
              }
              if ((local_b8 != '\0') && (local_c0 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_70 != '\0') && (local_78 != (void*)0x0)) {
              FUN_00d50b20();
            }
            if (bVar6 != 0) {
              FUN_00d23620();
            }
            lVar8 = lVar8 + -1;
          } while (1 < lVar8);
          goto LAB_012ea359;
        }
      }
      goto LAB_012ea38b;
    }
    *(void*)(this_ptr + 1) = 0;
  }
  else {
    pvVar7 = _pthread_getspecific(in_ECX);
    if (pvVar7 != (void *)0x0) {
      lVar10 = arg1[0x27];
      lVar8 = FUN_00e8b990();
      if (lVar8 != 0) {
        lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
    }
    if (*(char *)(lVar10 + 0x38) == '\0') goto LAB_012e9a22;
    pvVar7 = _pthread_getspecific(in_ECX);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015292f0(param_1,param_2);
    if (local_78 != (void*)0x0) {
      bVar2 = true;
      local_40 = local_78;
      if (local_70 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_012e9bcc;
    }
    local_40 = (void*)0x0;
    bVar2 = false;
LAB_012ea38b:
    *(void*)(this_ptr + 1) = 0;
    if (bVar2) goto LAB_012ea3a6;
    if (local_40 != (void*)0x0) {
      FUN_00d50b00();
      goto LAB_012ea3a6;
    }
  }
  local_40 = (void*)0x0;
LAB_012ea3a6:
  *this_ptr = local_40;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 0165e970
// ============================================================
// Function: FUN_0165e970
// Address: 0165e970
// Size: 2444 bytes
// Class: MULSSGenerator

void FUN_0165e970(uint64_t param_1,uint64_t param_2,uint32_t param_3)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t uVar9;
  void* pVar10;
  void*puVar11;
  int64_t *plVar12;
  uint64_t *puVar13;
  int64_t lVar14;
  int64_t this_ptr;
  uint32_t local_88;
  int iStack_84;
  uint64_t local_80;
  uint64_t local_78;
  uint64_t local_70;
  uint32_t local_64;
  int64_t local_58;
  char local_50 [8];
  uint64_t local_48;
  int64_t local_40;
  char local_38;
  
  if (*(char *)(this_ptr + 0x48) != '\0') {
    return;
  }
  lVar14 = *(int64_t *)(this_ptr + 0x40);
  uVar9 = param_1;
  pvVar6 = _pthread_getspecific((void*)param_1);
  if (pvVar6 != (void *)0x0) {
    lVar14 = *(int64_t *)(this_ptr + 0x40);
    lVar7 = FUN_00e8b990();
    if (lVar7 != 0) {
      lVar14 = *(int64_t *)(lVar14 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
  }
  pVar10 = (void*)uVar9;
  if (*(int *)(*(int64_t *)(lVar14 + 0x48) + 0x18) + 7U < 0xf) {
    FUN_00d23310();
    lVar14 = local_58;
    pVar10 = (void*)CONCAT71((int7)(uVar9 >> 8),local_50[0]);
    plVar12 = &local_40;
    if (local_50[0] != '\0') {
      plVar12 = (int64_t *)local_50;
    }
    local_40 = CONCAT71(local_40._1_7_,local_50[0]);
    *(char *)plVar12 = '\0';
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_40 != '\0') && (lVar14 != 0)) {
      FUN_00d50b20();
    }
    if (lVar14 == 0) {
      return;
    }
  }
  local_38 = '\0';
  local_40 = 0;
  local_64 = param_3;
  if (param_2 >> 0x20 == 0) {
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01252670(&local_70,1,&local_88,&local_64);
    puVar13 = &local_48;
    if (local_50[0] != '\0') {
      puVar13 = (uint64_t *)local_50;
    }
    local_48 = CONCAT71(local_48._1_7_,local_50[0]);
    *(char *)puVar13 = '\0';
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    cVar4 = local_38;
    lVar14 = local_40;
    if (local_40 == local_58) {
      if ((local_38 != '\0') || (local_58 == 0)) {
        if (((char)local_48 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_0165ec85;
      }
      if ((char)local_48 == '\0') {
        FUN_00d50b00();
      }
    }
    else if ((char)local_48 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      local_40 = local_58;
      if ((cVar4 != '\0') && (lVar14 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = local_58;
      if ((local_38 != '\0') && (lVar14 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012521f0(param_2,1,&local_70,&local_88);
    puVar13 = &local_48;
    if (local_50[0] != '\0') {
      puVar13 = (uint64_t *)local_50;
    }
    local_48 = CONCAT71(local_48._1_7_,local_50[0]);
    *(char *)puVar13 = '\0';
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    cVar4 = local_38;
    lVar14 = local_40;
    if (local_40 == local_58) {
      if ((local_38 != '\0') || (local_58 == 0)) {
        if (((char)local_48 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_0165ec85;
      }
      if ((char)local_48 == '\0') {
        FUN_00d50b00();
      }
    }
    else if ((char)local_48 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      local_40 = local_58;
      if ((cVar4 != '\0') && (lVar14 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = local_58;
      if ((local_38 != '\0') && (lVar14 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  local_38 = '\x01';
LAB_0165ec85:
  local_50[0] = '\0';
  local_58 = 0;
  puVar11 = (void*)(local_70 >> 0x20);
  if (puVar11 == (void*)0x0) {
    local_70 = FUN_0165be20();
  }
  else {
    local_80 = local_70;
    local_48 = CONCAT44(iStack_84,local_88);
    local_78 = CONCAT44(local_78._4_4_,local_64);
    pvVar6 = _pthread_getspecific((void*)(local_70 >> 0x20));
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar11 = &local_80;
    FUN_012535e0(puVar11,&local_58,&local_48,&local_78);
    if (local_80._4_4_ == 0) {
      local_80 = FUN_0165be20();
    }
  }
  do {
    if (local_58 == 0) {
      local_78 = FUN_00e7bdb0();
      iVar5 = 0;
    }
    else {
      local_48 = local_70;
      FUN_00e7b970();
      uVar9 = local_48;
      pvVar6 = _pthread_getspecific((void*)puVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123fff0();
      local_48 = uVar9;
      FUN_00e7bdc0();
      lVar14 = local_58;
      pvVar6 = _pthread_getspecific((void*)puVar11);
      lVar7 = local_58;
      if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar14 = lVar7, lVar8 != 0)) {
        lVar14 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
      iVar1 = *(int *)(lVar14 + 0x44);
      iVar5 = FUN_00e7cea0();
      pvVar6 = _pthread_getspecific((void*)puVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123ffb0();
      local_48 = uVar9;
      FUN_00e7bac0();
      lVar14 = local_58;
      pvVar6 = _pthread_getspecific((void*)puVar11);
      lVar7 = local_58;
      if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar14 = lVar7, lVar8 != 0)) {
        lVar14 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
      local_48 = *(uint64_t *)(lVar14 + 0x48);
      FUN_00e7b820();
      iVar5 = iVar5 + iVar1;
      local_78 = local_48;
    }
    lVar14 = local_40;
    pvVar6 = _pthread_getspecific((void*)puVar11);
    lVar7 = local_40;
    if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar14 = lVar7, lVar8 != 0)) {
      lVar14 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
    lVar7 = local_40;
    if (*(int *)(lVar14 + 0x44) == iVar5) {
      pvVar6 = _pthread_getspecific((void*)puVar11);
      lVar14 = local_40;
      if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar7 = lVar14, lVar8 != 0)) {
        lVar7 = *(int64_t *)(lVar14 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
      if (((*(int *)(lVar7 + 0x4c) == 0) || (local_78._4_4_ == 0)) ||
         (cVar4 = FUN_00e7c000(), cVar4 == '\0')) goto LAB_0165ef60;
      bVar2 = false;
    }
    else {
LAB_0165ef60:
      pvVar6 = _pthread_getspecific((void*)puVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar6 = _pthread_getspecific((void*)puVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d64850();
      pvVar6 = _pthread_getspecific((void*)puVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar6 = _pthread_getspecific((void*)puVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d64850();
      lVar14 = local_40;
      pvVar6 = _pthread_getspecific((void*)puVar11);
      lVar7 = local_40;
      if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar14 = lVar7, lVar8 != 0)) {
        lVar14 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
      lVar7 = local_40;
      *(int *)(lVar14 + 0x44) = iVar5;
      pvVar6 = _pthread_getspecific((void*)puVar11);
      lVar14 = local_40;
      if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar7 = lVar14, lVar8 != 0)) {
        lVar7 = *(int64_t *)(lVar14 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
      *(uint64_t *)(lVar7 + 0x48) = local_78;
      pvVar6 = _pthread_getspecific((void*)puVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar6 = _pthread_getspecific((void*)puVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d64910();
      pvVar6 = _pthread_getspecific((void*)puVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar6 = _pthread_getspecific((void*)puVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      bVar2 = true;
      FUN_00d64910();
    }
    if (iStack_84 == 0) break;
    uVar9 = param_1 >> 0x20;
    pVar10 = (void*)CONCAT71((int7)((uint64_t)puVar11 >> 8),uVar9 == 0);
    if ((((!bVar2 && uVar9 != 0) && (local_70._4_4_ != 0)) && (uVar9 != 0)) &&
       (cVar4 = FUN_00e7c020(), cVar4 == '\0')) break;
    cVar3 = local_38;
    lVar7 = local_40;
    cVar4 = local_50[0];
    lVar14 = local_58;
    if (local_58 == local_40) {
      cVar3 = local_50[0];
      if (((local_38 != '\0') && (local_50[0] == '\0')) && (local_40 != 0)) {
        FUN_00d50b00();
        cVar3 = '\x01';
      }
    }
    else {
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      local_58 = lVar7;
      if ((cVar4 != '\0') && (lVar14 != 0)) {
        FUN_00d50b20();
      }
    }
    local_50[0] = cVar3;
    local_80 = local_70;
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar11 = &local_70;
    cVar4 = FUN_01253c10(puVar11,&local_40,&local_88,&local_64);
  } while (cVar4 != '\0');
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00524820
// ============================================================
// Function: FUN_00524820
// Address: 00524820
// Size: 4455 bytes
// Class: MULSSGenerator

void FUN_00524820(void* param_1,char param_2)

{
  int64_t *plVar1;
  char cVar2;
  int64_t *plVar3;
  int64_t lVar4;
  void *pvVar5;
  int64_t *plVar6;
  int64_t arg1;
  int64_t *this_ptr;
  bool bVar7;
  int64_t *local_68;
  char local_60;
  int local_50;
  int64_t *local_40;
  char local_38;
  
  lVar4 = *(int64_t *)(arg1 + 0x2d8);
  if (lVar4 == 0) {
    if (((param_2 == '\0') || (*(int64_t *)(arg1 + 0x308) != 0)) ||
       (FUN_00526730(), local_68 == (int64_t *)0x0)) {
      plVar3 = (int64_t *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar3 + 0x18))();
      FUN_00d46530();
      lVar4 = g_0270b808;
      if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b00();
        lVar4 = g_0270b808;
      }
      g_0270b808 = lVar4;
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      FUN_00ca0840();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      FUN_00003040();
      FUN_00d91a70();
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      lVar4 = g_0270b810;
      if (g_0270b810 != 0) {
        FUN_00d50b00();
      }
      FUN_00ca0840();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      FUN_00003050();
      FUN_00d91a70();
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      lVar4 = g_0270b818;
      if (g_0270b818 != 0) {
        FUN_00d50b00();
      }
      FUN_00ca0840();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      FUN_00003020();
      FUN_00d91a70();
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      lVar4 = g_0270b820;
      if (g_0270b820 != 0) {
        FUN_00d50b00();
      }
      FUN_00ca0840();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      FUN_00003060();
      FUN_00d91a70();
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      lVar4 = g_0270b828;
      if (g_0270b828 != 0) {
        FUN_00d50b00();
      }
      FUN_00ca0840();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      FUN_00003010();
      FUN_00d91a70();
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      plVar1 = g_0270b830;
      if (g_0270b830 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      FUN_00ca0840();
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      FUN_01f27fe0();
      cVar2 = (**(code **)(*plVar1 + 0x550))();
      if (cVar2 != '\0') {
        FUN_00d46300();
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        lVar4 = g_0270b838;
        if (g_0270b838 != 0) {
          FUN_00d50b00();
        }
        FUN_00ca0840();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d46530();
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      lVar4 = g_0270b840;
      if (g_0270b840 != 0) {
        FUN_00d50b00();
      }
      FUN_00ca0840();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d8ede0();
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      plVar1 = g_0270b848;
      local_68 = g_0270b848;
      if (g_0270b848 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      FUN_00ca0840();
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      FUN_005243b0();
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(**(int64_t **)(arg1 + 0x108) + 0x498))();
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(**(int64_t **)(arg1 + 0x108) + 0x498))();
        FUN_00cafd20();
      }
      if ((*(int64_t **)(arg1 + 0x108) != (int64_t *)0x0) &&
         ((**(code **)(**(int64_t **)(arg1 + 0x108) + 0x5f0))(), plVar1 != (int64_t *)0x0)) {
        (**(code **)(**(int64_t **)(arg1 + 0x108) + 0x5f0))();
        (**(code **)(*local_40 + 0x5e8))();
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b00();
          local_68 = (int64_t *)0x0;
          local_50 = -1;
          while( true ) {
            lVar4 = (int64_t)local_50;
            local_50 = local_50 + 1;
            if (*(int *)((int64_t)plVar1 + 0xc) <= local_50) break;
            local_68 = *(int64_t **)(plVar1[2] + 8 + lVar4 * 8);
            FUN_00637870();
            if (local_40 != (int64_t *)0x0) {
              (**(code **)(*local_68 + 0x648))();
            }
          }
          plVar6 = plVar1;
          FUN_00097d00();
          param_1 = (void*)plVar6;
          FUN_00d50b20();
        }
      }
      plVar6 = *(int64_t **)(arg1 + 0x360);
      if (plVar6 == (int64_t *)0x0) {
        if (*(int64_t *)(arg1 + 0x110) != 0) {
          if (*(int64_t *)(arg1 + 0x308) != 0) {
            cVar2 = FUN_016ae5f0();
            if (((cVar2 != '\0') ||
                ((*(char *)(arg1 + 0x358) != '\0' && (*(char *)(arg1 + 0x35a) != '\0'))))
               && (FUN_0051b640(), local_68 != (int64_t *)0x0)) {
              FUN_00d50b00();
              FUN_00d51d20();
              pvVar5 = _pthread_getspecific(param_1);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_002dc5d0();
              FUN_00d50b20();
            }
            if (((*(int64_t *)(arg1 + 0x308) != 0) &&
                ((cVar2 = FUN_016ae5f0(), cVar2 != '\0' ||
                 ((*(char *)(arg1 + 0x358) != '\0' && (*(char *)(arg1 + 0x35a) != '\0'))))
                )) && (FUN_0051ba20(), local_68 != (int64_t *)0x0)) {
              FUN_00d50b00();
              FUN_00d51d20();
              pvVar5 = _pthread_getspecific(param_1);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_002dc620();
              FUN_00d50b20();
            }
          }
          plVar6 = *(int64_t **)(arg1 + 0x110);
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            plVar6 = *(int64_t **)(arg1 + 0x110);
            lVar4 = FUN_00e8b990();
            if (lVar4 != 0) {
              plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
            }
          }
          (**(code **)(*plVar6 + 0x370))();
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          plVar6 = g_0270b850;
          local_68 = g_0270b850;
          if (g_0270b850 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          FUN_00ca0840();
          if (plVar6 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          plVar6 = *(int64_t **)(arg1 + 0x360);
          lVar4 = FUN_00e8b990();
          if (lVar4 != 0) {
            plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
          }
        }
        (**(code **)(*plVar6 + 0x370))();
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        plVar6 = g_0270b850;
        local_68 = g_0270b850;
        if (g_0270b850 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        FUN_00ca0840();
        if (plVar6 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      (**(code **)(**(int64_t **)(arg1 + 0x108) + 0x498))();
      if (local_68 != (int64_t *)0x0) {
        (**(code **)(**(int64_t **)(arg1 + 0x108) + 0x498))();
        (**(code **)(*local_68 + 0x3c8))();
      }
      FUN_005245b0();
      plVar6 = (int64_t *)FUN_00e8fc40();
      FUN_00026420();
      (**(code **)(*plVar6 + 0x18))();
      (**(code **)(*plVar6 + 0x5f0))();
      bVar7 = local_68 == (int64_t *)0x0;
      if (bVar7) {
        local_68 = (int64_t *)0x0;
      }
      else {
        FUN_00d50b00();
      }
      if (*(int64_t *)(arg1 + 0x308) == 0) {
        FUN_00526a80();
      }
      *(void*)(this_ptr + 1) = 0;
      if (bVar7 && local_68 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *this_ptr = (int64_t)local_68;
      *(void*)(this_ptr + 1) = 1;
      FUN_00d50b20();
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (plVar3 == (int64_t *)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    if (local_60 == '\0') {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
    FUN_00d50b00();
    local_68 = (int64_t *)lVar4;
  }
  *this_ptr = (int64_t)local_68;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 012ee5e0
// ============================================================
// Function: FUN_012ee5e0
// Address: 012ee5e0
// Size: 2931 bytes
// Class: MULSSGenerator

void FUN_012ee5e0(double param_1,double param_2)

{
  void *pvVar1;
  int64_t lVar2;
  void* pVar3;
  int64_t lVar4;
  int iVar5;
  int64_t *arg1;
  uint64_t uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint64_t in_XMM0_Qb;
  uint64_t extraout_XMM0_Qb;
  uint64_t in_XMM1_Qb;
  double dVar10;
  double dVar11;
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
  double local_a8;
  uint64_t uStack_a0;
  double local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  double local_70;
  double local_68;
  int64_t local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  uint64_t local_40;
  int local_38;
  
  if (*arg1 == 0) {
    return;
  }
  if (*(int *)(*arg1 + 0xc) == 0) {
    return;
  }
  local_138 = 0;
  local_130 = '\0';
  pVar3 = (void*)&local_138;
  local_a8 = param_2;
  uStack_a0 = in_XMM1_Qb;
  FUN_01271d60();
  local_78 = local_58;
  if (local_50 == '\0') {
    if (((local_58 != 0) && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50 = '\0';
  }
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  local_128 = *arg1;
  local_120 = '\0';
  FUN_01266770();
  local_60 = local_58;
  if (local_50 == '\0') {
    if (((local_58 != 0) && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50 = '\0';
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(pVar3);
  if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
    pVar3 = (void*)local_60;
  }
  dVar7 = (double)FUN_0125a280();
  local_118 = *arg1;
  local_110 = '\0';
  FUN_01266b80();
  pvVar1 = _pthread_getspecific(pVar3);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_70 = (double)FUN_01259520();
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  pVar3 = 0;
  if (*arg1 != 0) {
    dVar8 = (double)(~-(uint64_t)(!NAN(param_1) && !NAN(param_1)) & (uint64_t)dVar7 |
                    (uint64_t)param_1 & -(uint64_t)(!NAN(param_1) && !NAN(param_1)));
    uStack_a0 = ~in_XMM0_Qb & extraout_XMM0_Qb | in_XMM0_Qb;
    uVar6 = -(uint64_t)(local_70 - dVar7 == local_a8);
    dVar10 = (double)(~uVar6 & (uint64_t)local_a8 | g_023908c8 & uVar6);
    local_50 = '\0';
    local_58 = 0;
    local_40 = 0xffffffff;
    local_38 = 0;
    dVar11 = (double)(~-(uint64_t)(!NAN(dVar10) && !NAN(dVar10)) & (uint64_t)local_70 |
                     (uint64_t)(dVar8 + dVar10) & -(uint64_t)(!NAN(dVar10) && !NAN(dVar10))) -
             dVar8;
    local_40._4_4_ = 0;
    local_a8 = dVar8;
    local_70 = local_70 - dVar7;
    local_48 = *arg1;
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar5 = -local_40._4_4_;
        }
        else {
          iVar5 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar5);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar5 = 0;
        }
        local_40 = CONCAT44(iVar5,(int)local_40);
      }
      lVar2 = (int64_t)(int)local_40;
      iVar5 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar5);
      if (*(int *)(local_48 + 0xc) <= iVar5) break;
      lVar4 = *(int64_t *)(local_48 + 0x10);
      local_58 = *(int64_t *)(lVar4 + 8 + lVar2 * 8);
      if (NAN(dVar10)) {
        pvVar1 = _pthread_getspecific((void*)lVar4);
        pVar3 = (void*)lVar4;
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar1 = _pthread_getspecific(pVar3);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar8 = (double)FUN_0125a280();
        FUN_012642b0((dVar8 + local_a8) - dVar7);
      }
      else {
        pvVar1 = _pthread_getspecific((void*)lVar4);
        pVar3 = (void*)lVar4;
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_68 = (double)FUN_0125a280();
        pvVar1 = _pthread_getspecific(pVar3);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_90 = (double)FUN_01259520();
        pvVar1 = _pthread_getspecific(pVar3);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar8 = (double)FUN_012646c0();
        pvVar1 = _pthread_getspecific(pVar3);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012642b0(((local_68 - dVar7) / local_70) * dVar11 + local_a8);
        pvVar1 = _pthread_getspecific(pVar3);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar1 = _pthread_getspecific(pVar3);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar9 = (double)FUN_0125a280();
        FUN_01259540((((local_90 - dVar7) / local_70) * dVar11 + local_a8) - dVar9);
        pvVar1 = _pthread_getspecific(pVar3);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar1 = _pthread_getspecific(pVar3);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar9 = (double)FUN_0125a280();
        FUN_01264390((((dVar8 - dVar7) / local_70) * dVar11 + local_a8) - dVar9);
        pvVar1 = _pthread_getspecific(pVar3);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_68 = (double)FUN_01264170();
        pvVar1 = _pthread_getspecific(pVar3);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar8 = (double)FUN_012758f0();
        if (local_68 < dVar8) {
          pvVar1 = _pthread_getspecific(pVar3);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar1 = _pthread_getspecific(pVar3);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_68 = (double)FUN_01264380();
          pvVar1 = _pthread_getspecific(pVar3);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_90 = (double)FUN_012758f0();
          pvVar1 = _pthread_getspecific(pVar3);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar8 = (double)FUN_01264170();
          FUN_01264390((local_68 + local_90) - dVar8);
          pvVar1 = _pthread_getspecific(pVar3);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar1 = _pthread_getspecific(pVar3);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012758f0();
          FUN_01259540();
          pvVar1 = _pthread_getspecific(pVar3);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012708c0();
          lVar2 = local_88;
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
          if (lVar2 != 0) {
            pvVar1 = _pthread_getspecific(pVar3);
            if (pvVar1 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012708c0();
            pvVar1 = _pthread_getspecific(pVar3);
            if (pvVar1 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012dffb0();
            if ((local_80 != '\0') && (local_88 != 0)) {
              FUN_00d50b20();
            }
          }
        }
      }
    }
    FUN_001159b0();
    pVar3 = (void*)*arg1;
  }
  FUN_012e6c30();
  FUN_012e7fb0();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_012ef019;
    FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == 0) goto LAB_012ef019;
  pvVar1 = _pthread_getspecific(pVar3);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_108 = *arg1;
  local_100 = '\0';
  FUN_0150ddd0();
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_012ef019:
  local_f8 = *arg1;
  local_f0 = '\0';
  FUN_012879b0();
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  local_e8 = *arg1;
  local_e0 = '\0';
  local_d8 = local_78;
  local_d0 = '\0';
  FUN_0127e4d0(0);
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  local_c8 = *arg1;
  local_c0 = '\0';
  FUN_0127f8b0();
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  local_b8 = *arg1;
  local_b0 = '\0';
  FUN_00e7bdb0();
  FUN_01287c80();
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 012cfa20
// ============================================================
// Function: FUN_012cfa20
// Address: 012cfa20
// Size: 1908 bytes
// Class: MULSSGenerator

void FUN_012cfa20(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  void*puVar3;
  void*puVar4;
  int64_t lVar5;
  int64_t this_ptr;
  uint32_t uVar6;
  int64_t local_30;
  char local_28;
  
  FUN_012dd890();
  *(void*)(this_ptr + 0x120) = 0x3ff0000000000000;
  FUN_00d21370();
  *(void*)(this_ptr + 0xd4) = 0x101;
  *(void*)(this_ptr + 0xd0) = 0x1010101;
  FUN_012d03c0();
  lVar1 = *(int64_t *)(this_ptr + 0x138);
  lVar5 = lVar1;
  if (lVar1 != local_30) {
    lVar5 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar5 = 0;
        goto LAB_012cfa94;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x138);
      *(int64_t *)(this_ptr + 0x138) = local_30;
    }
    else {
      local_28 = '\0';
LAB_012cfa94:
      *(int64_t *)(this_ptr + 0x138) = lVar5;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar5 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  FUN_012d03c0();
  lVar1 = *(int64_t *)(this_ptr + 0x140);
  lVar5 = lVar1;
  if (lVar1 != local_30) {
    lVar5 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar5 = 0;
        goto LAB_012cfb17;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x140);
      *(int64_t *)(this_ptr + 0x140) = local_30;
    }
    else {
      local_28 = '\0';
LAB_012cfb17:
      *(int64_t *)(this_ptr + 0x140) = lVar5;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar5 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  plVar2 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar2 + 0x18))();
  lVar1 = *(int64_t *)(this_ptr + 0x158);
  *(int64_t **)(this_ptr + 0x158) = plVar2;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_012d0460();
  lVar1 = *(int64_t *)(this_ptr + 0x160);
  lVar5 = lVar1;
  if (lVar1 != local_30) {
    lVar5 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar5 = 0;
        goto LAB_012cfbd0;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x160);
      *(int64_t *)(this_ptr + 0x160) = local_30;
    }
    else {
      local_28 = '\0';
LAB_012cfbd0:
      *(int64_t *)(this_ptr + 0x160) = lVar5;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar5 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d21370();
  FUN_00d22760();
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar3[0x1b] = 0;
  puVar3[0x1c] = 0;
  *(void*)((int64_t)puVar3 + 0xc) = 0;
  *(void*)((int64_t)puVar3 + 0x14) = 0;
  *(void*)((int64_t)puVar3 + 0x1c) = 0;
  *(void*)((int64_t)puVar3 + 0x24) = 0;
  *(void*)((int64_t)puVar3 + 0x2c) = 0;
  *(void*)((int64_t)puVar3 + 0x34) = 0;
  *(void*)((int64_t)puVar3 + 0x3c) = 0;
  *(void*)((int64_t)puVar3 + 0x44) = 0;
  *(void*)((int64_t)puVar3 + 0x4c) = 0;
  *(void*)((int64_t)puVar3 + 0x54) = 0;
  *(void*)((int64_t)puVar3 + 0x5c) = 0;
  *(void*)((int64_t)puVar3 + 100) = 0;
  *(void*)((int64_t)puVar3 + 0x6c) = 0;
  *(void*)((int64_t)puVar3 + 0x74) = 0;
  *(void*)((int64_t)puVar3 + 0x7c) = 0;
  *(void*)((int64_t)puVar3 + 0x84) = 0;
  *(void*)((int64_t)puVar3 + 0x8c) = 0;
  *(void*)((int64_t)puVar3 + 0x94) = 0;
  *(void*)((int64_t)puVar3 + 0x9c) = 0;
  *(void*)((int64_t)puVar3 + 0xa4) = 0;
  *(void*)((int64_t)puVar3 + 0xac) = 0;
  *(void*)((int64_t)puVar3 + 0xb4) = 0;
  *(void*)((int64_t)puVar3 + 0xbc) = 0;
  *(void*)((int64_t)puVar3 + 0xc4) = 0;
  *(void*)((int64_t)puVar3 + 0xc6) = 0;
  *(void*)((int64_t)puVar3 + 0xce) = 0;
  *puVar3 = &g_025ed490;
  puVar3[0x1d] = 0;
  puVar3[0x1e] = 0;
  puVar3[0x1f] = 0;
  puVar3[0x20] = 0;
  (*g_025ed4a8)();
  puVar4 = *(void**)(this_ptr + 0x110);
  if (puVar4 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x110) = puVar3;
    if (puVar4 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *(int64_t *)(this_ptr + 0x110);
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_025683c0;
  (*g_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  lVar5 = *(int64_t *)(lVar1 + 0x100);
  *(void**)(lVar1 + 0x100) = puVar4;
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *(void*)((int64_t)puVar3 + 0x7c) = 0;
  *(void*)((int64_t)puVar3 + 0x84) = 0;
  *(void*)((int64_t)puVar3 + 0x6c) = 0;
  *(void*)((int64_t)puVar3 + 0x74) = 0;
  *(void*)((int64_t)puVar3 + 0x5c) = 0;
  *(void*)((int64_t)puVar3 + 100) = 0;
  *(void*)((int64_t)puVar3 + 0x4c) = 0;
  *(void*)((int64_t)puVar3 + 0x54) = 0;
  *(void*)((int64_t)puVar3 + 0x3c) = 0;
  *(void*)((int64_t)puVar3 + 0x44) = 0;
  *(void*)((int64_t)puVar3 + 0x2c) = 0;
  *(void*)((int64_t)puVar3 + 0x34) = 0;
  *(void*)((int64_t)puVar3 + 0x1c) = 0;
  *(void*)((int64_t)puVar3 + 0x24) = 0;
  *(void*)((int64_t)puVar3 + 0xc) = 0;
  *(void*)((int64_t)puVar3 + 0x14) = 0;
  *(void*)((int64_t)puVar3 + 0x8c) = 0;
  *puVar3 = &g_0252ff98;
  puVar3[0x15] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  *(void*)(puVar3 + 0x14) = 0;
  puVar3[0x17] = 0;
  puVar3[0x18] = 0;
  puVar3[0x19] = 0;
  (*g_0252ffb0)();
  puVar4 = *(void**)(this_ptr + 0x118);
  if (puVar4 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x118) = puVar3;
    if (puVar4 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_025e1318;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  (*g_025e1330)();
  puVar4 = *(void**)(this_ptr + 400);
  if (puVar4 == puVar3) {
    FUN_00d50b20();
LAB_012cfe58:
    puVar3 = *(void**)(this_ptr + 400);
    if (puVar3 != (void*)0x0) goto LAB_012cfe70;
    puVar3 = (void*)0x0;
  }
  else {
    *(void**)(this_ptr + 400) = puVar3;
    if (puVar4 != (void*)0x0) {
      FUN_00d50b20();
      goto LAB_012cfe58;
    }
LAB_012cfe70:
    FUN_00d50b00();
  }
  FUN_012ddcf0();
  if (puVar3 != (void*)0x0) {
    FUN_00d50b20();
  }
  FUN_012d0500();
  lVar1 = *(int64_t *)(this_ptr + 0x1a8);
  lVar5 = lVar1;
  if (lVar1 != local_30) {
    lVar5 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar5 = 0;
        goto LAB_012cfec8;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x1a8);
      *(int64_t *)(this_ptr + 0x1a8) = local_30;
    }
    else {
      local_28 = '\0';
LAB_012cfec8:
      *(int64_t *)(this_ptr + 0x1a8) = lVar5;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar5 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d21370();
  FUN_012d05a0();
  lVar1 = *(int64_t *)(this_ptr + 0x128);
  lVar5 = lVar1;
  if (lVar1 != local_30) {
    lVar5 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar5 = 0;
        goto LAB_012cff5c;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x128);
      *(int64_t *)(this_ptr + 0x128) = local_30;
    }
    else {
      local_28 = '\0';
LAB_012cff5c:
      *(int64_t *)(this_ptr + 0x128) = lVar5;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar5 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  plVar2 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar2 + 0x18))();
  lVar1 = *(int64_t *)(this_ptr + 0x1d8);
  *(int64_t **)(this_ptr + 0x1d8) = plVar2;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_012d0640();
  lVar1 = *(int64_t *)(this_ptr + 0x1e0);
  lVar5 = lVar1;
  if (lVar1 != local_30) {
    lVar5 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar5 = 0;
        goto LAB_012d0015;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x1e0);
      *(int64_t *)(this_ptr + 0x1e0) = local_30;
    }
    else {
      local_28 = '\0';
LAB_012d0015:
      *(int64_t *)(this_ptr + 0x1e0) = lVar5;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar5 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  FUN_012d0640();
  lVar1 = *(int64_t *)(this_ptr + 0x1e8);
  lVar5 = lVar1;
  if (lVar1 == local_30) goto LAB_012d00e3;
  lVar5 = local_30;
  if (local_28 == '\0') {
    if (local_30 == 0) {
      lVar5 = 0;
      goto LAB_012d0098;
    }
    FUN_00d50b00();
    lVar1 = *(int64_t *)(this_ptr + 0x1e8);
    *(int64_t *)(this_ptr + 0x1e8) = local_30;
  }
  else {
    local_28 = '\0';
LAB_012d0098:
    *(int64_t *)(this_ptr + 0x1e8) = lVar5;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar5 = local_30;
  }
LAB_012d00e3:
  if ((local_28 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  uVar6 = FUN_00d6f370();
  lVar1 = g_027bedd0;
  if (g_027bedd0 != 0) {
    uVar6 = FUN_00d50b00();
  }
  g_028ac87a = FUN_00d70f90(uVar6,0);
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 012fc0c0
// ============================================================
// Function: FUN_012fc0c0
// Address: 012fc0c0
// Size: 2141 bytes
// Class: MULSSGenerator

void* FUN_012fc0c0(uint64_t param_1)

{
  int64_t lVar1;
  code *pcVar2;
  int64_t *plVar3;
  void *pvVar4;
  int64_t lVar5;
  void*puVar6;
  void*puVar7;
  void*puVar8;
  char *pcVar9;
  void* pVar10;
  void**ppuVar11;
  int iVar12;
  int64_t *arg1;
  void*this_ptr;
  char local_e8;
  undefined7 uStack_e7;
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
  void*local_70;
  char local_68 [8];
  void*local_60;
  uint64_t local_58;
  int local_50;
  void*local_48;
  char local_40 [8];
  char local_38 [8];
  
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  if (*(int *)(*arg1 + 0xc) == 0) goto LAB_012fc90c;
  FUN_00d23310();
  pVar10 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_68[0]);
  ppuVar11 = &local_48;
  if (local_68[0] != '\0') {
    ppuVar11 = (void**)local_68;
  }
  local_48 = (void*)CONCAT71(local_48._1_7_,local_68[0]);
  *(char *)ppuVar11 = '\0';
  if ((local_68[0] != '\0') && (local_70 != (void*)0x0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar10);
  if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
    lVar5 = local_70[0xb];
  }
  else {
    lVar5 = *(int64_t *)(local_70[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4] + 0x58);
  }
  if (lVar5 != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_70 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (lVar5 == 0) {
    FUN_012e8880(0,FUN_012e8440);
    if (local_68[0] == '\0') {
      if (local_70 != (void*)0x0) {
        FUN_00d50b00();
        if ((local_68[0] != '\0') && (local_70 != (void*)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_012fc6de;
      }
    }
    else if (local_70 != (void*)0x0) {
LAB_012fc6de:
      local_68[0] = 0;
      local_50 = 0;
      local_58 = 0;
      if (0 < *(int *)((int64_t)local_70 + 0xc)) {
        iVar12 = 0;
        do {
          FUN_000ba510();
          local_98 = local_a8;
          local_90 = 0;
          if (local_a0 == '\0') {
            if (local_a8 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_a0 = '\0';
          }
          local_90 = '\x01';
          FUN_00c9fe20();
          puVar6 = local_48;
          local_38[0] = local_40[0];
          pcVar9 = local_40;
          if (local_40[0] == '\0') {
            pcVar9 = local_38;
          }
          *pcVar9 = '\0';
          if ((local_40[0] != '\0') && (local_48 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if (local_38[0] == '\0') {
            if (puVar6 != (void*)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38[0] = '\0';
          }
          FUN_012fceb0();
          local_d0 = 0;
          local_d8 = CONCAT71(uStack_e7,local_e8);
          if ((local_e0 == '\0') && (local_d8 != 0)) {
            FUN_00d50b00();
          }
          local_d0 = '\x01';
          FUN_012fce00();
          if ((local_d0 != '\0') && (local_d8 != 0)) {
            FUN_00d50b20();
          }
          if (puVar6 != (void*)0x0) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          iVar12 = iVar12 + 1;
          local_58 = CONCAT44(local_58._4_4_,iVar12);
        } while (iVar12 < *(int *)((int64_t)local_70 + 0xc));
      }
      FUN_000be170();
      *this_ptr = plVar3;
      *(void*)(this_ptr + 1) = 1;
      FUN_00d50b20();
      return this_ptr;
    }
LAB_012fc90c:
    *this_ptr = plVar3;
    *(void*)(this_ptr + 1) = 1;
    return this_ptr;
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  pcVar2 = g_02572370;
  (*g_02572370)();
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02572358;
  (*pcVar2)();
  if ((void*)*arg1 != (void*)0x0) {
    local_68[0] = '\0';
    local_70 = (void*)0x0;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    local_60 = (void*)*arg1;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar12 = -local_58._4_4_;
        }
        else {
          iVar12 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar12);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar12 = 0;
        }
        local_58 = CONCAT44(iVar12,(int)local_58);
      }
      lVar5 = (int64_t)(int)local_58;
      iVar12 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar12);
      if (*(int *)((int64_t)local_60 + 0xc) <= iVar12) break;
      local_70 = *(void**)(local_60[2] + 8 + lVar5 * 8);
      pvVar4 = _pthread_getspecific((void*)local_60[2]);
      puVar8 = local_70;
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        puVar8 = (void*)local_70[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
      puVar8 = (void*)puVar8[8];
      local_40[0] = '\0';
      local_48 = puVar8;
      iVar12 = FUN_00d237a0();
      if ((local_40[0] != '\0') && (local_48 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (iVar12 == -1) {
        local_40[0] = '\0';
        local_48 = puVar8;
        FUN_00d21140();
        if ((local_40[0] != '\0') && (local_48 != (void*)0x0)) {
          FUN_00d50b20();
        }
        puVar8 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar8 = &g_02572358;
        (*pcVar2)();
        local_40[0] = '\0';
        local_48 = puVar8;
        FUN_00d21140();
        if ((local_40[0] != '\0') && (local_48 != (void*)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      local_40[0] = '\0';
      local_48 = local_70;
      FUN_00d21140();
      if ((local_40[0] != '\0') && (local_48 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_000be170();
  }
  FUN_012e8880(0,FUN_012e8440);
  if (local_68[0] == '\0') {
    if (local_70 != (void*)0x0) {
      FUN_00d50b00();
      if ((local_68[0] != '\0') && (local_70 != (void*)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_012fc47a;
    }
  }
  else if (local_70 != (void*)0x0) {
LAB_012fc47a:
    local_68[0] = '\0';
    local_60 = local_70;
    local_50 = 0;
    local_58 = 0;
    if (0 < *(int *)((int64_t)local_70 + 0xc)) {
      lVar5 = 0;
      do {
        local_48 = *(void**)(local_70[2] + lVar5 * 8);
        local_40[0] = '\0';
        iVar12 = FUN_00d23d20();
        if ((local_40[0] != '\0') && (local_48 != (void*)0x0)) {
          FUN_00d50b20();
        }
        lVar1 = *(int64_t *)(puVar6[2] + (int64_t)iVar12 * 8);
        local_c0 = 0;
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_c0 = '\x01';
        local_c8 = lVar1;
        FUN_00c9fe20();
        puVar8 = local_48;
        local_e8 = local_40[0];
        pcVar9 = local_40;
        if (local_40[0] == '\0') {
          pcVar9 = &local_e8;
        }
        *pcVar9 = '\0';
        if ((local_40[0] != '\0') && (puVar8 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (local_e8 == '\0') {
          if (puVar8 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_e8 = '\0';
        }
        FUN_012fceb0();
        lVar1 = local_a8;
        local_b0 = 0;
        if ((local_a0 == '\0') && (local_a8 != 0)) {
          FUN_00d50b00();
        }
        local_b8 = lVar1;
        local_b0 = '\x01';
        FUN_012fce00();
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        if (puVar8 != (void*)0x0) {
          FUN_00d50b20();
        }
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        lVar5 = lVar5 + 1;
        local_58 = CONCAT44(local_58._4_4_,(int)lVar5);
      } while ((int)lVar5 < *(int *)((int64_t)local_70 + 0xc));
    }
    FUN_000be170();
    *this_ptr = plVar3;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
    goto joined_r0x012fc6a1;
  }
  *this_ptr = plVar3;
  *(void*)(this_ptr + 1) = 1;
joined_r0x012fc6a1:
  if (puVar7 != (void*)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return this_ptr;
}



// ============================================================
// 01650af0
// ============================================================
// Function: FUN_01650af0
// Address: 01650af0
// Size: 2504 bytes
// Class: MULSSGenerator
// String references:
//   "MULSSGenerator"

void FUN_01650af0(void* param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  char *pcVar7;
  char *pcVar8;
  void*puVar9;
  void* pVar10;
  int64_t **pplVar11;
  uint32_t uVar12;
  char local_d0;
  undefined7 uStack_cf;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01505930();
  FUN_00d23310();
  plVar2 = local_50;
  local_38[0] = local_48[0];
  pcVar8 = local_38;
  pcVar7 = local_48;
  if (local_48[0] == '\0') {
    pcVar7 = pcVar8;
  }
  *pcVar7 = '\0';
  if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pVar10 = (void*)pcVar8;
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  FUN_00d23310();
  plVar1 = local_50;
  local_d0 = local_48[0];
  pcVar8 = &local_d0;
  if (local_48[0] != '\0') {
    pcVar8 = local_48;
  }
  *pcVar8 = '\0';
  if ((local_48[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  local_c0 = local_60;
  local_b8 = 0;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_b8 = '\x01';
  FUN_012992a0();
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (plVar1 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (plVar2 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d51d20();
  plVar2 = local_50;
  if ((((local_48[0] == '\0') && (local_50 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01505930();
  FUN_00d23310();
  plVar1 = local_50;
  local_40[0] = local_48[0];
  pcVar8 = local_40;
  if (local_48[0] != '\0') {
    pcVar8 = local_48;
  }
  *pcVar8 = '\0';
  if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  FUN_00d23310();
  plVar3 = local_50;
  pcVar8 = local_38;
  pcVar7 = local_48;
  if (local_48[0] == '\0') {
    pcVar7 = pcVar8;
  }
  local_38[0] = local_48[0];
  *pcVar7 = '\0';
  if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pVar10 = (void*)pcVar8;
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  local_90 = local_60;
  local_88 = 0;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_88 = '\x01';
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016670b0();
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar12 = FUN_0124df10();
  local_80 = local_50;
  local_78 = 0;
  if (local_48[0] == '\0') {
    if (local_50 != (int64_t *)0x0) {
      uVar12 = FUN_00d50b00();
    }
  }
  else {
    local_48[0] = '\0';
  }
  local_78 = '\x01';
  uVar12 = FUN_012996f0(uVar12,0);
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    uVar12 = FUN_00d50b20();
  }
  if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
    uVar12 = FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (CONCAT71(uStack_cf,local_d0) != 0)) {
    uVar12 = FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    uVar12 = FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    uVar12 = FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (plVar3 != (int64_t *)0x0)) {
    uVar12 = FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    uVar12 = FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    uVar12 = FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
    uVar12 = FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    uVar12 = FUN_00d50b20();
  }
  FUN_0164e420(uVar12,0);
  FUN_01650330();
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  pplVar11 = &local_50;
  FUN_012e78c0();
  plVar1 = local_50;
  if ((g_0270c820 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_027e77e8 = FUN_0015ef90();
    g_027e77d0 = "MULSSGenerator";
    g_027e77d8 = 0x70;
    pVar10 = 0x15ef30;
    g_027e77e0 = FUN_0015ef30;
    g_027e77f0 = 0;
    ram_00000000027e77f8 = 0;
    g_027e7800 = 0;
    ram_00000000027e7808 = 0;
    g_027e7810 = 0;
    ram_00000000027e7818 = 0;
    g_027e7820 = 0;
    ram_00000000027e7828 = 0;
    g_027e7830 = 0;
    ram_00000000027e7838 = 0;
    g_027e7840 = 0;
    ram_00000000027e7848 = 0;
    g_027e7850 = 0;
    ram_00000000027e7858 = 0;
    g_027e7860 = 0;
    ram_00000000027e7868 = 0;
    g_027e7870 = 0;
    ram_00000000027e7878 = 0;
    g_027e7880 = 0;
    ram_00000000027e7888 = 0;
    g_027e7890 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_016511f7;
  }
  pplVar11 = (int64_t **)&g_02802688;
LAB_016511f7:
  plVar1 = *pplVar11;
  if (*(char *)(pplVar11 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar11 + 1) = 0;
  }
  if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c6cb0();
    plVar1 = local_50;
    if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 == (int64_t *)0x0) {
      pvVar6 = _pthread_getspecific(pVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      puVar9 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      pVar10 = 0x2607248;
      *puVar9 = &g_02607248;
      puVar9[7] = 0;
      puVar9[8] = 0;
      puVar9[9] = 0;
      puVar9[10] = 0;
      puVar9[0xb] = 0;
      puVar9[0xc] = 0;
      puVar9[0xd] = 0;
      puVar9[0xe] = 0;
      *(void*)((int64_t)puVar9 + 0x76) = 0;
      puVar9[0x10] = 0;
      puVar9[0x11] = 0;
      puVar9[0x12] = 0;
      puVar9[0x13] = 0;
      puVar9[0x14] = 0;
      puVar9[0x15] = 0;
      puVar9[0x16] = 0;
      puVar9[0x17] = 0;
      puVar9[0x18] = 0;
      puVar9[0x19] = 0;
      puVar9[0x1a] = 0;
      (*g_02607260)();
      FUN_012c64a0();
      if (puVar9 != (void*)0x0) {
        FUN_00d50b20();
      }
      FUN_01650330();
      pvVar6 = _pthread_getspecific(pVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e57f0();
      if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 012fa750
// ============================================================
// Function: FUN_012fa750
// Address: 012fa750
// Size: 2736 bytes
// Class: MULSSGenerator

uint64_t FUN_012fa750(void* param_1,uint64_t param_2)

{
  int64_t lVar1;
  char cVar2;
  void *pvVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  char *pcVar8;
  char *pcVar9;
  void* pVar10;
  uint64_t uVar11;
  uint64_t arg1;
  int64_t local_d8;
  uint8_t local_d0;
  uint64_t local_c8;
  int64_t local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  char local_60;
  undefined7 uStack_5f;
  char local_58;
  int64_t local_50;
  int64_t local_40;
  char local_38 [8];
  
  lVar1 = local_40;
  FUN_012e7fb0();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150fe30();
  if (local_38[0] == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7fb0();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150fe30();
  if (local_38[0] == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150eb60();
  if ((((local_38[0] == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38[0] != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150eb60();
  if (((local_38[0] == '\0') && (local_40 != 0)) &&
     ((FUN_00d50b00(), local_38[0] != '\0' && (local_40 != 0)))) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510030();
  if (((local_38[0] == '\0') && (local_40 != 0)) &&
     ((FUN_00d50b00(), local_38[0] != '\0' && (local_40 != 0)))) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  pVar10 = (void*)local_40;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    param_1 = pVar10;
  }
  FUN_01822e80();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    param_1 = pVar10;
  }
  FUN_01822e80();
  local_a0 = 0;
  local_a8 = CONCAT71(uStack_5f,local_60);
  if (local_58 == '\0') {
    if (local_a8 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_a0 = '\x01';
  cVar2 = FUN_00d51e10();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    pvVar3 = _pthread_getspecific(param_1);
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      param_1 = pVar10;
    }
    pvVar3 = _pthread_getspecific(param_1);
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      param_1 = pVar10;
    }
    FUN_01822e80();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    local_90 = 0;
    if (local_38[0] == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_90 = '\x01';
    local_98 = local_40;
    FUN_01822eb0();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      param_1 = pVar10;
    }
    local_38[0] = '\0';
    local_40 = 0;
    FUN_0124f820();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510030();
  if ((((local_38[0] == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38[0] != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_c0 = local_40;
  local_d8 = local_40;
  local_d0 = 0;
  uVar5 = FUN_00e7bcc0();
  FUN_012fa130(uVar5,&local_d8,arg1,param_2);
  pVar10 = (void*)uVar5;
  if ((local_38[0] == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  if (cVar2 != '\0') {
    pvVar3 = _pthread_getspecific(pVar10);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar5 = FUN_00e7bdb0();
    uVar6 = FUN_00e7bdb0();
    local_38[0] = '\0';
    cVar2 = FUN_01254260(uVar6,uVar5);
    pVar10 = (void*)uVar6;
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      uVar11 = 0;
      lVar4 = lVar1;
      goto joined_r0x012fb190;
    }
  }
  local_50 = lVar1;
  pvVar3 = _pthread_getspecific(pVar10);
  lVar4 = local_40;
  if ((pvVar3 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    lVar4 = *(int64_t *)(local_40 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
  }
  FUN_00d23310();
  local_60 = local_38[0];
  pcVar8 = local_38;
  if (local_38[0] == '\0') {
    pcVar8 = &local_60;
  }
  *pcVar8 = '\0';
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 == 0) && (0xe < *(int *)(*(int64_t *)(lVar4 + 0x48) + 0x18) + 7U)) {
    local_c8 = **(void**)(*(int64_t *)(lVar4 + 0x48) + 0x10);
  }
  else {
    local_c8 = FUN_00e7bdb0();
    if ((local_60 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d23340();
  local_60 = local_38[0];
  pcVar8 = &local_60;
  pcVar9 = local_38;
  if (local_38[0] == '\0') {
    pcVar9 = pcVar8;
  }
  *pcVar9 = '\0';
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pVar10 = (void*)pcVar8;
  if (local_40 == 0) {
    pVar10 = *(void* *)(*(int64_t *)(lVar4 + 0x48) + 0x18);
    if (pVar10 + 7 < 0xf) goto LAB_012fafe8;
    uVar5 = *(void*)
             ((int64_t)(int)pVar10 + -8 + *(int64_t *)(*(int64_t *)(lVar4 + 0x48) + 0x10));
  }
  else {
LAB_012fafe8:
    uVar5 = FUN_00e7bdb0();
    if ((local_60 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(int *)(*(int64_t *)(lVar4 + 0x48) + 0x18) + 7U < 0xf) {
    FUN_00d23310();
    pcVar8 = &local_60;
    pcVar9 = local_38;
    if (local_38[0] == '\0') {
      pcVar9 = pcVar8;
    }
    local_60 = local_38[0];
    *pcVar9 = '\0';
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    pVar10 = (void*)pcVar8;
    if ((local_60 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar3 = _pthread_getspecific(pVar10);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_38[0] = '\0';
  FUN_012549c0(uVar5,local_c8,1);
  pVar10 = (void*)uVar5;
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar10);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7210();
  local_b0 = 0;
  if ((local_38[0] == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  local_b8 = local_40;
  local_b0 = '\x01';
  FUN_012879b0();
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  uVar11 = CONCAT71((int7)((uint64_t)local_40 >> 8),1);
  lVar4 = local_50;
joined_r0x012fb190:
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if (local_c0 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return uVar11 & 0xffffffff;
}



// ============================================================
// 00e7c8b0
// ============================================================
// Function: FUN_00e7c8b0
// Address: 00e7c8b0
// Size: 896 bytes
// Class: MULSSGenerator

uint64_t FUN_00e7c8b0(uint64_t param_1,char param_2)

{
  uint64_t uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint64_t uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint64_t uVar10;
  uint uVar11;
  uint64_t arg1;
  uint uVar12;
  uint64_t this_ptr;
  uint64_t uVar13;
  uint uVar14;
  uint64_t uVar15;
  uint uVar16;
  uint64_t uVar17;
  int iVar18;
  
  uVar13 = this_ptr >> 0x20;
  if (uVar13 != 0) {
    uVar15 = arg1 >> 0x20;
    uVar14 = (uint)(arg1 >> 0x20);
    if (uVar14 != 0) {
      iVar8 = (int)arg1;
      uVar17 = 0;
      if ((iVar8 == 0) || (iVar4 = (int)this_ptr, uVar17 = uVar13, iVar4 == 0)) {
        return uVar17 << 0x20;
      }
      uVar17 = (uint64_t)(uint)-iVar4;
      if (0 < iVar4) {
        uVar17 = this_ptr & 0xffffffff;
      }
      uVar16 = (uint)uVar17;
      uVar5 = (uint64_t)(uint)-iVar8;
      if (0 < iVar8) {
        uVar5 = arg1 & 0xffffffff;
      }
      uVar12 = (uint)(this_ptr >> 0x20);
      if (uVar16 != (uint)uVar5) {
        bVar6 = 0;
        if (((uVar16 | (uint)uVar5) & 1) == 0) {
          bVar6 = 0;
          uVar10 = uVar17;
          do {
            bVar6 = bVar6 + 1;
            uVar16 = (uint)uVar5;
            uVar11 = (uint)uVar10;
            uVar5 = (uint64_t)(uVar16 >> 1);
            uVar17 = uVar10 >> 1;
            uVar10 = uVar10 >> 1;
          } while (((uVar11 | uVar16) & 2) == 0);
        }
        do {
          uVar10 = uVar17;
          uVar17 = uVar10 >> 1;
        } while ((uVar10 & 1) == 0);
        do {
          uVar17 = uVar5;
          uVar5 = uVar17 >> 1;
        } while ((uVar17 & 1) == 0);
        iVar7 = (int)uVar10;
        iVar2 = 1;
        if (((iVar7 != 1) && ((int)uVar17 != 1)) && (iVar2 = iVar7, iVar7 != (int)uVar17)) {
          do {
            iVar7 = (int)uVar10;
            iVar2 = (int)uVar17;
            uVar16 = iVar7 - iVar2;
            if (iVar7 - iVar2 == 0 || iVar7 < iVar2) {
              uVar5 = (uint64_t)(uint)(iVar2 - iVar7);
              do {
                uVar17 = (uint64_t)(uint)((int)uVar5 >> 1);
                uVar1 = uVar5 & 2;
                uVar5 = uVar17;
              } while (uVar1 == 0);
            }
            else {
              do {
                uVar3 = (int)uVar16 >> 1;
                uVar11 = uVar16 & 2;
                uVar16 = uVar3;
              } while (uVar11 == 0);
              uVar10 = (uint64_t)uVar3;
            }
            iVar2 = (int)uVar10;
          } while (iVar2 != (int)uVar17);
        }
        uVar16 = iVar2 << (bVar6 & 0x1f);
      }
      uVar11 = uVar12;
      if (uVar12 != uVar14) {
        bVar6 = 0;
        uVar17 = uVar13;
        uVar5 = uVar15;
        if (((uVar12 | uVar14) & 1) == 0) {
          bVar6 = 0;
          uVar10 = uVar13;
          do {
            uVar3 = (uint)uVar10;
            uVar11 = (int)uVar3 >> 1;
            bVar6 = bVar6 + 1;
            uVar9 = (uint)uVar5;
            uVar5 = (uint64_t)(uint)((int)uVar9 >> 1);
            uVar10 = (uint64_t)uVar11;
            uVar17 = (uint64_t)uVar11;
          } while (((uVar3 | uVar9) & 2) == 0);
        }
        do {
          uVar10 = uVar17;
          iVar2 = (int)uVar10;
          uVar17 = (uint64_t)(uint)(iVar2 >> 1);
        } while ((uVar10 & 1) == 0);
        do {
          uVar17 = uVar5;
          iVar7 = (int)uVar17;
          uVar5 = (uint64_t)(uint)(iVar7 >> 1);
        } while ((uVar17 & 1) == 0);
        iVar18 = 1;
        if (((iVar2 != 1) && (iVar7 != 1)) && (iVar18 = iVar2, iVar2 != iVar7)) {
          do {
            iVar7 = (int)uVar10;
            iVar2 = (int)uVar17;
            uVar11 = iVar7 - iVar2;
            if (iVar7 - iVar2 == 0 || iVar7 < iVar2) {
              uVar5 = (uint64_t)(uint)(iVar2 - iVar7);
              do {
                uVar17 = (uint64_t)(uint)((int)uVar5 >> 1);
                uVar1 = uVar5 & 2;
                uVar5 = uVar17;
              } while (uVar1 == 0);
            }
            else {
              do {
                uVar9 = (int)uVar11 >> 1;
                uVar3 = uVar11 & 2;
                uVar11 = uVar9;
              } while (uVar3 == 0);
              uVar10 = (uint64_t)uVar9;
            }
            iVar18 = (int)uVar10;
          } while (iVar18 != (int)uVar17);
        }
        uVar11 = iVar18 << (bVar6 & 0x1f);
      }
      if (1 < (int)uVar16) {
        this_ptr = (int64_t)((uint64_t)(uint)(iVar4 >> 0x1f) << 0x20 | this_ptr & 0xffffffff) /
                    (int64_t)(int)uVar16 & 0xffffffff;
      }
      if (1 < (int)uVar11) {
        uVar13 = (int64_t)((uint64_t)(uint)((int)uVar12 >> 0x1f) << 0x20 | uVar13) /
                 (int64_t)(int)uVar11 & 0xffffffff;
      }
      if (1 < (int)uVar16) {
        arg1 = (int64_t)((uint64_t)(uint)(iVar8 >> 0x1f) << 0x20 | arg1 & 0xffffffff) /
                    (int64_t)(int)uVar16 & 0xffffffff;
      }
      uVar12 = uVar14;
      if (1 < (int)uVar11) {
        uVar12 = (uint)((int64_t)((uint64_t)(uint)((int)uVar14 >> 0x1f) << 0x20 | uVar15) /
                       (int64_t)(int)uVar11);
      }
      uVar11 = (int)arg1 * (int)uVar13;
      iVar8 = (int)(uVar12 * (int)this_ptr) % (int)uVar11;
      uVar12 = -uVar11;
      if (0 < (int)uVar11) {
        uVar12 = uVar11;
      }
      uVar15 = 0;
      uVar12 = iVar8 >> 0x1f & uVar12;
      if (param_2 == '\0') {
        uVar12 = 0;
      }
      uVar14 = uVar14 * (int)uVar13;
      if (uVar14 != 0) {
        uVar12 = uVar12 + iVar8;
        if (uVar12 == 0) {
          uVar13 = 1;
        }
        else {
          uVar11 = -uVar14;
          if (0 < (int)uVar14) {
            uVar11 = uVar14;
          }
          uVar13 = (uint64_t)uVar11;
          uVar11 = -uVar12;
          if (-1 < (int)uVar14) {
            uVar11 = uVar12;
          }
          uVar17 = (uint64_t)uVar11;
          if ((uVar11 & 1) == 0) {
            do {
              uVar11 = (uint)uVar17;
              if ((uVar13 & 1) != 0) goto LAB_00e7cb8b;
              uVar15 = (uint64_t)(uint)((int)uVar11 >> 1);
              uVar13 = uVar13 >> 1;
              uVar5 = uVar17 & 2;
              uVar17 = uVar15;
            } while (uVar5 == 0);
          }
          else {
LAB_00e7cb8b:
            uVar15 = (uint64_t)uVar11;
          }
          iVar8 = (int)uVar15;
          uVar17 = (uint64_t)(uint)-iVar8;
          if (0 < iVar8) {
            uVar17 = uVar15;
          }
          do {
            uVar10 = uVar17;
            uVar17 = uVar10 >> 1;
            uVar5 = uVar13;
          } while ((uVar10 & 1) == 0);
          do {
            uVar17 = uVar5;
            uVar5 = (uint64_t)(uint)((int)uVar17 >> 1);
          } while ((uVar17 & 1) == 0);
          if (((int)uVar10 != 1) && ((int)uVar17 != 1)) {
            while( true ) {
              iVar2 = (int)uVar10;
              iVar4 = (int)uVar17;
              if (iVar2 == iVar4) break;
              uVar14 = iVar2 - iVar4;
              if (uVar14 == 0 || iVar2 < iVar4) {
                uVar5 = (uint64_t)(uint)(iVar4 - iVar2);
                do {
                  uVar17 = (uint64_t)(uint)((int)uVar5 >> 1);
                  uVar1 = uVar5 & 2;
                  uVar5 = uVar17;
                } while (uVar1 == 0);
              }
              else {
                do {
                  uVar11 = (int)uVar14 >> 1;
                  uVar12 = uVar14 & 2;
                  uVar14 = uVar11;
                } while (uVar12 == 0);
                uVar10 = (uint64_t)uVar11;
              }
            }
            if (1 < iVar2) {
              uVar15 = (int64_t)iVar8 / (int64_t)iVar2 & 0xffffffff;
              uVar13 = (int64_t)(int)uVar13 / (int64_t)iVar2 & 0xffffffff;
            }
          }
        }
        uVar15 = uVar15 | uVar13 << 0x20;
      }
      return uVar15 & 0xffffffff00000000 | (uint64_t)(uVar16 * (int)uVar15);
    }
  }
  return 0;
}



// ============================================================
// 0131bcd0
// ============================================================
// Function: FUN_0131bcd0
// Address: 0131bcd0
// Size: 1822 bytes
// Class: MULSSGenerator

uint64_t FUN_0131bcd0(void* param_1,uint param_2)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  void *pvVar6;
  int64_t lVar7;
  char *pcVar8;
  void* pVar9;
  void* pVar10;
  char *pcVar11;
  uint32_t uVar12;
  int64_t lVar13;
  uint64_t uVar14;
  byte unaff_SIL;
  int64_t *this_ptr;
  bool bVar15;
  uint8_t local_a0 [8];
  uint8_t local_98;
  uint8_t local_88;
  int64_t local_80;
  char local_78;
  byte local_6c;
  uint local_68;
  uint local_64;
  uint32_t local_60;
  void* local_5c;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*this_ptr != 0) {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01505930();
    if (local_48 == 0) {
      bVar15 = false;
    }
    else {
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01505930();
      bVar15 = *(int *)(local_58 + 0xc) == 1;
      if (local_50 != '\0') {
        FUN_00d50b20();
      }
    }
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (bVar15) {
      lVar13 = *this_ptr;
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        lVar13 = *this_ptr;
        lVar7 = FUN_00e8b990();
        if (lVar7 != 0) {
          lVar13 = *(int64_t *)(lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
        }
      }
      FUN_01505930();
      FUN_00d23310();
      lVar7 = local_48;
      pcVar11 = local_40;
      local_38[0] = local_40[0];
      pcVar8 = pcVar11;
      if (local_40[0] == '\0') {
        pcVar8 = local_38;
      }
      *pcVar8 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      pVar9 = (void*)pcVar11;
      if (lVar7 == 0) {
        lVar7 = 0;
        uVar12 = (uint32_t)CONCAT71((int7)((uint64_t)lVar13 >> 8),1);
      }
      else {
        if (local_38[0] == '\0') {
          FUN_00d50b00();
        }
        uVar12 = 0;
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        local_60 = uVar12;
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        bVar1 = FUN_01505ea0();
        pVar9 = param_2 & 0xff;
        local_68 = pVar9;
        if ((bVar1 & unaff_SIL) == 1) {
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01506110();
          bVar1 = 1;
        }
        else {
          bVar1 = bVar1 ^ 1;
        }
        local_5c = CONCAT31(local_5c._1_3_,bVar1);
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_015058d0();
        lVar13 = local_48;
        if (local_40[0] == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40[0] = '\0';
        }
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cb110();
        lVar7 = local_58;
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_98 = 1;
        local_64 = (uint)unaff_SIL;
        local_6c = unaff_SIL;
        cVar2 = FUN_013157a0(local_64,local_a0,1);
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if (lVar13 != 0) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        cVar3 = FUN_01316740();
        cVar4 = FUN_013168e0();
        pcVar8 = (char *)0x0;
        pVar9 = 0;
        pcVar11 = (char *)(uint64_t)(byte)local_5c;
        if (cVar2 == '\0') {
          pcVar11 = pcVar8;
        }
        if (cVar3 == '\0') {
          pcVar11 = pcVar8;
        }
        if (cVar4 == '\0') {
          pcVar11 = pcVar8;
        }
        pvVar6 = _pthread_getspecific(0);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cb480();
        if (local_48 == 0) {
          bVar15 = false;
        }
        else {
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012cb480();
          bVar15 = *(int *)(local_58 + 0xc) != 0;
          if (local_50 != '\0') {
            FUN_00d50b20();
          }
        }
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        pVar10 = (void*)pcVar11;
        pVar9 = 0;
        if (bVar15 == false) {
          pVar9 = pVar10;
        }
        if ((local_6c & bVar15) == 1) {
          while( true ) {
            local_5c = pVar10;
            pvVar6 = _pthread_getspecific((void*)pcVar11);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012cb480();
            FUN_00d23340();
            lVar13 = local_48;
            local_38[0] = local_40[0];
            pcVar11 = local_38;
            pcVar8 = local_40;
            if (local_40[0] == '\0') {
              pcVar8 = pcVar11;
            }
            *pcVar8 = '\0';
            if ((local_40[0] != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38[0] == '\0') && (lVar13 != 0)) {
              FUN_00d50b00();
            }
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
            pVar10 = (void*)pcVar11;
            if (lVar13 == 0) break;
            pvVar6 = _pthread_getspecific(pVar10);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_80 = lVar13;
            local_78 = '\0';
            FUN_012cb5e0();
            if ((local_78 != '\0') && (local_80 != 0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            pVar10 = local_5c;
          }
          cVar2 = (char)local_5c;
        }
        else {
          cVar2 = (char)pVar9;
        }
        pvVar6 = _pthread_getspecific(pVar10);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cb110();
        lVar13 = local_48;
        if (local_40[0] == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40[0] = '\0';
        }
        local_88 = 1;
        bVar1 = FUN_01319320(local_68,1);
        if (lVar13 != 0) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        bVar5 = FUN_0131a4f0();
        uVar14 = CONCAT71((int7)((uint64_t)lVar13 >> 8),cVar2 != '\0' & bVar5 & bVar1);
        if ((char)local_60 == '\0') {
          FUN_00d50b20();
        }
        goto LAB_0131bf19;
      }
    }
  }
  uVar14 = 0;
LAB_0131bf19:
  return uVar14 & 0xffffffff;
}



// ============================================================
// 012ef510
// ============================================================
// Function: FUN_012ef510
// Address: 012ef510
// Size: 2841 bytes
// Class: MULSSGenerator

void FUN_012ef510(int64_t param_1,double param_2,byte param_3,uint64_t param_4)

{
  bool bVar1;
  int64_t lVar2;
  char cVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  void* pVar8;
  int64_t lVar9;
  int64_t *arg1;
  byte bVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int64_t *local_res8;
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
  uint64_t local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  double local_80;
  int64_t local_78;
  int64_t local_60;
  char local_58;
  int local_48;
  
  if (*arg1 == 0) {
    return;
  }
  if (*(int *)(*arg1 + 0xc) == 0) {
    return;
  }
  local_60 = CONCAT44(local_60._4_4_,1);
  lVar2 = local_60;
  lVar5 = param_1;
  local_a8 = param_4;
  local_80 = param_2;
  if (param_4 >> 0x20 == 0) {
LAB_012ef57c:
    pVar8 = (void*)lVar5;
    bVar10 = 1;
  }
  else {
    cVar3 = FUN_00e7c630();
    pVar8 = (void*)lVar5;
    if (cVar3 == '\0') goto LAB_012ef57c;
    bVar10 = param_3 ^ 1;
  }
  FUN_01266770();
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_012e8920();
  lVar5 = local_90;
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012caf10();
  local_78 = local_60;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_88 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar8);
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    pVar8 = 1;
  }
  FUN_0125e930();
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0152ebe0();
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_a0 = FUN_01507970();
  FUN_00e7bac0();
  local_b8 = local_a0;
  local_a0 = param_1;
  FUN_00e7b970();
  lVar5 = local_a0;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (param_3 == 0) {
    dVar11 = (double)FUN_00e7c860();
    pvVar4 = _pthread_getspecific(pVar8);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar12 = (double)FUN_01259650();
    pvVar4 = _pthread_getspecific(pVar8);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_80 = (double)FUN_016c25f0(dVar12);
    dVar13 = (double)FUN_00e7c860();
    pvVar4 = _pthread_getspecific(pVar8);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      pVar8 = (void*)local_78;
    }
    local_80 = (double)FUN_016c26c0(dVar11 + local_80 * dVar13);
    lVar5 = *arg1;
    if (lVar5 != 0) {
      local_80 = local_80 - dVar12;
      local_58 = '\0';
      local_60 = 0;
      local_48 = -1;
      while( true ) {
        lVar6 = (int64_t)local_48;
        local_48 = local_48 + 1;
        if (*(int *)(lVar5 + 0xc) <= local_48) break;
        lVar9 = *(int64_t *)(lVar5 + 0x10);
        local_60 = *(int64_t *)(lVar9 + 8 + lVar6 * 8);
        pvVar4 = _pthread_getspecific((void*)lVar9);
        pVar8 = (void*)lVar9;
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar4 = _pthread_getspecific(pVar8);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar11 = (double)FUN_0125a280();
        FUN_012642b0(dVar11 + local_80);
      }
      FUN_001159b0();
      pVar8 = (void*)lVar5;
    }
  }
  else {
    local_148 = local_78;
    local_140 = '\0';
    FUN_00e7c860();
    local_138 = *local_res8;
    local_130 = '\0';
    FUN_012910e0(lVar5,&local_148,&local_138);
    pVar8 = (void*)lVar5;
    if ((local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_012e6c30();
  FUN_012e7fb0();
  if (local_58 == '\0') {
    if (local_60 == 0) goto LAB_012efc1b;
    FUN_00d50b00();
  }
  else if (local_60 == 0) goto LAB_012efc1b;
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_128 = *arg1;
  local_120 = '\0';
  FUN_0150ddd0();
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_012efc1b:
  local_118 = *arg1;
  local_110 = '\0';
  FUN_0127f8b0();
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  lVar5 = *arg1;
  if (lVar5 == 0) {
    local_e8 = 0;
  }
  else {
    local_48 = -1;
    do {
      local_48 = local_48 + 1;
      if (*(int *)(lVar5 + 0xc) <= local_48) goto LAB_012eff5a;
      pVar8 = (void*)*(void*)(lVar5 + 0x10);
      pvVar4 = _pthread_getspecific(pVar8);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      if (local_90 == 0) {
        bVar1 = false;
      }
      else {
        pvVar4 = _pthread_getspecific(pVar8);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        pvVar4 = _pthread_getspecific(pVar8);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152ebe0();
        if (local_a0 == 0) {
          bVar1 = false;
        }
        else {
          pvVar4 = _pthread_getspecific(pVar8);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar4 = _pthread_getspecific(pVar8);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152ebe0();
          pvVar4 = _pthread_getspecific(pVar8);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar7 = FUN_01508530();
          bVar1 = uVar7 >> 0x20 == 0;
          if ((local_100 != '\0') && (local_108 != 0)) {
            FUN_00d50b20();
          }
          if ((local_f0 != '\0') && (local_f8 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
    } while (!bVar1);
    bVar10 = 1;
LAB_012eff5a:
    FUN_001159b0();
    local_e8 = *arg1;
  }
  local_e0 = '\0';
  FUN_012879b0();
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if (bVar10 == 0) {
    local_c8 = *arg1;
    local_c0 = '\0';
    FUN_0152eef0();
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_d8 = *arg1;
    local_d0 = '\0';
    FUN_00e7bdb0();
    FUN_01287c80();
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
  }
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 012ec4a0
// ============================================================
// Function: FUN_012ec4a0
// Address: 012ec4a0
// Size: 2143 bytes
// Class: MULSSGenerator

void FUN_012ec4a0(void* param_1)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  void *pvVar5;
  int64_t lVar6;
  void* pVar7;
  int64_t this_ptr;
  int iVar8;
  void* pVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  int64_t local_b8;
  char local_b0;
  double local_40;
  double local_38;
  
  if (*(char *)(this_ptr + 0x6b) != '\0') {
    return;
  }
  *(void*)(this_ptr + 0x6b) = 1;
  dVar11 = (double)FUN_012f7cb0();
  dVar12 = (double)FUN_012f7cb0();
  dVar13 = (double)FUN_012f7d90();
  iVar8 = 0;
  if (*(int64_t *)(this_ptr + 0x60) == 0) {
    pVar9 = 0;
    lVar6 = *(int64_t *)(this_ptr + 0xb0);
    if (lVar6 != 0) goto LAB_012ec5a1;
LAB_012ecc8f:
    local_40 = 0.0;
    local_38 = 0.0;
    if ((*(double *)(this_ptr + 0x78) == 0.0) && (!NAN(*(double *)(this_ptr + 0x78))))
    goto LAB_012ecd00;
  }
  else {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    bVar3 = FUN_016572c0();
    pVar9 = 2 - bVar3;
    if (*(int64_t *)(this_ptr + 0x60) != 0) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      bVar3 = FUN_01657320();
      iVar8 = 2 - (uint)bVar3;
    }
    lVar6 = *(int64_t *)(this_ptr + 0xb0);
    if (lVar6 == 0) goto LAB_012ecc8f;
LAB_012ec5a1:
    if (*(int *)(lVar6 + 0xc) < 1) {
      local_40 = 0.0;
      local_38 = 0.0;
    }
    else {
      dVar12 = dVar12 + dVar13;
      dVar16 = dVar11 + g_0240d350;
      dVar13 = g_0240d350 + dVar12;
      local_38 = 0.0;
      iVar10 = 0;
      local_40 = 0.0;
      do {
        pVar7 = pVar9;
        dVar14 = local_38;
        if (pVar9 == 1) {
          pvVar5 = _pthread_getspecific(1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar4 = FUN_0129aaf0();
          if (cVar4 == '\0') goto joined_r0x012ec797;
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar4 = FUN_0129adc0();
          pVar7 = 0x2802558;
          if (cVar4 == '\0') {
            pvVar5 = _pthread_getspecific(0x2802558);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar15 = (double)FUN_012648e0();
            pvVar5 = _pthread_getspecific(pVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0129b5c0(dVar16);
            dVar14 = g_0240d2e8;
            if (dVar11 - dVar15 <= g_0240d2e8) {
              dVar14 = dVar11 - dVar15;
            }
            if (dVar14 <= local_38) {
              dVar14 = local_38;
            }
joined_r0x012ec8c4:
            bVar2 = true;
            local_38 = dVar14;
          }
          else {
            pvVar5 = _pthread_getspecific(0x2802558);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar15 = (double)FUN_012648e0();
            dVar14 = dVar11 - dVar15;
            if (local_38 < dVar11 - dVar15) goto joined_r0x012ec797;
            bVar2 = false;
          }
          if (iVar8 == 2) goto LAB_012ec79d;
LAB_012ec8ca:
          if (iVar8 != 1) goto LAB_012ec970;
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar4 = FUN_0129ac30();
          if (cVar4 == '\0') goto LAB_012ec970;
          if (pVar9 == 1) {
            pvVar5 = _pthread_getspecific(pVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0129aeb0();
            if ((local_b0 != '\0') && (local_b8 != 0)) {
              FUN_00d50b20();
            }
            if (local_b8 != 0) {
              pvVar5 = _pthread_getspecific(pVar7);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              bVar1 = true;
              FUN_0129b630(dVar13);
              goto LAB_012ec972;
            }
          }
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar14 = (double)FUN_012648f0();
          dVar14 = dVar14 - dVar12;
          bVar1 = g_0240d2e8 < dVar14;
          if (g_0240d2e8 < dVar14) {
            pvVar5 = _pthread_getspecific(pVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0129b630(dVar12);
            dVar14 = g_0240d2e8;
          }
          if (local_40 < dVar14) {
            local_40 = dVar14;
          }
        }
        else {
          if (pVar9 == 2) {
            pvVar5 = _pthread_getspecific(2);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar4 = FUN_0129aaf0();
            if (cVar4 != '\0') {
              pvVar5 = _pthread_getspecific(pVar7);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0129b5c0(dVar16);
              goto joined_r0x012ec8c4;
            }
          }
joined_r0x012ec797:
          local_38 = dVar14;
          bVar2 = false;
          if (iVar8 != 2) goto LAB_012ec8ca;
LAB_012ec79d:
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar4 = FUN_0129ac30();
          if (cVar4 != '\0') {
            pvVar5 = _pthread_getspecific(pVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            bVar1 = true;
            FUN_0129b630(dVar12);
            goto LAB_012ec972;
          }
LAB_012ec970:
          bVar1 = false;
        }
LAB_012ec972:
        if (!bVar2) {
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar14 = (double)FUN_0129b5b0();
          if (!NAN(dVar14)) {
            pvVar5 = _pthread_getspecific(pVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0129b5c0(g_023908c8);
          }
        }
        if (!bVar1) {
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar14 = (double)FUN_0129b620();
          if (!NAN(dVar14)) {
            pvVar5 = _pthread_getspecific(pVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0129b630(g_023908c8);
          }
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(lVar6 + 0xc));
    }
    FUN_001159b0();
    if ((local_38 == *(double *)(this_ptr + 0x78)) &&
       (!NAN(local_38) && !NAN(*(double *)(this_ptr + 0x78)))) goto LAB_012ecd00;
  }
  FUN_00d64850();
  *(double *)(this_ptr + 0x78) = local_38;
  FUN_00d64910();
LAB_012ecd00:
  if ((local_40 != *(double *)(this_ptr + 0x80)) ||
     (NAN(local_40) || NAN(*(double *)(this_ptr + 0x80)))) {
    FUN_00d64850();
    *(double *)(this_ptr + 0x80) = local_40;
    FUN_00d64910();
  }
  return;
}



// ============================================================
// 01319960
// ============================================================
// Function: FUN_01319960
// Address: 01319960
// Size: 2103 bytes
// Class: MULSSGenerator

uint32_t FUN_01319960(void* param_1)

{
  bool bVar1;
  uint32_t uVar2;
  void *pvVar3;
  char unaff_SIL;
  int iVar4;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  uint32_t local_44;
  int64_t local_40;
  char local_38;
  
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  if (local_98 == '\0') {
    if (local_a0 != 0) {
      FUN_00d50b00();
      goto LAB_01319a03;
    }
  }
  else if (local_a0 != 0) {
LAB_01319a03:
    if (*(int *)(local_a0 + 0xc) < 1) {
      local_44 = 1;
    }
    else {
      local_44 = 1;
      iVar4 = 0;
      do {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01270ab0();
        if (local_38 == '\0') {
          if (local_40 == 0) goto LAB_01319ba0;
          FUN_00d50b00();
LAB_01319b00:
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dff00();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 == 0) {
            bVar1 = false;
            uVar2 = 0;
            if (unaff_SIL != '\0') {
              pvVar3 = _pthread_getspecific(param_1);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012dffb0();
LAB_0131a182:
              bVar1 = false;
              uVar2 = local_44;
            }
          }
          else {
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012dff70();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if (local_40 != 0) {
              pvVar3 = _pthread_getspecific(param_1);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012dff00();
              pvVar3 = _pthread_getspecific(param_1);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01266fe0();
              pvVar3 = _pthread_getspecific(param_1);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012dff70();
              pvVar3 = _pthread_getspecific(param_1);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01266fe0();
              if ((local_a8 != '\0') && (local_b0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_58 != '\0') && (local_60 != 0)) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              if ((local_68 != '\0') && (local_70 != 0)) {
                FUN_00d50b20();
              }
              if (local_40 != local_b0) {
                pvVar3 = _pthread_getspecific(param_1);
                if (pvVar3 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012dff70();
                if ((local_38 == '\0') && (local_40 != 0)) {
                  FUN_00d50b00();
                }
                if (unaff_SIL == '\0') {
                  local_44 = 0;
                }
                else {
                  pvVar3 = _pthread_getspecific(param_1);
                  if (pvVar3 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_012dffb0();
                }
                if (local_40 != 0) {
                  FUN_00d50b20();
                }
              }
              bVar1 = false;
              goto LAB_01319eae;
            }
            bVar1 = false;
            uVar2 = 0;
            if (unaff_SIL != '\0') {
              pvVar3 = _pthread_getspecific(param_1);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012dffb0();
              goto LAB_0131a182;
            }
          }
        }
        else {
          if (local_40 != 0) goto LAB_01319b00;
LAB_01319ba0:
          bVar1 = true;
LAB_01319eae:
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012708c0();
          uVar2 = local_44;
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
              goto LAB_01319f30;
            }
          }
          else if (local_40 != 0) {
LAB_01319f30:
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012dff00();
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012dff70();
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            if ((local_a8 != '\0') && (local_b0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
            if (local_40 != local_b0) {
              pvVar3 = _pthread_getspecific(param_1);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012dff00();
              if ((local_38 == '\0') && (local_40 != 0)) {
                FUN_00d50b00();
              }
              if (unaff_SIL == '\0') {
                local_44 = 0;
              }
              else {
                pvVar3 = _pthread_getspecific(param_1);
                if (pvVar3 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012dffb0();
              }
              if (local_40 != 0) {
                FUN_00d50b20();
              }
            }
            FUN_00d50b20();
            uVar2 = local_44;
          }
        }
        local_44 = uVar2;
        if (!bVar1) {
          FUN_00d50b20();
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(local_a0 + 0xc));
    }
    FUN_001159b0();
    FUN_00d50b20();
    return local_44;
  }
  return 1;
}



// ============================================================
// 012e8e10
// ============================================================
// Function: FUN_012e8e10
// Address: 012e8e10
// Size: 1774 bytes
// Class: MULSSGenerator

int64_t * FUN_012e8e10(double param_1,double param_2)

{
  int iVar1;
  int iVar2;
  int64_t lVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  void *pvVar7;
  int64_t lVar8;
  int64_t lVar9;
  void* pVar10;
  uint uVar11;
  code *in_RCX;
  code *pcVar12;
  uint64_t uVar13;
  int iVar14;
  int64_t *in_RDX;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar15;
  int64_t lVar16;
  uint64_t local_80;
  int local_60;
  int64_t local_40;
  char local_38;
  
  lVar3 = *(int64_t *)(arg1 + 0x138);
  if (lVar3 == 0) {
LAB_012e8ea5:
    lVar8 = *(int64_t *)(arg1 + 0xb0);
    if (lVar8 == 0) goto LAB_012e9168;
    if (*(int *)(lVar8 + 0xc) < 1) {
      bVar4 = false;
      lVar16 = 0;
    }
    else {
      lVar15 = 0;
      lVar16 = 0;
      bVar4 = false;
      do {
        lVar9 = *(int64_t *)(*(int64_t *)(lVar8 + 0x10) + lVar15 * 8);
        cVar5 = (*in_RCX)(param_1,param_2);
        if (cVar5 != '\0') {
          if (*in_RDX != 0) {
            local_38 = '\0';
            cVar5 = FUN_00d24090();
            local_40 = lVar9;
            if (cVar5 != '\0') goto LAB_012e8ef4;
          }
          if (lVar16 == 0) {
            FUN_0025e9a0();
            if (local_40 == 0) {
              lVar16 = 0;
            }
            else {
              bVar4 = true;
              lVar16 = local_40;
              if (local_38 == '\0') {
                FUN_00d50b00();
              }
            }
          }
          local_38 = '\0';
          FUN_00d24b60(0,FUN_012e8c90,0);
          local_40 = lVar9;
        }
LAB_012e8ef4:
        lVar15 = lVar15 + 1;
      } while ((int)lVar15 < *(int *)(lVar8 + 0xc));
    }
    FUN_001159b0();
LAB_012e94f5:
    *(void*)(this_ptr + 1) = 0;
    if (bVar4) goto LAB_012e951b;
    if (lVar16 != 0) {
      FUN_00d50b00();
      goto LAB_012e951b;
    }
  }
  else {
    pcVar12 = in_RCX;
    FUN_00d50b00();
    pVar10 = (void*)pcVar12;
    pvVar7 = _pthread_getspecific(pVar10);
    if ((pvVar7 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
      cVar5 = *(char *)(lVar3 + 0x38);
    }
    else {
      cVar5 = *(char *)(*(int64_t *)(lVar3 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8)
                       + 0x38);
    }
    if (cVar5 == '\0') goto LAB_012e8ea5;
    pvVar7 = _pthread_getspecific(pVar10);
    lVar8 = lVar3;
    if ((pvVar7 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
      lVar8 = *(int64_t *)(lVar3 + 0x20 + (uint64_t)(*(uint *)(lVar16 + 0x154) & 1) * 8);
    }
    iVar14 = *(int *)(lVar8 + 0x3c);
    pvVar7 = _pthread_getspecific(pVar10);
    lVar8 = lVar3;
    if ((pvVar7 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
      lVar8 = *(int64_t *)(lVar3 + 0x20 + (uint64_t)(*(uint *)(lVar16 + 0x154) & 1) * 8);
    }
    iVar1 = *(int *)(lVar8 + 0x40);
    pvVar7 = _pthread_getspecific(pVar10);
    lVar8 = lVar3;
    if ((pvVar7 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
      lVar8 = *(int64_t *)(lVar3 + 0x20 + (uint64_t)(*(uint *)(lVar16 + 0x154) & 1) * 8);
    }
    iVar2 = *(int *)(lVar8 + 0x3c);
    pvVar7 = _pthread_getspecific(pVar10);
    lVar8 = lVar3;
    if ((pvVar7 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
      lVar8 = *(int64_t *)(lVar3 + 0x20 + (uint64_t)(*(uint *)(lVar16 + 0x154) & 1) * 8);
    }
    uVar11 = (uint)(param_1 / (double)iVar14 + (double)iVar1);
    uVar13 = (uint64_t)uVar11;
    iVar14 = (int)((double)*(int *)(lVar8 + 0x40) + (param_1 + param_2) / (double)iVar2);
    uVar6 = 0;
    if (-1 < (int)uVar11) {
      uVar6 = uVar11;
    }
    if ((int)uVar6 <= iVar14) {
      lVar16 = 0;
      bVar4 = false;
      local_80 = (uint64_t)uVar6;
LAB_012e91cc:
      pVar10 = (void*)uVar13;
      pvVar7 = _pthread_getspecific(pVar10);
      if ((pvVar7 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
        iVar1 = *(int *)(*(int64_t *)(lVar3 + 0x48) + 0xc);
      }
      else {
        iVar1 = *(int *)(*(int64_t *)
                          (*(int64_t *)
                            (lVar3 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8) + 0x48) +
                        0xc);
      }
      if ((int64_t)local_80 < (int64_t)iVar1) {
        pvVar7 = _pthread_getspecific(pVar10);
        lVar8 = lVar3;
        if ((pvVar7 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          lVar8 = *(int64_t *)(lVar3 + 0x20 + (uint64_t)(*(uint *)(lVar15 + 0x154) & 1) * 8);
        }
        lVar8 = *(int64_t *)(*(int64_t *)(*(int64_t *)(lVar8 + 0x48) + 0x10) + local_80 * 8);
        uVar13 = local_80;
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        pvVar7 = _pthread_getspecific((void*)uVar13);
        if ((pvVar7 == (void *)0x0) || (lVar15 = FUN_00e8b990(), lVar15 == 0)) {
          lVar15 = *(int64_t *)(lVar8 + 0x38);
        }
        else {
          lVar15 = *(int64_t *)
                    (*(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar15 + 0x154) & 1) * 8) +
                    0x38);
        }
        if (lVar15 != 0) {
          local_60 = -1;
LAB_012e9303:
          do {
            lVar9 = (int64_t)local_60;
            local_60 = local_60 + 1;
            if (*(int *)(lVar15 + 0xc) <= local_60) goto LAB_012e94c0;
            lVar9 = *(int64_t *)(*(int64_t *)(lVar15 + 0x10) + 8 + lVar9 * 8);
            cVar5 = (*in_RCX)(param_1,param_2);
            if (cVar5 != '\0') {
              if (*in_RDX != 0) {
                local_38 = '\0';
                cVar5 = FUN_00d24090();
                local_40 = lVar9;
                if (cVar5 != '\0') goto LAB_012e9303;
              }
              if (lVar16 == 0) {
                FUN_0025e9a0();
                if (local_40 == 0) {
                  lVar16 = 0;
                }
                else {
                  bVar4 = true;
                  lVar16 = local_40;
                  if (local_38 == '\0') {
                    FUN_00d50b00();
                  }
                }
              }
              local_38 = '\0';
              cVar5 = FUN_00d24090();
              local_40 = lVar9;
              if (cVar5 == '\0') {
                local_38 = '\0';
                FUN_00d24b60(0,FUN_012e8c90,0);
              }
            }
          } while( true );
        }
        goto LAB_012e94cc;
      }
      goto LAB_012e94f5;
    }
LAB_012e9168:
    *(void*)(this_ptr + 1) = 0;
  }
  lVar16 = 0;
LAB_012e951b:
  *this_ptr = lVar16;
  *(void*)(this_ptr + 1) = 1;
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
LAB_012e94c0:
  FUN_001159b0();
LAB_012e94cc:
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  uVar13 = local_80 + 1;
  local_80 = uVar13;
  if (uVar13 == iVar14 + 1) goto LAB_012e94f5;
  goto LAB_012e91cc;
}



// ============================================================
// 012ce720
// ============================================================
// Function: FUN_012ce720
// Address: 012ce720
// Size: 1475 bytes
// Class: MULSSGenerator

void FUN_012ce720(void* param_1,void *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  int64_t *local_48;
  char local_40;
  
  bVar1 = false;
  plVar10 = (int64_t *)0x0;
  bVar2 = false;
  plVar8 = (int64_t *)0x0;
  bVar5 = false;
LAB_012ce75d:
  FUN_00dee5a0(g_023908c8);
  do {
    FUN_012cf020();
    if (local_40 == '\0') {
      if (local_48 == (int64_t *)0x0) break;
      FUN_00d50b00();
    }
    else if (local_48 == (int64_t *)0x0) break;
    (**(code **)(*local_48 + 0x5d0))();
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
        goto LAB_012ce850;
      }
    }
    else if (local_48 != (int64_t *)0x0) {
LAB_012ce850:
      plVar9 = plVar8;
      bVar3 = bVar2;
      if (!bVar5) {
        FUN_00b33760();
        if (local_48 == plVar10) {
          if ((bVar1) || (local_48 == (int64_t *)0x0)) {
joined_r0x012ce911:
            plVar7 = plVar10;
            bVar5 = bVar1;
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            plVar7 = plVar10;
            bVar5 = true;
            if (local_40 == '\0') {
              FUN_00d50b00();
              goto LAB_012ce8f9;
            }
          }
        }
        else {
          plVar7 = local_48;
          if (local_40 == '\0') {
            if (local_48 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            bVar5 = true;
            if ((bVar1) && (plVar10 != (int64_t *)0x0)) {
              FUN_00d50b20();
              plVar10 = local_48;
LAB_012ce8f9:
              bVar1 = true;
              goto joined_r0x012ce911;
            }
          }
          else {
            bVar5 = true;
            if ((bVar1) && (plVar10 != (int64_t *)0x0)) {
              FUN_00d50b20();
              bVar5 = true;
            }
          }
        }
        bVar1 = bVar5;
        bVar5 = true;
        if (plVar7 == (int64_t *)0x0) {
          plVar10 = (int64_t *)0x0;
        }
        else {
          (**(code **)(*plVar7 + 0x368))();
          plVar10 = plVar7;
          if (local_48 == plVar8) {
            if ((bVar2) || (local_48 == (int64_t *)0x0)) goto joined_r0x012ce9e4;
            bVar3 = true;
            if (local_40 == '\0') {
              FUN_00d50b00();
              goto LAB_012ce9cf;
            }
          }
          else {
            plVar9 = local_48;
            if (local_40 == '\0') {
              if (local_48 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              if ((bVar2) && (plVar8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
LAB_012ce9cf:
              bVar3 = true;
joined_r0x012ce9e4:
              if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              bVar3 = true;
              if ((bVar2) && (plVar8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
        }
      }
      FUN_00b33760();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      plVar8 = plVar9;
      bVar2 = bVar1;
      bVar4 = bVar3;
      if (local_48 == plVar10) {
        if (plVar10 != (int64_t *)0x0) goto LAB_012cec14;
        plVar10 = (int64_t *)0x0;
      }
      else {
        if ((plVar10 != (int64_t *)0x0) && (plVar9 != (int64_t *)0x0)) {
          (**(code **)(*plVar10 + 0x370))();
        }
        FUN_00b33760();
        if (local_48 == plVar10) {
          plVar7 = plVar10;
          if ((bVar1) || (plVar10 == (int64_t *)0x0)) {
LAB_012ceb1b:
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_012ceb2f;
          }
          if (local_40 == '\0') {
            FUN_00d50b00();
            bVar2 = true;
            goto LAB_012ceb1b;
          }
          bVar2 = true;
        }
        else {
          plVar7 = local_48;
          if (local_40 == '\0') {
            if (local_48 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            bVar2 = true;
            if ((bVar1) && (plVar10 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_012ceb1b;
          }
          bVar2 = true;
          if ((bVar1) && (plVar10 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_012ceb2f:
          plVar10 = plVar7;
          if (plVar7 == (int64_t *)0x0) {
            plVar10 = (int64_t *)0x0;
            bVar1 = bVar2;
            goto LAB_012cec45;
          }
        }
        (**(code **)(*plVar10 + 0x368))();
        if (local_48 == plVar9) {
          if ((!bVar3) && (local_48 != (int64_t *)0x0)) {
            bVar4 = true;
            if (local_40 != '\0') goto LAB_012cec14;
            FUN_00d50b00();
            bVar4 = true;
          }
        }
        else {
          plVar8 = local_48;
          if (local_40 != '\0') {
            bVar4 = true;
            if ((bVar3) && (plVar9 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_012cec14;
          }
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          bVar4 = true;
          if ((bVar3) && (plVar9 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_012cec14:
        bVar3 = bVar4;
        FUN_00da5ad0();
        FUN_00b33790();
        FUN_00da6740();
        plVar9 = plVar8;
        bVar1 = bVar2;
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_012cec45:
      if (*(char *)((int64_t)local_48 + 0x19f) != '\0') {
        _pthread_setspecific(param_1,param_2);
      }
      FUN_0130f550();
      if (*(char *)((int64_t)local_48 + 0x19f) != '\0') {
        _pthread_setspecific(param_1,param_2);
      }
      iVar6 = FUN_00e31690();
      if (iVar6 < 1) {
        FUN_00dee620();
      }
      FUN_00d50b20();
      plVar8 = plVar9;
      bVar2 = bVar3;
    }
    FUN_00d50b20();
  } while( true );
  if (g_028ac878 == '\x01') {
    if (plVar8 != (int64_t *)0x0) {
      (**(code **)(*plVar10 + 0x370))();
    }
    if ((bVar1) && (plVar10 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((bVar2) && (plVar8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    return;
  }
  goto LAB_012ce75d;
}



// ============================================================
// 006d8d80
// ============================================================
// Function: FUN_006d8d80
// Address: 006d8d80
// Size: 1478 bytes
// Class: MULSSGenerator

uint64_t FUN_006d8d80(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  char *pcVar2;
  char *pcVar3;
  void *pvVar4;
  int64_t lVar5;
  void* pVar6;
  int64_t this_ptr;
  int64_t lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint64_t uVar11;
  uint8_t auVar12 [16];
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  uint64_t extraout_XMM0_Qb_03;
  uint64_t extraout_XMM0_Qb_04;
  uint64_t extraout_XMM0_Qb_05;
  uint64_t extraout_XMM0_Qb_06;
  uint64_t extraout_XMM0_Qb_07;
  float fVar13;
  int64_t local_128;
  uint8_t local_120;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  float local_b4;
  int64_t local_b0;
  char local_a8 [8];
  int64_t local_a0;
  uint64_t local_98;
  uint32_t local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  float local_64;
  uint local_60;
  float local_5c;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (param_2 == 0) {
    return 1;
  }
  local_60 = FUN_01caecd0();
  if (local_60 == 1) {
    uVar11 = FUN_006cb500();
    lVar7 = local_b0;
    lVar1 = g_02726d08;
    if (local_a8[0] == '\0') {
      if (local_b0 != 0) {
        uVar11 = FUN_00d50b00();
        lVar1 = g_02726d08;
      }
    }
    else {
      local_a8[0] = '\0';
    }
    g_02726d08 = lVar1;
    if (lVar1 != 0) {
      uVar11 = FUN_00d50b00();
    }
    local_120 = 1;
    local_128 = lVar1;
    FUN_006d9620(uVar11,&local_128);
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00ca1380();
  lVar1 = local_b0;
  local_38[0] = local_a8[0];
  pcVar2 = local_a8;
  if (local_a8[0] == '\0') {
    pcVar2 = local_38;
  }
  *pcVar2 = '\0';
  if ((local_a8[0] != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  local_70 = 0;
  if ((local_38[0] == '\0') && (lVar1 != 0)) {
    FUN_00d50b00();
  }
  local_78 = lVar1;
  local_70 = '\x01';
  FUN_00e986f0();
  local_5c = (float)FUN_00e991a0();
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  fVar8 = (float)FUN_01caeac0();
  fVar9 = (float)(**(code **)(**(int64_t **)(this_ptr + 0x130) + 0xac0))();
  local_b4 = (float)(**(code **)(**(int64_t **)(this_ptr + 0x130) + 0xad0))();
  FUN_006cb500();
  lVar1 = local_b0;
  if (local_a8[0] == '\0') {
    if (local_b0 == 0) goto LAB_006d933d;
    FUN_00d50b00();
  }
  else if (local_b0 == 0) goto LAB_006d933d;
  local_a8[0] = '\0';
  local_b0 = 0;
  local_a0 = lVar1;
  local_90 = 0;
  local_98 = 0;
  if (0 < *(int *)(lVar1 + 0xc)) {
    fVar8 = fVar8 / local_5c;
    auVar12 = ZEXT416((uint)fVar8);
    lVar7 = 0;
    do {
      lVar5 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar7 * 8);
      local_f0 = '\0';
      local_f8 = lVar5;
      local_b0 = lVar5;
      FUN_00c9fe40(auVar12._0_8_,&local_f8);
      local_38[0] = local_40[0];
      pcVar2 = local_38;
      pcVar3 = local_40;
      if (local_40[0] == '\0') {
        pcVar3 = pcVar2;
      }
      *pcVar3 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      pVar6 = (void*)pcVar2;
      if ((local_38[0] == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == 0) {
LAB_006d90e0:
        fVar10 = (float)FUN_01caeac0();
      }
      else {
        if ((local_5c == g_0239424c) && (!NAN(local_5c) && !NAN(g_0239424c))) goto LAB_006d90e0;
        if (*(char *)(this_ptr + 0x1c0) == '\0') {
          fVar10 = (float)FUN_00d459e0();
        }
        else {
          fVar10 = (float)FUN_00d459e0();
        }
        fVar10 = fVar10 * fVar8;
      }
      fVar13 = fVar9;
      if (fVar9 <= fVar10) {
        fVar13 = fVar10;
      }
      fVar10 = (float)(~-(uint)NAN(fVar10) & (uint)fVar13 | -(uint)NAN(fVar10) & (uint)fVar9);
      local_64 = local_b4;
      if (fVar10 <= local_b4) {
        local_64 = fVar10;
      }
      if (local_60 < 2) {
        local_e0 = '\0';
        local_e8 = lVar5;
        FUN_004f9670();
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar5 = FUN_00e8b990();
        local_80 = 0;
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        local_80 = '\x01';
        local_88 = lVar5;
        auVar12._0_8_ = FUN_004fac10();
        auVar12._8_8_ = extraout_XMM0_Qb;
        if ((local_80 != '\0') && (local_88 != 0)) {
          auVar12._0_8_ = FUN_00d50b20();
          auVar12._8_8_ = extraout_XMM0_Qb_00;
        }
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          auVar12._0_8_ = FUN_00d50b20();
          auVar12._8_8_ = extraout_XMM0_Qb_01;
        }
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          auVar12._0_8_ = FUN_00d50b20();
          auVar12._8_8_ = extraout_XMM0_Qb_02;
        }
      }
      else {
        local_d0 = '\0';
        local_d8 = lVar5;
        FUN_004f9670();
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_c0 = '\0';
        local_c8 = 0;
        auVar12._0_8_ = FUN_004fac10();
        auVar12._8_8_ = extraout_XMM0_Qb_03;
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          auVar12._0_8_ = FUN_00d50b20();
          auVar12._8_8_ = extraout_XMM0_Qb_04;
        }
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          auVar12._0_8_ = FUN_00d50b20();
          auVar12._8_8_ = extraout_XMM0_Qb_05;
        }
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          auVar12._0_8_ = FUN_00d50b20();
          auVar12._8_8_ = extraout_XMM0_Qb_06;
        }
      }
      if (local_48 != 0) {
        auVar12._0_8_ = FUN_00d50b20();
        auVar12._8_8_ = extraout_XMM0_Qb_07;
      }
      lVar7 = lVar7 + 1;
      local_98 = CONCAT44(local_98._4_4_,(int)lVar7);
    } while ((int)lVar7 < *(int *)(lVar1 + 0xc));
  }
  FUN_000be170();
  FUN_00d50b20();
LAB_006d933d:
  if (local_60 == 3) {
    FUN_00ca1340();
  }
  return 1;
}



// ============================================================
// 006da4e0
// ============================================================
// Function: FUN_006da4e0
// Address: 006da4e0
// Size: 1450 bytes
// Class: MULSSGenerator
// String references:
//   "MULSSGenerator"

uint64_t FUN_006da4e0(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  int64_t lVar6;
  char *pcVar7;
  void *pvVar8;
  void* pVar9;
  int64_t **pplVar10;
  int64_t this_ptr;
  uint32_t uVar11;
  float fVar12;
  float extraout_XMM0_Da;
  float fVar13;
  float extraout_XMM0_Da_00;
  int64_t local_d8;
  uint8_t local_d0;
  uint8_t local_c0;
  int64_t local_b0;
  char local_a8;
  int local_9c;
  int64_t local_80;
  char local_78 [8];
  int64_t local_70;
  uint64_t local_68;
  int local_60;
  int64_t *local_58;
  char local_50 [8];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  char local_38 [8];
  
  if (param_2 == 0) {
    return 1;
  }
  iVar4 = FUN_01caecd0();
  if (iVar4 == 1) {
    uVar11 = FUN_006cb500();
    lVar6 = g_02726cb0;
    if (local_78[0] == '\0') {
      if (local_80 != 0) {
        uVar11 = FUN_00d50b00();
        lVar6 = g_02726cb0;
      }
    }
    else {
      local_78[0] = '\0';
    }
    local_c0 = 1;
    g_02726cb0 = lVar6;
    if (lVar6 != 0) {
      local_c0 = 1;
      uVar11 = FUN_00d50b00();
    }
    local_d0 = 1;
    local_d8 = lVar6;
    FUN_006d9620(uVar11,&local_d8);
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if (local_80 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00ca1380();
  local_38[0] = local_78[0];
  pcVar5 = local_78;
  if (local_78[0] == '\0') {
    pcVar5 = local_38;
  }
  *pcVar5 = '\0';
  if ((local_78[0] != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  local_9c = iVar4;
  if ((local_38[0] == '\0') && (local_80 != 0)) {
    FUN_00d50b00();
  }
  FUN_00e986f0();
  local_3c = (float)FUN_00e991a0();
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_80 != 0) {
    FUN_00d50b20();
  }
  local_40 = (float)FUN_01caeac0();
  local_48 = (float)(**(code **)(**(int64_t **)(this_ptr + 0x140) + 0xac0))();
  local_44 = (float)(**(code **)(**(int64_t **)(this_ptr + 0x140) + 0xad0))();
  FUN_006cb500();
  if (local_78[0] == '\0') {
    if (local_80 == 0) goto LAB_006daa98;
    FUN_00d50b00();
  }
  else if (local_80 == 0) goto LAB_006daa98;
  local_40 = local_40 * g_023908e0 - local_3c;
  local_48 = local_48 * g_023908e0;
  fVar12 = local_44 * g_023908e0;
  local_78[0] = '\0';
  local_70 = local_80;
  local_68 = 0xffffffff;
  local_60 = 0;
  iVar4 = 0;
  local_44 = fVar12;
  while( true ) {
    if (iVar4 != 0) {
      if (iVar4 < 1) {
        iVar4 = -iVar4;
      }
      else {
        local_68 = CONCAT44(local_68._4_4_,(int)local_68 - iVar4);
        FUN_00d23690(fVar12,iVar4);
        local_60 = local_60 + iVar4;
        iVar4 = 0;
      }
      local_68 = CONCAT44(iVar4,(int)local_68);
    }
    lVar6 = (int64_t)(int)local_68;
    iVar4 = (int)local_68 + 1;
    local_68 = CONCAT44(local_68._4_4_,iVar4);
    if (*(int *)(local_70 + 0xc) <= iVar4) break;
    local_b0 = *(int64_t *)(*(int64_t *)(local_70 + 0x10) + 8 + lVar6 * 8);
    local_a8 = '\0';
    FUN_00c9fe40(*(int64_t *)(local_70 + 0x10),&local_b0);
    plVar2 = local_58;
    local_38[0] = local_50[0];
    pcVar5 = local_38;
    pcVar7 = local_50;
    if (local_50[0] == '\0') {
      pcVar7 = pcVar5;
    }
    *pcVar7 = '\0';
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pVar9 = (void*)pcVar5;
    if ((local_38[0] == '\0') && (plVar2 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if (plVar2 == (int64_t *)0x0) {
      local_3c = (float)FUN_01caeac0();
      local_3c = local_3c * g_023908e0;
    }
    else if (*(char *)(this_ptr + 0x1c0) == '\0') {
      local_3c = (float)FUN_00d459e0();
      local_3c = local_3c + local_40;
    }
    else {
      local_3c = (float)FUN_00d459e0();
      fVar12 = (float)FUN_01caeac0();
      local_3c = local_3c + fVar12 * g_023908e0;
    }
    pvVar8 = _pthread_getspecific(pVar9);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar12 = (float)FUN_012e78c0();
    plVar1 = local_58;
    if ((g_0270c820 == '\0') &&
       (iVar4 = ___cxa_guard_acquire(), fVar12 = extraout_XMM0_Da_00, iVar4 != 0)) {
      g_027e77e8 = FUN_0015ef90();
      g_027e77d0 = "MULSSGenerator";
      g_027e77d8 = 0x70;
      g_027e77e0 = FUN_0015ef30;
      g_027e77f0 = 0;
      ram_00000000027e77f8 = 0;
      g_027e7800 = 0;
      ram_00000000027e7808 = 0;
      g_027e7810 = 0;
      ram_00000000027e7818 = 0;
      g_027e7820 = 0;
      ram_00000000027e7828 = 0;
      g_027e7830 = 0;
      ram_00000000027e7838 = 0;
      g_027e7840 = 0;
      ram_00000000027e7848 = 0;
      g_027e7850 = 0;
      ram_00000000027e7858 = 0;
      g_027e7860 = 0;
      ram_00000000027e7868 = 0;
      g_027e7870 = 0;
      ram_00000000027e7878 = 0;
      g_027e7880 = 0;
      ram_00000000027e7888 = 0;
      g_027e7890 = 0;
      fVar12 = (float)___cxa_guard_release();
    }
    pplVar10 = (int64_t **)&g_02802688;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      pplVar10 = &local_58;
      fVar12 = extraout_XMM0_Da;
      if (cVar3 == '\0') {
        pplVar10 = (int64_t **)&g_02802688;
      }
    }
    plVar1 = *pplVar10;
    if (*(char *)(pplVar10 + 1) == '\0') {
      if (plVar1 != (int64_t *)0x0) {
        fVar12 = (float)FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar10 + 1) = 0;
    }
    pVar9 = (void*)pplVar10;
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      fVar12 = (float)FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      pvVar8 = _pthread_getspecific(pVar9);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar12 = local_48;
      if (local_48 <= local_3c) {
        fVar12 = local_3c;
      }
      fVar13 = local_44;
      if (fVar12 <= local_44) {
        fVar13 = fVar12;
      }
      FUN_012c6a20(fVar13);
      fVar12 = (float)FUN_00d50b20();
    }
    if (plVar2 != (int64_t *)0x0) {
      fVar12 = (float)FUN_00d50b20();
    }
    iVar4 = local_68._4_4_;
  }
  FUN_000be170();
  FUN_00d50b20();
LAB_006daa98:
  if (local_9c == 3) {
    FUN_00ca1340();
  }
  return 1;
}



// ============================================================
// 006daca0
// ============================================================
// Function: FUN_006daca0
// Address: 006daca0
// Size: 1397 bytes
// Class: MULSSGenerator
// String references:
//   "MULSSGenerator"

uint64_t FUN_006daca0(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  int64_t lVar6;
  char *pcVar7;
  void *pvVar8;
  void* pVar9;
  int64_t **pplVar10;
  int64_t this_ptr;
  uint32_t uVar11;
  float fVar12;
  float extraout_XMM0_Da;
  float fVar13;
  float extraout_XMM0_Da_00;
  int64_t local_d8;
  uint8_t local_d0;
  uint8_t local_c0;
  int64_t local_b0;
  char local_a8;
  float local_9c;
  float local_98;
  int local_94;
  int64_t local_78;
  char local_70 [8];
  int64_t local_68;
  uint64_t local_60;
  int local_58;
  int64_t *local_50;
  char local_48 [8];
  float local_40;
  float local_3c;
  char local_38 [8];
  
  if (param_2 == 0) {
    return 1;
  }
  iVar4 = FUN_01caecd0();
  if (iVar4 == 1) {
    uVar11 = FUN_006cb500();
    lVar6 = g_02726cc8;
    if (local_70[0] == '\0') {
      if (local_78 != 0) {
        uVar11 = FUN_00d50b00();
        lVar6 = g_02726cc8;
      }
    }
    else {
      local_70[0] = '\0';
    }
    local_c0 = 1;
    g_02726cc8 = lVar6;
    if (lVar6 != 0) {
      local_c0 = 1;
      uVar11 = FUN_00d50b00();
    }
    local_d0 = 1;
    local_d8 = lVar6;
    FUN_006d9620(uVar11,&local_d8);
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if (local_78 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00ca1380();
  local_38[0] = local_70[0];
  pcVar5 = local_70;
  if (local_70[0] == '\0') {
    pcVar5 = local_38;
  }
  *pcVar5 = '\0';
  if ((local_70[0] != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  local_94 = iVar4;
  if ((local_38[0] == '\0') && (local_78 != 0)) {
    FUN_00d50b00();
  }
  FUN_00e986f0();
  local_3c = (float)FUN_00e991a0();
  if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  local_40 = (float)FUN_01caeac0();
  local_9c = (float)(**(code **)(**(int64_t **)(this_ptr + 0x138) + 0xac0))();
  local_98 = (float)(**(code **)(**(int64_t **)(this_ptr + 0x138) + 0xad0))();
  FUN_006cb500();
  if (local_70[0] == '\0') {
    if (local_78 == 0) goto LAB_006db22e;
    FUN_00d50b00();
  }
  else if (local_78 == 0) goto LAB_006db22e;
  fVar12 = local_40 - local_3c;
  local_70[0] = '\0';
  local_68 = local_78;
  local_60 = 0xffffffff;
  local_58 = 0;
  iVar4 = 0;
  local_40 = fVar12;
  while( true ) {
    if (iVar4 != 0) {
      if (iVar4 < 1) {
        iVar4 = -iVar4;
      }
      else {
        local_60 = CONCAT44(local_60._4_4_,(int)local_60 - iVar4);
        FUN_00d23690(fVar12,iVar4);
        local_58 = local_58 + iVar4;
        iVar4 = 0;
      }
      local_60 = CONCAT44(iVar4,(int)local_60);
    }
    lVar6 = (int64_t)(int)local_60;
    iVar4 = (int)local_60 + 1;
    local_60 = CONCAT44(local_60._4_4_,iVar4);
    if (*(int *)(local_68 + 0xc) <= iVar4) break;
    local_b0 = *(int64_t *)(*(int64_t *)(local_68 + 0x10) + 8 + lVar6 * 8);
    local_a8 = '\0';
    FUN_00c9fe40(*(int64_t *)(local_68 + 0x10),&local_b0);
    plVar2 = local_50;
    local_38[0] = local_48[0];
    pcVar5 = local_38;
    pcVar7 = local_48;
    if (local_48[0] == '\0') {
      pcVar7 = pcVar5;
    }
    *pcVar7 = '\0';
    if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pVar9 = (void*)pcVar5;
    if ((local_38[0] == '\0') && (plVar2 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if (plVar2 == (int64_t *)0x0) {
      local_3c = (float)FUN_01caeac0();
    }
    else if (*(char *)(this_ptr + 0x1c0) == '\0') {
      local_3c = (float)FUN_00d459e0();
      local_3c = local_3c + local_40;
    }
    else {
      local_3c = (float)FUN_00d459e0();
      fVar12 = (float)FUN_01caeac0();
      local_3c = local_3c + fVar12;
    }
    pvVar8 = _pthread_getspecific(pVar9);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar12 = (float)FUN_012e78c0();
    plVar1 = local_50;
    if ((g_0270c820 == '\0') &&
       (iVar4 = ___cxa_guard_acquire(), fVar12 = extraout_XMM0_Da_00, iVar4 != 0)) {
      g_027e77e8 = FUN_0015ef90();
      g_027e77d0 = "MULSSGenerator";
      g_027e77d8 = 0x70;
      g_027e77e0 = FUN_0015ef30;
      g_027e77f0 = 0;
      ram_00000000027e77f8 = 0;
      g_027e7800 = 0;
      ram_00000000027e7808 = 0;
      g_027e7810 = 0;
      ram_00000000027e7818 = 0;
      g_027e7820 = 0;
      ram_00000000027e7828 = 0;
      g_027e7830 = 0;
      ram_00000000027e7838 = 0;
      g_027e7840 = 0;
      ram_00000000027e7848 = 0;
      g_027e7850 = 0;
      ram_00000000027e7858 = 0;
      g_027e7860 = 0;
      ram_00000000027e7868 = 0;
      g_027e7870 = 0;
      ram_00000000027e7878 = 0;
      g_027e7880 = 0;
      ram_00000000027e7888 = 0;
      g_027e7890 = 0;
      fVar12 = (float)___cxa_guard_release();
    }
    pplVar10 = (int64_t **)&g_02802688;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      pplVar10 = &local_50;
      fVar12 = extraout_XMM0_Da;
      if (cVar3 == '\0') {
        pplVar10 = (int64_t **)&g_02802688;
      }
    }
    plVar1 = *pplVar10;
    if (*(char *)(pplVar10 + 1) == '\0') {
      if (plVar1 != (int64_t *)0x0) {
        fVar12 = (float)FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar10 + 1) = 0;
    }
    pVar9 = (void*)pplVar10;
    if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
      fVar12 = (float)FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      pvVar8 = _pthread_getspecific(pVar9);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar12 = local_9c;
      if (local_9c <= local_3c) {
        fVar12 = local_3c;
      }
      fVar13 = local_98;
      if (fVar12 <= local_98) {
        fVar13 = fVar12;
      }
      FUN_012c6a90(fVar13);
      fVar12 = (float)FUN_00d50b20();
    }
    if (plVar2 != (int64_t *)0x0) {
      fVar12 = (float)FUN_00d50b20();
    }
    iVar4 = local_60._4_4_;
  }
  FUN_000be170();
  FUN_00d50b20();
LAB_006db22e:
  if (local_94 == 3) {
    FUN_00ca1340();
  }
  return 1;
}



// ============================================================
// 012edae0
// ============================================================
// Function: FUN_012edae0
// Address: 012edae0
// Size: 1988 bytes
// Class: MULSSGenerator

void FUN_012edae0(void)

{
  bool bVar1;
  bool bVar2;
  code *pcVar3;
  char cVar4;
  void*puVar5;
  void *pvVar6;
  int64_t lVar7;
  int iVar8;
  void* pVar9;
  int64_t *plVar10;
  int64_t *plVar11;
  int64_t *arg1;
  int64_t this_ptr;
  uint uVar12;
  uint64_t uVar13;
  int64_t local_c0;
  char local_b8;
  int64_t *local_78;
  int64_t *local_48;
  char local_40;
  void*local_38;
  
  if (*arg1 == 0) {
    return;
  }
  if (*(int *)(*arg1 + 0xc) == 0) {
    return;
  }
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  pcVar3 = g_02572370;
  (*g_02572370)();
  iVar8 = *(int *)(this_ptr + 0x108) + 1;
  *(int *)(this_ptr + 0x108) = iVar8;
  lVar7 = *arg1;
  uVar12 = *(uint *)(lVar7 + 0xc);
  uVar13 = (uint64_t)uVar12;
  if (0 < (int)uVar12) {
    plVar10 = (int64_t *)0x0;
    bVar2 = false;
    local_38 = (void*)0x0;
    bVar1 = false;
    do {
      uVar12 = uVar12 - 1;
      plVar11 = *(int64_t **)(*(int64_t *)(lVar7 + 0x10) + (uint64_t)uVar12 * 8);
      pVar9 = uVar12;
      if (plVar10 == plVar11) {
        if ((!bVar2) && (plVar10 != (int64_t *)0x0)) {
          FUN_00d50b00();
          plVar11 = plVar10;
          goto LAB_012edc10;
        }
        lVar7 = *(int64_t *)(this_ptr + 0xb0);
      }
      else {
        if (plVar11 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (plVar10 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_012edc10:
        bVar2 = true;
        lVar7 = *(int64_t *)(this_ptr + 0xb0);
        plVar10 = plVar11;
      }
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      cVar4 = FUN_00d23d70();
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      if (cVar4 != '\0') {
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01264240();
        local_78 = plVar10;
        if (plVar10 != (int64_t *)0x0) {
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01264240();
          if (local_40 == '\0') {
            if (local_48 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_78 = local_48;
          FUN_00d235a0();
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01275420();
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        if (local_78 != (int64_t *)0x0) {
          if (local_38 == (void*)0x0) {
            local_38 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *local_38 = &g_02572358;
            (*pcVar3)();
            bVar1 = true;
          }
          FUN_00d21140();
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152ebe0();
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01508450();
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0150ec20();
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_b8 != '\0') && (local_c0 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d23740();
        }
        FUN_012e6e20();
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0128dda0();
      }
      if ((int64_t)uVar13 < 2) goto LAB_012ee0b3;
      uVar13 = uVar13 - 1;
      lVar7 = *arg1;
    } while( true );
  }
  bVar1 = false;
  local_38 = (void*)0x0;
  bVar2 = false;
  plVar10 = (int64_t *)0x0;
LAB_012ee0da:
  uVar13 = (uint64_t)(iVar8 - 1U);
  *(uint *)(this_ptr + 0x108) = iVar8 - 1U;
  FUN_012e57f0();
  if ((*(int64_t *)(this_ptr + 0x58) == 0) && (puVar5 != (void*)0x0)) {
    if (0 < *(int *)((int64_t)puVar5 + 0xc)) {
      iVar8 = 0;
      do {
        pvVar6 = _pthread_getspecific((void*)uVar13);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01320d00();
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_48 != (int64_t *)0x0) {
          pvVar6 = _pthread_getspecific((void*)uVar13);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01320d00();
          pvVar6 = _pthread_getspecific((void*)uVar13);
          plVar11 = local_48;
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            plVar11 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar11 + 0x3e0))();
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)((int64_t)puVar5 + 0xc));
    }
    FUN_00115190();
  }
  if ((bVar1) && (local_38 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar5 != (void*)0x0) {
    FUN_00d50b20();
  }
  if ((bVar2) && (plVar10 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
LAB_012ee0b3:
  iVar8 = *(int *)(this_ptr + 0x108);
  goto LAB_012ee0da;
}



// ============================================================
// 012d0a00
// ============================================================
// Function: FUN_012d0a00
// Address: 012d0a00
// Size: 2372 bytes
// Class: MULSSGenerator

void FUN_012d0a00(void* param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int64_t *plVar7;
  void *pvVar8;
  void* pVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_140;
  char local_138;
  int64_t local_98;
  char local_90;
  int local_80;
  int64_t local_60;
  char local_58;
  int local_48;
  
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar5 + 0x18))();
  lVar6 = *arg1;
  if (lVar6 == 0) {
    lVar6 = this_ptr[0x2e];
    if (lVar6 == 0) goto LAB_012d113e;
    lVar11 = *(int64_t *)(lVar6 + 0x18);
    if (*(int *)(lVar11 + 0xc) == 0) {
      if (*(int64_t *)(lVar6 + 0x10) == 0) goto LAB_012d11d5;
      pvVar8 = _pthread_getspecific(param_1);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      if (local_90 == '\0') {
        if (local_98 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_90 = '\0';
      }
      FUN_000ba510();
      if (local_60 == 0) {
        bVar3 = false;
      }
      else if (local_58 == '\0') {
        FUN_00d50b00();
        bVar3 = true;
      }
      else {
        local_58 = '\0';
        bVar3 = true;
      }
      if (local_98 != 0) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_012d1344;
    }
    FUN_00d50b00();
LAB_012d0aa1:
    bVar3 = true;
    local_60 = lVar11;
LAB_012d0aae:
    local_58 = '\0';
    local_48 = -1;
    while( true ) {
      lVar6 = (int64_t)local_48;
      local_48 = local_48 + 1;
      if (*(int *)(local_60 + 0xc) <= local_48) break;
      lVar6 = *(int64_t *)(*(int64_t *)(local_60 + 0x10) + 8 + lVar6 * 8);
      lVar11 = this_ptr[0x21];
      lVar10 = *(int64_t *)(local_60 + 0x10);
      if (lVar11 == 0) {
LAB_012d0c1c:
        pVar9 = (void*)lVar10;
        plVar7 = (int64_t *)FUN_00e8fc40();
        FUN_011ce1f0();
        (**(code **)(*plVar7 + 0x18))();
        pvVar8 = _pthread_getspecific(pVar9);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e57e0();
        FUN_00b33530();
        pvVar8 = _pthread_getspecific(pVar9);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e57e0();
        FUN_00b335a0();
        (**(code **)(*this_ptr + 0x3a8))();
        (**(code **)(*plVar7 + 0x3a0))();
        FUN_00b335d0();
        (**(code **)(*plVar7 + 0x398))();
        FUN_00d50b00();
        FUN_012dd9b0();
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        FUN_01308480();
        (**(code **)(*plVar7 + 0x368))();
        FUN_00ca0840();
        FUN_01308ea0();
        FUN_00d50b20();
      }
      else {
        local_80 = -1;
        do {
          local_80 = local_80 + 1;
          if (*(int *)(lVar11 + 0xc) <= local_80) {
            FUN_01312d90();
            lVar10 = lVar11;
            goto LAB_012d0c1c;
          }
          FUN_01308710();
          if ((local_138 != '\0') && (local_140 != 0)) {
            FUN_00d50b20();
          }
        } while (local_140 != lVar6);
        FUN_01312d90();
      }
    }
    FUN_000be170();
    bVar1 = false;
  }
  else {
    lVar11 = *(int64_t *)(lVar6 + 0x18);
    if (*(int *)(lVar11 + 0xc) != 0) {
      FUN_00d50b00();
      goto LAB_012d0aa1;
    }
    if (*(int64_t *)(lVar6 + 0x10) != 0) {
      pvVar8 = _pthread_getspecific(param_1);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      if (local_90 == '\0') {
        if (local_98 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_90 = '\0';
      }
      FUN_000ba510();
      if (local_60 == 0) {
        bVar3 = false;
      }
      else if (local_58 == '\0') {
        FUN_00d50b00();
        bVar3 = true;
      }
      else {
        local_58 = '\0';
        bVar3 = true;
      }
      if (local_98 != 0) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
LAB_012d1344:
      if (local_60 == 0) {
        bVar1 = true;
        goto LAB_012d0e64;
      }
      goto LAB_012d0aae;
    }
LAB_012d11d5:
    bVar1 = true;
    bVar3 = false;
  }
LAB_012d0e64:
  lVar6 = this_ptr[0x21];
  if (lVar6 != 0) {
    local_58 = '\0';
    local_48 = -1;
    while (local_48 = local_48 + 1, local_48 < *(int *)(lVar6 + 0xc)) {
      FUN_01308ea0();
    }
    FUN_01312d90();
  }
  lVar6 = *arg1;
  if (lVar6 == 0) {
    *(void*)((int64_t)this_ptr + 0x1d3) = 0;
    lVar6 = FUN_00e313b0();
    do {
      cVar4 = FUN_00e31450(3,plVar5);
    } while (cVar4 == '\0');
    FUN_012d21a0();
    if (local_58 == '\0') {
      if (lVar6 != 0) {
        FUN_00d50b00();
        goto LAB_012d10a6;
      }
    }
    else if (lVar6 != 0) {
LAB_012d10a6:
      for (lVar11 = 0; (int)lVar11 < *(int *)(lVar6 + 0xc); lVar11 = lVar11 + 1) {
        (**(code **)(**(int64_t **)(*(int64_t *)(lVar6 + 0x10) + lVar11 * 8) + 0x370))();
      }
      FUN_00540a20();
      FUN_00d50b20();
    }
    bVar2 = true;
    if (lVar6 != 0) {
      FUN_00d50b20();
      bVar2 = true;
    }
  }
  else {
    plVar7 = *(int64_t **)(lVar6 + 0x28);
    if (plVar7 != plVar5) {
      if (plVar5 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *(int64_t **)(lVar6 + 0x28) = plVar5;
      if (plVar7 != (int64_t *)0x0) {
        FUN_00d50b20();
        bVar2 = false;
        goto joined_r0x012d1113;
      }
    }
    bVar2 = false;
  }
joined_r0x012d1113:
  if (bVar3 && !bVar1) {
    FUN_00d50b20();
  }
  if (bVar2 || plVar5 == (int64_t *)0x0) {
    return;
  }
LAB_012d113e:
  FUN_00d50b20();
  return;
}



// ============================================================
// 006d9da0
// ============================================================
// Function: FUN_006d9da0
// Address: 006d9da0
// Size: 1325 bytes
// Class: MULSSGenerator

uint64_t FUN_006d9da0(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  void *pvVar8;
  void* pVar9;
  int64_t **pplVar10;
  int64_t this_ptr;
  int64_t lVar11;
  uint32_t uVar12;
  float fVar13;
  float extraout_XMM0_Da;
  float fVar14;
  int64_t local_e8;
  uint8_t local_e0;
  uint8_t local_d0;
  int64_t local_c0;
  char local_b8;
  float local_ac;
  float local_a8;
  int local_a4;
  int64_t local_a0;
  char local_98 [8];
  int64_t local_90;
  uint64_t local_88;
  uint32_t local_80;
  int64_t local_78;
  char local_70;
  char local_68;
  undefined7 uStack_67;
  char local_60;
  float local_54;
  int64_t *local_48;
  char local_40 [12];
  float local_34;
  
  if (param_2 == 0) {
    return 1;
  }
  iVar5 = FUN_01caecd0();
  if (iVar5 == 1) {
    uVar12 = FUN_006cb500();
    lVar11 = local_a0;
    lVar2 = g_02726c98;
    if (local_98[0] == '\0') {
      if (local_a0 != 0) {
        uVar12 = FUN_00d50b00();
        lVar2 = g_02726c98;
      }
    }
    else {
      local_98[0] = '\0';
    }
    local_d0 = 1;
    g_02726c98 = lVar2;
    if (lVar2 != 0) {
      local_d0 = 1;
      uVar12 = FUN_00d50b00();
    }
    local_e0 = 1;
    local_e8 = lVar2;
    FUN_006d9620(uVar12,&local_e8);
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (lVar11 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00ca1380();
  lVar2 = local_a0;
  local_68 = local_98[0];
  pcVar6 = local_98;
  if (local_98[0] == '\0') {
    pcVar6 = &local_68;
  }
  *pcVar6 = '\0';
  if ((local_98[0] != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  local_70 = 0;
  if ((local_68 == '\0') && (lVar2 != 0)) {
    FUN_00d50b00();
  }
  local_78 = lVar2;
  local_70 = '\x01';
  FUN_00e986f0();
  local_34 = (float)FUN_00e991a0();
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  local_54 = (float)FUN_01caeac0();
  local_ac = (float)(**(code **)(**(int64_t **)(this_ptr + 0x148) + 0xac0))();
  local_a8 = (float)(**(code **)(**(int64_t **)(this_ptr + 0x148) + 0xad0))();
  FUN_006cb500();
  lVar2 = local_a0;
  if (local_98[0] == '\0') {
    if (local_a0 == 0) goto LAB_006da2ca;
    FUN_00d50b00();
  }
  else if (local_a0 == 0) goto LAB_006da2ca;
  local_98[0] = '\0';
  local_a0 = 0;
  local_90 = lVar2;
  local_80 = 0;
  local_88 = 0;
  local_a4 = iVar5;
  if (0 < *(int *)(lVar2 + 0xc)) {
    fVar13 = local_54 - local_34;
    lVar11 = 0;
    local_54 = fVar13;
    do {
      local_c0 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + lVar11 * 8);
      local_b8 = '\0';
      local_a0 = local_c0;
      FUN_00c9fe40(fVar13,&local_c0);
      plVar3 = local_48;
      local_68 = local_40[0];
      pcVar6 = &local_68;
      pcVar7 = local_40;
      if (local_40[0] == '\0') {
        pcVar7 = pcVar6;
      }
      *pcVar7 = '\0';
      if ((local_40[0] != '\0') && (plVar3 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pVar9 = (void*)pcVar6;
      if ((local_68 == '\0') && (plVar3 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if (plVar3 == (int64_t *)0x0) {
        local_34 = (float)FUN_01caeac0();
      }
      else if (*(char *)(this_ptr + 0x1c0) == '\0') {
        local_34 = (float)FUN_00d459e0();
        local_34 = local_34 + local_54;
      }
      else {
        local_34 = (float)FUN_00d459e0();
        fVar13 = (float)FUN_01caeac0();
        local_34 = local_34 + fVar13;
      }
      pvVar8 = _pthread_getspecific(pVar9);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e7d10();
      pvVar8 = _pthread_getspecific(pVar9);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011f2810();
      plVar1 = local_48;
      fVar13 = (float)FUN_004fbac0();
      pplVar10 = (int64_t **)&g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar4 = FUN_00e85ea0();
        pplVar10 = &local_48;
        fVar13 = extraout_XMM0_Da;
        if (cVar4 == '\0') {
          pplVar10 = (int64_t **)&g_02802688;
        }
      }
      plVar1 = *pplVar10;
      if (*(char *)(pplVar10 + 1) == '\0') {
        if (plVar1 != (int64_t *)0x0) {
          fVar13 = (float)FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar10 + 1) = 0;
      }
      pVar9 = (void*)pplVar10;
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        fVar13 = (float)FUN_00d50b20();
      }
      if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
        fVar13 = (float)FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        pvVar8 = _pthread_getspecific(pVar9);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar13 = local_ac;
        if (local_ac <= local_34) {
          fVar13 = local_34;
        }
        fVar14 = local_a8;
        if (fVar13 <= local_a8) {
          fVar14 = fVar13;
        }
        FUN_012de780(fVar14);
        fVar13 = (float)FUN_00d50b20();
      }
      if (plVar3 != (int64_t *)0x0) {
        fVar13 = (float)FUN_00d50b20();
      }
      lVar11 = lVar11 + 1;
      local_88 = CONCAT44(local_88._4_4_,(int)lVar11);
    } while ((int)lVar11 < *(int *)(lVar2 + 0xc));
  }
  FUN_000be170();
  FUN_00d50b20();
  iVar5 = local_a4;
LAB_006da2ca:
  if (iVar5 == 3) {
    FUN_00ca1340();
  }
  return 1;
}



// ============================================================
// 006d8580
// ============================================================
// Function: FUN_006d8580
// Address: 006d8580
// Size: 1553 bytes
// Class: MULSSGenerator

uint64_t FUN_006d8580(uint64_t param_1,char param_2)

{
  int iVar1;
  void* pVar2;
  uint64_t uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  double dVar7;
  char cVar8;
  void *pvVar9;
  int64_t lVar10;
  void* pVar11;
  int64_t lVar12;
  int64_t lVar13;
  undefined7 uVar15;
  uint64_t uVar14;
  uint64_t this_ptr;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  int64_t local_b8;
  char local_b0;
  int64_t local_60;
  char local_58;
  int local_48;
  
  FUN_006cb500();
  uVar15 = (undefined7)((uint64_t)this_ptr >> 8);
  if (local_b8 == 0) {
    uVar14 = CONCAT71(uVar15,1);
    goto LAB_006d8bca;
  }
  FUN_006cb500();
  iVar1 = *(int *)(local_60 + 0xc);
  uVar14 = CONCAT71(uVar15,iVar1 == 0);
  if (local_58 != '\0') {
    FUN_00d50b20();
  }
  if (local_b0 != '\0') {
    FUN_00d50b20();
  }
  if ((iVar1 == 0) || (param_2 == '\0')) goto LAB_006d8bca;
  FUN_006cb500();
  if (local_b0 == '\0') {
    if (local_b8 != 0) {
      FUN_00d50b00();
      goto LAB_006d8643;
    }
  }
  else if (local_b8 != 0) {
LAB_006d8643:
    if (0 < *(int *)(local_b8 + 0xc)) {
      uVar16 = 0;
      do {
        lVar13 = local_60;
        uVar3 = *(void*)(*(int64_t *)(local_b8 + 0x10) + (uint64_t)uVar16 * 8);
        pVar11 = uVar16;
        pvVar9 = _pthread_getspecific(uVar16);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e78c0();
        if (local_58 == '\0') {
          if (local_60 != 0) {
            FUN_00d50b00();
            goto LAB_006d8750;
          }
        }
        else if (local_60 != 0) {
LAB_006d8750:
          pvVar9 = _pthread_getspecific(pVar11);
          pVar2 = (void*)local_60;
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            pVar11 = pVar2;
          }
          fVar17 = (float)FUN_012c6a80();
          pvVar9 = _pthread_getspecific(pVar11);
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            pVar11 = pVar2;
          }
          fVar18 = (float)FUN_012c6af0();
          dVar7 = g_023b67d8;
          dVar20 = (double)fVar17;
          bVar4 = dVar20 < g_023b67e0;
          pvVar9 = _pthread_getspecific(pVar11);
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            pVar11 = pVar2;
          }
          FUN_012c6a20(0);
          cVar8 = FUN_006cff00();
          if (cVar8 == '\0') {
            pvVar9 = _pthread_getspecific(pVar11);
            if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
              pVar11 = pVar2;
            }
            FUN_012c6a90(0);
          }
          pvVar9 = _pthread_getspecific(pVar11);
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            pVar11 = (void*)uVar3;
          }
          FUN_012e5ae0();
          if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
              goto LAB_006d8918;
            }
          }
          else if (local_60 != 0) {
LAB_006d8918:
            bVar5 = (double)fVar18 < g_023b67e0;
            bVar6 = g_023b67d8 < (double)fVar18;
            local_58 = '\0';
            local_60 = 0;
            local_48 = -1;
            while( true ) {
              lVar10 = (int64_t)local_48;
              local_48 = local_48 + 1;
              if (*(int *)(lVar13 + 0xc) <= local_48) break;
              lVar12 = *(int64_t *)(lVar13 + 0x10);
              local_60 = *(int64_t *)(lVar12 + 8 + lVar10 * 8);
              cVar8 = FUN_006cff00();
              pVar11 = (void*)lVar12;
              if (cVar8 == '\0' && (bVar6 || bVar5)) {
                pvVar9 = _pthread_getspecific(pVar11);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar9 = _pthread_getspecific(pVar11);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                fVar19 = (float)FUN_01265b70();
                FUN_01259600(fVar19 + fVar18);
              }
              if (dVar7 < dVar20 || bVar4) {
                pvVar9 = _pthread_getspecific(pVar11);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar9 = _pthread_getspecific(pVar11);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                fVar19 = (float)FUN_0125a2c0();
                FUN_0125a580(fVar19 + fVar17);
              }
            }
            FUN_001159b0();
            pVar11 = (void*)lVar13;
            FUN_00d50b20();
          }
          if (dVar7 < dVar20 || bVar4) {
            pvVar9 = _pthread_getspecific(pVar11);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e5ae0();
            if (local_58 == '\0') {
              if (local_60 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_58 = '\0';
            }
            FUN_012879b0();
            if (local_60 != 0) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
        }
        uVar16 = uVar16 + 1;
      } while ((int)uVar16 < *(int *)(local_b8 + 0xc));
    }
    FUN_000be170();
    FUN_00d50b20();
  }
  uVar14 = 0;
LAB_006d8bca:
  return (uVar14 ^ 1) & 0xffffffff;
}



// ============================================================
// 0131ae60
// ============================================================
// Function: FUN_0131ae60
// Address: 0131ae60
// Size: 1992 bytes
// Class: MULSSGenerator

byte FUN_0131ae60(void* param_1,uint param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  uint32_t uVar10;
  void *pvVar11;
  byte bVar12;
  void* pVar13;
  byte unaff_SIL;
  int64_t this_ptr;
  byte bVar14;
  uint64_t unaff_R13;
  undefined7 uVar15;
  bool bVar16;
  int64_t local_140;
  char local_138;
  uint8_t local_b0 [8];
  uint8_t local_a8;
  uint8_t local_98;
  uint8_t local_88;
  int64_t local_80;
  char local_78;
  uint local_70;
  uint local_6c;
  int64_t local_68;
  char local_60;
  int64_t local_50;
  char local_48;
  
  lVar1 = *(int64_t *)(this_ptr + 0x40);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar11 = _pthread_getspecific(param_1);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015058d0();
  pvVar11 = _pthread_getspecific(param_1);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150d280();
  if (*(int *)(local_50 + 0xc) == 0) {
    bVar16 = false;
    uVar15 = 0;
  }
  else {
    lVar2 = *(int64_t *)(this_ptr + 0x38);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    pvVar11 = _pthread_getspecific(param_1);
    if (pvVar11 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar11 = _pthread_getspecific(param_1);
    if (pvVar11 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    bVar16 = *(int *)(local_140 + 0xc) == 0;
    uVar15 = (undefined7)((uint64_t)unaff_R13 >> 8);
    if (local_138 != '\0') {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x40);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar11 = _pthread_getspecific(param_1);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar10 = FUN_01505ea0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  bVar14 = bVar16 ^ 1U | unaff_SIL;
  bVar12 = (byte)uVar10 & unaff_SIL;
  pVar13 = CONCAT31((int3)((uint)uVar10 >> 8),bVar12);
  local_6c = 0;
  if ((byte)uVar10 == 0) {
    local_6c = (uint)bVar14;
  }
  param_2 = param_2 & 0xff;
  if (bVar12 == 1) {
    lVar1 = *(int64_t *)(this_ptr + 0x40);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar11 = _pthread_getspecific(pVar13);
    if (pvVar11 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01506110();
    local_6c = (uint)CONCAT71(uVar15,bVar14);
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b00();
  lVar1 = *(int64_t *)(this_ptr + 0x40);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar11 = _pthread_getspecific(pVar13);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015058d0();
  local_70 = param_2;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    lVar2 = *(int64_t *)(this_ptr + 0x38);
  }
  else {
    lVar2 = *(int64_t *)(this_ptr + 0x38);
  }
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  pvVar11 = _pthread_getspecific(pVar13);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  lVar3 = local_68;
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_a8 = 1;
  pVar13 = (void*)unaff_SIL;
  bVar12 = FUN_013157a0(unaff_SIL,local_b0,0);
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  lVar1 = *(int64_t *)(this_ptr + 0x38);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  bVar14 = FUN_01316740();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x40);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  bVar4 = FUN_013168e0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  bVar5 = FUN_01317b70();
  FUN_00d50b20();
  lVar1 = *(int64_t *)(this_ptr + 0x38);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01317d70();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x38);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar11 = _pthread_getspecific(pVar13);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  if (local_50 != 0) {
    FUN_00d50b00();
  }
  local_98 = 1;
  bVar6 = FUN_01318610();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x38);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar11 = _pthread_getspecific(pVar13);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  if (local_50 != 0) {
    FUN_00d50b00();
  }
  local_88 = 1;
  bVar7 = FUN_01319320(local_70,1);
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x38);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  bVar8 = FUN_0131a4f0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x38);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  bVar9 = FUN_0131ac40();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return (char)local_6c != '\0' & bVar9 & bVar8 & bVar7 & bVar6 & bVar5 & bVar4 & bVar14 & bVar12;
}



// ============================================================
// 01319320
// ============================================================
// Function: FUN_01319320
// Address: 01319320
// Size: 1259 bytes
// Class: MULSSGenerator
// String references:
//   "MULSSGenerator"

uint64_t FUN_01319320(void* param_1,char param_2)

{
  int64_t *plVar1;
  uint8_t uVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  void*puVar6;
  undefined7 uVar8;
  int64_t *plVar7;
  char unaff_SIL;
  int64_t lVar9;
  int64_t **pplVar10;
  int64_t *plVar11;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  uint64_t local_50;
  uint32_t local_48;
  void* local_40;
  char local_3c;
  int64_t *local_38;
  
  local_40 = param_1;
  local_3c = unaff_SIL;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  pplVar10 = &local_68;
  FUN_012e78c0();
  plVar7 = local_68;
  if ((g_0270c820 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_027e77e8 = FUN_0015ef90();
    g_027e77d0 = "MULSSGenerator";
    g_027e77d8 = 0x70;
    param_1 = 0x15ef30;
    g_027e77e0 = FUN_0015ef30;
    g_027e77f0 = 0;
    ram_00000000027e77f8 = 0;
    g_027e7800 = 0;
    ram_00000000027e7808 = 0;
    g_027e7810 = 0;
    ram_00000000027e7818 = 0;
    g_027e7820 = 0;
    ram_00000000027e7828 = 0;
    g_027e7830 = 0;
    ram_00000000027e7838 = 0;
    g_027e7840 = 0;
    ram_00000000027e7848 = 0;
    g_027e7850 = 0;
    ram_00000000027e7858 = 0;
    g_027e7860 = 0;
    ram_00000000027e7868 = 0;
    g_027e7870 = 0;
    ram_00000000027e7878 = 0;
    g_027e7880 = 0;
    ram_00000000027e7888 = 0;
    g_027e7890 = 0;
    ___cxa_guard_release();
  }
  if (plVar7 == (int64_t *)0x0) {
LAB_013193b9:
    pplVar10 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_013193b9;
  }
  plVar11 = *pplVar10;
  if (*(char *)(pplVar10 + 1) == '\0') {
    if (plVar11 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar10 + 1) = 0;
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar8 = (undefined7)((uint64_t)plVar7 >> 8);
  if (((char)local_40 == '\0') || (param_2 != '\0')) {
    if (plVar11 != (int64_t *)0x0) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c6cb0();
      plVar1 = local_68;
      plVar7 = (int64_t *)CONCAT71(uVar8,local_68 == (int64_t *)0x0);
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((plVar1 == (int64_t *)0x0) || (local_3c == '\0')) goto LAB_01319626;
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c64a0();
    }
LAB_01319624:
    plVar7 = (int64_t *)CONCAT71((int7)((uint64_t)plVar7 >> 8),1);
  }
  else {
    if (plVar11 == (int64_t *)0x0) goto LAB_01319624;
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c6cb0();
    plVar1 = local_68;
    plVar7 = (int64_t *)CONCAT71(uVar8,local_68 != (int64_t *)0x0);
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((plVar1 == (int64_t *)0x0) && (local_3c != '\0')) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      puVar6 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      param_1 = 0x2607248;
      *puVar6 = &g_02607248;
      puVar6[7] = 0;
      puVar6[8] = 0;
      puVar6[9] = 0;
      puVar6[10] = 0;
      puVar6[0xb] = 0;
      puVar6[0xc] = 0;
      puVar6[0xd] = 0;
      puVar6[0xe] = 0;
      *(void*)((int64_t)puVar6 + 0x76) = 0;
      puVar6[0x10] = 0;
      puVar6[0x11] = 0;
      puVar6[0x12] = 0;
      puVar6[0x13] = 0;
      puVar6[0x14] = 0;
      puVar6[0x15] = 0;
      puVar6[0x16] = 0;
      puVar6[0x17] = 0;
      puVar6[0x18] = 0;
      puVar6[0x19] = 0;
      puVar6[0x1a] = 0;
      (*g_02607260)();
      FUN_012c64a0();
      plVar7 = (int64_t *)0x0;
      if (puVar6 == (void*)0x0) goto LAB_01319624;
      FUN_00d50b20();
      plVar7 = (int64_t *)CONCAT71((int7)((uint64_t)puVar6 >> 8),1);
    }
  }
LAB_01319626:
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  plVar1 = local_68;
  if (local_60 == '\0') {
    if (local_68 == (int64_t *)0x0) goto LAB_01319740;
    FUN_00d50b00();
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_68 == (int64_t *)0x0) goto LAB_01319740;
  local_60 = '\0';
  local_68 = (int64_t *)0x0;
  local_58 = plVar1;
  local_48 = 0;
  local_50 = 0;
  local_38 = plVar11;
  if (0 < *(int *)((int64_t)plVar1 + 0xc)) {
    uVar2 = (char)local_40;
    lVar9 = 0;
    do {
      local_68 = *(int64_t **)(plVar1[2] + lVar9 * 8);
      cVar3 = FUN_01319320(uVar2,0);
      plVar7 = (int64_t *)((uint64_t)plVar7 & 0xff);
      if (cVar3 == '\0') {
        plVar7 = (int64_t *)0x0;
      }
      lVar9 = lVar9 + 1;
      local_50 = CONCAT44(local_50._4_4_,(int)lVar9);
    } while ((int)lVar9 < *(int *)((int64_t)plVar1 + 0xc));
  }
  FUN_000be170();
  FUN_00d50b20();
  plVar11 = local_38;
LAB_01319740:
  if (plVar11 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return (uint64_t)plVar7 & 0xffffffff;
}



// ============================================================
// 012fb890
// ============================================================
// Function: FUN_012fb890
// Address: 012fb890
// Size: 1451 bytes
// Class: MULSSGenerator

uint FUN_012fb890(void* param_1)

{
  int64_t lVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  char *pcVar8;
  char *pcVar9;
  void* pVar10;
  int64_t lVar11;
  int64_t local_90;
  uint8_t local_88;
  uint64_t local_80;
  uint64_t local_78;
  int64_t local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  int64_t local_40;
  char local_38 [8];
  
  FUN_012e7fb0();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150fe30();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510280();
  local_70 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  local_90 = local_70;
  local_88 = 0;
  uVar5 = FUN_00e7bcc0();
  FUN_012fa130(uVar5,&local_90);
  local_58 = local_40;
  pVar10 = (void*)uVar5;
  if ((local_38[0] == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific(pVar10);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7fb0();
  pvVar4 = _pthread_getspecific(pVar10);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150fe30();
  pvVar4 = _pthread_getspecific(pVar10);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510280();
  lVar1 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar10);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar11 = local_58;
  uVar5 = FUN_00e7bdb0();
  uVar6 = FUN_00e7bdb0();
  local_40 = lVar11;
  local_38[0] = '\0';
  uVar3 = FUN_01254260(uVar6,uVar5);
  pVar10 = (void*)uVar6;
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((char)uVar3 != '\0') goto LAB_012fbdfa;
  pvVar4 = _pthread_getspecific(pVar10);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar2 = FUN_012f9ac0();
  if (cVar2 != '\0') {
    FUN_012f9cd0();
  }
  pvVar4 = _pthread_getspecific(pVar10);
  lVar11 = local_58;
  if ((pvVar4 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar11 = local_58, lVar7 != 0)) {
    lVar11 = *(int64_t *)(local_58 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
  }
  FUN_00d23310();
  lVar7 = local_40;
  local_50 = local_38[0];
  pcVar8 = local_38;
  if (local_38[0] == '\0') {
    pcVar8 = &local_50;
  }
  *pcVar8 = '\0';
  if ((local_38[0] != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  if ((lVar7 == 0) && (0xe < *(int *)(*(int64_t *)(lVar11 + 0x48) + 0x18) + 7U)) {
    local_80 = **(void**)(*(int64_t *)(lVar11 + 0x48) + 0x10);
  }
  else {
    local_80 = FUN_00e7bdb0();
    if ((local_50 != '\0') && (lVar7 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d23340();
  lVar7 = local_40;
  local_50 = local_38[0];
  pcVar8 = &local_50;
  pcVar9 = local_38;
  if (local_38[0] == '\0') {
    pcVar9 = pcVar8;
  }
  *pcVar9 = '\0';
  if ((local_38[0] != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  pVar10 = (void*)pcVar8;
  if (lVar7 == 0) {
    pVar10 = *(void* *)(*(int64_t *)(lVar11 + 0x48) + 0x18);
    if (pVar10 + 7 < 0xf) goto LAB_012fbcf8;
    local_78 = *(void*)
                ((int64_t)(int)pVar10 + -8 + *(int64_t *)(*(int64_t *)(lVar11 + 0x48) + 0x10));
  }
  else {
LAB_012fbcf8:
    local_78 = FUN_00e7bdb0();
    if ((local_50 != '\0') && (lVar7 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(int *)(*(int64_t *)(lVar11 + 0x48) + 0x18) + 7U < 0xf) {
    FUN_00d23310();
    lVar11 = local_40;
    pcVar8 = &local_50;
    pcVar9 = local_38;
    if (local_38[0] == '\0') {
      pcVar9 = pcVar8;
    }
    local_50 = local_38[0];
    *pcVar9 = '\0';
    if ((local_38[0] != '\0') && (lVar11 != 0)) {
      FUN_00d50b20();
    }
    pVar10 = (void*)pcVar8;
    if ((local_50 != '\0') && (lVar11 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar4 = _pthread_getspecific(pVar10);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar11 = local_58;
  local_40 = local_58;
  local_38[0] = '\0';
  FUN_012549c0(local_78,local_80,0);
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
LAB_012fbdfa:
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = local_70;
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return uVar3 ^ 1;
}



// ============================================================
// 01951ef0
// ============================================================
// Function: FUN_01951ef0
// Address: 01951ef0
// Size: 2846 bytes
// Class: MULSSGenerator

void FUN_01951ef0(void* param_1)

{
  int iVar1;
  void* pVar2;
  int64_t lVar3;
  void *pvVar4;
  int64_t lVar5;
  void* pVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int local_48;
  int64_t lVar7;
  
  lVar3 = local_60;
  FUN_01948a20();
  if (local_58 == '\0') {
    if (local_60 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_60 == 0) {
    return;
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6a50();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific(param_1);
  pVar2 = (void*)local_60;
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    param_1 = pVar2;
  }
  FUN_012e6160();
  FUN_00d237a0();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7fb0();
  if (local_60 != 0) {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150fe10();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150f380();
  pvVar4 = _pthread_getspecific(param_1);
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    param_1 = pVar2;
  }
  FUN_012e68b0();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  if (local_60 != 0) {
    FUN_00d50b00();
    local_60 = 0;
    local_48 = -1;
    while( true ) {
      lVar5 = (int64_t)local_48;
      local_48 = local_48 + 1;
      if (*(int *)(lVar3 + 0xc) <= local_48) break;
      lVar7 = *(int64_t *)(lVar3 + 0x10);
      local_60 = *(int64_t *)(lVar7 + 8 + lVar5 * 8);
      pvVar4 = _pthread_getspecific((void*)lVar7);
      pVar6 = (void*)lVar7;
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar4 = _pthread_getspecific(pVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5ae0();
      if (local_68 == '\0') {
        if (local_70 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      FUN_012edae0();
      if (local_70 != 0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    lVar5 = lVar3;
    FUN_000be170();
    param_1 = (void*)lVar5;
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    param_1 = pVar2;
  }
  FUN_012e5ae0();
  if (local_60 != 0) {
    FUN_00d50b00();
  }
  FUN_012edae0();
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(&UNK_00001850 + *this_ptr))();
  if (local_60 != 0) {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6a50();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  iVar1 = *(int *)(local_60 + 0xc);
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (iVar1 != 1) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7fb0();
    if (local_60 != 0) {
      FUN_00d50b00();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7fb0();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150fe10();
    if (local_60 != 0) {
      FUN_00d50b00();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      param_1 = pVar2;
    }
    FUN_012e68b0();
    pvVar4 = _pthread_getspecific(param_1);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      param_1 = pVar2;
    }
    FUN_012e66e0();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150f380();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150f1c0();
    if (local_60 != 0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  (**(code **)(&UNK_00001668 + *this_ptr))();
  if (*arg1 == local_60) {
    (**(code **)(&g_00001680 + *this_ptr))();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 01953cb0
// ============================================================
// Function: FUN_01953cb0
// Address: 01953cb0
// Size: 1082 bytes
// Class: MULSSGenerator
// String references:
//   "MULSSGenerator"

uint32_t FUN_01953cb0(void* param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  int64_t lVar6;
  void* pVar7;
  int64_t lVar8;
  int64_t **pplVar9;
  int iVar10;
  int64_t this_ptr;
  int iVar11;
  uint32_t uVar12;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t local_98;
  char local_90;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  uint64_t local_58;
  int local_50;
  int64_t *local_48;
  char local_40;
  uint32_t local_34;
  
  local_34 = 0;
  if (*(int64_t *)(this_ptr + 0x540) == 0) {
    return 0;
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  lVar2 = local_70;
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 == 0) {
    return local_34;
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  lVar2 = local_70;
  if (local_68 == '\0') {
    if (((local_70 != 0) && (FUN_00d50b00(), local_68 != '\0')) && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68 = '\0';
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    local_68 = '\0';
    local_70 = 0;
    local_60 = lVar2;
    local_58 = 0xffffffff;
    local_50 = 0;
    while( true ) {
      lVar6 = (int64_t)(int)local_58;
      iVar11 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar11);
      iVar10 = *(int *)(local_60 + 0xc);
      if (iVar10 <= iVar11) break;
      lVar8 = *(int64_t *)(local_60 + 0x10);
      local_80 = *(int64_t *)(lVar8 + 8 + lVar6 * 8);
      local_78 = '\0';
      local_70 = local_80;
      FUN_01941c70(lVar8,&local_80);
      pvVar5 = _pthread_getspecific((void*)lVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar12 = FUN_012e78c0();
      plVar1 = local_48;
      if ((g_0270c820 == '\0') &&
         (iVar4 = ___cxa_guard_acquire(), uVar12 = extraout_XMM0_Da_00, iVar4 != 0)) {
        g_027e77e8 = FUN_0015ef90();
        g_027e77d0 = "MULSSGenerator";
        g_027e77d8 = 0x70;
        g_027e77e0 = FUN_0015ef30;
        g_027e77f0 = 0;
        ram_00000000027e77f8 = 0;
        g_027e7800 = 0;
        ram_00000000027e7808 = 0;
        g_027e7810 = 0;
        ram_00000000027e7818 = 0;
        g_027e7820 = 0;
        ram_00000000027e7828 = 0;
        g_027e7830 = 0;
        ram_00000000027e7838 = 0;
        g_027e7840 = 0;
        ram_00000000027e7848 = 0;
        g_027e7850 = 0;
        ram_00000000027e7858 = 0;
        g_027e7860 = 0;
        ram_00000000027e7868 = 0;
        g_027e7870 = 0;
        ram_00000000027e7878 = 0;
        g_027e7880 = 0;
        ram_00000000027e7888 = 0;
        g_027e7890 = 0;
        uVar12 = ___cxa_guard_release();
      }
      pplVar9 = (int64_t **)&g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar3 = FUN_00e85ea0();
        pplVar9 = &local_48;
        uVar12 = extraout_XMM0_Da;
        if (cVar3 == '\0') {
          pplVar9 = (int64_t **)&g_02802688;
        }
      }
      plVar1 = *pplVar9;
      if (*(char *)(pplVar9 + 1) == '\0') {
        if (plVar1 != (int64_t *)0x0) {
          uVar12 = FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar9 + 1) = 0;
      }
      pVar7 = (void*)pplVar9;
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        uVar12 = FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        uVar12 = FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        uVar12 = FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        pvVar5 = _pthread_getspecific(pVar7);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_34 = FUN_012c6b70();
        FUN_00d50b20();
        break;
      }
      iVar10 = local_58._4_4_;
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar10 = -local_58._4_4_;
        }
        else {
          local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
          FUN_00d23690(uVar12,local_58._4_4_);
          local_50 = local_50 + iVar10;
          iVar10 = 0;
        }
        local_58 = CONCAT44(iVar10,(int)local_58);
      }
    }
    FUN_000be170();
    if (iVar11 < iVar10) goto LAB_019540d4;
  }
  local_34 = 0;
LAB_019540d4:
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return local_34;
}



// ============================================================
// 006d0340
// ============================================================
// Function: FUN_006d0340
// Address: 006d0340
// Size: 1316 bytes
// Class: MULSSGenerator

void FUN_006d0340(void)

{
  void *pvVar1;
  void* pVar2;
  int64_t lVar3;
  int64_t this_ptr;
  int64_t lVar4;
  uint32_t uVar5;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  uint64_t local_88;
  uint32_t local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  
  uVar5 = FUN_006d0b50();
  local_38 = local_a0;
  if ((local_98 == '\0') && (local_a0 != 0)) {
    uVar5 = FUN_00d50b00();
  }
  local_70 = 0;
  lVar4 = *(int64_t *)(this_ptr + 0x168);
  if (lVar4 != 0) {
    uVar5 = FUN_00d50b00();
  }
  lVar3 = g_02705b68;
  local_70 = '\x01';
  local_78 = lVar4;
  if (g_02705b68 != 0) {
    uVar5 = FUN_00d50b00();
  }
  lVar4 = g_0270b8b0;
  local_f0 = lVar3;
  local_e8 = '\x01';
  if (g_0270b8b0 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_e0 = lVar4;
  local_d8 = '\x01';
  uVar5 = FUN_01e57260(uVar5,&local_e0);
  local_58 = local_a0;
  local_50 = 0;
  local_d0 = g_02726ca8;
  if (local_98 == '\0') {
    if (local_a0 != 0) {
      uVar5 = FUN_00d50b00();
      local_d0 = g_02726ca8;
    }
  }
  else {
    local_98 = '\0';
  }
  local_50 = '\x01';
  g_02726ca8 = local_d0;
  if (local_d0 != 0) {
    local_50 = '\x01';
    uVar5 = FUN_00d50b00();
  }
  local_c8 = '\x01';
  FUN_01e57260(uVar5,&local_d0);
  local_48 = local_b0;
  local_40 = 0;
  if (local_a8 == '\0') {
    if (local_b0 != 0) {
      FUN_00d50b00();
    }
    lVar4 = *(int64_t *)(this_ptr + 0x130);
  }
  else {
    local_a8 = '\0';
    lVar4 = *(int64_t *)(this_ptr + 0x130);
  }
  local_40 = '\x01';
  if (lVar4 != 0) {
    local_40 = '\x01';
    local_60 = 0;
    FUN_00d50b00();
  }
  local_60 = '\x01';
  local_c0 = 0;
  local_b8 = '\0';
  local_68 = lVar4;
  FUN_000b75e0(g_02390124,&local_f0,&local_48,&local_68);
  lVar4 = local_38;
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x130) == 0) {
    if (lVar4 == 0) {
      return;
    }
  }
  else {
    if (*(int64_t **)(this_ptr + 0xf8) != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(this_ptr + 0xf8) + 0x998))();
    }
    if (*(int64_t **)(this_ptr + 0xf0) != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(this_ptr + 0xf0) + 0x998))();
    }
    if (*(int *)(local_38 + 0xc) == 0) {
      if (*(int64_t **)(this_ptr + 0xf8) != (int64_t *)0x0) {
        (**(code **)(**(int64_t **)(this_ptr + 0xf8) + 0x918))();
      }
      if (*(int64_t **)(this_ptr + 0xf0) != (int64_t *)0x0) {
        (**(code **)(**(int64_t **)(this_ptr + 0xf0) + 0x918))();
      }
    }
    else {
      local_98 = '\0';
      local_a0 = 0;
      local_90 = local_38;
      local_80 = 0;
      local_88 = 0;
      if (0 < *(int *)(local_38 + 0xc)) {
        lVar4 = 0;
        do {
          local_a0 = *(int64_t *)(*(int64_t *)(local_38 + 0x10) + lVar4 * 8);
          lVar3 = local_38;
          pvVar1 = _pthread_getspecific((void*)local_38);
          pVar2 = (void*)lVar3;
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_004f7980();
          pvVar1 = _pthread_getspecific(pVar2);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_004f78f0();
          lVar4 = lVar4 + 1;
          local_88 = CONCAT44(local_88._4_4_,(int)lVar4);
        } while ((int)lVar4 < *(int *)(local_38 + 0xc));
      }
      FUN_006ddd30();
      if (*(int64_t **)(this_ptr + 0xf8) != (int64_t *)0x0) {
        (**(code **)(**(int64_t **)(this_ptr + 0xf8) + 0x918))();
      }
      if (*(int64_t **)(this_ptr + 0xf0) != (int64_t *)0x0) {
        (**(code **)(**(int64_t **)(this_ptr + 0xf0) + 0x918))();
      }
    }
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 0164f500
// ============================================================
// Function: FUN_0164f500
// Address: 0164f500
// Size: 1318 bytes
// Class: MULSSGenerator

uint64_t FUN_0164f500(void* param_1,char param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t lVar6;
  char *pcVar7;
  int64_t lVar8;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_98;
  char local_90;
  uint64_t local_70;
  int64_t local_60;
  char local_58;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_0184a0c0();
  lVar8 = *arg1;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    lVar8 = *arg1;
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
  }
  lVar8 = *(int64_t *)(lVar8 + 0xa8);
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  lVar5 = *arg1;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    lVar5 = *arg1;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      lVar5 = *(int64_t *)(lVar5 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
  }
  if (*(int64_t *)(lVar5 + 0xa8) != 0) {
    *(void*)(lVar5 + 0xa8) = 0;
    FUN_00d50b20();
  }
  if ((lVar8 == 0) || (cVar3 = FUN_0131bcd0(), cVar3 != '\0')) {
    if (lVar8 == 0) {
      bVar2 = true;
      local_70 = 0;
      bVar1 = false;
    }
    else {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01505930();
      FUN_00d23310();
      param_1 = CONCAT31((int3)(param_1 >> 8),local_40[0]);
      pcVar7 = local_38;
      if (local_40[0] != '\0') {
        pcVar7 = local_40;
      }
      local_38[0] = local_40[0];
      *pcVar7 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c9740();
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      if ((local_38[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      lVar8 = g_02727928;
      if (g_02727928 != 0) {
        FUN_00d50b00();
      }
      local_40[0] = '\0';
      FUN_00ca13a0();
      if ((local_40[0] != '\0') && (lVar8 != 0)) {
        FUN_00d50b20();
      }
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
      lVar8 = g_02727930;
      if (g_02727930 != 0) {
        FUN_00d50b00();
      }
      local_40[0] = '\0';
      FUN_00ca13a0();
      if ((local_40[0] != '\0') && (lVar8 != 0)) {
        FUN_00d50b20();
      }
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
      lVar8 = g_02727938;
      if (g_02727938 != 0) {
        FUN_00d50b00();
      }
      local_40[0] = '\0';
      FUN_00ca13a0();
      if ((local_40[0] != '\0') && (lVar8 != 0)) {
        FUN_00d50b20();
      }
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015058d0();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150eb60();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01823610();
      if ((local_40[0] != '\0') && (lVar8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (local_60 != 0) {
        FUN_00d50b20();
      }
      local_70 = 1;
      bVar2 = false;
      bVar1 = false;
    }
  }
  else {
    FUN_00d50b20();
    bVar2 = true;
    local_70 = 0;
    bVar1 = true;
  }
  FUN_0164e420();
  lVar8 = *arg1;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    lVar8 = *arg1;
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
  }
  *(void*)(this_ptr + 0xb0) = *(void*)(lVar8 + 0xb0);
  if (param_2 != '\0') {
    lVar8 = *arg1;
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      lVar8 = *arg1;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    *(void*)(this_ptr + 0xb1) = *(void*)(lVar8 + 0xb1);
  }
  FUN_01733c40();
  if (!bVar1 && !bVar2) {
    FUN_00d50b20();
  }
  return local_70;
}



// ============================================================
// 012f7f50
// ============================================================
// Function: FUN_012f7f50
// Address: 012f7f50
// Size: 989 bytes
// Class: MULSSGenerator
// String references:
//   "MULSSGenerator"

void FUN_012f7f50(void* param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t **pplVar5;
  int64_t lVar6;
  int64_t this_ptr;
  int64_t *plVar7;
  int64_t *local_40;
  char local_38;
  
  *(int *)(this_ptr + 0x6c) = *(int *)(this_ptr + 0x6c) + 1;
  lVar6 = *(int64_t *)(this_ptr + 0x58);
  if (lVar6 == 0) goto LAB_012f81c5;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    lVar6 = *(int64_t *)(this_ptr + 0x58);
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
  }
  plVar7 = *(int64_t **)(lVar6 + 0x118);
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_38 = '\x01';
  local_40 = plVar7;
  if ((g_0270c820 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    g_027e77e8 = FUN_0015ef90();
    g_027e77d0 = "MULSSGenerator";
    g_027e77d8 = 0x70;
    param_1 = 0x15ef30;
    g_027e77e0 = FUN_0015ef30;
    g_027e77f0 = 0;
    ram_00000000027e77f8 = 0;
    g_027e7800 = 0;
    ram_00000000027e7808 = 0;
    g_027e7810 = 0;
    ram_00000000027e7818 = 0;
    g_027e7820 = 0;
    ram_00000000027e7828 = 0;
    g_027e7830 = 0;
    ram_00000000027e7838 = 0;
    g_027e7840 = 0;
    ram_00000000027e7848 = 0;
    g_027e7850 = 0;
    ram_00000000027e7858 = 0;
    g_027e7860 = 0;
    ram_00000000027e7868 = 0;
    g_027e7870 = 0;
    ram_00000000027e7878 = 0;
    g_027e7880 = 0;
    ram_00000000027e7888 = 0;
    g_027e7890 = 0;
    ___cxa_guard_release();
  }
  if (plVar7 == (int64_t *)0x0) {
LAB_012f7ff9:
    pplVar5 = &g_02802688;
    plVar7 = g_02802688;
    if (g_02802690 != '\0') goto LAB_012f8009;
LAB_012f801c:
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_012f7ff9;
    pplVar5 = &local_40;
    plVar7 = local_40;
    if (local_38 == '\0') goto LAB_012f801c;
LAB_012f8009:
    *(void*)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 == (int64_t *)0x0) goto LAB_012f81c5;
  plVar7 = *(int64_t **)(this_ptr + 0x118);
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_38 = '\x01';
  local_40 = plVar7;
  if ((g_0270c820 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    g_027e77e8 = FUN_0015ef90();
    g_027e77d0 = "MULSSGenerator";
    g_027e77d8 = 0x70;
    param_1 = 0x15ef30;
    g_027e77e0 = FUN_0015ef30;
    g_027e77f0 = 0;
    ram_00000000027e77f8 = 0;
    g_027e7800 = 0;
    ram_00000000027e7808 = 0;
    g_027e7810 = 0;
    ram_00000000027e7818 = 0;
    g_027e7820 = 0;
    ram_00000000027e7828 = 0;
    g_027e7830 = 0;
    ram_00000000027e7838 = 0;
    g_027e7840 = 0;
    ram_00000000027e7848 = 0;
    g_027e7850 = 0;
    ram_00000000027e7858 = 0;
    g_027e7860 = 0;
    ram_00000000027e7868 = 0;
    g_027e7870 = 0;
    ram_00000000027e7878 = 0;
    g_027e7880 = 0;
    ram_00000000027e7888 = 0;
    g_027e7890 = 0;
    ___cxa_guard_release();
  }
  if (plVar7 == (int64_t *)0x0) {
LAB_012f8094:
    pplVar5 = &g_02802688;
    plVar7 = g_02802688;
    if (g_02802690 != '\0') goto LAB_012f80a7;
LAB_012f80bd:
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_012f8094;
    pplVar5 = &local_40;
    plVar7 = local_40;
    if (local_38 == '\0') goto LAB_012f80bd;
LAB_012f80a7:
    *(void*)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 != (int64_t *)0x0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c6a80();
    FUN_012c6a20();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c6af0();
    FUN_012c6a90();
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_012f81c5:
  *(int *)(this_ptr + 0x6c) = *(int *)(this_ptr + 0x6c) + -1;
  return;
}



// ============================================================
// 004fa380
// ============================================================
// Function: FUN_004fa380
// Address: 004fa380
// Size: 1475 bytes
// Class: MULSSGenerator

void FUN_004fa380(void* param_1,uint64_t param_2)

{
  int64_t lVar1;
  void *pvVar2;
  char *pcVar3;
  void* pVar4;
  char *pcVar5;
  int64_t lVar6;
  int64_t *this_ptr;
  int64_t local_f8;
  char local_f0 [8];
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
  uint64_t local_78;
  int64_t local_60;
  char local_58;
  int local_48;
  char local_38 [8];
  
  local_78 = param_2;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  lVar6 = *this_ptr;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (lVar6 != local_60) goto LAB_004fa4e8;
  local_e8 = *this_ptr;
  local_e0 = '\0';
  FUN_00243390();
  lVar6 = *this_ptr;
  if (lVar6 == local_60) {
    if (((char)this_ptr[1] != '\0') || (local_60 == 0)) goto LAB_004fa4ba;
    if (local_58 == '\0') {
      FUN_00d50b00();
      goto LAB_004fa4b5;
    }
LAB_004fa47a:
    *(void*)(this_ptr + 1) = 1;
    local_58 = '\0';
  }
  else {
    lVar1 = this_ptr[1];
    if (local_58 != '\0') {
      *this_ptr = local_60;
      if (((char)lVar1 != '\0') && (lVar6 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_004fa47a;
    }
    if (local_60 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = local_60;
    if (((char)lVar1 != '\0') && (lVar6 != 0)) {
      FUN_00d50b20();
    }
LAB_004fa4b5:
    *(void*)(this_ptr + 1) = 1;
LAB_004fa4ba:
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
LAB_004fa4e8:
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7fb0();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7fb0();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  lVar6 = *this_ptr;
  if (lVar6 != 0) {
    local_48 = -1;
    while (local_48 = local_48 + 1, local_48 < *(int *)(lVar6 + 0xc)) {
      pVar4 = (void*)*(void*)(lVar6 + 0x10);
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152ebe0();
      local_38[0] = local_f0[0];
      pcVar5 = local_38;
      pcVar3 = local_f0;
      if (local_f0[0] == '\0') {
        pcVar3 = pcVar5;
      }
      *pcVar3 = '\0';
      if ((local_f0[0] != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      pVar4 = (void*)pcVar5;
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_c8 = local_f8;
      local_c0 = '\0';
      FUN_0150d560();
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_b8 = local_f8;
      local_b0 = '\0';
      FUN_0150d3a0();
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_001159b0();
    param_1 = (void*)lVar6;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_a8 = *this_ptr;
  local_a0 = '\0';
  FUN_012e6fe0();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_98 = *this_ptr;
  local_90 = '\0';
  FUN_012e6c30();
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  local_88 = *this_ptr;
  local_80 = '\0';
  FUN_01298d30();
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0165cae0
// ============================================================
// Function: FUN_0165cae0
// Address: 0165cae0
// Size: 962 bytes
// Class: MULSSGenerator

int64_t * FUN_0165cae0(int64_t *param_1,uint64_t param_2,int64_t *param_3,void*param_4)

{
  char cVar1;
  void *pvVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  int64_t *this_ptr;
  void*puVar11;
  void*local_res8;
  int64_t local_a0;
  uint64_t local_98;
  void*local_90;
  uint32_t local_7c;
  int64_t local_78;
  int iStack_5c;
  uint64_t local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  plVar9 = &local_a0;
  if (param_3 != (int64_t *)0x0) {
    plVar9 = param_3;
  }
  puVar11 = &local_98;
  if (param_4 != (void*)0x0) {
    puVar11 = param_4;
  }
  local_90 = &local_7c;
  if (local_res8 != (void*)0x0) {
    local_90 = local_res8;
  }
  local_7c = 0xffffffff;
  pvVar2 = _pthread_getspecific((void*)local_90);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01252670(plVar9,1,puVar11,local_90);
  lVar7 = local_50;
  plVar10 = (int64_t *)local_48;
  local_38[0] = local_48[0];
  plVar3 = plVar10;
  if (local_48[0] == '\0') {
    plVar3 = (int64_t *)local_38;
  }
  *(void*)plVar3 = 0;
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_40[0] = local_38[0] != '\0';
  plVar3 = (int64_t *)local_38;
  if (!(bool)local_40[0]) {
    plVar3 = (int64_t *)local_40;
  }
  *(void*)plVar3 = 0;
  if ((local_38[0] != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 == 0) {
    lVar7 = FUN_00e7bdb0();
    *param_1 = lVar7;
    lVar7 = FUN_00e7bdb0();
    *plVar9 = lVar7;
    uVar8 = FUN_00e7bdb0();
    *puVar11 = uVar8;
    *this_ptr = 0;
    *(void*)(this_ptr + 1) = 0;
    return this_ptr;
  }
  lVar4 = FUN_0165be20();
  local_50 = (uint64_t)local_50._4_4_ << 0x20;
  iStack_5c = (int)((uint64_t)param_2 >> 0x20);
  if (((iStack_5c == 0) || (cVar1 = FUN_00e7c650(), cVar1 != '\0')) &&
     (*(int *)((int64_t)puVar11 + 4) != 0)) {
    local_48[0] = '\0';
    local_50 = 0;
    local_78 = lVar7;
    do {
      pvVar2 = _pthread_getspecific((void*)plVar10);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      plVar10 = plVar9;
      cVar1 = FUN_01253c10(plVar9,&local_50,puVar11,local_90);
      lVar7 = local_50;
      if (cVar1 == '\0') {
LAB_0165cdf8:
        local_38[0] = '\0';
        *param_1 = lVar4;
        *this_ptr = local_78;
        *(void*)(this_ptr + 1) = 0;
        lVar7 = local_78;
        goto joined_r0x0165ce1d;
      }
      pvVar2 = _pthread_getspecific((void*)plVar10);
      lVar6 = local_50;
      if ((pvVar2 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar7 = lVar6, lVar5 != 0)) {
        lVar7 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
      if (((iStack_5c != 0) && (*(int *)(lVar7 + 0x4c) != 0)) &&
         (cVar1 = FUN_00e7c020(), cVar1 != '\0')) goto LAB_0165cdf8;
      lVar7 = local_50;
      pvVar2 = _pthread_getspecific((void*)plVar10);
      lVar4 = local_50;
      if ((pvVar2 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar7 = lVar4, lVar6 != 0)) {
        lVar7 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      if ((((iStack_5c != 0) && (*(int *)(lVar7 + 0x4c) != 0)) &&
          (cVar1 = FUN_00e7c000(), cVar1 != '\0')) || (*(int *)((int64_t)puVar11 + 4) == 0))
      goto LAB_0165ce21;
      local_78 = local_50;
      lVar4 = *plVar9;
    } while( true );
  }
  *param_1 = lVar4;
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = lVar7;
  if (local_40[0] == '\0') {
    *(void*)(this_ptr + 1) = 0;
  }
  else {
    *(void*)(this_ptr + 1) = 1;
    local_40[0] = '\0';
  }
LAB_0165ce82:
  if (local_40[0] != '\0') {
    FUN_00d50b20();
  }
  return this_ptr;
LAB_0165ce21:
  local_38[0] = '\0';
  *param_1 = *plVar9;
  plVar9 = this_ptr + 1;
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = local_50;
  if (local_48[0] != '\0') {
    *(void*)plVar9 = 1;
    plVar9 = (int64_t *)local_48;
  }
  *(void*)plVar9 = 0;
  lVar7 = local_78;
joined_r0x0165ce1d:
  local_78 = lVar7;
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  goto LAB_0165ce82;
}



// ============================================================
// 01656bf0
// ============================================================
// Function: FUN_01656bf0
// Address: 01656bf0
// Size: 1454 bytes
// Class: MULSSGenerator

void***** FUN_01656bf0(void* param_1,int64_t param_2)

{
  bool bVar1;
  bool bVar2;
  void*****pppppuVar3;
  void *pvVar4;
  int64_t lVar5;
  void*****arg1;
  int64_t this_ptr;
  uint64_t uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  uint32_t local_8c;
  void****local_78;
  char local_70;
  double local_68;
  int64_t local_60;
  int64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  uint64_t local_40;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  FUN_016557b0();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8a10();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01710460();
  local_60 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_50 = local_50 & 0xffffffffffffff00;
  }
  if ((local_70 != '\0') && ((void*****)local_78 != (void*****)0x0)) {
    FUN_00d50b20();
  }
  if (local_60 == 0) {
    local_68 = g_0238fee8 / *(double *)(this_ptr + 0x68);
  }
  else {
    local_8c = 0xffffffff;
    pvVar4 = _pthread_getspecific(param_1);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      param_1 = (void*)local_60;
    }
    local_68 = (double)FUN_016c98e0();
    pvVar4 = _pthread_getspecific(param_1);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      param_1 = (void*)local_60;
    }
    local_58 = param_2;
    uVar6 = FUN_00e7b820();
    uVar6 = FUN_016c98e0(uVar6,&local_8c);
    local_68 = (double)FUN_016553c0(local_68);
    uVar6 = FUN_016553c0(uVar6);
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01650210();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    lVar5 = local_58;
    if ((char)local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
        if (((char)local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_50 = local_50 & 0xffffffffffffff00;
    }
    if ((local_70 != '\0') && ((void*****)local_78 != (void*****)0x0)) {
      FUN_00d50b20();
    }
    local_58 = CONCAT44(local_58._4_4_,0xffffffff);
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar7 = (double)FUN_016c25f0(local_68);
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_68 = (double)FUN_016c25f0(uVar6);
    dVar8 = (double)FUN_00e7c860();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    local_68 = (local_68 - dVar7) / dVar8;
  }
  local_58 = FUN_00e7bcc0();
  local_50 = FUN_00e7bcc0();
  local_48 = FUN_00e7bcc0();
  local_40 = FUN_00e7bcc0();
  while (dVar7 = (double)FUN_00e7c860(), local_68 < dVar7) {
    local_78 = (void****)CONCAT44(local_78._4_4_,2);
    FUN_00e7c3c0();
    local_68 = local_68 + local_68;
  }
  while (dVar7 = (double)FUN_00e7c860(), dVar7 < local_68) {
    local_78 = (void****)CONCAT44(local_78._4_4_,2);
    FUN_00e7c2a0();
    local_68 = local_68 * g_023942d0;
  }
  dVar7 = (double)FUN_00e7c860();
  dVar8 = (double)FUN_00e7c860();
  dVar9 = (double)FUN_00e7c860();
  dVar10 = (double)FUN_00e7c860();
  dVar11 = (double)FUN_00e7c860();
  dVar12 = (double)FUN_00e7c860();
  if (((local_68 < SQRT(dVar7 * dVar8)) || (local_68 < SQRT(dVar9 * dVar10))) ||
     (local_68 < SQRT(dVar11 * dVar12))) {
    local_78 = arg1;
    FUN_00e7bac0();
    bVar2 = true;
    bVar1 = true;
    pppppuVar3 = (void*****)local_78;
  }
  else {
    bVar2 = false;
    bVar1 = false;
    pppppuVar3 = &local_78;
  }
  if (local_60 != 0) {
    FUN_00d50b20();
    bVar1 = bVar2;
  }
  if (bVar1) {
    arg1 = pppppuVar3;
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return arg1;
  }
                      ___stack_chk_fail();
}



// ============================================================
// 01953330
// ============================================================
// Function: FUN_01953330
// Address: 01953330
// Size: 1247 bytes
// Class: MULSSGenerator

int64_t * FUN_01953330(void* param_1,int64_t *param_2)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  byte bVar5;
  void *pvVar6;
  char *pcVar7;
  void* pVar8;
  int64_t *this_ptr;
  char *pcVar9;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_58;
  int64_t local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  cVar4 = (char)param_1;
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  iVar1 = *(int *)(local_50 + 0xc);
  if (local_48[0] != '\0') {
    FUN_00d50b20();
  }
  if (iVar1 != 0) goto LAB_01953489;
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6a50();
  lVar2 = *param_2;
  if (lVar2 == local_50) {
    if (((char)param_2[1] != '\0') || (local_50 == 0)) goto LAB_01953475;
    if (local_48[0] == '\0') {
      FUN_00d50b00();
      goto LAB_0195346e;
    }
  }
  else {
    lVar3 = param_2[1];
    if (local_48[0] == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      *param_2 = local_50;
      if (((char)lVar3 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
LAB_0195346e:
      local_58 = param_2 + 1;
      *(void*)local_58 = 1;
LAB_01953475:
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01953489;
    }
    *param_2 = local_50;
    if (((char)lVar3 != '\0') && (lVar2 != 0)) {
      FUN_00d50b20();
    }
  }
  local_58 = param_2 + 1;
  *(void*)local_58 = 1;
LAB_01953489:
  if (cVar4 == '\0') {
    FUN_01941c70();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    FUN_00d23310();
    local_40[0] = local_48[0];
    pcVar7 = local_40;
    if (local_48[0] != '\0') {
      pcVar7 = local_48;
    }
    *pcVar7 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264240();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar4 = FUN_01390340();
    bVar5 = 1;
    if (cVar4 == '\0') {
      FUN_01941c70();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5ae0();
      FUN_00d23310();
      pcVar7 = local_38;
      pcVar9 = local_48;
      if (local_48[0] == '\0') {
        pcVar9 = pcVar7;
      }
      local_38[0] = local_48[0];
      *pcVar9 = '\0';
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      pVar8 = (void*)pcVar7;
      pvVar6 = _pthread_getspecific(pVar8);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      pvVar6 = _pthread_getspecific(pVar8);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      bVar5 = FUN_0134a7d0();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      bVar5 = bVar5 ^ 1;
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if (bVar5 != 0) {
      FUN_01941c70();
      return this_ptr;
    }
  }
  lVar2 = *param_2;
  *(void*)(this_ptr + 1) = 0;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar2;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 006d0b50
// ============================================================
// Function: FUN_006d0b50
// Address: 006d0b50
// Size: 1195 bytes
// Class: MULSSGenerator

void* FUN_006d0b50(void)

{
  int64_t lVar1;
  char cVar2;
  void*puVar3;
  char *pcVar4;
  void *pvVar5;
  char *pcVar6;
  void*this_ptr;
  int iVar7;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d0;
  char local_c8;
  int64_t local_b0;
  char local_a8;
  int64_t local_90;
  char local_88 [16];
  uint64_t local_78;
  uint32_t local_70;
  void*local_68;
  int64_t local_60;
  int64_t local_58;
  int64_t local_50;
  char local_48;
  char local_40 [8];
  char local_38 [8];
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pcVar6 = &g_02572358;
  *puVar3 = &g_02572358;
  local_68 = puVar3;
  (*g_02572370)();
  FUN_006cb500();
  if (local_50 != 0) {
    FUN_006cb500();
    if (*(int *)(local_108 + 0xc) == 0) {
      cVar2 = '\0';
    }
    else {
      FUN_006cb500();
      local_60 = local_f8;
      FUN_00d23310();
      local_40[0] = local_88[0];
      pcVar4 = local_40;
      if (local_88[0] != '\0') {
        pcVar4 = local_88;
      }
      *pcVar4 = '\0';
      if ((local_88[0] != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      pvVar5 = _pthread_getspecific((void*)pcVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e8920();
      if (local_d0 == 0) {
        cVar2 = '\0';
      }
      else {
        FUN_006cb500();
        local_58 = local_e8;
        FUN_00d23310();
        pcVar6 = local_38;
        pcVar4 = local_88;
        if (local_88[0] == '\0') {
          pcVar4 = pcVar6;
        }
        local_38[0] = local_88[0];
        *pcVar4 = '\0';
        if ((local_88[0] != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        pvVar5 = _pthread_getspecific((void*)pcVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e8920();
        pvVar5 = _pthread_getspecific((void*)pcVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar2 = FUN_012ccc80();
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if ((local_e0 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    if (local_100 != '\0') {
      FUN_00d50b20();
    }
    if (local_48 != '\0') {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') goto LAB_006d0fea;
  }
  FUN_006cb500();
  if (local_88[0] == '\0') {
    if (local_90 == 0) goto LAB_006d0fea;
    FUN_00d50b00();
  }
  else if (local_90 == 0) goto LAB_006d0fea;
  local_88[0] = '\0';
  local_70 = 0;
  local_78 = 0;
  if (0 < *(int *)(local_90 + 0xc)) {
    iVar7 = 0;
    do {
      pvVar5 = _pthread_getspecific((void*)pcVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e8920();
      lVar1 = local_50;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_004f9670();
        lVar1 = local_50;
        if (local_48 == '\0') {
          if (((local_50 != 0) && (FUN_00d50b00(), local_48 != '\0')) && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_48 = '\0';
        }
        if (lVar1 != 0) {
          local_48 = '\0';
          local_50 = lVar1;
          FUN_00d21140();
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
      iVar7 = iVar7 + 1;
      local_78 = CONCAT44(local_78._4_4_,iVar7);
    } while (iVar7 < *(int *)(local_90 + 0xc));
  }
  FUN_000be170();
  FUN_00d50b20();
LAB_006d0fea:
  *this_ptr = local_68;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 012cf0c0
// ============================================================
// Function: FUN_012cf0c0
// Address: 012cf0c0
// Size: 1021 bytes
// Class: MULSSGenerator

void FUN_012cf0c0(uint64_t param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void*puVar4;
  int64_t lVar5;
  int64_t *this_ptr;
  bool bVar6;
  uint64_t uVar7;
  int64_t *local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_01f27fe0();
  if (local_40 == 0) {
    g_028ac879 = '\0';
  }
  else {
    FUN_01f27fe0();
    cVar1 = (**(code **)(*local_80 + 0x450))();
    if (cVar1 == '\0') {
      g_028ac879 = '\0';
    }
    else {
      uVar7 = FUN_00d6f370();
      lVar5 = g_027bedc8;
      if (g_027bedc8 != 0) {
        uVar7 = FUN_00d50b00();
      }
      g_028ac879 = FUN_00d70f90(uVar7,1);
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (((g_028ac879 != '\0') && (iVar2 = FUN_00da6b30(), 2 < iVar2)) &&
     ((g_028ac868 == (void*)0x0 || (g_028ac871 == '\0')))) {
    FUN_00e8cb50();
    if (g_028ac868 == (void*)0x0) {
      iVar3 = FUN_00da6b30();
      iVar2 = 0x10;
      if (iVar3 < 0x13) {
        iVar2 = iVar3 + -2;
      }
      if (iVar2 < 2) {
        iVar2 = FUN_00da6b30();
        iVar2 = 2 - (uint)(iVar2 == 1);
      }
      if ((((int64_t *)*this_ptr != (int64_t *)0x0) &&
          (iVar3 = (**(code **)(*(int64_t *)*this_ptr + 0x378))(), iVar3 != 0)) &&
         (iVar2 = 0x10, iVar3 < 0x10)) {
        iVar2 = iVar3;
      }
      g_028ac878 = 0;
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_02572358;
      (*g_02572370)();
      bVar6 = g_028ac868 == (void*)0x0;
      g_028ac868 = puVar4;
      if (((bVar6) || (FUN_00d50b20(), g_028ac868 != (void*)0x0)) && (g_028ac870 == '\0')
         ) {
        g_028ac870 = '\x01';
        FUN_00e8cb90();
      }
      FUN_012cf680();
      lVar5 = g_028ac848;
      if (g_028ac848 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == 0) {
            lVar5 = 0;
          }
          else {
            FUN_00d50b00();
            lVar5 = local_40;
          }
        }
        else {
          local_38 = '\0';
          lVar5 = local_40;
        }
        bVar6 = g_028ac848 != 0;
        g_028ac848 = lVar5;
        if (bVar6) {
          FUN_00d50b20();
          lVar5 = local_40;
        }
      }
      if ((lVar5 != 0) && (g_028ac850 == '\0')) {
        g_028ac850 = '\x01';
        FUN_00e8cb90();
        lVar5 = local_40;
      }
      if ((local_38 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_02581c90;
      (*g_02581ca8)();
      bVar6 = g_028ac858 == (void*)0x0;
      g_028ac858 = puVar4;
      if (((bVar6) || (FUN_00d50b20(), g_028ac858 != (void*)0x0)) && (g_028ac860 == '\0')
         ) {
        g_028ac860 = '\x01';
        FUN_00e8cb90();
      }
      if (0 < iVar2) {
        do {
          local_50 = 0;
          local_48 = '\0';
          FUN_00da62d0(param_1,&local_50);
          lVar5 = local_40;
          if (local_38 == '\0') {
            if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38 = '\0';
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          local_38 = '\0';
          local_40 = lVar5;
          FUN_00d21140();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      g_028ac871 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028ac871 = '\x01';
      FUN_00e8cb70();
    }
  }
  return;
}



// ============================================================
// 00523880
// ============================================================
// Function: FUN_00523880
// Address: 00523880
// Size: 1072 bytes
// Class: MULSSGenerator

void FUN_00523880(uint32_t param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  int64_t lVar6;
  void* pVar7;
  char *pcVar8;
  int64_t this_ptr;
  uint64_t uVar9;
  double dVar10;
  int64_t local_68;
  char local_60;
  int64_t local_50;
  char local_48 [8];
  double local_40;
  char local_38 [8];
  
  FUN_00b31a00();
  pVar7 = CONCAT31((int3)((uint)param_1 >> 8),local_48[0]);
  pcVar8 = local_38;
  if (local_48[0] != '\0') {
    pcVar8 = local_48;
  }
  local_38[0] = local_48[0];
  *pcVar8 = '\0';
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  cVar1 = FUN_00bc47e0();
  uVar9 = g_02395720;
  if (cVar1 != '\0') {
    uVar9 = FUN_00bc48b0();
  }
  *(void*)(this_ptr + 0x268) = uVar9;
  uVar9 = FUN_00bc4920();
  *(void*)(this_ptr + 0x270) = uVar9;
  cVar1 = *(char *)(this_ptr + 0x370);
  cVar2 = FUN_00bc47f0();
  *(char *)(this_ptr + 0x24f) = cVar2;
  if (cVar2 == '\0') {
    local_40 = 0.0;
    cVar3 = '\0';
    dVar10 = 0.0;
    cVar2 = '\0';
    if (cVar1 == '\0') goto LAB_00523968;
LAB_0052397a:
    *(double *)(this_ptr + 0x250) = dVar10;
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00521df0(dVar10);
    FUN_01320140();
    *(void*)(this_ptr + 0x2a0) = 1;
    if (cVar1 == '\0') goto LAB_005239eb;
LAB_005239fe:
    *(double *)(this_ptr + 600) = local_40;
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00521df0(local_40);
    FUN_013200d0();
    *(void*)(this_ptr + 0x2a0) = 1;
  }
  else {
    dVar10 = (double)FUN_00bc48c0();
    local_40 = (double)FUN_00bc48d0();
    cVar3 = FUN_00bc48e0();
    cVar2 = cVar3;
    if (cVar1 != '\0') goto LAB_0052397a;
LAB_00523968:
    cVar3 = cVar2;
    if ((*(double *)(this_ptr + 0x250) != dVar10) ||
       (NAN(*(double *)(this_ptr + 0x250)) || NAN(dVar10))) goto LAB_0052397a;
LAB_005239eb:
    if ((*(double *)(this_ptr + 600) != local_40) ||
       (NAN(*(double *)(this_ptr + 600)) || NAN(local_40))) goto LAB_005239fe;
  }
  if (*(char *)(this_ptr + 0x24d) != cVar3) {
    *(char *)(this_ptr + 0x24d) = cVar3;
    *(void*)(this_ptr + 0x2a0) = 1;
  }
  cVar2 = FUN_00bc47c0();
  if (cVar2 == '\0') {
    cVar2 = FUN_00bc47b0();
    local_40 = 0.0;
    if (cVar2 != '\0') {
      local_40 = (double)FUN_00bc4790();
    }
  }
  else {
    lVar6 = FUN_00bc4780();
    local_40 = (double)FUN_00b335d0();
    local_40 = (double)lVar6 / local_40;
  }
  if (((*(char *)(this_ptr + 0x24e) == '\0') || (cVar2 = FUN_00bc4910(), cVar2 != '\0')) ||
     (cVar2 = FUN_00bc47d0(), cVar2 == '\0')) goto LAB_00523c71;
  if (*(int64_t *)(this_ptr + 0x308) == 0) {
    FUN_00757c60();
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    if (local_48[0] == '\0') {
      if (((local_50 != 0) && (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_48[0] = '\0';
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (local_50 != 0) {
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar4 = FUN_016c2e90();
      if (iVar4 == 0) {
        local_40 = *(double *)(this_ptr + 0x260);
      }
      FUN_00d50b20();
      if (iVar4 == 0) goto LAB_00523c71;
      goto LAB_00523b13;
    }
    dVar10 = *(double *)(this_ptr + 0x260);
  }
  else {
LAB_00523b13:
    FUN_00bc47a0();
    local_40 = (double)FUN_00521df0();
    dVar10 = *(double *)(this_ptr + 0x260);
    if (g_02391038 <= (double)((uint64_t)(local_40 - dVar10) & g_023908f0))
    goto LAB_00523c71;
  }
  local_40 = dVar10;
LAB_00523c71:
  *(double *)(this_ptr + 0x260) = local_40;
  if (cVar1 != '\0') {
    *(void*)(this_ptr + 0x370) = 0;
  }
  if ((local_38[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 016557b0
// ============================================================
// Function: FUN_016557b0
// Address: 016557b0
// Size: 1611 bytes
// Class: MULSSGenerator

void FUN_016557b0(void* param_1)

{
  int64_t lVar1;
  void *pvVar2;
  int64_t this_ptr;
  uint64_t uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int64_t local_80;
  char local_78;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (*(char *)(this_ptr + 0x65) == '\0') {
    return;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    return;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016501d0();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 == 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01650620();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016676b0();
    if (local_38 != '\0') {
      local_38 = '\0';
    }
    FUN_01650af0();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01650210();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012caf10();
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
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar3 = FUN_016c25f0(*(void*)(this_ptr + 0x40));
  *(void*)(this_ptr + 0x70) = uVar3;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8a10();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01710460();
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
  if (local_40 == 0) {
    *(void*)(this_ptr + 0x78) = *(void*)(this_ptr + 0x70);
LAB_01655bbd:
    dVar5 = *(double *)(this_ptr + 0x58);
    if ((dVar5 == 0.0) && (dVar6 = g_0238fee8, !NAN(dVar5))) goto LAB_01655c99;
    dVar4 = *(double *)(this_ptr + 0x48);
  }
  else {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar3 = FUN_016c25f0(*(void*)(this_ptr + 0x50));
    *(void*)(this_ptr + 0x78) = uVar3;
    if (*(char *)(this_ptr + 0x60) == '\0') goto LAB_01655bbd;
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar4 = (double)FUN_016c25f0(*(double *)(this_ptr + 0x40) + *(double *)(this_ptr + 0x48));
    dVar4 = dVar4 - *(double *)(this_ptr + 0x70);
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar5 = (double)FUN_016c25f0(*(double *)(this_ptr + 0x50) + *(double *)(this_ptr + 0x58));
    dVar5 = dVar5 - *(double *)(this_ptr + 0x78);
    if ((dVar5 == 0.0) && (dVar6 = g_0238fee8, !NAN(dVar5))) goto LAB_01655c99;
  }
  if ((dVar4 != 0.0) || (dVar6 = g_0238fee8, NAN(dVar4))) {
    dVar6 = dVar5 / dVar4;
  }
LAB_01655c99:
  *(double *)(this_ptr + 0x68) = dVar6;
  *(void*)(this_ptr + 0x65) = 0;
  FUN_00d403d0();
  lVar1 = g_026dc2a0;
  if (g_026dc2a0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_80 = 0;
  local_78 = '\0';
  FUN_00d40470(&local_80,&stack0xffffffffffffff90,1,3);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0165de10
// ============================================================
// Function: FUN_0165de10
// Address: 0165de10
// Size: 928 bytes
// Class: MULSSGenerator

int64_t * FUN_0165de10(int64_t *param_1,int param_2,int64_t *param_3,void*param_4)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  char *pcVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int64_t *this_ptr;
  int64_t *plVar10;
  void*puVar11;
  void*local_res8;
  int64_t local_a0;
  uint64_t local_98;
  void*local_90;
  uint32_t local_88;
  int local_84;
  int64_t *local_80;
  int64_t local_60;
  int64_t local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  plVar10 = &local_a0;
  if (param_3 != (int64_t *)0x0) {
    plVar10 = param_3;
  }
  puVar11 = &local_98;
  if (param_4 != (void*)0x0) {
    puVar11 = param_4;
  }
  local_90 = &local_88;
  if (local_res8 != (void*)0x0) {
    local_90 = local_res8;
  }
  local_88 = 0xffffffff;
  pvVar3 = _pthread_getspecific((void*)local_90);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_84 = param_2;
  FUN_01252670(plVar10,1,puVar11,local_90);
  local_60 = local_50;
  local_38[0] = local_48[0];
  pcVar4 = local_48;
  if (local_48[0] == '\0') {
    pcVar4 = local_38;
  }
  *pcVar4 = '\0';
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_40[0] = local_38[0] != '\0';
  pcVar4 = local_38;
  if (!(bool)local_40[0]) {
    pcVar4 = local_40;
  }
  *pcVar4 = '\0';
  if ((local_38[0] != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 == 0) {
    lVar7 = FUN_00e7bdb0();
    *param_1 = lVar7;
    lVar7 = FUN_00e7bdb0();
    *plVar10 = lVar7;
    uVar8 = FUN_00e7bdb0();
    *puVar11 = uVar8;
    *this_ptr = 0;
    *(void*)(this_ptr + 1) = 0;
    return this_ptr;
  }
  plVar5 = (int64_t *)FUN_0165be20();
  iVar1 = local_84;
  if ((0 < local_84) && (*(int *)((int64_t)puVar11 + 4) != 0)) {
    local_48[0] = '\0';
    local_50 = 0;
    local_80 = plVar5;
    do {
      pvVar3 = _pthread_getspecific((void*)plVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      plVar5 = plVar10;
      cVar2 = FUN_01253c10(plVar10,&local_50,puVar11,local_90);
      lVar7 = local_50;
      if (cVar2 == '\0') {
LAB_0165e0ef:
        local_38[0] = '\0';
        *param_1 = (int64_t)local_80;
        *this_ptr = local_60;
        *(void*)(this_ptr + 1) = 0;
        if ((local_48[0] != '\0') && (local_38[0] = '\0', local_50 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_0165e17d;
      }
      pvVar3 = _pthread_getspecific((void*)plVar5);
      lVar9 = local_50;
      if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar7 = lVar9, lVar6 != 0)) {
        lVar7 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      lVar9 = local_50;
      if (iVar1 < *(int *)(lVar7 + 0x44)) goto LAB_0165e0ef;
      pvVar3 = _pthread_getspecific((void*)plVar5);
      lVar7 = local_50;
      if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar9 = lVar7, lVar6 != 0)) {
        lVar9 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      if ((*(int *)(lVar9 + 0x44) == iVar1) || (*(int *)((int64_t)puVar11 + 4) == 0))
      goto LAB_0165e11c;
      local_60 = local_50;
      local_80 = (int64_t *)*plVar10;
    } while( true );
  }
  *param_1 = (int64_t)plVar5;
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = local_60;
  if (local_40[0] == '\0') {
    *(void*)(this_ptr + 1) = 0;
  }
  else {
    *(void*)(this_ptr + 1) = 1;
    local_40[0] = '\0';
  }
LAB_0165e190:
  if (local_40[0] != '\0') {
    FUN_00d50b20();
  }
  return this_ptr;
LAB_0165e11c:
  local_38[0] = '\0';
  *param_1 = *plVar10;
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = local_50;
  if (local_48[0] == '\0') {
    *(void*)(this_ptr + 1) = 0;
  }
  else {
    *(void*)(this_ptr + 1) = 1;
    local_48[0] = '\0';
  }
LAB_0165e17d:
  if ((local_38[0] != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  goto LAB_0165e190;
}



// ============================================================
// 01659300
// ============================================================
// Function: FUN_01659300
// Address: 01659300
// Size: 1034 bytes
// Class: MULSSGenerator
// String references:
//   "MULSSGenerator"

void FUN_01659300(void* param_1)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t **pplVar6;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012eb770();
  local_38 = local_48;
  if ((((local_40 == '\0') && (local_48 != (int64_t *)0x0)) && (FUN_00d50b00(), local_40 != '\0'))
     && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    param_1 = (void*)local_38;
  }
  pplVar6 = &local_48;
  FUN_012e78c0();
  plVar1 = local_48;
  if ((g_0270c820 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_027e77e8 = FUN_0015ef90();
    g_027e77d0 = "MULSSGenerator";
    g_027e77d8 = 0x70;
    param_1 = 0x15ef30;
    g_027e77e0 = FUN_0015ef30;
    g_027e77f0 = 0;
    ram_00000000027e77f8 = 0;
    g_027e7800 = 0;
    ram_00000000027e7808 = 0;
    g_027e7810 = 0;
    ram_00000000027e7818 = 0;
    g_027e7820 = 0;
    ram_00000000027e7828 = 0;
    g_027e7830 = 0;
    ram_00000000027e7838 = 0;
    g_027e7840 = 0;
    ram_00000000027e7848 = 0;
    g_027e7850 = 0;
    ram_00000000027e7858 = 0;
    g_027e7860 = 0;
    ram_00000000027e7868 = 0;
    g_027e7870 = 0;
    ram_00000000027e7878 = 0;
    g_027e7880 = 0;
    ram_00000000027e7888 = 0;
    g_027e7890 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_016593ff:
    pplVar6 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_016593ff;
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
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) goto LAB_01659560;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  pplVar6 = &local_48;
  FUN_012e78c0();
  plVar1 = local_48;
  if ((g_0270c820 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_027e77e8 = FUN_0015ef90();
    g_027e77d0 = "MULSSGenerator";
    g_027e77d8 = 0x70;
    param_1 = 0x15ef30;
    g_027e77e0 = FUN_0015ef30;
    g_027e77f0 = 0;
    ram_00000000027e77f8 = 0;
    g_027e7800 = 0;
    ram_00000000027e7808 = 0;
    g_027e7810 = 0;
    ram_00000000027e7818 = 0;
    g_027e7820 = 0;
    ram_00000000027e7828 = 0;
    g_027e7830 = 0;
    ram_00000000027e7838 = 0;
    g_027e7840 = 0;
    ram_00000000027e7848 = 0;
    g_027e7850 = 0;
    ram_00000000027e7858 = 0;
    g_027e7860 = 0;
    ram_00000000027e7868 = 0;
    g_027e7870 = 0;
    ram_00000000027e7878 = 0;
    g_027e7880 = 0;
    ram_00000000027e7888 = 0;
    g_027e7890 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_016594b9:
    pplVar6 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_016594b9;
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
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c6b80();
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01659560:
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012f7880();
  if (local_38 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 012fa130
// ============================================================
// Function: FUN_012fa130
// Address: 012fa130
// Size: 1286 bytes
// Class: MULSSGenerator

void* FUN_012fa130(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  char cVar1;
  int64_t *plVar2;
  void *pvVar3;
  void* pVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t arg1;
  void*this_ptr;
  double dVar7;
  double dVar8;
  uint64_t local_98;
  uint64_t local_88;
  uint64_t local_80;
  int64_t local_78;
  char local_70;
  uint64_t local_68;
  uint64_t local_60;
  uint64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  char local_40;
  int64_t local_38;
  
  local_60 = param_1;
  local_58 = param_3;
  local_50 = param_4;
  plVar2 = (int64_t *)FUN_010eca10();
  (**(code **)(*plVar2 + 0x18))();
  FUN_012e8920();
  pvVar3 = _pthread_getspecific((void*)param_1);
  local_98 = param_1;
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
    local_98 = param_1;
  }
  FUN_012caf10();
  local_38 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (local_58._4_4_ == 0) {
    pvVar3 = _pthread_getspecific((void*)local_98);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012f7cb0();
    local_98 = 0;
    local_58 = FUN_016cb9d0(0,4);
  }
  if (local_50._4_4_ == 0) {
    pvVar3 = _pthread_getspecific((void*)local_98);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar7 = (double)FUN_012f7cb0();
    dVar8 = (double)FUN_012f7d90();
    local_98 = 0;
    local_50 = FUN_016cb9d0(dVar7 + dVar8,4);
  }
  local_70 = '\0';
  local_78 = 0;
  while( true ) {
    pvVar3 = _pthread_getspecific((void*)local_98);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar5 = local_50;
    cVar1 = FUN_01252960(local_50,local_58,&local_78,&local_68);
    pVar4 = (void*)uVar5;
    if (cVar1 == '\0') break;
    if ((local_68._4_4_ == 0) || ((local_58._4_4_ != 0 && (cVar1 = FUN_00e7c020(), cVar1 != '\0'))))
    {
      local_68 = local_58;
    }
    if ((local_88._4_4_ == 0) || ((local_50._4_4_ != 0 && (cVar1 = FUN_00e7c020(), cVar1 != '\0'))))
    {
      local_88 = local_50;
    }
    local_48 = local_68;
    if (*(int64_t *)(arg1 + 0x60) == 0) {
      lVar6 = 0;
      local_80 = local_68;
    }
    else {
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e7c860();
      FUN_01656470();
      local_80 = FUN_00e7cd00();
      lVar6 = *(int64_t *)(arg1 + 0x60);
    }
    local_48 = local_88;
    local_98 = local_88;
    if (lVar6 != 0) {
      pvVar3 = _pthread_getspecific((void*)local_88);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e7c860();
      FUN_01656470();
      local_98 = FUN_00e7cd00();
    }
    uVar5 = local_98;
    if ((((int)(local_80 >> 0x20) != 0) && (uVar5 = local_98 >> 0x20, uVar5 != 0)) &&
       (cVar1 = FUN_00e7c000(), cVar1 != '\0')) {
      local_48 = local_68;
      local_80 = local_68;
      if (*(int64_t *)(arg1 + 0x60) != 0) {
        pvVar3 = _pthread_getspecific((void*)uVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00e7c860();
        FUN_01656470();
        local_80 = FUN_00e7cd00();
      }
      local_48 = local_80;
      FUN_00e7b820();
      local_98 = local_48;
    }
    pvVar3 = _pthread_getspecific((void*)uVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_48 = local_78;
    local_40 = '\0';
    FUN_012502a0(local_98,local_80,0);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  *this_ptr = plVar2;
  *(void*)(this_ptr + 1) = 1;
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 01658d80
// ============================================================
// Function: FUN_01658d80
// Address: 01658d80
// Size: 1084 bytes
// Class: MULSSGenerator
// String references:
//   "MULSSGenerator"

void FUN_01658d80(void* param_1)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  int64_t **pplVar5;
  int64_t *local_40;
  char local_38;
  
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012f5240();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  pplVar5 = &local_40;
  FUN_012e78c0();
  plVar1 = local_40;
  if ((g_0270c820 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_027e77e8 = FUN_0015ef90();
    g_027e77d0 = "MULSSGenerator";
    g_027e77d8 = 0x70;
    param_1 = 0x15ef30;
    g_027e77e0 = FUN_0015ef30;
    g_027e77f0 = 0;
    ram_00000000027e77f8 = 0;
    g_027e7800 = 0;
    ram_00000000027e7808 = 0;
    g_027e7810 = 0;
    ram_00000000027e7818 = 0;
    g_027e7820 = 0;
    ram_00000000027e7828 = 0;
    g_027e7830 = 0;
    ram_00000000027e7838 = 0;
    g_027e7840 = 0;
    ram_00000000027e7848 = 0;
    g_027e7850 = 0;
    ram_00000000027e7858 = 0;
    g_027e7860 = 0;
    ram_00000000027e7868 = 0;
    g_027e7870 = 0;
    ram_00000000027e7878 = 0;
    g_027e7880 = 0;
    ram_00000000027e7888 = 0;
    g_027e7890 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_01658e71:
    pplVar5 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01658e71;
  }
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    return;
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  pplVar5 = &local_40;
  FUN_012e78c0();
  plVar1 = local_40;
  if ((g_0270c820 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_027e77e8 = FUN_0015ef90();
    g_027e77d0 = "MULSSGenerator";
    g_027e77d8 = 0x70;
    param_1 = 0x15ef30;
    g_027e77e0 = FUN_0015ef30;
    g_027e77f0 = 0;
    ram_00000000027e77f8 = 0;
    g_027e7800 = 0;
    ram_00000000027e7808 = 0;
    g_027e7810 = 0;
    ram_00000000027e7818 = 0;
    g_027e7820 = 0;
    ram_00000000027e7828 = 0;
    g_027e7830 = 0;
    ram_00000000027e7838 = 0;
    g_027e7840 = 0;
    ram_00000000027e7848 = 0;
    g_027e7850 = 0;
    ram_00000000027e7858 = 0;
    g_027e7860 = 0;
    ram_00000000027e7868 = 0;
    g_027e7870 = 0;
    ram_00000000027e7878 = 0;
    g_027e7880 = 0;
    ram_00000000027e7888 = 0;
    g_027e7890 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_01658f37;
  }
  pplVar5 = (int64_t **)&g_02802688;
LAB_01658f37:
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c6cb0();
    plVar1 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_012c6b80();
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 0165b8b0
// ============================================================
// Function: FUN_0165b8b0
// Address: 0165b8b0
// Size: 860 bytes
// Class: MULSSGenerator

void FUN_0165b8b0(uint64_t param_1,uint64_t param_2,char param_3)

{
  uint64_t uVar1;
  char cVar2;
  void *pvVar3;
  int64_t lVar4;
  uint64_t uVar5;
  void* pVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  char *pcVar9;
  int64_t lVar10;
  int64_t this_ptr;
  uint32_t local_5c;
  uint64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  uVar7 = param_1;
  local_58 = param_1;
  FUN_0123ff10();
  FUN_0123ff30();
  pVar6 = (void*)uVar7;
  if (param_1 >> 0x20 == 0) {
    lVar10 = *(int64_t *)(this_ptr + 0x40);
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      lVar10 = *(int64_t *)(this_ptr + 0x40);
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
    }
    pVar6 = (void*)uVar7;
    if (*(int *)(*(int64_t *)(lVar10 + 0x48) + 0x18) + 7U < 0xf) {
      FUN_00d23310();
      uVar1 = local_48;
      pVar6 = (void*)CONCAT71((int7)(uVar7 >> 8),local_40[0]);
      puVar8 = &local_50;
      if (local_40[0] != '\0') {
        puVar8 = (uint64_t *)local_40;
      }
      local_50 = CONCAT71(local_50._1_7_,local_40[0]);
      *(char *)puVar8 = '\0';
      if ((local_40[0] != '\0') && (uVar1 != 0)) {
        FUN_00d50b20();
      }
      if (((char)local_50 != '\0') && (uVar1 != 0)) {
        FUN_00d50b20();
      }
      if (uVar1 == 0) {
        local_58 = FUN_00e7bdb0();
        goto LAB_0165b999;
      }
    }
    local_58 = FUN_0165be20();
  }
LAB_0165b999:
  lVar10 = *(int64_t *)(this_ptr + 0x40);
  pvVar3 = _pthread_getspecific(pVar6);
  if (pvVar3 != (void *)0x0) {
    lVar10 = *(int64_t *)(this_ptr + 0x40);
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
  }
  if (*(int *)(*(int64_t *)(lVar10 + 0x48) + 0x18) + 7U < 0xf) {
    FUN_00d23310();
    uVar7 = local_48;
    puVar8 = &local_50;
    if (local_40[0] != '\0') {
      puVar8 = (uint64_t *)local_40;
    }
    local_50 = CONCAT71(local_50._1_7_,local_40[0]);
    *(char *)puVar8 = '\0';
    if ((local_40[0] != '\0') && (uVar7 != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_50 != '\0') && (uVar7 != 0)) {
      FUN_00d50b20();
    }
    if (uVar7 == 0) goto LAB_0165bb6d;
  }
  local_5c = 0xffffffff;
  local_50 = FUN_0165bfa0(&local_5c,1);
  if (((local_50 >> 0x20 == 0) || (local_58._4_4_ == 0)) || (cVar2 = FUN_00e7c000(), cVar2 == '\0'))
  {
    if (param_3 == '\0') {
      local_58 = local_50;
    }
    else {
      FUN_0165c0f0(0,local_50,0,&local_5c);
      uVar7 = local_48;
      pcVar9 = local_38;
      if (local_40[0] != '\0') {
        pcVar9 = local_40;
      }
      local_38[0] = local_40[0];
      *pcVar9 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      local_48 = local_58;
      FUN_00e7b970();
      FUN_0123ff00();
      FUN_0123fc50();
      uVar1 = local_48;
      if (((local_40[0] == '\0') && (local_48 != 0)) &&
         ((FUN_00d50b00(), local_40[0] != '\0' && (local_48 != 0)))) {
        FUN_00d50b20();
      }
      FUN_0165b1b0(local_58,local_50,1);
      if (uVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (uVar7 != 0)) {
        FUN_00d50b20();
      }
    }
  }
LAB_0165bb6d:
  FUN_0123fbe0();
  uVar7 = local_48;
  if (local_40[0] == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40[0] = '\0';
  }
  uVar1 = local_58;
  uVar5 = FUN_00e7bdb0();
  FUN_0165b1b0(uVar5,uVar1,0);
  if (uVar7 != 0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 012e8440
// ============================================================
// Function: FUN_012e8440
// Address: 012e8440
// Size: 785 bytes
// Class: MULSSGenerator

uint64_t FUN_012e8440(void* param_1)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint64_t *arg1;
  uint64_t *this_ptr;
  
  uVar1 = *this_ptr;
  uVar3 = this_ptr[1];
  if (((char)uVar3 != '\0') && (uVar1 != 0)) {
    FUN_00d50b00();
  }
  uVar2 = *arg1;
  uVar4 = arg1[1];
  if (((char)uVar4 != '\0') && (uVar2 != 0)) {
    FUN_00d50b00();
  }
  pvVar7 = _pthread_getspecific(param_1);
  if ((pvVar7 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
    lVar8 = *(int64_t *)(uVar1 + 0x110);
  }
  else {
    lVar8 = *(int64_t *)
             (*(int64_t *)(uVar1 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8) + 0x110);
  }
  if (lVar8 != 0) {
    pvVar7 = _pthread_getspecific(param_1);
    if ((pvVar7 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
      lVar8 = *(int64_t *)(uVar2 + 0x110);
    }
    else {
      lVar8 = *(int64_t *)
               (*(int64_t *)(uVar2 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8) + 0x110)
      ;
    }
    if (lVar8 != 0) {
      pvVar7 = _pthread_getspecific(param_1);
      uVar10 = uVar1;
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        uVar10 = *(uint64_t *)(uVar1 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
      lVar8 = *(int64_t *)(uVar10 + 0x110);
      pvVar7 = _pthread_getspecific(param_1);
      if ((pvVar7 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
        lVar9 = *(int64_t *)(uVar2 + 0x110);
      }
      else {
        lVar9 = *(int64_t *)
                 (*(int64_t *)(uVar2 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8) +
                 0x110);
      }
      if (lVar8 == lVar9) {
        pvVar7 = _pthread_getspecific(param_1);
        uVar10 = uVar1;
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          uVar10 = *(uint64_t *)(uVar1 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
        lVar8 = *(int64_t *)(uVar10 + 0x110);
        pvVar7 = _pthread_getspecific(param_1);
        if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
        }
        lVar8 = *(int64_t *)(lVar8 + 0xa8);
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        iVar5 = FUN_00d23d20();
        if (lVar8 != 0) {
          FUN_00d50b20();
        }
        pvVar7 = _pthread_getspecific(param_1);
        uVar10 = uVar2;
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          uVar10 = *(uint64_t *)(uVar2 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
        lVar8 = *(int64_t *)(uVar10 + 0x110);
        pvVar7 = _pthread_getspecific(param_1);
        if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
        }
        lVar8 = *(int64_t *)(lVar8 + 0xa8);
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        iVar6 = FUN_00d23d20();
        if (lVar8 != 0) {
          FUN_00d50b20();
        }
        uVar10 = 0xffffffff;
        if (iVar6 <= iVar5) {
          uVar10 = (uint64_t)(iVar6 < iVar5);
        }
        goto joined_r0x012e85ce;
      }
    }
  }
  uVar10 = 0xffffffff;
  if (uVar2 <= uVar1) {
    uVar10 = (uint64_t)(uVar1 != uVar2);
  }
joined_r0x012e85ce:
  if (((char)uVar4 != '\0') && (uVar2 != 0)) {
    FUN_00d50b20();
  }
  if (((char)uVar3 != '\0') && (uVar1 != 0)) {
    FUN_00d50b20();
  }
  return uVar10;
}



// ============================================================
// 012fceb0
// ============================================================
// Function: FUN_012fceb0
// Address: 012fceb0
// Size: 1272 bytes
// Class: MULSSGenerator
// String references:
//   "%@ (%I)"

int64_t * FUN_012fceb0(void* param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar9;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  
  lVar7 = *arg1;
  if (lVar7 != 0) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      lVar7 = *arg1;
      lVar6 = FUN_00e8b990();
      if (lVar6 != 0) {
        lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
    }
    lVar7 = *(int64_t *)(lVar7 + 0xa0);
    if (lVar7 != 0) {
      FUN_00d50b00();
      bVar1 = true;
      bVar9 = true;
      goto LAB_012fcf2e;
    }
  }
  bVar1 = false;
  bVar9 = false;
  lVar7 = 0;
LAB_012fcf2e:
  FUN_00d8ede0();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  bVar2 = true;
  lVar6 = local_68;
  if (((lVar7 != 0) && (iVar4 = FUN_00d8c7a0(), 0 < iVar4)) && (local_68 != lVar7)) {
    if (bVar1) {
      FUN_00d50b00();
    }
    lVar6 = lVar7;
    bVar2 = bVar9;
    if (local_68 != 0) {
      FUN_00d50b20();
    }
  }
  lVar8 = lVar7;
  bVar1 = bVar9;
  if (lVar6 == 0) {
LAB_012fd1d4:
    while (((bVar9 = bVar1, lVar7 = lVar8, lVar7 == 0 || (iVar4 = FUN_00d8c7a0(), iVar4 == 0)) ||
           (cVar3 = FUN_00d23d70(), cVar3 != '\0'))) {
      FUN_00d8cb40();
      if (local_78 == lVar7) {
        if ((!bVar9) && (local_78 != 0)) {
          lVar8 = lVar7;
          if (local_70 != '\0') goto LAB_012fd297;
          FUN_00d50b00();
          goto LAB_012fd320;
        }
        goto joined_r0x012fd2f6;
      }
      lVar8 = local_78;
      if (local_70 == '\0') goto LAB_012fd2c0;
      if ((bVar9) && (lVar7 != 0)) {
        FUN_00d50b20();
      }
LAB_012fd297:
      local_70 = '\0';
      bVar1 = true;
    }
  }
  else {
    while (((lVar7 == 0 || (iVar4 = FUN_00d8c7a0(), iVar4 == 0)) ||
           (cVar3 = FUN_00d23d70(), cVar3 != '\0'))) {
      FUN_00d50b00();
      FUN_00d8cb40();
      if (local_78 == lVar7) {
        if ((!bVar9) && (local_78 != 0)) {
          lVar8 = lVar7;
          if (local_70 == '\0') {
            FUN_00d50b00();
            goto LAB_012fd150;
          }
          goto LAB_012fd0c7;
        }
joined_r0x012fd125:
        lVar8 = lVar7;
        bVar1 = bVar9;
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        lVar8 = local_78;
        if (local_70 == '\0') {
          if (local_78 != 0) {
            FUN_00d50b00();
          }
          bVar1 = true;
          if ((bVar9) && (lVar7 != 0)) {
            FUN_00d50b20();
            lVar7 = local_78;
LAB_012fd150:
            bVar9 = true;
            goto joined_r0x012fd125;
          }
        }
        else {
          if ((bVar9) && (lVar7 != 0)) {
            FUN_00d50b20();
          }
LAB_012fd0c7:
          local_70 = '\0';
          bVar1 = true;
        }
      }
      bVar9 = bVar1;
      lVar7 = lVar8;
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
  }
  *(void*)(this_ptr + 1) = 0;
  if (!bVar9) {
    FUN_00d50b00();
  }
  *this_ptr = lVar7;
  *(void*)(this_ptr + 1) = 1;
  if ((bVar2) && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
LAB_012fd2c0:
  if (local_78 != 0) {
    FUN_00d50b00();
  }
  bVar1 = true;
  if ((bVar9) && (lVar7 != 0)) {
    FUN_00d50b20();
    lVar7 = local_78;
LAB_012fd320:
    bVar9 = true;
joined_r0x012fd2f6:
    lVar8 = lVar7;
    bVar1 = bVar9;
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  goto LAB_012fd1d4;
}



// ============================================================
// 0131a710
// ============================================================
// Function: FUN_0131a710
// Address: 0131a710
// Size: 944 bytes
// Class: MULSSGenerator

uint32_t FUN_0131a710(uint64_t param_1)

{
  bool bVar1;
  char cVar2;
  uint32_t uVar3;
  void *pvVar4;
  int64_t lVar5;
  byte bVar6;
  byte unaff_SIL;
  int64_t *plVar7;
  int iVar8;
  uint64_t unaff_R15;
  undefined7 uVar9;
  int64_t local_88;
  char local_80;
  int64_t *local_48;
  char local_40;
  uint32_t local_38;
  
  pvVar4 = _pthread_getspecific((void*)param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
      goto LAB_0131a7a1;
    }
  }
  else if (local_88 != 0) {
LAB_0131a7a1:
    if (*(int *)(local_88 + 0xc) < 1) {
      local_38 = 1;
    }
    else {
      local_38 = 1;
      iVar8 = 0;
      do {
        pvVar4 = _pthread_getspecific((void*)param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0126e7e0();
        uVar9 = (undefined7)(unaff_R15 >> 8);
        if (local_40 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
            goto LAB_0131a8a0;
          }
LAB_0131a930:
          unaff_R15 = CONCAT71(uVar9,1);
        }
        else {
          if (local_48 == (int64_t *)0x0) goto LAB_0131a930;
LAB_0131a8a0:
          pvVar4 = _pthread_getspecific((void*)param_1);
          plVar7 = local_48;
          if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            plVar7 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
          cVar2 = (**(code **)(*plVar7 + 0x370))();
          unaff_R15 = CONCAT71(uVar9,1);
          if (cVar2 == '\0') {
            pvVar4 = _pthread_getspecific((void*)param_1);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0126dd90();
            unaff_R15 = 0;
          }
          FUN_00d50b20();
        }
        pvVar4 = _pthread_getspecific((void*)param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01264180();
        if (local_40 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
            goto LAB_0131a9f0;
          }
LAB_0131aa70:
          bVar1 = true;
LAB_0131aa72:
          if (unaff_SIL == 0) {
            local_38 = 0;
          }
          else {
LAB_0131aa78:
            pvVar4 = _pthread_getspecific((void*)param_1);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125a5f0();
          }
          uVar3 = local_38;
          if (!bVar1) goto LAB_0131aacf;
        }
        else {
          if (local_48 == (int64_t *)0x0) goto LAB_0131aa70;
LAB_0131a9f0:
          pvVar4 = _pthread_getspecific((void*)param_1);
          plVar7 = local_48;
          if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            plVar7 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
          cVar2 = (**(code **)(*plVar7 + 0x370))();
          bVar1 = false;
          if (cVar2 == '\0') goto LAB_0131aa72;
          bVar6 = (byte)(unaff_R15 & 0xffffffff) | unaff_SIL ^ 1;
          param_1 = CONCAT71((int7)((unaff_R15 & 0xffffffff) >> 8),bVar6);
          uVar3 = local_38;
          if ((char)unaff_R15 == '\0') {
            uVar3 = 0;
          }
          if (bVar6 == 0) goto LAB_0131aa78;
LAB_0131aacf:
          local_38 = uVar3;
          FUN_00d50b20();
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(local_88 + 0xc));
    }
    FUN_001159b0();
    FUN_00d50b20();
    return local_38;
  }
  return 1;
}



// ============================================================
// 006dbc00
// ============================================================
// Function: FUN_006dbc00
// Address: 006dbc00
// Size: 755 bytes
// Class: MULSSGenerator

uint64_t FUN_006dbc00(int64_t *param_1,char param_2)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t **pplVar7;
  int64_t lVar8;
  int64_t local_a0;
  char local_98;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  uint64_t local_48;
  uint32_t local_40;
  int64_t *local_38;
  
  FUN_006cb500();
  plVar1 = local_60;
  if (local_58 == '\0') {
    if (local_60 == (int64_t *)0x0) goto LAB_006dbcfd;
    FUN_00d50b00();
    if (0 < *(int *)((int64_t)plVar1 + 0xc)) goto LAB_006dbc5e;
LAB_006dbed6:
    plVar6 = (int64_t *)0x0;
  }
  else {
    if (local_60 == (int64_t *)0x0) {
LAB_006dbcfd:
      plVar6 = (int64_t *)0x0;
      goto LAB_006dbef6;
    }
    if (*(int *)((int64_t)local_60 + 0xc) < 1) goto LAB_006dbed6;
LAB_006dbc5e:
    FUN_01caeae0();
    FUN_01d66da0();
    lVar8 = g_02726d28;
    if (g_02726d28 != 0) {
      FUN_00d50b00();
    }
    pplVar7 = &local_60;
    FUN_000175c0();
    plVar6 = local_60;
    FUN_000823a0();
    if (plVar6 == (int64_t *)0x0) {
LAB_006dbce2:
      pplVar7 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar6 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 == '\0') goto LAB_006dbce2;
    }
    plVar6 = *pplVar7;
    if (*(char *)(pplVar7 + 1) == '\0') {
      if (plVar6 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar7 + 1) = 0;
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if (plVar6 == (int64_t *)0x0) goto LAB_006dbed6;
    local_58 = '\0';
    local_60 = plVar6;
    local_38 = plVar6;
    iVar3 = FUN_00d237a0();
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar6 = (int64_t *)(uint64_t)CONCAT31((int3)((uint)iVar3 >> 8),iVar3 == -1);
    if ((iVar3 == -1) && (param_2 != '\0')) {
      local_58 = '\0';
      local_60 = (int64_t *)0x0;
      local_50 = plVar1;
      local_40 = 0;
      local_48 = 0;
      if (0 < *(int *)((int64_t)plVar1 + 0xc)) {
        lVar8 = 0;
        do {
          plVar6 = *(int64_t **)(plVar1[2] + lVar8 * 8);
          local_60 = plVar6;
          pvVar4 = _pthread_getspecific((void*)param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e6160();
          iVar3 = *(int *)(local_70 + 0xc);
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          if (iVar3 == 0) {
            pvVar4 = _pthread_getspecific((void*)param_1);
            if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              param_1 = local_38;
            }
            FUN_01305350();
          }
          lVar8 = lVar8 + 1;
          local_48 = CONCAT44(local_48._4_4_,(int)lVar8);
        } while ((int)lVar8 < *(int *)((int64_t)plVar1 + 0xc));
      }
      FUN_000be170();
      plVar6 = (int64_t *)CONCAT71((int7)((uint64_t)plVar6 >> 8),1);
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_006dbef6:
  return (uint64_t)plVar6 & 0xffffffff;
}



// ============================================================
// 006cff00
// ============================================================
// Function: FUN_006cff00
// Address: 006cff00
// Size: 813 bytes
// Class: MULSSGenerator
// String references:
//   "MULSSGenerator"

uint64_t FUN_006cff00(void)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  void* pVar5;
  int64_t **pplVar6;
  uint64_t unaff_R12;
  int64_t local_68;
  char local_60;
  int local_50;
  int64_t *local_40;
  char local_38;
  
  FUN_006cb500();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
      goto LAB_006cff45;
    }
  }
  else if (local_68 != 0) {
LAB_006cff45:
    local_50 = -1;
    while( true ) {
      local_50 = local_50 + 1;
      unaff_R12 = CONCAT71((int7)(unaff_R12 >> 8),local_50 < *(int *)(local_68 + 0xc));
      if (*(int *)(local_68 + 0xc) <= local_50) break;
      pvVar4 = _pthread_getspecific((void*)*(void*)(local_68 + 0x10));
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e78c0();
      plVar1 = local_40;
      if ((g_0270c820 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_027e77e8 = FUN_0015ef90();
        g_027e77d0 = "MULSSGenerator";
        g_027e77d8 = 0x70;
        g_027e77e0 = FUN_0015ef30;
        g_027e77f0 = 0;
        ram_00000000027e77f8 = 0;
        g_027e7800 = 0;
        ram_00000000027e7808 = 0;
        g_027e7810 = 0;
        ram_00000000027e7818 = 0;
        g_027e7820 = 0;
        ram_00000000027e7828 = 0;
        g_027e7830 = 0;
        ram_00000000027e7838 = 0;
        g_027e7840 = 0;
        ram_00000000027e7848 = 0;
        g_027e7850 = 0;
        ram_00000000027e7858 = 0;
        g_027e7860 = 0;
        ram_00000000027e7868 = 0;
        g_027e7870 = 0;
        ram_00000000027e7878 = 0;
        g_027e7880 = 0;
        ram_00000000027e7888 = 0;
        g_027e7890 = 0;
        ___cxa_guard_release();
      }
      pplVar6 = (int64_t **)&g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar6 = &local_40;
        if (cVar2 == '\0') {
          pplVar6 = (int64_t **)&g_02802688;
        }
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
      pVar5 = (void*)pplVar6;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c6cb0();
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_006d0130;
          }
        }
        else if (local_40 != (int64_t *)0x0) {
LAB_006d0130:
          pvVar4 = _pthread_getspecific(pVar5);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar2 = FUN_017f2980();
          if (cVar2 != '\0') {
            FUN_00d50b20();
            FUN_00d50b20();
            break;
          }
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
    FUN_000be170();
    FUN_00d50b20();
    goto LAB_006d024e;
  }
  unaff_R12 = 0;
LAB_006d024e:
  return unaff_R12 & 0xffffffff;
}



// ============================================================
// 012ead00
// ============================================================
// Function: FUN_012ead00
// Address: 012ead00
// Size: 983 bytes
// Class: MULSSGenerator

void* FUN_012ead00(double param_1,double param_2)

{
  bool bVar1;
  bool bVar2;
  code *pcVar3;
  char cVar4;
  void *pvVar5;
  int64_t lVar6;
  void*puVar7;
  void* in_ECX;
  void* pVar8;
  code *pcVar9;
  int64_t *arg1;
  void*this_ptr;
  int iVar10;
  int64_t lVar11;
  uint uVar12;
  uint64_t uVar13;
  double dVar14;
  int64_t local_40;
  char local_38;
  
  if ((char)arg1[0x28] != '\0') {
    (**(code **)(*arg1 + 0x1a0))();
  }
  lVar11 = arg1[0x27];
  if (lVar11 == 0) {
LAB_012eae20:
    pcVar3 = g_02572370;
    lVar11 = arg1[0x16];
    if (lVar11 == 0) {
      *(void*)(this_ptr + 1) = 0;
      puVar7 = (void*)0x0;
      goto LAB_012eb0cc;
    }
    if (*(int *)(lVar11 + 0xc) < 1) {
      bVar2 = false;
      puVar7 = (void*)0x0;
    }
    else {
      iVar10 = 0;
      puVar7 = (void*)0x0;
      bVar2 = false;
      pcVar9 = g_02572370;
      do {
        pvVar5 = _pthread_getspecific((void*)pcVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar4 = FUN_01275560(param_1,param_2);
        if (cVar4 != '\0') {
          if (puVar7 == (void*)0x0) {
            puVar7 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar7 = &g_02572358;
            (*pcVar3)();
            bVar2 = true;
          }
          pcVar9 = 0x0;
          FUN_00d24b60(0,FUN_012e8c90,0);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(lVar11 + 0xc));
    }
    FUN_001159b0();
    if (puVar7 != (void*)0x0) goto LAB_012eaffd;
    bVar1 = true;
    puVar7 = (void*)0x0;
    *(void*)(this_ptr + 1) = 0;
    if (bVar2) goto LAB_012eb0cc;
  }
  else {
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      lVar11 = arg1[0x27];
      lVar6 = FUN_00e8b990();
      if (lVar6 != 0) {
        lVar11 = *(int64_t *)(lVar11 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
    }
    if (*(char *)(lVar11 + 0x38) == '\0') goto LAB_012eae20;
    puVar7 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    pVar8 = 0x2572358;
    *puVar7 = &g_02572358;
    (*g_02572370)();
    pvVar5 = _pthread_getspecific(pVar8);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar13 = FUN_015298a0(param_1,param_2);
    if (local_38 == '\0') {
      if (local_40 != 0) {
        uVar13 = FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00d214d0(uVar13,*(void*)((int64_t)puVar7 + 0xc));
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    bVar2 = true;
LAB_012eaffd:
    uVar12 = *(uint *)((int64_t)puVar7 + 0xc);
    if ((int)uVar12 < 1) {
      *(void*)(this_ptr + 1) = 0;
    }
    else {
      lVar11 = (uint64_t)uVar12 + 1;
      do {
        uVar12 = uVar12 - 1;
        pvVar5 = _pthread_getspecific(uVar12);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar14 = (double)FUN_01259520();
        if (param_1 + param_2 < dVar14) {
          FUN_00d23620();
        }
        lVar11 = lVar11 + -1;
      } while (1 < lVar11);
      *(void*)(this_ptr + 1) = 0;
    }
    bVar1 = false;
    if (bVar2) goto LAB_012eb0cc;
  }
  if (!bVar1) {
    FUN_00d50b00();
  }
LAB_012eb0cc:
  *this_ptr = puVar7;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 01653e10
// ============================================================
// Function: FUN_01653e10
// Address: 01653e10
// Size: 1164 bytes
// Class: MULSSGenerator

void FUN_01653e10(void* param_1)

{
  int64_t lVar1;
  void* pVar2;
  void *pvVar3;
  int64_t lVar4;
  void* pVar5;
  void*arg1;
  int64_t this_ptr;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  FUN_01708f80();
  *(void*)(this_ptr + 0x80) = *arg1;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d50b00();
  FUN_0164fef0();
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01650620();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  pVar2 = FUN_01666ed0();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d8ede0();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  pVar5 = pVar2;
  FUN_012c9ae0(pVar2,1);
  lVar1 = *(int64_t *)(this_ptr + 0x90);
  lVar4 = lVar1;
  if (lVar1 != local_38) {
    lVar4 = local_38;
    if (local_30 == '\0') {
      if (local_38 == 0) {
        lVar4 = 0;
        goto LAB_01653f96;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x90);
      *(int64_t *)(this_ptr + 0x90) = local_38;
    }
    else {
      local_30 = '\0';
LAB_01653f96:
      *(int64_t *)(this_ptr + 0x90) = lVar4;
    }
    pVar5 = (void*)lVar1;
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar4 = local_38;
    }
  }
  if ((local_30 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012f4be0();
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d50b00();
  FUN_012f83f0();
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  FUN_00d8ede0();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  FUN_012c9ae0(pVar2,0);
  lVar1 = *(int64_t *)(this_ptr + 0x98);
  lVar4 = lVar1;
  if (lVar1 == local_38) goto LAB_01654174;
  lVar4 = local_38;
  if (local_30 == '\0') {
    if (local_38 == 0) {
      lVar4 = 0;
      goto LAB_01654129;
    }
    FUN_00d50b00();
    lVar1 = *(int64_t *)(this_ptr + 0x98);
    *(int64_t *)(this_ptr + 0x98) = local_38;
  }
  else {
    local_30 = '\0';
LAB_01654129:
    *(int64_t *)(this_ptr + 0x98) = lVar4;
  }
  pVar2 = (void*)lVar1;
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar4 = local_38;
  }
LAB_01654174:
  if ((local_30 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar2);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012f4be0();
  pvVar3 = _pthread_getspecific(pVar2);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d50b00();
  FUN_012f83f0();
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0x68) = 0x3ff0000000000000;
  FUN_01654510();
  *(void*)(this_ptr + 0xa5) = 1;
  return;
}



// ============================================================
// 006db470
// ============================================================
// Function: FUN_006db470
// Address: 006db470
// Size: 896 bytes
// Class: MULSSGenerator

void FUN_006db470(void)

{
  char cVar1;
  char *pcVar2;
  uint64_t uVar3;
  void *pvVar4;
  int64_t *plVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int iVar6;
  int64_t *plVar7;
  int64_t *local_68;
  char local_60 [16];
  uint64_t local_50;
  uint32_t local_48;
  uint32_t local_3c;
  char local_38 [8];
  
  FUN_01f27fe0();
  cVar1 = (**(code **)(*local_68 + 0x450))();
  if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 == '\0') {
    return;
  }
  if (this_ptr[0x20] == 0) goto LAB_006db7c2;
  FUN_00d50b00();
  local_38[0] = '\0';
  plVar7 = this_ptr;
  do {
    (**(code **)(*plVar7 + 0x370))();
    if (local_68 == plVar7) {
      if (((local_38[0] == '\0') && (local_68 != (int64_t *)0x0)) && (local_60[0] != '\0'))
      goto LAB_006db557;
    }
    else {
      plVar7 = local_68;
      if (local_60[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar2 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar2 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
LAB_006db557:
        local_38[0] = '\x01';
        pcVar2 = local_60;
      }
      *pcVar2 = '\0';
    }
    if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00082eb0();
    plVar5 = &g_02802688;
    if (plVar7 != (int64_t *)0x0) {
      (**(code **)(*plVar7 + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar5 = (int64_t *)&stack0xffffffffffffff68;
      if (cVar1 == '\0') {
        plVar5 = &g_02802688;
      }
    }
    if (*plVar5 != 0) {
      if ((local_38[0] == '\0') && (plVar7 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      break;
    }
  } while (plVar7 != (int64_t *)0x0);
  FUN_00d50b20();
  if (plVar7 == (int64_t *)0x0) {
    local_3c = 0;
  }
  else {
    uVar3 = FUN_006cb500();
    local_3c = (uint32_t)
               CONCAT71((int7)((uint64_t)uVar3 >> 8),0 < *(int *)((int64_t)local_68 + 0xc));
    if (local_60[0] != '\0') {
      FUN_00d50b20();
    }
    FUN_006cb500();
    if (local_60[0] == '\0') {
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b00();
        goto LAB_006db67f;
      }
    }
    else if (local_68 != (int64_t *)0x0) {
LAB_006db67f:
      local_60[0] = '\0';
      local_48 = 0;
      local_50 = 0;
      if (0 < *(int *)((int64_t)local_68 + 0xc)) {
        iVar6 = 0;
        do {
          cVar1 = FUN_0078d680();
          if (cVar1 == '\0') {
            local_3c = 0;
            break;
          }
          pvVar4 = _pthread_getspecific((void*)plVar5);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012f4aa0();
          iVar6 = iVar6 + 1;
          local_50 = CONCAT44(local_50._4_4_,iVar6);
        } while (iVar6 < *(int *)((int64_t)local_68 + 0xc));
      }
      FUN_000be170();
      FUN_00d50b20();
    }
  }
  (**(code **)(*(int64_t *)this_ptr[0x20] + 0x918))();
  (**(code **)(*(int64_t *)this_ptr[0x20] + 0x998))();
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_006db7c2:
  if ((*arg1 != 0) &&
     (((this_ptr[0x2b] == 0 || (FUN_0044dc30(), *arg1 != 0)) && (this_ptr[0x2c] != 0)))) {
    FUN_0044dc30();
  }
  return;
}



// ============================================================
// 012d1980
// ============================================================
// Function: FUN_012d1980
// Address: 012d1980
// Size: 1130 bytes
// Class: MULSSGenerator

void FUN_012d1980(void)

{
  int64_t lVar1;
  char cVar2;
  int64_t *plVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  void* pVar9;
  int64_t *arg1;
  int64_t this_ptr;
  int local_40;
  
  lVar1 = *(int64_t *)(this_ptr + 0x170);
  if (lVar1 == 0) {
    lVar1 = *arg1;
    lVar5 = *(int64_t *)(this_ptr + 0xf8);
    if (lVar5 != lVar1) {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *(int64_t *)(this_ptr + 0xf8) = lVar1;
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d243f0();
  }
  else {
    lVar5 = *(int64_t *)(lVar1 + 0x10);
    if ((lVar5 != *arg1) ||
       (cVar2 = (**(code **)(**(int64_t **)(lVar1 + 0x18) + 0x50))(), cVar2 == '\0')) {
      pVar9 = (void*)lVar5;
      plVar3 = (int64_t *)FUN_00e8fc40();
      FUN_012dc5a0();
      (**(code **)(*plVar3 + 0x18))();
      lVar1 = *arg1;
      lVar5 = plVar3[2];
      if (lVar5 != lVar1) {
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        plVar3[2] = lVar1;
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00d243f0();
      if (*arg1 != 0) {
        pvVar4 = _pthread_getspecific(pVar9);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar5 = FUN_00e8b990();
        lVar1 = plVar3[4];
        if (lVar1 != lVar5) {
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          plVar3[4] = lVar5;
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_012d0a00();
      }
      lVar1 = *(int64_t *)(*(int64_t *)(this_ptr + 0x170) + 0x20);
      lVar5 = plVar3[4];
      if ((lVar5 != lVar1) && (lVar5 != 0)) {
        FUN_00cbceb0();
        (**(code **)(*(int64_t *)(this_ptr + 0xf0) + 0x10))();
        FUN_00d50b00();
        FUN_00cbc2c0();
        if ((int64_t *)(this_ptr + 0xf0) != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)(this_ptr + 0xf0) + 0x10))();
          FUN_00d50b20();
        }
      }
      lVar6 = FUN_00e313b0();
      do {
        cVar2 = FUN_00e31450(3);
      } while (cVar2 == '\0');
      lVar7 = FUN_00e313b0();
      do {
        cVar2 = FUN_00e31450(1);
      } while (cVar2 == '\0');
      if (lVar7 != 0) {
        FUN_012d21a0();
        if (lVar7 != 0) {
          FUN_00d50b00();
          local_40 = -1;
          while( true ) {
            lVar8 = (int64_t)local_40;
            local_40 = local_40 + 1;
            if (*(int *)(lVar7 + 0xc) <= local_40) break;
            (**(code **)(**(int64_t **)(*(int64_t *)(lVar7 + 0x10) + 8 + lVar8 * 8) + 0x370))();
          }
          FUN_00540a20();
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      if ((lVar1 != 0) && (lVar5 != lVar1)) {
        FUN_00cbcef0();
        (**(code **)(*(int64_t *)(this_ptr + 0xf0) + 0x10))();
        FUN_00d50b00();
        FUN_00cbc3f0();
        if ((int64_t *)(this_ptr + 0xf0) != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)(this_ptr + 0xf0) + 0x10))();
          FUN_00d50b20();
        }
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}



// ============================================================
// 0165a450
// ============================================================
// Function: FUN_0165a450
// Address: 0165a450
// Size: 561 bytes
// Class: MULSSGenerator

int FUN_0165a450(void* param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  
  lVar6 = *this_ptr;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    lVar6 = *this_ptr;
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
  }
  dVar1 = *(double *)(lVar6 + 0x50);
  lVar6 = *arg1;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    lVar6 = *arg1;
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
  }
  iVar3 = 1;
  if (*(double *)(lVar6 + 0x50) <= dVar1) {
    lVar6 = *this_ptr;
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      lVar6 = *this_ptr;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    dVar1 = *(double *)(lVar6 + 0x50);
    lVar6 = *arg1;
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      lVar6 = *arg1;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    iVar3 = -1;
    if (dVar1 < *(double *)(lVar6 + 0x50) || dVar1 == *(double *)(lVar6 + 0x50)) {
      lVar6 = *this_ptr;
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        lVar6 = *this_ptr;
        lVar5 = FUN_00e8b990();
        if (lVar5 != 0) {
          lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
        }
      }
      dVar1 = *(double *)(lVar6 + 0x50);
      dVar2 = *(double *)(lVar6 + 0x58);
      lVar6 = *arg1;
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        lVar6 = *arg1;
        lVar5 = FUN_00e8b990();
        if (lVar5 != 0) {
          lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
        }
      }
      iVar3 = 1;
      if (*(double *)(lVar6 + 0x50) + *(double *)(lVar6 + 0x58) <= dVar1 + dVar2) {
        lVar6 = *this_ptr;
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          lVar6 = *this_ptr;
          lVar5 = FUN_00e8b990();
          if (lVar5 != 0) {
            lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
          }
        }
        dVar1 = *(double *)(lVar6 + 0x50);
        dVar2 = *(double *)(lVar6 + 0x58);
        lVar6 = *arg1;
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          lVar6 = *arg1;
          lVar5 = FUN_00e8b990();
          if (lVar5 != 0) {
            lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
          }
        }
        iVar3 = -(uint)(*(double *)(lVar6 + 0x50) + *(double *)(lVar6 + 0x58) < dVar1 + dVar2);
      }
    }
  }
  return iVar3;
}



// ============================================================
// 012f4d80
// ============================================================
// Function: FUN_012f4d80
// Address: 012f4d80
// Size: 835 bytes
// Class: MULSSGenerator

void* FUN_012f4d80(void)

{
  int64_t lVar1;
  int64_t lVar2;
  void*puVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t lVar6;
  void*puVar7;
  int64_t lVar8;
  int64_t arg1;
  void*this_ptr;
  bool bVar9;
  int64_t local_88;
  char local_80;
  int64_t local_40;
  char local_38;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar7 = &g_02572358;
  *puVar3 = &g_02572358;
  (*g_02572370)();
  lVar1 = *(int64_t *)(arg1 + 0x60);
  if (lVar1 == 0) {
    bVar9 = false;
    lVar8 = *(int64_t *)(arg1 + 0x40);
  }
  else {
    FUN_00d50b00();
    pvVar4 = _pthread_getspecific((void*)puVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0165a0b0();
    bVar9 = local_88 == arg1;
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    lVar8 = *(int64_t *)(arg1 + 0x40);
  }
  if (lVar8 != 0) {
    pvVar4 = _pthread_getspecific((void*)puVar7);
    if (pvVar4 != (void *)0x0) {
      lVar8 = *(int64_t *)(arg1 + 0x40);
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    lVar8 = *(int64_t *)(lVar8 + 0x38);
    if (lVar8 != 0) {
      FUN_00d50b00();
      if (0 < *(int *)(lVar8 + 0xc)) {
        lVar5 = 0;
        do {
          lVar2 = *(int64_t *)(*(int64_t *)(lVar8 + 0x10) + lVar5 * 8);
          pvVar4 = _pthread_getspecific((void*)puVar7);
          if ((pvVar4 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
            lVar6 = *(int64_t *)(lVar2 + 0x60);
          }
          else {
            lVar6 = *(int64_t *)
                     (*(int64_t *)(lVar2 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8) +
                     0x60);
          }
          if (lVar6 != 0) {
            FUN_00d50b00();
            if (bVar9) {
              pvVar4 = _pthread_getspecific((void*)puVar7);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0165a0b0();
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              if (local_40 == lVar2) {
                local_38 = '\0';
                FUN_00d21140();
                local_40 = lVar2;
              }
            }
            else {
              pvVar4 = _pthread_getspecific((void*)puVar7);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0165a070();
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              if (local_40 == lVar2) {
                local_38 = '\0';
                FUN_00d21140();
                local_40 = lVar2;
              }
            }
            FUN_00d50b20();
          }
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 < *(int *)(lVar8 + 0xc));
      }
      FUN_000be170();
      FUN_00d50b20();
    }
  }
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 0164e420
// ============================================================
// Function: FUN_0164e420
// Address: 0164e420
// Size: 951 bytes
// Class: MULSSGenerator

void FUN_0164e420(void* param_1,uint8_t param_2)

{
  int iVar1;
  int64_t lVar2;
  char cVar3;
  int64_t lVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_58;
  char local_50;
  int local_40;
  
  lVar2 = *(int64_t *)(this_ptr + 0xa8);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  if (lVar2 != *arg1) {
    lVar6 = *(int64_t *)(this_ptr + 0x98);
    if (lVar6 != 0) {
      local_50 = '\0';
      local_58 = 0;
      local_40 = -1;
      while( true ) {
        lVar4 = (int64_t)local_40;
        local_40 = local_40 + 1;
        if (*(int *)(lVar6 + 0xc) <= local_40) break;
        local_58 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + 8 + lVar4 * 8);
        pvVar5 = _pthread_getspecific((void*)*(int64_t *)(lVar6 + 0x10));
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01658a40();
      }
      FUN_00277f20();
      param_1 = (void*)lVar6;
    }
    if (lVar2 != 0) {
      FUN_01849e20();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01505de0();
    }
    FUN_00d64850();
    lVar6 = *arg1;
    lVar4 = *(int64_t *)(this_ptr + 0xa8);
    if (lVar4 != lVar6) {
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      *(int64_t *)(this_ptr + 0xa8) = lVar6;
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
    if (lVar2 != 0) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d50130();
    }
    if (*arg1 != 0) {
      FUN_01650500();
      lVar6 = *(int64_t *)(this_ptr + 0x98);
      if (lVar6 != 0) {
        local_50 = '\0';
        local_58 = 0;
        local_40 = -1;
        while( true ) {
          lVar4 = (int64_t)local_40;
          local_40 = local_40 + 1;
          if (*(int *)(lVar6 + 0xc) <= local_40) break;
          local_58 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + 8 + lVar4 * 8);
          pvVar5 = _pthread_getspecific((void*)*(int64_t *)(lVar6 + 0x10));
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01658a70(param_2,1);
        }
        FUN_00277f20();
        param_1 = (void*)lVar6;
      }
      cVar3 = FUN_01733c10();
      if (cVar3 != '\0') {
        if (*(int64_t *)(this_ptr + 0x90) == 0) goto LAB_0164e7e9;
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016678c0();
        iVar1 = *(int *)(local_58 + 0xc);
        if (local_50 != '\0') {
          FUN_00d50b20();
        }
        if (iVar1 < 2) goto LAB_0164e7e9;
      }
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01660830();
      FUN_016818b0();
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
  }
LAB_0164e7e9:
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0015a600
// ============================================================
// Function: FUN_0015a600
// Address: 0015a600
// Size: 1313 bytes
// Class: MULSSGenerator

void FUN_0015a600(void* param_1)

{
  int64_t lVar1;
  char cVar2;
  void *pvVar3;
  int64_t this_ptr;
  int iVar4;
  int64_t local_c0;
  char local_b8;
  int64_t local_68;
  char local_60;
  int64_t local_40;
  char local_38;
  
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313b00();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015058d0();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x88);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7fb0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_0150f380();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x88);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_012e68b0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x98);
  if (lVar1 != 0) {
    FUN_00d50b00();
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar4 = 0;
      do {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0124c2f0();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cb480();
        cVar2 = FUN_00d23d70();
        if ((local_b8 != '\0') && (local_c0 != 0)) {
          FUN_00d50b20();
        }
        if (cVar2 != '\0') {
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012cb5e0();
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_00115e00();
    FUN_00d50b20();
  }
  FUN_00d216c0();
  if (*(int64_t *)(this_ptr + 0x80) != 0) {
    *(void*)(this_ptr + 0x80) = 0;
    FUN_00d50b20();
  }
  if (local_68 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01bd91b0
// ============================================================
// Function: FUN_01bd91b0
// Address: 01bd91b0
// Size: 572 bytes
// Class: MULSSGenerator

uint64_t FUN_01bd91b0(uint64_t param_1,char param_2)

{
  int iVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  int64_t this_ptr;
  int64_t lVar10;
  int64_t **pplVar11;
  int64_t *local_40;
  char local_38;
  
  FUN_01bd8b20();
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) goto LAB_01bd9229;
    FUN_00d50b00();
    if (param_2 != '\0') goto LAB_01bd9203;
  }
  else {
    if (local_40 == (int64_t *)0x0) {
LAB_01bd9229:
      uVar7 = 0;
      goto LAB_01bd9379;
    }
    if (param_2 == '\0') goto LAB_01bd927e;
LAB_01bd9203:
    iVar4 = FUN_01caea40();
    FUN_01d3a560();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01bd9251;
      }
    }
    else if (local_40 != (int64_t *)0x0) {
LAB_01bd9251:
      uVar5 = FUN_01d3b590();
      FUN_00d50b20();
      if ((uVar5 & 2) != 0) {
        iVar1 = *(int *)(*(int64_t *)(this_ptr + 0x90) + 0x18);
        iVar6 = iVar1 + 3;
        if (-1 < iVar1) {
          iVar6 = iVar1;
        }
        if (3 < iVar1) {
          lVar10 = 0;
          do {
            if (*(int *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x90) + 0x10) + lVar10 * 4) ==
                iVar4) {
              if (7 < iVar1) {
                FUN_01bd8f70();
              }
              goto LAB_01bd927e;
            }
            lVar10 = lVar10 + 1;
          } while (iVar6 >> 2 != (int)lVar10);
        }
      }
    }
    FUN_01bd8c50();
  }
LAB_01bd927e:
  pplVar11 = &local_40;
  FUN_01caeb00();
  plVar8 = local_40;
  FUN_000f5df0();
  if (plVar8 == (int64_t *)0x0) {
LAB_01bd92ba:
    pplVar11 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01bd92ba;
  }
  plVar2 = *pplVar11;
  if (*(char *)(pplVar11 + 1) == '\0') {
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar11 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    plVar8 = *(int64_t **)(this_ptr + 0x90);
    iVar6 = (**(code **)(*plVar2 + 0xa88))();
    iVar4 = (int)plVar8[3];
    iVar1 = iVar4 + 3;
    if (-1 < iVar4) {
      iVar1 = iVar4;
    }
    uVar7 = 0xffffffff;
    if (3 < iVar4) {
      uVar9 = 0;
      do {
        if (*(int *)(plVar8[2] + uVar9 * 4) == iVar6) {
          uVar7 = uVar9 & 0xffffffff;
          break;
        }
        uVar9 = uVar9 + 1;
      } while (iVar1 >> 2 != (int)uVar9);
    }
    (**(code **)(*plVar2 + 0x918))(uVar7);
    FUN_00d50b20();
  }
  uVar7 = CONCAT71((int7)((uint64_t)plVar8 >> 8),1);
  FUN_00d50b20();
LAB_01bd9379:
  return uVar7 & 0xffffffff;
}



// ============================================================
// 012e5b20
// ============================================================
// Function: FUN_012e5b20
// Address: 012e5b20
// Size: 869 bytes
// Class: MULSSGenerator
// String references:
//   "MULSSGenerator"

void FUN_012e5b20(void* param_1)

{
  int64_t *plVar1;
  bool bVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  int64_t this_ptr;
  int64_t local_40;
  char local_38;
  
  plVar1 = *(int64_t **)(this_ptr + 0x118);
  if ((g_0270c820 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_027e77e8 = FUN_0015ef90();
    g_027e77d0 = "MULSSGenerator";
    g_027e77d8 = 0x70;
    param_1 = 0x15ef30;
    g_027e77e0 = FUN_0015ef30;
    g_027e77f0 = 0;
    ram_00000000027e77f8 = 0;
    g_027e7800 = 0;
    ram_00000000027e7808 = 0;
    g_027e7810 = 0;
    ram_00000000027e7818 = 0;
    g_027e7820 = 0;
    ram_00000000027e7828 = 0;
    g_027e7830 = 0;
    ram_00000000027e7838 = 0;
    g_027e7840 = 0;
    ram_00000000027e7848 = 0;
    g_027e7850 = 0;
    ram_00000000027e7858 = 0;
    g_027e7860 = 0;
    ram_00000000027e7868 = 0;
    g_027e7870 = 0;
    ram_00000000027e7878 = 0;
    g_027e7880 = 0;
    ram_00000000027e7888 = 0;
    g_027e7890 = 0;
    ___cxa_guard_release();
  }
  lVar3 = g_02802688;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    lVar3 = g_02802688;
    if (cVar4 != '\0') {
      lVar3 = *(int64_t *)(this_ptr + 0x118);
    }
  }
  if (lVar3 == 0) {
    return;
  }
  FUN_00d50b00();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c6cb0();
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_012e5dc4;
    FUN_00d50b00();
  }
  else if (local_40 == 0) goto LAB_012e5dc4;
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017eca70();
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_012e5cf4;
    FUN_00d50b00();
LAB_012e5c88:
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar4 = FUN_015bc3c0();
    if (cVar4 != '\0') {
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015bc420();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015bc5a0();
    }
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar4 = FUN_015bc3c0();
    if (cVar4 != '\0') {
      bVar2 = false;
      goto LAB_012e5d7d;
    }
LAB_012e5db4:
    FUN_00d50b20();
  }
  else {
    if (local_40 != 0) goto LAB_012e5c88;
LAB_012e5cf4:
    bVar2 = true;
LAB_012e5d7d:
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017f5110();
    if (!bVar2) goto LAB_012e5db4;
  }
  FUN_00d50b20();
LAB_012e5dc4:
  FUN_00d50b20();
  return;
}



// ============================================================
// 0088a55a
// ============================================================
// Function: FUN_0088a55a
// Address: 0088a55a
// Size: 846 bytes
// Class: MULSSGenerator
// String references:
//   "CommandPacket"
//   "commandTarget"
//   "chainedTarget"
//   "commandID"
//   "commandFrame"
//   "extraCommandData"
//   "returnTimeInfo"
//   "timeInfoTweak0"
//   "timeInfoTweak1"
//   "publisherIdAuthId"

int FUN_0088a55a(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int64_t lVar18;
  int64_t *arg1;
  int64_t this_ptr;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*arg1 + 0x20))();
  iVar2 = (**(code **)(*arg1 + 0x30))(1,0xc);
  iVar3 = FUN_00889ac6();
  iVar4 = (**(code **)(*arg1 + 0x38))();
  iVar4 = iVar2 + iVar1 + iVar3 + iVar4;
  if (*(char *)(this_ptr + 0xb1) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(2,0xc);
    iVar2 = FUN_00889ac6();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar4 = iVar1 + iVar4 + iVar2 + iVar3;
  }
  iVar1 = (**(code **)(*arg1 + 0x30))(3,8);
  iVar2 = (**(code **)(*arg1 + 0x90))();
  iVar3 = (**(code **)(*arg1 + 0x38))();
  iVar5 = (**(code **)(*arg1 + 0x30))(10,0xf);
  iVar6 = (**(code **)(*arg1 + 0x58))();
  iVar6 = iVar1 + iVar4 + iVar2 + iVar3 + iVar5 + iVar6;
  for (lVar18 = *(int64_t *)(this_ptr + 0x60); lVar18 != *(int64_t *)(this_ptr + 0x68);
      lVar18 = lVar18 + 1) {
    iVar1 = (**(code **)(*arg1 + 0x80))();
    iVar6 = iVar6 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x30))(0xb,0xf);
  iVar4 = (**(code **)(*arg1 + 0x58))();
  iVar4 = iVar1 + iVar6 + iVar2 + iVar3 + iVar4;
  for (lVar18 = *(int64_t *)(this_ptr + 0x78); lVar18 != *(int64_t *)(this_ptr + 0x80);
      lVar18 = lVar18 + 1) {
    iVar1 = (**(code **)(*arg1 + 0x80))();
    iVar4 = iVar4 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x30))(0x14,2);
  iVar5 = (**(code **)(*arg1 + 0x78))();
  iVar6 = (**(code **)(*arg1 + 0x38))();
  iVar7 = (**(code **)(*arg1 + 0x30))(0x15,10);
  iVar8 = (**(code **)(*arg1 + 0x98))();
  iVar9 = (**(code **)(*arg1 + 0x38))();
  iVar10 = (**(code **)(*arg1 + 0x30))(0x16,10);
  iVar11 = (**(code **)(*arg1 + 0x98))();
  iVar12 = (**(code **)(*arg1 + 0x38))();
  iVar13 = (**(code **)(*arg1 + 0x30))(0x17,10);
  iVar14 = (**(code **)(*arg1 + 0x98))();
  iVar15 = (**(code **)(*arg1 + 0x38))();
  iVar16 = (**(code **)(*arg1 + 0x40))();
  iVar17 = (**(code **)(*arg1 + 0x28))();
  *(int *)((int64_t)arg1 + 0x1c) = *(int *)((int64_t)arg1 + 0x1c) + -1;
  return iVar1 + iVar4 + iVar2 + iVar3 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
         iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17;
}



// ============================================================
// 012eb1d0
// ============================================================
// Function: FUN_012eb1d0
// Address: 012eb1d0
// Size: 1022 bytes
// Class: MULSSGenerator

void* FUN_012eb1d0(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  void*puVar4;
  void *pvVar5;
  void*puVar6;
  int64_t arg1;
  void*this_ptr;
  int iVar7;
  int64_t lVar8;
  int64_t local_70;
  char local_68;
  int64_t local_40;
  char local_38;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar6 = &g_02572358;
  *puVar4 = &g_02572358;
  (*g_02572370)();
  if (*(int64_t *)(arg1 + 0x58) == 0) {
    pvVar5 = _pthread_getspecific((void*)puVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dfcb0();
    pvVar5 = _pthread_getspecific((void*)puVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd790();
    if ((local_68 == '\0') && (local_70 != 0)) {
      FUN_00d50b00();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_70 != 0) {
      if (0 < *(int *)(local_70 + 0xc)) {
        iVar7 = 0;
        do {
          pvVar5 = _pthread_getspecific((void*)puVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_011ef8d0();
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
              goto LAB_012eb500;
            }
          }
          else if (local_40 != 0) {
LAB_012eb500:
            pvVar5 = _pthread_getspecific((void*)puVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if (local_40 == arg1) {
              local_38 = '\0';
              FUN_00d235a0();
            }
            FUN_00d50b20();
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(local_70 + 0xc));
      }
      FUN_0015edf0();
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar1 = *(int64_t *)(arg1 + 0xb0);
    if (lVar1 != 0) {
      if (0 < *(int *)(lVar1 + 0xc)) {
        lVar8 = 0;
        do {
          lVar2 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar8 * 8);
          pvVar5 = _pthread_getspecific((void*)puVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e7c0();
          lVar3 = *param_2;
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 == lVar3) {
            local_38 = '\0';
            FUN_00d235a0();
            local_40 = lVar2;
          }
          lVar8 = lVar8 + 1;
        } while ((int)lVar8 < *(int *)(lVar1 + 0xc));
      }
      FUN_001159b0();
    }
  }
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 012ed0d0
// ============================================================
// Function: FUN_012ed0d0
// Address: 012ed0d0
// Size: 764 bytes
// Class: MULSSGenerator

void FUN_012ed0d0(uint32_t param_1)

{
  bool bVar1;
  char cVar2;
  int64_t lVar3;
  void *pvVar4;
  bool bVar5;
  undefined3 uVar7;
  void* pVar6;
  char *pcVar8;
  char unaff_SIL;
  int64_t *this_ptr;
  int64_t local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38;
  
  if (this_ptr[0xb] != 0) {
    if (unaff_SIL == '\0') {
      return;
    }
    *(void*)(this_ptr + 0xd) = 0;
                                            (**(code **)(*this_ptr + 0x370))();
    return;
  }
  FUN_00d64850();
  *(int *)(this_ptr + 0xe) = (int)this_ptr[0xe] + 1;
  FUN_00d64910();
  if (unaff_SIL != '\0') {
    FUN_012f5600();
  }
  if ((char)this_ptr[0x11] == '\0') {
    return;
  }
  local_38 = '\0';
  lVar3 = FUN_00e8b990();
  uVar7 = (undefined3)((uint)param_1 >> 8);
  bVar5 = true;
  if ((lVar3 != 0) && (FUN_00cb1f10(), local_50 != 0)) {
    local_38 = local_48[0] != '\0';
    if ((bool)local_38) {
      local_48[0] = '\0';
    }
    cVar2 = FUN_00db6490();
    bVar5 = false;
    bVar1 = false;
    if (cVar2 != '\0') goto joined_r0x012ed3c8;
  }
  FUN_00d23310();
  pVar6 = CONCAT31(uVar7,local_48[0]);
  pcVar8 = local_40;
  if (local_48[0] != '\0') {
    pcVar8 = local_48;
  }
  local_40[0] = local_48[0];
  *pcVar8 = '\0';
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  bVar1 = bVar5;
  if (local_40[0] == '\0') {
    if (local_50 == 0) goto joined_r0x012ed3c8;
    FUN_00d50b00();
  }
  else if (local_50 == 0) goto joined_r0x012ed3c8;
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0126ef70();
  if (local_48[0] == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_012ed29a;
    }
LAB_012ed303:
    bVar5 = false;
    local_50 = 0;
  }
  else {
    if (local_50 == 0) goto LAB_012ed303;
LAB_012ed29a:
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124df10();
    if (local_50 == 0) {
      local_50 = 0;
      bVar5 = false;
    }
    else {
      bVar5 = true;
      if (((local_48[0] == '\0') && (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (local_50 != 0) {
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar2 = FUN_0134c600();
    if (cVar2 == '\0') {
      FUN_00d64850();
      *(void*)(this_ptr + 0x11) = 0;
      FUN_00d64910();
    }
    if (bVar5) {
      FUN_00d50b20();
    }
  }
joined_r0x012ed3c8:
  if ((local_38 != '\0') && (!bVar1)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01954240
// ============================================================
// Function: FUN_01954240
// Address: 01954240
// Size: 968 bytes
// Class: MULSSGenerator

void FUN_01954240(uint32_t param_1)

{
  uint64_t uVar1;
  char cVar2;
  void *pvVar3;
  void* in_ECX;
  int64_t lVar4;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar5;
  uint64_t local_a8;
  uint8_t local_a0;
  uint64_t local_98;
  uint8_t local_90;
  int64_t local_80;
  char local_78;
  int64_t local_58;
  char local_50;
  int64_t local_40;
  char local_38;
  
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  if ((local_78 == '\0') && (local_80 != 0)) {
    FUN_00d50b00();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_80 != 0) {
    if (0 < *(int *)(local_80 + 0xc)) {
      lVar4 = 0;
      do {
        uVar1 = *(void*)(*(int64_t *)(local_80 + 0x10) + lVar4 * 8);
        cVar2 = FUN_019415b0();
        uVar5 = extraout_XMM0_Da;
        if (cVar2 == '\0') {
          local_a0 = 0;
          local_a8 = uVar1;
          FUN_01941ba0(extraout_XMM0_Da,&local_a8);
          pvVar3 = _pthread_getspecific(in_ECX);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e78c0();
          pvVar3 = _pthread_getspecific(in_ECX);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar5 = FUN_012c6b00(param_1);
          if ((local_38 != '\0') && (local_40 != 0)) {
            uVar5 = FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            uVar5 = FUN_00d50b20();
          }
        }
        local_90 = 0;
        local_98 = uVar1;
        FUN_01941c70(uVar5,&local_98);
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e78c0();
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c6b00(param_1);
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e78c0();
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c6b00(param_1);
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < *(int *)(local_80 + 0xc));
    }
    FUN_000be170();
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 012f0520
// ============================================================
// Function: FUN_012f0520
// Address: 012f0520
// Size: 761 bytes
// Class: MULSSGenerator

int64_t * FUN_012f0520(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  void*puVar1;
  int64_t lVar2;
  int64_t lVar3;
  void*puVar4;
  void *pvVar5;
  int64_t *in_RCX;
  int64_t *plVar6;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar7;
  int64_t local_b8;
  char local_b0;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  uint64_t local_60;
  uint32_t local_58;
  
  plVar6 = in_RCX;
  if (*in_RCX == 0) {
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &g_02572358;
    (*g_02572370)();
    puVar1 = (void*)*in_RCX;
    if (puVar1 == puVar4) {
      if ((char)in_RCX[1] != '\0') {
        FUN_00d50b20();
        goto LAB_012f05c0;
      }
    }
    else {
      *in_RCX = (int64_t)puVar4;
      if (((char)in_RCX[1] != '\0') && (puVar1 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    *(void*)(in_RCX + 1) = 1;
  }
LAB_012f05c0:
  if (arg1 != 0) {
    FUN_00d50b00();
  }
  FUN_0190a130();
  lVar3 = local_78;
  if (local_70 == '\0') {
    if (((local_78 != 0) && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70 = '\0';
  }
  if (arg1 != 0) {
    FUN_00d50b20();
  }
  FUN_0190a380(param_1,param_2,param_3);
  local_70 = '\0';
  local_78 = lVar3;
  FUN_00d21140();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = *(int64_t *)(arg1 + 0xa8);
  if (lVar2 != 0) {
    local_70 = '\0';
    local_78 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = lVar2;
    if (0 < *(int *)(lVar2 + 0xc)) {
      lVar7 = 0;
      do {
        local_78 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + lVar7 * 8);
        pvVar5 = _pthread_getspecific((void*)plVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_88 = *in_RCX;
        local_80 = '\0';
        plVar6 = &local_88;
        FUN_012f0520(param_1,param_2,param_3);
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        lVar7 = lVar7 + 1;
        local_60 = CONCAT44(local_60._4_4_,(int)lVar7);
      } while ((int)lVar7 < *(int *)(lVar2 + 0xc));
    }
    FUN_000be170();
  }
  *(void*)(this_ptr + 1) = 0;
  lVar2 = *in_RCX;
  if ((char)in_RCX[1] == '\0') {
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar2;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    *this_ptr = lVar2;
    *(void*)(this_ptr + 1) = 1;
    *(void*)(in_RCX + 1) = 0;
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 012e7fb0
// ============================================================
// Function: FUN_012e7fb0
// Address: 012e7fb0
// Size: 810 bytes
// Class: MULSSGenerator

void FUN_012e7fb0(void* param_1)

{
  int iVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t in_stack_ffffffffffffffc0;
  char local_38;
  
  if (*(int64_t *)(arg1 + 0x110) != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7fb0();
    if (local_38 == '\0') {
      if (in_stack_ffffffffffffffc0 == 0) goto LAB_012e81b4;
      FUN_00d50b00();
    }
    else if (in_stack_ffffffffffffffc0 == 0) goto LAB_012e81b4;
    lVar4 = *(int64_t *)(arg1 + 0x110);
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      lVar4 = *(int64_t *)(arg1 + 0x110);
      lVar3 = FUN_00e8b990();
      if (lVar3 != 0) {
        lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
      }
    }
    lVar4 = *(int64_t *)(lVar4 + 0xa8);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150eff0();
    if ((local_38 == '\0') && (in_stack_ffffffffffffffc0 != 0)) {
      FUN_00d50b00();
    }
    FUN_00d50b00();
    local_38 = '\0';
    iVar1 = FUN_00d23d20();
    FUN_00d50b20();
    if (iVar1 < *(int *)(in_stack_ffffffffffffffc0 + 0xc)) {
      lVar3 = *(int64_t *)(*(int64_t *)(in_stack_ffffffffffffffc0 + 0x10) + (int64_t)iVar1 * 8);
      *(void*)(this_ptr + 1) = 0;
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      *this_ptr = lVar3;
      *(void*)(this_ptr + 1) = 1;
      FUN_00d50b20();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      return;
    }
    FUN_00d50b20();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    in_stack_ffffffffffffffc0 = arg1;
  }
LAB_012e81b4:
  if (*(int64_t *)(arg1 + 0x130) != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cade0();
    if ((local_38 != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
      FUN_00d50b20();
    }
    if (in_stack_ffffffffffffffc0 != 0) {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cade0();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015058d0();
      if (local_38 == '\0') {
        return;
      }
      if (in_stack_ffffffffffffffc0 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return;
}



// ============================================================
// 0165d320
// ============================================================
// Function: FUN_0165d320
// Address: 0165d320
// Size: 784 bytes
// Class: MULSSGenerator

double FUN_0165d320(double param_1,uint64_t param_2)

{
  uint64_t uVar1;
  void *pvVar2;
  void* pVar3;
  void*puVar4;
  double *arg1;
  double dVar5;
  uint64_t uVar6;
  double dVar7;
  uint8_t local_68 [8];
  uint8_t local_60 [4];
  int local_5c;
  int64_t local_58;
  char local_50;
  double local_48;
  int64_t local_40;
  char local_38;
  
  local_48 = param_1;
  FUN_0123fd00();
  uVar1 = FUN_00e7cd00(local_48);
  puVar4 = local_68;
  FUN_0165d150(puVar4,uVar1,0,local_60);
  local_40 = local_58;
  pVar3 = (void*)puVar4;
  local_38 = 0;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_0165d393;
    }
    local_40 = 0;
  }
  else {
LAB_0165d393:
    local_38 = '\x01';
    if (local_40 != 0) {
      if ((local_5c != 0) && (dVar5 = (double)FUN_00e7c860(), dVar5 <= local_48)) {
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        puVar4 = local_68;
        FUN_01253c10(puVar4,&local_40,local_60,param_2);
        pVar3 = (void*)puVar4;
      }
      dVar5 = (double)FUN_00e7c860();
      local_48 = local_48 - dVar5;
      if (arg1 != (double *)0x0) {
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_58 = FUN_0123fff0();
        uVar6 = FUN_00e7c860();
        dVar5 = (double)_fmod(local_48);
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_58 = FUN_0123ffb0();
        dVar7 = (double)FUN_00e7c860();
        *arg1 = (double)(-(uint64_t)(dVar5 < 0.0) &
                              (uint64_t)((double)(uVar6 & g_023908f0) + dVar5) |
                             ~-(uint64_t)(dVar5 < 0.0) & (uint64_t)dVar5) * dVar7;
      }
      pvVar2 = _pthread_getspecific(pVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar5 = (double)FUN_00e7c860();
      pvVar2 = _pthread_getspecific(pVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_58 = FUN_0123ffb0();
      dVar7 = (double)FUN_00e7c860();
      local_48 = local_48 * dVar7 + dVar5;
      if (local_38 == '\0') {
        return local_48;
      }
      goto LAB_0165d60e;
    }
  }
  local_38 = '\x01';
  if (arg1 != (double *)0x0) {
    dVar5 = (double)_fmod(local_48);
    *arg1 = (double)(~-(uint64_t)(dVar5 < 0.0) & (uint64_t)dVar5 |
                         (uint64_t)(g_023b1e98 + dVar5) & -(uint64_t)(dVar5 < 0.0));
  }
LAB_0165d60e:
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return local_48;
}



// ============================================================
// 01652170
// ============================================================
// Function: FUN_01652170
// Address: 01652170
// Size: 865 bytes
// Class: MULSSGenerator

void FUN_01652170(void* param_1)

{
  int64_t lVar1;
  char cVar2;
  void *pvVar3;
  void* pVar4;
  int64_t this_ptr;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if ((*(int *)(*(int64_t *)(this_ptr + 0x98) + 0xc) == 0) &&
     (*(int64_t *)(this_ptr + 0xa8) != 0)) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015058d0();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015058d0();
    local_80 = local_70;
    local_78 = 0;
    if (local_68 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    local_78 = '\x01';
    pVar4 = 1;
    FUN_01519670(1,&local_80);
    lVar1 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    cVar2 = FUN_01512830();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      FUN_01650210();
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e7210();
      local_60 = local_50;
      local_58 = 0;
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_58 = '\x01';
      FUN_012879b0();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}



// ============================================================
// 012f9cd0
// ============================================================
// Function: FUN_012f9cd0
// Address: 012f9cd0
// Size: 836 bytes
// Class: MULSSGenerator

void FUN_012f9cd0(void* param_1)

{
  int64_t lVar1;
  char cVar2;
  void *pvVar3;
  int64_t this_ptr;
  int iVar4;
  int64_t local_40;
  char local_38;
  
  lVar1 = *(int64_t *)(this_ptr + 0xb0);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar4 = 0;
      do {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01274b60();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
            goto LAB_012f9dd0;
          }
        }
        else if (local_40 != 0) {
LAB_012f9dd0:
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar2 = FUN_0129a470();
          if (cVar2 != '\0') {
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125a2c0();
            FUN_012595a0();
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0128c200();
            if ((local_38 == '\0') && (local_40 != 0)) {
              FUN_00d50b00();
            }
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0128c200();
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
                goto LAB_012f9f42;
              }
            }
            else {
LAB_012f9f42:
              if ((local_40 != 0) && (local_40 != 0)) {
                pvVar3 = _pthread_getspecific(param_1);
                if (pvVar3 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar3 = _pthread_getspecific(param_1);
                if (pvVar3 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01507f00();
                FUN_01508220();
              }
              if (local_40 != 0) {
                FUN_00d50b20();
              }
            }
            if (local_40 != 0) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_001159b0();
  }
  return;
}



// ============================================================
// 012eb7d0
// ============================================================
// Function: FUN_012eb7d0
// Address: 012eb7d0
// Size: 786 bytes
// Class: MULSSGenerator

void FUN_012eb7d0(void* param_1)

{
  char cVar1;
  bool bVar2;
  void *pvVar3;
  void*puVar4;
  int64_t lVar5;
  void*this_ptr;
  int64_t local_40;
  char local_38;
  
  cVar1 = (char)param_1;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e7c0();
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_012eb8b5;
    FUN_00d50b00();
LAB_012eb860:
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013de560();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
        goto LAB_012eb8e2;
      }
    }
    else if (local_40 != 0) {
LAB_012eb8e2:
      lVar5 = local_40;
      if (cVar1 == '\0') {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014d1b50();
        if (local_40 == 0) goto LAB_012eb9c0;
        bVar2 = true;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
      }
      else {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014d19a0();
        if (local_40 == 0) {
LAB_012eb9c0:
          bVar2 = false;
          lVar5 = 0;
        }
        else {
          bVar2 = true;
          if (local_38 == '\0') {
            FUN_00d50b00();
          }
        }
      }
      if (lVar5 != 0) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014d1d00();
        if (local_38 == '\0') {
          if (local_40 == 0) goto LAB_012eba78;
          FUN_00d50b00();
        }
        else if (local_40 == 0) {
LAB_012eba78:
          if (bVar2) {
            FUN_00d50b20();
          }
          goto LAB_012eba86;
        }
        FUN_012eb1d0();
        FUN_00d50b20();
        if (bVar2) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        goto LAB_012ebac8;
      }
LAB_012eba86:
      FUN_00d50b20();
    }
    bVar2 = false;
  }
  else {
    if (local_40 != 0) goto LAB_012eb860;
LAB_012eb8b5:
    bVar2 = true;
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  (*g_02572370)();
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  if (bVar2) {
    return;
  }
LAB_012ebac8:
  FUN_00d50b20();
  return;
}



// ============================================================
// 004f9820
// ============================================================
// Function: FUN_004f9820
// Address: 004f9820
// Size: 878 bytes
// Class: MULSSGenerator

void FUN_004f9820(void* param_1)

{
  bool bVar1;
  void *pvVar2;
  int64_t lVar3;
  void* pVar4;
  int64_t lVar5;
  int64_t lVar6;
  int iVar7;
  int64_t local_88;
  char local_80;
  int64_t local_70;
  char local_68;
  int64_t local_58;
  char local_50;
  int local_40;
  
  lVar6 = local_58;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_004f98b6;
    }
LAB_004f9a78:
    bVar1 = true;
  }
  else {
    if (local_58 == 0) goto LAB_004f9a78;
LAB_004f98b6:
    local_50 = '\0';
    local_58 = 0;
    local_40 = -1;
    while( true ) {
      lVar3 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar6 + 0xc) <= local_40) break;
      lVar5 = *(int64_t *)(lVar6 + 0x10);
      local_58 = *(int64_t *)(lVar5 + 8 + lVar3 * 8);
      pvVar2 = _pthread_getspecific((void*)lVar5);
      pVar4 = (void*)lVar5;
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (local_70 != 0) {
        pvVar2 = _pthread_getspecific(pVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01264240();
        if (local_80 == '\0') {
          if (local_88 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_80 = '\0';
        }
        local_70 = local_88;
        local_68 = '\0';
        FUN_00d235a0();
        if (local_88 != 0) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_001159b0();
    param_1 = (void*)lVar6;
    bVar1 = false;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_004f9b8f;
    FUN_00d50b00();
  }
  else if (local_58 == 0) goto LAB_004f9b8f;
  for (iVar7 = 0; iVar7 < *(int *)(local_58 + 0xc); iVar7 = iVar7 + 1) {
    FUN_004f9820();
  }
  FUN_000be170();
  FUN_00d50b20();
LAB_004f9b8f:
  if (!bVar1) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 012ea9e0
// ============================================================
// Function: FUN_012ea9e0
// Address: 012ea9e0
// Size: 677 bytes
// Class: MULSSGenerator

void* FUN_012ea9e0(double param_1,double param_2)

{
  bool bVar1;
  code *pcVar2;
  char cVar3;
  void *pvVar4;
  int64_t lVar5;
  void*puVar6;
  void* in_ECX;
  code *pcVar7;
  int64_t lVar8;
  int64_t *arg1;
  void*this_ptr;
  int iVar9;
  uint64_t uVar10;
  
  uVar10 = ~-(uint64_t)(param_2 < 0.0) & (uint64_t)param_1 |
           (uint64_t)(param_1 + param_2) & -(uint64_t)(param_2 < 0.0);
  if (param_2 < 0.0) {
    param_2 = (double)((uint64_t)param_2 ^ g_023945b0);
  }
  if ((char)arg1[0x28] != '\0') {
    (**(code **)(*arg1 + 0x1a0))();
  }
  lVar8 = arg1[0x27];
  if (lVar8 != 0) {
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      lVar8 = arg1[0x27];
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    if (*(char *)(lVar8 + 0x38) != '\0') {
      pvVar4 = _pthread_getspecific(in_ECX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01529c50(uVar10,param_2);
      return this_ptr;
    }
  }
  pcVar2 = g_02572370;
  lVar8 = arg1[0x16];
  if (lVar8 == 0) {
    *(void*)(this_ptr + 1) = 0;
  }
  else {
    if (*(int *)(lVar8 + 0xc) < 1) {
      bVar1 = false;
      puVar6 = (void*)0x0;
    }
    else {
      iVar9 = 0;
      puVar6 = (void*)0x0;
      bVar1 = false;
      pcVar7 = g_02572370;
      do {
        pvVar4 = _pthread_getspecific((void*)pcVar7);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar3 = FUN_01275530(uVar10,param_2);
        if (cVar3 != '\0') {
          if (puVar6 == (void*)0x0) {
            puVar6 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar6 = &g_02572358;
            (*pcVar2)();
            bVar1 = true;
          }
          pcVar7 = 0x0;
          FUN_00d24b60(0,FUN_012e8c90,0);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(lVar8 + 0xc));
    }
    FUN_001159b0();
    *(void*)(this_ptr + 1) = 0;
    if (bVar1) goto LAB_012eac75;
    if (puVar6 != (void*)0x0) {
      FUN_00d50b00();
      goto LAB_012eac75;
    }
  }
  puVar6 = (void*)0x0;
LAB_012eac75:
  *this_ptr = puVar6;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 01652cd0
// ============================================================
// Function: FUN_01652cd0
// Address: 01652cd0
// Size: 999 bytes
// Class: MULSSGenerator

void FUN_01652cd0(void* param_1)

{
  int64_t lVar1;
  void *pvVar2;
  int iVar3;
  int64_t this_ptr;
  int64_t local_a8;
  char local_a0;
  int64_t local_78;
  char local_70;
  int64_t local_58;
  char local_50;
  
  if (*(int64_t *)(this_ptr + 0xa8) == 0) {
    return;
  }
  FUN_01650330();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01650330();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  FUN_012edae0();
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016670b0();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_01652ea1;
    }
  }
  else if (local_58 != 0) {
LAB_01652ea1:
    FUN_01275b30();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_01650330();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6a70();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    FUN_01650330();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012f49a0();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    return;
  }
  lVar1 = *(int64_t *)(this_ptr + 0x98);
  if (lVar1 != 0) {
    for (iVar3 = 0; iVar3 < *(int *)(lVar1 + 0xc); iVar3 = iVar3 + 1) {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01658a40();
    }
    FUN_00277f20();
  }
  return;
}



// ============================================================
// 012e61a0
// ============================================================
// Function: FUN_012e61a0
// Address: 012e61a0
// Size: 697 bytes
// Class: MULSSGenerator

void* FUN_012e61a0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t lVar4;
  void*puVar5;
  void*puVar6;
  int64_t arg1;
  void*this_ptr;
  int iVar7;
  int64_t local_80;
  char local_78;
  int local_50;
  
  lVar1 = *(int64_t *)(arg1 + 0xa8);
  if (lVar1 == 0) {
    *(void*)(this_ptr + 1) = 0;
LAB_012e62d3:
    puVar5 = (void*)0x0;
  }
  else {
    local_50 = -1;
    do {
      lVar2 = (int64_t)local_50;
      local_50 = local_50 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_50) {
        FUN_000be170();
        puVar5 = *(void**)(arg1 + 0xa8);
        *(void*)(this_ptr + 1) = 0;
        if (puVar5 == (void*)0x0) goto LAB_012e62d3;
        FUN_00d50b00();
        goto LAB_012e644b;
      }
      lVar2 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar2 * 8);
      pvVar3 = _pthread_getspecific((void*)*(int64_t *)(lVar1 + 0x10));
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        lVar2 = *(int64_t *)(lVar2 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
      lVar2 = *(int64_t *)(lVar2 + 0xa8);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      iVar7 = *(int *)(lVar2 + 0xc);
      FUN_00d50b20();
    } while (iVar7 == 0);
    FUN_000be170();
    puVar5 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar6 = &g_02572358;
    *puVar5 = &g_02572358;
    (*g_02572370)();
    lVar1 = *(int64_t *)(arg1 + 0xa8);
    if (lVar1 != 0) {
      if (0 < *(int *)(lVar1 + 0xc)) {
        iVar7 = 0;
        do {
          FUN_00d21140();
          pvVar3 = _pthread_getspecific((void*)puVar6);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e61a0();
          if (local_78 == '\0') {
            if (local_80 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_78 = '\0';
          }
          FUN_00d214d0();
          if (local_80 != 0) {
            FUN_00d50b20();
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(lVar1 + 0xc));
      }
      FUN_000be170();
    }
  }
LAB_012e644b:
  *this_ptr = puVar5;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 012ebfe0
// ============================================================
// Function: FUN_012ebfe0
// Address: 012ebfe0
// Size: 643 bytes
// Class: MULSSGenerator

uint64_t FUN_012ebfe0(void* param_1)

{
  void *pvVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  int64_t *this_ptr;
  double dVar5;
  double dVar6;
  double local_48;
  
  if ((char)this_ptr[0x28] != '\0') {
    (**(code **)(*this_ptr + 0x1a0))();
  }
  lVar4 = this_ptr[0x27];
  if (lVar4 == 0) {
LAB_012ec094:
    lVar4 = this_ptr[0x16];
    dVar5 = g_023b2568;
    if (lVar4 != 0) {
      dVar6 = g_023b2568;
      if (0 < *(int *)(lVar4 + 0xc)) {
        local_48 = g_023b2568;
        iVar3 = 0;
        do {
          pvVar1 = _pthread_getspecific(param_1);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar6 = (double)FUN_0125a280();
          if (local_48 <= dVar6) {
            dVar6 = local_48;
          }
          iVar3 = iVar3 + 1;
          local_48 = dVar6;
        } while (iVar3 < *(int *)(lVar4 + 0xc));
      }
      dVar5 = (double)FUN_001159b0();
      lVar4 = this_ptr[0x15];
      goto joined_r0x012ec238;
    }
  }
  else {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      lVar4 = this_ptr[0x27];
      lVar2 = FUN_00e8b990();
      if (lVar2 != 0) {
        lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar2 + 0x154) & 1) * 8);
      }
    }
    if (*(char *)(lVar4 + 0x38) == '\0') goto LAB_012ec094;
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar5 = (double)FUN_0152a250();
  }
  lVar4 = this_ptr[0x15];
  dVar6 = dVar5;
joined_r0x012ec238:
  if (lVar4 != 0) {
    if (0 < *(int *)(lVar4 + 0xc)) {
      iVar3 = 0;
      local_48 = dVar6;
      do {
        pvVar1 = _pthread_getspecific(param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar5 = (double)FUN_012ebfe0();
        if (local_48 <= dVar5) {
          dVar5 = local_48;
        }
        iVar3 = iVar3 + 1;
        dVar6 = dVar5;
        local_48 = dVar5;
      } while (iVar3 < *(int *)(lVar4 + 0xc));
    }
    FUN_000be170(dVar5);
  }
  return -(uint64_t)(g_023b2568 != dVar6) & (uint64_t)dVar6;
}



// ============================================================
// 012ebd30
// ============================================================
// Function: FUN_012ebd30
// Address: 012ebd30
// Size: 643 bytes
// Class: MULSSGenerator

uint64_t FUN_012ebd30(void* param_1)

{
  void *pvVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  int64_t *this_ptr;
  double dVar5;
  double dVar6;
  double local_48;
  
  if ((char)this_ptr[0x28] != '\0') {
    (**(code **)(*this_ptr + 0x1a0))();
  }
  lVar4 = this_ptr[0x27];
  if (lVar4 == 0) {
LAB_012ebde4:
    lVar4 = this_ptr[0x16];
    dVar5 = g_023b4830;
    if (lVar4 != 0) {
      dVar6 = g_023b4830;
      if (0 < *(int *)(lVar4 + 0xc)) {
        local_48 = g_023b4830;
        iVar3 = 0;
        do {
          pvVar1 = _pthread_getspecific(param_1);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar6 = (double)FUN_01259520();
          if (dVar6 <= local_48) {
            dVar6 = local_48;
          }
          iVar3 = iVar3 + 1;
          local_48 = dVar6;
        } while (iVar3 < *(int *)(lVar4 + 0xc));
      }
      dVar5 = (double)FUN_001159b0();
      lVar4 = this_ptr[0x15];
      goto joined_r0x012ebf88;
    }
  }
  else {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      lVar4 = this_ptr[0x27];
      lVar2 = FUN_00e8b990();
      if (lVar2 != 0) {
        lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar2 + 0x154) & 1) * 8);
      }
    }
    if (*(char *)(lVar4 + 0x38) == '\0') goto LAB_012ebde4;
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar5 = (double)FUN_0152a000();
  }
  lVar4 = this_ptr[0x15];
  dVar6 = dVar5;
joined_r0x012ebf88:
  if (lVar4 != 0) {
    if (0 < *(int *)(lVar4 + 0xc)) {
      iVar3 = 0;
      local_48 = dVar6;
      do {
        pvVar1 = _pthread_getspecific(param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar5 = (double)FUN_012ebd30();
        if (dVar5 <= local_48) {
          dVar5 = local_48;
        }
        iVar3 = iVar3 + 1;
        dVar6 = dVar5;
        local_48 = dVar5;
      } while (iVar3 < *(int *)(lVar4 + 0xc));
    }
    FUN_000be170(dVar5);
  }
  return -(uint64_t)(g_023b4830 != dVar6) & (uint64_t)dVar6;
}



// ============================================================
// 012f7880
// ============================================================
// Function: FUN_012f7880
// Address: 012f7880
// Size: 725 bytes
// Class: MULSSGenerator

void FUN_012f7880(void* param_1)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  void *pvVar4;
  void* pVar5;
  int64_t lVar6;
  int64_t this_ptr;
  int64_t local_78;
  char local_70;
  int64_t local_58;
  char local_50;
  int local_40;
  
  *(int *)(this_ptr + 0x6c) = *(int *)(this_ptr + 0x6c) + 1;
  lVar2 = FUN_00e8b990();
  if (lVar2 != 0) {
    FUN_00e8b990();
    FUN_00cb1f10();
    FUN_00db3260();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar2 = *(int64_t *)(this_ptr + 0xb0);
  if (lVar2 != 0) {
    local_50 = '\0';
    local_58 = 0;
    local_40 = -1;
LAB_012f792b:
    while( true ) {
      lVar3 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar2 + 0xc) <= local_40) break;
      lVar6 = *(int64_t *)(lVar2 + 0x10);
      local_58 = *(int64_t *)(lVar6 + 8 + lVar3 * 8);
      pvVar4 = _pthread_getspecific((void*)lVar6);
      pVar5 = (void*)lVar6;
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01274b60();
      if (local_70 == '\0') goto LAB_012f79d0;
      if (local_78 != 0) goto LAB_012f7a00;
    }
    FUN_001159b0();
    param_1 = (void*)lVar2;
    if (*(int64_t *)(this_ptr + 0xb0) != 0) {
      FUN_00d50b00();
      bVar1 = false;
      goto LAB_012f7a97;
    }
  }
  bVar1 = true;
LAB_012f7a97:
  FUN_012edae0();
  if (!bVar1) {
    FUN_00d50b20();
  }
  lVar2 = FUN_00e8b990();
  if (lVar2 != 0) {
    FUN_00e8b990();
    FUN_00cb1f10();
    FUN_00db3270();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  *(int *)(this_ptr + 0x6c) = *(int *)(this_ptr + 0x6c) + -1;
  if (*(int64_t *)(this_ptr + 0x58) != 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d50b00();
    FUN_012f5460();
    FUN_00d50b20();
  }
  return;
LAB_012f79d0:
  if (local_78 != 0) {
    FUN_00d50b00();
LAB_012f7a00:
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0129a1f0();
    FUN_00d50b20();
  }
  goto LAB_012f792b;
}



// ============================================================
// 0165b470
// ============================================================
// Function: FUN_0165b470
// Address: 0165b470
// Size: 753 bytes
// Class: MULSSGenerator

void* FUN_0165b470(void*param_1)

{
  uint32_t uVar1;
  void*puVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t lVar5;
  void* pVar6;
  int64_t *arg1;
  void*this_ptr;
  int iVar7;
  int64_t local_48;
  char local_40;
  
  if ((*arg1 == 0) || (*(int *)(*arg1 + 0xc) == 0)) {
    FUN_0123fbe0(param_1,4);
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_00e7bdb0();
    FUN_0165b0c0();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    puVar2 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &g_025f68e8;
    puVar2[7] = &g_025f6c78;
    puVar2[8] = 0;
    *(void*)(puVar2 + 9) = 0;
    FUN_00d500e0();
    pvVar3 = _pthread_getspecific((void*)param_1);
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      param_1 = puVar2;
    }
    FUN_0165b800();
    pVar6 = (void*)param_1;
    lVar4 = *arg1;
    if (lVar4 != 0) {
      for (iVar7 = 0; pVar6 = (void*)param_1, iVar7 < *(int *)(lVar4 + 0xc);
          iVar7 = iVar7 + 1) {
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          pVar6 = (void*)puVar2;
        }
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014ff950();
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar1 = FUN_014ff960();
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        param_1 = (void*)FUN_014ff9a0();
        FUN_0165b8b0(param_1,uVar1,0);
      }
      FUN_01660130();
    }
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0165bd00();
    *this_ptr = puVar2;
    *(void*)(this_ptr + 1) = 1;
  }
  return this_ptr;
}



// ============================================================
// 012f8840
// ============================================================
// Function: FUN_012f8840
// Address: 012f8840
// Size: 516 bytes
// Class: MULSSGenerator

int64_t * FUN_012f8840(char *param_1)

{
  int64_t lVar1;
  void *pvVar2;
  char *pcVar3;
  int64_t arg1;
  int64_t *this_ptr;
  int iVar4;
  int64_t lVar5;
  int64_t local_58;
  char local_50 [8];
  char local_40;
  char local_38;
  
  lVar1 = *(int64_t *)(arg1 + 0xb0);
  if (lVar1 == 0) {
    *(void*)(this_ptr + 1) = 0;
    local_40 = '\0';
    lVar5 = 0;
  }
  else {
    FUN_00d50b00();
    if (*(int *)(lVar1 + 0xc) < 1) {
      local_40 = '\0';
      lVar5 = 0;
    }
    else {
      iVar4 = 0;
      lVar5 = 0;
      local_40 = '\0';
      do {
        pvVar2 = _pthread_getspecific((void*)param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0126ef70();
        local_38 = local_50[0];
        param_1 = &stack0xffffffffffffffc8;
        pcVar3 = local_50;
        if (local_50[0] == '\0') {
          pcVar3 = param_1;
        }
        *pcVar3 = '\0';
        if ((local_50[0] != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if (local_58 != 0) {
          if (lVar5 == 0) {
            lVar5 = local_58;
            if (local_38 != '\0') {
              local_40 = '\x01';
              goto LAB_012f88d0;
            }
            FUN_00d50b00();
            local_40 = '\x01';
          }
          else if (local_58 != lVar5) {
            *(void*)(this_ptr + 1) = 0;
            *this_ptr = 0;
            if (local_38 != '\0') {
              FUN_00d50b20();
            }
            FUN_001159b0();
            FUN_00d50b20();
            goto LAB_012f89f0;
          }
          if (local_38 != '\0') {
            FUN_00d50b20();
          }
        }
LAB_012f88d0:
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_001159b0();
    FUN_00d50b20();
    *(void*)(this_ptr + 1) = 0;
    if ((local_40 != '\0') && (lVar5 != 0)) {
      FUN_00d50b00();
    }
  }
  *this_ptr = lVar5;
  *(char *)(this_ptr + 1) = local_40;
LAB_012f89f0:
  if ((local_40 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 012ea6f0
// ============================================================
// Function: FUN_012ea6f0
// Address: 012ea6f0
// Size: 621 bytes
// Class: MULSSGenerator

void* FUN_012ea6f0(uint64_t param_1,uint64_t param_2)

{
  bool bVar1;
  code *pcVar2;
  char cVar3;
  void *pvVar4;
  int64_t lVar5;
  void*puVar6;
  void* in_ECX;
  code *pcVar7;
  int64_t *arg1;
  void*this_ptr;
  int iVar8;
  int64_t lVar9;
  
  if ((char)arg1[0x28] != '\0') {
    (**(code **)(*arg1 + 0x1a0))();
  }
  lVar9 = arg1[0x27];
  if (lVar9 != 0) {
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      lVar9 = arg1[0x27];
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    if (*(char *)(lVar9 + 0x38) != '\0') {
      pvVar4 = _pthread_getspecific(in_ECX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015298a0(param_1,param_2);
      return this_ptr;
    }
  }
  pcVar2 = g_02572370;
  lVar9 = arg1[0x16];
  if (lVar9 == 0) {
    *(void*)(this_ptr + 1) = 0;
  }
  else {
    if (*(int *)(lVar9 + 0xc) < 1) {
      bVar1 = false;
      puVar6 = (void*)0x0;
    }
    else {
      iVar8 = 0;
      puVar6 = (void*)0x0;
      bVar1 = false;
      pcVar7 = g_02572370;
      do {
        pvVar4 = _pthread_getspecific((void*)pcVar7);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar3 = FUN_01275500(param_1,param_2);
        if (cVar3 != '\0') {
          if (puVar6 == (void*)0x0) {
            puVar6 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar6 = &g_02572358;
            (*pcVar2)();
            bVar1 = true;
          }
          pcVar7 = 0x0;
          FUN_00d24b60(0,FUN_012e8c90,0);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(lVar9 + 0xc));
    }
    FUN_001159b0();
    *(void*)(this_ptr + 1) = 0;
    if (bVar1) goto LAB_012ea952;
    if (puVar6 != (void*)0x0) {
      FUN_00d50b00();
      goto LAB_012ea952;
    }
  }
  puVar6 = (void*)0x0;
LAB_012ea952:
  *this_ptr = puVar6;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 01659860
// ============================================================
// Function: FUN_01659860
// Address: 01659860
// Size: 840 bytes
// Class: MULSSGenerator

void FUN_01659860(void* param_1)

{
  int64_t lVar1;
  void *pvVar2;
  int64_t this_ptr;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  lVar1 = *(int64_t *)(this_ptr + 0x90);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01650330();
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  FUN_01658d80();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x98);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01650620();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016676f0();
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  FUN_01658d80();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8a10();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01650620();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  FUN_01710690(1,1);
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 012e7900
// ============================================================
// Function: FUN_012e7900
// Address: 012e7900
// Size: 856 bytes
// Class: MULSSGenerator

void FUN_012e7900(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  void*puVar3;
  void *pvVar4;
  void* pVar5;
  int64_t this_ptr;
  
  plVar2 = (int64_t *)FUN_010f2780();
  (**(code **)(*plVar2 + 0x18))();
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *(void*)(puVar3 + 8) = 0;
  puVar3[7] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  pVar5 = 0x25d2108;
  *puVar3 = &g_025d2108;
  *(void*)(puVar3 + 0xc) = 0;
  puVar3[0xd] = 0;
  (*g_025d2120)();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f0a90();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f0ae0();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f0a90();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f0ae0();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f2270();
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *(void*)(puVar3 + 8) = 0;
  puVar3[7] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  pVar5 = 0x25d58b0;
  *puVar3 = &g_025d58b0;
  *(void*)(puVar3 + 0xc) = 0;
  (*g_025d58c8)();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f0a90();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f0ae0();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f2270();
  if (*(int64_t **)(this_ptr + 0xb8) != plVar2) {
    FUN_00d64850();
    plVar1 = *(int64_t **)(this_ptr + 0xb8);
    if (plVar1 != plVar2) {
      FUN_00d50b00();
      *(int64_t **)(this_ptr + 0xb8) = plVar2;
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  FUN_00d50b20();
  FUN_00d50b20();
  FUN_00d50b20();
  return;
}



// ============================================================
// 012e57f0
// ============================================================
// Function: FUN_012e57f0
// Address: 012e57f0
// Size: 570 bytes
// Class: MULSSGenerator
// String references:
//   "MULSSGenerator"

void FUN_012e57f0(void* param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  int64_t this_ptr;
  int64_t local_48;
  char local_40;
  
  if (*(int *)(this_ptr + 0x108) != 0) {
    return;
  }
  if (*(int64_t *)(this_ptr + 0x58) != 0) {
    return;
  }
  plVar1 = *(int64_t **)(this_ptr + 0x118);
  if ((g_0270c820 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_027e77e8 = FUN_0015ef90();
    g_027e77d0 = "MULSSGenerator";
    g_027e77d8 = 0x70;
    param_1 = 0x15ef30;
    g_027e77e0 = FUN_0015ef30;
    g_027e77f0 = 0;
    ram_00000000027e77f8 = 0;
    g_027e7800 = 0;
    ram_00000000027e7808 = 0;
    g_027e7810 = 0;
    ram_00000000027e7818 = 0;
    g_027e7820 = 0;
    ram_00000000027e7828 = 0;
    g_027e7830 = 0;
    ram_00000000027e7838 = 0;
    g_027e7840 = 0;
    ram_00000000027e7848 = 0;
    g_027e7850 = 0;
    ram_00000000027e7858 = 0;
    g_027e7860 = 0;
    ram_00000000027e7868 = 0;
    g_027e7870 = 0;
    ram_00000000027e7878 = 0;
    g_027e7880 = 0;
    ram_00000000027e7888 = 0;
    g_027e7890 = 0;
    ___cxa_guard_release();
  }
  lVar2 = g_02802688;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    lVar2 = g_02802688;
    if (cVar3 != '\0') {
      lVar2 = *(int64_t *)(this_ptr + 0x118);
    }
  }
  if (lVar2 == 0) {
    return;
  }
  FUN_00d50b00();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c6cb0();
  if (local_40 == '\0') {
    if (local_48 == 0) goto LAB_012e596b;
    FUN_00d50b00();
  }
  else if (local_48 == 0) goto LAB_012e596b;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar2 = *(int64_t *)(this_ptr + 0xb0);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_017ecb00();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_012e596b:
  FUN_00d50b20();
  return;
}



// ============================================================
// 01652930
// ============================================================
// Function: FUN_01652930
// Address: 01652930
// Size: 612 bytes
// Class: MULSSGenerator

void FUN_01652930(void* param_1,uint param_2)

{
  uint uVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  uint local_6c;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  uint8_t local_31;
  
  if (*(int64_t *)(this_ptr + 0xa8) != 0) {
    local_31 = *(int *)(*(int64_t *)(this_ptr + 0x98) + 0xc) == 0;
    local_6c = param_2;
    FUN_01650330();
    local_40 = local_c0;
    pvVar2 = _pthread_getspecific(param_1);
    if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
      param_1 = (void*)local_40;
    }
    FUN_01650330();
    local_58 = local_b0;
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    local_50 = local_68;
    local_48 = 0;
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    uVar1 = local_6c;
    local_48 = '\x01';
    local_90 = *arg1;
    local_88 = '\0';
    local_80 = 0;
    local_78 = '\0';
    FUN_012f0b60(&local_90,&local_50,1,local_6c & 0xff,&local_80);
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((char)uVar1 != '\0') {
      FUN_01651f90();
    }
  }
  return;
}



// ============================================================
// 01bd9880
// ============================================================
// Function: FUN_01bd9880
// Address: 01bd9880
// Size: 856 bytes
// Class: MULSSGenerator

uint32_t FUN_01bd9880(void* param_1,byte param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  uint32_t uVar3;
  void *pvVar4;
  int64_t this_ptr;
  int iVar5;
  int64_t local_b8;
  char local_b0;
  int64_t local_68;
  char local_60;
  
  FUN_01bd8b20();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
      goto LAB_01bd98cb;
    }
  }
  else if (local_68 != 0) {
LAB_01bd98cb:
    FUN_01ca6970();
    if ((local_60 == '\0') && (local_68 != 0)) {
      FUN_00d50b00();
    }
    FUN_01ca8220();
    lVar1 = g_027e5c38;
    if (g_027e5c38 != 0) {
      FUN_00d50b00();
    }
    uVar3 = FUN_00d23d70();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = g_027e5c38;
    if ((param_2 & (byte)uVar3) == 1) {
      if (g_027e5c38 != 0) {
        FUN_00d50b00();
      }
      FUN_01cacbe0();
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (*(int64_t *)(this_ptr + 0x98) == 0) {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017f4540();
      }
      else {
        FUN_01bd2e70();
        if (lVar1 != 0) {
          FUN_00d50b00();
          if (0 < *(int *)(lVar1 + 0xc)) {
            iVar5 = 0;
            do {
              pvVar4 = _pthread_getspecific(param_1);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_017f4540();
              iVar5 = iVar5 + 1;
            } while (iVar5 < *(int *)(lVar1 + 0xc));
          }
          FUN_01be3b70();
          FUN_00d50b20();
        }
        FUN_01bd7b90();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    return uVar3;
  }
  return 0;
}



// ============================================================
// 0165e460
// ============================================================
// Function: FUN_0165e460
// Address: 0165e460
// Size: 518 bytes
// Class: MULSSGenerator

int FUN_0165e460(uint64_t param_1,void*param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  uint64_t uVar4;
  int64_t lVar5;
  void* pVar6;
  void*puVar7;
  char *pcVar8;
  uint8_t local_58 [12];
  uint32_t local_4c;
  int64_t in_stack_ffffffffffffffb8;
  char local_40 [8];
  char local_38 [8];
  
  puVar7 = local_58;
  FUN_0165cae0(puVar7);
  pVar6 = (void*)CONCAT71((int7)((uint64_t)puVar7 >> 8),local_40[0]);
  pcVar8 = local_38;
  if (local_40[0] != '\0') {
    pcVar8 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar8 = '\0';
  if ((local_40[0] != '\0') && (in_stack_ffffffffffffffb8 != 0)) {
    FUN_00d50b20();
  }
  if (in_stack_ffffffffffffffb8 == 0) {
    if (param_2 != (void*)0x0) {
      FUN_00e7bdb0();
      uVar4 = FUN_00e7c8b0();
      *param_2 = uVar4;
    }
    iVar1 = FUN_00e7cea0();
    iVar2 = iVar1 + 3;
    if (-1 < iVar1) {
      iVar2 = iVar1;
    }
    iVar2 = iVar2 >> 2;
  }
  else {
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e7b970();
    if (param_2 != (void*)0x0) {
      pvVar3 = _pthread_getspecific(pVar6);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123ffa0();
      FUN_00e7bdb0();
      uVar4 = FUN_00e7c8b0();
      *param_2 = uVar4;
    }
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_4c = FUN_0123ffa0();
    FUN_00e7c3c0();
    pvVar3 = _pthread_getspecific(pVar6);
    if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      in_stack_ffffffffffffffb8 =
           *(int64_t *)
            (in_stack_ffffffffffffffb8 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
    iVar1 = *(int *)(in_stack_ffffffffffffffb8 + 0x44);
    iVar2 = FUN_00e7cea0();
    iVar2 = iVar2 + iVar1;
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
  }
  return iVar2;
}



// ============================================================
// 0015ae00
// ============================================================
// Function: FUN_0015ae00
// Address: 0015ae00
// Size: 511 bytes
// Class: MULSSGenerator

void* FUN_0015ae00(void* param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  void *pvVar5;
  int64_t lVar6;
  void*this_ptr;
  int64_t local_80;
  char local_78;
  int64_t local_48;
  char local_40;
  
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_0015e7e0();
  (**(code **)(*plVar3 + 0x18))();
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00082580();
  (**(code **)(*plVar4 + 0x18))();
  FUN_004f7da0();
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
    plVar2 = (int64_t *)plVar3[0x11];
    plVar1 = plVar3;
  }
  else {
    plVar1 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    plVar2 = (int64_t *)plVar1[0x11];
  }
  if (plVar2 != plVar4) {
    FUN_00d50b00();
    plVar1[0x11] = (int64_t)plVar4;
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  pvVar5 = _pthread_getspecific(param_1);
  plVar4 = plVar3;
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    plVar4 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  FUN_004a11d0();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
      goto LAB_0015af5b;
    }
    if (plVar4[0x12] == 0) goto LAB_0015afb2;
    plVar4[0x12] = 0;
LAB_0015af9d:
    FUN_00d50b20();
  }
  else {
    local_40 = '\0';
LAB_0015af5b:
    lVar6 = plVar4[0x12];
    if (lVar6 != local_48) {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      plVar4[0x12] = local_48;
      if (lVar6 != 0) goto LAB_0015af9d;
    }
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
LAB_0015afb2:
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  *this_ptr = plVar3;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  return this_ptr;
}



// ============================================================
// 016553c0
// ============================================================
// Function: FUN_016553c0
// Address: 016553c0
// Size: 757 bytes
// Class: MULSSGenerator

double FUN_016553c0(double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  void *pvVar4;
  void* in_ECX;
  int64_t this_ptr;
  double dVar5;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  double local_38;
  
  FUN_016557b0();
  pvVar4 = _pthread_getspecific(in_ECX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8a10();
  pvVar4 = _pthread_getspecific(in_ECX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01710460();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((*(char *)(this_ptr + 0x60) == '\0') || (local_48 == 0)) {
    local_38 = (param_1 - *(double *)(this_ptr + 0x50)) / *(double *)(this_ptr + 0x68) +
               *(double *)(this_ptr + 0x40);
  }
  else {
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01650210();
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar5 = (double)FUN_016c25f0(param_1);
    dVar1 = *(double *)(this_ptr + 0x68);
    dVar2 = *(double *)(this_ptr + 0x70);
    dVar3 = *(double *)(this_ptr + 0x78);
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_38 = (double)FUN_016c26c0(dVar2 + (dVar5 - dVar3) / dVar1);
    if (local_48 != 0) {
      FUN_00d50b20();
    }
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  return local_38;
}



// ============================================================
// 01656080
// ============================================================
// Function: FUN_01656080
// Address: 01656080
// Size: 757 bytes
// Class: MULSSGenerator

double FUN_01656080(double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  void *pvVar4;
  void* in_ECX;
  int64_t this_ptr;
  double dVar5;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  double local_38;
  
  FUN_016557b0();
  pvVar4 = _pthread_getspecific(in_ECX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8a10();
  pvVar4 = _pthread_getspecific(in_ECX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01710460();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((*(char *)(this_ptr + 0x60) == '\0') || (local_48 == 0)) {
    local_38 = (param_1 - *(double *)(this_ptr + 0x40)) * *(double *)(this_ptr + 0x68) +
               *(double *)(this_ptr + 0x50);
  }
  else {
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01650210();
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar5 = (double)FUN_016c25f0(param_1);
    dVar1 = *(double *)(this_ptr + 0x78);
    dVar2 = *(double *)(this_ptr + 0x68);
    dVar3 = *(double *)(this_ptr + 0x70);
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_38 = (double)FUN_016c26c0(dVar1 + (dVar5 - dVar3) * dVar2);
    if (local_48 != 0) {
      FUN_00d50b20();
    }
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  return local_38;
}



// ============================================================
// 0165a0f0
// ============================================================
// Function: FUN_0165a0f0
// Address: 0165a0f0
// Size: 659 bytes
// Class: MULSSGenerator

void FUN_0165a0f0(void* param_1,char param_2)

{
  char cVar1;
  void *pvVar2;
  char unaff_SIL;
  int64_t this_ptr;
  int64_t local_40;
  char local_38;
  
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01652840();
  if (*(char *)(this_ptr + 0xa5) == '\0') {
    if (unaff_SIL != '\0') {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c8a10();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar1 = FUN_0170f810();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (cVar1 == '\0') {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0164e2c0();
        FUN_01689d90();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      *(void*)(this_ptr + 0xa3) = 1;
    }
    if (param_2 != '\0') {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c8a10();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar1 = FUN_0170fee0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (cVar1 == '\0') {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0164e2c0();
        FUN_01689d90();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      *(void*)(this_ptr + 0xa4) = 1;
    }
  }
  return;
}



// ============================================================
// 012f8ad0
// ============================================================
// Function: FUN_012f8ad0
// Address: 012f8ad0
// Size: 658 bytes
// Class: MULSSGenerator

uint64_t FUN_012f8ad0(uint64_t param_1)

{
  void *pvVar1;
  void* in_ECX;
  int64_t this_ptr;
  uint64_t uVar2;
  uint64_t local_60;
  int64_t local_58;
  char local_50;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x60) == 0) {
    if (*(int64_t *)(this_ptr + 0x58) != 0) {
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e8920();
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      FUN_012e8920();
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        pvVar1 = _pthread_getspecific(in_ECX);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar1 = _pthread_getspecific(in_ECX);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016c25f0(param_1);
        local_60 = FUN_016c26c0();
      }
      if (local_40 != 0) {
        FUN_00d50b20();
        FUN_00d50b20();
        param_1 = local_60;
      }
    }
    return param_1;
  }
  pvVar1 = _pthread_getspecific(in_ECX);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar2 = FUN_01656080(param_1);
  return uVar2;
}



// ============================================================
// 012f8e60
// ============================================================
// Function: FUN_012f8e60
// Address: 012f8e60
// Size: 658 bytes
// Class: MULSSGenerator

uint64_t FUN_012f8e60(uint64_t param_1)

{
  void *pvVar1;
  void* in_ECX;
  int64_t this_ptr;
  uint64_t uVar2;
  uint64_t local_60;
  int64_t local_58;
  char local_50;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x60) == 0) {
    if (*(int64_t *)(this_ptr + 0x58) != 0) {
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e8920();
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      FUN_012e8920();
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        pvVar1 = _pthread_getspecific(in_ECX);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar1 = _pthread_getspecific(in_ECX);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016c25f0(param_1);
        local_60 = FUN_016c26c0();
      }
      if (local_40 != 0) {
        FUN_00d50b20();
        FUN_00d50b20();
        param_1 = local_60;
      }
    }
    return param_1;
  }
  pvVar1 = _pthread_getspecific(in_ECX);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar2 = FUN_016553c0(param_1);
  return uVar2;
}



// ============================================================
// 0131ba70
// ============================================================
// Function: FUN_0131ba70
// Address: 0131ba70
// Size: 512 bytes
// Class: MULSSGenerator

byte FUN_0131ba70(int64_t *param_1,uint64_t param_2,uint8_t param_3,uint8_t param_4)

{
  int64_t lVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  void*arg1;
  int64_t this_ptr;
  int64_t lVar7;
  uint64_t local_d8;
  uint8_t local_d0;
  uint64_t local_c8;
  uint8_t local_c0;
  int64_t local_b8;
  uint8_t local_b0;
  uint64_t local_a8;
  uint8_t local_a0;
  uint64_t local_98;
  uint8_t local_90;
  uint64_t local_88;
  uint8_t local_80;
  uint64_t local_78;
  uint8_t local_70;
  int64_t local_68;
  uint64_t local_60;
  uint32_t local_58;
  
  if (this_ptr != 0) {
    FUN_00d50b00();
  }
  local_d8 = *arg1;
  local_d0 = 0;
  bVar2 = FUN_013157a0(param_3,&local_d8,1);
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    local_70 = 0;
    local_78 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = lVar1;
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar7 = 0;
      do {
        local_c8 = *(void*)(*(int64_t *)(lVar1 + 0x10) + lVar7 * 8);
        local_c0 = 0;
        local_78 = local_c8;
        cVar3 = FUN_01316d80();
        if (cVar3 == '\0') {
          bVar2 = 0;
        }
        lVar7 = lVar7 + 1;
        local_60 = CONCAT44(local_60._4_4_,(int)lVar7);
      } while ((int)lVar7 < *(int *)(lVar1 + 0xc));
    }
    FUN_00115e00();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x38);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_b0 = 1;
  local_b8 = lVar1;
  FUN_01317d70();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  local_a8 = *arg1;
  local_a0 = 0;
  bVar4 = FUN_01319320(param_4,0);
  local_98 = *arg1;
  local_90 = 0;
  bVar5 = FUN_01319960();
  local_88 = *arg1;
  local_80 = 0;
  bVar6 = FUN_0131a710();
  return bVar6 & bVar5 & bVar4 & bVar2;
}



// ============================================================
// 01bd8c50
// ============================================================
// Function: FUN_01bd8c50
// Address: 01bd8c50
// Size: 557 bytes
// Class: MULSSGenerator

void FUN_01bd8c50(uint64_t param_1,float param_2)

{
  int iVar1;
  int iVar2;
  char in_DL;
  int64_t lVar3;
  int unaff_ESI;
  int64_t this_ptr;
  int64_t lVar4;
  int iVar5;
  uint64_t local_40;
  uint8_t local_38;
  
  lVar4 = *(int64_t *)(this_ptr + 0x90);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00c8e4f0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00c92170();
  FUN_00c92160();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x4d8))();
  iVar5 = 1;
  if (*(int64_t **)(this_ptr + 0x88) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x4a0))();
    iVar1 = *(int *)(local_40 + 0xc);
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    if (iVar1 != 0 && 0.0 < param_2) {
      iVar1 = FUN_00e7d780(param_2 / g_0241df1c);
      iVar5 = 1;
      if (0 < iVar1) {
        iVar5 = iVar1;
      }
    }
  }
  if (in_DL == '\0') {
    FUN_00c8e340();
  }
  iVar1 = *(int *)(local_40 + 0x18);
  lVar4 = (int64_t)iVar1;
  iVar2 = iVar1 + 3;
  if (-1 < lVar4) {
    iVar2 = iVar1;
  }
  if (3 < lVar4) {
    iVar2 = iVar2 >> 2;
    lVar3 = 0;
    do {
      if (*(int *)(*(int64_t *)(local_40 + 0x10) + lVar3 * 4) == unaff_ESI) goto LAB_01bd8de0;
      lVar3 = lVar3 + 1;
    } while (iVar2 != (int)lVar3);
  }
  FUN_00c8e340(iVar2,1);
  *(int *)(*(int64_t *)(local_40 + 0x10) + lVar4) = unaff_ESI;
LAB_01bd8de0:
  while( true ) {
    iVar1 = *(int *)(local_40 + 0x18);
    iVar2 = iVar1 + 3;
    if (-1 < iVar1) {
      iVar2 = iVar1;
    }
    if (iVar2 >> 2 <= iVar5) break;
    FUN_00e7b4e0();
    FUN_00c921e0();
  }
  FUN_01bd0ba0();
  FUN_00d50b20();
  return;
}



// ============================================================
// 0165b1b0
// ============================================================
// Function: FUN_0165b1b0
// Address: 0165b1b0
// Size: 584 bytes
// Class: MULSSGenerator

void FUN_0165b1b0(uint64_t param_1,uint64_t param_2,void* param_3)

{
  void*puVar1;
  void *pvVar2;
  int64_t lVar3;
  void* pVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t *arg1;
  void*puVar7;
  int64_t lVar8;
  
  if (*arg1 == 0) {
    if (param_1 >> 0x20 == 0) {
      return;
    }
    pvVar2 = _pthread_getspecific((void*)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012502a0(param_1,param_2,0);
    return;
  }
  if (param_2 >> 0x20 == 0) {
    return;
  }
  uVar5 = param_1;
  puVar1 = (void*)FUN_00e8fc40();
  pVar4 = (void*)uVar5;
  FUN_00d4ff40();
  *puVar1 = &g_025f6568;
  puVar1[7] = 0;
  *(void*)(puVar1 + 8) = 0;
  *(void*)((int64_t)puVar1 + 0x44) = 0;
  puVar1[9] = 0x100000000;
  FUN_00d500e0();
  pvVar2 = _pthread_getspecific(pVar4);
  if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
    lVar6 = *arg1;
    lVar8 = puVar1[7];
    puVar7 = puVar1;
    if (lVar8 == lVar6) goto LAB_0165b33b;
  }
  else {
    lVar6 = *arg1;
    lVar8 = ((void*)puVar1[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4])[7];
    puVar7 = (void*)puVar1[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
    if (lVar8 == lVar6) goto LAB_0165b33b;
  }
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  puVar7[7] = lVar6;
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
LAB_0165b33b:
  pvVar2 = _pthread_getspecific(pVar4);
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    puVar1 = (void*)puVar1[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  *(char *)(puVar1 + 8) = (char)param_3;
  pvVar2 = _pthread_getspecific(param_3);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012502a0(param_1,param_2,0);
  FUN_00d50b20();
  return;
}



// ============================================================
// 01657410
// ============================================================
// Function: FUN_01657410
// Address: 01657410
// Size: 636 bytes
// Class: MULSSGenerator

void FUN_01657410(void* param_1)

{
  int64_t lVar1;
  void *pvVar2;
  int64_t this_ptr;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar1 = *(int64_t *)(this_ptr + 0x90);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01713990();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
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
  FUN_016577d0();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x98);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017139d0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
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
  FUN_016577d0();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_01657c90();
  *(void*)(this_ptr + 100) = 1;
  if (*(char *)(this_ptr + 0xa5) == '\0') {
    *(void*)(this_ptr + 0xa2) = 0x101;
    *(void*)(this_ptr + 0xa4) = 1;
  }
  return;
}



// ============================================================
// 016577d0
// ============================================================
// Function: FUN_016577d0
// Address: 016577d0
// Size: 791 bytes
// Class: MULSSGenerator

void FUN_016577d0(void* param_1)

{
  void *pvVar1;
  int64_t *plVar2;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8a60();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_012e89e0();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6520();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  plVar2 = (int64_t *)FUN_00e8fc40();
  FUN_0013dd30();
  (**(code **)(*plVar2 + 0x18))();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cade0();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015058d0();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150f020();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 01656830
// ============================================================
// Function: FUN_01656830
// Address: 01656830
// Size: 710 bytes
// Class: MULSSGenerator

double FUN_01656830(double param_1)

{
  void *pvVar1;
  void* in_ECX;
  int64_t this_ptr;
  uint64_t uVar2;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  double local_38;
  
  FUN_016557b0();
  pvVar1 = _pthread_getspecific(in_ECX);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8a10();
  pvVar1 = _pthread_getspecific(in_ECX);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01710460();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((*(char *)(this_ptr + 0x60) == '\0') && (local_48 != 0)) {
    pvVar1 = _pthread_getspecific(in_ECX);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01650210();
    pvVar1 = _pthread_getspecific(in_ECX);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    pvVar1 = _pthread_getspecific(in_ECX);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c26c0(param_1);
    uVar2 = FUN_01656080();
    pvVar1 = _pthread_getspecific(in_ECX);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_38 = (double)FUN_016c25f0(uVar2);
    if (local_48 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = (param_1 - *(double *)(this_ptr + 0x70)) * *(double *)(this_ptr + 0x68) +
               *(double *)(this_ptr + 0x78);
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  return local_38;
}



// ============================================================
// 01656470
// ============================================================
// Function: FUN_01656470
// Address: 01656470
// Size: 710 bytes
// Class: MULSSGenerator

double FUN_01656470(double param_1)

{
  void *pvVar1;
  void* in_ECX;
  int64_t this_ptr;
  uint64_t uVar2;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  double local_38;
  
  FUN_016557b0();
  pvVar1 = _pthread_getspecific(in_ECX);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8a10();
  pvVar1 = _pthread_getspecific(in_ECX);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01710460();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((*(char *)(this_ptr + 0x60) == '\0') && (local_48 != 0)) {
    pvVar1 = _pthread_getspecific(in_ECX);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01650210();
    pvVar1 = _pthread_getspecific(in_ECX);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    pvVar1 = _pthread_getspecific(in_ECX);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c26c0(param_1);
    uVar2 = FUN_016553c0();
    pvVar1 = _pthread_getspecific(in_ECX);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_38 = (double)FUN_016c25f0(uVar2);
    if (local_48 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = (param_1 - *(double *)(this_ptr + 0x78)) / *(double *)(this_ptr + 0x68) +
               *(double *)(this_ptr + 0x70);
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  return local_38;
}



// ============================================================
// 0165cf20
// ============================================================
// Function: FUN_0165cf20
// Address: 0165cf20
// Size: 510 bytes
// Class: MULSSGenerator

uint64_t FUN_0165cf20(uint64_t param_1,void*param_2)

{
  void *pvVar1;
  uint64_t uVar2;
  int64_t lVar3;
  void* pVar4;
  uint64_t arg1;
  uint8_t local_58 [8];
  uint64_t local_50;
  uint64_t local_48;
  int64_t in_stack_ffffffffffffffc0;
  char local_38;
  
  pVar4 = (void*)local_58;
  FUN_0165d150();
  if (local_38 == '\0') {
    if (in_stack_ffffffffffffffc0 != 0) {
      FUN_00d50b00();
      goto LAB_0165cf72;
    }
  }
  else if (in_stack_ffffffffffffffc0 != 0) {
LAB_0165cf72:
    FUN_00e7b970();
    if (param_2 != (void*)0x0) {
      pvVar1 = _pthread_getspecific(pVar4);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123fff0();
      uVar2 = FUN_00e7c8b0();
      pvVar1 = _pthread_getspecific(pVar4);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_48 = FUN_0123ffb0();
      FUN_00e7bac0();
      *param_2 = uVar2;
    }
    pvVar1 = _pthread_getspecific(pVar4);
    if ((pvVar1 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
      in_stack_ffffffffffffffc0 =
           *(int64_t *)
            (in_stack_ffffffffffffffc0 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_50 = FUN_0123ffb0();
    FUN_00e7bac0();
    uVar2 = *(void*)(in_stack_ffffffffffffffc0 + 0x48);
    FUN_00e7b820();
    FUN_00d50b20();
    return uVar2;
  }
  if (param_2 != (void*)0x0) {
    FUN_00e7bdb0();
    uVar2 = FUN_00e7c8b0();
    *param_2 = uVar2;
  }
  return arg1;
}



// ============================================================
// 0165d800
// ============================================================
// Function: FUN_0165d800
// Address: 0165d800
// Size: 516 bytes
// Class: MULSSGenerator

double FUN_0165d800(double param_1)

{
  uint64_t uVar1;
  void *pvVar2;
  void* pVar3;
  void*puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint8_t local_60 [8];
  uint64_t local_58;
  int64_t local_50;
  char local_48;
  double local_40;
  int64_t local_38;
  char local_30;
  
  local_40 = param_1;
  FUN_0123fd00();
  uVar1 = FUN_00e7cd00(local_40);
  puVar4 = local_60;
  FUN_0165cae0(puVar4,uVar1,0,&local_58);
  local_38 = local_50;
  pVar3 = (void*)puVar4;
  if (local_48 == '\0') {
    if (local_50 == 0) {
      return local_40;
    }
    FUN_00d50b00();
  }
  local_30 = '\x01';
  if (local_38 != 0) {
    local_30 = '\x01';
    if (local_58 >> 0x20 != 0) {
      pVar3 = 0;
      local_50 = FUN_0165cf20(0,0);
      dVar5 = (double)FUN_00e7c860();
      if (dVar5 <= local_40) {
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        puVar4 = local_60;
        FUN_01253c10(puVar4,&local_38,&local_58);
        pVar3 = (void*)puVar4;
      }
    }
    dVar5 = (double)FUN_00e7c860();
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar6 = (double)FUN_00e7c860();
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_50 = FUN_0123ffb0();
    dVar7 = (double)FUN_00e7c860();
    local_40 = (local_40 - dVar6) / dVar7 + dVar5;
    if (local_30 == '\0') {
      return local_40;
    }
  }
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  return local_40;
}



// ============================================================
// 012e7210
// ============================================================
// Function: FUN_012e7210
// Address: 012e7210
// Size: 513 bytes
// Class: MULSSGenerator

int64_t * FUN_012e7210(void* param_1)

{
  int64_t lVar1;
  void *pvVar2;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar3;
  int iVar4;
  bool bVar5;
  int64_t local_90;
  char local_88;
  int64_t local_78;
  char local_70;
  
  lVar3 = *(int64_t *)(arg1 + 0xb0);
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  if (*(int *)(*(int64_t *)(arg1 + 0xa8) + 0xc) == 0) goto LAB_012e73eb;
  FUN_00243390();
  if (lVar3 == local_78) {
LAB_012e72aa:
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
    bVar5 = lVar3 != 0;
    lVar3 = local_78;
    if (bVar5) {
      FUN_00d50b20();
      goto LAB_012e72aa;
    }
  }
  else {
    bVar5 = lVar3 != 0;
    lVar3 = local_78;
    if (bVar5) {
      FUN_00d50b20();
    }
  }
  lVar1 = *(int64_t *)(arg1 + 0xa8);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar4 = 0;
      do {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e7210();
        if (local_88 == '\0') {
          if (local_90 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_88 = '\0';
        }
        FUN_00d214d0();
        if (local_90 != 0) {
          FUN_00d50b20();
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_000be170();
  }
LAB_012e73eb:
  *this_ptr = lVar3;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 004f9d80
// ============================================================
// Function: FUN_004f9d80
// Address: 004f9d80
// Size: 593 bytes
// Class: MULSSGenerator

int64_t * FUN_004f9d80(void* param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t *this_ptr;
  int64_t lVar4;
  int64_t local_70;
  char local_68;
  int64_t local_40;
  char local_38;
  
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  FUN_0025e9a0();
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  if (local_68 == '\0') {
    if (local_70 == 0) goto LAB_004f9fbe;
    FUN_00d50b00();
  }
  else if (local_70 == 0) goto LAB_004f9fbe;
  if (0 < *(int *)(local_70 + 0xc)) {
    lVar4 = 0;
    do {
      lVar1 = *(int64_t *)(*(int64_t *)(local_70 + 0x10) + lVar4 * 8);
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      lVar2 = *param_2;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 == lVar2) {
        local_38 = '\0';
        FUN_00d21140();
        local_40 = lVar1;
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < *(int *)(local_70 + 0xc));
  }
  FUN_001159b0();
  FUN_00d50b20();
LAB_004f9fbe:
  *this_ptr = local_70;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 01654a70
// ============================================================
// Function: FUN_01654a70
// Address: 01654a70
// Size: 537 bytes
// Class: MULSSGenerator

void FUN_01654a70(void* param_1)

{
  int64_t *plVar1;
  char cVar2;
  void *pvVar3;
  int64_t *arg1;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_50;
  char local_48;
  
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6000();
  if (*arg1 == local_80) {
    cVar2 = '\x01';
  }
  else if (*arg1 == 0) {
    cVar2 = '\0';
  }
  else {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6000();
    if (local_70 == 0) {
      cVar2 = '\0';
    }
    else {
      plVar1 = (int64_t *)*arg1;
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6000();
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      cVar2 = (**(code **)(*plVar1 + 0x50))();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5f80();
  }
  return;
}



// ============================================================
// 004faf60
// ============================================================
// Function: FUN_004faf60
// Address: 004faf60
// Size: 505 bytes
// Class: MULSSGenerator

void FUN_004faf60(void* param_1)

{
  void *pvVar1;
  int iVar2;
  int64_t *this_ptr;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  
  if (*this_ptr != 0) {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012f4ba0();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (local_50 != 0) {
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012f4ba0();
      local_50 = g_02708bf0;
      if (g_02708bf0 != 0) {
        FUN_00d50b00();
      }
      local_48 = '\0';
      FUN_00ca13a0();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    if (local_48 == '\0') {
      if (local_50 == 0) {
        return;
      }
      FUN_00d50b00();
    }
    else if (local_50 == 0) {
      return;
    }
    for (iVar2 = 0; iVar2 < *(int *)(local_50 + 0xc); iVar2 = iVar2 + 1) {
      FUN_004faf60();
    }
    FUN_000be170();
    FUN_00d50b20();
  }
  return;
}

