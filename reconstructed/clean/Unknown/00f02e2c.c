// Function: FUN_00f02e2c
// Address: 00f02e2c
// Size: 1304 bytes
// Class: Unknown

uint64_t FUN_00f02e2c(uint64_t param_1,byte *param_2,uint *param_3)

{
  void*puVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint64_t uVar8;
  uint64_t arg1;
  void*this_ptr;
  uint64_t uVar9;
  uint64_t uVar10;
  uint uVar11;
  uint uVar12;
  int64_t lVar13;
  byte *pbVar14;
  bool bVar15;
  
  if (param_1 == 0) {
    return 0xffffffffffffffb8;
  }
  if (param_1 < 8) {
    uVar4 = (uint64_t)*param_2;
    switch(param_1) {
    case 7:
      uVar4 = uVar4 | (uint64_t)param_2[6] << 0x30;
    case 6:
      uVar4 = uVar4 + ((uint64_t)param_2[5] << 0x28);
    case 5:
      uVar4 = uVar4 + ((uint64_t)param_2[4] << 0x20);
    case 4:
      uVar4 = uVar4 + (uint64_t)param_2[3] * 0x1000000;
    case 3:
      uVar4 = uVar4 + (uint64_t)param_2[2] * 0x10000;
    case 2:
      uVar4 = uVar4 + (uint64_t)param_2[1] * 0x100;
    }
    if (param_2[param_1 - 1] == 0) {
      return 0xffffffffffffffec;
    }
    uVar5 = LZCOUNT((uint)param_2[param_1 - 1]) + (int)param_1 * -8 + 0x29;
    uVar3 = 0;
  }
  else {
    if (param_2[param_1 - 1] == 0) {
      return 0xffffffffffffffff;
    }
    if (0xffffffffffffff88 < param_1) {
      return param_1;
    }
    uVar4 = *(uint64_t *)(param_2 + (param_1 - 8));
    uVar3 = param_1 - 8;
    uVar5 = LZCOUNT((uint)param_2[param_1 - 1]) - 0x17;
  }
  uVar10 = (uint64_t)uVar5;
  puVar1 = (void*)((int64_t)this_ptr + arg1);
  uVar7 = *param_3;
  uVar11 = uVar7 >> 0x10;
  if (arg1 < 8) {
    if (uVar5 < 0x41) {
      if ((int64_t)uVar3 < 8) {
        if (uVar3 == 0) {
LAB_00f031ef:
          uVar3 = 0;
          goto LAB_00f031f1;
        }
        uVar4 = uVar3 & 0xffffffff;
        if (-1 < (int64_t)(uVar3 - (uVar5 >> 3))) {
          uVar4 = (uint64_t)(uVar5 >> 3);
        }
        uVar5 = uVar5 + (int)uVar4 * -8;
      }
      else {
        uVar4 = (uint64_t)(uVar5 >> 3);
        uVar5 = uVar5 & 7;
      }
      uVar10 = (uint64_t)uVar5;
      uVar3 = uVar3 - uVar4;
      uVar4 = *(uint64_t *)(param_2 + uVar3);
    }
  }
  else if ((uVar7 & 0xfc0000) < 0xc0000) {
    if (uVar5 < 0x41) {
      uVar5 = -uVar11 & 0x3f;
      do {
        if ((int64_t)uVar3 < 8) {
          if (uVar3 == 0) goto LAB_00f031ef;
          lVar13 = uVar3 - (uVar10 >> 3);
          uVar4 = uVar3 & 0xffffffff;
          if (-1 < lVar13) {
            uVar4 = uVar10 >> 3;
          }
          uVar12 = (uint)((uint64_t)lVar13 >> 0x3f);
          uVar6 = (uint)uVar10 + (int)uVar4 * -8;
        }
        else {
          uVar4 = uVar10 >> 3;
          uVar6 = (uint)uVar10 & 7;
          uVar12 = 0;
        }
        uVar10 = (uint64_t)uVar6;
        uVar3 = uVar3 - uVar4;
        uVar4 = *(uint64_t *)(param_2 + uVar3);
        if (((void*)((int64_t)puVar1 - 9U) <= this_ptr) || (uVar12 != 0)) break;
        uVar10 = (uVar4 << (uVar10 & 0x3f)) >> uVar5;
        *this_ptr = (short)param_3[uVar10 + 1];
        uVar6 = *(byte *)((int64_t)param_3 + uVar10 * 4 + 6) + uVar6;
        uVar8 = (uint64_t)*(byte *)((int64_t)param_3 + uVar10 * 4 + 7);
        uVar10 = (uVar4 << ((uint64_t)uVar6 & 0x3f)) >> uVar5;
        *(short *)((int64_t)this_ptr + uVar8) = (short)param_3[uVar10 + 1];
        uVar6 = *(byte *)((int64_t)param_3 + uVar10 * 4 + 6) + uVar6;
        uVar9 = (uint64_t)*(byte *)((int64_t)param_3 + uVar10 * 4 + 7);
        lVar13 = uVar9 + uVar8;
        uVar10 = (uVar4 << ((uint64_t)uVar6 & 0x3f)) >> uVar5;
        *(short *)((int64_t)this_ptr + uVar9 + uVar8) = (short)param_3[uVar10 + 1];
        uVar6 = *(byte *)((int64_t)param_3 + uVar10 * 4 + 6) + uVar6;
        uVar8 = (uint64_t)*(byte *)((int64_t)param_3 + uVar10 * 4 + 7);
        lVar2 = uVar8 + lVar13;
        uVar10 = (uVar4 << ((uint64_t)uVar6 & 0x3f)) >> uVar5;
        *(short *)((int64_t)this_ptr + uVar8 + lVar13) = (short)param_3[uVar10 + 1];
        uVar6 = *(byte *)((int64_t)param_3 + uVar10 * 4 + 6) + uVar6;
        uVar9 = (uint64_t)*(byte *)((int64_t)param_3 + uVar10 * 4 + 7);
        uVar8 = (uVar4 << ((uint64_t)uVar6 & 0x3f)) >> uVar5;
        *(short *)((int64_t)this_ptr + uVar9 + lVar2) = (short)param_3[uVar8 + 1];
        uVar6 = *(byte *)((int64_t)param_3 + uVar8 * 4 + 6) + uVar6;
        uVar10 = (uint64_t)uVar6;
        this_ptr = (void*)
                    ((int64_t)this_ptr +
                    (uint64_t)*(byte *)((int64_t)param_3 + uVar8 * 4 + 7) + uVar9 + lVar2);
      } while (uVar6 < 0x41);
    }
  }
  else if (uVar5 < 0x41) {
    uVar5 = -uVar11 & 0x3f;
    do {
      if ((int64_t)uVar3 < 8) {
        if (uVar3 == 0) goto LAB_00f031ef;
        lVar13 = uVar3 - (uVar10 >> 3);
        uVar4 = uVar3 & 0xffffffff;
        if (-1 < lVar13) {
          uVar4 = uVar10 >> 3;
        }
        uVar12 = (uint)((uint64_t)lVar13 >> 0x3f);
        uVar6 = (uint)uVar10 + (int)uVar4 * -8;
      }
      else {
        uVar4 = uVar10 >> 3;
        uVar6 = (uint)uVar10 & 7;
        uVar12 = 0;
      }
      uVar10 = (uint64_t)uVar6;
      uVar3 = uVar3 - uVar4;
      uVar4 = *(uint64_t *)(param_2 + uVar3);
      if (((void*)((int64_t)puVar1 - 7U) <= this_ptr) || (uVar12 != 0)) break;
      uVar10 = (uVar4 << (uVar10 & 0x3f)) >> uVar5;
      *this_ptr = (short)param_3[uVar10 + 1];
      uVar6 = *(byte *)((int64_t)param_3 + uVar10 * 4 + 6) + uVar6;
      uVar8 = (uint64_t)*(byte *)((int64_t)param_3 + uVar10 * 4 + 7);
      uVar10 = (uVar4 << ((uint64_t)uVar6 & 0x3f)) >> uVar5;
      *(short *)((int64_t)this_ptr + uVar8) = (short)param_3[uVar10 + 1];
      uVar6 = *(byte *)((int64_t)param_3 + uVar10 * 4 + 6) + uVar6;
      uVar9 = (uint64_t)*(byte *)((int64_t)param_3 + uVar10 * 4 + 7);
      lVar13 = uVar9 + uVar8;
      uVar10 = (uVar4 << ((uint64_t)uVar6 & 0x3f)) >> uVar5;
      *(short *)((int64_t)this_ptr + uVar9 + uVar8) = (short)param_3[uVar10 + 1];
      uVar6 = *(byte *)((int64_t)param_3 + uVar10 * 4 + 6) + uVar6;
      uVar8 = (uint64_t)*(byte *)((int64_t)param_3 + uVar10 * 4 + 7);
      uVar9 = (uVar4 << ((uint64_t)uVar6 & 0x3f)) >> uVar5;
      *(short *)((int64_t)this_ptr + uVar8 + lVar13) = (short)param_3[uVar9 + 1];
      uVar6 = *(byte *)((int64_t)param_3 + uVar9 * 4 + 6) + uVar6;
      uVar10 = (uint64_t)uVar6;
      this_ptr = (void*)
                  ((int64_t)this_ptr +
                  (uint64_t)*(byte *)((int64_t)param_3 + uVar9 * 4 + 7) + uVar8 + lVar13);
    } while (uVar6 < 0x41);
  }
LAB_00f031f1:
  pbVar14 = param_2 + uVar3;
  if (1 < (uint64_t)((int64_t)puVar1 - (int64_t)this_ptr)) {
    for (; uVar5 = (uint)uVar10, uVar5 < 0x41;
        uVar10 = (uint64_t)(*(byte *)((int64_t)param_3 + uVar10 * 4 + 6) + uVar5)) {
      if ((int64_t)uVar3 < 8) {
        if (uVar3 == 0) break;
        bVar15 = pbVar14 + -(uVar10 >> 3) < param_2;
        uVar4 = uVar3 & 0xffffffff;
        if (!bVar15) {
          uVar4 = uVar10 >> 3;
        }
        uVar5 = uVar5 + (int)uVar4 * -8;
      }
      else {
        uVar4 = uVar10 >> 3;
        uVar5 = uVar5 & 7;
        bVar15 = false;
      }
      uVar10 = (uint64_t)uVar5;
      uVar3 = uVar3 - uVar4;
      pbVar14 = param_2 + uVar3;
      uVar4 = *(uint64_t *)(param_2 + uVar3);
      if ((puVar1 + -1 < this_ptr) || (bVar15)) break;
      uVar10 = (uVar4 << (uVar10 & 0x3f)) >> (-uVar11 & 0x3f);
      *this_ptr = (short)param_3[uVar10 + 1];
      this_ptr = (void*)
                  ((int64_t)this_ptr + (uint64_t)*(byte *)((int64_t)param_3 + uVar10 * 4 + 7));
    }
    for (; this_ptr <= puVar1 + -1;
        this_ptr = (void*)
                    ((uint64_t)*(byte *)((int64_t)param_3 + uVar3 * 4 + 7) + (int64_t)this_ptr))
    {
      uVar3 = (uVar4 << (uVar10 & 0x3f)) >> (-uVar11 & 0x3f);
      *this_ptr = (short)param_3[uVar3 + 1];
      uVar10 = (uint64_t)((uint)*(byte *)((int64_t)param_3 + uVar3 * 4 + 6) + (int)uVar10);
    }
  }
  uVar5 = (uint)uVar10;
  if (this_ptr < puVar1) {
    uVar4 = (uVar4 << (uVar10 & 0x3f)) >> ((uint64_t)(byte)-(char)(uVar7 >> 0x10) & 0x3f);
    *(char *)this_ptr = (char)param_3[uVar4 + 1];
    if (*(char *)((int64_t)param_3 + uVar4 * 4 + 7) == '\x01') {
      uVar5 = uVar5 + *(byte *)((int64_t)param_3 + uVar4 * 4 + 6);
    }
    else if (uVar5 < 0x40) {
      uVar7 = uVar5 + *(byte *)((int64_t)param_3 + uVar4 * 4 + 6);
      uVar5 = 0x40;
      if (uVar7 < 0x40) {
        uVar5 = uVar7;
      }
    }
  }
  if (uVar5 != 0x40) {
    arg1 = 0xffffffffffffffec;
  }
  if (pbVar14 != param_2) {
    arg1 = 0xffffffffffffffec;
  }
  return arg1;
}

