// Function: FUN_00f1fe8c
// Address: 00f1fe8c
// Size: 3743 bytes
// Class: Unknown

int64_t FUN_00f1fe8c(uint64_t param_1,int64_t param_2,uint64_t *param_3)

{
  uint uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint uVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  byte *pbVar7;
  int iVar8;
  uint64_t arg1;
  uint64_t *this_ptr;
  int64_t lVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int64_t lVar13;
  uint64_t uVar14;
  uint64_t *puVar15;
  uint64_t *puVar16;
  
  if ((7 < arg1) && (arg1 != 8)) {
    uVar1 = (uint)*param_3;
    puVar6 = (uint64_t *)((int64_t)this_ptr + (arg1 - 8));
    uVar4 = (uint)param_1;
    puVar16 = this_ptr;
    if ((arg1 < ((*param_3 & 0xffffffff) * param_1 >> 3) + 8) || (0xb < uVar1)) {
      uVar1 = uVar4 + 3;
      if (-1 < (int)uVar4) {
        uVar1 = uVar4;
      }
      iVar8 = uVar4 - (uVar1 & 0xfffffffc);
      if (iVar8 < 1) {
        uVar1 = 0;
        uVar12 = 0;
      }
      else {
        pbVar7 = (byte *)((int)uVar4 + param_2);
        iVar8 = iVar8 + 1;
        uVar3 = 0;
        uVar12 = 0;
        do {
          pbVar7 = pbVar7 + -1;
          uVar2 = param_3[(uint64_t)*pbVar7 + 1];
          uVar3 = uVar3 + uVar2;
          uVar12 = uVar2 & 0xffffffffffffff00 | uVar12 >> (uVar2 & 0x3f);
          param_1 = (uint64_t)((int)param_1 - 1);
          iVar8 = iVar8 + -1;
        } while (1 < iVar8);
        uVar1 = (uint)uVar3 & 7;
        *this_ptr = uVar12 >> ((uint64_t)(byte)-(char)uVar3 & 0x3f);
        puVar16 = (uint64_t *)(((uVar3 & 0xff) >> 3) + (int64_t)this_ptr);
        if (puVar6 < puVar16) {
          puVar16 = puVar6;
        }
      }
      uVar3 = (uint64_t)uVar1;
      if ((param_1 & 7) != 0) {
        lVar5 = (int64_t)(int)param_1;
        lVar9 = 3;
        do {
          uVar2 = param_3[(uint64_t)*(byte *)(param_2 + lVar5 + -4 + lVar9) + 1];
          uVar12 = uVar12 >> (uVar2 & 0x3f) | uVar2;
          uVar3 = uVar3 + uVar2;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        param_1 = lVar5 - 4;
        uVar2 = param_3[(uint64_t)*(byte *)(param_2 + -4 + lVar5) + 1];
        uVar12 = uVar2 & 0xffffffffffffff00 | uVar12 >> (uVar2 & 0x3f);
        uVar2 = uVar3 + uVar2;
        uVar3 = (uint64_t)((uint)uVar2 & 7);
        *puVar16 = uVar12 >> ((uint64_t)(byte)-(char)uVar2 & 0x3f);
        puVar16 = (uint64_t *)(((uVar2 & 0xff) >> 3) + (int64_t)puVar16);
        if (puVar6 < puVar16) {
          puVar16 = puVar6;
        }
      }
      if (0 < (int)param_1) {
        lVar5 = ((int)param_1 + -4) + param_2 + -1;
        do {
          iVar8 = (int)param_1;
          lVar9 = 3;
          do {
            uVar2 = param_3[(uint64_t)*(byte *)((param_1 & 0xffffffff) + param_2 + -4 + lVar9) + 1]
            ;
            uVar12 = uVar12 >> (uVar2 & 0x3f) | uVar2;
            uVar3 = uVar3 + uVar2;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
          lVar13 = (int64_t)iVar8;
          uVar2 = param_3[(uint64_t)*(byte *)(lVar13 + -4 + param_2) + 1];
          uVar3 = uVar3 + uVar2;
          uVar2 = uVar2 & 0xffffffffffffff00 | uVar12 >> (uVar2 & 0x3f);
          *puVar16 = uVar2 >> ((uint64_t)(byte)-(char)uVar3 & 0x3f);
          puVar15 = (uint64_t *)(((uVar3 & 0xff) >> 3) + (int64_t)puVar16);
          lVar9 = 3;
          lVar10 = 0;
          uVar12 = 0;
          do {
            uVar11 = param_3[(uint64_t)*(byte *)(lVar5 + -3 + lVar9) + 1];
            uVar12 = uVar12 >> (uVar11 & 0x3f) | uVar11;
            lVar10 = lVar10 + uVar11;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
          if (puVar6 < puVar15) {
            puVar15 = puVar6;
          }
          uVar11 = param_3[(uint64_t)*(byte *)(param_2 + -8 + lVar13) + 1];
          uVar12 = uVar2 >> (lVar10 + uVar11 & 0x3f) |
                   uVar11 & 0xffffffffffffff00 | uVar12 >> (uVar11 & 0x3f);
          uVar2 = lVar10 + uVar11 + (uint64_t)((uint)uVar3 & 7);
          uVar3 = (uint64_t)((uint)uVar2 & 7);
          puVar16 = (uint64_t *)(((uVar2 & 0xff) >> 3) + (int64_t)puVar15);
          if (puVar6 < puVar16) {
            puVar16 = puVar6;
          }
          *puVar15 = uVar12 >> ((uint64_t)(byte)-(char)uVar2 & 0x3f);
          lVar5 = lVar5 + -8;
          param_1 = lVar13 - 8U & 0xffffffff;
        } while (8 < iVar8);
      }
    }
    else {
      switch(uVar1) {
      case 7:
        uVar1 = uVar4 + 7;
        if (-1 < (int)uVar4) {
          uVar1 = uVar4;
        }
        iVar8 = uVar4 - (uVar1 & 0xfffffff8);
        if (iVar8 < 1) {
          uVar1 = 0;
          uVar12 = 0;
        }
        else {
          pbVar7 = (byte *)((int)uVar4 + param_2);
          iVar8 = iVar8 + 1;
          uVar3 = 0;
          uVar12 = 0;
          do {
            pbVar7 = pbVar7 + -1;
            uVar2 = param_3[(uint64_t)*pbVar7 + 1];
            uVar3 = uVar3 + uVar2;
            uVar12 = uVar2 & 0xffffffffffffff00 | uVar12 >> (uVar2 & 0x3f);
            param_1 = (uint64_t)((int)param_1 - 1);
            iVar8 = iVar8 + -1;
          } while (1 < iVar8);
          uVar1 = (uint)uVar3 & 7;
          *this_ptr = uVar12 >> ((uint64_t)(byte)-(char)uVar3 & 0x3f);
          puVar16 = (uint64_t *)(((uVar3 & 0xff) >> 3) + (int64_t)this_ptr);
        }
        uVar3 = (uint64_t)uVar1;
        if ((param_1 & 0xf) != 0) {
          lVar5 = (int64_t)(int)param_1;
          lVar9 = 7;
          do {
            uVar2 = param_3[(uint64_t)*(byte *)(param_2 + lVar5 + -8 + lVar9) + 1];
            uVar12 = uVar12 >> (uVar2 & 0x3f) | uVar2;
            uVar3 = uVar3 + uVar2;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
          param_1 = lVar5 - 8;
          uVar2 = param_3[(uint64_t)*(byte *)(param_2 + -8 + lVar5) + 1];
          uVar12 = uVar2 & 0xffffffffffffff00 | uVar12 >> (uVar2 & 0x3f);
          uVar2 = uVar3 + uVar2;
          uVar3 = (uint64_t)((uint)uVar2 & 7);
          *puVar16 = uVar12 >> ((uint64_t)(byte)-(char)uVar2 & 0x3f);
          puVar16 = (uint64_t *)((int64_t)puVar16 + ((uVar2 & 0xff) >> 3));
        }
        if (0 < (int)param_1) {
          lVar5 = ((int)param_1 + -8) + param_2 + -1;
          do {
            iVar8 = (int)param_1;
            lVar9 = 7;
            do {
              uVar2 = param_3[(uint64_t)*(byte *)((param_1 & 0xffffffff) + param_2 + -8 + lVar9) +
                              1];
              uVar12 = uVar12 >> (uVar2 & 0x3f) | uVar2;
              uVar3 = uVar3 + uVar2;
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
            lVar13 = (int64_t)iVar8;
            uVar2 = param_3[(uint64_t)*(byte *)(lVar13 + -8 + param_2) + 1];
            uVar3 = uVar3 + uVar2;
            uVar2 = uVar2 & 0xffffffffffffff00 | uVar12 >> (uVar2 & 0x3f);
            *puVar16 = uVar2 >> ((uint64_t)(byte)-(char)uVar3 & 0x3f);
            lVar9 = 7;
            lVar10 = 0;
            uVar12 = 0;
            do {
              uVar11 = param_3[(uint64_t)*(byte *)(lVar5 + -7 + lVar9) + 1];
              uVar12 = uVar12 >> (uVar11 & 0x3f) | uVar11;
              lVar10 = lVar10 + uVar11;
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
            uVar11 = param_3[(uint64_t)*(byte *)(param_2 + -0x10 + lVar13) + 1];
            uVar14 = (uVar3 & 0xff) >> 3;
            uVar12 = uVar2 >> (lVar10 + uVar11 & 0x3f) |
                     uVar11 & 0xffffffffffffff00 | uVar12 >> (uVar11 & 0x3f);
            uVar3 = lVar10 + uVar11 + (uint64_t)((uint)uVar3 & 7);
            *(uint64_t *)((int64_t)puVar16 + uVar14) =
                 uVar12 >> ((uint64_t)(byte)-(char)uVar3 & 0x3f);
            puVar16 = (uint64_t *)((int64_t)puVar16 + ((uVar3 & 0xff) >> 3) + uVar14);
            uVar3 = (uint64_t)((uint)uVar3 & 7);
            lVar5 = lVar5 + -0x10;
            param_1 = lVar13 - 0x10U & 0xffffffff;
          } while (0x10 < iVar8);
        }
        break;
      case 8:
        if ((int)uVar4 % 7 < 1) {
          uVar3 = 0;
          uVar12 = 0;
        }
        else {
          pbVar7 = (byte *)((int)uVar4 + param_2);
          iVar8 = (int)uVar4 % 7 + 1;
          uVar2 = 0;
          uVar12 = 0;
          do {
            pbVar7 = pbVar7 + -1;
            uVar3 = param_3[(uint64_t)*pbVar7 + 1];
            uVar2 = uVar2 + uVar3;
            uVar12 = uVar3 & 0xffffffffffffff00 | uVar12 >> (uVar3 & 0x3f);
            param_1 = (uint64_t)((int)param_1 - 1);
            iVar8 = iVar8 + -1;
          } while (1 < iVar8);
          uVar3 = (uint64_t)((uint)uVar2 & 7);
          *this_ptr = uVar12 >> ((uint64_t)(byte)-(char)uVar2 & 0x3f);
          puVar16 = (uint64_t *)(((uVar2 & 0xff) >> 3) + (int64_t)this_ptr);
        }
        iVar8 = (int)param_1;
        if (0x12492492 < (iVar8 * -0x49249249 + 0x12492492U >> 1 | iVar8 * -0x80000000)) {
          lVar5 = (int64_t)iVar8;
          lVar9 = 6;
          do {
            uVar2 = param_3[(uint64_t)*(byte *)(param_2 + lVar5 + -7 + lVar9) + 1];
            uVar12 = uVar12 >> (uVar2 & 0x3f) | uVar2;
            uVar3 = uVar3 + uVar2;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
          param_1 = lVar5 - 7;
          uVar2 = param_3[(uint64_t)*(byte *)(param_2 + -7 + lVar5) + 1];
          uVar12 = uVar2 & 0xffffffffffffff00 | uVar12 >> (uVar2 & 0x3f);
          uVar2 = uVar3 + uVar2;
          uVar3 = (uint64_t)((uint)uVar2 & 7);
          *puVar16 = uVar12 >> ((uint64_t)(byte)-(char)uVar2 & 0x3f);
          puVar16 = (uint64_t *)((int64_t)puVar16 + ((uVar2 & 0xff) >> 3));
        }
        if (0 < (int)param_1) {
          lVar5 = ((int)param_1 + -7) + param_2 + -1;
          do {
            iVar8 = (int)param_1;
            lVar9 = 6;
            do {
              uVar2 = param_3[(uint64_t)*(byte *)((param_1 & 0xffffffff) + param_2 + -7 + lVar9) +
                              1];
              uVar12 = uVar12 >> (uVar2 & 0x3f) | uVar2;
              uVar3 = uVar3 + uVar2;
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
            lVar13 = (int64_t)iVar8;
            uVar2 = param_3[(uint64_t)*(byte *)(lVar13 + -7 + param_2) + 1];
            uVar3 = uVar3 + uVar2;
            uVar2 = uVar2 & 0xffffffffffffff00 | uVar12 >> (uVar2 & 0x3f);
            *puVar16 = uVar2 >> ((uint64_t)(byte)-(char)uVar3 & 0x3f);
            lVar9 = 6;
            lVar10 = 0;
            uVar12 = 0;
            do {
              uVar11 = param_3[(uint64_t)*(byte *)(lVar5 + -6 + lVar9) + 1];
              uVar12 = uVar12 >> (uVar11 & 0x3f) | uVar11;
              lVar10 = lVar10 + uVar11;
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
            uVar11 = param_3[(uint64_t)*(byte *)(param_2 + -0xe + lVar13) + 1];
            uVar14 = (uVar3 & 0xff) >> 3;
            uVar12 = uVar2 >> (lVar10 + uVar11 & 0x3f) |
                     uVar11 & 0xffffffffffffff00 | uVar12 >> (uVar11 & 0x3f);
            uVar3 = lVar10 + uVar11 + (uint64_t)((uint)uVar3 & 7);
            *(uint64_t *)((int64_t)puVar16 + uVar14) =
                 uVar12 >> ((uint64_t)(byte)-(char)uVar3 & 0x3f);
            puVar16 = (uint64_t *)((int64_t)puVar16 + ((uVar3 & 0xff) >> 3) + uVar14);
            uVar3 = (uint64_t)((uint)uVar3 & 7);
            lVar5 = lVar5 + -0xe;
            param_1 = lVar13 - 0xeU & 0xffffffff;
          } while (0xe < iVar8);
        }
        break;
      case 9:
        if ((int)uVar4 % 6 < 1) {
          uVar3 = 0;
          uVar12 = 0;
        }
        else {
          pbVar7 = (byte *)((int)uVar4 + param_2);
          iVar8 = (int)uVar4 % 6 + 1;
          uVar2 = 0;
          uVar12 = 0;
          do {
            pbVar7 = pbVar7 + -1;
            uVar3 = param_3[(uint64_t)*pbVar7 + 1];
            uVar2 = uVar2 + uVar3;
            uVar12 = uVar3 & 0xffffffffffffff00 | uVar12 >> (uVar3 & 0x3f);
            param_1 = (uint64_t)((int)param_1 - 1);
            iVar8 = iVar8 + -1;
          } while (1 < iVar8);
          uVar3 = (uint64_t)((uint)uVar2 & 7);
          *this_ptr = uVar12 >> ((uint64_t)(byte)-(char)uVar2 & 0x3f);
          puVar16 = (uint64_t *)(((uVar2 & 0xff) >> 3) + (int64_t)this_ptr);
        }
        iVar8 = (int)param_1;
        if (0x15555554 < (iVar8 * -0x55555555 + 0x2aaaaaa8U >> 2 | iVar8 * -0x40000000)) {
          lVar5 = (int64_t)iVar8;
          lVar9 = 5;
          do {
            uVar2 = param_3[(uint64_t)*(byte *)(param_2 + lVar5 + -6 + lVar9) + 1];
            uVar12 = uVar12 >> (uVar2 & 0x3f) | uVar2;
            uVar3 = uVar3 + uVar2;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
          param_1 = lVar5 - 6;
          uVar2 = param_3[(uint64_t)*(byte *)(param_2 + -6 + lVar5) + 1];
          uVar12 = uVar2 & 0xffffffffffffff00 | uVar12 >> (uVar2 & 0x3f);
          uVar2 = uVar3 + uVar2;
          uVar3 = (uint64_t)((uint)uVar2 & 7);
          *puVar16 = uVar12 >> ((uint64_t)(byte)-(char)uVar2 & 0x3f);
          puVar16 = (uint64_t *)((int64_t)puVar16 + ((uVar2 & 0xff) >> 3));
        }
        if (0 < (int)param_1) {
          lVar5 = ((int)param_1 + -6) + param_2 + -1;
          do {
            iVar8 = (int)param_1;
            lVar9 = 5;
            do {
              uVar2 = param_3[(uint64_t)*(byte *)((param_1 & 0xffffffff) + param_2 + -6 + lVar9) +
                              1];
              uVar12 = uVar12 >> (uVar2 & 0x3f) | uVar2;
              uVar3 = uVar3 + uVar2;
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
            lVar13 = (int64_t)iVar8;
            uVar2 = param_3[(uint64_t)*(byte *)(lVar13 + -6 + param_2) + 1];
            uVar3 = uVar3 + uVar2;
            uVar2 = uVar2 & 0xffffffffffffff00 | uVar12 >> (uVar2 & 0x3f);
            *puVar16 = uVar2 >> ((uint64_t)(byte)-(char)uVar3 & 0x3f);
            lVar9 = 5;
            lVar10 = 0;
            uVar12 = 0;
            do {
              uVar11 = param_3[(uint64_t)*(byte *)(lVar5 + -5 + lVar9) + 1];
              uVar12 = uVar12 >> (uVar11 & 0x3f) | uVar11;
              lVar10 = lVar10 + uVar11;
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
            uVar11 = param_3[(uint64_t)*(byte *)(param_2 + -0xc + lVar13) + 1];
            uVar14 = (uVar3 & 0xff) >> 3;
            uVar12 = uVar2 >> (lVar10 + uVar11 & 0x3f) |
                     uVar11 & 0xffffffffffffff00 | uVar12 >> (uVar11 & 0x3f);
            uVar3 = lVar10 + uVar11 + (uint64_t)((uint)uVar3 & 7);
            *(uint64_t *)((int64_t)puVar16 + uVar14) =
                 uVar12 >> ((uint64_t)(byte)-(char)uVar3 & 0x3f);
            puVar16 = (uint64_t *)((int64_t)puVar16 + ((uVar3 & 0xff) >> 3) + uVar14);
            uVar3 = (uint64_t)((uint)uVar3 & 7);
            lVar5 = lVar5 + -0xc;
            param_1 = lVar13 - 0xcU & 0xffffffff;
          } while (0xc < iVar8);
        }
        break;
      case 10:
        if ((int)uVar4 % 5 < 1) {
          uVar3 = 0;
          uVar12 = 0;
        }
        else {
          pbVar7 = (byte *)((int)uVar4 + param_2);
          iVar8 = (int)uVar4 % 5 + 1;
          uVar2 = 0;
          uVar12 = 0;
          do {
            pbVar7 = pbVar7 + -1;
            uVar3 = param_3[(uint64_t)*pbVar7 + 1];
            uVar2 = uVar2 + uVar3;
            uVar12 = uVar3 & 0xffffffffffffff00 | uVar12 >> (uVar3 & 0x3f);
            param_1 = (uint64_t)((int)param_1 - 1);
            iVar8 = iVar8 + -1;
          } while (1 < iVar8);
          uVar3 = (uint64_t)((uint)uVar2 & 7);
          *this_ptr = uVar12 >> ((uint64_t)(byte)-(char)uVar2 & 0x3f);
          puVar16 = (uint64_t *)(((uVar2 & 0xff) >> 3) + (int64_t)this_ptr);
        }
        iVar8 = (int)param_1;
        if (0x19999998 < (iVar8 * -0x33333333 + 0x19999998U >> 1 | iVar8 * -0x80000000)) {
          lVar5 = (int64_t)iVar8;
          lVar9 = 4;
          do {
            uVar2 = param_3[(uint64_t)*(byte *)(lVar5 + param_2 + -5 + lVar9) + 1];
            uVar12 = uVar12 >> (uVar2 & 0x3f) | uVar2;
            uVar3 = uVar3 + uVar2;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
          param_1 = lVar5 - 5;
          uVar2 = param_3[(uint64_t)*(byte *)(param_2 + -5 + lVar5) + 1];
          uVar12 = uVar12 >> (uVar2 & 0x3f) | uVar2;
          uVar2 = uVar3 + uVar2;
          uVar3 = (uint64_t)((uint)uVar2 & 7);
          *puVar16 = uVar12 >> ((uint64_t)(byte)-(char)uVar2 & 0x3f);
          puVar16 = (uint64_t *)((int64_t)puVar16 + ((uVar2 & 0xff) >> 3));
        }
        if (0 < (int)param_1) {
          lVar5 = ((int)param_1 + -5) + param_2 + -1;
          puVar15 = puVar16;
          do {
            iVar8 = (int)param_1;
            lVar9 = 4;
            do {
              uVar2 = param_3[(uint64_t)*(byte *)((param_1 & 0xffffffff) + param_2 + -5 + lVar9) +
                              1];
              uVar12 = uVar12 >> (uVar2 & 0x3f) | uVar2;
              uVar3 = uVar3 + uVar2;
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
            lVar13 = (int64_t)iVar8;
            uVar2 = param_3[(uint64_t)*(byte *)(lVar13 + -5 + param_2) + 1];
            uVar11 = uVar12 >> (uVar2 & 0x3f) | uVar2;
            uVar3 = uVar3 + uVar2;
            *puVar15 = uVar11 >> ((uint64_t)(byte)-(char)uVar3 & 0x3f);
            lVar9 = 4;
            lVar10 = 0;
            uVar12 = 0;
            do {
              uVar2 = param_3[(uint64_t)*(byte *)(lVar5 + -4 + lVar9) + 1];
              uVar12 = uVar12 >> (uVar2 & 0x3f) | uVar2;
              lVar10 = lVar10 + uVar2;
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
            uVar14 = (uVar3 & 0xff) >> 3;
            uVar2 = param_3[(uint64_t)*(byte *)(param_2 + -10 + lVar13) + 1];
            uVar12 = uVar11 >> (lVar10 + uVar2 & 0x3f) | uVar12 >> (uVar2 & 0x3f) | uVar2;
            uVar2 = lVar10 + uVar2 + (uint64_t)((uint)uVar3 & 7);
            puVar16 = (uint64_t *)((int64_t)puVar15 + ((uVar2 & 0xff) >> 3) + uVar14);
            uVar3 = (uint64_t)((uint)uVar2 & 7);
            *(uint64_t *)((int64_t)puVar15 + uVar14) =
                 uVar12 >> ((uint64_t)(byte)-(char)uVar2 & 0x3f);
            lVar5 = lVar5 + -10;
            param_1 = lVar13 - 10U & 0xffffffff;
            puVar15 = puVar16;
          } while (10 < iVar8);
        }
        break;
      case 0xb:
        if ((int)uVar4 % 5 < 1) {
          uVar3 = 0;
          uVar12 = 0;
        }
        else {
          pbVar7 = (byte *)((int)uVar4 + param_2);
          iVar8 = (int)uVar4 % 5 + 1;
          uVar2 = 0;
          uVar12 = 0;
          do {
            pbVar7 = pbVar7 + -1;
            uVar3 = param_3[(uint64_t)*pbVar7 + 1];
            uVar2 = uVar2 + uVar3;
            uVar12 = uVar3 & 0xffffffffffffff00 | uVar12 >> (uVar3 & 0x3f);
            param_1 = (uint64_t)((int)param_1 - 1);
            iVar8 = iVar8 + -1;
          } while (1 < iVar8);
          uVar3 = (uint64_t)((uint)uVar2 & 7);
          *this_ptr = uVar12 >> ((uint64_t)(byte)-(char)uVar2 & 0x3f);
          puVar16 = (uint64_t *)(((uVar2 & 0xff) >> 3) + (int64_t)this_ptr);
        }
        iVar8 = (int)param_1;
        if (0x19999998 < (iVar8 * -0x33333333 + 0x19999998U >> 1 | iVar8 * -0x80000000)) {
          lVar5 = (int64_t)iVar8;
          lVar9 = 4;
          do {
            uVar2 = param_3[(uint64_t)*(byte *)(lVar5 + param_2 + -5 + lVar9) + 1];
            uVar12 = uVar12 >> (uVar2 & 0x3f) | uVar2;
            uVar3 = uVar3 + uVar2;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
          param_1 = lVar5 - 5;
          uVar2 = param_3[(uint64_t)*(byte *)(param_2 + -5 + lVar5) + 1];
          uVar12 = uVar2 & 0xffffffffffffff00 | uVar12 >> (uVar2 & 0x3f);
          uVar2 = uVar3 + uVar2;
          uVar3 = (uint64_t)((uint)uVar2 & 7);
          *puVar16 = uVar12 >> ((uint64_t)(byte)-(char)uVar2 & 0x3f);
          puVar16 = (uint64_t *)((int64_t)puVar16 + ((uVar2 & 0xff) >> 3));
        }
        if (0 < (int)param_1) {
          lVar5 = ((int)param_1 + -5) + param_2 + -1;
          do {
            iVar8 = (int)param_1;
            lVar9 = 4;
            do {
              uVar2 = param_3[(uint64_t)*(byte *)((param_1 & 0xffffffff) + param_2 + -5 + lVar9) +
                              1];
              uVar12 = uVar12 >> (uVar2 & 0x3f) | uVar2;
              uVar3 = uVar3 + uVar2;
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
            lVar13 = (int64_t)iVar8;
            uVar2 = param_3[(uint64_t)*(byte *)(lVar13 + -5 + param_2) + 1];
            uVar3 = uVar3 + uVar2;
            uVar2 = uVar2 & 0xffffffffffffff00 | uVar12 >> (uVar2 & 0x3f);
            *puVar16 = uVar2 >> ((uint64_t)(byte)-(char)uVar3 & 0x3f);
            lVar9 = 4;
            lVar10 = 0;
            uVar12 = 0;
            do {
              uVar11 = param_3[(uint64_t)*(byte *)(lVar5 + -4 + lVar9) + 1];
              uVar12 = uVar12 >> (uVar11 & 0x3f) | uVar11;
              lVar10 = lVar10 + uVar11;
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
            uVar11 = param_3[(uint64_t)*(byte *)(param_2 + -10 + lVar13) + 1];
            uVar14 = (uVar3 & 0xff) >> 3;
            uVar12 = uVar2 >> (lVar10 + uVar11 & 0x3f) |
                     uVar11 & 0xffffffffffffff00 | uVar12 >> (uVar11 & 0x3f);
            uVar3 = lVar10 + uVar11 + (uint64_t)((uint)uVar3 & 7);
            *(uint64_t *)((int64_t)puVar16 + uVar14) =
                 uVar12 >> ((uint64_t)(byte)-(char)uVar3 & 0x3f);
            puVar16 = (uint64_t *)((int64_t)puVar16 + ((uVar3 & 0xff) >> 3) + uVar14);
            uVar3 = (uint64_t)((uint)uVar3 & 7);
            lVar5 = lVar5 + -10;
            param_1 = lVar13 - 10U & 0xffffffff;
          } while (10 < iVar8);
        }
        break;
      default:
        if ((int)uVar4 % 9 < 1) {
          uVar3 = 0;
          uVar12 = 0;
        }
        else {
          pbVar7 = (byte *)((int)uVar4 + param_2);
          iVar8 = (int)uVar4 % 9 + 1;
          uVar2 = 0;
          uVar12 = 0;
          do {
            pbVar7 = pbVar7 + -1;
            uVar3 = param_3[(uint64_t)*pbVar7 + 1];
            uVar2 = uVar2 + uVar3;
            uVar12 = uVar3 & 0xffffffffffffff00 | uVar12 >> (uVar3 & 0x3f);
            param_1 = (uint64_t)((int)param_1 - 1);
            iVar8 = iVar8 + -1;
          } while (1 < iVar8);
          uVar3 = (uint64_t)((uint)uVar2 & 7);
          *this_ptr = uVar12 >> ((uint64_t)(byte)-(char)uVar2 & 0x3f);
          puVar16 = (uint64_t *)(((uVar2 & 0xff) >> 3) + (int64_t)this_ptr);
        }
        iVar8 = (int)param_1;
        if (0xe38e38e < (iVar8 * 0x38e38e39 + 0xe38e38eU >> 1 | iVar8 * -0x80000000)) {
          lVar5 = (int64_t)iVar8;
          lVar9 = 8;
          do {
            uVar2 = param_3[(uint64_t)*(byte *)(lVar5 + param_2 + -9 + lVar9) + 1];
            uVar12 = uVar12 >> (uVar2 & 0x3f) | uVar2;
            uVar3 = uVar3 + uVar2;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
          param_1 = lVar5 - 9;
          uVar2 = param_3[(uint64_t)*(byte *)(param_2 + -9 + lVar5) + 1];
          uVar12 = uVar12 >> (uVar2 & 0x3f) | uVar2;
          uVar2 = uVar3 + uVar2;
          uVar3 = (uint64_t)((uint)uVar2 & 7);
          *puVar16 = uVar12 >> ((uint64_t)(byte)-(char)uVar2 & 0x3f);
          puVar16 = (uint64_t *)((int64_t)puVar16 + ((uVar2 & 0xff) >> 3));
        }
        if (0 < (int)param_1) {
          lVar5 = ((int)param_1 + -9) + param_2 + -1;
          puVar15 = puVar16;
          do {
            iVar8 = (int)param_1;
            lVar9 = 8;
            do {
              uVar2 = param_3[(uint64_t)*(byte *)((param_1 & 0xffffffff) + param_2 + -9 + lVar9) +
                              1];
              uVar12 = uVar12 >> (uVar2 & 0x3f) | uVar2;
              uVar3 = uVar3 + uVar2;
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
            lVar13 = (int64_t)iVar8;
            uVar2 = param_3[(uint64_t)*(byte *)(lVar13 + -9 + param_2) + 1];
            uVar11 = uVar12 >> (uVar2 & 0x3f) | uVar2;
            uVar3 = uVar3 + uVar2;
            *puVar15 = uVar11 >> ((uint64_t)(byte)-(char)uVar3 & 0x3f);
            lVar9 = 8;
            lVar10 = 0;
            uVar12 = 0;
            do {
              uVar2 = param_3[(uint64_t)*(byte *)(lVar5 + -8 + lVar9) + 1];
              uVar12 = uVar12 >> (uVar2 & 0x3f) | uVar2;
              lVar10 = lVar10 + uVar2;
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
            uVar14 = (uVar3 & 0xff) >> 3;
            uVar2 = param_3[(uint64_t)*(byte *)(param_2 + -0x12 + lVar13) + 1];
            uVar12 = uVar11 >> (lVar10 + uVar2 & 0x3f) | uVar12 >> (uVar2 & 0x3f) | uVar2;
            uVar2 = lVar10 + uVar2 + (uint64_t)((uint)uVar3 & 7);
            puVar16 = (uint64_t *)((int64_t)puVar15 + ((uVar2 & 0xff) >> 3) + uVar14);
            uVar3 = (uint64_t)((uint)uVar2 & 7);
            *(uint64_t *)((int64_t)puVar15 + uVar14) =
                 uVar12 >> ((uint64_t)(byte)-(char)uVar2 & 0x3f);
            lVar5 = lVar5 + -0x12;
            param_1 = lVar13 - 0x12U & 0xffffffff;
            puVar15 = puVar16;
          } while (0x12 < iVar8);
        }
      }
    }
    uVar3 = uVar3 + 0x8000000000000001;
    *puVar16 = (uVar12 >> 1 | 0x8000000000000000) >> ((uint64_t)(byte)-(char)uVar3 & 0x3f);
    puVar16 = (uint64_t *)(((uVar3 & 0xffffffff) >> 3) + (int64_t)puVar16);
    if (puVar16 < puVar6) {
      return ((uint64_t)((uVar3 & 7) != 0) - (int64_t)this_ptr) + (int64_t)puVar16;
    }
  }
  return 0;
}

