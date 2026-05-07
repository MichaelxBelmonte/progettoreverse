// Function: FUN_01766120
// Address: 01766120
// Size: 4598 bytes
// Class: Unknown

void* FUN_01766120(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  void*puVar4;
  float *pfVar5;
  void*puVar6;
  bool bVar7;
  uint8_t auVar8 [16];
  bool bVar9;
  bool bVar10;
  bool bVar11;
  code *pcVar12;
  void*puVar13;
  void*puVar14;
  void*puVar15;
  void*puVar16;
  void*puVar17;
  void*puVar18;
  bool bVar19;
  uint uVar20;
  void*puVar21;
  void *pvVar22;
  void*puVar23;
  uint64_t uVar24;
  undefined7 uVar27;
  char *pcVar25;
  int64_t lVar26;
  void* pVar28;
  void*puVar29;
  char *pcVar30;
  void*puVar31;
  uint64_t uVar32;
  uint64_t uVar33;
  uint64_t uVar34;
  int64_t *arg1;
  void*this_ptr;
  uint64_t uVar35;
  int64_t lVar36;
  uint uVar37;
  uint32_t uVar38;
  float fVar39;
  float fVar40;
  uint64_t uVar41;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dc_00;
  uint extraout_XMM0_Dd;
  uint extraout_XMM0_Dd_00;
  float fVar42;
  float fVar43;
  uint uVar44;
  uint8_t local_a8 [8];
  uint uStack_a0;
  uint uStack_9c;
  uint64_t local_90;
  float local_78;
  char local_58 [8];
  void*local_50;
  char local_48 [8];
  uint64_t local_40;
  void*local_38;
  
  uVar2 = *(uint *)(*arg1 + 0xc);
  uVar35 = (uint64_t)uVar2;
  FUN_00c8e690();
  puVar13 = local_50;
  if ((((local_48[0] == '\0') && (local_50 != (void*)0x0)) &&
      (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  ___bzero();
  puVar21 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar21 = &g_02572358;
  pcVar12 = g_02572370;
  (*g_02572370)();
  FUN_00c8e690();
  puVar14 = local_50;
  if (((local_48[0] == '\0') && (local_50 != (void*)0x0)) &&
     ((FUN_00d50b00(), local_48[0] != '\0' && (local_50 != (void*)0x0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  FUN_00c8e690();
  puVar15 = local_50;
  if (((local_48[0] == '\0') && (local_50 != (void*)0x0)) &&
     ((FUN_00d50b00(), local_48[0] != '\0' && (local_50 != (void*)0x0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  FUN_00c8e690();
  puVar16 = local_50;
  if ((((local_48[0] == '\0') && (local_50 != (void*)0x0)) &&
      (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  FUN_00c8e690();
  puVar17 = local_50;
  if (((local_48[0] == '\0') && (local_50 != (void*)0x0)) &&
     ((FUN_00d50b00(), local_48[0] != '\0' && (local_50 != (void*)0x0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  FUN_00c8e690();
  puVar18 = local_50;
  if (((local_48[0] == '\0') && (local_50 != (void*)0x0)) &&
     ((FUN_00d50b00(), local_48[0] != '\0' && (local_50 != (void*)0x0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  local_40 = 0;
  local_38 = (void*)0x0;
  do {
    if ((int)uVar2 < 1) {
      local_40 = 0;
      local_38 = (void*)0x0;
      iVar3 = *(int *)((int64_t)puVar21 + 0xc);
      goto joined_r0x01767300;
    }
    uVar34 = local_40 & 0xffffffff;
    pcVar30 = *(char **)((int64_t)puVar13 + 0x10);
    if (*pcVar30 == '\0') {
      bVar7 = true;
      local_90 = 0;
      lVar36 = *arg1;
      iVar3 = *(int *)(lVar36 + 0xc);
    }
    else {
      uVar32 = 0;
      do {
        if (uVar35 - 1 == uVar32) goto LAB_01767082;
        local_90 = uVar32 + 1;
        lVar36 = uVar32 + 1;
        uVar32 = local_90;
      } while (pcVar30[lVar36] != '\0');
      bVar7 = (int64_t)local_90 < (int64_t)(int)uVar2;
      lVar36 = *arg1;
      iVar3 = *(int *)(lVar36 + 0xc);
    }
    if (0 < iVar3) {
      auVar8._12_4_ = 0;
      auVar8._0_12_ = stack0xffffffffffffff5c;
      _local_a8 = auVar8 << 0x20;
      uVar32 = 0;
      cVar1 = *pcVar30;
      while( true ) {
        if (cVar1 == '\0') {
          pVar28 = (void*)lVar36;
          pvVar22 = _pthread_getspecific(pVar28);
          if (pvVar22 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar39 = (float)FUN_01779a50();
          if ((float)local_a8._0_4_ < fVar39) {
            pvVar22 = _pthread_getspecific(pVar28);
            if (pvVar22 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar38 = FUN_01779a50();
            local_a8._0_4_ = uVar38;
            local_90 = uVar32 & 0xffffffff;
          }
        }
        uVar32 = uVar32 + 1;
        lVar36 = *arg1;
        if ((int64_t)*(int *)(lVar36 + 0xc) <= (int64_t)uVar32) break;
        cVar1 = *(char *)(*(int64_t *)((int64_t)puVar13 + 0x10) + uVar32);
      }
    }
    uVar24 = *(void*)(lVar36 + 0x10);
    pvVar22 = _pthread_getspecific((void*)uVar24);
    if (pvVar22 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar39 = (float)FUN_01779ec0();
    uVar32 = 0;
    _local_a8 = ZEXT416((uint)g_02394264);
    do {
      if (uVar32 != (local_90 & 0xffffffff)) {
        pvVar22 = _pthread_getspecific((void*)uVar24);
        if (pvVar22 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar41 = FUN_01779ec0();
        uVar20 = (uint)((uint64_t)uVar41 >> 0x20);
        for (fVar40 = (float)uVar41 - fVar39; fVar40 < 0.0; fVar40 = fVar40 + g_0239394c) {
        }
        for (; g_0239394c <= fVar40; fVar40 = fVar40 + g_02394218) {
        }
        fVar42 = (float)((uint)(fVar40 + g_02411df0) & g_02390140);
        if ((float)local_a8._0_4_ <= fVar42) {
          fVar42 = (float)local_a8._0_4_;
        }
        fVar40 = (float)((uint)(fVar40 + g_02411df4) & g_02390140);
        local_a8._4_4_ = uVar20 & _UNK_02390144;
        local_a8._0_4_ = fVar42;
        uStack_a0 = extraout_XMM0_Dc & _UNK_02390148;
        uStack_9c = extraout_XMM0_Dd & _UNK_0239014c;
        if (fVar40 < fVar42 + g_02390118) {
          local_a8._4_4_ = uVar20 & _UNK_02390144;
          local_a8._0_4_ = fVar40;
          uStack_a0 = extraout_XMM0_Dc & _UNK_02390148;
          uStack_9c = extraout_XMM0_Dd & _UNK_0239014c;
        }
      }
      uVar32 = uVar32 + 1;
    } while (uVar32 != uVar35);
    uVar32 = 0;
    do {
      if (*(char *)(*(int64_t *)((int64_t)puVar13 + 0x10) + uVar32) == '\0') {
        pvVar22 = _pthread_getspecific((void*)uVar24);
        if (pvVar22 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar39 = (float)FUN_01779ec0();
        uVar33 = 0;
        do {
          if (uVar33 != uVar32) {
            pvVar22 = _pthread_getspecific((void*)uVar24);
            if (pvVar22 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar41 = FUN_01779ec0();
            uVar20 = (uint)((uint64_t)uVar41 >> 0x20);
            for (fVar40 = (float)uVar41 - fVar39; fVar40 < 0.0; fVar40 = fVar40 + g_0239394c) {
            }
            for (; g_0239394c <= fVar40; fVar40 = fVar40 + g_02394218) {
            }
            fVar43 = (float)((uint)(fVar40 + g_02411df0) & g_02390140);
            uVar44 = uVar20 & _UNK_02390144;
            uVar37 = -(uint)(fVar43 < (float)local_a8._0_4_ + g_02390d00);
            fVar42 = (float)(~uVar37 & local_a8._0_4_ | (uint)fVar43 & uVar37);
            if (fVar43 < (float)local_a8._0_4_ + g_02390d00) {
              local_90 = uVar32;
            }
            local_90 = local_90 & 0xffffffff;
            local_a8._0_4_ = (uint)(fVar40 + g_02411df4) & g_02390140;
            if ((float)local_a8._0_4_ < fVar42 + g_02390d00) {
              local_a8._4_4_ = uVar20 & _UNK_02390144;
              uStack_a0 = extraout_XMM0_Dc_00 & _UNK_02390148;
              uStack_9c = extraout_XMM0_Dd_00 & _UNK_0239014c;
              local_90 = uVar32 & 0xffffffff;
            }
            else {
              local_a8._4_4_ = ~uVar44 & local_a8._4_4_ | uVar44;
              local_a8._0_4_ = fVar42;
              uStack_a0 = ~(extraout_XMM0_Dc_00 & _UNK_02390148) & uStack_a0 |
                          extraout_XMM0_Dc_00 & _UNK_02390148;
              uStack_9c = ~(extraout_XMM0_Dd_00 & _UNK_0239014c) & uStack_9c |
                          extraout_XMM0_Dd_00 & _UNK_0239014c;
            }
          }
          uVar33 = uVar33 + 1;
        } while (uVar33 != uVar35);
      }
      uVar32 = uVar32 + 1;
    } while (uVar32 != uVar35);
    puVar23 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar23 = &g_02572358;
    uVar24 = (*pcVar12)();
    uVar27 = (undefined7)((uint64_t)uVar24 >> 8);
    if (puVar23 == local_38) {
      if ((char)uVar34 == '\0') {
        local_40 = CONCAT71(uVar27,1);
        puVar23 = local_38;
      }
      else {
        FUN_00d50b20();
        puVar23 = local_38;
        local_40 = uVar34;
      }
    }
    else {
      local_40 = CONCAT71(uVar27,1);
      if (((char)uVar34 != '\0') && (local_38 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    local_48[0] = '\0';
    local_50 = puVar23;
    local_38 = puVar23;
    FUN_00d21140();
    if ((local_48[0] != '\0') && (local_50 != (void*)0x0)) {
      FUN_00d50b20();
    }
    puVar29 = (void*)(int64_t)(int)(void*)local_90;
    lVar36 = *(int64_t *)(*(int64_t *)(*arg1 + 0x10) + (int64_t)puVar29 * 8);
    if (lVar36 != 0) {
      FUN_00d50b00();
    }
    local_48[0] = '\0';
    local_50 = (void*)lVar36;
    FUN_00d21140();
    if ((local_48[0] != '\0') && (local_50 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (lVar36 != 0) {
      FUN_00d50b20();
    }
    pvVar22 = _pthread_getspecific((void*)local_90);
    if (pvVar22 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01779cd0(g_02390124);
    *(void*)(*(int64_t *)((int64_t)puVar13 + 0x10) + (int64_t)puVar29) = 1;
    puVar4 = *(void**)((int64_t)puVar18 + 0x10);
    puVar4[1] = 0;
    puVar31 = *(void**)((int64_t)puVar17 + 0x10);
    puVar31[1] = 0;
    *puVar4 = 0;
    *puVar31 = 0;
    **(void**)((int64_t)puVar15 + 0x10) = 0xffffffffffffffff;
    bVar10 = true;
    bVar19 = false;
    while( true ) {
      lVar36 = 0;
      bVar9 = true;
      do {
        bVar11 = bVar9;
        if (bVar11) {
          FUN_00d23340();
          puVar23 = local_50;
          local_58[0] = local_48[0];
          pcVar30 = local_58;
          pcVar25 = local_48;
          if (local_48[0] == '\0') {
            pcVar25 = pcVar30;
          }
          *pcVar25 = '\0';
          if ((local_48[0] != '\0') && (puVar23 != (void*)0x0)) {
            FUN_00d50b20();
          }
          pvVar22 = _pthread_getspecific((void*)pcVar30);
          if (pvVar22 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar20 = FUN_01779ac0();
          fVar39 = g_02411dfc;
          if ((local_58[0] != '\0') && (puVar23 != (void*)0x0)) {
            FUN_00d50b20();
            fVar39 = g_02411dfc;
          }
        }
        else {
          pvVar22 = _pthread_getspecific((void*)puVar31);
          if (pvVar22 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar20 = FUN_01779ac0();
          fVar39 = g_02411df8;
        }
        local_a8._0_4_ = fVar39;
        puVar31 = *(void**)(*arg1 + 0x10);
        pvVar22 = _pthread_getspecific((void*)puVar31);
        if (pvVar22 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar40 = (float)FUN_01779ec0();
        if (bVar11) {
          uVar34 = 0;
          local_78 = g_02394264;
          do {
            if (uVar34 != uVar20) {
              pvVar22 = _pthread_getspecific((void*)puVar31);
              if (pvVar22 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar42 = (float)FUN_01779ec0();
              for (fVar42 = fVar42 - fVar40; fVar42 < 0.0; fVar42 = fVar42 + g_0239394c) {
              }
              for (; g_0239394c <= fVar42; fVar42 = fVar42 + g_02394218) {
              }
              fVar43 = (float)((uint)(fVar42 - fVar39) & g_02390140);
              if (fVar43 < local_78) {
                **(float **)((int64_t)puVar14 + 0x10) = fVar43;
                **(void**)((int64_t)puVar15 + 0x10) = (int)uVar34;
                **(float **)((int64_t)puVar16 + 0x10) = fVar42;
                local_78 = fVar43;
              }
            }
            uVar34 = uVar34 + 1;
          } while (uVar34 != uVar35);
        }
        else {
          uVar34 = 0;
          local_78 = g_02394264;
          do {
            if (uVar34 != uVar20) {
              pvVar22 = _pthread_getspecific((void*)puVar31);
              if (pvVar22 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar42 = (float)FUN_01779ec0();
              for (fVar42 = fVar42 - fVar40; fVar42 < 0.0; fVar42 = fVar42 + g_0239394c) {
              }
              for (; g_0239394c <= fVar42; fVar42 = fVar42 + g_02394218) {
              }
              fVar43 = (float)((uint)(fVar42 - fVar39) & g_02390140);
              if (fVar43 < local_78) {
                *(float *)(*(int64_t *)((int64_t)puVar14 + 0x10) + lVar36 * 4) = fVar43;
                *(int *)(*(int64_t *)((int64_t)puVar15 + 0x10) + lVar36 * 4) = (int)uVar34;
                *(float *)(*(int64_t *)((int64_t)puVar16 + 0x10) + lVar36 * 4) =
                     g_0239394c - fVar42;
                local_78 = fVar43;
              }
            }
            uVar34 = uVar34 + 1;
          } while (uVar34 != uVar35);
        }
        lVar36 = 1;
        bVar9 = false;
      } while (bVar11);
      pfVar5 = *(float **)((int64_t)puVar14 + 0x10);
      bVar9 = *pfVar5 < pfVar5[1];
      if ((float)((uint)(pfVar5[1] - *pfVar5) & g_02390140) < g_02390124) {
        bVar9 = bVar10;
      }
      bVar10 = (bool)(bVar9 ^ 1);
      uVar34 = (uint64_t)bVar10;
      uVar20 = *(uint *)(*(int64_t *)((int64_t)puVar15 + 0x10) + uVar34 * 4);
      uVar32 = (uint64_t)uVar20;
      if ((((uVar20 == (void*)local_90) || (uVar20 == 0xffffffff)) ||
          (fVar39 = pfVar5[uVar34], g_023945a4 < fVar39)) ||
         ((((int)uVar20 < 0 || (*(int *)((int64_t)puVar13 + 0x18) <= (int)uVar20)) ||
          (*(char *)(*(int64_t *)((int64_t)puVar13 + 0x10) + uVar32) != '\0')))) break;
      lVar36 = *(int64_t *)(*(int64_t *)(*arg1 + 0x10) + uVar32 * 8);
      if (bVar9 == false) {
        if (lVar36 != 0) {
          fVar39 = (float)FUN_00d50b00();
        }
        local_48[0] = '\0';
        local_50 = (void*)lVar36;
        FUN_00d23370(fVar39,0);
        if ((local_48[0] != '\0') && (local_50 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (lVar36 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        if (lVar36 != 0) {
          FUN_00d50b00();
        }
        local_48[0] = '\0';
        local_50 = (void*)lVar36;
        FUN_00d21140();
        if ((local_48[0] != '\0') && (local_50 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (lVar36 != 0) {
          FUN_00d50b20();
        }
      }
      *(void*)(*(int64_t *)((int64_t)puVar13 + 0x10) + uVar32) = 1;
      lVar36 = *(int64_t *)((int64_t)puVar17 + 0x10);
      *(float *)(lVar36 + uVar34 * 4) = *(float *)(lVar36 + uVar34 * 4) + g_02411dfc;
      puVar31 = *(void**)((int64_t)puVar18 + 0x10);
      fVar39 = *(float *)(*(int64_t *)((int64_t)puVar16 + 0x10) + uVar34 * 4) +
               (float)puVar31[uVar34];
      puVar31[uVar34] = fVar39;
      fVar39 = (float)((uint)(fVar39 - *(float *)(lVar36 + uVar34 * 4)) & g_02390140) /
               g_0241b660 + g_02390124;
      pvVar22 = _pthread_getspecific((void*)puVar31);
      if (pvVar22 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar40 = g_02391090;
      if (g_02391090 <= fVar39) {
        fVar40 = fVar39;
      }
      _local_a8 = ZEXT416((uint)fVar40);
      FUN_01779cd0();
      bVar9 = !bVar19;
      bVar19 = true;
      if (bVar9) {
        puVar31 = puVar29;
        pvVar22 = _pthread_getspecific((void*)local_90);
        if (pvVar22 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01779cd0(fVar40);
        bVar19 = true;
      }
    }
    uVar34 = local_40;
  } while (bVar7);
LAB_01767082:
  local_40 = uVar34;
  iVar3 = *(int *)((int64_t)puVar21 + 0xc);
joined_r0x01767300:
  if (0 < iVar3) {
    lVar36 = 0;
    do {
      lVar26 = puVar21[2];
      puVar6 = *(void**)(lVar26 + lVar36 * 8);
      puVar23 = puVar21;
      if (local_38 == puVar6) {
        if (((char)local_40 == '\0') && (local_38 != (void*)0x0)) {
          local_40 = CONCAT71((int7)((uint64_t)lVar26 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (puVar6 != (void*)0x0) {
          lVar26 = FUN_00d50b00();
        }
        if (((char)local_40 == '\0') || (local_38 == (void*)0x0)) {
          local_40 = CONCAT71((int7)((uint64_t)lVar26 >> 8),1);
          local_38 = puVar6;
        }
        else {
          local_38 = puVar6;
          uVar24 = FUN_00d50b20();
          local_40 = CONCAT71((int7)((uint64_t)uVar24 >> 8),1);
        }
      }
      if (0 < *(int *)((int64_t)local_38 + 0xc)) {
        lVar26 = 0;
        do {
          while( true ) {
            pVar28 = (void*)puVar23;
            pvVar22 = _pthread_getspecific(pVar28);
            if (pvVar22 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01779bd0();
            if (lVar26 != 0) {
              pvVar22 = _pthread_getspecific(pVar28);
              if (pvVar22 != (void *)0x0) {
                FUN_00e8b990();
              }
              pvVar22 = _pthread_getspecific(pVar28);
              if (pvVar22 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01779ac0();
              FUN_01779b70();
            }
            puVar23 = (void*)((int64_t)*(int *)((int64_t)local_38 + 0xc) + -1);
            if ((int64_t)puVar23 <= lVar26) break;
            pvVar22 = _pthread_getspecific((void*)puVar23);
            if (pvVar22 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar22 = _pthread_getspecific((void*)puVar23);
            if (pvVar22 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01779ac0();
            FUN_01779b20();
            lVar26 = lVar26 + 1;
            if (*(int *)((int64_t)local_38 + 0xc) <= lVar26) goto LAB_017670a0;
          }
          lVar26 = lVar26 + 1;
        } while (lVar26 < *(int *)((int64_t)local_38 + 0xc));
      }
LAB_017670a0:
      lVar36 = lVar36 + 1;
    } while (lVar36 < *(int *)((int64_t)puVar21 + 0xc));
  }
  *this_ptr = puVar21;
  *(void*)(this_ptr + 1) = 1;
  if (puVar18 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar17 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar16 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar15 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar14 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_40 != '\0') && (local_38 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar13 != (void*)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

