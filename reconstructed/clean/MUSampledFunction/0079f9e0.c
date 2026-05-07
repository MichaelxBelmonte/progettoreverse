// Function: FUN_0079f9e0
// Address: 0079f9e0
// Size: 9493 bytes
// Class: MUSampledFunction
// String references:
//   "MUSampledFunction"
//   "%I %%"
//   ">100 %%"
//   "%I %% - >100 %%"
//   "%I %% - %I %%"

void FUN_0079f9e0(void)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  int64_t *plVar7;
  uint8_t auVar8 [8];
  byte bVar9;
  char cVar10;
  uint8_t uVar11;
  int64_t *plVar12;
  void *pvVar13;
  void*puVar14;
  int64_t lVar15;
  void* pVar16;
  int iVar17;
  int64_t *plVar18;
  int64_t **pplVar19;
  int iVar20;
  uint64_t uVar21;
  int64_t this_ptr;
  int64_t *plVar22;
  uint64_t uVar23;
  uint64_t uVar24;
  int64_t lVar25;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float fVar26;
  uint32_t uVar27;
  uint64_t uVar28;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dd;
  float fVar29;
  float fVar30;
  uint8_t auVar31 [16];
  float fVar32;
  uint8_t auVar33 [16];
  float fVar34;
  uint8_t auVar35 [16];
  float fVar37;
  uint8_t auVar36 [16];
  int64_t *local_248;
  char local_240;
  int64_t *local_238;
  char local_230;
  int64_t *local_228;
  char local_220;
  int64_t local_218;
  char local_210;
  int64_t local_208;
  char local_200;
  int64_t local_1f8;
  char local_1f0;
  int64_t local_1e8;
  char local_1e0;
  int64_t *local_1d8;
  char local_1d0;
  int64_t *local_1c8;
  char local_1c0;
  uint8_t local_1b8 [8];
  float fStack_1b0;
  float fStack_1ac;
  int64_t *local_1a0;
  char local_198;
  int64_t *local_190;
  char local_188;
  int64_t *local_180;
  char local_178;
  int64_t *local_170;
  char local_168;
  int64_t *local_160;
  char local_158;
  int64_t *local_150;
  char local_148;
  int64_t *local_140;
  char local_138;
  int64_t *local_130;
  uint64_t local_128;
  uint32_t uStack_120;
  uint32_t uStack_11c;
  int64_t *local_110;
  int64_t local_108;
  char local_100;
  uint8_t local_f8 [16];
  void*local_e8;
  uint64_t local_e0;
  uint8_t local_d8 [8];
  float fStack_d0;
  float fStack_cc;
  int64_t *local_c0;
  double local_b8;
  int64_t local_b0;
  float local_a8;
  float local_a4;
  int64_t *local_a0;
  uint64_t local_98;
  uint64_t uStack_90;
  uint8_t local_88 [16];
  uint64_t local_78;
  int64_t *local_70;
  uint64_t local_68;
  int64_t *local_60;
  uint local_58;
  uint32_t local_54;
  int64_t *local_50;
  uint local_48;
  uint32_t local_44;
  uint32_t local_40;
  
  *(void*)(this_ptr + 0xa8) = 0;
  (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x928))(0);
  plVar12 = *(int64_t **)(this_ptr + 0x98);
  local_54 = FUN_00e7d780(*(float *)(this_ptr + 0xa8) * g_023908e0);
  local_58 = 1;
  local_60 = &g_024cc6f0;
  FUN_00d8cb40(extraout_XMM0_Da,&local_60);
  local_1a0 = local_50;
  local_198 = 0;
  if ((char)local_48 == '\0') {
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  local_198 = '\x01';
  (**(code **)(*plVar12 + 0x968))();
  if ((local_198 != '\0') && (local_1a0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x928))
            (g_02390124 - *(float *)(this_ptr + 0xac));
  plVar12 = *(int64_t **)(this_ptr + 0xa0);
  local_54 = FUN_00e7d780(*(float *)(this_ptr + 0xac) * g_023908e0);
  local_58 = 1;
  local_60 = &g_024cc6f0;
  FUN_00d8cb40(extraout_XMM0_Da_00,&local_60);
  local_190 = local_50;
  local_188 = 0;
  if ((char)local_48 == '\0') {
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  local_188 = '\x01';
  (**(code **)(*plVar12 + 0x968))();
  if ((local_188 != '\0') && (local_190 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x998))();
  (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x998))();
  (**(code **)(**(int64_t **)(this_ptr + 0xb0) + 0x998))();
  if (*(int64_t *)(this_ptr + 0xb8) != 0) {
    *(void*)(this_ptr + 0xb8) = 0;
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0xc0) != 0) {
    *(void*)(this_ptr + 0xc0) = 0;
    FUN_00d50b20();
  }
  FUN_00364b20();
  local_a0 = local_50;
  if ((char)local_48 == '\0') {
    if (local_50 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
    if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    iVar20 = *(int *)((int64_t)local_a0 + 0xc);
  }
  else {
    if (local_50 == (int64_t *)0x0) {
      return;
    }
    iVar20 = *(int *)((int64_t)local_50 + 0xc);
  }
  if (iVar20 < 2) goto LAB_007a1f52;
  local_68._4_4_ = (uint)((uint64_t)local_68 >> 0x20);
  local_78._4_4_ = (uint)((uint64_t)local_78 >> 0x20);
  plVar12 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar12 + 0x18))();
  lVar25 = *(int64_t *)(this_ptr + 0xb8);
  *(int64_t **)(this_ptr + 0xb8) = plVar12;
  if (lVar25 != 0) {
    FUN_00d50b20();
  }
  plVar12 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar12 + 0x18))();
  lVar25 = *(int64_t *)(this_ptr + 0xc0);
  *(int64_t **)(this_ptr + 0xc0) = plVar12;
  if (lVar25 != 0) {
    FUN_00d50b20();
  }
  plVar12 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar12 + 0x18))();
  local_110 = plVar12;
  plVar12 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar12 + 0x18))();
  local_c0 = plVar12;
  plVar12 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar12 + 0x18))();
  local_130 = plVar12;
  if (*(int *)((int64_t)local_a0 + 0xc) < 1) {
    local_68 = (int64_t *)((uint64_t)local_68._4_4_ << 0x20);
    local_78 = (int64_t *)((uint64_t)local_78._4_4_ << 0x20);
  }
  else {
    lVar25 = 0;
    local_78 = (int64_t *)((uint64_t)local_78._4_4_ << 0x20);
    local_68 = (int64_t *)((uint64_t)local_68._4_4_ << 0x20);
    do {
      lVar15 = *(int64_t *)(local_a0[2] + lVar25 * 8);
      plVar12 = local_a0;
      if (lVar15 != 0) {
        FUN_00d50b00();
      }
      pVar16 = (void*)plVar12;
      pvVar13 = _pthread_getspecific(pVar16);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      plVar12 = local_50;
      if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar12 != (int64_t *)0x0) {
        pvVar13 = _pthread_getspecific(pVar16);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01264240();
        pvVar13 = _pthread_getspecific(pVar16);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0134a500();
        plVar12 = local_50;
        if ((char)local_48 == '\0') {
          if (local_50 != (int64_t *)0x0) {
            FUN_00d50b00();
            if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_48 = local_48 & 0xffffff00;
        }
        if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar13 = _pthread_getspecific(pVar16);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        bVar9 = FUN_0141bac0();
        local_78 = (int64_t *)CONCAT44(local_78._4_4_,(int)local_78 + (uint)bVar9);
        local_68 = (int64_t *)CONCAT44(local_68._4_4_,(int)(float)local_68 + 1);
        if (plVar12 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      if (lVar15 != 0) {
        FUN_00d50b20();
      }
      lVar25 = lVar25 + 1;
    } while (lVar25 < *(int *)((int64_t)local_a0 + 0xc));
  }
  puVar14 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar14 = &g_025683c0;
  (*g_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  local_e8 = puVar14;
  if (*(int *)((int64_t)local_a0 + 0xc) < 1) {
LAB_007a0f4a:
    plVar18 = local_c0;
    plVar12 = local_110;
    if (*(int64_t *)(this_ptr + 0xb8) != 0) {
      *(void*)(this_ptr + 0xb8) = 0;
      FUN_00d50b20();
    }
    if (*(int64_t *)(this_ptr + 0xc0) != 0) {
      *(void*)(this_ptr + 0xc0) = 0;
      FUN_00d50b20();
    }
  }
  else {
    local_98 = CONCAT44(local_98._4_4_,(int)(float)local_68 / 2);
    lVar25 = 0;
    _local_d8 = ZEXT416((uint)g_02394274);
    do {
      plVar12 = *(int64_t **)(local_a0[2] + lVar25 * 8);
      plVar18 = local_a0;
      if (plVar12 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      pVar16 = (void*)plVar18;
      pvVar13 = _pthread_getspecific(pVar16);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      pvVar13 = _pthread_getspecific(pVar16);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dfcb0();
      pvVar13 = _pthread_getspecific(pVar16);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dd6a0();
      plVar18 = local_50;
      if ((char)local_48 == '\0') {
        if (local_50 != (int64_t *)0x0) {
          FUN_00d50b00();
          if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_48 = local_48 & 0xffffff00;
      }
      if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      pvVar13 = _pthread_getspecific(pVar16);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar10 = FUN_014bc070();
      if (cVar10 == '\0') {
        pvVar13 = _pthread_getspecific(pVar16);
        plVar22 = plVar18;
        if ((pvVar13 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          plVar22 = (int64_t *)plVar18[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
        }
        cVar10 = (**(code **)(*plVar22 + 0x3c0))();
        if (cVar10 == '\0') {
          pvVar13 = _pthread_getspecific(pVar16);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014bc240();
          plVar22 = local_50;
          if ((g_027c01a0 == '\0') && (iVar20 = ___cxa_guard_acquire(), iVar20 != 0)) {
            g_027af248 = FUN_001016a0();
            g_027af230 = "MUSampledFunction";
            g_027af238 = 0x58;
            g_027af240 = FUN_00101650;
            g_027af250 = 0;
            ram_00000000027af258 = 0;
            g_027af260 = 0;
            ram_00000000027af268 = 0;
            g_027af270 = 0;
            ram_00000000027af278 = 0;
            g_027af280 = 0;
            ram_00000000027af288 = 0;
            g_027af290 = 0;
            ram_00000000027af298 = 0;
            g_027af2a0 = 0;
            ram_00000000027af2a8 = 0;
            g_027af2b0 = 0;
            ram_00000000027af2b8 = 0;
            g_027af2c0 = 0;
            ram_00000000027af2c8 = 0;
            g_027af2d0 = 0;
            ram_00000000027af2d8 = 0;
            g_027af2e0 = 0;
            ram_00000000027af2e8 = 0;
            g_027af2f0 = 0;
            ___cxa_guard_release();
          }
          pplVar19 = (int64_t **)&g_02802688;
          if (plVar22 != (int64_t *)0x0) {
            (**(code **)(*plVar22 + 0x360))();
            cVar10 = FUN_00e85ea0();
            pplVar19 = &local_50;
            if (cVar10 == '\0') {
              pplVar19 = (int64_t **)&g_02802688;
            }
          }
          plVar22 = *pplVar19;
          if (*(char *)(pplVar19 + 1) == '\0') {
            if (plVar22 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            *(void*)(pplVar19 + 1) = 0;
          }
          pVar16 = (void*)pplVar19;
          if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          pvVar13 = _pthread_getspecific(pVar16);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014bc0d0();
          plVar7 = local_50;
          if ((g_027c01a0 == '\0') && (iVar20 = ___cxa_guard_acquire(), iVar20 != 0)) {
            g_027af248 = FUN_001016a0();
            g_027af230 = "MUSampledFunction";
            g_027af238 = 0x58;
            g_027af240 = FUN_00101650;
            g_027af250 = 0;
            ram_00000000027af258 = 0;
            g_027af260 = 0;
            ram_00000000027af268 = 0;
            g_027af270 = 0;
            ram_00000000027af278 = 0;
            g_027af280 = 0;
            ram_00000000027af288 = 0;
            g_027af290 = 0;
            ram_00000000027af298 = 0;
            g_027af2a0 = 0;
            ram_00000000027af2a8 = 0;
            g_027af2b0 = 0;
            ram_00000000027af2b8 = 0;
            g_027af2c0 = 0;
            ram_00000000027af2c8 = 0;
            g_027af2d0 = 0;
            ram_00000000027af2d8 = 0;
            g_027af2e0 = 0;
            ram_00000000027af2e8 = 0;
            g_027af2f0 = 0;
            ___cxa_guard_release();
          }
          pplVar19 = (int64_t **)&g_02802688;
          if (plVar7 != (int64_t *)0x0) {
            (**(code **)(*plVar7 + 0x360))();
            cVar10 = FUN_00e85ea0();
            pplVar19 = &local_50;
            if (cVar10 == '\0') {
              pplVar19 = (int64_t **)&g_02802688;
            }
          }
          local_68 = *pplVar19;
          if (*(char *)(pplVar19 + 1) == '\0') {
            if (local_68 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            *(void*)(pplVar19 + 1) = 0;
          }
          pVar16 = (void*)pplVar19;
          if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((plVar22 != (int64_t *)0x0) && (local_68 != (int64_t *)0x0)) {
            pvVar13 = _pthread_getspecific(pVar16);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013eb920();
            plVar7 = local_50;
            if (((char)local_48 == '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b00();
              if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            local_128 = plVar7;
            pvVar13 = _pthread_getspecific(pVar16);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013eb920();
            local_70 = local_50;
            if (((char)local_48 == '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b00();
              if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            uVar1 = *(uint *)(plVar7 + 3);
            uVar6 = uVar1;
            if ((int)uVar1 < 0) {
              uVar6 = uVar1 + 3;
            }
            if (uVar1 + 3 < 7) {
LAB_007a04d1:
              if (local_70 != (int64_t *)0x0) goto LAB_007a0573;
            }
            else {
              iVar20 = (int)local_70[3];
              iVar17 = iVar20 + 3;
              if (-1 < iVar20) {
                iVar17 = iVar20;
              }
              local_f8._0_4_ = (int)uVar6 >> 2;
              if (iVar17 >> 2 == (int)uVar6 >> 2) {
                pvVar13 = _pthread_getspecific(iVar17 >> 2);
                plVar7 = local_68;
                if ((pvVar13 != (void *)0x0) &&
                   (lVar15 = FUN_00e8b990(), plVar7 = local_68, lVar15 != 0)) {
                  plVar7 = (int64_t *)local_68[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
                }
                if ((int)uVar1 < 4) {
                  local_d8._4_4_ = (float)local_d8._4_4_ + 0.0;
                  local_d8._0_4_ = (float)local_d8._0_4_ + g_02394274;
                  fStack_d0 = fStack_d0 + 0.0;
                  fStack_cc = fStack_cc + 0.0;
                }
                else {
                  lVar15 = local_128[2];
                  uVar21 = (uint64_t)(uint)local_f8._0_4_;
                  fVar26 = g_02394274;
                  if (uVar21 - 1 < 3) {
                    uVar24 = 0;
                  }
                  else {
                    uVar24 = 0;
                    do {
                      fVar30 = *(float *)(lVar15 + uVar24 * 4);
                      if (fVar30 <= fVar26) {
                        fVar30 = fVar26;
                      }
                      fVar26 = *(float *)(lVar15 + 4 + uVar24 * 4);
                      if (fVar26 <= fVar30) {
                        fVar26 = fVar30;
                      }
                      fVar30 = *(float *)(lVar15 + 8 + uVar24 * 4);
                      if (fVar30 <= fVar26) {
                        fVar30 = fVar26;
                      }
                      fVar26 = *(float *)(lVar15 + 0xc + uVar24 * 4);
                      if (fVar26 <= fVar30) {
                        fVar26 = fVar30;
                      }
                      uVar24 = uVar24 + 4;
                    } while ((local_f8._0_4_ & 0xfffffffc) != uVar24);
                  }
                  if ((uint64_t)(local_f8._0_4_ & 3) != 0) {
                    uVar23 = 0;
                    fVar30 = fVar26;
                    do {
                      fVar26 = *(float *)(lVar15 + uVar24 * 4 + uVar23 * 4);
                      if (fVar26 <= fVar30) {
                        fVar26 = fVar30;
                      }
                      uVar23 = uVar23 + 1;
                      fVar30 = fVar26;
                    } while ((local_f8._0_4_ & 3) != uVar23);
                  }
                  lVar15 = local_128[2];
                  if ((int)(float)local_98 < (int)local_78) {
                    uVar24 = 0;
                    iVar20 = 0;
                    local_1b8._4_4_ = 0.0;
                    fStack_1b0 = 0.0;
                    fStack_1ac = 0.0;
                    local_1b8._0_4_ = g_02394274;
                    do {
                      fVar30 = *(float *)(lVar15 + uVar24 * 4);
                      fVar29 = fVar30 / fVar26;
                      fVar32 = *(float *)(local_70[2] + uVar24 * 4);
                      iVar20 = iVar20 + (uint)(fVar32 < g_023b4df0);
                      fVar34 = g_0239425c;
                      if (g_0239425c <= fVar32) {
                        fVar34 = fVar32;
                      }
                      fVar34 = fVar34 * fVar29 * fVar29;
                      auVar35 = insertps(ZEXT416((uint)fVar34),ZEXT416((uint)(fVar30 * fVar34)),0x10
                                        );
                      local_1b8._0_4_ = (float)local_1b8._0_4_ + auVar35._0_4_;
                      local_1b8._4_4_ = (float)local_1b8._4_4_ + auVar35._4_4_;
                      fStack_1b0 = fStack_1b0 + auVar35._8_4_;
                      fStack_1ac = fStack_1ac + auVar35._12_4_;
                      uVar24 = uVar24 + 1;
                    } while (uVar21 != uVar24);
                  }
                  else {
                    if (uVar21 == 1) {
                      uVar21 = 0;
                      auVar35 = ZEXT416((uint)g_02394274);
                    }
                    else {
                      uVar21 = 0;
                      auVar35 = ZEXT416((uint)g_02394274);
                      do {
                        fVar30 = *(float *)(lVar15 + uVar21 * 4);
                        fVar32 = *(float *)(lVar15 + 4 + uVar21 * 4);
                        fVar34 = fVar30 / fVar26;
                        fVar34 = fVar34 * fVar34;
                        auVar33 = insertps(ZEXT416((uint)fVar34),ZEXT416((uint)(fVar30 * fVar34)),
                                           0x10);
                        fVar34 = auVar35._4_4_;
                        fVar29 = auVar35._8_4_;
                        fVar37 = auVar35._12_4_;
                        fVar30 = fVar32 / fVar26;
                        fVar30 = fVar30 * fVar30;
                        auVar36 = insertps(ZEXT416((uint)fVar30),ZEXT416((uint)(fVar32 * fVar30)),
                                           0x10);
                        auVar35._0_4_ = auVar36._0_4_ + auVar33._0_4_ + auVar35._0_4_;
                        auVar35._4_4_ = auVar36._4_4_ + auVar33._4_4_ + fVar34;
                        auVar35._8_4_ = auVar36._8_4_ + auVar33._8_4_ + fVar29;
                        auVar35._12_4_ = auVar36._12_4_ + auVar33._12_4_ + fVar37;
                        uVar21 = uVar21 + 2;
                      } while ((local_f8._0_4_ & 0xfffffffe) != uVar21);
                    }
                    local_1b8._0_4_ = auVar35._0_4_;
                    local_1b8._4_4_ = auVar35._4_4_;
                    fStack_1b0 = auVar35._8_4_;
                    fStack_1ac = auVar35._12_4_;
                    if ((local_f8._0_4_ & 1) == 0) {
                      iVar20 = 0;
                    }
                    else {
                      iVar20 = 0;
                      fVar30 = *(float *)(lVar15 + uVar21 * 4);
                      fVar26 = fVar30 / fVar26;
                      fVar26 = fVar26 * fVar26;
                      auVar35 = insertps(ZEXT416((uint)fVar26),ZEXT416((uint)(fVar30 * fVar26)),0x10
                                        );
                      local_1b8._0_4_ = (float)local_1b8._0_4_ + auVar35._0_4_;
                      local_1b8._4_4_ = (float)local_1b8._4_4_ + auVar35._4_4_;
                      fStack_1b0 = fStack_1b0 + auVar35._8_4_;
                      fStack_1ac = fStack_1ac + auVar35._12_4_;
                    }
                  }
                  local_d8._4_4_ = (float)local_d8._4_4_ + (float)local_1b8._4_4_;
                  local_d8._0_4_ = (float)local_d8._0_4_ + (float)local_1b8._0_4_;
                  fStack_d0 = fStack_d0 + fStack_1b0;
                  fStack_cc = fStack_cc + fStack_1ac;
                  if (g_02394274 < (float)local_1b8._0_4_) {
                    local_b8 = (double)plVar7[10];
                    local_48 = local_48 & 0xffffff00;
                    pVar16 = local_f8._0_4_;
                    local_50 = plVar12;
                    uVar11 = FUN_00c9ff50();
                    local_88[0] = uVar11;
                    if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    if (local_88[0] == '\0') {
                      pvVar13 = _pthread_getspecific(pVar16);
                      if (pvVar13 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_0125e930();
                      if (local_50 == (int64_t *)0x0) {
                        auVar33._12_4_ = 0;
                        auVar33._0_12_ = local_88._4_12_;
                        local_88 = auVar33 << 0x20;
                      }
                      else {
                        pvVar13 = _pthread_getspecific(pVar16);
                        if (pvVar13 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        FUN_0125e930();
                        local_88._0_8_ = local_60;
                        pvVar13 = _pthread_getspecific(pVar16);
                        if (pvVar13 != (void *)0x0) {
                          local_88._0_8_ = local_60;
                          FUN_00e8b990();
                        }
                        uVar28 = FUN_0152e880();
                        local_88._0_4_ =
                             (int)CONCAT71((int7)((uint64_t)uVar28 >> 8),!NAN(extraout_XMM0_Da_01))
                        ;
                        if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                          FUN_00d50b20();
                        }
                      }
                      if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (local_88[0] == '\0') {
                        pvVar13 = _pthread_getspecific(pVar16);
                        if (pvVar13 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        uVar27 = FUN_01265b60();
                        local_88._0_4_ = uVar27;
                      }
                      else {
                        pvVar13 = _pthread_getspecific(pVar16);
                        if (pvVar13 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        FUN_0125e930();
                        local_88._0_8_ = local_50;
                        pvVar13 = _pthread_getspecific(pVar16);
                        if (pvVar13 != (void *)0x0) {
                          local_88._0_8_ = local_50;
                          FUN_00e8b990();
                        }
                        uVar27 = FUN_0152e880();
                        local_88._0_4_ = uVar27;
                        if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                          FUN_00d50b20();
                        }
                      }
                      local_b0 = *(void*)(this_ptr + 0xc0);
                      uVar27 = FUN_00d46dc0(local_88._0_4_);
                      local_178 = 0;
                      if ((char)local_58 == '\0') {
                        plVar7 = local_60;
                        if (local_60 != (int64_t *)0x0) {
                          local_e0 = local_60;
                          uVar27 = FUN_00d50b00();
                          plVar7 = local_e0;
                        }
                      }
                      else {
                        local_180 = local_60;
                        local_58 = local_58 & 0xffffff00;
                        plVar7 = local_180;
                      }
                      local_180 = plVar7;
                      local_178 = '\x01';
                      local_48 = local_48 & 0xffffff00;
                      local_50 = plVar12;
                      FUN_00ca0840(uVar27,&local_50);
                      if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if ((local_178 != '\0') && (local_180 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      local_b0 = (int64_t)*(int *)(local_e8 + 3);
                      FUN_00c8e340(local_b0,1);
                      *(void*)(local_e8[2] + local_b0) = local_88._0_4_;
                      lVar15 = local_b0;
                      uVar27 = FUN_00d46dc0(local_1b8._0_4_);
                      pVar16 = (void*)lVar15;
                      local_168 = 0;
                      if ((char)local_58 == '\0') {
                        plVar7 = local_60;
                        if (local_60 != (int64_t *)0x0) {
                          local_88._0_8_ = local_60;
                          uVar27 = FUN_00d50b00();
                          plVar7 = (int64_t *)local_88._0_8_;
                        }
                      }
                      else {
                        local_170 = local_60;
                        local_58 = local_58 & 0xffffff00;
                        plVar7 = local_170;
                      }
                      local_170 = plVar7;
                      local_168 = '\x01';
                      local_48 = local_48 & 0xffffff00;
                      local_50 = plVar12;
                      FUN_00ca0840(uVar27,&local_50);
                      if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if ((local_168 != '\0') && (local_170 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      uVar27 = FUN_00d46dc0((float)local_1b8._4_4_ / (float)local_1b8._0_4_);
                      local_158 = 0;
                      if ((char)local_58 == '\0') {
                        auVar8 = (uint8_t  [8])local_60;
                        if (local_60 != (int64_t *)0x0) {
                          local_1b8 = (uint8_t  [8])local_60;
                          uVar27 = FUN_00d50b00();
                          auVar8 = local_1b8;
                        }
                      }
                      else {
                        local_160 = local_60;
                        local_58 = local_58 & 0xffffff00;
                        auVar8 = (uint8_t  [8])local_160;
                      }
                      local_160 = (int64_t *)auVar8;
                      local_158 = '\x01';
                      local_48 = local_48 & 0xffffff00;
                      local_50 = plVar12;
                      FUN_00ca0840(uVar27,&local_50);
                      if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if ((local_158 != '\0') && (local_160 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      fVar26 = g_02390124;
                      if ((int)(float)local_98 < (int)local_78) {
                        pvVar13 = _pthread_getspecific(pVar16);
                        if (pvVar13 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        dVar4 = (double)FUN_014bb310();
                        dVar5 = (double)(local_f8._0_4_ - iVar20) / local_b8;
                        fVar30 = (float)((dVar5 / dVar4) * dVar5 * g_02394dd8);
                        fVar26 = g_02390124;
                        if (fVar30 <= g_02390124) {
                          fVar26 = fVar30;
                        }
                      }
                      uVar27 = FUN_00d46dc0(fVar26);
                      plVar7 = local_60;
                      local_148 = 0;
                      if ((char)local_58 == '\0') {
                        if (local_60 != (int64_t *)0x0) {
                          uVar27 = FUN_00d50b00();
                        }
                      }
                      else {
                        local_58 = local_58 & 0xffffff00;
                      }
                      local_148 = '\x01';
                      local_150 = plVar7;
                      local_48 = local_48 & 0xffffff00;
                      local_50 = plVar12;
                      FUN_00ca0840(uVar27,&local_50);
                      if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if ((local_148 != '\0') && (local_150 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                  }
                }
                goto LAB_007a04d1;
              }
LAB_007a0573:
              FUN_00d50b20();
            }
            if (local_128 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          if (local_68 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if (plVar22 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
      }
      if (plVar18 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (plVar12 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      lVar25 = lVar25 + 1;
    } while (lVar25 < *(int *)((int64_t)local_a0 + 0xc));
    local_128 = (int64_t *)CONCAT44(local_d8._4_4_,local_d8._4_4_);
    uStack_120 = fStack_cc;
    uStack_11c = fStack_cc;
    if ((float)local_d8._4_4_ < g_02394274) goto LAB_007a0f4a;
    if (*(int *)(local_e8 + 3) + 3U < 7) {
      local_f8._0_4_ = g_02390124;
    }
    else {
      puVar14 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar14 = &g_025f0d98;
      puVar14[2] = 0;
      puVar14[3] = 0;
      puVar14[4] = 0;
      puVar14[5] = 0;
      puVar14[6] = 0;
      puVar14[7] = 0;
      (*g_025f0db0)();
      iVar20 = *(int *)(local_e8 + 3);
      iVar17 = iVar20 + 3;
      if (-1 < iVar20) {
        iVar17 = iVar20;
      }
      uVar27 = FUN_015c22b0(local_e8,iVar17 >> 2);
      local_f8._0_4_ = uVar27;
      FUN_00d50b20();
    }
    bVar3 = (int)(float)local_98 < (int)local_78;
    FUN_00c9fe20();
    plVar12 = local_50;
    local_60 = (int64_t *)CONCAT71(local_60._1_7_,(char)local_48);
    pplVar19 = (int64_t **)&local_48;
    if ((char)local_48 == '\0') {
      pplVar19 = &local_60;
    }
    *(void*)pplVar19 = 0;
    if (((char)local_48 != '\0') && (plVar12 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_60 == '\0') && (plVar12 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    bVar2 = (int)local_78 <= (int)(float)local_98;
    local_98 = CONCAT71(local_98._1_7_,bVar2);
    local_78 = plVar12;
    if (0 < *(int *)((int64_t)plVar12 + 0xc)) {
      fVar26 = ((float)local_128 / (float)local_d8._0_4_) * (float)local_f8._0_4_;
      local_128 = (int64_t *)CONCAT44(local_128._4_4_,fVar26);
      local_f8._0_4_ = (float)local_f8._0_4_ * *(float *)(&g_023b81d8 + (uint64_t)bVar3 * 4);
      lVar25 = 0;
      do {
        plVar18 = *(int64_t **)(plVar12[2] + lVar25 * 8);
        if (plVar18 != (int64_t *)0x0) {
          fVar26 = (float)FUN_00d50b00();
        }
        local_240 = '\0';
        local_248 = plVar18;
        FUN_007a2fc0(fVar26,&local_248);
        uVar27 = FUN_00d459e0();
        local_70 = (int64_t *)CONCAT44(local_70._4_4_,uVar27);
        if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          uVar27 = FUN_00d50b20();
        }
        if ((local_240 != '\0') && (local_248 != (int64_t *)0x0)) {
          uVar27 = FUN_00d50b20();
        }
        local_230 = '\0';
        local_238 = plVar18;
        FUN_007a2fc0(uVar27,&local_238);
        uVar27 = FUN_00d459e0();
        local_68 = (int64_t *)CONCAT44(local_68._4_4_,uVar27);
        if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_230 != '\0') && (local_238 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        fVar26 = (float)local_128 / local_70._0_4_;
        if (fVar26 <= (float)local_f8._0_4_) {
          if ((float)local_68 < fVar26 && (char)local_98 == '\0') goto LAB_007a1257;
        }
        else {
          fVar30 = fVar26 / ((fVar26 / (float)local_f8._0_4_) * (fVar26 / (float)local_f8._0_4_));
          fVar26 = (float)local_68;
          if ((float)local_68 <= fVar30) {
            fVar26 = fVar30;
          }
          if ((float)local_68 < fVar26 && (char)local_98 == '\0') {
LAB_007a1257:
            local_70 = (int64_t *)CONCAT44(local_70._4_4_,fVar26);
            local_220 = '\0';
            local_228 = plVar18;
            FUN_007a2fc0(fVar26,&local_228);
            uVar27 = FUN_00d459e0();
            local_d8._0_4_ = uVar27;
            if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_220 != '\0') && (local_228 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            fVar30 = local_70._0_4_;
            if ((float)local_d8._0_4_ < g_02390124) {
              fVar30 = (float)_powf(local_70._0_4_);
            }
            fVar26 = (float)local_68;
            if ((float)local_68 <= fVar30) {
              fVar26 = fVar30;
            }
          }
        }
        uVar27 = FUN_00d46dc0(fVar26);
        plVar22 = local_60;
        local_138 = 0;
        if ((char)local_58 == '\0') {
          if (local_60 != (int64_t *)0x0) {
            uVar27 = FUN_00d50b00();
          }
        }
        else {
          local_58 = local_58 & 0xffffff00;
        }
        plVar12 = local_78;
        local_138 = '\x01';
        local_140 = plVar22;
        local_48 = local_48 & 0xffffff00;
        local_50 = plVar18;
        fVar26 = (float)FUN_00ca0840(uVar27,&local_50);
        if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          fVar26 = (float)FUN_00d50b20();
        }
        if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
          fVar26 = (float)FUN_00d50b20();
        }
        if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          fVar26 = (float)FUN_00d50b20();
        }
        if (plVar18 != (int64_t *)0x0) {
          fVar26 = (float)FUN_00d50b20();
        }
        lVar25 = lVar25 + 1;
      } while (lVar25 < *(int *)((int64_t)plVar12 + 0xc));
    }
    if (*(int64_t *)(this_ptr + 0xb8) != 0) {
      FUN_00c9fe20();
      plVar12 = local_50;
      pplVar19 = (int64_t **)&local_48;
      if ((char)local_48 == '\0') {
        pplVar19 = &local_60;
      }
      local_60 = (int64_t *)CONCAT71(local_60._1_7_,(char)local_48);
      *(void*)pplVar19 = 0;
      if (((char)local_48 != '\0') && (plVar12 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      iVar20 = *(int *)((int64_t)plVar12 + 0xc);
      if (((char)local_60 != '\0') && (plVar12 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (iVar20 != 0) {
        (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x998))();
        (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x998))();
      }
    }
    *(void*)(this_ptr + 0xa8) = 0x7fc000007fc00000;
    local_b8 = (double)((uint64_t)local_b8 & 0xffffffff00000000);
    if (*(int *)((int64_t)local_78 + 0xc) < 1) {
      local_88 = ZEXT416(g_02391078);
      _local_1b8 = ZEXT416(g_02391078);
      local_a4 = g_02391074;
      local_b0 = CONCAT44(local_b0._4_4_,g_02391074);
      local_a8 = 0.0;
      _local_d8 = ZEXT816(0);
      local_e0 = (int64_t *)((uint64_t)local_e0._4_4_ << 0x20);
      local_98 = 0;
      uStack_90 = 0;
    }
    else {
      lVar25 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_e0 = (int64_t *)((uint64_t)local_e0._4_4_ << 0x20);
      _local_d8 = ZEXT816(0);
      fVar26 = 0.0;
      local_a8 = 0.0;
      local_b0 = CONCAT44(local_b0._4_4_,g_02391074);
      local_a4 = g_02391074;
      _local_1b8 = ZEXT416(g_02391078);
      local_88 = ZEXT416(g_02391078);
      do {
        lVar15 = *(int64_t *)(local_78[2] + lVar25 * 8);
        plVar12 = local_78;
        if (lVar15 != 0) {
          fVar26 = (float)FUN_00d50b00();
        }
        pVar16 = (void*)plVar12;
        local_210 = '\0';
        local_218 = lVar15;
        fVar26 = (float)FUN_007a2fc0(fVar26,&local_218);
        plVar12 = local_50;
        if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          fVar26 = (float)FUN_00d50b20();
        }
        if ((local_210 != '\0') && (local_218 != 0)) {
          fVar26 = (float)FUN_00d50b20();
        }
        if (plVar12 != (int64_t *)0x0) {
          local_200 = '\0';
          local_208 = lVar15;
          FUN_007a2fc0(fVar26,&local_208);
          uVar27 = FUN_00d459e0();
          local_70 = (int64_t *)CONCAT44(local_70._4_4_,uVar27);
          if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            uVar27 = FUN_00d50b20();
          }
          if ((local_200 != '\0') && (local_208 != 0)) {
            uVar27 = FUN_00d50b20();
          }
          local_1f0 = '\0';
          local_1f8 = lVar15;
          FUN_007a2fc0(uVar27,&local_1f8);
          uVar27 = FUN_00d459e0();
          local_128 = (int64_t *)CONCAT44(local_128._4_4_,uVar27);
          if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_1f0 != '\0') && (local_1f8 != 0)) {
            FUN_00d50b20();
          }
          pvVar13 = _pthread_getspecific(pVar16);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar27 = FUN_01265b60();
          local_f8._0_4_ = uVar27;
          uVar27 = _logf((float)local_128);
          local_68 = (int64_t *)CONCAT44(local_68._4_4_,uVar27);
          uVar28 = _logf(local_70._0_4_);
          auVar36._8_4_ = extraout_XMM0_Dc;
          auVar36._0_8_ = uVar28;
          auVar36._12_4_ = extraout_XMM0_Dd;
          auVar31._4_12_ = auVar36._4_12_;
          auVar31._0_4_ = (float)uVar28 - (float)local_68;
          fVar26 = (float)((uint)auVar31._0_4_ & g_02390140);
          if (g_02394254 <= fVar26) {
            uVar27 = local_f8._0_4_;
            local_f8 = auVar31;
            fVar26 = (float)_logf(uVar27);
            fVar30 = (fVar26 - (float)local_68) / (float)local_f8._0_4_;
            fVar26 = 0.0;
            local_68 = (int64_t *)CONCAT44(local_68._4_4_,fVar30);
            if (0.0 <= fVar30) {
              local_1e0 = '\0';
              local_1e8 = lVar15;
              FUN_007a2fc0(0,&local_1e8);
              uVar27 = FUN_00d459e0();
              local_f8._0_4_ = uVar27;
              if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_1e0 != '\0') && (local_1e8 != 0)) {
                FUN_00d50b20();
              }
              fVar26 = g_02394244;
              if ((float)local_68 <= g_02394244) {
                fVar26 = (float)local_68;
              }
              if ((float)local_128 < local_70._0_4_) {
                fVar30 = fVar26;
                if ((float)local_88._0_4_ <= fVar26) {
                  fVar30 = (float)local_88._0_4_;
                }
                fVar32 = fVar26;
                if (fVar26 <= local_a4) {
                  fVar32 = local_a4;
                }
                local_a8 = local_a8 + fVar26 * (float)local_f8._0_4_;
                fVar26 = (float)local_d8._0_4_ + (float)local_f8._0_4_;
                local_d8._0_4_ = fVar26;
                local_88 = ZEXT416((uint)fVar30);
                local_a4 = fVar32;
              }
              else {
                fVar30 = fVar26;
                if ((float)local_1b8._0_4_ <= fVar26) {
                  fVar30 = (float)local_1b8._0_4_;
                }
                fVar32 = fVar26;
                if (fVar26 <= (float)local_b0) {
                  fVar32 = (float)local_b0;
                }
                local_e0 = (int64_t *)
                           CONCAT44(local_e0._4_4_,(float)local_e0 + fVar26 * (float)local_f8._0_4_)
                ;
                fVar26 = (float)local_98 + (float)local_f8._0_4_;
                local_98 = CONCAT44(local_98._4_4_,fVar26);
                _local_1b8 = ZEXT416((uint)fVar30);
                local_b0 = CONCAT44(local_b0._4_4_,fVar32);
              }
            }
          }
        }
        if (lVar15 != 0) {
          fVar26 = (float)FUN_00d50b20();
        }
        lVar25 = lVar25 + 1;
      } while (lVar25 < *(int *)((int64_t)local_78 + 0xc));
    }
    fVar30 = 0.0;
    fVar26 = 0.0;
    if (g_02394274 <= (float)local_d8._0_4_) {
      fVar30 = local_a8 / (float)local_d8._0_4_;
      fVar26 = local_a4;
    }
    local_68 = (int64_t *)CONCAT44(local_68._4_4_,fVar26);
    fVar26 = 0.0;
    if (g_02394274 <= (float)local_98) {
      fVar26 = (float)local_e0 / (float)local_98;
      local_b8 = (double)CONCAT44(local_b8._4_4_,(float)local_b0);
    }
    local_70 = (int64_t *)CONCAT44(local_70._4_4_,fVar26);
    fVar26 = g_02390124;
    if (fVar30 <= g_02390124) {
      fVar26 = fVar30;
    }
    (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x928))(fVar26);
    fVar26 = g_02390124;
    if (local_70._0_4_ <= g_02390124) {
      fVar26 = local_70._0_4_;
    }
    (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x928))(g_02390124 - fVar26);
    fVar26 = (float)(~-(uint)((float)local_d8._0_4_ < g_02394274) & local_88._0_4_);
    fVar30 = (float)(~-(uint)((float)local_98 < g_02394274) & local_1b8._0_4_);
    uVar1 = ~local_98._4_4_;
    local_98 = CONCAT44(uVar1 & local_1b8._4_4_,fVar30);
    if (((float)((uint)(fVar26 - (float)local_68) & g_02390140) < g_023b81d4) ||
       ((fVar32 = (float)local_68, g_02390124 <= fVar26 && (g_02390124 <= (float)local_68)))) {
      fVar32 = (fVar26 + (float)local_68) * g_0239011c;
      fVar26 = fVar32;
    }
    if (((float)((uint)(fVar30 - local_b8._0_4_) & g_02390140) < g_023b81d4) ||
       ((g_02390124 <= fVar30 && (g_02390124 <= local_b8._0_4_)))) {
      fVar30 = (fVar30 + local_b8._0_4_) * g_0239011c;
      local_98 = CONCAT44(uVar1 & local_1b8._4_4_,fVar30);
      local_b8 = (double)CONCAT44(local_b8._4_4_,fVar30);
    }
    uStack_90 = CONCAT44(~uStack_90._4_4_ & (uint)fStack_1ac,~(uint)uStack_90 & (uint)fStack_1b0);
    if (g_02394274 <= (float)((uint)(fVar26 - fVar32) & g_02390140)) {
      if (fVar32 <= g_02390124) {
        local_68 = (int64_t *)CONCAT44(local_68._4_4_,fVar32);
        uVar27 = FUN_00e7d780(fVar26 * g_023908e0);
        local_40 = FUN_00e7d780((float)local_68 * g_023908e0);
        local_48 = 2;
        local_50 = (int64_t *)&g_024c3df0;
        local_44 = uVar27;
        FUN_00d8cb40(&g_024c3df0,&local_50);
        plVar12 = local_60;
        if (local_60 == (int64_t *)0x0) goto LAB_007a1c2c;
        bVar3 = true;
        if ((char)local_58 == '\0') {
          FUN_00d50b00();
          if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_54 = FUN_00e7d780(fVar26 * g_023908e0);
        local_58 = 1;
        local_60 = &g_024cc6f0;
        FUN_00d8cb40(&g_024cc6f0,&local_60);
        plVar12 = local_50;
        if (local_50 == (int64_t *)0x0) goto LAB_007a1c2c;
        bVar3 = true;
        if ((char)local_48 == '\0') {
          FUN_00d50b00();
          if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
    }
    else if (fVar26 <= g_02390124) {
      local_54 = FUN_00e7d780(fVar26 * g_023908e0);
      local_58 = 1;
      local_60 = &g_024cc6f0;
      FUN_00d8cb40(&g_024cc6f0,&local_60);
      plVar12 = local_50;
      if (local_50 == (int64_t *)0x0) goto LAB_007a1c2c;
      bVar3 = true;
      if ((char)local_48 == '\0') {
        FUN_00d50b00();
        if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_00d8cb40(fVar26,g_025908a0);
      plVar12 = local_50;
      if (local_50 == (int64_t *)0x0) {
LAB_007a1c2c:
        bVar3 = false;
      }
      else {
        bVar3 = true;
        if ((char)local_48 == '\0') {
          FUN_00d50b00();
          if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
    }
    if (g_02394274 <= (float)((uint)((float)local_98 - local_b8._0_4_) & g_02390140)) {
      if (local_b8._0_4_ <= g_02390124) {
        uVar27 = FUN_00e7d780((float)local_98 * g_023908e0);
        local_40 = FUN_00e7d780(local_b8._0_4_ * g_023908e0);
        local_48 = 2;
        local_50 = (int64_t *)&g_024c3df0;
        local_44 = uVar27;
        FUN_00d8cb40(&g_024c3df0,&local_50);
        plVar18 = local_60;
        if (local_60 == (int64_t *)0x0) goto LAB_007a1e58;
        bVar2 = true;
        if ((char)local_58 == '\0') {
          FUN_00d50b00();
          if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_54 = FUN_00e7d780((float)local_98 * g_023908e0);
        local_58 = 1;
        local_60 = &g_024cc6f0;
        FUN_00d8cb40(&g_024cc6f0,&local_60);
        plVar18 = local_50;
        if (local_50 == (int64_t *)0x0) goto LAB_007a1e58;
        bVar2 = true;
        if ((char)local_48 == '\0') {
          FUN_00d50b00();
          if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
    }
    else if ((float)local_98 <= g_02390124) {
      local_54 = FUN_00e7d780((float)local_98 * g_023908e0);
      local_58 = 1;
      local_60 = &g_024cc6f0;
      FUN_00d8cb40(&g_024cc6f0,&local_60);
      plVar18 = local_50;
      if (local_50 == (int64_t *)0x0) goto LAB_007a1e58;
      bVar2 = true;
      if ((char)local_48 == '\0') {
        FUN_00d50b00();
        if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_00d8cb40((float)local_98,g_025908a0);
      plVar18 = local_50;
      if (local_50 == (int64_t *)0x0) {
LAB_007a1e58:
        bVar2 = false;
      }
      else {
        bVar2 = true;
        if ((char)local_48 == '\0') {
          FUN_00d50b00();
          if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
    }
    local_1d0 = '\0';
    local_1d8 = plVar12;
    (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0x968))();
    if ((local_1d0 != '\0') && (local_1d8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_1c0 = '\0';
    local_1c8 = plVar18;
    (**(code **)(**(int64_t **)(this_ptr + 0xa0) + 0x968))();
    if ((local_1c0 != '\0') && (local_1c8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((bVar2) && (plVar18 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((bVar3) && (plVar12 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    plVar12 = local_110;
    plVar18 = local_c0;
  }
  if (local_e8 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_130 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar18 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar12 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_007a1f52:
  FUN_00d50b20();
  return;
}

