// Function: FUN_00b2a160
// Address: 00b2a160
// Size: 1540 bytes
// Class: Unknown

void FUN_00b2a160(void)

{
  void*puVar1;
  double *pdVar2;
  uint64_t uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int64_t lVar7;
  double *pdVar8;
  uint8_t auVar9 [16];
  uint uVar10;
  uint64_t uVar11;
  uint uVar12;
  uint64_t uVar13;
  int64_t lVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint64_t arg1;
  uint64_t uVar18;
  uint64_t uVar19;
  int64_t lVar20;
  int64_t this_ptr;
  uint64_t uVar21;
  uint64_t uVar22;
  int64_t lVar23;
  int64_t lVar24;
  int64_t lVar25;
  float *pfVar26;
  void*puVar27;
  double dVar28;
  uint8_t auVar29 [16];
  double dVar30;
  uint8_t auVar31 [16];
  uint8_t auVar32 [16];
  int64_t local_50;
  
  lVar24 = *(int64_t *)(this_ptr + 0x10);
  puVar6 = *(uint **)(lVar24 + 0x108);
  uVar12 = *puVar6;
  uVar22 = (uint64_t)uVar12;
  if (arg1 != 0) {
    uVar17 = puVar6[2];
    uVar11 = (uint64_t)uVar17;
    uVar4 = puVar6[3];
    if (uVar11 == 0) {
      uVar12 = puVar6[8];
      uVar11 = (uint64_t)((uint)arg1 & 3);
      if (2 < arg1 - 1) {
        lVar24 = -(arg1 & 0xfffffffffffffffc);
        do {
          uVar17 = 1;
          if (uVar12 + 1 == uVar4) {
            if (uVar4 == 1) goto LAB_00b2a785;
LAB_00b2a7ae:
            uVar17 = uVar17 + 1;
            if (uVar17 != uVar4) goto LAB_00b2a7b7;
LAB_00b2a789:
            uVar12 = 0;
            uVar10 = 1;
            if (uVar4 != 1) {
LAB_00b2a7c4:
              uVar12 = uVar10;
            }
          }
          else {
            uVar17 = uVar12 + 2;
            if (uVar17 != uVar4) goto LAB_00b2a7ae;
LAB_00b2a785:
            uVar17 = 1;
            if (uVar4 == 1) goto LAB_00b2a789;
LAB_00b2a7b7:
            uVar12 = 0;
            uVar10 = uVar17 + 1;
            if (uVar17 + 1 != uVar4) goto LAB_00b2a7c4;
          }
          lVar24 = lVar24 + 4;
        } while (lVar24 != 0);
      }
      for (; uVar11 != 0; uVar11 = uVar11 - 1) {
        uVar12 = uVar12 + 1;
        if (uVar12 == uVar4) {
          uVar12 = 0;
        }
      }
      puVar6[8] = uVar12;
    }
    else {
      puVar27 = *(void**)(lVar24 + 0x110);
      lVar7 = *(int64_t *)(puVar6 + 6);
      uVar10 = puVar6[8];
      if (uVar22 == 0) {
        uVar13 = 0;
        do {
          uVar19 = (uint64_t)uVar10;
          uVar18 = 0;
          if (2 < uVar11 - 1) {
            do {
              *(void*)(*(int64_t *)(lVar7 + uVar18 * 8) + uVar19 * 4) = *puVar27;
              *(void*)(*(int64_t *)(lVar7 + 8 + uVar18 * 8) + uVar19 * 4) = puVar27[1];
              *(void*)(*(int64_t *)(lVar7 + 0x10 + uVar18 * 8) + uVar19 * 4) = puVar27[2];
              puVar1 = puVar27 + 3;
              puVar27 = puVar27 + 4;
              *(void*)(*(int64_t *)(lVar7 + 0x18 + uVar18 * 8) + uVar19 * 4) = *puVar1;
              uVar18 = uVar18 + 4;
            } while ((uVar17 & 0xfffffffc) != uVar18);
          }
          if ((uint64_t)(uVar17 & 3) != 0) {
            lVar24 = 0;
            do {
              *(void*)(*(int64_t *)(lVar7 + uVar18 * 8 + lVar24 * 2) + uVar19 * 4) =
                   *(void*)((int64_t)puVar27 + lVar24);
              lVar24 = lVar24 + 4;
            } while ((uint64_t)(uVar17 & 3) * 4 - lVar24 != 0);
            puVar27 = (void*)((int64_t)puVar27 + lVar24);
          }
          uVar10 = uVar10 + 1;
          if (uVar10 == uVar4) {
            uVar10 = 0;
          }
          puVar6[8] = uVar10;
          uVar13 = uVar13 + 1;
        } while (uVar13 != arg1);
      }
      else {
        local_50 = *(int64_t *)(lVar24 + 0x120);
        lVar24 = *(int64_t *)(puVar6 + 4);
        uVar13 = 0;
        do {
          uVar18 = 0;
          do {
            lVar20 = *(int64_t *)(lVar7 + uVar18 * 8);
            *(void*)(lVar20 + (uint64_t)uVar10 * 4) = *puVar27;
            pfVar26 = (float *)(local_50 + uVar18 * 4);
            uVar19 = 0;
            do {
              uVar5 = *(uint *)(lVar24 + uVar19 * 0x18);
              if (uVar5 == 0) {
                dVar28 = 0.0;
              }
              else {
                lVar14 = *(int64_t *)(lVar24 + 8 + uVar19 * 0x18);
                lVar23 = *(int64_t *)(lVar24 + 0x10 + uVar19 * 0x18);
                if (uVar5 == 1) {
                  dVar28 = 0.0;
                  uVar21 = 0;
                }
                else {
                  dVar28 = 0.0;
                  uVar21 = 0;
                  do {
                    iVar16 = uVar10 - *(int *)(lVar14 + uVar21 * 4);
                    iVar15 = uVar10 - *(int *)(lVar14 + 4 + uVar21 * 4);
                    dVar28 = (double)*(float *)(lVar20 + (int64_t)
                                                         (int)((iVar15 >> 0x1f & uVar4) + iVar15) *
                                                         4) * *(double *)(lVar23 + 8 + uVar21 * 8) +
                             (double)*(float *)(lVar20 + (int64_t)
                                                         (int)((iVar16 >> 0x1f & uVar4) + iVar16) *
                                                         4) * *(double *)(lVar23 + uVar21 * 8) +
                             dVar28;
                    uVar21 = uVar21 + 2;
                  } while ((uVar5 & 0xfffffffe) != uVar21);
                }
                if ((uVar5 & 1) != 0) {
                  iVar16 = uVar10 - *(int *)(lVar14 + uVar21 * 4);
                  dVar28 = dVar28 + (double)*(float *)(lVar20 + (int64_t)
                                                                (int)((iVar16 >> 0x1f & uVar4) +
                                                                     iVar16) * 4) *
                                    *(double *)(lVar23 + uVar21 * 8);
                }
              }
              *pfVar26 = (float)dVar28;
              pfVar26 = pfVar26 + uVar11;
              uVar19 = uVar19 + 1;
            } while (uVar19 != uVar22);
            puVar27 = puVar27 + 1;
            uVar18 = uVar18 + 1;
          } while (uVar18 != uVar11);
          uVar10 = uVar10 + 1;
          if (uVar10 == uVar4) {
            uVar10 = 0;
          }
          local_50 = local_50 + (uint64_t)(uVar12 * uVar17) * 4;
          puVar6[8] = uVar10;
          uVar13 = uVar13 + 1;
        } while (uVar13 != arg1);
      }
    }
  }
  uVar11 = _UNK_023945b8;
  uVar17 = _UNK_023945b4;
  uVar12 = g_023945b0;
  lVar24 = uVar22 * arg1;
  if (lVar24 != 0) {
    uVar4 = *(uint *)(this_ptr + 4);
    uVar22 = (uint64_t)uVar4;
    if (uVar22 != 0) {
      pdVar8 = *(double **)(*(int64_t *)(this_ptr + 0x10) + 0x100);
      lVar7 = *(int64_t *)(*(int64_t *)(this_ptr + 0x10) + 0x120);
      if (uVar4 < 4) {
        pfVar26 = (float *)(lVar7 + 8);
        do {
          dVar28 = (double)pfVar26[-2];
          dVar30 = (double)CONCAT44((uint)((uint64_t)dVar28 >> 0x20) ^ uVar17,
                                    SUB84(dVar28,0) ^ uVar12);
          if (dVar28 <= dVar30) {
            dVar28 = dVar30;
          }
          if (*pdVar8 <= dVar28 && dVar28 != *pdVar8) {
            *pdVar8 = dVar28;
          }
          if (uVar4 != 1) {
            dVar28 = (double)pfVar26[-1];
            dVar30 = (double)CONCAT44((uint)((uint64_t)dVar28 >> 0x20) ^ uVar17,
                                      SUB84(dVar28,0) ^ uVar12);
            if (dVar28 <= dVar30) {
              dVar28 = dVar30;
            }
            if (pdVar8[1] <= dVar28 && dVar28 != pdVar8[1]) {
              pdVar8[1] = dVar28;
            }
            if (uVar4 != 2) {
              dVar28 = (double)*pfVar26;
              dVar30 = (double)CONCAT44((uint)((uint64_t)dVar28 >> 0x20) ^ uVar17,
                                        SUB84(dVar28,0) ^ uVar12);
              if (dVar28 <= dVar30) {
                dVar28 = dVar30;
              }
              if (pdVar8[2] <= dVar28 && dVar28 != pdVar8[2]) {
                pdVar8[2] = dVar28;
              }
            }
          }
          pfVar26 = pfVar26 + uVar22;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
      }
      else {
        lVar20 = lVar7 + 8;
        uVar13 = uVar22 * 4;
        lVar23 = 0;
        uVar18 = CONCAT44(_UNK_023945b4,g_023945b0);
        lVar14 = lVar7;
        do {
          lVar25 = lVar23 * uVar22;
          if ((pdVar8 < (double *)(lVar7 + (uVar22 + lVar25) * 4)) &&
             ((double *)(lVar7 + lVar25 * 4) < pdVar8 + uVar22)) {
            uVar19 = 0;
LAB_00b2a5bc:
            uVar21 = uVar19;
            if ((uVar4 & 1) != 0) {
              dVar28 = (double)*(float *)(lVar7 + (lVar25 + uVar19) * 4);
              dVar30 = (double)CONCAT44((uint)((uint64_t)dVar28 >> 0x20) ^ uVar17,
                                        SUB84(dVar28,0) ^ uVar12);
              if (dVar28 <= dVar30) {
                dVar28 = dVar30;
              }
              if (pdVar8[uVar19] <= dVar28 && dVar28 != pdVar8[uVar19]) {
                pdVar8[uVar19] = dVar28;
              }
              uVar21 = uVar19 | 1;
            }
            if (~uVar19 != -uVar22) {
              do {
                dVar28 = (double)*(float *)(lVar14 + uVar21 * 4);
                dVar30 = (double)CONCAT44((uint)((uint64_t)dVar28 >> 0x20) ^ uVar17,
                                          SUB84(dVar28,0) ^ uVar12);
                if (dVar28 <= dVar30) {
                  dVar28 = dVar30;
                }
                if (pdVar8[uVar21] <= dVar28 && dVar28 != pdVar8[uVar21]) {
                  pdVar8[uVar21] = dVar28;
                }
                dVar28 = (double)*(float *)(lVar14 + 4 + uVar21 * 4);
                dVar30 = (double)CONCAT44((uint)((uint64_t)dVar28 >> 0x20) ^ uVar17,
                                          SUB84(dVar28,0) ^ uVar12);
                if (dVar28 <= dVar30) {
                  dVar28 = dVar30;
                }
                if (pdVar8[uVar21 + 1] <= dVar28 && dVar28 != pdVar8[uVar21 + 1]) {
                  pdVar8[uVar21 + 1] = dVar28;
                }
                uVar21 = uVar21 + 2;
              } while (uVar22 != uVar21);
            }
          }
          else {
            uVar19 = 0;
            do {
              uVar3 = *(void*)(lVar20 + -8 + uVar19);
              auVar31._0_8_ = (double)(float)uVar3;
              auVar31._8_8_ = (double)(float)((uint64_t)uVar3 >> 0x20);
              auVar29._0_8_ = (double)(float)*(void*)(lVar20 + uVar19);
              auVar29._8_8_ = (double)(float)((uint64_t)*(void*)(lVar20 + uVar19) >> 0x20);
              auVar32._8_8_ = (uint64_t)auVar31._8_8_ ^ uVar11;
              auVar32._0_8_ = (uint64_t)auVar31._0_8_ ^ uVar18;
              auVar32 = maxpd(auVar31,auVar32);
              pdVar2 = (double *)((int64_t)pdVar8 + uVar19 * 2);
              dVar28 = pdVar2[1];
              if (*pdVar2 < auVar32._0_8_) {
                *(double *)((int64_t)pdVar8 + uVar19 * 2) = auVar32._0_8_;
              }
              auVar9._8_8_ = (uint64_t)auVar29._8_8_ ^ uVar11;
              auVar9._0_8_ = (uint64_t)auVar29._0_8_ ^ uVar18;
              auVar29 = maxpd(auVar29,auVar9);
              if (dVar28 < auVar32._8_8_) {
                *(double *)((int64_t)pdVar8 + uVar19 * 2 + 8) = auVar32._8_8_;
                pdVar2 = (double *)((int64_t)pdVar8 + uVar19 * 2 + 0x10);
                dVar28 = *pdVar2;
                dVar30 = pdVar2[1];
              }
              else {
                pdVar2 = (double *)((int64_t)pdVar8 + uVar19 * 2 + 0x10);
                dVar28 = *pdVar2;
                dVar30 = pdVar2[1];
              }
              if (dVar28 < auVar29._0_8_) {
                *(double *)((int64_t)pdVar8 + uVar19 * 2 + 0x10) = auVar29._0_8_;
              }
              if (dVar30 < auVar29._8_8_) {
                *(double *)((int64_t)pdVar8 + uVar19 * 2 + 0x18) = auVar29._8_8_;
              }
              uVar19 = uVar19 + 0x10;
            } while ((uVar13 & 0xfffffffffffffff0) != uVar19);
            uVar19 = (uint64_t)(uVar4 & 0xfffffffc);
            if ((uVar4 & 0xfffffffc) != uVar22) goto LAB_00b2a5bc;
          }
          lVar23 = lVar23 + 1;
          lVar20 = lVar20 + uVar13;
          lVar14 = lVar14 + uVar13;
        } while (lVar23 != lVar24);
      }
    }
  }
  return;
}

