// Function: FUN_00f0335c
// Address: 00f0335c
// Size: 669 bytes
// Class: Unknown

uint64_t FUN_00f0335c(uint64_t param_1,uint64_t *param_2,int64_t param_3)

{
  void*puVar1;
  byte bVar2;
  ushort uVar3;
  int64_t lVar4;
  uint uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t arg1;
  void*this_ptr;
  uint64_t uVar8;
  uint64_t *puVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  
  if (param_1 == 0) {
    return 0xffffffffffffffb8;
  }
  uVar3 = *(ushort *)(param_3 + 2);
  if (param_1 < 8) {
    uVar8 = (uint64_t)(byte)*param_2;
    switch(param_1) {
    case 7:
      uVar8 = uVar8 | (uint64_t)*(byte *)((int64_t)param_2 + 6) << 0x30;
    case 6:
      uVar8 = uVar8 + ((uint64_t)*(byte *)((int64_t)param_2 + 5) << 0x28);
    case 5:
      uVar8 = uVar8 + ((uint64_t)*(byte *)((int64_t)param_2 + 4) << 0x20);
    case 4:
      uVar8 = uVar8 + (uint64_t)*(byte *)((int64_t)param_2 + 3) * 0x1000000;
    case 3:
      uVar8 = uVar8 + (uint64_t)*(byte *)((int64_t)param_2 + 2) * 0x10000;
    case 2:
      uVar8 = uVar8 + (uint64_t)*(byte *)((int64_t)param_2 + 1) * 0x100;
    }
    bVar2 = *(byte *)((param_1 - 1) + (int64_t)param_2);
    if (bVar2 == 0) {
      return 0xffffffffffffffec;
    }
    uVar10 = LZCOUNT((uint)bVar2) + (int)param_1 * -8 + 0x29;
    lVar4 = 0;
  }
  else {
    bVar2 = *(byte *)((param_1 - 1) + (int64_t)param_2);
    if (bVar2 == 0) {
      return 0xffffffffffffffff;
    }
    if (0xffffffffffffff88 < param_1) {
      return param_1;
    }
    uVar8 = *(uint64_t *)((int64_t)param_2 + (param_1 - 8));
    lVar4 = param_1 - 8;
    uVar10 = LZCOUNT((uint)bVar2) - 0x17;
  }
  uVar7 = (uint64_t)uVar10;
  puVar1 = this_ptr + arg1;
  puVar9 = (uint64_t *)((int64_t)param_2 + lVar4);
  if ((int64_t)arg1 < 4) {
    if (uVar10 < 0x41) {
      if (lVar4 < 8) {
        if (lVar4 == 0) goto LAB_00f0359a;
        uVar5 = (uint)lVar4;
        if (param_2 <= (uint64_t *)((int64_t)puVar9 - (uint64_t)(uVar10 >> 3))) {
          uVar5 = uVar10 >> 3;
        }
        uVar10 = uVar10 + uVar5 * -8;
      }
      else {
        uVar5 = uVar10 >> 3;
        uVar10 = uVar10 & 7;
      }
      uVar7 = (uint64_t)uVar10;
      puVar9 = (uint64_t *)((int64_t)puVar9 - (uint64_t)uVar5);
      uVar8 = *puVar9;
    }
  }
  else if (uVar10 < 0x41) {
    uVar10 = -(uint)uVar3 & 0x3f;
    do {
      if (lVar4 < 8) {
        puVar9 = (uint64_t *)((int64_t)param_2 + lVar4);
        if (lVar4 == 0) break;
        bVar12 = (uint64_t *)((int64_t)puVar9 - (uVar7 >> 3)) < param_2;
        uVar5 = (uint)lVar4;
        if (!bVar12) {
          uVar5 = (uint)(uVar7 >> 3);
        }
        uVar11 = (uint)uVar7 + uVar5 * -8;
      }
      else {
        uVar5 = (uint)(uVar7 >> 3);
        uVar11 = (uint)uVar7 & 7;
        bVar12 = false;
      }
      uVar7 = (uint64_t)uVar11;
      lVar4 = lVar4 - (uint64_t)uVar5;
      puVar9 = (uint64_t *)((int64_t)param_2 + lVar4);
      uVar8 = *(uint64_t *)((int64_t)param_2 + lVar4);
      if ((puVar1 + -3 <= this_ptr) || (bVar12)) break;
      uVar7 = (uVar8 << (uVar7 & 0x3f)) >> uVar10;
      uVar11 = *(byte *)(param_3 + 4 + uVar7 * 2) + uVar11;
      *this_ptr = *(void*)(param_3 + 5 + uVar7 * 2);
      uVar7 = (uVar8 << ((uint64_t)uVar11 & 0x3f)) >> uVar10;
      uVar11 = *(byte *)(param_3 + 4 + uVar7 * 2) + uVar11;
      this_ptr[1] = *(void*)(param_3 + 5 + uVar7 * 2);
      uVar7 = (uVar8 << ((uint64_t)uVar11 & 0x3f)) >> uVar10;
      uVar11 = *(byte *)(param_3 + 4 + uVar7 * 2) + uVar11;
      this_ptr[2] = *(void*)(param_3 + 5 + uVar7 * 2);
      uVar6 = (uVar8 << ((uint64_t)uVar11 & 0x3f)) >> uVar10;
      uVar11 = *(byte *)(param_3 + 4 + uVar6 * 2) + uVar11;
      uVar7 = (uint64_t)uVar11;
      this_ptr[3] = *(void*)(param_3 + 5 + uVar6 * 2);
      this_ptr = this_ptr + 4;
      if (0x40 < uVar11) break;
    } while( true );
  }
LAB_00f0359a:
  if (this_ptr < puVar1) {
    lVar4 = 0;
    do {
      uVar6 = (uVar8 << (uVar7 & 0x3f)) >> (-(uint)uVar3 & 0x3f);
      uVar10 = (uint)*(byte *)(param_3 + 4 + uVar6 * 2) + (int)uVar7;
      this_ptr[lVar4] = *(void*)(param_3 + 5 + uVar6 * 2);
      lVar4 = lVar4 + 1;
      uVar7 = (uint64_t)uVar10;
    } while ((int64_t)puVar1 - (int64_t)this_ptr != lVar4);
  }
  else {
    uVar10 = (uint)uVar7;
  }
  if (uVar10 != 0x40) {
    arg1 = 0xffffffffffffffec;
  }
  if (puVar9 != param_2) {
    arg1 = 0xffffffffffffffec;
  }
  return arg1;
}

