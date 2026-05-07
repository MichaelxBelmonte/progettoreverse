// Function: FUN_0091d200
// Address: 0091d200
// Size: 603 bytes
// Class: Unknown

void FUN_0091d200(int64_t *param_1,int64_t *param_2)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  
  puVar7 = (uint64_t *)*arg1;
  uVar5 = *(uint *)(arg1 + 1);
  uVar8 = ((uint64_t)*(uint *)(param_2 + 1) + (*param_2 - (int64_t)puVar7) * 8) - (uint64_t)uVar5
  ;
  if ((int64_t)uVar8 < 1) {
    uVar5 = *(uint *)(param_1 + 1);
  }
  else {
    if (uVar5 == 0) {
      uVar5 = *(uint *)(param_1 + 1);
    }
    else {
      uVar4 = 0x40 - uVar5;
      uVar12 = (uint64_t)uVar4;
      if ((int64_t)uVar8 <= (int64_t)(uint64_t)uVar4) {
        uVar12 = uVar8;
      }
      bVar3 = (byte)uVar5;
      uVar11 = ((0xffffffffffffffffU >> ((char)uVar4 - (char)uVar12 & 0x3fU)) >> (bVar3 & 0x3f)) <<
               (bVar3 & 0x3f) & *puVar7;
      uVar4 = *(uint *)(param_1 + 1);
      bVar2 = (byte)uVar4;
      uVar9 = uVar11 << (bVar2 - bVar3 & 0x3f);
      if (uVar4 <= uVar5) {
        uVar9 = uVar11 >> (-(bVar2 - bVar3) & 0x3f);
      }
      uVar5 = 0x40 - uVar4;
      uVar10 = uVar12;
      if (uVar5 < uVar12) {
        uVar10 = (uint64_t)uVar5;
      }
      puVar7 = (uint64_t *)*param_1;
      *puVar7 = (((0xffffffffffffffffU >> ((char)uVar5 - (char)uVar10 & 0x3fU)) >> (bVar2 & 0x3f))
                 << (bVar2 & 0x3f) ^ 0xffffffffffffffff) & *puVar7 | uVar9;
      puVar7 = puVar7 + (uVar4 + uVar10 >> 6);
      *param_1 = (int64_t)puVar7;
      uVar5 = uVar4 + (int)uVar10 & 0x3f;
      *(uint *)(param_1 + 1) = uVar5;
      lVar6 = uVar12 - uVar10;
      if (0 < lVar6) {
        uVar5 = (uint)lVar6;
        *puVar7 = uVar11 >> ((char)uVar10 + (char)(int)arg1[1] & 0x3fU) |
                  (0xffffffffffffffffU >> (-(char)lVar6 & 0x3fU) ^ 0xffffffffffffffff) & *puVar7;
        *(uint *)(param_1 + 1) = uVar5;
      }
      uVar8 = uVar8 - uVar12;
      puVar7 = (uint64_t *)(*arg1 + 8);
      *arg1 = (int64_t)puVar7;
    }
    bVar2 = (byte)uVar5;
    uVar12 = -1L << (bVar2 & 0x3f);
    uVar4 = 0x40 - uVar5;
    if (0x3f < (int64_t)uVar8) {
      uVar9 = uVar8;
      do {
        uVar8 = *puVar7;
        puVar7 = (uint64_t *)*param_1;
        *puVar7 = uVar8 << (bVar2 & 0x3f) | *puVar7 & ~uVar12;
        *param_1 = (int64_t)(puVar7 + 1);
        puVar7[1] = uVar8 >> ((byte)uVar4 & 0x3f) | puVar7[1] & uVar12;
        puVar7 = (uint64_t *)(*arg1 + 8);
        *arg1 = (int64_t)puVar7;
        uVar8 = uVar9 - 0x40;
        bVar1 = 0x7f < (int64_t)uVar9;
        uVar9 = uVar8;
      } while (bVar1);
    }
    if (0 < (int64_t)uVar8) {
      uVar11 = (*puVar7 << (-(char)uVar8 & 0x3fU)) >> (-(char)uVar8 & 0x3fU);
      uVar9 = (uint64_t)uVar4;
      if ((int64_t)uVar8 <= (int64_t)(uint64_t)uVar4) {
        uVar9 = uVar8;
      }
      bVar3 = (byte)uVar4 - (byte)uVar9;
      puVar7 = (uint64_t *)*param_1;
      *puVar7 = uVar11 << (bVar2 & 0x3f) | ~((uVar12 << (bVar3 & 0x3f)) >> (bVar3 & 0x3f)) & *puVar7
      ;
      puVar7 = puVar7 + (uVar5 + uVar9 >> 6);
      *param_1 = (int64_t)puVar7;
      uVar5 = uVar5 + (int)uVar9 & 0x3f;
      *(uint *)(param_1 + 1) = uVar5;
      lVar6 = uVar8 - uVar9;
      if (lVar6 != 0 && (int64_t)uVar9 <= (int64_t)uVar8) {
        uVar5 = (uint)lVar6;
        *puVar7 = uVar11 >> ((byte)uVar9 & 0x3f) |
                  (0xffffffffffffffffU >> (-(char)lVar6 & 0x3fU) ^ 0xffffffffffffffff) & *puVar7;
        *(uint *)(param_1 + 1) = uVar5;
      }
    }
  }
  *this_ptr = *param_1;
  *(uint *)(this_ptr + 1) = uVar5;
  return;
}

