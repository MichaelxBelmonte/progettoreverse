// Function: FUN_00f1e6e7
// Address: 00f1e6e7
// Size: 3742 bytes
// Class: Unknown

int64_t FUN_00f1e6e7(uint64_t param_1,int64_t param_2,uint64_t *param_3,uint64_t param_4)

{
  uint uVar1;
  int64_t lVar2;
  byte *pbVar3;
  int64_t lVar4;
  uint64_t arg1;
  uint64_t uVar5;
  uint64_t uVar6;
  int iVar7;
  uint64_t *this_ptr;
  uint64_t *puVar8;
  uint uVar9;
  int64_t lVar10;
  int64_t lVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t *puVar14;
  uint64_t uVar15;
  uint64_t *puVar16;
  
  if ((param_4 & 1) != 0) {
    lVar2 = FUN_00f1fe8c();
    return lVar2;
  }
  if ((7 < arg1) && (arg1 != 8)) {
    uVar1 = (uint)*param_3;
    puVar8 = (uint64_t *)((int64_t)this_ptr + (arg1 - 8));
    uVar9 = (uint)param_1;
    puVar16 = this_ptr;
    if ((arg1 < ((*param_3 & 0xffffffff) * param_1 >> 3) + 8) || (0xb < uVar1)) {
      uVar1 = uVar9 + 3;
      if (-1 < (int)uVar9) {
        uVar1 = uVar9;
      }
      iVar7 = uVar9 - (uVar1 & 0xfffffffc);
      if (iVar7 < 1) {
        uVar6 = 0;
        uVar12 = 0;
      }
      else {
        pbVar3 = (byte *)((int)uVar9 + param_2);
        iVar7 = iVar7 + 1;
        uVar5 = 0;
        uVar12 = 0;
        do {
          pbVar3 = pbVar3 + -1;
          uVar6 = param_3[(uint64_t)*pbVar3 + 1];
          uVar5 = uVar5 + uVar6;
          uVar12 = uVar6 & 0xffffffffffffff00 | uVar12 >> ((byte)uVar6 & 0x3f);
          param_1 = (uint64_t)((int)param_1 - 1);
          iVar7 = iVar7 + -1;
        } while (1 < iVar7);
        uVar6 = (uint64_t)((uint)uVar5 & 7);
        *this_ptr = uVar12 >> (-(char)uVar5 & 0x3fU);
        puVar16 = (uint64_t *)(((uVar5 & 0xff) >> 3) + (int64_t)this_ptr);
        if (puVar8 < puVar16) {
          puVar16 = puVar8;
        }
      }
      if ((param_1 & 7) != 0) {
        lVar10 = (int64_t)(int)param_1;
        lVar2 = 3;
        do {
          uVar5 = param_3[(uint64_t)*(byte *)(param_2 + lVar10 + -4 + lVar2) + 1];
          uVar12 = uVar12 >> ((byte)uVar5 & 0x3f) | uVar5;
          uVar6 = uVar6 + uVar5;
          lVar2 = lVar2 + -1;
        } while (lVar2 != 0);
        param_1 = lVar10 - 4;
        uVar5 = param_3[(uint64_t)*(byte *)(param_2 + -4 + lVar10) + 1];
        uVar13 = uVar6 + uVar5;
        uVar12 = uVar12 >> ((byte)uVar5 & 0x3f) | uVar5 & 0xffffffffffffff00;
        uVar6 = (uint64_t)((uint)uVar13 & 7);
        *puVar16 = uVar12 >> (-(char)uVar13 & 0x3fU);
        puVar16 = (uint64_t *)(((uVar13 & 0xff) >> 3) + (int64_t)puVar16);
        if (puVar8 < puVar16) {
          puVar16 = puVar8;
        }
      }
      if (0 < (int)param_1) {
        lVar2 = ((int)param_1 + -4) + param_2 + -1;
        do {
          iVar7 = (int)param_1;
          lVar10 = 3;
          do {
            uVar5 = param_3[(uint64_t)*(byte *)((param_1 & 0xffffffff) + param_2 + -4 + lVar10) + 1
                           ];
            uVar12 = uVar12 >> ((byte)uVar5 & 0x3f) | uVar5;
            uVar6 = uVar6 + uVar5;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
          lVar11 = (int64_t)iVar7;
          uVar5 = param_3[(uint64_t)*(byte *)(lVar11 + -4 + param_2) + 1];
          uVar6 = uVar6 + uVar5;
          uVar5 = uVar5 & 0xffffffffffffff00 | uVar12 >> ((byte)uVar5 & 0x3f);
          *puVar16 = uVar5 >> (-(char)uVar6 & 0x3fU);
          lVar10 = 3;
          lVar4 = 0;
          uVar12 = 0;
          do {
            uVar13 = param_3[(uint64_t)*(byte *)(lVar2 + -3 + lVar10) + 1];
            uVar12 = uVar12 >> ((byte)uVar13 & 0x3f) | uVar13;
            lVar4 = lVar4 + uVar13;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
          puVar14 = (uint64_t *)((int64_t)puVar16 + ((uVar6 & 0xff) >> 3));
          if (puVar8 < puVar14) {
            puVar14 = puVar8;
          }
          uVar13 = param_3[(uint64_t)*(byte *)(param_2 + -8 + lVar11) + 1];
          uVar12 = uVar5 >> ((byte)(lVar4 + uVar13) & 0x3f) | uVar13 & 0xffffffffffffff00 |
                   uVar12 >> ((byte)uVar13 & 0x3f);
          uVar5 = lVar4 + uVar13 + (uint64_t)((uint)uVar6 & 7);
          uVar6 = (uint64_t)((uint)uVar5 & 7);
          puVar16 = (uint64_t *)(((uVar5 & 0xff) >> 3) + (int64_t)puVar14);
          if (puVar8 < puVar16) {
            puVar16 = puVar8;
          }
          *puVar14 = uVar12 >> (-(char)uVar5 & 0x3fU);
          lVar2 = lVar2 + -8;
          param_1 = lVar11 - 8U & 0xffffffff;
        } while (8 < iVar7);
      }
    }
    else {
      switch(uVar1) {
      case 7:
        uVar1 = uVar9 + 7;
        if (-1 < (int)uVar9) {
          uVar1 = uVar9;
        }
        iVar7 = uVar9 - (uVar1 & 0xfffffff8);
        if (iVar7 < 1) {
          uVar6 = 0;
          uVar12 = 0;
        }
        else {
          pbVar3 = (byte *)((int)uVar9 + param_2);
          iVar7 = iVar7 + 1;
          uVar5 = 0;
          uVar12 = 0;
          do {
            pbVar3 = pbVar3 + -1;
            uVar6 = param_3[(uint64_t)*pbVar3 + 1];
            uVar5 = uVar5 + uVar6;
            uVar12 = uVar6 & 0xffffffffffffff00 | uVar12 >> ((byte)uVar6 & 0x3f);
            param_1 = (uint64_t)((int)param_1 - 1);
            iVar7 = iVar7 + -1;
          } while (1 < iVar7);
          uVar6 = (uint64_t)((uint)uVar5 & 7);
          *this_ptr = uVar12 >> (-(char)uVar5 & 0x3fU);
          puVar16 = (uint64_t *)(((uVar5 & 0xff) >> 3) + (int64_t)this_ptr);
        }
        if ((param_1 & 0xf) != 0) {
          lVar10 = (int64_t)(int)param_1;
          lVar2 = 7;
          do {
            uVar5 = param_3[(uint64_t)*(byte *)(param_2 + lVar10 + -8 + lVar2) + 1];
            uVar12 = uVar12 >> ((byte)uVar5 & 0x3f) | uVar5;
            uVar6 = uVar6 + uVar5;
            lVar2 = lVar2 + -1;
          } while (lVar2 != 0);
          param_1 = lVar10 - 8;
          uVar5 = param_3[(uint64_t)*(byte *)(param_2 + -8 + lVar10) + 1];
          uVar13 = uVar6 + uVar5;
          uVar12 = uVar12 >> ((byte)uVar5 & 0x3f) | uVar5 & 0xffffffffffffff00;
          uVar6 = (uint64_t)((uint)uVar13 & 7);
          *puVar16 = uVar12 >> (-(char)uVar13 & 0x3fU);
          puVar16 = (uint64_t *)((int64_t)puVar16 + ((uVar13 & 0xff) >> 3));
        }
        if (0 < (int)param_1) {
          lVar2 = ((int)param_1 + -8) + param_2 + -1;
          do {
            iVar7 = (int)param_1;
            lVar10 = 7;
            do {
              uVar5 = param_3[(uint64_t)*(byte *)((param_1 & 0xffffffff) + param_2 + -8 + lVar10) +
                              1];
              uVar12 = uVar12 >> ((byte)uVar5 & 0x3f) | uVar5;
              uVar6 = uVar6 + uVar5;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
            lVar11 = (int64_t)iVar7;
            uVar5 = param_3[(uint64_t)*(byte *)(lVar11 + -8 + param_2) + 1];
            uVar6 = uVar6 + uVar5;
            uVar5 = uVar5 & 0xffffffffffffff00 | uVar12 >> ((byte)uVar5 & 0x3f);
            *puVar16 = uVar5 >> (-(char)uVar6 & 0x3fU);
            lVar10 = 7;
            lVar4 = 0;
            uVar12 = 0;
            do {
              uVar13 = param_3[(uint64_t)*(byte *)(lVar2 + -7 + lVar10) + 1];
              uVar12 = uVar12 >> ((byte)uVar13 & 0x3f) | uVar13;
              lVar4 = lVar4 + uVar13;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
            uVar15 = (uVar6 & 0xff) >> 3;
            uVar13 = param_3[(uint64_t)*(byte *)(param_2 + -0x10 + lVar11) + 1];
            uVar12 = uVar5 >> ((byte)(lVar4 + uVar13) & 0x3f) | uVar13 & 0xffffffffffffff00 |
                     uVar12 >> ((byte)uVar13 & 0x3f);
            uVar6 = lVar4 + uVar13 + (uint64_t)((uint)uVar6 & 7);
            *(uint64_t *)((int64_t)puVar16 + uVar15) = uVar12 >> (-(char)uVar6 & 0x3fU);
            puVar16 = (uint64_t *)((int64_t)puVar16 + ((uVar6 & 0xff) >> 3) + uVar15);
            uVar6 = (uint64_t)((uint)uVar6 & 7);
            lVar2 = lVar2 + -0x10;
            param_1 = lVar11 - 0x10U & 0xffffffff;
          } while (0x10 < iVar7);
        }
        break;
      case 8:
        if ((int)uVar9 % 7 < 1) {
          uVar6 = 0;
          uVar12 = 0;
        }
        else {
          pbVar3 = (byte *)((int)uVar9 + param_2);
          iVar7 = (int)uVar9 % 7 + 1;
          uVar5 = 0;
          uVar12 = 0;
          do {
            pbVar3 = pbVar3 + -1;
            uVar6 = param_3[(uint64_t)*pbVar3 + 1];
            uVar5 = uVar5 + uVar6;
            uVar12 = uVar6 & 0xffffffffffffff00 | uVar12 >> ((byte)uVar6 & 0x3f);
            param_1 = (uint64_t)((int)param_1 - 1);
            iVar7 = iVar7 + -1;
          } while (1 < iVar7);
          uVar6 = (uint64_t)((uint)uVar5 & 7);
          *this_ptr = uVar12 >> (-(char)uVar5 & 0x3fU);
          puVar16 = (uint64_t *)(((uVar5 & 0xff) >> 3) + (int64_t)this_ptr);
        }
        uVar1 = (int)param_1 * -0x49249249 + 0x12492492;
        if (0x12492492 < (uVar1 >> 1 | (uint)((uVar1 & 1) != 0) << 0x1f)) {
          lVar10 = (int64_t)(int)param_1;
          lVar2 = 6;
          do {
            uVar5 = param_3[(uint64_t)*(byte *)(param_2 + lVar10 + -7 + lVar2) + 1];
            uVar12 = uVar12 >> ((byte)uVar5 & 0x3f) | uVar5;
            uVar6 = uVar6 + uVar5;
            lVar2 = lVar2 + -1;
          } while (lVar2 != 0);
          param_1 = lVar10 - 7;
          uVar5 = param_3[(uint64_t)*(byte *)(param_2 + -7 + lVar10) + 1];
          uVar13 = uVar6 + uVar5;
          uVar12 = uVar12 >> ((byte)uVar5 & 0x3f) | uVar5 & 0xffffffffffffff00;
          uVar6 = (uint64_t)((uint)uVar13 & 7);
          *puVar16 = uVar12 >> (-(char)uVar13 & 0x3fU);
          puVar16 = (uint64_t *)((int64_t)puVar16 + ((uVar13 & 0xff) >> 3));
        }
        if (0 < (int)param_1) {
          lVar2 = ((int)param_1 + -7) + param_2 + -1;
          do {
            iVar7 = (int)param_1;
            lVar10 = 6;
            do {
              uVar5 = param_3[(uint64_t)*(byte *)((param_1 & 0xffffffff) + param_2 + -7 + lVar10) +
                              1];
              uVar12 = uVar12 >> ((byte)uVar5 & 0x3f) | uVar5;
              uVar6 = uVar6 + uVar5;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
            lVar11 = (int64_t)iVar7;
            uVar5 = param_3[(uint64_t)*(byte *)(lVar11 + -7 + param_2) + 1];
            uVar6 = uVar6 + uVar5;
            uVar5 = uVar5 & 0xffffffffffffff00 | uVar12 >> ((byte)uVar5 & 0x3f);
            *puVar16 = uVar5 >> (-(char)uVar6 & 0x3fU);
            lVar10 = 6;
            lVar4 = 0;
            uVar12 = 0;
            do {
              uVar13 = param_3[(uint64_t)*(byte *)(lVar2 + -6 + lVar10) + 1];
              uVar12 = uVar12 >> ((byte)uVar13 & 0x3f) | uVar13;
              lVar4 = lVar4 + uVar13;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
            uVar15 = (uVar6 & 0xff) >> 3;
            uVar13 = param_3[(uint64_t)*(byte *)(param_2 + -0xe + lVar11) + 1];
            uVar12 = uVar5 >> ((byte)(lVar4 + uVar13) & 0x3f) | uVar13 & 0xffffffffffffff00 |
                     uVar12 >> ((byte)uVar13 & 0x3f);
            uVar6 = lVar4 + uVar13 + (uint64_t)((uint)uVar6 & 7);
            *(uint64_t *)((int64_t)puVar16 + uVar15) = uVar12 >> (-(char)uVar6 & 0x3fU);
            puVar16 = (uint64_t *)((int64_t)puVar16 + ((uVar6 & 0xff) >> 3) + uVar15);
            uVar6 = (uint64_t)((uint)uVar6 & 7);
            lVar2 = lVar2 + -0xe;
            param_1 = lVar11 - 0xeU & 0xffffffff;
          } while (0xe < iVar7);
        }
        break;
      case 9:
        if ((int)uVar9 % 6 < 1) {
          uVar6 = 0;
          uVar12 = 0;
        }
        else {
          pbVar3 = (byte *)((int)uVar9 + param_2);
          iVar7 = (int)uVar9 % 6 + 1;
          uVar5 = 0;
          uVar12 = 0;
          do {
            pbVar3 = pbVar3 + -1;
            uVar6 = param_3[(uint64_t)*pbVar3 + 1];
            uVar5 = uVar5 + uVar6;
            uVar12 = uVar6 & 0xffffffffffffff00 | uVar12 >> ((byte)uVar6 & 0x3f);
            param_1 = (uint64_t)((int)param_1 - 1);
            iVar7 = iVar7 + -1;
          } while (1 < iVar7);
          uVar6 = (uint64_t)((uint)uVar5 & 7);
          *this_ptr = uVar12 >> (-(char)uVar5 & 0x3fU);
          puVar16 = (uint64_t *)(((uVar5 & 0xff) >> 3) + (int64_t)this_ptr);
        }
        iVar7 = (int)param_1;
        if (0x15555554 < (iVar7 * -0x55555555 + 0x2aaaaaa8U >> 2 | iVar7 * -0x40000000)) {
          lVar10 = (int64_t)iVar7;
          lVar2 = 5;
          do {
            uVar5 = param_3[(uint64_t)*(byte *)(param_2 + lVar10 + -6 + lVar2) + 1];
            uVar12 = uVar12 >> ((byte)uVar5 & 0x3f) | uVar5;
            uVar6 = uVar6 + uVar5;
            lVar2 = lVar2 + -1;
          } while (lVar2 != 0);
          param_1 = lVar10 - 6;
          uVar5 = param_3[(uint64_t)*(byte *)(param_2 + -6 + lVar10) + 1];
          uVar13 = uVar6 + uVar5;
          uVar12 = uVar12 >> ((byte)uVar5 & 0x3f) | uVar5 & 0xffffffffffffff00;
          uVar6 = (uint64_t)((uint)uVar13 & 7);
          *puVar16 = uVar12 >> (-(char)uVar13 & 0x3fU);
          puVar16 = (uint64_t *)((int64_t)puVar16 + ((uVar13 & 0xff) >> 3));
        }
        if (0 < (int)param_1) {
          lVar2 = ((int)param_1 + -6) + param_2 + -1;
          do {
            iVar7 = (int)param_1;
            lVar10 = 5;
            do {
              uVar5 = param_3[(uint64_t)*(byte *)((param_1 & 0xffffffff) + param_2 + -6 + lVar10) +
                              1];
              uVar12 = uVar12 >> ((byte)uVar5 & 0x3f) | uVar5;
              uVar6 = uVar6 + uVar5;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
            lVar11 = (int64_t)iVar7;
            uVar5 = param_3[(uint64_t)*(byte *)(lVar11 + -6 + param_2) + 1];
            uVar6 = uVar6 + uVar5;
            uVar5 = uVar5 & 0xffffffffffffff00 | uVar12 >> ((byte)uVar5 & 0x3f);
            *puVar16 = uVar5 >> (-(char)uVar6 & 0x3fU);
            lVar10 = 5;
            lVar4 = 0;
            uVar12 = 0;
            do {
              uVar13 = param_3[(uint64_t)*(byte *)(lVar2 + -5 + lVar10) + 1];
              uVar12 = uVar12 >> ((byte)uVar13 & 0x3f) | uVar13;
              lVar4 = lVar4 + uVar13;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
            uVar15 = (uVar6 & 0xff) >> 3;
            uVar13 = param_3[(uint64_t)*(byte *)(param_2 + -0xc + lVar11) + 1];
            uVar12 = uVar5 >> ((byte)(lVar4 + uVar13) & 0x3f) | uVar13 & 0xffffffffffffff00 |
                     uVar12 >> ((byte)uVar13 & 0x3f);
            uVar6 = lVar4 + uVar13 + (uint64_t)((uint)uVar6 & 7);
            *(uint64_t *)((int64_t)puVar16 + uVar15) = uVar12 >> (-(char)uVar6 & 0x3fU);
            puVar16 = (uint64_t *)((int64_t)puVar16 + ((uVar6 & 0xff) >> 3) + uVar15);
            uVar6 = (uint64_t)((uint)uVar6 & 7);
            lVar2 = lVar2 + -0xc;
            param_1 = lVar11 - 0xcU & 0xffffffff;
          } while (0xc < iVar7);
        }
        break;
      case 10:
        if ((int)uVar9 % 5 < 1) {
          uVar6 = 0;
          uVar12 = 0;
        }
        else {
          pbVar3 = (byte *)((int)uVar9 + param_2);
          iVar7 = (int)uVar9 % 5 + 1;
          uVar5 = 0;
          uVar12 = 0;
          do {
            pbVar3 = pbVar3 + -1;
            uVar6 = param_3[(uint64_t)*pbVar3 + 1];
            uVar5 = uVar5 + uVar6;
            uVar12 = uVar6 & 0xffffffffffffff00 | uVar12 >> ((byte)uVar6 & 0x3f);
            param_1 = (uint64_t)((int)param_1 - 1);
            iVar7 = iVar7 + -1;
          } while (1 < iVar7);
          uVar6 = (uint64_t)((uint)uVar5 & 7);
          *this_ptr = uVar12 >> (-(char)uVar5 & 0x3fU);
          puVar16 = (uint64_t *)(((uVar5 & 0xff) >> 3) + (int64_t)this_ptr);
        }
        uVar1 = (int)param_1 * -0x33333333 + 0x19999998;
        if (0x19999998 < (uVar1 >> 1 | (uint)((uVar1 & 1) != 0) << 0x1f)) {
          lVar10 = (int64_t)(int)param_1;
          lVar2 = 4;
          do {
            uVar5 = param_3[(uint64_t)*(byte *)(lVar10 + param_2 + -5 + lVar2) + 1];
            uVar12 = uVar12 >> ((byte)uVar5 & 0x3f) | uVar5;
            uVar6 = uVar6 + uVar5;
            lVar2 = lVar2 + -1;
          } while (lVar2 != 0);
          uVar5 = param_3[(uint64_t)*(byte *)(param_2 + -5 + lVar10) + 1];
          param_1 = lVar10 - 5;
          uVar12 = uVar12 >> ((byte)uVar5 & 0x3f) | uVar5;
          uVar5 = uVar6 + uVar5;
          uVar6 = (uint64_t)((uint)uVar5 & 7);
          *puVar16 = uVar12 >> (-(char)uVar5 & 0x3fU);
          puVar16 = (uint64_t *)((int64_t)puVar16 + ((uVar5 & 0xff) >> 3));
        }
        if (0 < (int)param_1) {
          lVar2 = ((int)param_1 + -5) + param_2 + -1;
          do {
            iVar7 = (int)param_1;
            lVar10 = 4;
            do {
              uVar5 = param_3[(uint64_t)*(byte *)((param_1 & 0xffffffff) + param_2 + -5 + lVar10) +
                              1];
              uVar12 = uVar12 >> ((byte)uVar5 & 0x3f) | uVar5;
              uVar6 = uVar6 + uVar5;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
            lVar11 = (int64_t)iVar7;
            uVar5 = param_3[(uint64_t)*(byte *)(lVar11 + -5 + param_2) + 1];
            uVar13 = uVar12 >> ((byte)uVar5 & 0x3f) | uVar5;
            uVar6 = uVar6 + uVar5;
            *puVar16 = uVar13 >> (-(char)uVar6 & 0x3fU);
            lVar10 = 4;
            lVar4 = 0;
            uVar12 = 0;
            do {
              uVar5 = param_3[(uint64_t)*(byte *)(lVar2 + -4 + lVar10) + 1];
              uVar12 = uVar12 >> ((byte)uVar5 & 0x3f) | uVar5;
              lVar4 = lVar4 + uVar5;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
            uVar15 = (uVar6 & 0xff) >> 3;
            uVar5 = param_3[(uint64_t)*(byte *)(param_2 + -10 + lVar11) + 1];
            uVar12 = uVar13 >> ((byte)(lVar4 + uVar5) & 0x3f) | uVar5 |
                     uVar12 >> ((byte)uVar5 & 0x3f);
            uVar6 = lVar4 + uVar5 + (uint64_t)((uint)uVar6 & 7);
            *(uint64_t *)((int64_t)puVar16 + uVar15) = uVar12 >> (-(char)uVar6 & 0x3fU);
            puVar16 = (uint64_t *)((int64_t)puVar16 + ((uVar6 & 0xff) >> 3) + uVar15);
            uVar6 = (uint64_t)((uint)uVar6 & 7);
            lVar2 = lVar2 + -10;
            param_1 = lVar11 - 10U & 0xffffffff;
          } while (10 < iVar7);
        }
        break;
      case 0xb:
        if ((int)uVar9 % 5 < 1) {
          uVar6 = 0;
          uVar12 = 0;
        }
        else {
          pbVar3 = (byte *)((int)uVar9 + param_2);
          iVar7 = (int)uVar9 % 5 + 1;
          uVar5 = 0;
          uVar12 = 0;
          do {
            pbVar3 = pbVar3 + -1;
            uVar6 = param_3[(uint64_t)*pbVar3 + 1];
            uVar5 = uVar5 + uVar6;
            uVar12 = uVar6 & 0xffffffffffffff00 | uVar12 >> ((byte)uVar6 & 0x3f);
            param_1 = (uint64_t)((int)param_1 - 1);
            iVar7 = iVar7 + -1;
          } while (1 < iVar7);
          uVar6 = (uint64_t)((uint)uVar5 & 7);
          *this_ptr = uVar12 >> (-(char)uVar5 & 0x3fU);
          puVar16 = (uint64_t *)(((uVar5 & 0xff) >> 3) + (int64_t)this_ptr);
        }
        uVar1 = (int)param_1 * -0x33333333 + 0x19999998;
        if (0x19999998 < (uVar1 >> 1 | (uint)((uVar1 & 1) != 0) << 0x1f)) {
          lVar10 = (int64_t)(int)param_1;
          lVar2 = 4;
          do {
            uVar5 = param_3[(uint64_t)*(byte *)(lVar10 + param_2 + -5 + lVar2) + 1];
            uVar12 = uVar12 >> ((byte)uVar5 & 0x3f) | uVar5;
            uVar6 = uVar6 + uVar5;
            lVar2 = lVar2 + -1;
          } while (lVar2 != 0);
          param_1 = lVar10 - 5;
          uVar5 = param_3[(uint64_t)*(byte *)(param_2 + -5 + lVar10) + 1];
          uVar13 = uVar6 + uVar5;
          uVar12 = uVar12 >> ((byte)uVar5 & 0x3f) | uVar5 & 0xffffffffffffff00;
          uVar6 = (uint64_t)((uint)uVar13 & 7);
          *puVar16 = uVar12 >> (-(char)uVar13 & 0x3fU);
          puVar16 = (uint64_t *)((int64_t)puVar16 + ((uVar13 & 0xff) >> 3));
        }
        if (0 < (int)param_1) {
          lVar2 = ((int)param_1 + -5) + param_2 + -1;
          do {
            iVar7 = (int)param_1;
            lVar10 = 4;
            do {
              uVar5 = param_3[(uint64_t)*(byte *)((param_1 & 0xffffffff) + param_2 + -5 + lVar10) +
                              1];
              uVar12 = uVar12 >> ((byte)uVar5 & 0x3f) | uVar5;
              uVar6 = uVar6 + uVar5;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
            lVar11 = (int64_t)iVar7;
            uVar5 = param_3[(uint64_t)*(byte *)(lVar11 + -5 + param_2) + 1];
            uVar6 = uVar6 + uVar5;
            uVar5 = uVar5 & 0xffffffffffffff00 | uVar12 >> ((byte)uVar5 & 0x3f);
            *puVar16 = uVar5 >> (-(char)uVar6 & 0x3fU);
            lVar10 = 4;
            lVar4 = 0;
            uVar12 = 0;
            do {
              uVar13 = param_3[(uint64_t)*(byte *)(lVar2 + -4 + lVar10) + 1];
              uVar12 = uVar12 >> ((byte)uVar13 & 0x3f) | uVar13;
              lVar4 = lVar4 + uVar13;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
            uVar15 = (uVar6 & 0xff) >> 3;
            uVar13 = param_3[(uint64_t)*(byte *)(param_2 + -10 + lVar11) + 1];
            uVar12 = uVar5 >> ((byte)(lVar4 + uVar13) & 0x3f) | uVar13 & 0xffffffffffffff00 |
                     uVar12 >> ((byte)uVar13 & 0x3f);
            uVar6 = lVar4 + uVar13 + (uint64_t)((uint)uVar6 & 7);
            *(uint64_t *)((int64_t)puVar16 + uVar15) = uVar12 >> (-(char)uVar6 & 0x3fU);
            puVar16 = (uint64_t *)((int64_t)puVar16 + ((uVar6 & 0xff) >> 3) + uVar15);
            uVar6 = (uint64_t)((uint)uVar6 & 7);
            lVar2 = lVar2 + -10;
            param_1 = lVar11 - 10U & 0xffffffff;
          } while (10 < iVar7);
        }
        break;
      default:
        if ((int)uVar9 % 9 < 1) {
          uVar6 = 0;
          uVar12 = 0;
        }
        else {
          pbVar3 = (byte *)((int)uVar9 + param_2);
          iVar7 = (int)uVar9 % 9 + 1;
          uVar5 = 0;
          uVar12 = 0;
          do {
            pbVar3 = pbVar3 + -1;
            uVar6 = param_3[(uint64_t)*pbVar3 + 1];
            uVar5 = uVar5 + uVar6;
            uVar12 = uVar6 & 0xffffffffffffff00 | uVar12 >> ((byte)uVar6 & 0x3f);
            param_1 = (uint64_t)((int)param_1 - 1);
            iVar7 = iVar7 + -1;
          } while (1 < iVar7);
          uVar6 = (uint64_t)((uint)uVar5 & 7);
          *this_ptr = uVar12 >> (-(char)uVar5 & 0x3fU);
          puVar16 = (uint64_t *)(((uVar5 & 0xff) >> 3) + (int64_t)this_ptr);
        }
        uVar1 = (int)param_1 * 0x38e38e39 + 0xe38e38e;
        if (0xe38e38e < (uVar1 >> 1 | (uint)((uVar1 & 1) != 0) << 0x1f)) {
          lVar10 = (int64_t)(int)param_1;
          lVar2 = 8;
          do {
            uVar5 = param_3[(uint64_t)*(byte *)(lVar10 + param_2 + -9 + lVar2) + 1];
            uVar12 = uVar12 >> ((byte)uVar5 & 0x3f) | uVar5;
            uVar6 = uVar6 + uVar5;
            lVar2 = lVar2 + -1;
          } while (lVar2 != 0);
          uVar5 = param_3[(uint64_t)*(byte *)(param_2 + -9 + lVar10) + 1];
          param_1 = lVar10 - 9;
          uVar12 = uVar12 >> ((byte)uVar5 & 0x3f) | uVar5;
          uVar5 = uVar6 + uVar5;
          uVar6 = (uint64_t)((uint)uVar5 & 7);
          *puVar16 = uVar12 >> (-(char)uVar5 & 0x3fU);
          puVar16 = (uint64_t *)((int64_t)puVar16 + ((uVar5 & 0xff) >> 3));
        }
        if (0 < (int)param_1) {
          lVar2 = ((int)param_1 + -9) + param_2 + -1;
          do {
            iVar7 = (int)param_1;
            lVar10 = 8;
            do {
              uVar5 = param_3[(uint64_t)*(byte *)((param_1 & 0xffffffff) + param_2 + -9 + lVar10) +
                              1];
              uVar12 = uVar12 >> ((byte)uVar5 & 0x3f) | uVar5;
              uVar6 = uVar6 + uVar5;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
            lVar11 = (int64_t)iVar7;
            uVar5 = param_3[(uint64_t)*(byte *)(lVar11 + -9 + param_2) + 1];
            uVar13 = uVar12 >> ((byte)uVar5 & 0x3f) | uVar5;
            uVar6 = uVar6 + uVar5;
            *puVar16 = uVar13 >> (-(char)uVar6 & 0x3fU);
            lVar10 = 8;
            lVar4 = 0;
            uVar12 = 0;
            do {
              uVar5 = param_3[(uint64_t)*(byte *)(lVar2 + -8 + lVar10) + 1];
              uVar12 = uVar12 >> ((byte)uVar5 & 0x3f) | uVar5;
              lVar4 = lVar4 + uVar5;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
            uVar15 = (uVar6 & 0xff) >> 3;
            uVar5 = param_3[(uint64_t)*(byte *)(param_2 + -0x12 + lVar11) + 1];
            uVar12 = uVar13 >> ((byte)(lVar4 + uVar5) & 0x3f) | uVar5 |
                     uVar12 >> ((byte)uVar5 & 0x3f);
            uVar6 = lVar4 + uVar5 + (uint64_t)((uint)uVar6 & 7);
            *(uint64_t *)((int64_t)puVar16 + uVar15) = uVar12 >> (-(char)uVar6 & 0x3fU);
            param_1 = lVar11 - 0x12;
            puVar16 = (uint64_t *)((int64_t)puVar16 + ((uVar6 & 0xff) >> 3) + uVar15);
            uVar6 = (uint64_t)((uint)uVar6 & 7);
            lVar2 = lVar2 + -0x12;
          } while (0x12 < iVar7);
        }
      }
    }
    uVar6 = uVar6 + 0x8000000000000001;
    *puVar16 = (uVar12 >> 1 | 0x8000000000000000) >> (-(char)uVar6 & 0x3fU);
    puVar16 = (uint64_t *)(((uVar6 & 0xffffffff) >> 3) + (int64_t)puVar16);
    if (puVar16 < puVar8) {
      return ((uint64_t)((uVar6 & 7) != 0) - (int64_t)this_ptr) + (int64_t)puVar16;
    }
  }
  return 0;
}

