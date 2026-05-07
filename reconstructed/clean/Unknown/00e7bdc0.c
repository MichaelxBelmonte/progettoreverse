// Function: FUN_00e7bdc0
// Address: 00e7bdc0
// Size: 536 bytes
// Class: Unknown

void FUN_00e7bdc0(void)

{
  uint uVar1;
  uint64_t uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint64_t uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint *arg1;
  uint64_t uVar11;
  int iVar12;
  uint *this_ptr;
  int iVar13;
  uint64_t uVar14;
  
  uVar9 = this_ptr[1];
  if (uVar9 == 0) {
    if (*this_ptr != 0) {
      if (arg1[1] == 0) {
        *this_ptr = 0;
        return;
      }
      if ((int)*arg1 < 0) {
        *this_ptr = -*this_ptr;
        return;
      }
    }
  }
  else {
    uVar1 = arg1[1];
    if (uVar1 == 0) {
      *this_ptr = 0;
      this_ptr[1] = (uint)(*arg1 != 0);
      return;
    }
    uVar5 = *arg1;
    if (uVar5 == 0) {
      this_ptr[0] = 0;
      this_ptr[1] = 0;
      return;
    }
    uVar8 = *this_ptr;
    if (uVar8 != 0) {
      uVar3 = -uVar5;
      if (0 < (int)uVar5) {
        uVar3 = uVar5;
      }
      uVar14 = (uint64_t)uVar3;
      uVar3 = -uVar8;
      if (-1 < (int)uVar5) {
        uVar3 = uVar8;
      }
      uVar5 = uVar3 & 1;
      for (; (uVar5 == 0 && ((uVar14 & 1) == 0)); uVar14 = uVar14 >> 1) {
        uVar5 = uVar3 & 2;
        uVar3 = (int)uVar3 >> 1;
      }
      iVar13 = (int)uVar14;
      uVar5 = -uVar3;
      if (0 < (int)uVar3) {
        uVar5 = uVar3;
      }
      do {
        uVar8 = uVar5;
        uVar5 = uVar8 >> 1;
      } while ((uVar8 & 1) == 0);
      do {
        uVar6 = uVar14;
        uVar14 = (uint64_t)(uint)((int)uVar6 >> 1);
      } while ((uVar6 & 1) == 0);
      if ((uVar8 != 1) && ((int)uVar6 != 1)) {
        while (uVar5 = (uint)uVar6, uVar8 != uVar5) {
          uVar7 = uVar8 - uVar5;
          if (uVar7 == 0 || (int)uVar8 < (int)uVar5) {
            uVar14 = (uint64_t)(uVar5 - uVar8);
            do {
              uVar6 = (uint64_t)(uint)((int)uVar14 >> 1);
              uVar11 = uVar14 & 2;
              uVar14 = uVar6;
            } while (uVar11 == 0);
          }
          else {
            do {
              uVar8 = (int)uVar7 >> 1;
              uVar5 = uVar7 & 2;
              uVar7 = uVar8;
            } while (uVar5 == 0);
          }
        }
        if (1 < (int)uVar8) {
          uVar3 = (int)uVar3 / (int)uVar8;
          iVar13 = iVar13 / (int)uVar8;
        }
      }
      uVar5 = -uVar9;
      if (0 < (int)uVar9) {
        uVar5 = uVar9;
      }
      uVar14 = (uint64_t)uVar5;
      uVar5 = -uVar1;
      if (-1 < (int)uVar9) {
        uVar5 = uVar1;
      }
      uVar9 = uVar5 & 1;
      for (; (uVar9 == 0 && ((uVar14 & 1) == 0)); uVar14 = uVar14 >> 1) {
        uVar9 = uVar5 & 2;
        uVar5 = (int)uVar5 >> 1;
      }
      iVar12 = (int)uVar14;
      uVar6 = (uint64_t)-uVar5;
      if (0 < (int)uVar5) {
        uVar6 = (uint64_t)uVar5;
      }
      do {
        uVar11 = uVar6;
        uVar6 = uVar11 >> 1;
      } while ((uVar11 & 1) == 0);
      do {
        uVar6 = uVar14;
        uVar14 = (uint64_t)(uint)((int)uVar6 >> 1);
      } while ((uVar6 & 1) == 0);
      if (((int)uVar11 != 1) && ((int)uVar6 != 1)) {
        while( true ) {
          iVar10 = (int)uVar11;
          iVar4 = (int)uVar6;
          if (iVar10 == iVar4) break;
          uVar9 = iVar10 - iVar4;
          if (uVar9 == 0 || iVar10 < iVar4) {
            uVar14 = (uint64_t)(uint)(iVar4 - iVar10);
            do {
              uVar6 = (uint64_t)(uint)((int)uVar14 >> 1);
              uVar2 = uVar14 & 2;
              uVar14 = uVar6;
            } while (uVar2 == 0);
          }
          else {
            do {
              uVar8 = (int)uVar9 >> 1;
              uVar1 = uVar9 & 2;
              uVar9 = uVar8;
            } while (uVar1 == 0);
            uVar11 = (uint64_t)uVar8;
          }
        }
        if (1 < iVar10) {
          uVar5 = (int)uVar5 / iVar10;
          iVar12 = iVar12 / iVar10;
        }
      }
      *this_ptr = uVar5 * uVar3;
      this_ptr[1] = iVar12 * iVar13;
      return;
    }
  }
  return;
}

