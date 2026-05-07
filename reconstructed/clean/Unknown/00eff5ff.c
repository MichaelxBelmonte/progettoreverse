// Function: FUN_00eff5ff
// Address: 00eff5ff
// Size: 715 bytes
// Class: Unknown

uint64_t FUN_00eff5ff(uint64_t param_1,uint64_t *param_2,int64_t param_3,uint64_t param_4)

{
  void*puVar1;
  char cVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  byte bVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint64_t arg1;
  void*this_ptr;
  uint uVar8;
  uint64_t *puVar9;
  int iVar10;
  bool bVar11;
  
  if ((param_4 & 1) != 0) {
    uVar3 = FUN_00f0335c(param_1);
    return uVar3;
  }
  if (param_1 == 0) {
    return 0xffffffffffffffb8;
  }
  if (param_1 < 8) {
    uVar3 = (uint64_t)(byte)*param_2;
    switch(param_1) {
    case 7:
      uVar3 = uVar3 | (uint64_t)*(byte *)((int64_t)param_2 + 6) << 0x30;
    case 6:
      uVar3 = uVar3 + ((uint64_t)*(byte *)((int64_t)param_2 + 5) << 0x28);
    case 5:
      uVar3 = uVar3 + ((uint64_t)*(byte *)((int64_t)param_2 + 4) << 0x20);
    case 4:
      uVar3 = uVar3 + (uint64_t)*(byte *)((int64_t)param_2 + 3) * 0x1000000;
    case 3:
      uVar3 = uVar3 + (uint64_t)*(byte *)((int64_t)param_2 + 2) * 0x10000;
    case 2:
      uVar3 = uVar3 + (uint64_t)*(byte *)((int64_t)param_2 + 1) * 0x100;
    }
    bVar5 = *(byte *)((param_1 - 1) + (int64_t)param_2);
    if (bVar5 == 0) {
      return 0xffffffffffffffec;
    }
    uVar8 = 0x1f;
    if (bVar5 != 0) {
      for (; bVar5 >> uVar8 == 0; uVar8 = uVar8 - 1) {
      }
    }
    uVar8 = (uVar8 ^ 0x1f) + (int)param_1 * -8 + 0x29;
    param_1 = 0;
  }
  else {
    bVar5 = *(byte *)((param_1 - 1) + (int64_t)param_2);
    if (bVar5 == 0) {
      return 0xffffffffffffffff;
    }
    if (0xffffffffffffff88 < param_1) {
      return param_1;
    }
    uVar3 = *(uint64_t *)((int64_t)param_2 + (param_1 - 8));
    param_1 = param_1 - 8;
    uVar8 = 0x1f;
    if (bVar5 != 0) {
      for (; bVar5 >> uVar8 == 0; uVar8 = uVar8 - 1) {
      }
    }
    uVar8 = (uVar8 ^ 0x1f) - 0x17;
  }
  puVar1 = this_ptr + arg1;
  puVar9 = (uint64_t *)((int64_t)param_2 + param_1);
  cVar2 = (char)*(void*)(param_3 + 2);
  if ((int64_t)arg1 < 4) {
    if (uVar8 < 0x41) {
      if ((int64_t)param_1 < 8) {
        if (param_1 == 0) goto LAB_00eff869;
        param_1 = param_1 & 0xffffffff;
        if (param_2 <= (uint64_t *)((int64_t)puVar9 - (uint64_t)(uVar8 >> 3))) {
          param_1 = (uint64_t)(uVar8 >> 3);
        }
        uVar8 = uVar8 + (int)param_1 * -8;
      }
      else {
        param_1 = (uint64_t)(uVar8 >> 3);
        uVar8 = uVar8 & 7;
      }
      puVar9 = (uint64_t *)((int64_t)puVar9 - param_1);
      uVar3 = *puVar9;
    }
  }
  else if (uVar8 < 0x41) {
    bVar5 = -cVar2 & 0x3f;
    do {
      if ((int64_t)param_1 < 8) {
        puVar9 = (uint64_t *)((int64_t)param_2 + param_1);
        if (param_1 == 0) break;
        bVar11 = (uint64_t *)((int64_t)puVar9 - (uint64_t)(uVar8 >> 3)) < param_2;
        uVar3 = param_1 & 0xffffffff;
        if (!bVar11) {
          uVar3 = (uint64_t)(uVar8 >> 3);
        }
        uVar8 = uVar8 + (int)uVar3 * -8;
      }
      else {
        uVar3 = (uint64_t)(uVar8 >> 3);
        uVar8 = uVar8 & 7;
        bVar11 = false;
      }
      param_1 = param_1 - uVar3;
      puVar9 = (uint64_t *)((int64_t)param_2 + param_1);
      uVar3 = *(uint64_t *)((int64_t)param_2 + param_1);
      if ((puVar1 + -3 <= this_ptr) || (bVar11)) break;
      uVar6 = (uVar3 << ((byte)uVar8 & 0x3f)) >> bVar5;
      iVar10 = *(byte *)(param_3 + 4 + uVar6 * 2) + uVar8;
      uVar4 = (uVar3 << ((byte)iVar10 & 0x3f)) >> bVar5;
      *this_ptr = *(void*)(param_3 + 5 + uVar6 * 2);
      iVar10 = (uint)*(byte *)(param_3 + 4 + uVar4 * 2) + iVar10;
      this_ptr[1] = *(void*)(param_3 + 5 + uVar4 * 2);
      uVar6 = (uVar3 << ((byte)iVar10 & 0x3f)) >> bVar5;
      iVar10 = (uint)*(byte *)(param_3 + 4 + uVar6 * 2) + iVar10;
      uVar4 = (uVar3 << ((byte)iVar10 & 0x3f)) >> bVar5;
      this_ptr[2] = *(void*)(param_3 + 5 + uVar6 * 2);
      uVar8 = (uint)*(byte *)(param_3 + 4 + uVar4 * 2) + iVar10;
      this_ptr[3] = *(void*)(param_3 + 5 + uVar4 * 2);
      this_ptr = this_ptr + 4;
      if (0x40 < uVar8) break;
    } while( true );
  }
LAB_00eff869:
  if (this_ptr < puVar1) {
    lVar7 = 0;
    do {
      uVar4 = (uVar3 << ((byte)uVar8 & 0x3f)) >> (-cVar2 & 0x3fU);
      uVar8 = uVar8 + *(byte *)(param_3 + 4 + uVar4 * 2);
      this_ptr[lVar7] = *(void*)(param_3 + 5 + uVar4 * 2);
      lVar7 = lVar7 + 1;
    } while ((int64_t)puVar1 - (int64_t)this_ptr != lVar7);
  }
  if (uVar8 != 0x40) {
    arg1 = 0xffffffffffffffec;
  }
  if (puVar9 != param_2) {
    arg1 = 0xffffffffffffffec;
  }
  return arg1;
}

