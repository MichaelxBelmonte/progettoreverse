// Function: FUN_013fc010
// Address: 013fc010
// Size: 623 bytes
// Class: MUDataPointFunction

void FUN_013fc010(uint64_t param_1,uint64_t param_2)

{
  void*puVar1;
  void*puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int iVar6;
  uint uVar7;
  int iVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  int64_t lVar14;
  int64_t lVar15;
  uint64_t arg1;
  uint64_t uVar16;
  int64_t this_ptr;
  int64_t lVar17;
  int iVar8;
  
  if (*(int64_t *)(this_ptr + 0x20) == 0) {
    if (*(int64_t *)(this_ptr + 0x50) == 0) {
      return;
    }
LAB_013fc06c:
    uVar10 = FUN_011ede20();
    uVar7 = (uint)uVar10;
    lVar17 = *(int64_t *)(this_ptr + 0x20);
  }
  else {
    if (*(int64_t *)(this_ptr + 0x50) != 0) {
      iVar6 = FUN_011ede20();
      lVar17 = *(int64_t *)(this_ptr + 0x20);
      iVar9 = *(int *)(lVar17 + 0x18);
      iVar8 = iVar9 + 3;
      if (-1 < iVar9) {
        iVar8 = iVar9;
      }
      uVar7 = iVar8 >> 2;
      if ((int)uVar7 <= iVar6) goto LAB_013fc07f;
      goto LAB_013fc06c;
    }
    iVar9 = *(int *)(*(int64_t *)(this_ptr + 0x20) + 0x18);
    iVar8 = iVar9 + 3;
    if (-1 < iVar9) {
      iVar8 = iVar9;
    }
    uVar7 = iVar8 >> 2;
    uVar10 = (uint64_t)uVar7;
    lVar17 = *(int64_t *)(this_ptr + 0x20);
  }
  if (lVar17 == 0) {
    uVar7 = (uint)uVar10;
    if ((int)uVar7 < 1) {
      return;
    }
    uVar12 = uVar10 & 0xffffffff;
    if ((uVar7 < 4) || ((param_2 < arg1 + uVar12 * 8 && (arg1 < param_2 + uVar12 * 8)))) {
      uVar11 = 0;
    }
    else {
      uVar11 = (uint64_t)(uVar7 & 0xfffffffc);
      uVar16 = (uVar11 - 4 >> 2) + 1;
      uVar13 = (uint64_t)((uint)uVar16 & 3);
      if (uVar11 - 4 < 0xc) {
        lVar14 = 0;
      }
      else {
        lVar17 = -(uVar16 & 0xfffffffffffffffc);
        lVar14 = 0;
        do {
          puVar1 = (void*)(arg1 + lVar14 * 8);
          uVar3 = puVar1[1];
          puVar2 = (void*)(arg1 + 0x10 + lVar14 * 8);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2 = (void*)(param_2 + lVar14 * 8);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          puVar1 = (void*)(param_2 + 0x10 + lVar14 * 8);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          puVar1 = (void*)(arg1 + 0x20 + lVar14 * 8);
          uVar3 = puVar1[1];
          puVar2 = (void*)(arg1 + 0x30 + lVar14 * 8);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2 = (void*)(param_2 + 0x20 + lVar14 * 8);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          puVar1 = (void*)(param_2 + 0x30 + lVar14 * 8);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          puVar1 = (void*)(arg1 + 0x40 + lVar14 * 8);
          uVar3 = puVar1[1];
          puVar2 = (void*)(arg1 + 0x50 + lVar14 * 8);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2 = (void*)(param_2 + 0x40 + lVar14 * 8);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          puVar1 = (void*)(param_2 + 0x50 + lVar14 * 8);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          puVar1 = (void*)(arg1 + 0x60 + lVar14 * 8);
          uVar3 = puVar1[1];
          puVar2 = (void*)(arg1 + 0x70 + lVar14 * 8);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2 = (void*)(param_2 + 0x60 + lVar14 * 8);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          puVar1 = (void*)(param_2 + 0x70 + lVar14 * 8);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          lVar14 = lVar14 + 0x10;
          lVar17 = lVar17 + 4;
        } while (lVar17 != 0);
      }
      if (uVar13 != 0) {
        lVar17 = param_2 + lVar14 * 8;
        lVar14 = arg1 + lVar14 * 8;
        lVar15 = 0;
        do {
          puVar2 = (void*)(lVar14 + lVar15);
          uVar3 = puVar2[1];
          puVar1 = (void*)(lVar14 + 0x10 + lVar15);
          uVar4 = *puVar1;
          uVar5 = puVar1[1];
          puVar1 = (void*)(lVar17 + lVar15);
          *puVar1 = *puVar2;
          puVar1[1] = uVar3;
          puVar1 = (void*)(lVar17 + 0x10 + lVar15);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          lVar15 = lVar15 + 0x20;
        } while (uVar13 << 5 != lVar15);
      }
      if (uVar11 == uVar12) {
        return;
      }
    }
    uVar13 = ~uVar11;
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(void*)(param_2 + uVar11 * 8) = *(void*)(arg1 + uVar11 * 8);
      uVar11 = uVar11 + 1;
    }
    if (uVar13 + uVar12 < 3) {
      return;
    }
    do {
      *(void*)(param_2 + uVar11 * 8) = *(void*)(arg1 + uVar11 * 8);
      *(void*)(param_2 + 8 + uVar11 * 8) = *(void*)(arg1 + 8 + uVar11 * 8);
      *(void*)(param_2 + 0x10 + uVar11 * 8) = *(void*)(arg1 + 0x10 + uVar11 * 8);
      *(void*)(param_2 + 0x18 + uVar11 * 8) = *(void*)(arg1 + 0x18 + uVar11 * 8);
      uVar11 = uVar11 + 4;
    } while (uVar12 != uVar11);
    return;
  }
LAB_013fc07f:
  if (0 < (int)uVar7) {
    lVar14 = 0;
    lVar17 = (int64_t)**(int **)(lVar17 + 0x10);
    if (lVar17 != -1) goto LAB_013fc0b7;
LAB_013fc0e0:
    *(void*)(param_2 + lVar14 * 8) = 0;
    if ((uint64_t)uVar7 - 1 != lVar14) {
      while( true ) {
        lVar14 = lVar14 + 1;
        lVar17 = (int64_t)
                 *(int *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x20) + 0x10) + lVar14 * 4);
        if (lVar17 == -1) break;
LAB_013fc0b7:
        iVar9 = FUN_011ede20();
        if (iVar9 <= (int)lVar17) break;
        *(void*)(param_2 + lVar14 * 8) = *(void*)(arg1 + lVar17 * 8);
        if ((uint64_t)uVar7 - 1 == lVar14) {
          return;
        }
      }
      goto LAB_013fc0e0;
    }
  }
  return;
}

