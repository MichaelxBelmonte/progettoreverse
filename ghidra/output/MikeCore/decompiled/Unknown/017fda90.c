// Function: FUN_017fda90
// Address: 017fda90
// Size: 1161 bytes
// Class: Unknown


int FUN_017fda90(uint param_1,int param_2,int param_3,char param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong *unaff_RSI;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong *unaff_RDI;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  bool bVar18;
  longlong *local_res8;
  int local_res10;
  
  lVar2 = *unaff_RDI;
  lVar3 = *(longlong *)(lVar2 + 0x10);
  iVar11 = *(int *)(lVar3 + (longlong)param_2 * 4);
  lVar4 = *unaff_RSI;
  lVar5 = *(longlong *)(lVar4 + 0x10);
  uVar12 = *(uint *)(lVar4 + 0x18) >> 2;
  iVar17 = iVar11;
  if (param_3 == 0) {
    uVar14 = 0;
    do {
      iVar10 = iVar17 + (((uint)(iVar17 / 6 + (iVar17 >> 0x1f)) >> 1) - (iVar17 >> 0x1f)) * -0xc;
      uVar13 = 0;
      do {
        if (*(int *)(lVar5 + uVar13 * 4) == (iVar10 >> 0x1f & 0xcU) + iVar10) goto LAB_017fdb80;
        uVar13 = uVar13 + 1;
      } while (uVar12 != (uint)uVar13);
      uVar15 = param_1;
      if (uVar14 != 0) {
        if ((int)uVar14 < 1) {
          uVar15 = 1 - uVar14;
        }
        else {
          uVar15 = ~uVar14;
        }
      }
      iVar17 = iVar17 + uVar15;
      uVar14 = uVar15;
    } while( true );
  }
  do {
    iVar10 = iVar17 + (((uint)(iVar17 / 6 + (iVar17 >> 0x1f)) >> 1) - (iVar17 >> 0x1f)) * -0xc;
    uVar13 = 0;
    do {
      if (*(int *)(lVar5 + uVar13 * 4) == (iVar10 >> 0x1f & 0xcU) + iVar10) {
LAB_017fdb80:
        iVar17 = *(int *)(lVar2 + 0x18);
        iVar10 = iVar17 + 3;
        if (-1 < iVar17) {
          iVar10 = iVar17;
        }
        iVar7 = 0;
        if (3 < iVar17) {
          iVar10 = iVar10 >> 2;
          if (param_4 == '\0') {
            lVar6 = *local_res8;
            iVar10 = iVar10 + -1;
            if (local_res10 == -1) {
              iVar7 = 0;
              lVar16 = lVar6;
              while( true ) {
                iVar9 = *(int *)(lVar5 + (longlong)(int)uVar13 * 4) - iVar11;
                iVar17 = iVar9 + 0xc;
                if (-7 < iVar9) {
                  iVar17 = iVar9;
                }
                iVar9 = iVar17 + -0xc;
                if (iVar17 < 7) {
                  iVar9 = iVar17;
                }
                if (lVar16 == 0) {
                  lVar16 = 0;
                }
                else {
                  piVar1 = (int *)(*(longlong *)(lVar6 + 0x10) + (longlong)iVar11 * 4);
                  *piVar1 = *piVar1 + iVar9;
                  lVar16 = lVar6;
                }
                iVar11 = -iVar9;
                if (0 < iVar9) {
                  iVar11 = iVar9;
                }
                iVar7 = iVar7 + iVar11;
                iVar11 = *(int *)(lVar2 + 0x18);
                iVar17 = iVar11 + 3;
                if (-1 < iVar11) {
                  iVar17 = iVar11;
                }
                iVar11 = iVar17 >> 2;
                if (param_2 + 1 < iVar17 >> 2) {
                  iVar11 = 0;
                }
                iVar17 = *(int *)(lVar4 + 0x18);
                iVar9 = iVar17 + 3;
                if (-1 < iVar17) {
                  iVar9 = iVar17;
                }
                bVar18 = iVar10 == 0;
                iVar10 = iVar10 + -1;
                if (bVar18) break;
                param_2 = (param_2 + 1) - iVar11;
                iVar11 = (int)uVar13 + 1;
                iVar9 = iVar9 >> 2;
                if (iVar11 < iVar9) {
                  iVar9 = 0;
                }
                uVar13 = (ulonglong)(uint)(iVar11 - iVar9);
                iVar11 = *(int *)(lVar3 + (longlong)param_2 * 4);
              }
            }
            else {
              iVar7 = 0;
              lVar16 = lVar6;
              while( true ) {
                iVar9 = *(int *)(lVar5 + (longlong)(int)uVar13 * 4) - iVar11;
                iVar17 = iVar9 + 0xc;
                if (-7 < iVar9) {
                  iVar17 = iVar9;
                }
                iVar9 = iVar17 + -0xc;
                if (iVar17 < 7) {
                  iVar9 = iVar17;
                }
                if (lVar16 == 0) {
                  lVar16 = 0;
                }
                else {
                  piVar1 = (int *)(*(longlong *)(lVar6 + 0x10) + (longlong)iVar11 * 4);
                  *piVar1 = *piVar1 + iVar9;
                  lVar16 = lVar6;
                }
                iVar11 = -iVar9;
                if (0 < iVar9) {
                  iVar11 = iVar9;
                }
                iVar7 = iVar7 + iVar11;
                if ((iVar9 != 0) && (*(int *)(lVar3 + (longlong)param_2 * 4) == local_res10)) {
                  iVar7 = iVar7 + 5;
                }
                iVar11 = *(int *)(lVar2 + 0x18);
                iVar17 = iVar11 + 3;
                if (-1 < iVar11) {
                  iVar17 = iVar11;
                }
                iVar11 = iVar17 >> 2;
                if (param_2 + 1 < iVar17 >> 2) {
                  iVar11 = 0;
                }
                iVar17 = *(int *)(lVar4 + 0x18);
                iVar9 = iVar17 + 3;
                if (-1 < iVar17) {
                  iVar9 = iVar17;
                }
                bVar18 = iVar10 == 0;
                iVar10 = iVar10 + -1;
                if (bVar18) break;
                param_2 = (param_2 + 1) - iVar11;
                iVar11 = (int)uVar13 + 1;
                iVar9 = iVar9 >> 2;
                if (iVar11 < iVar9) {
                  iVar9 = 0;
                }
                uVar13 = (ulonglong)(uint)(iVar11 - iVar9);
                iVar11 = *(int *)(lVar3 + (longlong)param_2 * 4);
              }
            }
          }
          else {
            iVar7 = *(int *)(lVar5 + (uVar13 & 0xffffffff) * 4) - iVar11;
            iVar17 = iVar7 + 0xc;
            if (-7 < iVar7) {
              iVar17 = iVar7;
            }
            iVar9 = iVar17 + -0xc;
            if (iVar17 < 7) {
              iVar9 = iVar17;
            }
            iVar7 = 0x400;
            if ((-1 < (int)param_1) || (iVar9 < 1)) {
              if ((int)param_1 < 1) {
                lVar6 = *local_res8;
                iVar17 = 0;
                do {
                  if (lVar6 != 0) {
                    piVar1 = (int *)(*(longlong *)(lVar6 + 0x10) + (longlong)iVar11 * 4);
                    *piVar1 = *piVar1 + iVar9;
                  }
                  iVar11 = -iVar9;
                  if (0 < iVar9) {
                    iVar11 = iVar9;
                  }
                  iVar17 = iVar17 + iVar11;
                  if (((local_res10 != -1) && (iVar9 != 0)) &&
                     (*(int *)(lVar3 + (longlong)param_2 * 4) == local_res10)) {
                    iVar17 = iVar17 + 5;
                  }
                  iVar11 = *(int *)(lVar2 + 0x18);
                  iVar9 = iVar11 + 3;
                  if (-1 < iVar11) {
                    iVar9 = iVar11;
                  }
                  iVar11 = iVar9 >> 2;
                  if (param_2 + 1 < iVar9 >> 2) {
                    iVar11 = 0;
                  }
                  iVar9 = *(int *)(lVar4 + 0x18);
                  iVar8 = iVar9 + 3;
                  if (-1 < iVar9) {
                    iVar8 = iVar9;
                  }
                  iVar10 = iVar10 + -1;
                  if (iVar10 == 0) {
                    return iVar17;
                  }
                  param_2 = (param_2 + 1) - iVar11;
                  iVar11 = (int)uVar13 + 1;
                  iVar8 = iVar8 >> 2;
                  if (iVar11 < iVar8) {
                    iVar8 = 0;
                  }
                  uVar12 = iVar11 - iVar8;
                  uVar13 = (ulonglong)uVar12;
                  iVar11 = *(int *)(lVar3 + (longlong)param_2 * 4);
                  iVar9 = *(int *)(lVar5 + (longlong)(int)uVar12 * 4) - iVar11;
                  iVar8 = iVar9 + 0xc;
                  if (-7 < iVar9) {
                    iVar8 = iVar9;
                  }
                  iVar9 = iVar8 + -0xc;
                  if (iVar8 < 7) {
                    iVar9 = iVar8;
                  }
                } while ((-1 < (int)param_1) || (iVar9 < 1));
              }
              else {
                iVar17 = 0;
                do {
                  if (iVar9 < 0) {
                    return 0x400;
                  }
                  if (*local_res8 != 0) {
                    piVar1 = (int *)(*(longlong *)(*local_res8 + 0x10) + (longlong)iVar11 * 4);
                    *piVar1 = *piVar1 + iVar9;
                  }
                  iVar11 = -iVar9;
                  if (0 < iVar9) {
                    iVar11 = iVar9;
                  }
                  iVar17 = iVar17 + iVar11;
                  if (((local_res10 != -1) && (iVar9 != 0)) &&
                     (*(int *)(lVar3 + (longlong)param_2 * 4) == local_res10)) {
                    iVar17 = iVar17 + 5;
                  }
                  iVar11 = *(int *)(lVar2 + 0x18);
                  iVar9 = iVar11 + 3;
                  if (-1 < iVar11) {
                    iVar9 = iVar11;
                  }
                  iVar11 = iVar9 >> 2;
                  if (param_2 + 1 < iVar9 >> 2) {
                    iVar11 = 0;
                  }
                  iVar9 = *(int *)(lVar4 + 0x18);
                  iVar8 = iVar9 + 3;
                  if (-1 < iVar9) {
                    iVar8 = iVar9;
                  }
                  iVar10 = iVar10 + -1;
                  if (iVar10 == 0) {
                    return iVar17;
                  }
                  param_2 = (param_2 + 1) - iVar11;
                  iVar11 = (int)uVar13 + 1;
                  iVar8 = iVar8 >> 2;
                  if (iVar11 < iVar8) {
                    iVar8 = 0;
                  }
                  uVar12 = iVar11 - iVar8;
                  uVar13 = (ulonglong)uVar12;
                  iVar11 = *(int *)(lVar3 + (longlong)param_2 * 4);
                  iVar9 = *(int *)(lVar5 + (longlong)(int)uVar12 * 4) - iVar11;
                  iVar8 = iVar9 + 0xc;
                  if (-7 < iVar9) {
                    iVar8 = iVar9;
                  }
                  iVar9 = iVar8 + -0xc;
                  if (iVar8 < 7) {
                    iVar9 = iVar8;
                  }
                } while ((-1 < (int)param_1) || (iVar9 < 1));
              }
            }
          }
        }
        return iVar7;
      }
      uVar13 = uVar13 + 1;
    } while (uVar12 != (uint)uVar13);
    iVar17 = iVar17 + param_1;
  } while( true );
}


