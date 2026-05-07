// Function: FUN_00f03614
// Address: 00f03614
// Size: 645 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00f03614(void)

{
  byte bVar1;
  byte bVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  void*puVar5;
  uint uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint64_t *puVar10;
  uint64_t *this_ptr;
  int iVar11;
  void*puVar12;
  uint64_t local_b8 [2];
  void*local_a8;
  uint64_t local_a0;
  uint64_t local_98;
  uint64_t uStack_90;
  uint64_t local_88;
  uint64_t uStack_80;
  uint64_t local_78 [4];
  uint64_t local_58 [4];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  uVar3 = this_ptr[0xc];
  uVar4 = this_ptr[0xd];
  local_58[2] = this_ptr[10];
  local_58[3] = this_ptr[0xb];
  local_58[0] = this_ptr[8];
  local_58[1] = this_ptr[9];
  local_78[0] = *this_ptr;
  local_78[1] = this_ptr[1];
  local_78[2] = this_ptr[2];
  local_78[3] = this_ptr[3];
  uStack_80 = (void*)this_ptr[7];
  local_98 = this_ptr[4];
  uStack_90 = this_ptr[5];
  local_88 = this_ptr[6];
  local_b8[0] = this_ptr[5];
  local_b8[1] = this_ptr[6];
  local_a8 = uStack_80;
  local_a0 = this_ptr[0xe];
  while( true ) {
    lVar8 = 0;
    uVar7 = (local_78[0] - uVar4) / 7;
    do {
      uVar9 = (local_b8[lVar8] - (&local_98)[lVar8]) / 10;
      if (uVar7 < uVar9) {
        uVar9 = uVar7;
      }
      lVar8 = lVar8 + 1;
      uVar7 = uVar9;
    } while (lVar8 != 4);
    if (((((int64_t)(uVar9 * 5) < 10) || (local_78[1] < local_78[0])) ||
        (local_78[2] < local_78[1])) || (local_78[3] < local_78[2])) break;
    puVar12 = (void*)((int64_t)uStack_80 + uVar9 * 5);
    iVar11 = 0;
    do {
      do {
        lVar8 = 0;
        do {
          uVar7 = local_58[lVar8];
          uVar9 = uVar7 >> 0x35;
          bVar1 = *(byte *)(uVar3 + 2 + uVar9 * 4);
          bVar2 = *(byte *)(uVar3 + 3 + uVar9 * 4);
          puVar5 = (void*)(&local_98)[lVar8];
          *puVar5 = *(void*)(uVar3 + uVar9 * 4);
          local_58[lVar8] = uVar7 << ((uint64_t)bVar1 & 0x3f);
          (&local_98)[lVar8] = (uint64_t)bVar2 + (int64_t)puVar5;
          lVar8 = lVar8 + 1;
        } while (lVar8 != 3);
        iVar11 = iVar11 + 1;
      } while (iVar11 != 5);
      uVar7 = local_58[3] >> 0x35;
      bVar1 = *(byte *)(uVar3 + 2 + uVar7 * 4);
      bVar2 = *(byte *)(uVar3 + 3 + uVar7 * 4);
      *uStack_80 = *(void*)(uVar3 + uVar7 * 4);
      local_58[3] = local_58[3] << ((uint64_t)bVar1 & 0x3f);
      uStack_80 = (void*)((uint64_t)bVar2 + (int64_t)uStack_80);
      lVar8 = 0;
      while( true ) {
        uVar7 = local_58[3] >> 0x35;
        bVar1 = *(byte *)(uVar3 + 2 + uVar7 * 4);
        bVar2 = *(byte *)(uVar3 + 3 + uVar7 * 4);
        *uStack_80 = *(void*)(uVar3 + uVar7 * 4);
        local_58[3] = local_58[3] << ((uint64_t)bVar1 & 0x3f);
        uStack_80 = (void*)((uint64_t)bVar2 + (int64_t)uStack_80);
        uVar6 = 0;
        for (uVar7 = local_58[lVar8]; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x8000000000000000) {
          uVar6 = uVar6 + 1;
        }
        puVar10 = (uint64_t *)(local_78[lVar8] - (uint64_t)(uVar6 >> 3));
        local_78[lVar8] = (uint64_t)puVar10;
        local_58[lVar8] = (*puVar10 | 1) << ((byte)uVar6 & 7);
        if (lVar8 == 3) break;
        lVar8 = lVar8 + 1;
      }
      iVar11 = 0;
    } while (uStack_80 < puVar12);
  }
  this_ptr[10] = local_58[2];
  this_ptr[0xb] = local_58[3];
  this_ptr[8] = local_58[0];
  this_ptr[9] = local_58[1];
  this_ptr[2] = local_78[2];
  this_ptr[3] = local_78[3];
  *this_ptr = local_78[0];
  this_ptr[1] = local_78[1];
  uStack_80._4_4_ = (uint32_t)((uint64_t)uStack_80 >> 0x20);
  *(void*)(this_ptr + 6) = (uint32_t)local_88;
  *(void*)((int64_t)this_ptr + 0x34) = local_88._4_4_;
  *(void*)(this_ptr + 7) = (uint32_t)uStack_80;
  *(void*)((int64_t)this_ptr + 0x3c) = uStack_80._4_4_;
  *(void*)(this_ptr + 4) = (uint32_t)local_98;
  *(void*)((int64_t)this_ptr + 0x24) = local_98._4_4_;
  *(void*)(this_ptr + 5) = (uint32_t)uStack_90;
  *(void*)((int64_t)this_ptr + 0x2c) = uStack_90._4_4_;
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return;
}

