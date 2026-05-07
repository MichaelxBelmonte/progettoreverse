// ===================================================================
// GNFastFourierTransformer — Complete reconstructed pseudocode
// 8 functions
// ===================================================================


// ============================================================
// 00e84290
// ============================================================
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



// ============================================================
// 00e83930
// ============================================================
// Function: FUN_00e83930
// Address: 00e83930
// Size: 1129 bytes
// Class: GNFastFourierTransformer

uint64_t FUN_00e83930(uint64_t param_1,uint param_2)

{
  float *pfVar1;
  bool bVar2;
  float *in_RCX;
  uint64_t uVar3;
  float *pfVar4;
  int unaff_ESI;
  float *this_ptr;
  int iVar5;
  uint uVar6;
  uint64_t uVar7;
  uint uVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar14;
  uint8_t auVar13 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  uint8_t auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  uint uVar22;
  
  uVar22 = (uint)((uint64_t)param_1 >> 0x20);
  fVar21 = (float)param_1;
  if ((int)param_2 < 0) {
    fVar9 = 0.0;
    uVar10 = 0;
    if (in_RCX != (float *)0x0) {
      *in_RCX = *this_ptr;
      return 0;
    }
  }
  else {
    uVar8 = unaff_ESI - 1;
    if (unaff_ESI <= (int)param_2) {
      if (in_RCX != (float *)0x0) {
        *in_RCX = this_ptr[(int)uVar8];
      }
      return (uint64_t)(uint)(float)(int)uVar8;
    }
    if ((((int)param_2 < 2) || (iVar5 = unaff_ESI + -3, iVar5 < (int)param_2)) ||
       (g_0239011c < fVar21)) {
      if (in_RCX != (float *)0x0) {
        *in_RCX = this_ptr[param_2];
      }
      uVar10 = 0;
      fVar9 = (float)(int)param_2;
    }
    else {
      uVar10 = 0;
      fVar9 = (float)(int)param_2;
      fVar20 = fVar9 - fVar21;
      if (unaff_ESI < 1) {
        fVar12 = 0.0;
        fVar15 = 0.0;
      }
      else {
        uVar6 = (uint)fVar20;
        if ((int)uVar6 < 0) {
          fVar12 = *this_ptr;
        }
        else if ((int)uVar6 < (int)uVar8) {
          fVar15 = fVar20 - (float)(int)uVar6;
          if (uVar6 == 0) {
            fVar12 = *this_ptr;
            pfVar4 = this_ptr + 1;
            uVar7 = (uint64_t)(2 < unaff_ESI) + 1;
            fVar19 = fVar12;
          }
          else {
            uVar7 = (uint64_t)(uVar6 - 1);
            pfVar1 = this_ptr + uVar7;
            fVar19 = *pfVar1;
            if (iVar5 < (int)uVar6) {
              if ((int)uVar6 < unaff_ESI) {
                uVar7 = (uint64_t)uVar6;
              }
              fVar12 = this_ptr[uVar7];
              uVar6 = (uint)((int)uVar7 < (int)uVar8) + (int)uVar7;
              pfVar4 = this_ptr + uVar6;
              uVar7 = (uint64_t)(((int)uVar6 < (int)uVar8) + uVar6);
            }
            else {
              fVar12 = this_ptr[uVar6];
              uVar7 = (uint64_t)(uVar6 + 2);
              pfVar4 = this_ptr + (uint64_t)uVar6 + 1;
            }
          }
          auVar13 = insertps(ZEXT416((uint)fVar12),this_ptr[uVar7],0x10);
          auVar18 = insertps(ZEXT416((uint)*pfVar4),ZEXT416((uint)fVar19),0x10);
          fVar11 = (auVar13._0_4_ - auVar18._0_4_) * g_02394140;
          fVar14 = (auVar13._4_4_ - auVar18._4_4_) * _UNK_02394144;
          fVar16 = (fVar19 + *pfVar4) * g_0239011c;
          fVar12 = (((fVar11 + fVar14) * fVar15 + (fVar16 - fVar12)) * fVar15 +
                   (((fVar16 - fVar14) - fVar11) - fVar19)) * fVar15 + fVar12;
        }
        else {
          fVar12 = this_ptr[uVar8];
        }
        uVar6 = (uint)(fVar9 + fVar21);
        if ((int)uVar6 < 0) {
          fVar15 = *this_ptr;
        }
        else if ((int)uVar6 < (int)uVar8) {
          fVar19 = (fVar9 + fVar21) - (float)(int)uVar6;
          if (uVar6 == 0) {
            fVar15 = *this_ptr;
            pfVar4 = this_ptr + 1;
            uVar7 = (uint64_t)(2 < unaff_ESI) + 1;
            fVar11 = fVar15;
          }
          else {
            uVar7 = (uint64_t)(uVar6 - 1);
            pfVar1 = this_ptr + uVar7;
            fVar11 = *pfVar1;
            if (iVar5 < (int)uVar6) {
              if ((int)uVar6 < unaff_ESI) {
                uVar7 = (uint64_t)uVar6;
              }
              fVar15 = this_ptr[uVar7];
              uVar6 = (uint)((int)uVar7 < (int)uVar8) + (int)uVar7;
              pfVar4 = this_ptr + uVar6;
              uVar7 = (uint64_t)(((int)uVar6 < (int)uVar8) + uVar6);
            }
            else {
              fVar15 = this_ptr[uVar6];
              uVar7 = (uint64_t)(uVar6 + 2);
              pfVar4 = this_ptr + (uint64_t)uVar6 + 1;
            }
          }
          auVar13 = insertps(ZEXT416((uint)fVar15),this_ptr[uVar7],0x10);
          auVar18 = insertps(ZEXT416((uint)*pfVar4),ZEXT416((uint)fVar11),0x10);
          fVar16 = (auVar13._0_4_ - auVar18._0_4_) * g_02394140;
          fVar17 = (auVar13._4_4_ - auVar18._4_4_) * _UNK_02394144;
          fVar14 = (fVar11 + *pfVar4) * g_0239011c;
          fVar15 = (((fVar16 + fVar17) * fVar19 + (fVar14 - fVar15)) * fVar19 +
                   (((fVar14 - fVar17) - fVar16) - fVar11)) * fVar19 + fVar15;
        }
        else {
          fVar15 = this_ptr[uVar8];
        }
      }
      fVar11 = fVar9 + fVar21;
      fVar19 = this_ptr[param_2];
      if ((fVar19 < fVar12) || (fVar19 < fVar15)) {
        fVar14 = fVar15;
        if (fVar15 <= fVar12) {
          fVar21 = (float)((uint)fVar21 ^ g_023945e0);
          uVar22 = uVar22 ^ _UNK_023945e4;
          fVar14 = fVar12;
        }
        if (fVar19 < fVar14) {
          fVar9 = (float)(~-(uint)(fVar12 < fVar15) & (uint)fVar20 |
                         (uint)fVar11 & -(uint)(fVar12 < fVar15));
          uVar10 = 0;
          if (unaff_ESI < 1) {
            fVar19 = fVar14;
            if (fVar14 < 0.0) {
              fVar9 = fVar9 + fVar21;
              fVar19 = 0.0;
            }
          }
          else {
            fVar20 = fVar9;
            uVar6 = uVar10;
            do {
              uVar10 = uVar6;
              fVar9 = fVar20;
              fVar20 = fVar21 + fVar9;
              uVar6 = (uint)fVar20;
              if ((int)uVar6 < 0) {
                fVar12 = *this_ptr;
              }
              else if ((int)uVar6 < (int)uVar8) {
                fVar15 = fVar20 - (float)(int)uVar6;
                if (uVar6 == 0) {
                  fVar19 = *this_ptr;
                  uVar7 = (uint64_t)(2 < unaff_ESI) + 1;
                  pfVar4 = this_ptr + 1;
                  fVar12 = fVar19;
                }
                else {
                  uVar3 = (uint64_t)(uVar6 - 1);
                  fVar19 = this_ptr[uVar3];
                  if (iVar5 < (int)uVar6) {
                    if ((int)uVar6 < unaff_ESI) {
                      uVar3 = (uint64_t)uVar6;
                    }
                    uVar6 = (uint)((int)uVar3 < (int)uVar8) + (int)uVar3;
                    uVar7 = (uint64_t)(((int)uVar6 < (int)uVar8) + uVar6);
                    pfVar4 = this_ptr + uVar6;
                    fVar12 = this_ptr[uVar3];
                  }
                  else {
                    uVar7 = (uint64_t)(uVar6 + 2);
                    pfVar4 = this_ptr + (uint64_t)uVar6 + 1;
                    fVar12 = this_ptr[uVar6];
                  }
                }
                auVar18 = insertps(ZEXT416((uint)fVar12),this_ptr[uVar7],0x10);
                auVar13 = insertps(ZEXT416((uint)*pfVar4),ZEXT416((uint)fVar19),0x10);
                fVar16 = (auVar18._0_4_ - auVar13._0_4_) * g_02394140;
                fVar17 = (auVar18._4_4_ - auVar13._4_4_) * _UNK_02394144;
                fVar11 = (fVar19 + *pfVar4) * g_0239011c;
                fVar12 = (((fVar16 + fVar17) * fVar15 + (fVar11 - fVar12)) * fVar15 +
                         (((fVar11 - fVar17) - fVar16) - fVar19)) * fVar15 + fVar12;
              }
              else {
                fVar12 = this_ptr[uVar8];
              }
              bVar2 = fVar14 < fVar12;
              uVar6 = uVar22;
              fVar19 = fVar14;
              fVar14 = fVar12;
            } while (bVar2);
          }
        }
      }
      if (in_RCX != (float *)0x0) {
        *in_RCX = fVar19;
        return CONCAT44(uVar10,fVar9);
      }
    }
  }
  return CONCAT44(uVar10,fVar9);
}



