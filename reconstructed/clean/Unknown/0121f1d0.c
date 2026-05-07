// Function: FUN_0121f1d0
// Address: 0121f1d0
// Size: 4010 bytes
// Class: Unknown

void FUN_0121f1d0(double param_1)

{
  float *pfVar1;
  uint *puVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  int64_t lVar7;
  void*puVar8;
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
  uint8_t auVar19 [16];
  int iVar20;
  int iVar21;
  int64_t lVar22;
  uint uVar23;
  void*puVar24;
  uint64_t uVar25;
  uint64_t uVar26;
  uint64_t uVar27;
  uint64_t uVar28;
  uint64_t uVar29;
  int64_t lVar30;
  uint64_t uVar31;
  int64_t lVar32;
  uint uVar33;
  uint uVar34;
  int64_t *this_ptr;
  uint64_t uVar35;
  uint64_t uVar36;
  uint uVar37;
  uint uVar38;
  float fVar39;
  uint8_t auVar40 [16];
  float fVar41;
  uint8_t auVar42 [16];
  uint8_t auVar43 [16];
  uint8_t auVar44 [16];
  uint8_t auVar45 [16];
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  int64_t local_b8;
  int64_t local_b0;
  int64_t local_40;
  char local_38;
  
  iVar20 = FUN_00e7d850(g_023934c8 / param_1);
  FUN_00e84250();
  lVar22 = *this_ptr;
  if (0 < *(int *)(lVar22 + 0xc)) {
    lVar30 = 0;
    do {
      lVar22 = *(int64_t *)(*(int64_t *)(lVar22 + 0x10) + lVar30 * 8);
      if (lVar22 != 0) {
        FUN_00d50b00();
      }
      FUN_015f8890();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      uVar6 = *(uint *)(local_40 + 0xc);
      uVar28 = (uint64_t)uVar6;
      if ((int)uVar6 < 3) {
LAB_01220157:
        FUN_00d50b20();
      }
      else {
        FUN_00c8e690();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        FUN_00c92160();
        lVar32 = *(int64_t *)(local_40 + 0x10);
        lVar7 = *(int64_t *)(local_40 + 0x10);
        uVar29 = uVar28 - 1;
        uVar26 = (uint64_t)(uVar6 & 3);
        if (uVar29 < 3) {
          uVar36 = 0;
        }
        else {
          uVar36 = 0;
          do {
            *(float *)(lVar7 + uVar36 * 4) =
                 (float)*(int *)(*(int64_t *)(lVar32 + uVar36 * 8) + 0x10);
            *(float *)(lVar7 + 4 + uVar36 * 4) =
                 (float)*(int *)(*(int64_t *)(lVar32 + 8 + uVar36 * 8) + 0x10);
            *(float *)(lVar7 + 8 + uVar36 * 4) =
                 (float)*(int *)(*(int64_t *)(lVar32 + 0x10 + uVar36 * 8) + 0x10);
            *(float *)(lVar7 + 0xc + uVar36 * 4) =
                 (float)*(int *)(*(int64_t *)(lVar32 + 0x18 + uVar36 * 8) + 0x10);
            uVar36 = uVar36 + 4;
          } while ((uVar6 & 0xfffffffc) != uVar36);
        }
        if (uVar26 != 0) {
          uVar27 = 0;
          do {
            *(float *)(lVar7 + uVar36 * 4 + uVar27 * 4) =
                 (float)*(int *)(*(int64_t *)(lVar32 + uVar36 * 8 + uVar27 * 8) + 0x10);
            uVar27 = uVar27 + 1;
          } while (uVar26 != uVar27);
        }
        FUN_015c15b0(1,uVar6);
        FUN_00c8e4f0();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00c92170();
        FUN_00c92160();
        FUN_00c8e690();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        FUN_00c92160();
        ___bzero();
        FUN_00c8e690();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        FUN_00c92160();
        ___bzero();
        FUN_015c15b0(1,uVar28);
        FUN_015c1480(1);
        fVar46 = _UNK_02411e1c;
        fVar41 = _UNK_02411e18;
        fVar49 = _UNK_02411e14;
        fVar39 = g_02411e10;
        uVar33 = _UNK_0239014c;
        uVar38 = _UNK_02390148;
        uVar23 = _UNK_02390144;
        uVar34 = g_02390140;
        uVar37 = uVar6 - 1;
        if ((int)uVar6 < 3) {
          puVar24 = *(void**)(local_40 + 0x10);
        }
        else {
          puVar8 = *(void**)(local_40 + 0x10);
          puVar24 = *(void**)(local_40 + 0x10);
          uVar25 = (uint64_t)uVar37;
          uVar36 = uVar25 - 1;
          uVar27 = 1;
          if ((7 < uVar36) && ((puVar8 + uVar25 + 1 <= puVar24 + 1 || (puVar24 + uVar25 <= puVar8)))
             ) {
            uVar35 = uVar36 & 0xfffffffffffffff8;
            uVar27 = uVar35 + 1;
            uVar31 = 0;
            do {
              pfVar3 = (float *)(puVar8 + uVar31 + 5);
              fVar47 = *pfVar3;
              fVar48 = pfVar3[1];
              fVar9 = pfVar3[2];
              fVar10 = pfVar3[3];
              pfVar3 = (float *)(puVar8 + uVar31);
              pfVar4 = (float *)(puVar8 + uVar31 + 1);
              pfVar5 = (float *)(puVar8 + uVar31 + 2);
              pfVar1 = (float *)(puVar8 + uVar31 + 4);
              fVar11 = *pfVar1;
              fVar12 = pfVar1[1];
              fVar13 = pfVar1[2];
              fVar14 = pfVar1[3];
              pfVar1 = (float *)(puVar8 + uVar31 + 6);
              fVar15 = *pfVar1;
              fVar16 = pfVar1[1];
              fVar17 = pfVar1[2];
              fVar18 = pfVar1[3];
              auVar43._0_4_ = (uint)(((*pfVar4 - *pfVar3) + (*pfVar5 - *pfVar4)) * fVar39) & uVar34;
              auVar43._4_4_ =
                   (uint)(((pfVar4[1] - pfVar3[1]) + (pfVar5[1] - pfVar4[1])) * fVar49) & uVar23;
              auVar43._8_4_ =
                   (uint)(((pfVar4[2] - pfVar3[2]) + (pfVar5[2] - pfVar4[2])) * fVar41) & uVar38;
              auVar43._12_4_ =
                   (uint)(((pfVar4[3] - pfVar3[3]) + (pfVar5[3] - pfVar4[3])) * fVar46) & uVar33;
              *(uint8_t (*) [16])(puVar24 + uVar31 + 1) = auVar43;
              puVar2 = puVar24 + uVar31 + 5;
              *puVar2 = (uint)(((fVar47 - fVar11) + (fVar15 - fVar47)) * fVar39) & uVar34;
              puVar2[1] = (uint)(((fVar48 - fVar12) + (fVar16 - fVar48)) * fVar49) & uVar23;
              puVar2[2] = (uint)(((fVar9 - fVar13) + (fVar17 - fVar9)) * fVar41) & uVar38;
              puVar2[3] = (uint)(((fVar10 - fVar14) + (fVar18 - fVar10)) * fVar46) & uVar33;
              uVar31 = uVar31 + 8;
            } while (uVar35 != uVar31);
            if (uVar36 == uVar35) goto LAB_0121f748;
          }
          uVar36 = uVar27;
          if ((uVar37 & 1) == 0) {
            uVar36 = uVar27 + 1;
            puVar24[uVar27] =
                 (uint)((((float)puVar8[uVar27 + 1] - (float)puVar8[uVar27]) +
                        ((float)puVar8[uVar27] - (float)puVar8[uVar27 - 1])) * g_0239011c) &
                 g_02390140;
          }
          uVar34 = g_02390140;
          fVar39 = g_0239011c;
          if (~uVar27 + uVar25 != 0) {
            do {
              puVar24[uVar36] =
                   (uint)((((float)puVar8[uVar36 + 1] - (float)puVar8[uVar36]) +
                          ((float)puVar8[uVar36] - (float)puVar8[uVar36 - 1])) * fVar39) & uVar34;
              puVar24[uVar36 + 1] =
                   (uint)((((float)puVar8[uVar36 + 2] - (float)puVar8[uVar36 + 1]) +
                          ((float)puVar8[uVar36 + 1] - (float)puVar8[uVar36])) * fVar39) & uVar34;
              uVar36 = uVar36 + 2;
            } while (uVar25 != uVar36);
          }
        }
LAB_0121f748:
        *puVar24 = puVar24[1];
        uVar36 = (uint64_t)(uVar6 - 2);
        puVar24[(int)uVar37] = puVar24[uVar36];
        if (8 < (int)uVar6) {
          uVar27 = 8;
          local_b0 = -8;
          local_b8 = 0;
          while( true ) {
            iVar21 = FUN_00e7d780((g_02390124 / ((float)puVar24[uVar27] + g_02390124)) *
                                  (float)(iVar20 * 2));
            uVar38 = (uint)uVar27;
            uVar23 = uVar38 - iVar21;
            uVar34 = 0;
            if (-1 < (int)uVar23) {
              uVar34 = uVar23;
            }
            uVar33 = uVar6;
            if ((int64_t)uVar27 <= (int64_t)uVar28) {
              uVar33 = uVar38;
            }
            fVar49 = 0.0;
            fVar39 = 0.0;
            if ((int)uVar34 < (int)uVar33) {
              lVar32 = *(int64_t *)(local_40 + 0x10);
              uVar25 = (uint64_t)uVar23;
              if ((int)uVar23 < 1) {
                uVar25 = 0;
              }
              uVar34 = uVar33 - (int)uVar25;
              uVar31 = ~uVar25;
              uVar35 = (uint64_t)uVar34 & 3;
              fVar46 = g_02391078;
              fVar47 = g_02391074;
              fVar39 = g_02391074;
              fVar41 = g_02391078;
              if ((uVar34 & 3) != 0) {
                do {
                  fVar39 = *(float *)(lVar32 + uVar25 * 4);
                  fVar41 = fVar39;
                  if (fVar46 <= fVar39) {
                    fVar41 = fVar46;
                  }
                  if (fVar39 <= fVar47) {
                    fVar39 = fVar47;
                  }
                  uVar25 = uVar25 + 1;
                  uVar35 = uVar35 - 1;
                  fVar46 = fVar41;
                  fVar47 = fVar39;
                } while (uVar35 != 0);
              }
              if (2 < uVar31 + (int64_t)(int)uVar33) {
                do {
                  fVar46 = *(float *)(lVar32 + uVar25 * 4);
                  fVar47 = *(float *)(lVar32 + 4 + uVar25 * 4);
                  fVar48 = fVar46;
                  if (fVar41 <= fVar46) {
                    fVar48 = fVar41;
                  }
                  if (fVar46 <= fVar39) {
                    fVar46 = fVar39;
                  }
                  fVar39 = fVar47;
                  if (fVar48 <= fVar47) {
                    fVar39 = fVar48;
                  }
                  if (fVar47 <= fVar46) {
                    fVar47 = fVar46;
                  }
                  fVar46 = *(float *)(lVar32 + 8 + uVar25 * 4);
                  fVar48 = fVar46;
                  if (fVar39 <= fVar46) {
                    fVar48 = fVar39;
                  }
                  if (fVar46 <= fVar47) {
                    fVar46 = fVar47;
                  }
                  fVar39 = *(float *)(lVar32 + 0xc + uVar25 * 4);
                  fVar41 = fVar39;
                  if (fVar48 <= fVar39) {
                    fVar41 = fVar48;
                  }
                  if (fVar39 <= fVar46) {
                    fVar39 = fVar46;
                  }
                  uVar25 = uVar25 + 4;
                } while ((int64_t)uVar25 < (int64_t)(int)uVar33);
              }
              fVar39 = fVar39 - fVar41;
            }
            uVar34 = iVar21 + uVar38;
            if ((int)uVar6 < (int)(iVar21 + uVar38)) {
              uVar34 = uVar6;
            }
            uVar25 = (uint64_t)(int)uVar34;
            if ((int64_t)uVar27 < (int64_t)uVar25) {
              lVar32 = *(int64_t *)(local_40 + 0x10);
              uVar31 = uVar27;
              fVar49 = g_02391074;
              fVar41 = g_02391078;
              if ((uVar25 & 3) != 0) {
                uVar34 = iVar21 + uVar38;
                if ((int)uVar6 < (int)(iVar21 + uVar38)) {
                  uVar34 = uVar6;
                }
                uVar31 = 0;
                fVar46 = g_02391074;
                fVar47 = g_02391078;
                do {
                  fVar49 = *(float *)(lVar32 + uVar27 * 4 + uVar31 * 4);
                  fVar41 = fVar49;
                  if (fVar47 <= fVar49) {
                    fVar41 = fVar47;
                  }
                  if (fVar49 <= fVar46) {
                    fVar49 = fVar46;
                  }
                  uVar31 = uVar31 + 1;
                  fVar46 = fVar49;
                  fVar47 = fVar41;
                } while ((uVar34 & 3) != uVar31);
                uVar31 = uVar31 - local_b0;
              }
              if (2 < local_b8 * -4 + -9 + uVar25) {
                do {
                  fVar46 = *(float *)(lVar32 + uVar31 * 4);
                  fVar47 = *(float *)(lVar32 + 4 + uVar31 * 4);
                  fVar48 = fVar46;
                  if (fVar41 <= fVar46) {
                    fVar48 = fVar41;
                  }
                  if (fVar46 <= fVar49) {
                    fVar46 = fVar49;
                  }
                  fVar49 = fVar47;
                  if (fVar48 <= fVar47) {
                    fVar49 = fVar48;
                  }
                  if (fVar47 <= fVar46) {
                    fVar47 = fVar46;
                  }
                  fVar46 = *(float *)(lVar32 + 8 + uVar31 * 4);
                  fVar48 = fVar46;
                  if (fVar49 <= fVar46) {
                    fVar48 = fVar49;
                  }
                  if (fVar46 <= fVar47) {
                    fVar46 = fVar47;
                  }
                  fVar49 = *(float *)(lVar32 + 0xc + uVar31 * 4);
                  fVar41 = fVar49;
                  if (fVar48 <= fVar49) {
                    fVar41 = fVar48;
                  }
                  if (fVar49 <= fVar46) {
                    fVar49 = fVar46;
                  }
                  uVar31 = uVar31 + 4;
                } while ((int64_t)uVar31 < (int64_t)uVar25);
              }
              fVar49 = fVar49 - fVar41;
            }
            if (fVar39 <= fVar49) {
              fVar49 = fVar39;
            }
            fVar49 = fVar49 * g_024112a4;
            FUN_00c8e2b0();
            if ((local_38 == '\0') && (local_40 != 0)) {
              FUN_00d50b00();
            }
            FUN_00c92170();
            FUN_00c92160();
            (**(code **)(g_02786500 + 0x20))(fVar49 * g_0239011c);
            if ((int64_t)(uVar27 - 8) < (int64_t)uVar28) {
              *(float *)(*(int64_t *)(local_40 + 0x10) + -0x20 + uVar27 * 4) =
                   **(float **)(local_40 + 0x10) +
                   *(float *)(*(int64_t *)(local_40 + 0x10) + -0x20 + uVar27 * 4);
            }
            if ((int64_t)(uVar27 - 7) < (int64_t)uVar28) {
              *(float *)(*(int64_t *)(local_40 + 0x10) + -0x1c + uVar27 * 4) =
                   *(float *)(*(int64_t *)(local_40 + 0x10) + 4) +
                   *(float *)(*(int64_t *)(local_40 + 0x10) + -0x1c + uVar27 * 4);
            }
            if ((int64_t)(uVar27 - 6) < (int64_t)uVar28) {
              *(float *)(*(int64_t *)(local_40 + 0x10) + -0x18 + uVar27 * 4) =
                   *(float *)(*(int64_t *)(local_40 + 0x10) + 8) +
                   *(float *)(*(int64_t *)(local_40 + 0x10) + -0x18 + uVar27 * 4);
            }
            if ((int64_t)(uVar27 - 5) < (int64_t)uVar28) {
              *(float *)(*(int64_t *)(local_40 + 0x10) + -0x14 + uVar27 * 4) =
                   *(float *)(*(int64_t *)(local_40 + 0x10) + 0xc) +
                   *(float *)(*(int64_t *)(local_40 + 0x10) + -0x14 + uVar27 * 4);
            }
            if ((-1 < (int)(uVar38 - 4)) && ((int)(uVar38 - 4) < (int)uVar6)) {
              *(float *)(*(int64_t *)(local_40 + 0x10) + -0x10 + uVar27 * 4) =
                   *(float *)(*(int64_t *)(local_40 + 0x10) + 0x10) +
                   *(float *)(*(int64_t *)(local_40 + 0x10) + -0x10 + uVar27 * 4);
            }
            if ((-1 < (int)(uVar38 - 3)) && ((int)(uVar38 - 3) < (int)uVar6)) {
              *(float *)(*(int64_t *)(local_40 + 0x10) + -0xc + uVar27 * 4) =
                   *(float *)(*(int64_t *)(local_40 + 0x10) + 0x14) +
                   *(float *)(*(int64_t *)(local_40 + 0x10) + -0xc + uVar27 * 4);
            }
            if ((-1 < (int)(uVar38 - 2)) && ((int)(uVar38 - 2) < (int)uVar6)) {
              *(float *)(*(int64_t *)(local_40 + 0x10) + -8 + uVar27 * 4) =
                   *(float *)(*(int64_t *)(local_40 + 0x10) + 0x18) +
                   *(float *)(*(int64_t *)(local_40 + 0x10) + -8 + uVar27 * 4);
            }
            if ((int64_t)uVar27 <= (int64_t)uVar28) {
              *(float *)(*(int64_t *)(local_40 + 0x10) + -4 + uVar27 * 4) =
                   *(float *)(*(int64_t *)(local_40 + 0x10) + 0x1c) +
                   *(float *)(*(int64_t *)(local_40 + 0x10) + -4 + uVar27 * 4);
            }
            if ((int64_t)uVar27 < (int64_t)uVar28) {
              *(float *)(*(int64_t *)(local_40 + 0x10) + uVar27 * 4) =
                   *(float *)(*(int64_t *)(local_40 + 0x10) + 0x20) +
                   *(float *)(*(int64_t *)(local_40 + 0x10) + uVar27 * 4);
            }
            if ((int64_t)(uVar27 | 1) < (int64_t)uVar28) {
              *(float *)(*(int64_t *)(local_40 + 0x10) + (uVar27 | 1) * 4) =
                   *(float *)(*(int64_t *)(local_40 + 0x10) + 0x24) +
                   *(float *)(*(int64_t *)(local_40 + 0x10) + (uVar27 | 1) * 4);
            }
            if ((int64_t)(uVar27 | 2) < (int64_t)uVar28) {
              *(float *)(*(int64_t *)(local_40 + 0x10) + (uVar27 | 2) * 4) =
                   *(float *)(*(int64_t *)(local_40 + 0x10) + 0x28) +
                   *(float *)(*(int64_t *)(local_40 + 0x10) + (uVar27 | 2) * 4);
            }
            if ((int64_t)(uVar27 | 3) < (int64_t)uVar28) {
              *(float *)(*(int64_t *)(local_40 + 0x10) + (uVar27 | 3) * 4) =
                   *(float *)(*(int64_t *)(local_40 + 0x10) + 0x2c) +
                   *(float *)(*(int64_t *)(local_40 + 0x10) + (uVar27 | 3) * 4);
            }
            if ((-1 < (int)(uVar38 + 4)) && (lVar32 = uVar27 + 4, (int)lVar32 < (int)uVar6)) {
              *(float *)(*(int64_t *)(local_40 + 0x10) + lVar32 * 4) =
                   *(float *)(*(int64_t *)(local_40 + 0x10) + 0x30) +
                   *(float *)(*(int64_t *)(local_40 + 0x10) + lVar32 * 4);
            }
            uVar27 = uVar27 + 4;
            if ((-1 < (int)(uVar38 + 5)) && ((int)(uVar38 + 5) < (int)uVar6)) {
              *(float *)(*(int64_t *)(local_40 + 0x10) + 4 + uVar27 * 4) =
                   *(float *)(*(int64_t *)(local_40 + 0x10) + 0x34) +
                   *(float *)(*(int64_t *)(local_40 + 0x10) + 4 + uVar27 * 4);
            }
            if ((-1 < (int)(uVar38 + 6)) && ((int)(uVar38 + 6) < (int)uVar6)) {
              *(float *)(*(int64_t *)(local_40 + 0x10) + 8 + uVar27 * 4) =
                   *(float *)(*(int64_t *)(local_40 + 0x10) + 0x38) +
                   *(float *)(*(int64_t *)(local_40 + 0x10) + 8 + uVar27 * 4);
            }
            if ((-1 < (int)(uVar38 + 7)) && ((int)(uVar38 + 7) < (int)uVar6)) {
              *(float *)(*(int64_t *)(local_40 + 0x10) + 0xc + uVar27 * 4) =
                   *(float *)(*(int64_t *)(local_40 + 0x10) + 0x3c) +
                   *(float *)(*(int64_t *)(local_40 + 0x10) + 0xc + uVar27 * 4);
            }
            if ((-1 < (int)(uVar38 + 8)) && ((int)(uVar38 + 8) < (int)uVar6)) {
              *(float *)(*(int64_t *)(local_40 + 0x10) + 0x10 + uVar27 * 4) =
                   *(float *)(*(int64_t *)(local_40 + 0x10) + 0x40) +
                   *(float *)(*(int64_t *)(local_40 + 0x10) + 0x10 + uVar27 * 4);
            }
            FUN_00d50b20();
            if ((int)uVar6 <= (int)uVar27) break;
            puVar24 = *(void**)(local_40 + 0x10);
            local_b8 = local_b8 + 1;
            local_b0 = local_b0 + -4;
          }
        }
        fVar39 = g_0239425c;
        lVar32 = *(int64_t *)(local_40 + 0x10);
        lVar7 = *(int64_t *)(local_40 + 0x10);
        if (uVar29 < 3) {
          uVar28 = 0;
        }
        else {
          uVar28 = 0;
          do {
            fVar49 = *(float *)(lVar32 + uVar28 * 4);
            fVar41 = fVar39;
            if (fVar39 <= fVar49) {
              fVar41 = fVar49;
            }
            *(float *)(*(int64_t *)(lVar7 + uVar28 * 8) + 0x34) = fVar41;
            fVar49 = *(float *)(lVar32 + 4 + uVar28 * 4);
            fVar41 = fVar39;
            if (fVar39 <= fVar49) {
              fVar41 = fVar49;
            }
            *(float *)(*(int64_t *)(lVar7 + 8 + uVar28 * 8) + 0x34) = fVar41;
            fVar49 = *(float *)(lVar32 + 8 + uVar28 * 4);
            fVar41 = fVar39;
            if (fVar39 <= fVar49) {
              fVar41 = fVar49;
            }
            *(float *)(*(int64_t *)(lVar7 + 0x10 + uVar28 * 8) + 0x34) = fVar41;
            fVar49 = *(float *)(lVar32 + 0xc + uVar28 * 4);
            fVar41 = fVar39;
            if (fVar39 <= fVar49) {
              fVar41 = fVar49;
            }
            *(float *)(*(int64_t *)(lVar7 + 0x18 + uVar28 * 8) + 0x34) = fVar41;
            uVar28 = uVar28 + 4;
          } while ((uVar6 & 0xfffffffc) != uVar28);
        }
        if ((uVar6 & 3) != 0) {
          uVar27 = 0;
          do {
            fVar49 = *(float *)(lVar32 + uVar28 * 4 + uVar27 * 4);
            fVar41 = fVar39;
            if (fVar39 <= fVar49) {
              fVar41 = fVar49;
            }
            *(float *)(*(int64_t *)(lVar7 + uVar28 * 8 + uVar27 * 8) + 0x34) = fVar41;
            uVar27 = uVar27 + 1;
          } while (uVar26 != uVar27);
        }
        FUN_00c8e690();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        FUN_00c92160();
        ___bzero();
        fVar46 = _UNK_02411e1c;
        fVar41 = _UNK_02411e18;
        fVar49 = _UNK_02411e14;
        fVar39 = g_02411e10;
        auVar19 = g_0240ce60;
        auVar43 = g_0240ce50;
        if ((int)uVar6 < 5) {
          puVar24 = *(void**)(local_40 + 0x10);
        }
        else {
          lVar32 = *(int64_t *)(local_40 + 0x10);
          puVar24 = *(void**)(local_40 + 0x10);
          uVar28 = uVar36 - 2;
          uVar27 = 2;
          fVar47 = g_0240cdd8;
          fVar48 = g_023b36b0;
          fVar9 = g_0239011c;
          if ((3 < uVar28) &&
             (((void*)(lVar32 + uVar36 * 4 + 4) <= puVar24 + 2 ||
              (puVar24 + uVar36 <= (void*)(lVar32 + 4U))))) {
            uVar31 = uVar28 & 0xfffffffffffffffc;
            uVar27 = uVar31 + 2;
            uVar25 = 0;
            do {
              pfVar3 = (float *)(lVar32 + 4 + uVar25 * 4);
              pfVar4 = (float *)(lVar32 + 8 + uVar25 * 4);
              pfVar5 = (float *)(lVar32 + 0xc + uVar25 * 4);
              auVar44._0_4_ = *pfVar5 - *pfVar4;
              auVar44._4_4_ = pfVar5[1] - pfVar4[1];
              auVar44._8_4_ = pfVar5[2] - pfVar4[2];
              auVar44._12_4_ = pfVar5[3] - pfVar4[3];
              auVar40._0_4_ = *pfVar4 - *pfVar3;
              auVar40._4_4_ = pfVar4[1] - pfVar3[1];
              auVar40._8_4_ = pfVar4[2] - pfVar3[2];
              auVar40._12_4_ = pfVar4[3] - pfVar3[3];
              auVar40 = minps(auVar43,auVar40);
              auVar42 = maxps(auVar19,auVar40);
              auVar40 = minps(auVar43,auVar44);
              auVar40 = maxps(auVar19,auVar40);
              auVar45._0_4_ = (auVar40._0_4_ + auVar42._0_4_) * fVar39;
              auVar45._4_4_ = (auVar40._4_4_ + auVar42._4_4_) * fVar49;
              auVar45._8_4_ = (auVar40._8_4_ + auVar42._8_4_) * fVar41;
              auVar45._12_4_ = (auVar40._12_4_ + auVar42._12_4_) * fVar46;
              *(uint8_t (*) [16])(puVar24 + uVar25 + 2) = auVar45;
              uVar25 = uVar25 + 4;
            } while (uVar31 != uVar25);
            fVar47 = g_0240cdd8;
            fVar48 = g_023b36b0;
            fVar9 = g_0239011c;
            if (uVar28 == uVar31) goto LAB_01220007;
          }
          do {
            fVar39 = *(float *)(lVar32 + uVar27 * 4);
            fVar41 = *(float *)(lVar32 + 4 + uVar27 * 4) - fVar39;
            fVar39 = fVar39 - *(float *)(lVar32 + -4 + uVar27 * 4);
            fVar49 = fVar48;
            if (fVar39 <= fVar48) {
              fVar49 = fVar39;
            }
            fVar39 = fVar47;
            if (fVar47 <= fVar49) {
              fVar39 = fVar49;
            }
            fVar49 = fVar48;
            if (fVar41 <= fVar48) {
              fVar49 = fVar41;
            }
            fVar41 = fVar47;
            if (fVar47 <= fVar49) {
              fVar41 = fVar49;
            }
            puVar24[uVar27] = (fVar41 + fVar39) * fVar9;
            uVar27 = uVar27 + 1;
          } while (uVar36 != uVar27);
        }
LAB_01220007:
        puVar24[1] = puVar24[2];
        puVar24[uVar36] = puVar24[uVar6 - 3];
        *puVar24 = puVar24[1];
        puVar24[(int)uVar37] = puVar24[uVar36];
        FUN_015c15b0(1);
        lVar32 = *(int64_t *)(local_40 + 0x10);
        lVar7 = *(int64_t *)(local_40 + 0x10);
        if (uVar29 < 3) {
          uVar28 = 0;
        }
        else {
          uVar28 = 0;
          do {
            *(void*)(*(int64_t *)(lVar7 + uVar28 * 8) + 0x30) =
                 *(void*)(lVar32 + uVar28 * 4);
            *(void*)(*(int64_t *)(lVar7 + 8 + uVar28 * 8) + 0x30) =
                 *(void*)(lVar32 + 4 + uVar28 * 4);
            *(void*)(*(int64_t *)(lVar7 + 0x10 + uVar28 * 8) + 0x30) =
                 *(void*)(lVar32 + 8 + uVar28 * 4);
            *(void*)(*(int64_t *)(lVar7 + 0x18 + uVar28 * 8) + 0x30) =
                 *(void*)(lVar32 + 0xc + uVar28 * 4);
            uVar28 = uVar28 + 4;
          } while ((uVar6 & 0xfffffffc) != uVar28);
        }
        if ((uVar6 & 3) != 0) {
          uVar29 = 0;
          do {
            *(void*)(*(int64_t *)(lVar7 + uVar28 * 8 + uVar29 * 8) + 0x30) =
                 *(void*)(lVar32 + uVar28 * 4 + uVar29 * 4);
            uVar29 = uVar29 + 1;
          } while (uVar26 != uVar29);
        }
        if (local_40 != 0) {
          FUN_00d50b20();
          FUN_00d50b20();
          FUN_00d50b20();
          FUN_00d50b20();
          FUN_00d50b20();
          goto LAB_01220157;
        }
      }
      if (lVar22 != 0) {
        FUN_00d50b20();
      }
      lVar30 = lVar30 + 1;
      lVar22 = *this_ptr;
    } while (lVar30 < *(int *)(lVar22 + 0xc));
  }
  return;
}

