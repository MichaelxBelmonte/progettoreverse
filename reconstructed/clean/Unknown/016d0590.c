// Function: FUN_016d0590
// Address: 016d0590
// Size: 2744 bytes
// Class: Unknown

double FUN_016d0590(double param_1,uint64_t param_2,size_t param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
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
  int iVar18;
  void *pvVar19;
  void *pvVar20;
  void*puVar21;
  void* pVar22;
  uint64_t in_RCX;
  void **ppvVar23;
  uint64_t uVar24;
  uint64_t uVar25;
  int64_t lVar26;
  int64_t lVar27;
  uint uVar28;
  int64_t lVar29;
  bool bVar30;
  float fVar31;
  uint64_t uVar32;
  double dVar33;
  double dVar34;
  uint8_t auVar35 [16];
  uint8_t auVar36 [16];
  uint8_t auVar37 [16];
  uint32_t uVar38;
  uint32_t uVar39;
  void *local_f0;
  uint8_t local_e8;
  uint64_t local_e0;
  void *local_d8;
  uint64_t local_d0;
  uint64_t local_c8;
  uint64_t local_c0;
  uint64_t local_b8;
  double local_b0;
  void *local_a8;
  uint local_9c;
  void*local_98;
  double local_90;
  double local_88;
  int local_7c;
  double local_78;
  void *local_70;
  char local_68;
  double local_60;
  void *local_58;
  void *local_50;
  void *local_48;
  void *local_40;
  char local_38 [8];
  
  local_78 = param_1;
  pvVar19 = _pthread_getspecific((void*)in_RCX);
  if (pvVar19 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0165be20();
  pvVar19 = _pthread_getspecific((void*)in_RCX);
  if (pvVar19 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_90 = (double)FUN_018fcb10();
  uVar32 = FUN_016cf050();
  local_a8 = local_40;
  if (local_38[0] == '\0') {
    if (local_40 == (void *)0x0) {
      return local_90;
    }
    uVar32 = FUN_00d50b00();
  }
  else if (local_40 == (void *)0x0) {
    return local_90;
  }
  local_f0 = local_a8;
  local_e8 = 0;
  FUN_016d0130(uVar32,&local_f0);
  local_58 = local_40;
  if ((local_38[0] == '\0') && (local_40 != (void *)0x0)) {
    FUN_00d50b00();
  }
  if (1 < *(int *)((int64_t)local_58 + 0xc)) {
    if (NAN(local_78)) {
      local_78 = (double)FUN_016cefb0();
    }
    pvVar19 = _pthread_getspecific((void*)in_RCX);
    if (pvVar19 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_60 = (double)FUN_01907950();
    FUN_00d23340();
    pvVar19 = local_40;
    pVar22 = (void*)CONCAT71((int7)((uint64_t)in_RCX >> 8),local_38[0]);
    ppvVar23 = &local_70;
    if (local_38[0] != '\0') {
      ppvVar23 = (void **)local_38;
    }
    local_70 = (void *)CONCAT71(local_70._1_7_,local_38[0]);
    *(char *)ppvVar23 = '\0';
    if ((local_38[0] != '\0') && (pvVar19 != (void *)0x0)) {
      FUN_00d50b20();
    }
    pvVar20 = _pthread_getspecific(pVar22);
    if (pvVar20 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_88 = (double)FUN_01907950();
    pvVar20 = _pthread_getspecific(pVar22);
    if (pvVar20 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_60 = (double)FUN_018fc680((local_60 + local_88) * g_023942d0);
    if (((char)local_70 != '\0') && (pvVar19 != (void *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00e7d850(local_60);
    local_e0 = FUN_00e7bcc0();
    pvVar19 = _pthread_getspecific(pVar22);
    if (pvVar19 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_60 = (double)FUN_018fcb10();
    iVar18 = FUN_00e7d850(g_02411990);
    local_7c = iVar18 * 4;
    FUN_00c8e690();
    pvVar19 = local_40;
    if ((((local_38[0] == '\0') && (local_40 != (void *)0x0)) &&
        (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (void *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00c92170();
    FUN_00c92160();
    local_48 = pvVar19;
    ___bzero();
    FUN_00c8e690();
    pvVar19 = local_40;
    if (((local_38[0] == '\0') && (local_40 != (void *)0x0)) &&
       ((FUN_00d50b00(), local_38[0] != '\0' && (local_40 != (void *)0x0)))) {
      FUN_00d50b20();
    }
    FUN_00c92170();
    FUN_00c92160();
    local_50 = pvVar19;
    if (3 < (int)*(uint *)((int64_t)pvVar19 + 0x18)) {
      _memset_pattern16(pvVar19,(void *)((uint64_t)((*(uint *)((int64_t)pvVar19 + 0x18) >> 2) - 1)
                                         * 4 + 4),param_3);
    }
    puVar21 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar21 = &g_025f0d98;
    puVar21[2] = 0;
    puVar21[3] = 0;
    puVar21[4] = 0;
    puVar21[5] = 0;
    puVar21[6] = 0;
    puVar21[7] = 0;
    uVar32 = (*g_025f0db0)();
    local_60 = local_60 + g_023b19a0;
    local_88 = g_023b4df8 / local_78;
    local_b0 = (double)iVar18 * g_023942d0;
    uVar32 = CONCAT71((int7)((uint64_t)uVar32 >> 8),1);
    local_98 = puVar21;
    do {
      local_9c = (uint)uVar32;
      if (1 < *(int *)((int64_t)local_58 + 0xc)) {
        lVar29 = 0;
        do {
          lVar27 = *(int64_t *)(*(int64_t *)((int64_t)local_58 + 0x10) + lVar29 * 8);
          pvVar19 = local_58;
          if (lVar27 != 0) {
            FUN_00d50b00();
          }
          pVar22 = (void*)pvVar19;
          pvVar19 = _pthread_getspecific(pVar22);
          if (pvVar19 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_40 = (void *)FUN_019079b0();
          FUN_00e7b970();
          local_70 = local_40;
          local_78 = (double)FUN_00e7c860();
          pvVar19 = _pthread_getspecific(pVar22);
          if (pvVar19 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar33 = (double)FUN_01907950();
          uVar28 = (uint)(((dVar33 - local_78 * local_88) - local_60) * local_b0);
          if ((-1 < (int)uVar28) && ((int)uVar28 < iVar18)) {
            pvVar19 = _pthread_getspecific(pVar22);
            if (pvVar19 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar19 = (void *)FUN_019079b0();
            pvVar20 = _pthread_getspecific(pVar22);
            if (pvVar20 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_d0 = FUN_019079b0();
            local_40 = pvVar19;
            FUN_00e7b970();
            local_d8 = local_40;
            fVar31 = (float)FUN_00e7c810();
            uVar24 = (uint64_t)uVar28;
            *(float *)(*(int64_t *)((int64_t)local_48 + 0x10) + uVar24 * 4) =
                 fVar31 * *(float *)(*(int64_t *)((int64_t)local_50 + 0x10) + uVar24 * 4) +
                 *(float *)(*(int64_t *)((int64_t)local_48 + 0x10) + uVar24 * 4);
          }
          if (lVar27 != 0) {
            FUN_00d50b20();
          }
          lVar29 = lVar29 + 1;
        } while (lVar29 < (int64_t)*(int *)((int64_t)local_58 + 0xc) + -1);
      }
      local_c8 = *(void*)((int64_t)local_48 + 0x10);
      FUN_015c15b0(0,iVar18);
      uVar28 = local_9c;
      if ((local_9c & 1) == 0) break;
      local_70 = local_48;
      local_68 = '\0';
      FUN_00c8e4f0();
      pvVar19 = local_40;
      if (local_38[0] == '\0') {
        if (((local_40 != (void *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
           (local_40 != (void *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38[0] = '\0';
      }
      if ((local_68 != '\0') && (local_70 != (void *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00c92170();
      FUN_00c92160();
      if (pvVar19 == local_50) {
        bVar30 = pvVar19 != (void *)0x0;
        pvVar19 = local_50;
        if (bVar30) {
          FUN_00d50b20();
          pvVar19 = local_50;
        }
      }
      else if (local_50 != (void *)0x0) {
        FUN_00d50b20();
      }
      local_c0 = *(void*)((int64_t)pvVar19 + 0x10);
      local_50 = pvVar19;
      FUN_015b3230();
      uVar6 = *(uint *)((int64_t)pvVar19 + 0x18);
      if (3 < (int)uVar6) {
        uVar7 = uVar6 >> 2;
        lVar29 = *(int64_t *)((int64_t)local_50 + 0x10);
        if (uVar6 < 0x20) {
          uVar24 = 0;
        }
        else {
          uVar24 = (uint64_t)(uVar7 & 0xfffffff8);
          uVar25 = (uVar24 - 8 >> 3) + 1;
          if (uVar24 - 8 == 0) {
            lVar27 = 0;
LAB_016d0e01:
            pfVar1 = (float *)(lVar29 + lVar27 * 4);
            fVar31 = pfVar1[1];
            fVar8 = pfVar1[2];
            fVar9 = pfVar1[3];
            pfVar2 = (float *)(lVar29 + 0x10 + lVar27 * 4);
            auVar36._0_4_ = *pfVar2 * *pfVar2;
            auVar36._4_4_ = pfVar2[1] * pfVar2[1];
            auVar36._8_4_ = pfVar2[2] * pfVar2[2];
            auVar36._12_4_ = pfVar2[3] * pfVar2[3];
            pfVar2 = (float *)(lVar29 + lVar27 * 4);
            *pfVar2 = *pfVar1 * *pfVar1;
            pfVar2[1] = fVar31 * fVar31;
            pfVar2[2] = fVar8 * fVar8;
            pfVar2[3] = fVar9 * fVar9;
            *(uint8_t (*) [16])(lVar29 + 0x10 + lVar27 * 4) = auVar36;
          }
          else {
            lVar26 = -(uVar25 & 0xfffffffffffffffe);
            lVar27 = 0;
            do {
              pfVar1 = (float *)(lVar29 + lVar27 * 4);
              fVar31 = pfVar1[1];
              fVar8 = pfVar1[2];
              fVar9 = pfVar1[3];
              pfVar2 = (float *)(lVar29 + 0x10 + lVar27 * 4);
              pfVar3 = (float *)(lVar29 + 0x20 + lVar27 * 4);
              fVar10 = *pfVar3;
              fVar11 = pfVar3[1];
              fVar12 = pfVar3[2];
              fVar13 = pfVar3[3];
              pfVar3 = (float *)(lVar29 + 0x30 + lVar27 * 4);
              fVar14 = *pfVar3;
              fVar15 = pfVar3[1];
              fVar16 = pfVar3[2];
              fVar17 = pfVar3[3];
              auVar35._0_4_ = *pfVar2 * *pfVar2;
              auVar35._4_4_ = pfVar2[1] * pfVar2[1];
              auVar35._8_4_ = pfVar2[2] * pfVar2[2];
              auVar35._12_4_ = pfVar2[3] * pfVar2[3];
              pfVar2 = (float *)(lVar29 + lVar27 * 4);
              *pfVar2 = *pfVar1 * *pfVar1;
              pfVar2[1] = fVar31 * fVar31;
              pfVar2[2] = fVar8 * fVar8;
              pfVar2[3] = fVar9 * fVar9;
              *(uint8_t (*) [16])(lVar29 + 0x10 + lVar27 * 4) = auVar35;
              pfVar1 = (float *)(lVar29 + 0x20 + lVar27 * 4);
              *pfVar1 = fVar10 * fVar10;
              pfVar1[1] = fVar11 * fVar11;
              pfVar1[2] = fVar12 * fVar12;
              pfVar1[3] = fVar13 * fVar13;
              pfVar1 = (float *)(lVar29 + 0x30 + lVar27 * 4);
              *pfVar1 = fVar14 * fVar14;
              pfVar1[1] = fVar15 * fVar15;
              pfVar1[2] = fVar16 * fVar16;
              pfVar1[3] = fVar17 * fVar17;
              lVar27 = lVar27 + 0x10;
              lVar26 = lVar26 + 2;
            } while (lVar26 != 0);
            if ((uVar25 & 1) != 0) goto LAB_016d0e01;
          }
          if (uVar24 == uVar7) goto LAB_016d0e37;
        }
        do {
          fVar31 = *(float *)(lVar29 + uVar24 * 4);
          *(float *)(lVar29 + uVar24 * 4) = fVar31 * fVar31;
          uVar24 = uVar24 + 1;
        } while (uVar7 != uVar24);
      }
LAB_016d0e37:
      FUN_00c8e690();
      pvVar19 = local_40;
      if (((local_38[0] == '\0') && (local_40 != (void *)0x0)) &&
         ((FUN_00d50b00(), local_38[0] != '\0' && (local_40 != (void *)0x0)))) {
        FUN_00d50b20();
      }
      FUN_00c92170();
      FUN_00c92160();
      ___bzero();
      if (pvVar19 == local_48) {
        FUN_00d50b20();
      }
      else if (local_48 == (void *)0x0) {
        local_48 = pvVar19;
      }
      else {
        FUN_00d50b20();
        local_48 = pvVar19;
      }
      uVar32 = 0;
    } while ((uVar28 & 1) != 0);
    local_b8 = *(void*)((int64_t)local_48 + 0x10);
    FUN_015b3350(0);
    pvVar19 = local_40;
    if ((((local_38[0] == '\0') && (local_40 != (void *)0x0)) &&
        (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (void *)0x0)) {
      FUN_00d50b20();
    }
    uVar28 = *(uint *)((int64_t)pvVar19 + 0xc);
    if ((int)uVar28 < 1) {
LAB_016d0fcb:
      FUN_00d50b20();
    }
    else {
      lVar29 = *(int64_t *)((int64_t)pvVar19 + 0x10);
      dVar33 = g_023908c8;
      if (uVar28 == 1) {
        dVar34 = 0.0;
        uVar24 = 0;
      }
      else {
        dVar34 = 0.0;
        uVar24 = 0;
        do {
          lVar27 = *(int64_t *)(lVar29 + uVar24 * 8);
          dVar4 = *(double *)(lVar27 + 0x18);
          if (dVar4 <= dVar34) {
            lVar27 = *(int64_t *)(lVar29 + 8 + uVar24 * 8);
            dVar4 = *(double *)(lVar27 + 0x18);
            uVar38 = SUB84(dVar4,0);
            uVar39 = (uint32_t)((uint64_t)dVar4 >> 0x20);
            if (dVar34 < dVar4) goto LAB_016d10a0;
          }
          else {
            dVar33 = *(double *)(lVar27 + 0x10);
            lVar27 = *(int64_t *)(lVar29 + 8 + uVar24 * 8);
            dVar5 = *(double *)(lVar27 + 0x18);
            uVar38 = SUB84(dVar5,0);
            uVar39 = (uint32_t)((uint64_t)dVar5 >> 0x20);
            dVar34 = dVar4;
            if (dVar4 < dVar5) {
LAB_016d10a0:
              dVar33 = *(double *)(lVar27 + 0x10);
              dVar34 = (double)CONCAT44(uVar39,uVar38);
            }
          }
          uVar24 = uVar24 + 2;
        } while ((uVar28 & 0xfffffffe) != uVar24);
      }
      if (((uVar28 & 1) != 0) &&
         (lVar29 = *(int64_t *)(lVar29 + uVar24 * 8), dVar34 < *(double *)(lVar29 + 0x18))) {
        dVar33 = *(double *)(lVar29 + 0x10);
      }
      if (!NAN(dVar33)) {
        dVar33 = local_60 + dVar33 / local_b0;
        dVar34 = (dVar33 - local_90) / local_88;
        auVar37._0_8_ = (double)(g_023945b0 & (uint64_t)dVar34 | g_023945c0) + dVar34;
        auVar37._8_8_ = _UNK_023945c8;
        auVar35 = roundsd(ZEXT816(0),auVar37,0xb);
        local_90 = dVar33 - auVar35._0_8_ * local_88;
      }
      if (pvVar19 != (void *)0x0) goto LAB_016d0fcb;
    }
    if (local_98 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (local_50 != (void *)0x0) {
      FUN_00d50b20();
    }
    if (local_48 != (void *)0x0) {
      FUN_00d50b20();
    }
    if (local_58 == (void *)0x0) goto LAB_016d100e;
  }
  FUN_00d50b20();
LAB_016d100e:
  FUN_00d50b20();
  return local_90;
}

