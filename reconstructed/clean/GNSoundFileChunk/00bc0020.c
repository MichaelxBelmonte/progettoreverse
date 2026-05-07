// Function: FUN_00bc0020
// Address: 00bc0020
// Size: 1575 bytes
// Class: GNSoundFileChunk
// === GNSoundFileChunk properties ===
//                   _isLoop
//                   _beats
//                   _tonalKey
//                   _tonalGender
//                   _readBuffer
//                   _channelCount
//                   _bitsPerSample
//                   _isFloat
//                   _isLittleEndian


void FUN_00bc0020(void)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  double dVar6;
  uint8_t auVar7 [16];
  double dVar8;
  uint uVar9;
  uint uVar10;
  uint64_t uVar11;
  int64_t lVar12;
  uint64_t uVar13;
  uint64_t arg1;
  int64_t this_ptr;
  uint64_t uVar14;
  uint64_t uVar15;
  int64_t lVar16;
  uint64_t uVar17;
  float fVar18;
  float fVar19;
  uint8_t auVar20 [16];
  
  uVar9 = FUN_00b33120();
  dVar6 = (double)(int64_t)arg1 * *(double *)(this_ptr + 0xe8);
  uVar11 = (uint64_t)dVar6;
  uVar11 = ((int64_t)(dVar6 - g_023907c8) & (int64_t)uVar11 >> 0x3f | uVar11) + 2;
  if (*(uint64_t *)(this_ptr + 0xb8) < uVar11) {
    uVar10 = FUN_00b33120();
    (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x400))();
    uVar17 = *(uint64_t *)(this_ptr + 0xb8);
    lVar16 = uVar11 - uVar17;
    if (uVar17 < uVar11) {
      if ((int)uVar10 < 1) {
        uVar13 = uVar17 + 1;
        if (uVar17 + 1 < uVar11) {
          uVar13 = uVar11;
        }
      }
      else {
        lVar4 = *(int64_t *)(this_ptr + 0xb0);
        lVar5 = *(int64_t *)(this_ptr + 200);
        iVar2 = *(int *)(this_ptr + 0xc4);
        lVar12 = 0;
        do {
          uVar13 = uVar17 & (int64_t)iVar2;
          uVar11 = 0;
          if (2 < (uint64_t)uVar10 - 1) {
            do {
              *(void*)(*(int64_t *)(lVar4 + uVar11 * 8) + uVar13 * 4) =
                   *(void*)(*(int64_t *)(lVar5 + uVar11 * 8) + lVar12 * 4);
              *(void*)(*(int64_t *)(lVar4 + 8 + uVar11 * 8) + uVar13 * 4) =
                   *(void*)(*(int64_t *)(lVar5 + 8 + uVar11 * 8) + lVar12 * 4);
              *(void*)(*(int64_t *)(lVar4 + 0x10 + uVar11 * 8) + uVar13 * 4) =
                   *(void*)(*(int64_t *)(lVar5 + 0x10 + uVar11 * 8) + lVar12 * 4);
              *(void*)(*(int64_t *)(lVar4 + 0x18 + uVar11 * 8) + uVar13 * 4) =
                   *(void*)(*(int64_t *)(lVar5 + 0x18 + uVar11 * 8) + lVar12 * 4);
              uVar11 = uVar11 + 4;
            } while ((uVar10 & 0xfffffffc) != uVar11);
          }
          if ((uint64_t)(uVar10 & 3) != 0) {
            uVar14 = 0;
            do {
              *(void*)(*(int64_t *)(lVar4 + uVar11 * 8 + uVar14 * 8) + uVar13 * 4) =
                   *(void*)(*(int64_t *)(lVar5 + uVar11 * 8 + uVar14 * 8) + lVar12 * 4);
              uVar14 = uVar14 + 1;
            } while ((uVar10 & 3) != uVar14);
          }
          lVar12 = lVar12 + 1;
          uVar17 = uVar17 + 1;
          uVar13 = uVar17;
        } while (lVar12 != lVar16);
      }
      *(uint64_t *)(this_ptr + 0xb8) = uVar13;
    }
  }
  dVar6 = g_023907c8;
  iVar2 = *(int *)(this_ptr + 0xf0);
  if (iVar2 == 0) {
    uVar11 = *(uint64_t *)(this_ptr + 0xa0);
    if (arg1 <= uVar11) {
      return;
    }
    if ((int)uVar9 < 1) {
      uVar17 = uVar11 + 1;
      if (uVar11 + 1 < arg1) {
        uVar17 = arg1;
      }
    }
    else {
      dVar1 = *(double *)(this_ptr + 0xe8);
      lVar16 = *(int64_t *)(this_ptr + 0x98);
      lVar4 = *(int64_t *)(this_ptr + 0xb0);
      iVar2 = *(int *)(this_ptr + 0xc4);
      iVar3 = *(int *)(this_ptr + 0xac);
      do {
        dVar8 = (double)(int64_t)uVar11 * dVar1;
        uVar17 = (uint64_t)dVar8;
        uVar13 = ((int64_t)(dVar8 - dVar6) & (int64_t)uVar17 >> 0x3f | uVar17) & (int64_t)iVar2;
        uVar17 = uVar11 & (int64_t)iVar3;
        uVar14 = 0;
        if (2 < (uint64_t)uVar9 - 1) {
          do {
            *(void*)(*(int64_t *)(lVar16 + uVar14 * 8) + uVar17 * 4) =
                 *(void*)(*(int64_t *)(lVar4 + uVar14 * 8) + uVar13 * 4);
            *(void*)(*(int64_t *)(lVar16 + 8 + uVar14 * 8) + uVar17 * 4) =
                 *(void*)(*(int64_t *)(lVar4 + 8 + uVar14 * 8) + uVar13 * 4);
            *(void*)(*(int64_t *)(lVar16 + 0x10 + uVar14 * 8) + uVar17 * 4) =
                 *(void*)(*(int64_t *)(lVar4 + 0x10 + uVar14 * 8) + uVar13 * 4);
            *(void*)(*(int64_t *)(lVar16 + 0x18 + uVar14 * 8) + uVar17 * 4) =
                 *(void*)(*(int64_t *)(lVar4 + 0x18 + uVar14 * 8) + uVar13 * 4);
            uVar14 = uVar14 + 4;
          } while ((uVar9 & 0xfffffffc) != uVar14);
        }
        if ((uint64_t)(uVar9 & 3) != 0) {
          uVar15 = 0;
          do {
            *(void*)(*(int64_t *)(lVar16 + uVar14 * 8 + uVar15 * 8) + uVar17 * 4) =
                 *(void*)(*(int64_t *)(lVar4 + uVar14 * 8 + uVar15 * 8) + uVar13 * 4);
            uVar15 = uVar15 + 1;
          } while ((uVar9 & 3) != uVar15);
        }
        uVar11 = uVar11 + 1;
        uVar17 = uVar11;
      } while (uVar11 < arg1);
    }
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 != 2) {
        return;
      }
      uVar11 = *(uint64_t *)(this_ptr + 0xa0);
      if (arg1 <= uVar11) {
        return;
      }
      if (0 < (int)uVar9) {
        do {
          dVar6 = (double)(int64_t)uVar11 * *(double *)(this_ptr + 0xe8);
          uVar17 = (int64_t)(dVar6 - g_023907c8) & (int64_t)dVar6 >> 0x3f | (int64_t)dVar6;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = dVar6;
          roundsd(ZEXT816(0),auVar20,9);
          uVar13 = 0;
          do {
            lVar16 = *(int64_t *)(*(int64_t *)(this_ptr + 0xb0) + uVar13 * 8);
            uVar11 = uVar17 + 1 & (int64_t)*(int *)(this_ptr + 0xc4);
            fVar18 = (float)FUN_00e838c0(*(void*)
                                          (lVar16 + (uVar17 - 1 &
                                                    (int64_t)*(int *)(this_ptr + 0xc4)) * 4),
                                         uVar11,*(void*)(lVar16 + uVar11 * 4));
            fVar19 = g_02390124;
            if ((fVar18 <= g_02390124) && (fVar19 = fVar18, fVar18 < g_02390d00)) {
              fVar19 = g_02390d00;
            }
            uVar11 = *(uint64_t *)(this_ptr + 0xa0);
            *(float *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x98) + uVar13 * 8) +
                      ((int64_t)*(int *)(this_ptr + 0xac) & uVar11) * 4) = fVar19;
            uVar13 = uVar13 + 1;
          } while (uVar9 != uVar13);
          uVar11 = uVar11 + 1;
          *(uint64_t *)(this_ptr + 0xa0) = uVar11;
        } while (uVar11 < arg1);
        return;
      }
      uVar9 = (int)arg1 - (int)uVar11;
      uVar17 = ~uVar11;
      if ((uVar9 & 7) != 0) {
        lVar16 = 0;
        do {
          lVar16 = lVar16 + -1;
        } while (-lVar16 != ((uint64_t)uVar9 & 7));
        uVar11 = uVar11 - lVar16;
      }
      if (6 < uVar17 + arg1) {
        do {
          uVar11 = uVar11 + 8;
        } while (uVar11 < arg1);
      }
      *(uint64_t *)(this_ptr + 0xa0) = uVar11;
      return;
    }
    uVar11 = *(uint64_t *)(this_ptr + 0xa0);
    if (arg1 <= uVar11) {
      return;
    }
    if ((int)uVar9 < 1) {
      uVar17 = uVar11 + 1;
      if (uVar11 + 1 < arg1) {
        uVar17 = arg1;
      }
    }
    else {
      dVar1 = *(double *)(this_ptr + 0xe8);
      lVar16 = *(int64_t *)(this_ptr + 0x98);
      lVar4 = *(int64_t *)(this_ptr + 0xb0);
      iVar2 = *(int *)(this_ptr + 0xc4);
      iVar3 = *(int *)(this_ptr + 0xac);
      do {
        dVar8 = (double)(int64_t)uVar11 * dVar1;
        uVar17 = (int64_t)(dVar8 - dVar6) & (int64_t)dVar8 >> 0x3f | (int64_t)dVar8;
        uVar14 = (int64_t)iVar2 & uVar17;
        uVar13 = uVar17 + 1 & (int64_t)iVar2;
        uVar17 = uVar11 & (int64_t)iVar3;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = dVar8;
        auVar20 = roundsd(ZEXT816(0),auVar7,9);
        fVar19 = (float)(dVar8 - auVar20._0_8_);
        if (uVar9 == 1) {
          uVar15 = 0;
        }
        else {
          uVar15 = 0;
          do {
            lVar5 = *(int64_t *)(lVar4 + uVar15 * 8);
            fVar18 = *(float *)(lVar5 + uVar14 * 4);
            *(float *)(*(int64_t *)(lVar16 + uVar15 * 8) + uVar17 * 4) =
                 (*(float *)(lVar5 + uVar13 * 4) - fVar18) * fVar19 + fVar18;
            lVar5 = *(int64_t *)(lVar4 + 8 + uVar15 * 8);
            fVar18 = *(float *)(lVar5 + uVar14 * 4);
            *(float *)(*(int64_t *)(lVar16 + 8 + uVar15 * 8) + uVar17 * 4) =
                 (*(float *)(lVar5 + uVar13 * 4) - fVar18) * fVar19 + fVar18;
            uVar15 = uVar15 + 2;
          } while ((uVar9 & 0xfffffffe) != uVar15);
        }
        if ((uVar9 & 1) != 0) {
          lVar5 = *(int64_t *)(lVar4 + uVar15 * 8);
          fVar18 = *(float *)(lVar5 + uVar14 * 4);
          *(float *)(*(int64_t *)(lVar16 + uVar15 * 8) + uVar17 * 4) =
               (*(float *)(lVar5 + uVar13 * 4) - fVar18) * fVar19 + fVar18;
        }
        uVar11 = uVar11 + 1;
        uVar17 = uVar11;
      } while (uVar11 < arg1);
    }
  }
  *(uint64_t *)(this_ptr + 0xa0) = uVar17;
  return;
}

