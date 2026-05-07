// Reconstructed implementation of GNFastFourierTransformer
// From MikeCore binary — reverse-engineered pseudocode

#include "GNFastFourierTransformer.h"

// ============================================================
// @00e84290 — 1725 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e84290(void)

{
  ulonglong uVar1;
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
  longlong lVar20;
  ulonglong uVar21;
  float *pfVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  int iVar26;
  longlong lVar27;
  longlong lVar28;
  float *pfVar29;
  int iVar30;
  int iVar31;
  byte bVar32;
  ulonglong uVar33;
  longlong lVar34;
  longlong lVar35;
  ulonglong uVar36;
  int iVar37;
  longlong lVar38;
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  float fVar42;
  double dVar43;
  
  if (DAT_028025c8 == 0) {
    DAT_028025c8 = FUN_00e83010();
    lVar20 = FUN_00e83010();
    lVar28 = DAT_028025c8;
    lVar27 = DAT_028025c8 + 0x30;
    iVar30 = 1;
    iVar31 = 2;
    bVar32 = 1;
    uVar36 = 0;
    uVar33 = 0xfffffffffffffffa;
    lVar35 = DAT_028025c8;
    uVar24 = 0;
    iVar19 = 0;
    DAT_028025d0 = lVar20;
    do {
      lVar25 = lVar27 + uVar36 * 4;
      lVar34 = -((uVar33 >> 3) + 1 & 0xfffffffffffffffe);
      uVar3 = (int)uVar24 * 2;
      uVar23 = uVar24 * 2 - 6;
      uVar1 = uVar24 + 1;
      iVar37 = (int)uVar1 * 2;
      pfVar29 = (float *)(lVar28 + ((uint)(iVar19 * iVar19) + uVar24) * 4);
      dVar43 = DAT_02411080 / (double)iVar37;
      uVar21 = uVar24 * 2 + 2;
      lVar38 = 0;
      pfVar22 = pfVar29;
      dVar40 = DAT_023e1728;
      do {
        dVar39 = (double)_cos(dVar40);
        *(float *)(lVar35 + uVar36 * 4 + lVar38 * 4) =
             (float)((dVar39 + DAT_0238fee8) * DAT_023942d0);
        dVar40 = dVar40 + dVar43;
        dVar39 = (double)_cos(dVar40);
        pfVar22[1] = (float)((dVar39 + DAT_0238fee8) * DAT_023942d0);
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
      fVar42 = DAT_02390124 / fVar42;
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
      uVar36 = (ulonglong)(uint)((int)uVar36 + iVar30);
      iVar30 = iVar30 + 2;
      iVar31 = iVar31 + 2;
      bVar32 = bVar32 + 1;
      lVar27 = lVar27 + 4;
      uVar33 = uVar33 + 2;
      uVar24 = uVar1;
      iVar19 = iVar19 + 1;
    } while (uVar1 != 0x80);
    *(undefined4 *)(lVar28 + 0x10200) = 0;
    iVar19 = 1;
    uVar24 = 0;
    iVar30 = 2;
    lVar28 = 0;
    lVar27 = lVar20;
    do {
      lVar35 = (ulonglong)(uint)((int)lVar28 * (int)lVar28) + lVar28;
      lVar28 = lVar28 + 1;
      lVar35 = lVar20 + lVar35 * 4;
      dVar43 = DAT_02411080 / (double)((int)lVar28 * 2);
      lVar25 = 0;
      dVar40 = DAT_023e1728;
      do {
        dVar39 = (double)_cos(dVar40);
        *(float *)(lVar27 + uVar24 * 4 + lVar25 * 4) =
             (float)((dVar39 + DAT_0238fee8) * DAT_023942d0);
        dVar40 = dVar40 + dVar43;
        dVar39 = (double)_cos(dVar40);
        *(float *)(lVar35 + 4) = (float)((dVar39 + DAT_0238fee8) * DAT_023942d0);
        lVar35 = lVar35 + 8;
        dVar40 = dVar40 + dVar43;
        lVar25 = lVar25 + 2;
      } while (iVar30 != (int)lVar25);
      lVar27 = lVar27 + 4;
      uVar24 = (ulonglong)(uint)((int)uVar24 + iVar19);
      iVar19 = iVar19 + 2;
      iVar30 = iVar30 + 2;
    } while (lVar28 != 0x80);
    *(undefined4 *)(lVar20 + 0x10200) = 0;
    lVar27 = FUN_00e83010();
    lVar28 = 0;
    dVar40 = DAT_023e1728;
    do {
      dVar43 = (double)_cos(dVar40);
      *(float *)(lVar27 + lVar28 * 4) = (float)((dVar43 + DAT_0238fee8) * DAT_023942d0);
      dVar40 = dVar40 + _DAT_0240d1d8;
      dVar43 = (double)_cos(dVar40);
      *(float *)(lVar27 + 4 + lVar28 * 4) = (float)((dVar43 + DAT_0238fee8) * DAT_023942d0);
      dVar40 = dVar40 + _DAT_0240d1d8;
      lVar28 = lVar28 + 2;
    } while ((int)lVar28 != 0x4000);
    *(undefined4 *)(lVar27 + 0x10000) = 0;
    DAT_028025b8 = lVar27;
    lVar27 = FUN_00e83010();
    lVar28 = 0;
    dVar40 = DAT_023e1728;
    do {
      dVar43 = (double)_cos(dVar40);
      *(float *)(lVar27 + lVar28 * 4) = (float)((dVar43 + DAT_0238fee8) * DAT_023942d0);
      dVar40 = dVar40 + _DAT_0240d1d8;
      dVar43 = (double)_cos(dVar40);
      *(float *)(lVar27 + 4 + lVar28 * 4) = (float)((dVar43 + DAT_0238fee8) * DAT_023942d0);
      dVar40 = dVar40 + _DAT_0240d1d8;
      lVar28 = lVar28 + 2;
    } while ((int)lVar28 != 0x4000);
    *(undefined4 *)(lVar27 + 0x10000) = 0;
    lVar28 = 0;
    DAT_028025c0 = lVar27;
    do {
      auVar41 = *(undefined1 (*) [16])(lVar27 + lVar28 * 4);
      auVar41 = sqrtps(auVar41,auVar41);
      *(undefined1 (*) [16])(lVar27 + lVar28 * 4) = auVar41;
      lVar28 = lVar28 + 4;
    } while (lVar28 != 0x4000);
  }
  return;
}




// ============================================================
// @00e83930 — 1129 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00e83930(undefined8 param_1,uint param_2)

{
  float *pfVar1;
  bool bVar2;
  float *in_RCX;
  ulonglong uVar3;
  float *pfVar4;
  int unaff_ESI;
  float *unaff_RDI;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar14;
  undefined1 auVar13 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  uint uVar22;
  
  uVar22 = (uint)((ulonglong)param_1 >> 0x20);
  fVar21 = (float)param_1;
  if ((int)param_2 < 0) {
    fVar9 = 0.0;
    uVar10 = 0;
    if (in_RCX != (float *)0x0) {
      *in_RCX = *unaff_RDI;
      return 0;
    }
  }
  else {
    uVar8 = unaff_ESI - 1;
    if (unaff_ESI <= (int)param_2) {
      if (in_RCX != (float *)0x0) {
        *in_RCX = unaff_RDI[(int)uVar8];
      }
      return (ulonglong)(uint)(float)(int)uVar8;
    }
    if ((((int)param_2 < 2) || (iVar5 = unaff_ESI + -3, iVar5 < (int)param_2)) ||
       (DAT_0239011c < fVar21)) {
      if (in_RCX != (float *)0x0) {
        *in_RCX = unaff_RDI[param_2];
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
          fVar12 = *unaff_RDI;
        }
        else if ((int)uVar6 < (int)uVar8) {
          fVar15 = fVar20 - (float)(int)uVar6;
          if (uVar6 == 0) {
            fVar12 = *unaff_RDI;
            pfVar4 = unaff_RDI + 1;
            uVar7 = (ulonglong)(2 < unaff_ESI) + 1;
            fVar19 = fVar12;
          }
          else {
            uVar7 = (ulonglong)(uVar6 - 1);
            pfVar1 = unaff_RDI + uVar7;
            fVar19 = *pfVar1;
            if (iVar5 < (int)uVar6) {
              if ((int)uVar6 < unaff_ESI) {
                uVar7 = (ulonglong)uVar6;
              }
              fVar12 = unaff_RDI[uVar7];
              uVar6 = (uint)((int)uVar7 < (int)uVar8) + (int)uVar7;
              pfVar4 = unaff_RDI + uVar6;
              uVar7 = (ulonglong)(((int)uVar6 < (int)uVar8) + uVar6);
            }
            else {
              fVar12 = unaff_RDI[uVar6];
              uVar7 = (ulonglong)(uVar6 + 2);
              pfVar4 = unaff_RDI + (ulonglong)uVar6 + 1;
            }
          }
          auVar13 = insertps(ZEXT416((uint)fVar12),unaff_RDI[uVar7],0x10);
          auVar18 = insertps(ZEXT416((uint)*pfVar4),ZEXT416((uint)fVar19),0x10);
          fVar11 = (auVar13._0_4_ - auVar18._0_4_) * _DAT_02394140;
          fVar14 = (auVar13._4_4_ - auVar18._4_4_) * _UNK_02394144;
          fVar16 = (fVar19 + *pfVar4) * DAT_0239011c;
          fVar12 = (((fVar11 + fVar14) * fVar15 + (fVar16 - fVar12)) * fVar15 +
                   (((fVar16 - fVar14) - fVar11) - fVar19)) * fVar15 + fVar12;
        }
        else {
          fVar12 = unaff_RDI[uVar8];
        }
        uVar6 = (uint)(fVar9 + fVar21);
        if ((int)uVar6 < 0) {
          fVar15 = *unaff_RDI;
        }
        else if ((int)uVar6 < (int)uVar8) {
          fVar19 = (fVar9 + fVar21) - (float)(int)uVar6;
          if (uVar6 == 0) {
            fVar15 = *unaff_RDI;
            pfVar4 = unaff_RDI + 1;
            uVar7 = (ulonglong)(2 < unaff_ESI) + 1;
            fVar11 = fVar15;
          }
          else {
            uVar7 = (ulonglong)(uVar6 - 1);
            pfVar1 = unaff_RDI + uVar7;
            fVar11 = *pfVar1;
            if (iVar5 < (int)uVar6) {
              if ((int)uVar6 < unaff_ESI) {
                uVar7 = (ulonglong)uVar6;
              }
              fVar15 = unaff_RDI[uVar7];
              uVar6 = (uint)((int)uVar7 < (int)uVar8) + (int)uVar7;
              pfVar4 = unaff_RDI + uVar6;
              uVar7 = (ulonglong)(((int)uVar6 < (int)uVar8) + uVar6);
            }
            else {
              fVar15 = unaff_RDI[uVar6];
              uVar7 = (ulonglong)(uVar6 + 2);
              pfVar4 = unaff_RDI + (ulonglong)uVar6 + 1;
            }
          }
          auVar13 = insertps(ZEXT416((uint)fVar15),unaff_RDI[uVar7],0x10);
          auVar18 = insertps(ZEXT416((uint)*pfVar4),ZEXT416((uint)fVar11),0x10);
          fVar16 = (auVar13._0_4_ - auVar18._0_4_) * _DAT_02394140;
          fVar17 = (auVar13._4_4_ - auVar18._4_4_) * _UNK_02394144;
          fVar14 = (fVar11 + *pfVar4) * DAT_0239011c;
          fVar15 = (((fVar16 + fVar17) * fVar19 + (fVar14 - fVar15)) * fVar19 +
                   (((fVar14 - fVar17) - fVar16) - fVar11)) * fVar19 + fVar15;
        }
        else {
          fVar15 = unaff_RDI[uVar8];
        }
      }
      fVar11 = fVar9 + fVar21;
      fVar19 = unaff_RDI[param_2];
      if ((fVar19 < fVar12) || (fVar19 < fVar15)) {
        fVar14 = fVar15;
        if (fVar15 <= fVar12) {
          fVar21 = (float)((uint)fVar21 ^ _DAT_023945e0);
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
                fVar12 = *unaff_RDI;
              }
              else if ((int)uVar6 < (int)uVar8) {
                fVar15 = fVar20 - (float)(int)uVar6;
                if (uVar6 == 0) {
                  fVar19 = *unaff_RDI;
                  uVar7 = (ulonglong)(2 < unaff_ESI) + 1;
                  pfVar4 = unaff_RDI + 1;
                  fVar12 = fVar19;
                }
                else {
                  uVar3 = (ulonglong)(uVar6 - 1);
                  fVar19 = unaff_RDI[uVar3];
                  if (iVar5 < (int)uVar6) {
                    if ((int)uVar6 < unaff_ESI) {
                      uVar3 = (ulonglong)uVar6;
                    }
                    uVar6 = (uint)((int)uVar3 < (int)uVar8) + (int)uVar3;
                    uVar7 = (ulonglong)(((int)uVar6 < (int)uVar8) + uVar6);
                    pfVar4 = unaff_RDI + uVar6;
                    fVar12 = unaff_RDI[uVar3];
                  }
                  else {
                    uVar7 = (ulonglong)(uVar6 + 2);
                    pfVar4 = unaff_RDI + (ulonglong)uVar6 + 1;
                    fVar12 = unaff_RDI[uVar6];
                  }
                }
                auVar18 = insertps(ZEXT416((uint)fVar12),unaff_RDI[uVar7],0x10);
                auVar13 = insertps(ZEXT416((uint)*pfVar4),ZEXT416((uint)fVar19),0x10);
                fVar16 = (auVar18._0_4_ - auVar13._0_4_) * _DAT_02394140;
                fVar17 = (auVar18._4_4_ - auVar13._4_4_) * _UNK_02394144;
                fVar11 = (fVar19 + *pfVar4) * DAT_0239011c;
                fVar12 = (((fVar16 + fVar17) * fVar15 + (fVar11 - fVar12)) * fVar15 +
                         (((fVar11 - fVar17) - fVar16) - fVar19)) * fVar15 + fVar12;
              }
              else {
                fVar12 = unaff_RDI[uVar8];
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
// @00e83120 — 956 bytes
// str: ""GNFastFourierTransformer initialized with inappropriate table size""
// ============================================================

void FUN_00e83120(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint unaff_ESI;
  undefined8 *unaff_RDI;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_0258fad0;
  *(undefined8 *)((longlong)puVar2 + 0xc) = 0;
  *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
  FUN_00d500e0();
  *(uint *)((longlong)puVar2 + 0xc) = unaff_ESI;
  *(uint *)(puVar2 + 2) = unaff_ESI >> 1;
  *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
  lVar4 = DAT_027bec98;
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
          if (DAT_027bec98 != 0) {
            FUN_00d50b00();
          }
          FUN_00cc7b40(param_1,DAT_025908a0);
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
  *(undefined4 *)((longlong)puVar2 + 0x14) = uVar1;
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
  *unaff_RDI = puVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @00e84f80 — 892 bytes
// ============================================================

void FUN_00e84f80(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  uint local_40;
  
  if ((DAT_028025d8 != 0) && (iVar2 = FUN_00c8d620(), iVar2 != 0)) {
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
    puVar8 = (undefined8 *)FUN_00e99bf0();
    DAT_028025e0 = (*(code *)*puVar8)();
    if (iVar17 != 0) {
      puVar8 = (undefined8 *)FUN_00e99bf0();
      DAT_028025e8 = (*(code *)*puVar8)();
    }
    lVar7 = FUN_00d4fe50();
    if (0 < iVar3) {
      iVar13 = *(int *)(lVar7 + 8);
      uVar4 = iVar13 + 7U & 0xfffffff8;
      iVar14 = 0;
      do {
        puVar8 = (undefined8 *)FUN_00c8df10();
        lVar10 = DAT_028025e0;
        if (puVar8 != (undefined8 *)0x0) {
          iVar5 = uVar4 + *(int *)(puVar8 + 3) * 8;
          if (*(int *)(puVar8 + 3) == 0) {
            iVar5 = iVar13;
          }
          iVar2 = iVar2 + -1;
          lVar15 = (longlong)iVar2 * 200;
          lVar1 = DAT_028025e0 + lVar15;
          *(undefined8 *)(DAT_028025e0 + lVar15) = *puVar8;
          *(int *)(lVar10 + 8 + lVar15) = iVar5;
          *(undefined8 *)(lVar10 + 0x10 + lVar15) = 0;
          *(longlong *)(lVar10 + 0x18 + lVar15) = lVar7;
          puVar8 = (undefined8 *)(lVar10 + 0x20 + lVar15);
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8 = (undefined8 *)(lVar10 + 0x30 + lVar15);
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8 = (undefined8 *)(lVar10 + 0x40 + lVar15);
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8 = (undefined8 *)(lVar10 + 0x50 + lVar15);
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8 = (undefined8 *)(lVar10 + 0x60 + lVar15);
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8 = (undefined8 *)(lVar10 + 0x70 + lVar15);
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8 = (undefined8 *)(lVar10 + 0x80 + lVar15);
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8 = (undefined8 *)(lVar10 + 0x90 + lVar15);
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8 = (undefined8 *)(lVar10 + 0xa0 + lVar15);
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8 = (undefined8 *)(lVar10 + 0xb0 + lVar15);
          *puVar8 = 0;
          puVar8[1] = 0;
          *(undefined4 *)(lVar10 + 0xc0 + lVar15) = 0;
          iVar5 = FUN_00e38d70();
          if (0 < iVar5) {
            plVar9 = (longlong *)(lVar10 + lVar15 + 0x28);
            iVar18 = 0;
            local_40 = uVar4;
            do {
              plVar11 = (longlong *)FUN_00e38d90();
              lVar10 = DAT_028025e8;
              if (*plVar11 == 0) {
                lVar10 = plVar11[1];
LAB_00e85175:
                *(longlong *)(lVar10 + 0x20) = lVar1;
              }
              else {
                iVar17 = iVar17 + -1;
                lVar16 = (longlong)iVar17 * 0x38;
                lVar15 = DAT_028025e8 + lVar16;
                *(longlong *)(DAT_028025e8 + lVar16) = *plVar11;
                *(longlong *)(lVar10 + 8 + lVar16) = lVar1;
                *(undefined1 *)(lVar10 + 0x18 + lVar16) = 0x40;
                puVar8 = (undefined8 *)(lVar10 + 0x20 + lVar16);
                *puVar8 = 0;
                puVar8[1] = 0;
                *(undefined8 *)(lVar10 + 0x30 + lVar16) = 0;
                *(longlong *)(lVar10 + 0x20 + lVar16) = plVar11[1];
                *(longlong *)(lVar10 + 0x10 + lVar16) = (longlong)(int)local_40;
                plVar12 = plVar9;
                lVar10 = *plVar9;
                if (*plVar9 != 0) {
                  do {
                    lVar16 = lVar10;
                    lVar10 = *(longlong *)(lVar16 + 0x30);
                  } while (lVar10 != 0);
                  plVar12 = (longlong *)(lVar16 + 0x30);
                }
                local_40 = local_40 + 8;
                *plVar12 = lVar15;
                lVar10 = plVar11[1];
                if (*plVar11 == 0) goto LAB_00e85175;
                for (lVar15 = *plVar9; lVar15 != 0; lVar15 = *(longlong *)(lVar15 + 0x30)) {
                  iVar6 = FUN_00e7ddf0();
                  if (iVar6 == 0) {
                    *(longlong *)(lVar10 + 0x20) = lVar15;
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
              *(longlong *)(lVar10 + 8) = lVar1;
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
    DAT_028025d8 = 0;
  }
  return;
}




// ============================================================
// @0003e610 — 789 bytes
// str: ""GNFastFourierTransformer""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003e610(void)

{
  undefined8 uVar1;
  int iVar2;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_0258fad0;
  *(undefined4 *)((longlong)unaff_RDI + 0xc) = 0;
  if (DAT_026d1260 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      _DAT_027778f8 = FUN_00d4fe50();
      _DAT_027778e0 = "GNFastFourierTransformer";
      _DAT_027778e8 = 0x30;
      _DAT_027778f0 = FUN_0003e5c0;
      _DAT_02777900 = 0;
      uRam0000000002777908 = 0;
      _DAT_02777910 = 0;
      _DAT_02777988 = 0;
      uRam0000000002777990 = 0;
      _DAT_02777998 = 0;
      DAT_0277799a = 3;
      _DAT_02777918 = 0;
      uRam0000000002777920 = 0;
      _DAT_02777928 = 0;
      uRam0000000002777930 = 0;
      _DAT_02777938 = 0;
      uRam0000000002777940 = 0;
      _DAT_02777948 = 0;
      uRam0000000002777950 = 0;
      _DAT_02777958 = 0;
      uRam0000000002777960 = 0;
      _DAT_02777968 = 0;
      uRam0000000002777970 = 0;
      _DAT_02777978 = 0;
      uRam0000000002777980 = 0;
      DAT_027779a3 = 0;
      _DAT_0277799b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0277799b == '\0') {
    FUN_0003e950();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 2) = 0;
  if (DAT_026d1260 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      _DAT_027778f8 = FUN_00d4fe50();
      _DAT_027778e0 = "GNFastFourierTransformer";
      _DAT_027778e8 = 0x30;
      _DAT_027778f0 = FUN_0003e5c0;
      _DAT_02777900 = 0;
      uRam0000000002777908 = 0;
      _DAT_02777910 = 0;
      _DAT_02777988 = 0;
      uRam0000000002777990 = 0;
      _DAT_02777998 = 0;
      DAT_0277799a = 3;
      _DAT_02777918 = 0;
      uRam0000000002777920 = 0;
      _DAT_02777928 = 0;
      uRam0000000002777930 = 0;
      _DAT_02777938 = 0;
      uRam0000000002777940 = 0;
      _DAT_02777948 = 0;
      uRam0000000002777950 = 0;
      _DAT_02777958 = 0;
      uRam0000000002777960 = 0;
      _DAT_02777968 = 0;
      uRam0000000002777970 = 0;
      _DAT_02777978 = 0;
      uRam0000000002777980 = 0;
      DAT_027779a3 = 0;
      _DAT_0277799b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0277799b == '\0') {
    FUN_0003eae0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x14) = 0;
  if (DAT_026d1260 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      _DAT_027778f8 = FUN_00d4fe50();
      _DAT_027778e0 = "GNFastFourierTransformer";
      _DAT_027778e8 = 0x30;
      _DAT_027778f0 = FUN_0003e5c0;
      _DAT_02777900 = 0;
      uRam0000000002777908 = 0;
      _DAT_02777910 = 0;
      _DAT_02777988 = 0;
      uRam0000000002777990 = 0;
      _DAT_02777998 = 0;
      DAT_0277799a = 3;
      _DAT_02777918 = 0;
      uRam0000000002777920 = 0;
      _DAT_02777928 = 0;
      uRam0000000002777930 = 0;
      _DAT_02777938 = 0;
      uRam0000000002777940 = 0;
      _DAT_02777948 = 0;
      uRam0000000002777950 = 0;
      _DAT_02777958 = 0;
      uRam0000000002777960 = 0;
      _DAT_02777968 = 0;
      uRam0000000002777970 = 0;
      _DAT_02777978 = 0;
      uRam0000000002777980 = 0;
      DAT_027779a3 = 0;
      _DAT_0277799b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0277799b == '\0') {
    FUN_0003ec70();
    FUN_00e87980();
  }
  unaff_RDI[5] = *(undefined8 *)(unaff_RSI + 0x28);
  uVar1 = *(undefined8 *)(unaff_RSI + 0x20);
  unaff_RDI[3] = *(undefined8 *)(unaff_RSI + 0x18);
  unaff_RDI[4] = uVar1;
  return;
}




// ============================================================
// @00e85330 — 753 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00e855e9) */
/* WARNING: Removing unreachable block (ram,0x00e855f2) */
/* WARNING: Removing unreachable block (ram,0x00e854a9) */
/* WARNING: Removing unreachable block (ram,0x00e854b6) */
/* WARNING: Removing unreachable block (ram,0x00e85551) */
/* WARNING: Removing unreachable block (ram,0x00e8555a) */
/* WARNING: Removing unreachable block (ram,0x00e85599) */
/* WARNING: Removing unreachable block (ram,0x00e855a2) */

undefined8 * FUN_00e85330(void)

{
  bool bVar1;
  undefined8 *puVar2;
  longlong unaff_RDI;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_000276d0();
  *puVar2 = &DAT_02566f40;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  (*DAT_02566f58)();
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
  *(undefined4 *)((longlong)puVar2 + 0x24) = *(undefined4 *)(unaff_RDI + 0x10);
  if (*(char *)(unaff_RDI + 0x19) == 'e') {
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
  else if (*(char *)(unaff_RDI + 0x19) == '@') {
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
  puVar2[0xc] = unaff_RDI;
  *(undefined8 **)(unaff_RDI + 0x30) = puVar2;
  if ((bVar1) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  return puVar2;
}




// ============================================================
// @00e83da0 — 733 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00e8407b) */

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
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  char unaff_SIL;
  uint uVar23;
  uint unaff_EDI;
  longlong lVar24;
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
  dVar29 = DAT_02411080 / (double)(int)uVar25;
  pfVar19 = pfVar18;
  dVar27 = DAT_023e1728;
  uVar17 = uVar25;
  if ((uVar25 & 1) != 0) {
    *pfVar18 = 0.0;
    pfVar19 = pfVar18 + 1;
    dVar27 = DAT_023e1728 + dVar29;
    uVar17 = uVar25 - 1;
  }
  if (1 < (int)unaff_EDI) {
    lVar22 = 0;
    do {
      dVar26 = (double)_cos(dVar27);
      pfVar19[lVar22] = (float)((dVar26 + DAT_0238fee8) * DAT_023942d0);
      dVar26 = (double)_cos(dVar27 + dVar29);
      pfVar19[lVar22 + 1] = (float)((dVar26 + DAT_0238fee8) * DAT_023942d0);
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
  fVar28 = DAT_02390124 / fVar28;
  pfVar19 = pfVar18;
  if (6 < uVar17) {
    uVar20 = (ulonglong)uVar17 + 1 & 0xfffffffffffffff8;
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
    if ((ulonglong)uVar17 + 1 == uVar20) goto LAB_00e84056;
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
// @0003cc30 — 538 bytes
// ============================================================

void FUN_0003cc30(void)

{
  undefined8 *unaff_RDI;
  
  *unaff_RDI = &DAT_02569280;
  unaff_RDI[3] = &DAT_025697c0;
  if (unaff_RDI[0x2b] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x29] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x28] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x26] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x25] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x24] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x23] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x22] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x21] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x1f] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x1e] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x1b] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x19] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x18] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x16] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x13] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x12] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x11] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x10] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0xf] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0xd] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0xb] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[10] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[9] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[8] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[7] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[6] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[5] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[4] != 0) {
    FUN_00d50b20();
  }
  *unaff_RDI = &DAT_0257f798;
  if (unaff_RDI[2] != 0) {
    FUN_00d50b20();
  }
  FUN_00d4ffa0();
  return;
}



