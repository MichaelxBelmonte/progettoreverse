// Function: FUN_009c6b2c
// Address: 009c6b2c
// Size: 594 bytes
// Class: Unknown

void FUN_009c6b2c(int64_t param_1,uint param_2,uint64_t param_3,int64_t *param_4)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  uint64_t *arg1;
  uint uVar7;
  int64_t *this_ptr;
  int64_t lVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  
  uVar6 = ((param_3 & 0xffffffff) - (uint64_t)param_2) + (param_1 - (int64_t)arg1) * 8;
  if ((int64_t)uVar6 < 1) {
    uVar4 = *(uint *)(param_4 + 1);
  }
  else {
    if (param_2 == 0) {
      uVar4 = *(uint *)(param_4 + 1);
    }
    else {
      uVar4 = 0x40 - param_2;
      uVar12 = (uint64_t)uVar4;
      if ((int64_t)uVar6 <= (int64_t)(uint64_t)uVar4) {
        uVar12 = uVar6;
      }
      bVar3 = (byte)param_2;
      uVar11 = ((0xffffffffffffffffU >> ((char)uVar4 - (char)uVar12 & 0x3fU)) >> (bVar3 & 0x3f)) <<
               (bVar3 & 0x3f) & *arg1;
      uVar4 = *(uint *)(param_4 + 1);
      bVar2 = (byte)uVar4;
      uVar9 = uVar11 << (-(bVar3 - bVar2) & 0x3f);
      if (uVar4 <= param_2) {
        uVar9 = uVar11 >> (bVar3 - bVar2 & 0x3f);
      }
      uVar7 = 0x40 - uVar4;
      uVar10 = uVar12;
      if (uVar7 < uVar12) {
        uVar10 = (uint64_t)uVar7;
      }
      puVar5 = (uint64_t *)*param_4;
      *puVar5 = (((0xffffffffffffffffU >> ((char)uVar7 - (char)uVar10 & 0x3fU)) >> (bVar2 & 0x3f))
                 << (bVar2 & 0x3f) ^ 0xffffffffffffffff) & *puVar5 | uVar9;
      puVar5 = puVar5 + (uVar4 + uVar10 >> 6);
      *param_4 = (int64_t)puVar5;
      uVar4 = uVar4 + (int)uVar10 & 0x3f;
      *(uint *)(param_4 + 1) = uVar4;
      lVar8 = uVar12 - uVar10;
      if (0 < lVar8) {
        uVar4 = (uint)lVar8;
        *puVar5 = uVar11 >> ((char)uVar10 + bVar3 & 0x3f) |
                  (0xffffffffffffffffU >> (-(char)lVar8 & 0x3fU) ^ 0xffffffffffffffff) & *puVar5;
        *(uint *)(param_4 + 1) = uVar4;
      }
      uVar6 = uVar6 - uVar12;
      arg1 = arg1 + 1;
    }
    bVar2 = (byte)uVar4;
    uVar12 = -1L << (bVar2 & 0x3f);
    uVar7 = 0x40 - uVar4;
    if (0x3f < (int64_t)uVar6) {
      puVar5 = (uint64_t *)*param_4;
      uVar9 = *puVar5;
      uVar11 = uVar6;
      do {
        uVar6 = *arg1;
        *puVar5 = uVar6 << (bVar2 & 0x3f) | uVar9 & ~uVar12;
        uVar9 = uVar6 >> ((byte)uVar7 & 0x3f) | puVar5[1] & uVar12;
        puVar5[1] = uVar9;
        puVar5 = puVar5 + 1;
        arg1 = arg1 + 1;
        uVar6 = uVar11 - 0x40;
        bVar1 = 0x7f < (int64_t)uVar11;
        uVar11 = uVar6;
      } while (bVar1);
      *param_4 = (int64_t)puVar5;
    }
    if (0 < (int64_t)uVar6) {
      uVar11 = (*arg1 << (-(char)uVar6 & 0x3fU)) >> (-(char)uVar6 & 0x3fU);
      uVar9 = (uint64_t)uVar7;
      if ((int64_t)uVar6 <= (int64_t)(uint64_t)uVar7) {
        uVar9 = uVar6;
      }
      bVar3 = (byte)uVar7 - (byte)uVar9;
      puVar5 = (uint64_t *)*param_4;
      *puVar5 = uVar11 << (bVar2 & 0x3f) | ~((uVar12 << (bVar3 & 0x3f)) >> (bVar3 & 0x3f)) & *puVar5
      ;
      puVar5 = puVar5 + (uVar4 + uVar9 >> 6);
      *param_4 = (int64_t)puVar5;
      uVar4 = uVar4 + (int)uVar9 & 0x3f;
      *(uint *)(param_4 + 1) = uVar4;
      lVar8 = uVar6 - uVar9;
      if (lVar8 != 0 && (int64_t)uVar9 <= (int64_t)uVar6) {
        uVar4 = (uint)lVar8;
        *puVar5 = uVar11 >> ((byte)uVar9 & 0x3f) |
                  (0xffffffffffffffffU >> (-(char)lVar8 & 0x3fU) ^ 0xffffffffffffffff) & *puVar5;
        *(uint *)(param_4 + 1) = uVar4;
      }
    }
  }
  *this_ptr = *param_4;
  *(uint *)(this_ptr + 1) = uVar4;
  return;
}

