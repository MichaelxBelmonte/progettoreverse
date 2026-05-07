// Function: FUN_00efeeb5
// Address: 00efeeb5
// Size: 1392 bytes
// Class: Unknown

uint64_t FUN_00efeeb5(uint64_t param_1,byte *param_2,uint *param_3,uint64_t param_4)

{
  void*puVar1;
  char cVar2;
  int64_t lVar3;
  uint uVar4;
  uint64_t uVar5;
  byte bVar6;
  uint64_t uVar7;
  uint64_t arg1;
  void*this_ptr;
  uint64_t uVar8;
  uint64_t uVar9;
  int iVar10;
  int64_t lVar11;
  byte *pbVar12;
  uint uVar13;
  bool bVar14;
  
  if ((param_4 & 1) != 0) {
    uVar9 = FUN_00f02e2c(param_1);
    return uVar9;
  }
  if (param_1 == 0) {
    return 0xffffffffffffffb8;
  }
  if (param_1 < 8) {
    uVar9 = (uint64_t)*param_2;
    switch(param_1) {
    case 7:
      uVar9 = uVar9 | (uint64_t)param_2[6] << 0x30;
    case 6:
      uVar9 = uVar9 + ((uint64_t)param_2[5] << 0x28);
    case 5:
      uVar9 = uVar9 + ((uint64_t)param_2[4] << 0x20);
    case 4:
      uVar9 = uVar9 + (uint64_t)param_2[3] * 0x1000000;
    case 3:
      uVar9 = uVar9 + (uint64_t)param_2[2] * 0x10000;
    case 2:
      uVar9 = uVar9 + (uint64_t)param_2[1] * 0x100;
    }
    bVar6 = param_2[param_1 - 1];
    if (bVar6 == 0) {
      return 0xffffffffffffffec;
    }
    uVar13 = 0x1f;
    if (bVar6 != 0) {
      for (; bVar6 >> uVar13 == 0; uVar13 = uVar13 - 1) {
      }
    }
    uVar13 = (uVar13 ^ 0x1f) + (int)param_1 * -8 + 0x29;
    param_1 = 0;
  }
  else {
    bVar6 = param_2[param_1 - 1];
    if (bVar6 == 0) {
      return 0xffffffffffffffff;
    }
    if (0xffffffffffffff88 < param_1) {
      return param_1;
    }
    uVar9 = *(uint64_t *)(param_2 + (param_1 - 8));
    param_1 = param_1 - 8;
    uVar13 = 0x1f;
    if (bVar6 != 0) {
      for (; bVar6 >> uVar13 == 0; uVar13 = uVar13 - 1) {
      }
    }
    uVar13 = (uVar13 ^ 0x1f) - 0x17;
  }
  puVar1 = (void*)((int64_t)this_ptr + arg1);
  cVar2 = (char)(*param_3 >> 0x10);
  if (arg1 < 8) {
    if (uVar13 < 0x41) {
      if ((int64_t)param_1 < 8) {
        if (param_1 == 0) {
LAB_00eff2bc:
          param_1 = 0;
          goto LAB_00eff2bf;
        }
        uVar4 = (uint)param_1;
        if (-1 < (int64_t)(param_1 - (uVar13 >> 3))) {
          uVar4 = uVar13 >> 3;
        }
        uVar13 = uVar13 + uVar4 * -8;
      }
      else {
        uVar4 = uVar13 >> 3;
        uVar13 = uVar13 & 7;
      }
      param_1 = param_1 - uVar4;
      uVar9 = *(uint64_t *)(param_2 + param_1);
    }
  }
  else if ((*param_3 & 0xfc0000) < 0xc0000) {
    if (uVar13 < 0x41) {
      bVar6 = -cVar2 & 0x3f;
      do {
        if ((int64_t)param_1 < 8) {
          if (param_1 == 0) goto LAB_00eff2bc;
          lVar11 = param_1 - (uVar13 >> 3);
          uVar9 = param_1 & 0xffffffff;
          if (-1 < lVar11) {
            uVar9 = (uint64_t)(uVar13 >> 3);
          }
          uVar4 = (uint)((uint64_t)lVar11 >> 0x3f);
          uVar13 = uVar13 + (int)uVar9 * -8;
        }
        else {
          uVar9 = (uint64_t)(uVar13 >> 3);
          uVar13 = uVar13 & 7;
          uVar4 = 0;
        }
        param_1 = param_1 - uVar9;
        uVar9 = *(uint64_t *)(param_2 + param_1);
        if (((void*)((int64_t)puVar1 - 9U) <= this_ptr) || (uVar4 != 0)) break;
        uVar5 = (uVar9 << ((byte)uVar13 & 0x3f)) >> bVar6;
        *this_ptr = (short)param_3[uVar5 + 1];
        iVar10 = *(byte *)((int64_t)param_3 + uVar5 * 4 + 6) + uVar13;
        uVar5 = (uint64_t)*(byte *)((int64_t)param_3 + uVar5 * 4 + 7);
        uVar7 = (uVar9 << ((byte)iVar10 & 0x3f)) >> bVar6;
        *(short *)((int64_t)this_ptr + uVar5) = (short)param_3[uVar7 + 1];
        iVar10 = (uint)*(byte *)((int64_t)param_3 + uVar7 * 4 + 6) + iVar10;
        uVar8 = (uint64_t)*(byte *)((int64_t)param_3 + uVar7 * 4 + 7);
        uVar7 = (uVar9 << ((byte)iVar10 & 0x3f)) >> bVar6;
        lVar11 = uVar8 + uVar5;
        *(short *)((int64_t)this_ptr + uVar8 + uVar5) = (short)param_3[uVar7 + 1];
        iVar10 = (uint)*(byte *)((int64_t)param_3 + uVar7 * 4 + 6) + iVar10;
        uVar5 = (uint64_t)*(byte *)((int64_t)param_3 + uVar7 * 4 + 7);
        uVar7 = (uVar9 << ((byte)iVar10 & 0x3f)) >> bVar6;
        lVar3 = uVar5 + lVar11;
        *(short *)((int64_t)this_ptr + uVar5 + lVar11) = (short)param_3[uVar7 + 1];
        iVar10 = (uint)*(byte *)((int64_t)param_3 + uVar7 * 4 + 6) + iVar10;
        uVar5 = (uint64_t)*(byte *)((int64_t)param_3 + uVar7 * 4 + 7);
        uVar7 = (uVar9 << ((byte)iVar10 & 0x3f)) >> bVar6;
        *(short *)((int64_t)this_ptr + uVar5 + lVar3) = (short)param_3[uVar7 + 1];
        uVar13 = (uint)*(byte *)((int64_t)param_3 + uVar7 * 4 + 6) + iVar10;
        this_ptr = (void*)
                    ((int64_t)this_ptr +
                    (uint64_t)*(byte *)((int64_t)param_3 + uVar7 * 4 + 7) + uVar5 + lVar3);
      } while (uVar13 < 0x41);
    }
  }
  else if (uVar13 < 0x41) {
    bVar6 = -cVar2 & 0x3f;
    do {
      if ((int64_t)param_1 < 8) {
        if (param_1 == 0) goto LAB_00eff2bc;
        lVar11 = param_1 - (uVar13 >> 3);
        uVar9 = param_1 & 0xffffffff;
        if (-1 < lVar11) {
          uVar9 = (uint64_t)(uVar13 >> 3);
        }
        uVar4 = (uint)((uint64_t)lVar11 >> 0x3f);
        uVar13 = uVar13 + (int)uVar9 * -8;
      }
      else {
        uVar9 = (uint64_t)(uVar13 >> 3);
        uVar13 = uVar13 & 7;
        uVar4 = 0;
      }
      param_1 = param_1 - uVar9;
      uVar9 = *(uint64_t *)(param_2 + param_1);
      if (((void*)((int64_t)puVar1 - 7U) <= this_ptr) || (uVar4 != 0)) break;
      uVar5 = (uVar9 << ((byte)uVar13 & 0x3f)) >> bVar6;
      *this_ptr = (short)param_3[uVar5 + 1];
      iVar10 = *(byte *)((int64_t)param_3 + uVar5 * 4 + 6) + uVar13;
      uVar5 = (uint64_t)*(byte *)((int64_t)param_3 + uVar5 * 4 + 7);
      uVar7 = (uVar9 << ((byte)iVar10 & 0x3f)) >> bVar6;
      *(short *)((int64_t)this_ptr + uVar5) = (short)param_3[uVar7 + 1];
      iVar10 = (uint)*(byte *)((int64_t)param_3 + uVar7 * 4 + 6) + iVar10;
      uVar8 = (uint64_t)*(byte *)((int64_t)param_3 + uVar7 * 4 + 7);
      uVar7 = (uVar9 << ((byte)iVar10 & 0x3f)) >> bVar6;
      lVar11 = uVar8 + uVar5;
      *(short *)((int64_t)this_ptr + uVar8 + uVar5) = (short)param_3[uVar7 + 1];
      iVar10 = (uint)*(byte *)((int64_t)param_3 + uVar7 * 4 + 6) + iVar10;
      uVar5 = (uint64_t)*(byte *)((int64_t)param_3 + uVar7 * 4 + 7);
      uVar7 = (uVar9 << ((byte)iVar10 & 0x3f)) >> bVar6;
      *(short *)((int64_t)this_ptr + uVar5 + lVar11) = (short)param_3[uVar7 + 1];
      uVar13 = (uint)*(byte *)((int64_t)param_3 + uVar7 * 4 + 6) + iVar10;
      this_ptr = (void*)
                  ((int64_t)this_ptr +
                  (uint64_t)*(byte *)((int64_t)param_3 + uVar7 * 4 + 7) + uVar5 + lVar11);
    } while (uVar13 < 0x41);
  }
LAB_00eff2bf:
  pbVar12 = param_2 + param_1;
  if (1 < (uint64_t)((int64_t)puVar1 - (int64_t)this_ptr)) {
    for (; uVar13 < 0x41; uVar13 = *(byte *)((int64_t)param_3 + uVar5 * 4 + 6) + uVar13) {
      if ((int64_t)param_1 < 8) {
        if (param_1 == 0) break;
        bVar14 = pbVar12 + -(uint64_t)(uVar13 >> 3) < param_2;
        uVar4 = (uint)param_1;
        if (!bVar14) {
          uVar4 = uVar13 >> 3;
        }
        uVar13 = uVar13 + uVar4 * -8;
      }
      else {
        uVar4 = uVar13 >> 3;
        uVar13 = uVar13 & 7;
        bVar14 = false;
      }
      param_1 = param_1 - uVar4;
      pbVar12 = param_2 + param_1;
      uVar9 = *(uint64_t *)(param_2 + param_1);
      if ((puVar1 + -1 < this_ptr) || (bVar14)) break;
      uVar5 = (uVar9 << ((byte)uVar13 & 0x3f)) >> (-cVar2 & 0x3fU);
      *this_ptr = (short)param_3[uVar5 + 1];
      this_ptr = (void*)
                  ((int64_t)this_ptr + (uint64_t)*(byte *)((int64_t)param_3 + uVar5 * 4 + 7));
    }
    for (; this_ptr <= puVar1 + -1;
        this_ptr = (void*)
                    ((uint64_t)*(byte *)((int64_t)param_3 + uVar5 * 4 + 7) + (int64_t)this_ptr))
    {
      uVar5 = (uVar9 << ((byte)uVar13 & 0x3f)) >> (-cVar2 & 0x3fU);
      *this_ptr = (short)param_3[uVar5 + 1];
      uVar13 = *(byte *)((int64_t)param_3 + uVar5 * 4 + 6) + uVar13;
    }
  }
  if (this_ptr < puVar1) {
    uVar9 = (uVar9 << ((byte)uVar13 & 0x3f)) >> (-cVar2 & 0x3fU);
    *(char *)this_ptr = (char)param_3[uVar9 + 1];
    if (*(char *)((int64_t)param_3 + uVar9 * 4 + 7) == '\x01') {
      uVar13 = uVar13 + *(byte *)((int64_t)param_3 + uVar9 * 4 + 6);
    }
    else if ((uVar13 < 0x40) &&
            (uVar13 = uVar13 + *(byte *)((int64_t)param_3 + uVar9 * 4 + 6), 0x3f < uVar13)) {
      uVar13 = 0x40;
    }
  }
  if (uVar13 != 0x40) {
    arg1 = 0xffffffffffffffec;
  }
  if (pbVar12 != param_2) {
    arg1 = 0xffffffffffffffec;
  }
  return arg1;
}

