// Function: FUN_00f07060
// Address: 00f07060
// Size: 663 bytes
// Class: Unknown

int64_t FUN_00f07060(uint64_t param_1,uint64_t param_2,int64_t param_3,code *param_4)

{
  byte bVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint uVar6;
  uint uVar7;
  int64_t lVar9;
  int64_t arg1;
  void*puVar10;
  void*this_ptr;
  int64_t lVar11;
  int64_t *plVar12;
  uint64_t uVar13;
  bool bVar14;
  uint64_t local_f8 [4];
  int64_t alStack_d8 [4];
  uint64_t auStack_b8 [7];
  int64_t *local_80 [4];
  void*local_60;
  uint64_t uVar8;
  
  lVar2 = FUN_00f05a2d(param_2);
  if (lVar2 - 1U < 0xffffffffffffff88) {
    local_60 = this_ptr + arg1;
    (*param_4)();
    uVar13 = arg1 + 3U >> 2;
    lVar2 = 0;
    while( true ) {
      uVar3 = (int64_t)local_60 - (int64_t)this_ptr;
      this_ptr = this_ptr + uVar13;
      if (uVar3 < uVar13) {
        this_ptr = local_60;
      }
      puVar10 = (void*)alStack_d8[lVar2];
      if ((this_ptr < puVar10) ||
         (plVar12 = (int64_t *)local_f8[lVar2], plVar12 < local_80[lVar2] + -1)) break;
      lVar11 = *plVar12;
      uVar8 = 0;
      for (uVar3 = auStack_b8[lVar2]; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x8000000000000000) {
        uVar8 = uVar8 + 1;
      }
      lVar4 = (int64_t)this_ptr - (int64_t)puVar10;
      if (3 < lVar4) {
        do {
          if (plVar12 < local_80[0] + 1) {
            if (plVar12 == local_80[0]) goto LAB_00f07269;
            uVar3 = uVar8 >> 3 & 0x1fffffff;
            bVar14 = (int64_t *)((int64_t)plVar12 - uVar3) < local_80[0];
            uVar7 = (int)plVar12 - (int)local_80[0];
            if (!bVar14) {
              uVar7 = (uint)uVar3;
            }
            uVar6 = (uint)uVar8 + uVar7 * -8;
          }
          else {
            uVar7 = (uint)(uVar8 >> 3) & 0x1fffffff;
            uVar6 = (uint)uVar8 & 7;
            bVar14 = false;
          }
          uVar8 = (uint64_t)uVar6;
          plVar12 = (int64_t *)((int64_t)plVar12 - (uint64_t)uVar7);
          lVar11 = *plVar12;
          if ((this_ptr + -3 <= puVar10) || (bVar14)) goto LAB_00f07269;
          uVar3 = (uint64_t)(lVar11 << (uVar8 & 0x3f)) >> 0x35;
          uVar6 = *(byte *)(param_3 + 4 + uVar3 * 2) + uVar6;
          *puVar10 = *(void*)(param_3 + 5 + uVar3 * 2);
          uVar3 = (uint64_t)(lVar11 << ((uint64_t)uVar6 & 0x3f)) >> 0x35;
          uVar6 = *(byte *)(param_3 + 4 + uVar3 * 2) + uVar6;
          puVar10[1] = *(void*)(param_3 + 5 + uVar3 * 2);
          uVar3 = (uint64_t)(lVar11 << ((uint64_t)uVar6 & 0x3f)) >> 0x35;
          uVar6 = *(byte *)(param_3 + 4 + uVar3 * 2) + uVar6;
          puVar10[2] = *(void*)(param_3 + 5 + uVar3 * 2);
          uVar3 = (uint64_t)(lVar11 << ((uint64_t)uVar6 & 0x3f)) >> 0x35;
          uVar6 = *(byte *)(param_3 + 4 + uVar3 * 2) + uVar6;
          uVar8 = (uint64_t)uVar6;
          puVar10[3] = *(void*)(param_3 + 5 + uVar3 * 2);
          puVar10 = puVar10 + 4;
          if (0x40 < uVar6) goto LAB_00f07269;
        } while( true );
      }
      if (plVar12 < local_80[0] + 1) {
        if (plVar12 != local_80[0]) {
          uVar5 = uVar8 >> 3 & 0x1fffffff;
          uVar3 = (uint64_t)(uint)((int)plVar12 - (int)local_80[0]);
          if (local_80[0] <= (int64_t *)((int64_t)plVar12 - uVar5)) {
            uVar3 = uVar5;
          }
          uVar7 = (uint)uVar8 + (int)uVar3 * -8;
          goto LAB_00f07266;
        }
      }
      else {
        uVar3 = uVar8 >> 3;
        uVar7 = (uint)uVar8 & 7;
LAB_00f07266:
        uVar8 = (uint64_t)uVar7;
        lVar11 = *(int64_t *)((int64_t)plVar12 - uVar3);
      }
LAB_00f07269:
      if (puVar10 < this_ptr) {
        lVar9 = 0;
        do {
          uVar3 = (uint64_t)(lVar11 << (uVar8 & 0x3f)) >> 0x35;
          bVar1 = *(byte *)(param_3 + 4 + uVar3 * 2);
          puVar10[lVar9] = *(void*)(param_3 + 5 + uVar3 * 2);
          lVar9 = lVar9 + 1;
          uVar8 = (uint64_t)((uint)bVar1 + (int)uVar8);
        } while ((int64_t)this_ptr - (int64_t)puVar10 != lVar9);
      }
      puVar10 = (void*)(lVar4 + alStack_d8[lVar2]);
      alStack_d8[lVar2] = (int64_t)puVar10;
      if (puVar10 != this_ptr) {
        return -0x14;
      }
      lVar2 = lVar2 + 1;
      if (lVar2 == 4) {
        return arg1;
      }
    }
    lVar2 = -0x14;
  }
  return lVar2;
}