// ============================================================
// 00e84f80
// ============================================================
// Function: FUN_00e84f80
// Address: 00e84f80
// Size: 892 bytes
// Class: GNFastFourierTransformer

void FUN_00e84f80(void)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int64_t lVar7;
  void*puVar8;
  int64_t *plVar9;
  int64_t lVar10;
  int64_t *plVar11;
  int64_t *plVar12;
  int iVar13;
  int iVar14;
  int64_t lVar15;
  int64_t lVar16;
  int iVar17;
  int iVar18;
  uint local_40;
  
  if ((g_028025d8 != 0) && (iVar2 = FUN_00c8d620(), iVar2 != 0)) {
    iVar3 = FUN_00c8d630();
    iVar17 = 0;
    if (0 < iVar3) {
      iVar13 = 0;
      do {
        lVar7 = FUN_00c8df10();
        if (lVar7 != 0) {
          iVar17 = iVar17 + *(int *)(lVar7 + 0x18);
        }
        iVar13 = iVar13 + 1;
      } while (iVar3 != iVar13);
    }
    puVar8 = (void*)FUN_00e99bf0();
    g_028025e0 = (**puVar8)();
    if (iVar17 != 0) {
      puVar8 = (void*)FUN_00e99bf0();
      g_028025e8 = (**puVar8)();
    }
    lVar7 = FUN_00d4fe50();
    if (0 < iVar3) {
      iVar13 = *(int *)(lVar7 + 8);
      uVar4 = iVar13 + 7U & 0xfffffff8;
      iVar14 = 0;
      do {
        puVar8 = (void*)FUN_00c8df10();
        lVar10 = g_028025e0;
        if (puVar8 != (void*)0x0) {
          iVar5 = uVar4 + *(int *)(puVar8 + 3) * 8;
          if (*(int *)(puVar8 + 3) == 0) {
            iVar5 = iVar13;
          }
          iVar2 = iVar2 + -1;
          lVar15 = (int64_t)iVar2 * 200;
          lVar1 = g_028025e0 + lVar15;
          *(void*)(g_028025e0 + lVar15) = *puVar8;
          *(int *)(lVar10 + 8 + lVar15) = iVar5;
          *(void*)(lVar10 + 0x10 + lVar15) = 0;
          *(int64_t *)(lVar10 + 0x18 + lVar15) = lVar7;
          puVar8 = (void*)(lVar10 + 0x20 + lVar15);
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8 = (void*)(lVar10 + 0x30 + lVar15);
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8 = (void*)(lVar10 + 0x40 + lVar15);
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8 = (void*)(lVar10 + 0x50 + lVar15);
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8 = (void*)(lVar10 + 0x60 + lVar15);
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8 = (void*)(lVar10 + 0x70 + lVar15);
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8 = (void*)(lVar10 + 0x80 + lVar15);
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8 = (void*)(lVar10 + 0x90 + lVar15);
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8 = (void*)(lVar10 + 0xa0 + lVar15);
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8 = (void*)(lVar10 + 0xb0 + lVar15);
          *puVar8 = 0;
          puVar8[1] = 0;
          *(void*)(lVar10 + 0xc0 + lVar15) = 0;
          iVar5 = FUN_00e38d70();
          if (0 < iVar5) {
            plVar9 = (int64_t *)(lVar10 + lVar15 + 0x28);
            iVar18 = 0;
            local_40 = uVar4;
            do {
              plVar11 = (int64_t *)FUN_00e38d90();
              lVar10 = g_028025e8;
              if (*plVar11 == 0) {
                lVar10 = plVar11[1];
LAB_00e85175:
                *(int64_t *)(lVar10 + 0x20) = lVar1;
              }
              else {
                iVar17 = iVar17 + -1;
                lVar16 = (int64_t)iVar17 * 0x38;
                lVar15 = g_028025e8 + lVar16;
                *(int64_t *)(g_028025e8 + lVar16) = *plVar11;
                *(int64_t *)(lVar10 + 8 + lVar16) = lVar1;
                *(void*)(lVar10 + 0x18 + lVar16) = 0x40;
                puVar8 = (void*)(lVar10 + 0x20 + lVar16);
                *puVar8 = 0;
                puVar8[1] = 0;
                *(void*)(lVar10 + 0x30 + lVar16) = 0;
                *(int64_t *)(lVar10 + 0x20 + lVar16) = plVar11[1];
                *(int64_t *)(lVar10 + 0x10 + lVar16) = (int64_t)(int)local_40;
                plVar12 = plVar9;
                lVar10 = *plVar9;
                if (*plVar9 != 0) {
                  do {
                    lVar16 = lVar10;
                    lVar10 = *(int64_t *)(lVar16 + 0x30);
                  } while (lVar10 != 0);
                  plVar12 = (int64_t *)(lVar16 + 0x30);
                }
                local_40 = local_40 + 8;
                *plVar12 = lVar15;
                lVar10 = plVar11[1];
                if (*plVar11 == 0) goto LAB_00e85175;
                for (lVar15 = *plVar9; lVar15 != 0; lVar15 = *(int64_t *)(lVar15 + 0x30)) {
                  iVar6 = FUN_00e7ddf0();
                  if (iVar6 == 0) {
                    *(int64_t *)(lVar10 + 0x20) = lVar15;
                    goto LAB_00e8517d;
                  }
                }
                FUN_00e82970();
              }
LAB_00e8517d:
              lVar10 = FUN_00e99bf0();
              (**(code **)(lVar10 + 0x10))();
              iVar18 = iVar18 + 1;
            } while (iVar18 != iVar5);
          }
          iVar5 = FUN_00e38d70();
          if (0 < iVar5) {
            iVar18 = 0;
            do {
              lVar10 = FUN_00e38d90();
              *(int64_t *)(lVar10 + 8) = lVar1;
              *(byte *)(lVar10 + 0x10) = *(byte *)(lVar10 + 0x10) | 2;
              iVar18 = iVar18 + 1;
            } while (iVar5 != iVar18);
          }
          FUN_00e38ce0();
          FUN_00e38ce0();
          lVar10 = FUN_00e99bf0();
          (**(code **)(lVar10 + 0x10))();
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 != iVar3);
    }
    FUN_00c8d5b0();
    g_028025d8 = 0;
  }
  return;
}



