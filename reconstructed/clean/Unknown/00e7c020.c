// Function: FUN_00e7c020
// Address: 00e7c020
// Size: 529 bytes
// Class: Unknown

uint64_t FUN_00e7c020(uint64_t param_1)

{
  uint uVar1;
  uint uVar2;
  uint64_t uVar3;
  int iVar4;
  uint uVar5;
  undefined7 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint64_t uVar10;
  int iVar11;
  int iVar12;
  uint *arg1;
  uint64_t uVar13;
  uint *this_ptr;
  int iVar14;
  uint64_t uVar15;
  bool bVar16;
  
  uVar8 = arg1[1];
  uVar6 = (undefined7)(param_1 >> 8);
  if (uVar8 == 0) {
    if (0 < (int)*arg1) {
      return 0;
    }
    return CONCAT71(uVar6,0 < (int)*this_ptr || this_ptr[1] != 0) & 0xffffffff;
  }
  uVar1 = this_ptr[1];
  if (uVar1 != 0) {
    uVar2 = *arg1;
    if (uVar2 != 0) {
      uVar5 = *this_ptr;
      if ((int)uVar2 < 0) {
        param_1 = CONCAT71(uVar6,1);
        if ((-1 < (int)uVar5) || (((int)uVar2 < (int)uVar5 && ((int)uVar8 <= (int)uVar1))))
        goto LAB_00e7c0d1;
        if (((int)uVar5 <= (int)uVar2) && ((int)uVar1 <= (int)uVar8)) {
          return 0;
        }
LAB_00e7c067:
        uVar9 = -uVar2;
        if (0 < (int)uVar2) {
          uVar9 = uVar2;
        }
        uVar15 = (uint64_t)uVar9;
        uVar9 = -uVar5;
        if (-1 < (int)uVar2) {
          uVar9 = uVar5;
        }
        uVar10 = (uint64_t)uVar9;
        param_1 = uVar10;
        if ((uVar9 & 1) == 0) {
          do {
            param_1 = uVar10;
            if ((uVar15 & 1) != 0) break;
            uVar5 = (int)uVar10 >> 1;
            param_1 = (uint64_t)uVar5;
            uVar15 = uVar15 >> 1;
            uVar13 = uVar10 & 2;
            uVar10 = (uint64_t)uVar5;
          } while (uVar13 == 0);
        }
        iVar14 = (int)uVar15;
        iVar11 = (int)param_1;
        uVar10 = (uint64_t)(uint)-iVar11;
        if (0 < iVar11) {
          uVar10 = param_1;
        }
        do {
          uVar13 = uVar10;
          uVar10 = uVar13 >> 1;
        } while ((uVar13 & 1) == 0);
        do {
          uVar10 = uVar15;
          uVar15 = (uint64_t)(uint)((int)uVar10 >> 1);
        } while ((uVar10 & 1) == 0);
        if (((int)uVar13 != 1) && ((int)uVar10 != 1)) {
          while( true ) {
            iVar12 = (int)uVar13;
            iVar4 = (int)uVar10;
            if (iVar12 == iVar4) break;
            uVar5 = iVar12 - iVar4;
            if (uVar5 == 0 || iVar12 < iVar4) {
              uVar15 = (uint64_t)(uint)(iVar4 - iVar12);
              do {
                uVar10 = (uint64_t)(uint)((int)uVar15 >> 1);
                uVar3 = uVar15 & 2;
                uVar15 = uVar10;
              } while (uVar3 == 0);
            }
            else {
              do {
                uVar7 = (int)uVar5 >> 1;
                uVar9 = uVar5 & 2;
                uVar5 = uVar7;
              } while (uVar9 == 0);
              uVar13 = (uint64_t)uVar7;
            }
          }
          if (1 < iVar12) {
            param_1 = (int64_t)iVar11 / (int64_t)iVar12 & 0xffffffff;
            iVar14 = iVar14 / iVar12;
          }
        }
      }
      else {
        if ((int)uVar5 < 0) {
          return 0;
        }
        if ((((int)uVar2 < (int)uVar5) && (param_1 = CONCAT71(uVar6,1), (int)uVar1 <= (int)uVar8))
           || ((param_1 = 0, (int)uVar5 <= (int)uVar2 && ((int)uVar8 <= (int)uVar1)))) {
LAB_00e7c0d1:
          return param_1 & 0xffffffff;
        }
        if (uVar5 != 0) goto LAB_00e7c067;
        iVar14 = 1;
      }
      uVar5 = -uVar1;
      if (0 < (int)uVar1) {
        uVar5 = uVar1;
      }
      uVar15 = (uint64_t)uVar5;
      uVar5 = -uVar8;
      if (-1 < (int)uVar1) {
        uVar5 = uVar8;
      }
      uVar8 = uVar5 & 1;
      for (; (uVar8 == 0 && ((uVar15 & 1) == 0)); uVar15 = uVar15 >> 1) {
        uVar8 = uVar5 & 2;
        uVar5 = (int)uVar5 >> 1;
      }
      iVar11 = (int)uVar15;
      uVar10 = (uint64_t)-uVar5;
      if (0 < (int)uVar5) {
        uVar10 = (uint64_t)uVar5;
      }
      do {
        uVar13 = uVar10;
        uVar10 = uVar13 >> 1;
      } while ((uVar13 & 1) == 0);
      do {
        uVar10 = uVar15;
        uVar15 = (uint64_t)(uint)((int)uVar10 >> 1);
      } while ((uVar10 & 1) == 0);
      if (((int)uVar13 != 1) && ((int)uVar10 != 1)) {
        while( true ) {
          iVar12 = (int)uVar13;
          iVar4 = (int)uVar10;
          if (iVar12 == iVar4) break;
          uVar8 = iVar12 - iVar4;
          if (uVar8 == 0 || iVar12 < iVar4) {
            uVar15 = (uint64_t)(uint)(iVar4 - iVar12);
            do {
              uVar10 = (uint64_t)(uint)((int)uVar15 >> 1);
              uVar3 = uVar15 & 2;
              uVar15 = uVar10;
            } while (uVar3 == 0);
          }
          else {
            do {
              uVar9 = (int)uVar8 >> 1;
              uVar1 = uVar8 & 2;
              uVar8 = uVar9;
            } while (uVar1 == 0);
            uVar13 = (uint64_t)uVar9;
          }
        }
        if (1 < iVar12) {
          uVar5 = (int)uVar5 / iVar12;
          iVar11 = iVar11 / iVar12;
        }
      }
      iVar11 = iVar11 * iVar14;
      iVar14 = uVar5 * (int)param_1;
      if ((int)uVar2 < 0) {
        return CONCAT71((int7)(param_1 >> 8),iVar14 < iVar11);
      }
      bVar16 = SBORROW4(iVar14,iVar11);
      uVar8 = iVar14 - iVar11;
      goto LAB_00e7c099;
    }
  }
  uVar8 = *this_ptr;
  bVar16 = false;
LAB_00e7c099:
  return CONCAT71((int7)(param_1 >> 8),uVar8 != 0 && bVar16 == (int)uVar8 < 0) & 0xffffffff;
}

