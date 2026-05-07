// Function: FUN_015c6350
// Address: 015c6350
// Size: 864 bytes
// Class: MUSpectralTimeSlice
// String references:
//   "MUSpectralTimeSlice::getTrueFreqData(): no trueFreq data"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015c6350(undefined8 param_1,char param_2)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong *unaff_RSI;
  int iVar14;
  longlong unaff_RDI;
  ulonglong uVar15;
  undefined4 *puVar16;
  longlong lVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  if (*(longlong *)(unaff_RDI + 0x28) == 0) {
    FUN_00e828a0();
    lVar7 = *(longlong *)(unaff_RDI + 0x30);
  }
  else {
    lVar7 = *(longlong *)(unaff_RDI + 0x30);
  }
  if (lVar7 != 0) {
    FUN_00e83070();
    *(undefined8 *)(unaff_RDI + 0x30) = 0;
  }
  uVar6 = FUN_00e83010();
  *(undefined8 *)(unaff_RDI + 0x30) = uVar6;
  if (param_2 == '\0') {
    lVar7 = 0;
  }
  else {
    lVar7 = FUN_015c7920();
  }
  fVar19 = DAT_02394250;
  uVar5 = _DAT_02390140;
  iVar3 = *(int *)(*unaff_RSI + 0x58);
  uVar4 = *(uint *)(unaff_RDI + 0xc);
  lVar17 = (longlong)(int)uVar4;
  if (lVar17 < 6) {
    puVar16 = *(undefined4 **)(unaff_RDI + 0x30);
  }
  else {
    fVar21 = (float)*(double *)(*unaff_RSI + 0x50);
    fVar20 = DAT_02390124 / fVar21;
    lVar9 = *(longlong *)(unaff_RDI + 0x28);
    puVar16 = *(undefined4 **)(unaff_RDI + 0x30);
    lVar11 = 1;
    uVar10 = 3;
    do {
      uVar13 = (int)uVar10 + 3;
      if ((int)uVar4 <= (int)uVar13) {
        uVar13 = uVar4 - 1;
      }
      if ((longlong)(uVar10 - 2) < (longlong)(int)uVar13) {
        fVar1 = *(float *)(lVar9 + uVar10 * 4);
        uVar15 = (ulonglong)uVar13;
        fVar22 = (float)((uint)(fVar1 - *(float *)(lVar9 + lVar11 * 4)) & uVar5);
        fVar22 = (float)(-(uint)(fVar22 < fVar21) & (uint)((fVar21 - fVar22) * fVar20 + 0.0));
        if (((lVar11 + 1U != uVar15) &&
            (fVar23 = (float)((uint)(fVar1 - *(float *)(lVar9 + 4 + lVar11 * 4)) & uVar5),
            uVar18 = -(uint)(fVar23 < fVar21),
            fVar22 = (float)(~uVar18 & (uint)fVar22 |
                            (uint)(fVar22 + (fVar21 - fVar23) * fVar20) & uVar18),
            lVar11 + 2U != uVar15)) && (uVar12 = lVar11 + 3, uVar12 != uVar15)) {
          if (((uVar13 - (int)lVar11) + 1 & 1) != 0) {
            if ((uVar12 != uVar10) &&
               (fVar23 = (float)((uint)(fVar1 - *(float *)(lVar9 + 0xc + lVar11 * 4)) & uVar5),
               fVar23 < fVar21)) {
              fVar22 = fVar22 + (fVar21 - fVar23) * fVar20;
            }
            uVar12 = lVar11 + 4;
          }
          if (uVar15 - 4 != lVar11) {
            do {
              if ((uVar10 != uVar12) &&
                 (fVar23 = (float)((uint)(fVar1 - *(float *)(lVar9 + uVar12 * 4)) & uVar5),
                 fVar23 < fVar21)) {
                fVar22 = fVar22 + (fVar21 - fVar23) * fVar20;
              }
              if ((uVar12 + 1 != uVar10) &&
                 (fVar23 = (float)((uint)(fVar1 - *(float *)(lVar9 + 4 + uVar12 * 4)) & uVar5),
                 fVar23 < fVar21)) {
                fVar22 = fVar22 + (fVar21 - fVar23) * fVar20;
              }
              uVar12 = uVar12 + 2;
            } while (uVar12 != uVar15);
          }
        }
      }
      else {
        fVar22 = 0.0;
      }
      lVar11 = lVar11 + 1;
      puVar16[uVar10] = fVar22 * fVar19;
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar4 - 2);
  }
  uVar2 = puVar16[3];
  *puVar16 = uVar2;
  puVar16[1] = uVar2;
  puVar16[2] = uVar2;
  lVar9 = (longlong)(int)(uVar4 - 2);
  puVar16[lVar9] = puVar16[lVar17 + -3];
  if (lVar9 + 1 < lVar17) {
    puVar16[lVar9 + 1] = puVar16[lVar17 + -3];
  }
  if ((param_2 != '\0') && (0 < (int)uVar4)) {
    fVar19 = (float)iVar3;
    iVar8 = iVar3 + -1;
    if (uVar4 == 1) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      do {
        iVar14 = (int)((float)puVar16[uVar10] * fVar19);
        if (iVar14 < 0) {
          iVar14 = 0;
        }
        if (iVar3 <= iVar14) {
          iVar14 = iVar8;
        }
        puVar16[uVar10] = *(undefined4 *)(lVar7 + (longlong)iVar14 * 4);
        iVar14 = (int)((float)puVar16[uVar10 + 1] * fVar19);
        if (iVar14 < 0) {
          iVar14 = 0;
        }
        if (iVar3 <= iVar14) {
          iVar14 = iVar8;
        }
        puVar16[uVar10 + 1] = *(undefined4 *)(lVar7 + (longlong)iVar14 * 4);
        uVar10 = uVar10 + 2;
      } while ((uVar4 & 0xfffffffe) != uVar10);
    }
    if ((uVar4 & 1) != 0) {
      iVar14 = 0;
      if (-1 < (int)(fVar19 * (float)puVar16[uVar10])) {
        iVar14 = (int)(fVar19 * (float)puVar16[uVar10]);
      }
      if (iVar14 < iVar3) {
        iVar8 = iVar14;
      }
      puVar16[uVar10] = *(undefined4 *)(lVar7 + (longlong)iVar8 * 4);
    }
  }
  return;
}


