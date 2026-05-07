// Function: FUN_0096761c
// Address: 0096761c
// Size: 922 bytes
// Class: MUScaleBrowserItem

void FUN_0096761c(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *arg1;
  int64_t this_ptr;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int64_t lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint64_t local_50;
  uint local_48 [4];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  local_68 = *(uint *)(this_ptr + 0xfc) ^ *arg1;
  uVar12 = *(uint *)(this_ptr + 0x100) ^ arg1[1];
  uVar13 = *(uint *)(this_ptr + 0x104) ^ arg1[2];
  uVar14 = *(uint *)(this_ptr + 0x108) ^ arg1[3];
  uVar7 = *(uint *)(this_ptr + 0x10c);
  local_50 = (uint64_t)local_68;
  uVar10 = (uint64_t)(byte)local_68;
  uStack_64 = uVar12;
  uStack_60 = uVar13;
  uStack_5c = uVar14;
  if (*(int *)(this_ptr + 4) < 2) {
    puVar8 = &local_68;
    puVar5 = local_48;
    uVar2 = 4;
  }
  else {
    iVar4 = 1;
    lVar11 = 0x47;
    puVar1 = local_48;
    puVar8 = &local_68;
    uVar9 = local_50;
    uVar2 = uVar12;
    uVar3 = uVar13;
    do {
      puVar5 = puVar8;
      puVar8 = puVar1;
      uVar6 = uVar7 ^ *(uint *)(&g_023c7a30 + uVar10 * 4) ^
              *(uint *)(&g_023c7e30 + (uint64_t)(uVar14 >> 8 & 0xff) * 4) ^
              *(uint *)(&g_023c8230 + (uint64_t)(uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&g_023c8630 + (uint64_t)(uVar2 >> 0x18) * 4);
      local_50 = (uint64_t)uVar6;
      *puVar8 = uVar6;
      uVar12 = *(uint *)(&g_023c7a30 + (uint64_t)(uVar2 & 0xff) * 4) ^
               *(uint *)(this_ptr + -0xc + lVar11 * 4) ^
               *(uint *)(&g_023c7e30 + (uint64_t)((uint)(uVar9 >> 8) & 0xff) * 4) ^
               *(uint *)(&g_023c8230 + (uint64_t)(uVar14 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&g_023c8630 + (uint64_t)(uVar3 >> 0x18) * 4);
      puVar8[1] = uVar12;
      uVar13 = *(uint *)(&g_023c7a30 + (uint64_t)(uVar3 & 0xff) * 4) ^
               *(uint *)(this_ptr + -8 + lVar11 * 4) ^
               *(uint *)(&g_023c7e30 + (uint64_t)(uVar2 >> 8 & 0xff) * 4) ^
               *(uint *)(&g_023c8230 + (uint64_t)((uint)(uVar9 >> 0x10) & 0xff) * 4) ^
               *(uint *)(&g_023c8630 + (uint64_t)(uVar14 >> 0x18) * 4);
      puVar8[2] = uVar13;
      uVar14 = *(uint *)(&g_023c7a30 + (uint64_t)(uVar14 & 0xff) * 4) ^
               *(uint *)(this_ptr + -4 + lVar11 * 4) ^
               *(uint *)(&g_023c7e30 + (uint64_t)(uVar3 >> 8 & 0xff) * 4) ^
               *(uint *)(&g_023c8230 + (uint64_t)(uVar2 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&g_023c8630 + (uVar9 >> 0x18) * 4);
      puVar8[3] = uVar14;
      iVar4 = iVar4 + 1;
      uVar7 = *(uint *)(this_ptr + lVar11 * 4);
      uVar10 = (uint64_t)(uVar6 & 0xff);
      lVar11 = lVar11 + 4;
      puVar1 = puVar5;
      uVar9 = local_50;
      uVar2 = uVar12;
      uVar3 = uVar13;
    } while (iVar4 < *(int *)(this_ptr + 4));
    uVar10 = (uint64_t)(uVar6 & 0xff);
    uVar2 = (int)lVar11 - 0x43;
  }
  *puVar5 = (uint)(byte)(&g_023c8a30)[uVar12 >> 0x18] << 0x18 ^
            (uint)(byte)(&g_023c8a30)[(uint64_t)(uVar13 >> 0x10) & 0xff] << 0x10 ^
            (uint)(byte)(&g_023c8a30)[(uint64_t)(uVar14 >> 8) & 0xff] << 8 ^
            (byte)(&g_023c8a30)[uVar10] ^ uVar7;
  puVar5[1] = (uint)(byte)(&g_023c8a30)[uVar13 >> 0x18] << 0x18 ^
              (uint)(byte)(&g_023c8a30)[(uint64_t)(uVar14 >> 0x10) & 0xff] << 0x10 ^
              (uint)(byte)(&g_023c8a30)[local_50 >> 8 & 0xff] << 8 ^
              (uint)(byte)(&g_023c8a30)[(uint64_t)uVar12 & 0xff] ^
              *(uint *)(this_ptr + 0xfc + (uint64_t)(uVar2 | 1) * 4);
  puVar5[2] = (uint)(byte)(&g_023c8a30)[uVar14 >> 0x18] << 0x18 ^
              (uint)(byte)(&g_023c8a30)[local_50 >> 0x10 & 0xff] << 0x10 ^
              (uint)(byte)(&g_023c8a30)[(uint64_t)(uVar12 >> 8) & 0xff] << 8 ^
              (uint)(byte)(&g_023c8a30)[(uint64_t)uVar13 & 0xff] ^
              *(uint *)(this_ptr + 0xfc + (uint64_t)(uVar2 | 2) * 4);
  puVar5[3] = (uint)(byte)(&g_023c8a30)[local_50 >> 0x18] << 0x18 ^
              (uint)(byte)(&g_023c8a30)[(uint64_t)(uVar12 >> 0x10) & 0xff] << 0x10 ^
              (uint)(byte)(&g_023c8a30)[(uint64_t)(uVar13 >> 8) & 0xff] << 8 ^
              (uint)(byte)(&g_023c8a30)[(uint64_t)uVar14 & 0xff] ^
              *(uint *)(this_ptr + 0xfc + (uint64_t)(uVar2 | 3) * 4);
  lVar11 = 0;
  do {
    arg1[lVar11] = puVar5[lVar11];
    puVar5[lVar11] = 0;
    puVar8[lVar11] = 0;
    lVar11 = lVar11 + 1;
  } while (lVar11 != 4);
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                      ___stack_chk_fail();
}

