// Function: FUN_015ba5e0
// Address: 015ba5e0
// Size: 3734 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_015ba5e0(void *param_1,uint64_t param_2,size_t param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  uint8_t auVar5 [16];
  float fVar6;
  float fVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  void *pvVar11;
  int64_t lVar12;
  int iVar13;
  void* pVar14;
  int iVar15;
  int64_t lVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  int64_t this_ptr;
  int64_t *plVar20;
  int64_t lVar21;
  uint64_t unaff_R12;
  undefined7 uVar23;
  uint64_t uVar22;
  uint uVar24;
  int64_t lVar25;
  bool bVar26;
  uint uVar27;
  uint32_t uVar28;
  float fVar29;
  float fVar30;
  uint64_t uVar31;
  uint8_t auVar32 [16];
  uint8_t auVar33 [16];
  uint8_t auVar34 [16];
  uint8_t auVar35 [16];
  float fVar36;
  uint8_t auVar37 [16];
  uint8_t auVar38 [16];
  uint8_t auVar39 [16];
  uint8_t auVar40 [16];
  uint8_t auVar41 [16];
  float fVar42;
  uint8_t auVar43 [16];
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  uint32_t local_80;
  uint32_t uStack_7c;
  char local_78;
  int64_t local_70;
  uint8_t local_68 [16];
  float local_4c;
  int64_t local_48;
  char local_40;
  float local_38;
  float local_34;
  uint64_t extraout_XMM0_Qb;
  
  fVar29 = *(float *)(this_ptr + 0xa8);
  fVar42 = *(float *)(this_ptr + 0xa4);
  local_68._0_4_ = g_0239011c;
  local_38 = *(float *)(this_ptr + 0xa0) + g_0239011c;
  FUN_00c8e690();
  lVar25 = local_48;
  if ((((local_40 == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40 != '\0')) &&
     (local_48 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  local_68._0_4_ = (float)local_68._0_4_ * fVar42;
  if (3 < (int)*(uint *)(lVar25 + 0x18)) {
    _memset_pattern16(param_1,(void *)((uint64_t)((*(uint *)(lVar25 + 0x18) >> 2) - 1) * 4 + 4),
                      param_3);
  }
  pVar14 = (void*)param_1;
  fVar36 = local_38 + (float)local_68._0_4_;
  if ((fVar29 == g_02390d34) && (!NAN(fVar29) && !NAN(g_02390d34))) {
    if ((fVar36 == g_02394244) && (!NAN(fVar36) && !NAN(g_02394244))) goto LAB_015ba6e7;
  }
  local_38 = fVar36;
  if (*(int *)(this_ptr + 0x40) != 3) {
    ___bzero();
    auVar32 = ZEXT416(g_023945e0 & (uint)fVar29) | g_023945f0;
    auVar32._0_4_ = auVar32._0_4_ + fVar29;
    auVar32 = roundss(ZEXT816(0),auVar32,0xb);
    uVar27 = -(uint)((float)((uint)(auVar32._0_4_ - fVar29) & g_02390140) < g_0239429c);
    auVar38._0_4_ = (uint)auVar32._0_4_ & uVar27;
    auVar38._4_4_ = auVar32._4_4_ & auVar32._4_4_ & _UNK_02390144;
    auVar38._8_4_ = auVar32._8_4_ & auVar32._8_4_ & _UNK_02390148;
    auVar38._12_4_ = auVar32._12_4_ & auVar32._12_4_ & _UNK_0239014c;
    uVar24 = *(uint *)(this_ptr + 0x44);
    fVar42 = (float)(int)uVar24;
    local_68 = ZEXT416(~uVar27 & (uint)fVar29) | auVar38;
    fVar29 = local_38;
    if (local_38 <= fVar42) {
      do {
        local_34 = fVar29;
        uVar27 = FUN_00e7d780();
        uVar24 = *(uint *)(this_ptr + 0x44);
        if (-1 < (int)uVar27) {
          uVar18 = (uint64_t)uVar27;
          if ((int)uVar27 < (int)uVar24) {
            *(float *)(*(int64_t *)(lVar25 + 0x10) + uVar18 * 4) =
                 (g_02390124 - (local_34 - (float)(int)uVar27)) +
                 *(float *)(*(int64_t *)(lVar25 + 0x10) + uVar18 * 4);
          }
          if ((int)uVar27 < (int)(uVar24 - 1)) {
            *(float *)(*(int64_t *)(lVar25 + 0x10) + 4 + uVar18 * 4) =
                 (local_34 - (float)(int)uVar27) +
                 *(float *)(*(int64_t *)(lVar25 + 0x10) + 4 + uVar18 * 4);
          }
        }
        fVar42 = (float)(int)uVar24;
        fVar29 = local_34 + (float)local_68._0_4_;
      } while (local_34 + (float)local_68._0_4_ <= fVar42);
    }
    fVar29 = local_38;
    if (local_38 <= fVar42) {
      do {
        local_34 = fVar29;
        uVar27 = FUN_00e7d780();
        uVar24 = *(uint *)(this_ptr + 0x44);
        if ((-1 < (int)uVar27) && ((int)uVar27 < (int)(uVar24 - 1))) {
          uVar18 = (uint64_t)uVar27;
          lVar12 = *(int64_t *)(lVar25 + 0x10);
          fVar29 = *(float *)(lVar12 + uVar18 * 4);
          if (((float)((uint)(fVar29 + g_02390118) & g_02390140) < g_02391094) &&
             ((fVar42 = *(float *)(lVar12 + 4 + uVar18 * 4),
              (float)((uint)(fVar42 + g_02390118) & g_02390140) < g_02391094 &&
              (fVar42 = (float)((uint)(fVar42 - fVar29) & g_02390140), fVar42 < g_02394288))))
          {
            local_4c = fVar29;
            _powf(fVar42 / g_02394288);
            uVar28 = _powf();
            *(void*)(lVar12 + uVar18 * 4) = uVar28;
            uVar28 = _powf();
            *(void*)(lVar12 + (uVar18 + 1) * 4) = uVar28;
          }
        }
        fVar29 = local_34 + (float)local_68._0_4_;
      } while (local_34 + (float)local_68._0_4_ <= (float)(int)uVar24);
    }
    if (0 < (int)uVar24) {
      lVar12 = *(int64_t *)(lVar25 + 0x10);
      uVar18 = (uint64_t)uVar24;
      if (uVar18 - 1 < 3) {
        fVar29 = 0.0;
        uVar17 = 0;
      }
      else {
        fVar29 = 0.0;
        uVar17 = 0;
        do {
          fVar42 = *(float *)(lVar12 + uVar17 * 4);
          if (fVar42 <= fVar29) {
            fVar42 = fVar29;
          }
          fVar29 = *(float *)(lVar12 + 4 + uVar17 * 4);
          if (fVar29 <= fVar42) {
            fVar29 = fVar42;
          }
          fVar42 = *(float *)(lVar12 + 8 + uVar17 * 4);
          if (fVar42 <= fVar29) {
            fVar42 = fVar29;
          }
          fVar29 = *(float *)(lVar12 + 0xc + uVar17 * 4);
          if (fVar29 <= fVar42) {
            fVar29 = fVar42;
          }
          uVar17 = uVar17 + 4;
        } while ((uVar24 & 0xfffffffc) != uVar17);
      }
      if ((uint64_t)(uVar24 & 3) != 0) {
        uVar19 = 0;
        fVar42 = fVar29;
        do {
          fVar29 = *(float *)(lVar12 + uVar17 * 4 + uVar19 * 4);
          if (fVar29 <= fVar42) {
            fVar29 = fVar42;
          }
          uVar19 = uVar19 + 1;
          fVar42 = fVar29;
        } while ((uVar24 & 3) != uVar19);
      }
      if (g_02394274 <= fVar29) {
        lVar12 = *(int64_t *)(lVar25 + 0x10);
        if (uVar24 < 4) {
          uVar17 = 0;
        }
        else {
          uVar17 = (uint64_t)(uVar24 & 0xfffffffc);
          auVar43._4_4_ = fVar29;
          auVar43._0_4_ = fVar29;
          auVar43._8_4_ = fVar29;
          auVar43._12_4_ = fVar29;
          uVar19 = (uVar17 - 4 >> 2) + 1;
          if (uVar17 - 4 == 0) {
            lVar16 = 0;
          }
          else {
            lVar21 = -(uVar19 & 0xfffffffffffffffe);
            lVar16 = 0;
            do {
              auVar32 = divps(*(uint8_t (*) [16])(lVar12 + lVar16 * 4),auVar43);
              *(uint8_t (*) [16])(lVar12 + lVar16 * 4) = auVar32;
              auVar32 = divps(*(uint8_t (*) [16])(lVar12 + 0x10 + lVar16 * 4),auVar43);
              *(uint8_t (*) [16])(lVar12 + 0x10 + lVar16 * 4) = auVar32;
              lVar16 = lVar16 + 8;
              lVar21 = lVar21 + 2;
            } while (lVar21 != 0);
          }
          if ((uVar19 & 1) != 0) {
            auVar32 = divps(*(uint8_t (*) [16])(lVar12 + lVar16 * 4),auVar43);
            *(uint8_t (*) [16])(lVar12 + lVar16 * 4) = auVar32;
          }
          if (uVar17 == uVar18) goto LAB_015bb337;
        }
        do {
          *(float *)(lVar12 + uVar17 * 4) = *(float *)(lVar12 + uVar17 * 4) / fVar29;
          uVar17 = uVar17 + 1;
        } while (uVar18 != uVar17);
      }
    }
LAB_015bb337:
    iVar9 = FUN_00e7d780();
    lVar16 = (int64_t)iVar9;
    lVar12 = *(int64_t *)(lVar25 + 0x10);
    fVar29 = *(float *)(lVar12 + lVar16 * 4);
    fVar42 = *(float *)(lVar12 + 4 + lVar16 * 4);
    fVar36 = fVar42;
    if (fVar42 <= fVar29) {
      fVar36 = fVar29;
    }
    if (g_02394274 <= fVar36) {
      *(float *)(lVar12 + lVar16 * 4) = fVar29 / fVar36;
      *(float *)(lVar12 + (lVar16 + 1) * 4) = fVar42 / fVar36;
    }
    auVar32 = g_02416630;
    uVar24 = *(uint *)(this_ptr + 0x44);
    if ((int)uVar24 < 1) goto LAB_015ba6e7;
    if (uVar24 < 8) {
      uVar18 = 0;
      fVar29 = g_0240d16c;
    }
    else {
      uVar18 = (uint64_t)(uVar24 & 0xfffffff8);
      uVar17 = (uVar18 - 8 >> 3) + 1;
      if (uVar18 - 8 == 0) {
        lVar16 = 0;
LAB_015bb429:
        pfVar1 = (float *)(lVar12 + lVar16 * 4);
        pfVar2 = (float *)(lVar12 + 0x10 + lVar16 * 4);
        auVar35._0_4_ = *pfVar1 * *pfVar1;
        auVar35._4_4_ = pfVar1[1] * pfVar1[1];
        auVar35._8_4_ = pfVar1[2] * pfVar1[2];
        auVar35._12_4_ = pfVar1[3] * pfVar1[3];
        auVar39._0_4_ = *pfVar2 * *pfVar2;
        auVar39._4_4_ = pfVar2[1] * pfVar2[1];
        auVar39._8_4_ = pfVar2[2] * pfVar2[2];
        auVar39._12_4_ = pfVar2[3] * pfVar2[3];
        auVar38 = maxps(g_02416630,auVar35);
        auVar32 = maxps(g_02416630,auVar39);
        *(uint8_t (*) [16])(lVar12 + lVar16 * 4) = auVar38;
        *(uint8_t (*) [16])(lVar12 + 0x10 + lVar16 * 4) = auVar32;
      }
      else {
        lVar21 = -(uVar17 & 0xfffffffffffffffe);
        lVar16 = 0;
        do {
          pfVar1 = (float *)(lVar12 + lVar16 * 4);
          pfVar2 = (float *)(lVar12 + 0x10 + lVar16 * 4);
          pfVar3 = (float *)(lVar12 + 0x20 + lVar16 * 4);
          fVar29 = pfVar3[1];
          fVar42 = pfVar3[2];
          fVar36 = pfVar3[3];
          pfVar4 = (float *)(lVar12 + 0x30 + lVar16 * 4);
          fVar30 = pfVar4[1];
          fVar6 = pfVar4[2];
          fVar7 = pfVar4[3];
          auVar37._0_4_ = *pfVar1 * *pfVar1;
          auVar37._4_4_ = pfVar1[1] * pfVar1[1];
          auVar37._8_4_ = pfVar1[2] * pfVar1[2];
          auVar37._12_4_ = pfVar1[3] * pfVar1[3];
          auVar40._0_4_ = *pfVar2 * *pfVar2;
          auVar40._4_4_ = pfVar2[1] * pfVar2[1];
          auVar40._8_4_ = pfVar2[2] * pfVar2[2];
          auVar40._12_4_ = pfVar2[3] * pfVar2[3];
          auVar43 = maxps(auVar32,auVar37);
          auVar38 = maxps(auVar32,auVar40);
          *(uint8_t (*) [16])(lVar12 + lVar16 * 4) = auVar43;
          *(uint8_t (*) [16])(lVar12 + 0x10 + lVar16 * 4) = auVar38;
          auVar41._0_4_ = *pfVar3 * *pfVar3;
          auVar41._4_4_ = fVar29 * fVar29;
          auVar41._8_4_ = fVar42 * fVar42;
          auVar41._12_4_ = fVar36 * fVar36;
          auVar38 = maxps(auVar32,auVar41);
          auVar5._4_4_ = fVar30 * fVar30;
          auVar5._0_4_ = *pfVar4 * *pfVar4;
          auVar5._8_4_ = fVar6 * fVar6;
          auVar5._12_4_ = fVar7 * fVar7;
          auVar43 = maxps(auVar32,auVar5);
          *(uint8_t (*) [16])(lVar12 + 0x20 + lVar16 * 4) = auVar38;
          *(uint8_t (*) [16])(lVar12 + 0x30 + lVar16 * 4) = auVar43;
          lVar16 = lVar16 + 0x10;
          lVar21 = lVar21 + 2;
        } while (lVar21 != 0);
        if ((uVar17 & 1) != 0) goto LAB_015bb429;
      }
      fVar29 = g_0240d16c;
      if (uVar18 == uVar24) goto LAB_015ba6e7;
    }
    do {
      fVar42 = *(float *)(lVar12 + uVar18 * 4);
      fVar42 = fVar42 * fVar42;
      fVar36 = fVar29;
      if (fVar29 <= fVar42) {
        fVar36 = fVar42;
      }
      *(float *)(lVar12 + uVar18 * 4) = fVar36;
      uVar18 = uVar18 + 1;
    } while (uVar24 != uVar18);
    goto LAB_015ba6e7;
  }
  local_70 = lVar25;
  pvVar11 = _pthread_getspecific(pVar14);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017ed3a0();
  if (local_48 == 0) {
    bVar26 = false;
  }
  else {
    pvVar11 = _pthread_getspecific(pVar14);
    if (pvVar11 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017ed3a0();
    pvVar11 = _pthread_getspecific(pVar14);
    if (pvVar11 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123f310();
    if (CONCAT44(uStack_7c,local_80) == 0) {
      bVar26 = false;
    }
    else {
      pvVar11 = _pthread_getspecific(pVar14);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017ed3a0();
      pvVar11 = _pthread_getspecific(pVar14);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123f310();
      pvVar11 = _pthread_getspecific(pVar14);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e7fb0();
      bVar26 = local_a0 != 0;
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_78 != '\0') && (CONCAT44(uStack_7c,local_80) != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (bVar26) {
    pvVar11 = _pthread_getspecific(pVar14);
    if (pvVar11 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017ed3a0();
    pvVar11 = _pthread_getspecific(pVar14);
    if (pvVar11 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123f310();
    pvVar11 = _pthread_getspecific(pVar14);
    if (pvVar11 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7fb0();
    pvVar11 = _pthread_getspecific(pVar14);
    if (pvVar11 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar31 = FUN_01510360(0,0,0);
    lVar25 = local_48;
    if (local_48 == 0) {
      lVar25 = 0;
      uVar22 = 0;
    }
    else {
      uVar23 = (undefined7)((uint64_t)unaff_R12 >> 8);
      if (local_40 == '\0') {
        uVar31 = FUN_00d50b00();
        uVar22 = CONCAT71(uVar23,1);
        if ((local_40 != '\0') && (local_48 != 0)) {
          uVar31 = FUN_00d50b20();
        }
      }
      else {
        local_40 = '\0';
        uVar22 = CONCAT71(uVar23,1);
      }
    }
    fVar36 = (float)uVar22;
    if ((local_78 != '\0') && (CONCAT44(uStack_7c,local_80) != 0)) {
      uVar31 = FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      uVar31 = FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      uVar31 = FUN_00d50b20();
    }
    if (lVar25 == 0) goto LAB_015baec0;
  }
  else {
    uVar22 = 0;
LAB_015baec0:
    fVar36 = (float)uVar22;
    uVar31 = FUN_0173ba80();
    lVar25 = local_48;
    if (local_48 == 0) {
      lVar25 = 0;
    }
    else {
      fVar36 = (float)CONCAT71((int7)((uint64_t)uVar22 >> 8),1);
      if (((local_40 == '\0') && (uVar31 = FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
        uVar31 = FUN_00d50b20();
      }
    }
  }
  local_80 = 0;
  local_68._0_8_ = lVar25;
  local_4c = fVar36;
  iVar9 = FUN_015bb7e0(uVar31,&local_80);
  if (1 < *(int *)(this_ptr + 0x44)) {
    iVar9 = iVar9 * 7;
    iVar13 = ((uint)(iVar9 / 6 + (iVar9 >> 0x1f)) >> 1) - (iVar9 >> 0x1f);
    uVar18 = (uint64_t)(uint)(iVar13 * 0xc);
    iVar9 = iVar9 + iVar13 * -0xc;
    fVar29 = ((fVar29 + g_023b1608) / g_023908ec) * g_0241f360;
    local_38 = g_02390124 - (float)(g_02390140 & (uint)fVar42);
    iVar9 = (iVar9 >> 0x1f & 0xfffffff4U) - iVar9;
    iVar13 = iVar9 + 0xfc;
    iVar9 = iVar9 + 0xf0;
    lVar25 = 1;
    uVar24 = 0xfc;
    do {
      pvVar11 = _pthread_getspecific((void*)uVar18);
      if ((pvVar11 == (void *)0x0) || (lVar12 = FUN_00e8b990(), lVar12 == 0)) {
        plVar20 = (int64_t *)local_68._0_8_;
      }
      else {
        uVar18 = local_68._0_8_;
        plVar20 = *(int64_t **)
                   (local_68._0_8_ + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
      }
      pVar14 = (void*)uVar18;
      iVar10 = (**(code **)(*plVar20 + 0x378))();
      if (iVar10 == -1000000) {
        local_34 = g_02390124;
        fVar36 = local_38;
        if (g_0239424c < fVar42) {
LAB_015bb249:
          local_34 = fVar36;
        }
      }
      else {
        pvVar11 = _pthread_getspecific(pVar14);
        if ((pvVar11 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
          pVar14 = local_68._0_4_;
        }
        FUN_01740240();
        if (local_40 == '\0') {
          fVar36 = g_02390124;
          if (local_48 == 0) goto LAB_015bb249;
          FUN_00d50b00();
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_34 = g_02390124;
          if (local_48 == 0) goto LAB_015bb24e;
        }
        if (fVar42 <= g_0239424c) {
LAB_015bb1d7:
          if (fVar42 < 0.0) {
            pvVar11 = _pthread_getspecific(pVar14);
            if (pvVar11 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar8 = FUN_01739620();
            local_34 = local_38;
            if (cVar8 != '\0') goto LAB_015bb237;
          }
          local_34 = g_02390124;
        }
        else {
          pvVar11 = _pthread_getspecific(pVar14);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar8 = FUN_01739620();
          local_34 = local_38;
          if (cVar8 != '\0') goto LAB_015bb1d7;
        }
LAB_015bb237:
        FUN_00d50b20();
      }
LAB_015bb24e:
      iVar15 = iVar13 + (uVar24 / 0xc) * -0xc;
      iVar10 = iVar9 + (uVar24 / 0xc) * -0xc;
      if (iVar15 < 7) {
        iVar10 = iVar15;
      }
      iVar15 = iVar10 + 0xc;
      if (-6 < iVar10) {
        iVar15 = iVar10;
      }
      iVar10 = -iVar15;
      if (0 < iVar15) {
        iVar10 = iVar15;
      }
      uVar18 = (uint64_t)(uint)(iVar10 * 2);
      fVar30 = g_02390d28 - (float)(iVar10 * 2);
      fVar36 = fVar30 + g_02390124;
      if (iVar15 < 1) {
        fVar36 = fVar30;
      }
      fVar36 = fVar36 - fVar29;
      if ((0.0 <= fVar36) && (fVar36 < g_02390124)) {
        fVar36 = fVar36 * local_34;
      }
      auVar33._0_8_ = _expf(uVar18,fVar36);
      auVar33._8_8_ = extraout_XMM0_Qb;
      auVar34._4_12_ = auVar33._4_12_;
      auVar34._0_4_ = ((float)auVar33._0_8_ + g_02390d00) / g_02411060;
      fVar30 = (float)_powf(auVar34._0_8_);
      fVar36 = g_0240d16c;
      if (g_0240d16c <= fVar30) {
        fVar36 = fVar30;
      }
      *(float *)(*(int64_t *)(local_70 + 0x10) + lVar25 * 4) = fVar36;
      lVar25 = lVar25 + 1;
      iVar13 = iVar13 + 7;
      uVar24 = uVar24 + 7;
      iVar9 = iVar9 + 7;
    } while (lVar25 < *(int *)(this_ptr + 0x44));
  }
  lVar25 = local_70;
  if ((local_4c._0_1_ != '\0') && (local_68._0_8_ != 0)) {
    FUN_00d50b20();
  }
LAB_015ba6e7:
  **(void**)(lVar25 + 0x10) = 0x3f800000;
  if (*(int64_t *)(this_ptr + 0x80) != lVar25) {
    FUN_00d64850();
    lVar12 = *(int64_t *)(this_ptr + 0x80);
    if (lVar12 != lVar25) {
      FUN_00d50b00();
      *(int64_t *)(this_ptr + 0x80) = lVar25;
      if (lVar12 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  FUN_00d50b20();
  return;
}

