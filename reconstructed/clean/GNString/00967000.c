// Function: FUN_00967000
// Address: 00967000
// Size: 926 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00967000(void)

{
  uint uVar1;
  uint uVar2;
  uint *arg1;
  int64_t this_ptr;
  uint uVar3;
  uint uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint *local_60;
  int local_4c;
  uint local_48 [4];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  uVar9 = *(uint *)(this_ptr + 0xc) ^ *arg1;
  uVar10 = *(uint *)(this_ptr + 0x10) ^ arg1[1];
  uVar11 = *(uint *)(this_ptr + 0x14) ^ arg1[2];
  uVar12 = *(uint *)(this_ptr + 0x18) ^ arg1[3];
  uVar3 = *(uint *)(this_ptr + 0x1c);
  uVar6 = (uint64_t)(uVar9 & 0xff);
  local_78 = uVar9;
  uStack_74 = uVar10;
  uStack_70 = uVar11;
  uStack_6c = uVar12;
  if (*(int *)(this_ptr + 4) < 2) {
    puVar8 = &local_78;
    local_60 = local_48;
    uVar4 = 4;
  }
  else {
    local_4c = 1;
    lVar5 = 0xb;
    local_60 = local_48;
    puVar7 = &local_78;
    uVar4 = uVar9;
    uVar2 = uVar10;
    uVar1 = uVar11;
    do {
      puVar8 = local_60;
      uVar9 = uVar3 ^ *(uint *)(&g_023c6a30 + uVar6 * 4) ^
              *(uint *)(&g_023c6e30 + (uint64_t)(uVar2 >> 8 & 0xff) * 4) ^
              *(uint *)(&g_023c7230 + (uint64_t)(uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&g_023c7630 + (uint64_t)(uVar12 >> 0x18) * 4);
      local_60 = puVar7;
      *puVar8 = uVar9;
      uVar10 = *(uint *)(&g_023c6a30 + (uint64_t)(uVar2 & 0xff) * 4) ^
               *(uint *)(this_ptr + -0xc + lVar5 * 4) ^
               *(uint *)(&g_023c6e30 + (uint64_t)(uVar1 >> 8 & 0xff) * 4) ^
               *(uint *)(&g_023c7230 + (uint64_t)(uVar12 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&g_023c7630 + (uint64_t)(uVar4 >> 0x18) * 4);
      puVar8[1] = uVar10;
      uVar11 = *(uint *)(&g_023c6a30 + (uint64_t)(uVar1 & 0xff) * 4) ^
               *(uint *)(this_ptr + -8 + lVar5 * 4) ^
               *(uint *)(&g_023c6e30 + (uint64_t)(uVar12 >> 8 & 0xff) * 4) ^
               *(uint *)(&g_023c7230 + (uint64_t)(uVar4 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&g_023c7630 + (uint64_t)(uVar2 >> 0x18) * 4);
      puVar8[2] = uVar11;
      uVar12 = *(uint *)(&g_023c6a30 + (uint64_t)(uVar12 & 0xff) * 4) ^
               *(uint *)(this_ptr + -4 + lVar5 * 4) ^
               *(uint *)(&g_023c6e30 + (uint64_t)(uVar4 >> 8 & 0xff) * 4) ^
               *(uint *)(&g_023c7230 + (uint64_t)(uVar2 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&g_023c7630 + (uint64_t)(uVar1 >> 0x18) * 4);
      puVar8[3] = uVar12;
      local_4c = local_4c + 1;
      uVar3 = *(uint *)(this_ptr + lVar5 * 4);
      uVar6 = (uint64_t)(uVar9 & 0xff);
      lVar5 = lVar5 + 4;
      puVar7 = puVar8;
      uVar4 = uVar9;
      uVar2 = uVar10;
      uVar1 = uVar11;
    } while (local_4c < *(int *)(this_ptr + 4));
    uVar6 = (uint64_t)(uVar9 & 0xff);
    uVar4 = (int)lVar5 - 7;
  }
  *local_60 = (uint)(byte)(&g_023c6730)[uVar12 >> 0x18] << 0x18 ^
              (uint)(byte)(&g_023c6730)[(uint64_t)(uVar11 >> 0x10) & 0xff] << 0x10 ^
              (uint)(byte)(&g_023c6730)[(uint64_t)(uVar10 >> 8) & 0xff] << 8 ^
              (byte)(&g_023c6730)[uVar6] ^ uVar3;
  puVar7 = local_60;
  local_60[1] = (uint)(byte)(&g_023c6730)[uVar9 >> 0x18] << 0x18 ^
                (uint)(byte)(&g_023c6730)[(uint64_t)(uVar12 >> 0x10) & 0xff] << 0x10 ^
                (uint)(byte)(&g_023c6730)[(uint64_t)(uVar11 >> 8) & 0xff] << 8 ^
                (uint)(byte)(&g_023c6730)[(uint64_t)uVar10 & 0xff] ^
                *(uint *)(this_ptr + 0xc + (uint64_t)(uVar4 | 1) * 4);
  puVar7[2] = (uint)(byte)(&g_023c6730)[uVar10 >> 0x18] << 0x18 ^
              (uint)(byte)(&g_023c6730)[(uint64_t)(uVar9 >> 0x10) & 0xff] << 0x10 ^
              (uint)(byte)(&g_023c6730)[(uint64_t)(uVar12 >> 8) & 0xff] << 8 ^
              (uint)(byte)(&g_023c6730)[(uint64_t)uVar11 & 0xff] ^
              *(uint *)(this_ptr + 0xc + (uint64_t)(uVar4 | 2) * 4);
  puVar7[3] = (uint)(byte)(&g_023c6730)[uVar11 >> 0x18] << 0x18 ^
              (uint)(byte)(&g_023c6730)[(uint64_t)(uVar10 >> 0x10) & 0xff] << 0x10 ^
              (uint)(byte)(&g_023c6730)[(uint64_t)(uVar9 >> 8) & 0xff] << 8 ^
              (uint)(byte)(&g_023c6730)[(uint64_t)uVar12 & 0xff] ^
              *(uint *)(this_ptr + 0xc + (uint64_t)(uVar4 | 3) * 4);
  lVar5 = 0;
  do {
    arg1[lVar5] = puVar7[lVar5];
    puVar7[lVar5] = 0;
    puVar8[lVar5] = 0;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 4);
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                      ___stack_chk_fail();
}

