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

