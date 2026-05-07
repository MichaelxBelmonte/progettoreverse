// Function: FUN_00f05be4
// Address: 00f05be4
// Size: 540 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00f05be4(void)

{
  ushort uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint uVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint64_t *puVar10;
  uint64_t *this_ptr;
  uint64_t local_98;
  uint64_t uStack_90;
  uint64_t local_88;
  uint64_t uStack_80;
  uint64_t local_78 [4];
  uint64_t local_58 [4];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  uVar2 = this_ptr[0xc];
  uVar3 = this_ptr[0xe];
  uVar4 = this_ptr[0xd];
  local_58[2] = this_ptr[10];
  local_58[3] = this_ptr[0xb];
  local_58[0] = this_ptr[8];
  local_58[1] = this_ptr[9];
  local_78[2] = this_ptr[2];
  local_78[3] = this_ptr[3];
  local_78[0] = *this_ptr;
  local_78[1] = this_ptr[1];
  uStack_80 = this_ptr[7];
  local_88 = this_ptr[6];
  local_98 = this_ptr[4];
  uStack_90 = this_ptr[5];
  uVar9 = (uVar3 - uStack_80) / 5;
  uVar7 = (*this_ptr - uVar4) / 7;
  if (uVar9 < uVar7) {
    uVar7 = uVar9;
  }
  if (0x13 < (int64_t)(uVar7 * 5)) {
    uVar7 = uStack_80 + uVar7 * 5;
    do {
      if (((local_78[1] < local_78[0]) || (local_78[2] < local_78[1])) ||
         (local_78[3] < local_78[2])) break;
      lVar6 = 0;
      do {
        do {
          lVar8 = 0;
          do {
            uVar1 = *(ushort *)(uVar2 + (local_58[lVar8] >> 0x35) * 2);
            local_58[lVar8] = local_58[lVar8] << ((uint64_t)uVar1 & 0x3f);
            *(char *)((&local_98)[lVar8] + lVar6) = (char)(uVar1 >> 8);
            lVar8 = lVar8 + 1;
          } while (lVar8 != 4);
          lVar6 = lVar6 + 1;
        } while (lVar6 != 5);
        lVar6 = 0;
        do {
          uVar5 = 0;
          for (uVar9 = local_58[lVar6]; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x8000000000000000) {
            uVar5 = uVar5 + 1;
          }
          (&local_98)[lVar6] = (&local_98)[lVar6] + 5;
          puVar10 = (uint64_t *)(local_78[lVar6] - (uint64_t)(uVar5 >> 3));
          local_78[lVar6] = (uint64_t)puVar10;
          local_58[lVar6] = (*puVar10 | 1) << ((byte)uVar5 & 7);
          lVar6 = lVar6 + 1;
        } while (lVar6 != 4);
        lVar6 = 0;
      } while (uStack_80 < uVar7);
      uVar7 = (uVar3 - uStack_80) / 5;
      uVar9 = (local_78[0] - uVar4) / 7;
      if (uVar7 < uVar9) {
        uVar9 = uVar7;
      }
      uVar7 = uStack_80 + uVar9 * 5;
    } while (0x13 < (int64_t)(uVar9 * 5));
  }
  this_ptr[10] = local_58[2];
  this_ptr[0xb] = local_58[3];
  this_ptr[8] = local_58[0];
  this_ptr[9] = local_58[1];
  this_ptr[2] = local_78[2];
  this_ptr[3] = local_78[3];
  *this_ptr = local_78[0];
  this_ptr[1] = local_78[1];
  *(void*)(this_ptr + 6) = (uint32_t)local_88;
  *(void*)((int64_t)this_ptr + 0x34) = local_88._4_4_;
  *(void*)(this_ptr + 7) = (uint32_t)uStack_80;
  *(void*)((int64_t)this_ptr + 0x3c) = uStack_80._4_4_;
  *(void*)(this_ptr + 4) = (uint32_t)local_98;
  *(void*)((int64_t)this_ptr + 0x24) = local_98._4_4_;
  *(void*)(this_ptr + 5) = (uint32_t)uStack_90;
  *(void*)((int64_t)this_ptr + 0x2c) = uStack_90._4_4_;
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                      ___stack_chk_fail();
}

