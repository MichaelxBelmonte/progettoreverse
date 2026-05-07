// Function: FUN_00523d70
// Address: 00523d70
// Size: 1543 bytes
// Class: MULSSGenerator


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00523d70(char param_1,uint param_2,uint param_3)

{
  float *pfVar1;
  char cVar2;
  pthread_key_t pVar3;
  ulonglong uVar4;
  longlong lVar5;
  void *pvVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  pthread_key_t pVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong unaff_RSI;
  ulonglong uVar16;
  longlong *unaff_RDI;
  longlong lVar17;
  longlong lVar18;
  size_t sVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  int iVar24;
  ulonglong uVar25;
  float fVar26;
  double dVar27;
  int iVar29;
  int iVar30;
  undefined1 auVar28 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  
  if ((((0 < (int)param_2) && (0 < (int)param_3)) && (unaff_RSI != 0)) &&
     (((uVar13 = (ulonglong)param_2, param_1 == '\0' ||
       (*(char *)((longlong)unaff_RDI + 0x24b) == '\0')) &&
      (cVar2 = (**(code **)(*unaff_RDI + 0x5a8))(), cVar2 == '\0')))) {
    uVar4 = (ulonglong)param_3;
    if ((param_1 == '\0') || (unaff_RDI[0x61] != 0)) {
      uVar11 = 0;
      do {
        uVar12 = 0xffffffffffffffff;
        do {
          if (uVar12 - uVar13 == -1) goto LAB_00523e48;
          fVar38 = *(float *)(unaff_RDI[uVar11 + 0x23] + 4 + uVar12 * 4);
          uVar12 = uVar12 + 1;
        } while ((fVar38 == 0.0) && (!NAN(fVar38)));
        if (uVar12 < uVar13) {
          uVar13 = 0;
          do {
            if ((*(longlong *)(unaff_RSI + uVar13 * 8) != 0) && (unaff_RDI[uVar13 + 0x23] != 0)) {
              (**(code **)(DAT_02786500 + 0x28))();
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
      lVar5 = FUN_00e7dae0((double)unaff_RDI[0x4c] * dVar27);
      iVar8 = (int)(dVar27 * DAT_02391030);
      fVar38 = (float)(int)(dVar27 * DAT_02391030);
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
            iVar39 = _DAT_02394180;
            iVar40 = _UNK_02394184;
            iVar41 = _UNK_02394188;
            iVar42 = _UNK_0239418c;
            if (iVar9 != 0 && iVar8 <= iVar22) {
              iVar24 = param_2 - pVar10;
              iVar22 = iVar24;
              if (iVar9 < iVar24) {
                iVar22 = iVar9;
              }
              pvVar6 = (void *)((longlong)iVar22 * 4);
              if (param_3 == 1) {
                uVar11 = 0;
              }
              else {
                uVar11 = 0;
                do {
                  if ((*(longlong *)(unaff_RSI + uVar11 * 8) != 0) &&
                     ((void *)unaff_RDI[uVar11 + 0x23] != (void *)0x0)) {
                    _memcpy((void *)unaff_RDI[uVar11 + 0x23],pvVar6,(size_t)lVar20);
                    iVar39 = _DAT_02394180;
                    iVar40 = _UNK_02394184;
                    iVar41 = _UNK_02394188;
                    iVar42 = _UNK_0239418c;
                  }
                  if ((*(longlong *)(unaff_RSI + 8 + uVar11 * 8) != 0) &&
                     ((void *)unaff_RDI[uVar11 + 0x24] != (void *)0x0)) {
                    _memcpy((void *)unaff_RDI[uVar11 + 0x24],pvVar6,(size_t)lVar20);
                    iVar39 = _DAT_02394180;
                    iVar40 = _UNK_02394184;
                    iVar41 = _UNK_02394188;
                    iVar42 = _UNK_0239418c;
                  }
                  sVar19 = (size_t)lVar20;
                  uVar11 = uVar11 + 2;
                } while ((param_3 & 0xfffffffe) != uVar11);
              }
              if ((((param_3 & 1) != 0) && (*(longlong *)(unaff_RSI + uVar11 * 8) != 0)) &&
                 ((void *)unaff_RDI[uVar11 + 0x23] != (void *)0x0)) {
                _memcpy((void *)unaff_RDI[uVar11 + 0x23],pvVar6,sVar19);
                iVar39 = _DAT_02394180;
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
              lVar23 = (longlong)(int)pVar10;
              uVar15 = iVar9 - 1;
              if (uVar15 < 3) {
                uVar11 = 0;
                do {
                  lVar20 = *(longlong *)(unaff_RSI + uVar11 * 8);
                  if (((lVar20 != 0) && (lVar18 = unaff_RDI[uVar11 + 0x23], lVar18 != 0)) &&
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
                uVar11 = (ulonglong)uVar15 + 1;
                uVar25 = uVar11 & 0xfffffffffffffffc;
                lVar20 = lVar23 + (ulonglong)uVar15 + 1;
                uVar12 = 0;
                do {
                  lVar18 = *(longlong *)(unaff_RSI + uVar12 * 8);
                  if (((lVar18 != 0) && (lVar17 = unaff_RDI[uVar12 + 0x23], lVar17 != 0)) &&
                     (0 < iVar9)) {
                    uVar14 = lVar17 + lVar23 * 4;
                    uVar7 = lVar18 + lVar23 * 4;
                    if (((ulonglong)(lVar17 + lVar20 * 4) <= uVar7) ||
                       (uVar15 = 0, (ulonglong)(lVar18 + lVar20 * 4) <= uVar14)) {
                      uVar16 = 0;
                      auVar28 = _DAT_0238fcc0;
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


