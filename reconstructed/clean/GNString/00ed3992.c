// Function: FUN_00ed3992
// Address: 00ed3992
// Size: 591 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00ed3992(uint64_t *param_1,uint64_t *param_2)

{
  int64_t lVar1;
  byte bVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint uVar7;
  uint uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t *puVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  int64_t lVar15;
  uint64_t *arg1;
  int64_t this_ptr;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint64_t *puVar19;
  uint64_t uVar20;
  
  bVar2 = *(byte *)(this_ptr + 0x104);
  uVar16 = 1 << (bVar2 & 0x1f);
  lVar4 = *(int64_t *)(this_ptr + 8);
  uVar8 = 1 << (*(byte *)(this_ptr + 0x100) & 0x1f);
  uVar17 = (int)arg1 - (int)lVar4;
  uVar14 = *(uint *)(this_ptr + 0x1c);
  uVar13 = uVar17 - uVar8;
  if (uVar17 - uVar14 <= uVar8) {
    uVar13 = uVar14;
  }
  if (*(int *)(this_ptr + 0x28) != 0) {
    uVar13 = uVar14;
  }
  uVar14 = uVar17 - uVar16;
  if (uVar17 < uVar16) {
    uVar14 = 0;
  }
  iVar18 = 1 << (*(byte *)(this_ptr + 0x10c) & 0x1f);
  uVar8 = *(uint *)(this_ptr + 0x2c);
  uVar9 = (uint64_t)uVar8;
  bVar12 = 0x40 - (char)*(void*)(this_ptr + 0x108);
  uVar7 = uVar17;
  if (uVar17 < uVar8) {
    uVar7 = uVar8;
  }
  lVar5 = *(int64_t *)(this_ptr + 0x80);
  iVar3 = *(int *)(this_ptr + 300);
  lVar6 = *(int64_t *)(this_ptr + 0x70);
  do {
    if (uVar7 == uVar9) break;
    uVar20 = (uint64_t)(*(int64_t *)(lVar4 + uVar9) * -0x30e4432345000000) >> (bVar12 & 0x3f);
    *(void*)(lVar5 + (uint64_t)((uint)uVar9 & ~(-1 << (bVar2 & 0x1f))) * 4) =
         *(void*)(lVar6 + uVar20 * 4);
    *(uint *)(lVar6 + uVar20 * 4) = (uint)uVar9;
    uVar9 = uVar9 + 1;
  } while (iVar3 == 0);
  *(uint *)(this_ptr + 0x2c) = uVar17;
  uVar8 = *(uint *)(lVar6 + (*arg1 * -0x30e4432345000000 >> (bVar12 & 0x3f)) * 4);
  if (uVar8 < uVar13) {
    return 3;
  }
  uVar9 = 3;
  do {
    puVar19 = (uint64_t *)(lVar4 + (uint64_t)uVar8);
    if (*(int *)((uVar9 - 3) + (int64_t)puVar19) == *(int *)((int64_t)arg1 + (uVar9 - 3))) {
      puVar11 = arg1;
      if (arg1 < (uint64_t *)((int64_t)param_2 - 7U)) {
        uVar20 = *arg1 ^ *puVar19;
        if (uVar20 == 0) {
          lVar6 = lVar4 + 8 + (uint64_t)uVar8;
          lVar15 = 0;
          do {
            puVar11 = (uint64_t *)((int64_t)arg1 + lVar15 + 8);
            if ((uint64_t *)((int64_t)param_2 - 7U) <= puVar11) {
              puVar19 = (uint64_t *)(lVar6 + lVar15);
              goto LAB_00ed3b17;
            }
            lVar1 = lVar15 + 8;
            uVar20 = *(uint64_t *)((int64_t)arg1 + lVar15 + 8) ^
                     *(uint64_t *)(lVar6 + lVar15);
            lVar15 = lVar1;
          } while (uVar20 == 0);
          uVar10 = 0;
          if (uVar20 != 0) {
            for (; (uVar20 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
            }
          }
          uVar10 = (uVar10 >> 3) + lVar1;
        }
        else {
          uVar10 = 0;
          if (uVar20 != 0) {
            for (; (uVar20 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
            }
          }
          uVar10 = uVar10 >> 3;
        }
      }
      else {
LAB_00ed3b17:
        if ((puVar11 < (uint64_t *)((int64_t)param_2 - 3U)) && ((int)*puVar19 == (int)*puVar11)) {
          puVar11 = (uint64_t *)((int64_t)puVar11 + 4);
          puVar19 = (uint64_t *)((int64_t)puVar19 + 4);
        }
        if ((puVar11 < (uint64_t *)((int64_t)param_2 + -1)) &&
           ((short)*puVar19 == (short)*puVar11)) {
          puVar11 = (uint64_t *)((int64_t)puVar11 + 2);
          puVar19 = (uint64_t *)((int64_t)puVar19 + 2);
        }
        if (puVar11 < param_2) {
          puVar11 = (uint64_t *)((int64_t)puVar11 + (uint64_t)((char)*puVar19 == (char)*puVar11))
          ;
        }
        uVar10 = (int64_t)puVar11 - (int64_t)arg1;
      }
      if ((uVar9 < uVar10) &&
         (*param_1 = (uint64_t)((uVar17 + 3) - uVar8), uVar9 = uVar10,
         (uint64_t *)((int64_t)arg1 + uVar10) == param_2)) {
        return uVar10;
      }
    }
    if (uVar8 <= uVar14) {
      return uVar9;
    }
    iVar18 = iVar18 + -1;
    if (iVar18 == 0) {
      return uVar9;
    }
    uVar8 = *(uint *)(lVar5 + (uint64_t)(uVar8 & uVar16 - 1) * 4);
    if (uVar8 < uVar13) {
      return uVar9;
    }
  } while( true );
}

