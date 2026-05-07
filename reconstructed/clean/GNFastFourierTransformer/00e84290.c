// Function: FUN_00e84290
// Address: 00e84290
// Size: 1725 bytes
// Class: GNFastFourierTransformer

void FUN_00e84290(void)

{
  uint64_t uVar1;
  float *pfVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
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
  int iVar19;
  int64_t lVar20;
  uint64_t uVar21;
  float *pfVar22;
  uint64_t uVar23;
  uint64_t uVar24;
  int64_t lVar25;
  int iVar26;
  int64_t lVar27;
  int64_t lVar28;
  float *pfVar29;
  int iVar30;
  int iVar31;
  byte bVar32;
  uint64_t uVar33;
  int64_t lVar34;
  int64_t lVar35;
  uint64_t uVar36;
  int iVar37;
  int64_t lVar38;
  double dVar39;
  double dVar40;
  uint8_t auVar41 [16];
  float fVar42;
  double dVar43;
  
  if (g_028025c8 == 0) {
    g_028025c8 = FUN_00e83010();
    lVar20 = FUN_00e83010();
    lVar28 = g_028025c8;
    lVar27 = g_028025c8 + 0x30;
    iVar30 = 1;
    iVar31 = 2;
    bVar32 = 1;
    uVar36 = 0;
    uVar33 = 0xfffffffffffffffa;
    lVar35 = g_028025c8;
    uVar24 = 0;
    iVar19 = 0;
    g_028025d0 = lVar20;
    do {
      lVar25 = lVar27 + uVar36 * 4;
      lVar34 = -((uVar33 >> 3) + 1 & 0xfffffffffffffffe);
      uVar3 = (int)uVar24 * 2;
      uVar23 = uVar24 * 2 - 6;
      uVar1 = uVar24 + 1;
      iVar37 = (int)uVar1 * 2;
      pfVar29 = (float *)(lVar28 + ((uint)(iVar19 * iVar19) + uVar24) * 4);
      dVar43 = g_02411080 / (double)iVar37;
      uVar21 = uVar24 * 2 + 2;
      lVar38 = 0;
      pfVar22 = pfVar29;
      dVar40 = g_023e1728;
      do {
        dVar39 = (double)_cos(dVar40);
        *(float *)(lVar35 + uVar36 * 4 + lVar38 * 4) =
             (float)((dVar39 + g_0238fee8) * g_023942d0);
        dVar40 = dVar40 + dVar43;
        dVar39 = (double)_cos(dVar40);
        pfVar22[1] = (float)((dVar39 + g_0238fee8) * g_023942d0);
        pfVar22 = pfVar22 + 2;
        dVar40 = dVar40 + dVar43;
        lVar38 = lVar38 + 2;
      } while (iVar31 != (int)lVar38);
      pfVar22 = pfVar29;
      if ((uVar3 + 2 & 6) == 0) {
        fVar42 = 0.0;
        iVar26 = iVar37;
      }
      else {
        fVar42 = 0.0;
        iVar26 = 0;
        do {
          fVar42 = fVar42 + *pfVar22;
          pfVar22 = pfVar22 + 1;
          iVar26 = iVar26 + 1;
        } while ((bVar32 & 3) * 2 != iVar26);
        iVar26 = iVar31 - iVar26;
      }
      if (6 < (uVar3 | 1)) {
        lVar38 = 0;
        do {
          fVar42 = fVar42 + pfVar22[lVar38] + pfVar22[lVar38 + 1] + pfVar22[lVar38 + 2] +
                   pfVar22[lVar38 + 3] + pfVar22[lVar38 + 4] + pfVar22[lVar38 + 5] +
                   pfVar22[lVar38 + 6] + pfVar22[lVar38 + 7];
          lVar38 = lVar38 + 8;
        } while (iVar26 != (int)lVar38);
      }
      fVar42 = g_02390124 / fVar42;
      if (uVar24 < 3) {
LAB_00e84673:
        lVar25 = 0;
        do {
          pfVar29[lVar25] = pfVar29[lVar25] * fVar42;
          lVar25 = lVar25 + 1;
        } while (iVar37 != (int)lVar25);
      }
      else {
        if (uVar23 < 8) {
          lVar38 = 0;
        }
        else {
          lVar38 = 0;
          do {
            pfVar2 = (float *)(lVar25 + -0x30 + lVar38 * 4);
            fVar4 = pfVar2[1];
            fVar5 = pfVar2[2];
            fVar6 = pfVar2[3];
            pfVar22 = (float *)(lVar25 + -0x20 + lVar38 * 4);
            fVar7 = *pfVar22;
            fVar8 = pfVar22[1];
            fVar9 = pfVar22[2];
            fVar10 = pfVar22[3];
            pfVar22 = (float *)(lVar25 + -0x10 + lVar38 * 4);
            fVar11 = *pfVar22;
            fVar12 = pfVar22[1];
            fVar13 = pfVar22[2];
            fVar14 = pfVar22[3];
            pfVar22 = (float *)(lVar25 + lVar38 * 4);
            fVar15 = *pfVar22;
            fVar16 = pfVar22[1];
            fVar17 = pfVar22[2];
            fVar18 = pfVar22[3];
            pfVar22 = (float *)(lVar25 + -0x30 + lVar38 * 4);
            *pfVar22 = *pfVar2 * fVar42;
            pfVar22[1] = fVar4 * fVar42;
            pfVar22[2] = fVar5 * fVar42;
            pfVar22[3] = fVar6 * fVar42;
            pfVar22 = (float *)(lVar25 + -0x20 + lVar38 * 4);
            *pfVar22 = fVar7 * fVar42;
            pfVar22[1] = fVar8 * fVar42;
            pfVar22[2] = fVar9 * fVar42;
            pfVar22[3] = fVar10 * fVar42;
            pfVar22 = (float *)(lVar25 + -0x10 + lVar38 * 4);
            *pfVar22 = fVar11 * fVar42;
            pfVar22[1] = fVar12 * fVar42;
            pfVar22[2] = fVar13 * fVar42;
            pfVar22[3] = fVar14 * fVar42;
            pfVar22 = (float *)(lVar25 + lVar38 * 4);
            *pfVar22 = fVar15 * fVar42;
            pfVar22[1] = fVar16 * fVar42;
            pfVar22[2] = fVar17 * fVar42;
            pfVar22[3] = fVar18 * fVar42;
            lVar38 = lVar38 + 0x10;
            lVar34 = lVar34 + 2;
          } while (lVar34 != 0);
        }
        uVar24 = uVar21 & 0xfffffffffffffff8;
        if (((uVar23 >> 3) + 1 & 1) != 0) {
          pfVar22 = pfVar29 + lVar38;
          fVar4 = pfVar22[1];
          fVar5 = pfVar22[2];
          fVar6 = pfVar22[3];
          pfVar2 = pfVar29 + lVar38 + 4;
          fVar7 = *pfVar2;
          fVar8 = pfVar2[1];
          fVar9 = pfVar2[2];
          fVar10 = pfVar2[3];
          pfVar2 = pfVar29 + lVar38;
          *pfVar2 = *pfVar22 * fVar42;
          pfVar2[1] = fVar4 * fVar42;
          pfVar2[2] = fVar5 * fVar42;
          pfVar2[3] = fVar6 * fVar42;
          pfVar22 = pfVar29 + lVar38 + 4;
          *pfVar22 = fVar7 * fVar42;
          pfVar22[1] = fVar8 * fVar42;
          pfVar22[2] = fVar9 * fVar42;
          pfVar22[3] = fVar10 * fVar42;
        }
        if (uVar21 != uVar24) {
          pfVar29 = pfVar29 + uVar24;
          iVar37 = iVar37 - (int)uVar24;
          goto LAB_00e84673;
        }
      }
      lVar35 = lVar35 + 4;
      uVar36 = (uint64_t)(uint)((int)uVar36 + iVar30);
      iVar30 = iVar30 + 2;
      iVar31 = iVar31 + 2;
      bVar32 = bVar32 + 1;
      lVar27 = lVar27 + 4;
      uVar33 = uVar33 + 2;
      uVar24 = uVar1;
      iVar19 = iVar19 + 1;
    } while (uVar1 != 0x80);
    *(void*)(lVar28 + 0x10200) = 0;
    iVar19 = 1;
    uVar24 = 0;
    iVar30 = 2;
    lVar28 = 0;
    lVar27 = lVar20;
    do {
      lVar35 = (uint64_t)(uint)((int)lVar28 * (int)lVar28) + lVar28;
      lVar28 = lVar28 + 1;
      lVar35 = lVar20 + lVar35 * 4;
      dVar43 = g_02411080 / (double)((int)lVar28 * 2);
      lVar25 = 0;
      dVar40 = g_023e1728;
      do {
        dVar39 = (double)_cos(dVar40);
        *(float *)(lVar27 + uVar24 * 4 + lVar25 * 4) =
             (float)((dVar39 + g_0238fee8) * g_023942d0);
        dVar40 = dVar40 + dVar43;
        dVar39 = (double)_cos(dVar40);
        *(float *)(lVar35 + 4) = (float)((dVar39 + g_0238fee8) * g_023942d0);
        lVar35 = lVar35 + 8;
        dVar40 = dVar40 + dVar43;
        lVar25 = lVar25 + 2;
      } while (iVar30 != (int)lVar25);
      lVar27 = lVar27 + 4;
      uVar24 = (uint64_t)(uint)((int)uVar24 + iVar19);
      iVar19 = iVar19 + 2;
      iVar30 = iVar30 + 2;
    } while (lVar28 != 0x80);
    *(void*)(lVar20 + 0x10200) = 0;
    lVar27 = FUN_00e83010();
    lVar28 = 0;
    dVar40 = g_023e1728;
    do {
      dVar43 = (double)_cos(dVar40);
      *(float *)(lVar27 + lVar28 * 4) = (float)((dVar43 + g_0238fee8) * g_023942d0);
      dVar40 = dVar40 + g_0240d1d8;
      dVar43 = (double)_cos(dVar40);
      *(float *)(lVar27 + 4 + lVar28 * 4) = (float)((dVar43 + g_0238fee8) * g_023942d0);
      dVar40 = dVar40 + g_0240d1d8;
      lVar28 = lVar28 + 2;
    } while ((int)lVar28 != 0x4000);
    *(void*)(lVar27 + 0x10000) = 0;
    g_028025b8 = lVar27;
    lVar27 = FUN_00e83010();
    lVar28 = 0;
    dVar40 = g_023e1728;
    do {
      dVar43 = (double)_cos(dVar40);
      *(float *)(lVar27 + lVar28 * 4) = (float)((dVar43 + g_0238fee8) * g_023942d0);
      dVar40 = dVar40 + g_0240d1d8;
      dVar43 = (double)_cos(dVar40);
      *(float *)(lVar27 + 4 + lVar28 * 4) = (float)((dVar43 + g_0238fee8) * g_023942d0);
      dVar40 = dVar40 + g_0240d1d8;
      lVar28 = lVar28 + 2;
    } while ((int)lVar28 != 0x4000);
    *(void*)(lVar27 + 0x10000) = 0;
    lVar28 = 0;
    g_028025c0 = lVar27;
    do {
      auVar41 = *(uint8_t (*) [16])(lVar27 + lVar28 * 4);
      auVar41 = sqrtps(auVar41,auVar41);
      *(uint8_t (*) [16])(lVar27 + lVar28 * 4) = auVar41;
      lVar28 = lVar28 + 4;
    } while (lVar28 != 0x4000);
  }
  return;
}

