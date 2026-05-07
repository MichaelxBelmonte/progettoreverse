// Function: FUN_00f05674
// Address: 00f05674
// Size: 953 bytes
// Class: Unknown

int64_t FUN_00f05674(uint64_t param_1,uint64_t param_2,int64_t param_3,code *param_4)

{
  int64_t *plVar1;
  void*puVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int64_t arg1;
  void*puVar9;
  void*this_ptr;
  uint64_t uVar10;
  uint64_t uVar11;
  int64_t lVar12;
  int iVar13;
  int64_t *plVar14;
  int64_t *plVar15;
  uint uVar16;
  bool bVar17;
  uint64_t local_f8 [4];
  int64_t alStack_d8 [4];
  uint64_t auStack_b8 [7];
  int64_t *local_80 [5];
  void*local_58;
  
  lVar5 = FUN_00f05a2d(param_2);
  if (0xffffffffffffff87 < lVar5 - 1U) {
    return lVar5;
  }
  local_58 = (void*)((int64_t)this_ptr + arg1);
  (*param_4)();
  uVar6 = arg1 + 3U >> 2;
  lVar5 = 0;
LAB_00f056e6:
  uVar7 = (int64_t)local_58 - (int64_t)this_ptr;
  this_ptr = (void*)((int64_t)this_ptr + uVar6);
  if (uVar7 < uVar6) {
    this_ptr = local_58;
  }
  puVar2 = (void*)alStack_d8[lVar5];
  if ((this_ptr < puVar2) ||
     (plVar15 = (int64_t *)local_f8[lVar5], plVar15 < local_80[lVar5] + -1)) {
    return -0x14;
  }
  lVar12 = *plVar15;
  uVar10 = 0;
  for (uVar7 = auStack_b8[lVar5]; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x8000000000000000) {
    uVar10 = uVar10 + 1;
  }
  plVar1 = local_80[0] + 1;
  uVar7 = (int64_t)this_ptr - (int64_t)puVar2;
  iVar13 = (int)local_80[0];
  puVar9 = puVar2;
  if (7 < uVar7) {
    plVar14 = plVar15;
    do {
      if (plVar14 < plVar1) {
        plVar15 = local_80[0];
        if (plVar14 == local_80[0]) goto LAB_00f058dc;
        uVar11 = uVar10 >> 3 & 0x1fffffff;
        bVar17 = (int64_t *)((int64_t)plVar14 - uVar11) < local_80[0];
        uVar7 = (uint64_t)(uint)((int)plVar14 - iVar13);
        if (!bVar17) {
          uVar7 = uVar11;
        }
        uVar16 = (uint)uVar10 + (int)uVar7 * -8;
      }
      else {
        uVar7 = uVar10 >> 3 & 0x1fffffff;
        uVar16 = (uint)uVar10 & 7;
        bVar17 = false;
      }
      uVar10 = (uint64_t)uVar16;
      plVar15 = (int64_t *)((int64_t)plVar14 - uVar7);
      lVar12 = *plVar15;
      if (((void*)((int64_t)this_ptr - 9U) <= puVar9) || (bVar17)) goto LAB_00f058dc;
      uVar7 = (uint64_t)(lVar12 << (uVar10 & 0x3f)) >> 0x35;
      *puVar9 = *(void*)(param_3 + 4 + uVar7 * 4);
      uVar16 = *(byte *)(param_3 + 6 + uVar7 * 4) + uVar16;
      uVar7 = (uint64_t)*(byte *)(param_3 + 7 + uVar7 * 4);
      uVar10 = (uint64_t)(lVar12 << ((uint64_t)uVar16 & 0x3f)) >> 0x35;
      *(void*)((int64_t)puVar9 + uVar7) = *(void*)(param_3 + 4 + uVar10 * 4);
      uVar16 = *(byte *)(param_3 + 6 + uVar10 * 4) + uVar16;
      uVar10 = (uint64_t)*(byte *)(param_3 + 7 + uVar10 * 4);
      lVar3 = uVar10 + uVar7;
      uVar11 = (uint64_t)(lVar12 << ((uint64_t)uVar16 & 0x3f)) >> 0x35;
      *(void*)((int64_t)puVar9 + uVar10 + uVar7) = *(void*)(param_3 + 4 + uVar11 * 4)
      ;
      uVar16 = *(byte *)(param_3 + 6 + uVar11 * 4) + uVar16;
      uVar7 = (uint64_t)*(byte *)(param_3 + 7 + uVar11 * 4);
      lVar4 = uVar7 + lVar3;
      uVar10 = (uint64_t)(lVar12 << ((uint64_t)uVar16 & 0x3f)) >> 0x35;
      *(void*)((int64_t)puVar9 + uVar7 + lVar3) = *(void*)(param_3 + 4 + uVar10 * 4);
      uVar16 = *(byte *)(param_3 + 6 + uVar10 * 4) + uVar16;
      uVar7 = (uint64_t)*(byte *)(param_3 + 7 + uVar10 * 4);
      uVar11 = (uint64_t)(lVar12 << ((uint64_t)uVar16 & 0x3f)) >> 0x35;
      *(void*)((int64_t)puVar9 + uVar7 + lVar4) = *(void*)(param_3 + 4 + uVar11 * 4);
      uVar16 = *(byte *)(param_3 + 6 + uVar11 * 4) + uVar16;
      uVar10 = (uint64_t)uVar16;
      puVar9 = (void*)
               ((int64_t)puVar9 + (uint64_t)*(byte *)(param_3 + 7 + uVar11 * 4) + uVar7 + lVar4);
      plVar14 = plVar15;
      if (0x40 < uVar16) goto LAB_00f058dc;
    } while( true );
  }
  if (plVar15 < plVar1) {
    if (plVar15 != local_80[0]) {
      uVar8 = uVar10 >> 3 & 0x1fffffff;
      uVar11 = (uint64_t)(uint)((int)plVar15 - iVar13);
      if (local_80[0] <= (int64_t *)((int64_t)plVar15 - uVar8)) {
        uVar11 = uVar8;
      }
      uVar16 = (uint)uVar10 + (int)uVar11 * -8;
      goto LAB_00f058d0;
    }
  }
  else {
    uVar11 = uVar10 >> 3;
    uVar16 = (uint)uVar10 & 7;
LAB_00f058d0:
    uVar10 = (uint64_t)uVar16;
    plVar15 = (int64_t *)((int64_t)plVar15 - uVar11);
    lVar12 = *plVar15;
  }
  goto LAB_00f058e3;
LAB_00f058dc:
  uVar7 = (int64_t)this_ptr - (int64_t)puVar9;
LAB_00f058e3:
  if (1 < uVar7) {
    while (uVar16 = (uint)uVar10, uVar16 < 0x41) {
      if (plVar15 < plVar1) {
        if (plVar15 == local_80[0]) break;
        uVar10 = uVar10 >> 3 & 0x1fffffff;
        bVar17 = (int64_t *)((int64_t)plVar15 - uVar10) < local_80[0];
        uVar7 = (uint64_t)(uint)((int)plVar15 - iVar13);
        if (!bVar17) {
          uVar7 = uVar10;
        }
        uVar16 = uVar16 + (int)uVar7 * -8;
      }
      else {
        uVar7 = uVar10 >> 3 & 0x1fffffff;
        uVar16 = uVar16 & 7;
        bVar17 = false;
      }
      uVar10 = (uint64_t)uVar16;
      plVar15 = (int64_t *)((int64_t)plVar15 - uVar7);
      lVar12 = *plVar15;
      if ((this_ptr + -1 < puVar9) || (bVar17)) break;
      uVar7 = (uint64_t)(lVar12 << (uVar10 & 0x3f)) >> 0x35;
      *puVar9 = *(void*)(param_3 + 4 + uVar7 * 4);
      puVar9 = (void*)((int64_t)puVar9 + (uint64_t)*(byte *)(param_3 + 7 + uVar7 * 4));
      uVar10 = (uint64_t)(*(byte *)(param_3 + 6 + uVar7 * 4) + uVar16);
    }
    for (; puVar9 <= this_ptr + -1;
        puVar9 = (void*)((uint64_t)*(byte *)(param_3 + 7 + uVar7 * 4) + (int64_t)puVar9)) {
      uVar7 = (uint64_t)(lVar12 << (uVar10 & 0x3f)) >> 0x35;
      *puVar9 = *(void*)(param_3 + 4 + uVar7 * 4);
      uVar10 = (uint64_t)((uint)*(byte *)(param_3 + 6 + uVar7 * 4) + (int)uVar10);
    }
  }
  if (puVar9 < this_ptr) {
    *(void*)puVar9 =
         *(void*)(param_3 + 4 + ((uint64_t)(lVar12 << (uVar10 & 0x3f)) >> 0x35) * 4);
    puVar9 = (void*)((int64_t)puVar9 + 1);
  }
  puVar9 = (void*)((int64_t)puVar9 + (alStack_d8[lVar5] - (int64_t)puVar2));
  alStack_d8[lVar5] = (int64_t)puVar9;
  if (puVar9 != this_ptr) {
    return -0x14;
  }
  lVar5 = lVar5 + 1;
  if (lVar5 == 4) {
    return arg1;
  }
  goto LAB_00f056e6;
}