// ============================================================
// 00e83da0
// ============================================================
// Function: FUN_00e83da0
// Address: 00e83da0
// Size: 733 bytes
// Class: GNFastFourierTransformer

float * FUN_00e83da0(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
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
  uint uVar17;
  float *pfVar18;
  float *pfVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  int64_t lVar22;
  char unaff_SIL;
  uint uVar23;
  uint unaff_EDI;
  int64_t lVar24;
  uint uVar25;
  double dVar26;
  double dVar27;
  float fVar28;
  double dVar29;
  
  pfVar18 = (float *)FUN_00e83010();
  uVar25 = 1;
  if (0 < (int)unaff_EDI) {
    uVar25 = unaff_EDI;
  }
  dVar29 = g_02411080 / (double)(int)uVar25;
  pfVar19 = pfVar18;
  dVar27 = g_023e1728;
  uVar17 = uVar25;
  if ((uVar25 & 1) != 0) {
    *pfVar18 = 0.0;
    pfVar19 = pfVar18 + 1;
    dVar27 = g_023e1728 + dVar29;
    uVar17 = uVar25 - 1;
  }
  if (1 < (int)unaff_EDI) {
    lVar22 = 0;
    do {
      dVar26 = (double)_cos(dVar27);
      pfVar19[lVar22] = (float)((dVar26 + g_0238fee8) * g_023942d0);
      dVar26 = (double)_cos(dVar27 + dVar29);
      pfVar19[lVar22 + 1] = (float)((dVar26 + g_0238fee8) * g_023942d0);
      dVar27 = dVar27 + dVar29 + dVar29;
      lVar22 = lVar22 + 2;
    } while (uVar17 != (uint)lVar22);
  }
  if (unaff_SIL == '\0') goto LAB_00e84056;
  uVar17 = uVar25 - 1;
  pfVar19 = pfVar18;
  if ((uVar25 & 7) == 0) {
    fVar28 = 0.0;
    uVar23 = uVar25;
  }
  else {
    fVar28 = 0.0;
    uVar23 = 0;
    do {
      fVar28 = fVar28 + *pfVar19;
      pfVar19 = pfVar19 + 1;
      uVar23 = uVar23 + 1;
    } while ((uVar25 & 7) != uVar23);
    uVar23 = uVar25 - uVar23;
  }
  if (6 < uVar17) {
    lVar22 = 0;
    do {
      fVar28 = fVar28 + pfVar19[lVar22] + pfVar19[lVar22 + 1] + pfVar19[lVar22 + 2] +
               pfVar19[lVar22 + 3] + pfVar19[lVar22 + 4] + pfVar19[lVar22 + 5] + pfVar19[lVar22 + 6]
               + pfVar19[lVar22 + 7];
      lVar22 = lVar22 + 8;
    } while (uVar23 != (uint)lVar22);
  }
  fVar28 = g_02390124 / fVar28;
  pfVar19 = pfVar18;
  if (6 < uVar17) {
    uVar20 = (uint64_t)uVar17 + 1 & 0xfffffffffffffff8;
    uVar21 = (uVar20 - 8 >> 3) + 1;
    if (uVar20 - 8 == 0) {
      lVar22 = 0;
LAB_00e83ffb:
      pfVar1 = pfVar18 + lVar22;
      fVar2 = pfVar1[1];
      fVar3 = pfVar1[2];
      fVar4 = pfVar1[3];
      pfVar19 = pfVar18 + lVar22 + 4;
      fVar5 = *pfVar19;
      fVar6 = pfVar19[1];
      fVar7 = pfVar19[2];
      fVar8 = pfVar19[3];
      pfVar19 = pfVar18 + lVar22;
      *pfVar19 = *pfVar1 * fVar28;
      pfVar19[1] = fVar2 * fVar28;
      pfVar19[2] = fVar3 * fVar28;
      pfVar19[3] = fVar4 * fVar28;
      pfVar19 = pfVar18 + lVar22 + 4;
      *pfVar19 = fVar5 * fVar28;
      pfVar19[1] = fVar6 * fVar28;
      pfVar19[2] = fVar7 * fVar28;
      pfVar19[3] = fVar8 * fVar28;
    }
    else {
      lVar24 = -(uVar21 & 0xfffffffffffffffe);
      lVar22 = 0;
      do {
        pfVar1 = pfVar18 + lVar22;
        fVar2 = pfVar1[1];
        fVar3 = pfVar1[2];
        fVar4 = pfVar1[3];
        pfVar19 = pfVar18 + lVar22 + 4;
        fVar5 = *pfVar19;
        fVar6 = pfVar19[1];
        fVar7 = pfVar19[2];
        fVar8 = pfVar19[3];
        pfVar19 = pfVar18 + lVar22 + 8;
        fVar9 = *pfVar19;
        fVar10 = pfVar19[1];
        fVar11 = pfVar19[2];
        fVar12 = pfVar19[3];
        pfVar19 = pfVar18 + lVar22 + 0xc;
        fVar13 = *pfVar19;
        fVar14 = pfVar19[1];
        fVar15 = pfVar19[2];
        fVar16 = pfVar19[3];
        pfVar19 = pfVar18 + lVar22;
        *pfVar19 = *pfVar1 * fVar28;
        pfVar19[1] = fVar2 * fVar28;
        pfVar19[2] = fVar3 * fVar28;
        pfVar19[3] = fVar4 * fVar28;
        pfVar19 = pfVar18 + lVar22 + 4;
        *pfVar19 = fVar5 * fVar28;
        pfVar19[1] = fVar6 * fVar28;
        pfVar19[2] = fVar7 * fVar28;
        pfVar19[3] = fVar8 * fVar28;
        pfVar19 = pfVar18 + lVar22 + 8;
        *pfVar19 = fVar9 * fVar28;
        pfVar19[1] = fVar10 * fVar28;
        pfVar19[2] = fVar11 * fVar28;
        pfVar19[3] = fVar12 * fVar28;
        pfVar19 = pfVar18 + lVar22 + 0xc;
        *pfVar19 = fVar13 * fVar28;
        pfVar19[1] = fVar14 * fVar28;
        pfVar19[2] = fVar15 * fVar28;
        pfVar19[3] = fVar16 * fVar28;
        lVar22 = lVar22 + 0x10;
        lVar24 = lVar24 + 2;
      } while (lVar24 != 0);
      if ((uVar21 & 1) != 0) goto LAB_00e83ffb;
    }
    if ((uint64_t)uVar17 + 1 == uVar20) goto LAB_00e84056;
    uVar25 = uVar25 - (int)uVar20;
    pfVar19 = pfVar18 + uVar20;
  }
  lVar22 = 0;
  do {
    pfVar19[lVar22] = pfVar19[lVar22] * fVar28;
    lVar22 = lVar22 + 1;
  } while (uVar25 != (uint)lVar22);
LAB_00e84056:
  pfVar18[(int)unaff_EDI] = 0.0;
  return pfVar18;
}



