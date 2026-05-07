// Function: FUN_0096c720
// Address: 0096c720
// Size: 600 bytes
// Class: Unknown

void FUN_0096c720(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int64_t lVar10;
  uint64_t uVar11;
  int64_t lVar12;
  uint *this_ptr;
  uint64_t uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  uint local_34;
  
  if (this_ptr[0x5a] != 0) {
    return;
  }
  puVar4 = *(uint **)(this_ptr + 0x36);
  puVar5 = *(uint **)(this_ptr + 0x2e);
  uVar2 = this_ptr[0x2d];
  FUN_00969bc3();
  if (this_ptr[0x32] == 0) {
    FUN_00968a1c(puVar5,puVar5);
    goto LAB_0096c95e;
  }
  uVar3 = *puVar5;
  uVar17 = (uint64_t)uVar3;
  uVar14 = *this_ptr;
  if (uVar14 == 0) {
    if ((int)uVar3 < 1) goto LAB_0096c906;
    lVar9 = *(int64_t *)(puVar4 + 2);
    puVar6 = *(uint **)(puVar5 + 2);
    uVar18 = 0;
    uVar16 = 0;
    lVar12 = lVar9;
    do {
      local_34 = *(int *)(lVar9 + uVar18 * 4) * uVar2;
      uVar8 = (uint64_t)*(uint *)(lVar9 + uVar18 * 4) + (uint64_t)*puVar6 * (uint64_t)local_34;
      *(int *)(lVar9 + uVar18 * 4) = (int)uVar8;
      uVar8 = uVar8 >> 0x20;
      if (uVar3 != 1) {
        uVar13 = 1;
        do {
          uVar8 = (uint64_t)*(uint *)(lVar12 + uVar13 * 4) +
                  (uint64_t)puVar6[uVar13] * (uint64_t)local_34 + uVar8;
          *(int *)(lVar12 + uVar13 * 4) = (int)uVar8;
          uVar8 = uVar8 >> 0x20;
          uVar13 = uVar13 + 1;
        } while (uVar17 != uVar13);
      }
      lVar10 = (int64_t)(int)((int)uVar18 + uVar3);
      puVar1 = (uint *)(lVar9 + lVar10 * 4);
      uVar14 = *puVar1;
      uVar15 = uVar16 + *puVar1;
      *(uint *)(lVar9 + lVar10 * 4) = uVar15 + (uint)uVar8;
      uVar16 = (uint)(CARRY4(uVar15,(uint)uVar8) || CARRY4(uVar16,uVar14));
      uVar18 = uVar18 + 1;
      lVar12 = lVar12 + 4;
    } while (uVar18 != uVar17);
  }
  else if ((int)uVar3 < 1) {
LAB_0096c906:
    uVar16 = 0;
  }
  else {
    uVar18 = 0;
    uVar16 = 0;
    while( true ) {
      FUN_0096930d(uVar14,0,&local_34);
      lVar12 = *(int64_t *)(puVar5 + 2);
      lVar10 = *(int64_t *)(puVar4 + 2);
      lVar9 = lVar10 + uVar18 * 4;
      uVar13 = 0;
      uVar8 = 0;
      do {
        uVar11 = (uint64_t)*(uint *)(lVar9 + uVar13 * 4) +
                 (uVar8 & 0xffffffff) +
                 (uint64_t)*(uint *)(lVar12 + uVar13 * 4) * (uint64_t)local_34;
        uVar2 = *this_ptr;
        if (uVar2 == this_ptr[3]) {
          uVar8 = uVar11 >> ((byte)this_ptr[2] & 0x3f);
        }
        else {
          uVar8 = uVar11 / uVar2;
        }
        *(uint *)(lVar9 + uVar13 * 4) = (int)uVar11 - uVar2 * (int)uVar8;
        uVar13 = uVar13 + 1;
      } while (uVar17 != uVar13);
      lVar9 = (int64_t)(int)((int)uVar18 + uVar3);
      uVar14 = uVar16 + (int)uVar8 + *(int *)(lVar10 + lVar9 * 4);
      *(uint *)(lVar10 + lVar9 * 4) = uVar14;
      uVar2 = *this_ptr;
      if (uVar2 <= uVar14) {
        *(uint *)(lVar10 + lVar9 * 4) = uVar14 - *this_ptr;
      }
      uVar16 = (uint)(uVar2 <= uVar14);
      uVar18 = uVar18 + 1;
      if (uVar18 == uVar17) break;
      uVar14 = *this_ptr;
    }
  }
  *(uint *)(*(int64_t *)(puVar4 + 2) + (int64_t)(int)uVar3 * 8) = uVar16;
  *puVar4 = uVar3 * 2 | 1;
  FUN_00969c8b(puVar4,-uVar3);
  FUN_0096959f();
  iVar7 = FUN_00969df5();
  if (-1 < iVar7) {
    FUN_00967d35(puVar4,puVar5);
  }
LAB_0096c95e:
  FUN_00969bc3();
  return;
}

