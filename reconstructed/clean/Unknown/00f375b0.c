// Function: FUN_00f375b0
// Address: 00f375b0
// Size: 1484 bytes
// Class: Unknown

uint64_t FUN_00f375b0(int64_t param_1,int64_t param_2,int64_t param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int64_t *plVar4;
  uint uVar5;
  void *pvVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  uint64_t uVar10;
  void *pvVar11;
  uint64_t uVar12;
  int iVar13;
  int64_t lVar14;
  int *arg1;
  uint *this_ptr;
  uint64_t uVar15;
  int iVar16;
  int *piVar17;
  int *piVar18;
  int64_t *plVar19;
  
  uVar5 = *this_ptr;
  if (param_2 == 0) {
    if ((-1 < (int)uVar5) && (iVar13 = *arg1, -1 < iVar13)) {
      while( true ) {
        if (-1 < iVar13) {
          piVar18 = (int *)(param_1 + (uint64_t)uVar5 * 4);
          *piVar18 = *piVar18 + 1;
          iVar13 = arg1[0xe];
          piVar18 = arg1 + 0x1c;
          while (-1 < iVar13) {
            piVar17 = (int *)(param_1 + (int64_t)(int)*this_ptr * 4);
            *piVar17 = *piVar17 + 1;
            iVar13 = *piVar18;
            piVar18 = piVar18 + 0xe;
          }
        }
        uVar5 = this_ptr[0xe];
        if ((int)uVar5 < 0) break;
        this_ptr = this_ptr + 0xe;
        iVar13 = *arg1;
      }
    }
  }
  else if ((-1 < (int)uVar5) && (iVar13 = *arg1, -1 < iVar13)) {
    do {
      if (-1 < iVar13) {
        piVar18 = arg1;
        iVar16 = -1;
        do {
          while (iVar3 = iVar13, piVar17 = piVar18 + 0xe, iVar3 == iVar16) {
            iVar13 = *piVar17;
            iVar3 = iVar16;
joined_r0x00f3763f:
            piVar18 = piVar17;
            iVar16 = iVar3;
            if (iVar13 < 0) goto LAB_00f37b10;
          }
          plVar4 = (int64_t *)
                   ((int64_t)*(int *)(param_3 + (int64_t)(int)*this_ptr * 4) * 0x38 + param_2 + 8
                   );
          do {
            plVar19 = plVar4;
            plVar4 = plVar19 + 7;
          } while (*plVar19 != 0);
          plVar19[7] = 0;
          *(uint *)(plVar19 + -1) = this_ptr[1];
          *(uint *)((int64_t)plVar19 + -4) = this_ptr[2];
          *plVar19 = (int64_t)*(int *)(param_3 + (int64_t)iVar3 * 4) * 0x38 + param_2;
          *(int *)(plVar19 + 1) = iVar3;
          uVar5 = this_ptr[7];
          uVar9 = (uint)(*(int64_t *)(this_ptr + 8) != 0) << 3 |
                  (uint)(uVar5 != 0) << 2 | piVar18[6] | this_ptr[6];
          *(uint *)(plVar19 + 4) = uVar9;
          uVar1 = this_ptr[10];
          if (-1 < (int)uVar1) {
            uVar9 = uVar9 | 0x100;
            *(uint *)(plVar19 + 4) = uVar9;
            uVar5 = uVar1;
          }
          pvVar11 = (void *)(uint64_t)uVar9;
          *(uint *)((int64_t)plVar19 + 0x24) = uVar5;
          piVar7 = *(int **)(this_ptr + 8);
          if (piVar7 == (int *)0x0) {
            plVar19[5] = 0;
          }
          else {
            lVar14 = 0;
            do {
              piVar8 = (int *)((int64_t)piVar7 + lVar14);
              lVar14 = lVar14 + 4;
            } while (*piVar8 != 0);
            pvVar6 = _malloc(uVar9);
            plVar19[5] = (int64_t)pvVar6;
            if (pvVar6 == (void *)0x0) {
              return 0xc;
            }
            uVar10 = 0;
            iVar13 = *piVar7;
            while (iVar13 != 0) {
              *(int *)((int64_t)pvVar6 + uVar10 * 4) = iVar13;
              lVar14 = uVar10 + 1;
              uVar10 = uVar10 + 1;
              iVar13 = piVar7[lVar14];
            }
            pvVar11 = (void *)(uVar10 & 0xffffffff);
            *(void*)((int64_t)pvVar6 + (int64_t)pvVar11 * 4) = 0;
          }
          piVar7 = *(int **)(this_ptr + 4);
          iVar13 = 0;
          iVar16 = 0;
          if (piVar7 != (int *)0x0) {
            iVar16 = -1;
            do {
              iVar16 = iVar16 + 1;
              iVar2 = *piVar7;
              piVar7 = piVar7 + 1;
            } while (-1 < iVar2);
          }
          piVar7 = *(int **)(piVar18 + 4);
          if (piVar7 != (int *)0x0) {
            iVar13 = -1;
            do {
              iVar13 = iVar13 + 1;
              iVar2 = *piVar7;
              piVar7 = piVar7 + 1;
            } while (-1 < iVar2);
          }
          if (plVar19[2] != 0) {
            _free(pvVar11);
          }
          plVar19[2] = 0;
          if (iVar13 + iVar16 != 0) {
            pvVar6 = _malloc((size_t)pvVar11);
            plVar19[2] = (int64_t)pvVar6;
            if (pvVar6 == (void *)0x0) {
              return 0xc;
            }
            piVar7 = *(int **)(this_ptr + 4);
            uVar10 = 0;
            if ((piVar7 != (int *)0x0) && (iVar13 = *piVar7, -1 < iVar13)) {
              uVar10 = 0;
              do {
                *(int *)((int64_t)pvVar6 + uVar10 * 4) = iVar13;
                iVar13 = piVar7[uVar10 + 1];
                uVar10 = uVar10 + 1;
              } while (-1 < iVar13);
            }
            piVar7 = *(int **)(piVar18 + 4);
            if ((piVar7 != (int *)0x0) && (iVar13 = *piVar7, -1 < iVar13)) {
              if ((int)uVar10 == 0) {
                uVar10 = 0;
                do {
                  *(int *)((int64_t)pvVar6 + uVar10 * 4) = iVar13;
                  iVar13 = piVar7[uVar10 + 1];
                  uVar10 = uVar10 + 1;
                } while (-1 < iVar13);
              }
              else {
                uVar15 = uVar10 & 0xffffffff;
                lVar14 = 0;
                do {
                  uVar12 = 0;
                  do {
                    if (*(int *)((int64_t)pvVar6 + uVar12 * 4) == iVar13) goto LAB_00f37830;
                    uVar12 = uVar12 + 1;
                  } while (uVar15 != uVar12);
                  iVar16 = (int)uVar10;
                  uVar10 = (uint64_t)(iVar16 + 1);
                  *(int *)((int64_t)pvVar6 + (int64_t)iVar16 * 4) = iVar13;
LAB_00f37830:
                  iVar13 = piVar7[lVar14 + 1];
                  lVar14 = lVar14 + 1;
                } while (-1 < iVar13);
              }
            }
            pvVar11 = (void *)(int64_t)(int)uVar10;
            *(void*)((int64_t)pvVar6 + (int64_t)pvVar11 * 4) = 0xffffffff;
          }
          piVar7 = *(int **)(this_ptr + 0xc);
          if ((piVar7 == (int *)0x0) && (*(int64_t *)(piVar18 + 0xc) == 0)) {
            if (plVar19[3] != 0) {
              _free(pvVar11);
            }
            plVar19[3] = 0;
            iVar13 = *piVar17;
            goto joined_r0x00f3763f;
          }
          piVar8 = (int *)plVar19[3];
          if (piVar8 == (int *)0x0) {
            piVar8 = _malloc((size_t)pvVar11);
            plVar19[3] = (int64_t)piVar8;
            if (piVar8 == (int *)0x0) {
              return 0xc;
            }
          }
          piVar18 = *(int **)(piVar18 + 0xc);
          if (piVar7 != (int *)0x0) {
            *piVar8 = -1;
            *piVar8 = *piVar7;
            if (piVar18 == (int *)0x0) {
              piVar8[1] = -1;
              piVar8[1] = piVar7[1];
              piVar8[2] = -1;
              piVar8[2] = piVar7[2];
              piVar8[3] = -1;
              piVar8[3] = piVar7[3];
              piVar8[4] = -1;
              piVar8[4] = piVar7[4];
              piVar8[5] = -1;
              piVar8[5] = piVar7[5];
              piVar8[6] = -1;
              piVar8[6] = piVar7[6];
              piVar8[7] = -1;
              piVar8[7] = piVar7[7];
              piVar8[8] = -1;
              piVar8[8] = piVar7[8];
              iVar13 = *piVar17;
            }
            else {
              if (*piVar18 != -1) {
                *piVar8 = *piVar18;
              }
              piVar8[1] = -1;
              iVar13 = piVar7[1];
              piVar8[1] = iVar13;
              iVar16 = piVar18[1];
              if (piVar18[1] == -1) {
                iVar16 = iVar13;
              }
              piVar8[1] = iVar16;
              piVar8[2] = -1;
              iVar13 = piVar7[2];
              piVar8[2] = iVar13;
              iVar16 = piVar18[2];
              if (piVar18[2] == -1) {
                iVar16 = iVar13;
              }
              piVar8[2] = iVar16;
              piVar8[3] = -1;
              iVar13 = piVar7[3];
              piVar8[3] = iVar13;
              iVar16 = piVar18[3];
              if (piVar18[3] == -1) {
                iVar16 = iVar13;
              }
              piVar8[3] = iVar16;
              piVar8[4] = -1;
              iVar13 = piVar7[4];
              piVar8[4] = iVar13;
              iVar16 = piVar18[4];
              if (piVar18[4] == -1) {
                iVar16 = iVar13;
              }
              piVar8[4] = iVar16;
              piVar8[5] = -1;
              iVar13 = piVar7[5];
              piVar8[5] = iVar13;
              iVar16 = piVar18[5];
              if (piVar18[5] == -1) {
                iVar16 = iVar13;
              }
              piVar8[5] = iVar16;
              piVar8[6] = -1;
              iVar13 = piVar7[6];
              piVar8[6] = iVar13;
              iVar16 = piVar18[6];
              if (piVar18[6] == -1) {
                iVar16 = iVar13;
              }
              piVar8[6] = iVar16;
              piVar8[7] = -1;
              iVar13 = piVar7[7];
              piVar8[7] = iVar13;
              iVar16 = piVar18[7];
              if (piVar18[7] == -1) {
                iVar16 = iVar13;
              }
              piVar8[7] = iVar16;
              piVar8[8] = -1;
              iVar13 = piVar7[8];
              piVar8[8] = iVar13;
              iVar16 = piVar18[8];
              if (piVar18[8] == -1) {
                iVar16 = iVar13;
              }
              piVar8[8] = iVar16;
              iVar13 = *piVar17;
            }
            goto joined_r0x00f3763f;
          }
          if (piVar18 != (int *)0x0) {
            *piVar8 = -1;
            *piVar8 = *piVar18;
            piVar8[1] = -1;
            piVar8[1] = piVar18[1];
            piVar8[2] = -1;
            piVar8[2] = piVar18[2];
            piVar8[3] = -1;
            piVar8[3] = piVar18[3];
            piVar8[4] = -1;
            piVar8[4] = piVar18[4];
            piVar8[5] = -1;
            piVar8[5] = piVar18[5];
            piVar8[6] = -1;
            piVar8[6] = piVar18[6];
            piVar8[7] = -1;
            piVar8[7] = piVar18[7];
            piVar8[8] = -1;
            piVar8[8] = piVar18[8];
            iVar13 = *piVar17;
            goto joined_r0x00f3763f;
          }
          piVar8[4] = -1;
          piVar8[5] = -1;
          piVar8[6] = -1;
          piVar8[7] = -1;
          *piVar8 = -1;
          piVar8[1] = -1;
          piVar8[2] = -1;
          piVar8[3] = -1;
          piVar8[8] = -1;
          piVar18 = piVar17;
          iVar13 = *piVar17;
          iVar16 = iVar3;
        } while (-1 < *piVar17);
      }
LAB_00f37b10:
      if ((int)this_ptr[0xe] < 0) {
        return 0;
      }
      this_ptr = this_ptr + 0xe;
      iVar13 = *arg1;
    } while( true );
  }
  return 0;
}