// ============================================================
// 00e83120
// ============================================================
// Function: GNFastFourierTransformer_create
// Address: 00e83120
// Size: 956 bytes
// Class: GNFastFourierTransformer
// String references:
//   "GNFastFourierTransformer initialized with inappropriate table size"

void GNFastFourierTransformer_create(uint64_t param_1)

{
  uint32_t uVar1;
  void*puVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint unaff_ESI;
  void*this_ptr;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_0258fad0;
  *(void*)((int64_t)puVar2 + 0xc) = 0;
  *(void*)((int64_t)puVar2 + 0x14) = 0;
  FUN_00d500e0();
  *(uint *)((int64_t)puVar2 + 0xc) = unaff_ESI;
  *(uint *)(puVar2 + 2) = unaff_ESI >> 1;
  *(void*)((int64_t)puVar2 + 0x14) = 0;
  lVar4 = g_027bec98;
  if ((int)unaff_ESI < 0x10000) {
    if ((int)unaff_ESI < 0x200) {
      if ((int)unaff_ESI < 0x20) {
        if (unaff_ESI == 0x80000000) {
          uVar1 = 0x1f;
        }
        else {
          uVar1 = 3;
          if (unaff_ESI != 8) {
            if (unaff_ESI != 0x10) goto LAB_00e83485;
            uVar1 = 4;
          }
        }
      }
      else if ((int)unaff_ESI < 0x80) {
        if (unaff_ESI == 0x20) {
          uVar1 = 5;
        }
        else {
          if (unaff_ESI != 0x40) goto LAB_00e83485;
          uVar1 = 6;
        }
      }
      else if (unaff_ESI == 0x80) {
        uVar1 = 7;
      }
      else {
        if (unaff_ESI != 0x100) goto LAB_00e83485;
        uVar1 = 8;
      }
    }
    else if ((int)unaff_ESI < 0x1000) {
      if (unaff_ESI == 0x200) {
        uVar1 = 9;
      }
      else if (unaff_ESI == 0x400) {
        uVar1 = 10;
      }
      else {
        if (unaff_ESI != 0x800) goto LAB_00e83485;
        uVar1 = 0xb;
      }
    }
    else if ((int)unaff_ESI < 0x4000) {
      if (unaff_ESI == 0x1000) {
        uVar1 = 0xc;
      }
      else {
        if (unaff_ESI != 0x2000) goto LAB_00e83485;
        uVar1 = 0xd;
      }
    }
    else if (unaff_ESI == 0x4000) {
      uVar1 = 0xe;
    }
    else {
      if (unaff_ESI != 0x8000) goto LAB_00e83485;
      uVar1 = 0xf;
    }
  }
  else if ((int)unaff_ESI < 0x800000) {
    if ((int)unaff_ESI < 0x80000) {
      if (unaff_ESI == 0x10000) {
        uVar1 = 0x10;
      }
      else if (unaff_ESI == 0x20000) {
        uVar1 = 0x11;
      }
      else {
        if (unaff_ESI != 0x40000) goto LAB_00e83485;
        uVar1 = 0x12;
      }
    }
    else if ((int)unaff_ESI < 0x200000) {
      if (unaff_ESI == 0x80000) {
        uVar1 = 0x13;
      }
      else {
        if (unaff_ESI != 0x100000) goto LAB_00e83485;
        uVar1 = 0x14;
      }
    }
    else if (unaff_ESI == 0x200000) {
      uVar1 = 0x15;
    }
    else {
      if (unaff_ESI != 0x400000) goto LAB_00e83485;
      uVar1 = 0x16;
    }
  }
  else if ((int)unaff_ESI < 0x8000000) {
    if ((int)unaff_ESI < 0x2000000) {
      if (unaff_ESI == 0x800000) {
        uVar1 = 0x17;
      }
      else {
        if (unaff_ESI != 0x1000000) {
LAB_00e83485:
          if (g_027bec98 != 0) {
            FUN_00d50b00();
          }
          FUN_00cc7b40(param_1,g_025908a0);
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_00e83436;
        }
        uVar1 = 0x18;
      }
    }
    else if (unaff_ESI == 0x2000000) {
      uVar1 = 0x19;
    }
    else {
      if (unaff_ESI != 0x4000000) goto LAB_00e83485;
      uVar1 = 0x1a;
    }
  }
  else if ((int)unaff_ESI < 0x20000000) {
    if (unaff_ESI == 0x8000000) {
      uVar1 = 0x1b;
    }
    else {
      if (unaff_ESI != 0x10000000) goto LAB_00e83485;
      uVar1 = 0x1c;
    }
  }
  else if (unaff_ESI == 0x20000000) {
    uVar1 = 0x1d;
  }
  else {
    if (unaff_ESI != 0x40000000) goto LAB_00e83485;
    uVar1 = 0x1e;
  }
  *(void*)((int64_t)puVar2 + 0x14) = uVar1;
LAB_00e83436:
  uVar3 = FUN_00e83020();
  puVar2[3] = uVar3;
  uVar3 = FUN_00e83020();
  puVar2[4] = uVar3;
  lVar4 = _vDSP_create_fftsetup();
  puVar2[5] = lVar4;
  if (lVar4 == 0) {
    FUN_00e8f250();
  }
  *this_ptr = puVar2;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 00e85330
// ============================================================
// Function: FUN_00e85330
// Address: 00e85330
// Size: 753 bytes
// Class: GNFastFourierTransformer

void* FUN_00e85330(void)

{
  bool bVar1;
  void*puVar2;
  int64_t this_ptr;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_000276d0();
  *puVar2 = &g_02566f40;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  (*g_02566f58)();
  FUN_00d7e190();
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  FUN_00d73b40();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d73c80();
  *(void*)((int64_t)puVar2 + 0x24) = *(void*)(this_ptr + 0x10);
  if (*(char *)(this_ptr + 0x19) == 'e') {
    FUN_00d7e190();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_00c7a7e0();
    if (local_38 == 0) {
      bVar1 = false;
    }
    else if (local_30 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
    }
    else {
      bVar1 = true;
    }
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (*(char *)(this_ptr + 0x19) == '@') {
    FUN_00d7e190();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_00c7ace0();
    if (local_38 == 0) {
      bVar1 = false;
    }
    else if (local_30 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
    }
    else {
      bVar1 = true;
    }
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00c7a080();
    if (local_38 == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
      if (local_30 == '\0') {
        FUN_00d50b00();
      }
    }
  }
  FUN_00c77c80();
  puVar2[0xc] = this_ptr;
  *(void**)(this_ptr + 0x30) = puVar2;
  if ((bVar1) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  return puVar2;
}



// ============================================================
// 0003cc30
// ============================================================
// Function: FUN_0003cc30
// Address: 0003cc30
// Size: 538 bytes
// Class: GNFastFourierTransformer

void FUN_0003cc30(void)

{
  void*this_ptr;
  
  *this_ptr = &g_02569280;
  this_ptr[3] = &g_025697c0;
  if (this_ptr[0x2b] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x29] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x28] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x26] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x25] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x24] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x23] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x22] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x21] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x1f] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x1e] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x1b] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x19] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x18] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x16] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x13] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x12] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x11] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x10] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0xf] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0xd] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0xb] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[10] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[9] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[8] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[7] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[6] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[5] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[4] != 0) {
    FUN_00d50b20();
  }
  *this_ptr = &g_0257f798;
  if (this_ptr[2] != 0) {
    FUN_00d50b20();
  }
  FUN_00d4ffa0();
  return;
}



// ============================================================
// 0003e610
// ============================================================
// Function: GNFastFourierTransformer_constructor
// Address: 0003e610
// Size: 789 bytes
// Class: GNFastFourierTransformer
// String references:
//   "GNFastFourierTransformer"

void GNFastFourierTransformer_constructor(void)

{
  uint64_t uVar1;
  int iVar2;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_0258fad0;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_0277799b == '\0') {
    FUN_0003e950();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 2) = 0;
  // [STATIC_INIT: property registration]
  if (g_0277799b == '\0') {
    FUN_0003eae0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x14) = 0;
  // [STATIC_INIT: property registration]
  if (g_0277799b == '\0') {
    FUN_0003ec70();
    FUN_00e87980();
  }
  this_ptr[5] = *(void*)(arg1 + 0x28);
  uVar1 = *(void*)(arg1 + 0x20);
  this_ptr[3] = *(void*)(arg1 + 0x18);
  this_ptr[4] = uVar1;
  return;
}

