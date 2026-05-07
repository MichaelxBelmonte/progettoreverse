// Function: FUN_0185cc90
// Address: 0185cc90
// Size: 2416 bytes
// Class: Unknown

void FUN_0185cc90(int64_t *param_1,int64_t *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t lVar14;
  int64_t lVar15;
  int64_t lVar16;
  float *pfVar17;
  int64_t lVar18;
  char *pcVar19;
  int iVar20;
  int iVar21;
  int64_t lVar22;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t uVar23;
  int64_t lVar24;
  int64_t lVar25;
  uint32_t uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  int64_t local_88;
  char local_80;
  int64_t local_48;
  char local_40;
  
  uVar26 = FUN_018d8840();
  if ((local_40 == '\0') && (local_48 != 0)) {
    uVar26 = FUN_00d50b00();
  }
  lVar12 = g_027df658;
  if (g_027df658 != 0) {
    uVar26 = FUN_00d50b00();
  }
  FUN_018d9a10(uVar26,1);
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_80 = '\0';
  }
  iVar20 = FUN_00d237a0();
  if (local_88 != 0) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (lVar12 != 0) {
    FUN_00d50b20();
  }
  FUN_0185c9d0();
  if (local_88 != 0) {
    FUN_00d50b00();
  }
  FUN_0185ca80();
  if (local_88 != 0) {
    FUN_00d50b00();
  }
  FUN_0185cb30();
  if (local_88 != 0) {
    FUN_00d50b00();
  }
  FUN_0185cbe0();
  if (local_88 != 0) {
    FUN_00d50b00();
  }
  lVar12 = *(int64_t *)(*(int64_t *)(local_88 + 0x10) + (int64_t)iVar20 * 8);
  if (lVar12 != 0) {
    FUN_00d50b00();
  }
  lVar13 = *(int64_t *)(*(int64_t *)(local_88 + 0x10) + (int64_t)iVar20 * 8);
  if (lVar13 != 0) {
    FUN_00d50b00();
  }
  if (*param_2 != 0) {
    FUN_00d216c0();
  }
  lVar24 = 0;
  do {
    FUN_00c8e690();
    if (local_88 != 0) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    ___bzero();
    if (*param_2 != 0) {
      FUN_00d21140();
    }
    lVar25 = 0;
    do {
      lVar14 = *(int64_t *)(*(int64_t *)(lVar13 + 0x10) + lVar25 * 8);
      iVar20 = (int)lVar24;
      if (lVar14 != 0) {
        FUN_00d50b00();
        uVar11 = *(uint *)(lVar14 + 0x18);
        if (3 < (int)uVar11) {
          lVar15 = *(int64_t *)(*this_ptr + 0x10);
          fVar28 = *(float *)(lVar15 + (uint64_t)
                                       (uint)((int)(lVar25 + lVar24) +
                                             (int)((lVar25 + lVar24 & 0xffffffffU) / 0xc) * -0xc) *
                                       4);
          lVar14 = *(int64_t *)(lVar14 + 0x10);
          lVar16 = *(int64_t *)(local_88 + 0x10);
          fVar29 = *(float *)(lVar16 + lVar25 * 4);
          uVar23 = 0;
          do {
            iVar21 = *(int *)(lVar14 + uVar23 * 4) + iVar20;
            fVar29 = fVar29 + SQRT(*(float *)(lVar15 + (int64_t)
                                                       (int)(iVar21 + (((uint)(iVar21 / 6 +
                                                                              (iVar21 >> 0x1f)) >> 1
                                                                       ) - (iVar21 >> 0x1f)) * -0xc)
                                                       * 4) * fVar28);
            *(float *)(lVar16 + lVar25 * 4) = fVar29;
            uVar23 = uVar23 + 1;
          } while (uVar11 >> 2 != uVar23);
        }
        FUN_00d50b20();
      }
      lVar25 = lVar25 + 1;
    } while (lVar25 != 0xc);
    pfVar17 = *(float **)(local_88 + 0x10);
    fVar28 = *pfVar17;
    fVar29 = pfVar17[1];
    fVar30 = fVar28;
    if (fVar28 <= g_02391074) {
      fVar30 = g_02391074;
    }
    fVar1 = pfVar17[2];
    fVar2 = pfVar17[3];
    fVar3 = pfVar17[4];
    fVar4 = pfVar17[5];
    fVar5 = pfVar17[6];
    fVar6 = pfVar17[7];
    fVar7 = pfVar17[8];
    fVar8 = pfVar17[9];
    fVar9 = pfVar17[10];
    fVar10 = pfVar17[0xb];
    if (*param_1 != 0) {
      lVar25 = 0;
      do {
        lVar14 = *(int64_t *)(*(int64_t *)(lVar13 + 0x10) + lVar25 * 8);
        if (lVar14 != 0) {
          FUN_00d50b00();
          uVar11 = *(uint *)(lVar14 + 0x18);
          if (3 < (int)uVar11) {
            lVar14 = *(int64_t *)(lVar14 + 0x10);
            lVar15 = *(int64_t *)(*this_ptr + 0x10);
            lVar16 = *(int64_t *)(local_88 + 0x10);
            lVar18 = *(int64_t *)(*param_1 + 0x10);
            uVar23 = 0;
            do {
              iVar21 = *(int *)(lVar14 + uVar23 * 4) + iVar20;
              lVar22 = (int64_t)
                       (int)(iVar21 + (((uint)(iVar21 / 6 + (iVar21 >> 0x1f)) >> 1) -
                                      (iVar21 >> 0x1f)) * -0xc);
              *(float *)(lVar18 + lVar22 * 4) =
                   *(float *)(lVar15 + lVar22 * 4) * *(float *)(lVar16 + lVar25 * 4) +
                   *(float *)(lVar18 + lVar22 * 4);
              uVar23 = uVar23 + 1;
            } while (uVar11 >> 2 != uVar23);
          }
          FUN_00d50b20();
        }
        lVar25 = lVar25 + 1;
      } while (lVar25 != 0xc);
    }
    if (*arg1 != 0) {
      lVar25 = *(int64_t *)(*this_ptr + 0x10);
      pcVar19 = *(char **)(lVar12 + 0x10);
      fVar27 = *(float *)(lVar25 + lVar24 * 4);
      if (*pcVar19 == '\0') {
        fVar27 = (float)((uint)fVar27 ^ g_023945e0);
      }
      fVar31 = fVar29;
      if (fVar29 <= fVar30) {
        fVar31 = fVar30;
      }
      fVar30 = *(float *)(lVar25 + (uint64_t)(((iVar20 + 1U) / 0xc) * -0xc + iVar20 + 1) * 4);
      if (pcVar19[1] == '\0') {
        fVar30 = (float)((uint)fVar30 ^ g_023945e0);
      }
      fVar32 = fVar1;
      if (fVar1 <= fVar31) {
        fVar32 = fVar31;
      }
      fVar31 = *(float *)(lVar25 + (uint64_t)(((iVar20 + 2U) / 0xc) * -0xc + iVar20 + 2) * 4);
      if (pcVar19[2] == '\0') {
        fVar31 = (float)((uint)fVar31 ^ g_023945e0);
      }
      fVar33 = fVar2;
      if (fVar2 <= fVar32) {
        fVar33 = fVar32;
      }
      fVar32 = *(float *)(lVar25 + (uint64_t)(((iVar20 + 3U) / 0xc) * -0xc + iVar20 + 3) * 4);
      if (pcVar19[3] == '\0') {
        fVar32 = (float)((uint)fVar32 ^ g_023945e0);
      }
      fVar34 = fVar3;
      if (fVar3 <= fVar33) {
        fVar34 = fVar33;
      }
      fVar33 = *(float *)(lVar25 + (uint64_t)(((iVar20 + 4U) / 0xc) * -0xc + iVar20 + 4) * 4);
      if (pcVar19[4] == '\0') {
        fVar33 = (float)((uint)fVar33 ^ g_023945e0);
      }
      fVar35 = fVar4;
      if (fVar4 <= fVar34) {
        fVar35 = fVar34;
      }
      fVar34 = *(float *)(lVar25 + (uint64_t)(((iVar20 + 5U) / 0xc) * -0xc + iVar20 + 5) * 4);
      if (pcVar19[5] == '\0') {
        fVar34 = (float)((uint)fVar34 ^ g_023945e0);
      }
      fVar36 = fVar5;
      if (fVar5 <= fVar35) {
        fVar36 = fVar35;
      }
      fVar35 = *(float *)(lVar25 + (uint64_t)(((iVar20 + 6U) / 0xc) * -0xc + iVar20 + 6) * 4);
      if (pcVar19[6] == '\0') {
        fVar35 = (float)((uint)fVar35 ^ g_023945e0);
      }
      fVar37 = fVar6;
      if (fVar6 <= fVar36) {
        fVar37 = fVar36;
      }
      fVar36 = *(float *)(lVar25 + (uint64_t)(((iVar20 + 7U) / 0xc) * -0xc + iVar20 + 7) * 4);
      if (pcVar19[7] == '\0') {
        fVar36 = (float)((uint)fVar36 ^ g_023945e0);
      }
      fVar38 = fVar7;
      if (fVar7 <= fVar37) {
        fVar38 = fVar37;
      }
      fVar37 = *(float *)(lVar25 + (uint64_t)(((iVar20 + 8U) / 0xc) * -0xc + iVar20 + 8) * 4);
      if (pcVar19[8] == '\0') {
        fVar37 = (float)((uint)fVar37 ^ g_023945e0);
      }
      fVar39 = fVar8;
      if (fVar8 <= fVar38) {
        fVar39 = fVar38;
      }
      fVar38 = *(float *)(lVar25 + (uint64_t)(((iVar20 + 9U) / 0xc) * -0xc + iVar20 + 9) * 4);
      if (pcVar19[9] == '\0') {
        fVar38 = (float)((uint)fVar38 ^ g_023945e0);
      }
      fVar40 = fVar9;
      if (fVar9 <= fVar39) {
        fVar40 = fVar39;
      }
      fVar39 = *(float *)(lVar25 + (uint64_t)(((iVar20 + 10U) / 0xc) * -0xc + iVar20 + 10) * 4);
      if (pcVar19[10] == '\0') {
        fVar39 = (float)((uint)fVar39 ^ g_023945e0);
      }
      fVar41 = fVar10;
      if (fVar10 <= fVar40) {
        fVar41 = fVar40;
      }
      fVar40 = *(float *)(lVar25 + (uint64_t)(((iVar20 + 0xbU) / 0xc) * -0xc + iVar20 + 0xb) * 4);
      if (pcVar19[0xb] == '\0') {
        fVar40 = (float)((uint)fVar40 ^ g_023945e0);
      }
      fVar29 = (fVar28 + g_0239424c + fVar29 + fVar1 + fVar2 + fVar3 + fVar4 + fVar5 + fVar6 +
                fVar7 + fVar8 + fVar9 + fVar10) *
               (fVar41 + (fVar27 + g_0239424c + fVar30 + fVar31 + fVar32 + fVar33 + fVar34 +
                          fVar35 + fVar36 + fVar37 + fVar38 + fVar39 + fVar40) * g_0239011c);
      fVar28 = 0.0;
      if (0.0 <= fVar29) {
        fVar28 = fVar29;
      }
      *(float *)(*(int64_t *)(*arg1 + 0x10) + lVar24 * 4) = fVar28;
    }
    if (local_88 != 0) {
      FUN_00d50b20();
    }
    lVar24 = lVar24 + 1;
  } while (lVar24 != 0xc);
  if (lVar13 != 0) {
    FUN_00d50b20();
  }
  if (lVar12 != 0) {
    FUN_00d50b20();
  }
  if (local_88 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  return;
}

