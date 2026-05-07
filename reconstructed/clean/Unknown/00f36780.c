// Function: FUN_00f36780
// Address: 00f36780
// Size: 2371 bytes
// Class: Unknown

int64_t FUN_00f36780(int *param_1,int *param_2,uint param_3,int *param_4)

{
  void*puVar1;
  void*puVar2;
  void*puVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  int iVar7;
  int iVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int iVar12;
  int *piVar13;
  int64_t lVar14;
  int *piVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  int64_t lVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  uint64_t uVar23;
  void*puVar24;
  int *arg1;
  uint64_t uVar25;
  int64_t lVar26;
  uint64_t uVar27;
  uint64_t uVar28;
  uint uVar29;
  uint uVar30;
  uint64_t uVar31;
  int64_t lVar32;
  int64_t lVar33;
  uint uVar34;
  int64_t local_60;
  
  piVar15 = arg1;
  if (param_1 == (int *)0x0) {
    uVar29 = 0;
  }
  else {
    uVar29 = 0xffffffff;
    piVar13 = param_1;
    do {
      uVar29 = uVar29 + 1;
      iVar12 = *piVar13;
      piVar13 = piVar13 + 1;
    } while (-1 < iVar12);
  }
  do {
    iVar12 = *piVar15;
    piVar13 = param_2;
    piVar15 = piVar15 + 0xe;
  } while (-1 < iVar12);
  do {
    iVar12 = *piVar13;
    piVar13 = piVar13 + 0xe;
  } while (-1 < iVar12);
  lVar14 = FUN_00f3f480(1,0);
  local_60 = 0;
  if (lVar14 != 0) {
    iVar12 = *arg1;
    uVar17 = 0;
    if (-1 < iVar12) {
      uVar16 = (uint64_t)uVar29;
      uVar21 = (uint64_t)(uVar29 & 0xfffffff8);
      uVar22 = (uVar21 - 8 >> 3) + 1;
      uVar28 = (uint64_t)((uint)uVar22 & 3);
      uVar17 = 0;
      do {
        lVar32 = uVar17 * 0x38;
        *(int *)(lVar14 + lVar32) = iVar12;
        *(int *)(lVar14 + 4 + lVar32) = arg1[uVar17 * 0xe + 1];
        *(int *)(lVar14 + 8 + lVar32) = arg1[uVar17 * 0xe + 2];
        *(uint *)(lVar14 + 0x18 + lVar32) = arg1[uVar17 * 0xe + 6] | param_3;
        *(int *)(lVar14 + 0x1c + lVar32) = arg1[uVar17 * 0xe + 7];
        *(void*)(lVar14 + 0x20 + lVar32) = *(void*)(arg1 + uVar17 * 0xe + 8);
        *(int *)(lVar14 + 0x28 + lVar32) = arg1[uVar17 * 0xe + 10];
        piVar15 = *(int **)(arg1 + uVar17 * 0xe + 4);
        if (piVar15 == (int *)0x0 && param_1 == (int *)0x0) {
          *(void*)(lVar14 + 0x10 + lVar32) = 0;
          lVar33 = *(int64_t *)(arg1 + uVar17 * 0xe + 0xc);
        }
        else {
          if (piVar15 == (int *)0x0) {
            uVar34 = 0;
          }
          else {
            uVar34 = 0xffffffff;
            do {
              uVar34 = uVar34 + 1;
              iVar12 = *piVar15;
              piVar15 = piVar15 + 1;
            } while (-1 < iVar12);
          }
          uVar20 = FUN_00f3f480(0,0,(uint64_t)(uVar29 + 1 + uVar34) << 2);
          if (uVar20 == 0) {
            return 0;
          }
          uVar31 = (uint64_t)uVar34;
          if (uVar34 != 0) {
            uVar23 = *(uint64_t *)(arg1 + uVar17 * 0xe + 4);
            if ((uVar34 < 8) || ((uVar20 < uVar23 + uVar31 * 4 && (uVar23 < uVar20 + uVar31 * 4))))
            {
              uVar25 = 0;
            }
            else {
              uVar25 = (uint64_t)(uVar34 & 0xfffffff8);
              uVar18 = (uVar25 - 8 >> 3) + 1;
              uVar27 = (uint64_t)((uint)uVar18 & 3);
              if (uVar25 - 8 < 0x18) {
                lVar33 = 0;
              }
              else {
                lVar26 = -(uVar18 & 0xfffffffffffffffc);
                lVar33 = 0;
                do {
                  puVar24 = (void*)(uVar23 + lVar33 * 4);
                  uVar9 = puVar24[1];
                  puVar3 = (void*)(uVar23 + 0x10 + lVar33 * 4);
                  uVar10 = *puVar3;
                  uVar11 = puVar3[1];
                  puVar3 = (void*)(uVar20 + lVar33 * 4);
                  *puVar3 = *puVar24;
                  puVar3[1] = uVar9;
                  puVar24 = (void*)(uVar20 + 0x10 + lVar33 * 4);
                  *puVar24 = uVar10;
                  puVar24[1] = uVar11;
                  puVar24 = (void*)(uVar23 + 0x20 + lVar33 * 4);
                  uVar9 = puVar24[1];
                  puVar3 = (void*)(uVar23 + 0x30 + lVar33 * 4);
                  uVar10 = *puVar3;
                  uVar11 = puVar3[1];
                  puVar3 = (void*)(uVar20 + 0x20 + lVar33 * 4);
                  *puVar3 = *puVar24;
                  puVar3[1] = uVar9;
                  puVar24 = (void*)(uVar20 + 0x30 + lVar33 * 4);
                  *puVar24 = uVar10;
                  puVar24[1] = uVar11;
                  puVar24 = (void*)(uVar23 + 0x40 + lVar33 * 4);
                  uVar9 = puVar24[1];
                  puVar3 = (void*)(uVar23 + 0x50 + lVar33 * 4);
                  uVar10 = *puVar3;
                  uVar11 = puVar3[1];
                  puVar3 = (void*)(uVar20 + 0x40 + lVar33 * 4);
                  *puVar3 = *puVar24;
                  puVar3[1] = uVar9;
                  puVar24 = (void*)(uVar20 + 0x50 + lVar33 * 4);
                  *puVar24 = uVar10;
                  puVar24[1] = uVar11;
                  puVar1 = (void*)(uVar23 + 0x60 + lVar33 * 4);
                  uVar4 = puVar1[1];
                  uVar5 = puVar1[2];
                  uVar6 = puVar1[3];
                  puVar24 = (void*)(uVar23 + 0x70 + lVar33 * 4);
                  uVar9 = *puVar24;
                  uVar10 = puVar24[1];
                  puVar2 = (void*)(uVar20 + 0x60 + lVar33 * 4);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar4;
                  puVar2[2] = uVar5;
                  puVar2[3] = uVar6;
                  puVar24 = (void*)(uVar20 + 0x70 + lVar33 * 4);
                  *puVar24 = uVar9;
                  puVar24[1] = uVar10;
                  lVar33 = lVar33 + 0x20;
                  lVar26 = lVar26 + 4;
                } while (lVar26 != 0);
              }
              if (uVar27 != 0) {
                lVar26 = uVar20 + lVar33 * 4;
                lVar33 = uVar23 + lVar33 * 4;
                lVar19 = 0;
                do {
                  puVar1 = (void*)(lVar33 + lVar19);
                  uVar4 = puVar1[1];
                  uVar5 = puVar1[2];
                  uVar6 = puVar1[3];
                  puVar24 = (void*)(lVar33 + 0x10 + lVar19);
                  uVar9 = *puVar24;
                  uVar10 = puVar24[1];
                  puVar2 = (void*)(lVar26 + lVar19);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar4;
                  puVar2[2] = uVar5;
                  puVar2[3] = uVar6;
                  puVar24 = (void*)(lVar26 + 0x10 + lVar19);
                  *puVar24 = uVar9;
                  puVar24[1] = uVar10;
                  lVar19 = lVar19 + 0x20;
                } while (uVar27 << 5 != lVar19);
              }
              if (uVar25 == uVar31) goto LAB_00f36c00;
            }
            uVar18 = ~uVar25;
            uVar27 = uVar31 & 3;
            if ((uVar34 & 3) != 0) {
              do {
                *(void*)(uVar20 + uVar25 * 4) = *(void*)(uVar23 + uVar25 * 4);
                uVar25 = uVar25 + 1;
                uVar27 = uVar27 - 1;
              } while (uVar27 != 0);
            }
            if (2 < uVar18 + uVar31) {
              do {
                *(void*)(uVar20 + uVar25 * 4) = *(void*)(uVar23 + uVar25 * 4);
                *(void*)(uVar20 + 4 + uVar25 * 4) = *(void*)(uVar23 + 4 + uVar25 * 4);
                *(void*)(uVar20 + 8 + uVar25 * 4) = *(void*)(uVar23 + 8 + uVar25 * 4);
                *(void*)(uVar20 + 0xc + uVar25 * 4) =
                     *(void*)(uVar23 + 0xc + uVar25 * 4);
                uVar25 = uVar25 + 4;
              } while (uVar31 != uVar25);
            }
          }
LAB_00f36c00:
          if (uVar29 != 0) {
            if ((uVar29 < 8) ||
               (((int *)(uVar20 + uVar31 * 4) < param_1 + uVar16 &&
                (param_1 < (int *)(uVar20 + (uVar31 + uVar16) * 4))))) {
              uVar23 = 0;
            }
            else {
              if (uVar21 - 8 < 0x18) {
                lVar19 = 0;
              }
              else {
                lVar33 = uVar20 + uVar31 * 4;
                lVar19 = 0;
                lVar26 = -(uVar22 & 0xfffffffffffffffc);
                do {
                  uVar9 = *(void*)(param_1 + lVar19 + 2);
                  uVar10 = *(void*)(param_1 + lVar19 + 4);
                  uVar11 = *(void*)(param_1 + lVar19 + 4 + 2);
                  puVar24 = (void*)(lVar33 + lVar19 * 4);
                  *puVar24 = *(void*)(param_1 + lVar19);
                  puVar24[1] = uVar9;
                  puVar24 = (void*)(lVar33 + 0x10 + lVar19 * 4);
                  *puVar24 = uVar10;
                  puVar24[1] = uVar11;
                  uVar9 = *(void*)(param_1 + lVar19 + 8 + 2);
                  uVar10 = *(void*)(param_1 + lVar19 + 0xc);
                  uVar11 = *(void*)(param_1 + lVar19 + 0xc + 2);
                  puVar24 = (void*)(lVar33 + 0x20 + lVar19 * 4);
                  *puVar24 = *(void*)(param_1 + lVar19 + 8);
                  puVar24[1] = uVar9;
                  puVar24 = (void*)(lVar33 + 0x30 + lVar19 * 4);
                  *puVar24 = uVar10;
                  puVar24[1] = uVar11;
                  uVar9 = *(void*)(param_1 + lVar19 + 0x10 + 2);
                  uVar10 = *(void*)(param_1 + lVar19 + 0x14);
                  uVar11 = *(void*)(param_1 + lVar19 + 0x14 + 2);
                  puVar24 = (void*)(lVar33 + 0x40 + lVar19 * 4);
                  *puVar24 = *(void*)(param_1 + lVar19 + 0x10);
                  puVar24[1] = uVar9;
                  puVar24 = (void*)(lVar33 + 0x50 + lVar19 * 4);
                  *puVar24 = uVar10;
                  puVar24[1] = uVar11;
                  piVar15 = param_1 + lVar19 + 0x18;
                  iVar12 = piVar15[1];
                  iVar7 = piVar15[2];
                  iVar8 = piVar15[3];
                  uVar9 = *(void*)(param_1 + lVar19 + 0x1c);
                  uVar10 = *(void*)(param_1 + lVar19 + 0x1c + 2);
                  piVar13 = (int *)(lVar33 + 0x60 + lVar19 * 4);
                  *piVar13 = *piVar15;
                  piVar13[1] = iVar12;
                  piVar13[2] = iVar7;
                  piVar13[3] = iVar8;
                  puVar24 = (void*)(lVar33 + 0x70 + lVar19 * 4);
                  *puVar24 = uVar9;
                  puVar24[1] = uVar10;
                  lVar19 = lVar19 + 0x20;
                  lVar26 = lVar26 + 4;
                } while (lVar26 != 0);
              }
              if (uVar28 != 0) {
                lVar33 = uVar20 + (lVar19 + uVar31) * 4;
                lVar26 = 0;
                do {
                  puVar1 = (void*)((int64_t)param_1 + lVar26 + lVar19 * 4);
                  uVar4 = puVar1[1];
                  uVar5 = puVar1[2];
                  uVar6 = puVar1[3];
                  puVar24 = (void*)((int64_t)param_1 + lVar26 + lVar19 * 4 + 0x10);
                  uVar9 = *puVar24;
                  uVar10 = puVar24[1];
                  puVar2 = (void*)(lVar33 + lVar26);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar4;
                  puVar2[2] = uVar5;
                  puVar2[3] = uVar6;
                  puVar24 = (void*)(lVar33 + 0x10 + lVar26);
                  *puVar24 = uVar9;
                  puVar24[1] = uVar10;
                  lVar26 = lVar26 + 0x20;
                } while (uVar28 << 5 != lVar26);
              }
              uVar23 = uVar21;
              if (uVar21 == uVar16) goto LAB_00f36da0;
            }
            uVar25 = ~uVar23;
            if ((uint64_t)(uVar29 & 3) != 0) {
              uVar18 = (uint64_t)(uVar29 & 3);
              do {
                *(int *)(uVar20 + uVar31 * 4 + uVar23 * 4) = param_1[uVar23];
                uVar23 = uVar23 + 1;
                uVar18 = uVar18 - 1;
              } while (uVar18 != 0);
            }
            if (2 < uVar25 + uVar16) {
              lVar33 = uVar20 + uVar31 * 4;
              do {
                *(int *)(lVar33 + uVar23 * 4) = param_1[uVar23];
                *(int *)(lVar33 + 4 + uVar23 * 4) = param_1[uVar23 + 1];
                *(int *)(lVar33 + 8 + uVar23 * 4) = param_1[uVar23 + 2];
                *(int *)(lVar33 + 0xc + uVar23 * 4) = param_1[uVar23 + 3];
                uVar23 = uVar23 + 4;
              } while (uVar16 != uVar23);
            }
          }
LAB_00f36da0:
          *(void*)(uVar20 + (uint64_t)(uVar34 + uVar29) * 4) = 0xffffffff;
          *(uint64_t *)(lVar14 + 0x10 + lVar32) = uVar20;
          lVar33 = *(int64_t *)(arg1 + uVar17 * 0xe + 0xc);
        }
        if (lVar33 != 0) {
          *(int64_t *)(lVar14 + 0x30 + lVar32) = lVar33;
        }
        if (param_4 != (int *)0x0) {
          puVar24 = (void*)(lVar14 + lVar32 + 0x30);
          if (*(int64_t *)(lVar14 + 0x30 + lVar32) == 0) {
            *puVar24 = param_4;
          }
          else {
            piVar15 = (int *)FUN_00f3f480(0,0);
            *puVar24 = piVar15;
            if (piVar15 == (int *)0x0) {
              return 0;
            }
            if (*param_4 != -1) {
              *piVar15 = *param_4;
            }
            if (param_4[1] != -1) {
              piVar15[1] = param_4[1];
            }
            if (param_4[2] != -1) {
              piVar15[2] = param_4[2];
            }
            if (param_4[3] != -1) {
              piVar15[3] = param_4[3];
            }
            if (param_4[4] != -1) {
              piVar15[4] = param_4[4];
            }
            if (param_4[5] != -1) {
              piVar15[5] = param_4[5];
            }
            if (param_4[6] != -1) {
              piVar15[6] = param_4[6];
            }
            if (param_4[7] != -1) {
              piVar15[7] = param_4[7];
            }
            if (param_4[8] != -1) {
              piVar15[8] = param_4[8];
            }
          }
        }
        uVar17 = uVar17 + 1;
        iVar12 = arg1[uVar17 * 0xe];
      } while (-1 < iVar12);
    }
    iVar12 = *param_2;
    if (iVar12 < 0) {
      lVar32 = 0;
    }
    else {
      lVar32 = 0;
      do {
        lVar33 = ((uVar17 & 0xffffffff) + lVar32) * 0x38;
        *(int *)(lVar14 + lVar33) = iVar12;
        *(int *)(lVar14 + 4 + lVar33) = param_2[lVar32 * 0xe + 1];
        *(int *)(lVar14 + 8 + lVar33) = param_2[lVar32 * 0xe + 2];
        *(int *)(lVar14 + 0x18 + lVar33) = param_2[lVar32 * 0xe + 6];
        *(int *)(lVar14 + 0x1c + lVar33) = param_2[lVar32 * 0xe + 7];
        *(void*)(lVar14 + 0x20 + lVar33) = *(void*)(param_2 + lVar32 * 0xe + 8);
        *(int *)(lVar14 + 0x28 + lVar33) = param_2[lVar32 * 0xe + 10];
        if (*(int64_t *)(param_2 + lVar32 * 0xe + 4) == 0) {
          *(void*)(lVar14 + 0x10 + lVar33) = 0;
          lVar26 = *(int64_t *)(param_2 + lVar32 * 0xe + 0xc);
        }
        else {
          iVar12 = 1;
          lVar26 = 0;
          uVar29 = 0;
          do {
            uVar34 = uVar29;
            iVar12 = iVar12 + -1;
            piVar15 = (int *)(*(int64_t *)(param_2 + lVar32 * 0xe + 4) + lVar26);
            lVar26 = lVar26 + 4;
            uVar29 = uVar34 + 1;
          } while (-1 < *piVar15);
          uVar16 = FUN_00f3f480(0,0);
          if (uVar16 == 0) {
            return 0;
          }
          if (iVar12 == 0) {
            uVar29 = 0;
          }
          else {
            uVar29 = -iVar12;
            uVar21 = *(uint64_t *)(param_2 + lVar32 * 0xe + 4);
            uVar22 = (uint64_t)uVar29;
            if ((uVar22 < 8) || ((uVar16 < uVar21 + uVar22 * 4 && (uVar21 < uVar16 + uVar22 * 4))))
            {
              uVar28 = 0;
            }
            else {
              uVar28 = uVar22 - (uVar29 & 7);
              lVar26 = 0;
              do {
                puVar1 = (void*)(uVar21 + lVar26 * 4);
                uVar4 = puVar1[1];
                uVar5 = puVar1[2];
                uVar6 = puVar1[3];
                puVar24 = (void*)(uVar21 + 0x10 + lVar26 * 4);
                uVar9 = *puVar24;
                uVar10 = puVar24[1];
                puVar2 = (void*)(uVar16 + lVar26 * 4);
                *puVar2 = *puVar1;
                puVar2[1] = uVar4;
                puVar2[2] = uVar5;
                puVar2[3] = uVar6;
                puVar24 = (void*)(uVar16 + 0x10 + lVar26 * 4);
                *puVar24 = uVar9;
                puVar24[1] = uVar10;
                lVar26 = lVar26 + 8;
              } while ((uint64_t)uVar34 - (uint64_t)(uVar34 & 7) != lVar26);
              if ((uint64_t)(uVar29 & 7) == 0) goto LAB_00f36f8b;
            }
            uVar30 = -(iVar12 + (int)uVar28);
            uVar20 = ~uVar28;
            uVar31 = (uint64_t)uVar30 & 3;
            if ((uVar30 & 3) != 0) {
              do {
                *(void*)(uVar16 + uVar28 * 4) = *(void*)(uVar21 + uVar28 * 4);
                uVar28 = uVar28 + 1;
                uVar31 = uVar31 - 1;
              } while (uVar31 != 0);
            }
            if (2 < uVar22 + uVar20) {
              do {
                *(void*)(uVar16 + uVar28 * 4) = *(void*)(uVar21 + uVar28 * 4);
                *(void*)(uVar16 + 4 + uVar28 * 4) = *(void*)(uVar21 + 4 + uVar28 * 4);
                *(void*)(uVar16 + 8 + uVar28 * 4) = *(void*)(uVar21 + 8 + uVar28 * 4);
                *(void*)(uVar16 + 0xc + uVar28 * 4) =
                     *(void*)(uVar21 + 0xc + uVar28 * 4);
                uVar28 = uVar28 + 4;
              } while (uVar34 != uVar28);
            }
          }
LAB_00f36f8b:
          *(void*)(uVar16 + (uint64_t)uVar29 * 4) = 0xffffffff;
          *(uint64_t *)(lVar14 + 0x10 + lVar33) = uVar16;
          lVar26 = *(int64_t *)(param_2 + lVar32 * 0xe + 0xc);
        }
        if (lVar26 != 0) {
          *(int64_t *)(lVar14 + 0x30 + lVar33) = lVar26;
        }
        if (param_4 != (int *)0x0) {
          puVar24 = (void*)(lVar14 + lVar33 + 0x30);
          if (*(int64_t *)(lVar14 + 0x30 + lVar33) == 0) {
            *puVar24 = param_4;
          }
          else {
            piVar15 = (int *)FUN_00f3f480(0,0);
            *puVar24 = piVar15;
            if (piVar15 == (int *)0x0) {
              return 0;
            }
            if (*param_4 != -1) {
              *piVar15 = *param_4;
            }
            if (param_4[1] != -1) {
              piVar15[1] = param_4[1];
            }
            if (param_4[2] != -1) {
              piVar15[2] = param_4[2];
            }
            if (param_4[3] != -1) {
              piVar15[3] = param_4[3];
            }
            if (param_4[4] != -1) {
              piVar15[4] = param_4[4];
            }
            if (param_4[5] != -1) {
              piVar15[5] = param_4[5];
            }
            if (param_4[6] != -1) {
              piVar15[6] = param_4[6];
            }
            if (param_4[7] != -1) {
              piVar15[7] = param_4[7];
            }
            if (param_4[8] != -1) {
              piVar15[8] = param_4[8];
            }
          }
        }
        lVar32 = lVar32 + 1;
        iVar12 = param_2[lVar32 * 0xe];
      } while (-1 < iVar12);
    }
    *(void*)(lVar14 + (uint64_t)(uint)((int)lVar32 + (int)uVar17) * 0x38) = 0xffffffff;
    local_60 = lVar14;
  }
  return local_60;
}

