// Function: FUN_009646e7
// Address: 009646e7
// Size: 698 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_009646e7(void)

{
  uint64_t uVar1;
  uint32_t uVar2;
  uint uVar3;
  uint64_t uVar4;
  void*puVar5;
  void*puVar6;
  uint uVar7;
  int64_t lVar8;
  uint64_t this_ptr;
  uint uVar9;
  void*puVar10;
  bool bVar11;
  byte local_48 [4];
  byte local_44;
  byte bStack_43;
  byte bStack_42;
  byte bStack_41;
  byte local_40 [4];
  byte local_3c;
  byte bStack_3b;
  byte bStack_3a;
  byte bStack_39;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  if (this_ptr == 0) {
    uVar4 = 99;
  }
  else {
    uVar4 = 0x1f5;
    if ((this_ptr & 3) == 0) {
      lVar8 = 0;
      do {
        uVar2 = FUN_0097421d();
        *(void*)(this_ptr + lVar8) = uVar2;
        lVar8 = lVar8 + 4;
      } while (lVar8 != 0x10);
      puVar10 = (void*)(this_ptr + 0x14);
      lVar8 = 0;
      do {
        *(void*)(local_40 + lVar8 * 4) = *(void*)(this_ptr + lVar8 * 8);
        *(void*)(local_48 + lVar8 * 4) = *(void*)(this_ptr + 4 + lVar8 * 8);
        uVar2 = FUN_009649a1();
        *puVar10 = uVar2;
        puVar10 = puVar10 + -1;
        bVar11 = lVar8 == 0;
        lVar8 = 1;
      } while (bVar11);
      uVar7 = 0;
      lVar8 = 0;
      do {
        uVar9 = *(uint *)(&g_023c1890 +
                         (uint64_t)
                         ((&g_023c2490)[(&g_023c2590)[uVar7 >> 8 & 0xff] ^ bStack_3b] ^
                         local_40[1]) * 4) ^
                *(uint *)(&g_023c1490 +
                         (uint64_t)
                         ((&g_023c2490)[(&g_023c2490)[lVar8 * 2] ^ local_3c] ^ local_40[0]) * 4)
                ^ *(uint *)(&g_023c1c90 +
                           (uint64_t)
                           ((&g_023c2590)[(&g_023c2490)[uVar7 >> 0x10 & 0xff] ^ bStack_3a] ^
                           local_40[2]) * 4) ^
                *(uint *)(&g_023c2090 +
                         (uint64_t)
                         ((&g_023c2590)[(&g_023c2590)[uVar7 >> 0x18] ^ bStack_39] ^ local_40[3])
                         * 4);
        uVar3 = uVar7 + 0x1010101;
        uVar3 = *(uint *)(&g_023c1890 +
                         (uint64_t)
                         ((&g_023c2490)[(&g_023c2590)[uVar3 >> 8 & 0xff] ^ bStack_43] ^
                         local_48[1]) * 4) ^
                *(uint *)(&g_023c1490 +
                         (uint64_t)
                         ((&g_023c2490)[(&g_023c2491)[lVar8 * 2] ^ local_44] ^ local_48[0]) * 4)
                ^ *(uint *)(&g_023c1c90 +
                           (uint64_t)
                           ((&g_023c2590)[(&g_023c2490)[uVar3 >> 0x10 & 0xff] ^ bStack_42] ^
                           local_48[2]) * 4) ^
                *(uint *)(&g_023c2090 +
                         (uint64_t)
                         ((&g_023c2590)[(&g_023c2590)[uVar3 >> 0x18] ^ bStack_41] ^ local_48[3])
                         * 4);
        uVar3 = uVar3 << 8 | uVar3 >> 0x18;
        *(uint *)(this_ptr + 0x18 + lVar8 * 8) = uVar3 + uVar9;
        uVar9 = uVar9 + uVar3 * 2;
        *(uint *)(this_ptr + 0x1c + lVar8 * 8) = uVar9 * 0x200 | uVar9 >> 0x17;
        lVar8 = lVar8 + 1;
        uVar7 = uVar7 + 0x2020202;
      } while (lVar8 != 0x14);
      uVar4 = 0;
      if (*(int *)(this_ptr + 0xb8) == 0) {
        puVar5 = (void*)(this_ptr + 0x38);
        puVar6 = (void*)(this_ptr + 0xb0);
        do {
          uVar1 = *puVar5;
          *(void*)puVar5 = *(void*)puVar6;
          *(void*)((int64_t)puVar5 + 4) = *(void*)((int64_t)puVar6 + 4);
          *puVar6 = uVar1;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + -1;
        } while (puVar5 < puVar6);
        *(void*)(this_ptr + 0xb8) = 0;
      }
    }
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return uVar4;
  }
                      ___stack_chk_fail();
}

