// Function: MUSpectralTimeSlice_getTrueFreqData
// Address: 015c6350
// Size: 864 bytes
// Class: MUSpectralTimeSlice
// String references:
//   "MUSpectralTimeSlice::getTrueFreqData(): no trueFreq data"
// === MUSpectralTimeSlice properties ===
//                   _rightSpectrogramTimeSlices
//                   _attackItems
//                   _allFoundPropertyPoints
//                   _audioSourceItems
//                   _usedTonalPaths


void MUSpectralTimeSlice_getTrueFreqData(uint64_t param_1,char param_2)

{
  float fVar1;
  uint32_t uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int iVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int64_t lVar11;
  uint64_t uVar12;
  uint uVar13;
  int64_t *arg1;
  int iVar14;
  int64_t this_ptr;
  uint64_t uVar15;
  void*puVar16;
  int64_t lVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  if (*(int64_t *)(this_ptr + 0x28) == 0) {
    FUN_00e828a0();
    lVar7 = *(int64_t *)(this_ptr + 0x30);
  }
  else {
    lVar7 = *(int64_t *)(this_ptr + 0x30);
  }
  if (lVar7 != 0) {
    FUN_00e83070();
    *(void*)(this_ptr + 0x30) = 0;
  }
  uVar6 = FUN_00e83010();
  *(void*)(this_ptr + 0x30) = uVar6;
  if (param_2 == '\0') {
    lVar7 = 0;
  }
  else {
    lVar7 = FUN_015c7920();
  }
  fVar19 = g_02394250;
  uVar5 = g_02390140;
  iVar3 = *(int *)(*arg1 + 0x58);
  uVar4 = *(uint *)(this_ptr + 0xc);
  lVar17 = (int64_t)(int)uVar4;
  if (lVar17 < 6) {
    puVar16 = *(void**)(this_ptr + 0x30);
  }
  else {
    fVar21 = (float)*(double *)(*arg1 + 0x50);
    fVar20 = g_02390124 / fVar21;
    lVar9 = *(int64_t *)(this_ptr + 0x28);
    puVar16 = *(void**)(this_ptr + 0x30);
    lVar11 = 1;
    uVar10 = 3;
    do {
      uVar13 = (int)uVar10 + 3;
      if ((int)uVar4 <= (int)uVar13) {
        uVar13 = uVar4 - 1;
      }
      if ((int64_t)(uVar10 - 2) < (int64_t)(int)uVar13) {
        fVar1 = *(float *)(lVar9 + uVar10 * 4);
        uVar15 = (uint64_t)uVar13;
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
  lVar9 = (int64_t)(int)(uVar4 - 2);
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
        puVar16[uVar10] = *(void*)(lVar7 + (int64_t)iVar14 * 4);
        iVar14 = (int)((float)puVar16[uVar10 + 1] * fVar19);
        if (iVar14 < 0) {
          iVar14 = 0;
        }
        if (iVar3 <= iVar14) {
          iVar14 = iVar8;
        }
        puVar16[uVar10 + 1] = *(void*)(lVar7 + (int64_t)iVar14 * 4);
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
      puVar16[uVar10] = *(void*)(lVar7 + (int64_t)iVar8 * 4);
    }
  }
  return;
}

