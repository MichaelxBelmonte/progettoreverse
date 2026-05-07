// Function: FUN_00bbdf40
// Address: 00bbdf40
// Size: 2869 bytes
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


void FUN_00bbdf40(uint param_1,int64_t param_2)

{
  void*puVar1;
  void*puVar2;
  void*puVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint uVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  int64_t lVar17;
  void*puVar18;
  int64_t arg1;
  uint64_t uVar19;
  int64_t this_ptr;
  uint64_t uVar20;
  void*puVar21;
  void*puVar22;
  uint uVar23;
  void*puVar24;
  uint64_t uVar25;
  int64_t lVar26;
  uint64_t uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  float fVar35;
  float fVar36;
  int64_t local_88;
  char local_80;
  
  uVar13 = FUN_00b33120();
  uVar27 = (uint64_t)uVar13;
  dVar31 = (double)FUN_00b335d0();
  if (((arg1 != param_2) && (0 < (int)uVar13)) && (param_1 != 0)) {
    uVar13 = param_1 - 1;
    if (uVar13 < 7) {
      uVar16 = 0;
      do {
        puVar24 = *(void**)(arg1 + uVar16 * 8);
        puVar21 = *(void**)(param_2 + uVar16 * 8);
        *puVar21 = *puVar24;
        if (((((param_1 != 1) && (puVar21[1] = puVar24[1], param_1 != 2)) &&
             (puVar21[2] = puVar24[2], param_1 != 3)) &&
            ((puVar21[3] = puVar24[3], param_1 != 4 && (puVar21[4] = puVar24[4], param_1 != 5)))) &&
           (puVar21[5] = puVar24[5], param_1 != 6)) {
          puVar21[6] = puVar24[6];
        }
        uVar16 = uVar16 + 1;
      } while (uVar27 != uVar16);
    }
    else {
      uVar16 = (uint64_t)uVar13 + 1;
      uVar25 = uVar16 & 0xfffffffffffffff8;
      if (uVar16 == uVar25) {
        uVar15 = (uVar25 - 8 >> 3) + 1;
        uVar20 = (uint64_t)((uint)uVar15 & 3);
        uVar19 = 0;
        do {
          puVar24 = *(void**)(arg1 + uVar19 * 8);
          puVar21 = *(void**)(param_2 + uVar19 * 8);
          if ((puVar21 < puVar24 + uVar16) && (puVar24 < puVar21 + uVar16)) {
            uVar14 = param_1;
            if ((param_1 & 7) != 0) {
              uVar14 = 0;
              do {
                uVar4 = *puVar24;
                puVar24 = puVar24 + 1;
                *puVar21 = uVar4;
                puVar21 = puVar21 + 1;
                uVar14 = uVar14 + 1;
              } while ((param_1 & 7) != uVar14);
              uVar14 = param_1 - uVar14;
            }
            if (6 < uVar13) {
              lVar17 = 0;
              do {
                puVar21[lVar17] = puVar24[lVar17];
                puVar21[lVar17 + 1] = puVar24[lVar17 + 1];
                puVar21[lVar17 + 2] = puVar24[lVar17 + 2];
                puVar21[lVar17 + 3] = puVar24[lVar17 + 3];
                puVar21[lVar17 + 4] = puVar24[lVar17 + 4];
                puVar21[lVar17 + 5] = puVar24[lVar17 + 5];
                puVar21[lVar17 + 6] = puVar24[lVar17 + 6];
                puVar21[lVar17 + 7] = puVar24[lVar17 + 7];
                lVar17 = lVar17 + 8;
              } while (uVar14 != (uint)lVar17);
            }
          }
          else {
            if (uVar25 - 8 < 0x18) {
              lVar26 = 0;
            }
            else {
              lVar26 = 0;
              lVar17 = -(uVar15 & 0xfffffffffffffffc);
              do {
                uVar8 = *(void*)((int64_t)(puVar24 + lVar26) + 8);
                uVar9 = *(void*)(puVar24 + lVar26 + 4);
                uVar10 = *(void*)((int64_t)(puVar24 + lVar26 + 4) + 8);
                *(void*)(puVar21 + lVar26) = *(void*)(puVar24 + lVar26);
                *(void*)((int64_t)(puVar21 + lVar26) + 8) = uVar8;
                *(void*)(puVar21 + lVar26 + 4) = uVar9;
                *(void*)((int64_t)(puVar21 + lVar26 + 4) + 8) = uVar10;
                uVar8 = *(void*)((int64_t)(puVar24 + lVar26 + 8) + 8);
                uVar9 = *(void*)(puVar24 + lVar26 + 0xc);
                uVar10 = *(void*)((int64_t)(puVar24 + lVar26 + 0xc) + 8);
                *(void*)(puVar21 + lVar26 + 8) = *(void*)(puVar24 + lVar26 + 8);
                *(void*)((int64_t)(puVar21 + lVar26 + 8) + 8) = uVar8;
                *(void*)(puVar21 + lVar26 + 0xc) = uVar9;
                *(void*)((int64_t)(puVar21 + lVar26 + 0xc) + 8) = uVar10;
                uVar8 = *(void*)((int64_t)(puVar24 + lVar26 + 0x10) + 8);
                uVar9 = *(void*)(puVar24 + lVar26 + 0x14);
                uVar10 = *(void*)((int64_t)(puVar24 + lVar26 + 0x14) + 8);
                *(void*)(puVar21 + lVar26 + 0x10) = *(void*)(puVar24 + lVar26 + 0x10);
                *(void*)((int64_t)(puVar21 + lVar26 + 0x10) + 8) = uVar8;
                *(void*)(puVar21 + lVar26 + 0x14) = uVar9;
                *(void*)((int64_t)(puVar21 + lVar26 + 0x14) + 8) = uVar10;
                uVar8 = *(void*)((int64_t)(puVar24 + lVar26 + 0x18) + 8);
                puVar18 = puVar24 + lVar26 + 0x1c;
                uVar4 = *puVar18;
                uVar5 = puVar18[1];
                uVar6 = puVar18[2];
                uVar7 = puVar18[3];
                *(void*)(puVar21 + lVar26 + 0x18) = *(void*)(puVar24 + lVar26 + 0x18);
                *(void*)((int64_t)(puVar21 + lVar26 + 0x18) + 8) = uVar8;
                puVar18 = puVar21 + lVar26 + 0x1c;
                *puVar18 = uVar4;
                puVar18[1] = uVar5;
                puVar18[2] = uVar6;
                puVar18[3] = uVar7;
                lVar26 = lVar26 + 0x20;
                lVar17 = lVar17 + 4;
              } while (lVar17 != 0);
            }
            if (uVar20 != 0) {
              lVar17 = 0;
              do {
                puVar2 = (void*)((int64_t)puVar24 + lVar17 + lVar26 * 4);
                uVar8 = puVar2[1];
                puVar18 = (void*)((int64_t)puVar24 + lVar17 + lVar26 * 4 + 0x10);
                uVar4 = *puVar18;
                uVar5 = puVar18[1];
                uVar6 = puVar18[2];
                uVar7 = puVar18[3];
                puVar3 = (void*)((int64_t)puVar21 + lVar17 + lVar26 * 4);
                *puVar3 = *puVar2;
                puVar3[1] = uVar8;
                puVar18 = (void*)((int64_t)puVar21 + lVar17 + lVar26 * 4 + 0x10);
                *puVar18 = uVar4;
                puVar18[1] = uVar5;
                puVar18[2] = uVar6;
                puVar18[3] = uVar7;
                lVar17 = lVar17 + 0x20;
              } while (uVar20 << 5 != lVar17);
            }
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 != uVar27);
      }
      else {
        uVar13 = param_1 - (int)uVar25;
        uVar15 = (uVar25 - 8 >> 3) + 1;
        uVar20 = (uint64_t)((uint)uVar15 & 3);
        uVar19 = 0;
        do {
          puVar24 = *(void**)(arg1 + uVar19 * 8);
          puVar21 = *(void**)(param_2 + uVar19 * 8);
          if ((puVar24 + uVar16 <= puVar21) ||
             (uVar14 = param_1, puVar18 = puVar24, puVar22 = puVar21, puVar21 + uVar16 <= puVar24))
          {
            if (uVar25 - 8 < 0x18) {
              lVar26 = 0;
            }
            else {
              lVar26 = 0;
              lVar17 = -(uVar15 & 0xfffffffffffffffc);
              do {
                uVar8 = *(void*)((int64_t)(puVar24 + lVar26) + 8);
                uVar9 = *(void*)(puVar24 + lVar26 + 4);
                uVar10 = *(void*)((int64_t)(puVar24 + lVar26 + 4) + 8);
                *(void*)(puVar21 + lVar26) = *(void*)(puVar24 + lVar26);
                *(void*)((int64_t)(puVar21 + lVar26) + 8) = uVar8;
                *(void*)(puVar21 + lVar26 + 4) = uVar9;
                *(void*)((int64_t)(puVar21 + lVar26 + 4) + 8) = uVar10;
                uVar8 = *(void*)((int64_t)(puVar24 + lVar26 + 8) + 8);
                uVar9 = *(void*)(puVar24 + lVar26 + 0xc);
                uVar10 = *(void*)((int64_t)(puVar24 + lVar26 + 0xc) + 8);
                *(void*)(puVar21 + lVar26 + 8) = *(void*)(puVar24 + lVar26 + 8);
                *(void*)((int64_t)(puVar21 + lVar26 + 8) + 8) = uVar8;
                *(void*)(puVar21 + lVar26 + 0xc) = uVar9;
                *(void*)((int64_t)(puVar21 + lVar26 + 0xc) + 8) = uVar10;
                uVar8 = *(void*)((int64_t)(puVar24 + lVar26 + 0x10) + 8);
                uVar9 = *(void*)(puVar24 + lVar26 + 0x14);
                uVar10 = *(void*)((int64_t)(puVar24 + lVar26 + 0x14) + 8);
                *(void*)(puVar21 + lVar26 + 0x10) = *(void*)(puVar24 + lVar26 + 0x10);
                *(void*)((int64_t)(puVar21 + lVar26 + 0x10) + 8) = uVar8;
                *(void*)(puVar21 + lVar26 + 0x14) = uVar9;
                *(void*)((int64_t)(puVar21 + lVar26 + 0x14) + 8) = uVar10;
                uVar8 = *(void*)((int64_t)(puVar24 + lVar26 + 0x18) + 8);
                puVar18 = puVar24 + lVar26 + 0x1c;
                uVar4 = *puVar18;
                uVar5 = puVar18[1];
                uVar6 = puVar18[2];
                uVar7 = puVar18[3];
                *(void*)(puVar21 + lVar26 + 0x18) = *(void*)(puVar24 + lVar26 + 0x18);
                *(void*)((int64_t)(puVar21 + lVar26 + 0x18) + 8) = uVar8;
                puVar18 = puVar21 + lVar26 + 0x1c;
                *puVar18 = uVar4;
                puVar18[1] = uVar5;
                puVar18[2] = uVar6;
                puVar18[3] = uVar7;
                lVar26 = lVar26 + 0x20;
                lVar17 = lVar17 + 4;
              } while (lVar17 != 0);
            }
            uVar14 = uVar13;
            puVar18 = puVar24 + uVar25;
            puVar22 = puVar21 + uVar25;
            if (uVar20 != 0) {
              lVar17 = 0;
              do {
                puVar2 = (void*)((int64_t)puVar24 + lVar17 + lVar26 * 4);
                uVar8 = puVar2[1];
                puVar1 = (void*)((int64_t)puVar24 + lVar17 + lVar26 * 4 + 0x10);
                uVar4 = *puVar1;
                uVar5 = puVar1[1];
                uVar6 = puVar1[2];
                uVar7 = puVar1[3];
                puVar3 = (void*)((int64_t)puVar21 + lVar17 + lVar26 * 4);
                *puVar3 = *puVar2;
                puVar3[1] = uVar8;
                puVar1 = (void*)((int64_t)puVar21 + lVar17 + lVar26 * 4 + 0x10);
                *puVar1 = uVar4;
                puVar1[1] = uVar5;
                puVar1[2] = uVar6;
                puVar1[3] = uVar7;
                lVar17 = lVar17 + 0x20;
              } while (uVar20 << 5 != lVar17);
            }
          }
          uVar11 = uVar14 - 1;
          if ((uVar14 & 7) != 0) {
            uVar23 = 0;
            do {
              uVar4 = *puVar18;
              puVar18 = puVar18 + 1;
              *puVar22 = uVar4;
              puVar22 = puVar22 + 1;
              uVar23 = uVar23 + 1;
            } while ((uVar14 & 7) != uVar23);
            uVar14 = uVar14 - uVar23;
          }
          if (6 < uVar11) {
            lVar17 = 0;
            do {
              puVar22[lVar17] = puVar18[lVar17];
              puVar22[lVar17 + 1] = puVar18[lVar17 + 1];
              puVar22[lVar17 + 2] = puVar18[lVar17 + 2];
              puVar22[lVar17 + 3] = puVar18[lVar17 + 3];
              puVar22[lVar17 + 4] = puVar18[lVar17 + 4];
              puVar22[lVar17 + 5] = puVar18[lVar17 + 5];
              puVar22[lVar17 + 6] = puVar18[lVar17 + 6];
              puVar22[lVar17 + 7] = puVar18[lVar17 + 7];
              lVar17 = lVar17 + 8;
            } while (uVar14 != (uint)lVar17);
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 != uVar27);
      }
    }
  }
  dVar31 = (double)(int)param_1 / dVar31;
  if (*(float *)(this_ptr + 0x90) < *(float *)(this_ptr + 0x94) ||
      *(float *)(this_ptr + 0x90) == *(float *)(this_ptr + 0x94)) {
    fVar35 = *(float *)(this_ptr + 0x9c);
    if ((fVar35 != 0.0) || (NAN(fVar35))) {
      fVar28 = *(float *)(this_ptr + 0x98);
      uVar13 = FUN_00b33120();
      dVar32 = (double)FUN_00b335d0();
      dVar32 = g_0238fee8 / dVar32;
      if (fVar35 <= fVar28) {
        if ((0 < (int)uVar13) && (0 < (int)param_1)) {
          fVar36 = g_02390124 / (float)(int)param_1;
          dVar33 = 0.0;
          uVar27 = 0;
          fVar35 = g_02390124;
          fVar28 = g_023d91e0;
          do {
            lVar17 = *(int64_t *)(param_2 + uVar27 * 8);
            lVar26 = 0;
            fVar29 = fVar35;
            do {
              fVar30 = (float)_sinf(CONCAT44((int)((uint64_t)dVar33 >> 0x20),
                                             ((float)dVar33 + *(float *)(this_ptr + 0x98)) * fVar28
                                            ));
              fVar30 = fVar30 * g_02391090;
              uVar14 = FUN_00e7dff0();
              fVar28 = g_023d91e0;
              fVar35 = g_02390124;
              *(float *)(lVar17 + lVar26 * 4) =
                   ((float)(uVar14 % 1000) / g_023dbb10 + fVar30) * fVar29 * g_0239011c +
                   (g_02390124 - fVar29) * *(float *)(lVar17 + lVar26 * 4);
              dVar33 = dVar33 + dVar32;
              fVar29 = fVar29 - fVar36;
              lVar26 = lVar26 + 1;
            } while (param_1 != (uint)lVar26);
            uVar27 = uVar27 + 1;
          } while (uVar27 != uVar13);
        }
        *(void*)(this_ptr + 0x9c) = 0;
      }
      else if ((0 < (int)uVar13) && (0 < (int)param_1)) {
        dVar33 = 0.0;
        uVar27 = 0;
        fVar35 = g_023d91e0;
        do {
          lVar17 = *(int64_t *)(param_2 + uVar27 * 8);
          lVar26 = 0;
          do {
            fVar28 = (float)_sinf(CONCAT44((int)((uint64_t)dVar33 >> 0x20),
                                           ((float)dVar33 + *(float *)(this_ptr + 0x98)) * fVar35))
            ;
            fVar28 = fVar28 * g_02391090;
            uVar14 = FUN_00e7dff0();
            fVar35 = g_023d91e0;
            *(float *)(lVar17 + lVar26 * 4) =
                 ((float)(uVar14 % 1000) / g_023dbb10 + fVar28) * g_0239011c +
                 *(float *)(lVar17 + lVar26 * 4) * 0.0;
            dVar33 = dVar33 + dVar32;
            lVar26 = lVar26 + 1;
          } while (param_1 != (uint)lVar26);
          uVar27 = uVar27 + 1;
        } while (uVar27 != uVar13);
      }
      goto LAB_00bbe9f8;
    }
  }
  else {
    *(void*)(this_ptr + 0x98) = 0;
    uVar13 = FUN_00b33120();
    dVar32 = (double)FUN_00b335d0();
    if ((0 < (int)uVar13) && (0 < (int)param_1)) {
      dVar32 = g_0238fee8 / dVar32;
      fVar28 = g_02390124 / (float)(int)param_1;
      dVar33 = 0.0;
      uVar27 = 0;
      fVar35 = g_023d91e0;
      do {
        lVar17 = *(int64_t *)(param_2 + uVar27 * 8);
        fVar36 = 0.0;
        lVar26 = 0;
        do {
          fVar29 = (float)_sinf(((float)dVar33 + *(float *)(this_ptr + 0x98)) * fVar35);
          fVar29 = fVar29 * g_02391090;
          uVar14 = FUN_00e7dff0();
          fVar35 = g_023d91e0;
          *(float *)(lVar17 + lVar26 * 4) =
               ((float)(uVar14 % 1000) / g_023dbb10 + fVar29) * fVar36 * g_0239011c +
               (g_02390124 - fVar36) * *(float *)(lVar17 + lVar26 * 4);
          dVar33 = dVar33 + dVar32;
          fVar36 = fVar36 + fVar28;
          lVar26 = lVar26 + 1;
        } while (param_1 != (uint)lVar26);
        uVar27 = uVar27 + 1;
      } while (uVar27 != uVar13);
    }
    if (*(float *)(this_ptr + 0x90) <= *(float *)(this_ptr + 0xb0)) {
      dVar33 = (double)(*(float *)(this_ptr + 0x90) / *(float *)(this_ptr + 0xb0));
      fVar35 = *(float *)(this_ptr + 0xa0);
      fVar28 = *(float *)(this_ptr + 0xa4);
      uVar13 = FUN_00e7dff0();
      dVar34 = (double)uVar13 / g_023934c0 + (double)uVar13 / g_023934c0 + g_023b19a0;
      dVar32 = g_0238fee8 - dVar33;
      fVar36 = *(float *)(this_ptr + 0xa8);
      fVar29 = *(float *)(this_ptr + 0xac);
      uVar13 = FUN_00e7dff0();
      dVar32 = (((double)uVar13 / g_023934c0 + (double)uVar13 / g_023934c0 + g_023b19a0) *
                (double)fVar29 + (double)fVar36) * dVar33 +
               dVar32 * (dVar34 * (double)fVar28 + (double)fVar35);
    }
    else {
      fVar35 = *(float *)(this_ptr + 0xa8);
      fVar28 = *(float *)(this_ptr + 0xac);
      uVar13 = FUN_00e7dff0();
      dVar32 = ((double)uVar13 / g_023934c0 + (double)uVar13 / g_023934c0 + g_023b19a0) *
               (double)fVar28 + (double)fVar35;
    }
    *(float *)(this_ptr + 0x94) = (float)dVar32 + *(float *)(this_ptr + 0x94);
    *(void*)(this_ptr + 0x9c) = 0x3f800000;
LAB_00bbe9f8:
    *(float *)(this_ptr + 0x98) = (float)((double)*(float *)(this_ptr + 0x98) + dVar31);
  }
  if (*(int *)(this_ptr + 0xb4) < 0) {
    FUN_00b31a00();
    cVar12 = FUN_00bc4910();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (cVar12 != '\0') goto LAB_00bbea37;
  }
  else if (*(int *)(this_ptr + 0xb4) != 0) goto LAB_00bbea37;
  *(float *)(this_ptr + 0x94) = (float)((double)*(float *)(this_ptr + 0x94) + dVar31);
LAB_00bbea37:
  *(float *)(this_ptr + 0x90) = (float)(dVar31 + (double)*(float *)(this_ptr + 0x90));
  return;
}

