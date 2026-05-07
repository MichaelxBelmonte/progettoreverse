// ===================================================================
// MUTempoAnalyzerEvent — Complete reconstructed pseudocode
// 31 functions
// ===================================================================

// Registered properties (6):
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


// ============================================================
// 01602e90
// ============================================================
// Function: FUN_01602e90
// Address: 01602e90
// Size: 2609 bytes
// Class: MUTempoAnalyzerEvent
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


void FUN_01602e90(int64_t *param_1,uint param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  void*puVar3;
  void*puVar4;
  float *pfVar5;
  void*puVar6;
  void*puVar7;
  float fVar8;
  uint uVar9;
  int64_t lVar10;
  int64_t lVar11;
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
  float fVar24;
  float fVar25;
  uint32_t uVar26;
  uint32_t uVar27;
  uint32_t uVar28;
  uint64_t uVar29;
  uint64_t uVar30;
  uint64_t uVar31;
  int iVar32;
  uint64_t uVar33;
  uint64_t uVar34;
  int64_t lVar35;
  int64_t lVar36;
  uint64_t uVar37;
  uint64_t uVar38;
  void*puVar39;
  int64_t lVar40;
  uint64_t uVar41;
  uint uVar42;
  uint64_t uVar43;
  int64_t lVar44;
  uint64_t uVar45;
  uint64_t uVar46;
  uint64_t uVar47;
  uint unaff_ESI;
  int64_t lVar48;
  uint64_t uVar49;
  uint uVar50;
  int64_t *this_ptr;
  uint64_t uVar51;
  uint64_t uVar52;
  int iVar53;
  uint64_t uVar54;
  int64_t lVar55;
  int iVar56;
  int64_t lVar57;
  uint64_t uVar58;
  uint64_t uVar59;
  uint uVar60;
  int64_t lVar61;
  int64_t local_a8;
  int64_t local_90;
  char local_88;
  
  uVar58 = (uint64_t)param_2;
  FUN_00c8e690();
  if ((local_88 == '\0') && (local_90 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  if (0 < (int)param_2) {
    if ((int)unaff_ESI < 1) {
      uVar47 = 0;
      do {
        lVar10 = *(int64_t *)(*(int64_t *)(*param_1 + 0x10) + uVar47 * 8);
        if (lVar10 != 0) {
          FUN_00d50b00();
        }
        if (7 < *(int *)(lVar10 + 0x18)) {
          ___bzero();
        }
        FUN_00d50b20();
        uVar47 = uVar47 + 1;
      } while (uVar58 != uVar47);
    }
    else {
      lVar10 = *(int64_t *)(local_90 + 0x10);
      lVar48 = (int64_t)param_3;
      uVar59 = (uint64_t)unaff_ESI;
      uVar51 = (uint64_t)(unaff_ESI & 0xfffffff8);
      uVar52 = (uVar51 - 8 >> 3) + 1;
      uVar47 = lVar10 + lVar48 * 4;
      local_a8 = 4;
      uVar34 = 0;
      do {
        lVar11 = *(int64_t *)(*(int64_t *)(*param_1 + 0x10) + uVar34 * 8);
        if (lVar11 != 0) {
          FUN_00d50b00();
        }
        uVar9 = *(uint *)(lVar11 + 0x18);
        uVar42 = uVar9 + 3;
        if (-1 < (int)uVar9) {
          uVar42 = uVar9;
        }
        if (7 < (int)uVar9) {
          uVar42 = (int)uVar42 >> 2;
          uVar60 = uVar42 >> 1;
          ___bzero();
          lVar55 = *(int64_t *)(*this_ptr + 0x10);
          uVar33 = *(uint64_t *)(lVar11 + 0x10);
          uVar43 = (uint64_t)uVar42;
          if (uVar42 < 8) {
            lVar40 = (int64_t)(int)-uVar60 * 4 + 4 + uVar47;
            uVar50 = 0;
            uVar43 = uVar34;
            do {
              fVar8 = *(float *)(lVar55 + uVar43 * 4);
              uVar49 = 0;
              if ((uVar9 & 0xfffffffc) == 4) {
                iVar32 = 0;
              }
              else {
                do {
                  *(float *)(lVar40 + -4 + uVar49 * 4) =
                       *(float *)(uVar33 + uVar49 * 4) * fVar8 +
                       *(float *)(lVar40 + -4 + uVar49 * 4);
                  *(float *)(lVar40 + uVar49 * 4) =
                       *(float *)(uVar33 + 4 + uVar49 * 4) * fVar8 + *(float *)(lVar40 + uVar49 * 4)
                  ;
                  uVar49 = uVar49 + 2;
                } while ((uVar42 & 0xfffffffe) != uVar49);
                iVar32 = (int)uVar49;
              }
              if ((uVar42 & 1) != 0) {
                lVar35 = (int64_t)(int)((uVar50 - uVar60) + iVar32);
                *(float *)(uVar47 + lVar35 * 4) =
                     fVar8 * *(float *)(uVar33 + uVar49 * 4) + *(float *)(uVar47 + lVar35 * 4);
              }
              uVar43 = uVar43 + uVar58;
              uVar50 = uVar50 + 1;
              lVar40 = lVar40 + 4;
            } while (uVar50 != unaff_ESI);
          }
          else {
            iVar32 = -uVar60;
            uVar54 = (uint64_t)iVar32;
            lVar40 = lVar48 + uVar54;
            uVar49 = uVar33 + uVar43 * 4;
            uVar38 = (uint64_t)(uVar42 & 0xfffffff8);
            if (uVar38 == uVar43) {
              uVar41 = (uVar38 - 8 >> 3) + 1;
              lVar44 = (int64_t)iVar32 * 4 + 4 + uVar47;
              lVar35 = 0;
              uVar54 = uVar34;
              do {
                iVar53 = (int)lVar35 - uVar60;
                fVar8 = *(float *)(lVar55 + uVar54 * 4);
                if (((uint64_t)(lVar10 + (lVar40 + lVar35) * 4) < uVar49) &&
                   (uVar33 < lVar10 + (lVar40 + uVar43 + lVar35) * 4)) {
                  uVar37 = 0;
                  if ((uVar9 & 0xfffffffc) == 4) {
                    iVar56 = 0;
                  }
                  else {
                    do {
                      *(float *)(lVar44 + -4 + uVar37 * 4) =
                           *(float *)(uVar33 + uVar37 * 4) * fVar8 +
                           *(float *)(lVar44 + -4 + uVar37 * 4);
                      *(float *)(lVar44 + uVar37 * 4) =
                           *(float *)(uVar33 + 4 + uVar37 * 4) * fVar8 +
                           *(float *)(lVar44 + uVar37 * 4);
                      uVar37 = uVar37 + 2;
                    } while ((uVar42 & 0xfffffffe) != uVar37);
                    iVar56 = (int)uVar37;
                  }
                  if ((uVar42 & 1) != 0) {
                    lVar36 = (int64_t)(iVar53 + iVar56);
                    *(float *)(uVar47 + lVar36 * 4) =
                         fVar8 * *(float *)(uVar33 + uVar37 * 4) + *(float *)(uVar47 + lVar36 * 4);
                  }
                }
                else {
                  if (uVar38 - 8 == 0) {
                    lVar36 = 0;
                  }
                  else {
                    lVar36 = 0;
                    lVar61 = -(uVar41 & 0xfffffffffffffffe);
                    iVar56 = iVar32;
                    do {
                      pfVar1 = (float *)(uVar33 + lVar36 * 4);
                      fVar12 = pfVar1[1];
                      fVar13 = pfVar1[2];
                      fVar14 = pfVar1[3];
                      pfVar2 = (float *)(uVar33 + 0x10 + lVar36 * 4);
                      fVar15 = *pfVar2;
                      fVar16 = pfVar2[1];
                      fVar17 = pfVar2[2];
                      fVar18 = pfVar2[3];
                      lVar57 = (int64_t)iVar56;
                      pfVar5 = (float *)(uVar47 + lVar57 * 4);
                      fVar19 = pfVar5[1];
                      fVar20 = pfVar5[2];
                      fVar21 = pfVar5[3];
                      pfVar2 = (float *)(uVar47 + 0x10 + lVar57 * 4);
                      fVar22 = *pfVar2;
                      fVar23 = pfVar2[1];
                      fVar24 = pfVar2[2];
                      fVar25 = pfVar2[3];
                      pfVar2 = (float *)(uVar47 + lVar57 * 4);
                      *pfVar2 = *pfVar5 + *pfVar1 * fVar8;
                      pfVar2[1] = fVar19 + fVar12 * fVar8;
                      pfVar2[2] = fVar20 + fVar13 * fVar8;
                      pfVar2[3] = fVar21 + fVar14 * fVar8;
                      pfVar1 = (float *)(uVar47 + 0x10 + lVar57 * 4);
                      *pfVar1 = fVar22 + fVar15 * fVar8;
                      pfVar1[1] = fVar23 + fVar16 * fVar8;
                      pfVar1[2] = fVar24 + fVar17 * fVar8;
                      pfVar1[3] = fVar25 + fVar18 * fVar8;
                      pfVar1 = (float *)(uVar33 + 0x20 + lVar36 * 4);
                      fVar12 = pfVar1[1];
                      fVar13 = pfVar1[2];
                      fVar14 = pfVar1[3];
                      pfVar2 = (float *)(uVar33 + 0x30 + lVar36 * 4);
                      fVar15 = *pfVar2;
                      fVar16 = pfVar2[1];
                      fVar17 = pfVar2[2];
                      fVar18 = pfVar2[3];
                      lVar57 = (int64_t)(iVar56 + 8);
                      pfVar5 = (float *)(uVar47 + lVar57 * 4);
                      fVar19 = pfVar5[1];
                      fVar20 = pfVar5[2];
                      fVar21 = pfVar5[3];
                      pfVar2 = (float *)(uVar47 + 0x10 + lVar57 * 4);
                      fVar22 = *pfVar2;
                      fVar23 = pfVar2[1];
                      fVar24 = pfVar2[2];
                      fVar25 = pfVar2[3];
                      pfVar2 = (float *)(uVar47 + lVar57 * 4);
                      *pfVar2 = *pfVar5 + *pfVar1 * fVar8;
                      pfVar2[1] = fVar19 + fVar12 * fVar8;
                      pfVar2[2] = fVar20 + fVar13 * fVar8;
                      pfVar2[3] = fVar21 + fVar14 * fVar8;
                      pfVar1 = (float *)(uVar47 + 0x10 + lVar57 * 4);
                      *pfVar1 = fVar22 + fVar15 * fVar8;
                      pfVar1[1] = fVar23 + fVar16 * fVar8;
                      pfVar1[2] = fVar24 + fVar17 * fVar8;
                      pfVar1[3] = fVar25 + fVar18 * fVar8;
                      lVar36 = lVar36 + 0x10;
                      iVar56 = iVar56 + 0x10;
                      lVar61 = lVar61 + 2;
                    } while (lVar61 != 0);
                    if ((uVar41 & 1) == 0) goto LAB_0160326a;
                  }
                  pfVar1 = (float *)(uVar33 + lVar36 * 4);
                  fVar12 = pfVar1[1];
                  fVar13 = pfVar1[2];
                  fVar14 = pfVar1[3];
                  pfVar2 = (float *)(uVar33 + 0x10 + lVar36 * 4);
                  fVar15 = *pfVar2;
                  fVar16 = pfVar2[1];
                  fVar17 = pfVar2[2];
                  fVar18 = pfVar2[3];
                  lVar36 = (int64_t)(iVar53 + (int)lVar36);
                  pfVar5 = (float *)(uVar47 + lVar36 * 4);
                  fVar19 = pfVar5[1];
                  fVar20 = pfVar5[2];
                  fVar21 = pfVar5[3];
                  pfVar2 = (float *)(uVar47 + 0x10 + lVar36 * 4);
                  fVar22 = *pfVar2;
                  fVar23 = pfVar2[1];
                  fVar24 = pfVar2[2];
                  fVar25 = pfVar2[3];
                  pfVar2 = (float *)(uVar47 + lVar36 * 4);
                  *pfVar2 = *pfVar5 + *pfVar1 * fVar8;
                  pfVar2[1] = fVar19 + fVar12 * fVar8;
                  pfVar2[2] = fVar20 + fVar13 * fVar8;
                  pfVar2[3] = fVar21 + fVar14 * fVar8;
                  pfVar1 = (float *)(uVar47 + 0x10 + lVar36 * 4);
                  *pfVar1 = fVar22 + fVar15 * fVar8;
                  pfVar1[1] = fVar23 + fVar16 * fVar8;
                  pfVar1[2] = fVar24 + fVar17 * fVar8;
                  pfVar1[3] = fVar25 + fVar18 * fVar8;
                }
LAB_0160326a:
                uVar54 = uVar54 + uVar58;
                lVar35 = lVar35 + 1;
                iVar32 = iVar32 + 1;
                lVar44 = lVar44 + 4;
              } while ((uint)lVar35 != unaff_ESI);
            }
            else {
              uVar37 = (uVar38 - 8 >> 3) + 1;
              iVar32 = -uVar60;
              lVar35 = 0;
              uVar41 = uVar34;
              do {
                iVar32 = iVar32 + 1;
                iVar53 = (int)lVar35 - uVar60;
                fVar8 = *(float *)(lVar55 + uVar41 * 4);
                if (((uint64_t)(lVar10 + (lVar40 + lVar35) * 4) < uVar49) &&
                   (uVar33 < lVar10 + (lVar40 + uVar43 + lVar35) * 4)) {
                  uVar46 = 0;
                }
                else {
                  uVar46 = uVar38;
                  if (uVar38 - 8 == 0) {
                    lVar44 = 0;
                  }
                  else {
                    uVar45 = uVar54 & 0xffffffff;
                    lVar44 = 0;
                    lVar36 = -(uVar37 & 0xfffffffffffffffe);
                    do {
                      pfVar1 = (float *)(uVar33 + lVar44 * 4);
                      fVar12 = pfVar1[1];
                      fVar13 = pfVar1[2];
                      fVar14 = pfVar1[3];
                      pfVar2 = (float *)(uVar33 + 0x10 + lVar44 * 4);
                      fVar15 = *pfVar2;
                      fVar16 = pfVar2[1];
                      fVar17 = pfVar2[2];
                      fVar18 = pfVar2[3];
                      iVar56 = (int)uVar45;
                      lVar61 = (int64_t)iVar56;
                      pfVar5 = (float *)(uVar47 + lVar61 * 4);
                      fVar19 = pfVar5[1];
                      fVar20 = pfVar5[2];
                      fVar21 = pfVar5[3];
                      pfVar2 = (float *)(uVar47 + 0x10 + lVar61 * 4);
                      fVar22 = *pfVar2;
                      fVar23 = pfVar2[1];
                      fVar24 = pfVar2[2];
                      fVar25 = pfVar2[3];
                      pfVar2 = (float *)(uVar47 + lVar61 * 4);
                      *pfVar2 = *pfVar5 + *pfVar1 * fVar8;
                      pfVar2[1] = fVar19 + fVar12 * fVar8;
                      pfVar2[2] = fVar20 + fVar13 * fVar8;
                      pfVar2[3] = fVar21 + fVar14 * fVar8;
                      pfVar1 = (float *)(uVar47 + 0x10 + lVar61 * 4);
                      *pfVar1 = fVar22 + fVar15 * fVar8;
                      pfVar1[1] = fVar23 + fVar16 * fVar8;
                      pfVar1[2] = fVar24 + fVar17 * fVar8;
                      pfVar1[3] = fVar25 + fVar18 * fVar8;
                      pfVar1 = (float *)(uVar33 + 0x20 + lVar44 * 4);
                      fVar12 = pfVar1[1];
                      fVar13 = pfVar1[2];
                      fVar14 = pfVar1[3];
                      pfVar2 = (float *)(uVar33 + 0x30 + lVar44 * 4);
                      fVar15 = *pfVar2;
                      fVar16 = pfVar2[1];
                      fVar17 = pfVar2[2];
                      fVar18 = pfVar2[3];
                      lVar61 = (int64_t)(iVar56 + 8);
                      pfVar5 = (float *)(uVar47 + lVar61 * 4);
                      fVar19 = pfVar5[1];
                      fVar20 = pfVar5[2];
                      fVar21 = pfVar5[3];
                      pfVar2 = (float *)(uVar47 + 0x10 + lVar61 * 4);
                      fVar22 = *pfVar2;
                      fVar23 = pfVar2[1];
                      fVar24 = pfVar2[2];
                      fVar25 = pfVar2[3];
                      pfVar2 = (float *)(uVar47 + lVar61 * 4);
                      *pfVar2 = *pfVar5 + *pfVar1 * fVar8;
                      pfVar2[1] = fVar19 + fVar12 * fVar8;
                      pfVar2[2] = fVar20 + fVar13 * fVar8;
                      pfVar2[3] = fVar21 + fVar14 * fVar8;
                      pfVar1 = (float *)(uVar47 + 0x10 + lVar61 * 4);
                      *pfVar1 = fVar22 + fVar15 * fVar8;
                      pfVar1[1] = fVar23 + fVar16 * fVar8;
                      pfVar1[2] = fVar24 + fVar17 * fVar8;
                      pfVar1[3] = fVar25 + fVar18 * fVar8;
                      lVar44 = lVar44 + 0x10;
                      uVar45 = (uint64_t)(iVar56 + 0x10);
                      lVar36 = lVar36 + 2;
                    } while (lVar36 != 0);
                    if ((uVar37 & 1) == 0) goto LAB_016035df;
                  }
                  pfVar1 = (float *)(uVar33 + lVar44 * 4);
                  fVar12 = pfVar1[1];
                  fVar13 = pfVar1[2];
                  fVar14 = pfVar1[3];
                  pfVar2 = (float *)(uVar33 + 0x10 + lVar44 * 4);
                  fVar15 = *pfVar2;
                  fVar16 = pfVar2[1];
                  fVar17 = pfVar2[2];
                  fVar18 = pfVar2[3];
                  lVar44 = (int64_t)(iVar53 + (int)lVar44);
                  pfVar5 = (float *)(uVar47 + lVar44 * 4);
                  fVar19 = pfVar5[1];
                  fVar20 = pfVar5[2];
                  fVar21 = pfVar5[3];
                  pfVar2 = (float *)(uVar47 + 0x10 + lVar44 * 4);
                  fVar22 = *pfVar2;
                  fVar23 = pfVar2[1];
                  fVar24 = pfVar2[2];
                  fVar25 = pfVar2[3];
                  pfVar2 = (float *)(uVar47 + lVar44 * 4);
                  *pfVar2 = *pfVar5 + *pfVar1 * fVar8;
                  pfVar2[1] = fVar19 + fVar12 * fVar8;
                  pfVar2[2] = fVar20 + fVar13 * fVar8;
                  pfVar2[3] = fVar21 + fVar14 * fVar8;
                  pfVar1 = (float *)(uVar47 + 0x10 + lVar44 * 4);
                  *pfVar1 = fVar22 + fVar15 * fVar8;
                  pfVar1[1] = fVar23 + fVar16 * fVar8;
                  pfVar1[2] = fVar24 + fVar17 * fVar8;
                  pfVar1[3] = fVar25 + fVar18 * fVar8;
                }
LAB_016035df:
                iVar56 = (int)uVar46;
                uVar45 = uVar46;
                if ((uVar42 & 1) != 0) {
                  lVar44 = (int64_t)(iVar53 + iVar56);
                  *(float *)(uVar47 + lVar44 * 4) =
                       *(float *)(uVar33 + uVar46 * 4) * fVar8 + *(float *)(uVar47 + lVar44 * 4);
                  iVar56 = iVar56 + 1;
                  uVar45 = uVar46 | 1;
                }
                if (~uVar46 != -uVar43) {
                  lVar44 = uVar33 + 4 + uVar45 * 4;
                  lVar57 = (int64_t)(iVar56 + iVar32) * 4 + uVar47;
                  lVar61 = ((int64_t)iVar56 + uVar54) * 4 + uVar47;
                  lVar36 = 0;
                  do {
                    *(float *)(lVar61 + lVar36 * 4) =
                         *(float *)(lVar44 + -4 + lVar36 * 4) * fVar8 +
                         *(float *)(lVar61 + lVar36 * 4);
                    *(float *)(lVar57 + lVar36 * 4) =
                         *(float *)(lVar44 + lVar36 * 4) * fVar8 + *(float *)(lVar57 + lVar36 * 4);
                    lVar36 = lVar36 + 2;
                  } while (uVar43 - uVar45 != lVar36);
                }
                uVar41 = uVar41 + uVar58;
                lVar35 = lVar35 + 1;
                uVar54 = uVar54 + 1;
              } while ((uint)lVar35 != unaff_ESI);
            }
          }
          uVar33 = uVar34;
          if (param_2 == 1 && 7 < unaff_ESI) {
            if ((lVar55 + uVar34 * 4 < lVar10 + (lVar48 + uVar59) * 4) &&
               (uVar47 < lVar55 + (uVar34 + uVar59) * 4)) {
              uVar43 = 0;
            }
            else {
              if (uVar51 - 8 == 0) {
                lVar40 = 0;
LAB_0160383e:
                lVar35 = lVar40 * uVar58 + uVar34;
                puVar7 = (void*)(uVar47 + lVar40 * 4);
                uVar26 = puVar7[1];
                uVar27 = puVar7[2];
                uVar28 = puVar7[3];
                puVar39 = (void*)(uVar47 + 0x10 + lVar40 * 4);
                uVar29 = *puVar39;
                uVar30 = puVar39[1];
                puVar4 = (void*)(lVar55 + lVar35 * 4);
                *puVar4 = *puVar7;
                puVar4[1] = uVar26;
                puVar4[2] = uVar27;
                puVar4[3] = uVar28;
                puVar39 = (void*)(lVar55 + 0x10 + lVar35 * 4);
                *puVar39 = uVar29;
                puVar39[1] = uVar30;
              }
              else {
                puVar39 = (void*)(lVar55 + local_a8 * 4);
                lVar40 = 0;
                lVar35 = -(uVar52 & 0xfffffffffffffffe);
                do {
                  puVar6 = (void*)(uVar47 + lVar40 * 4);
                  uVar29 = puVar6[1];
                  puVar3 = (void*)(uVar47 + 0x10 + lVar40 * 4);
                  uVar30 = *puVar3;
                  uVar31 = puVar3[1];
                  puVar39[-2] = *puVar6;
                  puVar39[-1] = uVar29;
                  *puVar39 = uVar30;
                  puVar39[1] = uVar31;
                  puVar4 = (void*)(uVar47 + 0x20 + lVar40 * 4);
                  uVar26 = puVar4[1];
                  uVar27 = puVar4[2];
                  uVar28 = puVar4[3];
                  puVar3 = (void*)(uVar47 + 0x30 + lVar40 * 4);
                  uVar29 = *puVar3;
                  uVar30 = puVar3[1];
                  puVar3 = puVar39 + uVar58 * 4 + -2;
                  *(void*)puVar3 = *puVar4;
                  *(void*)((int64_t)puVar3 + 4) = uVar26;
                  *(void*)(puVar3 + 1) = uVar27;
                  *(void*)((int64_t)puVar3 + 0xc) = uVar28;
                  puVar39[uVar58 * 4] = uVar29;
                  (puVar39 + uVar58 * 4)[1] = uVar30;
                  lVar40 = lVar40 + 0x10;
                  puVar39 = puVar39 + uVar58 * 8;
                  lVar35 = lVar35 + 2;
                } while (lVar35 != 0);
                if ((uVar52 & 1) != 0) goto LAB_0160383e;
              }
              if (uVar51 == uVar59) goto LAB_01603870;
              uVar33 = uVar51 * uVar58 + uVar34;
              uVar43 = uVar51;
            }
          }
          else {
            uVar43 = 0;
          }
          uVar38 = ~uVar43;
          for (uVar49 = (uint64_t)(unaff_ESI & 3); uVar49 != 0; uVar49 = uVar49 - 1) {
            *(void*)(lVar55 + uVar33 * 4) = *(void*)(uVar47 + uVar43 * 4);
            uVar33 = uVar33 + uVar58;
            uVar43 = uVar43 + 1;
          }
          if (2 < uVar38 + uVar59) {
            do {
              *(void*)(lVar55 + uVar33 * 4) = *(void*)(uVar47 + uVar43 * 4);
              *(void*)(lVar55 + (uVar33 + uVar58) * 4) =
                   *(void*)(uVar47 + 4 + uVar43 * 4);
              *(void*)(lVar55 + uVar58 * 8 + uVar33 * 4) =
                   *(void*)(uVar47 + 8 + uVar43 * 4);
              *(void*)(lVar55 + uVar58 * 0xc + uVar33 * 4) =
                   *(void*)(uVar47 + 0xc + uVar43 * 4);
              uVar43 = uVar43 + 4;
              lVar55 = lVar55 + uVar58 * 0x10;
            } while (uVar59 != uVar43);
          }
        }
LAB_01603870:
        if (lVar11 != 0) {
          FUN_00d50b20();
        }
        uVar34 = uVar34 + 1;
        local_a8 = local_a8 + 1;
      } while (uVar34 != uVar58);
    }
  }
  if (local_90 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 016039b0
// ============================================================
// Function: FUN_016039b0
// Address: 016039b0
// Size: 2672 bytes
// Class: MUTempoAnalyzerEvent
// String references:
//   "filter2DimensionalMatrixHorizontallyWithFIRWithConstantSizeHannWindow: filterSize too big!"
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


void FUN_016039b0(uint param_1,int param_2,int param_3,uint param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  void*puVar8;
  void*puVar9;
  void*puVar10;
  void*puVar11;
  float fVar12;
  int64_t lVar13;
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
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  uint32_t uVar36;
  uint32_t uVar37;
  uint32_t uVar38;
  uint64_t uVar39;
  uint64_t uVar40;
  uint64_t uVar41;
  int64_t lVar42;
  int64_t lVar43;
  int64_t lVar44;
  uint64_t uVar45;
  int iVar46;
  uint64_t uVar47;
  uint64_t uVar48;
  uint64_t uVar49;
  int64_t lVar50;
  uint64_t uVar51;
  uint64_t uVar52;
  int64_t lVar53;
  int64_t lVar54;
  uint unaff_ESI;
  uint64_t uVar55;
  int64_t lVar56;
  uint64_t uVar57;
  int64_t *this_ptr;
  uint64_t uVar58;
  int iVar59;
  int64_t lVar60;
  int64_t lVar61;
  uint uVar62;
  uint64_t uVar63;
  int64_t lVar64;
  uint uVar65;
  uint64_t uVar66;
  uint uVar67;
  int64_t local_a0;
  char local_98;
  int64_t local_78;
  uint64_t local_40;
  int local_38;
  
  uVar63 = (uint64_t)unaff_ESI;
  param_4 = (~param_4 & 1) + param_4;
  uVar47 = (uint64_t)param_4;
  if (0xfe < (int)param_4) {
    FUN_00e828a0();
  }
  uVar66 = 0;
  if (-1 < (int)param_1) {
    uVar66 = (uint64_t)param_1;
  }
  uVar65 = (uint)uVar66;
  if (param_2 < param_3) {
    param_3 = param_2;
  }
  FUN_00c8e690();
  if ((local_98 == '\0') && (local_a0 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  lVar13 = *(int64_t *)(local_a0 + 0x10);
  lVar42 = FUN_00e84a00();
  if (param_3 - uVar65 != 0 && (int)uVar65 <= param_3) {
    if ((int)unaff_ESI < 1) {
      uVar62 = ~uVar65;
      uVar67 = param_3 - uVar65 & 3;
      if (uVar67 != 0) {
        iVar46 = 0;
        do {
          ___bzero();
          iVar46 = iVar46 + -1;
        } while (-uVar67 != iVar46);
        uVar65 = uVar65 - iVar46;
      }
      if (2 < uVar62 + param_3) {
        local_38 = param_3 - uVar65;
        do {
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          local_38 = local_38 + -4;
        } while (local_38 != 0);
      }
    }
    else {
      lVar60 = (int64_t)(int)param_4;
      iVar46 = -((int)param_4 / 2);
      lVar61 = (int64_t)param_2;
      uVar58 = (uint64_t)(param_4 & 0xfffffff8);
      uVar48 = (uint64_t)(unaff_ESI & 0xfffffff8);
      uVar1 = uVar58 - 8;
      uVar51 = (uVar1 >> 3) + 1;
      uVar49 = (uVar48 - 8 >> 3) + 1;
      local_78 = lVar61 * 0x20 + uVar66 * 4 + 0x10;
      uVar2 = lVar13 + lVar60 * 4;
      uVar3 = lVar42 + 4 + uVar47 * 4;
      lVar4 = lVar13 + 0x30 + lVar60 * 4;
      lVar43 = uVar66 * 4 + 0x10;
      lVar50 = 0;
      local_40 = uVar66;
      do {
        ___bzero();
        lVar64 = *(int64_t *)(*this_ptr + 0x10);
        if (0 < (int)param_4) {
          if (param_4 < 8) {
            uVar55 = 0;
            uVar52 = local_40;
            iVar59 = iVar46;
            do {
              fVar12 = *(float *)(lVar64 + uVar52 * 4);
              if (uVar47 == 1) {
                uVar45 = 0;
              }
              else {
                lVar44 = uVar2 + (int64_t)iVar59 * 4;
                uVar57 = 0;
                do {
                  *(float *)(lVar44 + uVar57 * 4) =
                       *(float *)(lVar42 + 4 + uVar57 * 4) * fVar12 +
                       *(float *)(lVar44 + uVar57 * 4);
                  uVar45 = uVar57 + 2;
                  *(float *)(lVar44 + 4 + uVar57 * 4) =
                       *(float *)(lVar42 + 8 + uVar57 * 4) * fVar12 +
                       *(float *)(lVar44 + 4 + uVar57 * 4);
                  uVar57 = uVar45;
                } while ((param_4 & 0xfffffffe) != uVar45);
              }
              if ((param_4 & 1) != 0) {
                lVar44 = (int64_t)(iVar46 + (int)uVar55) + uVar45;
                *(float *)(uVar2 + lVar44 * 4) =
                     fVar12 * *(float *)(lVar42 + 4 + uVar45 * 4) + *(float *)(uVar2 + lVar44 * 4);
              }
              uVar52 = uVar52 + lVar61;
              uVar55 = uVar55 + 1;
              iVar59 = iVar59 + 1;
            } while (uVar55 != uVar63);
          }
          else if (uVar58 == uVar47) {
            uVar55 = 0;
            uVar52 = local_40;
            iVar59 = iVar46;
            do {
              lVar44 = (int64_t)(iVar46 + (int)uVar55);
              fVar12 = *(float *)(lVar64 + uVar52 * 4);
              if (((uint64_t)(lVar13 + (lVar60 + lVar44) * 4) < uVar3) &&
                 (lVar42 + 4U < lVar13 + (lVar60 + uVar47 + lVar44) * 4)) {
                if (uVar47 == 1) {
                  uVar45 = 0;
                }
                else {
                  lVar54 = uVar2 + (int64_t)iVar59 * 4;
                  uVar57 = 0;
                  do {
                    *(float *)(lVar54 + uVar57 * 4) =
                         *(float *)(lVar42 + 4 + uVar57 * 4) * fVar12 +
                         *(float *)(lVar54 + uVar57 * 4);
                    uVar45 = uVar57 + 2;
                    *(float *)(lVar54 + 4 + uVar57 * 4) =
                         *(float *)(lVar42 + 8 + uVar57 * 4) * fVar12 +
                         *(float *)(lVar54 + 4 + uVar57 * 4);
                    uVar57 = uVar45;
                  } while ((param_4 & 0xfffffffe) != uVar45);
                }
                if ((param_4 & 1) != 0) {
                  *(float *)(uVar2 + (lVar44 + uVar45) * 4) =
                       fVar12 * *(float *)(lVar42 + 4 + uVar45 * 4) +
                       *(float *)(uVar2 + (lVar44 + uVar45) * 4);
                }
              }
              else {
                if (uVar1 == 0) {
                  lVar54 = 0;
                }
                else {
                  lVar56 = lVar4 + (int64_t)iVar59 * 4;
                  lVar54 = 0;
                  lVar53 = -(uVar51 & 0xfffffffffffffffe);
                  do {
                    pfVar5 = (float *)(lVar42 + 4 + lVar54 * 4);
                    fVar14 = pfVar5[1];
                    fVar15 = pfVar5[2];
                    fVar16 = pfVar5[3];
                    pfVar6 = (float *)(lVar42 + 0x14 + lVar54 * 4);
                    fVar17 = *pfVar6;
                    fVar18 = pfVar6[1];
                    fVar19 = pfVar6[2];
                    fVar20 = pfVar6[3];
                    pfVar7 = (float *)(lVar56 + -0x30 + lVar54 * 4);
                    fVar21 = pfVar7[1];
                    fVar22 = pfVar7[2];
                    fVar23 = pfVar7[3];
                    pfVar6 = (float *)(lVar56 + -0x20 + lVar54 * 4);
                    fVar24 = *pfVar6;
                    fVar25 = pfVar6[1];
                    fVar26 = pfVar6[2];
                    fVar27 = pfVar6[3];
                    pfVar6 = (float *)(lVar56 + -0x10 + lVar54 * 4);
                    fVar28 = *pfVar6;
                    fVar29 = pfVar6[1];
                    fVar30 = pfVar6[2];
                    fVar31 = pfVar6[3];
                    pfVar6 = (float *)(lVar56 + lVar54 * 4);
                    fVar32 = *pfVar6;
                    fVar33 = pfVar6[1];
                    fVar34 = pfVar6[2];
                    fVar35 = pfVar6[3];
                    pfVar6 = (float *)(lVar56 + -0x30 + lVar54 * 4);
                    *pfVar6 = *pfVar7 + *pfVar5 * fVar12;
                    pfVar6[1] = fVar21 + fVar14 * fVar12;
                    pfVar6[2] = fVar22 + fVar15 * fVar12;
                    pfVar6[3] = fVar23 + fVar16 * fVar12;
                    pfVar6 = (float *)(lVar56 + -0x20 + lVar54 * 4);
                    *pfVar6 = fVar24 + fVar17 * fVar12;
                    pfVar6[1] = fVar25 + fVar18 * fVar12;
                    pfVar6[2] = fVar26 + fVar19 * fVar12;
                    pfVar6[3] = fVar27 + fVar20 * fVar12;
                    pfVar6 = (float *)(lVar42 + 0x24 + lVar54 * 4);
                    fVar14 = pfVar6[1];
                    fVar15 = pfVar6[2];
                    fVar16 = pfVar6[3];
                    pfVar5 = (float *)(lVar42 + 0x34 + lVar54 * 4);
                    fVar17 = *pfVar5;
                    fVar18 = pfVar5[1];
                    fVar19 = pfVar5[2];
                    fVar20 = pfVar5[3];
                    pfVar5 = (float *)(lVar56 + -0x10 + lVar54 * 4);
                    *pfVar5 = *pfVar6 * fVar12 + fVar28;
                    pfVar5[1] = fVar14 * fVar12 + fVar29;
                    pfVar5[2] = fVar15 * fVar12 + fVar30;
                    pfVar5[3] = fVar16 * fVar12 + fVar31;
                    pfVar6 = (float *)(lVar56 + lVar54 * 4);
                    *pfVar6 = fVar17 * fVar12 + fVar32;
                    pfVar6[1] = fVar18 * fVar12 + fVar33;
                    pfVar6[2] = fVar19 * fVar12 + fVar34;
                    pfVar6[3] = fVar20 * fVar12 + fVar35;
                    lVar54 = lVar54 + 0x10;
                    lVar53 = lVar53 + 2;
                  } while (lVar53 != 0);
                  if ((uVar51 & 1) == 0) goto LAB_01603de0;
                }
                uVar45 = lVar54 * 4 | 4;
                pfVar6 = (float *)(lVar42 + uVar45);
                fVar14 = pfVar6[1];
                fVar15 = pfVar6[2];
                fVar16 = pfVar6[3];
                pfVar5 = (float *)(lVar42 + 0x10 + uVar45);
                fVar17 = *pfVar5;
                fVar18 = pfVar5[1];
                fVar19 = pfVar5[2];
                fVar20 = pfVar5[3];
                lVar44 = lVar44 + lVar54;
                pfVar5 = (float *)(uVar2 + lVar44 * 4);
                fVar21 = pfVar5[1];
                fVar22 = pfVar5[2];
                fVar23 = pfVar5[3];
                pfVar7 = (float *)(uVar2 + 0x10 + lVar44 * 4);
                fVar24 = *pfVar7;
                fVar25 = pfVar7[1];
                fVar26 = pfVar7[2];
                fVar27 = pfVar7[3];
                pfVar7 = (float *)(uVar2 + lVar44 * 4);
                *pfVar7 = *pfVar5 + *pfVar6 * fVar12;
                pfVar7[1] = fVar21 + fVar14 * fVar12;
                pfVar7[2] = fVar22 + fVar15 * fVar12;
                pfVar7[3] = fVar23 + fVar16 * fVar12;
                pfVar6 = (float *)(uVar2 + 0x10 + lVar44 * 4);
                *pfVar6 = fVar24 + fVar17 * fVar12;
                pfVar6[1] = fVar25 + fVar18 * fVar12;
                pfVar6[2] = fVar26 + fVar19 * fVar12;
                pfVar6[3] = fVar27 + fVar20 * fVar12;
              }
LAB_01603de0:
              uVar52 = uVar52 + lVar61;
              uVar55 = uVar55 + 1;
              iVar59 = iVar59 + 1;
            } while (uVar55 != uVar63);
          }
          else {
            uVar55 = 0;
            uVar52 = local_40;
            iVar59 = iVar46;
            do {
              lVar44 = (int64_t)(iVar46 + (int)uVar55);
              fVar12 = *(float *)(lVar64 + uVar52 * 4);
              if (((uint64_t)(lVar13 + (lVar60 + lVar44) * 4) < uVar3) &&
                 (lVar42 + 4U < lVar13 + (lVar60 + uVar47 + lVar44) * 4)) {
                uVar57 = 0;
              }
              else {
                if (uVar1 == 0) {
                  lVar54 = 0;
                  uVar45 = 1;
                }
                else {
                  lVar56 = lVar4 + (int64_t)iVar59 * 4;
                  lVar54 = 0;
                  lVar53 = -(uVar51 & 0xfffffffffffffffe);
                  do {
                    pfVar5 = (float *)(lVar42 + 4 + lVar54 * 4);
                    fVar14 = pfVar5[1];
                    fVar15 = pfVar5[2];
                    fVar16 = pfVar5[3];
                    pfVar6 = (float *)(lVar42 + 0x14 + lVar54 * 4);
                    fVar17 = *pfVar6;
                    fVar18 = pfVar6[1];
                    fVar19 = pfVar6[2];
                    fVar20 = pfVar6[3];
                    pfVar7 = (float *)(lVar56 + -0x30 + lVar54 * 4);
                    fVar21 = pfVar7[1];
                    fVar22 = pfVar7[2];
                    fVar23 = pfVar7[3];
                    pfVar6 = (float *)(lVar56 + -0x20 + lVar54 * 4);
                    fVar24 = *pfVar6;
                    fVar25 = pfVar6[1];
                    fVar26 = pfVar6[2];
                    fVar27 = pfVar6[3];
                    pfVar6 = (float *)(lVar56 + -0x10 + lVar54 * 4);
                    fVar28 = *pfVar6;
                    fVar29 = pfVar6[1];
                    fVar30 = pfVar6[2];
                    fVar31 = pfVar6[3];
                    pfVar6 = (float *)(lVar56 + lVar54 * 4);
                    fVar32 = *pfVar6;
                    fVar33 = pfVar6[1];
                    fVar34 = pfVar6[2];
                    fVar35 = pfVar6[3];
                    pfVar6 = (float *)(lVar56 + -0x30 + lVar54 * 4);
                    *pfVar6 = *pfVar7 + *pfVar5 * fVar12;
                    pfVar6[1] = fVar21 + fVar14 * fVar12;
                    pfVar6[2] = fVar22 + fVar15 * fVar12;
                    pfVar6[3] = fVar23 + fVar16 * fVar12;
                    pfVar6 = (float *)(lVar56 + -0x20 + lVar54 * 4);
                    *pfVar6 = fVar24 + fVar17 * fVar12;
                    pfVar6[1] = fVar25 + fVar18 * fVar12;
                    pfVar6[2] = fVar26 + fVar19 * fVar12;
                    pfVar6[3] = fVar27 + fVar20 * fVar12;
                    pfVar6 = (float *)(lVar42 + 0x24 + lVar54 * 4);
                    fVar14 = pfVar6[1];
                    fVar15 = pfVar6[2];
                    fVar16 = pfVar6[3];
                    pfVar5 = (float *)(lVar42 + 0x34 + lVar54 * 4);
                    fVar17 = *pfVar5;
                    fVar18 = pfVar5[1];
                    fVar19 = pfVar5[2];
                    fVar20 = pfVar5[3];
                    pfVar5 = (float *)(lVar56 + -0x10 + lVar54 * 4);
                    *pfVar5 = *pfVar6 * fVar12 + fVar28;
                    pfVar5[1] = fVar14 * fVar12 + fVar29;
                    pfVar5[2] = fVar15 * fVar12 + fVar30;
                    pfVar5[3] = fVar16 * fVar12 + fVar31;
                    pfVar6 = (float *)(lVar56 + lVar54 * 4);
                    *pfVar6 = fVar17 * fVar12 + fVar32;
                    pfVar6[1] = fVar18 * fVar12 + fVar33;
                    pfVar6[2] = fVar19 * fVar12 + fVar34;
                    pfVar6[3] = fVar20 * fVar12 + fVar35;
                    lVar54 = lVar54 + 0x10;
                    lVar53 = lVar53 + 2;
                  } while (lVar53 != 0);
                  uVar45 = uVar51 & 1;
                }
                uVar57 = uVar58;
                if (uVar45 != 0) {
                  uVar45 = lVar54 * 4 | 4;
                  pfVar6 = (float *)(lVar42 + uVar45);
                  fVar14 = pfVar6[1];
                  fVar15 = pfVar6[2];
                  fVar16 = pfVar6[3];
                  pfVar5 = (float *)(lVar42 + 0x10 + uVar45);
                  fVar17 = *pfVar5;
                  fVar18 = pfVar5[1];
                  fVar19 = pfVar5[2];
                  fVar20 = pfVar5[3];
                  lVar54 = lVar54 + lVar44;
                  pfVar5 = (float *)(uVar2 + lVar54 * 4);
                  fVar21 = pfVar5[1];
                  fVar22 = pfVar5[2];
                  fVar23 = pfVar5[3];
                  pfVar7 = (float *)(uVar2 + 0x10 + lVar54 * 4);
                  fVar24 = *pfVar7;
                  fVar25 = pfVar7[1];
                  fVar26 = pfVar7[2];
                  fVar27 = pfVar7[3];
                  pfVar7 = (float *)(uVar2 + lVar54 * 4);
                  *pfVar7 = *pfVar5 + *pfVar6 * fVar12;
                  pfVar7[1] = fVar21 + fVar14 * fVar12;
                  pfVar7[2] = fVar22 + fVar15 * fVar12;
                  pfVar7[3] = fVar23 + fVar16 * fVar12;
                  pfVar6 = (float *)(uVar2 + 0x10 + lVar54 * 4);
                  *pfVar6 = fVar24 + fVar17 * fVar12;
                  pfVar6[1] = fVar25 + fVar18 * fVar12;
                  pfVar6[2] = fVar26 + fVar19 * fVar12;
                  pfVar6[3] = fVar27 + fVar20 * fVar12;
                }
              }
              uVar45 = uVar57;
              if ((param_4 & 1) != 0) {
                *(float *)(uVar2 + (lVar44 + uVar57) * 4) =
                     *(float *)(lVar42 + (uVar57 | 1) * 4) * fVar12 +
                     *(float *)(uVar2 + (lVar44 + uVar57) * 4);
                uVar45 = uVar57 | 1;
              }
              if (uVar47 - 1 != uVar57) {
                lVar44 = uVar2 + (int64_t)iVar59 * 4;
                do {
                  *(float *)(lVar44 + uVar45 * 4) =
                       *(float *)(lVar42 + 4 + uVar45 * 4) * fVar12 +
                       *(float *)(lVar44 + uVar45 * 4);
                  *(float *)(lVar44 + 4 + uVar45 * 4) =
                       *(float *)(lVar42 + 8 + uVar45 * 4) * fVar12 +
                       *(float *)(lVar44 + 4 + uVar45 * 4);
                  uVar45 = uVar45 + 2;
                } while (uVar47 != uVar45);
              }
              uVar52 = uVar52 + lVar61;
              uVar55 = uVar55 + 1;
              iVar59 = iVar59 + 1;
            } while (uVar55 != uVar63);
          }
        }
        uVar52 = local_40;
        if (param_2 == 1 && 7 < unaff_ESI) {
          if ((lVar64 + (uVar66 + lVar50) * 4 < lVar13 + (lVar60 + uVar63) * 4) &&
             (uVar2 < lVar64 + (uVar63 + uVar66 + lVar50) * 4)) {
            uVar55 = 0;
            goto LAB_016042f0;
          }
          if (uVar48 - 8 == 0) {
            lVar44 = 0;
LAB_016042ad:
            lVar54 = lVar44 * lVar61 + local_40;
            puVar10 = (void*)(uVar2 + lVar44 * 4);
            uVar36 = puVar10[1];
            uVar37 = puVar10[2];
            uVar38 = puVar10[3];
            puVar8 = (void*)(uVar2 + 0x10 + lVar44 * 4);
            uVar39 = *puVar8;
            uVar40 = puVar8[1];
            puVar11 = (void*)(lVar64 + lVar54 * 4);
            *puVar11 = *puVar10;
            puVar11[1] = uVar36;
            puVar11[2] = uVar37;
            puVar11[3] = uVar38;
            puVar8 = (void*)(lVar64 + 0x10 + lVar54 * 4);
            *puVar8 = uVar39;
            puVar8[1] = uVar40;
          }
          else {
            lVar44 = 0;
            lVar54 = -(uVar49 & 0xfffffffffffffffe);
            lVar56 = lVar64;
            do {
              puVar8 = (void*)(lVar4 + -0x30 + lVar44 * 4);
              uVar39 = puVar8[1];
              puVar9 = (void*)(lVar4 + -0x20 + lVar44 * 4);
              uVar40 = *puVar9;
              uVar41 = puVar9[1];
              puVar9 = (void*)(lVar56 + -0x10 + lVar43);
              *puVar9 = *puVar8;
              puVar9[1] = uVar39;
              *(void*)(lVar56 + lVar43) = uVar40;
              ((void*)(lVar56 + lVar43))[1] = uVar41;
              puVar10 = (void*)(lVar4 + -0x10 + lVar44 * 4);
              uVar36 = puVar10[1];
              uVar37 = puVar10[2];
              uVar38 = puVar10[3];
              puVar8 = (void*)(lVar4 + lVar44 * 4);
              uVar39 = *puVar8;
              uVar40 = puVar8[1];
              puVar11 = (void*)(lVar56 + -0x10 + local_78);
              *puVar11 = *puVar10;
              puVar11[1] = uVar36;
              puVar11[2] = uVar37;
              puVar11[3] = uVar38;
              *(void*)(lVar56 + local_78) = uVar39;
              ((void*)(lVar56 + local_78))[1] = uVar40;
              lVar44 = lVar44 + 0x10;
              lVar56 = lVar56 + lVar61 * 0x40;
              lVar54 = lVar54 + 2;
            } while (lVar54 != 0);
            if ((uVar49 & 1) != 0) goto LAB_016042ad;
          }
          if (uVar48 != uVar63) {
            uVar52 = local_40 + uVar48 * lVar61;
            uVar55 = uVar48;
            goto LAB_016042f0;
          }
        }
        else {
          uVar55 = 0;
LAB_016042f0:
          uVar57 = ~uVar55;
          for (uVar45 = (uint64_t)(unaff_ESI & 3); uVar45 != 0; uVar45 = uVar45 - 1) {
            *(void*)(lVar64 + uVar52 * 4) = *(void*)(uVar2 + uVar55 * 4);
            uVar52 = uVar52 + lVar61;
            uVar55 = uVar55 + 1;
          }
          if (2 < uVar57 + uVar63) {
            do {
              *(void*)(lVar64 + uVar52 * 4) = *(void*)(uVar2 + uVar55 * 4);
              *(void*)(lVar64 + (uVar52 + lVar61) * 4) =
                   *(void*)(uVar2 + 4 + uVar55 * 4);
              *(void*)(lVar64 + lVar61 * 8 + uVar52 * 4) =
                   *(void*)(uVar2 + 8 + uVar55 * 4);
              *(void*)(lVar64 + lVar61 * 0xc + uVar52 * 4) =
                   *(void*)(uVar2 + 0xc + uVar55 * 4);
              uVar55 = uVar55 + 4;
              lVar64 = lVar64 + lVar61 * 0x10;
            } while (uVar63 != uVar55);
          }
        }
        local_40 = local_40 + 1;
        lVar50 = lVar50 + 1;
        local_78 = local_78 + 4;
        lVar43 = lVar43 + 4;
      } while ((int)local_40 != param_3);
    }
  }
  if (local_a0 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01600720
// ============================================================
// Function: FUN_01600720
// Address: 01600720
// Size: 2532 bytes
// Class: MUTempoAnalyzerEvent
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


void FUN_01600720(void)

{
  uint8_t auVar1 [16];
  uint uVar2;
  int64_t lVar3;
  uint8_t (*pauVar4) [16];
  int64_t *plVar5;
  int64_t *plVar6;
  uint8_t auVar7 [16];
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
  int iVar18;
  int iVar19;
  code *pcVar20;
  int64_t lVar21;
  int64_t lVar22;
  int64_t lVar23;
  int64_t lVar24;
  int64_t lVar25;
  int64_t lVar26;
  int64_t lVar27;
  int64_t lVar28;
  int64_t lVar29;
  int64_t lVar30;
  int64_t lVar31;
  int64_t lVar32;
  int64_t lVar33;
  int64_t lVar34;
  int64_t *plVar35;
  char cVar36;
  char cVar37;
  void*puVar38;
  int64_t *plVar39;
  void *pvVar40;
  int64_t lVar41;
  int64_t *plVar42;
  void* pVar43;
  uint8_t (*pauVar44) [16];
  int64_t *plVar45;
  uint64_t uVar46;
  bool bVar47;
  uint8_t auVar48 [16];
  uint8_t auVar49 [16];
  uint8_t auVar50 [16];
  uint8_t auVar51 [16];
  uint8_t auVar52 [16];
  uint8_t auVar53 [16];
  uint8_t auVar54 [16];
  uint8_t auVar55 [16];
  uint8_t auVar56 [16];
  int64_t *local_40;
  char local_38;
  
  plVar35 = local_40;
  puVar38 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar38 = &g_02572358;
  pcVar20 = g_02572370;
  (*g_02572370)();
  bVar47 = g_028ad750 == (void*)0x0;
  g_028ad750 = puVar38;
  if (((bVar47) || (FUN_00d50b20(), g_028ad750 != (void*)0x0)) && (g_028ad758 == '\0')) {
    g_028ad758 = '\x01';
    FUN_00e8cb90();
  }
  puVar38 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar38 = &g_02572358;
  (*pcVar20)();
  bVar47 = g_028ad760 == (void*)0x0;
  g_028ad760 = puVar38;
  if (((bVar47) || (FUN_00d50b20(), g_028ad760 != (void*)0x0)) && (g_028ad768 == '\0')) {
    g_028ad768 = '\x01';
    FUN_00e8cb90();
  }
  FUN_018d8790();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  uVar2 = *(uint *)((int64_t)local_40 + 0xc);
  if (0 < (int)uVar2) {
    uVar46 = 0;
    do {
      lVar3 = *(int64_t *)(plVar35[2] + uVar46 * 8);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      FUN_018d8750();
      if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      FUN_018d86f0();
      if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00c8e690();
      if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      ___bzero();
      iVar19 = _UNK_0241134c;
      iVar18 = _UNK_02411348;
      iVar17 = _UNK_02411344;
      iVar16 = g_02411340;
      iVar15 = _UNK_0241133c;
      iVar14 = _UNK_02411338;
      iVar13 = _UNK_02411334;
      iVar12 = g_02411330;
      auVar52 = g_02411320;
      iVar11 = _UNK_023de2bc;
      iVar10 = _UNK_023de2b8;
      iVar9 = _UNK_023de2b4;
      iVar8 = g_023de2b0;
      auVar7 = g_023b2d50;
      pauVar44 = (uint8_t (*) [16])local_40[2];
      pauVar4 = (uint8_t (*) [16])local_40[2];
      auVar1 = *pauVar44;
      auVar49 = auVar1 & g_02411320;
      auVar50._0_4_ = -(uint)(auVar49._0_4_ == g_023de2b0);
      auVar50._4_4_ = -(uint)(auVar49._4_4_ == _UNK_023de2b4);
      auVar50._8_4_ = -(uint)(auVar49._8_4_ == _UNK_023de2b8);
      auVar50._12_4_ = -(uint)(auVar49._12_4_ == _UNK_023de2bc);
      auVar54._0_4_ = -(uint)(auVar1._0_4_ == g_02411330);
      auVar54._4_4_ = -(uint)(auVar1._4_4_ == _UNK_02411334);
      auVar54._8_4_ = -(uint)(auVar1._8_4_ == _UNK_02411338);
      auVar54._12_4_ = -(uint)(auVar1._12_4_ == _UNK_0241133c);
      auVar49._0_4_ = -(uint)(auVar1._0_4_ == g_02411340);
      auVar49._4_4_ = -(uint)(auVar1._4_4_ == _UNK_02411344);
      auVar49._8_4_ = -(uint)(auVar1._8_4_ == _UNK_02411348);
      auVar49._12_4_ = -(uint)(auVar1._12_4_ == _UNK_0241134c);
      *pauVar4 = (auVar49 | auVar54 | auVar50) & g_023b2d50;
      auVar1 = pauVar44[1];
      auVar49 = auVar1 & auVar52;
      auVar51._0_4_ = -(uint)(auVar49._0_4_ == iVar8);
      auVar51._4_4_ = -(uint)(auVar49._4_4_ == iVar9);
      auVar51._8_4_ = -(uint)(auVar49._8_4_ == iVar10);
      auVar51._12_4_ = -(uint)(auVar49._12_4_ == iVar11);
      auVar55._0_4_ = -(uint)(auVar1._0_4_ == iVar12);
      auVar55._4_4_ = -(uint)(auVar1._4_4_ == iVar13);
      auVar55._8_4_ = -(uint)(auVar1._8_4_ == iVar14);
      auVar55._12_4_ = -(uint)(auVar1._12_4_ == iVar15);
      auVar48._0_4_ = -(uint)(auVar1._0_4_ == iVar16);
      auVar48._4_4_ = -(uint)(auVar1._4_4_ == iVar17);
      auVar48._8_4_ = -(uint)(auVar1._8_4_ == iVar18);
      auVar48._12_4_ = -(uint)(auVar1._12_4_ == iVar19);
      pauVar4[1] = (auVar48 | auVar55 | auVar51) & auVar7;
      auVar1 = pauVar44[2];
      auVar52 = auVar1 & auVar52;
      auVar53._0_4_ = -(uint)(auVar52._0_4_ == iVar8);
      auVar53._4_4_ = -(uint)(auVar52._4_4_ == iVar9);
      auVar53._8_4_ = -(uint)(auVar52._8_4_ == iVar10);
      auVar53._12_4_ = -(uint)(auVar52._12_4_ == iVar11);
      auVar56._0_4_ = -(uint)(auVar1._0_4_ == iVar12);
      auVar56._4_4_ = -(uint)(auVar1._4_4_ == iVar13);
      auVar56._8_4_ = -(uint)(auVar1._8_4_ == iVar14);
      auVar56._12_4_ = -(uint)(auVar1._12_4_ == iVar15);
      auVar52._0_4_ = -(uint)(auVar1._0_4_ == iVar16);
      auVar52._4_4_ = -(uint)(auVar1._4_4_ == iVar17);
      auVar52._8_4_ = -(uint)(auVar1._8_4_ == iVar18);
      auVar52._12_4_ = -(uint)(auVar1._12_4_ == iVar19);
      pauVar4[2] = (auVar52 | auVar56 | auVar53) & auVar7;
      plVar39 = (int64_t *)FUN_00e8fc40();
      pVar43 = (void*)pauVar44;
      FUN_00d4ff40();
      *plVar39 = (int64_t)&g_025f4940;
      *(uint8_t (*) [16])(plVar39 + 7) = (uint8_t  [16])0x0;
      plVar39[9] = 0;
      FUN_00d500e0();
      pvVar40 = _pthread_getspecific(pVar43);
      if (pvVar40 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015ff220();
      FUN_018d8720();
      pvVar40 = _pthread_getspecific(pVar43);
      if ((pvVar40 == (void *)0x0) || (lVar41 = FUN_00e8b990(), lVar41 == 0)) {
        plVar45 = (int64_t *)plVar39[8];
        plVar5 = plVar39;
      }
      else {
        plVar5 = (int64_t *)plVar39[(uint64_t)(*(uint *)(lVar41 + 0x154) & 1) + 4];
        plVar45 = (int64_t *)plVar5[8];
      }
      if (plVar45 != local_40) {
        plVar42 = local_40;
        if (local_38 == '\0') {
          if (local_40 == (int64_t *)0x0) {
            plVar42 = (int64_t *)0x0;
            goto LAB_01600b0a;
          }
          FUN_00d50b00();
          plVar6 = (int64_t *)plVar5[8];
          plVar5[8] = (int64_t)local_40;
        }
        else {
          local_38 = '\0';
LAB_01600b0a:
          plVar5[8] = (int64_t)plVar42;
          plVar6 = plVar45;
        }
        plVar45 = plVar42;
        if (plVar6 != (int64_t *)0x0) {
          FUN_00d50b20();
          plVar45 = local_40;
        }
      }
      if ((local_38 != '\0') && (plVar45 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d21140();
      lVar41 = g_027cc8f0;
      if (g_027cc8f0 != 0) {
        FUN_00d50b00();
      }
      cVar36 = (**(code **)(*local_40 + 0x50))();
      lVar24 = g_02781708;
      cVar37 = '\x01';
      if (cVar36 == '\0') {
        if (g_02781708 != 0) {
          FUN_00d50b00();
        }
        cVar36 = (**(code **)(*local_40 + 0x50))();
        lVar23 = g_02781678;
        cVar37 = '\x01';
        if (cVar36 == '\0') {
          if (g_02781678 != 0) {
            FUN_00d50b00();
          }
          cVar36 = (**(code **)(*local_40 + 0x50))();
          lVar34 = g_027cc8a0;
          cVar37 = '\x01';
          if (cVar36 == '\0') {
            if (g_027cc8a0 != 0) {
              FUN_00d50b00();
            }
            cVar36 = (**(code **)(*local_40 + 0x50))();
            lVar21 = g_026fce10;
            cVar37 = '\x01';
            if (cVar36 == '\0') {
              if (g_026fce10 != 0) {
                FUN_00d50b00();
              }
              cVar36 = (**(code **)(*local_40 + 0x50))();
              lVar25 = g_027c7dd8;
              cVar37 = '\x01';
              if (cVar36 == '\0') {
                if (g_027c7dd8 != 0) {
                  FUN_00d50b00();
                }
                cVar36 = (**(code **)(*local_40 + 0x50))();
                lVar26 = g_027c7de0;
                cVar37 = '\x01';
                if (cVar36 == '\0') {
                  if (g_027c7de0 != 0) {
                    FUN_00d50b00();
                  }
                  cVar36 = (**(code **)(*local_40 + 0x50))();
                  lVar27 = g_027c7de8;
                  cVar37 = '\x01';
                  if (cVar36 == '\0') {
                    if (g_027c7de8 != 0) {
                      FUN_00d50b00();
                    }
                    cVar36 = (**(code **)(*local_40 + 0x50))();
                    lVar28 = g_027c7df0;
                    cVar37 = '\x01';
                    if (cVar36 == '\0') {
                      if (g_027c7df0 != 0) {
                        FUN_00d50b00();
                      }
                      cVar36 = (**(code **)(*local_40 + 0x50))();
                      lVar29 = g_027c7df8;
                      cVar37 = '\x01';
                      if (cVar36 == '\0') {
                        if (g_027c7df8 != 0) {
                          FUN_00d50b00();
                        }
                        cVar36 = (**(code **)(*local_40 + 0x50))();
                        lVar22 = g_0270b790;
                        cVar37 = '\x01';
                        if (cVar36 == '\0') {
                          if (g_0270b790 != 0) {
                            FUN_00d50b00();
                          }
                          cVar36 = (**(code **)(*local_40 + 0x50))();
                          lVar30 = g_027c7e00;
                          cVar37 = '\x01';
                          if (cVar36 == '\0') {
                            if (g_027c7e00 != 0) {
                              FUN_00d50b00();
                            }
                            cVar36 = (**(code **)(*local_40 + 0x50))();
                            lVar31 = g_027c7e08;
                            cVar37 = '\x01';
                            if (cVar36 == '\0') {
                              if (g_027c7e08 != 0) {
                                FUN_00d50b00();
                              }
                              cVar36 = (**(code **)(*local_40 + 0x50))();
                              lVar32 = g_027c7e10;
                              cVar37 = '\x01';
                              if (cVar36 == '\0') {
                                if (g_027c7e10 != 0) {
                                  FUN_00d50b00();
                                }
                                cVar36 = (**(code **)(*local_40 + 0x50))();
                                lVar33 = g_027c7e18;
                                cVar37 = '\x01';
                                if (cVar36 == '\0') {
                                  if (g_027c7e18 != 0) {
                                    FUN_00d50b00();
                                  }
                                  cVar37 = (**(code **)(*local_40 + 0x50))();
                                  if (lVar33 != 0) {
                                    FUN_00d50b20();
                                  }
                                }
                                if (lVar32 != 0) {
                                  FUN_00d50b20();
                                }
                              }
                              if (lVar31 != 0) {
                                FUN_00d50b20();
                              }
                            }
                            if (lVar30 != 0) {
                              FUN_00d50b20();
                            }
                          }
                          if (lVar22 != 0) {
                            FUN_00d50b20();
                          }
                        }
                        if (lVar29 != 0) {
                          FUN_00d50b20();
                        }
                      }
                      if (lVar28 != 0) {
                        FUN_00d50b20();
                      }
                    }
                    if (lVar27 != 0) {
                      FUN_00d50b20();
                    }
                  }
                  if (lVar26 != 0) {
                    FUN_00d50b20();
                  }
                }
                if (lVar25 != 0) {
                  FUN_00d50b20();
                }
              }
              if (lVar21 != 0) {
                FUN_00d50b20();
              }
            }
            if (lVar34 != 0) {
              FUN_00d50b20();
            }
          }
          if (lVar23 != 0) {
            FUN_00d50b20();
          }
        }
        if (lVar24 != 0) {
          FUN_00d50b20();
        }
      }
      if (lVar41 != 0) {
        FUN_00d50b20();
      }
      if (cVar37 != '\0') {
        FUN_00d21140();
      }
      local_38 = '\0';
      FUN_00d50b20();
      FUN_00d50b20();
      FUN_00d50b20();
      FUN_00d50b20();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      uVar46 = uVar46 + 1;
      local_40 = plVar39;
    } while (uVar2 != uVar46);
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 015fc990
// ============================================================
// Function: FUN_015fc990
// Address: 015fc990
// Size: 2176 bytes
// Class: MUTempoAnalyzerEvent
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


void FUN_015fc990(float param_1,int param_2,size_t param_3,size_t param_4)

{
  float *pfVar1;
  int64_t lVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int64_t lVar8;
  int64_t *plVar9;
  int in_ECX;
  void *pvVar10;
  uint64_t uVar11;
  int iVar12;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar13;
  size_t sVar14;
  int iVar15;
  uint uVar16;
  int64_t *plVar17;
  size_t sVar18;
  int64_t lVar19;
  float fVar20;
  uint32_t uVar21;
  uint32_t uVar22;
  int64_t local_60;
  float local_54;
  int64_t local_48;
  char local_40;
  int local_38;
  
  *(int *)(this_ptr + 0x28) = param_2;
  *(int *)(this_ptr + 0x2c) = in_ECX;
  sVar14 = in_ECX - 2U;
  if ((int)param_3 <= (int)(in_ECX - 2U)) {
    sVar14 = param_3;
  }
  *(size_t *)(this_ptr + 0x30) = sVar14;
  pvVar10 = (void *)(uint64_t)(sVar14 * param_2);
  sVar14 = param_3;
  FUN_00c8e690();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  lVar8 = *(int64_t *)(this_ptr + 0x18);
  if (lVar8 == local_48) {
    FUN_00d50b20();
  }
  else {
    *(int64_t *)(this_ptr + 0x18) = local_48;
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (3 < (int)*(uint *)(local_48 + 0x18)) {
    _memset(pvVar10,((*(uint *)(local_48 + 0x18) >> 2) - 1) * 4 + 4,sVar14);
  }
  lVar8 = *(int64_t *)(this_ptr + 0x20);
  if (lVar8 == local_48) {
    FUN_00d50b20();
  }
  else {
    *(int64_t *)(this_ptr + 0x20) = local_48;
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
  }
  *(void*)(this_ptr + 0x34) = 0xffffffff;
  *(void*)(this_ptr + 0x38) = 0;
  sVar18 = param_4;
  if ((int)param_3 < (int)param_4) {
    sVar18 = param_3;
  }
  if ((int)param_4 < (int)param_3) {
    iVar15 = param_3 - sVar18;
    FUN_00c8e690();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    local_60 = local_48;
    ___bzero();
    lVar8 = FUN_00e84280();
    iVar5 = FUN_00e84a40();
    if (-1 < iVar15) {
      iVar12 = iVar5 / 2;
      fVar20 = (float)iVar12 / (float)iVar15;
      uVar16 = iVar15 + 1;
      lVar2 = *(int64_t *)(local_48 + 0x10);
      if (uVar16 == 1) {
        uVar11 = 0;
      }
      else {
        sVar14 = uVar16 & 0xfffffffe;
        lVar13 = 0;
        do {
          iVar15 = (int)((float)(int)lVar13 * fVar20) + iVar12;
          uVar22 = 0;
          uVar21 = 0;
          if (iVar15 < iVar5) {
            uVar21 = *(void*)(lVar8 + (int64_t)iVar15 * 4);
          }
          *(void*)(lVar2 + lVar13 * 4) = uVar21;
          iVar15 = (int)((float)((int)lVar13 + 1) * fVar20) + iVar12;
          if (iVar15 < iVar5) {
            uVar22 = *(void*)(lVar8 + (int64_t)iVar15 * 4);
          }
          *(void*)(lVar2 + 4 + lVar13 * 4) = uVar22;
          uVar11 = lVar13 + 2;
          lVar13 = lVar13 + 2;
        } while (sVar14 != uVar11);
      }
      if ((uVar16 & 1) != 0) {
        iVar12 = iVar12 + (int)(fVar20 * (float)(int)uVar11);
        uVar21 = 0;
        if (iVar12 < iVar5) {
          uVar21 = *(void*)(lVar8 + (int64_t)iVar12 * 4);
        }
        *(void*)(lVar2 + uVar11 * 4) = uVar21;
      }
    }
  }
  else {
    local_60 = 0;
  }
  iVar15 = *(int *)(this_ptr + 0x28);
  uVar16 = *(int *)(this_ptr + 0x30) * iVar15;
  if (0 < (int)uVar16) {
    _memset((void *)(uint64_t)uVar16,uVar16 * 4,sVar14);
    iVar15 = *(int *)(this_ptr + 0x28);
  }
  if (0 < iVar15) {
    lVar8 = (int64_t)(int)sVar18;
    iVar15 = *(int *)(this_ptr + 0x30);
    iVar12 = 0;
    local_38 = 0;
    plVar9 = (int64_t *)0x0;
    bVar3 = false;
    iVar5 = iVar15;
    do {
      if (1 < iVar5) {
        lVar2 = *(int64_t *)(*arg1 + 0x10);
        iVar7 = *(int *)(this_ptr + 0x2c);
        lVar13 = *(int64_t *)(*(int64_t *)(this_ptr + 0x18) + 0x10);
        if (local_60 == 0) {
          if (0.0 < param_1) {
            lVar2 = lVar2 + (int64_t)(iVar7 * iVar12) * 4;
            iVar7 = iVar5 * iVar12;
            lVar19 = 1;
            plVar17 = plVar9;
            iVar5 = iVar15;
            do {
              fVar20 = *(float *)(lVar2 + lVar19 * 4);
              pfVar1 = (float *)(lVar2 + -4 + lVar19 * 4);
              plVar9 = plVar17;
              if (((*pfVar1 <= fVar20 && fVar20 != *pfVar1) &&
                  (*(float *)(lVar2 + 4 + lVar19 * 4) <= fVar20)) && (param_1 < fVar20)) {
                plVar9 = (int64_t *)FUN_00e8fc40();
                FUN_011db140();
                (**(code **)(*plVar9 + 0x18))();
                *(int *)((int64_t)plVar9 + 0xc) = iVar12;
                *(int *)(plVar9 + 2) = (int)lVar19;
                *(float *)((int64_t)plVar9 + 0x1c) = fVar20;
                if (plVar17 == plVar9) {
                  if (bVar3) {
                    FUN_00d50b20();
                    plVar9 = plVar17;
                    bVar4 = bVar3;
                  }
                  else {
                    plVar9 = plVar17;
                    bVar4 = true;
                  }
                }
                else {
                  bVar4 = true;
                  if ((bVar3) && (plVar17 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                bVar3 = bVar4;
                *(int *)(lVar13 + (int64_t)iVar7 * 4 + lVar19 * 4) = local_38;
                FUN_00d21140();
                local_38 = local_38 + 1;
                iVar5 = *(int *)(this_ptr + 0x30);
              }
              lVar19 = lVar19 + 1;
              plVar17 = plVar9;
              iVar15 = iVar5;
            } while (lVar19 < iVar5);
          }
          else {
            iVar6 = iVar5 * iVar12;
            lVar2 = lVar2 + (int64_t)(iVar7 * iVar12) * 4;
            lVar19 = 1;
            plVar17 = plVar9;
            iVar5 = iVar15;
            do {
              fVar20 = *(float *)(lVar2 + lVar19 * 4);
              pfVar1 = (float *)(lVar2 + -4 + lVar19 * 4);
              plVar9 = plVar17;
              if ((*pfVar1 <= fVar20 && fVar20 != *pfVar1) &&
                 (*(float *)(lVar2 + 4 + lVar19 * 4) <= fVar20)) {
                plVar9 = (int64_t *)FUN_00e8fc40();
                FUN_011db140();
                (**(code **)(*plVar9 + 0x18))();
                *(int *)((int64_t)plVar9 + 0xc) = iVar12;
                *(int *)(plVar9 + 2) = (int)lVar19;
                *(float *)((int64_t)plVar9 + 0x1c) = fVar20;
                if (plVar17 == plVar9) {
                  if (bVar3) {
                    FUN_00d50b20();
                    plVar9 = plVar17;
                    bVar4 = bVar3;
                  }
                  else {
                    plVar9 = plVar17;
                    bVar4 = true;
                  }
                }
                else {
                  bVar4 = true;
                  if ((bVar3) && (plVar17 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                bVar3 = bVar4;
                *(int *)(lVar13 + (int64_t)iVar6 * 4 + lVar19 * 4) = local_38;
                FUN_00d21140();
                local_38 = local_38 + 1;
                iVar5 = *(int *)(this_ptr + 0x30);
              }
              lVar19 = lVar19 + 1;
              plVar17 = plVar9;
              iVar15 = iVar5;
            } while (lVar19 < iVar5);
          }
        }
        else if (0.0 < param_1) {
          lVar2 = lVar2 + (int64_t)(iVar7 * iVar12) * 4;
          iVar7 = iVar5 * iVar12;
          lVar19 = 1;
          plVar17 = plVar9;
          iVar5 = iVar15;
          do {
            fVar20 = *(float *)(lVar2 + lVar19 * 4);
            pfVar1 = (float *)(lVar2 + -4 + lVar19 * 4);
            plVar9 = plVar17;
            if ((*pfVar1 <= fVar20 && fVar20 != *pfVar1) &&
               (*(float *)(lVar2 + 4 + lVar19 * 4) <= fVar20)) {
              if (lVar8 < lVar19) {
                fVar20 = fVar20 * *(float *)(*(int64_t *)(local_60 + 0x10) + lVar8 * -4 +
                                            lVar19 * 4);
              }
              if (param_1 < fVar20) {
                plVar9 = (int64_t *)FUN_00e8fc40();
                FUN_011db140();
                (**(code **)(*plVar9 + 0x18))();
                *(int *)((int64_t)plVar9 + 0xc) = iVar12;
                *(int *)(plVar9 + 2) = (int)lVar19;
                *(float *)((int64_t)plVar9 + 0x1c) = fVar20;
                if (plVar17 == plVar9) {
                  if (bVar3) {
                    FUN_00d50b20();
                    plVar9 = plVar17;
                    bVar4 = bVar3;
                  }
                  else {
                    plVar9 = plVar17;
                    bVar4 = true;
                  }
                }
                else {
                  bVar4 = true;
                  if ((bVar3) && (plVar17 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                bVar3 = bVar4;
                *(int *)(lVar13 + (int64_t)iVar7 * 4 + lVar19 * 4) = local_38;
                FUN_00d21140();
                local_38 = local_38 + 1;
                iVar5 = *(int *)(this_ptr + 0x30);
              }
            }
            lVar19 = lVar19 + 1;
            plVar17 = plVar9;
            iVar15 = iVar5;
          } while (lVar19 < iVar5);
        }
        else {
          iVar6 = iVar5 * iVar12;
          lVar2 = lVar2 + (int64_t)(iVar7 * iVar12) * 4;
          lVar19 = 1;
          plVar17 = plVar9;
          iVar5 = iVar15;
          do {
            local_54 = *(float *)(lVar2 + lVar19 * 4);
            pfVar1 = (float *)(lVar2 + -4 + lVar19 * 4);
            plVar9 = plVar17;
            if ((*pfVar1 <= local_54 && local_54 != *pfVar1) &&
               (*(float *)(lVar2 + 4 + lVar19 * 4) <= local_54)) {
              if (lVar8 < lVar19) {
                local_54 = local_54 *
                           *(float *)(*(int64_t *)(local_60 + 0x10) + lVar8 * -4 + lVar19 * 4);
              }
              plVar9 = (int64_t *)FUN_00e8fc40();
              FUN_011db140();
              (**(code **)(*plVar9 + 0x18))();
              *(int *)((int64_t)plVar9 + 0xc) = iVar12;
              *(int *)(plVar9 + 2) = (int)lVar19;
              *(float *)((int64_t)plVar9 + 0x1c) = local_54;
              if (plVar17 == plVar9) {
                if (bVar3) {
                  FUN_00d50b20();
                  plVar9 = plVar17;
                  bVar4 = bVar3;
                }
                else {
                  bVar4 = true;
                  plVar9 = plVar17;
                }
              }
              else {
                bVar4 = true;
                if ((bVar3) && (plVar17 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              *(int *)(lVar13 + (int64_t)iVar6 * 4 + lVar19 * 4) = local_38;
              FUN_00d21140();
              local_38 = local_38 + 1;
              iVar5 = *(int *)(this_ptr + 0x30);
              bVar3 = bVar4;
            }
            lVar19 = lVar19 + 1;
            plVar17 = plVar9;
            iVar15 = iVar5;
          } while (lVar19 < iVar5);
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < *(int *)(this_ptr + 0x28));
    if ((bVar3) && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((int)param_4 < (int)param_3 && local_60 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01604630
// ============================================================
// Function: FUN_01604630
// Address: 01604630
// Size: 2186 bytes
// Class: MUTempoAnalyzerEvent
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


void FUN_01604630(uint32_t param_1,int param_2,int param_3,int64_t *param_4)

{
  void*puVar1;
  void*puVar2;
  void*puVar3;
  uint64_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  void*puVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  int64_t lVar14;
  int64_t lVar15;
  uint in_ECX;
  uint64_t uVar16;
  int64_t lVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  uint unaff_ESI;
  uint64_t uVar20;
  uint64_t uVar21;
  int64_t lVar22;
  int64_t *this_ptr;
  uint64_t uVar23;
  int64_t lVar24;
  int64_t lVar25;
  int64_t lVar26;
  int64_t lVar27;
  uint64_t uVar28;
  int64_t lVar29;
  int64_t local_a8;
  char local_a0;
  uint64_t local_38;
  
  uVar28 = (uint64_t)unaff_ESI;
  uVar20 = 0;
  if (-1 < (int)in_ECX) {
    uVar20 = (uint64_t)in_ECX;
  }
  if (param_2 < param_3) {
    param_3 = param_2;
  }
  FUN_00c8e690();
  if ((local_a0 == '\0') && (local_a8 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  if (*param_4 == 0) {
    puVar11 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar11 = &g_025f0d98;
    puVar11[2] = 0;
    puVar11[3] = 0;
    puVar11[4] = 0;
    puVar11[5] = 0;
    puVar11[6] = 0;
    puVar11[7] = 0;
    (*g_025f0db0)();
    puVar2 = (void*)*param_4;
    if (puVar2 == puVar11) {
      if ((char)param_4[1] != '\0') {
        FUN_00d50b20();
        goto joined_r0x01604764;
      }
    }
    else {
      *param_4 = (int64_t)puVar11;
      if (((char)param_4[1] != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    *(void*)(param_4 + 1) = 1;
  }
joined_r0x01604764:
  if ((int)uVar20 < param_3) {
    if ((int)unaff_ESI < 1) {
      param_3 = param_3 - (int)uVar20;
      do {
        FUN_015c1480(param_1,uVar28);
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    else {
      lVar27 = (int64_t)param_2;
      if (unaff_ESI < 8) {
        do {
          lVar29 = *(int64_t *)(*this_ptr + 0x10);
          puVar3 = *(void**)(local_a8 + 0x10);
          *puVar3 = *(void*)(lVar29 + uVar20 * 4);
          if ((((unaff_ESI != 1) &&
               (puVar3[1] = *(void*)(lVar29 + lVar27 * 4 + uVar20 * 4), unaff_ESI != 2)) &&
              (puVar3[2] = *(void*)(lVar27 * 8 + lVar29 + uVar20 * 4), unaff_ESI != 3)) &&
             (((puVar3[3] = *(void*)(lVar27 * 0xc + lVar29 + uVar20 * 4), unaff_ESI != 4 &&
               (puVar3[4] = *(void*)(lVar29 + lVar27 * 0x10 + uVar20 * 4), unaff_ESI != 5))
              && (puVar3[5] = *(void*)(lVar27 * 0x14 + lVar29 + uVar20 * 4), unaff_ESI != 6))
             )) {
            puVar3[6] = *(void*)(lVar29 + lVar27 * 0x18 + uVar20 * 4);
          }
          FUN_015c1480(param_1,uVar28);
          puVar3 = *(void**)(local_a8 + 0x10);
          lVar29 = *(int64_t *)(*this_ptr + 0x10);
          *(void*)(lVar29 + uVar20 * 4) = *puVar3;
          if (((unaff_ESI != 1) &&
              (*(void*)(lVar29 + lVar27 * 4 + uVar20 * 4) = puVar3[1], unaff_ESI != 2)) &&
             ((*(void*)(lVar27 * 8 + lVar29 + uVar20 * 4) = puVar3[2], unaff_ESI != 3 &&
              (((*(void*)(lVar27 * 0xc + lVar29 + uVar20 * 4) = puVar3[3], unaff_ESI != 4 &&
                (*(void*)(lVar29 + lVar27 * 0x10 + uVar20 * 4) = puVar3[4], unaff_ESI != 5))
               && (*(void*)(lVar27 * 0x14 + lVar29 + uVar20 * 4) = puVar3[5], unaff_ESI != 6)
               ))))) {
            *(void*)(lVar29 + lVar27 * 0x18 + uVar20 * 4) = puVar3[6];
          }
          uVar20 = uVar20 + 1;
        } while (param_3 != (int)uVar20);
      }
      else {
        uVar12 = (uint64_t)(unaff_ESI & 0xfffffff8);
        uVar13 = uVar12 - 8;
        uVar16 = (uVar13 >> 3) + 1;
        lVar26 = lVar27 * 0x20 + uVar20 * 4 + 0x10;
        lVar29 = uVar20 * 4 + 0x10;
        lVar17 = 0;
        local_38 = uVar20;
        do {
          lVar15 = uVar28 + uVar20 + lVar17;
          lVar14 = *(int64_t *)(*this_ptr + 0x10);
          uVar4 = *(uint64_t *)(local_a8 + 0x10);
          if ((param_2 == 1) &&
             (((uint64_t)(lVar14 + lVar15 * 4) <= uVar4 ||
              (uVar4 + uVar28 * 4 <= lVar14 + (lVar17 + uVar20) * 4)))) {
            if (uVar13 == 0) {
              lVar22 = 0;
LAB_01604c5f:
              puVar2 = (void*)(lVar14 + (lVar22 + local_38) * 4);
              uVar8 = puVar2[1];
              puVar11 = (void*)(lVar14 + 0x10 + (lVar22 + local_38) * 4);
              uVar9 = *puVar11;
              uVar10 = puVar11[1];
              puVar11 = (void*)(uVar4 + lVar22 * 4);
              *puVar11 = *puVar2;
              puVar11[1] = uVar8;
              puVar2 = (void*)(uVar4 + 0x10 + lVar22 * 4);
              *puVar2 = uVar9;
              puVar2[1] = uVar10;
            }
            else {
              lVar22 = 0;
              lVar25 = -(uVar16 & 0xfffffffffffffffe);
              lVar24 = lVar14;
              do {
                puVar11 = (void*)(lVar24 + -0x10 + lVar29);
                uVar8 = puVar11[1];
                uVar9 = *(void*)(lVar24 + lVar29);
                uVar10 = ((void*)(lVar24 + lVar29))[1];
                puVar2 = (void*)(uVar4 + lVar22 * 4);
                *puVar2 = *puVar11;
                puVar2[1] = uVar8;
                puVar2 = (void*)(uVar4 + 0x10 + lVar22 * 4);
                *puVar2 = uVar9;
                puVar2[1] = uVar10;
                puVar2 = (void*)(lVar24 + -0x10 + lVar26);
                uVar8 = puVar2[1];
                uVar9 = *(void*)(lVar24 + lVar26);
                uVar10 = ((void*)(lVar24 + lVar26))[1];
                puVar11 = (void*)(uVar4 + 0x20 + lVar22 * 4);
                *puVar11 = *puVar2;
                puVar11[1] = uVar8;
                puVar2 = (void*)(uVar4 + 0x30 + lVar22 * 4);
                *puVar2 = uVar9;
                puVar2[1] = uVar10;
                lVar22 = lVar22 + 0x10;
                lVar24 = lVar24 + 0x40;
                lVar25 = lVar25 + 2;
              } while (lVar25 != 0);
              if ((uVar16 & 1) != 0) goto LAB_01604c5f;
            }
            if (uVar12 != uVar28) {
              uVar18 = uVar12 * lVar27 + local_38;
              uVar21 = uVar12;
              goto LAB_01604b4d;
            }
          }
          else {
            uVar18 = local_38;
            uVar21 = 0;
LAB_01604b4d:
            uVar23 = ~uVar21;
            for (uVar19 = (uint64_t)(unaff_ESI & 3); uVar19 != 0; uVar19 = uVar19 - 1) {
              *(void*)(uVar4 + uVar21 * 4) = *(void*)(lVar14 + uVar18 * 4);
              uVar18 = uVar18 + lVar27;
              uVar21 = uVar21 + 1;
            }
            if (2 < uVar23 + uVar28) {
              do {
                *(void*)(uVar4 + uVar21 * 4) = *(void*)(lVar14 + uVar18 * 4);
                *(void*)(uVar4 + 4 + uVar21 * 4) =
                     *(void*)(lVar14 + (uVar18 + lVar27) * 4);
                *(void*)(uVar4 + 8 + uVar21 * 4) =
                     *(void*)(lVar14 + lVar27 * 8 + uVar18 * 4);
                *(void*)(uVar4 + 0xc + uVar21 * 4) =
                     *(void*)(lVar14 + lVar27 * 0xc + uVar18 * 4);
                uVar21 = uVar21 + 4;
                lVar14 = lVar14 + lVar27 * 0x10;
              } while (uVar28 != uVar21);
            }
          }
          FUN_015c1480(param_1,uVar28);
          uVar4 = *(uint64_t *)(local_a8 + 0x10);
          lVar14 = *(int64_t *)(*this_ptr + 0x10);
          uVar18 = local_38;
          if (param_2 == 1) {
            if ((lVar14 + (lVar17 + uVar20) * 4 < uVar4 + uVar28 * 4) &&
               (uVar4 < (uint64_t)(lVar14 + lVar15 * 4))) {
              uVar21 = 0;
              goto LAB_01604de0;
            }
            if (uVar13 == 0) {
              lVar15 = 0;
LAB_01604d9f:
              puVar3 = (void*)(uVar4 + lVar15 * 4);
              uVar5 = puVar3[1];
              uVar6 = puVar3[2];
              uVar7 = puVar3[3];
              puVar2 = (void*)(uVar4 + 0x10 + lVar15 * 4);
              uVar8 = *puVar2;
              uVar9 = puVar2[1];
              puVar1 = (void*)(lVar14 + (lVar15 + local_38) * 4);
              *puVar1 = *puVar3;
              puVar1[1] = uVar5;
              puVar1[2] = uVar6;
              puVar1[3] = uVar7;
              puVar2 = (void*)(lVar14 + 0x10 + (lVar15 + local_38) * 4);
              *puVar2 = uVar8;
              puVar2[1] = uVar9;
            }
            else {
              lVar15 = 0;
              lVar22 = -(uVar16 & 0xfffffffffffffffe);
              lVar25 = lVar14;
              do {
                puVar2 = (void*)(uVar4 + lVar15 * 4);
                uVar8 = puVar2[1];
                puVar11 = (void*)(uVar4 + 0x10 + lVar15 * 4);
                uVar9 = *puVar11;
                uVar10 = puVar11[1];
                puVar11 = (void*)(lVar25 + -0x10 + lVar29);
                *puVar11 = *puVar2;
                puVar11[1] = uVar8;
                *(void*)(lVar25 + lVar29) = uVar9;
                ((void*)(lVar25 + lVar29))[1] = uVar10;
                puVar3 = (void*)(uVar4 + 0x20 + lVar15 * 4);
                uVar5 = puVar3[1];
                uVar6 = puVar3[2];
                uVar7 = puVar3[3];
                puVar2 = (void*)(uVar4 + 0x30 + lVar15 * 4);
                uVar8 = *puVar2;
                uVar9 = puVar2[1];
                puVar1 = (void*)(lVar25 + -0x10 + lVar26);
                *puVar1 = *puVar3;
                puVar1[1] = uVar5;
                puVar1[2] = uVar6;
                puVar1[3] = uVar7;
                *(void*)(lVar25 + lVar26) = uVar8;
                ((void*)(lVar25 + lVar26))[1] = uVar9;
                lVar15 = lVar15 + 0x10;
                lVar25 = lVar25 + 0x40;
                lVar22 = lVar22 + 2;
              } while (lVar22 != 0);
              if ((uVar16 & 1) != 0) goto LAB_01604d9f;
            }
            if (uVar12 != uVar28) {
              uVar18 = local_38 + uVar12 * lVar27;
              uVar21 = uVar12;
              goto LAB_01604de0;
            }
          }
          else {
            uVar21 = 0;
LAB_01604de0:
            uVar23 = ~uVar21;
            for (uVar19 = (uint64_t)(unaff_ESI & 3); uVar19 != 0; uVar19 = uVar19 - 1) {
              *(void*)(lVar14 + uVar18 * 4) = *(void*)(uVar4 + uVar21 * 4);
              uVar18 = uVar18 + lVar27;
              uVar21 = uVar21 + 1;
            }
            if (2 < uVar23 + uVar28) {
              do {
                *(void*)(lVar14 + uVar18 * 4) = *(void*)(uVar4 + uVar21 * 4);
                *(void*)(lVar14 + (uVar18 + lVar27) * 4) =
                     *(void*)(uVar4 + 4 + uVar21 * 4);
                *(void*)(lVar14 + lVar27 * 8 + uVar18 * 4) =
                     *(void*)(uVar4 + 8 + uVar21 * 4);
                *(void*)(lVar14 + lVar27 * 0xc + uVar18 * 4) =
                     *(void*)(uVar4 + 0xc + uVar21 * 4);
                uVar21 = uVar21 + 4;
                lVar14 = lVar14 + lVar27 * 0x10;
              } while (uVar28 != uVar21);
            }
          }
          local_38 = local_38 + 1;
          lVar17 = lVar17 + 1;
          lVar26 = lVar26 + 4;
          lVar29 = lVar29 + 4;
        } while ((int)local_38 != param_3);
      }
    }
  }
  if (local_a8 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01602890
// ============================================================
// Function: FUN_01602890
// Address: 01602890
// Size: 1378 bytes
// Class: MUTempoAnalyzerEvent
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


void FUN_01602890(int64_t *param_1,uint param_2,uint64_t param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int iVar7;
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
  int64_t lVar22;
  int64_t lVar23;
  void *pvVar24;
  void *pvVar25;
  void *pvVar26;
  void *pvVar27;
  uint uVar28;
  int64_t lVar29;
  void *pvVar30;
  int64_t lVar31;
  uint unaff_ESI;
  int iVar32;
  int64_t *this_ptr;
  int64_t lVar33;
  size_t sVar34;
  uint64_t uVar35;
  uint uVar36;
  void *pvVar37;
  void *pvVar38;
  void *pvVar39;
  int64_t lVar40;
  int iVar41;
  uint64_t uVar42;
  int64_t local_88;
  char local_80;
  
  uVar35 = param_3;
  FUN_00c8e690();
  if ((local_80 == '\0') && (local_88 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  pvVar26 = (void *)(uint64_t)unaff_ESI;
  if (0 < (int)unaff_ESI) {
    lVar40 = *(int64_t *)(local_88 + 0x10);
    uVar42 = (uint64_t)(int)param_3;
    pvVar39 = (void *)(int64_t)(int)(param_2 * 4);
    if ((int)param_2 < 1) {
      ___bzero();
      _memcpy(pvVar26,pvVar39,(size_t)uVar35);
      sVar34 = (size_t)uVar35;
      if (unaff_ESI != 1) {
        pvVar27 = (void *)((uint64_t)unaff_ESI - 1);
        pvVar26 = pvVar27;
        if (unaff_ESI != 2) {
          lVar40 = 1;
          do {
            ___bzero();
            _memcpy(pvVar26,pvVar39,(size_t)uVar35);
            ___bzero();
            _memcpy(pvVar26,pvVar39,(size_t)uVar35);
            sVar34 = (size_t)uVar35;
            lVar23 = lVar40 - ((uint64_t)pvVar27 & 0xfffffffffffffffe);
            lVar40 = lVar40 + 2;
          } while (lVar23 != -1);
        }
        if (((uint64_t)pvVar27 & 1) != 0) {
          ___bzero();
          _memcpy(pvVar26,pvVar39,sVar34);
        }
      }
    }
    else {
      lVar23 = lVar40 + uVar42 * 4;
      pvVar27 = (void *)(uint64_t)param_2;
      pvVar25 = (void *)0x0;
      do {
        lVar22 = *(int64_t *)(*this_ptr + 0x10) + (int64_t)pvVar25 * (int64_t)pvVar27 * 4;
        pvVar24 = pvVar27;
        ___bzero();
        iVar41 = 8;
        pvVar38 = (void *)0x0;
        do {
          lVar5 = *(int64_t *)(*(int64_t *)(*param_1 + 0x10) + (int64_t)pvVar38 * 8);
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          iVar32 = *(int *)(lVar5 + 0x18);
          iVar7 = iVar32 + 3;
          if (-1 < iVar32) {
            iVar7 = iVar32;
          }
          if (iVar32 < 8) {
            *(float *)(lVar23 + (int64_t)pvVar38 * 4) =
                 *(float *)(lVar22 + (int64_t)pvVar38 * 4) +
                 *(float *)(lVar23 + (int64_t)pvVar38 * 4);
          }
          else {
            uVar28 = iVar7 >> 2;
            uVar36 = uVar28 >> 1;
            iVar32 = (int)pvVar38 - uVar36;
            fVar4 = *(float *)(lVar22 + (int64_t)pvVar38 * 4);
            uVar6 = *(uint64_t *)(lVar5 + 0x10);
            pvVar24 = (void *)(uint64_t)uVar28;
            if ((uVar28 < 8) || (iVar32 + (int)((int64_t)pvVar24 - 1U) < iVar32)) {
              pvVar37 = (void *)0x0;
            }
            else {
              pvVar37 = (void *)0x0;
              if ((int64_t)pvVar24 - 1U >> 0x20 == 0) {
                if ((uVar6 < lVar40 + ((int64_t)pvVar24 + uVar42 + (int64_t)iVar32) * 4) &&
                   (lVar40 + ((int64_t)iVar32 + uVar42) * 4 < uVar6 + (int64_t)pvVar24 * 4)) {
                  pvVar37 = (void *)0x0;
                  uVar35 = uVar42;
                }
                else {
                  pvVar37 = (void *)(uint64_t)(uVar28 & 0xfffffff8);
                  uVar35 = ((int64_t)pvVar37 - 8U >> 3) + 1;
                  if ((int64_t)pvVar37 - 8U == 0) {
                    lVar29 = 0;
LAB_01602bf8:
                    pfVar1 = (float *)(uVar6 + lVar29 * 4);
                    fVar8 = pfVar1[1];
                    fVar9 = pfVar1[2];
                    fVar10 = pfVar1[3];
                    pfVar2 = (float *)(uVar6 + 0x10 + lVar29 * 4);
                    fVar11 = *pfVar2;
                    fVar12 = pfVar2[1];
                    fVar13 = pfVar2[2];
                    fVar14 = pfVar2[3];
                    lVar29 = (int64_t)((int)lVar29 + iVar32);
                    pfVar3 = (float *)(lVar23 + lVar29 * 4);
                    fVar15 = pfVar3[1];
                    fVar16 = pfVar3[2];
                    fVar17 = pfVar3[3];
                    pfVar2 = (float *)(lVar23 + 0x10 + lVar29 * 4);
                    fVar18 = *pfVar2;
                    fVar19 = pfVar2[1];
                    fVar20 = pfVar2[2];
                    fVar21 = pfVar2[3];
                    pfVar2 = (float *)(lVar23 + lVar29 * 4);
                    *pfVar2 = *pfVar3 + *pfVar1 * fVar4;
                    pfVar2[1] = fVar15 + fVar8 * fVar4;
                    pfVar2[2] = fVar16 + fVar9 * fVar4;
                    pfVar2[3] = fVar17 + fVar10 * fVar4;
                    pfVar1 = (float *)(lVar23 + 0x10 + lVar29 * 4);
                    *pfVar1 = fVar18 + fVar11 * fVar4;
                    pfVar1[1] = fVar19 + fVar12 * fVar4;
                    pfVar1[2] = fVar20 + fVar13 * fVar4;
                    pfVar1[3] = fVar21 + fVar14 * fVar4;
                  }
                  else {
                    lVar31 = -(uVar35 & 0xfffffffffffffffe);
                    lVar29 = 0;
                    do {
                      pfVar1 = (float *)(uVar6 + lVar29 * 4);
                      fVar8 = pfVar1[1];
                      fVar9 = pfVar1[2];
                      fVar10 = pfVar1[3];
                      pfVar2 = (float *)(uVar6 + 0x10 + lVar29 * 4);
                      fVar11 = *pfVar2;
                      fVar12 = pfVar2[1];
                      fVar13 = pfVar2[2];
                      fVar14 = pfVar2[3];
                      lVar33 = (int64_t)(iVar32 + (int)lVar29);
                      pfVar3 = (float *)(lVar23 + lVar33 * 4);
                      fVar15 = pfVar3[1];
                      fVar16 = pfVar3[2];
                      fVar17 = pfVar3[3];
                      pfVar2 = (float *)(lVar23 + 0x10 + lVar33 * 4);
                      fVar18 = *pfVar2;
                      fVar19 = pfVar2[1];
                      fVar20 = pfVar2[2];
                      fVar21 = pfVar2[3];
                      pfVar2 = (float *)(lVar23 + lVar33 * 4);
                      *pfVar2 = *pfVar3 + *pfVar1 * fVar4;
                      pfVar2[1] = fVar15 + fVar8 * fVar4;
                      pfVar2[2] = fVar16 + fVar9 * fVar4;
                      pfVar2[3] = fVar17 + fVar10 * fVar4;
                      pfVar1 = (float *)(lVar23 + 0x10 + lVar33 * 4);
                      *pfVar1 = fVar18 + fVar11 * fVar4;
                      pfVar1[1] = fVar19 + fVar12 * fVar4;
                      pfVar1[2] = fVar20 + fVar13 * fVar4;
                      pfVar1[3] = fVar21 + fVar14 * fVar4;
                      pfVar1 = (float *)(uVar6 + 0x20 + lVar29 * 4);
                      fVar8 = pfVar1[1];
                      fVar9 = pfVar1[2];
                      fVar10 = pfVar1[3];
                      pfVar2 = (float *)(uVar6 + 0x30 + lVar29 * 4);
                      fVar11 = *pfVar2;
                      fVar12 = pfVar2[1];
                      fVar13 = pfVar2[2];
                      fVar14 = pfVar2[3];
                      lVar33 = (int64_t)(int)((iVar41 - uVar36) + (int)lVar29);
                      pfVar3 = (float *)(lVar23 + lVar33 * 4);
                      fVar15 = pfVar3[1];
                      fVar16 = pfVar3[2];
                      fVar17 = pfVar3[3];
                      pfVar2 = (float *)(lVar23 + 0x10 + lVar33 * 4);
                      fVar18 = *pfVar2;
                      fVar19 = pfVar2[1];
                      fVar20 = pfVar2[2];
                      fVar21 = pfVar2[3];
                      pfVar2 = (float *)(lVar23 + lVar33 * 4);
                      *pfVar2 = *pfVar3 + *pfVar1 * fVar4;
                      pfVar2[1] = fVar15 + fVar8 * fVar4;
                      pfVar2[2] = fVar16 + fVar9 * fVar4;
                      pfVar2[3] = fVar17 + fVar10 * fVar4;
                      pfVar1 = (float *)(lVar23 + 0x10 + lVar33 * 4);
                      *pfVar1 = fVar18 + fVar11 * fVar4;
                      pfVar1[1] = fVar19 + fVar12 * fVar4;
                      pfVar1[2] = fVar20 + fVar13 * fVar4;
                      pfVar1[3] = fVar21 + fVar14 * fVar4;
                      lVar29 = lVar29 + 0x10;
                      lVar31 = lVar31 + 2;
                    } while (lVar31 != 0);
                    if ((uVar35 & 1) != 0) goto LAB_01602bf8;
                  }
                  if (pvVar37 == pvVar24) goto LAB_01602acd;
                }
              }
            }
            pvVar30 = pvVar37;
            if ((uVar28 & 1) != 0) {
              lVar29 = (int64_t)(iVar32 + (int)pvVar37);
              *(float *)(lVar23 + lVar29 * 4) =
                   *(float *)(uVar6 + (int64_t)pvVar37 * 4) * fVar4 +
                   *(float *)(lVar23 + lVar29 * 4);
              pvVar30 = (void *)((uint64_t)pvVar37 | 1);
            }
            pvVar24 = (void *)-(int64_t)pvVar24;
            if ((void *)~(uint64_t)pvVar37 != pvVar24) {
              lVar29 = (int64_t)pvVar30 + 1;
              iVar32 = ((int)pvVar30 + (int)pvVar38) - uVar36;
              do {
                *(float *)(lVar23 + (int64_t)iVar32 * 4) =
                     *(float *)((uVar6 - 4) + lVar29 * 4) * fVar4 +
                     *(float *)(lVar23 + (int64_t)iVar32 * 4);
                *(float *)(lVar23 + (int64_t)(iVar32 + 1) * 4) =
                     *(float *)(uVar6 + lVar29 * 4) * fVar4 +
                     *(float *)(lVar23 + (int64_t)(iVar32 + 1) * 4);
                lVar31 = (int64_t)pvVar24 + lVar29;
                lVar29 = lVar29 + 2;
                iVar32 = iVar32 + 2;
              } while (lVar31 != -1);
            }
          }
LAB_01602acd:
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
          pvVar38 = (void *)((int64_t)pvVar38 + 1);
          iVar41 = iVar41 + 1;
        } while (pvVar38 != pvVar27);
        _memcpy(pvVar24,pvVar39,(size_t)uVar35);
        pvVar25 = (void *)((int64_t)pvVar25 + 1);
      } while (pvVar25 != pvVar26);
    }
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 015fb200
// ============================================================
// Function: FUN_015fb200
// Address: 015fb200
// Size: 2170 bytes
// Class: MUTempoAnalyzerEvent
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


int64_t * FUN_015fb200(uint32_t param_1,char param_2,int64_t *param_3)

{
  int64_t *plVar1;
  uint uVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint uVar7;
  uint uVar8;
  void*puVar9;
  int64_t *plVar10;
  int64_t *in_RCX;
  uint64_t uVar11;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t uVar12;
  int64_t lVar13;
  uint64_t uVar14;
  float fVar15;
  uint32_t uVar16;
  float fVar17;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  uVar2 = *(uint *)(*(int64_t *)(this_ptr + 0x10) + 0xc);
  uVar11 = (uint64_t)uVar2;
  plVar10 = (int64_t *)0x0;
  if (uVar11 != 0) {
    if (*arg1 == 0) {
      puVar9 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar9 = &g_025f0d98;
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9[4] = 0;
      puVar9[5] = 0;
      puVar9[6] = 0;
      puVar9[7] = 0;
      (*g_025f0db0)();
      lVar4 = *arg1;
      *arg1 = (int64_t)puVar9;
      if (((char)arg1[1] != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      *(void*)(arg1 + 1) = 1;
    }
    FUN_00c8e690();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    FUN_00c8e690();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    plVar1 = (int64_t *)(local_40 + 0x10);
    if (0 < (int)uVar2) {
      lVar4 = *(int64_t *)(*(int64_t *)(this_ptr + 0x10) + 0x10);
      lVar5 = *(int64_t *)(local_40 + 0x10);
      lVar13 = *(int64_t *)(local_40 + 0x10);
      if (uVar2 == 1) {
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        do {
          fVar15 = (float)*(int *)(*(int64_t *)(lVar4 + uVar14 * 8) + 0x10);
          *(float *)(lVar5 + uVar14 * 4) = fVar15;
          *(float *)(lVar13 + uVar14 * 4) = fVar15;
          fVar15 = (float)*(int *)(*(int64_t *)(lVar4 + 8 + uVar14 * 8) + 0x10);
          *(float *)(lVar5 + 4 + uVar14 * 4) = fVar15;
          *(float *)(lVar13 + 4 + uVar14 * 4) = fVar15;
          uVar14 = uVar14 + 2;
        } while ((uVar2 & 0xfffffffe) != uVar14);
      }
      if ((uVar2 & 1) != 0) {
        fVar15 = (float)*(int *)(*(int64_t *)(lVar4 + uVar14 * 8) + 0x10);
        *(float *)(lVar5 + uVar14 * 4) = fVar15;
        *(float *)(lVar13 + uVar14 * 4) = fVar15;
      }
    }
    FUN_015c1230(param_1,uVar11);
    FUN_015c1230(param_1,uVar11);
    if (param_2 != '\0') {
      uVar7 = 3;
      if ((int)uVar2 < 6) {
        uVar7 = (int)uVar2 / 2;
      }
      if (0 < (int)uVar7) {
        lVar13 = (int64_t)(int)((uVar2 - 1) - uVar7);
        uVar14 = (uint64_t)uVar7;
        lVar4 = *(int64_t *)(local_40 + 0x10);
        lVar5 = *plVar1;
        if (uVar7 == 1) {
          uVar12 = 0;
        }
        else {
          uVar12 = 0;
          uVar8 = uVar2;
          do {
            *(void*)(lVar4 + uVar12 * 4) = *(void*)(lVar4 + uVar14 * 4);
            *(void*)(lVar5 + (int64_t)(int)(uVar8 - 1) * 4) =
                 *(void*)(lVar5 + lVar13 * 4);
            *(void*)(lVar4 + 4 + uVar12 * 4) = *(void*)(lVar4 + uVar14 * 4);
            *(void*)(lVar5 + (int64_t)(int)(uVar8 - 2) * 4) =
                 *(void*)(lVar5 + lVar13 * 4);
            uVar12 = uVar12 + 2;
            uVar8 = uVar8 - 2;
          } while ((uVar7 & 0xfffffffe) != uVar12);
        }
        if ((uVar7 & 1) != 0) {
          *(void*)(lVar4 + uVar12 * 4) = *(void*)(lVar4 + uVar14 * 4);
          *(void*)(lVar5 + (int64_t)(int)((uVar2 - 1) - (int)uVar12) * 4) =
               *(void*)(lVar5 + lVar13 * 4);
        }
      }
    }
    if (0 < (int)uVar2) {
      lVar4 = *plVar1;
      lVar5 = *(int64_t *)(*(int64_t *)(this_ptr + 0x10) + 0x10);
      lVar13 = *(int64_t *)(local_40 + 0x10);
      if (uVar11 - 1 < 3) {
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        do {
          lVar6 = *(int64_t *)(lVar5 + uVar14 * 8);
          *(void*)(lVar6 + 0x58) = *(void*)(lVar4 + uVar14 * 4);
          *(void*)(lVar6 + 0x5c) = *(void*)(lVar13 + uVar14 * 4);
          lVar6 = *(int64_t *)(lVar5 + 8 + uVar14 * 8);
          *(void*)(lVar6 + 0x58) = *(void*)(lVar4 + 4 + uVar14 * 4);
          *(void*)(lVar6 + 0x5c) = *(void*)(lVar13 + 4 + uVar14 * 4);
          lVar6 = *(int64_t *)(lVar5 + 0x10 + uVar14 * 8);
          *(void*)(lVar6 + 0x58) = *(void*)(lVar4 + 8 + uVar14 * 4);
          *(void*)(lVar6 + 0x5c) = *(void*)(lVar13 + 8 + uVar14 * 4);
          lVar6 = *(int64_t *)(lVar5 + 0x18 + uVar14 * 8);
          *(void*)(lVar6 + 0x58) = *(void*)(lVar4 + 0xc + uVar14 * 4);
          *(void*)(lVar6 + 0x5c) = *(void*)(lVar13 + 0xc + uVar14 * 4);
          uVar14 = uVar14 + 4;
        } while ((uVar2 & 0xfffffffc) != uVar14);
      }
      if ((uint64_t)(uVar2 & 3) != 0) {
        uVar12 = 0;
        do {
          lVar6 = *(int64_t *)(lVar5 + uVar14 * 8 + uVar12 * 8);
          *(void*)(lVar6 + 0x58) = *(void*)(lVar4 + uVar14 * 4 + uVar12 * 4);
          *(void*)(lVar6 + 0x5c) = *(void*)(lVar13 + uVar14 * 4 + uVar12 * 4);
          uVar12 = uVar12 + 1;
        } while ((uVar2 & 3) != uVar12);
      }
    }
    plVar10 = in_RCX;
    if (*in_RCX != 0) {
      if (*param_3 == 0) {
        uVar7 = (int)uVar2 / 3;
        uVar8 = ~uVar7 + uVar2;
        plVar10 = (int64_t *)(uint64_t)uVar8;
        fVar15 = g_02390124;
        if (uVar8 - uVar7 != 0 && (int)uVar7 <= (int)uVar8) {
          fVar15 = g_02390124 / (float)(int)(uVar8 - uVar7);
        }
        if (0 < (int)uVar2) {
          uVar14 = 0;
          do {
            lVar4 = *(int64_t *)
                     (*(int64_t *)(*(int64_t *)(this_ptr + 0x10) + 0x10) + uVar14 * 8);
            if (lVar4 != 0) {
              FUN_00d50b00();
            }
            iVar3 = *(int *)(lVar4 + 0xc);
            if ((int64_t)uVar14 < (int64_t)(int)uVar7) {
              FUN_014328b0(SUB84((double)iVar3,0),
                           (double)*(float *)(*(int64_t *)(local_40 + 0x10) + uVar14 * 4));
              if (local_48 == '\0') {
                if (local_50 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_48 = '\0';
              }
              FUN_00d21140();
              if (local_50 != 0) {
                FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
            }
            else if ((int64_t)(int)uVar8 < (int64_t)uVar14) {
              FUN_014328b0(SUB84((double)iVar3,0),(double)*(float *)(*plVar1 + uVar14 * 4));
              if (local_48 == '\0') {
                if (local_50 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_48 = '\0';
              }
              FUN_00d21140();
              if (local_50 != 0) {
                FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              fVar17 = (float)(int)((int)uVar14 - uVar7) * fVar15;
              FUN_014328b0(SUB84((double)iVar3,0),
                           (double)(fVar17 * *(float *)(*plVar1 + uVar14 * 4) +
                                   (g_02390124 - fVar17) *
                                   *(float *)(*(int64_t *)(local_40 + 0x10) + uVar14 * 4)));
              if (local_48 == '\0') {
                if (local_50 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_48 = '\0';
              }
              FUN_00d21140();
              if (local_50 != 0) {
                FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
            }
            plVar10 = (int64_t *)FUN_00d50b20();
            uVar14 = uVar14 + 1;
          } while (uVar11 != uVar14);
        }
      }
      else {
        plVar10 = param_3;
        if (0 < (int)uVar2) {
          uVar14 = 0;
          do {
            lVar4 = *(int64_t *)
                     (*(int64_t *)(*(int64_t *)(this_ptr + 0x10) + 0x10) + uVar14 * 8);
            if (lVar4 != 0) {
              FUN_00d50b00();
            }
            uVar16 = SUB84((double)*(int *)(lVar4 + 0xc),0);
            FUN_014328b0(uVar16,(double)*(float *)(*(int64_t *)(local_40 + 0x10) + uVar14 * 4));
            if (local_48 == '\0') {
              if (local_50 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_48 = '\0';
            }
            FUN_00d21140();
            if (local_50 != 0) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            FUN_014328b0(uVar16,(double)*(float *)(*plVar1 + uVar14 * 4));
            if (local_48 == '\0') {
              if (local_50 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_48 = '\0';
            }
            FUN_00d21140();
            if (local_50 != 0) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            plVar10 = (int64_t *)FUN_00d50b20();
            uVar14 = uVar14 + 1;
          } while (uVar11 != uVar14);
        }
      }
    }
    if (local_40 != 0) {
      FUN_00d50b20();
      plVar10 = (int64_t *)FUN_00d50b20();
    }
  }
  return plVar10;
}



// ============================================================
// 01604f80
// ============================================================
// Function: FUN_01604f80
// Address: 01604f80
// Size: 3317 bytes
// Class: MUTempoAnalyzerEvent
// String references:
//   "filterMatrixUsingVectors : filterIndex >= fineStepHannWindowsCount !"
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


void FUN_01604f80(float param_1,float param_2,float param_3)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void*puVar8;
  int64_t *in_RCX;
  void*puVar9;
  uint in_EDX;
  int iVar10;
  int iVar11;
  uint unaff_ESI;
  size_t sVar12;
  uint64_t in_R8;
  uint64_t uVar13;
  int iVar14;
  uint64_t uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int64_t local_1e8;
  char local_1e0;
  int64_t local_98;
  uint64_t local_80;
  int64_t local_58;
  int64_t local_48;
  
  uVar15 = (uint64_t)in_EDX;
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar9 = &g_02572358;
  *puVar8 = &g_02572358;
  (*g_02572370)();
  iVar10 = 0;
  do {
    FUN_01602560((float)iVar10 * g_02391090);
    if (local_1e0 == '\0') {
      if (local_1e8 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_1e0 = '\0';
    }
    FUN_00d21140();
    if (local_1e8 != 0) {
      FUN_00d50b20();
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 != 300);
  iVar10 = FUN_01483610(g_024113f8);
  iVar4 = FUN_01483610(g_024113f8);
  iVar5 = FUN_01483610(g_024113f8);
  iVar6 = FUN_00e7d780((float)iVar10 * g_02394288);
  FUN_00c8e690();
  if (local_1e8 != 0) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  fVar18 = g_02390124;
  ___bzero();
  if (0 < (int)in_EDX) {
    fVar16 = g_02421580 * param_2;
    param_2 = param_2 * g_023942a8;
    fVar19 = g_02390124 / (float)(iVar10 - iVar6);
    uVar13 = 0;
    do {
      fVar17 = fVar16;
      if (((int64_t)uVar13 <= (int64_t)iVar10) &&
         (fVar17 = param_2, (int64_t)iVar6 <= (int64_t)uVar13)) {
        fVar17 = (float)((int)uVar13 - iVar6) * fVar19 * (fVar16 - param_2) + param_2;
      }
      iVar7 = FUN_00e7d780(fVar17 * g_023908ec);
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      if (299 < iVar7) {
        FUN_00e828a0();
      }
      *(int *)(*(int64_t *)(local_1e8 + 0x10) + uVar13 * 4) = iVar7;
      uVar13 = uVar13 + 1;
    } while (uVar15 != uVar13);
  }
  iVar10 = FUN_00e7d780((float)iVar4 * g_02394288);
  FUN_00c8e690();
  if (local_1e8 != 0) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  sVar12 = (size_t)in_R8;
  if (0 < (int)in_EDX) {
    fVar16 = g_0240e31c * param_1;
    param_1 = param_1 * g_02390d2c;
    fVar19 = g_02390124 / (float)(iVar4 - iVar10);
    uVar13 = 0;
    do {
      fVar17 = fVar16;
      if (((int64_t)uVar13 <= (int64_t)iVar4) &&
         (fVar17 = param_1, (int64_t)iVar10 <= (int64_t)uVar13)) {
        fVar17 = (float)((int)uVar13 - iVar10) * fVar19 * (fVar16 - param_1) + param_1;
      }
      iVar6 = FUN_00e7d780(fVar17 * g_023908ec);
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      if (299 < iVar6) {
        FUN_00e828a0();
      }
      sVar12 = (size_t)in_R8;
      *(int *)(*(int64_t *)(local_1e8 + 0x10) + uVar13 * 4) = iVar6;
      uVar13 = uVar13 + 1;
    } while (uVar15 != uVar13);
  }
  iVar10 = FUN_00e7d780((float)iVar5 * g_02394288);
  FUN_00c8e690();
  if (local_1e8 != 0) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  if (0 < (int)in_EDX) {
    fVar16 = g_024112a4 * param_3;
    param_3 = param_3 * 0.0;
    puVar9 = (void*)(int64_t)iVar10;
    uVar13 = 0;
    do {
      if ((int64_t)iVar5 < (int64_t)uVar13) {
        *(float *)(*(int64_t *)(local_1e8 + 0x10) + uVar13 * 4) = fVar16;
      }
      else if ((int64_t)uVar13 < (int64_t)puVar9) {
        *(float *)(*(int64_t *)(local_1e8 + 0x10) + uVar13 * 4) = param_3;
      }
      else {
        *(float *)(*(int64_t *)(local_1e8 + 0x10) + uVar13 * 4) =
             (float)((int)uVar13 - iVar10) * (fVar18 / (float)(iVar5 - iVar10)) * (fVar16 - param_3)
             + param_3;
      }
      uVar13 = uVar13 + 1;
    } while (uVar15 != uVar13);
  }
  FUN_00c8e690();
  if (local_1e8 != 0) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  _memcpy(puVar9,(void *)(int64_t)(int)(unaff_ESI * in_EDX * 4),sVar12);
  ___bzero();
  if ((int)unaff_ESI < 1) {
    bVar2 = false;
    local_58 = 0;
    bVar3 = false;
    local_48 = 0;
  }
  else {
    local_98 = 0;
    local_80 = 0;
    local_48 = 0;
    bVar3 = false;
    local_58 = 0;
    bVar2 = false;
    do {
      if (0 < (int)in_EDX) {
        uVar13 = 0;
        do {
          fVar18 = *(float *)(*(int64_t *)(local_1e8 + 0x10) + local_98 + uVar13 * 4);
          fVar16 = *(float *)(*(int64_t *)(local_1e8 + 0x10) + uVar13 * 4);
          iVar5 = 0;
          iVar4 = 0;
          iVar10 = 0;
          if (g_0239424c < fVar16) {
            fVar16 = fVar16 * *(float *)(*(int64_t *)(*in_RCX + 0x10) + local_98 + uVar13 * 4);
            iVar10 = FUN_00e7d780();
            iVar4 = FUN_00e7d780(fVar16 + fVar16);
            iVar5 = FUN_00e7d780(fVar16 * g_02394298);
          }
          lVar1 = *(int64_t *)
                   (puVar8[2] + (int64_t)*(int *)(*(int64_t *)(local_1e8 + 0x10) + uVar13 * 4) * 8
                   );
          if (local_58 == lVar1) {
            if ((!bVar2) && (local_58 != 0)) {
              bVar2 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
            if ((bVar2) && (local_58 != 0)) {
              FUN_00d50b20();
              bVar2 = true;
              local_58 = lVar1;
            }
            else {
              bVar2 = true;
              local_58 = lVar1;
            }
          }
          iVar6 = *(int *)(local_58 + 0x18);
          iVar7 = iVar6 + 3;
          if (-1 < iVar6) {
            iVar7 = iVar6;
          }
          lVar1 = *(int64_t *)
                   (puVar8[2] + (int64_t)*(int *)(*(int64_t *)(local_1e8 + 0x10) + uVar13 * 4) * 8
                   );
          if (local_48 == lVar1) {
            if ((!bVar3) && (local_48 != 0)) {
              bVar3 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
            if ((bVar3) && (local_48 != 0)) {
              FUN_00d50b20();
              bVar3 = true;
              local_48 = lVar1;
            }
            else {
              bVar3 = true;
              local_48 = lVar1;
            }
          }
          iVar7 = iVar7 >> 2;
          iVar6 = *(int *)(local_48 + 0x18);
          iVar11 = iVar6 + 7;
          if (-1 < iVar6) {
            iVar11 = iVar6;
          }
          iVar11 = iVar11 >> 3;
          iVar14 = (int)uVar13;
          FUN_015c31c0(*(float *)(*(int64_t *)(local_48 + 0x10) + (int64_t)iVar11 * 4) * fVar18,
                       uVar13 & 0xffffffff,iVar7);
          if (7 < iVar6) {
            fVar16 = *(float *)(*(int64_t *)(local_48 + 0x10) + (uint64_t)(iVar11 - 1) * 4) *
                     fVar18;
            if (local_80 != 0) {
              FUN_015c31c0(fVar16,iVar14 - iVar10,iVar7);
            }
            if (local_80 < unaff_ESI - 1) {
              FUN_015c31c0(fVar16,iVar10 + iVar14,iVar7);
            }
            if (0xf < iVar6) {
              fVar16 = *(float *)(*(int64_t *)(local_48 + 0x10) + (uint64_t)(iVar11 - 2) * 4) *
                       fVar18;
              if (1 < local_80) {
                FUN_015c31c0(fVar16,iVar14 - iVar4,iVar7);
              }
              if ((int64_t)local_80 < (int64_t)(int)(unaff_ESI - 2)) {
                FUN_015c31c0(fVar16,iVar4 + iVar14,iVar7);
              }
              if (0x17 < iVar6) {
                fVar18 = fVar18 * *(float *)(*(int64_t *)(local_48 + 0x10) +
                                            (uint64_t)(iVar11 - 3) * 4);
                if (2 < local_80) {
                  FUN_015c31c0(fVar18,iVar14 - iVar5,iVar7);
                }
                if ((int64_t)local_80 < (int64_t)(int)(unaff_ESI - 3)) {
                  FUN_015c31c0(fVar18,iVar5 + iVar14,iVar7);
                }
              }
            }
          }
          uVar13 = uVar13 + 1;
        } while (uVar15 != uVar13);
      }
      local_80 = local_80 + 1;
      local_98 = local_98 + (int64_t)(int)in_EDX * 4;
    } while (local_80 != unaff_ESI);
  }
  if (local_1e8 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
  }
  if ((bVar2) && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (puVar8 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 015ffad0
// ============================================================
// Function: FUN_015ffad0
// Address: 015ffad0
// Size: 1868 bytes
// Class: MUTempoAnalyzerEvent
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


void* FUN_015ffad0(int64_t param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  void *pvVar4;
  int64_t lVar5;
  void*puVar6;
  int64_t lVar7;
  char *pcVar8;
  void* pVar9;
  int64_t lVar10;
  void*puVar11;
  int64_t *arg1;
  int64_t lVar12;
  void*this_ptr;
  uint uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  float fVar17;
  double dVar18;
  char local_78;
  undefined7 uStack_77;
  char local_70;
  int64_t *local_68;
  int64_t local_60;
  int64_t local_58;
  void*local_50;
  int64_t local_48;
  char local_40 [12];
  float local_34;
  
  FUN_018acae0();
  lVar10 = g_027db9f8;
  if (g_027db9f8 != 0) {
    FUN_00d50b00();
  }
  dVar18 = (double)FUN_018ade30();
  if (lVar10 != 0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar10 = *arg1;
  pvVar4 = _pthread_getspecific((void*)param_1);
  if (pvVar4 != (void *)0x0) {
    lVar10 = *arg1;
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
  }
  lVar10 = *(int64_t *)(lVar10 + 0x38);
  if (lVar10 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar10;
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  pcVar2 = g_02572370;
  (*g_02572370)();
  local_50 = puVar6;
  FUN_01600500();
  local_58 = local_48;
  if ((local_40[0] == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  uVar13 = *(uint *)(local_58 + 0xc);
  uVar14 = (uint64_t)uVar13;
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  (*pcVar2)();
  uVar15 = uVar14;
  if ((int)uVar13 < 1) {
    local_68 = (int64_t *)(local_60 + 0x10);
  }
  else {
    do {
      FUN_00c8e690();
      lVar10 = local_48;
      if ((((local_40[0] == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40[0] != '\0')) &&
         (local_48 != 0)) {
        FUN_00d50b20();
      }
      FUN_00c92170();
      FUN_00c92160();
      ___bzero();
      local_40[0] = '\0';
      local_48 = lVar10;
      FUN_00d21140();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      uVar13 = (int)uVar15 - 1;
      uVar15 = (uint64_t)uVar13;
    } while (uVar13 != 0);
    local_68 = (int64_t *)(local_60 + 0x10);
    local_34 = 0.0;
    uVar15 = 0;
    do {
      lVar10 = *(int64_t *)(*(int64_t *)(local_58 + 0x10) + uVar15 * 8);
      pvVar4 = _pthread_getspecific((void*)param_1);
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
      lVar10 = *(int64_t *)(lVar10 + 0x38);
      if (lVar10 != 0) {
        FUN_00d50b00();
      }
      lVar5 = 0;
      do {
        iVar3 = FUN_015ff8d0();
        param_1 = *local_68;
        fVar17 = 0.0;
        lVar12 = 4;
        do {
          iVar1 = iVar3 + 1 >> 0x1f;
          fVar17 = (float)((uint)(*(float *)(*(int64_t *)(lVar10 + 0x10) +
                                            (int64_t)
                                            (int)((((uint)((iVar3 + 1) / 6 + iVar1) >> 2) - iVar1) *
                                                  -0x18 + iVar3 + 1) * 4) -
                                 *(float *)(param_1 + lVar12)) & g_02390140) +
                   (float)((uint)(*(float *)(*(int64_t *)(lVar10 + 0x10) +
                                            (int64_t)
                                            (int)(iVar3 + (((uint)(iVar3 / 6 + (iVar3 >> 0x1f)) >> 2
                                                           ) - (iVar3 >> 0x1f)) * -0x18) * 4) -
                                 *(float *)(param_1 + -4 + lVar12)) & g_02390140) + fVar17;
          lVar12 = lVar12 + 8;
          iVar3 = iVar3 + 2;
        } while (lVar12 != 100);
        fVar17 = (g_023908ec - fVar17) * g_02391090;
        *(float *)(*(int64_t *)(*(int64_t *)(puVar6[2] + uVar15 * 8) + 0x10) + lVar5 * 4) = fVar17
        ;
        if (fVar17 <= local_34) {
          fVar17 = local_34;
        }
        lVar5 = lVar5 + 1;
        local_34 = fVar17;
      } while (lVar5 != 0xc);
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar14);
    local_34 = local_34 * g_023b3888;
    uVar15 = 0;
    do {
      uVar16 = 0;
      do {
        fVar17 = *(float *)(*(int64_t *)(*(int64_t *)(puVar6[2] + uVar15 * 8) + 0x10) + uVar16 * 4
                           );
        if (local_34 <= fVar17) {
          lVar10 = *(int64_t *)(*(int64_t *)(local_58 + 0x10) + uVar15 * 8);
          if (lVar10 != 0) {
            FUN_00d50b00();
            fVar17 = *(float *)(*(int64_t *)(*(int64_t *)(puVar6[2] + uVar15 * 8) + 0x10) +
                               uVar16 * 4);
          }
          FUN_015fec80(fVar17,uVar16 & 0xffffffff);
          lVar5 = CONCAT71(uStack_77,local_78);
          if (local_70 == '\0') {
            if (lVar5 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_70 = '\0';
          }
          local_40[0] = '\0';
          local_48 = lVar5;
          FUN_00d21140();
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
          if (lVar10 != 0) {
            FUN_00d50b20();
          }
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != 0xc);
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar14);
  }
  fVar17 = (float)dVar18;
  if ((fVar17 < g_02394244) && (0 < *(int *)((int64_t)local_50 + 0xc))) {
    lVar10 = 0;
    do {
      pVar9 = (void*)param_1;
      lVar5 = *(int64_t *)(local_50[2] + lVar10 * 8);
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      pvVar4 = _pthread_getspecific(pVar9);
      lVar12 = lVar5;
      if ((pvVar4 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        lVar12 = *(int64_t *)(lVar5 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
      }
      iVar3 = *(int *)(lVar12 + 0x48) * 7;
      iVar3 = iVar3 + (((uint)(iVar3 / 6 + (iVar3 >> 0x1f)) >> 1) - (iVar3 >> 0x1f)) * -0xc;
      iVar3 = (iVar3 >> 0x1f & 0xcU) + iVar3;
      iVar1 = iVar3 * 2;
      iVar3 = iVar3 * 2 + 0x11;
      pVar9 = iVar3 + (((uint)(iVar3 / 6 + (iVar3 >> 0x1f)) >> 2) - (iVar3 >> 0x1f)) * -0x18;
      param_1 = (int64_t)(int)pVar9;
      local_34 = *(float *)(*local_68 + param_1 * 4);
      fVar17 = *(float *)(*local_68 +
                         (int64_t)
                         (int)(iVar1 + (((uint)(iVar1 / 6 + (iVar1 >> 0x1f)) >> 2) - (iVar1 >> 0x1f)
                                       ) * -0x18) * 4);
      if (local_34 <= fVar17) {
        local_34 = fVar17;
      }
      fVar17 = g_0239011c;
      if (local_34 < g_0239011c) {
        pvVar4 = _pthread_getspecific(pVar9);
        lVar12 = lVar5;
        if ((pvVar4 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          lVar12 = *(int64_t *)(lVar5 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
        }
        fVar17 = (local_34 + local_34) * *(float *)(lVar12 + 0x4c);
        *(float *)(lVar12 + 0x4c) = fVar17;
      }
      if (lVar5 != 0) {
        fVar17 = (float)FUN_00d50b20();
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)((int64_t)local_50 + 0xc));
  }
  FUN_00d242c0(fVar17,0);
  puVar11 = local_50;
  while (*(int *)((int64_t)puVar11 + 0xc) != 0) {
    FUN_00d23340();
    lVar10 = local_48;
    local_78 = local_40[0];
    pcVar8 = local_40;
    if (local_40[0] == '\0') {
      pcVar8 = &local_78;
    }
    *pcVar8 = '\0';
    if ((local_40[0] != '\0') && (lVar10 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific((void*)param_1);
    if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
      local_34 = *(float *)(lVar10 + 0x4c);
    }
    else {
      local_34 = *(float *)(*(int64_t *)
                             (lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) + 0x4c)
      ;
    }
    if ((local_78 != '\0') && (lVar10 != 0)) {
      FUN_00d50b20();
    }
    puVar11 = local_50;
    if (g_02391090 <= local_34) break;
    FUN_00d23740();
  }
  *this_ptr = puVar11;
  *(void*)(this_ptr + 1) = 1;
  if (puVar6 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 01606000
// ============================================================
// Function: FUN_01606000
// Address: 01606000
// Size: 1215 bytes
// Class: MUTempoAnalyzerEvent
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


uint64_t FUN_01606000(float param_1,float param_2,int64_t *param_3,int64_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  void*puVar3;
  char in_CL;
  int iVar4;
  int64_t lVar5;
  int in_EDX;
  int iVar6;
  int64_t lVar7;
  int unaff_ESI;
  int iVar8;
  int iVar9;
  int64_t *this_ptr;
  int iVar10;
  float fVar11;
  uint32_t extraout_XMM0_Da;
  float fVar12;
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  float fVar15;
  uint8_t auVar17 [12];
  float fVar18;
  float fVar19;
  float fVar20;
  uint8_t auVar21 [16];
  uint8_t auVar22 [16];
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  int64_t local_50;
  char local_48;
  uint64_t uVar16;
  
  if ((g_028ad780 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_028ad778 = '\0';
    g_028ad770 = 0;
    ___cxa_atexit(extraout_XMM0_Da,0);
    ___cxa_guard_release();
  }
  if (g_028ad770 == 0) {
    FUN_00c8e690();
    if ((local_48 == '\0') && (local_50 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    ___bzero();
    lVar1 = g_028ad770;
    if (g_028ad770 == local_50) {
      if (g_028ad778 == '\0') goto LAB_0160633c;
      FUN_00d50b20();
    }
    else {
      g_028ad770 = local_50;
      if ((g_028ad778 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_0160633c:
      g_028ad778 = '\x01';
    }
    puVar3 = *(void**)(g_028ad770 + 0x10);
    *puVar3 = 0x3f8000003f800000;
    *(void*)(puVar3 + 1) = 0x3f000000;
  }
  if (in_CL != '\0') {
    iVar6 = (int)param_1;
    iVar4 = 0;
    if (-1 < iVar6) {
      iVar4 = iVar6;
    }
    iVar8 = unaff_ESI + -2;
    iVar9 = iVar4;
    if (iVar8 < iVar4) {
      iVar9 = iVar8;
    }
    fVar11 = (float)*(int *)(param_4 + 4) + param_2;
    fVar19 = 0.0;
    fVar20 = 0.0;
    if (fVar11 < (float)in_EDX) {
      uVar16 = 0;
      if (-1 < iVar6) {
        uVar16 = (uint64_t)(uint)param_1;
      }
      auVar17._8_4_ = 0;
      auVar17._0_8_ = uVar16;
      if (iVar8 < iVar4) {
        auVar17._0_4_ = (float)(unaff_ESI + -1);
        auVar17._4_8_ = 0;
      }
      iVar6 = in_EDX + -2;
      fVar19 = 0.0;
      iVar4 = 0;
      if (-1 < (int)fVar11) {
        fVar19 = fVar11;
        iVar4 = (int)fVar11;
      }
      fVar11 = (float)(in_EDX + -1);
      iVar8 = iVar9 * in_EDX;
      iVar10 = (iVar9 + 1) * in_EDX;
      fVar15 = auVar17._0_4_ - (float)iVar9;
      fVar20 = fVar11;
      iVar9 = iVar6;
      if (iVar4 <= iVar6) {
        fVar20 = fVar19;
        iVar9 = iVar4;
      }
      lVar1 = *(int64_t *)(*param_3 + 0x10);
      lVar7 = (int64_t)(iVar9 + 1 + iVar10);
      auVar21 = insertps(ZEXT416(*(uint *)(lVar1 + lVar7 * 4)),
                         *(void*)(lVar1 + (int64_t)(iVar9 + iVar10) * 4),0x10);
      lVar5 = (int64_t)(iVar9 + 1 + iVar8);
      auVar24 = insertps(ZEXT416(*(uint *)(lVar1 + lVar5 * 4)),
                         *(void*)(lVar1 + (int64_t)(iVar9 + iVar8) * 4),0x10);
      fVar18 = auVar17._8_4_;
      auVar25._0_4_ = (auVar21._0_4_ - auVar24._0_4_) * fVar15 + auVar24._0_4_;
      auVar25._4_4_ = (auVar21._4_4_ - auVar24._4_4_) * fVar15 + auVar24._4_4_;
      auVar25._8_4_ = (auVar21._8_4_ - auVar24._8_4_) * fVar18 + auVar24._8_4_;
      auVar25._12_4_ = (auVar21._12_4_ - auVar24._12_4_) * fVar18 + auVar24._12_4_;
      auVar21._4_12_ = auVar25._4_12_;
      auVar21._0_4_ =
           ((auVar25._0_4_ - auVar25._4_4_) * (fVar20 - (float)iVar9) + auVar25._4_4_) *
           *(float *)(*(int64_t *)(g_028ad770 + 0x10) + 4);
      lVar2 = *(int64_t *)(*this_ptr + 0x10);
      auVar25 = insertps(ZEXT416(*(uint *)(lVar2 + lVar7 * 4)),
                         *(void*)(lVar2 + (int64_t)(iVar9 + iVar10) * 4),0x10);
      auVar26 = insertps(ZEXT416(*(uint *)(lVar2 + lVar5 * 4)),
                         *(void*)(lVar2 + (int64_t)(iVar9 + iVar8) * 4),0x10);
      auVar24._0_4_ = (auVar25._0_4_ - auVar26._0_4_) * fVar15 + auVar26._0_4_;
      auVar24._4_4_ = (auVar25._4_4_ - auVar26._4_4_) * fVar15 + auVar26._4_4_;
      auVar24._8_4_ = (auVar25._8_4_ - auVar26._8_4_) * fVar18 + auVar26._8_4_;
      auVar24._12_4_ = (auVar25._12_4_ - auVar26._12_4_) * fVar18 + auVar26._12_4_;
      auVar26._4_12_ = auVar24._4_12_;
      auVar26._0_4_ =
           ((auVar24._0_4_ - auVar24._4_4_) * (fVar20 - (float)iVar9) + auVar24._4_4_) *
           auVar21._0_4_;
      auVar21 = insertps(auVar26,auVar21,0x10);
      fVar19 = auVar21._0_4_ + 0.0;
      fVar20 = auVar21._4_4_ + 0.0;
      param_2 = (float)*(int *)(param_4 + 8) + param_2;
      if (param_2 < (float)in_EDX) {
        fVar12 = 0.0;
        iVar4 = 0;
        if (-1 < (int)param_2) {
          fVar12 = param_2;
          iVar4 = (int)param_2;
        }
        if (iVar4 <= iVar6) {
          fVar11 = fVar12;
          iVar6 = iVar4;
        }
        lVar5 = (int64_t)(iVar6 + 1 + iVar8);
        lVar7 = (int64_t)(iVar6 + 1 + iVar10);
        auVar21 = insertps(ZEXT416(*(uint *)(lVar1 + lVar7 * 4)),
                           *(void*)(lVar1 + (int64_t)(iVar6 + iVar10) * 4),0x10);
        auVar25 = insertps(ZEXT416(*(uint *)(lVar1 + lVar5 * 4)),
                           *(void*)(lVar1 + (int64_t)(iVar6 + iVar8) * 4),0x10);
        auVar13._0_4_ = (auVar21._0_4_ - auVar25._0_4_) * fVar15 + auVar25._0_4_;
        auVar13._4_4_ = (auVar21._4_4_ - auVar25._4_4_) * fVar15 + auVar25._4_4_;
        auVar13._8_4_ = (auVar21._8_4_ - auVar25._8_4_) * fVar18 + auVar25._8_4_;
        auVar13._12_4_ = (auVar21._12_4_ - auVar25._12_4_) * fVar18 + auVar25._12_4_;
        auVar14._4_12_ = auVar13._4_12_;
        auVar14._0_4_ =
             ((auVar13._0_4_ - auVar13._4_4_) * (fVar11 - (float)iVar6) + auVar13._4_4_) *
             *(float *)(*(int64_t *)(g_028ad770 + 0x10) + 8);
        auVar21 = insertps(ZEXT416(*(uint *)(lVar2 + lVar7 * 4)),
                           *(void*)(lVar2 + (int64_t)(iVar6 + iVar10) * 4),0x10);
        auVar25 = insertps(ZEXT416(*(uint *)(lVar2 + lVar5 * 4)),
                           *(void*)(lVar2 + (int64_t)(iVar6 + iVar8) * 4),0x10);
        auVar22._0_4_ = (auVar21._0_4_ - auVar25._0_4_) * fVar15 + auVar25._0_4_;
        auVar22._4_4_ = (auVar21._4_4_ - auVar25._4_4_) * fVar15 + auVar25._4_4_;
        auVar22._8_4_ = (auVar21._8_4_ - auVar25._8_4_) * fVar18 + auVar25._8_4_;
        auVar22._12_4_ = (auVar21._12_4_ - auVar25._12_4_) * fVar18 + auVar25._12_4_;
        auVar23._4_12_ = auVar22._4_12_;
        auVar23._0_4_ =
             ((auVar22._0_4_ - auVar22._4_4_) * (fVar11 - (float)iVar6) + auVar22._4_4_) *
             auVar14._0_4_;
        auVar21 = insertps(auVar23,auVar14,0x10);
        fVar19 = fVar19 + auVar21._0_4_;
        fVar20 = fVar20 + auVar21._4_4_;
      }
    }
    fVar15 = 0.0;
    fVar11 = 0.0;
    if (0.0 < fVar20) {
      fVar15 = fVar19 / fVar20;
      fVar11 = fVar20;
    }
    goto LAB_01606438;
  }
  iVar4 = (int)param_1;
  iVar6 = (int)param_2;
  if (iVar4 < 0) {
    iVar4 = 0;
    param_1 = 0.0;
    if (iVar6 < 0) goto LAB_01606397;
LAB_01606455:
    if (unaff_ESI + -2 < iVar4) {
LAB_016063a2:
      iVar4 = unaff_ESI + -2;
      param_1 = (float)(unaff_ESI + -1);
    }
  }
  else {
    if (-1 < iVar6) goto LAB_01606455;
LAB_01606397:
    iVar6 = 0;
    param_2 = 0.0;
    if (unaff_ESI + -2 < iVar4) goto LAB_016063a2;
  }
  if (in_EDX + -2 < iVar6) {
    param_2 = (float)(in_EDX + -1);
    iVar6 = in_EDX + -2;
  }
  lVar1 = *(int64_t *)(*this_ptr + 0x10);
  iVar9 = (iVar4 + 1) * in_EDX;
  auVar21 = insertps(ZEXT416(*(uint *)(lVar1 + (int64_t)(iVar9 + 1 + iVar6) * 4)),
                     *(void*)(lVar1 + (int64_t)(iVar9 + iVar6) * 4),0x10);
  auVar25 = insertps(ZEXT416(*(uint *)(lVar1 + (int64_t)(iVar4 * in_EDX + iVar6 + 1) * 4)),
                     *(void*)(lVar1 + (int64_t)(iVar4 * in_EDX + iVar6) * 4),0x10);
  fVar11 = (param_1 - (float)iVar4) * (auVar21._4_4_ - auVar25._4_4_) + auVar25._4_4_;
  fVar15 = (((param_1 - (float)iVar4) * (auVar21._0_4_ - auVar25._0_4_) + auVar25._0_4_) - fVar11) *
           (param_2 - (float)iVar6) + fVar11;
LAB_01606438:
  return CONCAT44(fVar11,fVar15);
}



// ============================================================
// 015f8940
// ============================================================
// Function: FUN_015f8940
// Address: 015f8940
// Size: 841 bytes
// Class: MUTempoAnalyzerEvent
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


void FUN_015f8940(float param_1,int param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint64_t uVar5;
  int in_ECX;
  uint uVar6;
  int64_t lVar7;
  int64_t lVar8;
  int iVar9;
  uint uVar10;
  int64_t arg1;
  int64_t this_ptr;
  uint64_t uVar11;
  int64_t lVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int64_t local_40;
  char local_38;
  
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if ((param_1 != 0.0) || (NAN(param_1))) {
    iVar3 = *(int *)(local_40 + 0x18);
    iVar9 = iVar3 + 3;
    if (-1 < iVar3) {
      iVar9 = iVar3;
    }
    if (3 < iVar3) {
      lVar7 = *(int64_t *)(local_40 + 0x10);
      uVar10 = (iVar9 >> 2) - 1;
      uVar13 = 0;
      if (6 < uVar10) {
        uVar14 = (uint64_t)uVar10 + 1;
        uVar13 = uVar14 & 0xfffffffffffffff8;
        uVar11 = (uVar13 - 8 >> 3) + 1;
        uVar5 = (uint64_t)((uint)uVar11 & 7);
        if (uVar13 - 8 < 0x38) {
          lVar8 = 0;
        }
        else {
          lVar12 = -(uVar11 & 0xfffffffffffffff8);
          lVar8 = 0;
          do {
            pfVar1 = (float *)(lVar7 + lVar8 * 4);
            *pfVar1 = param_1;
            pfVar1[1] = param_1;
            pfVar1[2] = param_1;
            pfVar1[3] = param_1;
            pfVar1 = (float *)(lVar7 + 0x10 + lVar8 * 4);
            *pfVar1 = param_1;
            pfVar1[1] = param_1;
            pfVar1[2] = param_1;
            pfVar1[3] = param_1;
            pfVar1 = (float *)(lVar7 + 0x20 + lVar8 * 4);
            *pfVar1 = param_1;
            pfVar1[1] = param_1;
            pfVar1[2] = param_1;
            pfVar1[3] = param_1;
            pfVar1 = (float *)(lVar7 + 0x30 + lVar8 * 4);
            *pfVar1 = param_1;
            pfVar1[1] = param_1;
            pfVar1[2] = param_1;
            pfVar1[3] = param_1;
            pfVar1 = (float *)(lVar7 + 0x40 + lVar8 * 4);
            *pfVar1 = param_1;
            pfVar1[1] = param_1;
            pfVar1[2] = param_1;
            pfVar1[3] = param_1;
            pfVar1 = (float *)(lVar7 + 0x50 + lVar8 * 4);
            *pfVar1 = param_1;
            pfVar1[1] = param_1;
            pfVar1[2] = param_1;
            pfVar1[3] = param_1;
            pfVar1 = (float *)(lVar7 + 0x60 + lVar8 * 4);
            *pfVar1 = param_1;
            pfVar1[1] = param_1;
            pfVar1[2] = param_1;
            pfVar1[3] = param_1;
            pfVar1 = (float *)(lVar7 + 0x70 + lVar8 * 4);
            *pfVar1 = param_1;
            pfVar1[1] = param_1;
            pfVar1[2] = param_1;
            pfVar1[3] = param_1;
            pfVar1 = (float *)(lVar7 + 0x80 + lVar8 * 4);
            *pfVar1 = param_1;
            pfVar1[1] = param_1;
            pfVar1[2] = param_1;
            pfVar1[3] = param_1;
            pfVar1 = (float *)(lVar7 + 0x90 + lVar8 * 4);
            *pfVar1 = param_1;
            pfVar1[1] = param_1;
            pfVar1[2] = param_1;
            pfVar1[3] = param_1;
            pfVar1 = (float *)(lVar7 + 0xa0 + lVar8 * 4);
            *pfVar1 = param_1;
            pfVar1[1] = param_1;
            pfVar1[2] = param_1;
            pfVar1[3] = param_1;
            pfVar1 = (float *)(lVar7 + 0xb0 + lVar8 * 4);
            *pfVar1 = param_1;
            pfVar1[1] = param_1;
            pfVar1[2] = param_1;
            pfVar1[3] = param_1;
            pfVar1 = (float *)(lVar7 + 0xc0 + lVar8 * 4);
            *pfVar1 = param_1;
            pfVar1[1] = param_1;
            pfVar1[2] = param_1;
            pfVar1[3] = param_1;
            pfVar1 = (float *)(lVar7 + 0xd0 + lVar8 * 4);
            *pfVar1 = param_1;
            pfVar1[1] = param_1;
            pfVar1[2] = param_1;
            pfVar1[3] = param_1;
            pfVar1 = (float *)(lVar7 + 0xe0 + lVar8 * 4);
            *pfVar1 = param_1;
            pfVar1[1] = param_1;
            pfVar1[2] = param_1;
            pfVar1[3] = param_1;
            pfVar1 = (float *)(lVar7 + 0xf0 + lVar8 * 4);
            *pfVar1 = param_1;
            pfVar1[1] = param_1;
            pfVar1[2] = param_1;
            pfVar1[3] = param_1;
            lVar8 = lVar8 + 0x40;
            lVar12 = lVar12 + 8;
          } while (lVar12 != 0);
        }
        if (uVar5 != 0) {
          lVar8 = lVar7 + lVar8 * 4;
          lVar12 = 0;
          do {
            pfVar1 = (float *)(lVar8 + lVar12);
            *pfVar1 = param_1;
            pfVar1[1] = param_1;
            pfVar1[2] = param_1;
            pfVar1[3] = param_1;
            pfVar1 = (float *)(lVar8 + 0x10 + lVar12);
            *pfVar1 = param_1;
            pfVar1[1] = param_1;
            pfVar1[2] = param_1;
            pfVar1[3] = param_1;
            lVar12 = lVar12 + 0x20;
          } while (uVar5 << 5 != lVar12);
        }
        if (uVar14 == uVar13) goto LAB_015f8b1d;
        lVar7 = lVar7 + uVar13 * 4;
      }
      lVar8 = 0;
      do {
        *(float *)(lVar7 + lVar8 * 4) = param_1;
        lVar8 = lVar8 + 1;
      } while ((iVar9 >> 2) - (int)uVar13 != (int)lVar8);
    }
  }
  else {
    ___bzero();
  }
LAB_015f8b1d:
  lVar7 = *(int64_t *)(this_ptr + 0x70);
  if (lVar7 == local_40) {
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(int64_t *)(this_ptr + 0x70) = local_40;
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
  }
  iVar3 = FUN_014832c0();
  if (iVar3 <= param_3) {
    param_3 = FUN_014832c0();
    param_3 = param_3 + -1;
  }
  lVar7 = g_02802f00;
  fVar2 = g_0239011c;
  if (0 < param_3) {
    iVar3 = *(int *)(this_ptr + 0x10);
    lVar8 = *(int64_t *)(*(int64_t *)(this_ptr + 0x70) + 0x10);
    uVar13 = 1;
    do {
      iVar9 = *(int *)(lVar7 + uVar13 * 4) + iVar3;
      uVar4 = iVar9 - in_ECX;
      uVar10 = iVar9 + in_ECX;
      if ((int)uVar4 < 0) {
        uVar4 = 0;
      }
      if (param_2 <= (int)uVar10) {
        uVar10 = param_2 - 1;
      }
      fVar15 = 0.0;
      if ((int)uVar4 <= (int)uVar10) {
        uVar11 = (uint64_t)uVar4;
        uVar6 = uVar10 + 1;
        fVar15 = 0.0;
        uVar5 = uVar11;
        if ((uVar6 - uVar4 & 1) != 0) {
          fVar15 = *(float *)(arg1 + uVar11 * 4) * fVar2 + 0.0;
          uVar5 = uVar11 + 1;
        }
        if (~uVar11 + (uint64_t)uVar6 != 0) {
          do {
            fVar16 = *(float *)(arg1 + uVar5 * 4);
            fVar17 = fVar16 * fVar2;
            fVar18 = fVar17;
            if (uVar5 != uVar10) {
              fVar18 = fVar16;
            }
            if (uVar11 != uVar5) {
              fVar17 = fVar18;
            }
            fVar16 = *(float *)(arg1 + 4 + uVar5 * 4);
            fVar18 = fVar16 * fVar2;
            if (uVar5 + 1 == (uint64_t)uVar10) {
              fVar16 = fVar18;
            }
            if (uVar5 + 1 != uVar11) {
              fVar18 = fVar16;
            }
            fVar15 = fVar15 + fVar17 + fVar18;
            uVar5 = uVar5 + 2;
          } while (uVar5 != uVar6);
        }
      }
      fVar16 = param_1;
      if (param_1 <= fVar15) {
        fVar16 = fVar15;
      }
      *(float *)(lVar8 + uVar13 * 4) = fVar16;
      uVar13 = uVar13 + 1;
    } while (uVar13 != param_3 + 1);
  }
  return;
}



// ============================================================
// 01602560
// ============================================================
// Function: FUN_01602560
// Address: 01602560
// Size: 654 bytes
// Class: MUTempoAnalyzerEvent
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


int64_t * FUN_01602560(float param_1)

{
  float *pfVar1;
  int64_t lVar2;
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
  int iVar17;
  uint64_t uVar18;
  int64_t lVar19;
  int iVar20;
  float *pfVar21;
  uint64_t uVar22;
  uint64_t uVar23;
  char unaff_SIL;
  int64_t *this_ptr;
  int64_t lVar24;
  uint uVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  int64_t local_48;
  char local_40;
  
  iVar26 = (int)((double)param_1 + g_0241b698);
  uVar25 = iVar26 * 2 + 1;
  uVar18 = 1;
  if (0 < (int)uVar25) {
    uVar18 = (uint64_t)uVar25;
  }
  FUN_00c8e690();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  if ((int)uVar25 < 2) {
    **(void**)(local_48 + 0x10) = 0x3f800000;
    goto LAB_016027d7;
  }
  lVar19 = FUN_00e84280();
  iVar17 = FUN_00e84a40();
  fVar27 = g_02390124;
  lVar2 = *(int64_t *)(local_48 + 0x10);
  lVar24 = (int64_t)((iVar26 * 2 - ((int)uVar25 >> 0x1f)) + 1 >> 1);
  if (iVar26 < 1) {
    *(void*)(lVar2 + lVar24 * 4) = 0x3f800000;
  }
  else {
    pfVar21 = (float *)(lVar2 + lVar24 * 4);
    fVar27 = 0.0;
    uVar22 = 1;
    do {
      pfVar21 = pfVar21 + -1;
      iVar20 = (int)((float)(int)uVar22 * ((float)(iVar17 / 2) / param_1)) + iVar17 / 2;
      fVar28 = 0.0;
      if (iVar20 < iVar17) {
        fVar28 = *(float *)(lVar19 + (int64_t)iVar20 * 4);
      }
      *pfVar21 = fVar28;
      *(float *)(lVar2 + lVar24 * 4 + uVar22 * 4) = fVar28;
      fVar27 = fVar27 + fVar28 + fVar28;
      uVar22 = uVar22 + 1;
    } while (iVar26 + 1 != uVar22);
    fVar27 = fVar27 + g_02390124;
    *(void*)(lVar2 + lVar24 * 4) = 0x3f800000;
  }
  if (unaff_SIL == '\0') goto LAB_016027d7;
  fVar27 = g_02390124 / fVar27;
  if ((uint)uVar18 < 8) {
    uVar22 = 0;
  }
  else {
    uVar22 = (uint64_t)((uint)uVar18 & 0x7ffffff8);
    uVar23 = (uVar22 - 8 >> 3) + 1;
    if (uVar22 - 8 == 0) {
      lVar19 = 0;
    }
    else {
      lVar24 = -(uVar23 & 0xfffffffffffffffe);
      lVar19 = 0;
      do {
        pfVar21 = (float *)(lVar2 + lVar19 * 4);
        fVar28 = pfVar21[1];
        fVar3 = pfVar21[2];
        fVar4 = pfVar21[3];
        pfVar1 = (float *)(lVar2 + 0x10 + lVar19 * 4);
        fVar5 = *pfVar1;
        fVar6 = pfVar1[1];
        fVar7 = pfVar1[2];
        fVar8 = pfVar1[3];
        pfVar1 = (float *)(lVar2 + 0x20 + lVar19 * 4);
        fVar9 = *pfVar1;
        fVar10 = pfVar1[1];
        fVar11 = pfVar1[2];
        fVar12 = pfVar1[3];
        pfVar1 = (float *)(lVar2 + 0x30 + lVar19 * 4);
        fVar13 = *pfVar1;
        fVar14 = pfVar1[1];
        fVar15 = pfVar1[2];
        fVar16 = pfVar1[3];
        pfVar1 = (float *)(lVar2 + lVar19 * 4);
        *pfVar1 = *pfVar21 * fVar27;
        pfVar1[1] = fVar28 * fVar27;
        pfVar1[2] = fVar3 * fVar27;
        pfVar1[3] = fVar4 * fVar27;
        pfVar21 = (float *)(lVar2 + 0x10 + lVar19 * 4);
        *pfVar21 = fVar5 * fVar27;
        pfVar21[1] = fVar6 * fVar27;
        pfVar21[2] = fVar7 * fVar27;
        pfVar21[3] = fVar8 * fVar27;
        pfVar21 = (float *)(lVar2 + 0x20 + lVar19 * 4);
        *pfVar21 = fVar9 * fVar27;
        pfVar21[1] = fVar10 * fVar27;
        pfVar21[2] = fVar11 * fVar27;
        pfVar21[3] = fVar12 * fVar27;
        pfVar21 = (float *)(lVar2 + 0x30 + lVar19 * 4);
        *pfVar21 = fVar13 * fVar27;
        pfVar21[1] = fVar14 * fVar27;
        pfVar21[2] = fVar15 * fVar27;
        pfVar21[3] = fVar16 * fVar27;
        lVar19 = lVar19 + 0x10;
        lVar24 = lVar24 + 2;
      } while (lVar24 != 0);
      if ((uVar23 & 1) == 0) goto LAB_016027c0;
    }
    pfVar21 = (float *)(lVar2 + lVar19 * 4);
    fVar28 = pfVar21[1];
    fVar3 = pfVar21[2];
    fVar4 = pfVar21[3];
    pfVar1 = (float *)(lVar2 + 0x10 + lVar19 * 4);
    fVar5 = *pfVar1;
    fVar6 = pfVar1[1];
    fVar7 = pfVar1[2];
    fVar8 = pfVar1[3];
    pfVar1 = (float *)(lVar2 + lVar19 * 4);
    *pfVar1 = *pfVar21 * fVar27;
    pfVar1[1] = fVar28 * fVar27;
    pfVar1[2] = fVar3 * fVar27;
    pfVar1[3] = fVar4 * fVar27;
    pfVar21 = (float *)(lVar2 + 0x10 + lVar19 * 4);
    *pfVar21 = fVar5 * fVar27;
    pfVar21[1] = fVar6 * fVar27;
    pfVar21[2] = fVar7 * fVar27;
    pfVar21[3] = fVar8 * fVar27;
  }
LAB_016027c0:
  do {
    *(float *)(lVar2 + uVar22 * 4) = *(float *)(lVar2 + uVar22 * 4) * fVar27;
    uVar22 = uVar22 + 1;
  } while (uVar18 != uVar22);
LAB_016027d7:
  *this_ptr = local_48;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 015fa320
// ============================================================
// Function: FUN_015fa320
// Address: 015fa320
// Size: 979 bytes
// Class: MUTempoAnalyzerEvent
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


void* FUN_015fa320(float param_1,int64_t *param_2,int64_t *param_3)

{
  int iVar1;
  int iVar2;
  int64_t lVar3;
  char cVar4;
  void*puVar5;
  char *pcVar6;
  char in_CL;
  int64_t lVar7;
  int64_t arg1;
  void*this_ptr;
  bool bVar8;
  bool bVar9;
  int64_t local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  (*g_02572370)();
  if (arg1 != 0) {
    FUN_00d50b00();
  }
  do {
    if (*(int *)(*(int64_t *)(arg1 + 0x10) + 0xc) < 2) {
LAB_015fa6ea:
      *this_ptr = puVar5;
      *(void*)(this_ptr + 1) = 1;
      FUN_00d50b20();
      return this_ptr;
    }
    FUN_00d23340();
    local_38[0] = local_48[0];
    pcVar6 = local_48;
    if (local_48[0] == '\0') {
      pcVar6 = local_38;
    }
    *pcVar6 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (*(int64_t *)(local_50 + 0x78) == 0) {
      bVar8 = false;
    }
    else {
      FUN_00d23340();
      local_40[0] = local_48[0];
      pcVar6 = local_48;
      if (local_48[0] == '\0') {
        pcVar6 = local_40;
      }
      *pcVar6 = '\0';
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      bVar8 = *(int64_t *)(*(int64_t *)(local_50 + 0x78) + 0x10) != 0;
      if ((local_40[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (!bVar8) goto LAB_015fa6ea;
    FUN_00d23340();
    local_38[0] = local_48[0];
    pcVar6 = local_48;
    if (local_48[0] == '\0') {
      pcVar6 = local_38;
    }
    *pcVar6 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    iVar1 = *(int *)(*(int64_t *)(local_50 + 0x78) + 0xc);
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
    bVar8 = true;
    if (iVar1 != 3) {
      lVar3 = *param_2;
      if ((lVar3 == 0) || ((int)*(uint *)(lVar3 + 0x18) < 4)) {
        bVar8 = false;
      }
      else {
        lVar7 = 0;
        do {
          bVar8 = iVar1 == *(int *)(*(int64_t *)(lVar3 + 0x10) + lVar7 * 4);
          if (bVar8) break;
          bVar9 = (uint64_t)(*(uint *)(lVar3 + 0x18) >> 2) - 1 != lVar7;
          lVar7 = lVar7 + 1;
        } while (bVar9);
      }
    }
    FUN_00d23340();
    local_38[0] = local_48[0];
    pcVar6 = local_48;
    if (local_48[0] == '\0') {
      pcVar6 = local_38;
    }
    *pcVar6 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    iVar2 = *(int *)(*(int64_t *)(*(int64_t *)(*(int64_t *)(local_50 + 0x78) + 0x10) + 0x78) +
                    0xc);
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
    if (!(bool)(bVar8 & iVar2 == iVar1)) goto LAB_015fa6ea;
    FUN_00d23340();
    local_38[0] = local_48[0];
    pcVar6 = local_48;
    if (local_48[0] == '\0') {
      pcVar6 = local_38;
    }
    *pcVar6 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = *(int64_t *)(*(int64_t *)(*(int64_t *)(local_50 + 0x78) + 0x10) + 0x80);
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
    if ((((param_1 != g_0239424c) || (NAN(param_1) || NAN(g_0239424c))) && (lVar3 != 0)) &&
       (param_1 < (float)((uint)(*(float *)(arg1 + 0x2c) - *(float *)(lVar3 + 0x2c)) &
                         g_02390140))) {
      FUN_00d50b20();
      goto LAB_015fa6ea;
    }
    if (lVar3 == 0) goto LAB_015fa6ea;
    if (*(int *)(*(int64_t *)(lVar3 + 0x10) + 0xc) < 2) {
      FUN_00d50b20();
      goto LAB_015fa6ea;
    }
    if (*param_3 == 0) {
      cVar4 = in_CL;
      if (*(char *)(lVar3 + 0x50) == '\0') goto joined_r0x015fa67b;
    }
    else {
      local_48[0] = '\0';
      cVar4 = FUN_00d24090();
      if ((local_48[0] != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
joined_r0x015fa67b:
      if (cVar4 == '\0') {
        FUN_00d50b20();
        goto LAB_015fa6ea;
      }
    }
    if (lVar3 != arg1) {
      FUN_00d50b00();
      FUN_00d50b20();
      arg1 = lVar3;
    }
    local_48[0] = '\0';
    FUN_00d21140();
    if ((local_48[0] != '\0') && (arg1 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    local_50 = arg1;
  } while( true );
}



// ============================================================
// 015fd450
// ============================================================
// Function: FUN_015fd450
// Address: 015fd450
// Size: 814 bytes
// Class: MUTempoAnalyzerEvent
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


void FUN_015fd450(uint64_t param_1,int64_t *param_2)

{
  int iVar1;
  void*puVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *arg1;
  int64_t this_ptr;
  int iVar6;
  uint32_t uVar7;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_02572358;
  (*g_02572370)();
  if ((*arg1 == 0) || (*param_2 == 0)) {
    if (0 < *(int *)(this_ptr + 0x28)) {
      iVar6 = 0;
      do {
        uVar7 = FUN_00d216c0();
        uVar3 = (uint64_t)*(uint *)(this_ptr + 0x30);
        if (0 < (int)*(uint *)(this_ptr + 0x30)) {
          lVar5 = 0;
          do {
            if ((iVar6 < *(int *)(this_ptr + 0x28)) && (lVar5 < (int)uVar3)) {
              if (*(int *)(this_ptr + 0x34) == iVar6) {
                iVar1 = *(int *)(*(int64_t *)(this_ptr + 0x38) + lVar5 * 4);
              }
              else {
                lVar4 = (int64_t)((int)uVar3 * iVar6) * 4 +
                        *(int64_t *)(*(int64_t *)(this_ptr + 0x18) + 0x10);
                *(int64_t *)(this_ptr + 0x38) = lVar4;
                *(int *)(this_ptr + 0x34) = iVar6;
                iVar1 = *(int *)(lVar4 + lVar5 * 4);
              }
              if (((int64_t)iVar1 != -1) &&
                 (*(int64_t *)
                   (*(int64_t *)(*(int64_t *)(this_ptr + 0x10) + 0x10) + (int64_t)iVar1 * 8) !=
                  0)) {
                FUN_00d50b00();
                FUN_00d21140();
                uVar7 = FUN_00d50b20();
              }
            }
            lVar5 = lVar5 + 1;
            uVar3 = (uint64_t)*(int *)(this_ptr + 0x30);
          } while (lVar5 < (int64_t)uVar3);
        }
        FUN_00d242c0(uVar7,0);
        if (0 < *(int *)((int64_t)puVar2 + 0xc)) {
          lVar5 = puVar2[2];
          lVar4 = 0;
          do {
            *(int *)(*(int64_t *)(lVar5 + lVar4 * 8) + 0x18) = (int)lVar4;
            lVar4 = lVar4 + 1;
          } while (lVar4 < *(int *)((int64_t)puVar2 + 0xc));
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(this_ptr + 0x28));
    }
  }
  else if (0 < *(int *)(this_ptr + 0x28)) {
    iVar6 = 0;
    do {
      uVar7 = FUN_00d216c0();
      uVar3 = (uint64_t)*(uint *)(this_ptr + 0x30);
      if (0 < (int)*(uint *)(this_ptr + 0x30)) {
        lVar5 = 0;
        do {
          if ((iVar6 < *(int *)(this_ptr + 0x28)) && (lVar5 < (int)uVar3)) {
            if (*(int *)(this_ptr + 0x34) == iVar6) {
              iVar1 = *(int *)(*(int64_t *)(this_ptr + 0x38) + lVar5 * 4);
            }
            else {
              lVar4 = (int64_t)((int)uVar3 * iVar6) * 4 +
                      *(int64_t *)(*(int64_t *)(this_ptr + 0x18) + 0x10);
              *(int64_t *)(this_ptr + 0x38) = lVar4;
              *(int *)(this_ptr + 0x34) = iVar6;
              iVar1 = *(int *)(lVar4 + lVar5 * 4);
            }
            if (((int64_t)iVar1 != -1) &&
               (lVar4 = *(int64_t *)
                         (*(int64_t *)(*(int64_t *)(this_ptr + 0x10) + 0x10) +
                         (int64_t)iVar1 * 8), lVar4 != 0)) {
              FUN_00d50b00();
              *(float *)(lVar4 + 0x1c) =
                   *(float *)(*(int64_t *)(*arg1 + 0x10) +
                             (int64_t)*(int *)(lVar4 + 0x10) * 4) * *(float *)(lVar4 + 0x1c);
              FUN_00d21140();
              uVar7 = FUN_00d50b20();
            }
          }
          lVar5 = lVar5 + 1;
          uVar3 = (uint64_t)*(int *)(this_ptr + 0x30);
        } while (lVar5 < (int64_t)uVar3);
      }
      FUN_00d242c0(uVar7,0);
      if (0 < *(int *)((int64_t)puVar2 + 0xc)) {
        lVar5 = 0;
        do {
          lVar4 = *(int64_t *)(puVar2[2] + lVar5 * 8);
          if (lVar4 != 0) {
            FUN_00d50b00();
          }
          *(int *)(lVar4 + 0x18) = (int)lVar5;
          *(float *)(lVar4 + 0x1c) =
               *(float *)(*(int64_t *)(*param_2 + 0x10) + (int64_t)*(int *)(lVar4 + 0x10) * 4) *
               *(float *)(lVar4 + 0x1c);
          FUN_00d50b20();
          lVar5 = lVar5 + 1;
        } while (lVar5 < *(int *)((int64_t)puVar2 + 0xc));
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(this_ptr + 0x28));
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 015fdc20
// ============================================================
// Function: FUN_015fdc20
// Address: 015fdc20
// Size: 791 bytes
// Class: MUTempoAnalyzerEvent
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


int64_t * FUN_015fdc20(void)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t arg1;
  int64_t *this_ptr;
  uint64_t uVar11;
  float local_4c;
  float local_48;
  int64_t local_40;
  int64_t local_38;
  
  uVar7 = (uint64_t)*(uint *)(arg1 + 0x28);
  if ((int)*(uint *)(arg1 + 0x28) < 1) {
    *(void*)(this_ptr + 1) = 0;
    local_40 = 0;
    lVar10 = 0;
    bVar3 = false;
  }
  else {
    local_48 = 0.0;
    uVar11 = 0;
    lVar10 = 0;
    bVar3 = false;
    bVar4 = false;
    local_40 = 0;
    do {
      iVar1 = *(int *)(*(int64_t *)(*(int64_t *)(arg1 + 0x20) + 0x10) + uVar11 * 4);
      lVar9 = (int64_t)iVar1;
      if (lVar9 != -1) {
        bVar2 = true;
        if (((int64_t)uVar11 < (int64_t)(int)uVar7) && (iVar1 < *(int *)(arg1 + 0x30))) {
          if (uVar11 == *(uint *)(arg1 + 0x34)) {
            iVar1 = *(int *)(*(int64_t *)(arg1 + 0x38) + lVar9 * 4);
          }
          else {
            lVar8 = (int64_t)(*(int *)(arg1 + 0x30) * (int)uVar11) * 4 +
                    *(int64_t *)(*(int64_t *)(arg1 + 0x18) + 0x10);
            *(int64_t *)(arg1 + 0x38) = lVar8;
            *(int *)(arg1 + 0x34) = (int)uVar11;
            iVar1 = *(int *)(lVar8 + lVar9 * 4);
          }
          if ((int64_t)iVar1 == -1) goto LAB_015fdd90;
          local_38 = *(int64_t *)
                      (*(int64_t *)(*(int64_t *)(arg1 + 0x10) + 0x10) + (int64_t)iVar1 * 8);
          bVar5 = true;
          if (local_38 == 0) {
            bVar2 = false;
            goto joined_r0x015fdd9d;
          }
          FUN_00d50b00();
          bVar2 = false;
          if (lVar10 != local_38) goto LAB_015fdda3;
LAB_015fdd10:
          if (lVar10 == 0 || bVar3) goto LAB_015fddf2;
          bVar3 = true;
          bVar5 = false;
          if (!bVar2) goto LAB_015fddf2;
          bVar3 = true;
          FUN_00d50b00();
          bVar5 = false;
LAB_015fddf7:
          local_4c = *(float *)(lVar10 + 0x1c);
          bVar2 = local_48 < local_4c;
          bVar6 = bVar2;
          if (bVar5) {
LAB_015fde2a:
            bVar2 = bVar6;
            if (local_38 != 0) {
              FUN_00d50b20();
            }
          }
        }
        else {
LAB_015fdd90:
          bVar5 = false;
joined_r0x015fdd9d:
          local_38 = 0;
          if (lVar10 == 0) goto LAB_015fdd10;
LAB_015fdda3:
          if (bVar2) {
            if (local_38 != 0) {
              FUN_00d50b00();
            }
            if ((bVar3) && (lVar10 != 0)) {
              FUN_00d50b20();
            }
          }
          else if ((bVar3) && (lVar10 != 0)) {
            FUN_00d50b20();
          }
          bVar5 = false;
          bVar3 = true;
          lVar10 = local_38;
LAB_015fddf2:
          if (lVar10 != 0) goto LAB_015fddf7;
          lVar10 = 0;
          bVar2 = false;
          bVar6 = false;
          if (bVar5) goto LAB_015fde2a;
        }
        if (bVar2) {
          if (local_40 == lVar10) {
            lVar9 = local_40;
            bVar2 = bVar4;
            if (bVar3) {
              if ((!bVar4) && (lVar10 != 0)) {
                FUN_00d50b00();
                bVar2 = true;
              }
            }
            else {
              bVar3 = false;
            }
          }
          else {
            if ((bVar3) && (lVar10 != 0)) {
              FUN_00d50b00();
            }
            lVar9 = lVar10;
            bVar2 = bVar3;
            if ((bVar4) && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          local_40 = lVar9;
          local_48 = local_4c;
          bVar4 = bVar2;
        }
      }
      uVar11 = uVar11 + 1;
      uVar7 = (uint64_t)*(int *)(arg1 + 0x28);
    } while ((int64_t)uVar11 < (int64_t)uVar7);
    *(void*)(this_ptr + 1) = 0;
    if (!bVar4) {
      if (local_40 == 0) {
        local_40 = 0;
      }
      else {
        FUN_00d50b00();
      }
    }
  }
  *this_ptr = local_40;
  *(void*)(this_ptr + 1) = 1;
  if ((bVar3) && (lVar10 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 015f8d00
// ============================================================
// Function: FUN_015f8d00
// Address: 015f8d00
// Size: 610 bytes
// Class: MUTempoAnalyzerEvent
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


float FUN_015f8d00(int param_1,uint64_t param_2,int64_t *param_3)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  uint64_t uVar4;
  uint uVar5;
  int64_t arg1;
  uint64_t uVar6;
  int iVar7;
  int64_t this_ptr;
  uint64_t uVar8;
  uint uVar9;
  int64_t lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  iVar3 = FUN_014832c0();
  lVar10 = *param_3;
  if (lVar10 == 0) {
    iVar7 = *(int *)(g_02802f00 + 4) + *(int *)(this_ptr + 0x10);
    fVar11 = 0.0;
    if (iVar7 < iVar3) {
      lVar10 = 1;
      fVar11 = 0.0;
      do {
        uVar5 = iVar7 - param_1;
        if (iVar7 - param_1 < 0) {
          uVar5 = 0;
        }
        uVar2 = iVar7 + param_1;
        if (iVar3 <= iVar7 + param_1) {
          uVar2 = iVar3 - 1;
        }
        if ((int)uVar5 <= (int)uVar2) {
          uVar4 = (uint64_t)uVar5;
          uVar9 = uVar2 + 1;
          uVar6 = uVar4;
          if ((uVar9 - uVar5 & 1) != 0) {
            fVar11 = fVar11 + *(float *)(arg1 + uVar4 * 4) * g_0239011c;
            uVar6 = uVar4 + 1;
          }
          if (~uVar4 + (uint64_t)uVar9 != 0) {
            do {
              fVar1 = *(float *)(arg1 + uVar6 * 4);
              fVar12 = fVar1 * g_0239011c;
              fVar13 = fVar12;
              if (uVar6 != uVar2) {
                fVar13 = fVar1;
              }
              if (uVar4 != uVar6) {
                fVar12 = fVar13;
              }
              fVar1 = *(float *)(arg1 + 4 + uVar6 * 4);
              fVar13 = fVar1 * g_0239011c;
              if (uVar6 + 1 == (uint64_t)uVar2) {
                fVar1 = fVar13;
              }
              if (uVar6 + 1 != uVar4) {
                fVar13 = fVar1;
              }
              fVar11 = fVar11 + fVar12 + fVar13;
              uVar6 = uVar6 + 2;
            } while (uVar6 != uVar9);
          }
        }
        iVar7 = *(int *)(g_02802f00 + 4 + lVar10 * 4) + *(int *)(this_ptr + 0x10);
        lVar10 = lVar10 + 1;
      } while (iVar7 < iVar3);
    }
  }
  else {
    fVar11 = 0.0;
    if (1 < (int)*(uint *)(lVar10 + 0x18)) {
      fVar11 = 0.0;
      uVar6 = 1;
      do {
        if (*(char *)(*(int64_t *)(lVar10 + 0x10) + uVar6) != '\0') {
          iVar7 = *(int *)(this_ptr + 0x10) + *(int *)(g_02802f00 + uVar6 * 4);
          if (iVar3 <= iVar7) {
            return fVar11;
          }
          uVar5 = iVar7 - param_1;
          if (iVar7 - param_1 < 0) {
            uVar5 = 0;
          }
          uVar2 = iVar7 + param_1;
          if (iVar3 <= iVar7 + param_1) {
            uVar2 = iVar3 - 1;
          }
          if ((int)uVar5 <= (int)uVar2) {
            uVar8 = (uint64_t)uVar5;
            uVar9 = uVar2 + 1;
            uVar4 = uVar8;
            if ((uVar9 - uVar5 & 1) != 0) {
              fVar11 = fVar11 + *(float *)(arg1 + uVar8 * 4) * g_0239011c;
              uVar4 = uVar8 + 1;
            }
            if (~uVar8 + (uint64_t)uVar9 != 0) {
              do {
                fVar1 = *(float *)(arg1 + uVar4 * 4);
                fVar12 = fVar1 * g_0239011c;
                fVar13 = fVar12;
                if (uVar4 != uVar2) {
                  fVar13 = fVar1;
                }
                if (uVar8 != uVar4) {
                  fVar12 = fVar13;
                }
                fVar1 = *(float *)(arg1 + 4 + uVar4 * 4);
                fVar13 = fVar1 * g_0239011c;
                if (uVar4 + 1 == (uint64_t)uVar2) {
                  fVar1 = fVar13;
                }
                if (uVar4 + 1 != uVar8) {
                  fVar13 = fVar1;
                }
                fVar11 = fVar11 + fVar12 + fVar13;
                uVar4 = uVar4 + 2;
              } while (uVar4 != uVar9);
            }
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != *(uint *)(lVar10 + 0x18));
    }
  }
  return fVar11;
}



// ============================================================
// 015fe420
// ============================================================
// Function: FUN_015fe420
// Address: 015fe420
// Size: 728 bytes
// Class: MUTempoAnalyzerEvent
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


void* FUN_015fe420(uint64_t param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  void*puVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  bool bVar10;
  
  if ((param_2 < 0) || (*(int *)(arg1 + 0x28) <= param_2)) {
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &g_02572358;
    (*g_02572370)();
    *this_ptr = puVar4;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &g_02572358;
    (*g_02572370)();
    uVar5 = (uint64_t)*(uint *)(arg1 + 0x30);
    if ((int)*(uint *)(arg1 + 0x30) < 1) {
      bVar3 = false;
      lVar7 = 0;
    }
    else {
      lVar9 = 0;
      lVar7 = 0;
      bVar3 = false;
      do {
        bVar10 = true;
        if ((param_2 < *(int *)(arg1 + 0x28)) && (lVar9 < (int)uVar5)) {
          if (*(int *)(arg1 + 0x34) == param_2) {
            iVar1 = *(int *)(*(int64_t *)(arg1 + 0x38) + lVar9 * 4);
          }
          else {
            lVar6 = (int64_t)((int)uVar5 * param_2) * 4 +
                    *(int64_t *)(*(int64_t *)(arg1 + 0x18) + 0x10);
            *(int64_t *)(arg1 + 0x38) = lVar6;
            *(int *)(arg1 + 0x34) = param_2;
            iVar1 = *(int *)(lVar6 + lVar9 * 4);
          }
          if ((int64_t)iVar1 == -1) goto LAB_015fe550;
          lVar6 = *(int64_t *)
                   (*(int64_t *)(*(int64_t *)(arg1 + 0x10) + 0x10) + (int64_t)iVar1 * 8);
          bVar2 = true;
          if (lVar6 == 0) {
            bVar10 = false;
            goto joined_r0x015fe553;
          }
          FUN_00d50b00();
          bVar10 = false;
          lVar8 = lVar6;
          if (lVar7 != lVar6) goto LAB_015fe559;
LAB_015fe5e0:
          lVar6 = lVar7;
          if (lVar7 == 0 || bVar3) goto LAB_015fe5b0;
          bVar2 = false;
          bVar3 = true;
          if (!bVar10) goto LAB_015fe5b0;
          bVar3 = true;
          FUN_00d50b00();
          bVar2 = false;
LAB_015fe626:
          if (*(int64_t *)(lVar7 + 0x80) == 0) {
            bVar10 = false;
          }
          else {
            bVar10 = *(char *)(*(int64_t *)(lVar7 + 0x80) + 0x50) != '\0';
          }
          if (bVar2) {
LAB_015fe64e:
            if (lVar8 != 0) {
              FUN_00d50b20();
            }
          }
        }
        else {
LAB_015fe550:
          bVar2 = false;
joined_r0x015fe553:
          lVar6 = 0;
          lVar8 = lVar6;
          if (lVar7 == 0) goto LAB_015fe5e0;
LAB_015fe559:
          if (bVar10) {
            if (lVar6 != 0) {
              FUN_00d50b00();
            }
            if ((bVar3) && (lVar7 != 0)) {
              FUN_00d50b20();
            }
          }
          else if ((bVar3) && (lVar7 != 0)) {
            FUN_00d50b20();
          }
          bVar2 = false;
          bVar3 = true;
          lVar8 = lVar6;
LAB_015fe5b0:
          lVar7 = lVar6;
          if (lVar6 != 0) goto LAB_015fe626;
          lVar7 = 0;
          bVar10 = false;
          if (bVar2) goto LAB_015fe64e;
        }
        if (bVar10) {
          FUN_00d21140();
        }
        lVar9 = lVar9 + 1;
        uVar5 = (uint64_t)*(int *)(arg1 + 0x30);
      } while (lVar9 < (int64_t)uVar5);
    }
    *this_ptr = puVar4;
    *(void*)(this_ptr + 1) = 1;
    if ((bVar3) && (lVar7 != 0)) {
      FUN_00d50b20();
    }
  }
  return this_ptr;
}



// ============================================================
// 015fe030
// ============================================================
// Function: FUN_015fe030
// Address: 015fe030
// Size: 798 bytes
// Class: MUTempoAnalyzerEvent
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


void* FUN_015fe030(float param_1,int param_2)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int64_t lVar6;
  void*puVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar11;
  
  if ((param_2 < 0) || (*(int *)(arg1 + 0x28) <= param_2)) {
    puVar7 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar7 = &g_02572358;
    (*g_02572370)();
    *this_ptr = puVar7;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    puVar7 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar7 = &g_02572358;
    (*g_02572370)();
    uVar8 = (uint64_t)*(uint *)(arg1 + 0x30);
    if ((int)*(uint *)(arg1 + 0x30) < 1) {
      bVar4 = false;
      lVar10 = 0;
    }
    else {
      lVar11 = 0;
      lVar10 = 0;
      bVar4 = false;
      do {
        bVar5 = true;
        if ((param_2 < *(int *)(arg1 + 0x28)) && (lVar11 < (int)uVar8)) {
          if (*(int *)(arg1 + 0x34) == param_2) {
            iVar2 = *(int *)(*(int64_t *)(arg1 + 0x38) + lVar11 * 4);
          }
          else {
            lVar9 = (int64_t)((int)uVar8 * param_2) * 4 +
                    *(int64_t *)(*(int64_t *)(arg1 + 0x18) + 0x10);
            *(int64_t *)(arg1 + 0x38) = lVar9;
            *(int *)(arg1 + 0x34) = param_2;
            iVar2 = *(int *)(lVar9 + lVar11 * 4);
          }
          if ((int64_t)iVar2 == -1) goto LAB_015fe1e0;
          lVar9 = *(int64_t *)
                   (*(int64_t *)(*(int64_t *)(arg1 + 0x10) + 0x10) + (int64_t)iVar2 * 8);
          bVar3 = true;
          if (lVar9 == 0) {
            bVar5 = false;
            goto joined_r0x015fe1e7;
          }
          FUN_00d50b00();
          bVar5 = false;
          if (lVar10 == lVar9) goto LAB_015fe146;
LAB_015fe1ed:
          if (bVar5) {
            if (lVar9 != 0) {
              FUN_00d50b00();
            }
            if ((bVar4) && (lVar10 != 0)) {
              FUN_00d50b20();
            }
          }
          else if ((bVar4) && (lVar10 != 0)) {
            FUN_00d50b20();
          }
          bVar4 = true;
          bVar3 = false;
          lVar10 = lVar9;
          lVar6 = 0;
joined_r0x015fe2dc:
          if (lVar10 != 0) {
            fVar1 = *(float *)(lVar10 + 0x1c);
            if ((bVar3) && (lVar9 != 0)) {
              FUN_00d50b20();
            }
            goto joined_r0x015fe19d;
          }
          if ((bVar3) && (lVar6 != 0)) {
            FUN_00d50b20();
          }
          lVar10 = 0;
        }
        else {
LAB_015fe1e0:
          bVar3 = false;
joined_r0x015fe1e7:
          lVar9 = 0;
          if (lVar10 != 0) goto LAB_015fe1ed;
LAB_015fe146:
          lVar6 = lVar9;
          if (lVar10 == 0 || bVar4) goto joined_r0x015fe2dc;
          bVar4 = true;
          bVar3 = false;
          if (!bVar5) goto joined_r0x015fe2dc;
          FUN_00d50b00();
          fVar1 = *(float *)(lVar10 + 0x1c);
          bVar4 = true;
joined_r0x015fe19d:
          if (param_1 < fVar1) {
            FUN_00d21140();
          }
        }
        lVar11 = lVar11 + 1;
        uVar8 = (uint64_t)*(int *)(arg1 + 0x30);
      } while (lVar11 < (int64_t)uVar8);
    }
    *this_ptr = puVar7;
    *(void*)(this_ptr + 1) = 1;
    if ((bVar4) && (lVar10 != 0)) {
      FUN_00d50b20();
    }
  }
  return this_ptr;
}



// ============================================================
// 015f9f10
// ============================================================
// Function: FUN_015f9f10
// Address: 015f9f10
// Size: 827 bytes
// Class: MUTempoAnalyzerEvent
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


void FUN_015f9f10(float param_1,int64_t *param_2,int64_t *param_3)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  char in_CL;
  int64_t arg1;
  int64_t *this_ptr;
  uint64_t uVar5;
  bool bVar6;
  
  if (arg1 != 0) {
    FUN_00d50b00();
  }
  if ((param_1 == 0.0) && (!NAN(param_1))) {
    do {
      if ((*(int *)(*(int64_t *)(arg1 + 0x10) + 0xc) < 2) ||
         ((lVar2 = *(int64_t *)(**(int64_t **)(*(int64_t *)(arg1 + 0x10) + 0x10) + 0x78),
          lVar2 == 0 || (lVar3 = *(int64_t *)(lVar2 + 0x10), lVar3 == 0)))) goto LAB_015fa256;
      iVar1 = *(int *)(lVar2 + 0xc);
      if (iVar1 != 3) {
        lVar2 = *param_2;
        if ((lVar2 == 0) || ((int)*(uint *)(lVar2 + 0x18) < 4)) goto LAB_015fa256;
        uVar5 = 0;
        while (iVar1 != *(int *)(*(int64_t *)(lVar2 + 0x10) + uVar5 * 4)) {
          uVar5 = uVar5 + 1;
          if (*(uint *)(lVar2 + 0x18) >> 2 == uVar5) goto LAB_015fa256;
        }
      }
      if ((*(int *)(*(int64_t *)(lVar3 + 0x78) + 0xc) != iVar1) ||
         (lVar2 = *(int64_t *)(lVar3 + 0x80), lVar2 == 0)) goto LAB_015fa256;
      FUN_00d50b00();
      if (*(int *)(*(int64_t *)(lVar2 + 0x10) + 0xc) < 2) goto LAB_015fa23a;
      if (*param_3 == 0) {
        cVar4 = in_CL;
        if (*(char *)(lVar2 + 0x50) == '\0') goto joined_r0x015fa07c;
      }
      else {
        cVar4 = FUN_00d24090();
joined_r0x015fa07c:
        if (cVar4 == '\0') goto LAB_015fa244;
      }
      if ((lVar2 != arg1) && (FUN_00d50b00(), bVar6 = arg1 != 0, arg1 = lVar2, bVar6)
         ) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    } while( true );
  }
  while( true ) {
    if (((*(int *)(*(int64_t *)(arg1 + 0x10) + 0xc) < 2) ||
        (lVar2 = *(int64_t *)(**(int64_t **)(*(int64_t *)(arg1 + 0x10) + 0x10) + 0x78),
        lVar2 == 0)) || (lVar3 = *(int64_t *)(lVar2 + 0x10), lVar3 == 0)) goto LAB_015fa256;
    iVar1 = *(int *)(lVar2 + 0xc);
    if (iVar1 != 3) {
      lVar2 = *param_2;
      if ((lVar2 == 0) || ((int)*(uint *)(lVar2 + 0x18) < 4)) goto LAB_015fa256;
      uVar5 = 0;
      while (iVar1 != *(int *)(*(int64_t *)(lVar2 + 0x10) + uVar5 * 4)) {
        uVar5 = uVar5 + 1;
        if (*(uint *)(lVar2 + 0x18) >> 2 == uVar5) goto LAB_015fa256;
      }
    }
    if ((*(int *)(*(int64_t *)(lVar3 + 0x78) + 0xc) != iVar1) ||
       (lVar2 = *(int64_t *)(lVar3 + 0x80), lVar2 == 0)) goto LAB_015fa256;
    FUN_00d50b00();
    if (param_1 < (float)((uint)(*(float *)(arg1 + 0x2c) - *(float *)(lVar2 + 0x2c)) &
                         g_02390140)) break;
    if (*(int *)(*(int64_t *)(lVar2 + 0x10) + 0xc) < 2) goto LAB_015fa23a;
    if (*param_3 == 0) {
      cVar4 = in_CL;
      if (*(char *)(lVar2 + 0x50) == '\0') goto joined_r0x015fa200;
    }
    else {
      cVar4 = FUN_00d24090();
joined_r0x015fa200:
      if (cVar4 == '\0') goto LAB_015fa244;
    }
    if ((lVar2 != arg1) && (FUN_00d50b00(), bVar6 = arg1 != 0, arg1 = lVar2, bVar6))
    {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_015fa256:
  *this_ptr = arg1;
  *(void*)(this_ptr + 1) = 1;
  return;
LAB_015fa23a:
  FUN_00d50b20();
  goto LAB_015fa256;
LAB_015fa244:
  FUN_00d50b20();
  goto LAB_015fa256;
}



// ============================================================
// 015f9150
// ============================================================
// Function: FUN_015f9150
// Address: 015f9150
// Size: 647 bytes
// Class: MUTempoAnalyzerEvent
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


void FUN_015f9150(uint64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t lVar4;
  uint8_t uVar5;
  int64_t lVar6;
  char *pcVar7;
  int iVar8;
  int64_t *arg1;
  void*this_ptr;
  uint32_t uVar9;
  int64_t local_68;
  char local_60 [12];
  float local_54;
  float local_50;
  uint32_t local_4c;
  int64_t *local_48;
  uint8_t local_3a;
  char local_39;
  char local_38 [8];
  
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_011dfb20();
  local_48 = plVar3;
  (**(code **)(*plVar3 + 0x18))();
  if ((*(int *)(*(int64_t *)(*arg1 + 0x10) + 0xc) != 0) &&
     (*(int *)(*(int64_t *)(*param_2 + 0x10) + 0xc) != 0)) {
    FUN_00d23340();
    pcVar7 = local_38;
    if (local_60[0] != '\0') {
      pcVar7 = local_60;
    }
    local_38[0] = local_60[0];
    *pcVar7 = '\0';
    if ((local_60[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] == '\0') && (local_68 != 0)) {
      FUN_00d50b00();
    }
    lVar6 = **(int64_t **)(*(int64_t *)(*param_2 + 0x10) + 0x10);
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    if (((*(int64_t *)(local_68 + 0x78) != 0) &&
        (lVar2 = *(int64_t *)(*(int64_t *)(local_68 + 0x78) + 0x10), lVar2 != 0)) &&
       (lVar2 == lVar6)) {
      *(void*)(local_68 + 0x78) = 0;
      FUN_00d50b20();
      if (*(int64_t *)(lVar6 + 0x78) != 0) {
        *(void*)(lVar6 + 0x78) = 0;
        FUN_00d50b20();
      }
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  lVar6 = *arg1;
  local_54 = *(float *)(lVar6 + 0x28);
  lVar2 = *param_2;
  local_50 = *(float *)(lVar2 + 0x28);
  local_4c = *(void*)(lVar6 + 0x2c);
  local_3a = *(void*)(lVar6 + 0x50);
  local_39 = *(char *)(lVar2 + 0x50);
  lVar4 = *(int64_t *)(lVar6 + 0x10);
  if (*(int *)(lVar4 + 0xc) == 0) {
    iVar8 = 0;
    lVar6 = *(int64_t *)(lVar2 + 0x10);
    iVar1 = *(int *)(lVar6 + 0xc);
    uVar9 = local_4c;
  }
  else {
    iVar8 = 0;
    do {
      lVar2 = **(int64_t **)(lVar4 + 0x10);
      if (lVar2 != 0) {
        FUN_00d50b00();
        lVar6 = *arg1;
      }
      uVar9 = FUN_015f94c0(lVar6,1);
      uVar9 = FUN_015f95c0(uVar9,iVar8);
      if (lVar2 != 0) {
        uVar9 = FUN_00d50b20();
      }
      lVar6 = *arg1;
      lVar4 = *(int64_t *)(lVar6 + 0x10);
      iVar8 = iVar8 + 1;
    } while (*(int *)(lVar4 + 0xc) != 0);
    lVar6 = *(int64_t *)(*param_2 + 0x10);
    iVar1 = *(int *)(lVar6 + 0xc);
  }
  while (iVar1 != 0) {
    lVar6 = **(int64_t **)(lVar6 + 0x10);
    if (lVar6 != 0) {
      uVar9 = FUN_00d50b00();
    }
    uVar9 = FUN_015f94c0(uVar9,1);
    uVar9 = FUN_015f95c0(uVar9,iVar8,param_3,param_4,0);
    if (lVar6 != 0) {
      uVar9 = FUN_00d50b20();
    }
    lVar6 = *(int64_t *)(*param_2 + 0x10);
    iVar8 = iVar8 + 1;
    iVar1 = *(int *)(lVar6 + 0xc);
  }
  uVar5 = 1;
  if (local_39 == '\0') {
    uVar5 = local_3a;
  }
  if (local_50 <= local_54) {
    local_50 = local_54;
  }
  *(float *)(local_48 + 5) = local_50;
  *(void*)((int64_t)local_48 + 0x2c) = local_4c;
  *(void*)(local_48 + 10) = uVar5;
  *this_ptr = local_48;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 015fe7b0
// ============================================================
// Function: FUN_015fe7b0
// Address: 015fe7b0
// Size: 729 bytes
// Class: MUTempoAnalyzerEvent
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


void* FUN_015fe7b0(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  void*puVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar8;
  int64_t lVar9;
  
  if ((param_2 < 0) || (*(int *)(arg1 + 0x28) <= param_2)) {
    puVar5 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &g_02572358;
    (*g_02572370)();
    *this_ptr = puVar5;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    puVar5 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &g_02572358;
    (*g_02572370)();
    uVar6 = (uint64_t)*(uint *)(arg1 + 0x30);
    if ((int)*(uint *)(arg1 + 0x30) < 1) {
      bVar3 = false;
      lVar9 = 0;
    }
    else {
      lVar8 = 0;
      lVar9 = 0;
      bVar3 = false;
      do {
        bVar4 = true;
        if ((param_2 < *(int *)(arg1 + 0x28)) && (lVar8 < (int)uVar6)) {
          if (*(int *)(arg1 + 0x34) == param_2) {
            iVar1 = *(int *)(*(int64_t *)(arg1 + 0x38) + lVar8 * 4);
          }
          else {
            lVar7 = (int64_t)((int)uVar6 * param_2) * 4 +
                    *(int64_t *)(*(int64_t *)(arg1 + 0x18) + 0x10);
            *(int64_t *)(arg1 + 0x38) = lVar7;
            *(int *)(arg1 + 0x34) = param_2;
            iVar1 = *(int *)(lVar7 + lVar8 * 4);
          }
          if ((int64_t)iVar1 == -1) goto LAB_015fe8e0;
          lVar7 = *(int64_t *)
                   (*(int64_t *)(*(int64_t *)(arg1 + 0x10) + 0x10) + (int64_t)iVar1 * 8);
          bVar2 = true;
          if (lVar7 == 0) {
            lVar7 = 0;
          }
          else {
            FUN_00d50b00();
          }
          bVar4 = false;
          if (lVar9 == lVar7) goto LAB_015fe99c;
LAB_015fe8e9:
          if (bVar4) {
            if (lVar7 != 0) {
              FUN_00d50b00();
            }
            if ((bVar3) && (lVar9 != 0)) {
              FUN_00d50b20();
            }
          }
          else if ((bVar3) && (lVar9 != 0)) {
            FUN_00d50b20();
          }
          bVar3 = true;
          bVar2 = false;
          lVar9 = lVar7;
LAB_015fe942:
          if (lVar9 != 0) {
            iVar1 = *(int *)(lVar9 + 0x18);
            if ((bVar2) && (lVar7 != 0)) {
              FUN_00d50b20();
            }
            goto joined_r0x015fe9e9;
          }
          if ((bVar2) && (lVar7 != 0)) {
            FUN_00d50b20();
          }
          lVar9 = 0;
        }
        else {
LAB_015fe8e0:
          lVar7 = 0;
          bVar2 = false;
          if (lVar9 != 0) goto LAB_015fe8e9;
LAB_015fe99c:
          if (lVar9 == 0 || bVar3) goto LAB_015fe942;
          bVar3 = true;
          bVar2 = false;
          if (!bVar4) goto LAB_015fe942;
          FUN_00d50b00();
          bVar3 = true;
          iVar1 = *(int *)(lVar9 + 0x18);
joined_r0x015fe9e9:
          if (iVar1 <= param_1) {
            FUN_00d21140();
          }
        }
        lVar8 = lVar8 + 1;
        uVar6 = (uint64_t)*(int *)(arg1 + 0x30);
      } while (lVar8 < (int64_t)uVar6);
    }
    *this_ptr = puVar5;
    *(void*)(this_ptr + 1) = 1;
    if ((bVar3) && (lVar9 != 0)) {
      FUN_00d50b20();
    }
  }
  return this_ptr;
}



// ============================================================
// 015fd9b0
// ============================================================
// Function: FUN_015fd9b0
// Address: 015fd9b0
// Size: 507 bytes
// Class: MUTempoAnalyzerEvent
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


uint32_t FUN_015fd9b0(void)

{
  int iVar1;
  uint32_t uVar2;
  bool bVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int unaff_ESI;
  int64_t this_ptr;
  int64_t lVar6;
  uint64_t uVar7;
  int iVar8;
  uint32_t local_4c;
  int64_t local_48;
  
  if (*(int *)(this_ptr + 0x28) < 1) {
    local_4c = 0;
  }
  else {
    uVar7 = 0;
    local_4c = 0;
    local_48 = 0;
    bVar3 = false;
    do {
      *(void*)(*(int64_t *)(*(int64_t *)(this_ptr + 0x20) + 0x10) + uVar7 * 4) =
           0xffffffff;
      if (local_48 != 0) {
        if (bVar3) {
          FUN_00d50b20();
        }
        bVar3 = false;
      }
      uVar4 = (uint64_t)*(uint *)(this_ptr + 0x30);
      if ((int)*(uint *)(this_ptr + 0x30) < 1) {
        local_48 = 0;
      }
      else {
        lVar6 = 0;
        local_48 = 0;
        iVar8 = unaff_ESI + 1;
        do {
          if (((int64_t)uVar7 < (int64_t)*(int *)(this_ptr + 0x28)) && (lVar6 < (int)uVar4)) {
            if (uVar7 == *(uint *)(this_ptr + 0x34)) {
              iVar1 = *(int *)(*(int64_t *)(this_ptr + 0x38) + lVar6 * 4);
            }
            else {
              lVar5 = (int64_t)((int)uVar4 * (int)uVar7) * 4 +
                      *(int64_t *)(*(int64_t *)(this_ptr + 0x18) + 0x10);
              *(int64_t *)(this_ptr + 0x38) = lVar5;
              *(int *)(this_ptr + 0x34) = (int)uVar7;
              iVar1 = *(int *)(lVar5 + lVar6 * 4);
            }
            if (((int64_t)iVar1 != -1) &&
               (lVar5 = *(int64_t *)
                         (*(int64_t *)(*(int64_t *)(this_ptr + 0x10) + 0x10) +
                         (int64_t)iVar1 * 8), lVar5 != 0)) {
              FUN_00d50b00();
              if ((*(int64_t *)(lVar5 + 0x80) == 0) &&
                 (iVar1 = *(int *)(lVar5 + 0x18), iVar1 < iVar8)) {
                iVar8 = iVar1;
                if (local_48 == lVar5) {
                  if (!bVar3) {
                    FUN_00d50b00();
                    lVar5 = local_48;
                    goto LAB_015fdb50;
                  }
                }
                else {
                  FUN_00d50b00();
                  if ((bVar3) && (local_48 != 0)) {
                    FUN_00d50b20();
                    bVar3 = true;
                    local_48 = lVar5;
                  }
                  else {
LAB_015fdb50:
                    local_48 = lVar5;
                    bVar3 = true;
                  }
                }
              }
              FUN_00d50b20();
            }
          }
          lVar6 = lVar6 + 1;
          uVar4 = (uint64_t)*(int *)(this_ptr + 0x30);
        } while (lVar6 < (int64_t)uVar4);
        if (local_48 == 0) {
          local_48 = 0;
        }
        else {
          uVar2 = *(void*)(local_48 + 0x10);
          *(void*)(*(int64_t *)(*(int64_t *)(this_ptr + 0x20) + 0x10) + uVar7 * 4) = uVar2
          ;
          local_4c = (uint32_t)CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
        }
      }
      uVar7 = uVar7 + 1;
    } while ((int64_t)uVar7 < (int64_t)*(int *)(this_ptr + 0x28));
    if ((bVar3) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  return local_4c;
}



// ============================================================
// 015fc150
// ============================================================
// Function: FUN_015fc150
// Address: 015fc150
// Size: 901 bytes
// Class: MUTempoAnalyzerEvent
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


void* FUN_015fc150(uint32_t param_1,void*param_2,void*param_3)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int iVar5;
  void*puVar6;
  int64_t *plVar7;
  int64_t lVar8;
  void*this_ptr;
  int iVar9;
  uint32_t uVar10;
  uint64_t local_d8;
  uint8_t local_d0;
  uint64_t local_c8;
  uint8_t local_c0;
  uint64_t local_b8;
  uint8_t local_b0;
  uint64_t local_a8;
  uint8_t local_a0;
  int64_t *local_40;
  char local_38;
  
  plVar3 = local_40;
  FUN_015fc700();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  (*g_02572370)();
  if (0 < *(int *)((int64_t)local_40 + 0xc)) {
    iVar9 = 0;
    do {
      plVar4 = local_40;
      lVar1 = *(int64_t *)(plVar3[2] + (int64_t)iVar9 * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_d8 = *param_2;
      local_d0 = 0;
      local_c8 = *param_3;
      local_c0 = 0;
      FUN_015f9f10(param_1,&local_d8,&local_c8);
      if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      local_b8 = *param_2;
      local_b0 = 0;
      local_a8 = *param_3;
      local_a0 = 0;
      uVar10 = FUN_015fa320(param_1,&local_b8,&local_a8);
      if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
        uVar10 = FUN_00d50b00();
      }
      FUN_00d23370(uVar10,0);
      plVar7 = (int64_t *)FUN_00e8fc40();
      FUN_011e4bb0();
      (**(code **)(*plVar7 + 0x18))();
      plVar2 = (int64_t *)plVar7[2];
      if (plVar2 != local_40) {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        plVar7[2] = (int64_t)local_40;
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d21140();
      plVar2 = plVar7;
      if (*(int *)((int64_t)local_40 + 0xc) < 1) {
LAB_015fc464:
        local_40 = plVar2;
        FUN_00d50b20();
      }
      else {
        lVar8 = 0;
        do {
          plVar2 = *(int64_t **)(local_40[2] + lVar8 * 8);
          if (plVar2 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          iVar5 = FUN_00d237a0();
          if (plVar2 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if (iVar5 != -1) {
            FUN_00d23620();
            iVar9 = iVar9 - (uint)(iVar5 <= iVar9);
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < *(int *)((int64_t)local_40 + 0xc));
        local_40 = plVar2;
        if (plVar7 != (int64_t *)0x0) goto LAB_015fc464;
      }
      local_38 = '\0';
      FUN_00d50b20();
      if (plVar4 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)((int64_t)plVar3 + 0xc));
  }
  *this_ptr = puVar6;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  return this_ptr;
}



// ============================================================
// 015ff220
// ============================================================
// Function: FUN_015ff220
// Address: 015ff220
// Size: 530 bytes
// Class: MUTempoAnalyzerEvent
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


void FUN_015ff220(uint64_t param_1,int param_2)

{
  float fVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int64_t lVar11;
  int iVar12;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar13;
  int iVar14;
  bool bVar15;
  float fVar16;
  
  ___bzero();
  fVar7 = g_0241c3ec;
  fVar6 = g_0239011c;
  iVar14 = 10;
  if (param_2 < 10) {
    iVar14 = param_2;
  }
  if (0 < iVar14) {
    lVar2 = *(int64_t *)(*arg1 + 0x10);
    lVar13 = 0;
    do {
      fVar1 = *(float *)(lVar2 + lVar13 * 4);
      if ((fVar1 != 0.0) || (NAN(fVar1))) {
        uVar4 = (uint)lVar13;
        lVar3 = *(int64_t *)(*(int64_t *)(this_ptr + 0x38) + 0x10);
        iVar12 = 1;
        do {
          if (7 < iVar12 - 3U) {
switchD_015ff412_caseD_4:
            uVar8 = uVar4;
            goto switchD_015ff412_caseD_3;
          }
          uVar10 = (uint)(byte)((char)(uVar4 + 10) + ((byte)((uVar4 + 10 & 0xff) / 3) & 0xfc) * -3);
          fVar16 = (fVar1 / fVar7) * fVar6;
          uVar8 = (uint)(byte)((char)(uVar4 + 7) + ((byte)((uVar4 + 7 & 0xff) / 3) & 0xfc) * -3);
          switch(iVar12) {
          case 4:
          case 8:
            goto switchD_015ff412_caseD_4;
          case 5:
          case 10:
            uVar8 = (uint)(byte)((char)(uVar4 + 4) + ((byte)((uVar4 + 4 & 0xff) / 3) & 0xfc) * -3);
            break;
          case 7:
            goto switchD_015ff412_caseD_7;
          case 9:
            uVar8 = (uint)(byte)((char)(uVar4 + 2) + ((byte)((uVar4 + 2 & 0xff) / 3) & 0xfc) * -3);
          }
switchD_015ff412_caseD_3:
          uVar10 = uVar8;
          fVar16 = fVar1 / (float)iVar12;
switchD_015ff412_caseD_7:
          iVar9 = uVar10 * 7;
          iVar9 = iVar9 + (((uint)(iVar9 / 6 + (iVar9 >> 0x1f)) >> 1) - (iVar9 >> 0x1f)) * -0xc;
          iVar9 = (iVar9 >> 0x1f & 0xcU) + iVar9;
          iVar5 = iVar9 * 2;
          lVar11 = (int64_t)
                   (int)(iVar5 + (((uint)(iVar5 / 6 + (iVar5 >> 0x1f)) >> 2) - (iVar5 >> 0x1f)) *
                                 -0x18);
          *(float *)(lVar3 + lVar11 * 4) = *(float *)(lVar3 + lVar11 * 4) + fVar16;
          iVar9 = iVar9 * 2 + 0x11;
          lVar11 = (int64_t)
                   (int)(iVar9 + (((uint)(iVar9 / 6 + (iVar9 >> 0x1f)) >> 2) - (iVar9 >> 0x1f)) *
                                 -0x18);
          *(float *)(lVar3 + lVar11 * 4) = fVar16 + *(float *)(lVar3 + lVar11 * 4);
          bVar15 = iVar12 != iVar14;
          iVar12 = iVar12 + 1;
        } while (bVar15);
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 != 0xc);
  }
  FUN_015ff460();
  return;
}



// ============================================================
// 015faee0
// ============================================================
// Function: FUN_015faee0
// Address: 015faee0
// Size: 608 bytes
// Class: MUTempoAnalyzerEvent
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


void FUN_015faee0(int param_1,int param_2)

{
  int64_t lVar1;
  void*puVar2;
  int64_t *plVar3;
  void*puVar4;
  char *pcVar5;
  int64_t arg1;
  void*this_ptr;
  int iVar6;
  int iVar7;
  int64_t local_68;
  char local_60 [8];
  char local_38;
  
  iVar6 = *(int *)(*(int64_t *)(arg1 + 0x10) + 0xc) - param_2;
  if (iVar6 < 1) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    plVar3 = (int64_t *)FUN_00e8fc40();
    FUN_011dfb20();
    (**(code **)(*plVar3 + 0x18))();
    FUN_00d21370();
    iVar7 = 0;
    do {
      lVar1 = *(int64_t *)
               (*(int64_t *)(*(int64_t *)(arg1 + 0x10) + 0x10) + (int64_t)param_2 * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_015f94c0();
      FUN_015f95c0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      iVar7 = iVar7 + 1;
    } while (iVar6 != iVar7);
    FUN_00d23340();
    pcVar5 = &stack0xffffffffffffffc8;
    if (local_60[0] != '\0') {
      pcVar5 = local_60;
    }
    local_38 = local_60[0];
    *pcVar5 = '\0';
    if ((local_60[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 == '\0') && (local_68 != 0)) {
      FUN_00d50b00();
    }
    lVar1 = **(int64_t **)(plVar3[2] + 0x10);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    if (param_1 == 0) {
      if (*(int64_t *)(local_68 + 0x78) != 0) {
        *(void*)(local_68 + 0x78) = 0;
        FUN_00d50b20();
      }
      if (*(int64_t *)(lVar1 + 0x78) != 0) {
        *(void*)(lVar1 + 0x78) = 0;
        FUN_00d50b20();
      }
    }
    else {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_025c6af0;
      *(void*)((int64_t)puVar4 + 0xc) = 0;
      puVar4[2] = 0;
      FUN_00d500e0();
      puVar4[2] = lVar1;
      *(int *)((int64_t)puVar4 + 0xc) = param_1;
      puVar2 = *(void**)(local_68 + 0x78);
      if (puVar2 == puVar4) {
        FUN_00d50b20();
      }
      else {
        *(void**)(local_68 + 0x78) = puVar4;
        if (puVar2 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_025c6af0;
      *(void*)((int64_t)puVar4 + 0xc) = 0;
      puVar4[2] = 0;
      FUN_00d500e0();
      puVar4[2] = local_68;
      *(int *)((int64_t)puVar4 + 0xc) = param_1;
      puVar2 = *(void**)(lVar1 + 0x78);
      if (puVar2 == puVar4) {
        FUN_00d50b20();
      }
      else {
        *(void**)(lVar1 + 0x78) = puVar4;
        if (puVar2 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
    }
    *this_ptr = plVar3;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 015fec80
// ============================================================
// Function: FUN_015fec80
// Address: 015fec80
// Size: 523 bytes
// Class: MUTempoAnalyzerEvent
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


void FUN_015fec80(uint32_t param_1,void* param_2)

{
  uint32_t uVar1;
  void*puVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t lVar5;
  void*puVar6;
  void* pVar7;
  uint64_t in_RCX;
  int64_t *arg1;
  void*this_ptr;
  int64_t lVar8;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_025f4940;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  FUN_00d500e0();
  lVar8 = 0;
  do {
    lVar5 = *arg1;
    pvVar3 = _pthread_getspecific((void*)in_RCX);
    if (pvVar3 != (void *)0x0) {
      lVar5 = *arg1;
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        lVar5 = *(int64_t *)(lVar5 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
    }
    uVar1 = *(void*)(*(int64_t *)(*(int64_t *)(lVar5 + 0x38) + 0x10) + lVar8 * 4);
    pvVar3 = _pthread_getspecific((void*)in_RCX);
    puVar6 = puVar2;
    if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      puVar6 = (void*)puVar2[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
    pVar7 = (void*)in_RCX;
    *(void*)(*(int64_t *)(puVar6[7] + 0x10) + lVar8 * 4) = uVar1;
    lVar8 = lVar8 + 1;
  } while (lVar8 != 0x18);
  lVar8 = *arg1;
  pvVar3 = _pthread_getspecific(pVar7);
  if (pvVar3 != (void *)0x0) {
    lVar8 = *arg1;
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
  }
  pvVar3 = _pthread_getspecific(pVar7);
  if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
    lVar8 = *(int64_t *)(lVar8 + 0x40);
    lVar4 = puVar2[8];
    puVar6 = puVar2;
    if (lVar4 == lVar8) goto LAB_015fee11;
  }
  else {
    lVar8 = *(int64_t *)(lVar8 + 0x40);
    lVar4 = ((void*)puVar2[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4])[8];
    puVar6 = (void*)puVar2[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    if (lVar4 == lVar8) goto LAB_015fee11;
  }
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  puVar6[8] = lVar8;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_015fee11:
  pvVar3 = _pthread_getspecific(pVar7);
  puVar6 = puVar2;
  if ((pvVar3 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    puVar6 = (void*)puVar2[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
  }
  *(void* *)(puVar6 + 9) = param_2;
  pvVar3 = _pthread_getspecific(param_2);
  puVar6 = puVar2;
  if ((pvVar3 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    puVar6 = (void*)puVar2[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
  }
  *(void*)((int64_t)puVar6 + 0x4c) = param_1;
  *this_ptr = puVar2;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 015f7fc0
// ============================================================
// Function: FUN_015f7fc0
// Address: 015f7fc0
// Size: 522 bytes
// Class: MUTempoAnalyzerEvent
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


void FUN_015f7fc0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  void*puVar1;
  void *pvVar2;
  int64_t lVar3;
  void*puVar4;
  void* in_ECX;
  uint32_t unaff_ESI;
  void*this_ptr;
  uint32_t in_XMM4_Da;
  uint32_t in_XMM5_Da;
  
  puVar1 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar1 = &g_02514d30;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(void*)((int64_t)puVar1 + 0x54) = 0;
  *(void*)((int64_t)puVar1 + 0x5c) = 0;
  FUN_00d500e0();
  pvVar2 = _pthread_getspecific(in_ECX);
  puVar4 = puVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    puVar4 = (void*)puVar1[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  puVar4[7] = param_1;
  pvVar2 = _pthread_getspecific(in_ECX);
  puVar4 = puVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    puVar4 = (void*)puVar1[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  puVar4[8] = param_2;
  pvVar2 = _pthread_getspecific(in_ECX);
  puVar4 = puVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    puVar4 = (void*)puVar1[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  puVar4[9] = param_3;
  pvVar2 = _pthread_getspecific(in_ECX);
  puVar4 = puVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    puVar4 = (void*)puVar1[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  puVar4[10] = param_4;
  pvVar2 = _pthread_getspecific(in_ECX);
  puVar4 = puVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    puVar4 = (void*)puVar1[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  *(void*)(puVar4 + 0xb) = in_XMM4_Da;
  pvVar2 = _pthread_getspecific(in_ECX);
  puVar4 = puVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    puVar4 = (void*)puVar1[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  *(void*)((int64_t)puVar4 + 0x5c) = in_XMM5_Da;
  pvVar2 = _pthread_getspecific(in_ECX);
  puVar4 = puVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    puVar4 = (void*)puVar1[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  *(void*)(puVar4 + 0xc) = unaff_ESI;
  *this_ptr = puVar1;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 015feec0
// ============================================================
// Function: FUN_015feec0
// Address: 015feec0
// Size: 530 bytes
// Class: MUTempoAnalyzerEvent
// String references:
//   "%@%@"
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


void FUN_015feec0(void* param_1,int64_t *param_2)

{
  uint32_t uVar1;
  void*puVar2;
  void *pvVar3;
  int64_t lVar4;
  void*puVar5;
  int64_t arg1;
  void*this_ptr;
  int64_t *plVar6;
  int64_t local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  void*local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  plVar6 = (int64_t *)*param_2;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    plVar6 = (int64_t *)*param_2;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
  }
  lVar4 = g_026e3bc8;
  uVar1 = *(void*)(arg1 + 0x48);
  if (g_026e3bc8 != 0) {
    FUN_00d50b00();
  }
  local_90 = lVar4;
  local_88 = '\x01';
  local_80 = 0;
  local_78 = '\0';
  (**(code **)(*plVar6 + 0x3c8))(&local_90,uVar1,&local_80);
  puVar2 = local_70;
  if (local_68 == '\0') {
    if (local_70 != (void*)0x0) {
      FUN_00d50b00();
      if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_68 = '\0';
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_025795a8;
  (*g_025795c0)();
  lVar4 = *(int64_t *)(arg1 + 0x40);
  if (lVar4 == 0) {
    FUN_00d8ede0();
  }
  else {
    local_38 = 0;
    FUN_00d50b00();
    local_38 = '\x01';
    local_40 = lVar4;
  }
  local_98 = local_40;
  FUN_00083ea0(2,&local_98);
  FUN_00d94d80();
  local_70 = (void*)&g_0253d630;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_70 = &g_024c5048;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  *this_ptr = puVar5;
  *(void*)(this_ptr + 1) = 1;
  if (puVar2 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 015fab90
// ============================================================
// Function: FUN_015fab90
// Address: 015fab90
// Size: 524 bytes
// Class: MUTempoAnalyzerEvent
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


void* FUN_015fab90(void)

{
  uint uVar1;
  uint32_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  byte bVar6;
  bool bVar7;
  void*puVar8;
  int64_t arg1;
  void*this_ptr;
  uint64_t uVar9;
  int64_t lVar10;
  bool bVar11;
  int64_t local_40;
  char local_38;
  
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &g_02572358;
  (*g_02572370)();
  if (arg1 != 0) {
    FUN_00d50b00();
  }
  while( true ) {
    lVar3 = *(int64_t *)(arg1 + 0x10);
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    uVar1 = *(uint *)(lVar3 + 0xc);
    if ((int)uVar1 < 1) break;
    uVar9 = 0;
    bVar7 = false;
    do {
      lVar4 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + uVar9 * 8);
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      lVar5 = *(int64_t *)(lVar4 + 0x78);
      lVar10 = arg1;
      if ((lVar5 == 0) || (*(int64_t *)(lVar5 + 0x10) != 0)) {
LAB_015fac5d:
        bVar6 = 0;
      }
      else {
        uVar2 = *(void*)(lVar5 + 0xc);
        *(void*)(lVar4 + 0x78) = 0;
        FUN_00d50b20();
        FUN_015faee0(uVar2,uVar9 & 0xffffffff);
        if (local_38 == '\0') {
          if (local_40 == 0) goto LAB_015fac5d;
          FUN_00d50b00();
        }
        else if (local_40 == 0) goto LAB_015fac5d;
        local_38 = '\0';
        FUN_00d21140();
        if ((local_40 != arg1) && (FUN_00d50b00(), lVar10 = local_40, arg1 != 0)) {
          FUN_00d50b20();
        }
        bVar7 = true;
        FUN_00d50b20();
        bVar6 = 1;
        local_40 = arg1;
      }
      arg1 = lVar10;
      FUN_00d50b20();
      bVar11 = (uint64_t)uVar1 - 1 == uVar9;
      uVar9 = uVar9 + 1;
    } while (!(bool)(bVar6 | bVar11));
    if (!bVar7) break;
    FUN_00d50b20();
  }
  FUN_00d21140();
  FUN_00d50b20();
  *this_ptr = puVar8;
  *(void*)(this_ptr + 1) = 1;
  if (arg1 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 015fbe40
// ============================================================
// Function: FUN_015fbe40
// Address: 015fbe40
// Size: 525 bytes
// Class: MUTempoAnalyzerEvent
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


void* FUN_015fbe40(uint64_t param_1,uint param_2)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  code *pcVar4;
  void*puVar5;
  void*puVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int64_t *arg1;
  void*this_ptr;
  uint uVar10;
  
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  pcVar4 = g_02572370;
  (*g_02572370)();
  uVar10 = param_2;
  if (0 < (int)param_2) {
    do {
      puVar6 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &g_02572358;
      (*pcVar4)();
      FUN_00d21140();
      FUN_00d50b20();
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  lVar7 = *arg1;
  if (0 < *(int *)(lVar7 + 0xc)) {
    lVar8 = 0;
    do {
      lVar7 = *(int64_t *)(*(int64_t *)(lVar7 + 0x10) + lVar8 * 8);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      lVar2 = *(int64_t *)(lVar7 + 0x10);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      uVar10 = *(uint *)(lVar2 + 0xc);
      if (0 < (int)uVar10) {
        uVar9 = 0;
        do {
          lVar3 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + uVar9 * 8);
          if (lVar3 != 0) {
            FUN_00d50b00();
          }
          iVar1 = *(int *)(lVar3 + 0xc);
          if ((-1 < iVar1) && (iVar1 < (int)param_2)) {
            FUN_00d21140();
          }
          FUN_00d50b20();
          uVar9 = uVar9 + 1;
        } while (uVar10 != uVar9);
      }
      FUN_00d50b20();
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      lVar8 = lVar8 + 1;
      lVar7 = *arg1;
    } while (lVar8 < *(int *)(lVar7 + 0xc));
  }
  if (0 < (int)param_2) {
    uVar9 = 0;
    do {
      FUN_00d242c0();
      uVar9 = uVar9 + 1;
    } while (param_2 != uVar9);
  }
  *this_ptr = puVar5;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 015f7360
// ============================================================
// Function: FUN_015f7360
// Address: 015f7360
// Size: 1117 bytes
// Class: MUTempoAnalyzerEvent
// String references:
//   "MUTempoAnalyzerEvent"
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


void FUN_015f7360(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025f30f8;
  this_ptr[2] = 0;
  // [STATIC_INIT: property registration]
  if (g_027c7b33 == '\0') {
    FUN_015f77f0();
    FUN_00e87980();
  }
  this_ptr[3] = 0;
  // [STATIC_INIT: property registration]
  if (g_027c7b33 == '\0') {
    FUN_015f7960();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 4) = 0;
  // [STATIC_INIT: property registration]
  if (g_027c7b33 == '\0') {
    FUN_015f7ad0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x24) = 0;
  // [STATIC_INIT: property registration]
  if (g_027c7b33 == '\0') {
    FUN_015f7c40();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 5) = 0;
  // [STATIC_INIT: property registration]
  if (g_027c7b33 == '\0') {
    FUN_015f7db0();
    FUN_00e87980();
  }
  return;
}

